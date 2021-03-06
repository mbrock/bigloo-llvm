;*=====================================================================*/
;*    serrano/prgm/project/bigloo/runtime/Eval/expdtrace.scm           */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel SERRANO                                    */
;*    Creation    :  Tue Sep  1 16:21:59 1992                          */
;*    Last change :  Sat Dec 18 06:47:00 2010 (serrano)                */
;*    -------------------------------------------------------------    */
;*    Trace forms expansion                                            */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module __expander_trace
   
   (import  __error
	    __bigloo
	    __tvector
	    __structure
	    __tvector
	    __bexit
	    __bignum
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
	    
	    __progn
	    __param)
   
   (use     __type
	    __evenv)
   
   (export  (make-expand-when-trace::procedure ::symbol)
	    (make-expand-with-trace::procedure ::symbol)
	    (make-expand-trace-item::procedure ::symbol)))

;*---------------------------------------------------------------------*/
;*    make-expand-when-trace ...                                       */
;*---------------------------------------------------------------------*/
(define (make-expand-when-trace mode)
   (lambda (x e)
   (match-case x
	 ((?- ?level . ?exp)
	  (if (if (eq? mode 'compiler)
		  (>fx (bigloo-compiler-debug) 0)
		  (>fx (bigloo-debug) 0))
	      (e `(if (>=fx (bigloo-debug) ,level)
		      (begin ,@exp)
		      #unspecified)
		 e)
	      #unspecified))
	 (else
	  (error "when-trace" "Illegal form" x)))))

;*---------------------------------------------------------------------*/
;*    make-with-trace ...                                              */
;*---------------------------------------------------------------------*/
(define (make-expand-with-trace mode)
   (lambda (x e)
      (match-case x
	 ((?- ?level ?lbl . ?arg*)
	  (if (if (eq? mode 'compiler)
		  (>fx (bigloo-compiler-debug) 0)
		  (>fx (bigloo-debug) 0))
	      (e `(if (>fx (bigloo-debug) 0)
		      (%with-trace ,level ,lbl (lambda () (begin ,@arg*)))
		      (begin ,@arg*)) e)
	      (e `(begin ,@arg*) e)))
	 (else
	  (error "with-trace" "Illegal form" x)))))

;*---------------------------------------------------------------------*/
;*    make-expand-trace-item ...                                       */
;*---------------------------------------------------------------------*/
(define (make-expand-trace-item mode)
   (lambda (x e)
      (if (if (eq? mode 'compiler)
		  (>fx (bigloo-compiler-debug) 0)
		  (>fx (bigloo-debug) 0))
	  `(if (>fx (bigloo-debug) 0)
	       (trace-item ,@(map (lambda (x) (e x e)) (cdr x)))
	       #unspecified)
	  #unspecified)))
