;*=====================================================================*/
;*    serrano/prgm/project/bigloo/runtime/Eval/evcompile.scm           */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Fri Mar 25 09:09:18 1994                          */
;*    Last change :  Fri Dec 31 11:38:02 2010 (serrano)                */
;*    -------------------------------------------------------------    */
;*    La pre-compilation des formes pour permettre l'interpretation    */
;*    rapide                                                           */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    Le module                                                        */
;*---------------------------------------------------------------------*/
(module __evcompile
   
   (include "Eval/byte-code.sch")
   
   (import  __type
	    __error
	    __bigloo
	    __tvector
	    __structure
	    __tvector
	    __bexit
	    __bignum
	    __os
	    __dsssl
	    __bit
	    __param
	    __object
	    __thread
	    
	    __r4_numbers_6_5
	    __r4_numbers_6_5_fixnum
	    __r4_numbers_6_5_flonum
	    __r4_characters_6_6
	    __r4_equivalence_6_2
	    __r4_booleans_6_1
	    __r4_symbols_6_4
	    __r4_strings_6_7
	    __r4_pairs_and_lists_6_3
	    __r4_input_6_10_2
	    __r4_control_features_6_9
	    __r4_vectors_6_8
	    __r4_ports_6_10_1
	    __r4_output_6_10_3

   	    __evenv
	    __eval
	    __evobject
	    __evmodule
	    __expand
	    __reader)
   
   (export  (untype-ident ident)
	    (evcompile-loc-filename loc)
	    (evcompile exp ::pair-nil ::obj ::symbol ::bool loc ::bool ::bool)
	    (evcompile-error ::obj ::obj ::obj ::obj)))

;*---------------------------------------------------------------------*/
;*    untype-ident ...                                                 */
;*---------------------------------------------------------------------*/
(define (untype-ident id)
   (if (not (symbol? id))
       id
       (let* ((string (symbol->string id))
	      (len    (string-length string)))
	  (let loop ((walker  0))
	     (cond
		((=fx walker len)
		 id)
		((and (char=? (string-ref string walker) #\:)
		      (<fx walker (-fx len 1))
		      (char=? (string-ref string (+fx walker 1)) #\:))
		 (string->symbol (substring string 0 walker)))
		(else
		 (loop (+fx walker 1))))))))

;*---------------------------------------------------------------------*/
;*    untype-ident* ...                                                */
;*---------------------------------------------------------------------*/
(define (untype-ident* idents)
   (cond
      ((null? idents)
       '())
      ((pair? idents)
       (cons (untype-ident (car idents)) (untype-ident* (cdr idents))))
      (else
       (untype-ident idents))))

;*---------------------------------------------------------------------*/
;*    get-location ...                                                 */
;*---------------------------------------------------------------------*/
(define (get-location exp loc)
   (or (get-source-location exp) loc))

;*---------------------------------------------------------------------*/
;*    tailcall? ...                                                    */
;*---------------------------------------------------------------------*/
(define (tailcall?)
   (<fx (bigloo-debug) 3))

;*---------------------------------------------------------------------*/
;*    evcompile ...                                                    */
;*    -------------------------------------------------------------    */
;*    The syntax is here unchecked because the macro-expansion has     */
;*    already enforced it.                                             */
;*---------------------------------------------------------------------*/
(define (evcompile exp
		   env::pair-nil genv::obj
		   where::symbol
		   tail::bool loc lkp::bool toplevelp::bool)
   (match-case exp
      (()
       (evcompile-error loc 'eval "Illegal expression" '()))
      ((module . ?-)
       (if toplevelp
	   (evcompile (expand (evmodule exp (get-location exp loc)))
		      env genv where #f loc lkp #t)
	   (evcompile-error loc 'eval
			    "Illegal non toplevel module declaration" exp)))
      ((assert . ?-)
       (unspecified))
      ((atom ?atom)
       (cond
	  ((symbol? atom)
	   (evcompile-ref (variable loc atom env genv) loc lkp))
	  ((or (vector? atom)
	       (struct? atom))
	   (evcompile-error loc
			    'eval
			    "Illegal expression (should be quoted)"
			    exp))
	  ((and (procedure? atom) (not lkp))
	   (evcompile-error loc
			    'eval
			    "Illegal procedure in unlinked byte code"
			    atom))
	  (else
	   (evcompile-cnst atom loc))))
      (((and (? symbol?)
	     (? (lambda (x) (not (dynamic? (variable loc x env genv)))))
	     ?fun)
	. ?args)
       (let* ((loc (get-location exp loc))
	      (actuals (map (lambda (a)
			       (evcompile a env genv where #f loc lkp #f))
			    args)))
	  (let ((proc (variable loc fun env genv)))
	     (evcompile-application fun
				    (evcompile-ref proc loc lkp)
				    actuals
				    tail
				    loc))))
      ((@ (and ?id (? symbol?)) (and ?mod (? symbol?)))
       (let ((@var (@variable loc id env genv mod)))
	  (evcompile-ref @var loc lkp)))
      ((quote ?cnst)
       (evcompile-cnst cnst (get-location exp loc)))
      ((if ?si ?alors ?sinon)
       (let ((loc (get-location exp loc)))
	  (evcompile-if (evcompile si env genv
				   where #f
				   (get-location si loc)
				   lkp #f)
			(evcompile alors env genv
				   where tail
				   (get-location alors loc)
				   lkp #f)
			(evcompile sinon env genv
				   where tail
				   (get-location sinon loc)
				   lkp #f)
			loc)))
      (((kwote or) . ?rest)
       (evcompile-or rest env genv where (get-location exp loc) lkp))
      (((kwote and) . ?rest)
       (evcompile-and rest env genv where (get-location exp loc) lkp))
      ((begin . ?rest)
       (evcompile-begin rest env genv where tail
			(get-location exp loc) lkp toplevelp))
      ((or (define ?var (and (lambda . ?-) ?val))
	   (define ?var (begin (and (lambda . ?-) ?val))))
       (cond
	  ((and (eq? where '_)
		(or (eq? genv (scheme-report-environment 5))
		    (eq? genv (null-environment 5))))
	   (evcompile-error loc
			    'eval
			    "Illegal define form (sealed environment)"
			    exp))
	  ((not toplevelp)
	   (evcompile-error loc
			    'eval
			    "Illegal non toplevel define"
			    exp))
	  (else
	   (let ((loc (get-location exp loc)))
	      (evcompile-define-lambda (untype-ident var)
				       (evcompile val '()
						  genv var
						  (tailcall?)
						  (get-location exp loc)
						  lkp #f)
				       loc)))))
      ((define ?var ?val)
       (cond
	  ((and (eq? where '_)
		(or (eq? genv (scheme-report-environment 5))
		    (eq? genv (null-environment 5))))
	   (evcompile-error loc
			    'eval
			    "Illegal define form (sealed environment)"
			    exp))
	  ((not toplevelp)
	   (evcompile-error loc
			    'eval
			    "Illegal non toplevel define"
			    exp))
	  (else
	   (let ((loc (get-location exp loc)))
	      (evcompile-define-value (untype-ident var)
				      (evcompile val '()
						 genv where
						 (tailcall?)
						 (get-location val loc)
						 lkp #f)
				      loc)))))
      ((set! . ?-)
       (match-case exp
	  ((?- (and (? symbol?) ?var) ?val)
	   (let ((loc (get-location exp loc)))
	      (evcompile-set (variable loc var env genv)
			     (evcompile val env
					genv var #f
					(get-location val loc)
					lkp #f)
			     loc)))
	  (else
	   (error "set!" "Illegal form" exp))))
      ((bind-exit ?escape ?body)
       (let ((loc (get-location exp loc)))
	  (evcompile-bind-exit (evcompile `(lambda ,escape ,body)
					  env genv (car escape)
					  #f
					  (get-location body loc)
					  lkp #f)
			       loc)))
      ((unwind-protect ?body . ?protect)
       (let ((loc (get-location exp loc)))
	  (evcompile-unwind-protect (evcompile body env
					       genv where #f
					       (get-location body loc)
					       lkp #f)
				    (evcompile-begin protect env genv
						     where #f
						     (get-location protect loc)
						     lkp
						     #f)
				    loc)))
      ((with-handler ?handler . ?body)
       (let ((loc (get-location exp loc)))
	  (evcompile-with-handler (evcompile handler env
					     genv where #f
					     (get-location handler loc)
					     lkp #f)
				  (evcompile-begin body env genv
						   where #f
						   (get-location body loc)
						   lkp
						   #f)
				  loc)))
     ((lambda ?formals ?body)
      ;;(tprint "where=" where " " `(lambda ,formals ,body))
      (let* ((loc (get-location exp loc))
	     (scm-formals (dsssl-formals->scheme-formals
			   formals
			   (lambda (proc msg obj)
			      (evcompile-error loc proc msg obj))))
	     (untyped-scm-formals (untype-ident* scm-formals)))
	 (evcompile-lambda untyped-scm-formals
			   (evcompile (make-dsssl-function-prelude
				       exp
				       formals
				       body
				       (lambda (proc msg obj)
					  (evcompile-error loc proc msg obj)))
				      (extend-env untyped-scm-formals env)
				      genv
				      where
				      (tailcall?)
				      (get-location body loc)
				      lkp #f)
			   where
			   loc)))
      ((let ?bindings ?body)
       (evcompile-let bindings body env
		      genv where tail
		      (get-location exp loc)
		      lkp))
      ((let* ?bindings ?body)
       (evcompile-let* bindings body env
		       genv where tail
		       (get-location exp loc)
		       lkp))
      ((letrec ?bindings ?body)
       (evcompile-letrec bindings body env
			 genv where tail
			 (get-location exp loc)
			 lkp))
      (((atom ?fun) . ?args)
       (let* ((loc (get-location exp loc))
	      (actuals (map (lambda (a)
			       (evcompile a env genv where #f loc lkp #f))
			    args)))
	  (cond
	     ((symbol? fun)
	      (let ((proc (variable loc fun env genv)))
		 (evcompile-application fun
					(evcompile-ref proc loc lkp)
					actuals
					tail
					loc)))
	     ((procedure? fun)
	      (if lkp
		  (evcompile-compiled-application fun actuals loc)
		  (evcompile-error loc
				   'eval
				   "Illegal procedure in unlinked byte code"
				   fun)))
	     (else
	      (evcompile-error loc 'eval "Not a procedure" fun)
	      (evcode -2 loc (list 'eval "Not a procedure" fun))))))
      (((@ (and (? symbol?) ?fun) (and (? symbol?) ?mod)) . ?args)
       (let* ((loc (get-location exp loc))
	      (actuals (map (lambda (a)
			       (evcompile a env genv where #f loc lkp #f))
			    args))
	      (@proc (@variable loc fun env genv mod)))
	  (evcompile-application fun
				 (evcompile-ref @proc loc lkp)
				 actuals
				 tail
				 loc)))
      ((?fun . ?args)
       (let ((loc (get-location exp loc))
	     (actuals (map (lambda (a)
			      (evcompile a env genv where #f loc lkp #f))
			   args))
	     (proc (evcompile fun env genv where #f loc lkp #f)))
	  (evcompile-application fun proc actuals tail loc)))
      (else
       (evcompile-error loc 'eval "Illegal form" exp))))

;*---------------------------------------------------------------------*/
;*    evcompile-cnst ...                                               */
;*---------------------------------------------------------------------*/
(define (evcompile-cnst cnst loc)
   (cond
      ((vector? cnst)
       (evcode -1 loc cnst))
      (else
       cnst)))

;*---------------------------------------------------------------------*/
;*    eval-global-ref? ...                                             */
;*---------------------------------------------------------------------*/
(define (eval-global-ref? proc)
   (and (vector? proc) (=fx (vector-ref proc 0) 6)))

;*---------------------------------------------------------------------*/
;*    evcompile-ref ...                                                */
;*---------------------------------------------------------------------*/
(define (evcompile-ref variable loc lkp)
   (cond
      ((eval-global? variable)
       (if lkp
	   (evcode (if (eq? (eval-global-tag variable) 1) 5 6)
		   loc
		   variable)
	   (evcode (if (eq? (eval-global-tag variable) 1) 145 146)
		   loc
		   (eval-global-name variable)
		   ($eval-module))))
      ((dynamic? variable)
       (evcode 7 loc (dynamic-name variable) ($eval-module)))
      (else
       (case variable
	  ((0 1 2 3)
	   (evcode variable loc))
	  (else
	   (evcode 4 loc variable))))))

;*---------------------------------------------------------------------*/
;*    evcompile-set ...                                                */
;*---------------------------------------------------------------------*/
(define (evcompile-set variable value loc)
   (cond
      ((eval-global? variable)
       (evcode 8 loc variable value))
      ((dynamic? variable)
       (evcode 9 loc (dynamic-name variable) value ($eval-module)))
      (else
       (case variable
	  ((0 1 2 3)
	   (evcode (+fx 10 variable) loc value))
	  (else
	   (evcode 14 loc variable value))))))

;*---------------------------------------------------------------------*/
;*    evcompile-if ...                                                 */
;*---------------------------------------------------------------------*/
(define (evcompile-if si alors sinon loc)
   (evcode 15 loc si alors sinon))

;*---------------------------------------------------------------------*/
;*    evcompile-or ...                                                 */
;*---------------------------------------------------------------------*/
(define (evcompile-or body env genv where loc lkp)
   (let ((as (map (lambda (x)
		     (evcompile x env genv where #f loc lkp #f))
		  body)))
      (list->evcode 67 loc as)))

;*---------------------------------------------------------------------*/
;*    evcompile-and ...                                                */
;*---------------------------------------------------------------------*/
(define (evcompile-and body env genv where loc lkp)
   (let ((as (map (lambda (x)
		     (evcompile x env genv where #f loc lkp #f))
		  body)))
      (list->evcode 68 loc as)))

;*---------------------------------------------------------------------*/
;*    evcompile-begin ...                                              */
;*---------------------------------------------------------------------*/
(define (evcompile-begin body env genv where tail loc lkp tlp)
   (cond
      ((null? body)
       (evcompile #unspecified env genv where tail loc lkp tlp))
      ((null? (cdr body))
       (evcompile (car body) env genv
		  where tail
		  (get-location (car body) loc)
		  lkp tlp))
      (else
       (let ((cbody (let loop ((rest body))
		       (cond
			  ((null? rest)
			   '())
			  ((null? (cdr rest))
			   (cons (evcompile (car rest) env
					    genv where tail
					    (get-location (car rest) loc)
					    lkp tlp)
				 '()))
			  (else
			   (cons (evcompile (car rest) env genv where #f
					    (get-location (car rest) loc)
					    lkp tlp)
				 (loop (cdr rest))))))))
	  (list->evcode 16 loc cbody)))))

;*---------------------------------------------------------------------*/
;*    evcompile-define-lambda ...                                      */
;*    -------------------------------------------------------------    */
;*    Le calcul de `val' a ete differe car on ne veut evcompiler la    */
;*    valeur liee d'un define qu'une fois que la variable a ete liee   */
;*    dans l'environment. Si on ne fait pas cela on se tape que des    */
;*    appels dynamics dans les definitions des fonctions               */
;*    auto-recursives !                                                */
;*---------------------------------------------------------------------*/
(define (evcompile-define-lambda var val loc)
   (evcode 17 loc var val ($eval-module)))

;*---------------------------------------------------------------------*/
;*    evcompile-define-value ...                                       */
;*---------------------------------------------------------------------*/
(define (evcompile-define-value var val loc)
   (evcode 63 loc var val ($eval-module)))
    
;*---------------------------------------------------------------------*/
;*    evcompile-bind-exit ...                                          */
;*---------------------------------------------------------------------*/
(define (evcompile-bind-exit body loc)
   (evcode 18 loc body))

;*---------------------------------------------------------------------*/
;*    evcompile-unwind-protect ...                                     */
;*---------------------------------------------------------------------*/
(define (evcompile-unwind-protect body protect loc)
   (evcode 64 loc body protect))

;*---------------------------------------------------------------------*/
;*    evcompile-with-handler ...                                       */
;*---------------------------------------------------------------------*/
(define (evcompile-with-handler handler body loc)
   (evcode 71 loc handler body))

;*---------------------------------------------------------------------*/
;*    evcompile-compiled-application ...                               */
;*---------------------------------------------------------------------*/
(define (evcompile-compiled-application proc args loc)
   (case (length args)
      ((0)
       (evcode 25 loc proc))
      ((1)
       (evcode 26 loc proc (car args)))
      ((2)
       (evcode 27 loc proc (car args) (cadr args)))
      ((3)
       (evcode 28 loc proc (car args) (cadr args) (caddr args)))
      ((4)
       (evcode 29 loc proc (car args) (cadr args) (caddr args) (cadddr args)))
      (else
       (evcode 30 loc proc args))))

;*---------------------------------------------------------------------*/
;*    evcompile-application ...                                        */
;*---------------------------------------------------------------------*/
(define (evcompile-application name proc args tail loc)
   (if tail
       (let ((name (if (symbol? name) (symbol-append name '|(+)|) name)))
	  (case (length args)
	     ((0)
	      (evcode 131 loc name proc tail))
	     ((1)
	      (let ((code 132))
		 (if (and (eval-global-ref? proc) (bigloo-eval-strict-module))
		     (let ((fun (evcode-ref proc 0))
			   (a0 (car args)))
			(if (not (eval-global? fun))
			    (evcode code loc name proc (car args) tail)
			    (or (evcompile-inline1 loc name fun a0)
				(evcode code loc name proc (car args) tail))))
		     (evcode code loc name proc (car args) tail))))
	     ((2)
	      (let ((code 133))
		 (if (and (eval-global-ref? proc) (bigloo-eval-strict-module))
		     (let ((fun (evcode-ref proc 0))
			   (a0 (car args))
			   (a1 (cadr args)))
			(if (not (eval-global? fun))
			    (evcode 133 loc name proc a0 a1 tail)
			    (or (evcompile-inline2 loc name fun a0 a1)
				(evcode 133 loc name proc a0 a1 tail))))
		     (evcode 133 loc name proc (car args) (cadr args) tail))))
	     ((3)
	      (evcode 134
		      loc name proc (car args) (cadr args) (caddr args) tail))
	     ((4)
	      (evcode 135
		      loc name proc (car args) (cadr args) (caddr args)
		      (cadddr args) tail))
	     (else
	      (evcode 136 loc name proc args tail))))
       (case (length args)
	  ((0)
	   (evcode 31 loc name proc))
	  ((1)
	   (if (and (eval-global-ref? proc) (bigloo-eval-strict-module))
	       (let ((fun (evcode-ref proc 0))
		     (a0 (car args)))
		  (if (not (eval-global? fun))
		      (evcode 32 loc name proc (car args))
		      (or (evcompile-inline1 loc name fun a0)
			  (evcode 32 loc name proc (car args)))))
	       (evcode 32 loc name proc (car args))))
	  ((2)
	   (if (and (eval-global-ref? proc) (bigloo-eval-strict-module))
	       (let ((fun (evcode-ref proc 0))
		     (a0 (car args))
		     (a1 (cadr args)))
		  (if (not (eval-global? fun))
		      (evcode 33 loc name proc (car args) (cadr args))
		      (or (evcompile-inline2 loc name fun a0 a1)
			  (evcode 33 loc name proc (car args) (cadr args)))))
	       (evcode 33 loc name proc (car args) (cadr args))))
	  ((3)
	   (evcode 34 loc name proc (car args) (cadr args) (caddr args)))
	  ((4)
	   (evcode 35 loc name proc (car args) (cadr args) (caddr args) (cadddr args)))
	  (else
	   (evcode 36 loc name proc args)))))

;*---------------------------------------------------------------------*/
;*    evcompile-inline1 ...                                            */
;*---------------------------------------------------------------------*/
(define (evcompile-inline1 loc name fun a0)
   (let ((f (eval-global-value fun)))
      (cond
	 ((eq? f car)
	  (evcode 158 loc name fun a0))
	 ((eq? f cdr)
	  (evcode 159 loc name fun a0))
	 ((eq? f cadr)
	  (evcode 160 loc name fun a0))
	 (else
	  #f))))

;*---------------------------------------------------------------------*/
;*    evcompile-inline2 ...                                            */
;*---------------------------------------------------------------------*/
(define (evcompile-inline2 loc name fun a0 a1)
   (let ((f (eval-global-value fun)))
      (cond
	 ((eq? f +)
	  (evcode 147 loc name fun a0 a1))
	 ((eq? f -)
	  (evcode 148 loc name fun a0 a1))
	 ((eq? f *)
	  (evcode 149 loc name fun a0 a1))
	 ((eq? f /)
	  (evcode 150 loc name fun a0 a1))
	 ((eq? f <)
	  (evcode 151 loc name fun a0 a1))
	 ((eq? f >)
	  (evcode 152 loc name fun a0 a1))
	 ((eq? f <=)
	  (evcode 153 loc name fun a0 a1))
	 ((eq? f >=)
	  (evcode 154 loc name fun a0 a1))
	 ((eq? f =)
	  (evcode 155 loc name fun a0 a1))
	 ((eq? f eq?)
	  (evcode 156 loc name fun a0 a1))
	 ((eq? f cons)
	  (evcode 157 loc name fun a0 a1))
	 ((eq? f +fx)
	  (evcode 166 loc name fun a0 a1))
	 ((eq? f -fx)
	  (evcode 167 loc name fun a0 a1))
	 ((eq? f *fx)
	  (evcode 168 loc name fun a0 a1))
	 ((eq? f /fx)
	  (evcode 169 loc name fun a0 a1))
	 ((eq? f <fx)
	  (evcode 170 loc name fun a0 a1))
	 ((eq? f >fx)
	  (evcode 171 loc name fun a0 a1))
	 ((eq? f <=fx)
	  (evcode 172 loc name fun a0 a1))
	 ((eq? f >=fx)
	  (evcode 173 loc name fun a0 a1))
	 ((eq? f =fx)
	  (evcode 174 loc name fun a0 a1))
	 (else
	  #f))))

;*---------------------------------------------------------------------*/
;*    evcompile-lambda ...                                             */
;*---------------------------------------------------------------------*/
(define (evcompile-lambda formals body where loc)
   
   (define (traced?)
      (and (symbol? where) (not (getprop where 'non-user))))

   (match-case formals
      ((or () (?-) (?- ?-) (?- ?- ?-) (?- ?- ?- ?-))
       (if (traced?)
	   (evcode (+fx (length formals) 37) loc body where)
	   (evcode (+fx (length formals) 42) loc body)))
      ((atom ?-)
       (if (traced?)
	   (evcode 47 loc body where)
	   (evcode 51 loc body)))
      (((atom ?-) . (atom ?-))
       (if (traced?)
	   (evcode 48 loc body where)
	   (evcode 52 loc body)))
      (((atom ?-) (atom ?-) . (atom ?-))
       (if (traced?)
	   (evcode 49 loc body where)
	   (evcode 53 loc body)))
      (((atom ?-) (atom ?-) (atom ?-) . (atom ?-))
       (if (traced?)
	   (evcode 50 loc body where)
	   (evcode 54 loc body)))
      (else
       (if (traced?)
	   (evcode 55 loc body where formals)
	   (evcode 56 loc body formals)))))

;*---------------------------------------------------------------------*/
;*    evcompile-let ...                                                */
;*---------------------------------------------------------------------*/
(define (evcompile-let bindings body env genv where tail loc lkp)
   (let* ((env2 (extend-env (map (lambda (i) (untype-ident (car i))) bindings)
			    env))
	  (b (evcompile body env2 genv where tail loc lkp #f))
	  (as (map (lambda (a)
		      (let ((loc (get-location a loc))
			    (n (if (eq? where '_)
				   (car a)
				   (symbol-append (car a) '@ where))))
			 (evcompile (cadr a) env genv n #f loc lkp #f)))
		   bindings)))
      (evcode 65 loc b (reverse! as))))
   
;*---------------------------------------------------------------------*/
;*    evcompile-let* ...                                               */
;*---------------------------------------------------------------------*/
(define (evcompile-let* bindings body env genv where tail loc lkp)
   (let loop ((bdgs bindings)
	      (as '())
	      (env3 env))
      (if (null? bdgs)
	  (let* ((env2 (extend-env
			(reverse! (map (lambda (i) (untype-ident (car i)))
				       bindings))
			env))
		 (bd (evcompile body env2 genv where tail loc lkp #f)))
	     (evcode 66 loc bd (reverse! as)))
	  (let* ((b (car bdgs))
		 (loc (get-location b loc))
		 (n (if (eq? where '_)
			(car b)
			(symbol-append (car b) '@ where)))
		 (a (evcompile (cadr b) env3 genv n #f loc lkp #f)))
	     (loop (cdr bdgs)
		   (cons a as)
		   (extend-env (list (untype-ident (car b))) env3))))))
   
;*---------------------------------------------------------------------*/
;*    evcompile-letrec ...                                             */
;*---------------------------------------------------------------------*/
(define (evcompile-letrec bindings body env genv where tail loc lkp)
   (if (every? (lambda (x)
		  (and (pair? x)
		       (pair? (cadr x))
		       (eq? (car (cadr x)) 'lambda)))
	       bindings)
       ;; this letrec only binds functions, compile it efficiently
       (evcompile-letrec-lambda bindings body env genv where tail loc lkp)
       ;; a generic letrec with the intermediate variables
       (evcompile-letrec-generic bindings body env genv where tail loc lkp)))

;*---------------------------------------------------------------------*/
;*    evcompile-letrec-lambda ...                                      */
;*---------------------------------------------------------------------*/
(define (evcompile-letrec-lambda bindings body env genv where tail loc lkp)
   (let* ((env2 (extend-env (map (lambda (i) (untype-ident (car i))) bindings)
			    env))
	  (b (evcompile body env2 genv where tail loc lkp #f))
	  (as (map (lambda (a)
		      (let ((loc (get-location a loc))
			    (n (if (eq? where '_)
				   (car a)
				   (symbol-append (car a) '@ where))))
			 (evcompile (cadr a) env2 genv n #f loc lkp #f)))
		   bindings))) 
      (evcode 70 loc b as)))

;*---------------------------------------------------------------------*/
;*    evcompile-letrec-generic ...                                     */
;*---------------------------------------------------------------------*/
(define (evcompile-letrec-generic bindings body env genv where tail loc lkp)
   (let* ((aux (map (lambda (x) (gensym)) bindings))
	  (exp `(let ,(map (lambda (b)
			      (list (car b) #unspecified))
			   bindings)
		   (let ,(map (lambda (n b)
				 (cons n (cdr b)))
			      aux bindings)
		      (begin
			 ,@(map (lambda (n b)
				   `(set! ,(car b) ,n))
				aux bindings)
			 ,body)))))
      (evcompile exp env genv where tail loc lkp #f)))

;*---------------------------------------------------------------------*/
;*    variable ...                                                     */
;*---------------------------------------------------------------------*/
(define (variable loc symbol env genv)
   (if (not (symbol? symbol))
       (evcompile-error loc 'eval "Illegal `set!' expression" symbol)
       (let ((offset (let loop ((env   env)
				(count 0))
			(cond 
			   ((null? env)
			    #f)
			   ((eq? (car env) symbol)
			    count)
			   (else
			    (loop (cdr env) (+fx count 1)))))))
	  (if offset
	      offset
	      (let* ((mod (if (evmodule? genv) genv ($eval-module)))
		     (global (evmodule-find-global mod symbol)))
		 (if (not global)
		     (cons 'dynamic symbol)
		     global))))))

;*---------------------------------------------------------------------*/
;*    @variable ...                                                    */
;*---------------------------------------------------------------------*/
(define (@variable loc symbol env genv modname)
   (let* ((mod (eval-find-module modname))
	  (global (evmodule-find-global mod symbol)))
      (if (not global)
	  (if (eq? genv mod)
	      (cons 'dynamic symbol)
	      (error 'eval "variable unbound" `(@ ,symbol ,modname)))
	  global)))

;*---------------------------------------------------------------------*/
;*    dynamic? ...                                                     */
;*---------------------------------------------------------------------*/
(define-inline (dynamic? variable)
   (and (pair? variable)
	(eq? (car variable) 'dynamic)))

;*---------------------------------------------------------------------*/
;*    dynamic-name ...                                                 */
;*---------------------------------------------------------------------*/
(define-inline (dynamic-name dynamic)
   (cdr dynamic))

;*---------------------------------------------------------------------*/
;*    extend-env ...                                                   */
;*---------------------------------------------------------------------*/
(define (extend-env extend old-env)
   (let _loop_ ((extend extend))
      (cond
	 ((null? extend)
	  old-env)
	 ((not (pair? extend))
	  (cons extend old-env))
	 (else
	  (cons (car extend) (_loop_ (cdr extend)))))))

;*---------------------------------------------------------------------*/
;*    evcompile-loc-filename ...                                       */
;*---------------------------------------------------------------------*/
(define (evcompile-loc-filename loc)
   (match-case loc
      ((at ?fname ?loc) fname)
      (else #f)))

;*---------------------------------------------------------------------*/
;*    evcompile-error ...                                              */
;*---------------------------------------------------------------------*/
(define (evcompile-error loc proc mes obj)
   (match-case loc
      ((at ?fname ?loc)
       (error/location proc mes obj fname loc))
      (else
       (error proc mes obj))))

;*---------------------------------------------------------------------*/
;*    *files* ...                                                      */
;*---------------------------------------------------------------------*/
(define *included-files* '())
(define *imported-files* '())
(define *afile-list*     '())

;*---------------------------------------------------------------------*/
;*    include! ...                                                     */
;*---------------------------------------------------------------------*/
(define (include! includes)
   (for-each (lambda (i)
		(if (not (member i *included-files*))
		    (begin
		       (set! *included-files* (cons i *included-files*))
		       (loadq i))))
	     includes))

;*---------------------------------------------------------------------*/
;*    import! ...                                                      */
;*---------------------------------------------------------------------*/
(define (import! iclauses)
   (let ((l (map (lambda (i)
		     (match-case i
			((?- ?second)
			 (if (string? second)
			     second
			     (let ((cell (assq second *afile-list*)))
				(if (pair? cell)
				    (cadr cell)
				    #f))))
			((?- ?- ?third)
			 third)
			(?module
			 (let ((cell (assq module *afile-list*)))
			    (if (pair? cell)
				(cadr cell)
				#f)))
		 	(else
			 #f)))
		  iclauses)))
      (for-each (lambda (i)
		   (if (and (string? i)
			    (not (member i *imported-files*)))
		       (begin
			  (set! *imported-files* (cons i *imported-files*))
			  (loadq i))))
		l)))

