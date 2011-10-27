(module backend_llvm
   (include "Engine/pass.sch"
	    "Ast/unit.sch"
	    "Tools/trace.sch")
   
   (import cc_exec
           cc_cc
           cc_ld

           engine_param
           engine_configure
           type_type
           tools_error
           tools_speek
           tools_shape
           object_slots
           backend_backend
           backend_cplib
           backend_bvm

           ast_var
           ast_env
	   ast_node
           ast_local
           ast_ident

           cnst_node

           object_class
           module_module
           type_env
           type_cache
           type_typeof

           llvm_ir
           )

   (export (class llvm::bvm)

           (wide-class sfun/integrated::sfun
              (label::bstring read-only)
              integrated::bool)

           (wide-class cfun/renamed-macro::cfun
              (new-name::bstring read-only))))

(register-backend! 'llvm
                   (lambda ()
                     (instantiate::llvm
                      (language 'llvm)
                      (foreign-clause-support '())
                      (heap-compatible 'c))))

(define *llc* "llc")
(define *assembler* "gcc")

(define-method (backend-link me::llvm prefix)
  (verbose 1 "      Translating IR " prefix #\Newline)
  (llc prefix)
  (verbose 1 "      Assembling " prefix ".s" #\Newline)
  (assemble prefix)
  (verbose 1 "      Compiling macro C code" #\Newline)
  (set-backend! 'c)
  (cc "macrogen-defs" #f #t)
  (verbose 1 "      Linking" #\Newline)
  (set! *o-files* (cons "macrogen-defs.o" *o-files*))
  (ld prefix #f))

(define (llc prefix)
  (let ((cmd (string-append *llc* " "
                            ; "-disable-cfi " ; needed with HEAD LLVM
                            prefix ".ll")))
    (exec cmd #t "llc")))

(define (assemble prefix)
  (let ((cmd (string-append *assembler* " -c " prefix ".s")))
    (exec cmd #t "as")))

(define (emit-comment . args)
  (display (let ((p (open-output-string)))
             (display ";; " p)
             (for-each (lambda (x) (display x p)) args)
             (newline p)
             (close-output-port p)) *ir-port*))

(define-method (backend-compile me::llvm)
  (if #t
      (begin
        (let ((port (open-output-file "macrogen-defs.c")))
          (emit-macrogen-functions port)
          (flush-output-port port)
          (close-output-port port))))

  (pass-prelude "LLVM IR generation"
                (lambda () (start-emission!)))

  (emit-header)
  (emit-newline)
  (emit-prelude)
  (emit-newline)
  (emit-prototypes)
  (emit-newline)
  (emit-function-definitions me)

  (stop-emission!))

(define (emit-newline)
  (newline *ir-port*))

(define (emit-header)
  (emit-comment "From " *src-files*)
  (emit-comment *bigloo-name*)
  (emit-comment (string-append *bigloo-author* " (c) " *bigloo-date*)))

(define (emit-prelude)
  ;; TODO: Make this portable?
  (send-chars
   (open-input-file
    (string-append (bigloo-config 'library-directory) "/bigloo.ll"))
   *ir-port*))

(define (emit-prototypes)
  (verbose 3 "      All types:\n")
  (for-each-global!
   (lambda (global)
     (set-variable-name! global)
       (if (require-prototype? global)
           (begin
             (emit-prototype (global-value global) global)
             (emit-newline))))))

(define (emit-ir . nodes)
  (display (line-tree->string
            (ir-node->line-tree (apply make-node-seq nodes)) -1)
           *ir-port*)
  (emit-newline))

(define-generic (emit-prototype value::value variable::variable))

(define-method (emit-prototype value::cfun variable)
  (verbose 3 "       emit-prototype ::cfun " (variable-id variable) "\n")
  (with-access::global variable (id type name library)
     (let* ((arity (cfun-arity value))
            (targs (cfun-args-type value)))
       (if (<fx arity 0)
           (verbose 1 "       skipping varargs fun\n")
           (begin
             (verbose 3 "        args: " (map type->ir-type targs) "\n")
             (emit-ir
              (comment "C function `~s'" id)
              (instantiate::ir-function-decl
               (return-type (type->ir-type type))
               (name (if (cfun/renamed-macro? value)
                         (cfun/renamed-macro-new-name value)
                         name))
               (arguments (map type->ir-type targs)))))))))
  
(define-method (emit-prototype value::sfun variable)
  (verbose 3 "       emit-prototype ::sfun " (variable-id variable)
           " " (variable-name variable) "\n")
  (with-access::global variable (id type name import)
     (let ((types (map (lambda (a)
                           (let ((t (if (type? a)
                                        a
                                        (local-type a))))
                             (type->ir-type t)))
                       (sfun-args value))))
       (verbose 3 "        args: " types "\n")
       (emit-ir
        (comment "Scheme function `~s' (~s)" id import)
        (instantiate::ir-function-decl
         (return-type (type->ir-type type))
         (name name)
         (arguments types))))))

(define-method (emit-prototype value::svar variable)
  (verbose 3 "       emit-prototype ::svar " (variable-id variable) "\n")
  (with-access::global variable (id type name import)
     (emit-ir
      (comment "Scheme variable `~s' (~s)" id import)
      (instantiate::ir-assignment
       (name (string-append "@" name))
       (node (instantiate::ir-global-variable
              (initial-value (instantiate::ir-zero-initializer
                              (value-type (type->ir-type type))))))))))

(define-method (emit-prototype value::scnst variable)
  (verbose 3 "       emit-prototype ::scnst " (variable-id variable) "\n")
  (with-access::global variable (id type name import)
    (case (scnst-class value)
      ((sfun)
       (emit-scnst-sfun (scnst-node value) variable))
      ((sstring)
       (emit-scnst-sstring (scnst-node value) variable))
      (else
       ;; TODO: do something!!
       (emit-ir
        (comment "Scheme constant `~s' (~s)" id import)
        (instantiate::ir-assignment
         (name (string-append "@" name))
         (node (instantiate::ir-global-variable
                (initial-value (instantiate::ir-zero-initializer
                                (value-type (type->ir-type type))))))))
       (verbose 3 "        class " (scnst-class value) "\n")))))

(define (emit-scnst-sfun value variable)
  (let* ((actuals (app-args value))
         (entry   (car actuals))
         (arity   (get-node-atom-value (cadr actuals)))
         (vname   (string-append "@" (set-variable-name! variable)))
         (name    (string-append "@" (set-variable-name!
                                      (var-variable entry)))))
    (if (< arity 0)
        (raise "emit-scnst-sfun no varargs")
        (emit-ir
         (comment "Scheme procedure `~s'" (variable-id variable))
         (macro-define-static-procedure
          vname
          (string-append "@" (id->name (gensym name)))
          (var->ir-node/ptr (var-variable entry))
          (instantiate::ir-lit-int
           (value-type *llvm-long-type*)
           (value 0))
          (macro-tag
           (instantiate::ir-lit-int
            (value-type *llvm-long-type*)
            (value 3))
           *bgl-tag-shift*
           *bgl-tag-cnst*)
          arity)))))

(define (emit-scnst-sstring value variable)
  (set-variable-name! variable)
  (emit-ir
   (comment "Constant string `~s' (~s)"
            (variable-id variable) value)
   (macro-define-string
    (string-append "@" (global-name variable))
    (string-append "@" (id->name (gensym (global-name variable))))
    value
    (string-length value))))
  
(define-method (emit-prototype value::value variable)
  (verbose 3 "       emit-prototype dummy " (variable-id variable)
           " " value "\n"))

;; from c_proto, but changed
(define (require-prototype? global)
  (and (or (not (eq? (global-module global) *module*))
           (not (sfun? (global-value global))))
       (or (>fx (global-occurrence global) 0)
           (eq? (global-removable global) 'never))))

(define-method (backend-link-objects me::llvm sources)
  (verbose 1 "      backend-link-objects llvm" sources #\Newline))

;; TODO: How does this table work?
(define-method (backend-cnst-table-name me::llvm offset)
  "__cnst")

(define *dest-prefix* #f)
(define *ir-port*     #f)

(define (start-emission!)
  ;; TODO: handle *dest*
  (let* ((prefix (prefix (car *src-files*)))
         (filename (string-append prefix ".ll")))
    (set! *ir-port* (open-output-file filename))
    (set! *dest-prefix* prefix)
    (if (not (output-port? *ir-port*))
        (error *bigloo-name* "Can't open file for output" filename)
        #unspecified)))

(define (stop-emission!)
  (flush-output-port *ir-port*)
  (close-output-port *ir-port*)
  (set! *ir-port* #f)
  *dest-prefix*)

(define (emit-function-definitions llvm::llvm)
  (for-each emit-function-definition (llvm-functions llvm)))

(define (emit-function-definition global::global)
  (with-access::global global (type id name import value)
    (let ((arg-assoc
           (map (lambda (local)
                  (list local
                        (fresh-ir-variable
                         'arg (type->ir-type (local-type local)))))
                (sfun-args value))))
     (emit-comment id "(" import ")")
     (emit-ir
      (instantiate::ir-function-defn
       (return-type (type->ir-type type))
       (name name)
       (arguments (map (lambda (v)
                         (list (ir-variable-type (cadr v))
                               (ir-variable-name (cadr v))))
                       arg-assoc))
       (blocks
        (list
         (apply make-node-seq
                (map (lambda (arg)
                       (compile-allocate-formal
                        arg (cadr (assoc arg arg-assoc))))
                     (sfun-args value)))
         (node->ir-node (sfun-body value) ret-kont))))))))

(define (compile-allocate-formal local #!optional initial-value)
  (set-variable-name! local)
  (let* ((name (string-append "%" (local-name local)))
         (type (type->ir-type/ptr (local-type local)))
         (var (instantiate::ir-variable
               (name name) (value-type type)))
         (allocation (compile-local-allocation var)))
    (make-node-seq
     (comment "Parameter `~s'" (local-id local))
     (if initial-value
         (make-node-seq
          allocation
          (compile-store var initial-value))
         allocation))))
     

;;; LLVM versions of Bigloo types.

(define *llvm-object-type* (make-ir-named-type "obj_t"))
(define *llvm-string-type* *llvm-object-type*)
(define *llvm-int-type* (make-ir-primitive-type "i32"))
(define *llvm-bool-type* (make-ir-primitive-type "i1"))
(define *llvm-long-type* (make-ir-primitive-type "i32"))
(define *llvm-double-type* (make-ir-primitive-type "double"))

(define (type->ir-type type)
  (if (ir-type? type)
      type
      (if (bigloo-type? type)
          *llvm-object-type*
          (case (type-id type)
            ((string) *llvm-string-type*)
            ((long) *llvm-long-type*)
            ((int) *llvm-int-type*)
            ((bool) *llvm-bool-type*)
            (else
             (internal-error 'type->ir-type "unhandled type"
                             (type-id type)))))))

(define (pointerify type)
  (instantiate::ir-pointer-type
   (value-type (type->ir-type type))))

(define unpointerify ir-pointer-type-value-type)

(define (type->ir-type/ptr type)
  (instantiate::ir-pointer-type
   (value-type (type->ir-type type))))


;;; Compiling AST nodes to LLVM IR nodes.

(define-generic (node->ir-node::ir-node node::node kont::procedure))

(define-method (node->ir-node node::let-var kont)
  (verbose 3 "       node->ir-node ::let-var\n")
  (with-access::let-var node (body bindings)
     (let ((assignments
            (map (lambda (x)
                   (set-variable-name! (car x))
                   (let* ((var (var->ir-node/ptr (car x)))
                          (name (ir-variable-name var))
                          (type (ir-variable-type var)))
                     (node->ir-node
                      (cdr x)
                      (lambda (v)
                        (make-node-seq
                         (comment "Local variable ~s" (variable-id (car x)))
                         (compile-local-allocation var)
                         (compile-store/aux var v))))))
                 bindings)))
       (make-node-seq assignments (node->ir-node body kont)))))

(define-method (node->ir-node node::let-fun kont)
  ;; Thankfully, the compiler has already made sure that local `labels'
  ;; functions are only called in tail position!  We compile these like the C
  ;; backend does: the first encountered application is inlined, and other
  ;; applications jump to that inlined code.
  (verbose 3 "       node->ir-node ::let-fun\n")
  (with-access::let-fun node (body locals)
    (let loop ((locals locals)
               (formals-code '()))

      (define (compile-more-functions)
        (let ((local (car locals)))
          (set-variable-name! local)
          ;; Widen the function value to store a label and a flag for whether
          ;; it has been inlined yet.  Then compile storage for its
          ;; parameters, to be reused by all invocations.
          (let* ((fun (widen!::sfun/integrated (local-value local)
                                               (label (local-name local))
                                               (integrated #f)))
                 (allocs
                  (cons
                   (comment "Parameters for local function ~s"
                            (local-id local))
                   (map compile-allocate-formal (sfun-args fun)))))
            (loop (cdr locals) (append allocs formals-code)))))

      (define (compile-body)
        (make-node-seq formals-code (node->ir-node body kont)))

      (if (null? locals)
          (compile-body)
          (compile-more-functions)))))

(define-method (node->ir-node node::app kont)
  (verbose 3 "       node->ir-node ::app\n")
  (with-access::app node (fun)
     (let* ((var (var-variable fun))
            (val (variable-value var)))
       (set-variable-name! var)

       ;; Dispatch on the function kind.
       (cond ((sfun? val)
              (if (global? var)
                  (sfun-app->ir-node node var val kont)
                  (sfun-local-app->ir-node node var val kont)))
             ((cfun? val)
              (cfun-app->ir-node node var val kont))
             (else
              ;; TODO: Handle all kinds.
              (begin
                (verbose 3 "        skipping " (variable-id var) "\n")
                (make-node-seq
                 (comment "Skipped call to `~s'" (variable-id var))
                 (compile-undef
                  (type->ir-type (variable-type var)) kont))))))))

(define (cfun-app->ir-node node var cfun kont)
  (if (cfun/renamed-macro? cfun)
      (with-access::variable var (name)
        (set! name (cfun/renamed-macro-new-name cfun))))
  (sfun-app->ir-node node var cfun kont))
  
;; Compile an application of a global Scheme function.
(define (sfun-app->ir-node node var sfun kont)
  (let ((args (if (cfun? sfun)
                  (cfun-args-type sfun)
                  (sfun-args sfun))))
    (let loop ((arg-types (map arg-type args))
               (args (app-args node))
               (arg-code '())
               (auxs '()))
      
      (define (compile-more-arguments)
        ;; Compile each argument expression naming each result instruction.
        (let* ((aux (fresh-ir-variable 'aux (type->ir-type (car arg-types))))
               (name (ir-variable-name aux))
               (type (ir-variable-type aux))
               (setter (node->ir-node (car args) (make-assignment-kont aux))))
          (loop (cdr arg-types) (cdr args)
                (cons setter arg-code)
                (cons aux auxs))))
      
      (define (compile-call)
        (make-node-seq
         (comment "Arguments to `~s'" (variable-id var))
         (reverse! arg-code)
         (comment "Call to `~s'" (variable-id var))
         ;; Call the function in `var' and give back its result.
         (kont (instantiate::ir-instr-call
                (function-type (var->ir-type var))
                (function (var->ir-node var))
                (args (reverse auxs))))))
      
      (if (null? args)
          (compile-call)
          (compile-more-arguments)))))

;; Compile an application of a local Scheme function.  This is guaranteed to
;; be a tail call.  See the code for node->ir-node ::let-fun.
(define (sfun-local-app->ir-node node var sfun kont)
  (let loop ((args (app-args node))
             (formals (sfun-args sfun))
             (arg-code '()))

    (define (compile-more-arguments)
      ;; Variables for each formal have already been allocated by
      ;; node->ir-node ::let-fun, so just store to them.
      (let* ((formal (car formals))
             (name (local-name formal))
             (type (local-type formal))
             (aux (fresh-ir-variable (variable-id formal) type))
             (setter (node->ir-node
                      (car args)
                      (lambda (x)
                        (make-node-seq
                         (instantiate::ir-assignment
                          (name (ir-variable-name aux))
                          (node x))
                         (compile-store (var->ir-node/ptr formal) aux))))))
        (loop (cdr args) (cdr formals) (cons setter arg-code))))

    (define (compile-call)
      (let* ((label (sfun/integrated-label sfun))
             (branch (instantiate::ir-instr-br-unconditional
                      (label (instantiate::ir-label
                              (name label))))))
        (if (sfun/integrated-integrated sfun)
            ;; Local function has already been inlined somewhere in the
            ;; surrounding global function.
            (make-node-seq
             (comment "Local tail call to `~s'" (variable-id var))
             branch)
            (begin
              ;; Not inlined yet; compile the function body here.
              (sfun/integrated-integrated-set! sfun #t)
              (make-node-seq
               (comment "Inlined local function `~s'" (variable-id var))
               ;; Need a branch here to terminate the basic block.
               branch
               (make-labeled-node-seq
                label
                (node->ir-node (sfun-body sfun) kont)))))))
    
    (if (null? args)
        (make-node-seq (reverse! arg-code) (compile-call))
        (compile-more-arguments))))

(define-method (node->ir-node node::var kont)
  (verbose 3 "       node->ir-node ::var\n")
  (set-variable-name! (var-variable node))
  (kont (instantiate::ir-instr-load
         (pointer (var->ir-node/ptr (var-variable node))))))

(define-method (node->ir-node node::conditional kont)
  (verbose 3 "       node->ir-node ::conditional\n")
  (with-access::conditional node (test true false)
     (let* ((test-var (fresh-ir-variable 'test *bool*))
            (result-var
             (fresh-ir-variable 'result (pointerify (get-type node))))
            (result-kont (make-store-kont result-var))
            (true-label (make-label 'true))
            (false-label (make-label 'false))
            (done-label (make-label 'done)))

       (define (compile-branch label branch)
         (instantiate::ir-node-seq
          (label label)
          (nodes
           (list (node->ir-node branch result-kont)
                 (instantiate::ir-instr-br-unconditional
                  (label (instantiate::ir-label (name done-label))))))))

       (let ((test-code (node->ir-node test (make-assignment-kont test-var)))
             (branch-code 
              (instantiate::ir-instr-br
               (condition test-var)
               (true-label (instantiate::ir-label (name true-label)))
               (false-label (instantiate::ir-label (name false-label)))))
             (done-code
              (make-labeled-node-seq done-label
                                     (kont (compile-load result-var)))))
         (make-node-seq
          (comment "Test expression for `if' form")
          test-code
          (compile-local-allocation result-var)
          branch-code
          (comment "Positive arm of `if' form")
          (compile-branch true-label true)
          (comment "Negative arm of `if' form")
          (compile-branch false-label false)
          done-code)))))

(define-method (node->ir-node node::sequence kont)
  (verbose 3 "       node->ir-node ::sequence\n")
  (let ((throw-away-kont
         (lambda (x)
           (let ((var (fresh-ir-variable 'null
                                         (ir-value-type x))))
             (instantiate::ir-assignment
              (name (ir-variable-name var))
              (node x))))))
    (let loop ((nodes (sequence-nodes node))
               (code '()))
      (if (null? (cdr nodes))
          (apply make-node-seq
                 (reverse! (cons (node->ir-node (car nodes) kont) code)))
          (loop (cdr nodes)
                (cons (node->ir-node (car nodes) throw-away-kont) code))))))

(define-method (node->ir-node node::setq kont)
  (let* ((variable (var-variable (setq-var node)))
         (var (var->ir-node/ptr variable)))
    (verbose 3 "       node->ir-node ::setq "
             (variable-name variable) #\Newline)
    (make-node-seq
     (comment "Assignment to variable `~s'" (variable-id variable))
     (node->ir-node (setq-value node)
                    (lambda (x)
                      (make-node-seq
                       (compile-store/aux var x)
                       (kont x)))))))

(define-method (node->ir-node node::atom kont)
  (verbose 3 "       node->ir-node ::atom: " (atom-value node) #\Newline)
  (let ((value (atom-value node))
        (type (type->ir-type (get-type node))))
    (make-node-seq
     (comment "Atom `~s'" value)
     (cond 
      ((fixnum? value)
       (compile-lit (instantiate::ir-lit-int
                     (value-type type)
                     (value value)) kont))
      ((null? value)
       (compile-lit *bgl-nil* kont))
      ((eq? value #f)
       (compile-lit (ir-bool 0) kont))
      ((eq? value #t)
       (compile-lit (ir-bool 1) kont))
      ((eq? value #unspecified)
       (compile-lit *bgl-unspec* kont))
      (else
       (verbose 3 "        unhandled type of atom\n")
       (make-node-seq
        (comment "(Unhandled atom type)" value)
        (compile-undef type kont)))))))
            

(define-method (node->ir-node dummy::node kont)
  (verbose 3 "       node->ir-node unhandled " dummy #\Newline)
  (make-node-seq
   (comment "Unhandled node type `~s'" dummy)
   (compile-undef (type->ir-type (get-type dummy)) kont)))


;;; IR generation helpers.

(define (compile-undef type kont)
  (let ((ptr-var (fresh-ir-variable 'undef (pointerify type))))
    (make-node-seq
     (compile-local-allocation ptr-var)
     (kont (instantiate::ir-instr-load
            (pointer ptr-var))))))

(define (compile-lit value kont)
  (let* ((type (ir-value-type value))
         (ptr-var (fresh-ir-variable 'literal (pointerify type))))
    (make-node-seq
     (compile-local-allocation ptr-var)
     (compile-store ptr-var value)
     (kont (compile-load ptr-var)))))

;; TODO: don't do it this stupid way
(define (make-label symbol)
  (variable-name (make-local-svar symbol *_*)))

(define (make-assignment-kont var)
  (lambda (x)
    (instantiate::ir-assignment
     (name (ir-variable-name var))
     (node x))))

(define (make-store-kont var)
  (lambda (x)
    (compile-store/aux var x)))

(define (ret-kont x)
  (let ((aux (fresh-ir-variable 'aux (ir-value-type x))))
    (verbose 3 "        ret-kont " (ir-value-type x) #\Newline)
    (make-node-seq
     (compile-assignment aux x)
     (instantiate::ir-instr-ret
      (value aux)))))

(define (arg-type arg)
  (if (local? arg) (local-type arg) arg))

(define (var->ir-type var)
  (let ((x (variable-value var)))
    (if (fun? x)
        (let ((args (if (cfun? x)
                        (cfun-args-type x)
                        (sfun-args x))))
          (instantiate::ir-function-type
           (return-type (type->ir-type (variable-type var)))
           (parameter-types (map (lambda (a)
                                   (type->ir-type (arg-type a)))
                                 args))))
        (type->ir-type (variable-type var)))))

(define (var->ir-node var)
  (instantiate::ir-variable
   (value-type (var->ir-type var))
   (name (var->ir-name var))))

(define (var->ir-node/ptr var)
  (instantiate::ir-variable
   (value-type (pointerify (var->ir-type var)))
   (name (var->ir-name var))))

(define (var->ir-name var)
  (string-append (if (global? var) "@" "%") (variable-name var)))

(define (fresh-ir-variable symbol type)
  ;; Maybe should do this without messing with the variable tables.
  (instantiate::ir-variable
   (value-type (type->ir-type type))
   (name (string-append "%" (variable-name (make-local-svar symbol *_*))))))

(define (compile-local-allocation var)
  (compile-assignment
   var (instantiate::ir-instr-alloca
        (element-type (unpointerify (ir-variable-type var))))))

(define (compile-assignment var value)
  (instantiate::ir-assignment
   (name (ir-variable-name var))
   (node value)))

(define (compile-store var value)
  (instantiate::ir-instr-store (pointer var) (value value)))

(define (compile-store/aux var value)
  (let ((aux (fresh-ir-variable 'aux (unpointerify
                                      (ir-variable-type var)))))
    (make-node-seq
     (compile-assignment aux value)
     (compile-store var aux))))

(define (compile-load var)
  (instantiate::ir-instr-load (pointer var)))

(define (make-node-seq . stuff)
  (if (null? stuff)
      (instantiate::ir-null-node)
      (if (null? (cdr stuff))
          (car stuff)
          (instantiate::ir-node-seq
           (nodes (apply append (map (lambda (x)
                                       (if (list? x)
                                           x
                                           (list x))) stuff)))))))

(define (make-labeled-node-seq label . stuff)
  (instantiate::ir-node-seq
   (label label)
   (nodes (apply append (map (lambda (x)
                               (if (list? x)
                                   x
                                   (list x))) stuff)))))

(define (comment . stuff)
  (instantiate::ir-comment (text (apply format stuff))))

(define *newline* (instantiate::ir-newline))

(define (ir-long x)
  (instantiate::ir-lit-int
   (value-type *llvm-long-type*)
   (value x)))

(define (ir-bool x)
  (instantiate::ir-lit-int
   (value-type *llvm-bool-type*)
   (value x)))

;;; Macro generation stuff.

(define (emit-macrogen-functions port)
  (fprintf port "#include <bigloo.h>\n\n")
  (fprintf port "extern obj_t __cnst[];\n\n" )
  (for-each-global!
   (lambda (global)
     (let ((value (global-value global)))
       (if (and (cfun? value)
                (cfun-macro? value)
                (require-prototype? global))
           (emit-macrogen-function global value port))))))

(define (emit-macrogen-function global cfun port)
  (let* ((type (type-name (global-type global)))
         (new-name (bigloo-mangle
                    (symbol->string (new-name (global-id global)))))
         (args (let loop ((arg-names (reverse *arg-names*))
                          (arg-types (reverse (cfun-args-type cfun)))
                          (aux '()))
                 (if (null? arg-types)
                     aux
                     (loop (cdr arg-names) (cdr arg-types)
                           (cons (list (car arg-types)
                                       (symbol->string (car arg-names)))
                                 aux)))))
         (param-list (string-join ", "
                                  (map (lambda (x)
                                         (string-append (type-name (car x)) " "
                                                        (cadr x)))
                                       args))))
    (widen!::cfun/renamed-macro cfun (new-name new-name))
    (fprintf port "~a ~a (~a)" type new-name param-list)
    (if (cfun-infix? cfun)
        (case (length args)
          ((0) (fprintf port "{ return ~a; }~%" (variable-name global)))
          ((1) (fprintf port "{ return ~a ~a; }~%" (variable-name global)
                        (cadr (car args))))
          ((2) (fprintf port "{ return ~a ~a ~a; }~%"
                        (cadr (car args))
                        (variable-name global)
                        (cadr (cadr args)))))
        (fprintf port "{ return ~a (~a); }~%" 
                 (variable-name global)
                 (string-join ", " (map cadr args))))))
             

(define (new-name symbol)
  (string->symbol (string-append "llvm-" (symbol->string symbol))))

(define *arg-names* '(a b c d e f g))


;;; Macro stuff.

(define (macro-tag val shift tag)
  (build-ir-expr
   *llvm-long-type*
   'or
   (build-ir-expr *llvm-long-type* 'shl val shift)
   tag))

(define *bgl-header-shift* (ir-long 3))
(define *bgl-header-size-bit-size* (ir-long 16))
(define *bgl-type-shift*
  (build-ir-expr
   *llvm-long-type*
   'add *bgl-header-shift* *bgl-header-size-bit-size*))

;; TODO: 64-bit support
(define *bgl-tag-shift* (ir-long 2))

(define *bgl-tag-cnst* (ir-long 2))

(define (macro-make-header i sz)
  (let ((tag (build-ir-expr *llvm-long-type* 'shl
                            sz *bgl-header-shift*)))
    (macro-tag i *bgl-type-shift* tag)))

(define (macro-define-static-procedure n na p vp at nb-args)
  (let ((struct
         (instantiate::ir-lit-struct
          (values
           (list
            (instantiate::ir-lit-int
             (value-type *llvm-double-type*)
             (value 0.0))
            (macro-make-header (ir-long 3) (ir-long 0))
            p vp
            at
            (ir-long nb-args))))))
    (instantiate::ir-node-seq
     (nodes
      (list 
       (instantiate::ir-assignment
        (name na)
        (node
         (instantiate::ir-global-variable
          (linkage 'private)
          (constant? #t)
          (initial-value struct))))
       (instantiate::ir-assignment
        (name n)
        (node
         (instantiate::ir-global-variable
          (linkage 'private)
          (constant? #t)
          (initial-value
           (build-ir-expr
            *llvm-object-type*
            'bitcast
            (build-ir-expr
             (pointerify *llvm-long-type*)
             'getelementptr
             (instantiate::ir-variable
              (name na)
              (value-type (pointerify (ir-value-type struct))))
             (ir-long 0)
             (ir-long 1))
            *llvm-object-type*))))))))))

(define (bgl-make-cnst tag)
  (build-ir-expr
   *llvm-object-type*
   'inttoptr
   (macro-tag (ir-long tag) *bgl-tag-shift* *bgl-tag-cnst*)
   *llvm-object-type*))

(define *bgl-nil* (bgl-make-cnst 0))
(define *bgl-false* (bgl-make-cnst 1))
(define *bgl-true* (bgl-make-cnst 2))
(define *bgl-unspec* (bgl-make-cnst 3))

(define (macro-define-string global-name local-name s n)
  (let ((struct
         (instantiate::ir-lit-struct
          (values
           (list
            (instantiate::ir-lit-int
             (value-type *llvm-double-type*)
             (value 0.0))
            (macro-make-header (ir-long 1) (ir-long 0))
            (ir-long n)
            (instantiate::ir-lit-string
             (text s)))))))
    (instantiate::ir-node-seq
     (nodes
      (list 
       (instantiate::ir-assignment
        (name local-name)
        (node
         (instantiate::ir-global-variable
          (linkage 'private)
          (constant? #t)
          (initial-value struct))))
       (instantiate::ir-assignment
        (name global-name)
        (node
         (instantiate::ir-global-variable
          (linkage 'private)
          (constant? #t)
          (initial-value
           (build-ir-expr
            *llvm-object-type*
            'bitcast
            (build-ir-expr
             (pointerify *llvm-long-type*)
             'getelementptr
             (instantiate::ir-variable
              (name local-name)
              (value-type (pointerify (ir-value-type struct))))
             (ir-long 0)
             (ir-long 1))
            *llvm-object-type*))))))))))
