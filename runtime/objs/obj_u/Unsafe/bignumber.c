/*===========================================================================*/
/*   (Unsafe/bignumber.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/bignumber.scm -indent -o objs/obj_u/Unsafe/bignumber.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

/* User header */
#if( BGL_HAVE_GMP == 0 )
#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t bgl_bignum_lcm(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_add(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_long_to_bignum(long);
	BGL_EXPORTED_DECL obj_t bgl_seed_rand(long);
	BGL_EXPORTED_DECL bool_t BXPOSITIVE(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL bool_t bgl_bignum_odd(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_remainder(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__bignumz00 = BUNSPEC;
	static obj_t BGl_symbol3190z00zz__bignumz00 = BUNSPEC;
	extern bool_t BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__bignumz00();
	static obj_t BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_sub(obj_t, obj_t);
	static obj_t BGl__z42elongzd2ze3bignumz73zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42fixnumzd2ze3bignumz73zz__bignumz00(obj_t, obj_t);
	extern obj_t BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl__z42za7erobxzf3z16zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42negativebxzf3zb1zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_gcd(obj_t, obj_t);
	static obj_t BGl__z42bignumzd2cmpz90zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2u16vectorzd2zz__srfi4z00(long, obj_t);
	extern long BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		obj_t);
	extern obj_t BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	static obj_t BGl_convertz00zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2randomzd2u8vectorz00zz__bignumz00(obj_t);
	BGL_EXPORTED_DECL double bgl_bignum_to_flonum(obj_t);
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_abs(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__bignumz00();
	static obj_t BGl_preallocatedzd2bignumszd2zz__bignumz00 = BUNSPEC;
	static bool_t BGl_z42zc3bxz81zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BXNEGATIVE(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__bignumz00();
	static obj_t BGl_z42fixnumzd2ze3bignumzd2freshza1zz__bignumz00(long);
	BGL_EXPORTED_DECL obj_t bgl_elong_to_bignum(long);
	static obj_t BGl__z42negbxz42zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__czd2bignumzd2ze3stringze3zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_make_bignum(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static long BGl_bignumzd2integerzd2lengthz00zz__bignumz00(obj_t);
	static obj_t BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t bgl_string_to_bignum(char *, int);
	static obj_t BGl_bignumzd2subzd2nonnegz00zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_bignumzd2signzd2setz12z12zz__bignumz00(obj_t, int);
	static obj_t BGl__z42bignumzd2ze3flonumz73zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_bignumzd2za7eroz75zz__bignumz00 = BUNSPEC;
	BGL_EXPORTED_DECL long bgl_bignum_to_long(obj_t);
	static obj_t BGl__z42randbxz42zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_flonum_to_bignum(double);
	static obj_t BGl__z42divrembxz42zz__bignumz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__bignumz00();
	static obj_t BGl_bignumzd2addzd2nonnegz00zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42oddbxzf3zb1zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t bgl_bignum_even(obj_t);
	static obj_t BGl__z42stringzd2ze3bignumz73zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	static obj_t BGl__z42lcmbxz42zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z42za2bxze0zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z42bignumzd2ze3fixnumz73zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42flonumzd2ze3bignumz73zz__bignumz00(obj_t, obj_t);
	static obj_t BGl_bignumzd2sum2zd2zz__bignumz00(obj_t, obj_t, unsigned short,
		obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_quotient(obj_t, obj_t);
	static obj_t BGl_list3202z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3203z00zz__bignumz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_string_to_integer_obj(char *, long);
	static obj_t BGl_list3204z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3205z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3206z00zz__bignumz00 = BUNSPEC;
	extern obj_t string_to_bstring(char *);
	static obj_t BGl_list3207z00zz__bignumz00 = BUNSPEC;
	static obj_t BGl_list3199z00zz__bignumz00 = BUNSPEC;
	static unsigned short BGl_bignumzd2signzd2zz__bignumz00(obj_t);
	static obj_t BGl__z42zb2bxzf0zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z42llongzd2ze3bignumz73zz__bignumz00(obj_t, obj_t);
	static long BGl_bignumzd2minzd2fixnumzd2divzd2radixz00zz__bignumz00();
	static obj_t BGl__z42stringzd2ze3integerzd2objza1zz__bignumz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__z42seedzd2randz90zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_bignum_neg(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_bignumzd2shrinkzd2zz__bignumz00(obj_t, long);
	extern long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	static obj_t BGl__z42evenbxzf3zb1zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42zd2bxz90zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl__z42gcdbxz42zz__bignumz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, obj_t);
	static obj_t BGl_bignumzd2divzd2zz__bignumz00(obj_t, obj_t);
	static obj_t BGl__z42absbxz42zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_llong_to_bignum(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL obj_t bgl_bignum_to_string(obj_t, long);
	BGL_EXPORTED_DECL obj_t bgl_bignum_mul(obj_t, obj_t);
	static obj_t BGl__z42positivebxzf3zb1zz__bignumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int bgl_bignum_cmp(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BXZERO(obj_t);
	static long BGl_bignumzd2lengthzd2zz__bignumz00(obj_t);
	static obj_t BGl__z42remainderbxz42zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t bgl_bignum_div(obj_t, obj_t);
	extern obj_t BGl_u8vectorzd2ze3listz31zz__srfi4z00(obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__bignumz00();
	BGL_EXPORTED_DECL obj_t bgl_rand_bignum(obj_t);
	static obj_t BGl__z42quotientbxz42zz__bignumz00(obj_t, obj_t, obj_t);
	static obj_t BGl_bignumzd2exptzd2zz__bignumz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42absbxzd2envz90zz__bignumz00,
		BgL_bgl__za742absbxza742za7za7__3217z00, BGl__z42absbxz42zz__bignumz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42llongzd2ze3bignumzd2envza1zz__bignumz00,
		BgL_bgl__za742llongza7d2za7e3b3218za7,
		BGl__z42llongzd2ze3bignumz73zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42oddbxzf3zd2envz63zz__bignumz00,
		BgL_bgl__za742oddbxza7f3za7b1za73219z00, BGl__z42oddbxzf3zb1zz__bignumz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42flonumzd2ze3bignumzd2envza1zz__bignumz00,
		BgL_bgl__za742flonumza7d2za7e33220za7,
		BGl__z42flonumzd2ze3bignumz73zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42positivebxzf3zd2envz63zz__bignumz00,
		BgL_bgl__za742positivebxza7f3221z00, BGl__z42positivebxzf3zb1zz__bignumz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42seedzd2randzd2envz42zz__bignumz00,
		BgL_bgl__za742seedza7d2randza73222za7, BGl__z42seedzd2randz90zz__bignumz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42bignumzd2cmpzd2envz42zz__bignumz00,
		BgL_bgl__za742bignumza7d2cmp3223z00, BGl__z42bignumzd2cmpz90zz__bignumz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42bignumzd2ze3fixnumzd2envza1zz__bignumz00,
		BgL_bgl__za742bignumza7d2za7e33224za7,
		BGl__z42bignumzd2ze3fixnumz73zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42za7erobxzf3zd2envzc4zz__bignumz00,
		BgL_bgl__za742za7a7erobxza7f3za73225z00,
		BGl__z42za7erobxzf3z16zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42negbxzd2envz90zz__bignumz00,
		BgL_bgl__za742negbxza742za7za7__3226z00, BGl__z42negbxz42zz__bignumz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3170z00zz__bignumz00,
		BgL_bgl_string3170za700za7za7_3227za7,
		"/tmp/bigloo/runtime/Unsafe/bignumber.scm", 40);
	      DEFINE_STRING(BGl_string3171z00zz__bignumz00,
		BgL_bgl_string3171za700za7za7_3228za7, "_$string->integer-obj", 21);
	      DEFINE_STRING(BGl_string3172z00zz__bignumz00,
		BgL_bgl_string3172za700za7za7_3229za7, "string", 6);
	      DEFINE_STRING(BGl_string3173z00zz__bignumz00,
		BgL_bgl_string3173za700za7za7_3230za7, "long", 4);
	      DEFINE_STRING(BGl_string3174z00zz__bignumz00,
		BgL_bgl_string3174za700za7za7_3231za7, "_$elong->bignum", 15);
	      DEFINE_STRING(BGl_string3175z00zz__bignumz00,
		BgL_bgl_string3175za700za7za7_3232za7, "elong", 5);
	      DEFINE_STRING(BGl_string3176z00zz__bignumz00,
		BgL_bgl_string3176za700za7za7_3233za7, "_$llong->bignum", 15);
	      DEFINE_STRING(BGl_string3177z00zz__bignumz00,
		BgL_bgl_string3177za700za7za7_3234za7, "llong", 5);
	      DEFINE_STRING(BGl_string3178z00zz__bignumz00,
		BgL_bgl_string3178za700za7za7_3235za7, "_$fixnum->bignum", 16);
	      DEFINE_STRING(BGl_string3180z00zz__bignumz00,
		BgL_bgl_string3180za700za7za7_3236za7, "bignum", 6);
	      DEFINE_STRING(BGl_string3179z00zz__bignumz00,
		BgL_bgl_string3179za700za7za7_3237za7, "_$zerobx?", 9);
	      DEFINE_STRING(BGl_string3181z00zz__bignumz00,
		BgL_bgl_string3181za700za7za7_3238za7, "_$negativebx?", 13);
	      DEFINE_STRING(BGl_string3182z00zz__bignumz00,
		BgL_bgl_string3182za700za7za7_3239za7, "_$positivebx?", 13);
	      DEFINE_STRING(BGl_string3183z00zz__bignumz00,
		BgL_bgl_string3183za700za7za7_3240za7, "_$evenbx?", 9);
	      DEFINE_STRING(BGl_string3184z00zz__bignumz00,
		BgL_bgl_string3184za700za7za7_3241za7, "_$oddbx?", 8);
	      DEFINE_STRING(BGl_string3185z00zz__bignumz00,
		BgL_bgl_string3185za700za7za7_3242za7, "_$bignum-cmp", 12);
	      DEFINE_STRING(BGl_string3186z00zz__bignumz00,
		BgL_bgl_string3186za700za7za7_3243za7, "_$+bx", 5);
	      DEFINE_STRING(BGl_string3187z00zz__bignumz00,
		BgL_bgl_string3187za700za7za7_3244za7, "_$-bx", 5);
	      DEFINE_STRING(BGl_string3188z00zz__bignumz00,
		BgL_bgl_string3188za700za7za7_3245za7, "_$negbx", 7);
	      DEFINE_STRING(BGl_string3200z00zz__bignumz00,
		BgL_bgl_string3200za700za7za7_3246za7,
		"0123456789abcdefghijklmnopqrstuvwxyz", 36);
	      DEFINE_STRING(BGl_string3189z00zz__bignumz00,
		BgL_bgl_string3189za700za7za7_3247za7, "_$*bx", 5);
	      DEFINE_STRING(BGl_string3201z00zz__bignumz00,
		BgL_bgl_string3201za700za7za7_3248za7, "_c-bignum->string", 17);
	      DEFINE_STRING(BGl_string3191z00zz__bignumz00,
		BgL_bgl_string3191za700za7za7_3249za7, "/bx", 3);
	      DEFINE_STRING(BGl_string3192z00zz__bignumz00,
		BgL_bgl_string3192za700za7za7_3250za7, "divide by zero", 14);
	      DEFINE_STRING(BGl_string3193z00zz__bignumz00,
		BgL_bgl_string3193za700za7za7_3251za7, "_$divrembx", 10);
	      DEFINE_STRING(BGl_string3194z00zz__bignumz00,
		BgL_bgl_string3194za700za7za7_3252za7, "_$quotientbx", 12);
	      DEFINE_STRING(BGl_string3195z00zz__bignumz00,
		BgL_bgl_string3195za700za7za7_3253za7, "_$remainderbx", 13);
	      DEFINE_STRING(BGl_string3196z00zz__bignumz00,
		BgL_bgl_string3196za700za7za7_3254za7, "_$absbx", 7);
	      DEFINE_STRING(BGl_string3197z00zz__bignumz00,
		BgL_bgl_string3197za700za7za7_3255za7, "_$gcdbx", 7);
	      DEFINE_STRING(BGl_string3208z00zz__bignumz00,
		BgL_bgl_string3208za700za7za7_3256za7, "_$string->bignum", 16);
	      DEFINE_STRING(BGl_string3198z00zz__bignumz00,
		BgL_bgl_string3198za700za7za7_3257za7, "_$lcmbx", 7);
	      DEFINE_STRING(BGl_string3210z00zz__bignumz00,
		BgL_bgl_string3210za700za7za7_3258za7, "_$bignum->fixnum", 16);
	      DEFINE_STRING(BGl_string3209z00zz__bignumz00,
		BgL_bgl_string3209za700za7za7_3259za7, "int", 3);
	      DEFINE_STRING(BGl_string3211z00zz__bignumz00,
		BgL_bgl_string3211za700za7za7_3260za7, "_$seed-rand", 11);
	      DEFINE_STRING(BGl_string3212z00zz__bignumz00,
		BgL_bgl_string3212za700za7za7_3261za7, "_$randbx", 8);
	      DEFINE_STRING(BGl_string3213z00zz__bignumz00,
		BgL_bgl_string3213za700za7za7_3262za7, "_$flonum->bignum", 16);
	      DEFINE_STRING(BGl_string3214z00zz__bignumz00,
		BgL_bgl_string3214za700za7za7_3263za7, "double", 6);
	      DEFINE_STRING(BGl_string3215z00zz__bignumz00,
		BgL_bgl_string3215za700za7za7_3264za7, "_$bignum->flonum", 16);
	      DEFINE_STRING(BGl_string3216z00zz__bignumz00,
		BgL_bgl_string3216za700za7za7_3265za7, "__bignum", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42evenbxzf3zd2envz63zz__bignumz00,
		BgL_bgl__za742evenbxza7f3za7b13266za7, BGl__z42evenbxzf3zb1zz__bignumz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42elongzd2ze3bignumzd2envza1zz__bignumz00,
		BgL_bgl__za742elongza7d2za7e3b3267za7,
		BGl__z42elongzd2ze3bignumz73zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42zd2bxzd2envz42zz__bignumz00,
		BgL_bgl__za742za7d2bxza790za7za7__3268za7, BGl__z42zd2bxz90zz__bignumz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42stringzd2ze3bignumzd2envza1zz__bignumz00,
		BgL_bgl__za742stringza7d2za7e33269za7,
		BGl__z42stringzd2ze3bignumz73zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42zb2bxzd2envz22zz__bignumz00,
		BgL_bgl__za742za7b2bxza7f0za7za7__3270za7, BGl__z42zb2bxzf0zz__bignumz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42za2bxzd2envz32zz__bignumz00,
		BgL_bgl__za742za7a2bxza7e0za7za7__3271za7, BGl__z42za2bxze0zz__bignumz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42randbxzd2envz90zz__bignumz00,
		BgL_bgl__za742randbxza742za7za7_3272z00, BGl__z42randbxz42zz__bignumz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42divrembxzd2envz90zz__bignumz00,
		BgL_bgl__za742divrembxza742za73273za7, BGl__z42divrembxz42zz__bignumz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42quotientbxzd2envz90zz__bignumz00,
		BgL_bgl__za742quotientbxza743274z00, BGl__z42quotientbxz42zz__bignumz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42fixnumzd2ze3bignumzd2envza1zz__bignumz00,
		BgL_bgl__za742fixnumza7d2za7e33275za7,
		BGl__z42fixnumzd2ze3bignumz73zz__bignumz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_czd2bignumzd2ze3stringzd2envz31zz__bignumz00,
		BgL_bgl__cza7d2bignumza7d2za7e3276za7,
		BGl__czd2bignumzd2ze3stringze3zz__bignumz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z42stringzd2ze3integerzd2objzd2envz73zz__bignumz00,
		BgL_bgl__za742stringza7d2za7e33277za7,
		BGl__z42stringzd2ze3integerzd2objza1zz__bignumz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42lcmbxzd2envz90zz__bignumz00,
		BgL_bgl__za742lcmbxza742za7za7__3278z00, BGl__z42lcmbxz42zz__bignumz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42bignumzd2ze3flonumzd2envza1zz__bignumz00,
		BgL_bgl__za742bignumza7d2za7e33279za7,
		BGl__z42bignumzd2ze3flonumz73zz__bignumz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42negativebxzf3zd2envz63zz__bignumz00,
		BgL_bgl__za742negativebxza7f3280z00, BGl__z42negativebxzf3zb1zz__bignumz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42remainderbxzd2envz90zz__bignumz00,
		BgL_bgl__za742remainderbxza73281z00, BGl__z42remainderbxz42zz__bignumz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42gcdbxzd2envz90zz__bignumz00,
		BgL_bgl__za742gcdbxza742za7za7__3282z00, BGl__z42gcdbxz42zz__bignumz00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long
		BgL_checksumz00_4781, char *BgL_fromz00_4782)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bignumz00))
				{
					BGl_requirezd2initializa7ationz75zz__bignumz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__bignumz00();
					BGl_importedzd2moduleszd2initz00zz__bignumz00();
					BGl_toplevelzd2initzd2zz__bignumz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 45 */
			BGl_symbol3190z00zz__bignumz00 =
				bstring_to_symbol(BGl_string3191z00zz__bignumz00);
			BGl_list3199z00zz__bignumz00 = MAKE_PAIR(BINT(((long) 0)), BNIL);
			BGl_list3202z00zz__bignumz00 =
				MAKE_PAIR(BCHAR(((unsigned char) '+')),
				MAKE_PAIR(BCHAR(((unsigned char) '-')), BNIL));
			BGl_list3204z00zz__bignumz00 =
				MAKE_PAIR(BCHAR(((unsigned char) 'x')), BINT(((long) 16)));
			BGl_list3205z00zz__bignumz00 =
				MAKE_PAIR(BCHAR(((unsigned char) 'd')), BINT(((long) 10)));
			BGl_list3206z00zz__bignumz00 =
				MAKE_PAIR(BCHAR(((unsigned char) 'o')), BINT(((long) 8)));
			BGl_list3207z00zz__bignumz00 =
				MAKE_PAIR(BCHAR(((unsigned char) 'b')), BINT(((long) 2)));
			return (BGl_list3203z00zz__bignumz00 =
				MAKE_PAIR(BGl_list3204z00zz__bignumz00,
					MAKE_PAIR(BGl_list3205z00zz__bignumz00,
						MAKE_PAIR(BGl_list3206z00zz__bignumz00,
							MAKE_PAIR(BGl_list3207z00zz__bignumz00, BNIL)))), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 45 */
			{	/* Unsafe/bignumber.scm 319 */
				obj_t BgL_vz00_956;

				BgL_vz00_956 = make_vector((int) (((long) 33)), BFALSE);
				{
					long BgL_iz00_2595;

					long BgL_nz00_2596;

					BgL_iz00_2595 = ((long) 0);
					BgL_nz00_2596 = ((long) -16);
				BgL_loopz00_2594:
					if ((((long) 16) < BgL_nz00_2596))
						{	/* Unsafe/bignumber.scm 320 */
							BGl_preallocatedzd2bignumszd2zz__bignumz00 = BgL_vz00_956;
						}
					else
						{	/* Unsafe/bignumber.scm 320 */
							VECTOR_SET(BgL_vz00_956,
								(int) (BgL_iz00_2595),
								BGl_z42fixnumzd2ze3bignumzd2freshza1zz__bignumz00
								(BgL_nz00_2596));
							{
								long BgL_nz00_4821;

								long BgL_iz00_4819;

								BgL_iz00_4819 = (BgL_iz00_2595 + ((long) 1));
								BgL_nz00_4821 = (BgL_nz00_2596 + ((long) 1));
								BgL_nz00_2596 = BgL_nz00_4821;
								BgL_iz00_2595 = BgL_iz00_4819;
								goto BgL_loopz00_2594;
							}
						}
				}
			}
			return (BGl_bignumzd2za7eroz75zz__bignumz00 =
				bgl_long_to_bignum(((long) 0)), BUNSPEC);
		}
	}



/* $string->integer-obj */
	BGL_EXPORTED_DEF obj_t bgl_string_to_integer_obj(char *BgL_strz00_1,
		long BgL_radixz00_2)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 158 */
			{	/* Unsafe/bignumber.scm 159 */
				obj_t BgL_list1922z00_4777;

				BgL_list1922z00_4777 = MAKE_PAIR(BINT(BgL_radixz00_2), BNIL);
				return
					BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
					(string_to_bstring(BgL_strz00_1), BgL_list1922z00_4777));
			}
		}
	}



/* _$string->integer-obj */
	obj_t BGl__z42stringzd2ze3integerzd2objza1zz__bignumz00(obj_t BgL_envz00_4633,
		obj_t BgL_strz00_4634, obj_t BgL_radixz00_4635)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 158 */
			{	/* Unsafe/bignumber.scm 159 */
				char *BgL_strz00_4778;

				long BgL_radixz00_4779;

				{	/* Unsafe/bignumber.scm 159 */
					obj_t BgL_auxz00_4829;

					if (STRINGP(BgL_strz00_4634))
						{	/* Unsafe/bignumber.scm 159 */
							BgL_auxz00_4829 = BgL_strz00_4634;
						}
					else
						{
							obj_t BgL_auxz00_4832;

							BgL_auxz00_4832 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 7291)), BGl_string3171z00zz__bignumz00,
								BGl_string3172z00zz__bignumz00, BgL_strz00_4634);
							FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
						}
					BgL_strz00_4778 = BSTRING_TO_STRING(BgL_auxz00_4829);
				}
				{	/* Unsafe/bignumber.scm 159 */
					obj_t BgL_auxz00_4837;

					if (INTEGERP(BgL_radixz00_4635))
						{	/* Unsafe/bignumber.scm 159 */
							BgL_auxz00_4837 = BgL_radixz00_4635;
						}
					else
						{
							obj_t BgL_auxz00_4840;

							BgL_auxz00_4840 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 7291)), BGl_string3171z00zz__bignumz00,
								BGl_string3173z00zz__bignumz00, BgL_radixz00_4635);
							FAILURE(BgL_auxz00_4840, BFALSE, BFALSE);
						}
					BgL_radixz00_4779 = (long) CINT(BgL_auxz00_4837);
				}
				{	/* Unsafe/bignumber.scm 159 */
					obj_t BgL_list1922z00_4780;

					BgL_list1922z00_4780 = MAKE_PAIR(BINT(BgL_radixz00_4779), BNIL);
					return
						BINT(BGl_stringzd2ze3integerz31zz__r4_numbers_6_5_fixnumz00
						(string_to_bstring(BgL_strz00_4778), BgL_list1922z00_4780));
				}
			}
		}
	}



/* bignum-min-fixnum-div-radix */
	long BGl_bignumzd2minzd2fixnumzd2divzd2radixz00zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 191 */
			{	/* Unsafe/bignumber.scm 192 */
				long BgL_auxz00_4850;

				BgL_auxz00_4850 = (((long) -2) * (((long) 1) << (int) (((long) 28))));
				return (BgL_auxz00_4850 / ((long) 16384));
		}}
	}



/* bignum-length */
	long BGl_bignumzd2lengthzd2zz__bignumz00(obj_t BgL_bnz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 213 */
			{	/* Unsafe/bignumber.scm 214 */
				obj_t BgL_arg1955z00_2670;

				BgL_arg1955z00_2670 = BGL_BIGNUM_U16VECT(BgL_bnz00_4);
				return BGL_HVECTOR_LENGTH(BgL_arg1955z00_2670);
			}
		}
	}



/* bignum-sign */
	unsigned short BGl_bignumzd2signzd2zz__bignumz00(obj_t BgL_bnz00_5)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 215 */
			{	/* Unsafe/bignumber.scm 216 */
				obj_t BgL_arg1956z00_2672;

				BgL_arg1956z00_2672 = BGL_BIGNUM_U16VECT(BgL_bnz00_5);
				return BGL_U16VREF(BgL_arg1956z00_2672, ((long) 0));
		}}
	}



/* bignum-sign-set! */
	obj_t BGl_bignumzd2signzd2setz12z12zz__bignumz00(obj_t BgL_bnz00_6,
		int BgL_signz00_7)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 217 */
			{	/* Unsafe/bignumber.scm 218 */
				obj_t BgL_arg1958z00_2674;

				BgL_arg1958z00_2674 = BGL_BIGNUM_U16VECT(BgL_bnz00_6);
				{	/* Unsafe/bignumber.scm 218 */
					unsigned short BgL_auxz00_4860;

					BgL_auxz00_4860 = (unsigned short) (BgL_signz00_7);
					BGL_U16VSET(BgL_arg1958z00_2674, ((long) 0), BgL_auxz00_4860);
				}
				return BUNSPEC;
			}
		}
	}



/* bignum-shrink */
	obj_t BGl_bignumzd2shrinkzd2zz__bignumz00(obj_t BgL_xz00_15,
		long BgL_lenz00_16)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 231 */
			{	/* Unsafe/bignumber.scm 232 */
				obj_t BgL_yz00_1001;

				{	/* Unsafe/bignumber.scm 232 */
					obj_t BgL_res3020z00_2690;

					{	/* Unsafe/bignumber.scm 232 */
						int BgL_lenz00_2686;

						BgL_lenz00_2686 = (int) (BgL_lenz00_16);
						{	/* Unsafe/bignumber.scm 232 */
							obj_t BgL_arg1953z00_2687;

							{	/* Unsafe/bignumber.scm 232 */

								BgL_arg1953z00_2687 =
									BGl_makezd2u16vectorzd2zz__srfi4z00(
									(long) (BgL_lenz00_2686), BINT(((long) 0)));
							}
							BgL_res3020z00_2690 = bgl_make_bignum(BgL_arg1953z00_2687);
					}}
					BgL_yz00_1001 = BgL_res3020z00_2690;
				}
				{	/* Unsafe/bignumber.scm 233 */
					long BgL_g1827z00_1002;

					BgL_g1827z00_1002 = (BgL_lenz00_16 - ((long) 1));
					{
						long BgL_iz00_1004;

						BgL_iz00_1004 = BgL_g1827z00_1002;
					BgL_zc3anonymousza31962ze3z83_1005:
						if ((BgL_iz00_1004 < ((long) 0)))
							{	/* Unsafe/bignumber.scm 234 */
								return BgL_yz00_1001;
							}
						else
							{	/* Unsafe/bignumber.scm 234 */
								{	/* Unsafe/bignumber.scm 237 */
									unsigned short BgL_arg1965z00_1007;

									{	/* Unsafe/bignumber.scm 237 */
										int BgL_iz00_2696;

										BgL_iz00_2696 = (int) (BgL_iz00_1004);
										{	/* Unsafe/bignumber.scm 237 */
											obj_t BgL_arg1960z00_2697;

											BgL_arg1960z00_2697 = BGL_BIGNUM_U16VECT(BgL_xz00_15);
											{	/* Unsafe/bignumber.scm 237 */
												long BgL_auxz00_4873;

												BgL_auxz00_4873 = (long) (BgL_iz00_2696);
												BgL_arg1965z00_1007 =
													BGL_U16VREF(BgL_arg1960z00_2697, BgL_auxz00_4873);
									}}}
									{	/* Unsafe/bignumber.scm 237 */
										int BgL_iz00_2699;

										int BgL_digitz00_2700;

										BgL_iz00_2699 = (int) (BgL_iz00_1004);
										BgL_digitz00_2700 = (int) (BgL_arg1965z00_1007);
										{	/* Unsafe/bignumber.scm 237 */
											obj_t BgL_arg1961z00_2701;

											BgL_arg1961z00_2701 = BGL_BIGNUM_U16VECT(BgL_yz00_1001);
											{	/* Unsafe/bignumber.scm 237 */
												unsigned short BgL_auxz00_4881;

												long BgL_auxz00_4879;

												BgL_auxz00_4881 = (unsigned short) (BgL_digitz00_2700);
												BgL_auxz00_4879 = (long) (BgL_iz00_2699);
												BGL_U16VSET(BgL_arg1961z00_2701, BgL_auxz00_4879,
													BgL_auxz00_4881);
											} BUNSPEC;
								}}}
								{
									long BgL_iz00_4884;

									BgL_iz00_4884 = (BgL_iz00_1004 - ((long) 1));
									BgL_iz00_1004 = BgL_iz00_4884;
									goto BgL_zc3anonymousza31962ze3z83_1005;
								}
							}
					}
				}
			}
		}
	}



/* bignum-remove-leading-zeroes */
	obj_t BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00(obj_t
		BgL_xz00_17)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 240 */
			{	/* Unsafe/bignumber.scm 241 */
				unsigned short BgL_signz00_1010;

				{	/* Unsafe/bignumber.scm 241 */
					obj_t BgL_arg1956z00_2705;

					BgL_arg1956z00_2705 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
					BgL_signz00_1010 = BGL_U16VREF(BgL_arg1956z00_2705, ((long) 0));
				}
				{	/* Unsafe/bignumber.scm 242 */
					obj_t BgL_arg1958z00_2710;

					BgL_arg1958z00_2710 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
					{	/* Unsafe/bignumber.scm 242 */
						unsigned short BgL_auxz00_4889;

						BgL_auxz00_4889 = (unsigned short) (((long) 1));
						BGL_U16VSET(BgL_arg1958z00_2710, ((long) 0), BgL_auxz00_4889);
					} BUNSPEC;
				}
				{	/* Unsafe/bignumber.scm 243 */
					long BgL_g1828z00_1011;

					{	/* Unsafe/bignumber.scm 243 */
						long BgL_arg1979z00_1026;

						{	/* Unsafe/bignumber.scm 243 */
							obj_t BgL_arg1955z00_2713;

							BgL_arg1955z00_2713 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
							BgL_arg1979z00_1026 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_2713);
						}
						BgL_g1828z00_1011 = (BgL_arg1979z00_1026 - ((long) 1));
					}
					{
						long BgL_iz00_1013;

						BgL_iz00_1013 = BgL_g1828z00_1011;
					BgL_zc3anonymousza31967ze3z83_1014:
						{	/* Unsafe/bignumber.scm 244 */
							bool_t BgL_testz00_4895;

							{	/* Unsafe/bignumber.scm 244 */
								unsigned short BgL_arg1976z00_1023;

								{	/* Unsafe/bignumber.scm 244 */
									int BgL_iz00_2718;

									BgL_iz00_2718 = (int) (BgL_iz00_1013);
									{	/* Unsafe/bignumber.scm 244 */
										obj_t BgL_arg1960z00_2719;

										BgL_arg1960z00_2719 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
										{	/* Unsafe/bignumber.scm 244 */
											long BgL_auxz00_4898;

											BgL_auxz00_4898 = (long) (BgL_iz00_2718);
											BgL_arg1976z00_1023 =
												BGL_U16VREF(BgL_arg1960z00_2719, BgL_auxz00_4898);
								}}}
								BgL_testz00_4895 = ((long) (BgL_arg1976z00_1023) == ((long) 0));
							}
							if (BgL_testz00_4895)
								{
									long BgL_iz00_4903;

									BgL_iz00_4903 = (BgL_iz00_1013 - ((long) 1));
									BgL_iz00_1013 = BgL_iz00_4903;
									goto BgL_zc3anonymousza31967ze3z83_1014;
								}
							else
								{	/* Unsafe/bignumber.scm 244 */
									if ((BgL_iz00_1013 == ((long) 0)))
										{	/* Unsafe/bignumber.scm 246 */
											return BGl_bignumzd2za7eroz75zz__bignumz00;
										}
									else
										{	/* Unsafe/bignumber.scm 246 */
											{	/* Unsafe/bignumber.scm 249 */
												int BgL_signz00_2727;

												BgL_signz00_2727 = (int) (BgL_signz00_1010);
												{	/* Unsafe/bignumber.scm 249 */
													obj_t BgL_arg1958z00_2728;

													BgL_arg1958z00_2728 = BGL_BIGNUM_U16VECT(BgL_xz00_17);
													{	/* Unsafe/bignumber.scm 249 */
														unsigned short BgL_auxz00_4909;

														BgL_auxz00_4909 =
															(unsigned short) (BgL_signz00_2727);
														BGL_U16VSET(BgL_arg1958z00_2728, ((long) 0),
															BgL_auxz00_4909);
													} BUNSPEC;
											}}
											{	/* Unsafe/bignumber.scm 250 */
												bool_t BgL_testz00_4912;

												{	/* Unsafe/bignumber.scm 250 */
													long BgL_arg1973z00_1020;

													{	/* Unsafe/bignumber.scm 250 */
														long BgL_arg1974z00_1021;

														{	/* Unsafe/bignumber.scm 250 */
															obj_t BgL_arg1955z00_2731;

															BgL_arg1955z00_2731 =
																BGL_BIGNUM_U16VECT(BgL_xz00_17);
															BgL_arg1974z00_1021 =
																BGL_HVECTOR_LENGTH(BgL_arg1955z00_2731);
														}
														BgL_arg1973z00_1020 =
															(BgL_arg1974z00_1021 - ((long) 1));
													}
													BgL_testz00_4912 =
														(BgL_iz00_1013 == BgL_arg1973z00_1020);
												}
												if (BgL_testz00_4912)
													{	/* Unsafe/bignumber.scm 250 */
														return BgL_xz00_17;
													}
												else
													{	/* Unsafe/bignumber.scm 250 */
														return
															BGl_bignumzd2shrinkzd2zz__bignumz00(BgL_xz00_17,
															(BgL_iz00_1013 + ((long) 1)));
		}}}}}}}}}
	}



/* $fixnum->bignum-fresh */
	obj_t BGl_z42fixnumzd2ze3bignumzd2freshza1zz__bignumz00(long BgL_nz00_19)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 258 */
			{	/* Unsafe/bignumber.scm 259 */
				long BgL_negzd2nzd2_1028;

				if ((BgL_nz00_19 < ((long) 0)))
					{	/* Unsafe/bignumber.scm 259 */
						BgL_negzd2nzd2_1028 = BgL_nz00_19;
					}
				else
					{	/* Unsafe/bignumber.scm 259 */
						BgL_negzd2nzd2_1028 = (((long) 0) - BgL_nz00_19);
					}
				{
					long BgL_nbzd2digitszd2_1030;

					long BgL_xz00_1031;

					BgL_nbzd2digitszd2_1030 = ((long) 0);
					BgL_xz00_1031 = BgL_negzd2nzd2_1028;
				BgL_zc3anonymousza31981ze3z83_1032:
					if ((BgL_xz00_1031 == ((long) 0)))
						{	/* Unsafe/bignumber.scm 264 */
							obj_t BgL_rz00_1034;

							{	/* Unsafe/bignumber.scm 264 */
								long BgL_arg1993z00_1049;

								BgL_arg1993z00_1049 = (BgL_nbzd2digitszd2_1030 + ((long) 1));
								{	/* Unsafe/bignumber.scm 264 */
									obj_t BgL_res3021z00_2751;

									{	/* Unsafe/bignumber.scm 264 */
										int BgL_lenz00_2747;

										BgL_lenz00_2747 = (int) (BgL_arg1993z00_1049);
										{	/* Unsafe/bignumber.scm 264 */
											obj_t BgL_arg1953z00_2748;

											{	/* Unsafe/bignumber.scm 264 */

												BgL_arg1953z00_2748 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_2747), BINT(((long) 0)));
											}
											BgL_res3021z00_2751 =
												bgl_make_bignum(BgL_arg1953z00_2748);
									}}
									BgL_rz00_1034 = BgL_res3021z00_2751;
							}}
							if ((BgL_nz00_19 < ((long) 0)))
								{	/* Unsafe/bignumber.scm 266 */
									obj_t BgL_arg1958z00_2757;

									BgL_arg1958z00_2757 = BGL_BIGNUM_U16VECT(BgL_rz00_1034);
									{	/* Unsafe/bignumber.scm 266 */
										unsigned short BgL_auxz00_4933;

										BgL_auxz00_4933 = (unsigned short) (((long) 0));
										BGL_U16VSET(BgL_arg1958z00_2757, ((long) 0),
											BgL_auxz00_4933);
									} BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 267 */
									obj_t BgL_arg1958z00_2762;

									BgL_arg1958z00_2762 = BGL_BIGNUM_U16VECT(BgL_rz00_1034);
									{	/* Unsafe/bignumber.scm 267 */
										unsigned short BgL_auxz00_4937;

										BgL_auxz00_4937 = (unsigned short) (((long) 1));
										BGL_U16VSET(BgL_arg1958z00_2762, ((long) 0),
											BgL_auxz00_4937);
									} BUNSPEC;
								}
							{
								long BgL_iz00_1037;

								long BgL_xz00_1038;

								BgL_iz00_1037 = ((long) 1);
								BgL_xz00_1038 = BgL_negzd2nzd2_1028;
							BgL_zc3anonymousza31984ze3z83_1039:
								if ((BgL_xz00_1038 == ((long) 0)))
									{	/* Unsafe/bignumber.scm 269 */
										return BgL_rz00_1034;
									}
								else
									{	/* Unsafe/bignumber.scm 269 */
										{	/* Unsafe/bignumber.scm 274 */
											long BgL_arg1986z00_1041;

											{	/* Unsafe/bignumber.scm 274 */
												long BgL_arg1988z00_1043;

												{	/* Unsafe/bignumber.scm 274 */
													long BgL_auxz00_4942;

													BgL_auxz00_4942 = (((long) 1) << (int) (((long) 14)));
													BgL_arg1988z00_1043 =
														(BgL_xz00_1038 % BgL_auxz00_4942);
												}
												BgL_arg1986z00_1041 =
													(((long) 0) - BgL_arg1988z00_1043);
											}
											{	/* Unsafe/bignumber.scm 271 */
												int BgL_iz00_2773;

												int BgL_digitz00_2774;

												BgL_iz00_2773 = (int) (BgL_iz00_1037);
												BgL_digitz00_2774 = (int) (BgL_arg1986z00_1041);
												{	/* Unsafe/bignumber.scm 271 */
													obj_t BgL_arg1961z00_2775;

													BgL_arg1961z00_2775 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1034);
													{	/* Unsafe/bignumber.scm 271 */
														unsigned short BgL_auxz00_4952;

														long BgL_auxz00_4950;

														BgL_auxz00_4952 =
															(unsigned short) (BgL_digitz00_2774);
														BgL_auxz00_4950 = (long) (BgL_iz00_2773);
														BGL_U16VSET(BgL_arg1961z00_2775, BgL_auxz00_4950,
															BgL_auxz00_4952);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 275 */
											long BgL_arg1990z00_1045;

											long BgL_arg1991z00_1046;

											BgL_arg1990z00_1045 = (BgL_iz00_1037 + ((long) 1));
											{	/* Unsafe/bignumber.scm 275 */
												long BgL_auxz00_4956;

												BgL_auxz00_4956 = (((long) 1) << (int) (((long) 14)));
												BgL_arg1991z00_1046 = (BgL_xz00_1038 / BgL_auxz00_4956);
											}
											{
												long BgL_xz00_4961;

												long BgL_iz00_4960;

												BgL_iz00_4960 = BgL_arg1990z00_1045;
												BgL_xz00_4961 = BgL_arg1991z00_1046;
												BgL_xz00_1038 = BgL_xz00_4961;
												BgL_iz00_1037 = BgL_iz00_4960;
												goto BgL_zc3anonymousza31984ze3z83_1039;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 263 */
							long BgL_arg1994z00_1050;

							long BgL_arg1995z00_1051;

							BgL_arg1994z00_1050 = (BgL_nbzd2digitszd2_1030 + ((long) 1));
							{	/* Unsafe/bignumber.scm 263 */
								long BgL_auxz00_4963;

								BgL_auxz00_4963 = (((long) 1) << (int) (((long) 14)));
								BgL_arg1995z00_1051 = (BgL_xz00_1031 / BgL_auxz00_4963);
							}
							{
								long BgL_xz00_4968;

								long BgL_nbzd2digitszd2_4967;

								BgL_nbzd2digitszd2_4967 = BgL_arg1994z00_1050;
								BgL_xz00_4968 = BgL_arg1995z00_1051;
								BgL_xz00_1031 = BgL_xz00_4968;
								BgL_nbzd2digitszd2_1030 = BgL_nbzd2digitszd2_4967;
								goto BgL_zc3anonymousza31981ze3z83_1032;
							}
						}
				}
			}
		}
	}



/* $elong->bignum */
	BGL_EXPORTED_DEF obj_t bgl_elong_to_bignum(long BgL_nz00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 278 */
			{	/* Unsafe/bignumber.scm 279 */
				long BgL_negzd2nzd2_1055;

				if ((BgL_nz00_20 < ((long) 0)))
					{	/* Unsafe/bignumber.scm 279 */
						BgL_negzd2nzd2_1055 = BgL_nz00_20;
					}
				else
					{	/* Unsafe/bignumber.scm 279 */
						long BgL_res3022z00_2792;

						{	/* Unsafe/bignumber.scm 279 */
							long BgL_auxz00_4971;

							BgL_auxz00_4971 = (((long) 0) - BgL_nz00_20);
							BgL_res3022z00_2792 = LONG_TO_ELONG(BgL_auxz00_4971);
						}
						BgL_negzd2nzd2_1055 = BgL_res3022z00_2792;
					}
				{
					long BgL_nbzd2digitszd2_1057;

					long BgL_xz00_1058;

					BgL_nbzd2digitszd2_1057 = ((long) 0);
					BgL_xz00_1058 = BgL_negzd2nzd2_1055;
				BgL_zc3anonymousza31998ze3z83_1059:
					if ((BgL_xz00_1058 == LONG_TO_ELONG(((long) 0))))
						{	/* Unsafe/bignumber.scm 284 */
							obj_t BgL_rz00_1061;

							{	/* Unsafe/bignumber.scm 284 */
								long BgL_arg2012z00_1078;

								BgL_arg2012z00_1078 = (BgL_nbzd2digitszd2_1057 + ((long) 1));
								{	/* Unsafe/bignumber.scm 284 */
									obj_t BgL_res3023z00_2801;

									{	/* Unsafe/bignumber.scm 284 */
										int BgL_lenz00_2797;

										BgL_lenz00_2797 = (int) (BgL_arg2012z00_1078);
										{	/* Unsafe/bignumber.scm 284 */
											obj_t BgL_arg1953z00_2798;

											{	/* Unsafe/bignumber.scm 284 */

												BgL_arg1953z00_2798 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_2797), BINT(((long) 0)));
											}
											BgL_res3023z00_2801 =
												bgl_make_bignum(BgL_arg1953z00_2798);
									}}
									BgL_rz00_1061 = BgL_res3023z00_2801;
							}}
							if ((BgL_nz00_20 < ((long) 0)))
								{	/* Unsafe/bignumber.scm 286 */
									obj_t BgL_arg1958z00_2807;

									BgL_arg1958z00_2807 = BGL_BIGNUM_U16VECT(BgL_rz00_1061);
									{	/* Unsafe/bignumber.scm 286 */
										unsigned short BgL_auxz00_4986;

										BgL_auxz00_4986 = (unsigned short) (((long) 0));
										BGL_U16VSET(BgL_arg1958z00_2807, ((long) 0),
											BgL_auxz00_4986);
									} BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 287 */
									obj_t BgL_arg1958z00_2812;

									BgL_arg1958z00_2812 = BGL_BIGNUM_U16VECT(BgL_rz00_1061);
									{	/* Unsafe/bignumber.scm 287 */
										unsigned short BgL_auxz00_4990;

										BgL_auxz00_4990 = (unsigned short) (((long) 1));
										BGL_U16VSET(BgL_arg1958z00_2812, ((long) 0),
											BgL_auxz00_4990);
									} BUNSPEC;
								}
							{
								int BgL_iz00_1064;

								long BgL_xz00_1065;

								BgL_iz00_1064 = (int) (((long) 1));
								BgL_xz00_1065 = BgL_negzd2nzd2_1055;
							BgL_zc3anonymousza32001ze3z83_1066:
								if ((BgL_xz00_1065 == ((long) 0)))
									{	/* Unsafe/bignumber.scm 289 */
										return BgL_rz00_1061;
									}
								else
									{	/* Unsafe/bignumber.scm 289 */
										{	/* Unsafe/bignumber.scm 294 */
											long BgL_arg2003z00_1068;

											{	/* Unsafe/bignumber.scm 294 */
												long BgL_arg2005z00_1070;

												{	/* Unsafe/bignumber.scm 294 */
													long BgL_arg2006z00_1071;

													{	/* Unsafe/bignumber.scm 294 */
														long BgL_arg2007z00_1072;

														{	/* Unsafe/bignumber.scm 294 */
															long BgL_auxz00_4995;

															BgL_auxz00_4995 =
																(((long) 1) << (int) (((long) 14)));
															BgL_arg2007z00_1072 =
																LONG_TO_ELONG(BgL_auxz00_4995);
														}
														BgL_arg2006z00_1071 =
															(BgL_xz00_1065 % BgL_arg2007z00_1072);
													}
													{	/* Unsafe/bignumber.scm 294 */
														long BgL_auxz00_5000;

														BgL_auxz00_5000 =
															ELONG_TO_LONG(BgL_arg2006z00_1071);
														BgL_arg2005z00_1070 =
															ELONG_TO_LONG(BgL_auxz00_5000);
												}}
												{	/* Unsafe/bignumber.scm 294 */
													long BgL_za72za7_2821;

													BgL_za72za7_2821 = ELONG_TO_LONG(BgL_arg2005z00_1070);
													BgL_arg2003z00_1068 = (((long) 0) - BgL_za72za7_2821);
											}}
											{	/* Unsafe/bignumber.scm 291 */
												int BgL_digitz00_2824;

												BgL_digitz00_2824 = (int) (BgL_arg2003z00_1068);
												{	/* Unsafe/bignumber.scm 291 */
													obj_t BgL_arg1961z00_2825;

													BgL_arg1961z00_2825 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1061);
													{	/* Unsafe/bignumber.scm 291 */
														unsigned short BgL_auxz00_5009;

														long BgL_auxz00_5007;

														BgL_auxz00_5009 =
															(unsigned short) (BgL_digitz00_2824);
														BgL_auxz00_5007 = (long) (BgL_iz00_1064);
														BGL_U16VSET(BgL_arg1961z00_2825, BgL_auxz00_5007,
															BgL_auxz00_5009);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 295 */
											long BgL_arg2009z00_1074;

											long BgL_arg2010z00_1075;

											BgL_arg2009z00_1074 =
												((long) (BgL_iz00_1064) + ((long) 1));
											{	/* Unsafe/bignumber.scm 295 */
												long BgL_arg2011z00_1076;

												BgL_arg2011z00_1076 =
													(((long) 1) << (int) (((long) 14)));
												{	/* Unsafe/bignumber.scm 295 */
													long BgL_n2z00_2831;

													BgL_n2z00_2831 = LONG_TO_ELONG(BgL_arg2011z00_1076);
													BgL_arg2010z00_1075 =
														(BgL_xz00_1065 / BgL_n2z00_2831);
											}}
											{
												long BgL_xz00_5020;

												int BgL_iz00_5018;

												BgL_iz00_5018 = (int) (BgL_arg2009z00_1074);
												BgL_xz00_5020 = BgL_arg2010z00_1075;
												BgL_xz00_1065 = BgL_xz00_5020;
												BgL_iz00_1064 = BgL_iz00_5018;
												goto BgL_zc3anonymousza32001ze3z83_1066;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 283 */
							long BgL_arg2013z00_1079;

							long BgL_arg2015z00_1080;

							BgL_arg2013z00_1079 = (BgL_nbzd2digitszd2_1057 + ((long) 1));
							{	/* Unsafe/bignumber.scm 283 */
								long BgL_arg2016z00_1081;

								BgL_arg2016z00_1081 =
									(LONG_TO_ELONG(((long) 1)) << (int) (((long) 15)));
								BgL_arg2015z00_1080 = (BgL_xz00_1058 / BgL_arg2016z00_1081);
							}
							{
								long BgL_xz00_5028;

								long BgL_nbzd2digitszd2_5027;

								BgL_nbzd2digitszd2_5027 = BgL_arg2013z00_1079;
								BgL_xz00_5028 = BgL_arg2015z00_1080;
								BgL_xz00_1058 = BgL_xz00_5028;
								BgL_nbzd2digitszd2_1057 = BgL_nbzd2digitszd2_5027;
								goto BgL_zc3anonymousza31998ze3z83_1059;
							}
						}
				}
			}
		}
	}



/* _$elong->bignum */
	obj_t BGl__z42elongzd2ze3bignumz73zz__bignumz00(obj_t BgL_envz00_4636,
		obj_t BgL_nz00_4637)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 278 */
			{	/* Unsafe/bignumber.scm 279 */
				long BgL_auxz00_5029;

				{	/* Unsafe/bignumber.scm 279 */
					obj_t BgL_auxz00_5030;

					if (ELONGP(BgL_nz00_4637))
						{	/* Unsafe/bignumber.scm 279 */
							BgL_auxz00_5030 = BgL_nz00_4637;
						}
					else
						{
							obj_t BgL_auxz00_5033;

							BgL_auxz00_5033 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 11263)), BGl_string3174z00zz__bignumz00,
								BGl_string3175z00zz__bignumz00, BgL_nz00_4637);
							FAILURE(BgL_auxz00_5033, BFALSE, BFALSE);
						}
					BgL_auxz00_5029 = BELONG_TO_LONG(BgL_auxz00_5030);
				}
				return bgl_elong_to_bignum(BgL_auxz00_5029);
			}
		}
	}



/* $llong->bignum */
	BGL_EXPORTED_DEF obj_t bgl_llong_to_bignum(BGL_LONGLONG_T BgL_nz00_21)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 298 */
			{	/* Unsafe/bignumber.scm 299 */
				BGL_LONGLONG_T BgL_negzd2nzd2_1084;

				if ((BgL_nz00_21 < ((BGL_LONGLONG_T) 0)))
					{	/* Unsafe/bignumber.scm 299 */
						BgL_negzd2nzd2_1084 = BgL_nz00_21;
					}
				else
					{	/* Unsafe/bignumber.scm 299 */
						BgL_negzd2nzd2_1084 = (((BGL_LONGLONG_T) 0) - BgL_nz00_21);
					}
				{
					long BgL_nbzd2digitszd2_1086;

					BGL_LONGLONG_T BgL_xz00_1087;

					BgL_nbzd2digitszd2_1086 = ((long) 0);
					BgL_xz00_1087 = BgL_negzd2nzd2_1084;
				BgL_zc3anonymousza32018ze3z83_1088:
					if ((BgL_xz00_1087 == LONG_TO_LLONG(((long) 0))))
						{	/* Unsafe/bignumber.scm 304 */
							obj_t BgL_rz00_1090;

							{	/* Unsafe/bignumber.scm 304 */
								long BgL_arg2034z00_1107;

								BgL_arg2034z00_1107 = (BgL_nbzd2digitszd2_1086 + ((long) 1));
								{	/* Unsafe/bignumber.scm 304 */
									obj_t BgL_res3024z00_2850;

									{	/* Unsafe/bignumber.scm 304 */
										int BgL_lenz00_2846;

										BgL_lenz00_2846 = (int) (BgL_arg2034z00_1107);
										{	/* Unsafe/bignumber.scm 304 */
											obj_t BgL_arg1953z00_2847;

											{	/* Unsafe/bignumber.scm 304 */

												BgL_arg1953z00_2847 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_2846), BINT(((long) 0)));
											}
											BgL_res3024z00_2850 =
												bgl_make_bignum(BgL_arg1953z00_2847);
									}}
									BgL_rz00_1090 = BgL_res3024z00_2850;
							}}
							if ((BgL_nz00_21 < ((BGL_LONGLONG_T) 0)))
								{	/* Unsafe/bignumber.scm 306 */
									obj_t BgL_arg1958z00_2856;

									BgL_arg1958z00_2856 = BGL_BIGNUM_U16VECT(BgL_rz00_1090);
									{	/* Unsafe/bignumber.scm 306 */
										unsigned short BgL_auxz00_5054;

										BgL_auxz00_5054 = (unsigned short) (((long) 0));
										BGL_U16VSET(BgL_arg1958z00_2856, ((long) 0),
											BgL_auxz00_5054);
									} BUNSPEC;
								}
							else
								{	/* Unsafe/bignumber.scm 307 */
									obj_t BgL_arg1958z00_2861;

									BgL_arg1958z00_2861 = BGL_BIGNUM_U16VECT(BgL_rz00_1090);
									{	/* Unsafe/bignumber.scm 307 */
										unsigned short BgL_auxz00_5058;

										BgL_auxz00_5058 = (unsigned short) (((long) 1));
										BGL_U16VSET(BgL_arg1958z00_2861, ((long) 0),
											BgL_auxz00_5058);
									} BUNSPEC;
								}
							{
								long BgL_iz00_1093;

								BGL_LONGLONG_T BgL_xz00_1094;

								BgL_iz00_1093 = ((long) 1);
								BgL_xz00_1094 = BgL_negzd2nzd2_1084;
							BgL_zc3anonymousza32021ze3z83_1095:
								if ((BgL_xz00_1094 == ((BGL_LONGLONG_T) 0)))
									{	/* Unsafe/bignumber.scm 309 */
										return BgL_rz00_1090;
									}
								else
									{	/* Unsafe/bignumber.scm 309 */
										{	/* Unsafe/bignumber.scm 314 */
											long BgL_arg2023z00_1097;

											{	/* Unsafe/bignumber.scm 314 */
												long BgL_arg2025z00_1099;

												{	/* Unsafe/bignumber.scm 314 */
													BGL_LONGLONG_T BgL_arg2027z00_1100;

													{	/* Unsafe/bignumber.scm 314 */
														BGL_LONGLONG_T BgL_arg2028z00_1101;

														{	/* Unsafe/bignumber.scm 314 */
															long BgL_auxz00_5063;

															BgL_auxz00_5063 =
																(((long) 1) << (int) (((long) 14)));
															BgL_arg2028z00_1101 =
																LONG_TO_LLONG(BgL_auxz00_5063);
														}
														BgL_arg2027z00_1100 =
															(BgL_xz00_1094 % BgL_arg2028z00_1101);
													}
													BgL_arg2025z00_1099 =
														LLONG_TO_LONG(BgL_arg2027z00_1100);
												}
												BgL_arg2023z00_1097 =
													(((long) 0) - BgL_arg2025z00_1099);
											}
											{	/* Unsafe/bignumber.scm 311 */
												int BgL_iz00_2872;

												int BgL_digitz00_2873;

												BgL_iz00_2872 = (int) (BgL_iz00_1093);
												BgL_digitz00_2873 = (int) (BgL_arg2023z00_1097);
												{	/* Unsafe/bignumber.scm 311 */
													obj_t BgL_arg1961z00_2874;

													BgL_arg1961z00_2874 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1090);
													{	/* Unsafe/bignumber.scm 311 */
														unsigned short BgL_auxz00_5075;

														long BgL_auxz00_5073;

														BgL_auxz00_5075 =
															(unsigned short) (BgL_digitz00_2873);
														BgL_auxz00_5073 = (long) (BgL_iz00_2872);
														BGL_U16VSET(BgL_arg1961z00_2874, BgL_auxz00_5073,
															BgL_auxz00_5075);
													} BUNSPEC;
										}}}
										{	/* Unsafe/bignumber.scm 315 */
											long BgL_arg2030z00_1103;

											BGL_LONGLONG_T BgL_arg2031z00_1104;

											BgL_arg2030z00_1103 = (BgL_iz00_1093 + ((long) 1));
											{	/* Unsafe/bignumber.scm 315 */
												long BgL_arg2033z00_1105;

												BgL_arg2033z00_1105 =
													(((long) 1) << (int) (((long) 14)));
												{	/* Unsafe/bignumber.scm 315 */
													BGL_LONGLONG_T BgL_n2z00_2880;

													BgL_n2z00_2880 = LONG_TO_LLONG(BgL_arg2033z00_1105);
													BgL_arg2031z00_1104 =
														(BgL_xz00_1094 / BgL_n2z00_2880);
											}}
											{
												BGL_LONGLONG_T BgL_xz00_5084;

												long BgL_iz00_5083;

												BgL_iz00_5083 = BgL_arg2030z00_1103;
												BgL_xz00_5084 = BgL_arg2031z00_1104;
												BgL_xz00_1094 = BgL_xz00_5084;
												BgL_iz00_1093 = BgL_iz00_5083;
												goto BgL_zc3anonymousza32021ze3z83_1095;
											}
										}
									}
							}
						}
					else
						{	/* Unsafe/bignumber.scm 303 */
							long BgL_arg2036z00_1108;

							BGL_LONGLONG_T BgL_arg2037z00_1109;

							BgL_arg2036z00_1108 = (BgL_nbzd2digitszd2_1086 + ((long) 1));
							{	/* Unsafe/bignumber.scm 303 */
								BGL_LONGLONG_T BgL_arg2038z00_1110;

								BgL_arg2038z00_1110 =
									(LONG_TO_LLONG(((long) 1)) << (int) (((long) 30)));
								BgL_arg2037z00_1109 = (BgL_xz00_1087 / BgL_arg2038z00_1110);
							}
							{
								BGL_LONGLONG_T BgL_xz00_5091;

								long BgL_nbzd2digitszd2_5090;

								BgL_nbzd2digitszd2_5090 = BgL_arg2036z00_1108;
								BgL_xz00_5091 = BgL_arg2037z00_1109;
								BgL_xz00_1087 = BgL_xz00_5091;
								BgL_nbzd2digitszd2_1086 = BgL_nbzd2digitszd2_5090;
								goto BgL_zc3anonymousza32018ze3z83_1088;
							}
						}
				}
			}
		}
	}



/* _$llong->bignum */
	obj_t BGl__z42llongzd2ze3bignumz73zz__bignumz00(obj_t BgL_envz00_4638,
		obj_t BgL_nz00_4639)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 298 */
			{	/* Unsafe/bignumber.scm 299 */
				BGL_LONGLONG_T BgL_auxz00_5092;

				{	/* Unsafe/bignumber.scm 299 */
					obj_t BgL_auxz00_5093;

					if (LLONGP(BgL_nz00_4639))
						{	/* Unsafe/bignumber.scm 299 */
							BgL_auxz00_5093 = BgL_nz00_4639;
						}
					else
						{
							obj_t BgL_auxz00_5096;

							BgL_auxz00_5096 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 11952)), BGl_string3176z00zz__bignumz00,
								BGl_string3177z00zz__bignumz00, BgL_nz00_4639);
							FAILURE(BgL_auxz00_5096, BFALSE, BFALSE);
						}
					BgL_auxz00_5092 = BLLONG_TO_LLONG(BgL_auxz00_5093);
				}
				return bgl_llong_to_bignum(BgL_auxz00_5092);
			}
		}
	}



/* $fixnum->bignum */
	BGL_EXPORTED_DEF obj_t bgl_long_to_bignum(long BgL_nz00_22)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 327 */
			{	/* Unsafe/bignumber.scm 328 */
				bool_t BgL_testz00_5102;

				if ((BgL_nz00_22 < ((long) -16)))
					{	/* Unsafe/bignumber.scm 328 */
						BgL_testz00_5102 = ((bool_t) 1);
					}
				else
					{	/* Unsafe/bignumber.scm 328 */
						BgL_testz00_5102 = (((long) 16) < BgL_nz00_22);
					}
				if (BgL_testz00_5102)
					{	/* Unsafe/bignumber.scm 328 */
						return
							BGl_z42fixnumzd2ze3bignumzd2freshza1zz__bignumz00(BgL_nz00_22);
					}
				else
					{	/* Unsafe/bignumber.scm 330 */
						long BgL_arg2041z00_1114;

						BgL_arg2041z00_1114 = (BgL_nz00_22 + ((long) 16));
						return
							VECTOR_REF(BGl_preallocatedzd2bignumszd2zz__bignumz00,
							(int) (BgL_arg2041z00_1114));
		}}}
	}



/* _$fixnum->bignum */
	obj_t BGl__z42fixnumzd2ze3bignumz73zz__bignumz00(obj_t BgL_envz00_4640,
		obj_t BgL_nz00_4641)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 327 */
			{	/* Unsafe/bignumber.scm 328 */
				long BgL_auxz00_5110;

				{	/* Unsafe/bignumber.scm 328 */
					obj_t BgL_auxz00_5111;

					if (INTEGERP(BgL_nz00_4641))
						{	/* Unsafe/bignumber.scm 328 */
							BgL_auxz00_5111 = BgL_nz00_4641;
						}
					else
						{
							obj_t BgL_auxz00_5114;

							BgL_auxz00_5114 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 12844)), BGl_string3178z00zz__bignumz00,
								BGl_string3173z00zz__bignumz00, BgL_nz00_4641);
							FAILURE(BgL_auxz00_5114, BFALSE, BFALSE);
						}
					BgL_auxz00_5110 = (long) CINT(BgL_auxz00_5111);
				}
				return bgl_long_to_bignum(BgL_auxz00_5110);
			}
		}
	}



/* $<bx */
	bool_t BGl_z42zc3bxz81zz__bignumz00(obj_t BgL_xz00_25, obj_t BgL_yz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 352 */
			{	/* Unsafe/bignumber.scm 353 */
				bool_t BgL_testz00_5120;

				{	/* Unsafe/bignumber.scm 353 */
					unsigned short BgL_arg2066z00_1150;

					unsigned short BgL_arg2067z00_1151;

					{	/* Unsafe/bignumber.scm 353 */
						obj_t BgL_arg1956z00_2896;

						BgL_arg1956z00_2896 = BGL_BIGNUM_U16VECT(BgL_xz00_25);
						BgL_arg2066z00_1150 = BGL_U16VREF(BgL_arg1956z00_2896, ((long) 0));
					}
					{	/* Unsafe/bignumber.scm 353 */
						obj_t BgL_arg1956z00_2899;

						BgL_arg1956z00_2899 = BGL_BIGNUM_U16VECT(BgL_yz00_26);
						BgL_arg2067z00_1151 = BGL_U16VREF(BgL_arg1956z00_2899, ((long) 0));
					}
					BgL_testz00_5120 =
						((long) (BgL_arg2066z00_1150) == (long) (BgL_arg2067z00_1151));
				}
				if (BgL_testz00_5120)
					{	/* Unsafe/bignumber.scm 355 */
						long BgL_lenxz00_1133;

						long BgL_lenyz00_1134;

						{	/* Unsafe/bignumber.scm 355 */
							obj_t BgL_arg1955z00_2904;

							BgL_arg1955z00_2904 = BGL_BIGNUM_U16VECT(BgL_xz00_25);
							BgL_lenxz00_1133 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_2904);
						}
						{	/* Unsafe/bignumber.scm 356 */
							obj_t BgL_arg1955z00_2907;

							BgL_arg1955z00_2907 = BGL_BIGNUM_U16VECT(BgL_yz00_26);
							BgL_lenyz00_1134 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_2907);
						}
						if ((BgL_lenxz00_1133 < BgL_lenyz00_1134))
							{	/* Unsafe/bignumber.scm 358 */
								bool_t BgL_testz00_5134;

								{	/* Unsafe/bignumber.scm 358 */
									bool_t BgL_res3025z00_2919;

									{	/* Unsafe/bignumber.scm 358 */
										unsigned short BgL_arg2073z00_2912;

										{	/* Unsafe/bignumber.scm 358 */
											obj_t BgL_arg1956z00_2915;

											BgL_arg1956z00_2915 = BGL_BIGNUM_U16VECT(BgL_xz00_25);
											BgL_arg2073z00_2912 =
												BGL_U16VREF(BgL_arg1956z00_2915, ((long) 0));
										}
										BgL_res3025z00_2919 =
											((long) (BgL_arg2073z00_2912) == ((long) 0));
									}
									BgL_testz00_5134 = BgL_res3025z00_2919;
								}
								if (BgL_testz00_5134)
									{	/* Unsafe/bignumber.scm 358 */
										return ((bool_t) 0);
									}
								else
									{	/* Unsafe/bignumber.scm 358 */
										return ((bool_t) 1);
									}
							}
						else
							{	/* Unsafe/bignumber.scm 357 */
								if ((BgL_lenyz00_1134 < BgL_lenxz00_1133))
									{	/* Unsafe/bignumber.scm 360 */
										bool_t BgL_res3026z00_2930;

										{	/* Unsafe/bignumber.scm 360 */
											unsigned short BgL_arg2073z00_2923;

											{	/* Unsafe/bignumber.scm 360 */
												obj_t BgL_arg1956z00_2926;

												BgL_arg1956z00_2926 = BGL_BIGNUM_U16VECT(BgL_xz00_25);
												BgL_arg2073z00_2923 =
													BGL_U16VREF(BgL_arg1956z00_2926, ((long) 0));
											}
											BgL_res3026z00_2930 =
												((long) (BgL_arg2073z00_2923) == ((long) 0));
										}
										return BgL_res3026z00_2930;
									}
								else
									{	/* Unsafe/bignumber.scm 362 */
										long BgL_g1830z00_1138;

										BgL_g1830z00_1138 = (BgL_lenxz00_1133 - ((long) 1));
										{
											long BgL_iz00_1140;

											BgL_iz00_1140 = BgL_g1830z00_1138;
										BgL_zc3anonymousza32060ze3z83_1141:
											if ((((long) 0) < BgL_iz00_1140))
												{	/* Unsafe/bignumber.scm 364 */
													unsigned short BgL_dxz00_1143;

													unsigned short BgL_dyz00_1144;

													{	/* Unsafe/bignumber.scm 364 */
														int BgL_iz00_2936;

														BgL_iz00_2936 = (int) (BgL_iz00_1140);
														{	/* Unsafe/bignumber.scm 364 */
															obj_t BgL_arg1960z00_2937;

															BgL_arg1960z00_2937 =
																BGL_BIGNUM_U16VECT(BgL_xz00_25);
															{	/* Unsafe/bignumber.scm 364 */
																long BgL_auxz00_5150;

																BgL_auxz00_5150 = (long) (BgL_iz00_2936);
																BgL_dxz00_1143 =
																	BGL_U16VREF(BgL_arg1960z00_2937,
																	BgL_auxz00_5150);
													}}}
													{	/* Unsafe/bignumber.scm 365 */
														int BgL_iz00_2939;

														BgL_iz00_2939 = (int) (BgL_iz00_1140);
														{	/* Unsafe/bignumber.scm 365 */
															obj_t BgL_arg1960z00_2940;

															BgL_arg1960z00_2940 =
																BGL_BIGNUM_U16VECT(BgL_yz00_26);
															{	/* Unsafe/bignumber.scm 365 */
																long BgL_auxz00_5155;

																BgL_auxz00_5155 = (long) (BgL_iz00_2939);
																BgL_dyz00_1144 =
																	BGL_U16VREF(BgL_arg1960z00_2940,
																	BgL_auxz00_5155);
													}}}
													if (
														((long) (BgL_dxz00_1143) < (long) (BgL_dyz00_1144)))
														{	/* Unsafe/bignumber.scm 366 */
															bool_t BgL_testz00_5162;

															{	/* Unsafe/bignumber.scm 366 */
																bool_t BgL_res3027z00_2951;

																{	/* Unsafe/bignumber.scm 366 */
																	unsigned short BgL_arg2073z00_2944;

																	{	/* Unsafe/bignumber.scm 366 */
																		obj_t BgL_arg1956z00_2947;

																		BgL_arg1956z00_2947 =
																			BGL_BIGNUM_U16VECT(BgL_xz00_25);
																		BgL_arg2073z00_2944 =
																			BGL_U16VREF(BgL_arg1956z00_2947,
																			((long) 0));
																	}
																	BgL_res3027z00_2951 =
																		(
																		(long) (BgL_arg2073z00_2944) == ((long) 0));
																}
																BgL_testz00_5162 = BgL_res3027z00_2951;
															}
															if (BgL_testz00_5162)
																{	/* Unsafe/bignumber.scm 366 */
																	return ((bool_t) 0);
																}
															else
																{	/* Unsafe/bignumber.scm 366 */
																	return ((bool_t) 1);
																}
														}
													else
														{	/* Unsafe/bignumber.scm 366 */
															if (
																((long) (BgL_dyz00_1144) <
																	(long) (BgL_dxz00_1143)))
																{	/* Unsafe/bignumber.scm 367 */
																	bool_t BgL_res3028z00_2962;

																	{	/* Unsafe/bignumber.scm 367 */
																		unsigned short BgL_arg2073z00_2955;

																		{	/* Unsafe/bignumber.scm 367 */
																			obj_t BgL_arg1956z00_2958;

																			BgL_arg1956z00_2958 =
																				BGL_BIGNUM_U16VECT(BgL_xz00_25);
																			BgL_arg2073z00_2955 =
																				BGL_U16VREF(BgL_arg1956z00_2958,
																				((long) 0));
																		}
																		BgL_res3028z00_2962 =
																			(
																			(long) (BgL_arg2073z00_2955) ==
																			((long) 0));
																	}
																	return BgL_res3028z00_2962;
																}
															else
																{
																	long BgL_iz00_5175;

																	BgL_iz00_5175 = (BgL_iz00_1140 - ((long) 1));
																	BgL_iz00_1140 = BgL_iz00_5175;
																	goto BgL_zc3anonymousza32060ze3z83_1141;
																}
														}
												}
											else
												{	/* Unsafe/bignumber.scm 363 */
													return ((bool_t) 0);
												}
										}
									}
							}
					}
				else
					{	/* Unsafe/bignumber.scm 354 */
						bool_t BgL_res3029z00_2973;

						{	/* Unsafe/bignumber.scm 354 */
							unsigned short BgL_arg2073z00_2966;

							{	/* Unsafe/bignumber.scm 354 */
								obj_t BgL_arg1956z00_2969;

								BgL_arg1956z00_2969 = BGL_BIGNUM_U16VECT(BgL_xz00_25);
								BgL_arg2073z00_2966 =
									BGL_U16VREF(BgL_arg1956z00_2969, ((long) 0));
							}
							BgL_res3029z00_2973 =
								((long) (BgL_arg2073z00_2966) == ((long) 0));
						}
						return BgL_res3029z00_2973;
					}
			}
		}
	}



/* $zerobx? */
	BGL_EXPORTED_DEF bool_t BXZERO(obj_t BgL_xz00_33)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 380 */
			{	/* Unsafe/bignumber.scm 381 */
				long BgL_arg2070z00_2975;

				{	/* Unsafe/bignumber.scm 381 */
					obj_t BgL_arg1955z00_2978;

					BgL_arg1955z00_2978 = BGL_BIGNUM_U16VECT(BgL_xz00_33);
					BgL_arg2070z00_2975 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_2978);
				}
				return (BgL_arg2070z00_2975 == ((long) 1));
		}}
	}



/* _$zerobx? */
	obj_t BGl__z42za7erobxzf3z16zz__bignumz00(obj_t BgL_envz00_4642,
		obj_t BgL_xz00_4643)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 380 */
			{	/* Unsafe/bignumber.scm 381 */
				bool_t BgL_auxz00_5184;

				{	/* Unsafe/bignumber.scm 381 */
					obj_t BgL_auxz00_5185;

					if (BIGNUMP(BgL_xz00_4643))
						{	/* Unsafe/bignumber.scm 381 */
							BgL_auxz00_5185 = BgL_xz00_4643;
						}
					else
						{
							obj_t BgL_auxz00_5188;

							BgL_auxz00_5188 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14262)), BGl_string3179z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4643);
							FAILURE(BgL_auxz00_5188, BFALSE, BFALSE);
						}
					BgL_auxz00_5184 = BXZERO(BgL_auxz00_5185);
				}
				return BBOOL(BgL_auxz00_5184);
			}
		}
	}



/* $negativebx? */
	BGL_EXPORTED_DEF bool_t BXNEGATIVE(obj_t BgL_xz00_34)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 383 */
			{	/* Unsafe/bignumber.scm 384 */
				unsigned short BgL_arg2073z00_2982;

				{	/* Unsafe/bignumber.scm 384 */
					obj_t BgL_arg1956z00_2985;

					BgL_arg1956z00_2985 = BGL_BIGNUM_U16VECT(BgL_xz00_34);
					BgL_arg2073z00_2982 = BGL_U16VREF(BgL_arg1956z00_2985, ((long) 0));
				}
				return ((long) (BgL_arg2073z00_2982) == ((long) 0));
		}}
	}



/* _$negativebx? */
	obj_t BGl__z42negativebxzf3zb1zz__bignumz00(obj_t BgL_envz00_4644,
		obj_t BgL_xz00_4645)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 383 */
			{	/* Unsafe/bignumber.scm 384 */
				bool_t BgL_auxz00_5198;

				{	/* Unsafe/bignumber.scm 384 */
					obj_t BgL_auxz00_5199;

					if (BIGNUMP(BgL_xz00_4645))
						{	/* Unsafe/bignumber.scm 384 */
							BgL_auxz00_5199 = BgL_xz00_4645;
						}
					else
						{
							obj_t BgL_auxz00_5202;

							BgL_auxz00_5202 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14318)), BGl_string3181z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4645);
							FAILURE(BgL_auxz00_5202, BFALSE, BFALSE);
						}
					BgL_auxz00_5198 = BXNEGATIVE(BgL_auxz00_5199);
				}
				return BBOOL(BgL_auxz00_5198);
			}
		}
	}



/* $positivebx? */
	BGL_EXPORTED_DEF bool_t BXPOSITIVE(obj_t BgL_xz00_35)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 386 */
			{	/* Unsafe/bignumber.scm 387 */
				bool_t BgL_testz00_5208;

				{	/* Unsafe/bignumber.scm 387 */
					bool_t BgL_testz00_5209;

					{	/* Unsafe/bignumber.scm 387 */
						bool_t BgL_res3030z00_2999;

						{	/* Unsafe/bignumber.scm 387 */
							long BgL_arg2070z00_2992;

							{	/* Unsafe/bignumber.scm 387 */
								obj_t BgL_arg1955z00_2995;

								BgL_arg1955z00_2995 = BGL_BIGNUM_U16VECT(BgL_xz00_35);
								BgL_arg2070z00_2992 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_2995);
							}
							BgL_res3030z00_2999 = (BgL_arg2070z00_2992 == ((long) 1));
						}
						BgL_testz00_5209 = BgL_res3030z00_2999;
					}
					if (BgL_testz00_5209)
						{	/* Unsafe/bignumber.scm 387 */
							BgL_testz00_5208 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/bignumber.scm 387 */
							bool_t BgL_res3031z00_3008;

							{	/* Unsafe/bignumber.scm 387 */
								unsigned short BgL_arg2073z00_3001;

								{	/* Unsafe/bignumber.scm 387 */
									obj_t BgL_arg1956z00_3004;

									BgL_arg1956z00_3004 = BGL_BIGNUM_U16VECT(BgL_xz00_35);
									BgL_arg2073z00_3001 =
										BGL_U16VREF(BgL_arg1956z00_3004, ((long) 0));
								}
								BgL_res3031z00_3008 =
									((long) (BgL_arg2073z00_3001) == ((long) 0));
							}
							BgL_testz00_5208 = BgL_res3031z00_3008;
				}}
				if (BgL_testz00_5208)
					{	/* Unsafe/bignumber.scm 387 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/bignumber.scm 387 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _$positivebx? */
	obj_t BGl__z42positivebxzf3zb1zz__bignumz00(obj_t BgL_envz00_4646,
		obj_t BgL_xz00_4647)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 386 */
			{	/* Unsafe/bignumber.scm 387 */
				bool_t BgL_auxz00_5217;

				{	/* Unsafe/bignumber.scm 387 */
					obj_t BgL_auxz00_5218;

					if (BIGNUMP(BgL_xz00_4647))
						{	/* Unsafe/bignumber.scm 387 */
							BgL_auxz00_5218 = BgL_xz00_4647;
						}
					else
						{
							obj_t BgL_auxz00_5221;

							BgL_auxz00_5221 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14376)), BGl_string3182z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4647);
							FAILURE(BgL_auxz00_5221, BFALSE, BFALSE);
						}
					BgL_auxz00_5217 = BXPOSITIVE(BgL_auxz00_5218);
				}
				return BBOOL(BgL_auxz00_5217);
			}
		}
	}



/* $evenbx? */
	BGL_EXPORTED_DEF bool_t bgl_bignum_even(obj_t BgL_xz00_36)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 389 */
			{	/* Unsafe/bignumber.scm 390 */
				bool_t BgL__ortest_1831z00_3009;

				{	/* Unsafe/bignumber.scm 390 */
					bool_t BgL_res3032z00_3019;

					{	/* Unsafe/bignumber.scm 390 */
						long BgL_arg2070z00_3012;

						{	/* Unsafe/bignumber.scm 390 */
							obj_t BgL_arg1955z00_3015;

							BgL_arg1955z00_3015 = BGL_BIGNUM_U16VECT(BgL_xz00_36);
							BgL_arg2070z00_3012 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3015);
						}
						BgL_res3032z00_3019 = (BgL_arg2070z00_3012 == ((long) 1));
					}
					BgL__ortest_1831z00_3009 = BgL_res3032z00_3019;
				}
				if (BgL__ortest_1831z00_3009)
					{	/* Unsafe/bignumber.scm 390 */
						return BgL__ortest_1831z00_3009;
					}
				else
					{	/* Unsafe/bignumber.scm 390 */
						unsigned short BgL_arg2079z00_3010;

						{	/* Unsafe/bignumber.scm 390 */
							obj_t BgL_arg1960z00_3022;

							BgL_arg1960z00_3022 = BGL_BIGNUM_U16VECT(BgL_xz00_36);
							BgL_arg2079z00_3010 =
								BGL_U16VREF(BgL_arg1960z00_3022, ((long) 1));
						}
						return
							BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
							(BgL_arg2079z00_3010));
					}
			}
		}
	}



/* _$evenbx? */
	obj_t BGl__z42evenbxzf3zb1zz__bignumz00(obj_t BgL_envz00_4648,
		obj_t BgL_xz00_4649)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 389 */
			{	/* Unsafe/bignumber.scm 390 */
				bool_t BgL_auxz00_5235;

				{	/* Unsafe/bignumber.scm 390 */
					obj_t BgL_auxz00_5236;

					if (BIGNUMP(BgL_xz00_4649))
						{	/* Unsafe/bignumber.scm 390 */
							BgL_auxz00_5236 = BgL_xz00_4649;
						}
					else
						{
							obj_t BgL_auxz00_5239;

							BgL_auxz00_5239 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14438)), BGl_string3183z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4649);
							FAILURE(BgL_auxz00_5239, BFALSE, BFALSE);
						}
					BgL_auxz00_5235 = bgl_bignum_even(BgL_auxz00_5236);
				}
				return BBOOL(BgL_auxz00_5235);
			}
		}
	}



/* $oddbx? */
	BGL_EXPORTED_DEF bool_t bgl_bignum_odd(obj_t BgL_xz00_37)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 392 */
			{	/* Unsafe/bignumber.scm 393 */
				bool_t BgL_testz00_5245;

				{	/* Unsafe/bignumber.scm 393 */
					bool_t BgL_res3034z00_3036;

					{	/* Unsafe/bignumber.scm 393 */
						bool_t BgL__ortest_1831z00_3025;

						BgL__ortest_1831z00_3025 =
							(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_xz00_37) == ((long) 1));
						if (BgL__ortest_1831z00_3025)
							{	/* Unsafe/bignumber.scm 393 */
								BgL_res3034z00_3036 = BgL__ortest_1831z00_3025;
							}
						else
							{	/* Unsafe/bignumber.scm 393 */
								unsigned short BgL_arg2079z00_3026;

								{	/* Unsafe/bignumber.scm 393 */
									obj_t BgL_arg1960z00_3035;

									BgL_arg1960z00_3035 = BGL_BIGNUM_U16VECT(BgL_xz00_37);
									BgL_arg2079z00_3026 =
										BGL_U16VREF(BgL_arg1960z00_3035, ((long) 1));
								}
								BgL_res3034z00_3036 =
									BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
									(BgL_arg2079z00_3026));
					}}
					BgL_testz00_5245 = BgL_res3034z00_3036;
				}
				if (BgL_testz00_5245)
					{	/* Unsafe/bignumber.scm 393 */
						return ((bool_t) 0);
					}
				else
					{	/* Unsafe/bignumber.scm 393 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _$oddbx? */
	obj_t BGl__z42oddbxzf3zb1zz__bignumz00(obj_t BgL_envz00_4650,
		obj_t BgL_xz00_4651)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 392 */
			{	/* Unsafe/bignumber.scm 393 */
				bool_t BgL_auxz00_5253;

				{	/* Unsafe/bignumber.scm 393 */
					obj_t BgL_auxz00_5254;

					if (BIGNUMP(BgL_xz00_4651))
						{	/* Unsafe/bignumber.scm 393 */
							BgL_auxz00_5254 = BgL_xz00_4651;
						}
					else
						{
							obj_t BgL_auxz00_5257;

							BgL_auxz00_5257 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14508)), BGl_string3184z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4651);
							FAILURE(BgL_auxz00_5257, BFALSE, BFALSE);
						}
					BgL_auxz00_5253 = bgl_bignum_odd(BgL_auxz00_5254);
				}
				return BBOOL(BgL_auxz00_5253);
			}
		}
	}



/* $bignum-cmp */
	BGL_EXPORTED_DEF int bgl_bignum_cmp(obj_t BgL_n1z00_38, obj_t BgL_n2z00_39)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 395 */
			if (BGl_z42zc3bxz81zz__bignumz00(BgL_n1z00_38, BgL_n2z00_39))
				{	/* Unsafe/bignumber.scm 397 */
					return (int) (((long) -1));
				}
			else
				{	/* Unsafe/bignumber.scm 397 */
					if (BGl_z42zc3bxz81zz__bignumz00(BgL_n2z00_39, BgL_n1z00_38))
						{	/* Unsafe/bignumber.scm 397 */
							return (int) (((long) 1));
						}
					else
						{	/* Unsafe/bignumber.scm 397 */
							return (int) (((long) 0));
		}}}
	}



/* _$bignum-cmp */
	obj_t BGl__z42bignumzd2cmpz90zz__bignumz00(obj_t BgL_envz00_4652,
		obj_t BgL_n1z00_4653, obj_t BgL_n2z00_4654)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 395 */
			{	/* Unsafe/bignumber.scm 397 */
				int BgL_auxz00_5270;

				{	/* Unsafe/bignumber.scm 397 */
					obj_t BgL_auxz00_5278;

					obj_t BgL_auxz00_5271;

					if (BIGNUMP(BgL_n2z00_4654))
						{	/* Unsafe/bignumber.scm 397 */
							BgL_auxz00_5278 = BgL_n2z00_4654;
						}
					else
						{
							obj_t BgL_auxz00_5281;

							BgL_auxz00_5281 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14573)), BGl_string3185z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_n2z00_4654);
							FAILURE(BgL_auxz00_5281, BFALSE, BFALSE);
						}
					if (BIGNUMP(BgL_n1z00_4653))
						{	/* Unsafe/bignumber.scm 397 */
							BgL_auxz00_5271 = BgL_n1z00_4653;
						}
					else
						{
							obj_t BgL_auxz00_5274;

							BgL_auxz00_5274 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 14573)), BGl_string3185z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_n1z00_4653);
							FAILURE(BgL_auxz00_5274, BFALSE, BFALSE);
						}
					BgL_auxz00_5270 = bgl_bignum_cmp(BgL_auxz00_5271, BgL_auxz00_5278);
				}
				return BINT(BgL_auxz00_5270);
			}
		}
	}



/* bignum-add-nonneg */
	obj_t BGl_bignumzd2addzd2nonnegz00zz__bignumz00(obj_t BgL_xz00_40,
		obj_t BgL_yz00_41)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 404 */
			{
				obj_t BgL_xz00_1169;

				obj_t BgL_yz00_1170;

				long BgL_lenxz00_1171;

				long BgL_lenyz00_1172;

				{	/* Unsafe/bignumber.scm 443 */
					long BgL_lenxz00_1166;

					long BgL_lenyz00_1167;

					{	/* Unsafe/bignumber.scm 443 */
						obj_t BgL_arg1955z00_3040;

						BgL_arg1955z00_3040 = BGL_BIGNUM_U16VECT(BgL_xz00_40);
						BgL_lenxz00_1166 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3040);
					}
					{	/* Unsafe/bignumber.scm 444 */
						obj_t BgL_arg1955z00_3043;

						BgL_arg1955z00_3043 = BGL_BIGNUM_U16VECT(BgL_yz00_41);
						BgL_lenyz00_1167 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3043);
					}
					if ((BgL_lenxz00_1166 < BgL_lenyz00_1167))
						{	/* Unsafe/bignumber.scm 445 */
							BgL_xz00_1169 = BgL_yz00_41;
							BgL_yz00_1170 = BgL_xz00_40;
							BgL_lenxz00_1171 = BgL_lenyz00_1167;
							BgL_lenyz00_1172 = BgL_lenxz00_1166;
						BgL_zc3anonymousza32084ze3z83_1173:
							{	/* Unsafe/bignumber.scm 407 */
								obj_t BgL_rz00_1174;

								{	/* Unsafe/bignumber.scm 407 */
									long BgL_arg2111z00_1210;

									BgL_arg2111z00_1210 = (BgL_lenxz00_1171 + ((long) 1));
									{	/* Unsafe/bignumber.scm 407 */
										obj_t BgL_res3035z00_3053;

										{	/* Unsafe/bignumber.scm 407 */
											int BgL_lenz00_3049;

											BgL_lenz00_3049 = (int) (BgL_arg2111z00_1210);
											{	/* Unsafe/bignumber.scm 407 */
												obj_t BgL_arg1953z00_3050;

												{	/* Unsafe/bignumber.scm 407 */

													BgL_arg1953z00_3050 =
														BGl_makezd2u16vectorzd2zz__srfi4z00(
														(long) (BgL_lenz00_3049), BINT(((long) 0)));
												}
												BgL_res3035z00_3053 =
													bgl_make_bignum(BgL_arg1953z00_3050);
										}}
										BgL_rz00_1174 = BgL_res3035z00_3053;
								}}
								{	/* Unsafe/bignumber.scm 409 */
									obj_t BgL_arg1958z00_3057;

									BgL_arg1958z00_3057 = BGL_BIGNUM_U16VECT(BgL_rz00_1174);
									{	/* Unsafe/bignumber.scm 409 */
										unsigned short BgL_auxz00_5300;

										BgL_auxz00_5300 = (unsigned short) (((long) 1));
										BGL_U16VSET(BgL_arg1958z00_3057, ((long) 0),
											BgL_auxz00_5300);
									} BUNSPEC;
								}
								{
									long BgL_iz00_1176;

									long BgL_cz00_1177;

									BgL_iz00_1176 = ((long) 1);
									BgL_cz00_1177 = ((long) 0);
								BgL_zc3anonymousza32085ze3z83_1178:
									if ((BgL_iz00_1176 < BgL_lenyz00_1172))
										{	/* Unsafe/bignumber.scm 414 */
											long BgL_wz00_1180;

											{	/* Unsafe/bignumber.scm 414 */
												long BgL_arg2096z00_1189;

												{	/* Unsafe/bignumber.scm 414 */
													unsigned short BgL_arg2097z00_1190;

													unsigned short BgL_arg2098z00_1191;

													{	/* Unsafe/bignumber.scm 414 */
														int BgL_iz00_3062;

														BgL_iz00_3062 = (int) (BgL_iz00_1176);
														{	/* Unsafe/bignumber.scm 414 */
															obj_t BgL_arg1960z00_3063;

															BgL_arg1960z00_3063 =
																BGL_BIGNUM_U16VECT(BgL_xz00_1169);
															{	/* Unsafe/bignumber.scm 414 */
																long BgL_auxz00_5307;

																BgL_auxz00_5307 = (long) (BgL_iz00_3062);
																BgL_arg2097z00_1190 =
																	BGL_U16VREF(BgL_arg1960z00_3063,
																	BgL_auxz00_5307);
													}}}
													{	/* Unsafe/bignumber.scm 415 */
														int BgL_iz00_3065;

														BgL_iz00_3065 = (int) (BgL_iz00_1176);
														{	/* Unsafe/bignumber.scm 415 */
															obj_t BgL_arg1960z00_3066;

															BgL_arg1960z00_3066 =
																BGL_BIGNUM_U16VECT(BgL_yz00_1170);
															{	/* Unsafe/bignumber.scm 415 */
																long BgL_auxz00_5312;

																BgL_auxz00_5312 = (long) (BgL_iz00_3065);
																BgL_arg2098z00_1191 =
																	BGL_U16VREF(BgL_arg1960z00_3066,
																	BgL_auxz00_5312);
													}}}
													BgL_arg2096z00_1189 =
														(
														(long) (BgL_arg2097z00_1190) +
														(long) (BgL_arg2098z00_1191));
												}
												BgL_wz00_1180 = (BgL_arg2096z00_1189 + BgL_cz00_1177);
											}
											if ((BgL_wz00_1180 < (((long) 1) << (int) (((long) 14)))))
												{	/* Unsafe/bignumber.scm 417 */
													{	/* Unsafe/bignumber.scm 419 */
														int BgL_iz00_3076;

														int BgL_digitz00_3077;

														BgL_iz00_3076 = (int) (BgL_iz00_1176);
														BgL_digitz00_3077 = (int) (BgL_wz00_1180);
														{	/* Unsafe/bignumber.scm 419 */
															obj_t BgL_arg1961z00_3078;

															BgL_arg1961z00_3078 =
																BGL_BIGNUM_U16VECT(BgL_rz00_1174);
															{	/* Unsafe/bignumber.scm 419 */
																unsigned short BgL_auxz00_5328;

																long BgL_auxz00_5326;

																BgL_auxz00_5328 =
																	(unsigned short) (BgL_digitz00_3077);
																BgL_auxz00_5326 = (long) (BgL_iz00_3076);
																BGL_U16VSET(BgL_arg1961z00_3078,
																	BgL_auxz00_5326, BgL_auxz00_5328);
															} BUNSPEC;
													}}
													{
														long BgL_cz00_5333;

														long BgL_iz00_5331;

														BgL_iz00_5331 = (BgL_iz00_1176 + ((long) 1));
														BgL_cz00_5333 = ((long) 0);
														BgL_cz00_1177 = BgL_cz00_5333;
														BgL_iz00_1176 = BgL_iz00_5331;
														goto BgL_zc3anonymousza32085ze3z83_1178;
													}
												}
											else
												{	/* Unsafe/bignumber.scm 417 */
													{	/* Unsafe/bignumber.scm 422 */
														long BgL_arg2091z00_1184;

														BgL_arg2091z00_1184 =
															(BgL_wz00_1180 -
															(((long) 1) << (int) (((long) 14))));
														{	/* Unsafe/bignumber.scm 422 */
															int BgL_iz00_3086;

															int BgL_digitz00_3087;

															BgL_iz00_3086 = (int) (BgL_iz00_1176);
															BgL_digitz00_3087 = (int) (BgL_arg2091z00_1184);
															{	/* Unsafe/bignumber.scm 422 */
																obj_t BgL_arg1961z00_3088;

																BgL_arg1961z00_3088 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1174);
																{	/* Unsafe/bignumber.scm 422 */
																	unsigned short BgL_auxz00_5342;

																	long BgL_auxz00_5340;

																	BgL_auxz00_5342 =
																		(unsigned short) (BgL_digitz00_3087);
																	BgL_auxz00_5340 = (long) (BgL_iz00_3086);
																	BGL_U16VSET(BgL_arg1961z00_3088,
																		BgL_auxz00_5340, BgL_auxz00_5342);
																} BUNSPEC;
													}}}
													{
														long BgL_cz00_5347;

														long BgL_iz00_5345;

														BgL_iz00_5345 = (BgL_iz00_1176 + ((long) 1));
														BgL_cz00_5347 = ((long) 1);
														BgL_cz00_1177 = BgL_cz00_5347;
														BgL_iz00_1176 = BgL_iz00_5345;
														goto BgL_zc3anonymousza32085ze3z83_1178;
													}
												}
										}
									else
										{
											long BgL_iz00_1193;

											long BgL_cz00_1194;

											BgL_iz00_1193 = BgL_iz00_1176;
											BgL_cz00_1194 = BgL_cz00_1177;
										BgL_zc3anonymousza32099ze3z83_1195:
											if ((BgL_iz00_1193 < BgL_lenxz00_1171))
												{	/* Unsafe/bignumber.scm 428 */
													long BgL_wz00_1197;

													{	/* Unsafe/bignumber.scm 428 */
														unsigned short BgL_arg2109z00_1206;

														{	/* Unsafe/bignumber.scm 428 */
															int BgL_iz00_3094;

															BgL_iz00_3094 = (int) (BgL_iz00_1193);
															{	/* Unsafe/bignumber.scm 428 */
																obj_t BgL_arg1960z00_3095;

																BgL_arg1960z00_3095 =
																	BGL_BIGNUM_U16VECT(BgL_xz00_1169);
																{	/* Unsafe/bignumber.scm 428 */
																	long BgL_auxz00_5352;

																	BgL_auxz00_5352 = (long) (BgL_iz00_3094);
																	BgL_arg2109z00_1206 =
																		BGL_U16VREF(BgL_arg1960z00_3095,
																		BgL_auxz00_5352);
														}}}
														BgL_wz00_1197 =
															((long) (BgL_arg2109z00_1206) + BgL_cz00_1194);
													}
													if (
														(BgL_wz00_1197 <
															(((long) 1) << (int) (((long) 14)))))
														{	/* Unsafe/bignumber.scm 429 */
															{	/* Unsafe/bignumber.scm 431 */
																int BgL_iz00_3103;

																int BgL_digitz00_3104;

																BgL_iz00_3103 = (int) (BgL_iz00_1193);
																BgL_digitz00_3104 = (int) (BgL_wz00_1197);
																{	/* Unsafe/bignumber.scm 431 */
																	obj_t BgL_arg1961z00_3105;

																	BgL_arg1961z00_3105 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1174);
																	{	/* Unsafe/bignumber.scm 431 */
																		unsigned short BgL_auxz00_5366;

																		long BgL_auxz00_5364;

																		BgL_auxz00_5366 =
																			(unsigned short) (BgL_digitz00_3104);
																		BgL_auxz00_5364 = (long) (BgL_iz00_3103);
																		BGL_U16VSET(BgL_arg1961z00_3105,
																			BgL_auxz00_5364, BgL_auxz00_5366);
																	} BUNSPEC;
															}}
															{
																long BgL_cz00_5371;

																long BgL_iz00_5369;

																BgL_iz00_5369 = (BgL_iz00_1193 + ((long) 1));
																BgL_cz00_5371 = ((long) 0);
																BgL_cz00_1194 = BgL_cz00_5371;
																BgL_iz00_1193 = BgL_iz00_5369;
																goto BgL_zc3anonymousza32099ze3z83_1195;
															}
														}
													else
														{	/* Unsafe/bignumber.scm 429 */
															{	/* Unsafe/bignumber.scm 434 */
																long BgL_arg2104z00_1201;

																BgL_arg2104z00_1201 =
																	(BgL_wz00_1197 -
																	(((long) 1) << (int) (((long) 14))));
																{	/* Unsafe/bignumber.scm 434 */
																	int BgL_iz00_3113;

																	int BgL_digitz00_3114;

																	BgL_iz00_3113 = (int) (BgL_iz00_1193);
																	BgL_digitz00_3114 =
																		(int) (BgL_arg2104z00_1201);
																	{	/* Unsafe/bignumber.scm 434 */
																		obj_t BgL_arg1961z00_3115;

																		BgL_arg1961z00_3115 =
																			BGL_BIGNUM_U16VECT(BgL_rz00_1174);
																		{	/* Unsafe/bignumber.scm 434 */
																			unsigned short BgL_auxz00_5380;

																			long BgL_auxz00_5378;

																			BgL_auxz00_5380 =
																				(unsigned short) (BgL_digitz00_3114);
																			BgL_auxz00_5378 = (long) (BgL_iz00_3113);
																			BGL_U16VSET(BgL_arg1961z00_3115,
																				BgL_auxz00_5378, BgL_auxz00_5380);
																		} BUNSPEC;
															}}}
															{
																long BgL_cz00_5385;

																long BgL_iz00_5383;

																BgL_iz00_5383 = (BgL_iz00_1193 + ((long) 1));
																BgL_cz00_5385 = ((long) 1);
																BgL_cz00_1194 = BgL_cz00_5385;
																BgL_iz00_1193 = BgL_iz00_5383;
																goto BgL_zc3anonymousza32099ze3z83_1195;
															}
														}
												}
											else
												{	/* Unsafe/bignumber.scm 426 */
													if ((BgL_cz00_1194 == ((long) 0)))
														{	/* Unsafe/bignumber.scm 437 */
															return
																BGl_bignumzd2shrinkzd2zz__bignumz00
																(BgL_rz00_1174, BgL_lenxz00_1171);
														}
													else
														{	/* Unsafe/bignumber.scm 437 */
															{	/* Unsafe/bignumber.scm 440 */
																int BgL_iz00_3121;

																int BgL_digitz00_3122;

																BgL_iz00_3121 = (int) (BgL_lenxz00_1171);
																BgL_digitz00_3122 = (int) (BgL_cz00_1194);
																{	/* Unsafe/bignumber.scm 440 */
																	obj_t BgL_arg1961z00_3123;

																	BgL_arg1961z00_3123 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1174);
																	{	/* Unsafe/bignumber.scm 440 */
																		unsigned short BgL_auxz00_5394;

																		long BgL_auxz00_5392;

																		BgL_auxz00_5394 =
																			(unsigned short) (BgL_digitz00_3122);
																		BgL_auxz00_5392 = (long) (BgL_iz00_3121);
																		BGL_U16VSET(BgL_arg1961z00_3123,
																			BgL_auxz00_5392, BgL_auxz00_5394);
																	} BUNSPEC;
															}}
															return BgL_rz00_1174;
														}
												}
										}
								}
							}
						}
					else
						{
							long BgL_lenyz00_5400;

							long BgL_lenxz00_5399;

							obj_t BgL_yz00_5398;

							obj_t BgL_xz00_5397;

							BgL_xz00_5397 = BgL_xz00_40;
							BgL_yz00_5398 = BgL_yz00_41;
							BgL_lenxz00_5399 = BgL_lenxz00_1166;
							BgL_lenyz00_5400 = BgL_lenyz00_1167;
							BgL_lenyz00_1172 = BgL_lenyz00_5400;
							BgL_lenxz00_1171 = BgL_lenxz00_5399;
							BgL_yz00_1170 = BgL_yz00_5398;
							BgL_xz00_1169 = BgL_xz00_5397;
							goto BgL_zc3anonymousza32084ze3z83_1173;
						}
				}
			}
		}
	}



/* bignum-sub-nonneg */
	obj_t BGl_bignumzd2subzd2nonnegz00zz__bignumz00(obj_t BgL_xz00_42,
		obj_t BgL_yz00_43)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 449 */
			{
				obj_t BgL_xz00_1234;

				obj_t BgL_yz00_1235;

				long BgL_lenxz00_1236;

				long BgL_lenyz00_1237;

				obj_t BgL_rz00_1216;

				{	/* Unsafe/bignumber.scm 502 */
					long BgL_arg2112z00_1214;

					long BgL_arg2113z00_1215;

					{	/* Unsafe/bignumber.scm 502 */
						obj_t BgL_arg1955z00_3125;

						BgL_arg1955z00_3125 = BGL_BIGNUM_U16VECT(BgL_xz00_42);
						BgL_arg2112z00_1214 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3125);
					}
					{	/* Unsafe/bignumber.scm 502 */
						obj_t BgL_arg1955z00_3128;

						BgL_arg1955z00_3128 = BGL_BIGNUM_U16VECT(BgL_yz00_43);
						BgL_arg2113z00_1215 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3128);
					}
					BgL_xz00_1234 = BgL_xz00_42;
					BgL_yz00_1235 = BgL_yz00_43;
					BgL_lenxz00_1236 = BgL_arg2112z00_1214;
					BgL_lenyz00_1237 = BgL_arg2113z00_1215;
					{	/* Unsafe/bignumber.scm 466 */
						obj_t BgL_rz00_1239;

						{	/* Unsafe/bignumber.scm 466 */
							obj_t BgL_res3036z00_3162;

							{	/* Unsafe/bignumber.scm 466 */
								int BgL_lenz00_3158;

								BgL_lenz00_3158 = (int) (BgL_lenxz00_1236);
								{	/* Unsafe/bignumber.scm 466 */
									obj_t BgL_arg1953z00_3159;

									{	/* Unsafe/bignumber.scm 466 */

										BgL_arg1953z00_3159 =
											BGl_makezd2u16vectorzd2zz__srfi4z00(
											(long) (BgL_lenz00_3158), BINT(((long) 0)));
									}
									BgL_res3036z00_3162 = bgl_make_bignum(BgL_arg1953z00_3159);
							}}
							BgL_rz00_1239 = BgL_res3036z00_3162;
						}
						{
							long BgL_iz00_1241;

							long BgL_bz00_1242;

							BgL_iz00_1241 = ((long) 1);
							BgL_bz00_1242 = ((long) 0);
						BgL_zc3anonymousza32128ze3z83_1243:
							if ((BgL_iz00_1241 < BgL_lenyz00_1237))
								{	/* Unsafe/bignumber.scm 471 */
									long BgL_wz00_1245;

									{	/* Unsafe/bignumber.scm 471 */
										long BgL_arg2137z00_1253;

										{	/* Unsafe/bignumber.scm 471 */
											unsigned short BgL_arg2138z00_1254;

											unsigned short BgL_arg2139z00_1255;

											{	/* Unsafe/bignumber.scm 471 */
												int BgL_iz00_3166;

												BgL_iz00_3166 = (int) (BgL_iz00_1241);
												{	/* Unsafe/bignumber.scm 471 */
													obj_t BgL_arg1960z00_3167;

													BgL_arg1960z00_3167 =
														BGL_BIGNUM_U16VECT(BgL_xz00_1234);
													{	/* Unsafe/bignumber.scm 471 */
														long BgL_auxz00_5414;

														BgL_auxz00_5414 = (long) (BgL_iz00_3166);
														BgL_arg2138z00_1254 =
															BGL_U16VREF(BgL_arg1960z00_3167, BgL_auxz00_5414);
											}}}
											{	/* Unsafe/bignumber.scm 472 */
												int BgL_iz00_3169;

												BgL_iz00_3169 = (int) (BgL_iz00_1241);
												{	/* Unsafe/bignumber.scm 472 */
													obj_t BgL_arg1960z00_3170;

													BgL_arg1960z00_3170 =
														BGL_BIGNUM_U16VECT(BgL_yz00_1235);
													{	/* Unsafe/bignumber.scm 472 */
														long BgL_auxz00_5419;

														BgL_auxz00_5419 = (long) (BgL_iz00_3169);
														BgL_arg2139z00_1255 =
															BGL_U16VREF(BgL_arg1960z00_3170, BgL_auxz00_5419);
											}}}
											BgL_arg2137z00_1253 =
												(
												(long) (BgL_arg2138z00_1254) -
												(long) (BgL_arg2139z00_1255));
										}
										BgL_wz00_1245 = (BgL_arg2137z00_1253 - BgL_bz00_1242);
									}
									if ((BgL_wz00_1245 < ((long) 0)))
										{	/* Unsafe/bignumber.scm 474 */
											{	/* Unsafe/bignumber.scm 476 */
												long BgL_arg2131z00_1247;

												BgL_arg2131z00_1247 =
													(BgL_wz00_1245 + (((long) 1) << (int) (((long) 14))));
												{	/* Unsafe/bignumber.scm 476 */
													int BgL_iz00_3182;

													int BgL_digitz00_3183;

													BgL_iz00_3182 = (int) (BgL_iz00_1241);
													BgL_digitz00_3183 = (int) (BgL_arg2131z00_1247);
													{	/* Unsafe/bignumber.scm 476 */
														obj_t BgL_arg1961z00_3184;

														BgL_arg1961z00_3184 =
															BGL_BIGNUM_U16VECT(BgL_rz00_1239);
														{	/* Unsafe/bignumber.scm 476 */
															unsigned short BgL_auxz00_5436;

															long BgL_auxz00_5434;

															BgL_auxz00_5436 =
																(unsigned short) (BgL_digitz00_3183);
															BgL_auxz00_5434 = (long) (BgL_iz00_3182);
															BGL_U16VSET(BgL_arg1961z00_3184, BgL_auxz00_5434,
																BgL_auxz00_5436);
														} BUNSPEC;
											}}}
											{
												long BgL_bz00_5441;

												long BgL_iz00_5439;

												BgL_iz00_5439 = (BgL_iz00_1241 + ((long) 1));
												BgL_bz00_5441 = ((long) 1);
												BgL_bz00_1242 = BgL_bz00_5441;
												BgL_iz00_1241 = BgL_iz00_5439;
												goto BgL_zc3anonymousza32128ze3z83_1243;
											}
										}
									else
										{	/* Unsafe/bignumber.scm 474 */
											{	/* Unsafe/bignumber.scm 479 */
												int BgL_iz00_3188;

												int BgL_digitz00_3189;

												BgL_iz00_3188 = (int) (BgL_iz00_1241);
												BgL_digitz00_3189 = (int) (BgL_wz00_1245);
												{	/* Unsafe/bignumber.scm 479 */
													obj_t BgL_arg1961z00_3190;

													BgL_arg1961z00_3190 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1239);
													{	/* Unsafe/bignumber.scm 479 */
														unsigned short BgL_auxz00_5447;

														long BgL_auxz00_5445;

														BgL_auxz00_5447 =
															(unsigned short) (BgL_digitz00_3189);
														BgL_auxz00_5445 = (long) (BgL_iz00_3188);
														BGL_U16VSET(BgL_arg1961z00_3190, BgL_auxz00_5445,
															BgL_auxz00_5447);
													} BUNSPEC;
											}}
											{
												long BgL_bz00_5452;

												long BgL_iz00_5450;

												BgL_iz00_5450 = (BgL_iz00_1241 + ((long) 1));
												BgL_bz00_5452 = ((long) 0);
												BgL_bz00_1242 = BgL_bz00_5452;
												BgL_iz00_1241 = BgL_iz00_5450;
												goto BgL_zc3anonymousza32128ze3z83_1243;
											}
										}
								}
							else
								{
									long BgL_iz00_1257;

									long BgL_bz00_1258;

									BgL_iz00_1257 = BgL_iz00_1241;
									BgL_bz00_1258 = BgL_bz00_1242;
								BgL_zc3anonymousza32140ze3z83_1259:
									if ((BgL_iz00_1257 < BgL_lenxz00_1236))
										{	/* Unsafe/bignumber.scm 485 */
											long BgL_wz00_1261;

											{	/* Unsafe/bignumber.scm 485 */
												unsigned short BgL_arg2150z00_1269;

												{	/* Unsafe/bignumber.scm 485 */
													int BgL_iz00_3196;

													BgL_iz00_3196 = (int) (BgL_iz00_1257);
													{	/* Unsafe/bignumber.scm 485 */
														obj_t BgL_arg1960z00_3197;

														BgL_arg1960z00_3197 =
															BGL_BIGNUM_U16VECT(BgL_xz00_1234);
														{	/* Unsafe/bignumber.scm 485 */
															long BgL_auxz00_5457;

															BgL_auxz00_5457 = (long) (BgL_iz00_3196);
															BgL_arg2150z00_1269 =
																BGL_U16VREF(BgL_arg1960z00_3197,
																BgL_auxz00_5457);
												}}}
												BgL_wz00_1261 =
													((long) (BgL_arg2150z00_1269) - BgL_bz00_1258);
											}
											if ((BgL_wz00_1261 < ((long) 0)))
												{	/* Unsafe/bignumber.scm 486 */
													{	/* Unsafe/bignumber.scm 488 */
														long BgL_arg2144z00_1263;

														BgL_arg2144z00_1263 =
															(BgL_wz00_1261 +
															(((long) 1) << (int) (((long) 14))));
														{	/* Unsafe/bignumber.scm 488 */
															int BgL_iz00_3207;

															int BgL_digitz00_3208;

															BgL_iz00_3207 = (int) (BgL_iz00_1257);
															BgL_digitz00_3208 = (int) (BgL_arg2144z00_1263);
															{	/* Unsafe/bignumber.scm 488 */
																obj_t BgL_arg1961z00_3209;

																BgL_arg1961z00_3209 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1239);
																{	/* Unsafe/bignumber.scm 488 */
																	unsigned short BgL_auxz00_5472;

																	long BgL_auxz00_5470;

																	BgL_auxz00_5472 =
																		(unsigned short) (BgL_digitz00_3208);
																	BgL_auxz00_5470 = (long) (BgL_iz00_3207);
																	BGL_U16VSET(BgL_arg1961z00_3209,
																		BgL_auxz00_5470, BgL_auxz00_5472);
																} BUNSPEC;
													}}}
													{
														long BgL_bz00_5477;

														long BgL_iz00_5475;

														BgL_iz00_5475 = (BgL_iz00_1257 + ((long) 1));
														BgL_bz00_5477 = ((long) 1);
														BgL_bz00_1258 = BgL_bz00_5477;
														BgL_iz00_1257 = BgL_iz00_5475;
														goto BgL_zc3anonymousza32140ze3z83_1259;
													}
												}
											else
												{	/* Unsafe/bignumber.scm 486 */
													{	/* Unsafe/bignumber.scm 491 */
														int BgL_iz00_3213;

														int BgL_digitz00_3214;

														BgL_iz00_3213 = (int) (BgL_iz00_1257);
														BgL_digitz00_3214 = (int) (BgL_wz00_1261);
														{	/* Unsafe/bignumber.scm 491 */
															obj_t BgL_arg1961z00_3215;

															BgL_arg1961z00_3215 =
																BGL_BIGNUM_U16VECT(BgL_rz00_1239);
															{	/* Unsafe/bignumber.scm 491 */
																unsigned short BgL_auxz00_5483;

																long BgL_auxz00_5481;

																BgL_auxz00_5483 =
																	(unsigned short) (BgL_digitz00_3214);
																BgL_auxz00_5481 = (long) (BgL_iz00_3213);
																BGL_U16VSET(BgL_arg1961z00_3215,
																	BgL_auxz00_5481, BgL_auxz00_5483);
															} BUNSPEC;
													}}
													{
														long BgL_bz00_5488;

														long BgL_iz00_5486;

														BgL_iz00_5486 = (BgL_iz00_1257 + ((long) 1));
														BgL_bz00_5488 = ((long) 0);
														BgL_bz00_1258 = BgL_bz00_5488;
														BgL_iz00_1257 = BgL_iz00_5486;
														goto BgL_zc3anonymousza32140ze3z83_1259;
													}
												}
										}
									else
										{	/* Unsafe/bignumber.scm 483 */
											if ((BgL_bz00_1258 == ((long) 0)))
												{	/* Unsafe/bignumber.scm 495 */
													obj_t BgL_arg1958z00_3223;

													BgL_arg1958z00_3223 =
														BGL_BIGNUM_U16VECT(BgL_rz00_1239);
													{	/* Unsafe/bignumber.scm 495 */
														unsigned short BgL_auxz00_5492;

														BgL_auxz00_5492 = (unsigned short) (((long) 1));
														BGL_U16VSET(BgL_arg1958z00_3223, ((long) 0),
															BgL_auxz00_5492);
													} BUNSPEC;
												}
											else
												{	/* Unsafe/bignumber.scm 494 */
													{	/* Unsafe/bignumber.scm 497 */
														obj_t BgL_arg1958z00_3228;

														BgL_arg1958z00_3228 =
															BGL_BIGNUM_U16VECT(BgL_rz00_1239);
														{	/* Unsafe/bignumber.scm 497 */
															unsigned short BgL_auxz00_5496;

															BgL_auxz00_5496 = (unsigned short) (((long) 0));
															BGL_U16VSET(BgL_arg1958z00_3228, ((long) 0),
																BgL_auxz00_5496);
														} BUNSPEC;
													}
													{	/* Unsafe/bignumber.scm 498 */
														bool_t BgL_auxz00_5499;

														BgL_rz00_1216 = BgL_rz00_1239;
														{	/* Unsafe/bignumber.scm 452 */
															long BgL_lrz00_1218;

															{	/* Unsafe/bignumber.scm 452 */
																obj_t BgL_arg1955z00_3131;

																BgL_arg1955z00_3131 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1216);
																BgL_lrz00_1218 =
																	BGL_HVECTOR_LENGTH(BgL_arg1955z00_3131);
															}
															{
																long BgL_iz00_1220;

																long BgL_cz00_1221;

																BgL_iz00_1220 = ((long) 1);
																BgL_cz00_1221 = ((long) 0);
															BgL_zc3anonymousza32115ze3z83_1222:
																if ((BgL_iz00_1220 < BgL_lrz00_1218))
																	{	/* Unsafe/bignumber.scm 456 */
																		long BgL_wz00_1224;

																		{	/* Unsafe/bignumber.scm 456 */
																			unsigned short BgL_arg2126z00_1232;

																			{	/* Unsafe/bignumber.scm 456 */
																				int BgL_iz00_3136;

																				BgL_iz00_3136 = (int) (BgL_iz00_1220);
																				{	/* Unsafe/bignumber.scm 456 */
																					obj_t BgL_arg1960z00_3137;

																					BgL_arg1960z00_3137 =
																						BGL_BIGNUM_U16VECT(BgL_rz00_1216);
																					{	/* Unsafe/bignumber.scm 456 */
																						long BgL_auxz00_5506;

																						BgL_auxz00_5506 =
																							(long) (BgL_iz00_3136);
																						BgL_arg2126z00_1232 =
																							BGL_U16VREF(BgL_arg1960z00_3137,
																							BgL_auxz00_5506);
																			}}}
																			BgL_wz00_1224 =
																				(
																				(long) (BgL_arg2126z00_1232) +
																				BgL_cz00_1221);
																		}
																		if ((((long) 0) < BgL_wz00_1224))
																			{	/* Unsafe/bignumber.scm 457 */
																				{	/* Unsafe/bignumber.scm 459 */
																					long BgL_arg2118z00_1226;

																					BgL_arg2118z00_1226 =
																						(
																						(((long) 1) <<
																							(int) (((long) 14))) -
																						BgL_wz00_1224);
																					{	/* Unsafe/bignumber.scm 459 */
																						int BgL_iz00_3147;

																						int BgL_digitz00_3148;

																						BgL_iz00_3147 =
																							(int) (BgL_iz00_1220);
																						BgL_digitz00_3148 =
																							(int) (BgL_arg2118z00_1226);
																						{	/* Unsafe/bignumber.scm 459 */
																							obj_t BgL_arg1961z00_3149;

																							BgL_arg1961z00_3149 =
																								BGL_BIGNUM_U16VECT
																								(BgL_rz00_1216);
																							{	/* Unsafe/bignumber.scm 459 */
																								unsigned short BgL_auxz00_5521;

																								long BgL_auxz00_5519;

																								BgL_auxz00_5521 =
																									(unsigned
																									short) (BgL_digitz00_3148);
																								BgL_auxz00_5519 =
																									(long) (BgL_iz00_3147);
																								BGL_U16VSET(BgL_arg1961z00_3149,
																									BgL_auxz00_5519,
																									BgL_auxz00_5521);
																							} BUNSPEC;
																				}}}
																				{
																					long BgL_cz00_5526;

																					long BgL_iz00_5524;

																					BgL_iz00_5524 =
																						(BgL_iz00_1220 + ((long) 1));
																					BgL_cz00_5526 = ((long) 1);
																					BgL_cz00_1221 = BgL_cz00_5526;
																					BgL_iz00_1220 = BgL_iz00_5524;
																					goto
																						BgL_zc3anonymousza32115ze3z83_1222;
																				}
																			}
																		else
																			{	/* Unsafe/bignumber.scm 457 */
																				{	/* Unsafe/bignumber.scm 462 */
																					int BgL_iz00_3153;

																					BgL_iz00_3153 = (int) (BgL_iz00_1220);
																					{	/* Unsafe/bignumber.scm 462 */
																						obj_t BgL_arg1961z00_3155;

																						BgL_arg1961z00_3155 =
																							BGL_BIGNUM_U16VECT(BgL_rz00_1216);
																						{	/* Unsafe/bignumber.scm 462 */
																							unsigned short BgL_auxz00_5531;

																							long BgL_auxz00_5529;

																							BgL_auxz00_5531 =
																								(unsigned short) (((long) 0));
																							BgL_auxz00_5529 =
																								(long) (BgL_iz00_3153);
																							BGL_U16VSET(BgL_arg1961z00_3155,
																								BgL_auxz00_5529,
																								BgL_auxz00_5531);
																						} BUNSPEC;
																				}}
																				{
																					long BgL_cz00_5536;

																					long BgL_iz00_5534;

																					BgL_iz00_5534 =
																						(BgL_iz00_1220 + ((long) 1));
																					BgL_cz00_5536 = ((long) 0);
																					BgL_cz00_1221 = BgL_cz00_5536;
																					BgL_iz00_1220 = BgL_iz00_5534;
																					goto
																						BgL_zc3anonymousza32115ze3z83_1222;
																				}
																			}
																	}
																else
																	{	/* Unsafe/bignumber.scm 454 */
																		BgL_auxz00_5499 = ((bool_t) 0);
																	}
															}
														}
														BBOOL(BgL_auxz00_5499);
													}
												}
										}
								}
						}
						return
							BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
							(BgL_rz00_1239);
					}
				}
			}
		}
	}



/* bignum-sum2 */
	obj_t BGl_bignumzd2sum2zd2zz__bignumz00(obj_t BgL_xz00_44, obj_t BgL_yz00_45,
		unsigned short BgL_signzd2xzd2_46, obj_t BgL_signzd2yzd2_47)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 504 */
			if (((long) (BgL_signzd2xzd2_46) == (long) CINT(BgL_signzd2yzd2_47)))
				{	/* Unsafe/bignumber.scm 513 */
					obj_t BgL_arg2153z00_1277;

					BgL_arg2153z00_1277 =
						BGl_bignumzd2addzd2nonnegz00zz__bignumz00(BgL_xz00_44, BgL_yz00_45);
					{	/* Unsafe/bignumber.scm 513 */
						bool_t BgL_testz00_5544;

						{	/* Unsafe/bignumber.scm 513 */
							unsigned short BgL_arg2161z00_3235;

							{	/* Unsafe/bignumber.scm 513 */
								obj_t BgL_arg1956z00_3238;

								BgL_arg1956z00_3238 = BGL_BIGNUM_U16VECT(BgL_arg2153z00_1277);
								BgL_arg2161z00_3235 =
									BGL_U16VREF(BgL_arg1956z00_3238, ((long) 0));
							}
							BgL_testz00_5544 =
								((long) (BgL_arg2161z00_3235) == (long) (BgL_signzd2xzd2_46));
						}
						if (BgL_testz00_5544)
							{	/* Unsafe/bignumber.scm 513 */
								BGl_bignumzd2signzd2setz12z12zz__bignumz00(BgL_arg2153z00_1277,
									(int) (((long) 1)));
							}
						else
							{	/* Unsafe/bignumber.scm 513 */
								BGl_bignumzd2signzd2setz12z12zz__bignumz00(BgL_arg2153z00_1277,
									(int) (((long) 0)));
					}}
					return
						BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
						(BgL_arg2153z00_1277);
				}
			else
				{	/* Unsafe/bignumber.scm 514 */
					bool_t BgL_testz00_5555;

					{	/* Unsafe/bignumber.scm 514 */
						long BgL_arg2157z00_1281;

						long BgL_arg2158z00_1282;

						{	/* Unsafe/bignumber.scm 514 */
							obj_t BgL_arg1955z00_3246;

							BgL_arg1955z00_3246 = BGL_BIGNUM_U16VECT(BgL_xz00_44);
							BgL_arg2157z00_1281 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3246);
						}
						{	/* Unsafe/bignumber.scm 514 */
							obj_t BgL_arg1955z00_3249;

							BgL_arg1955z00_3249 = BGL_BIGNUM_U16VECT(BgL_yz00_45);
							BgL_arg2158z00_1282 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3249);
						}
						BgL_testz00_5555 = (BgL_arg2157z00_1281 < BgL_arg2158z00_1282);
					}
					if (BgL_testz00_5555)
						{	/* Unsafe/bignumber.scm 515 */
							obj_t BgL_arg2155z00_1279;

							BgL_arg2155z00_1279 =
								BGl_bignumzd2subzd2nonnegz00zz__bignumz00(BgL_yz00_45,
								BgL_xz00_44);
							{	/* Unsafe/bignumber.scm 515 */
								bool_t BgL_testz00_5562;

								{	/* Unsafe/bignumber.scm 515 */
									unsigned short BgL_arg2161z00_3256;

									{	/* Unsafe/bignumber.scm 515 */
										obj_t BgL_arg1956z00_3259;

										BgL_arg1956z00_3259 =
											BGL_BIGNUM_U16VECT(BgL_arg2155z00_1279);
										BgL_arg2161z00_3256 =
											BGL_U16VREF(BgL_arg1956z00_3259, ((long) 0));
									}
									BgL_testz00_5562 =
										(
										(long) (BgL_arg2161z00_3256) ==
										(long) CINT(BgL_signzd2yzd2_47));
								}
								if (BgL_testz00_5562)
									{	/* Unsafe/bignumber.scm 515 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg2155z00_1279, (int) (((long) 1)));
									}
								else
									{	/* Unsafe/bignumber.scm 515 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg2155z00_1279, (int) (((long) 0)));
							}}
							return
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_arg2155z00_1279);
						}
					else
						{	/* Unsafe/bignumber.scm 517 */
							obj_t BgL_arg2156z00_1280;

							BgL_arg2156z00_1280 =
								BGl_bignumzd2subzd2nonnegz00zz__bignumz00(BgL_xz00_44,
								BgL_yz00_45);
							{	/* Unsafe/bignumber.scm 517 */
								bool_t BgL_testz00_5574;

								{	/* Unsafe/bignumber.scm 517 */
									unsigned short BgL_arg2161z00_3269;

									{	/* Unsafe/bignumber.scm 517 */
										obj_t BgL_arg1956z00_3272;

										BgL_arg1956z00_3272 =
											BGL_BIGNUM_U16VECT(BgL_arg2156z00_1280);
										BgL_arg2161z00_3269 =
											BGL_U16VREF(BgL_arg1956z00_3272, ((long) 0));
									}
									BgL_testz00_5574 =
										(
										(long) (BgL_arg2161z00_3269) ==
										(long) (BgL_signzd2xzd2_46));
								}
								if (BgL_testz00_5574)
									{	/* Unsafe/bignumber.scm 517 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg2156z00_1280, (int) (((long) 1)));
									}
								else
									{	/* Unsafe/bignumber.scm 517 */
										BGl_bignumzd2signzd2setz12z12zz__bignumz00
											(BgL_arg2156z00_1280, (int) (((long) 0)));
							}}
							return
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_arg2156z00_1280);
						}
				}
		}
	}



/* $+bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_add(obj_t BgL_xz00_48, obj_t BgL_yz00_49)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 519 */
			{	/* Unsafe/bignumber.scm 520 */
				unsigned short BgL_arg2163z00_3298;

				unsigned short BgL_arg2164z00_3299;

				{	/* Unsafe/bignumber.scm 520 */
					obj_t BgL_arg1956z00_3301;

					BgL_arg1956z00_3301 = BGL_BIGNUM_U16VECT(BgL_xz00_48);
					BgL_arg2163z00_3298 = BGL_U16VREF(BgL_arg1956z00_3301, ((long) 0));
				}
				{	/* Unsafe/bignumber.scm 520 */
					obj_t BgL_arg1956z00_3304;

					BgL_arg1956z00_3304 = BGL_BIGNUM_U16VECT(BgL_yz00_49);
					BgL_arg2164z00_3299 = BGL_U16VREF(BgL_arg1956z00_3304, ((long) 0));
				}
				return
					BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_48, BgL_yz00_49,
					BgL_arg2163z00_3298, BINT(BgL_arg2164z00_3299));
			}
		}
	}



/* _$+bx */
	obj_t BGl__z42zb2bxzf0zz__bignumz00(obj_t BgL_envz00_4655,
		obj_t BgL_xz00_4656, obj_t BgL_yz00_4657)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 519 */
			{	/* Unsafe/bignumber.scm 520 */
				obj_t BgL_auxz00_5598;

				obj_t BgL_auxz00_5591;

				if (BIGNUMP(BgL_yz00_4657))
					{	/* Unsafe/bignumber.scm 520 */
						BgL_auxz00_5598 = BgL_yz00_4657;
					}
				else
					{
						obj_t BgL_auxz00_5601;

						BgL_auxz00_5601 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 17829)), BGl_string3186z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4657);
						FAILURE(BgL_auxz00_5601, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4656))
					{	/* Unsafe/bignumber.scm 520 */
						BgL_auxz00_5591 = BgL_xz00_4656;
					}
				else
					{
						obj_t BgL_auxz00_5594;

						BgL_auxz00_5594 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 17829)), BGl_string3186z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4656);
						FAILURE(BgL_auxz00_5594, BFALSE, BFALSE);
					}
				return bgl_bignum_add(BgL_auxz00_5591, BgL_auxz00_5598);
			}
		}
	}



/* $-bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_sub(obj_t BgL_xz00_50, obj_t BgL_yz00_51)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 522 */
			{	/* Unsafe/bignumber.scm 523 */
				unsigned short BgL_arg2165z00_3306;

				long BgL_arg2166z00_3307;

				{	/* Unsafe/bignumber.scm 523 */
					obj_t BgL_arg1956z00_3311;

					BgL_arg1956z00_3311 = BGL_BIGNUM_U16VECT(BgL_xz00_50);
					BgL_arg2165z00_3306 = BGL_U16VREF(BgL_arg1956z00_3311, ((long) 0));
				}
				{	/* Unsafe/bignumber.scm 523 */
					unsigned short BgL_arg2168z00_3309;

					{	/* Unsafe/bignumber.scm 523 */
						obj_t BgL_arg1956z00_3314;

						BgL_arg1956z00_3314 = BGL_BIGNUM_U16VECT(BgL_yz00_51);
						BgL_arg2168z00_3309 = BGL_U16VREF(BgL_arg1956z00_3314, ((long) 0));
					}
					BgL_arg2166z00_3307 = (((long) 1) - (long) (BgL_arg2168z00_3309));
				}
				return
					BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_50, BgL_yz00_51,
					BgL_arg2165z00_3306, BINT(BgL_arg2166z00_3307));
			}
		}
	}



/* _$-bx */
	obj_t BGl__z42zd2bxz90zz__bignumz00(obj_t BgL_envz00_4658,
		obj_t BgL_xz00_4659, obj_t BgL_yz00_4660)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 522 */
			{	/* Unsafe/bignumber.scm 523 */
				obj_t BgL_auxz00_5621;

				obj_t BgL_auxz00_5614;

				if (BIGNUMP(BgL_yz00_4660))
					{	/* Unsafe/bignumber.scm 523 */
						BgL_auxz00_5621 = BgL_yz00_4660;
					}
				else
					{
						obj_t BgL_auxz00_5624;

						BgL_auxz00_5624 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 17919)), BGl_string3187z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4660);
						FAILURE(BgL_auxz00_5624, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4659))
					{	/* Unsafe/bignumber.scm 523 */
						BgL_auxz00_5614 = BgL_xz00_4659;
					}
				else
					{
						obj_t BgL_auxz00_5617;

						BgL_auxz00_5617 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 17919)), BGl_string3187z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4659);
						FAILURE(BgL_auxz00_5617, BFALSE, BFALSE);
					}
				return bgl_bignum_sub(BgL_auxz00_5614, BgL_auxz00_5621);
			}
		}
	}



/* $negbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_neg(obj_t BgL_xz00_52)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 525 */
			{	/* Unsafe/bignumber.scm 526 */
				obj_t BgL_res3037z00_3332;

				{	/* Unsafe/bignumber.scm 526 */
					obj_t BgL_xz00_3318;

					BgL_xz00_3318 = BGl_bignumzd2za7eroz75zz__bignumz00;
					{	/* Unsafe/bignumber.scm 526 */
						unsigned short BgL_arg2165z00_3320;

						long BgL_arg2166z00_3321;

						{	/* Unsafe/bignumber.scm 526 */
							obj_t BgL_arg1956z00_3325;

							BgL_arg1956z00_3325 = BGL_BIGNUM_U16VECT(BgL_xz00_3318);
							BgL_arg2165z00_3320 =
								BGL_U16VREF(BgL_arg1956z00_3325, ((long) 0));
						}
						{	/* Unsafe/bignumber.scm 526 */
							unsigned short BgL_arg2168z00_3323;

							{	/* Unsafe/bignumber.scm 526 */
								obj_t BgL_arg1956z00_3328;

								BgL_arg1956z00_3328 = BGL_BIGNUM_U16VECT(BgL_xz00_52);
								BgL_arg2168z00_3323 =
									BGL_U16VREF(BgL_arg1956z00_3328, ((long) 0));
							}
							BgL_arg2166z00_3321 = (((long) 1) - (long) (BgL_arg2168z00_3323));
						}
						BgL_res3037z00_3332 =
							BGl_bignumzd2sum2zd2zz__bignumz00(BgL_xz00_3318, BgL_xz00_52,
							BgL_arg2165z00_3320, BINT(BgL_arg2166z00_3321));
				}}
				return BgL_res3037z00_3332;
			}
		}
	}



/* _$negbx */
	obj_t BGl__z42negbxz42zz__bignumz00(obj_t BgL_envz00_4661,
		obj_t BgL_xz00_4662)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 525 */
			{	/* Unsafe/bignumber.scm 526 */
				obj_t BgL_auxz00_5637;

				if (BIGNUMP(BgL_xz00_4662))
					{	/* Unsafe/bignumber.scm 526 */
						BgL_auxz00_5637 = BgL_xz00_4662;
					}
				else
					{
						obj_t BgL_auxz00_5640;

						BgL_auxz00_5640 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 17968)), BGl_string3188z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4662);
						FAILURE(BgL_auxz00_5640, BFALSE, BFALSE);
					}
				return bgl_bignum_neg(BgL_auxz00_5637);
			}
		}
	}



/* $*bx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_mul(obj_t BgL_xz00_56, obj_t BgL_yz00_57)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 547 */
			{
				obj_t BgL_xz00_1322;

				obj_t BgL_yz00_1323;

				long BgL_lenxz00_1324;

				long BgL_lenyz00_1325;

				{	/* Unsafe/bignumber.scm 578 */
					obj_t BgL_arg2181z00_1319;

					{	/* Unsafe/bignumber.scm 578 */
						long BgL_arg2182z00_1320;

						long BgL_arg2183z00_1321;

						{	/* Unsafe/bignumber.scm 578 */
							obj_t BgL_arg1955z00_3334;

							BgL_arg1955z00_3334 = BGL_BIGNUM_U16VECT(BgL_xz00_56);
							BgL_arg2182z00_1320 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3334);
						}
						{	/* Unsafe/bignumber.scm 578 */
							obj_t BgL_arg1955z00_3337;

							BgL_arg1955z00_3337 = BGL_BIGNUM_U16VECT(BgL_yz00_57);
							BgL_arg2183z00_1321 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3337);
						}
						BgL_xz00_1322 = BgL_xz00_56;
						BgL_yz00_1323 = BgL_yz00_57;
						BgL_lenxz00_1324 = BgL_arg2182z00_1320;
						BgL_lenyz00_1325 = BgL_arg2183z00_1321;
						{	/* Unsafe/bignumber.scm 550 */
							obj_t BgL_rz00_1327;

							{	/* Unsafe/bignumber.scm 550 */
								long BgL_arg2207z00_1358;

								BgL_arg2207z00_1358 =
									((BgL_lenxz00_1324 + BgL_lenyz00_1325) - ((long) 1));
								{	/* Unsafe/bignumber.scm 550 */
									obj_t BgL_res3038z00_3348;

									{	/* Unsafe/bignumber.scm 550 */
										int BgL_lenz00_3344;

										BgL_lenz00_3344 = (int) (BgL_arg2207z00_1358);
										{	/* Unsafe/bignumber.scm 550 */
											obj_t BgL_arg1953z00_3345;

											{	/* Unsafe/bignumber.scm 550 */

												BgL_arg1953z00_3345 =
													BGl_makezd2u16vectorzd2zz__srfi4z00(
													(long) (BgL_lenz00_3344), BINT(((long) 0)));
											}
											BgL_res3038z00_3348 =
												bgl_make_bignum(BgL_arg1953z00_3345);
									}}
									BgL_rz00_1327 = BgL_res3038z00_3348;
							}}
							{	/* Unsafe/bignumber.scm 552 */
								bool_t BgL_testz00_5656;

								{	/* Unsafe/bignumber.scm 552 */
									unsigned short BgL_arg2186z00_1329;

									unsigned short BgL_arg2187z00_1330;

									{	/* Unsafe/bignumber.scm 552 */
										obj_t BgL_arg1956z00_3350;

										BgL_arg1956z00_3350 = BGL_BIGNUM_U16VECT(BgL_xz00_1322);
										BgL_arg2186z00_1329 =
											BGL_U16VREF(BgL_arg1956z00_3350, ((long) 0));
									}
									{	/* Unsafe/bignumber.scm 552 */
										obj_t BgL_arg1956z00_3353;

										BgL_arg1956z00_3353 = BGL_BIGNUM_U16VECT(BgL_yz00_1323);
										BgL_arg2187z00_1330 =
											BGL_U16VREF(BgL_arg1956z00_3353, ((long) 0));
									}
									BgL_testz00_5656 =
										(
										(long) (BgL_arg2186z00_1329) ==
										(long) (BgL_arg2187z00_1330));
								}
								if (BgL_testz00_5656)
									{	/* Unsafe/bignumber.scm 553 */
										obj_t BgL_arg1958z00_3360;

										BgL_arg1958z00_3360 = BGL_BIGNUM_U16VECT(BgL_rz00_1327);
										{	/* Unsafe/bignumber.scm 553 */
											unsigned short BgL_auxz00_5665;

											BgL_auxz00_5665 = (unsigned short) (((long) 1));
											BGL_U16VSET(BgL_arg1958z00_3360, ((long) 0),
												BgL_auxz00_5665);
										} BUNSPEC;
									}
								else
									{	/* Unsafe/bignumber.scm 554 */
										obj_t BgL_arg1958z00_3365;

										BgL_arg1958z00_3365 = BGL_BIGNUM_U16VECT(BgL_rz00_1327);
										{	/* Unsafe/bignumber.scm 554 */
											unsigned short BgL_auxz00_5669;

											BgL_auxz00_5669 = (unsigned short) (((long) 0));
											BGL_U16VSET(BgL_arg1958z00_3365, ((long) 0),
												BgL_auxz00_5669);
										} BUNSPEC;
							}}
							{
								long BgL_jz00_1332;

								BgL_jz00_1332 = ((long) 1);
							BgL_zc3anonymousza32188ze3z83_1333:
								if ((BgL_jz00_1332 < BgL_lenyz00_1325))
									{	/* Unsafe/bignumber.scm 559 */
										unsigned short BgL_dz00_1335;

										{	/* Unsafe/bignumber.scm 559 */
											int BgL_iz00_3370;

											BgL_iz00_3370 = (int) (BgL_jz00_1332);
											{	/* Unsafe/bignumber.scm 559 */
												obj_t BgL_arg1960z00_3371;

												BgL_arg1960z00_3371 = BGL_BIGNUM_U16VECT(BgL_yz00_1323);
												{	/* Unsafe/bignumber.scm 559 */
													long BgL_auxz00_5676;

													BgL_auxz00_5676 = (long) (BgL_iz00_3370);
													BgL_dz00_1335 =
														BGL_U16VREF(BgL_arg1960z00_3371, BgL_auxz00_5676);
										}}}
										if (((long) (BgL_dz00_1335) == ((long) 0)))
											{
												long BgL_jz00_5682;

												BgL_jz00_5682 = (BgL_jz00_1332 + ((long) 1));
												BgL_jz00_1332 = BgL_jz00_5682;
												goto BgL_zc3anonymousza32188ze3z83_1333;
											}
										else
											{
												long BgL_iz00_1339;

												long BgL_kz00_1340;

												long BgL_cz00_1341;

												BgL_iz00_1339 = ((long) 1);
												BgL_kz00_1340 = BgL_jz00_1332;
												BgL_cz00_1341 = ((long) 0);
											BgL_zc3anonymousza32192ze3z83_1342:
												if ((BgL_iz00_1339 < BgL_lenxz00_1324))
													{	/* Unsafe/bignumber.scm 565 */
														long BgL_wz00_1344;

														{	/* Unsafe/bignumber.scm 565 */
															long BgL_arg2200z00_1351;

															long BgL_arg2203z00_1352;

															{	/* Unsafe/bignumber.scm 565 */
																unsigned short BgL_arg2204z00_1353;

																{	/* Unsafe/bignumber.scm 565 */
																	int BgL_iz00_3379;

																	BgL_iz00_3379 = (int) (BgL_kz00_1340);
																	{	/* Unsafe/bignumber.scm 565 */
																		obj_t BgL_arg1960z00_3380;

																		BgL_arg1960z00_3380 =
																			BGL_BIGNUM_U16VECT(BgL_rz00_1327);
																		{	/* Unsafe/bignumber.scm 565 */
																			long BgL_auxz00_5688;

																			BgL_auxz00_5688 = (long) (BgL_iz00_3379);
																			BgL_arg2204z00_1353 =
																				BGL_U16VREF(BgL_arg1960z00_3380,
																				BgL_auxz00_5688);
																}}}
																BgL_arg2200z00_1351 =
																	(
																	(long) (BgL_arg2204z00_1353) + BgL_cz00_1341);
															}
															{	/* Unsafe/bignumber.scm 566 */
																unsigned short BgL_arg2205z00_1354;

																{	/* Unsafe/bignumber.scm 566 */
																	int BgL_iz00_3384;

																	BgL_iz00_3384 = (int) (BgL_iz00_1339);
																	{	/* Unsafe/bignumber.scm 566 */
																		obj_t BgL_arg1960z00_3385;

																		BgL_arg1960z00_3385 =
																			BGL_BIGNUM_U16VECT(BgL_xz00_1322);
																		{	/* Unsafe/bignumber.scm 566 */
																			long BgL_auxz00_5695;

																			BgL_auxz00_5695 = (long) (BgL_iz00_3384);
																			BgL_arg2205z00_1354 =
																				BGL_U16VREF(BgL_arg1960z00_3385,
																				BgL_auxz00_5695);
																}}}
																BgL_arg2203z00_1352 =
																	(
																	(long) (BgL_arg2205z00_1354) *
																	(long) (BgL_dz00_1335));
															}
															BgL_wz00_1344 =
																(BgL_arg2200z00_1351 + BgL_arg2203z00_1352);
														}
														{	/* Unsafe/bignumber.scm 567 */
															obj_t BgL_arg2194z00_1345;

															BgL_arg2194z00_1345 =
																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00(BINT
																(BgL_wz00_1344),
																BINT((((long) 1) << (int) (((long) 14)))));
															{	/* Unsafe/bignumber.scm 567 */
																int BgL_iz00_3393;

																int BgL_digitz00_3394;

																BgL_iz00_3393 = (int) (BgL_kz00_1340);
																BgL_digitz00_3394 = CINT(BgL_arg2194z00_1345);
																{	/* Unsafe/bignumber.scm 567 */
																	obj_t BgL_arg1961z00_3395;

																	BgL_arg1961z00_3395 =
																		BGL_BIGNUM_U16VECT(BgL_rz00_1327);
																	{	/* Unsafe/bignumber.scm 567 */
																		unsigned short BgL_auxz00_5712;

																		long BgL_auxz00_5710;

																		BgL_auxz00_5712 =
																			(unsigned short) (BgL_digitz00_3394);
																		BgL_auxz00_5710 = (long) (BgL_iz00_3393);
																		BGL_U16VSET(BgL_arg1961z00_3395,
																			BgL_auxz00_5710, BgL_auxz00_5712);
																	} BUNSPEC;
														}}}
														{	/* Unsafe/bignumber.scm 568 */
															long BgL_arg2196z00_1347;

															long BgL_arg2197z00_1348;

															long BgL_arg2198z00_1349;

															BgL_arg2196z00_1347 =
																(BgL_iz00_1339 + ((long) 1));
															BgL_arg2197z00_1348 =
																(BgL_kz00_1340 + ((long) 1));
															{	/* Unsafe/bignumber.scm 570 */
																long BgL_auxz00_5717;

																BgL_auxz00_5717 =
																	(((long) 1) << (int) (((long) 14)));
																BgL_arg2198z00_1349 =
																	(BgL_wz00_1344 / BgL_auxz00_5717);
															}
															{
																long BgL_cz00_5723;

																long BgL_kz00_5722;

																long BgL_iz00_5721;

																BgL_iz00_5721 = BgL_arg2196z00_1347;
																BgL_kz00_5722 = BgL_arg2197z00_1348;
																BgL_cz00_5723 = BgL_arg2198z00_1349;
																BgL_cz00_1341 = BgL_cz00_5723;
																BgL_kz00_1340 = BgL_kz00_5722;
																BgL_iz00_1339 = BgL_iz00_5721;
																goto BgL_zc3anonymousza32192ze3z83_1342;
															}
														}
													}
												else
													{	/* Unsafe/bignumber.scm 563 */
														{	/* Unsafe/bignumber.scm 573 */
															int BgL_iz00_3405;

															int BgL_digitz00_3406;

															BgL_iz00_3405 = (int) (BgL_kz00_1340);
															BgL_digitz00_3406 = (int) (BgL_cz00_1341);
															{	/* Unsafe/bignumber.scm 573 */
																obj_t BgL_arg1961z00_3407;

																BgL_arg1961z00_3407 =
																	BGL_BIGNUM_U16VECT(BgL_rz00_1327);
																{	/* Unsafe/bignumber.scm 573 */
																	unsigned short BgL_auxz00_5729;

																	long BgL_auxz00_5727;

																	BgL_auxz00_5729 =
																		(unsigned short) (BgL_digitz00_3406);
																	BgL_auxz00_5727 = (long) (BgL_iz00_3405);
																	BGL_U16VSET(BgL_arg1961z00_3407,
																		BgL_auxz00_5727, BgL_auxz00_5729);
																} BUNSPEC;
														}}
														{
															long BgL_jz00_5732;

															BgL_jz00_5732 = (BgL_jz00_1332 + ((long) 1));
															BgL_jz00_1332 = BgL_jz00_5732;
															goto BgL_zc3anonymousza32188ze3z83_1333;
														}
													}
											}
									}
								else
									{	/* Unsafe/bignumber.scm 557 */
										((bool_t) 0);
									}
							}
							BgL_arg2181z00_1319 =
								BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
								(BgL_rz00_1327);
						}
					}
					return BgL_arg2181z00_1319;
				}
			}
		}
	}



/* _$*bx */
	obj_t BGl__z42za2bxze0zz__bignumz00(obj_t BgL_envz00_4663,
		obj_t BgL_xz00_4664, obj_t BgL_yz00_4665)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 547 */
			{	/* Unsafe/bignumber.scm 550 */
				obj_t BgL_auxz00_5742;

				obj_t BgL_auxz00_5735;

				if (BIGNUMP(BgL_yz00_4665))
					{	/* Unsafe/bignumber.scm 550 */
						BgL_auxz00_5742 = BgL_yz00_4665;
					}
				else
					{
						obj_t BgL_auxz00_5745;

						BgL_auxz00_5745 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 18641)), BGl_string3189z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4665);
						FAILURE(BgL_auxz00_5745, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4664))
					{	/* Unsafe/bignumber.scm 550 */
						BgL_auxz00_5735 = BgL_xz00_4664;
					}
				else
					{
						obj_t BgL_auxz00_5738;

						BgL_auxz00_5738 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 18641)), BGl_string3189z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4664);
						FAILURE(BgL_auxz00_5738, BFALSE, BFALSE);
					}
				return bgl_bignum_mul(BgL_auxz00_5735, BgL_auxz00_5742);
			}
		}
	}



/* bignum-div */
	obj_t BGl_bignumzd2divzd2zz__bignumz00(obj_t BgL_xz00_59, obj_t BgL_yz00_60)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 591 */
			{
				obj_t BgL_xz00_1568;

				obj_t BgL_yz00_1569;

				long BgL_lenxz00_1570;

				long BgL_lenyz00_1571;

				obj_t BgL_xz00_1405;

				obj_t BgL_yz00_1406;

				long BgL_lenxz00_1407;

				long BgL_lenyz00_1408;

				obj_t BgL_rz00_1409;

				obj_t BgL_xz00_1380;

				obj_t BgL_yz00_1381;

				long BgL_lenxz00_1382;

				long BgL_lenyz00_1383;

				obj_t BgL_rz00_1384;

				{	/* Unsafe/bignumber.scm 754 */
					bool_t BgL_testz00_5750;

					{	/* Unsafe/bignumber.scm 754 */
						bool_t BgL_res3039z00_3418;

						{	/* Unsafe/bignumber.scm 754 */
							obj_t BgL_xz00_3410;

							BgL_xz00_3410 = BgL_yz00_60;
							{	/* Unsafe/bignumber.scm 754 */
								long BgL_arg2070z00_3411;

								{	/* Unsafe/bignumber.scm 754 */
									obj_t BgL_arg1955z00_3414;

									BgL_arg1955z00_3414 = BGL_BIGNUM_U16VECT(BgL_xz00_3410);
									BgL_arg2070z00_3411 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3414);
								}
								BgL_res3039z00_3418 = (BgL_arg2070z00_3411 == ((long) 1));
						}}
						BgL_testz00_5750 = BgL_res3039z00_3418;
					}
					if (BgL_testz00_5750)
						{	/* Unsafe/bignumber.scm 754 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3190z00zz__bignumz00,
								BGl_string3192z00zz__bignumz00, BgL_xz00_59);
						}
					else
						{	/* Unsafe/bignumber.scm 756 */
							long BgL_arg2222z00_1378;

							long BgL_arg2223z00_1379;

							{	/* Unsafe/bignumber.scm 756 */
								obj_t BgL_bnz00_3419;

								BgL_bnz00_3419 = BgL_xz00_59;
								{	/* Unsafe/bignumber.scm 756 */
									obj_t BgL_arg1955z00_3420;

									BgL_arg1955z00_3420 = BGL_BIGNUM_U16VECT(BgL_bnz00_3419);
									BgL_arg2222z00_1378 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3420);
							}}
							{	/* Unsafe/bignumber.scm 756 */
								obj_t BgL_bnz00_3422;

								BgL_bnz00_3422 = BgL_yz00_60;
								{	/* Unsafe/bignumber.scm 756 */
									obj_t BgL_arg1955z00_3423;

									BgL_arg1955z00_3423 = BGL_BIGNUM_U16VECT(BgL_bnz00_3422);
									BgL_arg2223z00_1379 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3423);
							}}
							BgL_xz00_1568 = BgL_xz00_59;
							BgL_yz00_1569 = BgL_yz00_60;
							BgL_lenxz00_1570 = BgL_arg2222z00_1378;
							BgL_lenyz00_1571 = BgL_arg2223z00_1379;
							if ((BgL_lenxz00_1570 < BgL_lenyz00_1571))
								{	/* Unsafe/bignumber.scm 740 */
									return
										MAKE_PAIR(BGl_bignumzd2za7eroz75zz__bignumz00,
										BgL_xz00_1568);
								}
							else
								{	/* Unsafe/bignumber.scm 744 */
									obj_t BgL_rz00_1574;

									{	/* Unsafe/bignumber.scm 744 */
										long BgL_arg2359z00_1579;

										BgL_arg2359z00_1579 =
											((BgL_lenxz00_1570 - BgL_lenyz00_1571) + ((long) 2));
										{	/* Unsafe/bignumber.scm 744 */
											obj_t BgL_res3043z00_3756;

											{	/* Unsafe/bignumber.scm 744 */
												int BgL_lenz00_3752;

												BgL_lenz00_3752 = (int) (BgL_arg2359z00_1579);
												{	/* Unsafe/bignumber.scm 744 */
													obj_t BgL_arg1953z00_3753;

													{	/* Unsafe/bignumber.scm 744 */

														BgL_arg1953z00_3753 =
															BGl_makezd2u16vectorzd2zz__srfi4z00(
															(long) (BgL_lenz00_3752), BINT(((long) 0)));
													}
													BgL_res3043z00_3756 =
														bgl_make_bignum(BgL_arg1953z00_3753);
											}}
											BgL_rz00_1574 = BgL_res3043z00_3756;
									}}
									{	/* Unsafe/bignumber.scm 746 */
										bool_t BgL_testz00_5769;

										{	/* Unsafe/bignumber.scm 746 */
											unsigned short BgL_arg2356z00_1576;

											unsigned short BgL_arg2357z00_1577;

											{	/* Unsafe/bignumber.scm 746 */
												obj_t BgL_bnz00_3757;

												BgL_bnz00_3757 = BgL_xz00_1568;
												{	/* Unsafe/bignumber.scm 746 */
													obj_t BgL_arg1956z00_3758;

													BgL_arg1956z00_3758 =
														BGL_BIGNUM_U16VECT(BgL_bnz00_3757);
													BgL_arg2356z00_1576 =
														BGL_U16VREF(BgL_arg1956z00_3758, ((long) 0));
											}}
											{	/* Unsafe/bignumber.scm 746 */
												obj_t BgL_bnz00_3760;

												BgL_bnz00_3760 = BgL_yz00_1569;
												{	/* Unsafe/bignumber.scm 746 */
													obj_t BgL_arg1956z00_3761;

													BgL_arg1956z00_3761 =
														BGL_BIGNUM_U16VECT(BgL_bnz00_3760);
													BgL_arg2357z00_1577 =
														BGL_U16VREF(BgL_arg1956z00_3761, ((long) 0));
											}}
											BgL_testz00_5769 =
												(
												(long) (BgL_arg2356z00_1576) ==
												(long) (BgL_arg2357z00_1577));
										}
										if (BgL_testz00_5769)
											{	/* Unsafe/bignumber.scm 747 */
												obj_t BgL_arg1958z00_3768;

												BgL_arg1958z00_3768 = BGL_BIGNUM_U16VECT(BgL_rz00_1574);
												{	/* Unsafe/bignumber.scm 747 */
													unsigned short BgL_auxz00_5778;

													BgL_auxz00_5778 = (unsigned short) (((long) 1));
													BGL_U16VSET(BgL_arg1958z00_3768, ((long) 0),
														BgL_auxz00_5778);
												} BUNSPEC;
											}
										else
											{	/* Unsafe/bignumber.scm 748 */
												obj_t BgL_arg1958z00_3773;

												BgL_arg1958z00_3773 = BGL_BIGNUM_U16VECT(BgL_rz00_1574);
												{	/* Unsafe/bignumber.scm 748 */
													unsigned short BgL_auxz00_5782;

													BgL_auxz00_5782 = (unsigned short) (((long) 0));
													BGL_U16VSET(BgL_arg1958z00_3773, ((long) 0),
														BgL_auxz00_5782);
												} BUNSPEC;
									}}
									if ((BgL_lenyz00_1571 == ((long) 2)))
										{	/* Unsafe/bignumber.scm 750 */
											BgL_xz00_1380 = BgL_xz00_1568;
											BgL_yz00_1381 = BgL_yz00_1569;
											BgL_lenxz00_1382 = BgL_lenxz00_1570;
											BgL_lenyz00_1383 = BgL_lenyz00_1571;
											BgL_rz00_1384 = BgL_rz00_1574;
											{	/* Unsafe/bignumber.scm 597 */
												unsigned short BgL_dz00_1386;

												{	/* Unsafe/bignumber.scm 597 */
													obj_t BgL_bnz00_3425;

													BgL_bnz00_3425 = BgL_yz00_1381;
													{	/* Unsafe/bignumber.scm 597 */
														obj_t BgL_arg1960z00_3427;

														BgL_arg1960z00_3427 =
															BGL_BIGNUM_U16VECT(BgL_bnz00_3425);
														BgL_dz00_1386 =
															BGL_U16VREF(BgL_arg1960z00_3427, ((long) 1));
												}}
												{	/* Unsafe/bignumber.scm 598 */
													long BgL_g1836z00_1387;

													BgL_g1836z00_1387 = (BgL_lenxz00_1382 - ((long) 1));
													{
														long BgL_iz00_1389;

														long BgL_kz00_1390;

														BgL_iz00_1389 = BgL_g1836z00_1387;
														BgL_kz00_1390 = ((long) 0);
													BgL_zc3anonymousza32225ze3z83_1391:
														if ((((long) 0) < BgL_iz00_1389))
															{	/* Unsafe/bignumber.scm 600 */
																long BgL_wz00_1393;

																{	/* Unsafe/bignumber.scm 600 */
																	long BgL_arg2235z00_1397;

																	unsigned short BgL_arg2236z00_1398;

																	BgL_arg2235z00_1397 =
																		(BgL_kz00_1390 *
																		(((long) 1) << (int) (((long) 14))));
																	{	/* Unsafe/bignumber.scm 600 */
																		obj_t BgL_bnz00_3436;

																		int BgL_iz00_3437;

																		BgL_bnz00_3436 = BgL_xz00_1380;
																		BgL_iz00_3437 = (int) (BgL_iz00_1389);
																		{	/* Unsafe/bignumber.scm 600 */
																			obj_t BgL_arg1960z00_3438;

																			BgL_arg1960z00_3438 =
																				BGL_BIGNUM_U16VECT(BgL_bnz00_3436);
																			{	/* Unsafe/bignumber.scm 600 */
																				long BgL_auxz00_5797;

																				BgL_auxz00_5797 =
																					(long) (BgL_iz00_3437);
																				BgL_arg2236z00_1398 =
																					BGL_U16VREF(BgL_arg1960z00_3438,
																					BgL_auxz00_5797);
																	}}}
																	BgL_wz00_1393 =
																		(BgL_arg2235z00_1397 +
																		(long) (BgL_arg2236z00_1398));
																}
																{	/* Unsafe/bignumber.scm 601 */
																	long BgL_arg2227z00_1394;

																	{	/* Unsafe/bignumber.scm 601 */
																		long BgL_auxz00_5802;

																		BgL_auxz00_5802 = (long) (BgL_dz00_1386);
																		BgL_arg2227z00_1394 =
																			(BgL_wz00_1393 / BgL_auxz00_5802);
																	}
																	{	/* Unsafe/bignumber.scm 601 */
																		int BgL_iz00_3444;

																		int BgL_digitz00_3445;

																		BgL_iz00_3444 = (int) (BgL_iz00_1389);
																		BgL_digitz00_3445 =
																			(int) (BgL_arg2227z00_1394);
																		{	/* Unsafe/bignumber.scm 601 */
																			obj_t BgL_arg1961z00_3446;

																			BgL_arg1961z00_3446 =
																				BGL_BIGNUM_U16VECT(BgL_rz00_1384);
																			{	/* Unsafe/bignumber.scm 601 */
																				unsigned short BgL_auxz00_5810;

																				long BgL_auxz00_5808;

																				BgL_auxz00_5810 =
																					(unsigned short) (BgL_digitz00_3445);
																				BgL_auxz00_5808 =
																					(long) (BgL_iz00_3444);
																				BGL_U16VSET(BgL_arg1961z00_3446,
																					BgL_auxz00_5808, BgL_auxz00_5810);
																			} BUNSPEC;
																}}}
																{	/* Unsafe/bignumber.scm 602 */
																	long BgL_arg2233z00_1395;

																	long BgL_arg2234z00_1396;

																	BgL_arg2233z00_1395 =
																		(BgL_iz00_1389 - ((long) 1));
																	{	/* Unsafe/bignumber.scm 602 */
																		long BgL_auxz00_5814;

																		BgL_auxz00_5814 = (long) (BgL_dz00_1386);
																		BgL_arg2234z00_1396 =
																			(BgL_wz00_1393 % BgL_auxz00_5814);
																	}
																	{
																		long BgL_kz00_5818;

																		long BgL_iz00_5817;

																		BgL_iz00_5817 = BgL_arg2233z00_1395;
																		BgL_kz00_5818 = BgL_arg2234z00_1396;
																		BgL_kz00_1390 = BgL_kz00_5818;
																		BgL_iz00_1389 = BgL_iz00_5817;
																		goto BgL_zc3anonymousza32225ze3z83_1391;
																	}
																}
															}
														else
															{	/* Unsafe/bignumber.scm 603 */
																obj_t BgL_arg2238z00_1400;

																obj_t BgL_arg2239z00_1401;

																BgL_arg2238z00_1400 =
																	BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																	(BgL_rz00_1384);
																{	/* Unsafe/bignumber.scm 605 */
																	long BgL_arg2240z00_1402;

																	{	/* Unsafe/bignumber.scm 605 */
																		bool_t BgL_testz00_5820;

																		{	/* Unsafe/bignumber.scm 605 */
																			bool_t BgL_res3040z00_3459;

																			{	/* Unsafe/bignumber.scm 605 */
																				obj_t BgL_xz00_3451;

																				BgL_xz00_3451 = BgL_xz00_1380;
																				{	/* Unsafe/bignumber.scm 605 */
																					unsigned short BgL_arg2073z00_3452;

																					{	/* Unsafe/bignumber.scm 605 */
																						obj_t BgL_arg1956z00_3455;

																						BgL_arg1956z00_3455 =
																							BGL_BIGNUM_U16VECT(BgL_xz00_3451);
																						BgL_arg2073z00_3452 =
																							BGL_U16VREF(BgL_arg1956z00_3455,
																							((long) 0));
																					}
																					BgL_res3040z00_3459 =
																						(
																						(long) (BgL_arg2073z00_3452) ==
																						((long) 0));
																			}}
																			BgL_testz00_5820 = BgL_res3040z00_3459;
																		}
																		if (BgL_testz00_5820)
																			{	/* Unsafe/bignumber.scm 605 */
																				BgL_arg2240z00_1402 =
																					(((long) 0) - BgL_kz00_1390);
																			}
																		else
																			{	/* Unsafe/bignumber.scm 605 */
																				BgL_arg2240z00_1402 = BgL_kz00_1390;
																			}
																	}
																	BgL_arg2239z00_1401 =
																		bgl_long_to_bignum(BgL_arg2240z00_1402);
																}
																return
																	MAKE_PAIR(BgL_arg2238z00_1400,
																	BgL_arg2239z00_1401);
															}
													}
												}
											}
										}
									else
										{	/* Unsafe/bignumber.scm 750 */
											BgL_xz00_1405 = BgL_xz00_1568;
											BgL_yz00_1406 = BgL_yz00_1569;
											BgL_lenxz00_1407 = BgL_lenxz00_1570;
											BgL_lenyz00_1408 = BgL_lenyz00_1571;
											BgL_rz00_1409 = BgL_rz00_1574;
											{	/* Unsafe/bignumber.scm 613 */
												long BgL_g1837z00_1411;

												{	/* Unsafe/bignumber.scm 614 */
													unsigned short BgL_arg2350z00_1565;

													{	/* Unsafe/bignumber.scm 614 */
														long BgL_arg2352z00_1567;

														BgL_arg2352z00_1567 =
															(BgL_lenyz00_1408 - ((long) 1));
														{	/* Unsafe/bignumber.scm 614 */
															obj_t BgL_bnz00_3464;

															int BgL_iz00_3465;

															BgL_bnz00_3464 = BgL_yz00_1406;
															BgL_iz00_3465 = (int) (BgL_arg2352z00_1567);
															{	/* Unsafe/bignumber.scm 614 */
																obj_t BgL_arg1960z00_3466;

																BgL_arg1960z00_3466 =
																	BGL_BIGNUM_U16VECT(BgL_bnz00_3464);
																{	/* Unsafe/bignumber.scm 614 */
																	long BgL_auxz00_5831;

																	BgL_auxz00_5831 = (long) (BgL_iz00_3465);
																	BgL_arg2350z00_1565 =
																		BGL_U16VREF(BgL_arg1960z00_3466,
																		BgL_auxz00_5831);
													}}}}
													BgL_g1837z00_1411 =
														((long) (BgL_arg2350z00_1565) * ((long) 2));
												}
												{
													long BgL_shiftz00_1413;

													long BgL_nz00_1414;

													BgL_shiftz00_1413 = ((long) 1);
													BgL_nz00_1414 = BgL_g1837z00_1411;
												BgL_zc3anonymousza32243ze3z83_1415:
													if (
														(BgL_nz00_1414 <
															(((long) 1) << (int) (((long) 14)))))
														{
															long BgL_nz00_5842;

															long BgL_shiftz00_5840;

															BgL_shiftz00_5840 =
																(BgL_shiftz00_1413 * ((long) 2));
															BgL_nz00_5842 = (BgL_nz00_1414 * ((long) 2));
															BgL_nz00_1414 = BgL_nz00_5842;
															BgL_shiftz00_1413 = BgL_shiftz00_5840;
															goto BgL_zc3anonymousza32243ze3z83_1415;
														}
													else
														{	/* Unsafe/bignumber.scm 618 */
															obj_t BgL_nxz00_1419;

															obj_t BgL_nyz00_1420;

															{	/* Unsafe/bignumber.scm 618 */
																long BgL_arg2348z00_1562;

																BgL_arg2348z00_1562 =
																	(BgL_lenxz00_1407 + ((long) 1));
																{	/* Unsafe/bignumber.scm 618 */
																	obj_t BgL_res3041z00_3483;

																	{	/* Unsafe/bignumber.scm 618 */
																		int BgL_lenz00_3479;

																		BgL_lenz00_3479 =
																			(int) (BgL_arg2348z00_1562);
																		{	/* Unsafe/bignumber.scm 618 */
																			obj_t BgL_arg1953z00_3480;

																			{	/* Unsafe/bignumber.scm 618 */

																				BgL_arg1953z00_3480 =
																					BGl_makezd2u16vectorzd2zz__srfi4z00(
																					(long) (BgL_lenz00_3479),
																					BINT(((long) 0)));
																			}
																			BgL_res3041z00_3483 =
																				bgl_make_bignum(BgL_arg1953z00_3480);
																	}}
																	BgL_nxz00_1419 = BgL_res3041z00_3483;
															}}
															{	/* Unsafe/bignumber.scm 619 */
																obj_t BgL_res3042z00_3488;

																{	/* Unsafe/bignumber.scm 619 */
																	int BgL_lenz00_3484;

																	BgL_lenz00_3484 = (int) (BgL_lenyz00_1408);
																	{	/* Unsafe/bignumber.scm 619 */
																		obj_t BgL_arg1953z00_3485;

																		{	/* Unsafe/bignumber.scm 619 */

																			BgL_arg1953z00_3485 =
																				BGl_makezd2u16vectorzd2zz__srfi4z00(
																				(long) (BgL_lenz00_3484),
																				BINT(((long) 0)));
																		}
																		BgL_res3042z00_3488 =
																			bgl_make_bignum(BgL_arg1953z00_3485);
																}}
																BgL_nyz00_1420 = BgL_res3042z00_3488;
															}
															{	/* Unsafe/bignumber.scm 621 */
																unsigned short BgL_arg2247z00_1421;

																{	/* Unsafe/bignumber.scm 621 */
																	obj_t BgL_bnz00_3489;

																	BgL_bnz00_3489 = BgL_xz00_1405;
																	{	/* Unsafe/bignumber.scm 621 */
																		obj_t BgL_arg1956z00_3490;

																		BgL_arg1956z00_3490 =
																			BGL_BIGNUM_U16VECT(BgL_bnz00_3489);
																		BgL_arg2247z00_1421 =
																			BGL_U16VREF(BgL_arg1956z00_3490,
																			((long) 0));
																}}
																{	/* Unsafe/bignumber.scm 621 */
																	int BgL_signz00_3493;

																	BgL_signz00_3493 =
																		(int) (BgL_arg2247z00_1421);
																	{	/* Unsafe/bignumber.scm 621 */
																		obj_t BgL_arg1958z00_3494;

																		BgL_arg1958z00_3494 =
																			BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																		{	/* Unsafe/bignumber.scm 621 */
																			unsigned short BgL_auxz00_5859;

																			BgL_auxz00_5859 =
																				(unsigned short) (BgL_signz00_3493);
																			BGL_U16VSET(BgL_arg1958z00_3494,
																				((long) 0), BgL_auxz00_5859);
																		} BUNSPEC;
															}}}
															{
																long BgL_iz00_1423;

																long BgL_cz00_1424;

																BgL_iz00_1423 = ((long) 1);
																BgL_cz00_1424 = ((long) 0);
															BgL_zc3anonymousza32248ze3z83_1425:
																if ((BgL_iz00_1423 < BgL_lenxz00_1407))
																	{	/* Unsafe/bignumber.scm 625 */
																		long BgL_wz00_1427;

																		{	/* Unsafe/bignumber.scm 625 */
																			long BgL_arg2256z00_1433;

																			{	/* Unsafe/bignumber.scm 625 */
																				unsigned short BgL_arg2257z00_1434;

																				{	/* Unsafe/bignumber.scm 625 */
																					obj_t BgL_bnz00_3498;

																					int BgL_iz00_3499;

																					BgL_bnz00_3498 = BgL_xz00_1405;
																					BgL_iz00_3499 = (int) (BgL_iz00_1423);
																					{	/* Unsafe/bignumber.scm 625 */
																						obj_t BgL_arg1960z00_3500;

																						BgL_arg1960z00_3500 =
																							BGL_BIGNUM_U16VECT
																							(BgL_bnz00_3498);
																						{	/* Unsafe/bignumber.scm 625 */
																							long BgL_auxz00_5866;

																							BgL_auxz00_5866 =
																								(long) (BgL_iz00_3499);
																							BgL_arg2257z00_1434 =
																								BGL_U16VREF(BgL_arg1960z00_3500,
																								BgL_auxz00_5866);
																				}}}
																				BgL_arg2256z00_1433 =
																					(
																					(long) (BgL_arg2257z00_1434) *
																					BgL_shiftz00_1413);
																			}
																			BgL_wz00_1427 =
																				(BgL_arg2256z00_1433 + BgL_cz00_1424);
																		}
																		{	/* Unsafe/bignumber.scm 626 */
																			obj_t BgL_arg2250z00_1428;

																			BgL_arg2250z00_1428 =
																				BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_wz00_1427),
																				BINT((((long) 1) << (int) (((long)
																								14)))));
																			{	/* Unsafe/bignumber.scm 626 */
																				int BgL_iz00_3508;

																				int BgL_digitz00_3509;

																				BgL_iz00_3508 = (int) (BgL_iz00_1423);
																				BgL_digitz00_3509 =
																					CINT(BgL_arg2250z00_1428);
																				{	/* Unsafe/bignumber.scm 626 */
																					obj_t BgL_arg1961z00_3510;

																					BgL_arg1961z00_3510 =
																						BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																					{	/* Unsafe/bignumber.scm 626 */
																						unsigned short BgL_auxz00_5882;

																						long BgL_auxz00_5880;

																						BgL_auxz00_5882 =
																							(unsigned
																							short) (BgL_digitz00_3509);
																						BgL_auxz00_5880 =
																							(long) (BgL_iz00_3508);
																						BGL_U16VSET(BgL_arg1961z00_3510,
																							BgL_auxz00_5880, BgL_auxz00_5882);
																					} BUNSPEC;
																		}}}
																		{	/* Unsafe/bignumber.scm 627 */
																			long BgL_arg2252z00_1430;

																			long BgL_arg2253z00_1431;

																			BgL_arg2252z00_1430 =
																				(BgL_iz00_1423 + ((long) 1));
																			{	/* Unsafe/bignumber.scm 627 */
																				long BgL_auxz00_5886;

																				BgL_auxz00_5886 =
																					(((long) 1) << (int) (((long) 14)));
																				BgL_arg2253z00_1431 =
																					(BgL_wz00_1427 / BgL_auxz00_5886);
																			}
																			{
																				long BgL_cz00_5891;

																				long BgL_iz00_5890;

																				BgL_iz00_5890 = BgL_arg2252z00_1430;
																				BgL_cz00_5891 = BgL_arg2253z00_1431;
																				BgL_cz00_1424 = BgL_cz00_5891;
																				BgL_iz00_1423 = BgL_iz00_5890;
																				goto BgL_zc3anonymousza32248ze3z83_1425;
																			}
																		}
																	}
																else
																	{	/* Unsafe/bignumber.scm 628 */
																		int BgL_iz00_3518;

																		int BgL_digitz00_3519;

																		BgL_iz00_3518 = (int) (BgL_iz00_1423);
																		BgL_digitz00_3519 = (int) (BgL_cz00_1424);
																		{	/* Unsafe/bignumber.scm 628 */
																			obj_t BgL_arg1961z00_3520;

																			BgL_arg1961z00_3520 =
																				BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																			{	/* Unsafe/bignumber.scm 628 */
																				unsigned short BgL_auxz00_5897;

																				long BgL_auxz00_5895;

																				BgL_auxz00_5897 =
																					(unsigned short) (BgL_digitz00_3519);
																				BgL_auxz00_5895 =
																					(long) (BgL_iz00_3518);
																				BGL_U16VSET(BgL_arg1961z00_3520,
																					BgL_auxz00_5895, BgL_auxz00_5897);
																			} BUNSPEC;
															}}}
															{
																long BgL_iz00_1437;

																long BgL_cz00_1438;

																BgL_iz00_1437 = ((long) 1);
																BgL_cz00_1438 = ((long) 0);
															BgL_zc3anonymousza32258ze3z83_1439:
																if ((BgL_iz00_1437 < BgL_lenyz00_1408))
																	{	/* Unsafe/bignumber.scm 632 */
																		long BgL_wz00_1441;

																		{	/* Unsafe/bignumber.scm 632 */
																			long BgL_arg2266z00_1447;

																			{	/* Unsafe/bignumber.scm 632 */
																				unsigned short BgL_arg2267z00_1448;

																				{	/* Unsafe/bignumber.scm 632 */
																					obj_t BgL_bnz00_3523;

																					int BgL_iz00_3524;

																					BgL_bnz00_3523 = BgL_yz00_1406;
																					BgL_iz00_3524 = (int) (BgL_iz00_1437);
																					{	/* Unsafe/bignumber.scm 632 */
																						obj_t BgL_arg1960z00_3525;

																						BgL_arg1960z00_3525 =
																							BGL_BIGNUM_U16VECT
																							(BgL_bnz00_3523);
																						{	/* Unsafe/bignumber.scm 632 */
																							long BgL_auxz00_5904;

																							BgL_auxz00_5904 =
																								(long) (BgL_iz00_3524);
																							BgL_arg2267z00_1448 =
																								BGL_U16VREF(BgL_arg1960z00_3525,
																								BgL_auxz00_5904);
																				}}}
																				BgL_arg2266z00_1447 =
																					(
																					(long) (BgL_arg2267z00_1448) *
																					BgL_shiftz00_1413);
																			}
																			BgL_wz00_1441 =
																				(BgL_arg2266z00_1447 + BgL_cz00_1438);
																		}
																		{	/* Unsafe/bignumber.scm 633 */
																			obj_t BgL_arg2260z00_1442;

																			BgL_arg2260z00_1442 =
																				BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_wz00_1441),
																				BINT((((long) 1) << (int) (((long)
																								14)))));
																			{	/* Unsafe/bignumber.scm 633 */
																				int BgL_iz00_3533;

																				int BgL_digitz00_3534;

																				BgL_iz00_3533 = (int) (BgL_iz00_1437);
																				BgL_digitz00_3534 =
																					CINT(BgL_arg2260z00_1442);
																				{	/* Unsafe/bignumber.scm 633 */
																					obj_t BgL_arg1961z00_3535;

																					BgL_arg1961z00_3535 =
																						BGL_BIGNUM_U16VECT(BgL_nyz00_1420);
																					{	/* Unsafe/bignumber.scm 633 */
																						unsigned short BgL_auxz00_5920;

																						long BgL_auxz00_5918;

																						BgL_auxz00_5920 =
																							(unsigned
																							short) (BgL_digitz00_3534);
																						BgL_auxz00_5918 =
																							(long) (BgL_iz00_3533);
																						BGL_U16VSET(BgL_arg1961z00_3535,
																							BgL_auxz00_5918, BgL_auxz00_5920);
																					} BUNSPEC;
																		}}}
																		{	/* Unsafe/bignumber.scm 634 */
																			long BgL_arg2263z00_1444;

																			long BgL_arg2264z00_1445;

																			BgL_arg2263z00_1444 =
																				(BgL_iz00_1437 + ((long) 1));
																			{	/* Unsafe/bignumber.scm 634 */
																				long BgL_auxz00_5924;

																				BgL_auxz00_5924 =
																					(((long) 1) << (int) (((long) 14)));
																				BgL_arg2264z00_1445 =
																					(BgL_wz00_1441 / BgL_auxz00_5924);
																			}
																			{
																				long BgL_cz00_5929;

																				long BgL_iz00_5928;

																				BgL_iz00_5928 = BgL_arg2263z00_1444;
																				BgL_cz00_5929 = BgL_arg2264z00_1445;
																				BgL_cz00_1438 = BgL_cz00_5929;
																				BgL_iz00_1437 = BgL_iz00_5928;
																				goto BgL_zc3anonymousza32258ze3z83_1439;
																			}
																		}
																	}
																else
																	{	/* Unsafe/bignumber.scm 631 */
																		((bool_t) 0);
																	}
															}
															{
																long BgL_iz00_1451;

																BgL_iz00_1451 = BgL_lenxz00_1407;
															BgL_zc3anonymousza32268ze3z83_1452:
																if ((BgL_iz00_1451 < BgL_lenyz00_1408))
																	{	/* Unsafe/bignumber.scm 637 */
																		((bool_t) 0);
																	}
																else
																	{	/* Unsafe/bignumber.scm 641 */
																		unsigned short BgL_msdzd2ofzd2nyz00_1454;

																		unsigned short
																			BgL_nextzd2msdzd2ofzd2nyzd2_1455;
																		unsigned short BgL_msdzd2ofzd2nxz00_1456;

																		unsigned short
																			BgL_nextzd2msdzd2ofzd2nxzd2_1457;
																		unsigned short
																			BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1458;
																		{	/* Unsafe/bignumber.scm 642 */
																			long BgL_arg2334z00_1541;

																			BgL_arg2334z00_1541 =
																				(BgL_lenyz00_1408 - ((long) 1));
																			{	/* Unsafe/bignumber.scm 642 */
																				int BgL_iz00_3547;

																				BgL_iz00_3547 =
																					(int) (BgL_arg2334z00_1541);
																				{	/* Unsafe/bignumber.scm 642 */
																					obj_t BgL_arg1960z00_3548;

																					BgL_arg1960z00_3548 =
																						BGL_BIGNUM_U16VECT(BgL_nyz00_1420);
																					{	/* Unsafe/bignumber.scm 642 */
																						long BgL_auxz00_5935;

																						BgL_auxz00_5935 =
																							(long) (BgL_iz00_3547);
																						BgL_msdzd2ofzd2nyz00_1454 =
																							BGL_U16VREF(BgL_arg1960z00_3548,
																							BgL_auxz00_5935);
																		}}}}
																		{	/* Unsafe/bignumber.scm 644 */
																			long BgL_arg2335z00_1542;

																			BgL_arg2335z00_1542 =
																				(BgL_lenyz00_1408 - ((long) 2));
																			{	/* Unsafe/bignumber.scm 644 */
																				int BgL_iz00_3552;

																				BgL_iz00_3552 =
																					(int) (BgL_arg2335z00_1542);
																				{	/* Unsafe/bignumber.scm 644 */
																					obj_t BgL_arg1960z00_3553;

																					BgL_arg1960z00_3553 =
																						BGL_BIGNUM_U16VECT(BgL_nyz00_1420);
																					{	/* Unsafe/bignumber.scm 644 */
																						long BgL_auxz00_5941;

																						BgL_auxz00_5941 =
																							(long) (BgL_iz00_3552);
																						BgL_nextzd2msdzd2ofzd2nyzd2_1455 =
																							BGL_U16VREF(BgL_arg1960z00_3553,
																							BgL_auxz00_5941);
																		}}}}
																		{	/* Unsafe/bignumber.scm 646 */
																			int BgL_iz00_3555;

																			BgL_iz00_3555 = (int) (BgL_iz00_1451);
																			{	/* Unsafe/bignumber.scm 646 */
																				obj_t BgL_arg1960z00_3556;

																				BgL_arg1960z00_3556 =
																					BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																				{	/* Unsafe/bignumber.scm 646 */
																					long BgL_auxz00_5946;

																					BgL_auxz00_5946 =
																						(long) (BgL_iz00_3555);
																					BgL_msdzd2ofzd2nxz00_1456 =
																						BGL_U16VREF(BgL_arg1960z00_3556,
																						BgL_auxz00_5946);
																		}}}
																		{	/* Unsafe/bignumber.scm 648 */
																			long BgL_arg2336z00_1543;

																			BgL_arg2336z00_1543 =
																				(BgL_iz00_1451 - ((long) 1));
																			{	/* Unsafe/bignumber.scm 648 */
																				int BgL_iz00_3560;

																				BgL_iz00_3560 =
																					(int) (BgL_arg2336z00_1543);
																				{	/* Unsafe/bignumber.scm 648 */
																					obj_t BgL_arg1960z00_3561;

																					BgL_arg1960z00_3561 =
																						BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																					{	/* Unsafe/bignumber.scm 648 */
																						long BgL_auxz00_5952;

																						BgL_auxz00_5952 =
																							(long) (BgL_iz00_3560);
																						BgL_nextzd2msdzd2ofzd2nxzd2_1457 =
																							BGL_U16VREF(BgL_arg1960z00_3561,
																							BgL_auxz00_5952);
																		}}}}
																		{	/* Unsafe/bignumber.scm 650 */
																			long BgL_arg2337z00_1544;

																			BgL_arg2337z00_1544 =
																				(BgL_iz00_1451 - ((long) 2));
																			{	/* Unsafe/bignumber.scm 650 */
																				int BgL_iz00_3565;

																				BgL_iz00_3565 =
																					(int) (BgL_arg2337z00_1544);
																				{	/* Unsafe/bignumber.scm 650 */
																					obj_t BgL_arg1960z00_3566;

																					BgL_arg1960z00_3566 =
																						BGL_BIGNUM_U16VECT(BgL_nxz00_1419);
																					{	/* Unsafe/bignumber.scm 650 */
																						long BgL_auxz00_5958;

																						BgL_auxz00_5958 =
																							(long) (BgL_iz00_3565);
																						BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1458
																							=
																							BGL_U16VREF(BgL_arg1960z00_3566,
																							BgL_auxz00_5958);
																		}}}}
																		{
																			long BgL_qz00_1525;

																			long BgL_uz00_1526;

																			{	/* Unsafe/bignumber.scm 664 */
																				long BgL_qz00_1460;

																				if (
																					((long) (BgL_msdzd2ofzd2nxz00_1456) ==
																						(long) (BgL_msdzd2ofzd2nyz00_1454)))
																					{	/* Unsafe/bignumber.scm 664 */
																						BgL_qz00_1525 =
																							(
																							(((long) 1) <<
																								(int) (((long) 14))) -
																							((long) 1));
																						BgL_uz00_1526 =
																							((long)
																							(BgL_msdzd2ofzd2nyz00_1454) +
																							(long)
																							(BgL_nextzd2msdzd2ofzd2nxzd2_1457));
																					BgL_zc3anonymousza32324ze3z83_1527:
																						if (
																							(BgL_uz00_1526 <
																								(((long) 1) <<
																									(int) (((long) 14)))))
																							{	/* Unsafe/bignumber.scm 654 */
																								long BgL_temp1z00_1529;

																								BgL_temp1z00_1529 =
																									(BgL_qz00_1525 *
																									(long)
																									(BgL_nextzd2msdzd2ofzd2nyzd2_1455));
																								{	/* Unsafe/bignumber.scm 654 */
																									long BgL_temp2z00_1530;

																									{	/* Unsafe/bignumber.scm 655 */
																										long BgL_auxz00_5971;

																										BgL_auxz00_5971 =
																											(((long) 1) <<
																											(int) (((long) 14)));
																										BgL_temp2z00_1530 =
																											(BgL_temp1z00_1529 /
																											BgL_auxz00_5971);
																									}
																									{	/* Unsafe/bignumber.scm 655 */

																										{	/* Unsafe/bignumber.scm 656 */
																											bool_t BgL_testz00_5975;

																											if (
																												(BgL_uz00_1526 <
																													BgL_temp2z00_1530))
																												{	/* Unsafe/bignumber.scm 656 */
																													BgL_testz00_5975 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/bignumber.scm 656 */
																													if (
																														(BgL_temp2z00_1530
																															== BgL_uz00_1526))
																														{	/* Unsafe/bignumber.scm 659 */
																															long
																																BgL_arg2330z00_1536;
																															{	/* Unsafe/bignumber.scm 659 */
																																long
																																	BgL_auxz00_5980;
																																BgL_auxz00_5980
																																	=
																																	(((long) 1) <<
																																	(int) (((long)
																																			14)));
																																BgL_arg2330z00_1536
																																	=
																																	(BgL_temp1z00_1529
																																	%
																																	BgL_auxz00_5980);
																															}
																															BgL_testz00_5975 =
																																(
																																(long)
																																(BgL_nextzd2nextzd2msdzd2ofzd2nxz00_1458)
																																<
																																BgL_arg2330z00_1536);
																														}
																													else
																														{	/* Unsafe/bignumber.scm 657 */
																															BgL_testz00_5975 =
																																((bool_t) 0);
																														}
																												}
																											if (BgL_testz00_5975)
																												{
																													long BgL_uz00_5988;

																													long BgL_qz00_5986;

																													BgL_qz00_5986 =
																														(BgL_qz00_1525 -
																														((long) 1));
																													BgL_uz00_5988 =
																														(BgL_uz00_1526 +
																														(long)
																														(BgL_msdzd2ofzd2nyz00_1454));
																													BgL_uz00_1526 =
																														BgL_uz00_5988;
																													BgL_qz00_1525 =
																														BgL_qz00_5986;
																													goto
																														BgL_zc3anonymousza32324ze3z83_1527;
																												}
																											else
																												{	/* Unsafe/bignumber.scm 656 */
																													BgL_qz00_1460 =
																														BgL_qz00_1525;
																												}
																										}
																									}
																								}
																							}
																						else
																							{	/* Unsafe/bignumber.scm 653 */
																								BgL_qz00_1460 = BgL_qz00_1525;
																							}
																					}
																				else
																					{	/* Unsafe/bignumber.scm 667 */
																						long BgL_tempz00_1520;

																						BgL_tempz00_1520 =
																							(
																							((long)
																								(BgL_msdzd2ofzd2nxz00_1456) *
																								(((long) 1) << (int) (((long)
																											14)))) +
																							(long)
																							(BgL_nextzd2msdzd2ofzd2nxzd2_1457));
																						{	/* Unsafe/bignumber.scm 669 */
																							long BgL_arg2320z00_1521;

																							long BgL_arg2321z00_1522;

																							{	/* Unsafe/bignumber.scm 669 */
																								long BgL_auxz00_6003;

																								BgL_auxz00_6003 =
																									(long)
																									(BgL_msdzd2ofzd2nyz00_1454);
																								BgL_arg2320z00_1521 =
																									(BgL_tempz00_1520 /
																									BgL_auxz00_6003);
																							}
																							BgL_arg2321z00_1522 =
																								BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00
																								(BgL_tempz00_1520,
																								(long)
																								(BgL_msdzd2ofzd2nyz00_1454));
																							{
																								long BgL_uz00_6009;

																								long BgL_qz00_6008;

																								BgL_qz00_6008 =
																									BgL_arg2320z00_1521;
																								BgL_uz00_6009 =
																									BgL_arg2321z00_1522;
																								BgL_uz00_1526 = BgL_uz00_6009;
																								BgL_qz00_1525 = BgL_qz00_6008;
																								goto
																									BgL_zc3anonymousza32324ze3z83_1527;
																							}
																						}
																					}
																				{	/* Unsafe/bignumber.scm 674 */
																					long BgL_g1839z00_1461;

																					BgL_g1839z00_1461 =
																						(BgL_iz00_1451 -
																						(BgL_lenyz00_1408 - ((long) 1)));
																					{
																						long BgL_jz00_1463;

																						long BgL_kz00_1464;

																						long BgL_bz00_1465;

																						BgL_jz00_1463 = ((long) 1);
																						BgL_kz00_1464 = BgL_g1839z00_1461;
																						BgL_bz00_1465 = ((long) 0);
																					BgL_zc3anonymousza32270ze3z83_1466:
																						if (
																							(BgL_jz00_1463 <
																								BgL_lenyz00_1408))
																							{	/* Unsafe/bignumber.scm 679 */
																								long BgL_wz00_1468;

																								{	/* Unsafe/bignumber.scm 679 */
																									long BgL_arg2282z00_1477;

																									long BgL_arg2283z00_1478;

																									{	/* Unsafe/bignumber.scm 679 */
																										unsigned short
																											BgL_arg2284z00_1479;
																										{	/* Unsafe/bignumber.scm 679 */
																											int BgL_iz00_3592;

																											BgL_iz00_3592 =
																												(int) (BgL_kz00_1464);
																											{	/* Unsafe/bignumber.scm 679 */
																												obj_t
																													BgL_arg1960z00_3593;
																												BgL_arg1960z00_3593 =
																													BGL_BIGNUM_U16VECT
																													(BgL_nxz00_1419);
																												{	/* Unsafe/bignumber.scm 679 */
																													long BgL_auxz00_6016;

																													BgL_auxz00_6016 =
																														(long)
																														(BgL_iz00_3592);
																													BgL_arg2284z00_1479 =
																														BGL_U16VREF
																														(BgL_arg1960z00_3593,
																														BgL_auxz00_6016);
																										}}}
																										BgL_arg2282z00_1477 =
																											(
																											(long)
																											(BgL_arg2284z00_1479) +
																											BgL_bz00_1465);
																									}
																									{	/* Unsafe/bignumber.scm 680 */
																										unsigned short
																											BgL_arg2285z00_1480;
																										{	/* Unsafe/bignumber.scm 680 */
																											int BgL_iz00_3597;

																											BgL_iz00_3597 =
																												(int) (BgL_jz00_1463);
																											{	/* Unsafe/bignumber.scm 680 */
																												obj_t
																													BgL_arg1960z00_3598;
																												BgL_arg1960z00_3598 =
																													BGL_BIGNUM_U16VECT
																													(BgL_nyz00_1420);
																												{	/* Unsafe/bignumber.scm 680 */
																													long BgL_auxz00_6023;

																													BgL_auxz00_6023 =
																														(long)
																														(BgL_iz00_3597);
																													BgL_arg2285z00_1480 =
																														BGL_U16VREF
																														(BgL_arg1960z00_3598,
																														BgL_auxz00_6023);
																										}}}
																										BgL_arg2283z00_1478 =
																											(
																											(long)
																											(BgL_arg2285z00_1480) *
																											BgL_qz00_1460);
																									}
																									BgL_wz00_1468 =
																										(BgL_arg2282z00_1477 -
																										BgL_arg2283z00_1478);
																								}
																								{	/* Unsafe/bignumber.scm 684 */
																									obj_t BgL_arg2272z00_1469;

																									BgL_arg2272z00_1469 =
																										BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																										(BINT(BgL_wz00_1468),
																										BINT((((long) 1) <<
																												(int) (((long) 14)))));
																									{	/* Unsafe/bignumber.scm 681 */
																										int BgL_iz00_3606;

																										int BgL_digitz00_3607;

																										BgL_iz00_3606 =
																											(int) (BgL_kz00_1464);
																										BgL_digitz00_3607 =
																											CINT(BgL_arg2272z00_1469);
																										{	/* Unsafe/bignumber.scm 681 */
																											obj_t BgL_arg1961z00_3608;

																											BgL_arg1961z00_3608 =
																												BGL_BIGNUM_U16VECT
																												(BgL_nxz00_1419);
																											{	/* Unsafe/bignumber.scm 681 */
																												unsigned short
																													BgL_auxz00_6039;
																												long BgL_auxz00_6037;

																												BgL_auxz00_6039 =
																													(unsigned
																													short)
																													(BgL_digitz00_3607);
																												BgL_auxz00_6037 =
																													(long)
																													(BgL_iz00_3606);
																												BGL_U16VSET
																													(BgL_arg1961z00_3608,
																													BgL_auxz00_6037,
																													BgL_auxz00_6039);
																											} BUNSPEC;
																								}}}
																								{	/* Unsafe/bignumber.scm 685 */
																									long BgL_arg2275z00_1471;

																									long BgL_arg2277z00_1472;

																									long BgL_arg2278z00_1473;

																									BgL_arg2275z00_1471 =
																										(BgL_jz00_1463 +
																										((long) 1));
																									BgL_arg2277z00_1472 =
																										(BgL_kz00_1464 +
																										((long) 1));
																									{	/* Unsafe/bignumber.scm 687 */
																										long BgL_auxz00_6049;

																										long BgL_auxz00_6044;

																										BgL_auxz00_6049 =
																											(((long) 1) <<
																											(int) (((long) 14)));
																										BgL_auxz00_6044 =
																											(BgL_wz00_1468 -
																											((((long) 1) <<
																													(int) (((long) 14))) -
																												((long) 1)));
																										BgL_arg2278z00_1473 =
																											(BgL_auxz00_6044 /
																											BgL_auxz00_6049);
																									}
																									{
																										long BgL_bz00_6055;

																										long BgL_kz00_6054;

																										long BgL_jz00_6053;

																										BgL_jz00_6053 =
																											BgL_arg2275z00_1471;
																										BgL_kz00_6054 =
																											BgL_arg2277z00_1472;
																										BgL_bz00_6055 =
																											BgL_arg2278z00_1473;
																										BgL_bz00_1465 =
																											BgL_bz00_6055;
																										BgL_kz00_1464 =
																											BgL_kz00_6054;
																										BgL_jz00_1463 =
																											BgL_jz00_6053;
																										goto
																											BgL_zc3anonymousza32270ze3z83_1466;
																									}
																								}
																							}
																						else
																							{	/* Unsafe/bignumber.scm 690 */
																								long BgL_wz00_1481;

																								{	/* Unsafe/bignumber.scm 690 */
																									unsigned short
																										BgL_arg2315z00_1514;
																									{	/* Unsafe/bignumber.scm 690 */
																										int BgL_iz00_3626;

																										BgL_iz00_3626 =
																											(int) (BgL_kz00_1464);
																										{	/* Unsafe/bignumber.scm 690 */
																											obj_t BgL_arg1960z00_3627;

																											BgL_arg1960z00_3627 =
																												BGL_BIGNUM_U16VECT
																												(BgL_nxz00_1419);
																											{	/* Unsafe/bignumber.scm 690 */
																												long BgL_auxz00_6058;

																												BgL_auxz00_6058 =
																													(long)
																													(BgL_iz00_3626);
																												BgL_arg2315z00_1514 =
																													BGL_U16VREF
																													(BgL_arg1960z00_3627,
																													BgL_auxz00_6058);
																									}}}
																									BgL_wz00_1481 =
																										(
																										(long) (BgL_arg2315z00_1514)
																										+ BgL_bz00_1465);
																								}
																								{	/* Unsafe/bignumber.scm 694 */
																									obj_t BgL_arg2286z00_1482;

																									BgL_arg2286z00_1482 =
																										BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																										(BINT(BgL_wz00_1481),
																										BINT((((long) 1) <<
																												(int) (((long) 14)))));
																									{	/* Unsafe/bignumber.scm 691 */
																										int BgL_iz00_3633;

																										int BgL_digitz00_3634;

																										BgL_iz00_3633 =
																											(int) (BgL_kz00_1464);
																										BgL_digitz00_3634 =
																											CINT(BgL_arg2286z00_1482);
																										{	/* Unsafe/bignumber.scm 691 */
																											obj_t BgL_arg1961z00_3635;

																											BgL_arg1961z00_3635 =
																												BGL_BIGNUM_U16VECT
																												(BgL_nxz00_1419);
																											{	/* Unsafe/bignumber.scm 691 */
																												unsigned short
																													BgL_auxz00_6073;
																												long BgL_auxz00_6071;

																												BgL_auxz00_6073 =
																													(unsigned
																													short)
																													(BgL_digitz00_3634);
																												BgL_auxz00_6071 =
																													(long)
																													(BgL_iz00_3633);
																												BGL_U16VSET
																													(BgL_arg1961z00_3635,
																													BgL_auxz00_6071,
																													BgL_auxz00_6073);
																											} BUNSPEC;
																								}}}
																								if (
																									(BgL_wz00_1481 < ((long) 0)))
																									{	/* Unsafe/bignumber.scm 695 */
																										{	/* Unsafe/bignumber.scm 699 */
																											long BgL_arg2291z00_1485;

																											long BgL_arg2292z00_1486;

																											BgL_arg2291z00_1485 =
																												(BgL_iz00_1451 -
																												(BgL_lenyz00_1408 -
																													((long) 1)));
																											BgL_arg2292z00_1486 =
																												(BgL_qz00_1460 -
																												((long) 1));
																											{	/* Unsafe/bignumber.scm 697 */
																												int BgL_iz00_3645;

																												int BgL_digitz00_3646;

																												BgL_iz00_3645 =
																													(int)
																													(BgL_arg2291z00_1485);
																												BgL_digitz00_3646 =
																													(int)
																													(BgL_arg2292z00_1486);
																												{	/* Unsafe/bignumber.scm 697 */
																													obj_t
																														BgL_arg1961z00_3647;
																													BgL_arg1961z00_3647 =
																														BGL_BIGNUM_U16VECT
																														(BgL_rz00_1409);
																													{	/* Unsafe/bignumber.scm 697 */
																														unsigned short
																															BgL_auxz00_6086;
																														long
																															BgL_auxz00_6084;
																														BgL_auxz00_6086 =
																															(unsigned
																															short)
																															(BgL_digitz00_3646);
																														BgL_auxz00_6084 =
																															(long)
																															(BgL_iz00_3645);
																														BGL_U16VSET
																															(BgL_arg1961z00_3647,
																															BgL_auxz00_6084,
																															BgL_auxz00_6086);
																													} BUNSPEC;
																										}}}
																										{	/* Unsafe/bignumber.scm 701 */
																											long BgL_g1840z00_1488;

																											BgL_g1840z00_1488 =
																												(BgL_iz00_1451 -
																												(BgL_lenyz00_1408 -
																													((long) 1)));
																											{
																												long BgL_jz00_1490;

																												long BgL_kz00_1491;

																												long BgL_cz00_1492;

																												BgL_jz00_1490 =
																													((long) 1);
																												BgL_kz00_1491 =
																													BgL_g1840z00_1488;
																												BgL_cz00_1492 =
																													((long) 0);
																											BgL_zc3anonymousza32294ze3z83_1493:
																												if (
																													(BgL_jz00_1490 <
																														BgL_lenyz00_1408))
																													{	/* Unsafe/bignumber.scm 706 */
																														long BgL_wz00_1495;

																														{	/* Unsafe/bignumber.scm 708 */
																															long
																																BgL_arg2304z00_1502;
																															{	/* Unsafe/bignumber.scm 708 */
																																unsigned short
																																	BgL_arg2305z00_1503;
																																unsigned short
																																	BgL_arg2306z00_1504;
																																{	/* Unsafe/bignumber.scm 708 */
																																	int
																																		BgL_iz00_3655;
																																	BgL_iz00_3655
																																		=
																																		(int)
																																		(BgL_kz00_1491);
																																	{	/* Unsafe/bignumber.scm 708 */
																																		obj_t
																																			BgL_arg1960z00_3656;
																																		BgL_arg1960z00_3656
																																			=
																																			BGL_BIGNUM_U16VECT
																																			(BgL_nxz00_1419);
																																		{	/* Unsafe/bignumber.scm 708 */
																																			long
																																				BgL_auxz00_6095;
																																			BgL_auxz00_6095
																																				=
																																				(long)
																																				(BgL_iz00_3655);
																																			BgL_arg2305z00_1503
																																				=
																																				BGL_U16VREF
																																				(BgL_arg1960z00_3656,
																																				BgL_auxz00_6095);
																																}}}
																																{	/* Unsafe/bignumber.scm 709 */
																																	int
																																		BgL_iz00_3658;
																																	BgL_iz00_3658
																																		=
																																		(int)
																																		(BgL_jz00_1490);
																																	{	/* Unsafe/bignumber.scm 709 */
																																		obj_t
																																			BgL_arg1960z00_3659;
																																		BgL_arg1960z00_3659
																																			=
																																			BGL_BIGNUM_U16VECT
																																			(BgL_nyz00_1420);
																																		{	/* Unsafe/bignumber.scm 709 */
																																			long
																																				BgL_auxz00_6100;
																																			BgL_auxz00_6100
																																				=
																																				(long)
																																				(BgL_iz00_3658);
																																			BgL_arg2306z00_1504
																																				=
																																				BGL_U16VREF
																																				(BgL_arg1960z00_3659,
																																				BgL_auxz00_6100);
																																}}}
																																BgL_arg2304z00_1502
																																	=
																																	((long)
																																	(BgL_arg2305z00_1503)
																																	+
																																	(long)
																																	(BgL_arg2306z00_1504));
																															}
																															BgL_wz00_1495 =
																																(BgL_arg2304z00_1502
																																+
																																BgL_cz00_1492);
																														}
																														{	/* Unsafe/bignumber.scm 714 */
																															obj_t
																																BgL_arg2296z00_1496;
																															BgL_arg2296z00_1496
																																=
																																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																																(BINT
																																(BgL_wz00_1495),
																																BINT((((long) 1)
																																		<<
																																		(int) ((
																																				(long)
																																				14)))));
																															{	/* Unsafe/bignumber.scm 711 */
																																int
																																	BgL_iz00_3667;
																																int
																																	BgL_digitz00_3668;
																																BgL_iz00_3667 =
																																	(int)
																																	(BgL_kz00_1491);
																																BgL_digitz00_3668
																																	=
																																	CINT
																																	(BgL_arg2296z00_1496);
																																{	/* Unsafe/bignumber.scm 711 */
																																	obj_t
																																		BgL_arg1961z00_3669;
																																	BgL_arg1961z00_3669
																																		=
																																		BGL_BIGNUM_U16VECT
																																		(BgL_nxz00_1419);
																																	{	/* Unsafe/bignumber.scm 711 */
																																		unsigned
																																			short
																																			BgL_auxz00_6117;
																																		long
																																			BgL_auxz00_6115;
																																		BgL_auxz00_6117
																																			=
																																			(unsigned
																																			short)
																																			(BgL_digitz00_3668);
																																		BgL_auxz00_6115
																																			=
																																			(long)
																																			(BgL_iz00_3667);
																																		BGL_U16VSET
																																			(BgL_arg1961z00_3669,
																																			BgL_auxz00_6115,
																																			BgL_auxz00_6117);
																																	} BUNSPEC;
																														}}}
																														{	/* Unsafe/bignumber.scm 716 */
																															long
																																BgL_arg2300z00_1498;
																															long
																																BgL_arg2301z00_1499;
																															long
																																BgL_arg2302z00_1500;
																															BgL_arg2300z00_1498
																																=
																																(BgL_jz00_1490 +
																																((long) 1));
																															BgL_arg2301z00_1499
																																=
																																(BgL_kz00_1491 +
																																((long) 1));
																															{	/* Unsafe/bignumber.scm 718 */
																																long
																																	BgL_auxz00_6122;
																																BgL_auxz00_6122
																																	=
																																	(((long) 1) <<
																																	(int) (((long)
																																			14)));
																																BgL_arg2302z00_1500
																																	=
																																	(BgL_wz00_1495
																																	/
																																	BgL_auxz00_6122);
																															}
																															{
																																long
																																	BgL_cz00_6128;
																																long
																																	BgL_kz00_6127;
																																long
																																	BgL_jz00_6126;
																																BgL_jz00_6126 =
																																	BgL_arg2300z00_1498;
																																BgL_kz00_6127 =
																																	BgL_arg2301z00_1499;
																																BgL_cz00_6128 =
																																	BgL_arg2302z00_1500;
																																BgL_cz00_1492 =
																																	BgL_cz00_6128;
																																BgL_kz00_1491 =
																																	BgL_kz00_6127;
																																BgL_jz00_1490 =
																																	BgL_jz00_6126;
																																goto
																																	BgL_zc3anonymousza32294ze3z83_1493;
																															}
																														}
																													}
																												else
																													{	/* Unsafe/bignumber.scm 723 */
																														obj_t
																															BgL_arg2307z00_1505;
																														{	/* Unsafe/bignumber.scm 723 */
																															long
																																BgL_arg2308z00_1506;
																															long
																																BgL_arg2309z00_1507;
																															{	/* Unsafe/bignumber.scm 723 */
																																unsigned short
																																	BgL_arg2310z00_1508;
																																{	/* Unsafe/bignumber.scm 723 */
																																	int
																																		BgL_iz00_3679;
																																	BgL_iz00_3679
																																		=
																																		(int)
																																		(BgL_kz00_1491);
																																	{	/* Unsafe/bignumber.scm 723 */
																																		obj_t
																																			BgL_arg1960z00_3680;
																																		BgL_arg1960z00_3680
																																			=
																																			BGL_BIGNUM_U16VECT
																																			(BgL_nxz00_1419);
																																		{	/* Unsafe/bignumber.scm 723 */
																																			long
																																				BgL_auxz00_6131;
																																			BgL_auxz00_6131
																																				=
																																				(long)
																																				(BgL_iz00_3679);
																																			BgL_arg2310z00_1508
																																				=
																																				BGL_U16VREF
																																				(BgL_arg1960z00_3680,
																																				BgL_auxz00_6131);
																																}}}
																																BgL_arg2308z00_1506
																																	=
																																	((long)
																																	(BgL_arg2310z00_1508)
																																	+
																																	BgL_cz00_1492);
																															}
																															BgL_arg2309z00_1507
																																=
																																(((long) 1) <<
																																(int) (((long)
																																		14)));
																															BgL_arg2307z00_1505
																																=
																																BGl_moduloz00zz__r4_numbers_6_5_fixnumz00
																																(BINT
																																(BgL_arg2308z00_1506),
																																BINT
																																(BgL_arg2309z00_1507));
																														}
																														{	/* Unsafe/bignumber.scm 719 */
																															int BgL_iz00_3686;

																															int
																																BgL_digitz00_3687;
																															BgL_iz00_3686 =
																																(int)
																																(BgL_kz00_1491);
																															BgL_digitz00_3687
																																=
																																CINT
																																(BgL_arg2307z00_1505);
																															{	/* Unsafe/bignumber.scm 719 */
																																obj_t
																																	BgL_arg1961z00_3688;
																																BgL_arg1961z00_3688
																																	=
																																	BGL_BIGNUM_U16VECT
																																	(BgL_nxz00_1419);
																																{	/* Unsafe/bignumber.scm 719 */
																																	unsigned short
																																		BgL_auxz00_6146;
																																	long
																																		BgL_auxz00_6144;
																																	BgL_auxz00_6146
																																		=
																																		(unsigned
																																		short)
																																		(BgL_digitz00_3687);
																																	BgL_auxz00_6144
																																		=
																																		(long)
																																		(BgL_iz00_3686);
																																	BGL_U16VSET
																																		(BgL_arg1961z00_3688,
																																		BgL_auxz00_6144,
																																		BgL_auxz00_6146);
																																} BUNSPEC;
																									}}}}}}
																								else
																									{	/* Unsafe/bignumber.scm 725 */
																										long BgL_arg2312z00_1511;

																										BgL_arg2312z00_1511 =
																											(BgL_iz00_1451 -
																											(BgL_lenyz00_1408 -
																												((long) 1)));
																										{	/* Unsafe/bignumber.scm 725 */
																											int BgL_iz00_3694;

																											int BgL_digitz00_3695;

																											BgL_iz00_3694 =
																												(int)
																												(BgL_arg2312z00_1511);
																											BgL_digitz00_3695 =
																												(int) (BgL_qz00_1460);
																											{	/* Unsafe/bignumber.scm 725 */
																												obj_t
																													BgL_arg1961z00_3696;
																												BgL_arg1961z00_3696 =
																													BGL_BIGNUM_U16VECT
																													(BgL_rz00_1409);
																												{	/* Unsafe/bignumber.scm 725 */
																													unsigned short
																														BgL_auxz00_6156;
																													long BgL_auxz00_6154;

																													BgL_auxz00_6156 =
																														(unsigned
																														short)
																														(BgL_digitz00_3695);
																													BgL_auxz00_6154 =
																														(long)
																														(BgL_iz00_3694);
																													BGL_U16VSET
																														(BgL_arg1961z00_3696,
																														BgL_auxz00_6154,
																														BgL_auxz00_6156);
																												} BUNSPEC;
																									}}}
																								{
																									long BgL_iz00_6159;

																									BgL_iz00_6159 =
																										(BgL_iz00_1451 -
																										((long) 1));
																									BgL_iz00_1451 = BgL_iz00_6159;
																									goto
																										BgL_zc3anonymousza32268ze3z83_1452;
																								}
																							}
																					}
																				}
																			}
																		}
																	}
															}
															{	/* Unsafe/bignumber.scm 728 */
																long BgL_g1841z00_1546;

																BgL_g1841z00_1546 =
																	(BgL_lenyz00_1408 - ((long) 1));
																{
																	long BgL_iz00_1548;

																	long BgL_kz00_1549;

																	BgL_iz00_1548 = BgL_g1841z00_1546;
																	BgL_kz00_1549 = ((long) 0);
																BgL_zc3anonymousza32338ze3z83_1550:
																	if ((((long) 0) < BgL_iz00_1548))
																		{	/* Unsafe/bignumber.scm 730 */
																			long BgL_wz00_1552;

																			{	/* Unsafe/bignumber.scm 730 */
																				long BgL_arg2343z00_1556;

																				unsigned short BgL_arg2344z00_1557;

																				BgL_arg2343z00_1556 =
																					(BgL_kz00_1549 *
																					(((long) 1) << (int) (((long) 14))));
																				{	/* Unsafe/bignumber.scm 731 */
																					int BgL_iz00_3732;

																					BgL_iz00_3732 = (int) (BgL_iz00_1548);
																					{	/* Unsafe/bignumber.scm 731 */
																						obj_t BgL_arg1960z00_3733;

																						BgL_arg1960z00_3733 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nxz00_1419);
																						{	/* Unsafe/bignumber.scm 731 */
																							long BgL_auxz00_6169;

																							BgL_auxz00_6169 =
																								(long) (BgL_iz00_3732);
																							BgL_arg2344z00_1557 =
																								BGL_U16VREF(BgL_arg1960z00_3733,
																								BgL_auxz00_6169);
																				}}}
																				BgL_wz00_1552 =
																					(BgL_arg2343z00_1556 +
																					(long) (BgL_arg2344z00_1557));
																			}
																			{	/* Unsafe/bignumber.scm 732 */
																				long BgL_arg2340z00_1553;

																				BgL_arg2340z00_1553 =
																					(BgL_wz00_1552 / BgL_shiftz00_1413);
																				{	/* Unsafe/bignumber.scm 732 */
																					int BgL_iz00_3739;

																					int BgL_digitz00_3740;

																					BgL_iz00_3739 = (int) (BgL_iz00_1548);
																					BgL_digitz00_3740 =
																						(int) (BgL_arg2340z00_1553);
																					{	/* Unsafe/bignumber.scm 732 */
																						obj_t BgL_arg1961z00_3741;

																						BgL_arg1961z00_3741 =
																							BGL_BIGNUM_U16VECT
																							(BgL_nxz00_1419);
																						{	/* Unsafe/bignumber.scm 732 */
																							unsigned short BgL_auxz00_6180;

																							long BgL_auxz00_6178;

																							BgL_auxz00_6180 =
																								(unsigned
																								short) (BgL_digitz00_3740);
																							BgL_auxz00_6178 =
																								(long) (BgL_iz00_3739);
																							BGL_U16VSET(BgL_arg1961z00_3741,
																								BgL_auxz00_6178,
																								BgL_auxz00_6180);
																						} BUNSPEC;
																			}}}
																			{	/* Unsafe/bignumber.scm 733 */
																				long BgL_arg2341z00_1554;

																				long BgL_arg2342z00_1555;

																				BgL_arg2341z00_1554 =
																					(BgL_iz00_1548 - ((long) 1));
																				BgL_arg2342z00_1555 =
																					(BgL_wz00_1552 % BgL_shiftz00_1413);
																				{
																					long BgL_kz00_6186;

																					long BgL_iz00_6185;

																					BgL_iz00_6185 = BgL_arg2341z00_1554;
																					BgL_kz00_6186 = BgL_arg2342z00_1555;
																					BgL_kz00_1549 = BgL_kz00_6186;
																					BgL_iz00_1548 = BgL_iz00_6185;
																					goto
																						BgL_zc3anonymousza32338ze3z83_1550;
																				}
																			}
																		}
																	else
																		{	/* Unsafe/bignumber.scm 729 */
																			((bool_t) 0);
																		}
																}
															}
															return
																MAKE_PAIR
																(BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																(BgL_rz00_1409),
																BGl_bignumzd2removezd2leadingzd2za7eroesz75zz__bignumz00
																(BgL_nxz00_1419));
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



/* $divrembx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_div(obj_t BgL_xz00_61, obj_t BgL_yz00_62)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 758 */
			{	/* Unsafe/bignumber.scm 759 */
				obj_t BgL_vz00_3777;

				BgL_vz00_3777 =
					BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_61, BgL_yz00_62);
				{	/* Unsafe/bignumber.scm 759 */
					obj_t BgL_val0_1874z00_3778;

					obj_t BgL_val1_1875z00_3779;

					BgL_val0_1874z00_3778 = CAR(BgL_vz00_3777);
					BgL_val1_1875z00_3779 = CDR(BgL_vz00_3777);
					{	/* Unsafe/bignumber.scm 759 */
						int BgL_auxz00_6193;

						BgL_auxz00_6193 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_6193);
					}
					{	/* Unsafe/bignumber.scm 759 */
						int BgL_auxz00_6196;

						BgL_auxz00_6196 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_6196, BgL_val1_1875z00_3779);
					}
					return BgL_val0_1874z00_3778;
				}
			}
		}
	}



/* _$divrembx */
	obj_t BGl__z42divrembxz42zz__bignumz00(obj_t BgL_envz00_4666,
		obj_t BgL_xz00_4667, obj_t BgL_yz00_4668)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 758 */
			{	/* Unsafe/bignumber.scm 759 */
				obj_t BgL_auxz00_6206;

				obj_t BgL_auxz00_6199;

				if (BIGNUMP(BgL_yz00_4668))
					{	/* Unsafe/bignumber.scm 759 */
						BgL_auxz00_6206 = BgL_yz00_4668;
					}
				else
					{
						obj_t BgL_auxz00_6209;

						BgL_auxz00_6209 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24738)), BGl_string3193z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4668);
						FAILURE(BgL_auxz00_6209, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4667))
					{	/* Unsafe/bignumber.scm 759 */
						BgL_auxz00_6199 = BgL_xz00_4667;
					}
				else
					{
						obj_t BgL_auxz00_6202;

						BgL_auxz00_6202 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24738)), BGl_string3193z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4667);
						FAILURE(BgL_auxz00_6202, BFALSE, BFALSE);
					}
				return bgl_bignum_div(BgL_auxz00_6199, BgL_auxz00_6206);
			}
		}
	}



/* $quotientbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_quotient(obj_t BgL_xz00_63,
		obj_t BgL_yz00_64)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 762 */
			return CAR(BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_63, BgL_yz00_64));
		}
	}



/* _$quotientbx */
	obj_t BGl__z42quotientbxz42zz__bignumz00(obj_t BgL_envz00_4669,
		obj_t BgL_xz00_4670, obj_t BgL_yz00_4671)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 762 */
			{	/* Unsafe/bignumber.scm 763 */
				obj_t BgL_auxz00_6223;

				obj_t BgL_auxz00_6216;

				if (BIGNUMP(BgL_yz00_4671))
					{	/* Unsafe/bignumber.scm 763 */
						BgL_auxz00_6223 = BgL_yz00_4671;
					}
				else
					{
						obj_t BgL_auxz00_6226;

						BgL_auxz00_6226 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24852)), BGl_string3194z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4671);
						FAILURE(BgL_auxz00_6226, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4670))
					{	/* Unsafe/bignumber.scm 763 */
						BgL_auxz00_6216 = BgL_xz00_4670;
					}
				else
					{
						obj_t BgL_auxz00_6219;

						BgL_auxz00_6219 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24852)), BGl_string3194z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4670);
						FAILURE(BgL_auxz00_6219, BFALSE, BFALSE);
					}
				return bgl_bignum_quotient(BgL_auxz00_6216, BgL_auxz00_6223);
			}
		}
	}



/* $remainderbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_remainder(obj_t BgL_xz00_65,
		obj_t BgL_yz00_66)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 765 */
			return CDR(BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_65, BgL_yz00_66));
		}
	}



/* _$remainderbx */
	obj_t BGl__z42remainderbxz42zz__bignumz00(obj_t BgL_envz00_4672,
		obj_t BgL_xz00_4673, obj_t BgL_yz00_4674)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 765 */
			{	/* Unsafe/bignumber.scm 766 */
				obj_t BgL_auxz00_6240;

				obj_t BgL_auxz00_6233;

				if (BIGNUMP(BgL_yz00_4674))
					{	/* Unsafe/bignumber.scm 766 */
						BgL_auxz00_6240 = BgL_yz00_4674;
					}
				else
					{
						obj_t BgL_auxz00_6243;

						BgL_auxz00_6243 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24926)), BGl_string3195z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4674);
						FAILURE(BgL_auxz00_6243, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4673))
					{	/* Unsafe/bignumber.scm 766 */
						BgL_auxz00_6233 = BgL_xz00_4673;
					}
				else
					{
						obj_t BgL_auxz00_6236;

						BgL_auxz00_6236 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 24926)), BGl_string3195z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4673);
						FAILURE(BgL_auxz00_6236, BFALSE, BFALSE);
					}
				return bgl_bignum_remainder(BgL_auxz00_6233, BgL_auxz00_6240);
			}
		}
	}



/* $absbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_abs(obj_t BgL_xz00_77)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 797 */
			{	/* Unsafe/bignumber.scm 798 */
				bool_t BgL_testz00_6248;

				{	/* Unsafe/bignumber.scm 798 */
					bool_t BgL_res3044z00_3802;

					{	/* Unsafe/bignumber.scm 798 */
						unsigned short BgL_arg2073z00_3795;

						{	/* Unsafe/bignumber.scm 798 */
							obj_t BgL_arg1956z00_3798;

							BgL_arg1956z00_3798 = BGL_BIGNUM_U16VECT(BgL_xz00_77);
							BgL_arg2073z00_3795 =
								BGL_U16VREF(BgL_arg1956z00_3798, ((long) 0));
						}
						BgL_res3044z00_3802 = ((long) (BgL_arg2073z00_3795) == ((long) 0));
					}
					BgL_testz00_6248 = BgL_res3044z00_3802;
				}
				if (BgL_testz00_6248)
					{	/* Unsafe/bignumber.scm 798 */
						return
							bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00, BgL_xz00_77);
					}
				else
					{	/* Unsafe/bignumber.scm 798 */
						return BgL_xz00_77;
					}
			}
		}
	}



/* _$absbx */
	obj_t BGl__z42absbxz42zz__bignumz00(obj_t BgL_envz00_4675,
		obj_t BgL_xz00_4676)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 797 */
			{	/* Unsafe/bignumber.scm 798 */
				obj_t BgL_auxz00_6254;

				if (BIGNUMP(BgL_xz00_4676))
					{	/* Unsafe/bignumber.scm 798 */
						BgL_auxz00_6254 = BgL_xz00_4676;
					}
				else
					{
						obj_t BgL_auxz00_6257;

						BgL_auxz00_6257 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 25763)), BGl_string3196z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4676);
						FAILURE(BgL_auxz00_6257, BFALSE, BFALSE);
					}
				return bgl_bignum_abs(BgL_auxz00_6254);
			}
		}
	}



/* $gcdbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_gcd(obj_t BgL_xz00_78, obj_t BgL_yz00_79)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 802 */
			{	/* Unsafe/bignumber.scm 803 */
				obj_t BgL_g1842z00_3804;

				obj_t BgL_g1843z00_3805;

				{	/* Unsafe/bignumber.scm 803 */
					obj_t BgL_res3046z00_3820;

					{	/* Unsafe/bignumber.scm 803 */
						bool_t BgL_testz00_6262;

						{	/* Unsafe/bignumber.scm 803 */
							bool_t BgL_res3045z00_3818;

							{	/* Unsafe/bignumber.scm 803 */
								unsigned short BgL_arg2073z00_3814;

								BgL_arg2073z00_3814 =
									BGl_bignumzd2signzd2zz__bignumz00(BgL_xz00_78);
								BgL_res3045z00_3818 =
									((long) (BgL_arg2073z00_3814) == ((long) 0));
							}
							BgL_testz00_6262 = BgL_res3045z00_3818;
						}
						if (BgL_testz00_6262)
							{	/* Unsafe/bignumber.scm 803 */
								BgL_res3046z00_3820 =
									bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
									BgL_xz00_78);
							}
						else
							{	/* Unsafe/bignumber.scm 803 */
								BgL_res3046z00_3820 = BgL_xz00_78;
							}
					}
					BgL_g1842z00_3804 = BgL_res3046z00_3820;
				}
				{	/* Unsafe/bignumber.scm 803 */
					obj_t BgL_res3048z00_3830;

					{	/* Unsafe/bignumber.scm 803 */
						bool_t BgL_testz00_6267;

						{	/* Unsafe/bignumber.scm 803 */
							bool_t BgL_res3047z00_3828;

							{	/* Unsafe/bignumber.scm 803 */
								unsigned short BgL_arg2073z00_3824;

								BgL_arg2073z00_3824 =
									BGl_bignumzd2signzd2zz__bignumz00(BgL_yz00_79);
								BgL_res3047z00_3828 =
									((long) (BgL_arg2073z00_3824) == ((long) 0));
							}
							BgL_testz00_6267 = BgL_res3047z00_3828;
						}
						if (BgL_testz00_6267)
							{	/* Unsafe/bignumber.scm 803 */
								BgL_res3048z00_3830 =
									bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
									BgL_yz00_79);
							}
						else
							{	/* Unsafe/bignumber.scm 803 */
								BgL_res3048z00_3830 = BgL_yz00_79;
							}
					}
					BgL_g1843z00_3805 = BgL_res3048z00_3830;
				}
				if (BXZERO(BgL_g1843z00_3805))
					{	/* Unsafe/bignumber.scm 803 */
						return BgL_g1842z00_3804;
					}
				else
					{	/* Unsafe/bignumber.scm 803 */
						obj_t BgL_arg2388z00_3858;

						BgL_arg2388z00_3858 =
							bgl_bignum_remainder(BgL_g1842z00_3804, BgL_g1843z00_3805);
						{
							obj_t BgL_xz00_3832;

							obj_t BgL_yz00_3833;

							BgL_xz00_3832 = BgL_g1843z00_3805;
							BgL_yz00_3833 = BgL_arg2388z00_3858;
						BgL_loopz00_3831:
							if (
								(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_yz00_3833) ==
									((long) 1)))
								{	/* Unsafe/bignumber.scm 803 */
									return BgL_xz00_3832;
								}
							else
								{	/* Unsafe/bignumber.scm 803 */
									obj_t BgL_arg2388z00_3837;

									BgL_arg2388z00_3837 =
										CDR(BGl_bignumzd2divzd2zz__bignumz00(BgL_xz00_3832,
											BgL_yz00_3833));
									if (BXZERO(BgL_arg2388z00_3837))
										{	/* Unsafe/bignumber.scm 803 */
											return BgL_yz00_3833;
										}
									else
										{
											obj_t BgL_yz00_6283;

											obj_t BgL_xz00_6282;

											BgL_xz00_6282 = BgL_arg2388z00_3837;
											BgL_yz00_6283 =
												bgl_bignum_remainder(BgL_yz00_3833,
												BgL_arg2388z00_3837);
											BgL_yz00_3833 = BgL_yz00_6283;
											BgL_xz00_3832 = BgL_xz00_6282;
											goto BgL_loopz00_3831;
										}
								}
						}
					}
			}
		}
	}



/* _$gcdbx */
	obj_t BGl__z42gcdbxz42zz__bignumz00(obj_t BgL_envz00_4677,
		obj_t BgL_xz00_4678, obj_t BgL_yz00_4679)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 802 */
			{	/* Unsafe/bignumber.scm 803 */
				obj_t BgL_auxz00_6292;

				obj_t BgL_auxz00_6285;

				if (BIGNUMP(BgL_yz00_4679))
					{	/* Unsafe/bignumber.scm 803 */
						BgL_auxz00_6292 = BgL_yz00_4679;
					}
				else
					{
						obj_t BgL_auxz00_6295;

						BgL_auxz00_6295 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 25838)), BGl_string3197z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4679);
						FAILURE(BgL_auxz00_6295, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4678))
					{	/* Unsafe/bignumber.scm 803 */
						BgL_auxz00_6285 = BgL_xz00_4678;
					}
				else
					{
						obj_t BgL_auxz00_6288;

						BgL_auxz00_6288 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 25838)), BGl_string3197z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4678);
						FAILURE(BgL_auxz00_6288, BFALSE, BFALSE);
					}
				return bgl_bignum_gcd(BgL_auxz00_6285, BgL_auxz00_6292);
			}
		}
	}



/* $lcmbx */
	BGL_EXPORTED_DEF obj_t bgl_bignum_lcm(obj_t BgL_xz00_80, obj_t BgL_yz00_81)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 808 */
			{	/* Unsafe/bignumber.scm 809 */
				bool_t BgL_testz00_6300;

				{	/* Unsafe/bignumber.scm 809 */
					bool_t BgL_testz00_6301;

					{	/* Unsafe/bignumber.scm 809 */
						bool_t BgL_res3055z00_3911;

						{	/* Unsafe/bignumber.scm 809 */
							long BgL_arg2070z00_3904;

							{	/* Unsafe/bignumber.scm 809 */
								obj_t BgL_arg1955z00_3907;

								BgL_arg1955z00_3907 = BGL_BIGNUM_U16VECT(BgL_xz00_80);
								BgL_arg2070z00_3904 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3907);
							}
							BgL_res3055z00_3911 = (BgL_arg2070z00_3904 == ((long) 1));
						}
						BgL_testz00_6301 = BgL_res3055z00_3911;
					}
					if (BgL_testz00_6301)
						{	/* Unsafe/bignumber.scm 809 */
							BgL_testz00_6300 = ((bool_t) 1);
						}
					else
						{	/* Unsafe/bignumber.scm 809 */
							bool_t BgL_res3056z00_3920;

							{	/* Unsafe/bignumber.scm 809 */
								long BgL_arg2070z00_3913;

								{	/* Unsafe/bignumber.scm 809 */
									obj_t BgL_arg1955z00_3916;

									BgL_arg1955z00_3916 = BGL_BIGNUM_U16VECT(BgL_yz00_81);
									BgL_arg2070z00_3913 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3916);
								}
								BgL_res3056z00_3920 = (BgL_arg2070z00_3913 == ((long) 1));
							}
							BgL_testz00_6300 = BgL_res3056z00_3920;
				}}
				if (BgL_testz00_6300)
					{	/* Unsafe/bignumber.scm 809 */
						return BGl_bignumzd2za7eroz75zz__bignumz00;
					}
				else
					{	/* Unsafe/bignumber.scm 809 */
						obj_t BgL_arg2390z00_3900;

						obj_t BgL_arg2391z00_3901;

						{	/* Unsafe/bignumber.scm 809 */
							obj_t BgL_arg2392z00_3902;

							BgL_arg2392z00_3902 = bgl_bignum_mul(BgL_xz00_80, BgL_yz00_81);
							{	/* Unsafe/bignumber.scm 809 */
								obj_t BgL_res3058z00_3930;

								{	/* Unsafe/bignumber.scm 809 */
									bool_t BgL_testz00_6309;

									{	/* Unsafe/bignumber.scm 809 */
										bool_t BgL_res3057z00_3928;

										{	/* Unsafe/bignumber.scm 809 */
											unsigned short BgL_arg2073z00_3924;

											BgL_arg2073z00_3924 =
												BGl_bignumzd2signzd2zz__bignumz00(BgL_arg2392z00_3902);
											BgL_res3057z00_3928 =
												((long) (BgL_arg2073z00_3924) == ((long) 0));
										}
										BgL_testz00_6309 = BgL_res3057z00_3928;
									}
									if (BgL_testz00_6309)
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3058z00_3930 =
												bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
												BgL_arg2392z00_3902);
										}
									else
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3058z00_3930 = BgL_arg2392z00_3902;
										}
								}
								BgL_arg2390z00_3900 = BgL_res3058z00_3930;
							}
						}
						{	/* Unsafe/bignumber.scm 809 */
							obj_t BgL_res3063z00_3974;

							{	/* Unsafe/bignumber.scm 809 */
								obj_t BgL_g1842z00_3933;

								obj_t BgL_g1843z00_3934;

								{	/* Unsafe/bignumber.scm 809 */
									obj_t BgL_res3059z00_3943;

									if (BXNEGATIVE(BgL_xz00_80))
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3059z00_3943 =
												bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
												BgL_xz00_80);
										}
									else
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3059z00_3943 = BgL_xz00_80;
										}
									BgL_g1842z00_3933 = BgL_res3059z00_3943;
								}
								{	/* Unsafe/bignumber.scm 809 */
									obj_t BgL_res3060z00_3947;

									if (BXNEGATIVE(BgL_yz00_81))
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3060z00_3947 =
												bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
												BgL_yz00_81);
										}
									else
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3060z00_3947 = BgL_yz00_81;
										}
									BgL_g1843z00_3934 = BgL_res3060z00_3947;
								}
								{
									obj_t BgL_xz00_3949;

									obj_t BgL_yz00_3950;

									BgL_xz00_3949 = BgL_g1842z00_3933;
									BgL_yz00_3950 = BgL_g1843z00_3934;
								BgL_loopz00_3948:
									if (BXZERO(BgL_yz00_3950))
										{	/* Unsafe/bignumber.scm 809 */
											BgL_res3063z00_3974 = BgL_xz00_3949;
										}
									else
										{
											obj_t BgL_yz00_6323;

											obj_t BgL_xz00_6322;

											BgL_xz00_6322 = BgL_yz00_3950;
											BgL_yz00_6323 =
												bgl_bignum_remainder(BgL_xz00_3949, BgL_yz00_3950);
											BgL_yz00_3950 = BgL_yz00_6323;
											BgL_xz00_3949 = BgL_xz00_6322;
											goto BgL_loopz00_3948;
										}
								}
							}
							BgL_arg2391z00_3901 = BgL_res3063z00_3974;
						}
						return
							CAR(BGl_bignumzd2divzd2zz__bignumz00(BgL_arg2390z00_3900,
								BgL_arg2391z00_3901));
					}
			}
		}
	}



/* _$lcmbx */
	obj_t BGl__z42lcmbxz42zz__bignumz00(obj_t BgL_envz00_4680,
		obj_t BgL_xz00_4681, obj_t BgL_yz00_4682)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 808 */
			{	/* Unsafe/bignumber.scm 809 */
				obj_t BgL_auxz00_6334;

				obj_t BgL_auxz00_6327;

				if (BIGNUMP(BgL_yz00_4682))
					{	/* Unsafe/bignumber.scm 809 */
						BgL_auxz00_6334 = BgL_yz00_4682;
					}
				else
					{
						obj_t BgL_auxz00_6337;

						BgL_auxz00_6337 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 25975)), BGl_string3198z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_yz00_4682);
						FAILURE(BgL_auxz00_6337, BFALSE, BFALSE);
					}
				if (BIGNUMP(BgL_xz00_4681))
					{	/* Unsafe/bignumber.scm 809 */
						BgL_auxz00_6327 = BgL_xz00_4681;
					}
				else
					{
						obj_t BgL_auxz00_6330;

						BgL_auxz00_6330 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 25975)), BGl_string3198z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4681);
						FAILURE(BgL_auxz00_6330, BFALSE, BFALSE);
					}
				return bgl_bignum_lcm(BgL_auxz00_6327, BgL_auxz00_6334);
			}
		}
	}



/* bignum-expt */
	obj_t BGl_bignumzd2exptzd2zz__bignumz00(obj_t BgL_xz00_82, obj_t BgL_yz00_83)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 818 */
		BGl_bignumzd2exptzd2zz__bignumz00:
			{	/* Unsafe/bignumber.scm 819 */
				bool_t BgL_testz00_6342;

				{	/* Unsafe/bignumber.scm 819 */
					bool_t BgL_res3065z00_3990;

					{	/* Unsafe/bignumber.scm 819 */
						long BgL_arg2070z00_3983;

						{	/* Unsafe/bignumber.scm 819 */
							obj_t BgL_arg1955z00_3986;

							BgL_arg1955z00_3986 = BGL_BIGNUM_U16VECT(BgL_yz00_83);
							BgL_arg2070z00_3983 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_3986);
						}
						BgL_res3065z00_3990 = (BgL_arg2070z00_3983 == ((long) 1));
					}
					BgL_testz00_6342 = BgL_res3065z00_3990;
				}
				if (BgL_testz00_6342)
					{	/* Unsafe/bignumber.scm 819 */
						return bgl_long_to_bignum(((long) 1));
					}
				else
					{	/* Unsafe/bignumber.scm 821 */
						bool_t BgL_testz00_6347;

						{	/* Unsafe/bignumber.scm 821 */
							bool_t BgL_res3067z00_4003;

							{	/* Unsafe/bignumber.scm 821 */
								bool_t BgL__ortest_1831z00_3992;

								BgL__ortest_1831z00_3992 =
									(BGl_bignumzd2lengthzd2zz__bignumz00(BgL_yz00_83) ==
									((long) 1));
								if (BgL__ortest_1831z00_3992)
									{	/* Unsafe/bignumber.scm 821 */
										BgL_res3067z00_4003 = BgL__ortest_1831z00_3992;
									}
								else
									{	/* Unsafe/bignumber.scm 821 */
										unsigned short BgL_arg2079z00_3993;

										{	/* Unsafe/bignumber.scm 821 */
											obj_t BgL_arg1960z00_4002;

											BgL_arg1960z00_4002 = BGL_BIGNUM_U16VECT(BgL_yz00_83);
											BgL_arg2079z00_3993 =
												BGL_U16VREF(BgL_arg1960z00_4002, ((long) 1));
										}
										BgL_res3067z00_4003 =
											BGl_evenzf3zf3zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg2079z00_3993));
							}}
							BgL_testz00_6347 = BgL_res3067z00_4003;
						}
						if (BgL_testz00_6347)
							{	/* Unsafe/bignumber.scm 823 */
								obj_t BgL_arg2396z00_1637;

								obj_t BgL_arg2397z00_1638;

								BgL_arg2396z00_1637 = bgl_bignum_mul(BgL_xz00_82, BgL_xz00_82);
								{	/* Unsafe/bignumber.scm 824 */
									obj_t BgL_arg2398z00_1639;

									BgL_arg2398z00_1639 = bgl_long_to_bignum(((long) 2));
									BgL_arg2397z00_1638 =
										CAR(BGl_bignumzd2divzd2zz__bignumz00(BgL_yz00_83,
											BgL_arg2398z00_1639));
								}
								{
									obj_t BgL_yz00_6360;

									obj_t BgL_xz00_6359;

									BgL_xz00_6359 = BgL_arg2396z00_1637;
									BgL_yz00_6360 = BgL_arg2397z00_1638;
									BgL_yz00_83 = BgL_yz00_6360;
									BgL_xz00_82 = BgL_xz00_6359;
									goto BGl_bignumzd2exptzd2zz__bignumz00;
								}
							}
						else
							{	/* Unsafe/bignumber.scm 826 */
								obj_t BgL_arg2399z00_1640;

								{	/* Unsafe/bignumber.scm 826 */
									obj_t BgL_arg2400z00_1641;

									{	/* Unsafe/bignumber.scm 826 */
										obj_t BgL_arg2401z00_1642;

										BgL_arg2401z00_1642 = bgl_long_to_bignum(((long) 1));
										{	/* Unsafe/bignumber.scm 826 */
											obj_t BgL_res3069z00_4025;

											{	/* Unsafe/bignumber.scm 826 */
												unsigned short BgL_arg2165z00_4013;

												long BgL_arg2166z00_4014;

												{	/* Unsafe/bignumber.scm 826 */
													obj_t BgL_arg1956z00_4018;

													BgL_arg1956z00_4018 = BGL_BIGNUM_U16VECT(BgL_yz00_83);
													BgL_arg2165z00_4013 =
														BGL_U16VREF(BgL_arg1956z00_4018, ((long) 0));
												}
												{	/* Unsafe/bignumber.scm 826 */
													unsigned short BgL_arg2168z00_4016;

													{	/* Unsafe/bignumber.scm 826 */
														obj_t BgL_arg1956z00_4021;

														BgL_arg1956z00_4021 =
															BGL_BIGNUM_U16VECT(BgL_arg2401z00_1642);
														BgL_arg2168z00_4016 =
															BGL_U16VREF(BgL_arg1956z00_4021, ((long) 0));
													}
													BgL_arg2166z00_4014 =
														(((long) 1) - (long) (BgL_arg2168z00_4016));
												}
												BgL_res3069z00_4025 =
													BGl_bignumzd2sum2zd2zz__bignumz00(BgL_yz00_83,
													BgL_arg2401z00_1642, BgL_arg2165z00_4013,
													BINT(BgL_arg2166z00_4014));
											}
											BgL_arg2400z00_1641 = BgL_res3069z00_4025;
									}}
									BgL_arg2399z00_1640 =
										BGl_bignumzd2exptzd2zz__bignumz00(BgL_xz00_82,
										BgL_arg2400z00_1641);
								}
								return bgl_bignum_mul(BgL_xz00_82, BgL_arg2399z00_1640);
							}
					}
			}
		}
	}



/* bignum-integer-length */
	long BGl_bignumzd2integerzd2lengthz00zz__bignumz00(obj_t BgL_xz00_85)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 837 */
			{	/* Unsafe/bignumber.scm 838 */
				obj_t BgL_nz00_1644;

				{	/* Unsafe/bignumber.scm 838 */
					bool_t BgL_testz00_6372;

					{	/* Unsafe/bignumber.scm 838 */
						bool_t BgL_res3071z00_4050;

						{	/* Unsafe/bignumber.scm 838 */
							unsigned short BgL_arg2073z00_4043;

							{	/* Unsafe/bignumber.scm 838 */
								obj_t BgL_arg1956z00_4046;

								BgL_arg1956z00_4046 = BGL_BIGNUM_U16VECT(BgL_xz00_85);
								BgL_arg2073z00_4043 =
									BGL_U16VREF(BgL_arg1956z00_4046, ((long) 0));
							}
							BgL_res3071z00_4050 =
								((long) (BgL_arg2073z00_4043) == ((long) 0));
						}
						BgL_testz00_6372 = BgL_res3071z00_4050;
					}
					if (BgL_testz00_6372)
						{	/* Unsafe/bignumber.scm 838 */
							BgL_nz00_1644 =
								bgl_bignum_sub(bgl_long_to_bignum(((long) -1)), BgL_xz00_85);
						}
					else
						{	/* Unsafe/bignumber.scm 838 */
							BgL_nz00_1644 = BgL_xz00_85;
						}
				}
				{	/* Unsafe/bignumber.scm 838 */
					long BgL_nbzd2digitszd2_1645;

					{	/* Unsafe/bignumber.scm 839 */
						long BgL_arg2410z00_1659;

						{	/* Unsafe/bignumber.scm 839 */
							obj_t BgL_arg1955z00_4054;

							BgL_arg1955z00_4054 = BGL_BIGNUM_U16VECT(BgL_nz00_1644);
							BgL_arg2410z00_1659 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_4054);
						}
						BgL_nbzd2digitszd2_1645 = (BgL_arg2410z00_1659 - ((long) 1));
					}
					{	/* Unsafe/bignumber.scm 839 */

						if ((BgL_nbzd2digitszd2_1645 == ((long) 0)))
							{	/* Unsafe/bignumber.scm 840 */
								return ((long) 0);
							}
						else
							{	/* Unsafe/bignumber.scm 842 */
								unsigned short BgL_g1844z00_1647;

								long BgL_g1845z00_1648;

								{	/* Unsafe/bignumber.scm 842 */
									int BgL_iz00_4061;

									BgL_iz00_4061 = (int) (BgL_nbzd2digitszd2_1645);
									{	/* Unsafe/bignumber.scm 842 */
										obj_t BgL_arg1960z00_4062;

										BgL_arg1960z00_4062 = BGL_BIGNUM_U16VECT(BgL_nz00_1644);
										{	/* Unsafe/bignumber.scm 842 */
											long BgL_auxz00_6386;

											BgL_auxz00_6386 = (long) (BgL_iz00_4061);
											BgL_g1844z00_1647 =
												BGL_U16VREF(BgL_arg1960z00_4062, BgL_auxz00_6386);
								}}}
								BgL_g1845z00_1648 =
									((BgL_nbzd2digitszd2_1645 - ((long) 1)) * ((long) 14));
								{
									obj_t BgL_dz00_4068;

									long BgL_lenz00_4069;

									BgL_dz00_4068 = BINT(BgL_g1844z00_1647);
									BgL_lenz00_4069 = BgL_g1845z00_1648;
								BgL_loopz00_4067:
									if ((((long) 0) < (long) CINT(BgL_dz00_4068)))
										{	/* Unsafe/bignumber.scm 842 */
											long BgL_arg2406z00_4074;

											long BgL_arg2407z00_4075;

											{	/* Unsafe/bignumber.scm 842 */
												long BgL_auxz00_6394;

												BgL_auxz00_6394 = (long) CINT(BgL_dz00_4068);
												BgL_arg2406z00_4074 = (BgL_auxz00_6394 / ((long) 2));
											}
											BgL_arg2407z00_4075 = (BgL_lenz00_4069 + ((long) 1));
											{
												long BgL_lenz00_6400;

												obj_t BgL_dz00_6398;

												BgL_dz00_6398 = BINT(BgL_arg2406z00_4074);
												BgL_lenz00_6400 = BgL_arg2407z00_4075;
												BgL_lenz00_4069 = BgL_lenz00_6400;
												BgL_dz00_4068 = BgL_dz00_6398;
												goto BgL_loopz00_4067;
											}
										}
									else
										{	/* Unsafe/bignumber.scm 842 */
											return BgL_lenz00_4069;
										}
								}
							}
					}
				}
			}
		}
	}



/* c-bignum->string */
	BGL_EXPORTED_DEF obj_t bgl_bignum_to_string(obj_t BgL_xz00_86,
		long BgL_radixz00_87)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 852 */
			{
				obj_t BgL_signz00_1668;

				obj_t BgL_nz00_1669;

				{	/* Unsafe/bignumber.scm 865 */
					bool_t BgL_testz00_6402;

					{	/* Unsafe/bignumber.scm 865 */
						bool_t BgL_res3072z00_4110;

						{	/* Unsafe/bignumber.scm 865 */
							unsigned short BgL_arg2073z00_4103;

							{	/* Unsafe/bignumber.scm 865 */
								obj_t BgL_arg1956z00_4106;

								BgL_arg1956z00_4106 = BGL_BIGNUM_U16VECT(BgL_xz00_86);
								BgL_arg2073z00_4103 =
									BGL_U16VREF(BgL_arg1956z00_4106, ((long) 0));
							}
							BgL_res3072z00_4110 =
								((long) (BgL_arg2073z00_4103) == ((long) 0));
						}
						BgL_testz00_6402 = BgL_res3072z00_4110;
					}
					if (BgL_testz00_6402)
						{	/* Unsafe/bignumber.scm 865 */
							BgL_signz00_1668 = BCHAR(((unsigned char) '-'));
							BgL_nz00_1669 =
								bgl_bignum_sub(BGl_bignumzd2za7eroz75zz__bignumz00,
								BgL_xz00_86);
						BgL_zc3anonymousza32416ze3z83_1670:
							{	/* Unsafe/bignumber.scm 858 */
								obj_t BgL_digitsz00_1671;

								{	/* Unsafe/bignumber.scm 859 */
									obj_t BgL_l1876z00_1673;

									{	/* Unsafe/bignumber.scm 860 */
										bool_t BgL_testz00_6407;

										{	/* Unsafe/bignumber.scm 860 */
											bool_t BgL_res3073z00_4122;

											{	/* Unsafe/bignumber.scm 860 */
												long BgL_arg2070z00_4115;

												{	/* Unsafe/bignumber.scm 860 */
													obj_t BgL_arg1955z00_4118;

													BgL_arg1955z00_4118 =
														BGL_BIGNUM_U16VECT(BgL_nz00_1669);
													BgL_arg2070z00_4115 =
														BGL_HVECTOR_LENGTH(BgL_arg1955z00_4118);
												}
												BgL_res3073z00_4122 =
													(BgL_arg2070z00_4115 == ((long) 1));
											}
											BgL_testz00_6407 = BgL_res3073z00_4122;
										}
										if (BgL_testz00_6407)
											{	/* Unsafe/bignumber.scm 860 */
												BgL_l1876z00_1673 = BGl_list3199z00zz__bignumz00;
											}
										else
											{	/* Unsafe/bignumber.scm 860 */
												BgL_l1876z00_1673 =
													bgl_reverse
													(BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00
													(BgL_nz00_1669, (BgL_radixz00_87 - ((long) 1))));
									}}
									if (NULLP(BgL_l1876z00_1673))
										{	/* Unsafe/bignumber.scm 859 */
											BgL_digitsz00_1671 = BNIL;
										}
									else
										{	/* Unsafe/bignumber.scm 859 */
											obj_t BgL_head1878z00_1675;

											{	/* Unsafe/bignumber.scm 859 */
												unsigned char BgL_arg2425z00_1688;

												{	/* Unsafe/bignumber.scm 859 */
													long BgL_auxz00_6416;

													{	/* Unsafe/bignumber.scm 859 */
														obj_t BgL_pairz00_4126;

														BgL_pairz00_4126 = BgL_l1876z00_1673;
														BgL_auxz00_6416 =
															(long) CINT(CAR(BgL_pairz00_4126));
													}
													BgL_arg2425z00_1688 =
														STRING_REF(BGl_string3200z00zz__bignumz00,
														BgL_auxz00_6416);
												}
												BgL_head1878z00_1675 =
													MAKE_PAIR(BCHAR(BgL_arg2425z00_1688), BNIL);
											}
											{	/* Unsafe/bignumber.scm 859 */
												obj_t BgL_g1881z00_1676;

												BgL_g1881z00_1676 = CDR(BgL_l1876z00_1673);
												{
													obj_t BgL_l1876z00_4134;

													obj_t BgL_tail1879z00_4135;

													BgL_l1876z00_4134 = BgL_g1881z00_1676;
													BgL_tail1879z00_4135 = BgL_head1878z00_1675;
												BgL_zc3anonymousza32419ze3z83_4133:
													if (NULLP(BgL_l1876z00_4134))
														{	/* Unsafe/bignumber.scm 859 */
															BgL_digitsz00_1671 = BgL_head1878z00_1675;
														}
													else
														{	/* Unsafe/bignumber.scm 859 */
															obj_t BgL_newtail1880z00_4143;

															{	/* Unsafe/bignumber.scm 859 */
																unsigned char BgL_arg2422z00_4144;

																{	/* Unsafe/bignumber.scm 859 */
																	long BgL_auxz00_6425;

																	{	/* Unsafe/bignumber.scm 859 */
																		obj_t BgL_pairz00_4149;

																		BgL_pairz00_4149 = BgL_l1876z00_4134;
																		BgL_auxz00_6425 =
																			(long) CINT(CAR(BgL_pairz00_4149));
																	}
																	BgL_arg2422z00_4144 =
																		STRING_REF(BGl_string3200z00zz__bignumz00,
																		BgL_auxz00_6425);
																}
																BgL_newtail1880z00_4143 =
																	MAKE_PAIR(BCHAR(BgL_arg2422z00_4144), BNIL);
															}
															SET_CDR(BgL_tail1879z00_4135,
																BgL_newtail1880z00_4143);
															{
																obj_t BgL_tail1879z00_6434;

																obj_t BgL_l1876z00_6432;

																BgL_l1876z00_6432 = CDR(BgL_l1876z00_4134);
																BgL_tail1879z00_6434 = BgL_newtail1880z00_4143;
																BgL_tail1879z00_4135 = BgL_tail1879z00_6434;
																BgL_l1876z00_4134 = BgL_l1876z00_6432;
																goto BgL_zc3anonymousza32419ze3z83_4133;
															}
														}
												}
											}
										}
								}
								{	/* Unsafe/bignumber.scm 863 */
									obj_t BgL_arg2417z00_1672;

									if (CBOOL(BgL_signz00_1668))
										{	/* Unsafe/bignumber.scm 863 */
											BgL_arg2417z00_1672 =
												MAKE_PAIR(BgL_signz00_1668, BgL_digitsz00_1671);
										}
									else
										{	/* Unsafe/bignumber.scm 863 */
											BgL_arg2417z00_1672 = BgL_digitsz00_1671;
										}
									return
										BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
										(BgL_arg2417z00_1672);
								}
							}
						}
					else
						{
							obj_t BgL_nz00_6442;

							obj_t BgL_signz00_6441;

							BgL_signz00_6441 = BFALSE;
							BgL_nz00_6442 = BgL_xz00_86;
							BgL_nz00_1669 = BgL_nz00_6442;
							BgL_signz00_1668 = BgL_signz00_6441;
							goto BgL_zc3anonymousza32416ze3z83_1670;
						}
				}
			}
		}
	}



/* _c-bignum->string */
	obj_t BGl__czd2bignumzd2ze3stringze3zz__bignumz00(obj_t BgL_envz00_4683,
		obj_t BgL_xz00_4684, obj_t BgL_radixz00_4685)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 852 */
			{	/* Unsafe/bignumber.scm 855 */
				long BgL_auxz00_6450;

				obj_t BgL_auxz00_6443;

				{	/* Unsafe/bignumber.scm 855 */
					obj_t BgL_auxz00_6451;

					if (INTEGERP(BgL_radixz00_4685))
						{	/* Unsafe/bignumber.scm 855 */
							BgL_auxz00_6451 = BgL_radixz00_4685;
						}
					else
						{
							obj_t BgL_auxz00_6454;

							BgL_auxz00_6454 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 27724)), BGl_string3201z00zz__bignumz00,
								BGl_string3173z00zz__bignumz00, BgL_radixz00_4685);
							FAILURE(BgL_auxz00_6454, BFALSE, BFALSE);
						}
					BgL_auxz00_6450 = (long) CINT(BgL_auxz00_6451);
				}
				if (BIGNUMP(BgL_xz00_4684))
					{	/* Unsafe/bignumber.scm 855 */
						BgL_auxz00_6443 = BgL_xz00_4684;
					}
				else
					{
						obj_t BgL_auxz00_6446;

						BgL_auxz00_6446 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 27724)), BGl_string3201z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_xz00_4684);
						FAILURE(BgL_auxz00_6446, BFALSE, BFALSE);
					}
				return bgl_bignum_to_string(BgL_auxz00_6443, BgL_auxz00_6450);
			}
		}
	}



/* $string->bignum */
	BGL_EXPORTED_DEF obj_t bgl_string_to_bignum(char *BgL_strz00_88,
		int BgL_radixz00_89)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 869 */
			{
				long BgL_iz00_1760;

				obj_t BgL_radz00_1749;

				long BgL_iz00_1750;

				obj_t BgL_radz00_1727;

				obj_t BgL_signz00_1728;

				long BgL_iz00_1729;

				unsigned char BgL_cz00_1700;

				obj_t BgL_radz00_1701;

				BgL_iz00_1760 = ((long) 0);
				{	/* Unsafe/bignumber.scm 909 */
					obj_t BgL_g1849z00_1762;

					if (
						((BgL_iz00_1760 + ((long) 3)) <=
							STRING_LENGTH(string_to_bstring(BgL_strz00_88))))
						{	/* Unsafe/bignumber.scm 909 */
							if (
								(STRING_REF(string_to_bstring(BgL_strz00_88),
										BgL_iz00_1760) == ((unsigned char) '#')))
								{	/* Unsafe/bignumber.scm 910 */
									BgL_g1849z00_1762 =
										BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BCHAR(tolower
											(STRING_REF(string_to_bstring(BgL_strz00_88),
													(BgL_iz00_1760 + ((long) 1))))),
										BGl_list3203z00zz__bignumz00);
								}
							else
								{	/* Unsafe/bignumber.scm 910 */
									BgL_g1849z00_1762 = BFALSE;
								}
						}
					else
						{	/* Unsafe/bignumber.scm 909 */
							BgL_g1849z00_1762 = BFALSE;
						}
					if (CBOOL(BgL_g1849z00_1762))
						{	/* Unsafe/bignumber.scm 909 */
							BgL_radz00_1749 = CDR(BgL_g1849z00_1762);
							BgL_iz00_1750 = (BgL_iz00_1760 + ((long) 2));
						BgL_zc3anonymousza32470ze3z83_1751:
							{	/* Unsafe/bignumber.scm 902 */
								bool_t BgL_testz00_6477;

								if (
									((BgL_iz00_1750 + ((long) 2)) <=
										STRING_LENGTH(string_to_bstring(BgL_strz00_88))))
									{	/* Unsafe/bignumber.scm 902 */
										BgL_testz00_6477 =
											CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
												(STRING_REF(string_to_bstring(BgL_strz00_88),
														BgL_iz00_1750)), BGl_list3202z00zz__bignumz00));
									}
								else
									{	/* Unsafe/bignumber.scm 902 */
										BgL_testz00_6477 = ((bool_t) 0);
									}
								if (BgL_testz00_6477)
									{	/* Unsafe/bignumber.scm 904 */
										unsigned char BgL_arg2472z00_1753;

										long BgL_arg2476z00_1754;

										BgL_arg2472z00_1753 =
											STRING_REF(string_to_bstring(BgL_strz00_88),
											BgL_iz00_1750);
										BgL_arg2476z00_1754 = (BgL_iz00_1750 + ((long) 1));
										BgL_radz00_1727 = BgL_radz00_1749;
										BgL_signz00_1728 = BCHAR(BgL_arg2472z00_1753);
										BgL_iz00_1729 = BgL_arg2476z00_1754;
									BgL_zc3anonymousza32454ze3z83_1730:
										if (
											((BgL_iz00_1729 + ((long) 1)) <=
												STRING_LENGTH(string_to_bstring(BgL_strz00_88))))
											{
												long BgL_iz00_1734;

												obj_t BgL_digitsz00_1735;

												BgL_iz00_1734 = BgL_iz00_1729;
												BgL_digitsz00_1735 = BNIL;
											BgL_zc3anonymousza32456ze3z83_1736:
												if (
													(BgL_iz00_1734 <
														STRING_LENGTH(string_to_bstring(BgL_strz00_88))))
													{	/* Unsafe/bignumber.scm 891 */
														obj_t BgL_dz00_1738;

														BgL_cz00_1700 =
															STRING_REF(string_to_bstring(BgL_strz00_88),
															BgL_iz00_1734);
														BgL_radz00_1701 = BgL_radz00_1727;
														{	/* Unsafe/bignumber.scm 878 */
															bool_t BgL_testz00_6500;

															if ((BgL_cz00_1700 >= ((unsigned char) '0')))
																{	/* Unsafe/bignumber.scm 878 */
																	BgL_testz00_6500 =
																		(BgL_cz00_1700 <= ((unsigned char) '9'));
																}
															else
																{	/* Unsafe/bignumber.scm 878 */
																	BgL_testz00_6500 = ((bool_t) 0);
																}
															if (BgL_testz00_6500)
																{	/* Unsafe/bignumber.scm 879 */
																	long BgL_dz00_4199;

																	BgL_dz00_4199 =
																		((BgL_cz00_1700) - ((long) 48));
																	if (
																		(BgL_dz00_4199 <
																			(long) CINT(BgL_radz00_1701)))
																		{	/* Unsafe/bignumber.scm 879 */
																			BgL_dz00_1738 = BINT(BgL_dz00_4199);
																		}
																	else
																		{	/* Unsafe/bignumber.scm 879 */
																			BgL_dz00_1738 = BFALSE;
																		}
																}
															else
																{	/* Unsafe/bignumber.scm 880 */
																	bool_t BgL_testz00_6510;

																	if ((BgL_cz00_1700 >= ((unsigned char) 'a')))
																		{	/* Unsafe/bignumber.scm 880 */
																			BgL_testz00_6510 =
																				(BgL_cz00_1700 <=
																				((unsigned char) 'z'));
																		}
																	else
																		{	/* Unsafe/bignumber.scm 880 */
																			BgL_testz00_6510 = ((bool_t) 0);
																		}
																	if (BgL_testz00_6510)
																		{	/* Unsafe/bignumber.scm 881 */
																			long BgL_dz00_4212;

																			BgL_dz00_4212 =
																				(((long) 10) +
																				((BgL_cz00_1700) - ((long) 97)));
																			if (
																				(BgL_dz00_4212 <
																					(long) CINT(BgL_radz00_1701)))
																				{	/* Unsafe/bignumber.scm 881 */
																					BgL_dz00_1738 = BINT(BgL_dz00_4212);
																				}
																			else
																				{	/* Unsafe/bignumber.scm 881 */
																					BgL_dz00_1738 = BFALSE;
																				}
																		}
																	else
																		{	/* Unsafe/bignumber.scm 882 */
																			bool_t BgL_testz00_6521;

																			if (
																				(BgL_cz00_1700 >=
																					((unsigned char) 'A')))
																				{	/* Unsafe/bignumber.scm 882 */
																					BgL_testz00_6521 =
																						(BgL_cz00_1700 <=
																						((unsigned char) 'Z'));
																				}
																			else
																				{	/* Unsafe/bignumber.scm 882 */
																					BgL_testz00_6521 = ((bool_t) 0);
																				}
																			if (BgL_testz00_6521)
																				{	/* Unsafe/bignumber.scm 883 */
																					long BgL_dz00_4225;

																					BgL_dz00_4225 =
																						(((long) 10) +
																						((BgL_cz00_1700) - ((long) 65)));
																					if (
																						(BgL_dz00_4225 <
																							(long) CINT(BgL_radz00_1701)))
																						{	/* Unsafe/bignumber.scm 883 */
																							BgL_dz00_1738 =
																								BINT(BgL_dz00_4225);
																						}
																					else
																						{	/* Unsafe/bignumber.scm 883 */
																							BgL_dz00_1738 = BFALSE;
																						}
																				}
																			else
																				{	/* Unsafe/bignumber.scm 882 */
																					BgL_dz00_1738 = BFALSE;
																				}
																		}
																}
														}
														if (CBOOL(BgL_dz00_1738))
															{	/* Unsafe/bignumber.scm 893 */
																long BgL_arg2458z00_1739;

																obj_t BgL_arg2459z00_1740;

																BgL_arg2458z00_1739 =
																	(BgL_iz00_1734 + ((long) 1));
																BgL_arg2459z00_1740 =
																	MAKE_PAIR(BgL_dz00_1738, BgL_digitsz00_1735);
																{
																	obj_t BgL_digitsz00_6539;

																	long BgL_iz00_6538;

																	BgL_iz00_6538 = BgL_arg2458z00_1739;
																	BgL_digitsz00_6539 = BgL_arg2459z00_1740;
																	BgL_digitsz00_1735 = BgL_digitsz00_6539;
																	BgL_iz00_1734 = BgL_iz00_6538;
																	goto BgL_zc3anonymousza32456ze3z83_1736;
																}
															}
														else
															{	/* Unsafe/bignumber.scm 892 */
																return BFALSE;
															}
													}
												else
													{	/* Unsafe/bignumber.scm 895 */
														obj_t BgL_nz00_1742;

														BgL_nz00_1742 =
															BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00
															(BgL_digitsz00_1735,
															((long) CINT(BgL_radz00_1727) - ((long) 1)));
														{	/* Unsafe/bignumber.scm 896 */
															bool_t BgL_testz00_6543;

															if (CBOOL(BgL_signz00_1728))
																{	/* Unsafe/bignumber.scm 896 */
																	BgL_testz00_6543 =
																		(CCHAR(BgL_signz00_1728) ==
																		((unsigned char) '-'));
																}
															else
																{	/* Unsafe/bignumber.scm 896 */
																	BgL_testz00_6543 = ((bool_t) 0);
																}
															if (BgL_testz00_6543)
																{	/* Unsafe/bignumber.scm 896 */
																	return
																		bgl_bignum_sub
																		(BGl_bignumzd2za7eroz75zz__bignumz00,
																		BgL_nz00_1742);
																}
															else
																{	/* Unsafe/bignumber.scm 896 */
																	return BgL_nz00_1742;
																}
														}
													}
											}
										else
											{	/* Unsafe/bignumber.scm 888 */
												return BFALSE;
											}
									}
								else
									{
										long BgL_iz00_6552;

										obj_t BgL_signz00_6551;

										obj_t BgL_radz00_6550;

										BgL_radz00_6550 = BgL_radz00_1749;
										BgL_signz00_6551 = BFALSE;
										BgL_iz00_6552 = BgL_iz00_1750;
										BgL_iz00_1729 = BgL_iz00_6552;
										BgL_signz00_1728 = BgL_signz00_6551;
										BgL_radz00_1727 = BgL_radz00_6550;
										goto BgL_zc3anonymousza32454ze3z83_1730;
									}
							}
						}
					else
						{
							long BgL_iz00_6557;

							obj_t BgL_radz00_6555;

							BgL_radz00_6555 = BINT(BgL_radixz00_89);
							BgL_iz00_6557 = BgL_iz00_1760;
							BgL_iz00_1750 = BgL_iz00_6557;
							BgL_radz00_1749 = BgL_radz00_6555;
							goto BgL_zc3anonymousza32470ze3z83_1751;
						}
				}
			}
		}
	}



/* _$string->bignum */
	obj_t BGl__z42stringzd2ze3bignumz73zz__bignumz00(obj_t BgL_envz00_4686,
		obj_t BgL_strz00_4687, obj_t BgL_radixz00_4688)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 869 */
			{	/* Unsafe/bignumber.scm 874 */
				int BgL_auxz00_6567;

				char *BgL_auxz00_6558;

				{	/* Unsafe/bignumber.scm 874 */
					obj_t BgL_auxz00_6568;

					if (INTEGERP(BgL_radixz00_4688))
						{	/* Unsafe/bignumber.scm 874 */
							BgL_auxz00_6568 = BgL_radixz00_4688;
						}
					else
						{
							obj_t BgL_auxz00_6571;

							BgL_auxz00_6571 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 28285)), BGl_string3208z00zz__bignumz00,
								BGl_string3209z00zz__bignumz00, BgL_radixz00_4688);
							FAILURE(BgL_auxz00_6571, BFALSE, BFALSE);
						}
					BgL_auxz00_6567 = CINT(BgL_auxz00_6568);
				}
				{	/* Unsafe/bignumber.scm 874 */
					obj_t BgL_auxz00_6559;

					if (STRINGP(BgL_strz00_4687))
						{	/* Unsafe/bignumber.scm 874 */
							BgL_auxz00_6559 = BgL_strz00_4687;
						}
					else
						{
							obj_t BgL_auxz00_6562;

							BgL_auxz00_6562 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 28285)), BGl_string3208z00zz__bignumz00,
								BGl_string3172z00zz__bignumz00, BgL_strz00_4687);
							FAILURE(BgL_auxz00_6562, BFALSE, BFALSE);
						}
					BgL_auxz00_6558 = BSTRING_TO_STRING(BgL_auxz00_6559);
				}
				return bgl_string_to_bignum(BgL_auxz00_6558, BgL_auxz00_6567);
			}
		}
	}



/* bignum->fixnum-list */
	obj_t BGl_bignumzd2ze3fixnumzd2listze3zz__bignumz00(obj_t BgL_xz00_90,
		long BgL_radixzd2minuszd21z00_91)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 927 */
			{	/* Unsafe/bignumber.scm 928 */
				obj_t BgL_bigzd2radixzd2_1780;

				{	/* Unsafe/bignumber.scm 930 */
					obj_t BgL_arg2504z00_1808;

					obj_t BgL_arg2505z00_1809;

					BgL_arg2504z00_1808 = bgl_long_to_bignum(BgL_radixzd2minuszd21z00_91);
					BgL_arg2505z00_1809 = bgl_long_to_bignum(((long) 1));
					{	/* Unsafe/bignumber.scm 929 */
						obj_t BgL_res3074z00_4287;

						{	/* Unsafe/bignumber.scm 929 */
							unsigned short BgL_arg2163z00_4279;

							unsigned short BgL_arg2164z00_4280;

							{	/* Unsafe/bignumber.scm 929 */
								obj_t BgL_arg1956z00_4282;

								BgL_arg1956z00_4282 = BGL_BIGNUM_U16VECT(BgL_arg2504z00_1808);
								BgL_arg2163z00_4279 =
									BGL_U16VREF(BgL_arg1956z00_4282, ((long) 0));
							}
							{	/* Unsafe/bignumber.scm 929 */
								obj_t BgL_arg1956z00_4285;

								BgL_arg1956z00_4285 = BGL_BIGNUM_U16VECT(BgL_arg2505z00_1809);
								BgL_arg2164z00_4280 =
									BGL_U16VREF(BgL_arg1956z00_4285, ((long) 0));
							}
							BgL_res3074z00_4287 =
								BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg2504z00_1808,
								BgL_arg2505z00_1809, BgL_arg2163z00_4279,
								BINT(BgL_arg2164z00_4280));
						}
						BgL_bigzd2radixzd2_1780 = BgL_res3074z00_4287;
				}}
				{	/* Unsafe/bignumber.scm 928 */
					obj_t BgL_squarezd2serieszd2_1781;

					{	/* Unsafe/bignumber.scm 933 */
						obj_t BgL_g1851z00_1798;

						{	/* Unsafe/bignumber.scm 934 */
							obj_t BgL_list2503z00_1807;

							BgL_list2503z00_1807 = MAKE_PAIR(BgL_bigzd2radixzd2_1780, BNIL);
							BgL_g1851z00_1798 = BgL_list2503z00_1807;
						}
						{
							obj_t BgL_squarez00_4291;

							obj_t BgL_squarezd2listzd2_4292;

							BgL_squarez00_4291 = BgL_bigzd2radixzd2_1780;
							BgL_squarezd2listzd2_4292 = BgL_g1851z00_1798;
						BgL_loopz00_4290:
							{	/* Unsafe/bignumber.scm 933 */
								obj_t BgL_newzd2squarezd2_4296;

								BgL_newzd2squarezd2_4296 =
									bgl_bignum_mul(BgL_squarez00_4291, BgL_squarez00_4291);
								if (BGl_z42zc3bxz81zz__bignumz00(BgL_xz00_90,
										BgL_newzd2squarezd2_4296))
									{	/* Unsafe/bignumber.scm 933 */
										BgL_squarezd2serieszd2_1781 = BgL_squarezd2listzd2_4292;
									}
								else
									{	/* Unsafe/bignumber.scm 933 */
										obj_t BgL_arg2502z00_4298;

										BgL_arg2502z00_4298 =
											MAKE_PAIR(BgL_newzd2squarezd2_4296,
											BgL_squarezd2listzd2_4292);
										{
											obj_t BgL_squarezd2listzd2_6591;

											obj_t BgL_squarez00_6590;

											BgL_squarez00_6590 = BgL_newzd2squarezd2_4296;
											BgL_squarezd2listzd2_6591 = BgL_arg2502z00_4298;
											BgL_squarezd2listzd2_4292 = BgL_squarezd2listzd2_6591;
											BgL_squarez00_4291 = BgL_squarez00_6590;
											goto BgL_loopz00_4290;
										}
									}
							}
						}
					}
					{	/* Unsafe/bignumber.scm 932 */

						return
							BGl_convertz00zz__bignumz00(BgL_xz00_90,
							BgL_squarezd2serieszd2_1781, BNIL);
					}
				}
			}
		}
	}



/* convert */
	obj_t BGl_convertz00zz__bignumz00(obj_t BgL_nz00_1783,
		obj_t BgL_squarezd2serieszd2_1784, obj_t BgL_tailz00_1785)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 957 */
		BGl_convertz00zz__bignumz00:
			if (PAIRP(BgL_squarezd2serieszd2_1784))
				{	/* Unsafe/bignumber.scm 944 */
					obj_t BgL_qrz00_1788;

					BgL_qrz00_1788 =
						BGl_bignumzd2divzd2zz__bignumz00(BgL_nz00_1783,
						CAR(BgL_squarezd2serieszd2_1784));
					{	/* Unsafe/bignumber.scm 944 */
						obj_t BgL_qz00_1789;

						BgL_qz00_1789 = CAR(BgL_qrz00_1788);
						{	/* Unsafe/bignumber.scm 945 */
							obj_t BgL_rz00_1790;

							BgL_rz00_1790 = CDR(BgL_qrz00_1788);
							{	/* Unsafe/bignumber.scm 946 */
								obj_t BgL_newzd2squarezd2seriesz00_1791;

								BgL_newzd2squarezd2seriesz00_1791 =
									CDR(BgL_squarezd2serieszd2_1784);
								{	/* Unsafe/bignumber.scm 947 */

									{
										obj_t BgL_tailz00_6602;

										obj_t BgL_squarezd2serieszd2_6601;

										obj_t BgL_nz00_6600;

										BgL_nz00_6600 = BgL_rz00_1790;
										BgL_squarezd2serieszd2_6601 =
											BgL_newzd2squarezd2seriesz00_1791;
										BgL_tailz00_6602 =
											BGl_convertz00zz__bignumz00(BgL_qz00_1789,
											BgL_newzd2squarezd2seriesz00_1791, BgL_tailz00_1785);
										BgL_tailz00_1785 = BgL_tailz00_6602;
										BgL_squarezd2serieszd2_1784 = BgL_squarezd2serieszd2_6601;
										BgL_nz00_1783 = BgL_nz00_6600;
										goto BGl_convertz00zz__bignumz00;
									}
								}
							}
						}
					}
				}
			else
				{	/* Unsafe/bignumber.scm 953 */
					long BgL_dz00_1794;

					BgL_dz00_1794 = bgl_bignum_to_long(BgL_nz00_1783);
					{	/* Unsafe/bignumber.scm 954 */
						bool_t BgL_testz00_6605;

						if (NULLP(BgL_tailz00_1785))
							{	/* Unsafe/bignumber.scm 954 */
								BgL_testz00_6605 = (BgL_dz00_1794 == ((long) 0));
							}
						else
							{	/* Unsafe/bignumber.scm 954 */
								BgL_testz00_6605 = ((bool_t) 0);
							}
						if (BgL_testz00_6605)
							{	/* Unsafe/bignumber.scm 954 */
								return BgL_tailz00_1785;
							}
						else
							{	/* Unsafe/bignumber.scm 954 */
								return MAKE_PAIR(BINT(BgL_dz00_1794), BgL_tailz00_1785);
							}
					}
				}
		}
	}



/* fixnum-list->bignum */
	obj_t BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00(obj_t
		BgL_digitzd2listzd2_92, long BgL_radixzd2minuszd21z00_93)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 961 */
			{	/* Unsafe/bignumber.scm 965 */
				obj_t BgL_bigzd2radixzd2_1810;

				{	/* Unsafe/bignumber.scm 967 */
					obj_t BgL_arg2513z00_1823;

					obj_t BgL_arg2514z00_1824;

					BgL_arg2513z00_1823 = bgl_long_to_bignum(BgL_radixzd2minuszd21z00_93);
					BgL_arg2514z00_1824 = bgl_long_to_bignum(((long) 1));
					{	/* Unsafe/bignumber.scm 966 */
						obj_t BgL_res3076z00_4326;

						{	/* Unsafe/bignumber.scm 966 */
							unsigned short BgL_arg2163z00_4318;

							unsigned short BgL_arg2164z00_4319;

							{	/* Unsafe/bignumber.scm 966 */
								obj_t BgL_arg1956z00_4321;

								BgL_arg1956z00_4321 = BGL_BIGNUM_U16VECT(BgL_arg2513z00_1823);
								BgL_arg2163z00_4318 =
									BGL_U16VREF(BgL_arg1956z00_4321, ((long) 0));
							}
							{	/* Unsafe/bignumber.scm 966 */
								obj_t BgL_arg1956z00_4324;

								BgL_arg1956z00_4324 = BGL_BIGNUM_U16VECT(BgL_arg2514z00_1824);
								BgL_arg2164z00_4319 =
									BGL_U16VREF(BgL_arg1956z00_4324, ((long) 0));
							}
							BgL_res3076z00_4326 =
								BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg2513z00_1823,
								BgL_arg2514z00_1824, BgL_arg2163z00_4318,
								BINT(BgL_arg2164z00_4319));
						}
						BgL_bigzd2radixzd2_1810 = BgL_res3076z00_4326;
				}}
				{	/* Unsafe/bignumber.scm 969 */
					obj_t BgL_g1852z00_1811;

					BgL_g1852z00_1811 = bgl_reverse(BgL_digitzd2listzd2_92);
					{
						obj_t BgL_nz00_4328;

						obj_t BgL_lstz00_4329;

						BgL_nz00_4328 = BGl_bignumzd2za7eroz75zz__bignumz00;
						BgL_lstz00_4329 = BgL_g1852z00_1811;
					BgL_loopz00_4327:
						if (PAIRP(BgL_lstz00_4329))
							{	/* Unsafe/bignumber.scm 969 */
								obj_t BgL_arg2508z00_4337;

								obj_t BgL_arg2509z00_4338;

								{	/* Unsafe/bignumber.scm 969 */
									obj_t BgL_arg2510z00_4339;

									obj_t BgL_arg2511z00_4340;

									BgL_arg2510z00_4339 =
										bgl_bignum_mul(BgL_nz00_4328, BgL_bigzd2radixzd2_1810);
									{	/* Unsafe/bignumber.scm 969 */
										obj_t BgL_arg2512z00_4341;

										BgL_arg2512z00_4341 = CAR(BgL_lstz00_4329);
										BgL_arg2511z00_4340 =
											bgl_long_to_bignum((long) CINT(BgL_arg2512z00_4341));
									}
									{	/* Unsafe/bignumber.scm 969 */
										obj_t BgL_res3077z00_4348;

										{	/* Unsafe/bignumber.scm 969 */
											unsigned short BgL_arg2163z00_4346;

											unsigned short BgL_arg2164z00_4347;

											BgL_arg2163z00_4346 =
												BGl_bignumzd2signzd2zz__bignumz00(BgL_arg2510z00_4339);
											BgL_arg2164z00_4347 =
												BGl_bignumzd2signzd2zz__bignumz00(BgL_arg2511z00_4340);
											BgL_res3077z00_4348 =
												BGl_bignumzd2sum2zd2zz__bignumz00(BgL_arg2510z00_4339,
												BgL_arg2511z00_4340, BgL_arg2163z00_4346,
												BINT(BgL_arg2164z00_4347));
										}
										BgL_arg2508z00_4337 = BgL_res3077z00_4348;
								}}
								BgL_arg2509z00_4338 = CDR(BgL_lstz00_4329);
								{
									obj_t BgL_lstz00_6632;

									obj_t BgL_nz00_6631;

									BgL_nz00_6631 = BgL_arg2508z00_4337;
									BgL_lstz00_6632 = BgL_arg2509z00_4338;
									BgL_lstz00_4329 = BgL_lstz00_6632;
									BgL_nz00_4328 = BgL_nz00_6631;
									goto BgL_loopz00_4327;
								}
							}
						else
							{	/* Unsafe/bignumber.scm 969 */
								return BgL_nz00_4328;
							}
					}
				}
			}
		}
	}



/* $bignum->fixnum */
	BGL_EXPORTED_DEF long bgl_bignum_to_long(obj_t BgL_xz00_94)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 976 */
			{	/* Unsafe/bignumber.scm 977 */
				long BgL_lenxzd2minuszd21z00_1825;

				{	/* Unsafe/bignumber.scm 977 */
					long BgL_arg2528z00_1845;

					{	/* Unsafe/bignumber.scm 977 */
						obj_t BgL_arg1955z00_4387;

						BgL_arg1955z00_4387 = BGL_BIGNUM_U16VECT(BgL_xz00_94);
						BgL_arg2528z00_1845 = BGL_HVECTOR_LENGTH(BgL_arg1955z00_4387);
					}
					BgL_lenxzd2minuszd21z00_1825 = (BgL_arg2528z00_1845 - ((long) 1));
				}
				{
					long BgL_nz00_1827;

					long BgL_iz00_1828;

					{	/* Unsafe/bignumber.scm 978 */
						obj_t BgL_auxz00_6636;

						BgL_nz00_1827 = ((long) 0);
						BgL_iz00_1828 = BgL_lenxzd2minuszd21z00_1825;
					BgL_zc3anonymousza32515ze3z83_1829:
						if ((((long) 0) < BgL_iz00_1828))
							{	/* Unsafe/bignumber.scm 979 */
								if (
									(BgL_nz00_1827 <
										BGl_bignumzd2minzd2fixnumzd2divzd2radixz00zz__bignumz00()))
									{	/* Unsafe/bignumber.scm 980 */
										BgL_auxz00_6636 = BFALSE;
									}
								else
									{	/* Unsafe/bignumber.scm 982 */
										long BgL_mz00_1832;

										unsigned short BgL_dz00_1833;

										BgL_mz00_1832 =
											(BgL_nz00_1827 * (((long) 1) << (int) (((long) 14))));
										{	/* Unsafe/bignumber.scm 983 */
											int BgL_iz00_4400;

											BgL_iz00_4400 = (int) (BgL_iz00_1828);
											{	/* Unsafe/bignumber.scm 983 */
												obj_t BgL_arg1960z00_4401;

												BgL_arg1960z00_4401 = BGL_BIGNUM_U16VECT(BgL_xz00_94);
												{	/* Unsafe/bignumber.scm 983 */
													long BgL_auxz00_6647;

													BgL_auxz00_6647 = (long) (BgL_iz00_4400);
													BgL_dz00_1833 =
														BGL_U16VREF(BgL_arg1960z00_4401, BgL_auxz00_6647);
										}}}
										if (
											(BgL_mz00_1832 <
												((((long) -2) *
														(((long) 1) <<
															(int) (((long) 28)))) + (long) (BgL_dz00_1833))))
											{	/* Unsafe/bignumber.scm 984 */
												BgL_auxz00_6636 = BFALSE;
											}
										else
											{
												long BgL_iz00_6660;

												long BgL_nz00_6657;

												BgL_nz00_6657 =
													(BgL_mz00_1832 - (long) (BgL_dz00_1833));
												BgL_iz00_6660 = (BgL_iz00_1828 - ((long) 1));
												BgL_iz00_1828 = BgL_iz00_6660;
												BgL_nz00_1827 = BgL_nz00_6657;
												goto BgL_zc3anonymousza32515ze3z83_1829;
											}
									}
							}
						else
							{	/* Unsafe/bignumber.scm 988 */
								bool_t BgL_testz00_6662;

								{	/* Unsafe/bignumber.scm 988 */
									bool_t BgL_res3080z00_4424;

									{	/* Unsafe/bignumber.scm 988 */
										unsigned short BgL_arg2073z00_4417;

										{	/* Unsafe/bignumber.scm 988 */
											obj_t BgL_arg1956z00_4420;

											BgL_arg1956z00_4420 = BGL_BIGNUM_U16VECT(BgL_xz00_94);
											BgL_arg2073z00_4417 =
												BGL_U16VREF(BgL_arg1956z00_4420, ((long) 0));
										}
										BgL_res3080z00_4424 =
											((long) (BgL_arg2073z00_4417) == ((long) 0));
									}
									BgL_testz00_6662 = BgL_res3080z00_4424;
								}
								if (BgL_testz00_6662)
									{	/* Unsafe/bignumber.scm 988 */
										BgL_auxz00_6636 = BINT(BgL_nz00_1827);
									}
								else
									{	/* Unsafe/bignumber.scm 988 */
										if (
											(BgL_nz00_1827 ==
												(((long) -2) * (((long) 1) << (int) (((long) 28))))))
											{	/* Unsafe/bignumber.scm 990 */
												BgL_auxz00_6636 = BFALSE;
											}
										else
											{	/* Unsafe/bignumber.scm 990 */
												BgL_auxz00_6636 = BINT((((long) 0) - BgL_nz00_1827));
							}}}
						return (long) CINT(BgL_auxz00_6636);
		}}}}
	}



/* _$bignum->fixnum */
	obj_t BGl__z42bignumzd2ze3fixnumz73zz__bignumz00(obj_t BgL_envz00_4689,
		obj_t BgL_xz00_4690)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 976 */
			{	/* Unsafe/bignumber.scm 977 */
				long BgL_auxz00_6676;

				{	/* Unsafe/bignumber.scm 977 */
					obj_t BgL_auxz00_6677;

					if (BIGNUMP(BgL_xz00_4690))
						{	/* Unsafe/bignumber.scm 977 */
							BgL_auxz00_6677 = BgL_xz00_4690;
						}
					else
						{
							obj_t BgL_auxz00_6680;

							BgL_auxz00_6680 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 31350)), BGl_string3210z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_xz00_4690);
							FAILURE(BgL_auxz00_6680, BFALSE, BFALSE);
						}
					BgL_auxz00_6676 = bgl_bignum_to_long(BgL_auxz00_6677);
				}
				return BINT(BgL_auxz00_6676);
			}
		}
	}



/* $seed-rand */
	BGL_EXPORTED_DEF obj_t bgl_seed_rand(long BgL_seedz00_97)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1036 */
			{	/* Unsafe/bignumber.scm 1037 */
				int BgL_auxz00_6686;

				BgL_auxz00_6686 = (int) (BgL_seedz00_97);
				srand(BgL_auxz00_6686);
			} BUNSPEC;
			return BINT(BgL_seedz00_97);
		}
	}



/* _$seed-rand */
	obj_t BGl__z42seedzd2randz90zz__bignumz00(obj_t BgL_envz00_4691,
		obj_t BgL_seedz00_4692)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1036 */
			{	/* Unsafe/bignumber.scm 1038 */
				long BgL_auxz00_6690;

				{	/* Unsafe/bignumber.scm 1038 */
					obj_t BgL_auxz00_6691;

					if (INTEGERP(BgL_seedz00_4692))
						{	/* Unsafe/bignumber.scm 1038 */
							BgL_auxz00_6691 = BgL_seedz00_4692;
						}
					else
						{
							obj_t BgL_auxz00_6694;

							BgL_auxz00_6694 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 33177)), BGl_string3211z00zz__bignumz00,
								BGl_string3173z00zz__bignumz00, BgL_seedz00_4692);
							FAILURE(BgL_auxz00_6694, BFALSE, BFALSE);
						}
					BgL_auxz00_6690 = (long) CINT(BgL_auxz00_6691);
				}
				return bgl_seed_rand(BgL_auxz00_6690);
			}
		}
	}



/* make-random-u8vector */
	obj_t BGl_makezd2randomzd2u8vectorz00zz__bignumz00(obj_t BgL_lenz00_98)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1043 */
			{
				obj_t BgL_vecz00_1897;

				{	/* Unsafe/bignumber.scm 1051 */
					obj_t BgL_arg2563z00_1894;

					{	/* Llib/srfi4.scm 231 */

						BgL_arg2563z00_1894 =
							BGl_makezd2u8vectorzd2zz__srfi4z00(
							(long) CINT(BgL_lenz00_98), BINT(((long) 0)));
					}
					BgL_vecz00_1897 = BgL_arg2563z00_1894;
					{	/* Unsafe/bignumber.scm 1045 */
						long BgL_g1853z00_1899;

						{	/* Unsafe/bignumber.scm 1045 */
							long BgL_arg2571z00_1907;

							BgL_arg2571z00_1907 = BGL_HVECTOR_LENGTH(BgL_vecz00_1897);
							BgL_g1853z00_1899 = (BgL_arg2571z00_1907 - ((long) 1));
						}
						{
							long BgL_iz00_1901;

							BgL_iz00_1901 = BgL_g1853z00_1899;
						BgL_zc3anonymousza32566ze3z83_1902:
							if ((BgL_iz00_1901 == ((long) -1)))
								{	/* Unsafe/bignumber.scm 1046 */
									return BgL_vecz00_1897;
								}
							else
								{	/* Unsafe/bignumber.scm 1046 */
									{	/* Unsafe/bignumber.scm 1049 */
										long BgL_arg2568z00_1904;

										{	/* Unsafe/bignumber.scm 1049 */
											long BgL_res3081z00_4442;

											{	/* Unsafe/bignumber.scm 1049 */
												int BgL_arg2752z00_4441;

												BgL_arg2752z00_4441 = rand();
												BgL_res3081z00_4442 =
													BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
													(long) (BgL_arg2752z00_4441), ((long) 256));
											}
											BgL_arg2568z00_1904 = BgL_res3081z00_4442;
										}
										{	/* Unsafe/bignumber.scm 1049 */
											unsigned char BgL_auxz00_6710;

											BgL_auxz00_6710 = (unsigned char) (BgL_arg2568z00_1904);
											BGL_U8VSET(BgL_vecz00_1897, BgL_iz00_1901,
												BgL_auxz00_6710);
										} BUNSPEC;
									}
									{
										long BgL_iz00_6713;

										BgL_iz00_6713 = (BgL_iz00_1901 - ((long) 1));
										BgL_iz00_1901 = BgL_iz00_6713;
										goto BgL_zc3anonymousza32566ze3z83_1902;
									}
								}
						}
					}
				}
			}
		}
	}



/* $randbx */
	BGL_EXPORTED_DEF obj_t bgl_rand_bignum(obj_t BgL_rangez00_99)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1056 */
			{	/* Unsafe/bignumber.scm 1057 */
				long BgL_rangezd2bitszd2_1910;

				BgL_rangezd2bitszd2_1910 =
					BGl_bignumzd2integerzd2lengthz00zz__bignumz00(BgL_rangez00_99);
				{	/* Unsafe/bignumber.scm 1057 */
					obj_t BgL_lenz00_1911;

					{	/* Unsafe/bignumber.scm 1058 */
						long BgL_arg2579z00_1925;

						BgL_arg2579z00_1925 = (BgL_rangezd2bitszd2_1910 + ((long) 20));
						BgL_lenz00_1911 =
							BGl_quotientz00zz__r4_numbers_6_5_fixnumz00(BINT
							(BgL_arg2579z00_1925), BINT(((long) 8)));
					}
					{	/* Unsafe/bignumber.scm 1058 */
						obj_t BgL_nz00_1912;

						BgL_nz00_1912 =
							BGl_bignumzd2exptzd2zz__bignumz00(bgl_long_to_bignum(((long)
									256)), bgl_long_to_bignum((long) CINT(BgL_lenz00_1911)));
						{	/* Unsafe/bignumber.scm 1059 */
							obj_t BgL_divisorz00_1913;

							BgL_divisorz00_1913 =
								CAR(BGl_bignumzd2divzd2zz__bignumz00(BgL_nz00_1912,
									BgL_rangez00_99));
							{	/* Unsafe/bignumber.scm 1060 */
								obj_t BgL_limitz00_1914;

								BgL_limitz00_1914 =
									bgl_bignum_mul(BgL_divisorz00_1913, BgL_rangez00_99);
								{	/* Unsafe/bignumber.scm 1061 */

									{

									BgL_zc3anonymousza32573ze3z83_1916:
										{	/* Unsafe/bignumber.scm 1063 */
											obj_t BgL_u8vectz00_1917;

											BgL_u8vectz00_1917 =
												BGl_makezd2randomzd2u8vectorz00zz__bignumz00
												(BgL_lenz00_1911);
											{	/* Unsafe/bignumber.scm 1063 */
												obj_t BgL_xz00_1918;

												BgL_xz00_1918 =
													BGl_fixnumzd2listzd2ze3bignumze3zz__bignumz00
													(BGl_u8vectorzd2ze3listz31zz__srfi4z00
													(BgL_u8vectz00_1917), ((long) 255));
												{	/* Unsafe/bignumber.scm 1064 */

													{	/* Unsafe/bignumber.scm 1065 */
														bool_t BgL_testz00_6730;

														if (BGl_z42zc3bxz81zz__bignumz00(BgL_xz00_1918,
																BgL_limitz00_1914))
															{	/* Unsafe/bignumber.scm 1065 */
																BgL_testz00_6730 = ((bool_t) 0);
															}
														else
															{	/* Unsafe/bignumber.scm 1065 */
																BgL_testz00_6730 = ((bool_t) 1);
															}
														if (BgL_testz00_6730)
															{	/* Unsafe/bignumber.scm 1065 */
																goto BgL_zc3anonymousza32573ze3z83_1916;
															}
														else
															{	/* Unsafe/bignumber.scm 1065 */
																return
																	CAR(BGl_bignumzd2divzd2zz__bignumz00
																	(BgL_xz00_1918, BgL_divisorz00_1913));
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
	}



/* _$randbx */
	obj_t BGl__z42randbxz42zz__bignumz00(obj_t BgL_envz00_4693,
		obj_t BgL_rangez00_4694)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1056 */
			{	/* Unsafe/bignumber.scm 1057 */
				obj_t BgL_auxz00_6735;

				if (BIGNUMP(BgL_rangez00_4694))
					{	/* Unsafe/bignumber.scm 1057 */
						BgL_auxz00_6735 = BgL_rangez00_4694;
					}
				else
					{
						obj_t BgL_auxz00_6738;

						BgL_auxz00_6738 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
							BINT(((long) 33938)), BGl_string3212z00zz__bignumz00,
							BGl_string3180z00zz__bignumz00, BgL_rangez00_4694);
						FAILURE(BgL_auxz00_6738, BFALSE, BFALSE);
					}
				return bgl_rand_bignum(BgL_auxz00_6735);
			}
		}
	}



/* $flonum->bignum */
	BGL_EXPORTED_DEF obj_t bgl_flonum_to_bignum(double BgL_nz00_100)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1072 */
			{	/* Unsafe/bignumber.scm 1073 */
				long BgL_arg2581z00_4468;

				BgL_arg2581z00_4468 = (long) (BgL_nz00_100);
				return bgl_long_to_bignum(BgL_arg2581z00_4468);
			}
		}
	}



/* _$flonum->bignum */
	obj_t BGl__z42flonumzd2ze3bignumz73zz__bignumz00(obj_t BgL_envz00_4695,
		obj_t BgL_nz00_4696)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1072 */
			{	/* Unsafe/bignumber.scm 1073 */
				double BgL_auxz00_6745;

				{	/* Unsafe/bignumber.scm 1073 */
					obj_t BgL_auxz00_6746;

					if (REALP(BgL_nz00_4696))
						{	/* Unsafe/bignumber.scm 1073 */
							BgL_auxz00_6746 = BgL_nz00_4696;
						}
					else
						{
							obj_t BgL_auxz00_6749;

							BgL_auxz00_6749 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 34616)), BGl_string3213z00zz__bignumz00,
								BGl_string3214z00zz__bignumz00, BgL_nz00_4696);
							FAILURE(BgL_auxz00_6749, BFALSE, BFALSE);
						}
					BgL_auxz00_6745 = REAL_TO_DOUBLE(BgL_auxz00_6746);
				}
				return bgl_flonum_to_bignum(BgL_auxz00_6745);
			}
		}
	}



/* $bignum->flonum */
	BGL_EXPORTED_DEF double bgl_bignum_to_flonum(obj_t BgL_nz00_101)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1075 */
			{	/* Unsafe/bignumber.scm 1076 */
				long BgL_auxz00_6755;

				BgL_auxz00_6755 = bgl_bignum_to_long(BgL_nz00_101);
				return (double) (BgL_auxz00_6755);
		}}
	}



/* _$bignum->flonum */
	obj_t BGl__z42bignumzd2ze3flonumz73zz__bignumz00(obj_t BgL_envz00_4697,
		obj_t BgL_nz00_4698)
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 1075 */
			{	/* Unsafe/bignumber.scm 1076 */
				double BgL_auxz00_6758;

				{	/* Unsafe/bignumber.scm 1076 */
					obj_t BgL_auxz00_6759;

					if (BIGNUMP(BgL_nz00_4698))
						{	/* Unsafe/bignumber.scm 1076 */
							BgL_auxz00_6759 = BgL_nz00_4698;
						}
					else
						{
							obj_t BgL_auxz00_6762;

							BgL_auxz00_6762 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3170z00zz__bignumz00,
								BINT(((long) 34687)), BGl_string3215z00zz__bignumz00,
								BGl_string3180z00zz__bignumz00, BgL_nz00_4698);
							FAILURE(BgL_auxz00_6762, BFALSE, BFALSE);
						}
					BgL_auxz00_6758 = bgl_bignum_to_flonum(BgL_auxz00_6759);
				}
				return DOUBLE_TO_REAL(BgL_auxz00_6758);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 45 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 45 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bignumz00()
	{
		AN_OBJECT;
		{	/* Unsafe/bignumber.scm 45 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3216z00zz__bignumz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3216z00zz__bignumz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3216z00zz__bignumz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3216z00zz__bignumz00));
		}
	}

#ifdef __cplusplus
}
#endif
#endif
