/*===========================================================================*/
/*   (Ieee/flonum.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/flonum.scm -indent -o objs/obj_s/Ieee/flonum.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL int BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float);
BGL_EXPORTED_DECL double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
BGL_EXPORTED_DECL obj_t BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern float bgl_ieee_string_to_float(obj_t);
BGL_EXPORTED_DECL double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__minflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__negflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__ze3flze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char *);
static obj_t BGl__absflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern obj_t bgl_float_to_ieee_string(float);
static obj_t BGl__floorflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__acosflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl__remainderflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__exptflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl__logflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__truncateflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
static obj_t BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__expflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 = BUNSPEC;
static obj_t BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__atanflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__cosflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__maxflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00();
static obj_t BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__asinflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__tanflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern obj_t real_to_string(double);
extern double bgl_ieee_string_to_double(obj_t);
extern obj_t string_to_bstring(char *);
static obj_t BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double, obj_t);
static obj_t BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double);
static obj_t BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL float BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int);
static obj_t BGl__za2flza2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
static obj_t BGl__signbitflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl__sinflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL float BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t);
static obj_t BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL obj_t BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double);
extern obj_t bgl_double_to_ieee_string(double);
static obj_t BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t);
BGL_EXPORTED_DECL double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double, double);
BGL_EXPORTED_DECL double BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T);
static obj_t BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
extern obj_t the_failure(obj_t, obj_t, obj_t);
static obj_t BGl__roundflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00(obj_t, obj_t);
static obj_t BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL obj_t BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float);
static obj_t BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double, double);
static obj_t *__cnst;


DEFINE_STRING( BGl_string1636z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1636za700za7za7_1643za7, "_llong-bits->double", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2bitszd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__llongza7d2bitsza7d21644z00, BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__remainderflza700za71645z00, BGl__remainderflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1637z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1637za700za7za7_1646za7, "llong", 5 );
DEFINE_STRING( BGl_string1638z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1638za700za7za7_1647za7, "_float->int-bits", 16 );
DEFINE_STRING( BGl_string1640z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1640za700za7za7_1648za7, "int", 3 );
DEFINE_STRING( BGl_string1639z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1639za700za7za7_1649za7, "_int-bits->float", 16 );
DEFINE_STRING( BGl_string1641z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1641za700za7za7_1650za7, "__r4_numbers_6_5_flonum", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__integerflza7f3za7f31651z00, BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7d2flza7d2za7za7__r4_1652z00, BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3flzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7e3flza7e3za7za7__r4_1653z00, BGl__ze3flze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sinflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__sinflza700za7za7__r4_1654za7, BGl__sinflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_intzd2bitszd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__intza7d2bitsza7d2za7e1655za7, BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__exptflza700za7za7__r41656za7, BGl__exptflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3flzd2envz01zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7d3flza7d3za7za7__r4_1657z00, BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2flzd2envz60zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7b2flza7b2za7za7__r4_1658z00, BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3flzd2envz11zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7c3flza7c3za7za7__r4_1659z00, BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__maxflza700za7za7__r4_1660za7, va_generic_entry, BGl__maxflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3realzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__ieeeza7d2stringza7d1661z00, BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__atanflza700za7za7__r41662za7, va_generic_entry, BGl__atanflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_acosflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__acosflza700za7za7__r41663za7, BGl__acosflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_realzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__realza7d2za7e3ieeeza71664za7, BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floorflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__floorflza700za7za7__r1665za7, BGl__floorflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2flzd2envz70zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7a2flza7a2za7za7__r4_1666z00, BGl__za2flza2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_realzd2ze3stringzd2envze3zz__r4_numbers_6_5_flonumz00, BgL_bgl__realza7d2za7e3strin1667z00, BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__sqrtflza700za7za7__r41668za7, BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floatzd2ze3intzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__floatza7d2za7e3intza71669za7, BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__negflza700za7za7__r4_1670za7, BGl__negflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_realzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__realza7f3za7f3za7za7__r1671z00, BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3realzd2envze3zz__r4_numbers_6_5_flonumz00, BgL_bgl__stringza7d2za7e3rea1672z00, BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_nanflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__nanflza7f3za7f3za7za7__1673z00, BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3floatzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__ieeeza7d2stringza7d1674z00, BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3flzd2envze2zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7e3za7d3flza730za7za7__1675za7, BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sqrtflzd2urzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__sqrtflza7d2urza7d2za71676za7, BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_REAL( BGl_real1604z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_real1604za700za7za7__r1677za7, 0.0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_signbitflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__signbitflza700za7za7_1678za7, BGl__signbitflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ceilingflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__ceilingflza700za7za7_1679za7, BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3flzd2envzc2zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7c3za7d3flza710za7za7__1680za7, BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_expflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__expflza700za7za7__r4_1681za7, BGl__expflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positiveflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__positiveflza7f3za7f1682z00, BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ieeezd2stringzd2ze3doublezd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__ieeeza7d2stringza7d1683z00, BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_logflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__logflza700za7za7__r4_1684za7, BGl__logflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_floatzd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__floatza7d2za7e3ieee1685z00, BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tanflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__tanflza700za7za7__r4_1686za7, BGl__tanflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__minflza700za7za7__r4_1687za7, va_generic_entry, BGl__minflz00zz__r4_numbers_6_5_flonumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cosflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__cosflza700za7za7__r4_1688za7, BGl__cosflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd22flzd2urzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__atanza7d22flza7d2ur1689z00, BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__minza7d22flza7d2za7za7_1690z00, BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__oddflza7f3za7f3za7za7__1691z00, BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7eroflzf3zd2envz86zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7a7eroflza7f3za754za71692z00, BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativeflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__negativeflza7f3za7f1693z00, BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_finiteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__finiteflza7f3za7f3za71694za7, BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_doublezd2ze3ieeezd2stringzd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__doubleza7d2za7e3iee1695z00, BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_asinflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__asinflza700za7za7__r41696za7, BGl__asinflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_doublezd2ze3llongzd2bitszd2envz31zz__r4_numbers_6_5_flonumz00, BgL_bgl__doubleza7d2za7e3llo1697z00, BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_roundflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__roundflza700za7za7__r1698za7, BGl__roundflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1568z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1568za700za7za7_1699za7, "/tmp/bigloo/runtime/Ieee/flonum.scm", 35 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__atanza7d22flza7d2za7za71700z00, BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1570za700za7za7_1701za7, "double", 6 );
DEFINE_STRING( BGl_string1569z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1569za700za7za7_1702za7, "_=fl", 4 );
DEFINE_STRING( BGl_string1571z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1571za700za7za7_1703za7, "_<fl", 4 );
DEFINE_STRING( BGl_string1572z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1572za700za7za7_1704za7, "_>fl", 4 );
DEFINE_STRING( BGl_string1573z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1573za700za7za7_1705za7, "_<=fl", 5 );
DEFINE_STRING( BGl_string1574z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1574za700za7za7_1706za7, "_>=fl", 5 );
DEFINE_STRING( BGl_string1575z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1575za700za7za7_1707za7, "_zerofl?", 8 );
DEFINE_STRING( BGl_string1576z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1576za700za7za7_1708za7, "_positivefl?", 12 );
DEFINE_STRING( BGl_string1577z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1577za700za7za7_1709za7, "_negativefl?", 12 );
DEFINE_STRING( BGl_string1578z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1578za700za7za7_1710za7, "_+fl", 4 );
DEFINE_STRING( BGl_string1580z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1580za700za7za7_1711za7, "_*fl", 4 );
DEFINE_STRING( BGl_string1579z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1579za700za7za7_1712za7, "_-fl", 4 );
DEFINE_STRING( BGl_string1581z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1581za700za7za7_1713za7, "_/fl", 4 );
DEFINE_STRING( BGl_string1582z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1582za700za7za7_1714za7, "_negfl", 6 );
DEFINE_STRING( BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1583za700za7za7_1715za7, "loop", 4 );
DEFINE_STRING( BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1584za700za7za7_1716za7, "pair", 4 );
DEFINE_STRING( BGl_string1585z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1585za700za7za7_1717za7, "_maxfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_atanzd21flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__atanza7d21flza7d2za7za71718z00, BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1586z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1586za700za7za7_1719za7, "_max-2fl", 8 );
DEFINE_STRING( BGl_string1587z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1587za700za7za7_1720za7, "_min-2fl", 8 );
DEFINE_STRING( BGl_string1588z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1588za700za7za7_1721za7, "_minfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__evenflza7f3za7f3za7za7_1722z00, BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1600z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1600za700za7za7_1723za7, "_asinfl", 7 );
DEFINE_STRING( BGl_string1590z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1590za700za7za7_1724za7, "_floorfl", 8 );
DEFINE_STRING( BGl_string1589z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1589za700za7za7_1725za7, "_absfl", 6 );
DEFINE_STRING( BGl_string1601z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1601za700za7za7_1726za7, "_acosfl", 7 );
DEFINE_STRING( BGl_string1591z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1591za700za7za7_1727za7, "_ceilingfl", 10 );
DEFINE_STRING( BGl_string1602z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1602za700za7za7_1728za7, "atanfl", 6 );
DEFINE_STRING( BGl_string1592z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1592za700za7za7_1729za7, "_truncatefl", 11 );
DEFINE_STRING( BGl_string1603z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1603za700za7za7_1730za7, "Domain error", 12 );
DEFINE_STRING( BGl_string1593z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1593za700za7za7_1731za7, "_roundfl", 8 );
DEFINE_STRING( BGl_string1594z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1594za700za7za7_1732za7, "_remainderfl", 12 );
DEFINE_STRING( BGl_string1605z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1605za700za7za7_1733za7, "_atanfl", 7 );
DEFINE_STRING( BGl_string1595z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1595za700za7za7_1734za7, "_expfl", 6 );
DEFINE_STRING( BGl_string1606z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1606za700za7za7_1735za7, "_atan-1fl", 9 );
DEFINE_STRING( BGl_string1596z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1596za700za7za7_1736za7, "_logfl", 6 );
DEFINE_STRING( BGl_string1607z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1607za700za7za7_1737za7, "_atan-2fl", 9 );
DEFINE_STRING( BGl_string1597z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1597za700za7za7_1738za7, "_sinfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxzd22flzd2envz00zz__r4_numbers_6_5_flonumz00, BgL_bgl__maxza7d22flza7d2za7za7_1739z00, BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1608z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1608za700za7za7_1740za7, "_atan-2fl-ur", 12 );
DEFINE_STRING( BGl_string1598z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1598za700za7za7_1741za7, "_cosfl", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_absflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__absflza700za7za7__r4_1742za7, BGl__absflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_flonumzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__flonumza7f3za7f3za7za7_1743z00, BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1610z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1610za700za7za7_1744za7, "_sqrtfl", 7 );
DEFINE_STRING( BGl_string1609z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1609za700za7za7_1745za7, "sqrtfl", 6 );
DEFINE_STRING( BGl_string1599z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1599za700za7za7_1746za7, "_tanfl", 6 );
DEFINE_STRING( BGl_string1611z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1611za700za7za7_1747za7, "_sqrtfl-ur", 10 );
DEFINE_STRING( BGl_string1612z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1612za700za7za7_1748za7, "_exptfl", 7 );
DEFINE_STRING( BGl_string1613z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1613za700za7za7_1749za7, "_signbitfl", 10 );
DEFINE_STRING( BGl_string1614z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1614za700za7za7_1750za7, "_integerfl?", 11 );
DEFINE_STRING( BGl_string1615z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1615za700za7za7_1751za7, "_evenfl?", 8 );
DEFINE_STRING( BGl_string1616z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1616za700za7za7_1752za7, "_oddfl?", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_infiniteflzf3zd2envz21zz__r4_numbers_6_5_flonumz00, BgL_bgl__infiniteflza7f3za7f1753z00, BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1617z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1617za700za7za7_1754za7, "_finitefl?", 10 );
DEFINE_STRING( BGl_string1618z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1618za700za7za7_1755za7, "_infinitefl?", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2flzd2envz20zz__r4_numbers_6_5_flonumz00, BgL_bgl__za7f2flza7f2za7za7__r4_1756z00, BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1620z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1620za700za7za7_1757za7, "+nan.0", 6 );
DEFINE_STRING( BGl_string1619z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1619za700za7za7_1758za7, "_nanfl?", 7 );
DEFINE_STRING( BGl_string1621z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1621za700za7za7_1759za7, "+inf.0", 6 );
DEFINE_STRING( BGl_string1622z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1622za700za7za7_1760za7, "-inf.0", 6 );
DEFINE_STRING( BGl_string1623z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1623za700za7za7_1761za7, "_string->real", 13 );
DEFINE_STRING( BGl_string1624z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1624za700za7za7_1762za7, "string", 6 );
DEFINE_STRING( BGl_string1625z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1625za700za7za7_1763za7, "_real->string", 13 );
DEFINE_STRING( BGl_string1626z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1626za700za7za7_1764za7, "real", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_truncateflzd2envzd2zz__r4_numbers_6_5_flonumz00, BgL_bgl__truncateflza700za7za71765za7, BGl__truncateflz00zz__r4_numbers_6_5_flonumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1627z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1627za700za7za7_1766za7, "_ieee-string->real", 18 );
DEFINE_STRING( BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1628za700za7za7_1767za7, "bstring", 7 );
DEFINE_STRING( BGl_string1630z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1630za700za7za7_1768za7, "_ieee-string->double", 20 );
DEFINE_STRING( BGl_string1629z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1629za700za7za7_1769za7, "_real->ieee-string", 18 );
DEFINE_STRING( BGl_string1631z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1631za700za7za7_1770za7, "_double->ieee-string", 20 );
DEFINE_STRING( BGl_string1632z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1632za700za7za7_1771za7, "_ieee-string->float", 19 );
DEFINE_STRING( BGl_string1633z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1633za700za7za7_1772za7, "_float->ieee-string", 19 );
DEFINE_STRING( BGl_string1634z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1634za700za7za7_1773za7, "float", 5 );
DEFINE_STRING( BGl_string1635z00zz__r4_numbers_6_5_flonumz00, BgL_bgl_string1635za700za7za7_1774za7, "_double->llong-bits", 19 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long BgL_checksumz00_1265, char * BgL_fromz00_1266)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* real? */
BGL_EXPORTED_DEF bool_t BGl_realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 298 */
if(
INTEGERP(BgL_objz00_1))
{ /* Ieee/flonum.scm 299 */
return ((bool_t)1);}  else 
{ /* Ieee/flonum.scm 299 */
return 
REALP(BgL_objz00_1);} } 
}



/* _real? */
obj_t BGl__realzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_870, obj_t BgL_objz00_871)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 298 */
{ /* Ieee/flonum.scm 299 */
bool_t BgL_auxz00_1274;
if(
INTEGERP(BgL_objz00_871))
{ /* Ieee/flonum.scm 299 */
BgL_auxz00_1274 = ((bool_t)1)
; }  else 
{ /* Ieee/flonum.scm 299 */
BgL_auxz00_1274 = 
REALP(BgL_objz00_871)
; } 
return 
BBOOL(BgL_auxz00_1274);} } 
}



/* flonum? */
BGL_EXPORTED_DEF bool_t BGl_flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 306 */
return 
REALP(BgL_objz00_2);} 
}



/* _flonum? */
obj_t BGl__flonumzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_872, obj_t BgL_objz00_873)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 306 */
return 
BBOOL(
REALP(BgL_objz00_873));} 
}



/* =fl */
BGL_EXPORTED_DEF bool_t BGl_zd3flzd3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_3, double BgL_r2z00_4)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 312 */
return 
(BgL_r1z00_3==BgL_r2z00_4);} 
}



/* _=fl */
obj_t BGl__zd3flzd3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_874, obj_t BgL_r1z00_875, obj_t BgL_r2z00_876)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 312 */
{ /* Ieee/flonum.scm 313 */
bool_t BgL_auxz00_1283;
{ /* Ieee/flonum.scm 313 */
double BgL_r1z00_1164;double BgL_r2z00_1165;
{ /* Ieee/flonum.scm 313 */
obj_t BgL_auxz00_1284;
if(
REALP(BgL_r1z00_875))
{ /* Ieee/flonum.scm 313 */
BgL_auxz00_1284 = BgL_r1z00_875
; }  else 
{ 
obj_t BgL_auxz00_1287;
BgL_auxz00_1287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)13958)), BGl_string1569z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_875); 
FAILURE(BgL_auxz00_1287,BFALSE,BFALSE);} 
BgL_r1z00_1164 = 
REAL_TO_DOUBLE(BgL_auxz00_1284); } 
{ /* Ieee/flonum.scm 313 */
obj_t BgL_auxz00_1292;
if(
REALP(BgL_r2z00_876))
{ /* Ieee/flonum.scm 313 */
BgL_auxz00_1292 = BgL_r2z00_876
; }  else 
{ 
obj_t BgL_auxz00_1295;
BgL_auxz00_1295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)13958)), BGl_string1569z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_876); 
FAILURE(BgL_auxz00_1295,BFALSE,BFALSE);} 
BgL_r2z00_1165 = 
REAL_TO_DOUBLE(BgL_auxz00_1292); } 
BgL_auxz00_1283 = 
(BgL_r1z00_1164==BgL_r2z00_1165); } 
return 
BBOOL(BgL_auxz00_1283);} } 
}



/* <fl */
BGL_EXPORTED_DEF bool_t BGl_zc3flzc3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_5, double BgL_r2z00_6)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 318 */
return 
(BgL_r1z00_5<BgL_r2z00_6);} 
}



/* _<fl */
obj_t BGl__zc3flzc3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_877, obj_t BgL_r1z00_878, obj_t BgL_r2z00_879)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 318 */
{ /* Ieee/flonum.scm 319 */
bool_t BgL_auxz00_1303;
{ /* Ieee/flonum.scm 319 */
double BgL_r1z00_1166;double BgL_r2z00_1167;
{ /* Ieee/flonum.scm 319 */
obj_t BgL_auxz00_1304;
if(
REALP(BgL_r1z00_878))
{ /* Ieee/flonum.scm 319 */
BgL_auxz00_1304 = BgL_r1z00_878
; }  else 
{ 
obj_t BgL_auxz00_1307;
BgL_auxz00_1307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14226)), BGl_string1571z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_878); 
FAILURE(BgL_auxz00_1307,BFALSE,BFALSE);} 
BgL_r1z00_1166 = 
REAL_TO_DOUBLE(BgL_auxz00_1304); } 
{ /* Ieee/flonum.scm 319 */
obj_t BgL_auxz00_1312;
if(
REALP(BgL_r2z00_879))
{ /* Ieee/flonum.scm 319 */
BgL_auxz00_1312 = BgL_r2z00_879
; }  else 
{ 
obj_t BgL_auxz00_1315;
BgL_auxz00_1315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14226)), BGl_string1571z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_879); 
FAILURE(BgL_auxz00_1315,BFALSE,BFALSE);} 
BgL_r2z00_1167 = 
REAL_TO_DOUBLE(BgL_auxz00_1312); } 
BgL_auxz00_1303 = 
(BgL_r1z00_1166<BgL_r2z00_1167); } 
return 
BBOOL(BgL_auxz00_1303);} } 
}



/* >fl */
BGL_EXPORTED_DEF bool_t BGl_ze3flze3zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_7, double BgL_r2z00_8)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 324 */
return 
(BgL_r1z00_7>BgL_r2z00_8);} 
}



/* _>fl */
obj_t BGl__ze3flze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_880, obj_t BgL_r1z00_881, obj_t BgL_r2z00_882)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 324 */
{ /* Ieee/flonum.scm 325 */
bool_t BgL_auxz00_1323;
{ /* Ieee/flonum.scm 325 */
double BgL_r1z00_1168;double BgL_r2z00_1169;
{ /* Ieee/flonum.scm 325 */
obj_t BgL_auxz00_1324;
if(
REALP(BgL_r1z00_881))
{ /* Ieee/flonum.scm 325 */
BgL_auxz00_1324 = BgL_r1z00_881
; }  else 
{ 
obj_t BgL_auxz00_1327;
BgL_auxz00_1327 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14494)), BGl_string1572z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_881); 
FAILURE(BgL_auxz00_1327,BFALSE,BFALSE);} 
BgL_r1z00_1168 = 
REAL_TO_DOUBLE(BgL_auxz00_1324); } 
{ /* Ieee/flonum.scm 325 */
obj_t BgL_auxz00_1332;
if(
REALP(BgL_r2z00_882))
{ /* Ieee/flonum.scm 325 */
BgL_auxz00_1332 = BgL_r2z00_882
; }  else 
{ 
obj_t BgL_auxz00_1335;
BgL_auxz00_1335 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14494)), BGl_string1572z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_882); 
FAILURE(BgL_auxz00_1335,BFALSE,BFALSE);} 
BgL_r2z00_1169 = 
REAL_TO_DOUBLE(BgL_auxz00_1332); } 
BgL_auxz00_1323 = 
(BgL_r1z00_1168>BgL_r2z00_1169); } 
return 
BBOOL(BgL_auxz00_1323);} } 
}



/* <=fl */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3flz10zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_9, double BgL_r2z00_10)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 330 */
return 
(BgL_r1z00_9<=BgL_r2z00_10);} 
}



/* _<=fl */
obj_t BGl__zc3zd3flz10zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_883, obj_t BgL_r1z00_884, obj_t BgL_r2z00_885)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 330 */
{ /* Ieee/flonum.scm 331 */
bool_t BgL_auxz00_1343;
{ /* Ieee/flonum.scm 331 */
double BgL_r1z00_1170;double BgL_r2z00_1171;
{ /* Ieee/flonum.scm 331 */
obj_t BgL_auxz00_1344;
if(
REALP(BgL_r1z00_884))
{ /* Ieee/flonum.scm 331 */
BgL_auxz00_1344 = BgL_r1z00_884
; }  else 
{ 
obj_t BgL_auxz00_1347;
BgL_auxz00_1347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14763)), BGl_string1573z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_884); 
FAILURE(BgL_auxz00_1347,BFALSE,BFALSE);} 
BgL_r1z00_1170 = 
REAL_TO_DOUBLE(BgL_auxz00_1344); } 
{ /* Ieee/flonum.scm 331 */
obj_t BgL_auxz00_1352;
if(
REALP(BgL_r2z00_885))
{ /* Ieee/flonum.scm 331 */
BgL_auxz00_1352 = BgL_r2z00_885
; }  else 
{ 
obj_t BgL_auxz00_1355;
BgL_auxz00_1355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)14763)), BGl_string1573z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_885); 
FAILURE(BgL_auxz00_1355,BFALSE,BFALSE);} 
BgL_r2z00_1171 = 
REAL_TO_DOUBLE(BgL_auxz00_1352); } 
BgL_auxz00_1343 = 
(BgL_r1z00_1170<=BgL_r2z00_1171); } 
return 
BBOOL(BgL_auxz00_1343);} } 
}



/* >=fl */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3flz30zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_11, double BgL_r2z00_12)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 336 */
return 
(BgL_r1z00_11>=BgL_r2z00_12);} 
}



/* _>=fl */
obj_t BGl__ze3zd3flz30zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_886, obj_t BgL_r1z00_887, obj_t BgL_r2z00_888)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 336 */
{ /* Ieee/flonum.scm 337 */
bool_t BgL_auxz00_1363;
{ /* Ieee/flonum.scm 337 */
double BgL_r1z00_1172;double BgL_r2z00_1173;
{ /* Ieee/flonum.scm 337 */
obj_t BgL_auxz00_1364;
if(
REALP(BgL_r1z00_887))
{ /* Ieee/flonum.scm 337 */
BgL_auxz00_1364 = BgL_r1z00_887
; }  else 
{ 
obj_t BgL_auxz00_1367;
BgL_auxz00_1367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15033)), BGl_string1574z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_887); 
FAILURE(BgL_auxz00_1367,BFALSE,BFALSE);} 
BgL_r1z00_1172 = 
REAL_TO_DOUBLE(BgL_auxz00_1364); } 
{ /* Ieee/flonum.scm 337 */
obj_t BgL_auxz00_1372;
if(
REALP(BgL_r2z00_888))
{ /* Ieee/flonum.scm 337 */
BgL_auxz00_1372 = BgL_r2z00_888
; }  else 
{ 
obj_t BgL_auxz00_1375;
BgL_auxz00_1375 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15033)), BGl_string1574z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_888); 
FAILURE(BgL_auxz00_1375,BFALSE,BFALSE);} 
BgL_r2z00_1173 = 
REAL_TO_DOUBLE(BgL_auxz00_1372); } 
BgL_auxz00_1363 = 
(BgL_r1z00_1172>=BgL_r2z00_1173); } 
return 
BBOOL(BgL_auxz00_1363);} } 
}



/* zerofl? */
BGL_EXPORTED_DEF bool_t BGl_za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(double BgL_rz00_13)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 342 */
return 
(BgL_rz00_13==((double)0.0));} 
}



/* _zerofl? */
obj_t BGl__za7eroflzf3z54zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_889, obj_t BgL_rz00_890)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 342 */
{ /* Ieee/flonum.scm 343 */
bool_t BgL_auxz00_1383;
{ /* Ieee/flonum.scm 343 */
double BgL_rz00_1174;
{ /* Ieee/flonum.scm 343 */
obj_t BgL_auxz00_1384;
if(
REALP(BgL_rz00_890))
{ /* Ieee/flonum.scm 343 */
BgL_auxz00_1384 = BgL_rz00_890
; }  else 
{ 
obj_t BgL_auxz00_1387;
BgL_auxz00_1387 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15302)), BGl_string1575z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_890); 
FAILURE(BgL_auxz00_1387,BFALSE,BFALSE);} 
BgL_rz00_1174 = 
REAL_TO_DOUBLE(BgL_auxz00_1384); } 
BgL_auxz00_1383 = 
(BgL_rz00_1174==((double)0.0)); } 
return 
BBOOL(BgL_auxz00_1383);} } 
}



/* positivefl? */
BGL_EXPORTED_DEF bool_t BGl_positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_14)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 348 */
return 
(BgL_rz00_14>((double)0.0));} 
}



/* _positivefl? */
obj_t BGl__positiveflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_891, obj_t BgL_rz00_892)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 348 */
{ /* Ieee/flonum.scm 349 */
bool_t BgL_auxz00_1395;
{ /* Ieee/flonum.scm 349 */
double BgL_rz00_1175;
{ /* Ieee/flonum.scm 349 */
obj_t BgL_auxz00_1396;
if(
REALP(BgL_rz00_892))
{ /* Ieee/flonum.scm 349 */
BgL_auxz00_1396 = BgL_rz00_892
; }  else 
{ 
obj_t BgL_auxz00_1399;
BgL_auxz00_1399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15572)), BGl_string1576z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_892); 
FAILURE(BgL_auxz00_1399,BFALSE,BFALSE);} 
BgL_rz00_1175 = 
REAL_TO_DOUBLE(BgL_auxz00_1396); } 
BgL_auxz00_1395 = 
(BgL_rz00_1175>((double)0.0)); } 
return 
BBOOL(BgL_auxz00_1395);} } 
}



/* negativefl? */
BGL_EXPORTED_DEF bool_t BGl_negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_15)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 354 */
return 
(BgL_rz00_15<((double)0.0));} 
}



/* _negativefl? */
obj_t BGl__negativeflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_893, obj_t BgL_rz00_894)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 354 */
{ /* Ieee/flonum.scm 355 */
bool_t BgL_auxz00_1407;
{ /* Ieee/flonum.scm 355 */
double BgL_rz00_1176;
{ /* Ieee/flonum.scm 355 */
obj_t BgL_auxz00_1408;
if(
REALP(BgL_rz00_894))
{ /* Ieee/flonum.scm 355 */
BgL_auxz00_1408 = BgL_rz00_894
; }  else 
{ 
obj_t BgL_auxz00_1411;
BgL_auxz00_1411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)15842)), BGl_string1577z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_894); 
FAILURE(BgL_auxz00_1411,BFALSE,BFALSE);} 
BgL_rz00_1176 = 
REAL_TO_DOUBLE(BgL_auxz00_1408); } 
BgL_auxz00_1407 = 
(BgL_rz00_1176<((double)0.0)); } 
return 
BBOOL(BgL_auxz00_1407);} } 
}



/* +fl */
BGL_EXPORTED_DEF double BGl_zb2flzb2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_16, double BgL_r2z00_17)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 360 */
return 
(BgL_r1z00_16+BgL_r2z00_17);} 
}



/* _+fl */
obj_t BGl__zb2flzb2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_895, obj_t BgL_r1z00_896, obj_t BgL_r2z00_897)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 360 */
{ /* Ieee/flonum.scm 361 */
double BgL_auxz00_1419;
{ /* Ieee/flonum.scm 361 */
double BgL_r1z00_1177;double BgL_r2z00_1178;
{ /* Ieee/flonum.scm 361 */
obj_t BgL_auxz00_1420;
if(
REALP(BgL_r1z00_896))
{ /* Ieee/flonum.scm 361 */
BgL_auxz00_1420 = BgL_r1z00_896
; }  else 
{ 
obj_t BgL_auxz00_1423;
BgL_auxz00_1423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16108)), BGl_string1578z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_896); 
FAILURE(BgL_auxz00_1423,BFALSE,BFALSE);} 
BgL_r1z00_1177 = 
REAL_TO_DOUBLE(BgL_auxz00_1420); } 
{ /* Ieee/flonum.scm 361 */
obj_t BgL_auxz00_1428;
if(
REALP(BgL_r2z00_897))
{ /* Ieee/flonum.scm 361 */
BgL_auxz00_1428 = BgL_r2z00_897
; }  else 
{ 
obj_t BgL_auxz00_1431;
BgL_auxz00_1431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16108)), BGl_string1578z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_897); 
FAILURE(BgL_auxz00_1431,BFALSE,BFALSE);} 
BgL_r2z00_1178 = 
REAL_TO_DOUBLE(BgL_auxz00_1428); } 
BgL_auxz00_1419 = 
(BgL_r1z00_1177+BgL_r2z00_1178); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1419);} } 
}



/* -fl */
BGL_EXPORTED_DEF double BGl_zd2flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_18, double BgL_r2z00_19)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 366 */
return 
(BgL_r1z00_18-BgL_r2z00_19);} 
}



/* _-fl */
obj_t BGl__zd2flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_898, obj_t BgL_r1z00_899, obj_t BgL_r2z00_900)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 366 */
{ /* Ieee/flonum.scm 367 */
double BgL_auxz00_1439;
{ /* Ieee/flonum.scm 367 */
double BgL_r1z00_1179;double BgL_r2z00_1180;
{ /* Ieee/flonum.scm 367 */
obj_t BgL_auxz00_1440;
if(
REALP(BgL_r1z00_899))
{ /* Ieee/flonum.scm 367 */
BgL_auxz00_1440 = BgL_r1z00_899
; }  else 
{ 
obj_t BgL_auxz00_1443;
BgL_auxz00_1443 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16381)), BGl_string1579z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_899); 
FAILURE(BgL_auxz00_1443,BFALSE,BFALSE);} 
BgL_r1z00_1179 = 
REAL_TO_DOUBLE(BgL_auxz00_1440); } 
{ /* Ieee/flonum.scm 367 */
obj_t BgL_auxz00_1448;
if(
REALP(BgL_r2z00_900))
{ /* Ieee/flonum.scm 367 */
BgL_auxz00_1448 = BgL_r2z00_900
; }  else 
{ 
obj_t BgL_auxz00_1451;
BgL_auxz00_1451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16381)), BGl_string1579z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_900); 
FAILURE(BgL_auxz00_1451,BFALSE,BFALSE);} 
BgL_r2z00_1180 = 
REAL_TO_DOUBLE(BgL_auxz00_1448); } 
BgL_auxz00_1439 = 
(BgL_r1z00_1179-BgL_r2z00_1180); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1439);} } 
}



/* *fl */
BGL_EXPORTED_DEF double BGl_za2flza2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_20, double BgL_r2z00_21)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 372 */
return 
(BgL_r1z00_20*BgL_r2z00_21);} 
}



/* _*fl */
obj_t BGl__za2flza2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_901, obj_t BgL_r1z00_902, obj_t BgL_r2z00_903)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 372 */
{ /* Ieee/flonum.scm 373 */
double BgL_auxz00_1459;
{ /* Ieee/flonum.scm 373 */
double BgL_r1z00_1181;double BgL_r2z00_1182;
{ /* Ieee/flonum.scm 373 */
obj_t BgL_auxz00_1460;
if(
REALP(BgL_r1z00_902))
{ /* Ieee/flonum.scm 373 */
BgL_auxz00_1460 = BgL_r1z00_902
; }  else 
{ 
obj_t BgL_auxz00_1463;
BgL_auxz00_1463 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16649)), BGl_string1580z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_902); 
FAILURE(BgL_auxz00_1463,BFALSE,BFALSE);} 
BgL_r1z00_1181 = 
REAL_TO_DOUBLE(BgL_auxz00_1460); } 
{ /* Ieee/flonum.scm 373 */
obj_t BgL_auxz00_1468;
if(
REALP(BgL_r2z00_903))
{ /* Ieee/flonum.scm 373 */
BgL_auxz00_1468 = BgL_r2z00_903
; }  else 
{ 
obj_t BgL_auxz00_1471;
BgL_auxz00_1471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16649)), BGl_string1580z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_903); 
FAILURE(BgL_auxz00_1471,BFALSE,BFALSE);} 
BgL_r2z00_1182 = 
REAL_TO_DOUBLE(BgL_auxz00_1468); } 
BgL_auxz00_1459 = 
(BgL_r1z00_1181*BgL_r2z00_1182); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1459);} } 
}



/* /fl */
BGL_EXPORTED_DEF double BGl_zf2flzf2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_22, double BgL_r2z00_23)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 378 */
return 
(BgL_r1z00_22/BgL_r2z00_23);} 
}



/* _/fl */
obj_t BGl__zf2flzf2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_904, obj_t BgL_r1z00_905, obj_t BgL_r2z00_906)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 378 */
{ /* Ieee/flonum.scm 379 */
double BgL_auxz00_1479;
{ /* Ieee/flonum.scm 379 */
double BgL_r1z00_1183;double BgL_r2z00_1184;
{ /* Ieee/flonum.scm 379 */
obj_t BgL_auxz00_1480;
if(
REALP(BgL_r1z00_905))
{ /* Ieee/flonum.scm 379 */
BgL_auxz00_1480 = BgL_r1z00_905
; }  else 
{ 
obj_t BgL_auxz00_1483;
BgL_auxz00_1483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16917)), BGl_string1581z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_905); 
FAILURE(BgL_auxz00_1483,BFALSE,BFALSE);} 
BgL_r1z00_1183 = 
REAL_TO_DOUBLE(BgL_auxz00_1480); } 
{ /* Ieee/flonum.scm 379 */
obj_t BgL_auxz00_1488;
if(
REALP(BgL_r2z00_906))
{ /* Ieee/flonum.scm 379 */
BgL_auxz00_1488 = BgL_r2z00_906
; }  else 
{ 
obj_t BgL_auxz00_1491;
BgL_auxz00_1491 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)16917)), BGl_string1581z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_906); 
FAILURE(BgL_auxz00_1491,BFALSE,BFALSE);} 
BgL_r2z00_1184 = 
REAL_TO_DOUBLE(BgL_auxz00_1488); } 
BgL_auxz00_1479 = 
(BgL_r1z00_1183/BgL_r2z00_1184); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1479);} } 
}



/* negfl */
BGL_EXPORTED_DEF double BGl_negflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_24)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 384 */
return 
NEG(BgL_r1z00_24);} 
}



/* _negfl */
obj_t BGl__negflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_907, obj_t BgL_r1z00_908)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 384 */
{ /* Ieee/flonum.scm 385 */
double BgL_auxz00_1499;
{ /* Ieee/flonum.scm 385 */
double BgL_r1z00_1185;
{ /* Ieee/flonum.scm 385 */
obj_t BgL_auxz00_1500;
if(
REALP(BgL_r1z00_908))
{ /* Ieee/flonum.scm 385 */
BgL_auxz00_1500 = BgL_r1z00_908
; }  else 
{ 
obj_t BgL_auxz00_1503;
BgL_auxz00_1503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17184)), BGl_string1582z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_908); 
FAILURE(BgL_auxz00_1503,BFALSE,BFALSE);} 
BgL_r1z00_1185 = 
REAL_TO_DOUBLE(BgL_auxz00_1500); } 
BgL_auxz00_1499 = 
NEG(BgL_r1z00_1185); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1499);} } 
}



/* maxfl */
BGL_EXPORTED_DEF double BGl_maxflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_25, obj_t BgL_rnz00_26)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 390 */
{ 
double BgL_maxz00_619;obj_t BgL_rnz00_620;
BgL_maxz00_619 = BgL_r1z00_25; 
BgL_rnz00_620 = BgL_rnz00_26; 
BgL_loopz00_618:
if(
NULLP(BgL_rnz00_620))
{ /* Ieee/flonum.scm 391 */
return BgL_maxz00_619;}  else 
{ 
obj_t BgL_rnz00_1529;double BgL_maxz00_1512;
{ /* Ieee/flonum.scm 391 */
double BgL_r1z00_631;
{ /* Ieee/flonum.scm 391 */
obj_t BgL_pairz00_630;
if(
PAIRP(BgL_rnz00_620))
{ /* Ieee/flonum.scm 391 */
BgL_pairz00_630 = BgL_rnz00_620; }  else 
{ 
obj_t BgL_auxz00_1515;
BgL_auxz00_1515 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17452)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_620); 
FAILURE(BgL_auxz00_1515,BFALSE,BFALSE);} 
{ /* Ieee/flonum.scm 391 */
obj_t BgL_auxz00_1519;
{ /* Ieee/flonum.scm 391 */
obj_t BgL_aux1456z00_1050;
BgL_aux1456z00_1050 = 
CAR(BgL_pairz00_630); 
if(
REALP(BgL_aux1456z00_1050))
{ /* Ieee/flonum.scm 391 */
BgL_auxz00_1519 = BgL_aux1456z00_1050
; }  else 
{ 
obj_t BgL_auxz00_1523;
BgL_auxz00_1523 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17452)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_aux1456z00_1050); 
FAILURE(BgL_auxz00_1523,BFALSE,BFALSE);} } 
BgL_r1z00_631 = 
REAL_TO_DOUBLE(BgL_auxz00_1519); } } 
BgL_maxz00_1512 = 
BGL_FL_MAX2(BgL_r1z00_631, BgL_maxz00_619); } 
{ /* Ieee/flonum.scm 391 */
obj_t BgL_pairz00_633;
if(
PAIRP(BgL_rnz00_620))
{ /* Ieee/flonum.scm 391 */
BgL_pairz00_633 = BgL_rnz00_620; }  else 
{ 
obj_t BgL_auxz00_1532;
BgL_auxz00_1532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17452)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_620); 
FAILURE(BgL_auxz00_1532,BFALSE,BFALSE);} 
BgL_rnz00_1529 = 
CDR(BgL_pairz00_633); } 
BgL_rnz00_620 = BgL_rnz00_1529; 
BgL_maxz00_619 = BgL_maxz00_1512; 
goto BgL_loopz00_618;} } } 
}



/* _maxfl */
obj_t BGl__maxflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_909, obj_t BgL_r1z00_910, obj_t BgL_rnz00_911)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 390 */
{ /* Ieee/flonum.scm 391 */
double BgL_auxz00_1537;
{ /* Ieee/flonum.scm 391 */
double BgL_auxz00_1538;
{ /* Ieee/flonum.scm 391 */
obj_t BgL_auxz00_1539;
if(
REALP(BgL_r1z00_910))
{ /* Ieee/flonum.scm 391 */
BgL_auxz00_1539 = BgL_r1z00_910
; }  else 
{ 
obj_t BgL_auxz00_1542;
BgL_auxz00_1542 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17452)), BGl_string1585z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_910); 
FAILURE(BgL_auxz00_1542,BFALSE,BFALSE);} 
BgL_auxz00_1538 = 
REAL_TO_DOUBLE(BgL_auxz00_1539); } 
BgL_auxz00_1537 = 
BGl_maxflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1538, BgL_rnz00_911); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1537);} } 
}



/* max-2fl */
BGL_EXPORTED_DEF double BGl_maxzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_27, double BgL_r2z00_28)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 400 */
return 
BGL_FL_MAX2(BgL_r1z00_27, BgL_r2z00_28);} 
}



/* _max-2fl */
obj_t BGl__maxzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_912, obj_t BgL_r1z00_913, obj_t BgL_r2z00_914)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 400 */
{ /* Ieee/flonum.scm 401 */
double BgL_auxz00_1550;
{ /* Ieee/flonum.scm 401 */
double BgL_r1z00_1186;double BgL_r2z00_1187;
{ /* Ieee/flonum.scm 401 */
obj_t BgL_auxz00_1551;
if(
REALP(BgL_r1z00_913))
{ /* Ieee/flonum.scm 401 */
BgL_auxz00_1551 = BgL_r1z00_913
; }  else 
{ 
obj_t BgL_auxz00_1554;
BgL_auxz00_1554 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17819)), BGl_string1586z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_913); 
FAILURE(BgL_auxz00_1554,BFALSE,BFALSE);} 
BgL_r1z00_1186 = 
REAL_TO_DOUBLE(BgL_auxz00_1551); } 
{ /* Ieee/flonum.scm 401 */
obj_t BgL_auxz00_1559;
if(
REALP(BgL_r2z00_914))
{ /* Ieee/flonum.scm 401 */
BgL_auxz00_1559 = BgL_r2z00_914
; }  else 
{ 
obj_t BgL_auxz00_1562;
BgL_auxz00_1562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)17819)), BGl_string1586z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_914); 
FAILURE(BgL_auxz00_1562,BFALSE,BFALSE);} 
BgL_r2z00_1187 = 
REAL_TO_DOUBLE(BgL_auxz00_1559); } 
BgL_auxz00_1550 = 
BGL_FL_MAX2(BgL_r1z00_1186, BgL_r2z00_1187); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1550);} } 
}



/* min-2fl */
BGL_EXPORTED_DEF double BGl_minzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_29, double BgL_r2z00_30)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 406 */
return 
BGL_FL_MIN2(BgL_r1z00_29, BgL_r2z00_30);} 
}



/* _min-2fl */
obj_t BGl__minzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_915, obj_t BgL_r1z00_916, obj_t BgL_r2z00_917)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 406 */
{ /* Ieee/flonum.scm 407 */
double BgL_auxz00_1570;
{ /* Ieee/flonum.scm 407 */
double BgL_r1z00_1188;double BgL_r2z00_1189;
{ /* Ieee/flonum.scm 407 */
obj_t BgL_auxz00_1571;
if(
REALP(BgL_r1z00_916))
{ /* Ieee/flonum.scm 407 */
BgL_auxz00_1571 = BgL_r1z00_916
; }  else 
{ 
obj_t BgL_auxz00_1574;
BgL_auxz00_1574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18093)), BGl_string1587z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_916); 
FAILURE(BgL_auxz00_1574,BFALSE,BFALSE);} 
BgL_r1z00_1188 = 
REAL_TO_DOUBLE(BgL_auxz00_1571); } 
{ /* Ieee/flonum.scm 407 */
obj_t BgL_auxz00_1579;
if(
REALP(BgL_r2z00_917))
{ /* Ieee/flonum.scm 407 */
BgL_auxz00_1579 = BgL_r2z00_917
; }  else 
{ 
obj_t BgL_auxz00_1582;
BgL_auxz00_1582 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18093)), BGl_string1587z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_917); 
FAILURE(BgL_auxz00_1582,BFALSE,BFALSE);} 
BgL_r2z00_1189 = 
REAL_TO_DOUBLE(BgL_auxz00_1579); } 
BgL_auxz00_1570 = 
BGL_FL_MIN2(BgL_r1z00_1188, BgL_r2z00_1189); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1570);} } 
}



/* minfl */
BGL_EXPORTED_DEF double BGl_minflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_31, obj_t BgL_rnz00_32)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 412 */
{ 
double BgL_minz00_655;obj_t BgL_rnz00_656;
BgL_minz00_655 = BgL_r1z00_31; 
BgL_rnz00_656 = BgL_rnz00_32; 
BgL_loopz00_654:
if(
NULLP(BgL_rnz00_656))
{ /* Ieee/flonum.scm 413 */
return BgL_minz00_655;}  else 
{ 
obj_t BgL_rnz00_1608;double BgL_minz00_1591;
{ /* Ieee/flonum.scm 413 */
double BgL_r1z00_667;
{ /* Ieee/flonum.scm 413 */
obj_t BgL_pairz00_666;
if(
PAIRP(BgL_rnz00_656))
{ /* Ieee/flonum.scm 413 */
BgL_pairz00_666 = BgL_rnz00_656; }  else 
{ 
obj_t BgL_auxz00_1594;
BgL_auxz00_1594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18363)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_656); 
FAILURE(BgL_auxz00_1594,BFALSE,BFALSE);} 
{ /* Ieee/flonum.scm 413 */
obj_t BgL_auxz00_1598;
{ /* Ieee/flonum.scm 413 */
obj_t BgL_aux1472z00_1066;
BgL_aux1472z00_1066 = 
CAR(BgL_pairz00_666); 
if(
REALP(BgL_aux1472z00_1066))
{ /* Ieee/flonum.scm 413 */
BgL_auxz00_1598 = BgL_aux1472z00_1066
; }  else 
{ 
obj_t BgL_auxz00_1602;
BgL_auxz00_1602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18363)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_aux1472z00_1066); 
FAILURE(BgL_auxz00_1602,BFALSE,BFALSE);} } 
BgL_r1z00_667 = 
REAL_TO_DOUBLE(BgL_auxz00_1598); } } 
BgL_minz00_1591 = 
BGL_FL_MIN2(BgL_r1z00_667, BgL_minz00_655); } 
{ /* Ieee/flonum.scm 413 */
obj_t BgL_pairz00_669;
if(
PAIRP(BgL_rnz00_656))
{ /* Ieee/flonum.scm 413 */
BgL_pairz00_669 = BgL_rnz00_656; }  else 
{ 
obj_t BgL_auxz00_1611;
BgL_auxz00_1611 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18363)), BGl_string1583z00zz__r4_numbers_6_5_flonumz00, BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_rnz00_656); 
FAILURE(BgL_auxz00_1611,BFALSE,BFALSE);} 
BgL_rnz00_1608 = 
CDR(BgL_pairz00_669); } 
BgL_rnz00_656 = BgL_rnz00_1608; 
BgL_minz00_655 = BgL_minz00_1591; 
goto BgL_loopz00_654;} } } 
}



/* _minfl */
obj_t BGl__minflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_918, obj_t BgL_r1z00_919, obj_t BgL_rnz00_920)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 412 */
{ /* Ieee/flonum.scm 413 */
double BgL_auxz00_1616;
{ /* Ieee/flonum.scm 413 */
double BgL_auxz00_1617;
{ /* Ieee/flonum.scm 413 */
obj_t BgL_auxz00_1618;
if(
REALP(BgL_r1z00_919))
{ /* Ieee/flonum.scm 413 */
BgL_auxz00_1618 = BgL_r1z00_919
; }  else 
{ 
obj_t BgL_auxz00_1621;
BgL_auxz00_1621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18363)), BGl_string1588z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_919); 
FAILURE(BgL_auxz00_1621,BFALSE,BFALSE);} 
BgL_auxz00_1617 = 
REAL_TO_DOUBLE(BgL_auxz00_1618); } 
BgL_auxz00_1616 = 
BGl_minflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1617, BgL_rnz00_920); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1616);} } 
}



/* absfl */
BGL_EXPORTED_DEF double BGl_absflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_33)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 422 */
return 
fabs(BgL_rz00_33);} 
}



/* _absfl */
obj_t BGl__absflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_921, obj_t BgL_rz00_922)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 422 */
{ /* Ieee/flonum.scm 423 */
double BgL_auxz00_1629;
{ /* Ieee/flonum.scm 423 */
double BgL_rz00_1190;
{ /* Ieee/flonum.scm 423 */
obj_t BgL_auxz00_1630;
if(
REALP(BgL_rz00_922))
{ /* Ieee/flonum.scm 423 */
BgL_auxz00_1630 = BgL_rz00_922
; }  else 
{ 
obj_t BgL_auxz00_1633;
BgL_auxz00_1633 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18727)), BGl_string1589z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_922); 
FAILURE(BgL_auxz00_1633,BFALSE,BFALSE);} 
BgL_rz00_1190 = 
REAL_TO_DOUBLE(BgL_auxz00_1630); } 
BgL_auxz00_1629 = 
fabs(BgL_rz00_1190); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1629);} } 
}



/* floorfl */
BGL_EXPORTED_DEF double BGl_floorflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_34)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 428 */
return 
floor(BgL_rz00_34);} 
}



/* _floorfl */
obj_t BGl__floorflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_923, obj_t BgL_rz00_924)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 428 */
{ /* Ieee/flonum.scm 429 */
double BgL_auxz00_1641;
{ /* Ieee/flonum.scm 429 */
double BgL_rz00_1191;
{ /* Ieee/flonum.scm 429 */
obj_t BgL_auxz00_1642;
if(
REALP(BgL_rz00_924))
{ /* Ieee/flonum.scm 429 */
BgL_auxz00_1642 = BgL_rz00_924
; }  else 
{ 
obj_t BgL_auxz00_1645;
BgL_auxz00_1645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)18993)), BGl_string1590z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_924); 
FAILURE(BgL_auxz00_1645,BFALSE,BFALSE);} 
BgL_rz00_1191 = 
REAL_TO_DOUBLE(BgL_auxz00_1642); } 
BgL_auxz00_1641 = 
floor(BgL_rz00_1191); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1641);} } 
}



/* ceilingfl */
BGL_EXPORTED_DEF double BGl_ceilingflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_35)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 434 */
return 
ceil(BgL_rz00_35);} 
}



/* _ceilingfl */
obj_t BGl__ceilingflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_925, obj_t BgL_rz00_926)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 434 */
{ /* Ieee/flonum.scm 435 */
double BgL_auxz00_1653;
{ /* Ieee/flonum.scm 435 */
double BgL_rz00_1192;
{ /* Ieee/flonum.scm 435 */
obj_t BgL_auxz00_1654;
if(
REALP(BgL_rz00_926))
{ /* Ieee/flonum.scm 435 */
BgL_auxz00_1654 = BgL_rz00_926
; }  else 
{ 
obj_t BgL_auxz00_1657;
BgL_auxz00_1657 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19261)), BGl_string1591z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_926); 
FAILURE(BgL_auxz00_1657,BFALSE,BFALSE);} 
BgL_rz00_1192 = 
REAL_TO_DOUBLE(BgL_auxz00_1654); } 
BgL_auxz00_1653 = 
ceil(BgL_rz00_1192); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1653);} } 
}



/* truncatefl */
BGL_EXPORTED_DEF double BGl_truncateflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_36)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 440 */
if(
(BgL_rz00_36<((double)0.0)))
{ /* Ieee/flonum.scm 441 */
return 
ceil(BgL_rz00_36);}  else 
{ /* Ieee/flonum.scm 441 */
return 
floor(BgL_rz00_36);} } 
}



/* _truncatefl */
obj_t BGl__truncateflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_927, obj_t BgL_rz00_928)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 440 */
{ /* Ieee/flonum.scm 441 */
double BgL_auxz00_1668;
{ /* Ieee/flonum.scm 441 */
double BgL_rz00_1193;
{ /* Ieee/flonum.scm 441 */
obj_t BgL_auxz00_1669;
if(
REALP(BgL_rz00_928))
{ /* Ieee/flonum.scm 441 */
BgL_auxz00_1669 = BgL_rz00_928
; }  else 
{ 
obj_t BgL_auxz00_1672;
BgL_auxz00_1672 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19532)), BGl_string1592z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_928); 
FAILURE(BgL_auxz00_1672,BFALSE,BFALSE);} 
BgL_rz00_1193 = 
REAL_TO_DOUBLE(BgL_auxz00_1669); } 
if(
(BgL_rz00_1193<((double)0.0)))
{ /* Ieee/flonum.scm 441 */
BgL_auxz00_1668 = 
ceil(BgL_rz00_1193)
; }  else 
{ /* Ieee/flonum.scm 441 */
BgL_auxz00_1668 = 
floor(BgL_rz00_1193)
; } } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1668);} } 
}



/* roundfl */
BGL_EXPORTED_DEF double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_37)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 448 */
return 
BGL_FL_ROUND(BgL_rz00_37);} 
}



/* _roundfl */
obj_t BGl__roundflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_929, obj_t BgL_rz00_930)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 448 */
{ /* Ieee/flonum.scm 449 */
double BgL_auxz00_1683;
{ /* Ieee/flonum.scm 449 */
double BgL_rz00_1194;
{ /* Ieee/flonum.scm 449 */
obj_t BgL_auxz00_1684;
if(
REALP(BgL_rz00_930))
{ /* Ieee/flonum.scm 449 */
BgL_auxz00_1684 = BgL_rz00_930
; }  else 
{ 
obj_t BgL_auxz00_1687;
BgL_auxz00_1687 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)19840)), BGl_string1593z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_930); 
FAILURE(BgL_auxz00_1687,BFALSE,BFALSE);} 
BgL_rz00_1194 = 
REAL_TO_DOUBLE(BgL_auxz00_1684); } 
BgL_auxz00_1683 = 
BGL_FL_ROUND(BgL_rz00_1194); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1683);} } 
}



/* remainderfl */
BGL_EXPORTED_DEF double BGl_remainderflz00zz__r4_numbers_6_5_flonumz00(double BgL_n1z00_38, double BgL_n2z00_39)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 454 */
return 
fmod(BgL_n1z00_38, BgL_n2z00_39);} 
}



/* _remainderfl */
obj_t BGl__remainderflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_931, obj_t BgL_n1z00_932, obj_t BgL_n2z00_933)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 454 */
{ /* Ieee/flonum.scm 455 */
double BgL_auxz00_1695;
{ /* Ieee/flonum.scm 455 */
double BgL_n1z00_1195;double BgL_n2z00_1196;
{ /* Ieee/flonum.scm 455 */
obj_t BgL_auxz00_1696;
if(
REALP(BgL_n1z00_932))
{ /* Ieee/flonum.scm 455 */
BgL_auxz00_1696 = BgL_n1z00_932
; }  else 
{ 
obj_t BgL_auxz00_1699;
BgL_auxz00_1699 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20116)), BGl_string1594z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_n1z00_932); 
FAILURE(BgL_auxz00_1699,BFALSE,BFALSE);} 
BgL_n1z00_1195 = 
REAL_TO_DOUBLE(BgL_auxz00_1696); } 
{ /* Ieee/flonum.scm 455 */
obj_t BgL_auxz00_1704;
if(
REALP(BgL_n2z00_933))
{ /* Ieee/flonum.scm 455 */
BgL_auxz00_1704 = BgL_n2z00_933
; }  else 
{ 
obj_t BgL_auxz00_1707;
BgL_auxz00_1707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20116)), BGl_string1594z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_n2z00_933); 
FAILURE(BgL_auxz00_1707,BFALSE,BFALSE);} 
BgL_n2z00_1196 = 
REAL_TO_DOUBLE(BgL_auxz00_1704); } 
BgL_auxz00_1695 = 
fmod(BgL_n1z00_1195, BgL_n2z00_1196); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1695);} } 
}



/* expfl */
BGL_EXPORTED_DEF double BGl_expflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_40)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 460 */
return 
exp(BgL_xz00_40);} 
}



/* _expfl */
obj_t BGl__expflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_934, obj_t BgL_xz00_935)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 460 */
{ /* Ieee/flonum.scm 461 */
double BgL_auxz00_1715;
{ /* Ieee/flonum.scm 461 */
double BgL_xz00_1197;
{ /* Ieee/flonum.scm 461 */
obj_t BgL_auxz00_1716;
if(
REALP(BgL_xz00_935))
{ /* Ieee/flonum.scm 461 */
BgL_auxz00_1716 = BgL_xz00_935
; }  else 
{ 
obj_t BgL_auxz00_1719;
BgL_auxz00_1719 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20383)), BGl_string1595z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_935); 
FAILURE(BgL_auxz00_1719,BFALSE,BFALSE);} 
BgL_xz00_1197 = 
REAL_TO_DOUBLE(BgL_auxz00_1716); } 
BgL_auxz00_1715 = 
exp(BgL_xz00_1197); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1715);} } 
}



/* logfl */
BGL_EXPORTED_DEF double BGl_logflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_41)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 466 */
return 
log(BgL_xz00_41);} 
}



/* _logfl */
obj_t BGl__logflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_936, obj_t BgL_xz00_937)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 466 */
{ /* Ieee/flonum.scm 467 */
double BgL_auxz00_1727;
{ /* Ieee/flonum.scm 467 */
double BgL_xz00_1198;
{ /* Ieee/flonum.scm 467 */
obj_t BgL_auxz00_1728;
if(
REALP(BgL_xz00_937))
{ /* Ieee/flonum.scm 467 */
BgL_auxz00_1728 = BgL_xz00_937
; }  else 
{ 
obj_t BgL_auxz00_1731;
BgL_auxz00_1731 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20645)), BGl_string1596z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_937); 
FAILURE(BgL_auxz00_1731,BFALSE,BFALSE);} 
BgL_xz00_1198 = 
REAL_TO_DOUBLE(BgL_auxz00_1728); } 
BgL_auxz00_1727 = 
log(BgL_xz00_1198); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1727);} } 
}



/* sinfl */
BGL_EXPORTED_DEF double BGl_sinflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_42)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 472 */
return 
sin(BgL_xz00_42);} 
}



/* _sinfl */
obj_t BGl__sinflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_938, obj_t BgL_xz00_939)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 472 */
{ /* Ieee/flonum.scm 473 */
double BgL_auxz00_1739;
{ /* Ieee/flonum.scm 473 */
double BgL_xz00_1199;
{ /* Ieee/flonum.scm 473 */
obj_t BgL_auxz00_1740;
if(
REALP(BgL_xz00_939))
{ /* Ieee/flonum.scm 473 */
BgL_auxz00_1740 = BgL_xz00_939
; }  else 
{ 
obj_t BgL_auxz00_1743;
BgL_auxz00_1743 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)20908)), BGl_string1597z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_939); 
FAILURE(BgL_auxz00_1743,BFALSE,BFALSE);} 
BgL_xz00_1199 = 
REAL_TO_DOUBLE(BgL_auxz00_1740); } 
BgL_auxz00_1739 = 
sin(BgL_xz00_1199); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1739);} } 
}



/* cosfl */
BGL_EXPORTED_DEF double BGl_cosflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_43)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 478 */
return 
cos(BgL_xz00_43);} 
}



/* _cosfl */
obj_t BGl__cosflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_940, obj_t BgL_xz00_941)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 478 */
{ /* Ieee/flonum.scm 479 */
double BgL_auxz00_1751;
{ /* Ieee/flonum.scm 479 */
double BgL_xz00_1200;
{ /* Ieee/flonum.scm 479 */
obj_t BgL_auxz00_1752;
if(
REALP(BgL_xz00_941))
{ /* Ieee/flonum.scm 479 */
BgL_auxz00_1752 = BgL_xz00_941
; }  else 
{ 
obj_t BgL_auxz00_1755;
BgL_auxz00_1755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21170)), BGl_string1598z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_941); 
FAILURE(BgL_auxz00_1755,BFALSE,BFALSE);} 
BgL_xz00_1200 = 
REAL_TO_DOUBLE(BgL_auxz00_1752); } 
BgL_auxz00_1751 = 
cos(BgL_xz00_1200); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1751);} } 
}



/* tanfl */
BGL_EXPORTED_DEF double BGl_tanflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_44)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 484 */
return 
tan(BgL_xz00_44);} 
}



/* _tanfl */
obj_t BGl__tanflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_942, obj_t BgL_xz00_943)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 484 */
{ /* Ieee/flonum.scm 485 */
double BgL_auxz00_1763;
{ /* Ieee/flonum.scm 485 */
double BgL_xz00_1201;
{ /* Ieee/flonum.scm 485 */
obj_t BgL_auxz00_1764;
if(
REALP(BgL_xz00_943))
{ /* Ieee/flonum.scm 485 */
BgL_auxz00_1764 = BgL_xz00_943
; }  else 
{ 
obj_t BgL_auxz00_1767;
BgL_auxz00_1767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21432)), BGl_string1599z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_943); 
FAILURE(BgL_auxz00_1767,BFALSE,BFALSE);} 
BgL_xz00_1201 = 
REAL_TO_DOUBLE(BgL_auxz00_1764); } 
BgL_auxz00_1763 = 
tan(BgL_xz00_1201); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1763);} } 
}



/* asinfl */
BGL_EXPORTED_DEF double BGl_asinflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_45)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 490 */
return 
asin(BgL_xz00_45);} 
}



/* _asinfl */
obj_t BGl__asinflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_944, obj_t BgL_xz00_945)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 490 */
{ /* Ieee/flonum.scm 491 */
double BgL_auxz00_1775;
{ /* Ieee/flonum.scm 491 */
double BgL_xz00_1202;
{ /* Ieee/flonum.scm 491 */
obj_t BgL_auxz00_1776;
if(
REALP(BgL_xz00_945))
{ /* Ieee/flonum.scm 491 */
BgL_auxz00_1776 = BgL_xz00_945
; }  else 
{ 
obj_t BgL_auxz00_1779;
BgL_auxz00_1779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21695)), BGl_string1600z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_945); 
FAILURE(BgL_auxz00_1779,BFALSE,BFALSE);} 
BgL_xz00_1202 = 
REAL_TO_DOUBLE(BgL_auxz00_1776); } 
BgL_auxz00_1775 = 
asin(BgL_xz00_1202); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1775);} } 
}



/* acosfl */
BGL_EXPORTED_DEF double BGl_acosflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_46)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 496 */
return 
acos(BgL_xz00_46);} 
}



/* _acosfl */
obj_t BGl__acosflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_946, obj_t BgL_xz00_947)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 496 */
{ /* Ieee/flonum.scm 497 */
double BgL_auxz00_1787;
{ /* Ieee/flonum.scm 497 */
double BgL_xz00_1203;
{ /* Ieee/flonum.scm 497 */
obj_t BgL_auxz00_1788;
if(
REALP(BgL_xz00_947))
{ /* Ieee/flonum.scm 497 */
BgL_auxz00_1788 = BgL_xz00_947
; }  else 
{ 
obj_t BgL_auxz00_1791;
BgL_auxz00_1791 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)21959)), BGl_string1601z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_947); 
FAILURE(BgL_auxz00_1791,BFALSE,BFALSE);} 
BgL_xz00_1203 = 
REAL_TO_DOUBLE(BgL_auxz00_1788); } 
BgL_auxz00_1787 = 
acos(BgL_xz00_1203); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1787);} } 
}



/* atanfl */
BGL_EXPORTED_DEF double BGl_atanflz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_47, obj_t BgL_yz00_48)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 502 */
if(
NULLP(BgL_yz00_48))
{ /* Ieee/flonum.scm 503 */
return 
atan(BgL_xz00_47);}  else 
{ /* Ieee/flonum.scm 503 */
obj_t BgL_yz00_697;
{ /* Ieee/flonum.scm 503 */
obj_t BgL_pairz00_699;
if(
PAIRP(BgL_yz00_48))
{ /* Ieee/flonum.scm 503 */
BgL_pairz00_699 = BgL_yz00_48; }  else 
{ 
obj_t BgL_auxz00_1803;
BgL_auxz00_1803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22220)), BGl_string1602z00zz__r4_numbers_6_5_flonumz00, BGl_string1584z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_48); 
FAILURE(BgL_auxz00_1803,BFALSE,BFALSE);} 
BgL_yz00_697 = 
CAR(BgL_pairz00_699); } 
{ /* Ieee/flonum.scm 503 */
double BgL_res1401z00_711;
{ /* Ieee/flonum.scm 503 */
double BgL_yz00_701;
{ /* Ieee/flonum.scm 503 */
obj_t BgL_auxz00_1808;
if(
REALP(BgL_yz00_697))
{ /* Ieee/flonum.scm 503 */
BgL_auxz00_1808 = BgL_yz00_697
; }  else 
{ 
obj_t BgL_auxz00_1811;
BgL_auxz00_1811 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22220)), BGl_string1602z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_697); 
FAILURE(BgL_auxz00_1811,BFALSE,BFALSE);} 
BgL_yz00_701 = 
REAL_TO_DOUBLE(BgL_auxz00_1808); } 
{ /* Ieee/flonum.scm 503 */
bool_t BgL_testz00_1816;
if(
(BgL_xz00_47==((double)0.0)))
{ /* Ieee/flonum.scm 503 */
BgL_testz00_1816 = 
(BgL_yz00_701==((double)0.0))
; }  else 
{ /* Ieee/flonum.scm 503 */
BgL_testz00_1816 = ((bool_t)0)
; } 
if(BgL_testz00_1816)
{ /* Ieee/flonum.scm 503 */
obj_t BgL_procz00_704;obj_t BgL_msgz00_705;
BgL_procz00_704 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1602z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_705 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00)); 
the_failure(BgL_procz00_704, BgL_msgz00_705, BGl_real1604z00zz__r4_numbers_6_5_flonumz00); 
BgL_res1401z00_711 = ((double)0.0); }  else 
{ /* Ieee/flonum.scm 503 */
BgL_res1401z00_711 = 
atan2(BgL_xz00_47, BgL_yz00_701); } } } 
return BgL_res1401z00_711;} } } 
}



/* _atanfl */
obj_t BGl__atanflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_948, obj_t BgL_xz00_949, obj_t BgL_yz00_950)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 502 */
{ /* Ieee/flonum.scm 503 */
double BgL_auxz00_1826;
{ /* Ieee/flonum.scm 503 */
double BgL_auxz00_1827;
{ /* Ieee/flonum.scm 503 */
obj_t BgL_auxz00_1828;
if(
REALP(BgL_xz00_949))
{ /* Ieee/flonum.scm 503 */
BgL_auxz00_1828 = BgL_xz00_949
; }  else 
{ 
obj_t BgL_auxz00_1831;
BgL_auxz00_1831 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22220)), BGl_string1605z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_949); 
FAILURE(BgL_auxz00_1831,BFALSE,BFALSE);} 
BgL_auxz00_1827 = 
REAL_TO_DOUBLE(BgL_auxz00_1828); } 
BgL_auxz00_1826 = 
BGl_atanflz00zz__r4_numbers_6_5_flonumz00(BgL_auxz00_1827, BgL_yz00_950); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1826);} } 
}



/* atan-1fl */
BGL_EXPORTED_DEF double BGl_atanzd21flzd2zz__r4_numbers_6_5_flonumz00(double BgL_xz00_49)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 511 */
return 
atan(BgL_xz00_49);} 
}



/* _atan-1fl */
obj_t BGl__atanzd21flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_951, obj_t BgL_xz00_952)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 511 */
{ /* Ieee/flonum.scm 512 */
double BgL_auxz00_1839;
{ /* Ieee/flonum.scm 512 */
double BgL_xz00_1204;
{ /* Ieee/flonum.scm 512 */
obj_t BgL_auxz00_1840;
if(
REALP(BgL_xz00_952))
{ /* Ieee/flonum.scm 512 */
BgL_auxz00_1840 = BgL_xz00_952
; }  else 
{ 
obj_t BgL_auxz00_1843;
BgL_auxz00_1843 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22553)), BGl_string1606z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_952); 
FAILURE(BgL_auxz00_1843,BFALSE,BFALSE);} 
BgL_xz00_1204 = 
REAL_TO_DOUBLE(BgL_auxz00_1840); } 
BgL_auxz00_1839 = 
atan(BgL_xz00_1204); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1839);} } 
}



/* atan-2fl */
BGL_EXPORTED_DEF double BGl_atanzd22flzd2zz__r4_numbers_6_5_flonumz00(double BgL_xz00_50, double BgL_yz00_51)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 517 */
{ /* Ieee/flonum.scm 518 */
bool_t BgL_testz00_1850;
if(
(BgL_xz00_50==((double)0.0)))
{ /* Ieee/flonum.scm 518 */
BgL_testz00_1850 = 
(BgL_yz00_51==((double)0.0))
; }  else 
{ /* Ieee/flonum.scm 518 */
BgL_testz00_1850 = ((bool_t)0)
; } 
if(BgL_testz00_1850)
{ /* Ieee/flonum.scm 518 */
obj_t BgL_procz00_1205;obj_t BgL_msgz00_1206;
BgL_procz00_1205 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1602z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1206 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00)); 
the_failure(BgL_procz00_1205, BgL_msgz00_1206, BGl_real1604z00zz__r4_numbers_6_5_flonumz00); 
return ((double)0.0);}  else 
{ /* Ieee/flonum.scm 518 */
return 
atan2(BgL_xz00_50, BgL_yz00_51);} } } 
}



/* _atan-2fl */
obj_t BGl__atanzd22flzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_953, obj_t BgL_xz00_954, obj_t BgL_yz00_955)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 517 */
{ /* Ieee/flonum.scm 518 */
double BgL_auxz00_1860;
{ /* Ieee/flonum.scm 518 */
double BgL_xz00_1208;double BgL_yz00_1209;
{ /* Ieee/flonum.scm 518 */
obj_t BgL_auxz00_1861;
if(
REALP(BgL_xz00_954))
{ /* Ieee/flonum.scm 518 */
BgL_auxz00_1861 = BgL_xz00_954
; }  else 
{ 
obj_t BgL_auxz00_1864;
BgL_auxz00_1864 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22830)), BGl_string1607z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_954); 
FAILURE(BgL_auxz00_1864,BFALSE,BFALSE);} 
BgL_xz00_1208 = 
REAL_TO_DOUBLE(BgL_auxz00_1861); } 
{ /* Ieee/flonum.scm 518 */
obj_t BgL_auxz00_1869;
if(
REALP(BgL_yz00_955))
{ /* Ieee/flonum.scm 518 */
BgL_auxz00_1869 = BgL_yz00_955
; }  else 
{ 
obj_t BgL_auxz00_1872;
BgL_auxz00_1872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)22830)), BGl_string1607z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_955); 
FAILURE(BgL_auxz00_1872,BFALSE,BFALSE);} 
BgL_yz00_1209 = 
REAL_TO_DOUBLE(BgL_auxz00_1869); } 
{ /* Ieee/flonum.scm 518 */
bool_t BgL_testz00_1877;
if(
(BgL_xz00_1208==((double)0.0)))
{ /* Ieee/flonum.scm 518 */
BgL_testz00_1877 = 
(BgL_yz00_1209==((double)0.0))
; }  else 
{ /* Ieee/flonum.scm 518 */
BgL_testz00_1877 = ((bool_t)0)
; } 
if(BgL_testz00_1877)
{ /* Ieee/flonum.scm 518 */
obj_t BgL_procz00_1210;obj_t BgL_msgz00_1211;
BgL_procz00_1210 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1602z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1211 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00)); 
the_failure(BgL_procz00_1210, BgL_msgz00_1211, BGl_real1604z00zz__r4_numbers_6_5_flonumz00); 
BgL_auxz00_1860 = ((double)0.0); }  else 
{ /* Ieee/flonum.scm 518 */
BgL_auxz00_1860 = 
atan2(BgL_xz00_1208, BgL_yz00_1209)
; } } } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1860);} } 
}



/* atan-2fl-ur */
BGL_EXPORTED_DEF double BGl_atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(double BgL_xz00_52, double BgL_yz00_53)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 535 */
return 
atan2(BgL_xz00_52, BgL_yz00_53);} 
}



/* _atan-2fl-ur */
obj_t BGl__atanzd22flzd2urz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_956, obj_t BgL_xz00_957, obj_t BgL_yz00_958)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 535 */
{ /* Ieee/flonum.scm 536 */
double BgL_auxz00_1889;
{ /* Ieee/flonum.scm 536 */
double BgL_xz00_1213;double BgL_yz00_1214;
{ /* Ieee/flonum.scm 536 */
obj_t BgL_auxz00_1890;
if(
REALP(BgL_xz00_957))
{ /* Ieee/flonum.scm 536 */
BgL_auxz00_1890 = BgL_xz00_957
; }  else 
{ 
obj_t BgL_auxz00_1893;
BgL_auxz00_1893 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23460)), BGl_string1608z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_xz00_957); 
FAILURE(BgL_auxz00_1893,BFALSE,BFALSE);} 
BgL_xz00_1213 = 
REAL_TO_DOUBLE(BgL_auxz00_1890); } 
{ /* Ieee/flonum.scm 536 */
obj_t BgL_auxz00_1898;
if(
REALP(BgL_yz00_958))
{ /* Ieee/flonum.scm 536 */
BgL_auxz00_1898 = BgL_yz00_958
; }  else 
{ 
obj_t BgL_auxz00_1901;
BgL_auxz00_1901 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23460)), BGl_string1608z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_yz00_958); 
FAILURE(BgL_auxz00_1901,BFALSE,BFALSE);} 
BgL_yz00_1214 = 
REAL_TO_DOUBLE(BgL_auxz00_1898); } 
BgL_auxz00_1889 = 
atan2(BgL_xz00_1213, BgL_yz00_1214); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1889);} } 
}



/* sqrtfl */
BGL_EXPORTED_DEF double BGl_sqrtflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_54)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 541 */
if(
(BgL_rz00_54<((double)0.0)))
{ /* Ieee/flonum.scm 542 */
obj_t BgL_procz00_1215;obj_t BgL_msgz00_1216;obj_t BgL_objz00_1217;
BgL_procz00_1215 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1609z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1216 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00)); 
BgL_objz00_1217 = 
DOUBLE_TO_REAL(BgL_rz00_54); 
BGl_errorz00zz__errorz00(BgL_procz00_1215, BgL_msgz00_1216, BgL_objz00_1217); 
return ((double)0.0);}  else 
{ /* Ieee/flonum.scm 542 */
return 
sqrt(BgL_rz00_54);} } 
}



/* _sqrtfl */
obj_t BGl__sqrtflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_959, obj_t BgL_rz00_960)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 541 */
{ /* Ieee/flonum.scm 542 */
double BgL_auxz00_1917;
{ /* Ieee/flonum.scm 542 */
double BgL_rz00_1218;
{ /* Ieee/flonum.scm 542 */
obj_t BgL_auxz00_1918;
if(
REALP(BgL_rz00_960))
{ /* Ieee/flonum.scm 542 */
BgL_auxz00_1918 = BgL_rz00_960
; }  else 
{ 
obj_t BgL_auxz00_1921;
BgL_auxz00_1921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)23727)), BGl_string1610z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_960); 
FAILURE(BgL_auxz00_1921,BFALSE,BFALSE);} 
BgL_rz00_1218 = 
REAL_TO_DOUBLE(BgL_auxz00_1918); } 
if(
(BgL_rz00_1218<((double)0.0)))
{ /* Ieee/flonum.scm 542 */
obj_t BgL_procz00_1219;obj_t BgL_msgz00_1220;obj_t BgL_objz00_1221;
BgL_procz00_1219 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1609z00zz__r4_numbers_6_5_flonumz00)); 
BgL_msgz00_1220 = 
string_to_bstring(
BSTRING_TO_STRING(BGl_string1603z00zz__r4_numbers_6_5_flonumz00)); 
BgL_objz00_1221 = 
DOUBLE_TO_REAL(BgL_rz00_1218); 
BGl_errorz00zz__errorz00(BgL_procz00_1219, BgL_msgz00_1220, BgL_objz00_1221); 
BgL_auxz00_1917 = ((double)0.0); }  else 
{ /* Ieee/flonum.scm 542 */
BgL_auxz00_1917 = 
sqrt(BgL_rz00_1218)
; } } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1917);} } 
}



/* sqrtfl-ur */
BGL_EXPORTED_DEF double BGl_sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(double BgL_rz00_55)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 554 */
return 
sqrt(BgL_rz00_55);} 
}



/* _sqrtfl-ur */
obj_t BGl__sqrtflzd2urzd2zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_961, obj_t BgL_rz00_962)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 554 */
{ /* Ieee/flonum.scm 555 */
double BgL_auxz00_1937;
{ /* Ieee/flonum.scm 555 */
double BgL_rz00_1222;
{ /* Ieee/flonum.scm 555 */
obj_t BgL_auxz00_1938;
if(
REALP(BgL_rz00_962))
{ /* Ieee/flonum.scm 555 */
BgL_auxz00_1938 = BgL_rz00_962
; }  else 
{ 
obj_t BgL_auxz00_1941;
BgL_auxz00_1941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24207)), BGl_string1611z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_962); 
FAILURE(BgL_auxz00_1941,BFALSE,BFALSE);} 
BgL_rz00_1222 = 
REAL_TO_DOUBLE(BgL_auxz00_1938); } 
BgL_auxz00_1937 = 
sqrt(BgL_rz00_1222); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1937);} } 
}



/* exptfl */
BGL_EXPORTED_DEF double BGl_exptflz00zz__r4_numbers_6_5_flonumz00(double BgL_r1z00_56, double BgL_r2z00_57)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 560 */
return 
pow(BgL_r1z00_56, BgL_r2z00_57);} 
}



/* _exptfl */
obj_t BGl__exptflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_963, obj_t BgL_r1z00_964, obj_t BgL_r2z00_965)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 560 */
{ /* Ieee/flonum.scm 561 */
double BgL_auxz00_1949;
{ /* Ieee/flonum.scm 561 */
double BgL_r1z00_1223;double BgL_r2z00_1224;
{ /* Ieee/flonum.scm 561 */
obj_t BgL_auxz00_1950;
if(
REALP(BgL_r1z00_964))
{ /* Ieee/flonum.scm 561 */
BgL_auxz00_1950 = BgL_r1z00_964
; }  else 
{ 
obj_t BgL_auxz00_1953;
BgL_auxz00_1953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24475)), BGl_string1612z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r1z00_964); 
FAILURE(BgL_auxz00_1953,BFALSE,BFALSE);} 
BgL_r1z00_1223 = 
REAL_TO_DOUBLE(BgL_auxz00_1950); } 
{ /* Ieee/flonum.scm 561 */
obj_t BgL_auxz00_1958;
if(
REALP(BgL_r2z00_965))
{ /* Ieee/flonum.scm 561 */
BgL_auxz00_1958 = BgL_r2z00_965
; }  else 
{ 
obj_t BgL_auxz00_1961;
BgL_auxz00_1961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24475)), BGl_string1612z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_r2z00_965); 
FAILURE(BgL_auxz00_1961,BFALSE,BFALSE);} 
BgL_r2z00_1224 = 
REAL_TO_DOUBLE(BgL_auxz00_1958); } 
BgL_auxz00_1949 = 
pow(BgL_r1z00_1223, BgL_r2z00_1224); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_1949);} } 
}



/* signbitfl */
BGL_EXPORTED_DEF long BGl_signbitflz00zz__r4_numbers_6_5_flonumz00(double BgL_rz00_58)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 566 */
return 
BGL_SIGNBIT(BgL_rz00_58);} 
}



/* _signbitfl */
obj_t BGl__signbitflz00zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_966, obj_t BgL_rz00_967)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 566 */
{ /* Ieee/flonum.scm 567 */
long BgL_auxz00_1969;
{ /* Ieee/flonum.scm 567 */
double BgL_rz00_1225;
{ /* Ieee/flonum.scm 567 */
obj_t BgL_auxz00_1970;
if(
REALP(BgL_rz00_967))
{ /* Ieee/flonum.scm 567 */
BgL_auxz00_1970 = BgL_rz00_967
; }  else 
{ 
obj_t BgL_auxz00_1973;
BgL_auxz00_1973 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)24745)), BGl_string1613z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_967); 
FAILURE(BgL_auxz00_1973,BFALSE,BFALSE);} 
BgL_rz00_1225 = 
REAL_TO_DOUBLE(BgL_auxz00_1970); } 
BgL_auxz00_1969 = 
BGL_SIGNBIT(BgL_rz00_1225); } 
return 
BINT(BgL_auxz00_1969);} } 
}



/* integerfl? */
BGL_EXPORTED_DEF bool_t BGl_integerflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_59)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 572 */
if(
BGL_IS_FINITE(BgL_rz00_59))
{ /* Ieee/flonum.scm 573 */
double BgL_arg1237z00_1226;
BgL_arg1237z00_1226 = 
floor(BgL_rz00_59); 
return 
(BgL_rz00_59==BgL_arg1237z00_1226);}  else 
{ /* Ieee/flonum.scm 573 */
return ((bool_t)0);} } 
}



/* _integerfl? */
obj_t BGl__integerflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_968, obj_t BgL_rz00_969)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 572 */
{ /* Ieee/flonum.scm 573 */
bool_t BgL_auxz00_1984;
{ /* Ieee/flonum.scm 573 */
double BgL_rz00_1227;
{ /* Ieee/flonum.scm 573 */
obj_t BgL_auxz00_1985;
if(
REALP(BgL_rz00_969))
{ /* Ieee/flonum.scm 573 */
BgL_auxz00_1985 = BgL_rz00_969
; }  else 
{ 
obj_t BgL_auxz00_1988;
BgL_auxz00_1988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25021)), BGl_string1614z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_969); 
FAILURE(BgL_auxz00_1988,BFALSE,BFALSE);} 
BgL_rz00_1227 = 
REAL_TO_DOUBLE(BgL_auxz00_1985); } 
if(
BGL_IS_FINITE(BgL_rz00_1227))
{ /* Ieee/flonum.scm 573 */
double BgL_arg1237z00_1228;
BgL_arg1237z00_1228 = 
floor(BgL_rz00_1227); 
BgL_auxz00_1984 = 
(BgL_rz00_1227==BgL_arg1237z00_1228); }  else 
{ /* Ieee/flonum.scm 573 */
BgL_auxz00_1984 = ((bool_t)0)
; } } 
return 
BBOOL(BgL_auxz00_1984);} } 
}



/* evenfl? */
BGL_EXPORTED_DEF bool_t BGl_evenflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_60)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 579 */
{ /* Ieee/flonum.scm 580 */
double BgL_arg1238z00_1229;
BgL_arg1238z00_1229 = 
(BgL_rz00_60/((double)2.0)); 
{ /* Ieee/flonum.scm 580 */
bool_t BgL_res1402z00_1230;
if(
BGL_IS_FINITE(BgL_arg1238z00_1229))
{ /* Ieee/flonum.scm 580 */
double BgL_arg1237z00_1231;
BgL_arg1237z00_1231 = 
floor(BgL_arg1238z00_1229); 
BgL_res1402z00_1230 = 
(BgL_arg1238z00_1229==BgL_arg1237z00_1231); }  else 
{ /* Ieee/flonum.scm 580 */
BgL_res1402z00_1230 = ((bool_t)0); } 
return BgL_res1402z00_1230;} } } 
}



/* _evenfl? */
obj_t BGl__evenflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_970, obj_t BgL_rz00_971)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 579 */
{ /* Ieee/flonum.scm 580 */
bool_t BgL_auxz00_2003;
{ /* Ieee/flonum.scm 580 */
bool_t BgL_res1642z00_1236;
{ /* Ieee/flonum.scm 580 */
double BgL_rz00_1232;
{ /* Ieee/flonum.scm 580 */
obj_t BgL_auxz00_2004;
if(
REALP(BgL_rz00_971))
{ /* Ieee/flonum.scm 580 */
BgL_auxz00_2004 = BgL_rz00_971
; }  else 
{ 
obj_t BgL_auxz00_2007;
BgL_auxz00_2007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25323)), BGl_string1615z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_971); 
FAILURE(BgL_auxz00_2007,BFALSE,BFALSE);} 
BgL_rz00_1232 = 
REAL_TO_DOUBLE(BgL_auxz00_2004); } 
{ /* Ieee/flonum.scm 580 */
double BgL_arg1238z00_1233;
BgL_arg1238z00_1233 = 
(BgL_rz00_1232/((double)2.0)); 
{ /* Ieee/flonum.scm 580 */
bool_t BgL_res1402z00_1234;
if(
BGL_IS_FINITE(BgL_arg1238z00_1233))
{ /* Ieee/flonum.scm 580 */
double BgL_arg1237z00_1235;
BgL_arg1237z00_1235 = 
floor(BgL_arg1238z00_1233); 
BgL_res1402z00_1234 = 
(BgL_arg1238z00_1233==BgL_arg1237z00_1235); }  else 
{ /* Ieee/flonum.scm 580 */
BgL_res1402z00_1234 = ((bool_t)0); } 
BgL_res1642z00_1236 = BgL_res1402z00_1234; } } } 
BgL_auxz00_2003 = BgL_res1642z00_1236; } 
return 
BBOOL(BgL_auxz00_2003);} } 
}



/* oddfl? */
BGL_EXPORTED_DEF bool_t BGl_oddflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_61)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 585 */
{ /* Ieee/flonum.scm 586 */
bool_t BgL_testz00_2018;
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1403z00_1237;
if(
BGL_IS_FINITE(BgL_rz00_61))
{ /* Ieee/flonum.scm 586 */
double BgL_arg1237z00_1238;
BgL_arg1237z00_1238 = 
floor(BgL_rz00_61); 
BgL_res1403z00_1237 = 
(BgL_rz00_61==BgL_arg1237z00_1238); }  else 
{ /* Ieee/flonum.scm 586 */
BgL_res1403z00_1237 = ((bool_t)0); } 
BgL_testz00_2018 = BgL_res1403z00_1237; } 
if(BgL_testz00_2018)
{ /* Ieee/flonum.scm 586 */
bool_t BgL_testz00_2023;
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1405z00_1239;
{ /* Ieee/flonum.scm 586 */
double BgL_arg1238z00_1240;
BgL_arg1238z00_1240 = 
(BgL_rz00_61/((double)2.0)); 
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1404z00_1241;
if(
BGL_IS_FINITE(BgL_arg1238z00_1240))
{ /* Ieee/flonum.scm 586 */
double BgL_arg1237z00_1242;
BgL_arg1237z00_1242 = 
floor(BgL_arg1238z00_1240); 
BgL_res1404z00_1241 = 
(BgL_arg1238z00_1240==BgL_arg1237z00_1242); }  else 
{ /* Ieee/flonum.scm 586 */
BgL_res1404z00_1241 = ((bool_t)0); } 
BgL_res1405z00_1239 = BgL_res1404z00_1241; } } 
BgL_testz00_2023 = BgL_res1405z00_1239; } 
if(BgL_testz00_2023)
{ /* Ieee/flonum.scm 586 */
return ((bool_t)0);}  else 
{ /* Ieee/flonum.scm 586 */
return ((bool_t)1);} }  else 
{ /* Ieee/flonum.scm 586 */
return ((bool_t)0);} } } 
}



/* _oddfl? */
obj_t BGl__oddflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_972, obj_t BgL_rz00_973)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 585 */
{ /* Ieee/flonum.scm 586 */
bool_t BgL_auxz00_2029;
{ /* Ieee/flonum.scm 586 */
double BgL_rz00_1243;
{ /* Ieee/flonum.scm 586 */
obj_t BgL_auxz00_2030;
if(
REALP(BgL_rz00_973))
{ /* Ieee/flonum.scm 586 */
BgL_auxz00_2030 = BgL_rz00_973
; }  else 
{ 
obj_t BgL_auxz00_2033;
BgL_auxz00_2033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25594)), BGl_string1616z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_973); 
FAILURE(BgL_auxz00_2033,BFALSE,BFALSE);} 
BgL_rz00_1243 = 
REAL_TO_DOUBLE(BgL_auxz00_2030); } 
{ /* Ieee/flonum.scm 586 */
bool_t BgL_testz00_2038;
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1403z00_1244;
if(
BGL_IS_FINITE(BgL_rz00_1243))
{ /* Ieee/flonum.scm 586 */
double BgL_arg1237z00_1245;
BgL_arg1237z00_1245 = 
floor(BgL_rz00_1243); 
BgL_res1403z00_1244 = 
(BgL_rz00_1243==BgL_arg1237z00_1245); }  else 
{ /* Ieee/flonum.scm 586 */
BgL_res1403z00_1244 = ((bool_t)0); } 
BgL_testz00_2038 = BgL_res1403z00_1244; } 
if(BgL_testz00_2038)
{ /* Ieee/flonum.scm 586 */
bool_t BgL_testz00_2043;
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1405z00_1246;
{ /* Ieee/flonum.scm 586 */
double BgL_arg1238z00_1247;
BgL_arg1238z00_1247 = 
(BgL_rz00_1243/((double)2.0)); 
{ /* Ieee/flonum.scm 586 */
bool_t BgL_res1404z00_1248;
if(
BGL_IS_FINITE(BgL_arg1238z00_1247))
{ /* Ieee/flonum.scm 586 */
double BgL_arg1237z00_1249;
BgL_arg1237z00_1249 = 
floor(BgL_arg1238z00_1247); 
BgL_res1404z00_1248 = 
(BgL_arg1238z00_1247==BgL_arg1237z00_1249); }  else 
{ /* Ieee/flonum.scm 586 */
BgL_res1404z00_1248 = ((bool_t)0); } 
BgL_res1405z00_1246 = BgL_res1404z00_1248; } } 
BgL_testz00_2043 = BgL_res1405z00_1246; } 
if(BgL_testz00_2043)
{ /* Ieee/flonum.scm 586 */
BgL_auxz00_2029 = ((bool_t)0)
; }  else 
{ /* Ieee/flonum.scm 586 */
BgL_auxz00_2029 = ((bool_t)1)
; } }  else 
{ /* Ieee/flonum.scm 586 */
BgL_auxz00_2029 = ((bool_t)0)
; } } } 
return 
BBOOL(BgL_auxz00_2029);} } 
}



/* finitefl? */
BGL_EXPORTED_DEF bool_t BGl_finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_62)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 592 */
return 
BGL_IS_FINITE(BgL_rz00_62);} 
}



/* _finitefl? */
obj_t BGl__finiteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_974, obj_t BgL_rz00_975)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 592 */
{ /* Ieee/flonum.scm 593 */
bool_t BgL_auxz00_2051;
{ /* Ieee/flonum.scm 593 */
double BgL_rz00_1250;
{ /* Ieee/flonum.scm 593 */
obj_t BgL_auxz00_2052;
if(
REALP(BgL_rz00_975))
{ /* Ieee/flonum.scm 593 */
BgL_auxz00_2052 = BgL_rz00_975
; }  else 
{ 
obj_t BgL_auxz00_2055;
BgL_auxz00_2055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)25885)), BGl_string1617z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_975); 
FAILURE(BgL_auxz00_2055,BFALSE,BFALSE);} 
BgL_rz00_1250 = 
REAL_TO_DOUBLE(BgL_auxz00_2052); } 
BgL_auxz00_2051 = 
BGL_IS_FINITE(BgL_rz00_1250); } 
return 
BBOOL(BgL_auxz00_2051);} } 
}



/* infinitefl? */
BGL_EXPORTED_DEF bool_t BGl_infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_63)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 598 */
return 
BGL_IS_INF(BgL_rz00_63);} 
}



/* _infinitefl? */
obj_t BGl__infiniteflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_976, obj_t BgL_rz00_977)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 598 */
{ /* Ieee/flonum.scm 599 */
bool_t BgL_auxz00_2063;
{ /* Ieee/flonum.scm 599 */
double BgL_rz00_1251;
{ /* Ieee/flonum.scm 599 */
obj_t BgL_auxz00_2064;
if(
REALP(BgL_rz00_977))
{ /* Ieee/flonum.scm 599 */
BgL_auxz00_2064 = BgL_rz00_977
; }  else 
{ 
obj_t BgL_auxz00_2067;
BgL_auxz00_2067 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26158)), BGl_string1618z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_977); 
FAILURE(BgL_auxz00_2067,BFALSE,BFALSE);} 
BgL_rz00_1251 = 
REAL_TO_DOUBLE(BgL_auxz00_2064); } 
BgL_auxz00_2063 = 
BGL_IS_INF(BgL_rz00_1251); } 
return 
BBOOL(BgL_auxz00_2063);} } 
}



/* nanfl? */
BGL_EXPORTED_DEF bool_t BGl_nanflzf3zf3zz__r4_numbers_6_5_flonumz00(double BgL_rz00_64)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 604 */
return 
BGL_IS_NAN(BgL_rz00_64);} 
}



/* _nanfl? */
obj_t BGl__nanflzf3zf3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_978, obj_t BgL_rz00_979)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 604 */
{ /* Ieee/flonum.scm 605 */
bool_t BgL_auxz00_2075;
{ /* Ieee/flonum.scm 605 */
double BgL_rz00_1252;
{ /* Ieee/flonum.scm 605 */
obj_t BgL_auxz00_2076;
if(
REALP(BgL_rz00_979))
{ /* Ieee/flonum.scm 605 */
BgL_auxz00_2076 = BgL_rz00_979
; }  else 
{ 
obj_t BgL_auxz00_2079;
BgL_auxz00_2079 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26423)), BGl_string1619z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_rz00_979); 
FAILURE(BgL_auxz00_2079,BFALSE,BFALSE);} 
BgL_rz00_1252 = 
REAL_TO_DOUBLE(BgL_auxz00_2076); } 
BgL_auxz00_2075 = 
BGL_IS_NAN(BgL_rz00_1252); } 
return 
BBOOL(BgL_auxz00_2075);} } 
}



/* string->real */
BGL_EXPORTED_DEF double BGl_stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(char * BgL_stringz00_65)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 610 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_65), BGl_string1620z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
return BGL_NAN;}  else 
{ /* Ieee/flonum.scm 612 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_65), BGl_string1621z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
return BGL_INFINITY;}  else 
{ /* Ieee/flonum.scm 612 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_65), BGl_string1622z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
return (-BGL_INFINITY);}  else 
{ /* Ieee/flonum.scm 612 */
return 
strtod(BgL_stringz00_65, ((long)0));} } } } 
}



/* _string->real */
obj_t BGl__stringzd2ze3realz31zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_980, obj_t BgL_stringz00_981)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 610 */
{ /* Ieee/flonum.scm 612 */
double BgL_auxz00_2096;
{ /* Ieee/flonum.scm 612 */
char * BgL_stringz00_1253;
{ /* Ieee/flonum.scm 612 */
obj_t BgL_auxz00_2097;
if(
STRINGP(BgL_stringz00_981))
{ /* Ieee/flonum.scm 612 */
BgL_auxz00_2097 = BgL_stringz00_981
; }  else 
{ 
obj_t BgL_auxz00_2100;
BgL_auxz00_2100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)26712)), BGl_string1623z00zz__r4_numbers_6_5_flonumz00, BGl_string1624z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_981); 
FAILURE(BgL_auxz00_2100,BFALSE,BFALSE);} 
BgL_stringz00_1253 = 
BSTRING_TO_STRING(BgL_auxz00_2097); } 
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_1253), BGl_string1620z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
BgL_auxz00_2096 = BGL_NAN
; }  else 
{ /* Ieee/flonum.scm 612 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_1253), BGl_string1621z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
BgL_auxz00_2096 = BGL_INFINITY
; }  else 
{ /* Ieee/flonum.scm 612 */
if(
bigloo_strcmp(
string_to_bstring(BgL_stringz00_1253), BGl_string1622z00zz__r4_numbers_6_5_flonumz00))
{ /* Ieee/flonum.scm 612 */
BgL_auxz00_2096 = (-BGL_INFINITY)
; }  else 
{ /* Ieee/flonum.scm 612 */
BgL_auxz00_2096 = 
strtod(BgL_stringz00_1253, ((long)0))
; } } } } 
return 
DOUBLE_TO_REAL(BgL_auxz00_2096);} } 
}



/* real->string */
BGL_EXPORTED_DEF obj_t BGl_realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t BgL_realz00_66)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 624 */
return 
real_to_string(
REAL_TO_DOUBLE(BgL_realz00_66));} 
}



/* _real->string */
obj_t BGl__realzd2ze3stringz31zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_982, obj_t BgL_realz00_983)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 624 */
{ /* Ieee/flonum.scm 625 */
obj_t BgL_realz00_1254;
if(
REALP(BgL_realz00_983))
{ /* Ieee/flonum.scm 625 */
BgL_realz00_1254 = BgL_realz00_983; }  else 
{ 
obj_t BgL_auxz00_2120;
BgL_auxz00_2120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27153)), BGl_string1625z00zz__r4_numbers_6_5_flonumz00, BGl_string1626z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_983); 
FAILURE(BgL_auxz00_2120,BFALSE,BFALSE);} 
return 
real_to_string(
REAL_TO_DOUBLE(BgL_realz00_1254));} } 
}



/* ieee-string->real */
BGL_EXPORTED_DEF obj_t BGl_ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_67)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 630 */
return 
DOUBLE_TO_REAL(
bgl_ieee_string_to_double(BgL_stringz00_67));} 
}



/* _ieee-string->real */
obj_t BGl__ieeezd2stringzd2ze3realze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_984, obj_t BgL_stringz00_985)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 630 */
{ /* Ieee/flonum.scm 631 */
obj_t BgL_stringz00_1255;
if(
STRINGP(BgL_stringz00_985))
{ /* Ieee/flonum.scm 631 */
BgL_stringz00_1255 = BgL_stringz00_985; }  else 
{ 
obj_t BgL_auxz00_2130;
BgL_auxz00_2130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27444)), BGl_string1627z00zz__r4_numbers_6_5_flonumz00, BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_985); 
FAILURE(BgL_auxz00_2130,BFALSE,BFALSE);} 
return 
DOUBLE_TO_REAL(
bgl_ieee_string_to_double(BgL_stringz00_1255));} } 
}



/* real->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_realz00_68)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 636 */
return 
bgl_double_to_ieee_string(
REAL_TO_DOUBLE(BgL_realz00_68));} 
}



/* _real->ieee-string */
obj_t BGl__realzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_986, obj_t BgL_realz00_987)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 636 */
{ /* Ieee/flonum.scm 637 */
obj_t BgL_realz00_1256;
if(
REALP(BgL_realz00_987))
{ /* Ieee/flonum.scm 637 */
BgL_realz00_1256 = BgL_realz00_987; }  else 
{ 
obj_t BgL_auxz00_2140;
BgL_auxz00_2140 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)27741)), BGl_string1629z00zz__r4_numbers_6_5_flonumz00, BGl_string1626z00zz__r4_numbers_6_5_flonumz00, BgL_realz00_987); 
FAILURE(BgL_auxz00_2140,BFALSE,BFALSE);} 
return 
bgl_double_to_ieee_string(
REAL_TO_DOUBLE(BgL_realz00_1256));} } 
}



/* ieee-string->double */
BGL_EXPORTED_DEF double BGl_ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_69)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 642 */
return 
bgl_ieee_string_to_double(BgL_stringz00_69);} 
}



/* _ieee-string->double */
obj_t BGl__ieeezd2stringzd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_988, obj_t BgL_stringz00_989)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 642 */
{ /* Ieee/flonum.scm 643 */
double BgL_auxz00_2147;
{ /* Ieee/flonum.scm 643 */
obj_t BgL_stringz00_1257;
if(
STRINGP(BgL_stringz00_989))
{ /* Ieee/flonum.scm 643 */
BgL_stringz00_1257 = BgL_stringz00_989; }  else 
{ 
obj_t BgL_auxz00_2150;
BgL_auxz00_2150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28040)), BGl_string1630z00zz__r4_numbers_6_5_flonumz00, BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_989); 
FAILURE(BgL_auxz00_2150,BFALSE,BFALSE);} 
BgL_auxz00_2147 = 
bgl_ieee_string_to_double(BgL_stringz00_1257); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_2147);} } 
}



/* double->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(double BgL_doublez00_70)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 648 */
return 
bgl_double_to_ieee_string(BgL_doublez00_70);} 
}



/* _double->ieee-string */
obj_t BGl__doublezd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_990, obj_t BgL_doublez00_991)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 648 */
{ /* Ieee/flonum.scm 649 */
double BgL_doublez00_1258;
{ /* Ieee/flonum.scm 649 */
obj_t BgL_auxz00_2157;
if(
REALP(BgL_doublez00_991))
{ /* Ieee/flonum.scm 649 */
BgL_auxz00_2157 = BgL_doublez00_991
; }  else 
{ 
obj_t BgL_auxz00_2160;
BgL_auxz00_2160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28341)), BGl_string1631z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_doublez00_991); 
FAILURE(BgL_auxz00_2160,BFALSE,BFALSE);} 
BgL_doublez00_1258 = 
REAL_TO_DOUBLE(BgL_auxz00_2157); } 
return 
bgl_double_to_ieee_string(BgL_doublez00_1258);} } 
}



/* ieee-string->float */
BGL_EXPORTED_DEF float BGl_ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_stringz00_71)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 654 */
return 
bgl_ieee_string_to_float(BgL_stringz00_71);} 
}



/* _ieee-string->float */
obj_t BGl__ieeezd2stringzd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_992, obj_t BgL_stringz00_993)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 654 */
{ /* Ieee/flonum.scm 655 */
float BgL_auxz00_2167;
{ /* Ieee/flonum.scm 655 */
obj_t BgL_stringz00_1259;
if(
STRINGP(BgL_stringz00_993))
{ /* Ieee/flonum.scm 655 */
BgL_stringz00_1259 = BgL_stringz00_993; }  else 
{ 
obj_t BgL_auxz00_2170;
BgL_auxz00_2170 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28641)), BGl_string1632z00zz__r4_numbers_6_5_flonumz00, BGl_string1628z00zz__r4_numbers_6_5_flonumz00, BgL_stringz00_993); 
FAILURE(BgL_auxz00_2170,BFALSE,BFALSE);} 
BgL_auxz00_2167 = 
bgl_ieee_string_to_float(BgL_stringz00_1259); } 
return 
FLOAT_TO_REAL(BgL_auxz00_2167);} } 
}



/* float->ieee-string */
BGL_EXPORTED_DEF obj_t BGl_floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(float BgL_floatz00_72)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 660 */
return 
bgl_float_to_ieee_string(BgL_floatz00_72);} 
}



/* _float->ieee-string */
obj_t BGl__floatzd2ze3ieeezd2stringze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_994, obj_t BgL_floatz00_995)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 660 */
{ /* Ieee/flonum.scm 661 */
float BgL_floatz00_1260;
{ /* Ieee/flonum.scm 661 */
obj_t BgL_auxz00_2177;
if(
REALP(BgL_floatz00_995))
{ /* Ieee/flonum.scm 661 */
BgL_auxz00_2177 = BgL_floatz00_995
; }  else 
{ 
obj_t BgL_auxz00_2180;
BgL_auxz00_2180 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)28939)), BGl_string1633z00zz__r4_numbers_6_5_flonumz00, BGl_string1634z00zz__r4_numbers_6_5_flonumz00, BgL_floatz00_995); 
FAILURE(BgL_auxz00_2180,BFALSE,BFALSE);} 
BgL_floatz00_1260 = 
REAL_TO_FLOAT(BgL_auxz00_2177); } 
return 
bgl_float_to_ieee_string(BgL_floatz00_1260);} } 
}



/* double->llong-bits */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(double BgL_nz00_73)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 666 */
return 
DOUBLE_TO_LLONG_BITS(BgL_nz00_73);} 
}



/* _double->llong-bits */
obj_t BGl__doublezd2ze3llongzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_996, obj_t BgL_nz00_997)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 666 */
{ /* Ieee/flonum.scm 667 */
BGL_LONGLONG_T BgL_auxz00_2187;
{ /* Ieee/flonum.scm 667 */
double BgL_nz00_1261;
{ /* Ieee/flonum.scm 667 */
obj_t BgL_auxz00_2188;
if(
REALP(BgL_nz00_997))
{ /* Ieee/flonum.scm 667 */
BgL_auxz00_2188 = BgL_nz00_997
; }  else 
{ 
obj_t BgL_auxz00_2191;
BgL_auxz00_2191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29247)), BGl_string1635z00zz__r4_numbers_6_5_flonumz00, BGl_string1570z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_997); 
FAILURE(BgL_auxz00_2191,BFALSE,BFALSE);} 
BgL_nz00_1261 = 
REAL_TO_DOUBLE(BgL_auxz00_2188); } 
BgL_auxz00_2187 = 
DOUBLE_TO_LLONG_BITS(BgL_nz00_1261); } 
return 
make_bllong(BgL_auxz00_2187);} } 
}



/* llong-bits->double */
BGL_EXPORTED_DEF double BGl_llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(BGL_LONGLONG_T BgL_nz00_74)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 673 */
return 
LLONG_BITS_TO_DOUBLE(BgL_nz00_74);} 
}



/* _llong-bits->double */
obj_t BGl__llongzd2bitszd2ze3doubleze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_998, obj_t BgL_nz00_999)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 673 */
{ /* Ieee/flonum.scm 674 */
double BgL_auxz00_2199;
{ /* Ieee/flonum.scm 674 */
BGL_LONGLONG_T BgL_nz00_1262;
{ /* Ieee/flonum.scm 674 */
obj_t BgL_auxz00_2200;
if(
LLONGP(BgL_nz00_999))
{ /* Ieee/flonum.scm 674 */
BgL_auxz00_2200 = BgL_nz00_999
; }  else 
{ 
obj_t BgL_auxz00_2203;
BgL_auxz00_2203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29575)), BGl_string1636z00zz__r4_numbers_6_5_flonumz00, BGl_string1637z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_999); 
FAILURE(BgL_auxz00_2203,BFALSE,BFALSE);} 
BgL_nz00_1262 = 
BLLONG_TO_LLONG(BgL_auxz00_2200); } 
BgL_auxz00_2199 = 
LLONG_BITS_TO_DOUBLE(BgL_nz00_1262); } 
return 
DOUBLE_TO_REAL(BgL_auxz00_2199);} } 
}



/* float->int-bits */
BGL_EXPORTED_DEF int BGl_floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(float BgL_nz00_75)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 680 */
return 
FLOAT_TO_INT_BITS(BgL_nz00_75);} 
}



/* _float->int-bits */
obj_t BGl__floatzd2ze3intzd2bitsze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1000, obj_t BgL_nz00_1001)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 680 */
{ /* Ieee/flonum.scm 681 */
int BgL_auxz00_2211;
{ /* Ieee/flonum.scm 681 */
float BgL_nz00_1263;
{ /* Ieee/flonum.scm 681 */
obj_t BgL_auxz00_2212;
if(
REALP(BgL_nz00_1001))
{ /* Ieee/flonum.scm 681 */
BgL_auxz00_2212 = BgL_nz00_1001
; }  else 
{ 
obj_t BgL_auxz00_2215;
BgL_auxz00_2215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)29897)), BGl_string1638z00zz__r4_numbers_6_5_flonumz00, BGl_string1634z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1001); 
FAILURE(BgL_auxz00_2215,BFALSE,BFALSE);} 
BgL_nz00_1263 = 
REAL_TO_FLOAT(BgL_auxz00_2212); } 
BgL_auxz00_2211 = 
FLOAT_TO_INT_BITS(BgL_nz00_1263); } 
return 
BINT(BgL_auxz00_2211);} } 
}



/* int-bits->float */
BGL_EXPORTED_DEF float BGl_intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(int BgL_nz00_76)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 687 */
return 
INT_BITS_TO_FLOAT(BgL_nz00_76);} 
}



/* _int-bits->float */
obj_t BGl__intzd2bitszd2ze3floatze3zz__r4_numbers_6_5_flonumz00(obj_t BgL_envz00_1002, obj_t BgL_nz00_1003)
{ AN_OBJECT;
{ /* Ieee/flonum.scm 687 */
{ /* Ieee/flonum.scm 688 */
float BgL_auxz00_2223;
{ /* Ieee/flonum.scm 688 */
int BgL_nz00_1264;
{ /* Ieee/flonum.scm 688 */
obj_t BgL_auxz00_2224;
if(
INTEGERP(BgL_nz00_1003))
{ /* Ieee/flonum.scm 688 */
BgL_auxz00_2224 = BgL_nz00_1003
; }  else 
{ 
obj_t BgL_auxz00_2227;
BgL_auxz00_2227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1568z00zz__r4_numbers_6_5_flonumz00, 
BINT(((long)30216)), BGl_string1639z00zz__r4_numbers_6_5_flonumz00, BGl_string1640z00zz__r4_numbers_6_5_flonumz00, BgL_nz00_1003); 
FAILURE(BgL_auxz00_2227,BFALSE,BFALSE);} 
BgL_nz00_1264 = 
CINT(BgL_auxz00_2224); } 
BgL_auxz00_2223 = 
INT_BITS_TO_FLOAT(BgL_nz00_1264); } 
return 
FLOAT_TO_REAL(BgL_auxz00_2223);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_flonumz00()
{ AN_OBJECT;
{ /* Ieee/flonum.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1641z00zz__r4_numbers_6_5_flonumz00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string1641z00zz__r4_numbers_6_5_flonumz00));} 
}

#ifdef __cplusplus
}
#endif
