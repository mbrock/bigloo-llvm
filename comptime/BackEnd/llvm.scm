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
           backend_backend
           backend_bvm

           ast_var
           ast_env
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
  (let ((cmd (string-append *assembler* " " prefix ".s")))
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
               (arguments (map type->ir-type targs)))))))))

(define (type->ir-type type)
  (instantiate::ir-named-type (name (symbol->string (type-id type)))))

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