;*=====================================================================*/
;*    serrano/prgm/project/bigloo/comptime/Expand/initial.scm          */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Wed Dec 28 15:41:05 1994                          */
;*    Last change :  Wed Dec 29 18:10:27 2010 (serrano)                */
;*    Copyright   :  1994-2010 Manuel Serrano, see LICENSE file        */
;*    -------------------------------------------------------------    */
;*    Initial compiler expanders.                                      */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module expand_install
   (include "Tools/location.sch")
   (import  expand_if
	    expand_lambda
	    expand_define
	    expand_expander
	    expand_exit
	    expand_garithmetique
	    expand_iarithmetique
	    expand_farithmetique
	    expand_let
	    expand_case
	    expand_struct
	    expand_map
	    expand_assert
	    expand_object
	    expand_multiple-values
	    tools_misc
	    tools_location
	    tools_error
	    engine_param
	    expand_expander
	    type_type
	    ast_ident
	    ast_let
	    ast_labels
	    ast_node
	    ast_var
	    ast_sexp)
   (export  (install-initial-expander)))

;*---------------------------------------------------------------------*/
;*    installedp ...                                                   */
;*---------------------------------------------------------------------*/
(define installedp #f)

;*---------------------------------------------------------------------*/
;*    install-initial-expander ...                                     */
;*---------------------------------------------------------------------*/
(define (install-initial-expander)
   (unless installedp
      (set! installedp #t)
      (install-expanders)))

;*---------------------------------------------------------------------*/
;*    install-expanders ...                                            */
;*---------------------------------------------------------------------*/
(define (install-expanders)
   ;; In order to be able to install O-macros,
   ;; we first of all, we perform Oenv initialization
   (initialize-Oenv!)
   (initialize-Genv!)
   
   ;; if
   (install-compiler-expander 'if expand-if)
   
   ;; or
   (install-compiler-expander 'or expand-or)
   
   ;; and
   (install-compiler-expander 'and expand-and)
   
   ;; not
   (install-compiler-expander 'not expand-not)
   
   ;; lambda
   (install-compiler-expander 'lambda expand-lambda)
   
   ;; define
   (install-compiler-expander 'define expand-define)
   
   ;; define-inline
   (install-compiler-expander 'define-inline expand-inline)
   
   ;; define-generic
   (install-compiler-expander 'define-generic expand-generic)
   
   ;; define-method
   (install-compiler-expander 'define-method expand-method)
   
   ;; define-struct
   (install-compiler-expander 'define-struct expand-struct)
   
   ;; set!
   (install-compiler-expander 'set! expand-set!)
   
   ;; set-exit
   (install-compiler-expander 'set-exit expand-set-exit)
   
   ;; jump-exit
   (install-compiler-expander 'jump-exit expand-jump-exit)
   
   ;; bind-exit
   (install-compiler-expander 'bind-exit expand-bind-exit)
   
   ;; unwind-protect
   (install-compiler-expander 'unwind-protect expand-unwind-protect)

   ;; with-handler
   (install-compiler-expander 'with-handler expand-with-handler)
   
   ;; multiple-value-bind
   (install-compiler-expander 'multiple-value-bind expand-mvalue-bind)
   
   ;; error 
   (install-O-comptime-expander
    'error
    (lambda (x::obj e::procedure)
       (let ((loc (find-location x)))
	  (if (and (location? loc) *error-localization*)
	      (match-case x
		 ((?- ?l1 ?l2 ?l3)
		  `(begin
		      (error/c-location ,(e l1 e)
					,(e l2 e)
					,(e l3 e)
					,(location-full-fname loc)
					,(location-pos loc))
		      (error #f #f #f)))
		 ((?- . ?list)
		  `(error ,@(map (lambda (l) (e l e)) list))))
	      `(error ,@(map (lambda (l) (e l e)) (cdr x)))))))
   
   ;; warning
   (install-O-comptime-expander
    'warning
    (lambda (x::obj e::procedure)
       (let ((loc (find-location x)))
	  (if (and (location? loc) *error-localization*)
	      `(warning/c-location ,(location-full-fname loc)
				   ,(location-pos loc)
				   ,@(map (lambda (l) (e l e))
					  (cdr x)))
	      `(warning ,@(map (lambda (l) (e l e)) (cdr x)))))))
   
   ;; append
   (install-O-comptime-expander
    'append
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?l1 ?l2)
	   `(append-2 ,(e l1 e) ,(e l2 e)))
	  ((?- . ?lists)
	   `(append
	     ,@(map (lambda (l) (e l e)) lists)))
	  (else
	   (error #f "Illegal `append' form" x)))))
   
   ;; append!
   (install-O-comptime-expander
    'append!
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?l1 ?l2)
	   `(append-2! ,(e l1 e) ,(e l2 e)))
	  ((?- . ?lists)
	   `(append!
	     ,@(map (lambda (l) (e l e)) lists)))
	  (else
	   (error #f "Illegal `append!' form" x)))))
   
   ;; eappend
   (install-O-comptime-expander
    'eappend
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?l1 ?l2)
	   `(eappend-2 ,(e l1 e) ,(e l2 e)))
	  ((?- . ?lists)
	   `(eappend ,@(map (lambda (l) (e l e)) lists)))
	  (else
	   (error #f "Illegal `eappend' form" x)))))
   
   ;; string-length
   (install-O-comptime-expander
    'string-length
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?s)
	   (if (string? s)
	       (string-length s)
	       `(string-length ,(e s e))))
	  (else
	   (error #f "Illegal 'string-length' form" x)))))
   
   ;; cons
   (install-O-comptime-expander
    'cons
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?fun ?a ?d)
	   `(c-cons ,(e a e) ,(e d e)))
	  (else
	   (error #f "Illegal `cons' form" x)))))
   
   ;; map
   (install-O-comptime-expander 'map expand-map)
   (install-G-comptime-expander 'map
				(lambda (x::obj e::procedure)
				   (map-check-non-null x e ''())))
   
   ;; for-each
   (install-O-comptime-expander 'for-each expand-for-each)
   (install-G-comptime-expander 'for-each
				(lambda (x::obj e::procedure)
				   (map-check-non-null x e #unspecified)))
   
   ;; filter and filter!
   (install-G-comptime-expander 'filter
				(lambda (x::obj e::procedure)
				   (map-check x e)))
   (install-G-comptime-expander 'filter!
				(lambda (x::obj e::procedure)
				   (map-check x e)))
   
   ;; any? / every?
   (install-O-comptime-expander 'any? expand-any?)
   (install-G-comptime-expander 'any?
				(lambda (x::obj e::procedure)
				   (map-check x e)))
   (install-O-comptime-expander 'every? expand-every?)
   (install-G-comptime-expander 'every?
				(lambda (x::obj e::procedure)
				   (map-check x e)))
   
   ;; any / every
   (install-G-comptime-expander 'any
				(lambda (x::obj e::procedure)
				   (map-check x e)))
   (install-G-comptime-expander 'every
				(lambda (x::obj e::procedure)
				   (map-check x e)))

   ;; reduce
   (install-O-comptime-expander 'reduce expand-reduce)
   
   ;; equal?
   (install-O-comptime-expander
    'equal?
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?a1 ?a2)
	   (cond
	      ((and (number? a1) (number? a2))
	       (= a1 a2))
	      ((or (number? a1) (number? a2))
	       (e `(eqv? ,a1 ,a2) e))
	      ((or (char? a1)
		   (char? a2)
		   (and (pair? a1)
			(eq? (car a1) 'quote)
			(or (fixnum? (cadr a1))
			    (char? (cadr a1))
			    (symbol? (cadr a1))
			    (keyword? (cadr a1))))
		   (and (pair? a2)
			(eq? (car a2) 'quote)
			(or (fixnum? (cadr a2))
			    (char? (cadr a2))
			    (symbol? (cadr a2))
			    (keyword? (cadr a2)))))
	       (e `(eq? ,a1 ,a2) e))
	      (else
	       `(equal? ,(e a1 e) ,(e a2 e)))))
	  (else
	   (error #f "Illegal `equal?' form" x)))))
   
   ;; eqv?
   (install-O-comptime-expander
    'eqv?
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?a1 ?a2)
	   (if (and (number? a1) (number? a2))
	       (= a1 a2)
	       `(,(if (or (char? a1)
			  (char? a2)
			  (and (pair? a1)
			       (eq? (car a1) 'quote)
			       (or (fixnum? (cadr a1))
				   (char? (cadr a1))
				   (symbol? (cadr a1))
				   (keyword? (cadr a1))))
			  (and (pair? a2)
			       (eq? (car a2) 'quote)
			       (or (fixnum? (cadr a2))
				   (char? (cadr a2))
				   (symbol? (cadr a2))
				   (keyword? (cadr a2)))))
		      'eq?
		      'eqv?)
		 ,(e a1 e)
		 ,(e a2 e))))
	  (else
	   (error #f "Illegal `eqv?' form" x)))))
   
   ;; les procedures arithmetiques
   (if *genericity*
       (begin
	  ;; +
	  (install-O-comptime-expander '+ expand-g+)
	  ;; *
	  (install-O-comptime-expander '* expand-g*)
	  ;; /
	  (install-O-comptime-expander '/ expand-g/)
	  ;; -
	  (install-O-comptime-expander '- expand-g-)
	  ;; =
	  (install-O-comptime-expander '= expand-g=)
	  ;; <
	  (install-O-comptime-expander '< expand-g<)
	  ;; >
	  (install-O-comptime-expander '> expand-g>)
	  ;; <=
	  (install-O-comptime-expander '<= expand-g<=)
	  ;; >=
	  (install-O-comptime-expander '>= expand-g>=)
	  ;; max
	  (install-O-comptime-expander 'max expand-gmax)
	  ;; min
	  (install-O-comptime-expander 'min expand-gmin))
       (begin
	  ;; +
	  (install-O-comptime-expander '+ expand-i+)
	  ;; *
	  (install-O-comptime-expander '* expand-i*)
	  ;; /
	  (install-O-comptime-expander '/ expand-i/)
	  ;; -
	  (install-O-comptime-expander '- expand-i-)
	  ;; =
	  (install-O-comptime-expander '= expand-i=)
	  ;; <
	  (install-O-comptime-expander '< expand-i<)
	  ;; >
	  (install-O-comptime-expander '> expand-i>)
	  ;; <=
	  (install-O-comptime-expander '<= expand-i<=)
	  ;; >=
	  (install-O-comptime-expander '>= expand-i>=)
	  ;; max
	  (install-O-comptime-expander 'max expand-maxfx)
	  ;; min
	  (install-O-comptime-expander 'min expand-minfx)))
   
   (install-G-comptime-expander '+ (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '* (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '/ (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '- (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '= (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '> (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '< (lambda (x::obj e::procedure)
				      (call-check x 'number? "number" e)))
   (install-G-comptime-expander '>= (lambda (x::obj e::procedure)
				       (call-check x 'number? "number" e)))
   (install-G-comptime-expander '<= (lambda (x::obj e::procedure)
				       (call-check x 'number? "number" e)))
   (install-G-comptime-expander 'cos (lambda (x::obj e::procedure)
					(call-check x 'number? "number" e)))
   (install-G-comptime-expander 'sin (lambda (x::obj e::procedure)
					(call-check x 'number? "number" e)))
   (install-G-comptime-expander 'min (lambda (x::obj e::procedure)
					(call-check x 'number? "number" e)))
   (install-G-comptime-expander 'max (lambda (x::obj e::procedure)
					(call-check x 'number? "number" e)))
   
   ;; eq?
   (install-O-comptime-expander 'eq? expand-eq?)
   
   ;; +fx
   (install-O-comptime-expander '+fx expand-+fx)
   
   ;; -fx
   (install-O-comptime-expander '-fx expand--fx)
   
   ;; maxfx
   (install-O-comptime-expander 'maxfx expand-maxfx)
   
   ;; minfx
   (install-O-comptime-expander 'minfx expand-minfx)
   
   ;; maxfl
   (install-O-comptime-expander 'maxfl expand-fmax)
   
   ;; minfl
   (install-O-comptime-expander 'minfl expand-fmin)
   
   ;; atanfl
   (install-O-comptime-expander 'atanfl expand-fatan)
   
   ;; sqrtfl
   (install-O-comptime-expander
    'sqrtfl
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?n)
	   (if *unsafe-range*
	       `(sqrtfl-ur ,(e n e))
	       `(sqrtfl ,(e n e))))
	  (else
	   (error #f "Illegal `sqrtfl' call" x)))))
   ;; atan-2fl
   (install-O-comptime-expander
    'atan-2fl
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?n ?m)
	   (if *unsafe-range*
	       `(atan-2fl-ur ,(e n e) ,(e m e))
	       `(atan-2fl ,(e n e) ,(e m e))))
	  (else
	   (error #f "Illegal `atan-2fl' call" x)))))
   ;; let*
   (install-compiler-expander 'let* expand-let*)
   
   ;; let
   (install-compiler-expander 'let expand-let)
   (install-compiler-expander (let-sym) expand-let)
   
   ;; letrec
   (install-compiler-expander 'letrec expand-letrec)

   ;; letrec*
   (install-compiler-expander 'letrec* expand-letrec)
   
   ;; labels
   (install-compiler-expander 'labels expand-labels)
   (install-compiler-expander (labels-sym) expand-labels)
   
   ;; case
   (install-compiler-expander 'case expand-case)
   
   ;; read
   (install-O-comptime-expander
    'read
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?port)
	   `(read ,(e port e)))
	  ((?- ?port ?value)
	   `(read ,(e port e) ,(e value e)))
	  ((?-)
	   `(read ((@ current-input-port __r4_ports_6_10_1))))
	  (else
	   (error #f "Illegal `read' form" x)))))
   
   ;; read/rp
   (install-O-comptime-expander
    'read/rp
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?g ?port . ?opts)
	   (if (>=fx (bigloo-compiler-debug) 2)
	       (let ((gr (gensym)))
		  `(let ((,gr ,(e g e)))
		      (if (correct-arity? ,gr ,(+fx 1 (length opts)))
			  (,gr ,(e port e) ,@(map (lambda (x) (e x e)) opts))
			  (error 'read/rp "Grammar arity mismatch" ,gr))))
	       `(,(e g e) ,(e port e) ,@(map (lambda (x) (e x e)) opts))))
	  (else
	   (error #f "Illegal `read/rp' form" x)))))
   
   ;; vector
   (install-O-comptime-expander
    'vector
    (lambda (x::obj e::procedure)
       (let ((args (cdr x))
	     (v    (mark-symbol-non-user!
		    (gensym 'v))))
	  (e `(let ((,v ($create-vector ,(length args))))
		 ,@(let loop ((i    0)
			      (args args)
			      (res  '()))
		      (if (null? args)
			  res
			  (loop (+fx i 1)
				(cdr args)
				(cons
				 (epairify
				  `(vector-set-ur! ,v ,i ,(car args)) x)
				 res))))
		 ,v)
	     e))))
   
   ;; make-vector
   (install-O-comptime-expander
    'make-vector
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?n)
	   `($make-vector ,(e n e) ,(e '(unspecified) e)))
	  ((?- ?n ?init)
	   `($make-vector ,(e n e) ,(e init e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))

   ;;typed vectors
   (let ((evref (lambda (x::obj e::procedure)
		   (match-case x
		      ((?op ?vec ?k)
		       (let ((evec (e vec e))
			     (ek (e k e)))
			  (if *unsafe-range*
			      `(,(symbol-append '$ op) ,evec ,ek)
			      `(,op ,evec ,ek))))
		      (else
		       (error #f "Illegal `vector-ref' form" x)))))
	 (evset! (lambda (x::obj e::procedure)
		    (match-case x
		       ((?op ?vec ?k ?obj)
			(let ((evec (e vec e))
			      (ek   (e k e))
			      (eobj (e obj e)))
			   (if *unsafe-range*
			       `(,(symbol-append '$ op) ,evec ,ek ,eobj)
			       `(,op ,evec ,ek ,eobj))))
		       (else
			(error #f "Illegal `vector-set!' form" x))))))
      (install-O-comptime-expander 's8vector-ref evref)
      (install-O-comptime-expander 's8vector-set! evset!)
      (install-O-comptime-expander 'u8vector-ref evref)
      (install-O-comptime-expander 'u8vector-set! evset!)
      (install-O-comptime-expander 's16vector-ref evref)
      (install-O-comptime-expander 's16vector-set! evset!)
      (install-O-comptime-expander 'u16vector-ref evref)
      (install-O-comptime-expander 'u16vector-set! evset!)
      (install-O-comptime-expander 's32vector-ref evref)
      (install-O-comptime-expander 's32vector-set! evset!)
      (install-O-comptime-expander 'u32vector-ref evref)
      (install-O-comptime-expander 'u32vector-set! evset!)
      (install-O-comptime-expander 's64vector-ref evref)
      (install-O-comptime-expander 's64vector-set! evset!)
      (install-O-comptime-expander 'u64vector-ref evref)
      (install-O-comptime-expander 'u64vector-set! evset!)
      (install-O-comptime-expander 'f32vector-ref evref)
      (install-O-comptime-expander 'f32vector-set! evset!)
      (install-O-comptime-expander 'f64vector-ref evref)
      (install-O-comptime-expander 'f64vector-set! evset!))
   
   ;; string-append
   (install-O-comptime-expander
    'string-append
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?str1)
	   (e str1 e))
	  ((?- ?str1 ?str2)
	   `($string-append ,(e str1 e) ,(e str2 e)))
	  ((?- ?str1 ?str2 ?str3)
	   `($string-append-3 ,(e str1 e) ,(e str2 e) ,(e str3 e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   (install-G-comptime-expander
    'string-append
    (lambda (x::obj e::procedure)
       (call-check x 'string? "string" e)))

   ;; symbol-append
   (install-O-comptime-expander
    'symbol-append
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?sym1)
	   (e sym1 e))
	  ((?- (quote ?sym1) (quote ?sym2))
	   `',(symbol-append sym1 sym2))
	  ((?- ?sym1 ?sym2)
	   (e `(string->symbol
		(string-append (symbol->string ,sym1) (symbol->string ,sym2)))
	      e))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   (install-G-comptime-expander
    'symbol-append
    (lambda (x::obj e::procedure)
       (call-check x 'symbol? "symbol" e)))
   
   ;; substring
   (install-O-comptime-expander
    'substring
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?s ?min ?max)
	   (let ((s   (e s e))
		 (min (e min e))
		 (max (e max e)))
	      (if *unsafe-range*
		  `(substring-ur ,s ,min ,max)
		  `(substring ,s ,min ,max))))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; substring-at?
   (install-O-comptime-expander
    'substring-at?
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?s1 ?s2 ?o)
	   (e `($prefix-at? ,s1 ,s2 ,o) e))
	  ((?- ?s1 ?s2 ?o ?l)
	   (e `($substring-at? ,s1 ,s2 ,o ,l) e))
	  (else
	   (error #f "Illegal `substrint-at?' form" x)))))
   
   ;; substring-ci-at?
   (install-O-comptime-expander
    'substring-ci-at?
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?s1 ?s2 ?o)
	   (e `($prefix-ci-at? ,s1 ,s2 ,o) e))
	  ((?- ?s1 ?s2 ?o ?l)
	   (e `($substring-ci-at? ,s1 ,s2 ,o ,l) e))
	  (else
	   (error #f "Illegal `substring-ci-at?' form" x)))))
   
   ;; blit-string!
   (install-O-comptime-expander
    'blit-string!
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?s1 ?o1 ?s2 ?o2 ?l)
	   (let ((s1 (e s1 e))
		 (o1 (e o1 e))
		 (s2 (e s2 e))
		 (o2 (e o2 e))
		 (l  (e l e)))
	      (if *unsafe-range*
		  `(blit-string-ur! ,s1 ,o1 ,s2 ,o2 ,l)
		  `(blit-string! ,s1 ,o1 ,s2 ,o2 ,l))))
	  (else
	   (error #f "Illegal `blit-string!' form" x)))))
   
   ;; integer->char
   (install-O-comptime-expander
    'integer->char
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- (and (? fixnum?) ?n))
	   (integer->char n))
	  ((?- ?n)
	   (if *unsafe-range*
	       `(integer->char-ur ,(e n e))
	       `(integer->char ,(e n e))))
	  (else
	   (error #f "Illegal `integer->char' call" x)))))
   
   ;; char->integer
   (install-O-comptime-expander
    'char->integer
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- (and (? char?) ?n))
	   (char->integer n))
	  ((?- ?n)
	   `(char->integer ,(e n e)))
	  (else
	   (error #f "Illegal `integer->char' call" x)))))
   
   ;; cons*
   (install-O-comptime-expander
    'cons*
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?x1)
	   (e x1 e))
	  ((?- ?x1 ?x2)
	   `(c-cons ,(e x1 e) ,(e x2 e)))
	  ((?- ?x1 ?x2 . ?rest)
	   `(c-cons ,(e x1 e)
		    ,(e (epairify
			 `(cons* ,x2 ,@rest)
			 x)
			e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; apply
   (install-O-comptime-expander
    'apply
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?function ?one-arg)
	   `(apply ,(e function e)
		   ,(e one-arg e)))
	  ((?- ?function . ?args)
	   `(apply ,(e function e)
		   ,(e (epairify
			`((@ cons*
			     __r4_pairs_and_lists_6_3)
			  ,@args)
			x)
		       e)))
	  (else
	   (error #f
		  "Illegal `apply' form"
		  x)))))
   
   ;; newline
   (install-O-comptime-expander
    'newline
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?-)
	   `((@ newline-1 __r4_output_6_10_3)
	     ((@ current-output-port
		 __r4_ports_6_10_1))))
	  ((?- ?port)
	   `((@ newline-1 __r4_output_6_10_3)
	     ,(e port e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; display
   (install-O-comptime-expander
    'display
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?o)
	   `(,(disp o) ,(e o e) ((@ current-output-port __r4_ports_6_10_1))))
	  ((?- ?o ?port)
	   `(,(disp o) ,(e o e) ,(e port e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; write-char
   (install-O-comptime-expander
    'write-char
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?obj)
	   `((@ write-char-2 __r4_output_6_10_3)
	     ,(e obj e)
	     ((@ current-output-port __r4_ports_6_10_1))))
	  ((?- ?obj ?port)
	   `((@ write-char-2 __r4_output_6_10_3) ,(e obj e) ,(e port e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; write-byte
   (install-O-comptime-expander
    'write-byte
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?obj)
	   `((@ write-byte-2 __r4_output_6_10_3)
	     ,(e obj e)
	     ((@ current-output-port __r4_ports_6_10_1))))
	  ((?- ?obj ?port)
	   `((@ write-byte-2 __r4_output_6_10_3) ,(e obj e) ,(e port e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; print
   (install-O-comptime-expander
    'print
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?-)
	   `((@ newline-1 __r4_output_6_10_3)
	     ((@ current-output-port __r4_ports_6_10_1))))
	  ((?- . ?obj)
	   (let ((p (mark-symbol-non-user! (gensym 'port))))
	      (e `(,(let-sym)
		   ((,p ((@ current-output-port __r4_ports_6_10_1))))
		   ,@(map
		      (lambda (y) (epairify `(,(disp y) ,y ,p) x))
		      obj)
		   ((@ newline-1 __r4_output_6_10_3) ,p))
		 e))))))
   
   ;; fprint
   (install-O-comptime-expander
    'fprint
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?port)
	   (e `((@ newline-1 __r4_output_6_10_3)
		,port) e))
	  ((?- ?port . ?obj)
	   (let ((aux (mark-symbol-non-user! (gensym 'port))))
	      (e `(,(let-sym)
		   ((,aux ,port))
		   ,@(map (lambda (y)
			     (epairify `(,(disp y) ,y ,aux) x))
			  obj)
		   ((@ newline-1 __r4_output_6_10_3) ,aux))
		 e)))
	  (else
	   (map (lambda (x) (e x e)) x)))))

   ;; with-input-from-file
   (install-O-comptime-expander
    'with-input-from-file
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?expr read-string)
	   (e `(file->string ,expr) e))
	  (else
	   (map (lambda (x) (e x e)) x)))))
   
   ;; inexact->exact
   (install-G-comptime-expander
    'inexact->exact
    (lambda (x::obj e::procedure)
       (call-check x 'number? "number" e)))
   
   ;; exact->inexact
   (install-G-comptime-expander
    'exact->inexact
    (lambda (x::obj e::procedure)
       (call-check x 'number? "number" e)))
   
   ;; values
   (install-O-comptime-expander 'values expand-O-values)
   
   ;; call-with-values
   (install-O-comptime-expander 'call-with-values expand-O-call-with-values)
   
   ;; assert
   (install-compiler-expander 'assert expand-assert)

   ;; define-class
   (install-compiler-expander 'define-class expand-define-class)
   (install-compiler-expander 'define-final-class expand-define-class)
   (install-compiler-expander 'define-abstract-class expand-define-class)
   
   ;; with-access
   (install-compiler-expander 'with-access expand-with-access)
   
   ;; instantiate
   (install-compiler-expander 'instantiate expand-instantiate)
   
   ;; co-instantiate
   (install-compiler-expander 'co-instantiate expand-co-instantiate)
   
   ;; duplicate
   (install-compiler-expander 'duplicate expand-duplicate)
   
   ;; widen!
   (install-compiler-expander 'widen! expand-widen!)
   
   ;; shrink!
   (install-compiler-expander 'shrink! expand-shrink!)
   
   ;; cond-expand
   (install-compiler-expander 'cond-expand expand-compile-cond-expand)
   
   ;; profile
   (install-compiler-expander
    'profile
    (lambda (x e)
       (match-case x
	  ((?- (and (? symbol?) ?lbl) . ?exprs)
	   (if (or (not (number? *profile-mode*)) (= *profile-mode* 0))
	       (e (expand-progn exprs) e)
	       (let* ((la  `(lambda () ,@exprs))
		      (lam (if (epair? x)
			       (econs (car la) (cdr la) (cer x))
			       la))
		      (val (let ((sym (gensym 'value)))
			      (mark-symbol-non-user! sym)
			      sym))
		      (aux `(,(let-sym)
			     ((,lbl ,lam))
			     (GC-profile-push ,(symbol->string lbl) ,lbl)
			     (let ((,val (,lbl)))
				(GC-profile-pop)
				,val)))
		      (res (if (epair? x)
			       (econs (car aux) (cdr aux) (cer x))
			       aux)))
		  (e aux e))))
	  (else
	   (error "profile" "Illegal form" x)))))
   
   ;; profile
   (install-compiler-expander
    'profile/gc
    (lambda (x e)
       (match-case x
	  ((?- (and (? symbol?) ?lbl) . ?exprs)
	   (if (or (not (number? *profile-mode*)) (= *profile-mode* 0))
	       (e (expand-progn exprs) e)
	       (let* ((la  `(lambda () ,@exprs))
		      (lam (if (epair? x)
			       (econs (car la) (cdr la) (cer x))
			       la))
		      (val (let ((sym (gensym 'value)))
			      (mark-symbol-non-user! sym)
			      sym))
		      (aux `(,(let-sym)
			     ((,lbl ,lam))
			     (GC-collect-profile-push ,(symbol->string lbl)
						      ,lbl)
			     (let ((,val (,lbl)))
				(GC-profile-pop)
				,val)))
		      (res (if (epair? x)
			       (econs (car aux) (cdr aux) (cer x))
			       aux)))
		  (e aux e))))
	  (else
	   (error "profile" "Illegal form" x)))))
   
   ;; mmap-set!
   (install-O-comptime-expander
    'mmap-set!
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?vec ?k ?obj)
	   (let ((evec (e vec e))
		 (ek   (e k e))
		 (eobj (e obj e)))
	      (if *unsafe-range*
		  `(mmap-set-ur! ,evec ,ek ,eobj)
		  `(mmap-set! ,evec ,ek ,eobj))))
	  (else
	   (error #f "Illegal `mmap-set!' form" x)))))
   (install-G-comptime-expander
    'mmap-set!
    (lambda (x::obj e::procedure)
       (bound-check x 'mmap-length '$mmap-bound-check? e)))
   
   ;; mmap-ref
   (install-O-comptime-expander
    'mmap-ref
    (lambda (x::obj e::procedure)
       (match-case x
	  ((?- ?vec ?k)
	   (let ((evec (e vec e))
		 (ek   (e k e)))
	      (if *unsafe-range*
		  `(mmap-ref-ur ,evec ,ek)
		  `(mmap-ref ,evec ,ek))))
	  (else
	   (error #f "Illegal `mmap-ref' form" x)))))
   (install-G-comptime-expander
    'mmap-ref
    (lambda (x::obj e::procedure)
       (bound-check x 'mmap-length '$mmap-bound-check? e)))

   ;; pregexp
   (let ((pregexp-expander (lambda (x::obj e::procedure)
			      (match-case x
				 ((?k (and (? string?) ?regexp) . ?rest)
				  ;; the pregexp functions are not re-entrant!
				  ;; they change their argument when its
				  ;; a U-regexp. Hence, we have to copy it
				  ;; first!
				  `(,k (tree-copy ',(pregexp regexp))
				       ,@(map (lambda (x) (e x e)) rest)))
				 ((?k . ?rest)
				  `(,k ,@(map (lambda (x) (e x e)) rest)))
				 (else
				  (error #f "Illegal `pregexp' form" x))))))
      (install-O-comptime-expander 'pregexp-match-positions pregexp-expander)
      (install-O-comptime-expander 'pregexp-match pregexp-expander)
      (install-O-comptime-expander 'pregexp-replace pregexp-expander)
      (install-O-comptime-expander 'pregexp-replace* pregexp-expander)
      (install-O-comptime-expander 'pregexp-split pregexp-expander)))
			 
;*---------------------------------------------------------------------*/
;*    call-check ...                                                   */
;*---------------------------------------------------------------------*/
(define (call-check x pred tname e)
   (let* ((fun (car x))
	  (actuals (cdr x))
	  (formals (map (lambda (x) (mark-symbol-non-user! (gensym))) actuals))
	  (msg (mark-symbol-non-user! (gensym)))
	  (loc (find-location x)))
      (epairify-rec
       `(,(let-sym) (,@(map (lambda (f v) (list f (e v e))) formals actuals)
		       (,msg ,(string-append (symbol->string fun) ": argument not a "
					     tname)))
		    ,(let loop ((args formals))
			(if (null? args)
			    (cons fun formals)
			    `(,(if-sym) (,pred ,(car args))
					,(loop (cdr args))
					,(err/loc loc fun msg (car args))))))
       x)))

;*---------------------------------------------------------------------*/
;*    bound-check ...                                                  */
;*---------------------------------------------------------------------*/
(define (bound-check x flen pred e)
   (match-case x
      ((?fun ?aobj ?aoff . ?rest)
       (let ((fobj (mark-symbol-non-user! (gensym)))
	     (foff (mark-symbol-non-user! (gensym)))
	     (len (mark-symbol-non-user! (gensym)))
	     (loc (find-location x)))
	  (epairify-rec
	   `(,(let-sym) ((,fobj ,(e aobj e))
			 (,foff ,(e aoff e)))
			(,(let-sym)
			 ((,len (,flen ,fobj)))
			 (,(if-sym) (,pred ,foff ,len)
				    (,fun ,fobj ,foff ,@(map (lambda (x) (e x e)) rest))
				    ,(err/loc loc fun "index out of bound" foff))))
	   x)))
      (else
       (error #f "Illegal expression" x))))

;*---------------------------------------------------------------------*/
;*    map-check-non-null ...                                           */
;*---------------------------------------------------------------------*/
(define (map-check-non-null x e null-val)
   (match-case x
      ((?name ?-)
       (user-warning name "used with only two arguments" x)
       null-val)
      (else
       (map-check x e))))

;*---------------------------------------------------------------------*/
;*    map-check ...                                                    */
;*---------------------------------------------------------------------*/
(define (map-check x e)
   (match-case x
      ((?op ?fun . ?actuals)
       (let ((formals (map (lambda (x) (mark-symbol-non-user! (gensym)))
			   actuals))
	     (lformals (map (lambda (x) (mark-symbol-non-user! (gensym)))
			    actuals))
	     (ufun (mark-symbol-non-user! (gensym)))
	     (msg-list (mark-symbol-non-user! (gensym)))
	     (loc (find-location x)))
	  (epairify-rec 
	   `(,(let-sym) (,@(map (lambda (f v) (list f (e v e))) formals actuals)
			   (,ufun ,(e fun e))
			   (,msg-list ,(string-append (symbol->string op)
						      ": argument not a list")))
			(if (correct-arity? ,ufun ,(length actuals))
			    ,(let loop ((args formals))
				(if (null? args)
				    (if (>fx (length actuals) 1)
					`(,(let-sym)
					  ,(map (lambda (lf f)
						   `(,lf (length ,f)))
						lformals formals)
					  (,(if-sym) (= ,@lformals)
						     (,op ,ufun ,@formals)
						     ,(err/loc loc
							       op
							       "Various list length"
							       `(list ,@lformals))))
					`(,op ,ufun ,@formals))
				    `(,(if-sym) (list? ,(car args))
						,(loop (cdr args))
						((@ error  __error) #f ,msg-list ,(car args)))))
			    ,(err/loc loc
				      op
				      "Incorrect function arity"
				      (length actuals))))
	   x)))
      (else
       (error #f (car x) "Illegal form"))))

;*---------------------------------------------------------------------*/
;*    err/loc ...                                                      */
;*---------------------------------------------------------------------*/
(define (err/loc loc proc msg obj)
   (if (location? loc)
       `((@ error/location  __error) ',proc
				     ,msg
				     ,obj
				     ,(location-full-fname loc)
				     ,(location-pos loc))
       `((@ error  __error) ',proc ,msg ,obj)))
   
;*---------------------------------------------------------------------*/
;*    disp ...                                                         */
;*---------------------------------------------------------------------*/
(define (disp obj)
   (cond
      ((string? obj)
       '(@ display-string __r4_output_6_10_3))
      ((and (pair? obj)
	    (eq? (car obj) 'quote)
	    (symbol? (cadr obj)))
       '(@ display-symbol __r4_output_6_10_3))
      ((fixnum? obj)
       '(@ display-fixnum __r4_output_6_10_3))
      ((flonum? obj)
       '(@ display-flonum __r4_output_6_10_3))
      ((char? obj)
       '(@ write-char-2 __r4_output_6_10_3))
      (else
       '(@ display-2 __r4_output_6_10_3))))
