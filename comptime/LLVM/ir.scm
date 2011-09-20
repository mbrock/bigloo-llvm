(module llvm_ir
  (main main)
  (export
    (class ir-node::object)

    (class ir-node-seq::ir-node
      (nodes::pair-nil (default '())))

    (class ir-type::ir-node)

    (class ir-label::ir-node
      name::bstring)

    (class ir-primitive-type::ir-type
      name::bstring)

    (class ir-value::ir-node
      (type::ir-type (default *ir-type-void*)))

    (class ir-instruction::ir-value)

    (class ir-register::ir-value
      name::bstring)

    (class ir-lit-int::ir-value
      value::int)

    (class ir-assignment::ir-node
      name::bstring
      node::ir-value)

    (class ir-function-defn::ir-node
      return-type::ir-type
      name::bstring
      (arguments (default '()))
      ;; TODO: Add the optional components (linkage, visibility, etc.).
      (blocks (default '())))

    ;;; Instructions.

    (class ir-instr-ret::ir-instruction
      (value::ir-value (default #f)))

    (class ir-instr-br::ir-instruction
      condition::ir-value
      true-label::ir-label
      false-label::ir-label)

    (class ir-instr-br-unconditional::ir-instruction
      label::ir-label)

    (class ir-instr-switch::ir-instruction
      value::ir-value
      default-label::ir-label
      (table::pair-nil (default '())))

    (class ir-instr-indirectbr::ir-instruction
      address::ir-value
      (labels::pair (default '())))

    ;; TODO: invoke, unwind, resume, unreachable

    (class ir-instr-binary::ir-instruction
      operand-1::ir-value
      operand-2::ir-value)

    ;; TODO: add the remaining binary instructions
    
    (class ir-instr-add::ir-instr-binary)
    (class ir-instr-sub::ir-instr-binary)
    (class ir-instr-mul::ir-instr-binary)

    (class ir-instr-phi::ir-instruction
      table::pair)
    
    (class ir-instr-call::ir-instruction
      (tail?::bool (default #f))
      (cconv (default #f))
      (ret-attrs::pair-nil (default '()))
      (function-type (default #f))
      function::ir-value
      (args::pair-nil (default '()))
      (fn-attrs::pair-nil (default '())))
    ))

(define *ir-type-void* (make-ir-primitive-type "void"))

(define-generic (ir-node->line-tree node::ir-node))

(define-syntax define-instruction-syntax
  (syntax-rules ()
    ((define-instruction-syntax var arg . args)
     (define (ir-instruction->string x::ir-instruction)
       (make-instruction-syntax-cond var x arg . args)))))

(define-syntax make-instruction-syntax-cond
  (syntax-rules ()
    ((_ var instr) (raise "no such instruction"))
    ((_ var instr (type (accessors ...) body ...) . rest)
     (let ((var instr))
       (if (is-a? var type)
           (my-with-access type var (accessors ...)
                           (begin body ...))
           (make-instruction-syntax-cond var instr . rest))))))

(define-syntax my-with-access
  (syntax-rules ()
    ((my-with-access klass x () body ...) (begin body ...))
    ((my-with-access klass x (field . rest) body ...)
     (let ((field ((class-field-accessor
                    (find-class-field klass (quote field))) x)))
       (my-with-access klass x rest body ...)))))

(define-instruction-syntax instr
  (ir-instr-ret
   (type value)
   (build-ir-string "ret" type value))
  (ir-instr-br
   (condition true-label false-label)
   (build-ir-string "br" "i1" condition
                    true-label "," false-label))
  (ir-instr-switch
   (value default-label table)
   (build-ir-string "switch" (ir-value-type value) value
                    "," default-label
                    "[" (render-switch-table table) "]"))
  (ir-instr-indirectbr
   (address labels)
   (build-ir-string "indirectbr" (ir-value-type address) address
                    "," "[" (render-list labels) "]"))
  (ir-instr-binary
   (type operand-1 operand-2)
   (build-ir-string (ir-instr-name instr) type operand-1 "," operand-2))

  (ir-instr-phi
   (type table)
   (build-ir-string "phi" type (render-phi-table table)))

  (ir-instr-call
   (type tail? cconv ret-attrs function-type function args fn-attrs)
   (build-ir-string
    (if tail? "tail" #f)
    "call" cconv ret-attrs type function-type function
    "(" (render-args args) ")"
    (render-list fn-attrs)))
  )

(define (ir-instr-name instr::ir-instruction)
  (cond ((is-a? instr ir-instr-add) "add")
        ((is-a? instr ir-instr-sub) "sub")
        ((is-a? instr ir-instr-mul) "mul")
        (#f (raise "ir-instr-name"))))

(define (render-switch-table table)
  (string-join ", " (map (lambda (entry)
                           (build-ir-string (ir-value-type (car entry))
                                            (car entry)
                                            "," (cadr entry)))
                         table)))

(define (render-phi-table table)
  (string-join ", " (map (lambda (entry)
                           (build-ir-string
                            "[" (car entry) ","
                            (ir-label-name (cadr entry)) "]")) table)))

(define (build-ir-string . args)
  (string-join " " (map stringify-node args)))

(define (render-list list)
  (string-join ", " (map stringify-node list)))

(define (render-args args)
  (render-list (map (lambda (arg)
                      (build-ir-string (ir-value-type arg) arg)) args)))

(define (stringify-node node)
  (if (eq? node #f)
      ""
      (if (string? node)
          node
          (if (pair? node)
              (string-join " " (map stringify-node node))
              (ir-node->inline-string node)))))

(define (string-join separator strings)
  (let loop ((xs strings)
             (aux '()))
    (cond ((null? xs) (apply string-append (reverse aux)))
          ((null? (cdr xs)) (loop '() (cons (car xs) aux)))
          (#t (loop (cdr xs) (cons separator (cons (car xs) aux)))))))

(define (line-tree->string node indent::int)
  (if (string? node)
      (add-indentation indent node)
      (apply string-append
             (map (lambda (x)
                    (string-append (line-tree->string x (+ 1 indent))
                                   "\n")) node))))
      
(define (add-indentation level::int string::bstring)
  (string-append (list->string (make-list (* 2 level) #\space)) string))

(define (ir-node->inline-string node::ir-node)
  (line-tree->string (ir-node->line-tree node) 0))

(define-method (ir-node->line-tree instr::ir-instruction)
  (ir-instruction->string instr))

(define-method (ir-node->line-tree type::ir-primitive-type)
  (ir-primitive-type-name type))

(define-method (ir-node->line-tree label::ir-label)
  (string-append "label %" (ir-label-name label)))

(define-method (ir-node->line-tree int::ir-lit-int)
  (number->string (ir-lit-int-value int)))

(define-method (ir-node->line-tree seq::ir-node-seq)
  (append-line-trees (map ir-node->line-tree (ir-node-seq-nodes seq))))

(define (append-line-trees trees)
  (if (null? trees)
      '()
      ((if (pair? (car trees))
          append
          cons)
       (car trees) (append-line-trees (cdr trees)))))

(define (main argv)
  (let ((i32 (make-ir-primitive-type "i32"))
        (i1 (make-ir-primitive-type "i1")))
    (print (line-tree->string
            (ir-node->line-tree
             (instantiate::ir-node-seq
              (nodes
               (list (instantiate::ir-instr-ret
                      (type i32)
                      (value (make-ir-lit-int i32 0)))
                     (instantiate::ir-instr-br
                      (condition (make-ir-lit-int i1 1))
                      (true-label (make-ir-label "true"))
                      (false-label (make-ir-label "false")))
                     (instantiate::ir-instr-switch
                      (value (make-ir-lit-int i32 5))
                      (default-label (make-ir-label "default"))
                      (table `((,(make-ir-lit-int i32 0)
                                ,(make-ir-label "zero"))
                               (,(make-ir-lit-int i32 5)
                                ,(make-ir-label "five")))))
                     (instantiate::ir-instr-phi
                      (type i32)
                      (table `((,(make-ir-lit-int i32 0)
                                ,(make-ir-label "zero"))
                               (,(make-ir-lit-int i32 5)
                                ,(make-ir-label "five")))))
                     (instantiate::ir-instr-indirectbr
                      (address (make-ir-lit-int i32 123))
                      (labels (list (make-ir-label "foo")
                                    (make-ir-label "bar"))))
                     (instantiate::ir-instr-add
                      (type i32)
                      (operand-1 (make-ir-lit-int i32 10))
                      (operand-2 (make-ir-lit-int i32 20)))

                     (instantiate::ir-instr-call
                      (tail? #t)
                      (cconv "fastcc")
                      (ret-attrs '("zeroext" "inreg"))
                      (function (make-ir-lit-int i32 0))
                      (args `(,(make-ir-lit-int i32 1)
                              ,(make-ir-lit-int i32 2)))
                      (fn-attrs '("nounwind" "readonly")))

                     ))))
            0))))
