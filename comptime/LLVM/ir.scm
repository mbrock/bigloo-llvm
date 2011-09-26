(module llvm_ir
  (main main)
  (export
    ;; An ir-node is basically an LLVM IR syntax tree, though this class
    ;; hierarchy does not really correspond to any formal definition of the IR
    ;; syntax; it's an ad hoc representation suitable for our needs.
    (class ir-node::object)

    ;; A node sequence: a list of top-level definitions or instructions in a
    ;; block, optionally labelled.
    (class ir-node-seq::ir-node
      (nodes::pair-nil (default '()))
      (label (default #f)))

    ;; A label name like @foo.
    (class ir-label::ir-node
      name::bstring)


    ;;; These classes represent types in the LLVM type system.

    (class ir-type::ir-node)

    (class ir-type-alias::ir-node
      type::ir-type)

    (class ir-primitive-type::ir-type
      name::bstring)

    (class ir-pointer-type::ir-type
      value-type::ir-type)

    (class ir-array-type::ir-type
      element-count::int
      element-type::ir-type)

    (class ir-vector-type::ir-type
      element-count::int
      element-type::ir-type)

    (class ir-function-type::ir-type
      return-type::ir-type
      parameter-types::pair-nil)

    (class ir-structure-type::ir-type
      element-types::pair-nil
      (packed?::bbool (default #f)))


    ;;; Other IR nodes.

    ;; An IR value: an expression node with an associated type.
    (class ir-value::ir-node
      (type::ir-type read-only (default *ir-type-void*)))

    ;; A variable like %foo.
    (class ir-variable::ir-value
      name::bstring)

    ;; IR instructions are value expressions (some with void type).
    (class ir-instruction::ir-value)

    ;; Register names like %foo are value expressions.
    (class ir-register::ir-value
      name::bstring)

    ;; Literals are value expressions, too.
    (class ir-lit-int::ir-value
      value::int)

    ;; An assignment statement like %foo = i32 0.
    (class ir-assignment::ir-node
      name::bstring
      node::ir-node)

    (class ir-alias::ir-node
      (linkage (default #f))
      (visibility (default #f))
      type::ir-type
      aliasee::ir-value)

    ;; A top-level function definition.
    (class ir-function-defn::ir-node
      (linkage (default #f))
      (visibility (default #f))
      (cconv (default #f))
      (ret-attrs::pair-nil (default '()))
      return-type::ir-type
      name::bstring
      (arguments (default '()))
      (fn-attrs::pair-nil (default '()))
      (section (default #f))
      (align (default #f))
      (blocks (default '()))
      (gc (default #f)))

    ;; A global variable.
    (class ir-global-variable::ir-node
      (linkage (default #f))
      (global? (default #f))
      (constant? (default #f))
      type::ir-type
      (initial-value (default #f))
      (section (default #f))
      (align (default #f)))


    ;;; All the instructions.

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
      (fn-attrs::pair-nil (default '()))
      (type read-only
            (get (lambda (i)            ; TODO: consider function-type
                   (ir-function-type-return-type
                    (ir-value-type
                     (ir-instr-call-function i)))))))

    ;;; Memory instructions.

    (class ir-instr-alloca::ir-instruction
      element-type::ir-type
      (type read-only
            (get (lambda (i)
                   (instantiate::ir-pointer-type
                    (value-type (ir-instr-alloca-element-type i))))))
      (n (default #f))
      (align (default #f)))

    (class ir-instr-load::ir-instruction
      pointer::ir-value
      (type read-only
            (get (lambda (i)
                   (ir-pointer-type-value-type
                    (ir-value-type
                     (ir-instr-load-pointer i)))))))

    (class ir-instr-store::ir-instruction
      value::ir-value
      pointer::ir-value)

    (class ir-instr-getelementptr::ir-instruction
      pointer::ir-value
      indices::pair)

    ))


;;; Built-in types.

(define *ir-type-void* (make-ir-primitive-type "void"))


;;; Some syntax for more concisely implementing the `ir-instruction->string'
;;; function.

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

;; Kludge needed because x::y forms are impervious to macro expansion.
(define-syntax my-with-access
  (syntax-rules ()
    ((my-with-access klass x () body ...) (begin body ...))
    ((my-with-access klass x (field . rest) body ...)
     (let ((field ((class-field-accessor
                    (find-class-field klass (quote field))) x)))
       (my-with-access klass x rest body ...)))))

;; Get the syntax name of an IR instruction.
(define (ir-instr-name instr::ir-instruction)
  (cond ((is-a? instr ir-instr-add) "add")
        ((is-a? instr ir-instr-sub) "sub")
        ((is-a? instr ir-instr-mul) "mul")
        (#f (raise "ir-instr-name"))))

;; This defines the `ir-instruction->string' function.
(define-instruction-syntax instr
  (ir-instr-ret
   (value)
   (build-ir-string "ret" value))
  (ir-instr-br
   (condition true-label false-label)
   (build-ir-string "br" "i1" condition
                    true-label "," false-label))
  (ir-instr-switch
   (value default-label table)
   (build-ir-string "switch" value
                    "," default-label
                    "[" (render-switch-table table) "]"))
  (ir-instr-indirectbr
   (address labels)
   (build-ir-string "indirectbr" address
                    "," "[" (render-list labels) "]"))
  (ir-instr-binary
   (type operand-1 operand-2)
   (build-ir-string (ir-instr-name instr) type
                    (render-value-sans-type operand-1) ","
                    (render-value-sans-type operand-2)))

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

  (ir-instr-alloca
   (element-type n align)
   (build-ir-string
    "alloca"
    (render-args (list element-type n (if align (list "align" align))))))

  (ir-instr-load
   (pointer)
   (build-ir-string "load" pointer))

  (ir-instr-store
   (value pointer)
   (build-ir-string "store" (render-args (list value pointer))))

  (ir-instr-getelementptr
   (pointer indices)
   (build-ir-string
    "getelementptr"
    (render-args (cons pointer indices))))
  )

(define (render-switch-table table)
  (string-join ", " (map (lambda (entry)
                           (build-ir-string (car entry)
                                            "," (cadr entry)))
                         table)))

(define (render-phi-table table)
  (string-join ", " (map (lambda (entry)
                           (build-ir-string
                            "[" (car entry) ","
                            (ir-label-name (cadr entry)) "]")) table)))


;;; Convenience stuff for constructing IR strings.

;;; A line tree is a nested list of strings.  The deeper the nesting, the
;;; deeper the indentation when printed.

;; Translate an IR node to a line tree.
(define-generic (ir-node->line-tree node::ir-node))

;; Render a line tree to a string starting on the given indentation level.
(define (line-tree->string node indent::int)
  (if (string? node)
      node
      (string-join "\n" (line-tree->list node indent))))

;; Convert a line tree to a flat list of indented strings.
(define (line-tree->list node indent::int)
  (if (string? node)
      (add-indentation indent node)
      (flatten
       (map (lambda (x)
              (line-tree->list x (+ 1 indent)))
            node))))

(define (append-line-trees trees)
  (if (null? trees)
      '()
      ((if (pair? (car trees))
          append
          cons)
       (car trees) (append-line-trees (cdr trees)))))

(define (add-indentation level::int string::bstring)
  (string-append (list->string (make-list (* 2 level) #\space)) string))

(define (ir-node->inline-string node::ir-node)
  (line-tree->string (ir-node->line-tree node) 0))

(define (build-ir-string . args)
  (stringify-things " " args))

(define (render-list list)
  (stringify-things ", " list))

(define (render-args args)
  (render-list args))

;; Render a list of things to a string.  This is written to simplify building
;; IR lines, and so has some assumptions.
(define (stringify-things separator things)
  (string-join separator (filter string-nonempty?
                                 (map stringify-thing things))))

;; A thing is anything you could reasonably want to stringify, especially IR
;; nodes.  #f becomes the empty string, strings pass through unchanged,
;; numbers are rendered in decimal, lists are joined by spaces, etc.
(define (stringify-thing thing)
  (cond ((eq? thing #f) "")
        ((string? thing) thing)
        ((list? thing)
         (stringify-things " " thing))
        ((number? thing)
         (number->string thing))
        ((ir-node? thing)
         (ir-node->inline-string thing))))


;;; Now we define the methods for rendering IR nodes.

(define-method (ir-node->line-tree type::ir-primitive-type)
  (ir-primitive-type-name type))

(define-method (ir-node->line-tree type-alias::ir-type-alias)
  (build-ir-string "type" (ir-type-alias-type type-alias)))

;; TODO: Add parentheses when ambiguous!
(define-method (ir-node->line-tree type::ir-pointer-type)
  (string-append (ir-node->line-tree
                  (ir-pointer-type-value-type type)) "*"))

(define-method (ir-node->line-tree type::ir-array-type)
  (with-access::ir-array-type type (element-count element-type)
    (build-ir-string "[" element-count "x" element-type "]")))

(define-method (ir-node->line-tree type::ir-vector-type)
  (with-access::ir-vector-type type (element-count element-type)
    (build-ir-string "<" element-count "x" element-type ">")))

(define-method (ir-node->line-tree type::ir-structure-type)
  (with-access::ir-structure-type type (element-types packed?)
    (let ((open (if packed? "<{" "{"))
          (close (if packed? "}>" "}")))
      (build-ir-string open (render-list element-types) close))))

(define-method (ir-node->line-tree type::ir-function-type)
  (with-access::ir-function-type type (return-type parameter-types)
    (build-ir-string return-type "(" (render-list parameter-types) ")")))

(define-method (ir-node->line-tree label::ir-label)
  (string-append "label " (ir-label-name label)))

(define-method (ir-node->line-tree value::ir-value)
  (build-ir-string (ir-value-type value)
                   (render-value-sans-type value)))

(define-generic (render-value-sans-type value::ir-value))

(define-method (render-value-sans-type int::ir-lit-int)
  (number->string (ir-lit-int-value int)))

(define-method (render-value-sans-type var::ir-variable)
  (ir-variable-name var))

(define-method (ir-node->line-tree instr::ir-instruction)
  (ir-instruction->string instr))

(define-method (ir-node->line-tree var::ir-variable)
  (render-value-sans-type var))

(define-method (ir-node->line-tree seq::ir-node-seq)
  (let ((lines (append-line-trees (map ir-node->line-tree
                                       (ir-node-seq-nodes seq))))
        (label (ir-node-seq-label seq)))
    (if label
        (list (string-append label ":") lines)
        lines)))


(define-method (ir-node->line-tree defn::ir-function-defn)
  (with-access::ir-function-defn defn
    (linkage visibility cconv ret-attrs return-type name arguments
     fn-attrs section align blocks gc)
    (list (build-ir-string
           "define" linkage visibility cconv ret-attrs
           return-type name "(" (render-list arguments) ")"
           fn-attrs
           (if section (list "section" (format "~s" section)))
           (if align (list "align" align))
           gc
           "{")
          (append-line-trees (map ir-node->line-tree blocks))
          "}")))

(define-method (ir-node->line-tree gvar::ir-global-variable)
  (with-access::ir-global-variable gvar
    (linkage global? constant? type initial-value section align)
    (build-ir-string
     linkage
     (if global? "global")
     (if constant? "constant")
     type
     (render-list
      (list
       (if initial-value (render-value-sans-type initial-value))
       (if section (list "section" (format "~s," section)))
       (if align (list "align" align)))))))
           
(define-method (ir-node->line-tree assg::ir-assignment)
  (build-ir-string (ir-assignment-name assg) "=" (ir-assignment-node assg)))

(define-method (ir-node->line-tree alias::ir-alias)
  (with-access::ir-alias alias
    (linkage visibility type aliasee)
    (build-ir-string "alias" linkage visibility type aliasee)))


;;; Utilities.

(define (string-nonempty? string)
  (> (string-length string) 0))

(define (string-join separator strings)
  (if (null? strings) ""
      (let loop ((xs strings)
                 (aux '()))
        (cond ((null? xs) (apply string-append (reverse aux)))
              ((null? (cdr xs)) (loop '() (cons (car xs) aux)))
              (#t (loop (cdr xs) (cons separator (cons (car xs) aux))))))))

(define (flatten xs)
  (if (pair? xs)
      (if (pair? (car xs))
          (append (flatten (car xs)) (flatten (cdr xs)))
          (cons (car xs) (flatten (cdr xs))))
      xs))


;;; Test.

(define (main argv)
  (let* ((i32 (make-ir-primitive-type "i32"))
         (i1 (make-ir-primitive-type "i1"))
         (nodes
          (list (instantiate::ir-instr-ret
                 (type i32)
                 (value (make-ir-lit-int i32 0)))
                (instantiate::ir-instr-br
                 (condition (make-ir-lit-int i1 1))
                 (true-label (make-ir-label "%true"))
                 (false-label (make-ir-label "%false")))
                (instantiate::ir-instr-switch
                 (value (make-ir-lit-int i32 5))
                 (default-label (make-ir-label "%default"))
                 (table `((,(make-ir-lit-int i32 0)
                           ,(make-ir-label "%zero"))
                          (,(make-ir-lit-int i32 5)
                           ,(make-ir-label "%five")))))
                (instantiate::ir-assignment
                 (name "%foo")
                 (node
                  (instantiate::ir-instr-phi
                   (type i32)
                   (table `((,(make-ir-lit-int i32 0)
                             ,(make-ir-label "%zero"))
                            (,(make-ir-lit-int i32 5)
                             ,(make-ir-label "%five")))))))
                (instantiate::ir-instr-indirectbr
                 (address (make-ir-lit-int i32 123))
                 (labels (list (make-ir-label "%foo")
                               (make-ir-label "%bar"))))
                (instantiate::ir-instr-add
                 (type i32)
                 (operand-1 (make-ir-lit-int i32 10))
                 (operand-2 (make-ir-lit-int i32 20)))

                (instantiate::ir-instr-alloca
                 (element-type i32)
                 (n (make-ir-lit-int i32 100))
                 (align 1024))
                
                (instantiate::ir-instr-call
                 (type (instantiate::ir-structure-type
                        (packed? #t)
                        (element-types
                         (list (instantiate::ir-vector-type
                                (element-count 4)
                                (element-type i32))
                               i32 i32
                               (instantiate::ir-pointer-type
                                (value-type i32))))))
                 (tail? #t)
                 (cconv "fastcc")
                 (ret-attrs '("zeroext" "inreg"))
                 (function (make-ir-lit-int i32 0))
                 (args `(,(make-ir-lit-int i32 1)
                         ,(make-ir-lit-int i32 2)))
                 (fn-attrs '("nounwind" "readonly"))))))
    (print (line-tree->string
            (ir-node->line-tree
             (instantiate::ir-node-seq
              (nodes
               (list
                (instantiate::ir-assignment
                 (name "@thing")
                 (node
                  (instantiate::ir-alias
                   (linkage "private")
                   (type i32)
                   (aliasee (instantiate::ir-variable
                             (name "@other"))))))
                (instantiate::ir-function-defn
                 (linkage "internal")
                 (visibility "protected")
                 (cconv "fastcc")
                 (return-type *ir-type-void*)
                 (name "@foo")
                 (section "baz")
                 (arguments '())
                 (blocks
                  (list
                   (instantiate::ir-node-seq
                    (label "entry")
                    (nodes nodes)))))))))
            -1))))
