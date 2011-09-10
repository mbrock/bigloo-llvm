/*===========================================================================*/
/*   (Ieee/fixnum.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/fixnum.scm -indent -o objs/obj_u/Ieee/fixnum.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	extern obj_t bgl_bignum_lcm(obj_t, obj_t);
	static obj_t BGl__negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	extern obj_t bgl_bignum_add(obj_t, obj_t);
	static obj_t BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_remainderelongz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__negllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern double BGl_roundflz00zz__r4_numbers_6_5_flonumz00(double);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t bgl_long_to_bignum(long);
	static obj_t BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_maxvalllongz00zz__r4_numbers_6_5_fixnumz00();
	static obj_t BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__minfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__negfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(long);
	extern obj_t make_string(long, unsigned char);
	extern void bgl_seed_rand(long);
	static obj_t BGl__quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	static obj_t BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t
		BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
	static obj_t BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
	static obj_t BGl__absfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern bool_t bgl_bignum_even(obj_t);
	static obj_t BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00 = BUNSPEC;
	static BGL_LONGLONG_T BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_zd2fxzd2zz__r4_numbers_6_5_fixnumz00(long, long);
	static long BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern bool_t bgl_bignum_odd(obj_t);
	static obj_t BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t bgl_bignum_remainder(obj_t, obj_t);
	static obj_t BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3elongze3zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL bool_t BGl_oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00 =
		BUNSPEC;
	static obj_t BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_quotientfxz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL long BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	BGL_EXPORTED_DECL long BGl_minvalelongz00zz__r4_numbers_6_5_fixnumz00();
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_zc3llongzc3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL long BGl_randomz00zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_abselongz00zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL bool_t BGl_evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL long BGl_zf2elongzf2zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_za7erozf3z54zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_zd2llongzd2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL bool_t
		BGl_oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t
		BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(long, long,
		long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_za2llongza2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	extern obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__negelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t bgl_bignum_sub(obj_t, obj_t);
	static obj_t BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t bgl_bignum_quotient(obj_t, obj_t);
	static obj_t BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t bgl_string_to_integer_obj(char *, int);
	BGL_EXPORTED_DECL long BGl_maxvalelongz00zz__r4_numbers_6_5_fixnumz00();
	BGL_EXPORTED_DECL long BGl_maxvalfxz00zz__r4_numbers_6_5_fixnumz00();
	BGL_EXPORTED_DECL obj_t
		BGl_elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL bool_t
		BGl_positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	static obj_t BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static long BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	extern obj_t unsigned_to_string(long, long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T,
		BGL_LONGLONG_T);
	static obj_t BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__randomz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	static obj_t BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_zf2fxzf2zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_negllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL long
		BGl_bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__minllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	extern obj_t integer_to_string(long, long);
	static obj_t BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_remainderfxz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__absllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t bgl_bignum_gcd(obj_t, obj_t);
	static obj_t BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3fxzc3zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t bgl_bignum_neg(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zc3elongzc3zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_quotientllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T,
		BGL_LONGLONG_T);
	static obj_t BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_zd3llongzd3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	static obj_t BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t bgl_bignum_abs(obj_t);
	static obj_t BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL long BGl_zd2elongzd2zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_za2elongza2zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00();
	static obj_t BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_zb2llongzb2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	extern obj_t integer_to_string(long, long);
	BGL_EXPORTED_DECL obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(int);
	BGL_EXPORTED_DECL obj_t BGl_negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, obj_t);
	static obj_t BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_za2fxza2zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL long BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL bool_t BGl_elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL long BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	extern obj_t llong_to_string(BGL_LONGLONG_T, long);
	static obj_t BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	static obj_t BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_negfxz00zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_remainderllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T,
		BGL_LONGLONG_T);
	static obj_t BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00();
	BGL_EXPORTED_DECL long BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t bgl_long_to_bignum(long);
	BGL_EXPORTED_DECL bool_t
		BGl_ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T,
		BGL_LONGLONG_T);
	static obj_t BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(long,
		obj_t);
	static obj_t BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_absfxz00zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL obj_t BGl_zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_negelongz00zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL bool_t BGl_ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__minelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__abselongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	extern obj_t integer_to_string_padding(long, long, long);
	BGL_EXPORTED_DECL bool_t
		BGl_zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T,
		BGL_LONGLONG_T);
	static obj_t BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_minvalfxz00zz__r4_numbers_6_5_fixnumz00();
	extern obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t bgl_string_to_bignum(char *, int);
	BGL_EXPORTED_DECL long BGl_zb2fxzb2zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL bool_t BGl_oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	BGL_EXPORTED_DECL bool_t BGl_ze3fxze3zz__r4_numbers_6_5_fixnumz00(long, long);
	extern obj_t bgl_bignum_to_string(obj_t, long);
	static obj_t BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_quotientelongz00zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL bool_t BGl_bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t, obj_t);
	extern obj_t unsigned_to_string(long, long);
	extern obj_t bgl_bignum_mul(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_zd3elongzd3zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_EXPORTED_DECL long
		BGl_llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	static obj_t BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	extern int bgl_bignum_cmp(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	static obj_t BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_ze3llongze3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	static obj_t BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(long, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t
		BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DECL long BGl_zb2elongzb2zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, obj_t);
	extern long bgl_bignum_to_long(obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_minvalllongz00zz__r4_numbers_6_5_fixnumz00();
	static obj_t BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	extern obj_t ullong_to_string(BGL_LONGLONG_T, long);
	static obj_t BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_absllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_zf2llongzf2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL bool_t BGl_ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL bool_t
		BGl_negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(long);
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long);
	extern obj_t bgl_rand_bignum(obj_t);
	static obj_t BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl__minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t
		BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2365z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2365za700za7za7_2454za7, "_minfx", 6);
	      DEFINE_STRING(BGl_string2366z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2366za700za7za7_2455za7, "_minelong", 9);
	      DEFINE_STRING(BGl_string2367z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2367za700za7za7_2456za7, "_minllong", 9);
	      DEFINE_STRING(BGl_string2368z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2368za700za7za7_2457za7, "_minbx", 6);
	      DEFINE_STRING(BGl_string2370z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2370za700za7za7_2458za7, "_maxelong", 9);
	      DEFINE_STRING(BGl_string2369z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2369za700za7za7_2459za7, "_maxfx", 6);
	      DEFINE_STRING(BGl_string2371z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2371za700za7za7_2460za7, "_maxllong", 9);
	      DEFINE_STRING(BGl_string2372z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2372za700za7za7_2461za7, "_maxbx", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3fxzd2envzc2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3za7d3fxza710za7za7__2462za7,
		BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2373z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2373za700za7za7_2463za7, "_+fx", 4);
	      DEFINE_STRING(BGl_string2374z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2374za700za7za7_2464za7, "_+elong", 7);
	      DEFINE_STRING(BGl_string2375z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2375za700za7za7_2465za7, "_+llong", 7);
	      DEFINE_STRING(BGl_string2376z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2376za700za7za7_2466za7, "_+bx", 4);
	      DEFINE_STRING(BGl_string2377z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2377za700za7za7_2467za7, "_-fx", 4);
	      DEFINE_STRING(BGl_string2378z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2378za700za7za7_2468za7, "_-elong", 7);
	      DEFINE_STRING(BGl_string2380z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2380za700za7za7_2469za7, "_-bx", 4);
	      DEFINE_STRING(BGl_string2379z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2379za700za7za7_2470za7, "_-llong", 7);
	      DEFINE_STRING(BGl_string2381z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2381za700za7za7_2471za7, "_*fx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__remainderza700za7za7_2472za7,
		BGl__remainderz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zb2llongzd2envz60zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7b2llongza7b2za7za7__2473z00,
		BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2382z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2382za700za7za7_2474za7, "_*elong", 7);
	      DEFINE_STRING(BGl_string2383z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2383za700za7za7_2475za7, "_*llong", 7);
	      DEFINE_STRING(BGl_string2384z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2384za700za7za7_2476za7, "_*bx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_lcmfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__lcmfxza700za7za7__r4_2477za7, va_generic_entry,
		BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2385z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2385za700za7za7_2478za7, "_/fx", 4);
	      DEFINE_STRING(BGl_string2386z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2386za700za7za7_2479za7, "_/elong", 7);
	      DEFINE_STRING(BGl_string2387z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2387za700za7za7_2480za7, "_/llong", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2bxzd2envz60zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7b2bxza7b2za7za7__r4_2481z00,
		BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2388z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2388za700za7za7_2482za7, "_/bx", 4);
	      DEFINE_STRING(BGl_string2400z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2400za700za7za7_2483za7, "_quotientfx", 11);
	      DEFINE_STRING(BGl_string2390z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2390za700za7za7_2484za7, "_negelong", 9);
	      DEFINE_STRING(BGl_string2389z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2389za700za7za7_2485za7, "_negfx", 6);
	      DEFINE_STRING(BGl_string2401z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2401za700za7za7_2486za7, "_quotientelong", 14);
	      DEFINE_STRING(BGl_string2391z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2391za700za7za7_2487za7, "_negllong", 9);
	      DEFINE_STRING(BGl_string2402z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2402za700za7za7_2488za7, "_quotientllong", 14);
	      DEFINE_STRING(BGl_string2392z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2392za700za7za7_2489za7, "_negbx", 6);
	      DEFINE_STRING(BGl_string2403z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2403za700za7za7_2490za7, "_quotientbx", 11);
	      DEFINE_STRING(BGl_string2393z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2393za700za7za7_2491za7, "_absfx", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_minfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minfxza700za7za7__r4_2492za7, va_generic_entry,
		BGl__minfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__evenelongza7f3za7f32493z00,
		BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2394z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2394za700za7za7_2494za7, "_abselong", 9);
	      DEFINE_STRING(BGl_string2405z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2405za700za7za7_2495za7, "remainder", 9);
	      DEFINE_STRING(BGl_string2395z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2395za700za7za7_2496za7, "_absllong", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7eroelongzf3zd2envz86zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a7eroelongza7f3za72497za7,
		BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2406z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2406za700za7za7_2498za7, "_remainderfx", 12);
	      DEFINE_STRING(BGl_string2396z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2396za700za7za7_2499za7, "_absbx", 6);
	      DEFINE_STRING(BGl_string2407z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2407za700za7za7_2500za7, "_remainderelong", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negllongza700za7za7__2501za7,
		BGl__negllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2408z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2408za700za7za7_2502za7, "_remainderllong", 15);
	      DEFINE_STRING(BGl_string2398z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2398za700za7za7_2503za7, "quotient", 8);
	      DEFINE_STRING(BGl_string2409z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2409za700za7za7_2504za7, "_remainderbx", 12);
	      DEFINE_STRING(BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2399za700za7za7_2505za7, "not an integer", 14);
	      DEFINE_STRING(BGl_string2411z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2411za700za7za7_2506za7, "modulo", 6);
	      DEFINE_STRING(BGl_string2412z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2412za700za7za7_2507za7, "_modulofx", 9);
	      DEFINE_STRING(BGl_string2413z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2413za700za7za7_2508za7, "_moduloelong", 12);
	      DEFINE_STRING(BGl_string2414z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2414za700za7za7_2509za7, "_modulollong", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2bxzd2envz70zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a2bxza7a2za7za7__r4_2510z00,
		BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__fixnumza7d2za7e3big2511z00,
		BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2415z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2415za700za7za7_2512za7, "_modulobx", 9);
	      DEFINE_STRING(BGl_string2416z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2416za700za7za7_2513za7, "_exptfx", 7);
	      DEFINE_STRING(BGl_string2417z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2417za700za7za7_2514za7, "_exptbx", 7);
	      DEFINE_STRING(BGl_string2418z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2418za700za7za7_2515za7, "_fixnum->string", 15);
	      DEFINE_STRING(BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2420za700za7za7_2516za7, "Illegal radix", 13);
	      DEFINE_STRING(BGl_string2419z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2419za700za7za7_2517za7, "fixnum->string", 14);
	      DEFINE_STRING(BGl_string2421z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2421za700za7za7_2518za7, "_integer->string", 16);
	      DEFINE_STRING(BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2422za700za7za7_2519za7, "_integer->string/padding", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minvalllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minvalllongza700za72520z00,
		BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2423z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2423za700za7za7_2521za7, "integer->string/padding", 23);
	      DEFINE_STRING(BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2424za700za7za7_2522za7, "bstring", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__evenza7f3za7f3za7za7__r2523z00,
		BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2425z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2425za700za7za7_2524za7, "_unsigned->string", 17);
	      DEFINE_STRING(BGl_string2426z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2426za700za7za7_2525za7, "unsigned->string", 16);
	      DEFINE_STRING(BGl_string2427z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2427za700za7za7_2526za7, "elong->string", 13);
	      DEFINE_STRING(BGl_string2428z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2428za700za7za7_2527za7, "_elong->string", 14);
	      DEFINE_STRING(BGl_string2430z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2430za700za7za7_2528za7, "_llong->string", 14);
	      DEFINE_STRING(BGl_string2429z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2429za700za7za7_2529za7, "llong->string", 13);
	      DEFINE_STRING(BGl_string2431z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2431za700za7za7_2530za7, "_bignum->string", 15);
	      DEFINE_STRING(BGl_string2432z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2432za700za7za7_2531za7, "bignum->string", 14);
	      DEFINE_STRING(BGl_string2433z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2433za700za7za7_2532za7, "bignum->bin-str!", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minvalfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minvalfxza700za7za7__2533za7,
		BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2434z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2434za700za7za7_2534za7, "integer too large", 17);
	      DEFINE_STRING(BGl_string2435z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2435za700za7za7_2535za7, "_bignum->octet-string", 21);
	      DEFINE_STRING(BGl_string2436z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2436za700za7za7_2536za7, "_octet-string->bignum", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_modulozd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__moduloza700za7za7__r42537za7,
		BGl__moduloz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2437z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2437za700za7za7_2538za7, "string->integer", 15);
	      DEFINE_STRING(BGl_string2438z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2438za700za7za7_2539za7, "_string->integer", 16);
	      DEFINE_STRING(BGl_string2440z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2440za700za7za7_2540za7, "_string->elong", 14);
	      DEFINE_STRING(BGl_string2439z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2439za700za7za7_2541za7, "string->elong", 13);
	      DEFINE_STRING(BGl_string2441z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2441za700za7za7_2542za7, "string->llong", 13);
	      DEFINE_STRING(BGl_string2442z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2442za700za7za7_2543za7, "_string->llong", 14);
	      DEFINE_STRING(BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2443za700za7za7_2544za7, "_string->bignum", 15);
	      DEFINE_STRING(BGl_string2444z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2444za700za7za7_2545za7, "string->bignum", 14);
	      DEFINE_STRING(BGl_string2445z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2445za700za7za7_2546za7, "_string->integer-obj", 20);
	      DEFINE_STRING(BGl_string2446z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2446za700za7za7_2547za7, "_random", 7);
	      DEFINE_STRING(BGl_string2447z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2447za700za7za7_2548za7, "_randombx", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddllongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__oddllongza7f3za7f3za72549za7,
		BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2448z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2448za700za7za7_2550za7, "_seed-random!", 13);
	      DEFINE_STRING(BGl_string2450z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2450za700za7za7_2551za7, "__r4_numbers_6_5_fixnum", 23);
	      DEFINE_STRING(BGl_string2449z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2449za700za7za7_2552za7, "int", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__llongza7f3za7f3za7za7__2553z00,
		BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3llongzd2envze2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3za7d3llongza730za72554z00,
		BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_gcdfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__gcdfxza700za7za7__r4_2555za7, va_generic_entry,
		BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3bxzd2envze2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3za7d3bxza730za7za7__2556za7,
		BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__integerza7f3za7f3za7za72557z00,
		BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3elongzd2envzc2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3za7d3elongza710za72558z00,
		BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zd3elongzd2envz01zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d3elongza7d3za7za7__2559z00,
		BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zf2elongzd2envz20zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7f2elongza7f2za7za7__2560z00,
		BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positivefxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__positivefxza7f3za7f2561z00,
		BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gcdllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__gcdllongza700za7za7__2562za7, va_generic_entry,
		BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_absfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__absfxza700za7za7__r4_2563za7,
		BGl__absfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3llongzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3llongza7e3za7za7__2564z00,
		BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2fxzd2envz20zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7f2fxza7f2za7za7__r4_2565z00,
		BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lcmllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__lcmllongza700za7za7__2566za7, va_generic_entry,
		BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minelongza700za7za7__2567za7, va_generic_entry,
		BGl__minelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxvalfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxvalfxza700za7za7__2568za7,
		BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__remainderfxza700za72569z00,
		BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quotientbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__quotientbxza700za7za72570za7,
		BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2fxzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d2fxza7d2za7za7__r4_2571z00,
		BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3integerzd2objzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__stringza7d2za7e3int2572z00,
		BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zd2llongzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d2llongza7d2za7za7__2573z00,
		BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_gcdzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__gcdza700za7za7__r4_nu2574za7, va_generic_entry,
		BGl__gcdz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativeelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negativeelongza7f2575za7,
		BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positivebxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__positivebxza7f3za7f2576z00,
		BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__llongza7d2za7e3stri2577z00, va_generic_entry,
		BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_oddzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__oddza7f3za7f3za7za7__r42578z00,
		BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_seedzd2randomz12zd2envz12zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__seedza7d2randomza712579z00,
		BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zb2fxzd2envz60zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7b2fxza7b2za7za7__r4_2580z00,
		BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2llongzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__makeza7d2llongza7d22581z00,
		BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__remainderllongza72582za7,
		BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3stringzf2paddingzd2envz11zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__integerza7d2za7e3st2583z00, opt_generic_entry,
		BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00, BFALSE,
		-1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za2llongzd2envz70zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a2llongza7a2za7za7__2584z00,
		BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2fxzd2envz70zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a2fxza7a2za7za7__r4_2585z00,
		BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_abselongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__abselongza700za7za7__2586za7,
		BGl__abselongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenfxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__evenfxza7f3za7f3za7za7_2587z00,
		BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxelongza700za7za7__2588za7, va_generic_entry,
		BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quotientelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__quotientelongza702589za7,
		BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulobxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__modulobxza700za7za7__2590za7,
		BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxvalelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxvalelongza700za72591z00,
		BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__llongza7d2za7e3bign2592z00,
		BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positiveelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__positiveelongza7f2593za7,
		BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3bxzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3bxza7e3za7za7__r4_2594z00,
		BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3fxzd2envze2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3za7d3fxza730za7za7__2595za7,
		BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__exptbxza700za7za7__r42596za7,
		BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_lcmzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__lcmza700za7za7__r4_nu2597za7, va_generic_entry,
		BGl__lcmz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenbxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__evenbxza7f3za7f3za7za7_2598z00,
		BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3bxzd2envz01zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d3bxza7d3za7za7__r4_2599z00,
		BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_octetzd2stringzd2ze3bignumzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__octetza7d2stringza72600z00,
		BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_moduloelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__moduloelongza700za72601z00,
		BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3bxzd2envz11zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3bxza7c3za7za7__r4_2602z00,
		BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3elongzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__stringza7d2za7e3elo2603z00, va_generic_entry,
		BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxbxza700za7za7__r4_2604za7, va_generic_entry,
		BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evenllongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__evenllongza7f3za7f32605z00,
		BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7erollongzf3zd2envz86zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a7erollongza7f3za72606za7,
		BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quotientzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__quotientza700za7za7__2607za7,
		BGl__quotientz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3elongzd2envz11zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3elongza7c3za7za7__2608z00,
		BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__elongza7d2za7e3stri2609z00, va_generic_entry,
		BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3llongzd2envzc2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3za7d3llongza710za72610z00,
		BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__integerza7d2za7e3st2611z00, opt_generic_entry,
		BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zd3llongzd2envz01zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d3llongza7d3za7za7__2612z00,
		BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zf2llongzd2envz20zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7f2llongza7f2za7za7__2613z00,
		BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negbxza700za7za7__r4_2614za7,
		BGl__negbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quotientfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__quotientfxza700za7za72615za7,
		BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddelongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__oddelongza7f3za7f3za72616za7,
		BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zb2elongzd2envz60zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7b2elongza7b2za7za7__2617z00,
		BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minllongza700za7za7__2618za7, va_generic_entry,
		BGl__minllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__elongza7f3za7f3za7za7__2619z00,
		BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__fixnumza7f3za7f3za7za7_2620z00,
		BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negelongza700za7za7__2621za7,
		BGl__negelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3zd3bxzd2envzc2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3za7d3bxza710za7za7__2622za7,
		BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_minvalelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minvalelongza700za72623z00,
		BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3llongzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__elongza7d2za7e3llon2624z00,
		BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_elongzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__elongza7d2za7e3bign2625z00,
		BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_lcmbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__lcmbxza700za7za7__r4_2626za7, va_generic_entry,
		BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__bignumza7d2za7e3str2627z00, opt_generic_entry,
		BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_minbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__minbxza700za7za7__r4_2628za7, va_generic_entry,
		BGl__minbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzd2ze3octetzd2stringzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__bignumza7d2za7e3oct2629z00,
		BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3integerzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__stringza7d2za7e3int2630z00, va_generic_entry,
		BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_randombxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__randombxza700za7za7__2631za7,
		BGl__randombxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulofxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__modulofxza700za7za7__2632za7,
		BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3zd3elongzd2envze2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3za7d3elongza730za72633z00,
		BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_randomzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__randomza700za7za7__r42634za7,
		BGl__randomz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unsignedzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__unsignedza7d2za7e3s2635z00, opt_generic_entry,
		BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_absllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__absllongza700za7za7__2636za7,
		BGl__absllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxllongza700za7za7__2637za7, va_generic_entry,
		BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddfxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__oddfxza7f3za7f3za7za7__2638z00,
		BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ze3fxzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3fxza7e3za7za7__r4_2639z00,
		BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7erofxzf3zd2envz86zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a7erofxza7f3za754za72640z00,
		BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativefxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negativefxza7f3za7f2641z00,
		BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_quotientllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__quotientllongza702642za7,
		BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativellongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negativellongza7f2643za7,
		BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_exptfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__exptfxza700za7za7__r42644za7,
		BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_gcdelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__gcdelongza700za7za7__2645za7, va_generic_entry,
		BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd3fxzd2envz01zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d3fxza7d3za7za7__r4_2646z00,
		BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_llongzd2ze3elongzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__llongza7d2za7e3elon2647z00,
		BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_maxvalllongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxvalllongza700za72648z00,
		BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_gcdbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__gcdbxza700za7za7__r4_2649za7, va_generic_entry,
		BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ze3elongzd2envz31zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7e3elongza7e3za7za7__2650z00,
		BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3bignumzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__stringza7d2za7e3big2651z00, opt_generic_entry,
		BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lcmelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__lcmelongza700za7za7__2652za7, va_generic_entry,
		BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zc3fxzd2envz11zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3fxza7c3za7za7__r4_2653z00,
		BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_maxfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__maxfxza700za7za7__r4_2654za7, va_generic_entry,
		BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__bignumza7f3za7f3za7za7_2655z00,
		BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2310z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2310za700za7za7_2656za7, "_make-elong", 11);
	      DEFINE_STRING(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2309za700za7za7_2657za7,
		"/tmp/bigloo/runtime/Ieee/fixnum.scm", 35);
	      DEFINE_STRING(BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2311za700za7za7_2658za7, "long", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_absbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__absbxza700za7za7__r4_2659za7,
		BGl__absbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2312z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2312za700za7za7_2660za7, "_make-llong", 11);
	      DEFINE_STRING(BGl_string2313z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2313za700za7za7_2661za7, "_elong->llong", 13);
	      DEFINE_STRING(BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2314za700za7za7_2662za7, "elong", 5);
	      DEFINE_STRING(BGl_string2315z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2315za700za7za7_2663za7, "_llong->elong", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulollongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__modulollongza700za72664z00,
		BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2316za700za7za7_2665za7, "llong", 5);
	      DEFINE_STRING(BGl_string2317z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2317za700za7za7_2666za7, "_fixnum->bignum", 15);
	      DEFINE_STRING(BGl_string2318z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2318za700za7za7_2667za7, "_bignum->fixnum", 15);
	      DEFINE_STRING(BGl_string2320z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2320za700za7za7_2668za7, "_elong->bignum", 14);
	      DEFINE_STRING(BGl_string2319z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2319za700za7za7_2669za7, "bignum", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_oddbxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__oddbxza7f3za7f3za7za7__2670z00,
		BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2321z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2321za700za7za7_2671za7, "_llong->bignum", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zf2bxzd2envz20zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7f2bxza7f2za7za7__r4_2672z00,
		BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za7erobxzf3zd2envz86zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a7erobxza7f3za754za72673z00,
		BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2322z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2322za700za7za7_2674za7, "_=fx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zd2elongzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d2elongza7d2za7za7__2675z00,
		BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2323z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2323za700za7za7_2676za7, "_=elong", 7);
	      DEFINE_STRING(BGl_string2324z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2324za700za7za7_2677za7, "_=llong", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_negativebxzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negativebxza7f3za7f2678z00,
		BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2325z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2325za700za7za7_2679za7, "_=bx", 4);
	      DEFINE_STRING(BGl_string2326z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2326za700za7za7_2680za7, "_<fx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stringzd2ze3llongzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__stringza7d2za7e3llo2681z00, va_generic_entry,
		BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2327z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2327za700za7za7_2682za7, "_<elong", 7);
	      DEFINE_STRING(BGl_string2328z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2328za700za7za7_2683za7, "_<llong", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_negfxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__negfxza700za7za7__r4_2684za7,
		BGl__negfxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2330z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2330za700za7za7_2685za7, "_>fx", 4);
	      DEFINE_STRING(BGl_string2329z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2329za700za7za7_2686za7, "_<bx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fixnumzd2ze3stringzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__fixnumza7d2za7e3str2687z00, opt_generic_entry,
		BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2331z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2331za700za7za7_2688za7, "_>elong", 7);
	      DEFINE_STRING(BGl_string2332z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2332za700za7za7_2689za7, "_>llong", 7);
	      DEFINE_STRING(BGl_string2333z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2333za700za7za7_2690za7, "_>bx", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bignumzd2ze3fixnumzd2envze3zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__bignumza7d2za7e3fix2691z00,
		BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2334z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2334za700za7za7_2692za7, "_<=fx", 5);
	      DEFINE_STRING(BGl_string2335z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2335za700za7za7_2693za7, "_<=elong", 8);
	      DEFINE_STRING(BGl_string2336z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2336za700za7za7_2694za7, "_<=llong", 8);
	      DEFINE_STRING(BGl_string2337z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2337za700za7za7_2695za7, "_<=bx", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_zc3llongzd2envz11zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7c3llongza7c3za7za7__2696z00,
		BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2338z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2338za700za7za7_2697za7, "_>=fx", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderbxzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__remainderbxza700za72698z00,
		BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2340z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2340za700za7za7_2699za7, "_>=llong", 8);
	      DEFINE_STRING(BGl_string2339z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2339za700za7za7_2700za7, "_>=elong", 8);
	      DEFINE_STRING(BGl_string2341z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2341za700za7za7_2701za7, "_>=bx", 5);
	      DEFINE_STRING(BGl_string2342z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2342za700za7za7_2702za7, "_zerofx?", 8);
	      DEFINE_STRING(BGl_string2343z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2343za700za7za7_2703za7, "_zeroelong?", 11);
	      DEFINE_STRING(BGl_string2344z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2344za700za7za7_2704za7, "_zerollong?", 11);
	      DEFINE_STRING(BGl_string2345z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2345za700za7za7_2705za7, "_zerobx?", 8);
	      DEFINE_STRING(BGl_string2346z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2346za700za7za7_2706za7, "_positivefx?", 12);
	      DEFINE_STRING(BGl_string2347z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2347za700za7za7_2707za7, "_positiveelong?", 15);
	      DEFINE_STRING(BGl_string2348z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2348za700za7za7_2708za7, "_positivellong?", 15);
	      DEFINE_STRING(BGl_string2350z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2350za700za7za7_2709za7, "_negativefx?", 12);
	      DEFINE_STRING(BGl_string2349z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2349za700za7za7_2710za7, "_positivebx?", 12);
	      DEFINE_STRING(BGl_string2351z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2351za700za7za7_2711za7, "_negativeelong?", 15);
	      DEFINE_STRING(BGl_string2352z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2352za700za7za7_2712za7, "_negativellong?", 15);
	      DEFINE_STRING(BGl_string2353z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2353za700za7za7_2713za7, "_negativebx?", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_positivellongzf3zd2envz21zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__positivellongza7f2714za7,
		BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2354z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2354za700za7za7_2715za7, "odd?", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_zd2bxzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7d2bxza7d2za7za7__r4_2716z00,
		BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2355z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2355za700za7za7_2717za7, "Illegal integer", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2elongzd2envz00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__makeza7d2elongza7d22718z00,
		BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2356z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2356za700za7za7_2719za7, "_oddfx?", 7);
	      DEFINE_STRING(BGl_string2357z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2357za700za7za7_2720za7, "_oddelong?", 10);
	      DEFINE_STRING(BGl_string2358z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2358za700za7za7_2721za7, "_oddllong?", 10);
	      DEFINE_STRING(BGl_string2360z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2360za700za7za7_2722za7, "even?", 5);
	      DEFINE_STRING(BGl_string2359z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2359za700za7za7_2723za7, "_oddbx?", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remainderelongzd2envzd2zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__remainderelongza72724za7,
		BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2361z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2361za700za7za7_2725za7, "_evenfx?", 8);
	      DEFINE_STRING(BGl_string2362z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2362za700za7za7_2726za7, "_evenelong?", 11);
	      DEFINE_STRING(BGl_string2363z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2363za700za7za7_2727za7, "_evenllong?", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_za2elongzd2envz70zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl__za7a2elongza7a2za7za7__2728z00,
		BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2364z00zz__r4_numbers_6_5_fixnumz00,
		BgL_bgl_string2364za700za7za7_2729za7, "_evenbx?", 8);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long
		BgL_checksumz00_3749, char *BgL_fromz00_3750)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00();
					BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 14 */
			BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00 =
				bstring_to_symbol(BGl_string2398z00zz__r4_numbers_6_5_fixnumz00);
			BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00 =
				bstring_to_symbol(BGl_string2405z00zz__r4_numbers_6_5_fixnumz00);
			return (BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00 =
				bstring_to_symbol(BGl_string2411z00zz__r4_numbers_6_5_fixnumz00),
				BUNSPEC);
		}
	}



/* integer? */
	BGL_EXPORTED_DEF bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 504 */
			{	/* Ieee/fixnum.scm 505 */
				bool_t BgL__ortest_1094z00_503;

				BgL__ortest_1094z00_503 = INTEGERP(BgL_objz00_1);
				if (BgL__ortest_1094z00_503)
					{	/* Ieee/fixnum.scm 505 */
						return BgL__ortest_1094z00_503;
					}
				else
					{	/* Ieee/fixnum.scm 506 */
						bool_t BgL__ortest_1095z00_504;

						BgL__ortest_1095z00_504 = ELONGP(BgL_objz00_1);
						if (BgL__ortest_1095z00_504)
							{	/* Ieee/fixnum.scm 506 */
								return BgL__ortest_1095z00_504;
							}
						else
							{	/* Ieee/fixnum.scm 507 */
								bool_t BgL__ortest_1096z00_505;

								BgL__ortest_1096z00_505 = LLONGP(BgL_objz00_1);
								if (BgL__ortest_1096z00_505)
									{	/* Ieee/fixnum.scm 507 */
										return BgL__ortest_1096z00_505;
									}
								else
									{	/* Ieee/fixnum.scm 508 */
										bool_t BgL__ortest_1097z00_506;

										BgL__ortest_1097z00_506 = BIGNUMP(BgL_objz00_1);
										if (BgL__ortest_1097z00_506)
											{	/* Ieee/fixnum.scm 508 */
												return BgL__ortest_1097z00_506;
											}
										else
											{	/* Ieee/fixnum.scm 508 */
												if (REALP(BgL_objz00_1))
													{	/* Ieee/fixnum.scm 509 */
														double BgL_arg1237z00_508;

														BgL_arg1237z00_508 =
															BGl_roundflz00zz__r4_numbers_6_5_flonumz00
															(REAL_TO_DOUBLE(BgL_objz00_1));
														return (REAL_TO_DOUBLE(BgL_objz00_1) ==
															BgL_arg1237z00_508);
													}
												else
													{	/* Ieee/fixnum.scm 509 */
														return ((bool_t) 0);
													}
											}
									}
							}
					}
			}
		}
	}



/* _integer? */
	obj_t BGl__integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2919,
		obj_t BgL_objz00_2920)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 504 */
			return
				BBOOL(BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_objz00_2920));
		}
	}



/* fixnum? */
	BGL_EXPORTED_DEF bool_t BGl_fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_objz00_2)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 514 */
			return INTEGERP(BgL_objz00_2);
		}
	}



/* _fixnum? */
	obj_t BGl__fixnumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2921,
		obj_t BgL_objz00_2922)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 514 */
			return BBOOL(INTEGERP(BgL_objz00_2922));
		}
	}



/* elong? */
	BGL_EXPORTED_DEF bool_t BGl_elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_objz00_3)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 520 */
			return ELONGP(BgL_objz00_3);
		}
	}



/* _elong? */
	obj_t BGl__elongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2923,
		obj_t BgL_objz00_2924)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 520 */
			return BBOOL(ELONGP(BgL_objz00_2924));
		}
	}



/* llong? */
	BGL_EXPORTED_DEF bool_t BGl_llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_objz00_4)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 526 */
			return LLONGP(BgL_objz00_4);
		}
	}



/* _llong? */
	obj_t BGl__llongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2925,
		obj_t BgL_objz00_2926)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 526 */
			return BBOOL(LLONGP(BgL_objz00_2926));
		}
	}



/* bignum? */
	BGL_EXPORTED_DEF bool_t BGl_bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_objz00_5)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 532 */
			return BIGNUMP(BgL_objz00_5);
		}
	}



/* _bignum? */
	obj_t BGl__bignumzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2927,
		obj_t BgL_objz00_2928)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 532 */
			return BBOOL(BIGNUMP(BgL_objz00_2928));
		}
	}



/* make-elong */
	BGL_EXPORTED_DEF obj_t BGl_makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(long
		BgL_longz00_6)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 538 */
			return make_belong(BgL_longz00_6);
		}
	}



/* _make-elong */
	obj_t BGl__makezd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2929,
		obj_t BgL_longz00_2930)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 538 */
			{	/* Ieee/fixnum.scm 539 */
				long BgL_longz00_3602;

				{	/* Ieee/fixnum.scm 539 */
					obj_t BgL_auxz00_3788;

					if (INTEGERP(BgL_longz00_2930))
						{	/* Ieee/fixnum.scm 539 */
							BgL_auxz00_3788 = BgL_longz00_2930;
						}
					else
						{
							obj_t BgL_auxz00_3791;

							BgL_auxz00_3791 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 25684)),
								BGl_string2310z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
								BgL_longz00_2930);
							FAILURE(BgL_auxz00_3791, BFALSE, BFALSE);
						}
					BgL_longz00_3602 = (long) CINT(BgL_auxz00_3788);
				}
				return make_belong(BgL_longz00_3602);
			}
		}
	}



/* make-llong */
	BGL_EXPORTED_DEF obj_t BGl_makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(long
		BgL_longz00_7)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 544 */
			return LONG_TO_BLLONG(BgL_longz00_7);
		}
	}



/* _make-llong */
	obj_t BGl__makezd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2931,
		obj_t BgL_longz00_2932)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 544 */
			{	/* Ieee/fixnum.scm 545 */
				long BgL_longz00_3603;

				{	/* Ieee/fixnum.scm 545 */
					obj_t BgL_auxz00_3798;

					if (INTEGERP(BgL_longz00_2932))
						{	/* Ieee/fixnum.scm 545 */
							BgL_auxz00_3798 = BgL_longz00_2932;
						}
					else
						{
							obj_t BgL_auxz00_3801;

							BgL_auxz00_3801 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 25965)),
								BGl_string2312z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
								BgL_longz00_2932);
							FAILURE(BgL_auxz00_3801, BFALSE, BFALSE);
						}
					BgL_longz00_3603 = (long) CINT(BgL_auxz00_3798);
				}
				return LONG_TO_BLLONG(BgL_longz00_3603);
			}
		}
	}



/* elong->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_8)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 550 */
			return (BGL_LONGLONG_T) (BgL_xz00_8);
		}
	}



/* _elong->llong */
	obj_t BGl__elongzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2933, obj_t BgL_xz00_2934)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 550 */
			{	/* Ieee/fixnum.scm 551 */
				BGL_LONGLONG_T BgL_auxz00_3808;

				{	/* Ieee/fixnum.scm 551 */
					long BgL_xz00_3604;

					{	/* Ieee/fixnum.scm 551 */
						obj_t BgL_auxz00_3809;

						if (ELONGP(BgL_xz00_2934))
							{	/* Ieee/fixnum.scm 551 */
								BgL_auxz00_3809 = BgL_xz00_2934;
							}
						else
							{
								obj_t BgL_auxz00_3812;

								BgL_auxz00_3812 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 26245)),
									BGl_string2313z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2934);
								FAILURE(BgL_auxz00_3812, BFALSE, BFALSE);
							}
						BgL_xz00_3604 = BELONG_TO_LONG(BgL_auxz00_3809);
					}
					BgL_auxz00_3808 = (BGL_LONGLONG_T) (BgL_xz00_3604);
				}
				return make_bllong(BgL_auxz00_3808);
			}
		}
	}



/* llong->elong */
	BGL_EXPORTED_DEF long
		BGl_llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_xz00_9)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 556 */
			return (long) (BgL_xz00_9);
		}
	}



/* _llong->elong */
	obj_t BGl__llongzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2935, obj_t BgL_xz00_2936)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 556 */
			{	/* Ieee/fixnum.scm 557 */
				long BgL_auxz00_3820;

				{	/* Ieee/fixnum.scm 557 */
					BGL_LONGLONG_T BgL_xz00_3605;

					{	/* Ieee/fixnum.scm 557 */
						obj_t BgL_auxz00_3821;

						if (LLONGP(BgL_xz00_2936))
							{	/* Ieee/fixnum.scm 557 */
								BgL_auxz00_3821 = BgL_xz00_2936;
							}
						else
							{
								obj_t BgL_auxz00_3824;

								BgL_auxz00_3824 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 26522)),
									BGl_string2315z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2936);
								FAILURE(BgL_auxz00_3824, BFALSE, BFALSE);
							}
						BgL_xz00_3605 = BLLONG_TO_LLONG(BgL_auxz00_3821);
					}
					BgL_auxz00_3820 = (long) (BgL_xz00_3605);
				}
				return make_belong(BgL_auxz00_3820);
			}
		}
	}



/* fixnum->bignum */
	BGL_EXPORTED_DEF obj_t
		BGl_fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_10)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 562 */
			return bgl_long_to_bignum(BgL_xz00_10);
		}
	}



/* _fixnum->bignum */
	obj_t BGl__fixnumzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2937, obj_t BgL_xz00_2938)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 562 */
			{	/* Ieee/fixnum.scm 563 */
				long BgL_xz00_3606;

				{	/* Ieee/fixnum.scm 563 */
					obj_t BgL_auxz00_3832;

					if (INTEGERP(BgL_xz00_2938))
						{	/* Ieee/fixnum.scm 563 */
							BgL_auxz00_3832 = BgL_xz00_2938;
						}
					else
						{
							obj_t BgL_auxz00_3835;

							BgL_auxz00_3835 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 26801)),
								BGl_string2317z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2938);
							FAILURE(BgL_auxz00_3835, BFALSE, BFALSE);
						}
					BgL_xz00_3606 = (long) CINT(BgL_auxz00_3832);
				}
				return bgl_long_to_bignum(BgL_xz00_3606);
			}
		}
	}



/* bignum->fixnum */
	BGL_EXPORTED_DEF long
		BGl_bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_11)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 568 */
			return bgl_bignum_to_long(BgL_xz00_11);
		}
	}



/* _bignum->fixnum */
	obj_t BGl__bignumzd2ze3fixnumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2939, obj_t BgL_xz00_2940)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 568 */
			{	/* Ieee/fixnum.scm 569 */
				long BgL_auxz00_3842;

				{	/* Ieee/fixnum.scm 569 */
					obj_t BgL_xz00_3607;

					if (BIGNUMP(BgL_xz00_2940))
						{	/* Ieee/fixnum.scm 569 */
							BgL_xz00_3607 = BgL_xz00_2940;
						}
					else
						{
							obj_t BgL_auxz00_3845;

							BgL_auxz00_3845 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 27082)),
								BGl_string2318z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2940);
							FAILURE(BgL_auxz00_3845, BFALSE, BFALSE);
						}
					BgL_auxz00_3842 = bgl_bignum_to_long(BgL_xz00_3607);
				}
				return BINT(BgL_auxz00_3842);
			}
		}
	}



/* elong->bignum */
	BGL_EXPORTED_DEF obj_t
		BGl_elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_12)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 574 */
			return bgl_long_to_bignum(BgL_xz00_12);
		}
	}



/* _elong->bignum */
	obj_t BGl__elongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2941, obj_t BgL_xz00_2942)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 574 */
			{	/* Ieee/fixnum.scm 575 */
				long BgL_xz00_3608;

				{	/* Ieee/fixnum.scm 575 */
					obj_t BgL_auxz00_3852;

					if (ELONGP(BgL_xz00_2942))
						{	/* Ieee/fixnum.scm 575 */
							BgL_auxz00_3852 = BgL_xz00_2942;
						}
					else
						{
							obj_t BgL_auxz00_3855;

							BgL_auxz00_3855 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 27362)),
								BGl_string2320z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2942);
							FAILURE(BgL_auxz00_3855, BFALSE, BFALSE);
						}
					BgL_xz00_3608 = BELONG_TO_LONG(BgL_auxz00_3852);
				}
				return bgl_long_to_bignum(BgL_xz00_3608);
			}
		}
	}



/* llong->bignum */
	BGL_EXPORTED_DEF obj_t
		BGl_llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_xz00_13)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 580 */
			return bgl_llong_to_bignum(BgL_xz00_13);
		}
	}



/* _llong->bignum */
	obj_t BGl__llongzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_2943, obj_t BgL_xz00_2944)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 580 */
			{	/* Ieee/fixnum.scm 581 */
				BGL_LONGLONG_T BgL_xz00_3609;

				{	/* Ieee/fixnum.scm 581 */
					obj_t BgL_auxz00_3862;

					if (LLONGP(BgL_xz00_2944))
						{	/* Ieee/fixnum.scm 581 */
							BgL_auxz00_3862 = BgL_xz00_2944;
						}
					else
						{
							obj_t BgL_auxz00_3865;

							BgL_auxz00_3865 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 27641)),
								BGl_string2321z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_2944);
							FAILURE(BgL_auxz00_3865, BFALSE, BFALSE);
						}
					BgL_xz00_3609 = BLLONG_TO_LLONG(BgL_auxz00_3862);
				}
				return bgl_llong_to_bignum(BgL_xz00_3609);
			}
		}
	}



/* minvalfx */
	BGL_EXPORTED_DEF long BGl_minvalfxz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 586 */
			return (LONG_MIN >> TAG_SHIFT);
		}
	}



/* _minvalfx */
	obj_t BGl__minvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2945)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 586 */
			return BINT((LONG_MIN >> TAG_SHIFT));
		}
	}



/* maxvalfx */
	BGL_EXPORTED_DEF long BGl_maxvalfxz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 587 */
			return (LONG_MAX >> TAG_SHIFT);
		}
	}



/* _maxvalfx */
	obj_t BGl__maxvalfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2946)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 587 */
			return BINT((LONG_MAX >> TAG_SHIFT));
		}
	}



/* minvalelong */
	BGL_EXPORTED_DEF long BGl_minvalelongz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 588 */
			return LONG_MIN;
		}
	}



/* _minvalelong */
	obj_t BGl__minvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2947)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 588 */
			return make_belong(LONG_MIN);
		}
	}



/* maxvalelong */
	BGL_EXPORTED_DEF long BGl_maxvalelongz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 589 */
			return LONG_MAX;
		}
	}



/* _maxvalelong */
	obj_t BGl__maxvalelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2948)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 589 */
			return make_belong(LONG_MAX);
		}
	}



/* minvalllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_minvalllongz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 590 */
			return BGL_LONGLONG_MIN;
		}
	}



/* _minvalllong */
	obj_t BGl__minvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2949)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 590 */
			return make_bllong(BGL_LONGLONG_MIN);
		}
	}



/* maxvalllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_maxvalllongz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 591 */
			return BGL_LONGLONG_MAX;
		}
	}



/* _maxvalllong */
	obj_t BGl__maxvalllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2950)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 591 */
			return make_bllong(BGL_LONGLONG_MAX);
		}
	}



/* =fx */
	BGL_EXPORTED_DEF bool_t BGl_zd3fxzd3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_14, long BgL_n2z00_15)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 596 */
			return (BgL_n1z00_14 == BgL_n2z00_15);
		}
	}



/* _=fx */
	obj_t BGl__zd3fxzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2951,
		obj_t BgL_n1z00_2952, obj_t BgL_n2z00_2953)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 596 */
			{	/* Ieee/fixnum.scm 597 */
				bool_t BgL_auxz00_3878;

				{	/* Ieee/fixnum.scm 597 */
					long BgL_n1z00_3610;

					long BgL_n2z00_3611;

					{	/* Ieee/fixnum.scm 597 */
						obj_t BgL_auxz00_3879;

						if (INTEGERP(BgL_n1z00_2952))
							{	/* Ieee/fixnum.scm 597 */
								BgL_auxz00_3879 = BgL_n1z00_2952;
							}
						else
							{
								obj_t BgL_auxz00_3882;

								BgL_auxz00_3882 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28383)),
									BGl_string2322z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2952);
								FAILURE(BgL_auxz00_3882, BFALSE, BFALSE);
							}
						BgL_n1z00_3610 = (long) CINT(BgL_auxz00_3879);
					}
					{	/* Ieee/fixnum.scm 597 */
						obj_t BgL_auxz00_3887;

						if (INTEGERP(BgL_n2z00_2953))
							{	/* Ieee/fixnum.scm 597 */
								BgL_auxz00_3887 = BgL_n2z00_2953;
							}
						else
							{
								obj_t BgL_auxz00_3890;

								BgL_auxz00_3890 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28383)),
									BGl_string2322z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2953);
								FAILURE(BgL_auxz00_3890, BFALSE, BFALSE);
							}
						BgL_n2z00_3611 = (long) CINT(BgL_auxz00_3887);
					}
					BgL_auxz00_3878 = (BgL_n1z00_3610 == BgL_n2z00_3611);
				}
				return BBOOL(BgL_auxz00_3878);
			}
		}
	}



/* =elong */
	BGL_EXPORTED_DEF bool_t BGl_zd3elongzd3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_16, long BgL_n2z00_17)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 602 */
			return (BgL_n1z00_16 == BgL_n2z00_17);
		}
	}



/* _=elong */
	obj_t BGl__zd3elongzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2954,
		obj_t BgL_n1z00_2955, obj_t BgL_n2z00_2956)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 602 */
			{	/* Ieee/fixnum.scm 603 */
				bool_t BgL_auxz00_3898;

				{	/* Ieee/fixnum.scm 603 */
					long BgL_n1z00_3612;

					long BgL_n2z00_3613;

					{	/* Ieee/fixnum.scm 603 */
						obj_t BgL_auxz00_3899;

						if (ELONGP(BgL_n1z00_2955))
							{	/* Ieee/fixnum.scm 603 */
								BgL_auxz00_3899 = BgL_n1z00_2955;
							}
						else
							{
								obj_t BgL_auxz00_3902;

								BgL_auxz00_3902 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28654)),
									BGl_string2323z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2955);
								FAILURE(BgL_auxz00_3902, BFALSE, BFALSE);
							}
						BgL_n1z00_3612 = BELONG_TO_LONG(BgL_auxz00_3899);
					}
					{	/* Ieee/fixnum.scm 603 */
						obj_t BgL_auxz00_3907;

						if (ELONGP(BgL_n2z00_2956))
							{	/* Ieee/fixnum.scm 603 */
								BgL_auxz00_3907 = BgL_n2z00_2956;
							}
						else
							{
								obj_t BgL_auxz00_3910;

								BgL_auxz00_3910 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28654)),
									BGl_string2323z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2956);
								FAILURE(BgL_auxz00_3910, BFALSE, BFALSE);
							}
						BgL_n2z00_3613 = BELONG_TO_LONG(BgL_auxz00_3907);
					}
					BgL_auxz00_3898 = (BgL_n1z00_3612 == BgL_n2z00_3613);
				}
				return BBOOL(BgL_auxz00_3898);
			}
		}
	}



/* =llong */
	BGL_EXPORTED_DEF bool_t
		BGl_zd3llongzd3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_18,
		BGL_LONGLONG_T BgL_n2z00_19)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 608 */
			return (BgL_n1z00_18 == BgL_n2z00_19);
		}
	}



/* _=llong */
	obj_t BGl__zd3llongzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2957,
		obj_t BgL_n1z00_2958, obj_t BgL_n2z00_2959)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 608 */
			{	/* Ieee/fixnum.scm 609 */
				bool_t BgL_auxz00_3918;

				{	/* Ieee/fixnum.scm 609 */
					BGL_LONGLONG_T BgL_n1z00_3614;

					BGL_LONGLONG_T BgL_n2z00_3615;

					{	/* Ieee/fixnum.scm 609 */
						obj_t BgL_auxz00_3919;

						if (LLONGP(BgL_n1z00_2958))
							{	/* Ieee/fixnum.scm 609 */
								BgL_auxz00_3919 = BgL_n1z00_2958;
							}
						else
							{
								obj_t BgL_auxz00_3922;

								BgL_auxz00_3922 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28928)),
									BGl_string2324z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2958);
								FAILURE(BgL_auxz00_3922, BFALSE, BFALSE);
							}
						BgL_n1z00_3614 = BLLONG_TO_LLONG(BgL_auxz00_3919);
					}
					{	/* Ieee/fixnum.scm 609 */
						obj_t BgL_auxz00_3927;

						if (LLONGP(BgL_n2z00_2959))
							{	/* Ieee/fixnum.scm 609 */
								BgL_auxz00_3927 = BgL_n2z00_2959;
							}
						else
							{
								obj_t BgL_auxz00_3930;

								BgL_auxz00_3930 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 28928)),
									BGl_string2324z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2959);
								FAILURE(BgL_auxz00_3930, BFALSE, BFALSE);
							}
						BgL_n2z00_3615 = BLLONG_TO_LLONG(BgL_auxz00_3927);
					}
					BgL_auxz00_3918 = (BgL_n1z00_3614 == BgL_n2z00_3615);
				}
				return BBOOL(BgL_auxz00_3918);
			}
		}
	}



/* =bx */
	BGL_EXPORTED_DEF bool_t BGl_zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_20, obj_t BgL_n2z00_21)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 614 */
			return
				((long) (bgl_bignum_cmp(BgL_n1z00_20, BgL_n2z00_21)) == ((long) 0));
		}
	}



/* _=bx */
	obj_t BGl__zd3bxzd3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2960,
		obj_t BgL_n1z00_2961, obj_t BgL_n2z00_2962)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 614 */
			{	/* Ieee/fixnum.scm 615 */
				bool_t BgL_auxz00_3940;

				{	/* Ieee/fixnum.scm 615 */
					obj_t BgL_n1z00_3616;

					obj_t BgL_n2z00_3617;

					if (BIGNUMP(BgL_n1z00_2961))
						{	/* Ieee/fixnum.scm 615 */
							BgL_n1z00_3616 = BgL_n1z00_2961;
						}
					else
						{
							obj_t BgL_auxz00_3943;

							BgL_auxz00_3943 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 29204)),
								BGl_string2325z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2961);
							FAILURE(BgL_auxz00_3943, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n2z00_2962))
						{	/* Ieee/fixnum.scm 615 */
							BgL_n2z00_3617 = BgL_n2z00_2962;
						}
					else
						{
							obj_t BgL_auxz00_3949;

							BgL_auxz00_3949 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 29204)),
								BGl_string2325z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2962);
							FAILURE(BgL_auxz00_3949, BFALSE, BFALSE);
						}
					BgL_auxz00_3940 =
						(
						(long) (bgl_bignum_cmp(BgL_n1z00_3616,
								BgL_n2z00_3617)) == ((long) 0));
				}
				return BBOOL(BgL_auxz00_3940);
			}
		}
	}



/* <fx */
	BGL_EXPORTED_DEF bool_t BGl_zc3fxzc3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_22, long BgL_n2z00_23)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 620 */
			return (BgL_n1z00_22 < BgL_n2z00_23);
		}
	}



/* _<fx */
	obj_t BGl__zc3fxzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2963,
		obj_t BgL_n1z00_2964, obj_t BgL_n2z00_2965)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 620 */
			{	/* Ieee/fixnum.scm 621 */
				bool_t BgL_auxz00_3958;

				{	/* Ieee/fixnum.scm 621 */
					long BgL_n1z00_3618;

					long BgL_n2z00_3619;

					{	/* Ieee/fixnum.scm 621 */
						obj_t BgL_auxz00_3959;

						if (INTEGERP(BgL_n1z00_2964))
							{	/* Ieee/fixnum.scm 621 */
								BgL_auxz00_3959 = BgL_n1z00_2964;
							}
						else
							{
								obj_t BgL_auxz00_3962;

								BgL_auxz00_3962 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 29481)),
									BGl_string2326z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2964);
								FAILURE(BgL_auxz00_3962, BFALSE, BFALSE);
							}
						BgL_n1z00_3618 = (long) CINT(BgL_auxz00_3959);
					}
					{	/* Ieee/fixnum.scm 621 */
						obj_t BgL_auxz00_3967;

						if (INTEGERP(BgL_n2z00_2965))
							{	/* Ieee/fixnum.scm 621 */
								BgL_auxz00_3967 = BgL_n2z00_2965;
							}
						else
							{
								obj_t BgL_auxz00_3970;

								BgL_auxz00_3970 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 29481)),
									BGl_string2326z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2965);
								FAILURE(BgL_auxz00_3970, BFALSE, BFALSE);
							}
						BgL_n2z00_3619 = (long) CINT(BgL_auxz00_3967);
					}
					BgL_auxz00_3958 = (BgL_n1z00_3618 < BgL_n2z00_3619);
				}
				return BBOOL(BgL_auxz00_3958);
			}
		}
	}



/* <elong */
	BGL_EXPORTED_DEF bool_t BGl_zc3elongzc3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_24, long BgL_n2z00_25)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 626 */
			return (BgL_n1z00_24 < BgL_n2z00_25);
		}
	}



/* _<elong */
	obj_t BGl__zc3elongzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2966,
		obj_t BgL_n1z00_2967, obj_t BgL_n2z00_2968)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 626 */
			{	/* Ieee/fixnum.scm 627 */
				bool_t BgL_auxz00_3978;

				{	/* Ieee/fixnum.scm 627 */
					long BgL_n1z00_3620;

					long BgL_n2z00_3621;

					{	/* Ieee/fixnum.scm 627 */
						obj_t BgL_auxz00_3979;

						if (ELONGP(BgL_n1z00_2967))
							{	/* Ieee/fixnum.scm 627 */
								BgL_auxz00_3979 = BgL_n1z00_2967;
							}
						else
							{
								obj_t BgL_auxz00_3982;

								BgL_auxz00_3982 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 29752)),
									BGl_string2327z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2967);
								FAILURE(BgL_auxz00_3982, BFALSE, BFALSE);
							}
						BgL_n1z00_3620 = BELONG_TO_LONG(BgL_auxz00_3979);
					}
					{	/* Ieee/fixnum.scm 627 */
						obj_t BgL_auxz00_3987;

						if (ELONGP(BgL_n2z00_2968))
							{	/* Ieee/fixnum.scm 627 */
								BgL_auxz00_3987 = BgL_n2z00_2968;
							}
						else
							{
								obj_t BgL_auxz00_3990;

								BgL_auxz00_3990 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 29752)),
									BGl_string2327z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2968);
								FAILURE(BgL_auxz00_3990, BFALSE, BFALSE);
							}
						BgL_n2z00_3621 = BELONG_TO_LONG(BgL_auxz00_3987);
					}
					BgL_auxz00_3978 = (BgL_n1z00_3620 < BgL_n2z00_3621);
				}
				return BBOOL(BgL_auxz00_3978);
			}
		}
	}



/* <llong */
	BGL_EXPORTED_DEF bool_t
		BGl_zc3llongzc3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_26,
		BGL_LONGLONG_T BgL_n2z00_27)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 632 */
			return (BgL_n1z00_26 < BgL_n2z00_27);
		}
	}



/* _<llong */
	obj_t BGl__zc3llongzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2969,
		obj_t BgL_n1z00_2970, obj_t BgL_n2z00_2971)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 632 */
			{	/* Ieee/fixnum.scm 633 */
				bool_t BgL_auxz00_3998;

				{	/* Ieee/fixnum.scm 633 */
					BGL_LONGLONG_T BgL_n1z00_3622;

					BGL_LONGLONG_T BgL_n2z00_3623;

					{	/* Ieee/fixnum.scm 633 */
						obj_t BgL_auxz00_3999;

						if (LLONGP(BgL_n1z00_2970))
							{	/* Ieee/fixnum.scm 633 */
								BgL_auxz00_3999 = BgL_n1z00_2970;
							}
						else
							{
								obj_t BgL_auxz00_4002;

								BgL_auxz00_4002 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30026)),
									BGl_string2328z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2970);
								FAILURE(BgL_auxz00_4002, BFALSE, BFALSE);
							}
						BgL_n1z00_3622 = BLLONG_TO_LLONG(BgL_auxz00_3999);
					}
					{	/* Ieee/fixnum.scm 633 */
						obj_t BgL_auxz00_4007;

						if (LLONGP(BgL_n2z00_2971))
							{	/* Ieee/fixnum.scm 633 */
								BgL_auxz00_4007 = BgL_n2z00_2971;
							}
						else
							{
								obj_t BgL_auxz00_4010;

								BgL_auxz00_4010 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30026)),
									BGl_string2328z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2971);
								FAILURE(BgL_auxz00_4010, BFALSE, BFALSE);
							}
						BgL_n2z00_3623 = BLLONG_TO_LLONG(BgL_auxz00_4007);
					}
					BgL_auxz00_3998 = (BgL_n1z00_3622 < BgL_n2z00_3623);
				}
				return BBOOL(BgL_auxz00_3998);
			}
		}
	}



/* <bx */
	BGL_EXPORTED_DEF bool_t BGl_zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_28, obj_t BgL_n2z00_29)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 638 */
			return ((long) (bgl_bignum_cmp(BgL_n1z00_28, BgL_n2z00_29)) < ((long) 0));
		}
	}



/* _<bx */
	obj_t BGl__zc3bxzc3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2972,
		obj_t BgL_n1z00_2973, obj_t BgL_n2z00_2974)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 638 */
			{	/* Ieee/fixnum.scm 639 */
				bool_t BgL_auxz00_4020;

				{	/* Ieee/fixnum.scm 639 */
					obj_t BgL_n1z00_3624;

					obj_t BgL_n2z00_3625;

					if (BIGNUMP(BgL_n1z00_2973))
						{	/* Ieee/fixnum.scm 639 */
							BgL_n1z00_3624 = BgL_n1z00_2973;
						}
					else
						{
							obj_t BgL_auxz00_4023;

							BgL_auxz00_4023 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 30302)),
								BGl_string2329z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2973);
							FAILURE(BgL_auxz00_4023, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n2z00_2974))
						{	/* Ieee/fixnum.scm 639 */
							BgL_n2z00_3625 = BgL_n2z00_2974;
						}
					else
						{
							obj_t BgL_auxz00_4029;

							BgL_auxz00_4029 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 30302)),
								BGl_string2329z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2974);
							FAILURE(BgL_auxz00_4029, BFALSE, BFALSE);
						}
					BgL_auxz00_4020 =
						(
						(long) (bgl_bignum_cmp(BgL_n1z00_3624,
								BgL_n2z00_3625)) < ((long) 0));
				}
				return BBOOL(BgL_auxz00_4020);
			}
		}
	}



/* >fx */
	BGL_EXPORTED_DEF bool_t BGl_ze3fxze3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_30, long BgL_n2z00_31)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 644 */
			return (BgL_n1z00_30 > BgL_n2z00_31);
		}
	}



/* _>fx */
	obj_t BGl__ze3fxze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2975,
		obj_t BgL_n1z00_2976, obj_t BgL_n2z00_2977)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 644 */
			{	/* Ieee/fixnum.scm 645 */
				bool_t BgL_auxz00_4038;

				{	/* Ieee/fixnum.scm 645 */
					long BgL_n1z00_3626;

					long BgL_n2z00_3627;

					{	/* Ieee/fixnum.scm 645 */
						obj_t BgL_auxz00_4039;

						if (INTEGERP(BgL_n1z00_2976))
							{	/* Ieee/fixnum.scm 645 */
								BgL_auxz00_4039 = BgL_n1z00_2976;
							}
						else
							{
								obj_t BgL_auxz00_4042;

								BgL_auxz00_4042 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30579)),
									BGl_string2330z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2976);
								FAILURE(BgL_auxz00_4042, BFALSE, BFALSE);
							}
						BgL_n1z00_3626 = (long) CINT(BgL_auxz00_4039);
					}
					{	/* Ieee/fixnum.scm 645 */
						obj_t BgL_auxz00_4047;

						if (INTEGERP(BgL_n2z00_2977))
							{	/* Ieee/fixnum.scm 645 */
								BgL_auxz00_4047 = BgL_n2z00_2977;
							}
						else
							{
								obj_t BgL_auxz00_4050;

								BgL_auxz00_4050 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30579)),
									BGl_string2330z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2977);
								FAILURE(BgL_auxz00_4050, BFALSE, BFALSE);
							}
						BgL_n2z00_3627 = (long) CINT(BgL_auxz00_4047);
					}
					BgL_auxz00_4038 = (BgL_n1z00_3626 > BgL_n2z00_3627);
				}
				return BBOOL(BgL_auxz00_4038);
			}
		}
	}



/* >elong */
	BGL_EXPORTED_DEF bool_t BGl_ze3elongze3zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_32, long BgL_n2z00_33)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 650 */
			return (BgL_n1z00_32 > BgL_n2z00_33);
		}
	}



/* _>elong */
	obj_t BGl__ze3elongze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2978,
		obj_t BgL_n1z00_2979, obj_t BgL_n2z00_2980)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 650 */
			{	/* Ieee/fixnum.scm 651 */
				bool_t BgL_auxz00_4058;

				{	/* Ieee/fixnum.scm 651 */
					long BgL_n1z00_3628;

					long BgL_n2z00_3629;

					{	/* Ieee/fixnum.scm 651 */
						obj_t BgL_auxz00_4059;

						if (ELONGP(BgL_n1z00_2979))
							{	/* Ieee/fixnum.scm 651 */
								BgL_auxz00_4059 = BgL_n1z00_2979;
							}
						else
							{
								obj_t BgL_auxz00_4062;

								BgL_auxz00_4062 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30850)),
									BGl_string2331z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2979);
								FAILURE(BgL_auxz00_4062, BFALSE, BFALSE);
							}
						BgL_n1z00_3628 = BELONG_TO_LONG(BgL_auxz00_4059);
					}
					{	/* Ieee/fixnum.scm 651 */
						obj_t BgL_auxz00_4067;

						if (ELONGP(BgL_n2z00_2980))
							{	/* Ieee/fixnum.scm 651 */
								BgL_auxz00_4067 = BgL_n2z00_2980;
							}
						else
							{
								obj_t BgL_auxz00_4070;

								BgL_auxz00_4070 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 30850)),
									BGl_string2331z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2980);
								FAILURE(BgL_auxz00_4070, BFALSE, BFALSE);
							}
						BgL_n2z00_3629 = BELONG_TO_LONG(BgL_auxz00_4067);
					}
					BgL_auxz00_4058 = (BgL_n1z00_3628 > BgL_n2z00_3629);
				}
				return BBOOL(BgL_auxz00_4058);
			}
		}
	}



/* >llong */
	BGL_EXPORTED_DEF bool_t
		BGl_ze3llongze3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_34,
		BGL_LONGLONG_T BgL_n2z00_35)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 656 */
			return (BgL_n1z00_34 > BgL_n2z00_35);
		}
	}



/* _>llong */
	obj_t BGl__ze3llongze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2981,
		obj_t BgL_n1z00_2982, obj_t BgL_n2z00_2983)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 656 */
			{	/* Ieee/fixnum.scm 657 */
				bool_t BgL_auxz00_4078;

				{	/* Ieee/fixnum.scm 657 */
					BGL_LONGLONG_T BgL_n1z00_3630;

					BGL_LONGLONG_T BgL_n2z00_3631;

					{	/* Ieee/fixnum.scm 657 */
						obj_t BgL_auxz00_4079;

						if (LLONGP(BgL_n1z00_2982))
							{	/* Ieee/fixnum.scm 657 */
								BgL_auxz00_4079 = BgL_n1z00_2982;
							}
						else
							{
								obj_t BgL_auxz00_4082;

								BgL_auxz00_4082 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31124)),
									BGl_string2332z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2982);
								FAILURE(BgL_auxz00_4082, BFALSE, BFALSE);
							}
						BgL_n1z00_3630 = BLLONG_TO_LLONG(BgL_auxz00_4079);
					}
					{	/* Ieee/fixnum.scm 657 */
						obj_t BgL_auxz00_4087;

						if (LLONGP(BgL_n2z00_2983))
							{	/* Ieee/fixnum.scm 657 */
								BgL_auxz00_4087 = BgL_n2z00_2983;
							}
						else
							{
								obj_t BgL_auxz00_4090;

								BgL_auxz00_4090 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31124)),
									BGl_string2332z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2983);
								FAILURE(BgL_auxz00_4090, BFALSE, BFALSE);
							}
						BgL_n2z00_3631 = BLLONG_TO_LLONG(BgL_auxz00_4087);
					}
					BgL_auxz00_4078 = (BgL_n1z00_3630 > BgL_n2z00_3631);
				}
				return BBOOL(BgL_auxz00_4078);
			}
		}
	}



/* >bx */
	BGL_EXPORTED_DEF bool_t BGl_ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_36, obj_t BgL_n2z00_37)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 662 */
			return ((long) (bgl_bignum_cmp(BgL_n1z00_36, BgL_n2z00_37)) > ((long) 0));
		}
	}



/* _>bx */
	obj_t BGl__ze3bxze3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2984,
		obj_t BgL_n1z00_2985, obj_t BgL_n2z00_2986)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 662 */
			{	/* Ieee/fixnum.scm 663 */
				bool_t BgL_auxz00_4100;

				{	/* Ieee/fixnum.scm 663 */
					obj_t BgL_n1z00_3632;

					obj_t BgL_n2z00_3633;

					if (BIGNUMP(BgL_n1z00_2985))
						{	/* Ieee/fixnum.scm 663 */
							BgL_n1z00_3632 = BgL_n1z00_2985;
						}
					else
						{
							obj_t BgL_auxz00_4103;

							BgL_auxz00_4103 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 31400)),
								BGl_string2333z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2985);
							FAILURE(BgL_auxz00_4103, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n2z00_2986))
						{	/* Ieee/fixnum.scm 663 */
							BgL_n2z00_3633 = BgL_n2z00_2986;
						}
					else
						{
							obj_t BgL_auxz00_4109;

							BgL_auxz00_4109 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 31400)),
								BGl_string2333z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2986);
							FAILURE(BgL_auxz00_4109, BFALSE, BFALSE);
						}
					BgL_auxz00_4100 =
						(
						(long) (bgl_bignum_cmp(BgL_n1z00_3632,
								BgL_n2z00_3633)) > ((long) 0));
				}
				return BBOOL(BgL_auxz00_4100);
			}
		}
	}



/* <=fx */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_38, long BgL_n2z00_39)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 668 */
			return (BgL_n1z00_38 <= BgL_n2z00_39);
		}
	}



/* _<=fx */
	obj_t BGl__zc3zd3fxz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2987,
		obj_t BgL_n1z00_2988, obj_t BgL_n2z00_2989)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 668 */
			{	/* Ieee/fixnum.scm 669 */
				bool_t BgL_auxz00_4118;

				{	/* Ieee/fixnum.scm 669 */
					long BgL_n1z00_3634;

					long BgL_n2z00_3635;

					{	/* Ieee/fixnum.scm 669 */
						obj_t BgL_auxz00_4119;

						if (INTEGERP(BgL_n1z00_2988))
							{	/* Ieee/fixnum.scm 669 */
								BgL_auxz00_4119 = BgL_n1z00_2988;
							}
						else
							{
								obj_t BgL_auxz00_4122;

								BgL_auxz00_4122 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31678)),
									BGl_string2334z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2988);
								FAILURE(BgL_auxz00_4122, BFALSE, BFALSE);
							}
						BgL_n1z00_3634 = (long) CINT(BgL_auxz00_4119);
					}
					{	/* Ieee/fixnum.scm 669 */
						obj_t BgL_auxz00_4127;

						if (INTEGERP(BgL_n2z00_2989))
							{	/* Ieee/fixnum.scm 669 */
								BgL_auxz00_4127 = BgL_n2z00_2989;
							}
						else
							{
								obj_t BgL_auxz00_4130;

								BgL_auxz00_4130 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31678)),
									BGl_string2334z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2989);
								FAILURE(BgL_auxz00_4130, BFALSE, BFALSE);
							}
						BgL_n2z00_3635 = (long) CINT(BgL_auxz00_4127);
					}
					BgL_auxz00_4118 = (BgL_n1z00_3634 <= BgL_n2z00_3635);
				}
				return BBOOL(BgL_auxz00_4118);
			}
		}
	}



/* <=elong */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_40, long BgL_n2z00_41)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 674 */
			return (BgL_n1z00_40 <= BgL_n2z00_41);
		}
	}



/* _<=elong */
	obj_t BGl__zc3zd3elongz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2990,
		obj_t BgL_n1z00_2991, obj_t BgL_n2z00_2992)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 674 */
			{	/* Ieee/fixnum.scm 675 */
				bool_t BgL_auxz00_4138;

				{	/* Ieee/fixnum.scm 675 */
					long BgL_n1z00_3636;

					long BgL_n2z00_3637;

					{	/* Ieee/fixnum.scm 675 */
						obj_t BgL_auxz00_4139;

						if (ELONGP(BgL_n1z00_2991))
							{	/* Ieee/fixnum.scm 675 */
								BgL_auxz00_4139 = BgL_n1z00_2991;
							}
						else
							{
								obj_t BgL_auxz00_4142;

								BgL_auxz00_4142 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31951)),
									BGl_string2335z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2991);
								FAILURE(BgL_auxz00_4142, BFALSE, BFALSE);
							}
						BgL_n1z00_3636 = BELONG_TO_LONG(BgL_auxz00_4139);
					}
					{	/* Ieee/fixnum.scm 675 */
						obj_t BgL_auxz00_4147;

						if (ELONGP(BgL_n2z00_2992))
							{	/* Ieee/fixnum.scm 675 */
								BgL_auxz00_4147 = BgL_n2z00_2992;
							}
						else
							{
								obj_t BgL_auxz00_4150;

								BgL_auxz00_4150 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 31951)),
									BGl_string2335z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2992);
								FAILURE(BgL_auxz00_4150, BFALSE, BFALSE);
							}
						BgL_n2z00_3637 = BELONG_TO_LONG(BgL_auxz00_4147);
					}
					BgL_auxz00_4138 = (BgL_n1z00_3636 <= BgL_n2z00_3637);
				}
				return BBOOL(BgL_auxz00_4138);
			}
		}
	}



/* <=llong */
	BGL_EXPORTED_DEF bool_t
		BGl_zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_42,
		BGL_LONGLONG_T BgL_n2z00_43)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 680 */
			return (BgL_n1z00_42 <= BgL_n2z00_43);
		}
	}



/* _<=llong */
	obj_t BGl__zc3zd3llongz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2993,
		obj_t BgL_n1z00_2994, obj_t BgL_n2z00_2995)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 680 */
			{	/* Ieee/fixnum.scm 681 */
				bool_t BgL_auxz00_4158;

				{	/* Ieee/fixnum.scm 681 */
					BGL_LONGLONG_T BgL_n1z00_3638;

					BGL_LONGLONG_T BgL_n2z00_3639;

					{	/* Ieee/fixnum.scm 681 */
						obj_t BgL_auxz00_4159;

						if (LLONGP(BgL_n1z00_2994))
							{	/* Ieee/fixnum.scm 681 */
								BgL_auxz00_4159 = BgL_n1z00_2994;
							}
						else
							{
								obj_t BgL_auxz00_4162;

								BgL_auxz00_4162 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 32227)),
									BGl_string2336z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_2994);
								FAILURE(BgL_auxz00_4162, BFALSE, BFALSE);
							}
						BgL_n1z00_3638 = BLLONG_TO_LLONG(BgL_auxz00_4159);
					}
					{	/* Ieee/fixnum.scm 681 */
						obj_t BgL_auxz00_4167;

						if (LLONGP(BgL_n2z00_2995))
							{	/* Ieee/fixnum.scm 681 */
								BgL_auxz00_4167 = BgL_n2z00_2995;
							}
						else
							{
								obj_t BgL_auxz00_4170;

								BgL_auxz00_4170 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 32227)),
									BGl_string2336z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_2995);
								FAILURE(BgL_auxz00_4170, BFALSE, BFALSE);
							}
						BgL_n2z00_3639 = BLLONG_TO_LLONG(BgL_auxz00_4167);
					}
					BgL_auxz00_4158 = (BgL_n1z00_3638 <= BgL_n2z00_3639);
				}
				return BBOOL(BgL_auxz00_4158);
			}
		}
	}



/* <=bx */
	BGL_EXPORTED_DEF bool_t BGl_zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_44, obj_t BgL_n2z00_45)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 686 */
			return
				((long) (bgl_bignum_cmp(BgL_n1z00_44, BgL_n2z00_45)) <= ((long) 0));
		}
	}



/* _<=bx */
	obj_t BGl__zc3zd3bxz10zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2996,
		obj_t BgL_n1z00_2997, obj_t BgL_n2z00_2998)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 686 */
			{	/* Ieee/fixnum.scm 687 */
				bool_t BgL_auxz00_4180;

				{	/* Ieee/fixnum.scm 687 */
					obj_t BgL_n1z00_3640;

					obj_t BgL_n2z00_3641;

					if (BIGNUMP(BgL_n1z00_2997))
						{	/* Ieee/fixnum.scm 687 */
							BgL_n1z00_3640 = BgL_n1z00_2997;
						}
					else
						{
							obj_t BgL_auxz00_4183;

							BgL_auxz00_4183 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 32506)),
								BGl_string2337z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_2997);
							FAILURE(BgL_auxz00_4183, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n2z00_2998))
						{	/* Ieee/fixnum.scm 687 */
							BgL_n2z00_3641 = BgL_n2z00_2998;
						}
					else
						{
							obj_t BgL_auxz00_4189;

							BgL_auxz00_4189 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 32506)),
								BGl_string2337z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_2998);
							FAILURE(BgL_auxz00_4189, BFALSE, BFALSE);
						}
					BgL_auxz00_4180 =
						(
						(long) (bgl_bignum_cmp(BgL_n1z00_3640,
								BgL_n2z00_3641)) <= ((long) 0));
				}
				return BBOOL(BgL_auxz00_4180);
			}
		}
	}



/* >=fx */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_46, long BgL_n2z00_47)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 692 */
			return (BgL_n1z00_46 >= BgL_n2z00_47);
		}
	}



/* _>=fx */
	obj_t BGl__ze3zd3fxz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_2999,
		obj_t BgL_n1z00_3000, obj_t BgL_n2z00_3001)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 692 */
			{	/* Ieee/fixnum.scm 693 */
				bool_t BgL_auxz00_4198;

				{	/* Ieee/fixnum.scm 693 */
					long BgL_n1z00_3642;

					long BgL_n2z00_3643;

					{	/* Ieee/fixnum.scm 693 */
						obj_t BgL_auxz00_4199;

						if (INTEGERP(BgL_n1z00_3000))
							{	/* Ieee/fixnum.scm 693 */
								BgL_auxz00_4199 = BgL_n1z00_3000;
							}
						else
							{
								obj_t BgL_auxz00_4202;

								BgL_auxz00_4202 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 32784)),
									BGl_string2338z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3000);
								FAILURE(BgL_auxz00_4202, BFALSE, BFALSE);
							}
						BgL_n1z00_3642 = (long) CINT(BgL_auxz00_4199);
					}
					{	/* Ieee/fixnum.scm 693 */
						obj_t BgL_auxz00_4207;

						if (INTEGERP(BgL_n2z00_3001))
							{	/* Ieee/fixnum.scm 693 */
								BgL_auxz00_4207 = BgL_n2z00_3001;
							}
						else
							{
								obj_t BgL_auxz00_4210;

								BgL_auxz00_4210 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 32784)),
									BGl_string2338z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3001);
								FAILURE(BgL_auxz00_4210, BFALSE, BFALSE);
							}
						BgL_n2z00_3643 = (long) CINT(BgL_auxz00_4207);
					}
					BgL_auxz00_4198 = (BgL_n1z00_3642 >= BgL_n2z00_3643);
				}
				return BBOOL(BgL_auxz00_4198);
			}
		}
	}



/* >=elong */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_48, long BgL_n2z00_49)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 698 */
			return (BgL_n1z00_48 >= BgL_n2z00_49);
		}
	}



/* _>=elong */
	obj_t BGl__ze3zd3elongz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3002,
		obj_t BgL_n1z00_3003, obj_t BgL_n2z00_3004)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 698 */
			{	/* Ieee/fixnum.scm 699 */
				bool_t BgL_auxz00_4218;

				{	/* Ieee/fixnum.scm 699 */
					long BgL_n1z00_3644;

					long BgL_n2z00_3645;

					{	/* Ieee/fixnum.scm 699 */
						obj_t BgL_auxz00_4219;

						if (ELONGP(BgL_n1z00_3003))
							{	/* Ieee/fixnum.scm 699 */
								BgL_auxz00_4219 = BgL_n1z00_3003;
							}
						else
							{
								obj_t BgL_auxz00_4222;

								BgL_auxz00_4222 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 33057)),
									BGl_string2339z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3003);
								FAILURE(BgL_auxz00_4222, BFALSE, BFALSE);
							}
						BgL_n1z00_3644 = BELONG_TO_LONG(BgL_auxz00_4219);
					}
					{	/* Ieee/fixnum.scm 699 */
						obj_t BgL_auxz00_4227;

						if (ELONGP(BgL_n2z00_3004))
							{	/* Ieee/fixnum.scm 699 */
								BgL_auxz00_4227 = BgL_n2z00_3004;
							}
						else
							{
								obj_t BgL_auxz00_4230;

								BgL_auxz00_4230 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 33057)),
									BGl_string2339z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3004);
								FAILURE(BgL_auxz00_4230, BFALSE, BFALSE);
							}
						BgL_n2z00_3645 = BELONG_TO_LONG(BgL_auxz00_4227);
					}
					BgL_auxz00_4218 = (BgL_n1z00_3644 >= BgL_n2z00_3645);
				}
				return BBOOL(BgL_auxz00_4218);
			}
		}
	}



/* >=llong */
	BGL_EXPORTED_DEF bool_t
		BGl_ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_50,
		BGL_LONGLONG_T BgL_n2z00_51)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 704 */
			return (BgL_n1z00_50 >= BgL_n2z00_51);
		}
	}



/* _>=llong */
	obj_t BGl__ze3zd3llongz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3005,
		obj_t BgL_n1z00_3006, obj_t BgL_n2z00_3007)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 704 */
			{	/* Ieee/fixnum.scm 705 */
				bool_t BgL_auxz00_4238;

				{	/* Ieee/fixnum.scm 705 */
					BGL_LONGLONG_T BgL_n1z00_3646;

					BGL_LONGLONG_T BgL_n2z00_3647;

					{	/* Ieee/fixnum.scm 705 */
						obj_t BgL_auxz00_4239;

						if (LLONGP(BgL_n1z00_3006))
							{	/* Ieee/fixnum.scm 705 */
								BgL_auxz00_4239 = BgL_n1z00_3006;
							}
						else
							{
								obj_t BgL_auxz00_4242;

								BgL_auxz00_4242 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 33333)),
									BGl_string2340z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3006);
								FAILURE(BgL_auxz00_4242, BFALSE, BFALSE);
							}
						BgL_n1z00_3646 = BLLONG_TO_LLONG(BgL_auxz00_4239);
					}
					{	/* Ieee/fixnum.scm 705 */
						obj_t BgL_auxz00_4247;

						if (LLONGP(BgL_n2z00_3007))
							{	/* Ieee/fixnum.scm 705 */
								BgL_auxz00_4247 = BgL_n2z00_3007;
							}
						else
							{
								obj_t BgL_auxz00_4250;

								BgL_auxz00_4250 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 33333)),
									BGl_string2340z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3007);
								FAILURE(BgL_auxz00_4250, BFALSE, BFALSE);
							}
						BgL_n2z00_3647 = BLLONG_TO_LLONG(BgL_auxz00_4247);
					}
					BgL_auxz00_4238 = (BgL_n1z00_3646 >= BgL_n2z00_3647);
				}
				return BBOOL(BgL_auxz00_4238);
			}
		}
	}



/* >=bx */
	BGL_EXPORTED_DEF bool_t BGl_ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_52, obj_t BgL_n2z00_53)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 710 */
			return
				((long) (bgl_bignum_cmp(BgL_n1z00_52, BgL_n2z00_53)) >= ((long) 0));
		}
	}



/* _>=bx */
	obj_t BGl__ze3zd3bxz30zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3008,
		obj_t BgL_n1z00_3009, obj_t BgL_n2z00_3010)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 710 */
			{	/* Ieee/fixnum.scm 711 */
				bool_t BgL_auxz00_4260;

				{	/* Ieee/fixnum.scm 711 */
					obj_t BgL_n1z00_3648;

					obj_t BgL_n2z00_3649;

					if (BIGNUMP(BgL_n1z00_3009))
						{	/* Ieee/fixnum.scm 711 */
							BgL_n1z00_3648 = BgL_n1z00_3009;
						}
					else
						{
							obj_t BgL_auxz00_4263;

							BgL_auxz00_4263 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 33612)),
								BGl_string2341z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3009);
							FAILURE(BgL_auxz00_4263, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n2z00_3010))
						{	/* Ieee/fixnum.scm 711 */
							BgL_n2z00_3649 = BgL_n2z00_3010;
						}
					else
						{
							obj_t BgL_auxz00_4269;

							BgL_auxz00_4269 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 33612)),
								BGl_string2341z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3010);
							FAILURE(BgL_auxz00_4269, BFALSE, BFALSE);
						}
					BgL_auxz00_4260 =
						(
						(long) (bgl_bignum_cmp(BgL_n1z00_3648,
								BgL_n2z00_3649)) >= ((long) 0));
				}
				return BBOOL(BgL_auxz00_4260);
			}
		}
	}



/* zerofx? */
	BGL_EXPORTED_DEF bool_t BGl_za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_54)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 716 */
			return (BgL_nz00_54 == ((long) 0));
		}
	}



/* _zerofx? */
	obj_t BGl__za7erofxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3011,
		obj_t BgL_nz00_3012)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 716 */
			{	/* Ieee/fixnum.scm 717 */
				bool_t BgL_auxz00_4278;

				{	/* Ieee/fixnum.scm 717 */
					long BgL_nz00_3650;

					{	/* Ieee/fixnum.scm 717 */
						obj_t BgL_auxz00_4279;

						if (INTEGERP(BgL_nz00_3012))
							{	/* Ieee/fixnum.scm 717 */
								BgL_auxz00_4279 = BgL_nz00_3012;
							}
						else
							{
								obj_t BgL_auxz00_4282;

								BgL_auxz00_4282 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 33889)),
									BGl_string2342z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3012);
								FAILURE(BgL_auxz00_4282, BFALSE, BFALSE);
							}
						BgL_nz00_3650 = (long) CINT(BgL_auxz00_4279);
					}
					BgL_auxz00_4278 = (BgL_nz00_3650 == ((long) 0));
				}
				return BBOOL(BgL_auxz00_4278);
			}
		}
	}



/* zeroelong? */
	BGL_EXPORTED_DEF bool_t BGl_za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_55)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 722 */
			return (BgL_nz00_55 == ((long) 0));
		}
	}



/* _zeroelong? */
	obj_t BGl__za7eroelongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3013, obj_t BgL_nz00_3014)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 722 */
			{	/* Ieee/fixnum.scm 723 */
				bool_t BgL_auxz00_4290;

				{	/* Ieee/fixnum.scm 723 */
					long BgL_nz00_3651;

					{	/* Ieee/fixnum.scm 723 */
						obj_t BgL_auxz00_4291;

						if (ELONGP(BgL_nz00_3014))
							{	/* Ieee/fixnum.scm 723 */
								BgL_auxz00_4291 = BgL_nz00_3014;
							}
						else
							{
								obj_t BgL_auxz00_4294;

								BgL_auxz00_4294 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 34156)),
									BGl_string2343z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3014);
								FAILURE(BgL_auxz00_4294, BFALSE, BFALSE);
							}
						BgL_nz00_3651 = BELONG_TO_LONG(BgL_auxz00_4291);
					}
					BgL_auxz00_4290 = (BgL_nz00_3651 == ((long) 0));
				}
				return BBOOL(BgL_auxz00_4290);
			}
		}
	}



/* zerollong? */
	BGL_EXPORTED_DEF bool_t
		BGl_za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_nz00_56)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 728 */
			return (BgL_nz00_56 == ((BGL_LONGLONG_T) 0));
		}
	}



/* _zerollong? */
	obj_t BGl__za7erollongzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3015, obj_t BgL_nz00_3016)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 728 */
			{	/* Ieee/fixnum.scm 729 */
				bool_t BgL_auxz00_4302;

				{	/* Ieee/fixnum.scm 729 */
					BGL_LONGLONG_T BgL_nz00_3652;

					{	/* Ieee/fixnum.scm 729 */
						obj_t BgL_auxz00_4303;

						if (LLONGP(BgL_nz00_3016))
							{	/* Ieee/fixnum.scm 729 */
								BgL_auxz00_4303 = BgL_nz00_3016;
							}
						else
							{
								obj_t BgL_auxz00_4306;

								BgL_auxz00_4306 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 34428)),
									BGl_string2344z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3016);
								FAILURE(BgL_auxz00_4306, BFALSE, BFALSE);
							}
						BgL_nz00_3652 = BLLONG_TO_LLONG(BgL_auxz00_4303);
					}
					BgL_auxz00_4302 = (BgL_nz00_3652 == ((BGL_LONGLONG_T) 0));
				}
				return BBOOL(BgL_auxz00_4302);
			}
		}
	}



/* zerobx? */
	BGL_EXPORTED_DEF bool_t BGl_za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_nz00_57)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 734 */
			return BXZERO(BgL_nz00_57);
		}
	}



/* _zerobx? */
	obj_t BGl__za7erobxzf3z54zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3017,
		obj_t BgL_nz00_3018)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 734 */
			{	/* Ieee/fixnum.scm 735 */
				bool_t BgL_auxz00_4314;

				{	/* Ieee/fixnum.scm 735 */
					obj_t BgL_nz00_3653;

					if (BIGNUMP(BgL_nz00_3018))
						{	/* Ieee/fixnum.scm 735 */
							BgL_nz00_3653 = BgL_nz00_3018;
						}
					else
						{
							obj_t BgL_auxz00_4317;

							BgL_auxz00_4317 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 34697)),
								BGl_string2345z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3018);
							FAILURE(BgL_auxz00_4317, BFALSE, BFALSE);
						}
					BgL_auxz00_4314 = BXZERO(BgL_nz00_3653);
				}
				return BBOOL(BgL_auxz00_4314);
			}
		}
	}



/* positivefx? */
	BGL_EXPORTED_DEF bool_t BGl_positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_58)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 740 */
			return (BgL_nz00_58 > ((long) 0));
		}
	}



/* _positivefx? */
	obj_t BGl__positivefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3019,
		obj_t BgL_nz00_3020)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 740 */
			{	/* Ieee/fixnum.scm 741 */
				bool_t BgL_auxz00_4324;

				{	/* Ieee/fixnum.scm 741 */
					long BgL_nz00_3654;

					{	/* Ieee/fixnum.scm 741 */
						obj_t BgL_auxz00_4325;

						if (INTEGERP(BgL_nz00_3020))
							{	/* Ieee/fixnum.scm 741 */
								BgL_auxz00_4325 = BgL_nz00_3020;
							}
						else
							{
								obj_t BgL_auxz00_4328;

								BgL_auxz00_4328 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 34968)),
									BGl_string2346z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3020);
								FAILURE(BgL_auxz00_4328, BFALSE, BFALSE);
							}
						BgL_nz00_3654 = (long) CINT(BgL_auxz00_4325);
					}
					BgL_auxz00_4324 = (BgL_nz00_3654 > ((long) 0));
				}
				return BBOOL(BgL_auxz00_4324);
			}
		}
	}



/* positiveelong? */
	BGL_EXPORTED_DEF bool_t
		BGl_positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_59)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 746 */
			return (BgL_nz00_59 > ((long) 0));
		}
	}



/* _positiveelong? */
	obj_t BGl__positiveelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3021, obj_t BgL_nz00_3022)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 746 */
			{	/* Ieee/fixnum.scm 747 */
				bool_t BgL_auxz00_4336;

				{	/* Ieee/fixnum.scm 747 */
					long BgL_nz00_3655;

					{	/* Ieee/fixnum.scm 747 */
						obj_t BgL_auxz00_4337;

						if (ELONGP(BgL_nz00_3022))
							{	/* Ieee/fixnum.scm 747 */
								BgL_auxz00_4337 = BgL_nz00_3022;
							}
						else
							{
								obj_t BgL_auxz00_4340;

								BgL_auxz00_4340 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 35239)),
									BGl_string2347z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3022);
								FAILURE(BgL_auxz00_4340, BFALSE, BFALSE);
							}
						BgL_nz00_3655 = BELONG_TO_LONG(BgL_auxz00_4337);
					}
					BgL_auxz00_4336 = (BgL_nz00_3655 > ((long) 0));
				}
				return BBOOL(BgL_auxz00_4336);
			}
		}
	}



/* positivellong? */
	BGL_EXPORTED_DEF bool_t
		BGl_positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_nz00_60)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 752 */
			return (BgL_nz00_60 > ((BGL_LONGLONG_T) 0));
		}
	}



/* _positivellong? */
	obj_t BGl__positivellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3023, obj_t BgL_nz00_3024)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 752 */
			{	/* Ieee/fixnum.scm 753 */
				bool_t BgL_auxz00_4348;

				{	/* Ieee/fixnum.scm 753 */
					BGL_LONGLONG_T BgL_nz00_3656;

					{	/* Ieee/fixnum.scm 753 */
						obj_t BgL_auxz00_4349;

						if (LLONGP(BgL_nz00_3024))
							{	/* Ieee/fixnum.scm 753 */
								BgL_auxz00_4349 = BgL_nz00_3024;
							}
						else
							{
								obj_t BgL_auxz00_4352;

								BgL_auxz00_4352 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 35515)),
									BGl_string2348z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3024);
								FAILURE(BgL_auxz00_4352, BFALSE, BFALSE);
							}
						BgL_nz00_3656 = BLLONG_TO_LLONG(BgL_auxz00_4349);
					}
					BgL_auxz00_4348 = (BgL_nz00_3656 > ((BGL_LONGLONG_T) 0));
				}
				return BBOOL(BgL_auxz00_4348);
			}
		}
	}



/* positivebx? */
	BGL_EXPORTED_DEF bool_t BGl_positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_nz00_61)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 758 */
			return BXPOSITIVE(BgL_nz00_61);
		}
	}



/* _positivebx? */
	obj_t BGl__positivebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3025,
		obj_t BgL_nz00_3026)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 758 */
			{	/* Ieee/fixnum.scm 759 */
				bool_t BgL_auxz00_4360;

				{	/* Ieee/fixnum.scm 759 */
					obj_t BgL_nz00_3657;

					if (BIGNUMP(BgL_nz00_3026))
						{	/* Ieee/fixnum.scm 759 */
							BgL_nz00_3657 = BgL_nz00_3026;
						}
					else
						{
							obj_t BgL_auxz00_4363;

							BgL_auxz00_4363 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 35788)),
								BGl_string2349z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3026);
							FAILURE(BgL_auxz00_4363, BFALSE, BFALSE);
						}
					BgL_auxz00_4360 = BXPOSITIVE(BgL_nz00_3657);
				}
				return BBOOL(BgL_auxz00_4360);
			}
		}
	}



/* negativefx? */
	BGL_EXPORTED_DEF bool_t BGl_negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_62)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 764 */
			return (BgL_nz00_62 < ((long) 0));
		}
	}



/* _negativefx? */
	obj_t BGl__negativefxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3027,
		obj_t BgL_nz00_3028)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 764 */
			{	/* Ieee/fixnum.scm 765 */
				bool_t BgL_auxz00_4370;

				{	/* Ieee/fixnum.scm 765 */
					long BgL_nz00_3658;

					{	/* Ieee/fixnum.scm 765 */
						obj_t BgL_auxz00_4371;

						if (INTEGERP(BgL_nz00_3028))
							{	/* Ieee/fixnum.scm 765 */
								BgL_auxz00_4371 = BgL_nz00_3028;
							}
						else
							{
								obj_t BgL_auxz00_4374;

								BgL_auxz00_4374 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 36063)),
									BGl_string2350z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3028);
								FAILURE(BgL_auxz00_4374, BFALSE, BFALSE);
							}
						BgL_nz00_3658 = (long) CINT(BgL_auxz00_4371);
					}
					BgL_auxz00_4370 = (BgL_nz00_3658 < ((long) 0));
				}
				return BBOOL(BgL_auxz00_4370);
			}
		}
	}



/* negativeelong? */
	BGL_EXPORTED_DEF bool_t
		BGl_negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long BgL_nz00_63)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 770 */
			return (BgL_nz00_63 < ((long) 0));
		}
	}



/* _negativeelong? */
	obj_t BGl__negativeelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3029, obj_t BgL_nz00_3030)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 770 */
			{	/* Ieee/fixnum.scm 771 */
				bool_t BgL_auxz00_4382;

				{	/* Ieee/fixnum.scm 771 */
					long BgL_nz00_3659;

					{	/* Ieee/fixnum.scm 771 */
						obj_t BgL_auxz00_4383;

						if (ELONGP(BgL_nz00_3030))
							{	/* Ieee/fixnum.scm 771 */
								BgL_auxz00_4383 = BgL_nz00_3030;
							}
						else
							{
								obj_t BgL_auxz00_4386;

								BgL_auxz00_4386 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 36334)),
									BGl_string2351z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3030);
								FAILURE(BgL_auxz00_4386, BFALSE, BFALSE);
							}
						BgL_nz00_3659 = BELONG_TO_LONG(BgL_auxz00_4383);
					}
					BgL_auxz00_4382 = (BgL_nz00_3659 < ((long) 0));
				}
				return BBOOL(BgL_auxz00_4382);
			}
		}
	}



/* negativellong? */
	BGL_EXPORTED_DEF bool_t
		BGl_negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_nz00_64)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 776 */
			return (BgL_nz00_64 < ((BGL_LONGLONG_T) 0));
		}
	}



/* _negativellong? */
	obj_t BGl__negativellongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3031, obj_t BgL_nz00_3032)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 776 */
			{	/* Ieee/fixnum.scm 777 */
				bool_t BgL_auxz00_4394;

				{	/* Ieee/fixnum.scm 777 */
					BGL_LONGLONG_T BgL_nz00_3660;

					{	/* Ieee/fixnum.scm 777 */
						obj_t BgL_auxz00_4395;

						if (LLONGP(BgL_nz00_3032))
							{	/* Ieee/fixnum.scm 777 */
								BgL_auxz00_4395 = BgL_nz00_3032;
							}
						else
							{
								obj_t BgL_auxz00_4398;

								BgL_auxz00_4398 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 36610)),
									BGl_string2352z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3032);
								FAILURE(BgL_auxz00_4398, BFALSE, BFALSE);
							}
						BgL_nz00_3660 = BLLONG_TO_LLONG(BgL_auxz00_4395);
					}
					BgL_auxz00_4394 = (BgL_nz00_3660 < ((BGL_LONGLONG_T) 0));
				}
				return BBOOL(BgL_auxz00_4394);
			}
		}
	}



/* negativebx? */
	BGL_EXPORTED_DEF bool_t BGl_negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_nz00_65)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 782 */
			return BXNEGATIVE(BgL_nz00_65);
		}
	}



/* _negativebx? */
	obj_t BGl__negativebxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3033,
		obj_t BgL_nz00_3034)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 782 */
			{	/* Ieee/fixnum.scm 783 */
				bool_t BgL_auxz00_4406;

				{	/* Ieee/fixnum.scm 783 */
					obj_t BgL_nz00_3661;

					if (BIGNUMP(BgL_nz00_3034))
						{	/* Ieee/fixnum.scm 783 */
							BgL_nz00_3661 = BgL_nz00_3034;
						}
					else
						{
							obj_t BgL_auxz00_4409;

							BgL_auxz00_4409 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 36883)),
								BGl_string2353z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3034);
							FAILURE(BgL_auxz00_4409, BFALSE, BFALSE);
						}
					BgL_auxz00_4406 = BXNEGATIVE(BgL_nz00_3661);
				}
				return BBOOL(BgL_auxz00_4406);
			}
		}
	}



/* odd? */
	BGL_EXPORTED_DEF bool_t BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_66)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 788 */
			if (INTEGERP(BgL_xz00_66))
				{	/* Ieee/fixnum.scm 790 */
					return ODDP_FX((long) CINT(BgL_xz00_66));
				}
			else
				{	/* Ieee/fixnum.scm 790 */
					if (ELONGP(BgL_xz00_66))
						{	/* Ieee/fixnum.scm 791 */
							bool_t BgL_res1907z00_1430;

							{	/* Ieee/fixnum.scm 791 */
								long BgL_xz00_1420;

								BgL_xz00_1420 = BELONG_TO_LONG(BgL_xz00_66);
								{	/* Ieee/fixnum.scm 791 */
									bool_t BgL_testz00_4422;

									{	/* Ieee/fixnum.scm 791 */
										bool_t BgL_res1906z00_1429;

										{	/* Ieee/fixnum.scm 791 */
											long BgL_arg1258z00_1423;

											BgL_arg1258z00_1423 = (BgL_xz00_1420 % ((long) 2));
											BgL_res1906z00_1429 = (BgL_arg1258z00_1423 == ((long) 0));
										}
										BgL_testz00_4422 = BgL_res1906z00_1429;
									}
									if (BgL_testz00_4422)
										{	/* Ieee/fixnum.scm 791 */
											BgL_res1907z00_1430 = ((bool_t) 0);
										}
									else
										{	/* Ieee/fixnum.scm 791 */
											BgL_res1907z00_1430 = ((bool_t) 1);
										}
								}
							}
							return BgL_res1907z00_1430;
						}
					else
						{	/* Ieee/fixnum.scm 791 */
							if (LLONGP(BgL_xz00_66))
								{	/* Ieee/fixnum.scm 792 */
									bool_t BgL_res1909z00_1442;

									{	/* Ieee/fixnum.scm 792 */
										BGL_LONGLONG_T BgL_xz00_1432;

										BgL_xz00_1432 = BLLONG_TO_LLONG(BgL_xz00_66);
										{	/* Ieee/fixnum.scm 792 */
											bool_t BgL_testz00_4428;

											{	/* Ieee/fixnum.scm 792 */
												bool_t BgL_res1908z00_1441;

												{	/* Ieee/fixnum.scm 792 */
													BGL_LONGLONG_T BgL_arg1259z00_1435;

													BgL_arg1259z00_1435 =
														(BgL_xz00_1432 % ((BGL_LONGLONG_T) 2));
													BgL_res1908z00_1441 =
														(BgL_arg1259z00_1435 == ((BGL_LONGLONG_T) 0));
												}
												BgL_testz00_4428 = BgL_res1908z00_1441;
											}
											if (BgL_testz00_4428)
												{	/* Ieee/fixnum.scm 792 */
													BgL_res1909z00_1442 = ((bool_t) 0);
												}
											else
												{	/* Ieee/fixnum.scm 792 */
													BgL_res1909z00_1442 = ((bool_t) 1);
												}
										}
									}
									return BgL_res1909z00_1442;
								}
							else
								{	/* Ieee/fixnum.scm 792 */
									if (BIGNUMP(BgL_xz00_66))
										{	/* Ieee/fixnum.scm 793 */
											return bgl_bignum_odd(BgL_xz00_66);
										}
									else
										{	/* Ieee/fixnum.scm 793 */
											return
												CBOOL(BGl_errorz00zz__errorz00
												(BGl_string2354z00zz__r4_numbers_6_5_fixnumz00,
													BGl_string2355z00zz__r4_numbers_6_5_fixnumz00,
													BgL_xz00_66));
										}
								}
						}
				}
		}
	}



/* _odd? */
	obj_t BGl__oddzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3035,
		obj_t BgL_xz00_3036)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 788 */
			return BBOOL(BGl_oddzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3036));
		}
	}



/* oddfx? */
	BGL_EXPORTED_DEF bool_t BGl_oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_67)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 799 */
			return ODDP_FX(BgL_xz00_67);
		}
	}



/* _oddfx? */
	obj_t BGl__oddfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3037,
		obj_t BgL_xz00_3038)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 799 */
			{	/* Ieee/fixnum.scm 800 */
				bool_t BgL_auxz00_4439;

				{	/* Ieee/fixnum.scm 800 */
					long BgL_xz00_3662;

					{	/* Ieee/fixnum.scm 800 */
						obj_t BgL_auxz00_4440;

						if (INTEGERP(BgL_xz00_3038))
							{	/* Ieee/fixnum.scm 800 */
								BgL_auxz00_4440 = BgL_xz00_3038;
							}
						else
							{
								obj_t BgL_auxz00_4443;

								BgL_auxz00_4443 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 37574)),
									BGl_string2356z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3038);
								FAILURE(BgL_auxz00_4443, BFALSE, BFALSE);
							}
						BgL_xz00_3662 = (long) CINT(BgL_auxz00_4440);
					}
					BgL_auxz00_4439 = ODDP_FX(BgL_xz00_3662);
				}
				return BBOOL(BgL_auxz00_4439);
			}
		}
	}



/* oddelong? */
	BGL_EXPORTED_DEF bool_t BGl_oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_68)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 805 */
			{	/* Ieee/fixnum.scm 806 */
				bool_t BgL_testz00_4450;

				{	/* Ieee/fixnum.scm 806 */
					bool_t BgL_res1910z00_3663;

					{	/* Ieee/fixnum.scm 806 */
						long BgL_arg1258z00_3664;

						BgL_arg1258z00_3664 = (BgL_xz00_68 % ((long) 2));
						BgL_res1910z00_3663 = (BgL_arg1258z00_3664 == ((long) 0));
					}
					BgL_testz00_4450 = BgL_res1910z00_3663;
				}
				if (BgL_testz00_4450)
					{	/* Ieee/fixnum.scm 806 */
						return ((bool_t) 0);
					}
				else
					{	/* Ieee/fixnum.scm 806 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _oddelong? */
	obj_t BGl__oddelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3039,
		obj_t BgL_xz00_3040)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 805 */
			{	/* Ieee/fixnum.scm 806 */
				bool_t BgL_auxz00_4453;

				{	/* Ieee/fixnum.scm 806 */
					long BgL_xz00_3665;

					{	/* Ieee/fixnum.scm 806 */
						obj_t BgL_auxz00_4454;

						if (ELONGP(BgL_xz00_3040))
							{	/* Ieee/fixnum.scm 806 */
								BgL_auxz00_4454 = BgL_xz00_3040;
							}
						else
							{
								obj_t BgL_auxz00_4457;

								BgL_auxz00_4457 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 37843)),
									BGl_string2357z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3040);
								FAILURE(BgL_auxz00_4457, BFALSE, BFALSE);
							}
						BgL_xz00_3665 = BELONG_TO_LONG(BgL_auxz00_4454);
					}
					{	/* Ieee/fixnum.scm 806 */
						bool_t BgL_testz00_4462;

						{	/* Ieee/fixnum.scm 806 */
							bool_t BgL_res1910z00_3666;

							{	/* Ieee/fixnum.scm 806 */
								long BgL_arg1258z00_3667;

								BgL_arg1258z00_3667 = (BgL_xz00_3665 % ((long) 2));
								BgL_res1910z00_3666 = (BgL_arg1258z00_3667 == ((long) 0));
							}
							BgL_testz00_4462 = BgL_res1910z00_3666;
						}
						if (BgL_testz00_4462)
							{	/* Ieee/fixnum.scm 806 */
								BgL_auxz00_4453 = ((bool_t) 0);
							}
						else
							{	/* Ieee/fixnum.scm 806 */
								BgL_auxz00_4453 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_auxz00_4453);
			}
		}
	}



/* oddllong? */
	BGL_EXPORTED_DEF bool_t
		BGl_oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_69)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 811 */
			{	/* Ieee/fixnum.scm 812 */
				bool_t BgL_testz00_4466;

				{	/* Ieee/fixnum.scm 812 */
					bool_t BgL_res1911z00_3668;

					{	/* Ieee/fixnum.scm 812 */
						BGL_LONGLONG_T BgL_arg1259z00_3669;

						BgL_arg1259z00_3669 = (BgL_xz00_69 % ((BGL_LONGLONG_T) 2));
						BgL_res1911z00_3668 = (BgL_arg1259z00_3669 == ((BGL_LONGLONG_T) 0));
					}
					BgL_testz00_4466 = BgL_res1911z00_3668;
				}
				if (BgL_testz00_4466)
					{	/* Ieee/fixnum.scm 812 */
						return ((bool_t) 0);
					}
				else
					{	/* Ieee/fixnum.scm 812 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _oddllong? */
	obj_t BGl__oddllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3041,
		obj_t BgL_xz00_3042)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 811 */
			{	/* Ieee/fixnum.scm 812 */
				bool_t BgL_auxz00_4469;

				{	/* Ieee/fixnum.scm 812 */
					BGL_LONGLONG_T BgL_xz00_3670;

					{	/* Ieee/fixnum.scm 812 */
						obj_t BgL_auxz00_4470;

						if (LLONGP(BgL_xz00_3042))
							{	/* Ieee/fixnum.scm 812 */
								BgL_auxz00_4470 = BgL_xz00_3042;
							}
						else
							{
								obj_t BgL_auxz00_4473;

								BgL_auxz00_4473 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 38125)),
									BGl_string2358z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3042);
								FAILURE(BgL_auxz00_4473, BFALSE, BFALSE);
							}
						BgL_xz00_3670 = BLLONG_TO_LLONG(BgL_auxz00_4470);
					}
					{	/* Ieee/fixnum.scm 812 */
						bool_t BgL_testz00_4478;

						{	/* Ieee/fixnum.scm 812 */
							bool_t BgL_res1911z00_3671;

							{	/* Ieee/fixnum.scm 812 */
								BGL_LONGLONG_T BgL_arg1259z00_3672;

								BgL_arg1259z00_3672 = (BgL_xz00_3670 % ((BGL_LONGLONG_T) 2));
								BgL_res1911z00_3671 =
									(BgL_arg1259z00_3672 == ((BGL_LONGLONG_T) 0));
							}
							BgL_testz00_4478 = BgL_res1911z00_3671;
						}
						if (BgL_testz00_4478)
							{	/* Ieee/fixnum.scm 812 */
								BgL_auxz00_4469 = ((bool_t) 0);
							}
						else
							{	/* Ieee/fixnum.scm 812 */
								BgL_auxz00_4469 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_auxz00_4469);
			}
		}
	}



/* oddbx? */
	BGL_EXPORTED_DEF bool_t BGl_oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_70)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 817 */
			return bgl_bignum_odd(BgL_xz00_70);
		}
	}



/* _oddbx? */
	obj_t BGl__oddbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3043,
		obj_t BgL_xz00_3044)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 817 */
			{	/* Ieee/fixnum.scm 818 */
				bool_t BgL_auxz00_4483;

				{	/* Ieee/fixnum.scm 818 */
					obj_t BgL_xz00_3673;

					if (BIGNUMP(BgL_xz00_3044))
						{	/* Ieee/fixnum.scm 818 */
							BgL_xz00_3673 = BgL_xz00_3044;
						}
					else
						{
							obj_t BgL_auxz00_4486;

							BgL_auxz00_4486 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 38404)),
								BGl_string2359z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3044);
							FAILURE(BgL_auxz00_4486, BFALSE, BFALSE);
						}
					BgL_auxz00_4483 = bgl_bignum_odd(BgL_xz00_3673);
				}
				return BBOOL(BgL_auxz00_4483);
			}
		}
	}



/* even? */
	BGL_EXPORTED_DEF bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_71)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 823 */
			if (INTEGERP(BgL_xz00_71))
				{	/* Ieee/fixnum.scm 825 */
					return EVENP_FX((long) CINT(BgL_xz00_71));
				}
			else
				{	/* Ieee/fixnum.scm 825 */
					if (ELONGP(BgL_xz00_71))
						{	/* Ieee/fixnum.scm 826 */
							bool_t BgL_res1912z00_1473;

							{	/* Ieee/fixnum.scm 826 */
								long BgL_xz00_1466;

								BgL_xz00_1466 = BELONG_TO_LONG(BgL_xz00_71);
								{	/* Ieee/fixnum.scm 826 */
									long BgL_arg1258z00_1467;

									BgL_arg1258z00_1467 = (BgL_xz00_1466 % ((long) 2));
									BgL_res1912z00_1473 = (BgL_arg1258z00_1467 == ((long) 0));
							}}
							return BgL_res1912z00_1473;
						}
					else
						{	/* Ieee/fixnum.scm 826 */
							if (LLONGP(BgL_xz00_71))
								{	/* Ieee/fixnum.scm 827 */
									bool_t BgL_res1913z00_1482;

									{	/* Ieee/fixnum.scm 827 */
										BGL_LONGLONG_T BgL_xz00_1475;

										BgL_xz00_1475 = BLLONG_TO_LLONG(BgL_xz00_71);
										{	/* Ieee/fixnum.scm 827 */
											BGL_LONGLONG_T BgL_arg1259z00_1476;

											BgL_arg1259z00_1476 =
												(BgL_xz00_1475 % ((BGL_LONGLONG_T) 2));
											BgL_res1913z00_1482 =
												(BgL_arg1259z00_1476 == ((BGL_LONGLONG_T) 0));
										}
									}
									return BgL_res1913z00_1482;
								}
							else
								{	/* Ieee/fixnum.scm 827 */
									if (BIGNUMP(BgL_xz00_71))
										{	/* Ieee/fixnum.scm 828 */
											return bgl_bignum_even(BgL_xz00_71);
										}
									else
										{	/* Ieee/fixnum.scm 828 */
											return
												CBOOL(BGl_errorz00zz__errorz00
												(BGl_string2360z00zz__r4_numbers_6_5_fixnumz00,
													BGl_string2355z00zz__r4_numbers_6_5_fixnumz00,
													BgL_xz00_71));
										}
								}
						}
				}
		}
	}



/* _even? */
	obj_t BGl__evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3045,
		obj_t BgL_xz00_3046)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 823 */
			return BBOOL(BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3046));
		}
	}



/* evenfx? */
	BGL_EXPORTED_DEF bool_t BGl_evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_72)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 834 */
			return EVENP_FX(BgL_xz00_72);
		}
	}



/* _evenfx? */
	obj_t BGl__evenfxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3047,
		obj_t BgL_xz00_3048)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 834 */
			{	/* Ieee/fixnum.scm 835 */
				bool_t BgL_auxz00_4514;

				{	/* Ieee/fixnum.scm 835 */
					long BgL_xz00_3674;

					{	/* Ieee/fixnum.scm 835 */
						obj_t BgL_auxz00_4515;

						if (INTEGERP(BgL_xz00_3048))
							{	/* Ieee/fixnum.scm 835 */
								BgL_auxz00_4515 = BgL_xz00_3048;
							}
						else
							{
								obj_t BgL_auxz00_4518;

								BgL_auxz00_4518 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 39097)),
									BGl_string2361z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3048);
								FAILURE(BgL_auxz00_4518, BFALSE, BFALSE);
							}
						BgL_xz00_3674 = (long) CINT(BgL_auxz00_4515);
					}
					BgL_auxz00_4514 = EVENP_FX(BgL_xz00_3674);
				}
				return BBOOL(BgL_auxz00_4514);
			}
		}
	}



/* evenelong? */
	BGL_EXPORTED_DEF bool_t BGl_evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_73)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 840 */
			{	/* Ieee/fixnum.scm 841 */
				long BgL_arg1258z00_3675;

				BgL_arg1258z00_3675 = (BgL_xz00_73 % ((long) 2));
				return (BgL_arg1258z00_3675 == ((long) 0));
		}}
	}



/* _evenelong? */
	obj_t BGl__evenelongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3049,
		obj_t BgL_xz00_3050)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 840 */
			{	/* Ieee/fixnum.scm 841 */
				bool_t BgL_auxz00_4527;

				{	/* Ieee/fixnum.scm 841 */
					bool_t BgL_res2451z00_3678;

					{	/* Ieee/fixnum.scm 841 */
						long BgL_xz00_3676;

						{	/* Ieee/fixnum.scm 841 */
							obj_t BgL_auxz00_4528;

							if (ELONGP(BgL_xz00_3050))
								{	/* Ieee/fixnum.scm 841 */
									BgL_auxz00_4528 = BgL_xz00_3050;
								}
							else
								{
									obj_t BgL_auxz00_4531;

									BgL_auxz00_4531 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
										BINT(((long) 39380)),
										BGl_string2362z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
										BgL_xz00_3050);
									FAILURE(BgL_auxz00_4531, BFALSE, BFALSE);
								}
							BgL_xz00_3676 = BELONG_TO_LONG(BgL_auxz00_4528);
						}
						{	/* Ieee/fixnum.scm 841 */
							long BgL_arg1258z00_3677;

							BgL_arg1258z00_3677 = (BgL_xz00_3676 % ((long) 2));
							BgL_res2451z00_3678 = (BgL_arg1258z00_3677 == ((long) 0));
					}}
					BgL_auxz00_4527 = BgL_res2451z00_3678;
				}
				return BBOOL(BgL_auxz00_4527);
			}
		}
	}



/* evenllong? */
	BGL_EXPORTED_DEF bool_t
		BGl_evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_74)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 846 */
			{	/* Ieee/fixnum.scm 847 */
				BGL_LONGLONG_T BgL_arg1259z00_3679;

				BgL_arg1259z00_3679 = (BgL_xz00_74 % ((BGL_LONGLONG_T) 2));
				return (BgL_arg1259z00_3679 == ((BGL_LONGLONG_T) 0));
			}
		}
	}



/* _evenllong? */
	obj_t BGl__evenllongzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3051,
		obj_t BgL_xz00_3052)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 846 */
			{	/* Ieee/fixnum.scm 847 */
				bool_t BgL_auxz00_4541;

				{	/* Ieee/fixnum.scm 847 */
					bool_t BgL_res2452z00_3682;

					{	/* Ieee/fixnum.scm 847 */
						BGL_LONGLONG_T BgL_xz00_3680;

						{	/* Ieee/fixnum.scm 847 */
							obj_t BgL_auxz00_4542;

							if (LLONGP(BgL_xz00_3052))
								{	/* Ieee/fixnum.scm 847 */
									BgL_auxz00_4542 = BgL_xz00_3052;
								}
							else
								{
									obj_t BgL_auxz00_4545;

									BgL_auxz00_4545 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
										BINT(((long) 39673)),
										BGl_string2363z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
										BgL_xz00_3052);
									FAILURE(BgL_auxz00_4545, BFALSE, BFALSE);
								}
							BgL_xz00_3680 = BLLONG_TO_LLONG(BgL_auxz00_4542);
						}
						{	/* Ieee/fixnum.scm 847 */
							BGL_LONGLONG_T BgL_arg1259z00_3681;

							BgL_arg1259z00_3681 = (BgL_xz00_3680 % ((BGL_LONGLONG_T) 2));
							BgL_res2452z00_3682 =
								(BgL_arg1259z00_3681 == ((BGL_LONGLONG_T) 0));
					}}
					BgL_auxz00_4541 = BgL_res2452z00_3682;
				}
				return BBOOL(BgL_auxz00_4541);
			}
		}
	}



/* evenbx? */
	BGL_EXPORTED_DEF bool_t BGl_evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_75)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 852 */
			return bgl_bignum_even(BgL_xz00_75);
		}
	}



/* _evenbx? */
	obj_t BGl__evenbxzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3053,
		obj_t BgL_xz00_3054)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 852 */
			{	/* Ieee/fixnum.scm 853 */
				bool_t BgL_auxz00_4554;

				{	/* Ieee/fixnum.scm 853 */
					obj_t BgL_xz00_3683;

					if (BIGNUMP(BgL_xz00_3054))
						{	/* Ieee/fixnum.scm 853 */
							BgL_xz00_3683 = BgL_xz00_3054;
						}
					else
						{
							obj_t BgL_auxz00_4557;

							BgL_auxz00_4557 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 39951)),
								BGl_string2364z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3054);
							FAILURE(BgL_auxz00_4557, BFALSE, BFALSE);
						}
					BgL_auxz00_4554 = bgl_bignum_even(BgL_xz00_3683);
				}
				return BBOOL(BgL_auxz00_4554);
			}
		}
	}



/* minfx */
	BGL_EXPORTED_DEF long BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_76, obj_t BgL_nnz00_77)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 870 */
			{
				obj_t BgL_yz00_532;

				obj_t BgL_xsz00_533;

				{	/* Ieee/fixnum.scm 871 */
					obj_t BgL_auxz00_4563;

					BgL_yz00_532 = BINT(BgL_n1z00_76);
					BgL_xsz00_533 = BgL_nnz00_77;
				BgL_zc3anonymousza31260ze3z83_534:
					if (NULLP(BgL_xsz00_533))
						{	/* Ieee/fixnum.scm 871 */
							BgL_auxz00_4563 = BgL_yz00_532;
						}
					else
						{	/* Ieee/fixnum.scm 871 */
							bool_t BgL_testz00_4566;

							{	/* Ieee/fixnum.scm 871 */
								long BgL_auxz00_4567;

								{	/* Ieee/fixnum.scm 871 */
									obj_t BgL_pairz00_1498;

									BgL_pairz00_1498 = BgL_xsz00_533;
									BgL_auxz00_4567 = (long) CINT(CAR(BgL_pairz00_1498));
								}
								BgL_testz00_4566 =
									(BgL_auxz00_4567 < (long) CINT(BgL_yz00_532));
							}
							if (BgL_testz00_4566)
								{
									obj_t BgL_xsz00_4574;

									obj_t BgL_yz00_4572;

									BgL_yz00_4572 = CAR(BgL_xsz00_533);
									BgL_xsz00_4574 = CDR(BgL_xsz00_533);
									BgL_xsz00_533 = BgL_xsz00_4574;
									BgL_yz00_532 = BgL_yz00_4572;
									goto BgL_zc3anonymousza31260ze3z83_534;
								}
							else
								{
									obj_t BgL_xsz00_4576;

									BgL_xsz00_4576 = CDR(BgL_xsz00_533);
									BgL_xsz00_533 = BgL_xsz00_4576;
									goto BgL_zc3anonymousza31260ze3z83_534;
								}
						}
					return (long) CINT(BgL_auxz00_4563);
		}}}
	}



/* _minfx */
	obj_t BGl__minfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3055,
		obj_t BgL_n1z00_3056, obj_t BgL_nnz00_3057)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 870 */
			{	/* Ieee/fixnum.scm 871 */
				long BgL_auxz00_4580;

				{	/* Ieee/fixnum.scm 871 */
					long BgL_auxz00_4581;

					{	/* Ieee/fixnum.scm 871 */
						obj_t BgL_auxz00_4582;

						if (INTEGERP(BgL_n1z00_3056))
							{	/* Ieee/fixnum.scm 871 */
								BgL_auxz00_4582 = BgL_n1z00_3056;
							}
						else
							{
								obj_t BgL_auxz00_4585;

								BgL_auxz00_4585 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 40630)),
									BGl_string2365z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3056);
								FAILURE(BgL_auxz00_4585, BFALSE, BFALSE);
							}
						BgL_auxz00_4581 = (long) CINT(BgL_auxz00_4582);
					}
					BgL_auxz00_4580 =
						BGl_minfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4581,
						BgL_nnz00_3057);
				}
				return BINT(BgL_auxz00_4580);
			}
		}
	}



/* minelong */
	BGL_EXPORTED_DEF long BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_78, obj_t BgL_nnz00_79)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 876 */
			{
				obj_t BgL_yz00_543;

				obj_t BgL_xsz00_544;

				{	/* Ieee/fixnum.scm 877 */
					obj_t BgL_auxz00_4592;

					BgL_yz00_543 = make_belong(BgL_n1z00_78);
					BgL_xsz00_544 = BgL_nnz00_79;
				BgL_zc3anonymousza31267ze3z83_545:
					if (NULLP(BgL_xsz00_544))
						{	/* Ieee/fixnum.scm 877 */
							BgL_auxz00_4592 = BgL_yz00_543;
						}
					else
						{	/* Ieee/fixnum.scm 877 */
							bool_t BgL_testz00_4595;

							{	/* Ieee/fixnum.scm 877 */
								long BgL_n1z00_1506;

								long BgL_n2z00_1507;

								{	/* Ieee/fixnum.scm 877 */
									obj_t BgL_pairz00_1505;

									BgL_pairz00_1505 = BgL_xsz00_544;
									{	/* Ieee/fixnum.scm 877 */
										obj_t BgL_auxz00_4596;

										BgL_auxz00_4596 = CAR(BgL_pairz00_1505);
										BgL_n1z00_1506 = BELONG_TO_LONG(BgL_auxz00_4596);
								}}
								BgL_n2z00_1507 = BELONG_TO_LONG(BgL_yz00_543);
								BgL_testz00_4595 = (BgL_n1z00_1506 < BgL_n2z00_1507);
							}
							if (BgL_testz00_4595)
								{
									obj_t BgL_xsz00_4603;

									obj_t BgL_yz00_4601;

									BgL_yz00_4601 = CAR(BgL_xsz00_544);
									BgL_xsz00_4603 = CDR(BgL_xsz00_544);
									BgL_xsz00_544 = BgL_xsz00_4603;
									BgL_yz00_543 = BgL_yz00_4601;
									goto BgL_zc3anonymousza31267ze3z83_545;
								}
							else
								{
									obj_t BgL_xsz00_4605;

									BgL_xsz00_4605 = CDR(BgL_xsz00_544);
									BgL_xsz00_544 = BgL_xsz00_4605;
									goto BgL_zc3anonymousza31267ze3z83_545;
								}
						}
					return BELONG_TO_LONG(BgL_auxz00_4592);
				}
			}
		}
	}



/* _minelong */
	obj_t BGl__minelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3058,
		obj_t BgL_n1z00_3059, obj_t BgL_nnz00_3060)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 876 */
			{	/* Ieee/fixnum.scm 877 */
				long BgL_auxz00_4609;

				{	/* Ieee/fixnum.scm 877 */
					long BgL_auxz00_4610;

					{	/* Ieee/fixnum.scm 877 */
						obj_t BgL_auxz00_4611;

						if (ELONGP(BgL_n1z00_3059))
							{	/* Ieee/fixnum.scm 877 */
								BgL_auxz00_4611 = BgL_n1z00_3059;
							}
						else
							{
								obj_t BgL_auxz00_4614;

								BgL_auxz00_4614 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 40906)),
									BGl_string2366z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3059);
								FAILURE(BgL_auxz00_4614, BFALSE, BFALSE);
							}
						BgL_auxz00_4610 = BELONG_TO_LONG(BgL_auxz00_4611);
					}
					BgL_auxz00_4609 =
						BGl_minelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4610,
						BgL_nnz00_3060);
				}
				return make_belong(BgL_auxz00_4609);
			}
		}
	}



/* minllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_80,
		obj_t BgL_nnz00_81)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 882 */
			{
				obj_t BgL_yz00_554;

				obj_t BgL_xsz00_555;

				{	/* Ieee/fixnum.scm 883 */
					obj_t BgL_auxz00_4621;

					BgL_yz00_554 = make_bllong(BgL_n1z00_80);
					BgL_xsz00_555 = BgL_nnz00_81;
				BgL_zc3anonymousza31275ze3z83_556:
					if (NULLP(BgL_xsz00_555))
						{	/* Ieee/fixnum.scm 883 */
							BgL_auxz00_4621 = BgL_yz00_554;
						}
					else
						{	/* Ieee/fixnum.scm 883 */
							bool_t BgL_testz00_4624;

							{	/* Ieee/fixnum.scm 883 */
								BGL_LONGLONG_T BgL_auxz00_4625;

								{	/* Ieee/fixnum.scm 883 */
									obj_t BgL_pairz00_1512;

									BgL_pairz00_1512 = BgL_xsz00_555;
									BgL_auxz00_4625 = BLLONG_TO_LLONG(CAR(BgL_pairz00_1512));
								}
								BgL_testz00_4624 =
									(BgL_auxz00_4625 < BLLONG_TO_LLONG(BgL_yz00_554));
							}
							if (BgL_testz00_4624)
								{
									obj_t BgL_xsz00_4632;

									obj_t BgL_yz00_4630;

									BgL_yz00_4630 = CAR(BgL_xsz00_555);
									BgL_xsz00_4632 = CDR(BgL_xsz00_555);
									BgL_xsz00_555 = BgL_xsz00_4632;
									BgL_yz00_554 = BgL_yz00_4630;
									goto BgL_zc3anonymousza31275ze3z83_556;
								}
							else
								{
									obj_t BgL_xsz00_4634;

									BgL_xsz00_4634 = CDR(BgL_xsz00_555);
									BgL_xsz00_555 = BgL_xsz00_4634;
									goto BgL_zc3anonymousza31275ze3z83_556;
								}
						}
					return BLLONG_TO_LLONG(BgL_auxz00_4621);
				}
			}
		}
	}



/* _minllong */
	obj_t BGl__minllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3061,
		obj_t BgL_n1z00_3062, obj_t BgL_nnz00_3063)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 882 */
			{	/* Ieee/fixnum.scm 883 */
				BGL_LONGLONG_T BgL_auxz00_4638;

				{	/* Ieee/fixnum.scm 883 */
					BGL_LONGLONG_T BgL_auxz00_4639;

					{	/* Ieee/fixnum.scm 883 */
						obj_t BgL_auxz00_4640;

						if (LLONGP(BgL_n1z00_3062))
							{	/* Ieee/fixnum.scm 883 */
								BgL_auxz00_4640 = BgL_n1z00_3062;
							}
						else
							{
								obj_t BgL_auxz00_4643;

								BgL_auxz00_4643 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 41185)),
									BGl_string2367z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3062);
								FAILURE(BgL_auxz00_4643, BFALSE, BFALSE);
							}
						BgL_auxz00_4639 = BLLONG_TO_LLONG(BgL_auxz00_4640);
					}
					BgL_auxz00_4638 =
						BGl_minllongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4639,
						BgL_nnz00_3063);
				}
				return make_bllong(BgL_auxz00_4638);
			}
		}
	}



/* minbx */
	BGL_EXPORTED_DEF obj_t BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_82, obj_t BgL_nnz00_83)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 888 */
			{
				obj_t BgL_yz00_565;

				obj_t BgL_xsz00_566;

				BgL_yz00_565 = BgL_n1z00_82;
				BgL_xsz00_566 = BgL_nnz00_83;
			BgL_zc3anonymousza31282ze3z83_567:
				if (NULLP(BgL_xsz00_566))
					{	/* Ieee/fixnum.scm 889 */
						return BgL_yz00_565;
					}
				else
					{	/* Ieee/fixnum.scm 889 */
						bool_t BgL_testz00_4652;

						{	/* Ieee/fixnum.scm 889 */
							obj_t BgL_n1z00_1520;

							obj_t BgL_n2z00_1521;

							BgL_n1z00_1520 = CAR(BgL_xsz00_566);
							BgL_n2z00_1521 = BgL_yz00_565;
							BgL_testz00_4652 =
								(
								(long) (bgl_bignum_cmp(BgL_n1z00_1520,
										BgL_n2z00_1521)) < ((long) 0));
						}
						if (BgL_testz00_4652)
							{
								obj_t BgL_xsz00_4659;

								obj_t BgL_yz00_4657;

								BgL_yz00_4657 = CAR(BgL_xsz00_566);
								BgL_xsz00_4659 = CDR(BgL_xsz00_566);
								BgL_xsz00_566 = BgL_xsz00_4659;
								BgL_yz00_565 = BgL_yz00_4657;
								goto BgL_zc3anonymousza31282ze3z83_567;
							}
						else
							{
								obj_t BgL_xsz00_4661;

								BgL_xsz00_4661 = CDR(BgL_xsz00_566);
								BgL_xsz00_566 = BgL_xsz00_4661;
								goto BgL_zc3anonymousza31282ze3z83_567;
							}
					}
			}
		}
	}



/* _minbx */
	obj_t BGl__minbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3064,
		obj_t BgL_n1z00_3065, obj_t BgL_nnz00_3066)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 888 */
			{	/* Ieee/fixnum.scm 889 */
				obj_t BgL_auxz00_4663;

				if (BIGNUMP(BgL_n1z00_3065))
					{	/* Ieee/fixnum.scm 889 */
						BgL_auxz00_4663 = BgL_n1z00_3065;
					}
				else
					{
						obj_t BgL_auxz00_4666;

						BgL_auxz00_4666 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 41461)),
							BGl_string2368z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3065);
						FAILURE(BgL_auxz00_4666, BFALSE, BFALSE);
					}
				return
					BGl_minbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4663,
					BgL_nnz00_3066);
			}
		}
	}



/* maxfx */
	BGL_EXPORTED_DEF long BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_84, obj_t BgL_nnz00_85)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 894 */
			{
				obj_t BgL_yz00_576;

				obj_t BgL_xsz00_577;

				{	/* Ieee/fixnum.scm 895 */
					obj_t BgL_auxz00_4671;

					BgL_yz00_576 = BINT(BgL_n1z00_84);
					BgL_xsz00_577 = BgL_nnz00_85;
				BgL_zc3anonymousza31289ze3z83_578:
					if (NULLP(BgL_xsz00_577))
						{	/* Ieee/fixnum.scm 895 */
							BgL_auxz00_4671 = BgL_yz00_576;
						}
					else
						{	/* Ieee/fixnum.scm 895 */
							bool_t BgL_testz00_4674;

							{	/* Ieee/fixnum.scm 895 */
								long BgL_auxz00_4675;

								{	/* Ieee/fixnum.scm 895 */
									obj_t BgL_pairz00_1531;

									BgL_pairz00_1531 = BgL_xsz00_577;
									BgL_auxz00_4675 = (long) CINT(CAR(BgL_pairz00_1531));
								}
								BgL_testz00_4674 =
									(BgL_auxz00_4675 > (long) CINT(BgL_yz00_576));
							}
							if (BgL_testz00_4674)
								{
									obj_t BgL_xsz00_4682;

									obj_t BgL_yz00_4680;

									BgL_yz00_4680 = CAR(BgL_xsz00_577);
									BgL_xsz00_4682 = CDR(BgL_xsz00_577);
									BgL_xsz00_577 = BgL_xsz00_4682;
									BgL_yz00_576 = BgL_yz00_4680;
									goto BgL_zc3anonymousza31289ze3z83_578;
								}
							else
								{
									obj_t BgL_xsz00_4684;

									BgL_xsz00_4684 = CDR(BgL_xsz00_577);
									BgL_xsz00_577 = BgL_xsz00_4684;
									goto BgL_zc3anonymousza31289ze3z83_578;
								}
						}
					return (long) CINT(BgL_auxz00_4671);
		}}}
	}



/* _maxfx */
	obj_t BGl__maxfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3067,
		obj_t BgL_n1z00_3068, obj_t BgL_nnz00_3069)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 894 */
			{	/* Ieee/fixnum.scm 895 */
				long BgL_auxz00_4688;

				{	/* Ieee/fixnum.scm 895 */
					long BgL_auxz00_4689;

					{	/* Ieee/fixnum.scm 895 */
						obj_t BgL_auxz00_4690;

						if (INTEGERP(BgL_n1z00_3068))
							{	/* Ieee/fixnum.scm 895 */
								BgL_auxz00_4690 = BgL_n1z00_3068;
							}
						else
							{
								obj_t BgL_auxz00_4693;

								BgL_auxz00_4693 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 41734)),
									BGl_string2369z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3068);
								FAILURE(BgL_auxz00_4693, BFALSE, BFALSE);
							}
						BgL_auxz00_4689 = (long) CINT(BgL_auxz00_4690);
					}
					BgL_auxz00_4688 =
						BGl_maxfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4689,
						BgL_nnz00_3069);
				}
				return BINT(BgL_auxz00_4688);
			}
		}
	}



/* maxelong */
	BGL_EXPORTED_DEF long BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_86, obj_t BgL_nnz00_87)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 900 */
			{
				obj_t BgL_yz00_587;

				obj_t BgL_xsz00_588;

				{	/* Ieee/fixnum.scm 901 */
					obj_t BgL_auxz00_4700;

					BgL_yz00_587 = make_belong(BgL_n1z00_86);
					BgL_xsz00_588 = BgL_nnz00_87;
				BgL_zc3anonymousza31296ze3z83_589:
					if (NULLP(BgL_xsz00_588))
						{	/* Ieee/fixnum.scm 901 */
							BgL_auxz00_4700 = BgL_yz00_587;
						}
					else
						{	/* Ieee/fixnum.scm 901 */
							bool_t BgL_testz00_4703;

							{	/* Ieee/fixnum.scm 901 */
								long BgL_n1z00_1539;

								long BgL_n2z00_1540;

								{	/* Ieee/fixnum.scm 901 */
									obj_t BgL_pairz00_1538;

									BgL_pairz00_1538 = BgL_xsz00_588;
									{	/* Ieee/fixnum.scm 901 */
										obj_t BgL_auxz00_4704;

										BgL_auxz00_4704 = CAR(BgL_pairz00_1538);
										BgL_n1z00_1539 = BELONG_TO_LONG(BgL_auxz00_4704);
								}}
								BgL_n2z00_1540 = BELONG_TO_LONG(BgL_yz00_587);
								BgL_testz00_4703 = (BgL_n1z00_1539 > BgL_n2z00_1540);
							}
							if (BgL_testz00_4703)
								{
									obj_t BgL_xsz00_4711;

									obj_t BgL_yz00_4709;

									BgL_yz00_4709 = CAR(BgL_xsz00_588);
									BgL_xsz00_4711 = CDR(BgL_xsz00_588);
									BgL_xsz00_588 = BgL_xsz00_4711;
									BgL_yz00_587 = BgL_yz00_4709;
									goto BgL_zc3anonymousza31296ze3z83_589;
								}
							else
								{
									obj_t BgL_xsz00_4713;

									BgL_xsz00_4713 = CDR(BgL_xsz00_588);
									BgL_xsz00_588 = BgL_xsz00_4713;
									goto BgL_zc3anonymousza31296ze3z83_589;
								}
						}
					return BELONG_TO_LONG(BgL_auxz00_4700);
				}
			}
		}
	}



/* _maxelong */
	obj_t BGl__maxelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3070,
		obj_t BgL_n1z00_3071, obj_t BgL_nnz00_3072)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 900 */
			{	/* Ieee/fixnum.scm 901 */
				long BgL_auxz00_4717;

				{	/* Ieee/fixnum.scm 901 */
					long BgL_auxz00_4718;

					{	/* Ieee/fixnum.scm 901 */
						obj_t BgL_auxz00_4719;

						if (ELONGP(BgL_n1z00_3071))
							{	/* Ieee/fixnum.scm 901 */
								BgL_auxz00_4719 = BgL_n1z00_3071;
							}
						else
							{
								obj_t BgL_auxz00_4722;

								BgL_auxz00_4722 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 42010)),
									BGl_string2370z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3071);
								FAILURE(BgL_auxz00_4722, BFALSE, BFALSE);
							}
						BgL_auxz00_4718 = BELONG_TO_LONG(BgL_auxz00_4719);
					}
					BgL_auxz00_4717 =
						BGl_maxelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4718,
						BgL_nnz00_3072);
				}
				return make_belong(BgL_auxz00_4717);
			}
		}
	}



/* maxllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_88,
		obj_t BgL_nnz00_89)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 906 */
			{
				obj_t BgL_yz00_598;

				obj_t BgL_xsz00_599;

				{	/* Ieee/fixnum.scm 907 */
					obj_t BgL_auxz00_4729;

					BgL_yz00_598 = make_bllong(BgL_n1z00_88);
					BgL_xsz00_599 = BgL_nnz00_89;
				BgL_zc3anonymousza31303ze3z83_600:
					if (NULLP(BgL_xsz00_599))
						{	/* Ieee/fixnum.scm 907 */
							BgL_auxz00_4729 = BgL_yz00_598;
						}
					else
						{	/* Ieee/fixnum.scm 907 */
							bool_t BgL_testz00_4732;

							{	/* Ieee/fixnum.scm 907 */
								BGL_LONGLONG_T BgL_auxz00_4733;

								{	/* Ieee/fixnum.scm 907 */
									obj_t BgL_pairz00_1545;

									BgL_pairz00_1545 = BgL_xsz00_599;
									BgL_auxz00_4733 = BLLONG_TO_LLONG(CAR(BgL_pairz00_1545));
								}
								BgL_testz00_4732 =
									(BgL_auxz00_4733 > BLLONG_TO_LLONG(BgL_yz00_598));
							}
							if (BgL_testz00_4732)
								{
									obj_t BgL_xsz00_4740;

									obj_t BgL_yz00_4738;

									BgL_yz00_4738 = CAR(BgL_xsz00_599);
									BgL_xsz00_4740 = CDR(BgL_xsz00_599);
									BgL_xsz00_599 = BgL_xsz00_4740;
									BgL_yz00_598 = BgL_yz00_4738;
									goto BgL_zc3anonymousza31303ze3z83_600;
								}
							else
								{
									obj_t BgL_xsz00_4742;

									BgL_xsz00_4742 = CDR(BgL_xsz00_599);
									BgL_xsz00_599 = BgL_xsz00_4742;
									goto BgL_zc3anonymousza31303ze3z83_600;
								}
						}
					return BLLONG_TO_LLONG(BgL_auxz00_4729);
				}
			}
		}
	}



/* _maxllong */
	obj_t BGl__maxllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3073,
		obj_t BgL_n1z00_3074, obj_t BgL_nnz00_3075)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 906 */
			{	/* Ieee/fixnum.scm 907 */
				BGL_LONGLONG_T BgL_auxz00_4746;

				{	/* Ieee/fixnum.scm 907 */
					BGL_LONGLONG_T BgL_auxz00_4747;

					{	/* Ieee/fixnum.scm 907 */
						obj_t BgL_auxz00_4748;

						if (LLONGP(BgL_n1z00_3074))
							{	/* Ieee/fixnum.scm 907 */
								BgL_auxz00_4748 = BgL_n1z00_3074;
							}
						else
							{
								obj_t BgL_auxz00_4751;

								BgL_auxz00_4751 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 42289)),
									BGl_string2371z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3074);
								FAILURE(BgL_auxz00_4751, BFALSE, BFALSE);
							}
						BgL_auxz00_4747 = BLLONG_TO_LLONG(BgL_auxz00_4748);
					}
					BgL_auxz00_4746 =
						BGl_maxllongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4747,
						BgL_nnz00_3075);
				}
				return make_bllong(BgL_auxz00_4746);
			}
		}
	}



/* maxbx */
	BGL_EXPORTED_DEF obj_t BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_90, obj_t BgL_nnz00_91)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 912 */
			{
				obj_t BgL_yz00_609;

				obj_t BgL_xsz00_610;

				BgL_yz00_609 = BgL_n1z00_90;
				BgL_xsz00_610 = BgL_nnz00_91;
			BgL_zc3anonymousza31310ze3z83_611:
				if (NULLP(BgL_xsz00_610))
					{	/* Ieee/fixnum.scm 913 */
						return BgL_yz00_609;
					}
				else
					{	/* Ieee/fixnum.scm 913 */
						bool_t BgL_testz00_4760;

						{	/* Ieee/fixnum.scm 913 */
							obj_t BgL_n1z00_1553;

							obj_t BgL_n2z00_1554;

							BgL_n1z00_1553 = CAR(BgL_xsz00_610);
							BgL_n2z00_1554 = BgL_yz00_609;
							BgL_testz00_4760 =
								(
								(long) (bgl_bignum_cmp(BgL_n1z00_1553,
										BgL_n2z00_1554)) > ((long) 0));
						}
						if (BgL_testz00_4760)
							{
								obj_t BgL_xsz00_4767;

								obj_t BgL_yz00_4765;

								BgL_yz00_4765 = CAR(BgL_xsz00_610);
								BgL_xsz00_4767 = CDR(BgL_xsz00_610);
								BgL_xsz00_610 = BgL_xsz00_4767;
								BgL_yz00_609 = BgL_yz00_4765;
								goto BgL_zc3anonymousza31310ze3z83_611;
							}
						else
							{
								obj_t BgL_xsz00_4769;

								BgL_xsz00_4769 = CDR(BgL_xsz00_610);
								BgL_xsz00_610 = BgL_xsz00_4769;
								goto BgL_zc3anonymousza31310ze3z83_611;
							}
					}
			}
		}
	}



/* _maxbx */
	obj_t BGl__maxbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3076,
		obj_t BgL_n1z00_3077, obj_t BgL_nnz00_3078)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 912 */
			{	/* Ieee/fixnum.scm 913 */
				obj_t BgL_auxz00_4771;

				if (BIGNUMP(BgL_n1z00_3077))
					{	/* Ieee/fixnum.scm 913 */
						BgL_auxz00_4771 = BgL_n1z00_3077;
					}
				else
					{
						obj_t BgL_auxz00_4774;

						BgL_auxz00_4774 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 42565)),
							BGl_string2372z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3077);
						FAILURE(BgL_auxz00_4774, BFALSE, BFALSE);
					}
				return
					BGl_maxbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_4771,
					BgL_nnz00_3078);
			}
		}
	}



/* +fx */
	BGL_EXPORTED_DEF long BGl_zb2fxzb2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_92, long BgL_za72za7_93)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 918 */
			return (BgL_za71za7_92 + BgL_za72za7_93);
		}
	}



/* _+fx */
	obj_t BGl__zb2fxzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3079,
		obj_t BgL_za71za7_3080, obj_t BgL_za72za7_3081)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 918 */
			{	/* Ieee/fixnum.scm 919 */
				long BgL_auxz00_4780;

				{	/* Ieee/fixnum.scm 919 */
					long BgL_za71za7_3684;

					long BgL_za72za7_3685;

					{	/* Ieee/fixnum.scm 919 */
						obj_t BgL_auxz00_4781;

						if (INTEGERP(BgL_za71za7_3080))
							{	/* Ieee/fixnum.scm 919 */
								BgL_auxz00_4781 = BgL_za71za7_3080;
							}
						else
							{
								obj_t BgL_auxz00_4784;

								BgL_auxz00_4784 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 42841)),
									BGl_string2373z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3080);
								FAILURE(BgL_auxz00_4784, BFALSE, BFALSE);
							}
						BgL_za71za7_3684 = (long) CINT(BgL_auxz00_4781);
					}
					{	/* Ieee/fixnum.scm 919 */
						obj_t BgL_auxz00_4789;

						if (INTEGERP(BgL_za72za7_3081))
							{	/* Ieee/fixnum.scm 919 */
								BgL_auxz00_4789 = BgL_za72za7_3081;
							}
						else
							{
								obj_t BgL_auxz00_4792;

								BgL_auxz00_4792 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 42841)),
									BGl_string2373z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3081);
								FAILURE(BgL_auxz00_4792, BFALSE, BFALSE);
							}
						BgL_za72za7_3685 = (long) CINT(BgL_auxz00_4789);
					}
					BgL_auxz00_4780 = (BgL_za71za7_3684 + BgL_za72za7_3685);
				}
				return BINT(BgL_auxz00_4780);
			}
		}
	}



/* +elong */
	BGL_EXPORTED_DEF long BGl_zb2elongzb2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_94, long BgL_za72za7_95)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 924 */
			return (BgL_za71za7_94 + BgL_za72za7_95);
		}
	}



/* _+elong */
	obj_t BGl__zb2elongzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3082,
		obj_t BgL_za71za7_3083, obj_t BgL_za72za7_3084)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 924 */
			{	/* Ieee/fixnum.scm 925 */
				long BgL_auxz00_4800;

				{	/* Ieee/fixnum.scm 925 */
					long BgL_za71za7_3686;

					long BgL_za72za7_3687;

					{	/* Ieee/fixnum.scm 925 */
						obj_t BgL_auxz00_4801;

						if (ELONGP(BgL_za71za7_3083))
							{	/* Ieee/fixnum.scm 925 */
								BgL_auxz00_4801 = BgL_za71za7_3083;
							}
						else
							{
								obj_t BgL_auxz00_4804;

								BgL_auxz00_4804 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43112)),
									BGl_string2374z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3083);
								FAILURE(BgL_auxz00_4804, BFALSE, BFALSE);
							}
						BgL_za71za7_3686 = BELONG_TO_LONG(BgL_auxz00_4801);
					}
					{	/* Ieee/fixnum.scm 925 */
						obj_t BgL_auxz00_4809;

						if (ELONGP(BgL_za72za7_3084))
							{	/* Ieee/fixnum.scm 925 */
								BgL_auxz00_4809 = BgL_za72za7_3084;
							}
						else
							{
								obj_t BgL_auxz00_4812;

								BgL_auxz00_4812 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43112)),
									BGl_string2374z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3084);
								FAILURE(BgL_auxz00_4812, BFALSE, BFALSE);
							}
						BgL_za72za7_3687 = BELONG_TO_LONG(BgL_auxz00_4809);
					}
					BgL_auxz00_4800 = (BgL_za71za7_3686 + BgL_za72za7_3687);
				}
				return make_belong(BgL_auxz00_4800);
			}
		}
	}



/* +llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_zb2llongzb2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_96,
		BGL_LONGLONG_T BgL_za72za7_97)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 930 */
			return (BgL_za71za7_96 + BgL_za72za7_97);
		}
	}



/* _+llong */
	obj_t BGl__zb2llongzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3085,
		obj_t BgL_za71za7_3086, obj_t BgL_za72za7_3087)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 930 */
			{	/* Ieee/fixnum.scm 931 */
				BGL_LONGLONG_T BgL_auxz00_4820;

				{	/* Ieee/fixnum.scm 931 */
					BGL_LONGLONG_T BgL_za71za7_3688;

					BGL_LONGLONG_T BgL_za72za7_3689;

					{	/* Ieee/fixnum.scm 931 */
						obj_t BgL_auxz00_4821;

						if (LLONGP(BgL_za71za7_3086))
							{	/* Ieee/fixnum.scm 931 */
								BgL_auxz00_4821 = BgL_za71za7_3086;
							}
						else
							{
								obj_t BgL_auxz00_4824;

								BgL_auxz00_4824 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43386)),
									BGl_string2375z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3086);
								FAILURE(BgL_auxz00_4824, BFALSE, BFALSE);
							}
						BgL_za71za7_3688 = BLLONG_TO_LLONG(BgL_auxz00_4821);
					}
					{	/* Ieee/fixnum.scm 931 */
						obj_t BgL_auxz00_4829;

						if (LLONGP(BgL_za72za7_3087))
							{	/* Ieee/fixnum.scm 931 */
								BgL_auxz00_4829 = BgL_za72za7_3087;
							}
						else
							{
								obj_t BgL_auxz00_4832;

								BgL_auxz00_4832 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43386)),
									BGl_string2375z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3087);
								FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
							}
						BgL_za72za7_3689 = BLLONG_TO_LLONG(BgL_auxz00_4829);
					}
					BgL_auxz00_4820 = (BgL_za71za7_3688 + BgL_za72za7_3689);
				}
				return make_bllong(BgL_auxz00_4820);
			}
		}
	}



/* +bx */
	BGL_EXPORTED_DEF obj_t BGl_zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_za71za7_98, obj_t BgL_za72za7_99)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 936 */
			return bgl_bignum_add(BgL_za71za7_98, BgL_za72za7_99);
		}
	}



/* _+bx */
	obj_t BGl__zb2bxzb2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3088,
		obj_t BgL_za71za7_3089, obj_t BgL_za72za7_3090)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 936 */
			{	/* Ieee/fixnum.scm 937 */
				obj_t BgL_za71za7_3690;

				obj_t BgL_za72za7_3691;

				if (BIGNUMP(BgL_za71za7_3089))
					{	/* Ieee/fixnum.scm 937 */
						BgL_za71za7_3690 = BgL_za71za7_3089;
					}
				else
					{
						obj_t BgL_auxz00_4842;

						BgL_auxz00_4842 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 43657)),
							BGl_string2376z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3089);
						FAILURE(BgL_auxz00_4842, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_za72za7_3090))
					{	/* Ieee/fixnum.scm 937 */
						BgL_za72za7_3691 = BgL_za72za7_3090;
					}
				else
					{
						obj_t BgL_auxz00_4848;

						BgL_auxz00_4848 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 43657)),
							BGl_string2376z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3090);
						FAILURE(BgL_auxz00_4848, BFALSE, BFALSE);
					}
				return bgl_bignum_add(BgL_za71za7_3690, BgL_za72za7_3691);
			}
		}
	}



/* -fx */
	BGL_EXPORTED_DEF long BGl_zd2fxzd2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_100, long BgL_za72za7_101)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 942 */
			return (BgL_za71za7_100 - BgL_za72za7_101);
		}
	}



/* _-fx */
	obj_t BGl__zd2fxzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3091,
		obj_t BgL_za71za7_3092, obj_t BgL_za72za7_3093)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 942 */
			{	/* Ieee/fixnum.scm 943 */
				long BgL_auxz00_4854;

				{	/* Ieee/fixnum.scm 943 */
					long BgL_za71za7_3692;

					long BgL_za72za7_3693;

					{	/* Ieee/fixnum.scm 943 */
						obj_t BgL_auxz00_4855;

						if (INTEGERP(BgL_za71za7_3092))
							{	/* Ieee/fixnum.scm 943 */
								BgL_auxz00_4855 = BgL_za71za7_3092;
							}
						else
							{
								obj_t BgL_auxz00_4858;

								BgL_auxz00_4858 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43924)),
									BGl_string2377z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3092);
								FAILURE(BgL_auxz00_4858, BFALSE, BFALSE);
							}
						BgL_za71za7_3692 = (long) CINT(BgL_auxz00_4855);
					}
					{	/* Ieee/fixnum.scm 943 */
						obj_t BgL_auxz00_4863;

						if (INTEGERP(BgL_za72za7_3093))
							{	/* Ieee/fixnum.scm 943 */
								BgL_auxz00_4863 = BgL_za72za7_3093;
							}
						else
							{
								obj_t BgL_auxz00_4866;

								BgL_auxz00_4866 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 43924)),
									BGl_string2377z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3093);
								FAILURE(BgL_auxz00_4866, BFALSE, BFALSE);
							}
						BgL_za72za7_3693 = (long) CINT(BgL_auxz00_4863);
					}
					BgL_auxz00_4854 = (BgL_za71za7_3692 - BgL_za72za7_3693);
				}
				return BINT(BgL_auxz00_4854);
			}
		}
	}



/* -elong */
	BGL_EXPORTED_DEF long BGl_zd2elongzd2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_102, long BgL_za72za7_103)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 948 */
			{	/* Ieee/fixnum.scm 949 */
				long BgL_auxz00_4873;

				BgL_auxz00_4873 = (BgL_za71za7_102 - BgL_za72za7_103);
				return LONG_TO_ELONG(BgL_auxz00_4873);
			}
		}
	}



/* _-elong */
	obj_t BGl__zd2elongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3094,
		obj_t BgL_za71za7_3095, obj_t BgL_za72za7_3096)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 948 */
			{	/* Ieee/fixnum.scm 949 */
				long BgL_auxz00_4876;

				{	/* Ieee/fixnum.scm 949 */
					long BgL_za71za7_3694;

					long BgL_za72za7_3695;

					{	/* Ieee/fixnum.scm 949 */
						obj_t BgL_auxz00_4877;

						if (ELONGP(BgL_za71za7_3095))
							{	/* Ieee/fixnum.scm 949 */
								BgL_auxz00_4877 = BgL_za71za7_3095;
							}
						else
							{
								obj_t BgL_auxz00_4880;

								BgL_auxz00_4880 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 44195)),
									BGl_string2378z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3095);
								FAILURE(BgL_auxz00_4880, BFALSE, BFALSE);
							}
						BgL_za71za7_3694 = BELONG_TO_LONG(BgL_auxz00_4877);
					}
					{	/* Ieee/fixnum.scm 949 */
						obj_t BgL_auxz00_4885;

						if (ELONGP(BgL_za72za7_3096))
							{	/* Ieee/fixnum.scm 949 */
								BgL_auxz00_4885 = BgL_za72za7_3096;
							}
						else
							{
								obj_t BgL_auxz00_4888;

								BgL_auxz00_4888 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 44195)),
									BGl_string2378z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3096);
								FAILURE(BgL_auxz00_4888, BFALSE, BFALSE);
							}
						BgL_za72za7_3695 = BELONG_TO_LONG(BgL_auxz00_4885);
					}
					{	/* Ieee/fixnum.scm 949 */
						long BgL_auxz00_4893;

						BgL_auxz00_4893 = (BgL_za71za7_3694 - BgL_za72za7_3695);
						BgL_auxz00_4876 = LONG_TO_ELONG(BgL_auxz00_4893);
				}}
				return make_belong(BgL_auxz00_4876);
			}
		}
	}



/* -llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_zd2llongzd2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_104,
		BGL_LONGLONG_T BgL_za72za7_105)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 954 */
			return (BgL_za71za7_104 - BgL_za72za7_105);
		}
	}



/* _-llong */
	obj_t BGl__zd2llongzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3097,
		obj_t BgL_za71za7_3098, obj_t BgL_za72za7_3099)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 954 */
			{	/* Ieee/fixnum.scm 955 */
				BGL_LONGLONG_T BgL_auxz00_4898;

				{	/* Ieee/fixnum.scm 955 */
					BGL_LONGLONG_T BgL_za71za7_3696;

					BGL_LONGLONG_T BgL_za72za7_3697;

					{	/* Ieee/fixnum.scm 955 */
						obj_t BgL_auxz00_4899;

						if (LLONGP(BgL_za71za7_3098))
							{	/* Ieee/fixnum.scm 955 */
								BgL_auxz00_4899 = BgL_za71za7_3098;
							}
						else
							{
								obj_t BgL_auxz00_4902;

								BgL_auxz00_4902 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 44469)),
									BGl_string2379z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3098);
								FAILURE(BgL_auxz00_4902, BFALSE, BFALSE);
							}
						BgL_za71za7_3696 = BLLONG_TO_LLONG(BgL_auxz00_4899);
					}
					{	/* Ieee/fixnum.scm 955 */
						obj_t BgL_auxz00_4907;

						if (LLONGP(BgL_za72za7_3099))
							{	/* Ieee/fixnum.scm 955 */
								BgL_auxz00_4907 = BgL_za72za7_3099;
							}
						else
							{
								obj_t BgL_auxz00_4910;

								BgL_auxz00_4910 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 44469)),
									BGl_string2379z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3099);
								FAILURE(BgL_auxz00_4910, BFALSE, BFALSE);
							}
						BgL_za72za7_3697 = BLLONG_TO_LLONG(BgL_auxz00_4907);
					}
					BgL_auxz00_4898 = (BgL_za71za7_3696 - BgL_za72za7_3697);
				}
				return make_bllong(BgL_auxz00_4898);
			}
		}
	}



/* -bx */
	BGL_EXPORTED_DEF obj_t BGl_zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_za71za7_106, obj_t BgL_za72za7_107)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 960 */
			return bgl_bignum_sub(BgL_za71za7_106, BgL_za72za7_107);
		}
	}



/* _-bx */
	obj_t BGl__zd2bxzd2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3100,
		obj_t BgL_za71za7_3101, obj_t BgL_za72za7_3102)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 960 */
			{	/* Ieee/fixnum.scm 961 */
				obj_t BgL_za71za7_3698;

				obj_t BgL_za72za7_3699;

				if (BIGNUMP(BgL_za71za7_3101))
					{	/* Ieee/fixnum.scm 961 */
						BgL_za71za7_3698 = BgL_za71za7_3101;
					}
				else
					{
						obj_t BgL_auxz00_4920;

						BgL_auxz00_4920 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 44740)),
							BGl_string2380z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3101);
						FAILURE(BgL_auxz00_4920, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_za72za7_3102))
					{	/* Ieee/fixnum.scm 961 */
						BgL_za72za7_3699 = BgL_za72za7_3102;
					}
				else
					{
						obj_t BgL_auxz00_4926;

						BgL_auxz00_4926 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 44740)),
							BGl_string2380z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3102);
						FAILURE(BgL_auxz00_4926, BFALSE, BFALSE);
					}
				return bgl_bignum_sub(BgL_za71za7_3698, BgL_za72za7_3699);
			}
		}
	}



/* *fx */
	BGL_EXPORTED_DEF long BGl_za2fxza2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_108, long BgL_za72za7_109)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 966 */
			return (BgL_za71za7_108 * BgL_za72za7_109);
		}
	}



/* _*fx */
	obj_t BGl__za2fxza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3103,
		obj_t BgL_za71za7_3104, obj_t BgL_za72za7_3105)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 966 */
			{	/* Ieee/fixnum.scm 967 */
				long BgL_auxz00_4932;

				{	/* Ieee/fixnum.scm 967 */
					long BgL_za71za7_3700;

					long BgL_za72za7_3701;

					{	/* Ieee/fixnum.scm 967 */
						obj_t BgL_auxz00_4933;

						if (INTEGERP(BgL_za71za7_3104))
							{	/* Ieee/fixnum.scm 967 */
								BgL_auxz00_4933 = BgL_za71za7_3104;
							}
						else
							{
								obj_t BgL_auxz00_4936;

								BgL_auxz00_4936 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45007)),
									BGl_string2381z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3104);
								FAILURE(BgL_auxz00_4936, BFALSE, BFALSE);
							}
						BgL_za71za7_3700 = (long) CINT(BgL_auxz00_4933);
					}
					{	/* Ieee/fixnum.scm 967 */
						obj_t BgL_auxz00_4941;

						if (INTEGERP(BgL_za72za7_3105))
							{	/* Ieee/fixnum.scm 967 */
								BgL_auxz00_4941 = BgL_za72za7_3105;
							}
						else
							{
								obj_t BgL_auxz00_4944;

								BgL_auxz00_4944 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45007)),
									BGl_string2381z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3105);
								FAILURE(BgL_auxz00_4944, BFALSE, BFALSE);
							}
						BgL_za72za7_3701 = (long) CINT(BgL_auxz00_4941);
					}
					BgL_auxz00_4932 = (BgL_za71za7_3700 * BgL_za72za7_3701);
				}
				return BINT(BgL_auxz00_4932);
			}
		}
	}



/* *elong */
	BGL_EXPORTED_DEF long BGl_za2elongza2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_110, long BgL_za72za7_111)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 972 */
			return (BgL_za71za7_110 * BgL_za72za7_111);
		}
	}



/* _*elong */
	obj_t BGl__za2elongza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3106,
		obj_t BgL_za71za7_3107, obj_t BgL_za72za7_3108)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 972 */
			{	/* Ieee/fixnum.scm 973 */
				long BgL_auxz00_4952;

				{	/* Ieee/fixnum.scm 973 */
					long BgL_za71za7_3702;

					long BgL_za72za7_3703;

					{	/* Ieee/fixnum.scm 973 */
						obj_t BgL_auxz00_4953;

						if (ELONGP(BgL_za71za7_3107))
							{	/* Ieee/fixnum.scm 973 */
								BgL_auxz00_4953 = BgL_za71za7_3107;
							}
						else
							{
								obj_t BgL_auxz00_4956;

								BgL_auxz00_4956 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45278)),
									BGl_string2382z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3107);
								FAILURE(BgL_auxz00_4956, BFALSE, BFALSE);
							}
						BgL_za71za7_3702 = BELONG_TO_LONG(BgL_auxz00_4953);
					}
					{	/* Ieee/fixnum.scm 973 */
						obj_t BgL_auxz00_4961;

						if (ELONGP(BgL_za72za7_3108))
							{	/* Ieee/fixnum.scm 973 */
								BgL_auxz00_4961 = BgL_za72za7_3108;
							}
						else
							{
								obj_t BgL_auxz00_4964;

								BgL_auxz00_4964 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45278)),
									BGl_string2382z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3108);
								FAILURE(BgL_auxz00_4964, BFALSE, BFALSE);
							}
						BgL_za72za7_3703 = BELONG_TO_LONG(BgL_auxz00_4961);
					}
					BgL_auxz00_4952 = (BgL_za71za7_3702 * BgL_za72za7_3703);
				}
				return make_belong(BgL_auxz00_4952);
			}
		}
	}



/* *llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_za2llongza2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_112,
		BGL_LONGLONG_T BgL_za72za7_113)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 978 */
			return (BgL_za71za7_112 * BgL_za72za7_113);
		}
	}



/* _*llong */
	obj_t BGl__za2llongza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3109,
		obj_t BgL_za71za7_3110, obj_t BgL_za72za7_3111)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 978 */
			{	/* Ieee/fixnum.scm 979 */
				BGL_LONGLONG_T BgL_auxz00_4972;

				{	/* Ieee/fixnum.scm 979 */
					BGL_LONGLONG_T BgL_za71za7_3704;

					BGL_LONGLONG_T BgL_za72za7_3705;

					{	/* Ieee/fixnum.scm 979 */
						obj_t BgL_auxz00_4973;

						if (LLONGP(BgL_za71za7_3110))
							{	/* Ieee/fixnum.scm 979 */
								BgL_auxz00_4973 = BgL_za71za7_3110;
							}
						else
							{
								obj_t BgL_auxz00_4976;

								BgL_auxz00_4976 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45552)),
									BGl_string2383z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3110);
								FAILURE(BgL_auxz00_4976, BFALSE, BFALSE);
							}
						BgL_za71za7_3704 = BLLONG_TO_LLONG(BgL_auxz00_4973);
					}
					{	/* Ieee/fixnum.scm 979 */
						obj_t BgL_auxz00_4981;

						if (LLONGP(BgL_za72za7_3111))
							{	/* Ieee/fixnum.scm 979 */
								BgL_auxz00_4981 = BgL_za72za7_3111;
							}
						else
							{
								obj_t BgL_auxz00_4984;

								BgL_auxz00_4984 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 45552)),
									BGl_string2383z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3111);
								FAILURE(BgL_auxz00_4984, BFALSE, BFALSE);
							}
						BgL_za72za7_3705 = BLLONG_TO_LLONG(BgL_auxz00_4981);
					}
					BgL_auxz00_4972 = (BgL_za71za7_3704 * BgL_za72za7_3705);
				}
				return make_bllong(BgL_auxz00_4972);
			}
		}
	}



/* *bx */
	BGL_EXPORTED_DEF obj_t BGl_za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_za71za7_114, obj_t BgL_za72za7_115)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 984 */
			return bgl_bignum_mul(BgL_za71za7_114, BgL_za72za7_115);
		}
	}



/* _*bx */
	obj_t BGl__za2bxza2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3112,
		obj_t BgL_za71za7_3113, obj_t BgL_za72za7_3114)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 984 */
			{	/* Ieee/fixnum.scm 985 */
				obj_t BgL_za71za7_3706;

				obj_t BgL_za72za7_3707;

				if (BIGNUMP(BgL_za71za7_3113))
					{	/* Ieee/fixnum.scm 985 */
						BgL_za71za7_3706 = BgL_za71za7_3113;
					}
				else
					{
						obj_t BgL_auxz00_4994;

						BgL_auxz00_4994 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 45823)),
							BGl_string2384z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3113);
						FAILURE(BgL_auxz00_4994, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_za72za7_3114))
					{	/* Ieee/fixnum.scm 985 */
						BgL_za72za7_3707 = BgL_za72za7_3114;
					}
				else
					{
						obj_t BgL_auxz00_5000;

						BgL_auxz00_5000 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 45823)),
							BGl_string2384z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3114);
						FAILURE(BgL_auxz00_5000, BFALSE, BFALSE);
					}
				return bgl_bignum_mul(BgL_za71za7_3706, BgL_za72za7_3707);
			}
		}
	}



/* /fx */
	BGL_EXPORTED_DEF long BGl_zf2fxzf2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_116, long BgL_za72za7_117)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 990 */
			return (BgL_za71za7_116 / BgL_za72za7_117);
		}
	}



/* _/fx */
	obj_t BGl__zf2fxzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3115,
		obj_t BgL_za71za7_3116, obj_t BgL_za72za7_3117)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 990 */
			{	/* Ieee/fixnum.scm 991 */
				long BgL_auxz00_5006;

				{	/* Ieee/fixnum.scm 991 */
					long BgL_za71za7_3708;

					long BgL_za72za7_3709;

					{	/* Ieee/fixnum.scm 991 */
						obj_t BgL_auxz00_5007;

						if (INTEGERP(BgL_za71za7_3116))
							{	/* Ieee/fixnum.scm 991 */
								BgL_auxz00_5007 = BgL_za71za7_3116;
							}
						else
							{
								obj_t BgL_auxz00_5010;

								BgL_auxz00_5010 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46090)),
									BGl_string2385z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3116);
								FAILURE(BgL_auxz00_5010, BFALSE, BFALSE);
							}
						BgL_za71za7_3708 = (long) CINT(BgL_auxz00_5007);
					}
					{	/* Ieee/fixnum.scm 991 */
						obj_t BgL_auxz00_5015;

						if (INTEGERP(BgL_za72za7_3117))
							{	/* Ieee/fixnum.scm 991 */
								BgL_auxz00_5015 = BgL_za72za7_3117;
							}
						else
							{
								obj_t BgL_auxz00_5018;

								BgL_auxz00_5018 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46090)),
									BGl_string2385z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3117);
								FAILURE(BgL_auxz00_5018, BFALSE, BFALSE);
							}
						BgL_za72za7_3709 = (long) CINT(BgL_auxz00_5015);
					}
					BgL_auxz00_5006 = (BgL_za71za7_3708 / BgL_za72za7_3709);
				}
				return BINT(BgL_auxz00_5006);
			}
		}
	}



/* /elong */
	BGL_EXPORTED_DEF long BGl_zf2elongzf2zz__r4_numbers_6_5_fixnumz00(long
		BgL_za71za7_118, long BgL_za72za7_119)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 996 */
			return (BgL_za71za7_118 / BgL_za72za7_119);
		}
	}



/* _/elong */
	obj_t BGl__zf2elongzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3118,
		obj_t BgL_za71za7_3119, obj_t BgL_za72za7_3120)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 996 */
			{	/* Ieee/fixnum.scm 997 */
				long BgL_auxz00_5026;

				{	/* Ieee/fixnum.scm 997 */
					long BgL_za71za7_3710;

					long BgL_za72za7_3711;

					{	/* Ieee/fixnum.scm 997 */
						obj_t BgL_auxz00_5027;

						if (ELONGP(BgL_za71za7_3119))
							{	/* Ieee/fixnum.scm 997 */
								BgL_auxz00_5027 = BgL_za71za7_3119;
							}
						else
							{
								obj_t BgL_auxz00_5030;

								BgL_auxz00_5030 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46361)),
									BGl_string2386z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3119);
								FAILURE(BgL_auxz00_5030, BFALSE, BFALSE);
							}
						BgL_za71za7_3710 = BELONG_TO_LONG(BgL_auxz00_5027);
					}
					{	/* Ieee/fixnum.scm 997 */
						obj_t BgL_auxz00_5035;

						if (ELONGP(BgL_za72za7_3120))
							{	/* Ieee/fixnum.scm 997 */
								BgL_auxz00_5035 = BgL_za72za7_3120;
							}
						else
							{
								obj_t BgL_auxz00_5038;

								BgL_auxz00_5038 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46361)),
									BGl_string2386z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3120);
								FAILURE(BgL_auxz00_5038, BFALSE, BFALSE);
							}
						BgL_za72za7_3711 = BELONG_TO_LONG(BgL_auxz00_5035);
					}
					BgL_auxz00_5026 = (BgL_za71za7_3710 / BgL_za72za7_3711);
				}
				return make_belong(BgL_auxz00_5026);
			}
		}
	}



/* /llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_zf2llongzf2zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_za71za7_120,
		BGL_LONGLONG_T BgL_za72za7_121)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1002 */
			return (BgL_za71za7_120 / BgL_za72za7_121);
		}
	}



/* _/llong */
	obj_t BGl__zf2llongzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3121,
		obj_t BgL_za71za7_3122, obj_t BgL_za72za7_3123)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1002 */
			{	/* Ieee/fixnum.scm 1003 */
				BGL_LONGLONG_T BgL_auxz00_5046;

				{	/* Ieee/fixnum.scm 1003 */
					BGL_LONGLONG_T BgL_za71za7_3712;

					BGL_LONGLONG_T BgL_za72za7_3713;

					{	/* Ieee/fixnum.scm 1003 */
						obj_t BgL_auxz00_5047;

						if (LLONGP(BgL_za71za7_3122))
							{	/* Ieee/fixnum.scm 1003 */
								BgL_auxz00_5047 = BgL_za71za7_3122;
							}
						else
							{
								obj_t BgL_auxz00_5050;

								BgL_auxz00_5050 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46635)),
									BGl_string2387z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za71za7_3122);
								FAILURE(BgL_auxz00_5050, BFALSE, BFALSE);
							}
						BgL_za71za7_3712 = BLLONG_TO_LLONG(BgL_auxz00_5047);
					}
					{	/* Ieee/fixnum.scm 1003 */
						obj_t BgL_auxz00_5055;

						if (LLONGP(BgL_za72za7_3123))
							{	/* Ieee/fixnum.scm 1003 */
								BgL_auxz00_5055 = BgL_za72za7_3123;
							}
						else
							{
								obj_t BgL_auxz00_5058;

								BgL_auxz00_5058 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 46635)),
									BGl_string2387z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_za72za7_3123);
								FAILURE(BgL_auxz00_5058, BFALSE, BFALSE);
							}
						BgL_za72za7_3713 = BLLONG_TO_LLONG(BgL_auxz00_5055);
					}
					BgL_auxz00_5046 = (BgL_za71za7_3712 / BgL_za72za7_3713);
				}
				return make_bllong(BgL_auxz00_5046);
			}
		}
	}



/* /bx */
	BGL_EXPORTED_DEF obj_t BGl_zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_za71za7_122, obj_t BgL_za72za7_123)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1008 */
			return bgl_bignum_quotient(BgL_za71za7_122, BgL_za72za7_123);
		}
	}



/* _/bx */
	obj_t BGl__zf2bxzf2zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3124,
		obj_t BgL_za71za7_3125, obj_t BgL_za72za7_3126)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1008 */
			{	/* Ieee/fixnum.scm 1009 */
				obj_t BgL_za71za7_3714;

				obj_t BgL_za72za7_3715;

				if (BIGNUMP(BgL_za71za7_3125))
					{	/* Ieee/fixnum.scm 1009 */
						BgL_za71za7_3714 = BgL_za71za7_3125;
					}
				else
					{
						obj_t BgL_auxz00_5068;

						BgL_auxz00_5068 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 46906)),
							BGl_string2388z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za71za7_3125);
						FAILURE(BgL_auxz00_5068, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_za72za7_3126))
					{	/* Ieee/fixnum.scm 1009 */
						BgL_za72za7_3715 = BgL_za72za7_3126;
					}
				else
					{
						obj_t BgL_auxz00_5074;

						BgL_auxz00_5074 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 46906)),
							BGl_string2388z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_za72za7_3126);
						FAILURE(BgL_auxz00_5074, BFALSE, BFALSE);
					}
				return bgl_bignum_quotient(BgL_za71za7_3714, BgL_za72za7_3715);
			}
		}
	}



/* negfx */
	BGL_EXPORTED_DEF long BGl_negfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_124)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1014 */
			return NEG(BgL_n1z00_124);
		}
	}



/* _negfx */
	obj_t BGl__negfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3127,
		obj_t BgL_n1z00_3128)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1014 */
			{	/* Ieee/fixnum.scm 1015 */
				long BgL_auxz00_5080;

				{	/* Ieee/fixnum.scm 1015 */
					long BgL_n1z00_3716;

					{	/* Ieee/fixnum.scm 1015 */
						obj_t BgL_auxz00_5081;

						if (INTEGERP(BgL_n1z00_3128))
							{	/* Ieee/fixnum.scm 1015 */
								BgL_auxz00_5081 = BgL_n1z00_3128;
							}
						else
							{
								obj_t BgL_auxz00_5084;

								BgL_auxz00_5084 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 47179)),
									BGl_string2389z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3128);
								FAILURE(BgL_auxz00_5084, BFALSE, BFALSE);
							}
						BgL_n1z00_3716 = (long) CINT(BgL_auxz00_5081);
					}
					BgL_auxz00_5080 = NEG(BgL_n1z00_3716);
				}
				return BINT(BgL_auxz00_5080);
			}
		}
	}



/* negelong */
	BGL_EXPORTED_DEF long BGl_negelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_125)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1020 */
			return NEG(BgL_n1z00_125);
		}
	}



/* _negelong */
	obj_t BGl__negelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3129,
		obj_t BgL_n1z00_3130)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1020 */
			{	/* Ieee/fixnum.scm 1021 */
				long BgL_auxz00_5092;

				{	/* Ieee/fixnum.scm 1021 */
					long BgL_n1z00_3717;

					{	/* Ieee/fixnum.scm 1021 */
						obj_t BgL_auxz00_5093;

						if (ELONGP(BgL_n1z00_3130))
							{	/* Ieee/fixnum.scm 1021 */
								BgL_auxz00_5093 = BgL_n1z00_3130;
							}
						else
							{
								obj_t BgL_auxz00_5096;

								BgL_auxz00_5096 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 47448)),
									BGl_string2390z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3130);
								FAILURE(BgL_auxz00_5096, BFALSE, BFALSE);
							}
						BgL_n1z00_3717 = BELONG_TO_LONG(BgL_auxz00_5093);
					}
					BgL_auxz00_5092 = NEG(BgL_n1z00_3717);
				}
				return make_belong(BgL_auxz00_5092);
			}
		}
	}



/* negllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_negllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_n1z00_126)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1026 */
			return NEG(BgL_n1z00_126);
		}
	}



/* _negllong */
	obj_t BGl__negllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3131,
		obj_t BgL_n1z00_3132)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1026 */
			{	/* Ieee/fixnum.scm 1027 */
				BGL_LONGLONG_T BgL_auxz00_5104;

				{	/* Ieee/fixnum.scm 1027 */
					BGL_LONGLONG_T BgL_n1z00_3718;

					{	/* Ieee/fixnum.scm 1027 */
						obj_t BgL_auxz00_5105;

						if (LLONGP(BgL_n1z00_3132))
							{	/* Ieee/fixnum.scm 1027 */
								BgL_auxz00_5105 = BgL_n1z00_3132;
							}
						else
							{
								obj_t BgL_auxz00_5108;

								BgL_auxz00_5108 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 47720)),
									BGl_string2391z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3132);
								FAILURE(BgL_auxz00_5108, BFALSE, BFALSE);
							}
						BgL_n1z00_3718 = BLLONG_TO_LLONG(BgL_auxz00_5105);
					}
					BgL_auxz00_5104 = NEG(BgL_n1z00_3718);
				}
				return make_bllong(BgL_auxz00_5104);
			}
		}
	}



/* negbx */
	BGL_EXPORTED_DEF obj_t BGl_negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_127)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1032 */
			return bgl_bignum_neg(BgL_n1z00_127);
		}
	}



/* _negbx */
	obj_t BGl__negbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3133,
		obj_t BgL_n1z00_3134)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1032 */
			{	/* Ieee/fixnum.scm 1033 */
				obj_t BgL_n1z00_3719;

				if (BIGNUMP(BgL_n1z00_3134))
					{	/* Ieee/fixnum.scm 1033 */
						BgL_n1z00_3719 = BgL_n1z00_3134;
					}
				else
					{
						obj_t BgL_auxz00_5118;

						BgL_auxz00_5118 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 47989)),
							BGl_string2392z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3134);
						FAILURE(BgL_auxz00_5118, BFALSE, BFALSE);
					}
				return bgl_bignum_neg(BgL_n1z00_3719);
			}
		}
	}



/* absfx */
	BGL_EXPORTED_DEF long BGl_absfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_128)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1038 */
			if ((BgL_nz00_128 < ((long) 0)))
				{	/* Ieee/fixnum.scm 1039 */
					return NEG(BgL_nz00_128);
				}
			else
				{	/* Ieee/fixnum.scm 1039 */
					return BgL_nz00_128;
				}
		}
	}



/* _absfx */
	obj_t BGl__absfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3135,
		obj_t BgL_nz00_3136)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1038 */
			{	/* Ieee/fixnum.scm 1039 */
				long BgL_auxz00_5126;

				{	/* Ieee/fixnum.scm 1039 */
					long BgL_nz00_3720;

					{	/* Ieee/fixnum.scm 1039 */
						obj_t BgL_auxz00_5127;

						if (INTEGERP(BgL_nz00_3136))
							{	/* Ieee/fixnum.scm 1039 */
								BgL_auxz00_5127 = BgL_nz00_3136;
							}
						else
							{
								obj_t BgL_auxz00_5130;

								BgL_auxz00_5130 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 48253)),
									BGl_string2393z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3136);
								FAILURE(BgL_auxz00_5130, BFALSE, BFALSE);
							}
						BgL_nz00_3720 = (long) CINT(BgL_auxz00_5127);
					}
					if ((BgL_nz00_3720 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1039 */
							BgL_auxz00_5126 = NEG(BgL_nz00_3720);
						}
					else
						{	/* Ieee/fixnum.scm 1039 */
							BgL_auxz00_5126 = BgL_nz00_3720;
						}
				}
				return BINT(BgL_auxz00_5126);
			}
		}
	}



/* abselong */
	BGL_EXPORTED_DEF long BGl_abselongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_nz00_129)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1046 */
			if ((BgL_nz00_129 < ((long) 0)))
				{	/* Ieee/fixnum.scm 1047 */
					return NEG(BgL_nz00_129);
				}
			else
				{	/* Ieee/fixnum.scm 1047 */
					return BgL_nz00_129;
				}
		}
	}



/* _abselong */
	obj_t BGl__abselongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3137,
		obj_t BgL_nz00_3138)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1046 */
			{	/* Ieee/fixnum.scm 1047 */
				long BgL_auxz00_5142;

				{	/* Ieee/fixnum.scm 1047 */
					long BgL_nz00_3721;

					{	/* Ieee/fixnum.scm 1047 */
						obj_t BgL_auxz00_5143;

						if (ELONGP(BgL_nz00_3138))
							{	/* Ieee/fixnum.scm 1047 */
								BgL_auxz00_5143 = BgL_nz00_3138;
							}
						else
							{
								obj_t BgL_auxz00_5146;

								BgL_auxz00_5146 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 48549)),
									BGl_string2394z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3138);
								FAILURE(BgL_auxz00_5146, BFALSE, BFALSE);
							}
						BgL_nz00_3721 = BELONG_TO_LONG(BgL_auxz00_5143);
					}
					if ((BgL_nz00_3721 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1047 */
							BgL_auxz00_5142 = NEG(BgL_nz00_3721);
						}
					else
						{	/* Ieee/fixnum.scm 1047 */
							BgL_auxz00_5142 = BgL_nz00_3721;
						}
				}
				return make_belong(BgL_auxz00_5142);
			}
		}
	}



/* absllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_absllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_nz00_130)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1054 */
			if ((BgL_nz00_130 < ((BGL_LONGLONG_T) 0)))
				{	/* Ieee/fixnum.scm 1055 */
					return NEG(BgL_nz00_130);
				}
			else
				{	/* Ieee/fixnum.scm 1055 */
					return BgL_nz00_130;
				}
		}
	}



/* _absllong */
	obj_t BGl__absllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3139,
		obj_t BgL_nz00_3140)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1054 */
			{	/* Ieee/fixnum.scm 1055 */
				BGL_LONGLONG_T BgL_auxz00_5158;

				{	/* Ieee/fixnum.scm 1055 */
					BGL_LONGLONG_T BgL_nz00_3722;

					{	/* Ieee/fixnum.scm 1055 */
						obj_t BgL_auxz00_5159;

						if (LLONGP(BgL_nz00_3140))
							{	/* Ieee/fixnum.scm 1055 */
								BgL_auxz00_5159 = BgL_nz00_3140;
							}
						else
							{
								obj_t BgL_auxz00_5162;

								BgL_auxz00_5162 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 48853)),
									BGl_string2395z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3140);
								FAILURE(BgL_auxz00_5162, BFALSE, BFALSE);
							}
						BgL_nz00_3722 = BLLONG_TO_LLONG(BgL_auxz00_5159);
					}
					if ((BgL_nz00_3722 < ((BGL_LONGLONG_T) 0)))
						{	/* Ieee/fixnum.scm 1055 */
							BgL_auxz00_5158 = NEG(BgL_nz00_3722);
						}
					else
						{	/* Ieee/fixnum.scm 1055 */
							BgL_auxz00_5158 = BgL_nz00_3722;
						}
				}
				return make_bllong(BgL_auxz00_5158);
			}
		}
	}



/* absbx */
	BGL_EXPORTED_DEF obj_t BGl_absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_nz00_131)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1062 */
			return bgl_bignum_abs(BgL_nz00_131);
		}
	}



/* _absbx */
	obj_t BGl__absbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3141,
		obj_t BgL_nz00_3142)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1062 */
			{	/* Ieee/fixnum.scm 1063 */
				obj_t BgL_nz00_3723;

				if (BIGNUMP(BgL_nz00_3142))
					{	/* Ieee/fixnum.scm 1063 */
						BgL_nz00_3723 = BgL_nz00_3142;
					}
				else
					{
						obj_t BgL_auxz00_5174;

						BgL_auxz00_5174 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 49154)),
							BGl_string2396z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_nz00_3142);
						FAILURE(BgL_auxz00_5174, BFALSE, BFALSE);
					}
				return bgl_bignum_abs(BgL_nz00_3723);
			}
		}
	}



/* quotient */
	BGL_EXPORTED_DEF obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_132, obj_t BgL_n2z00_133)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1128 */
			if (INTEGERP(BgL_n1z00_132))
				{	/* Ieee/fixnum.scm 1129 */
					if (INTEGERP(BgL_n2z00_133))
						{	/* Ieee/fixnum.scm 1129 */
							long BgL_auxz00_5185;

							long BgL_auxz00_5183;

							BgL_auxz00_5185 = (long) CINT(BgL_n2z00_133);
							BgL_auxz00_5183 = (long) CINT(BgL_n1z00_132);
							return BGL_SAFE_QUOTIENT_FX(BgL_auxz00_5183, BgL_auxz00_5185);
						}
					else
						{	/* Ieee/fixnum.scm 1129 */
							if (ELONGP(BgL_n2z00_133))
								{	/* Ieee/fixnum.scm 1129 */
									long BgL_arg1323z00_625;

									{	/* Ieee/fixnum.scm 1129 */
										long BgL_auxz00_5190;

										BgL_auxz00_5190 = (long) CINT(BgL_n1z00_132);
										BgL_arg1323z00_625 = LONG_TO_ELONG(BgL_auxz00_5190);
									}
									{	/* Ieee/fixnum.scm 1129 */
										long BgL_auxz00_5193;

										BgL_auxz00_5193 = BELONG_TO_LONG(BgL_n2z00_133);
										return
											BGL_SAFE_QUOTIENT_ELONG(BgL_arg1323z00_625,
											BgL_auxz00_5193);
									}
								}
							else
								{	/* Ieee/fixnum.scm 1129 */
									if (LLONGP(BgL_n2z00_133))
										{	/* Ieee/fixnum.scm 1129 */
											BGL_LONGLONG_T BgL_arg1325z00_627;

											{	/* Ieee/fixnum.scm 1129 */
												long BgL_auxz00_5198;

												BgL_auxz00_5198 = (long) CINT(BgL_n1z00_132);
												BgL_arg1325z00_627 = LONG_TO_LLONG(BgL_auxz00_5198);
											}
											{	/* Ieee/fixnum.scm 1129 */
												BGL_LONGLONG_T BgL_auxz00_5201;

												BgL_auxz00_5201 = BLLONG_TO_LLONG(BgL_n2z00_133);
												return
													BGL_SAFE_QUOTIENT_LLONG(BgL_arg1325z00_627,
													BgL_auxz00_5201);
											}
										}
									else
										{	/* Ieee/fixnum.scm 1129 */
											if (BIGNUMP(BgL_n2z00_133))
												{	/* Ieee/fixnum.scm 1129 */
													return
														bgl_bignum_quotient(bgl_long_to_bignum(
															(long) CINT(BgL_n1z00_132)), BgL_n2z00_133);
												}
											else
												{	/* Ieee/fixnum.scm 1129 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
														BgL_n2z00_133);
												}
										}
								}
						}
				}
			else
				{	/* Ieee/fixnum.scm 1129 */
					if (ELONGP(BgL_n1z00_132))
						{	/* Ieee/fixnum.scm 1129 */
							if (INTEGERP(BgL_n2z00_133))
								{	/* Ieee/fixnum.scm 1129 */
									long BgL_arg1330z00_632;

									{	/* Ieee/fixnum.scm 1129 */
										long BgL_auxz00_5214;

										BgL_auxz00_5214 = (long) CINT(BgL_n2z00_133);
										BgL_arg1330z00_632 = LONG_TO_ELONG(BgL_auxz00_5214);
									}
									{	/* Ieee/fixnum.scm 1129 */
										long BgL_auxz00_5217;

										BgL_auxz00_5217 = BELONG_TO_LONG(BgL_n1z00_132);
										return
											BGL_SAFE_QUOTIENT_ELONG(BgL_auxz00_5217,
											BgL_arg1330z00_632);
									}
								}
							else
								{	/* Ieee/fixnum.scm 1129 */
									if (ELONGP(BgL_n2z00_133))
										{	/* Ieee/fixnum.scm 1129 */
											long BgL_auxz00_5224;

											long BgL_auxz00_5222;

											BgL_auxz00_5224 = BELONG_TO_LONG(BgL_n2z00_133);
											BgL_auxz00_5222 = BELONG_TO_LONG(BgL_n1z00_132);
											return
												BGL_SAFE_QUOTIENT_ELONG(BgL_auxz00_5222,
												BgL_auxz00_5224);
										}
									else
										{	/* Ieee/fixnum.scm 1129 */
											if (LLONGP(BgL_n2z00_133))
												{	/* Ieee/fixnum.scm 1129 */
													BGL_LONGLONG_T BgL_arg1333z00_635;

													BgL_arg1333z00_635 =
														(BGL_LONGLONG_T) (BELONG_TO_LONG(BgL_n1z00_132));
													{	/* Ieee/fixnum.scm 1129 */
														BGL_LONGLONG_T BgL_auxz00_5231;

														BgL_auxz00_5231 = BLLONG_TO_LLONG(BgL_n2z00_133);
														return
															BGL_SAFE_QUOTIENT_LLONG(BgL_arg1333z00_635,
															BgL_auxz00_5231);
													}
												}
											else
												{	/* Ieee/fixnum.scm 1129 */
													if (BIGNUMP(BgL_n2z00_133))
														{	/* Ieee/fixnum.scm 1129 */
															obj_t BgL_auxz00_5236;

															{	/* Ieee/fixnum.scm 1129 */
																long BgL_xz00_1591;

																BgL_xz00_1591 = BELONG_TO_LONG(BgL_n1z00_132);
																BgL_auxz00_5236 =
																	bgl_long_to_bignum(BgL_xz00_1591);
															}
															return
																bgl_bignum_quotient(BgL_auxz00_5236,
																BgL_n2z00_133);
														}
													else
														{	/* Ieee/fixnum.scm 1129 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																BgL_n2z00_133);
														}
												}
										}
								}
						}
					else
						{	/* Ieee/fixnum.scm 1129 */
							if (LLONGP(BgL_n1z00_132))
								{	/* Ieee/fixnum.scm 1129 */
									if (INTEGERP(BgL_n2z00_133))
										{	/* Ieee/fixnum.scm 1129 */
											BGL_LONGLONG_T BgL_arg1338z00_640;

											{	/* Ieee/fixnum.scm 1129 */
												long BgL_auxz00_5245;

												BgL_auxz00_5245 = (long) CINT(BgL_n2z00_133);
												BgL_arg1338z00_640 = LONG_TO_LLONG(BgL_auxz00_5245);
											}
											{	/* Ieee/fixnum.scm 1129 */
												BGL_LONGLONG_T BgL_auxz00_5248;

												BgL_auxz00_5248 = BLLONG_TO_LLONG(BgL_n1z00_132);
												return
													BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5248,
													BgL_arg1338z00_640);
											}
										}
									else
										{	/* Ieee/fixnum.scm 1129 */
											if (ELONGP(BgL_n2z00_133))
												{	/* Ieee/fixnum.scm 1129 */
													BGL_LONGLONG_T BgL_arg1340z00_642;

													BgL_arg1340z00_642 =
														(BGL_LONGLONG_T) (BELONG_TO_LONG(BgL_n2z00_133));
													{	/* Ieee/fixnum.scm 1129 */
														BGL_LONGLONG_T BgL_auxz00_5255;

														BgL_auxz00_5255 = BLLONG_TO_LLONG(BgL_n1z00_132);
														return
															BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5255,
															BgL_arg1340z00_642);
													}
												}
											else
												{	/* Ieee/fixnum.scm 1129 */
													if (LLONGP(BgL_n2z00_133))
														{	/* Ieee/fixnum.scm 1129 */
															BGL_LONGLONG_T BgL_auxz00_5262;

															BGL_LONGLONG_T BgL_auxz00_5260;

															BgL_auxz00_5262 = BLLONG_TO_LLONG(BgL_n2z00_133);
															BgL_auxz00_5260 = BLLONG_TO_LLONG(BgL_n1z00_132);
															return
																BGL_SAFE_QUOTIENT_LLONG(BgL_auxz00_5260,
																BgL_auxz00_5262);
														}
													else
														{	/* Ieee/fixnum.scm 1129 */
															if (BIGNUMP(BgL_n2z00_133))
																{	/* Ieee/fixnum.scm 1129 */
																	return
																		bgl_bignum_quotient(bgl_llong_to_bignum
																		(BLLONG_TO_LLONG(BgL_n1z00_132)),
																		BgL_n2z00_133);
																}
															else
																{	/* Ieee/fixnum.scm 1129 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00,
																		BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																		BgL_n2z00_133);
																}
														}
												}
										}
								}
							else
								{	/* Ieee/fixnum.scm 1129 */
									if (BIGNUMP(BgL_n1z00_132))
										{	/* Ieee/fixnum.scm 1129 */
											if (INTEGERP(BgL_n2z00_133))
												{	/* Ieee/fixnum.scm 1129 */
													return
														bgl_bignum_quotient(BgL_n1z00_132,
														bgl_long_to_bignum((long) CINT(BgL_n2z00_133)));
												}
											else
												{	/* Ieee/fixnum.scm 1129 */
													if (ELONGP(BgL_n2z00_133))
														{	/* Ieee/fixnum.scm 1129 */
															obj_t BgL_auxz00_5280;

															{	/* Ieee/fixnum.scm 1129 */
																long BgL_xz00_1609;

																BgL_xz00_1609 = BELONG_TO_LONG(BgL_n2z00_133);
																BgL_auxz00_5280 =
																	bgl_long_to_bignum(BgL_xz00_1609);
															}
															return
																bgl_bignum_quotient(BgL_n1z00_132,
																BgL_auxz00_5280);
														}
													else
														{	/* Ieee/fixnum.scm 1129 */
															if (LLONGP(BgL_n2z00_133))
																{	/* Ieee/fixnum.scm 1129 */
																	return
																		bgl_bignum_quotient(BgL_n1z00_132,
																		bgl_llong_to_bignum(BLLONG_TO_LLONG
																			(BgL_n2z00_133)));
																}
															else
																{	/* Ieee/fixnum.scm 1129 */
																	if (BIGNUMP(BgL_n2z00_133))
																		{	/* Ieee/fixnum.scm 1129 */
																			return
																				bgl_bignum_quotient(BgL_n1z00_132,
																				BgL_n2z00_133);
																		}
																	else
																		{	/* Ieee/fixnum.scm 1129 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00,
																				BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																				BgL_n2z00_133);
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/fixnum.scm 1129 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2397z00zz__r4_numbers_6_5_fixnumz00,
												BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
												BgL_n1z00_132);
										}
								}
						}
				}
		}
	}



/* _quotient */
	obj_t BGl__quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3143,
		obj_t BgL_n1z00_3144, obj_t BgL_n2z00_3145)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1128 */
			return
				BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3144,
				BgL_n2z00_3145);
		}
	}



/* quotientfx */
	BGL_EXPORTED_DEF long BGl_quotientfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_134, long BgL_n2z00_135)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1134 */
			return (BgL_n1z00_134 / BgL_n2z00_135);
		}
	}



/* _quotientfx */
	obj_t BGl__quotientfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3146,
		obj_t BgL_n1z00_3147, obj_t BgL_n2z00_3148)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1134 */
			{	/* Ieee/fixnum.scm 1135 */
				long BgL_auxz00_5296;

				{	/* Ieee/fixnum.scm 1135 */
					long BgL_n1z00_3724;

					long BgL_n2z00_3725;

					{	/* Ieee/fixnum.scm 1135 */
						obj_t BgL_auxz00_5297;

						if (INTEGERP(BgL_n1z00_3147))
							{	/* Ieee/fixnum.scm 1135 */
								BgL_auxz00_5297 = BgL_n1z00_3147;
							}
						else
							{
								obj_t BgL_auxz00_5300;

								BgL_auxz00_5300 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 51477)),
									BGl_string2400z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3147);
								FAILURE(BgL_auxz00_5300, BFALSE, BFALSE);
							}
						BgL_n1z00_3724 = (long) CINT(BgL_auxz00_5297);
					}
					{	/* Ieee/fixnum.scm 1135 */
						obj_t BgL_auxz00_5305;

						if (INTEGERP(BgL_n2z00_3148))
							{	/* Ieee/fixnum.scm 1135 */
								BgL_auxz00_5305 = BgL_n2z00_3148;
							}
						else
							{
								obj_t BgL_auxz00_5308;

								BgL_auxz00_5308 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 51477)),
									BGl_string2400z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3148);
								FAILURE(BgL_auxz00_5308, BFALSE, BFALSE);
							}
						BgL_n2z00_3725 = (long) CINT(BgL_auxz00_5305);
					}
					BgL_auxz00_5296 = (BgL_n1z00_3724 / BgL_n2z00_3725);
				}
				return BINT(BgL_auxz00_5296);
			}
		}
	}



/* quotientelong */
	BGL_EXPORTED_DEF long BGl_quotientelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_136, long BgL_n2z00_137)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1140 */
			return (BgL_n1z00_136 / BgL_n2z00_137);
		}
	}



/* _quotientelong */
	obj_t BGl__quotientelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3149,
		obj_t BgL_n1z00_3150, obj_t BgL_n2z00_3151)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1140 */
			{	/* Ieee/fixnum.scm 1141 */
				long BgL_auxz00_5316;

				{	/* Ieee/fixnum.scm 1141 */
					long BgL_n1z00_3726;

					long BgL_n2z00_3727;

					{	/* Ieee/fixnum.scm 1141 */
						obj_t BgL_auxz00_5317;

						if (ELONGP(BgL_n1z00_3150))
							{	/* Ieee/fixnum.scm 1141 */
								BgL_auxz00_5317 = BgL_n1z00_3150;
							}
						else
							{
								obj_t BgL_auxz00_5320;

								BgL_auxz00_5320 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 51762)),
									BGl_string2401z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3150);
								FAILURE(BgL_auxz00_5320, BFALSE, BFALSE);
							}
						BgL_n1z00_3726 = BELONG_TO_LONG(BgL_auxz00_5317);
					}
					{	/* Ieee/fixnum.scm 1141 */
						obj_t BgL_auxz00_5325;

						if (ELONGP(BgL_n2z00_3151))
							{	/* Ieee/fixnum.scm 1141 */
								BgL_auxz00_5325 = BgL_n2z00_3151;
							}
						else
							{
								obj_t BgL_auxz00_5328;

								BgL_auxz00_5328 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 51762)),
									BGl_string2401z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3151);
								FAILURE(BgL_auxz00_5328, BFALSE, BFALSE);
							}
						BgL_n2z00_3727 = BELONG_TO_LONG(BgL_auxz00_5325);
					}
					BgL_auxz00_5316 = (BgL_n1z00_3726 / BgL_n2z00_3727);
				}
				return make_belong(BgL_auxz00_5316);
			}
		}
	}



/* quotientllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_quotientllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_n1z00_138, BGL_LONGLONG_T BgL_n2z00_139)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1146 */
			return (BgL_n1z00_138 / BgL_n2z00_139);
		}
	}



/* _quotientllong */
	obj_t BGl__quotientllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3152,
		obj_t BgL_n1z00_3153, obj_t BgL_n2z00_3154)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1146 */
			{	/* Ieee/fixnum.scm 1147 */
				BGL_LONGLONG_T BgL_auxz00_5336;

				{	/* Ieee/fixnum.scm 1147 */
					BGL_LONGLONG_T BgL_n1z00_3728;

					BGL_LONGLONG_T BgL_n2z00_3729;

					{	/* Ieee/fixnum.scm 1147 */
						obj_t BgL_auxz00_5337;

						if (LLONGP(BgL_n1z00_3153))
							{	/* Ieee/fixnum.scm 1147 */
								BgL_auxz00_5337 = BgL_n1z00_3153;
							}
						else
							{
								obj_t BgL_auxz00_5340;

								BgL_auxz00_5340 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 52050)),
									BGl_string2402z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3153);
								FAILURE(BgL_auxz00_5340, BFALSE, BFALSE);
							}
						BgL_n1z00_3728 = BLLONG_TO_LLONG(BgL_auxz00_5337);
					}
					{	/* Ieee/fixnum.scm 1147 */
						obj_t BgL_auxz00_5345;

						if (LLONGP(BgL_n2z00_3154))
							{	/* Ieee/fixnum.scm 1147 */
								BgL_auxz00_5345 = BgL_n2z00_3154;
							}
						else
							{
								obj_t BgL_auxz00_5348;

								BgL_auxz00_5348 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 52050)),
									BGl_string2402z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3154);
								FAILURE(BgL_auxz00_5348, BFALSE, BFALSE);
							}
						BgL_n2z00_3729 = BLLONG_TO_LLONG(BgL_auxz00_5345);
					}
					BgL_auxz00_5336 = (BgL_n1z00_3728 / BgL_n2z00_3729);
				}
				return make_bllong(BgL_auxz00_5336);
			}
		}
	}



/* quotientbx */
	BGL_EXPORTED_DEF obj_t BGl_quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_140, obj_t BgL_n2z00_141)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1152 */
			return bgl_bignum_quotient(BgL_n1z00_140, BgL_n2z00_141);
		}
	}



/* _quotientbx */
	obj_t BGl__quotientbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3155,
		obj_t BgL_n1z00_3156, obj_t BgL_n2z00_3157)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1152 */
			{	/* Ieee/fixnum.scm 1153 */
				obj_t BgL_n1z00_3730;

				obj_t BgL_n2z00_3731;

				if (BIGNUMP(BgL_n1z00_3156))
					{	/* Ieee/fixnum.scm 1153 */
						BgL_n1z00_3730 = BgL_n1z00_3156;
					}
				else
					{
						obj_t BgL_auxz00_5358;

						BgL_auxz00_5358 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 52335)),
							BGl_string2403z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3156);
						FAILURE(BgL_auxz00_5358, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_n2z00_3157))
					{	/* Ieee/fixnum.scm 1153 */
						BgL_n2z00_3731 = BgL_n2z00_3157;
					}
				else
					{
						obj_t BgL_auxz00_5364;

						BgL_auxz00_5364 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 52335)),
							BGl_string2403z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3157);
						FAILURE(BgL_auxz00_5364, BFALSE, BFALSE);
					}
				return bgl_bignum_quotient(BgL_n1z00_3730, BgL_n2z00_3731);
			}
		}
	}



/* remainder */
	BGL_EXPORTED_DEF obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_142, obj_t BgL_n2z00_143)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1158 */
			if (INTEGERP(BgL_n1z00_142))
				{	/* Ieee/fixnum.scm 1159 */
					if (INTEGERP(BgL_n2z00_143))
						{	/* Ieee/fixnum.scm 1159 */
							long BgL_n1z00_1621;

							long BgL_n2z00_1622;

							BgL_n1z00_1621 = (long) CINT(BgL_n1z00_142);
							BgL_n2z00_1622 = (long) CINT(BgL_n2z00_143);
							return BINT((BgL_n1z00_1621 % BgL_n2z00_1622));
						}
					else
						{	/* Ieee/fixnum.scm 1159 */
							if (ELONGP(BgL_n2z00_143))
								{	/* Ieee/fixnum.scm 1159 */
									long BgL_arg1359z00_657;

									{	/* Ieee/fixnum.scm 1159 */
										long BgL_auxz00_5379;

										BgL_auxz00_5379 = (long) CINT(BgL_n1z00_142);
										BgL_arg1359z00_657 = LONG_TO_ELONG(BgL_auxz00_5379);
									}
									{	/* Ieee/fixnum.scm 1159 */
										long BgL_n2z00_1626;

										BgL_n2z00_1626 = BELONG_TO_LONG(BgL_n2z00_143);
										{	/* Ieee/fixnum.scm 1159 */
											long BgL_auxz00_5383;

											BgL_auxz00_5383 = (BgL_arg1359z00_657 % BgL_n2z00_1626);
											return make_belong(BgL_auxz00_5383);
										}
									}
								}
							else
								{	/* Ieee/fixnum.scm 1159 */
									if (LLONGP(BgL_n2z00_143))
										{	/* Ieee/fixnum.scm 1159 */
											BGL_LONGLONG_T BgL_arg1367z00_659;

											{	/* Ieee/fixnum.scm 1159 */
												long BgL_auxz00_5388;

												BgL_auxz00_5388 = (long) CINT(BgL_n1z00_142);
												BgL_arg1367z00_659 = LONG_TO_LLONG(BgL_auxz00_5388);
											}
											{	/* Ieee/fixnum.scm 1159 */
												BGL_LONGLONG_T BgL_n2z00_1630;

												BgL_n2z00_1630 = BLLONG_TO_LLONG(BgL_n2z00_143);
												return
													make_bllong((BgL_arg1367z00_659 % BgL_n2z00_1630));
											}
										}
									else
										{	/* Ieee/fixnum.scm 1159 */
											if (BIGNUMP(BgL_n2z00_143))
												{	/* Ieee/fixnum.scm 1159 */
													return
														bgl_bignum_remainder(bgl_long_to_bignum(
															(long) CINT(BgL_n1z00_142)), BgL_n2z00_143);
												}
											else
												{	/* Ieee/fixnum.scm 1159 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
														BgL_n2z00_143);
												}
										}
								}
						}
				}
			else
				{	/* Ieee/fixnum.scm 1159 */
					if (ELONGP(BgL_n1z00_142))
						{	/* Ieee/fixnum.scm 1159 */
							if (INTEGERP(BgL_n2z00_143))
								{	/* Ieee/fixnum.scm 1159 */
									long BgL_arg1373z00_664;

									{	/* Ieee/fixnum.scm 1159 */
										long BgL_auxz00_5404;

										BgL_auxz00_5404 = (long) CINT(BgL_n2z00_143);
										BgL_arg1373z00_664 = LONG_TO_ELONG(BgL_auxz00_5404);
									}
									{	/* Ieee/fixnum.scm 1159 */
										long BgL_n1z00_1638;

										BgL_n1z00_1638 = BELONG_TO_LONG(BgL_n1z00_142);
										{	/* Ieee/fixnum.scm 1159 */
											long BgL_auxz00_5408;

											BgL_auxz00_5408 = (BgL_n1z00_1638 % BgL_arg1373z00_664);
											return make_belong(BgL_auxz00_5408);
										}
									}
								}
							else
								{	/* Ieee/fixnum.scm 1159 */
									if (ELONGP(BgL_n2z00_143))
										{	/* Ieee/fixnum.scm 1159 */
											long BgL_n1z00_1641;

											long BgL_n2z00_1642;

											BgL_n1z00_1641 = BELONG_TO_LONG(BgL_n1z00_142);
											BgL_n2z00_1642 = BELONG_TO_LONG(BgL_n2z00_143);
											{	/* Ieee/fixnum.scm 1159 */
												long BgL_auxz00_5415;

												BgL_auxz00_5415 = (BgL_n1z00_1641 % BgL_n2z00_1642);
												return make_belong(BgL_auxz00_5415);
											}
										}
									else
										{	/* Ieee/fixnum.scm 1159 */
											if (LLONGP(BgL_n2z00_143))
												{	/* Ieee/fixnum.scm 1159 */
													BGL_LONGLONG_T BgL_arg1376z00_667;

													BgL_arg1376z00_667 =
														(BGL_LONGLONG_T) (BELONG_TO_LONG(BgL_n1z00_142));
													{	/* Ieee/fixnum.scm 1159 */
														BGL_LONGLONG_T BgL_n2z00_1645;

														BgL_n2z00_1645 = BLLONG_TO_LLONG(BgL_n2z00_143);
														return
															make_bllong(
															(BgL_arg1376z00_667 % BgL_n2z00_1645));
													}
												}
											else
												{	/* Ieee/fixnum.scm 1159 */
													if (BIGNUMP(BgL_n2z00_143))
														{	/* Ieee/fixnum.scm 1159 */
															obj_t BgL_auxz00_5427;

															{	/* Ieee/fixnum.scm 1159 */
																long BgL_xz00_1647;

																BgL_xz00_1647 = BELONG_TO_LONG(BgL_n1z00_142);
																BgL_auxz00_5427 =
																	bgl_long_to_bignum(BgL_xz00_1647);
															}
															return
																bgl_bignum_remainder(BgL_auxz00_5427,
																BgL_n2z00_143);
														}
													else
														{	/* Ieee/fixnum.scm 1159 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																BgL_n2z00_143);
														}
												}
										}
								}
						}
					else
						{	/* Ieee/fixnum.scm 1159 */
							if (LLONGP(BgL_n1z00_142))
								{	/* Ieee/fixnum.scm 1159 */
									if (INTEGERP(BgL_n2z00_143))
										{	/* Ieee/fixnum.scm 1159 */
											BGL_LONGLONG_T BgL_arg1381z00_672;

											{	/* Ieee/fixnum.scm 1159 */
												long BgL_auxz00_5436;

												BgL_auxz00_5436 = (long) CINT(BgL_n2z00_143);
												BgL_arg1381z00_672 = LONG_TO_LLONG(BgL_auxz00_5436);
											}
											{	/* Ieee/fixnum.scm 1159 */
												BGL_LONGLONG_T BgL_n1z00_1653;

												BgL_n1z00_1653 = BLLONG_TO_LLONG(BgL_n1z00_142);
												return
													make_bllong((BgL_n1z00_1653 % BgL_arg1381z00_672));
											}
										}
									else
										{	/* Ieee/fixnum.scm 1159 */
											if (ELONGP(BgL_n2z00_143))
												{	/* Ieee/fixnum.scm 1159 */
													BGL_LONGLONG_T BgL_arg1383z00_674;

													BgL_arg1383z00_674 =
														(BGL_LONGLONG_T) (BELONG_TO_LONG(BgL_n2z00_143));
													{	/* Ieee/fixnum.scm 1159 */
														BGL_LONGLONG_T BgL_n1z00_1656;

														BgL_n1z00_1656 = BLLONG_TO_LLONG(BgL_n1z00_142);
														return
															make_bllong(
															(BgL_n1z00_1656 % BgL_arg1383z00_674));
													}
												}
											else
												{	/* Ieee/fixnum.scm 1159 */
													if (LLONGP(BgL_n2z00_143))
														{	/* Ieee/fixnum.scm 1159 */
															BGL_LONGLONG_T BgL_n1z00_1659;

															BGL_LONGLONG_T BgL_n2z00_1660;

															BgL_n1z00_1659 = BLLONG_TO_LLONG(BgL_n1z00_142);
															BgL_n2z00_1660 = BLLONG_TO_LLONG(BgL_n2z00_143);
															return
																make_bllong((BgL_n1z00_1659 % BgL_n2z00_1660));
														}
													else
														{	/* Ieee/fixnum.scm 1159 */
															if (BIGNUMP(BgL_n2z00_143))
																{	/* Ieee/fixnum.scm 1159 */
																	return
																		bgl_bignum_remainder(bgl_llong_to_bignum
																		(BLLONG_TO_LLONG(BgL_n1z00_142)),
																		BgL_n2z00_143);
																}
															else
																{	/* Ieee/fixnum.scm 1159 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00,
																		BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																		BgL_n2z00_143);
																}
														}
												}
										}
								}
							else
								{	/* Ieee/fixnum.scm 1159 */
									if (BIGNUMP(BgL_n1z00_142))
										{	/* Ieee/fixnum.scm 1159 */
											if (INTEGERP(BgL_n2z00_143))
												{	/* Ieee/fixnum.scm 1159 */
													return
														bgl_bignum_remainder(BgL_n1z00_142,
														bgl_long_to_bignum((long) CINT(BgL_n2z00_143)));
												}
											else
												{	/* Ieee/fixnum.scm 1159 */
													if (ELONGP(BgL_n2z00_143))
														{	/* Ieee/fixnum.scm 1159 */
															obj_t BgL_auxz00_5470;

															{	/* Ieee/fixnum.scm 1159 */
																long BgL_xz00_1671;

																BgL_xz00_1671 = BELONG_TO_LONG(BgL_n2z00_143);
																BgL_auxz00_5470 =
																	bgl_long_to_bignum(BgL_xz00_1671);
															}
															return
																bgl_bignum_remainder(BgL_n1z00_142,
																BgL_auxz00_5470);
														}
													else
														{	/* Ieee/fixnum.scm 1159 */
															if (LLONGP(BgL_n2z00_143))
																{	/* Ieee/fixnum.scm 1159 */
																	return
																		bgl_bignum_remainder(BgL_n1z00_142,
																		bgl_llong_to_bignum(BLLONG_TO_LLONG
																			(BgL_n2z00_143)));
																}
															else
																{	/* Ieee/fixnum.scm 1159 */
																	if (BIGNUMP(BgL_n2z00_143))
																		{	/* Ieee/fixnum.scm 1159 */
																			return
																				bgl_bignum_remainder(BgL_n1z00_142,
																				BgL_n2z00_143);
																		}
																	else
																		{	/* Ieee/fixnum.scm 1159 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00,
																				BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																				BgL_n2z00_143);
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/fixnum.scm 1159 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2404z00zz__r4_numbers_6_5_fixnumz00,
												BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
												BgL_n1z00_142);
										}
								}
						}
				}
		}
	}



/* _remainder */
	obj_t BGl__remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3158,
		obj_t BgL_n1z00_3159, obj_t BgL_n2z00_3160)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1158 */
			return
				BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3159,
				BgL_n2z00_3160);
		}
	}



/* remainderfx */
	BGL_EXPORTED_DEF long BGl_remainderfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_144, long BgL_n2z00_145)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1164 */
			return (BgL_n1z00_144 % BgL_n2z00_145);
		}
	}



/* _remainderfx */
	obj_t BGl__remainderfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3161,
		obj_t BgL_n1z00_3162, obj_t BgL_n2z00_3163)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1164 */
			{	/* Ieee/fixnum.scm 1165 */
				long BgL_auxz00_5486;

				{	/* Ieee/fixnum.scm 1165 */
					long BgL_n1z00_3732;

					long BgL_n2z00_3733;

					{	/* Ieee/fixnum.scm 1165 */
						obj_t BgL_auxz00_5487;

						if (INTEGERP(BgL_n1z00_3162))
							{	/* Ieee/fixnum.scm 1165 */
								BgL_auxz00_5487 = BgL_n1z00_3162;
							}
						else
							{
								obj_t BgL_auxz00_5490;

								BgL_auxz00_5490 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 52894)),
									BGl_string2406z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3162);
								FAILURE(BgL_auxz00_5490, BFALSE, BFALSE);
							}
						BgL_n1z00_3732 = (long) CINT(BgL_auxz00_5487);
					}
					{	/* Ieee/fixnum.scm 1165 */
						obj_t BgL_auxz00_5495;

						if (INTEGERP(BgL_n2z00_3163))
							{	/* Ieee/fixnum.scm 1165 */
								BgL_auxz00_5495 = BgL_n2z00_3163;
							}
						else
							{
								obj_t BgL_auxz00_5498;

								BgL_auxz00_5498 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 52894)),
									BGl_string2406z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3163);
								FAILURE(BgL_auxz00_5498, BFALSE, BFALSE);
							}
						BgL_n2z00_3733 = (long) CINT(BgL_auxz00_5495);
					}
					BgL_auxz00_5486 = (BgL_n1z00_3732 % BgL_n2z00_3733);
				}
				return BINT(BgL_auxz00_5486);
			}
		}
	}



/* remainderelong */
	BGL_EXPORTED_DEF long BGl_remainderelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_n1z00_146, long BgL_n2z00_147)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1170 */
			return (BgL_n1z00_146 % BgL_n2z00_147);
		}
	}



/* _remainderelong */
	obj_t BGl__remainderelongz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3164, obj_t BgL_n1z00_3165, obj_t BgL_n2z00_3166)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1170 */
			{	/* Ieee/fixnum.scm 1171 */
				long BgL_auxz00_5506;

				{	/* Ieee/fixnum.scm 1171 */
					long BgL_n1z00_3734;

					long BgL_n2z00_3735;

					{	/* Ieee/fixnum.scm 1171 */
						obj_t BgL_auxz00_5507;

						if (ELONGP(BgL_n1z00_3165))
							{	/* Ieee/fixnum.scm 1171 */
								BgL_auxz00_5507 = BgL_n1z00_3165;
							}
						else
							{
								obj_t BgL_auxz00_5510;

								BgL_auxz00_5510 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 53181)),
									BGl_string2407z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3165);
								FAILURE(BgL_auxz00_5510, BFALSE, BFALSE);
							}
						BgL_n1z00_3734 = BELONG_TO_LONG(BgL_auxz00_5507);
					}
					{	/* Ieee/fixnum.scm 1171 */
						obj_t BgL_auxz00_5515;

						if (ELONGP(BgL_n2z00_3166))
							{	/* Ieee/fixnum.scm 1171 */
								BgL_auxz00_5515 = BgL_n2z00_3166;
							}
						else
							{
								obj_t BgL_auxz00_5518;

								BgL_auxz00_5518 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 53181)),
									BGl_string2407z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3166);
								FAILURE(BgL_auxz00_5518, BFALSE, BFALSE);
							}
						BgL_n2z00_3735 = BELONG_TO_LONG(BgL_auxz00_5515);
					}
					BgL_auxz00_5506 = (BgL_n1z00_3734 % BgL_n2z00_3735);
				}
				return make_belong(BgL_auxz00_5506);
			}
		}
	}



/* remainderllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_remainderllongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_n1z00_148, BGL_LONGLONG_T BgL_n2z00_149)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1176 */
			return (BgL_n1z00_148 % BgL_n2z00_149);
		}
	}



/* _remainderllong */
	obj_t BGl__remainderllongz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3167, obj_t BgL_n1z00_3168, obj_t BgL_n2z00_3169)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1176 */
			{	/* Ieee/fixnum.scm 1177 */
				BGL_LONGLONG_T BgL_auxz00_5526;

				{	/* Ieee/fixnum.scm 1177 */
					BGL_LONGLONG_T BgL_n1z00_3736;

					BGL_LONGLONG_T BgL_n2z00_3737;

					{	/* Ieee/fixnum.scm 1177 */
						obj_t BgL_auxz00_5527;

						if (LLONGP(BgL_n1z00_3168))
							{	/* Ieee/fixnum.scm 1177 */
								BgL_auxz00_5527 = BgL_n1z00_3168;
							}
						else
							{
								obj_t BgL_auxz00_5530;

								BgL_auxz00_5530 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 53471)),
									BGl_string2408z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n1z00_3168);
								FAILURE(BgL_auxz00_5530, BFALSE, BFALSE);
							}
						BgL_n1z00_3736 = BLLONG_TO_LLONG(BgL_auxz00_5527);
					}
					{	/* Ieee/fixnum.scm 1177 */
						obj_t BgL_auxz00_5535;

						if (LLONGP(BgL_n2z00_3169))
							{	/* Ieee/fixnum.scm 1177 */
								BgL_auxz00_5535 = BgL_n2z00_3169;
							}
						else
							{
								obj_t BgL_auxz00_5538;

								BgL_auxz00_5538 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 53471)),
									BGl_string2408z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00,
									BgL_n2z00_3169);
								FAILURE(BgL_auxz00_5538, BFALSE, BFALSE);
							}
						BgL_n2z00_3737 = BLLONG_TO_LLONG(BgL_auxz00_5535);
					}
					BgL_auxz00_5526 = (BgL_n1z00_3736 % BgL_n2z00_3737);
				}
				return make_bllong(BgL_auxz00_5526);
			}
		}
	}



/* remainderbx */
	BGL_EXPORTED_DEF obj_t BGl_remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_150, obj_t BgL_n2z00_151)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1182 */
			return bgl_bignum_remainder(BgL_n1z00_150, BgL_n2z00_151);
		}
	}



/* _remainderbx */
	obj_t BGl__remainderbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3170,
		obj_t BgL_n1z00_3171, obj_t BgL_n2z00_3172)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1182 */
			{	/* Ieee/fixnum.scm 1183 */
				obj_t BgL_n1z00_3738;

				obj_t BgL_n2z00_3739;

				if (BIGNUMP(BgL_n1z00_3171))
					{	/* Ieee/fixnum.scm 1183 */
						BgL_n1z00_3738 = BgL_n1z00_3171;
					}
				else
					{
						obj_t BgL_auxz00_5548;

						BgL_auxz00_5548 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 53758)),
							BGl_string2409z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n1z00_3171);
						FAILURE(BgL_auxz00_5548, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_n2z00_3172))
					{	/* Ieee/fixnum.scm 1183 */
						BgL_n2z00_3739 = BgL_n2z00_3172;
					}
				else
					{
						obj_t BgL_auxz00_5554;

						BgL_auxz00_5554 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 53758)),
							BGl_string2409z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_n2z00_3172);
						FAILURE(BgL_auxz00_5554, BFALSE, BFALSE);
					}
				return bgl_bignum_remainder(BgL_n1z00_3738, BgL_n2z00_3739);
			}
		}
	}



/* modulo */
	BGL_EXPORTED_DEF obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_n1z00_152, obj_t BgL_n2z00_153)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1188 */
			if (INTEGERP(BgL_n1z00_152))
				{	/* Ieee/fixnum.scm 1189 */
					if (INTEGERP(BgL_n2z00_153))
						{	/* Ieee/fixnum.scm 1189 */
							return
								BINT(BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
									(long) CINT(BgL_n1z00_152), (long) CINT(BgL_n2z00_153)));
						}
					else
						{	/* Ieee/fixnum.scm 1189 */
							if (ELONGP(BgL_n2z00_153))
								{	/* Ieee/fixnum.scm 1189 */
									long BgL_arg1398z00_689;

									{	/* Ieee/fixnum.scm 1189 */
										long BgL_auxz00_5569;

										BgL_auxz00_5569 = (long) CINT(BgL_n1z00_152);
										BgL_arg1398z00_689 = LONG_TO_ELONG(BgL_auxz00_5569);
									}
									{	/* Ieee/fixnum.scm 1189 */
										long BgL_auxz00_5572;

										BgL_auxz00_5572 =
											BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00
											(BgL_arg1398z00_689, BELONG_TO_LONG(BgL_n2z00_153));
										return make_belong(BgL_auxz00_5572);
									}
								}
							else
								{	/* Ieee/fixnum.scm 1189 */
									if (LLONGP(BgL_n2z00_153))
										{	/* Ieee/fixnum.scm 1189 */
											BGL_LONGLONG_T BgL_arg1400z00_691;

											{	/* Ieee/fixnum.scm 1189 */
												long BgL_auxz00_5578;

												BgL_auxz00_5578 = (long) CINT(BgL_n1z00_152);
												BgL_arg1400z00_691 = LONG_TO_LLONG(BgL_auxz00_5578);
											}
											return
												make_bllong
												(BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00
												(BgL_arg1400z00_691, BLLONG_TO_LLONG(BgL_n2z00_153)));
										}
									else
										{	/* Ieee/fixnum.scm 1189 */
											if (BIGNUMP(BgL_n2z00_153))
												{	/* Ieee/fixnum.scm 1189 */
													return
														BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
														(bgl_long_to_bignum((long) CINT(BgL_n1z00_152)),
														BgL_n2z00_153);
												}
											else
												{	/* Ieee/fixnum.scm 1189 */
													return
														BGl_errorz00zz__errorz00
														(BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
														BgL_n2z00_153);
												}
										}
								}
						}
				}
			else
				{	/* Ieee/fixnum.scm 1189 */
					if (ELONGP(BgL_n1z00_152))
						{	/* Ieee/fixnum.scm 1189 */
							if (INTEGERP(BgL_n2z00_153))
								{	/* Ieee/fixnum.scm 1189 */
									long BgL_arg1405z00_696;

									{	/* Ieee/fixnum.scm 1189 */
										long BgL_auxz00_5594;

										BgL_auxz00_5594 = (long) CINT(BgL_n2z00_153);
										BgL_arg1405z00_696 = LONG_TO_ELONG(BgL_auxz00_5594);
									}
									{	/* Ieee/fixnum.scm 1189 */
										long BgL_auxz00_5597;

										BgL_auxz00_5597 =
											BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00
											(BELONG_TO_LONG(BgL_n1z00_152), BgL_arg1405z00_696);
										return make_belong(BgL_auxz00_5597);
									}
								}
							else
								{	/* Ieee/fixnum.scm 1189 */
									if (ELONGP(BgL_n2z00_153))
										{	/* Ieee/fixnum.scm 1189 */
											long BgL_auxz00_5603;

											BgL_auxz00_5603 =
												BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00
												(BELONG_TO_LONG(BgL_n1z00_152),
												BELONG_TO_LONG(BgL_n2z00_153));
											return make_belong(BgL_auxz00_5603);
										}
									else
										{	/* Ieee/fixnum.scm 1189 */
											if (LLONGP(BgL_n2z00_153))
												{	/* Ieee/fixnum.scm 1189 */
													return
														make_bllong
														(BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(
															(BGL_LONGLONG_T) (BELONG_TO_LONG(BgL_n1z00_152)),
															BLLONG_TO_LLONG(BgL_n2z00_153)));
												}
											else
												{	/* Ieee/fixnum.scm 1189 */
													if (BIGNUMP(BgL_n2z00_153))
														{	/* Ieee/fixnum.scm 1189 */
															obj_t BgL_auxz00_5617;

															{	/* Ieee/fixnum.scm 1189 */
																long BgL_xz00_1695;

																BgL_xz00_1695 = BELONG_TO_LONG(BgL_n1z00_152);
																BgL_auxz00_5617 =
																	bgl_long_to_bignum(BgL_xz00_1695);
															}
															return
																BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
																(BgL_auxz00_5617, BgL_n2z00_153);
														}
													else
														{	/* Ieee/fixnum.scm 1189 */
															return
																BGl_errorz00zz__errorz00
																(BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																BgL_n2z00_153);
														}
												}
										}
								}
						}
					else
						{	/* Ieee/fixnum.scm 1189 */
							if (LLONGP(BgL_n1z00_152))
								{	/* Ieee/fixnum.scm 1189 */
									if (INTEGERP(BgL_n2z00_153))
										{	/* Ieee/fixnum.scm 1189 */
											BGL_LONGLONG_T BgL_arg1413z00_704;

											{	/* Ieee/fixnum.scm 1189 */
												long BgL_auxz00_5626;

												BgL_auxz00_5626 = (long) CINT(BgL_n2z00_153);
												BgL_arg1413z00_704 = LONG_TO_LLONG(BgL_auxz00_5626);
											}
											return
												make_bllong
												(BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00
												(BLLONG_TO_LLONG(BgL_n1z00_152), BgL_arg1413z00_704));
										}
									else
										{	/* Ieee/fixnum.scm 1189 */
											if (ELONGP(BgL_n2z00_153))
												{	/* Ieee/fixnum.scm 1189 */
													return
														make_bllong
														(BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00
														(BLLONG_TO_LLONG(BgL_n1z00_152),
															(BGL_LONGLONG_T) (BELONG_TO_LONG
																(BgL_n2z00_153))));
												}
											else
												{	/* Ieee/fixnum.scm 1189 */
													if (LLONGP(BgL_n2z00_153))
														{	/* Ieee/fixnum.scm 1189 */
															return
																make_bllong
																(BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00
																(BLLONG_TO_LLONG(BgL_n1z00_152),
																	BLLONG_TO_LLONG(BgL_n2z00_153)));
														}
													else
														{	/* Ieee/fixnum.scm 1189 */
															if (BIGNUMP(BgL_n2z00_153))
																{	/* Ieee/fixnum.scm 1189 */
																	return
																		BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
																		(bgl_llong_to_bignum(BLLONG_TO_LLONG
																			(BgL_n1z00_152)), BgL_n2z00_153);
																}
															else
																{	/* Ieee/fixnum.scm 1189 */
																	return
																		BGl_errorz00zz__errorz00
																		(BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00,
																		BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																		BgL_n2z00_153);
																}
														}
												}
										}
								}
							else
								{	/* Ieee/fixnum.scm 1189 */
									if (BIGNUMP(BgL_n1z00_152))
										{	/* Ieee/fixnum.scm 1189 */
											if (INTEGERP(BgL_n2z00_153))
												{	/* Ieee/fixnum.scm 1189 */
													return
														BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
														(BgL_n1z00_152,
														bgl_long_to_bignum((long) CINT(BgL_n2z00_153)));
												}
											else
												{	/* Ieee/fixnum.scm 1189 */
													if (ELONGP(BgL_n2z00_153))
														{	/* Ieee/fixnum.scm 1189 */
															obj_t BgL_auxz00_5660;

															{	/* Ieee/fixnum.scm 1189 */
																long BgL_xz00_1707;

																BgL_xz00_1707 = BELONG_TO_LONG(BgL_n2z00_153);
																BgL_auxz00_5660 =
																	bgl_long_to_bignum(BgL_xz00_1707);
															}
															return
																BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
																(BgL_n1z00_152, BgL_auxz00_5660);
														}
													else
														{	/* Ieee/fixnum.scm 1189 */
															if (LLONGP(BgL_n2z00_153))
																{	/* Ieee/fixnum.scm 1189 */
																	return
																		BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
																		(BgL_n1z00_152,
																		bgl_llong_to_bignum(BLLONG_TO_LLONG
																			(BgL_n2z00_153)));
																}
															else
																{	/* Ieee/fixnum.scm 1189 */
																	if (BIGNUMP(BgL_n2z00_153))
																		{	/* Ieee/fixnum.scm 1189 */
																			return
																				BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00
																				(BgL_n1z00_152, BgL_n2z00_153);
																		}
																	else
																		{	/* Ieee/fixnum.scm 1189 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00,
																				BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
																				BgL_n2z00_153);
																		}
																}
														}
												}
										}
									else
										{	/* Ieee/fixnum.scm 1189 */
											return
												BGl_errorz00zz__errorz00
												(BGl_symbol2410z00zz__r4_numbers_6_5_fixnumz00,
												BGl_string2399z00zz__r4_numbers_6_5_fixnumz00,
												BgL_n1z00_152);
										}
								}
						}
				}
		}
	}



/* _modulo */
	obj_t BGl__moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3173,
		obj_t BgL_n1z00_3174, obj_t BgL_n2z00_3175)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1188 */
			return
				BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(BgL_n1z00_3174,
				BgL_n2z00_3175);
		}
	}



/* modulofx */
	BGL_EXPORTED_DEF long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_154, long BgL_yz00_155)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1194 */
			{	/* Ieee/fixnum.scm 1195 */
				long BgL_rz00_718;

				BgL_rz00_718 = (BgL_xz00_154 % BgL_yz00_155);
				if ((BgL_rz00_718 == ((long) 0)))
					{	/* Ieee/fixnum.scm 1196 */
						return BgL_rz00_718;
					}
				else
					{	/* Ieee/fixnum.scm 1196 */
						if ((BgL_yz00_155 > ((long) 0)))
							{	/* Ieee/fixnum.scm 1198 */
								if ((BgL_rz00_718 > ((long) 0)))
									{	/* Ieee/fixnum.scm 1199 */
										return BgL_rz00_718;
									}
								else
									{	/* Ieee/fixnum.scm 1199 */
										return (BgL_yz00_155 + BgL_rz00_718);
									}
							}
						else
							{	/* Ieee/fixnum.scm 1198 */
								if ((BgL_rz00_718 < ((long) 0)))
									{	/* Ieee/fixnum.scm 1200 */
										return BgL_rz00_718;
									}
								else
									{	/* Ieee/fixnum.scm 1200 */
										return (BgL_yz00_155 + BgL_rz00_718);
									}
							}
					}
			}
		}
	}



/* _modulofx */
	obj_t BGl__modulofxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3176,
		obj_t BgL_xz00_3177, obj_t BgL_yz00_3178)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1194 */
			{	/* Ieee/fixnum.scm 1195 */
				long BgL_auxz00_5686;

				{	/* Ieee/fixnum.scm 1195 */
					long BgL_auxz00_5696;

					long BgL_auxz00_5687;

					{	/* Ieee/fixnum.scm 1195 */
						obj_t BgL_auxz00_5697;

						if (INTEGERP(BgL_yz00_3178))
							{	/* Ieee/fixnum.scm 1195 */
								BgL_auxz00_5697 = BgL_yz00_3178;
							}
						else
							{
								obj_t BgL_auxz00_5700;

								BgL_auxz00_5700 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 54299)),
									BGl_string2412z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3178);
								FAILURE(BgL_auxz00_5700, BFALSE, BFALSE);
							}
						BgL_auxz00_5696 = (long) CINT(BgL_auxz00_5697);
					}
					{	/* Ieee/fixnum.scm 1195 */
						obj_t BgL_auxz00_5688;

						if (INTEGERP(BgL_xz00_3177))
							{	/* Ieee/fixnum.scm 1195 */
								BgL_auxz00_5688 = BgL_xz00_3177;
							}
						else
							{
								obj_t BgL_auxz00_5691;

								BgL_auxz00_5691 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 54299)),
									BGl_string2412z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3177);
								FAILURE(BgL_auxz00_5691, BFALSE, BFALSE);
							}
						BgL_auxz00_5687 = (long) CINT(BgL_auxz00_5688);
					}
					BgL_auxz00_5686 =
						BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5687,
						BgL_auxz00_5696);
				}
				return BINT(BgL_auxz00_5686);
			}
		}
	}



/* moduloelong */
	BGL_EXPORTED_DEF long BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_156, long BgL_yz00_157)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1205 */
			{	/* Ieee/fixnum.scm 1206 */
				long BgL_rz00_723;

				BgL_rz00_723 = (BgL_xz00_156 % BgL_yz00_157);
				if ((BgL_rz00_723 == ((long) 0)))
					{	/* Ieee/fixnum.scm 1207 */
						return BgL_rz00_723;
					}
				else
					{	/* Ieee/fixnum.scm 1207 */
						if ((BgL_yz00_157 > ((long) 0)))
							{	/* Ieee/fixnum.scm 1209 */
								if ((BgL_rz00_723 > ((long) 0)))
									{	/* Ieee/fixnum.scm 1210 */
										return BgL_rz00_723;
									}
								else
									{	/* Ieee/fixnum.scm 1210 */
										return (BgL_yz00_157 + BgL_rz00_723);
									}
							}
						else
							{	/* Ieee/fixnum.scm 1209 */
								if ((BgL_rz00_723 < ((long) 0)))
									{	/* Ieee/fixnum.scm 1211 */
										return BgL_rz00_723;
									}
								else
									{	/* Ieee/fixnum.scm 1211 */
										return (BgL_yz00_157 + BgL_rz00_723);
									}
							}
					}
			}
		}
	}



/* _moduloelong */
	obj_t BGl__moduloelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3179,
		obj_t BgL_xz00_3180, obj_t BgL_yz00_3181)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1205 */
			{	/* Ieee/fixnum.scm 1206 */
				long BgL_auxz00_5718;

				{	/* Ieee/fixnum.scm 1206 */
					long BgL_auxz00_5728;

					long BgL_auxz00_5719;

					{	/* Ieee/fixnum.scm 1206 */
						obj_t BgL_auxz00_5729;

						if (ELONGP(BgL_yz00_3181))
							{	/* Ieee/fixnum.scm 1206 */
								BgL_auxz00_5729 = BgL_yz00_3181;
							}
						else
							{
								obj_t BgL_auxz00_5732;

								BgL_auxz00_5732 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 54703)),
									BGl_string2413z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3181);
								FAILURE(BgL_auxz00_5732, BFALSE, BFALSE);
							}
						BgL_auxz00_5728 = BELONG_TO_LONG(BgL_auxz00_5729);
					}
					{	/* Ieee/fixnum.scm 1206 */
						obj_t BgL_auxz00_5720;

						if (ELONGP(BgL_xz00_3180))
							{	/* Ieee/fixnum.scm 1206 */
								BgL_auxz00_5720 = BgL_xz00_3180;
							}
						else
							{
								obj_t BgL_auxz00_5723;

								BgL_auxz00_5723 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 54703)),
									BGl_string2413z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3180);
								FAILURE(BgL_auxz00_5723, BFALSE, BFALSE);
							}
						BgL_auxz00_5719 = BELONG_TO_LONG(BgL_auxz00_5720);
					}
					BgL_auxz00_5718 =
						BGl_moduloelongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5719,
						BgL_auxz00_5728);
				}
				return make_belong(BgL_auxz00_5718);
			}
		}
	}



/* modulollong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T BgL_xz00_158,
		BGL_LONGLONG_T BgL_yz00_159)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1216 */
			{	/* Ieee/fixnum.scm 1217 */
				BGL_LONGLONG_T BgL_rz00_728;

				BgL_rz00_728 = (BgL_xz00_158 % BgL_yz00_159);
				if ((BgL_rz00_728 == ((BGL_LONGLONG_T) 0)))
					{	/* Ieee/fixnum.scm 1218 */
						return BgL_rz00_728;
					}
				else
					{	/* Ieee/fixnum.scm 1218 */
						if ((BgL_yz00_159 > ((BGL_LONGLONG_T) 0)))
							{	/* Ieee/fixnum.scm 1220 */
								if ((BgL_rz00_728 > ((BGL_LONGLONG_T) 0)))
									{	/* Ieee/fixnum.scm 1221 */
										return BgL_rz00_728;
									}
								else
									{	/* Ieee/fixnum.scm 1221 */
										return (BgL_yz00_159 + BgL_rz00_728);
									}
							}
						else
							{	/* Ieee/fixnum.scm 1220 */
								if ((BgL_rz00_728 < ((BGL_LONGLONG_T) 0)))
									{	/* Ieee/fixnum.scm 1222 */
										return BgL_rz00_728;
									}
								else
									{	/* Ieee/fixnum.scm 1222 */
										return (BgL_yz00_159 + BgL_rz00_728);
									}
							}
					}
			}
		}
	}



/* _modulollong */
	obj_t BGl__modulollongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3182,
		obj_t BgL_xz00_3183, obj_t BgL_yz00_3184)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1216 */
			{	/* Ieee/fixnum.scm 1217 */
				BGL_LONGLONG_T BgL_auxz00_5750;

				{	/* Ieee/fixnum.scm 1217 */
					BGL_LONGLONG_T BgL_auxz00_5760;

					BGL_LONGLONG_T BgL_auxz00_5751;

					{	/* Ieee/fixnum.scm 1217 */
						obj_t BgL_auxz00_5761;

						if (LLONGP(BgL_yz00_3184))
							{	/* Ieee/fixnum.scm 1217 */
								BgL_auxz00_5761 = BgL_yz00_3184;
							}
						else
							{
								obj_t BgL_auxz00_5764;

								BgL_auxz00_5764 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 55128)),
									BGl_string2414z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3184);
								FAILURE(BgL_auxz00_5764, BFALSE, BFALSE);
							}
						BgL_auxz00_5760 = BLLONG_TO_LLONG(BgL_auxz00_5761);
					}
					{	/* Ieee/fixnum.scm 1217 */
						obj_t BgL_auxz00_5752;

						if (LLONGP(BgL_xz00_3183))
							{	/* Ieee/fixnum.scm 1217 */
								BgL_auxz00_5752 = BgL_xz00_3183;
							}
						else
							{
								obj_t BgL_auxz00_5755;

								BgL_auxz00_5755 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 55128)),
									BGl_string2414z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3183);
								FAILURE(BgL_auxz00_5755, BFALSE, BFALSE);
							}
						BgL_auxz00_5751 = BLLONG_TO_LLONG(BgL_auxz00_5752);
					}
					BgL_auxz00_5750 =
						BGl_modulollongz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5751,
						BgL_auxz00_5760);
				}
				return make_bllong(BgL_auxz00_5750);
			}
		}
	}



/* modulobx */
	BGL_EXPORTED_DEF obj_t BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_160, obj_t BgL_yz00_161)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1227 */
			{	/* Ieee/fixnum.scm 1228 */
				obj_t BgL_rz00_733;

				BgL_rz00_733 = bgl_bignum_remainder(BgL_xz00_160, BgL_yz00_161);
				if (BXZERO(BgL_rz00_733))
					{	/* Ieee/fixnum.scm 1229 */
						return BgL_rz00_733;
					}
				else
					{	/* Ieee/fixnum.scm 1229 */
						if (BXPOSITIVE(BgL_yz00_161))
							{	/* Ieee/fixnum.scm 1231 */
								if (BXPOSITIVE(BgL_rz00_733))
									{	/* Ieee/fixnum.scm 1232 */
										return BgL_rz00_733;
									}
								else
									{	/* Ieee/fixnum.scm 1232 */
										return bgl_bignum_add(BgL_yz00_161, BgL_rz00_733);
									}
							}
						else
							{	/* Ieee/fixnum.scm 1231 */
								if (BXNEGATIVE(BgL_rz00_733))
									{	/* Ieee/fixnum.scm 1233 */
										return BgL_rz00_733;
									}
								else
									{	/* Ieee/fixnum.scm 1233 */
										return bgl_bignum_add(BgL_yz00_161, BgL_rz00_733);
									}
							}
					}
			}
		}
	}



/* _modulobx */
	obj_t BGl__modulobxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3185,
		obj_t BgL_xz00_3186, obj_t BgL_yz00_3187)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1227 */
			{	/* Ieee/fixnum.scm 1228 */
				obj_t BgL_auxz00_5789;

				obj_t BgL_auxz00_5782;

				if (BIGNUMP(BgL_yz00_3187))
					{	/* Ieee/fixnum.scm 1228 */
						BgL_auxz00_5789 = BgL_yz00_3187;
					}
				else
					{
						obj_t BgL_auxz00_5792;

						BgL_auxz00_5792 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 55551)),
							BGl_string2415z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3187);
						FAILURE(BgL_auxz00_5792, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_3186))
					{	/* Ieee/fixnum.scm 1228 */
						BgL_auxz00_5782 = BgL_xz00_3186;
					}
				else
					{
						obj_t BgL_auxz00_5785;

						BgL_auxz00_5785 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 55551)),
							BGl_string2415z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3186);
						FAILURE(BgL_auxz00_5785, BFALSE, BFALSE);
					}
				return
					BGl_modulobxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_5782,
					BgL_auxz00_5789);
			}
		}
	}



/* gcdfx */
	BGL_EXPORTED_DEF long BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_162)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1262 */
			if (NULLP(BgL_xz00_162))
				{	/* Ieee/fixnum.scm 1263 */
					return ((long) 0);
				}
			else
				{	/* Ieee/fixnum.scm 1263 */
					if (NULLP(CDR(BgL_xz00_162)))
						{	/* Ieee/fixnum.scm 1263 */
							long BgL_nz00_1779;

							{	/* Ieee/fixnum.scm 1263 */
								obj_t BgL_pairz00_1778;

								BgL_pairz00_1778 = BgL_xz00_162;
								BgL_nz00_1779 = (long) CINT(CAR(BgL_pairz00_1778));
							}
							if ((BgL_nz00_1779 < ((long) 0)))
								{	/* Ieee/fixnum.scm 1263 */
									return NEG(BgL_nz00_1779);
								}
							else
								{	/* Ieee/fixnum.scm 1263 */
									return BgL_nz00_1779;
								}
						}
					else
						{
							long BgL_mz00_758;

							long BgL_nz00_759;

							{	/* Ieee/fixnum.scm 1263 */
								long BgL_g1106z00_742;

								obj_t BgL_g1107z00_743;

								{	/* Ieee/fixnum.scm 1263 */
									long BgL_arg1452z00_754;

									long BgL_arg1453z00_755;

									{	/* Ieee/fixnum.scm 1263 */
										long BgL_nz00_1786;

										{	/* Ieee/fixnum.scm 1263 */
											obj_t BgL_pairz00_1785;

											BgL_pairz00_1785 = BgL_xz00_162;
											BgL_nz00_1786 = (long) CINT(CAR(BgL_pairz00_1785));
										}
										if ((BgL_nz00_1786 < ((long) 0)))
											{	/* Ieee/fixnum.scm 1263 */
												BgL_arg1452z00_754 = NEG(BgL_nz00_1786);
											}
										else
											{	/* Ieee/fixnum.scm 1263 */
												BgL_arg1452z00_754 = BgL_nz00_1786;
											}
									}
									{	/* Ieee/fixnum.scm 1263 */
										long BgL_nz00_1796;

										{	/* Ieee/fixnum.scm 1263 */
											obj_t BgL_pairz00_1792;

											BgL_pairz00_1792 = BgL_xz00_162;
											{	/* Ieee/fixnum.scm 1263 */
												obj_t BgL_pairz00_1795;

												BgL_pairz00_1795 = CDR(BgL_pairz00_1792);
												BgL_nz00_1796 = (long) CINT(CAR(BgL_pairz00_1795));
										}}
										if ((BgL_nz00_1796 < ((long) 0)))
											{	/* Ieee/fixnum.scm 1263 */
												BgL_arg1453z00_755 = NEG(BgL_nz00_1796);
											}
										else
											{	/* Ieee/fixnum.scm 1263 */
												BgL_arg1453z00_755 = BgL_nz00_1796;
											}
									}
									{
										long BgL_mz00_1803;

										long BgL_nz00_1804;

										BgL_mz00_1803 = BgL_arg1452z00_754;
										BgL_nz00_1804 = BgL_arg1453z00_755;
									BgL_gcd2z00_1802:
										if ((BgL_nz00_1804 == ((long) 0)))
											{	/* Ieee/fixnum.scm 1263 */
												BgL_g1106z00_742 = BgL_mz00_1803;
											}
										else
											{	/* Ieee/fixnum.scm 1263 */
												long BgL_rz00_1809;

												BgL_rz00_1809 = (BgL_mz00_1803 % BgL_nz00_1804);
												if ((BgL_rz00_1809 == ((long) 0)))
													{	/* Ieee/fixnum.scm 1263 */
														BgL_g1106z00_742 = BgL_nz00_1804;
													}
												else
													{
														long BgL_nz00_5824;

														long BgL_mz00_5823;

														BgL_mz00_5823 = BgL_nz00_1804;
														BgL_nz00_5824 = BgL_rz00_1809;
														BgL_nz00_1804 = BgL_nz00_5824;
														BgL_mz00_1803 = BgL_mz00_5823;
														goto BgL_gcd2z00_1802;
													}
											}
									}
								}
								{	/* Ieee/fixnum.scm 1263 */
									obj_t BgL_pairz00_1818;

									BgL_pairz00_1818 = BgL_xz00_162;
									BgL_g1107z00_743 = CDR(CDR(BgL_pairz00_1818));
								}
								{
									long BgL_resultz00_1823;

									obj_t BgL_leftz00_1824;

									BgL_resultz00_1823 = BgL_g1106z00_742;
									BgL_leftz00_1824 = BgL_g1107z00_743;
								BgL_loopz00_1822:
									if (PAIRP(BgL_leftz00_1824))
										{
											obj_t BgL_leftz00_5847;

											long BgL_resultz00_5829;

											BgL_mz00_758 = BgL_resultz00_1823;
											{	/* Ieee/fixnum.scm 1263 */
												long BgL_nz00_1837;

												BgL_nz00_1837 = (long) CINT(CAR(BgL_leftz00_1824));
												if ((BgL_nz00_1837 < ((long) 0)))
													{	/* Ieee/fixnum.scm 1263 */
														BgL_nz00_759 = NEG(BgL_nz00_1837);
													}
												else
													{	/* Ieee/fixnum.scm 1263 */
														BgL_nz00_759 = BgL_nz00_1837;
													}
											}
										BgL_zc3anonymousza31456ze3z83_760:
											if ((BgL_nz00_759 == ((long) 0)))
												{	/* Ieee/fixnum.scm 1263 */
													BgL_resultz00_5829 = BgL_mz00_758;
												}
											else
												{	/* Ieee/fixnum.scm 1263 */
													long BgL_rz00_1891;

													BgL_rz00_1891 = (BgL_mz00_758 % BgL_nz00_759);
													if ((BgL_rz00_1891 == ((long) 0)))
														{	/* Ieee/fixnum.scm 1263 */
															BgL_resultz00_5829 = BgL_nz00_759;
														}
													else
														{	/* Ieee/fixnum.scm 1263 */
															if ((BgL_rz00_1891 == ((long) 0)))
																{	/* Ieee/fixnum.scm 1263 */
																	BgL_resultz00_5829 = BgL_nz00_759;
																}
															else
																{	/* Ieee/fixnum.scm 1263 */
																	long BgL_rz00_1903;

																	BgL_rz00_1903 =
																		(BgL_nz00_759 % BgL_rz00_1891);
																	if ((BgL_rz00_1903 == ((long) 0)))
																		{	/* Ieee/fixnum.scm 1263 */
																			BgL_resultz00_5829 = BgL_rz00_1891;
																		}
																	else
																		{
																			long BgL_nz00_5841;

																			long BgL_mz00_5840;

																			BgL_mz00_5840 = BgL_rz00_1891;
																			BgL_nz00_5841 = BgL_rz00_1903;
																			BgL_nz00_759 = BgL_nz00_5841;
																			BgL_mz00_758 = BgL_mz00_5840;
																			goto BgL_zc3anonymousza31456ze3z83_760;
																		}
																}
														}
												}
											BgL_leftz00_5847 = CDR(BgL_leftz00_1824);
											BgL_leftz00_1824 = BgL_leftz00_5847;
											BgL_resultz00_1823 = BgL_resultz00_5829;
											goto BgL_loopz00_1822;
										}
									else
										{	/* Ieee/fixnum.scm 1263 */
											return BgL_resultz00_1823;
										}
								}
							}
						}
				}
		}
	}



/* _gcdfx */
	obj_t BGl__gcdfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3188,
		obj_t BgL_xz00_3189)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1262 */
			return BINT(BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3189));
		}
	}



/* gcdelong */
	BGL_EXPORTED_DEF long BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_163)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1268 */
			if (NULLP(BgL_xz00_163))
				{	/* Ieee/fixnum.scm 1269 */
					return ((long) 0);
				}
			else
				{	/* Ieee/fixnum.scm 1269 */
					if (NULLP(CDR(BgL_xz00_163)))
						{	/* Ieee/fixnum.scm 1269 */
							long BgL_nz00_1916;

							{	/* Ieee/fixnum.scm 1269 */
								obj_t BgL_pairz00_1915;

								BgL_pairz00_1915 = BgL_xz00_163;
								{	/* Ieee/fixnum.scm 1269 */
									obj_t BgL_auxz00_5856;

									BgL_auxz00_5856 = CAR(BgL_pairz00_1915);
									BgL_nz00_1916 = BELONG_TO_LONG(BgL_auxz00_5856);
							}}
							if ((BgL_nz00_1916 < ((long) 0)))
								{	/* Ieee/fixnum.scm 1269 */
									return NEG(BgL_nz00_1916);
								}
							else
								{	/* Ieee/fixnum.scm 1269 */
									return BgL_nz00_1916;
								}
						}
					else
						{
							long BgL_mz00_786;

							long BgL_nz00_787;

							{	/* Ieee/fixnum.scm 1269 */
								long BgL_g1108z00_770;

								obj_t BgL_g1109z00_771;

								{	/* Ieee/fixnum.scm 1269 */
									long BgL_arg1469z00_782;

									long BgL_arg1470z00_783;

									{	/* Ieee/fixnum.scm 1269 */
										long BgL_nz00_1923;

										{	/* Ieee/fixnum.scm 1269 */
											obj_t BgL_pairz00_1922;

											BgL_pairz00_1922 = BgL_xz00_163;
											{	/* Ieee/fixnum.scm 1269 */
												obj_t BgL_auxz00_5862;

												BgL_auxz00_5862 = CAR(BgL_pairz00_1922);
												BgL_nz00_1923 = BELONG_TO_LONG(BgL_auxz00_5862);
										}}
										if ((BgL_nz00_1923 < ((long) 0)))
											{	/* Ieee/fixnum.scm 1269 */
												BgL_arg1469z00_782 = NEG(BgL_nz00_1923);
											}
										else
											{	/* Ieee/fixnum.scm 1269 */
												BgL_arg1469z00_782 = BgL_nz00_1923;
											}
									}
									{	/* Ieee/fixnum.scm 1269 */
										long BgL_nz00_1933;

										{	/* Ieee/fixnum.scm 1269 */
											obj_t BgL_pairz00_1929;

											BgL_pairz00_1929 = BgL_xz00_163;
											{	/* Ieee/fixnum.scm 1269 */
												obj_t BgL_pairz00_1932;

												BgL_pairz00_1932 = CDR(BgL_pairz00_1929);
												{	/* Ieee/fixnum.scm 1269 */
													obj_t BgL_auxz00_5869;

													BgL_auxz00_5869 = CAR(BgL_pairz00_1932);
													BgL_nz00_1933 = BELONG_TO_LONG(BgL_auxz00_5869);
										}}}
										if ((BgL_nz00_1933 < ((long) 0)))
											{	/* Ieee/fixnum.scm 1269 */
												BgL_arg1470z00_783 = NEG(BgL_nz00_1933);
											}
										else
											{	/* Ieee/fixnum.scm 1269 */
												BgL_arg1470z00_783 = BgL_nz00_1933;
											}
									}
									{
										long BgL_mz00_1940;

										long BgL_nz00_1941;

										BgL_mz00_1940 = BgL_arg1469z00_782;
										BgL_nz00_1941 = BgL_arg1470z00_783;
									BgL_gcd2z00_1939:
										if ((BgL_nz00_1941 == ((long) 0)))
											{	/* Ieee/fixnum.scm 1269 */
												BgL_g1108z00_770 = BgL_mz00_1940;
											}
										else
											{	/* Ieee/fixnum.scm 1269 */
												long BgL_rz00_1946;

												BgL_rz00_1946 = (BgL_mz00_1940 % BgL_nz00_1941);
												if ((BgL_rz00_1946 == ((long) 0)))
													{	/* Ieee/fixnum.scm 1269 */
														BgL_g1108z00_770 = BgL_nz00_1941;
													}
												else
													{
														long BgL_nz00_5881;

														long BgL_mz00_5880;

														BgL_mz00_5880 = BgL_nz00_1941;
														BgL_nz00_5881 = BgL_rz00_1946;
														BgL_nz00_1941 = BgL_nz00_5881;
														BgL_mz00_1940 = BgL_mz00_5880;
														goto BgL_gcd2z00_1939;
													}
											}
									}
								}
								{	/* Ieee/fixnum.scm 1269 */
									obj_t BgL_pairz00_1955;

									BgL_pairz00_1955 = BgL_xz00_163;
									BgL_g1109z00_771 = CDR(CDR(BgL_pairz00_1955));
								}
								{
									long BgL_resultz00_1960;

									obj_t BgL_leftz00_1961;

									BgL_resultz00_1960 = BgL_g1108z00_770;
									BgL_leftz00_1961 = BgL_g1109z00_771;
								BgL_loopz00_1959:
									if (PAIRP(BgL_leftz00_1961))
										{
											obj_t BgL_leftz00_5905;

											long BgL_resultz00_5886;

											BgL_mz00_786 = BgL_resultz00_1960;
											{	/* Ieee/fixnum.scm 1269 */
												long BgL_nz00_1974;

												{	/* Ieee/fixnum.scm 1269 */
													obj_t BgL_auxz00_5899;

													BgL_auxz00_5899 = CAR(BgL_leftz00_1961);
													BgL_nz00_1974 = BELONG_TO_LONG(BgL_auxz00_5899);
												}
												if ((BgL_nz00_1974 < ((long) 0)))
													{	/* Ieee/fixnum.scm 1269 */
														BgL_nz00_787 = NEG(BgL_nz00_1974);
													}
												else
													{	/* Ieee/fixnum.scm 1269 */
														BgL_nz00_787 = BgL_nz00_1974;
													}
											}
										BgL_zc3anonymousza31473ze3z83_788:
											if ((BgL_nz00_787 == ((long) 0)))
												{	/* Ieee/fixnum.scm 1269 */
													BgL_resultz00_5886 = BgL_mz00_786;
												}
											else
												{	/* Ieee/fixnum.scm 1269 */
													long BgL_rz00_2028;

													BgL_rz00_2028 = (BgL_mz00_786 % BgL_nz00_787);
													if ((BgL_rz00_2028 == ((long) 0)))
														{	/* Ieee/fixnum.scm 1269 */
															BgL_resultz00_5886 = BgL_nz00_787;
														}
													else
														{	/* Ieee/fixnum.scm 1269 */
															if ((BgL_rz00_2028 == ((long) 0)))
																{	/* Ieee/fixnum.scm 1269 */
																	BgL_resultz00_5886 = BgL_nz00_787;
																}
															else
																{	/* Ieee/fixnum.scm 1269 */
																	long BgL_rz00_2040;

																	BgL_rz00_2040 =
																		(BgL_nz00_787 % BgL_rz00_2028);
																	if ((BgL_rz00_2040 == ((long) 0)))
																		{	/* Ieee/fixnum.scm 1269 */
																			BgL_resultz00_5886 = BgL_rz00_2028;
																		}
																	else
																		{
																			long BgL_nz00_5898;

																			long BgL_mz00_5897;

																			BgL_mz00_5897 = BgL_rz00_2028;
																			BgL_nz00_5898 = BgL_rz00_2040;
																			BgL_nz00_787 = BgL_nz00_5898;
																			BgL_mz00_786 = BgL_mz00_5897;
																			goto BgL_zc3anonymousza31473ze3z83_788;
																		}
																}
														}
												}
											BgL_leftz00_5905 = CDR(BgL_leftz00_1961);
											BgL_leftz00_1961 = BgL_leftz00_5905;
											BgL_resultz00_1960 = BgL_resultz00_5886;
											goto BgL_loopz00_1959;
										}
									else
										{	/* Ieee/fixnum.scm 1269 */
											return BgL_resultz00_1960;
										}
								}
							}
						}
				}
		}
	}



/* _gcdelong */
	obj_t BGl__gcdelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3190,
		obj_t BgL_xz00_3191)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1268 */
			{	/* Ieee/fixnum.scm 1269 */
				long BgL_auxz00_5907;

				BgL_auxz00_5907 =
					BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3191);
				return make_belong(BgL_auxz00_5907);
			}
		}
	}



/* gcdllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_164)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1274 */
			if (NULLP(BgL_xz00_164))
				{	/* Ieee/fixnum.scm 1275 */
					return ((BGL_LONGLONG_T) 0);
				}
			else
				{	/* Ieee/fixnum.scm 1275 */
					if (NULLP(CDR(BgL_xz00_164)))
						{	/* Ieee/fixnum.scm 1275 */
							BGL_LONGLONG_T BgL_nz00_2053;

							{	/* Ieee/fixnum.scm 1275 */
								obj_t BgL_pairz00_2052;

								BgL_pairz00_2052 = BgL_xz00_164;
								BgL_nz00_2053 = BLLONG_TO_LLONG(CAR(BgL_pairz00_2052));
							}
							if ((BgL_nz00_2053 < ((BGL_LONGLONG_T) 0)))
								{	/* Ieee/fixnum.scm 1275 */
									return NEG(BgL_nz00_2053);
								}
							else
								{	/* Ieee/fixnum.scm 1275 */
									return BgL_nz00_2053;
								}
						}
					else
						{
							BGL_LONGLONG_T BgL_mz00_814;

							BGL_LONGLONG_T BgL_nz00_815;

							{	/* Ieee/fixnum.scm 1275 */
								BGL_LONGLONG_T BgL_g1110z00_798;

								obj_t BgL_g1111z00_799;

								{	/* Ieee/fixnum.scm 1275 */
									BGL_LONGLONG_T BgL_arg1486z00_810;

									BGL_LONGLONG_T BgL_arg1487z00_811;

									{	/* Ieee/fixnum.scm 1275 */
										BGL_LONGLONG_T BgL_nz00_2060;

										{	/* Ieee/fixnum.scm 1275 */
											obj_t BgL_pairz00_2059;

											BgL_pairz00_2059 = BgL_xz00_164;
											BgL_nz00_2060 = BLLONG_TO_LLONG(CAR(BgL_pairz00_2059));
										}
										if ((BgL_nz00_2060 < ((BGL_LONGLONG_T) 0)))
											{	/* Ieee/fixnum.scm 1275 */
												BgL_arg1486z00_810 = NEG(BgL_nz00_2060);
											}
										else
											{	/* Ieee/fixnum.scm 1275 */
												BgL_arg1486z00_810 = BgL_nz00_2060;
											}
									}
									{	/* Ieee/fixnum.scm 1275 */
										BGL_LONGLONG_T BgL_nz00_2070;

										{	/* Ieee/fixnum.scm 1275 */
											obj_t BgL_pairz00_2066;

											BgL_pairz00_2066 = BgL_xz00_164;
											{	/* Ieee/fixnum.scm 1275 */
												obj_t BgL_pairz00_2069;

												BgL_pairz00_2069 = CDR(BgL_pairz00_2066);
												BgL_nz00_2070 = BLLONG_TO_LLONG(CAR(BgL_pairz00_2069));
											}
										}
										if ((BgL_nz00_2070 < ((BGL_LONGLONG_T) 0)))
											{	/* Ieee/fixnum.scm 1275 */
												BgL_arg1487z00_811 = NEG(BgL_nz00_2070);
											}
										else
											{	/* Ieee/fixnum.scm 1275 */
												BgL_arg1487z00_811 = BgL_nz00_2070;
											}
									}
									{
										BGL_LONGLONG_T BgL_mz00_2077;

										BGL_LONGLONG_T BgL_nz00_2078;

										BgL_mz00_2077 = BgL_arg1486z00_810;
										BgL_nz00_2078 = BgL_arg1487z00_811;
									BgL_gcd2z00_2076:
										if ((BgL_nz00_2078 == ((BGL_LONGLONG_T) 0)))
											{	/* Ieee/fixnum.scm 1275 */
												BgL_g1110z00_798 = BgL_mz00_2077;
											}
										else
											{	/* Ieee/fixnum.scm 1275 */
												BGL_LONGLONG_T BgL_rz00_2083;

												BgL_rz00_2083 = (BgL_mz00_2077 % BgL_nz00_2078);
												if ((BgL_rz00_2083 == ((BGL_LONGLONG_T) 0)))
													{	/* Ieee/fixnum.scm 1275 */
														BgL_g1110z00_798 = BgL_nz00_2078;
													}
												else
													{
														BGL_LONGLONG_T BgL_nz00_5937;

														BGL_LONGLONG_T BgL_mz00_5936;

														BgL_mz00_5936 = BgL_nz00_2078;
														BgL_nz00_5937 = BgL_rz00_2083;
														BgL_nz00_2078 = BgL_nz00_5937;
														BgL_mz00_2077 = BgL_mz00_5936;
														goto BgL_gcd2z00_2076;
													}
											}
									}
								}
								{	/* Ieee/fixnum.scm 1275 */
									obj_t BgL_pairz00_2092;

									BgL_pairz00_2092 = BgL_xz00_164;
									BgL_g1111z00_799 = CDR(CDR(BgL_pairz00_2092));
								}
								{
									BGL_LONGLONG_T BgL_resultz00_2097;

									obj_t BgL_leftz00_2098;

									BgL_resultz00_2097 = BgL_g1110z00_798;
									BgL_leftz00_2098 = BgL_g1111z00_799;
								BgL_loopz00_2096:
									if (PAIRP(BgL_leftz00_2098))
										{
											obj_t BgL_leftz00_5960;

											BGL_LONGLONG_T BgL_resultz00_5942;

											BgL_mz00_814 = BgL_resultz00_2097;
											{	/* Ieee/fixnum.scm 1275 */
												BGL_LONGLONG_T BgL_nz00_2111;

												BgL_nz00_2111 = BLLONG_TO_LLONG(CAR(BgL_leftz00_2098));
												if ((BgL_nz00_2111 < ((BGL_LONGLONG_T) 0)))
													{	/* Ieee/fixnum.scm 1275 */
														BgL_nz00_815 = NEG(BgL_nz00_2111);
													}
												else
													{	/* Ieee/fixnum.scm 1275 */
														BgL_nz00_815 = BgL_nz00_2111;
													}
											}
										BgL_zc3anonymousza31490ze3z83_816:
											if ((BgL_nz00_815 == ((BGL_LONGLONG_T) 0)))
												{	/* Ieee/fixnum.scm 1275 */
													BgL_resultz00_5942 = BgL_mz00_814;
												}
											else
												{	/* Ieee/fixnum.scm 1275 */
													BGL_LONGLONG_T BgL_rz00_2165;

													BgL_rz00_2165 = (BgL_mz00_814 % BgL_nz00_815);
													if ((BgL_rz00_2165 == ((BGL_LONGLONG_T) 0)))
														{	/* Ieee/fixnum.scm 1275 */
															BgL_resultz00_5942 = BgL_nz00_815;
														}
													else
														{	/* Ieee/fixnum.scm 1275 */
															if ((BgL_rz00_2165 == ((BGL_LONGLONG_T) 0)))
																{	/* Ieee/fixnum.scm 1275 */
																	BgL_resultz00_5942 = BgL_nz00_815;
																}
															else
																{	/* Ieee/fixnum.scm 1275 */
																	BGL_LONGLONG_T BgL_rz00_2177;

																	BgL_rz00_2177 =
																		(BgL_nz00_815 % BgL_rz00_2165);
																	if ((BgL_rz00_2177 == ((BGL_LONGLONG_T) 0)))
																		{	/* Ieee/fixnum.scm 1275 */
																			BgL_resultz00_5942 = BgL_rz00_2165;
																		}
																	else
																		{
																			BGL_LONGLONG_T BgL_nz00_5954;

																			BGL_LONGLONG_T BgL_mz00_5953;

																			BgL_mz00_5953 = BgL_rz00_2165;
																			BgL_nz00_5954 = BgL_rz00_2177;
																			BgL_nz00_815 = BgL_nz00_5954;
																			BgL_mz00_814 = BgL_mz00_5953;
																			goto BgL_zc3anonymousza31490ze3z83_816;
																		}
																}
														}
												}
											BgL_leftz00_5960 = CDR(BgL_leftz00_2098);
											BgL_leftz00_2098 = BgL_leftz00_5960;
											BgL_resultz00_2097 = BgL_resultz00_5942;
											goto BgL_loopz00_2096;
										}
									else
										{	/* Ieee/fixnum.scm 1275 */
											return BgL_resultz00_2097;
										}
								}
							}
						}
				}
		}
	}



/* _gcdllong */
	obj_t BGl__gcdllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3192,
		obj_t BgL_xz00_3193)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1274 */
			return
				make_bllong(BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3193));
		}
	}



/* gcdbx */
	BGL_EXPORTED_DEF obj_t BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_165)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1280 */
			if (NULLP(BgL_xz00_165))
				{	/* Ieee/fixnum.scm 1281 */
					return bgl_long_to_bignum(((long) 0));
				}
			else
				{	/* Ieee/fixnum.scm 1281 */
					if (NULLP(CDR(BgL_xz00_165)))
						{	/* Ieee/fixnum.scm 1282 */
							return bgl_bignum_abs(CAR(BgL_xz00_165));
						}
					else
						{
							obj_t BgL_resultz00_2204;

							obj_t BgL_leftz00_2205;

							{	/* Ieee/fixnum.scm 1284 */
								obj_t BgL_auxz00_5980;

								{	/* Ieee/fixnum.scm 1284 */
									obj_t BgL_nz00_2198;

									{	/* Ieee/fixnum.scm 1284 */
										obj_t BgL_pairz00_2194;

										BgL_pairz00_2194 = BgL_xz00_165;
										BgL_nz00_2198 = CAR(CDR(BgL_pairz00_2194));
									}
									BgL_auxz00_5980 = bgl_bignum_abs(BgL_nz00_2198);
								}
								BgL_resultz00_2204 =
									bgl_bignum_gcd(bgl_bignum_abs(CAR(BgL_xz00_165)),
									BgL_auxz00_5980);
							}
							{	/* Ieee/fixnum.scm 1285 */
								obj_t BgL_pairz00_2199;

								BgL_pairz00_2199 = BgL_xz00_165;
								BgL_leftz00_2205 = CDR(CDR(BgL_pairz00_2199));
							}
						BgL_loopz00_2203:
							if (PAIRP(BgL_leftz00_2205))
								{
									obj_t BgL_leftz00_5978;

									obj_t BgL_resultz00_5974;

									BgL_resultz00_5974 =
										bgl_bignum_gcd(BgL_resultz00_2204,
										bgl_bignum_abs(CAR(BgL_leftz00_2205)));
									BgL_leftz00_5978 = CDR(BgL_leftz00_2205);
									BgL_leftz00_2205 = BgL_leftz00_5978;
									BgL_resultz00_2204 = BgL_resultz00_5974;
									goto BgL_loopz00_2203;
								}
							else
								{	/* Ieee/fixnum.scm 1284 */
									return BgL_resultz00_2204;
								}
						}
				}
		}
	}



/* _gcdbx */
	obj_t BGl__gcdbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3194,
		obj_t BgL_xz00_3195)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1280 */
			return BGl_gcdbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3195);
		}
	}



/* gcd */
	BGL_EXPORTED_DEF obj_t BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_166)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1293 */
			if (NULLP(BgL_xz00_166))
				{	/* Ieee/fixnum.scm 1294 */
					return BINT(((long) 0));
				}
			else
				{	/* Ieee/fixnum.scm 1294 */
					if (NULLP(CDR(BgL_xz00_166)))
						{	/* Ieee/fixnum.scm 1294 */
							return BGl_absz00zz__r4_numbers_6_5z00(CAR(BgL_xz00_166));
						}
					else
						{
							obj_t BgL_mz00_862;

							obj_t BgL_nz00_863;

							{	/* Ieee/fixnum.scm 1294 */
								obj_t BgL_g1114z00_846;

								obj_t BgL_g1115z00_847;

								{	/* Ieee/fixnum.scm 1294 */
									obj_t BgL_arg1517z00_858;

									obj_t BgL_arg1518z00_859;

									BgL_arg1517z00_858 =
										BGl_absz00zz__r4_numbers_6_5z00(CAR(BgL_xz00_166));
									{	/* Ieee/fixnum.scm 1294 */
										obj_t BgL_auxz00_6000;

										{	/* Ieee/fixnum.scm 1294 */
											obj_t BgL_pairz00_2245;

											BgL_pairz00_2245 = BgL_xz00_166;
											BgL_auxz00_6000 = CAR(CDR(BgL_pairz00_2245));
										}
										BgL_arg1518z00_859 =
											BGl_absz00zz__r4_numbers_6_5z00(BgL_auxz00_6000);
									}
									{
										obj_t BgL_mz00_2250;

										obj_t BgL_nz00_2251;

										BgL_mz00_2250 = BgL_arg1517z00_858;
										BgL_nz00_2251 = BgL_arg1518z00_859;
									BgL_gcd2z00_2249:
										if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_nz00_2251))
											{	/* Ieee/fixnum.scm 1294 */
												BgL_g1114z00_846 = BgL_mz00_2250;
											}
										else
											{	/* Ieee/fixnum.scm 1294 */
												obj_t BgL_rz00_2256;

												BgL_rz00_2256 =
													BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
													(BgL_mz00_2250, BgL_nz00_2251);
												if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_rz00_2256,
														BINT(((long) 0))))
													{	/* Ieee/fixnum.scm 1294 */
														BgL_g1114z00_846 = BgL_nz00_2251;
													}
												else
													{
														obj_t BgL_nz00_6011;

														obj_t BgL_mz00_6010;

														BgL_mz00_6010 = BgL_nz00_2251;
														BgL_nz00_6011 = BgL_rz00_2256;
														BgL_nz00_2251 = BgL_nz00_6011;
														BgL_mz00_2250 = BgL_mz00_6010;
														goto BgL_gcd2z00_2249;
													}
											}
									}
								}
								{	/* Ieee/fixnum.scm 1294 */
									obj_t BgL_pairz00_2258;

									BgL_pairz00_2258 = BgL_xz00_166;
									BgL_g1115z00_847 = CDR(CDR(BgL_pairz00_2258));
								}
								{
									obj_t BgL_resultz00_2263;

									obj_t BgL_leftz00_2264;

									BgL_resultz00_2263 = BgL_g1114z00_846;
									BgL_leftz00_2264 = BgL_g1115z00_847;
								BgL_loopz00_2262:
									if (PAIRP(BgL_leftz00_2264))
										{
											obj_t BgL_leftz00_6033;

											obj_t BgL_resultz00_6016;

											BgL_mz00_862 = BgL_resultz00_2263;
											BgL_nz00_863 =
												BGl_absz00zz__r4_numbers_6_5z00(CAR(BgL_leftz00_2264));
										BgL_zc3anonymousza31521ze3z83_864:
											if (BGl_za7erozf3z54zz__r4_numbers_6_5z00(BgL_nz00_863))
												{	/* Ieee/fixnum.scm 1294 */
													BgL_resultz00_6016 = BgL_mz00_862;
												}
											else
												{	/* Ieee/fixnum.scm 1294 */
													obj_t BgL_rz00_2306;

													BgL_rz00_2306 =
														BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
														(BgL_mz00_862, BgL_nz00_863);
													if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_rz00_2306,
															BINT(((long) 0))))
														{	/* Ieee/fixnum.scm 1294 */
															BgL_resultz00_6016 = BgL_nz00_863;
														}
													else
														{	/* Ieee/fixnum.scm 1294 */
															if (BGl_za7erozf3z54zz__r4_numbers_6_5z00
																(BgL_rz00_2306))
																{	/* Ieee/fixnum.scm 1294 */
																	BgL_resultz00_6016 = BgL_nz00_863;
																}
															else
																{	/* Ieee/fixnum.scm 1294 */
																	obj_t BgL_rz00_2311;

																	BgL_rz00_2311 =
																		BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																		(BgL_nz00_863, BgL_rz00_2306);
																	if (BGl_2zd3zd3zz__r4_numbers_6_5z00
																		(BgL_rz00_2311, BINT(((long) 0))))
																		{	/* Ieee/fixnum.scm 1294 */
																			BgL_resultz00_6016 = BgL_rz00_2306;
																		}
																	else
																		{
																			obj_t BgL_nz00_6030;

																			obj_t BgL_mz00_6029;

																			BgL_mz00_6029 = BgL_rz00_2306;
																			BgL_nz00_6030 = BgL_rz00_2311;
																			BgL_nz00_863 = BgL_nz00_6030;
																			BgL_mz00_862 = BgL_mz00_6029;
																			goto BgL_zc3anonymousza31521ze3z83_864;
																		}
																}
														}
												}
											BgL_leftz00_6033 = CDR(BgL_leftz00_2264);
											BgL_leftz00_2264 = BgL_leftz00_6033;
											BgL_resultz00_2263 = BgL_resultz00_6016;
											goto BgL_loopz00_2262;
										}
									else
										{	/* Ieee/fixnum.scm 1294 */
											return BgL_resultz00_2263;
										}
								}
							}
						}
				}
		}
	}



/* _gcd */
	obj_t BGl__gcdz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3196,
		obj_t BgL_xz00_3197)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1293 */
			return BGl_gcdz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3197);
		}
	}



/* lcmfx */
	BGL_EXPORTED_DEF long BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_167)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1324 */
			if (NULLP(BgL_xz00_167))
				{	/* Ieee/fixnum.scm 1325 */
					return ((long) 1);
				}
			else
				{	/* Ieee/fixnum.scm 1325 */
					if (NULLP(CDR(BgL_xz00_167)))
						{	/* Ieee/fixnum.scm 1325 */
							long BgL_nz00_2317;

							{	/* Ieee/fixnum.scm 1325 */
								obj_t BgL_pairz00_2316;

								BgL_pairz00_2316 = BgL_xz00_167;
								BgL_nz00_2317 = (long) CINT(CAR(BgL_pairz00_2316));
							}
							if ((BgL_nz00_2317 < ((long) 0)))
								{	/* Ieee/fixnum.scm 1325 */
									return NEG(BgL_nz00_2317);
								}
							else
								{	/* Ieee/fixnum.scm 1325 */
									return BgL_nz00_2317;
								}
						}
					else
						{	/* Ieee/fixnum.scm 1325 */
							long BgL_g1119z00_874;

							obj_t BgL_g1120z00_875;

							{	/* Ieee/fixnum.scm 1325 */
								obj_t BgL_arg1533z00_885;

								obj_t BgL_arg1534z00_886;

								BgL_arg1533z00_885 = CAR(BgL_xz00_167);
								{	/* Ieee/fixnum.scm 1325 */
									obj_t BgL_pairz00_2324;

									BgL_pairz00_2324 = BgL_xz00_167;
									BgL_arg1534z00_886 = CAR(CDR(BgL_pairz00_2324));
								}
								BgL_g1119z00_874 =
									BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00
									(BgL_arg1533z00_885, BgL_arg1534z00_886);
							}
							{	/* Ieee/fixnum.scm 1325 */
								obj_t BgL_pairz00_2328;

								BgL_pairz00_2328 = BgL_xz00_167;
								BgL_g1120z00_875 = CDR(CDR(BgL_pairz00_2328));
							}
							{
								long BgL_resultz00_2333;

								obj_t BgL_leftz00_2334;

								BgL_resultz00_2333 = BgL_g1119z00_874;
								BgL_leftz00_2334 = BgL_g1120z00_875;
							BgL_loopz00_2332:
								if (PAIRP(BgL_leftz00_2334))
									{
										obj_t BgL_leftz00_6058;

										long BgL_resultz00_6054;

										BgL_resultz00_6054 =
											BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_resultz00_2333), CAR(BgL_leftz00_2334));
										BgL_leftz00_6058 = CDR(BgL_leftz00_2334);
										BgL_leftz00_2334 = BgL_leftz00_6058;
										BgL_resultz00_2333 = BgL_resultz00_6054;
										goto BgL_loopz00_2332;
									}
								else
									{	/* Ieee/fixnum.scm 1325 */
										return BgL_resultz00_2333;
									}
							}
						}
				}
		}
	}



/* lcm2''' */
	long BGl_lcm2z72z72z72z72zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_887,
		obj_t BgL_nz00_888)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1325 */
			{	/* Ieee/fixnum.scm 1325 */
				long BgL_mz00_890;

				long BgL_nz00_891;

				{	/* Ieee/fixnum.scm 1325 */
					long BgL_nz00_2362;

					BgL_nz00_2362 = (long) CINT(BgL_mz00_887);
					if ((BgL_nz00_2362 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1325 */
							BgL_mz00_890 = NEG(BgL_nz00_2362);
						}
					else
						{	/* Ieee/fixnum.scm 1325 */
							BgL_mz00_890 = BgL_nz00_2362;
						}
				}
				{	/* Ieee/fixnum.scm 1325 */
					long BgL_nz00_2368;

					BgL_nz00_2368 = (long) CINT(BgL_nz00_888);
					if ((BgL_nz00_2368 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1325 */
							BgL_nz00_891 = NEG(BgL_nz00_2368);
						}
					else
						{	/* Ieee/fixnum.scm 1325 */
							BgL_nz00_891 = BgL_nz00_2368;
						}
				}
				if ((BgL_mz00_890 == BgL_nz00_891))
					{	/* Ieee/fixnum.scm 1325 */
						return BgL_mz00_890;
					}
				else
					{	/* Ieee/fixnum.scm 1325 */
						bool_t BgL_testz00_6070;

						{	/* Ieee/fixnum.scm 1325 */
							long BgL_arg1545z00_901;

							BgL_arg1545z00_901 = (BgL_mz00_890 % BgL_nz00_891);
							BgL_testz00_6070 = (BgL_arg1545z00_901 == ((long) 0));
						}
						if (BgL_testz00_6070)
							{	/* Ieee/fixnum.scm 1325 */
								return BgL_mz00_890;
							}
						else
							{	/* Ieee/fixnum.scm 1325 */
								bool_t BgL_testz00_6073;

								{	/* Ieee/fixnum.scm 1325 */
									long BgL_arg1543z00_899;

									BgL_arg1543z00_899 = (BgL_nz00_891 % BgL_mz00_890);
									BgL_testz00_6073 = (BgL_arg1543z00_899 == ((long) 0));
								}
								if (BgL_testz00_6073)
									{	/* Ieee/fixnum.scm 1325 */
										return BgL_nz00_891;
									}
								else
									{	/* Ieee/fixnum.scm 1325 */
										long BgL_arg1539z00_895;

										{	/* Ieee/fixnum.scm 1325 */
											long BgL_arg1540z00_896;

											{	/* Ieee/fixnum.scm 1325 */
												obj_t BgL_list1541z00_897;

												{	/* Ieee/fixnum.scm 1325 */
													obj_t BgL_arg1542z00_898;

													BgL_arg1542z00_898 =
														MAKE_PAIR(BINT(BgL_nz00_891), BNIL);
													BgL_list1541z00_897 =
														MAKE_PAIR(BINT(BgL_mz00_890), BgL_arg1542z00_898);
												}
												BgL_arg1540z00_896 =
													BGl_gcdfxz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1541z00_897);
											}
											BgL_arg1539z00_895 = (BgL_mz00_890 / BgL_arg1540z00_896);
										}
										return (BgL_arg1539z00_895 * BgL_nz00_891);
									}
							}
					}
			}
		}
	}



/* _lcmfx */
	obj_t BGl__lcmfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3198,
		obj_t BgL_xz00_3199)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1324 */
			return BINT(BGl_lcmfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3199));
		}
	}



/* lcmelong */
	BGL_EXPORTED_DEF long BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_168)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1330 */
			if (NULLP(BgL_xz00_168))
				{	/* Ieee/fixnum.scm 1331 */
					return ((long) 1);
				}
			else
				{	/* Ieee/fixnum.scm 1331 */
					if (NULLP(CDR(BgL_xz00_168)))
						{	/* Ieee/fixnum.scm 1331 */
							long BgL_nz00_2392;

							{	/* Ieee/fixnum.scm 1331 */
								obj_t BgL_pairz00_2391;

								BgL_pairz00_2391 = BgL_xz00_168;
								{	/* Ieee/fixnum.scm 1331 */
									obj_t BgL_auxz00_6090;

									BgL_auxz00_6090 = CAR(BgL_pairz00_2391);
									BgL_nz00_2392 = BELONG_TO_LONG(BgL_auxz00_6090);
							}}
							if ((BgL_nz00_2392 < ((long) 0)))
								{	/* Ieee/fixnum.scm 1331 */
									return NEG(BgL_nz00_2392);
								}
							else
								{	/* Ieee/fixnum.scm 1331 */
									return BgL_nz00_2392;
								}
						}
					else
						{	/* Ieee/fixnum.scm 1331 */
							long BgL_g1121z00_909;

							obj_t BgL_g1122z00_910;

							{	/* Ieee/fixnum.scm 1331 */
								obj_t BgL_arg1557z00_920;

								obj_t BgL_arg1559z00_921;

								BgL_arg1557z00_920 = CAR(BgL_xz00_168);
								{	/* Ieee/fixnum.scm 1331 */
									obj_t BgL_pairz00_2399;

									BgL_pairz00_2399 = BgL_xz00_168;
									BgL_arg1559z00_921 = CAR(CDR(BgL_pairz00_2399));
								}
								BgL_g1121z00_909 =
									BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00
									(BgL_arg1557z00_920, BgL_arg1559z00_921);
							}
							{	/* Ieee/fixnum.scm 1331 */
								obj_t BgL_pairz00_2403;

								BgL_pairz00_2403 = BgL_xz00_168;
								BgL_g1122z00_910 = CDR(CDR(BgL_pairz00_2403));
							}
							{
								long BgL_resultz00_2408;

								obj_t BgL_leftz00_2409;

								BgL_resultz00_2408 = BgL_g1121z00_909;
								BgL_leftz00_2409 = BgL_g1122z00_910;
							BgL_loopz00_2407:
								if (PAIRP(BgL_leftz00_2409))
									{	/* Ieee/fixnum.scm 1331 */
										long BgL_arg1554z00_2415;

										obj_t BgL_arg1555z00_2416;

										{	/* Ieee/fixnum.scm 1331 */
											obj_t BgL_arg1556z00_2417;

											BgL_arg1556z00_2417 = CAR(BgL_leftz00_2409);
											BgL_arg1554z00_2415 =
												BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00
												(make_belong(BgL_resultz00_2408), BgL_arg1556z00_2417);
										}
										BgL_arg1555z00_2416 = CDR(BgL_leftz00_2409);
										{
											obj_t BgL_leftz00_6109;

											long BgL_resultz00_6108;

											BgL_resultz00_6108 = BgL_arg1554z00_2415;
											BgL_leftz00_6109 = BgL_arg1555z00_2416;
											BgL_leftz00_2409 = BgL_leftz00_6109;
											BgL_resultz00_2408 = BgL_resultz00_6108;
											goto BgL_loopz00_2407;
										}
									}
								else
									{	/* Ieee/fixnum.scm 1331 */
										return BgL_resultz00_2408;
									}
							}
						}
				}
		}
	}



/* lcm2'' */
	long BGl_lcm2z72z72z00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_922,
		obj_t BgL_nz00_923)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1331 */
			{	/* Ieee/fixnum.scm 1331 */
				long BgL_mz00_925;

				long BgL_nz00_926;

				{	/* Ieee/fixnum.scm 1331 */
					long BgL_nz00_2437;

					BgL_nz00_2437 = BELONG_TO_LONG(BgL_mz00_922);
					if ((BgL_nz00_2437 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1331 */
							BgL_mz00_925 = NEG(BgL_nz00_2437);
						}
					else
						{	/* Ieee/fixnum.scm 1331 */
							BgL_mz00_925 = BgL_nz00_2437;
						}
				}
				{	/* Ieee/fixnum.scm 1331 */
					long BgL_nz00_2443;

					BgL_nz00_2443 = BELONG_TO_LONG(BgL_nz00_923);
					if ((BgL_nz00_2443 < ((long) 0)))
						{	/* Ieee/fixnum.scm 1331 */
							BgL_nz00_926 = NEG(BgL_nz00_2443);
						}
					else
						{	/* Ieee/fixnum.scm 1331 */
							BgL_nz00_926 = BgL_nz00_2443;
						}
				}
				if ((BgL_mz00_925 == BgL_nz00_926))
					{	/* Ieee/fixnum.scm 1331 */
						return BgL_mz00_925;
					}
				else
					{	/* Ieee/fixnum.scm 1331 */
						bool_t BgL_testz00_6120;

						{	/* Ieee/fixnum.scm 1331 */
							long BgL_arg1571z00_936;

							BgL_arg1571z00_936 = (BgL_mz00_925 % BgL_nz00_926);
							BgL_testz00_6120 = (BgL_arg1571z00_936 == ((long) 0));
						}
						if (BgL_testz00_6120)
							{	/* Ieee/fixnum.scm 1331 */
								return BgL_mz00_925;
							}
						else
							{	/* Ieee/fixnum.scm 1331 */
								bool_t BgL_testz00_6123;

								{	/* Ieee/fixnum.scm 1331 */
									long BgL_arg1568z00_934;

									BgL_arg1568z00_934 = (BgL_nz00_926 % BgL_mz00_925);
									BgL_testz00_6123 = (BgL_arg1568z00_934 == ((long) 0));
								}
								if (BgL_testz00_6123)
									{	/* Ieee/fixnum.scm 1331 */
										return BgL_nz00_926;
									}
								else
									{	/* Ieee/fixnum.scm 1331 */
										long BgL_arg1564z00_930;

										{	/* Ieee/fixnum.scm 1331 */
											long BgL_arg1565z00_931;

											{	/* Ieee/fixnum.scm 1331 */
												obj_t BgL_list1566z00_932;

												{	/* Ieee/fixnum.scm 1331 */
													obj_t BgL_arg1567z00_933;

													BgL_arg1567z00_933 =
														MAKE_PAIR(make_belong(BgL_nz00_926), BNIL);
													BgL_list1566z00_932 =
														MAKE_PAIR(make_belong(BgL_mz00_925),
														BgL_arg1567z00_933);
												}
												BgL_arg1565z00_931 =
													BGl_gcdelongz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1566z00_932);
											}
											BgL_arg1564z00_930 = (BgL_mz00_925 / BgL_arg1565z00_931);
										}
										return (BgL_arg1564z00_930 * BgL_nz00_926);
									}
							}
					}
			}
		}
	}



/* _lcmelong */
	obj_t BGl__lcmelongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3200,
		obj_t BgL_xz00_3201)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1330 */
			{	/* Ieee/fixnum.scm 1331 */
				long BgL_auxz00_6133;

				BgL_auxz00_6133 =
					BGl_lcmelongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3201);
				return make_belong(BgL_auxz00_6133);
			}
		}
	}



/* lcmllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_169)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1336 */
			if (NULLP(BgL_xz00_169))
				{	/* Ieee/fixnum.scm 1337 */
					return ((BGL_LONGLONG_T) 1);
				}
			else
				{	/* Ieee/fixnum.scm 1337 */
					if (NULLP(CDR(BgL_xz00_169)))
						{	/* Ieee/fixnum.scm 1337 */
							BGL_LONGLONG_T BgL_nz00_2467;

							{	/* Ieee/fixnum.scm 1337 */
								obj_t BgL_pairz00_2466;

								BgL_pairz00_2466 = BgL_xz00_169;
								BgL_nz00_2467 = BLLONG_TO_LLONG(CAR(BgL_pairz00_2466));
							}
							if ((BgL_nz00_2467 < ((BGL_LONGLONG_T) 0)))
								{	/* Ieee/fixnum.scm 1337 */
									return NEG(BgL_nz00_2467);
								}
							else
								{	/* Ieee/fixnum.scm 1337 */
									return BgL_nz00_2467;
								}
						}
					else
						{	/* Ieee/fixnum.scm 1337 */
							BGL_LONGLONG_T BgL_g1123z00_944;

							obj_t BgL_g1124z00_945;

							{	/* Ieee/fixnum.scm 1337 */
								obj_t BgL_arg1583z00_955;

								obj_t BgL_arg1584z00_956;

								BgL_arg1583z00_955 = CAR(BgL_xz00_169);
								{	/* Ieee/fixnum.scm 1337 */
									obj_t BgL_pairz00_2474;

									BgL_pairz00_2474 = BgL_xz00_169;
									BgL_arg1584z00_956 = CAR(CDR(BgL_pairz00_2474));
								}
								BgL_g1123z00_944 =
									BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(BgL_arg1583z00_955,
									BgL_arg1584z00_956);
							}
							{	/* Ieee/fixnum.scm 1337 */
								obj_t BgL_pairz00_2478;

								BgL_pairz00_2478 = BgL_xz00_169;
								BgL_g1124z00_945 = CDR(CDR(BgL_pairz00_2478));
							}
							{
								BGL_LONGLONG_T BgL_resultz00_2483;

								obj_t BgL_leftz00_2484;

								BgL_resultz00_2483 = BgL_g1123z00_944;
								BgL_leftz00_2484 = BgL_g1124z00_945;
							BgL_loopz00_2482:
								if (PAIRP(BgL_leftz00_2484))
									{	/* Ieee/fixnum.scm 1337 */
										BGL_LONGLONG_T BgL_arg1580z00_2490;

										obj_t BgL_arg1581z00_2491;

										{	/* Ieee/fixnum.scm 1337 */
											obj_t BgL_arg1582z00_2492;

											BgL_arg1582z00_2492 = CAR(BgL_leftz00_2484);
											BgL_arg1580z00_2490 =
												BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(make_bllong
												(BgL_resultz00_2483), BgL_arg1582z00_2492);
										}
										BgL_arg1581z00_2491 = CDR(BgL_leftz00_2484);
										{
											obj_t BgL_leftz00_6159;

											BGL_LONGLONG_T BgL_resultz00_6158;

											BgL_resultz00_6158 = BgL_arg1580z00_2490;
											BgL_leftz00_6159 = BgL_arg1581z00_2491;
											BgL_leftz00_2484 = BgL_leftz00_6159;
											BgL_resultz00_2483 = BgL_resultz00_6158;
											goto BgL_loopz00_2482;
										}
									}
								else
									{	/* Ieee/fixnum.scm 1337 */
										return BgL_resultz00_2483;
									}
							}
						}
				}
		}
	}



/* lcm2' */
	BGL_LONGLONG_T BGl_lcm2z72z72zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_957,
		obj_t BgL_nz00_958)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1337 */
			{	/* Ieee/fixnum.scm 1337 */
				BGL_LONGLONG_T BgL_mz00_960;

				BGL_LONGLONG_T BgL_nz00_961;

				{	/* Ieee/fixnum.scm 1337 */
					BGL_LONGLONG_T BgL_nz00_2512;

					BgL_nz00_2512 = BLLONG_TO_LLONG(BgL_mz00_957);
					if ((BgL_nz00_2512 < ((BGL_LONGLONG_T) 0)))
						{	/* Ieee/fixnum.scm 1337 */
							BgL_mz00_960 = NEG(BgL_nz00_2512);
						}
					else
						{	/* Ieee/fixnum.scm 1337 */
							BgL_mz00_960 = BgL_nz00_2512;
						}
				}
				{	/* Ieee/fixnum.scm 1337 */
					BGL_LONGLONG_T BgL_nz00_2518;

					BgL_nz00_2518 = BLLONG_TO_LLONG(BgL_nz00_958);
					if ((BgL_nz00_2518 < ((BGL_LONGLONG_T) 0)))
						{	/* Ieee/fixnum.scm 1337 */
							BgL_nz00_961 = NEG(BgL_nz00_2518);
						}
					else
						{	/* Ieee/fixnum.scm 1337 */
							BgL_nz00_961 = BgL_nz00_2518;
						}
				}
				if ((BgL_mz00_960 == BgL_nz00_961))
					{	/* Ieee/fixnum.scm 1337 */
						return BgL_mz00_960;
					}
				else
					{	/* Ieee/fixnum.scm 1337 */
						bool_t BgL_testz00_6170;

						{	/* Ieee/fixnum.scm 1337 */
							BGL_LONGLONG_T BgL_arg1598z00_971;

							BgL_arg1598z00_971 = (BgL_mz00_960 % BgL_nz00_961);
							BgL_testz00_6170 = (BgL_arg1598z00_971 == ((BGL_LONGLONG_T) 0));
						}
						if (BgL_testz00_6170)
							{	/* Ieee/fixnum.scm 1337 */
								return BgL_mz00_960;
							}
						else
							{	/* Ieee/fixnum.scm 1337 */
								bool_t BgL_testz00_6173;

								{	/* Ieee/fixnum.scm 1337 */
									BGL_LONGLONG_T BgL_arg1596z00_969;

									BgL_arg1596z00_969 = (BgL_nz00_961 % BgL_mz00_960);
									BgL_testz00_6173 =
										(BgL_arg1596z00_969 == ((BGL_LONGLONG_T) 0));
								}
								if (BgL_testz00_6173)
									{	/* Ieee/fixnum.scm 1337 */
										return BgL_nz00_961;
									}
								else
									{	/* Ieee/fixnum.scm 1337 */
										BGL_LONGLONG_T BgL_arg1589z00_965;

										{	/* Ieee/fixnum.scm 1337 */
											BGL_LONGLONG_T BgL_arg1590z00_966;

											{	/* Ieee/fixnum.scm 1337 */
												obj_t BgL_list1591z00_967;

												{	/* Ieee/fixnum.scm 1337 */
													obj_t BgL_arg1593z00_968;

													BgL_arg1593z00_968 =
														MAKE_PAIR(make_bllong(BgL_nz00_961), BNIL);
													BgL_list1591z00_967 =
														MAKE_PAIR(make_bllong(BgL_mz00_960),
														BgL_arg1593z00_968);
												}
												BgL_arg1590z00_966 =
													BGl_gcdllongz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1591z00_967);
											}
											BgL_arg1589z00_965 = (BgL_mz00_960 / BgL_arg1590z00_966);
										}
										return (BgL_arg1589z00_965 * BgL_nz00_961);
									}
							}
					}
			}
		}
	}



/* _lcmllong */
	obj_t BGl__lcmllongz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3202,
		obj_t BgL_xz00_3203)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1336 */
			return
				make_bllong(BGl_lcmllongz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3203));
		}
	}



/* lcmbx */
	BGL_EXPORTED_DEF obj_t BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_170)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1342 */
			if (NULLP(BgL_xz00_170))
				{	/* Ieee/fixnum.scm 1343 */
					return bgl_long_to_bignum(((long) 1));
				}
			else
				{	/* Ieee/fixnum.scm 1343 */
					if (NULLP(CDR(BgL_xz00_170)))
						{	/* Ieee/fixnum.scm 1344 */
							return bgl_bignum_abs(CAR(BgL_xz00_170));
						}
					else
						{
							obj_t BgL_resultz00_2554;

							obj_t BgL_leftz00_2555;

							{	/* Ieee/fixnum.scm 1346 */
								obj_t BgL_auxz00_6200;

								{	/* Ieee/fixnum.scm 1346 */
									obj_t BgL_pairz00_2545;

									BgL_pairz00_2545 = BgL_xz00_170;
									BgL_auxz00_6200 = CAR(CDR(BgL_pairz00_2545));
								}
								BgL_resultz00_2554 =
									bgl_bignum_lcm(CAR(BgL_xz00_170), BgL_auxz00_6200);
							}
							{	/* Ieee/fixnum.scm 1347 */
								obj_t BgL_pairz00_2549;

								BgL_pairz00_2549 = BgL_xz00_170;
								BgL_leftz00_2555 = CDR(CDR(BgL_pairz00_2549));
							}
						BgL_loopz00_2553:
							if (PAIRP(BgL_leftz00_2555))
								{
									obj_t BgL_leftz00_6198;

									obj_t BgL_resultz00_6195;

									BgL_resultz00_6195 =
										bgl_bignum_lcm(BgL_resultz00_2554, CAR(BgL_leftz00_2555));
									BgL_leftz00_6198 = CDR(BgL_leftz00_2555);
									BgL_leftz00_2555 = BgL_leftz00_6198;
									BgL_resultz00_2554 = BgL_resultz00_6195;
									goto BgL_loopz00_2553;
								}
							else
								{	/* Ieee/fixnum.scm 1346 */
									return BgL_resultz00_2554;
								}
						}
				}
		}
	}



/* _lcmbx */
	obj_t BGl__lcmbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3204,
		obj_t BgL_xz00_3205)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1342 */
			return BGl_lcmbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3205);
		}
	}



/* lcm */
	BGL_EXPORTED_DEF obj_t BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_171)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1355 */
			if (NULLP(BgL_xz00_171))
				{	/* Ieee/fixnum.scm 1356 */
					return BINT(((long) 1));
				}
			else
				{	/* Ieee/fixnum.scm 1356 */
					if (NULLP(CDR(BgL_xz00_171)))
						{	/* Ieee/fixnum.scm 1356 */
							return BGl_absz00zz__r4_numbers_6_5z00(CAR(BgL_xz00_171));
						}
					else
						{	/* Ieee/fixnum.scm 1356 */
							obj_t BgL_g1127z00_996;

							obj_t BgL_g1128z00_997;

							{	/* Ieee/fixnum.scm 1356 */
								obj_t BgL_arg1624z00_1007;

								obj_t BgL_arg1625z00_1008;

								BgL_arg1624z00_1007 = CAR(BgL_xz00_171);
								{	/* Ieee/fixnum.scm 1356 */
									obj_t BgL_pairz00_2588;

									BgL_pairz00_2588 = BgL_xz00_171;
									BgL_arg1625z00_1008 = CAR(CDR(BgL_pairz00_2588));
								}
								BgL_g1127z00_996 =
									BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(BgL_arg1624z00_1007,
									BgL_arg1625z00_1008);
							}
							{	/* Ieee/fixnum.scm 1356 */
								obj_t BgL_pairz00_2592;

								BgL_pairz00_2592 = BgL_xz00_171;
								BgL_g1128z00_997 = CDR(CDR(BgL_pairz00_2592));
							}
							{
								obj_t BgL_resultz00_2597;

								obj_t BgL_leftz00_2598;

								BgL_resultz00_2597 = BgL_g1127z00_996;
								BgL_leftz00_2598 = BgL_g1128z00_997;
							BgL_loopz00_2596:
								if (PAIRP(BgL_leftz00_2598))
									{
										obj_t BgL_leftz00_6227;

										obj_t BgL_resultz00_6224;

										BgL_resultz00_6224 =
											BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00
											(BgL_resultz00_2597, CAR(BgL_leftz00_2598));
										BgL_leftz00_6227 = CDR(BgL_leftz00_2598);
										BgL_leftz00_2598 = BgL_leftz00_6227;
										BgL_resultz00_2597 = BgL_resultz00_6224;
										goto BgL_loopz00_2596;
									}
								else
									{	/* Ieee/fixnum.scm 1356 */
										return BgL_resultz00_2597;
									}
							}
						}
				}
		}
	}



/* lcm2 */
	obj_t BGl_lcm2z00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_mz00_1009,
		obj_t BgL_nz00_1010)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1356 */
			{	/* Ieee/fixnum.scm 1356 */
				obj_t BgL_mz00_1012;

				obj_t BgL_nz00_1013;

				BgL_mz00_1012 = BGl_absz00zz__r4_numbers_6_5z00(BgL_mz00_1009);
				BgL_nz00_1013 = BGl_absz00zz__r4_numbers_6_5z00(BgL_nz00_1010);
				if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_mz00_1012, BgL_nz00_1013))
					{	/* Ieee/fixnum.scm 1356 */
						return BgL_mz00_1012;
					}
				else
					{	/* Ieee/fixnum.scm 1356 */
						if (BGl_2zd3zd3zz__r4_numbers_6_5z00
							(BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_mz00_1012,
									BgL_nz00_1013), BINT(((long) 0))))
							{	/* Ieee/fixnum.scm 1356 */
								return BgL_mz00_1012;
							}
						else
							{	/* Ieee/fixnum.scm 1356 */
								if (BGl_2zd3zd3zz__r4_numbers_6_5z00
									(BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BgL_nz00_1013,
											BgL_mz00_1012), BINT(((long) 0))))
									{	/* Ieee/fixnum.scm 1356 */
										return BgL_nz00_1013;
									}
								else
									{	/* Ieee/fixnum.scm 1356 */
										obj_t BgL_arg1630z00_1017;

										{	/* Ieee/fixnum.scm 1356 */
											obj_t BgL_arg1631z00_1018;

											{	/* Ieee/fixnum.scm 1356 */
												obj_t BgL_list1632z00_1019;

												{	/* Ieee/fixnum.scm 1356 */
													obj_t BgL_arg1633z00_1020;

													BgL_arg1633z00_1020 = MAKE_PAIR(BgL_nz00_1013, BNIL);
													BgL_list1632z00_1019 =
														MAKE_PAIR(BgL_mz00_1012, BgL_arg1633z00_1020);
												}
												BgL_arg1631z00_1018 =
													BGl_gcdz00zz__r4_numbers_6_5_fixnumz00
													(BgL_list1632z00_1019);
											}
											BgL_arg1630z00_1017 =
												BGl_2zf2zf2zz__r4_numbers_6_5z00(BgL_mz00_1012,
												BgL_arg1631z00_1018);
										}
										return
											BGl_2za2za2zz__r4_numbers_6_5z00(BgL_arg1630z00_1017,
											BgL_nz00_1013);
									}
							}
					}
			}
		}
	}



/* _lcm */
	obj_t BGl__lcmz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3206,
		obj_t BgL_xz00_3207)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1355 */
			return BGl_lcmz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_3207);
		}
	}



/* exptfx */
	BGL_EXPORTED_DEF long BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_172, long BgL_yz00_173)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1361 */
		BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00:
			if ((BgL_yz00_173 == ((long) 0)))
				{	/* Ieee/fixnum.scm 1363 */
					return ((long) 1);
				}
			else
				{	/* Ieee/fixnum.scm 1363 */
					if (EVENP_FX(BgL_yz00_173))
						{	/* Ieee/fixnum.scm 1366 */
							long BgL_arg1643z00_1029;

							long BgL_arg1644z00_1030;

							BgL_arg1643z00_1029 = (BgL_xz00_172 * BgL_xz00_172);
							BgL_arg1644z00_1030 = (BgL_yz00_173 / ((long) 2));
							{
								long BgL_yz00_6254;

								long BgL_xz00_6253;

								BgL_xz00_6253 = BgL_arg1643z00_1029;
								BgL_yz00_6254 = BgL_arg1644z00_1030;
								BgL_yz00_173 = BgL_yz00_6254;
								BgL_xz00_172 = BgL_xz00_6253;
								goto BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00;
							}
						}
					else
						{	/* Ieee/fixnum.scm 1365 */
							return
								(BgL_xz00_172 *
								BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_172,
									(BgL_yz00_173 - ((long) 1))));
		}}}
	}



/* _exptfx */
	obj_t BGl__exptfxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3208,
		obj_t BgL_xz00_3209, obj_t BgL_yz00_3210)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1361 */
			{	/* Ieee/fixnum.scm 1363 */
				long BgL_auxz00_6258;

				{	/* Ieee/fixnum.scm 1363 */
					long BgL_auxz00_6268;

					long BgL_auxz00_6259;

					{	/* Ieee/fixnum.scm 1363 */
						obj_t BgL_auxz00_6269;

						if (INTEGERP(BgL_yz00_3210))
							{	/* Ieee/fixnum.scm 1363 */
								BgL_auxz00_6269 = BgL_yz00_3210;
							}
						else
							{
								obj_t BgL_auxz00_6272;

								BgL_auxz00_6272 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 60934)),
									BGl_string2416z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3210);
								FAILURE(BgL_auxz00_6272, BFALSE, BFALSE);
							}
						BgL_auxz00_6268 = (long) CINT(BgL_auxz00_6269);
					}
					{	/* Ieee/fixnum.scm 1363 */
						obj_t BgL_auxz00_6260;

						if (INTEGERP(BgL_xz00_3209))
							{	/* Ieee/fixnum.scm 1363 */
								BgL_auxz00_6260 = BgL_xz00_3209;
							}
						else
							{
								obj_t BgL_auxz00_6263;

								BgL_auxz00_6263 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
									BINT(((long) 60934)),
									BGl_string2416z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2311z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3209);
								FAILURE(BgL_auxz00_6263, BFALSE, BFALSE);
							}
						BgL_auxz00_6259 = (long) CINT(BgL_auxz00_6260);
					}
					BgL_auxz00_6258 =
						BGl_exptfxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6259,
						BgL_auxz00_6268);
				}
				return BINT(BgL_auxz00_6258);
			}
		}
	}



/* exptbx */
	BGL_EXPORTED_DEF obj_t BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_174, obj_t BgL_yz00_175)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1373 */
		BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00:
			if (BXZERO(BgL_yz00_175))
				{	/* Ieee/fixnum.scm 1375 */
					return (bgl_string_to_bignum("1", 16));
				}
			else
				{	/* Ieee/fixnum.scm 1375 */
					if (bgl_bignum_even(BgL_yz00_175))
						{
							obj_t BgL_yz00_6285;

							obj_t BgL_xz00_6283;

							BgL_xz00_6283 = bgl_bignum_mul(BgL_xz00_174, BgL_xz00_174);
							BgL_yz00_6285 =
								bgl_bignum_quotient(BgL_yz00_175, (bgl_string_to_bignum("2",
										16)));
							BgL_yz00_175 = BgL_yz00_6285;
							BgL_xz00_174 = BgL_xz00_6283;
							goto BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00;
						}
					else
						{	/* Ieee/fixnum.scm 1377 */
							return
								bgl_bignum_mul(BgL_xz00_174,
								BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_xz00_174,
									bgl_bignum_sub(BgL_yz00_175, (bgl_string_to_bignum("1",
												16)))));
						}
				}
		}
	}



/* _exptbx */
	obj_t BGl__exptbxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3211,
		obj_t BgL_xz00_3212, obj_t BgL_yz00_3213)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1373 */
			{	/* Ieee/fixnum.scm 1375 */
				obj_t BgL_auxz00_6297;

				obj_t BgL_auxz00_6290;

				if (BIGNUMP(BgL_yz00_3213))
					{	/* Ieee/fixnum.scm 1375 */
						BgL_auxz00_6297 = BgL_yz00_3213;
					}
				else
					{
						obj_t BgL_auxz00_6300;

						BgL_auxz00_6300 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 61330)),
							BGl_string2417z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_yz00_3213);
						FAILURE(BgL_auxz00_6300, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_3212))
					{	/* Ieee/fixnum.scm 1375 */
						BgL_auxz00_6290 = BgL_xz00_3212;
					}
				else
					{
						obj_t BgL_auxz00_6293;

						BgL_auxz00_6293 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 61330)),
							BGl_string2417z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3212);
						FAILURE(BgL_auxz00_6293, BFALSE, BFALSE);
					}
				return
					BGl_exptbxz00zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6290,
					BgL_auxz00_6297);
			}
		}
	}



/* _fixnum->string */
	obj_t BGl__fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_179, obj_t BgL_optz00_178)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1399 */
			{	/* Ieee/fixnum.scm 1399 */
				obj_t BgL_g1178z00_1039;

				BgL_g1178z00_1039 = VECTOR_REF(BgL_optz00_178, (int) (((long) 0)));
				{	/* Ieee/fixnum.scm 1399 */
					int BgL_aux1180z00_1041;

					BgL_aux1180z00_1041 = VECTOR_LENGTH(BgL_optz00_178);
					switch ((long) (BgL_aux1180z00_1041))
						{
						case ((long) 1):

							{	/* Ieee/fixnum.scm 1399 */

								{	/* Ieee/fixnum.scm 1399 */
									obj_t BgL_arg1657z00_1044;

									BgL_arg1657z00_1044 =
										VECTOR_REF(BgL_optz00_178, (int) (((long) 0)));
									{	/* Ieee/fixnum.scm 1399 */
										long BgL_auxz00_6310;

										{	/* Ieee/fixnum.scm 1399 */
											obj_t BgL_auxz00_6311;

											if (INTEGERP(BgL_arg1657z00_1044))
												{	/* Ieee/fixnum.scm 1399 */
													BgL_auxz00_6311 = BgL_arg1657z00_1044;
												}
											else
												{
													obj_t BgL_auxz00_6314;

													BgL_auxz00_6314 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
														BINT(((long) 62281)),
														BGl_string2418z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
														BgL_arg1657z00_1044);
													FAILURE(BgL_auxz00_6314, BFALSE, BFALSE);
												}
											BgL_auxz00_6310 = (long) CINT(BgL_auxz00_6311);
										}
										return
											BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_auxz00_6310, ((long) 10));
							}}} break;
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1399 */
								obj_t BgL_radixz00_1045;

								BgL_radixz00_1045 =
									VECTOR_REF(BgL_optz00_178, (int) (((long) 1)));
								{	/* Ieee/fixnum.scm 1399 */

									{	/* Ieee/fixnum.scm 1399 */
										obj_t BgL_arg1659z00_1046;

										BgL_arg1659z00_1046 =
											VECTOR_REF(BgL_optz00_178, (int) (((long) 0)));
										{	/* Ieee/fixnum.scm 1399 */
											long BgL_auxz00_6333;

											long BgL_auxz00_6324;

											{	/* Ieee/fixnum.scm 1399 */
												obj_t BgL_auxz00_6334;

												if (INTEGERP(BgL_radixz00_1045))
													{	/* Ieee/fixnum.scm 1399 */
														BgL_auxz00_6334 = BgL_radixz00_1045;
													}
												else
													{
														obj_t BgL_auxz00_6337;

														BgL_auxz00_6337 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62281)),
															BGl_string2418z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_radixz00_1045);
														FAILURE(BgL_auxz00_6337, BFALSE, BFALSE);
													}
												BgL_auxz00_6333 = (long) CINT(BgL_auxz00_6334);
											}
											{	/* Ieee/fixnum.scm 1399 */
												obj_t BgL_auxz00_6325;

												if (INTEGERP(BgL_arg1659z00_1046))
													{	/* Ieee/fixnum.scm 1399 */
														BgL_auxz00_6325 = BgL_arg1659z00_1046;
													}
												else
													{
														obj_t BgL_auxz00_6328;

														BgL_auxz00_6328 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62281)),
															BGl_string2418z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_arg1659z00_1046);
														FAILURE(BgL_auxz00_6328, BFALSE, BFALSE);
													}
												BgL_auxz00_6324 = (long) CINT(BgL_auxz00_6325);
											}
											return
												BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_auxz00_6324, BgL_auxz00_6333);
										}
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



/* fixnum->string */
	BGL_EXPORTED_DEF obj_t
		BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_176,
		long BgL_radixz00_177)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1399 */
			switch (BgL_radixz00_177)
				{
				case ((long) 2):
				case ((long) 8):
				case ((long) 10):
				case ((long) 16):

					return integer_to_string(BgL_xz00_176, BgL_radixz00_177);
					break;
				default:
					return
						BGl_errorz00zz__errorz00
						(BGl_string2419z00zz__r4_numbers_6_5_fixnumz00,
						BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
						BINT(BgL_radixz00_177));
				}
		}
	}



/* _integer->string */
	obj_t BGl__integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_183, obj_t BgL_optz00_182)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1402 */
			{	/* Ieee/fixnum.scm 1402 */
				obj_t BgL_g1181z00_1051;

				BgL_g1181z00_1051 = VECTOR_REF(BgL_optz00_182, (int) (((long) 0)));
				{	/* Ieee/fixnum.scm 1402 */
					int BgL_aux1183z00_1053;

					BgL_aux1183z00_1053 = VECTOR_LENGTH(BgL_optz00_182);
					switch ((long) (BgL_aux1183z00_1053))
						{
						case ((long) 1):

							{	/* Ieee/fixnum.scm 1402 */

								{	/* Ieee/fixnum.scm 1402 */
									obj_t BgL_arg1662z00_1056;

									BgL_arg1662z00_1056 =
										VECTOR_REF(BgL_optz00_182, (int) (((long) 0)));
									{	/* Ieee/fixnum.scm 1402 */
										long BgL_xz00_3740;

										{	/* Ieee/fixnum.scm 1402 */
											obj_t BgL_auxz00_6354;

											if (INTEGERP(BgL_arg1662z00_1056))
												{	/* Ieee/fixnum.scm 1402 */
													BgL_auxz00_6354 = BgL_arg1662z00_1056;
												}
											else
												{
													obj_t BgL_auxz00_6357;

													BgL_auxz00_6357 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
														BINT(((long) 62377)),
														BGl_string2421z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
														BgL_arg1662z00_1056);
													FAILURE(BgL_auxz00_6357, BFALSE, BFALSE);
												}
											BgL_xz00_3740 = (long) CINT(BgL_auxz00_6354);
										}
										return
											BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_xz00_3740, ((long) 10));
							}}} break;
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1402 */
								obj_t BgL_radixz00_1057;

								BgL_radixz00_1057 =
									VECTOR_REF(BgL_optz00_182, (int) (((long) 1)));
								{	/* Ieee/fixnum.scm 1402 */

									{	/* Ieee/fixnum.scm 1402 */
										obj_t BgL_arg1663z00_1058;

										BgL_arg1663z00_1058 =
											VECTOR_REF(BgL_optz00_182, (int) (((long) 0)));
										{	/* Ieee/fixnum.scm 1402 */
											long BgL_xz00_3742;

											long BgL_radixz00_3743;

											{	/* Ieee/fixnum.scm 1402 */
												obj_t BgL_auxz00_6367;

												if (INTEGERP(BgL_arg1663z00_1058))
													{	/* Ieee/fixnum.scm 1402 */
														BgL_auxz00_6367 = BgL_arg1663z00_1058;
													}
												else
													{
														obj_t BgL_auxz00_6370;

														BgL_auxz00_6370 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62377)),
															BGl_string2421z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_arg1663z00_1058);
														FAILURE(BgL_auxz00_6370, BFALSE, BFALSE);
													}
												BgL_xz00_3742 = (long) CINT(BgL_auxz00_6367);
											}
											{	/* Ieee/fixnum.scm 1402 */
												obj_t BgL_auxz00_6375;

												if (INTEGERP(BgL_radixz00_1057))
													{	/* Ieee/fixnum.scm 1402 */
														BgL_auxz00_6375 = BgL_radixz00_1057;
													}
												else
													{
														obj_t BgL_auxz00_6378;

														BgL_auxz00_6378 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62377)),
															BGl_string2421z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_radixz00_1057);
														FAILURE(BgL_auxz00_6378, BFALSE, BFALSE);
													}
												BgL_radixz00_3743 = (long) CINT(BgL_auxz00_6375);
											}
											return
												BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_xz00_3742, BgL_radixz00_3743);
										}
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



/* integer->string */
	BGL_EXPORTED_DEF obj_t
		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_180,
		long BgL_radixz00_181)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1402 */
			return
				BGl_fixnumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_xz00_180,
				BgL_radixz00_181);
		}
	}



/* _integer->string/padding */
	obj_t BGl__integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_188, obj_t BgL_optz00_187)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1418 */
			{	/* Ieee/fixnum.scm 1418 */
				obj_t BgL_g1184z00_1065;

				obj_t BgL_g1185z00_1066;

				BgL_g1184z00_1065 = VECTOR_REF(BgL_optz00_187, (int) (((long) 0)));
				BgL_g1185z00_1066 = VECTOR_REF(BgL_optz00_187, (int) (((long) 1)));
				{	/* Ieee/fixnum.scm 1418 */
					int BgL_aux1187z00_1068;

					BgL_aux1187z00_1068 = VECTOR_LENGTH(BgL_optz00_187);
					switch ((long) (BgL_aux1187z00_1068))
						{
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1418 */

								{	/* Ieee/fixnum.scm 1418 */
									obj_t BgL_arg1672z00_1071;

									obj_t BgL_arg1673z00_1072;

									BgL_arg1672z00_1071 =
										VECTOR_REF(BgL_optz00_187, (int) (((long) 0)));
									BgL_arg1673z00_1072 =
										VECTOR_REF(BgL_optz00_187, (int) (((long) 1)));
									{	/* Ieee/fixnum.scm 1418 */
										obj_t BgL_res1943z00_2658;

										{	/* Ieee/fixnum.scm 1418 */
											long BgL_xz00_2652;

											long BgL_paddingz00_2653;

											{	/* Ieee/fixnum.scm 1418 */
												obj_t BgL_auxz00_6396;

												if (INTEGERP(BgL_arg1672z00_1071))
													{	/* Ieee/fixnum.scm 1418 */
														BgL_auxz00_6396 = BgL_arg1672z00_1071;
													}
												else
													{
														obj_t BgL_auxz00_6399;

														BgL_auxz00_6399 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62930)),
															BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_arg1672z00_1071);
														FAILURE(BgL_auxz00_6399, BFALSE, BFALSE);
													}
												BgL_xz00_2652 = (long) CINT(BgL_auxz00_6396);
											}
											{	/* Ieee/fixnum.scm 1418 */
												obj_t BgL_auxz00_6404;

												if (INTEGERP(BgL_arg1673z00_1072))
													{	/* Ieee/fixnum.scm 1418 */
														BgL_auxz00_6404 = BgL_arg1673z00_1072;
													}
												else
													{
														obj_t BgL_auxz00_6407;

														BgL_auxz00_6407 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 62930)),
															BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_arg1673z00_1072);
														FAILURE(BgL_auxz00_6407, BFALSE, BFALSE);
													}
												BgL_paddingz00_2653 = (long) CINT(BgL_auxz00_6404);
											}
											{

												switch (((long) 10))
													{
													case ((long) 2):
													case ((long) 8):
													case ((long) 10):
													case ((long) 16):

														BgL_res1943z00_2658 =
															integer_to_string_padding(BgL_xz00_2652,
															BgL_paddingz00_2653, ((long) 10));
														break;
													default:
														{	/* Ieee/fixnum.scm 1418 */
															obj_t BgL_aux2257z00_3546;

															BgL_aux2257z00_3546 =
																BGl_errorz00zz__errorz00
																(BGl_string2423z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
																BINT(((long) 10)));
															if (STRINGP(BgL_aux2257z00_3546))
																{	/* Ieee/fixnum.scm 1418 */
																	BgL_res1943z00_2658 = BgL_aux2257z00_3546;
																}
															else
																{
																	obj_t BgL_auxz00_6417;

																	BgL_auxz00_6417 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																		BINT(((long) 62930)),
																		BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
																		BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
																		BgL_aux2257z00_3546);
																	FAILURE(BgL_auxz00_6417, BFALSE, BFALSE);
										}}}}}
										return BgL_res1943z00_2658;
									}
								}
							}
							break;
						case ((long) 3):

							{	/* Ieee/fixnum.scm 1418 */
								obj_t BgL_radixz00_1073;

								BgL_radixz00_1073 =
									VECTOR_REF(BgL_optz00_187, (int) (((long) 2)));
								{	/* Ieee/fixnum.scm 1418 */

									{	/* Ieee/fixnum.scm 1418 */
										obj_t BgL_arg1674z00_1074;

										obj_t BgL_arg1675z00_1075;

										BgL_arg1674z00_1074 =
											VECTOR_REF(BgL_optz00_187, (int) (((long) 0)));
										BgL_arg1675z00_1075 =
											VECTOR_REF(BgL_optz00_187, (int) (((long) 1)));
										{	/* Ieee/fixnum.scm 1418 */
											obj_t BgL_res1944z00_2665;

											{	/* Ieee/fixnum.scm 1418 */
												long BgL_xz00_2659;

												long BgL_paddingz00_2660;

												long BgL_radixz00_2661;

												{	/* Ieee/fixnum.scm 1418 */
													obj_t BgL_auxz00_6428;

													if (INTEGERP(BgL_arg1674z00_1074))
														{	/* Ieee/fixnum.scm 1418 */
															BgL_auxz00_6428 = BgL_arg1674z00_1074;
														}
													else
														{
															obj_t BgL_auxz00_6431;

															BgL_auxz00_6431 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																BINT(((long) 62930)),
																BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
																BgL_arg1674z00_1074);
															FAILURE(BgL_auxz00_6431, BFALSE, BFALSE);
														}
													BgL_xz00_2659 = (long) CINT(BgL_auxz00_6428);
												}
												{	/* Ieee/fixnum.scm 1418 */
													obj_t BgL_auxz00_6436;

													if (INTEGERP(BgL_arg1675z00_1075))
														{	/* Ieee/fixnum.scm 1418 */
															BgL_auxz00_6436 = BgL_arg1675z00_1075;
														}
													else
														{
															obj_t BgL_auxz00_6439;

															BgL_auxz00_6439 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																BINT(((long) 62930)),
																BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
																BgL_arg1675z00_1075);
															FAILURE(BgL_auxz00_6439, BFALSE, BFALSE);
														}
													BgL_paddingz00_2660 = (long) CINT(BgL_auxz00_6436);
												}
												{	/* Ieee/fixnum.scm 1418 */
													obj_t BgL_auxz00_6444;

													if (INTEGERP(BgL_radixz00_1073))
														{	/* Ieee/fixnum.scm 1418 */
															BgL_auxz00_6444 = BgL_radixz00_1073;
														}
													else
														{
															obj_t BgL_auxz00_6447;

															BgL_auxz00_6447 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																BINT(((long) 62930)),
																BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
																BgL_radixz00_1073);
															FAILURE(BgL_auxz00_6447, BFALSE, BFALSE);
														}
													BgL_radixz00_2661 = (long) CINT(BgL_auxz00_6444);
												}
												{

													switch (BgL_radixz00_2661)
														{
														case ((long) 2):
														case ((long) 8):
														case ((long) 10):
														case ((long) 16):

															BgL_res1944z00_2665 =
																integer_to_string_padding(BgL_xz00_2659,
																BgL_paddingz00_2660, BgL_radixz00_2661);
															break;
														default:
															{	/* Ieee/fixnum.scm 1418 */
																obj_t BgL_aux2265z00_3554;

																BgL_aux2265z00_3554 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2423z00zz__r4_numbers_6_5_fixnumz00,
																	BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
																	BINT(BgL_radixz00_2661));
																if (STRINGP(BgL_aux2265z00_3554))
																	{	/* Ieee/fixnum.scm 1418 */
																		BgL_res1944z00_2665 = BgL_aux2265z00_3554;
																	}
																else
																	{
																		obj_t BgL_auxz00_6457;

																		BgL_auxz00_6457 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																			BINT(((long) 62930)),
																			BGl_string2422z00zz__r4_numbers_6_5_fixnumz00,
																			BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
																			BgL_aux2265z00_3554);
																		FAILURE(BgL_auxz00_6457, BFALSE, BFALSE);
											}}}}}
											return BgL_res1944z00_2665;
										}
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



/* integer->string/padding */
	BGL_EXPORTED_DEF obj_t
		BGl_integerzd2ze3stringzf2paddingzc3zz__r4_numbers_6_5_fixnumz00(long
		BgL_xz00_184, long BgL_paddingz00_185, long BgL_radixz00_186)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1418 */
			switch (BgL_radixz00_186)
				{
				case ((long) 2):
				case ((long) 8):
				case ((long) 10):
				case ((long) 16):

					return
						integer_to_string_padding(BgL_xz00_184, BgL_paddingz00_185,
						BgL_radixz00_186);
					break;
				default:
					return
						BGl_errorz00zz__errorz00
						(BGl_string2423z00zz__r4_numbers_6_5_fixnumz00,
						BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
						BINT(BgL_radixz00_186));
				}
		}
	}



/* _unsigned->string */
	obj_t BGl__unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_192, obj_t BgL_optz00_191)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1428 */
			{	/* Ieee/fixnum.scm 1428 */
				obj_t BgL_g1188z00_1079;

				BgL_g1188z00_1079 = VECTOR_REF(BgL_optz00_191, (int) (((long) 0)));
				{	/* Ieee/fixnum.scm 1428 */
					int BgL_aux1190z00_1081;

					BgL_aux1190z00_1081 = VECTOR_LENGTH(BgL_optz00_191);
					switch ((long) (BgL_aux1190z00_1081))
						{
						case ((long) 1):

							{	/* Ieee/fixnum.scm 1428 */

								return
									BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
									(VECTOR_REF(BgL_optz00_191, (int) (((long) 0))), ((long) 16));
							} break;
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1428 */
								obj_t BgL_radixz00_1085;

								BgL_radixz00_1085 =
									VECTOR_REF(BgL_optz00_191, (int) (((long) 1)));
								{	/* Ieee/fixnum.scm 1428 */

									{	/* Ieee/fixnum.scm 1428 */
										obj_t BgL_arg1680z00_1086;

										BgL_arg1680z00_1086 =
											VECTOR_REF(BgL_optz00_191, (int) (((long) 0)));
										{	/* Ieee/fixnum.scm 1428 */
											long BgL_auxz00_6478;

											{	/* Ieee/fixnum.scm 1428 */
												obj_t BgL_auxz00_6479;

												if (INTEGERP(BgL_radixz00_1085))
													{	/* Ieee/fixnum.scm 1428 */
														BgL_auxz00_6479 = BgL_radixz00_1085;
													}
												else
													{
														obj_t BgL_auxz00_6482;

														BgL_auxz00_6482 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 63391)),
															BGl_string2425z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_radixz00_1085);
														FAILURE(BgL_auxz00_6482, BFALSE, BFALSE);
													}
												BgL_auxz00_6478 = (long) CINT(BgL_auxz00_6479);
											}
											return
												BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_arg1680z00_1086, BgL_auxz00_6478);
										}
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



/* unsigned->string */
	BGL_EXPORTED_DEF obj_t
		BGl_unsignedzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_189,
		long BgL_radixz00_190)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1428 */
			switch (BgL_radixz00_190)
				{
				case ((long) 2):
				case ((long) 8):
				case ((long) 16):

					if (INTEGERP(BgL_xz00_189))
						{	/* Ieee/fixnum.scm 1432 */
							return
								unsigned_to_string((long) CINT(BgL_xz00_189), BgL_radixz00_190);
						}
					else
						{	/* Ieee/fixnum.scm 1432 */
							if (ELONGP(BgL_xz00_189))
								{	/* Ieee/fixnum.scm 1434 */
									return
										unsigned_to_string(BELONG_TO_LONG(BgL_xz00_189),
										BgL_radixz00_190);
								}
							else
								{	/* Ieee/fixnum.scm 1434 */
									if (LLONGP(BgL_xz00_189))
										{	/* Ieee/fixnum.scm 1436 */
											return
												ullong_to_string(BLLONG_TO_LLONG(BgL_xz00_189),
												BgL_radixz00_190);
										}
									else
										{	/* Ieee/fixnum.scm 1436 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2426z00zz__r4_numbers_6_5_fixnumz00,
												BGl_string2355z00zz__r4_numbers_6_5_fixnumz00,
												BgL_xz00_189);
										}
								}
						}
					break;
				default:
					return
						BGl_errorz00zz__errorz00
						(BGl_string2426z00zz__r4_numbers_6_5_fixnumz00,
						BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
						BINT(BgL_radixz00_190));
				}
		}
	}



/* elong->string */
	BGL_EXPORTED_DEF obj_t
		BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long BgL_xz00_193,
		obj_t BgL_radixz00_194)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1446 */
			{	/* Ieee/fixnum.scm 1447 */
				obj_t BgL_radix1143z00_1093;

				if (NULLP(BgL_radixz00_194))
					{	/* Ieee/fixnum.scm 1447 */
						BgL_radix1143z00_1093 = BINT(((long) 10));
					}
				else
					{	/* Ieee/fixnum.scm 1447 */
						BgL_radix1143z00_1093 = CAR(BgL_radixz00_194);
					}
				if (INTEGERP(BgL_radix1143z00_1093))
					{	/* Ieee/fixnum.scm 1447 */
						switch ((long) CINT(BgL_radix1143z00_1093))
							{
							case ((long) 2):
							case ((long) 8):
							case ((long) 10):
							case ((long) 16):

								return
									integer_to_string(BgL_xz00_193,
									(long) CINT(BgL_radix1143z00_1093));
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string2427z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
									BgL_radix1143z00_1093);
							}
					}
				else
					{	/* Ieee/fixnum.scm 1447 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2427z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
							BgL_radix1143z00_1093);
					}
			}
		}
	}



/* _elong->string */
	obj_t BGl__elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3214, obj_t BgL_xz00_3215, obj_t BgL_radixz00_3216)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1446 */
			{	/* Ieee/fixnum.scm 1447 */
				long BgL_auxz00_6518;

				{	/* Ieee/fixnum.scm 1447 */
					obj_t BgL_auxz00_6519;

					if (ELONGP(BgL_xz00_3215))
						{	/* Ieee/fixnum.scm 1447 */
							BgL_auxz00_6519 = BgL_xz00_3215;
						}
					else
						{
							obj_t BgL_auxz00_6522;

							BgL_auxz00_6522 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 64026)),
								BGl_string2428z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2314z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3215);
							FAILURE(BgL_auxz00_6522, BFALSE, BFALSE);
						}
					BgL_auxz00_6518 = BELONG_TO_LONG(BgL_auxz00_6519);
				}
				return
					BGl_elongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6518,
					BgL_radixz00_3216);
			}
		}
	}



/* llong->string */
	BGL_EXPORTED_DEF obj_t
		BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BGL_LONGLONG_T
		BgL_xz00_195, obj_t BgL_radixz00_196)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1452 */
			{	/* Ieee/fixnum.scm 1453 */
				obj_t BgL_radix1146z00_1098;

				if (NULLP(BgL_radixz00_196))
					{	/* Ieee/fixnum.scm 1453 */
						BgL_radix1146z00_1098 = BINT(((long) 10));
					}
				else
					{	/* Ieee/fixnum.scm 1453 */
						BgL_radix1146z00_1098 = CAR(BgL_radixz00_196);
					}
				if (INTEGERP(BgL_radix1146z00_1098))
					{	/* Ieee/fixnum.scm 1453 */
						switch ((long) CINT(BgL_radix1146z00_1098))
							{
							case ((long) 2):
							case ((long) 8):
							case ((long) 10):
							case ((long) 16):

								return
									llong_to_string(BgL_xz00_195,
									(long) CINT(BgL_radix1146z00_1098));
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string2429z00zz__r4_numbers_6_5_fixnumz00,
									BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
									BgL_radix1146z00_1098);
							}
					}
				else
					{	/* Ieee/fixnum.scm 1453 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2429z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
							BgL_radix1146z00_1098);
					}
			}
		}
	}



/* _llong->string */
	obj_t BGl__llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3217, obj_t BgL_xz00_3218, obj_t BgL_radixz00_3219)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1452 */
			{	/* Ieee/fixnum.scm 1453 */
				BGL_LONGLONG_T BgL_auxz00_6540;

				{	/* Ieee/fixnum.scm 1453 */
					obj_t BgL_auxz00_6541;

					if (LLONGP(BgL_xz00_3218))
						{	/* Ieee/fixnum.scm 1453 */
							BgL_auxz00_6541 = BgL_xz00_3218;
						}
					else
						{
							obj_t BgL_auxz00_6544;

							BgL_auxz00_6544 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 64349)),
								BGl_string2430z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2316z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3218);
							FAILURE(BgL_auxz00_6544, BFALSE, BFALSE);
						}
					BgL_auxz00_6540 = BLLONG_TO_LLONG(BgL_auxz00_6541);
				}
				return
					BGl_llongzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6540,
					BgL_radixz00_3219);
			}
		}
	}



/* _bignum->string */
	obj_t BGl__bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_200, obj_t BgL_optz00_199)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1458 */
			{	/* Ieee/fixnum.scm 1458 */
				obj_t BgL_g1191z00_1103;

				BgL_g1191z00_1103 = VECTOR_REF(BgL_optz00_199, (int) (((long) 0)));
				{	/* Ieee/fixnum.scm 1458 */
					int BgL_aux1193z00_1105;

					BgL_aux1193z00_1105 = VECTOR_LENGTH(BgL_optz00_199);
					switch ((long) (BgL_aux1193z00_1105))
						{
						case ((long) 1):

							{	/* Ieee/fixnum.scm 1458 */

								{	/* Ieee/fixnum.scm 1458 */
									obj_t BgL_arg1690z00_1108;

									BgL_arg1690z00_1108 =
										VECTOR_REF(BgL_optz00_199, (int) (((long) 0)));
									{	/* Ieee/fixnum.scm 1458 */
										obj_t BgL_auxz00_6555;

										if (BIGNUMP(BgL_arg1690z00_1108))
											{	/* Ieee/fixnum.scm 1458 */
												BgL_auxz00_6555 = BgL_arg1690z00_1108;
											}
										else
											{
												obj_t BgL_auxz00_6558;

												BgL_auxz00_6558 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
													BINT(((long) 64636)),
													BGl_string2431z00zz__r4_numbers_6_5_fixnumz00,
													BGl_string2319z00zz__r4_numbers_6_5_fixnumz00,
													BgL_arg1690z00_1108);
												FAILURE(BgL_auxz00_6558, BFALSE, BFALSE);
											}
										return
											BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
											(BgL_auxz00_6555, ((long) 10));
							}}} break;
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1458 */
								obj_t BgL_radixz00_1109;

								BgL_radixz00_1109 =
									VECTOR_REF(BgL_optz00_199, (int) (((long) 1)));
								{	/* Ieee/fixnum.scm 1458 */

									{	/* Ieee/fixnum.scm 1458 */
										obj_t BgL_arg1691z00_1110;

										BgL_arg1691z00_1110 =
											VECTOR_REF(BgL_optz00_199, (int) (((long) 0)));
										{	/* Ieee/fixnum.scm 1458 */
											long BgL_auxz00_6574;

											obj_t BgL_auxz00_6567;

											{	/* Ieee/fixnum.scm 1458 */
												obj_t BgL_auxz00_6575;

												if (INTEGERP(BgL_radixz00_1109))
													{	/* Ieee/fixnum.scm 1458 */
														BgL_auxz00_6575 = BgL_radixz00_1109;
													}
												else
													{
														obj_t BgL_auxz00_6578;

														BgL_auxz00_6578 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 64636)),
															BGl_string2431z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
															BgL_radixz00_1109);
														FAILURE(BgL_auxz00_6578, BFALSE, BFALSE);
													}
												BgL_auxz00_6574 = (long) CINT(BgL_auxz00_6575);
											}
											if (BIGNUMP(BgL_arg1691z00_1110))
												{	/* Ieee/fixnum.scm 1458 */
													BgL_auxz00_6567 = BgL_arg1691z00_1110;
												}
											else
												{
													obj_t BgL_auxz00_6570;

													BgL_auxz00_6570 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
														BINT(((long) 64636)),
														BGl_string2431z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2319z00zz__r4_numbers_6_5_fixnumz00,
														BgL_arg1691z00_1110);
													FAILURE(BgL_auxz00_6570, BFALSE, BFALSE);
												}
											return
												BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_auxz00_6567, BgL_auxz00_6574);
										}
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



/* bignum->string */
	BGL_EXPORTED_DEF obj_t
		BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t BgL_xz00_197,
		long BgL_radixz00_198)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1458 */
			switch (BgL_radixz00_198)
				{
				case ((long) 2):
				case ((long) 8):
				case ((long) 10):
				case ((long) 16):

					return bgl_bignum_to_string(BgL_xz00_197, BgL_radixz00_198);
					break;
				default:
					return
						BGl_errorz00zz__errorz00
						(BGl_string2432z00zz__r4_numbers_6_5_fixnumz00,
						BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
						BINT(BgL_radixz00_198));
				}
		}
	}



/* bignum->octet-string */
	BGL_EXPORTED_DEF obj_t
		BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_xz00_201)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1464 */
			{
				obj_t BgL_bz00_1142;

				{	/* Ieee/fixnum.scm 1496 */
					long BgL_lenz00_1118;

					{	/* Ieee/fixnum.scm 1496 */
						long BgL_arg1703z00_1133;

						BgL_bz00_1142 = BgL_xz00_201;
						{
							obj_t BgL_bz00_1145;

							long BgL_resz00_1146;

							BgL_bz00_1145 = BgL_bz00_1142;
							BgL_resz00_1146 = ((long) 0);
						BgL_zc3anonymousza31709ze3z83_1147:
							{	/* Ieee/fixnum.scm 1476 */
								obj_t BgL_dividedz00_1148;

								BgL_dividedz00_1148 =
									bgl_bignum_quotient(BgL_bz00_1145,
									(bgl_string_to_bignum("100", 16)));
								if (BXZERO(BgL_bz00_1145))
									{	/* Ieee/fixnum.scm 1478 */
										BgL_arg1703z00_1133 = BgL_resz00_1146;
									}
								else
									{	/* Ieee/fixnum.scm 1478 */
										if (BXZERO(BgL_dividedz00_1148))
											{	/* Ieee/fixnum.scm 1480 */
												long BgL_xz00_1151;

												BgL_xz00_1151 = bgl_bignum_to_long(BgL_bz00_1145);
												if ((BgL_xz00_1151 < ((long) 2)))
													{	/* Ieee/fixnum.scm 1482 */
														BgL_arg1703z00_1133 =
															(BgL_resz00_1146 + ((long) 1));
													}
												else
													{	/* Ieee/fixnum.scm 1482 */
														if ((BgL_xz00_1151 < ((long) 4)))
															{	/* Ieee/fixnum.scm 1483 */
																BgL_arg1703z00_1133 =
																	(BgL_resz00_1146 + ((long) 2));
															}
														else
															{	/* Ieee/fixnum.scm 1483 */
																if ((BgL_xz00_1151 < ((long) 8)))
																	{	/* Ieee/fixnum.scm 1484 */
																		BgL_arg1703z00_1133 =
																			(BgL_resz00_1146 + ((long) 3));
																	}
																else
																	{	/* Ieee/fixnum.scm 1484 */
																		if ((BgL_xz00_1151 < ((long) 16)))
																			{	/* Ieee/fixnum.scm 1485 */
																				BgL_arg1703z00_1133 =
																					(BgL_resz00_1146 + ((long) 4));
																			}
																		else
																			{	/* Ieee/fixnum.scm 1485 */
																				if ((BgL_xz00_1151 < ((long) 32)))
																					{	/* Ieee/fixnum.scm 1486 */
																						BgL_arg1703z00_1133 =
																							(BgL_resz00_1146 + ((long) 5));
																					}
																				else
																					{	/* Ieee/fixnum.scm 1486 */
																						if ((BgL_xz00_1151 < ((long) 64)))
																							{	/* Ieee/fixnum.scm 1487 */
																								BgL_arg1703z00_1133 =
																									(BgL_resz00_1146 +
																									((long) 6));
																							}
																						else
																							{	/* Ieee/fixnum.scm 1487 */
																								if (
																									(BgL_xz00_1151 <
																										((long) 128)))
																									{	/* Ieee/fixnum.scm 1488 */
																										BgL_arg1703z00_1133 =
																											(BgL_resz00_1146 +
																											((long) 7));
																									}
																								else
																									{	/* Ieee/fixnum.scm 1488 */
																										BgL_arg1703z00_1133 =
																											(BgL_resz00_1146 +
																											((long) 8));
											}}}}}}}}
										else
											{
												long BgL_resz00_6619;

												obj_t BgL_bz00_6618;

												BgL_bz00_6618 = BgL_dividedz00_1148;
												BgL_resz00_6619 = (BgL_resz00_1146 + ((long) 8));
												BgL_resz00_1146 = BgL_resz00_6619;
												BgL_bz00_1145 = BgL_bz00_6618;
												goto BgL_zc3anonymousza31709ze3z83_1147;
											}
									}
							}
						}
						{	/* Ieee/fixnum.scm 1496 */
							long BgL_qz00_2678;

							long BgL_rz00_2679;

							BgL_qz00_2678 = (BgL_arg1703z00_1133 / ((long) 8));
							BgL_rz00_2679 = (BgL_arg1703z00_1133 % ((long) 8));
							if ((BgL_rz00_2679 == ((long) 0)))
								{	/* Ieee/fixnum.scm 1496 */
									BgL_lenz00_1118 = BgL_qz00_2678;
								}
							else
								{	/* Ieee/fixnum.scm 1496 */
									if ((BgL_rz00_2679 > ((long) 0)))
										{	/* Ieee/fixnum.scm 1496 */
											BgL_lenz00_1118 = (BgL_qz00_2678 + ((long) 1));
										}
									else
										{	/* Ieee/fixnum.scm 1496 */
											BgL_lenz00_1118 = (BgL_qz00_2678 - ((long) 1));
					}}}}
					{	/* Ieee/fixnum.scm 1496 */
						obj_t BgL_bufferz00_1119;

						BgL_bufferz00_1119 =
							make_string(BgL_lenz00_1118, ((unsigned char) ' '));
						{	/* Ieee/fixnum.scm 1497 */

							{	/* Ieee/fixnum.scm 1498 */
								long BgL_g1153z00_1120;

								BgL_g1153z00_1120 = (BgL_lenz00_1118 - ((long) 1));
								{
									obj_t BgL_xz00_1122;

									long BgL_iz00_1123;

									BgL_xz00_1122 = BgL_xz00_201;
									BgL_iz00_1123 = BgL_g1153z00_1120;
								BgL_zc3anonymousza31693ze3z83_1124:
									{	/* Ieee/fixnum.scm 1501 */
										bool_t BgL_testz00_6631;

										if ((BgL_iz00_1123 < ((long) 0)))
											{	/* Ieee/fixnum.scm 1501 */
												BgL_testz00_6631 = BXZERO(BgL_xz00_1122);
											}
										else
											{	/* Ieee/fixnum.scm 1501 */
												BgL_testz00_6631 = ((bool_t) 0);
											}
										if (BgL_testz00_6631)
											{	/* Ieee/fixnum.scm 1501 */
												return BgL_bufferz00_1119;
											}
										else
											{	/* Ieee/fixnum.scm 1501 */
												if ((BgL_iz00_1123 < ((long) 0)))
													{	/* Ieee/fixnum.scm 1504 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2433z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2434z00zz__r4_numbers_6_5_fixnumz00,
															BgL_xz00_1122);
													}
												else
													{	/* Ieee/fixnum.scm 1504 */
														{	/* Ieee/fixnum.scm 1507 */
															unsigned char BgL_arg1696z00_1127;

															{	/* Ieee/fixnum.scm 1507 */
																unsigned char BgL_res1946z00_2716;

																{	/* Ieee/fixnum.scm 1507 */
																	long BgL_arg1724z00_2710;

																	BgL_arg1724z00_2710 =
																		bgl_bignum_to_long(bgl_bignum_remainder
																		(BgL_xz00_1122, (bgl_string_to_bignum("100",
																					16))));
																	BgL_res1946z00_2716 =
																		(char) ((BgL_arg1724z00_2710));
																}
																BgL_arg1696z00_1127 = BgL_res1946z00_2716;
															}
															{	/* Ieee/fixnum.scm 1507 */
																unsigned char BgL_auxz00_6642;

																BgL_auxz00_6642 =
																	(unsigned char) (BgL_arg1696z00_1127);
																STRING_SET(BgL_bufferz00_1119, BgL_iz00_1123,
																	BgL_auxz00_6642);
														}}
														{
															long BgL_iz00_6647;

															obj_t BgL_xz00_6645;

															BgL_xz00_6645 =
																bgl_bignum_quotient(BgL_xz00_1122,
																(bgl_string_to_bignum("100", 16)));
															BgL_iz00_6647 = (BgL_iz00_1123 - ((long) 1));
															BgL_iz00_1123 = BgL_iz00_6647;
															BgL_xz00_1122 = BgL_xz00_6645;
															goto BgL_zc3anonymousza31693ze3z83_1124;
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



/* _bignum->octet-string */
	obj_t BGl__bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3220, obj_t BgL_xz00_3221)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1464 */
			{	/* Ieee/fixnum.scm 1466 */
				obj_t BgL_auxz00_6649;

				if (BIGNUMP(BgL_xz00_3221))
					{	/* Ieee/fixnum.scm 1466 */
						BgL_auxz00_6649 = BgL_xz00_3221;
					}
				else
					{
						obj_t BgL_auxz00_6652;

						BgL_auxz00_6652 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 65020)),
							BGl_string2435z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_xz00_3221);
						FAILURE(BgL_auxz00_6652, BFALSE, BFALSE);
					}
				return
					BGl_bignumzd2ze3octetzd2stringze3zz__r4_numbers_6_5_fixnumz00
					(BgL_auxz00_6649);
			}
		}
	}



/* octet-string->bignum */
	BGL_EXPORTED_DEF obj_t
		BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_strz00_202)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1513 */
			{
				long BgL_iz00_1169;

				obj_t BgL_resz00_1170;

				BgL_iz00_1169 = ((long) 0);
				BgL_resz00_1170 = (bgl_string_to_bignum("0", 16));
			BgL_zc3anonymousza31726ze3z83_1171:
				if ((BgL_iz00_1169 == STRING_LENGTH(BgL_strz00_202)))
					{	/* Ieee/fixnum.scm 1516 */
						return BgL_resz00_1170;
					}
				else
					{
						obj_t BgL_resz00_6662;

						long BgL_iz00_6660;

						BgL_iz00_6660 = (BgL_iz00_1169 + ((long) 1));
						BgL_resz00_6662 =
							bgl_bignum_add(bgl_bignum_mul(BgL_resz00_1170,
								(bgl_string_to_bignum("100", 16))),
							bgl_long_to_bignum((STRING_REF(BgL_strz00_202, BgL_iz00_1169))));
						BgL_resz00_1170 = BgL_resz00_6662;
						BgL_iz00_1169 = BgL_iz00_6660;
						goto BgL_zc3anonymousza31726ze3z83_1171;
					}
			}
		}
	}



/* _octet-string->bignum */
	obj_t BGl__octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3222, obj_t BgL_strz00_3223)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1513 */
			{	/* Ieee/fixnum.scm 1516 */
				obj_t BgL_auxz00_6668;

				if (STRINGP(BgL_strz00_3223))
					{	/* Ieee/fixnum.scm 1516 */
						BgL_auxz00_6668 = BgL_strz00_3223;
					}
				else
					{
						obj_t BgL_auxz00_6671;

						BgL_auxz00_6671 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 66512)),
							BGl_string2436z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2424z00zz__r4_numbers_6_5_fixnumz00, BgL_strz00_3223);
						FAILURE(BgL_auxz00_6671, BFALSE, BFALSE);
					}
				return
					BGl_octetzd2stringzd2ze3bignumze3zz__r4_numbers_6_5_fixnumz00
					(BgL_auxz00_6668);
			}
		}
	}



/* string->integer */
	BGL_EXPORTED_DEF long
		BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_stringz00_203, obj_t BgL_radixz00_204)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1526 */
			{	/* Ieee/fixnum.scm 1527 */
				obj_t BgL_rz00_1181;

				if (NULLP(BgL_radixz00_204))
					{	/* Ieee/fixnum.scm 1527 */
						BgL_rz00_1181 = BINT(((long) 10));
					}
				else
					{	/* Ieee/fixnum.scm 1527 */
						BgL_rz00_1181 = CAR(BgL_radixz00_204);
					}
				if (INTEGERP(BgL_rz00_1181))
					{	/* Ieee/fixnum.scm 1528 */
						switch ((long) CINT(BgL_rz00_1181))
							{
							case ((long) 2):
							case ((long) 8):
							case ((long) 10):
							case ((long) 16):

								{	/* Ieee/fixnum.scm 1530 */
									long BgL_auxz00_6684;

									char *BgL_auxz00_6682;

									BgL_auxz00_6684 = (long) CINT(BgL_rz00_1181);
									BgL_auxz00_6682 = BSTRING_TO_STRING(BgL_stringz00_203);
									return strtol(BgL_auxz00_6682, ((long) 0), BgL_auxz00_6684);
								} break;
							default:
								return
									(long)
									CINT(BGl_errorz00zz__errorz00
									(BGl_string2437z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
										BgL_rz00_1181));
					}}
				else
					{	/* Ieee/fixnum.scm 1528 */
						return
							(long)
							CINT(BGl_errorz00zz__errorz00
							(BGl_string2437z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2420z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1181));
		}}}
	}



/* _string->integer */
	obj_t BGl__stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3224, obj_t BgL_stringz00_3225, obj_t BgL_radixz00_3226)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1526 */
			{	/* Ieee/fixnum.scm 1527 */
				long BgL_auxz00_6693;

				{	/* Ieee/fixnum.scm 1527 */
					obj_t BgL_auxz00_6694;

					if (STRINGP(BgL_stringz00_3225))
						{	/* Ieee/fixnum.scm 1527 */
							BgL_auxz00_6694 = BgL_stringz00_3225;
						}
					else
						{
							obj_t BgL_auxz00_6697;

							BgL_auxz00_6697 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 66925)),
								BGl_string2438z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
								BgL_stringz00_3225);
							FAILURE(BgL_auxz00_6697, BFALSE, BFALSE);
						}
					BgL_auxz00_6693 =
						BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
						(BgL_auxz00_6694, BgL_radixz00_3226);
				}
				return BINT(BgL_auxz00_6693);
			}
		}
	}



/* string->elong */
	BGL_EXPORTED_DEF long
		BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_stringz00_205, obj_t BgL_radixz00_206)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1537 */
			{	/* Ieee/fixnum.scm 1538 */
				obj_t BgL_rz00_1186;

				if (NULLP(BgL_radixz00_206))
					{	/* Ieee/fixnum.scm 1538 */
						BgL_rz00_1186 = BINT(((long) 10));
					}
				else
					{	/* Ieee/fixnum.scm 1538 */
						BgL_rz00_1186 = CAR(BgL_radixz00_206);
					}
				if (INTEGERP(BgL_rz00_1186))
					{	/* Ieee/fixnum.scm 1539 */
						switch ((long) CINT(BgL_rz00_1186))
							{
							case ((long) 2):
							case ((long) 8):
							case ((long) 10):
							case ((long) 16):

								{	/* Ieee/fixnum.scm 1541 */
									long BgL_auxz00_6711;

									char *BgL_auxz00_6709;

									BgL_auxz00_6711 = (long) CINT(BgL_rz00_1186);
									BgL_auxz00_6709 = BSTRING_TO_STRING(BgL_stringz00_205);
									return strtol(BgL_auxz00_6709, ((long) 0), BgL_auxz00_6711);
								} break;
							default:
								{	/* Ieee/fixnum.scm 1539 */
									obj_t BgL_auxz00_6714;

									BgL_auxz00_6714 =
										BGl_errorz00zz__errorz00
										(BGl_string2439z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
										BgL_rz00_1186);
									return BELONG_TO_LONG(BgL_auxz00_6714);
								}
							}
					}
				else
					{	/* Ieee/fixnum.scm 1539 */
						obj_t BgL_auxz00_6719;

						BgL_auxz00_6719 =
							BGl_errorz00zz__errorz00
							(BGl_string2439z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2420z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1186);
						return BELONG_TO_LONG(BgL_auxz00_6719);
					}
			}
		}
	}



/* _string->elong */
	obj_t BGl__stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3227, obj_t BgL_stringz00_3228, obj_t BgL_radixz00_3229)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1537 */
			{	/* Ieee/fixnum.scm 1538 */
				long BgL_auxz00_6722;

				{	/* Ieee/fixnum.scm 1538 */
					obj_t BgL_auxz00_6723;

					if (STRINGP(BgL_stringz00_3228))
						{	/* Ieee/fixnum.scm 1538 */
							BgL_auxz00_6723 = BgL_stringz00_3228;
						}
					else
						{
							obj_t BgL_auxz00_6726;

							BgL_auxz00_6726 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 67347)),
								BGl_string2440z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
								BgL_stringz00_3228);
							FAILURE(BgL_auxz00_6726, BFALSE, BFALSE);
						}
					BgL_auxz00_6722 =
						BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
						(BgL_auxz00_6723, BgL_radixz00_3229);
				}
				return make_belong(BgL_auxz00_6722);
			}
		}
	}



/* string->llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T
		BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_stringz00_207, obj_t BgL_radixz00_208)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1548 */
			{	/* Ieee/fixnum.scm 1549 */
				obj_t BgL_rz00_1191;

				if (NULLP(BgL_radixz00_208))
					{	/* Ieee/fixnum.scm 1549 */
						BgL_rz00_1191 = BINT(((long) 10));
					}
				else
					{	/* Ieee/fixnum.scm 1549 */
						BgL_rz00_1191 = CAR(BgL_radixz00_208);
					}
				if (INTEGERP(BgL_rz00_1191))
					{	/* Ieee/fixnum.scm 1550 */
						switch ((long) CINT(BgL_rz00_1191))
							{
							case ((long) 2):
							case ((long) 8):
							case ((long) 10):
							case ((long) 16):

								{	/* Ieee/fixnum.scm 1552 */
									long BgL_auxz00_6740;

									char *BgL_auxz00_6738;

									BgL_auxz00_6740 = (long) CINT(BgL_rz00_1191);
									BgL_auxz00_6738 = BSTRING_TO_STRING(BgL_stringz00_207);
									return
										BGL_STRTOLL(BgL_auxz00_6738, ((long) 0), BgL_auxz00_6740);
								} break;
							default:
								return
									BLLONG_TO_LLONG(BGl_errorz00zz__errorz00
									(BGl_string2441z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
										BgL_rz00_1191));
							}
					}
				else
					{	/* Ieee/fixnum.scm 1550 */
						return
							BLLONG_TO_LLONG(BGl_errorz00zz__errorz00
							(BGl_string2441z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2420z00zz__r4_numbers_6_5_fixnumz00, BgL_rz00_1191));
					}
			}
		}
	}



/* _string->llong */
	obj_t BGl__stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3230, obj_t BgL_stringz00_3231, obj_t BgL_radixz00_3232)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1548 */
			{	/* Ieee/fixnum.scm 1549 */
				BGL_LONGLONG_T BgL_auxz00_6749;

				{	/* Ieee/fixnum.scm 1549 */
					obj_t BgL_auxz00_6750;

					if (STRINGP(BgL_stringz00_3231))
						{	/* Ieee/fixnum.scm 1549 */
							BgL_auxz00_6750 = BgL_stringz00_3231;
						}
					else
						{
							obj_t BgL_auxz00_6753;

							BgL_auxz00_6753 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 67768)),
								BGl_string2442z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
								BgL_stringz00_3231);
							FAILURE(BgL_auxz00_6753, BFALSE, BFALSE);
						}
					BgL_auxz00_6749 =
						BGl_stringzd2ze3llongz31zz__r4_numbers_6_5_fixnumz00
						(BgL_auxz00_6750, BgL_radixz00_3232);
				}
				return make_bllong(BgL_auxz00_6749);
			}
		}
	}



/* _string->bignum */
	obj_t BGl__stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_212, obj_t BgL_optz00_211)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1559 */
			{	/* Ieee/fixnum.scm 1559 */
				obj_t BgL_g1194z00_1196;

				BgL_g1194z00_1196 = VECTOR_REF(BgL_optz00_211, (int) (((long) 0)));
				{	/* Ieee/fixnum.scm 1559 */
					int BgL_aux1196z00_1198;

					BgL_aux1196z00_1198 = VECTOR_LENGTH(BgL_optz00_211);
					switch ((long) (BgL_aux1196z00_1198))
						{
						case ((long) 1):

							{	/* Ieee/fixnum.scm 1559 */

								{	/* Ieee/fixnum.scm 1559 */
									obj_t BgL_arg1743z00_1201;

									BgL_arg1743z00_1201 =
										VECTOR_REF(BgL_optz00_211, (int) (((long) 0)));
									{	/* Ieee/fixnum.scm 1559 */
										obj_t BgL_res1947z00_2811;

										{	/* Ieee/fixnum.scm 1559 */
											obj_t BgL_stringz00_2803;

											if (STRINGP(BgL_arg1743z00_1201))
												{	/* Ieee/fixnum.scm 1559 */
													BgL_stringz00_2803 = BgL_arg1743z00_1201;
												}
											else
												{
													obj_t BgL_auxz00_6766;

													BgL_auxz00_6766 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
														BINT(((long) 68147)),
														BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
														BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
														BgL_arg1743z00_1201);
													FAILURE(BgL_auxz00_6766, BFALSE, BFALSE);
												}
											{	/* Ieee/fixnum.scm 1559 */
												bool_t BgL_testz00_6770;

												if ((((long) 10) >= ((long) 2)))
													{	/* Ieee/fixnum.scm 1559 */
														BgL_testz00_6770 = (((long) 10) <= ((long) 36));
													}
												else
													{	/* Ieee/fixnum.scm 1559 */
														BgL_testz00_6770 = ((bool_t) 0);
													}
												if (BgL_testz00_6770)
													{	/* Ieee/fixnum.scm 1559 */
														BgL_res1947z00_2811 =
															bgl_string_to_bignum(BSTRING_TO_STRING
															(BgL_stringz00_2803), (int) (((long) 10)));
													}
												else
													{	/* Ieee/fixnum.scm 1559 */
														obj_t BgL_aux2291z00_3580;

														BgL_aux2291z00_3580 =
															BGl_errorz00zz__errorz00
															(BGl_string2444z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 10)));
														if (BIGNUMP(BgL_aux2291z00_3580))
															{	/* Ieee/fixnum.scm 1559 */
																BgL_res1947z00_2811 = BgL_aux2291z00_3580;
															}
														else
															{
																obj_t BgL_auxz00_6781;

																BgL_auxz00_6781 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																	BINT(((long) 68147)),
																	BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
																	BGl_string2319z00zz__r4_numbers_6_5_fixnumz00,
																	BgL_aux2291z00_3580);
																FAILURE(BgL_auxz00_6781, BFALSE, BFALSE);
										}}}}
										return BgL_res1947z00_2811;
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Ieee/fixnum.scm 1559 */
								obj_t BgL_radixz00_1202;

								BgL_radixz00_1202 =
									VECTOR_REF(BgL_optz00_211, (int) (((long) 1)));
								{	/* Ieee/fixnum.scm 1559 */

									{	/* Ieee/fixnum.scm 1559 */
										obj_t BgL_arg1744z00_1203;

										BgL_arg1744z00_1203 =
											VECTOR_REF(BgL_optz00_211, (int) (((long) 0)));
										{	/* Ieee/fixnum.scm 1559 */
											obj_t BgL_res1948z00_2820;

											{	/* Ieee/fixnum.scm 1559 */
												obj_t BgL_stringz00_2812;

												long BgL_radixz00_2813;

												if (STRINGP(BgL_arg1744z00_1203))
													{	/* Ieee/fixnum.scm 1559 */
														BgL_stringz00_2812 = BgL_arg1744z00_1203;
													}
												else
													{
														obj_t BgL_auxz00_6791;

														BgL_auxz00_6791 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
															BINT(((long) 68147)),
															BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
															BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
															BgL_arg1744z00_1203);
														FAILURE(BgL_auxz00_6791, BFALSE, BFALSE);
													}
												{	/* Ieee/fixnum.scm 1559 */
													obj_t BgL_auxz00_6795;

													if (INTEGERP(BgL_radixz00_1202))
														{	/* Ieee/fixnum.scm 1559 */
															BgL_auxz00_6795 = BgL_radixz00_1202;
														}
													else
														{
															obj_t BgL_auxz00_6798;

															BgL_auxz00_6798 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																BINT(((long) 68147)),
																BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
																BgL_radixz00_1202);
															FAILURE(BgL_auxz00_6798, BFALSE, BFALSE);
														}
													BgL_radixz00_2813 = (long) CINT(BgL_auxz00_6795);
												}
												{	/* Ieee/fixnum.scm 1559 */
													bool_t BgL_testz00_6803;

													if ((BgL_radixz00_2813 >= ((long) 2)))
														{	/* Ieee/fixnum.scm 1559 */
															BgL_testz00_6803 =
																(BgL_radixz00_2813 <= ((long) 36));
														}
													else
														{	/* Ieee/fixnum.scm 1559 */
															BgL_testz00_6803 = ((bool_t) 0);
														}
													if (BgL_testz00_6803)
														{	/* Ieee/fixnum.scm 1559 */
															BgL_res1948z00_2820 =
																bgl_string_to_bignum(BSTRING_TO_STRING
																(BgL_stringz00_2812),
																(int) (BgL_radixz00_2813));
														}
													else
														{	/* Ieee/fixnum.scm 1559 */
															obj_t BgL_aux2297z00_3586;

															BgL_aux2297z00_3586 =
																BGl_errorz00zz__errorz00
																(BGl_string2444z00zz__r4_numbers_6_5_fixnumz00,
																BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
																BINT(BgL_radixz00_2813));
															if (BIGNUMP(BgL_aux2297z00_3586))
																{	/* Ieee/fixnum.scm 1559 */
																	BgL_res1948z00_2820 = BgL_aux2297z00_3586;
																}
															else
																{
																	obj_t BgL_auxz00_6814;

																	BgL_auxz00_6814 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
																		BINT(((long) 68147)),
																		BGl_string2443z00zz__r4_numbers_6_5_fixnumz00,
																		BGl_string2319z00zz__r4_numbers_6_5_fixnumz00,
																		BgL_aux2297z00_3586);
																	FAILURE(BgL_auxz00_6814, BFALSE, BFALSE);
											}}}}
											return BgL_res1948z00_2820;
										}
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



/* string->bignum */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2ze3bignumz31zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_stringz00_209, long BgL_radixz00_210)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1559 */
			{	/* Ieee/fixnum.scm 1560 */
				bool_t BgL_testz00_6820;

				if ((BgL_radixz00_210 >= ((long) 2)))
					{	/* Ieee/fixnum.scm 1560 */
						BgL_testz00_6820 = (BgL_radixz00_210 <= ((long) 36));
					}
				else
					{	/* Ieee/fixnum.scm 1560 */
						BgL_testz00_6820 = ((bool_t) 0);
					}
				if (BgL_testz00_6820)
					{	/* Ieee/fixnum.scm 1560 */
						return
							bgl_string_to_bignum(BSTRING_TO_STRING(BgL_stringz00_209),
							(int) (BgL_radixz00_210));
					}
				else
					{	/* Ieee/fixnum.scm 1560 */
						return
							BGl_errorz00zz__errorz00
							(BGl_string2444z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2420z00zz__r4_numbers_6_5_fixnumz00,
							BINT(BgL_radixz00_210));
					}
			}
		}
	}



/* string->integer-obj */
	BGL_EXPORTED_DEF obj_t
		BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_stringz00_213, long BgL_radixz00_214)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1568 */
			return
				bgl_string_to_integer_obj(BSTRING_TO_STRING(BgL_stringz00_213),
				(int) (BgL_radixz00_214));
		}
	}



/* _string->integer-obj */
	obj_t BGl__stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3233, obj_t BgL_stringz00_3234, obj_t BgL_radixz00_3235)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1568 */
			{	/* Ieee/fixnum.scm 1569 */
				long BgL_auxz00_6839;

				obj_t BgL_auxz00_6832;

				{	/* Ieee/fixnum.scm 1569 */
					obj_t BgL_auxz00_6840;

					if (INTEGERP(BgL_radixz00_3235))
						{	/* Ieee/fixnum.scm 1569 */
							BgL_auxz00_6840 = BgL_radixz00_3235;
						}
					else
						{
							obj_t BgL_auxz00_6843;

							BgL_auxz00_6843 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 68614)),
								BGl_string2445z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
								BgL_radixz00_3235);
							FAILURE(BgL_auxz00_6843, BFALSE, BFALSE);
						}
					BgL_auxz00_6839 = (long) CINT(BgL_auxz00_6840);
				}
				if (STRINGP(BgL_stringz00_3234))
					{	/* Ieee/fixnum.scm 1569 */
						BgL_auxz00_6832 = BgL_stringz00_3234;
					}
				else
					{
						obj_t BgL_auxz00_6835;

						BgL_auxz00_6835 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 68614)),
							BGl_string2445z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2424z00zz__r4_numbers_6_5_fixnumz00,
							BgL_stringz00_3234);
						FAILURE(BgL_auxz00_6835, BFALSE, BFALSE);
					}
				return
					BGl_stringzd2ze3integerzd2objze3zz__r4_numbers_6_5_fixnumz00
					(BgL_auxz00_6832, BgL_auxz00_6839);
			}
		}
	}



/* random */
	BGL_EXPORTED_DEF long BGl_randomz00zz__r4_numbers_6_5_fixnumz00(long
		BgL_maxz00_215)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1574 */
			{	/* Ieee/fixnum.scm 1575 */
				int BgL_arg1747z00_3744;

				BgL_arg1747z00_3744 = rand();
				return
					BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
					(long) (BgL_arg1747z00_3744), BgL_maxz00_215);
		}}
	}



/* _random */
	obj_t BGl__randomz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3236,
		obj_t BgL_maxz00_3237)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1574 */
			{	/* Ieee/fixnum.scm 1575 */
				long BgL_auxz00_6852;

				{	/* Ieee/fixnum.scm 1575 */
					long BgL_res2453z00_3747;

					{	/* Ieee/fixnum.scm 1575 */
						long BgL_maxz00_3745;

						{	/* Ieee/fixnum.scm 1575 */
							obj_t BgL_auxz00_6853;

							if (INTEGERP(BgL_maxz00_3237))
								{	/* Ieee/fixnum.scm 1575 */
									BgL_auxz00_6853 = BgL_maxz00_3237;
								}
							else
								{
									obj_t BgL_auxz00_6856;

									BgL_auxz00_6856 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
										BINT(((long) 68921)),
										BGl_string2446z00zz__r4_numbers_6_5_fixnumz00,
										BGl_string2311z00zz__r4_numbers_6_5_fixnumz00,
										BgL_maxz00_3237);
									FAILURE(BgL_auxz00_6856, BFALSE, BFALSE);
								}
							BgL_maxz00_3745 = (long) CINT(BgL_auxz00_6853);
						}
						{	/* Ieee/fixnum.scm 1575 */
							int BgL_arg1747z00_3746;

							BgL_arg1747z00_3746 = rand();
							BgL_res2453z00_3747 =
								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
								(long) (BgL_arg1747z00_3746), BgL_maxz00_3745);
					}}
					BgL_auxz00_6852 = BgL_res2453z00_3747;
				}
				return BINT(BgL_auxz00_6852);
			}
		}
	}



/* randombx */
	BGL_EXPORTED_DEF obj_t BGl_randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_maxz00_216)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1580 */
			return bgl_rand_bignum(BgL_maxz00_216);
		}
	}



/* _randombx */
	obj_t BGl__randombxz00zz__r4_numbers_6_5_fixnumz00(obj_t BgL_envz00_3238,
		obj_t BgL_maxz00_3239)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1580 */
			{	/* Ieee/fixnum.scm 1581 */
				obj_t BgL_maxz00_3748;

				if (BIGNUMP(BgL_maxz00_3239))
					{	/* Ieee/fixnum.scm 1581 */
						BgL_maxz00_3748 = BgL_maxz00_3239;
					}
				else
					{
						obj_t BgL_auxz00_6868;

						BgL_auxz00_6868 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
							BINT(((long) 69199)),
							BGl_string2447z00zz__r4_numbers_6_5_fixnumz00,
							BGl_string2319z00zz__r4_numbers_6_5_fixnumz00, BgL_maxz00_3239);
						FAILURE(BgL_auxz00_6868, BFALSE, BFALSE);
					}
				return bgl_rand_bignum(BgL_maxz00_3748);
			}
		}
	}



/* seed-random! */
	BGL_EXPORTED_DEF obj_t BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(int
		BgL_seedz00_217)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1586 */
			bgl_seed_rand((long) (BgL_seedz00_217));
			BUNSPEC;
			return BINT(BgL_seedz00_217);
		}
	}



/* _seed-random! */
	obj_t BGl__seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(obj_t
		BgL_envz00_3240, obj_t BgL_seedz00_3241)
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 1586 */
			{	/* Ieee/fixnum.scm 1588 */
				int BgL_auxz00_6876;

				{	/* Ieee/fixnum.scm 1588 */
					obj_t BgL_auxz00_6877;

					if (INTEGERP(BgL_seedz00_3241))
						{	/* Ieee/fixnum.scm 1588 */
							BgL_auxz00_6877 = BgL_seedz00_3241;
						}
					else
						{
							obj_t BgL_auxz00_6880;

							BgL_auxz00_6880 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2309z00zz__r4_numbers_6_5_fixnumz00,
								BINT(((long) 69489)),
								BGl_string2448z00zz__r4_numbers_6_5_fixnumz00,
								BGl_string2449z00zz__r4_numbers_6_5_fixnumz00,
								BgL_seedz00_3241);
							FAILURE(BgL_auxz00_6880, BFALSE, BFALSE);
						}
					BgL_auxz00_6876 = CINT(BgL_auxz00_6877);
				}
				return
					BGl_seedzd2randomz12zc0zz__r4_numbers_6_5_fixnumz00(BgL_auxz00_6876);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_numbers_6_5_fixnumz00()
	{
		AN_OBJECT;
		{	/* Ieee/fixnum.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2450z00zz__r4_numbers_6_5_fixnumz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2450z00zz__r4_numbers_6_5_fixnumz00));
			return
				BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2450z00zz__r4_numbers_6_5_fixnumz00));
		}
	}

#ifdef __cplusplus
}
#endif
