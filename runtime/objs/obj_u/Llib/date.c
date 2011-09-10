/*===========================================================================*/
/*   (Llib/date.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/date.scm -indent -o objs/obj_u/Llib/date.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;


	static obj_t BGl__datezd2monthzd2lengthz00zz__datez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32236ze3z83zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2ze3secondsz31zz__datez00(obj_t, obj_t);
	extern obj_t bgl_day_name(int);
	static obj_t BGl_zc3exitza33027ze3z83zz__datez00(obj_t);
	extern obj_t bgl_month_aname(int);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern BgL_z62iozd2parsezd2errorz62_bglt
		BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__datezf3zf3zz__datez00(obj_t, obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__datez00 = BUNSPEC;
	static obj_t BGl_fixnumzd2grammarzd2zz__datez00 = BUNSPEC;
	static obj_t BGl__datezd2yearzd2dayz00zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3stringz31zz__datez00(long);
	static obj_t BGl__datezd2monthzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__datez00();
	BGL_EXPORTED_DECL long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t);
	BGL_EXPORTED_DECL long BGl_datezd2ze3secondsz31zz__datez00(obj_t);
	static obj_t BGl__datezd2timeza7onez75zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2weekzd2dayz00zz__datez00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dayzd2namezd2zz__datez00(int);
	static obj_t BGl__datezd2copyzd2zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2yearzd2dayz00zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dayzd2anamezd2zz__datez00(int);
	static obj_t BGl__rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_leapzd2yearzf3z21zz__datez00(int);
	static obj_t BGl__secondszd2ze3stringz31zz__datez00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_2digitsz00zz__datez00(int);
	static obj_t BGl__monthzd2anamezd2zz__datez00(obj_t, obj_t);
	extern BGL_LONGLONG_T bgl_current_microseconds();
	static obj_t BGl__secondszd2ze3datez31zz__datez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__datez00();
	BGL_EXPORTED_DECL long BGl_datezd2timeza7onez75zz__datez00(obj_t);
	static obj_t BGl__makezd2datezd2zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2hourzd2zz__datez00(obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2weekzd2dayz00zz__datez00(obj_t);
	BGL_EXPORTED_DECL long BGl_dayzd2secondszd2zz__datez00();
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00();
	static obj_t BGl__monthzd2namezd2zz__datez00(obj_t, obj_t);
	static obj_t BGl_symbol3526z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3529z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3532z00zz__datez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__datez00();
	BGL_EXPORTED_DECL long BGl_integerzd2ze3secondz31zz__datez00(long);
	BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t);
	static obj_t BGl_symbol3535z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3538z00zz__datez00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_datezd2ydayzd2zz__datez00(obj_t);
	static obj_t BGl_symbol3541z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3544z00zz__datez00 = BUNSPEC;
	static obj_t BGl__datezd2ze3utczd2stringze3zz__datez00(obj_t, obj_t);
	static obj_t BGl_symbol3547z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3550z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3553z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3556z00zz__datez00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol3563z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3565z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3567z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3569z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3571z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3573z00zz__datez00 = BUNSPEC;
	static obj_t BGl__currentzd2microsecondszd2zz__datez00(obj_t);
	static obj_t BGl_symbol3575z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3577z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3579z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3581z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3583z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3585z00zz__datez00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_datezd2monthzd2zz__datez00(obj_t);
	static obj_t BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BUNSPEC;
	extern obj_t bgl_month_name(int);
	BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3datez31zz__datez00(long);
	static obj_t BGl_parsezd2errorzd2zz__datez00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2iszd2dstz00zz__datez00(obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2yearzd2zz__datez00(obj_t);
	static obj_t BGl_symbol3635z00zz__datez00 = BUNSPEC;
	extern obj_t bgl_day_aname(int);
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_symbol3639z00zz__datez00 = BUNSPEC;
	static obj_t BGl_symbol3642z00zz__datez00 = BUNSPEC;
	static obj_t BGl__datezd2wdayzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__rfc2822zd2parsezd2datez00zz__datez00(obj_t, obj_t);
	static obj_t BGl__currentzd2datezd2zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__datez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_za7onezd2grammarz75zz__datez00 = BUNSPEC;
	static obj_t BGl__dayzd2namezd2zz__datez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__datez00();
	BGL_EXPORTED_DECL long BGl_currentzd2secondszd2zz__datez00();
	static obj_t BGl__integerzd2ze3secondz31zz__datez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32732ze3z83zz__datez00(obj_t, obj_t);
	static obj_t BGl_keyword3589z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3601z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3591z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3603z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3593z00zz__datez00 = BUNSPEC;
	extern long bgl_current_seconds();
	static obj_t BGl_keyword3605z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3595z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3597z00zz__datez00 = BUNSPEC;
	static obj_t BGl_keyword3599z00zz__datez00 = BUNSPEC;
	extern obj_t bgl_seconds_to_date(long);
	static obj_t BGl_za2timezd2za7onesza2z75zz__datez00 = BUNSPEC;
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_EXPORTED_DECL int BGl_datezd2dayzd2zz__datez00(obj_t);
	extern long rgc_buffer_fixnum(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2datezd2zz__datez00();
	static obj_t BGl__datezd2za7onezd2offsetza7zz__datez00(obj_t, obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__datezd2ze3stringz31zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_monthzd2namezd2zz__datez00(int);
	BGL_EXPORTED_DECL int BGl_datezd2minutezd2zz__datez00(obj_t);
	BGL_EXPORTED_DECL int BGl_datezd2secondzd2zz__datez00(obj_t);
	static obj_t BGl__dayzd2secondszd2zz__datez00(obj_t);
	static obj_t BGl_monthzd2grammarzd2zz__datez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long);
	static obj_t BGl__secondszd2ze3utczd2stringze3zz__datez00(obj_t, obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_timezd2grammarzd2zz__datez00 = BUNSPEC;
	static obj_t BGl__currentzd2secondszd2zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datezd2copyzd2zz__datez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_datezd2nanosecondzd2zz__datez00(obj_t);
	static obj_t BGl__datezd2iszd2dstz00zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__dayzd2anamezd2zz__datez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32058ze3z83zz__datez00(obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_seconds_to_string(long);
	BGL_EXPORTED_DECL int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2datezd2zz__datez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl__datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_za2monthzd2lengthsza2zd2zz__datez00 = BUNSPEC;
	extern obj_t bgl_make_date(int, int, int, int, int, int, long, bool_t, int);
	static obj_t BGl_zc3anonymousza32348ze3z83zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2hourzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2dayzd2zz__datez00(obj_t, obj_t);
	extern obj_t bgl_seconds_to_utc_string(long);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl__datezd2ydayzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2nanosecondzd2zz__datez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_datezf3zf3zz__datez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t);
	extern obj_t BGl_getzd2tracezd2stackz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t);
	extern obj_t rgc_buffer_symbol(obj_t);
	static obj_t BGl_list3524z00zz__datez00 = BUNSPEC;
	extern long bgl_date_to_seconds(obj_t);
	static obj_t BGl_list3525z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3528z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3531z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3534z00zz__datez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32508ze3z83zz__datez00(obj_t, obj_t);
	static obj_t BGl_list3537z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3540z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3543z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3546z00zz__datez00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_datezd2wdayzd2zz__datez00(obj_t);
	static obj_t BGl_list3549z00zz__datez00 = BUNSPEC;
	static obj_t BGl_list3552z00zz__datez00 = BUNSPEC;
	static obj_t BGl__datezd2minutezd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2secondzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__datezd2yearzd2zz__datez00(obj_t, obj_t);
	static obj_t BGl__leapzd2yearzf3z21zz__datez00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__datez00();
	BGL_EXPORTED_DECL obj_t BGl_monthzd2anamezd2zz__datez00(int);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dayzd2secondszd2envz00zz__datez00,
		BgL_bgl__dayza7d2secondsza7d3661z00, BGl__dayzd2secondszd2zz__datez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2copyzd2envz00zz__datez00,
		BgL_bgl__dateza7d2copyza7d2za73662za7, opt_generic_entry,
		BGl__datezd2copyzd2zz__datez00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2secondzd2envz00zz__datez00,
		BgL_bgl__dateza7d2secondza7d3663z00, BGl__datezd2secondzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_secondszd2ze3stringzd2envze3zz__datez00,
		BgL_bgl__secondsza7d2za7e3st3664z00, BGl__secondszd2ze3stringz31zz__datez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2monthzd2lengthzd2envzd2zz__datez00,
		BgL_bgl__dateza7d2monthza7d23665z00,
		BGl__datezd2monthzd2lengthz00zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dayzd2namezd2envz00zz__datez00,
		BgL_bgl__dayza7d2nameza7d2za7za73666z00, BGl__dayzd2namezd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2secondszd2envz00zz__datez00,
		BgL_bgl__currentza7d2secon3667za7, BGl__currentzd2secondszd2zz__datez00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2weekzd2dayzd2envzd2zz__datez00,
		BgL_bgl__dateza7d2weekza7d2d3668z00, BGl__datezd2weekzd2dayz00zz__datez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rfc2822zd2datezd2ze3datezd2envz31zz__datez00,
		BgL_bgl__rfc2822za7d2dateza73669z00,
		BGl__rfc2822zd2datezd2ze3dateze3zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_integerzd2ze3secondzd2envze3zz__datez00,
		BgL_bgl__integerza7d2za7e3se3670z00, BGl__integerzd2ze3secondz31zz__datez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2minutezd2envz00zz__datez00,
		BgL_bgl__dateza7d2minuteza7d3671z00, BGl__datezd2minutezd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2ydayzd2envz00zz__datez00,
		BgL_bgl__dateza7d2ydayza7d2za73672za7, BGl__datezd2ydayzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_monthzd2anamezd2envz00zz__datez00,
		BgL_bgl__monthza7d2anameza7d3673z00, BGl__monthzd2anamezd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2ze3stringzd2envze3zz__datez00,
		BgL_bgl__dateza7d2za7e3strin3674z00, BGl__datezd2ze3stringz31zz__datez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dayzd2anamezd2envz00zz__datez00,
		BgL_bgl__dayza7d2anameza7d2za73675za7, BGl__dayzd2anamezd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2iszd2dstzd2envzd2zz__datez00,
		BgL_bgl__dateza7d2isza7d2dst3676z00, BGl__datezd2iszd2dstz00zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2yearzd2envz00zz__datez00,
		BgL_bgl__dateza7d2yearza7d2za73677za7, BGl__datezd2yearzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2monthzd2envz00zz__datez00,
		BgL_bgl__dateza7d2monthza7d23678z00, BGl__datezd2monthzd2zz__datez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2za7onezd2offsetzd2envz75zz__datez00,
		BgL_bgl__dateza7d2za7a7oneza7d3679za7,
		BGl__datezd2za7onezd2offsetza7zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2ze3secondszd2envze3zz__datez00,
		BgL_bgl__dateza7d2za7e3secon3680z00, BGl__datezd2ze3secondsz31zz__datez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_secondszd2ze3datezd2envze3zz__datez00,
		BgL_bgl__secondsza7d2za7e3da3681z00, BGl__secondszd2ze3datez31zz__datez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2datezd2envz00zz__datez00,
		BgL_bgl__makeza7d2dateza7d2za73682za7, opt_generic_entry,
		BGl__makezd2datezd2zz__datez00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2wdayzd2envz00zz__datez00,
		BgL_bgl__dateza7d2wdayza7d2za73683za7, BGl__datezd2wdayzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2nanosecondzd2envz00zz__datez00,
		BgL_bgl__dateza7d2nanoseco3684za7, BGl__datezd2nanosecondzd2zz__datez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rfc2822zd2parsezd2datezd2envzd2zz__datez00,
		BgL_bgl__rfc2822za7d2parse3685za7,
		BGl__rfc2822zd2parsezd2datez00zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2timeza7onezd2envza7zz__datez00,
		BgL_bgl__dateza7d2timeza7a7o3686z00, BGl__datezd2timeza7onez75zz__datez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2ze3utczd2stringzd2envz31zz__datez00,
		BgL_bgl__dateza7d2za7e3utcza7d3687za7,
		BGl__datezd2ze3utczd2stringze3zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3520z00zz__datez00,
		BgL_bgl_za7c3anonymousza7a323688z00,
		BGl_zc3anonymousza32058ze3z83zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3521z00zz__datez00,
		BgL_bgl_za7c3anonymousza7a323689z00,
		BGl_zc3anonymousza32236ze3z83zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3522z00zz__datez00,
		BgL_bgl_za7c3anonymousza7a323690z00,
		BGl_zc3anonymousza32348ze3z83zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3523z00zz__datez00,
		BgL_bgl_za7c3anonymousza7a323691z00,
		BGl_zc3anonymousza32508ze3z83zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2yearzd2dayzd2envzd2zz__datez00,
		BgL_bgl__dateza7d2yearza7d2d3692z00, BGl__datezd2yearzd2dayz00zz__datez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3555z00zz__datez00,
		BgL_bgl_za7c3anonymousza7a323693z00,
		BGl_zc3anonymousza32732ze3z83zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_leapzd2yearzf3zd2envzf3zz__datez00,
		BgL_bgl__leapza7d2yearza7f3za73694za7, BGl__leapzd2yearzf3z21zz__datez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datezd2ze3rfc2822zd2datezd2envz31zz__datez00,
		BgL_bgl__dateza7d2za7e3rfc283695z00,
		BGl__datezd2ze3rfc2822zd2dateze3zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezf3zd2envz21zz__datez00,
		BgL_bgl__dateza7f3za7f3za7za7__d3696z00, BGl__datezf3zf3zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2hourzd2envz00zz__datez00,
		BgL_bgl__dateza7d2hourza7d2za73697za7, BGl__datezd2hourzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3527z00zz__datez00,
		BgL_bgl_string3527za700za7za7_3698za7, "EDT", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_secondszd2ze3utczd2stringzd2envz31zz__datez00,
		BgL_bgl__secondsza7d2za7e3ut3699z00,
		BGl__secondszd2ze3utczd2stringze3zz__datez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3530z00zz__datez00,
		BgL_bgl_string3530za700za7za7_3700za7, "EST", 3);
	      DEFINE_STRING(BGl_string3533z00zz__datez00,
		BgL_bgl_string3533za700za7za7_3701za7, "CDT", 3);
	      DEFINE_STRING(BGl_string3536z00zz__datez00,
		BgL_bgl_string3536za700za7za7_3702za7, "CST", 3);
	      DEFINE_STRING(BGl_string3539z00zz__datez00,
		BgL_bgl_string3539za700za7za7_3703za7, "MDT", 3);
	      DEFINE_STRING(BGl_string3542z00zz__datez00,
		BgL_bgl_string3542za700za7za7_3704za7, "MST", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2dayzd2envz00zz__datez00,
		BgL_bgl__dateza7d2dayza7d2za7za73705z00, BGl__datezd2dayzd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3545z00zz__datez00,
		BgL_bgl_string3545za700za7za7_3706za7, "PDT", 3);
	      DEFINE_STRING(BGl_string3548z00zz__datez00,
		BgL_bgl_string3548za700za7za7_3707za7, "PST", 3);
	      DEFINE_STRING(BGl_string3551z00zz__datez00,
		BgL_bgl_string3551za700za7za7_3708za7, "CEST", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2microsecondszd2envz00zz__datez00,
		BgL_bgl__currentza7d2micro3709za7,
		BGl__currentzd2microsecondszd2zz__datez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3554z00zz__datez00,
		BgL_bgl_string3554za700za7za7_3710za7, "UT", 2);
	      DEFINE_STRING(BGl_string3557z00zz__datez00,
		BgL_bgl_string3557za700za7za7_3711za7, "rfc2822-parse-date", 18);
	      DEFINE_STRING(BGl_string3558z00zz__datez00,
		BgL_bgl_string3558za700za7za7_3712za7, "Illegal zone", 12);
	      DEFINE_STRING(BGl_string3560z00zz__datez00,
		BgL_bgl_string3560za700za7za7_3713za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3559z00zz__datez00,
		BgL_bgl_string3559za700za7za7_3714za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3561z00zz__datez00,
		BgL_bgl_string3561za700za7za7_3715za7, "Illegal time", 12);
	      DEFINE_STRING(BGl_string3562z00zz__datez00,
		BgL_bgl_string3562za700za7za7_3716za7, "Illegal month", 13);
	      DEFINE_STRING(BGl_string3564z00zz__datez00,
		BgL_bgl_string3564za700za7za7_3717za7, "Jan", 3);
	      DEFINE_STRING(BGl_string3566z00zz__datez00,
		BgL_bgl_string3566za700za7za7_3718za7, "Feb", 3);
	      DEFINE_STRING(BGl_string3568z00zz__datez00,
		BgL_bgl_string3568za700za7za7_3719za7, "Mar", 3);
	      DEFINE_STRING(BGl_string3570z00zz__datez00,
		BgL_bgl_string3570za700za7za7_3720za7, "Apr", 3);
	      DEFINE_STRING(BGl_string3572z00zz__datez00,
		BgL_bgl_string3572za700za7za7_3721za7, "May", 3);
	      DEFINE_STRING(BGl_string3574z00zz__datez00,
		BgL_bgl_string3574za700za7za7_3722za7, "Jun", 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_monthzd2namezd2envz00zz__datez00,
		BgL_bgl__monthza7d2nameza7d23723z00, BGl__monthzd2namezd2zz__datez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3576z00zz__datez00,
		BgL_bgl_string3576za700za7za7_3724za7, "Jul", 3);
	      DEFINE_STRING(BGl_string3578z00zz__datez00,
		BgL_bgl_string3578za700za7za7_3725za7, "Aug", 3);
	      DEFINE_STRING(BGl_string3580z00zz__datez00,
		BgL_bgl_string3580za700za7za7_3726za7, "Sep", 3);
	      DEFINE_STRING(BGl_string3582z00zz__datez00,
		BgL_bgl_string3582za700za7za7_3727za7, "Oct", 3);
	      DEFINE_STRING(BGl_string3584z00zz__datez00,
		BgL_bgl_string3584za700za7za7_3728za7, "Nov", 3);
	      DEFINE_STRING(BGl_string3586z00zz__datez00,
		BgL_bgl_string3586za700za7za7_3729za7, "Dec", 3);
	      DEFINE_STRING(BGl_string3587z00zz__datez00,
		BgL_bgl_string3587za700za7za7_3730za7, "Illegal integer", 15);
	      DEFINE_STRING(BGl_string3588z00zz__datez00,
		BgL_bgl_string3588za700za7za7_3731za7, "Illegal day of week", 19);
	      DEFINE_STRING(BGl_string3600z00zz__datez00,
		BgL_bgl_string3600za700za7za7_3732za7, "nsec", 4);
	      DEFINE_STRING(BGl_string3590z00zz__datez00,
		BgL_bgl_string3590za700za7za7_3733za7, "day", 3);
	      DEFINE_STRING(BGl_string3602z00zz__datez00,
		BgL_bgl_string3602za700za7za7_3734za7, "sec", 3);
	      DEFINE_STRING(BGl_string3592z00zz__datez00,
		BgL_bgl_string3592za700za7za7_3735za7, "dst", 3);
	      DEFINE_STRING(BGl_string3604z00zz__datez00,
		BgL_bgl_string3604za700za7za7_3736za7, "timezone", 8);
	      DEFINE_STRING(BGl_string3594z00zz__datez00,
		BgL_bgl_string3594za700za7za7_3737za7, "hour", 4);
	      DEFINE_STRING(BGl_string3606z00zz__datez00,
		BgL_bgl_string3606za700za7za7_3738za7, "year", 4);
	      DEFINE_STRING(BGl_string3596z00zz__datez00,
		BgL_bgl_string3596za700za7za7_3739za7, "min", 3);
	      DEFINE_STRING(BGl_string3607z00zz__datez00,
		BgL_bgl_string3607za700za7za7_3740za7, "/tmp/bigloo/runtime/Llib/date.scm",
		33);
	      DEFINE_STRING(BGl_string3608z00zz__datez00,
		BgL_bgl_string3608za700za7za7_3741za7, "_make-date", 10);
	      DEFINE_STRING(BGl_string3598z00zz__datez00,
		BgL_bgl_string3598za700za7za7_3742za7, "month", 5);
	      DEFINE_STRING(BGl_string3610z00zz__datez00,
		BgL_bgl_string3610za700za7za7_3743za7, "long", 4);
	      DEFINE_STRING(BGl_string3609z00zz__datez00,
		BgL_bgl_string3609za700za7za7_3744za7, "int", 3);
	      DEFINE_STRING(BGl_string3611z00zz__datez00,
		BgL_bgl_string3611za700za7za7_3745za7, "_date-copy", 10);
	      DEFINE_STRING(BGl_string3612z00zz__datez00,
		BgL_bgl_string3612za700za7za7_3746za7, "date", 4);
	      DEFINE_STRING(BGl_string3613z00zz__datez00,
		BgL_bgl_string3613za700za7za7_3747za7, "_integer->second", 16);
	      DEFINE_STRING(BGl_string3614z00zz__datez00,
		BgL_bgl_string3614za700za7za7_3748za7, "_date-nanosecond", 16);
	      DEFINE_STRING(BGl_string3615z00zz__datez00,
		BgL_bgl_string3615za700za7za7_3749za7, "_date-second", 12);
	      DEFINE_STRING(BGl_string3616z00zz__datez00,
		BgL_bgl_string3616za700za7za7_3750za7, "_date-minute", 12);
	      DEFINE_STRING(BGl_string3617z00zz__datez00,
		BgL_bgl_string3617za700za7za7_3751za7, "_date-hour", 10);
	      DEFINE_STRING(BGl_string3618z00zz__datez00,
		BgL_bgl_string3618za700za7za7_3752za7, "_date-day", 9);
	      DEFINE_STRING(BGl_string3620z00zz__datez00,
		BgL_bgl_string3620za700za7za7_3753za7, "_date-wday", 10);
	      DEFINE_STRING(BGl_string3619z00zz__datez00,
		BgL_bgl_string3619za700za7za7_3754za7, "_date-week-day", 14);
	      DEFINE_STRING(BGl_string3621z00zz__datez00,
		BgL_bgl_string3621za700za7za7_3755za7, "_date-year-day", 14);
	      DEFINE_STRING(BGl_string3622z00zz__datez00,
		BgL_bgl_string3622za700za7za7_3756za7, "_date-yday", 10);
	      DEFINE_STRING(BGl_string3623z00zz__datez00,
		BgL_bgl_string3623za700za7za7_3757za7, "_date-month", 11);
	      DEFINE_STRING(BGl_string3624z00zz__datez00,
		BgL_bgl_string3624za700za7za7_3758za7, "_date-year", 10);
	      DEFINE_STRING(BGl_string3625z00zz__datez00,
		BgL_bgl_string3625za700za7za7_3759za7, "_date-timezone", 14);
	      DEFINE_STRING(BGl_string3626z00zz__datez00,
		BgL_bgl_string3626za700za7za7_3760za7, "_date-zone-offset", 17);
	      DEFINE_STRING(BGl_string3627z00zz__datez00,
		BgL_bgl_string3627za700za7za7_3761za7, "_date-is-dst", 12);
	      DEFINE_STRING(BGl_string3628z00zz__datez00,
		BgL_bgl_string3628za700za7za7_3762za7, "_seconds->date", 14);
	      DEFINE_STRING(BGl_string3630z00zz__datez00,
		BgL_bgl_string3630za700za7za7_3763za7, "_date->seconds", 14);
	      DEFINE_STRING(BGl_string3629z00zz__datez00,
		BgL_bgl_string3629za700za7za7_3764za7, "elong", 5);
	      DEFINE_STRING(BGl_string3631z00zz__datez00,
		BgL_bgl_string3631za700za7za7_3765za7, "_date->string", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2datezd2envz00zz__datez00,
		BgL_bgl__currentza7d2dateza73766z00, BGl__currentzd2datezd2zz__datez00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3632z00zz__datez00,
		BgL_bgl_string3632za700za7za7_3767za7, "_date->utc-string", 17);
	      DEFINE_STRING(BGl_string3633z00zz__datez00,
		BgL_bgl_string3633za700za7za7_3768za7, "_seconds->string", 16);
	      DEFINE_STRING(BGl_string3634z00zz__datez00,
		BgL_bgl_string3634za700za7za7_3769za7, "_seconds->utc-string", 20);
	      DEFINE_STRING(BGl_string3636z00zz__datez00,
		BgL_bgl_string3636za700za7za7_3770za7, "day-name", 8);
	      DEFINE_STRING(BGl_string3637z00zz__datez00,
		BgL_bgl_string3637za700za7za7_3771za7, "Illegal day number", 18);
	      DEFINE_STRING(BGl_string3638z00zz__datez00,
		BgL_bgl_string3638za700za7za7_3772za7, "_day-name", 9);
	      DEFINE_STRING(BGl_string3640z00zz__datez00,
		BgL_bgl_string3640za700za7za7_3773za7, "day-aname", 9);
	      DEFINE_STRING(BGl_string3641z00zz__datez00,
		BgL_bgl_string3641za700za7za7_3774za7, "_day-aname", 10);
	      DEFINE_STRING(BGl_string3643z00zz__datez00,
		BgL_bgl_string3643za700za7za7_3775za7, "month-aname", 11);
	      DEFINE_STRING(BGl_string3644z00zz__datez00,
		BgL_bgl_string3644za700za7za7_3776za7, "Illegal month number", 20);
	      DEFINE_STRING(BGl_string3645z00zz__datez00,
		BgL_bgl_string3645za700za7za7_3777za7, "_month-name", 11);
	      DEFINE_STRING(BGl_string3646z00zz__datez00,
		BgL_bgl_string3646za700za7za7_3778za7, "_month-aname", 12);
	      DEFINE_STRING(BGl_string3647z00zz__datez00,
		BgL_bgl_string3647za700za7za7_3779za7, "_date-month-length", 18);
	      DEFINE_STRING(BGl_string3648z00zz__datez00,
		BgL_bgl_string3648za700za7za7_3780za7, "_leap-year?", 11);
	      DEFINE_STRING(BGl_string3650z00zz__datez00,
		BgL_bgl_string3650za700za7za7_3781za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3649z00zz__datez00,
		BgL_bgl_string3649za700za7za7_3782za7, "_rfc2822-date->date", 19);
	      DEFINE_STRING(BGl_string3651z00zz__datez00,
		BgL_bgl_string3651za700za7za7_3783za7, "_rfc2822-parse-date", 19);
	      DEFINE_STRING(BGl_string3652z00zz__datez00,
		BgL_bgl_string3652za700za7za7_3784za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3653z00zz__datez00,
		BgL_bgl_string3653za700za7za7_3785za7, "+", 1);
	      DEFINE_STRING(BGl_string3654z00zz__datez00,
		BgL_bgl_string3654za700za7za7_3786za7, "-", 1);
	      DEFINE_STRING(BGl_string3655z00zz__datez00,
		BgL_bgl_string3655za700za7za7_3787za7, "~a, ~a ~a ~a ~a:~a:~a ~a~a~a", 28);
	      DEFINE_STRING(BGl_string3656z00zz__datez00,
		BgL_bgl_string3656za700za7za7_3788za7, "_date->rfc2822-date", 19);
	      DEFINE_STRING(BGl_string3657z00zz__datez00,
		BgL_bgl_string3657za700za7za7_3789za7, "}", 1);
	      DEFINE_STRING(BGl_string3658z00zz__datez00,
		BgL_bgl_string3658za700za7za7_3790za7, "{", 1);
	      DEFINE_STRING(BGl_string3659z00zz__datez00,
		BgL_bgl_string3659za700za7za7_3791za7, "__date", 6);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__datez00(long
		BgL_checksumz00_5373, char *BgL_fromz00_5374)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__datez00))
				{
					BGl_requirezd2initializa7ationz75zz__datez00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__datez00();
					BGl_importedzd2moduleszd2initz00zz__datez00();
					BGl_toplevelzd2initzd2zz__datez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 19 */
			BGl_symbol3526z00zz__datez00 =
				bstring_to_symbol(BGl_string3527z00zz__datez00);
			BGl_list3525z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3526z00zz__datez00, BINT(((long) -4)));
			BGl_symbol3529z00zz__datez00 =
				bstring_to_symbol(BGl_string3530z00zz__datez00);
			BGl_list3528z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3529z00zz__datez00, BINT(((long) -5)));
			BGl_symbol3532z00zz__datez00 =
				bstring_to_symbol(BGl_string3533z00zz__datez00);
			BGl_list3531z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3532z00zz__datez00, BINT(((long) -5)));
			BGl_symbol3535z00zz__datez00 =
				bstring_to_symbol(BGl_string3536z00zz__datez00);
			BGl_list3534z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3535z00zz__datez00, BINT(((long) -6)));
			BGl_symbol3538z00zz__datez00 =
				bstring_to_symbol(BGl_string3539z00zz__datez00);
			BGl_list3537z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3538z00zz__datez00, BINT(((long) -6)));
			BGl_symbol3541z00zz__datez00 =
				bstring_to_symbol(BGl_string3542z00zz__datez00);
			BGl_list3540z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3541z00zz__datez00, BINT(((long) -7)));
			BGl_symbol3544z00zz__datez00 =
				bstring_to_symbol(BGl_string3545z00zz__datez00);
			BGl_list3543z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3544z00zz__datez00, BINT(((long) -7)));
			BGl_symbol3547z00zz__datez00 =
				bstring_to_symbol(BGl_string3548z00zz__datez00);
			BGl_list3546z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3547z00zz__datez00, BINT(((long) -8)));
			BGl_symbol3550z00zz__datez00 =
				bstring_to_symbol(BGl_string3551z00zz__datez00);
			BGl_list3549z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3550z00zz__datez00, BINT(((long) 1)));
			BGl_symbol3553z00zz__datez00 =
				bstring_to_symbol(BGl_string3554z00zz__datez00);
			BGl_list3552z00zz__datez00 =
				MAKE_PAIR(BGl_symbol3553z00zz__datez00, BINT(((long) 0)));
			BGl_list3524z00zz__datez00 =
				MAKE_PAIR(BGl_list3525z00zz__datez00,
				MAKE_PAIR(BGl_list3528z00zz__datez00,
					MAKE_PAIR(BGl_list3531z00zz__datez00,
						MAKE_PAIR(BGl_list3534z00zz__datez00,
							MAKE_PAIR(BGl_list3537z00zz__datez00,
								MAKE_PAIR(BGl_list3540z00zz__datez00,
									MAKE_PAIR(BGl_list3543z00zz__datez00,
										MAKE_PAIR(BGl_list3546z00zz__datez00,
											MAKE_PAIR(BGl_list3549z00zz__datez00,
												MAKE_PAIR(BGl_list3552z00zz__datez00, BNIL))))))))));
			BGl_symbol3556z00zz__datez00 =
				bstring_to_symbol(BGl_string3557z00zz__datez00);
			BGl_symbol3563z00zz__datez00 =
				bstring_to_symbol(BGl_string3564z00zz__datez00);
			BGl_symbol3565z00zz__datez00 =
				bstring_to_symbol(BGl_string3566z00zz__datez00);
			BGl_symbol3567z00zz__datez00 =
				bstring_to_symbol(BGl_string3568z00zz__datez00);
			BGl_symbol3569z00zz__datez00 =
				bstring_to_symbol(BGl_string3570z00zz__datez00);
			BGl_symbol3571z00zz__datez00 =
				bstring_to_symbol(BGl_string3572z00zz__datez00);
			BGl_symbol3573z00zz__datez00 =
				bstring_to_symbol(BGl_string3574z00zz__datez00);
			BGl_symbol3575z00zz__datez00 =
				bstring_to_symbol(BGl_string3576z00zz__datez00);
			BGl_symbol3577z00zz__datez00 =
				bstring_to_symbol(BGl_string3578z00zz__datez00);
			BGl_symbol3579z00zz__datez00 =
				bstring_to_symbol(BGl_string3580z00zz__datez00);
			BGl_symbol3581z00zz__datez00 =
				bstring_to_symbol(BGl_string3582z00zz__datez00);
			BGl_symbol3583z00zz__datez00 =
				bstring_to_symbol(BGl_string3584z00zz__datez00);
			BGl_symbol3585z00zz__datez00 =
				bstring_to_symbol(BGl_string3586z00zz__datez00);
			BGl_keyword3589z00zz__datez00 =
				bstring_to_keyword(BGl_string3590z00zz__datez00);
			BGl_keyword3591z00zz__datez00 =
				bstring_to_keyword(BGl_string3592z00zz__datez00);
			BGl_keyword3593z00zz__datez00 =
				bstring_to_keyword(BGl_string3594z00zz__datez00);
			BGl_keyword3595z00zz__datez00 =
				bstring_to_keyword(BGl_string3596z00zz__datez00);
			BGl_keyword3597z00zz__datez00 =
				bstring_to_keyword(BGl_string3598z00zz__datez00);
			BGl_keyword3599z00zz__datez00 =
				bstring_to_keyword(BGl_string3600z00zz__datez00);
			BGl_keyword3601z00zz__datez00 =
				bstring_to_keyword(BGl_string3602z00zz__datez00);
			BGl_keyword3603z00zz__datez00 =
				bstring_to_keyword(BGl_string3604z00zz__datez00);
			BGl_keyword3605z00zz__datez00 =
				bstring_to_keyword(BGl_string3606z00zz__datez00);
			BGl_symbol3635z00zz__datez00 =
				bstring_to_symbol(BGl_string3636z00zz__datez00);
			BGl_symbol3639z00zz__datez00 =
				bstring_to_symbol(BGl_string3640z00zz__datez00);
			return (BGl_symbol3642z00zz__datez00 =
				bstring_to_symbol(BGl_string3643z00zz__datez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 19 */
			{	/* Llib/date.scm 403 */
				obj_t BgL_arg2030z00_864;

				{	/* Llib/date.scm 403 */
					obj_t BgL_arg2033z00_866;

					{	/* Llib/date.scm 403 */
						obj_t BgL_list2034z00_867;

						{	/* Llib/date.scm 403 */
							obj_t BgL_arg2037z00_869;

							{	/* Llib/date.scm 403 */
								obj_t BgL_arg2039z00_871;

								{	/* Llib/date.scm 403 */
									obj_t BgL_arg2041z00_873;

									{	/* Llib/date.scm 403 */
										obj_t BgL_arg2043z00_875;

										{	/* Llib/date.scm 403 */
											obj_t BgL_arg2045z00_877;

											{	/* Llib/date.scm 403 */
												obj_t BgL_arg2047z00_879;

												{	/* Llib/date.scm 403 */
													obj_t BgL_arg2051z00_881;

													{	/* Llib/date.scm 403 */
														obj_t BgL_arg2053z00_883;

														{	/* Llib/date.scm 403 */
															obj_t BgL_arg2055z00_885;

															{	/* Llib/date.scm 403 */
																obj_t BgL_arg2057z00_887;

																BgL_arg2057z00_887 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2055z00_885 =
																	MAKE_PAIR(BINT(((long) 31)),
																	BgL_arg2057z00_887);
															}
															BgL_arg2053z00_883 =
																MAKE_PAIR(BINT(((long) 30)),
																BgL_arg2055z00_885);
														}
														BgL_arg2051z00_881 =
															MAKE_PAIR(BINT(((long) 31)), BgL_arg2053z00_883);
													}
													BgL_arg2047z00_879 =
														MAKE_PAIR(BINT(((long) 30)), BgL_arg2051z00_881);
												}
												BgL_arg2045z00_877 =
													MAKE_PAIR(BINT(((long) 31)), BgL_arg2047z00_879);
											}
											BgL_arg2043z00_875 =
												MAKE_PAIR(BINT(((long) 31)), BgL_arg2045z00_877);
										}
										BgL_arg2041z00_873 =
											MAKE_PAIR(BINT(((long) 30)), BgL_arg2043z00_875);
									}
									BgL_arg2039z00_871 =
										MAKE_PAIR(BINT(((long) 31)), BgL_arg2041z00_873);
								}
								BgL_arg2037z00_869 =
									MAKE_PAIR(BINT(((long) 30)), BgL_arg2039z00_871);
							}
							BgL_list2034z00_867 =
								MAKE_PAIR(BINT(((long) 31)), BgL_arg2037z00_869);
						}
						BgL_arg2033z00_866 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 28)),
							BgL_list2034z00_867);
					}
					BgL_arg2030z00_864 = MAKE_PAIR(BINT(((long) 31)), BgL_arg2033z00_866);
				}
				BGl_za2monthzd2lengthsza2zd2zz__datez00 =
					BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(BgL_arg2030z00_864);
			}
			BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00 = BGl_proc3520z00zz__datez00;
			BGl_fixnumzd2grammarzd2zz__datez00 = BGl_proc3521z00zz__datez00;
			BGl_monthzd2grammarzd2zz__datez00 = BGl_proc3522z00zz__datez00;
			BGl_timezd2grammarzd2zz__datez00 = BGl_proc3523z00zz__datez00;
			BGl_za2timezd2za7onesza2z75zz__datez00 = BGl_list3524z00zz__datez00;
			return (BGl_za7onezd2grammarz75zz__datez00 =
				BGl_proc3555z00zz__datez00, BUNSPEC);
		}
	}



/* <anonymous:2732> */
	obj_t BGl_zc3anonymousza32732ze3z83zz__datez00(obj_t BgL_envz00_5146,
		obj_t BgL_inputzd2portzd2_5147)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 651 */
			{
				obj_t BgL_inputzd2portzd2_2128;

				BgL_inputzd2portzd2_2128 = BgL_inputzd2portzd2_5147;
				{
					obj_t BgL_inputzd2portzd2_2171;

					long BgL_lastzd2matchzd2_2172;

					obj_t BgL_inputzd2portzd2_2188;

					long BgL_lastzd2matchzd2_2189;

					obj_t BgL_inputzd2portzd2_2196;

					long BgL_lastzd2matchzd2_2197;

					obj_t BgL_inputzd2portzd2_2204;

					long BgL_lastzd2matchzd2_2205;

					obj_t BgL_inputzd2portzd2_2213;

					long BgL_lastzd2matchzd2_2214;

					obj_t BgL_inputzd2portzd2_2222;

					long BgL_lastzd2matchzd2_2223;

					obj_t BgL_inputzd2portzd2_2233;

					long BgL_lastzd2matchzd2_2234;

					obj_t BgL_inputzd2portzd2_2248;

					long BgL_lastzd2matchzd2_2249;

					obj_t BgL_inputzd2portzd2_2259;

					long BgL_lastzd2matchzd2_2260;

					obj_t BgL_inputzd2portzd2_2269;

					long BgL_lastzd2matchzd2_2270;

					obj_t BgL_inputzd2portzd2_2277;

					long BgL_lastzd2matchzd2_2278;

					obj_t BgL_inputzd2portzd2_2285;

					long BgL_lastzd2matchzd2_2286;

					obj_t BgL_inputzd2portzd2_2301;

					long BgL_lastzd2matchzd2_2302;

				BgL_zc3anonymousza32884ze3z83_2393:
					RGC_START_MATCH(BgL_inputzd2portzd2_2128);
					{	/* Llib/date.scm 651 */
						long BgL_matchz00_2394;

						BgL_inputzd2portzd2_2171 = BgL_inputzd2portzd2_2128;
						BgL_lastzd2matchzd2_2172 = ((long) 5);
					BgL_zc3anonymousza32733ze3z83_2173:
						{	/* Llib/date.scm 651 */
							int BgL_currentzd2charzd2_2174;

							BgL_currentzd2charzd2_2174 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2171);
							if (((long) (BgL_currentzd2charzd2_2174) == ((long) 0)))
								{	/* Llib/date.scm 651 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_2171))
										{	/* Llib/date.scm 651 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_2171))
												{

													goto BgL_zc3anonymousza32733ze3z83_2173;
												}
											else
												{	/* Llib/date.scm 651 */
													BgL_matchz00_2394 = BgL_lastzd2matchzd2_2172;
												}
										}
									else
										{	/* Llib/date.scm 651 */
											long BgL_newzd2matchzd2_4150;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_2171);
											BgL_newzd2matchzd2_4150 = ((long) 5);
											BgL_matchz00_2394 = BgL_newzd2matchzd2_4150;
								}}
							else
								{	/* Llib/date.scm 651 */
									bool_t BgL_testz00_5482;

									{	/* Llib/date.scm 651 */
										bool_t BgL_testz00_5483;

										if (((long) (BgL_currentzd2charzd2_2174) >= ((long) 65)))
											{	/* Llib/date.scm 651 */
												BgL_testz00_5483 =
													((long) (BgL_currentzd2charzd2_2174) < ((long) 91));
											}
										else
											{	/* Llib/date.scm 651 */
												BgL_testz00_5483 = ((bool_t) 0);
											}
										if (BgL_testz00_5483)
											{	/* Llib/date.scm 651 */
												BgL_testz00_5482 = ((bool_t) 1);
											}
										else
											{	/* Llib/date.scm 651 */
												if (
													((long) (BgL_currentzd2charzd2_2174) >= ((long) 97)))
													{	/* Llib/date.scm 651 */
														BgL_testz00_5482 =
															(
															(long) (BgL_currentzd2charzd2_2174) <
															((long) 123));
													}
												else
													{	/* Llib/date.scm 651 */
														BgL_testz00_5482 = ((bool_t) 0);
													}
											}
									}
									if (BgL_testz00_5482)
										{	/* Llib/date.scm 651 */
											BgL_inputzd2portzd2_2222 = BgL_inputzd2portzd2_2171;
											BgL_lastzd2matchzd2_2223 = BgL_lastzd2matchzd2_2172;
										BgL_zc3anonymousza32766ze3z83_2224:
											{	/* Llib/date.scm 651 */
												long BgL_newzd2matchzd2_2225;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_2222);
												BgL_newzd2matchzd2_2225 = ((long) 5);
												{	/* Llib/date.scm 651 */
													int BgL_currentzd2charzd2_2226;

													BgL_currentzd2charzd2_2226 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2222);
													if (
														((long) (BgL_currentzd2charzd2_2226) == ((long) 0)))
														{	/* Llib/date.scm 651 */
															bool_t BgL_testz00_5499;

															{	/* Llib/date.scm 651 */
																bool_t BgL_res3381z00_4238;

																{	/* Llib/date.scm 651 */
																	obj_t BgL_inputzd2portzd2_4234;

																	BgL_inputzd2portzd2_4234 =
																		BgL_inputzd2portzd2_2222;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_4234))
																		{	/* Llib/date.scm 651 */
																			BgL_res3381z00_4238 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_4234);
																		}
																	else
																		{	/* Llib/date.scm 651 */
																			BgL_res3381z00_4238 = ((bool_t) 0);
																		}
																}
																BgL_testz00_5499 = BgL_res3381z00_4238;
															}
															if (BgL_testz00_5499)
																{

																	goto BgL_zc3anonymousza32766ze3z83_2224;
																}
															else
																{	/* Llib/date.scm 651 */
																	BgL_matchz00_2394 = BgL_newzd2matchzd2_2225;
																}
														}
													else
														{	/* Llib/date.scm 651 */
															bool_t BgL_testz00_5503;

															{	/* Llib/date.scm 651 */
																bool_t BgL_testz00_5504;

																if (
																	((long) (BgL_currentzd2charzd2_2226) >=
																		((long) 65)))
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5504 =
																			(
																			(long) (BgL_currentzd2charzd2_2226) <
																			((long) 91));
																	}
																else
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5504 = ((bool_t) 0);
																	}
																if (BgL_testz00_5504)
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5503 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 651 */
																		if (
																			((long) (BgL_currentzd2charzd2_2226) >=
																				((long) 97)))
																			{	/* Llib/date.scm 651 */
																				BgL_testz00_5503 =
																					(
																					(long) (BgL_currentzd2charzd2_2226) <
																					((long) 123));
																			}
																		else
																			{	/* Llib/date.scm 651 */
																				BgL_testz00_5503 = ((bool_t) 0);
																			}
																	}
															}
															if (BgL_testz00_5503)
																{	/* Llib/date.scm 651 */
																	BgL_inputzd2portzd2_2248 =
																		BgL_inputzd2portzd2_2222;
																	BgL_lastzd2matchzd2_2249 =
																		BgL_newzd2matchzd2_2225;
																BgL_zc3anonymousza32780ze3z83_2250:
																	{	/* Llib/date.scm 651 */
																		long BgL_newzd2matchzd2_2251;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2248);
																		BgL_newzd2matchzd2_2251 = ((long) 4);
																		{	/* Llib/date.scm 651 */
																			int BgL_currentzd2charzd2_2252;

																			BgL_currentzd2charzd2_2252 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2248);
																			if (((long) (BgL_currentzd2charzd2_2252)
																					== ((long) 0)))
																				{	/* Llib/date.scm 651 */
																					bool_t BgL_testz00_5520;

																					{	/* Llib/date.scm 651 */
																						bool_t BgL_res3383z00_4274;

																						{	/* Llib/date.scm 651 */
																							obj_t BgL_inputzd2portzd2_4270;

																							BgL_inputzd2portzd2_4270 =
																								BgL_inputzd2portzd2_2248;
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_4270))
																								{	/* Llib/date.scm 651 */
																									BgL_res3383z00_4274 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_4270);
																								}
																							else
																								{	/* Llib/date.scm 651 */
																									BgL_res3383z00_4274 =
																										((bool_t) 0);
																								}
																						}
																						BgL_testz00_5520 =
																							BgL_res3383z00_4274;
																					}
																					if (BgL_testz00_5520)
																						{

																							goto
																								BgL_zc3anonymousza32780ze3z83_2250;
																						}
																					else
																						{	/* Llib/date.scm 651 */
																							BgL_matchz00_2394 =
																								BgL_newzd2matchzd2_2251;
																						}
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					bool_t BgL_testz00_5524;

																					{	/* Llib/date.scm 651 */
																						bool_t BgL_testz00_5525;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_2252) >=
																								((long) 65)))
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5525 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_2252) <
																									((long) 91));
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5525 = ((bool_t) 0);
																							}
																						if (BgL_testz00_5525)
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5524 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_2252)
																										>= ((long) 97)))
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5524 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_2252)
																											< ((long) 123));
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5524 =
																											((bool_t) 0);
																									}
																							}
																					}
																					if (BgL_testz00_5524)
																						{
																							long BgL_lastzd2matchzd2_5536;

																							BgL_lastzd2matchzd2_5536 =
																								BgL_newzd2matchzd2_2251;
																							BgL_lastzd2matchzd2_2249 =
																								BgL_lastzd2matchzd2_5536;
																							goto
																								BgL_zc3anonymousza32780ze3z83_2250;
																						}
																					else
																						{	/* Llib/date.scm 651 */
																							BgL_matchz00_2394 =
																								BgL_newzd2matchzd2_2251;
																						}
																				}
																		}
																	}
																}
															else
																{	/* Llib/date.scm 651 */
																	BgL_matchz00_2394 = BgL_newzd2matchzd2_2225;
																}
														}
												}
											}
										}
									else
										{	/* Llib/date.scm 651 */
											if (((long) (BgL_currentzd2charzd2_2174) == ((long) 45)))
												{	/* Llib/date.scm 651 */
													BgL_inputzd2portzd2_2259 = BgL_inputzd2portzd2_2171;
													BgL_lastzd2matchzd2_2260 = BgL_lastzd2matchzd2_2172;
												BgL_zc3anonymousza32786ze3z83_2261:
													{	/* Llib/date.scm 651 */
														long BgL_newzd2matchzd2_2262;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_2259);
														BgL_newzd2matchzd2_2262 = ((long) 5);
														{	/* Llib/date.scm 651 */
															int BgL_currentzd2charzd2_2263;

															BgL_currentzd2charzd2_2263 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_2259);
															if (
																((long) (BgL_currentzd2charzd2_2263) ==
																	((long) 0)))
																{	/* Llib/date.scm 651 */
																	bool_t BgL_testz00_5545;

																	{	/* Llib/date.scm 651 */
																		bool_t BgL_res3384z00_4291;

																		{	/* Llib/date.scm 651 */
																			obj_t BgL_inputzd2portzd2_4287;

																			BgL_inputzd2portzd2_4287 =
																				BgL_inputzd2portzd2_2259;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_4287))
																				{	/* Llib/date.scm 651 */
																					BgL_res3384z00_4291 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_4287);
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					BgL_res3384z00_4291 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_5545 = BgL_res3384z00_4291;
																	}
																	if (BgL_testz00_5545)
																		{

																			goto BgL_zc3anonymousza32786ze3z83_2261;
																		}
																	else
																		{	/* Llib/date.scm 651 */
																			BgL_matchz00_2394 =
																				BgL_newzd2matchzd2_2262;
																		}
																}
															else
																{	/* Llib/date.scm 651 */
																	bool_t BgL_testz00_5549;

																	if (
																		((long) (BgL_currentzd2charzd2_2263) >=
																			((long) 48)))
																		{	/* Llib/date.scm 651 */
																			BgL_testz00_5549 =
																				(
																				(long) (BgL_currentzd2charzd2_2263) <
																				((long) 58));
																		}
																	else
																		{	/* Llib/date.scm 651 */
																			BgL_testz00_5549 = ((bool_t) 0);
																		}
																	if (BgL_testz00_5549)
																		{	/* Llib/date.scm 651 */
																			BgL_inputzd2portzd2_2196 =
																				BgL_inputzd2portzd2_2259;
																			BgL_lastzd2matchzd2_2197 =
																				BgL_newzd2matchzd2_2262;
																		BgL_zc3anonymousza32751ze3z83_2198:
																			{	/* Llib/date.scm 651 */
																				int BgL_currentzd2charzd2_2199;

																				BgL_currentzd2charzd2_2199 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_2196);
																				if (((long) (BgL_currentzd2charzd2_2199)
																						== ((long) 0)))
																					{	/* Llib/date.scm 651 */
																						bool_t BgL_testz00_5559;

																						{	/* Llib/date.scm 651 */
																							bool_t BgL_res3378z00_4195;

																							{	/* Llib/date.scm 651 */
																								obj_t BgL_inputzd2portzd2_4191;

																								BgL_inputzd2portzd2_4191 =
																									BgL_inputzd2portzd2_2196;
																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_4191))
																									{	/* Llib/date.scm 651 */
																										BgL_res3378z00_4195 =
																											rgc_fill_buffer
																											(BgL_inputzd2portzd2_4191);
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_res3378z00_4195 =
																											((bool_t) 0);
																									}
																							}
																							BgL_testz00_5559 =
																								BgL_res3378z00_4195;
																						}
																						if (BgL_testz00_5559)
																							{

																								goto
																									BgL_zc3anonymousza32751ze3z83_2198;
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								BgL_matchz00_2394 =
																									BgL_lastzd2matchzd2_2197;
																							}
																					}
																				else
																					{	/* Llib/date.scm 651 */
																						bool_t BgL_testz00_5563;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_2199) >=
																								((long) 48)))
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5563 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_2199) <
																									((long) 58));
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5563 = ((bool_t) 0);
																							}
																						if (BgL_testz00_5563)
																							{	/* Llib/date.scm 651 */
																								BgL_inputzd2portzd2_2277 =
																									BgL_inputzd2portzd2_2196;
																								BgL_lastzd2matchzd2_2278 =
																									BgL_lastzd2matchzd2_2197;
																							BgL_zc3anonymousza32797ze3z83_2279:
																								{	/* Llib/date.scm 651 */
																									int
																										BgL_currentzd2charzd2_2280;
																									BgL_currentzd2charzd2_2280 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_2277);
																									if (((long)
																											(BgL_currentzd2charzd2_2280)
																											== ((long) 0)))
																										{	/* Llib/date.scm 651 */
																											bool_t BgL_testz00_5573;

																											{	/* Llib/date.scm 651 */
																												bool_t
																													BgL_res3386z00_4317;
																												{	/* Llib/date.scm 651 */
																													obj_t
																														BgL_inputzd2portzd2_4313;
																													BgL_inputzd2portzd2_4313
																														=
																														BgL_inputzd2portzd2_2277;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_4313))
																														{	/* Llib/date.scm 651 */
																															BgL_res3386z00_4317
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_4313);
																														}
																													else
																														{	/* Llib/date.scm 651 */
																															BgL_res3386z00_4317
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_5573 =
																													BgL_res3386z00_4317;
																											}
																											if (BgL_testz00_5573)
																												{

																													goto
																														BgL_zc3anonymousza32797ze3z83_2279;
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													BgL_matchz00_2394 =
																														BgL_lastzd2matchzd2_2278;
																												}
																										}
																									else
																										{	/* Llib/date.scm 651 */
																											bool_t BgL_testz00_5577;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_2280)
																													>= ((long) 48)))
																												{	/* Llib/date.scm 651 */
																													BgL_testz00_5577 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_2280)
																														< ((long) 58));
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													BgL_testz00_5577 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_5577)
																												{	/* Llib/date.scm 651 */
																													BgL_inputzd2portzd2_2204
																														=
																														BgL_inputzd2portzd2_2277;
																													BgL_lastzd2matchzd2_2205
																														=
																														BgL_lastzd2matchzd2_2278;
																												BgL_zc3anonymousza32756ze3z83_2206:
																													{	/* Llib/date.scm 651 */
																														long
																															BgL_newzd2matchzd2_2207;
																														RGC_STOP_MATCH
																															(BgL_inputzd2portzd2_2204);
																														BgL_newzd2matchzd2_2207
																															= ((long) 2);
																														{	/* Llib/date.scm 651 */
																															int
																																BgL_currentzd2charzd2_2208;
																															BgL_currentzd2charzd2_2208
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_2204);
																															if (((long)
																																	(BgL_currentzd2charzd2_2208)
																																	==
																																	((long) 0)))
																																{	/* Llib/date.scm 651 */
																																	bool_t
																																		BgL_testz00_5588;
																																	{	/* Llib/date.scm 651 */
																																		bool_t
																																			BgL_res3379z00_4208;
																																		{	/* Llib/date.scm 651 */
																																			obj_t
																																				BgL_inputzd2portzd2_4204;
																																			BgL_inputzd2portzd2_4204
																																				=
																																				BgL_inputzd2portzd2_2204;
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4204))
																																				{	/* Llib/date.scm 651 */
																																					BgL_res3379z00_4208
																																						=
																																						rgc_fill_buffer
																																						(BgL_inputzd2portzd2_4204);
																																				}
																																			else
																																				{	/* Llib/date.scm 651 */
																																					BgL_res3379z00_4208
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		BgL_testz00_5588
																																			=
																																			BgL_res3379z00_4208;
																																	}
																																	if (BgL_testz00_5588)
																																		{

																																			goto
																																				BgL_zc3anonymousza32756ze3z83_2206;
																																		}
																																	else
																																		{	/* Llib/date.scm 651 */
																																			BgL_matchz00_2394
																																				=
																																				BgL_newzd2matchzd2_2207;
																																		}
																																}
																															else
																																{	/* Llib/date.scm 651 */
																																	bool_t
																																		BgL_testz00_5592;
																																	if (((long)
																																			(BgL_currentzd2charzd2_2208)
																																			>=
																																			((long)
																																				48)))
																																		{	/* Llib/date.scm 651 */
																																			BgL_testz00_5592
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_2208)
																																				<
																																				((long)
																																					58));
																																		}
																																	else
																																		{	/* Llib/date.scm 651 */
																																			BgL_testz00_5592
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_testz00_5592)
																																		{	/* Llib/date.scm 651 */
																																			long
																																				BgL_newzd2matchzd2_4215;
																																			RGC_STOP_MATCH
																																				(BgL_inputzd2portzd2_2204);
																																			BgL_newzd2matchzd2_4215
																																				=
																																				((long)
																																				1);
																																			BgL_matchz00_2394
																																				=
																																				BgL_newzd2matchzd2_4215;
																																		}
																																	else
																																		{	/* Llib/date.scm 651 */
																																			BgL_matchz00_2394
																																				=
																																				BgL_newzd2matchzd2_2207;
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													BgL_matchz00_2394 =
																														BgL_lastzd2matchzd2_2278;
																												}
																										}
																								}
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								BgL_matchz00_2394 =
																									BgL_lastzd2matchzd2_2197;
																							}
																					}
																			}
																		}
																	else
																		{	/* Llib/date.scm 651 */
																			if (
																				((long) (BgL_currentzd2charzd2_2263) ==
																					((long) 45)))
																				{	/* Llib/date.scm 651 */
																					BgL_inputzd2portzd2_2188 =
																						BgL_inputzd2portzd2_2259;
																					BgL_lastzd2matchzd2_2189 =
																						BgL_newzd2matchzd2_2262;
																				BgL_zc3anonymousza32746ze3z83_2190:
																					{	/* Llib/date.scm 651 */
																						int BgL_currentzd2charzd2_2191;

																						BgL_currentzd2charzd2_2191 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_2188);
																						if (((long)
																								(BgL_currentzd2charzd2_2191) ==
																								((long) 0)))
																							{	/* Llib/date.scm 651 */
																								bool_t BgL_testz00_5606;

																								{	/* Llib/date.scm 651 */
																									bool_t BgL_res3377z00_4183;

																									{	/* Llib/date.scm 651 */
																										obj_t
																											BgL_inputzd2portzd2_4179;
																										BgL_inputzd2portzd2_4179 =
																											BgL_inputzd2portzd2_2188;
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_4179))
																											{	/* Llib/date.scm 651 */
																												BgL_res3377z00_4183 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_4179);
																											}
																										else
																											{	/* Llib/date.scm 651 */
																												BgL_res3377z00_4183 =
																													((bool_t) 0);
																											}
																									}
																									BgL_testz00_5606 =
																										BgL_res3377z00_4183;
																								}
																								if (BgL_testz00_5606)
																									{

																										goto
																											BgL_zc3anonymousza32746ze3z83_2190;
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_matchz00_2394 =
																											BgL_lastzd2matchzd2_2189;
																									}
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								bool_t BgL_testz00_5610;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_2191)
																										>= ((long) 48)))
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5610 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_2191)
																											< ((long) 58));
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5610 =
																											((bool_t) 0);
																									}
																								if (BgL_testz00_5610)
																									{	/* Llib/date.scm 651 */
																										BgL_inputzd2portzd2_2269 =
																											BgL_inputzd2portzd2_2188;
																										BgL_lastzd2matchzd2_2270 =
																											BgL_lastzd2matchzd2_2189;
																									BgL_zc3anonymousza32792ze3z83_2271:
																										{	/* Llib/date.scm 651 */
																											int
																												BgL_currentzd2charzd2_2272;
																											BgL_currentzd2charzd2_2272
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_2269);
																											if (((long)
																													(BgL_currentzd2charzd2_2272)
																													== ((long) 0)))
																												{	/* Llib/date.scm 651 */
																													bool_t
																														BgL_testz00_5620;
																													{	/* Llib/date.scm 651 */
																														bool_t
																															BgL_res3385z00_4305;
																														{	/* Llib/date.scm 651 */
																															obj_t
																																BgL_inputzd2portzd2_4301;
																															BgL_inputzd2portzd2_4301
																																=
																																BgL_inputzd2portzd2_2269;
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4301))
																																{	/* Llib/date.scm 651 */
																																	BgL_res3385z00_4305
																																		=
																																		rgc_fill_buffer
																																		(BgL_inputzd2portzd2_4301);
																																}
																															else
																																{	/* Llib/date.scm 651 */
																																	BgL_res3385z00_4305
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																														BgL_testz00_5620 =
																															BgL_res3385z00_4305;
																													}
																													if (BgL_testz00_5620)
																														{

																															goto
																																BgL_zc3anonymousza32792ze3z83_2271;
																														}
																													else
																														{	/* Llib/date.scm 651 */
																															BgL_matchz00_2394
																																=
																																BgL_lastzd2matchzd2_2270;
																														}
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													bool_t
																														BgL_testz00_5624;
																													if (((long)
																															(BgL_currentzd2charzd2_2272)
																															>= ((long) 48)))
																														{	/* Llib/date.scm 651 */
																															BgL_testz00_5624 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_2272)
																																< ((long) 58));
																														}
																													else
																														{	/* Llib/date.scm 651 */
																															BgL_testz00_5624 =
																																((bool_t) 0);
																														}
																													if (BgL_testz00_5624)
																														{	/* Llib/date.scm 651 */
																															BgL_inputzd2portzd2_2285
																																=
																																BgL_inputzd2portzd2_2269;
																															BgL_lastzd2matchzd2_2286
																																=
																																BgL_lastzd2matchzd2_2270;
																														BgL_zc3anonymousza32802ze3z83_2287:
																															{	/* Llib/date.scm 651 */
																																int
																																	BgL_currentzd2charzd2_2288;
																																BgL_currentzd2charzd2_2288
																																	=
																																	RGC_BUFFER_GET_CHAR
																																	(BgL_inputzd2portzd2_2285);
																																if (((long)
																																		(BgL_currentzd2charzd2_2288)
																																		==
																																		((long) 0)))
																																	{	/* Llib/date.scm 651 */
																																		bool_t
																																			BgL_testz00_5634;
																																		{	/* Llib/date.scm 651 */
																																			bool_t
																																				BgL_res3387z00_4329;
																																			{	/* Llib/date.scm 651 */
																																				obj_t
																																					BgL_inputzd2portzd2_4325;
																																				BgL_inputzd2portzd2_4325
																																					=
																																					BgL_inputzd2portzd2_2285;
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_4325))
																																					{	/* Llib/date.scm 651 */
																																						BgL_res3387z00_4329
																																							=
																																							rgc_fill_buffer
																																							(BgL_inputzd2portzd2_4325);
																																					}
																																				else
																																					{	/* Llib/date.scm 651 */
																																						BgL_res3387z00_4329
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			BgL_testz00_5634
																																				=
																																				BgL_res3387z00_4329;
																																		}
																																		if (BgL_testz00_5634)
																																			{

																																				goto
																																					BgL_zc3anonymousza32802ze3z83_2287;
																																			}
																																		else
																																			{	/* Llib/date.scm 651 */
																																				BgL_matchz00_2394
																																					=
																																					BgL_lastzd2matchzd2_2286;
																																			}
																																	}
																																else
																																	{	/* Llib/date.scm 651 */
																																		bool_t
																																			BgL_testz00_5638;
																																		if (((long)
																																				(BgL_currentzd2charzd2_2288)
																																				>=
																																				((long)
																																					48)))
																																			{	/* Llib/date.scm 651 */
																																				BgL_testz00_5638
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_2288)
																																					<
																																					((long) 58));
																																			}
																																		else
																																			{	/* Llib/date.scm 651 */
																																				BgL_testz00_5638
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_5638)
																																			{	/* Llib/date.scm 651 */
																																				long
																																					BgL_newzd2matchzd2_4336;
																																				RGC_STOP_MATCH
																																					(BgL_inputzd2portzd2_2285);
																																				BgL_newzd2matchzd2_4336
																																					=
																																					(
																																					(long)
																																					3);
																																				BgL_matchz00_2394
																																					=
																																					BgL_newzd2matchzd2_4336;
																																			}
																																		else
																																			{	/* Llib/date.scm 651 */
																																				BgL_matchz00_2394
																																					=
																																					BgL_lastzd2matchzd2_2286;
																																			}
																																	}
																															}
																														}
																													else
																														{	/* Llib/date.scm 651 */
																															BgL_matchz00_2394
																																=
																																BgL_lastzd2matchzd2_2270;
																														}
																												}
																										}
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_matchz00_2394 =
																											BgL_lastzd2matchzd2_2189;
																									}
																							}
																					}
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					BgL_matchz00_2394 =
																						BgL_newzd2matchzd2_2262;
																				}
																		}
																}
														}
													}
												}
											else
												{	/* Llib/date.scm 651 */
													if (
														((long) (BgL_currentzd2charzd2_2174) ==
															((long) 43)))
														{	/* Llib/date.scm 651 */
															BgL_inputzd2portzd2_2213 =
																BgL_inputzd2portzd2_2171;
															BgL_lastzd2matchzd2_2214 =
																BgL_lastzd2matchzd2_2172;
														BgL_zc3anonymousza32761ze3z83_2215:
															{	/* Llib/date.scm 651 */
																long BgL_newzd2matchzd2_2216;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_2213);
																BgL_newzd2matchzd2_2216 = ((long) 5);
																{	/* Llib/date.scm 651 */
																	int BgL_currentzd2charzd2_2217;

																	BgL_currentzd2charzd2_2217 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_2213);
																	if (((long) (BgL_currentzd2charzd2_2217) ==
																			((long) 0)))
																		{	/* Llib/date.scm 651 */
																			bool_t BgL_testz00_5653;

																			{	/* Llib/date.scm 651 */
																				bool_t BgL_res3380z00_4225;

																				{	/* Llib/date.scm 651 */
																					obj_t BgL_inputzd2portzd2_4221;

																					BgL_inputzd2portzd2_4221 =
																						BgL_inputzd2portzd2_2213;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_4221))
																						{	/* Llib/date.scm 651 */
																							BgL_res3380z00_4225 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_4221);
																						}
																					else
																						{	/* Llib/date.scm 651 */
																							BgL_res3380z00_4225 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_5653 = BgL_res3380z00_4225;
																			}
																			if (BgL_testz00_5653)
																				{

																					goto
																						BgL_zc3anonymousza32761ze3z83_2215;
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					BgL_matchz00_2394 =
																						BgL_newzd2matchzd2_2216;
																				}
																		}
																	else
																		{	/* Llib/date.scm 651 */
																			bool_t BgL_testz00_5657;

																			if (
																				((long) (BgL_currentzd2charzd2_2217) >=
																					((long) 48)))
																				{	/* Llib/date.scm 651 */
																					BgL_testz00_5657 =
																						(
																						(long) (BgL_currentzd2charzd2_2217)
																						< ((long) 58));
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					BgL_testz00_5657 = ((bool_t) 0);
																				}
																			if (BgL_testz00_5657)
																				{
																					long BgL_lastzd2matchzd2_5664;

																					obj_t BgL_inputzd2portzd2_5663;

																					BgL_inputzd2portzd2_5663 =
																						BgL_inputzd2portzd2_2213;
																					BgL_lastzd2matchzd2_5664 =
																						BgL_newzd2matchzd2_2216;
																					BgL_lastzd2matchzd2_2197 =
																						BgL_lastzd2matchzd2_5664;
																					BgL_inputzd2portzd2_2196 =
																						BgL_inputzd2portzd2_5663;
																					goto
																						BgL_zc3anonymousza32751ze3z83_2198;
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					BgL_matchz00_2394 =
																						BgL_newzd2matchzd2_2216;
																				}
																		}
																}
															}
														}
													else
														{	/* Llib/date.scm 651 */
															bool_t BgL_testz00_5665;

															{	/* Llib/date.scm 651 */
																bool_t BgL_testz00_5666;

																if (
																	((long) (BgL_currentzd2charzd2_2174) ==
																		((long) 10)))
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5666 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5666 =
																			(
																			(long) (BgL_currentzd2charzd2_2174) ==
																			((long) 9));
																	}
																if (BgL_testz00_5666)
																	{	/* Llib/date.scm 651 */
																		BgL_testz00_5665 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 651 */
																		if (
																			((long) (BgL_currentzd2charzd2_2174) ==
																				((long) 13)))
																			{	/* Llib/date.scm 651 */
																				BgL_testz00_5665 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 651 */
																				BgL_testz00_5665 =
																					(
																					(long) (BgL_currentzd2charzd2_2174) ==
																					((long) 32));
															}}}
															if (BgL_testz00_5665)
																{	/* Llib/date.scm 651 */
																	BgL_inputzd2portzd2_2233 =
																		BgL_inputzd2portzd2_2171;
																	BgL_lastzd2matchzd2_2234 =
																		BgL_lastzd2matchzd2_2172;
																BgL_zc3anonymousza32772ze3z83_2235:
																	{	/* Llib/date.scm 651 */
																		long BgL_newzd2matchzd2_2236;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_2233);
																		BgL_newzd2matchzd2_2236 = ((long) 0);
																		{	/* Llib/date.scm 651 */
																			int BgL_currentzd2charzd2_2237;

																			BgL_currentzd2charzd2_2237 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_2233);
																			if (((long) (BgL_currentzd2charzd2_2237)
																					== ((long) 0)))
																				{	/* Llib/date.scm 651 */
																					bool_t BgL_testz00_5682;

																					{	/* Llib/date.scm 651 */
																						bool_t BgL_res3382z00_4255;

																						{	/* Llib/date.scm 651 */
																							obj_t BgL_inputzd2portzd2_4251;

																							BgL_inputzd2portzd2_4251 =
																								BgL_inputzd2portzd2_2233;
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_4251))
																								{	/* Llib/date.scm 651 */
																									BgL_res3382z00_4255 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_4251);
																								}
																							else
																								{	/* Llib/date.scm 651 */
																									BgL_res3382z00_4255 =
																										((bool_t) 0);
																								}
																						}
																						BgL_testz00_5682 =
																							BgL_res3382z00_4255;
																					}
																					if (BgL_testz00_5682)
																						{

																							goto
																								BgL_zc3anonymousza32772ze3z83_2235;
																						}
																					else
																						{	/* Llib/date.scm 651 */
																							BgL_matchz00_2394 =
																								BgL_newzd2matchzd2_2236;
																						}
																				}
																			else
																				{	/* Llib/date.scm 651 */
																					bool_t BgL_testz00_5686;

																					{	/* Llib/date.scm 651 */
																						bool_t BgL_testz00_5687;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_2237) ==
																								((long) 10)))
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5687 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5687 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_2237)
																									== ((long) 9));
																							}
																						if (BgL_testz00_5687)
																							{	/* Llib/date.scm 651 */
																								BgL_testz00_5686 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 651 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_2237)
																										== ((long) 13)))
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5686 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 651 */
																										BgL_testz00_5686 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_2237)
																											== ((long) 32));
																					}}}
																					if (BgL_testz00_5686)
																						{	/* Llib/date.scm 651 */
																							BgL_inputzd2portzd2_2301 =
																								BgL_inputzd2portzd2_2233;
																							BgL_lastzd2matchzd2_2302 =
																								BgL_newzd2matchzd2_2236;
																						BgL_zc3anonymousza32809ze3z83_2303:
																							{	/* Llib/date.scm 651 */
																								long BgL_newzd2matchzd2_2304;

																								RGC_STOP_MATCH
																									(BgL_inputzd2portzd2_2301);
																								BgL_newzd2matchzd2_2304 =
																									((long) 0);
																								{	/* Llib/date.scm 651 */
																									int
																										BgL_currentzd2charzd2_2305;
																									BgL_currentzd2charzd2_2305 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_2301);
																									if (((long)
																											(BgL_currentzd2charzd2_2305)
																											== ((long) 0)))
																										{	/* Llib/date.scm 651 */
																											bool_t BgL_testz00_5703;

																											{	/* Llib/date.scm 651 */
																												bool_t
																													BgL_res3388z00_4350;
																												{	/* Llib/date.scm 651 */
																													obj_t
																														BgL_inputzd2portzd2_4346;
																													BgL_inputzd2portzd2_4346
																														=
																														BgL_inputzd2portzd2_2301;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_4346))
																														{	/* Llib/date.scm 651 */
																															BgL_res3388z00_4350
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_4346);
																														}
																													else
																														{	/* Llib/date.scm 651 */
																															BgL_res3388z00_4350
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_5703 =
																													BgL_res3388z00_4350;
																											}
																											if (BgL_testz00_5703)
																												{

																													goto
																														BgL_zc3anonymousza32809ze3z83_2303;
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													BgL_matchz00_2394 =
																														BgL_newzd2matchzd2_2304;
																												}
																										}
																									else
																										{	/* Llib/date.scm 651 */
																											bool_t BgL_testz00_5707;

																											{	/* Llib/date.scm 651 */
																												bool_t BgL_testz00_5708;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_2305)
																														== ((long) 10)))
																													{	/* Llib/date.scm 651 */
																														BgL_testz00_5708 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 651 */
																														BgL_testz00_5708 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_2305)
																															== ((long) 9));
																													}
																												if (BgL_testz00_5708)
																													{	/* Llib/date.scm 651 */
																														BgL_testz00_5707 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 651 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_2305)
																																== ((long) 13)))
																															{	/* Llib/date.scm 651 */
																																BgL_testz00_5707
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Llib/date.scm 651 */
																																BgL_testz00_5707
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_2305)
																																	==
																																	((long) 32));
																											}}}
																											if (BgL_testz00_5707)
																												{
																													long
																														BgL_lastzd2matchzd2_5719;
																													BgL_lastzd2matchzd2_5719
																														=
																														BgL_newzd2matchzd2_2304;
																													BgL_lastzd2matchzd2_2302
																														=
																														BgL_lastzd2matchzd2_5719;
																													goto
																														BgL_zc3anonymousza32809ze3z83_2303;
																												}
																											else
																												{	/* Llib/date.scm 651 */
																													BgL_matchz00_2394 =
																														BgL_newzd2matchzd2_2304;
																												}
																										}
																								}
																							}
																						}
																					else
																						{	/* Llib/date.scm 651 */
																							BgL_matchz00_2394 =
																								BgL_newzd2matchzd2_2236;
																						}
																				}
																		}
																	}
																}
															else
																{	/* Llib/date.scm 651 */
																	long BgL_newzd2matchzd2_4174;

																	RGC_STOP_MATCH(BgL_inputzd2portzd2_2171);
																	BgL_newzd2matchzd2_4174 = ((long) 5);
																	BgL_matchz00_2394 = BgL_newzd2matchzd2_4174;
						}}}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_2128);
						switch (BgL_matchz00_2394)
							{
							case ((long) 5):

								{	/* Llib/date.scm 678 */
									obj_t BgL_auxz00_5722;

									{	/* Llib/date.scm 651 */
										bool_t BgL_testz00_5723;

										{	/* Llib/date.scm 651 */
											long BgL_arg2877z00_2383;

											BgL_arg2877z00_2383 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_2128);
											BgL_testz00_5723 = (BgL_arg2877z00_2383 == ((long) 0));
										}
										if (BgL_testz00_5723)
											{	/* Llib/date.scm 651 */
												BgL_auxz00_5722 = BCNST(256);
											}
										else
											{	/* Llib/date.scm 651 */
												obj_t BgL_inputzd2portzd2_4365;

												BgL_inputzd2portzd2_4365 = BgL_inputzd2portzd2_2128;
												BgL_auxz00_5722 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_4365));
											}
									}
									return
										BGl_parsezd2errorzd2zz__datez00
										(BGl_symbol3556z00zz__datez00, BGl_string3558z00zz__datez00,
										BgL_auxz00_5722, BgL_inputzd2portzd2_2128);
								}
								break;
							case ((long) 4):

								{	/* Llib/date.scm 673 */
									obj_t BgL_cz00_2402;

									{	/* Llib/date.scm 673 */
										obj_t BgL_arg2894z00_2406;

										BgL_arg2894z00_2406 =
											rgc_buffer_symbol(BgL_inputzd2portzd2_2128);
										BgL_cz00_2402 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2894z00_2406,
											BGl_za2timezd2za7onesza2z75zz__datez00);
									}
									if (PAIRP(BgL_cz00_2402))
										{	/* Llib/date.scm 674 */
											return
												BINT((((long) 3600) * (long) CINT(CDR(BgL_cz00_2402))));
										}
									else
										{	/* Llib/date.scm 674 */
											return BINT(((long) 0));
								}} break;
							case ((long) 3):

								{	/* Llib/date.scm 668 */
									long BgL_hz00_2407;

									long BgL_mz00_2408;

									{	/* Llib/date.scm 668 */
										int BgL_arg2899z00_2412;

										{	/* Llib/date.scm 668 */
											int BgL_auxz00_5738;

											BgL_auxz00_5738 = (int) (((long) 2));
											BgL_arg2899z00_2412 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
												BgL_auxz00_5738);
										}
										BgL_hz00_2407 =
											((long) (BgL_arg2899z00_2412) - ((long) 48));
									}
									{	/* Llib/date.scm 669 */
										long BgL_arg2901z00_2414;

										long BgL_arg2902z00_2415;

										{	/* Llib/date.scm 669 */
											long BgL_arg2904z00_2417;

											{	/* Llib/date.scm 669 */
												int BgL_arg2905z00_2418;

												{	/* Llib/date.scm 669 */
													int BgL_auxz00_5743;

													BgL_auxz00_5743 = (int) (((long) 3));
													BgL_arg2905z00_2418 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
														BgL_auxz00_5743);
												}
												BgL_arg2904z00_2417 =
													((long) (BgL_arg2905z00_2418) - ((long) 48));
											}
											BgL_arg2901z00_2414 = (((long) 10) * BgL_arg2904z00_2417);
										}
										{	/* Llib/date.scm 669 */
											int BgL_arg2907z00_2420;

											{	/* Llib/date.scm 669 */
												int BgL_auxz00_5749;

												BgL_auxz00_5749 = (int) (((long) 4));
												BgL_arg2907z00_2420 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5749);
											}
											BgL_arg2902z00_2415 =
												((long) (BgL_arg2907z00_2420) - ((long) 48));
										}
										BgL_mz00_2408 = (BgL_arg2901z00_2414 + BgL_arg2902z00_2415);
									}
									return
										BINT(
										(((long) 60) *
											((BgL_hz00_2407 * ((long) 60)) + BgL_mz00_2408)));
								} break;
							case ((long) 2):

								{	/* Llib/date.scm 661 */
									long BgL_hz00_2422;

									long BgL_mz00_2423;

									{	/* Llib/date.scm 661 */
										int BgL_arg2919z00_2434;

										{	/* Llib/date.scm 661 */
											int BgL_auxz00_5759;

											BgL_auxz00_5759 = (int) (((long) 1));
											BgL_arg2919z00_2434 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
												BgL_auxz00_5759);
										}
										BgL_hz00_2422 =
											((long) (BgL_arg2919z00_2434) - ((long) 48));
									}
									{	/* Llib/date.scm 662 */
										long BgL_arg2921z00_2436;

										long BgL_arg2922z00_2437;

										{	/* Llib/date.scm 662 */
											long BgL_arg2924z00_2439;

											{	/* Llib/date.scm 662 */
												int BgL_arg2925z00_2440;

												{	/* Llib/date.scm 662 */
													int BgL_auxz00_5764;

													BgL_auxz00_5764 = (int) (((long) 2));
													BgL_arg2925z00_2440 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
														BgL_auxz00_5764);
												}
												BgL_arg2924z00_2439 =
													((long) (BgL_arg2925z00_2440) - ((long) 48));
											}
											BgL_arg2921z00_2436 = (((long) 10) * BgL_arg2924z00_2439);
										}
										{	/* Llib/date.scm 662 */
											int BgL_arg2927z00_2442;

											{	/* Llib/date.scm 662 */
												int BgL_auxz00_5770;

												BgL_auxz00_5770 = (int) (((long) 3));
												BgL_arg2927z00_2442 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5770);
											}
											BgL_arg2922z00_2437 =
												((long) (BgL_arg2927z00_2442) - ((long) 48));
										}
										BgL_mz00_2423 = (BgL_arg2921z00_2436 + BgL_arg2922z00_2437);
									}
									{	/* Llib/date.scm 663 */
										bool_t BgL_testz00_5776;

										{	/* Llib/date.scm 663 */
											int BgL_arg2917z00_2432;

											{	/* Llib/date.scm 663 */
												int BgL_auxz00_5777;

												BgL_auxz00_5777 = (int) (((long) 0));
												BgL_arg2917z00_2432 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5777);
											}
											BgL_testz00_5776 =
												((long) (BgL_arg2917z00_2432) == ((long) 43));
										}
										if (BgL_testz00_5776)
											{	/* Llib/date.scm 663 */
												return
													BINT(NEG(
														(((long) 60) *
															((BgL_hz00_2422 * ((long) 60)) +
																BgL_mz00_2423))));
											}
										else
											{	/* Llib/date.scm 663 */
												return
													BINT(
													(((long) 60) *
														((BgL_hz00_2422 * ((long) 60)) + BgL_mz00_2423)));
								}}} break;
							case ((long) 1):

								{	/* Llib/date.scm 655 */
									long BgL_hz00_2444;

									long BgL_mz00_2445;

									{	/* Llib/date.scm 655 */
										long BgL_arg2939z00_2456;

										long BgL_arg2940z00_2457;

										{	/* Llib/date.scm 655 */
											long BgL_arg2943z00_2459;

											{	/* Llib/date.scm 655 */
												int BgL_arg2944z00_2460;

												{	/* Llib/date.scm 655 */
													int BgL_auxz00_5791;

													BgL_auxz00_5791 = (int) (((long) 1));
													BgL_arg2944z00_2460 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
														BgL_auxz00_5791);
												}
												BgL_arg2943z00_2459 =
													((long) (BgL_arg2944z00_2460) - ((long) 48));
											}
											BgL_arg2939z00_2456 = (((long) 10) * BgL_arg2943z00_2459);
										}
										{	/* Llib/date.scm 655 */
											int BgL_arg2946z00_2462;

											{	/* Llib/date.scm 655 */
												int BgL_auxz00_5797;

												BgL_auxz00_5797 = (int) (((long) 2));
												BgL_arg2946z00_2462 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5797);
											}
											BgL_arg2940z00_2457 =
												((long) (BgL_arg2946z00_2462) - ((long) 48));
										}
										BgL_hz00_2444 = (BgL_arg2939z00_2456 + BgL_arg2940z00_2457);
									}
									{	/* Llib/date.scm 656 */
										long BgL_arg2948z00_2464;

										long BgL_arg2949z00_2465;

										{	/* Llib/date.scm 656 */
											long BgL_arg2951z00_2467;

											{	/* Llib/date.scm 656 */
												int BgL_arg2952z00_2468;

												{	/* Llib/date.scm 656 */
													int BgL_auxz00_5803;

													BgL_auxz00_5803 = (int) (((long) 3));
													BgL_arg2952z00_2468 =
														RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
														BgL_auxz00_5803);
												}
												BgL_arg2951z00_2467 =
													((long) (BgL_arg2952z00_2468) - ((long) 48));
											}
											BgL_arg2948z00_2464 = (((long) 10) * BgL_arg2951z00_2467);
										}
										{	/* Llib/date.scm 656 */
											int BgL_arg2954z00_2470;

											{	/* Llib/date.scm 656 */
												int BgL_auxz00_5809;

												BgL_auxz00_5809 = (int) (((long) 4));
												BgL_arg2954z00_2470 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5809);
											}
											BgL_arg2949z00_2465 =
												((long) (BgL_arg2954z00_2470) - ((long) 48));
										}
										BgL_mz00_2445 = (BgL_arg2948z00_2464 + BgL_arg2949z00_2465);
									}
									{	/* Llib/date.scm 657 */
										bool_t BgL_testz00_5815;

										{	/* Llib/date.scm 657 */
											int BgL_arg2937z00_2454;

											{	/* Llib/date.scm 657 */
												int BgL_auxz00_5816;

												BgL_auxz00_5816 = (int) (((long) 0));
												BgL_arg2937z00_2454 =
													RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_2128,
													BgL_auxz00_5816);
											}
											BgL_testz00_5815 =
												((long) (BgL_arg2937z00_2454) == ((long) 43));
										}
										if (BgL_testz00_5815)
											{	/* Llib/date.scm 657 */
												return
													BINT(NEG(
														(((long) 60) *
															((BgL_hz00_2444 * ((long) 60)) +
																BgL_mz00_2445))));
											}
										else
											{	/* Llib/date.scm 657 */
												return
													BINT(
													(((long) 60) *
														((BgL_hz00_2444 * ((long) 60)) + BgL_mz00_2445)));
								}}} break;
							case ((long) 0):

								goto BgL_zc3anonymousza32884ze3z83_2393;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3559z00zz__datez00,
									BGl_string3560z00zz__datez00, BINT(BgL_matchz00_2394));
							}
					}
				}
			}
		}
	}



/* <anonymous:2508> */
	obj_t BGl_zc3anonymousza32508ze3z83zz__datez00(obj_t BgL_envz00_5148,
		obj_t BgL_inputzd2portzd2_5149)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 585 */
			{
				obj_t BgL_inputzd2portzd2_1693;

				BgL_inputzd2portzd2_1693 = BgL_inputzd2portzd2_5149;
				{
					obj_t BgL_inputzd2portzd2_1741;

					long BgL_lastzd2matchzd2_1742;

					obj_t BgL_inputzd2portzd2_1752;

					long BgL_lastzd2matchzd2_1753;

					obj_t BgL_inputzd2portzd2_1761;

					long BgL_lastzd2matchzd2_1762;

					obj_t BgL_inputzd2portzd2_1769;

					long BgL_lastzd2matchzd2_1770;

					obj_t BgL_inputzd2portzd2_1777;

					long BgL_lastzd2matchzd2_1778;

					obj_t BgL_inputzd2portzd2_1785;

					long BgL_lastzd2matchzd2_1786;

					obj_t BgL_inputzd2portzd2_1793;

					long BgL_lastzd2matchzd2_1794;

					obj_t BgL_inputzd2portzd2_1801;

					long BgL_lastzd2matchzd2_1802;

					obj_t BgL_inputzd2portzd2_1809;

					long BgL_lastzd2matchzd2_1810;

					obj_t BgL_inputzd2portzd2_1819;

					long BgL_lastzd2matchzd2_1820;

					obj_t BgL_inputzd2portzd2_1827;

					long BgL_lastzd2matchzd2_1828;

					obj_t BgL_inputzd2portzd2_1834;

					long BgL_lastzd2matchzd2_1835;

					obj_t BgL_inputzd2portzd2_1842;

					long BgL_lastzd2matchzd2_1843;

					obj_t BgL_inputzd2portzd2_1850;

					long BgL_lastzd2matchzd2_1851;

					obj_t BgL_inputzd2portzd2_1872;

					long BgL_lastzd2matchzd2_1873;

					obj_t BgL_inputzd2portzd2_1880;

					long BgL_lastzd2matchzd2_1881;

					obj_t BgL_inputzd2portzd2_1896;

					long BgL_lastzd2matchzd2_1897;

				BgL_zc3anonymousza32675ze3z83_1988:
					RGC_START_MATCH(BgL_inputzd2portzd2_1693);
					{	/* Llib/date.scm 585 */
						long BgL_matchz00_1989;

						BgL_inputzd2portzd2_1850 = BgL_inputzd2portzd2_1693;
						BgL_lastzd2matchzd2_1851 = ((long) 6);
					BgL_zc3anonymousza32574ze3z83_1852:
						{	/* Llib/date.scm 585 */
							int BgL_currentzd2charzd2_1853;

							BgL_currentzd2charzd2_1853 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1850);
							if (((long) (BgL_currentzd2charzd2_1853) == ((long) 0)))
								{	/* Llib/date.scm 585 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1850))
										{	/* Llib/date.scm 585 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1850))
												{

													goto BgL_zc3anonymousza32574ze3z83_1852;
												}
											else
												{	/* Llib/date.scm 585 */
													BgL_matchz00_1989 = BgL_lastzd2matchzd2_1851;
												}
										}
									else
										{	/* Llib/date.scm 585 */
											long BgL_newzd2matchzd2_3900;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1850);
											BgL_newzd2matchzd2_3900 = ((long) 6);
											BgL_matchz00_1989 = BgL_newzd2matchzd2_3900;
								}}
							else
								{	/* Llib/date.scm 585 */
									if (((long) (BgL_currentzd2charzd2_1853) == ((long) 58)))
										{	/* Llib/date.scm 585 */
											BgL_inputzd2portzd2_1752 = BgL_inputzd2portzd2_1850;
											BgL_lastzd2matchzd2_1753 = BgL_lastzd2matchzd2_1851;
										BgL_zc3anonymousza32516ze3z83_1754:
											{	/* Llib/date.scm 585 */
												long BgL_newzd2matchzd2_1755;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1752);
												BgL_newzd2matchzd2_1755 = ((long) 6);
												{	/* Llib/date.scm 585 */
													int BgL_currentzd2charzd2_1756;

													BgL_currentzd2charzd2_1756 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1752);
													if (
														((long) (BgL_currentzd2charzd2_1756) == ((long) 0)))
														{	/* Llib/date.scm 585 */
															bool_t BgL_testz00_5851;

															{	/* Llib/date.scm 585 */
																bool_t BgL_res3361z00_3749;

																{	/* Llib/date.scm 585 */
																	obj_t BgL_inputzd2portzd2_3745;

																	BgL_inputzd2portzd2_3745 =
																		BgL_inputzd2portzd2_1752;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3745))
																		{	/* Llib/date.scm 585 */
																			BgL_res3361z00_3749 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3745);
																		}
																	else
																		{	/* Llib/date.scm 585 */
																			BgL_res3361z00_3749 = ((bool_t) 0);
																		}
																}
																BgL_testz00_5851 = BgL_res3361z00_3749;
															}
															if (BgL_testz00_5851)
																{

																	goto BgL_zc3anonymousza32516ze3z83_1754;
																}
															else
																{	/* Llib/date.scm 585 */
																	BgL_matchz00_1989 = BgL_newzd2matchzd2_1755;
																}
														}
													else
														{	/* Llib/date.scm 585 */
															bool_t BgL_testz00_5855;

															if (
																((long) (BgL_currentzd2charzd2_1756) >=
																	((long) 48)))
																{	/* Llib/date.scm 585 */
																	BgL_testz00_5855 =
																		(
																		(long) (BgL_currentzd2charzd2_1756) <
																		((long) 58));
																}
															else
																{	/* Llib/date.scm 585 */
																	BgL_testz00_5855 = ((bool_t) 0);
																}
															if (BgL_testz00_5855)
																{	/* Llib/date.scm 585 */
																	BgL_inputzd2portzd2_1761 =
																		BgL_inputzd2portzd2_1752;
																	BgL_lastzd2matchzd2_1762 =
																		BgL_newzd2matchzd2_1755;
																BgL_zc3anonymousza32521ze3z83_1763:
																	{	/* Llib/date.scm 585 */
																		int BgL_currentzd2charzd2_1764;

																		BgL_currentzd2charzd2_1764 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1761);
																		if (((long) (BgL_currentzd2charzd2_1764) ==
																				((long) 0)))
																			{	/* Llib/date.scm 585 */
																				bool_t BgL_testz00_5865;

																				{	/* Llib/date.scm 585 */
																					bool_t BgL_res3362z00_3761;

																					{	/* Llib/date.scm 585 */
																						obj_t BgL_inputzd2portzd2_3757;

																						BgL_inputzd2portzd2_3757 =
																							BgL_inputzd2portzd2_1761;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_3757))
																							{	/* Llib/date.scm 585 */
																								BgL_res3362z00_3761 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_3757);
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								BgL_res3362z00_3761 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_5865 =
																						BgL_res3362z00_3761;
																				}
																				if (BgL_testz00_5865)
																					{

																						goto
																							BgL_zc3anonymousza32521ze3z83_1763;
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						BgL_matchz00_1989 =
																							BgL_lastzd2matchzd2_1762;
																					}
																			}
																		else
																			{	/* Llib/date.scm 585 */
																				bool_t BgL_testz00_5869;

																				if (
																					((long) (BgL_currentzd2charzd2_1764)
																						>= ((long) 48)))
																					{	/* Llib/date.scm 585 */
																						BgL_testz00_5869 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1764) <
																							((long) 58));
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						BgL_testz00_5869 = ((bool_t) 0);
																					}
																				if (BgL_testz00_5869)
																					{	/* Llib/date.scm 585 */
																						long BgL_newzd2matchzd2_3768;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1761);
																						BgL_newzd2matchzd2_3768 =
																							((long) 5);
																						BgL_matchz00_1989 =
																							BgL_newzd2matchzd2_3768;
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						BgL_matchz00_1989 =
																							BgL_lastzd2matchzd2_1762;
																					}
																			}
																	}
																}
															else
																{	/* Llib/date.scm 585 */
																	BgL_matchz00_1989 = BgL_newzd2matchzd2_1755;
																}
														}
												}
											}
										}
									else
										{	/* Llib/date.scm 585 */
											bool_t BgL_testz00_5876;

											if (((long) (BgL_currentzd2charzd2_1853) >= ((long) 48)))
												{	/* Llib/date.scm 585 */
													BgL_testz00_5876 =
														((long) (BgL_currentzd2charzd2_1853) < ((long) 58));
												}
											else
												{	/* Llib/date.scm 585 */
													BgL_testz00_5876 = ((bool_t) 0);
												}
											if (BgL_testz00_5876)
												{	/* Llib/date.scm 585 */
													BgL_inputzd2portzd2_1809 = BgL_inputzd2portzd2_1850;
													BgL_lastzd2matchzd2_1810 = BgL_lastzd2matchzd2_1851;
												BgL_zc3anonymousza32549ze3z83_1811:
													{	/* Llib/date.scm 585 */
														long BgL_newzd2matchzd2_1812;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1809);
														BgL_newzd2matchzd2_1812 = ((long) 6);
														{	/* Llib/date.scm 585 */
															int BgL_currentzd2charzd2_1813;

															BgL_currentzd2charzd2_1813 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1809);
															if (
																((long) (BgL_currentzd2charzd2_1813) ==
																	((long) 0)))
																{	/* Llib/date.scm 585 */
																	bool_t BgL_testz00_5887;

																	{	/* Llib/date.scm 585 */
																		bool_t BgL_res3368z00_3836;

																		{	/* Llib/date.scm 585 */
																			obj_t BgL_inputzd2portzd2_3832;

																			BgL_inputzd2portzd2_3832 =
																				BgL_inputzd2portzd2_1809;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3832))
																				{	/* Llib/date.scm 585 */
																					BgL_res3368z00_3836 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_3832);
																				}
																			else
																				{	/* Llib/date.scm 585 */
																					BgL_res3368z00_3836 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_5887 = BgL_res3368z00_3836;
																	}
																	if (BgL_testz00_5887)
																		{

																			goto BgL_zc3anonymousza32549ze3z83_1811;
																		}
																	else
																		{	/* Llib/date.scm 585 */
																			BgL_matchz00_1989 =
																				BgL_newzd2matchzd2_1812;
																		}
																}
															else
																{	/* Llib/date.scm 585 */
																	if (
																		((long) (BgL_currentzd2charzd2_1813) ==
																			((long) 58)))
																		{	/* Llib/date.scm 585 */
																			BgL_inputzd2portzd2_1777 =
																				BgL_inputzd2portzd2_1809;
																			BgL_lastzd2matchzd2_1778 =
																				BgL_newzd2matchzd2_1812;
																		BgL_zc3anonymousza32531ze3z83_1779:
																			{	/* Llib/date.scm 585 */
																				int BgL_currentzd2charzd2_1780;

																				BgL_currentzd2charzd2_1780 =
																					RGC_BUFFER_GET_CHAR
																					(BgL_inputzd2portzd2_1777);
																				if (((long) (BgL_currentzd2charzd2_1780)
																						== ((long) 0)))
																					{	/* Llib/date.scm 585 */
																						bool_t BgL_testz00_5898;

																						{	/* Llib/date.scm 585 */
																							bool_t BgL_res3364z00_3789;

																							{	/* Llib/date.scm 585 */
																								obj_t BgL_inputzd2portzd2_3785;

																								BgL_inputzd2portzd2_3785 =
																									BgL_inputzd2portzd2_1777;
																								if (RGC_BUFFER_EMPTY
																									(BgL_inputzd2portzd2_3785))
																									{	/* Llib/date.scm 585 */
																										BgL_res3364z00_3789 =
																											rgc_fill_buffer
																											(BgL_inputzd2portzd2_3785);
																									}
																								else
																									{	/* Llib/date.scm 585 */
																										BgL_res3364z00_3789 =
																											((bool_t) 0);
																									}
																							}
																							BgL_testz00_5898 =
																								BgL_res3364z00_3789;
																						}
																						if (BgL_testz00_5898)
																							{

																								goto
																									BgL_zc3anonymousza32531ze3z83_1779;
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								BgL_matchz00_1989 =
																									BgL_lastzd2matchzd2_1778;
																							}
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						bool_t BgL_testz00_5902;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_1780) >=
																								((long) 48)))
																							{	/* Llib/date.scm 585 */
																								BgL_testz00_5902 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_1780) <
																									((long) 58));
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								BgL_testz00_5902 = ((bool_t) 0);
																							}
																						if (BgL_testz00_5902)
																							{	/* Llib/date.scm 585 */
																								BgL_inputzd2portzd2_1769 =
																									BgL_inputzd2portzd2_1777;
																								BgL_lastzd2matchzd2_1770 =
																									BgL_lastzd2matchzd2_1778;
																							BgL_zc3anonymousza32526ze3z83_1771:
																								{	/* Llib/date.scm 585 */
																									int
																										BgL_currentzd2charzd2_1772;
																									BgL_currentzd2charzd2_1772 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_inputzd2portzd2_1769);
																									if (((long)
																											(BgL_currentzd2charzd2_1772)
																											== ((long) 0)))
																										{	/* Llib/date.scm 585 */
																											bool_t BgL_testz00_5912;

																											{	/* Llib/date.scm 585 */
																												bool_t
																													BgL_res3363z00_3777;
																												{	/* Llib/date.scm 585 */
																													obj_t
																														BgL_inputzd2portzd2_3773;
																													BgL_inputzd2portzd2_3773
																														=
																														BgL_inputzd2portzd2_1769;
																													if (RGC_BUFFER_EMPTY
																														(BgL_inputzd2portzd2_3773))
																														{	/* Llib/date.scm 585 */
																															BgL_res3363z00_3777
																																=
																																rgc_fill_buffer
																																(BgL_inputzd2portzd2_3773);
																														}
																													else
																														{	/* Llib/date.scm 585 */
																															BgL_res3363z00_3777
																																= ((bool_t) 0);
																														}
																												}
																												BgL_testz00_5912 =
																													BgL_res3363z00_3777;
																											}
																											if (BgL_testz00_5912)
																												{

																													goto
																														BgL_zc3anonymousza32526ze3z83_1771;
																												}
																											else
																												{	/* Llib/date.scm 585 */
																													BgL_matchz00_1989 =
																														BgL_lastzd2matchzd2_1770;
																												}
																										}
																									else
																										{	/* Llib/date.scm 585 */
																											bool_t BgL_testz00_5916;

																											if (
																												((long)
																													(BgL_currentzd2charzd2_1772)
																													>= ((long) 48)))
																												{	/* Llib/date.scm 585 */
																													BgL_testz00_5916 =
																														(
																														(long)
																														(BgL_currentzd2charzd2_1772)
																														< ((long) 58));
																												}
																											else
																												{	/* Llib/date.scm 585 */
																													BgL_testz00_5916 =
																														((bool_t) 0);
																												}
																											if (BgL_testz00_5916)
																												{	/* Llib/date.scm 585 */
																													BgL_inputzd2portzd2_1793
																														=
																														BgL_inputzd2portzd2_1769;
																													BgL_lastzd2matchzd2_1794
																														=
																														BgL_lastzd2matchzd2_1770;
																												BgL_zc3anonymousza32540ze3z83_1795:
																													{	/* Llib/date.scm 585 */
																														long
																															BgL_newzd2matchzd2_1796;
																														RGC_STOP_MATCH
																															(BgL_inputzd2portzd2_1793);
																														BgL_newzd2matchzd2_1796
																															= ((long) 1);
																														{	/* Llib/date.scm 585 */
																															int
																																BgL_currentzd2charzd2_1797;
																															BgL_currentzd2charzd2_1797
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_inputzd2portzd2_1793);
																															if (((long)
																																	(BgL_currentzd2charzd2_1797)
																																	==
																																	((long) 0)))
																																{	/* Llib/date.scm 585 */
																																	bool_t
																																		BgL_testz00_5927;
																																	{	/* Llib/date.scm 585 */
																																		bool_t
																																			BgL_res3366z00_3813;
																																		{	/* Llib/date.scm 585 */
																																			obj_t
																																				BgL_inputzd2portzd2_3809;
																																			BgL_inputzd2portzd2_3809
																																				=
																																				BgL_inputzd2portzd2_1793;
																																			if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3809))
																																				{	/* Llib/date.scm 585 */
																																					BgL_res3366z00_3813
																																						=
																																						rgc_fill_buffer
																																						(BgL_inputzd2portzd2_3809);
																																				}
																																			else
																																				{	/* Llib/date.scm 585 */
																																					BgL_res3366z00_3813
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																		BgL_testz00_5927
																																			=
																																			BgL_res3366z00_3813;
																																	}
																																	if (BgL_testz00_5927)
																																		{

																																			goto
																																				BgL_zc3anonymousza32540ze3z83_1795;
																																		}
																																	else
																																		{	/* Llib/date.scm 585 */
																																			BgL_matchz00_1989
																																				=
																																				BgL_newzd2matchzd2_1796;
																																		}
																																}
																															else
																																{	/* Llib/date.scm 585 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1797)
																																			==
																																			((long)
																																				58)))
																																		{	/* Llib/date.scm 585 */
																																			BgL_inputzd2portzd2_1801
																																				=
																																				BgL_inputzd2portzd2_1793;
																																			BgL_lastzd2matchzd2_1802
																																				=
																																				BgL_newzd2matchzd2_1796;
																																		BgL_zc3anonymousza32544ze3z83_1803:
																																			{	/* Llib/date.scm 585 */
																																				int
																																					BgL_currentzd2charzd2_1804;
																																				BgL_currentzd2charzd2_1804
																																					=
																																					RGC_BUFFER_GET_CHAR
																																					(BgL_inputzd2portzd2_1801);
																																				if ((
																																						(long)
																																						(BgL_currentzd2charzd2_1804)
																																						==
																																						((long) 0)))
																																					{	/* Llib/date.scm 585 */
																																						bool_t
																																							BgL_testz00_5938;
																																						{	/* Llib/date.scm 585 */
																																							bool_t
																																								BgL_res3367z00_3823;
																																							{	/* Llib/date.scm 585 */
																																								obj_t
																																									BgL_inputzd2portzd2_3819;
																																								BgL_inputzd2portzd2_3819
																																									=
																																									BgL_inputzd2portzd2_1801;
																																								if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3819))
																																									{	/* Llib/date.scm 585 */
																																										BgL_res3367z00_3823
																																											=
																																											rgc_fill_buffer
																																											(BgL_inputzd2portzd2_3819);
																																									}
																																								else
																																									{	/* Llib/date.scm 585 */
																																										BgL_res3367z00_3823
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							BgL_testz00_5938
																																								=
																																								BgL_res3367z00_3823;
																																						}
																																						if (BgL_testz00_5938)
																																							{

																																								goto
																																									BgL_zc3anonymousza32544ze3z83_1803;
																																							}
																																						else
																																							{	/* Llib/date.scm 585 */
																																								BgL_matchz00_1989
																																									=
																																									BgL_lastzd2matchzd2_1802;
																																							}
																																					}
																																				else
																																					{	/* Llib/date.scm 585 */
																																						bool_t
																																							BgL_testz00_5942;
																																						if (
																																							((long) (BgL_currentzd2charzd2_1804) >= ((long) 48)))
																																							{	/* Llib/date.scm 585 */
																																								BgL_testz00_5942
																																									=
																																									(
																																									(long)
																																									(BgL_currentzd2charzd2_1804)
																																									<
																																									((long) 58));
																																							}
																																						else
																																							{	/* Llib/date.scm 585 */
																																								BgL_testz00_5942
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						if (BgL_testz00_5942)
																																							{	/* Llib/date.scm 585 */
																																								BgL_inputzd2portzd2_1834
																																									=
																																									BgL_inputzd2portzd2_1801;
																																								BgL_lastzd2matchzd2_1835
																																									=
																																									BgL_lastzd2matchzd2_1802;
																																							BgL_zc3anonymousza32564ze3z83_1836:
																																								{	/* Llib/date.scm 585 */
																																									int
																																										BgL_currentzd2charzd2_1837;
																																									BgL_currentzd2charzd2_1837
																																										=
																																										RGC_BUFFER_GET_CHAR
																																										(BgL_inputzd2portzd2_1834);
																																									if (((long) (BgL_currentzd2charzd2_1837) == ((long) 0)))
																																										{	/* Llib/date.scm 585 */
																																											bool_t
																																												BgL_testz00_5952;
																																											{	/* Llib/date.scm 585 */
																																												bool_t
																																													BgL_res3371z00_3872;
																																												{	/* Llib/date.scm 585 */
																																													obj_t
																																														BgL_inputzd2portzd2_3868;
																																													BgL_inputzd2portzd2_3868
																																														=
																																														BgL_inputzd2portzd2_1834;
																																													if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3868))
																																														{	/* Llib/date.scm 585 */
																																															BgL_res3371z00_3872
																																																=
																																																rgc_fill_buffer
																																																(BgL_inputzd2portzd2_3868);
																																														}
																																													else
																																														{	/* Llib/date.scm 585 */
																																															BgL_res3371z00_3872
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																												BgL_testz00_5952
																																													=
																																													BgL_res3371z00_3872;
																																											}
																																											if (BgL_testz00_5952)
																																												{

																																													goto
																																														BgL_zc3anonymousza32564ze3z83_1836;
																																												}
																																											else
																																												{	/* Llib/date.scm 585 */
																																													BgL_matchz00_1989
																																														=
																																														BgL_lastzd2matchzd2_1835;
																																												}
																																										}
																																									else
																																										{	/* Llib/date.scm 585 */
																																											bool_t
																																												BgL_testz00_5956;
																																											if (((long) (BgL_currentzd2charzd2_1837) >= ((long) 48)))
																																												{	/* Llib/date.scm 585 */
																																													BgL_testz00_5956
																																														=
																																														(
																																														(long)
																																														(BgL_currentzd2charzd2_1837)
																																														<
																																														((long) 58));
																																												}
																																											else
																																												{	/* Llib/date.scm 585 */
																																													BgL_testz00_5956
																																														=
																																														(
																																														(bool_t)
																																														0);
																																												}
																																											if (BgL_testz00_5956)
																																												{	/* Llib/date.scm 585 */
																																													long
																																														BgL_newzd2matchzd2_3879;
																																													RGC_STOP_MATCH
																																														(BgL_inputzd2portzd2_1834);
																																													BgL_newzd2matchzd2_3879
																																														=
																																														(
																																														(long)
																																														4);
																																													BgL_matchz00_1989
																																														=
																																														BgL_newzd2matchzd2_3879;
																																												}
																																											else
																																												{	/* Llib/date.scm 585 */
																																													BgL_matchz00_1989
																																														=
																																														BgL_lastzd2matchzd2_1835;
																																												}
																																										}
																																								}
																																							}
																																						else
																																							{	/* Llib/date.scm 585 */
																																								BgL_matchz00_1989
																																									=
																																									BgL_lastzd2matchzd2_1802;
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Llib/date.scm 585 */
																																			BgL_matchz00_1989
																																				=
																																				BgL_newzd2matchzd2_1796;
																																		}
																																}
																														}
																													}
																												}
																											else
																												{	/* Llib/date.scm 585 */
																													BgL_matchz00_1989 =
																														BgL_lastzd2matchzd2_1770;
																												}
																										}
																								}
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								BgL_matchz00_1989 =
																									BgL_lastzd2matchzd2_1778;
																							}
																					}
																			}
																		}
																	else
																		{	/* Llib/date.scm 585 */
																			bool_t BgL_testz00_5963;

																			if (
																				((long) (BgL_currentzd2charzd2_1813) >=
																					((long) 48)))
																				{	/* Llib/date.scm 585 */
																					BgL_testz00_5963 =
																						(
																						(long) (BgL_currentzd2charzd2_1813)
																						< ((long) 58));
																				}
																			else
																				{	/* Llib/date.scm 585 */
																					BgL_testz00_5963 = ((bool_t) 0);
																				}
																			if (BgL_testz00_5963)
																				{	/* Llib/date.scm 585 */
																					BgL_inputzd2portzd2_1827 =
																						BgL_inputzd2portzd2_1809;
																					BgL_lastzd2matchzd2_1828 =
																						BgL_newzd2matchzd2_1812;
																				BgL_zc3anonymousza32560ze3z83_1829:
																					{	/* Llib/date.scm 585 */
																						int BgL_currentzd2charzd2_1830;

																						BgL_currentzd2charzd2_1830 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_inputzd2portzd2_1827);
																						if (((long)
																								(BgL_currentzd2charzd2_1830) ==
																								((long) 0)))
																							{	/* Llib/date.scm 585 */
																								bool_t BgL_testz00_5973;

																								{	/* Llib/date.scm 585 */
																									bool_t BgL_res3370z00_3862;

																									{	/* Llib/date.scm 585 */
																										obj_t
																											BgL_inputzd2portzd2_3858;
																										BgL_inputzd2portzd2_3858 =
																											BgL_inputzd2portzd2_1827;
																										if (RGC_BUFFER_EMPTY
																											(BgL_inputzd2portzd2_3858))
																											{	/* Llib/date.scm 585 */
																												BgL_res3370z00_3862 =
																													rgc_fill_buffer
																													(BgL_inputzd2portzd2_3858);
																											}
																										else
																											{	/* Llib/date.scm 585 */
																												BgL_res3370z00_3862 =
																													((bool_t) 0);
																											}
																									}
																									BgL_testz00_5973 =
																										BgL_res3370z00_3862;
																								}
																								if (BgL_testz00_5973)
																									{

																										goto
																											BgL_zc3anonymousza32560ze3z83_1829;
																									}
																								else
																									{	/* Llib/date.scm 585 */
																										BgL_matchz00_1989 =
																											BgL_lastzd2matchzd2_1828;
																									}
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								if (
																									((long)
																										(BgL_currentzd2charzd2_1830)
																										== ((long) 58)))
																									{	/* Llib/date.scm 585 */
																										BgL_inputzd2portzd2_1872 =
																											BgL_inputzd2portzd2_1827;
																										BgL_lastzd2matchzd2_1873 =
																											BgL_lastzd2matchzd2_1828;
																									BgL_zc3anonymousza32587ze3z83_1874:
																										{	/* Llib/date.scm 585 */
																											int
																												BgL_currentzd2charzd2_1875;
																											BgL_currentzd2charzd2_1875
																												=
																												RGC_BUFFER_GET_CHAR
																												(BgL_inputzd2portzd2_1872);
																											if (((long)
																													(BgL_currentzd2charzd2_1875)
																													== ((long) 0)))
																												{	/* Llib/date.scm 585 */
																													bool_t
																														BgL_testz00_5984;
																													{	/* Llib/date.scm 585 */
																														bool_t
																															BgL_res3373z00_3931;
																														{	/* Llib/date.scm 585 */
																															obj_t
																																BgL_inputzd2portzd2_3927;
																															BgL_inputzd2portzd2_3927
																																=
																																BgL_inputzd2portzd2_1872;
																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3927))
																																{	/* Llib/date.scm 585 */
																																	BgL_res3373z00_3931
																																		=
																																		rgc_fill_buffer
																																		(BgL_inputzd2portzd2_3927);
																																}
																															else
																																{	/* Llib/date.scm 585 */
																																	BgL_res3373z00_3931
																																		=
																																		((bool_t)
																																		0);
																																}
																														}
																														BgL_testz00_5984 =
																															BgL_res3373z00_3931;
																													}
																													if (BgL_testz00_5984)
																														{

																															goto
																																BgL_zc3anonymousza32587ze3z83_1874;
																														}
																													else
																														{	/* Llib/date.scm 585 */
																															BgL_matchz00_1989
																																=
																																BgL_lastzd2matchzd2_1873;
																														}
																												}
																											else
																												{	/* Llib/date.scm 585 */
																													bool_t
																														BgL_testz00_5988;
																													if (((long)
																															(BgL_currentzd2charzd2_1875)
																															>= ((long) 48)))
																														{	/* Llib/date.scm 585 */
																															BgL_testz00_5988 =
																																(
																																(long)
																																(BgL_currentzd2charzd2_1875)
																																< ((long) 58));
																														}
																													else
																														{	/* Llib/date.scm 585 */
																															BgL_testz00_5988 =
																																((bool_t) 0);
																														}
																													if (BgL_testz00_5988)
																														{	/* Llib/date.scm 585 */
																															BgL_inputzd2portzd2_1842
																																=
																																BgL_inputzd2portzd2_1872;
																															BgL_lastzd2matchzd2_1843
																																=
																																BgL_lastzd2matchzd2_1873;
																														BgL_zc3anonymousza32569ze3z83_1844:
																															{	/* Llib/date.scm 585 */
																																int
																																	BgL_currentzd2charzd2_1845;
																																BgL_currentzd2charzd2_1845
																																	=
																																	RGC_BUFFER_GET_CHAR
																																	(BgL_inputzd2portzd2_1842);
																																if (((long)
																																		(BgL_currentzd2charzd2_1845)
																																		==
																																		((long) 0)))
																																	{	/* Llib/date.scm 585 */
																																		bool_t
																																			BgL_testz00_5998;
																																		{	/* Llib/date.scm 585 */
																																			bool_t
																																				BgL_res3372z00_3888;
																																			{	/* Llib/date.scm 585 */
																																				obj_t
																																					BgL_inputzd2portzd2_3884;
																																				BgL_inputzd2portzd2_3884
																																					=
																																					BgL_inputzd2portzd2_1842;
																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3884))
																																					{	/* Llib/date.scm 585 */
																																						BgL_res3372z00_3888
																																							=
																																							rgc_fill_buffer
																																							(BgL_inputzd2portzd2_3884);
																																					}
																																				else
																																					{	/* Llib/date.scm 585 */
																																						BgL_res3372z00_3888
																																							=
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																			BgL_testz00_5998
																																				=
																																				BgL_res3372z00_3888;
																																		}
																																		if (BgL_testz00_5998)
																																			{

																																				goto
																																					BgL_zc3anonymousza32569ze3z83_1844;
																																			}
																																		else
																																			{	/* Llib/date.scm 585 */
																																				BgL_matchz00_1989
																																					=
																																					BgL_lastzd2matchzd2_1843;
																																			}
																																	}
																																else
																																	{	/* Llib/date.scm 585 */
																																		bool_t
																																			BgL_testz00_6002;
																																		if (((long)
																																				(BgL_currentzd2charzd2_1845)
																																				>=
																																				((long)
																																					48)))
																																			{	/* Llib/date.scm 585 */
																																				BgL_testz00_6002
																																					=
																																					(
																																					(long)
																																					(BgL_currentzd2charzd2_1845)
																																					<
																																					((long) 58));
																																			}
																																		else
																																			{	/* Llib/date.scm 585 */
																																				BgL_testz00_6002
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		if (BgL_testz00_6002)
																																			{	/* Llib/date.scm 585 */
																																				BgL_inputzd2portzd2_1785
																																					=
																																					BgL_inputzd2portzd2_1842;
																																				BgL_lastzd2matchzd2_1786
																																					=
																																					BgL_lastzd2matchzd2_1843;
																																			BgL_zc3anonymousza32536ze3z83_1787:
																																				{	/* Llib/date.scm 585 */
																																					long
																																						BgL_newzd2matchzd2_1788;
																																					RGC_STOP_MATCH
																																						(BgL_inputzd2portzd2_1785);
																																					BgL_newzd2matchzd2_1788
																																						=
																																						(
																																						(long)
																																						2);
																																					{	/* Llib/date.scm 585 */
																																						int
																																							BgL_currentzd2charzd2_1789;
																																						BgL_currentzd2charzd2_1789
																																							=
																																							RGC_BUFFER_GET_CHAR
																																							(BgL_inputzd2portzd2_1785);
																																						if (
																																							((long) (BgL_currentzd2charzd2_1789) == ((long) 0)))
																																							{	/* Llib/date.scm 585 */
																																								bool_t
																																									BgL_testz00_6013;
																																								{	/* Llib/date.scm 585 */
																																									bool_t
																																										BgL_res3365z00_3802;
																																									{	/* Llib/date.scm 585 */
																																										obj_t
																																											BgL_inputzd2portzd2_3798;
																																										BgL_inputzd2portzd2_3798
																																											=
																																											BgL_inputzd2portzd2_1785;
																																										if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3798))
																																											{	/* Llib/date.scm 585 */
																																												BgL_res3365z00_3802
																																													=
																																													rgc_fill_buffer
																																													(BgL_inputzd2portzd2_3798);
																																											}
																																										else
																																											{	/* Llib/date.scm 585 */
																																												BgL_res3365z00_3802
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																									BgL_testz00_6013
																																										=
																																										BgL_res3365z00_3802;
																																								}
																																								if (BgL_testz00_6013)
																																									{

																																										goto
																																											BgL_zc3anonymousza32536ze3z83_1787;
																																									}
																																								else
																																									{	/* Llib/date.scm 585 */
																																										BgL_matchz00_1989
																																											=
																																											BgL_newzd2matchzd2_1788;
																																									}
																																							}
																																						else
																																							{	/* Llib/date.scm 585 */
																																								if (((long) (BgL_currentzd2charzd2_1789) == ((long) 58)))
																																									{	/* Llib/date.scm 585 */
																																										BgL_inputzd2portzd2_1819
																																											=
																																											BgL_inputzd2portzd2_1785;
																																										BgL_lastzd2matchzd2_1820
																																											=
																																											BgL_newzd2matchzd2_1788;
																																									BgL_zc3anonymousza32555ze3z83_1821:
																																										{	/* Llib/date.scm 585 */
																																											int
																																												BgL_currentzd2charzd2_1822;
																																											BgL_currentzd2charzd2_1822
																																												=
																																												RGC_BUFFER_GET_CHAR
																																												(BgL_inputzd2portzd2_1819);
																																											if (((long) (BgL_currentzd2charzd2_1822) == ((long) 0)))
																																												{	/* Llib/date.scm 585 */
																																													bool_t
																																														BgL_testz00_6024;
																																													{	/* Llib/date.scm 585 */
																																														bool_t
																																															BgL_res3369z00_3850;
																																														{	/* Llib/date.scm 585 */
																																															obj_t
																																																BgL_inputzd2portzd2_3846;
																																															BgL_inputzd2portzd2_3846
																																																=
																																																BgL_inputzd2portzd2_1819;
																																															if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3846))
																																																{	/* Llib/date.scm 585 */
																																																	BgL_res3369z00_3850
																																																		=
																																																		rgc_fill_buffer
																																																		(BgL_inputzd2portzd2_3846);
																																																}
																																															else
																																																{	/* Llib/date.scm 585 */
																																																	BgL_res3369z00_3850
																																																		=
																																																		(
																																																		(bool_t)
																																																		0);
																																																}
																																														}
																																														BgL_testz00_6024
																																															=
																																															BgL_res3369z00_3850;
																																													}
																																													if (BgL_testz00_6024)
																																														{

																																															goto
																																																BgL_zc3anonymousza32555ze3z83_1821;
																																														}
																																													else
																																														{	/* Llib/date.scm 585 */
																																															BgL_matchz00_1989
																																																=
																																																BgL_lastzd2matchzd2_1820;
																																														}
																																												}
																																											else
																																												{	/* Llib/date.scm 585 */
																																													bool_t
																																														BgL_testz00_6028;
																																													if (((long) (BgL_currentzd2charzd2_1822) >= ((long) 48)))
																																														{	/* Llib/date.scm 585 */
																																															BgL_testz00_6028
																																																=
																																																(
																																																(long)
																																																(BgL_currentzd2charzd2_1822)
																																																<
																																																((long) 58));
																																														}
																																													else
																																														{	/* Llib/date.scm 585 */
																																															BgL_testz00_6028
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																													if (BgL_testz00_6028)
																																														{	/* Llib/date.scm 585 */
																																															BgL_inputzd2portzd2_1880
																																																=
																																																BgL_inputzd2portzd2_1819;
																																															BgL_lastzd2matchzd2_1881
																																																=
																																																BgL_lastzd2matchzd2_1820;
																																														BgL_zc3anonymousza32592ze3z83_1882:
																																															{	/* Llib/date.scm 585 */
																																																int
																																																	BgL_currentzd2charzd2_1883;
																																																BgL_currentzd2charzd2_1883
																																																	=
																																																	RGC_BUFFER_GET_CHAR
																																																	(BgL_inputzd2portzd2_1880);
																																																if (((long) (BgL_currentzd2charzd2_1883) == ((long) 0)))
																																																	{	/* Llib/date.scm 585 */
																																																		bool_t
																																																			BgL_testz00_6038;
																																																		{	/* Llib/date.scm 585 */
																																																			bool_t
																																																				BgL_res3374z00_3943;
																																																			{	/* Llib/date.scm 585 */
																																																				obj_t
																																																					BgL_inputzd2portzd2_3939;
																																																				BgL_inputzd2portzd2_3939
																																																					=
																																																					BgL_inputzd2portzd2_1880;
																																																				if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3939))
																																																					{	/* Llib/date.scm 585 */
																																																						BgL_res3374z00_3943
																																																							=
																																																							rgc_fill_buffer
																																																							(BgL_inputzd2portzd2_3939);
																																																					}
																																																				else
																																																					{	/* Llib/date.scm 585 */
																																																						BgL_res3374z00_3943
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																			}
																																																			BgL_testz00_6038
																																																				=
																																																				BgL_res3374z00_3943;
																																																		}
																																																		if (BgL_testz00_6038)
																																																			{

																																																				goto
																																																					BgL_zc3anonymousza32592ze3z83_1882;
																																																			}
																																																		else
																																																			{	/* Llib/date.scm 585 */
																																																				BgL_matchz00_1989
																																																					=
																																																					BgL_lastzd2matchzd2_1881;
																																																			}
																																																	}
																																																else
																																																	{	/* Llib/date.scm 585 */
																																																		bool_t
																																																			BgL_testz00_6042;
																																																		if (((long) (BgL_currentzd2charzd2_1883) >= ((long) 48)))
																																																			{	/* Llib/date.scm 585 */
																																																				BgL_testz00_6042
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_currentzd2charzd2_1883)
																																																					<
																																																					((long) 58));
																																																			}
																																																		else
																																																			{	/* Llib/date.scm 585 */
																																																				BgL_testz00_6042
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		if (BgL_testz00_6042)
																																																			{	/* Llib/date.scm 585 */
																																																				long
																																																					BgL_newzd2matchzd2_3950;
																																																				RGC_STOP_MATCH
																																																					(BgL_inputzd2portzd2_1880);
																																																				BgL_newzd2matchzd2_3950
																																																					=
																																																					(
																																																					(long)
																																																					3);
																																																				BgL_matchz00_1989
																																																					=
																																																					BgL_newzd2matchzd2_3950;
																																																			}
																																																		else
																																																			{	/* Llib/date.scm 585 */
																																																				BgL_matchz00_1989
																																																					=
																																																					BgL_lastzd2matchzd2_1881;
																																																			}
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Llib/date.scm 585 */
																																															BgL_matchz00_1989
																																																=
																																																BgL_lastzd2matchzd2_1820;
																																														}
																																												}
																																										}
																																									}
																																								else
																																									{	/* Llib/date.scm 585 */
																																										BgL_matchz00_1989
																																											=
																																											BgL_newzd2matchzd2_1788;
																																									}
																																							}
																																					}
																																				}
																																			}
																																		else
																																			{	/* Llib/date.scm 585 */
																																				BgL_matchz00_1989
																																					=
																																					BgL_lastzd2matchzd2_1843;
																																			}
																																	}
																															}
																														}
																													else
																														{	/* Llib/date.scm 585 */
																															BgL_matchz00_1989
																																=
																																BgL_lastzd2matchzd2_1873;
																														}
																												}
																										}
																									}
																								else
																									{	/* Llib/date.scm 585 */
																										BgL_matchz00_1989 =
																											BgL_lastzd2matchzd2_1828;
																									}
																							}
																					}
																				}
																			else
																				{	/* Llib/date.scm 585 */
																					BgL_matchz00_1989 =
																						BgL_newzd2matchzd2_1812;
																				}
																		}
																}
														}
													}
												}
											else
												{	/* Llib/date.scm 585 */
													bool_t BgL_testz00_6049;

													{	/* Llib/date.scm 585 */
														bool_t BgL_testz00_6050;

														if (
															((long) (BgL_currentzd2charzd2_1853) ==
																((long) 10)))
															{	/* Llib/date.scm 585 */
																BgL_testz00_6050 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 585 */
																BgL_testz00_6050 =
																	(
																	(long) (BgL_currentzd2charzd2_1853) ==
																	((long) 9));
															}
														if (BgL_testz00_6050)
															{	/* Llib/date.scm 585 */
																BgL_testz00_6049 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 585 */
																if (
																	((long) (BgL_currentzd2charzd2_1853) ==
																		((long) 13)))
																	{	/* Llib/date.scm 585 */
																		BgL_testz00_6049 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 585 */
																		BgL_testz00_6049 =
																			(
																			(long) (BgL_currentzd2charzd2_1853) ==
																			((long) 32));
													}}}
													if (BgL_testz00_6049)
														{	/* Llib/date.scm 585 */
															BgL_inputzd2portzd2_1741 =
																BgL_inputzd2portzd2_1850;
															BgL_lastzd2matchzd2_1742 =
																BgL_lastzd2matchzd2_1851;
														BgL_zc3anonymousza32509ze3z83_1743:
															{	/* Llib/date.scm 585 */
																long BgL_newzd2matchzd2_1744;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_1741);
																BgL_newzd2matchzd2_1744 = ((long) 0);
																{	/* Llib/date.scm 585 */
																	int BgL_currentzd2charzd2_1745;

																	BgL_currentzd2charzd2_1745 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_1741);
																	if (((long) (BgL_currentzd2charzd2_1745) ==
																			((long) 0)))
																		{	/* Llib/date.scm 585 */
																			bool_t BgL_testz00_6066;

																			{	/* Llib/date.scm 585 */
																				bool_t BgL_res3360z00_3732;

																				{	/* Llib/date.scm 585 */
																					obj_t BgL_inputzd2portzd2_3728;

																					BgL_inputzd2portzd2_3728 =
																						BgL_inputzd2portzd2_1741;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_3728))
																						{	/* Llib/date.scm 585 */
																							BgL_res3360z00_3732 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_3728);
																						}
																					else
																						{	/* Llib/date.scm 585 */
																							BgL_res3360z00_3732 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_6066 = BgL_res3360z00_3732;
																			}
																			if (BgL_testz00_6066)
																				{

																					goto
																						BgL_zc3anonymousza32509ze3z83_1743;
																				}
																			else
																				{	/* Llib/date.scm 585 */
																					BgL_matchz00_1989 =
																						BgL_newzd2matchzd2_1744;
																				}
																		}
																	else
																		{	/* Llib/date.scm 585 */
																			bool_t BgL_testz00_6070;

																			{	/* Llib/date.scm 585 */
																				bool_t BgL_testz00_6071;

																				if (
																					((long) (BgL_currentzd2charzd2_1745)
																						== ((long) 10)))
																					{	/* Llib/date.scm 585 */
																						BgL_testz00_6071 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						BgL_testz00_6071 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1745) ==
																							((long) 9));
																					}
																				if (BgL_testz00_6071)
																					{	/* Llib/date.scm 585 */
																						BgL_testz00_6070 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 585 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1745) ==
																								((long) 13)))
																							{	/* Llib/date.scm 585 */
																								BgL_testz00_6070 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 585 */
																								BgL_testz00_6070 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_1745)
																									== ((long) 32));
																			}}}
																			if (BgL_testz00_6070)
																				{	/* Llib/date.scm 585 */
																					BgL_inputzd2portzd2_1896 =
																						BgL_inputzd2portzd2_1741;
																					BgL_lastzd2matchzd2_1897 =
																						BgL_newzd2matchzd2_1744;
																				BgL_zc3anonymousza32599ze3z83_1898:
																					{	/* Llib/date.scm 585 */
																						long BgL_newzd2matchzd2_1899;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1896);
																						BgL_newzd2matchzd2_1899 =
																							((long) 0);
																						{	/* Llib/date.scm 585 */
																							int BgL_currentzd2charzd2_1900;

																							BgL_currentzd2charzd2_1900 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1896);
																							if (((long)
																									(BgL_currentzd2charzd2_1900)
																									== ((long) 0)))
																								{	/* Llib/date.scm 585 */
																									bool_t BgL_testz00_6087;

																									{	/* Llib/date.scm 585 */
																										bool_t BgL_res3375z00_3964;

																										{	/* Llib/date.scm 585 */
																											obj_t
																												BgL_inputzd2portzd2_3960;
																											BgL_inputzd2portzd2_3960 =
																												BgL_inputzd2portzd2_1896;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_3960))
																												{	/* Llib/date.scm 585 */
																													BgL_res3375z00_3964 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_3960);
																												}
																											else
																												{	/* Llib/date.scm 585 */
																													BgL_res3375z00_3964 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_6087 =
																											BgL_res3375z00_3964;
																									}
																									if (BgL_testz00_6087)
																										{

																											goto
																												BgL_zc3anonymousza32599ze3z83_1898;
																										}
																									else
																										{	/* Llib/date.scm 585 */
																											BgL_matchz00_1989 =
																												BgL_newzd2matchzd2_1899;
																										}
																								}
																							else
																								{	/* Llib/date.scm 585 */
																									bool_t BgL_testz00_6091;

																									{	/* Llib/date.scm 585 */
																										bool_t BgL_testz00_6092;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1900)
																												== ((long) 10)))
																											{	/* Llib/date.scm 585 */
																												BgL_testz00_6092 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 585 */
																												BgL_testz00_6092 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1900)
																													== ((long) 9));
																											}
																										if (BgL_testz00_6092)
																											{	/* Llib/date.scm 585 */
																												BgL_testz00_6091 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 585 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1900)
																														== ((long) 13)))
																													{	/* Llib/date.scm 585 */
																														BgL_testz00_6091 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 585 */
																														BgL_testz00_6091 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1900)
																															== ((long) 32));
																									}}}
																									if (BgL_testz00_6091)
																										{
																											long
																												BgL_lastzd2matchzd2_6103;
																											BgL_lastzd2matchzd2_6103 =
																												BgL_newzd2matchzd2_1899;
																											BgL_lastzd2matchzd2_1897 =
																												BgL_lastzd2matchzd2_6103;
																											goto
																												BgL_zc3anonymousza32599ze3z83_1898;
																										}
																									else
																										{	/* Llib/date.scm 585 */
																											BgL_matchz00_1989 =
																												BgL_newzd2matchzd2_1899;
																										}
																								}
																						}
																					}
																				}
																			else
																				{	/* Llib/date.scm 585 */
																					BgL_matchz00_1989 =
																						BgL_newzd2matchzd2_1744;
																				}
																		}
																}
															}
														}
													else
														{	/* Llib/date.scm 585 */
															long BgL_newzd2matchzd2_3918;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_1850);
															BgL_newzd2matchzd2_3918 = ((long) 6);
															BgL_matchz00_1989 = BgL_newzd2matchzd2_3918;
						}}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1693);
						switch (BgL_matchz00_1989)
							{
							case ((long) 6):

								{	/* Llib/date.scm 629 */
									obj_t BgL_auxz00_6106;

									{	/* Llib/date.scm 585 */
										bool_t BgL_testz00_6107;

										{	/* Llib/date.scm 585 */
											long BgL_arg2668z00_1978;

											BgL_arg2668z00_1978 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1693);
											BgL_testz00_6107 = (BgL_arg2668z00_1978 == ((long) 0));
										}
										if (BgL_testz00_6107)
											{	/* Llib/date.scm 585 */
												BgL_auxz00_6106 = BCNST(256);
											}
										else
											{	/* Llib/date.scm 585 */
												obj_t BgL_inputzd2portzd2_3978;

												BgL_inputzd2portzd2_3978 = BgL_inputzd2portzd2_1693;
												BgL_auxz00_6106 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3978));
											}
									}
									return
										BGl_parsezd2errorzd2zz__datez00
										(BGl_symbol3556z00zz__datez00, BGl_string3561z00zz__datez00,
										BgL_auxz00_6106, BgL_inputzd2portzd2_1693);
								}
								break;
							case ((long) 5):

								{	/* Llib/date.scm 623 */
									long BgL_b1z00_1997;

									long BgL_b2z00_1998;

									{	/* Llib/date.scm 623 */
										int BgL_arg2682z00_2003;

										{	/* Llib/date.scm 623 */
											int BgL_auxz00_6113;

											BgL_auxz00_6113 = (int) (((long) 0));
											BgL_arg2682z00_2003 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6113);
										}
										BgL_b1z00_1997 =
											((long) (BgL_arg2682z00_2003) - ((long) 48));
									}
									{	/* Llib/date.scm 624 */
										int BgL_arg2684z00_2005;

										{	/* Llib/date.scm 624 */
											int BgL_auxz00_6118;

											BgL_auxz00_6118 = (int) (((long) 2));
											BgL_arg2684z00_2005 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6118);
										}
										BgL_b2z00_1998 =
											((long) (BgL_arg2684z00_2005) - ((long) 48));
									}
									{	/* Llib/date.scm 625 */
										long BgL_val2_1951z00_2001;

										BgL_val2_1951z00_2001 =
											((((long) 10) * ((long) 13)) + BgL_b2z00_1998);
										{	/* Llib/date.scm 625 */
											int BgL_auxz00_6125;

											BgL_auxz00_6125 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6125);
										}
										{	/* Llib/date.scm 625 */
											obj_t BgL_auxz00_6130;

											int BgL_auxz00_6128;

											BgL_auxz00_6130 = BINT(((long) 0));
											BgL_auxz00_6128 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6128, BgL_auxz00_6130);
										}
										{	/* Llib/date.scm 625 */
											obj_t BgL_auxz00_6135;

											int BgL_auxz00_6133;

											BgL_auxz00_6135 = BINT(BgL_val2_1951z00_2001);
											BgL_auxz00_6133 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6133, BgL_auxz00_6135);
										}
										return BINT(((long) 0));
								}} break;
							case ((long) 4):

								{	/* Llib/date.scm 614 */
									long BgL_b1z00_2007;

									long BgL_b3z00_2008;

									long BgL_b4z00_2009;

									long BgL_b5z00_2010;

									long BgL_b6z00_2011;

									{	/* Llib/date.scm 614 */
										int BgL_arg2688z00_2017;

										{	/* Llib/date.scm 614 */
											int BgL_auxz00_6139;

											BgL_auxz00_6139 = (int) (((long) 0));
											BgL_arg2688z00_2017 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6139);
										}
										BgL_b1z00_2007 =
											((long) (BgL_arg2688z00_2017) - ((long) 48));
									}
									{	/* Llib/date.scm 615 */
										int BgL_arg2690z00_2019;

										{	/* Llib/date.scm 615 */
											int BgL_auxz00_6144;

											BgL_auxz00_6144 = (int) (((long) 2));
											BgL_arg2690z00_2019 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6144);
										}
										BgL_b3z00_2008 =
											((long) (BgL_arg2690z00_2019) - ((long) 48));
									}
									{	/* Llib/date.scm 616 */
										int BgL_arg2692z00_2021;

										{	/* Llib/date.scm 616 */
											int BgL_auxz00_6149;

											BgL_auxz00_6149 = (int) (((long) 3));
											BgL_arg2692z00_2021 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6149);
										}
										BgL_b4z00_2009 =
											((long) (BgL_arg2692z00_2021) - ((long) 48));
									}
									{	/* Llib/date.scm 617 */
										int BgL_arg2694z00_2023;

										{	/* Llib/date.scm 617 */
											int BgL_auxz00_6154;

											BgL_auxz00_6154 = (int) (((long) 5));
											BgL_arg2694z00_2023 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6154);
										}
										BgL_b5z00_2010 =
											((long) (BgL_arg2694z00_2023) - ((long) 48));
									}
									{	/* Llib/date.scm 618 */
										int BgL_arg2696z00_2025;

										{	/* Llib/date.scm 618 */
											int BgL_auxz00_6159;

											BgL_auxz00_6159 = (int) (((long) 6));
											BgL_arg2696z00_2025 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6159);
										}
										BgL_b6z00_2011 =
											((long) (BgL_arg2696z00_2025) - ((long) 48));
									}
									{	/* Llib/date.scm 619 */
										long BgL_val1_1953z00_2013;

										long BgL_val2_1954z00_2014;

										BgL_val1_1953z00_2013 =
											((((long) 10) * BgL_b3z00_2008) + BgL_b4z00_2009);
										BgL_val2_1954z00_2014 =
											((((long) 10) * BgL_b5z00_2010) + BgL_b6z00_2011);
										{	/* Llib/date.scm 619 */
											int BgL_auxz00_6168;

											BgL_auxz00_6168 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6168);
										}
										{	/* Llib/date.scm 619 */
											obj_t BgL_auxz00_6173;

											int BgL_auxz00_6171;

											BgL_auxz00_6173 = BINT(BgL_val1_1953z00_2013);
											BgL_auxz00_6171 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6171, BgL_auxz00_6173);
										}
										{	/* Llib/date.scm 619 */
											obj_t BgL_auxz00_6178;

											int BgL_auxz00_6176;

											BgL_auxz00_6178 = BINT(BgL_val2_1954z00_2014);
											BgL_auxz00_6176 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6176, BgL_auxz00_6178);
										}
										return BINT(BgL_b1z00_2007);
									}
								}
								break;
							case ((long) 3):

								{	/* Llib/date.scm 604 */
									long BgL_b1z00_2027;

									long BgL_b2z00_2028;

									long BgL_b3z00_2029;

									long BgL_b4z00_2030;

									long BgL_b5z00_2031;

									long BgL_b6z00_2032;

									{	/* Llib/date.scm 604 */
										int BgL_arg2701z00_2039;

										{	/* Llib/date.scm 604 */
											int BgL_auxz00_6182;

											BgL_auxz00_6182 = (int) (((long) 0));
											BgL_arg2701z00_2039 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6182);
										}
										BgL_b1z00_2027 =
											((long) (BgL_arg2701z00_2039) - ((long) 48));
									}
									{	/* Llib/date.scm 605 */
										int BgL_arg2703z00_2041;

										{	/* Llib/date.scm 605 */
											int BgL_auxz00_6187;

											BgL_auxz00_6187 = (int) (((long) 1));
											BgL_arg2703z00_2041 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6187);
										}
										BgL_b2z00_2028 =
											((long) (BgL_arg2703z00_2041) - ((long) 48));
									}
									{	/* Llib/date.scm 606 */
										int BgL_arg2705z00_2043;

										{	/* Llib/date.scm 606 */
											int BgL_auxz00_6192;

											BgL_auxz00_6192 = (int) (((long) 3));
											BgL_arg2705z00_2043 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6192);
										}
										BgL_b3z00_2029 =
											((long) (BgL_arg2705z00_2043) - ((long) 48));
									}
									{	/* Llib/date.scm 607 */
										int BgL_arg2707z00_2045;

										{	/* Llib/date.scm 607 */
											int BgL_auxz00_6197;

											BgL_auxz00_6197 = (int) (((long) 4));
											BgL_arg2707z00_2045 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6197);
										}
										BgL_b4z00_2030 =
											((long) (BgL_arg2707z00_2045) - ((long) 48));
									}
									{	/* Llib/date.scm 608 */
										int BgL_arg2709z00_2047;

										{	/* Llib/date.scm 608 */
											int BgL_auxz00_6202;

											BgL_auxz00_6202 = (int) (((long) 6));
											BgL_arg2709z00_2047 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6202);
										}
										BgL_b5z00_2031 =
											((long) (BgL_arg2709z00_2047) - ((long) 48));
									}
									{	/* Llib/date.scm 609 */
										int BgL_arg2711z00_2049;

										{	/* Llib/date.scm 609 */
											int BgL_auxz00_6207;

											BgL_auxz00_6207 = (int) (((long) 7));
											BgL_arg2711z00_2049 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6207);
										}
										BgL_b6z00_2032 =
											((long) (BgL_arg2711z00_2049) - ((long) 48));
									}
									{	/* Llib/date.scm 610 */
										long BgL_val0_1955z00_2033;

										long BgL_val1_1956z00_2034;

										long BgL_val2_1957z00_2035;

										BgL_val0_1955z00_2033 =
											((((long) 10) * BgL_b1z00_2027) + BgL_b2z00_2028);
										BgL_val1_1956z00_2034 =
											((((long) 10) * BgL_b3z00_2029) + BgL_b4z00_2030);
										BgL_val2_1957z00_2035 =
											((((long) 10) * BgL_b5z00_2031) + BgL_b6z00_2032);
										{	/* Llib/date.scm 610 */
											int BgL_auxz00_6218;

											BgL_auxz00_6218 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6218);
										}
										{	/* Llib/date.scm 610 */
											obj_t BgL_auxz00_6223;

											int BgL_auxz00_6221;

											BgL_auxz00_6223 = BINT(BgL_val1_1956z00_2034);
											BgL_auxz00_6221 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6221, BgL_auxz00_6223);
										}
										{	/* Llib/date.scm 610 */
											obj_t BgL_auxz00_6228;

											int BgL_auxz00_6226;

											BgL_auxz00_6228 = BINT(BgL_val2_1957z00_2035);
											BgL_auxz00_6226 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6226, BgL_auxz00_6228);
										}
										return BINT(BgL_val0_1955z00_2033);
									}
								}
								break;
							case ((long) 2):

								{	/* Llib/date.scm 596 */
									long BgL_b1z00_2051;

									long BgL_b2z00_2052;

									long BgL_b3z00_2053;

									long BgL_b4z00_2054;

									{	/* Llib/date.scm 596 */
										int BgL_arg2716z00_2060;

										{	/* Llib/date.scm 596 */
											int BgL_auxz00_6232;

											BgL_auxz00_6232 = (int) (((long) 0));
											BgL_arg2716z00_2060 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6232);
										}
										BgL_b1z00_2051 =
											((long) (BgL_arg2716z00_2060) - ((long) 48));
									}
									{	/* Llib/date.scm 597 */
										int BgL_arg2718z00_2062;

										{	/* Llib/date.scm 597 */
											int BgL_auxz00_6237;

											BgL_auxz00_6237 = (int) (((long) 1));
											BgL_arg2718z00_2062 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6237);
										}
										BgL_b2z00_2052 =
											((long) (BgL_arg2718z00_2062) - ((long) 48));
									}
									{	/* Llib/date.scm 598 */
										int BgL_arg2720z00_2064;

										{	/* Llib/date.scm 598 */
											int BgL_auxz00_6242;

											BgL_auxz00_6242 = (int) (((long) 3));
											BgL_arg2720z00_2064 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6242);
										}
										BgL_b3z00_2053 =
											((long) (BgL_arg2720z00_2064) - ((long) 48));
									}
									{	/* Llib/date.scm 599 */
										int BgL_arg2722z00_2066;

										{	/* Llib/date.scm 599 */
											int BgL_auxz00_6247;

											BgL_auxz00_6247 = (int) (((long) 4));
											BgL_arg2722z00_2066 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6247);
										}
										BgL_b4z00_2054 =
											((long) (BgL_arg2722z00_2066) - ((long) 48));
									}
									{	/* Llib/date.scm 600 */
										long BgL_val0_1958z00_2055;

										long BgL_val1_1959z00_2056;

										BgL_val0_1958z00_2055 =
											((((long) 10) * BgL_b1z00_2051) + BgL_b2z00_2052);
										BgL_val1_1959z00_2056 =
											((((long) 10) * BgL_b3z00_2053) + BgL_b4z00_2054);
										{	/* Llib/date.scm 600 */
											int BgL_auxz00_6256;

											BgL_auxz00_6256 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6256);
										}
										{	/* Llib/date.scm 600 */
											obj_t BgL_auxz00_6261;

											int BgL_auxz00_6259;

											BgL_auxz00_6261 = BINT(BgL_val1_1959z00_2056);
											BgL_auxz00_6259 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6259, BgL_auxz00_6261);
										}
										{	/* Llib/date.scm 600 */
											obj_t BgL_auxz00_6266;

											int BgL_auxz00_6264;

											BgL_auxz00_6266 = BINT(((long) 0));
											BgL_auxz00_6264 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6264, BgL_auxz00_6266);
										}
										return BINT(BgL_val0_1958z00_2055);
									}
								}
								break;
							case ((long) 1):

								{	/* Llib/date.scm 589 */
									long BgL_b1z00_2068;

									long BgL_b3z00_2069;

									long BgL_b4z00_2070;

									{	/* Llib/date.scm 589 */
										int BgL_arg2726z00_2075;

										{	/* Llib/date.scm 589 */
											int BgL_auxz00_6270;

											BgL_auxz00_6270 = (int) (((long) 0));
											BgL_arg2726z00_2075 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6270);
										}
										BgL_b1z00_2068 =
											((long) (BgL_arg2726z00_2075) - ((long) 48));
									}
									{	/* Llib/date.scm 590 */
										int BgL_arg2728z00_2077;

										{	/* Llib/date.scm 590 */
											int BgL_auxz00_6275;

											BgL_auxz00_6275 = (int) (((long) 2));
											BgL_arg2728z00_2077 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6275);
										}
										BgL_b3z00_2069 =
											((long) (BgL_arg2728z00_2077) - ((long) 48));
									}
									{	/* Llib/date.scm 591 */
										int BgL_arg2730z00_2079;

										{	/* Llib/date.scm 591 */
											int BgL_auxz00_6280;

											BgL_auxz00_6280 = (int) (((long) 3));
											BgL_arg2730z00_2079 =
												RGC_BUFFER_BYTE_REF(BgL_inputzd2portzd2_1693,
												BgL_auxz00_6280);
										}
										BgL_b4z00_2070 =
											((long) (BgL_arg2730z00_2079) - ((long) 48));
									}
									{	/* Llib/date.scm 592 */
										long BgL_val1_1962z00_2072;

										BgL_val1_1962z00_2072 =
											((((long) 10) * BgL_b3z00_2069) + BgL_b4z00_2070);
										{	/* Llib/date.scm 592 */
											int BgL_auxz00_6287;

											BgL_auxz00_6287 = (int) (((long) 3));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_6287);
										}
										{	/* Llib/date.scm 592 */
											obj_t BgL_auxz00_6292;

											int BgL_auxz00_6290;

											BgL_auxz00_6292 = BINT(BgL_val1_1962z00_2072);
											BgL_auxz00_6290 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6290, BgL_auxz00_6292);
										}
										{	/* Llib/date.scm 592 */
											obj_t BgL_auxz00_6297;

											int BgL_auxz00_6295;

											BgL_auxz00_6297 = BINT(((long) 0));
											BgL_auxz00_6295 = (int) (((long) 2));
											BGL_MVALUES_VAL_SET(BgL_auxz00_6295, BgL_auxz00_6297);
										}
										return BINT(BgL_b1z00_2068);
									}
								}
								break;
							case ((long) 0):

								goto BgL_zc3anonymousza32675ze3z83_1988;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3559z00zz__datez00,
									BGl_string3560z00zz__datez00, BINT(BgL_matchz00_1989));
							}
					}
				}
			}
		}
	}



/* <anonymous:2348> */
	obj_t BGl_zc3anonymousza32348ze3z83zz__datez00(obj_t BgL_envz00_5150,
		obj_t BgL_inputzd2portzd2_5151)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 551 */
			{
				obj_t BgL_inputzd2portzd2_1429;

				BgL_inputzd2portzd2_1429 = BgL_inputzd2portzd2_5151;
				{
					obj_t BgL_inputzd2portzd2_1463;

					long BgL_lastzd2matchzd2_1464;

					obj_t BgL_inputzd2portzd2_1478;

					long BgL_lastzd2matchzd2_1479;

					obj_t BgL_inputzd2portzd2_1498;

					long BgL_lastzd2matchzd2_1499;

					obj_t BgL_inputzd2portzd2_1509;

					long BgL_lastzd2matchzd2_1510;

					obj_t BgL_inputzd2portzd2_1528;

					long BgL_lastzd2matchzd2_1529;

				BgL_zc3anonymousza32485ze3z83_1634:
					RGC_START_MATCH(BgL_inputzd2portzd2_1429);
					{	/* Llib/date.scm 551 */
						long BgL_matchz00_1635;

						BgL_inputzd2portzd2_1509 = BgL_inputzd2portzd2_1429;
						BgL_lastzd2matchzd2_1510 = ((long) 2);
					BgL_zc3anonymousza32381ze3z83_1511:
						{	/* Llib/date.scm 551 */
							int BgL_currentzd2charzd2_1512;

							BgL_currentzd2charzd2_1512 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1509);
							if (((long) (BgL_currentzd2charzd2_1512) == ((long) 0)))
								{	/* Llib/date.scm 551 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1509))
										{	/* Llib/date.scm 551 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1509))
												{

													goto BgL_zc3anonymousza32381ze3z83_1511;
												}
											else
												{	/* Llib/date.scm 551 */
													BgL_matchz00_1635 = BgL_lastzd2matchzd2_1510;
												}
										}
									else
										{	/* Llib/date.scm 551 */
											long BgL_newzd2matchzd2_3605;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1509);
											BgL_newzd2matchzd2_3605 = ((long) 2);
											BgL_matchz00_1635 = BgL_newzd2matchzd2_3605;
								}}
							else
								{	/* Llib/date.scm 551 */
									bool_t BgL_testz00_6314;

									if (((long) (BgL_currentzd2charzd2_1512) == ((long) 65)))
										{	/* Llib/date.scm 551 */
											BgL_testz00_6314 = ((bool_t) 1);
										}
									else
										{	/* Llib/date.scm 551 */
											if (((long) (BgL_currentzd2charzd2_1512) == ((long) 68)))
												{	/* Llib/date.scm 551 */
													BgL_testz00_6314 = ((bool_t) 1);
												}
											else
												{	/* Llib/date.scm 551 */
													if (
														((long) (BgL_currentzd2charzd2_1512) ==
															((long) 70)))
														{	/* Llib/date.scm 551 */
															BgL_testz00_6314 = ((bool_t) 1);
														}
													else
														{	/* Llib/date.scm 551 */
															if (
																((long) (BgL_currentzd2charzd2_1512) ==
																	((long) 74)))
																{	/* Llib/date.scm 551 */
																	BgL_testz00_6314 = ((bool_t) 1);
																}
															else
																{	/* Llib/date.scm 551 */
																	bool_t BgL_testz00_6327;

																	if (
																		((long) (BgL_currentzd2charzd2_1512) ==
																			((long) 79)))
																		{	/* Llib/date.scm 551 */
																			BgL_testz00_6327 = ((bool_t) 1);
																		}
																	else
																		{	/* Llib/date.scm 551 */
																			if (
																				((long) (BgL_currentzd2charzd2_1512) ==
																					((long) 78)))
																				{	/* Llib/date.scm 551 */
																					BgL_testz00_6327 = ((bool_t) 1);
																				}
																			else
																				{	/* Llib/date.scm 551 */
																					BgL_testz00_6327 =
																						(
																						(long) (BgL_currentzd2charzd2_1512)
																						== ((long) 77));
																		}}
																	if (BgL_testz00_6327)
																		{	/* Llib/date.scm 551 */
																			BgL_testz00_6314 = ((bool_t) 1);
																		}
																	else
																		{	/* Llib/date.scm 551 */
																			BgL_testz00_6314 =
																				(
																				(long) (BgL_currentzd2charzd2_1512) ==
																				((long) 83));
										}}}}}
									if (BgL_testz00_6314)
										{	/* Llib/date.scm 551 */
											BgL_inputzd2portzd2_1528 = BgL_inputzd2portzd2_1509;
											BgL_lastzd2matchzd2_1529 = BgL_lastzd2matchzd2_1510;
										BgL_zc3anonymousza32397ze3z83_1530:
											{	/* Llib/date.scm 551 */
												long BgL_newzd2matchzd2_1531;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1528);
												BgL_newzd2matchzd2_1531 = ((long) 2);
												{	/* Llib/date.scm 551 */
													int BgL_currentzd2charzd2_1532;

													BgL_currentzd2charzd2_1532 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1528);
													if (
														((long) (BgL_currentzd2charzd2_1532) == ((long) 0)))
														{	/* Llib/date.scm 551 */
															bool_t BgL_testz00_6343;

															{	/* Llib/date.scm 551 */
																bool_t BgL_res3354z00_3643;

																{	/* Llib/date.scm 551 */
																	obj_t BgL_inputzd2portzd2_3639;

																	BgL_inputzd2portzd2_3639 =
																		BgL_inputzd2portzd2_1528;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3639))
																		{	/* Llib/date.scm 551 */
																			BgL_res3354z00_3643 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3639);
																		}
																	else
																		{	/* Llib/date.scm 551 */
																			BgL_res3354z00_3643 = ((bool_t) 0);
																		}
																}
																BgL_testz00_6343 = BgL_res3354z00_3643;
															}
															if (BgL_testz00_6343)
																{

																	goto BgL_zc3anonymousza32397ze3z83_1530;
																}
															else
																{	/* Llib/date.scm 551 */
																	BgL_matchz00_1635 = BgL_newzd2matchzd2_1531;
																}
														}
													else
														{	/* Llib/date.scm 551 */
															bool_t BgL_testz00_6347;

															{	/* Llib/date.scm 551 */
																bool_t BgL_testz00_6348;

																if (
																	((long) (BgL_currentzd2charzd2_1532) ==
																		((long) 99)))
																	{	/* Llib/date.scm 551 */
																		BgL_testz00_6348 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 551 */
																		if (
																			((long) (BgL_currentzd2charzd2_1532) ==
																				((long) 98)))
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6348 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6348 =
																					(
																					(long) (BgL_currentzd2charzd2_1532) ==
																					((long) 97));
																	}}
																if (BgL_testz00_6348)
																	{	/* Llib/date.scm 551 */
																		BgL_testz00_6347 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 551 */
																		if (
																			((long) (BgL_currentzd2charzd2_1532) ==
																				((long) 101)))
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6347 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 551 */
																				if (
																					((long) (BgL_currentzd2charzd2_1532)
																						== ((long) 103)))
																					{	/* Llib/date.scm 551 */
																						BgL_testz00_6347 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 551 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_1532) ==
																								((long) 108)))
																							{	/* Llib/date.scm 551 */
																								BgL_testz00_6347 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 551 */
																								bool_t BgL_testz00_6366;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1532)
																										== ((long) 112)))
																									{	/* Llib/date.scm 551 */
																										BgL_testz00_6366 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 551 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1532)
																												== ((long) 111)))
																											{	/* Llib/date.scm 551 */
																												BgL_testz00_6366 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 551 */
																												BgL_testz00_6366 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1532)
																													== ((long) 110));
																									}}
																								if (BgL_testz00_6366)
																									{	/* Llib/date.scm 551 */
																										BgL_testz00_6347 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 551 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1532)
																												== ((long) 114)))
																											{	/* Llib/date.scm 551 */
																												BgL_testz00_6347 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 551 */
																												bool_t BgL_testz00_6378;

																												if (
																													((long)
																														(BgL_currentzd2charzd2_1532)
																														== ((long) 118)))
																													{	/* Llib/date.scm 551 */
																														BgL_testz00_6378 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 551 */
																														if (
																															((long)
																																(BgL_currentzd2charzd2_1532)
																																==
																																((long) 117)))
																															{	/* Llib/date.scm 551 */
																																BgL_testz00_6378
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Llib/date.scm 551 */
																																BgL_testz00_6378
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_1532)
																																	==
																																	((long) 116));
																													}}
																												if (BgL_testz00_6378)
																													{	/* Llib/date.scm 551 */
																														BgL_testz00_6347 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 551 */
																														BgL_testz00_6347 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1532)
																															== ((long) 121));
															}}}}}}}}
															if (BgL_testz00_6347)
																{	/* Llib/date.scm 551 */
																	BgL_inputzd2portzd2_1478 =
																		BgL_inputzd2portzd2_1528;
																	BgL_lastzd2matchzd2_1479 =
																		BgL_newzd2matchzd2_1531;
																BgL_zc3anonymousza32357ze3z83_1480:
																	{	/* Llib/date.scm 551 */
																		int BgL_currentzd2charzd2_1481;

																		BgL_currentzd2charzd2_1481 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_1478);
																		if (((long) (BgL_currentzd2charzd2_1481) ==
																				((long) 0)))
																			{	/* Llib/date.scm 551 */
																				bool_t BgL_testz00_6393;

																				{	/* Llib/date.scm 551 */
																					bool_t BgL_res3352z00_3548;

																					{	/* Llib/date.scm 551 */
																						obj_t BgL_inputzd2portzd2_3544;

																						BgL_inputzd2portzd2_3544 =
																							BgL_inputzd2portzd2_1478;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_3544))
																							{	/* Llib/date.scm 551 */
																								BgL_res3352z00_3548 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_3544);
																							}
																						else
																							{	/* Llib/date.scm 551 */
																								BgL_res3352z00_3548 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_6393 =
																						BgL_res3352z00_3548;
																				}
																				if (BgL_testz00_6393)
																					{

																						goto
																							BgL_zc3anonymousza32357ze3z83_1480;
																					}
																				else
																					{	/* Llib/date.scm 551 */
																						BgL_matchz00_1635 =
																							BgL_lastzd2matchzd2_1479;
																					}
																			}
																		else
																			{	/* Llib/date.scm 551 */
																				bool_t BgL_testz00_6397;

																				{	/* Llib/date.scm 551 */
																					bool_t BgL_testz00_6398;

																					if (
																						((long) (BgL_currentzd2charzd2_1481)
																							== ((long) 99)))
																						{	/* Llib/date.scm 551 */
																							BgL_testz00_6398 = ((bool_t) 1);
																						}
																					else
																						{	/* Llib/date.scm 551 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1481)
																									== ((long) 98)))
																								{	/* Llib/date.scm 551 */
																									BgL_testz00_6398 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Llib/date.scm 551 */
																									BgL_testz00_6398 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_1481)
																										== ((long) 97));
																						}}
																					if (BgL_testz00_6398)
																						{	/* Llib/date.scm 551 */
																							BgL_testz00_6397 = ((bool_t) 1);
																						}
																					else
																						{	/* Llib/date.scm 551 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_1481)
																									== ((long) 101)))
																								{	/* Llib/date.scm 551 */
																									BgL_testz00_6397 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Llib/date.scm 551 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1481)
																											== ((long) 103)))
																										{	/* Llib/date.scm 551 */
																											BgL_testz00_6397 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Llib/date.scm 551 */
																											if (
																												((long)
																													(BgL_currentzd2charzd2_1481)
																													== ((long) 108)))
																												{	/* Llib/date.scm 551 */
																													BgL_testz00_6397 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Llib/date.scm 551 */
																													bool_t
																														BgL_testz00_6416;
																													if (((long)
																															(BgL_currentzd2charzd2_1481)
																															== ((long) 112)))
																														{	/* Llib/date.scm 551 */
																															BgL_testz00_6416 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Llib/date.scm 551 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1481)
																																	==
																																	((long) 111)))
																																{	/* Llib/date.scm 551 */
																																	BgL_testz00_6416
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Llib/date.scm 551 */
																																	BgL_testz00_6416
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_1481)
																																		==
																																		((long)
																																			110));
																														}}
																													if (BgL_testz00_6416)
																														{	/* Llib/date.scm 551 */
																															BgL_testz00_6397 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Llib/date.scm 551 */
																															if (
																																((long)
																																	(BgL_currentzd2charzd2_1481)
																																	==
																																	((long) 114)))
																																{	/* Llib/date.scm 551 */
																																	BgL_testz00_6397
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Llib/date.scm 551 */
																																	bool_t
																																		BgL_testz00_6428;
																																	if (((long)
																																			(BgL_currentzd2charzd2_1481)
																																			==
																																			((long)
																																				118)))
																																		{	/* Llib/date.scm 551 */
																																			BgL_testz00_6428
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Llib/date.scm 551 */
																																			if (
																																				((long)
																																					(BgL_currentzd2charzd2_1481)
																																					==
																																					((long) 117)))
																																				{	/* Llib/date.scm 551 */
																																					BgL_testz00_6428
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Llib/date.scm 551 */
																																					BgL_testz00_6428
																																						=
																																						(
																																						(long)
																																						(BgL_currentzd2charzd2_1481)
																																						==
																																						((long) 116));
																																		}}
																																	if (BgL_testz00_6428)
																																		{	/* Llib/date.scm 551 */
																																			BgL_testz00_6397
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Llib/date.scm 551 */
																																			BgL_testz00_6397
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_1481)
																																				==
																																				((long)
																																					121));
																				}}}}}}}}
																				if (BgL_testz00_6397)
																					{	/* Llib/date.scm 551 */
																						long BgL_newzd2matchzd2_3579;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1478);
																						BgL_newzd2matchzd2_3579 =
																							((long) 1);
																						BgL_matchz00_1635 =
																							BgL_newzd2matchzd2_3579;
																					}
																				else
																					{	/* Llib/date.scm 551 */
																						BgL_matchz00_1635 =
																							BgL_lastzd2matchzd2_1479;
																					}
																			}
																	}
																}
															else
																{	/* Llib/date.scm 551 */
																	BgL_matchz00_1635 = BgL_newzd2matchzd2_1531;
																}
														}
												}
											}
										}
									else
										{	/* Llib/date.scm 551 */
											bool_t BgL_testz00_6440;

											{	/* Llib/date.scm 551 */
												bool_t BgL_testz00_6441;

												if (
													((long) (BgL_currentzd2charzd2_1512) == ((long) 10)))
													{	/* Llib/date.scm 551 */
														BgL_testz00_6441 = ((bool_t) 1);
													}
												else
													{	/* Llib/date.scm 551 */
														BgL_testz00_6441 =
															(
															(long) (BgL_currentzd2charzd2_1512) ==
															((long) 9));
													}
												if (BgL_testz00_6441)
													{	/* Llib/date.scm 551 */
														BgL_testz00_6440 = ((bool_t) 1);
													}
												else
													{	/* Llib/date.scm 551 */
														if (
															((long) (BgL_currentzd2charzd2_1512) ==
																((long) 13)))
															{	/* Llib/date.scm 551 */
																BgL_testz00_6440 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 551 */
																BgL_testz00_6440 =
																	(
																	(long) (BgL_currentzd2charzd2_1512) ==
																	((long) 32));
											}}}
											if (BgL_testz00_6440)
												{	/* Llib/date.scm 551 */
													BgL_inputzd2portzd2_1498 = BgL_inputzd2portzd2_1509;
													BgL_lastzd2matchzd2_1499 = BgL_lastzd2matchzd2_1510;
												BgL_zc3anonymousza32374ze3z83_1500:
													{	/* Llib/date.scm 551 */
														long BgL_newzd2matchzd2_1501;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1498);
														BgL_newzd2matchzd2_1501 = ((long) 0);
														{	/* Llib/date.scm 551 */
															int BgL_currentzd2charzd2_1502;

															BgL_currentzd2charzd2_1502 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1498);
															if (
																((long) (BgL_currentzd2charzd2_1502) ==
																	((long) 0)))
																{	/* Llib/date.scm 551 */
																	bool_t BgL_testz00_6457;

																	{	/* Llib/date.scm 551 */
																		bool_t BgL_res3353z00_3589;

																		{	/* Llib/date.scm 551 */
																			obj_t BgL_inputzd2portzd2_3585;

																			BgL_inputzd2portzd2_3585 =
																				BgL_inputzd2portzd2_1498;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3585))
																				{	/* Llib/date.scm 551 */
																					BgL_res3353z00_3589 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_3585);
																				}
																			else
																				{	/* Llib/date.scm 551 */
																					BgL_res3353z00_3589 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_6457 = BgL_res3353z00_3589;
																	}
																	if (BgL_testz00_6457)
																		{

																			goto BgL_zc3anonymousza32374ze3z83_1500;
																		}
																	else
																		{	/* Llib/date.scm 551 */
																			BgL_matchz00_1635 =
																				BgL_newzd2matchzd2_1501;
																		}
																}
															else
																{	/* Llib/date.scm 551 */
																	bool_t BgL_testz00_6461;

																	{	/* Llib/date.scm 551 */
																		bool_t BgL_testz00_6462;

																		if (
																			((long) (BgL_currentzd2charzd2_1502) ==
																				((long) 10)))
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6462 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6462 =
																					(
																					(long) (BgL_currentzd2charzd2_1502) ==
																					((long) 9));
																			}
																		if (BgL_testz00_6462)
																			{	/* Llib/date.scm 551 */
																				BgL_testz00_6461 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 551 */
																				if (
																					((long) (BgL_currentzd2charzd2_1502)
																						== ((long) 13)))
																					{	/* Llib/date.scm 551 */
																						BgL_testz00_6461 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 551 */
																						BgL_testz00_6461 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1502) ==
																							((long) 32));
																	}}}
																	if (BgL_testz00_6461)
																		{	/* Llib/date.scm 551 */
																			BgL_inputzd2portzd2_1463 =
																				BgL_inputzd2portzd2_1498;
																			BgL_lastzd2matchzd2_1464 =
																				BgL_newzd2matchzd2_1501;
																		BgL_zc3anonymousza32349ze3z83_1465:
																			{	/* Llib/date.scm 551 */
																				long BgL_newzd2matchzd2_1466;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1463);
																				BgL_newzd2matchzd2_1466 = ((long) 0);
																				{	/* Llib/date.scm 551 */
																					int BgL_currentzd2charzd2_1467;

																					BgL_currentzd2charzd2_1467 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1463);
																					if (((long)
																							(BgL_currentzd2charzd2_1467) ==
																							((long) 0)))
																						{	/* Llib/date.scm 551 */
																							bool_t BgL_testz00_6478;

																							{	/* Llib/date.scm 551 */
																								bool_t BgL_res3351z00_3530;

																								{	/* Llib/date.scm 551 */
																									obj_t
																										BgL_inputzd2portzd2_3526;
																									BgL_inputzd2portzd2_3526 =
																										BgL_inputzd2portzd2_1463;
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_3526))
																										{	/* Llib/date.scm 551 */
																											BgL_res3351z00_3530 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_3526);
																										}
																									else
																										{	/* Llib/date.scm 551 */
																											BgL_res3351z00_3530 =
																												((bool_t) 0);
																										}
																								}
																								BgL_testz00_6478 =
																									BgL_res3351z00_3530;
																							}
																							if (BgL_testz00_6478)
																								{

																									goto
																										BgL_zc3anonymousza32349ze3z83_1465;
																								}
																							else
																								{	/* Llib/date.scm 551 */
																									BgL_matchz00_1635 =
																										BgL_newzd2matchzd2_1466;
																								}
																						}
																					else
																						{	/* Llib/date.scm 551 */
																							bool_t BgL_testz00_6482;

																							{	/* Llib/date.scm 551 */
																								bool_t BgL_testz00_6483;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1467)
																										== ((long) 10)))
																									{	/* Llib/date.scm 551 */
																										BgL_testz00_6483 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 551 */
																										BgL_testz00_6483 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1467)
																											== ((long) 9));
																									}
																								if (BgL_testz00_6483)
																									{	/* Llib/date.scm 551 */
																										BgL_testz00_6482 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 551 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1467)
																												== ((long) 13)))
																											{	/* Llib/date.scm 551 */
																												BgL_testz00_6482 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 551 */
																												BgL_testz00_6482 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1467)
																													== ((long) 32));
																							}}}
																							if (BgL_testz00_6482)
																								{
																									long BgL_lastzd2matchzd2_6494;

																									BgL_lastzd2matchzd2_6494 =
																										BgL_newzd2matchzd2_1466;
																									BgL_lastzd2matchzd2_1464 =
																										BgL_lastzd2matchzd2_6494;
																									goto
																										BgL_zc3anonymousza32349ze3z83_1465;
																								}
																							else
																								{	/* Llib/date.scm 551 */
																									BgL_matchz00_1635 =
																										BgL_newzd2matchzd2_1466;
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Llib/date.scm 551 */
																			BgL_matchz00_1635 =
																				BgL_newzd2matchzd2_1501;
																		}
																}
														}
													}
												}
											else
												{	/* Llib/date.scm 551 */
													long BgL_newzd2matchzd2_3633;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_1509);
													BgL_newzd2matchzd2_3633 = ((long) 2);
													BgL_matchz00_1635 = BgL_newzd2matchzd2_3633;
						}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1429);
						switch (BgL_matchz00_1635)
							{
							case ((long) 2):

								{	/* Llib/date.scm 572 */
									obj_t BgL_auxz00_6497;

									{	/* Llib/date.scm 551 */
										bool_t BgL_testz00_6498;

										{	/* Llib/date.scm 551 */
											long BgL_arg2478z00_1624;

											BgL_arg2478z00_1624 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1429);
											BgL_testz00_6498 = (BgL_arg2478z00_1624 == ((long) 0));
										}
										if (BgL_testz00_6498)
											{	/* Llib/date.scm 551 */
												BgL_auxz00_6497 = BCNST(256);
											}
										else
											{	/* Llib/date.scm 551 */
												obj_t BgL_inputzd2portzd2_3686;

												BgL_inputzd2portzd2_3686 = BgL_inputzd2portzd2_1429;
												BgL_auxz00_6497 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3686));
											}
									}
									return
										BGl_parsezd2errorzd2zz__datez00
										(BGl_symbol3556z00zz__datez00, BGl_string3562z00zz__datez00,
										BgL_auxz00_6497, BgL_inputzd2portzd2_1429);
								}
								break;
							case ((long) 1):

								{	/* Llib/date.scm 555 */
									obj_t BgL_casezd2valuezd2_1643;

									BgL_casezd2valuezd2_1643 =
										rgc_buffer_symbol(BgL_inputzd2portzd2_1429);
									if (
										(BgL_casezd2valuezd2_1643 == BGl_symbol3563z00zz__datez00))
										{	/* Llib/date.scm 555 */
											return BINT(((long) 1));
										}
									else
										{	/* Llib/date.scm 555 */
											if (
												(BgL_casezd2valuezd2_1643 ==
													BGl_symbol3565z00zz__datez00))
												{	/* Llib/date.scm 555 */
													return BINT(((long) 2));
												}
											else
												{	/* Llib/date.scm 555 */
													if (
														(BgL_casezd2valuezd2_1643 ==
															BGl_symbol3567z00zz__datez00))
														{	/* Llib/date.scm 555 */
															return BINT(((long) 3));
														}
													else
														{	/* Llib/date.scm 555 */
															if (
																(BgL_casezd2valuezd2_1643 ==
																	BGl_symbol3569z00zz__datez00))
																{	/* Llib/date.scm 555 */
																	return BINT(((long) 4));
																}
															else
																{	/* Llib/date.scm 555 */
																	if (
																		(BgL_casezd2valuezd2_1643 ==
																			BGl_symbol3571z00zz__datez00))
																		{	/* Llib/date.scm 555 */
																			return BINT(((long) 5));
																		}
																	else
																		{	/* Llib/date.scm 555 */
																			if (
																				(BgL_casezd2valuezd2_1643 ==
																					BGl_symbol3573z00zz__datez00))
																				{	/* Llib/date.scm 555 */
																					return BINT(((long) 6));
																				}
																			else
																				{	/* Llib/date.scm 555 */
																					if (
																						(BgL_casezd2valuezd2_1643 ==
																							BGl_symbol3575z00zz__datez00))
																						{	/* Llib/date.scm 555 */
																							return BINT(((long) 7));
																						}
																					else
																						{	/* Llib/date.scm 555 */
																							if (
																								(BgL_casezd2valuezd2_1643 ==
																									BGl_symbol3577z00zz__datez00))
																								{	/* Llib/date.scm 555 */
																									return BINT(((long) 8));
																								}
																							else
																								{	/* Llib/date.scm 555 */
																									if (
																										(BgL_casezd2valuezd2_1643 ==
																											BGl_symbol3579z00zz__datez00))
																										{	/* Llib/date.scm 555 */
																											return BINT(((long) 9));
																										}
																									else
																										{	/* Llib/date.scm 555 */
																											if (
																												(BgL_casezd2valuezd2_1643
																													==
																													BGl_symbol3581z00zz__datez00))
																												{	/* Llib/date.scm 555 */
																													return
																														BINT(((long) 10));
																												}
																											else
																												{	/* Llib/date.scm 555 */
																													if (
																														(BgL_casezd2valuezd2_1643
																															==
																															BGl_symbol3583z00zz__datez00))
																														{	/* Llib/date.scm 555 */
																															return
																																BINT(((long)
																																	11));
																														}
																													else
																														{	/* Llib/date.scm 555 */
																															if (
																																(BgL_casezd2valuezd2_1643
																																	==
																																	BGl_symbol3585z00zz__datez00))
																																{	/* Llib/date.scm 555 */
																																	return
																																		BINT(((long)
																																			12));
																																}
																															else
																																{	/* Llib/date.scm 568 */
																																	obj_t
																																		BgL_arg2504z00_1656;
																																	obj_t
																																		BgL_arg2506z00_1658;
																																	obj_t
																																		BgL_arg2507z00_1659;
																																	BgL_arg2504z00_1656
																																		=
																																		BGl_symbol3556z00zz__datez00;
																																	{	/* Llib/date.scm 570 */
																																		obj_t
																																			BgL_res3358z00_3722;
																																		{	/* Llib/date.scm 570 */
																																			int
																																				BgL_arg2422z00_3716;
																																			{	/* Llib/date.scm 570 */
																																				int
																																					BgL_res3357z00_3718;
																																				{	/* Llib/date.scm 570 */
																																					obj_t
																																						BgL_inputzd2portzd2_3717;
																																					BgL_inputzd2portzd2_3717
																																						=
																																						BgL_inputzd2portzd2_1429;
																																					BgL_res3357z00_3718
																																						=
																																						(int)
																																						(RGC_BUFFER_LENGTH
																																						(BgL_inputzd2portzd2_3717));
																																				}
																																				BgL_arg2422z00_3716
																																					=
																																					BgL_res3357z00_3718;
																																			}
																																			BgL_res3358z00_3722
																																				=
																																				rgc_buffer_substring
																																				(BgL_inputzd2portzd2_1429,
																																				((long)
																																					0),
																																				(long)
																																				(BgL_arg2422z00_3716));
																																		}
																																		BgL_arg2506z00_1658
																																			=
																																			BgL_res3358z00_3722;
																																	}
																																	BgL_arg2507z00_1659
																																		=
																																		BgL_inputzd2portzd2_1429;
																																	return
																																		BGl_parsezd2errorzd2zz__datez00
																																		(BgL_arg2504z00_1656,
																																		BGl_string3562z00zz__datez00,
																																		BgL_arg2506z00_1658,
																																		BgL_arg2507z00_1659);
																																}
																														}
																												}
																										}
																								}
																						}
																				}
																		}
																}
														}
												}
										}
								}
								break;
							case ((long) 0):

								goto BgL_zc3anonymousza32485ze3z83_1634;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3559z00zz__datez00,
									BGl_string3560z00zz__datez00, BINT(BgL_matchz00_1635));
							}
					}
				}
			}
		}
	}



/* <anonymous:2236> */
	obj_t BGl_zc3anonymousza32236ze3z83zz__datez00(obj_t BgL_envz00_5152,
		obj_t BgL_inputzd2portzd2_5153)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 537 */
			{
				obj_t BgL_inputzd2portzd2_1217;

				BgL_inputzd2portzd2_1217 = BgL_inputzd2portzd2_5153;
				{
					obj_t BgL_inputzd2portzd2_1250;

					long BgL_lastzd2matchzd2_1251;

					obj_t BgL_inputzd2portzd2_1259;

					long BgL_lastzd2matchzd2_1260;

					obj_t BgL_inputzd2portzd2_1268;

					long BgL_lastzd2matchzd2_1269;

					obj_t BgL_inputzd2portzd2_1283;

					long BgL_lastzd2matchzd2_1284;

					obj_t BgL_inputzd2portzd2_1294;

					long BgL_lastzd2matchzd2_1295;

				BgL_zc3anonymousza32342ze3z83_1388:
					RGC_START_MATCH(BgL_inputzd2portzd2_1217);
					{	/* Llib/date.scm 537 */
						long BgL_matchz00_1389;

						BgL_inputzd2portzd2_1294 = BgL_inputzd2portzd2_1217;
						BgL_lastzd2matchzd2_1295 = ((long) 2);
					BgL_zc3anonymousza32262ze3z83_1296:
						{	/* Llib/date.scm 537 */
							int BgL_currentzd2charzd2_1297;

							BgL_currentzd2charzd2_1297 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1294);
							if (((long) (BgL_currentzd2charzd2_1297) == ((long) 0)))
								{	/* Llib/date.scm 537 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_1294))
										{	/* Llib/date.scm 537 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_1294))
												{

													goto BgL_zc3anonymousza32262ze3z83_1296;
												}
											else
												{	/* Llib/date.scm 537 */
													BgL_matchz00_1389 = BgL_lastzd2matchzd2_1295;
												}
										}
									else
										{	/* Llib/date.scm 537 */
											long BgL_newzd2matchzd2_3495;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_1294);
											BgL_newzd2matchzd2_3495 = ((long) 2);
											BgL_matchz00_1389 = BgL_newzd2matchzd2_3495;
								}}
							else
								{	/* Llib/date.scm 537 */
									bool_t BgL_testz00_6559;

									if (((long) (BgL_currentzd2charzd2_1297) >= ((long) 48)))
										{	/* Llib/date.scm 537 */
											BgL_testz00_6559 =
												((long) (BgL_currentzd2charzd2_1297) < ((long) 58));
										}
									else
										{	/* Llib/date.scm 537 */
											BgL_testz00_6559 = ((bool_t) 0);
										}
									if (BgL_testz00_6559)
										{	/* Llib/date.scm 537 */
											BgL_inputzd2portzd2_1250 = BgL_inputzd2portzd2_1294;
											BgL_lastzd2matchzd2_1251 = BgL_lastzd2matchzd2_1295;
										BgL_zc3anonymousza32237ze3z83_1252:
											{	/* Llib/date.scm 537 */
												long BgL_newzd2matchzd2_1253;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_1250);
												BgL_newzd2matchzd2_1253 = ((long) 1);
												{	/* Llib/date.scm 537 */
													int BgL_currentzd2charzd2_1254;

													BgL_currentzd2charzd2_1254 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1250);
													if (
														((long) (BgL_currentzd2charzd2_1254) == ((long) 0)))
														{	/* Llib/date.scm 537 */
															bool_t BgL_testz00_6570;

															{	/* Llib/date.scm 537 */
																bool_t BgL_res3346z00_3434;

																{	/* Llib/date.scm 537 */
																	obj_t BgL_inputzd2portzd2_3430;

																	BgL_inputzd2portzd2_3430 =
																		BgL_inputzd2portzd2_1250;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3430))
																		{	/* Llib/date.scm 537 */
																			BgL_res3346z00_3434 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3430);
																		}
																	else
																		{	/* Llib/date.scm 537 */
																			BgL_res3346z00_3434 = ((bool_t) 0);
																		}
																}
																BgL_testz00_6570 = BgL_res3346z00_3434;
															}
															if (BgL_testz00_6570)
																{

																	goto BgL_zc3anonymousza32237ze3z83_1252;
																}
															else
																{	/* Llib/date.scm 537 */
																	BgL_matchz00_1389 = BgL_newzd2matchzd2_1253;
																}
														}
													else
														{	/* Llib/date.scm 537 */
															bool_t BgL_testz00_6574;

															if (
																((long) (BgL_currentzd2charzd2_1254) >=
																	((long) 48)))
																{	/* Llib/date.scm 537 */
																	BgL_testz00_6574 =
																		(
																		(long) (BgL_currentzd2charzd2_1254) <
																		((long) 58));
																}
															else
																{	/* Llib/date.scm 537 */
																	BgL_testz00_6574 = ((bool_t) 0);
																}
															if (BgL_testz00_6574)
																{	/* Llib/date.scm 537 */
																	BgL_inputzd2portzd2_1259 =
																		BgL_inputzd2portzd2_1250;
																	BgL_lastzd2matchzd2_1260 =
																		BgL_newzd2matchzd2_1253;
																BgL_zc3anonymousza32242ze3z83_1261:
																	{	/* Llib/date.scm 537 */
																		long BgL_newzd2matchzd2_1262;

																		RGC_STOP_MATCH(BgL_inputzd2portzd2_1259);
																		BgL_newzd2matchzd2_1262 = ((long) 1);
																		{	/* Llib/date.scm 537 */
																			int BgL_currentzd2charzd2_1263;

																			BgL_currentzd2charzd2_1263 =
																				RGC_BUFFER_GET_CHAR
																				(BgL_inputzd2portzd2_1259);
																			if (((long) (BgL_currentzd2charzd2_1263)
																					== ((long) 0)))
																				{	/* Llib/date.scm 537 */
																					bool_t BgL_testz00_6585;

																					{	/* Llib/date.scm 537 */
																						bool_t BgL_res3347z00_3447;

																						{	/* Llib/date.scm 537 */
																							obj_t BgL_inputzd2portzd2_3443;

																							BgL_inputzd2portzd2_3443 =
																								BgL_inputzd2portzd2_1259;
																							if (RGC_BUFFER_EMPTY
																								(BgL_inputzd2portzd2_3443))
																								{	/* Llib/date.scm 537 */
																									BgL_res3347z00_3447 =
																										rgc_fill_buffer
																										(BgL_inputzd2portzd2_3443);
																								}
																							else
																								{	/* Llib/date.scm 537 */
																									BgL_res3347z00_3447 =
																										((bool_t) 0);
																								}
																						}
																						BgL_testz00_6585 =
																							BgL_res3347z00_3447;
																					}
																					if (BgL_testz00_6585)
																						{

																							goto
																								BgL_zc3anonymousza32242ze3z83_1261;
																						}
																					else
																						{	/* Llib/date.scm 537 */
																							BgL_matchz00_1389 =
																								BgL_newzd2matchzd2_1262;
																						}
																				}
																			else
																				{	/* Llib/date.scm 537 */
																					bool_t BgL_testz00_6589;

																					if (
																						((long) (BgL_currentzd2charzd2_1263)
																							>= ((long) 48)))
																						{	/* Llib/date.scm 537 */
																							BgL_testz00_6589 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_1263) <
																								((long) 58));
																						}
																					else
																						{	/* Llib/date.scm 537 */
																							BgL_testz00_6589 = ((bool_t) 0);
																						}
																					if (BgL_testz00_6589)
																						{
																							long BgL_lastzd2matchzd2_6595;

																							BgL_lastzd2matchzd2_6595 =
																								BgL_newzd2matchzd2_1262;
																							BgL_lastzd2matchzd2_1260 =
																								BgL_lastzd2matchzd2_6595;
																							goto
																								BgL_zc3anonymousza32242ze3z83_1261;
																						}
																					else
																						{	/* Llib/date.scm 537 */
																							BgL_matchz00_1389 =
																								BgL_newzd2matchzd2_1262;
																						}
																				}
																		}
																	}
																}
															else
																{	/* Llib/date.scm 537 */
																	BgL_matchz00_1389 = BgL_newzd2matchzd2_1253;
																}
														}
												}
											}
										}
									else
										{	/* Llib/date.scm 537 */
											bool_t BgL_testz00_6596;

											{	/* Llib/date.scm 537 */
												bool_t BgL_testz00_6597;

												if (
													((long) (BgL_currentzd2charzd2_1297) == ((long) 10)))
													{	/* Llib/date.scm 537 */
														BgL_testz00_6597 = ((bool_t) 1);
													}
												else
													{	/* Llib/date.scm 537 */
														BgL_testz00_6597 =
															(
															(long) (BgL_currentzd2charzd2_1297) ==
															((long) 9));
													}
												if (BgL_testz00_6597)
													{	/* Llib/date.scm 537 */
														BgL_testz00_6596 = ((bool_t) 1);
													}
												else
													{	/* Llib/date.scm 537 */
														if (
															((long) (BgL_currentzd2charzd2_1297) ==
																((long) 13)))
															{	/* Llib/date.scm 537 */
																BgL_testz00_6596 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 537 */
																BgL_testz00_6596 =
																	(
																	(long) (BgL_currentzd2charzd2_1297) ==
																	((long) 32));
											}}}
											if (BgL_testz00_6596)
												{	/* Llib/date.scm 537 */
													BgL_inputzd2portzd2_1268 = BgL_inputzd2portzd2_1294;
													BgL_lastzd2matchzd2_1269 = BgL_lastzd2matchzd2_1295;
												BgL_zc3anonymousza32247ze3z83_1270:
													{	/* Llib/date.scm 537 */
														long BgL_newzd2matchzd2_1271;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1268);
														BgL_newzd2matchzd2_1271 = ((long) 0);
														{	/* Llib/date.scm 537 */
															int BgL_currentzd2charzd2_1272;

															BgL_currentzd2charzd2_1272 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1268);
															if (
																((long) (BgL_currentzd2charzd2_1272) ==
																	((long) 0)))
																{	/* Llib/date.scm 537 */
																	bool_t BgL_testz00_6613;

																	{	/* Llib/date.scm 537 */
																		bool_t BgL_res3348z00_3460;

																		{	/* Llib/date.scm 537 */
																			obj_t BgL_inputzd2portzd2_3456;

																			BgL_inputzd2portzd2_3456 =
																				BgL_inputzd2portzd2_1268;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3456))
																				{	/* Llib/date.scm 537 */
																					BgL_res3348z00_3460 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_3456);
																				}
																			else
																				{	/* Llib/date.scm 537 */
																					BgL_res3348z00_3460 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_6613 = BgL_res3348z00_3460;
																	}
																	if (BgL_testz00_6613)
																		{

																			goto BgL_zc3anonymousza32247ze3z83_1270;
																		}
																	else
																		{	/* Llib/date.scm 537 */
																			BgL_matchz00_1389 =
																				BgL_newzd2matchzd2_1271;
																		}
																}
															else
																{	/* Llib/date.scm 537 */
																	bool_t BgL_testz00_6617;

																	{	/* Llib/date.scm 537 */
																		bool_t BgL_testz00_6618;

																		if (
																			((long) (BgL_currentzd2charzd2_1272) ==
																				((long) 10)))
																			{	/* Llib/date.scm 537 */
																				BgL_testz00_6618 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 537 */
																				BgL_testz00_6618 =
																					(
																					(long) (BgL_currentzd2charzd2_1272) ==
																					((long) 9));
																			}
																		if (BgL_testz00_6618)
																			{	/* Llib/date.scm 537 */
																				BgL_testz00_6617 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/date.scm 537 */
																				if (
																					((long) (BgL_currentzd2charzd2_1272)
																						== ((long) 13)))
																					{	/* Llib/date.scm 537 */
																						BgL_testz00_6617 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 537 */
																						BgL_testz00_6617 =
																							(
																							(long)
																							(BgL_currentzd2charzd2_1272) ==
																							((long) 32));
																	}}}
																	if (BgL_testz00_6617)
																		{	/* Llib/date.scm 537 */
																			BgL_inputzd2portzd2_1283 =
																				BgL_inputzd2portzd2_1268;
																			BgL_lastzd2matchzd2_1284 =
																				BgL_newzd2matchzd2_1271;
																		BgL_zc3anonymousza32255ze3z83_1285:
																			{	/* Llib/date.scm 537 */
																				long BgL_newzd2matchzd2_1286;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1283);
																				BgL_newzd2matchzd2_1286 = ((long) 0);
																				{	/* Llib/date.scm 537 */
																					int BgL_currentzd2charzd2_1287;

																					BgL_currentzd2charzd2_1287 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1283);
																					if (((long)
																							(BgL_currentzd2charzd2_1287) ==
																							((long) 0)))
																						{	/* Llib/date.scm 537 */
																							bool_t BgL_testz00_6634;

																							{	/* Llib/date.scm 537 */
																								bool_t BgL_res3349z00_3479;

																								{	/* Llib/date.scm 537 */
																									obj_t
																										BgL_inputzd2portzd2_3475;
																									BgL_inputzd2portzd2_3475 =
																										BgL_inputzd2portzd2_1283;
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_3475))
																										{	/* Llib/date.scm 537 */
																											BgL_res3349z00_3479 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_3475);
																										}
																									else
																										{	/* Llib/date.scm 537 */
																											BgL_res3349z00_3479 =
																												((bool_t) 0);
																										}
																								}
																								BgL_testz00_6634 =
																									BgL_res3349z00_3479;
																							}
																							if (BgL_testz00_6634)
																								{

																									goto
																										BgL_zc3anonymousza32255ze3z83_1285;
																								}
																							else
																								{	/* Llib/date.scm 537 */
																									BgL_matchz00_1389 =
																										BgL_newzd2matchzd2_1286;
																								}
																						}
																					else
																						{	/* Llib/date.scm 537 */
																							bool_t BgL_testz00_6638;

																							{	/* Llib/date.scm 537 */
																								bool_t BgL_testz00_6639;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_1287)
																										== ((long) 10)))
																									{	/* Llib/date.scm 537 */
																										BgL_testz00_6639 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 537 */
																										BgL_testz00_6639 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_1287)
																											== ((long) 9));
																									}
																								if (BgL_testz00_6639)
																									{	/* Llib/date.scm 537 */
																										BgL_testz00_6638 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 537 */
																										if (
																											((long)
																												(BgL_currentzd2charzd2_1287)
																												== ((long) 13)))
																											{	/* Llib/date.scm 537 */
																												BgL_testz00_6638 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 537 */
																												BgL_testz00_6638 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1287)
																													== ((long) 32));
																							}}}
																							if (BgL_testz00_6638)
																								{
																									long BgL_lastzd2matchzd2_6650;

																									BgL_lastzd2matchzd2_6650 =
																										BgL_newzd2matchzd2_1286;
																									BgL_lastzd2matchzd2_1284 =
																										BgL_lastzd2matchzd2_6650;
																									goto
																										BgL_zc3anonymousza32255ze3z83_1285;
																								}
																							else
																								{	/* Llib/date.scm 537 */
																									BgL_matchz00_1389 =
																										BgL_newzd2matchzd2_1286;
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Llib/date.scm 537 */
																			BgL_matchz00_1389 =
																				BgL_newzd2matchzd2_1271;
																		}
																}
														}
													}
												}
											else
												{	/* Llib/date.scm 537 */
													long BgL_newzd2matchzd2_3511;

													RGC_STOP_MATCH(BgL_inputzd2portzd2_1294);
													BgL_newzd2matchzd2_3511 = ((long) 2);
													BgL_matchz00_1389 = BgL_newzd2matchzd2_3511;
						}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_1217);
						switch (BgL_matchz00_1389)
							{
							case ((long) 2):

								{	/* Llib/date.scm 543 */
									obj_t BgL_auxz00_6653;

									{	/* Llib/date.scm 537 */
										bool_t BgL_testz00_6654;

										{	/* Llib/date.scm 537 */
											long BgL_arg2335z00_1378;

											BgL_arg2335z00_1378 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_1217);
											BgL_testz00_6654 = (BgL_arg2335z00_1378 == ((long) 0));
										}
										if (BgL_testz00_6654)
											{	/* Llib/date.scm 537 */
												BgL_auxz00_6653 = BCNST(256);
											}
										else
											{	/* Llib/date.scm 537 */
												obj_t BgL_inputzd2portzd2_3517;

												BgL_inputzd2portzd2_3517 = BgL_inputzd2portzd2_1217;
												BgL_auxz00_6653 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3517));
											}
									}
									return
										BGl_parsezd2errorzd2zz__datez00
										(BGl_symbol3556z00zz__datez00, BGl_string3587z00zz__datez00,
										BgL_auxz00_6653, BgL_inputzd2portzd2_1217);
								}
								break;
							case ((long) 1):

								{	/* Llib/date.scm 541 */
									obj_t BgL_inputzd2portzd2_3521;

									BgL_inputzd2portzd2_3521 = BgL_inputzd2portzd2_1217;
									return BINT(rgc_buffer_fixnum(BgL_inputzd2portzd2_3521));
								}
								break;
							case ((long) 0):

								goto BgL_zc3anonymousza32342ze3z83_1388;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3559z00zz__datez00,
									BGl_string3560z00zz__datez00, BINT(BgL_matchz00_1389));
							}
					}
				}
			}
		}
	}



/* <anonymous:2058> */
	obj_t BGl_zc3anonymousza32058ze3z83zz__datez00(obj_t BgL_envz00_5154,
		obj_t BgL_inputzd2portzd2_5155)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 495 */
			{
				obj_t BgL_inputzd2portzd2_889;

				BgL_inputzd2portzd2_889 = BgL_inputzd2portzd2_5155;
				{
					obj_t BgL_inputzd2portzd2_927;

					long BgL_lastzd2matchzd2_928;

					obj_t BgL_inputzd2portzd2_943;

					long BgL_lastzd2matchzd2_944;

					obj_t BgL_inputzd2portzd2_960;

					long BgL_lastzd2matchzd2_961;

					obj_t BgL_inputzd2portzd2_975;

					long BgL_lastzd2matchzd2_976;

					obj_t BgL_inputzd2portzd2_997;

					long BgL_lastzd2matchzd2_998;

					obj_t BgL_inputzd2portzd2_1007;

					long BgL_lastzd2matchzd2_1008;

					obj_t BgL_inputzd2portzd2_1016;

					long BgL_lastzd2matchzd2_1017;

					obj_t BgL_inputzd2portzd2_1025;

					long BgL_lastzd2matchzd2_1026;

					obj_t BgL_inputzd2portzd2_1032;

					long BgL_lastzd2matchzd2_1033;

				BgL_zc3anonymousza32204ze3z83_1124:
					RGC_START_MATCH(BgL_inputzd2portzd2_889);
					{	/* Llib/date.scm 495 */
						long BgL_matchz00_1125;

						BgL_inputzd2portzd2_975 = BgL_inputzd2portzd2_889;
						BgL_lastzd2matchzd2_976 = ((long) 3);
					BgL_zc3anonymousza32091ze3z83_977:
						{	/* Llib/date.scm 495 */
							int BgL_currentzd2charzd2_978;

							BgL_currentzd2charzd2_978 =
								RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_975);
							if (((long) (BgL_currentzd2charzd2_978) == ((long) 0)))
								{	/* Llib/date.scm 495 */
									if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_975))
										{	/* Llib/date.scm 495 */
											if (rgc_fill_buffer(BgL_inputzd2portzd2_975))
												{

													goto BgL_zc3anonymousza32091ze3z83_977;
												}
											else
												{	/* Llib/date.scm 495 */
													BgL_matchz00_1125 = BgL_lastzd2matchzd2_976;
												}
										}
									else
										{	/* Llib/date.scm 495 */
											long BgL_newzd2matchzd2_3273;

											RGC_STOP_MATCH(BgL_inputzd2portzd2_975);
											BgL_newzd2matchzd2_3273 = ((long) 3);
											BgL_matchz00_1125 = BgL_newzd2matchzd2_3273;
								}}
							else
								{	/* Llib/date.scm 495 */
									bool_t BgL_testz00_6675;

									if (((long) (BgL_currentzd2charzd2_978) == ((long) 70)))
										{	/* Llib/date.scm 495 */
											BgL_testz00_6675 = ((bool_t) 1);
										}
									else
										{	/* Llib/date.scm 495 */
											if (((long) (BgL_currentzd2charzd2_978) == ((long) 77)))
												{	/* Llib/date.scm 495 */
													BgL_testz00_6675 = ((bool_t) 1);
												}
											else
												{	/* Llib/date.scm 495 */
													bool_t BgL_testz00_6682;

													if (
														((long) (BgL_currentzd2charzd2_978) == ((long) 84)))
														{	/* Llib/date.scm 495 */
															BgL_testz00_6682 = ((bool_t) 1);
														}
													else
														{	/* Llib/date.scm 495 */
															BgL_testz00_6682 =
																(
																(long) (BgL_currentzd2charzd2_978) ==
																((long) 83));
														}
													if (BgL_testz00_6682)
														{	/* Llib/date.scm 495 */
															BgL_testz00_6675 = ((bool_t) 1);
														}
													else
														{	/* Llib/date.scm 495 */
															BgL_testz00_6675 =
																(
																(long) (BgL_currentzd2charzd2_978) ==
																((long) 87));
										}}}
									if (BgL_testz00_6675)
										{	/* Llib/date.scm 495 */
											BgL_inputzd2portzd2_943 = BgL_inputzd2portzd2_975;
											BgL_lastzd2matchzd2_944 = BgL_lastzd2matchzd2_976;
										BgL_zc3anonymousza32071ze3z83_945:
											{	/* Llib/date.scm 495 */
												long BgL_newzd2matchzd2_946;

												RGC_STOP_MATCH(BgL_inputzd2portzd2_943);
												BgL_newzd2matchzd2_946 = ((long) 3);
												{	/* Llib/date.scm 495 */
													int BgL_currentzd2charzd2_947;

													BgL_currentzd2charzd2_947 =
														RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_943);
													if (
														((long) (BgL_currentzd2charzd2_947) == ((long) 0)))
														{	/* Llib/date.scm 495 */
															bool_t BgL_testz00_6695;

															{	/* Llib/date.scm 495 */
																bool_t BgL_res3329z00_3226;

																{	/* Llib/date.scm 495 */
																	obj_t BgL_inputzd2portzd2_3222;

																	BgL_inputzd2portzd2_3222 =
																		BgL_inputzd2portzd2_943;
																	if (RGC_BUFFER_EMPTY
																		(BgL_inputzd2portzd2_3222))
																		{	/* Llib/date.scm 495 */
																			BgL_res3329z00_3226 =
																				rgc_fill_buffer
																				(BgL_inputzd2portzd2_3222);
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			BgL_res3329z00_3226 = ((bool_t) 0);
																		}
																}
																BgL_testz00_6695 = BgL_res3329z00_3226;
															}
															if (BgL_testz00_6695)
																{

																	goto BgL_zc3anonymousza32071ze3z83_945;
																}
															else
																{	/* Llib/date.scm 495 */
																	BgL_matchz00_1125 = BgL_newzd2matchzd2_946;
																}
														}
													else
														{	/* Llib/date.scm 495 */
															bool_t BgL_testz00_6699;

															if (
																((long) (BgL_currentzd2charzd2_947) ==
																	((long) 97)))
																{	/* Llib/date.scm 495 */
																	BgL_testz00_6699 = ((bool_t) 1);
																}
															else
																{	/* Llib/date.scm 495 */
																	bool_t BgL_testz00_6703;

																	if (
																		((long) (BgL_currentzd2charzd2_947) ==
																			((long) 101)))
																		{	/* Llib/date.scm 495 */
																			BgL_testz00_6703 = ((bool_t) 1);
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			BgL_testz00_6703 =
																				(
																				(long) (BgL_currentzd2charzd2_947) ==
																				((long) 100));
																		}
																	if (BgL_testz00_6703)
																		{	/* Llib/date.scm 495 */
																			BgL_testz00_6699 = ((bool_t) 1);
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			bool_t BgL_testz00_6709;

																			if (
																				((long) (BgL_currentzd2charzd2_947) ==
																					((long) 105)))
																				{	/* Llib/date.scm 495 */
																					BgL_testz00_6709 = ((bool_t) 1);
																				}
																			else
																				{	/* Llib/date.scm 495 */
																					BgL_testz00_6709 =
																						(
																						(long) (BgL_currentzd2charzd2_947)
																						== ((long) 104));
																				}
																			if (BgL_testz00_6709)
																				{	/* Llib/date.scm 495 */
																					BgL_testz00_6699 = ((bool_t) 1);
																				}
																			else
																				{	/* Llib/date.scm 495 */
																					bool_t BgL_testz00_6715;

																					if (
																						((long) (BgL_currentzd2charzd2_947)
																							== ((long) 111)))
																						{	/* Llib/date.scm 495 */
																							BgL_testz00_6715 = ((bool_t) 1);
																						}
																					else
																						{	/* Llib/date.scm 495 */
																							BgL_testz00_6715 =
																								(
																								(long)
																								(BgL_currentzd2charzd2_947) ==
																								((long) 110));
																						}
																					if (BgL_testz00_6715)
																						{	/* Llib/date.scm 495 */
																							BgL_testz00_6699 = ((bool_t) 1);
																						}
																					else
																						{	/* Llib/date.scm 495 */
																							if (
																								((long)
																									(BgL_currentzd2charzd2_947) ==
																									((long) 114)))
																								{	/* Llib/date.scm 495 */
																									BgL_testz00_6699 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									bool_t
																										BgL__ortest_1851z00_956;
																									BgL__ortest_1851z00_956 =
																										((long)
																										(BgL_currentzd2charzd2_947)
																										== ((long) 117));
																									if (BgL__ortest_1851z00_956)
																										{	/* Llib/date.scm 495 */
																											BgL_testz00_6699 =
																												BgL__ortest_1851z00_956;
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_testz00_6699 =
																												(
																												(long)
																												(BgL_currentzd2charzd2_947)
																												== ((long) 116));
																}}}}}}
															if (BgL_testz00_6699)
																{	/* Llib/date.scm 495 */
																	BgL_inputzd2portzd2_927 =
																		BgL_inputzd2portzd2_943;
																	BgL_lastzd2matchzd2_928 =
																		BgL_newzd2matchzd2_946;
																BgL_zc3anonymousza32059ze3z83_929:
																	{	/* Llib/date.scm 495 */
																		int BgL_currentzd2charzd2_930;

																		BgL_currentzd2charzd2_930 =
																			RGC_BUFFER_GET_CHAR
																			(BgL_inputzd2portzd2_927);
																		if (((long) (BgL_currentzd2charzd2_930) ==
																				((long) 0)))
																			{	/* Llib/date.scm 495 */
																				bool_t BgL_testz00_6733;

																				{	/* Llib/date.scm 495 */
																					bool_t BgL_res3328z00_3197;

																					{	/* Llib/date.scm 495 */
																						obj_t BgL_inputzd2portzd2_3193;

																						BgL_inputzd2portzd2_3193 =
																							BgL_inputzd2portzd2_927;
																						if (RGC_BUFFER_EMPTY
																							(BgL_inputzd2portzd2_3193))
																							{	/* Llib/date.scm 495 */
																								BgL_res3328z00_3197 =
																									rgc_fill_buffer
																									(BgL_inputzd2portzd2_3193);
																							}
																						else
																							{	/* Llib/date.scm 495 */
																								BgL_res3328z00_3197 =
																									((bool_t) 0);
																							}
																					}
																					BgL_testz00_6733 =
																						BgL_res3328z00_3197;
																				}
																				if (BgL_testz00_6733)
																					{

																						goto
																							BgL_zc3anonymousza32059ze3z83_929;
																					}
																				else
																					{	/* Llib/date.scm 495 */
																						BgL_matchz00_1125 =
																							BgL_lastzd2matchzd2_928;
																					}
																			}
																		else
																			{	/* Llib/date.scm 495 */
																				bool_t BgL_testz00_6737;

																				if (
																					((long) (BgL_currentzd2charzd2_930) ==
																						((long) 97)))
																					{	/* Llib/date.scm 495 */
																						BgL_testz00_6737 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 495 */
																						bool_t BgL_testz00_6741;

																						if (
																							((long)
																								(BgL_currentzd2charzd2_930) ==
																								((long) 101)))
																							{	/* Llib/date.scm 495 */
																								BgL_testz00_6741 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 495 */
																								BgL_testz00_6741 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_930) ==
																									((long) 100));
																							}
																						if (BgL_testz00_6741)
																							{	/* Llib/date.scm 495 */
																								BgL_testz00_6737 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 495 */
																								bool_t BgL_testz00_6747;

																								if (
																									((long)
																										(BgL_currentzd2charzd2_930)
																										== ((long) 105)))
																									{	/* Llib/date.scm 495 */
																										BgL_testz00_6747 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 495 */
																										BgL_testz00_6747 =
																											(
																											(long)
																											(BgL_currentzd2charzd2_930)
																											== ((long) 104));
																									}
																								if (BgL_testz00_6747)
																									{	/* Llib/date.scm 495 */
																										BgL_testz00_6737 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Llib/date.scm 495 */
																										bool_t BgL_testz00_6753;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_930)
																												== ((long) 111)))
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6753 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6753 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_930)
																													== ((long) 110));
																											}
																										if (BgL_testz00_6753)
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6737 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 495 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_930)
																														== ((long) 114)))
																													{	/* Llib/date.scm 495 */
																														BgL_testz00_6737 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 495 */
																														bool_t
																															BgL__ortest_1850z00_939;
																														BgL__ortest_1850z00_939
																															=
																															((long)
																															(BgL_currentzd2charzd2_930)
																															== ((long) 117));
																														if (BgL__ortest_1850z00_939)
																															{	/* Llib/date.scm 495 */
																																BgL_testz00_6737
																																	=
																																	BgL__ortest_1850z00_939;
																															}
																														else
																															{	/* Llib/date.scm 495 */
																																BgL_testz00_6737
																																	=
																																	((long)
																																	(BgL_currentzd2charzd2_930)
																																	==
																																	((long) 116));
																					}}}}}}
																				if (BgL_testz00_6737)
																					{	/* Llib/date.scm 495 */
																						BgL_inputzd2portzd2_1025 =
																							BgL_inputzd2portzd2_927;
																						BgL_lastzd2matchzd2_1026 =
																							BgL_lastzd2matchzd2_928;
																					BgL_zc3anonymousza32124ze3z83_1027:
																						{	/* Llib/date.scm 495 */
																							int BgL_currentzd2charzd2_1028;

																							BgL_currentzd2charzd2_1028 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1025);
																							if (((long)
																									(BgL_currentzd2charzd2_1028)
																									== ((long) 0)))
																								{	/* Llib/date.scm 495 */
																									bool_t BgL_testz00_6771;

																									{	/* Llib/date.scm 495 */
																										bool_t BgL_res3334z00_3356;

																										{	/* Llib/date.scm 495 */
																											obj_t
																												BgL_inputzd2portzd2_3352;
																											BgL_inputzd2portzd2_3352 =
																												BgL_inputzd2portzd2_1025;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_3352))
																												{	/* Llib/date.scm 495 */
																													BgL_res3334z00_3356 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_3352);
																												}
																											else
																												{	/* Llib/date.scm 495 */
																													BgL_res3334z00_3356 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_6771 =
																											BgL_res3334z00_3356;
																									}
																									if (BgL_testz00_6771)
																										{

																											goto
																												BgL_zc3anonymousza32124ze3z83_1027;
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_matchz00_1125 =
																												BgL_lastzd2matchzd2_1026;
																										}
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									if (
																										((long)
																											(BgL_currentzd2charzd2_1028)
																											== ((long) 44)))
																										{	/* Llib/date.scm 495 */
																											BgL_inputzd2portzd2_997 =
																												BgL_inputzd2portzd2_1025;
																											BgL_lastzd2matchzd2_998 =
																												BgL_lastzd2matchzd2_1026;
																										BgL_zc3anonymousza32107ze3z83_999:
																											{	/* Llib/date.scm 495 */
																												int
																													BgL_currentzd2charzd2_1000;
																												BgL_currentzd2charzd2_1000
																													=
																													RGC_BUFFER_GET_CHAR
																													(BgL_inputzd2portzd2_997);
																												if (((long)
																														(BgL_currentzd2charzd2_1000)
																														== ((long) 0)))
																													{	/* Llib/date.scm 495 */
																														bool_t
																															BgL_testz00_6782;
																														{	/* Llib/date.scm 495 */
																															bool_t
																																BgL_res3331z00_3310;
																															{	/* Llib/date.scm 495 */
																																obj_t
																																	BgL_inputzd2portzd2_3306;
																																BgL_inputzd2portzd2_3306
																																	=
																																	BgL_inputzd2portzd2_997;
																																if (RGC_BUFFER_EMPTY(BgL_inputzd2portzd2_3306))
																																	{	/* Llib/date.scm 495 */
																																		BgL_res3331z00_3310
																																			=
																																			rgc_fill_buffer
																																			(BgL_inputzd2portzd2_3306);
																																	}
																																else
																																	{	/* Llib/date.scm 495 */
																																		BgL_res3331z00_3310
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															BgL_testz00_6782 =
																																BgL_res3331z00_3310;
																														}
																														if (BgL_testz00_6782)
																															{

																																goto
																																	BgL_zc3anonymousza32107ze3z83_999;
																															}
																														else
																															{	/* Llib/date.scm 495 */
																																BgL_matchz00_1125
																																	=
																																	BgL_lastzd2matchzd2_998;
																															}
																													}
																												else
																													{	/* Llib/date.scm 495 */
																														bool_t
																															BgL_testz00_6786;
																														{	/* Llib/date.scm 495 */
																															bool_t
																																BgL_testz00_6787;
																															if (((long)
																																	(BgL_currentzd2charzd2_1000)
																																	==
																																	((long) 10)))
																																{	/* Llib/date.scm 495 */
																																	BgL_testz00_6787
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Llib/date.scm 495 */
																																	BgL_testz00_6787
																																		=
																																		((long)
																																		(BgL_currentzd2charzd2_1000)
																																		==
																																		((long) 9));
																																}
																															if (BgL_testz00_6787)
																																{	/* Llib/date.scm 495 */
																																	BgL_testz00_6786
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Llib/date.scm 495 */
																																	if (
																																		((long)
																																			(BgL_currentzd2charzd2_1000)
																																			==
																																			((long)
																																				13)))
																																		{	/* Llib/date.scm 495 */
																																			BgL_testz00_6786
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Llib/date.scm 495 */
																																			BgL_testz00_6786
																																				=
																																				((long)
																																				(BgL_currentzd2charzd2_1000)
																																				==
																																				((long)
																																					32));
																														}}}
																														if (BgL_testz00_6786)
																															{	/* Llib/date.scm 495 */
																																long
																																	BgL_newzd2matchzd2_3321;
																																RGC_STOP_MATCH
																																	(BgL_inputzd2portzd2_997);
																																BgL_newzd2matchzd2_3321
																																	= ((long) 1);
																																BgL_matchz00_1125
																																	=
																																	BgL_newzd2matchzd2_3321;
																															}
																														else
																															{	/* Llib/date.scm 495 */
																																BgL_matchz00_1125
																																	=
																																	BgL_lastzd2matchzd2_998;
																															}
																													}
																											}
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_matchz00_1125 =
																												BgL_lastzd2matchzd2_1026;
																										}
																								}
																						}
																					}
																				else
																					{	/* Llib/date.scm 495 */
																						BgL_matchz00_1125 =
																							BgL_lastzd2matchzd2_928;
																					}
																			}
																	}
																}
															else
																{	/* Llib/date.scm 495 */
																	BgL_matchz00_1125 = BgL_newzd2matchzd2_946;
																}
														}
												}
											}
										}
									else
										{	/* Llib/date.scm 495 */
											bool_t BgL_testz00_6799;

											if (((long) (BgL_currentzd2charzd2_978) >= ((long) 48)))
												{	/* Llib/date.scm 495 */
													BgL_testz00_6799 =
														((long) (BgL_currentzd2charzd2_978) < ((long) 58));
												}
											else
												{	/* Llib/date.scm 495 */
													BgL_testz00_6799 = ((bool_t) 0);
												}
											if (BgL_testz00_6799)
												{	/* Llib/date.scm 495 */
													BgL_inputzd2portzd2_1007 = BgL_inputzd2portzd2_975;
													BgL_lastzd2matchzd2_1008 = BgL_lastzd2matchzd2_976;
												BgL_zc3anonymousza32114ze3z83_1009:
													{	/* Llib/date.scm 495 */
														long BgL_newzd2matchzd2_1010;

														RGC_STOP_MATCH(BgL_inputzd2portzd2_1007);
														BgL_newzd2matchzd2_1010 = ((long) 2);
														{	/* Llib/date.scm 495 */
															int BgL_currentzd2charzd2_1011;

															BgL_currentzd2charzd2_1011 =
																RGC_BUFFER_GET_CHAR(BgL_inputzd2portzd2_1007);
															if (
																((long) (BgL_currentzd2charzd2_1011) ==
																	((long) 0)))
																{	/* Llib/date.scm 495 */
																	bool_t BgL_testz00_6810;

																	{	/* Llib/date.scm 495 */
																		bool_t BgL_res3332z00_3331;

																		{	/* Llib/date.scm 495 */
																			obj_t BgL_inputzd2portzd2_3327;

																			BgL_inputzd2portzd2_3327 =
																				BgL_inputzd2portzd2_1007;
																			if (RGC_BUFFER_EMPTY
																				(BgL_inputzd2portzd2_3327))
																				{	/* Llib/date.scm 495 */
																					BgL_res3332z00_3331 =
																						rgc_fill_buffer
																						(BgL_inputzd2portzd2_3327);
																				}
																			else
																				{	/* Llib/date.scm 495 */
																					BgL_res3332z00_3331 = ((bool_t) 0);
																				}
																		}
																		BgL_testz00_6810 = BgL_res3332z00_3331;
																	}
																	if (BgL_testz00_6810)
																		{

																			goto BgL_zc3anonymousza32114ze3z83_1009;
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			BgL_matchz00_1125 =
																				BgL_newzd2matchzd2_1010;
																		}
																}
															else
																{	/* Llib/date.scm 495 */
																	bool_t BgL_testz00_6814;

																	if (
																		((long) (BgL_currentzd2charzd2_1011) >=
																			((long) 48)))
																		{	/* Llib/date.scm 495 */
																			BgL_testz00_6814 =
																				(
																				(long) (BgL_currentzd2charzd2_1011) <
																				((long) 58));
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			BgL_testz00_6814 = ((bool_t) 0);
																		}
																	if (BgL_testz00_6814)
																		{	/* Llib/date.scm 495 */
																			BgL_inputzd2portzd2_1016 =
																				BgL_inputzd2portzd2_1007;
																			BgL_lastzd2matchzd2_1017 =
																				BgL_newzd2matchzd2_1010;
																		BgL_zc3anonymousza32119ze3z83_1018:
																			{	/* Llib/date.scm 495 */
																				long BgL_newzd2matchzd2_1019;

																				RGC_STOP_MATCH
																					(BgL_inputzd2portzd2_1016);
																				BgL_newzd2matchzd2_1019 = ((long) 2);
																				{	/* Llib/date.scm 495 */
																					int BgL_currentzd2charzd2_1020;

																					BgL_currentzd2charzd2_1020 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_inputzd2portzd2_1016);
																					if (((long)
																							(BgL_currentzd2charzd2_1020) ==
																							((long) 0)))
																						{	/* Llib/date.scm 495 */
																							bool_t BgL_testz00_6825;

																							{	/* Llib/date.scm 495 */
																								bool_t BgL_res3333z00_3344;

																								{	/* Llib/date.scm 495 */
																									obj_t
																										BgL_inputzd2portzd2_3340;
																									BgL_inputzd2portzd2_3340 =
																										BgL_inputzd2portzd2_1016;
																									if (RGC_BUFFER_EMPTY
																										(BgL_inputzd2portzd2_3340))
																										{	/* Llib/date.scm 495 */
																											BgL_res3333z00_3344 =
																												rgc_fill_buffer
																												(BgL_inputzd2portzd2_3340);
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_res3333z00_3344 =
																												((bool_t) 0);
																										}
																								}
																								BgL_testz00_6825 =
																									BgL_res3333z00_3344;
																							}
																							if (BgL_testz00_6825)
																								{

																									goto
																										BgL_zc3anonymousza32119ze3z83_1018;
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									BgL_matchz00_1125 =
																										BgL_newzd2matchzd2_1019;
																								}
																						}
																					else
																						{	/* Llib/date.scm 495 */
																							bool_t BgL_testz00_6829;

																							if (
																								((long)
																									(BgL_currentzd2charzd2_1020)
																									>= ((long) 48)))
																								{	/* Llib/date.scm 495 */
																									BgL_testz00_6829 =
																										(
																										(long)
																										(BgL_currentzd2charzd2_1020)
																										< ((long) 58));
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									BgL_testz00_6829 =
																										((bool_t) 0);
																								}
																							if (BgL_testz00_6829)
																								{
																									long BgL_lastzd2matchzd2_6835;

																									BgL_lastzd2matchzd2_6835 =
																										BgL_newzd2matchzd2_1019;
																									BgL_lastzd2matchzd2_1017 =
																										BgL_lastzd2matchzd2_6835;
																									goto
																										BgL_zc3anonymousza32119ze3z83_1018;
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									BgL_matchz00_1125 =
																										BgL_newzd2matchzd2_1019;
																								}
																						}
																				}
																			}
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			BgL_matchz00_1125 =
																				BgL_newzd2matchzd2_1010;
																		}
																}
														}
													}
												}
											else
												{	/* Llib/date.scm 495 */
													bool_t BgL_testz00_6836;

													{	/* Llib/date.scm 495 */
														bool_t BgL_testz00_6837;

														if (
															((long) (BgL_currentzd2charzd2_978) ==
																((long) 10)))
															{	/* Llib/date.scm 495 */
																BgL_testz00_6837 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 495 */
																BgL_testz00_6837 =
																	(
																	(long) (BgL_currentzd2charzd2_978) ==
																	((long) 9));
															}
														if (BgL_testz00_6837)
															{	/* Llib/date.scm 495 */
																BgL_testz00_6836 = ((bool_t) 1);
															}
														else
															{	/* Llib/date.scm 495 */
																if (
																	((long) (BgL_currentzd2charzd2_978) ==
																		((long) 13)))
																	{	/* Llib/date.scm 495 */
																		BgL_testz00_6836 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/date.scm 495 */
																		BgL_testz00_6836 =
																			(
																			(long) (BgL_currentzd2charzd2_978) ==
																			((long) 32));
													}}}
													if (BgL_testz00_6836)
														{	/* Llib/date.scm 495 */
															BgL_inputzd2portzd2_960 = BgL_inputzd2portzd2_975;
															BgL_lastzd2matchzd2_961 = BgL_lastzd2matchzd2_976;
														BgL_zc3anonymousza32083ze3z83_962:
															{	/* Llib/date.scm 495 */
																long BgL_newzd2matchzd2_963;

																RGC_STOP_MATCH(BgL_inputzd2portzd2_960);
																BgL_newzd2matchzd2_963 = ((long) 0);
																{	/* Llib/date.scm 495 */
																	int BgL_currentzd2charzd2_964;

																	BgL_currentzd2charzd2_964 =
																		RGC_BUFFER_GET_CHAR
																		(BgL_inputzd2portzd2_960);
																	if (((long) (BgL_currentzd2charzd2_964) ==
																			((long) 0)))
																		{	/* Llib/date.scm 495 */
																			bool_t BgL_testz00_6853;

																			{	/* Llib/date.scm 495 */
																				bool_t BgL_res3330z00_3255;

																				{	/* Llib/date.scm 495 */
																					obj_t BgL_inputzd2portzd2_3251;

																					BgL_inputzd2portzd2_3251 =
																						BgL_inputzd2portzd2_960;
																					if (RGC_BUFFER_EMPTY
																						(BgL_inputzd2portzd2_3251))
																						{	/* Llib/date.scm 495 */
																							BgL_res3330z00_3255 =
																								rgc_fill_buffer
																								(BgL_inputzd2portzd2_3251);
																						}
																					else
																						{	/* Llib/date.scm 495 */
																							BgL_res3330z00_3255 =
																								((bool_t) 0);
																						}
																				}
																				BgL_testz00_6853 = BgL_res3330z00_3255;
																			}
																			if (BgL_testz00_6853)
																				{

																					goto
																						BgL_zc3anonymousza32083ze3z83_962;
																				}
																			else
																				{	/* Llib/date.scm 495 */
																					BgL_matchz00_1125 =
																						BgL_newzd2matchzd2_963;
																				}
																		}
																	else
																		{	/* Llib/date.scm 495 */
																			bool_t BgL_testz00_6857;

																			{	/* Llib/date.scm 495 */
																				bool_t BgL_testz00_6858;

																				if (
																					((long) (BgL_currentzd2charzd2_964) ==
																						((long) 10)))
																					{	/* Llib/date.scm 495 */
																						BgL_testz00_6858 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 495 */
																						BgL_testz00_6858 =
																							(
																							(long) (BgL_currentzd2charzd2_964)
																							== ((long) 9));
																					}
																				if (BgL_testz00_6858)
																					{	/* Llib/date.scm 495 */
																						BgL_testz00_6857 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/date.scm 495 */
																						if (
																							((long)
																								(BgL_currentzd2charzd2_964) ==
																								((long) 13)))
																							{	/* Llib/date.scm 495 */
																								BgL_testz00_6857 = ((bool_t) 1);
																							}
																						else
																							{	/* Llib/date.scm 495 */
																								BgL_testz00_6857 =
																									(
																									(long)
																									(BgL_currentzd2charzd2_964) ==
																									((long) 32));
																			}}}
																			if (BgL_testz00_6857)
																				{	/* Llib/date.scm 495 */
																					BgL_inputzd2portzd2_1032 =
																						BgL_inputzd2portzd2_960;
																					BgL_lastzd2matchzd2_1033 =
																						BgL_newzd2matchzd2_963;
																				BgL_zc3anonymousza32128ze3z83_1034:
																					{	/* Llib/date.scm 495 */
																						long BgL_newzd2matchzd2_1035;

																						RGC_STOP_MATCH
																							(BgL_inputzd2portzd2_1032);
																						BgL_newzd2matchzd2_1035 =
																							((long) 0);
																						{	/* Llib/date.scm 495 */
																							int BgL_currentzd2charzd2_1036;

																							BgL_currentzd2charzd2_1036 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_inputzd2portzd2_1032);
																							if (((long)
																									(BgL_currentzd2charzd2_1036)
																									== ((long) 0)))
																								{	/* Llib/date.scm 495 */
																									bool_t BgL_testz00_6874;

																									{	/* Llib/date.scm 495 */
																										bool_t BgL_res3335z00_3367;

																										{	/* Llib/date.scm 495 */
																											obj_t
																												BgL_inputzd2portzd2_3363;
																											BgL_inputzd2portzd2_3363 =
																												BgL_inputzd2portzd2_1032;
																											if (RGC_BUFFER_EMPTY
																												(BgL_inputzd2portzd2_3363))
																												{	/* Llib/date.scm 495 */
																													BgL_res3335z00_3367 =
																														rgc_fill_buffer
																														(BgL_inputzd2portzd2_3363);
																												}
																											else
																												{	/* Llib/date.scm 495 */
																													BgL_res3335z00_3367 =
																														((bool_t) 0);
																												}
																										}
																										BgL_testz00_6874 =
																											BgL_res3335z00_3367;
																									}
																									if (BgL_testz00_6874)
																										{

																											goto
																												BgL_zc3anonymousza32128ze3z83_1034;
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_matchz00_1125 =
																												BgL_newzd2matchzd2_1035;
																										}
																								}
																							else
																								{	/* Llib/date.scm 495 */
																									bool_t BgL_testz00_6878;

																									{	/* Llib/date.scm 495 */
																										bool_t BgL_testz00_6879;

																										if (
																											((long)
																												(BgL_currentzd2charzd2_1036)
																												== ((long) 10)))
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6879 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6879 =
																													(
																													(long)
																													(BgL_currentzd2charzd2_1036)
																													== ((long) 9));
																											}
																										if (BgL_testz00_6879)
																											{	/* Llib/date.scm 495 */
																												BgL_testz00_6878 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Llib/date.scm 495 */
																												if (
																													((long)
																														(BgL_currentzd2charzd2_1036)
																														== ((long) 13)))
																													{	/* Llib/date.scm 495 */
																														BgL_testz00_6878 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Llib/date.scm 495 */
																														BgL_testz00_6878 =
																															(
																															(long)
																															(BgL_currentzd2charzd2_1036)
																															== ((long) 32));
																									}}}
																									if (BgL_testz00_6878)
																										{
																											long
																												BgL_lastzd2matchzd2_6890;
																											BgL_lastzd2matchzd2_6890 =
																												BgL_newzd2matchzd2_1035;
																											BgL_lastzd2matchzd2_1033 =
																												BgL_lastzd2matchzd2_6890;
																											goto
																												BgL_zc3anonymousza32128ze3z83_1034;
																										}
																									else
																										{	/* Llib/date.scm 495 */
																											BgL_matchz00_1125 =
																												BgL_newzd2matchzd2_1035;
																										}
																								}
																						}
																					}
																				}
																			else
																				{	/* Llib/date.scm 495 */
																					BgL_matchz00_1125 =
																						BgL_newzd2matchzd2_963;
																				}
																		}
																}
															}
														}
													else
														{	/* Llib/date.scm 495 */
															long BgL_newzd2matchzd2_3299;

															RGC_STOP_MATCH(BgL_inputzd2portzd2_975);
															BgL_newzd2matchzd2_3299 = ((long) 3);
															BgL_matchz00_1125 = BgL_newzd2matchzd2_3299;
						}}}}}
						RGC_SET_FILEPOS(BgL_inputzd2portzd2_889);
						switch (BgL_matchz00_1125)
							{
							case ((long) 3):

								{	/* Llib/date.scm 529 */
									obj_t BgL_auxz00_6893;

									{	/* Llib/date.scm 495 */
										bool_t BgL_testz00_6894;

										{	/* Llib/date.scm 495 */
											long BgL_arg2197z00_1114;

											BgL_arg2197z00_1114 =
												RGC_BUFFER_LENGTH(BgL_inputzd2portzd2_889);
											BgL_testz00_6894 = (BgL_arg2197z00_1114 == ((long) 0));
										}
										if (BgL_testz00_6894)
											{	/* Llib/date.scm 495 */
												BgL_auxz00_6893 = BCNST(256);
											}
										else
											{	/* Llib/date.scm 495 */
												obj_t BgL_inputzd2portzd2_3380;

												BgL_inputzd2portzd2_3380 = BgL_inputzd2portzd2_889;
												BgL_auxz00_6893 =
													BCHAR(RGC_BUFFER_CHARACTER(BgL_inputzd2portzd2_3380));
											}
									}
									return
										BGl_parsezd2errorzd2zz__datez00
										(BGl_symbol3556z00zz__datez00, BGl_string3588z00zz__datez00,
										BgL_auxz00_6893, BgL_inputzd2portzd2_889);
								}
								break;
							case ((long) 2):

								{	/* Llib/date.scm 514 */
									long BgL_dayz00_1133;

									BgL_dayz00_1133 = rgc_buffer_fixnum(BgL_inputzd2portzd2_889);
									{	/* Llib/date.scm 514 */
										obj_t BgL_monthz00_1134;

										{	/* Llib/date.scm 515 */
											obj_t BgL_arg2217z00_1155;

											BgL_arg2217z00_1155 = BgL_inputzd2portzd2_889;
											BgL_monthz00_1134 =
												PROCEDURE_ENTRY(BGl_monthzd2grammarzd2zz__datez00)
												(BGl_monthzd2grammarzd2zz__datez00, BgL_arg2217z00_1155,
												BEOA);
										}
										{	/* Llib/date.scm 515 */
											obj_t BgL_yearz00_1135;

											{	/* Llib/date.scm 516 */
												obj_t BgL_arg2216z00_1154;

												BgL_arg2216z00_1154 = BgL_inputzd2portzd2_889;
												BgL_yearz00_1135 =
													PROCEDURE_ENTRY(BGl_fixnumzd2grammarzd2zz__datez00)
													(BGl_fixnumzd2grammarzd2zz__datez00,
													BgL_arg2216z00_1154, BEOA);
											}
											{	/* Llib/date.scm 516 */

												{	/* Llib/date.scm 517 */
													obj_t BgL_hourz00_1136;

													{	/* Llib/date.scm 518 */
														obj_t BgL_arg2214z00_1153;

														BgL_arg2214z00_1153 = BgL_inputzd2portzd2_889;
														BgL_hourz00_1136 =
															PROCEDURE_ENTRY(BGl_timezd2grammarzd2zz__datez00)
															(BGl_timezd2grammarzd2zz__datez00,
															BgL_arg2214z00_1153, BEOA);
													}
													{	/* Llib/date.scm 519 */
														obj_t BgL_minutez00_1137;

														obj_t BgL_secondz00_1138;

														{	/* Llib/date.scm 519 */
															int BgL_auxz00_6907;

															BgL_auxz00_6907 = (int) (((long) 1));
															BgL_minutez00_1137 =
																BGL_MVALUES_VAL(BgL_auxz00_6907);
														}
														{	/* Llib/date.scm 519 */
															int BgL_auxz00_6910;

															BgL_auxz00_6910 = (int) (((long) 2));
															BgL_secondz00_1138 =
																BGL_MVALUES_VAL(BgL_auxz00_6910);
														}
														{	/* Llib/date.scm 519 */
															obj_t BgL_za7oneza7_1139;

															{	/* Llib/date.scm 519 */
																obj_t BgL_arg2213z00_1152;

																BgL_arg2213z00_1152 = BgL_inputzd2portzd2_889;
																BgL_za7oneza7_1139 =
																	PROCEDURE_ENTRY
																	(BGl_za7onezd2grammarz75zz__datez00)
																	(BGl_za7onezd2grammarz75zz__datez00,
																	BgL_arg2213z00_1152, BEOA);
															}
															{	/* Llib/date.scm 524 */
																obj_t BgL_arg2210z00_1140;

																if (
																	((long) CINT(BgL_yearz00_1135) <
																		((long) 100)))
																	{	/* Llib/date.scm 524 */
																		BgL_arg2210z00_1140 =
																			BINT(
																			((long) CINT(BgL_yearz00_1135) +
																				((long) 2000)));
																	}
																else
																	{	/* Llib/date.scm 524 */
																		BgL_arg2210z00_1140 = BgL_yearz00_1135;
																	}
																{	/* Llib/date.scm 520 */
																	obj_t BgL_dayz00_3395;

																	obj_t BgL_dstz00_3396;

																	BgL_dayz00_3395 = BINT(BgL_dayz00_1133);
																	BgL_dstz00_3396 = BINT(((long) 0));
																	if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_1139))
																		{	/* Llib/date.scm 520 */
																			return
																				bgl_make_date(CINT(BgL_secondz00_1138),
																				CINT(BgL_minutez00_1137),
																				CINT(BgL_hourz00_1136),
																				CINT(BgL_dayz00_3395),
																				CINT(BgL_monthz00_1134),
																				CINT(BgL_arg2210z00_1140),
																				(long) CINT(BgL_za7oneza7_1139),
																				((bool_t) 1), CINT(BgL_dstz00_3396));
																		}
																	else
																		{	/* Llib/date.scm 520 */
																			return
																				bgl_make_date(CINT(BgL_secondz00_1138),
																				CINT(BgL_minutez00_1137),
																				CINT(BgL_hourz00_1136),
																				CINT(BgL_dayz00_3395),
																				CINT(BgL_monthz00_1134),
																				CINT(BgL_arg2210z00_1140), ((long) 0),
																				((bool_t) 0), CINT(BgL_dstz00_3396));
								}}}}}}}}}} break;
							case ((long) 1):

								{	/* Llib/date.scm 499 */
									obj_t BgL_dayz00_1156;

									{	/* Llib/date.scm 499 */
										obj_t BgL_arg2235z00_1179;

										BgL_arg2235z00_1179 = BgL_inputzd2portzd2_889;
										BgL_dayz00_1156 =
											PROCEDURE_ENTRY(BGl_fixnumzd2grammarzd2zz__datez00)
											(BGl_fixnumzd2grammarzd2zz__datez00, BgL_arg2235z00_1179,
											BEOA);
									}
									{	/* Llib/date.scm 499 */
										obj_t BgL_monthz00_1157;

										{	/* Llib/date.scm 500 */
											obj_t BgL_arg2234z00_1178;

											BgL_arg2234z00_1178 = BgL_inputzd2portzd2_889;
											BgL_monthz00_1157 =
												PROCEDURE_ENTRY(BGl_monthzd2grammarzd2zz__datez00)
												(BGl_monthzd2grammarzd2zz__datez00, BgL_arg2234z00_1178,
												BEOA);
										}
										{	/* Llib/date.scm 500 */
											obj_t BgL_yearz00_1158;

											{	/* Llib/date.scm 501 */
												obj_t BgL_arg2233z00_1177;

												BgL_arg2233z00_1177 = BgL_inputzd2portzd2_889;
												BgL_yearz00_1158 =
													PROCEDURE_ENTRY(BGl_fixnumzd2grammarzd2zz__datez00)
													(BGl_fixnumzd2grammarzd2zz__datez00,
													BgL_arg2233z00_1177, BEOA);
											}
											{	/* Llib/date.scm 501 */

												{	/* Llib/date.scm 502 */
													obj_t BgL_hourz00_1159;

													{	/* Llib/date.scm 503 */
														obj_t BgL_arg2227z00_1176;

														BgL_arg2227z00_1176 = BgL_inputzd2portzd2_889;
														BgL_hourz00_1159 =
															PROCEDURE_ENTRY(BGl_timezd2grammarzd2zz__datez00)
															(BGl_timezd2grammarzd2zz__datez00,
															BgL_arg2227z00_1176, BEOA);
													}
													{	/* Llib/date.scm 504 */
														obj_t BgL_minutez00_1160;

														obj_t BgL_secondz00_1161;

														{	/* Llib/date.scm 504 */
															int BgL_auxz00_6950;

															BgL_auxz00_6950 = (int) (((long) 1));
															BgL_minutez00_1160 =
																BGL_MVALUES_VAL(BgL_auxz00_6950);
														}
														{	/* Llib/date.scm 504 */
															int BgL_auxz00_6953;

															BgL_auxz00_6953 = (int) (((long) 2));
															BgL_secondz00_1161 =
																BGL_MVALUES_VAL(BgL_auxz00_6953);
														}
														{	/* Llib/date.scm 504 */
															obj_t BgL_za7oneza7_1162;

															{	/* Llib/date.scm 504 */
																obj_t BgL_arg2226z00_1175;

																BgL_arg2226z00_1175 = BgL_inputzd2portzd2_889;
																BgL_za7oneza7_1162 =
																	PROCEDURE_ENTRY
																	(BGl_za7onezd2grammarz75zz__datez00)
																	(BGl_za7onezd2grammarz75zz__datez00,
																	BgL_arg2226z00_1175, BEOA);
															}
															{	/* Llib/date.scm 509 */
																obj_t BgL_arg2222z00_1163;

																if (
																	((long) CINT(BgL_yearz00_1158) <
																		((long) 100)))
																	{	/* Llib/date.scm 509 */
																		BgL_arg2222z00_1163 =
																			BINT(
																			((long) CINT(BgL_yearz00_1158) +
																				((long) 2000)));
																	}
																else
																	{	/* Llib/date.scm 509 */
																		BgL_arg2222z00_1163 = BgL_yearz00_1158;
																	}
																{	/* Llib/date.scm 505 */
																	obj_t BgL_dstz00_3417;

																	BgL_dstz00_3417 = BINT(((long) 0));
																	if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_za7oneza7_1162))
																		{	/* Llib/date.scm 505 */
																			return
																				bgl_make_date(CINT(BgL_secondz00_1161),
																				CINT(BgL_minutez00_1160),
																				CINT(BgL_hourz00_1159),
																				CINT(BgL_dayz00_1156),
																				CINT(BgL_monthz00_1157),
																				CINT(BgL_arg2222z00_1163),
																				(long) CINT(BgL_za7oneza7_1162),
																				((bool_t) 1), CINT(BgL_dstz00_3417));
																		}
																	else
																		{	/* Llib/date.scm 505 */
																			return
																				bgl_make_date(CINT(BgL_secondz00_1161),
																				CINT(BgL_minutez00_1160),
																				CINT(BgL_hourz00_1159),
																				CINT(BgL_dayz00_1156),
																				CINT(BgL_monthz00_1157),
																				CINT(BgL_arg2222z00_1163), ((long) 0),
																				((bool_t) 0), CINT(BgL_dstz00_3417));
								}}}}}}}}}} break;
							case ((long) 0):

								goto BgL_zc3anonymousza32204ze3z83_1124;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3559z00zz__datez00,
									BGl_string3560z00zz__datez00, BINT(BgL_matchz00_1125));
							}
					}
				}
			}
		}
	}



/* date? */
	BGL_EXPORTED_DEF bool_t BGl_datezf3zf3zz__datez00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 170 */
			return BGL_DATEP(BgL_objz00_1);
		}
	}



/* _date? */
	obj_t BGl__datezf3zf3zz__datez00(obj_t BgL_envz00_5156, obj_t BgL_objz00_5157)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 170 */
			return BBOOL(BGL_DATEP(BgL_objz00_5157));
		}
	}



/* _make-date */
	obj_t BGl__makezd2datezd2zz__datez00(obj_t BgL_envz00_12,
		obj_t BgL_opt1974z00_11)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 179 */
			{	/* Llib/date.scm 179 */
				int BgL_l1975z00_2513;

				BgL_l1975z00_2513 = VECTOR_LENGTH(BgL_opt1974z00_11);
				{	/* Llib/date.scm 179 */

					{	/* Llib/date.scm 179 */
						obj_t BgL_dayz00_2517;

						BgL_dayz00_2517 = BINT(((long) 1));
						{	/* Llib/date.scm 179 */
							obj_t BgL_dstz00_2518;

							BgL_dstz00_2518 = BINT(((long) -1));
							{	/* Llib/date.scm 179 */
								obj_t BgL_hourz00_2519;

								BgL_hourz00_2519 = BINT(((long) 1));
								{	/* Llib/date.scm 179 */
									obj_t BgL_minz00_2520;

									BgL_minz00_2520 = BINT(((long) 1));
									{	/* Llib/date.scm 179 */
										obj_t BgL_monthz00_2521;

										BgL_monthz00_2521 = BINT(((long) 1));
										{	/* Llib/date.scm 179 */
											obj_t BgL_nsecz00_2522;

											BgL_nsecz00_2522 = BINT(((long) 0));
											{	/* Llib/date.scm 179 */
												obj_t BgL_secz00_2523;

												BgL_secz00_2523 = BINT(((long) 1));
												{	/* Llib/date.scm 179 */
													obj_t BgL_timeza7oneza7_2524;

													BgL_timeza7oneza7_2524 = BFALSE;
													{	/* Llib/date.scm 179 */
														obj_t BgL_yearz00_2525;

														BgL_yearz00_2525 = BINT(((long) 1970));
														{	/* Llib/date.scm 179 */

															{	/* Llib/date.scm 179 */
																long BgL_index1979z00_2526;

																{
																	long BgL_iz00_4484;

																	BgL_iz00_4484 = ((long) 0);
																BgL_search1976z00_4483:
																	if (
																		(BgL_iz00_4484 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1979z00_2526 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4486;

																			BgL_vz00_4486 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4484));
																			if (
																				(BgL_vz00_4486 ==
																					BGl_keyword3589z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1979z00_2526 =
																						(BgL_iz00_4484 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7007;

																					BgL_iz00_7007 =
																						(BgL_iz00_4484 + ((long) 2));
																					BgL_iz00_4484 = BgL_iz00_7007;
																					goto BgL_search1976z00_4483;
																				}
																		}
																}
																if ((BgL_index1979z00_2526 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_dayz00_2517 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1979z00_2526));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1980z00_2528;

																{
																	long BgL_iz00_4498;

																	BgL_iz00_4498 = ((long) 0);
																BgL_search1976z00_4497:
																	if (
																		(BgL_iz00_4498 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1980z00_2528 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4500;

																			BgL_vz00_4500 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4498));
																			if (
																				(BgL_vz00_4500 ==
																					BGl_keyword3591z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1980z00_2528 =
																						(BgL_iz00_4498 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7021;

																					BgL_iz00_7021 =
																						(BgL_iz00_4498 + ((long) 2));
																					BgL_iz00_4498 = BgL_iz00_7021;
																					goto BgL_search1976z00_4497;
																				}
																		}
																}
																if ((BgL_index1980z00_2528 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_dstz00_2518 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1980z00_2528));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1981z00_2530;

																{
																	long BgL_iz00_4512;

																	BgL_iz00_4512 = ((long) 0);
																BgL_search1976z00_4511:
																	if (
																		(BgL_iz00_4512 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1981z00_2530 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4514;

																			BgL_vz00_4514 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4512));
																			if (
																				(BgL_vz00_4514 ==
																					BGl_keyword3593z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1981z00_2530 =
																						(BgL_iz00_4512 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7035;

																					BgL_iz00_7035 =
																						(BgL_iz00_4512 + ((long) 2));
																					BgL_iz00_4512 = BgL_iz00_7035;
																					goto BgL_search1976z00_4511;
																				}
																		}
																}
																if ((BgL_index1981z00_2530 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_hourz00_2519 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1981z00_2530));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1982z00_2532;

																{
																	long BgL_iz00_4526;

																	BgL_iz00_4526 = ((long) 0);
																BgL_search1976z00_4525:
																	if (
																		(BgL_iz00_4526 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1982z00_2532 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4528;

																			BgL_vz00_4528 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4526));
																			if (
																				(BgL_vz00_4528 ==
																					BGl_keyword3595z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1982z00_2532 =
																						(BgL_iz00_4526 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7049;

																					BgL_iz00_7049 =
																						(BgL_iz00_4526 + ((long) 2));
																					BgL_iz00_4526 = BgL_iz00_7049;
																					goto BgL_search1976z00_4525;
																				}
																		}
																}
																if ((BgL_index1982z00_2532 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_minz00_2520 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1982z00_2532));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1983z00_2534;

																{
																	long BgL_iz00_4540;

																	BgL_iz00_4540 = ((long) 0);
																BgL_search1976z00_4539:
																	if (
																		(BgL_iz00_4540 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1983z00_2534 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4542;

																			BgL_vz00_4542 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4540));
																			if (
																				(BgL_vz00_4542 ==
																					BGl_keyword3597z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1983z00_2534 =
																						(BgL_iz00_4540 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7063;

																					BgL_iz00_7063 =
																						(BgL_iz00_4540 + ((long) 2));
																					BgL_iz00_4540 = BgL_iz00_7063;
																					goto BgL_search1976z00_4539;
																				}
																		}
																}
																if ((BgL_index1983z00_2534 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_monthz00_2521 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1983z00_2534));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1984z00_2536;

																{
																	long BgL_iz00_4554;

																	BgL_iz00_4554 = ((long) 0);
																BgL_search1976z00_4553:
																	if (
																		(BgL_iz00_4554 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1984z00_2536 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4556;

																			BgL_vz00_4556 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4554));
																			if (
																				(BgL_vz00_4556 ==
																					BGl_keyword3599z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1984z00_2536 =
																						(BgL_iz00_4554 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7077;

																					BgL_iz00_7077 =
																						(BgL_iz00_4554 + ((long) 2));
																					BgL_iz00_4554 = BgL_iz00_7077;
																					goto BgL_search1976z00_4553;
																				}
																		}
																}
																if ((BgL_index1984z00_2536 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_nsecz00_2522 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1984z00_2536));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1985z00_2538;

																{
																	long BgL_iz00_4568;

																	BgL_iz00_4568 = ((long) 0);
																BgL_search1976z00_4567:
																	if (
																		(BgL_iz00_4568 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1985z00_2538 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4570;

																			BgL_vz00_4570 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4568));
																			if (
																				(BgL_vz00_4570 ==
																					BGl_keyword3601z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1985z00_2538 =
																						(BgL_iz00_4568 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7091;

																					BgL_iz00_7091 =
																						(BgL_iz00_4568 + ((long) 2));
																					BgL_iz00_4568 = BgL_iz00_7091;
																					goto BgL_search1976z00_4567;
																				}
																		}
																}
																if ((BgL_index1985z00_2538 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_secz00_2523 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1985z00_2538));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1986z00_2540;

																{
																	long BgL_iz00_4582;

																	BgL_iz00_4582 = ((long) 0);
																BgL_search1976z00_4581:
																	if (
																		(BgL_iz00_4582 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1986z00_2540 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4584;

																			BgL_vz00_4584 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4582));
																			if (
																				(BgL_vz00_4584 ==
																					BGl_keyword3603z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1986z00_2540 =
																						(BgL_iz00_4582 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7105;

																					BgL_iz00_7105 =
																						(BgL_iz00_4582 + ((long) 2));
																					BgL_iz00_4582 = BgL_iz00_7105;
																					goto BgL_search1976z00_4581;
																				}
																		}
																}
																if ((BgL_index1986z00_2540 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_timeza7oneza7_2524 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1986z00_2540));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																long BgL_index1987z00_2542;

																{
																	long BgL_iz00_4596;

																	BgL_iz00_4596 = ((long) 0);
																BgL_search1976z00_4595:
																	if (
																		(BgL_iz00_4596 ==
																			(long) (BgL_l1975z00_2513)))
																		{	/* Llib/date.scm 179 */
																			BgL_index1987z00_2542 = ((long) -1);
																		}
																	else
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_vz00_4598;

																			BgL_vz00_4598 =
																				VECTOR_REF(BgL_opt1974z00_11,
																				(int) (BgL_iz00_4596));
																			if (
																				(BgL_vz00_4598 ==
																					BGl_keyword3605z00zz__datez00))
																				{	/* Llib/date.scm 179 */
																					BgL_index1987z00_2542 =
																						(BgL_iz00_4596 + ((long) 1));
																				}
																			else
																				{
																					long BgL_iz00_7119;

																					BgL_iz00_7119 =
																						(BgL_iz00_4596 + ((long) 2));
																					BgL_iz00_4596 = BgL_iz00_7119;
																					goto BgL_search1976z00_4595;
																				}
																		}
																}
																if ((BgL_index1987z00_2542 >= ((long) 0)))
																	{	/* Llib/date.scm 179 */
																		BgL_yearz00_2525 =
																			VECTOR_REF(BgL_opt1974z00_11,
																			(int) (BgL_index1987z00_2542));
																	}
																else
																	{	/* Llib/date.scm 179 */
																		BFALSE;
																	}
															}
															{	/* Llib/date.scm 179 */
																obj_t BgL_dayz00_2544;

																BgL_dayz00_2544 = BgL_dayz00_2517;
																{	/* Llib/date.scm 179 */
																	obj_t BgL_dstz00_2545;

																	BgL_dstz00_2545 = BgL_dstz00_2518;
																	{	/* Llib/date.scm 179 */
																		obj_t BgL_hourz00_2546;

																		BgL_hourz00_2546 = BgL_hourz00_2519;
																		{	/* Llib/date.scm 179 */
																			obj_t BgL_minz00_2547;

																			BgL_minz00_2547 = BgL_minz00_2520;
																			{	/* Llib/date.scm 179 */
																				obj_t BgL_monthz00_2548;

																				BgL_monthz00_2548 = BgL_monthz00_2521;
																				{	/* Llib/date.scm 179 */
																					obj_t BgL_nsecz00_2549;

																					BgL_nsecz00_2549 = BgL_nsecz00_2522;
																					{	/* Llib/date.scm 179 */
																						obj_t BgL_secz00_2550;

																						BgL_secz00_2550 = BgL_secz00_2523;
																						{	/* Llib/date.scm 179 */
																							obj_t BgL_timeza7oneza7_2551;

																							BgL_timeza7oneza7_2551 =
																								BgL_timeza7oneza7_2524;
																							{	/* Llib/date.scm 179 */
																								obj_t BgL_yearz00_2552;

																								BgL_yearz00_2552 =
																									BgL_yearz00_2525;
																								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_2551))
																									{	/* Llib/date.scm 179 */
																										int BgL_auxz00_7190;

																										long BgL_auxz00_7181;

																										int BgL_auxz00_7172;

																										int BgL_auxz00_7163;

																										int BgL_auxz00_7154;

																										int BgL_auxz00_7145;

																										int BgL_auxz00_7136;

																										int BgL_auxz00_7127;

																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7191;

																											if (INTEGERP
																												(BgL_dstz00_2545))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7191 =
																														BgL_dstz00_2545;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7194;

																													BgL_auxz00_7194 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_dstz00_2545);
																													FAILURE
																														(BgL_auxz00_7194,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7190 =
																												CINT(BgL_auxz00_7191);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7182;

																											if (INTEGERP
																												(BgL_timeza7oneza7_2551))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7182 =
																														BgL_timeza7oneza7_2551;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7185;

																													BgL_auxz00_7185 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3610z00zz__datez00,
																														BgL_timeza7oneza7_2551);
																													FAILURE
																														(BgL_auxz00_7185,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7181 =
																												(long)
																												CINT(BgL_auxz00_7182);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7173;

																											if (INTEGERP
																												(BgL_yearz00_2552))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7173 =
																														BgL_yearz00_2552;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7176;

																													BgL_auxz00_7176 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_yearz00_2552);
																													FAILURE
																														(BgL_auxz00_7176,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7172 =
																												CINT(BgL_auxz00_7173);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7164;

																											if (INTEGERP
																												(BgL_monthz00_2548))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7164 =
																														BgL_monthz00_2548;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7167;

																													BgL_auxz00_7167 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_monthz00_2548);
																													FAILURE
																														(BgL_auxz00_7167,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7163 =
																												CINT(BgL_auxz00_7164);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7155;

																											if (INTEGERP
																												(BgL_dayz00_2544))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7155 =
																														BgL_dayz00_2544;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7158;

																													BgL_auxz00_7158 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_dayz00_2544);
																													FAILURE
																														(BgL_auxz00_7158,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7154 =
																												CINT(BgL_auxz00_7155);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7146;

																											if (INTEGERP
																												(BgL_hourz00_2546))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7146 =
																														BgL_hourz00_2546;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7149;

																													BgL_auxz00_7149 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_hourz00_2546);
																													FAILURE
																														(BgL_auxz00_7149,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7145 =
																												CINT(BgL_auxz00_7146);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7137;

																											if (INTEGERP
																												(BgL_minz00_2547))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7137 =
																														BgL_minz00_2547;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7140;

																													BgL_auxz00_7140 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_minz00_2547);
																													FAILURE
																														(BgL_auxz00_7140,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7136 =
																												CINT(BgL_auxz00_7137);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7128;

																											if (INTEGERP
																												(BgL_secz00_2550))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7128 =
																														BgL_secz00_2550;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7131;

																													BgL_auxz00_7131 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_secz00_2550);
																													FAILURE
																														(BgL_auxz00_7131,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7127 =
																												CINT(BgL_auxz00_7128);
																										}
																										return
																											bgl_make_date
																											(BgL_auxz00_7127,
																											BgL_auxz00_7136,
																											BgL_auxz00_7145,
																											BgL_auxz00_7154,
																											BgL_auxz00_7163,
																											BgL_auxz00_7172,
																											BgL_auxz00_7181,
																											((bool_t) 1),
																											BgL_auxz00_7190);
																									}
																								else
																									{	/* Llib/date.scm 179 */
																										int BgL_auxz00_7254;

																										int BgL_auxz00_7245;

																										int BgL_auxz00_7236;

																										int BgL_auxz00_7227;

																										int BgL_auxz00_7218;

																										int BgL_auxz00_7209;

																										int BgL_auxz00_7200;

																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7255;

																											if (INTEGERP
																												(BgL_dstz00_2545))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7255 =
																														BgL_dstz00_2545;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7258;

																													BgL_auxz00_7258 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_dstz00_2545);
																													FAILURE
																														(BgL_auxz00_7258,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7254 =
																												CINT(BgL_auxz00_7255);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7246;

																											if (INTEGERP
																												(BgL_yearz00_2552))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7246 =
																														BgL_yearz00_2552;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7249;

																													BgL_auxz00_7249 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_yearz00_2552);
																													FAILURE
																														(BgL_auxz00_7249,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7245 =
																												CINT(BgL_auxz00_7246);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7237;

																											if (INTEGERP
																												(BgL_monthz00_2548))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7237 =
																														BgL_monthz00_2548;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7240;

																													BgL_auxz00_7240 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_monthz00_2548);
																													FAILURE
																														(BgL_auxz00_7240,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7236 =
																												CINT(BgL_auxz00_7237);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7228;

																											if (INTEGERP
																												(BgL_dayz00_2544))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7228 =
																														BgL_dayz00_2544;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7231;

																													BgL_auxz00_7231 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_dayz00_2544);
																													FAILURE
																														(BgL_auxz00_7231,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7227 =
																												CINT(BgL_auxz00_7228);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7219;

																											if (INTEGERP
																												(BgL_hourz00_2546))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7219 =
																														BgL_hourz00_2546;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7222;

																													BgL_auxz00_7222 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_hourz00_2546);
																													FAILURE
																														(BgL_auxz00_7222,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7218 =
																												CINT(BgL_auxz00_7219);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7210;

																											if (INTEGERP
																												(BgL_minz00_2547))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7210 =
																														BgL_minz00_2547;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7213;

																													BgL_auxz00_7213 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_minz00_2547);
																													FAILURE
																														(BgL_auxz00_7213,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7209 =
																												CINT(BgL_auxz00_7210);
																										}
																										{	/* Llib/date.scm 179 */
																											obj_t BgL_auxz00_7201;

																											if (INTEGERP
																												(BgL_secz00_2550))
																												{	/* Llib/date.scm 179 */
																													BgL_auxz00_7201 =
																														BgL_secz00_2550;
																												}
																											else
																												{
																													obj_t BgL_auxz00_7204;

																													BgL_auxz00_7204 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3607z00zz__datez00,
																														BINT(((long) 7884)),
																														BGl_string3608z00zz__datez00,
																														BGl_string3609z00zz__datez00,
																														BgL_secz00_2550);
																													FAILURE
																														(BgL_auxz00_7204,
																														BFALSE, BFALSE);
																												}
																											BgL_auxz00_7200 =
																												CINT(BgL_auxz00_7201);
																										}
																										return
																											bgl_make_date
																											(BgL_auxz00_7200,
																											BgL_auxz00_7209,
																											BgL_auxz00_7218,
																											BgL_auxz00_7227,
																											BgL_auxz00_7236,
																											BgL_auxz00_7245,
																											((long) 0), ((bool_t) 0),
																											BgL_auxz00_7254);
		}}}}}}}}}}}}}}}}}}}}}}}
	}



/* make-date */
	BGL_EXPORTED_DEF obj_t BGl_makezd2datezd2zz__datez00(obj_t BgL_dayz00_2,
		obj_t BgL_dstz00_3, obj_t BgL_hourz00_4, obj_t BgL_minz00_5,
		obj_t BgL_monthz00_6, obj_t BgL_nsecz00_7, obj_t BgL_secz00_8,
		obj_t BgL_timeza7oneza7_9, obj_t BgL_yearz00_10)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 179 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_timeza7oneza7_9))
				{	/* Llib/date.scm 184 */
					return
						bgl_make_date(CINT(BgL_secz00_8),
						CINT(BgL_minz00_5),
						CINT(BgL_hourz00_4),
						CINT(BgL_dayz00_2),
						CINT(BgL_monthz00_6),
						CINT(BgL_yearz00_10),
						(long) CINT(BgL_timeza7oneza7_9), ((bool_t) 1), CINT(BgL_dstz00_3));
				}
			else
				{	/* Llib/date.scm 184 */
					return
						bgl_make_date(CINT(BgL_secz00_8),
						CINT(BgL_minz00_5),
						CINT(BgL_hourz00_4),
						CINT(BgL_dayz00_2),
						CINT(BgL_monthz00_6),
						CINT(BgL_yearz00_10), ((long) 0), ((bool_t) 0), CINT(BgL_dstz00_3));
		}}
	}



/* _date-copy */
	obj_t BGl__datezd2copyzd2zz__datez00(obj_t BgL_envz00_21,
		obj_t BgL_opt1988z00_20)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 191 */
			{	/* Llib/date.scm 191 */
				int BgL_l1989z00_2558;

				BgL_l1989z00_2558 = VECTOR_LENGTH(BgL_opt1988z00_20);
				{	/* Llib/date.scm 191 */
					obj_t BgL_datez00_2562;

					BgL_datez00_2562 = VECTOR_REF(BgL_opt1988z00_20, (int) (((long) 0)));
					{	/* Llib/date.scm 191 */
						obj_t BgL_dayz00_2563;

						BgL_dayz00_2563 = BFALSE;
						{	/* Llib/date.scm 191 */
							obj_t BgL_hourz00_2564;

							BgL_hourz00_2564 = BFALSE;
							{	/* Llib/date.scm 191 */
								obj_t BgL_minz00_2565;

								BgL_minz00_2565 = BFALSE;
								{	/* Llib/date.scm 191 */
									obj_t BgL_monthz00_2566;

									BgL_monthz00_2566 = BFALSE;
									{	/* Llib/date.scm 191 */
										obj_t BgL_secz00_2567;

										BgL_secz00_2567 = BFALSE;
										{	/* Llib/date.scm 191 */
											obj_t BgL_yearz00_2568;

											BgL_yearz00_2568 = BFALSE;
											{	/* Llib/date.scm 191 */

												{	/* Llib/date.scm 191 */
													long BgL_index1993z00_2569;

													{
														long BgL_iz00_4644;

														BgL_iz00_4644 = ((long) 1);
													BgL_search1990z00_4643:
														if ((BgL_iz00_4644 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1993z00_2569 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4646;

																BgL_vz00_4646 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4644));
																if (
																	(BgL_vz00_4646 ==
																		BGl_keyword3589z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1993z00_2569 =
																			(BgL_iz00_4644 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7294;

																		BgL_iz00_7294 =
																			(BgL_iz00_4644 + ((long) 2));
																		BgL_iz00_4644 = BgL_iz00_7294;
																		goto BgL_search1990z00_4643;
																	}
															}
													}
													if ((BgL_index1993z00_2569 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_dayz00_2563 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1993z00_2569));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													long BgL_index1994z00_2571;

													{
														long BgL_iz00_4658;

														BgL_iz00_4658 = ((long) 1);
													BgL_search1990z00_4657:
														if ((BgL_iz00_4658 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1994z00_2571 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4660;

																BgL_vz00_4660 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4658));
																if (
																	(BgL_vz00_4660 ==
																		BGl_keyword3593z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1994z00_2571 =
																			(BgL_iz00_4658 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7308;

																		BgL_iz00_7308 =
																			(BgL_iz00_4658 + ((long) 2));
																		BgL_iz00_4658 = BgL_iz00_7308;
																		goto BgL_search1990z00_4657;
																	}
															}
													}
													if ((BgL_index1994z00_2571 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_hourz00_2564 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1994z00_2571));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													long BgL_index1995z00_2573;

													{
														long BgL_iz00_4672;

														BgL_iz00_4672 = ((long) 1);
													BgL_search1990z00_4671:
														if ((BgL_iz00_4672 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1995z00_2573 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4674;

																BgL_vz00_4674 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4672));
																if (
																	(BgL_vz00_4674 ==
																		BGl_keyword3595z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1995z00_2573 =
																			(BgL_iz00_4672 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7322;

																		BgL_iz00_7322 =
																			(BgL_iz00_4672 + ((long) 2));
																		BgL_iz00_4672 = BgL_iz00_7322;
																		goto BgL_search1990z00_4671;
																	}
															}
													}
													if ((BgL_index1995z00_2573 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_minz00_2565 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1995z00_2573));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													long BgL_index1996z00_2575;

													{
														long BgL_iz00_4686;

														BgL_iz00_4686 = ((long) 1);
													BgL_search1990z00_4685:
														if ((BgL_iz00_4686 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1996z00_2575 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4688;

																BgL_vz00_4688 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4686));
																if (
																	(BgL_vz00_4688 ==
																		BGl_keyword3597z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1996z00_2575 =
																			(BgL_iz00_4686 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7336;

																		BgL_iz00_7336 =
																			(BgL_iz00_4686 + ((long) 2));
																		BgL_iz00_4686 = BgL_iz00_7336;
																		goto BgL_search1990z00_4685;
																	}
															}
													}
													if ((BgL_index1996z00_2575 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_monthz00_2566 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1996z00_2575));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													long BgL_index1997z00_2577;

													{
														long BgL_iz00_4700;

														BgL_iz00_4700 = ((long) 1);
													BgL_search1990z00_4699:
														if ((BgL_iz00_4700 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1997z00_2577 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4702;

																BgL_vz00_4702 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4700));
																if (
																	(BgL_vz00_4702 ==
																		BGl_keyword3601z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1997z00_2577 =
																			(BgL_iz00_4700 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7350;

																		BgL_iz00_7350 =
																			(BgL_iz00_4700 + ((long) 2));
																		BgL_iz00_4700 = BgL_iz00_7350;
																		goto BgL_search1990z00_4699;
																	}
															}
													}
													if ((BgL_index1997z00_2577 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_secz00_2567 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1997z00_2577));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													long BgL_index1998z00_2579;

													{
														long BgL_iz00_4714;

														BgL_iz00_4714 = ((long) 1);
													BgL_search1990z00_4713:
														if ((BgL_iz00_4714 == (long) (BgL_l1989z00_2558)))
															{	/* Llib/date.scm 191 */
																BgL_index1998z00_2579 = ((long) -1);
															}
														else
															{	/* Llib/date.scm 191 */
																obj_t BgL_vz00_4716;

																BgL_vz00_4716 =
																	VECTOR_REF(BgL_opt1988z00_20,
																	(int) (BgL_iz00_4714));
																if (
																	(BgL_vz00_4716 ==
																		BGl_keyword3605z00zz__datez00))
																	{	/* Llib/date.scm 191 */
																		BgL_index1998z00_2579 =
																			(BgL_iz00_4714 + ((long) 1));
																	}
																else
																	{
																		long BgL_iz00_7364;

																		BgL_iz00_7364 =
																			(BgL_iz00_4714 + ((long) 2));
																		BgL_iz00_4714 = BgL_iz00_7364;
																		goto BgL_search1990z00_4713;
																	}
															}
													}
													if ((BgL_index1998z00_2579 >= ((long) 0)))
														{	/* Llib/date.scm 191 */
															BgL_yearz00_2568 =
																VECTOR_REF(BgL_opt1988z00_20,
																(int) (BgL_index1998z00_2579));
														}
													else
														{	/* Llib/date.scm 191 */
															BFALSE;
														}
												}
												{	/* Llib/date.scm 191 */
													obj_t BgL_arg2975z00_2581;

													BgL_arg2975z00_2581 =
														VECTOR_REF(BgL_opt1988z00_20, (int) (((long) 0)));
													{	/* Llib/date.scm 191 */
														obj_t BgL_dayz00_2582;

														BgL_dayz00_2582 = BgL_dayz00_2563;
														{	/* Llib/date.scm 191 */
															obj_t BgL_hourz00_2583;

															BgL_hourz00_2583 = BgL_hourz00_2564;
															{	/* Llib/date.scm 191 */
																obj_t BgL_minz00_2584;

																BgL_minz00_2584 = BgL_minz00_2565;
																{	/* Llib/date.scm 191 */
																	obj_t BgL_monthz00_2585;

																	BgL_monthz00_2585 = BgL_monthz00_2566;
																	{	/* Llib/date.scm 191 */
																		obj_t BgL_secz00_2586;

																		BgL_secz00_2586 = BgL_secz00_2567;
																		{	/* Llib/date.scm 191 */
																			obj_t BgL_yearz00_2587;

																			BgL_yearz00_2587 = BgL_yearz00_2568;
																			{	/* Llib/date.scm 191 */
																				obj_t BgL_arg2979z00_4734;

																				obj_t BgL_arg2980z00_4735;

																				obj_t BgL_arg2981z00_4736;

																				obj_t BgL_arg2982z00_4737;

																				obj_t BgL_arg2983z00_4738;

																				obj_t BgL_arg2984z00_4739;

																				int BgL_arg2986z00_4741;

																				if (CBOOL(BgL_secz00_2586))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2979z00_4734 =
																							BgL_secz00_2586;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4748;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4748 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7376;

																								BgL_auxz00_7376 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7376, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2979z00_4734 =
																							BINT(BGL_DATE_SECOND
																							(BgL_dz00_4748));
																					}
																				if (CBOOL(BgL_minz00_2584))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2980z00_4735 =
																							BgL_minz00_2584;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4749;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4749 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7386;

																								BgL_auxz00_7386 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7386, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2980z00_4735 =
																							BINT(BGL_DATE_MINUTE
																							(BgL_dz00_4749));
																					}
																				if (CBOOL(BgL_hourz00_2583))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2981z00_4736 =
																							BgL_hourz00_2583;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4750;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4750 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7396;

																								BgL_auxz00_7396 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7396, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2981z00_4736 =
																							BINT(BGL_DATE_HOUR
																							(BgL_dz00_4750));
																					}
																				if (CBOOL(BgL_dayz00_2582))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2982z00_4737 =
																							BgL_dayz00_2582;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4751;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4751 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7406;

																								BgL_auxz00_7406 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7406, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2982z00_4737 =
																							BINT(BGL_DATE_DAY(BgL_dz00_4751));
																					}
																				if (CBOOL(BgL_monthz00_2585))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2983z00_4738 =
																							BgL_monthz00_2585;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4752;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4752 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7416;

																								BgL_auxz00_7416 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7416, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2983z00_4738 =
																							BINT(BGL_DATE_MONTH
																							(BgL_dz00_4752));
																					}
																				if (CBOOL(BgL_yearz00_2587))
																					{	/* Llib/date.scm 191 */
																						BgL_arg2984z00_4739 =
																							BgL_yearz00_2587;
																					}
																				else
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_dz00_4753;

																						if (BGL_DATEP(BgL_arg2975z00_2581))
																							{	/* Llib/date.scm 191 */
																								BgL_dz00_4753 =
																									BgL_arg2975z00_2581;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7426;

																								BgL_auxz00_7426 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3612z00zz__datez00,
																									BgL_arg2975z00_2581);
																								FAILURE(BgL_auxz00_7426, BFALSE,
																									BFALSE);
																							}
																						BgL_arg2984z00_4739 =
																							BINT(BGL_DATE_YEAR
																							(BgL_dz00_4753));
																					}
																				{	/* Llib/date.scm 191 */
																					obj_t BgL_dz00_4754;

																					if (BGL_DATEP(BgL_arg2975z00_2581))
																						{	/* Llib/date.scm 191 */
																							BgL_dz00_4754 =
																								BgL_arg2975z00_2581;
																						}
																					else
																						{
																							obj_t BgL_auxz00_7434;

																							BgL_auxz00_7434 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3607z00zz__datez00,
																								BINT(((long) 8399)),
																								BGl_string3611z00zz__datez00,
																								BGl_string3612z00zz__datez00,
																								BgL_arg2975z00_2581);
																							FAILURE(BgL_auxz00_7434, BFALSE,
																								BFALSE);
																						}
																					BgL_arg2986z00_4741 =
																						BGL_DATE_ISDST(BgL_dz00_4754);
																				}
																				{	/* Llib/date.scm 191 */
																					int BgL_auxz00_7484;

																					int BgL_auxz00_7475;

																					int BgL_auxz00_7466;

																					int BgL_auxz00_7457;

																					int BgL_auxz00_7448;

																					int BgL_auxz00_7439;

																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7485;

																						if (INTEGERP(BgL_arg2984z00_4739))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7485 =
																									BgL_arg2984z00_4739;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7488;

																								BgL_auxz00_7488 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2984z00_4739);
																								FAILURE(BgL_auxz00_7488, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7484 =
																							CINT(BgL_auxz00_7485);
																					}
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7476;

																						if (INTEGERP(BgL_arg2983z00_4738))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7476 =
																									BgL_arg2983z00_4738;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7479;

																								BgL_auxz00_7479 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2983z00_4738);
																								FAILURE(BgL_auxz00_7479, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7475 =
																							CINT(BgL_auxz00_7476);
																					}
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7467;

																						if (INTEGERP(BgL_arg2982z00_4737))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7467 =
																									BgL_arg2982z00_4737;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7470;

																								BgL_auxz00_7470 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2982z00_4737);
																								FAILURE(BgL_auxz00_7470, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7466 =
																							CINT(BgL_auxz00_7467);
																					}
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7458;

																						if (INTEGERP(BgL_arg2981z00_4736))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7458 =
																									BgL_arg2981z00_4736;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7461;

																								BgL_auxz00_7461 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2981z00_4736);
																								FAILURE(BgL_auxz00_7461, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7457 =
																							CINT(BgL_auxz00_7458);
																					}
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7449;

																						if (INTEGERP(BgL_arg2980z00_4735))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7449 =
																									BgL_arg2980z00_4735;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7452;

																								BgL_auxz00_7452 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2980z00_4735);
																								FAILURE(BgL_auxz00_7452, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7448 =
																							CINT(BgL_auxz00_7449);
																					}
																					{	/* Llib/date.scm 191 */
																						obj_t BgL_auxz00_7440;

																						if (INTEGERP(BgL_arg2979z00_4734))
																							{	/* Llib/date.scm 191 */
																								BgL_auxz00_7440 =
																									BgL_arg2979z00_4734;
																							}
																						else
																							{
																								obj_t BgL_auxz00_7443;

																								BgL_auxz00_7443 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3607z00zz__datez00,
																									BINT(((long) 8399)),
																									BGl_string3611z00zz__datez00,
																									BGl_string3609z00zz__datez00,
																									BgL_arg2979z00_4734);
																								FAILURE(BgL_auxz00_7443, BFALSE,
																									BFALSE);
																							}
																						BgL_auxz00_7439 =
																							CINT(BgL_auxz00_7440);
																					}
																					return
																						bgl_make_date(BgL_auxz00_7439,
																						BgL_auxz00_7448, BgL_auxz00_7457,
																						BgL_auxz00_7466, BgL_auxz00_7475,
																						BgL_auxz00_7484, ((long) 0),
																						((bool_t) 0), BgL_arg2986z00_4741);
		}}}}}}}}}}}}}}}}}}}
	}



/* date-copy */
	BGL_EXPORTED_DEF obj_t BGl_datezd2copyzd2zz__datez00(obj_t BgL_datez00_13,
		obj_t BgL_dayz00_14, obj_t BgL_hourz00_15, obj_t BgL_minz00_16,
		obj_t BgL_monthz00_17, obj_t BgL_secz00_18, obj_t BgL_yearz00_19)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 191 */
			{	/* Llib/date.scm 192 */
				obj_t BgL_arg2979z00_4777;

				obj_t BgL_arg2980z00_4778;

				obj_t BgL_arg2981z00_4779;

				obj_t BgL_arg2982z00_4780;

				obj_t BgL_arg2983z00_4781;

				obj_t BgL_arg2984z00_4782;

				int BgL_arg2986z00_4784;

				if (CBOOL(BgL_secz00_18))
					{	/* Llib/date.scm 192 */
						BgL_arg2979z00_4777 = BgL_secz00_18;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4791;

						BgL_dz00_4791 = BgL_datez00_13;
						BgL_arg2979z00_4777 = BINT(BGL_DATE_SECOND(BgL_dz00_4791));
					}
				if (CBOOL(BgL_minz00_16))
					{	/* Llib/date.scm 192 */
						BgL_arg2980z00_4778 = BgL_minz00_16;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4792;

						BgL_dz00_4792 = BgL_datez00_13;
						BgL_arg2980z00_4778 = BINT(BGL_DATE_MINUTE(BgL_dz00_4792));
					}
				if (CBOOL(BgL_hourz00_15))
					{	/* Llib/date.scm 192 */
						BgL_arg2981z00_4779 = BgL_hourz00_15;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4793;

						BgL_dz00_4793 = BgL_datez00_13;
						BgL_arg2981z00_4779 = BINT(BGL_DATE_HOUR(BgL_dz00_4793));
					}
				if (CBOOL(BgL_dayz00_14))
					{	/* Llib/date.scm 192 */
						BgL_arg2982z00_4780 = BgL_dayz00_14;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4794;

						BgL_dz00_4794 = BgL_datez00_13;
						BgL_arg2982z00_4780 = BINT(BGL_DATE_DAY(BgL_dz00_4794));
					}
				if (CBOOL(BgL_monthz00_17))
					{	/* Llib/date.scm 192 */
						BgL_arg2983z00_4781 = BgL_monthz00_17;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4795;

						BgL_dz00_4795 = BgL_datez00_13;
						BgL_arg2983z00_4781 = BINT(BGL_DATE_MONTH(BgL_dz00_4795));
					}
				if (CBOOL(BgL_yearz00_19))
					{	/* Llib/date.scm 192 */
						BgL_arg2984z00_4782 = BgL_yearz00_19;
					}
				else
					{	/* Llib/date.scm 192 */
						obj_t BgL_dz00_4796;

						BgL_dz00_4796 = BgL_datez00_13;
						BgL_arg2984z00_4782 = BINT(BGL_DATE_YEAR(BgL_dz00_4796));
					}
				BgL_arg2986z00_4784 = BGL_DATE_ISDST(BgL_datez00_13);
				return
					bgl_make_date(CINT(BgL_arg2979z00_4777),
					CINT(BgL_arg2980z00_4778),
					CINT(BgL_arg2981z00_4779),
					CINT(BgL_arg2982z00_4780),
					CINT(BgL_arg2983z00_4781),
					CINT(BgL_arg2984z00_4782), ((long) 0), ((bool_t) 0),
					BgL_arg2986z00_4784);
		}}
	}



/* integer->second */
	BGL_EXPORTED_DEF long BGl_integerzd2ze3secondz31zz__datez00(long BgL_iz00_22)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 205 */
			return (long) (BgL_iz00_22);
		}
	}



/* _integer->second */
	obj_t BGl__integerzd2ze3secondz31zz__datez00(obj_t BgL_envz00_5158,
		obj_t BgL_iz00_5159)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 205 */
			{	/* Llib/date.scm 206 */
				long BgL_auxz00_7527;

				{	/* Llib/date.scm 206 */
					long BgL_iz00_5340;

					{	/* Llib/date.scm 206 */
						obj_t BgL_auxz00_7528;

						if (INTEGERP(BgL_iz00_5159))
							{	/* Llib/date.scm 206 */
								BgL_auxz00_7528 = BgL_iz00_5159;
							}
						else
							{
								obj_t BgL_auxz00_7531;

								BgL_auxz00_7531 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
									BINT(((long) 8994)), BGl_string3613z00zz__datez00,
									BGl_string3610z00zz__datez00, BgL_iz00_5159);
								FAILURE(BgL_auxz00_7531, BFALSE, BFALSE);
							}
						BgL_iz00_5340 = (long) CINT(BgL_auxz00_7528);
					}
					BgL_auxz00_7527 = (long) (BgL_iz00_5340);
				}
				return make_belong(BgL_auxz00_7527);
			}
		}
	}



/* date-nanosecond */
	BGL_EXPORTED_DEF long BGl_datezd2nanosecondzd2zz__datez00(obj_t BgL_dz00_23)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 211 */
			return ((long) 0);
		}
	}



/* _date-nanosecond */
	obj_t BGl__datezd2nanosecondzd2zz__datez00(obj_t BgL_envz00_5160,
		obj_t BgL_dz00_5161)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 211 */
			{	/* Llib/date.scm 211 */
				long BgL_auxz00_7538;

				{	/* Llib/date.scm 211 */
					obj_t BgL_dz00_5341;

					if (BGL_DATEP(BgL_dz00_5161))
						{	/* Llib/date.scm 211 */
							BgL_dz00_5341 = BgL_dz00_5161;
						}
					else
						{
							obj_t BgL_auxz00_7541;

							BgL_auxz00_7541 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 9245)), BGl_string3614z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5161);
							FAILURE(BgL_auxz00_7541, BFALSE, BFALSE);
						}
					BgL_auxz00_7538 = ((long) 0);
				}
				return make_belong(BgL_auxz00_7538);
			}
		}
	}



/* date-second */
	BGL_EXPORTED_DEF int BGl_datezd2secondzd2zz__datez00(obj_t BgL_dz00_24)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 217 */
			return BGL_DATE_SECOND(BgL_dz00_24);
		}
	}



/* _date-second */
	obj_t BGl__datezd2secondzd2zz__datez00(obj_t BgL_envz00_5162,
		obj_t BgL_dz00_5163)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 217 */
			{	/* Llib/date.scm 218 */
				int BgL_auxz00_7547;

				{	/* Llib/date.scm 218 */
					obj_t BgL_dz00_5342;

					if (BGL_DATEP(BgL_dz00_5163))
						{	/* Llib/date.scm 218 */
							BgL_dz00_5342 = BgL_dz00_5163;
						}
					else
						{
							obj_t BgL_auxz00_7550;

							BgL_auxz00_7550 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 9557)), BGl_string3615z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5163);
							FAILURE(BgL_auxz00_7550, BFALSE, BFALSE);
						}
					BgL_auxz00_7547 = BGL_DATE_SECOND(BgL_dz00_5342);
				}
				return BINT(BgL_auxz00_7547);
			}
		}
	}



/* date-minute */
	BGL_EXPORTED_DEF int BGl_datezd2minutezd2zz__datez00(obj_t BgL_dz00_25)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 223 */
			return BGL_DATE_MINUTE(BgL_dz00_25);
		}
	}



/* _date-minute */
	obj_t BGl__datezd2minutezd2zz__datez00(obj_t BgL_envz00_5164,
		obj_t BgL_dz00_5165)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 223 */
			{	/* Llib/date.scm 224 */
				int BgL_auxz00_7557;

				{	/* Llib/date.scm 224 */
					obj_t BgL_dz00_5343;

					if (BGL_DATEP(BgL_dz00_5165))
						{	/* Llib/date.scm 224 */
							BgL_dz00_5343 = BgL_dz00_5165;
						}
					else
						{
							obj_t BgL_auxz00_7560;

							BgL_auxz00_7560 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 9839)), BGl_string3616z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5165);
							FAILURE(BgL_auxz00_7560, BFALSE, BFALSE);
						}
					BgL_auxz00_7557 = BGL_DATE_MINUTE(BgL_dz00_5343);
				}
				return BINT(BgL_auxz00_7557);
			}
		}
	}



/* date-hour */
	BGL_EXPORTED_DEF int BGl_datezd2hourzd2zz__datez00(obj_t BgL_dz00_26)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 229 */
			return BGL_DATE_HOUR(BgL_dz00_26);
		}
	}



/* _date-hour */
	obj_t BGl__datezd2hourzd2zz__datez00(obj_t BgL_envz00_5166,
		obj_t BgL_dz00_5167)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 229 */
			{	/* Llib/date.scm 230 */
				int BgL_auxz00_7567;

				{	/* Llib/date.scm 230 */
					obj_t BgL_dz00_5344;

					if (BGL_DATEP(BgL_dz00_5167))
						{	/* Llib/date.scm 230 */
							BgL_dz00_5344 = BgL_dz00_5167;
						}
					else
						{
							obj_t BgL_auxz00_7570;

							BgL_auxz00_7570 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 10119)), BGl_string3617z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5167);
							FAILURE(BgL_auxz00_7570, BFALSE, BFALSE);
						}
					BgL_auxz00_7567 = BGL_DATE_HOUR(BgL_dz00_5344);
				}
				return BINT(BgL_auxz00_7567);
			}
		}
	}



/* date-day */
	BGL_EXPORTED_DEF int BGl_datezd2dayzd2zz__datez00(obj_t BgL_dz00_27)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 235 */
			return BGL_DATE_DAY(BgL_dz00_27);
		}
	}



/* _date-day */
	obj_t BGl__datezd2dayzd2zz__datez00(obj_t BgL_envz00_5168,
		obj_t BgL_dz00_5169)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 235 */
			{	/* Llib/date.scm 236 */
				int BgL_auxz00_7577;

				{	/* Llib/date.scm 236 */
					obj_t BgL_dz00_5345;

					if (BGL_DATEP(BgL_dz00_5169))
						{	/* Llib/date.scm 236 */
							BgL_dz00_5345 = BgL_dz00_5169;
						}
					else
						{
							obj_t BgL_auxz00_7580;

							BgL_auxz00_7580 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 10396)), BGl_string3618z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5169);
							FAILURE(BgL_auxz00_7580, BFALSE, BFALSE);
						}
					BgL_auxz00_7577 = BGL_DATE_DAY(BgL_dz00_5345);
				}
				return BINT(BgL_auxz00_7577);
			}
		}
	}



/* date-week-day */
	BGL_EXPORTED_DEF int BGl_datezd2weekzd2dayz00zz__datez00(obj_t BgL_dz00_28)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 241 */
			return BGL_DATE_WDAY(BgL_dz00_28);
		}
	}



/* _date-week-day */
	obj_t BGl__datezd2weekzd2dayz00zz__datez00(obj_t BgL_envz00_5170,
		obj_t BgL_dz00_5171)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 241 */
			{	/* Llib/date.scm 242 */
				int BgL_auxz00_7587;

				{	/* Llib/date.scm 242 */
					obj_t BgL_dz00_5346;

					if (BGL_DATEP(BgL_dz00_5171))
						{	/* Llib/date.scm 242 */
							BgL_dz00_5346 = BgL_dz00_5171;
						}
					else
						{
							obj_t BgL_auxz00_7590;

							BgL_auxz00_7590 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 10677)), BGl_string3619z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5171);
							FAILURE(BgL_auxz00_7590, BFALSE, BFALSE);
						}
					BgL_auxz00_7587 = BGL_DATE_WDAY(BgL_dz00_5346);
				}
				return BINT(BgL_auxz00_7587);
			}
		}
	}



/* date-wday */
	BGL_EXPORTED_DEF int BGl_datezd2wdayzd2zz__datez00(obj_t BgL_dz00_29)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 247 */
			return BGL_DATE_WDAY(BgL_dz00_29);
		}
	}



/* _date-wday */
	obj_t BGl__datezd2wdayzd2zz__datez00(obj_t BgL_envz00_5172,
		obj_t BgL_dz00_5173)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 247 */
			{	/* Llib/date.scm 248 */
				int BgL_auxz00_7597;

				{	/* Llib/date.scm 248 */
					obj_t BgL_dz00_5347;

					if (BGL_DATEP(BgL_dz00_5173))
						{	/* Llib/date.scm 248 */
							BgL_dz00_5347 = BgL_dz00_5173;
						}
					else
						{
							obj_t BgL_auxz00_7600;

							BgL_auxz00_7600 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 10955)), BGl_string3620z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5173);
							FAILURE(BgL_auxz00_7600, BFALSE, BFALSE);
						}
					BgL_auxz00_7597 = BGL_DATE_WDAY(BgL_dz00_5347);
				}
				return BINT(BgL_auxz00_7597);
			}
		}
	}



/* date-year-day */
	BGL_EXPORTED_DEF int BGl_datezd2yearzd2dayz00zz__datez00(obj_t BgL_dz00_30)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 253 */
			return BGL_DATE_YDAY(BgL_dz00_30);
		}
	}



/* _date-year-day */
	obj_t BGl__datezd2yearzd2dayz00zz__datez00(obj_t BgL_envz00_5174,
		obj_t BgL_dz00_5175)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 253 */
			{	/* Llib/date.scm 254 */
				int BgL_auxz00_7607;

				{	/* Llib/date.scm 254 */
					obj_t BgL_dz00_5348;

					if (BGL_DATEP(BgL_dz00_5175))
						{	/* Llib/date.scm 254 */
							BgL_dz00_5348 = BgL_dz00_5175;
						}
					else
						{
							obj_t BgL_auxz00_7610;

							BgL_auxz00_7610 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 11237)), BGl_string3621z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5175);
							FAILURE(BgL_auxz00_7610, BFALSE, BFALSE);
						}
					BgL_auxz00_7607 = BGL_DATE_YDAY(BgL_dz00_5348);
				}
				return BINT(BgL_auxz00_7607);
			}
		}
	}



/* date-yday */
	BGL_EXPORTED_DEF int BGl_datezd2ydayzd2zz__datez00(obj_t BgL_dz00_31)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 259 */
			return BGL_DATE_YDAY(BgL_dz00_31);
		}
	}



/* _date-yday */
	obj_t BGl__datezd2ydayzd2zz__datez00(obj_t BgL_envz00_5176,
		obj_t BgL_dz00_5177)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 259 */
			{	/* Llib/date.scm 260 */
				int BgL_auxz00_7617;

				{	/* Llib/date.scm 260 */
					obj_t BgL_dz00_5349;

					if (BGL_DATEP(BgL_dz00_5177))
						{	/* Llib/date.scm 260 */
							BgL_dz00_5349 = BgL_dz00_5177;
						}
					else
						{
							obj_t BgL_auxz00_7620;

							BgL_auxz00_7620 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 11515)), BGl_string3622z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5177);
							FAILURE(BgL_auxz00_7620, BFALSE, BFALSE);
						}
					BgL_auxz00_7617 = BGL_DATE_YDAY(BgL_dz00_5349);
				}
				return BINT(BgL_auxz00_7617);
			}
		}
	}



/* date-month */
	BGL_EXPORTED_DEF int BGl_datezd2monthzd2zz__datez00(obj_t BgL_dz00_32)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 265 */
			return BGL_DATE_MONTH(BgL_dz00_32);
		}
	}



/* _date-month */
	obj_t BGl__datezd2monthzd2zz__datez00(obj_t BgL_envz00_5178,
		obj_t BgL_dz00_5179)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 265 */
			{	/* Llib/date.scm 266 */
				int BgL_auxz00_7627;

				{	/* Llib/date.scm 266 */
					obj_t BgL_dz00_5350;

					if (BGL_DATEP(BgL_dz00_5179))
						{	/* Llib/date.scm 266 */
							BgL_dz00_5350 = BgL_dz00_5179;
						}
					else
						{
							obj_t BgL_auxz00_7630;

							BgL_auxz00_7630 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 11794)), BGl_string3623z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5179);
							FAILURE(BgL_auxz00_7630, BFALSE, BFALSE);
						}
					BgL_auxz00_7627 = BGL_DATE_MONTH(BgL_dz00_5350);
				}
				return BINT(BgL_auxz00_7627);
			}
		}
	}



/* date-year */
	BGL_EXPORTED_DEF int BGl_datezd2yearzd2zz__datez00(obj_t BgL_dz00_33)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 271 */
			return BGL_DATE_YEAR(BgL_dz00_33);
		}
	}



/* _date-year */
	obj_t BGl__datezd2yearzd2zz__datez00(obj_t BgL_envz00_5180,
		obj_t BgL_dz00_5181)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 271 */
			{	/* Llib/date.scm 272 */
				int BgL_auxz00_7637;

				{	/* Llib/date.scm 272 */
					obj_t BgL_dz00_5351;

					if (BGL_DATEP(BgL_dz00_5181))
						{	/* Llib/date.scm 272 */
							BgL_dz00_5351 = BgL_dz00_5181;
						}
					else
						{
							obj_t BgL_auxz00_7640;

							BgL_auxz00_7640 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 12073)), BGl_string3624z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5181);
							FAILURE(BgL_auxz00_7640, BFALSE, BFALSE);
						}
					BgL_auxz00_7637 = BGL_DATE_YEAR(BgL_dz00_5351);
				}
				return BINT(BgL_auxz00_7637);
			}
		}
	}



/* date-timezone */
	BGL_EXPORTED_DEF long BGl_datezd2timeza7onez75zz__datez00(obj_t BgL_dz00_34)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 277 */
			return BGL_DATE_TIMEZONE(BgL_dz00_34);
		}
	}



/* _date-timezone */
	obj_t BGl__datezd2timeza7onez75zz__datez00(obj_t BgL_envz00_5182,
		obj_t BgL_dz00_5183)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 277 */
			{	/* Llib/date.scm 278 */
				long BgL_auxz00_7647;

				{	/* Llib/date.scm 278 */
					obj_t BgL_dz00_5352;

					if (BGL_DATEP(BgL_dz00_5183))
						{	/* Llib/date.scm 278 */
							BgL_dz00_5352 = BgL_dz00_5183;
						}
					else
						{
							obj_t BgL_auxz00_7650;

							BgL_auxz00_7650 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 12355)), BGl_string3625z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5183);
							FAILURE(BgL_auxz00_7650, BFALSE, BFALSE);
						}
					BgL_auxz00_7647 = BGL_DATE_TIMEZONE(BgL_dz00_5352);
				}
				return BINT(BgL_auxz00_7647);
			}
		}
	}



/* date-zone-offset */
	BGL_EXPORTED_DEF long BGl_datezd2za7onezd2offsetza7zz__datez00(obj_t
		BgL_dz00_35)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 283 */
			{	/* Llib/date.scm 284 */
				long BgL_arg2988z00_5353;

				BgL_arg2988z00_5353 = BGL_DATE_TIMEZONE(BgL_dz00_35);
				return (((long) 3600) * BgL_arg2988z00_5353);
		}}
	}



/* _date-zone-offset */
	obj_t BGl__datezd2za7onezd2offsetza7zz__datez00(obj_t BgL_envz00_5184,
		obj_t BgL_dz00_5185)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 283 */
			{	/* Llib/date.scm 284 */
				long BgL_auxz00_7658;

				{	/* Llib/date.scm 284 */
					long BgL_res3660z00_5356;

					{	/* Llib/date.scm 284 */
						obj_t BgL_dz00_5354;

						if (BGL_DATEP(BgL_dz00_5185))
							{	/* Llib/date.scm 284 */
								BgL_dz00_5354 = BgL_dz00_5185;
							}
						else
							{
								obj_t BgL_auxz00_7661;

								BgL_auxz00_7661 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
									BINT(((long) 12644)), BGl_string3626z00zz__datez00,
									BGl_string3612z00zz__datez00, BgL_dz00_5185);
								FAILURE(BgL_auxz00_7661, BFALSE, BFALSE);
							}
						{	/* Llib/date.scm 284 */
							long BgL_arg2988z00_5355;

							BgL_arg2988z00_5355 = BGL_DATE_TIMEZONE(BgL_dz00_5354);
							BgL_res3660z00_5356 = (((long) 3600) * BgL_arg2988z00_5355);
					}}
					BgL_auxz00_7658 = BgL_res3660z00_5356;
				}
				return BINT(BgL_auxz00_7658);
			}
		}
	}



/* date-is-dst */
	BGL_EXPORTED_DEF int BGl_datezd2iszd2dstz00zz__datez00(obj_t BgL_dz00_36)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 289 */
			return BGL_DATE_ISDST(BgL_dz00_36);
		}
	}



/* _date-is-dst */
	obj_t BGl__datezd2iszd2dstz00zz__datez00(obj_t BgL_envz00_5186,
		obj_t BgL_dz00_5187)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 289 */
			{	/* Llib/date.scm 290 */
				int BgL_auxz00_7669;

				{	/* Llib/date.scm 290 */
					obj_t BgL_dz00_5357;

					if (BGL_DATEP(BgL_dz00_5187))
						{	/* Llib/date.scm 290 */
							BgL_dz00_5357 = BgL_dz00_5187;
						}
					else
						{
							obj_t BgL_auxz00_7672;

							BgL_auxz00_7672 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 12939)), BGl_string3627z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5187);
							FAILURE(BgL_auxz00_7672, BFALSE, BFALSE);
						}
					BgL_auxz00_7669 = BGL_DATE_ISDST(BgL_dz00_5357);
				}
				return BINT(BgL_auxz00_7669);
			}
		}
	}



/* current-seconds */
	BGL_EXPORTED_DEF long BGl_currentzd2secondszd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 295 */
			return bgl_current_seconds();
		}
	}



/* _current-seconds */
	obj_t BGl__currentzd2secondszd2zz__datez00(obj_t BgL_envz00_5188)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 295 */
			{	/* Llib/date.scm 296 */
				long BgL_auxz00_7679;

				BgL_auxz00_7679 = bgl_current_seconds();
				return make_belong(BgL_auxz00_7679);
			}
		}
	}



/* current-microseconds */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_currentzd2microsecondszd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 301 */
			return bgl_current_microseconds();
		}
	}



/* _current-microseconds */
	obj_t BGl__currentzd2microsecondszd2zz__datez00(obj_t BgL_envz00_5189)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 301 */
			return make_bllong(bgl_current_microseconds());
		}
	}



/* current-date */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2datezd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 307 */
			return bgl_seconds_to_date(bgl_current_seconds());
		}
	}



/* _current-date */
	obj_t BGl__currentzd2datezd2zz__datez00(obj_t BgL_envz00_5190)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 307 */
			return bgl_seconds_to_date(bgl_current_seconds());
		}
	}



/* seconds->date */
	BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3datez31zz__datez00(long
		BgL_elongz00_37)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 313 */
			return bgl_seconds_to_date(BgL_elongz00_37);
		}
	}



/* _seconds->date */
	obj_t BGl__secondszd2ze3datez31zz__datez00(obj_t BgL_envz00_5191,
		obj_t BgL_elongz00_5192)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 313 */
			{	/* Llib/date.scm 314 */
				long BgL_elongz00_5358;

				{	/* Llib/date.scm 314 */
					obj_t BgL_auxz00_7690;

					if (ELONGP(BgL_elongz00_5192))
						{	/* Llib/date.scm 314 */
							BgL_auxz00_7690 = BgL_elongz00_5192;
						}
					else
						{
							obj_t BgL_auxz00_7693;

							BgL_auxz00_7693 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 14105)), BGl_string3628z00zz__datez00,
								BGl_string3629z00zz__datez00, BgL_elongz00_5192);
							FAILURE(BgL_auxz00_7693, BFALSE, BFALSE);
						}
					BgL_elongz00_5358 = BELONG_TO_LONG(BgL_auxz00_7690);
				}
				return bgl_seconds_to_date(BgL_elongz00_5358);
			}
		}
	}



/* date->seconds */
	BGL_EXPORTED_DEF long BGl_datezd2ze3secondsz31zz__datez00(obj_t
		BgL_datez00_38)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 319 */
			return bgl_date_to_seconds(BgL_datez00_38);
		}
	}



/* _date->seconds */
	obj_t BGl__datezd2ze3secondsz31zz__datez00(obj_t BgL_envz00_5193,
		obj_t BgL_datez00_5194)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 319 */
			{	/* Llib/date.scm 320 */
				long BgL_auxz00_7700;

				{	/* Llib/date.scm 320 */
					obj_t BgL_datez00_5359;

					if (BGL_DATEP(BgL_datez00_5194))
						{	/* Llib/date.scm 320 */
							BgL_datez00_5359 = BgL_datez00_5194;
						}
					else
						{
							obj_t BgL_auxz00_7703;

							BgL_auxz00_7703 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 14396)), BGl_string3630z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_datez00_5194);
							FAILURE(BgL_auxz00_7703, BFALSE, BFALSE);
						}
					BgL_auxz00_7700 = bgl_date_to_seconds(BgL_datez00_5359);
				}
				return make_belong(BgL_auxz00_7700);
			}
		}
	}



/* date->string */
	BGL_EXPORTED_DEF obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t
		BgL_datez00_39)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 325 */
			return bgl_seconds_to_string(bgl_date_to_seconds(BgL_datez00_39));
		}
	}



/* _date->string */
	obj_t BGl__datezd2ze3stringz31zz__datez00(obj_t BgL_envz00_5195,
		obj_t BgL_datez00_5196)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 325 */
			{	/* Llib/date.scm 326 */
				obj_t BgL_datez00_5360;

				if (BGL_DATEP(BgL_datez00_5196))
					{	/* Llib/date.scm 326 */
						BgL_datez00_5360 = BgL_datez00_5196;
					}
				else
					{
						obj_t BgL_auxz00_7713;

						BgL_auxz00_7713 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
							BINT(((long) 14700)), BGl_string3631z00zz__datez00,
							BGl_string3612z00zz__datez00, BgL_datez00_5196);
						FAILURE(BgL_auxz00_7713, BFALSE, BFALSE);
					}
				return bgl_seconds_to_string(bgl_date_to_seconds(BgL_datez00_5360));
			}
		}
	}



/* date->utc-string */
	BGL_EXPORTED_DEF obj_t BGl_datezd2ze3utczd2stringze3zz__datez00(obj_t
		BgL_datez00_40)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 331 */
			return bgl_seconds_to_utc_string(bgl_date_to_seconds(BgL_datez00_40));
		}
	}



/* _date->utc-string */
	obj_t BGl__datezd2ze3utczd2stringze3zz__datez00(obj_t BgL_envz00_5197,
		obj_t BgL_datez00_5198)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 331 */
			{	/* Llib/date.scm 332 */
				obj_t BgL_datez00_5361;

				if (BGL_DATEP(BgL_datez00_5198))
					{	/* Llib/date.scm 332 */
						BgL_datez00_5361 = BgL_datez00_5198;
					}
				else
					{
						obj_t BgL_auxz00_7723;

						BgL_auxz00_7723 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
							BINT(((long) 15009)), BGl_string3632z00zz__datez00,
							BGl_string3612z00zz__datez00, BgL_datez00_5198);
						FAILURE(BgL_auxz00_7723, BFALSE, BFALSE);
					}
				return bgl_seconds_to_utc_string(bgl_date_to_seconds(BgL_datez00_5361));
			}
		}
	}



/* seconds->string */
	BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3stringz31zz__datez00(long
		BgL_secz00_41)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 337 */
			return bgl_seconds_to_string(BgL_secz00_41);
		}
	}



/* _seconds->string */
	obj_t BGl__secondszd2ze3stringz31zz__datez00(obj_t BgL_envz00_5199,
		obj_t BgL_secz00_5200)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 337 */
			{	/* Llib/date.scm 338 */
				long BgL_secz00_5362;

				{	/* Llib/date.scm 338 */
					obj_t BgL_auxz00_7730;

					if (ELONGP(BgL_secz00_5200))
						{	/* Llib/date.scm 338 */
							BgL_auxz00_7730 = BgL_secz00_5200;
						}
					else
						{
							obj_t BgL_auxz00_7733;

							BgL_auxz00_7733 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 15295)), BGl_string3633z00zz__datez00,
								BGl_string3629z00zz__datez00, BgL_secz00_5200);
							FAILURE(BgL_auxz00_7733, BFALSE, BFALSE);
						}
					BgL_secz00_5362 = BELONG_TO_LONG(BgL_auxz00_7730);
				}
				return bgl_seconds_to_string(BgL_secz00_5362);
			}
		}
	}



/* seconds->utc-string */
	BGL_EXPORTED_DEF obj_t BGl_secondszd2ze3utczd2stringze3zz__datez00(long
		BgL_secz00_42)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 343 */
			return bgl_seconds_to_utc_string(BgL_secz00_42);
		}
	}



/* _seconds->utc-string */
	obj_t BGl__secondszd2ze3utczd2stringze3zz__datez00(obj_t BgL_envz00_5201,
		obj_t BgL_secz00_5202)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 343 */
			{	/* Llib/date.scm 344 */
				long BgL_secz00_5363;

				{	/* Llib/date.scm 344 */
					obj_t BgL_auxz00_7740;

					if (ELONGP(BgL_secz00_5202))
						{	/* Llib/date.scm 344 */
							BgL_auxz00_7740 = BgL_secz00_5202;
						}
					else
						{
							obj_t BgL_auxz00_7743;

							BgL_auxz00_7743 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 15594)), BGl_string3634z00zz__datez00,
								BGl_string3629z00zz__datez00, BgL_secz00_5202);
							FAILURE(BgL_auxz00_7743, BFALSE, BFALSE);
						}
					BgL_secz00_5363 = BELONG_TO_LONG(BgL_auxz00_7740);
				}
				return bgl_seconds_to_utc_string(BgL_secz00_5363);
			}
		}
	}



/* day-seconds */
	BGL_EXPORTED_DEF long BGl_dayzd2secondszd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 349 */
			return ((long) 86400);
		}
	}



/* _day-seconds */
	obj_t BGl__dayzd2secondszd2zz__datez00(obj_t BgL_envz00_5203)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 349 */
			return make_belong(((long) 86400));
		}
	}



/* day-name */
	BGL_EXPORTED_DEF obj_t BGl_dayzd2namezd2zz__datez00(int BgL_dayz00_43)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 355 */
			if (((long) (BgL_dayz00_43) < ((long) 1)))
				{	/* Llib/date.scm 357 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3635z00zz__datez00,
						BGl_string3637z00zz__datez00, BINT(BgL_dayz00_43));
				}
			else
				{	/* Llib/date.scm 357 */
					if (((long) (BgL_dayz00_43) > ((long) 7)))
						{	/* Llib/date.scm 360 */
							long BgL_arg2994z00_2613;

							{	/* Llib/date.scm 360 */
								long BgL_arg2996z00_2615;

								{	/* Llib/date.scm 360 */
									long BgL_auxz00_7758;

									BgL_auxz00_7758 = (long) (BgL_dayz00_43);
									BgL_arg2996z00_2615 = (BgL_auxz00_7758 % ((long) 7));
								}
								BgL_arg2994z00_2613 = (((long) 1) + BgL_arg2996z00_2615);
							}
							return bgl_day_name((int) (BgL_arg2994z00_2613));
						}
					else
						{	/* Llib/date.scm 359 */
							return bgl_day_name(BgL_dayz00_43);
						}
				}
		}
	}



/* _day-name */
	obj_t BGl__dayzd2namezd2zz__datez00(obj_t BgL_envz00_5204,
		obj_t BgL_dayz00_5205)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 355 */
			{	/* Llib/date.scm 357 */
				int BgL_auxz00_7765;

				{	/* Llib/date.scm 357 */
					obj_t BgL_auxz00_7766;

					if (INTEGERP(BgL_dayz00_5205))
						{	/* Llib/date.scm 357 */
							BgL_auxz00_7766 = BgL_dayz00_5205;
						}
					else
						{
							obj_t BgL_auxz00_7769;

							BgL_auxz00_7769 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 16156)), BGl_string3638z00zz__datez00,
								BGl_string3609z00zz__datez00, BgL_dayz00_5205);
							FAILURE(BgL_auxz00_7769, BFALSE, BFALSE);
						}
					BgL_auxz00_7765 = CINT(BgL_auxz00_7766);
				}
				return BGl_dayzd2namezd2zz__datez00(BgL_auxz00_7765);
			}
		}
	}



/* day-aname */
	BGL_EXPORTED_DEF obj_t BGl_dayzd2anamezd2zz__datez00(int BgL_dayz00_44)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 367 */
			if (((long) (BgL_dayz00_44) < ((long) 1)))
				{	/* Llib/date.scm 369 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3639z00zz__datez00,
						BGl_string3637z00zz__datez00, BINT(BgL_dayz00_44));
				}
			else
				{	/* Llib/date.scm 369 */
					if (((long) (BgL_dayz00_44) > ((long) 7)))
						{	/* Llib/date.scm 372 */
							long BgL_arg3000z00_2618;

							{	/* Llib/date.scm 372 */
								long BgL_arg3002z00_2620;

								{	/* Llib/date.scm 372 */
									long BgL_auxz00_7783;

									BgL_auxz00_7783 = (long) (BgL_dayz00_44);
									BgL_arg3002z00_2620 = (BgL_auxz00_7783 % ((long) 7));
								}
								BgL_arg3000z00_2618 = (((long) 1) + BgL_arg3002z00_2620);
							}
							return bgl_day_aname((int) (BgL_arg3000z00_2618));
						}
					else
						{	/* Llib/date.scm 371 */
							return bgl_day_aname(BgL_dayz00_44);
						}
				}
		}
	}



/* _day-aname */
	obj_t BGl__dayzd2anamezd2zz__datez00(obj_t BgL_envz00_5206,
		obj_t BgL_dayz00_5207)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 367 */
			{	/* Llib/date.scm 369 */
				int BgL_auxz00_7790;

				{	/* Llib/date.scm 369 */
					obj_t BgL_auxz00_7791;

					if (INTEGERP(BgL_dayz00_5207))
						{	/* Llib/date.scm 369 */
							BgL_auxz00_7791 = BgL_dayz00_5207;
						}
					else
						{
							obj_t BgL_auxz00_7794;

							BgL_auxz00_7794 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 16599)), BGl_string3641z00zz__datez00,
								BGl_string3609z00zz__datez00, BgL_dayz00_5207);
							FAILURE(BgL_auxz00_7794, BFALSE, BFALSE);
						}
					BgL_auxz00_7790 = CINT(BgL_auxz00_7791);
				}
				return BGl_dayzd2anamezd2zz__datez00(BgL_auxz00_7790);
			}
		}
	}



/* month-name */
	BGL_EXPORTED_DEF obj_t BGl_monthzd2namezd2zz__datez00(int BgL_monthz00_45)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 379 */
			if (((long) (BgL_monthz00_45) < ((long) 1)))
				{	/* Llib/date.scm 381 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3642z00zz__datez00,
						BGl_string3644z00zz__datez00, BINT(BgL_monthz00_45));
				}
			else
				{	/* Llib/date.scm 381 */
					if (((long) (BgL_monthz00_45) > ((long) 12)))
						{	/* Llib/date.scm 384 */
							long BgL_arg3005z00_2623;

							{	/* Llib/date.scm 384 */
								long BgL_arg3007z00_2625;

								{	/* Llib/date.scm 384 */
									long BgL_auxz00_7808;

									BgL_auxz00_7808 = (long) (BgL_monthz00_45);
									BgL_arg3007z00_2625 = (BgL_auxz00_7808 % ((long) 12));
								}
								BgL_arg3005z00_2623 = (((long) 1) + BgL_arg3007z00_2625);
							}
							return bgl_month_name((int) (BgL_arg3005z00_2623));
						}
					else
						{	/* Llib/date.scm 383 */
							return bgl_month_name(BgL_monthz00_45);
						}
				}
		}
	}



/* _month-name */
	obj_t BGl__monthzd2namezd2zz__datez00(obj_t BgL_envz00_5208,
		obj_t BgL_monthz00_5209)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 379 */
			{	/* Llib/date.scm 381 */
				int BgL_auxz00_7815;

				{	/* Llib/date.scm 381 */
					obj_t BgL_auxz00_7816;

					if (INTEGERP(BgL_monthz00_5209))
						{	/* Llib/date.scm 381 */
							BgL_auxz00_7816 = BgL_monthz00_5209;
						}
					else
						{
							obj_t BgL_auxz00_7819;

							BgL_auxz00_7819 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 17048)), BGl_string3645z00zz__datez00,
								BGl_string3609z00zz__datez00, BgL_monthz00_5209);
							FAILURE(BgL_auxz00_7819, BFALSE, BFALSE);
						}
					BgL_auxz00_7815 = CINT(BgL_auxz00_7816);
				}
				return BGl_monthzd2namezd2zz__datez00(BgL_auxz00_7815);
			}
		}
	}



/* month-aname */
	BGL_EXPORTED_DEF obj_t BGl_monthzd2anamezd2zz__datez00(int BgL_monthz00_46)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 391 */
			if (((long) (BgL_monthz00_46) < ((long) 1)))
				{	/* Llib/date.scm 393 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3642z00zz__datez00,
						BGl_string3644z00zz__datez00, BINT(BgL_monthz00_46));
				}
			else
				{	/* Llib/date.scm 393 */
					if (((long) (BgL_monthz00_46) > ((long) 12)))
						{	/* Llib/date.scm 396 */
							long BgL_arg3010z00_2628;

							{	/* Llib/date.scm 396 */
								long BgL_arg3012z00_2630;

								{	/* Llib/date.scm 396 */
									long BgL_auxz00_7833;

									BgL_auxz00_7833 = (long) (BgL_monthz00_46);
									BgL_arg3012z00_2630 = (BgL_auxz00_7833 % ((long) 12));
								}
								BgL_arg3010z00_2628 = (((long) 1) + BgL_arg3012z00_2630);
							}
							return bgl_month_aname((int) (BgL_arg3010z00_2628));
						}
					else
						{	/* Llib/date.scm 395 */
							return bgl_month_aname(BgL_monthz00_46);
						}
				}
		}
	}



/* _month-aname */
	obj_t BGl__monthzd2anamezd2zz__datez00(obj_t BgL_envz00_5210,
		obj_t BgL_monthz00_5211)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 391 */
			{	/* Llib/date.scm 393 */
				int BgL_auxz00_7840;

				{	/* Llib/date.scm 393 */
					obj_t BgL_auxz00_7841;

					if (INTEGERP(BgL_monthz00_5211))
						{	/* Llib/date.scm 393 */
							BgL_auxz00_7841 = BgL_monthz00_5211;
						}
					else
						{
							obj_t BgL_auxz00_7844;

							BgL_auxz00_7844 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 17516)), BGl_string3646z00zz__datez00,
								BGl_string3609z00zz__datez00, BgL_monthz00_5211);
							FAILURE(BgL_auxz00_7844, BFALSE, BFALSE);
						}
					BgL_auxz00_7840 = CINT(BgL_auxz00_7841);
				}
				return BGl_monthzd2anamezd2zz__datez00(BgL_auxz00_7840);
			}
		}
	}



/* date-month-length */
	BGL_EXPORTED_DEF int BGl_datezd2monthzd2lengthz00zz__datez00(obj_t
		BgL_dz00_47)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 408 */
			{	/* Llib/date.scm 409 */
				int BgL_mz00_2631;

				BgL_mz00_2631 = BGL_DATE_MONTH(BgL_dz00_47);
				if (((long) (BgL_mz00_2631) == ((long) 2)))
					{	/* Llib/date.scm 411 */
						bool_t BgL_testz00_7854;

						{	/* Llib/date.scm 411 */
							int BgL_arg3015z00_2634;

							BgL_arg3015z00_2634 = BGL_DATE_YEAR(BgL_dz00_47);
							{	/* Llib/date.scm 411 */
								bool_t BgL_res3390z00_4867;

								{	/* Llib/date.scm 411 */
									bool_t BgL_testz00_7856;

									{	/* Llib/date.scm 411 */
										long BgL_arg3022z00_4847;

										{	/* Llib/date.scm 411 */
											long BgL_auxz00_7857;

											BgL_auxz00_7857 = (long) (BgL_arg3015z00_2634);
											BgL_arg3022z00_4847 = (BgL_auxz00_7857 % ((long) 4));
										}
										BgL_testz00_7856 = (BgL_arg3022z00_4847 == ((long) 0));
									}
									if (BgL_testz00_7856)
										{	/* Llib/date.scm 411 */
											bool_t BgL__ortest_1833z00_4849;

											{	/* Llib/date.scm 411 */
												bool_t BgL_testz00_7861;

												{	/* Llib/date.scm 411 */
													long BgL_arg3020z00_4851;

													{	/* Llib/date.scm 411 */
														long BgL_auxz00_7862;

														BgL_auxz00_7862 = (long) (BgL_arg3015z00_2634);
														BgL_arg3020z00_4851 =
															(BgL_auxz00_7862 % ((long) 100));
													}
													BgL_testz00_7861 =
														(BgL_arg3020z00_4851 == ((long) 0));
												}
												if (BgL_testz00_7861)
													{	/* Llib/date.scm 411 */
														BgL__ortest_1833z00_4849 = ((bool_t) 0);
													}
												else
													{	/* Llib/date.scm 411 */
														BgL__ortest_1833z00_4849 = ((bool_t) 1);
													}
											}
											if (BgL__ortest_1833z00_4849)
												{	/* Llib/date.scm 411 */
													BgL_res3390z00_4867 = BgL__ortest_1833z00_4849;
												}
											else
												{	/* Llib/date.scm 411 */
													long BgL_arg3017z00_4853;

													{	/* Llib/date.scm 411 */
														long BgL_auxz00_7867;

														BgL_auxz00_7867 = (long) (BgL_arg3015z00_2634);
														BgL_arg3017z00_4853 =
															(BgL_auxz00_7867 % ((long) 400));
													}
													BgL_res3390z00_4867 =
														(BgL_arg3017z00_4853 == ((long) 0));
										}}
									else
										{	/* Llib/date.scm 411 */
											BgL_res3390z00_4867 = ((bool_t) 0);
										}
								}
								BgL_testz00_7854 = BgL_res3390z00_4867;
							}
						}
						if (BgL_testz00_7854)
							{	/* Llib/date.scm 411 */
								return (int) (((long) 29));
							}
						else
							{	/* Llib/date.scm 411 */
								return (int) (((long) 28));
					}}
				else
					{	/* Llib/date.scm 412 */
						long BgL_arg3016z00_2635;

						BgL_arg3016z00_2635 = ((long) (BgL_mz00_2631) - ((long) 1));
						{	/* Llib/date.scm 412 */
							obj_t BgL_vectorz00_4870;

							int BgL_kz00_4871;

							BgL_vectorz00_4870 = BGl_za2monthzd2lengthsza2zd2zz__datez00;
							BgL_kz00_4871 = (int) (BgL_arg3016z00_2635);
							return CINT(VECTOR_REF(BgL_vectorz00_4870, BgL_kz00_4871));
						}
					}
			}
		}
	}



/* _date-month-length */
	obj_t BGl__datezd2monthzd2lengthz00zz__datez00(obj_t BgL_envz00_5212,
		obj_t BgL_dz00_5213)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 408 */
			{	/* Llib/date.scm 409 */
				int BgL_auxz00_7878;

				{	/* Llib/date.scm 409 */
					obj_t BgL_auxz00_7879;

					if (BGL_DATEP(BgL_dz00_5213))
						{	/* Llib/date.scm 409 */
							BgL_auxz00_7879 = BgL_dz00_5213;
						}
					else
						{
							obj_t BgL_auxz00_7882;

							BgL_auxz00_7882 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
								BINT(((long) 18263)), BGl_string3647z00zz__datez00,
								BGl_string3612z00zz__datez00, BgL_dz00_5213);
							FAILURE(BgL_auxz00_7882, BFALSE, BFALSE);
						}
					BgL_auxz00_7878 =
						BGl_datezd2monthzd2lengthz00zz__datez00(BgL_auxz00_7879);
				}
				return BINT(BgL_auxz00_7878);
			}
		}
	}



/* leap-year? */
	BGL_EXPORTED_DEF bool_t BGl_leapzd2yearzf3z21zz__datez00(int BgL_yearz00_48)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 417 */
			{	/* Llib/date.scm 418 */
				bool_t BgL_testz00_7888;

				{	/* Llib/date.scm 418 */
					long BgL_arg3022z00_5364;

					{	/* Llib/date.scm 418 */
						long BgL_auxz00_7889;

						BgL_auxz00_7889 = (long) (BgL_yearz00_48);
						BgL_arg3022z00_5364 = (BgL_auxz00_7889 % ((long) 4));
					}
					BgL_testz00_7888 = (BgL_arg3022z00_5364 == ((long) 0));
				}
				if (BgL_testz00_7888)
					{	/* Llib/date.scm 418 */
						bool_t BgL__ortest_1833z00_5365;

						{	/* Llib/date.scm 418 */
							bool_t BgL_testz00_7893;

							{	/* Llib/date.scm 418 */
								long BgL_arg3020z00_5366;

								{	/* Llib/date.scm 418 */
									long BgL_auxz00_7894;

									BgL_auxz00_7894 = (long) (BgL_yearz00_48);
									BgL_arg3020z00_5366 = (BgL_auxz00_7894 % ((long) 100));
								}
								BgL_testz00_7893 = (BgL_arg3020z00_5366 == ((long) 0));
							}
							if (BgL_testz00_7893)
								{	/* Llib/date.scm 418 */
									BgL__ortest_1833z00_5365 = ((bool_t) 0);
								}
							else
								{	/* Llib/date.scm 418 */
									BgL__ortest_1833z00_5365 = ((bool_t) 1);
								}
						}
						if (BgL__ortest_1833z00_5365)
							{	/* Llib/date.scm 418 */
								return BgL__ortest_1833z00_5365;
							}
						else
							{	/* Llib/date.scm 418 */
								long BgL_arg3017z00_5367;

								{	/* Llib/date.scm 418 */
									long BgL_auxz00_7899;

									BgL_auxz00_7899 = (long) (BgL_yearz00_48);
									BgL_arg3017z00_5367 = (BgL_auxz00_7899 % ((long) 400));
								}
								return (BgL_arg3017z00_5367 == ((long) 0));
					}}
				else
					{	/* Llib/date.scm 418 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _leap-year? */
	obj_t BGl__leapzd2yearzf3z21zz__datez00(obj_t BgL_envz00_5214,
		obj_t BgL_yearz00_5215)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 417 */
			{	/* Llib/date.scm 418 */
				bool_t BgL_auxz00_7903;

				{	/* Llib/date.scm 418 */
					int BgL_yearz00_5368;

					{	/* Llib/date.scm 418 */
						obj_t BgL_auxz00_7904;

						if (INTEGERP(BgL_yearz00_5215))
							{	/* Llib/date.scm 418 */
								BgL_auxz00_7904 = BgL_yearz00_5215;
							}
						else
							{
								obj_t BgL_auxz00_7907;

								BgL_auxz00_7907 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
									BINT(((long) 18664)), BGl_string3648z00zz__datez00,
									BGl_string3609z00zz__datez00, BgL_yearz00_5215);
								FAILURE(BgL_auxz00_7907, BFALSE, BFALSE);
							}
						BgL_yearz00_5368 = CINT(BgL_auxz00_7904);
					}
					{	/* Llib/date.scm 418 */
						bool_t BgL_testz00_7912;

						{	/* Llib/date.scm 418 */
							long BgL_arg3022z00_5369;

							{	/* Llib/date.scm 418 */
								long BgL_auxz00_7913;

								BgL_auxz00_7913 = (long) (BgL_yearz00_5368);
								BgL_arg3022z00_5369 = (BgL_auxz00_7913 % ((long) 4));
							}
							BgL_testz00_7912 = (BgL_arg3022z00_5369 == ((long) 0));
						}
						if (BgL_testz00_7912)
							{	/* Llib/date.scm 418 */
								bool_t BgL__ortest_1833z00_5370;

								{	/* Llib/date.scm 418 */
									bool_t BgL_testz00_7917;

									{	/* Llib/date.scm 418 */
										long BgL_arg3020z00_5371;

										{	/* Llib/date.scm 418 */
											long BgL_auxz00_7918;

											BgL_auxz00_7918 = (long) (BgL_yearz00_5368);
											BgL_arg3020z00_5371 = (BgL_auxz00_7918 % ((long) 100));
										}
										BgL_testz00_7917 = (BgL_arg3020z00_5371 == ((long) 0));
									}
									if (BgL_testz00_7917)
										{	/* Llib/date.scm 418 */
											BgL__ortest_1833z00_5370 = ((bool_t) 0);
										}
									else
										{	/* Llib/date.scm 418 */
											BgL__ortest_1833z00_5370 = ((bool_t) 1);
										}
								}
								if (BgL__ortest_1833z00_5370)
									{	/* Llib/date.scm 418 */
										BgL_auxz00_7903 = BgL__ortest_1833z00_5370;
									}
								else
									{	/* Llib/date.scm 418 */
										long BgL_arg3017z00_5372;

										{	/* Llib/date.scm 418 */
											long BgL_auxz00_7923;

											BgL_auxz00_7923 = (long) (BgL_yearz00_5368);
											BgL_arg3017z00_5372 = (BgL_auxz00_7923 % ((long) 400));
										}
										BgL_auxz00_7903 = (BgL_arg3017z00_5372 == ((long) 0));
							}}
						else
							{	/* Llib/date.scm 418 */
								BgL_auxz00_7903 = ((bool_t) 0);
							}
					}
				}
				return BBOOL(BgL_auxz00_7903);
			}
		}
	}



/* rfc2822-date->date */
	BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t
		BgL_stringz00_49)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 425 */
			{	/* Llib/date.scm 426 */
				obj_t BgL_portz00_2645;

				{	/* Ieee/port.scm 376 */

					BgL_portz00_2645 =
						BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_stringz00_49,
						BINT(((long) 0)));
				}
				{	/* Llib/date.scm 427 */
					obj_t BgL_val1834z00_2646;

					BgL_val1834z00_2646 =
						BGl_zc3exitza33027ze3z83zz__datez00(BgL_portz00_2645);
					bgl_close_input_port(BgL_portz00_2645);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1834z00_2646)))
						{	/* Llib/date.scm 429 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1834z00_2646),
								CDR(BgL_val1834z00_2646));
						}
					else
						{	/* Llib/date.scm 429 */
							return BgL_val1834z00_2646;
						}
				}
			}
		}
	}



/* <exit:3027> */
	obj_t BGl_zc3exitza33027ze3z83zz__datez00(obj_t BgL_portz00_5222)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 429 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1835z00_2651;

			if (SET_EXIT(BgL_an_exit1835z00_2651))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1835z00_2651 = (void *) jmpbuf;
					{	/* Llib/date.scm 429 */

						PUSH_EXIT(BgL_an_exit1835z00_2651, ((long) 0));
						{	/* Llib/date.scm 428 */
							obj_t BgL_val1836z00_2652;

							{	/* Llib/date.scm 428 */
								obj_t BgL_res3391z00_4894;

								{	/* Llib/date.scm 428 */
									obj_t BgL_ipz00_4893;

									BgL_ipz00_4893 = BgL_portz00_5222;
									BgL_res3391z00_4894 =
										PROCEDURE_ENTRY(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00)
										(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00,
										BgL_ipz00_4893, BEOA);
								}
								BgL_val1836z00_2652 = BgL_res3391z00_4894;
							}
							POP_EXIT();
							return BgL_val1836z00_2652;
						}
					}
				}
		}
	}



/* _rfc2822-date->date */
	obj_t BGl__rfc2822zd2datezd2ze3dateze3zz__datez00(obj_t BgL_envz00_5216,
		obj_t BgL_stringz00_5217)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 425 */
			{	/* Llib/date.scm 426 */
				obj_t BgL_auxz00_7944;

				if (STRINGP(BgL_stringz00_5217))
					{	/* Llib/date.scm 426 */
						BgL_auxz00_7944 = BgL_stringz00_5217;
					}
				else
					{
						obj_t BgL_auxz00_7947;

						BgL_auxz00_7947 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
							BINT(((long) 19031)), BGl_string3649z00zz__datez00,
							BGl_string3650z00zz__datez00, BgL_stringz00_5217);
						FAILURE(BgL_auxz00_7947, BFALSE, BFALSE);
					}
				return BGl_rfc2822zd2datezd2ze3dateze3zz__datez00(BgL_auxz00_7944);
			}
		}
	}



/* rfc2822-parse-date */
	BGL_EXPORTED_DEF obj_t BGl_rfc2822zd2parsezd2datez00zz__datez00(obj_t
		BgL_ipz00_50)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 434 */
			return
				PROCEDURE_ENTRY(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00)
				(BGl_dayzd2ofzd2weekzd2grammarzd2zz__datez00, BgL_ipz00_50, BEOA);
		}
	}



/* _rfc2822-parse-date */
	obj_t BGl__rfc2822zd2parsezd2datez00zz__datez00(obj_t BgL_envz00_5218,
		obj_t BgL_ipz00_5219)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 434 */
			{	/* Llib/date.scm 435 */
				obj_t BgL_auxz00_7954;

				if (INPUT_PORTP(BgL_ipz00_5219))
					{	/* Llib/date.scm 435 */
						BgL_auxz00_7954 = BgL_ipz00_5219;
					}
				else
					{
						obj_t BgL_auxz00_7957;

						BgL_auxz00_7957 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
							BINT(((long) 19421)), BGl_string3651z00zz__datez00,
							BGl_string3652z00zz__datez00, BgL_ipz00_5219);
						FAILURE(BgL_auxz00_7957, BFALSE, BFALSE);
					}
				return BGl_rfc2822zd2parsezd2datez00zz__datez00(BgL_auxz00_7954);
			}
		}
	}



/* date->rfc2822-date */
	BGL_EXPORTED_DEF obj_t BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t
		BgL_datez00_51)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 440 */
			{
				obj_t BgL_datez00_2692;

				long BgL_timeza7oneza7_2693;

				{	/* Llib/date.scm 463 */
					bool_t BgL_testz00_7962;

					{	/* Llib/date.scm 463 */
						int BgL_arg3041z00_2681;

						BgL_arg3041z00_2681 = BGL_DATE_ISDST(BgL_datez00_51);
						BgL_testz00_7962 = ((long) (BgL_arg3041z00_2681) > ((long) 0));
					}
					if (BgL_testz00_7962)
						{	/* Llib/date.scm 464 */
							obj_t BgL_dateuz00_2658;

							{	/* Llib/date.scm 464 */
								int BgL_arg3032z00_2663;

								int BgL_arg3033z00_2664;

								int BgL_arg3034z00_2665;

								int BgL_arg3035z00_2666;

								int BgL_arg3036z00_2667;

								int BgL_arg3037z00_2668;

								BgL_arg3032z00_2663 = BGL_DATE_SECOND(BgL_datez00_51);
								BgL_arg3033z00_2664 = BGL_DATE_MINUTE(BgL_datez00_51);
								BgL_arg3034z00_2665 = BGL_DATE_HOUR(BgL_datez00_51);
								BgL_arg3035z00_2666 = BGL_DATE_DAY(BgL_datez00_51);
								BgL_arg3036z00_2667 = BGL_DATE_MONTH(BgL_datez00_51);
								BgL_arg3037z00_2668 = BGL_DATE_YEAR(BgL_datez00_51);
								{	/* Llib/date.scm 464 */
									obj_t BgL_dayz00_4907;

									obj_t BgL_dstz00_4908;

									obj_t BgL_hourz00_4909;

									obj_t BgL_minz00_4910;

									obj_t BgL_monthz00_4911;

									obj_t BgL_secz00_4913;

									obj_t BgL_timeza7oneza7_4914;

									obj_t BgL_yearz00_4915;

									BgL_dayz00_4907 = BINT(BgL_arg3035z00_2666);
									BgL_dstz00_4908 = BINT(((long) 0));
									BgL_hourz00_4909 = BINT(BgL_arg3034z00_2665);
									BgL_minz00_4910 = BINT(BgL_arg3033z00_2664);
									BgL_monthz00_4911 = BINT(BgL_arg3036z00_2667);
									BgL_secz00_4913 = BINT(BgL_arg3032z00_2663);
									BgL_timeza7oneza7_4914 = BINT(((long) 0));
									BgL_yearz00_4915 = BINT(BgL_arg3037z00_2668);
									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BgL_timeza7oneza7_4914))
										{	/* Llib/date.scm 464 */
											BgL_dateuz00_2658 =
												bgl_make_date(CINT(BgL_secz00_4913),
												CINT(BgL_minz00_4910),
												CINT(BgL_hourz00_4909),
												CINT(BgL_dayz00_4907),
												CINT(BgL_monthz00_4911),
												CINT(BgL_yearz00_4915),
												(long) CINT(BgL_timeza7oneza7_4914), ((bool_t) 1),
												CINT(BgL_dstz00_4908));
										}
									else
										{	/* Llib/date.scm 464 */
											BgL_dateuz00_2658 =
												bgl_make_date(CINT(BgL_secz00_4913),
												CINT(BgL_minz00_4910),
												CINT(BgL_hourz00_4909),
												CINT(BgL_dayz00_4907),
												CINT(BgL_monthz00_4911),
												CINT(BgL_yearz00_4915), ((long) 0), ((bool_t) 0),
												CINT(BgL_dstz00_4908));
							}}}
							{	/* Llib/date.scm 464 */
								long BgL_secuz00_2659;

								BgL_secuz00_2659 = bgl_date_to_seconds(BgL_dateuz00_2658);
								{	/* Llib/date.scm 472 */
									long BgL_secz00_2660;

									BgL_secz00_2660 = bgl_date_to_seconds(BgL_datez00_51);
									{	/* Llib/date.scm 473 */

										{	/* Llib/date.scm 474 */
											long BgL_arg3030z00_2661;

											{	/* Llib/date.scm 474 */
												long BgL_arg3031z00_2662;

												{	/* Llib/date.scm 474 */
													long BgL_res3392z00_4921;

													{	/* Llib/date.scm 474 */
														long BgL_auxz00_8001;

														BgL_auxz00_8001 =
															(BgL_secz00_2660 - BgL_secuz00_2659);
														BgL_res3392z00_4921 =
															LONG_TO_ELONG(BgL_auxz00_8001);
													}
													BgL_arg3031z00_2662 = BgL_res3392z00_4921;
												}
												{	/* Llib/date.scm 474 */
													long BgL_res3393z00_4923;

													{	/* Llib/date.scm 474 */
														long BgL_auxz00_8004;

														{	/* Llib/date.scm 474 */
															long BgL_auxz00_8005;

															BgL_auxz00_8005 =
																ELONG_TO_LONG(BgL_arg3031z00_2662);
															BgL_auxz00_8004 = ELONG_TO_LONG(BgL_auxz00_8005);
														}
														BgL_res3393z00_4923 =
															ELONG_TO_LONG(BgL_auxz00_8004);
													}
													BgL_arg3030z00_2661 = BgL_res3393z00_4923;
											}}
											BgL_datez00_2692 = BgL_datez00_51;
											BgL_timeza7oneza7_2693 = BgL_arg3030z00_2661;
										BgL_zc3anonymousza33050ze3z83_2694:
											{	/* Llib/date.scm 448 */
												long BgL_tza7za7_2695;

												BgL_tza7za7_2695 =
													(BgL_timeza7oneza7_2693 / ((long) 60));
												{	/* Llib/date.scm 448 */
													long BgL_hz00_2696;

													BgL_hz00_2696 = (BgL_tza7za7_2695 / ((long) 60));
													{	/* Llib/date.scm 449 */
														long BgL_mz00_2697;

														BgL_mz00_2697 = (BgL_tza7za7_2695 % ((long) 60));
														{	/* Llib/date.scm 450 */

															{	/* Llib/date.scm 451 */
																obj_t BgL_arg3052z00_2699;

																int BgL_arg3053z00_2700;

																obj_t BgL_arg3054z00_2701;

																int BgL_arg3055z00_2702;

																obj_t BgL_arg3056z00_2703;

																obj_t BgL_arg3057z00_2704;

																obj_t BgL_arg3058z00_2705;

																obj_t BgL_arg3059z00_2706;

																obj_t BgL_arg3060z00_2707;

																obj_t BgL_arg3061z00_2708;

																{	/* Llib/date.scm 452 */
																	int BgL_arg3072z00_2719;

																	BgL_arg3072z00_2719 =
																		BGL_DATE_WDAY(BgL_datez00_2692);
																	BgL_arg3052z00_2699 =
																		BGl_dayzd2anamezd2zz__datez00
																		(BgL_arg3072z00_2719);
																}
																BgL_arg3053z00_2700 =
																	BGL_DATE_DAY(BgL_datez00_2692);
																{	/* Llib/date.scm 454 */
																	int BgL_arg3073z00_2720;

																	BgL_arg3073z00_2720 =
																		BGL_DATE_MONTH(BgL_datez00_2692);
																	BgL_arg3054z00_2701 =
																		BGl_monthzd2anamezd2zz__datez00
																		(BgL_arg3073z00_2720);
																}
																BgL_arg3055z00_2702 =
																	BGL_DATE_YEAR(BgL_datez00_2692);
																{	/* Llib/date.scm 456 */
																	int BgL_arg3074z00_2721;

																	BgL_arg3074z00_2721 =
																		BGL_DATE_HOUR(BgL_datez00_2692);
																	BgL_arg3056z00_2703 =
																		BGl_2digitsz00zz__datez00
																		(BgL_arg3074z00_2721);
																}
																{	/* Llib/date.scm 457 */
																	int BgL_arg3075z00_2722;

																	BgL_arg3075z00_2722 =
																		BGL_DATE_MINUTE(BgL_datez00_2692);
																	BgL_arg3057z00_2704 =
																		BGl_2digitsz00zz__datez00
																		(BgL_arg3075z00_2722);
																}
																{	/* Llib/date.scm 458 */
																	int BgL_arg3076z00_2723;

																	BgL_arg3076z00_2723 =
																		BGL_DATE_SECOND(BgL_datez00_2692);
																	BgL_arg3058z00_2705 =
																		BGl_2digitsz00zz__datez00
																		(BgL_arg3076z00_2723);
																}
																if ((BgL_tza7za7_2695 < ((long) 0)))
																	{	/* Llib/date.scm 459 */
																		BgL_arg3059z00_2706 =
																			BGl_string3653z00zz__datez00;
																	}
																else
																	{	/* Llib/date.scm 459 */
																		BgL_arg3059z00_2706 =
																			BGl_string3654z00zz__datez00;
																	}
																{	/* Llib/date.scm 460 */
																	long BgL_arg3078z00_2725;

																	if ((BgL_hz00_2696 < ((long) 0)))
																		{	/* Llib/date.scm 460 */
																			BgL_arg3078z00_2725 = NEG(BgL_hz00_2696);
																		}
																	else
																		{	/* Llib/date.scm 460 */
																			BgL_arg3078z00_2725 = BgL_hz00_2696;
																		}
																	BgL_arg3060z00_2707 =
																		BGl_2digitsz00zz__datez00(
																		(int) (BgL_arg3078z00_2725));
																}
																BgL_arg3061z00_2708 =
																	BGl_2digitsz00zz__datez00(
																	(int) (BgL_mz00_2697));
																{	/* Llib/date.scm 451 */
																	obj_t BgL_list3062z00_2709;

																	{	/* Llib/date.scm 451 */
																		obj_t BgL_arg3063z00_2710;

																		{	/* Llib/date.scm 451 */
																			obj_t BgL_arg3064z00_2711;

																			{	/* Llib/date.scm 451 */
																				obj_t BgL_arg3065z00_2712;

																				{	/* Llib/date.scm 451 */
																					obj_t BgL_arg3066z00_2713;

																					{	/* Llib/date.scm 451 */
																						obj_t BgL_arg3067z00_2714;

																						{	/* Llib/date.scm 451 */
																							obj_t BgL_arg3068z00_2715;

																							{	/* Llib/date.scm 451 */
																								obj_t BgL_arg3069z00_2716;

																								{	/* Llib/date.scm 451 */
																									obj_t BgL_arg3070z00_2717;

																									{	/* Llib/date.scm 451 */
																										obj_t BgL_arg3071z00_2718;

																										BgL_arg3071z00_2718 =
																											MAKE_PAIR
																											(BgL_arg3061z00_2708,
																											BNIL);
																										BgL_arg3070z00_2717 =
																											MAKE_PAIR
																											(BgL_arg3060z00_2707,
																											BgL_arg3071z00_2718);
																									}
																									BgL_arg3069z00_2716 =
																										MAKE_PAIR
																										(BgL_arg3059z00_2706,
																										BgL_arg3070z00_2717);
																								}
																								BgL_arg3068z00_2715 =
																									MAKE_PAIR(BgL_arg3058z00_2705,
																									BgL_arg3069z00_2716);
																							}
																							BgL_arg3067z00_2714 =
																								MAKE_PAIR(BgL_arg3057z00_2704,
																								BgL_arg3068z00_2715);
																						}
																						BgL_arg3066z00_2713 =
																							MAKE_PAIR(BgL_arg3056z00_2703,
																							BgL_arg3067z00_2714);
																					}
																					BgL_arg3065z00_2712 =
																						MAKE_PAIR(BINT(BgL_arg3055z00_2702),
																						BgL_arg3066z00_2713);
																				}
																				BgL_arg3064z00_2711 =
																					MAKE_PAIR(BgL_arg3054z00_2701,
																					BgL_arg3065z00_2712);
																			}
																			BgL_arg3063z00_2710 =
																				MAKE_PAIR(BINT(BgL_arg3053z00_2700),
																				BgL_arg3064z00_2711);
																		}
																		BgL_list3062z00_2709 =
																			MAKE_PAIR(BgL_arg3052z00_2699,
																			BgL_arg3063z00_2710);
																	}
																	return
																		BGl_formatz00zz__r4_output_6_10_3z00
																		(BGl_string3655z00zz__datez00,
																		BgL_list3062z00_2709);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					else
						{	/* Llib/date.scm 475 */
							long BgL_arg3040z00_2680;

							BgL_arg3040z00_2680 = BGL_DATE_TIMEZONE(BgL_datez00_51);
							{
								long BgL_timeza7oneza7_8048;

								obj_t BgL_datez00_8047;

								BgL_datez00_8047 = BgL_datez00_51;
								BgL_timeza7oneza7_8048 = BgL_arg3040z00_2680;
								BgL_timeza7oneza7_2693 = BgL_timeza7oneza7_8048;
								BgL_datez00_2692 = BgL_datez00_8047;
								goto BgL_zc3anonymousza33050ze3z83_2694;
							}
						}
				}
			}
		}
	}



/* 2digits */
	obj_t BGl_2digitsz00zz__datez00(int BgL_numz00_2683)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 445 */
			if (((long) (BgL_numz00_2683) < ((long) 10)))
				{	/* Llib/date.scm 444 */
					unsigned char BgL_arg3045z00_2686;

					BgL_arg3045z00_2686 = ((((long) 48) + (long) (BgL_numz00_2683)));
					{	/* Llib/date.scm 444 */
						obj_t BgL_list3046z00_2687;

						{	/* Llib/date.scm 444 */
							obj_t BgL_arg3047z00_2688;

							BgL_arg3047z00_2688 = MAKE_PAIR(BCHAR(BgL_arg3045z00_2686), BNIL);
							BgL_list3046z00_2687 =
								MAKE_PAIR(BCHAR(((unsigned char) '0')), BgL_arg3047z00_2688);
						}
						return
							BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
							(BgL_list3046z00_2687);
					}
				}
			else
				{	/* Ieee/fixnum.scm 355 */

					return
						BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
						(long) (BgL_numz00_2683), ((long) 10));
		}}
	}



/* _date->rfc2822-date */
	obj_t BGl__datezd2ze3rfc2822zd2dateze3zz__datez00(obj_t BgL_envz00_5220,
		obj_t BgL_datez00_5221)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 440 */
			{	/* Llib/date.scm 443 */
				obj_t BgL_auxz00_8062;

				if (BGL_DATEP(BgL_datez00_5221))
					{	/* Llib/date.scm 443 */
						BgL_auxz00_8062 = BgL_datez00_5221;
					}
				else
					{
						obj_t BgL_auxz00_8065;

						BgL_auxz00_8065 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3607z00zz__datez00,
							BINT(((long) 19747)), BGl_string3656z00zz__datez00,
							BGl_string3612z00zz__datez00, BgL_datez00_5221);
						FAILURE(BgL_auxz00_8065, BFALSE, BFALSE);
					}
				return BGl_datezd2ze3rfc2822zd2dateze3zz__datez00(BgL_auxz00_8062);
			}
		}
	}



/* parse-error */
	obj_t BGl_parsezd2errorzd2zz__datez00(obj_t BgL_procz00_52,
		obj_t BgL_messagez00_53, obj_t BgL_objz00_54, obj_t BgL_portz00_55)
	{
		AN_OBJECT;
		{	/* Llib/date.scm 480 */
			{	/* Llib/date.scm 488 */
				BgL_z62iozd2parsezd2errorz62_bglt BgL_arg3079z00_2728;

				{	/* Llib/date.scm 488 */
					obj_t BgL_arg3081z00_2729;

					long BgL_arg3082z00_2730;

					obj_t BgL_arg3083z00_2731;

					obj_t BgL_arg3084z00_2732;

					BgL_arg3081z00_2729 = INPUT_PORT_NAME(BgL_portz00_55);
					BgL_arg3082z00_2730 = INPUT_PORT_FILEPOS(BgL_portz00_55);
					{	/* Llib/object.scm 90 */

						{	/* Llib/object.scm 90 */

							BgL_arg3083z00_2731 =
								BGl_getzd2tracezd2stackz00zz__errorz00(BFALSE);
					}}
					if (CHARP(BgL_objz00_54))
						{	/* Llib/date.scm 486 */
							obj_t BgL_arg3087z00_2736;

							obj_t BgL_arg3089z00_2738;

							{	/* Llib/date.scm 486 */
								obj_t BgL_list3094z00_2743;

								BgL_list3094z00_2743 = MAKE_PAIR(BgL_objz00_54, BNIL);
								BgL_arg3087z00_2736 =
									BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
									(BgL_list3094z00_2743);
							}
							BgL_arg3089z00_2738 =
								BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_portz00_55);
							{	/* Llib/date.scm 486 */
								obj_t BgL_list3090z00_2739;

								{	/* Llib/date.scm 486 */
									obj_t BgL_arg3091z00_2740;

									{	/* Llib/date.scm 486 */
										obj_t BgL_arg3092z00_2741;

										{	/* Llib/date.scm 486 */
											obj_t BgL_arg3093z00_2742;

											BgL_arg3093z00_2742 =
												MAKE_PAIR(BgL_arg3089z00_2738, BNIL);
											BgL_arg3092z00_2741 =
												MAKE_PAIR(BGl_string3657z00zz__datez00,
												BgL_arg3093z00_2742);
										}
										BgL_arg3091z00_2740 =
											MAKE_PAIR(BgL_arg3087z00_2736, BgL_arg3092z00_2741);
									}
									BgL_list3090z00_2739 =
										MAKE_PAIR(BGl_string3658z00zz__datez00,
										BgL_arg3091z00_2740);
								}
								BgL_arg3084z00_2732 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3090z00_2739);
							}
						}
					else
						{	/* Llib/date.scm 485 */
							BgL_arg3084z00_2732 = BgL_objz00_54;
						}
					BgL_arg3079z00_2728 =
						BGl_makezd2z62iozd2parsezd2errorzb0zz__objectz00
						(BgL_arg3081z00_2729, BINT(BgL_arg3082z00_2730),
						BgL_arg3083z00_2731, BgL_procz00_52, BgL_messagez00_53,
						BgL_arg3084z00_2732);
				}
				return BGl_raisez00zz__errorz00((obj_t) (BgL_arg3079z00_2728));
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 19 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 19 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__datez00()
	{
		AN_OBJECT;
		{	/* Llib/date.scm 19 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3659z00zz__datez00));
		}
	}

#ifdef __cplusplus
}
#endif
