(module llvm_ir
  (main main)
  (export
    (class ir-node::object)

    (class ir-type::ir-node)

    (class ir-label::ir-node
      name::bstring)

    (class ir-primitive-type::ir-type
      name::bstring)

    (class ir-value::ir-node
      type::ir-type)

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
    ))

(define-generic (ir-node->line-tree node::ir-node))

(define-generic (ir-instruction-opcode instr::ir-instruction))

(define-syntax define-instruction-syntax
  (syntax-rules ()
    ((define-instruction-syntax arg . args)
     (define (ir-instruction->string x::ir-instruction)
       (make-instruction-syntax-cond x arg . args)))))

(define-syntax make-instruction-syntax-cond
  (syntax-rules ()
    ((_ instr) (raise "no such instruction"))
    ((_ instr (type (accessors ...) args ...) . rest)
     (if (is-a? instr type)
         (my-with-access type instr (accessors ...)
           (build-ir-string args ...))
         (make-instruction-syntax-cond instr . rest)))))

(define-syntax my-with-access
  (syntax-rules ()
    ((my-with-access klass x () body ...) (begin body ...))
    ((my-with-access klass x (field . rest) body ...)
     (let ((field ((class-field-accessor
                    (find-class-field klass (quote field))) x)))
       (my-with-access klass x rest body ...)))))

(define-instruction-syntax
  (ir-instr-ret (type value) "ret" type value)
  (ir-instr-br (condition true-label false-label)
               "br" "i1" condition true-label "," false-label))

(define (build-ir-string . args)
  (string-join " " (map (lambda (x)
                          (if (string? x)
                              x
                              (ir-node->inline-string x)))
                        args)))

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

(define-method (ir-node->line-tree int::ir-lit-int)
  (number->string (ir-lit-int-value int)))

;(define-method (ir-node->line-tree assgn

(define (main argv)
  (let ((i32 (make-ir-primitive-type "i32")))
    (print (line-tree->string
            (ir-node->line-tree
             (instantiate::ir-instr-ret
              (type i32)
              (value (make-ir-lit-int i32 0))))
            0))))
