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

(define *llvm-object-type* (make-ir-primitive-type "i8*"))
(define *llvm-string-type* (make-ir-primitive-type "i8*"))
(define *llvm-int-type* (make-ir-primitive-type "i32"))
(define *llvm-bool-type* (make-ir-primitive-type "i1"))
(define *llvm-long-type* (make-ir-primitive-type "i32"))

(define (type->ir-type type)
  (if (bigloo-type? type)
      *llvm-object-type*
      (case (type-id type)
        ((string) *llvm-string-type*)
        ((long) *llvm-long-type*)
        ((int) *llvm-int-type*)
        ((bool) *llvm-bool-type*)
        (else
         (internal-error 'type->ir-type "unhandled type"
                         (type-id type))))))

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

(define-generic (node->ir-node::ir-node node::node kont::procedure))

(define-method (node->ir-node node::let-var kont)
  (with-access::let-var node (body bindings)
     (let ((assignments
            (map (lambda (x)
                   (set-variable-name! (car x))
                   (node->ir-node
                    (cdr x)
                    (lambda (v)
                      (instantiate::ir-assignment
                       (name (string-append "%" (variable-name (car x))))
                       (node v)))))
                 bindings)))
       (make-node-seq assignments (node->ir-node body kont)))))

(define (make-node-seq . stuff)
  (instantiate::ir-node-seq
   (nodes (apply append (map (lambda (x)
                               (if (list? x)
                                   x
                                   (list x))) stuff)))))

(define-method (node->ir-node node::app kont)
  (with-access::app node (fun)
     (let* ((var (var-variable fun))
            (val (variable-value var)))
       (if (sfun? val)
           (sfun-app->ir-node node var val kont)
           (kont (instantiate::ir-zero-initializer))))))
;;           (raise "sfun please")))))

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
   (name (variable-name var))))

(define (sfun-app->ir-node node var sfun kont)
  (let loop ((arg-types (map arg-type (sfun-args sfun)))
             (args (app-args node))
             (assignments '())
             (auxs '()))
    (if (null? args)
        (make-node-seq
         (reverse! assignments)
         (kont (instantiate::ir-instr-call
                (type (type->ir-type (variable-type var)))
                (function-type (var->ir-type var))
                (function (var->ir-node var))
                (args (map (lambda (aux)
                             (instantiate::ir-variable
                              (name (variable-name aux))))
                           auxs)))))
        (let* ((aux (make-local-svar 'aux (car arg-types)))
               (setter (node->ir-node
                        (car args)
                        (lambda (x)
                          (instantiate::ir-assignment
                           (name (string-append "%" (variable-name aux)))
                           (node x))))))
          (verbose 3 "        setter " setter #\Newline)
          (loop (cdr arg-types) (cdr args)
                (cons setter assignments)
                (cons aux auxs))))))

(define-method (node->ir-node dummy::node kont)
  (kont *ir-zero-initializer*))