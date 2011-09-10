/*===========================================================================*/
/*   (Ieee/number.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/number.scm -indent -o objs/obj_u/Ieee/number.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__logz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double);
	BGL_EXPORTED_DECL bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL char BGl_fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(long);
	static obj_t BGl__sinz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_bignum_add(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long);
	static obj_t BGl__inexactzd2ze3exactz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_bignum_neg(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__tanz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL obj_t bgl_exact_to_inexact(obj_t);
	static obj_t BGl__fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_long_to_bignum(long);
	BGL_EXPORTED_DECL bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern double bgl_bignum_to_flonum(obj_t);
	static obj_t BGl__absz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__minz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__expz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_bignum_abs(obj_t);
	static obj_t BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(long);
	BGL_EXPORTED_DECL bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__rationalzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t
		BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	BGL_EXPORTED_DECL double
		BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
	static obj_t BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__cosz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double
		BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL long BGl_fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(long);
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00();
	BGL_EXPORTED_DECL bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__exactzd2ze3inexactz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__za7erozf3z54zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__flonumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__inexactzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__sqrtz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__exactzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__asinz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_logz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00();
	BGL_EXPORTED_DECL char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t,
		obj_t);
	extern obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	extern obj_t bgl_long_to_bignum(long);
	static obj_t BGl__2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_sinz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__atanz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long);
	static obj_t BGl__zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static obj_t BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__numberzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_tanz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_expz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(long);
	static obj_t BGl_symbol2528z00zz__r4_numbers_6_5z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_symbol2531z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2533z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl_symbol2535z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl__acosz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_symbol2537z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__positivezf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2542z00zz__r4_numbers_6_5z00 = BUNSPEC;
	extern obj_t bgl_bignum_sub(obj_t, obj_t);
	static obj_t BGl_symbol2544z00zz__r4_numbers_6_5z00 = BUNSPEC;
	BGL_EXPORTED_DECL double BGl_cosz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2546z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl_symbol2548z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl_symbol2550z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl__2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_symbol2552z00zz__r4_numbers_6_5z00 = BUNSPEC;
	extern obj_t real_to_string(double);
	extern obj_t string_to_bstring(char *);
	static obj_t BGl__exptz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_bignum_mul(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char);
	BGL_EXPORTED_DECL double BGl_asinz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__2minz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern int bgl_bignum_cmp(obj_t, obj_t);
	static obj_t BGl__2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL double BGl_atanz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__truncatez00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_symbol2572z00zz__r4_numbers_6_5z00 = BUNSPEC;
	static obj_t BGl__complexzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__roundz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(long);
	static obj_t BGl_symbol2576z00zz__r4_numbers_6_5z00 = BUNSPEC;
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double);
	extern long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl__negativezf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__ceilingz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_flonum_to_bignum(double);
	BGL_EXPORTED_DECL obj_t bgl_inexact_to_exact(obj_t);
	extern obj_t bgl_bignum_div(obj_t, obj_t);
	static obj_t BGl__flonumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__floorz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__maxz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char);
	BGL_EXPORTED_DECL double BGl_acosz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double);
	extern obj_t the_failure(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t,
		obj_t);
	static obj_t BGl__2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	static obj_t BGl__2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zf2zd2envz20zz__r4_numbers_6_5z00,
		BgL_bgl__2za7f2za7f2za7za7__r4_n2588z00, BGl__2zf2zf2zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_exactzd2ze3inexactzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__exactza7d2za7e3inex2589z00,
		BGl__exactzd2ze3inexactz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__fixnumza7d2za7e3elo2590z00,
		BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__exptza700za7za7__r4_n2591za7, BGl__exptz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_asinzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__asinza700za7za7__r4_n2592za7, BGl__asinz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ubytezd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__ubyteza7d2za7e3fixn2593z00,
		BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_numberzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__numberza7f3za7f3za7za7_2594z00,
		BGl__numberzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_acoszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__acosza700za7za7__r4_n2595za7, BGl__acosz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bytezd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__byteza7d2za7e3fixnu2596z00,
		BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__elongza7d2za7e3flon2597z00,
		BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__llongza7d2za7e3fixn2598z00,
		BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3bignumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__flonumza7d2za7e3big2599z00,
		BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rationalzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__rationalza7f3za7f3za72600za7,
		BGl__rationalzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_logzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__logza700za7za7__r4_nu2601za7, BGl__logz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3zd2envz11zz__r4_numbers_6_5z00,
		BgL_bgl__za7c3za7c3za7za7__r4_nu2602z00, va_generic_entry,
		BGl__zc3zc3zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__expza700za7za7__r4_nu2603za7, BGl__expz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2minzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__2minza700za7za7__r4_n2604za7, BGl__2minz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zc3zd2envz11zz__r4_numbers_6_5z00,
		BgL_bgl__2za7c3za7c3za7za7__r4_n2605z00, BGl__2zc3zc3zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2maxzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__2maxza700za7za7__r4_n2606za7, BGl__2maxz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__sinza700za7za7__r4_nu2607za7, BGl__sinz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
	      DEFINE_REAL(BGl_real2569z00zz__r4_numbers_6_5z00,
		BgL_bgl_real2569za700za7za7__r2608za7, 0.0);
	      DEFINE_REAL(BGl_real2571z00zz__r4_numbers_6_5z00,
		BgL_bgl_real2571za700za7za7__r2609za7, 1.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3bytezd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__fixnumza7d2za7e3byt2610z00,
		BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
#define BGl_real2579z00zz__r4_numbers_6_5z00 bigloo_nan
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_coszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__cosza700za7za7__r4_nu2611za7, BGl__cosz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
#define BGl_real2581z00zz__r4_numbers_6_5z00 bigloo_infinity
#define BGl_real2583z00zz__r4_numbers_6_5z00 bigloo_minfinity
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__flonumza7d2za7e3llo2612z00,
		BGl__flonumzd2ze3llongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_positivezf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__positiveza7f3za7f3za72613za7,
		BGl__positivezf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ceilingzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__ceilingza700za7za7__r2614za7, BGl__ceilingz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3numberzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__stringza7d2za7e3num2615z00, opt_generic_entry,
		BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__flonumza7d2za7e3fix2616z00,
		BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za7erozf3zd2envz86zz__r4_numbers_6_5z00,
		BgL_bgl__za7a7eroza7f3za754za7za7_2617za7,
		BGl__za7erozf3z54zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sqrtzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__sqrtza700za7za7__r4_n2618za7, BGl__sqrtz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__bignumza7d2za7e3flo2619z00,
		BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00,
		BgL_bgl__za7c3za7d3za710za7za7__r42620za7, va_generic_entry,
		BGl__zc3zd3z10zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string2505z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2505za700za7za7_2621za7,
		"/tmp/bigloo/runtime/Ieee/number.scm", 35);
	      DEFINE_STRING(BGl_string2506z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2506za700za7za7_2622za7, "_flonum->fixnum", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3zd2envz31zz__r4_numbers_6_5z00,
		BgL_bgl__za7e3za7e3za7za7__r4_nu2623z00, va_generic_entry,
		BGl__ze3ze3zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string2507z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2507za700za7za7_2624za7, "double", 6);
	      DEFINE_STRING(BGl_string2508z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2508za700za7za7_2625za7, "_fixnum->flonum", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2ze3zd2envz31zz__r4_numbers_6_5z00,
		BgL_bgl__2za7e3za7e3za7za7__r4_n2626z00, BGl__2ze3ze3zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2510z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2510za700za7za7_2627za7, "_fixnum->byte", 13);
	      DEFINE_STRING(BGl_string2509z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2509za700za7za7_2628za7, "long", 4);
	      DEFINE_STRING(BGl_string2511z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2511za700za7za7_2629za7, "_fixnum->ubyte", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negativezf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__negativeza7f3za7f3za72630za7,
		BGl__negativezf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2512z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2512za700za7za7_2631za7, "_byte->fixnum", 13);
	      DEFINE_STRING(BGl_string2513z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2513za700za7za7_2632za7, "byte", 4);
	      DEFINE_STRING(BGl_string2514z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2514za700za7za7_2633za7, "_ubyte->fixnum", 14);
	      DEFINE_STRING(BGl_string2515z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2515za700za7za7_2634za7, "_fixnum->elong", 14);
	      DEFINE_STRING(BGl_string2516z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2516za700za7za7_2635za7, "_elong->fixnum", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_complexzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__complexza7f3za7f3za7za72636z00,
		BGl__complexzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2517z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2517za700za7za7_2637za7, "elong", 5);
	      DEFINE_STRING(BGl_string2518z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2518za700za7za7_2638za7, "_fixnum->llong", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_flonumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__flonumza7d2za7e3elo2639z00,
		BGl__flonumzd2ze3elongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2520z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2520za700za7za7_2640za7, "llong", 5);
	      DEFINE_STRING(BGl_string2519z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2519za700za7za7_2641za7, "_llong->fixnum", 14);
	      DEFINE_STRING(BGl_string2521z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2521za700za7za7_2642za7, "_flonum->elong", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2zd2envz60zz__r4_numbers_6_5z00,
		BgL_bgl__za7b2za7b2za7za7__r4_nu2643z00, va_generic_entry,
		BGl__zb2zb2zz__r4_numbers_6_5z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zc3zd3zd2envzc2zz__r4_numbers_6_5z00,
		BgL_bgl__2za7c3za7d3za710za7za7__r2644za7,
		BGl__2zc3zd3z10zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3ubytezd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__fixnumza7d2za7e3uby2645z00,
		BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2522z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2522za700za7za7_2646za7, "_elong->flonum", 14);
	      DEFINE_STRING(BGl_string2523z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2523za700za7za7_2647za7, "_flonum->llong", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zb2zd2envz60zz__r4_numbers_6_5z00,
		BgL_bgl__2za7b2za7b2za7za7__r4_n2648z00, BGl__2zb2zb2zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2524z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2524za700za7za7_2649za7, "_llong->flonum", 14);
	      DEFINE_STRING(BGl_string2525z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2525za700za7za7_2650za7, "_flonum->bignum", 15);
	      DEFINE_STRING(BGl_string2526z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2526za700za7za7_2651za7, "_bignum->flonum", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_roundzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__roundza700za7za7__r4_2652za7, BGl__roundz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2527z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2527za700za7za7_2653za7, "bignum", 6);
	      DEFINE_STRING(BGl_string2530z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2530za700za7za7_2654za7, "not a number", 12);
	      DEFINE_STRING(BGl_string2529z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2529za700za7za7_2655za7, "=", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inexactzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__inexactza7f3za7f3za7za72656z00,
		BGl__inexactzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2532z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2532za700za7za7_2657za7, "<", 1);
	      DEFINE_STRING(BGl_string2534z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2534za700za7za7_2658za7, ">", 1);
	      DEFINE_STRING(BGl_string2536z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2536za700za7za7_2659za7, "<=", 2);
	      DEFINE_STRING(BGl_string2538z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2538za700za7za7_2660za7, ">=", 2);
	      DEFINE_STRING(BGl_string2540z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2540za700za7za7_2661za7, "positive", 8);
	      DEFINE_STRING(BGl_string2539z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2539za700za7za7_2662za7, "zero", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_minzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__minza700za7za7__r4_nu2663za7, va_generic_entry,
		BGl__minz00zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2541z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2541za700za7za7_2664za7, "negative", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__maxza700za7za7__r4_nu2665za7, va_generic_entry,
		BGl__maxz00zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2543z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2543za700za7za7_2666za7, "2max", 4);
	      DEFINE_STRING(BGl_string2545z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2545za700za7za7_2667za7, "2min", 4);
	      DEFINE_STRING(BGl_string2547z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2547za700za7za7_2668za7, "+", 1);
	      DEFINE_STRING(BGl_string2549z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2549za700za7za7_2669za7, "*", 1);
	      DEFINE_STRING(BGl_string2551z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2551za700za7za7_2670za7, "-", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__elongza7d2za7e3fixn2671z00,
		BGl__elongzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2553z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2553za700za7za7_2672za7, "/", 1);
	      DEFINE_STRING(BGl_string2554z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2554za700za7za7_2673za7, "abs", 3);
	      DEFINE_STRING(BGl_string2555z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2555za700za7za7_2674za7, "floor", 5);
	      DEFINE_STRING(BGl_string2556z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2556za700za7za7_2675za7, "ceiling", 7);
	      DEFINE_STRING(BGl_string2557z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2557za700za7za7_2676za7, "truncate", 8);
	      DEFINE_STRING(BGl_string2558z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2558za700za7za7_2677za7, "round", 5);
	      DEFINE_STRING(BGl_string2560z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2560za700za7za7_2678za7, "log", 3);
	      DEFINE_STRING(BGl_string2559z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2559za700za7za7_2679za7, "exp", 3);
	      DEFINE_STRING(BGl_string2561z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2561za700za7za7_2680za7, "sin", 3);
	      DEFINE_STRING(BGl_string2562z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2562za700za7za7_2681za7, "cos", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__llongza7d2za7e3flon2682z00,
		BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2563z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2563za700za7za7_2683za7, "tan", 3);
	      DEFINE_STRING(BGl_string2564z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2564za700za7za7_2684za7, "asin", 4);
	      DEFINE_STRING(BGl_string2565z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2565za700za7za7_2685za7, "acos", 4);
	      DEFINE_STRING(BGl_string2566z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2566za700za7za7_2686za7, "atan", 4);
	      DEFINE_STRING(BGl_string2567z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2567za700za7za7_2687za7, "atanfl", 6);
	      DEFINE_STRING(BGl_string2568z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2568za700za7za7_2688za7, "Domain error", 12);
	      DEFINE_STRING(BGl_string2570z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2570za700za7za7_2689za7, "sqrt", 4);
	      DEFINE_STRING(BGl_string2573z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2573za700za7za7_2690za7, "expr", 4);
	      DEFINE_STRING(BGl_string2574z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2574za700za7za7_2691za7, "number->string", 14);
	      DEFINE_STRING(BGl_string2575z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2575za700za7za7_2692za7, "Argument not a number", 21);
	      DEFINE_STRING(BGl_string2577z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2577za700za7za7_2693za7, "Illegal radix", 13);
	      DEFINE_STRING(BGl_string2578z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2578za700za7za7_2694za7, "+nan.0", 6);
	      DEFINE_STRING(BGl_string2580z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2580za700za7za7_2695za7, "+inf.0", 6);
	      DEFINE_STRING(BGl_string2582z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2582za700za7za7_2696za7, "-inf.0", 6);
	      DEFINE_STRING(BGl_string2584z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2584za700za7za7_2697za7, "string->number", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atanzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__atanza700za7za7__r4_n2698za7, va_generic_entry,
		BGl__atanz00zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2585z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2585za700za7za7_2699za7,
		"Only radix `10' is legal for floating point number", 50);
	      DEFINE_STRING(BGl_string2586z00zz__r4_numbers_6_5z00,
		BgL_bgl_string2586za700za7za7_2700za7, "__r4_numbers_6_5", 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00,
		BgL_bgl__za7e3za7d3za730za7za7__r42701za7, va_generic_entry,
		BGl__ze3zd3z30zz__r4_numbers_6_5z00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2zd2envz00zz__r4_numbers_6_5z00,
		BgL_bgl__za7d2za7d2za7za7__r4_nu2702z00, va_generic_entry,
		BGl__zd2zd2zz__r4_numbers_6_5z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zd2zd2envz00zz__r4_numbers_6_5z00,
		BgL_bgl__2za7d2za7d2za7za7__r4_n2703z00, BGl__2zd2zd2zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_abszd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__absza700za7za7__r4_nu2704za7, BGl__absz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_numberzd2ze3stringzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__numberza7d2za7e3str2705z00, opt_generic_entry,
		BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inexactzd2ze3exactzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__inexactza7d2za7e3ex2706z00,
		BGl__inexactzd2ze3exactz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2ze3zd3zd2envze2zz__r4_numbers_6_5z00,
		BgL_bgl__2za7e3za7d3za730za7za7__r2707za7,
		BGl__2ze3zd3z30zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3zd2envz01zz__r4_numbers_6_5z00,
		BgL_bgl__za7d3za7d3za7za7__r4_nu2708z00, va_generic_entry,
		BGl__zd3zd3zz__r4_numbers_6_5z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__fixnumza7d2za7e3llo2709z00,
		BGl__fixnumzd2ze3llongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2zd3zd2envz01zz__r4_numbers_6_5z00,
		BgL_bgl__2za7d3za7d3za7za7__r4_n2710z00, BGl__2zd3zd3zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00,
		BgL_bgl__fixnumza7d2za7e3flo2711z00,
		BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_truncatezd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__truncateza700za7za7__2712za7,
		BGl__truncatez00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_floorzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__floorza700za7za7__r4_2713za7, BGl__floorz00zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2zd2envz70zz__r4_numbers_6_5z00,
		BgL_bgl__za7a2za7a2za7za7__r4_nu2714z00, va_generic_entry,
		BGl__za2za2zz__r4_numbers_6_5z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tanzd2envzd2zz__r4_numbers_6_5z00,
		BgL_bgl__tanza700za7za7__r4_nu2715za7, BGl__tanz00zz__r4_numbers_6_5z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_2za2zd2envz70zz__r4_numbers_6_5z00,
		BgL_bgl__2za7a2za7a2za7za7__r4_n2716z00, BGl__2za2za2zz__r4_numbers_6_5z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_exactzf3zd2envz21zz__r4_numbers_6_5z00,
		BgL_bgl__exactza7f3za7f3za7za7__2717z00,
		BGl__exactzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2zd2envz20zz__r4_numbers_6_5z00,
		BgL_bgl__za7f2za7f2za7za7__r4_nu2718z00, va_generic_entry,
		BGl__zf2zf2zz__r4_numbers_6_5z00, BUNSPEC, -2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long
		BgL_checksumz00_4484, char *BgL_fromz00_4485)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_numbers_6_5z00();
					BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00()
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 18 */
			BGl_symbol2528z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2529z00zz__r4_numbers_6_5z00);
			BGl_symbol2531z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2532z00zz__r4_numbers_6_5z00);
			BGl_symbol2533z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2534z00zz__r4_numbers_6_5z00);
			BGl_symbol2535z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2536z00zz__r4_numbers_6_5z00);
			BGl_symbol2537z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2538z00zz__r4_numbers_6_5z00);
			BGl_symbol2542z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2543z00zz__r4_numbers_6_5z00);
			BGl_symbol2544z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2545z00zz__r4_numbers_6_5z00);
			BGl_symbol2546z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2547z00zz__r4_numbers_6_5z00);
			BGl_symbol2548z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2549z00zz__r4_numbers_6_5z00);
			BGl_symbol2550z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2551z00zz__r4_numbers_6_5z00);
			BGl_symbol2552z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2553z00zz__r4_numbers_6_5z00);
			BGl_symbol2572z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2573z00zz__r4_numbers_6_5z00);
			return (BGl_symbol2576z00zz__r4_numbers_6_5z00 =
				bstring_to_symbol(BGl_string2574z00zz__r4_numbers_6_5z00), BUNSPEC);
		}
	}



/* number? */
	BGL_EXPORTED_DEF bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 192 */
			if (INTEGERP(BgL_objz00_1))
				{	/* Ieee/number.scm 193 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/number.scm 193 */
					if (REALP(BgL_objz00_1))
						{	/* Ieee/number.scm 195 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 195 */
							if (ELONGP(BgL_objz00_1))
								{	/* Ieee/number.scm 197 */
									return ((bool_t) 1);
								}
							else
								{	/* Ieee/number.scm 197 */
									if (LLONGP(BgL_objz00_1))
										{	/* Ieee/number.scm 199 */
											return ((bool_t) 1);
										}
									else
										{	/* Ieee/number.scm 199 */
											return BIGNUMP(BgL_objz00_1);
										}
								}
						}
				}
		}
	}



/* _number? */
	obj_t BGl__numberzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4277,
		obj_t BgL_objz00_4278)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 192 */
			return BBOOL(BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_4278));
		}
	}



/* exact? */
	BGL_EXPORTED_DEF bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_za7za7_2)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 206 */
			if (INTEGERP(BgL_za7za7_2))
				{	/* Ieee/number.scm 207 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/number.scm 207 */
					if (ELONGP(BgL_za7za7_2))
						{	/* Ieee/number.scm 207 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 207 */
							if (LLONGP(BgL_za7za7_2))
								{	/* Ieee/number.scm 207 */
									return ((bool_t) 1);
								}
							else
								{	/* Ieee/number.scm 207 */
									return BIGNUMP(BgL_za7za7_2);
								}
						}
				}
		}
	}



/* _exact? */
	obj_t BGl__exactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4279,
		obj_t BgL_za7za7_4280)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 206 */
			{	/* Ieee/number.scm 207 */
				bool_t BgL_auxz00_4522;

				if (INTEGERP(BgL_za7za7_4280))
					{	/* Ieee/number.scm 207 */
						BgL_auxz00_4522 = ((bool_t) 1);
					}
				else
					{	/* Ieee/number.scm 207 */
						if (ELONGP(BgL_za7za7_4280))
							{	/* Ieee/number.scm 207 */
								BgL_auxz00_4522 = ((bool_t) 1);
							}
						else
							{	/* Ieee/number.scm 207 */
								if (LLONGP(BgL_za7za7_4280))
									{	/* Ieee/number.scm 207 */
										BgL_auxz00_4522 = ((bool_t) 1);
									}
								else
									{	/* Ieee/number.scm 207 */
										BgL_auxz00_4522 = BIGNUMP(BgL_za7za7_4280);
									}
							}
					}
				return BBOOL(BgL_auxz00_4522);
			}
		}
	}



/* inexact? */
	BGL_EXPORTED_DEF bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_za7za7_3)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 218 */
			return REALP(BgL_za7za7_3);
		}
	}



/* _inexact? */
	obj_t BGl__inexactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4281,
		obj_t BgL_za7za7_4282)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 218 */
			return BBOOL(REALP(BgL_za7za7_4282));
		}
	}



/* complex? */
	BGL_EXPORTED_DEF bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 224 */
			return BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4);
		}
	}



/* _complex? */
	obj_t BGl__complexzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4283,
		obj_t BgL_xz00_4284)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 224 */
			return BBOOL(BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4284));
		}
	}



/* rational? */
	BGL_EXPORTED_DEF bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_5)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 230 */
			if (INTEGERP(BgL_xz00_5))
				{	/* Ieee/number.scm 231 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/number.scm 231 */
					return REALP(BgL_xz00_5);
				}
		}
	}



/* _rational? */
	obj_t BGl__rationalzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4285,
		obj_t BgL_xz00_4286)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 230 */
			return BBOOL(BGl_rationalzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4286));
		}
	}



/* flonum->fixnum */
	BGL_EXPORTED_DEF long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double
		BgL_xz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 236 */
			return (long) (BgL_xz00_6);
		}
	}



/* _flonum->fixnum */
	obj_t BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4287,
		obj_t BgL_xz00_4288)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 236 */
			{	/* Ieee/number.scm 237 */
				long BgL_auxz00_4543;

				{	/* Ieee/number.scm 237 */
					double BgL_xz00_4465;

					{	/* Ieee/number.scm 237 */
						obj_t BgL_auxz00_4544;

						if (REALP(BgL_xz00_4288))
							{	/* Ieee/number.scm 237 */
								BgL_auxz00_4544 = BgL_xz00_4288;
							}
						else
							{
								obj_t BgL_auxz00_4547;

								BgL_auxz00_4547 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 9505)),
									BGl_string2506z00zz__r4_numbers_6_5z00,
									BGl_string2507z00zz__r4_numbers_6_5z00, BgL_xz00_4288);
								FAILURE(BgL_auxz00_4547, BFALSE, BFALSE);
							}
						BgL_xz00_4465 = REAL_TO_DOUBLE(BgL_auxz00_4544);
					}
					BgL_auxz00_4543 = (long) (BgL_xz00_4465);
				}
				return BINT(BgL_auxz00_4543);
			}
		}
	}



/* fixnum->flonum */
	BGL_EXPORTED_DEF double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long
		BgL_xz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 242 */
			return (double) (BgL_xz00_7);
		}
	}



/* _fixnum->flonum */
	obj_t BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4289,
		obj_t BgL_xz00_4290)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 242 */
			{	/* Ieee/number.scm 243 */
				double BgL_auxz00_4555;

				{	/* Ieee/number.scm 243 */
					long BgL_xz00_4466;

					{	/* Ieee/number.scm 243 */
						obj_t BgL_auxz00_4556;

						if (INTEGERP(BgL_xz00_4290))
							{	/* Ieee/number.scm 243 */
								BgL_auxz00_4556 = BgL_xz00_4290;
							}
						else
							{
								obj_t BgL_auxz00_4559;

								BgL_auxz00_4559 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 9786)),
									BGl_string2508z00zz__r4_numbers_6_5z00,
									BGl_string2509z00zz__r4_numbers_6_5z00, BgL_xz00_4290);
								FAILURE(BgL_auxz00_4559, BFALSE, BFALSE);
							}
						BgL_xz00_4466 = (long) CINT(BgL_auxz00_4556);
					}
					BgL_auxz00_4555 = (double) (BgL_xz00_4466);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_4555);
			}
		}
	}



/* fixnum->byte */
	BGL_EXPORTED_DEF char BGl_fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(long
		BgL_xz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 248 */
			return (signed char) (BgL_xz00_8);
		}
	}



/* _fixnum->byte */
	obj_t BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4291,
		obj_t BgL_xz00_4292)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 248 */
			{	/* Ieee/number.scm 249 */
				char BgL_auxz00_4567;

				{	/* Ieee/number.scm 249 */
					long BgL_xz00_4467;

					{	/* Ieee/number.scm 249 */
						obj_t BgL_auxz00_4568;

						if (INTEGERP(BgL_xz00_4292))
							{	/* Ieee/number.scm 249 */
								BgL_auxz00_4568 = BgL_xz00_4292;
							}
						else
							{
								obj_t BgL_auxz00_4571;

								BgL_auxz00_4571 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 10074)),
									BGl_string2510z00zz__r4_numbers_6_5z00,
									BGl_string2509z00zz__r4_numbers_6_5z00, BgL_xz00_4292);
								FAILURE(BgL_auxz00_4571, BFALSE, BFALSE);
							}
						BgL_xz00_4467 = (long) CINT(BgL_auxz00_4568);
					}
					BgL_auxz00_4567 = (signed char) (BgL_xz00_4467);
				}
				return BINT(BgL_auxz00_4567);
			}
		}
	}



/* fixnum->ubyte */
	BGL_EXPORTED_DEF unsigned char
		BGl_fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(long BgL_xz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 254 */
			return (unsigned char) (BgL_xz00_9);
		}
	}



/* _fixnum->ubyte */
	obj_t BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4293,
		obj_t BgL_xz00_4294)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 254 */
			{	/* Ieee/number.scm 255 */
				unsigned char BgL_auxz00_4579;

				{	/* Ieee/number.scm 255 */
					long BgL_xz00_4468;

					{	/* Ieee/number.scm 255 */
						obj_t BgL_auxz00_4580;

						if (INTEGERP(BgL_xz00_4294))
							{	/* Ieee/number.scm 255 */
								BgL_auxz00_4580 = BgL_xz00_4294;
							}
						else
							{
								obj_t BgL_auxz00_4583;

								BgL_auxz00_4583 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 10350)),
									BGl_string2511z00zz__r4_numbers_6_5z00,
									BGl_string2509z00zz__r4_numbers_6_5z00, BgL_xz00_4294);
								FAILURE(BgL_auxz00_4583, BFALSE, BFALSE);
							}
						BgL_xz00_4468 = (long) CINT(BgL_auxz00_4580);
					}
					BgL_auxz00_4579 = (unsigned char) (BgL_xz00_4468);
				}
				return BINT(BgL_auxz00_4579);
			}
		}
	}



/* byte->fixnum */
	BGL_EXPORTED_DEF long BGl_bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char
		BgL_xz00_10)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 260 */
			return (long) (BgL_xz00_10);
		}
	}



/* _byte->fixnum */
	obj_t BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4295,
		obj_t BgL_xz00_4296)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 260 */
			{	/* Ieee/number.scm 261 */
				long BgL_auxz00_4591;

				{	/* Ieee/number.scm 261 */
					char BgL_xz00_4469;

					{	/* Ieee/number.scm 261 */
						obj_t BgL_auxz00_4592;

						if (INTEGERP(BgL_xz00_4296))
							{	/* Ieee/number.scm 261 */
								BgL_auxz00_4592 = BgL_xz00_4296;
							}
						else
							{
								obj_t BgL_auxz00_4595;

								BgL_auxz00_4595 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 10626)),
									BGl_string2512z00zz__r4_numbers_6_5z00,
									BGl_string2513z00zz__r4_numbers_6_5z00, BgL_xz00_4296);
								FAILURE(BgL_auxz00_4595, BFALSE, BFALSE);
							}
						BgL_xz00_4469 = (signed char) CINT(BgL_auxz00_4592);
					}
					BgL_auxz00_4591 = (long) (BgL_xz00_4469);
				}
				return BINT(BgL_auxz00_4591);
			}
		}
	}



/* ubyte->fixnum */
	BGL_EXPORTED_DEF long BGl_ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char
		BgL_xz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 266 */
			return (long) ((unsigned char) (BgL_xz00_11));
		}
	}



/* _ubyte->fixnum */
	obj_t BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4297,
		obj_t BgL_xz00_4298)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 266 */
			{	/* Ieee/number.scm 267 */
				long BgL_auxz00_4604;

				{	/* Ieee/number.scm 267 */
					char BgL_xz00_4470;

					{	/* Ieee/number.scm 267 */
						obj_t BgL_auxz00_4605;

						if (INTEGERP(BgL_xz00_4298))
							{	/* Ieee/number.scm 267 */
								BgL_auxz00_4605 = BgL_xz00_4298;
							}
						else
							{
								obj_t BgL_auxz00_4608;

								BgL_auxz00_4608 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 10902)),
									BGl_string2514z00zz__r4_numbers_6_5z00,
									BGl_string2513z00zz__r4_numbers_6_5z00, BgL_xz00_4298);
								FAILURE(BgL_auxz00_4608, BFALSE, BFALSE);
							}
						BgL_xz00_4470 = (signed char) CINT(BgL_auxz00_4605);
					}
					BgL_auxz00_4604 = (long) ((unsigned char) (BgL_xz00_4470));
				}
				return BINT(BgL_auxz00_4604);
			}
		}
	}



/* fixnum->elong */
	BGL_EXPORTED_DEF long BGl_fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(long
		BgL_xz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 272 */
			return LONG_TO_ELONG(BgL_xz00_12);
		}
	}



/* _fixnum->elong */
	obj_t BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4299,
		obj_t BgL_xz00_4300)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 272 */
			{	/* Ieee/number.scm 273 */
				long BgL_auxz00_4617;

				{	/* Ieee/number.scm 273 */
					long BgL_xz00_4471;

					{	/* Ieee/number.scm 273 */
						obj_t BgL_auxz00_4618;

						if (INTEGERP(BgL_xz00_4300))
							{	/* Ieee/number.scm 273 */
								BgL_auxz00_4618 = BgL_xz00_4300;
							}
						else
							{
								obj_t BgL_auxz00_4621;

								BgL_auxz00_4621 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 11179)),
									BGl_string2515z00zz__r4_numbers_6_5z00,
									BGl_string2509z00zz__r4_numbers_6_5z00, BgL_xz00_4300);
								FAILURE(BgL_auxz00_4621, BFALSE, BFALSE);
							}
						BgL_xz00_4471 = (long) CINT(BgL_auxz00_4618);
					}
					BgL_auxz00_4617 = LONG_TO_ELONG(BgL_xz00_4471);
				}
				return make_belong(BgL_auxz00_4617);
			}
		}
	}



/* elong->fixnum */
	BGL_EXPORTED_DEF long BGl_elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(long
		BgL_xz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 278 */
			{	/* Ieee/number.scm 279 */
				long BgL_auxz00_4628;

				{	/* Ieee/number.scm 279 */
					long BgL_auxz00_4629;

					BgL_auxz00_4629 = ELONG_TO_LONG(BgL_xz00_13);
					BgL_auxz00_4628 = ELONG_TO_LONG(BgL_auxz00_4629);
				}
				return ELONG_TO_LONG(BgL_auxz00_4628);
			}
		}
	}



/* _elong->fixnum */
	obj_t BGl__elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4301,
		obj_t BgL_xz00_4302)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 278 */
			{	/* Ieee/number.scm 279 */
				long BgL_auxz00_4633;

				{	/* Ieee/number.scm 279 */
					long BgL_res2587z00_4473;

					{	/* Ieee/number.scm 279 */
						long BgL_xz00_4472;

						{	/* Ieee/number.scm 279 */
							obj_t BgL_auxz00_4634;

							if (ELONGP(BgL_xz00_4302))
								{	/* Ieee/number.scm 279 */
									BgL_auxz00_4634 = BgL_xz00_4302;
								}
							else
								{
									obj_t BgL_auxz00_4637;

									BgL_auxz00_4637 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2505z00zz__r4_numbers_6_5z00,
										BINT(((long) 11456)),
										BGl_string2516z00zz__r4_numbers_6_5z00,
										BGl_string2517z00zz__r4_numbers_6_5z00, BgL_xz00_4302);
									FAILURE(BgL_auxz00_4637, BFALSE, BFALSE);
								}
							BgL_xz00_4472 = BELONG_TO_LONG(BgL_auxz00_4634);
						}
						{	/* Ieee/number.scm 279 */
							long BgL_auxz00_4642;

							{	/* Ieee/number.scm 279 */
								long BgL_auxz00_4643;

								BgL_auxz00_4643 = ELONG_TO_LONG(BgL_xz00_4472);
								BgL_auxz00_4642 = ELONG_TO_LONG(BgL_auxz00_4643);
							}
							BgL_res2587z00_4473 = ELONG_TO_LONG(BgL_auxz00_4642);
					}}
					BgL_auxz00_4633 = BgL_res2587z00_4473;
				}
				return BINT(BgL_auxz00_4633);
			}
		}
	}



/* fixnum->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(long BgL_xz00_14)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 284 */
			return LONG_TO_LLONG(BgL_xz00_14);
		}
	}



/* _fixnum->llong */
	obj_t BGl__fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4303,
		obj_t BgL_xz00_4304)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 284 */
			{	/* Ieee/number.scm 285 */
				BGL_LONGLONG_T BgL_auxz00_4649;

				{	/* Ieee/number.scm 285 */
					long BgL_xz00_4474;

					{	/* Ieee/number.scm 285 */
						obj_t BgL_auxz00_4650;

						if (INTEGERP(BgL_xz00_4304))
							{	/* Ieee/number.scm 285 */
								BgL_auxz00_4650 = BgL_xz00_4304;
							}
						else
							{
								obj_t BgL_auxz00_4653;

								BgL_auxz00_4653 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 11742)),
									BGl_string2518z00zz__r4_numbers_6_5z00,
									BGl_string2509z00zz__r4_numbers_6_5z00, BgL_xz00_4304);
								FAILURE(BgL_auxz00_4653, BFALSE, BFALSE);
							}
						BgL_xz00_4474 = (long) CINT(BgL_auxz00_4650);
					}
					BgL_auxz00_4649 = LONG_TO_LLONG(BgL_xz00_4474);
				}
				return make_bllong(BgL_auxz00_4649);
			}
		}
	}



/* llong->fixnum */
	BGL_EXPORTED_DEF long
		BGl_llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_15)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 290 */
			return LLONG_TO_LONG(BgL_xz00_15);
		}
	}



/* _llong->fixnum */
	obj_t BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4305,
		obj_t BgL_xz00_4306)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 290 */
			{	/* Ieee/number.scm 291 */
				long BgL_auxz00_4661;

				{	/* Ieee/number.scm 291 */
					BGL_LONGLONG_T BgL_xz00_4475;

					{	/* Ieee/number.scm 291 */
						obj_t BgL_auxz00_4662;

						if (LLONGP(BgL_xz00_4306))
							{	/* Ieee/number.scm 291 */
								BgL_auxz00_4662 = BgL_xz00_4306;
							}
						else
							{
								obj_t BgL_auxz00_4665;

								BgL_auxz00_4665 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 12019)),
									BGl_string2519z00zz__r4_numbers_6_5z00,
									BGl_string2520z00zz__r4_numbers_6_5z00, BgL_xz00_4306);
								FAILURE(BgL_auxz00_4665, BFALSE, BFALSE);
							}
						BgL_xz00_4475 = BLLONG_TO_LLONG(BgL_auxz00_4662);
					}
					BgL_auxz00_4661 = LLONG_TO_LONG(BgL_xz00_4475);
				}
				return BINT(BgL_auxz00_4661);
			}
		}
	}



/* flonum->elong */
	BGL_EXPORTED_DEF long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double
		BgL_xz00_16)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 296 */
			{	/* Ieee/number.scm 297 */
				long BgL_auxz00_4672;

				BgL_auxz00_4672 = (long) (BgL_xz00_16);
				return LONG_TO_ELONG(BgL_auxz00_4672);
			}
		}
	}



/* _flonum->elong */
	obj_t BGl__flonumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4307,
		obj_t BgL_xz00_4308)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 296 */
			{	/* Ieee/number.scm 297 */
				long BgL_auxz00_4675;

				{	/* Ieee/number.scm 297 */
					double BgL_xz00_4476;

					{	/* Ieee/number.scm 297 */
						obj_t BgL_auxz00_4676;

						if (REALP(BgL_xz00_4308))
							{	/* Ieee/number.scm 297 */
								BgL_auxz00_4676 = BgL_xz00_4308;
							}
						else
							{
								obj_t BgL_auxz00_4679;

								BgL_auxz00_4679 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 12305)),
									BGl_string2521z00zz__r4_numbers_6_5z00,
									BGl_string2507z00zz__r4_numbers_6_5z00, BgL_xz00_4308);
								FAILURE(BgL_auxz00_4679, BFALSE, BFALSE);
							}
						BgL_xz00_4476 = REAL_TO_DOUBLE(BgL_auxz00_4676);
					}
					{	/* Ieee/number.scm 297 */
						long BgL_auxz00_4684;

						BgL_auxz00_4684 = (long) (BgL_xz00_4476);
						BgL_auxz00_4675 = LONG_TO_ELONG(BgL_auxz00_4684);
				}}
				return make_belong(BgL_auxz00_4675);
			}
		}
	}



/* elong->flonum */
	BGL_EXPORTED_DEF double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long
		BgL_xz00_17)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 302 */
			return (double) (BgL_xz00_17);
		}
	}



/* _elong->flonum */
	obj_t BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4309,
		obj_t BgL_xz00_4310)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 302 */
			{	/* Ieee/number.scm 303 */
				double BgL_auxz00_4689;

				{	/* Ieee/number.scm 303 */
					long BgL_xz00_4477;

					{	/* Ieee/number.scm 303 */
						obj_t BgL_auxz00_4690;

						if (ELONGP(BgL_xz00_4310))
							{	/* Ieee/number.scm 303 */
								BgL_auxz00_4690 = BgL_xz00_4310;
							}
						else
							{
								obj_t BgL_auxz00_4693;

								BgL_auxz00_4693 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 12584)),
									BGl_string2522z00zz__r4_numbers_6_5z00,
									BGl_string2517z00zz__r4_numbers_6_5z00, BgL_xz00_4310);
								FAILURE(BgL_auxz00_4693, BFALSE, BFALSE);
							}
						BgL_xz00_4477 = BELONG_TO_LONG(BgL_auxz00_4690);
					}
					BgL_auxz00_4689 = (double) (BgL_xz00_4477);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_4689);
			}
		}
	}



/* flonum->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double BgL_xz00_18)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 308 */
			return DOUBLE_TO_LLONG(BgL_xz00_18);
		}
	}



/* _flonum->llong */
	obj_t BGl__flonumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4311,
		obj_t BgL_xz00_4312)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 308 */
			{	/* Ieee/number.scm 309 */
				BGL_LONGLONG_T BgL_auxz00_4701;

				{	/* Ieee/number.scm 309 */
					double BgL_xz00_4478;

					{	/* Ieee/number.scm 309 */
						obj_t BgL_auxz00_4702;

						if (REALP(BgL_xz00_4312))
							{	/* Ieee/number.scm 309 */
								BgL_auxz00_4702 = BgL_xz00_4312;
							}
						else
							{
								obj_t BgL_auxz00_4705;

								BgL_auxz00_4705 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 12872)),
									BGl_string2523z00zz__r4_numbers_6_5z00,
									BGl_string2507z00zz__r4_numbers_6_5z00, BgL_xz00_4312);
								FAILURE(BgL_auxz00_4705, BFALSE, BFALSE);
							}
						BgL_xz00_4478 = REAL_TO_DOUBLE(BgL_auxz00_4702);
					}
					BgL_auxz00_4701 = DOUBLE_TO_LLONG(BgL_xz00_4478);
				}
				return make_bllong(BgL_auxz00_4701);
			}
		}
	}



/* llong->flonum */
	BGL_EXPORTED_DEF double
		BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_19)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 314 */
			return (double) (BgL_xz00_19);
		}
	}



/* _llong->flonum */
	obj_t BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4313,
		obj_t BgL_xz00_4314)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 314 */
			{	/* Ieee/number.scm 315 */
				double BgL_auxz00_4713;

				{	/* Ieee/number.scm 315 */
					BGL_LONGLONG_T BgL_xz00_4479;

					{	/* Ieee/number.scm 315 */
						obj_t BgL_auxz00_4714;

						if (LLONGP(BgL_xz00_4314))
							{	/* Ieee/number.scm 315 */
								BgL_auxz00_4714 = BgL_xz00_4314;
							}
						else
							{
								obj_t BgL_auxz00_4717;

								BgL_auxz00_4717 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 13151)),
									BGl_string2524z00zz__r4_numbers_6_5z00,
									BGl_string2520z00zz__r4_numbers_6_5z00, BgL_xz00_4314);
								FAILURE(BgL_auxz00_4717, BFALSE, BFALSE);
							}
						BgL_xz00_4479 = BLLONG_TO_LLONG(BgL_auxz00_4714);
					}
					BgL_auxz00_4713 = (double) (BgL_xz00_4479);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_4713);
			}
		}
	}



/* flonum->bignum */
	BGL_EXPORTED_DEF obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double
		BgL_xz00_20)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 320 */
			return bgl_flonum_to_bignum(BgL_xz00_20);
		}
	}



/* _flonum->bignum */
	obj_t BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4315,
		obj_t BgL_xz00_4316)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 320 */
			{	/* Ieee/number.scm 321 */
				double BgL_xz00_4480;

				{	/* Ieee/number.scm 321 */
					obj_t BgL_auxz00_4725;

					if (REALP(BgL_xz00_4316))
						{	/* Ieee/number.scm 321 */
							BgL_auxz00_4725 = BgL_xz00_4316;
						}
					else
						{
							obj_t BgL_auxz00_4728;

							BgL_auxz00_4728 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 13440)),
								BGl_string2525z00zz__r4_numbers_6_5z00,
								BGl_string2507z00zz__r4_numbers_6_5z00, BgL_xz00_4316);
							FAILURE(BgL_auxz00_4728, BFALSE, BFALSE);
						}
					BgL_xz00_4480 = REAL_TO_DOUBLE(BgL_auxz00_4725);
				}
				return bgl_flonum_to_bignum(BgL_xz00_4480);
			}
		}
	}



/* bignum->flonum */
	BGL_EXPORTED_DEF double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_21)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 326 */
			return bgl_bignum_to_flonum(BgL_xz00_21);
		}
	}



/* _bignum->flonum */
	obj_t BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4317,
		obj_t BgL_xz00_4318)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 326 */
			{	/* Ieee/number.scm 327 */
				double BgL_auxz00_4735;

				{	/* Ieee/number.scm 327 */
					obj_t BgL_xz00_4481;

					if (BIGNUMP(BgL_xz00_4318))
						{	/* Ieee/number.scm 327 */
							BgL_xz00_4481 = BgL_xz00_4318;
						}
					else
						{
							obj_t BgL_auxz00_4738;

							BgL_auxz00_4738 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2505z00zz__r4_numbers_6_5z00, BINT(((long) 13721)),
								BGl_string2526z00zz__r4_numbers_6_5z00,
								BGl_string2527z00zz__r4_numbers_6_5z00, BgL_xz00_4318);
							FAILURE(BgL_auxz00_4738, BFALSE, BFALSE);
						}
					BgL_auxz00_4735 = bgl_bignum_to_flonum(BgL_xz00_4481);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_4735);
			}
		}
	}



/* 2= */
	BGL_EXPORTED_DEF bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_22,
		obj_t BgL_yz00_23)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 422 */
			if (INTEGERP(BgL_xz00_22))
				{	/* Ieee/number.scm 423 */
					if (INTEGERP(BgL_yz00_23))
						{	/* Ieee/number.scm 423 */
							return ((long) CINT(BgL_xz00_22) == (long) CINT(BgL_yz00_23));
						}
					else
						{	/* Ieee/number.scm 423 */
							if (REALP(BgL_yz00_23))
								{	/* Ieee/number.scm 423 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_22)) == REAL_TO_DOUBLE(BgL_yz00_23));
								}
							else
								{	/* Ieee/number.scm 423 */
									if (ELONGP(BgL_yz00_23))
										{	/* Ieee/number.scm 423 */
											long BgL_arg1239z00_532;

											{	/* Ieee/number.scm 423 */
												long BgL_auxz00_4759;

												BgL_auxz00_4759 = (long) CINT(BgL_xz00_22);
												BgL_arg1239z00_532 = LONG_TO_ELONG(BgL_auxz00_4759);
											}
											{	/* Ieee/number.scm 423 */
												long BgL_n2z00_1790;

												BgL_n2z00_1790 = BELONG_TO_LONG(BgL_yz00_23);
												return (BgL_arg1239z00_532 == BgL_n2z00_1790);
											}
										}
									else
										{	/* Ieee/number.scm 423 */
											if (LLONGP(BgL_yz00_23))
												{	/* Ieee/number.scm 423 */
													BGL_LONGLONG_T BgL_arg1241z00_534;

													{	/* Ieee/number.scm 423 */
														long BgL_auxz00_4766;

														BgL_auxz00_4766 = (long) CINT(BgL_xz00_22);
														BgL_arg1241z00_534 = LONG_TO_LLONG(BgL_auxz00_4766);
													}
													return
														(BgL_arg1241z00_534 ==
														BLLONG_TO_LLONG(BgL_yz00_23));
												}
											else
												{	/* Ieee/number.scm 423 */
													if (BIGNUMP(BgL_yz00_23))
														{	/* Ieee/number.scm 423 */
															return
																(
																(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_22)),
																		BgL_yz00_23)) == ((long) 0));
														}
													else
														{	/* Ieee/number.scm 423 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_symbol2528z00zz__r4_numbers_6_5z00,
																	BGl_string2530z00zz__r4_numbers_6_5z00,
																	BgL_yz00_23));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 423 */
					if (REALP(BgL_xz00_22))
						{	/* Ieee/number.scm 423 */
							if (REALP(BgL_yz00_23))
								{	/* Ieee/number.scm 423 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_22) ==
										REAL_TO_DOUBLE(BgL_yz00_23));
								}
							else
								{	/* Ieee/number.scm 423 */
									if (INTEGERP(BgL_yz00_23))
										{	/* Ieee/number.scm 423 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_22) ==
												(double) ((long) CINT(BgL_yz00_23)));
										}
									else
										{	/* Ieee/number.scm 423 */
											if (ELONGP(BgL_yz00_23))
												{	/* Ieee/number.scm 423 */
													double BgL_r1z00_1812;

													BgL_r1z00_1812 = REAL_TO_DOUBLE(BgL_xz00_22);
													return
														(BgL_r1z00_1812 ==
														(double) (BELONG_TO_LONG(BgL_yz00_23)));
												}
											else
												{	/* Ieee/number.scm 423 */
													if (LLONGP(BgL_yz00_23))
														{	/* Ieee/number.scm 423 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_22) ==
																(double) (BLLONG_TO_LLONG(BgL_yz00_23)));
														}
													else
														{	/* Ieee/number.scm 423 */
															if (BIGNUMP(BgL_yz00_23))
																{	/* Ieee/number.scm 423 */
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_22) ==
																		bgl_bignum_to_flonum(BgL_yz00_23));
																}
															else
																{	/* Ieee/number.scm 423 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_symbol2528z00zz__r4_numbers_6_5z00,
																			BGl_string2530z00zz__r4_numbers_6_5z00,
																			BgL_yz00_23));
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 423 */
							if (ELONGP(BgL_xz00_22))
								{	/* Ieee/number.scm 423 */
									if (INTEGERP(BgL_yz00_23))
										{	/* Ieee/number.scm 423 */
											long BgL_arg1256z00_549;

											{	/* Ieee/number.scm 423 */
												long BgL_auxz00_4816;

												BgL_auxz00_4816 = (long) CINT(BgL_yz00_23);
												BgL_arg1256z00_549 = LONG_TO_ELONG(BgL_auxz00_4816);
											}
											{	/* Ieee/number.scm 423 */
												long BgL_n1z00_1824;

												BgL_n1z00_1824 = BELONG_TO_LONG(BgL_xz00_22);
												return (BgL_n1z00_1824 == BgL_arg1256z00_549);
											}
										}
									else
										{	/* Ieee/number.scm 423 */
											if (REALP(BgL_yz00_23))
												{	/* Ieee/number.scm 423 */
													double BgL_r2z00_1828;

													BgL_r2z00_1828 = REAL_TO_DOUBLE(BgL_yz00_23);
													return
														(
														(double) (BELONG_TO_LONG(BgL_xz00_22)) ==
														BgL_r2z00_1828);
												}
											else
												{	/* Ieee/number.scm 423 */
													if (ELONGP(BgL_yz00_23))
														{	/* Ieee/number.scm 423 */
															long BgL_n1z00_1830;

															long BgL_n2z00_1831;

															BgL_n1z00_1830 = BELONG_TO_LONG(BgL_xz00_22);
															BgL_n2z00_1831 = BELONG_TO_LONG(BgL_yz00_23);
															return (BgL_n1z00_1830 == BgL_n2z00_1831);
														}
													else
														{	/* Ieee/number.scm 423 */
															if (LLONGP(BgL_yz00_23))
																{	/* Ieee/number.scm 423 */
																	BGL_LONGLONG_T BgL_n2z00_1834;

																	BgL_n2z00_1834 = BLLONG_TO_LLONG(BgL_yz00_23);
																	return
																		(
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_xz00_22)) == BgL_n2z00_1834);
																}
															else
																{	/* Ieee/number.scm 423 */
																	if (BIGNUMP(BgL_yz00_23))
																		{	/* Ieee/number.scm 423 */
																			long BgL_n1z00_1841;

																			{	/* Ieee/number.scm 423 */
																				int BgL_auxz00_4840;

																				{	/* Ieee/number.scm 423 */
																					obj_t BgL_auxz00_4841;

																					{	/* Ieee/number.scm 423 */
																						long BgL_xz00_1836;

																						BgL_xz00_1836 =
																							BELONG_TO_LONG(BgL_xz00_22);
																						BgL_auxz00_4841 =
																							bgl_long_to_bignum(BgL_xz00_1836);
																					}
																					BgL_auxz00_4840 =
																						bgl_bignum_cmp(BgL_auxz00_4841,
																						BgL_yz00_23);
																				}
																				BgL_n1z00_1841 =
																					(long) (BgL_auxz00_4840);
																			}
																			return (BgL_n1z00_1841 == ((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 423 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_symbol2528z00zz__r4_numbers_6_5z00,
																					BGl_string2530z00zz__r4_numbers_6_5z00,
																					BgL_yz00_23));
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 423 */
									if (LLONGP(BgL_xz00_22))
										{	/* Ieee/number.scm 423 */
											if (INTEGERP(BgL_yz00_23))
												{	/* Ieee/number.scm 423 */
													BGL_LONGLONG_T BgL_arg1266z00_559;

													{	/* Ieee/number.scm 423 */
														long BgL_auxz00_4853;

														BgL_auxz00_4853 = (long) CINT(BgL_yz00_23);
														BgL_arg1266z00_559 = LONG_TO_LLONG(BgL_auxz00_4853);
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_22) ==
														BgL_arg1266z00_559);
												}
											else
												{	/* Ieee/number.scm 423 */
													if (REALP(BgL_yz00_23))
														{	/* Ieee/number.scm 423 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_22)) ==
																REAL_TO_DOUBLE(BgL_yz00_23));
														}
													else
														{	/* Ieee/number.scm 423 */
															if (ELONGP(BgL_yz00_23))
																{	/* Ieee/number.scm 423 */
																	BGL_LONGLONG_T BgL_n1z00_1853;

																	BgL_n1z00_1853 = BLLONG_TO_LLONG(BgL_xz00_22);
																	return
																		(BgL_n1z00_1853 ==
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_yz00_23)));
																}
															else
																{	/* Ieee/number.scm 423 */
																	if (LLONGP(BgL_yz00_23))
																		{	/* Ieee/number.scm 423 */
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_22) ==
																				BLLONG_TO_LLONG(BgL_yz00_23));
																		}
																	else
																		{	/* Ieee/number.scm 423 */
																			if (BIGNUMP(BgL_yz00_23))
																				{	/* Ieee/number.scm 423 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_22)),
																								BgL_yz00_23)) == ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 423 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_symbol2528z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_23));
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 423 */
											if (BIGNUMP(BgL_xz00_22))
												{	/* Ieee/number.scm 423 */
													if (BIGNUMP(BgL_yz00_23))
														{	/* Ieee/number.scm 423 */
															return
																(
																(long) (bgl_bignum_cmp(BgL_xz00_22,
																		BgL_yz00_23)) == ((long) 0));
														}
													else
														{	/* Ieee/number.scm 423 */
															if (INTEGERP(BgL_yz00_23))
																{	/* Ieee/number.scm 423 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_22,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_23)))) ==
																		((long) 0));
																}
															else
																{	/* Ieee/number.scm 423 */
																	if (REALP(BgL_yz00_23))
																		{	/* Ieee/number.scm 423 */
																			return
																				(bgl_bignum_to_flonum(BgL_xz00_22) ==
																				REAL_TO_DOUBLE(BgL_yz00_23));
																		}
																	else
																		{	/* Ieee/number.scm 423 */
																			if (ELONGP(BgL_yz00_23))
																				{	/* Ieee/number.scm 423 */
																					long BgL_n1z00_1895;

																					{	/* Ieee/number.scm 423 */
																						int BgL_auxz00_4905;

																						{	/* Ieee/number.scm 423 */
																							obj_t BgL_auxz00_4906;

																							{	/* Ieee/number.scm 423 */
																								long BgL_xz00_1890;

																								BgL_xz00_1890 =
																									BELONG_TO_LONG(BgL_yz00_23);
																								BgL_auxz00_4906 =
																									bgl_long_to_bignum
																									(BgL_xz00_1890);
																							}
																							BgL_auxz00_4905 =
																								bgl_bignum_cmp(BgL_xz00_22,
																								BgL_auxz00_4906);
																						}
																						BgL_n1z00_1895 =
																							(long) (BgL_auxz00_4905);
																					}
																					return (BgL_n1z00_1895 == ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 423 */
																					if (LLONGP(BgL_yz00_23))
																						{	/* Ieee/number.scm 423 */
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_22,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_23)))) ==
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 423 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_symbol2528z00zz__r4_numbers_6_5z00,
																									BGl_string2530z00zz__r4_numbers_6_5z00,
																									BgL_yz00_23));
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 423 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_symbol2528z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_22));
												}
										}
								}
						}
				}
		}
	}



/* _2= */
	obj_t BGl__2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4319,
		obj_t BgL_xz00_4320, obj_t BgL_yz00_4321)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 422 */
			return
				BBOOL(BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_4320, BgL_yz00_4321));
		}
	}



/* = */
	BGL_EXPORTED_DEF bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_24,
		obj_t BgL_yz00_25, obj_t BgL_za7za7_26)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 428 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_24, BgL_yz00_25))
				{
					obj_t BgL_za7za7_1916;

					BgL_za7za7_1916 = BgL_za7za7_26;
				BgL_zd3zd2listz01_1915:
					if (NULLP(BgL_za7za7_1916))
						{	/* Ieee/number.scm 431 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 431 */
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_yz00_25,
									CAR(BgL_za7za7_1916)))
								{
									obj_t BgL_za7za7_4932;

									BgL_za7za7_4932 = CDR(BgL_za7za7_1916);
									BgL_za7za7_1916 = BgL_za7za7_4932;
									goto BgL_zd3zd2listz01_1915;
								}
							else
								{	/* Ieee/number.scm 431 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 431 */
					return ((bool_t) 0);
				}
		}
	}



/* _= */
	obj_t BGl__zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4322,
		obj_t BgL_xz00_4323, obj_t BgL_yz00_4324, obj_t BgL_za7za7_4325)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 428 */
			return
				BBOOL(BGl_zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_4323, BgL_yz00_4324,
					BgL_za7za7_4325));
		}
	}



/* 2< */
	BGL_EXPORTED_DEF bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_27,
		obj_t BgL_yz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 439 */
			if (INTEGERP(BgL_xz00_27))
				{	/* Ieee/number.scm 440 */
					if (INTEGERP(BgL_yz00_28))
						{	/* Ieee/number.scm 440 */
							return ((long) CINT(BgL_xz00_27) < (long) CINT(BgL_yz00_28));
						}
					else
						{	/* Ieee/number.scm 440 */
							if (REALP(BgL_yz00_28))
								{	/* Ieee/number.scm 440 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_27)) < REAL_TO_DOUBLE(BgL_yz00_28));
								}
							else
								{	/* Ieee/number.scm 440 */
									if (ELONGP(BgL_yz00_28))
										{	/* Ieee/number.scm 440 */
											long BgL_arg1294z00_592;

											{	/* Ieee/number.scm 440 */
												long BgL_auxz00_4951;

												BgL_auxz00_4951 = (long) CINT(BgL_xz00_27);
												BgL_arg1294z00_592 = LONG_TO_ELONG(BgL_auxz00_4951);
											}
											{	/* Ieee/number.scm 440 */
												long BgL_n2z00_1950;

												BgL_n2z00_1950 = BELONG_TO_LONG(BgL_yz00_28);
												return (BgL_arg1294z00_592 < BgL_n2z00_1950);
											}
										}
									else
										{	/* Ieee/number.scm 440 */
											if (LLONGP(BgL_yz00_28))
												{	/* Ieee/number.scm 440 */
													BGL_LONGLONG_T BgL_arg1296z00_594;

													{	/* Ieee/number.scm 440 */
														long BgL_auxz00_4958;

														BgL_auxz00_4958 = (long) CINT(BgL_xz00_27);
														BgL_arg1296z00_594 = LONG_TO_LLONG(BgL_auxz00_4958);
													}
													return
														(BgL_arg1296z00_594 < BLLONG_TO_LLONG(BgL_yz00_28));
												}
											else
												{	/* Ieee/number.scm 440 */
													if (BIGNUMP(BgL_yz00_28))
														{	/* Ieee/number.scm 440 */
															return
																(
																(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_27)),
																		BgL_yz00_28)) < ((long) 0));
														}
													else
														{	/* Ieee/number.scm 440 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_symbol2531z00zz__r4_numbers_6_5z00,
																	BGl_string2530z00zz__r4_numbers_6_5z00,
																	BgL_yz00_28));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 440 */
					if (REALP(BgL_xz00_27))
						{	/* Ieee/number.scm 440 */
							if (REALP(BgL_yz00_28))
								{	/* Ieee/number.scm 440 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_27) < REAL_TO_DOUBLE(BgL_yz00_28));
								}
							else
								{	/* Ieee/number.scm 440 */
									if (INTEGERP(BgL_yz00_28))
										{	/* Ieee/number.scm 440 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_27) <
												(double) ((long) CINT(BgL_yz00_28)));
										}
									else
										{	/* Ieee/number.scm 440 */
											if (ELONGP(BgL_yz00_28))
												{	/* Ieee/number.scm 440 */
													double BgL_r1z00_1972;

													BgL_r1z00_1972 = REAL_TO_DOUBLE(BgL_xz00_27);
													return
														(BgL_r1z00_1972 <
														(double) (BELONG_TO_LONG(BgL_yz00_28)));
												}
											else
												{	/* Ieee/number.scm 440 */
													if (LLONGP(BgL_yz00_28))
														{	/* Ieee/number.scm 440 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_27) <
																(double) (BLLONG_TO_LLONG(BgL_yz00_28)));
														}
													else
														{	/* Ieee/number.scm 440 */
															if (BIGNUMP(BgL_yz00_28))
																{	/* Ieee/number.scm 440 */
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_27) <
																		bgl_bignum_to_flonum(BgL_yz00_28));
																}
															else
																{	/* Ieee/number.scm 440 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_symbol2531z00zz__r4_numbers_6_5z00,
																			BGl_string2530z00zz__r4_numbers_6_5z00,
																			BgL_yz00_28));
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 440 */
							if (ELONGP(BgL_xz00_27))
								{	/* Ieee/number.scm 440 */
									if (INTEGERP(BgL_yz00_28))
										{	/* Ieee/number.scm 440 */
											long BgL_arg1311z00_609;

											{	/* Ieee/number.scm 440 */
												long BgL_auxz00_5008;

												BgL_auxz00_5008 = (long) CINT(BgL_yz00_28);
												BgL_arg1311z00_609 = LONG_TO_ELONG(BgL_auxz00_5008);
											}
											{	/* Ieee/number.scm 440 */
												long BgL_n1z00_1984;

												BgL_n1z00_1984 = BELONG_TO_LONG(BgL_xz00_27);
												return (BgL_n1z00_1984 < BgL_arg1311z00_609);
											}
										}
									else
										{	/* Ieee/number.scm 440 */
											if (REALP(BgL_yz00_28))
												{	/* Ieee/number.scm 440 */
													double BgL_r2z00_1988;

													BgL_r2z00_1988 = REAL_TO_DOUBLE(BgL_yz00_28);
													return
														(
														(double) (BELONG_TO_LONG(BgL_xz00_27)) <
														BgL_r2z00_1988);
												}
											else
												{	/* Ieee/number.scm 440 */
													if (ELONGP(BgL_yz00_28))
														{	/* Ieee/number.scm 440 */
															long BgL_n1z00_1990;

															long BgL_n2z00_1991;

															BgL_n1z00_1990 = BELONG_TO_LONG(BgL_xz00_27);
															BgL_n2z00_1991 = BELONG_TO_LONG(BgL_yz00_28);
															return (BgL_n1z00_1990 < BgL_n2z00_1991);
														}
													else
														{	/* Ieee/number.scm 440 */
															if (LLONGP(BgL_yz00_28))
																{	/* Ieee/number.scm 440 */
																	BGL_LONGLONG_T BgL_n2z00_1994;

																	BgL_n2z00_1994 = BLLONG_TO_LLONG(BgL_yz00_28);
																	return
																		(
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_xz00_27)) < BgL_n2z00_1994);
																}
															else
																{	/* Ieee/number.scm 440 */
																	if (BIGNUMP(BgL_yz00_28))
																		{	/* Ieee/number.scm 440 */
																			long BgL_n1z00_2001;

																			{	/* Ieee/number.scm 440 */
																				int BgL_auxz00_5032;

																				{	/* Ieee/number.scm 440 */
																					obj_t BgL_auxz00_5033;

																					{	/* Ieee/number.scm 440 */
																						long BgL_xz00_1996;

																						BgL_xz00_1996 =
																							BELONG_TO_LONG(BgL_xz00_27);
																						BgL_auxz00_5033 =
																							bgl_long_to_bignum(BgL_xz00_1996);
																					}
																					BgL_auxz00_5032 =
																						bgl_bignum_cmp(BgL_auxz00_5033,
																						BgL_yz00_28);
																				}
																				BgL_n1z00_2001 =
																					(long) (BgL_auxz00_5032);
																			}
																			return (BgL_n1z00_2001 < ((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 440 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_symbol2531z00zz__r4_numbers_6_5z00,
																					BGl_string2530z00zz__r4_numbers_6_5z00,
																					BgL_yz00_28));
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 440 */
									if (LLONGP(BgL_xz00_27))
										{	/* Ieee/number.scm 440 */
											if (INTEGERP(BgL_yz00_28))
												{	/* Ieee/number.scm 440 */
													BGL_LONGLONG_T BgL_arg1321z00_619;

													{	/* Ieee/number.scm 440 */
														long BgL_auxz00_5045;

														BgL_auxz00_5045 = (long) CINT(BgL_yz00_28);
														BgL_arg1321z00_619 = LONG_TO_LLONG(BgL_auxz00_5045);
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_27) < BgL_arg1321z00_619);
												}
											else
												{	/* Ieee/number.scm 440 */
													if (REALP(BgL_yz00_28))
														{	/* Ieee/number.scm 440 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_27)) <
																REAL_TO_DOUBLE(BgL_yz00_28));
														}
													else
														{	/* Ieee/number.scm 440 */
															if (ELONGP(BgL_yz00_28))
																{	/* Ieee/number.scm 440 */
																	BGL_LONGLONG_T BgL_n1z00_2013;

																	BgL_n1z00_2013 = BLLONG_TO_LLONG(BgL_xz00_27);
																	return
																		(BgL_n1z00_2013 <
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_yz00_28)));
																}
															else
																{	/* Ieee/number.scm 440 */
																	if (LLONGP(BgL_yz00_28))
																		{	/* Ieee/number.scm 440 */
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_27) <
																				BLLONG_TO_LLONG(BgL_yz00_28));
																		}
																	else
																		{	/* Ieee/number.scm 440 */
																			if (BIGNUMP(BgL_yz00_28))
																				{	/* Ieee/number.scm 440 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_27)),
																								BgL_yz00_28)) < ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 440 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_symbol2531z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_28));
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 440 */
											if (BIGNUMP(BgL_xz00_27))
												{	/* Ieee/number.scm 440 */
													if (BIGNUMP(BgL_yz00_28))
														{	/* Ieee/number.scm 440 */
															return
																(
																(long) (bgl_bignum_cmp(BgL_xz00_27,
																		BgL_yz00_28)) < ((long) 0));
														}
													else
														{	/* Ieee/number.scm 440 */
															if (INTEGERP(BgL_yz00_28))
																{	/* Ieee/number.scm 440 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_27,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_28)))) <
																		((long) 0));
																}
															else
																{	/* Ieee/number.scm 440 */
																	if (REALP(BgL_yz00_28))
																		{	/* Ieee/number.scm 440 */
																			return
																				(bgl_bignum_to_flonum(BgL_xz00_27) <
																				REAL_TO_DOUBLE(BgL_yz00_28));
																		}
																	else
																		{	/* Ieee/number.scm 440 */
																			if (ELONGP(BgL_yz00_28))
																				{	/* Ieee/number.scm 440 */
																					long BgL_n1z00_2055;

																					{	/* Ieee/number.scm 440 */
																						int BgL_auxz00_5097;

																						{	/* Ieee/number.scm 440 */
																							obj_t BgL_auxz00_5098;

																							{	/* Ieee/number.scm 440 */
																								long BgL_xz00_2050;

																								BgL_xz00_2050 =
																									BELONG_TO_LONG(BgL_yz00_28);
																								BgL_auxz00_5098 =
																									bgl_long_to_bignum
																									(BgL_xz00_2050);
																							}
																							BgL_auxz00_5097 =
																								bgl_bignum_cmp(BgL_xz00_27,
																								BgL_auxz00_5098);
																						}
																						BgL_n1z00_2055 =
																							(long) (BgL_auxz00_5097);
																					}
																					return (BgL_n1z00_2055 < ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 440 */
																					if (LLONGP(BgL_yz00_28))
																						{	/* Ieee/number.scm 440 */
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_27,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_28)))) <
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 440 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_symbol2531z00zz__r4_numbers_6_5z00,
																									BGl_string2530z00zz__r4_numbers_6_5z00,
																									BgL_yz00_28));
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 440 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_symbol2531z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_27));
												}
										}
								}
						}
				}
		}
	}



/* _2< */
	obj_t BGl__2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4326,
		obj_t BgL_xz00_4327, obj_t BgL_yz00_4328)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 439 */
			return
				BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_4327, BgL_yz00_4328));
		}
	}



/* < */
	BGL_EXPORTED_DEF bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_29,
		obj_t BgL_yz00_30, obj_t BgL_za7za7_31)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 445 */
			if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_29, BgL_yz00_30))
				{
					obj_t BgL_xz00_2068;

					obj_t BgL_za7za7_2069;

					BgL_xz00_2068 = BgL_yz00_30;
					BgL_za7za7_2069 = BgL_za7za7_31;
				BgL_zc3zd2listz11_2067:
					if (NULLP(BgL_za7za7_2069))
						{	/* Ieee/number.scm 451 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 451 */
							if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_2068,
									CAR(BgL_za7za7_2069)))
								{
									obj_t BgL_za7za7_5126;

									obj_t BgL_xz00_5124;

									BgL_xz00_5124 = CAR(BgL_za7za7_2069);
									BgL_za7za7_5126 = CDR(BgL_za7za7_2069);
									BgL_za7za7_2069 = BgL_za7za7_5126;
									BgL_xz00_2068 = BgL_xz00_5124;
									goto BgL_zc3zd2listz11_2067;
								}
							else
								{	/* Ieee/number.scm 451 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 451 */
					return ((bool_t) 0);
				}
		}
	}



/* _< */
	obj_t BGl__zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4329,
		obj_t BgL_xz00_4330, obj_t BgL_yz00_4331, obj_t BgL_za7za7_4332)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 445 */
			return
				BBOOL(BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_4330, BgL_yz00_4331,
					BgL_za7za7_4332));
		}
	}



/* 2> */
	BGL_EXPORTED_DEF bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_32,
		obj_t BgL_yz00_33)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 456 */
			if (INTEGERP(BgL_xz00_32))
				{	/* Ieee/number.scm 457 */
					if (INTEGERP(BgL_yz00_33))
						{	/* Ieee/number.scm 457 */
							return ((long) CINT(BgL_xz00_32) > (long) CINT(BgL_yz00_33));
						}
					else
						{	/* Ieee/number.scm 457 */
							if (REALP(BgL_yz00_33))
								{	/* Ieee/number.scm 457 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_32)) > REAL_TO_DOUBLE(BgL_yz00_33));
								}
							else
								{	/* Ieee/number.scm 457 */
									if (ELONGP(BgL_yz00_33))
										{	/* Ieee/number.scm 457 */
											long BgL_arg1354z00_653;

											{	/* Ieee/number.scm 457 */
												long BgL_auxz00_5145;

												BgL_auxz00_5145 = (long) CINT(BgL_xz00_32);
												BgL_arg1354z00_653 = LONG_TO_ELONG(BgL_auxz00_5145);
											}
											{	/* Ieee/number.scm 457 */
												long BgL_n2z00_2114;

												BgL_n2z00_2114 = BELONG_TO_LONG(BgL_yz00_33);
												return (BgL_arg1354z00_653 > BgL_n2z00_2114);
											}
										}
									else
										{	/* Ieee/number.scm 457 */
											if (LLONGP(BgL_yz00_33))
												{	/* Ieee/number.scm 457 */
													BGL_LONGLONG_T BgL_arg1356z00_655;

													{	/* Ieee/number.scm 457 */
														long BgL_auxz00_5152;

														BgL_auxz00_5152 = (long) CINT(BgL_xz00_32);
														BgL_arg1356z00_655 = LONG_TO_LLONG(BgL_auxz00_5152);
													}
													return
														(BgL_arg1356z00_655 > BLLONG_TO_LLONG(BgL_yz00_33));
												}
											else
												{	/* Ieee/number.scm 457 */
													if (BIGNUMP(BgL_yz00_33))
														{	/* Ieee/number.scm 457 */
															return
																(
																(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_32)),
																		BgL_yz00_33)) > ((long) 0));
														}
													else
														{	/* Ieee/number.scm 457 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_symbol2533z00zz__r4_numbers_6_5z00,
																	BGl_string2530z00zz__r4_numbers_6_5z00,
																	BgL_yz00_33));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 457 */
					if (REALP(BgL_xz00_32))
						{	/* Ieee/number.scm 457 */
							if (REALP(BgL_yz00_33))
								{	/* Ieee/number.scm 457 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_32) > REAL_TO_DOUBLE(BgL_yz00_33));
								}
							else
								{	/* Ieee/number.scm 457 */
									if (INTEGERP(BgL_yz00_33))
										{	/* Ieee/number.scm 457 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_32) >
												(double) ((long) CINT(BgL_yz00_33)));
										}
									else
										{	/* Ieee/number.scm 457 */
											if (ELONGP(BgL_yz00_33))
												{	/* Ieee/number.scm 457 */
													double BgL_r1z00_2136;

													BgL_r1z00_2136 = REAL_TO_DOUBLE(BgL_xz00_32);
													return
														(BgL_r1z00_2136 >
														(double) (BELONG_TO_LONG(BgL_yz00_33)));
												}
											else
												{	/* Ieee/number.scm 457 */
													if (LLONGP(BgL_yz00_33))
														{	/* Ieee/number.scm 457 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_32) >
																(double) (BLLONG_TO_LLONG(BgL_yz00_33)));
														}
													else
														{	/* Ieee/number.scm 457 */
															if (BIGNUMP(BgL_yz00_33))
																{	/* Ieee/number.scm 457 */
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_32) >
																		bgl_bignum_to_flonum(BgL_yz00_33));
																}
															else
																{	/* Ieee/number.scm 457 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_symbol2533z00zz__r4_numbers_6_5z00,
																			BGl_string2530z00zz__r4_numbers_6_5z00,
																			BgL_yz00_33));
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 457 */
							if (ELONGP(BgL_xz00_32))
								{	/* Ieee/number.scm 457 */
									if (INTEGERP(BgL_yz00_33))
										{	/* Ieee/number.scm 457 */
											long BgL_arg1377z00_670;

											{	/* Ieee/number.scm 457 */
												long BgL_auxz00_5202;

												BgL_auxz00_5202 = (long) CINT(BgL_yz00_33);
												BgL_arg1377z00_670 = LONG_TO_ELONG(BgL_auxz00_5202);
											}
											{	/* Ieee/number.scm 457 */
												long BgL_n1z00_2148;

												BgL_n1z00_2148 = BELONG_TO_LONG(BgL_xz00_32);
												return (BgL_n1z00_2148 > BgL_arg1377z00_670);
											}
										}
									else
										{	/* Ieee/number.scm 457 */
											if (REALP(BgL_yz00_33))
												{	/* Ieee/number.scm 457 */
													double BgL_r2z00_2152;

													BgL_r2z00_2152 = REAL_TO_DOUBLE(BgL_yz00_33);
													return
														(
														(double) (BELONG_TO_LONG(BgL_xz00_32)) >
														BgL_r2z00_2152);
												}
											else
												{	/* Ieee/number.scm 457 */
													if (ELONGP(BgL_yz00_33))
														{	/* Ieee/number.scm 457 */
															long BgL_n1z00_2154;

															long BgL_n2z00_2155;

															BgL_n1z00_2154 = BELONG_TO_LONG(BgL_xz00_32);
															BgL_n2z00_2155 = BELONG_TO_LONG(BgL_yz00_33);
															return (BgL_n1z00_2154 > BgL_n2z00_2155);
														}
													else
														{	/* Ieee/number.scm 457 */
															if (LLONGP(BgL_yz00_33))
																{	/* Ieee/number.scm 457 */
																	BGL_LONGLONG_T BgL_n2z00_2158;

																	BgL_n2z00_2158 = BLLONG_TO_LLONG(BgL_yz00_33);
																	return
																		(
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_xz00_32)) > BgL_n2z00_2158);
																}
															else
																{	/* Ieee/number.scm 457 */
																	if (BIGNUMP(BgL_yz00_33))
																		{	/* Ieee/number.scm 457 */
																			long BgL_n1z00_2165;

																			{	/* Ieee/number.scm 457 */
																				int BgL_auxz00_5226;

																				{	/* Ieee/number.scm 457 */
																					obj_t BgL_auxz00_5227;

																					{	/* Ieee/number.scm 457 */
																						long BgL_xz00_2160;

																						BgL_xz00_2160 =
																							BELONG_TO_LONG(BgL_xz00_32);
																						BgL_auxz00_5227 =
																							bgl_long_to_bignum(BgL_xz00_2160);
																					}
																					BgL_auxz00_5226 =
																						bgl_bignum_cmp(BgL_auxz00_5227,
																						BgL_yz00_33);
																				}
																				BgL_n1z00_2165 =
																					(long) (BgL_auxz00_5226);
																			}
																			return (BgL_n1z00_2165 > ((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 457 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_symbol2533z00zz__r4_numbers_6_5z00,
																					BGl_string2530z00zz__r4_numbers_6_5z00,
																					BgL_yz00_33));
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 457 */
									if (LLONGP(BgL_xz00_32))
										{	/* Ieee/number.scm 457 */
											if (INTEGERP(BgL_yz00_33))
												{	/* Ieee/number.scm 457 */
													BGL_LONGLONG_T BgL_arg1387z00_680;

													{	/* Ieee/number.scm 457 */
														long BgL_auxz00_5239;

														BgL_auxz00_5239 = (long) CINT(BgL_yz00_33);
														BgL_arg1387z00_680 = LONG_TO_LLONG(BgL_auxz00_5239);
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_32) > BgL_arg1387z00_680);
												}
											else
												{	/* Ieee/number.scm 457 */
													if (REALP(BgL_yz00_33))
														{	/* Ieee/number.scm 457 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_32)) >
																REAL_TO_DOUBLE(BgL_yz00_33));
														}
													else
														{	/* Ieee/number.scm 457 */
															if (ELONGP(BgL_yz00_33))
																{	/* Ieee/number.scm 457 */
																	BGL_LONGLONG_T BgL_n1z00_2177;

																	BgL_n1z00_2177 = BLLONG_TO_LLONG(BgL_xz00_32);
																	return
																		(BgL_n1z00_2177 >
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_yz00_33)));
																}
															else
																{	/* Ieee/number.scm 457 */
																	if (LLONGP(BgL_yz00_33))
																		{	/* Ieee/number.scm 457 */
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_32) >
																				BLLONG_TO_LLONG(BgL_yz00_33));
																		}
																	else
																		{	/* Ieee/number.scm 457 */
																			if (BIGNUMP(BgL_yz00_33))
																				{	/* Ieee/number.scm 457 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_32)),
																								BgL_yz00_33)) > ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 457 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_symbol2533z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_33));
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 457 */
											if (BIGNUMP(BgL_xz00_32))
												{	/* Ieee/number.scm 457 */
													if (BIGNUMP(BgL_yz00_33))
														{	/* Ieee/number.scm 457 */
															return
																(
																(long) (bgl_bignum_cmp(BgL_xz00_32,
																		BgL_yz00_33)) > ((long) 0));
														}
													else
														{	/* Ieee/number.scm 457 */
															if (INTEGERP(BgL_yz00_33))
																{	/* Ieee/number.scm 457 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_32,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_33)))) >
																		((long) 0));
																}
															else
																{	/* Ieee/number.scm 457 */
																	if (REALP(BgL_yz00_33))
																		{	/* Ieee/number.scm 457 */
																			return
																				(bgl_bignum_to_flonum(BgL_xz00_32) >
																				REAL_TO_DOUBLE(BgL_yz00_33));
																		}
																	else
																		{	/* Ieee/number.scm 457 */
																			if (ELONGP(BgL_yz00_33))
																				{	/* Ieee/number.scm 457 */
																					long BgL_n1z00_2219;

																					{	/* Ieee/number.scm 457 */
																						int BgL_auxz00_5291;

																						{	/* Ieee/number.scm 457 */
																							obj_t BgL_auxz00_5292;

																							{	/* Ieee/number.scm 457 */
																								long BgL_xz00_2214;

																								BgL_xz00_2214 =
																									BELONG_TO_LONG(BgL_yz00_33);
																								BgL_auxz00_5292 =
																									bgl_long_to_bignum
																									(BgL_xz00_2214);
																							}
																							BgL_auxz00_5291 =
																								bgl_bignum_cmp(BgL_xz00_32,
																								BgL_auxz00_5292);
																						}
																						BgL_n1z00_2219 =
																							(long) (BgL_auxz00_5291);
																					}
																					return (BgL_n1z00_2219 > ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 457 */
																					if (LLONGP(BgL_yz00_33))
																						{	/* Ieee/number.scm 457 */
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_32,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_33)))) >
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 457 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_symbol2533z00zz__r4_numbers_6_5z00,
																									BGl_string2530z00zz__r4_numbers_6_5z00,
																									BgL_yz00_33));
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 457 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_symbol2533z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_32));
												}
										}
								}
						}
				}
		}
	}



/* _2> */
	obj_t BGl__2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4333,
		obj_t BgL_xz00_4334, obj_t BgL_yz00_4335)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 456 */
			return
				BBOOL(BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_4334, BgL_yz00_4335));
		}
	}



/* > */
	BGL_EXPORTED_DEF bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_34,
		obj_t BgL_yz00_35, obj_t BgL_za7za7_36)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 462 */
			if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_34, BgL_yz00_35))
				{
					obj_t BgL_xz00_2232;

					obj_t BgL_za7za7_2233;

					BgL_xz00_2232 = BgL_yz00_35;
					BgL_za7za7_2233 = BgL_za7za7_36;
				BgL_ze3zd2listz31_2231:
					if (NULLP(BgL_za7za7_2233))
						{	/* Ieee/number.scm 468 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 468 */
							if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_2232,
									CAR(BgL_za7za7_2233)))
								{
									obj_t BgL_za7za7_5320;

									obj_t BgL_xz00_5318;

									BgL_xz00_5318 = CAR(BgL_za7za7_2233);
									BgL_za7za7_5320 = CDR(BgL_za7za7_2233);
									BgL_za7za7_2233 = BgL_za7za7_5320;
									BgL_xz00_2232 = BgL_xz00_5318;
									goto BgL_ze3zd2listz31_2231;
								}
							else
								{	/* Ieee/number.scm 468 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 468 */
					return ((bool_t) 0);
				}
		}
	}



/* _> */
	obj_t BGl__ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4336,
		obj_t BgL_xz00_4337, obj_t BgL_yz00_4338, obj_t BgL_za7za7_4339)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 462 */
			return
				BBOOL(BGl_ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_4337, BgL_yz00_4338,
					BgL_za7za7_4339));
		}
	}



/* 2<= */
	BGL_EXPORTED_DEF bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_37,
		obj_t BgL_yz00_38)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 473 */
			if (INTEGERP(BgL_xz00_37))
				{	/* Ieee/number.scm 474 */
					if (INTEGERP(BgL_yz00_38))
						{	/* Ieee/number.scm 474 */
							return ((long) CINT(BgL_xz00_37) <= (long) CINT(BgL_yz00_38));
						}
					else
						{	/* Ieee/number.scm 474 */
							if (REALP(BgL_yz00_38))
								{	/* Ieee/number.scm 474 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_37)) <= REAL_TO_DOUBLE(BgL_yz00_38));
								}
							else
								{	/* Ieee/number.scm 474 */
									if (ELONGP(BgL_yz00_38))
										{	/* Ieee/number.scm 474 */
											long BgL_arg1416z00_714;

											{	/* Ieee/number.scm 474 */
												long BgL_auxz00_5339;

												BgL_auxz00_5339 = (long) CINT(BgL_xz00_37);
												BgL_arg1416z00_714 = LONG_TO_ELONG(BgL_auxz00_5339);
											}
											{	/* Ieee/number.scm 474 */
												long BgL_n2z00_2278;

												BgL_n2z00_2278 = BELONG_TO_LONG(BgL_yz00_38);
												return (BgL_arg1416z00_714 <= BgL_n2z00_2278);
											}
										}
									else
										{	/* Ieee/number.scm 474 */
											if (LLONGP(BgL_yz00_38))
												{	/* Ieee/number.scm 474 */
													BGL_LONGLONG_T BgL_arg1418z00_716;

													{	/* Ieee/number.scm 474 */
														long BgL_auxz00_5346;

														BgL_auxz00_5346 = (long) CINT(BgL_xz00_37);
														BgL_arg1418z00_716 = LONG_TO_LLONG(BgL_auxz00_5346);
													}
													return
														(BgL_arg1418z00_716 <=
														BLLONG_TO_LLONG(BgL_yz00_38));
												}
											else
												{	/* Ieee/number.scm 474 */
													if (BIGNUMP(BgL_yz00_38))
														{	/* Ieee/number.scm 474 */
															return
																(
																(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_37)),
																		BgL_yz00_38)) <= ((long) 0));
														}
													else
														{	/* Ieee/number.scm 474 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_symbol2535z00zz__r4_numbers_6_5z00,
																	BGl_string2530z00zz__r4_numbers_6_5z00,
																	BgL_yz00_38));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 474 */
					if (REALP(BgL_xz00_37))
						{	/* Ieee/number.scm 474 */
							if (REALP(BgL_yz00_38))
								{	/* Ieee/number.scm 474 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_37) <=
										REAL_TO_DOUBLE(BgL_yz00_38));
								}
							else
								{	/* Ieee/number.scm 474 */
									if (INTEGERP(BgL_yz00_38))
										{	/* Ieee/number.scm 474 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_37) <=
												(double) ((long) CINT(BgL_yz00_38)));
										}
									else
										{	/* Ieee/number.scm 474 */
											if (ELONGP(BgL_yz00_38))
												{	/* Ieee/number.scm 474 */
													double BgL_r1z00_2300;

													BgL_r1z00_2300 = REAL_TO_DOUBLE(BgL_xz00_37);
													return
														(BgL_r1z00_2300 <=
														(double) (BELONG_TO_LONG(BgL_yz00_38)));
												}
											else
												{	/* Ieee/number.scm 474 */
													if (LLONGP(BgL_yz00_38))
														{	/* Ieee/number.scm 474 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_37) <=
																(double) (BLLONG_TO_LLONG(BgL_yz00_38)));
														}
													else
														{	/* Ieee/number.scm 474 */
															if (BIGNUMP(BgL_yz00_38))
																{	/* Ieee/number.scm 474 */
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_37) <=
																		bgl_bignum_to_flonum(BgL_yz00_38));
																}
															else
																{	/* Ieee/number.scm 474 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_symbol2535z00zz__r4_numbers_6_5z00,
																			BGl_string2530z00zz__r4_numbers_6_5z00,
																			BgL_yz00_38));
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 474 */
							if (ELONGP(BgL_xz00_37))
								{	/* Ieee/number.scm 474 */
									if (INTEGERP(BgL_yz00_38))
										{	/* Ieee/number.scm 474 */
											long BgL_arg1433z00_731;

											{	/* Ieee/number.scm 474 */
												long BgL_auxz00_5396;

												BgL_auxz00_5396 = (long) CINT(BgL_yz00_38);
												BgL_arg1433z00_731 = LONG_TO_ELONG(BgL_auxz00_5396);
											}
											{	/* Ieee/number.scm 474 */
												long BgL_n1z00_2312;

												BgL_n1z00_2312 = BELONG_TO_LONG(BgL_xz00_37);
												return (BgL_n1z00_2312 <= BgL_arg1433z00_731);
											}
										}
									else
										{	/* Ieee/number.scm 474 */
											if (REALP(BgL_yz00_38))
												{	/* Ieee/number.scm 474 */
													double BgL_r2z00_2316;

													BgL_r2z00_2316 = REAL_TO_DOUBLE(BgL_yz00_38);
													return
														(
														(double) (BELONG_TO_LONG(BgL_xz00_37)) <=
														BgL_r2z00_2316);
												}
											else
												{	/* Ieee/number.scm 474 */
													if (ELONGP(BgL_yz00_38))
														{	/* Ieee/number.scm 474 */
															long BgL_n1z00_2318;

															long BgL_n2z00_2319;

															BgL_n1z00_2318 = BELONG_TO_LONG(BgL_xz00_37);
															BgL_n2z00_2319 = BELONG_TO_LONG(BgL_yz00_38);
															return (BgL_n1z00_2318 <= BgL_n2z00_2319);
														}
													else
														{	/* Ieee/number.scm 474 */
															if (LLONGP(BgL_yz00_38))
																{	/* Ieee/number.scm 474 */
																	BGL_LONGLONG_T BgL_n2z00_2322;

																	BgL_n2z00_2322 = BLLONG_TO_LLONG(BgL_yz00_38);
																	return
																		(
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_xz00_37)) <= BgL_n2z00_2322);
																}
															else
																{	/* Ieee/number.scm 474 */
																	if (BIGNUMP(BgL_yz00_38))
																		{	/* Ieee/number.scm 474 */
																			long BgL_n1z00_2329;

																			{	/* Ieee/number.scm 474 */
																				int BgL_auxz00_5420;

																				{	/* Ieee/number.scm 474 */
																					obj_t BgL_auxz00_5421;

																					{	/* Ieee/number.scm 474 */
																						long BgL_xz00_2324;

																						BgL_xz00_2324 =
																							BELONG_TO_LONG(BgL_xz00_37);
																						BgL_auxz00_5421 =
																							bgl_long_to_bignum(BgL_xz00_2324);
																					}
																					BgL_auxz00_5420 =
																						bgl_bignum_cmp(BgL_auxz00_5421,
																						BgL_yz00_38);
																				}
																				BgL_n1z00_2329 =
																					(long) (BgL_auxz00_5420);
																			}
																			return (BgL_n1z00_2329 <= ((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 474 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_symbol2535z00zz__r4_numbers_6_5z00,
																					BGl_string2530z00zz__r4_numbers_6_5z00,
																					BgL_yz00_38));
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 474 */
									if (LLONGP(BgL_xz00_37))
										{	/* Ieee/number.scm 474 */
											if (INTEGERP(BgL_yz00_38))
												{	/* Ieee/number.scm 474 */
													BGL_LONGLONG_T BgL_arg1443z00_741;

													{	/* Ieee/number.scm 474 */
														long BgL_auxz00_5433;

														BgL_auxz00_5433 = (long) CINT(BgL_yz00_38);
														BgL_arg1443z00_741 = LONG_TO_LLONG(BgL_auxz00_5433);
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_37) <=
														BgL_arg1443z00_741);
												}
											else
												{	/* Ieee/number.scm 474 */
													if (REALP(BgL_yz00_38))
														{	/* Ieee/number.scm 474 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_37)) <=
																REAL_TO_DOUBLE(BgL_yz00_38));
														}
													else
														{	/* Ieee/number.scm 474 */
															if (ELONGP(BgL_yz00_38))
																{	/* Ieee/number.scm 474 */
																	BGL_LONGLONG_T BgL_n1z00_2341;

																	BgL_n1z00_2341 = BLLONG_TO_LLONG(BgL_xz00_37);
																	return
																		(BgL_n1z00_2341 <=
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_yz00_38)));
																}
															else
																{	/* Ieee/number.scm 474 */
																	if (LLONGP(BgL_yz00_38))
																		{	/* Ieee/number.scm 474 */
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_37) <=
																				BLLONG_TO_LLONG(BgL_yz00_38));
																		}
																	else
																		{	/* Ieee/number.scm 474 */
																			if (BIGNUMP(BgL_yz00_38))
																				{	/* Ieee/number.scm 474 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_37)),
																								BgL_yz00_38)) <= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 474 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_symbol2535z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_38));
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 474 */
											if (BIGNUMP(BgL_xz00_37))
												{	/* Ieee/number.scm 474 */
													if (BIGNUMP(BgL_yz00_38))
														{	/* Ieee/number.scm 474 */
															return
																(
																(long) (bgl_bignum_cmp(BgL_xz00_37,
																		BgL_yz00_38)) <= ((long) 0));
														}
													else
														{	/* Ieee/number.scm 474 */
															if (INTEGERP(BgL_yz00_38))
																{	/* Ieee/number.scm 474 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_37,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_38)))) <=
																		((long) 0));
																}
															else
																{	/* Ieee/number.scm 474 */
																	if (REALP(BgL_yz00_38))
																		{	/* Ieee/number.scm 474 */
																			return
																				(bgl_bignum_to_flonum(BgL_xz00_37) <=
																				REAL_TO_DOUBLE(BgL_yz00_38));
																		}
																	else
																		{	/* Ieee/number.scm 474 */
																			if (ELONGP(BgL_yz00_38))
																				{	/* Ieee/number.scm 474 */
																					long BgL_n1z00_2383;

																					{	/* Ieee/number.scm 474 */
																						int BgL_auxz00_5485;

																						{	/* Ieee/number.scm 474 */
																							obj_t BgL_auxz00_5486;

																							{	/* Ieee/number.scm 474 */
																								long BgL_xz00_2378;

																								BgL_xz00_2378 =
																									BELONG_TO_LONG(BgL_yz00_38);
																								BgL_auxz00_5486 =
																									bgl_long_to_bignum
																									(BgL_xz00_2378);
																							}
																							BgL_auxz00_5485 =
																								bgl_bignum_cmp(BgL_xz00_37,
																								BgL_auxz00_5486);
																						}
																						BgL_n1z00_2383 =
																							(long) (BgL_auxz00_5485);
																					}
																					return (BgL_n1z00_2383 <= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 474 */
																					if (LLONGP(BgL_yz00_38))
																						{	/* Ieee/number.scm 474 */
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_37,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_38)))) <=
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 474 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_symbol2535z00zz__r4_numbers_6_5z00,
																									BGl_string2530z00zz__r4_numbers_6_5z00,
																									BgL_yz00_38));
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 474 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_symbol2535z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_37));
												}
										}
								}
						}
				}
		}
	}



/* _2<= */
	obj_t BGl__2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_envz00_4340,
		obj_t BgL_xz00_4341, obj_t BgL_yz00_4342)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 473 */
			return
				BBOOL(BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_4341,
					BgL_yz00_4342));
		}
	}



/* <= */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_39,
		obj_t BgL_yz00_40, obj_t BgL_za7za7_41)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 479 */
			if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_39, BgL_yz00_40))
				{
					obj_t BgL_xz00_2396;

					obj_t BgL_za7za7_2397;

					BgL_xz00_2396 = BgL_yz00_40;
					BgL_za7za7_2397 = BgL_za7za7_41;
				BgL_zc3zd3zd2listzc2_2395:
					if (NULLP(BgL_za7za7_2397))
						{	/* Ieee/number.scm 485 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 485 */
							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_2396,
									CAR(BgL_za7za7_2397)))
								{
									obj_t BgL_za7za7_5514;

									obj_t BgL_xz00_5512;

									BgL_xz00_5512 = CAR(BgL_za7za7_2397);
									BgL_za7za7_5514 = CDR(BgL_za7za7_2397);
									BgL_za7za7_2397 = BgL_za7za7_5514;
									BgL_xz00_2396 = BgL_xz00_5512;
									goto BgL_zc3zd3zd2listzc2_2395;
								}
							else
								{	/* Ieee/number.scm 485 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 485 */
					return ((bool_t) 0);
				}
		}
	}



/* _<= */
	obj_t BGl__zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_envz00_4343,
		obj_t BgL_xz00_4344, obj_t BgL_yz00_4345, obj_t BgL_za7za7_4346)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 479 */
			return
				BBOOL(BGl_zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_4344, BgL_yz00_4345,
					BgL_za7za7_4346));
		}
	}



/* 2>= */
	BGL_EXPORTED_DEF bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_42,
		obj_t BgL_yz00_43)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 490 */
			if (INTEGERP(BgL_xz00_42))
				{	/* Ieee/number.scm 491 */
					if (INTEGERP(BgL_yz00_43))
						{	/* Ieee/number.scm 491 */
							return ((long) CINT(BgL_xz00_42) >= (long) CINT(BgL_yz00_43));
						}
					else
						{	/* Ieee/number.scm 491 */
							if (REALP(BgL_yz00_43))
								{	/* Ieee/number.scm 491 */
									return
										(
										(double) (
											(long) CINT(BgL_xz00_42)) >= REAL_TO_DOUBLE(BgL_yz00_43));
								}
							else
								{	/* Ieee/number.scm 491 */
									if (ELONGP(BgL_yz00_43))
										{	/* Ieee/number.scm 491 */
											long BgL_arg1472z00_775;

											{	/* Ieee/number.scm 491 */
												long BgL_auxz00_5533;

												BgL_auxz00_5533 = (long) CINT(BgL_xz00_42);
												BgL_arg1472z00_775 = LONG_TO_ELONG(BgL_auxz00_5533);
											}
											{	/* Ieee/number.scm 491 */
												long BgL_n2z00_2442;

												BgL_n2z00_2442 = BELONG_TO_LONG(BgL_yz00_43);
												return (BgL_arg1472z00_775 >= BgL_n2z00_2442);
											}
										}
									else
										{	/* Ieee/number.scm 491 */
											if (LLONGP(BgL_yz00_43))
												{	/* Ieee/number.scm 491 */
													BGL_LONGLONG_T BgL_arg1474z00_777;

													{	/* Ieee/number.scm 491 */
														long BgL_auxz00_5540;

														BgL_auxz00_5540 = (long) CINT(BgL_xz00_42);
														BgL_arg1474z00_777 = LONG_TO_LLONG(BgL_auxz00_5540);
													}
													return
														(BgL_arg1474z00_777 >=
														BLLONG_TO_LLONG(BgL_yz00_43));
												}
											else
												{	/* Ieee/number.scm 491 */
													if (BIGNUMP(BgL_yz00_43))
														{	/* Ieee/number.scm 491 */
															return
																(
																(long) (bgl_bignum_cmp(bgl_long_to_bignum(
																			(long) CINT(BgL_xz00_42)),
																		BgL_yz00_43)) >= ((long) 0));
														}
													else
														{	/* Ieee/number.scm 491 */
															return
																CBOOL(BGl_errorz00zz__errorz00
																(BGl_symbol2537z00zz__r4_numbers_6_5z00,
																	BGl_string2530z00zz__r4_numbers_6_5z00,
																	BgL_yz00_43));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 491 */
					if (REALP(BgL_xz00_42))
						{	/* Ieee/number.scm 491 */
							if (REALP(BgL_yz00_43))
								{	/* Ieee/number.scm 491 */
									return
										(REAL_TO_DOUBLE(BgL_xz00_42) >=
										REAL_TO_DOUBLE(BgL_yz00_43));
								}
							else
								{	/* Ieee/number.scm 491 */
									if (INTEGERP(BgL_yz00_43))
										{	/* Ieee/number.scm 491 */
											return
												(REAL_TO_DOUBLE(BgL_xz00_42) >=
												(double) ((long) CINT(BgL_yz00_43)));
										}
									else
										{	/* Ieee/number.scm 491 */
											if (ELONGP(BgL_yz00_43))
												{	/* Ieee/number.scm 491 */
													double BgL_r1z00_2464;

													BgL_r1z00_2464 = REAL_TO_DOUBLE(BgL_xz00_42);
													return
														(BgL_r1z00_2464 >=
														(double) (BELONG_TO_LONG(BgL_yz00_43)));
												}
											else
												{	/* Ieee/number.scm 491 */
													if (LLONGP(BgL_yz00_43))
														{	/* Ieee/number.scm 491 */
															return
																(REAL_TO_DOUBLE(BgL_xz00_42) >=
																(double) (BLLONG_TO_LLONG(BgL_yz00_43)));
														}
													else
														{	/* Ieee/number.scm 491 */
															if (BIGNUMP(BgL_yz00_43))
																{	/* Ieee/number.scm 491 */
																	return
																		(REAL_TO_DOUBLE(BgL_xz00_42) >=
																		bgl_bignum_to_flonum(BgL_yz00_43));
																}
															else
																{	/* Ieee/number.scm 491 */
																	return
																		CBOOL(BGl_errorz00zz__errorz00
																		(BGl_symbol2537z00zz__r4_numbers_6_5z00,
																			BGl_string2530z00zz__r4_numbers_6_5z00,
																			BgL_yz00_43));
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 491 */
							if (ELONGP(BgL_xz00_42))
								{	/* Ieee/number.scm 491 */
									if (INTEGERP(BgL_yz00_43))
										{	/* Ieee/number.scm 491 */
											long BgL_arg1489z00_792;

											{	/* Ieee/number.scm 491 */
												long BgL_auxz00_5590;

												BgL_auxz00_5590 = (long) CINT(BgL_yz00_43);
												BgL_arg1489z00_792 = LONG_TO_ELONG(BgL_auxz00_5590);
											}
											{	/* Ieee/number.scm 491 */
												long BgL_n1z00_2476;

												BgL_n1z00_2476 = BELONG_TO_LONG(BgL_xz00_42);
												return (BgL_n1z00_2476 >= BgL_arg1489z00_792);
											}
										}
									else
										{	/* Ieee/number.scm 491 */
											if (REALP(BgL_yz00_43))
												{	/* Ieee/number.scm 491 */
													double BgL_r2z00_2480;

													BgL_r2z00_2480 = REAL_TO_DOUBLE(BgL_yz00_43);
													return
														(
														(double) (BELONG_TO_LONG(BgL_xz00_42)) >=
														BgL_r2z00_2480);
												}
											else
												{	/* Ieee/number.scm 491 */
													if (ELONGP(BgL_yz00_43))
														{	/* Ieee/number.scm 491 */
															long BgL_n1z00_2482;

															long BgL_n2z00_2483;

															BgL_n1z00_2482 = BELONG_TO_LONG(BgL_xz00_42);
															BgL_n2z00_2483 = BELONG_TO_LONG(BgL_yz00_43);
															return (BgL_n1z00_2482 >= BgL_n2z00_2483);
														}
													else
														{	/* Ieee/number.scm 491 */
															if (LLONGP(BgL_yz00_43))
																{	/* Ieee/number.scm 491 */
																	BGL_LONGLONG_T BgL_n2z00_2486;

																	BgL_n2z00_2486 = BLLONG_TO_LLONG(BgL_yz00_43);
																	return
																		(
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_xz00_42)) >= BgL_n2z00_2486);
																}
															else
																{	/* Ieee/number.scm 491 */
																	if (BIGNUMP(BgL_yz00_43))
																		{	/* Ieee/number.scm 491 */
																			long BgL_n1z00_2493;

																			{	/* Ieee/number.scm 491 */
																				int BgL_auxz00_5614;

																				{	/* Ieee/number.scm 491 */
																					obj_t BgL_auxz00_5615;

																					{	/* Ieee/number.scm 491 */
																						long BgL_xz00_2488;

																						BgL_xz00_2488 =
																							BELONG_TO_LONG(BgL_xz00_42);
																						BgL_auxz00_5615 =
																							bgl_long_to_bignum(BgL_xz00_2488);
																					}
																					BgL_auxz00_5614 =
																						bgl_bignum_cmp(BgL_auxz00_5615,
																						BgL_yz00_43);
																				}
																				BgL_n1z00_2493 =
																					(long) (BgL_auxz00_5614);
																			}
																			return (BgL_n1z00_2493 >= ((long) 0));
																		}
																	else
																		{	/* Ieee/number.scm 491 */
																			return
																				CBOOL(BGl_errorz00zz__errorz00
																				(BGl_symbol2537z00zz__r4_numbers_6_5z00,
																					BGl_string2530z00zz__r4_numbers_6_5z00,
																					BgL_yz00_43));
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 491 */
									if (LLONGP(BgL_xz00_42))
										{	/* Ieee/number.scm 491 */
											if (INTEGERP(BgL_yz00_43))
												{	/* Ieee/number.scm 491 */
													BGL_LONGLONG_T BgL_arg1499z00_802;

													{	/* Ieee/number.scm 491 */
														long BgL_auxz00_5627;

														BgL_auxz00_5627 = (long) CINT(BgL_yz00_43);
														BgL_arg1499z00_802 = LONG_TO_LLONG(BgL_auxz00_5627);
													}
													return
														(BLLONG_TO_LLONG(BgL_xz00_42) >=
														BgL_arg1499z00_802);
												}
											else
												{	/* Ieee/number.scm 491 */
													if (REALP(BgL_yz00_43))
														{	/* Ieee/number.scm 491 */
															return
																(
																(double) (BLLONG_TO_LLONG(BgL_xz00_42)) >=
																REAL_TO_DOUBLE(BgL_yz00_43));
														}
													else
														{	/* Ieee/number.scm 491 */
															if (ELONGP(BgL_yz00_43))
																{	/* Ieee/number.scm 491 */
																	BGL_LONGLONG_T BgL_n1z00_2505;

																	BgL_n1z00_2505 = BLLONG_TO_LLONG(BgL_xz00_42);
																	return
																		(BgL_n1z00_2505 >=
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																			(BgL_yz00_43)));
																}
															else
																{	/* Ieee/number.scm 491 */
																	if (LLONGP(BgL_yz00_43))
																		{	/* Ieee/number.scm 491 */
																			return
																				(BLLONG_TO_LLONG(BgL_xz00_42) >=
																				BLLONG_TO_LLONG(BgL_yz00_43));
																		}
																	else
																		{	/* Ieee/number.scm 491 */
																			if (BIGNUMP(BgL_yz00_43))
																				{	/* Ieee/number.scm 491 */
																					return
																						(
																						(long) (bgl_bignum_cmp
																							(bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_xz00_42)),
																								BgL_yz00_43)) >= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 491 */
																					return
																						CBOOL(BGl_errorz00zz__errorz00
																						(BGl_symbol2537z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_43));
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 491 */
											if (BIGNUMP(BgL_xz00_42))
												{	/* Ieee/number.scm 491 */
													if (BIGNUMP(BgL_yz00_43))
														{	/* Ieee/number.scm 491 */
															return
																(
																(long) (bgl_bignum_cmp(BgL_xz00_42,
																		BgL_yz00_43)) >= ((long) 0));
														}
													else
														{	/* Ieee/number.scm 491 */
															if (INTEGERP(BgL_yz00_43))
																{	/* Ieee/number.scm 491 */
																	return
																		(
																		(long) (bgl_bignum_cmp(BgL_xz00_42,
																				bgl_long_to_bignum(
																					(long) CINT(BgL_yz00_43)))) >=
																		((long) 0));
																}
															else
																{	/* Ieee/number.scm 491 */
																	if (REALP(BgL_yz00_43))
																		{	/* Ieee/number.scm 491 */
																			return
																				(bgl_bignum_to_flonum(BgL_xz00_42) >=
																				REAL_TO_DOUBLE(BgL_yz00_43));
																		}
																	else
																		{	/* Ieee/number.scm 491 */
																			if (ELONGP(BgL_yz00_43))
																				{	/* Ieee/number.scm 491 */
																					long BgL_n1z00_2547;

																					{	/* Ieee/number.scm 491 */
																						int BgL_auxz00_5679;

																						{	/* Ieee/number.scm 491 */
																							obj_t BgL_auxz00_5680;

																							{	/* Ieee/number.scm 491 */
																								long BgL_xz00_2542;

																								BgL_xz00_2542 =
																									BELONG_TO_LONG(BgL_yz00_43);
																								BgL_auxz00_5680 =
																									bgl_long_to_bignum
																									(BgL_xz00_2542);
																							}
																							BgL_auxz00_5679 =
																								bgl_bignum_cmp(BgL_xz00_42,
																								BgL_auxz00_5680);
																						}
																						BgL_n1z00_2547 =
																							(long) (BgL_auxz00_5679);
																					}
																					return (BgL_n1z00_2547 >= ((long) 0));
																				}
																			else
																				{	/* Ieee/number.scm 491 */
																					if (LLONGP(BgL_yz00_43))
																						{	/* Ieee/number.scm 491 */
																							return
																								(
																								(long) (bgl_bignum_cmp
																									(BgL_xz00_42,
																										bgl_llong_to_bignum
																										(BLLONG_TO_LLONG
																											(BgL_yz00_43)))) >=
																								((long) 0));
																						}
																					else
																						{	/* Ieee/number.scm 491 */
																							return
																								CBOOL(BGl_errorz00zz__errorz00
																								(BGl_symbol2537z00zz__r4_numbers_6_5z00,
																									BGl_string2530z00zz__r4_numbers_6_5z00,
																									BgL_yz00_43));
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 491 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_symbol2537z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_42));
												}
										}
								}
						}
				}
		}
	}



/* _2>= */
	obj_t BGl__2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_envz00_4347,
		obj_t BgL_xz00_4348, obj_t BgL_yz00_4349)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 490 */
			return
				BBOOL(BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_4348,
					BgL_yz00_4349));
		}
	}



/* >= */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_44,
		obj_t BgL_yz00_45, obj_t BgL_za7za7_46)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 496 */
			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_44, BgL_yz00_45))
				{
					obj_t BgL_xz00_2560;

					obj_t BgL_za7za7_2561;

					BgL_xz00_2560 = BgL_yz00_45;
					BgL_za7za7_2561 = BgL_za7za7_46;
				BgL_ze3zd3zd2listze2_2559:
					if (NULLP(BgL_za7za7_2561))
						{	/* Ieee/number.scm 502 */
							return ((bool_t) 1);
						}
					else
						{	/* Ieee/number.scm 502 */
							if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_2560,
									CAR(BgL_za7za7_2561)))
								{
									obj_t BgL_za7za7_5708;

									obj_t BgL_xz00_5706;

									BgL_xz00_5706 = CAR(BgL_za7za7_2561);
									BgL_za7za7_5708 = CDR(BgL_za7za7_2561);
									BgL_za7za7_2561 = BgL_za7za7_5708;
									BgL_xz00_2560 = BgL_xz00_5706;
									goto BgL_ze3zd3zd2listze2_2559;
								}
							else
								{	/* Ieee/number.scm 502 */
									return ((bool_t) 0);
								}
						}
				}
			else
				{	/* Ieee/number.scm 502 */
					return ((bool_t) 0);
				}
		}
	}



/* _>= */
	obj_t BGl__ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_envz00_4350,
		obj_t BgL_xz00_4351, obj_t BgL_yz00_4352, obj_t BgL_za7za7_4353)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 496 */
			return
				BBOOL(BGl_ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_4351, BgL_yz00_4352,
					BgL_za7za7_4353));
		}
	}



/* zero? */
	BGL_EXPORTED_DEF bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_47)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 507 */
			if (INTEGERP(BgL_xz00_47))
				{	/* Ieee/number.scm 509 */
					return ((long) CINT(BgL_xz00_47) == ((long) 0));
				}
			else
				{	/* Ieee/number.scm 509 */
					if (REALP(BgL_xz00_47))
						{	/* Ieee/number.scm 511 */
							return (REAL_TO_DOUBLE(BgL_xz00_47) == ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 511 */
							if (ELONGP(BgL_xz00_47))
								{	/* Ieee/number.scm 514 */
									long BgL_n1z00_2605;

									BgL_n1z00_2605 = BELONG_TO_LONG(BgL_xz00_47);
									return (BgL_n1z00_2605 == ((long) 0));
								}
							else
								{	/* Ieee/number.scm 513 */
									if (LLONGP(BgL_xz00_47))
										{	/* Ieee/number.scm 515 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_47) == ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 515 */
											if (BIGNUMP(BgL_xz00_47))
												{	/* Ieee/number.scm 517 */
													return BXZERO(BgL_xz00_47);
												}
											else
												{	/* Ieee/number.scm 517 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string2539z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_47));
												}
										}
								}
						}
				}
		}
	}



/* _zero? */
	obj_t BGl__za7erozf3z54zz__r4_numbers_6_5z00(obj_t BgL_envz00_4354,
		obj_t BgL_xz00_4355)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 507 */
			return BBOOL(BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_xz00_4355));
		}
	}



/* positive? */
	BGL_EXPORTED_DEF bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_48)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 525 */
			if (INTEGERP(BgL_xz00_48))
				{	/* Ieee/number.scm 527 */
					return ((long) CINT(BgL_xz00_48) > ((long) 0));
				}
			else
				{	/* Ieee/number.scm 527 */
					if (REALP(BgL_xz00_48))
						{	/* Ieee/number.scm 529 */
							return (REAL_TO_DOUBLE(BgL_xz00_48) > ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 529 */
							if (ELONGP(BgL_xz00_48))
								{	/* Ieee/number.scm 532 */
									long BgL_n1z00_2621;

									BgL_n1z00_2621 = BELONG_TO_LONG(BgL_xz00_48);
									return (BgL_n1z00_2621 > ((long) 0));
								}
							else
								{	/* Ieee/number.scm 531 */
									if (LLONGP(BgL_xz00_48))
										{	/* Ieee/number.scm 533 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_48) > ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 533 */
											if (BIGNUMP(BgL_xz00_48))
												{	/* Ieee/number.scm 535 */
													return BXPOSITIVE(BgL_xz00_48);
												}
											else
												{	/* Ieee/number.scm 535 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string2540z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_48));
												}
										}
								}
						}
				}
		}
	}



/* _positive? */
	obj_t BGl__positivezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4356,
		obj_t BgL_xz00_4357)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 525 */
			return BBOOL(BGl_positivezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4357));
		}
	}



/* negative? */
	BGL_EXPORTED_DEF bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_49)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 543 */
			if (INTEGERP(BgL_xz00_49))
				{	/* Ieee/number.scm 545 */
					return ((long) CINT(BgL_xz00_49) < ((long) 0));
				}
			else
				{	/* Ieee/number.scm 545 */
					if (REALP(BgL_xz00_49))
						{	/* Ieee/number.scm 547 */
							return (REAL_TO_DOUBLE(BgL_xz00_49) < ((double) 0.0));
						}
					else
						{	/* Ieee/number.scm 547 */
							if (ELONGP(BgL_xz00_49))
								{	/* Ieee/number.scm 550 */
									long BgL_n1z00_2637;

									BgL_n1z00_2637 = BELONG_TO_LONG(BgL_xz00_49);
									return (BgL_n1z00_2637 < ((long) 0));
								}
							else
								{	/* Ieee/number.scm 549 */
									if (LLONGP(BgL_xz00_49))
										{	/* Ieee/number.scm 551 */
											return
												(BLLONG_TO_LLONG(BgL_xz00_49) < ((BGL_LONGLONG_T) 0));
										}
									else
										{	/* Ieee/number.scm 551 */
											if (BIGNUMP(BgL_xz00_49))
												{	/* Ieee/number.scm 553 */
													return BXNEGATIVE(BgL_xz00_49);
												}
											else
												{	/* Ieee/number.scm 553 */
													return
														CBOOL(BGl_errorz00zz__errorz00
														(BGl_string2541z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_49));
												}
										}
								}
						}
				}
		}
	}



/* _negative? */
	obj_t BGl__negativezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4358,
		obj_t BgL_xz00_4359)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 543 */
			return BBOOL(BGl_negativezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4359));
		}
	}



/* 2max */
	BGL_EXPORTED_DEF obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_60,
		obj_t BgL_yz00_61)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 575 */
			if (INTEGERP(BgL_xz00_60))
				{	/* Ieee/number.scm 576 */
					if (INTEGERP(BgL_yz00_61))
						{	/* Ieee/number.scm 576 */
							obj_t BgL_xz00_2666;

							obj_t BgL_yz00_2667;

							BgL_xz00_2666 = BgL_xz00_60;
							BgL_yz00_2667 = BgL_yz00_61;
							if (((long) CINT(BgL_xz00_2666) > (long) CINT(BgL_yz00_2667)))
								{	/* Ieee/number.scm 576 */
									return BgL_xz00_2666;
								}
							else
								{	/* Ieee/number.scm 576 */
									return BgL_yz00_2667;
								}
						}
					else
						{	/* Ieee/number.scm 576 */
							if (REALP(BgL_yz00_61))
								{	/* Ieee/number.scm 576 */
									double BgL_xz00_2672;

									obj_t BgL_yz00_2673;

									BgL_xz00_2672 = (double) ((long) CINT(BgL_xz00_60));
									BgL_yz00_2673 = BgL_yz00_61;
									if ((BgL_xz00_2672 > REAL_TO_DOUBLE(BgL_yz00_2673)))
										{	/* Ieee/number.scm 576 */
											return DOUBLE_TO_REAL(BgL_xz00_2672);
										}
									else
										{	/* Ieee/number.scm 576 */
											return BgL_yz00_2673;
										}
								}
							else
								{	/* Ieee/number.scm 576 */
									if (ELONGP(BgL_yz00_61))
										{	/* Ieee/number.scm 576 */
											long BgL_arg1548z00_856;

											{	/* Ieee/number.scm 576 */
												long BgL_auxz00_5799;

												BgL_auxz00_5799 = (long) CINT(BgL_xz00_60);
												BgL_arg1548z00_856 = LONG_TO_ELONG(BgL_auxz00_5799);
											}
											{	/* Ieee/number.scm 576 */
												obj_t BgL_yz00_2680;

												BgL_yz00_2680 = BgL_yz00_61;
												{	/* Ieee/number.scm 576 */
													bool_t BgL_testz00_5802;

													{	/* Ieee/number.scm 576 */
														long BgL_n2z00_2683;

														BgL_n2z00_2683 = BELONG_TO_LONG(BgL_yz00_2680);
														BgL_testz00_5802 =
															(BgL_arg1548z00_856 > BgL_n2z00_2683);
													}
													if (BgL_testz00_5802)
														{	/* Ieee/number.scm 576 */
															return make_belong(BgL_arg1548z00_856);
														}
													else
														{	/* Ieee/number.scm 576 */
															return BgL_yz00_2680;
														}
												}
											}
										}
									else
										{	/* Ieee/number.scm 576 */
											if (LLONGP(BgL_yz00_61))
												{	/* Ieee/number.scm 576 */
													BGL_LONGLONG_T BgL_arg1551z00_858;

													{	/* Ieee/number.scm 576 */
														long BgL_auxz00_5808;

														BgL_auxz00_5808 = (long) CINT(BgL_xz00_60);
														BgL_arg1551z00_858 = LONG_TO_LLONG(BgL_auxz00_5808);
													}
													{	/* Ieee/number.scm 576 */
														obj_t BgL_yz00_2687;

														BgL_yz00_2687 = BgL_yz00_61;
														if (
															(BgL_arg1551z00_858 >
																BLLONG_TO_LLONG(BgL_yz00_2687)))
															{	/* Ieee/number.scm 576 */
																return make_bllong(BgL_arg1551z00_858);
															}
														else
															{	/* Ieee/number.scm 576 */
																return BgL_yz00_2687;
															}
													}
												}
											else
												{	/* Ieee/number.scm 576 */
													if (BIGNUMP(BgL_yz00_61))
														{	/* Ieee/number.scm 576 */
															obj_t BgL_xz00_2693;

															obj_t BgL_yz00_2694;

															BgL_xz00_2693 =
																bgl_long_to_bignum((long) CINT(BgL_xz00_60));
															BgL_yz00_2694 = BgL_yz00_61;
															if (
																((long) (bgl_bignum_cmp(BgL_xz00_2693,
																			BgL_yz00_2694)) > ((long) 0)))
																{	/* Ieee/number.scm 576 */
																	return BgL_xz00_2693;
																}
															else
																{	/* Ieee/number.scm 576 */
																	return BgL_yz00_2694;
																}
														}
													else
														{	/* Ieee/number.scm 576 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2542z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_61);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 576 */
					if (REALP(BgL_xz00_60))
						{	/* Ieee/number.scm 576 */
							if (REALP(BgL_yz00_61))
								{	/* Ieee/number.scm 576 */
									obj_t BgL_xz00_2705;

									obj_t BgL_yz00_2706;

									BgL_xz00_2705 = BgL_xz00_60;
									BgL_yz00_2706 = BgL_yz00_61;
									if (
										(REAL_TO_DOUBLE(BgL_xz00_2705) >
											REAL_TO_DOUBLE(BgL_yz00_2706)))
										{	/* Ieee/number.scm 576 */
											return BgL_xz00_2705;
										}
									else
										{	/* Ieee/number.scm 576 */
											return BgL_yz00_2706;
										}
								}
							else
								{	/* Ieee/number.scm 576 */
									if (INTEGERP(BgL_yz00_61))
										{	/* Ieee/number.scm 576 */
											obj_t BgL_xz00_2711;

											double BgL_yz00_2712;

											BgL_xz00_2711 = BgL_xz00_60;
											BgL_yz00_2712 = (double) ((long) CINT(BgL_yz00_61));
											if ((REAL_TO_DOUBLE(BgL_xz00_2711) > BgL_yz00_2712))
												{	/* Ieee/number.scm 576 */
													return BgL_xz00_2711;
												}
											else
												{	/* Ieee/number.scm 576 */
													return DOUBLE_TO_REAL(BgL_yz00_2712);
												}
										}
									else
										{	/* Ieee/number.scm 576 */
											if (ELONGP(BgL_yz00_61))
												{	/* Ieee/number.scm 576 */
													obj_t BgL_xz00_2717;

													double BgL_yz00_2718;

													BgL_xz00_2717 = BgL_xz00_60;
													BgL_yz00_2718 =
														(double) (BELONG_TO_LONG(BgL_yz00_61));
													if ((REAL_TO_DOUBLE(BgL_xz00_2717) > BgL_yz00_2718))
														{	/* Ieee/number.scm 576 */
															return BgL_xz00_2717;
														}
													else
														{	/* Ieee/number.scm 576 */
															return DOUBLE_TO_REAL(BgL_yz00_2718);
														}
												}
											else
												{	/* Ieee/number.scm 576 */
													if (LLONGP(BgL_yz00_61))
														{	/* Ieee/number.scm 576 */
															obj_t BgL_xz00_2723;

															double BgL_yz00_2724;

															BgL_xz00_2723 = BgL_xz00_60;
															BgL_yz00_2724 =
																(double) (BLLONG_TO_LLONG(BgL_yz00_61));
															if (
																(REAL_TO_DOUBLE(BgL_xz00_2723) > BgL_yz00_2724))
																{	/* Ieee/number.scm 576 */
																	return BgL_xz00_2723;
																}
															else
																{	/* Ieee/number.scm 576 */
																	return DOUBLE_TO_REAL(BgL_yz00_2724);
																}
														}
													else
														{	/* Ieee/number.scm 576 */
															if (BIGNUMP(BgL_yz00_61))
																{	/* Ieee/number.scm 576 */
																	obj_t BgL_xz00_2730;

																	double BgL_yz00_2731;

																	BgL_xz00_2730 = BgL_xz00_60;
																	BgL_yz00_2731 =
																		bgl_bignum_to_flonum(BgL_yz00_61);
																	if (
																		(REAL_TO_DOUBLE(BgL_xz00_2730) >
																			BgL_yz00_2731))
																		{	/* Ieee/number.scm 576 */
																			return BgL_xz00_2730;
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			return DOUBLE_TO_REAL(BgL_yz00_2731);
																		}
																}
															else
																{	/* Ieee/number.scm 576 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2542z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_61);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 576 */
							if (ELONGP(BgL_xz00_60))
								{	/* Ieee/number.scm 576 */
									if (INTEGERP(BgL_yz00_61))
										{	/* Ieee/number.scm 576 */
											long BgL_arg1567z00_873;

											{	/* Ieee/number.scm 576 */
												long BgL_auxz00_5868;

												BgL_auxz00_5868 = (long) CINT(BgL_yz00_61);
												BgL_arg1567z00_873 = LONG_TO_ELONG(BgL_auxz00_5868);
											}
											{	/* Ieee/number.scm 576 */
												obj_t BgL_xz00_2738;

												BgL_xz00_2738 = BgL_xz00_60;
												{	/* Ieee/number.scm 576 */
													bool_t BgL_testz00_5871;

													{	/* Ieee/number.scm 576 */
														long BgL_n1z00_2741;

														BgL_n1z00_2741 = BELONG_TO_LONG(BgL_xz00_2738);
														BgL_testz00_5871 =
															(BgL_n1z00_2741 > BgL_arg1567z00_873);
													}
													if (BgL_testz00_5871)
														{	/* Ieee/number.scm 576 */
															return BgL_xz00_2738;
														}
													else
														{	/* Ieee/number.scm 576 */
															return make_belong(BgL_arg1567z00_873);
														}
												}
											}
										}
									else
										{	/* Ieee/number.scm 576 */
											if (REALP(BgL_yz00_61))
												{	/* Ieee/number.scm 576 */
													double BgL_xz00_2744;

													obj_t BgL_yz00_2745;

													BgL_xz00_2744 =
														(double) (BELONG_TO_LONG(BgL_xz00_60));
													BgL_yz00_2745 = BgL_yz00_61;
													if ((BgL_xz00_2744 > REAL_TO_DOUBLE(BgL_yz00_2745)))
														{	/* Ieee/number.scm 576 */
															return DOUBLE_TO_REAL(BgL_xz00_2744);
														}
													else
														{	/* Ieee/number.scm 576 */
															return BgL_yz00_2745;
														}
												}
											else
												{	/* Ieee/number.scm 576 */
													if (ELONGP(BgL_yz00_61))
														{	/* Ieee/number.scm 576 */
															obj_t BgL_xz00_2750;

															obj_t BgL_yz00_2751;

															BgL_xz00_2750 = BgL_xz00_60;
															BgL_yz00_2751 = BgL_yz00_61;
															{	/* Ieee/number.scm 576 */
																bool_t BgL_testz00_5885;

																{	/* Ieee/number.scm 576 */
																	long BgL_n1z00_2753;

																	long BgL_n2z00_2754;

																	BgL_n1z00_2753 =
																		BELONG_TO_LONG(BgL_xz00_2750);
																	BgL_n2z00_2754 =
																		BELONG_TO_LONG(BgL_yz00_2751);
																	BgL_testz00_5885 =
																		(BgL_n1z00_2753 > BgL_n2z00_2754);
																}
																if (BgL_testz00_5885)
																	{	/* Ieee/number.scm 576 */
																		return BgL_xz00_2750;
																	}
																else
																	{	/* Ieee/number.scm 576 */
																		return BgL_yz00_2751;
																	}
															}
														}
													else
														{	/* Ieee/number.scm 576 */
															if (LLONGP(BgL_yz00_61))
																{	/* Ieee/number.scm 576 */
																	BGL_LONGLONG_T BgL_xz00_2756;

																	obj_t BgL_yz00_2757;

																	BgL_xz00_2756 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_xz00_60));
																	BgL_yz00_2757 = BgL_yz00_61;
																	if (
																		(BgL_xz00_2756 >
																			BLLONG_TO_LLONG(BgL_yz00_2757)))
																		{	/* Ieee/number.scm 576 */
																			return make_bllong(BgL_xz00_2756);
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			return BgL_yz00_2757;
																		}
																}
															else
																{	/* Ieee/number.scm 576 */
																	if (BIGNUMP(BgL_yz00_61))
																		{	/* Ieee/number.scm 576 */
																			obj_t BgL_xz00_2763;

																			obj_t BgL_yz00_2764;

																			{	/* Ieee/number.scm 576 */
																				long BgL_xz00_2762;

																				BgL_xz00_2762 =
																					BELONG_TO_LONG(BgL_xz00_60);
																				BgL_xz00_2763 =
																					bgl_long_to_bignum(BgL_xz00_2762);
																			}
																			BgL_yz00_2764 = BgL_yz00_61;
																			if (
																				((long) (bgl_bignum_cmp(BgL_xz00_2763,
																							BgL_yz00_2764)) > ((long) 0)))
																				{	/* Ieee/number.scm 576 */
																					return BgL_xz00_2763;
																				}
																			else
																				{	/* Ieee/number.scm 576 */
																					return BgL_yz00_2764;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2542z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_61);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 576 */
									if (LLONGP(BgL_xz00_60))
										{	/* Ieee/number.scm 576 */
											if (INTEGERP(BgL_yz00_61))
												{	/* Ieee/number.scm 576 */
													BGL_LONGLONG_T BgL_arg1580z00_883;

													{	/* Ieee/number.scm 576 */
														long BgL_auxz00_5910;

														BgL_auxz00_5910 = (long) CINT(BgL_yz00_61);
														BgL_arg1580z00_883 = LONG_TO_LLONG(BgL_auxz00_5910);
													}
													{	/* Ieee/number.scm 576 */
														obj_t BgL_xz00_2776;

														BgL_xz00_2776 = BgL_xz00_60;
														if (
															(BLLONG_TO_LLONG(BgL_xz00_2776) >
																BgL_arg1580z00_883))
															{	/* Ieee/number.scm 576 */
																return BgL_xz00_2776;
															}
														else
															{	/* Ieee/number.scm 576 */
																return make_bllong(BgL_arg1580z00_883);
															}
													}
												}
											else
												{	/* Ieee/number.scm 576 */
													if (REALP(BgL_yz00_61))
														{	/* Ieee/number.scm 576 */
															double BgL_xz00_2782;

															obj_t BgL_yz00_2783;

															BgL_xz00_2782 =
																(double) (BLLONG_TO_LLONG(BgL_xz00_60));
															BgL_yz00_2783 = BgL_yz00_61;
															if (
																(BgL_xz00_2782 > REAL_TO_DOUBLE(BgL_yz00_2783)))
																{	/* Ieee/number.scm 576 */
																	return DOUBLE_TO_REAL(BgL_xz00_2782);
																}
															else
																{	/* Ieee/number.scm 576 */
																	return BgL_yz00_2783;
																}
														}
													else
														{	/* Ieee/number.scm 576 */
															if (ELONGP(BgL_yz00_61))
																{	/* Ieee/number.scm 576 */
																	obj_t BgL_xz00_2788;

																	BGL_LONGLONG_T BgL_yz00_2789;

																	BgL_xz00_2788 = BgL_xz00_60;
																	BgL_yz00_2789 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_yz00_61));
																	if ((BLLONG_TO_LLONG(BgL_xz00_2788) >
																			BgL_yz00_2789))
																		{	/* Ieee/number.scm 576 */
																			return BgL_xz00_2788;
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			return make_bllong(BgL_yz00_2789);
																		}
																}
															else
																{	/* Ieee/number.scm 576 */
																	if (LLONGP(BgL_yz00_61))
																		{	/* Ieee/number.scm 576 */
																			obj_t BgL_xz00_2794;

																			obj_t BgL_yz00_2795;

																			BgL_xz00_2794 = BgL_xz00_60;
																			BgL_yz00_2795 = BgL_yz00_61;
																			if (
																				(BLLONG_TO_LLONG(BgL_xz00_2794) >
																					BLLONG_TO_LLONG(BgL_yz00_2795)))
																				{	/* Ieee/number.scm 576 */
																					return BgL_xz00_2794;
																				}
																			else
																				{	/* Ieee/number.scm 576 */
																					return BgL_yz00_2795;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			if (BIGNUMP(BgL_yz00_61))
																				{	/* Ieee/number.scm 576 */
																					obj_t BgL_xz00_2801;

																					obj_t BgL_yz00_2802;

																					BgL_xz00_2801 =
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																						(BgL_xz00_60));
																					BgL_yz00_2802 = BgL_yz00_61;
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_xz00_2801,
																									BgL_yz00_2802)) > ((long) 0)))
																						{	/* Ieee/number.scm 576 */
																							return BgL_xz00_2801;
																						}
																					else
																						{	/* Ieee/number.scm 576 */
																							return BgL_yz00_2802;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 576 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2542z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_61);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 576 */
											if (BIGNUMP(BgL_xz00_60))
												{	/* Ieee/number.scm 576 */
													if (BIGNUMP(BgL_yz00_61))
														{	/* Ieee/number.scm 576 */
															obj_t BgL_xz00_2813;

															obj_t BgL_yz00_2814;

															BgL_xz00_2813 = BgL_xz00_60;
															BgL_yz00_2814 = BgL_yz00_61;
															if (
																((long) (bgl_bignum_cmp(BgL_xz00_2813,
																			BgL_yz00_2814)) > ((long) 0)))
																{	/* Ieee/number.scm 576 */
																	return BgL_xz00_2813;
																}
															else
																{	/* Ieee/number.scm 576 */
																	return BgL_yz00_2814;
																}
														}
													else
														{	/* Ieee/number.scm 576 */
															if (INTEGERP(BgL_yz00_61))
																{	/* Ieee/number.scm 576 */
																	obj_t BgL_xz00_2825;

																	obj_t BgL_yz00_2826;

																	BgL_xz00_2825 = BgL_xz00_60;
																	BgL_yz00_2826 =
																		bgl_long_to_bignum(
																		(long) CINT(BgL_yz00_61));
																	if (
																		((long) (bgl_bignum_cmp(BgL_xz00_2825,
																					BgL_yz00_2826)) > ((long) 0)))
																		{	/* Ieee/number.scm 576 */
																			return BgL_xz00_2825;
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			return BgL_yz00_2826;
																		}
																}
															else
																{	/* Ieee/number.scm 576 */
																	if (REALP(BgL_yz00_61))
																		{	/* Ieee/number.scm 576 */
																			double BgL_xz00_2837;

																			obj_t BgL_yz00_2838;

																			BgL_xz00_2837 =
																				bgl_bignum_to_flonum(BgL_xz00_60);
																			BgL_yz00_2838 = BgL_yz00_61;
																			if (
																				(BgL_xz00_2837 >
																					REAL_TO_DOUBLE(BgL_yz00_2838)))
																				{	/* Ieee/number.scm 576 */
																					return DOUBLE_TO_REAL(BgL_xz00_2837);
																				}
																			else
																				{	/* Ieee/number.scm 576 */
																					return BgL_yz00_2838;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 576 */
																			if (ELONGP(BgL_yz00_61))
																				{	/* Ieee/number.scm 576 */
																					obj_t BgL_xz00_2844;

																					obj_t BgL_yz00_2845;

																					BgL_xz00_2844 = BgL_xz00_60;
																					{	/* Ieee/number.scm 576 */
																						long BgL_xz00_2843;

																						BgL_xz00_2843 =
																							BELONG_TO_LONG(BgL_yz00_61);
																						BgL_yz00_2845 =
																							bgl_long_to_bignum(BgL_xz00_2843);
																					}
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_xz00_2844,
																									BgL_yz00_2845)) > ((long) 0)))
																						{	/* Ieee/number.scm 576 */
																							return BgL_xz00_2844;
																						}
																					else
																						{	/* Ieee/number.scm 576 */
																							return BgL_yz00_2845;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 576 */
																					if (LLONGP(BgL_yz00_61))
																						{	/* Ieee/number.scm 576 */
																							obj_t BgL_xz00_2856;

																							obj_t BgL_yz00_2857;

																							BgL_xz00_2856 = BgL_xz00_60;
																							BgL_yz00_2857 =
																								bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_yz00_61));
																							if (((long) (bgl_bignum_cmp
																										(BgL_xz00_2856,
																											BgL_yz00_2857)) >
																									((long) 0)))
																								{	/* Ieee/number.scm 576 */
																									return BgL_xz00_2856;
																								}
																							else
																								{	/* Ieee/number.scm 576 */
																									return BgL_yz00_2857;
																								}
																						}
																					else
																						{	/* Ieee/number.scm 576 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2542z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_61);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 576 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2542z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_60);
												}
										}
								}
						}
				}
		}
	}



/* _2max */
	obj_t BGl__2maxz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4360,
		obj_t BgL_xz00_4361, obj_t BgL_yz00_4362)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 575 */
			return BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_4361, BgL_yz00_4362);
		}
	}



/* max */
	BGL_EXPORTED_DEF obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_62,
		obj_t BgL_yz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 581 */
			{
				obj_t BgL_xz00_2874;

				obj_t BgL_yz00_2875;

				BgL_xz00_2874 = BgL_xz00_62;
				BgL_yz00_2875 = BgL_yz00_63;
			BgL_loopz00_2873:
				if (PAIRP(BgL_yz00_2875))
					{
						obj_t BgL_yz00_5995;

						obj_t BgL_xz00_5992;

						BgL_xz00_5992 =
							BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_2874,
							CAR(BgL_yz00_2875));
						BgL_yz00_5995 = CDR(BgL_yz00_2875);
						BgL_yz00_2875 = BgL_yz00_5995;
						BgL_xz00_2874 = BgL_xz00_5992;
						goto BgL_loopz00_2873;
					}
				else
					{	/* Ieee/number.scm 584 */
						return BgL_xz00_2874;
					}
			}
		}
	}



/* _max */
	obj_t BGl__maxz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4363,
		obj_t BgL_xz00_4364, obj_t BgL_yz00_4365)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 581 */
			return BGl_maxz00zz__r4_numbers_6_5z00(BgL_xz00_4364, BgL_yz00_4365);
		}
	}



/* 2min */
	BGL_EXPORTED_DEF obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_74,
		obj_t BgL_yz00_75)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 605 */
			if (INTEGERP(BgL_xz00_74))
				{	/* Ieee/number.scm 606 */
					if (INTEGERP(BgL_yz00_75))
						{	/* Ieee/number.scm 606 */
							obj_t BgL_xz00_2925;

							obj_t BgL_yz00_2926;

							BgL_xz00_2925 = BgL_xz00_74;
							BgL_yz00_2926 = BgL_yz00_75;
							if (((long) CINT(BgL_xz00_2925) > (long) CINT(BgL_yz00_2926)))
								{	/* Ieee/number.scm 606 */
									return BgL_yz00_2926;
								}
							else
								{	/* Ieee/number.scm 606 */
									return BgL_xz00_2925;
								}
						}
					else
						{	/* Ieee/number.scm 606 */
							if (REALP(BgL_yz00_75))
								{	/* Ieee/number.scm 606 */
									double BgL_xz00_2931;

									obj_t BgL_yz00_2932;

									BgL_xz00_2931 = (double) ((long) CINT(BgL_xz00_74));
									BgL_yz00_2932 = BgL_yz00_75;
									if ((BgL_xz00_2931 > REAL_TO_DOUBLE(BgL_yz00_2932)))
										{	/* Ieee/number.scm 606 */
											return BgL_yz00_2932;
										}
									else
										{	/* Ieee/number.scm 606 */
											return DOUBLE_TO_REAL(BgL_xz00_2931);
										}
								}
							else
								{	/* Ieee/number.scm 606 */
									if (ELONGP(BgL_yz00_75))
										{	/* Ieee/number.scm 606 */
											long BgL_arg1615z00_920;

											{	/* Ieee/number.scm 606 */
												long BgL_auxz00_6016;

												BgL_auxz00_6016 = (long) CINT(BgL_xz00_74);
												BgL_arg1615z00_920 = LONG_TO_ELONG(BgL_auxz00_6016);
											}
											{	/* Ieee/number.scm 606 */
												obj_t BgL_yz00_2939;

												BgL_yz00_2939 = BgL_yz00_75;
												{	/* Ieee/number.scm 606 */
													bool_t BgL_testz00_6019;

													{	/* Ieee/number.scm 606 */
														long BgL_n2z00_2942;

														BgL_n2z00_2942 = BELONG_TO_LONG(BgL_yz00_2939);
														BgL_testz00_6019 =
															(BgL_arg1615z00_920 > BgL_n2z00_2942);
													}
													if (BgL_testz00_6019)
														{	/* Ieee/number.scm 606 */
															return BgL_yz00_2939;
														}
													else
														{	/* Ieee/number.scm 606 */
															return make_belong(BgL_arg1615z00_920);
														}
												}
											}
										}
									else
										{	/* Ieee/number.scm 606 */
											if (LLONGP(BgL_yz00_75))
												{	/* Ieee/number.scm 606 */
													BGL_LONGLONG_T BgL_arg1618z00_922;

													{	/* Ieee/number.scm 606 */
														long BgL_auxz00_6025;

														BgL_auxz00_6025 = (long) CINT(BgL_xz00_74);
														BgL_arg1618z00_922 = LONG_TO_LLONG(BgL_auxz00_6025);
													}
													{	/* Ieee/number.scm 606 */
														obj_t BgL_yz00_2946;

														BgL_yz00_2946 = BgL_yz00_75;
														if (
															(BgL_arg1618z00_922 >
																BLLONG_TO_LLONG(BgL_yz00_2946)))
															{	/* Ieee/number.scm 606 */
																return BgL_yz00_2946;
															}
														else
															{	/* Ieee/number.scm 606 */
																return make_bllong(BgL_arg1618z00_922);
															}
													}
												}
											else
												{	/* Ieee/number.scm 606 */
													if (BIGNUMP(BgL_yz00_75))
														{	/* Ieee/number.scm 606 */
															obj_t BgL_xz00_2952;

															obj_t BgL_yz00_2953;

															BgL_xz00_2952 =
																bgl_long_to_bignum((long) CINT(BgL_xz00_74));
															BgL_yz00_2953 = BgL_yz00_75;
															if (
																((long) (bgl_bignum_cmp(BgL_xz00_2952,
																			BgL_yz00_2953)) > ((long) 0)))
																{	/* Ieee/number.scm 606 */
																	return BgL_yz00_2953;
																}
															else
																{	/* Ieee/number.scm 606 */
																	return BgL_xz00_2952;
																}
														}
													else
														{	/* Ieee/number.scm 606 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2544z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_75);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 606 */
					if (REALP(BgL_xz00_74))
						{	/* Ieee/number.scm 606 */
							if (REALP(BgL_yz00_75))
								{	/* Ieee/number.scm 606 */
									obj_t BgL_xz00_2964;

									obj_t BgL_yz00_2965;

									BgL_xz00_2964 = BgL_xz00_74;
									BgL_yz00_2965 = BgL_yz00_75;
									if (
										(REAL_TO_DOUBLE(BgL_xz00_2964) >
											REAL_TO_DOUBLE(BgL_yz00_2965)))
										{	/* Ieee/number.scm 606 */
											return BgL_yz00_2965;
										}
									else
										{	/* Ieee/number.scm 606 */
											return BgL_xz00_2964;
										}
								}
							else
								{	/* Ieee/number.scm 606 */
									if (INTEGERP(BgL_yz00_75))
										{	/* Ieee/number.scm 606 */
											obj_t BgL_xz00_2970;

											double BgL_yz00_2971;

											BgL_xz00_2970 = BgL_xz00_74;
											BgL_yz00_2971 = (double) ((long) CINT(BgL_yz00_75));
											if ((REAL_TO_DOUBLE(BgL_xz00_2970) > BgL_yz00_2971))
												{	/* Ieee/number.scm 606 */
													return DOUBLE_TO_REAL(BgL_yz00_2971);
												}
											else
												{	/* Ieee/number.scm 606 */
													return BgL_xz00_2970;
												}
										}
									else
										{	/* Ieee/number.scm 606 */
											if (ELONGP(BgL_yz00_75))
												{	/* Ieee/number.scm 606 */
													obj_t BgL_xz00_2976;

													double BgL_yz00_2977;

													BgL_xz00_2976 = BgL_xz00_74;
													BgL_yz00_2977 =
														(double) (BELONG_TO_LONG(BgL_yz00_75));
													if ((REAL_TO_DOUBLE(BgL_xz00_2976) > BgL_yz00_2977))
														{	/* Ieee/number.scm 606 */
															return DOUBLE_TO_REAL(BgL_yz00_2977);
														}
													else
														{	/* Ieee/number.scm 606 */
															return BgL_xz00_2976;
														}
												}
											else
												{	/* Ieee/number.scm 606 */
													if (LLONGP(BgL_yz00_75))
														{	/* Ieee/number.scm 606 */
															obj_t BgL_xz00_2982;

															double BgL_yz00_2983;

															BgL_xz00_2982 = BgL_xz00_74;
															BgL_yz00_2983 =
																(double) (BLLONG_TO_LLONG(BgL_yz00_75));
															if (
																(REAL_TO_DOUBLE(BgL_xz00_2982) > BgL_yz00_2983))
																{	/* Ieee/number.scm 606 */
																	return DOUBLE_TO_REAL(BgL_yz00_2983);
																}
															else
																{	/* Ieee/number.scm 606 */
																	return BgL_xz00_2982;
																}
														}
													else
														{	/* Ieee/number.scm 606 */
															if (BIGNUMP(BgL_yz00_75))
																{	/* Ieee/number.scm 606 */
																	obj_t BgL_xz00_2989;

																	double BgL_yz00_2990;

																	BgL_xz00_2989 = BgL_xz00_74;
																	BgL_yz00_2990 =
																		bgl_bignum_to_flonum(BgL_yz00_75);
																	if (
																		(REAL_TO_DOUBLE(BgL_xz00_2989) >
																			BgL_yz00_2990))
																		{	/* Ieee/number.scm 606 */
																			return DOUBLE_TO_REAL(BgL_yz00_2990);
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			return BgL_xz00_2989;
																		}
																}
															else
																{	/* Ieee/number.scm 606 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2544z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_75);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 606 */
							if (ELONGP(BgL_xz00_74))
								{	/* Ieee/number.scm 606 */
									if (INTEGERP(BgL_yz00_75))
										{	/* Ieee/number.scm 606 */
											long BgL_arg1635z00_937;

											{	/* Ieee/number.scm 606 */
												long BgL_auxz00_6085;

												BgL_auxz00_6085 = (long) CINT(BgL_yz00_75);
												BgL_arg1635z00_937 = LONG_TO_ELONG(BgL_auxz00_6085);
											}
											{	/* Ieee/number.scm 606 */
												obj_t BgL_xz00_2997;

												BgL_xz00_2997 = BgL_xz00_74;
												{	/* Ieee/number.scm 606 */
													bool_t BgL_testz00_6088;

													{	/* Ieee/number.scm 606 */
														long BgL_n1z00_3000;

														BgL_n1z00_3000 = BELONG_TO_LONG(BgL_xz00_2997);
														BgL_testz00_6088 =
															(BgL_n1z00_3000 > BgL_arg1635z00_937);
													}
													if (BgL_testz00_6088)
														{	/* Ieee/number.scm 606 */
															return make_belong(BgL_arg1635z00_937);
														}
													else
														{	/* Ieee/number.scm 606 */
															return BgL_xz00_2997;
														}
												}
											}
										}
									else
										{	/* Ieee/number.scm 606 */
											if (REALP(BgL_yz00_75))
												{	/* Ieee/number.scm 606 */
													double BgL_xz00_3003;

													obj_t BgL_yz00_3004;

													BgL_xz00_3003 =
														(double) (BELONG_TO_LONG(BgL_xz00_74));
													BgL_yz00_3004 = BgL_yz00_75;
													if ((BgL_xz00_3003 > REAL_TO_DOUBLE(BgL_yz00_3004)))
														{	/* Ieee/number.scm 606 */
															return BgL_yz00_3004;
														}
													else
														{	/* Ieee/number.scm 606 */
															return DOUBLE_TO_REAL(BgL_xz00_3003);
														}
												}
											else
												{	/* Ieee/number.scm 606 */
													if (ELONGP(BgL_yz00_75))
														{	/* Ieee/number.scm 606 */
															obj_t BgL_xz00_3009;

															obj_t BgL_yz00_3010;

															BgL_xz00_3009 = BgL_xz00_74;
															BgL_yz00_3010 = BgL_yz00_75;
															{	/* Ieee/number.scm 606 */
																bool_t BgL_testz00_6102;

																{	/* Ieee/number.scm 606 */
																	long BgL_n1z00_3012;

																	long BgL_n2z00_3013;

																	BgL_n1z00_3012 =
																		BELONG_TO_LONG(BgL_xz00_3009);
																	BgL_n2z00_3013 =
																		BELONG_TO_LONG(BgL_yz00_3010);
																	BgL_testz00_6102 =
																		(BgL_n1z00_3012 > BgL_n2z00_3013);
																}
																if (BgL_testz00_6102)
																	{	/* Ieee/number.scm 606 */
																		return BgL_yz00_3010;
																	}
																else
																	{	/* Ieee/number.scm 606 */
																		return BgL_xz00_3009;
																	}
															}
														}
													else
														{	/* Ieee/number.scm 606 */
															if (LLONGP(BgL_yz00_75))
																{	/* Ieee/number.scm 606 */
																	BGL_LONGLONG_T BgL_xz00_3015;

																	obj_t BgL_yz00_3016;

																	BgL_xz00_3015 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_xz00_74));
																	BgL_yz00_3016 = BgL_yz00_75;
																	if (
																		(BgL_xz00_3015 >
																			BLLONG_TO_LLONG(BgL_yz00_3016)))
																		{	/* Ieee/number.scm 606 */
																			return BgL_yz00_3016;
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			return make_bllong(BgL_xz00_3015);
																		}
																}
															else
																{	/* Ieee/number.scm 606 */
																	if (BIGNUMP(BgL_yz00_75))
																		{	/* Ieee/number.scm 606 */
																			obj_t BgL_xz00_3022;

																			obj_t BgL_yz00_3023;

																			{	/* Ieee/number.scm 606 */
																				long BgL_xz00_3021;

																				BgL_xz00_3021 =
																					BELONG_TO_LONG(BgL_xz00_74);
																				BgL_xz00_3022 =
																					bgl_long_to_bignum(BgL_xz00_3021);
																			}
																			BgL_yz00_3023 = BgL_yz00_75;
																			if (
																				((long) (bgl_bignum_cmp(BgL_xz00_3022,
																							BgL_yz00_3023)) > ((long) 0)))
																				{	/* Ieee/number.scm 606 */
																					return BgL_yz00_3023;
																				}
																			else
																				{	/* Ieee/number.scm 606 */
																					return BgL_xz00_3022;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2544z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_75);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 606 */
									if (LLONGP(BgL_xz00_74))
										{	/* Ieee/number.scm 606 */
											if (INTEGERP(BgL_yz00_75))
												{	/* Ieee/number.scm 606 */
													BGL_LONGLONG_T BgL_arg1646z00_947;

													{	/* Ieee/number.scm 606 */
														long BgL_auxz00_6127;

														BgL_auxz00_6127 = (long) CINT(BgL_yz00_75);
														BgL_arg1646z00_947 = LONG_TO_LLONG(BgL_auxz00_6127);
													}
													{	/* Ieee/number.scm 606 */
														obj_t BgL_xz00_3035;

														BgL_xz00_3035 = BgL_xz00_74;
														if (
															(BLLONG_TO_LLONG(BgL_xz00_3035) >
																BgL_arg1646z00_947))
															{	/* Ieee/number.scm 606 */
																return make_bllong(BgL_arg1646z00_947);
															}
														else
															{	/* Ieee/number.scm 606 */
																return BgL_xz00_3035;
															}
													}
												}
											else
												{	/* Ieee/number.scm 606 */
													if (REALP(BgL_yz00_75))
														{	/* Ieee/number.scm 606 */
															double BgL_xz00_3041;

															obj_t BgL_yz00_3042;

															BgL_xz00_3041 =
																(double) (BLLONG_TO_LLONG(BgL_xz00_74));
															BgL_yz00_3042 = BgL_yz00_75;
															if (
																(BgL_xz00_3041 > REAL_TO_DOUBLE(BgL_yz00_3042)))
																{	/* Ieee/number.scm 606 */
																	return BgL_yz00_3042;
																}
															else
																{	/* Ieee/number.scm 606 */
																	return DOUBLE_TO_REAL(BgL_xz00_3041);
																}
														}
													else
														{	/* Ieee/number.scm 606 */
															if (ELONGP(BgL_yz00_75))
																{	/* Ieee/number.scm 606 */
																	obj_t BgL_xz00_3047;

																	BGL_LONGLONG_T BgL_yz00_3048;

																	BgL_xz00_3047 = BgL_xz00_74;
																	BgL_yz00_3048 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_yz00_75));
																	if ((BLLONG_TO_LLONG(BgL_xz00_3047) >
																			BgL_yz00_3048))
																		{	/* Ieee/number.scm 606 */
																			return make_bllong(BgL_yz00_3048);
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			return BgL_xz00_3047;
																		}
																}
															else
																{	/* Ieee/number.scm 606 */
																	if (LLONGP(BgL_yz00_75))
																		{	/* Ieee/number.scm 606 */
																			obj_t BgL_xz00_3053;

																			obj_t BgL_yz00_3054;

																			BgL_xz00_3053 = BgL_xz00_74;
																			BgL_yz00_3054 = BgL_yz00_75;
																			if (
																				(BLLONG_TO_LLONG(BgL_xz00_3053) >
																					BLLONG_TO_LLONG(BgL_yz00_3054)))
																				{	/* Ieee/number.scm 606 */
																					return BgL_yz00_3054;
																				}
																			else
																				{	/* Ieee/number.scm 606 */
																					return BgL_xz00_3053;
																				}
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			if (BIGNUMP(BgL_yz00_75))
																				{	/* Ieee/number.scm 606 */
																					obj_t BgL_xz00_3060;

																					obj_t BgL_yz00_3061;

																					BgL_xz00_3060 =
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																						(BgL_xz00_74));
																					BgL_yz00_3061 = BgL_yz00_75;
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_xz00_3060,
																									BgL_yz00_3061)) > ((long) 0)))
																						{	/* Ieee/number.scm 606 */
																							return BgL_yz00_3061;
																						}
																					else
																						{	/* Ieee/number.scm 606 */
																							return BgL_xz00_3060;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 606 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2544z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_75);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 606 */
											if (BIGNUMP(BgL_xz00_74))
												{	/* Ieee/number.scm 606 */
													if (BIGNUMP(BgL_yz00_75))
														{	/* Ieee/number.scm 606 */
															obj_t BgL_xz00_3072;

															obj_t BgL_yz00_3073;

															BgL_xz00_3072 = BgL_xz00_74;
															BgL_yz00_3073 = BgL_yz00_75;
															if (
																((long) (bgl_bignum_cmp(BgL_xz00_3072,
																			BgL_yz00_3073)) > ((long) 0)))
																{	/* Ieee/number.scm 606 */
																	return BgL_yz00_3073;
																}
															else
																{	/* Ieee/number.scm 606 */
																	return BgL_xz00_3072;
																}
														}
													else
														{	/* Ieee/number.scm 606 */
															if (INTEGERP(BgL_yz00_75))
																{	/* Ieee/number.scm 606 */
																	obj_t BgL_xz00_3084;

																	obj_t BgL_yz00_3085;

																	BgL_xz00_3084 = BgL_xz00_74;
																	BgL_yz00_3085 =
																		bgl_long_to_bignum(
																		(long) CINT(BgL_yz00_75));
																	if (
																		((long) (bgl_bignum_cmp(BgL_xz00_3084,
																					BgL_yz00_3085)) > ((long) 0)))
																		{	/* Ieee/number.scm 606 */
																			return BgL_yz00_3085;
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			return BgL_xz00_3084;
																		}
																}
															else
																{	/* Ieee/number.scm 606 */
																	if (REALP(BgL_yz00_75))
																		{	/* Ieee/number.scm 606 */
																			double BgL_xz00_3096;

																			obj_t BgL_yz00_3097;

																			BgL_xz00_3096 =
																				bgl_bignum_to_flonum(BgL_xz00_74);
																			BgL_yz00_3097 = BgL_yz00_75;
																			if (
																				(BgL_xz00_3096 >
																					REAL_TO_DOUBLE(BgL_yz00_3097)))
																				{	/* Ieee/number.scm 606 */
																					return BgL_yz00_3097;
																				}
																			else
																				{	/* Ieee/number.scm 606 */
																					return DOUBLE_TO_REAL(BgL_xz00_3096);
																				}
																		}
																	else
																		{	/* Ieee/number.scm 606 */
																			if (ELONGP(BgL_yz00_75))
																				{	/* Ieee/number.scm 606 */
																					obj_t BgL_xz00_3103;

																					obj_t BgL_yz00_3104;

																					BgL_xz00_3103 = BgL_xz00_74;
																					{	/* Ieee/number.scm 606 */
																						long BgL_xz00_3102;

																						BgL_xz00_3102 =
																							BELONG_TO_LONG(BgL_yz00_75);
																						BgL_yz00_3104 =
																							bgl_long_to_bignum(BgL_xz00_3102);
																					}
																					if (
																						((long) (bgl_bignum_cmp
																								(BgL_xz00_3103,
																									BgL_yz00_3104)) > ((long) 0)))
																						{	/* Ieee/number.scm 606 */
																							return BgL_yz00_3104;
																						}
																					else
																						{	/* Ieee/number.scm 606 */
																							return BgL_xz00_3103;
																						}
																				}
																			else
																				{	/* Ieee/number.scm 606 */
																					if (LLONGP(BgL_yz00_75))
																						{	/* Ieee/number.scm 606 */
																							obj_t BgL_xz00_3115;

																							obj_t BgL_yz00_3116;

																							BgL_xz00_3115 = BgL_xz00_74;
																							BgL_yz00_3116 =
																								bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_yz00_75));
																							if (((long) (bgl_bignum_cmp
																										(BgL_xz00_3115,
																											BgL_yz00_3116)) >
																									((long) 0)))
																								{	/* Ieee/number.scm 606 */
																									return BgL_yz00_3116;
																								}
																							else
																								{	/* Ieee/number.scm 606 */
																									return BgL_xz00_3115;
																								}
																						}
																					else
																						{	/* Ieee/number.scm 606 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2544z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_75);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 606 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2544z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_74);
												}
										}
								}
						}
				}
		}
	}



/* _2min */
	obj_t BGl__2minz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4366,
		obj_t BgL_xz00_4367, obj_t BgL_yz00_4368)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 605 */
			return BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_4367, BgL_yz00_4368);
		}
	}



/* min */
	BGL_EXPORTED_DEF obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_76,
		obj_t BgL_yz00_77)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 611 */
			{
				obj_t BgL_xz00_3133;

				obj_t BgL_yz00_3134;

				BgL_xz00_3133 = BgL_xz00_76;
				BgL_yz00_3134 = BgL_yz00_77;
			BgL_loopz00_3132:
				if (PAIRP(BgL_yz00_3134))
					{
						obj_t BgL_yz00_6212;

						obj_t BgL_xz00_6209;

						BgL_xz00_6209 =
							BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_3133,
							CAR(BgL_yz00_3134));
						BgL_yz00_6212 = CDR(BgL_yz00_3134);
						BgL_yz00_3134 = BgL_yz00_6212;
						BgL_xz00_3133 = BgL_xz00_6209;
						goto BgL_loopz00_3132;
					}
				else
					{	/* Ieee/number.scm 614 */
						return BgL_xz00_3133;
					}
			}
		}
	}



/* _min */
	obj_t BGl__minz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4369,
		obj_t BgL_xz00_4370, obj_t BgL_yz00_4371)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 611 */
			return BGl_minz00zz__r4_numbers_6_5z00(BgL_xz00_4370, BgL_yz00_4371);
		}
	}



/* 2+ */
	BGL_EXPORTED_DEF obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_78,
		obj_t BgL_yz00_79)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 621 */
			if (INTEGERP(BgL_xz00_78))
				{	/* Ieee/number.scm 622 */
					if (INTEGERP(BgL_yz00_79))
						{	/* Ieee/number.scm 622 */
							long BgL_auxz00_6221;

							long BgL_auxz00_6219;

							BgL_auxz00_6221 = (long) CINT(BgL_yz00_79);
							BgL_auxz00_6219 = (long) CINT(BgL_xz00_78);
							return BGL_SAFE_PLUS_FX(BgL_auxz00_6219, BgL_auxz00_6221);
						}
					else
						{	/* Ieee/number.scm 622 */
							if (REALP(BgL_yz00_79))
								{	/* Ieee/number.scm 622 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_78)) +
											REAL_TO_DOUBLE(BgL_yz00_79)));
								}
							else
								{	/* Ieee/number.scm 622 */
									if (ELONGP(BgL_yz00_79))
										{	/* Ieee/number.scm 622 */
											long BgL_arg1680z00_979;

											{	/* Ieee/number.scm 622 */
												long BgL_auxz00_6233;

												BgL_auxz00_6233 = (long) CINT(BgL_xz00_78);
												BgL_arg1680z00_979 = LONG_TO_ELONG(BgL_auxz00_6233);
											}
											{	/* Ieee/number.scm 622 */
												long BgL_auxz00_6236;

												BgL_auxz00_6236 = BELONG_TO_LONG(BgL_yz00_79);
												return
													BGL_SAFE_PLUS_ELONG(BgL_arg1680z00_979,
													BgL_auxz00_6236);
											}
										}
									else
										{	/* Ieee/number.scm 622 */
											if (LLONGP(BgL_yz00_79))
												{	/* Ieee/number.scm 622 */
													BGL_LONGLONG_T BgL_arg1684z00_981;

													{	/* Ieee/number.scm 622 */
														long BgL_auxz00_6241;

														BgL_auxz00_6241 = (long) CINT(BgL_xz00_78);
														BgL_arg1684z00_981 = LONG_TO_LLONG(BgL_auxz00_6241);
													}
													{	/* Ieee/number.scm 622 */
														BGL_LONGLONG_T BgL_auxz00_6244;

														BgL_auxz00_6244 = BLLONG_TO_LLONG(BgL_yz00_79);
														return
															BGL_SAFE_PLUS_LLONG(BgL_arg1684z00_981,
															BgL_auxz00_6244);
													}
												}
											else
												{	/* Ieee/number.scm 622 */
													if (BIGNUMP(BgL_yz00_79))
														{	/* Ieee/number.scm 622 */
															obj_t BgL_auxz00_6249;

															BgL_auxz00_6249 =
																bgl_bignum_add(bgl_long_to_bignum(
																	(long) CINT(BgL_xz00_78)), BgL_yz00_79);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6249);
														}
													else
														{	/* Ieee/number.scm 622 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2546z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_79);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 622 */
					if (REALP(BgL_xz00_78))
						{	/* Ieee/number.scm 622 */
							if (REALP(BgL_yz00_79))
								{	/* Ieee/number.scm 622 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_78) +
											REAL_TO_DOUBLE(BgL_yz00_79)));
								}
							else
								{	/* Ieee/number.scm 622 */
									if (INTEGERP(BgL_yz00_79))
										{	/* Ieee/number.scm 622 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_78) +
													(double) ((long) CINT(BgL_yz00_79))));
										}
									else
										{	/* Ieee/number.scm 622 */
											if (ELONGP(BgL_yz00_79))
												{	/* Ieee/number.scm 622 */
													double BgL_r1z00_3183;

													BgL_r1z00_3183 = REAL_TO_DOUBLE(BgL_xz00_78);
													return
														DOUBLE_TO_REAL(
														(BgL_r1z00_3183 +
															(double) (BELONG_TO_LONG(BgL_yz00_79))));
												}
											else
												{	/* Ieee/number.scm 622 */
													if (LLONGP(BgL_yz00_79))
														{	/* Ieee/number.scm 622 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_78) +
																	(double) (BLLONG_TO_LLONG(BgL_yz00_79))));
														}
													else
														{	/* Ieee/number.scm 622 */
															if (BIGNUMP(BgL_yz00_79))
																{	/* Ieee/number.scm 622 */
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_78) +
																			bgl_bignum_to_flonum(BgL_yz00_79)));
																}
															else
																{	/* Ieee/number.scm 622 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2546z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_79);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 622 */
							if (ELONGP(BgL_xz00_78))
								{	/* Ieee/number.scm 622 */
									if (INTEGERP(BgL_yz00_79))
										{	/* Ieee/number.scm 622 */
											long BgL_arg1703z00_997;

											{	/* Ieee/number.scm 622 */
												long BgL_auxz00_6295;

												BgL_auxz00_6295 = (long) CINT(BgL_yz00_79);
												BgL_arg1703z00_997 = LONG_TO_ELONG(BgL_auxz00_6295);
											}
											{	/* Ieee/number.scm 622 */
												long BgL_auxz00_6298;

												BgL_auxz00_6298 = BELONG_TO_LONG(BgL_xz00_78);
												return
													BGL_SAFE_PLUS_ELONG(BgL_auxz00_6298,
													BgL_arg1703z00_997);
											}
										}
									else
										{	/* Ieee/number.scm 622 */
											if (REALP(BgL_yz00_79))
												{	/* Ieee/number.scm 622 */
													double BgL_r2z00_3197;

													BgL_r2z00_3197 = REAL_TO_DOUBLE(BgL_yz00_79);
													return
														DOUBLE_TO_REAL(
														((double) (BELONG_TO_LONG(BgL_xz00_78)) +
															BgL_r2z00_3197));
												}
											else
												{	/* Ieee/number.scm 622 */
													if (ELONGP(BgL_yz00_79))
														{	/* Ieee/number.scm 622 */
															long BgL_auxz00_6312;

															long BgL_auxz00_6310;

															BgL_auxz00_6312 = BELONG_TO_LONG(BgL_yz00_79);
															BgL_auxz00_6310 = BELONG_TO_LONG(BgL_xz00_78);
															return
																BGL_SAFE_PLUS_ELONG(BgL_auxz00_6310,
																BgL_auxz00_6312);
														}
													else
														{	/* Ieee/number.scm 622 */
															if (LLONGP(BgL_yz00_79))
																{	/* Ieee/number.scm 622 */
																	BGL_LONGLONG_T BgL_arg1708z00_1002;

																	BgL_arg1708z00_1002 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_xz00_78));
																	{	/* Ieee/number.scm 622 */
																		BGL_LONGLONG_T BgL_auxz00_6319;

																		BgL_auxz00_6319 =
																			BLLONG_TO_LLONG(BgL_yz00_79);
																		return
																			BGL_SAFE_PLUS_LLONG(BgL_arg1708z00_1002,
																			BgL_auxz00_6319);
																	}
																}
															else
																{	/* Ieee/number.scm 622 */
																	if (BIGNUMP(BgL_yz00_79))
																		{	/* Ieee/number.scm 622 */
																			obj_t BgL_auxz00_6324;

																			{	/* Ieee/number.scm 622 */
																				long BgL_xz00_3201;

																				BgL_xz00_3201 =
																					BELONG_TO_LONG(BgL_xz00_78);
																				BgL_auxz00_6324 =
																					bgl_long_to_bignum(BgL_xz00_3201);
																			}
																			return
																				bgl_bignum_add(BgL_auxz00_6324,
																				BgL_yz00_79);
																		}
																	else
																		{	/* Ieee/number.scm 622 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2546z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_79);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 622 */
									if (LLONGP(BgL_xz00_78))
										{	/* Ieee/number.scm 622 */
											if (INTEGERP(BgL_yz00_79))
												{	/* Ieee/number.scm 622 */
													BGL_LONGLONG_T BgL_arg1713z00_1007;

													{	/* Ieee/number.scm 622 */
														long BgL_auxz00_6333;

														BgL_auxz00_6333 = (long) CINT(BgL_yz00_79);
														BgL_arg1713z00_1007 =
															LONG_TO_LLONG(BgL_auxz00_6333);
													}
													{	/* Ieee/number.scm 622 */
														BGL_LONGLONG_T BgL_auxz00_6336;

														BgL_auxz00_6336 = BLLONG_TO_LLONG(BgL_xz00_78);
														return
															BGL_SAFE_PLUS_LLONG(BgL_auxz00_6336,
															BgL_arg1713z00_1007);
													}
												}
											else
												{	/* Ieee/number.scm 622 */
													if (REALP(BgL_yz00_79))
														{	/* Ieee/number.scm 622 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_78)) +
																	REAL_TO_DOUBLE(BgL_yz00_79)));
														}
													else
														{	/* Ieee/number.scm 622 */
															if (ELONGP(BgL_yz00_79))
																{	/* Ieee/number.scm 622 */
																	BGL_LONGLONG_T BgL_arg1718z00_1011;

																	BgL_arg1718z00_1011 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_yz00_79));
																	{	/* Ieee/number.scm 622 */
																		BGL_LONGLONG_T BgL_auxz00_6350;

																		BgL_auxz00_6350 =
																			BLLONG_TO_LLONG(BgL_xz00_78);
																		return
																			BGL_SAFE_PLUS_LLONG(BgL_auxz00_6350,
																			BgL_arg1718z00_1011);
																	}
																}
															else
																{	/* Ieee/number.scm 622 */
																	if (LLONGP(BgL_yz00_79))
																		{	/* Ieee/number.scm 622 */
																			BGL_LONGLONG_T BgL_auxz00_6357;

																			BGL_LONGLONG_T BgL_auxz00_6355;

																			BgL_auxz00_6357 =
																				BLLONG_TO_LLONG(BgL_yz00_79);
																			BgL_auxz00_6355 =
																				BLLONG_TO_LLONG(BgL_xz00_78);
																			return
																				BGL_SAFE_PLUS_LLONG(BgL_auxz00_6355,
																				BgL_auxz00_6357);
																		}
																	else
																		{	/* Ieee/number.scm 622 */
																			if (BIGNUMP(BgL_yz00_79))
																				{	/* Ieee/number.scm 622 */
																					return
																						bgl_bignum_add(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_78)),
																						BgL_yz00_79);
																				}
																			else
																				{	/* Ieee/number.scm 622 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2546z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_79);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 622 */
											if (BIGNUMP(BgL_xz00_78))
												{	/* Ieee/number.scm 622 */
													if (BIGNUMP(BgL_yz00_79))
														{	/* Ieee/number.scm 622 */
															obj_t BgL_auxz00_6370;

															BgL_auxz00_6370 =
																bgl_bignum_add(BgL_xz00_78, BgL_yz00_79);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6370);
														}
													else
														{	/* Ieee/number.scm 622 */
															if (INTEGERP(BgL_yz00_79))
																{	/* Ieee/number.scm 622 */
																	obj_t BgL_auxz00_6375;

																	BgL_auxz00_6375 =
																		bgl_bignum_add(BgL_xz00_78,
																		bgl_long_to_bignum(
																			(long) CINT(BgL_yz00_79)));
																	return BGL_SAFE_BX_TO_FX(BgL_auxz00_6375);
																}
															else
																{	/* Ieee/number.scm 622 */
																	if (REALP(BgL_yz00_79))
																		{	/* Ieee/number.scm 622 */
																			return
																				DOUBLE_TO_REAL(
																				(bgl_bignum_to_flonum(BgL_xz00_78) +
																					REAL_TO_DOUBLE(BgL_yz00_79)));
																		}
																	else
																		{	/* Ieee/number.scm 622 */
																			if (ELONGP(BgL_yz00_79))
																				{	/* Ieee/number.scm 622 */
																					obj_t BgL_auxz00_6388;

																					{	/* Ieee/number.scm 622 */
																						long BgL_xz00_3229;

																						BgL_xz00_3229 =
																							BELONG_TO_LONG(BgL_yz00_79);
																						BgL_auxz00_6388 =
																							bgl_long_to_bignum(BgL_xz00_3229);
																					}
																					return
																						bgl_bignum_add(BgL_xz00_78,
																						BgL_auxz00_6388);
																				}
																			else
																				{	/* Ieee/number.scm 622 */
																					if (LLONGP(BgL_yz00_79))
																						{	/* Ieee/number.scm 622 */
																							return
																								bgl_bignum_add(BgL_xz00_78,
																								bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_yz00_79)));
																						}
																					else
																						{	/* Ieee/number.scm 622 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2546z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_79);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 622 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2546z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_78);
												}
										}
								}
						}
				}
		}
	}



/* _2+ */
	obj_t BGl__2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4372,
		obj_t BgL_xz00_4373, obj_t BgL_yz00_4374)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 621 */
			return BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_4373, BgL_yz00_4374);
		}
	}



/* + */
	BGL_EXPORTED_DEF obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_80)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 627 */
			{
				obj_t BgL_sumz00_3237;

				obj_t BgL_xz00_3238;

				BgL_sumz00_3237 = BINT(((long) 0));
				BgL_xz00_3238 = BgL_xz00_80;
			BgL_loopz00_3236:
				if (PAIRP(BgL_xz00_3238))
					{
						obj_t BgL_xz00_6405;

						obj_t BgL_sumz00_6402;

						BgL_sumz00_6402 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_sumz00_3237,
							CAR(BgL_xz00_3238));
						BgL_xz00_6405 = CDR(BgL_xz00_3238);
						BgL_xz00_3238 = BgL_xz00_6405;
						BgL_sumz00_3237 = BgL_sumz00_6402;
						goto BgL_loopz00_3236;
					}
				else
					{	/* Ieee/number.scm 628 */
						return BgL_sumz00_3237;
					}
			}
		}
	}



/* _+ */
	obj_t BGl__zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4375,
		obj_t BgL_xz00_4376)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 627 */
			return BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_4376);
		}
	}



/* 2* */
	BGL_EXPORTED_DEF obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_81,
		obj_t BgL_yz00_82)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 638 */
			if (INTEGERP(BgL_xz00_81))
				{	/* Ieee/number.scm 639 */
					if (INTEGERP(BgL_yz00_82))
						{	/* Ieee/number.scm 639 */
							long BgL_auxz00_6415;

							long BgL_auxz00_6413;

							BgL_auxz00_6415 = (long) CINT(BgL_yz00_82);
							BgL_auxz00_6413 = (long) CINT(BgL_xz00_81);
							return BGL_SAFE_MUL_FX(BgL_auxz00_6413, BgL_auxz00_6415);
						}
					else
						{	/* Ieee/number.scm 639 */
							if (REALP(BgL_yz00_82))
								{	/* Ieee/number.scm 639 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_81)) *
											REAL_TO_DOUBLE(BgL_yz00_82)));
								}
							else
								{	/* Ieee/number.scm 639 */
									if (ELONGP(BgL_yz00_82))
										{	/* Ieee/number.scm 639 */
											long BgL_arg1749z00_1041;

											{	/* Ieee/number.scm 639 */
												long BgL_auxz00_6427;

												BgL_auxz00_6427 = (long) CINT(BgL_xz00_81);
												BgL_arg1749z00_1041 = LONG_TO_ELONG(BgL_auxz00_6427);
											}
											{	/* Ieee/number.scm 639 */
												long BgL_auxz00_6430;

												BgL_auxz00_6430 = BELONG_TO_LONG(BgL_yz00_82);
												return
													BGL_SAFE_MUL_ELONG(BgL_arg1749z00_1041,
													BgL_auxz00_6430);
											}
										}
									else
										{	/* Ieee/number.scm 639 */
											if (LLONGP(BgL_yz00_82))
												{	/* Ieee/number.scm 639 */
													BGL_LONGLONG_T BgL_arg1751z00_1043;

													{	/* Ieee/number.scm 639 */
														long BgL_auxz00_6435;

														BgL_auxz00_6435 = (long) CINT(BgL_xz00_81);
														BgL_arg1751z00_1043 =
															LONG_TO_LLONG(BgL_auxz00_6435);
													}
													{	/* Ieee/number.scm 639 */
														BGL_LONGLONG_T BgL_auxz00_6438;

														BgL_auxz00_6438 = BLLONG_TO_LLONG(BgL_yz00_82);
														return
															BGL_SAFE_MUL_LLONG(BgL_arg1751z00_1043,
															BgL_auxz00_6438);
													}
												}
											else
												{	/* Ieee/number.scm 639 */
													if (BIGNUMP(BgL_yz00_82))
														{	/* Ieee/number.scm 639 */
															obj_t BgL_auxz00_6443;

															BgL_auxz00_6443 =
																bgl_bignum_mul(bgl_long_to_bignum(
																	(long) CINT(BgL_xz00_81)), BgL_yz00_82);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6443);
														}
													else
														{	/* Ieee/number.scm 639 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2548z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_82);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 639 */
					if (REALP(BgL_xz00_81))
						{	/* Ieee/number.scm 639 */
							if (REALP(BgL_yz00_82))
								{	/* Ieee/number.scm 639 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_81) *
											REAL_TO_DOUBLE(BgL_yz00_82)));
								}
							else
								{	/* Ieee/number.scm 639 */
									if (INTEGERP(BgL_yz00_82))
										{	/* Ieee/number.scm 639 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_81) *
													(double) ((long) CINT(BgL_yz00_82))));
										}
									else
										{	/* Ieee/number.scm 639 */
											if (ELONGP(BgL_yz00_82))
												{	/* Ieee/number.scm 639 */
													double BgL_r1z00_3287;

													BgL_r1z00_3287 = REAL_TO_DOUBLE(BgL_xz00_81);
													return
														DOUBLE_TO_REAL(
														(BgL_r1z00_3287 *
															(double) (BELONG_TO_LONG(BgL_yz00_82))));
												}
											else
												{	/* Ieee/number.scm 639 */
													if (LLONGP(BgL_yz00_82))
														{	/* Ieee/number.scm 639 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_81) *
																	(double) (BLLONG_TO_LLONG(BgL_yz00_82))));
														}
													else
														{	/* Ieee/number.scm 639 */
															if (BIGNUMP(BgL_yz00_82))
																{	/* Ieee/number.scm 639 */
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_81) *
																			bgl_bignum_to_flonum(BgL_yz00_82)));
																}
															else
																{	/* Ieee/number.scm 639 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2548z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_82);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 639 */
							if (ELONGP(BgL_xz00_81))
								{	/* Ieee/number.scm 639 */
									if (INTEGERP(BgL_yz00_82))
										{	/* Ieee/number.scm 639 */
											long BgL_arg1772z00_1059;

											{	/* Ieee/number.scm 639 */
												long BgL_auxz00_6489;

												BgL_auxz00_6489 = (long) CINT(BgL_yz00_82);
												BgL_arg1772z00_1059 = LONG_TO_ELONG(BgL_auxz00_6489);
											}
											{	/* Ieee/number.scm 639 */
												long BgL_auxz00_6492;

												BgL_auxz00_6492 = BELONG_TO_LONG(BgL_xz00_81);
												return
													BGL_SAFE_MUL_ELONG(BgL_auxz00_6492,
													BgL_arg1772z00_1059);
											}
										}
									else
										{	/* Ieee/number.scm 639 */
											if (REALP(BgL_yz00_82))
												{	/* Ieee/number.scm 639 */
													double BgL_r2z00_3301;

													BgL_r2z00_3301 = REAL_TO_DOUBLE(BgL_yz00_82);
													return
														DOUBLE_TO_REAL(
														((double) (BELONG_TO_LONG(BgL_xz00_81)) *
															BgL_r2z00_3301));
												}
											else
												{	/* Ieee/number.scm 639 */
													if (ELONGP(BgL_yz00_82))
														{	/* Ieee/number.scm 639 */
															long BgL_auxz00_6506;

															long BgL_auxz00_6504;

															BgL_auxz00_6506 = BELONG_TO_LONG(BgL_yz00_82);
															BgL_auxz00_6504 = BELONG_TO_LONG(BgL_xz00_81);
															return
																BGL_SAFE_MUL_ELONG(BgL_auxz00_6504,
																BgL_auxz00_6506);
														}
													else
														{	/* Ieee/number.scm 639 */
															if (LLONGP(BgL_yz00_82))
																{	/* Ieee/number.scm 639 */
																	BGL_LONGLONG_T BgL_arg1778z00_1064;

																	BgL_arg1778z00_1064 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_xz00_81));
																	{	/* Ieee/number.scm 639 */
																		BGL_LONGLONG_T BgL_auxz00_6513;

																		BgL_auxz00_6513 =
																			BLLONG_TO_LLONG(BgL_yz00_82);
																		return
																			BGL_SAFE_MUL_LLONG(BgL_arg1778z00_1064,
																			BgL_auxz00_6513);
																	}
																}
															else
																{	/* Ieee/number.scm 639 */
																	if (BIGNUMP(BgL_yz00_82))
																		{	/* Ieee/number.scm 639 */
																			obj_t BgL_auxz00_6518;

																			{	/* Ieee/number.scm 639 */
																				long BgL_xz00_3305;

																				BgL_xz00_3305 =
																					BELONG_TO_LONG(BgL_xz00_81);
																				BgL_auxz00_6518 =
																					bgl_long_to_bignum(BgL_xz00_3305);
																			}
																			return
																				bgl_bignum_mul(BgL_auxz00_6518,
																				BgL_yz00_82);
																		}
																	else
																		{	/* Ieee/number.scm 639 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2548z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_82);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 639 */
									if (LLONGP(BgL_xz00_81))
										{	/* Ieee/number.scm 639 */
											if (INTEGERP(BgL_yz00_82))
												{	/* Ieee/number.scm 639 */
													BGL_LONGLONG_T BgL_arg1785z00_1069;

													{	/* Ieee/number.scm 639 */
														long BgL_auxz00_6527;

														BgL_auxz00_6527 = (long) CINT(BgL_yz00_82);
														BgL_arg1785z00_1069 =
															LONG_TO_LLONG(BgL_auxz00_6527);
													}
													{	/* Ieee/number.scm 639 */
														BGL_LONGLONG_T BgL_auxz00_6530;

														BgL_auxz00_6530 = BLLONG_TO_LLONG(BgL_xz00_81);
														return
															BGL_SAFE_MUL_LLONG(BgL_auxz00_6530,
															BgL_arg1785z00_1069);
													}
												}
											else
												{	/* Ieee/number.scm 639 */
													if (REALP(BgL_yz00_82))
														{	/* Ieee/number.scm 639 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_81)) *
																	REAL_TO_DOUBLE(BgL_yz00_82)));
														}
													else
														{	/* Ieee/number.scm 639 */
															if (ELONGP(BgL_yz00_82))
																{	/* Ieee/number.scm 639 */
																	BGL_LONGLONG_T BgL_arg1789z00_1073;

																	BgL_arg1789z00_1073 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_yz00_82));
																	{	/* Ieee/number.scm 639 */
																		BGL_LONGLONG_T BgL_auxz00_6544;

																		BgL_auxz00_6544 =
																			BLLONG_TO_LLONG(BgL_xz00_81);
																		return
																			BGL_SAFE_MUL_LLONG(BgL_auxz00_6544,
																			BgL_arg1789z00_1073);
																	}
																}
															else
																{	/* Ieee/number.scm 639 */
																	if (LLONGP(BgL_yz00_82))
																		{	/* Ieee/number.scm 639 */
																			BGL_LONGLONG_T BgL_auxz00_6551;

																			BGL_LONGLONG_T BgL_auxz00_6549;

																			BgL_auxz00_6551 =
																				BLLONG_TO_LLONG(BgL_yz00_82);
																			BgL_auxz00_6549 =
																				BLLONG_TO_LLONG(BgL_xz00_81);
																			return
																				BGL_SAFE_MUL_LLONG(BgL_auxz00_6549,
																				BgL_auxz00_6551);
																		}
																	else
																		{	/* Ieee/number.scm 639 */
																			if (BIGNUMP(BgL_yz00_82))
																				{	/* Ieee/number.scm 639 */
																					return
																						bgl_bignum_mul(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_81)),
																						BgL_yz00_82);
																				}
																			else
																				{	/* Ieee/number.scm 639 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2548z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_82);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 639 */
											if (BIGNUMP(BgL_xz00_81))
												{	/* Ieee/number.scm 639 */
													if (BIGNUMP(BgL_yz00_82))
														{	/* Ieee/number.scm 639 */
															obj_t BgL_auxz00_6564;

															BgL_auxz00_6564 =
																bgl_bignum_mul(BgL_xz00_81, BgL_yz00_82);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6564);
														}
													else
														{	/* Ieee/number.scm 639 */
															if (INTEGERP(BgL_yz00_82))
																{	/* Ieee/number.scm 639 */
																	obj_t BgL_auxz00_6569;

																	BgL_auxz00_6569 =
																		bgl_bignum_mul(BgL_xz00_81,
																		bgl_long_to_bignum(
																			(long) CINT(BgL_yz00_82)));
																	return BGL_SAFE_BX_TO_FX(BgL_auxz00_6569);
																}
															else
																{	/* Ieee/number.scm 639 */
																	if (REALP(BgL_yz00_82))
																		{	/* Ieee/number.scm 639 */
																			return
																				DOUBLE_TO_REAL(
																				(bgl_bignum_to_flonum(BgL_xz00_81) *
																					REAL_TO_DOUBLE(BgL_yz00_82)));
																		}
																	else
																		{	/* Ieee/number.scm 639 */
																			if (ELONGP(BgL_yz00_82))
																				{	/* Ieee/number.scm 639 */
																					obj_t BgL_auxz00_6582;

																					{	/* Ieee/number.scm 639 */
																						long BgL_xz00_3333;

																						BgL_xz00_3333 =
																							BELONG_TO_LONG(BgL_yz00_82);
																						BgL_auxz00_6582 =
																							bgl_long_to_bignum(BgL_xz00_3333);
																					}
																					return
																						bgl_bignum_mul(BgL_xz00_81,
																						BgL_auxz00_6582);
																				}
																			else
																				{	/* Ieee/number.scm 639 */
																					if (LLONGP(BgL_yz00_82))
																						{	/* Ieee/number.scm 639 */
																							return
																								bgl_bignum_mul(BgL_xz00_81,
																								bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_yz00_82)));
																						}
																					else
																						{	/* Ieee/number.scm 639 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2548z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_82);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 639 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2548z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_81);
												}
										}
								}
						}
				}
		}
	}



/* _2* */
	obj_t BGl__2za2za2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4377,
		obj_t BgL_xz00_4378, obj_t BgL_yz00_4379)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 638 */
			return BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_4378, BgL_yz00_4379);
		}
	}



/* * */
	BGL_EXPORTED_DEF obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_83)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 644 */
			{
				obj_t BgL_productz00_3341;

				obj_t BgL_xz00_3342;

				BgL_productz00_3341 = BINT(((long) 1));
				BgL_xz00_3342 = BgL_xz00_83;
			BgL_loopz00_3340:
				if (PAIRP(BgL_xz00_3342))
					{
						obj_t BgL_xz00_6599;

						obj_t BgL_productz00_6596;

						BgL_productz00_6596 =
							BGl_2za2za2zz__r4_numbers_6_5z00(BgL_productz00_3341,
							CAR(BgL_xz00_3342));
						BgL_xz00_6599 = CDR(BgL_xz00_3342);
						BgL_xz00_3342 = BgL_xz00_6599;
						BgL_productz00_3341 = BgL_productz00_6596;
						goto BgL_loopz00_3340;
					}
				else
					{	/* Ieee/number.scm 645 */
						return BgL_productz00_3341;
					}
			}
		}
	}



/* _* */
	obj_t BGl__za2za2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4380,
		obj_t BgL_xz00_4381)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 644 */
			return BGl_za2za2zz__r4_numbers_6_5z00(BgL_xz00_4381);
		}
	}



/* 2- */
	BGL_EXPORTED_DEF obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_84,
		obj_t BgL_yz00_85)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 654 */
			if (INTEGERP(BgL_xz00_84))
				{	/* Ieee/number.scm 655 */
					if (INTEGERP(BgL_yz00_85))
						{	/* Ieee/number.scm 655 */
							long BgL_auxz00_6609;

							long BgL_auxz00_6607;

							BgL_auxz00_6609 = (long) CINT(BgL_yz00_85);
							BgL_auxz00_6607 = (long) CINT(BgL_xz00_84);
							return BGL_SAFE_MINUS_FX(BgL_auxz00_6607, BgL_auxz00_6609);
						}
					else
						{	/* Ieee/number.scm 655 */
							if (REALP(BgL_yz00_85))
								{	/* Ieee/number.scm 655 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_84)) -
											REAL_TO_DOUBLE(BgL_yz00_85)));
								}
							else
								{	/* Ieee/number.scm 655 */
									if (ELONGP(BgL_yz00_85))
										{	/* Ieee/number.scm 655 */
											long BgL_arg1817z00_1103;

											{	/* Ieee/number.scm 655 */
												long BgL_auxz00_6621;

												BgL_auxz00_6621 = (long) CINT(BgL_xz00_84);
												BgL_arg1817z00_1103 = LONG_TO_ELONG(BgL_auxz00_6621);
											}
											{	/* Ieee/number.scm 655 */
												long BgL_auxz00_6624;

												BgL_auxz00_6624 = BELONG_TO_LONG(BgL_yz00_85);
												return
													BGL_SAFE_MINUS_ELONG(BgL_arg1817z00_1103,
													BgL_auxz00_6624);
											}
										}
									else
										{	/* Ieee/number.scm 655 */
											if (LLONGP(BgL_yz00_85))
												{	/* Ieee/number.scm 655 */
													BGL_LONGLONG_T BgL_arg1819z00_1105;

													{	/* Ieee/number.scm 655 */
														long BgL_auxz00_6629;

														BgL_auxz00_6629 = (long) CINT(BgL_xz00_84);
														BgL_arg1819z00_1105 =
															LONG_TO_LLONG(BgL_auxz00_6629);
													}
													{	/* Ieee/number.scm 655 */
														BGL_LONGLONG_T BgL_auxz00_6632;

														BgL_auxz00_6632 = BLLONG_TO_LLONG(BgL_yz00_85);
														return
															BGL_SAFE_MINUS_LLONG(BgL_arg1819z00_1105,
															BgL_auxz00_6632);
													}
												}
											else
												{	/* Ieee/number.scm 655 */
													if (BIGNUMP(BgL_yz00_85))
														{	/* Ieee/number.scm 655 */
															obj_t BgL_auxz00_6637;

															BgL_auxz00_6637 =
																bgl_bignum_sub(bgl_long_to_bignum(
																	(long) CINT(BgL_xz00_84)), BgL_yz00_85);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6637);
														}
													else
														{	/* Ieee/number.scm 655 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2550z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_85);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 655 */
					if (REALP(BgL_xz00_84))
						{	/* Ieee/number.scm 655 */
							if (REALP(BgL_yz00_85))
								{	/* Ieee/number.scm 655 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_84) -
											REAL_TO_DOUBLE(BgL_yz00_85)));
								}
							else
								{	/* Ieee/number.scm 655 */
									if (INTEGERP(BgL_yz00_85))
										{	/* Ieee/number.scm 655 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_84) -
													(double) ((long) CINT(BgL_yz00_85))));
										}
									else
										{	/* Ieee/number.scm 655 */
											if (ELONGP(BgL_yz00_85))
												{	/* Ieee/number.scm 655 */
													double BgL_r1z00_3391;

													BgL_r1z00_3391 = REAL_TO_DOUBLE(BgL_xz00_84);
													return
														DOUBLE_TO_REAL(
														(BgL_r1z00_3391 -
															(double) (BELONG_TO_LONG(BgL_yz00_85))));
												}
											else
												{	/* Ieee/number.scm 655 */
													if (LLONGP(BgL_yz00_85))
														{	/* Ieee/number.scm 655 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_84) -
																	(double) (BLLONG_TO_LLONG(BgL_yz00_85))));
														}
													else
														{	/* Ieee/number.scm 655 */
															if (BIGNUMP(BgL_yz00_85))
																{	/* Ieee/number.scm 655 */
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_84) -
																			bgl_bignum_to_flonum(BgL_yz00_85)));
																}
															else
																{	/* Ieee/number.scm 655 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2550z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_85);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 655 */
							if (ELONGP(BgL_xz00_84))
								{	/* Ieee/number.scm 655 */
									if (INTEGERP(BgL_yz00_85))
										{	/* Ieee/number.scm 655 */
											long BgL_arg1835z00_1121;

											{	/* Ieee/number.scm 655 */
												long BgL_auxz00_6683;

												BgL_auxz00_6683 = (long) CINT(BgL_yz00_85);
												BgL_arg1835z00_1121 = LONG_TO_ELONG(BgL_auxz00_6683);
											}
											{	/* Ieee/number.scm 655 */
												long BgL_auxz00_6686;

												BgL_auxz00_6686 = BELONG_TO_LONG(BgL_xz00_84);
												return
													BGL_SAFE_MINUS_ELONG(BgL_auxz00_6686,
													BgL_arg1835z00_1121);
											}
										}
									else
										{	/* Ieee/number.scm 655 */
											if (REALP(BgL_yz00_85))
												{	/* Ieee/number.scm 655 */
													double BgL_r2z00_3405;

													BgL_r2z00_3405 = REAL_TO_DOUBLE(BgL_yz00_85);
													return
														DOUBLE_TO_REAL(
														((double) (BELONG_TO_LONG(BgL_xz00_84)) -
															BgL_r2z00_3405));
												}
											else
												{	/* Ieee/number.scm 655 */
													if (ELONGP(BgL_yz00_85))
														{	/* Ieee/number.scm 655 */
															long BgL_auxz00_6700;

															long BgL_auxz00_6698;

															BgL_auxz00_6700 = BELONG_TO_LONG(BgL_yz00_85);
															BgL_auxz00_6698 = BELONG_TO_LONG(BgL_xz00_84);
															return
																BGL_SAFE_MINUS_ELONG(BgL_auxz00_6698,
																BgL_auxz00_6700);
														}
													else
														{	/* Ieee/number.scm 655 */
															if (LLONGP(BgL_yz00_85))
																{	/* Ieee/number.scm 655 */
																	BGL_LONGLONG_T BgL_arg1840z00_1126;

																	BgL_arg1840z00_1126 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_xz00_84));
																	{	/* Ieee/number.scm 655 */
																		BGL_LONGLONG_T BgL_auxz00_6707;

																		BgL_auxz00_6707 =
																			BLLONG_TO_LLONG(BgL_yz00_85);
																		return
																			BGL_SAFE_MINUS_LLONG(BgL_arg1840z00_1126,
																			BgL_auxz00_6707);
																	}
																}
															else
																{	/* Ieee/number.scm 655 */
																	if (BIGNUMP(BgL_yz00_85))
																		{	/* Ieee/number.scm 655 */
																			obj_t BgL_auxz00_6712;

																			{	/* Ieee/number.scm 655 */
																				long BgL_xz00_3409;

																				BgL_xz00_3409 =
																					BELONG_TO_LONG(BgL_xz00_84);
																				BgL_auxz00_6712 =
																					bgl_long_to_bignum(BgL_xz00_3409);
																			}
																			return
																				bgl_bignum_sub(BgL_auxz00_6712,
																				BgL_yz00_85);
																		}
																	else
																		{	/* Ieee/number.scm 655 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2550z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_85);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 655 */
									if (LLONGP(BgL_xz00_84))
										{	/* Ieee/number.scm 655 */
											if (INTEGERP(BgL_yz00_85))
												{	/* Ieee/number.scm 655 */
													BGL_LONGLONG_T BgL_arg1845z00_1131;

													{	/* Ieee/number.scm 655 */
														long BgL_auxz00_6721;

														BgL_auxz00_6721 = (long) CINT(BgL_yz00_85);
														BgL_arg1845z00_1131 =
															LONG_TO_LLONG(BgL_auxz00_6721);
													}
													{	/* Ieee/number.scm 655 */
														BGL_LONGLONG_T BgL_auxz00_6724;

														BgL_auxz00_6724 = BLLONG_TO_LLONG(BgL_xz00_84);
														return
															BGL_SAFE_MINUS_LLONG(BgL_auxz00_6724,
															BgL_arg1845z00_1131);
													}
												}
											else
												{	/* Ieee/number.scm 655 */
													if (REALP(BgL_yz00_85))
														{	/* Ieee/number.scm 655 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_84)) -
																	REAL_TO_DOUBLE(BgL_yz00_85)));
														}
													else
														{	/* Ieee/number.scm 655 */
															if (ELONGP(BgL_yz00_85))
																{	/* Ieee/number.scm 655 */
																	BGL_LONGLONG_T BgL_arg1849z00_1135;

																	BgL_arg1849z00_1135 =
																		(BGL_LONGLONG_T) (BELONG_TO_LONG
																		(BgL_yz00_85));
																	{	/* Ieee/number.scm 655 */
																		BGL_LONGLONG_T BgL_auxz00_6738;

																		BgL_auxz00_6738 =
																			BLLONG_TO_LLONG(BgL_xz00_84);
																		return
																			BGL_SAFE_MINUS_LLONG(BgL_auxz00_6738,
																			BgL_arg1849z00_1135);
																	}
																}
															else
																{	/* Ieee/number.scm 655 */
																	if (LLONGP(BgL_yz00_85))
																		{	/* Ieee/number.scm 655 */
																			BGL_LONGLONG_T BgL_auxz00_6745;

																			BGL_LONGLONG_T BgL_auxz00_6743;

																			BgL_auxz00_6745 =
																				BLLONG_TO_LLONG(BgL_yz00_85);
																			BgL_auxz00_6743 =
																				BLLONG_TO_LLONG(BgL_xz00_84);
																			return
																				BGL_SAFE_MINUS_LLONG(BgL_auxz00_6743,
																				BgL_auxz00_6745);
																		}
																	else
																		{	/* Ieee/number.scm 655 */
																			if (BIGNUMP(BgL_yz00_85))
																				{	/* Ieee/number.scm 655 */
																					return
																						bgl_bignum_sub(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_84)),
																						BgL_yz00_85);
																				}
																			else
																				{	/* Ieee/number.scm 655 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2550z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_85);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 655 */
											if (BIGNUMP(BgL_xz00_84))
												{	/* Ieee/number.scm 655 */
													if (BIGNUMP(BgL_yz00_85))
														{	/* Ieee/number.scm 655 */
															obj_t BgL_auxz00_6758;

															BgL_auxz00_6758 =
																bgl_bignum_sub(BgL_xz00_84, BgL_yz00_85);
															return BGL_SAFE_BX_TO_FX(BgL_auxz00_6758);
														}
													else
														{	/* Ieee/number.scm 655 */
															if (INTEGERP(BgL_yz00_85))
																{	/* Ieee/number.scm 655 */
																	obj_t BgL_auxz00_6763;

																	BgL_auxz00_6763 =
																		bgl_bignum_sub(BgL_xz00_84,
																		bgl_long_to_bignum(
																			(long) CINT(BgL_yz00_85)));
																	return BGL_SAFE_BX_TO_FX(BgL_auxz00_6763);
																}
															else
																{	/* Ieee/number.scm 655 */
																	if (REALP(BgL_yz00_85))
																		{	/* Ieee/number.scm 655 */
																			return
																				DOUBLE_TO_REAL(
																				(bgl_bignum_to_flonum(BgL_xz00_84) -
																					REAL_TO_DOUBLE(BgL_yz00_85)));
																		}
																	else
																		{	/* Ieee/number.scm 655 */
																			if (ELONGP(BgL_yz00_85))
																				{	/* Ieee/number.scm 655 */
																					obj_t BgL_auxz00_6776;

																					{	/* Ieee/number.scm 655 */
																						long BgL_xz00_3437;

																						BgL_xz00_3437 =
																							BELONG_TO_LONG(BgL_yz00_85);
																						BgL_auxz00_6776 =
																							bgl_long_to_bignum(BgL_xz00_3437);
																					}
																					return
																						bgl_bignum_sub(BgL_xz00_84,
																						BgL_auxz00_6776);
																				}
																			else
																				{	/* Ieee/number.scm 655 */
																					if (LLONGP(BgL_yz00_85))
																						{	/* Ieee/number.scm 655 */
																							return
																								bgl_bignum_sub(BgL_xz00_84,
																								bgl_llong_to_bignum
																								(BLLONG_TO_LLONG(BgL_yz00_85)));
																						}
																					else
																						{	/* Ieee/number.scm 655 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2550z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_85);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 655 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2550z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_84);
												}
										}
								}
						}
				}
		}
	}



/* _2- */
	obj_t BGl__2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4382,
		obj_t BgL_xz00_4383, obj_t BgL_yz00_4384)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 654 */
			return BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_4383, BgL_yz00_4384);
		}
	}



/* - */
	BGL_EXPORTED_DEF obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_86,
		obj_t BgL_yz00_87)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 660 */
			if (PAIRP(BgL_yz00_87))
				{	/* Ieee/number.scm 662 */
					obj_t BgL_g1102z00_1152;

					obj_t BgL_g1103z00_1153;

					BgL_g1102z00_1152 =
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_86, CAR(BgL_yz00_87));
					BgL_g1103z00_1153 = CDR(BgL_yz00_87);
					{
						obj_t BgL_resultz00_3448;

						obj_t BgL_argsz00_3449;

						BgL_resultz00_3448 = BgL_g1102z00_1152;
						BgL_argsz00_3449 = BgL_g1103z00_1153;
					BgL_loopz00_3447:
						if (PAIRP(BgL_argsz00_3449))
							{
								obj_t BgL_argsz00_6798;

								obj_t BgL_resultz00_6795;

								BgL_resultz00_6795 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_resultz00_3448,
									CAR(BgL_argsz00_3449));
								BgL_argsz00_6798 = CDR(BgL_argsz00_3449);
								BgL_argsz00_3449 = BgL_argsz00_6798;
								BgL_resultz00_3448 = BgL_resultz00_6795;
								goto BgL_loopz00_3447;
							}
						else
							{	/* Ieee/number.scm 662 */
								return BgL_resultz00_3448;
							}
					}
				}
			else
				{	/* Ieee/number.scm 661 */
					return
						BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(((long) 0)), BgL_xz00_86);
		}}
	}



/* _- */
	obj_t BGl__zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4385,
		obj_t BgL_xz00_4386, obj_t BgL_yz00_4387)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 660 */
			return BGl_zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_4386, BgL_yz00_4387);
		}
	}



/* 2/ */
	BGL_EXPORTED_DEF obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_88,
		obj_t BgL_yz00_89)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 672 */
			if (INTEGERP(BgL_xz00_88))
				{	/* Ieee/number.scm 674 */
					if (INTEGERP(BgL_yz00_89))
						{	/* Ieee/number.scm 677 */
							bool_t BgL_testz00_6807;

							{	/* Ieee/number.scm 677 */
								long BgL_arg1877z00_1169;

								{	/* Ieee/number.scm 677 */
									long BgL_auxz00_6810;

									long BgL_auxz00_6808;

									BgL_auxz00_6810 = (long) CINT(BgL_yz00_89);
									BgL_auxz00_6808 = (long) CINT(BgL_xz00_88);
									BgL_arg1877z00_1169 = (BgL_auxz00_6808 % BgL_auxz00_6810);
								}
								BgL_testz00_6807 = (BgL_arg1877z00_1169 == ((long) 0));
							}
							if (BgL_testz00_6807)
								{	/* Ieee/number.scm 677 */
									return
										BINT(((long) CINT(BgL_xz00_88) / (long) CINT(BgL_yz00_89)));
								}
							else
								{	/* Ieee/number.scm 677 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_88)) /
											(double) ((long) CINT(BgL_yz00_89))));
						}}
					else
						{	/* Ieee/number.scm 676 */
							if (REALP(BgL_yz00_89))
								{	/* Ieee/number.scm 680 */
									return
										DOUBLE_TO_REAL(
										((double) (
												(long) CINT(BgL_xz00_88)) /
											REAL_TO_DOUBLE(BgL_yz00_89)));
								}
							else
								{	/* Ieee/number.scm 680 */
									if (ELONGP(BgL_yz00_89))
										{	/* Ieee/number.scm 683 */
											long BgL_exz00_1174;

											{	/* Ieee/number.scm 683 */
												long BgL_auxz00_6833;

												BgL_auxz00_6833 = (long) CINT(BgL_xz00_88);
												BgL_exz00_1174 = LONG_TO_ELONG(BgL_auxz00_6833);
											}
											{	/* Ieee/number.scm 684 */
												bool_t BgL_testz00_6836;

												{	/* Ieee/number.scm 684 */
													long BgL_arg1886z00_1178;

													{	/* Ieee/number.scm 684 */
														long BgL_n2z00_3493;

														BgL_n2z00_3493 = BELONG_TO_LONG(BgL_yz00_89);
														BgL_arg1886z00_1178 =
															(BgL_exz00_1174 % BgL_n2z00_3493);
													}
													BgL_testz00_6836 =
														(BgL_arg1886z00_1178 == ((long) 0));
												}
												if (BgL_testz00_6836)
													{	/* Ieee/number.scm 685 */
														long BgL_za72za7_3497;

														BgL_za72za7_3497 = BELONG_TO_LONG(BgL_yz00_89);
														{	/* Ieee/number.scm 685 */
															long BgL_auxz00_6841;

															BgL_auxz00_6841 =
																(BgL_exz00_1174 / BgL_za72za7_3497);
															return make_belong(BgL_auxz00_6841);
														}
													}
												else
													{	/* Ieee/number.scm 684 */
														return
															DOUBLE_TO_REAL(
															((double) (
																	(long) CINT(BgL_xz00_88)) /
																(double) (BELONG_TO_LONG(BgL_yz00_89))));
										}}}
									else
										{	/* Ieee/number.scm 682 */
											if (LLONGP(BgL_yz00_89))
												{	/* Ieee/number.scm 688 */
													BGL_LONGLONG_T BgL_lxz00_1181;

													{	/* Ieee/number.scm 688 */
														long BgL_auxz00_6852;

														BgL_auxz00_6852 = (long) CINT(BgL_xz00_88);
														BgL_lxz00_1181 = LONG_TO_LLONG(BgL_auxz00_6852);
													}
													{	/* Ieee/number.scm 689 */
														bool_t BgL_testz00_6855;

														{	/* Ieee/number.scm 689 */
															BGL_LONGLONG_T BgL_arg1893z00_1185;

															{	/* Ieee/number.scm 689 */
																BGL_LONGLONG_T BgL_auxz00_6856;

																BgL_auxz00_6856 = BLLONG_TO_LLONG(BgL_yz00_89);
																BgL_arg1893z00_1185 =
																	(BgL_lxz00_1181 % BgL_auxz00_6856);
															}
															BgL_testz00_6855 =
																(BgL_arg1893z00_1185 == ((BGL_LONGLONG_T) 0));
														}
														if (BgL_testz00_6855)
															{	/* Ieee/number.scm 690 */
																BGL_LONGLONG_T BgL_za72za7_3507;

																BgL_za72za7_3507 = BLLONG_TO_LLONG(BgL_yz00_89);
																return
																	make_bllong(
																	(BgL_lxz00_1181 / BgL_za72za7_3507));
															}
														else
															{	/* Ieee/number.scm 689 */
																return
																	DOUBLE_TO_REAL(
																	((double) (
																			(long) CINT(BgL_xz00_88)) /
																		(double) (BLLONG_TO_LLONG(BgL_yz00_89))));
												}}}
											else
												{	/* Ieee/number.scm 687 */
													if (BIGNUMP(BgL_yz00_89))
														{	/* Ieee/number.scm 693 */
															obj_t BgL_qz00_1188;

															BgL_qz00_1188 =
																bgl_bignum_div(bgl_long_to_bignum(
																	(long) CINT(BgL_xz00_88)), BgL_yz00_89);
															{	/* Ieee/number.scm 695 */
																obj_t BgL_rz00_1189;

																{	/* Ieee/number.scm 695 */
																	int BgL_auxz00_6874;

																	BgL_auxz00_6874 = (int) (((long) 1));
																	BgL_rz00_1189 =
																		BGL_MVALUES_VAL(BgL_auxz00_6874);
																}
																if (BXZERO(BgL_rz00_1189))
																	{	/* Ieee/number.scm 695 */
																		return BgL_qz00_1188;
																	}
																else
																	{	/* Ieee/number.scm 695 */
																		return
																			DOUBLE_TO_REAL(
																			((double) (
																					(long) CINT(BgL_xz00_88)) /
																				bgl_bignum_to_flonum(BgL_yz00_89)));
														}}}
													else
														{	/* Ieee/number.scm 692 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2552z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_yz00_89);
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 674 */
					if (REALP(BgL_xz00_88))
						{	/* Ieee/number.scm 700 */
							if (REALP(BgL_yz00_89))
								{	/* Ieee/number.scm 702 */
									return
										DOUBLE_TO_REAL(
										(REAL_TO_DOUBLE(BgL_xz00_88) /
											REAL_TO_DOUBLE(BgL_yz00_89)));
								}
							else
								{	/* Ieee/number.scm 702 */
									if (INTEGERP(BgL_yz00_89))
										{	/* Ieee/number.scm 704 */
											return
												DOUBLE_TO_REAL(
												(REAL_TO_DOUBLE(BgL_xz00_88) /
													(double) ((long) CINT(BgL_yz00_89))));
										}
									else
										{	/* Ieee/number.scm 704 */
											if (ELONGP(BgL_yz00_89))
												{	/* Ieee/number.scm 707 */
													double BgL_r1z00_3525;

													BgL_r1z00_3525 = REAL_TO_DOUBLE(BgL_xz00_88);
													return
														DOUBLE_TO_REAL(
														(BgL_r1z00_3525 /
															(double) (BELONG_TO_LONG(BgL_yz00_89))));
												}
											else
												{	/* Ieee/number.scm 706 */
													if (LLONGP(BgL_yz00_89))
														{	/* Ieee/number.scm 708 */
															return
																DOUBLE_TO_REAL(
																(REAL_TO_DOUBLE(BgL_xz00_88) /
																	(double) (BLLONG_TO_LLONG(BgL_yz00_89))));
														}
													else
														{	/* Ieee/number.scm 708 */
															if (BIGNUMP(BgL_yz00_89))
																{	/* Ieee/number.scm 710 */
																	return
																		DOUBLE_TO_REAL(
																		(REAL_TO_DOUBLE(BgL_xz00_88) /
																			bgl_bignum_to_flonum(BgL_yz00_89)));
																}
															else
																{	/* Ieee/number.scm 710 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2552z00zz__r4_numbers_6_5z00,
																		BGl_string2530z00zz__r4_numbers_6_5z00,
																		BgL_yz00_89);
																}
														}
												}
										}
								}
						}
					else
						{	/* Ieee/number.scm 700 */
							if (ELONGP(BgL_xz00_88))
								{	/* Ieee/number.scm 714 */
									if (INTEGERP(BgL_yz00_89))
										{	/* Ieee/number.scm 717 */
											long BgL_eyz00_1206;

											{	/* Ieee/number.scm 717 */
												long BgL_auxz00_6925;

												BgL_auxz00_6925 = (long) CINT(BgL_yz00_89);
												BgL_eyz00_1206 = LONG_TO_ELONG(BgL_auxz00_6925);
											}
											{	/* Ieee/number.scm 718 */
												bool_t BgL_testz00_6928;

												{	/* Ieee/number.scm 718 */
													long BgL_arg1916z00_1210;

													{	/* Ieee/number.scm 718 */
														long BgL_n1z00_3537;

														BgL_n1z00_3537 = BELONG_TO_LONG(BgL_xz00_88);
														BgL_arg1916z00_1210 =
															(BgL_n1z00_3537 % BgL_eyz00_1206);
													}
													BgL_testz00_6928 =
														(BgL_arg1916z00_1210 == ((long) 0));
												}
												if (BgL_testz00_6928)
													{	/* Ieee/number.scm 719 */
														long BgL_za71za7_3541;

														BgL_za71za7_3541 = BELONG_TO_LONG(BgL_xz00_88);
														{	/* Ieee/number.scm 719 */
															long BgL_auxz00_6933;

															BgL_auxz00_6933 =
																(BgL_za71za7_3541 / BgL_eyz00_1206);
															return make_belong(BgL_auxz00_6933);
														}
													}
												else
													{	/* Ieee/number.scm 718 */
														return
															DOUBLE_TO_REAL(
															((double) (BELONG_TO_LONG(BgL_xz00_88)) /
																(double) ((long) CINT(BgL_yz00_89))));
										}}}
									else
										{	/* Ieee/number.scm 716 */
											if (REALP(BgL_yz00_89))
												{	/* Ieee/number.scm 722 */
													double BgL_r2z00_3547;

													BgL_r2z00_3547 = REAL_TO_DOUBLE(BgL_yz00_89);
													return
														DOUBLE_TO_REAL(
														((double) (BELONG_TO_LONG(BgL_xz00_88)) /
															BgL_r2z00_3547));
												}
											else
												{	/* Ieee/number.scm 721 */
													if (ELONGP(BgL_yz00_89))
														{	/* Ieee/number.scm 724 */
															bool_t BgL_testz00_6951;

															{	/* Ieee/number.scm 724 */
																long BgL_arg1925z00_1218;

																{	/* Ieee/number.scm 724 */
																	long BgL_n1z00_3549;

																	long BgL_n2z00_3550;

																	BgL_n1z00_3549 = BELONG_TO_LONG(BgL_xz00_88);
																	BgL_n2z00_3550 = BELONG_TO_LONG(BgL_yz00_89);
																	BgL_arg1925z00_1218 =
																		(BgL_n1z00_3549 % BgL_n2z00_3550);
																}
																BgL_testz00_6951 =
																	(BgL_arg1925z00_1218 == ((long) 0));
															}
															if (BgL_testz00_6951)
																{	/* Ieee/number.scm 725 */
																	long BgL_za71za7_3553;

																	long BgL_za72za7_3554;

																	BgL_za71za7_3553 =
																		BELONG_TO_LONG(BgL_xz00_88);
																	BgL_za72za7_3554 =
																		BELONG_TO_LONG(BgL_yz00_89);
																	{	/* Ieee/number.scm 725 */
																		long BgL_auxz00_6958;

																		BgL_auxz00_6958 =
																			(BgL_za71za7_3553 / BgL_za72za7_3554);
																		return make_belong(BgL_auxz00_6958);
																	}
																}
															else
																{	/* Ieee/number.scm 724 */
																	return
																		DOUBLE_TO_REAL(
																		((double) (BELONG_TO_LONG(BgL_xz00_88)) /
																			(double) (BELONG_TO_LONG(BgL_yz00_89))));
														}}
													else
														{	/* Ieee/number.scm 723 */
															if (LLONGP(BgL_yz00_89))
																{	/* Ieee/number.scm 728 */
																	double BgL_fxz00_1221;

																	BgL_fxz00_1221 =
																		(double) (BELONG_TO_LONG(BgL_xz00_88));
																	{	/* Ieee/number.scm 728 */
																		BGL_LONGLONG_T BgL_lxz00_1222;

																		BgL_lxz00_1222 =
																			DOUBLE_TO_LLONG(BgL_fxz00_1221);
																		{	/* Ieee/number.scm 729 */

																			{	/* Ieee/number.scm 730 */
																				bool_t BgL_testz00_6972;

																				{	/* Ieee/number.scm 730 */
																					BGL_LONGLONG_T BgL_arg1930z00_1225;

																					{	/* Ieee/number.scm 730 */
																						BGL_LONGLONG_T BgL_auxz00_6973;

																						BgL_auxz00_6973 =
																							BLLONG_TO_LLONG(BgL_yz00_89);
																						BgL_arg1930z00_1225 =
																							(BgL_lxz00_1222 %
																							BgL_auxz00_6973);
																					}
																					BgL_testz00_6972 =
																						(BgL_arg1930z00_1225 ==
																						((BGL_LONGLONG_T) 0));
																				}
																				if (BgL_testz00_6972)
																					{	/* Ieee/number.scm 731 */
																						BGL_LONGLONG_T BgL_za72za7_3563;

																						BgL_za72za7_3563 =
																							BLLONG_TO_LLONG(BgL_yz00_89);
																						return
																							make_bllong(
																							(BgL_lxz00_1222 /
																								BgL_za72za7_3563));
																					}
																				else
																					{	/* Ieee/number.scm 730 */
																						return
																							DOUBLE_TO_REAL(
																							(BgL_fxz00_1221 /
																								(double) (BLLONG_TO_LLONG
																									(BgL_yz00_89))));
																}}}}}
															else
																{	/* Ieee/number.scm 727 */
																	if (BIGNUMP(BgL_yz00_89))
																		{	/* Ieee/number.scm 734 */
																			obj_t BgL_qz00_1228;

																			{	/* Ieee/number.scm 735 */
																				obj_t BgL_arg1938z00_1233;

																				{	/* Ieee/number.scm 735 */
																					long BgL_xz00_3567;

																					BgL_xz00_3567 =
																						BELONG_TO_LONG(BgL_xz00_88);
																					BgL_arg1938z00_1233 =
																						bgl_long_to_bignum(BgL_xz00_3567);
																				}
																				BgL_qz00_1228 =
																					bgl_bignum_div(BgL_arg1938z00_1233,
																					BgL_yz00_89);
																			}
																			{	/* Ieee/number.scm 736 */
																				obj_t BgL_rz00_1229;

																				{	/* Ieee/number.scm 736 */
																					int BgL_auxz00_6989;

																					BgL_auxz00_6989 = (int) (((long) 1));
																					BgL_rz00_1229 =
																						BGL_MVALUES_VAL(BgL_auxz00_6989);
																				}
																				if (BXZERO(BgL_rz00_1229))
																					{	/* Ieee/number.scm 736 */
																						return BgL_qz00_1228;
																					}
																				else
																					{	/* Ieee/number.scm 736 */
																						return
																							DOUBLE_TO_REAL(
																							((double) (BELONG_TO_LONG
																									(BgL_xz00_88)) /
																								bgl_bignum_to_flonum
																								(BgL_yz00_89)));
																		}}}
																	else
																		{	/* Ieee/number.scm 733 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2552z00zz__r4_numbers_6_5z00,
																				BGl_string2530z00zz__r4_numbers_6_5z00,
																				BgL_yz00_89);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Ieee/number.scm 714 */
									if (LLONGP(BgL_xz00_88))
										{	/* Ieee/number.scm 741 */
											if (INTEGERP(BgL_yz00_89))
												{	/* Ieee/number.scm 744 */
													BGL_LONGLONG_T BgL_lyz00_1236;

													{	/* Ieee/number.scm 744 */
														long BgL_auxz00_7004;

														BgL_auxz00_7004 = (long) CINT(BgL_yz00_89);
														BgL_lyz00_1236 = LONG_TO_LLONG(BgL_auxz00_7004);
													}
													{	/* Ieee/number.scm 745 */
														bool_t BgL_testz00_7007;

														{	/* Ieee/number.scm 745 */
															BGL_LONGLONG_T BgL_arg1944z00_1240;

															{	/* Ieee/number.scm 745 */
																BGL_LONGLONG_T BgL_auxz00_7008;

																BgL_auxz00_7008 = BLLONG_TO_LLONG(BgL_xz00_88);
																BgL_arg1944z00_1240 =
																	(BgL_auxz00_7008 % BgL_lyz00_1236);
															}
															BgL_testz00_7007 =
																(BgL_arg1944z00_1240 == ((BGL_LONGLONG_T) 0));
														}
														if (BgL_testz00_7007)
															{	/* Ieee/number.scm 746 */
																BGL_LONGLONG_T BgL_za71za7_3580;

																BgL_za71za7_3580 = BLLONG_TO_LLONG(BgL_xz00_88);
																return
																	make_bllong(
																	(BgL_za71za7_3580 / BgL_lyz00_1236));
															}
														else
															{	/* Ieee/number.scm 745 */
																return
																	DOUBLE_TO_REAL(
																	((double) (BLLONG_TO_LLONG(BgL_xz00_88)) /
																		(double) ((long) CINT(BgL_yz00_89))));
												}}}
											else
												{	/* Ieee/number.scm 743 */
													if (REALP(BgL_yz00_89))
														{	/* Ieee/number.scm 748 */
															return
																DOUBLE_TO_REAL(
																((double) (BLLONG_TO_LLONG(BgL_xz00_88)) /
																	REAL_TO_DOUBLE(BgL_yz00_89)));
														}
													else
														{	/* Ieee/number.scm 748 */
															if (ELONGP(BgL_yz00_89))
																{	/* Ieee/number.scm 751 */
																	double BgL_fyz00_1245;

																	BgL_fyz00_1245 =
																		(double) (BELONG_TO_LONG(BgL_yz00_89));
																	{	/* Ieee/number.scm 751 */
																		BGL_LONGLONG_T BgL_lyz00_1246;

																		BgL_lyz00_1246 =
																			DOUBLE_TO_LLONG(BgL_fyz00_1245);
																		{	/* Ieee/number.scm 752 */

																			{	/* Ieee/number.scm 753 */
																				bool_t BgL_testz00_7033;

																				{	/* Ieee/number.scm 753 */
																					BGL_LONGLONG_T BgL_arg1952z00_1249;

																					{	/* Ieee/number.scm 753 */
																						BGL_LONGLONG_T BgL_auxz00_7034;

																						BgL_auxz00_7034 =
																							BLLONG_TO_LLONG(BgL_xz00_88);
																						BgL_arg1952z00_1249 =
																							(BgL_auxz00_7034 %
																							BgL_lyz00_1246);
																					}
																					BgL_testz00_7033 =
																						(BgL_arg1952z00_1249 ==
																						((BGL_LONGLONG_T) 0));
																				}
																				if (BgL_testz00_7033)
																					{	/* Ieee/number.scm 754 */
																						BGL_LONGLONG_T BgL_za71za7_3592;

																						BgL_za71za7_3592 =
																							BLLONG_TO_LLONG(BgL_xz00_88);
																						return
																							make_bllong(
																							(BgL_za71za7_3592 /
																								BgL_lyz00_1246));
																					}
																				else
																					{	/* Ieee/number.scm 753 */
																						return
																							DOUBLE_TO_REAL(
																							((double) (BLLONG_TO_LLONG
																									(BgL_xz00_88)) /
																								BgL_fyz00_1245));
																}}}}}
															else
																{	/* Ieee/number.scm 750 */
																	if (LLONGP(BgL_yz00_89))
																		{	/* Ieee/number.scm 757 */
																			bool_t BgL_testz00_7047;

																			{	/* Ieee/number.scm 757 */
																				BGL_LONGLONG_T BgL_arg1958z00_1255;

																				{	/* Ieee/number.scm 757 */
																					BGL_LONGLONG_T BgL_auxz00_7050;

																					BGL_LONGLONG_T BgL_auxz00_7048;

																					BgL_auxz00_7050 =
																						BLLONG_TO_LLONG(BgL_yz00_89);
																					BgL_auxz00_7048 =
																						BLLONG_TO_LLONG(BgL_xz00_88);
																					BgL_arg1958z00_1255 =
																						(BgL_auxz00_7048 % BgL_auxz00_7050);
																				}
																				BgL_testz00_7047 =
																					(BgL_arg1958z00_1255 ==
																					((BGL_LONGLONG_T) 0));
																			}
																			if (BgL_testz00_7047)
																				{	/* Ieee/number.scm 758 */
																					BGL_LONGLONG_T BgL_za71za7_3601;

																					BGL_LONGLONG_T BgL_za72za7_3602;

																					BgL_za71za7_3601 =
																						BLLONG_TO_LLONG(BgL_xz00_88);
																					BgL_za72za7_3602 =
																						BLLONG_TO_LLONG(BgL_yz00_89);
																					return
																						make_bllong(
																						(BgL_za71za7_3601 /
																							BgL_za72za7_3602));
																				}
																			else
																				{	/* Ieee/number.scm 757 */
																					return
																						DOUBLE_TO_REAL(
																						((double) (BLLONG_TO_LLONG
																								(BgL_xz00_88)) /
																							(double) (BLLONG_TO_LLONG
																								(BgL_yz00_89))));
																		}}
																	else
																		{	/* Ieee/number.scm 756 */
																			if (BIGNUMP(BgL_yz00_89))
																				{	/* Ieee/number.scm 761 */
																					obj_t BgL_qz00_1258;

																					BgL_qz00_1258 =
																						bgl_bignum_div(bgl_llong_to_bignum
																						(BLLONG_TO_LLONG(BgL_xz00_88)),
																						BgL_yz00_89);
																					{	/* Ieee/number.scm 763 */
																						obj_t BgL_rz00_1259;

																						{	/* Ieee/number.scm 763 */
																							int BgL_auxz00_7069;

																							BgL_auxz00_7069 =
																								(int) (((long) 1));
																							BgL_rz00_1259 =
																								BGL_MVALUES_VAL
																								(BgL_auxz00_7069);
																						}
																						if (BXZERO(BgL_rz00_1259))
																							{	/* Ieee/number.scm 763 */
																								return BgL_qz00_1258;
																							}
																						else
																							{	/* Ieee/number.scm 763 */
																								return
																									DOUBLE_TO_REAL(
																									((double) (BLLONG_TO_LLONG
																											(BgL_xz00_88)) /
																										bgl_bignum_to_flonum
																										(BgL_yz00_89)));
																				}}}
																			else
																				{	/* Ieee/number.scm 760 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_symbol2552z00zz__r4_numbers_6_5z00,
																						BGl_string2530z00zz__r4_numbers_6_5z00,
																						BgL_yz00_89);
																				}
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/number.scm 741 */
											if (BIGNUMP(BgL_xz00_88))
												{	/* Ieee/number.scm 768 */
													if (INTEGERP(BgL_yz00_89))
														{	/* Ieee/number.scm 771 */
															obj_t BgL_qz00_1266;

															BgL_qz00_1266 =
																bgl_bignum_div(BgL_xz00_88,
																bgl_long_to_bignum((long) CINT(BgL_yz00_89)));
															{	/* Ieee/number.scm 773 */
																obj_t BgL_rz00_1267;

																{	/* Ieee/number.scm 773 */
																	int BgL_auxz00_7087;

																	BgL_auxz00_7087 = (int) (((long) 1));
																	BgL_rz00_1267 =
																		BGL_MVALUES_VAL(BgL_auxz00_7087);
																}
																if (BXZERO(BgL_rz00_1267))
																	{	/* Ieee/number.scm 773 */
																		return BgL_qz00_1266;
																	}
																else
																	{	/* Ieee/number.scm 773 */
																		return
																			DOUBLE_TO_REAL(
																			(bgl_bignum_to_flonum(BgL_xz00_88) /
																				(double) ((long) CINT(BgL_yz00_89))));
														}}}
													else
														{	/* Ieee/number.scm 770 */
															if (REALP(BgL_yz00_89))
																{	/* Ieee/number.scm 776 */
																	return
																		DOUBLE_TO_REAL(
																		(bgl_bignum_to_flonum(BgL_xz00_88) /
																			REAL_TO_DOUBLE(BgL_yz00_89)));
																}
															else
																{	/* Ieee/number.scm 776 */
																	if (ELONGP(BgL_yz00_89))
																		{	/* Ieee/number.scm 779 */
																			obj_t BgL_qz00_1275;

																			{	/* Ieee/number.scm 780 */
																				obj_t BgL_arg1979z00_1280;

																				{	/* Ieee/number.scm 780 */
																					long BgL_xz00_3625;

																					BgL_xz00_3625 =
																						BELONG_TO_LONG(BgL_yz00_89);
																					BgL_arg1979z00_1280 =
																						bgl_long_to_bignum(BgL_xz00_3625);
																				}
																				BgL_qz00_1275 =
																					bgl_bignum_div(BgL_xz00_88,
																					BgL_arg1979z00_1280);
																			}
																			{	/* Ieee/number.scm 781 */
																				obj_t BgL_rz00_1276;

																				{	/* Ieee/number.scm 781 */
																					int BgL_auxz00_7108;

																					BgL_auxz00_7108 = (int) (((long) 1));
																					BgL_rz00_1276 =
																						BGL_MVALUES_VAL(BgL_auxz00_7108);
																				}
																				if (BXZERO(BgL_rz00_1276))
																					{	/* Ieee/number.scm 781 */
																						return BgL_qz00_1275;
																					}
																				else
																					{	/* Ieee/number.scm 781 */
																						return
																							DOUBLE_TO_REAL(
																							(bgl_bignum_to_flonum(BgL_xz00_88)
																								/
																								(double) (BELONG_TO_LONG
																									(BgL_yz00_89))));
																		}}}
																	else
																		{	/* Ieee/number.scm 778 */
																			if (LLONGP(BgL_yz00_89))
																				{	/* Ieee/number.scm 785 */
																					obj_t BgL_qz00_1282;

																					BgL_qz00_1282 =
																						bgl_bignum_div(BgL_xz00_88,
																						bgl_llong_to_bignum(BLLONG_TO_LLONG
																							(BgL_yz00_89)));
																					{	/* Ieee/number.scm 787 */
																						obj_t BgL_rz00_1283;

																						{	/* Ieee/number.scm 787 */
																							int BgL_auxz00_7123;

																							BgL_auxz00_7123 =
																								(int) (((long) 1));
																							BgL_rz00_1283 =
																								BGL_MVALUES_VAL
																								(BgL_auxz00_7123);
																						}
																						if (BXZERO(BgL_rz00_1283))
																							{	/* Ieee/number.scm 787 */
																								return BgL_qz00_1282;
																							}
																						else
																							{	/* Ieee/number.scm 787 */
																								return
																									DOUBLE_TO_REAL(
																									(bgl_bignum_to_flonum
																										(BgL_xz00_88) /
																										(double) (BLLONG_TO_LLONG
																											(BgL_yz00_89))));
																				}}}
																			else
																				{	/* Ieee/number.scm 784 */
																					if (BIGNUMP(BgL_yz00_89))
																						{	/* Ieee/number.scm 791 */
																							obj_t BgL_qz00_1289;

																							BgL_qz00_1289 =
																								bgl_bignum_div(BgL_xz00_88,
																								BgL_yz00_89);
																							{	/* Ieee/number.scm 793 */
																								obj_t BgL_rz00_1290;

																								{	/* Ieee/number.scm 793 */
																									int BgL_auxz00_7136;

																									BgL_auxz00_7136 =
																										(int) (((long) 1));
																									BgL_rz00_1290 =
																										BGL_MVALUES_VAL
																										(BgL_auxz00_7136);
																								}
																								if (BXZERO(BgL_rz00_1290))
																									{	/* Ieee/number.scm 793 */
																										return BgL_qz00_1289;
																									}
																								else
																									{	/* Ieee/number.scm 793 */
																										return
																											DOUBLE_TO_REAL(
																											(bgl_bignum_to_flonum
																												(BgL_xz00_88) /
																												bgl_bignum_to_flonum
																												(BgL_yz00_89)));
																									}
																							}
																						}
																					else
																						{	/* Ieee/number.scm 790 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_symbol2552z00zz__r4_numbers_6_5z00,
																								BGl_string2530z00zz__r4_numbers_6_5z00,
																								BgL_yz00_89);
																						}
																				}
																		}
																}
														}
												}
											else
												{	/* Ieee/number.scm 768 */
													return
														BGl_errorz00zz__errorz00
														(BGl_zf2zd2envz20zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_88);
												}
										}
								}
						}
				}
		}
	}



/* _2/ */
	obj_t BGl__2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4388,
		obj_t BgL_xz00_4389, obj_t BgL_yz00_4390)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 672 */
			return BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_4389, BgL_yz00_4390);
		}
	}



/* / */
	BGL_EXPORTED_DEF obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_90,
		obj_t BgL_yz00_91)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 804 */
			if (PAIRP(BgL_yz00_91))
				{	/* Ieee/number.scm 806 */
					obj_t BgL_g1104z00_1295;

					obj_t BgL_g1105z00_1296;

					BgL_g1104z00_1295 =
						BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_90, CAR(BgL_yz00_91));
					BgL_g1105z00_1296 = CDR(BgL_yz00_91);
					{
						obj_t BgL_resultz00_3649;

						obj_t BgL_za7za7_3650;

						BgL_resultz00_3649 = BgL_g1104z00_1295;
						BgL_za7za7_3650 = BgL_g1105z00_1296;
					BgL_loopz00_3648:
						if (PAIRP(BgL_za7za7_3650))
							{
								obj_t BgL_za7za7_7158;

								obj_t BgL_resultz00_7155;

								BgL_resultz00_7155 =
									BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_resultz00_3649,
									CAR(BgL_za7za7_3650));
								BgL_za7za7_7158 = CDR(BgL_za7za7_3650);
								BgL_za7za7_3650 = BgL_za7za7_7158;
								BgL_resultz00_3649 = BgL_resultz00_7155;
								goto BgL_loopz00_3648;
							}
						else
							{	/* Ieee/number.scm 806 */
								return BgL_resultz00_3649;
							}
					}
				}
			else
				{	/* Ieee/number.scm 805 */
					return
						BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(((long) 1)), BgL_xz00_90);
		}}
	}



/* _/ */
	obj_t BGl__zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4391,
		obj_t BgL_xz00_4392, obj_t BgL_yz00_4393)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 804 */
			return BGl_zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_4392, BgL_yz00_4393);
		}
	}



/* abs */
	BGL_EXPORTED_DEF obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_92)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 817 */
			if (INTEGERP(BgL_xz00_92))
				{	/* Ieee/number.scm 819 */
					if (((long) CINT(BgL_xz00_92) == (LONG_MIN >> TAG_SHIFT)))
						{	/* Ieee/number.scm 820 */
							return
								bgl_bignum_neg(bgl_long_to_bignum((long) CINT(BgL_xz00_92)));
						}
					else
						{	/* Ieee/number.scm 822 */
							long BgL_nz00_3683;

							BgL_nz00_3683 = (long) CINT(BgL_xz00_92);
							if ((BgL_nz00_3683 < ((long) 0)))
								{	/* Ieee/number.scm 822 */
									return BINT(NEG(BgL_nz00_3683));
								}
							else
								{	/* Ieee/number.scm 822 */
									return BINT(BgL_nz00_3683);
								}
						}
				}
			else
				{	/* Ieee/number.scm 819 */
					if (REALP(BgL_xz00_92))
						{	/* Ieee/number.scm 823 */
							return DOUBLE_TO_REAL(fabs(REAL_TO_DOUBLE(BgL_xz00_92)));
						}
					else
						{	/* Ieee/number.scm 823 */
							if (ELONGP(BgL_xz00_92))
								{	/* Ieee/number.scm 826 */
									bool_t BgL_testz00_7184;

									{	/* Ieee/number.scm 826 */
										long BgL_n1z00_3692;

										BgL_n1z00_3692 = BELONG_TO_LONG(BgL_xz00_92);
										BgL_testz00_7184 = (BgL_n1z00_3692 == LONG_MIN);
									}
									if (BgL_testz00_7184)
										{	/* Ieee/number.scm 827 */
											obj_t BgL_auxz00_7187;

											{	/* Ieee/number.scm 827 */
												long BgL_xz00_3694;

												BgL_xz00_3694 = BELONG_TO_LONG(BgL_xz00_92);
												BgL_auxz00_7187 = bgl_long_to_bignum(BgL_xz00_3694);
											}
											return bgl_bignum_neg(BgL_auxz00_7187);
										}
									else
										{	/* Ieee/number.scm 828 */
											long BgL_nz00_3696;

											BgL_nz00_3696 = BELONG_TO_LONG(BgL_xz00_92);
											if ((BgL_nz00_3696 < ((long) 0)))
												{	/* Ieee/number.scm 828 */
													long BgL_auxz00_7194;

													BgL_auxz00_7194 = NEG(BgL_nz00_3696);
													return make_belong(BgL_auxz00_7194);
												}
											else
												{	/* Ieee/number.scm 828 */
													return make_belong(BgL_nz00_3696);
												}
										}
								}
							else
								{	/* Ieee/number.scm 825 */
									if (LLONGP(BgL_xz00_92))
										{	/* Ieee/number.scm 829 */
											if ((BLLONG_TO_LLONG(BgL_xz00_92) == BGL_LONGLONG_MIN))
												{	/* Ieee/number.scm 830 */
													return
														bgl_bignum_neg(bgl_llong_to_bignum(BLLONG_TO_LLONG
															(BgL_xz00_92)));
												}
											else
												{	/* Ieee/number.scm 832 */
													BGL_LONGLONG_T BgL_nz00_3707;

													BgL_nz00_3707 = BLLONG_TO_LLONG(BgL_xz00_92);
													if ((BgL_nz00_3707 < ((BGL_LONGLONG_T) 0)))
														{	/* Ieee/number.scm 832 */
															return make_bllong(NEG(BgL_nz00_3707));
														}
													else
														{	/* Ieee/number.scm 832 */
															return make_bllong(BgL_nz00_3707);
														}
												}
										}
									else
										{	/* Ieee/number.scm 829 */
											if (BIGNUMP(BgL_xz00_92))
												{	/* Ieee/number.scm 833 */
													return bgl_bignum_abs(BgL_xz00_92);
												}
											else
												{	/* Ieee/number.scm 833 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2554z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_92);
												}
										}
								}
						}
				}
		}
	}



/* _abs */
	obj_t BGl__absz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4394,
		obj_t BgL_xz00_4395)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 817 */
			return BGl_absz00zz__r4_numbers_6_5z00(BgL_xz00_4395);
		}
	}



/* floor */
	BGL_EXPORTED_DEF obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_93)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 841 */
			if (INTEGERP(BgL_xz00_93))
				{	/* Ieee/number.scm 843 */
					return BgL_xz00_93;
				}
			else
				{	/* Ieee/number.scm 843 */
					if (REALP(BgL_xz00_93))
						{	/* Ieee/number.scm 846 */
							double BgL_rz00_3717;

							BgL_rz00_3717 = REAL_TO_DOUBLE(BgL_xz00_93);
							return DOUBLE_TO_REAL(floor(BgL_rz00_3717));
						}
					else
						{	/* Ieee/number.scm 845 */
							if (ELONGP(BgL_xz00_93))
								{	/* Ieee/number.scm 847 */
									return BgL_xz00_93;
								}
							else
								{	/* Ieee/number.scm 847 */
									if (LLONGP(BgL_xz00_93))
										{	/* Ieee/number.scm 849 */
											return BgL_xz00_93;
										}
									else
										{	/* Ieee/number.scm 849 */
											if (BIGNUMP(BgL_xz00_93))
												{	/* Ieee/number.scm 851 */
													return BgL_xz00_93;
												}
											else
												{	/* Ieee/number.scm 851 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2555z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_93);
												}
										}
								}
						}
				}
		}
	}



/* _floor */
	obj_t BGl__floorz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4396,
		obj_t BgL_xz00_4397)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 841 */
			return BGl_floorz00zz__r4_numbers_6_5z00(BgL_xz00_4397);
		}
	}



/* ceiling */
	BGL_EXPORTED_DEF obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_94)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 859 */
			if (INTEGERP(BgL_xz00_94))
				{	/* Ieee/number.scm 861 */
					return BgL_xz00_94;
				}
			else
				{	/* Ieee/number.scm 861 */
					if (REALP(BgL_xz00_94))
						{	/* Ieee/number.scm 864 */
							double BgL_rz00_3723;

							BgL_rz00_3723 = REAL_TO_DOUBLE(BgL_xz00_94);
							return DOUBLE_TO_REAL(ceil(BgL_rz00_3723));
						}
					else
						{	/* Ieee/number.scm 863 */
							if (ELONGP(BgL_xz00_94))
								{	/* Ieee/number.scm 865 */
									return BgL_xz00_94;
								}
							else
								{	/* Ieee/number.scm 865 */
									if (LLONGP(BgL_xz00_94))
										{	/* Ieee/number.scm 867 */
											return BgL_xz00_94;
										}
									else
										{	/* Ieee/number.scm 867 */
											if (BIGNUMP(BgL_xz00_94))
												{	/* Ieee/number.scm 869 */
													return BgL_xz00_94;
												}
											else
												{	/* Ieee/number.scm 869 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2556z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_94);
												}
										}
								}
						}
				}
		}
	}



/* _ceiling */
	obj_t BGl__ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4398,
		obj_t BgL_xz00_4399)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 859 */
			return BGl_ceilingz00zz__r4_numbers_6_5z00(BgL_xz00_4399);
		}
	}



/* truncate */
	BGL_EXPORTED_DEF obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t BgL_xz00_95)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 877 */
			if (INTEGERP(BgL_xz00_95))
				{	/* Ieee/number.scm 879 */
					return BgL_xz00_95;
				}
			else
				{	/* Ieee/number.scm 879 */
					if (REALP(BgL_xz00_95))
						{	/* Ieee/number.scm 882 */
							double BgL_res2461z00_3736;

							{	/* Ieee/number.scm 882 */
								double BgL_rz00_3729;

								BgL_rz00_3729 = REAL_TO_DOUBLE(BgL_xz00_95);
								if ((BgL_rz00_3729 < ((double) 0.0)))
									{	/* Ieee/number.scm 882 */
										BgL_res2461z00_3736 = ceil(BgL_rz00_3729);
									}
								else
									{	/* Ieee/number.scm 882 */
										BgL_res2461z00_3736 = floor(BgL_rz00_3729);
									}
							}
							return DOUBLE_TO_REAL(BgL_res2461z00_3736);
						}
					else
						{	/* Ieee/number.scm 881 */
							if (ELONGP(BgL_xz00_95))
								{	/* Ieee/number.scm 883 */
									return BgL_xz00_95;
								}
							else
								{	/* Ieee/number.scm 883 */
									if (LLONGP(BgL_xz00_95))
										{	/* Ieee/number.scm 885 */
											return BgL_xz00_95;
										}
									else
										{	/* Ieee/number.scm 885 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2557z00zz__r4_numbers_6_5z00,
												BGl_string2530z00zz__r4_numbers_6_5z00, BgL_xz00_95);
										}
								}
						}
				}
		}
	}



/* _truncate */
	obj_t BGl__truncatez00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4400,
		obj_t BgL_xz00_4401)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 877 */
			return BGl_truncatez00zz__r4_numbers_6_5z00(BgL_xz00_4401);
		}
	}



/* round */
	BGL_EXPORTED_DEF obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_96)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 893 */
			if (INTEGERP(BgL_xz00_96))
				{	/* Ieee/number.scm 895 */
					return BgL_xz00_96;
				}
			else
				{	/* Ieee/number.scm 895 */
					if (REALP(BgL_xz00_96))
						{	/* Ieee/number.scm 897 */
							return
								DOUBLE_TO_REAL(BGl_roundflz00zz__r4_numbers_6_5_flonumz00
								(REAL_TO_DOUBLE(BgL_xz00_96)));
						}
					else
						{	/* Ieee/number.scm 897 */
							if (ELONGP(BgL_xz00_96))
								{	/* Ieee/number.scm 899 */
									return BgL_xz00_96;
								}
							else
								{	/* Ieee/number.scm 899 */
									if (LLONGP(BgL_xz00_96))
										{	/* Ieee/number.scm 901 */
											return BgL_xz00_96;
										}
									else
										{	/* Ieee/number.scm 901 */
											if (BIGNUMP(BgL_xz00_96))
												{	/* Ieee/number.scm 903 */
													return BgL_xz00_96;
												}
											else
												{	/* Ieee/number.scm 903 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string2558z00zz__r4_numbers_6_5z00,
														BGl_string2530z00zz__r4_numbers_6_5z00,
														BgL_xz00_96);
												}
										}
								}
						}
				}
		}
	}



/* _round */
	obj_t BGl__roundz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4402,
		obj_t BgL_xz00_4403)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 893 */
			return BGl_roundz00zz__r4_numbers_6_5z00(BgL_xz00_4403);
		}
	}



/* exp */
	BGL_EXPORTED_DEF double BGl_expz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_97)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 911 */
			if (REALP(BgL_xz00_97))
				{	/* Ieee/number.scm 913 */
					return exp(REAL_TO_DOUBLE(BgL_xz00_97));
				}
			else
				{	/* Ieee/number.scm 913 */
					if (INTEGERP(BgL_xz00_97))
						{	/* Ieee/number.scm 915 */
							return exp((double) ((long) CINT(BgL_xz00_97)));
						}
					else
						{	/* Ieee/number.scm 915 */
							if (ELONGP(BgL_xz00_97))
								{	/* Ieee/number.scm 917 */
									return exp((double) (BELONG_TO_LONG(BgL_xz00_97)));
								}
							else
								{	/* Ieee/number.scm 917 */
									if (LLONGP(BgL_xz00_97))
										{	/* Ieee/number.scm 919 */
											return exp((double) (BLLONG_TO_LLONG(BgL_xz00_97)));
										}
									else
										{	/* Ieee/number.scm 919 */
											if (BIGNUMP(BgL_xz00_97))
												{	/* Ieee/number.scm 921 */
													return exp(bgl_bignum_to_flonum(BgL_xz00_97));
												}
											else
												{	/* Ieee/number.scm 921 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2559z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_97));
												}
										}
								}
						}
				}
		}
	}



/* _exp */
	obj_t BGl__expz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4404,
		obj_t BgL_xz00_4405)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 911 */
			return DOUBLE_TO_REAL(BGl_expz00zz__r4_numbers_6_5z00(BgL_xz00_4405));
		}
	}



/* log */
	BGL_EXPORTED_DEF double BGl_logz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_98)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 929 */
			if (REALP(BgL_xz00_98))
				{	/* Ieee/number.scm 931 */
					return log(REAL_TO_DOUBLE(BgL_xz00_98));
				}
			else
				{	/* Ieee/number.scm 931 */
					if (INTEGERP(BgL_xz00_98))
						{	/* Ieee/number.scm 933 */
							return log((double) ((long) CINT(BgL_xz00_98)));
						}
					else
						{	/* Ieee/number.scm 933 */
							if (ELONGP(BgL_xz00_98))
								{	/* Ieee/number.scm 935 */
									return log((double) (BELONG_TO_LONG(BgL_xz00_98)));
								}
							else
								{	/* Ieee/number.scm 935 */
									if (LLONGP(BgL_xz00_98))
										{	/* Ieee/number.scm 937 */
											return log((double) (BLLONG_TO_LLONG(BgL_xz00_98)));
										}
									else
										{	/* Ieee/number.scm 937 */
											if (BIGNUMP(BgL_xz00_98))
												{	/* Ieee/number.scm 939 */
													return log(bgl_bignum_to_flonum(BgL_xz00_98));
												}
											else
												{	/* Ieee/number.scm 939 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2560z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_98));
												}
										}
								}
						}
				}
		}
	}



/* _log */
	obj_t BGl__logz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4406,
		obj_t BgL_xz00_4407)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 929 */
			return DOUBLE_TO_REAL(BGl_logz00zz__r4_numbers_6_5z00(BgL_xz00_4407));
		}
	}



/* sin */
	BGL_EXPORTED_DEF double BGl_sinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_99)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 947 */
			if (REALP(BgL_xz00_99))
				{	/* Ieee/number.scm 949 */
					return sin(REAL_TO_DOUBLE(BgL_xz00_99));
				}
			else
				{	/* Ieee/number.scm 949 */
					if (INTEGERP(BgL_xz00_99))
						{	/* Ieee/number.scm 951 */
							return sin((double) ((long) CINT(BgL_xz00_99)));
						}
					else
						{	/* Ieee/number.scm 951 */
							if (ELONGP(BgL_xz00_99))
								{	/* Ieee/number.scm 953 */
									return sin((double) (BELONG_TO_LONG(BgL_xz00_99)));
								}
							else
								{	/* Ieee/number.scm 953 */
									if (LLONGP(BgL_xz00_99))
										{	/* Ieee/number.scm 955 */
											return sin((double) (BLLONG_TO_LLONG(BgL_xz00_99)));
										}
									else
										{	/* Ieee/number.scm 955 */
											if (BIGNUMP(BgL_xz00_99))
												{	/* Ieee/number.scm 957 */
													return sin(bgl_bignum_to_flonum(BgL_xz00_99));
												}
											else
												{	/* Ieee/number.scm 957 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2561z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_99));
												}
										}
								}
						}
				}
		}
	}



/* _sin */
	obj_t BGl__sinz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4408,
		obj_t BgL_xz00_4409)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 947 */
			return DOUBLE_TO_REAL(BGl_sinz00zz__r4_numbers_6_5z00(BgL_xz00_4409));
		}
	}



/* cos */
	BGL_EXPORTED_DEF double BGl_cosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_100)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 965 */
			if (REALP(BgL_xz00_100))
				{	/* Ieee/number.scm 967 */
					return cos(REAL_TO_DOUBLE(BgL_xz00_100));
				}
			else
				{	/* Ieee/number.scm 967 */
					if (INTEGERP(BgL_xz00_100))
						{	/* Ieee/number.scm 969 */
							return cos((double) ((long) CINT(BgL_xz00_100)));
						}
					else
						{	/* Ieee/number.scm 969 */
							if (ELONGP(BgL_xz00_100))
								{	/* Ieee/number.scm 971 */
									return cos((double) (BELONG_TO_LONG(BgL_xz00_100)));
								}
							else
								{	/* Ieee/number.scm 971 */
									if (LLONGP(BgL_xz00_100))
										{	/* Ieee/number.scm 973 */
											return cos((double) (BLLONG_TO_LLONG(BgL_xz00_100)));
										}
									else
										{	/* Ieee/number.scm 973 */
											if (BIGNUMP(BgL_xz00_100))
												{	/* Ieee/number.scm 975 */
													return cos(bgl_bignum_to_flonum(BgL_xz00_100));
												}
											else
												{	/* Ieee/number.scm 975 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2562z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_100));
												}
										}
								}
						}
				}
		}
	}



/* _cos */
	obj_t BGl__cosz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4410,
		obj_t BgL_xz00_4411)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 965 */
			return DOUBLE_TO_REAL(BGl_cosz00zz__r4_numbers_6_5z00(BgL_xz00_4411));
		}
	}



/* tan */
	BGL_EXPORTED_DEF double BGl_tanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_101)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 983 */
			if (REALP(BgL_xz00_101))
				{	/* Ieee/number.scm 985 */
					return tan(REAL_TO_DOUBLE(BgL_xz00_101));
				}
			else
				{	/* Ieee/number.scm 985 */
					if (INTEGERP(BgL_xz00_101))
						{	/* Ieee/number.scm 987 */
							return tan((double) ((long) CINT(BgL_xz00_101)));
						}
					else
						{	/* Ieee/number.scm 987 */
							if (ELONGP(BgL_xz00_101))
								{	/* Ieee/number.scm 989 */
									return tan((double) (BELONG_TO_LONG(BgL_xz00_101)));
								}
							else
								{	/* Ieee/number.scm 989 */
									if (LLONGP(BgL_xz00_101))
										{	/* Ieee/number.scm 991 */
											return tan((double) (BLLONG_TO_LLONG(BgL_xz00_101)));
										}
									else
										{	/* Ieee/number.scm 991 */
											if (BIGNUMP(BgL_xz00_101))
												{	/* Ieee/number.scm 993 */
													return tan(bgl_bignum_to_flonum(BgL_xz00_101));
												}
											else
												{	/* Ieee/number.scm 993 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2563z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_101));
												}
										}
								}
						}
				}
		}
	}



/* _tan */
	obj_t BGl__tanz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4412,
		obj_t BgL_xz00_4413)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 983 */
			return DOUBLE_TO_REAL(BGl_tanz00zz__r4_numbers_6_5z00(BgL_xz00_4413));
		}
	}



/* asin */
	BGL_EXPORTED_DEF double BGl_asinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_102)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1001 */
			if (REALP(BgL_xz00_102))
				{	/* Ieee/number.scm 1003 */
					return asin(REAL_TO_DOUBLE(BgL_xz00_102));
				}
			else
				{	/* Ieee/number.scm 1003 */
					if (INTEGERP(BgL_xz00_102))
						{	/* Ieee/number.scm 1005 */
							return asin((double) ((long) CINT(BgL_xz00_102)));
						}
					else
						{	/* Ieee/number.scm 1005 */
							if (ELONGP(BgL_xz00_102))
								{	/* Ieee/number.scm 1007 */
									return asin((double) (BELONG_TO_LONG(BgL_xz00_102)));
								}
							else
								{	/* Ieee/number.scm 1007 */
									if (LLONGP(BgL_xz00_102))
										{	/* Ieee/number.scm 1009 */
											return asin((double) (BLLONG_TO_LLONG(BgL_xz00_102)));
										}
									else
										{	/* Ieee/number.scm 1009 */
											if (BIGNUMP(BgL_xz00_102))
												{	/* Ieee/number.scm 1011 */
													return asin(bgl_bignum_to_flonum(BgL_xz00_102));
												}
											else
												{	/* Ieee/number.scm 1011 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2564z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_102));
												}
										}
								}
						}
				}
		}
	}



/* _asin */
	obj_t BGl__asinz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4414,
		obj_t BgL_xz00_4415)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1001 */
			return DOUBLE_TO_REAL(BGl_asinz00zz__r4_numbers_6_5z00(BgL_xz00_4415));
		}
	}



/* acos */
	BGL_EXPORTED_DEF double BGl_acosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_103)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1019 */
			if (REALP(BgL_xz00_103))
				{	/* Ieee/number.scm 1021 */
					return acos(REAL_TO_DOUBLE(BgL_xz00_103));
				}
			else
				{	/* Ieee/number.scm 1021 */
					if (INTEGERP(BgL_xz00_103))
						{	/* Ieee/number.scm 1023 */
							return acos((double) ((long) CINT(BgL_xz00_103)));
						}
					else
						{	/* Ieee/number.scm 1023 */
							if (ELONGP(BgL_xz00_103))
								{	/* Ieee/number.scm 1025 */
									return acos((double) (BELONG_TO_LONG(BgL_xz00_103)));
								}
							else
								{	/* Ieee/number.scm 1025 */
									if (LLONGP(BgL_xz00_103))
										{	/* Ieee/number.scm 1027 */
											return acos((double) (BLLONG_TO_LLONG(BgL_xz00_103)));
										}
									else
										{	/* Ieee/number.scm 1027 */
											if (BIGNUMP(BgL_xz00_103))
												{	/* Ieee/number.scm 1029 */
													return acos(bgl_bignum_to_flonum(BgL_xz00_103));
												}
											else
												{	/* Ieee/number.scm 1029 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2565z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_103));
												}
										}
								}
						}
				}
		}
	}



/* _acos */
	obj_t BGl__acosz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4416,
		obj_t BgL_xz00_4417)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1019 */
			return DOUBLE_TO_REAL(BGl_acosz00zz__r4_numbers_6_5z00(BgL_xz00_4417));
		}
	}



/* atan */
	BGL_EXPORTED_DEF double BGl_atanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_104,
		obj_t BgL_yz00_105)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1037 */
			{	/* Ieee/number.scm 1038 */
				obj_t BgL_yz00_1403;

				if (PAIRP(BgL_yz00_105))
					{	/* Ieee/number.scm 1039 */
						obj_t BgL_yz00_1419;

						BgL_yz00_1419 = CAR(BgL_yz00_105);
						if (INTEGERP(BgL_yz00_1419))
							{	/* Ieee/number.scm 1041 */
								BgL_yz00_1403 =
									DOUBLE_TO_REAL((double) ((long) CINT(BgL_yz00_1419)));
							}
						else
							{	/* Ieee/number.scm 1041 */
								if (REALP(BgL_yz00_1419))
									{	/* Ieee/number.scm 1043 */
										BgL_yz00_1403 = BgL_yz00_1419;
									}
								else
									{	/* Ieee/number.scm 1043 */
										BgL_yz00_1403 =
											BGl_errorz00zz__errorz00
											(BGl_string2566z00zz__r4_numbers_6_5z00,
											BGl_string2530z00zz__r4_numbers_6_5z00, BgL_yz00_1419);
									}
							}
					}
				else
					{	/* Ieee/number.scm 1038 */
						BgL_yz00_1403 = BFALSE;
					}
				if (REALP(BgL_xz00_104))
					{	/* Ieee/number.scm 1054 */
						obj_t BgL_xz00_3825;

						BgL_xz00_3825 = BgL_xz00_104;
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
							{	/* Ieee/number.scm 1054 */
								double BgL_res2462z00_3838;

								{	/* Ieee/number.scm 1054 */
									double BgL_xz00_3827;

									double BgL_yz00_3828;

									BgL_xz00_3827 = REAL_TO_DOUBLE(BgL_xz00_3825);
									BgL_yz00_3828 = REAL_TO_DOUBLE(BgL_yz00_1403);
									{	/* Ieee/number.scm 1054 */
										bool_t BgL_testz00_7484;

										if ((BgL_xz00_3827 == ((double) 0.0)))
											{	/* Ieee/number.scm 1054 */
												BgL_testz00_7484 = (BgL_yz00_3828 == ((double) 0.0));
											}
										else
											{	/* Ieee/number.scm 1054 */
												BgL_testz00_7484 = ((bool_t) 0);
											}
										if (BgL_testz00_7484)
											{	/* Ieee/number.scm 1054 */
												obj_t BgL_procz00_3831;

												obj_t BgL_msgz00_3832;

												BgL_procz00_3831 =
													string_to_bstring(BSTRING_TO_STRING
													(BGl_string2567z00zz__r4_numbers_6_5z00));
												BgL_msgz00_3832 =
													string_to_bstring(BSTRING_TO_STRING
													(BGl_string2568z00zz__r4_numbers_6_5z00));
												the_failure(BgL_procz00_3831, BgL_msgz00_3832,
													BGl_real2569z00zz__r4_numbers_6_5z00);
												BgL_res2462z00_3838 = ((double) 0.0);
											}
										else
											{	/* Ieee/number.scm 1054 */
												BgL_res2462z00_3838 =
													atan2(BgL_xz00_3827, BgL_yz00_3828);
											}
									}
								}
								return BgL_res2462z00_3838;
							}
						else
							{	/* Ieee/number.scm 1054 */
								return atan(REAL_TO_DOUBLE(BgL_xz00_3825));
							}
					}
				else
					{	/* Ieee/number.scm 1053 */
						if (INTEGERP(BgL_xz00_104))
							{	/* Ieee/number.scm 1056 */
								double BgL_arg2101z00_1407;

								BgL_arg2101z00_1407 = (double) ((long) CINT(BgL_xz00_104));
								if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
									{	/* Ieee/number.scm 1056 */
										double BgL_res2463z00_3854;

										{	/* Ieee/number.scm 1056 */
											double BgL_yz00_3844;

											BgL_yz00_3844 = REAL_TO_DOUBLE(BgL_yz00_1403);
											{	/* Ieee/number.scm 1056 */
												bool_t BgL_testz00_7503;

												if ((BgL_arg2101z00_1407 == ((double) 0.0)))
													{	/* Ieee/number.scm 1056 */
														BgL_testz00_7503 =
															(BgL_yz00_3844 == ((double) 0.0));
													}
												else
													{	/* Ieee/number.scm 1056 */
														BgL_testz00_7503 = ((bool_t) 0);
													}
												if (BgL_testz00_7503)
													{	/* Ieee/number.scm 1056 */
														obj_t BgL_procz00_3847;

														obj_t BgL_msgz00_3848;

														BgL_procz00_3847 =
															string_to_bstring(BSTRING_TO_STRING
															(BGl_string2567z00zz__r4_numbers_6_5z00));
														BgL_msgz00_3848 =
															string_to_bstring(BSTRING_TO_STRING
															(BGl_string2568z00zz__r4_numbers_6_5z00));
														the_failure(BgL_procz00_3847, BgL_msgz00_3848,
															BGl_real2569z00zz__r4_numbers_6_5z00);
														BgL_res2463z00_3854 = ((double) 0.0);
													}
												else
													{	/* Ieee/number.scm 1056 */
														BgL_res2463z00_3854 =
															atan2(BgL_arg2101z00_1407, BgL_yz00_3844);
													}
											}
										}
										return BgL_res2463z00_3854;
									}
								else
									{	/* Ieee/number.scm 1056 */
										return atan(BgL_arg2101z00_1407);
									}
							}
						else
							{	/* Ieee/number.scm 1055 */
								if (ELONGP(BgL_xz00_104))
									{	/* Ieee/number.scm 1058 */
										double BgL_arg2103z00_1409;

										BgL_arg2103z00_1409 =
											(double) (BELONG_TO_LONG(BgL_xz00_104));
										if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
											{	/* Ieee/number.scm 1058 */
												double BgL_res2464z00_3870;

												{	/* Ieee/number.scm 1058 */
													double BgL_yz00_3860;

													BgL_yz00_3860 = REAL_TO_DOUBLE(BgL_yz00_1403);
													{	/* Ieee/number.scm 1058 */
														bool_t BgL_testz00_7521;

														if ((BgL_arg2103z00_1409 == ((double) 0.0)))
															{	/* Ieee/number.scm 1058 */
																BgL_testz00_7521 =
																	(BgL_yz00_3860 == ((double) 0.0));
															}
														else
															{	/* Ieee/number.scm 1058 */
																BgL_testz00_7521 = ((bool_t) 0);
															}
														if (BgL_testz00_7521)
															{	/* Ieee/number.scm 1058 */
																obj_t BgL_procz00_3863;

																obj_t BgL_msgz00_3864;

																BgL_procz00_3863 =
																	string_to_bstring(BSTRING_TO_STRING
																	(BGl_string2567z00zz__r4_numbers_6_5z00));
																BgL_msgz00_3864 =
																	string_to_bstring(BSTRING_TO_STRING
																	(BGl_string2568z00zz__r4_numbers_6_5z00));
																the_failure(BgL_procz00_3863, BgL_msgz00_3864,
																	BGl_real2569z00zz__r4_numbers_6_5z00);
																BgL_res2464z00_3870 = ((double) 0.0);
															}
														else
															{	/* Ieee/number.scm 1058 */
																BgL_res2464z00_3870 =
																	atan2(BgL_arg2103z00_1409, BgL_yz00_3860);
															}
													}
												}
												return BgL_res2464z00_3870;
											}
										else
											{	/* Ieee/number.scm 1058 */
												return atan(BgL_arg2103z00_1409);
											}
									}
								else
									{	/* Ieee/number.scm 1057 */
										if (LLONGP(BgL_xz00_104))
											{	/* Ieee/number.scm 1060 */
												double BgL_arg2105z00_1411;

												BgL_arg2105z00_1411 =
													(double) (BLLONG_TO_LLONG(BgL_xz00_104));
												if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
													(BgL_yz00_1403))
													{	/* Ieee/number.scm 1060 */
														double BgL_res2465z00_3886;

														{	/* Ieee/number.scm 1060 */
															double BgL_yz00_3876;

															BgL_yz00_3876 = REAL_TO_DOUBLE(BgL_yz00_1403);
															{	/* Ieee/number.scm 1060 */
																bool_t BgL_testz00_7539;

																if ((BgL_arg2105z00_1411 == ((double) 0.0)))
																	{	/* Ieee/number.scm 1060 */
																		BgL_testz00_7539 =
																			(BgL_yz00_3876 == ((double) 0.0));
																	}
																else
																	{	/* Ieee/number.scm 1060 */
																		BgL_testz00_7539 = ((bool_t) 0);
																	}
																if (BgL_testz00_7539)
																	{	/* Ieee/number.scm 1060 */
																		obj_t BgL_procz00_3879;

																		obj_t BgL_msgz00_3880;

																		BgL_procz00_3879 =
																			string_to_bstring(BSTRING_TO_STRING
																			(BGl_string2567z00zz__r4_numbers_6_5z00));
																		BgL_msgz00_3880 =
																			string_to_bstring(BSTRING_TO_STRING
																			(BGl_string2568z00zz__r4_numbers_6_5z00));
																		the_failure(BgL_procz00_3879,
																			BgL_msgz00_3880,
																			BGl_real2569z00zz__r4_numbers_6_5z00);
																		BgL_res2465z00_3886 = ((double) 0.0);
																	}
																else
																	{	/* Ieee/number.scm 1060 */
																		BgL_res2465z00_3886 =
																			atan2(BgL_arg2105z00_1411, BgL_yz00_3876);
																	}
															}
														}
														return BgL_res2465z00_3886;
													}
												else
													{	/* Ieee/number.scm 1060 */
														return atan(BgL_arg2105z00_1411);
													}
											}
										else
											{	/* Ieee/number.scm 1059 */
												if (BIGNUMP(BgL_xz00_104))
													{	/* Ieee/number.scm 1062 */
														double BgL_arg2107z00_1413;

														BgL_arg2107z00_1413 =
															bgl_bignum_to_flonum(BgL_xz00_104);
														if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
															(BgL_yz00_1403))
															{	/* Ieee/number.scm 1062 */
																double BgL_res2466z00_3903;

																{	/* Ieee/number.scm 1062 */
																	double BgL_yz00_3893;

																	BgL_yz00_3893 = REAL_TO_DOUBLE(BgL_yz00_1403);
																	{	/* Ieee/number.scm 1062 */
																		bool_t BgL_testz00_7556;

																		if ((BgL_arg2107z00_1413 == ((double) 0.0)))
																			{	/* Ieee/number.scm 1062 */
																				BgL_testz00_7556 =
																					(BgL_yz00_3893 == ((double) 0.0));
																			}
																		else
																			{	/* Ieee/number.scm 1062 */
																				BgL_testz00_7556 = ((bool_t) 0);
																			}
																		if (BgL_testz00_7556)
																			{	/* Ieee/number.scm 1062 */
																				obj_t BgL_procz00_3896;

																				obj_t BgL_msgz00_3897;

																				BgL_procz00_3896 =
																					string_to_bstring(BSTRING_TO_STRING
																					(BGl_string2567z00zz__r4_numbers_6_5z00));
																				BgL_msgz00_3897 =
																					string_to_bstring(BSTRING_TO_STRING
																					(BGl_string2568z00zz__r4_numbers_6_5z00));
																				the_failure(BgL_procz00_3896,
																					BgL_msgz00_3897,
																					BGl_real2569z00zz__r4_numbers_6_5z00);
																				BgL_res2466z00_3903 = ((double) 0.0);
																			}
																		else
																			{	/* Ieee/number.scm 1062 */
																				BgL_res2466z00_3903 =
																					atan2(BgL_arg2107z00_1413,
																					BgL_yz00_3893);
																			}
																	}
																}
																return BgL_res2466z00_3903;
															}
														else
															{	/* Ieee/number.scm 1062 */
																return atan(BgL_arg2107z00_1413);
															}
													}
												else
													{	/* Ieee/number.scm 1061 */
														return
															REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
															(BGl_string2566z00zz__r4_numbers_6_5z00,
																BGl_string2530z00zz__r4_numbers_6_5z00,
																BgL_xz00_104));
													}
											}
									}
							}
					}
			}
		}
	}



/* _atan */
	obj_t BGl__atanz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4418,
		obj_t BgL_xz00_4419, obj_t BgL_yz00_4420)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1037 */
			return
				DOUBLE_TO_REAL(BGl_atanz00zz__r4_numbers_6_5z00(BgL_xz00_4419,
					BgL_yz00_4420));
		}
	}



/* sqrt */
	BGL_EXPORTED_DEF double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_106)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1069 */
			if (INTEGERP(BgL_xz00_106))
				{	/* Ieee/number.scm 1071 */
					return sqrt((double) ((long) CINT(BgL_xz00_106)));
				}
			else
				{	/* Ieee/number.scm 1071 */
					if (REALP(BgL_xz00_106))
						{	/* Ieee/number.scm 1073 */
							return sqrt(REAL_TO_DOUBLE(BgL_xz00_106));
						}
					else
						{	/* Ieee/number.scm 1073 */
							if (ELONGP(BgL_xz00_106))
								{	/* Ieee/number.scm 1075 */
									return sqrt((double) (BELONG_TO_LONG(BgL_xz00_106)));
								}
							else
								{	/* Ieee/number.scm 1075 */
									if (LLONGP(BgL_xz00_106))
										{	/* Ieee/number.scm 1077 */
											return sqrt((double) (BLLONG_TO_LLONG(BgL_xz00_106)));
										}
									else
										{	/* Ieee/number.scm 1077 */
											if (BIGNUMP(BgL_xz00_106))
												{	/* Ieee/number.scm 1079 */
													return sqrt(bgl_bignum_to_flonum(BgL_xz00_106));
												}
											else
												{	/* Ieee/number.scm 1079 */
													return
														REAL_TO_DOUBLE(BGl_errorz00zz__errorz00
														(BGl_string2570z00zz__r4_numbers_6_5z00,
															BGl_string2530z00zz__r4_numbers_6_5z00,
															BgL_xz00_106));
												}
										}
								}
						}
				}
		}
	}



/* _sqrt */
	obj_t BGl__sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4421,
		obj_t BgL_xz00_4422)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1069 */
			return DOUBLE_TO_REAL(BGl_sqrtz00zz__r4_numbers_6_5z00(BgL_xz00_4422));
		}
	}



/* expt */
	BGL_EXPORTED_DEF obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_107,
		obj_t BgL_yz00_108)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1087 */
			{	/* Ieee/number.scm 1089 */
				bool_t BgL_testz00_7598;

				if (REALP(BgL_xz00_107))
					{	/* Ieee/number.scm 1089 */
						if (REALP(BgL_yz00_108))
							{	/* Ieee/number.scm 1089 */
								if ((REAL_TO_DOUBLE(BgL_xz00_107) == ((double) 0.0)))
									{	/* Ieee/number.scm 1089 */
										BgL_testz00_7598 =
											(REAL_TO_DOUBLE(BgL_yz00_108) == ((double) 0.0));
									}
								else
									{	/* Ieee/number.scm 1089 */
										BgL_testz00_7598 = ((bool_t) 0);
									}
							}
						else
							{	/* Ieee/number.scm 1089 */
								BgL_testz00_7598 = ((bool_t) 0);
							}
					}
				else
					{	/* Ieee/number.scm 1089 */
						BgL_testz00_7598 = ((bool_t) 0);
					}
				if (BgL_testz00_7598)
					{	/* Ieee/number.scm 1089 */
						return BGl_real2571z00zz__r4_numbers_6_5z00;
					}
				else
					{	/* Ieee/number.scm 1091 */
						bool_t BgL_testz00_7608;

						if (INTEGERP(BgL_xz00_107))
							{	/* Ieee/number.scm 1091 */
								if (INTEGERP(BgL_yz00_108))
									{	/* Ieee/number.scm 1091 */
										BgL_testz00_7608 =
											((long) CINT(BgL_yz00_108) >= ((long) 0));
									}
								else
									{	/* Ieee/number.scm 1091 */
										BgL_testz00_7608 = ((bool_t) 0);
									}
							}
						else
							{	/* Ieee/number.scm 1091 */
								BgL_testz00_7608 = ((bool_t) 0);
							}
						if (BgL_testz00_7608)
							{	/* Ieee/number.scm 1091 */
								return
									BINT(BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(
										(long) CINT(BgL_xz00_107), (long) CINT(BgL_yz00_108)));
							}
						else
							{	/* Ieee/number.scm 1093 */
								bool_t BgL_testz00_7619;

								if (BIGNUMP(BgL_xz00_107))
									{	/* Ieee/number.scm 1093 */
										if (BIGNUMP(BgL_yz00_108))
											{	/* Ieee/number.scm 1093 */
												BgL_testz00_7619 = BXPOSITIVE(BgL_yz00_108);
											}
										else
											{	/* Ieee/number.scm 1093 */
												BgL_testz00_7619 = ((bool_t) 0);
											}
									}
								else
									{	/* Ieee/number.scm 1093 */
										BgL_testz00_7619 = ((bool_t) 0);
									}
								if (BgL_testz00_7619)
									{	/* Ieee/number.scm 1093 */
										return
											BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_107,
											BgL_yz00_108);
									}
								else
									{	/* Ieee/number.scm 1093 */
										if (BIGNUMP(BgL_xz00_107))
											{	/* Ieee/number.scm 1096 */
												obj_t BgL_y1z00_1435;

												if (REALP(BgL_yz00_108))
													{	/* Ieee/number.scm 1097 */
														BgL_y1z00_1435 =
															bgl_long_to_bignum(
															(long) (REAL_TO_DOUBLE(BgL_yz00_108)));
													}
												else
													{	/* Ieee/number.scm 1097 */
														if (INTEGERP(BgL_yz00_108))
															{	/* Ieee/number.scm 1099 */
																BgL_y1z00_1435 =
																	bgl_long_to_bignum((long) CINT(BgL_yz00_108));
															}
														else
															{	/* Ieee/number.scm 1099 */
																if (ELONGP(BgL_yz00_108))
																	{	/* Ieee/number.scm 1101 */
																		BgL_y1z00_1435 =
																			bgl_long_to_bignum(BELONG_TO_LONG
																			(BgL_yz00_108));
																	}
																else
																	{	/* Ieee/number.scm 1101 */
																		if (LLONGP(BgL_yz00_108))
																			{	/* Ieee/number.scm 1103 */
																				BgL_y1z00_1435 =
																					bgl_llong_to_bignum(BLLONG_TO_LLONG
																					(BgL_yz00_108));
																			}
																		else
																			{	/* Ieee/number.scm 1103 */
																				if (BIGNUMP(BgL_yz00_108))
																					{	/* Ieee/number.scm 1105 */
																						BgL_y1z00_1435 = BgL_yz00_108;
																					}
																				else
																					{	/* Ieee/number.scm 1105 */
																						BgL_y1z00_1435 =
																							BGl_errorz00zz__errorz00
																							(BGl_symbol2572z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_108);
																					}
																			}
																	}
															}
													}
												return
													BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_xz00_107, BgL_y1z00_1435);
											}
										else
											{	/* Ieee/number.scm 1111 */
												obj_t BgL_x1z00_1442;

												obj_t BgL_y1z00_1443;

												if (REALP(BgL_xz00_107))
													{	/* Ieee/number.scm 1112 */
														BgL_x1z00_1442 = BgL_xz00_107;
													}
												else
													{	/* Ieee/number.scm 1112 */
														if (INTEGERP(BgL_xz00_107))
															{	/* Ieee/number.scm 1114 */
																BgL_x1z00_1442 =
																	DOUBLE_TO_REAL(
																	(double) ((long) CINT(BgL_xz00_107)));
															}
														else
															{	/* Ieee/number.scm 1114 */
																if (ELONGP(BgL_xz00_107))
																	{	/* Ieee/number.scm 1116 */
																		BgL_x1z00_1442 =
																			DOUBLE_TO_REAL(
																			(double) (BELONG_TO_LONG(BgL_xz00_107)));
																	}
																else
																	{	/* Ieee/number.scm 1116 */
																		if (LLONGP(BgL_xz00_107))
																			{	/* Ieee/number.scm 1118 */
																				BgL_x1z00_1442 =
																					DOUBLE_TO_REAL(
																					(double) (BLLONG_TO_LLONG
																						(BgL_xz00_107)));
																			}
																		else
																			{	/* Ieee/number.scm 1118 */
																				if (BIGNUMP(BgL_xz00_107))
																					{	/* Ieee/number.scm 1120 */
																						BgL_x1z00_1442 =
																							DOUBLE_TO_REAL
																							(bgl_bignum_to_flonum
																							(BgL_xz00_107));
																					}
																				else
																					{	/* Ieee/number.scm 1120 */
																						BgL_x1z00_1442 =
																							BGl_errorz00zz__errorz00
																							(BGl_symbol2572z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_xz00_107);
																					}
																			}
																	}
															}
													}
												if (REALP(BgL_yz00_108))
													{	/* Ieee/number.scm 1125 */
														BgL_y1z00_1443 = BgL_yz00_108;
													}
												else
													{	/* Ieee/number.scm 1125 */
														if (INTEGERP(BgL_yz00_108))
															{	/* Ieee/number.scm 1127 */
																BgL_y1z00_1443 =
																	DOUBLE_TO_REAL(
																	(double) ((long) CINT(BgL_yz00_108)));
															}
														else
															{	/* Ieee/number.scm 1127 */
																if (ELONGP(BgL_yz00_108))
																	{	/* Ieee/number.scm 1129 */
																		BgL_y1z00_1443 =
																			DOUBLE_TO_REAL(
																			(double) (BELONG_TO_LONG(BgL_yz00_108)));
																	}
																else
																	{	/* Ieee/number.scm 1129 */
																		if (LLONGP(BgL_yz00_108))
																			{	/* Ieee/number.scm 1131 */
																				BgL_y1z00_1443 =
																					DOUBLE_TO_REAL(
																					(double) (BLLONG_TO_LLONG
																						(BgL_yz00_108)));
																			}
																		else
																			{	/* Ieee/number.scm 1131 */
																				if (BIGNUMP(BgL_yz00_108))
																					{	/* Ieee/number.scm 1133 */
																						BgL_y1z00_1443 =
																							DOUBLE_TO_REAL
																							(bgl_bignum_to_flonum
																							(BgL_yz00_108));
																					}
																				else
																					{	/* Ieee/number.scm 1133 */
																						BgL_y1z00_1443 =
																							BGl_errorz00zz__errorz00
																							(BGl_symbol2572z00zz__r4_numbers_6_5z00,
																							BGl_string2530z00zz__r4_numbers_6_5z00,
																							BgL_yz00_108);
																					}
																			}
																	}
															}
													}
												{	/* Ieee/number.scm 1137 */
													double BgL_r1z00_3961;

													double BgL_r2z00_3962;

													BgL_r1z00_3961 = REAL_TO_DOUBLE(BgL_x1z00_1442);
													BgL_r2z00_3962 = REAL_TO_DOUBLE(BgL_y1z00_1443);
													return
														DOUBLE_TO_REAL(pow(BgL_r1z00_3961, BgL_r2z00_3962));
												}
											}
									}
							}
					}
			}
		}
	}



/* _expt */
	obj_t BGl__exptz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4423,
		obj_t BgL_xz00_4424, obj_t BgL_yz00_4425)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1087 */
			return BGl_exptz00zz__r4_numbers_6_5z00(BgL_xz00_4424, BgL_yz00_4425);
		}
	}



/* exact->inexact */
	BGL_EXPORTED_DEF obj_t bgl_exact_to_inexact(obj_t BgL_za7za7_109)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1142 */
			if (INTEGERP(BgL_za7za7_109))
				{	/* Ieee/number.scm 1144 */
					return DOUBLE_TO_REAL((double) ((long) CINT(BgL_za7za7_109)));
				}
			else
				{	/* Ieee/number.scm 1144 */
					if (REALP(BgL_za7za7_109))
						{	/* Ieee/number.scm 1144 */
							return BgL_za7za7_109;
						}
					else
						{	/* Ieee/number.scm 1144 */
							if (ELONGP(BgL_za7za7_109))
								{	/* Ieee/number.scm 1144 */
									return
										DOUBLE_TO_REAL((double) (BELONG_TO_LONG(BgL_za7za7_109)));
								}
							else
								{	/* Ieee/number.scm 1144 */
									if (LLONGP(BgL_za7za7_109))
										{	/* Ieee/number.scm 1144 */
											return
												DOUBLE_TO_REAL(
												(double) (BLLONG_TO_LLONG(BgL_za7za7_109)));
										}
									else
										{	/* Ieee/number.scm 1144 */
											if (BIGNUMP(BgL_za7za7_109))
												{	/* Ieee/number.scm 1144 */
													return
														DOUBLE_TO_REAL(bgl_bignum_to_flonum
														(BgL_za7za7_109));
												}
											else
												{	/* Ieee/number.scm 1144 */
													return BgL_za7za7_109;
												}
										}
								}
						}
				}
		}
	}



/* _exact->inexact */
	obj_t BGl__exactzd2ze3inexactz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4426,
		obj_t BgL_za7za7_4427)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1142 */
			if (INTEGERP(BgL_za7za7_4427))
				{	/* Ieee/number.scm 1144 */
					return DOUBLE_TO_REAL((double) ((long) CINT(BgL_za7za7_4427)));
				}
			else
				{	/* Ieee/number.scm 1144 */
					if (REALP(BgL_za7za7_4427))
						{	/* Ieee/number.scm 1144 */
							return BgL_za7za7_4427;
						}
					else
						{	/* Ieee/number.scm 1144 */
							if (ELONGP(BgL_za7za7_4427))
								{	/* Ieee/number.scm 1144 */
									return
										DOUBLE_TO_REAL((double) (BELONG_TO_LONG(BgL_za7za7_4427)));
								}
							else
								{	/* Ieee/number.scm 1144 */
									if (LLONGP(BgL_za7za7_4427))
										{	/* Ieee/number.scm 1144 */
											return
												DOUBLE_TO_REAL(
												(double) (BLLONG_TO_LLONG(BgL_za7za7_4427)));
										}
									else
										{	/* Ieee/number.scm 1144 */
											if (BIGNUMP(BgL_za7za7_4427))
												{	/* Ieee/number.scm 1144 */
													return
														DOUBLE_TO_REAL(bgl_bignum_to_flonum
														(BgL_za7za7_4427));
												}
											else
												{	/* Ieee/number.scm 1144 */
													return BgL_za7za7_4427;
												}
										}
								}
						}
				}
		}
	}



/* inexact->exact */
	BGL_EXPORTED_DEF obj_t bgl_inexact_to_exact(obj_t BgL_za7za7_110)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1160 */
			if (REALP(BgL_za7za7_110))
				{	/* Ieee/number.scm 1161 */
					return BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_110)));
				}
			else
				{	/* Ieee/number.scm 1161 */
					return BgL_za7za7_110;
				}
		}
	}



/* _inexact->exact */
	obj_t BGl__inexactzd2ze3exactz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4428,
		obj_t BgL_za7za7_4429)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1160 */
			if (REALP(BgL_za7za7_4429))
				{	/* Ieee/number.scm 1161 */
					return BINT((long) (REAL_TO_DOUBLE(BgL_za7za7_4429)));
				}
			else
				{	/* Ieee/number.scm 1161 */
					return BgL_za7za7_4429;
				}
		}
	}



/* _number->string */
	obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_114,
		obj_t BgL_optz00_113)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1168 */
			{	/* Ieee/number.scm 1168 */
				obj_t BgL_xz00_1467;

				BgL_xz00_1467 = VECTOR_REF(BgL_optz00_113, (int) (((long) 0)));
				{	/* Ieee/number.scm 1168 */
					int BgL_aux1126z00_1469;

					BgL_aux1126z00_1469 = VECTOR_LENGTH(BgL_optz00_113);
					switch ((long) (BgL_aux1126z00_1469))
						{
						case ((long) 1):

							{	/* Ieee/number.scm 1168 */

								{	/* Ieee/number.scm 1168 */
									obj_t BgL_arg2159z00_1472;

									BgL_arg2159z00_1472 =
										VECTOR_REF(BgL_optz00_113, (int) (((long) 0)));
									return
										string_to_bstring
										(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
										(BgL_arg2159z00_1472, BINT(((long) 10))));
							}} break;
						case ((long) 2):

							{	/* Ieee/number.scm 1168 */
								obj_t BgL_radixz00_1473;

								BgL_radixz00_1473 =
									VECTOR_REF(BgL_optz00_113, (int) (((long) 1)));
								{	/* Ieee/number.scm 1168 */

									{	/* Ieee/number.scm 1168 */
										obj_t BgL_arg2160z00_1474;

										BgL_arg2160z00_1474 =
											VECTOR_REF(BgL_optz00_113, (int) (((long) 0)));
										return
											string_to_bstring
											(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
											(BgL_arg2160z00_1474, BgL_radixz00_1473));
									}
								}
							}
							break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* number->string */
	BGL_EXPORTED_DEF char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_111, obj_t BgL_radixz00_112)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1168 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_112))
				{	/* Ieee/number.scm 1170 */
					if (INTEGERP(BgL_xz00_111))
						{	/* Ieee/number.scm 1172 */
							return
								BSTRING_TO_STRING
								(BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00((long)
									CINT(BgL_xz00_111), (long) CINT(BgL_radixz00_112)));
						}
					else
						{	/* Ieee/number.scm 1172 */
							if (REALP(BgL_xz00_111))
								{	/* Ieee/number.scm 1175 */
									obj_t BgL_realz00_3979;

									BgL_realz00_3979 = BgL_xz00_111;
									return
										BSTRING_TO_STRING(real_to_string(REAL_TO_DOUBLE
											(BgL_realz00_3979)));
								}
							else
								{	/* Ieee/number.scm 1174 */
									if (ELONGP(BgL_xz00_111))
										{	/* Ieee/number.scm 1177 */
											obj_t BgL_list2165z00_1479;

											BgL_list2165z00_1479 = MAKE_PAIR(BgL_radixz00_112, BNIL);
											return
												BSTRING_TO_STRING
												(BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BELONG_TO_LONG(BgL_xz00_111), BgL_list2165z00_1479));
										}
									else
										{	/* Ieee/number.scm 1176 */
											if (LLONGP(BgL_xz00_111))
												{	/* Ieee/number.scm 1179 */
													obj_t BgL_list2167z00_1481;

													BgL_list2167z00_1481 =
														MAKE_PAIR(BgL_radixz00_112, BNIL);
													return
														BSTRING_TO_STRING
														(BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
														(BLLONG_TO_LLONG(BgL_xz00_111),
															BgL_list2167z00_1481));
												}
											else
												{	/* Ieee/number.scm 1178 */
													if (BIGNUMP(BgL_xz00_111))
														{	/* Ieee/number.scm 1180 */
															return
																BSTRING_TO_STRING
																(BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																(BgL_xz00_111, (long) CINT(BgL_radixz00_112)));
														}
													else
														{	/* Ieee/number.scm 1180 */
															return
																BSTRING_TO_STRING(BGl_errorz00zz__errorz00
																(BGl_string2574z00zz__r4_numbers_6_5z00,
																	BGl_string2575z00zz__r4_numbers_6_5z00,
																	BgL_xz00_111));
														}
												}
										}
								}
						}
				}
			else
				{	/* Ieee/number.scm 1170 */
					return
						BSTRING_TO_STRING(BGl_errorz00zz__errorz00
						(BGl_symbol2576z00zz__r4_numbers_6_5z00,
							BGl_string2577z00zz__r4_numbers_6_5z00, BgL_radixz00_112));
				}
		}
	}



/* _string->number */
	obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_118,
		obj_t BgL_optz00_117)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1188 */
			{	/* Ieee/number.scm 1188 */
				obj_t BgL_xz00_1483;

				BgL_xz00_1483 = VECTOR_REF(BgL_optz00_117, (int) (((long) 0)));
				{	/* Ieee/number.scm 1188 */
					int BgL_aux1128z00_1485;

					BgL_aux1128z00_1485 = VECTOR_LENGTH(BgL_optz00_117);
					switch ((long) (BgL_aux1128z00_1485))
						{
						case ((long) 1):

							{	/* Ieee/number.scm 1188 */

								return
									BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(VECTOR_REF
									(BgL_optz00_117, (int) (((long) 0))), BINT(((long) 10)));
							} break;
						case ((long) 2):

							{	/* Ieee/number.scm 1188 */
								obj_t BgL_radixz00_1489;

								BgL_radixz00_1489 =
									VECTOR_REF(BgL_optz00_117, (int) (((long) 1)));
								{	/* Ieee/number.scm 1188 */

									return
										BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(VECTOR_REF
										(BgL_optz00_117, (int) (((long) 0))), BgL_radixz00_1489);
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* string->number */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t
		BgL_xz00_115, obj_t BgL_radixz00_116)
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 1188 */
			{
				obj_t BgL_xz00_1548;

				obj_t BgL_xz00_1503;

				obj_t BgL_rz00_1504;

				if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_116))
					{	/* Ieee/number.scm 1254 */
						if ((STRING_LENGTH(BgL_xz00_115) == ((long) 0)))
							{	/* Ieee/number.scm 1256 */
								return BFALSE;
							}
						else
							{	/* Ieee/number.scm 1258 */
								bool_t BgL_testz00_7819;

								BgL_xz00_1503 = BgL_xz00_115;
								BgL_rz00_1504 = BgL_radixz00_116;
								{	/* Ieee/number.scm 1190 */
									long BgL_lenz00_1506;

									BgL_lenz00_1506 = STRING_LENGTH(BgL_xz00_1503);
									{
										long BgL_iz00_1509;

										BgL_iz00_1509 = (BgL_lenz00_1506 - ((long) 1));
									BgL_zc3anonymousza32183ze3z83_1510:
										if ((((long) -1) == BgL_iz00_1509))
											{	/* Ieee/number.scm 1192 */
												BgL_testz00_7819 = ((bool_t) 1);
											}
										else
											{	/* Ieee/number.scm 1194 */
												bool_t BgL_testz00_7823;

												if (
													(STRING_REF(BgL_xz00_1503,
															BgL_iz00_1509) >= ((unsigned char) '0')))
													{	/* Ieee/number.scm 1194 */
														if (
															(STRING_REF(BgL_xz00_1503,
																	BgL_iz00_1509) <= ((unsigned char) '1')))
															{	/* Ieee/number.scm 1195 */
																BgL_testz00_7823 =
																	((long) CINT(BgL_rz00_1504) >= ((long) 2));
															}
														else
															{	/* Ieee/number.scm 1195 */
																BgL_testz00_7823 = ((bool_t) 0);
															}
													}
												else
													{	/* Ieee/number.scm 1194 */
														BgL_testz00_7823 = ((bool_t) 0);
													}
												if (BgL_testz00_7823)
													{
														long BgL_iz00_7832;

														BgL_iz00_7832 = (BgL_iz00_1509 - ((long) 1));
														BgL_iz00_1509 = BgL_iz00_7832;
														goto BgL_zc3anonymousza32183ze3z83_1510;
													}
												else
													{	/* Ieee/number.scm 1198 */
														bool_t BgL_testz00_7834;

														if (
															(STRING_REF(BgL_xz00_1503,
																	BgL_iz00_1509) >= ((unsigned char) '2')))
															{	/* Ieee/number.scm 1198 */
																if (
																	(STRING_REF(BgL_xz00_1503,
																			BgL_iz00_1509) <= ((unsigned char) '7')))
																	{	/* Ieee/number.scm 1199 */
																		BgL_testz00_7834 =
																			(
																			(long) CINT(BgL_rz00_1504) >= ((long) 8));
																	}
																else
																	{	/* Ieee/number.scm 1199 */
																		BgL_testz00_7834 = ((bool_t) 0);
																	}
															}
														else
															{	/* Ieee/number.scm 1198 */
																BgL_testz00_7834 = ((bool_t) 0);
															}
														if (BgL_testz00_7834)
															{
																long BgL_iz00_7843;

																BgL_iz00_7843 = (BgL_iz00_1509 - ((long) 1));
																BgL_iz00_1509 = BgL_iz00_7843;
																goto BgL_zc3anonymousza32183ze3z83_1510;
															}
														else
															{	/* Ieee/number.scm 1202 */
																bool_t BgL_testz00_7845;

																if (
																	(STRING_REF(BgL_xz00_1503,
																			BgL_iz00_1509) >= ((unsigned char) '8')))
																	{	/* Ieee/number.scm 1202 */
																		if (
																			(STRING_REF(BgL_xz00_1503,
																					BgL_iz00_1509) <=
																				((unsigned char) '9')))
																			{	/* Ieee/number.scm 1203 */
																				BgL_testz00_7845 =
																					(
																					(long) CINT(BgL_rz00_1504) >=
																					((long) 10));
																			}
																		else
																			{	/* Ieee/number.scm 1203 */
																				BgL_testz00_7845 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Ieee/number.scm 1202 */
																		BgL_testz00_7845 = ((bool_t) 0);
																	}
																if (BgL_testz00_7845)
																	{
																		long BgL_iz00_7854;

																		BgL_iz00_7854 =
																			(BgL_iz00_1509 - ((long) 1));
																		BgL_iz00_1509 = BgL_iz00_7854;
																		goto BgL_zc3anonymousza32183ze3z83_1510;
																	}
																else
																	{	/* Ieee/number.scm 1206 */
																		bool_t BgL_testz00_7856;

																		if (
																			(STRING_REF(BgL_xz00_1503,
																					BgL_iz00_1509) >=
																				((unsigned char) 'a')))
																			{	/* Ieee/number.scm 1206 */
																				if (
																					(STRING_REF(BgL_xz00_1503,
																							BgL_iz00_1509) <=
																						((unsigned char) 'f')))
																					{	/* Ieee/number.scm 1207 */
																						BgL_testz00_7856 =
																							(
																							(long) CINT(BgL_rz00_1504) ==
																							((long) 16));
																					}
																				else
																					{	/* Ieee/number.scm 1207 */
																						BgL_testz00_7856 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Ieee/number.scm 1206 */
																				BgL_testz00_7856 = ((bool_t) 0);
																			}
																		if (BgL_testz00_7856)
																			{
																				long BgL_iz00_7865;

																				BgL_iz00_7865 =
																					(BgL_iz00_1509 - ((long) 1));
																				BgL_iz00_1509 = BgL_iz00_7865;
																				goto BgL_zc3anonymousza32183ze3z83_1510;
																			}
																		else
																			{	/* Ieee/number.scm 1210 */
																				bool_t BgL_testz00_7867;

																				if (
																					(STRING_REF(BgL_xz00_1503,
																							BgL_iz00_1509) >=
																						((unsigned char) 'A')))
																					{	/* Ieee/number.scm 1210 */
																						if (
																							(STRING_REF(BgL_xz00_1503,
																									BgL_iz00_1509) <=
																								((unsigned char) 'F')))
																							{	/* Ieee/number.scm 1211 */
																								BgL_testz00_7867 =
																									(
																									(long) CINT(BgL_rz00_1504) ==
																									((long) 16));
																							}
																						else
																							{	/* Ieee/number.scm 1211 */
																								BgL_testz00_7867 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Ieee/number.scm 1210 */
																						BgL_testz00_7867 = ((bool_t) 0);
																					}
																				if (BgL_testz00_7867)
																					{
																						long BgL_iz00_7876;

																						BgL_iz00_7876 =
																							(BgL_iz00_1509 - ((long) 1));
																						BgL_iz00_1509 = BgL_iz00_7876;
																						goto
																							BgL_zc3anonymousza32183ze3z83_1510;
																					}
																				else
																					{	/* Ieee/number.scm 1214 */
																						bool_t BgL_testz00_7878;

																						if (
																							(STRING_REF(BgL_xz00_1503,
																									BgL_iz00_1509) ==
																								((unsigned char) '-')))
																							{	/* Ieee/number.scm 1214 */
																								BgL_testz00_7878 = ((bool_t) 1);
																							}
																						else
																							{	/* Ieee/number.scm 1214 */
																								BgL_testz00_7878 =
																									(STRING_REF(BgL_xz00_1503,
																										BgL_iz00_1509) ==
																									((unsigned char) '+'));
																							}
																						if (BgL_testz00_7878)
																							{	/* Ieee/number.scm 1214 */
																								if (
																									(BgL_iz00_1509 == ((long) 0)))
																									{	/* Ieee/number.scm 1216 */
																										BgL_testz00_7819 =
																											(BgL_lenz00_1506 >
																											((long) 1));
																									}
																								else
																									{	/* Ieee/number.scm 1216 */
																										BgL_testz00_7819 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Ieee/number.scm 1214 */
																								BgL_testz00_7819 = ((bool_t) 0);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
								}
								if (BgL_testz00_7819)
									{	/* Ieee/number.scm 1258 */
										return
											BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00
											(BgL_xz00_115, (long) CINT(BgL_radixz00_116));
									}
								else
									{	/* Ieee/number.scm 1258 */
										if (bigloo_strcmp(BgL_xz00_115,
												BGl_string2578z00zz__r4_numbers_6_5z00))
											{	/* Ieee/number.scm 1260 */
												return BGl_real2579z00zz__r4_numbers_6_5z00;
											}
										else
											{	/* Ieee/number.scm 1260 */
												if (bigloo_strcmp(BgL_xz00_115,
														BGl_string2580z00zz__r4_numbers_6_5z00))
													{	/* Ieee/number.scm 1262 */
														return BGl_real2581z00zz__r4_numbers_6_5z00;
													}
												else
													{	/* Ieee/number.scm 1262 */
														if (bigloo_strcmp(BgL_xz00_115,
																BGl_string2582z00zz__r4_numbers_6_5z00))
															{	/* Ieee/number.scm 1264 */
																return BGl_real2583z00zz__r4_numbers_6_5z00;
															}
														else
															{	/* Ieee/number.scm 1266 */
																bool_t BgL_testz00_7896;

																BgL_xz00_1548 = BgL_xz00_115;
																{	/* Ieee/number.scm 1219 */
																	long BgL_lenz00_1550;

																	BgL_lenz00_1550 =
																		STRING_LENGTH(BgL_xz00_1548);
																	{
																		long BgL_iz00_1552;

																		bool_t BgL_ez00_1553;

																		long BgL_pz00_1554;

																		bool_t BgL_dz00_1555;

																		BgL_iz00_1552 = ((long) 0);
																		BgL_ez00_1553 = ((bool_t) 0);
																		BgL_pz00_1554 = ((long) 0);
																		BgL_dz00_1555 = ((bool_t) 0);
																	BgL_zc3anonymousza32225ze3z83_1556:
																		if ((BgL_iz00_1552 == BgL_lenz00_1550))
																			{	/* Ieee/number.scm 1224 */
																				BgL_testz00_7896 = BgL_dz00_1555;
																			}
																		else
																			{	/* Ieee/number.scm 1226 */
																				bool_t BgL_testz00_7900;

																				if (
																					(STRING_REF(BgL_xz00_1548,
																							BgL_iz00_1552) >=
																						((unsigned char) '0')))
																					{	/* Ieee/number.scm 1226 */
																						BgL_testz00_7900 =
																							(STRING_REF(BgL_xz00_1548,
																								BgL_iz00_1552) <=
																							((unsigned char) '9'));
																					}
																				else
																					{	/* Ieee/number.scm 1226 */
																						BgL_testz00_7900 = ((bool_t) 0);
																					}
																				if (BgL_testz00_7900)
																					{
																						bool_t BgL_dz00_7909;

																						long BgL_pz00_7908;

																						long BgL_iz00_7906;

																						BgL_iz00_7906 =
																							(BgL_iz00_1552 + ((long) 1));
																						BgL_pz00_7908 = ((long) 0);
																						BgL_dz00_7909 = ((bool_t) 1);
																						BgL_dz00_1555 = BgL_dz00_7909;
																						BgL_pz00_1554 = BgL_pz00_7908;
																						BgL_iz00_1552 = BgL_iz00_7906;
																						goto
																							BgL_zc3anonymousza32225ze3z83_1556;
																					}
																				else
																					{	/* Ieee/number.scm 1226 */
																						if (
																							(STRING_REF(BgL_xz00_1548,
																									BgL_iz00_1552) ==
																								((unsigned char) '.')))
																							{
																								long BgL_pz00_7915;

																								long BgL_iz00_7913;

																								BgL_iz00_7913 =
																									(BgL_iz00_1552 + ((long) 1));
																								BgL_pz00_7915 = ((long) 0);
																								BgL_pz00_1554 = BgL_pz00_7915;
																								BgL_iz00_1552 = BgL_iz00_7913;
																								goto
																									BgL_zc3anonymousza32225ze3z83_1556;
																							}
																						else
																							{	/* Ieee/number.scm 1237 */
																								bool_t BgL_testz00_7916;

																								if (
																									(STRING_REF(BgL_xz00_1548,
																											BgL_iz00_1552) ==
																										((unsigned char) 'e')))
																									{	/* Ieee/number.scm 1237 */
																										BgL_testz00_7916 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Ieee/number.scm 1237 */
																										BgL_testz00_7916 =
																											(STRING_REF(BgL_xz00_1548,
																												BgL_iz00_1552) ==
																											((unsigned char) 'E'));
																									}
																								if (BgL_testz00_7916)
																									{	/* Ieee/number.scm 1237 */
																										if (BgL_ez00_1553)
																											{	/* Ieee/number.scm 1239 */
																												BgL_testz00_7896 =
																													((bool_t) 0);
																											}
																										else
																											{
																												long BgL_pz00_7926;

																												bool_t BgL_ez00_7925;

																												long BgL_iz00_7923;

																												BgL_iz00_7923 =
																													(BgL_iz00_1552 +
																													((long) 1));
																												BgL_ez00_7925 =
																													((bool_t) 1);
																												BgL_pz00_7926 =
																													(BgL_iz00_1552 +
																													((long) 1));
																												BgL_pz00_1554 =
																													BgL_pz00_7926;
																												BgL_ez00_1553 =
																													BgL_ez00_7925;
																												BgL_iz00_1552 =
																													BgL_iz00_7923;
																												goto
																													BgL_zc3anonymousza32225ze3z83_1556;
																											}
																									}
																								else
																									{	/* Ieee/number.scm 1245 */
																										bool_t BgL_testz00_7928;

																										if (
																											(STRING_REF(BgL_xz00_1548,
																													BgL_iz00_1552) ==
																												((unsigned char) '-')))
																											{	/* Ieee/number.scm 1245 */
																												BgL_testz00_7928 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/number.scm 1245 */
																												BgL_testz00_7928 =
																													(STRING_REF
																													(BgL_xz00_1548,
																														BgL_iz00_1552) ==
																													((unsigned char)
																														'+'));
																											}
																										if (BgL_testz00_7928)
																											{	/* Ieee/number.scm 1247 */
																												bool_t BgL_testz00_7934;

																												{	/* Ieee/number.scm 1247 */
																													bool_t
																														BgL__ortest_1111z00_1571;
																													BgL__ortest_1111z00_1571
																														=
																														(BgL_iz00_1552 ==
																														((long) 0));
																													if (BgL__ortest_1111z00_1571)
																														{	/* Ieee/number.scm 1247 */
																															BgL_testz00_7934 =
																																BgL__ortest_1111z00_1571;
																														}
																													else
																														{	/* Ieee/number.scm 1247 */
																															BgL_testz00_7934 =
																																(BgL_iz00_1552
																																==
																																BgL_pz00_1554);
																														}
																												}
																												if (BgL_testz00_7934)
																													{
																														long BgL_pz00_7940;

																														long BgL_iz00_7938;

																														BgL_iz00_7938 =
																															(BgL_iz00_1552 +
																															((long) 1));
																														BgL_pz00_7940 =
																															((long) 0);
																														BgL_pz00_1554 =
																															BgL_pz00_7940;
																														BgL_iz00_1552 =
																															BgL_iz00_7938;
																														goto
																															BgL_zc3anonymousza32225ze3z83_1556;
																													}
																												else
																													{	/* Ieee/number.scm 1247 */
																														BgL_testz00_7896 =
																															((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ieee/number.scm 1245 */
																												BgL_testz00_7896 =
																													((bool_t) 0);
																											}
																									}
																							}
																					}
																			}
																	}
																}
																if (BgL_testz00_7896)
																	{	/* Ieee/number.scm 1266 */
																		if (
																			((long) CINT(BgL_radixz00_116) ==
																				((long) 10)))
																			{	/* Ieee/number.scm 1268 */
																				double BgL_res2468z00_4004;

																				{	/* Ieee/number.scm 1268 */
																					char *BgL_stringz00_3994;

																					BgL_stringz00_3994 =
																						BSTRING_TO_STRING(BgL_xz00_115);
																					if (bigloo_strcmp(string_to_bstring
																							(BgL_stringz00_3994),
																							BGl_string2578z00zz__r4_numbers_6_5z00))
																						{	/* Ieee/number.scm 1268 */
																							BgL_res2468z00_4004 = BGL_NAN;
																						}
																					else
																						{	/* Ieee/number.scm 1268 */
																							if (bigloo_strcmp
																								(string_to_bstring
																									(BgL_stringz00_3994),
																									BGl_string2580z00zz__r4_numbers_6_5z00))
																								{	/* Ieee/number.scm 1268 */
																									BgL_res2468z00_4004 =
																										BGL_INFINITY;
																								}
																							else
																								{	/* Ieee/number.scm 1268 */
																									if (bigloo_strcmp
																										(string_to_bstring
																											(BgL_stringz00_3994),
																											BGl_string2582z00zz__r4_numbers_6_5z00))
																										{	/* Ieee/number.scm 1268 */
																											BgL_res2468z00_4004 =
																												(-BGL_INFINITY);
																										}
																									else
																										{	/* Ieee/number.scm 1268 */
																											BgL_res2468z00_4004 =
																												strtod
																												(BgL_stringz00_3994,
																												((long) 0));
																				}}}}
																				return
																					DOUBLE_TO_REAL(BgL_res2468z00_4004);
																			}
																		else
																			{	/* Ieee/number.scm 1267 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2584z00zz__r4_numbers_6_5z00,
																					BGl_string2585z00zz__r4_numbers_6_5z00,
																					BgL_radixz00_116);
																			}
																	}
																else
																	{	/* Ieee/number.scm 1266 */
																		return BFALSE;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Ieee/number.scm 1254 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2576z00zz__r4_numbers_6_5z00,
							BGl_string2577z00zz__r4_numbers_6_5z00, BgL_radixz00_116);
					}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00()
	{
		AN_OBJECT;
		{	/* Ieee/number.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2586z00zz__r4_numbers_6_5z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2586z00zz__r4_numbers_6_5z00));
		}
	}

#ifdef __cplusplus
}
#endif
