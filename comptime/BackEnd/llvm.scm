(module backend_llvm
   (include "Engine/pass.sch"
	    "Ast/unit.sch"
	    "Tools/trace.sch")
   
   (import cc_exec
           engine_param
           engine_configure
           type_type
           tools_error
           tools_speek
           object_slots
           backend_backend
           backend_cplib
           backend_bvm

           ast_var
           ast_env
	   ast_node
           ast_local

           object_class
           module_module
           type_env
           type_cache

           llvm_ir
           )

   (export (class llvm::bvm)))

(register-backend! 'llvm build-llvm-backend)

(define (build-llvm-backend)
  (instantiate::llvm
     (language 'llvm)
     (heap-compatible 'c)))

(define *llc* "llc")
(define *assembler* "gcc")

(define-method (backend-link me::llvm prefix)
  (verbose 1 "      Translating IR " prefix #\Newline)
  (llc prefix)
  (verbose 1 "      Assembling " prefix ".s" #\Newline)
  (assemble prefix))

(define (llc prefix)
  (let ((cmd (string-append *llc* " " prefix ".ll")))
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
  (pass-prelude "LLVM IR generation"
                (lambda () (start-emission!)))

  (emit-header)
  (emit-prototypes)
  (emit-function-definitions me)

  (stop-emission!))

(define (emit-header)
  (emit-comment "From " *src-files*)
  (emit-comment *bigloo-name*)
  (emit-comment (string-append *bigloo-author* " (c) " *bigloo-date*))
  (newline *ir-port*))

(define (emit-prototypes)
  (verbose 3 "      All types:\n")
  (for-each-global!
   (lambda (global)
     (if (require-prototype? global)
         (emit-prototype (global-value global) global)))))

(define (emit-ir node::ir-node)
  (display (line-tree->string (ir-node->line-tree node) -1) *ir-port*)
  (newline *ir-port*))

(define-generic (emit-prototype value::value variable::variable))

(define-method (emit-prototype value::cfun variable)
  (verbose 3 "       emit-prototype ::cfun " (variable-id variable) "\n")
  (if (not (cfun-macro? value))         ; don't prototype "==" etc
      (with-access::global variable (id type name library)
        (let* ((arity (cfun-arity value))
               (targs (cfun-args-type value)))
          (if (<fx arity 0)
              (verbose 1 "       skipping varargs fun\n")
              (begin
                (verbose 3 "        args: " (map type->ir-type targs) "\n")
                (emit-ir
                 (instantiate::ir-function-decl
                  (return-type (type->ir-type type))
                  (name name)
                  (arguments (map type->ir-type targs))))))))))
  
(define-method (emit-prototype value::sfun variable)
  (verbose 3 "       emit-prototype ::sfun " (variable-id variable) "\n")
  (with-access::variable variable (id type name)
     (set-variable-name! variable)
     (let ((types (map (lambda (a)
                           (let ((t (if (type? a)
                                        a
                                        (local-type a))))
                             (type->ir-type t)))
                       (sfun-args value))))
       (verbose 3 "        args: " types "\n")
       (emit-ir
        (instantiate::ir-function-decl
         (return-type (type->ir-type type))
         (name name)
         (arguments types))))))

(define-method (emit-prototype value::svar variable)
  (verbose 3 "       emit-prototype ::svar " (variable-id variable) "\n")
  (with-access::variable variable (id type name)
     (set-variable-name! variable)
     (emit-ir
      (instantiate::ir-assignment
       (name (string-append "@" name))
       (node (instantiate::ir-global-variable
              (initial-value (instantiate::ir-zero-initializer
                              (type (type->ir-type type))))))))))

(define-method (emit-prototype value::value variable)
  (verbose 3 "       emit-prototype dummy " (variable-id variable)
           " " value "\n"))

;; from c_proto
(define (require-prototype? global)
   (and (or (eq? (global-module global) *module*)
	    (not (eq? (global-import global) 'static)))
	(or (and (eq? (global-module global) *module*)
		 (eq? (global-import global) 'export))
	    (>fx (global-occurrence global) 0)
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
     (emit-ir
      (instantiate::ir-function-defn
       (return-type (type->ir-type type))
       (name name)
       (arguments
        (map (lambda (local)
               (with-access::local local (name id type)
                  (list (type->ir-type type)
                        (string-append "%" name))))
             (sfun-args value)))
       (blocks
        (list (node->ir-node (sfun-body value)
                             (lambda (x)
                               (instantiate::ir-instr-ret
                                (value x))))))))))


;;; LLVM versions of Bigloo types.

(define *llvm-object-type* (make-ir-primitive-type "i8*"))
(define *llvm-string-type* (make-ir-primitive-type "i8*"))
(define *llvm-int-type* (make-ir-primitive-type "i32"))
(define *llvm-bool-type* (make-ir-primitive-type "i1"))
(define *llvm-long-type* (make-ir-primitive-type "i32"))

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
   (value-type type)))

(define unpointerify ir-pointer-type-value-type)

(define (type->ir-type/ptr type)
  (instantiate::ir-pointer-type
   (value-type (type->ir-type type))))


;;; Compiling AST nodes to LLVM IR nodes.

(define-generic (node->ir-node::ir-node node::node kont::procedure))

(define-method (node->ir-node node::let-var kont)
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
                         (compile-local-allocation name type)
                         (compile-store var v))))))
                 bindings)))
       (make-node-seq assignments (node->ir-node body kont)))))

(define-method (node->ir-node node::app kont)
  (with-access::app node (fun)
     (let* ((var (var-variable fun))
            (val (variable-value var)))
       (if (sfun? val)
           (sfun-app->ir-node node var val kont)
           ;; TODO: Support non-sfuns.
           (kont (instantiate::ir-undef
                  (type (instantiate::ir-primitive-type
                         (name "i8*")))))))))

(define (sfun-app->ir-node node var sfun kont)
  (let loop ((arg-types (map arg-type (sfun-args sfun)))
             (args (app-args node))
             (arg-code '())
             (auxs '()))

    (define (compile-more-arguments)
      (let* ((aux (fresh-ir-variable
                   'aux (pointerify (type->ir-type (car arg-types)))))
             (name (ir-variable-name aux))
             (type (ir-variable-type aux))
             (setter (node->ir-node
                      (car args)
                      (lambda (x)
                        (make-node-seq
                         (compile-local-allocation name type)
                         (compile-store aux x))))))
        (loop (cdr arg-types) (cdr args)
              (cons setter arg-code)
              (cons aux auxs))))
    
    (define (compile-call)
      ;; The `assignments' list is now IR that puts the argument values in
      ;; the `auxs' variables.
      (let* ((result-type (type->ir-type (variable-type var)))
             (result (fresh-ir-variable 'result result-type)))
        (make-node-seq
         (reverse! arg-code)
         ;; Call the function in `var' and give back its result.
         (instantiate::ir-assignment
          (name (ir-variable-name result))
          (node (instantiate::ir-instr-call
                 (type result-type)
                 (function-type (var->ir-type var))
                 (function (var->ir-node var))
                 (args auxs))))
         (kont result))))
    
    (if (null? args)
        (compile-call)
        (compile-more-arguments))))

(define-method (node->ir-node node::var kont)
  (with-access::variable (var-variable node) (type name)
     (let ((aux (fresh-ir-variable 'var type)))
       (make-node-seq
        (instantiate::ir-assignment
         (name (ir-variable-name aux))
         (node
          (instantiate::ir-instr-load
           (pointer (var->ir-node (var-variable node))))))
        (kont aux)))))

(define-method (node->ir-node node::conditional kont)
  (with-access::conditional node (test true false)
     (let* ((test-var (fresh-ir-variable 'test *bool*))
            ;; TODO: Is it always valid to use the default type here?
            (result-var (fresh-ir-variable 'result *_*))
            (result-kont (make-assignment-kont result-var))
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
              (make-labeled-node-seq done-label (kont result-var))))
         (make-node-seq branch-code
                        (compile-branch true-label true)
                        (compile-branch false-label false)
                        done-code)))))

(define-method (node->ir-node dummy::node kont)
  (verbose 3 "       node->ir-node unhandled " dummy #\Newline)
  (kont (instantiate::ir-undef
         (type (instantiate::ir-primitive-type
                (name "i8*"))))))

;;; IR generation helpers.

;; TODO: don't do it this stupid way
(define (make-label symbol)
  (string-append "%" (variable-name (make-local-svar symbol *_*))))

(define (make-assignment-kont var)
  (lambda (x)
    (instantiate::ir-assignment
     (name (ir-variable-name var))
     (node x))))

(define (arg-type arg)
  (if (local? arg) (local-type arg) arg))

(define (var->ir-type var)
  (let ((x (variable-value var)))
    (if (sfun? x)
        (instantiate::ir-function-type
         (return-type (type->ir-type (variable-type var)))
         (parameter-types (map (lambda (a)
                                 (type->ir-type (arg-type a)))
                               (sfun-args x))))
        (raise "make-ir-function-type sez sfun plz"))))

(define (var->ir-node var)
  (instantiate::ir-variable
   (type (type->ir-type (variable-type var)))
   (name (string-append "%" (variable-name var)))))

(define (var->ir-node/ptr var)
  (instantiate::ir-variable
   (type (pointerify (type->ir-type (variable-type var))))
   (name (string-append "%" (variable-name var)))))

(define (fresh-ir-variable symbol type)
  ;; Maybe should do this without messing with the variable tables.
  (instantiate::ir-variable
   (type (type->ir-type type))
   (name (string-append "%" (variable-name (make-local-svar symbol *_*))))))

(define (compile-local-allocation name type)
  (instantiate::ir-assignment
   (name name)
   (node (instantiate::ir-instr-alloca
          (element-type (unpointerify type))))))

(define (compile-store var value)
  (instantiate::ir-instr-store (pointer var) (value value)))

(define (make-node-seq . stuff)
  (instantiate::ir-node-seq
   (nodes (apply append (map (lambda (x)
                               (if (list? x)
                                   x
                                   (list x))) stuff)))))

(define (make-labeled-node-seq label . stuff)
  (instantiate::ir-node-seq
   (label label)
   (nodes (apply append (map (lambda (x)
                               (if (list? x)
                                   x
                                   (list x))) stuff)))))
