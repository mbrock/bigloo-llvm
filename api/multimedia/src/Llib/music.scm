;*=====================================================================*/
;*    .../prgm/project/bigloo/api/multimedia/src/Llib/music.scm        */
;*    -------------------------------------------------------------    */
;*    Author      :  Manuel Serrano                                    */
;*    Creation    :  Sat Jul 30 14:07:08 2005                          */
;*    Last change :  Wed Mar 10 07:49:23 2010 (serrano)                */
;*    Copyright   :  2005-10 Manuel Serrano                            */
;*    -------------------------------------------------------------    */
;*    Generic music player API                                         */
;*=====================================================================*/

;*---------------------------------------------------------------------*/
;*    The module                                                       */
;*---------------------------------------------------------------------*/
(module __multimedia-music

   (import __multimedia-music-event-loop)
   
   (export (abstract-class music
	      (music-init)

	      (%mutex::mutex (default (make-mutex)))
	      (%loop-mutex::mutex (default (make-mutex)))
	      (%loop-condv::condvar (default (make-condition-variable)))
	      (%status::musicstatus (default (musicstatus-nil)))
	      (%abort-loop::bool (default #f))
	      (%reset-loop::bool (default #f)))

	   (class musicstatus
	      (state::symbol (default 'stop))
	      (volume::obj (default 0))
	      (repeat::bool (default #f))
	      (random::bool (default #f))
	      (playlistid::int (default 0))
	      (playlistlength::int (default 0))
	      (xfade::int (default 0))
	      (song::int (default 0))
	      (songid::int (default 0))
	      (songpos (default 0))
	      (songlength::int (default 0))
	      (bitrate::int (default 0))
	      (khz::int (default 0))
	      (err::obj (default #f)))
	   
	   (generic music-init ::music)
	   
	   (generic music-close ::music)
	   (generic music-closed?::bool ::music)
	   (generic music-reset! ::music)
	   
	   (generic music-playlist-get::pair-nil ::music)
	   (generic music-playlist-add! ::music ::bstring)
	   (generic music-playlist-delete! ::music ::int)
	   (generic music-playlist-clear! ::music)
	   
	   (generic music-play ::music . song)
	   (generic music-seek ::music ::obj . song)
	   (generic music-stop ::music)
	   (generic music-pause ::music)
	   (generic music-next ::music)
	   (generic music-prev ::music)
	   
	   (generic music-crossfade ::music ::int)
	   (generic music-random-set! ::music ::bool)
	   (generic music-repeat-set! ::music ::bool)
	   (generic music-reset-error! ::music)
	   
	   (generic music-status::musicstatus ::music)
	   (generic music-update-status! ::music ::musicstatus)
	   (generic music-song::int ::music)
	   (generic music-songpos::int ::music)
	   (generic music-meta::pair-nil ::music)
	   (generic music-can-play-type?::bool ::music ::bstring)
	   
	   (generic music-volume-get::obj ::music)
	   (generic music-volume-set! ::music ::obj)

	   (music-charset-convert ::obj ::symbol)

	   (%multimedia-init)))

;*---------------------------------------------------------------------*/
;*    Abstract implementation                                          */
;*---------------------------------------------------------------------*/
(define-generic (music-close m::music)
   ;; this function assumes that the music mutex has already been
   ;; acquired by the submethods
   (music-event-loop-abort! m)
   (with-access::music m (%status)
      (musicstatus-state-set! %status 'close)))

(define-generic (music-closed? m::music))
(define-generic (music-reset! m::music))
(define-generic (music-playlist-get::pair-nil m::music))

(define-generic (music-playlist-add! m::music s::bstring)
   (unless (utf8-string? s)
      (error 'music-playlist-add! "Illegal UTF8 song name" s)))

(define-generic (music-playlist-delete! m::music n::int))
(define-generic (music-playlist-clear! m::music))

(define-generic (music-update-status!::musicstatus m::music s::musicstatus))
(define-generic (music-status::musicstatus m::music))

(define-generic (music-play m::music . song))
(define-generic (music-seek m::music p::obj . song))
(define-generic (music-stop m::music))
(define-generic (music-pause m::music))

(define-generic (music-next m::music)
   (with-access::music m (%status)
      (with-access::musicstatus %status (song playlistlength)
	 (if (>=fx song (-fx playlistlength 1))
	     (raise
	      (instantiate::&io-error
		 (proc 'music-next)
		 (msg "No next soung")
		 (obj (musicstatus-song %status))))
	     (music-play m (+fx song 1))))))

(define-generic (music-prev m::music)
   (with-access::music m (%status)
      (with-access::musicstatus %status (song playlistlength)
	 (if (or (<fx song 0) (=fx playlistlength 0))
	     (raise
	      (instantiate::&io-error
		 (proc 'music-prev)
		 (msg "No previous soung")
		 (obj (musicstatus-song %status))))
	     (music-play m (-fx song 1))))))

(define-generic (music-crossfade m::music sec::int))
(define-generic (music-random-set! m::music flag::bool))
(define-generic (music-repeat-set! m::music flag::bool))
(define-generic (music-reset-error! m::music) #unspecified)

(define-generic (music-volume-get::obj m::music))
(define-generic (music-volume-set! m::music v::obj))

;*---------------------------------------------------------------------*/
;*    music-init ...                                                   */
;*---------------------------------------------------------------------*/
(define-generic (music-init m::music)
   (with-access::music m (%status)
      (when (eq? %status (musicstatus-nil))
	 (set! %status (instantiate::musicstatus)))))

;*---------------------------------------------------------------------*/
;*    music-song ...                                                   */
;*---------------------------------------------------------------------*/
(define-generic (music-song::int m::music)
   (musicstatus-song (music-%status m)))

;*---------------------------------------------------------------------*/
;*    msic-songpos ...                                                 */
;*---------------------------------------------------------------------*/
(define-generic (music-songpos::int m::music)
   (musicstatus-songpos (music-%status m)))

;*---------------------------------------------------------------------*/
;*    music-meta ...                                                   */
;*---------------------------------------------------------------------*/
(define-generic (music-meta::pair-nil m::music)
   '())

;*---------------------------------------------------------------------*/
;*    music-can-play-type? ::music ...                                 */
;*---------------------------------------------------------------------*/
(define-generic (music-can-play-type? m::music mimetype::bstring)
   #t)

;*---------------------------------------------------------------------*/
;*    music-charset-convert ...                                        */
;*    -------------------------------------------------------------    */
;*    Convert a string from charset1 to charset2                       */
;*---------------------------------------------------------------------*/
(define (music-charset-convert str charset)
   (if (or (eq? 'UTF-8 charset) (not (string? str)))
       str
       (case charset
	  ((ISO-8859-1 ISO-8859-2 ISO-8859-15 ISO-LATIN-1 WINDOWS-1252)
	   (utf8->iso-latin str))
	  ((CP-1252 WINDOWS-1252)
	   (utf8->cp1252 str))
	  ((UCS-2)
	   (utf8-string->ucs2-string (iso-latin->utf8 str)))
	  (else
	   str))))

;*---------------------------------------------------------------------*/
;*    %multimedia-init ...                                             */
;*---------------------------------------------------------------------*/
(define (%multimedia-init)
   #unspecified)
