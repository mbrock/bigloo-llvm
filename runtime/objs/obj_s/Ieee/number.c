/*===========================================================================*/
/*   (Ieee/number.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/number.scm -indent -o objs/obj_s/Ieee/number.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__logz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long, char *);
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
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern double bgl_bignum_to_flonum(obj_t);
static obj_t BGl__absz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__minz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__expz00zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_bignum_abs(obj_t);
static obj_t BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL unsigned char BGl_fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(long);
BGL_EXPORTED_DECL bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__rationalzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
BGL_EXPORTED_DECL double BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
static obj_t BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__cosz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t);
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
extern obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol2769z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_symbol2774z00zz__r4_numbers_6_5z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2777z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_symbol2780z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__sqrtz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol2783z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__exactzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol2800z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_symbol2789z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_symbol2791z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__asinz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_logz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_symbol2793z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00();
BGL_EXPORTED_DECL char * BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol2795z00zz__r4_numbers_6_5z00 = BUNSPEC;
extern obj_t BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
extern obj_t bgl_long_to_bignum(long);
static obj_t BGl_symbol2797z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sinz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__atanz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long);
static obj_t BGl__zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
extern obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
static obj_t BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__numberzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl_symbol2821z00zz__r4_numbers_6_5z00 = BUNSPEC;
BGL_EXPORTED_DECL double BGl_tanz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl_symbol2824z00zz__r4_numbers_6_5z00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2830z00zz__r4_numbers_6_5z00 = BUNSPEC;
static obj_t BGl__zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_expz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(long);
BGL_EXPORTED_DECL bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__acosz00zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
BGL_EXPORTED_DECL obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__positivezf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t bgl_bignum_sub(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_cosz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t);
extern obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t real_to_string(double);
extern obj_t string_to_bstring(char *);
static obj_t BGl__exptz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
extern obj_t bgl_bignum_mul(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char);
BGL_EXPORTED_DECL double BGl_asinz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__2minz00zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
extern obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t);
extern int bgl_bignum_cmp(obj_t, obj_t);
static obj_t BGl__2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_atanz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__truncatez00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__complexzf3zf3zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__roundz00zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(long);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double);
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
BGL_EXPORTED_DECL long BGl_llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t the_failure(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
static obj_t BGl__2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zf2zd2envz20zz__r4_numbers_6_5z00, BgL_bgl__2za7f2za7f2za7za7__r4_n2846z00, BGl__2zf2zf2zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exactzd2ze3inexactzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__exactza7d2za7e3inex2847z00, BGl__exactzd2ze3inexactz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__fixnumza7d2za7e3elo2848z00, BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__exptza700za7za7__r4_n2849za7, BGl__exptz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
#define BGl_real2838z00zz__r4_numbers_6_5z00 bigloo_nan
DEFINE_EXPORT_BGL_PROCEDURE( BGl_asinzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__asinza700za7za7__r4_n2850za7, BGl__asinz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ubytezd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__ubyteza7d2za7e3fixn2851z00, BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
#define BGl_real2840z00zz__r4_numbers_6_5z00 bigloo_infinity
#define BGl_real2842z00zz__r4_numbers_6_5z00 bigloo_minfinity
DEFINE_EXPORT_BGL_PROCEDURE( BGl_numberzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__numberza7f3za7f3za7za7_2852z00, BGl__numberzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_acoszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__acosza700za7za7__r4_n2853za7, BGl__acosz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bytezd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__byteza7d2za7e3fixnu2854z00, BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__elongza7d2za7e3flon2855z00, BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__llongza7d2za7e3fixn2856z00, BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3bignumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__flonumza7d2za7e3big2857z00, BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_rationalzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__rationalza7f3za7f3za72858za7, BGl__rationalzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_logzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__logza700za7za7__r4_nu2859za7, BGl__logz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd2envz11zz__r4_numbers_6_5z00, BgL_bgl__za7c3za7c3za7za7__r4_nu2860z00, va_generic_entry, BGl__zc3zc3zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__expza700za7za7__r4_nu2861za7, BGl__expz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2minzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__2minza700za7za7__r4_n2862za7, BGl__2minz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zc3zd2envz11zz__r4_numbers_6_5z00, BgL_bgl__2za7c3za7c3za7za7__r4_n2863z00, BGl__2zc3zc3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2maxzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__2maxza700za7za7__r4_n2864za7, BGl__2maxz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sinzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__sinza700za7za7__r4_nu2865za7, BGl__sinz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2746z00zz__r4_numbers_6_5z00, BgL_bgl_string2746za700za7za7_2866za7, "/tmp/bigloo/runtime/Ieee/number.scm", 35 );
DEFINE_STRING( BGl_string2747z00zz__r4_numbers_6_5z00, BgL_bgl_string2747za700za7za7_2867za7, "_flonum->fixnum", 15 );
DEFINE_STRING( BGl_string2748z00zz__r4_numbers_6_5z00, BgL_bgl_string2748za700za7za7_2868za7, "double", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3bytezd2envze3zz__r4_numbers_6_5z00, BgL_bgl__fixnumza7d2za7e3byt2869z00, BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2750z00zz__r4_numbers_6_5z00, BgL_bgl_string2750za700za7za7_2870za7, "long", 4 );
DEFINE_STRING( BGl_string2749z00zz__r4_numbers_6_5z00, BgL_bgl_string2749za700za7za7_2871za7, "_fixnum->flonum", 15 );
DEFINE_STRING( BGl_string2751z00zz__r4_numbers_6_5z00, BgL_bgl_string2751za700za7za7_2872za7, "_fixnum->byte", 13 );
DEFINE_STRING( BGl_string2752z00zz__r4_numbers_6_5z00, BgL_bgl_string2752za700za7za7_2873za7, "_fixnum->ubyte", 14 );
DEFINE_STRING( BGl_string2753z00zz__r4_numbers_6_5z00, BgL_bgl_string2753za700za7za7_2874za7, "_byte->fixnum", 13 );
DEFINE_STRING( BGl_string2754z00zz__r4_numbers_6_5z00, BgL_bgl_string2754za700za7za7_2875za7, "byte", 4 );
DEFINE_STRING( BGl_string2755z00zz__r4_numbers_6_5z00, BgL_bgl_string2755za700za7za7_2876za7, "_ubyte->fixnum", 14 );
DEFINE_STRING( BGl_string2756z00zz__r4_numbers_6_5z00, BgL_bgl_string2756za700za7za7_2877za7, "_fixnum->elong", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_coszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__cosza700za7za7__r4_nu2878za7, BGl__cosz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2757z00zz__r4_numbers_6_5z00, BgL_bgl_string2757za700za7za7_2879za7, "_elong->fixnum", 14 );
DEFINE_STRING( BGl_string2758z00zz__r4_numbers_6_5z00, BgL_bgl_string2758za700za7za7_2880za7, "elong", 5 );
DEFINE_STRING( BGl_string2760z00zz__r4_numbers_6_5z00, BgL_bgl_string2760za700za7za7_2881za7, "_llong->fixnum", 14 );
DEFINE_STRING( BGl_string2759z00zz__r4_numbers_6_5z00, BgL_bgl_string2759za700za7za7_2882za7, "_fixnum->llong", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__flonumza7d2za7e3llo2883z00, BGl__flonumzd2ze3llongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2761z00zz__r4_numbers_6_5z00, BgL_bgl_string2761za700za7za7_2884za7, "llong", 5 );
DEFINE_STRING( BGl_string2762z00zz__r4_numbers_6_5z00, BgL_bgl_string2762za700za7za7_2885za7, "_flonum->elong", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positivezf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__positiveza7f3za7f3za72886za7, BGl__positivezf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2763z00zz__r4_numbers_6_5z00, BgL_bgl_string2763za700za7za7_2887za7, "_elong->flonum", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ceilingzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__ceilingza700za7za7__r2888za7, BGl__ceilingz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2764z00zz__r4_numbers_6_5z00, BgL_bgl_string2764za700za7za7_2889za7, "_flonum->llong", 14 );
DEFINE_STRING( BGl_string2765z00zz__r4_numbers_6_5z00, BgL_bgl_string2765za700za7za7_2890za7, "_llong->flonum", 14 );
DEFINE_STRING( BGl_string2766z00zz__r4_numbers_6_5z00, BgL_bgl_string2766za700za7za7_2891za7, "_flonum->bignum", 15 );
DEFINE_STRING( BGl_string2767z00zz__r4_numbers_6_5z00, BgL_bgl_string2767za700za7za7_2892za7, "_bignum->flonum", 15 );
DEFINE_STRING( BGl_string2768z00zz__r4_numbers_6_5z00, BgL_bgl_string2768za700za7za7_2893za7, "bignum", 6 );
DEFINE_STRING( BGl_string2770z00zz__r4_numbers_6_5z00, BgL_bgl_string2770za700za7za7_2894za7, "=", 1 );
DEFINE_STRING( BGl_string2771z00zz__r4_numbers_6_5z00, BgL_bgl_string2771za700za7za7_2895za7, "not a number", 12 );
DEFINE_STRING( BGl_string2772z00zz__r4_numbers_6_5z00, BgL_bgl_string2772za700za7za7_2896za7, "=-list", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3numberzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__stringza7d2za7e3num2897z00, opt_generic_entry, BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00, BFALSE, -1 );
DEFINE_STRING( BGl_string2773z00zz__r4_numbers_6_5z00, BgL_bgl_string2773za700za7za7_2898za7, "pair", 4 );
DEFINE_STRING( BGl_string2775z00zz__r4_numbers_6_5z00, BgL_bgl_string2775za700za7za7_2899za7, "<", 1 );
DEFINE_STRING( BGl_string2776z00zz__r4_numbers_6_5z00, BgL_bgl_string2776za700za7za7_2900za7, "<-list", 6 );
DEFINE_STRING( BGl_string2778z00zz__r4_numbers_6_5z00, BgL_bgl_string2778za700za7za7_2901za7, ">", 1 );
DEFINE_STRING( BGl_string2779z00zz__r4_numbers_6_5z00, BgL_bgl_string2779za700za7za7_2902za7, ">-list", 6 );
DEFINE_STRING( BGl_string2781z00zz__r4_numbers_6_5z00, BgL_bgl_string2781za700za7za7_2903za7, "<=", 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__flonumza7d2za7e3fix2904z00, BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2782z00zz__r4_numbers_6_5z00, BgL_bgl_string2782za700za7za7_2905za7, "<=-list", 7 );
DEFINE_STRING( BGl_string2784z00zz__r4_numbers_6_5z00, BgL_bgl_string2784za700za7za7_2906za7, ">=", 2 );
DEFINE_STRING( BGl_string2785z00zz__r4_numbers_6_5z00, BgL_bgl_string2785za700za7za7_2907za7, ">=-list", 7 );
DEFINE_STRING( BGl_string2786z00zz__r4_numbers_6_5z00, BgL_bgl_string2786za700za7za7_2908za7, "zero", 4 );
DEFINE_STRING( BGl_string2787z00zz__r4_numbers_6_5z00, BgL_bgl_string2787za700za7za7_2909za7, "positive", 8 );
DEFINE_STRING( BGl_string2788z00zz__r4_numbers_6_5z00, BgL_bgl_string2788za700za7za7_2910za7, "negative", 8 );
DEFINE_STRING( BGl_string2790z00zz__r4_numbers_6_5z00, BgL_bgl_string2790za700za7za7_2911za7, "2max", 4 );
DEFINE_STRING( BGl_string2801z00zz__r4_numbers_6_5z00, BgL_bgl_string2801za700za7za7_2912za7, "/", 1 );
DEFINE_STRING( BGl_string2802z00zz__r4_numbers_6_5z00, BgL_bgl_string2802za700za7za7_2913za7, "abs", 3 );
DEFINE_STRING( BGl_string2792z00zz__r4_numbers_6_5z00, BgL_bgl_string2792za700za7za7_2914za7, "2min", 4 );
DEFINE_STRING( BGl_string2803z00zz__r4_numbers_6_5z00, BgL_bgl_string2803za700za7za7_2915za7, "floor", 5 );
DEFINE_STRING( BGl_string2804z00zz__r4_numbers_6_5z00, BgL_bgl_string2804za700za7za7_2916za7, "ceiling", 7 );
DEFINE_STRING( BGl_string2794z00zz__r4_numbers_6_5z00, BgL_bgl_string2794za700za7za7_2917za7, "+", 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7erozf3zd2envz86zz__r4_numbers_6_5z00, BgL_bgl__za7a7eroza7f3za754za7za7_2918za7, BGl__za7erozf3z54zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2805z00zz__r4_numbers_6_5z00, BgL_bgl_string2805za700za7za7_2919za7, "truncate", 8 );
DEFINE_STRING( BGl_string2806z00zz__r4_numbers_6_5z00, BgL_bgl_string2806za700za7za7_2920za7, "round", 5 );
DEFINE_STRING( BGl_string2796z00zz__r4_numbers_6_5z00, BgL_bgl_string2796za700za7za7_2921za7, "*", 1 );
DEFINE_STRING( BGl_string2807z00zz__r4_numbers_6_5z00, BgL_bgl_string2807za700za7za7_2922za7, "exp", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__sqrtza700za7za7__r4_n2923za7, BGl__sqrtz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2808z00zz__r4_numbers_6_5z00, BgL_bgl_string2808za700za7za7_2924za7, "log", 3 );
DEFINE_STRING( BGl_string2798z00zz__r4_numbers_6_5z00, BgL_bgl_string2798za700za7za7_2925za7, "-", 1 );
DEFINE_STRING( BGl_string2810z00zz__r4_numbers_6_5z00, BgL_bgl_string2810za700za7za7_2926za7, "cos", 3 );
DEFINE_STRING( BGl_string2809z00zz__r4_numbers_6_5z00, BgL_bgl_string2809za700za7za7_2927za7, "sin", 3 );
DEFINE_STRING( BGl_string2799z00zz__r4_numbers_6_5z00, BgL_bgl_string2799za700za7za7_2928za7, "2/", 2 );
DEFINE_STRING( BGl_string2811z00zz__r4_numbers_6_5z00, BgL_bgl_string2811za700za7za7_2929za7, "tan", 3 );
DEFINE_STRING( BGl_string2812z00zz__r4_numbers_6_5z00, BgL_bgl_string2812za700za7za7_2930za7, "asin", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__bignumza7d2za7e3flo2931z00, BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2813z00zz__r4_numbers_6_5z00, BgL_bgl_string2813za700za7za7_2932za7, "acos", 4 );
DEFINE_STRING( BGl_string2814z00zz__r4_numbers_6_5z00, BgL_bgl_string2814za700za7za7_2933za7, "atan", 4 );
DEFINE_STRING( BGl_string2815z00zz__r4_numbers_6_5z00, BgL_bgl_string2815za700za7za7_2934za7, "atanfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00, BgL_bgl__za7c3za7d3za710za7za7__r42935za7, va_generic_entry, BGl__zc3zd3z10zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string2816z00zz__r4_numbers_6_5z00, BgL_bgl_string2816za700za7za7_2936za7, "Domain error", 12 );
DEFINE_STRING( BGl_string2818z00zz__r4_numbers_6_5z00, BgL_bgl_string2818za700za7za7_2937za7, "sqrtfl", 6 );
DEFINE_STRING( BGl_string2819z00zz__r4_numbers_6_5z00, BgL_bgl_string2819za700za7za7_2938za7, "sqrt", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd2envz31zz__r4_numbers_6_5z00, BgL_bgl__za7e3za7e3za7za7__r4_nu2939z00, va_generic_entry, BGl__ze3ze3zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string2822z00zz__r4_numbers_6_5z00, BgL_bgl_string2822za700za7za7_2940za7, "expr", 4 );
DEFINE_STRING( BGl_string2823z00zz__r4_numbers_6_5z00, BgL_bgl_string2823za700za7za7_2941za7, "expt", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2ze3zd2envz31zz__r4_numbers_6_5z00, BgL_bgl__2za7e3za7e3za7za7__r4_n2942z00, BGl__2ze3ze3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2825z00zz__r4_numbers_6_5z00, BgL_bgl_string2825za700za7za7_2943za7, "number->string", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativezf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__negativeza7f3za7f3za72944za7, BGl__negativezf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2826z00zz__r4_numbers_6_5z00, BgL_bgl_string2826za700za7za7_2945za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2827z00zz__r4_numbers_6_5z00, BgL_bgl_string2827za700za7za7_2946za7, "Argument not a number", 21 );
DEFINE_STRING( BGl_string2828z00zz__r4_numbers_6_5z00, BgL_bgl_string2828za700za7za7_2947za7, "string", 6 );
DEFINE_STRING( BGl_string2829z00zz__r4_numbers_6_5z00, BgL_bgl_string2829za700za7za7_2948za7, "Illegal radix", 13 );
DEFINE_STRING( BGl_string2831z00zz__r4_numbers_6_5z00, BgL_bgl_string2831za700za7za7_2949za7, "string->number", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_complexzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__complexza7f3za7f3za7za72950z00, BGl__complexzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2832z00zz__r4_numbers_6_5z00, BgL_bgl_string2832za700za7za7_2951za7, "integer-string?", 15 );
DEFINE_STRING( BGl_string2833z00zz__r4_numbers_6_5z00, BgL_bgl_string2833za700za7za7_2952za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzd2ze3elongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__flonumza7d2za7e3elo2953z00, BGl__flonumzd2ze3elongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2834z00zz__r4_numbers_6_5z00, BgL_bgl_string2834za700za7za7_2954za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2835z00zz__r4_numbers_6_5z00, BgL_bgl_string2835za700za7za7_2955za7, "loop", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2zd2envz60zz__r4_numbers_6_5z00, BgL_bgl__za7b2za7b2za7za7__r4_nu2956z00, va_generic_entry, BGl__zb2zb2zz__r4_numbers_6_5z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zc3zd3zd2envzc2zz__r4_numbers_6_5z00, BgL_bgl__2za7c3za7d3za710za7za7__r2957za7, BGl__2zc3zd3z10zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3ubytezd2envze3zz__r4_numbers_6_5z00, BgL_bgl__fixnumza7d2za7e3uby2958z00, BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2836z00zz__r4_numbers_6_5z00, BgL_bgl_string2836za700za7za7_2959za7, "real-string?", 12 );
DEFINE_STRING( BGl_string2837z00zz__r4_numbers_6_5z00, BgL_bgl_string2837za700za7za7_2960za7, "+nan.0", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zb2zd2envz60zz__r4_numbers_6_5z00, BgL_bgl__2za7b2za7b2za7za7__r4_n2961z00, BGl__2zb2zb2zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2839z00zz__r4_numbers_6_5z00, BgL_bgl_string2839za700za7za7_2962za7, "+inf.0", 6 );
DEFINE_STRING( BGl_string2841z00zz__r4_numbers_6_5z00, BgL_bgl_string2841za700za7za7_2963za7, "-inf.0", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_roundzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__roundza700za7za7__r4_2964za7, BGl__roundz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2843z00zz__r4_numbers_6_5z00, BgL_bgl_string2843za700za7za7_2965za7, "Only radix `10' is legal for floating point number", 50 );
DEFINE_STRING( BGl_string2844z00zz__r4_numbers_6_5z00, BgL_bgl_string2844za700za7za7_2966za7, "__r4_numbers_6_5", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inexactzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__inexactza7f3za7f3za7za72967z00, BGl__inexactzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__minza700za7za7__r4_nu2968za7, va_generic_entry, BGl__minz00zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__maxza700za7za7__r4_nu2969za7, va_generic_entry, BGl__maxz00zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3fixnumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__elongza7d2za7e3fixn2970z00, BGl__elongzd2ze3fixnumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__llongza7d2za7e3flon2971z00, BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__atanza700za7za7__r4_n2972za7, va_generic_entry, BGl__atanz00zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00, BgL_bgl__za7e3za7d3za730za7za7__r42973za7, va_generic_entry, BGl__ze3zd3z30zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2zd2envz00zz__r4_numbers_6_5z00, BgL_bgl__za7d2za7d2za7za7__r4_nu2974z00, va_generic_entry, BGl__zd2zd2zz__r4_numbers_6_5z00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zd2zd2envz00zz__r4_numbers_6_5z00, BgL_bgl__2za7d2za7d2za7za7__r4_n2975z00, BGl__2zd2zd2zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_abszd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__absza700za7za7__r4_nu2976za7, BGl__absz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_numberzd2ze3stringzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__numberza7d2za7e3str2977z00, opt_generic_entry, BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_inexactzd2ze3exactzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__inexactza7d2za7e3ex2978z00, BGl__inexactzd2ze3exactz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2ze3zd3zd2envze2zz__r4_numbers_6_5z00, BgL_bgl__2za7e3za7d3za730za7za7__r2979za7, BGl__2ze3zd3z30zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3zd2envz01zz__r4_numbers_6_5z00, BgL_bgl__za7d3za7d3za7za7__r4_nu2980z00, va_generic_entry, BGl__zd3zd3zz__r4_numbers_6_5z00, BUNSPEC, -3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3llongzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__fixnumza7d2za7e3llo2981z00, BGl__fixnumzd2ze3llongz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2zd3zd2envz01zz__r4_numbers_6_5z00, BgL_bgl__2za7d3za7d3za7za7__r4_n2982z00, BGl__2zd3zd3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3flonumzd2envze3zz__r4_numbers_6_5z00, BgL_bgl__fixnumza7d2za7e3flo2983z00, BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_truncatezd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__truncateza700za7za7__2984za7, BGl__truncatez00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floorzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__floorza700za7za7__r4_2985za7, BGl__floorz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2zd2envz70zz__r4_numbers_6_5z00, BgL_bgl__za7a2za7a2za7za7__r4_nu2986z00, va_generic_entry, BGl__za2za2zz__r4_numbers_6_5z00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tanzd2envzd2zz__r4_numbers_6_5z00, BgL_bgl__tanza700za7za7__r4_nu2987za7, BGl__tanz00zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_2za2zd2envz70zz__r4_numbers_6_5z00, BgL_bgl__2za7a2za7a2za7za7__r4_n2988z00, BGl__2za2za2zz__r4_numbers_6_5z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exactzf3zd2envz21zz__r4_numbers_6_5z00, BgL_bgl__exactza7f3za7f3za7za7__2989z00, BGl__exactzf3zf3zz__r4_numbers_6_5z00, 0L, BUNSPEC, 1 );
DEFINE_REAL( BGl_real2817z00zz__r4_numbers_6_5z00, BgL_bgl_real2817za700za7za7__r2990za7, 0.0 );
DEFINE_REAL( BGl_real2820z00zz__r4_numbers_6_5z00, BgL_bgl_real2820za700za7za7__r2991za7, 1.0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2zd2envz20zz__r4_numbers_6_5z00, BgL_bgl__za7f2za7f2za7za7__r4_nu2992z00, va_generic_entry, BGl__zf2zf2zz__r4_numbers_6_5z00, BUNSPEC, -2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long BgL_checksumz00_4601, char * BgL_fromz00_4602)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_numbers_6_5z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5z00()
{ AN_OBJECT;
{ /* Ieee/number.scm 18 */
BGl_symbol2769z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2770z00zz__r4_numbers_6_5z00); 
BGl_symbol2774z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2775z00zz__r4_numbers_6_5z00); 
BGl_symbol2777z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2778z00zz__r4_numbers_6_5z00); 
BGl_symbol2780z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2781z00zz__r4_numbers_6_5z00); 
BGl_symbol2783z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2784z00zz__r4_numbers_6_5z00); 
BGl_symbol2789z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2790z00zz__r4_numbers_6_5z00); 
BGl_symbol2791z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2792z00zz__r4_numbers_6_5z00); 
BGl_symbol2793z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2794z00zz__r4_numbers_6_5z00); 
BGl_symbol2795z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2796z00zz__r4_numbers_6_5z00); 
BGl_symbol2797z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2798z00zz__r4_numbers_6_5z00); 
BGl_symbol2800z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2801z00zz__r4_numbers_6_5z00); 
BGl_symbol2821z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2822z00zz__r4_numbers_6_5z00); 
BGl_symbol2824z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2825z00zz__r4_numbers_6_5z00); 
return ( 
BGl_symbol2830z00zz__r4_numbers_6_5z00 = 
bstring_to_symbol(BGl_string2831z00zz__r4_numbers_6_5z00), BUNSPEC) ;} 
}



/* number? */
BGL_EXPORTED_DEF bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/number.scm 192 */
if(
INTEGERP(BgL_objz00_1))
{ /* Ieee/number.scm 193 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 193 */
if(
REALP(BgL_objz00_1))
{ /* Ieee/number.scm 195 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 195 */
if(
ELONGP(BgL_objz00_1))
{ /* Ieee/number.scm 197 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 197 */
if(
LLONGP(BgL_objz00_1))
{ /* Ieee/number.scm 199 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 199 */
return 
BIGNUMP(BgL_objz00_1);} } } } } 
}



/* _number? */
obj_t BGl__numberzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4166, obj_t BgL_objz00_4167)
{ AN_OBJECT;
{ /* Ieee/number.scm 192 */
return 
BBOOL(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_objz00_4167));} 
}



/* exact? */
BGL_EXPORTED_DEF bool_t BGl_exactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_za7za7_2)
{ AN_OBJECT;
{ /* Ieee/number.scm 206 */
if(
INTEGERP(BgL_za7za7_2))
{ /* Ieee/number.scm 207 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 207 */
if(
ELONGP(BgL_za7za7_2))
{ /* Ieee/number.scm 207 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 207 */
if(
LLONGP(BgL_za7za7_2))
{ /* Ieee/number.scm 207 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 207 */
return 
BIGNUMP(BgL_za7za7_2);} } } } 
}



/* _exact? */
obj_t BGl__exactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4168, obj_t BgL_za7za7_4169)
{ AN_OBJECT;
{ /* Ieee/number.scm 206 */
{ /* Ieee/number.scm 207 */
bool_t BgL_auxz00_4640;
if(
INTEGERP(BgL_za7za7_4169))
{ /* Ieee/number.scm 207 */
BgL_auxz00_4640 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 207 */
if(
ELONGP(BgL_za7za7_4169))
{ /* Ieee/number.scm 207 */
BgL_auxz00_4640 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 207 */
if(
LLONGP(BgL_za7za7_4169))
{ /* Ieee/number.scm 207 */
BgL_auxz00_4640 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 207 */
BgL_auxz00_4640 = 
BIGNUMP(BgL_za7za7_4169)
; } } } 
return 
BBOOL(BgL_auxz00_4640);} } 
}



/* inexact? */
BGL_EXPORTED_DEF bool_t BGl_inexactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_za7za7_3)
{ AN_OBJECT;
{ /* Ieee/number.scm 218 */
return 
REALP(BgL_za7za7_3);} 
}



/* _inexact? */
obj_t BGl__inexactzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4170, obj_t BgL_za7za7_4171)
{ AN_OBJECT;
{ /* Ieee/number.scm 218 */
return 
BBOOL(
REALP(BgL_za7za7_4171));} 
}



/* complex? */
BGL_EXPORTED_DEF bool_t BGl_complexzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_4)
{ AN_OBJECT;
{ /* Ieee/number.scm 224 */
return 
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4);} 
}



/* _complex? */
obj_t BGl__complexzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4172, obj_t BgL_xz00_4173)
{ AN_OBJECT;
{ /* Ieee/number.scm 224 */
return 
BBOOL(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4173));} 
}



/* rational? */
BGL_EXPORTED_DEF bool_t BGl_rationalzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_5)
{ AN_OBJECT;
{ /* Ieee/number.scm 230 */
if(
INTEGERP(BgL_xz00_5))
{ /* Ieee/number.scm 231 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 231 */
return 
REALP(BgL_xz00_5);} } 
}



/* _rational? */
obj_t BGl__rationalzf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4174, obj_t BgL_xz00_4175)
{ AN_OBJECT;
{ /* Ieee/number.scm 230 */
return 
BBOOL(
BGl_rationalzf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4175));} 
}



/* flonum->fixnum */
BGL_EXPORTED_DEF long BGl_flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(double BgL_xz00_6)
{ AN_OBJECT;
{ /* Ieee/number.scm 236 */
return 
(long)(BgL_xz00_6);} 
}



/* _flonum->fixnum */
obj_t BGl__flonumzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4176, obj_t BgL_xz00_4177)
{ AN_OBJECT;
{ /* Ieee/number.scm 236 */
{ /* Ieee/number.scm 237 */
long BgL_auxz00_4661;
{ /* Ieee/number.scm 237 */
double BgL_xz00_4582;
{ /* Ieee/number.scm 237 */
obj_t BgL_auxz00_4662;
if(
REALP(BgL_xz00_4177))
{ /* Ieee/number.scm 237 */
BgL_auxz00_4662 = BgL_xz00_4177
; }  else 
{ 
obj_t BgL_auxz00_4665;
BgL_auxz00_4665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)9505)), BGl_string2747z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_xz00_4177); 
FAILURE(BgL_auxz00_4665,BFALSE,BFALSE);} 
BgL_xz00_4582 = 
REAL_TO_DOUBLE(BgL_auxz00_4662); } 
BgL_auxz00_4661 = 
(long)(BgL_xz00_4582); } 
return 
BINT(BgL_auxz00_4661);} } 
}



/* fixnum->flonum */
BGL_EXPORTED_DEF double BGl_fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(long BgL_xz00_7)
{ AN_OBJECT;
{ /* Ieee/number.scm 242 */
return 
(double)(BgL_xz00_7);} 
}



/* _fixnum->flonum */
obj_t BGl__fixnumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4178, obj_t BgL_xz00_4179)
{ AN_OBJECT;
{ /* Ieee/number.scm 242 */
{ /* Ieee/number.scm 243 */
double BgL_auxz00_4673;
{ /* Ieee/number.scm 243 */
long BgL_xz00_4583;
{ /* Ieee/number.scm 243 */
obj_t BgL_auxz00_4674;
if(
INTEGERP(BgL_xz00_4179))
{ /* Ieee/number.scm 243 */
BgL_auxz00_4674 = BgL_xz00_4179
; }  else 
{ 
obj_t BgL_auxz00_4677;
BgL_auxz00_4677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)9786)), BGl_string2749z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_xz00_4179); 
FAILURE(BgL_auxz00_4677,BFALSE,BFALSE);} 
BgL_xz00_4583 = 
(long)CINT(BgL_auxz00_4674); } 
BgL_auxz00_4673 = 
(double)(BgL_xz00_4583); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_4673);} } 
}



/* fixnum->byte */
BGL_EXPORTED_DEF char BGl_fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(long BgL_xz00_8)
{ AN_OBJECT;
{ /* Ieee/number.scm 248 */
return 
(signed char)(BgL_xz00_8);} 
}



/* _fixnum->byte */
obj_t BGl__fixnumzd2ze3bytez31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4180, obj_t BgL_xz00_4181)
{ AN_OBJECT;
{ /* Ieee/number.scm 248 */
{ /* Ieee/number.scm 249 */
char BgL_auxz00_4685;
{ /* Ieee/number.scm 249 */
long BgL_xz00_4584;
{ /* Ieee/number.scm 249 */
obj_t BgL_auxz00_4686;
if(
INTEGERP(BgL_xz00_4181))
{ /* Ieee/number.scm 249 */
BgL_auxz00_4686 = BgL_xz00_4181
; }  else 
{ 
obj_t BgL_auxz00_4689;
BgL_auxz00_4689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)10074)), BGl_string2751z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_xz00_4181); 
FAILURE(BgL_auxz00_4689,BFALSE,BFALSE);} 
BgL_xz00_4584 = 
(long)CINT(BgL_auxz00_4686); } 
BgL_auxz00_4685 = 
(signed char)(BgL_xz00_4584); } 
return 
BINT(BgL_auxz00_4685);} } 
}



/* fixnum->ubyte */
BGL_EXPORTED_DEF unsigned char BGl_fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(long BgL_xz00_9)
{ AN_OBJECT;
{ /* Ieee/number.scm 254 */
return 
(unsigned char)(BgL_xz00_9);} 
}



/* _fixnum->ubyte */
obj_t BGl__fixnumzd2ze3ubytez31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4182, obj_t BgL_xz00_4183)
{ AN_OBJECT;
{ /* Ieee/number.scm 254 */
{ /* Ieee/number.scm 255 */
unsigned char BgL_auxz00_4697;
{ /* Ieee/number.scm 255 */
long BgL_xz00_4585;
{ /* Ieee/number.scm 255 */
obj_t BgL_auxz00_4698;
if(
INTEGERP(BgL_xz00_4183))
{ /* Ieee/number.scm 255 */
BgL_auxz00_4698 = BgL_xz00_4183
; }  else 
{ 
obj_t BgL_auxz00_4701;
BgL_auxz00_4701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)10350)), BGl_string2752z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_xz00_4183); 
FAILURE(BgL_auxz00_4701,BFALSE,BFALSE);} 
BgL_xz00_4585 = 
(long)CINT(BgL_auxz00_4698); } 
BgL_auxz00_4697 = 
(unsigned char)(BgL_xz00_4585); } 
return 
BINT(BgL_auxz00_4697);} } 
}



/* byte->fixnum */
BGL_EXPORTED_DEF long BGl_bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char BgL_xz00_10)
{ AN_OBJECT;
{ /* Ieee/number.scm 260 */
return 
(long)(BgL_xz00_10);} 
}



/* _byte->fixnum */
obj_t BGl__bytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4184, obj_t BgL_xz00_4185)
{ AN_OBJECT;
{ /* Ieee/number.scm 260 */
{ /* Ieee/number.scm 261 */
long BgL_auxz00_4709;
{ /* Ieee/number.scm 261 */
char BgL_xz00_4586;
{ /* Ieee/number.scm 261 */
obj_t BgL_auxz00_4710;
if(
INTEGERP(BgL_xz00_4185))
{ /* Ieee/number.scm 261 */
BgL_auxz00_4710 = BgL_xz00_4185
; }  else 
{ 
obj_t BgL_auxz00_4713;
BgL_auxz00_4713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)10626)), BGl_string2753z00zz__r4_numbers_6_5z00, BGl_string2754z00zz__r4_numbers_6_5z00, BgL_xz00_4185); 
FAILURE(BgL_auxz00_4713,BFALSE,BFALSE);} 
BgL_xz00_4586 = 
(signed char)CINT(BgL_auxz00_4710); } 
BgL_auxz00_4709 = 
(long)(BgL_xz00_4586); } 
return 
BINT(BgL_auxz00_4709);} } 
}



/* ubyte->fixnum */
BGL_EXPORTED_DEF long BGl_ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(char BgL_xz00_11)
{ AN_OBJECT;
{ /* Ieee/number.scm 266 */
return 
(long)(
(unsigned char)(BgL_xz00_11));} 
}



/* _ubyte->fixnum */
obj_t BGl__ubytezd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4186, obj_t BgL_xz00_4187)
{ AN_OBJECT;
{ /* Ieee/number.scm 266 */
{ /* Ieee/number.scm 267 */
long BgL_auxz00_4722;
{ /* Ieee/number.scm 267 */
char BgL_xz00_4587;
{ /* Ieee/number.scm 267 */
obj_t BgL_auxz00_4723;
if(
INTEGERP(BgL_xz00_4187))
{ /* Ieee/number.scm 267 */
BgL_auxz00_4723 = BgL_xz00_4187
; }  else 
{ 
obj_t BgL_auxz00_4726;
BgL_auxz00_4726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)10902)), BGl_string2755z00zz__r4_numbers_6_5z00, BGl_string2754z00zz__r4_numbers_6_5z00, BgL_xz00_4187); 
FAILURE(BgL_auxz00_4726,BFALSE,BFALSE);} 
BgL_xz00_4587 = 
(signed char)CINT(BgL_auxz00_4723); } 
BgL_auxz00_4722 = 
(long)(
(unsigned char)(BgL_xz00_4587)); } 
return 
BINT(BgL_auxz00_4722);} } 
}



/* fixnum->elong */
BGL_EXPORTED_DEF long BGl_fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(long BgL_xz00_12)
{ AN_OBJECT;
{ /* Ieee/number.scm 272 */
return 
LONG_TO_ELONG(BgL_xz00_12);} 
}



/* _fixnum->elong */
obj_t BGl__fixnumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4188, obj_t BgL_xz00_4189)
{ AN_OBJECT;
{ /* Ieee/number.scm 272 */
{ /* Ieee/number.scm 273 */
long BgL_auxz00_4735;
{ /* Ieee/number.scm 273 */
long BgL_xz00_4588;
{ /* Ieee/number.scm 273 */
obj_t BgL_auxz00_4736;
if(
INTEGERP(BgL_xz00_4189))
{ /* Ieee/number.scm 273 */
BgL_auxz00_4736 = BgL_xz00_4189
; }  else 
{ 
obj_t BgL_auxz00_4739;
BgL_auxz00_4739 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)11179)), BGl_string2756z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_xz00_4189); 
FAILURE(BgL_auxz00_4739,BFALSE,BFALSE);} 
BgL_xz00_4588 = 
(long)CINT(BgL_auxz00_4736); } 
BgL_auxz00_4735 = 
LONG_TO_ELONG(BgL_xz00_4588); } 
return 
make_belong(BgL_auxz00_4735);} } 
}



/* elong->fixnum */
BGL_EXPORTED_DEF long BGl_elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(long BgL_xz00_13)
{ AN_OBJECT;
{ /* Ieee/number.scm 278 */
{ /* Ieee/number.scm 279 */
long BgL_auxz00_4746;
{ /* Ieee/number.scm 279 */
long BgL_auxz00_4747;
BgL_auxz00_4747 = 
ELONG_TO_LONG(BgL_xz00_13); 
BgL_auxz00_4746 = 
ELONG_TO_LONG(BgL_auxz00_4747); } 
return 
ELONG_TO_LONG(BgL_auxz00_4746);} } 
}



/* _elong->fixnum */
obj_t BGl__elongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4190, obj_t BgL_xz00_4191)
{ AN_OBJECT;
{ /* Ieee/number.scm 278 */
{ /* Ieee/number.scm 279 */
long BgL_auxz00_4751;
{ /* Ieee/number.scm 279 */
long BgL_res2845z00_4590;
{ /* Ieee/number.scm 279 */
long BgL_xz00_4589;
{ /* Ieee/number.scm 279 */
obj_t BgL_auxz00_4752;
if(
ELONGP(BgL_xz00_4191))
{ /* Ieee/number.scm 279 */
BgL_auxz00_4752 = BgL_xz00_4191
; }  else 
{ 
obj_t BgL_auxz00_4755;
BgL_auxz00_4755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)11456)), BGl_string2757z00zz__r4_numbers_6_5z00, BGl_string2758z00zz__r4_numbers_6_5z00, BgL_xz00_4191); 
FAILURE(BgL_auxz00_4755,BFALSE,BFALSE);} 
BgL_xz00_4589 = 
BELONG_TO_LONG(BgL_auxz00_4752); } 
{ /* Ieee/number.scm 279 */
long BgL_auxz00_4760;
{ /* Ieee/number.scm 279 */
long BgL_auxz00_4761;
BgL_auxz00_4761 = 
ELONG_TO_LONG(BgL_xz00_4589); 
BgL_auxz00_4760 = 
ELONG_TO_LONG(BgL_auxz00_4761); } 
BgL_res2845z00_4590 = 
ELONG_TO_LONG(BgL_auxz00_4760); } } 
BgL_auxz00_4751 = BgL_res2845z00_4590; } 
return 
BINT(BgL_auxz00_4751);} } 
}



/* fixnum->llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(long BgL_xz00_14)
{ AN_OBJECT;
{ /* Ieee/number.scm 284 */
return 
LONG_TO_LLONG(BgL_xz00_14);} 
}



/* _fixnum->llong */
obj_t BGl__fixnumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4192, obj_t BgL_xz00_4193)
{ AN_OBJECT;
{ /* Ieee/number.scm 284 */
{ /* Ieee/number.scm 285 */
BGL_LONGLONG_T BgL_auxz00_4767;
{ /* Ieee/number.scm 285 */
long BgL_xz00_4591;
{ /* Ieee/number.scm 285 */
obj_t BgL_auxz00_4768;
if(
INTEGERP(BgL_xz00_4193))
{ /* Ieee/number.scm 285 */
BgL_auxz00_4768 = BgL_xz00_4193
; }  else 
{ 
obj_t BgL_auxz00_4771;
BgL_auxz00_4771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)11742)), BGl_string2759z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_xz00_4193); 
FAILURE(BgL_auxz00_4771,BFALSE,BFALSE);} 
BgL_xz00_4591 = 
(long)CINT(BgL_auxz00_4768); } 
BgL_auxz00_4767 = 
LONG_TO_LLONG(BgL_xz00_4591); } 
return 
make_bllong(BgL_auxz00_4767);} } 
}



/* llong->fixnum */
BGL_EXPORTED_DEF long BGl_llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_15)
{ AN_OBJECT;
{ /* Ieee/number.scm 290 */
return 
LLONG_TO_LONG(BgL_xz00_15);} 
}



/* _llong->fixnum */
obj_t BGl__llongzd2ze3fixnumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4194, obj_t BgL_xz00_4195)
{ AN_OBJECT;
{ /* Ieee/number.scm 290 */
{ /* Ieee/number.scm 291 */
long BgL_auxz00_4779;
{ /* Ieee/number.scm 291 */
BGL_LONGLONG_T BgL_xz00_4592;
{ /* Ieee/number.scm 291 */
obj_t BgL_auxz00_4780;
if(
LLONGP(BgL_xz00_4195))
{ /* Ieee/number.scm 291 */
BgL_auxz00_4780 = BgL_xz00_4195
; }  else 
{ 
obj_t BgL_auxz00_4783;
BgL_auxz00_4783 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)12019)), BGl_string2760z00zz__r4_numbers_6_5z00, BGl_string2761z00zz__r4_numbers_6_5z00, BgL_xz00_4195); 
FAILURE(BgL_auxz00_4783,BFALSE,BFALSE);} 
BgL_xz00_4592 = 
BLLONG_TO_LLONG(BgL_auxz00_4780); } 
BgL_auxz00_4779 = 
LLONG_TO_LONG(BgL_xz00_4592); } 
return 
BINT(BgL_auxz00_4779);} } 
}



/* flonum->elong */
BGL_EXPORTED_DEF long BGl_flonumzd2ze3elongz31zz__r4_numbers_6_5z00(double BgL_xz00_16)
{ AN_OBJECT;
{ /* Ieee/number.scm 296 */
{ /* Ieee/number.scm 297 */
long BgL_auxz00_4790;
BgL_auxz00_4790 = 
(long)(BgL_xz00_16); 
return 
LONG_TO_ELONG(BgL_auxz00_4790);} } 
}



/* _flonum->elong */
obj_t BGl__flonumzd2ze3elongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4196, obj_t BgL_xz00_4197)
{ AN_OBJECT;
{ /* Ieee/number.scm 296 */
{ /* Ieee/number.scm 297 */
long BgL_auxz00_4793;
{ /* Ieee/number.scm 297 */
double BgL_xz00_4593;
{ /* Ieee/number.scm 297 */
obj_t BgL_auxz00_4794;
if(
REALP(BgL_xz00_4197))
{ /* Ieee/number.scm 297 */
BgL_auxz00_4794 = BgL_xz00_4197
; }  else 
{ 
obj_t BgL_auxz00_4797;
BgL_auxz00_4797 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)12305)), BGl_string2762z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_xz00_4197); 
FAILURE(BgL_auxz00_4797,BFALSE,BFALSE);} 
BgL_xz00_4593 = 
REAL_TO_DOUBLE(BgL_auxz00_4794); } 
{ /* Ieee/number.scm 297 */
long BgL_auxz00_4802;
BgL_auxz00_4802 = 
(long)(BgL_xz00_4593); 
BgL_auxz00_4793 = 
LONG_TO_ELONG(BgL_auxz00_4802); } } 
return 
make_belong(BgL_auxz00_4793);} } 
}



/* elong->flonum */
BGL_EXPORTED_DEF double BGl_elongzd2ze3flonumz31zz__r4_numbers_6_5z00(long BgL_xz00_17)
{ AN_OBJECT;
{ /* Ieee/number.scm 302 */
return 
(double)(BgL_xz00_17);} 
}



/* _elong->flonum */
obj_t BGl__elongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4198, obj_t BgL_xz00_4199)
{ AN_OBJECT;
{ /* Ieee/number.scm 302 */
{ /* Ieee/number.scm 303 */
double BgL_auxz00_4807;
{ /* Ieee/number.scm 303 */
long BgL_xz00_4594;
{ /* Ieee/number.scm 303 */
obj_t BgL_auxz00_4808;
if(
ELONGP(BgL_xz00_4199))
{ /* Ieee/number.scm 303 */
BgL_auxz00_4808 = BgL_xz00_4199
; }  else 
{ 
obj_t BgL_auxz00_4811;
BgL_auxz00_4811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)12584)), BGl_string2763z00zz__r4_numbers_6_5z00, BGl_string2758z00zz__r4_numbers_6_5z00, BgL_xz00_4199); 
FAILURE(BgL_auxz00_4811,BFALSE,BFALSE);} 
BgL_xz00_4594 = 
BELONG_TO_LONG(BgL_auxz00_4808); } 
BgL_auxz00_4807 = 
(double)(BgL_xz00_4594); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_4807);} } 
}



/* flonum->llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_flonumzd2ze3llongz31zz__r4_numbers_6_5z00(double BgL_xz00_18)
{ AN_OBJECT;
{ /* Ieee/number.scm 308 */
return 
DOUBLE_TO_LLONG(BgL_xz00_18);} 
}



/* _flonum->llong */
obj_t BGl__flonumzd2ze3llongz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4200, obj_t BgL_xz00_4201)
{ AN_OBJECT;
{ /* Ieee/number.scm 308 */
{ /* Ieee/number.scm 309 */
BGL_LONGLONG_T BgL_auxz00_4819;
{ /* Ieee/number.scm 309 */
double BgL_xz00_4595;
{ /* Ieee/number.scm 309 */
obj_t BgL_auxz00_4820;
if(
REALP(BgL_xz00_4201))
{ /* Ieee/number.scm 309 */
BgL_auxz00_4820 = BgL_xz00_4201
; }  else 
{ 
obj_t BgL_auxz00_4823;
BgL_auxz00_4823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)12872)), BGl_string2764z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_xz00_4201); 
FAILURE(BgL_auxz00_4823,BFALSE,BFALSE);} 
BgL_xz00_4595 = 
REAL_TO_DOUBLE(BgL_auxz00_4820); } 
BgL_auxz00_4819 = 
DOUBLE_TO_LLONG(BgL_xz00_4595); } 
return 
make_bllong(BgL_auxz00_4819);} } 
}



/* llong->flonum */
BGL_EXPORTED_DEF double BGl_llongzd2ze3flonumz31zz__r4_numbers_6_5z00(BGL_LONGLONG_T BgL_xz00_19)
{ AN_OBJECT;
{ /* Ieee/number.scm 314 */
return 
(double)(BgL_xz00_19);} 
}



/* _llong->flonum */
obj_t BGl__llongzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4202, obj_t BgL_xz00_4203)
{ AN_OBJECT;
{ /* Ieee/number.scm 314 */
{ /* Ieee/number.scm 315 */
double BgL_auxz00_4831;
{ /* Ieee/number.scm 315 */
BGL_LONGLONG_T BgL_xz00_4596;
{ /* Ieee/number.scm 315 */
obj_t BgL_auxz00_4832;
if(
LLONGP(BgL_xz00_4203))
{ /* Ieee/number.scm 315 */
BgL_auxz00_4832 = BgL_xz00_4203
; }  else 
{ 
obj_t BgL_auxz00_4835;
BgL_auxz00_4835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)13151)), BGl_string2765z00zz__r4_numbers_6_5z00, BGl_string2761z00zz__r4_numbers_6_5z00, BgL_xz00_4203); 
FAILURE(BgL_auxz00_4835,BFALSE,BFALSE);} 
BgL_xz00_4596 = 
BLLONG_TO_LLONG(BgL_auxz00_4832); } 
BgL_auxz00_4831 = 
(double)(BgL_xz00_4596); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_4831);} } 
}



/* flonum->bignum */
BGL_EXPORTED_DEF obj_t BGl_flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(double BgL_xz00_20)
{ AN_OBJECT;
{ /* Ieee/number.scm 320 */
return 
bgl_flonum_to_bignum(BgL_xz00_20);} 
}



/* _flonum->bignum */
obj_t BGl__flonumzd2ze3bignumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4204, obj_t BgL_xz00_4205)
{ AN_OBJECT;
{ /* Ieee/number.scm 320 */
{ /* Ieee/number.scm 321 */
double BgL_xz00_4597;
{ /* Ieee/number.scm 321 */
obj_t BgL_auxz00_4843;
if(
REALP(BgL_xz00_4205))
{ /* Ieee/number.scm 321 */
BgL_auxz00_4843 = BgL_xz00_4205
; }  else 
{ 
obj_t BgL_auxz00_4846;
BgL_auxz00_4846 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)13440)), BGl_string2766z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_xz00_4205); 
FAILURE(BgL_auxz00_4846,BFALSE,BFALSE);} 
BgL_xz00_4597 = 
REAL_TO_DOUBLE(BgL_auxz00_4843); } 
return 
bgl_flonum_to_bignum(BgL_xz00_4597);} } 
}



/* bignum->flonum */
BGL_EXPORTED_DEF double BGl_bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_21)
{ AN_OBJECT;
{ /* Ieee/number.scm 326 */
return 
bgl_bignum_to_flonum(BgL_xz00_21);} 
}



/* _bignum->flonum */
obj_t BGl__bignumzd2ze3flonumz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4206, obj_t BgL_xz00_4207)
{ AN_OBJECT;
{ /* Ieee/number.scm 326 */
{ /* Ieee/number.scm 327 */
double BgL_auxz00_4853;
{ /* Ieee/number.scm 327 */
obj_t BgL_xz00_4598;
if(
BIGNUMP(BgL_xz00_4207))
{ /* Ieee/number.scm 327 */
BgL_xz00_4598 = BgL_xz00_4207; }  else 
{ 
obj_t BgL_auxz00_4856;
BgL_auxz00_4856 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)13721)), BGl_string2767z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_xz00_4207); 
FAILURE(BgL_auxz00_4856,BFALSE,BFALSE);} 
BgL_auxz00_4853 = 
bgl_bignum_to_flonum(BgL_xz00_4598); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_4853);} } 
}



/* 2= */
BGL_EXPORTED_DEF bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_22, obj_t BgL_yz00_23)
{ AN_OBJECT;
{ /* Ieee/number.scm 422 */
if(
INTEGERP(BgL_xz00_22))
{ /* Ieee/number.scm 423 */
if(
INTEGERP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)CINT(BgL_xz00_22)==
(long)CINT(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(double)(
(long)CINT(BgL_xz00_22))==
REAL_TO_DOUBLE(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
long BgL_arg1239z00_532;
{ /* Ieee/number.scm 423 */
long BgL_auxz00_4877;
BgL_auxz00_4877 = 
(long)CINT(BgL_xz00_22); 
BgL_arg1239z00_532 = 
LONG_TO_ELONG(BgL_auxz00_4877); } 
{ /* Ieee/number.scm 423 */
long BgL_n2z00_1805;
BgL_n2z00_1805 = 
BELONG_TO_LONG(BgL_yz00_23); 
return 
(BgL_arg1239z00_532==BgL_n2z00_1805);} }  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
BGL_LONGLONG_T BgL_arg1241z00_534;
{ /* Ieee/number.scm 423 */
long BgL_auxz00_4884;
BgL_auxz00_4884 = 
(long)CINT(BgL_xz00_22); 
BgL_arg1241z00_534 = 
LONG_TO_LLONG(BgL_auxz00_4884); } 
return 
(BgL_arg1241z00_534==
BLLONG_TO_LLONG(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_22)), BgL_yz00_23))==((long)0));}  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_23));} } } } } }  else 
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_xz00_22))
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_22)==
REAL_TO_DOUBLE(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
INTEGERP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_22)==
(double)(
(long)CINT(BgL_yz00_23)));}  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
double BgL_r1z00_1827;
BgL_r1z00_1827 = 
REAL_TO_DOUBLE(BgL_xz00_22); 
return 
(BgL_r1z00_1827==
(double)(
BELONG_TO_LONG(BgL_yz00_23)));}  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_22)==
(double)(
BLLONG_TO_LLONG(BgL_yz00_23)));}  else 
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_22)==
bgl_bignum_to_flonum(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_23));} } } } } }  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_xz00_22))
{ /* Ieee/number.scm 423 */
if(
INTEGERP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
long BgL_arg1256z00_549;
{ /* Ieee/number.scm 423 */
long BgL_auxz00_4934;
BgL_auxz00_4934 = 
(long)CINT(BgL_yz00_23); 
BgL_arg1256z00_549 = 
LONG_TO_ELONG(BgL_auxz00_4934); } 
{ /* Ieee/number.scm 423 */
long BgL_n1z00_1839;
BgL_n1z00_1839 = 
BELONG_TO_LONG(BgL_xz00_22); 
return 
(BgL_n1z00_1839==BgL_arg1256z00_549);} }  else 
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
double BgL_r2z00_1843;
BgL_r2z00_1843 = 
REAL_TO_DOUBLE(BgL_yz00_23); 
return 
(
(double)(
BELONG_TO_LONG(BgL_xz00_22))==BgL_r2z00_1843);}  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
long BgL_n1z00_1845;long BgL_n2z00_1846;
BgL_n1z00_1845 = 
BELONG_TO_LONG(BgL_xz00_22); 
BgL_n2z00_1846 = 
BELONG_TO_LONG(BgL_yz00_23); 
return 
(BgL_n1z00_1845==BgL_n2z00_1846);}  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
BGL_LONGLONG_T BgL_n2z00_1849;
BgL_n2z00_1849 = 
BLLONG_TO_LLONG(BgL_yz00_23); 
return 
(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_22))==BgL_n2z00_1849);}  else 
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
long BgL_n1z00_1856;
{ /* Ieee/number.scm 423 */
int BgL_auxz00_4958;
{ /* Ieee/number.scm 423 */
obj_t BgL_auxz00_4959;
{ /* Ieee/number.scm 423 */
long BgL_xz00_1851;
BgL_xz00_1851 = 
BELONG_TO_LONG(BgL_xz00_22); 
BgL_auxz00_4959 = 
bgl_long_to_bignum(BgL_xz00_1851); } 
BgL_auxz00_4958 = 
bgl_bignum_cmp(BgL_auxz00_4959, BgL_yz00_23); } 
BgL_n1z00_1856 = 
(long)(BgL_auxz00_4958); } 
return 
(BgL_n1z00_1856==((long)0));}  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_23));} } } } } }  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_xz00_22))
{ /* Ieee/number.scm 423 */
if(
INTEGERP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
BGL_LONGLONG_T BgL_arg1266z00_559;
{ /* Ieee/number.scm 423 */
long BgL_auxz00_4971;
BgL_auxz00_4971 = 
(long)CINT(BgL_yz00_23); 
BgL_arg1266z00_559 = 
LONG_TO_LLONG(BgL_auxz00_4971); } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_22)==BgL_arg1266z00_559);}  else 
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_22))==
REAL_TO_DOUBLE(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
BGL_LONGLONG_T BgL_n1z00_1868;
BgL_n1z00_1868 = 
BLLONG_TO_LLONG(BgL_xz00_22); 
return 
(BgL_n1z00_1868==
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_23)));}  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_22)==
BLLONG_TO_LLONG(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_22)), BgL_yz00_23))==((long)0));}  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_23));} } } } } }  else 
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_xz00_22))
{ /* Ieee/number.scm 423 */
if(
BIGNUMP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_22, BgL_yz00_23))==((long)0));}  else 
{ /* Ieee/number.scm 423 */
if(
INTEGERP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_22, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_23))))==((long)0));}  else 
{ /* Ieee/number.scm 423 */
if(
REALP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_22)==
REAL_TO_DOUBLE(BgL_yz00_23));}  else 
{ /* Ieee/number.scm 423 */
if(
ELONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
long BgL_n1z00_1910;
{ /* Ieee/number.scm 423 */
int BgL_auxz00_5023;
{ /* Ieee/number.scm 423 */
obj_t BgL_auxz00_5024;
{ /* Ieee/number.scm 423 */
long BgL_xz00_1905;
BgL_xz00_1905 = 
BELONG_TO_LONG(BgL_yz00_23); 
BgL_auxz00_5024 = 
bgl_long_to_bignum(BgL_xz00_1905); } 
BgL_auxz00_5023 = 
bgl_bignum_cmp(BgL_xz00_22, BgL_auxz00_5024); } 
BgL_n1z00_1910 = 
(long)(BgL_auxz00_5023); } 
return 
(BgL_n1z00_1910==((long)0));}  else 
{ /* Ieee/number.scm 423 */
if(
LLONGP(BgL_yz00_23))
{ /* Ieee/number.scm 423 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_22, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_23))))==((long)0));}  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_23));} } } } } }  else 
{ /* Ieee/number.scm 423 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2769z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_22));} } } } } } 
}



/* _2= */
obj_t BGl__2zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4208, obj_t BgL_xz00_4209, obj_t BgL_yz00_4210)
{ AN_OBJECT;
{ /* Ieee/number.scm 422 */
return 
BBOOL(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_4209, BgL_yz00_4210));} 
}



/* = */
BGL_EXPORTED_DEF bool_t BGl_zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_xz00_24, obj_t BgL_yz00_25, obj_t BgL_za7za7_26)
{ AN_OBJECT;
{ /* Ieee/number.scm 428 */
{ 
obj_t BgL_xz00_579;obj_t BgL_za7za7_580;
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_24, BgL_yz00_25))
{ /* Ieee/number.scm 434 */
BgL_xz00_579 = BgL_yz00_25; 
BgL_za7za7_580 = BgL_za7za7_26; 
BgL_zc3anonymousza31284ze3z83_581:
if(
NULLP(BgL_za7za7_580))
{ /* Ieee/number.scm 431 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 432 */
bool_t BgL_testz00_5047;
{ /* Ieee/number.scm 432 */
obj_t BgL_arg1288z00_585;
{ /* Ieee/number.scm 432 */
obj_t BgL_pairz00_1923;
if(
PAIRP(BgL_za7za7_580))
{ /* Ieee/number.scm 432 */
BgL_pairz00_1923 = BgL_za7za7_580; }  else 
{ 
obj_t BgL_auxz00_5050;
BgL_auxz00_5050 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)16920)), BGl_string2772z00zz__r4_numbers_6_5z00, BGl_string2773z00zz__r4_numbers_6_5z00, BgL_za7za7_580); 
FAILURE(BgL_auxz00_5050,BFALSE,BFALSE);} 
BgL_arg1288z00_585 = 
CAR(BgL_pairz00_1923); } 
BgL_testz00_5047 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_579, BgL_arg1288z00_585); } 
if(BgL_testz00_5047)
{ 
obj_t BgL_za7za7_5056;
BgL_za7za7_5056 = 
CDR(BgL_za7za7_580); 
BgL_za7za7_580 = BgL_za7za7_5056; 
goto BgL_zc3anonymousza31284ze3z83_581;}  else 
{ /* Ieee/number.scm 432 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 434 */
return ((bool_t)0);} } } 
}



/* _= */
obj_t BGl__zd3zd3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4211, obj_t BgL_xz00_4212, obj_t BgL_yz00_4213, obj_t BgL_za7za7_4214)
{ AN_OBJECT;
{ /* Ieee/number.scm 428 */
return 
BBOOL(
BGl_zd3zd3zz__r4_numbers_6_5z00(BgL_xz00_4212, BgL_yz00_4213, BgL_za7za7_4214));} 
}



/* 2< */
BGL_EXPORTED_DEF bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_27, obj_t BgL_yz00_28)
{ AN_OBJECT;
{ /* Ieee/number.scm 439 */
if(
INTEGERP(BgL_xz00_27))
{ /* Ieee/number.scm 440 */
if(
INTEGERP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)CINT(BgL_xz00_27)<
(long)CINT(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(double)(
(long)CINT(BgL_xz00_27))<
REAL_TO_DOUBLE(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
long BgL_arg1294z00_592;
{ /* Ieee/number.scm 440 */
long BgL_auxz00_5075;
BgL_auxz00_5075 = 
(long)CINT(BgL_xz00_27); 
BgL_arg1294z00_592 = 
LONG_TO_ELONG(BgL_auxz00_5075); } 
{ /* Ieee/number.scm 440 */
long BgL_n2z00_1935;
BgL_n2z00_1935 = 
BELONG_TO_LONG(BgL_yz00_28); 
return 
(BgL_arg1294z00_592<BgL_n2z00_1935);} }  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
BGL_LONGLONG_T BgL_arg1296z00_594;
{ /* Ieee/number.scm 440 */
long BgL_auxz00_5082;
BgL_auxz00_5082 = 
(long)CINT(BgL_xz00_27); 
BgL_arg1296z00_594 = 
LONG_TO_LLONG(BgL_auxz00_5082); } 
return 
(BgL_arg1296z00_594<
BLLONG_TO_LLONG(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_27)), BgL_yz00_28))<((long)0));}  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_28));} } } } } }  else 
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_xz00_27))
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_27)<
REAL_TO_DOUBLE(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
INTEGERP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_27)<
(double)(
(long)CINT(BgL_yz00_28)));}  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
double BgL_r1z00_1957;
BgL_r1z00_1957 = 
REAL_TO_DOUBLE(BgL_xz00_27); 
return 
(BgL_r1z00_1957<
(double)(
BELONG_TO_LONG(BgL_yz00_28)));}  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_27)<
(double)(
BLLONG_TO_LLONG(BgL_yz00_28)));}  else 
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_27)<
bgl_bignum_to_flonum(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_28));} } } } } }  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_xz00_27))
{ /* Ieee/number.scm 440 */
if(
INTEGERP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
long BgL_arg1311z00_609;
{ /* Ieee/number.scm 440 */
long BgL_auxz00_5132;
BgL_auxz00_5132 = 
(long)CINT(BgL_yz00_28); 
BgL_arg1311z00_609 = 
LONG_TO_ELONG(BgL_auxz00_5132); } 
{ /* Ieee/number.scm 440 */
long BgL_n1z00_1969;
BgL_n1z00_1969 = 
BELONG_TO_LONG(BgL_xz00_27); 
return 
(BgL_n1z00_1969<BgL_arg1311z00_609);} }  else 
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
double BgL_r2z00_1973;
BgL_r2z00_1973 = 
REAL_TO_DOUBLE(BgL_yz00_28); 
return 
(
(double)(
BELONG_TO_LONG(BgL_xz00_27))<BgL_r2z00_1973);}  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
long BgL_n1z00_1975;long BgL_n2z00_1976;
BgL_n1z00_1975 = 
BELONG_TO_LONG(BgL_xz00_27); 
BgL_n2z00_1976 = 
BELONG_TO_LONG(BgL_yz00_28); 
return 
(BgL_n1z00_1975<BgL_n2z00_1976);}  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
BGL_LONGLONG_T BgL_n2z00_1979;
BgL_n2z00_1979 = 
BLLONG_TO_LLONG(BgL_yz00_28); 
return 
(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_27))<BgL_n2z00_1979);}  else 
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
long BgL_n1z00_1986;
{ /* Ieee/number.scm 440 */
int BgL_auxz00_5156;
{ /* Ieee/number.scm 440 */
obj_t BgL_auxz00_5157;
{ /* Ieee/number.scm 440 */
long BgL_xz00_1981;
BgL_xz00_1981 = 
BELONG_TO_LONG(BgL_xz00_27); 
BgL_auxz00_5157 = 
bgl_long_to_bignum(BgL_xz00_1981); } 
BgL_auxz00_5156 = 
bgl_bignum_cmp(BgL_auxz00_5157, BgL_yz00_28); } 
BgL_n1z00_1986 = 
(long)(BgL_auxz00_5156); } 
return 
(BgL_n1z00_1986<((long)0));}  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_28));} } } } } }  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_xz00_27))
{ /* Ieee/number.scm 440 */
if(
INTEGERP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
BGL_LONGLONG_T BgL_arg1321z00_619;
{ /* Ieee/number.scm 440 */
long BgL_auxz00_5169;
BgL_auxz00_5169 = 
(long)CINT(BgL_yz00_28); 
BgL_arg1321z00_619 = 
LONG_TO_LLONG(BgL_auxz00_5169); } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_27)<BgL_arg1321z00_619);}  else 
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_27))<
REAL_TO_DOUBLE(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
BGL_LONGLONG_T BgL_n1z00_1998;
BgL_n1z00_1998 = 
BLLONG_TO_LLONG(BgL_xz00_27); 
return 
(BgL_n1z00_1998<
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_28)));}  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_27)<
BLLONG_TO_LLONG(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_27)), BgL_yz00_28))<((long)0));}  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_28));} } } } } }  else 
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_xz00_27))
{ /* Ieee/number.scm 440 */
if(
BIGNUMP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_27, BgL_yz00_28))<((long)0));}  else 
{ /* Ieee/number.scm 440 */
if(
INTEGERP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_27, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_28))))<((long)0));}  else 
{ /* Ieee/number.scm 440 */
if(
REALP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_27)<
REAL_TO_DOUBLE(BgL_yz00_28));}  else 
{ /* Ieee/number.scm 440 */
if(
ELONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
long BgL_n1z00_2040;
{ /* Ieee/number.scm 440 */
int BgL_auxz00_5221;
{ /* Ieee/number.scm 440 */
obj_t BgL_auxz00_5222;
{ /* Ieee/number.scm 440 */
long BgL_xz00_2035;
BgL_xz00_2035 = 
BELONG_TO_LONG(BgL_yz00_28); 
BgL_auxz00_5222 = 
bgl_long_to_bignum(BgL_xz00_2035); } 
BgL_auxz00_5221 = 
bgl_bignum_cmp(BgL_xz00_27, BgL_auxz00_5222); } 
BgL_n1z00_2040 = 
(long)(BgL_auxz00_5221); } 
return 
(BgL_n1z00_2040<((long)0));}  else 
{ /* Ieee/number.scm 440 */
if(
LLONGP(BgL_yz00_28))
{ /* Ieee/number.scm 440 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_27, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_28))))<((long)0));}  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_28));} } } } } }  else 
{ /* Ieee/number.scm 440 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2774z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_27));} } } } } } 
}



/* _2< */
obj_t BGl__2zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4215, obj_t BgL_xz00_4216, obj_t BgL_yz00_4217)
{ AN_OBJECT;
{ /* Ieee/number.scm 439 */
return 
BBOOL(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_4216, BgL_yz00_4217));} 
}



/* < */
BGL_EXPORTED_DEF bool_t BGl_zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_xz00_29, obj_t BgL_yz00_30, obj_t BgL_za7za7_31)
{ AN_OBJECT;
{ /* Ieee/number.scm 445 */
{ 
obj_t BgL_xz00_639;obj_t BgL_za7za7_640;
if(
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_29, BgL_yz00_30))
{ /* Ieee/number.scm 451 */
BgL_xz00_639 = BgL_yz00_30; 
BgL_za7za7_640 = BgL_za7za7_31; 
BgL_zc3anonymousza31340ze3z83_641:
if(
NULLP(BgL_za7za7_640))
{ /* Ieee/number.scm 448 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 449 */
bool_t BgL_testz00_5245;
{ /* Ieee/number.scm 449 */
obj_t BgL_arg1345z00_646;
{ /* Ieee/number.scm 449 */
obj_t BgL_pairz00_2053;
if(
PAIRP(BgL_za7za7_640))
{ /* Ieee/number.scm 449 */
BgL_pairz00_2053 = BgL_za7za7_640; }  else 
{ 
obj_t BgL_auxz00_5248;
BgL_auxz00_5248 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)17557)), BGl_string2776z00zz__r4_numbers_6_5z00, BGl_string2773z00zz__r4_numbers_6_5z00, BgL_za7za7_640); 
FAILURE(BgL_auxz00_5248,BFALSE,BFALSE);} 
BgL_arg1345z00_646 = 
CAR(BgL_pairz00_2053); } 
BgL_testz00_5245 = 
BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_639, BgL_arg1345z00_646); } 
if(BgL_testz00_5245)
{ 
obj_t BgL_za7za7_5256;obj_t BgL_xz00_5254;
BgL_xz00_5254 = 
CAR(BgL_za7za7_640); 
BgL_za7za7_5256 = 
CDR(BgL_za7za7_640); 
BgL_za7za7_640 = BgL_za7za7_5256; 
BgL_xz00_639 = BgL_xz00_5254; 
goto BgL_zc3anonymousza31340ze3z83_641;}  else 
{ /* Ieee/number.scm 449 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 451 */
return ((bool_t)0);} } } 
}



/* _< */
obj_t BGl__zc3zc3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4218, obj_t BgL_xz00_4219, obj_t BgL_yz00_4220, obj_t BgL_za7za7_4221)
{ AN_OBJECT;
{ /* Ieee/number.scm 445 */
return 
BBOOL(
BGl_zc3zc3zz__r4_numbers_6_5z00(BgL_xz00_4219, BgL_yz00_4220, BgL_za7za7_4221));} 
}



/* 2> */
BGL_EXPORTED_DEF bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_32, obj_t BgL_yz00_33)
{ AN_OBJECT;
{ /* Ieee/number.scm 456 */
if(
INTEGERP(BgL_xz00_32))
{ /* Ieee/number.scm 457 */
if(
INTEGERP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)CINT(BgL_xz00_32)>
(long)CINT(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(double)(
(long)CINT(BgL_xz00_32))>
REAL_TO_DOUBLE(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
long BgL_arg1354z00_653;
{ /* Ieee/number.scm 457 */
long BgL_auxz00_5275;
BgL_auxz00_5275 = 
(long)CINT(BgL_xz00_32); 
BgL_arg1354z00_653 = 
LONG_TO_ELONG(BgL_auxz00_5275); } 
{ /* Ieee/number.scm 457 */
long BgL_n2z00_2066;
BgL_n2z00_2066 = 
BELONG_TO_LONG(BgL_yz00_33); 
return 
(BgL_arg1354z00_653>BgL_n2z00_2066);} }  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
BGL_LONGLONG_T BgL_arg1356z00_655;
{ /* Ieee/number.scm 457 */
long BgL_auxz00_5282;
BgL_auxz00_5282 = 
(long)CINT(BgL_xz00_32); 
BgL_arg1356z00_655 = 
LONG_TO_LLONG(BgL_auxz00_5282); } 
return 
(BgL_arg1356z00_655>
BLLONG_TO_LLONG(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_32)), BgL_yz00_33))>((long)0));}  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_33));} } } } } }  else 
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_xz00_32))
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_32)>
REAL_TO_DOUBLE(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
INTEGERP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_32)>
(double)(
(long)CINT(BgL_yz00_33)));}  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
double BgL_r1z00_2088;
BgL_r1z00_2088 = 
REAL_TO_DOUBLE(BgL_xz00_32); 
return 
(BgL_r1z00_2088>
(double)(
BELONG_TO_LONG(BgL_yz00_33)));}  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_32)>
(double)(
BLLONG_TO_LLONG(BgL_yz00_33)));}  else 
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_32)>
bgl_bignum_to_flonum(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_33));} } } } } }  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_xz00_32))
{ /* Ieee/number.scm 457 */
if(
INTEGERP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
long BgL_arg1377z00_670;
{ /* Ieee/number.scm 457 */
long BgL_auxz00_5332;
BgL_auxz00_5332 = 
(long)CINT(BgL_yz00_33); 
BgL_arg1377z00_670 = 
LONG_TO_ELONG(BgL_auxz00_5332); } 
{ /* Ieee/number.scm 457 */
long BgL_n1z00_2100;
BgL_n1z00_2100 = 
BELONG_TO_LONG(BgL_xz00_32); 
return 
(BgL_n1z00_2100>BgL_arg1377z00_670);} }  else 
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
double BgL_r2z00_2104;
BgL_r2z00_2104 = 
REAL_TO_DOUBLE(BgL_yz00_33); 
return 
(
(double)(
BELONG_TO_LONG(BgL_xz00_32))>BgL_r2z00_2104);}  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
long BgL_n1z00_2106;long BgL_n2z00_2107;
BgL_n1z00_2106 = 
BELONG_TO_LONG(BgL_xz00_32); 
BgL_n2z00_2107 = 
BELONG_TO_LONG(BgL_yz00_33); 
return 
(BgL_n1z00_2106>BgL_n2z00_2107);}  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
BGL_LONGLONG_T BgL_n2z00_2110;
BgL_n2z00_2110 = 
BLLONG_TO_LLONG(BgL_yz00_33); 
return 
(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_32))>BgL_n2z00_2110);}  else 
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
long BgL_n1z00_2117;
{ /* Ieee/number.scm 457 */
int BgL_auxz00_5356;
{ /* Ieee/number.scm 457 */
obj_t BgL_auxz00_5357;
{ /* Ieee/number.scm 457 */
long BgL_xz00_2112;
BgL_xz00_2112 = 
BELONG_TO_LONG(BgL_xz00_32); 
BgL_auxz00_5357 = 
bgl_long_to_bignum(BgL_xz00_2112); } 
BgL_auxz00_5356 = 
bgl_bignum_cmp(BgL_auxz00_5357, BgL_yz00_33); } 
BgL_n1z00_2117 = 
(long)(BgL_auxz00_5356); } 
return 
(BgL_n1z00_2117>((long)0));}  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_33));} } } } } }  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_xz00_32))
{ /* Ieee/number.scm 457 */
if(
INTEGERP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
BGL_LONGLONG_T BgL_arg1387z00_680;
{ /* Ieee/number.scm 457 */
long BgL_auxz00_5369;
BgL_auxz00_5369 = 
(long)CINT(BgL_yz00_33); 
BgL_arg1387z00_680 = 
LONG_TO_LLONG(BgL_auxz00_5369); } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_32)>BgL_arg1387z00_680);}  else 
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_32))>
REAL_TO_DOUBLE(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
BGL_LONGLONG_T BgL_n1z00_2129;
BgL_n1z00_2129 = 
BLLONG_TO_LLONG(BgL_xz00_32); 
return 
(BgL_n1z00_2129>
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_33)));}  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_32)>
BLLONG_TO_LLONG(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_32)), BgL_yz00_33))>((long)0));}  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_33));} } } } } }  else 
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_xz00_32))
{ /* Ieee/number.scm 457 */
if(
BIGNUMP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_32, BgL_yz00_33))>((long)0));}  else 
{ /* Ieee/number.scm 457 */
if(
INTEGERP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_32, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_33))))>((long)0));}  else 
{ /* Ieee/number.scm 457 */
if(
REALP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_32)>
REAL_TO_DOUBLE(BgL_yz00_33));}  else 
{ /* Ieee/number.scm 457 */
if(
ELONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
long BgL_n1z00_2171;
{ /* Ieee/number.scm 457 */
int BgL_auxz00_5421;
{ /* Ieee/number.scm 457 */
obj_t BgL_auxz00_5422;
{ /* Ieee/number.scm 457 */
long BgL_xz00_2166;
BgL_xz00_2166 = 
BELONG_TO_LONG(BgL_yz00_33); 
BgL_auxz00_5422 = 
bgl_long_to_bignum(BgL_xz00_2166); } 
BgL_auxz00_5421 = 
bgl_bignum_cmp(BgL_xz00_32, BgL_auxz00_5422); } 
BgL_n1z00_2171 = 
(long)(BgL_auxz00_5421); } 
return 
(BgL_n1z00_2171>((long)0));}  else 
{ /* Ieee/number.scm 457 */
if(
LLONGP(BgL_yz00_33))
{ /* Ieee/number.scm 457 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_32, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_33))))>((long)0));}  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_33));} } } } } }  else 
{ /* Ieee/number.scm 457 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2777z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_32));} } } } } } 
}



/* _2> */
obj_t BGl__2ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4222, obj_t BgL_xz00_4223, obj_t BgL_yz00_4224)
{ AN_OBJECT;
{ /* Ieee/number.scm 456 */
return 
BBOOL(
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_4223, BgL_yz00_4224));} 
}



/* > */
BGL_EXPORTED_DEF bool_t BGl_ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_xz00_34, obj_t BgL_yz00_35, obj_t BgL_za7za7_36)
{ AN_OBJECT;
{ /* Ieee/number.scm 462 */
{ 
obj_t BgL_xz00_700;obj_t BgL_za7za7_701;
if(
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_34, BgL_yz00_35))
{ /* Ieee/number.scm 468 */
BgL_xz00_700 = BgL_yz00_35; 
BgL_za7za7_701 = BgL_za7za7_36; 
BgL_zc3anonymousza31405ze3z83_702:
if(
NULLP(BgL_za7za7_701))
{ /* Ieee/number.scm 465 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 466 */
bool_t BgL_testz00_5445;
{ /* Ieee/number.scm 466 */
obj_t BgL_arg1410z00_707;
{ /* Ieee/number.scm 466 */
obj_t BgL_pairz00_2184;
if(
PAIRP(BgL_za7za7_701))
{ /* Ieee/number.scm 466 */
BgL_pairz00_2184 = BgL_za7za7_701; }  else 
{ 
obj_t BgL_auxz00_5448;
BgL_auxz00_5448 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)18202)), BGl_string2779z00zz__r4_numbers_6_5z00, BGl_string2773z00zz__r4_numbers_6_5z00, BgL_za7za7_701); 
FAILURE(BgL_auxz00_5448,BFALSE,BFALSE);} 
BgL_arg1410z00_707 = 
CAR(BgL_pairz00_2184); } 
BgL_testz00_5445 = 
BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_700, BgL_arg1410z00_707); } 
if(BgL_testz00_5445)
{ 
obj_t BgL_za7za7_5456;obj_t BgL_xz00_5454;
BgL_xz00_5454 = 
CAR(BgL_za7za7_701); 
BgL_za7za7_5456 = 
CDR(BgL_za7za7_701); 
BgL_za7za7_701 = BgL_za7za7_5456; 
BgL_xz00_700 = BgL_xz00_5454; 
goto BgL_zc3anonymousza31405ze3z83_702;}  else 
{ /* Ieee/number.scm 466 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 468 */
return ((bool_t)0);} } } 
}



/* _> */
obj_t BGl__ze3ze3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4225, obj_t BgL_xz00_4226, obj_t BgL_yz00_4227, obj_t BgL_za7za7_4228)
{ AN_OBJECT;
{ /* Ieee/number.scm 462 */
return 
BBOOL(
BGl_ze3ze3zz__r4_numbers_6_5z00(BgL_xz00_4226, BgL_yz00_4227, BgL_za7za7_4228));} 
}



/* 2<= */
BGL_EXPORTED_DEF bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_37, obj_t BgL_yz00_38)
{ AN_OBJECT;
{ /* Ieee/number.scm 473 */
if(
INTEGERP(BgL_xz00_37))
{ /* Ieee/number.scm 474 */
if(
INTEGERP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)CINT(BgL_xz00_37)<=
(long)CINT(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(double)(
(long)CINT(BgL_xz00_37))<=
REAL_TO_DOUBLE(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
long BgL_arg1416z00_714;
{ /* Ieee/number.scm 474 */
long BgL_auxz00_5475;
BgL_auxz00_5475 = 
(long)CINT(BgL_xz00_37); 
BgL_arg1416z00_714 = 
LONG_TO_ELONG(BgL_auxz00_5475); } 
{ /* Ieee/number.scm 474 */
long BgL_n2z00_2197;
BgL_n2z00_2197 = 
BELONG_TO_LONG(BgL_yz00_38); 
return 
(BgL_arg1416z00_714<=BgL_n2z00_2197);} }  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
BGL_LONGLONG_T BgL_arg1418z00_716;
{ /* Ieee/number.scm 474 */
long BgL_auxz00_5482;
BgL_auxz00_5482 = 
(long)CINT(BgL_xz00_37); 
BgL_arg1418z00_716 = 
LONG_TO_LLONG(BgL_auxz00_5482); } 
return 
(BgL_arg1418z00_716<=
BLLONG_TO_LLONG(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_37)), BgL_yz00_38))<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_38));} } } } } }  else 
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_xz00_37))
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_37)<=
REAL_TO_DOUBLE(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
INTEGERP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_37)<=
(double)(
(long)CINT(BgL_yz00_38)));}  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
double BgL_r1z00_2219;
BgL_r1z00_2219 = 
REAL_TO_DOUBLE(BgL_xz00_37); 
return 
(BgL_r1z00_2219<=
(double)(
BELONG_TO_LONG(BgL_yz00_38)));}  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_37)<=
(double)(
BLLONG_TO_LLONG(BgL_yz00_38)));}  else 
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_37)<=
bgl_bignum_to_flonum(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_38));} } } } } }  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_xz00_37))
{ /* Ieee/number.scm 474 */
if(
INTEGERP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
long BgL_arg1433z00_731;
{ /* Ieee/number.scm 474 */
long BgL_auxz00_5532;
BgL_auxz00_5532 = 
(long)CINT(BgL_yz00_38); 
BgL_arg1433z00_731 = 
LONG_TO_ELONG(BgL_auxz00_5532); } 
{ /* Ieee/number.scm 474 */
long BgL_n1z00_2231;
BgL_n1z00_2231 = 
BELONG_TO_LONG(BgL_xz00_37); 
return 
(BgL_n1z00_2231<=BgL_arg1433z00_731);} }  else 
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
double BgL_r2z00_2235;
BgL_r2z00_2235 = 
REAL_TO_DOUBLE(BgL_yz00_38); 
return 
(
(double)(
BELONG_TO_LONG(BgL_xz00_37))<=BgL_r2z00_2235);}  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
long BgL_n1z00_2237;long BgL_n2z00_2238;
BgL_n1z00_2237 = 
BELONG_TO_LONG(BgL_xz00_37); 
BgL_n2z00_2238 = 
BELONG_TO_LONG(BgL_yz00_38); 
return 
(BgL_n1z00_2237<=BgL_n2z00_2238);}  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
BGL_LONGLONG_T BgL_n2z00_2241;
BgL_n2z00_2241 = 
BLLONG_TO_LLONG(BgL_yz00_38); 
return 
(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_37))<=BgL_n2z00_2241);}  else 
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
long BgL_n1z00_2248;
{ /* Ieee/number.scm 474 */
int BgL_auxz00_5556;
{ /* Ieee/number.scm 474 */
obj_t BgL_auxz00_5557;
{ /* Ieee/number.scm 474 */
long BgL_xz00_2243;
BgL_xz00_2243 = 
BELONG_TO_LONG(BgL_xz00_37); 
BgL_auxz00_5557 = 
bgl_long_to_bignum(BgL_xz00_2243); } 
BgL_auxz00_5556 = 
bgl_bignum_cmp(BgL_auxz00_5557, BgL_yz00_38); } 
BgL_n1z00_2248 = 
(long)(BgL_auxz00_5556); } 
return 
(BgL_n1z00_2248<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_38));} } } } } }  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_xz00_37))
{ /* Ieee/number.scm 474 */
if(
INTEGERP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
BGL_LONGLONG_T BgL_arg1443z00_741;
{ /* Ieee/number.scm 474 */
long BgL_auxz00_5569;
BgL_auxz00_5569 = 
(long)CINT(BgL_yz00_38); 
BgL_arg1443z00_741 = 
LONG_TO_LLONG(BgL_auxz00_5569); } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_37)<=BgL_arg1443z00_741);}  else 
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_37))<=
REAL_TO_DOUBLE(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
BGL_LONGLONG_T BgL_n1z00_2260;
BgL_n1z00_2260 = 
BLLONG_TO_LLONG(BgL_xz00_37); 
return 
(BgL_n1z00_2260<=
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_38)));}  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_37)<=
BLLONG_TO_LLONG(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_37)), BgL_yz00_38))<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_38));} } } } } }  else 
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_xz00_37))
{ /* Ieee/number.scm 474 */
if(
BIGNUMP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_37, BgL_yz00_38))<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
if(
INTEGERP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_37, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_38))))<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
if(
REALP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_37)<=
REAL_TO_DOUBLE(BgL_yz00_38));}  else 
{ /* Ieee/number.scm 474 */
if(
ELONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
long BgL_n1z00_2302;
{ /* Ieee/number.scm 474 */
int BgL_auxz00_5621;
{ /* Ieee/number.scm 474 */
obj_t BgL_auxz00_5622;
{ /* Ieee/number.scm 474 */
long BgL_xz00_2297;
BgL_xz00_2297 = 
BELONG_TO_LONG(BgL_yz00_38); 
BgL_auxz00_5622 = 
bgl_long_to_bignum(BgL_xz00_2297); } 
BgL_auxz00_5621 = 
bgl_bignum_cmp(BgL_xz00_37, BgL_auxz00_5622); } 
BgL_n1z00_2302 = 
(long)(BgL_auxz00_5621); } 
return 
(BgL_n1z00_2302<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
if(
LLONGP(BgL_yz00_38))
{ /* Ieee/number.scm 474 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_37, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_38))))<=((long)0));}  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_38));} } } } } }  else 
{ /* Ieee/number.scm 474 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2780z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_37));} } } } } } 
}



/* _2<= */
obj_t BGl__2zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_envz00_4229, obj_t BgL_xz00_4230, obj_t BgL_yz00_4231)
{ AN_OBJECT;
{ /* Ieee/number.scm 473 */
return 
BBOOL(
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_4230, BgL_yz00_4231));} 
}



/* <= */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_xz00_39, obj_t BgL_yz00_40, obj_t BgL_za7za7_41)
{ AN_OBJECT;
{ /* Ieee/number.scm 479 */
{ 
obj_t BgL_xz00_761;obj_t BgL_za7za7_762;
if(
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_39, BgL_yz00_40))
{ /* Ieee/number.scm 485 */
BgL_xz00_761 = BgL_yz00_40; 
BgL_za7za7_762 = BgL_za7za7_41; 
BgL_zc3anonymousza31461ze3z83_763:
if(
NULLP(BgL_za7za7_762))
{ /* Ieee/number.scm 482 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 483 */
bool_t BgL_testz00_5645;
{ /* Ieee/number.scm 483 */
obj_t BgL_arg1466z00_768;
{ /* Ieee/number.scm 483 */
obj_t BgL_pairz00_2315;
if(
PAIRP(BgL_za7za7_762))
{ /* Ieee/number.scm 483 */
BgL_pairz00_2315 = BgL_za7za7_762; }  else 
{ 
obj_t BgL_auxz00_5648;
BgL_auxz00_5648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)18850)), BGl_string2782z00zz__r4_numbers_6_5z00, BGl_string2773z00zz__r4_numbers_6_5z00, BgL_za7za7_762); 
FAILURE(BgL_auxz00_5648,BFALSE,BFALSE);} 
BgL_arg1466z00_768 = 
CAR(BgL_pairz00_2315); } 
BgL_testz00_5645 = 
BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_761, BgL_arg1466z00_768); } 
if(BgL_testz00_5645)
{ 
obj_t BgL_za7za7_5656;obj_t BgL_xz00_5654;
BgL_xz00_5654 = 
CAR(BgL_za7za7_762); 
BgL_za7za7_5656 = 
CDR(BgL_za7za7_762); 
BgL_za7za7_762 = BgL_za7za7_5656; 
BgL_xz00_761 = BgL_xz00_5654; 
goto BgL_zc3anonymousza31461ze3z83_763;}  else 
{ /* Ieee/number.scm 483 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 485 */
return ((bool_t)0);} } } 
}



/* _<= */
obj_t BGl__zc3zd3z10zz__r4_numbers_6_5z00(obj_t BgL_envz00_4232, obj_t BgL_xz00_4233, obj_t BgL_yz00_4234, obj_t BgL_za7za7_4235)
{ AN_OBJECT;
{ /* Ieee/number.scm 479 */
return 
BBOOL(
BGl_zc3zd3z10zz__r4_numbers_6_5z00(BgL_xz00_4233, BgL_yz00_4234, BgL_za7za7_4235));} 
}



/* 2>= */
BGL_EXPORTED_DEF bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_42, obj_t BgL_yz00_43)
{ AN_OBJECT;
{ /* Ieee/number.scm 490 */
if(
INTEGERP(BgL_xz00_42))
{ /* Ieee/number.scm 491 */
if(
INTEGERP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)CINT(BgL_xz00_42)>=
(long)CINT(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(double)(
(long)CINT(BgL_xz00_42))>=
REAL_TO_DOUBLE(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
long BgL_arg1472z00_775;
{ /* Ieee/number.scm 491 */
long BgL_auxz00_5675;
BgL_auxz00_5675 = 
(long)CINT(BgL_xz00_42); 
BgL_arg1472z00_775 = 
LONG_TO_ELONG(BgL_auxz00_5675); } 
{ /* Ieee/number.scm 491 */
long BgL_n2z00_2328;
BgL_n2z00_2328 = 
BELONG_TO_LONG(BgL_yz00_43); 
return 
(BgL_arg1472z00_775>=BgL_n2z00_2328);} }  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
BGL_LONGLONG_T BgL_arg1474z00_777;
{ /* Ieee/number.scm 491 */
long BgL_auxz00_5682;
BgL_auxz00_5682 = 
(long)CINT(BgL_xz00_42); 
BgL_arg1474z00_777 = 
LONG_TO_LLONG(BgL_auxz00_5682); } 
return 
(BgL_arg1474z00_777>=
BLLONG_TO_LLONG(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_42)), BgL_yz00_43))>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_43));} } } } } }  else 
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_xz00_42))
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_42)>=
REAL_TO_DOUBLE(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
INTEGERP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_42)>=
(double)(
(long)CINT(BgL_yz00_43)));}  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
double BgL_r1z00_2350;
BgL_r1z00_2350 = 
REAL_TO_DOUBLE(BgL_xz00_42); 
return 
(BgL_r1z00_2350>=
(double)(
BELONG_TO_LONG(BgL_yz00_43)));}  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_42)>=
(double)(
BLLONG_TO_LLONG(BgL_yz00_43)));}  else 
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_42)>=
bgl_bignum_to_flonum(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_43));} } } } } }  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_xz00_42))
{ /* Ieee/number.scm 491 */
if(
INTEGERP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
long BgL_arg1489z00_792;
{ /* Ieee/number.scm 491 */
long BgL_auxz00_5732;
BgL_auxz00_5732 = 
(long)CINT(BgL_yz00_43); 
BgL_arg1489z00_792 = 
LONG_TO_ELONG(BgL_auxz00_5732); } 
{ /* Ieee/number.scm 491 */
long BgL_n1z00_2362;
BgL_n1z00_2362 = 
BELONG_TO_LONG(BgL_xz00_42); 
return 
(BgL_n1z00_2362>=BgL_arg1489z00_792);} }  else 
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
double BgL_r2z00_2366;
BgL_r2z00_2366 = 
REAL_TO_DOUBLE(BgL_yz00_43); 
return 
(
(double)(
BELONG_TO_LONG(BgL_xz00_42))>=BgL_r2z00_2366);}  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
long BgL_n1z00_2368;long BgL_n2z00_2369;
BgL_n1z00_2368 = 
BELONG_TO_LONG(BgL_xz00_42); 
BgL_n2z00_2369 = 
BELONG_TO_LONG(BgL_yz00_43); 
return 
(BgL_n1z00_2368>=BgL_n2z00_2369);}  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
BGL_LONGLONG_T BgL_n2z00_2372;
BgL_n2z00_2372 = 
BLLONG_TO_LLONG(BgL_yz00_43); 
return 
(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_42))>=BgL_n2z00_2372);}  else 
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
long BgL_n1z00_2379;
{ /* Ieee/number.scm 491 */
int BgL_auxz00_5756;
{ /* Ieee/number.scm 491 */
obj_t BgL_auxz00_5757;
{ /* Ieee/number.scm 491 */
long BgL_xz00_2374;
BgL_xz00_2374 = 
BELONG_TO_LONG(BgL_xz00_42); 
BgL_auxz00_5757 = 
bgl_long_to_bignum(BgL_xz00_2374); } 
BgL_auxz00_5756 = 
bgl_bignum_cmp(BgL_auxz00_5757, BgL_yz00_43); } 
BgL_n1z00_2379 = 
(long)(BgL_auxz00_5756); } 
return 
(BgL_n1z00_2379>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_43));} } } } } }  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_xz00_42))
{ /* Ieee/number.scm 491 */
if(
INTEGERP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
BGL_LONGLONG_T BgL_arg1499z00_802;
{ /* Ieee/number.scm 491 */
long BgL_auxz00_5769;
BgL_auxz00_5769 = 
(long)CINT(BgL_yz00_43); 
BgL_arg1499z00_802 = 
LONG_TO_LLONG(BgL_auxz00_5769); } 
return 
(
BLLONG_TO_LLONG(BgL_xz00_42)>=BgL_arg1499z00_802);}  else 
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_42))>=
REAL_TO_DOUBLE(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
BGL_LONGLONG_T BgL_n1z00_2391;
BgL_n1z00_2391 = 
BLLONG_TO_LLONG(BgL_xz00_42); 
return 
(BgL_n1z00_2391>=
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_43)));}  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_42)>=
BLLONG_TO_LLONG(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)(
bgl_bignum_cmp(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_42)), BgL_yz00_43))>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_43));} } } } } }  else 
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_xz00_42))
{ /* Ieee/number.scm 491 */
if(
BIGNUMP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_42, BgL_yz00_43))>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
if(
INTEGERP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_42, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_43))))>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
if(
REALP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
bgl_bignum_to_flonum(BgL_xz00_42)>=
REAL_TO_DOUBLE(BgL_yz00_43));}  else 
{ /* Ieee/number.scm 491 */
if(
ELONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
long BgL_n1z00_2433;
{ /* Ieee/number.scm 491 */
int BgL_auxz00_5821;
{ /* Ieee/number.scm 491 */
obj_t BgL_auxz00_5822;
{ /* Ieee/number.scm 491 */
long BgL_xz00_2428;
BgL_xz00_2428 = 
BELONG_TO_LONG(BgL_yz00_43); 
BgL_auxz00_5822 = 
bgl_long_to_bignum(BgL_xz00_2428); } 
BgL_auxz00_5821 = 
bgl_bignum_cmp(BgL_xz00_42, BgL_auxz00_5822); } 
BgL_n1z00_2433 = 
(long)(BgL_auxz00_5821); } 
return 
(BgL_n1z00_2433>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
if(
LLONGP(BgL_yz00_43))
{ /* Ieee/number.scm 491 */
return 
(
(long)(
bgl_bignum_cmp(BgL_xz00_42, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_43))))>=((long)0));}  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_43));} } } } } }  else 
{ /* Ieee/number.scm 491 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_symbol2783z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_42));} } } } } } 
}



/* _2>= */
obj_t BGl__2ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_envz00_4236, obj_t BgL_xz00_4237, obj_t BgL_yz00_4238)
{ AN_OBJECT;
{ /* Ieee/number.scm 490 */
return 
BBOOL(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_4237, BgL_yz00_4238));} 
}



/* >= */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_xz00_44, obj_t BgL_yz00_45, obj_t BgL_za7za7_46)
{ AN_OBJECT;
{ /* Ieee/number.scm 496 */
{ 
obj_t BgL_xz00_822;obj_t BgL_za7za7_823;
if(
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_44, BgL_yz00_45))
{ /* Ieee/number.scm 502 */
BgL_xz00_822 = BgL_yz00_45; 
BgL_za7za7_823 = BgL_za7za7_46; 
BgL_zc3anonymousza31517ze3z83_824:
if(
NULLP(BgL_za7za7_823))
{ /* Ieee/number.scm 499 */
return ((bool_t)1);}  else 
{ /* Ieee/number.scm 500 */
bool_t BgL_testz00_5845;
{ /* Ieee/number.scm 500 */
obj_t BgL_arg1522z00_829;
{ /* Ieee/number.scm 500 */
obj_t BgL_pairz00_2446;
if(
PAIRP(BgL_za7za7_823))
{ /* Ieee/number.scm 500 */
BgL_pairz00_2446 = BgL_za7za7_823; }  else 
{ 
obj_t BgL_auxz00_5848;
BgL_auxz00_5848 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)19500)), BGl_string2785z00zz__r4_numbers_6_5z00, BGl_string2773z00zz__r4_numbers_6_5z00, BgL_za7za7_823); 
FAILURE(BgL_auxz00_5848,BFALSE,BFALSE);} 
BgL_arg1522z00_829 = 
CAR(BgL_pairz00_2446); } 
BgL_testz00_5845 = 
BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_822, BgL_arg1522z00_829); } 
if(BgL_testz00_5845)
{ 
obj_t BgL_za7za7_5856;obj_t BgL_xz00_5854;
BgL_xz00_5854 = 
CAR(BgL_za7za7_823); 
BgL_za7za7_5856 = 
CDR(BgL_za7za7_823); 
BgL_za7za7_823 = BgL_za7za7_5856; 
BgL_xz00_822 = BgL_xz00_5854; 
goto BgL_zc3anonymousza31517ze3z83_824;}  else 
{ /* Ieee/number.scm 500 */
return ((bool_t)0);} } }  else 
{ /* Ieee/number.scm 502 */
return ((bool_t)0);} } } 
}



/* _>= */
obj_t BGl__ze3zd3z30zz__r4_numbers_6_5z00(obj_t BgL_envz00_4239, obj_t BgL_xz00_4240, obj_t BgL_yz00_4241, obj_t BgL_za7za7_4242)
{ AN_OBJECT;
{ /* Ieee/number.scm 496 */
return 
BBOOL(
BGl_ze3zd3z30zz__r4_numbers_6_5z00(BgL_xz00_4240, BgL_yz00_4241, BgL_za7za7_4242));} 
}



/* zero? */
BGL_EXPORTED_DEF bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t BgL_xz00_47)
{ AN_OBJECT;
{ /* Ieee/number.scm 507 */
if(
INTEGERP(BgL_xz00_47))
{ /* Ieee/number.scm 509 */
return 
(
(long)CINT(BgL_xz00_47)==((long)0));}  else 
{ /* Ieee/number.scm 509 */
if(
REALP(BgL_xz00_47))
{ /* Ieee/number.scm 511 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_47)==((double)0.0));}  else 
{ /* Ieee/number.scm 511 */
if(
ELONGP(BgL_xz00_47))
{ /* Ieee/number.scm 514 */
long BgL_n1z00_2458;
BgL_n1z00_2458 = 
BELONG_TO_LONG(BgL_xz00_47); 
return 
(BgL_n1z00_2458==((long)0));}  else 
{ /* Ieee/number.scm 513 */
if(
LLONGP(BgL_xz00_47))
{ /* Ieee/number.scm 515 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_47)==((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 515 */
if(
BIGNUMP(BgL_xz00_47))
{ /* Ieee/number.scm 517 */
return 
BXZERO(BgL_xz00_47);}  else 
{ /* Ieee/number.scm 517 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2786z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_47));} } } } } } 
}



/* _zero? */
obj_t BGl__za7erozf3z54zz__r4_numbers_6_5z00(obj_t BgL_envz00_4243, obj_t BgL_xz00_4244)
{ AN_OBJECT;
{ /* Ieee/number.scm 507 */
return 
BBOOL(
BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_xz00_4244));} 
}



/* positive? */
BGL_EXPORTED_DEF bool_t BGl_positivezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_48)
{ AN_OBJECT;
{ /* Ieee/number.scm 525 */
if(
INTEGERP(BgL_xz00_48))
{ /* Ieee/number.scm 527 */
return 
(
(long)CINT(BgL_xz00_48)>((long)0));}  else 
{ /* Ieee/number.scm 527 */
if(
REALP(BgL_xz00_48))
{ /* Ieee/number.scm 529 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_48)>((double)0.0));}  else 
{ /* Ieee/number.scm 529 */
if(
ELONGP(BgL_xz00_48))
{ /* Ieee/number.scm 532 */
long BgL_n1z00_2474;
BgL_n1z00_2474 = 
BELONG_TO_LONG(BgL_xz00_48); 
return 
(BgL_n1z00_2474>((long)0));}  else 
{ /* Ieee/number.scm 531 */
if(
LLONGP(BgL_xz00_48))
{ /* Ieee/number.scm 533 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_48)>((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 533 */
if(
BIGNUMP(BgL_xz00_48))
{ /* Ieee/number.scm 535 */
return 
BXPOSITIVE(BgL_xz00_48);}  else 
{ /* Ieee/number.scm 535 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2787z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_48));} } } } } } 
}



/* _positive? */
obj_t BGl__positivezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4245, obj_t BgL_xz00_4246)
{ AN_OBJECT;
{ /* Ieee/number.scm 525 */
return 
BBOOL(
BGl_positivezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4246));} 
}



/* negative? */
BGL_EXPORTED_DEF bool_t BGl_negativezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_xz00_49)
{ AN_OBJECT;
{ /* Ieee/number.scm 543 */
if(
INTEGERP(BgL_xz00_49))
{ /* Ieee/number.scm 545 */
return 
(
(long)CINT(BgL_xz00_49)<((long)0));}  else 
{ /* Ieee/number.scm 545 */
if(
REALP(BgL_xz00_49))
{ /* Ieee/number.scm 547 */
return 
(
REAL_TO_DOUBLE(BgL_xz00_49)<((double)0.0));}  else 
{ /* Ieee/number.scm 547 */
if(
ELONGP(BgL_xz00_49))
{ /* Ieee/number.scm 550 */
long BgL_n1z00_2490;
BgL_n1z00_2490 = 
BELONG_TO_LONG(BgL_xz00_49); 
return 
(BgL_n1z00_2490<((long)0));}  else 
{ /* Ieee/number.scm 549 */
if(
LLONGP(BgL_xz00_49))
{ /* Ieee/number.scm 551 */
return 
(
BLLONG_TO_LLONG(BgL_xz00_49)<((BGL_LONGLONG_T)0));}  else 
{ /* Ieee/number.scm 551 */
if(
BIGNUMP(BgL_xz00_49))
{ /* Ieee/number.scm 553 */
return 
BXNEGATIVE(BgL_xz00_49);}  else 
{ /* Ieee/number.scm 553 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2788z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_49));} } } } } } 
}



/* _negative? */
obj_t BGl__negativezf3zf3zz__r4_numbers_6_5z00(obj_t BgL_envz00_4247, obj_t BgL_xz00_4248)
{ AN_OBJECT;
{ /* Ieee/number.scm 543 */
return 
BBOOL(
BGl_negativezf3zf3zz__r4_numbers_6_5z00(BgL_xz00_4248));} 
}



/* 2max */
BGL_EXPORTED_DEF obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_60, obj_t BgL_yz00_61)
{ AN_OBJECT;
{ /* Ieee/number.scm 575 */
if(
INTEGERP(BgL_xz00_60))
{ /* Ieee/number.scm 576 */
if(
INTEGERP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2519;obj_t BgL_yz00_2520;
BgL_xz00_2519 = BgL_xz00_60; 
BgL_yz00_2520 = BgL_yz00_61; 
if(
(
(long)CINT(BgL_xz00_2519)>
(long)CINT(BgL_yz00_2520)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2519;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2520;} }  else 
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
double BgL_xz00_2525;obj_t BgL_yz00_2526;
BgL_xz00_2525 = 
(double)(
(long)CINT(BgL_xz00_60)); 
BgL_yz00_2526 = BgL_yz00_61; 
if(
(BgL_xz00_2525>
REAL_TO_DOUBLE(BgL_yz00_2526)))
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_xz00_2525);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2526;} }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
long BgL_arg1548z00_856;
{ /* Ieee/number.scm 576 */
long BgL_auxz00_5947;
BgL_auxz00_5947 = 
(long)CINT(BgL_xz00_60); 
BgL_arg1548z00_856 = 
LONG_TO_ELONG(BgL_auxz00_5947); } 
{ /* Ieee/number.scm 576 */
obj_t BgL_yz00_2533;
BgL_yz00_2533 = BgL_yz00_61; 
{ /* Ieee/number.scm 576 */
bool_t BgL_testz00_5950;
{ /* Ieee/number.scm 576 */
long BgL_n2z00_2536;
BgL_n2z00_2536 = 
BELONG_TO_LONG(BgL_yz00_2533); 
BgL_testz00_5950 = 
(BgL_arg1548z00_856>BgL_n2z00_2536); } 
if(BgL_testz00_5950)
{ /* Ieee/number.scm 576 */
return 
make_belong(BgL_arg1548z00_856);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2533;} } } }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
BGL_LONGLONG_T BgL_arg1551z00_858;
{ /* Ieee/number.scm 576 */
long BgL_auxz00_5956;
BgL_auxz00_5956 = 
(long)CINT(BgL_xz00_60); 
BgL_arg1551z00_858 = 
LONG_TO_LLONG(BgL_auxz00_5956); } 
{ /* Ieee/number.scm 576 */
obj_t BgL_yz00_2540;
BgL_yz00_2540 = BgL_yz00_61; 
if(
(BgL_arg1551z00_858>
BLLONG_TO_LLONG(BgL_yz00_2540)))
{ /* Ieee/number.scm 576 */
return 
make_bllong(BgL_arg1551z00_858);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2540;} } }  else 
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2546;obj_t BgL_yz00_2547;
BgL_xz00_2546 = 
bgl_long_to_bignum(
(long)CINT(BgL_xz00_60)); 
BgL_yz00_2547 = BgL_yz00_61; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2546, BgL_yz00_2547))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2546;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2547;} }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_61);} } } } } }  else 
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_xz00_60))
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2558;obj_t BgL_yz00_2559;
BgL_xz00_2558 = BgL_xz00_60; 
BgL_yz00_2559 = BgL_yz00_61; 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2558)>
REAL_TO_DOUBLE(BgL_yz00_2559)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2558;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2559;} }  else 
{ /* Ieee/number.scm 576 */
if(
INTEGERP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2564;double BgL_yz00_2565;
BgL_xz00_2564 = BgL_xz00_60; 
BgL_yz00_2565 = 
(double)(
(long)CINT(BgL_yz00_61)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2564)>BgL_yz00_2565))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2564;}  else 
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_yz00_2565);} }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2570;double BgL_yz00_2571;
BgL_xz00_2570 = BgL_xz00_60; 
BgL_yz00_2571 = 
(double)(
BELONG_TO_LONG(BgL_yz00_61)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2570)>BgL_yz00_2571))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2570;}  else 
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_yz00_2571);} }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2576;double BgL_yz00_2577;
BgL_xz00_2576 = BgL_xz00_60; 
BgL_yz00_2577 = 
(double)(
BLLONG_TO_LLONG(BgL_yz00_61)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2576)>BgL_yz00_2577))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2576;}  else 
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_yz00_2577);} }  else 
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2583;double BgL_yz00_2584;
BgL_xz00_2583 = BgL_xz00_60; 
BgL_yz00_2584 = 
bgl_bignum_to_flonum(BgL_yz00_61); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2583)>BgL_yz00_2584))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2583;}  else 
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_yz00_2584);} }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_61);} } } } } }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_xz00_60))
{ /* Ieee/number.scm 576 */
if(
INTEGERP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
long BgL_arg1567z00_873;
{ /* Ieee/number.scm 576 */
long BgL_auxz00_6016;
BgL_auxz00_6016 = 
(long)CINT(BgL_yz00_61); 
BgL_arg1567z00_873 = 
LONG_TO_ELONG(BgL_auxz00_6016); } 
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2591;
BgL_xz00_2591 = BgL_xz00_60; 
{ /* Ieee/number.scm 576 */
bool_t BgL_testz00_6019;
{ /* Ieee/number.scm 576 */
long BgL_n1z00_2594;
BgL_n1z00_2594 = 
BELONG_TO_LONG(BgL_xz00_2591); 
BgL_testz00_6019 = 
(BgL_n1z00_2594>BgL_arg1567z00_873); } 
if(BgL_testz00_6019)
{ /* Ieee/number.scm 576 */
return BgL_xz00_2591;}  else 
{ /* Ieee/number.scm 576 */
return 
make_belong(BgL_arg1567z00_873);} } } }  else 
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
double BgL_xz00_2597;obj_t BgL_yz00_2598;
BgL_xz00_2597 = 
(double)(
BELONG_TO_LONG(BgL_xz00_60)); 
BgL_yz00_2598 = BgL_yz00_61; 
if(
(BgL_xz00_2597>
REAL_TO_DOUBLE(BgL_yz00_2598)))
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_xz00_2597);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2598;} }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2603;obj_t BgL_yz00_2604;
BgL_xz00_2603 = BgL_xz00_60; 
BgL_yz00_2604 = BgL_yz00_61; 
{ /* Ieee/number.scm 576 */
bool_t BgL_testz00_6033;
{ /* Ieee/number.scm 576 */
long BgL_n1z00_2606;long BgL_n2z00_2607;
BgL_n1z00_2606 = 
BELONG_TO_LONG(BgL_xz00_2603); 
BgL_n2z00_2607 = 
BELONG_TO_LONG(BgL_yz00_2604); 
BgL_testz00_6033 = 
(BgL_n1z00_2606>BgL_n2z00_2607); } 
if(BgL_testz00_6033)
{ /* Ieee/number.scm 576 */
return BgL_xz00_2603;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2604;} } }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
BGL_LONGLONG_T BgL_xz00_2609;obj_t BgL_yz00_2610;
BgL_xz00_2609 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_60)); 
BgL_yz00_2610 = BgL_yz00_61; 
if(
(BgL_xz00_2609>
BLLONG_TO_LLONG(BgL_yz00_2610)))
{ /* Ieee/number.scm 576 */
return 
make_bllong(BgL_xz00_2609);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2610;} }  else 
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2616;obj_t BgL_yz00_2617;
{ /* Ieee/number.scm 576 */
long BgL_xz00_2615;
BgL_xz00_2615 = 
BELONG_TO_LONG(BgL_xz00_60); 
BgL_xz00_2616 = 
bgl_long_to_bignum(BgL_xz00_2615); } 
BgL_yz00_2617 = BgL_yz00_61; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2616, BgL_yz00_2617))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2616;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2617;} }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_61);} } } } } }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_xz00_60))
{ /* Ieee/number.scm 576 */
if(
INTEGERP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
BGL_LONGLONG_T BgL_arg1580z00_883;
{ /* Ieee/number.scm 576 */
long BgL_auxz00_6058;
BgL_auxz00_6058 = 
(long)CINT(BgL_yz00_61); 
BgL_arg1580z00_883 = 
LONG_TO_LLONG(BgL_auxz00_6058); } 
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2629;
BgL_xz00_2629 = BgL_xz00_60; 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2629)>BgL_arg1580z00_883))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2629;}  else 
{ /* Ieee/number.scm 576 */
return 
make_bllong(BgL_arg1580z00_883);} } }  else 
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
double BgL_xz00_2635;obj_t BgL_yz00_2636;
BgL_xz00_2635 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_60)); 
BgL_yz00_2636 = BgL_yz00_61; 
if(
(BgL_xz00_2635>
REAL_TO_DOUBLE(BgL_yz00_2636)))
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_xz00_2635);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2636;} }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2641;BGL_LONGLONG_T BgL_yz00_2642;
BgL_xz00_2641 = BgL_xz00_60; 
BgL_yz00_2642 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_61)); 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2641)>BgL_yz00_2642))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2641;}  else 
{ /* Ieee/number.scm 576 */
return 
make_bllong(BgL_yz00_2642);} }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2647;obj_t BgL_yz00_2648;
BgL_xz00_2647 = BgL_xz00_60; 
BgL_yz00_2648 = BgL_yz00_61; 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2647)>
BLLONG_TO_LLONG(BgL_yz00_2648)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2647;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2648;} }  else 
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2654;obj_t BgL_yz00_2655;
BgL_xz00_2654 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_60)); 
BgL_yz00_2655 = BgL_yz00_61; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2654, BgL_yz00_2655))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2654;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2655;} }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_61);} } } } } }  else 
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_xz00_60))
{ /* Ieee/number.scm 576 */
if(
BIGNUMP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2666;obj_t BgL_yz00_2667;
BgL_xz00_2666 = BgL_xz00_60; 
BgL_yz00_2667 = BgL_yz00_61; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2666, BgL_yz00_2667))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2666;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2667;} }  else 
{ /* Ieee/number.scm 576 */
if(
INTEGERP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2678;obj_t BgL_yz00_2679;
BgL_xz00_2678 = BgL_xz00_60; 
BgL_yz00_2679 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_61)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2678, BgL_yz00_2679))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2678;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2679;} }  else 
{ /* Ieee/number.scm 576 */
if(
REALP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
double BgL_xz00_2690;obj_t BgL_yz00_2691;
BgL_xz00_2690 = 
bgl_bignum_to_flonum(BgL_xz00_60); 
BgL_yz00_2691 = BgL_yz00_61; 
if(
(BgL_xz00_2690>
REAL_TO_DOUBLE(BgL_yz00_2691)))
{ /* Ieee/number.scm 576 */
return 
DOUBLE_TO_REAL(BgL_xz00_2690);}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2691;} }  else 
{ /* Ieee/number.scm 576 */
if(
ELONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2697;obj_t BgL_yz00_2698;
BgL_xz00_2697 = BgL_xz00_60; 
{ /* Ieee/number.scm 576 */
long BgL_xz00_2696;
BgL_xz00_2696 = 
BELONG_TO_LONG(BgL_yz00_61); 
BgL_yz00_2698 = 
bgl_long_to_bignum(BgL_xz00_2696); } 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2697, BgL_yz00_2698))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2697;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2698;} }  else 
{ /* Ieee/number.scm 576 */
if(
LLONGP(BgL_yz00_61))
{ /* Ieee/number.scm 576 */
obj_t BgL_xz00_2709;obj_t BgL_yz00_2710;
BgL_xz00_2709 = BgL_xz00_60; 
BgL_yz00_2710 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_61)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2709, BgL_yz00_2710))>((long)0)))
{ /* Ieee/number.scm 576 */
return BgL_xz00_2709;}  else 
{ /* Ieee/number.scm 576 */
return BgL_yz00_2710;} }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_61);} } } } } }  else 
{ /* Ieee/number.scm 576 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2789z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_60);} } } } } } 
}



/* _2max */
obj_t BGl__2maxz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4249, obj_t BgL_xz00_4250, obj_t BgL_yz00_4251)
{ AN_OBJECT;
{ /* Ieee/number.scm 575 */
return 
BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_4250, BgL_yz00_4251);} 
}



/* max */
BGL_EXPORTED_DEF obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_62, obj_t BgL_yz00_63)
{ AN_OBJECT;
{ /* Ieee/number.scm 581 */
{ 
obj_t BgL_xz00_2720;obj_t BgL_yz00_2721;
BgL_xz00_2720 = BgL_xz00_62; 
BgL_yz00_2721 = BgL_yz00_63; 
BgL_loopz00_2719:
if(
PAIRP(BgL_yz00_2721))
{ 
obj_t BgL_yz00_6143;obj_t BgL_xz00_6140;
BgL_xz00_6140 = 
BGl_2maxz00zz__r4_numbers_6_5z00(BgL_xz00_2720, 
CAR(BgL_yz00_2721)); 
BgL_yz00_6143 = 
CDR(BgL_yz00_2721); 
BgL_yz00_2721 = BgL_yz00_6143; 
BgL_xz00_2720 = BgL_xz00_6140; 
goto BgL_loopz00_2719;}  else 
{ /* Ieee/number.scm 582 */
return BgL_xz00_2720;} } } 
}



/* _max */
obj_t BGl__maxz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4252, obj_t BgL_xz00_4253, obj_t BgL_yz00_4254)
{ AN_OBJECT;
{ /* Ieee/number.scm 581 */
return 
BGl_maxz00zz__r4_numbers_6_5z00(BgL_xz00_4253, BgL_yz00_4254);} 
}



/* 2min */
BGL_EXPORTED_DEF obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_74, obj_t BgL_yz00_75)
{ AN_OBJECT;
{ /* Ieee/number.scm 605 */
if(
INTEGERP(BgL_xz00_74))
{ /* Ieee/number.scm 606 */
if(
INTEGERP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2771;obj_t BgL_yz00_2772;
BgL_xz00_2771 = BgL_xz00_74; 
BgL_yz00_2772 = BgL_yz00_75; 
if(
(
(long)CINT(BgL_xz00_2771)>
(long)CINT(BgL_yz00_2772)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2772;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2771;} }  else 
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
double BgL_xz00_2777;obj_t BgL_yz00_2778;
BgL_xz00_2777 = 
(double)(
(long)CINT(BgL_xz00_74)); 
BgL_yz00_2778 = BgL_yz00_75; 
if(
(BgL_xz00_2777>
REAL_TO_DOUBLE(BgL_yz00_2778)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2778;}  else 
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_xz00_2777);} }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
long BgL_arg1615z00_920;
{ /* Ieee/number.scm 606 */
long BgL_auxz00_6164;
BgL_auxz00_6164 = 
(long)CINT(BgL_xz00_74); 
BgL_arg1615z00_920 = 
LONG_TO_ELONG(BgL_auxz00_6164); } 
{ /* Ieee/number.scm 606 */
obj_t BgL_yz00_2785;
BgL_yz00_2785 = BgL_yz00_75; 
{ /* Ieee/number.scm 606 */
bool_t BgL_testz00_6167;
{ /* Ieee/number.scm 606 */
long BgL_n2z00_2788;
BgL_n2z00_2788 = 
BELONG_TO_LONG(BgL_yz00_2785); 
BgL_testz00_6167 = 
(BgL_arg1615z00_920>BgL_n2z00_2788); } 
if(BgL_testz00_6167)
{ /* Ieee/number.scm 606 */
return BgL_yz00_2785;}  else 
{ /* Ieee/number.scm 606 */
return 
make_belong(BgL_arg1615z00_920);} } } }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
BGL_LONGLONG_T BgL_arg1618z00_922;
{ /* Ieee/number.scm 606 */
long BgL_auxz00_6173;
BgL_auxz00_6173 = 
(long)CINT(BgL_xz00_74); 
BgL_arg1618z00_922 = 
LONG_TO_LLONG(BgL_auxz00_6173); } 
{ /* Ieee/number.scm 606 */
obj_t BgL_yz00_2792;
BgL_yz00_2792 = BgL_yz00_75; 
if(
(BgL_arg1618z00_922>
BLLONG_TO_LLONG(BgL_yz00_2792)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2792;}  else 
{ /* Ieee/number.scm 606 */
return 
make_bllong(BgL_arg1618z00_922);} } }  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2798;obj_t BgL_yz00_2799;
BgL_xz00_2798 = 
bgl_long_to_bignum(
(long)CINT(BgL_xz00_74)); 
BgL_yz00_2799 = BgL_yz00_75; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2798, BgL_yz00_2799))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2799;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2798;} }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_75);} } } } } }  else 
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_xz00_74))
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2810;obj_t BgL_yz00_2811;
BgL_xz00_2810 = BgL_xz00_74; 
BgL_yz00_2811 = BgL_yz00_75; 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2810)>
REAL_TO_DOUBLE(BgL_yz00_2811)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2811;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2810;} }  else 
{ /* Ieee/number.scm 606 */
if(
INTEGERP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2816;double BgL_yz00_2817;
BgL_xz00_2816 = BgL_xz00_74; 
BgL_yz00_2817 = 
(double)(
(long)CINT(BgL_yz00_75)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2816)>BgL_yz00_2817))
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_yz00_2817);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2816;} }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2822;double BgL_yz00_2823;
BgL_xz00_2822 = BgL_xz00_74; 
BgL_yz00_2823 = 
(double)(
BELONG_TO_LONG(BgL_yz00_75)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2822)>BgL_yz00_2823))
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_yz00_2823);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2822;} }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2828;double BgL_yz00_2829;
BgL_xz00_2828 = BgL_xz00_74; 
BgL_yz00_2829 = 
(double)(
BLLONG_TO_LLONG(BgL_yz00_75)); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2828)>BgL_yz00_2829))
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_yz00_2829);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2828;} }  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2835;double BgL_yz00_2836;
BgL_xz00_2835 = BgL_xz00_74; 
BgL_yz00_2836 = 
bgl_bignum_to_flonum(BgL_yz00_75); 
if(
(
REAL_TO_DOUBLE(BgL_xz00_2835)>BgL_yz00_2836))
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_yz00_2836);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2835;} }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_75);} } } } } }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_xz00_74))
{ /* Ieee/number.scm 606 */
if(
INTEGERP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
long BgL_arg1635z00_937;
{ /* Ieee/number.scm 606 */
long BgL_auxz00_6233;
BgL_auxz00_6233 = 
(long)CINT(BgL_yz00_75); 
BgL_arg1635z00_937 = 
LONG_TO_ELONG(BgL_auxz00_6233); } 
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2843;
BgL_xz00_2843 = BgL_xz00_74; 
{ /* Ieee/number.scm 606 */
bool_t BgL_testz00_6236;
{ /* Ieee/number.scm 606 */
long BgL_n1z00_2846;
BgL_n1z00_2846 = 
BELONG_TO_LONG(BgL_xz00_2843); 
BgL_testz00_6236 = 
(BgL_n1z00_2846>BgL_arg1635z00_937); } 
if(BgL_testz00_6236)
{ /* Ieee/number.scm 606 */
return 
make_belong(BgL_arg1635z00_937);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2843;} } } }  else 
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
double BgL_xz00_2849;obj_t BgL_yz00_2850;
BgL_xz00_2849 = 
(double)(
BELONG_TO_LONG(BgL_xz00_74)); 
BgL_yz00_2850 = BgL_yz00_75; 
if(
(BgL_xz00_2849>
REAL_TO_DOUBLE(BgL_yz00_2850)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2850;}  else 
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_xz00_2849);} }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2855;obj_t BgL_yz00_2856;
BgL_xz00_2855 = BgL_xz00_74; 
BgL_yz00_2856 = BgL_yz00_75; 
{ /* Ieee/number.scm 606 */
bool_t BgL_testz00_6250;
{ /* Ieee/number.scm 606 */
long BgL_n1z00_2858;long BgL_n2z00_2859;
BgL_n1z00_2858 = 
BELONG_TO_LONG(BgL_xz00_2855); 
BgL_n2z00_2859 = 
BELONG_TO_LONG(BgL_yz00_2856); 
BgL_testz00_6250 = 
(BgL_n1z00_2858>BgL_n2z00_2859); } 
if(BgL_testz00_6250)
{ /* Ieee/number.scm 606 */
return BgL_yz00_2856;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2855;} } }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
BGL_LONGLONG_T BgL_xz00_2861;obj_t BgL_yz00_2862;
BgL_xz00_2861 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_74)); 
BgL_yz00_2862 = BgL_yz00_75; 
if(
(BgL_xz00_2861>
BLLONG_TO_LLONG(BgL_yz00_2862)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2862;}  else 
{ /* Ieee/number.scm 606 */
return 
make_bllong(BgL_xz00_2861);} }  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2868;obj_t BgL_yz00_2869;
{ /* Ieee/number.scm 606 */
long BgL_xz00_2867;
BgL_xz00_2867 = 
BELONG_TO_LONG(BgL_xz00_74); 
BgL_xz00_2868 = 
bgl_long_to_bignum(BgL_xz00_2867); } 
BgL_yz00_2869 = BgL_yz00_75; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2868, BgL_yz00_2869))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2869;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2868;} }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_75);} } } } } }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_xz00_74))
{ /* Ieee/number.scm 606 */
if(
INTEGERP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
BGL_LONGLONG_T BgL_arg1646z00_947;
{ /* Ieee/number.scm 606 */
long BgL_auxz00_6275;
BgL_auxz00_6275 = 
(long)CINT(BgL_yz00_75); 
BgL_arg1646z00_947 = 
LONG_TO_LLONG(BgL_auxz00_6275); } 
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2881;
BgL_xz00_2881 = BgL_xz00_74; 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2881)>BgL_arg1646z00_947))
{ /* Ieee/number.scm 606 */
return 
make_bllong(BgL_arg1646z00_947);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2881;} } }  else 
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
double BgL_xz00_2887;obj_t BgL_yz00_2888;
BgL_xz00_2887 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_74)); 
BgL_yz00_2888 = BgL_yz00_75; 
if(
(BgL_xz00_2887>
REAL_TO_DOUBLE(BgL_yz00_2888)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2888;}  else 
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_xz00_2887);} }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2893;BGL_LONGLONG_T BgL_yz00_2894;
BgL_xz00_2893 = BgL_xz00_74; 
BgL_yz00_2894 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_75)); 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2893)>BgL_yz00_2894))
{ /* Ieee/number.scm 606 */
return 
make_bllong(BgL_yz00_2894);}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2893;} }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2899;obj_t BgL_yz00_2900;
BgL_xz00_2899 = BgL_xz00_74; 
BgL_yz00_2900 = BgL_yz00_75; 
if(
(
BLLONG_TO_LLONG(BgL_xz00_2899)>
BLLONG_TO_LLONG(BgL_yz00_2900)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2900;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2899;} }  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2906;obj_t BgL_yz00_2907;
BgL_xz00_2906 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_74)); 
BgL_yz00_2907 = BgL_yz00_75; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2906, BgL_yz00_2907))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2907;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2906;} }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_75);} } } } } }  else 
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_xz00_74))
{ /* Ieee/number.scm 606 */
if(
BIGNUMP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2918;obj_t BgL_yz00_2919;
BgL_xz00_2918 = BgL_xz00_74; 
BgL_yz00_2919 = BgL_yz00_75; 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2918, BgL_yz00_2919))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2919;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2918;} }  else 
{ /* Ieee/number.scm 606 */
if(
INTEGERP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2930;obj_t BgL_yz00_2931;
BgL_xz00_2930 = BgL_xz00_74; 
BgL_yz00_2931 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_75)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2930, BgL_yz00_2931))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2931;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2930;} }  else 
{ /* Ieee/number.scm 606 */
if(
REALP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
double BgL_xz00_2942;obj_t BgL_yz00_2943;
BgL_xz00_2942 = 
bgl_bignum_to_flonum(BgL_xz00_74); 
BgL_yz00_2943 = BgL_yz00_75; 
if(
(BgL_xz00_2942>
REAL_TO_DOUBLE(BgL_yz00_2943)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2943;}  else 
{ /* Ieee/number.scm 606 */
return 
DOUBLE_TO_REAL(BgL_xz00_2942);} }  else 
{ /* Ieee/number.scm 606 */
if(
ELONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2949;obj_t BgL_yz00_2950;
BgL_xz00_2949 = BgL_xz00_74; 
{ /* Ieee/number.scm 606 */
long BgL_xz00_2948;
BgL_xz00_2948 = 
BELONG_TO_LONG(BgL_yz00_75); 
BgL_yz00_2950 = 
bgl_long_to_bignum(BgL_xz00_2948); } 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2949, BgL_yz00_2950))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2950;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2949;} }  else 
{ /* Ieee/number.scm 606 */
if(
LLONGP(BgL_yz00_75))
{ /* Ieee/number.scm 606 */
obj_t BgL_xz00_2961;obj_t BgL_yz00_2962;
BgL_xz00_2961 = BgL_xz00_74; 
BgL_yz00_2962 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_75)); 
if(
(
(long)(
bgl_bignum_cmp(BgL_xz00_2961, BgL_yz00_2962))>((long)0)))
{ /* Ieee/number.scm 606 */
return BgL_yz00_2962;}  else 
{ /* Ieee/number.scm 606 */
return BgL_xz00_2961;} }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_75);} } } } } }  else 
{ /* Ieee/number.scm 606 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2791z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_74);} } } } } } 
}



/* _2min */
obj_t BGl__2minz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4255, obj_t BgL_xz00_4256, obj_t BgL_yz00_4257)
{ AN_OBJECT;
{ /* Ieee/number.scm 605 */
return 
BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_4256, BgL_yz00_4257);} 
}



/* min */
BGL_EXPORTED_DEF obj_t BGl_minz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_76, obj_t BgL_yz00_77)
{ AN_OBJECT;
{ /* Ieee/number.scm 611 */
{ 
obj_t BgL_xz00_2972;obj_t BgL_yz00_2973;
BgL_xz00_2972 = BgL_xz00_76; 
BgL_yz00_2973 = BgL_yz00_77; 
BgL_loopz00_2971:
if(
PAIRP(BgL_yz00_2973))
{ 
obj_t BgL_yz00_6360;obj_t BgL_xz00_6357;
BgL_xz00_6357 = 
BGl_2minz00zz__r4_numbers_6_5z00(BgL_xz00_2972, 
CAR(BgL_yz00_2973)); 
BgL_yz00_6360 = 
CDR(BgL_yz00_2973); 
BgL_yz00_2973 = BgL_yz00_6360; 
BgL_xz00_2972 = BgL_xz00_6357; 
goto BgL_loopz00_2971;}  else 
{ /* Ieee/number.scm 612 */
return BgL_xz00_2972;} } } 
}



/* _min */
obj_t BGl__minz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4258, obj_t BgL_xz00_4259, obj_t BgL_yz00_4260)
{ AN_OBJECT;
{ /* Ieee/number.scm 611 */
return 
BGl_minz00zz__r4_numbers_6_5z00(BgL_xz00_4259, BgL_yz00_4260);} 
}



/* 2+ */
BGL_EXPORTED_DEF obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_78, obj_t BgL_yz00_79)
{ AN_OBJECT;
{ /* Ieee/number.scm 621 */
if(
INTEGERP(BgL_xz00_78))
{ /* Ieee/number.scm 622 */
if(
INTEGERP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6369;long BgL_auxz00_6367;
BgL_auxz00_6369 = 
(long)CINT(BgL_yz00_79); 
BgL_auxz00_6367 = 
(long)CINT(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_FX(BgL_auxz00_6367, BgL_auxz00_6369);}  else 
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_78))+
REAL_TO_DOUBLE(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
long BgL_arg1680z00_979;
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6381;
BgL_auxz00_6381 = 
(long)CINT(BgL_xz00_78); 
BgL_arg1680z00_979 = 
LONG_TO_ELONG(BgL_auxz00_6381); } 
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6384;
BgL_auxz00_6384 = 
BELONG_TO_LONG(BgL_yz00_79); 
return 
BGL_SAFE_PLUS_ELONG(BgL_arg1680z00_979, BgL_auxz00_6384);} }  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_arg1684z00_981;
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6389;
BgL_auxz00_6389 = 
(long)CINT(BgL_xz00_78); 
BgL_arg1684z00_981 = 
LONG_TO_LLONG(BgL_auxz00_6389); } 
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_auxz00_6392;
BgL_auxz00_6392 = 
BLLONG_TO_LLONG(BgL_yz00_79); 
return 
BGL_SAFE_PLUS_LLONG(BgL_arg1684z00_981, BgL_auxz00_6392);} }  else 
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
obj_t BgL_auxz00_6397;
BgL_auxz00_6397 = 
bgl_bignum_add(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_78)), BgL_yz00_79); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6397);}  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_79);} } } } } }  else 
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_xz00_78))
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_78)+
REAL_TO_DOUBLE(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
if(
INTEGERP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_78)+
(double)(
(long)CINT(BgL_yz00_79))));}  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
double BgL_r1z00_3022;
BgL_r1z00_3022 = 
REAL_TO_DOUBLE(BgL_xz00_78); 
return 
DOUBLE_TO_REAL(
(BgL_r1z00_3022+
(double)(
BELONG_TO_LONG(BgL_yz00_79))));}  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_78)+
(double)(
BLLONG_TO_LLONG(BgL_yz00_79))));}  else 
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_78)+
bgl_bignum_to_flonum(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_79);} } } } } }  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_xz00_78))
{ /* Ieee/number.scm 622 */
if(
INTEGERP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
long BgL_arg1703z00_997;
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6443;
BgL_auxz00_6443 = 
(long)CINT(BgL_yz00_79); 
BgL_arg1703z00_997 = 
LONG_TO_ELONG(BgL_auxz00_6443); } 
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6446;
BgL_auxz00_6446 = 
BELONG_TO_LONG(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_ELONG(BgL_auxz00_6446, BgL_arg1703z00_997);} }  else 
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
double BgL_r2z00_3036;
BgL_r2z00_3036 = 
REAL_TO_DOUBLE(BgL_yz00_79); 
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_78))+BgL_r2z00_3036));}  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6460;long BgL_auxz00_6458;
BgL_auxz00_6460 = 
BELONG_TO_LONG(BgL_yz00_79); 
BgL_auxz00_6458 = 
BELONG_TO_LONG(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_ELONG(BgL_auxz00_6458, BgL_auxz00_6460);}  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_arg1708z00_1002;
BgL_arg1708z00_1002 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_78)); 
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_auxz00_6467;
BgL_auxz00_6467 = 
BLLONG_TO_LLONG(BgL_yz00_79); 
return 
BGL_SAFE_PLUS_LLONG(BgL_arg1708z00_1002, BgL_auxz00_6467);} }  else 
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
obj_t BgL_auxz00_6472;
{ /* Ieee/number.scm 622 */
long BgL_xz00_3040;
BgL_xz00_3040 = 
BELONG_TO_LONG(BgL_xz00_78); 
BgL_auxz00_6472 = 
bgl_long_to_bignum(BgL_xz00_3040); } 
return 
bgl_bignum_add(BgL_auxz00_6472, BgL_yz00_79);}  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_79);} } } } } }  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_xz00_78))
{ /* Ieee/number.scm 622 */
if(
INTEGERP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_arg1713z00_1007;
{ /* Ieee/number.scm 622 */
long BgL_auxz00_6481;
BgL_auxz00_6481 = 
(long)CINT(BgL_yz00_79); 
BgL_arg1713z00_1007 = 
LONG_TO_LLONG(BgL_auxz00_6481); } 
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_auxz00_6484;
BgL_auxz00_6484 = 
BLLONG_TO_LLONG(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_LLONG(BgL_auxz00_6484, BgL_arg1713z00_1007);} }  else 
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_78))+
REAL_TO_DOUBLE(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_arg1718z00_1011;
BgL_arg1718z00_1011 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_79)); 
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_auxz00_6498;
BgL_auxz00_6498 = 
BLLONG_TO_LLONG(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_LLONG(BgL_auxz00_6498, BgL_arg1718z00_1011);} }  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
BGL_LONGLONG_T BgL_auxz00_6505;BGL_LONGLONG_T BgL_auxz00_6503;
BgL_auxz00_6505 = 
BLLONG_TO_LLONG(BgL_yz00_79); 
BgL_auxz00_6503 = 
BLLONG_TO_LLONG(BgL_xz00_78); 
return 
BGL_SAFE_PLUS_LLONG(BgL_auxz00_6503, BgL_auxz00_6505);}  else 
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
bgl_bignum_add(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_78)), BgL_yz00_79);}  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_79);} } } } } }  else 
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_xz00_78))
{ /* Ieee/number.scm 622 */
if(
BIGNUMP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
obj_t BgL_auxz00_6518;
BgL_auxz00_6518 = 
bgl_bignum_add(BgL_xz00_78, BgL_yz00_79); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6518);}  else 
{ /* Ieee/number.scm 622 */
if(
INTEGERP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
obj_t BgL_auxz00_6523;
BgL_auxz00_6523 = 
bgl_bignum_add(BgL_xz00_78, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_79))); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6523);}  else 
{ /* Ieee/number.scm 622 */
if(
REALP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_78)+
REAL_TO_DOUBLE(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
if(
ELONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
obj_t BgL_auxz00_6536;
{ /* Ieee/number.scm 622 */
long BgL_xz00_3068;
BgL_xz00_3068 = 
BELONG_TO_LONG(BgL_yz00_79); 
BgL_auxz00_6536 = 
bgl_long_to_bignum(BgL_xz00_3068); } 
return 
bgl_bignum_add(BgL_xz00_78, BgL_auxz00_6536);}  else 
{ /* Ieee/number.scm 622 */
if(
LLONGP(BgL_yz00_79))
{ /* Ieee/number.scm 622 */
return 
bgl_bignum_add(BgL_xz00_78, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_79)));}  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_79);} } } } } }  else 
{ /* Ieee/number.scm 622 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2793z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_78);} } } } } } 
}



/* _2+ */
obj_t BGl__2zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4261, obj_t BgL_xz00_4262, obj_t BgL_yz00_4263)
{ AN_OBJECT;
{ /* Ieee/number.scm 621 */
return 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_4262, BgL_yz00_4263);} 
}



/* + */
BGL_EXPORTED_DEF obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_xz00_80)
{ AN_OBJECT;
{ /* Ieee/number.scm 627 */
{ 
obj_t BgL_sumz00_3076;obj_t BgL_xz00_3077;
BgL_sumz00_3076 = 
BINT(((long)0)); 
BgL_xz00_3077 = BgL_xz00_80; 
BgL_loopz00_3075:
if(
PAIRP(BgL_xz00_3077))
{ 
obj_t BgL_xz00_6553;obj_t BgL_sumz00_6550;
BgL_sumz00_6550 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_sumz00_3076, 
CAR(BgL_xz00_3077)); 
BgL_xz00_6553 = 
CDR(BgL_xz00_3077); 
BgL_xz00_3077 = BgL_xz00_6553; 
BgL_sumz00_3076 = BgL_sumz00_6550; 
goto BgL_loopz00_3075;}  else 
{ /* Ieee/number.scm 628 */
return BgL_sumz00_3076;} } } 
}



/* _+ */
obj_t BGl__zb2zb2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4264, obj_t BgL_xz00_4265)
{ AN_OBJECT;
{ /* Ieee/number.scm 627 */
return 
BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_xz00_4265);} 
}



/* 2* */
BGL_EXPORTED_DEF obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_81, obj_t BgL_yz00_82)
{ AN_OBJECT;
{ /* Ieee/number.scm 638 */
if(
INTEGERP(BgL_xz00_81))
{ /* Ieee/number.scm 639 */
if(
INTEGERP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6563;long BgL_auxz00_6561;
BgL_auxz00_6563 = 
(long)CINT(BgL_yz00_82); 
BgL_auxz00_6561 = 
(long)CINT(BgL_xz00_81); 
return 
BGL_SAFE_MUL_FX(BgL_auxz00_6561, BgL_auxz00_6563);}  else 
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_81))*
REAL_TO_DOUBLE(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
long BgL_arg1749z00_1041;
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6575;
BgL_auxz00_6575 = 
(long)CINT(BgL_xz00_81); 
BgL_arg1749z00_1041 = 
LONG_TO_ELONG(BgL_auxz00_6575); } 
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6578;
BgL_auxz00_6578 = 
BELONG_TO_LONG(BgL_yz00_82); 
return 
BGL_SAFE_MUL_ELONG(BgL_arg1749z00_1041, BgL_auxz00_6578);} }  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_arg1751z00_1043;
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6583;
BgL_auxz00_6583 = 
(long)CINT(BgL_xz00_81); 
BgL_arg1751z00_1043 = 
LONG_TO_LLONG(BgL_auxz00_6583); } 
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_auxz00_6586;
BgL_auxz00_6586 = 
BLLONG_TO_LLONG(BgL_yz00_82); 
return 
BGL_SAFE_MUL_LLONG(BgL_arg1751z00_1043, BgL_auxz00_6586);} }  else 
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
obj_t BgL_auxz00_6591;
BgL_auxz00_6591 = 
bgl_bignum_mul(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_81)), BgL_yz00_82); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6591);}  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_82);} } } } } }  else 
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_xz00_81))
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_81)*
REAL_TO_DOUBLE(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
if(
INTEGERP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_81)*
(double)(
(long)CINT(BgL_yz00_82))));}  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
double BgL_r1z00_3126;
BgL_r1z00_3126 = 
REAL_TO_DOUBLE(BgL_xz00_81); 
return 
DOUBLE_TO_REAL(
(BgL_r1z00_3126*
(double)(
BELONG_TO_LONG(BgL_yz00_82))));}  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_81)*
(double)(
BLLONG_TO_LLONG(BgL_yz00_82))));}  else 
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_81)*
bgl_bignum_to_flonum(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_82);} } } } } }  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_xz00_81))
{ /* Ieee/number.scm 639 */
if(
INTEGERP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
long BgL_arg1772z00_1059;
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6637;
BgL_auxz00_6637 = 
(long)CINT(BgL_yz00_82); 
BgL_arg1772z00_1059 = 
LONG_TO_ELONG(BgL_auxz00_6637); } 
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6640;
BgL_auxz00_6640 = 
BELONG_TO_LONG(BgL_xz00_81); 
return 
BGL_SAFE_MUL_ELONG(BgL_auxz00_6640, BgL_arg1772z00_1059);} }  else 
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
double BgL_r2z00_3140;
BgL_r2z00_3140 = 
REAL_TO_DOUBLE(BgL_yz00_82); 
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_81))*BgL_r2z00_3140));}  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6654;long BgL_auxz00_6652;
BgL_auxz00_6654 = 
BELONG_TO_LONG(BgL_yz00_82); 
BgL_auxz00_6652 = 
BELONG_TO_LONG(BgL_xz00_81); 
return 
BGL_SAFE_MUL_ELONG(BgL_auxz00_6652, BgL_auxz00_6654);}  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_arg1778z00_1064;
BgL_arg1778z00_1064 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_81)); 
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_auxz00_6661;
BgL_auxz00_6661 = 
BLLONG_TO_LLONG(BgL_yz00_82); 
return 
BGL_SAFE_MUL_LLONG(BgL_arg1778z00_1064, BgL_auxz00_6661);} }  else 
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
obj_t BgL_auxz00_6666;
{ /* Ieee/number.scm 639 */
long BgL_xz00_3144;
BgL_xz00_3144 = 
BELONG_TO_LONG(BgL_xz00_81); 
BgL_auxz00_6666 = 
bgl_long_to_bignum(BgL_xz00_3144); } 
return 
bgl_bignum_mul(BgL_auxz00_6666, BgL_yz00_82);}  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_82);} } } } } }  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_xz00_81))
{ /* Ieee/number.scm 639 */
if(
INTEGERP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_arg1785z00_1069;
{ /* Ieee/number.scm 639 */
long BgL_auxz00_6675;
BgL_auxz00_6675 = 
(long)CINT(BgL_yz00_82); 
BgL_arg1785z00_1069 = 
LONG_TO_LLONG(BgL_auxz00_6675); } 
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_auxz00_6678;
BgL_auxz00_6678 = 
BLLONG_TO_LLONG(BgL_xz00_81); 
return 
BGL_SAFE_MUL_LLONG(BgL_auxz00_6678, BgL_arg1785z00_1069);} }  else 
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_81))*
REAL_TO_DOUBLE(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_arg1789z00_1073;
BgL_arg1789z00_1073 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_82)); 
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_auxz00_6692;
BgL_auxz00_6692 = 
BLLONG_TO_LLONG(BgL_xz00_81); 
return 
BGL_SAFE_MUL_LLONG(BgL_auxz00_6692, BgL_arg1789z00_1073);} }  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
BGL_LONGLONG_T BgL_auxz00_6699;BGL_LONGLONG_T BgL_auxz00_6697;
BgL_auxz00_6699 = 
BLLONG_TO_LLONG(BgL_yz00_82); 
BgL_auxz00_6697 = 
BLLONG_TO_LLONG(BgL_xz00_81); 
return 
BGL_SAFE_MUL_LLONG(BgL_auxz00_6697, BgL_auxz00_6699);}  else 
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
bgl_bignum_mul(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_81)), BgL_yz00_82);}  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_82);} } } } } }  else 
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_xz00_81))
{ /* Ieee/number.scm 639 */
if(
BIGNUMP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
obj_t BgL_auxz00_6712;
BgL_auxz00_6712 = 
bgl_bignum_mul(BgL_xz00_81, BgL_yz00_82); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6712);}  else 
{ /* Ieee/number.scm 639 */
if(
INTEGERP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
obj_t BgL_auxz00_6717;
BgL_auxz00_6717 = 
bgl_bignum_mul(BgL_xz00_81, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_82))); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6717);}  else 
{ /* Ieee/number.scm 639 */
if(
REALP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_81)*
REAL_TO_DOUBLE(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
if(
ELONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
obj_t BgL_auxz00_6730;
{ /* Ieee/number.scm 639 */
long BgL_xz00_3172;
BgL_xz00_3172 = 
BELONG_TO_LONG(BgL_yz00_82); 
BgL_auxz00_6730 = 
bgl_long_to_bignum(BgL_xz00_3172); } 
return 
bgl_bignum_mul(BgL_xz00_81, BgL_auxz00_6730);}  else 
{ /* Ieee/number.scm 639 */
if(
LLONGP(BgL_yz00_82))
{ /* Ieee/number.scm 639 */
return 
bgl_bignum_mul(BgL_xz00_81, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_82)));}  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_82);} } } } } }  else 
{ /* Ieee/number.scm 639 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2795z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_81);} } } } } } 
}



/* _2* */
obj_t BGl__2za2za2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4266, obj_t BgL_xz00_4267, obj_t BgL_yz00_4268)
{ AN_OBJECT;
{ /* Ieee/number.scm 638 */
return 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_xz00_4267, BgL_yz00_4268);} 
}



/* * */
BGL_EXPORTED_DEF obj_t BGl_za2za2zz__r4_numbers_6_5z00(obj_t BgL_xz00_83)
{ AN_OBJECT;
{ /* Ieee/number.scm 644 */
{ 
obj_t BgL_productz00_3180;obj_t BgL_xz00_3181;
BgL_productz00_3180 = 
BINT(((long)1)); 
BgL_xz00_3181 = BgL_xz00_83; 
BgL_loopz00_3179:
if(
PAIRP(BgL_xz00_3181))
{ 
obj_t BgL_xz00_6747;obj_t BgL_productz00_6744;
BgL_productz00_6744 = 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_productz00_3180, 
CAR(BgL_xz00_3181)); 
BgL_xz00_6747 = 
CDR(BgL_xz00_3181); 
BgL_xz00_3181 = BgL_xz00_6747; 
BgL_productz00_3180 = BgL_productz00_6744; 
goto BgL_loopz00_3179;}  else 
{ /* Ieee/number.scm 645 */
return BgL_productz00_3180;} } } 
}



/* _* */
obj_t BGl__za2za2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4269, obj_t BgL_xz00_4270)
{ AN_OBJECT;
{ /* Ieee/number.scm 644 */
return 
BGl_za2za2zz__r4_numbers_6_5z00(BgL_xz00_4270);} 
}



/* 2- */
BGL_EXPORTED_DEF obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_84, obj_t BgL_yz00_85)
{ AN_OBJECT;
{ /* Ieee/number.scm 654 */
if(
INTEGERP(BgL_xz00_84))
{ /* Ieee/number.scm 655 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6757;long BgL_auxz00_6755;
BgL_auxz00_6757 = 
(long)CINT(BgL_yz00_85); 
BgL_auxz00_6755 = 
(long)CINT(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_FX(BgL_auxz00_6755, BgL_auxz00_6757);}  else 
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_84))-
REAL_TO_DOUBLE(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
long BgL_arg1817z00_1103;
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6769;
BgL_auxz00_6769 = 
(long)CINT(BgL_xz00_84); 
BgL_arg1817z00_1103 = 
LONG_TO_ELONG(BgL_auxz00_6769); } 
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6772;
BgL_auxz00_6772 = 
BELONG_TO_LONG(BgL_yz00_85); 
return 
BGL_SAFE_MINUS_ELONG(BgL_arg1817z00_1103, BgL_auxz00_6772);} }  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_arg1819z00_1105;
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6777;
BgL_auxz00_6777 = 
(long)CINT(BgL_xz00_84); 
BgL_arg1819z00_1105 = 
LONG_TO_LLONG(BgL_auxz00_6777); } 
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_auxz00_6780;
BgL_auxz00_6780 = 
BLLONG_TO_LLONG(BgL_yz00_85); 
return 
BGL_SAFE_MINUS_LLONG(BgL_arg1819z00_1105, BgL_auxz00_6780);} }  else 
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
obj_t BgL_auxz00_6785;
BgL_auxz00_6785 = 
bgl_bignum_sub(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_84)), BgL_yz00_85); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6785);}  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } }  else 
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_xz00_84))
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_84)-
REAL_TO_DOUBLE(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_84)-
(double)(
(long)CINT(BgL_yz00_85))));}  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
double BgL_r1z00_3230;
BgL_r1z00_3230 = 
REAL_TO_DOUBLE(BgL_xz00_84); 
return 
DOUBLE_TO_REAL(
(BgL_r1z00_3230-
(double)(
BELONG_TO_LONG(BgL_yz00_85))));}  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_84)-
(double)(
BLLONG_TO_LLONG(BgL_yz00_85))));}  else 
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_84)-
bgl_bignum_to_flonum(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } }  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_xz00_84))
{ /* Ieee/number.scm 655 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
long BgL_arg1835z00_1121;
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6831;
BgL_auxz00_6831 = 
(long)CINT(BgL_yz00_85); 
BgL_arg1835z00_1121 = 
LONG_TO_ELONG(BgL_auxz00_6831); } 
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6834;
BgL_auxz00_6834 = 
BELONG_TO_LONG(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_ELONG(BgL_auxz00_6834, BgL_arg1835z00_1121);} }  else 
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
double BgL_r2z00_3244;
BgL_r2z00_3244 = 
REAL_TO_DOUBLE(BgL_yz00_85); 
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_84))-BgL_r2z00_3244));}  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6848;long BgL_auxz00_6846;
BgL_auxz00_6848 = 
BELONG_TO_LONG(BgL_yz00_85); 
BgL_auxz00_6846 = 
BELONG_TO_LONG(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_ELONG(BgL_auxz00_6846, BgL_auxz00_6848);}  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_arg1840z00_1126;
BgL_arg1840z00_1126 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_xz00_84)); 
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_auxz00_6855;
BgL_auxz00_6855 = 
BLLONG_TO_LLONG(BgL_yz00_85); 
return 
BGL_SAFE_MINUS_LLONG(BgL_arg1840z00_1126, BgL_auxz00_6855);} }  else 
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
obj_t BgL_auxz00_6860;
{ /* Ieee/number.scm 655 */
long BgL_xz00_3248;
BgL_xz00_3248 = 
BELONG_TO_LONG(BgL_xz00_84); 
BgL_auxz00_6860 = 
bgl_long_to_bignum(BgL_xz00_3248); } 
return 
bgl_bignum_sub(BgL_auxz00_6860, BgL_yz00_85);}  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } }  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_xz00_84))
{ /* Ieee/number.scm 655 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_arg1845z00_1131;
{ /* Ieee/number.scm 655 */
long BgL_auxz00_6869;
BgL_auxz00_6869 = 
(long)CINT(BgL_yz00_85); 
BgL_arg1845z00_1131 = 
LONG_TO_LLONG(BgL_auxz00_6869); } 
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_auxz00_6872;
BgL_auxz00_6872 = 
BLLONG_TO_LLONG(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_LLONG(BgL_auxz00_6872, BgL_arg1845z00_1131);} }  else 
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_84))-
REAL_TO_DOUBLE(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_arg1849z00_1135;
BgL_arg1849z00_1135 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_yz00_85)); 
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_auxz00_6886;
BgL_auxz00_6886 = 
BLLONG_TO_LLONG(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_LLONG(BgL_auxz00_6886, BgL_arg1849z00_1135);} }  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
BGL_LONGLONG_T BgL_auxz00_6893;BGL_LONGLONG_T BgL_auxz00_6891;
BgL_auxz00_6893 = 
BLLONG_TO_LLONG(BgL_yz00_85); 
BgL_auxz00_6891 = 
BLLONG_TO_LLONG(BgL_xz00_84); 
return 
BGL_SAFE_MINUS_LLONG(BgL_auxz00_6891, BgL_auxz00_6893);}  else 
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
bgl_bignum_sub(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_84)), BgL_yz00_85);}  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } }  else 
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_xz00_84))
{ /* Ieee/number.scm 655 */
if(
BIGNUMP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
obj_t BgL_auxz00_6906;
BgL_auxz00_6906 = 
bgl_bignum_sub(BgL_xz00_84, BgL_yz00_85); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6906);}  else 
{ /* Ieee/number.scm 655 */
if(
INTEGERP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
obj_t BgL_auxz00_6911;
BgL_auxz00_6911 = 
bgl_bignum_sub(BgL_xz00_84, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_85))); 
return 
BGL_SAFE_BX_TO_FX(BgL_auxz00_6911);}  else 
{ /* Ieee/number.scm 655 */
if(
REALP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_84)-
REAL_TO_DOUBLE(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
if(
ELONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
obj_t BgL_auxz00_6924;
{ /* Ieee/number.scm 655 */
long BgL_xz00_3276;
BgL_xz00_3276 = 
BELONG_TO_LONG(BgL_yz00_85); 
BgL_auxz00_6924 = 
bgl_long_to_bignum(BgL_xz00_3276); } 
return 
bgl_bignum_sub(BgL_xz00_84, BgL_auxz00_6924);}  else 
{ /* Ieee/number.scm 655 */
if(
LLONGP(BgL_yz00_85))
{ /* Ieee/number.scm 655 */
return 
bgl_bignum_sub(BgL_xz00_84, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_85)));}  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_85);} } } } } }  else 
{ /* Ieee/number.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2797z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_84);} } } } } } 
}



/* _2- */
obj_t BGl__2zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4271, obj_t BgL_xz00_4272, obj_t BgL_yz00_4273)
{ AN_OBJECT;
{ /* Ieee/number.scm 654 */
return 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_4272, BgL_yz00_4273);} 
}



/* - */
BGL_EXPORTED_DEF obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_xz00_86, obj_t BgL_yz00_87)
{ AN_OBJECT;
{ /* Ieee/number.scm 660 */
if(
PAIRP(BgL_yz00_87))
{ /* Ieee/number.scm 662 */
obj_t BgL_g1102z00_1152;obj_t BgL_g1103z00_1153;
BgL_g1102z00_1152 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_86, 
CAR(BgL_yz00_87)); 
BgL_g1103z00_1153 = 
CDR(BgL_yz00_87); 
{ 
obj_t BgL_resultz00_3287;obj_t BgL_argsz00_3288;
BgL_resultz00_3287 = BgL_g1102z00_1152; 
BgL_argsz00_3288 = BgL_g1103z00_1153; 
BgL_loopz00_3286:
if(
PAIRP(BgL_argsz00_3288))
{ 
obj_t BgL_argsz00_6946;obj_t BgL_resultz00_6943;
BgL_resultz00_6943 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_resultz00_3287, 
CAR(BgL_argsz00_3288)); 
BgL_argsz00_6946 = 
CDR(BgL_argsz00_3288); 
BgL_argsz00_3288 = BgL_argsz00_6946; 
BgL_resultz00_3287 = BgL_resultz00_6943; 
goto BgL_loopz00_3286;}  else 
{ /* Ieee/number.scm 662 */
return BgL_resultz00_3287;} } }  else 
{ /* Ieee/number.scm 661 */
return 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
BINT(((long)0)), BgL_xz00_86);} } 
}



/* _- */
obj_t BGl__zd2zd2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4274, obj_t BgL_xz00_4275, obj_t BgL_yz00_4276)
{ AN_OBJECT;
{ /* Ieee/number.scm 660 */
return 
BGl_zd2zd2zz__r4_numbers_6_5z00(BgL_xz00_4275, BgL_yz00_4276);} 
}



/* 2/ */
BGL_EXPORTED_DEF obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_88, obj_t BgL_yz00_89)
{ AN_OBJECT;
{ /* Ieee/number.scm 672 */
if(
INTEGERP(BgL_xz00_88))
{ /* Ieee/number.scm 674 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 677 */
bool_t BgL_testz00_6955;
{ /* Ieee/number.scm 677 */
long BgL_arg1877z00_1169;
{ /* Ieee/number.scm 677 */
long BgL_auxz00_6958;long BgL_auxz00_6956;
BgL_auxz00_6958 = 
(long)CINT(BgL_yz00_89); 
BgL_auxz00_6956 = 
(long)CINT(BgL_xz00_88); 
BgL_arg1877z00_1169 = 
(BgL_auxz00_6956%BgL_auxz00_6958); } 
BgL_testz00_6955 = 
(BgL_arg1877z00_1169==((long)0)); } 
if(BgL_testz00_6955)
{ /* Ieee/number.scm 677 */
return 
BINT(
(
(long)CINT(BgL_xz00_88)/
(long)CINT(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 677 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))/
(double)(
(long)CINT(BgL_yz00_89))));} }  else 
{ /* Ieee/number.scm 676 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 680 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))/
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 680 */
if(
ELONGP(BgL_yz00_89))
{ /* Ieee/number.scm 683 */
long BgL_exz00_1174;
{ /* Ieee/number.scm 683 */
long BgL_auxz00_6981;
BgL_auxz00_6981 = 
(long)CINT(BgL_xz00_88); 
BgL_exz00_1174 = 
LONG_TO_ELONG(BgL_auxz00_6981); } 
{ /* Ieee/number.scm 684 */
bool_t BgL_testz00_6984;
{ /* Ieee/number.scm 684 */
long BgL_arg1886z00_1178;
{ /* Ieee/number.scm 684 */
long BgL_n2z00_3332;
BgL_n2z00_3332 = 
BELONG_TO_LONG(BgL_yz00_89); 
BgL_arg1886z00_1178 = 
(BgL_exz00_1174%BgL_n2z00_3332); } 
BgL_testz00_6984 = 
(BgL_arg1886z00_1178==((long)0)); } 
if(BgL_testz00_6984)
{ /* Ieee/number.scm 685 */
long BgL_za72za7_3336;
BgL_za72za7_3336 = 
BELONG_TO_LONG(BgL_yz00_89); 
{ /* Ieee/number.scm 685 */
long BgL_auxz00_6989;
BgL_auxz00_6989 = 
(BgL_exz00_1174/BgL_za72za7_3336); 
return 
make_belong(BgL_auxz00_6989);} }  else 
{ /* Ieee/number.scm 684 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))/
(double)(
BELONG_TO_LONG(BgL_yz00_89))));} } }  else 
{ /* Ieee/number.scm 682 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 688 */
BGL_LONGLONG_T BgL_lxz00_1181;
{ /* Ieee/number.scm 688 */
long BgL_auxz00_7000;
BgL_auxz00_7000 = 
(long)CINT(BgL_xz00_88); 
BgL_lxz00_1181 = 
LONG_TO_LLONG(BgL_auxz00_7000); } 
{ /* Ieee/number.scm 689 */
bool_t BgL_testz00_7003;
{ /* Ieee/number.scm 689 */
BGL_LONGLONG_T BgL_arg1893z00_1185;
{ /* Ieee/number.scm 689 */
BGL_LONGLONG_T BgL_auxz00_7004;
BgL_auxz00_7004 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
BgL_arg1893z00_1185 = 
(BgL_lxz00_1181%BgL_auxz00_7004); } 
BgL_testz00_7003 = 
(BgL_arg1893z00_1185==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7003)
{ /* Ieee/number.scm 690 */
BGL_LONGLONG_T BgL_za72za7_3346;
BgL_za72za7_3346 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
return 
make_bllong(
(BgL_lxz00_1181/BgL_za72za7_3346));}  else 
{ /* Ieee/number.scm 689 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))/
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));} } }  else 
{ /* Ieee/number.scm 687 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 693 */
obj_t BgL_qz00_1188;
BgL_qz00_1188 = 
bgl_bignum_div(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_88)), BgL_yz00_89); 
{ /* Ieee/number.scm 695 */
obj_t BgL_rz00_1189;
{ /* Ieee/number.scm 695 */
int BgL_auxz00_7022;
BgL_auxz00_7022 = 
(int)(((long)1)); 
BgL_rz00_1189 = 
BGL_MVALUES_VAL(BgL_auxz00_7022); } 
{ /* Ieee/number.scm 695 */
bool_t BgL_testz00_7025;
{ /* Ieee/number.scm 695 */
obj_t BgL_nz00_3352;
if(
BIGNUMP(BgL_rz00_1189))
{ /* Ieee/number.scm 695 */
BgL_nz00_3352 = BgL_rz00_1189; }  else 
{ 
obj_t BgL_auxz00_7028;
BgL_auxz00_7028 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)26079)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1189); 
FAILURE(BgL_auxz00_7028,BFALSE,BFALSE);} 
BgL_testz00_7025 = 
BXZERO(BgL_nz00_3352); } 
if(BgL_testz00_7025)
{ /* Ieee/number.scm 695 */
return BgL_qz00_1188;}  else 
{ /* Ieee/number.scm 695 */
return 
DOUBLE_TO_REAL(
(
(double)(
(long)CINT(BgL_xz00_88))/
bgl_bignum_to_flonum(BgL_yz00_89)));} } } }  else 
{ /* Ieee/number.scm 692 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2800z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } }  else 
{ /* Ieee/number.scm 674 */
if(
REALP(BgL_xz00_88))
{ /* Ieee/number.scm 700 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 702 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)/
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 702 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 704 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)/
(double)(
(long)CINT(BgL_yz00_89))));}  else 
{ /* Ieee/number.scm 704 */
if(
ELONGP(BgL_yz00_89))
{ /* Ieee/number.scm 707 */
double BgL_r1z00_3364;
BgL_r1z00_3364 = 
REAL_TO_DOUBLE(BgL_xz00_88); 
return 
DOUBLE_TO_REAL(
(BgL_r1z00_3364/
(double)(
BELONG_TO_LONG(BgL_yz00_89))));}  else 
{ /* Ieee/number.scm 706 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 708 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)/
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));}  else 
{ /* Ieee/number.scm 708 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 710 */
return 
DOUBLE_TO_REAL(
(
REAL_TO_DOUBLE(BgL_xz00_88)/
bgl_bignum_to_flonum(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 710 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2800z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } }  else 
{ /* Ieee/number.scm 700 */
if(
ELONGP(BgL_xz00_88))
{ /* Ieee/number.scm 714 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 717 */
long BgL_eyz00_1206;
{ /* Ieee/number.scm 717 */
long BgL_auxz00_7079;
BgL_auxz00_7079 = 
(long)CINT(BgL_yz00_89); 
BgL_eyz00_1206 = 
LONG_TO_ELONG(BgL_auxz00_7079); } 
{ /* Ieee/number.scm 718 */
bool_t BgL_testz00_7082;
{ /* Ieee/number.scm 718 */
long BgL_arg1916z00_1210;
{ /* Ieee/number.scm 718 */
long BgL_n1z00_3376;
BgL_n1z00_3376 = 
BELONG_TO_LONG(BgL_xz00_88); 
BgL_arg1916z00_1210 = 
(BgL_n1z00_3376%BgL_eyz00_1206); } 
BgL_testz00_7082 = 
(BgL_arg1916z00_1210==((long)0)); } 
if(BgL_testz00_7082)
{ /* Ieee/number.scm 719 */
long BgL_za71za7_3380;
BgL_za71za7_3380 = 
BELONG_TO_LONG(BgL_xz00_88); 
{ /* Ieee/number.scm 719 */
long BgL_auxz00_7087;
BgL_auxz00_7087 = 
(BgL_za71za7_3380/BgL_eyz00_1206); 
return 
make_belong(BgL_auxz00_7087);} }  else 
{ /* Ieee/number.scm 718 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_88))/
(double)(
(long)CINT(BgL_yz00_89))));} } }  else 
{ /* Ieee/number.scm 716 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 722 */
double BgL_r2z00_3386;
BgL_r2z00_3386 = 
REAL_TO_DOUBLE(BgL_yz00_89); 
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_88))/BgL_r2z00_3386));}  else 
{ /* Ieee/number.scm 721 */
if(
ELONGP(BgL_yz00_89))
{ /* Ieee/number.scm 724 */
bool_t BgL_testz00_7105;
{ /* Ieee/number.scm 724 */
long BgL_arg1925z00_1218;
{ /* Ieee/number.scm 724 */
long BgL_n1z00_3388;long BgL_n2z00_3389;
BgL_n1z00_3388 = 
BELONG_TO_LONG(BgL_xz00_88); 
BgL_n2z00_3389 = 
BELONG_TO_LONG(BgL_yz00_89); 
BgL_arg1925z00_1218 = 
(BgL_n1z00_3388%BgL_n2z00_3389); } 
BgL_testz00_7105 = 
(BgL_arg1925z00_1218==((long)0)); } 
if(BgL_testz00_7105)
{ /* Ieee/number.scm 725 */
long BgL_za71za7_3392;long BgL_za72za7_3393;
BgL_za71za7_3392 = 
BELONG_TO_LONG(BgL_xz00_88); 
BgL_za72za7_3393 = 
BELONG_TO_LONG(BgL_yz00_89); 
{ /* Ieee/number.scm 725 */
long BgL_auxz00_7112;
BgL_auxz00_7112 = 
(BgL_za71za7_3392/BgL_za72za7_3393); 
return 
make_belong(BgL_auxz00_7112);} }  else 
{ /* Ieee/number.scm 724 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_88))/
(double)(
BELONG_TO_LONG(BgL_yz00_89))));} }  else 
{ /* Ieee/number.scm 723 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 728 */
double BgL_fxz00_1221;
BgL_fxz00_1221 = 
(double)(
BELONG_TO_LONG(BgL_xz00_88)); 
{ /* Ieee/number.scm 728 */
BGL_LONGLONG_T BgL_lxz00_1222;
BgL_lxz00_1222 = 
DOUBLE_TO_LLONG(BgL_fxz00_1221); 
{ /* Ieee/number.scm 729 */

{ /* Ieee/number.scm 730 */
bool_t BgL_testz00_7126;
{ /* Ieee/number.scm 730 */
BGL_LONGLONG_T BgL_arg1930z00_1225;
{ /* Ieee/number.scm 730 */
BGL_LONGLONG_T BgL_auxz00_7127;
BgL_auxz00_7127 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
BgL_arg1930z00_1225 = 
(BgL_lxz00_1222%BgL_auxz00_7127); } 
BgL_testz00_7126 = 
(BgL_arg1930z00_1225==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7126)
{ /* Ieee/number.scm 731 */
BGL_LONGLONG_T BgL_za72za7_3402;
BgL_za72za7_3402 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
return 
make_bllong(
(BgL_lxz00_1222/BgL_za72za7_3402));}  else 
{ /* Ieee/number.scm 730 */
return 
DOUBLE_TO_REAL(
(BgL_fxz00_1221/
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));} } } } }  else 
{ /* Ieee/number.scm 727 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 734 */
obj_t BgL_qz00_1228;
{ /* Ieee/number.scm 735 */
obj_t BgL_arg1938z00_1233;
{ /* Ieee/number.scm 735 */
long BgL_xz00_3406;
BgL_xz00_3406 = 
BELONG_TO_LONG(BgL_xz00_88); 
BgL_arg1938z00_1233 = 
bgl_long_to_bignum(BgL_xz00_3406); } 
BgL_qz00_1228 = 
bgl_bignum_div(BgL_arg1938z00_1233, BgL_yz00_89); } 
{ /* Ieee/number.scm 736 */
obj_t BgL_rz00_1229;
{ /* Ieee/number.scm 736 */
int BgL_auxz00_7143;
BgL_auxz00_7143 = 
(int)(((long)1)); 
BgL_rz00_1229 = 
BGL_MVALUES_VAL(BgL_auxz00_7143); } 
{ /* Ieee/number.scm 736 */
bool_t BgL_testz00_7146;
{ /* Ieee/number.scm 736 */
obj_t BgL_nz00_3408;
if(
BIGNUMP(BgL_rz00_1229))
{ /* Ieee/number.scm 736 */
BgL_nz00_3408 = BgL_rz00_1229; }  else 
{ 
obj_t BgL_auxz00_7149;
BgL_auxz00_7149 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)27144)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1229); 
FAILURE(BgL_auxz00_7149,BFALSE,BFALSE);} 
BgL_testz00_7146 = 
BXZERO(BgL_nz00_3408); } 
if(BgL_testz00_7146)
{ /* Ieee/number.scm 736 */
return BgL_qz00_1228;}  else 
{ /* Ieee/number.scm 736 */
return 
DOUBLE_TO_REAL(
(
(double)(
BELONG_TO_LONG(BgL_xz00_88))/
bgl_bignum_to_flonum(BgL_yz00_89)));} } } }  else 
{ /* Ieee/number.scm 733 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2800z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } }  else 
{ /* Ieee/number.scm 714 */
if(
LLONGP(BgL_xz00_88))
{ /* Ieee/number.scm 741 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 744 */
BGL_LONGLONG_T BgL_lyz00_1236;
{ /* Ieee/number.scm 744 */
long BgL_auxz00_7164;
BgL_auxz00_7164 = 
(long)CINT(BgL_yz00_89); 
BgL_lyz00_1236 = 
LONG_TO_LLONG(BgL_auxz00_7164); } 
{ /* Ieee/number.scm 745 */
bool_t BgL_testz00_7167;
{ /* Ieee/number.scm 745 */
BGL_LONGLONG_T BgL_arg1944z00_1240;
{ /* Ieee/number.scm 745 */
BGL_LONGLONG_T BgL_auxz00_7168;
BgL_auxz00_7168 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
BgL_arg1944z00_1240 = 
(BgL_auxz00_7168%BgL_lyz00_1236); } 
BgL_testz00_7167 = 
(BgL_arg1944z00_1240==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7167)
{ /* Ieee/number.scm 746 */
BGL_LONGLONG_T BgL_za71za7_3419;
BgL_za71za7_3419 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
return 
make_bllong(
(BgL_za71za7_3419/BgL_lyz00_1236));}  else 
{ /* Ieee/number.scm 745 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))/
(double)(
(long)CINT(BgL_yz00_89))));} } }  else 
{ /* Ieee/number.scm 743 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 748 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))/
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 748 */
if(
ELONGP(BgL_yz00_89))
{ /* Ieee/number.scm 751 */
double BgL_fyz00_1245;
BgL_fyz00_1245 = 
(double)(
BELONG_TO_LONG(BgL_yz00_89)); 
{ /* Ieee/number.scm 751 */
BGL_LONGLONG_T BgL_lyz00_1246;
BgL_lyz00_1246 = 
DOUBLE_TO_LLONG(BgL_fyz00_1245); 
{ /* Ieee/number.scm 752 */

{ /* Ieee/number.scm 753 */
bool_t BgL_testz00_7193;
{ /* Ieee/number.scm 753 */
BGL_LONGLONG_T BgL_arg1952z00_1249;
{ /* Ieee/number.scm 753 */
BGL_LONGLONG_T BgL_auxz00_7194;
BgL_auxz00_7194 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
BgL_arg1952z00_1249 = 
(BgL_auxz00_7194%BgL_lyz00_1246); } 
BgL_testz00_7193 = 
(BgL_arg1952z00_1249==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7193)
{ /* Ieee/number.scm 754 */
BGL_LONGLONG_T BgL_za71za7_3431;
BgL_za71za7_3431 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
return 
make_bllong(
(BgL_za71za7_3431/BgL_lyz00_1246));}  else 
{ /* Ieee/number.scm 753 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))/BgL_fyz00_1245));} } } } }  else 
{ /* Ieee/number.scm 750 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 757 */
bool_t BgL_testz00_7207;
{ /* Ieee/number.scm 757 */
BGL_LONGLONG_T BgL_arg1958z00_1255;
{ /* Ieee/number.scm 757 */
BGL_LONGLONG_T BgL_auxz00_7210;BGL_LONGLONG_T BgL_auxz00_7208;
BgL_auxz00_7210 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
BgL_auxz00_7208 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
BgL_arg1958z00_1255 = 
(BgL_auxz00_7208%BgL_auxz00_7210); } 
BgL_testz00_7207 = 
(BgL_arg1958z00_1255==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7207)
{ /* Ieee/number.scm 758 */
BGL_LONGLONG_T BgL_za71za7_3440;BGL_LONGLONG_T BgL_za72za7_3441;
BgL_za71za7_3440 = 
BLLONG_TO_LLONG(BgL_xz00_88); 
BgL_za72za7_3441 = 
BLLONG_TO_LLONG(BgL_yz00_89); 
return 
make_bllong(
(BgL_za71za7_3440/BgL_za72za7_3441));}  else 
{ /* Ieee/number.scm 757 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))/
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));} }  else 
{ /* Ieee/number.scm 756 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 761 */
obj_t BgL_qz00_1258;
BgL_qz00_1258 = 
bgl_bignum_div(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_88)), BgL_yz00_89); 
{ /* Ieee/number.scm 763 */
obj_t BgL_rz00_1259;
{ /* Ieee/number.scm 763 */
int BgL_auxz00_7229;
BgL_auxz00_7229 = 
(int)(((long)1)); 
BgL_rz00_1259 = 
BGL_MVALUES_VAL(BgL_auxz00_7229); } 
{ /* Ieee/number.scm 763 */
bool_t BgL_testz00_7232;
{ /* Ieee/number.scm 763 */
obj_t BgL_nz00_3447;
if(
BIGNUMP(BgL_rz00_1259))
{ /* Ieee/number.scm 763 */
BgL_nz00_3447 = BgL_rz00_1259; }  else 
{ 
obj_t BgL_auxz00_7235;
BgL_auxz00_7235 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)27910)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1259); 
FAILURE(BgL_auxz00_7235,BFALSE,BFALSE);} 
BgL_testz00_7232 = 
BXZERO(BgL_nz00_3447); } 
if(BgL_testz00_7232)
{ /* Ieee/number.scm 763 */
return BgL_qz00_1258;}  else 
{ /* Ieee/number.scm 763 */
return 
DOUBLE_TO_REAL(
(
(double)(
BLLONG_TO_LLONG(BgL_xz00_88))/
bgl_bignum_to_flonum(BgL_yz00_89)));} } } }  else 
{ /* Ieee/number.scm 760 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2800z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } }  else 
{ /* Ieee/number.scm 741 */
if(
BIGNUMP(BgL_xz00_88))
{ /* Ieee/number.scm 768 */
if(
INTEGERP(BgL_yz00_89))
{ /* Ieee/number.scm 771 */
obj_t BgL_qz00_1266;
BgL_qz00_1266 = 
bgl_bignum_div(BgL_xz00_88, 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_89))); 
{ /* Ieee/number.scm 773 */
obj_t BgL_rz00_1267;
{ /* Ieee/number.scm 773 */
int BgL_auxz00_7253;
BgL_auxz00_7253 = 
(int)(((long)1)); 
BgL_rz00_1267 = 
BGL_MVALUES_VAL(BgL_auxz00_7253); } 
{ /* Ieee/number.scm 773 */
bool_t BgL_testz00_7256;
{ /* Ieee/number.scm 773 */
obj_t BgL_nz00_3455;
if(
BIGNUMP(BgL_rz00_1267))
{ /* Ieee/number.scm 773 */
BgL_nz00_3455 = BgL_rz00_1267; }  else 
{ 
obj_t BgL_auxz00_7259;
BgL_auxz00_7259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)28155)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1267); 
FAILURE(BgL_auxz00_7259,BFALSE,BFALSE);} 
BgL_testz00_7256 = 
BXZERO(BgL_nz00_3455); } 
if(BgL_testz00_7256)
{ /* Ieee/number.scm 773 */
return BgL_qz00_1266;}  else 
{ /* Ieee/number.scm 773 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)/
(double)(
(long)CINT(BgL_yz00_89))));} } } }  else 
{ /* Ieee/number.scm 770 */
if(
REALP(BgL_yz00_89))
{ /* Ieee/number.scm 776 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)/
REAL_TO_DOUBLE(BgL_yz00_89)));}  else 
{ /* Ieee/number.scm 776 */
if(
ELONGP(BgL_yz00_89))
{ /* Ieee/number.scm 779 */
obj_t BgL_qz00_1275;
{ /* Ieee/number.scm 780 */
obj_t BgL_arg1979z00_1280;
{ /* Ieee/number.scm 780 */
long BgL_xz00_3464;
BgL_xz00_3464 = 
BELONG_TO_LONG(BgL_yz00_89); 
BgL_arg1979z00_1280 = 
bgl_long_to_bignum(BgL_xz00_3464); } 
BgL_qz00_1275 = 
bgl_bignum_div(BgL_xz00_88, BgL_arg1979z00_1280); } 
{ /* Ieee/number.scm 781 */
obj_t BgL_rz00_1276;
{ /* Ieee/number.scm 781 */
int BgL_auxz00_7280;
BgL_auxz00_7280 = 
(int)(((long)1)); 
BgL_rz00_1276 = 
BGL_MVALUES_VAL(BgL_auxz00_7280); } 
{ /* Ieee/number.scm 781 */
bool_t BgL_testz00_7283;
{ /* Ieee/number.scm 781 */
obj_t BgL_nz00_3466;
if(
BIGNUMP(BgL_rz00_1276))
{ /* Ieee/number.scm 781 */
BgL_nz00_3466 = BgL_rz00_1276; }  else 
{ 
obj_t BgL_auxz00_7286;
BgL_auxz00_7286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)28375)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1276); 
FAILURE(BgL_auxz00_7286,BFALSE,BFALSE);} 
BgL_testz00_7283 = 
BXZERO(BgL_nz00_3466); } 
if(BgL_testz00_7283)
{ /* Ieee/number.scm 781 */
return BgL_qz00_1275;}  else 
{ /* Ieee/number.scm 781 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)/
(double)(
BELONG_TO_LONG(BgL_yz00_89))));} } } }  else 
{ /* Ieee/number.scm 778 */
if(
LLONGP(BgL_yz00_89))
{ /* Ieee/number.scm 785 */
obj_t BgL_qz00_1282;
BgL_qz00_1282 = 
bgl_bignum_div(BgL_xz00_88, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_89))); 
{ /* Ieee/number.scm 787 */
obj_t BgL_rz00_1283;
{ /* Ieee/number.scm 787 */
int BgL_auxz00_7301;
BgL_auxz00_7301 = 
(int)(((long)1)); 
BgL_rz00_1283 = 
BGL_MVALUES_VAL(BgL_auxz00_7301); } 
{ /* Ieee/number.scm 787 */
bool_t BgL_testz00_7304;
{ /* Ieee/number.scm 787 */
obj_t BgL_nz00_3473;
if(
BIGNUMP(BgL_rz00_1283))
{ /* Ieee/number.scm 787 */
BgL_nz00_3473 = BgL_rz00_1283; }  else 
{ 
obj_t BgL_auxz00_7307;
BgL_auxz00_7307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)28544)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1283); 
FAILURE(BgL_auxz00_7307,BFALSE,BFALSE);} 
BgL_testz00_7304 = 
BXZERO(BgL_nz00_3473); } 
if(BgL_testz00_7304)
{ /* Ieee/number.scm 787 */
return BgL_qz00_1282;}  else 
{ /* Ieee/number.scm 787 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)/
(double)(
BLLONG_TO_LLONG(BgL_yz00_89))));} } } }  else 
{ /* Ieee/number.scm 784 */
if(
BIGNUMP(BgL_yz00_89))
{ /* Ieee/number.scm 791 */
obj_t BgL_qz00_1289;
BgL_qz00_1289 = 
bgl_bignum_div(BgL_xz00_88, BgL_yz00_89); 
{ /* Ieee/number.scm 793 */
obj_t BgL_rz00_1290;
{ /* Ieee/number.scm 793 */
int BgL_auxz00_7320;
BgL_auxz00_7320 = 
(int)(((long)1)); 
BgL_rz00_1290 = 
BGL_MVALUES_VAL(BgL_auxz00_7320); } 
{ /* Ieee/number.scm 793 */
bool_t BgL_testz00_7323;
{ /* Ieee/number.scm 793 */
obj_t BgL_nz00_3479;
if(
BIGNUMP(BgL_rz00_1290))
{ /* Ieee/number.scm 793 */
BgL_nz00_3479 = BgL_rz00_1290; }  else 
{ 
obj_t BgL_auxz00_7326;
BgL_auxz00_7326 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)28698)), BGl_string2799z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_rz00_1290); 
FAILURE(BgL_auxz00_7326,BFALSE,BFALSE);} 
BgL_testz00_7323 = 
BXZERO(BgL_nz00_3479); } 
if(BgL_testz00_7323)
{ /* Ieee/number.scm 793 */
return BgL_qz00_1289;}  else 
{ /* Ieee/number.scm 793 */
return 
DOUBLE_TO_REAL(
(
bgl_bignum_to_flonum(BgL_xz00_88)/
bgl_bignum_to_flonum(BgL_yz00_89)));} } } }  else 
{ /* Ieee/number.scm 790 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2800z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_89);} } } } } }  else 
{ /* Ieee/number.scm 768 */
return 
BGl_errorz00zz__errorz00(BGl_zf2zd2envz20zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_88);} } } } } } 
}



/* _2/ */
obj_t BGl__2zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4277, obj_t BgL_xz00_4278, obj_t BgL_yz00_4279)
{ AN_OBJECT;
{ /* Ieee/number.scm 672 */
return 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_4278, BgL_yz00_4279);} 
}



/* / */
BGL_EXPORTED_DEF obj_t BGl_zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_xz00_90, obj_t BgL_yz00_91)
{ AN_OBJECT;
{ /* Ieee/number.scm 804 */
if(
PAIRP(BgL_yz00_91))
{ /* Ieee/number.scm 806 */
obj_t BgL_g1104z00_1295;obj_t BgL_g1105z00_1296;
BgL_g1104z00_1295 = 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_90, 
CAR(BgL_yz00_91)); 
BgL_g1105z00_1296 = 
CDR(BgL_yz00_91); 
{ 
obj_t BgL_resultz00_3488;obj_t BgL_za7za7_3489;
BgL_resultz00_3488 = BgL_g1104z00_1295; 
BgL_za7za7_3489 = BgL_g1105z00_1296; 
BgL_loopz00_3487:
if(
PAIRP(BgL_za7za7_3489))
{ 
obj_t BgL_za7za7_7348;obj_t BgL_resultz00_7345;
BgL_resultz00_7345 = 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_resultz00_3488, 
CAR(BgL_za7za7_3489)); 
BgL_za7za7_7348 = 
CDR(BgL_za7za7_3489); 
BgL_za7za7_3489 = BgL_za7za7_7348; 
BgL_resultz00_3488 = BgL_resultz00_7345; 
goto BgL_loopz00_3487;}  else 
{ /* Ieee/number.scm 806 */
return BgL_resultz00_3488;} } }  else 
{ /* Ieee/number.scm 805 */
return 
BGl_2zf2zf2zz__r4_numbers_6_5z00(
BINT(((long)1)), BgL_xz00_90);} } 
}



/* _/ */
obj_t BGl__zf2zf2zz__r4_numbers_6_5z00(obj_t BgL_envz00_4280, obj_t BgL_xz00_4281, obj_t BgL_yz00_4282)
{ AN_OBJECT;
{ /* Ieee/number.scm 804 */
return 
BGl_zf2zf2zz__r4_numbers_6_5z00(BgL_xz00_4281, BgL_yz00_4282);} 
}



/* abs */
BGL_EXPORTED_DEF obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_92)
{ AN_OBJECT;
{ /* Ieee/number.scm 817 */
if(
INTEGERP(BgL_xz00_92))
{ /* Ieee/number.scm 819 */
if(
(
(long)CINT(BgL_xz00_92)==(LONG_MIN >> TAG_SHIFT)))
{ /* Ieee/number.scm 820 */
return 
bgl_bignum_neg(
bgl_long_to_bignum(
(long)CINT(BgL_xz00_92)));}  else 
{ /* Ieee/number.scm 822 */
long BgL_nz00_3522;
BgL_nz00_3522 = 
(long)CINT(BgL_xz00_92); 
if(
(BgL_nz00_3522<((long)0)))
{ /* Ieee/number.scm 822 */
return 
BINT(
NEG(BgL_nz00_3522));}  else 
{ /* Ieee/number.scm 822 */
return 
BINT(BgL_nz00_3522);} } }  else 
{ /* Ieee/number.scm 819 */
if(
REALP(BgL_xz00_92))
{ /* Ieee/number.scm 823 */
return 
DOUBLE_TO_REAL(
fabs(
REAL_TO_DOUBLE(BgL_xz00_92)));}  else 
{ /* Ieee/number.scm 823 */
if(
ELONGP(BgL_xz00_92))
{ /* Ieee/number.scm 826 */
bool_t BgL_testz00_7374;
{ /* Ieee/number.scm 826 */
long BgL_n1z00_3531;
BgL_n1z00_3531 = 
BELONG_TO_LONG(BgL_xz00_92); 
BgL_testz00_7374 = 
(BgL_n1z00_3531==LONG_MIN); } 
if(BgL_testz00_7374)
{ /* Ieee/number.scm 827 */
obj_t BgL_auxz00_7377;
{ /* Ieee/number.scm 827 */
long BgL_xz00_3533;
BgL_xz00_3533 = 
BELONG_TO_LONG(BgL_xz00_92); 
BgL_auxz00_7377 = 
bgl_long_to_bignum(BgL_xz00_3533); } 
return 
bgl_bignum_neg(BgL_auxz00_7377);}  else 
{ /* Ieee/number.scm 828 */
long BgL_nz00_3535;
BgL_nz00_3535 = 
BELONG_TO_LONG(BgL_xz00_92); 
if(
(BgL_nz00_3535<((long)0)))
{ /* Ieee/number.scm 828 */
long BgL_auxz00_7384;
BgL_auxz00_7384 = 
NEG(BgL_nz00_3535); 
return 
make_belong(BgL_auxz00_7384);}  else 
{ /* Ieee/number.scm 828 */
return 
make_belong(BgL_nz00_3535);} } }  else 
{ /* Ieee/number.scm 825 */
if(
LLONGP(BgL_xz00_92))
{ /* Ieee/number.scm 829 */
if(
(
BLLONG_TO_LLONG(BgL_xz00_92)==BGL_LONGLONG_MIN))
{ /* Ieee/number.scm 830 */
return 
bgl_bignum_neg(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_xz00_92)));}  else 
{ /* Ieee/number.scm 832 */
BGL_LONGLONG_T BgL_nz00_3546;
BgL_nz00_3546 = 
BLLONG_TO_LLONG(BgL_xz00_92); 
if(
(BgL_nz00_3546<((BGL_LONGLONG_T)0)))
{ /* Ieee/number.scm 832 */
return 
make_bllong(
NEG(BgL_nz00_3546));}  else 
{ /* Ieee/number.scm 832 */
return 
make_bllong(BgL_nz00_3546);} } }  else 
{ /* Ieee/number.scm 829 */
if(
BIGNUMP(BgL_xz00_92))
{ /* Ieee/number.scm 833 */
return 
bgl_bignum_abs(BgL_xz00_92);}  else 
{ /* Ieee/number.scm 833 */
return 
BGl_errorz00zz__errorz00(BGl_string2802z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_92);} } } } } } 
}



/* _abs */
obj_t BGl__absz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4283, obj_t BgL_xz00_4284)
{ AN_OBJECT;
{ /* Ieee/number.scm 817 */
return 
BGl_absz00zz__r4_numbers_6_5z00(BgL_xz00_4284);} 
}



/* floor */
BGL_EXPORTED_DEF obj_t BGl_floorz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_93)
{ AN_OBJECT;
{ /* Ieee/number.scm 841 */
if(
INTEGERP(BgL_xz00_93))
{ /* Ieee/number.scm 843 */
return BgL_xz00_93;}  else 
{ /* Ieee/number.scm 843 */
if(
REALP(BgL_xz00_93))
{ /* Ieee/number.scm 846 */
double BgL_rz00_3556;
BgL_rz00_3556 = 
REAL_TO_DOUBLE(BgL_xz00_93); 
return 
DOUBLE_TO_REAL(
floor(BgL_rz00_3556));}  else 
{ /* Ieee/number.scm 845 */
if(
ELONGP(BgL_xz00_93))
{ /* Ieee/number.scm 847 */
return BgL_xz00_93;}  else 
{ /* Ieee/number.scm 847 */
if(
LLONGP(BgL_xz00_93))
{ /* Ieee/number.scm 849 */
return BgL_xz00_93;}  else 
{ /* Ieee/number.scm 849 */
if(
BIGNUMP(BgL_xz00_93))
{ /* Ieee/number.scm 851 */
return BgL_xz00_93;}  else 
{ /* Ieee/number.scm 851 */
return 
BGl_errorz00zz__errorz00(BGl_string2803z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_93);} } } } } } 
}



/* _floor */
obj_t BGl__floorz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4285, obj_t BgL_xz00_4286)
{ AN_OBJECT;
{ /* Ieee/number.scm 841 */
return 
BGl_floorz00zz__r4_numbers_6_5z00(BgL_xz00_4286);} 
}



/* ceiling */
BGL_EXPORTED_DEF obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_94)
{ AN_OBJECT;
{ /* Ieee/number.scm 859 */
if(
INTEGERP(BgL_xz00_94))
{ /* Ieee/number.scm 861 */
return BgL_xz00_94;}  else 
{ /* Ieee/number.scm 861 */
if(
REALP(BgL_xz00_94))
{ /* Ieee/number.scm 864 */
double BgL_rz00_3562;
BgL_rz00_3562 = 
REAL_TO_DOUBLE(BgL_xz00_94); 
return 
DOUBLE_TO_REAL(
ceil(BgL_rz00_3562));}  else 
{ /* Ieee/number.scm 863 */
if(
ELONGP(BgL_xz00_94))
{ /* Ieee/number.scm 865 */
return BgL_xz00_94;}  else 
{ /* Ieee/number.scm 865 */
if(
LLONGP(BgL_xz00_94))
{ /* Ieee/number.scm 867 */
return BgL_xz00_94;}  else 
{ /* Ieee/number.scm 867 */
if(
BIGNUMP(BgL_xz00_94))
{ /* Ieee/number.scm 869 */
return BgL_xz00_94;}  else 
{ /* Ieee/number.scm 869 */
return 
BGl_errorz00zz__errorz00(BGl_string2804z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_94);} } } } } } 
}



/* _ceiling */
obj_t BGl__ceilingz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4287, obj_t BgL_xz00_4288)
{ AN_OBJECT;
{ /* Ieee/number.scm 859 */
return 
BGl_ceilingz00zz__r4_numbers_6_5z00(BgL_xz00_4288);} 
}



/* truncate */
BGL_EXPORTED_DEF obj_t BGl_truncatez00zz__r4_numbers_6_5z00(obj_t BgL_xz00_95)
{ AN_OBJECT;
{ /* Ieee/number.scm 877 */
if(
INTEGERP(BgL_xz00_95))
{ /* Ieee/number.scm 879 */
return BgL_xz00_95;}  else 
{ /* Ieee/number.scm 879 */
if(
REALP(BgL_xz00_95))
{ /* Ieee/number.scm 882 */
double BgL_res2469z00_3575;
{ /* Ieee/number.scm 882 */
double BgL_rz00_3568;
BgL_rz00_3568 = 
REAL_TO_DOUBLE(BgL_xz00_95); 
if(
(BgL_rz00_3568<((double)0.0)))
{ /* Ieee/number.scm 882 */
BgL_res2469z00_3575 = 
ceil(BgL_rz00_3568); }  else 
{ /* Ieee/number.scm 882 */
BgL_res2469z00_3575 = 
floor(BgL_rz00_3568); } } 
return 
DOUBLE_TO_REAL(BgL_res2469z00_3575);}  else 
{ /* Ieee/number.scm 881 */
if(
ELONGP(BgL_xz00_95))
{ /* Ieee/number.scm 883 */
return BgL_xz00_95;}  else 
{ /* Ieee/number.scm 883 */
if(
LLONGP(BgL_xz00_95))
{ /* Ieee/number.scm 885 */
return BgL_xz00_95;}  else 
{ /* Ieee/number.scm 885 */
return 
BGl_errorz00zz__errorz00(BGl_string2805z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_95);} } } } } 
}



/* _truncate */
obj_t BGl__truncatez00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4289, obj_t BgL_xz00_4290)
{ AN_OBJECT;
{ /* Ieee/number.scm 877 */
return 
BGl_truncatez00zz__r4_numbers_6_5z00(BgL_xz00_4290);} 
}



/* round */
BGL_EXPORTED_DEF obj_t BGl_roundz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_96)
{ AN_OBJECT;
{ /* Ieee/number.scm 893 */
if(
INTEGERP(BgL_xz00_96))
{ /* Ieee/number.scm 895 */
return BgL_xz00_96;}  else 
{ /* Ieee/number.scm 895 */
if(
REALP(BgL_xz00_96))
{ /* Ieee/number.scm 897 */
return 
DOUBLE_TO_REAL(
BGl_roundflz00zz__r4_numbers_6_5_flonumz00(
REAL_TO_DOUBLE(BgL_xz00_96)));}  else 
{ /* Ieee/number.scm 897 */
if(
ELONGP(BgL_xz00_96))
{ /* Ieee/number.scm 899 */
return BgL_xz00_96;}  else 
{ /* Ieee/number.scm 899 */
if(
LLONGP(BgL_xz00_96))
{ /* Ieee/number.scm 901 */
return BgL_xz00_96;}  else 
{ /* Ieee/number.scm 901 */
if(
BIGNUMP(BgL_xz00_96))
{ /* Ieee/number.scm 903 */
return BgL_xz00_96;}  else 
{ /* Ieee/number.scm 903 */
return 
BGl_errorz00zz__errorz00(BGl_string2806z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_96);} } } } } } 
}



/* _round */
obj_t BGl__roundz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4291, obj_t BgL_xz00_4292)
{ AN_OBJECT;
{ /* Ieee/number.scm 893 */
return 
BGl_roundz00zz__r4_numbers_6_5z00(BgL_xz00_4292);} 
}



/* exp */
BGL_EXPORTED_DEF double BGl_expz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_97)
{ AN_OBJECT;
{ /* Ieee/number.scm 911 */
if(
REALP(BgL_xz00_97))
{ /* Ieee/number.scm 913 */
return 
exp(
REAL_TO_DOUBLE(BgL_xz00_97));}  else 
{ /* Ieee/number.scm 913 */
if(
INTEGERP(BgL_xz00_97))
{ /* Ieee/number.scm 915 */
return 
exp(
(double)(
(long)CINT(BgL_xz00_97)));}  else 
{ /* Ieee/number.scm 915 */
if(
ELONGP(BgL_xz00_97))
{ /* Ieee/number.scm 917 */
return 
exp(
(double)(
BELONG_TO_LONG(BgL_xz00_97)));}  else 
{ /* Ieee/number.scm 917 */
if(
LLONGP(BgL_xz00_97))
{ /* Ieee/number.scm 919 */
return 
exp(
(double)(
BLLONG_TO_LLONG(BgL_xz00_97)));}  else 
{ /* Ieee/number.scm 919 */
if(
BIGNUMP(BgL_xz00_97))
{ /* Ieee/number.scm 921 */
return 
exp(
bgl_bignum_to_flonum(BgL_xz00_97));}  else 
{ /* Ieee/number.scm 924 */
obj_t BgL_auxz00_7491;
{ /* Ieee/number.scm 924 */
obj_t BgL_aux2636z00_4469;
BgL_aux2636z00_4469 = 
BGl_errorz00zz__errorz00(BGl_string2807z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_97); 
if(
REALP(BgL_aux2636z00_4469))
{ /* Ieee/number.scm 924 */
BgL_auxz00_7491 = BgL_aux2636z00_4469
; }  else 
{ 
obj_t BgL_auxz00_7495;
BgL_auxz00_7495 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)32275)), BGl_string2807z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2636z00_4469); 
FAILURE(BgL_auxz00_7495,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7491);} } } } } } 
}



/* _exp */
obj_t BGl__expz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4293, obj_t BgL_xz00_4294)
{ AN_OBJECT;
{ /* Ieee/number.scm 911 */
return 
DOUBLE_TO_REAL(
BGl_expz00zz__r4_numbers_6_5z00(BgL_xz00_4294));} 
}



/* log */
BGL_EXPORTED_DEF double BGl_logz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_98)
{ AN_OBJECT;
{ /* Ieee/number.scm 929 */
if(
REALP(BgL_xz00_98))
{ /* Ieee/number.scm 931 */
return 
log(
REAL_TO_DOUBLE(BgL_xz00_98));}  else 
{ /* Ieee/number.scm 931 */
if(
INTEGERP(BgL_xz00_98))
{ /* Ieee/number.scm 933 */
return 
log(
(double)(
(long)CINT(BgL_xz00_98)));}  else 
{ /* Ieee/number.scm 933 */
if(
ELONGP(BgL_xz00_98))
{ /* Ieee/number.scm 935 */
return 
log(
(double)(
BELONG_TO_LONG(BgL_xz00_98)));}  else 
{ /* Ieee/number.scm 935 */
if(
LLONGP(BgL_xz00_98))
{ /* Ieee/number.scm 937 */
return 
log(
(double)(
BLLONG_TO_LLONG(BgL_xz00_98)));}  else 
{ /* Ieee/number.scm 937 */
if(
BIGNUMP(BgL_xz00_98))
{ /* Ieee/number.scm 939 */
return 
log(
bgl_bignum_to_flonum(BgL_xz00_98));}  else 
{ /* Ieee/number.scm 942 */
obj_t BgL_auxz00_7525;
{ /* Ieee/number.scm 942 */
obj_t BgL_aux2638z00_4471;
BgL_aux2638z00_4471 = 
BGl_errorz00zz__errorz00(BGl_string2808z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_98); 
if(
REALP(BgL_aux2638z00_4471))
{ /* Ieee/number.scm 942 */
BgL_auxz00_7525 = BgL_aux2638z00_4471
; }  else 
{ 
obj_t BgL_auxz00_7529;
BgL_auxz00_7529 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)32829)), BGl_string2808z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2638z00_4471); 
FAILURE(BgL_auxz00_7529,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7525);} } } } } } 
}



/* _log */
obj_t BGl__logz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4295, obj_t BgL_xz00_4296)
{ AN_OBJECT;
{ /* Ieee/number.scm 929 */
return 
DOUBLE_TO_REAL(
BGl_logz00zz__r4_numbers_6_5z00(BgL_xz00_4296));} 
}



/* sin */
BGL_EXPORTED_DEF double BGl_sinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_99)
{ AN_OBJECT;
{ /* Ieee/number.scm 947 */
if(
REALP(BgL_xz00_99))
{ /* Ieee/number.scm 949 */
return 
sin(
REAL_TO_DOUBLE(BgL_xz00_99));}  else 
{ /* Ieee/number.scm 949 */
if(
INTEGERP(BgL_xz00_99))
{ /* Ieee/number.scm 951 */
return 
sin(
(double)(
(long)CINT(BgL_xz00_99)));}  else 
{ /* Ieee/number.scm 951 */
if(
ELONGP(BgL_xz00_99))
{ /* Ieee/number.scm 953 */
return 
sin(
(double)(
BELONG_TO_LONG(BgL_xz00_99)));}  else 
{ /* Ieee/number.scm 953 */
if(
LLONGP(BgL_xz00_99))
{ /* Ieee/number.scm 955 */
return 
sin(
(double)(
BLLONG_TO_LLONG(BgL_xz00_99)));}  else 
{ /* Ieee/number.scm 955 */
if(
BIGNUMP(BgL_xz00_99))
{ /* Ieee/number.scm 957 */
return 
sin(
bgl_bignum_to_flonum(BgL_xz00_99));}  else 
{ /* Ieee/number.scm 960 */
obj_t BgL_auxz00_7559;
{ /* Ieee/number.scm 960 */
obj_t BgL_aux2640z00_4473;
BgL_aux2640z00_4473 = 
BGl_errorz00zz__errorz00(BGl_string2809z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_99); 
if(
REALP(BgL_aux2640z00_4473))
{ /* Ieee/number.scm 960 */
BgL_auxz00_7559 = BgL_aux2640z00_4473
; }  else 
{ 
obj_t BgL_auxz00_7563;
BgL_auxz00_7563 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)33382)), BGl_string2809z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2640z00_4473); 
FAILURE(BgL_auxz00_7563,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7559);} } } } } } 
}



/* _sin */
obj_t BGl__sinz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4297, obj_t BgL_xz00_4298)
{ AN_OBJECT;
{ /* Ieee/number.scm 947 */
return 
DOUBLE_TO_REAL(
BGl_sinz00zz__r4_numbers_6_5z00(BgL_xz00_4298));} 
}



/* cos */
BGL_EXPORTED_DEF double BGl_cosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_100)
{ AN_OBJECT;
{ /* Ieee/number.scm 965 */
if(
REALP(BgL_xz00_100))
{ /* Ieee/number.scm 967 */
return 
cos(
REAL_TO_DOUBLE(BgL_xz00_100));}  else 
{ /* Ieee/number.scm 967 */
if(
INTEGERP(BgL_xz00_100))
{ /* Ieee/number.scm 969 */
return 
cos(
(double)(
(long)CINT(BgL_xz00_100)));}  else 
{ /* Ieee/number.scm 969 */
if(
ELONGP(BgL_xz00_100))
{ /* Ieee/number.scm 971 */
return 
cos(
(double)(
BELONG_TO_LONG(BgL_xz00_100)));}  else 
{ /* Ieee/number.scm 971 */
if(
LLONGP(BgL_xz00_100))
{ /* Ieee/number.scm 973 */
return 
cos(
(double)(
BLLONG_TO_LLONG(BgL_xz00_100)));}  else 
{ /* Ieee/number.scm 973 */
if(
BIGNUMP(BgL_xz00_100))
{ /* Ieee/number.scm 975 */
return 
cos(
bgl_bignum_to_flonum(BgL_xz00_100));}  else 
{ /* Ieee/number.scm 978 */
obj_t BgL_auxz00_7593;
{ /* Ieee/number.scm 978 */
obj_t BgL_aux2642z00_4475;
BgL_aux2642z00_4475 = 
BGl_errorz00zz__errorz00(BGl_string2810z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_100); 
if(
REALP(BgL_aux2642z00_4475))
{ /* Ieee/number.scm 978 */
BgL_auxz00_7593 = BgL_aux2642z00_4475
; }  else 
{ 
obj_t BgL_auxz00_7597;
BgL_auxz00_7597 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)33935)), BGl_string2810z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2642z00_4475); 
FAILURE(BgL_auxz00_7597,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7593);} } } } } } 
}



/* _cos */
obj_t BGl__cosz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4299, obj_t BgL_xz00_4300)
{ AN_OBJECT;
{ /* Ieee/number.scm 965 */
return 
DOUBLE_TO_REAL(
BGl_cosz00zz__r4_numbers_6_5z00(BgL_xz00_4300));} 
}



/* tan */
BGL_EXPORTED_DEF double BGl_tanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_101)
{ AN_OBJECT;
{ /* Ieee/number.scm 983 */
if(
REALP(BgL_xz00_101))
{ /* Ieee/number.scm 985 */
return 
tan(
REAL_TO_DOUBLE(BgL_xz00_101));}  else 
{ /* Ieee/number.scm 985 */
if(
INTEGERP(BgL_xz00_101))
{ /* Ieee/number.scm 987 */
return 
tan(
(double)(
(long)CINT(BgL_xz00_101)));}  else 
{ /* Ieee/number.scm 987 */
if(
ELONGP(BgL_xz00_101))
{ /* Ieee/number.scm 989 */
return 
tan(
(double)(
BELONG_TO_LONG(BgL_xz00_101)));}  else 
{ /* Ieee/number.scm 989 */
if(
LLONGP(BgL_xz00_101))
{ /* Ieee/number.scm 991 */
return 
tan(
(double)(
BLLONG_TO_LLONG(BgL_xz00_101)));}  else 
{ /* Ieee/number.scm 991 */
if(
BIGNUMP(BgL_xz00_101))
{ /* Ieee/number.scm 993 */
return 
tan(
bgl_bignum_to_flonum(BgL_xz00_101));}  else 
{ /* Ieee/number.scm 996 */
obj_t BgL_auxz00_7627;
{ /* Ieee/number.scm 996 */
obj_t BgL_aux2644z00_4477;
BgL_aux2644z00_4477 = 
BGl_errorz00zz__errorz00(BGl_string2811z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_101); 
if(
REALP(BgL_aux2644z00_4477))
{ /* Ieee/number.scm 996 */
BgL_auxz00_7627 = BgL_aux2644z00_4477
; }  else 
{ 
obj_t BgL_auxz00_7631;
BgL_auxz00_7631 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)34488)), BGl_string2811z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2644z00_4477); 
FAILURE(BgL_auxz00_7631,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7627);} } } } } } 
}



/* _tan */
obj_t BGl__tanz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4301, obj_t BgL_xz00_4302)
{ AN_OBJECT;
{ /* Ieee/number.scm 983 */
return 
DOUBLE_TO_REAL(
BGl_tanz00zz__r4_numbers_6_5z00(BgL_xz00_4302));} 
}



/* asin */
BGL_EXPORTED_DEF double BGl_asinz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_102)
{ AN_OBJECT;
{ /* Ieee/number.scm 1001 */
if(
REALP(BgL_xz00_102))
{ /* Ieee/number.scm 1003 */
return 
asin(
REAL_TO_DOUBLE(BgL_xz00_102));}  else 
{ /* Ieee/number.scm 1003 */
if(
INTEGERP(BgL_xz00_102))
{ /* Ieee/number.scm 1005 */
return 
asin(
(double)(
(long)CINT(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 1005 */
if(
ELONGP(BgL_xz00_102))
{ /* Ieee/number.scm 1007 */
return 
asin(
(double)(
BELONG_TO_LONG(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 1007 */
if(
LLONGP(BgL_xz00_102))
{ /* Ieee/number.scm 1009 */
return 
asin(
(double)(
BLLONG_TO_LLONG(BgL_xz00_102)));}  else 
{ /* Ieee/number.scm 1009 */
if(
BIGNUMP(BgL_xz00_102))
{ /* Ieee/number.scm 1011 */
return 
asin(
bgl_bignum_to_flonum(BgL_xz00_102));}  else 
{ /* Ieee/number.scm 1014 */
obj_t BgL_auxz00_7661;
{ /* Ieee/number.scm 1014 */
obj_t BgL_aux2646z00_4479;
BgL_aux2646z00_4479 = 
BGl_errorz00zz__errorz00(BGl_string2812z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_102); 
if(
REALP(BgL_aux2646z00_4479))
{ /* Ieee/number.scm 1014 */
BgL_auxz00_7661 = BgL_aux2646z00_4479
; }  else 
{ 
obj_t BgL_auxz00_7665;
BgL_auxz00_7665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)35047)), BGl_string2812z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2646z00_4479); 
FAILURE(BgL_auxz00_7665,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7661);} } } } } } 
}



/* _asin */
obj_t BGl__asinz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4303, obj_t BgL_xz00_4304)
{ AN_OBJECT;
{ /* Ieee/number.scm 1001 */
return 
DOUBLE_TO_REAL(
BGl_asinz00zz__r4_numbers_6_5z00(BgL_xz00_4304));} 
}



/* acos */
BGL_EXPORTED_DEF double BGl_acosz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_103)
{ AN_OBJECT;
{ /* Ieee/number.scm 1019 */
if(
REALP(BgL_xz00_103))
{ /* Ieee/number.scm 1021 */
return 
acos(
REAL_TO_DOUBLE(BgL_xz00_103));}  else 
{ /* Ieee/number.scm 1021 */
if(
INTEGERP(BgL_xz00_103))
{ /* Ieee/number.scm 1023 */
return 
acos(
(double)(
(long)CINT(BgL_xz00_103)));}  else 
{ /* Ieee/number.scm 1023 */
if(
ELONGP(BgL_xz00_103))
{ /* Ieee/number.scm 1025 */
return 
acos(
(double)(
BELONG_TO_LONG(BgL_xz00_103)));}  else 
{ /* Ieee/number.scm 1025 */
if(
LLONGP(BgL_xz00_103))
{ /* Ieee/number.scm 1027 */
return 
acos(
(double)(
BLLONG_TO_LLONG(BgL_xz00_103)));}  else 
{ /* Ieee/number.scm 1027 */
if(
BIGNUMP(BgL_xz00_103))
{ /* Ieee/number.scm 1029 */
return 
acos(
bgl_bignum_to_flonum(BgL_xz00_103));}  else 
{ /* Ieee/number.scm 1032 */
obj_t BgL_auxz00_7695;
{ /* Ieee/number.scm 1032 */
obj_t BgL_aux2648z00_4481;
BgL_aux2648z00_4481 = 
BGl_errorz00zz__errorz00(BGl_string2813z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_103); 
if(
REALP(BgL_aux2648z00_4481))
{ /* Ieee/number.scm 1032 */
BgL_auxz00_7695 = BgL_aux2648z00_4481
; }  else 
{ 
obj_t BgL_auxz00_7699;
BgL_auxz00_7699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)35607)), BGl_string2813z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2648z00_4481); 
FAILURE(BgL_auxz00_7699,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7695);} } } } } } 
}



/* _acos */
obj_t BGl__acosz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4305, obj_t BgL_xz00_4306)
{ AN_OBJECT;
{ /* Ieee/number.scm 1019 */
return 
DOUBLE_TO_REAL(
BGl_acosz00zz__r4_numbers_6_5z00(BgL_xz00_4306));} 
}



/* atan */
BGL_EXPORTED_DEF double BGl_atanz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_104, obj_t BgL_yz00_105)
{ AN_OBJECT;
{ /* Ieee/number.scm 1037 */
{ /* Ieee/number.scm 1038 */
obj_t BgL_yz00_1403;
if(
PAIRP(BgL_yz00_105))
{ /* Ieee/number.scm 1039 */
obj_t BgL_yz00_1419;
BgL_yz00_1419 = 
CAR(BgL_yz00_105); 
if(
INTEGERP(BgL_yz00_1419))
{ /* Ieee/number.scm 1041 */
BgL_yz00_1403 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_yz00_1419))); }  else 
{ /* Ieee/number.scm 1041 */
if(
REALP(BgL_yz00_1419))
{ /* Ieee/number.scm 1043 */
BgL_yz00_1403 = BgL_yz00_1419; }  else 
{ /* Ieee/number.scm 1043 */
BgL_yz00_1403 = 
BGl_errorz00zz__errorz00(BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_1419); } } }  else 
{ /* Ieee/number.scm 1038 */
BgL_yz00_1403 = BFALSE; } 
if(
REALP(BgL_xz00_104))
{ /* Ieee/number.scm 1054 */
obj_t BgL_xz00_3664;
BgL_xz00_3664 = BgL_xz00_104; 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
{ /* Ieee/number.scm 1054 */
double BgL_res2470z00_3677;
{ /* Ieee/number.scm 1054 */
double BgL_xz00_3666;double BgL_yz00_3667;
BgL_xz00_3666 = 
REAL_TO_DOUBLE(BgL_xz00_3664); 
{ /* Ieee/number.scm 1054 */
obj_t BgL_auxz00_7722;
if(
REALP(BgL_yz00_1403))
{ /* Ieee/number.scm 1054 */
BgL_auxz00_7722 = BgL_yz00_1403
; }  else 
{ 
obj_t BgL_auxz00_7725;
BgL_auxz00_7725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36209)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_yz00_1403); 
FAILURE(BgL_auxz00_7725,BFALSE,BFALSE);} 
BgL_yz00_3667 = 
REAL_TO_DOUBLE(BgL_auxz00_7722); } 
{ /* Ieee/number.scm 1054 */
bool_t BgL_testz00_7730;
if(
(BgL_xz00_3666==((double)0.0)))
{ /* Ieee/number.scm 1054 */
BgL_testz00_7730 = 
(BgL_yz00_3667==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1054 */
BgL_testz00_7730 = ((bool_t)0)
; } 
if(BgL_testz00_7730)
{ /* Ieee/number.scm 1054 */
obj_t BgL_procz00_3670;obj_t BgL_msgz00_3671;
BgL_procz00_3670 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2815z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3671 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
the_failure(BgL_procz00_3670, BgL_msgz00_3671, BGl_real2817z00zz__r4_numbers_6_5z00); 
BgL_res2470z00_3677 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1054 */
BgL_res2470z00_3677 = 
atan2(BgL_xz00_3666, BgL_yz00_3667); } } } 
return BgL_res2470z00_3677;}  else 
{ /* Ieee/number.scm 1054 */
return 
atan(
REAL_TO_DOUBLE(BgL_xz00_3664));} }  else 
{ /* Ieee/number.scm 1053 */
if(
INTEGERP(BgL_xz00_104))
{ /* Ieee/number.scm 1056 */
double BgL_arg2101z00_1407;
BgL_arg2101z00_1407 = 
(double)(
(long)CINT(BgL_xz00_104)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
{ /* Ieee/number.scm 1056 */
double BgL_res2471z00_3693;
{ /* Ieee/number.scm 1056 */
double BgL_yz00_3683;
{ /* Ieee/number.scm 1056 */
obj_t BgL_auxz00_7748;
if(
REALP(BgL_yz00_1403))
{ /* Ieee/number.scm 1056 */
BgL_auxz00_7748 = BgL_yz00_1403
; }  else 
{ 
obj_t BgL_auxz00_7751;
BgL_auxz00_7751 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36242)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_yz00_1403); 
FAILURE(BgL_auxz00_7751,BFALSE,BFALSE);} 
BgL_yz00_3683 = 
REAL_TO_DOUBLE(BgL_auxz00_7748); } 
{ /* Ieee/number.scm 1056 */
bool_t BgL_testz00_7756;
if(
(BgL_arg2101z00_1407==((double)0.0)))
{ /* Ieee/number.scm 1056 */
BgL_testz00_7756 = 
(BgL_yz00_3683==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1056 */
BgL_testz00_7756 = ((bool_t)0)
; } 
if(BgL_testz00_7756)
{ /* Ieee/number.scm 1056 */
obj_t BgL_procz00_3686;obj_t BgL_msgz00_3687;
BgL_procz00_3686 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2815z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3687 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
the_failure(BgL_procz00_3686, BgL_msgz00_3687, BGl_real2817z00zz__r4_numbers_6_5z00); 
BgL_res2471z00_3693 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1056 */
BgL_res2471z00_3693 = 
atan2(BgL_arg2101z00_1407, BgL_yz00_3683); } } } 
return BgL_res2471z00_3693;}  else 
{ /* Ieee/number.scm 1056 */
return 
atan(BgL_arg2101z00_1407);} }  else 
{ /* Ieee/number.scm 1055 */
if(
ELONGP(BgL_xz00_104))
{ /* Ieee/number.scm 1058 */
double BgL_arg2103z00_1409;
BgL_arg2103z00_1409 = 
(double)(
BELONG_TO_LONG(BgL_xz00_104)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
{ /* Ieee/number.scm 1058 */
double BgL_res2472z00_3709;
{ /* Ieee/number.scm 1058 */
double BgL_yz00_3699;
{ /* Ieee/number.scm 1058 */
obj_t BgL_auxz00_7773;
if(
REALP(BgL_yz00_1403))
{ /* Ieee/number.scm 1058 */
BgL_auxz00_7773 = BgL_yz00_1403
; }  else 
{ 
obj_t BgL_auxz00_7776;
BgL_auxz00_7776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36292)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_yz00_1403); 
FAILURE(BgL_auxz00_7776,BFALSE,BFALSE);} 
BgL_yz00_3699 = 
REAL_TO_DOUBLE(BgL_auxz00_7773); } 
{ /* Ieee/number.scm 1058 */
bool_t BgL_testz00_7781;
if(
(BgL_arg2103z00_1409==((double)0.0)))
{ /* Ieee/number.scm 1058 */
BgL_testz00_7781 = 
(BgL_yz00_3699==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1058 */
BgL_testz00_7781 = ((bool_t)0)
; } 
if(BgL_testz00_7781)
{ /* Ieee/number.scm 1058 */
obj_t BgL_procz00_3702;obj_t BgL_msgz00_3703;
BgL_procz00_3702 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2815z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3703 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
the_failure(BgL_procz00_3702, BgL_msgz00_3703, BGl_real2817z00zz__r4_numbers_6_5z00); 
BgL_res2472z00_3709 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1058 */
BgL_res2472z00_3709 = 
atan2(BgL_arg2103z00_1409, BgL_yz00_3699); } } } 
return BgL_res2472z00_3709;}  else 
{ /* Ieee/number.scm 1058 */
return 
atan(BgL_arg2103z00_1409);} }  else 
{ /* Ieee/number.scm 1057 */
if(
LLONGP(BgL_xz00_104))
{ /* Ieee/number.scm 1060 */
double BgL_arg2105z00_1411;
BgL_arg2105z00_1411 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_104)); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
{ /* Ieee/number.scm 1060 */
double BgL_res2473z00_3725;
{ /* Ieee/number.scm 1060 */
double BgL_yz00_3715;
{ /* Ieee/number.scm 1060 */
obj_t BgL_auxz00_7798;
if(
REALP(BgL_yz00_1403))
{ /* Ieee/number.scm 1060 */
BgL_auxz00_7798 = BgL_yz00_1403
; }  else 
{ 
obj_t BgL_auxz00_7801;
BgL_auxz00_7801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36341)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_yz00_1403); 
FAILURE(BgL_auxz00_7801,BFALSE,BFALSE);} 
BgL_yz00_3715 = 
REAL_TO_DOUBLE(BgL_auxz00_7798); } 
{ /* Ieee/number.scm 1060 */
bool_t BgL_testz00_7806;
if(
(BgL_arg2105z00_1411==((double)0.0)))
{ /* Ieee/number.scm 1060 */
BgL_testz00_7806 = 
(BgL_yz00_3715==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1060 */
BgL_testz00_7806 = ((bool_t)0)
; } 
if(BgL_testz00_7806)
{ /* Ieee/number.scm 1060 */
obj_t BgL_procz00_3718;obj_t BgL_msgz00_3719;
BgL_procz00_3718 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2815z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3719 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
the_failure(BgL_procz00_3718, BgL_msgz00_3719, BGl_real2817z00zz__r4_numbers_6_5z00); 
BgL_res2473z00_3725 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1060 */
BgL_res2473z00_3725 = 
atan2(BgL_arg2105z00_1411, BgL_yz00_3715); } } } 
return BgL_res2473z00_3725;}  else 
{ /* Ieee/number.scm 1060 */
return 
atan(BgL_arg2105z00_1411);} }  else 
{ /* Ieee/number.scm 1059 */
if(
BIGNUMP(BgL_xz00_104))
{ /* Ieee/number.scm 1062 */
double BgL_arg2107z00_1413;
BgL_arg2107z00_1413 = 
bgl_bignum_to_flonum(BgL_xz00_104); 
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_yz00_1403))
{ /* Ieee/number.scm 1062 */
double BgL_res2474z00_3742;
{ /* Ieee/number.scm 1062 */
double BgL_yz00_3732;
{ /* Ieee/number.scm 1062 */
obj_t BgL_auxz00_7822;
if(
REALP(BgL_yz00_1403))
{ /* Ieee/number.scm 1062 */
BgL_auxz00_7822 = BgL_yz00_1403
; }  else 
{ 
obj_t BgL_auxz00_7825;
BgL_auxz00_7825 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36391)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_yz00_1403); 
FAILURE(BgL_auxz00_7825,BFALSE,BFALSE);} 
BgL_yz00_3732 = 
REAL_TO_DOUBLE(BgL_auxz00_7822); } 
{ /* Ieee/number.scm 1062 */
bool_t BgL_testz00_7830;
if(
(BgL_arg2107z00_1413==((double)0.0)))
{ /* Ieee/number.scm 1062 */
BgL_testz00_7830 = 
(BgL_yz00_3732==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1062 */
BgL_testz00_7830 = ((bool_t)0)
; } 
if(BgL_testz00_7830)
{ /* Ieee/number.scm 1062 */
obj_t BgL_procz00_3735;obj_t BgL_msgz00_3736;
BgL_procz00_3735 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2815z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3736 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
the_failure(BgL_procz00_3735, BgL_msgz00_3736, BGl_real2817z00zz__r4_numbers_6_5z00); 
BgL_res2474z00_3742 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1062 */
BgL_res2474z00_3742 = 
atan2(BgL_arg2107z00_1413, BgL_yz00_3732); } } } 
return BgL_res2474z00_3742;}  else 
{ /* Ieee/number.scm 1062 */
return 
atan(BgL_arg2107z00_1413);} }  else 
{ /* Ieee/number.scm 1064 */
obj_t BgL_auxz00_7841;
{ /* Ieee/number.scm 1064 */
obj_t BgL_aux2660z00_4493;
BgL_aux2660z00_4493 = 
BGl_errorz00zz__errorz00(BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_104); 
if(
REALP(BgL_aux2660z00_4493))
{ /* Ieee/number.scm 1064 */
BgL_auxz00_7841 = BgL_aux2660z00_4493
; }  else 
{ 
obj_t BgL_auxz00_7845;
BgL_auxz00_7845 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36434)), BGl_string2814z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2660z00_4493); 
FAILURE(BgL_auxz00_7845,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7841);} } } } } } } 
}



/* _atan */
obj_t BGl__atanz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4307, obj_t BgL_xz00_4308, obj_t BgL_yz00_4309)
{ AN_OBJECT;
{ /* Ieee/number.scm 1037 */
return 
DOUBLE_TO_REAL(
BGl_atanz00zz__r4_numbers_6_5z00(BgL_xz00_4308, BgL_yz00_4309));} 
}



/* sqrt */
BGL_EXPORTED_DEF double BGl_sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_106)
{ AN_OBJECT;
{ /* Ieee/number.scm 1069 */
if(
INTEGERP(BgL_xz00_106))
{ /* Ieee/number.scm 1072 */
double BgL_arg2114z00_1423;
BgL_arg2114z00_1423 = 
(double)(
(long)CINT(BgL_xz00_106)); 
{ /* Ieee/number.scm 1072 */
double BgL_res2476z00_3766;
if(
(BgL_arg2114z00_1423<((double)0.0)))
{ /* Ieee/number.scm 1072 */
obj_t BgL_procz00_3761;obj_t BgL_msgz00_3762;obj_t BgL_objz00_3763;
BgL_procz00_3761 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2818z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3762 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
BgL_objz00_3763 = 
DOUBLE_TO_REAL(BgL_arg2114z00_1423); 
BGl_errorz00zz__errorz00(BgL_procz00_3761, BgL_msgz00_3762, BgL_objz00_3763); 
BgL_res2476z00_3766 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1072 */
BgL_res2476z00_3766 = 
sqrt(BgL_arg2114z00_1423); } 
return BgL_res2476z00_3766;} }  else 
{ /* Ieee/number.scm 1071 */
if(
REALP(BgL_xz00_106))
{ /* Ieee/number.scm 1074 */
double BgL_res2477z00_3775;
{ /* Ieee/number.scm 1074 */
double BgL_rz00_3768;
BgL_rz00_3768 = 
REAL_TO_DOUBLE(BgL_xz00_106); 
if(
(BgL_rz00_3768<((double)0.0)))
{ /* Ieee/number.scm 1074 */
obj_t BgL_procz00_3770;obj_t BgL_msgz00_3771;obj_t BgL_objz00_3772;
BgL_procz00_3770 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2818z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3771 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
BgL_objz00_3772 = 
DOUBLE_TO_REAL(BgL_rz00_3768); 
BGl_errorz00zz__errorz00(BgL_procz00_3770, BgL_msgz00_3771, BgL_objz00_3772); 
BgL_res2477z00_3775 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1074 */
BgL_res2477z00_3775 = 
sqrt(BgL_rz00_3768); } } 
return BgL_res2477z00_3775;}  else 
{ /* Ieee/number.scm 1073 */
if(
ELONGP(BgL_xz00_106))
{ /* Ieee/number.scm 1076 */
double BgL_arg2118z00_1426;
BgL_arg2118z00_1426 = 
(double)(
BELONG_TO_LONG(BgL_xz00_106)); 
{ /* Ieee/number.scm 1076 */
double BgL_res2478z00_3784;
if(
(BgL_arg2118z00_1426<((double)0.0)))
{ /* Ieee/number.scm 1076 */
obj_t BgL_procz00_3779;obj_t BgL_msgz00_3780;obj_t BgL_objz00_3781;
BgL_procz00_3779 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2818z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3780 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
BgL_objz00_3781 = 
DOUBLE_TO_REAL(BgL_arg2118z00_1426); 
BGl_errorz00zz__errorz00(BgL_procz00_3779, BgL_msgz00_3780, BgL_objz00_3781); 
BgL_res2478z00_3784 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1076 */
BgL_res2478z00_3784 = 
sqrt(BgL_arg2118z00_1426); } 
return BgL_res2478z00_3784;} }  else 
{ /* Ieee/number.scm 1075 */
if(
LLONGP(BgL_xz00_106))
{ /* Ieee/number.scm 1078 */
double BgL_arg2121z00_1428;
BgL_arg2121z00_1428 = 
(double)(
BLLONG_TO_LLONG(BgL_xz00_106)); 
{ /* Ieee/number.scm 1078 */
double BgL_res2479z00_3793;
if(
(BgL_arg2121z00_1428<((double)0.0)))
{ /* Ieee/number.scm 1078 */
obj_t BgL_procz00_3788;obj_t BgL_msgz00_3789;obj_t BgL_objz00_3790;
BgL_procz00_3788 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2818z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3789 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
BgL_objz00_3790 = 
DOUBLE_TO_REAL(BgL_arg2121z00_1428); 
BGl_errorz00zz__errorz00(BgL_procz00_3788, BgL_msgz00_3789, BgL_objz00_3790); 
BgL_res2479z00_3793 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1078 */
BgL_res2479z00_3793 = 
sqrt(BgL_arg2121z00_1428); } 
return BgL_res2479z00_3793;} }  else 
{ /* Ieee/number.scm 1077 */
if(
BIGNUMP(BgL_xz00_106))
{ /* Ieee/number.scm 1080 */
double BgL_arg2123z00_1430;
BgL_arg2123z00_1430 = 
bgl_bignum_to_flonum(BgL_xz00_106); 
{ /* Ieee/number.scm 1080 */
double BgL_res2480z00_3803;
if(
(BgL_arg2123z00_1430<((double)0.0)))
{ /* Ieee/number.scm 1080 */
obj_t BgL_procz00_3798;obj_t BgL_msgz00_3799;obj_t BgL_objz00_3800;
BgL_procz00_3798 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2818z00zz__r4_numbers_6_5z00)); 
BgL_msgz00_3799 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string2816z00zz__r4_numbers_6_5z00)); 
BgL_objz00_3800 = 
DOUBLE_TO_REAL(BgL_arg2123z00_1430); 
BGl_errorz00zz__errorz00(BgL_procz00_3798, BgL_msgz00_3799, BgL_objz00_3800); 
BgL_res2480z00_3803 = ((double)0.0); }  else 
{ /* Ieee/number.scm 1080 */
BgL_res2480z00_3803 = 
sqrt(BgL_arg2123z00_1430); } 
return BgL_res2480z00_3803;} }  else 
{ /* Ieee/number.scm 1082 */
obj_t BgL_auxz00_7915;
{ /* Ieee/number.scm 1082 */
obj_t BgL_aux2662z00_4495;
BgL_aux2662z00_4495 = 
BGl_errorz00zz__errorz00(BGl_string2819z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_106); 
if(
REALP(BgL_aux2662z00_4495))
{ /* Ieee/number.scm 1082 */
BgL_auxz00_7915 = BgL_aux2662z00_4495
; }  else 
{ 
obj_t BgL_auxz00_7919;
BgL_auxz00_7919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)36995)), BGl_string2819z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_aux2662z00_4495); 
FAILURE(BgL_auxz00_7919,BFALSE,BFALSE);} } 
return 
REAL_TO_DOUBLE(BgL_auxz00_7915);} } } } } } 
}



/* _sqrt */
obj_t BGl__sqrtz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4310, obj_t BgL_xz00_4311)
{ AN_OBJECT;
{ /* Ieee/number.scm 1069 */
return 
DOUBLE_TO_REAL(
BGl_sqrtz00zz__r4_numbers_6_5z00(BgL_xz00_4311));} 
}



/* expt */
BGL_EXPORTED_DEF obj_t BGl_exptz00zz__r4_numbers_6_5z00(obj_t BgL_xz00_107, obj_t BgL_yz00_108)
{ AN_OBJECT;
{ /* Ieee/number.scm 1087 */
{ /* Ieee/number.scm 1089 */
bool_t BgL_testz00_7926;
if(
REALP(BgL_xz00_107))
{ /* Ieee/number.scm 1089 */
if(
REALP(BgL_yz00_108))
{ /* Ieee/number.scm 1089 */
if(
(
REAL_TO_DOUBLE(BgL_xz00_107)==((double)0.0)))
{ /* Ieee/number.scm 1089 */
BgL_testz00_7926 = 
(
REAL_TO_DOUBLE(BgL_yz00_108)==((double)0.0))
; }  else 
{ /* Ieee/number.scm 1089 */
BgL_testz00_7926 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1089 */
BgL_testz00_7926 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1089 */
BgL_testz00_7926 = ((bool_t)0)
; } 
if(BgL_testz00_7926)
{ /* Ieee/number.scm 1089 */
return BGl_real2820z00zz__r4_numbers_6_5z00;}  else 
{ /* Ieee/number.scm 1091 */
bool_t BgL_testz00_7936;
if(
INTEGERP(BgL_xz00_107))
{ /* Ieee/number.scm 1091 */
if(
INTEGERP(BgL_yz00_108))
{ /* Ieee/number.scm 1091 */
BgL_testz00_7936 = 
(
(long)CINT(BgL_yz00_108)>=((long)0))
; }  else 
{ /* Ieee/number.scm 1091 */
BgL_testz00_7936 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1091 */
BgL_testz00_7936 = ((bool_t)0)
; } 
if(BgL_testz00_7936)
{ /* Ieee/number.scm 1091 */
return 
BINT(
BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_xz00_107), 
(long)CINT(BgL_yz00_108)));}  else 
{ /* Ieee/number.scm 1093 */
bool_t BgL_testz00_7947;
if(
BIGNUMP(BgL_xz00_107))
{ /* Ieee/number.scm 1093 */
if(
BIGNUMP(BgL_yz00_108))
{ /* Ieee/number.scm 1093 */
BgL_testz00_7947 = 
BXPOSITIVE(BgL_yz00_108)
; }  else 
{ /* Ieee/number.scm 1093 */
BgL_testz00_7947 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1093 */
BgL_testz00_7947 = ((bool_t)0)
; } 
if(BgL_testz00_7947)
{ /* Ieee/number.scm 1093 */
return 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_107, BgL_yz00_108);}  else 
{ /* Ieee/number.scm 1093 */
if(
BIGNUMP(BgL_xz00_107))
{ /* Ieee/number.scm 1096 */
obj_t BgL_y1z00_1435;
if(
REALP(BgL_yz00_108))
{ /* Ieee/number.scm 1097 */
BgL_y1z00_1435 = 
bgl_long_to_bignum(
(long)(
REAL_TO_DOUBLE(BgL_yz00_108))); }  else 
{ /* Ieee/number.scm 1097 */
if(
INTEGERP(BgL_yz00_108))
{ /* Ieee/number.scm 1099 */
BgL_y1z00_1435 = 
bgl_long_to_bignum(
(long)CINT(BgL_yz00_108)); }  else 
{ /* Ieee/number.scm 1099 */
if(
ELONGP(BgL_yz00_108))
{ /* Ieee/number.scm 1101 */
BgL_y1z00_1435 = 
bgl_long_to_bignum(
BELONG_TO_LONG(BgL_yz00_108)); }  else 
{ /* Ieee/number.scm 1101 */
if(
LLONGP(BgL_yz00_108))
{ /* Ieee/number.scm 1103 */
BgL_y1z00_1435 = 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_yz00_108)); }  else 
{ /* Ieee/number.scm 1103 */
if(
BIGNUMP(BgL_yz00_108))
{ /* Ieee/number.scm 1105 */
BgL_y1z00_1435 = BgL_yz00_108; }  else 
{ /* Ieee/number.scm 1105 */
BgL_y1z00_1435 = 
BGl_errorz00zz__errorz00(BGl_symbol2821z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_108); } } } } } 
{ /* Ieee/number.scm 1109 */
obj_t BgL_auxz00_7976;
if(
BIGNUMP(BgL_y1z00_1435))
{ /* Ieee/number.scm 1109 */
BgL_auxz00_7976 = BgL_y1z00_1435
; }  else 
{ 
obj_t BgL_auxz00_7979;
BgL_auxz00_7979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)37837)), BGl_string2823z00zz__r4_numbers_6_5z00, BGl_string2768z00zz__r4_numbers_6_5z00, BgL_y1z00_1435); 
FAILURE(BgL_auxz00_7979,BFALSE,BFALSE);} 
return 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_107, BgL_auxz00_7976);} }  else 
{ /* Ieee/number.scm 1111 */
obj_t BgL_x1z00_1442;obj_t BgL_y1z00_1443;
if(
REALP(BgL_xz00_107))
{ /* Ieee/number.scm 1112 */
BgL_x1z00_1442 = BgL_xz00_107; }  else 
{ /* Ieee/number.scm 1112 */
if(
INTEGERP(BgL_xz00_107))
{ /* Ieee/number.scm 1114 */
BgL_x1z00_1442 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_xz00_107))); }  else 
{ /* Ieee/number.scm 1114 */
if(
ELONGP(BgL_xz00_107))
{ /* Ieee/number.scm 1116 */
BgL_x1z00_1442 = 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_xz00_107))); }  else 
{ /* Ieee/number.scm 1116 */
if(
LLONGP(BgL_xz00_107))
{ /* Ieee/number.scm 1118 */
BgL_x1z00_1442 = 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_xz00_107))); }  else 
{ /* Ieee/number.scm 1118 */
if(
BIGNUMP(BgL_xz00_107))
{ /* Ieee/number.scm 1120 */
BgL_x1z00_1442 = 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_xz00_107)); }  else 
{ /* Ieee/number.scm 1120 */
BgL_x1z00_1442 = 
BGl_errorz00zz__errorz00(BGl_symbol2821z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_xz00_107); } } } } } 
if(
REALP(BgL_yz00_108))
{ /* Ieee/number.scm 1125 */
BgL_y1z00_1443 = BgL_yz00_108; }  else 
{ /* Ieee/number.scm 1125 */
if(
INTEGERP(BgL_yz00_108))
{ /* Ieee/number.scm 1127 */
BgL_y1z00_1443 = 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_yz00_108))); }  else 
{ /* Ieee/number.scm 1127 */
if(
ELONGP(BgL_yz00_108))
{ /* Ieee/number.scm 1129 */
BgL_y1z00_1443 = 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_yz00_108))); }  else 
{ /* Ieee/number.scm 1129 */
if(
LLONGP(BgL_yz00_108))
{ /* Ieee/number.scm 1131 */
BgL_y1z00_1443 = 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_yz00_108))); }  else 
{ /* Ieee/number.scm 1131 */
if(
BIGNUMP(BgL_yz00_108))
{ /* Ieee/number.scm 1133 */
BgL_y1z00_1443 = 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_yz00_108)); }  else 
{ /* Ieee/number.scm 1133 */
BgL_y1z00_1443 = 
BGl_errorz00zz__errorz00(BGl_symbol2821z00zz__r4_numbers_6_5z00, BGl_string2771z00zz__r4_numbers_6_5z00, BgL_yz00_108); } } } } } 
{ /* Ieee/number.scm 1137 */
double BgL_r1z00_3835;double BgL_r2z00_3836;
{ /* Ieee/number.scm 1137 */
obj_t BgL_auxz00_8028;
if(
REALP(BgL_x1z00_1442))
{ /* Ieee/number.scm 1137 */
BgL_auxz00_8028 = BgL_x1z00_1442
; }  else 
{ 
obj_t BgL_auxz00_8031;
BgL_auxz00_8031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)38436)), BGl_string2823z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_x1z00_1442); 
FAILURE(BgL_auxz00_8031,BFALSE,BFALSE);} 
BgL_r1z00_3835 = 
REAL_TO_DOUBLE(BgL_auxz00_8028); } 
{ /* Ieee/number.scm 1137 */
obj_t BgL_auxz00_8036;
if(
REALP(BgL_y1z00_1443))
{ /* Ieee/number.scm 1137 */
BgL_auxz00_8036 = BgL_y1z00_1443
; }  else 
{ 
obj_t BgL_auxz00_8039;
BgL_auxz00_8039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)38439)), BGl_string2823z00zz__r4_numbers_6_5z00, BGl_string2748z00zz__r4_numbers_6_5z00, BgL_y1z00_1443); 
FAILURE(BgL_auxz00_8039,BFALSE,BFALSE);} 
BgL_r2z00_3836 = 
REAL_TO_DOUBLE(BgL_auxz00_8036); } 
return 
DOUBLE_TO_REAL(
pow(BgL_r1z00_3835, BgL_r2z00_3836));} } } } } } } 
}



/* _expt */
obj_t BGl__exptz00zz__r4_numbers_6_5z00(obj_t BgL_envz00_4312, obj_t BgL_xz00_4313, obj_t BgL_yz00_4314)
{ AN_OBJECT;
{ /* Ieee/number.scm 1087 */
return 
BGl_exptz00zz__r4_numbers_6_5z00(BgL_xz00_4313, BgL_yz00_4314);} 
}



/* exact->inexact */
BGL_EXPORTED_DEF obj_t bgl_exact_to_inexact(obj_t BgL_za7za7_109)
{ AN_OBJECT;
{ /* Ieee/number.scm 1142 */
if(
INTEGERP(BgL_za7za7_109))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_za7za7_109)));}  else 
{ /* Ieee/number.scm 1144 */
if(
REALP(BgL_za7za7_109))
{ /* Ieee/number.scm 1144 */
return BgL_za7za7_109;}  else 
{ /* Ieee/number.scm 1144 */
if(
ELONGP(BgL_za7za7_109))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_za7za7_109)));}  else 
{ /* Ieee/number.scm 1144 */
if(
LLONGP(BgL_za7za7_109))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_za7za7_109)));}  else 
{ /* Ieee/number.scm 1144 */
if(
BIGNUMP(BgL_za7za7_109))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_za7za7_109));}  else 
{ /* Ieee/number.scm 1144 */
return BgL_za7za7_109;} } } } } } 
}



/* _exact->inexact */
obj_t BGl__exactzd2ze3inexactz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4315, obj_t BgL_za7za7_4316)
{ AN_OBJECT;
{ /* Ieee/number.scm 1142 */
if(
INTEGERP(BgL_za7za7_4316))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
(long)CINT(BgL_za7za7_4316)));}  else 
{ /* Ieee/number.scm 1144 */
if(
REALP(BgL_za7za7_4316))
{ /* Ieee/number.scm 1144 */
return BgL_za7za7_4316;}  else 
{ /* Ieee/number.scm 1144 */
if(
ELONGP(BgL_za7za7_4316))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
BELONG_TO_LONG(BgL_za7za7_4316)));}  else 
{ /* Ieee/number.scm 1144 */
if(
LLONGP(BgL_za7za7_4316))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
(double)(
BLLONG_TO_LLONG(BgL_za7za7_4316)));}  else 
{ /* Ieee/number.scm 1144 */
if(
BIGNUMP(BgL_za7za7_4316))
{ /* Ieee/number.scm 1144 */
return 
DOUBLE_TO_REAL(
bgl_bignum_to_flonum(BgL_za7za7_4316));}  else 
{ /* Ieee/number.scm 1144 */
return BgL_za7za7_4316;} } } } } } 
}



/* inexact->exact */
BGL_EXPORTED_DEF obj_t bgl_inexact_to_exact(obj_t BgL_za7za7_110)
{ AN_OBJECT;
{ /* Ieee/number.scm 1160 */
if(
REALP(BgL_za7za7_110))
{ /* Ieee/number.scm 1161 */
return 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_za7za7_110)));}  else 
{ /* Ieee/number.scm 1161 */
return BgL_za7za7_110;} } 
}



/* _inexact->exact */
obj_t BGl__inexactzd2ze3exactz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_4317, obj_t BgL_za7za7_4318)
{ AN_OBJECT;
{ /* Ieee/number.scm 1160 */
if(
REALP(BgL_za7za7_4318))
{ /* Ieee/number.scm 1161 */
return 
BINT(
(long)(
REAL_TO_DOUBLE(BgL_za7za7_4318)));}  else 
{ /* Ieee/number.scm 1161 */
return BgL_za7za7_4318;} } 
}



/* _number->string */
obj_t BGl__numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_114, obj_t BgL_optz00_113)
{ AN_OBJECT;
{ /* Ieee/number.scm 1168 */
{ /* Ieee/number.scm 1168 */
obj_t BgL_xz00_1467;
BgL_xz00_1467 = 
VECTOR_REF(BgL_optz00_113,
(int)(((long)0))); 
{ 

{ /* Ieee/number.scm 1168 */
int BgL_aux1126z00_1469;
BgL_aux1126z00_1469 = 
VECTOR_LENGTH(BgL_optz00_113); 
switch( 
(long)(BgL_aux1126z00_1469)) { case ((long)1) : 

{ /* Ieee/number.scm 1168 */

{ /* Ieee/number.scm 1168 */
obj_t BgL_arg2159z00_1472;
BgL_arg2159z00_1472 = 
VECTOR_REF(BgL_optz00_113,
(int)(((long)0))); 
return 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2159z00_1472, 
BINT(((long)10))));} } break;case ((long)2) : 

{ /* Ieee/number.scm 1168 */
obj_t BgL_radixz00_1473;
BgL_radixz00_1473 = 
VECTOR_REF(BgL_optz00_113,
(int)(((long)1))); 
{ /* Ieee/number.scm 1168 */

{ /* Ieee/number.scm 1168 */
obj_t BgL_arg2160z00_1474;
BgL_arg2160z00_1474 = 
VECTOR_REF(BgL_optz00_113,
(int)(((long)0))); 
return 
string_to_bstring(
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg2160z00_1474, BgL_radixz00_1473));} } } break;
default: 
{ /* Ieee/number.scm 1168 */
obj_t BgL_arg2161z00_1475;int BgL_arg2163z00_1477;
BgL_arg2161z00_1475 = BGl_symbol2824z00zz__r4_numbers_6_5z00; 
BgL_arg2163z00_1477 = 
VECTOR_LENGTH(BgL_optz00_113); 
return 
BGl_errorz00zz__errorz00(BgL_arg2161z00_1475, BGl_string2826z00zz__r4_numbers_6_5z00, 
BINT(BgL_arg2163z00_1477));} } } } } } 
}



/* number->string */
BGL_EXPORTED_DEF char * BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_111, obj_t BgL_radixz00_112)
{ AN_OBJECT;
{ /* Ieee/number.scm 1168 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_112))
{ /* Ieee/number.scm 1170 */
if(
INTEGERP(BgL_xz00_111))
{ /* Ieee/number.scm 1173 */
obj_t BgL_auxz00_8122;
{ /* Ieee/number.scm 1173 */
long BgL_auxz00_8123;
{ /* Ieee/number.scm 1173 */
obj_t BgL_auxz00_8125;
if(
INTEGERP(BgL_radixz00_112))
{ /* Ieee/number.scm 1173 */
BgL_auxz00_8125 = BgL_radixz00_112
; }  else 
{ 
obj_t BgL_auxz00_8128;
BgL_auxz00_8128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)39675)), BGl_string2825z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_radixz00_112); 
FAILURE(BgL_auxz00_8128,BFALSE,BFALSE);} 
BgL_auxz00_8123 = 
(long)CINT(BgL_auxz00_8125); } 
BgL_auxz00_8122 = 
BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_xz00_111), BgL_auxz00_8123); } 
return 
BSTRING_TO_STRING(BgL_auxz00_8122);}  else 
{ /* Ieee/number.scm 1172 */
if(
REALP(BgL_xz00_111))
{ /* Ieee/number.scm 1175 */
obj_t BgL_realz00_3853;
BgL_realz00_3853 = BgL_xz00_111; 
return 
BSTRING_TO_STRING(
real_to_string(
REAL_TO_DOUBLE(BgL_realz00_3853)));}  else 
{ /* Ieee/number.scm 1174 */
if(
ELONGP(BgL_xz00_111))
{ /* Ieee/number.scm 1177 */
obj_t BgL_list2168z00_1482;
BgL_list2168z00_1482 = 
MAKE_PAIR(BgL_radixz00_112, BNIL); 
return 
BSTRING_TO_STRING(
BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
BELONG_TO_LONG(BgL_xz00_111), BgL_list2168z00_1482));}  else 
{ /* Ieee/number.scm 1176 */
if(
LLONGP(BgL_xz00_111))
{ /* Ieee/number.scm 1179 */
obj_t BgL_list2170z00_1484;
BgL_list2170z00_1484 = 
MAKE_PAIR(BgL_radixz00_112, BNIL); 
return 
BSTRING_TO_STRING(
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
BLLONG_TO_LLONG(BgL_xz00_111), BgL_list2170z00_1484));}  else 
{ /* Ieee/number.scm 1178 */
if(
BIGNUMP(BgL_xz00_111))
{ /* Ieee/number.scm 1181 */
obj_t BgL_auxz00_8154;
{ /* Ieee/number.scm 1181 */
long BgL_auxz00_8155;
{ /* Ieee/number.scm 1181 */
obj_t BgL_auxz00_8156;
if(
INTEGERP(BgL_radixz00_112))
{ /* Ieee/number.scm 1181 */
BgL_auxz00_8156 = BgL_radixz00_112
; }  else 
{ 
obj_t BgL_auxz00_8159;
BgL_auxz00_8159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)39871)), BGl_string2825z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_radixz00_112); 
FAILURE(BgL_auxz00_8159,BFALSE,BFALSE);} 
BgL_auxz00_8155 = 
(long)CINT(BgL_auxz00_8156); } 
BgL_auxz00_8154 = 
BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_111, BgL_auxz00_8155); } 
return 
BSTRING_TO_STRING(BgL_auxz00_8154);}  else 
{ /* Ieee/number.scm 1183 */
obj_t BgL_auxz00_8166;
{ /* Ieee/number.scm 1183 */
obj_t BgL_aux2674z00_4507;
BgL_aux2674z00_4507 = 
BGl_errorz00zz__errorz00(BGl_string2825z00zz__r4_numbers_6_5z00, BGl_string2827z00zz__r4_numbers_6_5z00, BgL_xz00_111); 
if(
STRINGP(BgL_aux2674z00_4507))
{ /* Ieee/number.scm 1183 */
BgL_auxz00_8166 = BgL_aux2674z00_4507
; }  else 
{ 
obj_t BgL_auxz00_8170;
BgL_auxz00_8170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)39898)), BGl_string2825z00zz__r4_numbers_6_5z00, BGl_string2828z00zz__r4_numbers_6_5z00, BgL_aux2674z00_4507); 
FAILURE(BgL_auxz00_8170,BFALSE,BFALSE);} } 
return 
BSTRING_TO_STRING(BgL_auxz00_8166);} } } } } }  else 
{ /* Ieee/number.scm 1171 */
obj_t BgL_auxz00_8175;
{ /* Ieee/number.scm 1171 */
obj_t BgL_aux2676z00_4509;
BgL_aux2676z00_4509 = 
BGl_errorz00zz__errorz00(BGl_symbol2824z00zz__r4_numbers_6_5z00, BGl_string2829z00zz__r4_numbers_6_5z00, BgL_radixz00_112); 
if(
STRINGP(BgL_aux2676z00_4509))
{ /* Ieee/number.scm 1171 */
BgL_auxz00_8175 = BgL_aux2676z00_4509
; }  else 
{ 
obj_t BgL_auxz00_8179;
BgL_auxz00_8179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)39583)), BGl_string2825z00zz__r4_numbers_6_5z00, BGl_string2828z00zz__r4_numbers_6_5z00, BgL_aux2676z00_4509); 
FAILURE(BgL_auxz00_8179,BFALSE,BFALSE);} } 
return 
BSTRING_TO_STRING(BgL_auxz00_8175);} } 
}



/* _string->number */
obj_t BGl__stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t BgL_envz00_118, obj_t BgL_optz00_117)
{ AN_OBJECT;
{ /* Ieee/number.scm 1188 */
{ /* Ieee/number.scm 1188 */
obj_t BgL_xz00_1486;
BgL_xz00_1486 = 
VECTOR_REF(BgL_optz00_117,
(int)(((long)0))); 
{ 

{ /* Ieee/number.scm 1188 */
int BgL_aux1128z00_1488;
BgL_aux1128z00_1488 = 
VECTOR_LENGTH(BgL_optz00_117); 
switch( 
(long)(BgL_aux1128z00_1488)) { case ((long)1) : 

{ /* Ieee/number.scm 1188 */

return 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(
VECTOR_REF(BgL_optz00_117,
(int)(((long)0))), 
BINT(((long)10)));} break;case ((long)2) : 

{ /* Ieee/number.scm 1188 */
obj_t BgL_radixz00_1492;
BgL_radixz00_1492 = 
VECTOR_REF(BgL_optz00_117,
(int)(((long)1))); 
{ /* Ieee/number.scm 1188 */

return 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(
VECTOR_REF(BgL_optz00_117,
(int)(((long)0))), BgL_radixz00_1492);} } break;
default: 
{ /* Ieee/number.scm 1188 */
obj_t BgL_arg2175z00_1494;int BgL_arg2177z00_1496;
BgL_arg2175z00_1494 = BGl_symbol2830z00zz__r4_numbers_6_5z00; 
BgL_arg2177z00_1496 = 
VECTOR_LENGTH(BgL_optz00_117); 
return 
BGl_errorz00zz__errorz00(BgL_arg2175z00_1494, BGl_string2826z00zz__r4_numbers_6_5z00, 
BINT(BgL_arg2177z00_1496));} } } } } } 
}



/* string->number */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t BgL_xz00_115, obj_t BgL_radixz00_116)
{ AN_OBJECT;
{ /* Ieee/number.scm 1188 */
{ 
obj_t BgL_xz00_1554;obj_t BgL_xz00_1509;obj_t BgL_rz00_1510;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_radixz00_116))
{ /* Ieee/number.scm 1256 */
bool_t BgL_testz00_8203;
{ /* Ieee/number.scm 1256 */
long BgL_auxz00_8204;
{ /* Ieee/number.scm 1256 */
obj_t BgL_stringz00_3857;
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1256 */
BgL_stringz00_3857 = BgL_xz00_115; }  else 
{ 
obj_t BgL_auxz00_8207;
BgL_auxz00_8207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41863)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8207,BFALSE,BFALSE);} 
BgL_auxz00_8204 = 
STRING_LENGTH(BgL_stringz00_3857); } 
BgL_testz00_8203 = 
(BgL_auxz00_8204==((long)0)); } 
if(BgL_testz00_8203)
{ /* Ieee/number.scm 1256 */
return BFALSE;}  else 
{ /* Ieee/number.scm 1258 */
bool_t BgL_testz00_8213;
BgL_xz00_1509 = BgL_xz00_115; 
BgL_rz00_1510 = BgL_radixz00_116; 
{ /* Ieee/number.scm 1190 */
long BgL_lenz00_1512;
{ /* Ieee/number.scm 1190 */
obj_t BgL_stringz00_3879;
if(
STRINGP(BgL_xz00_1509))
{ /* Ieee/number.scm 1190 */
BgL_stringz00_3879 = BgL_xz00_1509; }  else 
{ 
obj_t BgL_auxz00_8216;
BgL_auxz00_8216 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40274)), BGl_string2832z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_1509); 
FAILURE(BgL_auxz00_8216,BFALSE,BFALSE);} 
BgL_lenz00_1512 = 
STRING_LENGTH(BgL_stringz00_3879); } 
{ 
long BgL_iz00_1515;
BgL_iz00_1515 = 
(BgL_lenz00_1512-((long)1)); 
BgL_zc3anonymousza32189ze3z83_1516:
if(
(((long)-1)==BgL_iz00_1515))
{ /* Ieee/number.scm 1192 */
BgL_testz00_8213 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1194 */
bool_t BgL_testz00_8223;
{ /* Ieee/number.scm 1194 */
bool_t BgL_testz00_8224;
{ /* Ieee/number.scm 1194 */
unsigned char BgL_auxz00_8225;
{ /* Ieee/number.scm 1194 */
obj_t BgL_stringz00_3884;
BgL_stringz00_3884 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1194 */
long BgL_l2488z00_4321;
BgL_l2488z00_4321 = 
STRING_LENGTH(BgL_stringz00_3884); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2488z00_4321))
{ /* Ieee/number.scm 1194 */
BgL_auxz00_8225 = 
STRING_REF(BgL_stringz00_3884, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8230;
BgL_auxz00_8230 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40375)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3884); 
FAILURE(BgL_auxz00_8230,BFALSE,BFALSE);} } } 
BgL_testz00_8224 = 
(BgL_auxz00_8225>=((unsigned char)'0')); } 
if(BgL_testz00_8224)
{ /* Ieee/number.scm 1195 */
bool_t BgL_testz00_8236;
{ /* Ieee/number.scm 1195 */
unsigned char BgL_auxz00_8237;
{ /* Ieee/number.scm 1195 */
obj_t BgL_stringz00_3888;
BgL_stringz00_3888 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1195 */
long BgL_l2492z00_4325;
BgL_l2492z00_4325 = 
STRING_LENGTH(BgL_stringz00_3888); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2492z00_4325))
{ /* Ieee/number.scm 1195 */
BgL_auxz00_8237 = 
STRING_REF(BgL_stringz00_3888, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8242;
BgL_auxz00_8242 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40409)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3888); 
FAILURE(BgL_auxz00_8242,BFALSE,BFALSE);} } } 
BgL_testz00_8236 = 
(BgL_auxz00_8237<=((unsigned char)'1')); } 
if(BgL_testz00_8236)
{ /* Ieee/number.scm 1196 */
long BgL_n1z00_3892;
{ /* Ieee/number.scm 1196 */
obj_t BgL_auxz00_8248;
if(
INTEGERP(BgL_rz00_1510))
{ /* Ieee/number.scm 1196 */
BgL_auxz00_8248 = BgL_rz00_1510
; }  else 
{ 
obj_t BgL_auxz00_8251;
BgL_auxz00_8251 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40440)), BGl_string2835z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_rz00_1510); 
FAILURE(BgL_auxz00_8251,BFALSE,BFALSE);} 
BgL_n1z00_3892 = 
(long)CINT(BgL_auxz00_8248); } 
BgL_testz00_8223 = 
(BgL_n1z00_3892>=((long)2)); }  else 
{ /* Ieee/number.scm 1195 */
BgL_testz00_8223 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1194 */
BgL_testz00_8223 = ((bool_t)0)
; } } 
if(BgL_testz00_8223)
{ 
long BgL_iz00_8257;
BgL_iz00_8257 = 
(BgL_iz00_1515-((long)1)); 
BgL_iz00_1515 = BgL_iz00_8257; 
goto BgL_zc3anonymousza32189ze3z83_1516;}  else 
{ /* Ieee/number.scm 1198 */
bool_t BgL_testz00_8259;
{ /* Ieee/number.scm 1198 */
bool_t BgL_testz00_8260;
{ /* Ieee/number.scm 1198 */
unsigned char BgL_auxz00_8261;
{ /* Ieee/number.scm 1198 */
obj_t BgL_stringz00_3896;
BgL_stringz00_3896 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1198 */
long BgL_l2496z00_4329;
BgL_l2496z00_4329 = 
STRING_LENGTH(BgL_stringz00_3896); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2496z00_4329))
{ /* Ieee/number.scm 1198 */
BgL_auxz00_8261 = 
STRING_REF(BgL_stringz00_3896, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8266;
BgL_auxz00_8266 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40488)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3896); 
FAILURE(BgL_auxz00_8266,BFALSE,BFALSE);} } } 
BgL_testz00_8260 = 
(BgL_auxz00_8261>=((unsigned char)'2')); } 
if(BgL_testz00_8260)
{ /* Ieee/number.scm 1199 */
bool_t BgL_testz00_8272;
{ /* Ieee/number.scm 1199 */
unsigned char BgL_auxz00_8273;
{ /* Ieee/number.scm 1199 */
obj_t BgL_stringz00_3900;
BgL_stringz00_3900 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1199 */
long BgL_l2500z00_4333;
BgL_l2500z00_4333 = 
STRING_LENGTH(BgL_stringz00_3900); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2500z00_4333))
{ /* Ieee/number.scm 1199 */
BgL_auxz00_8273 = 
STRING_REF(BgL_stringz00_3900, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8278;
BgL_auxz00_8278 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40522)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3900); 
FAILURE(BgL_auxz00_8278,BFALSE,BFALSE);} } } 
BgL_testz00_8272 = 
(BgL_auxz00_8273<=((unsigned char)'7')); } 
if(BgL_testz00_8272)
{ /* Ieee/number.scm 1200 */
long BgL_n1z00_3904;
{ /* Ieee/number.scm 1200 */
obj_t BgL_auxz00_8284;
if(
INTEGERP(BgL_rz00_1510))
{ /* Ieee/number.scm 1200 */
BgL_auxz00_8284 = BgL_rz00_1510
; }  else 
{ 
obj_t BgL_auxz00_8287;
BgL_auxz00_8287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40553)), BGl_string2835z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_rz00_1510); 
FAILURE(BgL_auxz00_8287,BFALSE,BFALSE);} 
BgL_n1z00_3904 = 
(long)CINT(BgL_auxz00_8284); } 
BgL_testz00_8259 = 
(BgL_n1z00_3904>=((long)8)); }  else 
{ /* Ieee/number.scm 1199 */
BgL_testz00_8259 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1198 */
BgL_testz00_8259 = ((bool_t)0)
; } } 
if(BgL_testz00_8259)
{ 
long BgL_iz00_8293;
BgL_iz00_8293 = 
(BgL_iz00_1515-((long)1)); 
BgL_iz00_1515 = BgL_iz00_8293; 
goto BgL_zc3anonymousza32189ze3z83_1516;}  else 
{ /* Ieee/number.scm 1202 */
bool_t BgL_testz00_8295;
{ /* Ieee/number.scm 1202 */
bool_t BgL_testz00_8296;
{ /* Ieee/number.scm 1202 */
unsigned char BgL_auxz00_8297;
{ /* Ieee/number.scm 1202 */
obj_t BgL_stringz00_3908;
BgL_stringz00_3908 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1202 */
long BgL_l2504z00_4337;
BgL_l2504z00_4337 = 
STRING_LENGTH(BgL_stringz00_3908); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2504z00_4337))
{ /* Ieee/number.scm 1202 */
BgL_auxz00_8297 = 
STRING_REF(BgL_stringz00_3908, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8302;
BgL_auxz00_8302 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40601)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3908); 
FAILURE(BgL_auxz00_8302,BFALSE,BFALSE);} } } 
BgL_testz00_8296 = 
(BgL_auxz00_8297>=((unsigned char)'8')); } 
if(BgL_testz00_8296)
{ /* Ieee/number.scm 1203 */
bool_t BgL_testz00_8308;
{ /* Ieee/number.scm 1203 */
unsigned char BgL_auxz00_8309;
{ /* Ieee/number.scm 1203 */
obj_t BgL_stringz00_3912;
BgL_stringz00_3912 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1203 */
long BgL_l2508z00_4341;
BgL_l2508z00_4341 = 
STRING_LENGTH(BgL_stringz00_3912); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2508z00_4341))
{ /* Ieee/number.scm 1203 */
BgL_auxz00_8309 = 
STRING_REF(BgL_stringz00_3912, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8314;
BgL_auxz00_8314 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40635)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3912); 
FAILURE(BgL_auxz00_8314,BFALSE,BFALSE);} } } 
BgL_testz00_8308 = 
(BgL_auxz00_8309<=((unsigned char)'9')); } 
if(BgL_testz00_8308)
{ /* Ieee/number.scm 1204 */
long BgL_n1z00_3916;
{ /* Ieee/number.scm 1204 */
obj_t BgL_auxz00_8320;
if(
INTEGERP(BgL_rz00_1510))
{ /* Ieee/number.scm 1204 */
BgL_auxz00_8320 = BgL_rz00_1510
; }  else 
{ 
obj_t BgL_auxz00_8323;
BgL_auxz00_8323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40666)), BGl_string2835z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_rz00_1510); 
FAILURE(BgL_auxz00_8323,BFALSE,BFALSE);} 
BgL_n1z00_3916 = 
(long)CINT(BgL_auxz00_8320); } 
BgL_testz00_8295 = 
(BgL_n1z00_3916>=((long)10)); }  else 
{ /* Ieee/number.scm 1203 */
BgL_testz00_8295 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1202 */
BgL_testz00_8295 = ((bool_t)0)
; } } 
if(BgL_testz00_8295)
{ 
long BgL_iz00_8329;
BgL_iz00_8329 = 
(BgL_iz00_1515-((long)1)); 
BgL_iz00_1515 = BgL_iz00_8329; 
goto BgL_zc3anonymousza32189ze3z83_1516;}  else 
{ /* Ieee/number.scm 1206 */
bool_t BgL_testz00_8331;
{ /* Ieee/number.scm 1206 */
bool_t BgL_testz00_8332;
{ /* Ieee/number.scm 1206 */
unsigned char BgL_auxz00_8333;
{ /* Ieee/number.scm 1206 */
obj_t BgL_stringz00_3920;
BgL_stringz00_3920 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1206 */
long BgL_l2512z00_4345;
BgL_l2512z00_4345 = 
STRING_LENGTH(BgL_stringz00_3920); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2512z00_4345))
{ /* Ieee/number.scm 1206 */
BgL_auxz00_8333 = 
STRING_REF(BgL_stringz00_3920, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8338;
BgL_auxz00_8338 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40715)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3920); 
FAILURE(BgL_auxz00_8338,BFALSE,BFALSE);} } } 
BgL_testz00_8332 = 
(BgL_auxz00_8333>=((unsigned char)'a')); } 
if(BgL_testz00_8332)
{ /* Ieee/number.scm 1207 */
bool_t BgL_testz00_8344;
{ /* Ieee/number.scm 1207 */
unsigned char BgL_auxz00_8345;
{ /* Ieee/number.scm 1207 */
obj_t BgL_stringz00_3924;
BgL_stringz00_3924 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1207 */
long BgL_l2516z00_4349;
BgL_l2516z00_4349 = 
STRING_LENGTH(BgL_stringz00_3924); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2516z00_4349))
{ /* Ieee/number.scm 1207 */
BgL_auxz00_8345 = 
STRING_REF(BgL_stringz00_3924, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8350;
BgL_auxz00_8350 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40749)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3924); 
FAILURE(BgL_auxz00_8350,BFALSE,BFALSE);} } } 
BgL_testz00_8344 = 
(BgL_auxz00_8345<=((unsigned char)'f')); } 
if(BgL_testz00_8344)
{ /* Ieee/number.scm 1208 */
long BgL_n1z00_3928;
{ /* Ieee/number.scm 1208 */
obj_t BgL_auxz00_8356;
if(
INTEGERP(BgL_rz00_1510))
{ /* Ieee/number.scm 1208 */
BgL_auxz00_8356 = BgL_rz00_1510
; }  else 
{ 
obj_t BgL_auxz00_8359;
BgL_auxz00_8359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40779)), BGl_string2835z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_rz00_1510); 
FAILURE(BgL_auxz00_8359,BFALSE,BFALSE);} 
BgL_n1z00_3928 = 
(long)CINT(BgL_auxz00_8356); } 
BgL_testz00_8331 = 
(BgL_n1z00_3928==((long)16)); }  else 
{ /* Ieee/number.scm 1207 */
BgL_testz00_8331 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1206 */
BgL_testz00_8331 = ((bool_t)0)
; } } 
if(BgL_testz00_8331)
{ 
long BgL_iz00_8365;
BgL_iz00_8365 = 
(BgL_iz00_1515-((long)1)); 
BgL_iz00_1515 = BgL_iz00_8365; 
goto BgL_zc3anonymousza32189ze3z83_1516;}  else 
{ /* Ieee/number.scm 1210 */
bool_t BgL_testz00_8367;
{ /* Ieee/number.scm 1210 */
bool_t BgL_testz00_8368;
{ /* Ieee/number.scm 1210 */
unsigned char BgL_auxz00_8369;
{ /* Ieee/number.scm 1210 */
obj_t BgL_stringz00_3932;
BgL_stringz00_3932 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1210 */
long BgL_l2520z00_4353;
BgL_l2520z00_4353 = 
STRING_LENGTH(BgL_stringz00_3932); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2520z00_4353))
{ /* Ieee/number.scm 1210 */
BgL_auxz00_8369 = 
STRING_REF(BgL_stringz00_3932, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8374;
BgL_auxz00_8374 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40828)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3932); 
FAILURE(BgL_auxz00_8374,BFALSE,BFALSE);} } } 
BgL_testz00_8368 = 
(BgL_auxz00_8369>=((unsigned char)'A')); } 
if(BgL_testz00_8368)
{ /* Ieee/number.scm 1211 */
bool_t BgL_testz00_8380;
{ /* Ieee/number.scm 1211 */
unsigned char BgL_auxz00_8381;
{ /* Ieee/number.scm 1211 */
obj_t BgL_stringz00_3936;
BgL_stringz00_3936 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1211 */
long BgL_l2524z00_4357;
BgL_l2524z00_4357 = 
STRING_LENGTH(BgL_stringz00_3936); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2524z00_4357))
{ /* Ieee/number.scm 1211 */
BgL_auxz00_8381 = 
STRING_REF(BgL_stringz00_3936, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8386;
BgL_auxz00_8386 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40862)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3936); 
FAILURE(BgL_auxz00_8386,BFALSE,BFALSE);} } } 
BgL_testz00_8380 = 
(BgL_auxz00_8381<=((unsigned char)'F')); } 
if(BgL_testz00_8380)
{ /* Ieee/number.scm 1212 */
long BgL_n1z00_3940;
{ /* Ieee/number.scm 1212 */
obj_t BgL_auxz00_8392;
if(
INTEGERP(BgL_rz00_1510))
{ /* Ieee/number.scm 1212 */
BgL_auxz00_8392 = BgL_rz00_1510
; }  else 
{ 
obj_t BgL_auxz00_8395;
BgL_auxz00_8395 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40892)), BGl_string2835z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_rz00_1510); 
FAILURE(BgL_auxz00_8395,BFALSE,BFALSE);} 
BgL_n1z00_3940 = 
(long)CINT(BgL_auxz00_8392); } 
BgL_testz00_8367 = 
(BgL_n1z00_3940==((long)16)); }  else 
{ /* Ieee/number.scm 1211 */
BgL_testz00_8367 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1210 */
BgL_testz00_8367 = ((bool_t)0)
; } } 
if(BgL_testz00_8367)
{ 
long BgL_iz00_8401;
BgL_iz00_8401 = 
(BgL_iz00_1515-((long)1)); 
BgL_iz00_1515 = BgL_iz00_8401; 
goto BgL_zc3anonymousza32189ze3z83_1516;}  else 
{ /* Ieee/number.scm 1214 */
bool_t BgL_testz00_8403;
{ /* Ieee/number.scm 1214 */
bool_t BgL_testz00_8404;
{ /* Ieee/number.scm 1214 */
unsigned char BgL_auxz00_8405;
{ /* Ieee/number.scm 1214 */
obj_t BgL_stringz00_3944;
BgL_stringz00_3944 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1214 */
long BgL_l2528z00_4361;
BgL_l2528z00_4361 = 
STRING_LENGTH(BgL_stringz00_3944); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2528z00_4361))
{ /* Ieee/number.scm 1214 */
BgL_auxz00_8405 = 
STRING_REF(BgL_stringz00_3944, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8410;
BgL_auxz00_8410 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40939)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3944); 
FAILURE(BgL_auxz00_8410,BFALSE,BFALSE);} } } 
BgL_testz00_8404 = 
(BgL_auxz00_8405==((unsigned char)'-')); } 
if(BgL_testz00_8404)
{ /* Ieee/number.scm 1214 */
BgL_testz00_8403 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1215 */
unsigned char BgL_auxz00_8416;
{ /* Ieee/number.scm 1215 */
obj_t BgL_stringz00_3948;
BgL_stringz00_3948 = BgL_xz00_1509; 
{ /* Ieee/number.scm 1215 */
long BgL_l2532z00_4365;
BgL_l2532z00_4365 = 
STRING_LENGTH(BgL_stringz00_3948); 
if(
BOUND_CHECK(BgL_iz00_1515, BgL_l2532z00_4365))
{ /* Ieee/number.scm 1215 */
BgL_auxz00_8416 = 
STRING_REF(BgL_stringz00_3948, BgL_iz00_1515)
; }  else 
{ 
obj_t BgL_auxz00_8421;
BgL_auxz00_8421 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)40978)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1515), BgL_stringz00_3948); 
FAILURE(BgL_auxz00_8421,BFALSE,BFALSE);} } } 
BgL_testz00_8403 = 
(BgL_auxz00_8416==((unsigned char)'+')); } } 
if(BgL_testz00_8403)
{ /* Ieee/number.scm 1214 */
if(
(BgL_iz00_1515==((long)0)))
{ /* Ieee/number.scm 1216 */
BgL_testz00_8213 = 
(BgL_lenz00_1512>((long)1))
; }  else 
{ /* Ieee/number.scm 1216 */
BgL_testz00_8213 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1214 */
BgL_testz00_8213 = ((bool_t)0)
; } } } } } } } } } 
if(BgL_testz00_8213)
{ /* Ieee/number.scm 1259 */
long BgL_auxz00_8438;obj_t BgL_auxz00_8431;
{ /* Ieee/number.scm 1259 */
obj_t BgL_auxz00_8439;
if(
INTEGERP(BgL_radixz00_116))
{ /* Ieee/number.scm 1259 */
BgL_auxz00_8439 = BgL_radixz00_116
; }  else 
{ 
obj_t BgL_auxz00_8442;
BgL_auxz00_8442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41958)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_radixz00_116); 
FAILURE(BgL_auxz00_8442,BFALSE,BFALSE);} 
BgL_auxz00_8438 = 
(long)CINT(BgL_auxz00_8439); } 
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1259 */
BgL_auxz00_8431 = BgL_xz00_115
; }  else 
{ 
obj_t BgL_auxz00_8434;
BgL_auxz00_8434 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41956)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8434,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8431, BgL_auxz00_8438);}  else 
{ /* Ieee/number.scm 1260 */
bool_t BgL_testz00_8448;
{ /* Ieee/number.scm 1260 */
obj_t BgL_string1z00_3860;
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1260 */
BgL_string1z00_3860 = BgL_xz00_115; }  else 
{ 
obj_t BgL_auxz00_8451;
BgL_auxz00_8451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41983)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8451,BFALSE,BFALSE);} 
BgL_testz00_8448 = 
bigloo_strcmp(BgL_string1z00_3860, BGl_string2837z00zz__r4_numbers_6_5z00); } 
if(BgL_testz00_8448)
{ /* Ieee/number.scm 1260 */
return BGl_real2838z00zz__r4_numbers_6_5z00;}  else 
{ /* Ieee/number.scm 1262 */
bool_t BgL_testz00_8456;
{ /* Ieee/number.scm 1262 */
obj_t BgL_string1z00_3862;
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1262 */
BgL_string1z00_3862 = BgL_xz00_115; }  else 
{ 
obj_t BgL_auxz00_8459;
BgL_auxz00_8459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)42027)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8459,BFALSE,BFALSE);} 
BgL_testz00_8456 = 
bigloo_strcmp(BgL_string1z00_3862, BGl_string2839z00zz__r4_numbers_6_5z00); } 
if(BgL_testz00_8456)
{ /* Ieee/number.scm 1262 */
return BGl_real2840z00zz__r4_numbers_6_5z00;}  else 
{ /* Ieee/number.scm 1264 */
bool_t BgL_testz00_8464;
{ /* Ieee/number.scm 1264 */
obj_t BgL_string1z00_3864;
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1264 */
BgL_string1z00_3864 = BgL_xz00_115; }  else 
{ 
obj_t BgL_auxz00_8467;
BgL_auxz00_8467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)42071)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8467,BFALSE,BFALSE);} 
BgL_testz00_8464 = 
bigloo_strcmp(BgL_string1z00_3864, BGl_string2841z00zz__r4_numbers_6_5z00); } 
if(BgL_testz00_8464)
{ /* Ieee/number.scm 1264 */
return BGl_real2842z00zz__r4_numbers_6_5z00;}  else 
{ /* Ieee/number.scm 1266 */
bool_t BgL_testz00_8472;
BgL_xz00_1554 = BgL_xz00_115; 
{ /* Ieee/number.scm 1219 */
long BgL_lenz00_1556;
{ /* Ieee/number.scm 1219 */
obj_t BgL_stringz00_3956;
if(
STRINGP(BgL_xz00_1554))
{ /* Ieee/number.scm 1219 */
BgL_stringz00_3956 = BgL_xz00_1554; }  else 
{ 
obj_t BgL_auxz00_8475;
BgL_auxz00_8475 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41098)), BGl_string2836z00zz__r4_numbers_6_5z00, BGl_string2833z00zz__r4_numbers_6_5z00, BgL_xz00_1554); 
FAILURE(BgL_auxz00_8475,BFALSE,BFALSE);} 
BgL_lenz00_1556 = 
STRING_LENGTH(BgL_stringz00_3956); } 
{ 
long BgL_iz00_1558;bool_t BgL_ez00_1559;long BgL_pz00_1560;bool_t BgL_dz00_1561;
BgL_iz00_1558 = ((long)0); 
BgL_ez00_1559 = ((bool_t)0); 
BgL_pz00_1560 = ((long)0); 
BgL_dz00_1561 = ((bool_t)0); 
BgL_zc3anonymousza32229ze3z83_1562:
if(
(BgL_iz00_1558==BgL_lenz00_1556))
{ /* Ieee/number.scm 1224 */
BgL_testz00_8472 = BgL_dz00_1561
; }  else 
{ /* Ieee/number.scm 1226 */
bool_t BgL_testz00_8482;
{ /* Ieee/number.scm 1226 */
bool_t BgL_testz00_8483;
{ /* Ieee/number.scm 1226 */
unsigned char BgL_auxz00_8484;
{ /* Ieee/number.scm 1226 */
obj_t BgL_stringz00_3959;
BgL_stringz00_3959 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1226 */
long BgL_l2536z00_4369;
BgL_l2536z00_4369 = 
STRING_LENGTH(BgL_stringz00_3959); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2536z00_4369))
{ /* Ieee/number.scm 1226 */
BgL_auxz00_8484 = 
STRING_REF(BgL_stringz00_3959, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8489;
BgL_auxz00_8489 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41227)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3959); 
FAILURE(BgL_auxz00_8489,BFALSE,BFALSE);} } } 
BgL_testz00_8483 = 
(BgL_auxz00_8484>=((unsigned char)'0')); } 
if(BgL_testz00_8483)
{ /* Ieee/number.scm 1227 */
unsigned char BgL_auxz00_8495;
{ /* Ieee/number.scm 1227 */
obj_t BgL_stringz00_3963;
BgL_stringz00_3963 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1227 */
long BgL_l2540z00_4373;
BgL_l2540z00_4373 = 
STRING_LENGTH(BgL_stringz00_3963); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2540z00_4373))
{ /* Ieee/number.scm 1227 */
BgL_auxz00_8495 = 
STRING_REF(BgL_stringz00_3963, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8500;
BgL_auxz00_8500 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41261)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3963); 
FAILURE(BgL_auxz00_8500,BFALSE,BFALSE);} } } 
BgL_testz00_8482 = 
(BgL_auxz00_8495<=((unsigned char)'9')); }  else 
{ /* Ieee/number.scm 1226 */
BgL_testz00_8482 = ((bool_t)0)
; } } 
if(BgL_testz00_8482)
{ 
bool_t BgL_dz00_8509;long BgL_pz00_8508;long BgL_iz00_8506;
BgL_iz00_8506 = 
(BgL_iz00_1558+((long)1)); 
BgL_pz00_8508 = ((long)0); 
BgL_dz00_8509 = ((bool_t)1); 
BgL_dz00_1561 = BgL_dz00_8509; 
BgL_pz00_1560 = BgL_pz00_8508; 
BgL_iz00_1558 = BgL_iz00_8506; 
goto BgL_zc3anonymousza32229ze3z83_1562;}  else 
{ /* Ieee/number.scm 1232 */
bool_t BgL_testz00_8510;
{ /* Ieee/number.scm 1232 */
unsigned char BgL_auxz00_8511;
{ /* Ieee/number.scm 1232 */
obj_t BgL_stringz00_3969;
BgL_stringz00_3969 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1232 */
long BgL_l2544z00_4377;
BgL_l2544z00_4377 = 
STRING_LENGTH(BgL_stringz00_3969); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2544z00_4377))
{ /* Ieee/number.scm 1232 */
BgL_auxz00_8511 = 
STRING_REF(BgL_stringz00_3969, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8516;
BgL_auxz00_8516 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41339)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3969); 
FAILURE(BgL_auxz00_8516,BFALSE,BFALSE);} } } 
BgL_testz00_8510 = 
(BgL_auxz00_8511==((unsigned char)'.')); } 
if(BgL_testz00_8510)
{ 
long BgL_pz00_8524;long BgL_iz00_8522;
BgL_iz00_8522 = 
(BgL_iz00_1558+((long)1)); 
BgL_pz00_8524 = ((long)0); 
BgL_pz00_1560 = BgL_pz00_8524; 
BgL_iz00_1558 = BgL_iz00_8522; 
goto BgL_zc3anonymousza32229ze3z83_1562;}  else 
{ /* Ieee/number.scm 1237 */
bool_t BgL_testz00_8525;
{ /* Ieee/number.scm 1237 */
bool_t BgL_testz00_8526;
{ /* Ieee/number.scm 1237 */
unsigned char BgL_auxz00_8527;
{ /* Ieee/number.scm 1237 */
obj_t BgL_stringz00_3975;
BgL_stringz00_3975 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1237 */
long BgL_l2548z00_4381;
BgL_l2548z00_4381 = 
STRING_LENGTH(BgL_stringz00_3975); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2548z00_4381))
{ /* Ieee/number.scm 1237 */
BgL_auxz00_8527 = 
STRING_REF(BgL_stringz00_3975, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8532;
BgL_auxz00_8532 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41419)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3975); 
FAILURE(BgL_auxz00_8532,BFALSE,BFALSE);} } } 
BgL_testz00_8526 = 
(BgL_auxz00_8527==((unsigned char)'e')); } 
if(BgL_testz00_8526)
{ /* Ieee/number.scm 1237 */
BgL_testz00_8525 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1238 */
unsigned char BgL_auxz00_8538;
{ /* Ieee/number.scm 1238 */
obj_t BgL_stringz00_3979;
BgL_stringz00_3979 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1238 */
long BgL_l2552z00_4385;
BgL_l2552z00_4385 = 
STRING_LENGTH(BgL_stringz00_3979); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2552z00_4385))
{ /* Ieee/number.scm 1238 */
BgL_auxz00_8538 = 
STRING_REF(BgL_stringz00_3979, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8543;
BgL_auxz00_8543 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41458)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3979); 
FAILURE(BgL_auxz00_8543,BFALSE,BFALSE);} } } 
BgL_testz00_8525 = 
(BgL_auxz00_8538==((unsigned char)'E')); } } 
if(BgL_testz00_8525)
{ /* Ieee/number.scm 1237 */
if(BgL_ez00_1559)
{ /* Ieee/number.scm 1239 */
BgL_testz00_8472 = ((bool_t)0)
; }  else 
{ 
long BgL_pz00_8553;bool_t BgL_ez00_8552;long BgL_iz00_8550;
BgL_iz00_8550 = 
(BgL_iz00_1558+((long)1)); 
BgL_ez00_8552 = ((bool_t)1); 
BgL_pz00_8553 = 
(BgL_iz00_1558+((long)1)); 
BgL_pz00_1560 = BgL_pz00_8553; 
BgL_ez00_1559 = BgL_ez00_8552; 
BgL_iz00_1558 = BgL_iz00_8550; 
goto BgL_zc3anonymousza32229ze3z83_1562;} }  else 
{ /* Ieee/number.scm 1245 */
bool_t BgL_testz00_8555;
{ /* Ieee/number.scm 1245 */
bool_t BgL_testz00_8556;
{ /* Ieee/number.scm 1245 */
unsigned char BgL_auxz00_8557;
{ /* Ieee/number.scm 1245 */
obj_t BgL_stringz00_3987;
BgL_stringz00_3987 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1245 */
long BgL_l2556z00_4389;
BgL_l2556z00_4389 = 
STRING_LENGTH(BgL_stringz00_3987); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2556z00_4389))
{ /* Ieee/number.scm 1245 */
BgL_auxz00_8557 = 
STRING_REF(BgL_stringz00_3987, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8562;
BgL_auxz00_8562 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41588)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3987); 
FAILURE(BgL_auxz00_8562,BFALSE,BFALSE);} } } 
BgL_testz00_8556 = 
(BgL_auxz00_8557==((unsigned char)'-')); } 
if(BgL_testz00_8556)
{ /* Ieee/number.scm 1245 */
BgL_testz00_8555 = ((bool_t)1)
; }  else 
{ /* Ieee/number.scm 1246 */
unsigned char BgL_auxz00_8568;
{ /* Ieee/number.scm 1246 */
obj_t BgL_stringz00_3991;
BgL_stringz00_3991 = BgL_xz00_1554; 
{ /* Ieee/number.scm 1246 */
long BgL_l2560z00_4393;
BgL_l2560z00_4393 = 
STRING_LENGTH(BgL_stringz00_3991); 
if(
BOUND_CHECK(BgL_iz00_1558, BgL_l2560z00_4393))
{ /* Ieee/number.scm 1246 */
BgL_auxz00_8568 = 
STRING_REF(BgL_stringz00_3991, BgL_iz00_1558)
; }  else 
{ 
obj_t BgL_auxz00_8573;
BgL_auxz00_8573 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)41627)), BGl_string2834z00zz__r4_numbers_6_5z00, 
BINT(BgL_iz00_1558), BgL_stringz00_3991); 
FAILURE(BgL_auxz00_8573,BFALSE,BFALSE);} } } 
BgL_testz00_8555 = 
(BgL_auxz00_8568==((unsigned char)'+')); } } 
if(BgL_testz00_8555)
{ /* Ieee/number.scm 1247 */
bool_t BgL_testz00_8579;
{ /* Ieee/number.scm 1247 */
bool_t BgL__ortest_1111z00_1577;
BgL__ortest_1111z00_1577 = 
(BgL_iz00_1558==((long)0)); 
if(BgL__ortest_1111z00_1577)
{ /* Ieee/number.scm 1247 */
BgL_testz00_8579 = BgL__ortest_1111z00_1577
; }  else 
{ /* Ieee/number.scm 1247 */
BgL_testz00_8579 = 
(BgL_iz00_1558==BgL_pz00_1560)
; } } 
if(BgL_testz00_8579)
{ 
long BgL_pz00_8585;long BgL_iz00_8583;
BgL_iz00_8583 = 
(BgL_iz00_1558+((long)1)); 
BgL_pz00_8585 = ((long)0); 
BgL_pz00_1560 = BgL_pz00_8585; 
BgL_iz00_1558 = BgL_iz00_8583; 
goto BgL_zc3anonymousza32229ze3z83_1562;}  else 
{ /* Ieee/number.scm 1247 */
BgL_testz00_8472 = ((bool_t)0)
; } }  else 
{ /* Ieee/number.scm 1245 */
BgL_testz00_8472 = ((bool_t)0)
; } } } } } } } 
if(BgL_testz00_8472)
{ /* Ieee/number.scm 1267 */
bool_t BgL_testz00_8586;
{ /* Ieee/number.scm 1267 */
long BgL_n1z00_3866;
{ /* Ieee/number.scm 1267 */
obj_t BgL_auxz00_8587;
if(
INTEGERP(BgL_radixz00_116))
{ /* Ieee/number.scm 1267 */
BgL_auxz00_8587 = BgL_radixz00_116
; }  else 
{ 
obj_t BgL_auxz00_8590;
BgL_auxz00_8590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)42138)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2750z00zz__r4_numbers_6_5z00, BgL_radixz00_116); 
FAILURE(BgL_auxz00_8590,BFALSE,BFALSE);} 
BgL_n1z00_3866 = 
(long)CINT(BgL_auxz00_8587); } 
BgL_testz00_8586 = 
(BgL_n1z00_3866==((long)10)); } 
if(BgL_testz00_8586)
{ /* Ieee/number.scm 1268 */
double BgL_res2481z00_3878;
{ /* Ieee/number.scm 1268 */
char * BgL_stringz00_3868;
{ /* Ieee/number.scm 1268 */
obj_t BgL_auxz00_8596;
if(
STRINGP(BgL_xz00_115))
{ /* Ieee/number.scm 1268 */
BgL_auxz00_8596 = BgL_xz00_115
; }  else 
{ 
obj_t BgL_auxz00_8599;
BgL_auxz00_8599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2746z00zz__r4_numbers_6_5z00, 
BINT(((long)42166)), BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2828z00zz__r4_numbers_6_5z00, BgL_xz00_115); 
FAILURE(BgL_auxz00_8599,BFALSE,BFALSE);} 
BgL_stringz00_3868 = 
BSTRING_TO_STRING(BgL_auxz00_8596); } 
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_3868), BGl_string2837z00zz__r4_numbers_6_5z00))
{ /* Ieee/number.scm 1268 */
BgL_res2481z00_3878 = BGL_NAN; }  else 
{ /* Ieee/number.scm 1268 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_3868), BGl_string2839z00zz__r4_numbers_6_5z00))
{ /* Ieee/number.scm 1268 */
BgL_res2481z00_3878 = BGL_INFINITY; }  else 
{ /* Ieee/number.scm 1268 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_3868), BGl_string2841z00zz__r4_numbers_6_5z00))
{ /* Ieee/number.scm 1268 */
BgL_res2481z00_3878 = (-BGL_INFINITY); }  else 
{ /* Ieee/number.scm 1268 */
BgL_res2481z00_3878 = 
strtod(BgL_stringz00_3868, ((long)0)); } } } } 
return 
DOUBLE_TO_REAL(BgL_res2481z00_3878);}  else 
{ /* Ieee/number.scm 1267 */
return 
BGl_errorz00zz__errorz00(BGl_string2831z00zz__r4_numbers_6_5z00, BGl_string2843z00zz__r4_numbers_6_5z00, BgL_radixz00_116);} }  else 
{ /* Ieee/number.scm 1266 */
return BFALSE;} } } } } } }  else 
{ /* Ieee/number.scm 1254 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2824z00zz__r4_numbers_6_5z00, BGl_string2829z00zz__r4_numbers_6_5z00, BgL_radixz00_116);} } } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5z00()
{ AN_OBJECT;
{ /* Ieee/number.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2844z00zz__r4_numbers_6_5z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2844z00zz__r4_numbers_6_5z00));} 
}

#ifdef __cplusplus
}
#endif
