;*=====================================================================*/
;*    serrano/prgm/project/bigloo/runtime/Llib/module.scm              */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Thu Mar 26 05:19:47 2009                          */
;*    Last change :  Thu Jan  7 12:26:19 2010 (serrano)                */
;*    Copyright   :  2009-10 Manuel Serrano                            */
;*    -------------------------------------------------------------    */
;*    This part of the library implements the module resolution        */
;*    that is in charge of mapping module names to file names.         */
;*    It is used by both the interpreter and the compiler.             */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module __module

   (import  __error
	    __configure
	    __param
	    __object
	    __thread
	    __bexit
	    __reader)
   
   (use     __type
	    __tvector
	    __bit
	    __bignum
	    __bigloo
	    __os

	    __r4_numbers_6_5_fixnum
	    __r4_numbers_6_5_flonum
	    __r4_equivalence_6_2
	    __r4_vectors_6_8
	    __r4_booleans_6_1
	    __r4_pairs_and_lists_6_3
	    __r4_control_features_6_9
	    __r4_characters_6_6
	    __r4_symbols_6_4
	    __r4_strings_6_7
	    __r5_control_features_6_4
	    __r4_output_6_10_3
	    __r4_ports_6_10_1
	    
	    __evenv)

   (extern  (macro $module-abase-set!::obj (::obj) "BGL_ABASE_SET")
	    (macro $module-abase::obj () "BGL_ABASE"))

   (java    (class foreign
	       (method static $module-abase-set!::obj (::obj) "BGL_ABASE_SET")
	       (method static $module-abase::obj () "BGL_ABASE")))

   (export  (inline module-abase)
	    (inline module-abase-set! ::obj)
	    (bigloo-module-resolver::procedure)
	    (bigloo-module-resolver-set! ::procedure)
	    (module-add-access! ::symbol ::pair ::bstring)
	    (module-read-access-file ::input-port)
	    (module-load-access-file ::bstring)))

;*---------------------------------------------------------------------*/
;*    modules-mutex ...                                                */
;*---------------------------------------------------------------------*/
(define modules-mutex (make-mutex "modules"))

;*---------------------------------------------------------------------*/
;*    module-abase ...                                                 */
;*---------------------------------------------------------------------*/
(define-inline (module-abase)
   ($module-abase))

(define-inline (module-abase-set! val)
   ($module-abase-set! val))

;*---------------------------------------------------------------------*/
;*    afile-table ...                                                  */
;*---------------------------------------------------------------------*/
(define afile-table '())

;*---------------------------------------------------------------------*/
;*    bigloo-module-resolver ...                                       */
;*---------------------------------------------------------------------*/
(define %bigloo-module-resolver module-default-resolver)

(define (bigloo-module-resolver)
   %bigloo-module-resolver)

(define (bigloo-module-resolver-set! resolve)
   (with-lock modules-mutex
      (lambda ()
	 (if (and (procedure? resolve) (correct-arity? resolve 2))
	     (set! %bigloo-module-resolver resolve)
	     (error 'bigloo-module-resolver-set! "Illegal resolver" resolve)))))

;*---------------------------------------------------------------------*/
;*    module-default-resolver ...                                      */
;*    -------------------------------------------------------------    */
;*    The default module resolver first check the afile-table and      */
;*    then try a filename whose name matches the module name.          */
;*---------------------------------------------------------------------*/
(define (module-default-resolver mod::symbol abase)
   (with-lock modules-mutex
      (lambda ()
	 (cond
	    ((null? abase)
	     (resolve-abase mod "."))
	    ((string? abase)
	     (resolve-abase mod abase))
	    ((pair? abase)
	     (let loop ((abase abase))
		(if (pair? abase)
		    (let ((resolve (resolve-abase mod (car abase))))
		       (if (pair? resolve)
			   resolve
			   (loop (cdr abase))))
		    '())))
	    (else
	     (resolve-abase* mod))))))

;*---------------------------------------------------------------------*/
;*    resolve-abase* ...                                               */
;*---------------------------------------------------------------------*/
(define (resolve-abase* mod)
   (let loop ((afile afile-table))
      (if (null? afile)
	  '()
	  (let ((f (resolve-abase/bucket mod (car afile))))
	     (if (pair? f)
		 f
		 (loop (cdr afile)))))))

;*---------------------------------------------------------------------*/
;*    resolve-abase ...                                                */
;*---------------------------------------------------------------------*/
(define (resolve-abase mod abase)
   (let ((base (assoc abase afile-table)))
      (if (pair? base)
	  (resolve-abase/bucket mod base)
	  '())))

;*---------------------------------------------------------------------*/
;*    resolve-abase/bucket ...                                         */
;*---------------------------------------------------------------------*/
(define (resolve-abase/bucket mod base)
   (let ((cell (assq mod (cdr base))))
      (if (pair? cell)
	  (filter string? (cdr cell))
	  (let ((f (string-append (symbol->string mod) ".scm")))
	     (if (file-exists? f)
		 (list f)
		 '())))))

;*---------------------------------------------------------------------*/
;*    module-add-access-inner! ...                                     */
;*---------------------------------------------------------------------*/
(define (module-add-access-inner! module files abase)
   (let ((base (assoc abase afile-table)))
      (if (not base)
	  (set! afile-table
		(cons (cons abase (list (cons module files))) afile-table))
	  (let ((cell (assq module (cdr base))))
	     (if (not cell)
		 (set-cdr! base (cons (cons module files) (cdr base)))
		 (unless (equal? (cdr cell) files)
		    (set-cdr! cell files)
		    (warning 'add-access!
			     "access redefinition -- " module " ["
			     (cdr cell) " " files "] for directory \"" abase
			     "\"")))))))

;*---------------------------------------------------------------------*/
;*    module-add-access! ...                                           */
;*---------------------------------------------------------------------*/
(define (module-add-access! module files abase)
   (mutex-lock! modules-mutex)
   (module-add-access-inner! module files abase)
   (mutex-unlock! modules-mutex))

;*---------------------------------------------------------------------*/
;*    module-read-access-file ...                                      */
;*---------------------------------------------------------------------*/
(define (module-read-access-file port)
   (filter (lambda (x)
	      (if (and (pair? x) (symbol? (car x)) (list? (cdr x)))
		  #t
		  (begin
		     (warning 'module-read-access-file "Illegal entry -- " x)
		     #f)))
	   (read port)))

;*---------------------------------------------------------------------*/
;*    module-load-access-file ...                                      */
;*---------------------------------------------------------------------*/
(define (module-load-access-file name)
   
   (define (relative-path f abase)
      (cond
	 ((not (string? f)) f)
	 ((or (string=? f "") (char=? (string-ref f 0) (file-separator))) f)
	 (else (make-file-name abase f))))
   
   (mutex-lock! modules-mutex)
   (call-with-input-file name
      (lambda (port)
	 (let ((abase (dirname name)))
	    (for-each (lambda (access)
			 (let ((info (if (string=? abase ".")
					 (cdr access)
					 (map! (lambda (f)
						  (relative-path f abase))
					       (cdr access)))))
			    (module-add-access-inner! (car access) info abase)))
		      (module-read-access-file port)))))
   (mutex-unlock! modules-mutex))

