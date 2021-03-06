;*=====================================================================*/
;*    serrano/prgm/project/bigloo/api/pthread/src/Llib/pmutex.scm      */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Wed Nov  3 08:14:49 2004                          */
;*    Last change :  Sat May  3 06:17:18 2008 (serrano)                */
;*    Copyright   :  2004-08 Manuel Serrano                            */
;*    -------------------------------------------------------------    */
;*    The public Posix Mutex implementation.                           */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module __pth_mutex

   (include "pmutex.sch")
   
   (export (mutex-specific::obj ::mutex)
	   (mutex-specific-set!::obj ::mutex ::obj)))

;*---------------------------------------------------------------------*/
;*    mutex-specific ...                                               */
;*---------------------------------------------------------------------*/
(define (mutex-specific m)
   ($pmutex-specific m))

;*---------------------------------------------------------------------*/
;*    mutex-specific-set! ...                                          */
;*---------------------------------------------------------------------*/
(define (mutex-specific-set! m v)
   ($pmutex-specific-set! m v)
   v)

