/*===========================================================================*/
/*   (Ieee/fixnum.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/fixnum.scm -indent -o objs/obj_s/Ieee/fixnum.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
extern obj_t bgl_bignum_lcm(obj_t, obj_t);
static obj_t BGl__negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
extern obj_t bgl_bignum_add(obj_t, obj_t);
static obj_t BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_remainderelongz00zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__negllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
extern double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(long, long);
extern obj_t bgl_long_to_bignum(long);
static obj_t BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_maxvalllongz00zz__r4_numbers_6_5_fixnumz00();
static obj_t BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__minfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__negfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(long);
extern obj_t make_string(long, unsigned char);
extern void bgl_seed_rand(long);
static obj_t BGl__quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
static obj_t BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__absfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern bool_t bgl_bignum_even(obj_t);
static BGL_LONGLONG_T BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_zd2fxzd2zz__r4_numbers_6_5_fixnumz00(long, long);
static long BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern bool_t bgl_bignum_odd(obj_t);
static obj_t BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_bignum_remainder(obj_t, obj_t);
static obj_t BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3elongze3zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
static obj_t BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_quotientfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL long BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
BGL_EXPORTED_DECL long BGl_minvalelongz00zz__r4_numbers_6_5_fixnumz00();
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3llongzc3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_randomz00zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_abselongz00zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL bool_t BGl_evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL long BGl_zf2elongzf2zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_zd2llongzd2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL bool_t BGl_oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL obj_t BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(long, long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_za2llongza2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
extern obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
static obj_t BGl__lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__negelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t bgl_bignum_sub(obj_t, obj_t);
static obj_t BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_bignum_quotient(obj_t, obj_t);
static obj_t BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_string_to_integer_obj(char *, int);
BGL_EXPORTED_DECL long BGl_maxvalelongz00zz__r4_numbers_6_5_fixnumz00();
BGL_EXPORTED_DECL long BGl_maxvalfxz00zz__r4_numbers_6_5_fixnumz00();
BGL_EXPORTED_DECL obj_t BGl_elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL bool_t BGl_positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
static obj_t BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static long BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
extern obj_t unsigned_to_string(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__randomz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
static obj_t BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_zf2fxzf2zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_negllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__minllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t integer_to_string(long, long);
static obj_t BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_remainderfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__absllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_bignum_gcd(obj_t, obj_t);
static obj_t BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3fxzc3zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_bignum_neg(obj_t);
BGL_EXPORTED_DECL obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zc3elongzc3zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_quotientllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3llongzd3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t bgl_bignum_abs(obj_t);
static obj_t BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL long BGl_zd2elongzd2zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_za2elongza2zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00();
static obj_t BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_zb2llongzb2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
extern obj_t integer_to_string(long, long);
BGL_EXPORTED_DECL obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(int);
BGL_EXPORTED_DECL obj_t BGl_negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, obj_t);
static obj_t BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_za2fxza2zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL long BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL long BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t llong_to_string(BGL_LONGLONG_T, long);
static obj_t BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
BGL_EXPORTED_DECL bool_t BGl_evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_negfxz00zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_remainderllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00();
static obj_t BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL obj_t BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
BGL_EXPORTED_DECL bool_t BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t bgl_long_to_bignum(long);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
static obj_t BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_absfxz00zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL obj_t BGl_zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_negelongz00zz__r4_numbers_6_5_fixnumz00(long);
static obj_t BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__minelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__abselongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t integer_to_string_padding(long, long, long);
static obj_t BGl_symbol2838z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2844z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
static obj_t BGl_symbol2847z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_minvalfxz00zz__r4_numbers_6_5_fixnumz00();
extern obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
static obj_t BGl_symbol2851z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
extern obj_t bgl_string_to_bignum(char *, int);
BGL_EXPORTED_DECL long BGl_zb2fxzb2zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
BGL_EXPORTED_DECL bool_t BGl_ze3fxze3zz__r4_numbers_6_5_fixnumz00(long, long);
extern obj_t bgl_bignum_to_string(obj_t, long);
static obj_t BGl_symbol2858z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
static obj_t BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_quotientelongz00zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t unsigned_to_string(long, long);
extern obj_t bgl_bignum_mul(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_zd3elongzd3zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl_symbol2874z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
static obj_t BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
BGL_EXPORTED_DECL long BGl_llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
static obj_t BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern int bgl_bignum_cmp(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
static obj_t BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ze3llongze3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
static obj_t BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
BGL_EXPORTED_DECL obj_t BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
static obj_t BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL long BGl_zb2elongzb2zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
extern long bgl_bignum_to_long(obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_minvalllongz00zz__r4_numbers_6_5_fixnumz00();
static obj_t BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
extern obj_t ullong_to_string(BGL_LONGLONG_T, long);
static obj_t BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_absllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_zf2llongzf2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL bool_t BGl_ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(long, long);
BGL_EXPORTED_DECL bool_t BGl_negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(long);
extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
extern obj_t bgl_rand_bignum(obj_t);
static obj_t BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
static obj_t BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3fxzd2envzc2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3za7d3fxza710za7za7__2886za7, BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__remainderza700za7za7_2887za7, BGl__remainderz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2llongzd2envz60zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7b2llongza7b2za7za7__2888z00, BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lcmfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__lcmfxza700za7za7__r4_2889za7, va_generic_entry, BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2bxzd2envz60zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7b2bxza7b2za7za7__r4_2890z00, BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minfxza700za7za7__r4_2891za7, va_generic_entry, BGl__minfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__evenelongza7f3za7f32892z00, BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7eroelongzf3zd2envz86zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a7eroelongza7f3za72893za7, BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negllongza700za7za7__2894za7, BGl__negllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2bxzd2envz70zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a2bxza7a2za7za7__r4_2895z00, BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__fixnumza7d2za7e3big2896z00, BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minvalllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minvalllongza700za72897z00, BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__evenza7f3za7f3za7za7__r2898z00, BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minvalfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minvalfxza700za7za7__2899za7, BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulozd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__moduloza700za7za7__r42900za7, BGl__moduloz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddllongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__oddllongza7f3za7f3za72901za7, BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__llongza7f3za7f3za7za7__2902z00, BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3llongzd2envze2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3za7d3llongza730za72903z00, BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gcdfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__gcdfxza700za7za7__r4_2904za7, va_generic_entry, BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3bxzd2envze2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3za7d3bxza730za7za7__2905za7, BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__integerza7f3za7f3za7za72906z00, BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3elongzd2envzc2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3za7d3elongza710za72907z00, BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3elongzd2envz01zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d3elongza7d3za7za7__2908z00, BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2elongzd2envz20zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7f2elongza7f2za7za7__2909z00, BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positivefxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__positivefxza7f3za7f2910z00, BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gcdllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__gcdllongza700za7za7__2911za7, va_generic_entry, BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_absfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__absfxza700za7za7__r4_2912za7, BGl__absfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3llongzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3llongza7e3za7za7__2913z00, BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2fxzd2envz20zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7f2fxza7f2za7za7__r4_2914z00, BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lcmllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__lcmllongza700za7za7__2915za7, va_generic_entry, BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minelongza700za7za7__2916za7, va_generic_entry, BGl__minelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxvalfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxvalfxza700za7za7__2917za7, BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__remainderfxza700za72918z00, BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_quotientbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__quotientbxza700za7za72919za7, BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2fxzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d2fxza7d2za7za7__r4_2920z00, BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3integerzd2objzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__stringza7d2za7e3int2921z00, BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2llongzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d2llongza7d2za7za7__2922z00, BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gcdzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__gcdza700za7za7__r4_nu2923za7, va_generic_entry, BGl__gcdz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativeelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negativeelongza7f2924za7, BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positivebxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__positivebxza7f3za7f2925z00, BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__llongza7d2za7e3stri2926z00, va_generic_entry, BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__oddza7f3za7f3za7za7__r42927z00, BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_seedzd2randomz12zd2envz12zz__r4_numbers_6_5_fixnumz00, BgL_bgl__seedza7d2randomza712928z00, BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2fxzd2envz60zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7b2fxza7b2za7za7__r4_2929z00, BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2llongzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__makeza7d2llongza7d22930z00, BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__remainderllongza72931za7, BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3stringzf2paddingzd2envz11zz__r4_numbers_6_5_fixnumz00, BgL_bgl__integerza7d2za7e3st2932z00, opt_generic_entry, BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2llongzd2envz70zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a2llongza7a2za7za7__2933z00, BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2fxzd2envz70zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a2fxza7a2za7za7__r4_2934z00, BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_abselongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__abselongza700za7za7__2935za7, BGl__abselongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenfxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__evenfxza7f3za7f3za7za7_2936z00, BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxelongza700za7za7__2937za7, va_generic_entry, BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_quotientelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__quotientelongza702938za7, BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulobxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__modulobxza700za7za7__2939za7, BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxvalelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxvalelongza700za72940z00, BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__llongza7d2za7e3bign2941z00, BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positiveelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__positiveelongza7f2942za7, BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3bxzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3bxza7e3za7za7__r4_2943z00, BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3fxzd2envze2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3za7d3fxza730za7za7__2944za7, BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__exptbxza700za7za7__r42945za7, BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lcmzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__lcmza700za7za7__r4_nu2946za7, va_generic_entry, BGl__lcmz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenbxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__evenbxza7f3za7f3za7za7_2947z00, BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3bxzd2envz01zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d3bxza7d3za7za7__r4_2948z00, BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_octetzd2stringzd2ze3bignumzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__octetza7d2stringza72949z00, BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_moduloelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__moduloelongza700za72950z00, BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2706za700za7za7_2951za7, "/tmp/bigloo/runtime/Ieee/fixnum.scm", 35 );
DEFINE_STRING( BGl_string2707z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2707za700za7za7_2952za7, "_make-elong", 11 );
DEFINE_STRING( BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2708za700za7za7_2953za7, "long", 4 );
DEFINE_STRING( BGl_string2710z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2710za700za7za7_2954za7, "_elong->llong", 13 );
DEFINE_STRING( BGl_string2709z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2709za700za7za7_2955za7, "_make-llong", 11 );
DEFINE_STRING( BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2711za700za7za7_2956za7, "elong", 5 );
DEFINE_STRING( BGl_string2712z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2712za700za7za7_2957za7, "_llong->elong", 13 );
DEFINE_STRING( BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2713za700za7za7_2958za7, "llong", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3bxzd2envz11zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3bxza7c3za7za7__r4_2959z00, BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2714z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2714za700za7za7_2960za7, "_fixnum->bignum", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3elongzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__stringza7d2za7e3elo2961z00, va_generic_entry, BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2715z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2715za700za7za7_2962za7, "_bignum->fixnum", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxbxza700za7za7__r4_2963za7, va_generic_entry, BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2716za700za7za7_2964za7, "bignum", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_evenllongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__evenllongza7f3za7f32965z00, BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2717z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2717za700za7za7_2966za7, "_elong->bignum", 14 );
DEFINE_STRING( BGl_string2718z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2718za700za7za7_2967za7, "_llong->bignum", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7erollongzf3zd2envz86zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a7erollongza7f3za72968za7, BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2720z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2720za700za7za7_2969za7, "_=elong", 7 );
DEFINE_STRING( BGl_string2719z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2719za700za7za7_2970za7, "_=fx", 4 );
DEFINE_STRING( BGl_string2721z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2721za700za7za7_2971za7, "_=llong", 7 );
DEFINE_STRING( BGl_string2722z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2722za700za7za7_2972za7, "_=bx", 4 );
DEFINE_STRING( BGl_string2723z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2723za700za7za7_2973za7, "_<fx", 4 );
DEFINE_STRING( BGl_string2724z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2724za700za7za7_2974za7, "_<elong", 7 );
DEFINE_STRING( BGl_string2725z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2725za700za7za7_2975za7, "_<llong", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_quotientzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__quotientza700za7za7__2976za7, BGl__quotientz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3elongzd2envz11zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3elongza7c3za7za7__2977z00, BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2726z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2726za700za7za7_2978za7, "_<bx", 4 );
DEFINE_STRING( BGl_string2727z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2727za700za7za7_2979za7, "_>fx", 4 );
DEFINE_STRING( BGl_string2728z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2728za700za7za7_2980za7, "_>elong", 7 );
DEFINE_STRING( BGl_string2730z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2730za700za7za7_2981za7, "_>bx", 4 );
DEFINE_STRING( BGl_string2729z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2729za700za7za7_2982za7, "_>llong", 7 );
DEFINE_STRING( BGl_string2731z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2731za700za7za7_2983za7, "_<=fx", 5 );
DEFINE_STRING( BGl_string2732z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2732za700za7za7_2984za7, "_<=elong", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__elongza7d2za7e3stri2985z00, va_generic_entry, BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2733z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2733za700za7za7_2986za7, "_<=llong", 8 );
DEFINE_STRING( BGl_string2734z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2734za700za7za7_2987za7, "_<=bx", 5 );
DEFINE_STRING( BGl_string2735z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2735za700za7za7_2988za7, "_>=fx", 5 );
DEFINE_STRING( BGl_string2736z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2736za700za7za7_2989za7, "_>=elong", 8 );
DEFINE_STRING( BGl_string2737z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2737za700za7za7_2990za7, "_>=llong", 8 );
DEFINE_STRING( BGl_string2738z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2738za700za7za7_2991za7, "_>=bx", 5 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3llongzd2envzc2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3za7d3llongza710za72992z00, BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2740z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2740za700za7za7_2993za7, "_zeroelong?", 11 );
DEFINE_STRING( BGl_string2739z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2739za700za7za7_2994za7, "_zerofx?", 8 );
DEFINE_STRING( BGl_string2741z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2741za700za7za7_2995za7, "_zerollong?", 11 );
DEFINE_STRING( BGl_string2742z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2742za700za7za7_2996za7, "_zerobx?", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__integerza7d2za7e3st2997z00, opt_generic_entry, BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2743z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2743za700za7za7_2998za7, "_positivefx?", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3llongzd2envz01zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d3llongza7d3za7za7__2999z00, BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2744z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2744za700za7za7_3000za7, "_positiveelong?", 15 );
DEFINE_STRING( BGl_string2745z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2745za700za7za7_3001za7, "_positivellong?", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2llongzd2envz20zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7f2llongza7f2za7za7__3002z00, BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2746z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2746za700za7za7_3003za7, "_positivebx?", 12 );
DEFINE_STRING( BGl_string2747z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2747za700za7za7_3004za7, "_negativefx?", 12 );
DEFINE_STRING( BGl_string2748z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2748za700za7za7_3005za7, "_negativeelong?", 15 );
DEFINE_STRING( BGl_string2750z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2750za700za7za7_3006za7, "_negativebx?", 12 );
DEFINE_STRING( BGl_string2749z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2749za700za7za7_3007za7, "_negativellong?", 15 );
DEFINE_STRING( BGl_string2751z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2751za700za7za7_3008za7, "odd?", 4 );
DEFINE_STRING( BGl_string2752z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2752za700za7za7_3009za7, "Illegal integer", 15 );
DEFINE_STRING( BGl_string2753z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2753za700za7za7_3010za7, "_oddfx?", 7 );
DEFINE_STRING( BGl_string2754z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2754za700za7za7_3011za7, "_oddelong?", 10 );
DEFINE_STRING( BGl_string2755z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2755za700za7za7_3012za7, "_oddllong?", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negbxza700za7za7__r4_3013za7, BGl__negbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2756z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2756za700za7za7_3014za7, "_oddbx?", 7 );
DEFINE_STRING( BGl_string2757z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2757za700za7za7_3015za7, "even?", 5 );
DEFINE_STRING( BGl_string2758z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2758za700za7za7_3016za7, "_evenfx?", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_quotientfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__quotientfxza700za7za73017za7, BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2760z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2760za700za7za7_3018za7, "_evenllong?", 11 );
DEFINE_STRING( BGl_string2759z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2759za700za7za7_3019za7, "_evenelong?", 11 );
DEFINE_STRING( BGl_string2761z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2761za700za7za7_3020za7, "_evenbx?", 8 );
DEFINE_STRING( BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2762za700za7za7_3021za7, "loop", 4 );
DEFINE_STRING( BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2763za700za7za7_3022za7, "pair", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__oddelongza7f3za7f3za73023za7, BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2764z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2764za700za7za7_3024za7, "minfx", 5 );
DEFINE_STRING( BGl_string2765z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2765za700za7za7_3025za7, "_minfx", 6 );
DEFINE_STRING( BGl_string2766z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2766za700za7za7_3026za7, "minelong", 8 );
DEFINE_STRING( BGl_string2767z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2767za700za7za7_3027za7, "_minelong", 9 );
DEFINE_STRING( BGl_string2768z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2768za700za7za7_3028za7, "minllong", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zb2elongzd2envz60zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7b2elongza7b2za7za7__3029z00, BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minllongza700za7za7__3030za7, va_generic_entry, BGl__minllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2770z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2770za700za7za7_3031za7, "minbx", 5 );
DEFINE_STRING( BGl_string2769z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2769za700za7za7_3032za7, "_minllong", 9 );
DEFINE_STRING( BGl_string2771z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2771za700za7za7_3033za7, "_minbx", 6 );
DEFINE_STRING( BGl_string2772z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2772za700za7za7_3034za7, "maxfx", 5 );
DEFINE_STRING( BGl_string2773z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2773za700za7za7_3035za7, "_maxfx", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__elongza7f3za7f3za7za7__3036z00, BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2774z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2774za700za7za7_3037za7, "maxelong", 8 );
DEFINE_STRING( BGl_string2775z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2775za700za7za7_3038za7, "_maxelong", 9 );
DEFINE_STRING( BGl_string2776z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2776za700za7za7_3039za7, "maxllong", 8 );
DEFINE_STRING( BGl_string2777z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2777za700za7za7_3040za7, "_maxllong", 9 );
DEFINE_STRING( BGl_string2778z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2778za700za7za7_3041za7, "maxbx", 5 );
DEFINE_STRING( BGl_string2780z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2780za700za7za7_3042za7, "_+fx", 4 );
DEFINE_STRING( BGl_string2779z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2779za700za7za7_3043za7, "_maxbx", 6 );
DEFINE_STRING( BGl_string2781z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2781za700za7za7_3044za7, "_+elong", 7 );
DEFINE_STRING( BGl_string2782z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2782za700za7za7_3045za7, "_+llong", 7 );
DEFINE_STRING( BGl_string2783z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2783za700za7za7_3046za7, "_+bx", 4 );
DEFINE_STRING( BGl_string2784z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2784za700za7za7_3047za7, "_-fx", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__fixnumza7f3za7f3za7za7_3048z00, BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2785z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2785za700za7za7_3049za7, "_-elong", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negelongza700za7za7__3050za7, BGl__negelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2786z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2786za700za7za7_3051za7, "_-llong", 7 );
DEFINE_STRING( BGl_string2787z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2787za700za7za7_3052za7, "_-bx", 4 );
DEFINE_STRING( BGl_string2788z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2788za700za7za7_3053za7, "_*fx", 4 );
DEFINE_STRING( BGl_string2800z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2800za700za7za7_3054za7, "_absfx", 6 );
DEFINE_STRING( BGl_string2790z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2790za700za7za7_3055za7, "_*llong", 7 );
DEFINE_STRING( BGl_string2789z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2789za700za7za7_3056za7, "_*elong", 7 );
DEFINE_STRING( BGl_string2801z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2801za700za7za7_3057za7, "_abselong", 9 );
DEFINE_STRING( BGl_string2791z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2791za700za7za7_3058za7, "_*bx", 4 );
DEFINE_STRING( BGl_string2802z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2802za700za7za7_3059za7, "_absllong", 9 );
DEFINE_STRING( BGl_string2792z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2792za700za7za7_3060za7, "_/fx", 4 );
DEFINE_STRING( BGl_string2803z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2803za700za7za7_3061za7, "_absbx", 6 );
DEFINE_STRING( BGl_string2793z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2793za700za7za7_3062za7, "_/elong", 7 );
DEFINE_STRING( BGl_string2794z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2794za700za7za7_3063za7, "_/llong", 7 );
DEFINE_STRING( BGl_string2805z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2805za700za7za7_3064za7, "quotient", 8 );
DEFINE_STRING( BGl_string2795z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2795za700za7za7_3065za7, "_/bx", 4 );
DEFINE_STRING( BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2806za700za7za7_3066za7, "not an integer", 14 );
DEFINE_STRING( BGl_string2796z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2796za700za7za7_3067za7, "_negfx", 6 );
DEFINE_STRING( BGl_string2807z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2807za700za7za7_3068za7, "_quotientfx", 11 );
DEFINE_STRING( BGl_string2797z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2797za700za7za7_3069za7, "_negelong", 9 );
DEFINE_STRING( BGl_string2808z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2808za700za7za7_3070za7, "_quotientelong", 14 );
DEFINE_STRING( BGl_string2798z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2798za700za7za7_3071za7, "_negllong", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3zd3bxzd2envzc2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3za7d3bxza710za7za7__3072za7, BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2810z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2810za700za7za7_3073za7, "_quotientbx", 11 );
DEFINE_STRING( BGl_string2809z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2809za700za7za7_3074za7, "_quotientllong", 14 );
DEFINE_STRING( BGl_string2799z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2799za700za7za7_3075za7, "_negbx", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minvalelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minvalelongza700za73076z00, BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3llongzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__elongza7d2za7e3llon3077z00, BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2812z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2812za700za7za7_3078za7, "remainder", 9 );
DEFINE_STRING( BGl_string2813z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2813za700za7za7_3079za7, "_remainderfx", 12 );
DEFINE_STRING( BGl_string2814z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2814za700za7za7_3080za7, "_remainderelong", 15 );
DEFINE_STRING( BGl_string2815z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2815za700za7za7_3081za7, "_remainderllong", 15 );
DEFINE_STRING( BGl_string2816z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2816za700za7za7_3082za7, "_remainderbx", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_elongzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__elongza7d2za7e3bign3083z00, BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2818z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2818za700za7za7_3084za7, "modulo", 6 );
DEFINE_STRING( BGl_string2820z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2820za700za7za7_3085za7, "_moduloelong", 12 );
DEFINE_STRING( BGl_string2819z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2819za700za7za7_3086za7, "_modulofx", 9 );
DEFINE_STRING( BGl_string2821z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2821za700za7za7_3087za7, "_modulollong", 12 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lcmbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__lcmbxza700za7za7__r4_3088za7, va_generic_entry, BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2822z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2822za700za7za7_3089za7, "_modulobx", 9 );
DEFINE_STRING( BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2823za700za7za7_3090za7, "gcdfx", 5 );
DEFINE_STRING( BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2824za700za7za7_3091za7, "gcdelong", 8 );
DEFINE_STRING( BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2825za700za7za7_3092za7, "gcdllong", 8 );
DEFINE_STRING( BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2826za700za7za7_3093za7, "gcdbx", 5 );
DEFINE_STRING( BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2827za700za7za7_3094za7, "gcd", 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__bignumza7d2za7e3str3095z00, opt_generic_entry, BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2828za700za7za7_3096za7, "lcmfx", 5 );
DEFINE_STRING( BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2830za700za7za7_3097za7, "lcmelong", 8 );
DEFINE_STRING( BGl_string2829z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2829za700za7za7_3098za7, "lcm2'''", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_minbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__minbxza700za7za7__r4_3099za7, va_generic_entry, BGl__minbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2831z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2831za700za7za7_3100za7, "lcm2''", 6 );
DEFINE_STRING( BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2832za700za7za7_3101za7, "lcmllong", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzd2ze3octetzd2stringzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__bignumza7d2za7e3oct3102z00, BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2833z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2833za700za7za7_3103za7, "lcm2'", 5 );
DEFINE_STRING( BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2834za700za7za7_3104za7, "lcmbx", 5 );
DEFINE_STRING( BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2835za700za7za7_3105za7, "lcm", 3 );
DEFINE_STRING( BGl_string2836z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2836za700za7za7_3106za7, "_exptfx", 7 );
DEFINE_STRING( BGl_string2837z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2837za700za7za7_3107za7, "_exptbx", 7 );
DEFINE_STRING( BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2840za700za7za7_3108za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2839z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2839za700za7za7_3109za7, "fixnum->string", 14 );
DEFINE_STRING( BGl_string2841z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2841za700za7za7_3110za7, "_fixnum->string", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3integerzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__stringza7d2za7e3int3111z00, va_generic_entry, BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2842za700za7za7_3112za7, "Illegal radix", 13 );
DEFINE_STRING( BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2843za700za7za7_3113za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_randombxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__randombxza700za7za7__3114za7, BGl__randombxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2845z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2845za700za7za7_3115za7, "integer->string", 15 );
DEFINE_STRING( BGl_string2846z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2846za700za7za7_3116za7, "_integer->string", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulofxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__modulofxza700za7za7__3117za7, BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2848z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2848za700za7za7_3118za7, "integer->string/padding", 23 );
DEFINE_STRING( BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2850za700za7za7_3119za7, "_integer->string/padding", 24 );
DEFINE_STRING( BGl_string2849z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2849za700za7za7_3120za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3zd3elongzd2envze2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3za7d3elongza730za73121z00, BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_randomzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__randomza700za7za7__r43122za7, BGl__randomz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2852z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2852za700za7za7_3123za7, "unsigned->string", 16 );
DEFINE_STRING( BGl_string2853z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2853za700za7za7_3124za7, "_unsigned->string", 17 );
DEFINE_STRING( BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2854za700za7za7_3125za7, "elong->string", 13 );
DEFINE_STRING( BGl_string2855z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2855za700za7za7_3126za7, "_elong->string", 14 );
DEFINE_STRING( BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2856za700za7za7_3127za7, "llong->string", 13 );
DEFINE_STRING( BGl_string2857z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2857za700za7za7_3128za7, "_llong->string", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unsignedzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__unsignedza7d2za7e3s3129z00, opt_generic_entry, BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2860z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2860za700za7za7_3130za7, "_bignum->string", 15 );
DEFINE_STRING( BGl_string2859z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2859za700za7za7_3131za7, "bignum->string", 14 );
DEFINE_STRING( BGl_string2861z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2861za700za7za7_3132za7, "bignum->bin-str!", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_absllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__absllongza700za7za7__3133za7, BGl__absllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2862z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2862za700za7za7_3134za7, "integer too large", 17 );
DEFINE_STRING( BGl_string2863z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2863za700za7za7_3135za7, "string-set!", 11 );
DEFINE_STRING( BGl_string2864z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2864za700za7za7_3136za7, "bignum->octet-string", 20 );
DEFINE_STRING( BGl_string2865z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2865za700za7za7_3137za7, "_bignum->octet-string", 21 );
DEFINE_STRING( BGl_string2866z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2866za700za7za7_3138za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2867z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2867za700za7za7_3139za7, "_octet-string->bignum", 21 );
DEFINE_STRING( BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2868za700za7za7_3140za7, "string->integer", 15 );
DEFINE_STRING( BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2870za700za7za7_3141za7, "string->elong", 13 );
DEFINE_STRING( BGl_string2869z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2869za700za7za7_3142za7, "_string->integer", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxllongza700za7za7__3143za7, va_generic_entry, BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string2871z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2871za700za7za7_3144za7, "_string->elong", 14 );
DEFINE_STRING( BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2872za700za7za7_3145za7, "string->llong", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddfxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__oddfxza7f3za7f3za7za7__3146z00, BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3fxzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3fxza7e3za7za7__r4_3147z00, BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2873z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2873za700za7za7_3148za7, "_string->llong", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7erofxzf3zd2envz86zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a7erofxza7f3za754za73149z00, BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2875z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2875za700za7za7_3150za7, "string->bignum", 14 );
DEFINE_STRING( BGl_string2876z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2876za700za7za7_3151za7, "_string->bignum", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativefxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negativefxza7f3za7f3152z00, BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2877z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2877za700za7za7_3153za7, "_string->integer-obj", 20 );
DEFINE_STRING( BGl_string2878z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2878za700za7za7_3154za7, "_random", 7 );
DEFINE_STRING( BGl_string2880z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2880za700za7za7_3155za7, "_seed-random!", 13 );
DEFINE_STRING( BGl_string2879z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2879za700za7za7_3156za7, "_randombx", 9 );
DEFINE_STRING( BGl_string2881z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2881za700za7za7_3157za7, "int", 3 );
DEFINE_STRING( BGl_string2882z00zz__r4_numbers_6_5_fixnumz00, BgL_bgl_string2882za700za7za7_3158za7, "__r4_numbers_6_5_fixnum", 23 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_quotientllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__quotientllongza703159za7, BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativellongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negativellongza7f3160za7, BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_exptfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__exptfxza700za7za7__r43161za7, BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gcdelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__gcdelongza700za7za7__3162za7, va_generic_entry, BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd3fxzd2envz01zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d3fxza7d3za7za7__r4_3163z00, BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_llongzd2ze3elongzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__llongza7d2za7e3elon3164z00, BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxvalllongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxvalllongza700za73165z00, BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_gcdbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__gcdbxza700za7za7__r4_3166za7, va_generic_entry, BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ze3elongzd2envz31zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7e3elongza7e3za7za7__3167z00, BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__stringza7d2za7e3big3168z00, opt_generic_entry, BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_lcmelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__lcmelongza700za7za7__3169za7, va_generic_entry, BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3fxzd2envz11zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3fxza7c3za7za7__r4_3170z00, BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_maxfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__maxfxza700za7za7__r4_3171za7, va_generic_entry, BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__bignumza7f3za7f3za7za7_3172z00, BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_absbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__absbxza700za7za7__r4_3173za7, BGl__absbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulollongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__modulollongza700za73174z00, BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oddbxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__oddbxza7f3za7f3za7za7__3175z00, BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zf2bxzd2envz20zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7f2bxza7f2za7za7__r4_3176z00, BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za7erobxzf3zd2envz86zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a7erobxza7f3za754za73177z00, BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2elongzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d2elongza7d2za7za7__3178z00, BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negativebxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negativebxza7f3za7f3179z00, BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3llongzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__stringza7d2za7e3llo3180z00, va_generic_entry, BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_negfxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__negfxza700za7za7__r4_3181za7, BGl__negfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_fixnumzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__fixnumza7d2za7e3str3182z00, opt_generic_entry, BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bignumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5_fixnumz00, BgL_bgl__bignumza7d2za7e3fix3183z00, BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zc3llongzd2envz11zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7c3llongza7c3za7za7__3184z00, BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderbxzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__remainderbxza700za73185z00, BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_positivellongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00, BgL_bgl__positivellongza7f3186za7, BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_zd2bxzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7d2bxza7d2za7za7__r4_3187z00, BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2elongzd2envz00zz__r4_numbers_6_5_fixnumz00, BgL_bgl__makeza7d2elongza7d23188z00, BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_remainderelongzd2envzd2zz__r4_numbers_6_5_fixnumz00, BgL_bgl__remainderelongza73189za7, BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_za2elongzd2envz70zz__r4_numbers_6_5_fixnumz00, BgL_bgl__za7a2elongza7a2za7za7__3190z00, BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long BgL_checksumz00_4093, char * BgL_fromz00_4094)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00(); 
BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 14 */
BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2805z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2812z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2818z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2838z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2839z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2844z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2845z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2847z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2848z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2851z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2852z00zz__r4_numbers_6_5_fixnumz00); 
BGl_symbol2858z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2859z00zz__r4_numbers_6_5_fixnumz00); 
return ( 
BGl_symbol2874z00zz__r4_numbers_6_5_fixnumz00 = 
bstring_to_symbol(BGl_string2875z00zz__r4_numbers_6_5_fixnumz00), BUNSPEC) ;} 
}



/* integer? */
BGL_EXPORTED_DEF bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 504 */
{ /* Ieee/fixnum.scm 505 */
bool_t BgL__ortest_1094z00_503;
BgL__ortest_1094z00_503 = 
INTEGERP(BgL_objz00_1); 
if(BgL__ortest_1094z00_503)
{ /* Ieee/fixnum.scm 505 */
return BgL__ortest_1094z00_503;}  else 
{ /* Ieee/fixnum.scm 506 */
bool_t BgL__ortest_1095z00_504;
BgL__ortest_1095z00_504 = 
ELONGP(BgL_objz00_1); 
if(BgL__ortest_1095z00_504)
{ /* Ieee/fixnum.scm 506 */
return BgL__ortest_1095z00_504;}  else 
{ /* Ieee/fixnum.scm 507 */
bool_t BgL__ortest_1096z00_505;
BgL__ortest_1096z00_505 = 
LLONGP(BgL_objz00_1); 
if(BgL__ortest_1096z00_505)
{ /* Ieee/fixnum.scm 507 */
return BgL__ortest_1096z00_505;}  else 
{ /* Ieee/fixnum.scm 508 */
bool_t BgL__ortest_1097z00_506;
BgL__ortest_1097z00_506 = 
BIGNUMP(BgL_objz00_1); 
if(BgL__ortest_1097z00_506)
{ /* Ieee/fixnum.scm 508 */
return BgL__ortest_1097z00_506;}  else 
{ /* Ieee/fixnum.scm 508 */
if(
REALP(BgL_objz00_1))
{ /* Ieee/fixnum.scm 509 */
double BgL_arg1237z00_508;
BgL_arg1237z00_508 = 
BGl_roundflz00zz__r4_numbers_6_5_flonumz00(
REAL_TO_DOUBLE(BgL_objz00_1)); 
return 
(
REAL_TO_DOUBLE(BgL_objz00_1)==BgL_arg1237z00_508);}  else 
{ /* Ieee/fixnum.scm 509 */
return ((bool_t)0);} } } } } } } 
}



/* _integer? */
obj_t BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2895, obj_t BgL_objz00_2896)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 504 */
return 
BBOOL(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_objz00_2896));} 
}



/* fixnum? */
BGL_EXPORTED_DEF bool_t BGl_fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 514 */
return 
INTEGERP(BgL_objz00_2);} 
}



/* _fixnum? */
obj_t BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2897, obj_t BgL_objz00_2898)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 514 */
return 
BBOOL(
INTEGERP(BgL_objz00_2898));} 
}



/* elong? */
BGL_EXPORTED_DEF bool_t BGl_elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_objz00_3)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 520 */
return 
ELONGP(BgL_objz00_3);} 
}



/* _elong? */
obj_t BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2899, obj_t BgL_objz00_2900)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 520 */
return 
BBOOL(
ELONGP(BgL_objz00_2900));} 
}



/* llong? */
BGL_EXPORTED_DEF bool_t BGl_llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_objz00_4)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 526 */
return 
LLONGP(BgL_objz00_4);} 
}



/* _llong? */
obj_t BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2901, obj_t BgL_objz00_2902)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 526 */
return 
BBOOL(
LLONGP(BgL_objz00_2902));} 
}



/* bignum? */
BGL_EXPORTED_DEF bool_t BGl_bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_objz00_5)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 532 */
return 
BIGNUMP(BgL_objz00_5);} 
}



/* _bignum? */
obj_t BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2903, obj_t BgL_objz00_2904)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 532 */
return 
BBOOL(
BIGNUMP(BgL_objz00_2904));} 
}



/* make-elong */
BGL_EXPORTED_DEF obj_t BGl_makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(long BgL_longz00_6)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 538 */
return 
make_belong(BgL_longz00_6);} 
}



/* _make-elong */
obj_t BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2905, obj_t BgL_longz00_2906)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 538 */
{ /* Ieee/fixnum.scm 539 */
long BgL_longz00_3946;
{ /* Ieee/fixnum.scm 539 */
obj_t BgL_auxz00_4138;
if(
INTEGERP(BgL_longz00_2906))
{ /* Ieee/fixnum.scm 539 */
BgL_auxz00_4138 = BgL_longz00_2906
; }  else 
{ 
obj_t BgL_auxz00_4141;
BgL_auxz00_4141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)25684)), BGl_string2707z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_longz00_2906); 
FAILURE(BgL_auxz00_4141,BFALSE,BFALSE);} 
BgL_longz00_3946 = 
(long)CINT(BgL_auxz00_4138); } 
return 
make_belong(BgL_longz00_3946);} } 
}



/* make-llong */
BGL_EXPORTED_DEF obj_t BGl_makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(long BgL_longz00_7)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 544 */
return 
LONG_TO_BLLONG(BgL_longz00_7);} 
}



/* _make-llong */
obj_t BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2907, obj_t BgL_longz00_2908)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 544 */
{ /* Ieee/fixnum.scm 545 */
long BgL_longz00_3947;
{ /* Ieee/fixnum.scm 545 */
obj_t BgL_auxz00_4148;
if(
INTEGERP(BgL_longz00_2908))
{ /* Ieee/fixnum.scm 545 */
BgL_auxz00_4148 = BgL_longz00_2908
; }  else 
{ 
obj_t BgL_auxz00_4151;
BgL_auxz00_4151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)25965)), BGl_string2709z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_longz00_2908); 
FAILURE(BgL_auxz00_4151,BFALSE,BFALSE);} 
BgL_longz00_3947 = 
(long)CINT(BgL_auxz00_4148); } 
return 
LONG_TO_BLLONG(BgL_longz00_3947);} } 
}



/* elong->llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_8)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 550 */
return 
(BGL_LONGLONG_T)(BgL_xz00_8);} 
}



/* _elong->llong */
obj_t BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2909, obj_t BgL_xz00_2910)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 550 */
{ /* Ieee/fixnum.scm 551 */
BGL_LONGLONG_T BgL_auxz00_4158;
{ /* Ieee/fixnum.scm 551 */
long BgL_xz00_3948;
{ /* Ieee/fixnum.scm 551 */
obj_t BgL_auxz00_4159;
if(
ELONGP(BgL_xz00_2910))
{ /* Ieee/fixnum.scm 551 */
BgL_auxz00_4159 = BgL_xz00_2910
; }  else 
{ 
obj_t BgL_auxz00_4162;
BgL_auxz00_4162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)26245)), BGl_string2710z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2910); 
FAILURE(BgL_auxz00_4162,BFALSE,BFALSE);} 
BgL_xz00_3948 = 
BELONG_TO_LONG(BgL_auxz00_4159); } 
BgL_auxz00_4158 = 
(BGL_LONGLONG_T)(BgL_xz00_3948); } 
return 
make_bllong(BgL_auxz00_4158);} } 
}



/* llong->elong */
BGL_EXPORTED_DEF long BGl_llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_9)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 556 */
return 
(long)(BgL_xz00_9);} 
}



/* _llong->elong */
obj_t BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2911, obj_t BgL_xz00_2912)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 556 */
{ /* Ieee/fixnum.scm 557 */
long BgL_auxz00_4170;
{ /* Ieee/fixnum.scm 557 */
BGL_LONGLONG_T BgL_xz00_3949;
{ /* Ieee/fixnum.scm 557 */
obj_t BgL_auxz00_4171;
if(
LLONGP(BgL_xz00_2912))
{ /* Ieee/fixnum.scm 557 */
BgL_auxz00_4171 = BgL_xz00_2912
; }  else 
{ 
obj_t BgL_auxz00_4174;
BgL_auxz00_4174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)26522)), BGl_string2712z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2912); 
FAILURE(BgL_auxz00_4174,BFALSE,BFALSE);} 
BgL_xz00_3949 = 
BLLONG_TO_LLONG(BgL_auxz00_4171); } 
BgL_auxz00_4170 = 
(long)(BgL_xz00_3949); } 
return 
make_belong(BgL_auxz00_4170);} } 
}



/* fixnum->bignum */
BGL_EXPORTED_DEF obj_t BGl_fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_10)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 562 */
return 
bgl_long_to_bignum(BgL_xz00_10);} 
}



/* _fixnum->bignum */
obj_t BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2913, obj_t BgL_xz00_2914)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 562 */
{ /* Ieee/fixnum.scm 563 */
long BgL_xz00_3950;
{ /* Ieee/fixnum.scm 563 */
obj_t BgL_auxz00_4182;
if(
INTEGERP(BgL_xz00_2914))
{ /* Ieee/fixnum.scm 563 */
BgL_auxz00_4182 = BgL_xz00_2914
; }  else 
{ 
obj_t BgL_auxz00_4185;
BgL_auxz00_4185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)26801)), BGl_string2714z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2914); 
FAILURE(BgL_auxz00_4185,BFALSE,BFALSE);} 
BgL_xz00_3950 = 
(long)CINT(BgL_auxz00_4182); } 
return 
bgl_long_to_bignum(BgL_xz00_3950);} } 
}



/* bignum->fixnum */
BGL_EXPORTED_DEF long BGl_bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_11)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 568 */
return 
bgl_bignum_to_long(BgL_xz00_11);} 
}



/* _bignum->fixnum */
obj_t BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2915, obj_t BgL_xz00_2916)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 568 */
{ /* Ieee/fixnum.scm 569 */
long BgL_auxz00_4192;
{ /* Ieee/fixnum.scm 569 */
obj_t BgL_xz00_3951;
if(
BIGNUMP(BgL_xz00_2916))
{ /* Ieee/fixnum.scm 569 */
BgL_xz00_3951 = BgL_xz00_2916; }  else 
{ 
obj_t BgL_auxz00_4195;
BgL_auxz00_4195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)27082)), BGl_string2715z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2916); 
FAILURE(BgL_auxz00_4195,BFALSE,BFALSE);} 
BgL_auxz00_4192 = 
bgl_bignum_to_long(BgL_xz00_3951); } 
return 
BINT(BgL_auxz00_4192);} } 
}



/* elong->bignum */
BGL_EXPORTED_DEF obj_t BGl_elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_12)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 574 */
return 
bgl_long_to_bignum(BgL_xz00_12);} 
}



/* _elong->bignum */
obj_t BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2917, obj_t BgL_xz00_2918)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 574 */
{ /* Ieee/fixnum.scm 575 */
long BgL_xz00_3952;
{ /* Ieee/fixnum.scm 575 */
obj_t BgL_auxz00_4202;
if(
ELONGP(BgL_xz00_2918))
{ /* Ieee/fixnum.scm 575 */
BgL_auxz00_4202 = BgL_xz00_2918
; }  else 
{ 
obj_t BgL_auxz00_4205;
BgL_auxz00_4205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)27362)), BGl_string2717z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2918); 
FAILURE(BgL_auxz00_4205,BFALSE,BFALSE);} 
BgL_xz00_3952 = 
BELONG_TO_LONG(BgL_auxz00_4202); } 
return 
bgl_long_to_bignum(BgL_xz00_3952);} } 
}



/* llong->bignum */
BGL_EXPORTED_DEF obj_t BGl_llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_13)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 580 */
return 
bgl_llong_to_bignum(BgL_xz00_13);} 
}



/* _llong->bignum */
obj_t BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2919, obj_t BgL_xz00_2920)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 580 */
{ /* Ieee/fixnum.scm 581 */
BGL_LONGLONG_T BgL_xz00_3953;
{ /* Ieee/fixnum.scm 581 */
obj_t BgL_auxz00_4212;
if(
LLONGP(BgL_xz00_2920))
{ /* Ieee/fixnum.scm 581 */
BgL_auxz00_4212 = BgL_xz00_2920
; }  else 
{ 
obj_t BgL_auxz00_4215;
BgL_auxz00_4215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)27641)), BGl_string2718z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2920); 
FAILURE(BgL_auxz00_4215,BFALSE,BFALSE);} 
BgL_xz00_3953 = 
BLLONG_TO_LLONG(BgL_auxz00_4212); } 
return 
bgl_llong_to_bignum(BgL_xz00_3953);} } 
}



/* minvalfx */
BGL_EXPORTED_DEF long BGl_minvalfxz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 586 */
return (LONG_MIN >> TAG_SHIFT);} 
}



/* _minvalfx */
obj_t BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2921)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 586 */
return 
BINT((LONG_MIN >> TAG_SHIFT));} 
}



/* maxvalfx */
BGL_EXPORTED_DEF long BGl_maxvalfxz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 587 */
return (LONG_MAX >> TAG_SHIFT);} 
}



/* _maxvalfx */
obj_t BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2922)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 587 */
return 
BINT((LONG_MAX >> TAG_SHIFT));} 
}



/* minvalelong */
BGL_EXPORTED_DEF long BGl_minvalelongz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 588 */
return LONG_MIN;} 
}



/* _minvalelong */
obj_t BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2923)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 588 */
return 
make_belong(LONG_MIN);} 
}



/* maxvalelong */
BGL_EXPORTED_DEF long BGl_maxvalelongz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 589 */
return LONG_MAX;} 
}



/* _maxvalelong */
obj_t BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2924)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 589 */
return 
make_belong(LONG_MAX);} 
}



/* minvalllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_minvalllongz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 590 */
return BGL_LONGLONG_MIN;} 
}



/* _minvalllong */
obj_t BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2925)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 590 */
return 
make_bllong(BGL_LONGLONG_MIN);} 
}



/* maxvalllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_maxvalllongz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 591 */
return BGL_LONGLONG_MAX;} 
}



/* _maxvalllong */
obj_t BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2926)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 591 */
return 
make_bllong(BGL_LONGLONG_MAX);} 
}



/* =fx */
BGL_EXPORTED_DEF bool_t BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_14, long BgL_n2z00_15)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 596 */
return 
(BgL_n1z00_14==BgL_n2z00_15);} 
}



/* _=fx */
obj_t BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2927, obj_t BgL_n1z00_2928, obj_t BgL_n2z00_2929)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 596 */
{ /* Ieee/fixnum.scm 597 */
bool_t BgL_auxz00_4228;
{ /* Ieee/fixnum.scm 597 */
long BgL_n1z00_3954;long BgL_n2z00_3955;
{ /* Ieee/fixnum.scm 597 */
obj_t BgL_auxz00_4229;
if(
INTEGERP(BgL_n1z00_2928))
{ /* Ieee/fixnum.scm 597 */
BgL_auxz00_4229 = BgL_n1z00_2928
; }  else 
{ 
obj_t BgL_auxz00_4232;
BgL_auxz00_4232 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28383)), BGl_string2719z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2928); 
FAILURE(BgL_auxz00_4232,BFALSE,BFALSE);} 
BgL_n1z00_3954 = 
(long)CINT(BgL_auxz00_4229); } 
{ /* Ieee/fixnum.scm 597 */
obj_t BgL_auxz00_4237;
if(
INTEGERP(BgL_n2z00_2929))
{ /* Ieee/fixnum.scm 597 */
BgL_auxz00_4237 = BgL_n2z00_2929
; }  else 
{ 
obj_t BgL_auxz00_4240;
BgL_auxz00_4240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28383)), BGl_string2719z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2929); 
FAILURE(BgL_auxz00_4240,BFALSE,BFALSE);} 
BgL_n2z00_3955 = 
(long)CINT(BgL_auxz00_4237); } 
BgL_auxz00_4228 = 
(BgL_n1z00_3954==BgL_n2z00_3955); } 
return 
BBOOL(BgL_auxz00_4228);} } 
}



/* =elong */
BGL_EXPORTED_DEF bool_t BGl_zd3elongzd3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_16, long BgL_n2z00_17)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 602 */
return 
(BgL_n1z00_16==BgL_n2z00_17);} 
}



/* _=elong */
obj_t BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2930, obj_t BgL_n1z00_2931, obj_t BgL_n2z00_2932)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 602 */
{ /* Ieee/fixnum.scm 603 */
bool_t BgL_auxz00_4248;
{ /* Ieee/fixnum.scm 603 */
long BgL_n1z00_3956;long BgL_n2z00_3957;
{ /* Ieee/fixnum.scm 603 */
obj_t BgL_auxz00_4249;
if(
ELONGP(BgL_n1z00_2931))
{ /* Ieee/fixnum.scm 603 */
BgL_auxz00_4249 = BgL_n1z00_2931
; }  else 
{ 
obj_t BgL_auxz00_4252;
BgL_auxz00_4252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28654)), BGl_string2720z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2931); 
FAILURE(BgL_auxz00_4252,BFALSE,BFALSE);} 
BgL_n1z00_3956 = 
BELONG_TO_LONG(BgL_auxz00_4249); } 
{ /* Ieee/fixnum.scm 603 */
obj_t BgL_auxz00_4257;
if(
ELONGP(BgL_n2z00_2932))
{ /* Ieee/fixnum.scm 603 */
BgL_auxz00_4257 = BgL_n2z00_2932
; }  else 
{ 
obj_t BgL_auxz00_4260;
BgL_auxz00_4260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28654)), BGl_string2720z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2932); 
FAILURE(BgL_auxz00_4260,BFALSE,BFALSE);} 
BgL_n2z00_3957 = 
BELONG_TO_LONG(BgL_auxz00_4257); } 
BgL_auxz00_4248 = 
(BgL_n1z00_3956==BgL_n2z00_3957); } 
return 
BBOOL(BgL_auxz00_4248);} } 
}



/* =llong */
BGL_EXPORTED_DEF bool_t BGl_zd3llongzd3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_18, BGL_LONGLONG_T BgL_n2z00_19)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 608 */
return 
(BgL_n1z00_18==BgL_n2z00_19);} 
}



/* _=llong */
obj_t BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2933, obj_t BgL_n1z00_2934, obj_t BgL_n2z00_2935)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 608 */
{ /* Ieee/fixnum.scm 609 */
bool_t BgL_auxz00_4268;
{ /* Ieee/fixnum.scm 609 */
BGL_LONGLONG_T BgL_n1z00_3958;BGL_LONGLONG_T BgL_n2z00_3959;
{ /* Ieee/fixnum.scm 609 */
obj_t BgL_auxz00_4269;
if(
LLONGP(BgL_n1z00_2934))
{ /* Ieee/fixnum.scm 609 */
BgL_auxz00_4269 = BgL_n1z00_2934
; }  else 
{ 
obj_t BgL_auxz00_4272;
BgL_auxz00_4272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28928)), BGl_string2721z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2934); 
FAILURE(BgL_auxz00_4272,BFALSE,BFALSE);} 
BgL_n1z00_3958 = 
BLLONG_TO_LLONG(BgL_auxz00_4269); } 
{ /* Ieee/fixnum.scm 609 */
obj_t BgL_auxz00_4277;
if(
LLONGP(BgL_n2z00_2935))
{ /* Ieee/fixnum.scm 609 */
BgL_auxz00_4277 = BgL_n2z00_2935
; }  else 
{ 
obj_t BgL_auxz00_4280;
BgL_auxz00_4280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)28928)), BGl_string2721z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2935); 
FAILURE(BgL_auxz00_4280,BFALSE,BFALSE);} 
BgL_n2z00_3959 = 
BLLONG_TO_LLONG(BgL_auxz00_4277); } 
BgL_auxz00_4268 = 
(BgL_n1z00_3958==BgL_n2z00_3959); } 
return 
BBOOL(BgL_auxz00_4268);} } 
}



/* =bx */
BGL_EXPORTED_DEF bool_t BGl_zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_20, obj_t BgL_n2z00_21)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 614 */
return 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_20, BgL_n2z00_21))==((long)0));} 
}



/* _=bx */
obj_t BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2936, obj_t BgL_n1z00_2937, obj_t BgL_n2z00_2938)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 614 */
{ /* Ieee/fixnum.scm 615 */
bool_t BgL_auxz00_4290;
{ /* Ieee/fixnum.scm 615 */
obj_t BgL_n1z00_3960;obj_t BgL_n2z00_3961;
if(
BIGNUMP(BgL_n1z00_2937))
{ /* Ieee/fixnum.scm 615 */
BgL_n1z00_3960 = BgL_n1z00_2937; }  else 
{ 
obj_t BgL_auxz00_4293;
BgL_auxz00_4293 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29204)), BGl_string2722z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2937); 
FAILURE(BgL_auxz00_4293,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_2938))
{ /* Ieee/fixnum.scm 615 */
BgL_n2z00_3961 = BgL_n2z00_2938; }  else 
{ 
obj_t BgL_auxz00_4299;
BgL_auxz00_4299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29204)), BGl_string2722z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2938); 
FAILURE(BgL_auxz00_4299,BFALSE,BFALSE);} 
BgL_auxz00_4290 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_3960, BgL_n2z00_3961))==((long)0)); } 
return 
BBOOL(BgL_auxz00_4290);} } 
}



/* <fx */
BGL_EXPORTED_DEF bool_t BGl_zc3fxzc3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_22, long BgL_n2z00_23)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 620 */
return 
(BgL_n1z00_22<BgL_n2z00_23);} 
}



/* _<fx */
obj_t BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2939, obj_t BgL_n1z00_2940, obj_t BgL_n2z00_2941)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 620 */
{ /* Ieee/fixnum.scm 621 */
bool_t BgL_auxz00_4308;
{ /* Ieee/fixnum.scm 621 */
long BgL_n1z00_3962;long BgL_n2z00_3963;
{ /* Ieee/fixnum.scm 621 */
obj_t BgL_auxz00_4309;
if(
INTEGERP(BgL_n1z00_2940))
{ /* Ieee/fixnum.scm 621 */
BgL_auxz00_4309 = BgL_n1z00_2940
; }  else 
{ 
obj_t BgL_auxz00_4312;
BgL_auxz00_4312 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29481)), BGl_string2723z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2940); 
FAILURE(BgL_auxz00_4312,BFALSE,BFALSE);} 
BgL_n1z00_3962 = 
(long)CINT(BgL_auxz00_4309); } 
{ /* Ieee/fixnum.scm 621 */
obj_t BgL_auxz00_4317;
if(
INTEGERP(BgL_n2z00_2941))
{ /* Ieee/fixnum.scm 621 */
BgL_auxz00_4317 = BgL_n2z00_2941
; }  else 
{ 
obj_t BgL_auxz00_4320;
BgL_auxz00_4320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29481)), BGl_string2723z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2941); 
FAILURE(BgL_auxz00_4320,BFALSE,BFALSE);} 
BgL_n2z00_3963 = 
(long)CINT(BgL_auxz00_4317); } 
BgL_auxz00_4308 = 
(BgL_n1z00_3962<BgL_n2z00_3963); } 
return 
BBOOL(BgL_auxz00_4308);} } 
}



/* <elong */
BGL_EXPORTED_DEF bool_t BGl_zc3elongzc3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_24, long BgL_n2z00_25)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 626 */
return 
(BgL_n1z00_24<BgL_n2z00_25);} 
}



/* _<elong */
obj_t BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2942, obj_t BgL_n1z00_2943, obj_t BgL_n2z00_2944)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 626 */
{ /* Ieee/fixnum.scm 627 */
bool_t BgL_auxz00_4328;
{ /* Ieee/fixnum.scm 627 */
long BgL_n1z00_3964;long BgL_n2z00_3965;
{ /* Ieee/fixnum.scm 627 */
obj_t BgL_auxz00_4329;
if(
ELONGP(BgL_n1z00_2943))
{ /* Ieee/fixnum.scm 627 */
BgL_auxz00_4329 = BgL_n1z00_2943
; }  else 
{ 
obj_t BgL_auxz00_4332;
BgL_auxz00_4332 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29752)), BGl_string2724z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2943); 
FAILURE(BgL_auxz00_4332,BFALSE,BFALSE);} 
BgL_n1z00_3964 = 
BELONG_TO_LONG(BgL_auxz00_4329); } 
{ /* Ieee/fixnum.scm 627 */
obj_t BgL_auxz00_4337;
if(
ELONGP(BgL_n2z00_2944))
{ /* Ieee/fixnum.scm 627 */
BgL_auxz00_4337 = BgL_n2z00_2944
; }  else 
{ 
obj_t BgL_auxz00_4340;
BgL_auxz00_4340 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)29752)), BGl_string2724z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2944); 
FAILURE(BgL_auxz00_4340,BFALSE,BFALSE);} 
BgL_n2z00_3965 = 
BELONG_TO_LONG(BgL_auxz00_4337); } 
BgL_auxz00_4328 = 
(BgL_n1z00_3964<BgL_n2z00_3965); } 
return 
BBOOL(BgL_auxz00_4328);} } 
}



/* <llong */
BGL_EXPORTED_DEF bool_t BGl_zc3llongzc3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_26, BGL_LONGLONG_T BgL_n2z00_27)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 632 */
return 
(BgL_n1z00_26<BgL_n2z00_27);} 
}



/* _<llong */
obj_t BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2945, obj_t BgL_n1z00_2946, obj_t BgL_n2z00_2947)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 632 */
{ /* Ieee/fixnum.scm 633 */
bool_t BgL_auxz00_4348;
{ /* Ieee/fixnum.scm 633 */
BGL_LONGLONG_T BgL_n1z00_3966;BGL_LONGLONG_T BgL_n2z00_3967;
{ /* Ieee/fixnum.scm 633 */
obj_t BgL_auxz00_4349;
if(
LLONGP(BgL_n1z00_2946))
{ /* Ieee/fixnum.scm 633 */
BgL_auxz00_4349 = BgL_n1z00_2946
; }  else 
{ 
obj_t BgL_auxz00_4352;
BgL_auxz00_4352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30026)), BGl_string2725z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2946); 
FAILURE(BgL_auxz00_4352,BFALSE,BFALSE);} 
BgL_n1z00_3966 = 
BLLONG_TO_LLONG(BgL_auxz00_4349); } 
{ /* Ieee/fixnum.scm 633 */
obj_t BgL_auxz00_4357;
if(
LLONGP(BgL_n2z00_2947))
{ /* Ieee/fixnum.scm 633 */
BgL_auxz00_4357 = BgL_n2z00_2947
; }  else 
{ 
obj_t BgL_auxz00_4360;
BgL_auxz00_4360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30026)), BGl_string2725z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2947); 
FAILURE(BgL_auxz00_4360,BFALSE,BFALSE);} 
BgL_n2z00_3967 = 
BLLONG_TO_LLONG(BgL_auxz00_4357); } 
BgL_auxz00_4348 = 
(BgL_n1z00_3966<BgL_n2z00_3967); } 
return 
BBOOL(BgL_auxz00_4348);} } 
}



/* <bx */
BGL_EXPORTED_DEF bool_t BGl_zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_28, obj_t BgL_n2z00_29)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 638 */
return 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_28, BgL_n2z00_29))<((long)0));} 
}



/* _<bx */
obj_t BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2948, obj_t BgL_n1z00_2949, obj_t BgL_n2z00_2950)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 638 */
{ /* Ieee/fixnum.scm 639 */
bool_t BgL_auxz00_4370;
{ /* Ieee/fixnum.scm 639 */
obj_t BgL_n1z00_3968;obj_t BgL_n2z00_3969;
if(
BIGNUMP(BgL_n1z00_2949))
{ /* Ieee/fixnum.scm 639 */
BgL_n1z00_3968 = BgL_n1z00_2949; }  else 
{ 
obj_t BgL_auxz00_4373;
BgL_auxz00_4373 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30302)), BGl_string2726z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2949); 
FAILURE(BgL_auxz00_4373,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_2950))
{ /* Ieee/fixnum.scm 639 */
BgL_n2z00_3969 = BgL_n2z00_2950; }  else 
{ 
obj_t BgL_auxz00_4379;
BgL_auxz00_4379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30302)), BGl_string2726z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2950); 
FAILURE(BgL_auxz00_4379,BFALSE,BFALSE);} 
BgL_auxz00_4370 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_3968, BgL_n2z00_3969))<((long)0)); } 
return 
BBOOL(BgL_auxz00_4370);} } 
}



/* >fx */
BGL_EXPORTED_DEF bool_t BGl_ze3fxze3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_30, long BgL_n2z00_31)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 644 */
return 
(BgL_n1z00_30>BgL_n2z00_31);} 
}



/* _>fx */
obj_t BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2951, obj_t BgL_n1z00_2952, obj_t BgL_n2z00_2953)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 644 */
{ /* Ieee/fixnum.scm 645 */
bool_t BgL_auxz00_4388;
{ /* Ieee/fixnum.scm 645 */
long BgL_n1z00_3970;long BgL_n2z00_3971;
{ /* Ieee/fixnum.scm 645 */
obj_t BgL_auxz00_4389;
if(
INTEGERP(BgL_n1z00_2952))
{ /* Ieee/fixnum.scm 645 */
BgL_auxz00_4389 = BgL_n1z00_2952
; }  else 
{ 
obj_t BgL_auxz00_4392;
BgL_auxz00_4392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30579)), BGl_string2727z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2952); 
FAILURE(BgL_auxz00_4392,BFALSE,BFALSE);} 
BgL_n1z00_3970 = 
(long)CINT(BgL_auxz00_4389); } 
{ /* Ieee/fixnum.scm 645 */
obj_t BgL_auxz00_4397;
if(
INTEGERP(BgL_n2z00_2953))
{ /* Ieee/fixnum.scm 645 */
BgL_auxz00_4397 = BgL_n2z00_2953
; }  else 
{ 
obj_t BgL_auxz00_4400;
BgL_auxz00_4400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30579)), BGl_string2727z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2953); 
FAILURE(BgL_auxz00_4400,BFALSE,BFALSE);} 
BgL_n2z00_3971 = 
(long)CINT(BgL_auxz00_4397); } 
BgL_auxz00_4388 = 
(BgL_n1z00_3970>BgL_n2z00_3971); } 
return 
BBOOL(BgL_auxz00_4388);} } 
}



/* >elong */
BGL_EXPORTED_DEF bool_t BGl_ze3elongze3zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_32, long BgL_n2z00_33)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 650 */
return 
(BgL_n1z00_32>BgL_n2z00_33);} 
}



/* _>elong */
obj_t BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2954, obj_t BgL_n1z00_2955, obj_t BgL_n2z00_2956)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 650 */
{ /* Ieee/fixnum.scm 651 */
bool_t BgL_auxz00_4408;
{ /* Ieee/fixnum.scm 651 */
long BgL_n1z00_3972;long BgL_n2z00_3973;
{ /* Ieee/fixnum.scm 651 */
obj_t BgL_auxz00_4409;
if(
ELONGP(BgL_n1z00_2955))
{ /* Ieee/fixnum.scm 651 */
BgL_auxz00_4409 = BgL_n1z00_2955
; }  else 
{ 
obj_t BgL_auxz00_4412;
BgL_auxz00_4412 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30850)), BGl_string2728z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2955); 
FAILURE(BgL_auxz00_4412,BFALSE,BFALSE);} 
BgL_n1z00_3972 = 
BELONG_TO_LONG(BgL_auxz00_4409); } 
{ /* Ieee/fixnum.scm 651 */
obj_t BgL_auxz00_4417;
if(
ELONGP(BgL_n2z00_2956))
{ /* Ieee/fixnum.scm 651 */
BgL_auxz00_4417 = BgL_n2z00_2956
; }  else 
{ 
obj_t BgL_auxz00_4420;
BgL_auxz00_4420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)30850)), BGl_string2728z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2956); 
FAILURE(BgL_auxz00_4420,BFALSE,BFALSE);} 
BgL_n2z00_3973 = 
BELONG_TO_LONG(BgL_auxz00_4417); } 
BgL_auxz00_4408 = 
(BgL_n1z00_3972>BgL_n2z00_3973); } 
return 
BBOOL(BgL_auxz00_4408);} } 
}



/* >llong */
BGL_EXPORTED_DEF bool_t BGl_ze3llongze3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_34, BGL_LONGLONG_T BgL_n2z00_35)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 656 */
return 
(BgL_n1z00_34>BgL_n2z00_35);} 
}



/* _>llong */
obj_t BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2957, obj_t BgL_n1z00_2958, obj_t BgL_n2z00_2959)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 656 */
{ /* Ieee/fixnum.scm 657 */
bool_t BgL_auxz00_4428;
{ /* Ieee/fixnum.scm 657 */
BGL_LONGLONG_T BgL_n1z00_3974;BGL_LONGLONG_T BgL_n2z00_3975;
{ /* Ieee/fixnum.scm 657 */
obj_t BgL_auxz00_4429;
if(
LLONGP(BgL_n1z00_2958))
{ /* Ieee/fixnum.scm 657 */
BgL_auxz00_4429 = BgL_n1z00_2958
; }  else 
{ 
obj_t BgL_auxz00_4432;
BgL_auxz00_4432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31124)), BGl_string2729z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2958); 
FAILURE(BgL_auxz00_4432,BFALSE,BFALSE);} 
BgL_n1z00_3974 = 
BLLONG_TO_LLONG(BgL_auxz00_4429); } 
{ /* Ieee/fixnum.scm 657 */
obj_t BgL_auxz00_4437;
if(
LLONGP(BgL_n2z00_2959))
{ /* Ieee/fixnum.scm 657 */
BgL_auxz00_4437 = BgL_n2z00_2959
; }  else 
{ 
obj_t BgL_auxz00_4440;
BgL_auxz00_4440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31124)), BGl_string2729z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2959); 
FAILURE(BgL_auxz00_4440,BFALSE,BFALSE);} 
BgL_n2z00_3975 = 
BLLONG_TO_LLONG(BgL_auxz00_4437); } 
BgL_auxz00_4428 = 
(BgL_n1z00_3974>BgL_n2z00_3975); } 
return 
BBOOL(BgL_auxz00_4428);} } 
}



/* >bx */
BGL_EXPORTED_DEF bool_t BGl_ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_36, obj_t BgL_n2z00_37)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 662 */
return 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_36, BgL_n2z00_37))>((long)0));} 
}



/* _>bx */
obj_t BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2960, obj_t BgL_n1z00_2961, obj_t BgL_n2z00_2962)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 662 */
{ /* Ieee/fixnum.scm 663 */
bool_t BgL_auxz00_4450;
{ /* Ieee/fixnum.scm 663 */
obj_t BgL_n1z00_3976;obj_t BgL_n2z00_3977;
if(
BIGNUMP(BgL_n1z00_2961))
{ /* Ieee/fixnum.scm 663 */
BgL_n1z00_3976 = BgL_n1z00_2961; }  else 
{ 
obj_t BgL_auxz00_4453;
BgL_auxz00_4453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31400)), BGl_string2730z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2961); 
FAILURE(BgL_auxz00_4453,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_2962))
{ /* Ieee/fixnum.scm 663 */
BgL_n2z00_3977 = BgL_n2z00_2962; }  else 
{ 
obj_t BgL_auxz00_4459;
BgL_auxz00_4459 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31400)), BGl_string2730z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2962); 
FAILURE(BgL_auxz00_4459,BFALSE,BFALSE);} 
BgL_auxz00_4450 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_3976, BgL_n2z00_3977))>((long)0)); } 
return 
BBOOL(BgL_auxz00_4450);} } 
}



/* <=fx */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_38, long BgL_n2z00_39)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 668 */
return 
(BgL_n1z00_38<=BgL_n2z00_39);} 
}



/* _<=fx */
obj_t BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2963, obj_t BgL_n1z00_2964, obj_t BgL_n2z00_2965)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 668 */
{ /* Ieee/fixnum.scm 669 */
bool_t BgL_auxz00_4468;
{ /* Ieee/fixnum.scm 669 */
long BgL_n1z00_3978;long BgL_n2z00_3979;
{ /* Ieee/fixnum.scm 669 */
obj_t BgL_auxz00_4469;
if(
INTEGERP(BgL_n1z00_2964))
{ /* Ieee/fixnum.scm 669 */
BgL_auxz00_4469 = BgL_n1z00_2964
; }  else 
{ 
obj_t BgL_auxz00_4472;
BgL_auxz00_4472 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31678)), BGl_string2731z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2964); 
FAILURE(BgL_auxz00_4472,BFALSE,BFALSE);} 
BgL_n1z00_3978 = 
(long)CINT(BgL_auxz00_4469); } 
{ /* Ieee/fixnum.scm 669 */
obj_t BgL_auxz00_4477;
if(
INTEGERP(BgL_n2z00_2965))
{ /* Ieee/fixnum.scm 669 */
BgL_auxz00_4477 = BgL_n2z00_2965
; }  else 
{ 
obj_t BgL_auxz00_4480;
BgL_auxz00_4480 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31678)), BGl_string2731z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2965); 
FAILURE(BgL_auxz00_4480,BFALSE,BFALSE);} 
BgL_n2z00_3979 = 
(long)CINT(BgL_auxz00_4477); } 
BgL_auxz00_4468 = 
(BgL_n1z00_3978<=BgL_n2z00_3979); } 
return 
BBOOL(BgL_auxz00_4468);} } 
}



/* <=elong */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_40, long BgL_n2z00_41)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 674 */
return 
(BgL_n1z00_40<=BgL_n2z00_41);} 
}



/* _<=elong */
obj_t BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2966, obj_t BgL_n1z00_2967, obj_t BgL_n2z00_2968)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 674 */
{ /* Ieee/fixnum.scm 675 */
bool_t BgL_auxz00_4488;
{ /* Ieee/fixnum.scm 675 */
long BgL_n1z00_3980;long BgL_n2z00_3981;
{ /* Ieee/fixnum.scm 675 */
obj_t BgL_auxz00_4489;
if(
ELONGP(BgL_n1z00_2967))
{ /* Ieee/fixnum.scm 675 */
BgL_auxz00_4489 = BgL_n1z00_2967
; }  else 
{ 
obj_t BgL_auxz00_4492;
BgL_auxz00_4492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31951)), BGl_string2732z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2967); 
FAILURE(BgL_auxz00_4492,BFALSE,BFALSE);} 
BgL_n1z00_3980 = 
BELONG_TO_LONG(BgL_auxz00_4489); } 
{ /* Ieee/fixnum.scm 675 */
obj_t BgL_auxz00_4497;
if(
ELONGP(BgL_n2z00_2968))
{ /* Ieee/fixnum.scm 675 */
BgL_auxz00_4497 = BgL_n2z00_2968
; }  else 
{ 
obj_t BgL_auxz00_4500;
BgL_auxz00_4500 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)31951)), BGl_string2732z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2968); 
FAILURE(BgL_auxz00_4500,BFALSE,BFALSE);} 
BgL_n2z00_3981 = 
BELONG_TO_LONG(BgL_auxz00_4497); } 
BgL_auxz00_4488 = 
(BgL_n1z00_3980<=BgL_n2z00_3981); } 
return 
BBOOL(BgL_auxz00_4488);} } 
}



/* <=llong */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_42, BGL_LONGLONG_T BgL_n2z00_43)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 680 */
return 
(BgL_n1z00_42<=BgL_n2z00_43);} 
}



/* _<=llong */
obj_t BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2969, obj_t BgL_n1z00_2970, obj_t BgL_n2z00_2971)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 680 */
{ /* Ieee/fixnum.scm 681 */
bool_t BgL_auxz00_4508;
{ /* Ieee/fixnum.scm 681 */
BGL_LONGLONG_T BgL_n1z00_3982;BGL_LONGLONG_T BgL_n2z00_3983;
{ /* Ieee/fixnum.scm 681 */
obj_t BgL_auxz00_4509;
if(
LLONGP(BgL_n1z00_2970))
{ /* Ieee/fixnum.scm 681 */
BgL_auxz00_4509 = BgL_n1z00_2970
; }  else 
{ 
obj_t BgL_auxz00_4512;
BgL_auxz00_4512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32227)), BGl_string2733z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2970); 
FAILURE(BgL_auxz00_4512,BFALSE,BFALSE);} 
BgL_n1z00_3982 = 
BLLONG_TO_LLONG(BgL_auxz00_4509); } 
{ /* Ieee/fixnum.scm 681 */
obj_t BgL_auxz00_4517;
if(
LLONGP(BgL_n2z00_2971))
{ /* Ieee/fixnum.scm 681 */
BgL_auxz00_4517 = BgL_n2z00_2971
; }  else 
{ 
obj_t BgL_auxz00_4520;
BgL_auxz00_4520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32227)), BGl_string2733z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2971); 
FAILURE(BgL_auxz00_4520,BFALSE,BFALSE);} 
BgL_n2z00_3983 = 
BLLONG_TO_LLONG(BgL_auxz00_4517); } 
BgL_auxz00_4508 = 
(BgL_n1z00_3982<=BgL_n2z00_3983); } 
return 
BBOOL(BgL_auxz00_4508);} } 
}



/* <=bx */
BGL_EXPORTED_DEF bool_t BGl_zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_44, obj_t BgL_n2z00_45)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 686 */
return 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_44, BgL_n2z00_45))<=((long)0));} 
}



/* _<=bx */
obj_t BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2972, obj_t BgL_n1z00_2973, obj_t BgL_n2z00_2974)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 686 */
{ /* Ieee/fixnum.scm 687 */
bool_t BgL_auxz00_4530;
{ /* Ieee/fixnum.scm 687 */
obj_t BgL_n1z00_3984;obj_t BgL_n2z00_3985;
if(
BIGNUMP(BgL_n1z00_2973))
{ /* Ieee/fixnum.scm 687 */
BgL_n1z00_3984 = BgL_n1z00_2973; }  else 
{ 
obj_t BgL_auxz00_4533;
BgL_auxz00_4533 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32506)), BGl_string2734z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2973); 
FAILURE(BgL_auxz00_4533,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_2974))
{ /* Ieee/fixnum.scm 687 */
BgL_n2z00_3985 = BgL_n2z00_2974; }  else 
{ 
obj_t BgL_auxz00_4539;
BgL_auxz00_4539 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32506)), BGl_string2734z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2974); 
FAILURE(BgL_auxz00_4539,BFALSE,BFALSE);} 
BgL_auxz00_4530 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_3984, BgL_n2z00_3985))<=((long)0)); } 
return 
BBOOL(BgL_auxz00_4530);} } 
}



/* >=fx */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_46, long BgL_n2z00_47)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 692 */
return 
(BgL_n1z00_46>=BgL_n2z00_47);} 
}



/* _>=fx */
obj_t BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2975, obj_t BgL_n1z00_2976, obj_t BgL_n2z00_2977)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 692 */
{ /* Ieee/fixnum.scm 693 */
bool_t BgL_auxz00_4548;
{ /* Ieee/fixnum.scm 693 */
long BgL_n1z00_3986;long BgL_n2z00_3987;
{ /* Ieee/fixnum.scm 693 */
obj_t BgL_auxz00_4549;
if(
INTEGERP(BgL_n1z00_2976))
{ /* Ieee/fixnum.scm 693 */
BgL_auxz00_4549 = BgL_n1z00_2976
; }  else 
{ 
obj_t BgL_auxz00_4552;
BgL_auxz00_4552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32784)), BGl_string2735z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2976); 
FAILURE(BgL_auxz00_4552,BFALSE,BFALSE);} 
BgL_n1z00_3986 = 
(long)CINT(BgL_auxz00_4549); } 
{ /* Ieee/fixnum.scm 693 */
obj_t BgL_auxz00_4557;
if(
INTEGERP(BgL_n2z00_2977))
{ /* Ieee/fixnum.scm 693 */
BgL_auxz00_4557 = BgL_n2z00_2977
; }  else 
{ 
obj_t BgL_auxz00_4560;
BgL_auxz00_4560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)32784)), BGl_string2735z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2977); 
FAILURE(BgL_auxz00_4560,BFALSE,BFALSE);} 
BgL_n2z00_3987 = 
(long)CINT(BgL_auxz00_4557); } 
BgL_auxz00_4548 = 
(BgL_n1z00_3986>=BgL_n2z00_3987); } 
return 
BBOOL(BgL_auxz00_4548);} } 
}



/* >=elong */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_48, long BgL_n2z00_49)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 698 */
return 
(BgL_n1z00_48>=BgL_n2z00_49);} 
}



/* _>=elong */
obj_t BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2978, obj_t BgL_n1z00_2979, obj_t BgL_n2z00_2980)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 698 */
{ /* Ieee/fixnum.scm 699 */
bool_t BgL_auxz00_4568;
{ /* Ieee/fixnum.scm 699 */
long BgL_n1z00_3988;long BgL_n2z00_3989;
{ /* Ieee/fixnum.scm 699 */
obj_t BgL_auxz00_4569;
if(
ELONGP(BgL_n1z00_2979))
{ /* Ieee/fixnum.scm 699 */
BgL_auxz00_4569 = BgL_n1z00_2979
; }  else 
{ 
obj_t BgL_auxz00_4572;
BgL_auxz00_4572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33057)), BGl_string2736z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2979); 
FAILURE(BgL_auxz00_4572,BFALSE,BFALSE);} 
BgL_n1z00_3988 = 
BELONG_TO_LONG(BgL_auxz00_4569); } 
{ /* Ieee/fixnum.scm 699 */
obj_t BgL_auxz00_4577;
if(
ELONGP(BgL_n2z00_2980))
{ /* Ieee/fixnum.scm 699 */
BgL_auxz00_4577 = BgL_n2z00_2980
; }  else 
{ 
obj_t BgL_auxz00_4580;
BgL_auxz00_4580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33057)), BGl_string2736z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2980); 
FAILURE(BgL_auxz00_4580,BFALSE,BFALSE);} 
BgL_n2z00_3989 = 
BELONG_TO_LONG(BgL_auxz00_4577); } 
BgL_auxz00_4568 = 
(BgL_n1z00_3988>=BgL_n2z00_3989); } 
return 
BBOOL(BgL_auxz00_4568);} } 
}



/* >=llong */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_50, BGL_LONGLONG_T BgL_n2z00_51)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 704 */
return 
(BgL_n1z00_50>=BgL_n2z00_51);} 
}



/* _>=llong */
obj_t BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2981, obj_t BgL_n1z00_2982, obj_t BgL_n2z00_2983)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 704 */
{ /* Ieee/fixnum.scm 705 */
bool_t BgL_auxz00_4588;
{ /* Ieee/fixnum.scm 705 */
BGL_LONGLONG_T BgL_n1z00_3990;BGL_LONGLONG_T BgL_n2z00_3991;
{ /* Ieee/fixnum.scm 705 */
obj_t BgL_auxz00_4589;
if(
LLONGP(BgL_n1z00_2982))
{ /* Ieee/fixnum.scm 705 */
BgL_auxz00_4589 = BgL_n1z00_2982
; }  else 
{ 
obj_t BgL_auxz00_4592;
BgL_auxz00_4592 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33333)), BGl_string2737z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2982); 
FAILURE(BgL_auxz00_4592,BFALSE,BFALSE);} 
BgL_n1z00_3990 = 
BLLONG_TO_LLONG(BgL_auxz00_4589); } 
{ /* Ieee/fixnum.scm 705 */
obj_t BgL_auxz00_4597;
if(
LLONGP(BgL_n2z00_2983))
{ /* Ieee/fixnum.scm 705 */
BgL_auxz00_4597 = BgL_n2z00_2983
; }  else 
{ 
obj_t BgL_auxz00_4600;
BgL_auxz00_4600 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33333)), BGl_string2737z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2983); 
FAILURE(BgL_auxz00_4600,BFALSE,BFALSE);} 
BgL_n2z00_3991 = 
BLLONG_TO_LLONG(BgL_auxz00_4597); } 
BgL_auxz00_4588 = 
(BgL_n1z00_3990>=BgL_n2z00_3991); } 
return 
BBOOL(BgL_auxz00_4588);} } 
}



/* >=bx */
BGL_EXPORTED_DEF bool_t BGl_ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_52, obj_t BgL_n2z00_53)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 710 */
return 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_52, BgL_n2z00_53))>=((long)0));} 
}



/* _>=bx */
obj_t BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2984, obj_t BgL_n1z00_2985, obj_t BgL_n2z00_2986)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 710 */
{ /* Ieee/fixnum.scm 711 */
bool_t BgL_auxz00_4610;
{ /* Ieee/fixnum.scm 711 */
obj_t BgL_n1z00_3992;obj_t BgL_n2z00_3993;
if(
BIGNUMP(BgL_n1z00_2985))
{ /* Ieee/fixnum.scm 711 */
BgL_n1z00_3992 = BgL_n1z00_2985; }  else 
{ 
obj_t BgL_auxz00_4613;
BgL_auxz00_4613 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33612)), BGl_string2738z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2985); 
FAILURE(BgL_auxz00_4613,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_2986))
{ /* Ieee/fixnum.scm 711 */
BgL_n2z00_3993 = BgL_n2z00_2986; }  else 
{ 
obj_t BgL_auxz00_4619;
BgL_auxz00_4619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33612)), BGl_string2738z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2986); 
FAILURE(BgL_auxz00_4619,BFALSE,BFALSE);} 
BgL_auxz00_4610 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_3992, BgL_n2z00_3993))>=((long)0)); } 
return 
BBOOL(BgL_auxz00_4610);} } 
}



/* zerofx? */
BGL_EXPORTED_DEF bool_t BGl_za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_54)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 716 */
return 
(BgL_nz00_54==((long)0));} 
}



/* _zerofx? */
obj_t BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2987, obj_t BgL_nz00_2988)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 716 */
{ /* Ieee/fixnum.scm 717 */
bool_t BgL_auxz00_4628;
{ /* Ieee/fixnum.scm 717 */
long BgL_nz00_3994;
{ /* Ieee/fixnum.scm 717 */
obj_t BgL_auxz00_4629;
if(
INTEGERP(BgL_nz00_2988))
{ /* Ieee/fixnum.scm 717 */
BgL_auxz00_4629 = BgL_nz00_2988
; }  else 
{ 
obj_t BgL_auxz00_4632;
BgL_auxz00_4632 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)33889)), BGl_string2739z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2988); 
FAILURE(BgL_auxz00_4632,BFALSE,BFALSE);} 
BgL_nz00_3994 = 
(long)CINT(BgL_auxz00_4629); } 
BgL_auxz00_4628 = 
(BgL_nz00_3994==((long)0)); } 
return 
BBOOL(BgL_auxz00_4628);} } 
}



/* zeroelong? */
BGL_EXPORTED_DEF bool_t BGl_za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_55)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 722 */
return 
(BgL_nz00_55==((long)0));} 
}



/* _zeroelong? */
obj_t BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2989, obj_t BgL_nz00_2990)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 722 */
{ /* Ieee/fixnum.scm 723 */
bool_t BgL_auxz00_4640;
{ /* Ieee/fixnum.scm 723 */
long BgL_nz00_3995;
{ /* Ieee/fixnum.scm 723 */
obj_t BgL_auxz00_4641;
if(
ELONGP(BgL_nz00_2990))
{ /* Ieee/fixnum.scm 723 */
BgL_auxz00_4641 = BgL_nz00_2990
; }  else 
{ 
obj_t BgL_auxz00_4644;
BgL_auxz00_4644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)34156)), BGl_string2740z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2990); 
FAILURE(BgL_auxz00_4644,BFALSE,BFALSE);} 
BgL_nz00_3995 = 
BELONG_TO_LONG(BgL_auxz00_4641); } 
BgL_auxz00_4640 = 
(BgL_nz00_3995==((long)0)); } 
return 
BBOOL(BgL_auxz00_4640);} } 
}



/* zerollong? */
BGL_EXPORTED_DEF bool_t BGl_za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_nz00_56)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 728 */
return 
(BgL_nz00_56==((BGL_LONGLONG_T)0));} 
}



/* _zerollong? */
obj_t BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2991, obj_t BgL_nz00_2992)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 728 */
{ /* Ieee/fixnum.scm 729 */
bool_t BgL_auxz00_4652;
{ /* Ieee/fixnum.scm 729 */
BGL_LONGLONG_T BgL_nz00_3996;
{ /* Ieee/fixnum.scm 729 */
obj_t BgL_auxz00_4653;
if(
LLONGP(BgL_nz00_2992))
{ /* Ieee/fixnum.scm 729 */
BgL_auxz00_4653 = BgL_nz00_2992
; }  else 
{ 
obj_t BgL_auxz00_4656;
BgL_auxz00_4656 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)34428)), BGl_string2741z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2992); 
FAILURE(BgL_auxz00_4656,BFALSE,BFALSE);} 
BgL_nz00_3996 = 
BLLONG_TO_LLONG(BgL_auxz00_4653); } 
BgL_auxz00_4652 = 
(BgL_nz00_3996==((BGL_LONGLONG_T)0)); } 
return 
BBOOL(BgL_auxz00_4652);} } 
}



/* zerobx? */
BGL_EXPORTED_DEF bool_t BGl_za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_nz00_57)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 734 */
return 
BXZERO(BgL_nz00_57);} 
}



/* _zerobx? */
obj_t BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2993, obj_t BgL_nz00_2994)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 734 */
{ /* Ieee/fixnum.scm 735 */
bool_t BgL_auxz00_4664;
{ /* Ieee/fixnum.scm 735 */
obj_t BgL_nz00_3997;
if(
BIGNUMP(BgL_nz00_2994))
{ /* Ieee/fixnum.scm 735 */
BgL_nz00_3997 = BgL_nz00_2994; }  else 
{ 
obj_t BgL_auxz00_4667;
BgL_auxz00_4667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)34697)), BGl_string2742z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2994); 
FAILURE(BgL_auxz00_4667,BFALSE,BFALSE);} 
BgL_auxz00_4664 = 
BXZERO(BgL_nz00_3997); } 
return 
BBOOL(BgL_auxz00_4664);} } 
}



/* positivefx? */
BGL_EXPORTED_DEF bool_t BGl_positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_58)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 740 */
return 
(BgL_nz00_58>((long)0));} 
}



/* _positivefx? */
obj_t BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2995, obj_t BgL_nz00_2996)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 740 */
{ /* Ieee/fixnum.scm 741 */
bool_t BgL_auxz00_4674;
{ /* Ieee/fixnum.scm 741 */
long BgL_nz00_3998;
{ /* Ieee/fixnum.scm 741 */
obj_t BgL_auxz00_4675;
if(
INTEGERP(BgL_nz00_2996))
{ /* Ieee/fixnum.scm 741 */
BgL_auxz00_4675 = BgL_nz00_2996
; }  else 
{ 
obj_t BgL_auxz00_4678;
BgL_auxz00_4678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)34968)), BGl_string2743z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2996); 
FAILURE(BgL_auxz00_4678,BFALSE,BFALSE);} 
BgL_nz00_3998 = 
(long)CINT(BgL_auxz00_4675); } 
BgL_auxz00_4674 = 
(BgL_nz00_3998>((long)0)); } 
return 
BBOOL(BgL_auxz00_4674);} } 
}



/* positiveelong? */
BGL_EXPORTED_DEF bool_t BGl_positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_59)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 746 */
return 
(BgL_nz00_59>((long)0));} 
}



/* _positiveelong? */
obj_t BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2997, obj_t BgL_nz00_2998)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 746 */
{ /* Ieee/fixnum.scm 747 */
bool_t BgL_auxz00_4686;
{ /* Ieee/fixnum.scm 747 */
long BgL_nz00_3999;
{ /* Ieee/fixnum.scm 747 */
obj_t BgL_auxz00_4687;
if(
ELONGP(BgL_nz00_2998))
{ /* Ieee/fixnum.scm 747 */
BgL_auxz00_4687 = BgL_nz00_2998
; }  else 
{ 
obj_t BgL_auxz00_4690;
BgL_auxz00_4690 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)35239)), BGl_string2744z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_2998); 
FAILURE(BgL_auxz00_4690,BFALSE,BFALSE);} 
BgL_nz00_3999 = 
BELONG_TO_LONG(BgL_auxz00_4687); } 
BgL_auxz00_4686 = 
(BgL_nz00_3999>((long)0)); } 
return 
BBOOL(BgL_auxz00_4686);} } 
}



/* positivellong? */
BGL_EXPORTED_DEF bool_t BGl_positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_nz00_60)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 752 */
return 
(BgL_nz00_60>((BGL_LONGLONG_T)0));} 
}



/* _positivellong? */
obj_t BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2999, obj_t BgL_nz00_3000)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 752 */
{ /* Ieee/fixnum.scm 753 */
bool_t BgL_auxz00_4698;
{ /* Ieee/fixnum.scm 753 */
BGL_LONGLONG_T BgL_nz00_4000;
{ /* Ieee/fixnum.scm 753 */
obj_t BgL_auxz00_4699;
if(
LLONGP(BgL_nz00_3000))
{ /* Ieee/fixnum.scm 753 */
BgL_auxz00_4699 = BgL_nz00_3000
; }  else 
{ 
obj_t BgL_auxz00_4702;
BgL_auxz00_4702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)35515)), BGl_string2745z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3000); 
FAILURE(BgL_auxz00_4702,BFALSE,BFALSE);} 
BgL_nz00_4000 = 
BLLONG_TO_LLONG(BgL_auxz00_4699); } 
BgL_auxz00_4698 = 
(BgL_nz00_4000>((BGL_LONGLONG_T)0)); } 
return 
BBOOL(BgL_auxz00_4698);} } 
}



/* positivebx? */
BGL_EXPORTED_DEF bool_t BGl_positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_nz00_61)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 758 */
return 
BXPOSITIVE(BgL_nz00_61);} 
}



/* _positivebx? */
obj_t BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3001, obj_t BgL_nz00_3002)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 758 */
{ /* Ieee/fixnum.scm 759 */
bool_t BgL_auxz00_4710;
{ /* Ieee/fixnum.scm 759 */
obj_t BgL_nz00_4001;
if(
BIGNUMP(BgL_nz00_3002))
{ /* Ieee/fixnum.scm 759 */
BgL_nz00_4001 = BgL_nz00_3002; }  else 
{ 
obj_t BgL_auxz00_4713;
BgL_auxz00_4713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)35788)), BGl_string2746z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3002); 
FAILURE(BgL_auxz00_4713,BFALSE,BFALSE);} 
BgL_auxz00_4710 = 
BXPOSITIVE(BgL_nz00_4001); } 
return 
BBOOL(BgL_auxz00_4710);} } 
}



/* negativefx? */
BGL_EXPORTED_DEF bool_t BGl_negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_62)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 764 */
return 
(BgL_nz00_62<((long)0));} 
}



/* _negativefx? */
obj_t BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3003, obj_t BgL_nz00_3004)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 764 */
{ /* Ieee/fixnum.scm 765 */
bool_t BgL_auxz00_4720;
{ /* Ieee/fixnum.scm 765 */
long BgL_nz00_4002;
{ /* Ieee/fixnum.scm 765 */
obj_t BgL_auxz00_4721;
if(
INTEGERP(BgL_nz00_3004))
{ /* Ieee/fixnum.scm 765 */
BgL_auxz00_4721 = BgL_nz00_3004
; }  else 
{ 
obj_t BgL_auxz00_4724;
BgL_auxz00_4724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)36063)), BGl_string2747z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3004); 
FAILURE(BgL_auxz00_4724,BFALSE,BFALSE);} 
BgL_nz00_4002 = 
(long)CINT(BgL_auxz00_4721); } 
BgL_auxz00_4720 = 
(BgL_nz00_4002<((long)0)); } 
return 
BBOOL(BgL_auxz00_4720);} } 
}



/* negativeelong? */
BGL_EXPORTED_DEF bool_t BGl_negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_63)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 770 */
return 
(BgL_nz00_63<((long)0));} 
}



/* _negativeelong? */
obj_t BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3005, obj_t BgL_nz00_3006)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 770 */
{ /* Ieee/fixnum.scm 771 */
bool_t BgL_auxz00_4732;
{ /* Ieee/fixnum.scm 771 */
long BgL_nz00_4003;
{ /* Ieee/fixnum.scm 771 */
obj_t BgL_auxz00_4733;
if(
ELONGP(BgL_nz00_3006))
{ /* Ieee/fixnum.scm 771 */
BgL_auxz00_4733 = BgL_nz00_3006
; }  else 
{ 
obj_t BgL_auxz00_4736;
BgL_auxz00_4736 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)36334)), BGl_string2748z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3006); 
FAILURE(BgL_auxz00_4736,BFALSE,BFALSE);} 
BgL_nz00_4003 = 
BELONG_TO_LONG(BgL_auxz00_4733); } 
BgL_auxz00_4732 = 
(BgL_nz00_4003<((long)0)); } 
return 
BBOOL(BgL_auxz00_4732);} } 
}



/* negativellong? */
BGL_EXPORTED_DEF bool_t BGl_negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_nz00_64)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 776 */
return 
(BgL_nz00_64<((BGL_LONGLONG_T)0));} 
}



/* _negativellong? */
obj_t BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3007, obj_t BgL_nz00_3008)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 776 */
{ /* Ieee/fixnum.scm 777 */
bool_t BgL_auxz00_4744;
{ /* Ieee/fixnum.scm 777 */
BGL_LONGLONG_T BgL_nz00_4004;
{ /* Ieee/fixnum.scm 777 */
obj_t BgL_auxz00_4745;
if(
LLONGP(BgL_nz00_3008))
{ /* Ieee/fixnum.scm 777 */
BgL_auxz00_4745 = BgL_nz00_3008
; }  else 
{ 
obj_t BgL_auxz00_4748;
BgL_auxz00_4748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)36610)), BGl_string2749z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3008); 
FAILURE(BgL_auxz00_4748,BFALSE,BFALSE);} 
BgL_nz00_4004 = 
BLLONG_TO_LLONG(BgL_auxz00_4745); } 
BgL_auxz00_4744 = 
(BgL_nz00_4004<((BGL_LONGLONG_T)0)); } 
return 
BBOOL(BgL_auxz00_4744);} } 
}



/* negativebx? */
BGL_EXPORTED_DEF bool_t BGl_negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_nz00_65)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 782 */
return 
BXNEGATIVE(BgL_nz00_65);} 
}



/* _negativebx? */
obj_t BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3009, obj_t BgL_nz00_3010)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 782 */
{ /* Ieee/fixnum.scm 783 */
bool_t BgL_auxz00_4756;
{ /* Ieee/fixnum.scm 783 */
obj_t BgL_nz00_4005;
if(
BIGNUMP(BgL_nz00_3010))
{ /* Ieee/fixnum.scm 783 */
BgL_nz00_4005 = BgL_nz00_3010; }  else 
{ 
obj_t BgL_auxz00_4759;
BgL_auxz00_4759 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)36883)), BGl_string2750z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3010); 
FAILURE(BgL_auxz00_4759,BFALSE,BFALSE);} 
BgL_auxz00_4756 = 
BXNEGATIVE(BgL_nz00_4005); } 
return 
BBOOL(BgL_auxz00_4756);} } 
}



/* odd? */
BGL_EXPORTED_DEF bool_t BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_66)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 788 */
if(
INTEGERP(BgL_xz00_66))
{ /* Ieee/fixnum.scm 790 */
return 
ODDP_FX(
(long)CINT(BgL_xz00_66));}  else 
{ /* Ieee/fixnum.scm 790 */
if(
ELONGP(BgL_xz00_66))
{ /* Ieee/fixnum.scm 791 */
bool_t BgL_res1940z00_1457;
{ /* Ieee/fixnum.scm 791 */
long BgL_xz00_1447;
BgL_xz00_1447 = 
BELONG_TO_LONG(BgL_xz00_66); 
{ /* Ieee/fixnum.scm 791 */
bool_t BgL_testz00_4772;
{ /* Ieee/fixnum.scm 791 */
bool_t BgL_res1939z00_1456;
{ /* Ieee/fixnum.scm 791 */
long BgL_arg1258z00_1450;
BgL_arg1258z00_1450 = 
(BgL_xz00_1447%((long)2)); 
BgL_res1939z00_1456 = 
(BgL_arg1258z00_1450==((long)0)); } 
BgL_testz00_4772 = BgL_res1939z00_1456; } 
if(BgL_testz00_4772)
{ /* Ieee/fixnum.scm 791 */
BgL_res1940z00_1457 = ((bool_t)0); }  else 
{ /* Ieee/fixnum.scm 791 */
BgL_res1940z00_1457 = ((bool_t)1); } } } 
return BgL_res1940z00_1457;}  else 
{ /* Ieee/fixnum.scm 791 */
if(
LLONGP(BgL_xz00_66))
{ /* Ieee/fixnum.scm 792 */
bool_t BgL_res1942z00_1469;
{ /* Ieee/fixnum.scm 792 */
BGL_LONGLONG_T BgL_xz00_1459;
BgL_xz00_1459 = 
BLLONG_TO_LLONG(BgL_xz00_66); 
{ /* Ieee/fixnum.scm 792 */
bool_t BgL_testz00_4778;
{ /* Ieee/fixnum.scm 792 */
bool_t BgL_res1941z00_1468;
{ /* Ieee/fixnum.scm 792 */
BGL_LONGLONG_T BgL_arg1259z00_1462;
BgL_arg1259z00_1462 = 
(BgL_xz00_1459%((BGL_LONGLONG_T)2)); 
BgL_res1941z00_1468 = 
(BgL_arg1259z00_1462==((BGL_LONGLONG_T)0)); } 
BgL_testz00_4778 = BgL_res1941z00_1468; } 
if(BgL_testz00_4778)
{ /* Ieee/fixnum.scm 792 */
BgL_res1942z00_1469 = ((bool_t)0); }  else 
{ /* Ieee/fixnum.scm 792 */
BgL_res1942z00_1469 = ((bool_t)1); } } } 
return BgL_res1942z00_1469;}  else 
{ /* Ieee/fixnum.scm 792 */
if(
BIGNUMP(BgL_xz00_66))
{ /* Ieee/fixnum.scm 793 */
return 
bgl_bignum_odd(BgL_xz00_66);}  else 
{ /* Ieee/fixnum.scm 793 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2751z00zz__r4_numbers_6_5_fixnumz00, BGl_string2752z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_66));} } } } } 
}



/* _odd? */
obj_t BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3011, obj_t BgL_xz00_3012)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 788 */
return 
BBOOL(
BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3012));} 
}



/* oddfx? */
BGL_EXPORTED_DEF bool_t BGl_oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_67)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 799 */
return 
ODDP_FX(BgL_xz00_67);} 
}



/* _oddfx? */
obj_t BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3013, obj_t BgL_xz00_3014)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 799 */
{ /* Ieee/fixnum.scm 800 */
bool_t BgL_auxz00_4789;
{ /* Ieee/fixnum.scm 800 */
long BgL_xz00_4006;
{ /* Ieee/fixnum.scm 800 */
obj_t BgL_auxz00_4790;
if(
INTEGERP(BgL_xz00_3014))
{ /* Ieee/fixnum.scm 800 */
BgL_auxz00_4790 = BgL_xz00_3014
; }  else 
{ 
obj_t BgL_auxz00_4793;
BgL_auxz00_4793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)37574)), BGl_string2753z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3014); 
FAILURE(BgL_auxz00_4793,BFALSE,BFALSE);} 
BgL_xz00_4006 = 
(long)CINT(BgL_auxz00_4790); } 
BgL_auxz00_4789 = 
ODDP_FX(BgL_xz00_4006); } 
return 
BBOOL(BgL_auxz00_4789);} } 
}



/* oddelong? */
BGL_EXPORTED_DEF bool_t BGl_oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_68)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 805 */
{ /* Ieee/fixnum.scm 806 */
bool_t BgL_testz00_4800;
{ /* Ieee/fixnum.scm 806 */
bool_t BgL_res1943z00_4007;
{ /* Ieee/fixnum.scm 806 */
long BgL_arg1258z00_4008;
BgL_arg1258z00_4008 = 
(BgL_xz00_68%((long)2)); 
BgL_res1943z00_4007 = 
(BgL_arg1258z00_4008==((long)0)); } 
BgL_testz00_4800 = BgL_res1943z00_4007; } 
if(BgL_testz00_4800)
{ /* Ieee/fixnum.scm 806 */
return ((bool_t)0);}  else 
{ /* Ieee/fixnum.scm 806 */
return ((bool_t)1);} } } 
}



/* _oddelong? */
obj_t BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3015, obj_t BgL_xz00_3016)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 805 */
{ /* Ieee/fixnum.scm 806 */
bool_t BgL_auxz00_4803;
{ /* Ieee/fixnum.scm 806 */
long BgL_xz00_4009;
{ /* Ieee/fixnum.scm 806 */
obj_t BgL_auxz00_4804;
if(
ELONGP(BgL_xz00_3016))
{ /* Ieee/fixnum.scm 806 */
BgL_auxz00_4804 = BgL_xz00_3016
; }  else 
{ 
obj_t BgL_auxz00_4807;
BgL_auxz00_4807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)37843)), BGl_string2754z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3016); 
FAILURE(BgL_auxz00_4807,BFALSE,BFALSE);} 
BgL_xz00_4009 = 
BELONG_TO_LONG(BgL_auxz00_4804); } 
{ /* Ieee/fixnum.scm 806 */
bool_t BgL_testz00_4812;
{ /* Ieee/fixnum.scm 806 */
bool_t BgL_res1943z00_4010;
{ /* Ieee/fixnum.scm 806 */
long BgL_arg1258z00_4011;
BgL_arg1258z00_4011 = 
(BgL_xz00_4009%((long)2)); 
BgL_res1943z00_4010 = 
(BgL_arg1258z00_4011==((long)0)); } 
BgL_testz00_4812 = BgL_res1943z00_4010; } 
if(BgL_testz00_4812)
{ /* Ieee/fixnum.scm 806 */
BgL_auxz00_4803 = ((bool_t)0)
; }  else 
{ /* Ieee/fixnum.scm 806 */
BgL_auxz00_4803 = ((bool_t)1)
; } } } 
return 
BBOOL(BgL_auxz00_4803);} } 
}



/* oddllong? */
BGL_EXPORTED_DEF bool_t BGl_oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_69)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 811 */
{ /* Ieee/fixnum.scm 812 */
bool_t BgL_testz00_4816;
{ /* Ieee/fixnum.scm 812 */
bool_t BgL_res1944z00_4012;
{ /* Ieee/fixnum.scm 812 */
BGL_LONGLONG_T BgL_arg1259z00_4013;
BgL_arg1259z00_4013 = 
(BgL_xz00_69%((BGL_LONGLONG_T)2)); 
BgL_res1944z00_4012 = 
(BgL_arg1259z00_4013==((BGL_LONGLONG_T)0)); } 
BgL_testz00_4816 = BgL_res1944z00_4012; } 
if(BgL_testz00_4816)
{ /* Ieee/fixnum.scm 812 */
return ((bool_t)0);}  else 
{ /* Ieee/fixnum.scm 812 */
return ((bool_t)1);} } } 
}



/* _oddllong? */
obj_t BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3017, obj_t BgL_xz00_3018)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 811 */
{ /* Ieee/fixnum.scm 812 */
bool_t BgL_auxz00_4819;
{ /* Ieee/fixnum.scm 812 */
BGL_LONGLONG_T BgL_xz00_4014;
{ /* Ieee/fixnum.scm 812 */
obj_t BgL_auxz00_4820;
if(
LLONGP(BgL_xz00_3018))
{ /* Ieee/fixnum.scm 812 */
BgL_auxz00_4820 = BgL_xz00_3018
; }  else 
{ 
obj_t BgL_auxz00_4823;
BgL_auxz00_4823 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)38125)), BGl_string2755z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3018); 
FAILURE(BgL_auxz00_4823,BFALSE,BFALSE);} 
BgL_xz00_4014 = 
BLLONG_TO_LLONG(BgL_auxz00_4820); } 
{ /* Ieee/fixnum.scm 812 */
bool_t BgL_testz00_4828;
{ /* Ieee/fixnum.scm 812 */
bool_t BgL_res1944z00_4015;
{ /* Ieee/fixnum.scm 812 */
BGL_LONGLONG_T BgL_arg1259z00_4016;
BgL_arg1259z00_4016 = 
(BgL_xz00_4014%((BGL_LONGLONG_T)2)); 
BgL_res1944z00_4015 = 
(BgL_arg1259z00_4016==((BGL_LONGLONG_T)0)); } 
BgL_testz00_4828 = BgL_res1944z00_4015; } 
if(BgL_testz00_4828)
{ /* Ieee/fixnum.scm 812 */
BgL_auxz00_4819 = ((bool_t)0)
; }  else 
{ /* Ieee/fixnum.scm 812 */
BgL_auxz00_4819 = ((bool_t)1)
; } } } 
return 
BBOOL(BgL_auxz00_4819);} } 
}



/* oddbx? */
BGL_EXPORTED_DEF bool_t BGl_oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_70)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 817 */
return 
bgl_bignum_odd(BgL_xz00_70);} 
}



/* _oddbx? */
obj_t BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3019, obj_t BgL_xz00_3020)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 817 */
{ /* Ieee/fixnum.scm 818 */
bool_t BgL_auxz00_4833;
{ /* Ieee/fixnum.scm 818 */
obj_t BgL_xz00_4017;
if(
BIGNUMP(BgL_xz00_3020))
{ /* Ieee/fixnum.scm 818 */
BgL_xz00_4017 = BgL_xz00_3020; }  else 
{ 
obj_t BgL_auxz00_4836;
BgL_auxz00_4836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)38404)), BGl_string2756z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3020); 
FAILURE(BgL_auxz00_4836,BFALSE,BFALSE);} 
BgL_auxz00_4833 = 
bgl_bignum_odd(BgL_xz00_4017); } 
return 
BBOOL(BgL_auxz00_4833);} } 
}



/* even? */
BGL_EXPORTED_DEF bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_71)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 823 */
if(
INTEGERP(BgL_xz00_71))
{ /* Ieee/fixnum.scm 825 */
return 
EVENP_FX(
(long)CINT(BgL_xz00_71));}  else 
{ /* Ieee/fixnum.scm 825 */
if(
ELONGP(BgL_xz00_71))
{ /* Ieee/fixnum.scm 826 */
bool_t BgL_res1945z00_1500;
{ /* Ieee/fixnum.scm 826 */
long BgL_xz00_1493;
BgL_xz00_1493 = 
BELONG_TO_LONG(BgL_xz00_71); 
{ /* Ieee/fixnum.scm 826 */
long BgL_arg1258z00_1494;
BgL_arg1258z00_1494 = 
(BgL_xz00_1493%((long)2)); 
BgL_res1945z00_1500 = 
(BgL_arg1258z00_1494==((long)0)); } } 
return BgL_res1945z00_1500;}  else 
{ /* Ieee/fixnum.scm 826 */
if(
LLONGP(BgL_xz00_71))
{ /* Ieee/fixnum.scm 827 */
bool_t BgL_res1946z00_1509;
{ /* Ieee/fixnum.scm 827 */
BGL_LONGLONG_T BgL_xz00_1502;
BgL_xz00_1502 = 
BLLONG_TO_LLONG(BgL_xz00_71); 
{ /* Ieee/fixnum.scm 827 */
BGL_LONGLONG_T BgL_arg1259z00_1503;
BgL_arg1259z00_1503 = 
(BgL_xz00_1502%((BGL_LONGLONG_T)2)); 
BgL_res1946z00_1509 = 
(BgL_arg1259z00_1503==((BGL_LONGLONG_T)0)); } } 
return BgL_res1946z00_1509;}  else 
{ /* Ieee/fixnum.scm 827 */
if(
BIGNUMP(BgL_xz00_71))
{ /* Ieee/fixnum.scm 828 */
return 
bgl_bignum_even(BgL_xz00_71);}  else 
{ /* Ieee/fixnum.scm 828 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string2757z00zz__r4_numbers_6_5_fixnumz00, BGl_string2752z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_71));} } } } } 
}



/* _even? */
obj_t BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3021, obj_t BgL_xz00_3022)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 823 */
return 
BBOOL(
BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3022));} 
}



/* evenfx? */
BGL_EXPORTED_DEF bool_t BGl_evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_72)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 834 */
return 
EVENP_FX(BgL_xz00_72);} 
}



/* _evenfx? */
obj_t BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3023, obj_t BgL_xz00_3024)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 834 */
{ /* Ieee/fixnum.scm 835 */
bool_t BgL_auxz00_4864;
{ /* Ieee/fixnum.scm 835 */
long BgL_xz00_4018;
{ /* Ieee/fixnum.scm 835 */
obj_t BgL_auxz00_4865;
if(
INTEGERP(BgL_xz00_3024))
{ /* Ieee/fixnum.scm 835 */
BgL_auxz00_4865 = BgL_xz00_3024
; }  else 
{ 
obj_t BgL_auxz00_4868;
BgL_auxz00_4868 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)39097)), BGl_string2758z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3024); 
FAILURE(BgL_auxz00_4868,BFALSE,BFALSE);} 
BgL_xz00_4018 = 
(long)CINT(BgL_auxz00_4865); } 
BgL_auxz00_4864 = 
EVENP_FX(BgL_xz00_4018); } 
return 
BBOOL(BgL_auxz00_4864);} } 
}



/* evenelong? */
BGL_EXPORTED_DEF bool_t BGl_evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_73)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 840 */
{ /* Ieee/fixnum.scm 841 */
long BgL_arg1258z00_4019;
BgL_arg1258z00_4019 = 
(BgL_xz00_73%((long)2)); 
return 
(BgL_arg1258z00_4019==((long)0));} } 
}



/* _evenelong? */
obj_t BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3025, obj_t BgL_xz00_3026)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 840 */
{ /* Ieee/fixnum.scm 841 */
bool_t BgL_auxz00_4877;
{ /* Ieee/fixnum.scm 841 */
bool_t BgL_res2883z00_4022;
{ /* Ieee/fixnum.scm 841 */
long BgL_xz00_4020;
{ /* Ieee/fixnum.scm 841 */
obj_t BgL_auxz00_4878;
if(
ELONGP(BgL_xz00_3026))
{ /* Ieee/fixnum.scm 841 */
BgL_auxz00_4878 = BgL_xz00_3026
; }  else 
{ 
obj_t BgL_auxz00_4881;
BgL_auxz00_4881 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)39380)), BGl_string2759z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3026); 
FAILURE(BgL_auxz00_4881,BFALSE,BFALSE);} 
BgL_xz00_4020 = 
BELONG_TO_LONG(BgL_auxz00_4878); } 
{ /* Ieee/fixnum.scm 841 */
long BgL_arg1258z00_4021;
BgL_arg1258z00_4021 = 
(BgL_xz00_4020%((long)2)); 
BgL_res2883z00_4022 = 
(BgL_arg1258z00_4021==((long)0)); } } 
BgL_auxz00_4877 = BgL_res2883z00_4022; } 
return 
BBOOL(BgL_auxz00_4877);} } 
}



/* evenllong? */
BGL_EXPORTED_DEF bool_t BGl_evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_74)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 846 */
{ /* Ieee/fixnum.scm 847 */
BGL_LONGLONG_T BgL_arg1259z00_4023;
BgL_arg1259z00_4023 = 
(BgL_xz00_74%((BGL_LONGLONG_T)2)); 
return 
(BgL_arg1259z00_4023==((BGL_LONGLONG_T)0));} } 
}



/* _evenllong? */
obj_t BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3027, obj_t BgL_xz00_3028)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 846 */
{ /* Ieee/fixnum.scm 847 */
bool_t BgL_auxz00_4891;
{ /* Ieee/fixnum.scm 847 */
bool_t BgL_res2884z00_4026;
{ /* Ieee/fixnum.scm 847 */
BGL_LONGLONG_T BgL_xz00_4024;
{ /* Ieee/fixnum.scm 847 */
obj_t BgL_auxz00_4892;
if(
LLONGP(BgL_xz00_3028))
{ /* Ieee/fixnum.scm 847 */
BgL_auxz00_4892 = BgL_xz00_3028
; }  else 
{ 
obj_t BgL_auxz00_4895;
BgL_auxz00_4895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)39673)), BGl_string2760z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3028); 
FAILURE(BgL_auxz00_4895,BFALSE,BFALSE);} 
BgL_xz00_4024 = 
BLLONG_TO_LLONG(BgL_auxz00_4892); } 
{ /* Ieee/fixnum.scm 847 */
BGL_LONGLONG_T BgL_arg1259z00_4025;
BgL_arg1259z00_4025 = 
(BgL_xz00_4024%((BGL_LONGLONG_T)2)); 
BgL_res2884z00_4026 = 
(BgL_arg1259z00_4025==((BGL_LONGLONG_T)0)); } } 
BgL_auxz00_4891 = BgL_res2884z00_4026; } 
return 
BBOOL(BgL_auxz00_4891);} } 
}



/* evenbx? */
BGL_EXPORTED_DEF bool_t BGl_evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_75)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 852 */
return 
bgl_bignum_even(BgL_xz00_75);} 
}



/* _evenbx? */
obj_t BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3029, obj_t BgL_xz00_3030)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 852 */
{ /* Ieee/fixnum.scm 853 */
bool_t BgL_auxz00_4904;
{ /* Ieee/fixnum.scm 853 */
obj_t BgL_xz00_4027;
if(
BIGNUMP(BgL_xz00_3030))
{ /* Ieee/fixnum.scm 853 */
BgL_xz00_4027 = BgL_xz00_3030; }  else 
{ 
obj_t BgL_auxz00_4907;
BgL_auxz00_4907 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)39951)), BGl_string2761z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3030); 
FAILURE(BgL_auxz00_4907,BFALSE,BFALSE);} 
BgL_auxz00_4904 = 
bgl_bignum_even(BgL_xz00_4027); } 
return 
BBOOL(BgL_auxz00_4904);} } 
}



/* minfx */
BGL_EXPORTED_DEF long BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_76, obj_t BgL_nnz00_77)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 870 */
{ 
obj_t BgL_yz00_532;obj_t BgL_xsz00_533;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_auxz00_4913;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_aux2138z00_3374;
BgL_yz00_532 = 
BINT(BgL_n1z00_76); 
BgL_xsz00_533 = BgL_nnz00_77; 
BgL_zc3anonymousza31260ze3z83_534:
if(
NULLP(BgL_xsz00_533))
{ /* Ieee/fixnum.scm 871 */
BgL_aux2138z00_3374 = BgL_yz00_532; }  else 
{ /* Ieee/fixnum.scm 871 */
bool_t BgL_testz00_4916;
{ /* Ieee/fixnum.scm 871 */
long BgL_n1z00_1526;long BgL_n2z00_1527;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_pairz00_1525;
if(
PAIRP(BgL_xsz00_533))
{ /* Ieee/fixnum.scm 871 */
BgL_pairz00_1525 = BgL_xsz00_533; }  else 
{ 
obj_t BgL_auxz00_4919;
BgL_auxz00_4919 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_533); 
FAILURE(BgL_auxz00_4919,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_auxz00_4923;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_aux2128z00_3364;
BgL_aux2128z00_3364 = 
CAR(BgL_pairz00_1525); 
if(
INTEGERP(BgL_aux2128z00_3364))
{ /* Ieee/fixnum.scm 871 */
BgL_auxz00_4923 = BgL_aux2128z00_3364
; }  else 
{ 
obj_t BgL_auxz00_4927;
BgL_auxz00_4927 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2128z00_3364); 
FAILURE(BgL_auxz00_4927,BFALSE,BFALSE);} } 
BgL_n1z00_1526 = 
(long)CINT(BgL_auxz00_4923); } } 
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_auxz00_4932;
if(
INTEGERP(BgL_yz00_532))
{ /* Ieee/fixnum.scm 871 */
BgL_auxz00_4932 = BgL_yz00_532
; }  else 
{ 
obj_t BgL_auxz00_4935;
BgL_auxz00_4935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_532); 
FAILURE(BgL_auxz00_4935,BFALSE,BFALSE);} 
BgL_n2z00_1527 = 
(long)CINT(BgL_auxz00_4932); } 
BgL_testz00_4916 = 
(BgL_n1z00_1526<BgL_n2z00_1527); } 
if(BgL_testz00_4916)
{ 
obj_t BgL_xsz00_4943;obj_t BgL_yz00_4941;
BgL_yz00_4941 = 
CAR(BgL_xsz00_533); 
BgL_xsz00_4943 = 
CDR(BgL_xsz00_533); 
BgL_xsz00_533 = BgL_xsz00_4943; 
BgL_yz00_532 = BgL_yz00_4941; 
goto BgL_zc3anonymousza31260ze3z83_534;}  else 
{ 
obj_t BgL_xsz00_4945;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_pairz00_1530;
if(
PAIRP(BgL_xsz00_533))
{ /* Ieee/fixnum.scm 871 */
BgL_pairz00_1530 = BgL_xsz00_533; }  else 
{ 
obj_t BgL_auxz00_4948;
BgL_auxz00_4948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_533); 
FAILURE(BgL_auxz00_4948,BFALSE,BFALSE);} 
BgL_xsz00_4945 = 
CDR(BgL_pairz00_1530); } 
BgL_xsz00_533 = BgL_xsz00_4945; 
goto BgL_zc3anonymousza31260ze3z83_534;} } 
if(
INTEGERP(BgL_aux2138z00_3374))
{ /* Ieee/fixnum.scm 871 */
BgL_auxz00_4913 = BgL_aux2138z00_3374
; }  else 
{ 
obj_t BgL_auxz00_4956;
BgL_auxz00_4956 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2764z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2138z00_3374); 
FAILURE(BgL_auxz00_4956,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_4913);} } } 
}



/* _minfx */
obj_t BGl__minfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3031, obj_t BgL_n1z00_3032, obj_t BgL_nnz00_3033)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 870 */
{ /* Ieee/fixnum.scm 871 */
long BgL_auxz00_4961;
{ /* Ieee/fixnum.scm 871 */
long BgL_auxz00_4962;
{ /* Ieee/fixnum.scm 871 */
obj_t BgL_auxz00_4963;
if(
INTEGERP(BgL_n1z00_3032))
{ /* Ieee/fixnum.scm 871 */
BgL_auxz00_4963 = BgL_n1z00_3032
; }  else 
{ 
obj_t BgL_auxz00_4966;
BgL_auxz00_4966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40630)), BGl_string2765z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3032); 
FAILURE(BgL_auxz00_4966,BFALSE,BFALSE);} 
BgL_auxz00_4962 = 
(long)CINT(BgL_auxz00_4963); } 
BgL_auxz00_4961 = 
BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4962, BgL_nnz00_3033); } 
return 
BINT(BgL_auxz00_4961);} } 
}



/* minelong */
BGL_EXPORTED_DEF long BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_78, obj_t BgL_nnz00_79)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 876 */
{ 
obj_t BgL_yz00_543;obj_t BgL_xsz00_544;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_auxz00_4973;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_aux2154z00_3390;
BgL_yz00_543 = 
make_belong(BgL_n1z00_78); 
BgL_xsz00_544 = BgL_nnz00_79; 
BgL_zc3anonymousza31267ze3z83_545:
if(
NULLP(BgL_xsz00_544))
{ /* Ieee/fixnum.scm 877 */
BgL_aux2154z00_3390 = BgL_yz00_543; }  else 
{ /* Ieee/fixnum.scm 877 */
bool_t BgL_testz00_4976;
{ /* Ieee/fixnum.scm 877 */
long BgL_n1z00_1533;long BgL_n2z00_1534;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_pairz00_1532;
if(
PAIRP(BgL_xsz00_544))
{ /* Ieee/fixnum.scm 877 */
BgL_pairz00_1532 = BgL_xsz00_544; }  else 
{ 
obj_t BgL_auxz00_4979;
BgL_auxz00_4979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_544); 
FAILURE(BgL_auxz00_4979,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_auxz00_4983;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_aux2144z00_3380;
BgL_aux2144z00_3380 = 
CAR(BgL_pairz00_1532); 
if(
ELONGP(BgL_aux2144z00_3380))
{ /* Ieee/fixnum.scm 877 */
BgL_auxz00_4983 = BgL_aux2144z00_3380
; }  else 
{ 
obj_t BgL_auxz00_4987;
BgL_auxz00_4987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2144z00_3380); 
FAILURE(BgL_auxz00_4987,BFALSE,BFALSE);} } 
BgL_n1z00_1533 = 
BELONG_TO_LONG(BgL_auxz00_4983); } } 
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_auxz00_4992;
if(
ELONGP(BgL_yz00_543))
{ /* Ieee/fixnum.scm 877 */
BgL_auxz00_4992 = BgL_yz00_543
; }  else 
{ 
obj_t BgL_auxz00_4995;
BgL_auxz00_4995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_543); 
FAILURE(BgL_auxz00_4995,BFALSE,BFALSE);} 
BgL_n2z00_1534 = 
BELONG_TO_LONG(BgL_auxz00_4992); } 
BgL_testz00_4976 = 
(BgL_n1z00_1533<BgL_n2z00_1534); } 
if(BgL_testz00_4976)
{ 
obj_t BgL_xsz00_5003;obj_t BgL_yz00_5001;
BgL_yz00_5001 = 
CAR(BgL_xsz00_544); 
BgL_xsz00_5003 = 
CDR(BgL_xsz00_544); 
BgL_xsz00_544 = BgL_xsz00_5003; 
BgL_yz00_543 = BgL_yz00_5001; 
goto BgL_zc3anonymousza31267ze3z83_545;}  else 
{ 
obj_t BgL_xsz00_5005;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_pairz00_1537;
if(
PAIRP(BgL_xsz00_544))
{ /* Ieee/fixnum.scm 877 */
BgL_pairz00_1537 = BgL_xsz00_544; }  else 
{ 
obj_t BgL_auxz00_5008;
BgL_auxz00_5008 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_544); 
FAILURE(BgL_auxz00_5008,BFALSE,BFALSE);} 
BgL_xsz00_5005 = 
CDR(BgL_pairz00_1537); } 
BgL_xsz00_544 = BgL_xsz00_5005; 
goto BgL_zc3anonymousza31267ze3z83_545;} } 
if(
ELONGP(BgL_aux2154z00_3390))
{ /* Ieee/fixnum.scm 877 */
BgL_auxz00_4973 = BgL_aux2154z00_3390
; }  else 
{ 
obj_t BgL_auxz00_5016;
BgL_auxz00_5016 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2766z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2154z00_3390); 
FAILURE(BgL_auxz00_5016,BFALSE,BFALSE);} } 
return 
BELONG_TO_LONG(BgL_auxz00_4973);} } } 
}



/* _minelong */
obj_t BGl__minelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3034, obj_t BgL_n1z00_3035, obj_t BgL_nnz00_3036)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 876 */
{ /* Ieee/fixnum.scm 877 */
long BgL_auxz00_5021;
{ /* Ieee/fixnum.scm 877 */
long BgL_auxz00_5022;
{ /* Ieee/fixnum.scm 877 */
obj_t BgL_auxz00_5023;
if(
ELONGP(BgL_n1z00_3035))
{ /* Ieee/fixnum.scm 877 */
BgL_auxz00_5023 = BgL_n1z00_3035
; }  else 
{ 
obj_t BgL_auxz00_5026;
BgL_auxz00_5026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)40906)), BGl_string2767z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3035); 
FAILURE(BgL_auxz00_5026,BFALSE,BFALSE);} 
BgL_auxz00_5022 = 
BELONG_TO_LONG(BgL_auxz00_5023); } 
BgL_auxz00_5021 = 
BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5022, BgL_nnz00_3036); } 
return 
make_belong(BgL_auxz00_5021);} } 
}



/* minllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_80, obj_t BgL_nnz00_81)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 882 */
{ 
obj_t BgL_yz00_554;obj_t BgL_xsz00_555;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_auxz00_5033;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_aux2170z00_3406;
BgL_yz00_554 = 
make_bllong(BgL_n1z00_80); 
BgL_xsz00_555 = BgL_nnz00_81; 
BgL_zc3anonymousza31275ze3z83_556:
if(
NULLP(BgL_xsz00_555))
{ /* Ieee/fixnum.scm 883 */
BgL_aux2170z00_3406 = BgL_yz00_554; }  else 
{ /* Ieee/fixnum.scm 883 */
bool_t BgL_testz00_5036;
{ /* Ieee/fixnum.scm 883 */
BGL_LONGLONG_T BgL_n1z00_1540;BGL_LONGLONG_T BgL_n2z00_1541;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_pairz00_1539;
if(
PAIRP(BgL_xsz00_555))
{ /* Ieee/fixnum.scm 883 */
BgL_pairz00_1539 = BgL_xsz00_555; }  else 
{ 
obj_t BgL_auxz00_5039;
BgL_auxz00_5039 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_555); 
FAILURE(BgL_auxz00_5039,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_auxz00_5043;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_aux2160z00_3396;
BgL_aux2160z00_3396 = 
CAR(BgL_pairz00_1539); 
if(
LLONGP(BgL_aux2160z00_3396))
{ /* Ieee/fixnum.scm 883 */
BgL_auxz00_5043 = BgL_aux2160z00_3396
; }  else 
{ 
obj_t BgL_auxz00_5047;
BgL_auxz00_5047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2160z00_3396); 
FAILURE(BgL_auxz00_5047,BFALSE,BFALSE);} } 
BgL_n1z00_1540 = 
BLLONG_TO_LLONG(BgL_auxz00_5043); } } 
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_auxz00_5052;
if(
LLONGP(BgL_yz00_554))
{ /* Ieee/fixnum.scm 883 */
BgL_auxz00_5052 = BgL_yz00_554
; }  else 
{ 
obj_t BgL_auxz00_5055;
BgL_auxz00_5055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_554); 
FAILURE(BgL_auxz00_5055,BFALSE,BFALSE);} 
BgL_n2z00_1541 = 
BLLONG_TO_LLONG(BgL_auxz00_5052); } 
BgL_testz00_5036 = 
(BgL_n1z00_1540<BgL_n2z00_1541); } 
if(BgL_testz00_5036)
{ 
obj_t BgL_xsz00_5063;obj_t BgL_yz00_5061;
BgL_yz00_5061 = 
CAR(BgL_xsz00_555); 
BgL_xsz00_5063 = 
CDR(BgL_xsz00_555); 
BgL_xsz00_555 = BgL_xsz00_5063; 
BgL_yz00_554 = BgL_yz00_5061; 
goto BgL_zc3anonymousza31275ze3z83_556;}  else 
{ 
obj_t BgL_xsz00_5065;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_pairz00_1544;
if(
PAIRP(BgL_xsz00_555))
{ /* Ieee/fixnum.scm 883 */
BgL_pairz00_1544 = BgL_xsz00_555; }  else 
{ 
obj_t BgL_auxz00_5068;
BgL_auxz00_5068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_555); 
FAILURE(BgL_auxz00_5068,BFALSE,BFALSE);} 
BgL_xsz00_5065 = 
CDR(BgL_pairz00_1544); } 
BgL_xsz00_555 = BgL_xsz00_5065; 
goto BgL_zc3anonymousza31275ze3z83_556;} } 
if(
LLONGP(BgL_aux2170z00_3406))
{ /* Ieee/fixnum.scm 883 */
BgL_auxz00_5033 = BgL_aux2170z00_3406
; }  else 
{ 
obj_t BgL_auxz00_5076;
BgL_auxz00_5076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2768z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2170z00_3406); 
FAILURE(BgL_auxz00_5076,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_5033);} } } 
}



/* _minllong */
obj_t BGl__minllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3037, obj_t BgL_n1z00_3038, obj_t BgL_nnz00_3039)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 882 */
{ /* Ieee/fixnum.scm 883 */
BGL_LONGLONG_T BgL_auxz00_5081;
{ /* Ieee/fixnum.scm 883 */
BGL_LONGLONG_T BgL_auxz00_5082;
{ /* Ieee/fixnum.scm 883 */
obj_t BgL_auxz00_5083;
if(
LLONGP(BgL_n1z00_3038))
{ /* Ieee/fixnum.scm 883 */
BgL_auxz00_5083 = BgL_n1z00_3038
; }  else 
{ 
obj_t BgL_auxz00_5086;
BgL_auxz00_5086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41185)), BGl_string2769z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3038); 
FAILURE(BgL_auxz00_5086,BFALSE,BFALSE);} 
BgL_auxz00_5082 = 
BLLONG_TO_LLONG(BgL_auxz00_5083); } 
BgL_auxz00_5081 = 
BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5082, BgL_nnz00_3039); } 
return 
make_bllong(BgL_auxz00_5081);} } 
}



/* minbx */
BGL_EXPORTED_DEF obj_t BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_82, obj_t BgL_nnz00_83)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 888 */
{ 
obj_t BgL_yz00_565;obj_t BgL_xsz00_566;
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_aux2186z00_3422;
BgL_yz00_565 = BgL_n1z00_82; 
BgL_xsz00_566 = BgL_nnz00_83; 
BgL_zc3anonymousza31282ze3z83_567:
if(
NULLP(BgL_xsz00_566))
{ /* Ieee/fixnum.scm 889 */
BgL_aux2186z00_3422 = BgL_yz00_565; }  else 
{ /* Ieee/fixnum.scm 889 */
bool_t BgL_testz00_5095;
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_n1z00_1547;obj_t BgL_n2z00_1548;
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_pairz00_1546;
if(
PAIRP(BgL_xsz00_566))
{ /* Ieee/fixnum.scm 889 */
BgL_pairz00_1546 = BgL_xsz00_566; }  else 
{ 
obj_t BgL_auxz00_5098;
BgL_auxz00_5098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_566); 
FAILURE(BgL_auxz00_5098,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_aux2176z00_3412;
BgL_aux2176z00_3412 = 
CAR(BgL_pairz00_1546); 
if(
BIGNUMP(BgL_aux2176z00_3412))
{ /* Ieee/fixnum.scm 889 */
BgL_n1z00_1547 = BgL_aux2176z00_3412; }  else 
{ 
obj_t BgL_auxz00_5105;
BgL_auxz00_5105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2176z00_3412); 
FAILURE(BgL_auxz00_5105,BFALSE,BFALSE);} } } 
if(
BIGNUMP(BgL_yz00_565))
{ /* Ieee/fixnum.scm 889 */
BgL_n2z00_1548 = BgL_yz00_565; }  else 
{ 
obj_t BgL_auxz00_5111;
BgL_auxz00_5111 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_565); 
FAILURE(BgL_auxz00_5111,BFALSE,BFALSE);} 
BgL_testz00_5095 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_1547, BgL_n2z00_1548))<((long)0)); } 
if(BgL_testz00_5095)
{ 
obj_t BgL_xsz00_5120;obj_t BgL_yz00_5118;
BgL_yz00_5118 = 
CAR(BgL_xsz00_566); 
BgL_xsz00_5120 = 
CDR(BgL_xsz00_566); 
BgL_xsz00_566 = BgL_xsz00_5120; 
BgL_yz00_565 = BgL_yz00_5118; 
goto BgL_zc3anonymousza31282ze3z83_567;}  else 
{ 
obj_t BgL_xsz00_5122;
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_pairz00_1556;
if(
PAIRP(BgL_xsz00_566))
{ /* Ieee/fixnum.scm 889 */
BgL_pairz00_1556 = BgL_xsz00_566; }  else 
{ 
obj_t BgL_auxz00_5125;
BgL_auxz00_5125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_566); 
FAILURE(BgL_auxz00_5125,BFALSE,BFALSE);} 
BgL_xsz00_5122 = 
CDR(BgL_pairz00_1556); } 
BgL_xsz00_566 = BgL_xsz00_5122; 
goto BgL_zc3anonymousza31282ze3z83_567;} } 
if(
BIGNUMP(BgL_aux2186z00_3422))
{ /* Ieee/fixnum.scm 889 */
return BgL_aux2186z00_3422;}  else 
{ 
obj_t BgL_auxz00_5132;
BgL_auxz00_5132 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2770z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2186z00_3422); 
FAILURE(BgL_auxz00_5132,BFALSE,BFALSE);} } } } 
}



/* _minbx */
obj_t BGl__minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3040, obj_t BgL_n1z00_3041, obj_t BgL_nnz00_3042)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 888 */
{ /* Ieee/fixnum.scm 889 */
obj_t BgL_auxz00_5136;
if(
BIGNUMP(BgL_n1z00_3041))
{ /* Ieee/fixnum.scm 889 */
BgL_auxz00_5136 = BgL_n1z00_3041
; }  else 
{ 
obj_t BgL_auxz00_5139;
BgL_auxz00_5139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41461)), BGl_string2771z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3041); 
FAILURE(BgL_auxz00_5139,BFALSE,BFALSE);} 
return 
BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5136, BgL_nnz00_3042);} } 
}



/* maxfx */
BGL_EXPORTED_DEF long BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_84, obj_t BgL_nnz00_85)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 894 */
{ 
obj_t BgL_yz00_576;obj_t BgL_xsz00_577;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_auxz00_5144;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_aux2202z00_3438;
BgL_yz00_576 = 
BINT(BgL_n1z00_84); 
BgL_xsz00_577 = BgL_nnz00_85; 
BgL_zc3anonymousza31289ze3z83_578:
if(
NULLP(BgL_xsz00_577))
{ /* Ieee/fixnum.scm 895 */
BgL_aux2202z00_3438 = BgL_yz00_576; }  else 
{ /* Ieee/fixnum.scm 895 */
bool_t BgL_testz00_5147;
{ /* Ieee/fixnum.scm 895 */
long BgL_n1z00_1559;long BgL_n2z00_1560;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_pairz00_1558;
if(
PAIRP(BgL_xsz00_577))
{ /* Ieee/fixnum.scm 895 */
BgL_pairz00_1558 = BgL_xsz00_577; }  else 
{ 
obj_t BgL_auxz00_5150;
BgL_auxz00_5150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_577); 
FAILURE(BgL_auxz00_5150,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_auxz00_5154;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_aux2192z00_3428;
BgL_aux2192z00_3428 = 
CAR(BgL_pairz00_1558); 
if(
INTEGERP(BgL_aux2192z00_3428))
{ /* Ieee/fixnum.scm 895 */
BgL_auxz00_5154 = BgL_aux2192z00_3428
; }  else 
{ 
obj_t BgL_auxz00_5158;
BgL_auxz00_5158 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2192z00_3428); 
FAILURE(BgL_auxz00_5158,BFALSE,BFALSE);} } 
BgL_n1z00_1559 = 
(long)CINT(BgL_auxz00_5154); } } 
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_auxz00_5163;
if(
INTEGERP(BgL_yz00_576))
{ /* Ieee/fixnum.scm 895 */
BgL_auxz00_5163 = BgL_yz00_576
; }  else 
{ 
obj_t BgL_auxz00_5166;
BgL_auxz00_5166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_576); 
FAILURE(BgL_auxz00_5166,BFALSE,BFALSE);} 
BgL_n2z00_1560 = 
(long)CINT(BgL_auxz00_5163); } 
BgL_testz00_5147 = 
(BgL_n1z00_1559>BgL_n2z00_1560); } 
if(BgL_testz00_5147)
{ 
obj_t BgL_xsz00_5174;obj_t BgL_yz00_5172;
BgL_yz00_5172 = 
CAR(BgL_xsz00_577); 
BgL_xsz00_5174 = 
CDR(BgL_xsz00_577); 
BgL_xsz00_577 = BgL_xsz00_5174; 
BgL_yz00_576 = BgL_yz00_5172; 
goto BgL_zc3anonymousza31289ze3z83_578;}  else 
{ 
obj_t BgL_xsz00_5176;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_pairz00_1563;
if(
PAIRP(BgL_xsz00_577))
{ /* Ieee/fixnum.scm 895 */
BgL_pairz00_1563 = BgL_xsz00_577; }  else 
{ 
obj_t BgL_auxz00_5179;
BgL_auxz00_5179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_577); 
FAILURE(BgL_auxz00_5179,BFALSE,BFALSE);} 
BgL_xsz00_5176 = 
CDR(BgL_pairz00_1563); } 
BgL_xsz00_577 = BgL_xsz00_5176; 
goto BgL_zc3anonymousza31289ze3z83_578;} } 
if(
INTEGERP(BgL_aux2202z00_3438))
{ /* Ieee/fixnum.scm 895 */
BgL_auxz00_5144 = BgL_aux2202z00_3438
; }  else 
{ 
obj_t BgL_auxz00_5187;
BgL_auxz00_5187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2772z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2202z00_3438); 
FAILURE(BgL_auxz00_5187,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_5144);} } } 
}



/* _maxfx */
obj_t BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3043, obj_t BgL_n1z00_3044, obj_t BgL_nnz00_3045)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 894 */
{ /* Ieee/fixnum.scm 895 */
long BgL_auxz00_5192;
{ /* Ieee/fixnum.scm 895 */
long BgL_auxz00_5193;
{ /* Ieee/fixnum.scm 895 */
obj_t BgL_auxz00_5194;
if(
INTEGERP(BgL_n1z00_3044))
{ /* Ieee/fixnum.scm 895 */
BgL_auxz00_5194 = BgL_n1z00_3044
; }  else 
{ 
obj_t BgL_auxz00_5197;
BgL_auxz00_5197 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)41734)), BGl_string2773z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3044); 
FAILURE(BgL_auxz00_5197,BFALSE,BFALSE);} 
BgL_auxz00_5193 = 
(long)CINT(BgL_auxz00_5194); } 
BgL_auxz00_5192 = 
BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5193, BgL_nnz00_3045); } 
return 
BINT(BgL_auxz00_5192);} } 
}



/* maxelong */
BGL_EXPORTED_DEF long BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_86, obj_t BgL_nnz00_87)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 900 */
{ 
obj_t BgL_yz00_587;obj_t BgL_xsz00_588;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_auxz00_5204;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_aux2218z00_3454;
BgL_yz00_587 = 
make_belong(BgL_n1z00_86); 
BgL_xsz00_588 = BgL_nnz00_87; 
BgL_zc3anonymousza31296ze3z83_589:
if(
NULLP(BgL_xsz00_588))
{ /* Ieee/fixnum.scm 901 */
BgL_aux2218z00_3454 = BgL_yz00_587; }  else 
{ /* Ieee/fixnum.scm 901 */
bool_t BgL_testz00_5207;
{ /* Ieee/fixnum.scm 901 */
long BgL_n1z00_1566;long BgL_n2z00_1567;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_pairz00_1565;
if(
PAIRP(BgL_xsz00_588))
{ /* Ieee/fixnum.scm 901 */
BgL_pairz00_1565 = BgL_xsz00_588; }  else 
{ 
obj_t BgL_auxz00_5210;
BgL_auxz00_5210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_588); 
FAILURE(BgL_auxz00_5210,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_auxz00_5214;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_aux2208z00_3444;
BgL_aux2208z00_3444 = 
CAR(BgL_pairz00_1565); 
if(
ELONGP(BgL_aux2208z00_3444))
{ /* Ieee/fixnum.scm 901 */
BgL_auxz00_5214 = BgL_aux2208z00_3444
; }  else 
{ 
obj_t BgL_auxz00_5218;
BgL_auxz00_5218 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2208z00_3444); 
FAILURE(BgL_auxz00_5218,BFALSE,BFALSE);} } 
BgL_n1z00_1566 = 
BELONG_TO_LONG(BgL_auxz00_5214); } } 
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_auxz00_5223;
if(
ELONGP(BgL_yz00_587))
{ /* Ieee/fixnum.scm 901 */
BgL_auxz00_5223 = BgL_yz00_587
; }  else 
{ 
obj_t BgL_auxz00_5226;
BgL_auxz00_5226 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_587); 
FAILURE(BgL_auxz00_5226,BFALSE,BFALSE);} 
BgL_n2z00_1567 = 
BELONG_TO_LONG(BgL_auxz00_5223); } 
BgL_testz00_5207 = 
(BgL_n1z00_1566>BgL_n2z00_1567); } 
if(BgL_testz00_5207)
{ 
obj_t BgL_xsz00_5234;obj_t BgL_yz00_5232;
BgL_yz00_5232 = 
CAR(BgL_xsz00_588); 
BgL_xsz00_5234 = 
CDR(BgL_xsz00_588); 
BgL_xsz00_588 = BgL_xsz00_5234; 
BgL_yz00_587 = BgL_yz00_5232; 
goto BgL_zc3anonymousza31296ze3z83_589;}  else 
{ 
obj_t BgL_xsz00_5236;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_pairz00_1570;
if(
PAIRP(BgL_xsz00_588))
{ /* Ieee/fixnum.scm 901 */
BgL_pairz00_1570 = BgL_xsz00_588; }  else 
{ 
obj_t BgL_auxz00_5239;
BgL_auxz00_5239 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_588); 
FAILURE(BgL_auxz00_5239,BFALSE,BFALSE);} 
BgL_xsz00_5236 = 
CDR(BgL_pairz00_1570); } 
BgL_xsz00_588 = BgL_xsz00_5236; 
goto BgL_zc3anonymousza31296ze3z83_589;} } 
if(
ELONGP(BgL_aux2218z00_3454))
{ /* Ieee/fixnum.scm 901 */
BgL_auxz00_5204 = BgL_aux2218z00_3454
; }  else 
{ 
obj_t BgL_auxz00_5247;
BgL_auxz00_5247 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2774z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2218z00_3454); 
FAILURE(BgL_auxz00_5247,BFALSE,BFALSE);} } 
return 
BELONG_TO_LONG(BgL_auxz00_5204);} } } 
}



/* _maxelong */
obj_t BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3046, obj_t BgL_n1z00_3047, obj_t BgL_nnz00_3048)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 900 */
{ /* Ieee/fixnum.scm 901 */
long BgL_auxz00_5252;
{ /* Ieee/fixnum.scm 901 */
long BgL_auxz00_5253;
{ /* Ieee/fixnum.scm 901 */
obj_t BgL_auxz00_5254;
if(
ELONGP(BgL_n1z00_3047))
{ /* Ieee/fixnum.scm 901 */
BgL_auxz00_5254 = BgL_n1z00_3047
; }  else 
{ 
obj_t BgL_auxz00_5257;
BgL_auxz00_5257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42010)), BGl_string2775z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3047); 
FAILURE(BgL_auxz00_5257,BFALSE,BFALSE);} 
BgL_auxz00_5253 = 
BELONG_TO_LONG(BgL_auxz00_5254); } 
BgL_auxz00_5252 = 
BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5253, BgL_nnz00_3048); } 
return 
make_belong(BgL_auxz00_5252);} } 
}



/* maxllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_88, obj_t BgL_nnz00_89)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 906 */
{ 
obj_t BgL_yz00_598;obj_t BgL_xsz00_599;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_auxz00_5264;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_aux2234z00_3470;
BgL_yz00_598 = 
make_bllong(BgL_n1z00_88); 
BgL_xsz00_599 = BgL_nnz00_89; 
BgL_zc3anonymousza31303ze3z83_600:
if(
NULLP(BgL_xsz00_599))
{ /* Ieee/fixnum.scm 907 */
BgL_aux2234z00_3470 = BgL_yz00_598; }  else 
{ /* Ieee/fixnum.scm 907 */
bool_t BgL_testz00_5267;
{ /* Ieee/fixnum.scm 907 */
BGL_LONGLONG_T BgL_n1z00_1573;BGL_LONGLONG_T BgL_n2z00_1574;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_pairz00_1572;
if(
PAIRP(BgL_xsz00_599))
{ /* Ieee/fixnum.scm 907 */
BgL_pairz00_1572 = BgL_xsz00_599; }  else 
{ 
obj_t BgL_auxz00_5270;
BgL_auxz00_5270 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_599); 
FAILURE(BgL_auxz00_5270,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_auxz00_5274;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_aux2224z00_3460;
BgL_aux2224z00_3460 = 
CAR(BgL_pairz00_1572); 
if(
LLONGP(BgL_aux2224z00_3460))
{ /* Ieee/fixnum.scm 907 */
BgL_auxz00_5274 = BgL_aux2224z00_3460
; }  else 
{ 
obj_t BgL_auxz00_5278;
BgL_auxz00_5278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2224z00_3460); 
FAILURE(BgL_auxz00_5278,BFALSE,BFALSE);} } 
BgL_n1z00_1573 = 
BLLONG_TO_LLONG(BgL_auxz00_5274); } } 
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_auxz00_5283;
if(
LLONGP(BgL_yz00_598))
{ /* Ieee/fixnum.scm 907 */
BgL_auxz00_5283 = BgL_yz00_598
; }  else 
{ 
obj_t BgL_auxz00_5286;
BgL_auxz00_5286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_598); 
FAILURE(BgL_auxz00_5286,BFALSE,BFALSE);} 
BgL_n2z00_1574 = 
BLLONG_TO_LLONG(BgL_auxz00_5283); } 
BgL_testz00_5267 = 
(BgL_n1z00_1573>BgL_n2z00_1574); } 
if(BgL_testz00_5267)
{ 
obj_t BgL_xsz00_5294;obj_t BgL_yz00_5292;
BgL_yz00_5292 = 
CAR(BgL_xsz00_599); 
BgL_xsz00_5294 = 
CDR(BgL_xsz00_599); 
BgL_xsz00_599 = BgL_xsz00_5294; 
BgL_yz00_598 = BgL_yz00_5292; 
goto BgL_zc3anonymousza31303ze3z83_600;}  else 
{ 
obj_t BgL_xsz00_5296;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_pairz00_1577;
if(
PAIRP(BgL_xsz00_599))
{ /* Ieee/fixnum.scm 907 */
BgL_pairz00_1577 = BgL_xsz00_599; }  else 
{ 
obj_t BgL_auxz00_5299;
BgL_auxz00_5299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_599); 
FAILURE(BgL_auxz00_5299,BFALSE,BFALSE);} 
BgL_xsz00_5296 = 
CDR(BgL_pairz00_1577); } 
BgL_xsz00_599 = BgL_xsz00_5296; 
goto BgL_zc3anonymousza31303ze3z83_600;} } 
if(
LLONGP(BgL_aux2234z00_3470))
{ /* Ieee/fixnum.scm 907 */
BgL_auxz00_5264 = BgL_aux2234z00_3470
; }  else 
{ 
obj_t BgL_auxz00_5307;
BgL_auxz00_5307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2776z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2234z00_3470); 
FAILURE(BgL_auxz00_5307,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_5264);} } } 
}



/* _maxllong */
obj_t BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3049, obj_t BgL_n1z00_3050, obj_t BgL_nnz00_3051)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 906 */
{ /* Ieee/fixnum.scm 907 */
BGL_LONGLONG_T BgL_auxz00_5312;
{ /* Ieee/fixnum.scm 907 */
BGL_LONGLONG_T BgL_auxz00_5313;
{ /* Ieee/fixnum.scm 907 */
obj_t BgL_auxz00_5314;
if(
LLONGP(BgL_n1z00_3050))
{ /* Ieee/fixnum.scm 907 */
BgL_auxz00_5314 = BgL_n1z00_3050
; }  else 
{ 
obj_t BgL_auxz00_5317;
BgL_auxz00_5317 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42289)), BGl_string2777z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3050); 
FAILURE(BgL_auxz00_5317,BFALSE,BFALSE);} 
BgL_auxz00_5313 = 
BLLONG_TO_LLONG(BgL_auxz00_5314); } 
BgL_auxz00_5312 = 
BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5313, BgL_nnz00_3051); } 
return 
make_bllong(BgL_auxz00_5312);} } 
}



/* maxbx */
BGL_EXPORTED_DEF obj_t BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_90, obj_t BgL_nnz00_91)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 912 */
{ 
obj_t BgL_yz00_609;obj_t BgL_xsz00_610;
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_aux2250z00_3486;
BgL_yz00_609 = BgL_n1z00_90; 
BgL_xsz00_610 = BgL_nnz00_91; 
BgL_zc3anonymousza31310ze3z83_611:
if(
NULLP(BgL_xsz00_610))
{ /* Ieee/fixnum.scm 913 */
BgL_aux2250z00_3486 = BgL_yz00_609; }  else 
{ /* Ieee/fixnum.scm 913 */
bool_t BgL_testz00_5326;
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_n1z00_1580;obj_t BgL_n2z00_1581;
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_pairz00_1579;
if(
PAIRP(BgL_xsz00_610))
{ /* Ieee/fixnum.scm 913 */
BgL_pairz00_1579 = BgL_xsz00_610; }  else 
{ 
obj_t BgL_auxz00_5329;
BgL_auxz00_5329 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_610); 
FAILURE(BgL_auxz00_5329,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_aux2240z00_3476;
BgL_aux2240z00_3476 = 
CAR(BgL_pairz00_1579); 
if(
BIGNUMP(BgL_aux2240z00_3476))
{ /* Ieee/fixnum.scm 913 */
BgL_n1z00_1580 = BgL_aux2240z00_3476; }  else 
{ 
obj_t BgL_auxz00_5336;
BgL_auxz00_5336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2240z00_3476); 
FAILURE(BgL_auxz00_5336,BFALSE,BFALSE);} } } 
if(
BIGNUMP(BgL_yz00_609))
{ /* Ieee/fixnum.scm 913 */
BgL_n2z00_1581 = BgL_yz00_609; }  else 
{ 
obj_t BgL_auxz00_5342;
BgL_auxz00_5342 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_609); 
FAILURE(BgL_auxz00_5342,BFALSE,BFALSE);} 
BgL_testz00_5326 = 
(
(long)(
bgl_bignum_cmp(BgL_n1z00_1580, BgL_n2z00_1581))>((long)0)); } 
if(BgL_testz00_5326)
{ 
obj_t BgL_xsz00_5351;obj_t BgL_yz00_5349;
BgL_yz00_5349 = 
CAR(BgL_xsz00_610); 
BgL_xsz00_5351 = 
CDR(BgL_xsz00_610); 
BgL_xsz00_610 = BgL_xsz00_5351; 
BgL_yz00_609 = BgL_yz00_5349; 
goto BgL_zc3anonymousza31310ze3z83_611;}  else 
{ 
obj_t BgL_xsz00_5353;
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_pairz00_1589;
if(
PAIRP(BgL_xsz00_610))
{ /* Ieee/fixnum.scm 913 */
BgL_pairz00_1589 = BgL_xsz00_610; }  else 
{ 
obj_t BgL_auxz00_5356;
BgL_auxz00_5356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xsz00_610); 
FAILURE(BgL_auxz00_5356,BFALSE,BFALSE);} 
BgL_xsz00_5353 = 
CDR(BgL_pairz00_1589); } 
BgL_xsz00_610 = BgL_xsz00_5353; 
goto BgL_zc3anonymousza31310ze3z83_611;} } 
if(
BIGNUMP(BgL_aux2250z00_3486))
{ /* Ieee/fixnum.scm 913 */
return BgL_aux2250z00_3486;}  else 
{ 
obj_t BgL_auxz00_5363;
BgL_auxz00_5363 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2778z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2250z00_3486); 
FAILURE(BgL_auxz00_5363,BFALSE,BFALSE);} } } } 
}



/* _maxbx */
obj_t BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3052, obj_t BgL_n1z00_3053, obj_t BgL_nnz00_3054)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 912 */
{ /* Ieee/fixnum.scm 913 */
obj_t BgL_auxz00_5367;
if(
BIGNUMP(BgL_n1z00_3053))
{ /* Ieee/fixnum.scm 913 */
BgL_auxz00_5367 = BgL_n1z00_3053
; }  else 
{ 
obj_t BgL_auxz00_5370;
BgL_auxz00_5370 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42565)), BGl_string2779z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3053); 
FAILURE(BgL_auxz00_5370,BFALSE,BFALSE);} 
return 
BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5367, BgL_nnz00_3054);} } 
}



/* +fx */
BGL_EXPORTED_DEF long BGl_zb2fxzb2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_92, long BgL_za72za7_93)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 918 */
return 
(BgL_za71za7_92+BgL_za72za7_93);} 
}



/* _+fx */
obj_t BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3055, obj_t BgL_za71za7_3056, obj_t BgL_za72za7_3057)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 918 */
{ /* Ieee/fixnum.scm 919 */
long BgL_auxz00_5376;
{ /* Ieee/fixnum.scm 919 */
long BgL_za71za7_4028;long BgL_za72za7_4029;
{ /* Ieee/fixnum.scm 919 */
obj_t BgL_auxz00_5377;
if(
INTEGERP(BgL_za71za7_3056))
{ /* Ieee/fixnum.scm 919 */
BgL_auxz00_5377 = BgL_za71za7_3056
; }  else 
{ 
obj_t BgL_auxz00_5380;
BgL_auxz00_5380 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42841)), BGl_string2780z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3056); 
FAILURE(BgL_auxz00_5380,BFALSE,BFALSE);} 
BgL_za71za7_4028 = 
(long)CINT(BgL_auxz00_5377); } 
{ /* Ieee/fixnum.scm 919 */
obj_t BgL_auxz00_5385;
if(
INTEGERP(BgL_za72za7_3057))
{ /* Ieee/fixnum.scm 919 */
BgL_auxz00_5385 = BgL_za72za7_3057
; }  else 
{ 
obj_t BgL_auxz00_5388;
BgL_auxz00_5388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)42841)), BGl_string2780z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3057); 
FAILURE(BgL_auxz00_5388,BFALSE,BFALSE);} 
BgL_za72za7_4029 = 
(long)CINT(BgL_auxz00_5385); } 
BgL_auxz00_5376 = 
(BgL_za71za7_4028+BgL_za72za7_4029); } 
return 
BINT(BgL_auxz00_5376);} } 
}



/* +elong */
BGL_EXPORTED_DEF long BGl_zb2elongzb2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_94, long BgL_za72za7_95)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 924 */
return 
(BgL_za71za7_94+BgL_za72za7_95);} 
}



/* _+elong */
obj_t BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3058, obj_t BgL_za71za7_3059, obj_t BgL_za72za7_3060)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 924 */
{ /* Ieee/fixnum.scm 925 */
long BgL_auxz00_5396;
{ /* Ieee/fixnum.scm 925 */
long BgL_za71za7_4030;long BgL_za72za7_4031;
{ /* Ieee/fixnum.scm 925 */
obj_t BgL_auxz00_5397;
if(
ELONGP(BgL_za71za7_3059))
{ /* Ieee/fixnum.scm 925 */
BgL_auxz00_5397 = BgL_za71za7_3059
; }  else 
{ 
obj_t BgL_auxz00_5400;
BgL_auxz00_5400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43112)), BGl_string2781z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3059); 
FAILURE(BgL_auxz00_5400,BFALSE,BFALSE);} 
BgL_za71za7_4030 = 
BELONG_TO_LONG(BgL_auxz00_5397); } 
{ /* Ieee/fixnum.scm 925 */
obj_t BgL_auxz00_5405;
if(
ELONGP(BgL_za72za7_3060))
{ /* Ieee/fixnum.scm 925 */
BgL_auxz00_5405 = BgL_za72za7_3060
; }  else 
{ 
obj_t BgL_auxz00_5408;
BgL_auxz00_5408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43112)), BGl_string2781z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3060); 
FAILURE(BgL_auxz00_5408,BFALSE,BFALSE);} 
BgL_za72za7_4031 = 
BELONG_TO_LONG(BgL_auxz00_5405); } 
BgL_auxz00_5396 = 
(BgL_za71za7_4030+BgL_za72za7_4031); } 
return 
make_belong(BgL_auxz00_5396);} } 
}



/* +llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_zb2llongzb2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_96, BGL_LONGLONG_T BgL_za72za7_97)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 930 */
return 
(BgL_za71za7_96+BgL_za72za7_97);} 
}



/* _+llong */
obj_t BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3061, obj_t BgL_za71za7_3062, obj_t BgL_za72za7_3063)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 930 */
{ /* Ieee/fixnum.scm 931 */
BGL_LONGLONG_T BgL_auxz00_5416;
{ /* Ieee/fixnum.scm 931 */
BGL_LONGLONG_T BgL_za71za7_4032;BGL_LONGLONG_T BgL_za72za7_4033;
{ /* Ieee/fixnum.scm 931 */
obj_t BgL_auxz00_5417;
if(
LLONGP(BgL_za71za7_3062))
{ /* Ieee/fixnum.scm 931 */
BgL_auxz00_5417 = BgL_za71za7_3062
; }  else 
{ 
obj_t BgL_auxz00_5420;
BgL_auxz00_5420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43386)), BGl_string2782z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3062); 
FAILURE(BgL_auxz00_5420,BFALSE,BFALSE);} 
BgL_za71za7_4032 = 
BLLONG_TO_LLONG(BgL_auxz00_5417); } 
{ /* Ieee/fixnum.scm 931 */
obj_t BgL_auxz00_5425;
if(
LLONGP(BgL_za72za7_3063))
{ /* Ieee/fixnum.scm 931 */
BgL_auxz00_5425 = BgL_za72za7_3063
; }  else 
{ 
obj_t BgL_auxz00_5428;
BgL_auxz00_5428 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43386)), BGl_string2782z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3063); 
FAILURE(BgL_auxz00_5428,BFALSE,BFALSE);} 
BgL_za72za7_4033 = 
BLLONG_TO_LLONG(BgL_auxz00_5425); } 
BgL_auxz00_5416 = 
(BgL_za71za7_4032+BgL_za72za7_4033); } 
return 
make_bllong(BgL_auxz00_5416);} } 
}



/* +bx */
BGL_EXPORTED_DEF obj_t BGl_zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_za71za7_98, obj_t BgL_za72za7_99)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 936 */
return 
bgl_bignum_add(BgL_za71za7_98, BgL_za72za7_99);} 
}



/* _+bx */
obj_t BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3064, obj_t BgL_za71za7_3065, obj_t BgL_za72za7_3066)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 936 */
{ /* Ieee/fixnum.scm 937 */
obj_t BgL_za71za7_4034;obj_t BgL_za72za7_4035;
if(
BIGNUMP(BgL_za71za7_3065))
{ /* Ieee/fixnum.scm 937 */
BgL_za71za7_4034 = BgL_za71za7_3065; }  else 
{ 
obj_t BgL_auxz00_5438;
BgL_auxz00_5438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43657)), BGl_string2783z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3065); 
FAILURE(BgL_auxz00_5438,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_za72za7_3066))
{ /* Ieee/fixnum.scm 937 */
BgL_za72za7_4035 = BgL_za72za7_3066; }  else 
{ 
obj_t BgL_auxz00_5444;
BgL_auxz00_5444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43657)), BGl_string2783z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3066); 
FAILURE(BgL_auxz00_5444,BFALSE,BFALSE);} 
return 
bgl_bignum_add(BgL_za71za7_4034, BgL_za72za7_4035);} } 
}



/* -fx */
BGL_EXPORTED_DEF long BGl_zd2fxzd2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_100, long BgL_za72za7_101)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 942 */
return 
(BgL_za71za7_100-BgL_za72za7_101);} 
}



/* _-fx */
obj_t BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3067, obj_t BgL_za71za7_3068, obj_t BgL_za72za7_3069)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 942 */
{ /* Ieee/fixnum.scm 943 */
long BgL_auxz00_5450;
{ /* Ieee/fixnum.scm 943 */
long BgL_za71za7_4036;long BgL_za72za7_4037;
{ /* Ieee/fixnum.scm 943 */
obj_t BgL_auxz00_5451;
if(
INTEGERP(BgL_za71za7_3068))
{ /* Ieee/fixnum.scm 943 */
BgL_auxz00_5451 = BgL_za71za7_3068
; }  else 
{ 
obj_t BgL_auxz00_5454;
BgL_auxz00_5454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43924)), BGl_string2784z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3068); 
FAILURE(BgL_auxz00_5454,BFALSE,BFALSE);} 
BgL_za71za7_4036 = 
(long)CINT(BgL_auxz00_5451); } 
{ /* Ieee/fixnum.scm 943 */
obj_t BgL_auxz00_5459;
if(
INTEGERP(BgL_za72za7_3069))
{ /* Ieee/fixnum.scm 943 */
BgL_auxz00_5459 = BgL_za72za7_3069
; }  else 
{ 
obj_t BgL_auxz00_5462;
BgL_auxz00_5462 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)43924)), BGl_string2784z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3069); 
FAILURE(BgL_auxz00_5462,BFALSE,BFALSE);} 
BgL_za72za7_4037 = 
(long)CINT(BgL_auxz00_5459); } 
BgL_auxz00_5450 = 
(BgL_za71za7_4036-BgL_za72za7_4037); } 
return 
BINT(BgL_auxz00_5450);} } 
}



/* -elong */
BGL_EXPORTED_DEF long BGl_zd2elongzd2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_102, long BgL_za72za7_103)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 948 */
{ /* Ieee/fixnum.scm 949 */
long BgL_auxz00_5469;
BgL_auxz00_5469 = 
(BgL_za71za7_102-BgL_za72za7_103); 
return 
LONG_TO_ELONG(BgL_auxz00_5469);} } 
}



/* _-elong */
obj_t BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3070, obj_t BgL_za71za7_3071, obj_t BgL_za72za7_3072)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 948 */
{ /* Ieee/fixnum.scm 949 */
long BgL_auxz00_5472;
{ /* Ieee/fixnum.scm 949 */
long BgL_za71za7_4038;long BgL_za72za7_4039;
{ /* Ieee/fixnum.scm 949 */
obj_t BgL_auxz00_5473;
if(
ELONGP(BgL_za71za7_3071))
{ /* Ieee/fixnum.scm 949 */
BgL_auxz00_5473 = BgL_za71za7_3071
; }  else 
{ 
obj_t BgL_auxz00_5476;
BgL_auxz00_5476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44195)), BGl_string2785z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3071); 
FAILURE(BgL_auxz00_5476,BFALSE,BFALSE);} 
BgL_za71za7_4038 = 
BELONG_TO_LONG(BgL_auxz00_5473); } 
{ /* Ieee/fixnum.scm 949 */
obj_t BgL_auxz00_5481;
if(
ELONGP(BgL_za72za7_3072))
{ /* Ieee/fixnum.scm 949 */
BgL_auxz00_5481 = BgL_za72za7_3072
; }  else 
{ 
obj_t BgL_auxz00_5484;
BgL_auxz00_5484 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44195)), BGl_string2785z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3072); 
FAILURE(BgL_auxz00_5484,BFALSE,BFALSE);} 
BgL_za72za7_4039 = 
BELONG_TO_LONG(BgL_auxz00_5481); } 
{ /* Ieee/fixnum.scm 949 */
long BgL_auxz00_5489;
BgL_auxz00_5489 = 
(BgL_za71za7_4038-BgL_za72za7_4039); 
BgL_auxz00_5472 = 
LONG_TO_ELONG(BgL_auxz00_5489); } } 
return 
make_belong(BgL_auxz00_5472);} } 
}



/* -llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_zd2llongzd2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_104, BGL_LONGLONG_T BgL_za72za7_105)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 954 */
return 
(BgL_za71za7_104-BgL_za72za7_105);} 
}



/* _-llong */
obj_t BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3073, obj_t BgL_za71za7_3074, obj_t BgL_za72za7_3075)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 954 */
{ /* Ieee/fixnum.scm 955 */
BGL_LONGLONG_T BgL_auxz00_5494;
{ /* Ieee/fixnum.scm 955 */
BGL_LONGLONG_T BgL_za71za7_4040;BGL_LONGLONG_T BgL_za72za7_4041;
{ /* Ieee/fixnum.scm 955 */
obj_t BgL_auxz00_5495;
if(
LLONGP(BgL_za71za7_3074))
{ /* Ieee/fixnum.scm 955 */
BgL_auxz00_5495 = BgL_za71za7_3074
; }  else 
{ 
obj_t BgL_auxz00_5498;
BgL_auxz00_5498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44469)), BGl_string2786z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3074); 
FAILURE(BgL_auxz00_5498,BFALSE,BFALSE);} 
BgL_za71za7_4040 = 
BLLONG_TO_LLONG(BgL_auxz00_5495); } 
{ /* Ieee/fixnum.scm 955 */
obj_t BgL_auxz00_5503;
if(
LLONGP(BgL_za72za7_3075))
{ /* Ieee/fixnum.scm 955 */
BgL_auxz00_5503 = BgL_za72za7_3075
; }  else 
{ 
obj_t BgL_auxz00_5506;
BgL_auxz00_5506 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44469)), BGl_string2786z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3075); 
FAILURE(BgL_auxz00_5506,BFALSE,BFALSE);} 
BgL_za72za7_4041 = 
BLLONG_TO_LLONG(BgL_auxz00_5503); } 
BgL_auxz00_5494 = 
(BgL_za71za7_4040-BgL_za72za7_4041); } 
return 
make_bllong(BgL_auxz00_5494);} } 
}



/* -bx */
BGL_EXPORTED_DEF obj_t BGl_zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_za71za7_106, obj_t BgL_za72za7_107)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 960 */
return 
bgl_bignum_sub(BgL_za71za7_106, BgL_za72za7_107);} 
}



/* _-bx */
obj_t BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3076, obj_t BgL_za71za7_3077, obj_t BgL_za72za7_3078)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 960 */
{ /* Ieee/fixnum.scm 961 */
obj_t BgL_za71za7_4042;obj_t BgL_za72za7_4043;
if(
BIGNUMP(BgL_za71za7_3077))
{ /* Ieee/fixnum.scm 961 */
BgL_za71za7_4042 = BgL_za71za7_3077; }  else 
{ 
obj_t BgL_auxz00_5516;
BgL_auxz00_5516 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44740)), BGl_string2787z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3077); 
FAILURE(BgL_auxz00_5516,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_za72za7_3078))
{ /* Ieee/fixnum.scm 961 */
BgL_za72za7_4043 = BgL_za72za7_3078; }  else 
{ 
obj_t BgL_auxz00_5522;
BgL_auxz00_5522 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)44740)), BGl_string2787z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3078); 
FAILURE(BgL_auxz00_5522,BFALSE,BFALSE);} 
return 
bgl_bignum_sub(BgL_za71za7_4042, BgL_za72za7_4043);} } 
}



/* *fx */
BGL_EXPORTED_DEF long BGl_za2fxza2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_108, long BgL_za72za7_109)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 966 */
return 
(BgL_za71za7_108*BgL_za72za7_109);} 
}



/* _*fx */
obj_t BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3079, obj_t BgL_za71za7_3080, obj_t BgL_za72za7_3081)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 966 */
{ /* Ieee/fixnum.scm 967 */
long BgL_auxz00_5528;
{ /* Ieee/fixnum.scm 967 */
long BgL_za71za7_4044;long BgL_za72za7_4045;
{ /* Ieee/fixnum.scm 967 */
obj_t BgL_auxz00_5529;
if(
INTEGERP(BgL_za71za7_3080))
{ /* Ieee/fixnum.scm 967 */
BgL_auxz00_5529 = BgL_za71za7_3080
; }  else 
{ 
obj_t BgL_auxz00_5532;
BgL_auxz00_5532 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45007)), BGl_string2788z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3080); 
FAILURE(BgL_auxz00_5532,BFALSE,BFALSE);} 
BgL_za71za7_4044 = 
(long)CINT(BgL_auxz00_5529); } 
{ /* Ieee/fixnum.scm 967 */
obj_t BgL_auxz00_5537;
if(
INTEGERP(BgL_za72za7_3081))
{ /* Ieee/fixnum.scm 967 */
BgL_auxz00_5537 = BgL_za72za7_3081
; }  else 
{ 
obj_t BgL_auxz00_5540;
BgL_auxz00_5540 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45007)), BGl_string2788z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3081); 
FAILURE(BgL_auxz00_5540,BFALSE,BFALSE);} 
BgL_za72za7_4045 = 
(long)CINT(BgL_auxz00_5537); } 
BgL_auxz00_5528 = 
(BgL_za71za7_4044*BgL_za72za7_4045); } 
return 
BINT(BgL_auxz00_5528);} } 
}



/* *elong */
BGL_EXPORTED_DEF long BGl_za2elongza2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_110, long BgL_za72za7_111)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 972 */
return 
(BgL_za71za7_110*BgL_za72za7_111);} 
}



/* _*elong */
obj_t BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3082, obj_t BgL_za71za7_3083, obj_t BgL_za72za7_3084)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 972 */
{ /* Ieee/fixnum.scm 973 */
long BgL_auxz00_5548;
{ /* Ieee/fixnum.scm 973 */
long BgL_za71za7_4046;long BgL_za72za7_4047;
{ /* Ieee/fixnum.scm 973 */
obj_t BgL_auxz00_5549;
if(
ELONGP(BgL_za71za7_3083))
{ /* Ieee/fixnum.scm 973 */
BgL_auxz00_5549 = BgL_za71za7_3083
; }  else 
{ 
obj_t BgL_auxz00_5552;
BgL_auxz00_5552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45278)), BGl_string2789z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3083); 
FAILURE(BgL_auxz00_5552,BFALSE,BFALSE);} 
BgL_za71za7_4046 = 
BELONG_TO_LONG(BgL_auxz00_5549); } 
{ /* Ieee/fixnum.scm 973 */
obj_t BgL_auxz00_5557;
if(
ELONGP(BgL_za72za7_3084))
{ /* Ieee/fixnum.scm 973 */
BgL_auxz00_5557 = BgL_za72za7_3084
; }  else 
{ 
obj_t BgL_auxz00_5560;
BgL_auxz00_5560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45278)), BGl_string2789z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3084); 
FAILURE(BgL_auxz00_5560,BFALSE,BFALSE);} 
BgL_za72za7_4047 = 
BELONG_TO_LONG(BgL_auxz00_5557); } 
BgL_auxz00_5548 = 
(BgL_za71za7_4046*BgL_za72za7_4047); } 
return 
make_belong(BgL_auxz00_5548);} } 
}



/* *llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_za2llongza2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_112, BGL_LONGLONG_T BgL_za72za7_113)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 978 */
return 
(BgL_za71za7_112*BgL_za72za7_113);} 
}



/* _*llong */
obj_t BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3085, obj_t BgL_za71za7_3086, obj_t BgL_za72za7_3087)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 978 */
{ /* Ieee/fixnum.scm 979 */
BGL_LONGLONG_T BgL_auxz00_5568;
{ /* Ieee/fixnum.scm 979 */
BGL_LONGLONG_T BgL_za71za7_4048;BGL_LONGLONG_T BgL_za72za7_4049;
{ /* Ieee/fixnum.scm 979 */
obj_t BgL_auxz00_5569;
if(
LLONGP(BgL_za71za7_3086))
{ /* Ieee/fixnum.scm 979 */
BgL_auxz00_5569 = BgL_za71za7_3086
; }  else 
{ 
obj_t BgL_auxz00_5572;
BgL_auxz00_5572 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45552)), BGl_string2790z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3086); 
FAILURE(BgL_auxz00_5572,BFALSE,BFALSE);} 
BgL_za71za7_4048 = 
BLLONG_TO_LLONG(BgL_auxz00_5569); } 
{ /* Ieee/fixnum.scm 979 */
obj_t BgL_auxz00_5577;
if(
LLONGP(BgL_za72za7_3087))
{ /* Ieee/fixnum.scm 979 */
BgL_auxz00_5577 = BgL_za72za7_3087
; }  else 
{ 
obj_t BgL_auxz00_5580;
BgL_auxz00_5580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45552)), BGl_string2790z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3087); 
FAILURE(BgL_auxz00_5580,BFALSE,BFALSE);} 
BgL_za72za7_4049 = 
BLLONG_TO_LLONG(BgL_auxz00_5577); } 
BgL_auxz00_5568 = 
(BgL_za71za7_4048*BgL_za72za7_4049); } 
return 
make_bllong(BgL_auxz00_5568);} } 
}



/* *bx */
BGL_EXPORTED_DEF obj_t BGl_za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_za71za7_114, obj_t BgL_za72za7_115)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 984 */
return 
bgl_bignum_mul(BgL_za71za7_114, BgL_za72za7_115);} 
}



/* _*bx */
obj_t BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3088, obj_t BgL_za71za7_3089, obj_t BgL_za72za7_3090)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 984 */
{ /* Ieee/fixnum.scm 985 */
obj_t BgL_za71za7_4050;obj_t BgL_za72za7_4051;
if(
BIGNUMP(BgL_za71za7_3089))
{ /* Ieee/fixnum.scm 985 */
BgL_za71za7_4050 = BgL_za71za7_3089; }  else 
{ 
obj_t BgL_auxz00_5590;
BgL_auxz00_5590 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45823)), BGl_string2791z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3089); 
FAILURE(BgL_auxz00_5590,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_za72za7_3090))
{ /* Ieee/fixnum.scm 985 */
BgL_za72za7_4051 = BgL_za72za7_3090; }  else 
{ 
obj_t BgL_auxz00_5596;
BgL_auxz00_5596 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)45823)), BGl_string2791z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3090); 
FAILURE(BgL_auxz00_5596,BFALSE,BFALSE);} 
return 
bgl_bignum_mul(BgL_za71za7_4050, BgL_za72za7_4051);} } 
}



/* /fx */
BGL_EXPORTED_DEF long BGl_zf2fxzf2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_116, long BgL_za72za7_117)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 990 */
return 
(BgL_za71za7_116/BgL_za72za7_117);} 
}



/* _/fx */
obj_t BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3091, obj_t BgL_za71za7_3092, obj_t BgL_za72za7_3093)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 990 */
{ /* Ieee/fixnum.scm 991 */
long BgL_auxz00_5602;
{ /* Ieee/fixnum.scm 991 */
long BgL_za71za7_4052;long BgL_za72za7_4053;
{ /* Ieee/fixnum.scm 991 */
obj_t BgL_auxz00_5603;
if(
INTEGERP(BgL_za71za7_3092))
{ /* Ieee/fixnum.scm 991 */
BgL_auxz00_5603 = BgL_za71za7_3092
; }  else 
{ 
obj_t BgL_auxz00_5606;
BgL_auxz00_5606 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46090)), BGl_string2792z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3092); 
FAILURE(BgL_auxz00_5606,BFALSE,BFALSE);} 
BgL_za71za7_4052 = 
(long)CINT(BgL_auxz00_5603); } 
{ /* Ieee/fixnum.scm 991 */
obj_t BgL_auxz00_5611;
if(
INTEGERP(BgL_za72za7_3093))
{ /* Ieee/fixnum.scm 991 */
BgL_auxz00_5611 = BgL_za72za7_3093
; }  else 
{ 
obj_t BgL_auxz00_5614;
BgL_auxz00_5614 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46090)), BGl_string2792z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3093); 
FAILURE(BgL_auxz00_5614,BFALSE,BFALSE);} 
BgL_za72za7_4053 = 
(long)CINT(BgL_auxz00_5611); } 
BgL_auxz00_5602 = 
(BgL_za71za7_4052/BgL_za72za7_4053); } 
return 
BINT(BgL_auxz00_5602);} } 
}



/* /elong */
BGL_EXPORTED_DEF long BGl_zf2elongzf2zz__r4_numbers_6_5_fixnumz00(long BgL_za71za7_118, long BgL_za72za7_119)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 996 */
return 
(BgL_za71za7_118/BgL_za72za7_119);} 
}



/* _/elong */
obj_t BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3094, obj_t BgL_za71za7_3095, obj_t BgL_za72za7_3096)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 996 */
{ /* Ieee/fixnum.scm 997 */
long BgL_auxz00_5622;
{ /* Ieee/fixnum.scm 997 */
long BgL_za71za7_4054;long BgL_za72za7_4055;
{ /* Ieee/fixnum.scm 997 */
obj_t BgL_auxz00_5623;
if(
ELONGP(BgL_za71za7_3095))
{ /* Ieee/fixnum.scm 997 */
BgL_auxz00_5623 = BgL_za71za7_3095
; }  else 
{ 
obj_t BgL_auxz00_5626;
BgL_auxz00_5626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46361)), BGl_string2793z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3095); 
FAILURE(BgL_auxz00_5626,BFALSE,BFALSE);} 
BgL_za71za7_4054 = 
BELONG_TO_LONG(BgL_auxz00_5623); } 
{ /* Ieee/fixnum.scm 997 */
obj_t BgL_auxz00_5631;
if(
ELONGP(BgL_za72za7_3096))
{ /* Ieee/fixnum.scm 997 */
BgL_auxz00_5631 = BgL_za72za7_3096
; }  else 
{ 
obj_t BgL_auxz00_5634;
BgL_auxz00_5634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46361)), BGl_string2793z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3096); 
FAILURE(BgL_auxz00_5634,BFALSE,BFALSE);} 
BgL_za72za7_4055 = 
BELONG_TO_LONG(BgL_auxz00_5631); } 
BgL_auxz00_5622 = 
(BgL_za71za7_4054/BgL_za72za7_4055); } 
return 
make_belong(BgL_auxz00_5622);} } 
}



/* /llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_zf2llongzf2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_120, BGL_LONGLONG_T BgL_za72za7_121)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1002 */
return 
(BgL_za71za7_120/BgL_za72za7_121);} 
}



/* _/llong */
obj_t BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3097, obj_t BgL_za71za7_3098, obj_t BgL_za72za7_3099)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1002 */
{ /* Ieee/fixnum.scm 1003 */
BGL_LONGLONG_T BgL_auxz00_5642;
{ /* Ieee/fixnum.scm 1003 */
BGL_LONGLONG_T BgL_za71za7_4056;BGL_LONGLONG_T BgL_za72za7_4057;
{ /* Ieee/fixnum.scm 1003 */
obj_t BgL_auxz00_5643;
if(
LLONGP(BgL_za71za7_3098))
{ /* Ieee/fixnum.scm 1003 */
BgL_auxz00_5643 = BgL_za71za7_3098
; }  else 
{ 
obj_t BgL_auxz00_5646;
BgL_auxz00_5646 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46635)), BGl_string2794z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3098); 
FAILURE(BgL_auxz00_5646,BFALSE,BFALSE);} 
BgL_za71za7_4056 = 
BLLONG_TO_LLONG(BgL_auxz00_5643); } 
{ /* Ieee/fixnum.scm 1003 */
obj_t BgL_auxz00_5651;
if(
LLONGP(BgL_za72za7_3099))
{ /* Ieee/fixnum.scm 1003 */
BgL_auxz00_5651 = BgL_za72za7_3099
; }  else 
{ 
obj_t BgL_auxz00_5654;
BgL_auxz00_5654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46635)), BGl_string2794z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3099); 
FAILURE(BgL_auxz00_5654,BFALSE,BFALSE);} 
BgL_za72za7_4057 = 
BLLONG_TO_LLONG(BgL_auxz00_5651); } 
BgL_auxz00_5642 = 
(BgL_za71za7_4056/BgL_za72za7_4057); } 
return 
make_bllong(BgL_auxz00_5642);} } 
}



/* /bx */
BGL_EXPORTED_DEF obj_t BGl_zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_za71za7_122, obj_t BgL_za72za7_123)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1008 */
return 
bgl_bignum_quotient(BgL_za71za7_122, BgL_za72za7_123);} 
}



/* _/bx */
obj_t BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3100, obj_t BgL_za71za7_3101, obj_t BgL_za72za7_3102)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1008 */
{ /* Ieee/fixnum.scm 1009 */
obj_t BgL_za71za7_4058;obj_t BgL_za72za7_4059;
if(
BIGNUMP(BgL_za71za7_3101))
{ /* Ieee/fixnum.scm 1009 */
BgL_za71za7_4058 = BgL_za71za7_3101; }  else 
{ 
obj_t BgL_auxz00_5664;
BgL_auxz00_5664 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46906)), BGl_string2795z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3101); 
FAILURE(BgL_auxz00_5664,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_za72za7_3102))
{ /* Ieee/fixnum.scm 1009 */
BgL_za72za7_4059 = BgL_za72za7_3102; }  else 
{ 
obj_t BgL_auxz00_5670;
BgL_auxz00_5670 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)46906)), BGl_string2795z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3102); 
FAILURE(BgL_auxz00_5670,BFALSE,BFALSE);} 
return 
bgl_bignum_quotient(BgL_za71za7_4058, BgL_za72za7_4059);} } 
}



/* negfx */
BGL_EXPORTED_DEF long BGl_negfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_124)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1014 */
return 
NEG(BgL_n1z00_124);} 
}



/* _negfx */
obj_t BGl__negfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3103, obj_t BgL_n1z00_3104)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1014 */
{ /* Ieee/fixnum.scm 1015 */
long BgL_auxz00_5676;
{ /* Ieee/fixnum.scm 1015 */
long BgL_n1z00_4060;
{ /* Ieee/fixnum.scm 1015 */
obj_t BgL_auxz00_5677;
if(
INTEGERP(BgL_n1z00_3104))
{ /* Ieee/fixnum.scm 1015 */
BgL_auxz00_5677 = BgL_n1z00_3104
; }  else 
{ 
obj_t BgL_auxz00_5680;
BgL_auxz00_5680 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)47179)), BGl_string2796z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3104); 
FAILURE(BgL_auxz00_5680,BFALSE,BFALSE);} 
BgL_n1z00_4060 = 
(long)CINT(BgL_auxz00_5677); } 
BgL_auxz00_5676 = 
NEG(BgL_n1z00_4060); } 
return 
BINT(BgL_auxz00_5676);} } 
}



/* negelong */
BGL_EXPORTED_DEF long BGl_negelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_125)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1020 */
return 
NEG(BgL_n1z00_125);} 
}



/* _negelong */
obj_t BGl__negelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3105, obj_t BgL_n1z00_3106)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1020 */
{ /* Ieee/fixnum.scm 1021 */
long BgL_auxz00_5688;
{ /* Ieee/fixnum.scm 1021 */
long BgL_n1z00_4061;
{ /* Ieee/fixnum.scm 1021 */
obj_t BgL_auxz00_5689;
if(
ELONGP(BgL_n1z00_3106))
{ /* Ieee/fixnum.scm 1021 */
BgL_auxz00_5689 = BgL_n1z00_3106
; }  else 
{ 
obj_t BgL_auxz00_5692;
BgL_auxz00_5692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)47448)), BGl_string2797z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3106); 
FAILURE(BgL_auxz00_5692,BFALSE,BFALSE);} 
BgL_n1z00_4061 = 
BELONG_TO_LONG(BgL_auxz00_5689); } 
BgL_auxz00_5688 = 
NEG(BgL_n1z00_4061); } 
return 
make_belong(BgL_auxz00_5688);} } 
}



/* negllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_negllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_126)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1026 */
return 
NEG(BgL_n1z00_126);} 
}



/* _negllong */
obj_t BGl__negllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3107, obj_t BgL_n1z00_3108)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1026 */
{ /* Ieee/fixnum.scm 1027 */
BGL_LONGLONG_T BgL_auxz00_5700;
{ /* Ieee/fixnum.scm 1027 */
BGL_LONGLONG_T BgL_n1z00_4062;
{ /* Ieee/fixnum.scm 1027 */
obj_t BgL_auxz00_5701;
if(
LLONGP(BgL_n1z00_3108))
{ /* Ieee/fixnum.scm 1027 */
BgL_auxz00_5701 = BgL_n1z00_3108
; }  else 
{ 
obj_t BgL_auxz00_5704;
BgL_auxz00_5704 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)47720)), BGl_string2798z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3108); 
FAILURE(BgL_auxz00_5704,BFALSE,BFALSE);} 
BgL_n1z00_4062 = 
BLLONG_TO_LLONG(BgL_auxz00_5701); } 
BgL_auxz00_5700 = 
NEG(BgL_n1z00_4062); } 
return 
make_bllong(BgL_auxz00_5700);} } 
}



/* negbx */
BGL_EXPORTED_DEF obj_t BGl_negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_127)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1032 */
return 
bgl_bignum_neg(BgL_n1z00_127);} 
}



/* _negbx */
obj_t BGl__negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3109, obj_t BgL_n1z00_3110)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1032 */
{ /* Ieee/fixnum.scm 1033 */
obj_t BgL_n1z00_4063;
if(
BIGNUMP(BgL_n1z00_3110))
{ /* Ieee/fixnum.scm 1033 */
BgL_n1z00_4063 = BgL_n1z00_3110; }  else 
{ 
obj_t BgL_auxz00_5714;
BgL_auxz00_5714 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)47989)), BGl_string2799z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3110); 
FAILURE(BgL_auxz00_5714,BFALSE,BFALSE);} 
return 
bgl_bignum_neg(BgL_n1z00_4063);} } 
}



/* absfx */
BGL_EXPORTED_DEF long BGl_absfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_128)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1038 */
if(
(BgL_nz00_128<((long)0)))
{ /* Ieee/fixnum.scm 1039 */
return 
NEG(BgL_nz00_128);}  else 
{ /* Ieee/fixnum.scm 1039 */
return BgL_nz00_128;} } 
}



/* _absfx */
obj_t BGl__absfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3111, obj_t BgL_nz00_3112)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1038 */
{ /* Ieee/fixnum.scm 1039 */
long BgL_auxz00_5722;
{ /* Ieee/fixnum.scm 1039 */
long BgL_nz00_4064;
{ /* Ieee/fixnum.scm 1039 */
obj_t BgL_auxz00_5723;
if(
INTEGERP(BgL_nz00_3112))
{ /* Ieee/fixnum.scm 1039 */
BgL_auxz00_5723 = BgL_nz00_3112
; }  else 
{ 
obj_t BgL_auxz00_5726;
BgL_auxz00_5726 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)48253)), BGl_string2800z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3112); 
FAILURE(BgL_auxz00_5726,BFALSE,BFALSE);} 
BgL_nz00_4064 = 
(long)CINT(BgL_auxz00_5723); } 
if(
(BgL_nz00_4064<((long)0)))
{ /* Ieee/fixnum.scm 1039 */
BgL_auxz00_5722 = 
NEG(BgL_nz00_4064)
; }  else 
{ /* Ieee/fixnum.scm 1039 */
BgL_auxz00_5722 = BgL_nz00_4064
; } } 
return 
BINT(BgL_auxz00_5722);} } 
}



/* abselong */
BGL_EXPORTED_DEF long BGl_abselongz00zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_129)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1046 */
if(
(BgL_nz00_129<((long)0)))
{ /* Ieee/fixnum.scm 1047 */
return 
NEG(BgL_nz00_129);}  else 
{ /* Ieee/fixnum.scm 1047 */
return BgL_nz00_129;} } 
}



/* _abselong */
obj_t BGl__abselongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3113, obj_t BgL_nz00_3114)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1046 */
{ /* Ieee/fixnum.scm 1047 */
long BgL_auxz00_5738;
{ /* Ieee/fixnum.scm 1047 */
long BgL_nz00_4065;
{ /* Ieee/fixnum.scm 1047 */
obj_t BgL_auxz00_5739;
if(
ELONGP(BgL_nz00_3114))
{ /* Ieee/fixnum.scm 1047 */
BgL_auxz00_5739 = BgL_nz00_3114
; }  else 
{ 
obj_t BgL_auxz00_5742;
BgL_auxz00_5742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)48549)), BGl_string2801z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3114); 
FAILURE(BgL_auxz00_5742,BFALSE,BFALSE);} 
BgL_nz00_4065 = 
BELONG_TO_LONG(BgL_auxz00_5739); } 
if(
(BgL_nz00_4065<((long)0)))
{ /* Ieee/fixnum.scm 1047 */
BgL_auxz00_5738 = 
NEG(BgL_nz00_4065)
; }  else 
{ /* Ieee/fixnum.scm 1047 */
BgL_auxz00_5738 = BgL_nz00_4065
; } } 
return 
make_belong(BgL_auxz00_5738);} } 
}



/* absllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_absllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_nz00_130)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1054 */
if(
(BgL_nz00_130<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1055 */
return 
NEG(BgL_nz00_130);}  else 
{ /* Ieee/fixnum.scm 1055 */
return BgL_nz00_130;} } 
}



/* _absllong */
obj_t BGl__absllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3115, obj_t BgL_nz00_3116)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1054 */
{ /* Ieee/fixnum.scm 1055 */
BGL_LONGLONG_T BgL_auxz00_5754;
{ /* Ieee/fixnum.scm 1055 */
BGL_LONGLONG_T BgL_nz00_4066;
{ /* Ieee/fixnum.scm 1055 */
obj_t BgL_auxz00_5755;
if(
LLONGP(BgL_nz00_3116))
{ /* Ieee/fixnum.scm 1055 */
BgL_auxz00_5755 = BgL_nz00_3116
; }  else 
{ 
obj_t BgL_auxz00_5758;
BgL_auxz00_5758 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)48853)), BGl_string2802z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3116); 
FAILURE(BgL_auxz00_5758,BFALSE,BFALSE);} 
BgL_nz00_4066 = 
BLLONG_TO_LLONG(BgL_auxz00_5755); } 
if(
(BgL_nz00_4066<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1055 */
BgL_auxz00_5754 = 
NEG(BgL_nz00_4066)
; }  else 
{ /* Ieee/fixnum.scm 1055 */
BgL_auxz00_5754 = BgL_nz00_4066
; } } 
return 
make_bllong(BgL_auxz00_5754);} } 
}



/* absbx */
BGL_EXPORTED_DEF obj_t BGl_absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_nz00_131)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1062 */
return 
bgl_bignum_abs(BgL_nz00_131);} 
}



/* _absbx */
obj_t BGl__absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3117, obj_t BgL_nz00_3118)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1062 */
{ /* Ieee/fixnum.scm 1063 */
obj_t BgL_nz00_4067;
if(
BIGNUMP(BgL_nz00_3118))
{ /* Ieee/fixnum.scm 1063 */
BgL_nz00_4067 = BgL_nz00_3118; }  else 
{ 
obj_t BgL_auxz00_5770;
BgL_auxz00_5770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)49154)), BGl_string2803z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3118); 
FAILURE(BgL_auxz00_5770,BFALSE,BFALSE);} 
return 
bgl_bignum_abs(BgL_nz00_4067);} } 
}



/* quotient */
BGL_EXPORTED_DEF obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_132, obj_t BgL_n2z00_133)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1128 */
if(
INTEGERP(BgL_n1z00_132))
{ /* Ieee/fixnum.scm 1129 */
if(
INTEGERP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5781;long BgL_auxz00_5779;
BgL_auxz00_5781 = 
(long)CINT(BgL_n2z00_133); 
BgL_auxz00_5779 = 
(long)CINT(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_FX(BgL_auxz00_5779, BgL_auxz00_5781);}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
ELONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
long BgL_arg1323z00_625;
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5786;
BgL_auxz00_5786 = 
(long)CINT(BgL_n1z00_132); 
BgL_arg1323z00_625 = 
LONG_TO_ELONG(BgL_auxz00_5786); } 
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5789;
BgL_auxz00_5789 = 
BELONG_TO_LONG(BgL_n2z00_133); 
return 
BGL_SAFE_QUOTIENT_ELONG(BgL_arg1323z00_625, BgL_auxz00_5789);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
LLONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_arg1325z00_627;
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5794;
BgL_auxz00_5794 = 
(long)CINT(BgL_n1z00_132); 
BgL_arg1325z00_627 = 
LONG_TO_LLONG(BgL_auxz00_5794); } 
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_auxz00_5797;
BgL_auxz00_5797 = 
BLLONG_TO_LLONG(BgL_n2z00_133); 
return 
BGL_SAFE_QUOTIENT_LLONG(BgL_arg1325z00_627, BgL_auxz00_5797);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
BIGNUMP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
return 
bgl_bignum_quotient(
bgl_long_to_bignum(
(long)CINT(BgL_n1z00_132)), BgL_n2z00_133);}  else 
{ /* Ieee/fixnum.scm 1129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_133);} } } } }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
ELONGP(BgL_n1z00_132))
{ /* Ieee/fixnum.scm 1129 */
if(
INTEGERP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
long BgL_arg1330z00_632;
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5810;
BgL_auxz00_5810 = 
(long)CINT(BgL_n2z00_133); 
BgL_arg1330z00_632 = 
LONG_TO_ELONG(BgL_auxz00_5810); } 
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5813;
BgL_auxz00_5813 = 
BELONG_TO_LONG(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_ELONG(BgL_auxz00_5813, BgL_arg1330z00_632);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
ELONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5820;long BgL_auxz00_5818;
BgL_auxz00_5820 = 
BELONG_TO_LONG(BgL_n2z00_133); 
BgL_auxz00_5818 = 
BELONG_TO_LONG(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_ELONG(BgL_auxz00_5818, BgL_auxz00_5820);}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
LLONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_arg1333z00_635;
BgL_arg1333z00_635 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n1z00_132)); 
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_auxz00_5827;
BgL_auxz00_5827 = 
BLLONG_TO_LLONG(BgL_n2z00_133); 
return 
BGL_SAFE_QUOTIENT_LLONG(BgL_arg1333z00_635, BgL_auxz00_5827);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
BIGNUMP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
obj_t BgL_auxz00_5832;
{ /* Ieee/fixnum.scm 1129 */
long BgL_xz00_1618;
BgL_xz00_1618 = 
BELONG_TO_LONG(BgL_n1z00_132); 
BgL_auxz00_5832 = 
bgl_long_to_bignum(BgL_xz00_1618); } 
return 
bgl_bignum_quotient(BgL_auxz00_5832, BgL_n2z00_133);}  else 
{ /* Ieee/fixnum.scm 1129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_133);} } } } }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
LLONGP(BgL_n1z00_132))
{ /* Ieee/fixnum.scm 1129 */
if(
INTEGERP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_arg1338z00_640;
{ /* Ieee/fixnum.scm 1129 */
long BgL_auxz00_5841;
BgL_auxz00_5841 = 
(long)CINT(BgL_n2z00_133); 
BgL_arg1338z00_640 = 
LONG_TO_LLONG(BgL_auxz00_5841); } 
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_auxz00_5844;
BgL_auxz00_5844 = 
BLLONG_TO_LLONG(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5844, BgL_arg1338z00_640);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
ELONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_arg1340z00_642;
BgL_arg1340z00_642 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n2z00_133)); 
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_auxz00_5851;
BgL_auxz00_5851 = 
BLLONG_TO_LLONG(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5851, BgL_arg1340z00_642);} }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
LLONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
BGL_LONGLONG_T BgL_auxz00_5858;BGL_LONGLONG_T BgL_auxz00_5856;
BgL_auxz00_5858 = 
BLLONG_TO_LLONG(BgL_n2z00_133); 
BgL_auxz00_5856 = 
BLLONG_TO_LLONG(BgL_n1z00_132); 
return 
BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5856, BgL_auxz00_5858);}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
BIGNUMP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
return 
bgl_bignum_quotient(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n1z00_132)), BgL_n2z00_133);}  else 
{ /* Ieee/fixnum.scm 1129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_133);} } } } }  else 
{ /* Ieee/fixnum.scm 1129 */
if(
BIGNUMP(BgL_n1z00_132))
{ /* Ieee/fixnum.scm 1129 */
if(
INTEGERP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
return 
bgl_bignum_quotient(BgL_n1z00_132, 
bgl_long_to_bignum(
(long)CINT(BgL_n2z00_133)));}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
ELONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
obj_t BgL_auxz00_5876;
{ /* Ieee/fixnum.scm 1129 */
long BgL_xz00_1636;
BgL_xz00_1636 = 
BELONG_TO_LONG(BgL_n2z00_133); 
BgL_auxz00_5876 = 
bgl_long_to_bignum(BgL_xz00_1636); } 
return 
bgl_bignum_quotient(BgL_n1z00_132, BgL_auxz00_5876);}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
LLONGP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
return 
bgl_bignum_quotient(BgL_n1z00_132, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n2z00_133)));}  else 
{ /* Ieee/fixnum.scm 1129 */
if(
BIGNUMP(BgL_n2z00_133))
{ /* Ieee/fixnum.scm 1129 */
return 
bgl_bignum_quotient(BgL_n1z00_132, BgL_n2z00_133);}  else 
{ /* Ieee/fixnum.scm 1129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_133);} } } } }  else 
{ /* Ieee/fixnum.scm 1129 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2804z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_132);} } } } } 
}



/* _quotient */
obj_t BGl__quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3119, obj_t BgL_n1z00_3120, obj_t BgL_n2z00_3121)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1128 */
return 
BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3120, BgL_n2z00_3121);} 
}



/* quotientfx */
BGL_EXPORTED_DEF long BGl_quotientfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_134, long BgL_n2z00_135)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1134 */
return 
(BgL_n1z00_134/BgL_n2z00_135);} 
}



/* _quotientfx */
obj_t BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3122, obj_t BgL_n1z00_3123, obj_t BgL_n2z00_3124)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1134 */
{ /* Ieee/fixnum.scm 1135 */
long BgL_auxz00_5892;
{ /* Ieee/fixnum.scm 1135 */
long BgL_n1z00_4068;long BgL_n2z00_4069;
{ /* Ieee/fixnum.scm 1135 */
obj_t BgL_auxz00_5893;
if(
INTEGERP(BgL_n1z00_3123))
{ /* Ieee/fixnum.scm 1135 */
BgL_auxz00_5893 = BgL_n1z00_3123
; }  else 
{ 
obj_t BgL_auxz00_5896;
BgL_auxz00_5896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)51477)), BGl_string2807z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3123); 
FAILURE(BgL_auxz00_5896,BFALSE,BFALSE);} 
BgL_n1z00_4068 = 
(long)CINT(BgL_auxz00_5893); } 
{ /* Ieee/fixnum.scm 1135 */
obj_t BgL_auxz00_5901;
if(
INTEGERP(BgL_n2z00_3124))
{ /* Ieee/fixnum.scm 1135 */
BgL_auxz00_5901 = BgL_n2z00_3124
; }  else 
{ 
obj_t BgL_auxz00_5904;
BgL_auxz00_5904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)51477)), BGl_string2807z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3124); 
FAILURE(BgL_auxz00_5904,BFALSE,BFALSE);} 
BgL_n2z00_4069 = 
(long)CINT(BgL_auxz00_5901); } 
BgL_auxz00_5892 = 
(BgL_n1z00_4068/BgL_n2z00_4069); } 
return 
BINT(BgL_auxz00_5892);} } 
}



/* quotientelong */
BGL_EXPORTED_DEF long BGl_quotientelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_136, long BgL_n2z00_137)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1140 */
return 
(BgL_n1z00_136/BgL_n2z00_137);} 
}



/* _quotientelong */
obj_t BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3125, obj_t BgL_n1z00_3126, obj_t BgL_n2z00_3127)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1140 */
{ /* Ieee/fixnum.scm 1141 */
long BgL_auxz00_5912;
{ /* Ieee/fixnum.scm 1141 */
long BgL_n1z00_4070;long BgL_n2z00_4071;
{ /* Ieee/fixnum.scm 1141 */
obj_t BgL_auxz00_5913;
if(
ELONGP(BgL_n1z00_3126))
{ /* Ieee/fixnum.scm 1141 */
BgL_auxz00_5913 = BgL_n1z00_3126
; }  else 
{ 
obj_t BgL_auxz00_5916;
BgL_auxz00_5916 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)51762)), BGl_string2808z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3126); 
FAILURE(BgL_auxz00_5916,BFALSE,BFALSE);} 
BgL_n1z00_4070 = 
BELONG_TO_LONG(BgL_auxz00_5913); } 
{ /* Ieee/fixnum.scm 1141 */
obj_t BgL_auxz00_5921;
if(
ELONGP(BgL_n2z00_3127))
{ /* Ieee/fixnum.scm 1141 */
BgL_auxz00_5921 = BgL_n2z00_3127
; }  else 
{ 
obj_t BgL_auxz00_5924;
BgL_auxz00_5924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)51762)), BGl_string2808z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3127); 
FAILURE(BgL_auxz00_5924,BFALSE,BFALSE);} 
BgL_n2z00_4071 = 
BELONG_TO_LONG(BgL_auxz00_5921); } 
BgL_auxz00_5912 = 
(BgL_n1z00_4070/BgL_n2z00_4071); } 
return 
make_belong(BgL_auxz00_5912);} } 
}



/* quotientllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_quotientllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_138, BGL_LONGLONG_T BgL_n2z00_139)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1146 */
return 
(BgL_n1z00_138/BgL_n2z00_139);} 
}



/* _quotientllong */
obj_t BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3128, obj_t BgL_n1z00_3129, obj_t BgL_n2z00_3130)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1146 */
{ /* Ieee/fixnum.scm 1147 */
BGL_LONGLONG_T BgL_auxz00_5932;
{ /* Ieee/fixnum.scm 1147 */
BGL_LONGLONG_T BgL_n1z00_4072;BGL_LONGLONG_T BgL_n2z00_4073;
{ /* Ieee/fixnum.scm 1147 */
obj_t BgL_auxz00_5933;
if(
LLONGP(BgL_n1z00_3129))
{ /* Ieee/fixnum.scm 1147 */
BgL_auxz00_5933 = BgL_n1z00_3129
; }  else 
{ 
obj_t BgL_auxz00_5936;
BgL_auxz00_5936 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52050)), BGl_string2809z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3129); 
FAILURE(BgL_auxz00_5936,BFALSE,BFALSE);} 
BgL_n1z00_4072 = 
BLLONG_TO_LLONG(BgL_auxz00_5933); } 
{ /* Ieee/fixnum.scm 1147 */
obj_t BgL_auxz00_5941;
if(
LLONGP(BgL_n2z00_3130))
{ /* Ieee/fixnum.scm 1147 */
BgL_auxz00_5941 = BgL_n2z00_3130
; }  else 
{ 
obj_t BgL_auxz00_5944;
BgL_auxz00_5944 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52050)), BGl_string2809z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3130); 
FAILURE(BgL_auxz00_5944,BFALSE,BFALSE);} 
BgL_n2z00_4073 = 
BLLONG_TO_LLONG(BgL_auxz00_5941); } 
BgL_auxz00_5932 = 
(BgL_n1z00_4072/BgL_n2z00_4073); } 
return 
make_bllong(BgL_auxz00_5932);} } 
}



/* quotientbx */
BGL_EXPORTED_DEF obj_t BGl_quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_140, obj_t BgL_n2z00_141)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1152 */
return 
bgl_bignum_quotient(BgL_n1z00_140, BgL_n2z00_141);} 
}



/* _quotientbx */
obj_t BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3131, obj_t BgL_n1z00_3132, obj_t BgL_n2z00_3133)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1152 */
{ /* Ieee/fixnum.scm 1153 */
obj_t BgL_n1z00_4074;obj_t BgL_n2z00_4075;
if(
BIGNUMP(BgL_n1z00_3132))
{ /* Ieee/fixnum.scm 1153 */
BgL_n1z00_4074 = BgL_n1z00_3132; }  else 
{ 
obj_t BgL_auxz00_5954;
BgL_auxz00_5954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52335)), BGl_string2810z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3132); 
FAILURE(BgL_auxz00_5954,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_3133))
{ /* Ieee/fixnum.scm 1153 */
BgL_n2z00_4075 = BgL_n2z00_3133; }  else 
{ 
obj_t BgL_auxz00_5960;
BgL_auxz00_5960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52335)), BGl_string2810z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3133); 
FAILURE(BgL_auxz00_5960,BFALSE,BFALSE);} 
return 
bgl_bignum_quotient(BgL_n1z00_4074, BgL_n2z00_4075);} } 
}



/* remainder */
BGL_EXPORTED_DEF obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_142, obj_t BgL_n2z00_143)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1158 */
if(
INTEGERP(BgL_n1z00_142))
{ /* Ieee/fixnum.scm 1159 */
if(
INTEGERP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
long BgL_n1z00_1648;long BgL_n2z00_1649;
BgL_n1z00_1648 = 
(long)CINT(BgL_n1z00_142); 
BgL_n2z00_1649 = 
(long)CINT(BgL_n2z00_143); 
return 
BINT(
(BgL_n1z00_1648%BgL_n2z00_1649));}  else 
{ /* Ieee/fixnum.scm 1159 */
if(
ELONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
long BgL_arg1359z00_657;
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_5975;
BgL_auxz00_5975 = 
(long)CINT(BgL_n1z00_142); 
BgL_arg1359z00_657 = 
LONG_TO_ELONG(BgL_auxz00_5975); } 
{ /* Ieee/fixnum.scm 1159 */
long BgL_n2z00_1653;
BgL_n2z00_1653 = 
BELONG_TO_LONG(BgL_n2z00_143); 
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_5979;
BgL_auxz00_5979 = 
(BgL_arg1359z00_657%BgL_n2z00_1653); 
return 
make_belong(BgL_auxz00_5979);} } }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
LLONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_arg1367z00_659;
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_5984;
BgL_auxz00_5984 = 
(long)CINT(BgL_n1z00_142); 
BgL_arg1367z00_659 = 
LONG_TO_LLONG(BgL_auxz00_5984); } 
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_n2z00_1657;
BgL_n2z00_1657 = 
BLLONG_TO_LLONG(BgL_n2z00_143); 
return 
make_bllong(
(BgL_arg1367z00_659%BgL_n2z00_1657));} }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
BIGNUMP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
return 
bgl_bignum_remainder(
bgl_long_to_bignum(
(long)CINT(BgL_n1z00_142)), BgL_n2z00_143);}  else 
{ /* Ieee/fixnum.scm 1159 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_143);} } } } }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
ELONGP(BgL_n1z00_142))
{ /* Ieee/fixnum.scm 1159 */
if(
INTEGERP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
long BgL_arg1373z00_664;
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_6000;
BgL_auxz00_6000 = 
(long)CINT(BgL_n2z00_143); 
BgL_arg1373z00_664 = 
LONG_TO_ELONG(BgL_auxz00_6000); } 
{ /* Ieee/fixnum.scm 1159 */
long BgL_n1z00_1665;
BgL_n1z00_1665 = 
BELONG_TO_LONG(BgL_n1z00_142); 
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_6004;
BgL_auxz00_6004 = 
(BgL_n1z00_1665%BgL_arg1373z00_664); 
return 
make_belong(BgL_auxz00_6004);} } }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
ELONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
long BgL_n1z00_1668;long BgL_n2z00_1669;
BgL_n1z00_1668 = 
BELONG_TO_LONG(BgL_n1z00_142); 
BgL_n2z00_1669 = 
BELONG_TO_LONG(BgL_n2z00_143); 
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_6011;
BgL_auxz00_6011 = 
(BgL_n1z00_1668%BgL_n2z00_1669); 
return 
make_belong(BgL_auxz00_6011);} }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
LLONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_arg1376z00_667;
BgL_arg1376z00_667 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n1z00_142)); 
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_n2z00_1672;
BgL_n2z00_1672 = 
BLLONG_TO_LLONG(BgL_n2z00_143); 
return 
make_bllong(
(BgL_arg1376z00_667%BgL_n2z00_1672));} }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
BIGNUMP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
obj_t BgL_auxz00_6023;
{ /* Ieee/fixnum.scm 1159 */
long BgL_xz00_1674;
BgL_xz00_1674 = 
BELONG_TO_LONG(BgL_n1z00_142); 
BgL_auxz00_6023 = 
bgl_long_to_bignum(BgL_xz00_1674); } 
return 
bgl_bignum_remainder(BgL_auxz00_6023, BgL_n2z00_143);}  else 
{ /* Ieee/fixnum.scm 1159 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_143);} } } } }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
LLONGP(BgL_n1z00_142))
{ /* Ieee/fixnum.scm 1159 */
if(
INTEGERP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_arg1381z00_672;
{ /* Ieee/fixnum.scm 1159 */
long BgL_auxz00_6032;
BgL_auxz00_6032 = 
(long)CINT(BgL_n2z00_143); 
BgL_arg1381z00_672 = 
LONG_TO_LLONG(BgL_auxz00_6032); } 
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_n1z00_1680;
BgL_n1z00_1680 = 
BLLONG_TO_LLONG(BgL_n1z00_142); 
return 
make_bllong(
(BgL_n1z00_1680%BgL_arg1381z00_672));} }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
ELONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_arg1383z00_674;
BgL_arg1383z00_674 = 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n2z00_143)); 
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_n1z00_1683;
BgL_n1z00_1683 = 
BLLONG_TO_LLONG(BgL_n1z00_142); 
return 
make_bllong(
(BgL_n1z00_1683%BgL_arg1383z00_674));} }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
LLONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
BGL_LONGLONG_T BgL_n1z00_1686;BGL_LONGLONG_T BgL_n2z00_1687;
BgL_n1z00_1686 = 
BLLONG_TO_LLONG(BgL_n1z00_142); 
BgL_n2z00_1687 = 
BLLONG_TO_LLONG(BgL_n2z00_143); 
return 
make_bllong(
(BgL_n1z00_1686%BgL_n2z00_1687));}  else 
{ /* Ieee/fixnum.scm 1159 */
if(
BIGNUMP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
return 
bgl_bignum_remainder(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n1z00_142)), BgL_n2z00_143);}  else 
{ /* Ieee/fixnum.scm 1159 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_143);} } } } }  else 
{ /* Ieee/fixnum.scm 1159 */
if(
BIGNUMP(BgL_n1z00_142))
{ /* Ieee/fixnum.scm 1159 */
if(
INTEGERP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
return 
bgl_bignum_remainder(BgL_n1z00_142, 
bgl_long_to_bignum(
(long)CINT(BgL_n2z00_143)));}  else 
{ /* Ieee/fixnum.scm 1159 */
if(
ELONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
obj_t BgL_auxz00_6066;
{ /* Ieee/fixnum.scm 1159 */
long BgL_xz00_1698;
BgL_xz00_1698 = 
BELONG_TO_LONG(BgL_n2z00_143); 
BgL_auxz00_6066 = 
bgl_long_to_bignum(BgL_xz00_1698); } 
return 
bgl_bignum_remainder(BgL_n1z00_142, BgL_auxz00_6066);}  else 
{ /* Ieee/fixnum.scm 1159 */
if(
LLONGP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
return 
bgl_bignum_remainder(BgL_n1z00_142, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n2z00_143)));}  else 
{ /* Ieee/fixnum.scm 1159 */
if(
BIGNUMP(BgL_n2z00_143))
{ /* Ieee/fixnum.scm 1159 */
return 
bgl_bignum_remainder(BgL_n1z00_142, BgL_n2z00_143);}  else 
{ /* Ieee/fixnum.scm 1159 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_143);} } } } }  else 
{ /* Ieee/fixnum.scm 1159 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2811z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_142);} } } } } 
}



/* _remainder */
obj_t BGl__remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3134, obj_t BgL_n1z00_3135, obj_t BgL_n2z00_3136)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1158 */
return 
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3135, BgL_n2z00_3136);} 
}



/* remainderfx */
BGL_EXPORTED_DEF long BGl_remainderfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_144, long BgL_n2z00_145)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1164 */
return 
(BgL_n1z00_144%BgL_n2z00_145);} 
}



/* _remainderfx */
obj_t BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3137, obj_t BgL_n1z00_3138, obj_t BgL_n2z00_3139)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1164 */
{ /* Ieee/fixnum.scm 1165 */
long BgL_auxz00_6082;
{ /* Ieee/fixnum.scm 1165 */
long BgL_n1z00_4076;long BgL_n2z00_4077;
{ /* Ieee/fixnum.scm 1165 */
obj_t BgL_auxz00_6083;
if(
INTEGERP(BgL_n1z00_3138))
{ /* Ieee/fixnum.scm 1165 */
BgL_auxz00_6083 = BgL_n1z00_3138
; }  else 
{ 
obj_t BgL_auxz00_6086;
BgL_auxz00_6086 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52894)), BGl_string2813z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3138); 
FAILURE(BgL_auxz00_6086,BFALSE,BFALSE);} 
BgL_n1z00_4076 = 
(long)CINT(BgL_auxz00_6083); } 
{ /* Ieee/fixnum.scm 1165 */
obj_t BgL_auxz00_6091;
if(
INTEGERP(BgL_n2z00_3139))
{ /* Ieee/fixnum.scm 1165 */
BgL_auxz00_6091 = BgL_n2z00_3139
; }  else 
{ 
obj_t BgL_auxz00_6094;
BgL_auxz00_6094 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)52894)), BGl_string2813z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3139); 
FAILURE(BgL_auxz00_6094,BFALSE,BFALSE);} 
BgL_n2z00_4077 = 
(long)CINT(BgL_auxz00_6091); } 
BgL_auxz00_6082 = 
(BgL_n1z00_4076%BgL_n2z00_4077); } 
return 
BINT(BgL_auxz00_6082);} } 
}



/* remainderelong */
BGL_EXPORTED_DEF long BGl_remainderelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_n1z00_146, long BgL_n2z00_147)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1170 */
return 
(BgL_n1z00_146%BgL_n2z00_147);} 
}



/* _remainderelong */
obj_t BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3140, obj_t BgL_n1z00_3141, obj_t BgL_n2z00_3142)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1170 */
{ /* Ieee/fixnum.scm 1171 */
long BgL_auxz00_6102;
{ /* Ieee/fixnum.scm 1171 */
long BgL_n1z00_4078;long BgL_n2z00_4079;
{ /* Ieee/fixnum.scm 1171 */
obj_t BgL_auxz00_6103;
if(
ELONGP(BgL_n1z00_3141))
{ /* Ieee/fixnum.scm 1171 */
BgL_auxz00_6103 = BgL_n1z00_3141
; }  else 
{ 
obj_t BgL_auxz00_6106;
BgL_auxz00_6106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53181)), BGl_string2814z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3141); 
FAILURE(BgL_auxz00_6106,BFALSE,BFALSE);} 
BgL_n1z00_4078 = 
BELONG_TO_LONG(BgL_auxz00_6103); } 
{ /* Ieee/fixnum.scm 1171 */
obj_t BgL_auxz00_6111;
if(
ELONGP(BgL_n2z00_3142))
{ /* Ieee/fixnum.scm 1171 */
BgL_auxz00_6111 = BgL_n2z00_3142
; }  else 
{ 
obj_t BgL_auxz00_6114;
BgL_auxz00_6114 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53181)), BGl_string2814z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3142); 
FAILURE(BgL_auxz00_6114,BFALSE,BFALSE);} 
BgL_n2z00_4079 = 
BELONG_TO_LONG(BgL_auxz00_6111); } 
BgL_auxz00_6102 = 
(BgL_n1z00_4078%BgL_n2z00_4079); } 
return 
make_belong(BgL_auxz00_6102);} } 
}



/* remainderllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_remainderllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_148, BGL_LONGLONG_T BgL_n2z00_149)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1176 */
return 
(BgL_n1z00_148%BgL_n2z00_149);} 
}



/* _remainderllong */
obj_t BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3143, obj_t BgL_n1z00_3144, obj_t BgL_n2z00_3145)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1176 */
{ /* Ieee/fixnum.scm 1177 */
BGL_LONGLONG_T BgL_auxz00_6122;
{ /* Ieee/fixnum.scm 1177 */
BGL_LONGLONG_T BgL_n1z00_4080;BGL_LONGLONG_T BgL_n2z00_4081;
{ /* Ieee/fixnum.scm 1177 */
obj_t BgL_auxz00_6123;
if(
LLONGP(BgL_n1z00_3144))
{ /* Ieee/fixnum.scm 1177 */
BgL_auxz00_6123 = BgL_n1z00_3144
; }  else 
{ 
obj_t BgL_auxz00_6126;
BgL_auxz00_6126 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53471)), BGl_string2815z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3144); 
FAILURE(BgL_auxz00_6126,BFALSE,BFALSE);} 
BgL_n1z00_4080 = 
BLLONG_TO_LLONG(BgL_auxz00_6123); } 
{ /* Ieee/fixnum.scm 1177 */
obj_t BgL_auxz00_6131;
if(
LLONGP(BgL_n2z00_3145))
{ /* Ieee/fixnum.scm 1177 */
BgL_auxz00_6131 = BgL_n2z00_3145
; }  else 
{ 
obj_t BgL_auxz00_6134;
BgL_auxz00_6134 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53471)), BGl_string2815z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3145); 
FAILURE(BgL_auxz00_6134,BFALSE,BFALSE);} 
BgL_n2z00_4081 = 
BLLONG_TO_LLONG(BgL_auxz00_6131); } 
BgL_auxz00_6122 = 
(BgL_n1z00_4080%BgL_n2z00_4081); } 
return 
make_bllong(BgL_auxz00_6122);} } 
}



/* remainderbx */
BGL_EXPORTED_DEF obj_t BGl_remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_150, obj_t BgL_n2z00_151)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1182 */
return 
bgl_bignum_remainder(BgL_n1z00_150, BgL_n2z00_151);} 
}



/* _remainderbx */
obj_t BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3146, obj_t BgL_n1z00_3147, obj_t BgL_n2z00_3148)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1182 */
{ /* Ieee/fixnum.scm 1183 */
obj_t BgL_n1z00_4082;obj_t BgL_n2z00_4083;
if(
BIGNUMP(BgL_n1z00_3147))
{ /* Ieee/fixnum.scm 1183 */
BgL_n1z00_4082 = BgL_n1z00_3147; }  else 
{ 
obj_t BgL_auxz00_6144;
BgL_auxz00_6144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53758)), BGl_string2816z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3147); 
FAILURE(BgL_auxz00_6144,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_n2z00_3148))
{ /* Ieee/fixnum.scm 1183 */
BgL_n2z00_4083 = BgL_n2z00_3148; }  else 
{ 
obj_t BgL_auxz00_6150;
BgL_auxz00_6150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)53758)), BGl_string2816z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3148); 
FAILURE(BgL_auxz00_6150,BFALSE,BFALSE);} 
return 
bgl_bignum_remainder(BgL_n1z00_4082, BgL_n2z00_4083);} } 
}



/* modulo */
BGL_EXPORTED_DEF obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_n1z00_152, obj_t BgL_n2z00_153)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1188 */
if(
INTEGERP(BgL_n1z00_152))
{ /* Ieee/fixnum.scm 1189 */
if(
INTEGERP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BINT(
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)CINT(BgL_n1z00_152), 
(long)CINT(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
ELONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
long BgL_arg1398z00_689;
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6165;
BgL_auxz00_6165 = 
(long)CINT(BgL_n1z00_152); 
BgL_arg1398z00_689 = 
LONG_TO_ELONG(BgL_auxz00_6165); } 
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6168;
BgL_auxz00_6168 = 
BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(BgL_arg1398z00_689, 
BELONG_TO_LONG(BgL_n2z00_153)); 
return 
make_belong(BgL_auxz00_6168);} }  else 
{ /* Ieee/fixnum.scm 1189 */
if(
LLONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
BGL_LONGLONG_T BgL_arg1400z00_691;
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6174;
BgL_auxz00_6174 = 
(long)CINT(BgL_n1z00_152); 
BgL_arg1400z00_691 = 
LONG_TO_LLONG(BgL_auxz00_6174); } 
return 
make_bllong(
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BgL_arg1400z00_691, 
BLLONG_TO_LLONG(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
BIGNUMP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(
bgl_long_to_bignum(
(long)CINT(BgL_n1z00_152)), BgL_n2z00_153);}  else 
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_153);} } } } }  else 
{ /* Ieee/fixnum.scm 1189 */
if(
ELONGP(BgL_n1z00_152))
{ /* Ieee/fixnum.scm 1189 */
if(
INTEGERP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
long BgL_arg1405z00_696;
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6190;
BgL_auxz00_6190 = 
(long)CINT(BgL_n2z00_153); 
BgL_arg1405z00_696 = 
LONG_TO_ELONG(BgL_auxz00_6190); } 
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6193;
BgL_auxz00_6193 = 
BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(
BELONG_TO_LONG(BgL_n1z00_152), BgL_arg1405z00_696); 
return 
make_belong(BgL_auxz00_6193);} }  else 
{ /* Ieee/fixnum.scm 1189 */
if(
ELONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6199;
BgL_auxz00_6199 = 
BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(
BELONG_TO_LONG(BgL_n1z00_152), 
BELONG_TO_LONG(BgL_n2z00_153)); 
return 
make_belong(BgL_auxz00_6199);}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
LLONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
make_bllong(
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n1z00_152)), 
BLLONG_TO_LLONG(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
BIGNUMP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
obj_t BgL_auxz00_6213;
{ /* Ieee/fixnum.scm 1189 */
long BgL_xz00_1722;
BgL_xz00_1722 = 
BELONG_TO_LONG(BgL_n1z00_152); 
BgL_auxz00_6213 = 
bgl_long_to_bignum(BgL_xz00_1722); } 
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6213, BgL_n2z00_153);}  else 
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_153);} } } } }  else 
{ /* Ieee/fixnum.scm 1189 */
if(
LLONGP(BgL_n1z00_152))
{ /* Ieee/fixnum.scm 1189 */
if(
INTEGERP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
BGL_LONGLONG_T BgL_arg1413z00_704;
{ /* Ieee/fixnum.scm 1189 */
long BgL_auxz00_6222;
BgL_auxz00_6222 = 
(long)CINT(BgL_n2z00_153); 
BgL_arg1413z00_704 = 
LONG_TO_LLONG(BgL_auxz00_6222); } 
return 
make_bllong(
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(
BLLONG_TO_LLONG(BgL_n1z00_152), BgL_arg1413z00_704));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
ELONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
make_bllong(
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(
BLLONG_TO_LLONG(BgL_n1z00_152), 
(BGL_LONGLONG_T)(
BELONG_TO_LONG(BgL_n2z00_153))));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
LLONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
make_bllong(
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(
BLLONG_TO_LLONG(BgL_n1z00_152), 
BLLONG_TO_LLONG(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
BIGNUMP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n1z00_152)), BgL_n2z00_153);}  else 
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_153);} } } } }  else 
{ /* Ieee/fixnum.scm 1189 */
if(
BIGNUMP(BgL_n1z00_152))
{ /* Ieee/fixnum.scm 1189 */
if(
INTEGERP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_152, 
bgl_long_to_bignum(
(long)CINT(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
ELONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
obj_t BgL_auxz00_6256;
{ /* Ieee/fixnum.scm 1189 */
long BgL_xz00_1734;
BgL_xz00_1734 = 
BELONG_TO_LONG(BgL_n2z00_153); 
BgL_auxz00_6256 = 
bgl_long_to_bignum(BgL_xz00_1734); } 
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_152, BgL_auxz00_6256);}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
LLONGP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_152, 
bgl_llong_to_bignum(
BLLONG_TO_LLONG(BgL_n2z00_153)));}  else 
{ /* Ieee/fixnum.scm 1189 */
if(
BIGNUMP(BgL_n2z00_153))
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_152, BgL_n2z00_153);}  else 
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_153);} } } } }  else 
{ /* Ieee/fixnum.scm 1189 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2817z00zz__r4_numbers_6_5_fixnumz00, BGl_string2806z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_152);} } } } } 
}



/* _modulo */
obj_t BGl__moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3149, obj_t BgL_n1z00_3150, obj_t BgL_n2z00_3151)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1188 */
return 
BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3150, BgL_n2z00_3151);} 
}



/* modulofx */
BGL_EXPORTED_DEF long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_154, long BgL_yz00_155)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1194 */
{ /* Ieee/fixnum.scm 1195 */
long BgL_rz00_718;
BgL_rz00_718 = 
(BgL_xz00_154%BgL_yz00_155); 
if(
(BgL_rz00_718==((long)0)))
{ /* Ieee/fixnum.scm 1196 */
return BgL_rz00_718;}  else 
{ /* Ieee/fixnum.scm 1196 */
if(
(BgL_yz00_155>((long)0)))
{ /* Ieee/fixnum.scm 1198 */
if(
(BgL_rz00_718>((long)0)))
{ /* Ieee/fixnum.scm 1199 */
return BgL_rz00_718;}  else 
{ /* Ieee/fixnum.scm 1199 */
return 
(BgL_yz00_155+BgL_rz00_718);} }  else 
{ /* Ieee/fixnum.scm 1198 */
if(
(BgL_rz00_718<((long)0)))
{ /* Ieee/fixnum.scm 1200 */
return BgL_rz00_718;}  else 
{ /* Ieee/fixnum.scm 1200 */
return 
(BgL_yz00_155+BgL_rz00_718);} } } } } 
}



/* _modulofx */
obj_t BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3152, obj_t BgL_xz00_3153, obj_t BgL_yz00_3154)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1194 */
{ /* Ieee/fixnum.scm 1195 */
long BgL_auxz00_6282;
{ /* Ieee/fixnum.scm 1195 */
long BgL_auxz00_6292;long BgL_auxz00_6283;
{ /* Ieee/fixnum.scm 1195 */
obj_t BgL_auxz00_6293;
if(
INTEGERP(BgL_yz00_3154))
{ /* Ieee/fixnum.scm 1195 */
BgL_auxz00_6293 = BgL_yz00_3154
; }  else 
{ 
obj_t BgL_auxz00_6296;
BgL_auxz00_6296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)54299)), BGl_string2819z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3154); 
FAILURE(BgL_auxz00_6296,BFALSE,BFALSE);} 
BgL_auxz00_6292 = 
(long)CINT(BgL_auxz00_6293); } 
{ /* Ieee/fixnum.scm 1195 */
obj_t BgL_auxz00_6284;
if(
INTEGERP(BgL_xz00_3153))
{ /* Ieee/fixnum.scm 1195 */
BgL_auxz00_6284 = BgL_xz00_3153
; }  else 
{ 
obj_t BgL_auxz00_6287;
BgL_auxz00_6287 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)54299)), BGl_string2819z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3153); 
FAILURE(BgL_auxz00_6287,BFALSE,BFALSE);} 
BgL_auxz00_6283 = 
(long)CINT(BgL_auxz00_6284); } 
BgL_auxz00_6282 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6283, BgL_auxz00_6292); } 
return 
BINT(BgL_auxz00_6282);} } 
}



/* moduloelong */
BGL_EXPORTED_DEF long BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_156, long BgL_yz00_157)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1205 */
{ /* Ieee/fixnum.scm 1206 */
long BgL_rz00_723;
BgL_rz00_723 = 
(BgL_xz00_156%BgL_yz00_157); 
if(
(BgL_rz00_723==((long)0)))
{ /* Ieee/fixnum.scm 1207 */
return BgL_rz00_723;}  else 
{ /* Ieee/fixnum.scm 1207 */
if(
(BgL_yz00_157>((long)0)))
{ /* Ieee/fixnum.scm 1209 */
if(
(BgL_rz00_723>((long)0)))
{ /* Ieee/fixnum.scm 1210 */
return BgL_rz00_723;}  else 
{ /* Ieee/fixnum.scm 1210 */
return 
(BgL_yz00_157+BgL_rz00_723);} }  else 
{ /* Ieee/fixnum.scm 1209 */
if(
(BgL_rz00_723<((long)0)))
{ /* Ieee/fixnum.scm 1211 */
return BgL_rz00_723;}  else 
{ /* Ieee/fixnum.scm 1211 */
return 
(BgL_yz00_157+BgL_rz00_723);} } } } } 
}



/* _moduloelong */
obj_t BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3155, obj_t BgL_xz00_3156, obj_t BgL_yz00_3157)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1205 */
{ /* Ieee/fixnum.scm 1206 */
long BgL_auxz00_6314;
{ /* Ieee/fixnum.scm 1206 */
long BgL_auxz00_6324;long BgL_auxz00_6315;
{ /* Ieee/fixnum.scm 1206 */
obj_t BgL_auxz00_6325;
if(
ELONGP(BgL_yz00_3157))
{ /* Ieee/fixnum.scm 1206 */
BgL_auxz00_6325 = BgL_yz00_3157
; }  else 
{ 
obj_t BgL_auxz00_6328;
BgL_auxz00_6328 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)54703)), BGl_string2820z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3157); 
FAILURE(BgL_auxz00_6328,BFALSE,BFALSE);} 
BgL_auxz00_6324 = 
BELONG_TO_LONG(BgL_auxz00_6325); } 
{ /* Ieee/fixnum.scm 1206 */
obj_t BgL_auxz00_6316;
if(
ELONGP(BgL_xz00_3156))
{ /* Ieee/fixnum.scm 1206 */
BgL_auxz00_6316 = BgL_xz00_3156
; }  else 
{ 
obj_t BgL_auxz00_6319;
BgL_auxz00_6319 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)54703)), BGl_string2820z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3156); 
FAILURE(BgL_auxz00_6319,BFALSE,BFALSE);} 
BgL_auxz00_6315 = 
BELONG_TO_LONG(BgL_auxz00_6316); } 
BgL_auxz00_6314 = 
BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6315, BgL_auxz00_6324); } 
return 
make_belong(BgL_auxz00_6314);} } 
}



/* modulollong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_158, BGL_LONGLONG_T BgL_yz00_159)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1216 */
{ /* Ieee/fixnum.scm 1217 */
BGL_LONGLONG_T BgL_rz00_728;
BgL_rz00_728 = 
(BgL_xz00_158%BgL_yz00_159); 
if(
(BgL_rz00_728==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1218 */
return BgL_rz00_728;}  else 
{ /* Ieee/fixnum.scm 1218 */
if(
(BgL_yz00_159>((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1220 */
if(
(BgL_rz00_728>((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1221 */
return BgL_rz00_728;}  else 
{ /* Ieee/fixnum.scm 1221 */
return 
(BgL_yz00_159+BgL_rz00_728);} }  else 
{ /* Ieee/fixnum.scm 1220 */
if(
(BgL_rz00_728<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1222 */
return BgL_rz00_728;}  else 
{ /* Ieee/fixnum.scm 1222 */
return 
(BgL_yz00_159+BgL_rz00_728);} } } } } 
}



/* _modulollong */
obj_t BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3158, obj_t BgL_xz00_3159, obj_t BgL_yz00_3160)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1216 */
{ /* Ieee/fixnum.scm 1217 */
BGL_LONGLONG_T BgL_auxz00_6346;
{ /* Ieee/fixnum.scm 1217 */
BGL_LONGLONG_T BgL_auxz00_6356;BGL_LONGLONG_T BgL_auxz00_6347;
{ /* Ieee/fixnum.scm 1217 */
obj_t BgL_auxz00_6357;
if(
LLONGP(BgL_yz00_3160))
{ /* Ieee/fixnum.scm 1217 */
BgL_auxz00_6357 = BgL_yz00_3160
; }  else 
{ 
obj_t BgL_auxz00_6360;
BgL_auxz00_6360 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)55128)), BGl_string2821z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3160); 
FAILURE(BgL_auxz00_6360,BFALSE,BFALSE);} 
BgL_auxz00_6356 = 
BLLONG_TO_LLONG(BgL_auxz00_6357); } 
{ /* Ieee/fixnum.scm 1217 */
obj_t BgL_auxz00_6348;
if(
LLONGP(BgL_xz00_3159))
{ /* Ieee/fixnum.scm 1217 */
BgL_auxz00_6348 = BgL_xz00_3159
; }  else 
{ 
obj_t BgL_auxz00_6351;
BgL_auxz00_6351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)55128)), BGl_string2821z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3159); 
FAILURE(BgL_auxz00_6351,BFALSE,BFALSE);} 
BgL_auxz00_6347 = 
BLLONG_TO_LLONG(BgL_auxz00_6348); } 
BgL_auxz00_6346 = 
BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6347, BgL_auxz00_6356); } 
return 
make_bllong(BgL_auxz00_6346);} } 
}



/* modulobx */
BGL_EXPORTED_DEF obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_160, obj_t BgL_yz00_161)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1227 */
{ /* Ieee/fixnum.scm 1228 */
obj_t BgL_rz00_733;
BgL_rz00_733 = 
bgl_bignum_remainder(BgL_xz00_160, BgL_yz00_161); 
if(
BXZERO(BgL_rz00_733))
{ /* Ieee/fixnum.scm 1229 */
return BgL_rz00_733;}  else 
{ /* Ieee/fixnum.scm 1229 */
if(
BXPOSITIVE(BgL_yz00_161))
{ /* Ieee/fixnum.scm 1231 */
if(
BXPOSITIVE(BgL_rz00_733))
{ /* Ieee/fixnum.scm 1232 */
return BgL_rz00_733;}  else 
{ /* Ieee/fixnum.scm 1232 */
return 
bgl_bignum_add(BgL_yz00_161, BgL_rz00_733);} }  else 
{ /* Ieee/fixnum.scm 1231 */
if(
BXNEGATIVE(BgL_rz00_733))
{ /* Ieee/fixnum.scm 1233 */
return BgL_rz00_733;}  else 
{ /* Ieee/fixnum.scm 1233 */
return 
bgl_bignum_add(BgL_yz00_161, BgL_rz00_733);} } } } } 
}



/* _modulobx */
obj_t BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3161, obj_t BgL_xz00_3162, obj_t BgL_yz00_3163)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1227 */
{ /* Ieee/fixnum.scm 1228 */
obj_t BgL_auxz00_6385;obj_t BgL_auxz00_6378;
if(
BIGNUMP(BgL_yz00_3163))
{ /* Ieee/fixnum.scm 1228 */
BgL_auxz00_6385 = BgL_yz00_3163
; }  else 
{ 
obj_t BgL_auxz00_6388;
BgL_auxz00_6388 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)55551)), BGl_string2822z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3163); 
FAILURE(BgL_auxz00_6388,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_xz00_3162))
{ /* Ieee/fixnum.scm 1228 */
BgL_auxz00_6378 = BgL_xz00_3162
; }  else 
{ 
obj_t BgL_auxz00_6381;
BgL_auxz00_6381 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)55551)), BGl_string2822z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3162); 
FAILURE(BgL_auxz00_6381,BFALSE,BFALSE);} 
return 
BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6378, BgL_auxz00_6385);} } 
}



/* gcdfx */
BGL_EXPORTED_DEF long BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_162)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1262 */
if(
NULLP(BgL_xz00_162))
{ /* Ieee/fixnum.scm 1263 */
return ((long)0);}  else 
{ /* Ieee/fixnum.scm 1263 */
bool_t BgL_testz00_6395;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_auxz00_6396;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1803;
if(
PAIRP(BgL_xz00_162))
{ /* Ieee/fixnum.scm 1263 */
BgL_pairz00_1803 = BgL_xz00_162; }  else 
{ 
obj_t BgL_auxz00_6399;
BgL_auxz00_6399 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_162); 
FAILURE(BgL_auxz00_6399,BFALSE,BFALSE);} 
BgL_auxz00_6396 = 
CDR(BgL_pairz00_1803); } 
BgL_testz00_6395 = 
NULLP(BgL_auxz00_6396); } 
if(BgL_testz00_6395)
{ /* Ieee/fixnum.scm 1263 */
long BgL_nz00_1806;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1805;
if(
PAIRP(BgL_xz00_162))
{ /* Ieee/fixnum.scm 1263 */
BgL_pairz00_1805 = BgL_xz00_162; }  else 
{ 
obj_t BgL_auxz00_6407;
BgL_auxz00_6407 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_162); 
FAILURE(BgL_auxz00_6407,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_auxz00_6411;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2386z00_3622;
BgL_aux2386z00_3622 = 
CAR(BgL_pairz00_1805); 
if(
INTEGERP(BgL_aux2386z00_3622))
{ /* Ieee/fixnum.scm 1263 */
BgL_auxz00_6411 = BgL_aux2386z00_3622
; }  else 
{ 
obj_t BgL_auxz00_6415;
BgL_auxz00_6415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2386z00_3622); 
FAILURE(BgL_auxz00_6415,BFALSE,BFALSE);} } 
BgL_nz00_1806 = 
(long)CINT(BgL_auxz00_6411); } } 
if(
(BgL_nz00_1806<((long)0)))
{ /* Ieee/fixnum.scm 1263 */
return 
NEG(BgL_nz00_1806);}  else 
{ /* Ieee/fixnum.scm 1263 */
return BgL_nz00_1806;} }  else 
{ 
long BgL_mz00_758;long BgL_nz00_759;
{ /* Ieee/fixnum.scm 1263 */
long BgL_g1106z00_742;obj_t BgL_g1107z00_743;
{ /* Ieee/fixnum.scm 1263 */
long BgL_arg1452z00_754;long BgL_arg1453z00_755;
{ /* Ieee/fixnum.scm 1263 */
long BgL_nz00_1813;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1812;
if(
PAIRP(BgL_xz00_162))
{ /* Ieee/fixnum.scm 1263 */
BgL_pairz00_1812 = BgL_xz00_162; }  else 
{ 
obj_t BgL_auxz00_6425;
BgL_auxz00_6425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_162); 
FAILURE(BgL_auxz00_6425,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_auxz00_6429;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2390z00_3626;
BgL_aux2390z00_3626 = 
CAR(BgL_pairz00_1812); 
if(
INTEGERP(BgL_aux2390z00_3626))
{ /* Ieee/fixnum.scm 1263 */
BgL_auxz00_6429 = BgL_aux2390z00_3626
; }  else 
{ 
obj_t BgL_auxz00_6433;
BgL_auxz00_6433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2390z00_3626); 
FAILURE(BgL_auxz00_6433,BFALSE,BFALSE);} } 
BgL_nz00_1813 = 
(long)CINT(BgL_auxz00_6429); } } 
if(
(BgL_nz00_1813<((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_arg1452z00_754 = 
NEG(BgL_nz00_1813); }  else 
{ /* Ieee/fixnum.scm 1263 */
BgL_arg1452z00_754 = BgL_nz00_1813; } } 
{ /* Ieee/fixnum.scm 1263 */
long BgL_nz00_1823;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1819;
BgL_pairz00_1819 = BgL_xz00_162; 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1822;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2394z00_3630;
BgL_aux2394z00_3630 = 
CDR(BgL_pairz00_1819); 
if(
PAIRP(BgL_aux2394z00_3630))
{ /* Ieee/fixnum.scm 1263 */
BgL_pairz00_1822 = BgL_aux2394z00_3630; }  else 
{ 
obj_t BgL_auxz00_6444;
BgL_auxz00_6444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2394z00_3630); 
FAILURE(BgL_auxz00_6444,BFALSE,BFALSE);} } 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_auxz00_6448;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2396z00_3632;
BgL_aux2396z00_3632 = 
CAR(BgL_pairz00_1822); 
if(
INTEGERP(BgL_aux2396z00_3632))
{ /* Ieee/fixnum.scm 1263 */
BgL_auxz00_6448 = BgL_aux2396z00_3632
; }  else 
{ 
obj_t BgL_auxz00_6452;
BgL_auxz00_6452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2396z00_3632); 
FAILURE(BgL_auxz00_6452,BFALSE,BFALSE);} } 
BgL_nz00_1823 = 
(long)CINT(BgL_auxz00_6448); } } } 
if(
(BgL_nz00_1823<((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_arg1453z00_755 = 
NEG(BgL_nz00_1823); }  else 
{ /* Ieee/fixnum.scm 1263 */
BgL_arg1453z00_755 = BgL_nz00_1823; } } 
{ 
long BgL_mz00_1830;long BgL_nz00_1831;
BgL_mz00_1830 = BgL_arg1452z00_754; 
BgL_nz00_1831 = BgL_arg1453z00_755; 
BgL_gcd2z00_1829:
if(
(BgL_nz00_1831==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_g1106z00_742 = BgL_mz00_1830; }  else 
{ /* Ieee/fixnum.scm 1263 */
long BgL_rz00_1836;
BgL_rz00_1836 = 
(BgL_mz00_1830%BgL_nz00_1831); 
if(
(BgL_rz00_1836==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_g1106z00_742 = BgL_nz00_1831; }  else 
{ 
long BgL_nz00_6466;long BgL_mz00_6465;
BgL_mz00_6465 = BgL_nz00_1831; 
BgL_nz00_6466 = BgL_rz00_1836; 
BgL_nz00_1831 = BgL_nz00_6466; 
BgL_mz00_1830 = BgL_mz00_6465; 
goto BgL_gcd2z00_1829;} } } } 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1845;
BgL_pairz00_1845 = BgL_xz00_162; 
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_pairz00_1848;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2400z00_3636;
BgL_aux2400z00_3636 = 
CDR(BgL_pairz00_1845); 
if(
PAIRP(BgL_aux2400z00_3636))
{ /* Ieee/fixnum.scm 1263 */
BgL_pairz00_1848 = BgL_aux2400z00_3636; }  else 
{ 
obj_t BgL_auxz00_6470;
BgL_auxz00_6470 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2823z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2400z00_3636); 
FAILURE(BgL_auxz00_6470,BFALSE,BFALSE);} } 
BgL_g1107z00_743 = 
CDR(BgL_pairz00_1848); } } 
{ 
long BgL_resultz00_1850;obj_t BgL_leftz00_1851;
BgL_resultz00_1850 = BgL_g1106z00_742; 
BgL_leftz00_1851 = BgL_g1107z00_743; 
BgL_loopz00_1849:
if(
PAIRP(BgL_leftz00_1851))
{ 
obj_t BgL_leftz00_6502;long BgL_resultz00_6477;
BgL_mz00_758 = BgL_resultz00_1850; 
{ /* Ieee/fixnum.scm 1263 */
long BgL_nz00_1864;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_auxz00_6490;
{ /* Ieee/fixnum.scm 1263 */
obj_t BgL_aux2402z00_3638;
BgL_aux2402z00_3638 = 
CAR(BgL_leftz00_1851); 
if(
INTEGERP(BgL_aux2402z00_3638))
{ /* Ieee/fixnum.scm 1263 */
BgL_auxz00_6490 = BgL_aux2402z00_3638
; }  else 
{ 
obj_t BgL_auxz00_6494;
BgL_auxz00_6494 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)56830)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2402z00_3638); 
FAILURE(BgL_auxz00_6494,BFALSE,BFALSE);} } 
BgL_nz00_1864 = 
(long)CINT(BgL_auxz00_6490); } 
if(
(BgL_nz00_1864<((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_nz00_759 = 
NEG(BgL_nz00_1864); }  else 
{ /* Ieee/fixnum.scm 1263 */
BgL_nz00_759 = BgL_nz00_1864; } } 
BgL_zc3anonymousza31456ze3z83_760:
if(
(BgL_nz00_759==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_resultz00_6477 = BgL_mz00_758; }  else 
{ /* Ieee/fixnum.scm 1263 */
long BgL_rz00_1918;
BgL_rz00_1918 = 
(BgL_mz00_758%BgL_nz00_759); 
if(
(BgL_rz00_1918==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_resultz00_6477 = BgL_nz00_759; }  else 
{ /* Ieee/fixnum.scm 1263 */
if(
(BgL_rz00_1918==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_resultz00_6477 = BgL_nz00_759; }  else 
{ /* Ieee/fixnum.scm 1263 */
long BgL_rz00_1930;
BgL_rz00_1930 = 
(BgL_nz00_759%BgL_rz00_1918); 
if(
(BgL_rz00_1930==((long)0)))
{ /* Ieee/fixnum.scm 1263 */
BgL_resultz00_6477 = BgL_rz00_1918; }  else 
{ 
long BgL_nz00_6489;long BgL_mz00_6488;
BgL_mz00_6488 = BgL_rz00_1918; 
BgL_nz00_6489 = BgL_rz00_1930; 
BgL_nz00_759 = BgL_nz00_6489; 
BgL_mz00_758 = BgL_mz00_6488; 
goto BgL_zc3anonymousza31456ze3z83_760;} } } } 
BgL_leftz00_6502 = 
CDR(BgL_leftz00_1851); 
BgL_leftz00_1851 = BgL_leftz00_6502; 
BgL_resultz00_1850 = BgL_resultz00_6477; 
goto BgL_loopz00_1849;}  else 
{ /* Ieee/fixnum.scm 1263 */
return BgL_resultz00_1850;} } } } } } 
}



/* _gcdfx */
obj_t BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3164, obj_t BgL_xz00_3165)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1262 */
return 
BINT(
BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3165));} 
}



/* gcdelong */
BGL_EXPORTED_DEF long BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_163)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1268 */
if(
NULLP(BgL_xz00_163))
{ /* Ieee/fixnum.scm 1269 */
return ((long)0);}  else 
{ /* Ieee/fixnum.scm 1269 */
bool_t BgL_testz00_6508;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_auxz00_6509;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1940;
if(
PAIRP(BgL_xz00_163))
{ /* Ieee/fixnum.scm 1269 */
BgL_pairz00_1940 = BgL_xz00_163; }  else 
{ 
obj_t BgL_auxz00_6512;
BgL_auxz00_6512 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_163); 
FAILURE(BgL_auxz00_6512,BFALSE,BFALSE);} 
BgL_auxz00_6509 = 
CDR(BgL_pairz00_1940); } 
BgL_testz00_6508 = 
NULLP(BgL_auxz00_6509); } 
if(BgL_testz00_6508)
{ /* Ieee/fixnum.scm 1269 */
long BgL_nz00_1943;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1942;
if(
PAIRP(BgL_xz00_163))
{ /* Ieee/fixnum.scm 1269 */
BgL_pairz00_1942 = BgL_xz00_163; }  else 
{ 
obj_t BgL_auxz00_6520;
BgL_auxz00_6520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_163); 
FAILURE(BgL_auxz00_6520,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_auxz00_6524;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2408z00_3644;
BgL_aux2408z00_3644 = 
CAR(BgL_pairz00_1942); 
if(
ELONGP(BgL_aux2408z00_3644))
{ /* Ieee/fixnum.scm 1269 */
BgL_auxz00_6524 = BgL_aux2408z00_3644
; }  else 
{ 
obj_t BgL_auxz00_6528;
BgL_auxz00_6528 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2408z00_3644); 
FAILURE(BgL_auxz00_6528,BFALSE,BFALSE);} } 
BgL_nz00_1943 = 
BELONG_TO_LONG(BgL_auxz00_6524); } } 
if(
(BgL_nz00_1943<((long)0)))
{ /* Ieee/fixnum.scm 1269 */
return 
NEG(BgL_nz00_1943);}  else 
{ /* Ieee/fixnum.scm 1269 */
return BgL_nz00_1943;} }  else 
{ 
long BgL_mz00_786;long BgL_nz00_787;
{ /* Ieee/fixnum.scm 1269 */
long BgL_g1108z00_770;obj_t BgL_g1109z00_771;
{ /* Ieee/fixnum.scm 1269 */
long BgL_arg1469z00_782;long BgL_arg1470z00_783;
{ /* Ieee/fixnum.scm 1269 */
long BgL_nz00_1950;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1949;
if(
PAIRP(BgL_xz00_163))
{ /* Ieee/fixnum.scm 1269 */
BgL_pairz00_1949 = BgL_xz00_163; }  else 
{ 
obj_t BgL_auxz00_6538;
BgL_auxz00_6538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_163); 
FAILURE(BgL_auxz00_6538,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_auxz00_6542;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2412z00_3648;
BgL_aux2412z00_3648 = 
CAR(BgL_pairz00_1949); 
if(
ELONGP(BgL_aux2412z00_3648))
{ /* Ieee/fixnum.scm 1269 */
BgL_auxz00_6542 = BgL_aux2412z00_3648
; }  else 
{ 
obj_t BgL_auxz00_6546;
BgL_auxz00_6546 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2412z00_3648); 
FAILURE(BgL_auxz00_6546,BFALSE,BFALSE);} } 
BgL_nz00_1950 = 
BELONG_TO_LONG(BgL_auxz00_6542); } } 
if(
(BgL_nz00_1950<((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_arg1469z00_782 = 
NEG(BgL_nz00_1950); }  else 
{ /* Ieee/fixnum.scm 1269 */
BgL_arg1469z00_782 = BgL_nz00_1950; } } 
{ /* Ieee/fixnum.scm 1269 */
long BgL_nz00_1960;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1956;
BgL_pairz00_1956 = BgL_xz00_163; 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1959;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2416z00_3652;
BgL_aux2416z00_3652 = 
CDR(BgL_pairz00_1956); 
if(
PAIRP(BgL_aux2416z00_3652))
{ /* Ieee/fixnum.scm 1269 */
BgL_pairz00_1959 = BgL_aux2416z00_3652; }  else 
{ 
obj_t BgL_auxz00_6557;
BgL_auxz00_6557 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2416z00_3652); 
FAILURE(BgL_auxz00_6557,BFALSE,BFALSE);} } 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_auxz00_6561;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2418z00_3654;
BgL_aux2418z00_3654 = 
CAR(BgL_pairz00_1959); 
if(
ELONGP(BgL_aux2418z00_3654))
{ /* Ieee/fixnum.scm 1269 */
BgL_auxz00_6561 = BgL_aux2418z00_3654
; }  else 
{ 
obj_t BgL_auxz00_6565;
BgL_auxz00_6565 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2418z00_3654); 
FAILURE(BgL_auxz00_6565,BFALSE,BFALSE);} } 
BgL_nz00_1960 = 
BELONG_TO_LONG(BgL_auxz00_6561); } } } 
if(
(BgL_nz00_1960<((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_arg1470z00_783 = 
NEG(BgL_nz00_1960); }  else 
{ /* Ieee/fixnum.scm 1269 */
BgL_arg1470z00_783 = BgL_nz00_1960; } } 
{ 
long BgL_mz00_1967;long BgL_nz00_1968;
BgL_mz00_1967 = BgL_arg1469z00_782; 
BgL_nz00_1968 = BgL_arg1470z00_783; 
BgL_gcd2z00_1966:
if(
(BgL_nz00_1968==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_g1108z00_770 = BgL_mz00_1967; }  else 
{ /* Ieee/fixnum.scm 1269 */
long BgL_rz00_1973;
BgL_rz00_1973 = 
(BgL_mz00_1967%BgL_nz00_1968); 
if(
(BgL_rz00_1973==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_g1108z00_770 = BgL_nz00_1968; }  else 
{ 
long BgL_nz00_6579;long BgL_mz00_6578;
BgL_mz00_6578 = BgL_nz00_1968; 
BgL_nz00_6579 = BgL_rz00_1973; 
BgL_nz00_1968 = BgL_nz00_6579; 
BgL_mz00_1967 = BgL_mz00_6578; 
goto BgL_gcd2z00_1966;} } } } 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1982;
BgL_pairz00_1982 = BgL_xz00_163; 
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_pairz00_1985;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2422z00_3658;
BgL_aux2422z00_3658 = 
CDR(BgL_pairz00_1982); 
if(
PAIRP(BgL_aux2422z00_3658))
{ /* Ieee/fixnum.scm 1269 */
BgL_pairz00_1985 = BgL_aux2422z00_3658; }  else 
{ 
obj_t BgL_auxz00_6583;
BgL_auxz00_6583 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2824z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2422z00_3658); 
FAILURE(BgL_auxz00_6583,BFALSE,BFALSE);} } 
BgL_g1109z00_771 = 
CDR(BgL_pairz00_1985); } } 
{ 
long BgL_resultz00_1987;obj_t BgL_leftz00_1988;
BgL_resultz00_1987 = BgL_g1108z00_770; 
BgL_leftz00_1988 = BgL_g1109z00_771; 
BgL_loopz00_1986:
if(
PAIRP(BgL_leftz00_1988))
{ 
obj_t BgL_leftz00_6615;long BgL_resultz00_6590;
BgL_mz00_786 = BgL_resultz00_1987; 
{ /* Ieee/fixnum.scm 1269 */
long BgL_nz00_2001;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_auxz00_6603;
{ /* Ieee/fixnum.scm 1269 */
obj_t BgL_aux2424z00_3660;
BgL_aux2424z00_3660 = 
CAR(BgL_leftz00_1988); 
if(
ELONGP(BgL_aux2424z00_3660))
{ /* Ieee/fixnum.scm 1269 */
BgL_auxz00_6603 = BgL_aux2424z00_3660
; }  else 
{ 
obj_t BgL_auxz00_6607;
BgL_auxz00_6607 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57095)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2424z00_3660); 
FAILURE(BgL_auxz00_6607,BFALSE,BFALSE);} } 
BgL_nz00_2001 = 
BELONG_TO_LONG(BgL_auxz00_6603); } 
if(
(BgL_nz00_2001<((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_nz00_787 = 
NEG(BgL_nz00_2001); }  else 
{ /* Ieee/fixnum.scm 1269 */
BgL_nz00_787 = BgL_nz00_2001; } } 
BgL_zc3anonymousza31473ze3z83_788:
if(
(BgL_nz00_787==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_resultz00_6590 = BgL_mz00_786; }  else 
{ /* Ieee/fixnum.scm 1269 */
long BgL_rz00_2055;
BgL_rz00_2055 = 
(BgL_mz00_786%BgL_nz00_787); 
if(
(BgL_rz00_2055==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_resultz00_6590 = BgL_nz00_787; }  else 
{ /* Ieee/fixnum.scm 1269 */
if(
(BgL_rz00_2055==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_resultz00_6590 = BgL_nz00_787; }  else 
{ /* Ieee/fixnum.scm 1269 */
long BgL_rz00_2067;
BgL_rz00_2067 = 
(BgL_nz00_787%BgL_rz00_2055); 
if(
(BgL_rz00_2067==((long)0)))
{ /* Ieee/fixnum.scm 1269 */
BgL_resultz00_6590 = BgL_rz00_2055; }  else 
{ 
long BgL_nz00_6602;long BgL_mz00_6601;
BgL_mz00_6601 = BgL_rz00_2055; 
BgL_nz00_6602 = BgL_rz00_2067; 
BgL_nz00_787 = BgL_nz00_6602; 
BgL_mz00_786 = BgL_mz00_6601; 
goto BgL_zc3anonymousza31473ze3z83_788;} } } } 
BgL_leftz00_6615 = 
CDR(BgL_leftz00_1988); 
BgL_leftz00_1988 = BgL_leftz00_6615; 
BgL_resultz00_1987 = BgL_resultz00_6590; 
goto BgL_loopz00_1986;}  else 
{ /* Ieee/fixnum.scm 1269 */
return BgL_resultz00_1987;} } } } } } 
}



/* _gcdelong */
obj_t BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3166, obj_t BgL_xz00_3167)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1268 */
{ /* Ieee/fixnum.scm 1269 */
long BgL_auxz00_6617;
BgL_auxz00_6617 = 
BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3167); 
return 
make_belong(BgL_auxz00_6617);} } 
}



/* gcdllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_164)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1274 */
if(
NULLP(BgL_xz00_164))
{ /* Ieee/fixnum.scm 1275 */
return ((BGL_LONGLONG_T)0);}  else 
{ /* Ieee/fixnum.scm 1275 */
bool_t BgL_testz00_6622;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_auxz00_6623;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2077;
if(
PAIRP(BgL_xz00_164))
{ /* Ieee/fixnum.scm 1275 */
BgL_pairz00_2077 = BgL_xz00_164; }  else 
{ 
obj_t BgL_auxz00_6626;
BgL_auxz00_6626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_164); 
FAILURE(BgL_auxz00_6626,BFALSE,BFALSE);} 
BgL_auxz00_6623 = 
CDR(BgL_pairz00_2077); } 
BgL_testz00_6622 = 
NULLP(BgL_auxz00_6623); } 
if(BgL_testz00_6622)
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_nz00_2080;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2079;
if(
PAIRP(BgL_xz00_164))
{ /* Ieee/fixnum.scm 1275 */
BgL_pairz00_2079 = BgL_xz00_164; }  else 
{ 
obj_t BgL_auxz00_6634;
BgL_auxz00_6634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_164); 
FAILURE(BgL_auxz00_6634,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_auxz00_6638;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2430z00_3666;
BgL_aux2430z00_3666 = 
CAR(BgL_pairz00_2079); 
if(
LLONGP(BgL_aux2430z00_3666))
{ /* Ieee/fixnum.scm 1275 */
BgL_auxz00_6638 = BgL_aux2430z00_3666
; }  else 
{ 
obj_t BgL_auxz00_6642;
BgL_auxz00_6642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2430z00_3666); 
FAILURE(BgL_auxz00_6642,BFALSE,BFALSE);} } 
BgL_nz00_2080 = 
BLLONG_TO_LLONG(BgL_auxz00_6638); } } 
if(
(BgL_nz00_2080<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
return 
NEG(BgL_nz00_2080);}  else 
{ /* Ieee/fixnum.scm 1275 */
return BgL_nz00_2080;} }  else 
{ 
BGL_LONGLONG_T BgL_mz00_814;BGL_LONGLONG_T BgL_nz00_815;
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_g1110z00_798;obj_t BgL_g1111z00_799;
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_arg1486z00_810;BGL_LONGLONG_T BgL_arg1487z00_811;
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_nz00_2087;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2086;
if(
PAIRP(BgL_xz00_164))
{ /* Ieee/fixnum.scm 1275 */
BgL_pairz00_2086 = BgL_xz00_164; }  else 
{ 
obj_t BgL_auxz00_6652;
BgL_auxz00_6652 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_164); 
FAILURE(BgL_auxz00_6652,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_auxz00_6656;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2434z00_3670;
BgL_aux2434z00_3670 = 
CAR(BgL_pairz00_2086); 
if(
LLONGP(BgL_aux2434z00_3670))
{ /* Ieee/fixnum.scm 1275 */
BgL_auxz00_6656 = BgL_aux2434z00_3670
; }  else 
{ 
obj_t BgL_auxz00_6660;
BgL_auxz00_6660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2434z00_3670); 
FAILURE(BgL_auxz00_6660,BFALSE,BFALSE);} } 
BgL_nz00_2087 = 
BLLONG_TO_LLONG(BgL_auxz00_6656); } } 
if(
(BgL_nz00_2087<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_arg1486z00_810 = 
NEG(BgL_nz00_2087); }  else 
{ /* Ieee/fixnum.scm 1275 */
BgL_arg1486z00_810 = BgL_nz00_2087; } } 
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_nz00_2097;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2093;
BgL_pairz00_2093 = BgL_xz00_164; 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2096;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2438z00_3674;
BgL_aux2438z00_3674 = 
CDR(BgL_pairz00_2093); 
if(
PAIRP(BgL_aux2438z00_3674))
{ /* Ieee/fixnum.scm 1275 */
BgL_pairz00_2096 = BgL_aux2438z00_3674; }  else 
{ 
obj_t BgL_auxz00_6671;
BgL_auxz00_6671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2438z00_3674); 
FAILURE(BgL_auxz00_6671,BFALSE,BFALSE);} } 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_auxz00_6675;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2440z00_3676;
BgL_aux2440z00_3676 = 
CAR(BgL_pairz00_2096); 
if(
LLONGP(BgL_aux2440z00_3676))
{ /* Ieee/fixnum.scm 1275 */
BgL_auxz00_6675 = BgL_aux2440z00_3676
; }  else 
{ 
obj_t BgL_auxz00_6679;
BgL_auxz00_6679 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2440z00_3676); 
FAILURE(BgL_auxz00_6679,BFALSE,BFALSE);} } 
BgL_nz00_2097 = 
BLLONG_TO_LLONG(BgL_auxz00_6675); } } } 
if(
(BgL_nz00_2097<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_arg1487z00_811 = 
NEG(BgL_nz00_2097); }  else 
{ /* Ieee/fixnum.scm 1275 */
BgL_arg1487z00_811 = BgL_nz00_2097; } } 
{ 
BGL_LONGLONG_T BgL_mz00_2104;BGL_LONGLONG_T BgL_nz00_2105;
BgL_mz00_2104 = BgL_arg1486z00_810; 
BgL_nz00_2105 = BgL_arg1487z00_811; 
BgL_gcd2z00_2103:
if(
(BgL_nz00_2105==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_g1110z00_798 = BgL_mz00_2104; }  else 
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_rz00_2110;
BgL_rz00_2110 = 
(BgL_mz00_2104%BgL_nz00_2105); 
if(
(BgL_rz00_2110==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_g1110z00_798 = BgL_nz00_2105; }  else 
{ 
BGL_LONGLONG_T BgL_nz00_6693;BGL_LONGLONG_T BgL_mz00_6692;
BgL_mz00_6692 = BgL_nz00_2105; 
BgL_nz00_6693 = BgL_rz00_2110; 
BgL_nz00_2105 = BgL_nz00_6693; 
BgL_mz00_2104 = BgL_mz00_6692; 
goto BgL_gcd2z00_2103;} } } } 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2119;
BgL_pairz00_2119 = BgL_xz00_164; 
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_pairz00_2122;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2444z00_3680;
BgL_aux2444z00_3680 = 
CDR(BgL_pairz00_2119); 
if(
PAIRP(BgL_aux2444z00_3680))
{ /* Ieee/fixnum.scm 1275 */
BgL_pairz00_2122 = BgL_aux2444z00_3680; }  else 
{ 
obj_t BgL_auxz00_6697;
BgL_auxz00_6697 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2825z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2444z00_3680); 
FAILURE(BgL_auxz00_6697,BFALSE,BFALSE);} } 
BgL_g1111z00_799 = 
CDR(BgL_pairz00_2122); } } 
{ 
BGL_LONGLONG_T BgL_resultz00_2124;obj_t BgL_leftz00_2125;
BgL_resultz00_2124 = BgL_g1110z00_798; 
BgL_leftz00_2125 = BgL_g1111z00_799; 
BgL_loopz00_2123:
if(
PAIRP(BgL_leftz00_2125))
{ 
obj_t BgL_leftz00_6729;BGL_LONGLONG_T BgL_resultz00_6704;
BgL_mz00_814 = BgL_resultz00_2124; 
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_nz00_2138;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_auxz00_6717;
{ /* Ieee/fixnum.scm 1275 */
obj_t BgL_aux2446z00_3682;
BgL_aux2446z00_3682 = 
CAR(BgL_leftz00_2125); 
if(
LLONGP(BgL_aux2446z00_3682))
{ /* Ieee/fixnum.scm 1275 */
BgL_auxz00_6717 = BgL_aux2446z00_3682
; }  else 
{ 
obj_t BgL_auxz00_6721;
BgL_auxz00_6721 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57365)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2446z00_3682); 
FAILURE(BgL_auxz00_6721,BFALSE,BFALSE);} } 
BgL_nz00_2138 = 
BLLONG_TO_LLONG(BgL_auxz00_6717); } 
if(
(BgL_nz00_2138<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_nz00_815 = 
NEG(BgL_nz00_2138); }  else 
{ /* Ieee/fixnum.scm 1275 */
BgL_nz00_815 = BgL_nz00_2138; } } 
BgL_zc3anonymousza31490ze3z83_816:
if(
(BgL_nz00_815==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_resultz00_6704 = BgL_mz00_814; }  else 
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_rz00_2192;
BgL_rz00_2192 = 
(BgL_mz00_814%BgL_nz00_815); 
if(
(BgL_rz00_2192==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_resultz00_6704 = BgL_nz00_815; }  else 
{ /* Ieee/fixnum.scm 1275 */
if(
(BgL_rz00_2192==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_resultz00_6704 = BgL_nz00_815; }  else 
{ /* Ieee/fixnum.scm 1275 */
BGL_LONGLONG_T BgL_rz00_2204;
BgL_rz00_2204 = 
(BgL_nz00_815%BgL_rz00_2192); 
if(
(BgL_rz00_2204==((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1275 */
BgL_resultz00_6704 = BgL_rz00_2192; }  else 
{ 
BGL_LONGLONG_T BgL_nz00_6716;BGL_LONGLONG_T BgL_mz00_6715;
BgL_mz00_6715 = BgL_rz00_2192; 
BgL_nz00_6716 = BgL_rz00_2204; 
BgL_nz00_815 = BgL_nz00_6716; 
BgL_mz00_814 = BgL_mz00_6715; 
goto BgL_zc3anonymousza31490ze3z83_816;} } } } 
BgL_leftz00_6729 = 
CDR(BgL_leftz00_2125); 
BgL_leftz00_2125 = BgL_leftz00_6729; 
BgL_resultz00_2124 = BgL_resultz00_6704; 
goto BgL_loopz00_2123;}  else 
{ /* Ieee/fixnum.scm 1275 */
return BgL_resultz00_2124;} } } } } } 
}



/* _gcdllong */
obj_t BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3168, obj_t BgL_xz00_3169)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1274 */
return 
make_bllong(
BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3169));} 
}



/* gcdbx */
BGL_EXPORTED_DEF obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_165)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1280 */
if(
NULLP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1281 */
return 
bgl_long_to_bignum(((long)0));}  else 
{ /* Ieee/fixnum.scm 1282 */
bool_t BgL_testz00_6736;
{ /* Ieee/fixnum.scm 1282 */
obj_t BgL_auxz00_6737;
{ /* Ieee/fixnum.scm 1282 */
obj_t BgL_pairz00_2215;
if(
PAIRP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1282 */
BgL_pairz00_2215 = BgL_xz00_165; }  else 
{ 
obj_t BgL_auxz00_6740;
BgL_auxz00_6740 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57682)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_165); 
FAILURE(BgL_auxz00_6740,BFALSE,BFALSE);} 
BgL_auxz00_6737 = 
CDR(BgL_pairz00_2215); } 
BgL_testz00_6736 = 
NULLP(BgL_auxz00_6737); } 
if(BgL_testz00_6736)
{ /* Ieee/fixnum.scm 1282 */
obj_t BgL_nz00_2218;
{ /* Ieee/fixnum.scm 1282 */
obj_t BgL_pairz00_2217;
if(
PAIRP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1282 */
BgL_pairz00_2217 = BgL_xz00_165; }  else 
{ 
obj_t BgL_auxz00_6748;
BgL_auxz00_6748 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57698)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_165); 
FAILURE(BgL_auxz00_6748,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1282 */
obj_t BgL_aux2452z00_3688;
BgL_aux2452z00_3688 = 
CAR(BgL_pairz00_2217); 
if(
BIGNUMP(BgL_aux2452z00_3688))
{ /* Ieee/fixnum.scm 1282 */
BgL_nz00_2218 = BgL_aux2452z00_3688; }  else 
{ 
obj_t BgL_auxz00_6755;
BgL_auxz00_6755 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57693)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2452z00_3688); 
FAILURE(BgL_auxz00_6755,BFALSE,BFALSE);} } } 
return 
bgl_bignum_abs(BgL_nz00_2218);}  else 
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_g1112z00_825;obj_t BgL_g1113z00_826;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_auxz00_6775;obj_t BgL_auxz00_6760;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_nz00_2225;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_pairz00_2221;
if(
PAIRP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1284 */
BgL_pairz00_2221 = BgL_xz00_165; }  else 
{ 
obj_t BgL_auxz00_6778;
BgL_auxz00_6778 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57768)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_165); 
FAILURE(BgL_auxz00_6778,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_pairz00_2224;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_aux2460z00_3696;
BgL_aux2460z00_3696 = 
CDR(BgL_pairz00_2221); 
if(
PAIRP(BgL_aux2460z00_3696))
{ /* Ieee/fixnum.scm 1284 */
BgL_pairz00_2224 = BgL_aux2460z00_3696; }  else 
{ 
obj_t BgL_auxz00_6785;
BgL_auxz00_6785 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57762)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2460z00_3696); 
FAILURE(BgL_auxz00_6785,BFALSE,BFALSE);} } 
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_aux2462z00_3698;
BgL_aux2462z00_3698 = 
CAR(BgL_pairz00_2224); 
if(
BIGNUMP(BgL_aux2462z00_3698))
{ /* Ieee/fixnum.scm 1284 */
BgL_nz00_2225 = BgL_aux2462z00_3698; }  else 
{ 
obj_t BgL_auxz00_6792;
BgL_auxz00_6792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57762)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2462z00_3698); 
FAILURE(BgL_auxz00_6792,BFALSE,BFALSE);} } } } 
BgL_auxz00_6775 = 
bgl_bignum_abs(BgL_nz00_2225); } 
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_nz00_2220;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_pairz00_2219;
if(
PAIRP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1284 */
BgL_pairz00_2219 = BgL_xz00_165; }  else 
{ 
obj_t BgL_auxz00_6763;
BgL_auxz00_6763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57751)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_165); 
FAILURE(BgL_auxz00_6763,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_aux2456z00_3692;
BgL_aux2456z00_3692 = 
CAR(BgL_pairz00_2219); 
if(
BIGNUMP(BgL_aux2456z00_3692))
{ /* Ieee/fixnum.scm 1284 */
BgL_nz00_2220 = BgL_aux2456z00_3692; }  else 
{ 
obj_t BgL_auxz00_6770;
BgL_auxz00_6770 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57746)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2456z00_3692); 
FAILURE(BgL_auxz00_6770,BFALSE,BFALSE);} } } 
BgL_auxz00_6760 = 
bgl_bignum_abs(BgL_nz00_2220); } 
BgL_g1112z00_825 = 
bgl_bignum_gcd(BgL_auxz00_6760, BgL_auxz00_6775); } 
{ /* Ieee/fixnum.scm 1285 */
obj_t BgL_pairz00_2226;
if(
PAIRP(BgL_xz00_165))
{ /* Ieee/fixnum.scm 1285 */
BgL_pairz00_2226 = BgL_xz00_165; }  else 
{ 
obj_t BgL_auxz00_6800;
BgL_auxz00_6800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57792)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_165); 
FAILURE(BgL_auxz00_6800,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1285 */
obj_t BgL_pairz00_2229;
{ /* Ieee/fixnum.scm 1285 */
obj_t BgL_aux2466z00_3702;
BgL_aux2466z00_3702 = 
CDR(BgL_pairz00_2226); 
if(
PAIRP(BgL_aux2466z00_3702))
{ /* Ieee/fixnum.scm 1285 */
BgL_pairz00_2229 = BgL_aux2466z00_3702; }  else 
{ 
obj_t BgL_auxz00_6807;
BgL_auxz00_6807 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57786)), BGl_string2826z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2466z00_3702); 
FAILURE(BgL_auxz00_6807,BFALSE,BFALSE);} } 
BgL_g1113z00_826 = 
CDR(BgL_pairz00_2229); } } 
{ 
obj_t BgL_resultz00_2231;obj_t BgL_leftz00_2232;
BgL_resultz00_2231 = BgL_g1112z00_825; 
BgL_leftz00_2232 = BgL_g1113z00_826; 
BgL_loopz00_2230:
if(
PAIRP(BgL_leftz00_2232))
{ 
obj_t BgL_leftz00_6825;obj_t BgL_resultz00_6814;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_auxz00_6815;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_nz00_2245;
{ /* Ieee/fixnum.scm 1284 */
obj_t BgL_aux2468z00_3704;
BgL_aux2468z00_3704 = 
CAR(BgL_leftz00_2232); 
if(
BIGNUMP(BgL_aux2468z00_3704))
{ /* Ieee/fixnum.scm 1284 */
BgL_nz00_2245 = BgL_aux2468z00_3704; }  else 
{ 
obj_t BgL_auxz00_6819;
BgL_auxz00_6819 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)57712)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2468z00_3704); 
FAILURE(BgL_auxz00_6819,BFALSE,BFALSE);} } 
BgL_auxz00_6815 = 
bgl_bignum_abs(BgL_nz00_2245); } 
BgL_resultz00_6814 = 
bgl_bignum_gcd(BgL_resultz00_2231, BgL_auxz00_6815); } 
BgL_leftz00_6825 = 
CDR(BgL_leftz00_2232); 
BgL_leftz00_2232 = BgL_leftz00_6825; 
BgL_resultz00_2231 = BgL_resultz00_6814; 
goto BgL_loopz00_2230;}  else 
{ /* Ieee/fixnum.scm 1284 */
return BgL_resultz00_2231;} } } } } 
}



/* _gcdbx */
obj_t BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3170, obj_t BgL_xz00_3171)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1280 */
return 
BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3171);} 
}



/* gcd */
BGL_EXPORTED_DEF obj_t BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_166)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1293 */
if(
NULLP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
return 
BINT(((long)0));}  else 
{ /* Ieee/fixnum.scm 1294 */
bool_t BgL_testz00_6831;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_auxz00_6832;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2268;
if(
PAIRP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2268 = BgL_xz00_166; }  else 
{ 
obj_t BgL_auxz00_6835;
BgL_auxz00_6835 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_166); 
FAILURE(BgL_auxz00_6835,BFALSE,BFALSE);} 
BgL_auxz00_6832 = 
CDR(BgL_pairz00_2268); } 
BgL_testz00_6831 = 
NULLP(BgL_auxz00_6832); } 
if(BgL_testz00_6831)
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_auxz00_6841;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2270;
if(
PAIRP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2270 = BgL_xz00_166; }  else 
{ 
obj_t BgL_auxz00_6844;
BgL_auxz00_6844 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_166); 
FAILURE(BgL_auxz00_6844,BFALSE,BFALSE);} 
BgL_auxz00_6841 = 
CAR(BgL_pairz00_2270); } 
return 
BGl_absz00zz__r4_numbers_6_5z00(BgL_auxz00_6841);}  else 
{ 
obj_t BgL_mz00_862;obj_t BgL_nz00_863;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_g1114z00_846;obj_t BgL_g1115z00_847;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_arg1517z00_858;obj_t BgL_arg1518z00_859;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_auxz00_6850;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2271;
if(
PAIRP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2271 = BgL_xz00_166; }  else 
{ 
obj_t BgL_auxz00_6853;
BgL_auxz00_6853 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_166); 
FAILURE(BgL_auxz00_6853,BFALSE,BFALSE);} 
BgL_auxz00_6850 = 
CAR(BgL_pairz00_2271); } 
BgL_arg1517z00_858 = 
BGl_absz00zz__r4_numbers_6_5z00(BgL_auxz00_6850); } 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_auxz00_6859;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2272;
if(
PAIRP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2272 = BgL_xz00_166; }  else 
{ 
obj_t BgL_auxz00_6862;
BgL_auxz00_6862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_166); 
FAILURE(BgL_auxz00_6862,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2275;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_aux2478z00_3714;
BgL_aux2478z00_3714 = 
CDR(BgL_pairz00_2272); 
if(
PAIRP(BgL_aux2478z00_3714))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2275 = BgL_aux2478z00_3714; }  else 
{ 
obj_t BgL_auxz00_6869;
BgL_auxz00_6869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2478z00_3714); 
FAILURE(BgL_auxz00_6869,BFALSE,BFALSE);} } 
BgL_auxz00_6859 = 
CAR(BgL_pairz00_2275); } } 
BgL_arg1518z00_859 = 
BGl_absz00zz__r4_numbers_6_5z00(BgL_auxz00_6859); } 
{ 
obj_t BgL_mz00_2277;obj_t BgL_nz00_2278;
BgL_mz00_2277 = BgL_arg1517z00_858; 
BgL_nz00_2278 = BgL_arg1518z00_859; 
BgL_gcd2z00_2276:
if(
BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_nz00_2278))
{ /* Ieee/fixnum.scm 1294 */
BgL_g1114z00_846 = BgL_mz00_2277; }  else 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_rz00_2283;
BgL_rz00_2283 = 
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_mz00_2277, BgL_nz00_2278); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_rz00_2283, 
BINT(((long)0))))
{ /* Ieee/fixnum.scm 1294 */
BgL_g1114z00_846 = BgL_nz00_2278; }  else 
{ 
obj_t BgL_nz00_6882;obj_t BgL_mz00_6881;
BgL_mz00_6881 = BgL_nz00_2278; 
BgL_nz00_6882 = BgL_rz00_2283; 
BgL_nz00_2278 = BgL_nz00_6882; 
BgL_mz00_2277 = BgL_mz00_6881; 
goto BgL_gcd2z00_2276;} } } } 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2285;
if(
PAIRP(BgL_xz00_166))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2285 = BgL_xz00_166; }  else 
{ 
obj_t BgL_auxz00_6885;
BgL_auxz00_6885 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_166); 
FAILURE(BgL_auxz00_6885,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_pairz00_2288;
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_aux2482z00_3718;
BgL_aux2482z00_3718 = 
CDR(BgL_pairz00_2285); 
if(
PAIRP(BgL_aux2482z00_3718))
{ /* Ieee/fixnum.scm 1294 */
BgL_pairz00_2288 = BgL_aux2482z00_3718; }  else 
{ 
obj_t BgL_auxz00_6892;
BgL_auxz00_6892 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)58143)), BGl_string2827z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2482z00_3718); 
FAILURE(BgL_auxz00_6892,BFALSE,BFALSE);} } 
BgL_g1115z00_847 = 
CDR(BgL_pairz00_2288); } } 
{ 
obj_t BgL_resultz00_2290;obj_t BgL_leftz00_2291;
BgL_resultz00_2290 = BgL_g1114z00_846; 
BgL_leftz00_2291 = BgL_g1115z00_847; 
BgL_loopz00_2289:
if(
PAIRP(BgL_leftz00_2291))
{ 
obj_t BgL_leftz00_6916;obj_t BgL_resultz00_6899;
BgL_mz00_862 = BgL_resultz00_2290; 
BgL_nz00_863 = 
BGl_absz00zz__r4_numbers_6_5z00(
CAR(BgL_leftz00_2291)); 
BgL_zc3anonymousza31521ze3z83_864:
if(
BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_nz00_863))
{ /* Ieee/fixnum.scm 1294 */
BgL_resultz00_6899 = BgL_mz00_862; }  else 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_rz00_2333;
BgL_rz00_2333 = 
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_mz00_862, BgL_nz00_863); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_rz00_2333, 
BINT(((long)0))))
{ /* Ieee/fixnum.scm 1294 */
BgL_resultz00_6899 = BgL_nz00_863; }  else 
{ /* Ieee/fixnum.scm 1294 */
if(
BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_rz00_2333))
{ /* Ieee/fixnum.scm 1294 */
BgL_resultz00_6899 = BgL_nz00_863; }  else 
{ /* Ieee/fixnum.scm 1294 */
obj_t BgL_rz00_2338;
BgL_rz00_2338 = 
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_nz00_863, BgL_rz00_2333); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_rz00_2338, 
BINT(((long)0))))
{ /* Ieee/fixnum.scm 1294 */
BgL_resultz00_6899 = BgL_rz00_2333; }  else 
{ 
obj_t BgL_nz00_6913;obj_t BgL_mz00_6912;
BgL_mz00_6912 = BgL_rz00_2333; 
BgL_nz00_6913 = BgL_rz00_2338; 
BgL_nz00_863 = BgL_nz00_6913; 
BgL_mz00_862 = BgL_mz00_6912; 
goto BgL_zc3anonymousza31521ze3z83_864;} } } } 
BgL_leftz00_6916 = 
CDR(BgL_leftz00_2291); 
BgL_leftz00_2291 = BgL_leftz00_6916; 
BgL_resultz00_2290 = BgL_resultz00_6899; 
goto BgL_loopz00_2289;}  else 
{ /* Ieee/fixnum.scm 1294 */
return BgL_resultz00_2290;} } } } } } 
}



/* _gcd */
obj_t BGl__gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3172, obj_t BgL_xz00_3173)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1293 */
return 
BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3173);} 
}



/* lcmfx */
BGL_EXPORTED_DEF long BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_167)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1324 */
if(
NULLP(BgL_xz00_167))
{ /* Ieee/fixnum.scm 1325 */
return ((long)1);}  else 
{ /* Ieee/fixnum.scm 1325 */
bool_t BgL_testz00_6921;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_auxz00_6922;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2341;
if(
PAIRP(BgL_xz00_167))
{ /* Ieee/fixnum.scm 1325 */
BgL_pairz00_2341 = BgL_xz00_167; }  else 
{ 
obj_t BgL_auxz00_6925;
BgL_auxz00_6925 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_167); 
FAILURE(BgL_auxz00_6925,BFALSE,BFALSE);} 
BgL_auxz00_6922 = 
CDR(BgL_pairz00_2341); } 
BgL_testz00_6921 = 
NULLP(BgL_auxz00_6922); } 
if(BgL_testz00_6921)
{ /* Ieee/fixnum.scm 1325 */
long BgL_nz00_2344;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2343;
if(
PAIRP(BgL_xz00_167))
{ /* Ieee/fixnum.scm 1325 */
BgL_pairz00_2343 = BgL_xz00_167; }  else 
{ 
obj_t BgL_auxz00_6933;
BgL_auxz00_6933 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_167); 
FAILURE(BgL_auxz00_6933,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_auxz00_6937;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_aux2488z00_3724;
BgL_aux2488z00_3724 = 
CAR(BgL_pairz00_2343); 
if(
INTEGERP(BgL_aux2488z00_3724))
{ /* Ieee/fixnum.scm 1325 */
BgL_auxz00_6937 = BgL_aux2488z00_3724
; }  else 
{ 
obj_t BgL_auxz00_6941;
BgL_auxz00_6941 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2488z00_3724); 
FAILURE(BgL_auxz00_6941,BFALSE,BFALSE);} } 
BgL_nz00_2344 = 
(long)CINT(BgL_auxz00_6937); } } 
if(
(BgL_nz00_2344<((long)0)))
{ /* Ieee/fixnum.scm 1325 */
return 
NEG(BgL_nz00_2344);}  else 
{ /* Ieee/fixnum.scm 1325 */
return BgL_nz00_2344;} }  else 
{ /* Ieee/fixnum.scm 1325 */
long BgL_g1119z00_874;obj_t BgL_g1120z00_875;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_arg1533z00_885;obj_t BgL_arg1534z00_886;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2350;
if(
PAIRP(BgL_xz00_167))
{ /* Ieee/fixnum.scm 1325 */
BgL_pairz00_2350 = BgL_xz00_167; }  else 
{ 
obj_t BgL_auxz00_6951;
BgL_auxz00_6951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_167); 
FAILURE(BgL_auxz00_6951,BFALSE,BFALSE);} 
BgL_arg1533z00_885 = 
CAR(BgL_pairz00_2350); } 
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2351;
BgL_pairz00_2351 = BgL_xz00_167; 
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2354;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_aux2494z00_3730;
BgL_aux2494z00_3730 = 
CDR(BgL_pairz00_2351); 
if(
PAIRP(BgL_aux2494z00_3730))
{ /* Ieee/fixnum.scm 1325 */
BgL_pairz00_2354 = BgL_aux2494z00_3730; }  else 
{ 
obj_t BgL_auxz00_6959;
BgL_auxz00_6959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2494z00_3730); 
FAILURE(BgL_auxz00_6959,BFALSE,BFALSE);} } 
BgL_arg1534z00_886 = 
CAR(BgL_pairz00_2354); } } 
BgL_g1119z00_874 = 
BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(BgL_arg1533z00_885, BgL_arg1534z00_886); } 
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2355;
BgL_pairz00_2355 = BgL_xz00_167; 
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_pairz00_2358;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_aux2498z00_3734;
BgL_aux2498z00_3734 = 
CDR(BgL_pairz00_2355); 
if(
PAIRP(BgL_aux2498z00_3734))
{ /* Ieee/fixnum.scm 1325 */
BgL_pairz00_2358 = BgL_aux2498z00_3734; }  else 
{ 
obj_t BgL_auxz00_6968;
BgL_auxz00_6968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2828z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2498z00_3734); 
FAILURE(BgL_auxz00_6968,BFALSE,BFALSE);} } 
BgL_g1120z00_875 = 
CDR(BgL_pairz00_2358); } } 
{ 
long BgL_resultz00_2360;obj_t BgL_leftz00_2361;
BgL_resultz00_2360 = BgL_g1119z00_874; 
BgL_leftz00_2361 = BgL_g1120z00_875; 
BgL_loopz00_2359:
if(
PAIRP(BgL_leftz00_2361))
{ 
obj_t BgL_leftz00_6979;long BgL_resultz00_6975;
BgL_resultz00_6975 = 
BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(
BINT(BgL_resultz00_2360), 
CAR(BgL_leftz00_2361)); 
BgL_leftz00_6979 = 
CDR(BgL_leftz00_2361); 
BgL_leftz00_2361 = BgL_leftz00_6979; 
BgL_resultz00_2360 = BgL_resultz00_6975; 
goto BgL_loopz00_2359;}  else 
{ /* Ieee/fixnum.scm 1325 */
return BgL_resultz00_2360;} } } } } 
}



/* lcm2''' */
long BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_887, obj_t BgL_nz00_888)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1325 */
{ /* Ieee/fixnum.scm 1325 */
long BgL_mz00_890;long BgL_nz00_891;
{ /* Ieee/fixnum.scm 1325 */
long BgL_nz00_2389;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_auxz00_6981;
if(
INTEGERP(BgL_mz00_887))
{ /* Ieee/fixnum.scm 1325 */
BgL_auxz00_6981 = BgL_mz00_887
; }  else 
{ 
obj_t BgL_auxz00_6984;
BgL_auxz00_6984 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2829z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_mz00_887); 
FAILURE(BgL_auxz00_6984,BFALSE,BFALSE);} 
BgL_nz00_2389 = 
(long)CINT(BgL_auxz00_6981); } 
if(
(BgL_nz00_2389<((long)0)))
{ /* Ieee/fixnum.scm 1325 */
BgL_mz00_890 = 
NEG(BgL_nz00_2389); }  else 
{ /* Ieee/fixnum.scm 1325 */
BgL_mz00_890 = BgL_nz00_2389; } } 
{ /* Ieee/fixnum.scm 1325 */
long BgL_nz00_2395;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_auxz00_6992;
if(
INTEGERP(BgL_nz00_888))
{ /* Ieee/fixnum.scm 1325 */
BgL_auxz00_6992 = BgL_nz00_888
; }  else 
{ 
obj_t BgL_auxz00_6995;
BgL_auxz00_6995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59357)), BGl_string2829z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_888); 
FAILURE(BgL_auxz00_6995,BFALSE,BFALSE);} 
BgL_nz00_2395 = 
(long)CINT(BgL_auxz00_6992); } 
if(
(BgL_nz00_2395<((long)0)))
{ /* Ieee/fixnum.scm 1325 */
BgL_nz00_891 = 
NEG(BgL_nz00_2395); }  else 
{ /* Ieee/fixnum.scm 1325 */
BgL_nz00_891 = BgL_nz00_2395; } } 
if(
(BgL_mz00_890==BgL_nz00_891))
{ /* Ieee/fixnum.scm 1325 */
return BgL_mz00_890;}  else 
{ /* Ieee/fixnum.scm 1325 */
bool_t BgL_testz00_7005;
{ /* Ieee/fixnum.scm 1325 */
long BgL_arg1545z00_901;
BgL_arg1545z00_901 = 
(BgL_mz00_890%BgL_nz00_891); 
BgL_testz00_7005 = 
(BgL_arg1545z00_901==((long)0)); } 
if(BgL_testz00_7005)
{ /* Ieee/fixnum.scm 1325 */
return BgL_mz00_890;}  else 
{ /* Ieee/fixnum.scm 1325 */
bool_t BgL_testz00_7008;
{ /* Ieee/fixnum.scm 1325 */
long BgL_arg1543z00_899;
BgL_arg1543z00_899 = 
(BgL_nz00_891%BgL_mz00_890); 
BgL_testz00_7008 = 
(BgL_arg1543z00_899==((long)0)); } 
if(BgL_testz00_7008)
{ /* Ieee/fixnum.scm 1325 */
return BgL_nz00_891;}  else 
{ /* Ieee/fixnum.scm 1325 */
long BgL_arg1539z00_895;
{ /* Ieee/fixnum.scm 1325 */
long BgL_arg1540z00_896;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_list1541z00_897;
{ /* Ieee/fixnum.scm 1325 */
obj_t BgL_arg1542z00_898;
BgL_arg1542z00_898 = 
MAKE_PAIR(
BINT(BgL_nz00_891), BNIL); 
BgL_list1541z00_897 = 
MAKE_PAIR(
BINT(BgL_mz00_890), BgL_arg1542z00_898); } 
BgL_arg1540z00_896 = 
BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(BgL_list1541z00_897); } 
BgL_arg1539z00_895 = 
(BgL_mz00_890/BgL_arg1540z00_896); } 
return 
(BgL_arg1539z00_895*BgL_nz00_891);} } } } } 
}



/* _lcmfx */
obj_t BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3174, obj_t BgL_xz00_3175)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1324 */
return 
BINT(
BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3175));} 
}



/* lcmelong */
BGL_EXPORTED_DEF long BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_168)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1330 */
if(
NULLP(BgL_xz00_168))
{ /* Ieee/fixnum.scm 1331 */
return ((long)1);}  else 
{ /* Ieee/fixnum.scm 1331 */
bool_t BgL_testz00_7022;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_auxz00_7023;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2416;
if(
PAIRP(BgL_xz00_168))
{ /* Ieee/fixnum.scm 1331 */
BgL_pairz00_2416 = BgL_xz00_168; }  else 
{ 
obj_t BgL_auxz00_7026;
BgL_auxz00_7026 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_168); 
FAILURE(BgL_auxz00_7026,BFALSE,BFALSE);} 
BgL_auxz00_7023 = 
CDR(BgL_pairz00_2416); } 
BgL_testz00_7022 = 
NULLP(BgL_auxz00_7023); } 
if(BgL_testz00_7022)
{ /* Ieee/fixnum.scm 1331 */
long BgL_nz00_2419;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2418;
if(
PAIRP(BgL_xz00_168))
{ /* Ieee/fixnum.scm 1331 */
BgL_pairz00_2418 = BgL_xz00_168; }  else 
{ 
obj_t BgL_auxz00_7034;
BgL_auxz00_7034 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_168); 
FAILURE(BgL_auxz00_7034,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_auxz00_7038;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_aux2508z00_3744;
BgL_aux2508z00_3744 = 
CAR(BgL_pairz00_2418); 
if(
ELONGP(BgL_aux2508z00_3744))
{ /* Ieee/fixnum.scm 1331 */
BgL_auxz00_7038 = BgL_aux2508z00_3744
; }  else 
{ 
obj_t BgL_auxz00_7042;
BgL_auxz00_7042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2508z00_3744); 
FAILURE(BgL_auxz00_7042,BFALSE,BFALSE);} } 
BgL_nz00_2419 = 
BELONG_TO_LONG(BgL_auxz00_7038); } } 
if(
(BgL_nz00_2419<((long)0)))
{ /* Ieee/fixnum.scm 1331 */
return 
NEG(BgL_nz00_2419);}  else 
{ /* Ieee/fixnum.scm 1331 */
return BgL_nz00_2419;} }  else 
{ /* Ieee/fixnum.scm 1331 */
long BgL_g1121z00_909;obj_t BgL_g1122z00_910;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_arg1557z00_920;obj_t BgL_arg1559z00_921;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2425;
if(
PAIRP(BgL_xz00_168))
{ /* Ieee/fixnum.scm 1331 */
BgL_pairz00_2425 = BgL_xz00_168; }  else 
{ 
obj_t BgL_auxz00_7052;
BgL_auxz00_7052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_168); 
FAILURE(BgL_auxz00_7052,BFALSE,BFALSE);} 
BgL_arg1557z00_920 = 
CAR(BgL_pairz00_2425); } 
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2426;
BgL_pairz00_2426 = BgL_xz00_168; 
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2429;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_aux2514z00_3750;
BgL_aux2514z00_3750 = 
CDR(BgL_pairz00_2426); 
if(
PAIRP(BgL_aux2514z00_3750))
{ /* Ieee/fixnum.scm 1331 */
BgL_pairz00_2429 = BgL_aux2514z00_3750; }  else 
{ 
obj_t BgL_auxz00_7060;
BgL_auxz00_7060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2514z00_3750); 
FAILURE(BgL_auxz00_7060,BFALSE,BFALSE);} } 
BgL_arg1559z00_921 = 
CAR(BgL_pairz00_2429); } } 
BgL_g1121z00_909 = 
BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(BgL_arg1557z00_920, BgL_arg1559z00_921); } 
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2430;
BgL_pairz00_2430 = BgL_xz00_168; 
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_pairz00_2433;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_aux2518z00_3754;
BgL_aux2518z00_3754 = 
CDR(BgL_pairz00_2430); 
if(
PAIRP(BgL_aux2518z00_3754))
{ /* Ieee/fixnum.scm 1331 */
BgL_pairz00_2433 = BgL_aux2518z00_3754; }  else 
{ 
obj_t BgL_auxz00_7069;
BgL_auxz00_7069 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2830z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2518z00_3754); 
FAILURE(BgL_auxz00_7069,BFALSE,BFALSE);} } 
BgL_g1122z00_910 = 
CDR(BgL_pairz00_2433); } } 
{ 
long BgL_resultz00_2435;obj_t BgL_leftz00_2436;
BgL_resultz00_2435 = BgL_g1121z00_909; 
BgL_leftz00_2436 = BgL_g1122z00_910; 
BgL_loopz00_2434:
if(
PAIRP(BgL_leftz00_2436))
{ /* Ieee/fixnum.scm 1331 */
long BgL_arg1554z00_2442;obj_t BgL_arg1555z00_2443;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_arg1556z00_2444;
BgL_arg1556z00_2444 = 
CAR(BgL_leftz00_2436); 
BgL_arg1554z00_2442 = 
BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(
make_belong(BgL_resultz00_2435), BgL_arg1556z00_2444); } 
BgL_arg1555z00_2443 = 
CDR(BgL_leftz00_2436); 
{ 
obj_t BgL_leftz00_7081;long BgL_resultz00_7080;
BgL_resultz00_7080 = BgL_arg1554z00_2442; 
BgL_leftz00_7081 = BgL_arg1555z00_2443; 
BgL_leftz00_2436 = BgL_leftz00_7081; 
BgL_resultz00_2435 = BgL_resultz00_7080; 
goto BgL_loopz00_2434;} }  else 
{ /* Ieee/fixnum.scm 1331 */
return BgL_resultz00_2435;} } } } } 
}



/* lcm2'' */
long BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_922, obj_t BgL_nz00_923)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1331 */
{ /* Ieee/fixnum.scm 1331 */
long BgL_mz00_925;long BgL_nz00_926;
{ /* Ieee/fixnum.scm 1331 */
long BgL_nz00_2464;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_auxz00_7082;
if(
ELONGP(BgL_mz00_922))
{ /* Ieee/fixnum.scm 1331 */
BgL_auxz00_7082 = BgL_mz00_922
; }  else 
{ 
obj_t BgL_auxz00_7085;
BgL_auxz00_7085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2831z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_mz00_922); 
FAILURE(BgL_auxz00_7085,BFALSE,BFALSE);} 
BgL_nz00_2464 = 
BELONG_TO_LONG(BgL_auxz00_7082); } 
if(
(BgL_nz00_2464<((long)0)))
{ /* Ieee/fixnum.scm 1331 */
BgL_mz00_925 = 
NEG(BgL_nz00_2464); }  else 
{ /* Ieee/fixnum.scm 1331 */
BgL_mz00_925 = BgL_nz00_2464; } } 
{ /* Ieee/fixnum.scm 1331 */
long BgL_nz00_2470;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_auxz00_7093;
if(
ELONGP(BgL_nz00_923))
{ /* Ieee/fixnum.scm 1331 */
BgL_auxz00_7093 = BgL_nz00_923
; }  else 
{ 
obj_t BgL_auxz00_7096;
BgL_auxz00_7096 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59624)), BGl_string2831z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_923); 
FAILURE(BgL_auxz00_7096,BFALSE,BFALSE);} 
BgL_nz00_2470 = 
BELONG_TO_LONG(BgL_auxz00_7093); } 
if(
(BgL_nz00_2470<((long)0)))
{ /* Ieee/fixnum.scm 1331 */
BgL_nz00_926 = 
NEG(BgL_nz00_2470); }  else 
{ /* Ieee/fixnum.scm 1331 */
BgL_nz00_926 = BgL_nz00_2470; } } 
if(
(BgL_mz00_925==BgL_nz00_926))
{ /* Ieee/fixnum.scm 1331 */
return BgL_mz00_925;}  else 
{ /* Ieee/fixnum.scm 1331 */
bool_t BgL_testz00_7106;
{ /* Ieee/fixnum.scm 1331 */
long BgL_arg1571z00_936;
BgL_arg1571z00_936 = 
(BgL_mz00_925%BgL_nz00_926); 
BgL_testz00_7106 = 
(BgL_arg1571z00_936==((long)0)); } 
if(BgL_testz00_7106)
{ /* Ieee/fixnum.scm 1331 */
return BgL_mz00_925;}  else 
{ /* Ieee/fixnum.scm 1331 */
bool_t BgL_testz00_7109;
{ /* Ieee/fixnum.scm 1331 */
long BgL_arg1568z00_934;
BgL_arg1568z00_934 = 
(BgL_nz00_926%BgL_mz00_925); 
BgL_testz00_7109 = 
(BgL_arg1568z00_934==((long)0)); } 
if(BgL_testz00_7109)
{ /* Ieee/fixnum.scm 1331 */
return BgL_nz00_926;}  else 
{ /* Ieee/fixnum.scm 1331 */
long BgL_arg1564z00_930;
{ /* Ieee/fixnum.scm 1331 */
long BgL_arg1565z00_931;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_list1566z00_932;
{ /* Ieee/fixnum.scm 1331 */
obj_t BgL_arg1567z00_933;
BgL_arg1567z00_933 = 
MAKE_PAIR(
make_belong(BgL_nz00_926), BNIL); 
BgL_list1566z00_932 = 
MAKE_PAIR(
make_belong(BgL_mz00_925), BgL_arg1567z00_933); } 
BgL_arg1565z00_931 = 
BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(BgL_list1566z00_932); } 
BgL_arg1564z00_930 = 
(BgL_mz00_925/BgL_arg1565z00_931); } 
return 
(BgL_arg1564z00_930*BgL_nz00_926);} } } } } 
}



/* _lcmelong */
obj_t BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3176, obj_t BgL_xz00_3177)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1330 */
{ /* Ieee/fixnum.scm 1331 */
long BgL_auxz00_7119;
BgL_auxz00_7119 = 
BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3177); 
return 
make_belong(BgL_auxz00_7119);} } 
}



/* lcmllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_169)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1336 */
if(
NULLP(BgL_xz00_169))
{ /* Ieee/fixnum.scm 1337 */
return ((BGL_LONGLONG_T)1);}  else 
{ /* Ieee/fixnum.scm 1337 */
bool_t BgL_testz00_7124;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_auxz00_7125;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2491;
if(
PAIRP(BgL_xz00_169))
{ /* Ieee/fixnum.scm 1337 */
BgL_pairz00_2491 = BgL_xz00_169; }  else 
{ 
obj_t BgL_auxz00_7128;
BgL_auxz00_7128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_169); 
FAILURE(BgL_auxz00_7128,BFALSE,BFALSE);} 
BgL_auxz00_7125 = 
CDR(BgL_pairz00_2491); } 
BgL_testz00_7124 = 
NULLP(BgL_auxz00_7125); } 
if(BgL_testz00_7124)
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_nz00_2494;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2493;
if(
PAIRP(BgL_xz00_169))
{ /* Ieee/fixnum.scm 1337 */
BgL_pairz00_2493 = BgL_xz00_169; }  else 
{ 
obj_t BgL_auxz00_7136;
BgL_auxz00_7136 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_169); 
FAILURE(BgL_auxz00_7136,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_auxz00_7140;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_aux2528z00_3764;
BgL_aux2528z00_3764 = 
CAR(BgL_pairz00_2493); 
if(
LLONGP(BgL_aux2528z00_3764))
{ /* Ieee/fixnum.scm 1337 */
BgL_auxz00_7140 = BgL_aux2528z00_3764
; }  else 
{ 
obj_t BgL_auxz00_7144;
BgL_auxz00_7144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2528z00_3764); 
FAILURE(BgL_auxz00_7144,BFALSE,BFALSE);} } 
BgL_nz00_2494 = 
BLLONG_TO_LLONG(BgL_auxz00_7140); } } 
if(
(BgL_nz00_2494<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1337 */
return 
NEG(BgL_nz00_2494);}  else 
{ /* Ieee/fixnum.scm 1337 */
return BgL_nz00_2494;} }  else 
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_g1123z00_944;obj_t BgL_g1124z00_945;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_arg1583z00_955;obj_t BgL_arg1584z00_956;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2500;
if(
PAIRP(BgL_xz00_169))
{ /* Ieee/fixnum.scm 1337 */
BgL_pairz00_2500 = BgL_xz00_169; }  else 
{ 
obj_t BgL_auxz00_7154;
BgL_auxz00_7154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_169); 
FAILURE(BgL_auxz00_7154,BFALSE,BFALSE);} 
BgL_arg1583z00_955 = 
CAR(BgL_pairz00_2500); } 
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2501;
BgL_pairz00_2501 = BgL_xz00_169; 
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2504;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_aux2534z00_3770;
BgL_aux2534z00_3770 = 
CDR(BgL_pairz00_2501); 
if(
PAIRP(BgL_aux2534z00_3770))
{ /* Ieee/fixnum.scm 1337 */
BgL_pairz00_2504 = BgL_aux2534z00_3770; }  else 
{ 
obj_t BgL_auxz00_7162;
BgL_auxz00_7162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2534z00_3770); 
FAILURE(BgL_auxz00_7162,BFALSE,BFALSE);} } 
BgL_arg1584z00_956 = 
CAR(BgL_pairz00_2504); } } 
BgL_g1123z00_944 = 
BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(BgL_arg1583z00_955, BgL_arg1584z00_956); } 
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2505;
BgL_pairz00_2505 = BgL_xz00_169; 
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_pairz00_2508;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_aux2538z00_3774;
BgL_aux2538z00_3774 = 
CDR(BgL_pairz00_2505); 
if(
PAIRP(BgL_aux2538z00_3774))
{ /* Ieee/fixnum.scm 1337 */
BgL_pairz00_2508 = BgL_aux2538z00_3774; }  else 
{ 
obj_t BgL_auxz00_7171;
BgL_auxz00_7171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2832z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2538z00_3774); 
FAILURE(BgL_auxz00_7171,BFALSE,BFALSE);} } 
BgL_g1124z00_945 = 
CDR(BgL_pairz00_2508); } } 
{ 
BGL_LONGLONG_T BgL_resultz00_2510;obj_t BgL_leftz00_2511;
BgL_resultz00_2510 = BgL_g1123z00_944; 
BgL_leftz00_2511 = BgL_g1124z00_945; 
BgL_loopz00_2509:
if(
PAIRP(BgL_leftz00_2511))
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_arg1580z00_2517;obj_t BgL_arg1581z00_2518;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_arg1582z00_2519;
BgL_arg1582z00_2519 = 
CAR(BgL_leftz00_2511); 
BgL_arg1580z00_2517 = 
BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(
make_bllong(BgL_resultz00_2510), BgL_arg1582z00_2519); } 
BgL_arg1581z00_2518 = 
CDR(BgL_leftz00_2511); 
{ 
obj_t BgL_leftz00_7183;BGL_LONGLONG_T BgL_resultz00_7182;
BgL_resultz00_7182 = BgL_arg1580z00_2517; 
BgL_leftz00_7183 = BgL_arg1581z00_2518; 
BgL_leftz00_2511 = BgL_leftz00_7183; 
BgL_resultz00_2510 = BgL_resultz00_7182; 
goto BgL_loopz00_2509;} }  else 
{ /* Ieee/fixnum.scm 1337 */
return BgL_resultz00_2510;} } } } } 
}



/* lcm2' */
BGL_LONGLONG_T BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_957, obj_t BgL_nz00_958)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1337 */
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_mz00_960;BGL_LONGLONG_T BgL_nz00_961;
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_nz00_2539;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_auxz00_7184;
if(
LLONGP(BgL_mz00_957))
{ /* Ieee/fixnum.scm 1337 */
BgL_auxz00_7184 = BgL_mz00_957
; }  else 
{ 
obj_t BgL_auxz00_7187;
BgL_auxz00_7187 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2833z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_mz00_957); 
FAILURE(BgL_auxz00_7187,BFALSE,BFALSE);} 
BgL_nz00_2539 = 
BLLONG_TO_LLONG(BgL_auxz00_7184); } 
if(
(BgL_nz00_2539<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1337 */
BgL_mz00_960 = 
NEG(BgL_nz00_2539); }  else 
{ /* Ieee/fixnum.scm 1337 */
BgL_mz00_960 = BgL_nz00_2539; } } 
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_nz00_2545;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_auxz00_7195;
if(
LLONGP(BgL_nz00_958))
{ /* Ieee/fixnum.scm 1337 */
BgL_auxz00_7195 = BgL_nz00_958
; }  else 
{ 
obj_t BgL_auxz00_7198;
BgL_auxz00_7198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)59898)), BGl_string2833z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_958); 
FAILURE(BgL_auxz00_7198,BFALSE,BFALSE);} 
BgL_nz00_2545 = 
BLLONG_TO_LLONG(BgL_auxz00_7195); } 
if(
(BgL_nz00_2545<((BGL_LONGLONG_T)0)))
{ /* Ieee/fixnum.scm 1337 */
BgL_nz00_961 = 
NEG(BgL_nz00_2545); }  else 
{ /* Ieee/fixnum.scm 1337 */
BgL_nz00_961 = BgL_nz00_2545; } } 
if(
(BgL_mz00_960==BgL_nz00_961))
{ /* Ieee/fixnum.scm 1337 */
return BgL_mz00_960;}  else 
{ /* Ieee/fixnum.scm 1337 */
bool_t BgL_testz00_7208;
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_arg1598z00_971;
BgL_arg1598z00_971 = 
(BgL_mz00_960%BgL_nz00_961); 
BgL_testz00_7208 = 
(BgL_arg1598z00_971==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7208)
{ /* Ieee/fixnum.scm 1337 */
return BgL_mz00_960;}  else 
{ /* Ieee/fixnum.scm 1337 */
bool_t BgL_testz00_7211;
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_arg1596z00_969;
BgL_arg1596z00_969 = 
(BgL_nz00_961%BgL_mz00_960); 
BgL_testz00_7211 = 
(BgL_arg1596z00_969==((BGL_LONGLONG_T)0)); } 
if(BgL_testz00_7211)
{ /* Ieee/fixnum.scm 1337 */
return BgL_nz00_961;}  else 
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_arg1589z00_965;
{ /* Ieee/fixnum.scm 1337 */
BGL_LONGLONG_T BgL_arg1590z00_966;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_list1591z00_967;
{ /* Ieee/fixnum.scm 1337 */
obj_t BgL_arg1593z00_968;
BgL_arg1593z00_968 = 
MAKE_PAIR(
make_bllong(BgL_nz00_961), BNIL); 
BgL_list1591z00_967 = 
MAKE_PAIR(
make_bllong(BgL_mz00_960), BgL_arg1593z00_968); } 
BgL_arg1590z00_966 = 
BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(BgL_list1591z00_967); } 
BgL_arg1589z00_965 = 
(BgL_mz00_960/BgL_arg1590z00_966); } 
return 
(BgL_arg1589z00_965*BgL_nz00_961);} } } } } 
}



/* _lcmllong */
obj_t BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3178, obj_t BgL_xz00_3179)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1336 */
return 
make_bllong(
BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3179));} 
}



/* lcmbx */
BGL_EXPORTED_DEF obj_t BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_170)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1342 */
if(
NULLP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1343 */
return 
bgl_long_to_bignum(((long)1));}  else 
{ /* Ieee/fixnum.scm 1344 */
bool_t BgL_testz00_7226;
{ /* Ieee/fixnum.scm 1344 */
obj_t BgL_auxz00_7227;
{ /* Ieee/fixnum.scm 1344 */
obj_t BgL_pairz00_2567;
if(
PAIRP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1344 */
BgL_pairz00_2567 = BgL_xz00_170; }  else 
{ 
obj_t BgL_auxz00_7230;
BgL_auxz00_7230 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60219)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_170); 
FAILURE(BgL_auxz00_7230,BFALSE,BFALSE);} 
BgL_auxz00_7227 = 
CDR(BgL_pairz00_2567); } 
BgL_testz00_7226 = 
NULLP(BgL_auxz00_7227); } 
if(BgL_testz00_7226)
{ /* Ieee/fixnum.scm 1344 */
obj_t BgL_nz00_2570;
{ /* Ieee/fixnum.scm 1344 */
obj_t BgL_pairz00_2569;
if(
PAIRP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1344 */
BgL_pairz00_2569 = BgL_xz00_170; }  else 
{ 
obj_t BgL_auxz00_7238;
BgL_auxz00_7238 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60235)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_170); 
FAILURE(BgL_auxz00_7238,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1344 */
obj_t BgL_aux2548z00_3784;
BgL_aux2548z00_3784 = 
CAR(BgL_pairz00_2569); 
if(
BIGNUMP(BgL_aux2548z00_3784))
{ /* Ieee/fixnum.scm 1344 */
BgL_nz00_2570 = BgL_aux2548z00_3784; }  else 
{ 
obj_t BgL_auxz00_7245;
BgL_auxz00_7245 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60230)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2548z00_3784); 
FAILURE(BgL_auxz00_7245,BFALSE,BFALSE);} } } 
return 
bgl_bignum_abs(BgL_nz00_2570);}  else 
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_g1125z00_978;obj_t BgL_g1126z00_979;
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_auxz00_7264;obj_t BgL_auxz00_7250;
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_pairz00_2572;
if(
PAIRP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1346 */
BgL_pairz00_2572 = BgL_xz00_170; }  else 
{ 
obj_t BgL_auxz00_7267;
BgL_auxz00_7267 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60290)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_170); 
FAILURE(BgL_auxz00_7267,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_pairz00_2575;
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_aux2556z00_3792;
BgL_aux2556z00_3792 = 
CDR(BgL_pairz00_2572); 
if(
PAIRP(BgL_aux2556z00_3792))
{ /* Ieee/fixnum.scm 1346 */
BgL_pairz00_2575 = BgL_aux2556z00_3792; }  else 
{ 
obj_t BgL_auxz00_7274;
BgL_auxz00_7274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60284)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2556z00_3792); 
FAILURE(BgL_auxz00_7274,BFALSE,BFALSE);} } 
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_aux2558z00_3794;
BgL_aux2558z00_3794 = 
CAR(BgL_pairz00_2575); 
if(
BIGNUMP(BgL_aux2558z00_3794))
{ /* Ieee/fixnum.scm 1346 */
BgL_auxz00_7264 = BgL_aux2558z00_3794
; }  else 
{ 
obj_t BgL_auxz00_7281;
BgL_auxz00_7281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60284)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2558z00_3794); 
FAILURE(BgL_auxz00_7281,BFALSE,BFALSE);} } } } 
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_pairz00_2571;
if(
PAIRP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1346 */
BgL_pairz00_2571 = BgL_xz00_170; }  else 
{ 
obj_t BgL_auxz00_7253;
BgL_auxz00_7253 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60281)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_170); 
FAILURE(BgL_auxz00_7253,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_aux2552z00_3788;
BgL_aux2552z00_3788 = 
CAR(BgL_pairz00_2571); 
if(
BIGNUMP(BgL_aux2552z00_3788))
{ /* Ieee/fixnum.scm 1346 */
BgL_auxz00_7250 = BgL_aux2552z00_3788
; }  else 
{ 
obj_t BgL_auxz00_7260;
BgL_auxz00_7260 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60276)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2552z00_3788); 
FAILURE(BgL_auxz00_7260,BFALSE,BFALSE);} } } 
BgL_g1125z00_978 = 
bgl_bignum_lcm(BgL_auxz00_7250, BgL_auxz00_7264); } 
{ /* Ieee/fixnum.scm 1347 */
obj_t BgL_pairz00_2576;
if(
PAIRP(BgL_xz00_170))
{ /* Ieee/fixnum.scm 1347 */
BgL_pairz00_2576 = BgL_xz00_170; }  else 
{ 
obj_t BgL_auxz00_7288;
BgL_auxz00_7288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60313)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_170); 
FAILURE(BgL_auxz00_7288,BFALSE,BFALSE);} 
{ /* Ieee/fixnum.scm 1347 */
obj_t BgL_pairz00_2579;
{ /* Ieee/fixnum.scm 1347 */
obj_t BgL_aux2562z00_3798;
BgL_aux2562z00_3798 = 
CDR(BgL_pairz00_2576); 
if(
PAIRP(BgL_aux2562z00_3798))
{ /* Ieee/fixnum.scm 1347 */
BgL_pairz00_2579 = BgL_aux2562z00_3798; }  else 
{ 
obj_t BgL_auxz00_7295;
BgL_auxz00_7295 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60307)), BGl_string2834z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2562z00_3798); 
FAILURE(BgL_auxz00_7295,BFALSE,BFALSE);} } 
BgL_g1126z00_979 = 
CDR(BgL_pairz00_2579); } } 
{ 
obj_t BgL_resultz00_2581;obj_t BgL_leftz00_2582;
BgL_resultz00_2581 = BgL_g1125z00_978; 
BgL_leftz00_2582 = BgL_g1126z00_979; 
BgL_loopz00_2580:
if(
PAIRP(BgL_leftz00_2582))
{ 
obj_t BgL_leftz00_7312;obj_t BgL_resultz00_7302;
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_auxz00_7303;
{ /* Ieee/fixnum.scm 1346 */
obj_t BgL_aux2564z00_3800;
BgL_aux2564z00_3800 = 
CAR(BgL_leftz00_2582); 
if(
BIGNUMP(BgL_aux2564z00_3800))
{ /* Ieee/fixnum.scm 1346 */
BgL_auxz00_7303 = BgL_aux2564z00_3800
; }  else 
{ 
obj_t BgL_auxz00_7307;
BgL_auxz00_7307 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60249)), BGl_string2762z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2564z00_3800); 
FAILURE(BgL_auxz00_7307,BFALSE,BFALSE);} } 
BgL_resultz00_7302 = 
bgl_bignum_lcm(BgL_resultz00_2581, BgL_auxz00_7303); } 
BgL_leftz00_7312 = 
CDR(BgL_leftz00_2582); 
BgL_leftz00_2582 = BgL_leftz00_7312; 
BgL_resultz00_2581 = BgL_resultz00_7302; 
goto BgL_loopz00_2580;}  else 
{ /* Ieee/fixnum.scm 1346 */
return BgL_resultz00_2581;} } } } } 
}



/* _lcmbx */
obj_t BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3180, obj_t BgL_xz00_3181)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1342 */
return 
BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3181);} 
}



/* lcm */
BGL_EXPORTED_DEF obj_t BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_171)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1355 */
if(
NULLP(BgL_xz00_171))
{ /* Ieee/fixnum.scm 1356 */
return 
BINT(((long)1));}  else 
{ /* Ieee/fixnum.scm 1356 */
bool_t BgL_testz00_7318;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_auxz00_7319;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2611;
if(
PAIRP(BgL_xz00_171))
{ /* Ieee/fixnum.scm 1356 */
BgL_pairz00_2611 = BgL_xz00_171; }  else 
{ 
obj_t BgL_auxz00_7322;
BgL_auxz00_7322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60656)), BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_171); 
FAILURE(BgL_auxz00_7322,BFALSE,BFALSE);} 
BgL_auxz00_7319 = 
CDR(BgL_pairz00_2611); } 
BgL_testz00_7318 = 
NULLP(BgL_auxz00_7319); } 
if(BgL_testz00_7318)
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_auxz00_7328;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2613;
if(
PAIRP(BgL_xz00_171))
{ /* Ieee/fixnum.scm 1356 */
BgL_pairz00_2613 = BgL_xz00_171; }  else 
{ 
obj_t BgL_auxz00_7331;
BgL_auxz00_7331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60656)), BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_171); 
FAILURE(BgL_auxz00_7331,BFALSE,BFALSE);} 
BgL_auxz00_7328 = 
CAR(BgL_pairz00_2613); } 
return 
BGl_absz00zz__r4_numbers_6_5z00(BgL_auxz00_7328);}  else 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_g1127z00_996;obj_t BgL_g1128z00_997;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_arg1624z00_1007;obj_t BgL_arg1625z00_1008;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2614;
if(
PAIRP(BgL_xz00_171))
{ /* Ieee/fixnum.scm 1356 */
BgL_pairz00_2614 = BgL_xz00_171; }  else 
{ 
obj_t BgL_auxz00_7339;
BgL_auxz00_7339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60656)), BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_171); 
FAILURE(BgL_auxz00_7339,BFALSE,BFALSE);} 
BgL_arg1624z00_1007 = 
CAR(BgL_pairz00_2614); } 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2615;
BgL_pairz00_2615 = BgL_xz00_171; 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2618;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_aux2574z00_3810;
BgL_aux2574z00_3810 = 
CDR(BgL_pairz00_2615); 
if(
PAIRP(BgL_aux2574z00_3810))
{ /* Ieee/fixnum.scm 1356 */
BgL_pairz00_2618 = BgL_aux2574z00_3810; }  else 
{ 
obj_t BgL_auxz00_7347;
BgL_auxz00_7347 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60656)), BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2574z00_3810); 
FAILURE(BgL_auxz00_7347,BFALSE,BFALSE);} } 
BgL_arg1625z00_1008 = 
CAR(BgL_pairz00_2618); } } 
BgL_g1127z00_996 = 
BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(BgL_arg1624z00_1007, BgL_arg1625z00_1008); } 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2619;
BgL_pairz00_2619 = BgL_xz00_171; 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_pairz00_2622;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_aux2578z00_3814;
BgL_aux2578z00_3814 = 
CDR(BgL_pairz00_2619); 
if(
PAIRP(BgL_aux2578z00_3814))
{ /* Ieee/fixnum.scm 1356 */
BgL_pairz00_2622 = BgL_aux2578z00_3814; }  else 
{ 
obj_t BgL_auxz00_7356;
BgL_auxz00_7356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60656)), BGl_string2835z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2578z00_3814); 
FAILURE(BgL_auxz00_7356,BFALSE,BFALSE);} } 
BgL_g1128z00_997 = 
CDR(BgL_pairz00_2622); } } 
{ 
obj_t BgL_resultz00_2624;obj_t BgL_leftz00_2625;
BgL_resultz00_2624 = BgL_g1127z00_996; 
BgL_leftz00_2625 = BgL_g1128z00_997; 
BgL_loopz00_2623:
if(
PAIRP(BgL_leftz00_2625))
{ 
obj_t BgL_leftz00_7366;obj_t BgL_resultz00_7363;
BgL_resultz00_7363 = 
BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(BgL_resultz00_2624, 
CAR(BgL_leftz00_2625)); 
BgL_leftz00_7366 = 
CDR(BgL_leftz00_2625); 
BgL_leftz00_2625 = BgL_leftz00_7366; 
BgL_resultz00_2624 = BgL_resultz00_7363; 
goto BgL_loopz00_2623;}  else 
{ /* Ieee/fixnum.scm 1356 */
return BgL_resultz00_2624;} } } } } 
}



/* lcm2 */
obj_t BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_1009, obj_t BgL_nz00_1010)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1356 */
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_mz00_1012;obj_t BgL_nz00_1013;
BgL_mz00_1012 = 
BGl_absz00zz__r4_numbers_6_5z00(BgL_mz00_1009); 
BgL_nz00_1013 = 
BGl_absz00zz__r4_numbers_6_5z00(BgL_nz00_1010); 
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_mz00_1012, BgL_nz00_1013))
{ /* Ieee/fixnum.scm 1356 */
return BgL_mz00_1012;}  else 
{ /* Ieee/fixnum.scm 1356 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_mz00_1012, BgL_nz00_1013), 
BINT(((long)0))))
{ /* Ieee/fixnum.scm 1356 */
return BgL_mz00_1012;}  else 
{ /* Ieee/fixnum.scm 1356 */
if(
BGl_2zd3zd3zz__r4_numbers_6_5z00(
BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_nz00_1013, BgL_mz00_1012), 
BINT(((long)0))))
{ /* Ieee/fixnum.scm 1356 */
return BgL_nz00_1013;}  else 
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_arg1630z00_1017;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_arg1631z00_1018;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_list1632z00_1019;
{ /* Ieee/fixnum.scm 1356 */
obj_t BgL_arg1633z00_1020;
BgL_arg1633z00_1020 = 
MAKE_PAIR(BgL_nz00_1013, BNIL); 
BgL_list1632z00_1019 = 
MAKE_PAIR(BgL_mz00_1012, BgL_arg1633z00_1020); } 
BgL_arg1631z00_1018 = 
BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(BgL_list1632z00_1019); } 
BgL_arg1630z00_1017 = 
BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_mz00_1012, BgL_arg1631z00_1018); } 
return 
BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1630z00_1017, BgL_nz00_1013);} } } } } 
}



/* _lcm */
obj_t BGl__lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3182, obj_t BgL_xz00_3183)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1355 */
return 
BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3183);} 
}



/* exptfx */
BGL_EXPORTED_DEF long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_172, long BgL_yz00_173)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1361 */
BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00:
if(
(BgL_yz00_173==((long)0)))
{ /* Ieee/fixnum.scm 1363 */
return ((long)1);}  else 
{ /* Ieee/fixnum.scm 1363 */
if(
EVENP_FX(BgL_yz00_173))
{ /* Ieee/fixnum.scm 1366 */
long BgL_arg1643z00_1029;long BgL_arg1644z00_1030;
BgL_arg1643z00_1029 = 
(BgL_xz00_172*BgL_xz00_172); 
BgL_arg1644z00_1030 = 
(BgL_yz00_173/((long)2)); 
{ 
long BgL_yz00_7393;long BgL_xz00_7392;
BgL_xz00_7392 = BgL_arg1643z00_1029; 
BgL_yz00_7393 = BgL_arg1644z00_1030; 
BgL_yz00_173 = BgL_yz00_7393; 
BgL_xz00_172 = BgL_xz00_7392; 
goto BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00;} }  else 
{ /* Ieee/fixnum.scm 1365 */
return 
(BgL_xz00_172*
BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_172, 
(BgL_yz00_173-((long)1))));} } } 
}



/* _exptfx */
obj_t BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3184, obj_t BgL_xz00_3185, obj_t BgL_yz00_3186)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1361 */
{ /* Ieee/fixnum.scm 1363 */
long BgL_auxz00_7397;
{ /* Ieee/fixnum.scm 1363 */
long BgL_auxz00_7407;long BgL_auxz00_7398;
{ /* Ieee/fixnum.scm 1363 */
obj_t BgL_auxz00_7408;
if(
INTEGERP(BgL_yz00_3186))
{ /* Ieee/fixnum.scm 1363 */
BgL_auxz00_7408 = BgL_yz00_3186
; }  else 
{ 
obj_t BgL_auxz00_7411;
BgL_auxz00_7411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60934)), BGl_string2836z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3186); 
FAILURE(BgL_auxz00_7411,BFALSE,BFALSE);} 
BgL_auxz00_7407 = 
(long)CINT(BgL_auxz00_7408); } 
{ /* Ieee/fixnum.scm 1363 */
obj_t BgL_auxz00_7399;
if(
INTEGERP(BgL_xz00_3185))
{ /* Ieee/fixnum.scm 1363 */
BgL_auxz00_7399 = BgL_xz00_3185
; }  else 
{ 
obj_t BgL_auxz00_7402;
BgL_auxz00_7402 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)60934)), BGl_string2836z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3185); 
FAILURE(BgL_auxz00_7402,BFALSE,BFALSE);} 
BgL_auxz00_7398 = 
(long)CINT(BgL_auxz00_7399); } 
BgL_auxz00_7397 = 
BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7398, BgL_auxz00_7407); } 
return 
BINT(BgL_auxz00_7397);} } 
}



/* exptbx */
BGL_EXPORTED_DEF obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_174, obj_t BgL_yz00_175)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1373 */
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00:
if(
BXZERO(BgL_yz00_175))
{ /* Ieee/fixnum.scm 1375 */
return (bgl_string_to_bignum( "1", 16 ));}  else 
{ /* Ieee/fixnum.scm 1375 */
if(
bgl_bignum_even(BgL_yz00_175))
{ 
obj_t BgL_yz00_7424;obj_t BgL_xz00_7422;
BgL_xz00_7422 = 
bgl_bignum_mul(BgL_xz00_174, BgL_xz00_174); 
BgL_yz00_7424 = 
bgl_bignum_quotient(BgL_yz00_175, (bgl_string_to_bignum( "2", 16 ))); 
BgL_yz00_175 = BgL_yz00_7424; 
BgL_xz00_174 = BgL_xz00_7422; 
goto BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00;}  else 
{ /* Ieee/fixnum.scm 1377 */
return 
bgl_bignum_mul(BgL_xz00_174, 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_174, 
bgl_bignum_sub(BgL_yz00_175, (bgl_string_to_bignum( "1", 16 )))));} } } 
}



/* _exptbx */
obj_t BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3187, obj_t BgL_xz00_3188, obj_t BgL_yz00_3189)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1373 */
{ /* Ieee/fixnum.scm 1375 */
obj_t BgL_auxz00_7436;obj_t BgL_auxz00_7429;
if(
BIGNUMP(BgL_yz00_3189))
{ /* Ieee/fixnum.scm 1375 */
BgL_auxz00_7436 = BgL_yz00_3189
; }  else 
{ 
obj_t BgL_auxz00_7439;
BgL_auxz00_7439 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)61330)), BGl_string2837z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3189); 
FAILURE(BgL_auxz00_7439,BFALSE,BFALSE);} 
if(
BIGNUMP(BgL_xz00_3188))
{ /* Ieee/fixnum.scm 1375 */
BgL_auxz00_7429 = BgL_xz00_3188
; }  else 
{ 
obj_t BgL_auxz00_7432;
BgL_auxz00_7432 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)61330)), BGl_string2837z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3188); 
FAILURE(BgL_auxz00_7432,BFALSE,BFALSE);} 
return 
BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7429, BgL_auxz00_7436);} } 
}



/* _fixnum->string */
obj_t BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_179, obj_t BgL_optz00_178)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1399 */
{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_g1178z00_1039;
BgL_g1178z00_1039 = 
VECTOR_REF(BgL_optz00_178,
(int)(((long)0))); 
{ 

{ /* Ieee/fixnum.scm 1399 */
int BgL_aux1180z00_1041;
BgL_aux1180z00_1041 = 
VECTOR_LENGTH(BgL_optz00_178); 
switch( 
(long)(BgL_aux1180z00_1041)) { case ((long)1) : 

{ /* Ieee/fixnum.scm 1399 */

{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_arg1657z00_1044;
BgL_arg1657z00_1044 = 
VECTOR_REF(BgL_optz00_178,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1399 */
long BgL_auxz00_7449;
{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_auxz00_7450;
if(
INTEGERP(BgL_arg1657z00_1044))
{ /* Ieee/fixnum.scm 1399 */
BgL_auxz00_7450 = BgL_arg1657z00_1044
; }  else 
{ 
obj_t BgL_auxz00_7453;
BgL_auxz00_7453 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62281)), BGl_string2841z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1657z00_1044); 
FAILURE(BgL_auxz00_7453,BFALSE,BFALSE);} 
BgL_auxz00_7449 = 
(long)CINT(BgL_auxz00_7450); } 
return 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7449, ((long)10));} } } break;case ((long)2) : 

{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_radixz00_1045;
BgL_radixz00_1045 = 
VECTOR_REF(BgL_optz00_178,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1399 */

{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_arg1659z00_1046;
BgL_arg1659z00_1046 = 
VECTOR_REF(BgL_optz00_178,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1399 */
long BgL_auxz00_7472;long BgL_auxz00_7463;
{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_auxz00_7473;
if(
INTEGERP(BgL_radixz00_1045))
{ /* Ieee/fixnum.scm 1399 */
BgL_auxz00_7473 = BgL_radixz00_1045
; }  else 
{ 
obj_t BgL_auxz00_7476;
BgL_auxz00_7476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62281)), BGl_string2841z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1045); 
FAILURE(BgL_auxz00_7476,BFALSE,BFALSE);} 
BgL_auxz00_7472 = 
(long)CINT(BgL_auxz00_7473); } 
{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_auxz00_7464;
if(
INTEGERP(BgL_arg1659z00_1046))
{ /* Ieee/fixnum.scm 1399 */
BgL_auxz00_7464 = BgL_arg1659z00_1046
; }  else 
{ 
obj_t BgL_auxz00_7467;
BgL_auxz00_7467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62281)), BGl_string2841z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1659z00_1046); 
FAILURE(BgL_auxz00_7467,BFALSE,BFALSE);} 
BgL_auxz00_7463 = 
(long)CINT(BgL_auxz00_7464); } 
return 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7463, BgL_auxz00_7472);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1399 */
obj_t BgL_arg1660z00_1047;int BgL_arg1663z00_1049;
BgL_arg1660z00_1047 = BGl_symbol2838z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1663z00_1049 = 
VECTOR_LENGTH(BgL_optz00_178); 
return 
BGl_errorz00zz__errorz00(BgL_arg1660z00_1047, BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1663z00_1049));} } } } } } 
}



/* fixnum->string */
BGL_EXPORTED_DEF obj_t BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_176, long BgL_radixz00_177)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1399 */
switch( BgL_radixz00_177) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

return 
integer_to_string(BgL_xz00_176, BgL_radixz00_177);break;
default: 
{ /* Ieee/fixnum.scm 1400 */
obj_t BgL_aux2594z00_3830;
BgL_aux2594z00_3830 = 
BGl_errorz00zz__errorz00(BGl_string2839z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_radixz00_177)); 
if(
STRINGP(BgL_aux2594z00_3830))
{ /* Ieee/fixnum.scm 1400 */
return BgL_aux2594z00_3830;}  else 
{ 
obj_t BgL_auxz00_7492;
BgL_auxz00_7492 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62339)), BGl_string2839z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2594z00_3830); 
FAILURE(BgL_auxz00_7492,BFALSE,BFALSE);} } } } 
}



/* _integer->string */
obj_t BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_183, obj_t BgL_optz00_182)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1402 */
{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_g1181z00_1054;
BgL_g1181z00_1054 = 
VECTOR_REF(BgL_optz00_182,
(int)(((long)0))); 
{ 

{ /* Ieee/fixnum.scm 1402 */
int BgL_aux1183z00_1056;
BgL_aux1183z00_1056 = 
VECTOR_LENGTH(BgL_optz00_182); 
switch( 
(long)(BgL_aux1183z00_1056)) { case ((long)1) : 

{ /* Ieee/fixnum.scm 1402 */

{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_arg1666z00_1059;
BgL_arg1666z00_1059 = 
VECTOR_REF(BgL_optz00_182,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1402 */
long BgL_xz00_4084;
{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_auxz00_7502;
if(
INTEGERP(BgL_arg1666z00_1059))
{ /* Ieee/fixnum.scm 1402 */
BgL_auxz00_7502 = BgL_arg1666z00_1059
; }  else 
{ 
obj_t BgL_auxz00_7505;
BgL_auxz00_7505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62377)), BGl_string2846z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1666z00_1059); 
FAILURE(BgL_auxz00_7505,BFALSE,BFALSE);} 
BgL_xz00_4084 = 
(long)CINT(BgL_auxz00_7502); } 
return 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_4084, ((long)10));} } } break;case ((long)2) : 

{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_radixz00_1060;
BgL_radixz00_1060 = 
VECTOR_REF(BgL_optz00_182,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1402 */

{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_arg1667z00_1061;
BgL_arg1667z00_1061 = 
VECTOR_REF(BgL_optz00_182,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1402 */
long BgL_xz00_4086;long BgL_radixz00_4087;
{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_auxz00_7515;
if(
INTEGERP(BgL_arg1667z00_1061))
{ /* Ieee/fixnum.scm 1402 */
BgL_auxz00_7515 = BgL_arg1667z00_1061
; }  else 
{ 
obj_t BgL_auxz00_7518;
BgL_auxz00_7518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62377)), BGl_string2846z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1667z00_1061); 
FAILURE(BgL_auxz00_7518,BFALSE,BFALSE);} 
BgL_xz00_4086 = 
(long)CINT(BgL_auxz00_7515); } 
{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_auxz00_7523;
if(
INTEGERP(BgL_radixz00_1060))
{ /* Ieee/fixnum.scm 1402 */
BgL_auxz00_7523 = BgL_radixz00_1060
; }  else 
{ 
obj_t BgL_auxz00_7526;
BgL_auxz00_7526 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62377)), BGl_string2846z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1060); 
FAILURE(BgL_auxz00_7526,BFALSE,BFALSE);} 
BgL_radixz00_4087 = 
(long)CINT(BgL_auxz00_7523); } 
return 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_4086, BgL_radixz00_4087);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1402 */
obj_t BgL_arg1668z00_1062;int BgL_arg1670z00_1064;
BgL_arg1668z00_1062 = BGl_symbol2844z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1670z00_1064 = 
VECTOR_LENGTH(BgL_optz00_182); 
return 
BGl_errorz00zz__errorz00(BgL_arg1668z00_1062, BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1670z00_1064));} } } } } } 
}



/* integer->string */
BGL_EXPORTED_DEF obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_180, long BgL_radixz00_181)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1402 */
return 
BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_180, BgL_radixz00_181);} 
}



/* _integer->string/padding */
obj_t BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_188, obj_t BgL_optz00_187)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1418 */
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_g1184z00_1071;obj_t BgL_g1185z00_1072;
BgL_g1184z00_1071 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)0))); 
BgL_g1185z00_1072 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)1))); 
{ 

{ /* Ieee/fixnum.scm 1418 */
int BgL_aux1187z00_1074;
BgL_aux1187z00_1074 = 
VECTOR_LENGTH(BgL_optz00_187); 
switch( 
(long)(BgL_aux1187z00_1074)) { case ((long)2) : 

{ /* Ieee/fixnum.scm 1418 */

{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_arg1678z00_1077;obj_t BgL_arg1680z00_1078;
BgL_arg1678z00_1077 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)0))); 
BgL_arg1680z00_1078 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1418 */
long BgL_auxz00_7556;long BgL_auxz00_7547;
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_auxz00_7557;
if(
INTEGERP(BgL_arg1680z00_1078))
{ /* Ieee/fixnum.scm 1418 */
BgL_auxz00_7557 = BgL_arg1680z00_1078
; }  else 
{ 
obj_t BgL_auxz00_7560;
BgL_auxz00_7560 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62930)), BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1680z00_1078); 
FAILURE(BgL_auxz00_7560,BFALSE,BFALSE);} 
BgL_auxz00_7556 = 
(long)CINT(BgL_auxz00_7557); } 
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_auxz00_7548;
if(
INTEGERP(BgL_arg1678z00_1077))
{ /* Ieee/fixnum.scm 1418 */
BgL_auxz00_7548 = BgL_arg1678z00_1077
; }  else 
{ 
obj_t BgL_auxz00_7551;
BgL_auxz00_7551 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62930)), BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1678z00_1077); 
FAILURE(BgL_auxz00_7551,BFALSE,BFALSE);} 
BgL_auxz00_7547 = 
(long)CINT(BgL_auxz00_7548); } 
return 
BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7547, BgL_auxz00_7556, ((long)10));} } } break;case ((long)3) : 

{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_radixz00_1079;
BgL_radixz00_1079 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)2))); 
{ /* Ieee/fixnum.scm 1418 */

{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_arg1684z00_1080;obj_t BgL_arg1685z00_1081;
BgL_arg1684z00_1080 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)0))); 
BgL_arg1685z00_1081 = 
VECTOR_REF(BgL_optz00_187,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1418 */
long BgL_auxz00_7590;long BgL_auxz00_7581;long BgL_auxz00_7572;
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_auxz00_7591;
if(
INTEGERP(BgL_radixz00_1079))
{ /* Ieee/fixnum.scm 1418 */
BgL_auxz00_7591 = BgL_radixz00_1079
; }  else 
{ 
obj_t BgL_auxz00_7594;
BgL_auxz00_7594 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62930)), BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1079); 
FAILURE(BgL_auxz00_7594,BFALSE,BFALSE);} 
BgL_auxz00_7590 = 
(long)CINT(BgL_auxz00_7591); } 
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_auxz00_7582;
if(
INTEGERP(BgL_arg1685z00_1081))
{ /* Ieee/fixnum.scm 1418 */
BgL_auxz00_7582 = BgL_arg1685z00_1081
; }  else 
{ 
obj_t BgL_auxz00_7585;
BgL_auxz00_7585 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62930)), BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1685z00_1081); 
FAILURE(BgL_auxz00_7585,BFALSE,BFALSE);} 
BgL_auxz00_7581 = 
(long)CINT(BgL_auxz00_7582); } 
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_auxz00_7573;
if(
INTEGERP(BgL_arg1684z00_1080))
{ /* Ieee/fixnum.scm 1418 */
BgL_auxz00_7573 = BgL_arg1684z00_1080
; }  else 
{ 
obj_t BgL_auxz00_7576;
BgL_auxz00_7576 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)62930)), BGl_string2850z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1684z00_1080); 
FAILURE(BgL_auxz00_7576,BFALSE,BFALSE);} 
BgL_auxz00_7572 = 
(long)CINT(BgL_auxz00_7573); } 
return 
BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7572, BgL_auxz00_7581, BgL_auxz00_7590);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1418 */
obj_t BgL_arg1688z00_1082;int BgL_arg1690z00_1084;
BgL_arg1688z00_1082 = BGl_symbol2847z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1690z00_1084 = 
VECTOR_LENGTH(BgL_optz00_187); 
return 
BGl_errorz00zz__errorz00(BgL_arg1688z00_1082, BGl_string2849z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1690z00_1084));} } } } } } 
}



/* integer->string/padding */
BGL_EXPORTED_DEF obj_t BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_184, long BgL_paddingz00_185, long BgL_radixz00_186)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1418 */
switch( BgL_radixz00_186) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

return 
integer_to_string_padding(BgL_xz00_184, BgL_paddingz00_185, BgL_radixz00_186);break;
default: 
{ /* Ieee/fixnum.scm 1419 */
obj_t BgL_aux2612z00_3848;
BgL_aux2612z00_3848 = 
BGl_errorz00zz__errorz00(BGl_string2848z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_radixz00_186)); 
if(
STRINGP(BgL_aux2612z00_3848))
{ /* Ieee/fixnum.scm 1419 */
return BgL_aux2612z00_3848;}  else 
{ 
obj_t BgL_auxz00_7610;
BgL_auxz00_7610 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)63005)), BGl_string2848z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2612z00_3848); 
FAILURE(BgL_auxz00_7610,BFALSE,BFALSE);} } } } 
}



/* _unsigned->string */
obj_t BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_192, obj_t BgL_optz00_191)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1428 */
{ /* Ieee/fixnum.scm 1428 */
obj_t BgL_g1188z00_1088;
BgL_g1188z00_1088 = 
VECTOR_REF(BgL_optz00_191,
(int)(((long)0))); 
{ 

{ /* Ieee/fixnum.scm 1428 */
int BgL_aux1190z00_1090;
BgL_aux1190z00_1090 = 
VECTOR_LENGTH(BgL_optz00_191); 
switch( 
(long)(BgL_aux1190z00_1090)) { case ((long)1) : 

{ /* Ieee/fixnum.scm 1428 */

return 
BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
VECTOR_REF(BgL_optz00_191,
(int)(((long)0))), ((long)16));} break;case ((long)2) : 

{ /* Ieee/fixnum.scm 1428 */
obj_t BgL_radixz00_1094;
BgL_radixz00_1094 = 
VECTOR_REF(BgL_optz00_191,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1428 */

{ /* Ieee/fixnum.scm 1428 */
obj_t BgL_arg1694z00_1095;
BgL_arg1694z00_1095 = 
VECTOR_REF(BgL_optz00_191,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1428 */
long BgL_auxz00_7625;
{ /* Ieee/fixnum.scm 1428 */
obj_t BgL_auxz00_7626;
if(
INTEGERP(BgL_radixz00_1094))
{ /* Ieee/fixnum.scm 1428 */
BgL_auxz00_7626 = BgL_radixz00_1094
; }  else 
{ 
obj_t BgL_auxz00_7629;
BgL_auxz00_7629 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)63391)), BGl_string2853z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1094); 
FAILURE(BgL_auxz00_7629,BFALSE,BFALSE);} 
BgL_auxz00_7625 = 
(long)CINT(BgL_auxz00_7626); } 
return 
BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_arg1694z00_1095, BgL_auxz00_7625);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1428 */
obj_t BgL_arg1695z00_1096;int BgL_arg1697z00_1098;
BgL_arg1695z00_1096 = BGl_symbol2851z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1697z00_1098 = 
VECTOR_LENGTH(BgL_optz00_191); 
return 
BGl_errorz00zz__errorz00(BgL_arg1695z00_1096, BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1697z00_1098));} } } } } } 
}



/* unsigned->string */
BGL_EXPORTED_DEF obj_t BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_189, long BgL_radixz00_190)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1428 */
switch( BgL_radixz00_190) { case ((long)2) : 
case ((long)8) : 
case ((long)16) : 

if(
INTEGERP(BgL_xz00_189))
{ /* Ieee/fixnum.scm 1432 */
return 
unsigned_to_string(
(long)CINT(BgL_xz00_189), BgL_radixz00_190);}  else 
{ /* Ieee/fixnum.scm 1432 */
if(
ELONGP(BgL_xz00_189))
{ /* Ieee/fixnum.scm 1434 */
return 
unsigned_to_string(
BELONG_TO_LONG(BgL_xz00_189), BgL_radixz00_190);}  else 
{ /* Ieee/fixnum.scm 1434 */
if(
LLONGP(BgL_xz00_189))
{ /* Ieee/fixnum.scm 1436 */
return 
ullong_to_string(
BLLONG_TO_LLONG(BgL_xz00_189), BgL_radixz00_190);}  else 
{ /* Ieee/fixnum.scm 1439 */
obj_t BgL_aux2616z00_3852;
BgL_aux2616z00_3852 = 
BGl_errorz00zz__errorz00(BGl_string2852z00zz__r4_numbers_6_5_fixnumz00, BGl_string2752z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_189); 
if(
STRINGP(BgL_aux2616z00_3852))
{ /* Ieee/fixnum.scm 1439 */
return BgL_aux2616z00_3852;}  else 
{ 
obj_t BgL_auxz00_7655;
BgL_auxz00_7655 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)63646)), BGl_string2852z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2616z00_3852); 
FAILURE(BgL_auxz00_7655,BFALSE,BFALSE);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1429 */
obj_t BgL_aux2618z00_3854;
BgL_aux2618z00_3854 = 
BGl_errorz00zz__errorz00(BGl_string2852z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_radixz00_190)); 
if(
STRINGP(BgL_aux2618z00_3854))
{ /* Ieee/fixnum.scm 1429 */
return BgL_aux2618z00_3854;}  else 
{ 
obj_t BgL_auxz00_7663;
BgL_auxz00_7663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)63451)), BGl_string2852z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2618z00_3854); 
FAILURE(BgL_auxz00_7663,BFALSE,BFALSE);} } } } 
}



/* elong->string */
BGL_EXPORTED_DEF obj_t BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_193, obj_t BgL_radixz00_194)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1446 */
{ /* Ieee/fixnum.scm 1447 */
obj_t BgL_radix1143z00_1105;
if(
NULLP(BgL_radixz00_194))
{ /* Ieee/fixnum.scm 1447 */
BgL_radix1143z00_1105 = 
BINT(((long)10)); }  else 
{ /* Ieee/fixnum.scm 1447 */
obj_t BgL_pairz00_2683;
if(
PAIRP(BgL_radixz00_194))
{ /* Ieee/fixnum.scm 1447 */
BgL_pairz00_2683 = BgL_radixz00_194; }  else 
{ 
obj_t BgL_auxz00_7673;
BgL_auxz00_7673 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64080)), BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_194); 
FAILURE(BgL_auxz00_7673,BFALSE,BFALSE);} 
BgL_radix1143z00_1105 = 
CAR(BgL_pairz00_2683); } 
if(
INTEGERP(BgL_radix1143z00_1105))
{ /* Ieee/fixnum.scm 1447 */
switch( 
(long)CINT(BgL_radix1143z00_1105)) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

return 
integer_to_string(BgL_xz00_193, 
(long)CINT(BgL_radix1143z00_1105));break;
default: 
{ /* Ieee/fixnum.scm 1447 */
obj_t BgL_aux2624z00_3860;
BgL_aux2624z00_3860 = 
BGl_errorz00zz__errorz00(BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_radix1143z00_1105); 
if(
STRINGP(BgL_aux2624z00_3860))
{ /* Ieee/fixnum.scm 1447 */
return BgL_aux2624z00_3860;}  else 
{ 
obj_t BgL_auxz00_7685;
BgL_auxz00_7685 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64026)), BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2624z00_3860); 
FAILURE(BgL_auxz00_7685,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/fixnum.scm 1447 */
obj_t BgL_aux2626z00_3862;
BgL_aux2626z00_3862 = 
BGl_errorz00zz__errorz00(BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_radix1143z00_1105); 
if(
STRINGP(BgL_aux2626z00_3862))
{ /* Ieee/fixnum.scm 1447 */
return BgL_aux2626z00_3862;}  else 
{ 
obj_t BgL_auxz00_7694;
BgL_auxz00_7694 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64026)), BGl_string2854z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2626z00_3862); 
FAILURE(BgL_auxz00_7694,BFALSE,BFALSE);} } } } 
}



/* _elong->string */
obj_t BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3190, obj_t BgL_xz00_3191, obj_t BgL_radixz00_3192)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1446 */
{ /* Ieee/fixnum.scm 1447 */
long BgL_auxz00_7698;
{ /* Ieee/fixnum.scm 1447 */
obj_t BgL_auxz00_7699;
if(
ELONGP(BgL_xz00_3191))
{ /* Ieee/fixnum.scm 1447 */
BgL_auxz00_7699 = BgL_xz00_3191
; }  else 
{ 
obj_t BgL_auxz00_7702;
BgL_auxz00_7702 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64026)), BGl_string2855z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3191); 
FAILURE(BgL_auxz00_7702,BFALSE,BFALSE);} 
BgL_auxz00_7698 = 
BELONG_TO_LONG(BgL_auxz00_7699); } 
return 
BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7698, BgL_radixz00_3192);} } 
}



/* llong->string */
BGL_EXPORTED_DEF obj_t BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_195, obj_t BgL_radixz00_196)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1452 */
{ /* Ieee/fixnum.scm 1453 */
obj_t BgL_radix1146z00_1110;
if(
NULLP(BgL_radixz00_196))
{ /* Ieee/fixnum.scm 1453 */
BgL_radix1146z00_1110 = 
BINT(((long)10)); }  else 
{ /* Ieee/fixnum.scm 1453 */
obj_t BgL_pairz00_2685;
if(
PAIRP(BgL_radixz00_196))
{ /* Ieee/fixnum.scm 1453 */
BgL_pairz00_2685 = BgL_radixz00_196; }  else 
{ 
obj_t BgL_auxz00_7713;
BgL_auxz00_7713 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64403)), BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_196); 
FAILURE(BgL_auxz00_7713,BFALSE,BFALSE);} 
BgL_radix1146z00_1110 = 
CAR(BgL_pairz00_2685); } 
if(
INTEGERP(BgL_radix1146z00_1110))
{ /* Ieee/fixnum.scm 1453 */
switch( 
(long)CINT(BgL_radix1146z00_1110)) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

return 
llong_to_string(BgL_xz00_195, 
(long)CINT(BgL_radix1146z00_1110));break;
default: 
{ /* Ieee/fixnum.scm 1453 */
obj_t BgL_aux2634z00_3870;
BgL_aux2634z00_3870 = 
BGl_errorz00zz__errorz00(BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_radix1146z00_1110); 
if(
STRINGP(BgL_aux2634z00_3870))
{ /* Ieee/fixnum.scm 1453 */
return BgL_aux2634z00_3870;}  else 
{ 
obj_t BgL_auxz00_7725;
BgL_auxz00_7725 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64349)), BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2634z00_3870); 
FAILURE(BgL_auxz00_7725,BFALSE,BFALSE);} } } }  else 
{ /* Ieee/fixnum.scm 1453 */
obj_t BgL_aux2636z00_3872;
BgL_aux2636z00_3872 = 
BGl_errorz00zz__errorz00(BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_radix1146z00_1110); 
if(
STRINGP(BgL_aux2636z00_3872))
{ /* Ieee/fixnum.scm 1453 */
return BgL_aux2636z00_3872;}  else 
{ 
obj_t BgL_auxz00_7734;
BgL_auxz00_7734 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64349)), BGl_string2856z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2636z00_3872); 
FAILURE(BgL_auxz00_7734,BFALSE,BFALSE);} } } } 
}



/* _llong->string */
obj_t BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3193, obj_t BgL_xz00_3194, obj_t BgL_radixz00_3195)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1452 */
{ /* Ieee/fixnum.scm 1453 */
BGL_LONGLONG_T BgL_auxz00_7738;
{ /* Ieee/fixnum.scm 1453 */
obj_t BgL_auxz00_7739;
if(
LLONGP(BgL_xz00_3194))
{ /* Ieee/fixnum.scm 1453 */
BgL_auxz00_7739 = BgL_xz00_3194
; }  else 
{ 
obj_t BgL_auxz00_7742;
BgL_auxz00_7742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64349)), BGl_string2857z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3194); 
FAILURE(BgL_auxz00_7742,BFALSE,BFALSE);} 
BgL_auxz00_7738 = 
BLLONG_TO_LLONG(BgL_auxz00_7739); } 
return 
BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7738, BgL_radixz00_3195);} } 
}



/* _bignum->string */
obj_t BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_200, obj_t BgL_optz00_199)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1458 */
{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_g1191z00_1115;
BgL_g1191z00_1115 = 
VECTOR_REF(BgL_optz00_199,
(int)(((long)0))); 
{ 

{ /* Ieee/fixnum.scm 1458 */
int BgL_aux1193z00_1117;
BgL_aux1193z00_1117 = 
VECTOR_LENGTH(BgL_optz00_199); 
switch( 
(long)(BgL_aux1193z00_1117)) { case ((long)1) : 

{ /* Ieee/fixnum.scm 1458 */

{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_arg1707z00_1120;
BgL_arg1707z00_1120 = 
VECTOR_REF(BgL_optz00_199,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_auxz00_7753;
if(
BIGNUMP(BgL_arg1707z00_1120))
{ /* Ieee/fixnum.scm 1458 */
BgL_auxz00_7753 = BgL_arg1707z00_1120
; }  else 
{ 
obj_t BgL_auxz00_7756;
BgL_auxz00_7756 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64636)), BGl_string2860z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1707z00_1120); 
FAILURE(BgL_auxz00_7756,BFALSE,BFALSE);} 
return 
BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7753, ((long)10));} } } break;case ((long)2) : 

{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_radixz00_1121;
BgL_radixz00_1121 = 
VECTOR_REF(BgL_optz00_199,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1458 */

{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_arg1708z00_1122;
BgL_arg1708z00_1122 = 
VECTOR_REF(BgL_optz00_199,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1458 */
long BgL_auxz00_7772;obj_t BgL_auxz00_7765;
{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_auxz00_7773;
if(
INTEGERP(BgL_radixz00_1121))
{ /* Ieee/fixnum.scm 1458 */
BgL_auxz00_7773 = BgL_radixz00_1121
; }  else 
{ 
obj_t BgL_auxz00_7776;
BgL_auxz00_7776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64636)), BGl_string2860z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1121); 
FAILURE(BgL_auxz00_7776,BFALSE,BFALSE);} 
BgL_auxz00_7772 = 
(long)CINT(BgL_auxz00_7773); } 
if(
BIGNUMP(BgL_arg1708z00_1122))
{ /* Ieee/fixnum.scm 1458 */
BgL_auxz00_7765 = BgL_arg1708z00_1122
; }  else 
{ 
obj_t BgL_auxz00_7768;
BgL_auxz00_7768 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64636)), BGl_string2860z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1708z00_1122); 
FAILURE(BgL_auxz00_7768,BFALSE,BFALSE);} 
return 
BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7765, BgL_auxz00_7772);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1458 */
obj_t BgL_arg1709z00_1123;int BgL_arg1711z00_1125;
BgL_arg1709z00_1123 = BGl_symbol2858z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1711z00_1125 = 
VECTOR_LENGTH(BgL_optz00_199); 
return 
BGl_errorz00zz__errorz00(BgL_arg1709z00_1123, BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1711z00_1125));} } } } } } 
}



/* bignum->string */
BGL_EXPORTED_DEF obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_197, long BgL_radixz00_198)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1458 */
switch( BgL_radixz00_198) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

return 
bgl_bignum_to_string(BgL_xz00_197, BgL_radixz00_198);break;
default: 
{ /* Ieee/fixnum.scm 1459 */
obj_t BgL_aux2646z00_3882;
BgL_aux2646z00_3882 = 
BGl_errorz00zz__errorz00(BGl_string2859z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_radixz00_198)); 
if(
STRINGP(BgL_aux2646z00_3882))
{ /* Ieee/fixnum.scm 1459 */
return BgL_aux2646z00_3882;}  else 
{ 
obj_t BgL_auxz00_7792;
BgL_auxz00_7792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)64693)), BGl_string2859z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2646z00_3882); 
FAILURE(BgL_auxz00_7792,BFALSE,BFALSE);} } } } 
}



/* bignum->octet-string */
BGL_EXPORTED_DEF obj_t BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_201)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1464 */
{ 
obj_t BgL_bz00_1157;long BgL_xz00_1150;long BgL_yz00_1151;
{ /* Ieee/fixnum.scm 1496 */
long BgL_lenz00_1133;
BgL_bz00_1157 = BgL_xz00_201; 
{ 
obj_t BgL_bz00_1160;long BgL_resz00_1161;
BgL_bz00_1160 = BgL_bz00_1157; 
BgL_resz00_1161 = ((long)0); 
BgL_zc3anonymousza31735ze3z83_1162:
{ /* Ieee/fixnum.scm 1476 */
obj_t BgL_dividedz00_1163;
BgL_dividedz00_1163 = 
bgl_bignum_quotient(BgL_bz00_1160, (bgl_string_to_bignum( "100", 16 ))); 
if(
BXZERO(BgL_bz00_1160))
{ /* Ieee/fixnum.scm 1478 */
BgL_xz00_1150 = BgL_resz00_1161; }  else 
{ /* Ieee/fixnum.scm 1478 */
if(
BXZERO(BgL_dividedz00_1163))
{ /* Ieee/fixnum.scm 1480 */
long BgL_xz00_1166;
BgL_xz00_1166 = 
bgl_bignum_to_long(BgL_bz00_1160); 
if(
(BgL_xz00_1166<((long)2)))
{ /* Ieee/fixnum.scm 1482 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)1)); }  else 
{ /* Ieee/fixnum.scm 1482 */
if(
(BgL_xz00_1166<((long)4)))
{ /* Ieee/fixnum.scm 1483 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)2)); }  else 
{ /* Ieee/fixnum.scm 1483 */
if(
(BgL_xz00_1166<((long)8)))
{ /* Ieee/fixnum.scm 1484 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)3)); }  else 
{ /* Ieee/fixnum.scm 1484 */
if(
(BgL_xz00_1166<((long)16)))
{ /* Ieee/fixnum.scm 1485 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)4)); }  else 
{ /* Ieee/fixnum.scm 1485 */
if(
(BgL_xz00_1166<((long)32)))
{ /* Ieee/fixnum.scm 1486 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)5)); }  else 
{ /* Ieee/fixnum.scm 1486 */
if(
(BgL_xz00_1166<((long)64)))
{ /* Ieee/fixnum.scm 1487 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)6)); }  else 
{ /* Ieee/fixnum.scm 1487 */
if(
(BgL_xz00_1166<((long)128)))
{ /* Ieee/fixnum.scm 1488 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)7)); }  else 
{ /* Ieee/fixnum.scm 1488 */
BgL_xz00_1150 = 
(BgL_resz00_1161+((long)8)); } } } } } } } }  else 
{ 
long BgL_resz00_7834;obj_t BgL_bz00_7833;
BgL_bz00_7833 = BgL_dividedz00_1163; 
BgL_resz00_7834 = 
(BgL_resz00_1161+((long)8)); 
BgL_resz00_1161 = BgL_resz00_7834; 
BgL_bz00_1160 = BgL_bz00_7833; 
goto BgL_zc3anonymousza31735ze3z83_1162;} } } } 
BgL_yz00_1151 = ((long)8); 
{ /* Ieee/fixnum.scm 1466 */
long BgL_qz00_1153;long BgL_rz00_1154;
BgL_qz00_1153 = 
(BgL_xz00_1150/BgL_yz00_1151); 
BgL_rz00_1154 = 
(BgL_xz00_1150%BgL_yz00_1151); 
if(
(BgL_rz00_1154==((long)0)))
{ /* Ieee/fixnum.scm 1469 */
BgL_lenz00_1133 = BgL_qz00_1153; }  else 
{ /* Ieee/fixnum.scm 1469 */
if(
(BgL_rz00_1154>((long)0)))
{ /* Ieee/fixnum.scm 1470 */
BgL_lenz00_1133 = 
(BgL_qz00_1153+((long)1)); }  else 
{ /* Ieee/fixnum.scm 1470 */
BgL_lenz00_1133 = 
(BgL_qz00_1153-((long)1)); } } } 
{ /* Ieee/fixnum.scm 1496 */
obj_t BgL_bufferz00_1134;
BgL_bufferz00_1134 = 
make_string(BgL_lenz00_1133, ((unsigned char)' ')); 
{ /* Ieee/fixnum.scm 1497 */

{ /* Ieee/fixnum.scm 1498 */
long BgL_g1153z00_1135;
BgL_g1153z00_1135 = 
(BgL_lenz00_1133-((long)1)); 
{ 
obj_t BgL_xz00_1137;long BgL_iz00_1138;
{ /* Ieee/fixnum.scm 1498 */
obj_t BgL_aux2652z00_3888;
BgL_xz00_1137 = BgL_xz00_201; 
BgL_iz00_1138 = BgL_g1153z00_1135; 
BgL_zc3anonymousza31713ze3z83_1139:
{ /* Ieee/fixnum.scm 1501 */
bool_t BgL_testz00_7838;
if(
(BgL_iz00_1138<((long)0)))
{ /* Ieee/fixnum.scm 1501 */
BgL_testz00_7838 = 
BXZERO(BgL_xz00_1137)
; }  else 
{ /* Ieee/fixnum.scm 1501 */
BgL_testz00_7838 = ((bool_t)0)
; } 
if(BgL_testz00_7838)
{ /* Ieee/fixnum.scm 1501 */
BgL_aux2652z00_3888 = BgL_bufferz00_1134; }  else 
{ /* Ieee/fixnum.scm 1501 */
if(
(BgL_iz00_1138<((long)0)))
{ /* Ieee/fixnum.scm 1504 */
BgL_aux2652z00_3888 = 
BGl_errorz00zz__errorz00(BGl_string2861z00zz__r4_numbers_6_5_fixnumz00, BGl_string2862z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_1137); }  else 
{ /* Ieee/fixnum.scm 1504 */
{ /* Ieee/fixnum.scm 1507 */
unsigned char BgL_arg1718z00_1142;
{ /* Ieee/fixnum.scm 1507 */
unsigned char BgL_res1977z00_2707;
{ /* Ieee/fixnum.scm 1507 */
long BgL_arg1747z00_2701;
BgL_arg1747z00_2701 = 
bgl_bignum_to_long(
bgl_bignum_remainder(BgL_xz00_1137, (bgl_string_to_bignum( "100", 16 )))); 
BgL_res1977z00_2707 = 
(char)(
(BgL_arg1747z00_2701)); } 
BgL_arg1718z00_1142 = BgL_res1977z00_2707; } 
{ /* Ieee/fixnum.scm 1507 */
unsigned char BgL_charz00_2710;
BgL_charz00_2710 = 
(unsigned char)(BgL_arg1718z00_1142); 
{ /* Ieee/fixnum.scm 1507 */
long BgL_l1984z00_3220;
BgL_l1984z00_3220 = 
STRING_LENGTH(BgL_bufferz00_1134); 
if(
BOUND_CHECK(BgL_iz00_1138, BgL_l1984z00_3220))
{ /* Ieee/fixnum.scm 1507 */
STRING_SET(BgL_bufferz00_1134, BgL_iz00_1138, BgL_charz00_2710); }  else 
{ 
obj_t BgL_auxz00_7854;
BgL_auxz00_7854 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66125)), BGl_string2863z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_iz00_1138), BgL_bufferz00_1134); 
FAILURE(BgL_auxz00_7854,BFALSE,BFALSE);} } } } 
{ 
long BgL_iz00_7861;obj_t BgL_xz00_7859;
BgL_xz00_7859 = 
bgl_bignum_quotient(BgL_xz00_1137, (bgl_string_to_bignum( "100", 16 ))); 
BgL_iz00_7861 = 
(BgL_iz00_1138-((long)1)); 
BgL_iz00_1138 = BgL_iz00_7861; 
BgL_xz00_1137 = BgL_xz00_7859; 
goto BgL_zc3anonymousza31713ze3z83_1139;} } } } 
if(
STRINGP(BgL_aux2652z00_3888))
{ /* Ieee/fixnum.scm 1498 */
return BgL_aux2652z00_3888;}  else 
{ 
obj_t BgL_auxz00_7865;
BgL_auxz00_7865 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)65939)), BGl_string2864z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2652z00_3888); 
FAILURE(BgL_auxz00_7865,BFALSE,BFALSE);} } } } } } } } } 
}



/* _bignum->octet-string */
obj_t BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3196, obj_t BgL_xz00_3197)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1464 */
{ /* Ieee/fixnum.scm 1466 */
obj_t BgL_auxz00_7869;
if(
BIGNUMP(BgL_xz00_3197))
{ /* Ieee/fixnum.scm 1466 */
BgL_auxz00_7869 = BgL_xz00_3197
; }  else 
{ 
obj_t BgL_auxz00_7872;
BgL_auxz00_7872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)65020)), BGl_string2865z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3197); 
FAILURE(BgL_auxz00_7872,BFALSE,BFALSE);} 
return 
BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7869);} } 
}



/* octet-string->bignum */
BGL_EXPORTED_DEF obj_t BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_strz00_202)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1513 */
{ 
long BgL_iz00_1184;obj_t BgL_resz00_1185;
BgL_iz00_1184 = ((long)0); 
BgL_resz00_1185 = (bgl_string_to_bignum( "0", 16 )); 
BgL_zc3anonymousza31749ze3z83_1186:
if(
(BgL_iz00_1184==
STRING_LENGTH(BgL_strz00_202)))
{ /* Ieee/fixnum.scm 1516 */
return BgL_resz00_1185;}  else 
{ 
obj_t BgL_resz00_7882;long BgL_iz00_7880;
BgL_iz00_7880 = 
(BgL_iz00_1184+((long)1)); 
{ /* Ieee/fixnum.scm 1519 */
obj_t BgL_auxz00_7883;
{ /* Ieee/fixnum.scm 1520 */
long BgL_auxz00_7885;
{ /* Ieee/fixnum.scm 1520 */
unsigned char BgL_auxz00_7886;
{ /* Ieee/fixnum.scm 1520 */
long BgL_l1988z00_3224;
BgL_l1988z00_3224 = 
STRING_LENGTH(BgL_strz00_202); 
if(
BOUND_CHECK(BgL_iz00_1184, BgL_l1988z00_3224))
{ /* Ieee/fixnum.scm 1520 */
BgL_auxz00_7886 = 
STRING_REF(BgL_strz00_202, BgL_iz00_1184)
; }  else 
{ 
obj_t BgL_auxz00_7891;
BgL_auxz00_7891 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66631)), BGl_string2866z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_iz00_1184), BgL_strz00_202); 
FAILURE(BgL_auxz00_7891,BFALSE,BFALSE);} } 
BgL_auxz00_7885 = 
(BgL_auxz00_7886); } 
BgL_auxz00_7883 = 
bgl_long_to_bignum(BgL_auxz00_7885); } 
BgL_resz00_7882 = 
bgl_bignum_add(
bgl_bignum_mul(BgL_resz00_1185, (bgl_string_to_bignum( "100", 16 ))), BgL_auxz00_7883); } 
BgL_resz00_1185 = BgL_resz00_7882; 
BgL_iz00_1184 = BgL_iz00_7880; 
goto BgL_zc3anonymousza31749ze3z83_1186;} } } 
}



/* _octet-string->bignum */
obj_t BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3198, obj_t BgL_strz00_3199)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1513 */
{ /* Ieee/fixnum.scm 1516 */
obj_t BgL_auxz00_7899;
if(
STRINGP(BgL_strz00_3199))
{ /* Ieee/fixnum.scm 1516 */
BgL_auxz00_7899 = BgL_strz00_3199
; }  else 
{ 
obj_t BgL_auxz00_7902;
BgL_auxz00_7902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66512)), BGl_string2867z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_strz00_3199); 
FAILURE(BgL_auxz00_7902,BFALSE,BFALSE);} 
return 
BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7899);} } 
}



/* string->integer */
BGL_EXPORTED_DEF long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_stringz00_203, obj_t BgL_radixz00_204)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1526 */
{ /* Ieee/fixnum.scm 1527 */
obj_t BgL_rz00_1196;
if(
NULLP(BgL_radixz00_204))
{ /* Ieee/fixnum.scm 1527 */
BgL_rz00_1196 = 
BINT(((long)10)); }  else 
{ /* Ieee/fixnum.scm 1527 */
obj_t BgL_pairz00_2785;
if(
PAIRP(BgL_radixz00_204))
{ /* Ieee/fixnum.scm 1527 */
BgL_pairz00_2785 = BgL_radixz00_204; }  else 
{ 
obj_t BgL_auxz00_7912;
BgL_auxz00_7912 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66960)), BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_204); 
FAILURE(BgL_auxz00_7912,BFALSE,BFALSE);} 
BgL_rz00_1196 = 
CAR(BgL_pairz00_2785); } 
if(
INTEGERP(BgL_rz00_1196))
{ /* Ieee/fixnum.scm 1528 */
switch( 
(long)CINT(BgL_rz00_1196)) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

{ /* Ieee/fixnum.scm 1530 */
long BgL_auxz00_7921;char * BgL_auxz00_7919;
BgL_auxz00_7921 = 
(long)CINT(BgL_rz00_1196); 
BgL_auxz00_7919 = 
BSTRING_TO_STRING(BgL_stringz00_203); 
return 
strtol(BgL_auxz00_7919, ((long)0), BgL_auxz00_7921);} break;
default: 
{ /* Ieee/fixnum.scm 1528 */
obj_t BgL_auxz00_7924;
{ /* Ieee/fixnum.scm 1528 */
obj_t BgL_aux2662z00_3898;
BgL_aux2662z00_3898 = 
BGl_errorz00zz__errorz00(BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1196); 
if(
INTEGERP(BgL_aux2662z00_3898))
{ /* Ieee/fixnum.scm 1528 */
BgL_auxz00_7924 = BgL_aux2662z00_3898
; }  else 
{ 
obj_t BgL_auxz00_7928;
BgL_auxz00_7928 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66976)), BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2662z00_3898); 
FAILURE(BgL_auxz00_7928,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_7924);} } }  else 
{ /* Ieee/fixnum.scm 1528 */
obj_t BgL_auxz00_7935;
{ /* Ieee/fixnum.scm 1528 */
obj_t BgL_aux2664z00_3900;
BgL_aux2664z00_3900 = 
BGl_errorz00zz__errorz00(BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1196); 
if(
INTEGERP(BgL_aux2664z00_3900))
{ /* Ieee/fixnum.scm 1528 */
BgL_auxz00_7935 = BgL_aux2664z00_3900
; }  else 
{ 
obj_t BgL_auxz00_7939;
BgL_auxz00_7939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66976)), BGl_string2868z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2664z00_3900); 
FAILURE(BgL_auxz00_7939,BFALSE,BFALSE);} } 
return 
(long)CINT(BgL_auxz00_7935);} } } 
}



/* _string->integer */
obj_t BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3200, obj_t BgL_stringz00_3201, obj_t BgL_radixz00_3202)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1526 */
{ /* Ieee/fixnum.scm 1527 */
long BgL_auxz00_7944;
{ /* Ieee/fixnum.scm 1527 */
obj_t BgL_auxz00_7945;
if(
STRINGP(BgL_stringz00_3201))
{ /* Ieee/fixnum.scm 1527 */
BgL_auxz00_7945 = BgL_stringz00_3201
; }  else 
{ 
obj_t BgL_auxz00_7948;
BgL_auxz00_7948 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)66925)), BGl_string2869z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_stringz00_3201); 
FAILURE(BgL_auxz00_7948,BFALSE,BFALSE);} 
BgL_auxz00_7944 = 
BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7945, BgL_radixz00_3202); } 
return 
BINT(BgL_auxz00_7944);} } 
}



/* string->elong */
BGL_EXPORTED_DEF long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_stringz00_205, obj_t BgL_radixz00_206)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1537 */
{ /* Ieee/fixnum.scm 1538 */
obj_t BgL_rz00_1201;
if(
NULLP(BgL_radixz00_206))
{ /* Ieee/fixnum.scm 1538 */
BgL_rz00_1201 = 
BINT(((long)10)); }  else 
{ /* Ieee/fixnum.scm 1538 */
obj_t BgL_pairz00_2787;
if(
PAIRP(BgL_radixz00_206))
{ /* Ieee/fixnum.scm 1538 */
BgL_pairz00_2787 = BgL_radixz00_206; }  else 
{ 
obj_t BgL_auxz00_7959;
BgL_auxz00_7959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67382)), BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_206); 
FAILURE(BgL_auxz00_7959,BFALSE,BFALSE);} 
BgL_rz00_1201 = 
CAR(BgL_pairz00_2787); } 
if(
INTEGERP(BgL_rz00_1201))
{ /* Ieee/fixnum.scm 1539 */
switch( 
(long)CINT(BgL_rz00_1201)) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

{ /* Ieee/fixnum.scm 1541 */
long BgL_auxz00_7968;char * BgL_auxz00_7966;
BgL_auxz00_7968 = 
(long)CINT(BgL_rz00_1201); 
BgL_auxz00_7966 = 
BSTRING_TO_STRING(BgL_stringz00_205); 
return 
strtol(BgL_auxz00_7966, ((long)0), BgL_auxz00_7968);} break;
default: 
{ /* Ieee/fixnum.scm 1539 */
obj_t BgL_auxz00_7971;
{ /* Ieee/fixnum.scm 1539 */
obj_t BgL_aux2672z00_3908;
BgL_aux2672z00_3908 = 
BGl_errorz00zz__errorz00(BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1201); 
if(
ELONGP(BgL_aux2672z00_3908))
{ /* Ieee/fixnum.scm 1539 */
BgL_auxz00_7971 = BgL_aux2672z00_3908
; }  else 
{ 
obj_t BgL_auxz00_7975;
BgL_auxz00_7975 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67398)), BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2672z00_3908); 
FAILURE(BgL_auxz00_7975,BFALSE,BFALSE);} } 
return 
BELONG_TO_LONG(BgL_auxz00_7971);} } }  else 
{ /* Ieee/fixnum.scm 1539 */
obj_t BgL_auxz00_7982;
{ /* Ieee/fixnum.scm 1539 */
obj_t BgL_aux2674z00_3910;
BgL_aux2674z00_3910 = 
BGl_errorz00zz__errorz00(BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1201); 
if(
ELONGP(BgL_aux2674z00_3910))
{ /* Ieee/fixnum.scm 1539 */
BgL_auxz00_7982 = BgL_aux2674z00_3910
; }  else 
{ 
obj_t BgL_auxz00_7986;
BgL_auxz00_7986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67398)), BGl_string2870z00zz__r4_numbers_6_5_fixnumz00, BGl_string2711z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2674z00_3910); 
FAILURE(BgL_auxz00_7986,BFALSE,BFALSE);} } 
return 
BELONG_TO_LONG(BgL_auxz00_7982);} } } 
}



/* _string->elong */
obj_t BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3203, obj_t BgL_stringz00_3204, obj_t BgL_radixz00_3205)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1537 */
{ /* Ieee/fixnum.scm 1538 */
long BgL_auxz00_7991;
{ /* Ieee/fixnum.scm 1538 */
obj_t BgL_auxz00_7992;
if(
STRINGP(BgL_stringz00_3204))
{ /* Ieee/fixnum.scm 1538 */
BgL_auxz00_7992 = BgL_stringz00_3204
; }  else 
{ 
obj_t BgL_auxz00_7995;
BgL_auxz00_7995 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67347)), BGl_string2871z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_stringz00_3204); 
FAILURE(BgL_auxz00_7995,BFALSE,BFALSE);} 
BgL_auxz00_7991 = 
BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_7992, BgL_radixz00_3205); } 
return 
make_belong(BgL_auxz00_7991);} } 
}



/* string->llong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_stringz00_207, obj_t BgL_radixz00_208)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1548 */
{ /* Ieee/fixnum.scm 1549 */
obj_t BgL_rz00_1206;
if(
NULLP(BgL_radixz00_208))
{ /* Ieee/fixnum.scm 1549 */
BgL_rz00_1206 = 
BINT(((long)10)); }  else 
{ /* Ieee/fixnum.scm 1549 */
obj_t BgL_pairz00_2789;
if(
PAIRP(BgL_radixz00_208))
{ /* Ieee/fixnum.scm 1549 */
BgL_pairz00_2789 = BgL_radixz00_208; }  else 
{ 
obj_t BgL_auxz00_8006;
BgL_auxz00_8006 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67803)), BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BGl_string2763z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_208); 
FAILURE(BgL_auxz00_8006,BFALSE,BFALSE);} 
BgL_rz00_1206 = 
CAR(BgL_pairz00_2789); } 
if(
INTEGERP(BgL_rz00_1206))
{ /* Ieee/fixnum.scm 1550 */
switch( 
(long)CINT(BgL_rz00_1206)) { case ((long)2) : 
case ((long)8) : 
case ((long)10) : 
case ((long)16) : 

{ /* Ieee/fixnum.scm 1552 */
long BgL_auxz00_8015;char * BgL_auxz00_8013;
BgL_auxz00_8015 = 
(long)CINT(BgL_rz00_1206); 
BgL_auxz00_8013 = 
BSTRING_TO_STRING(BgL_stringz00_207); 
return 
BGL_STRTOLL(BgL_auxz00_8013, ((long)0), BgL_auxz00_8015);} break;
default: 
{ /* Ieee/fixnum.scm 1550 */
obj_t BgL_auxz00_8018;
{ /* Ieee/fixnum.scm 1550 */
obj_t BgL_aux2682z00_3918;
BgL_aux2682z00_3918 = 
BGl_errorz00zz__errorz00(BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1206); 
if(
LLONGP(BgL_aux2682z00_3918))
{ /* Ieee/fixnum.scm 1550 */
BgL_auxz00_8018 = BgL_aux2682z00_3918
; }  else 
{ 
obj_t BgL_auxz00_8022;
BgL_auxz00_8022 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67819)), BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2682z00_3918); 
FAILURE(BgL_auxz00_8022,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_8018);} } }  else 
{ /* Ieee/fixnum.scm 1550 */
obj_t BgL_auxz00_8029;
{ /* Ieee/fixnum.scm 1550 */
obj_t BgL_aux2684z00_3920;
BgL_aux2684z00_3920 = 
BGl_errorz00zz__errorz00(BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1206); 
if(
LLONGP(BgL_aux2684z00_3920))
{ /* Ieee/fixnum.scm 1550 */
BgL_auxz00_8029 = BgL_aux2684z00_3920
; }  else 
{ 
obj_t BgL_auxz00_8033;
BgL_auxz00_8033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67819)), BGl_string2872z00zz__r4_numbers_6_5_fixnumz00, BGl_string2713z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2684z00_3920); 
FAILURE(BgL_auxz00_8033,BFALSE,BFALSE);} } 
return 
BLLONG_TO_LLONG(BgL_auxz00_8029);} } } 
}



/* _string->llong */
obj_t BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3206, obj_t BgL_stringz00_3207, obj_t BgL_radixz00_3208)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1548 */
{ /* Ieee/fixnum.scm 1549 */
BGL_LONGLONG_T BgL_auxz00_8038;
{ /* Ieee/fixnum.scm 1549 */
obj_t BgL_auxz00_8039;
if(
STRINGP(BgL_stringz00_3207))
{ /* Ieee/fixnum.scm 1549 */
BgL_auxz00_8039 = BgL_stringz00_3207
; }  else 
{ 
obj_t BgL_auxz00_8042;
BgL_auxz00_8042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)67768)), BGl_string2873z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_stringz00_3207); 
FAILURE(BgL_auxz00_8042,BFALSE,BFALSE);} 
BgL_auxz00_8038 = 
BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8039, BgL_radixz00_3208); } 
return 
make_bllong(BgL_auxz00_8038);} } 
}



/* _string->bignum */
obj_t BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_212, obj_t BgL_optz00_211)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1559 */
{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_g1194z00_1211;
BgL_g1194z00_1211 = 
VECTOR_REF(BgL_optz00_211,
(int)(((long)0))); 
{ 

{ /* Ieee/fixnum.scm 1559 */
int BgL_aux1196z00_1213;
BgL_aux1196z00_1213 = 
VECTOR_LENGTH(BgL_optz00_211); 
switch( 
(long)(BgL_aux1196z00_1213)) { case ((long)1) : 

{ /* Ieee/fixnum.scm 1559 */

{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_arg1767z00_1216;
BgL_arg1767z00_1216 = 
VECTOR_REF(BgL_optz00_211,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_auxz00_8053;
if(
STRINGP(BgL_arg1767z00_1216))
{ /* Ieee/fixnum.scm 1559 */
BgL_auxz00_8053 = BgL_arg1767z00_1216
; }  else 
{ 
obj_t BgL_auxz00_8056;
BgL_auxz00_8056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68147)), BGl_string2876z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1767z00_1216); 
FAILURE(BgL_auxz00_8056,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8053, ((long)10));} } } break;case ((long)2) : 

{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_radixz00_1217;
BgL_radixz00_1217 = 
VECTOR_REF(BgL_optz00_211,
(int)(((long)1))); 
{ /* Ieee/fixnum.scm 1559 */

{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_arg1768z00_1218;
BgL_arg1768z00_1218 = 
VECTOR_REF(BgL_optz00_211,
(int)(((long)0))); 
{ /* Ieee/fixnum.scm 1559 */
long BgL_auxz00_8072;obj_t BgL_auxz00_8065;
{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_auxz00_8073;
if(
INTEGERP(BgL_radixz00_1217))
{ /* Ieee/fixnum.scm 1559 */
BgL_auxz00_8073 = BgL_radixz00_1217
; }  else 
{ 
obj_t BgL_auxz00_8076;
BgL_auxz00_8076 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68147)), BGl_string2876z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_1217); 
FAILURE(BgL_auxz00_8076,BFALSE,BFALSE);} 
BgL_auxz00_8072 = 
(long)CINT(BgL_auxz00_8073); } 
if(
STRINGP(BgL_arg1768z00_1218))
{ /* Ieee/fixnum.scm 1559 */
BgL_auxz00_8065 = BgL_arg1768z00_1218
; }  else 
{ 
obj_t BgL_auxz00_8068;
BgL_auxz00_8068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68147)), BGl_string2876z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_arg1768z00_1218); 
FAILURE(BgL_auxz00_8068,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8065, BgL_auxz00_8072);} } } } break;
default: 
{ /* Ieee/fixnum.scm 1559 */
obj_t BgL_arg1769z00_1219;int BgL_arg1771z00_1221;
BgL_arg1769z00_1219 = BGl_symbol2874z00zz__r4_numbers_6_5_fixnumz00; 
BgL_arg1771z00_1221 = 
VECTOR_LENGTH(BgL_optz00_211); 
return 
BGl_errorz00zz__errorz00(BgL_arg1769z00_1219, BGl_string2840z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_arg1771z00_1221));} } } } } } 
}



/* string->bignum */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_stringz00_209, long BgL_radixz00_210)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1559 */
{ /* Ieee/fixnum.scm 1560 */
bool_t BgL_testz00_8087;
if(
(BgL_radixz00_210>=((long)2)))
{ /* Ieee/fixnum.scm 1560 */
BgL_testz00_8087 = 
(BgL_radixz00_210<=((long)36))
; }  else 
{ /* Ieee/fixnum.scm 1560 */
BgL_testz00_8087 = ((bool_t)0)
; } 
if(BgL_testz00_8087)
{ /* Ieee/fixnum.scm 1560 */
return 
bgl_string_to_bignum(
BSTRING_TO_STRING(BgL_stringz00_209), 
(int)(BgL_radixz00_210));}  else 
{ /* Ieee/fixnum.scm 1563 */
obj_t BgL_aux2694z00_3930;
BgL_aux2694z00_3930 = 
BGl_errorz00zz__errorz00(BGl_string2875z00zz__r4_numbers_6_5_fixnumz00, BGl_string2842z00zz__r4_numbers_6_5_fixnumz00, 
BINT(BgL_radixz00_210)); 
if(
BIGNUMP(BgL_aux2694z00_3930))
{ /* Ieee/fixnum.scm 1563 */
return BgL_aux2694z00_3930;}  else 
{ 
obj_t BgL_auxz00_8098;
BgL_auxz00_8098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68297)), BGl_string2875z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_aux2694z00_3930); 
FAILURE(BgL_auxz00_8098,BFALSE,BFALSE);} } } } 
}



/* string->integer-obj */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_stringz00_213, long BgL_radixz00_214)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1568 */
return 
bgl_string_to_integer_obj(
BSTRING_TO_STRING(BgL_stringz00_213), 
(int)(BgL_radixz00_214));} 
}



/* _string->integer-obj */
obj_t BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3209, obj_t BgL_stringz00_3210, obj_t BgL_radixz00_3211)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1568 */
{ /* Ieee/fixnum.scm 1569 */
long BgL_auxz00_8112;obj_t BgL_auxz00_8105;
{ /* Ieee/fixnum.scm 1569 */
obj_t BgL_auxz00_8113;
if(
INTEGERP(BgL_radixz00_3211))
{ /* Ieee/fixnum.scm 1569 */
BgL_auxz00_8113 = BgL_radixz00_3211
; }  else 
{ 
obj_t BgL_auxz00_8116;
BgL_auxz00_8116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68614)), BGl_string2877z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_radixz00_3211); 
FAILURE(BgL_auxz00_8116,BFALSE,BFALSE);} 
BgL_auxz00_8112 = 
(long)CINT(BgL_auxz00_8113); } 
if(
STRINGP(BgL_stringz00_3210))
{ /* Ieee/fixnum.scm 1569 */
BgL_auxz00_8105 = BgL_stringz00_3210
; }  else 
{ 
obj_t BgL_auxz00_8108;
BgL_auxz00_8108 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68614)), BGl_string2877z00zz__r4_numbers_6_5_fixnumz00, BGl_string2843z00zz__r4_numbers_6_5_fixnumz00, BgL_stringz00_3210); 
FAILURE(BgL_auxz00_8108,BFALSE,BFALSE);} 
return 
BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8105, BgL_auxz00_8112);} } 
}



/* random */
BGL_EXPORTED_DEF long BGl_randomz00zz__r4_numbers_6_5_fixnumz00(long BgL_maxz00_215)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1574 */
{ /* Ieee/fixnum.scm 1575 */
int BgL_arg1775z00_4088;
BgL_arg1775z00_4088 = 
rand(); 
return 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_arg1775z00_4088), BgL_maxz00_215);} } 
}



/* _random */
obj_t BGl__randomz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3212, obj_t BgL_maxz00_3213)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1574 */
{ /* Ieee/fixnum.scm 1575 */
long BgL_auxz00_8125;
{ /* Ieee/fixnum.scm 1575 */
long BgL_res2885z00_4091;
{ /* Ieee/fixnum.scm 1575 */
long BgL_maxz00_4089;
{ /* Ieee/fixnum.scm 1575 */
obj_t BgL_auxz00_8126;
if(
INTEGERP(BgL_maxz00_3213))
{ /* Ieee/fixnum.scm 1575 */
BgL_auxz00_8126 = BgL_maxz00_3213
; }  else 
{ 
obj_t BgL_auxz00_8129;
BgL_auxz00_8129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)68921)), BGl_string2878z00zz__r4_numbers_6_5_fixnumz00, BGl_string2708z00zz__r4_numbers_6_5_fixnumz00, BgL_maxz00_3213); 
FAILURE(BgL_auxz00_8129,BFALSE,BFALSE);} 
BgL_maxz00_4089 = 
(long)CINT(BgL_auxz00_8126); } 
{ /* Ieee/fixnum.scm 1575 */
int BgL_arg1775z00_4090;
BgL_arg1775z00_4090 = 
rand(); 
BgL_res2885z00_4091 = 
BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
(long)(BgL_arg1775z00_4090), BgL_maxz00_4089); } } 
BgL_auxz00_8125 = BgL_res2885z00_4091; } 
return 
BINT(BgL_auxz00_8125);} } 
}



/* randombx */
BGL_EXPORTED_DEF obj_t BGl_randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_maxz00_216)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1580 */
return 
bgl_rand_bignum(BgL_maxz00_216);} 
}



/* _randombx */
obj_t BGl__randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3214, obj_t BgL_maxz00_3215)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1580 */
{ /* Ieee/fixnum.scm 1581 */
obj_t BgL_maxz00_4092;
if(
BIGNUMP(BgL_maxz00_3215))
{ /* Ieee/fixnum.scm 1581 */
BgL_maxz00_4092 = BgL_maxz00_3215; }  else 
{ 
obj_t BgL_auxz00_8141;
BgL_auxz00_8141 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)69199)), BGl_string2879z00zz__r4_numbers_6_5_fixnumz00, BGl_string2716z00zz__r4_numbers_6_5_fixnumz00, BgL_maxz00_3215); 
FAILURE(BgL_auxz00_8141,BFALSE,BFALSE);} 
return 
bgl_rand_bignum(BgL_maxz00_4092);} } 
}



/* seed-random! */
BGL_EXPORTED_DEF obj_t BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(int BgL_seedz00_217)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1586 */
bgl_seed_rand(
(long)(BgL_seedz00_217)); BUNSPEC; 
return 
BINT(BgL_seedz00_217);} 
}



/* _seed-random! */
obj_t BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3216, obj_t BgL_seedz00_3217)
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 1586 */
{ /* Ieee/fixnum.scm 1588 */
int BgL_auxz00_8149;
{ /* Ieee/fixnum.scm 1588 */
obj_t BgL_auxz00_8150;
if(
INTEGERP(BgL_seedz00_3217))
{ /* Ieee/fixnum.scm 1588 */
BgL_auxz00_8150 = BgL_seedz00_3217
; }  else 
{ 
obj_t BgL_auxz00_8153;
BgL_auxz00_8153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2706z00zz__r4_numbers_6_5_fixnumz00, 
BINT(((long)69489)), BGl_string2880z00zz__r4_numbers_6_5_fixnumz00, BGl_string2881z00zz__r4_numbers_6_5_fixnumz00, BgL_seedz00_3217); 
FAILURE(BgL_auxz00_8153,BFALSE,BFALSE);} 
BgL_auxz00_8149 = 
CINT(BgL_auxz00_8150); } 
return 
BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_8149);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00()
{ AN_OBJECT;
{ /* Ieee/fixnum.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2882z00zz__r4_numbers_6_5_fixnumz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2882z00zz__r4_numbers_6_5_fixnumz00)); 
return 
BGl_modulezd2initializa7ationz75zz__bignumz00(((long)318625392), 
BSTRING_TO_STRING(BGl_string2882z00zz__r4_numbers_6_5_fixnumz00));} 
}

#ifdef __cplusplus
}
#endif
