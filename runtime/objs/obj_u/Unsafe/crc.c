/*===========================================================================*/
/*   (Unsafe/crc.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/crc.scm -indent -o objs/obj_u/Unsafe/crc.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__crczd2elongzd2lez00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3137z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3140z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3142z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3144z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3146z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__crczd2lengthzd2zz__crcz00(obj_t, obj_t);
	static obj_t BGl_symbol3150z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3153z00zz__crcz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2portzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3156z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__crczd2llongzd2lez00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3158z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3160z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3162z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3164z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crczd2stringzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3166z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3168z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3170z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3172z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3174z00zz__crcz00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol3176z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3178z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3180z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3185z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3200z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3201z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3202z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_symbol3203z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2lez00zz__crcz00(obj_t);
	static obj_t BGl_symbol3219z00zz__crcz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_crczd2elongzd2lez00zz__crcz00(unsigned char, long,
		long, long);
	static obj_t BGl_symbol3224z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__crcz00();
	BGL_EXPORTED_DECL long BGl_crczd2longzd2zz__crcz00(unsigned char, long, long,
		long);
	static obj_t BGl_zc3exitza32412ze3z72zf1zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_crczd2llongzd2lez00zz__crcz00(unsigned
		char, BGL_LONGLONG_T, BGL_LONGLONG_T, long);
	static obj_t BGl__crczd2llongzd2zz__crcz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_keyword3210z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_keyword3212z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_keyword3214z00zz__crcz00 = BUNSPEC;
	static obj_t BGl__registerzd2crcz12zc0zz__crcz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_za2crcsza2z00zz__crcz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__crcz00();
	static obj_t BGl__crczd2polynomialzd2lez00zz__crcz00(obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32412ze3z83zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__crczd2portzd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2lengthzd2zz__crcz00(obj_t);
	static obj_t BGl__crczd2elongzd2zz__crcz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2crcz12zc0zz__crcz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2filezd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_crczd2fastzd2mmapz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2nameszd2zz__crcz00();
	static obj_t BGl__crczd2longzd2zz__crcz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_crczd2longzd2lez00zz__crcz00(unsigned char, long,
		long, long);
	extern obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__crcz00(long,
		char *);
	static obj_t BGl_toplevelzd2initzd2zz__crcz00();
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t,
		obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__crcz00zz__crcz00(obj_t, obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crczd2mmapzd2zz__crcz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__crczd2polynomialzd2zz__crcz00(obj_t, obj_t);
	static obj_t BGl__crczd2filezd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_crczd2llongzd2zz__crcz00(unsigned char,
		BGL_LONGLONG_T, BGL_LONGLONG_T, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__crczd2longzd2lez00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__crczd2stringzd2zz__crcz00(obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_crczd2elongzd2zz__crcz00(unsigned char, long, long,
		long);
	BGL_EXPORTED_DECL obj_t BGl_crczd2polynomialzd2zz__crcz00(obj_t);
	static obj_t BGl_crczd2fastzd2portz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2crczd2zz__crcz00(obj_t);
	static obj_t BGl__crczd2mmapzd2zz__crcz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_crcz00zz__crcz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__crczd2nameszd2zz__crcz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__crcz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_ELONG(BGl_elong3139z00zz__crcz00,
		BgL_bgl_elong3139za700za7za7__3237za7, 79764919);
	      DEFINE_ELONG(BGl_elong3148z00zz__crcz00,
		BgL_bgl_elong3148za700za7za7__3238za7, 1021788929);
	      DEFINE_ELONG(BGl_elong3149z00zz__crcz00,
		BgL_bgl_elong3149za700za7za7__3239za7, 540064207);
	      DEFINE_ELONG(BGl_elong3152z00zz__crcz00,
		BgL_bgl_elong3152za700za7za7__3240za7, 517762881);
	      DEFINE_ELONG(BGl_elong3155z00zz__crcz00,
		BgL_bgl_elong3155za700za7za7__3241za7, 1947962583);
	extern obj_t BGl_bitzd2andzd2envz00zz__bitz00;
	   
		 
		DEFINE_ELONG(BGl_elong3206z00zz__crcz00,
		BgL_bgl_elong3206za700za7za7__3242za7, 1);
	      DEFINE_ELONG(BGl_elong3208z00zz__crcz00,
		BgL_bgl_elong3208za700za7za7__3243za7, 0);
	extern obj_t BGl_bitzd2orllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2elongzd2lezd2envzd2zz__crcz00,
		BgL_bgl__crcza7d2elongza7d2l3244z00, BGl__crczd2elongzd2lez00zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2portzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2portza7d2za7za73245z00, opt_generic_entry,
		BGl__crczd2portzd2zz__crcz00, BFALSE, -1);
	extern obj_t BGl_bitzd2orzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_crczd2polynomialzd2bezd2ze3lezd2envze3zz__crcz00,
		BgL_bgl__crcza7d2polynomia3246za7,
		BGl__crczd2polynomialzd2bezd2ze3lez31zz__crcz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2polynomialzd2lezd2envzd2zz__crcz00,
		BgL_bgl__crcza7d2polynomia3247za7, BGl__crczd2polynomialzd2lez00zz__crcz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2stringzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2stringza7d23248z00, opt_generic_entry,
		BGl__crczd2stringzd2zz__crcz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2llongzd2lezd2envzd2zz__crcz00,
		BgL_bgl__crcza7d2llongza7d2l3249z00, BGl__crczd2llongzd2lez00zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2llongzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2llongza7d2za73250za7, BGl__crczd2llongzd2zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2nameszd2envz00zz__crcz00,
		BgL_bgl__crcza7d2namesza7d2za73251za7, BGl__crczd2nameszd2zz__crcz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_registerzd2crcz12zd2envz12zz__crcz00,
		BgL_bgl__registerza7d2crcza73252z00, BGl__registerzd2crcz12zc0zz__crcz00,
		0L, BUNSPEC, 3);
	extern obj_t BGl_bitzd2orelongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3138z00zz__crcz00,
		BgL_bgl_string3138za700za7za7_3253za7, "ieee-32", 7);
	      DEFINE_STRING(BGl_string3141z00zz__crcz00,
		BgL_bgl_string3141za700za7za7_3254za7, "radix-64-24", 11);
	extern obj_t BGl_bitzd2andllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3143z00zz__crcz00,
		BgL_bgl_string3143za700za7za7_3255za7, "ccitt-16", 8);
	      DEFINE_STRING(BGl_string3145z00zz__crcz00,
		BgL_bgl_string3145za700za7za7_3256za7, "dnp-16", 6);
	      DEFINE_STRING(BGl_string3147z00zz__crcz00,
		BgL_bgl_string3147za700za7za7_3257za7, "ibm-16", 6);
	      DEFINE_STRING(BGl_string3151z00zz__crcz00,
		BgL_bgl_string3151za700za7za7_3258za7, "c-32", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2longzd2lezd2envzd2zz__crcz00,
		BgL_bgl__crcza7d2longza7d2le3259z00, BGl__crczd2longzd2lez00zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3154z00zz__crcz00,
		BgL_bgl_string3154za700za7za7_3260za7, "k-32", 4);
	extern obj_t BGl_bitzd2lshllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_STRING(BGl_string3157z00zz__crcz00,
		BgL_bgl_string3157za700za7za7_3261za7, "q-32", 4);
	      DEFINE_STRING(BGl_string3159z00zz__crcz00,
		BgL_bgl_string3159za700za7za7_3262za7, "itu-4", 5);
	      DEFINE_STRING(BGl_string3161z00zz__crcz00,
		BgL_bgl_string3161za700za7za7_3263za7, "epc-5", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2filezd2envz00zz__crcz00,
		BgL_bgl__crcza7d2fileza7d2za7za73264z00, opt_generic_entry,
		BGl__crczd2filezd2zz__crcz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3163z00zz__crcz00,
		BgL_bgl_string3163za700za7za7_3265za7, "itu-5", 5);
	      DEFINE_STRING(BGl_string3165z00zz__crcz00,
		BgL_bgl_string3165za700za7za7_3266za7, "usb-5", 5);
	      DEFINE_STRING(BGl_string3167z00zz__crcz00,
		BgL_bgl_string3167za700za7za7_3267za7, "itu-6", 5);
	      DEFINE_STRING(BGl_string3169z00zz__crcz00,
		BgL_bgl_string3169za700za7za7_3268za7, "atm-8", 5);
	      DEFINE_STRING(BGl_string3171z00zz__crcz00,
		BgL_bgl_string3171za700za7za7_3269za7, "ccitt-8", 7);
	      DEFINE_STRING(BGl_string3173z00zz__crcz00,
		BgL_bgl_string3173za700za7za7_3270za7, "dallas/maxim-8", 14);
	      DEFINE_STRING(BGl_string3175z00zz__crcz00,
		BgL_bgl_string3175za700za7za7_3271za7, "sae-j1850-8", 11);
	      DEFINE_STRING(BGl_string3177z00zz__crcz00,
		BgL_bgl_string3177za700za7za7_3272za7, "can-15", 6);
	      DEFINE_STRING(BGl_string3179z00zz__crcz00,
		BgL_bgl_string3179za700za7za7_3273za7, "iso-64", 6);
	      DEFINE_STRING(BGl_string3181z00zz__crcz00,
		BgL_bgl_string3181za700za7za7_3274za7, "bit-andellong", 13);
	      DEFINE_STRING(BGl_string3186z00zz__crcz00,
		BgL_bgl_string3186za700za7za7_3275za7, "ecma-182-64", 11);
	      DEFINE_STRING(BGl_string3190z00zz__crcz00,
		BgL_bgl_string3190za700za7za7_3276za7, "_crc-long", 9);
	      DEFINE_STRING(BGl_string3189z00zz__crcz00,
		BgL_bgl_string3189za700za7za7_3277za7, "/tmp/bigloo/runtime/Unsafe/crc.scm",
		34);
	      DEFINE_STRING(BGl_string3191z00zz__crcz00,
		BgL_bgl_string3191za700za7za7_3278za7, "char", 4);
	      DEFINE_STRING(BGl_string3192z00zz__crcz00,
		BgL_bgl_string3192za700za7za7_3279za7, "long", 4);
	      DEFINE_STRING(BGl_string3193z00zz__crcz00,
		BgL_bgl_string3193za700za7za7_3280za7, "_crc-elong", 10);
	      DEFINE_STRING(BGl_string3204z00zz__crcz00,
		BgL_bgl_string3204za700za7za7_3281za7, "crc-gen", 7);
	      DEFINE_STRING(BGl_string3194z00zz__crcz00,
		BgL_bgl_string3194za700za7za7_3282za7, "elong", 5);
	      DEFINE_STRING(BGl_string3205z00zz__crcz00,
		BgL_bgl_string3205za700za7za7_3283za7, "could not determine type", 24);
	      DEFINE_STRING(BGl_string3195z00zz__crcz00,
		BgL_bgl_string3195za700za7za7_3284za7, "_crc-llong", 10);
	      DEFINE_STRING(BGl_string3196z00zz__crcz00,
		BgL_bgl_string3196za700za7za7_3285za7, "llong", 5);
	      DEFINE_STRING(BGl_string3197z00zz__crcz00,
		BgL_bgl_string3197za700za7za7_3286za7, "_crc-long-le", 12);
	      DEFINE_STRING(BGl_string3198z00zz__crcz00,
		BgL_bgl_string3198za700za7za7_3287za7, "_crc-elong-le", 13);
	      DEFINE_STRING(BGl_string3199z00zz__crcz00,
		BgL_bgl_string3199za700za7za7_3288za7, "_crc-llong-le", 13);
	      DEFINE_STRING(BGl_string3211z00zz__crcz00,
		BgL_bgl_string3211za700za7za7_3289za7, "big-endian?", 11);
	      DEFINE_STRING(BGl_string3213z00zz__crcz00,
		BgL_bgl_string3213za700za7za7_3290za7, "final-xor", 9);
	      DEFINE_STRING(BGl_string3215z00zz__crcz00,
		BgL_bgl_string3215za700za7za7_3291za7, "init", 4);
	      DEFINE_STRING(BGl_string3216z00zz__crcz00,
		BgL_bgl_string3216za700za7za7_3292za7, "_crc", 4);
	      DEFINE_STRING(BGl_string3217z00zz__crcz00,
		BgL_bgl_string3217za700za7za7_3293za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3218z00zz__crcz00,
		BgL_bgl_string3218za700za7za7_3294za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3220z00zz__crcz00,
		BgL_bgl_string3220za700za7za7_3295za7, "crc", 3);
	      DEFINE_STRING(BGl_string3221z00zz__crcz00,
		BgL_bgl_string3221za700za7za7_3296za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3222z00zz__crcz00,
		BgL_bgl_string3222za700za7za7_3297za7, "_crc-file", 9);
	      DEFINE_STRING(BGl_string3223z00zz__crcz00,
		BgL_bgl_string3223za700za7za7_3298za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3225z00zz__crcz00,
		BgL_bgl_string3225za700za7za7_3299za7, "crc-file", 8);
	      DEFINE_STRING(BGl_string3226z00zz__crcz00,
		BgL_bgl_string3226za700za7za7_3300za7, "Could not open file", 19);
	      DEFINE_STRING(BGl_string3227z00zz__crcz00,
		BgL_bgl_string3227za700za7za7_3301za7, "pair", 4);
	      DEFINE_STRING(BGl_string3228z00zz__crcz00,
		BgL_bgl_string3228za700za7za7_3302za7, "_crc-string", 11);
	      DEFINE_STRING(BGl_string3230z00zz__crcz00,
		BgL_bgl_string3230za700za7za7_3303za7, "_crc-mmap", 9);
	      DEFINE_STRING(BGl_string3229z00zz__crcz00,
		BgL_bgl_string3229za700za7za7_3304za7, "_crc-port", 9);
	      DEFINE_STRING(BGl_string3231z00zz__crcz00,
		BgL_bgl_string3231za700za7za7_3305za7, "Could not find crc", 18);
	      DEFINE_STRING(BGl_string3232z00zz__crcz00,
		BgL_bgl_string3232za700za7za7_3306za7, "bad polynomial", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2polynomialzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2polynomia3307za7, BGl__crczd2polynomialzd2zz__crcz00, 0L,
		BUNSPEC, 1);
	extern obj_t BGl_bitzd2rshllongzd2envz00zz__bitz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2mmapzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2mmapza7d2za7za73308z00, opt_generic_entry,
		BGl__crczd2mmapzd2zz__crcz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2elongzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2elongza7d2za73309za7, BGl__crczd2elongzd2zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2envzd2zz__crcz00,
		BgL_bgl__crcza700za7za7__crcza703310z00, opt_generic_entry,
		BGl__crcz00zz__crcz00, BFALSE, -1);
	extern obj_t BGl_bitzd2rshzd2envz00zz__bitz00;
	   
		 
		DEFINE_LLONG(BGl_llong3182z00zz__crcz00,
		BgL_bgl_llong3182za700za7za7__3311za7,
		(-(0 + ((BGL_LONGLONG_T) 65536 * ((0 + ((BGL_LONGLONG_T) 65536 * ((0 +
										((BGL_LONGLONG_T) 65536 *
											(((BGL_LONGLONG_T) 10240))))))))))));
	      DEFINE_LLONG(BGl_llong3183z00zz__crcz00,
		BgL_bgl_llong3183za700za7za7__3312za7, (-((BGL_LONGLONG_T) 1)));
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2longzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2longza7d2za7za73313z00, BGl__crczd2longzd2zz__crcz00, 0L,
		BUNSPEC, 4);
	      DEFINE_LLONG(BGl_llong3184z00zz__crcz00,
		BgL_bgl_llong3184za700za7za7__3314za7, ((BGL_LONGLONG_T) 27));
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crczd2lengthzd2envz00zz__crcz00,
		BgL_bgl__crcza7d2lengthza7d23315z00, BGl__crczd2lengthzd2zz__crcz00, 0L,
		BUNSPEC, 1);
	      DEFINE_LLONG(BGl_llong3187z00zz__crcz00,
		BgL_bgl_llong3187za700za7za7__3316za7,
		(-(61630 + ((BGL_LONGLONG_T) 65536 * ((10360 +
							((BGL_LONGLONG_T) 65536 * ((43114 +
										((BGL_LONGLONG_T) 65536 *
											(((BGL_LONGLONG_T) 13971))))))))))));
	      DEFINE_LLONG(BGl_llong3188z00zz__crcz00,
		BgL_bgl_llong3188za700za7za7__3317za7,
		(13971 + ((BGL_LONGLONG_T) 65536 * ((43498 +
						((BGL_LONGLONG_T) 65536 * ((57835 +
									((BGL_LONGLONG_T) 65536 * (((BGL_LONGLONG_T) 17136)))))))))));
	      DEFINE_LLONG(BGl_llong3207z00zz__crcz00,
		BgL_bgl_llong3207za700za7za7__3318za7, ((BGL_LONGLONG_T) 1));
	      DEFINE_LLONG(BGl_llong3209z00zz__crcz00,
		BgL_bgl_llong3209za700za7za7__3319za7, ((BGL_LONGLONG_T) 0));
	extern obj_t BGl_bitzd2andelongzd2envz00zz__bitz00;
	extern obj_t BGl_bitzd2lshelongzd2envz00zz__bitz00;
	extern obj_t BGl_bitzd2lshzd2envz00zz__bitz00;
	extern obj_t BGl_bitzd2rshelongzd2envz00zz__bitz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__crcz00(long
		BgL_checksumz00_6036, char *BgL_fromz00_6037)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__crcz00))
				{
					BGl_requirezd2initializa7ationz75zz__crcz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__crcz00();
					BGl_toplevelzd2initzd2zz__crcz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__crcz00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 15 */
			BGl_symbol3137z00zz__crcz00 =
				bstring_to_symbol(BGl_string3138z00zz__crcz00);
			BGl_symbol3140z00zz__crcz00 =
				bstring_to_symbol(BGl_string3141z00zz__crcz00);
			BGl_symbol3142z00zz__crcz00 =
				bstring_to_symbol(BGl_string3143z00zz__crcz00);
			BGl_symbol3144z00zz__crcz00 =
				bstring_to_symbol(BGl_string3145z00zz__crcz00);
			BGl_symbol3146z00zz__crcz00 =
				bstring_to_symbol(BGl_string3147z00zz__crcz00);
			BGl_symbol3150z00zz__crcz00 =
				bstring_to_symbol(BGl_string3151z00zz__crcz00);
			BGl_symbol3153z00zz__crcz00 =
				bstring_to_symbol(BGl_string3154z00zz__crcz00);
			BGl_symbol3156z00zz__crcz00 =
				bstring_to_symbol(BGl_string3157z00zz__crcz00);
			BGl_symbol3158z00zz__crcz00 =
				bstring_to_symbol(BGl_string3159z00zz__crcz00);
			BGl_symbol3160z00zz__crcz00 =
				bstring_to_symbol(BGl_string3161z00zz__crcz00);
			BGl_symbol3162z00zz__crcz00 =
				bstring_to_symbol(BGl_string3163z00zz__crcz00);
			BGl_symbol3164z00zz__crcz00 =
				bstring_to_symbol(BGl_string3165z00zz__crcz00);
			BGl_symbol3166z00zz__crcz00 =
				bstring_to_symbol(BGl_string3167z00zz__crcz00);
			BGl_symbol3168z00zz__crcz00 =
				bstring_to_symbol(BGl_string3169z00zz__crcz00);
			BGl_symbol3170z00zz__crcz00 =
				bstring_to_symbol(BGl_string3171z00zz__crcz00);
			BGl_symbol3172z00zz__crcz00 =
				bstring_to_symbol(BGl_string3173z00zz__crcz00);
			BGl_symbol3174z00zz__crcz00 =
				bstring_to_symbol(BGl_string3175z00zz__crcz00);
			BGl_symbol3176z00zz__crcz00 =
				bstring_to_symbol(BGl_string3177z00zz__crcz00);
			BGl_symbol3178z00zz__crcz00 =
				bstring_to_symbol(BGl_string3179z00zz__crcz00);
			BGl_symbol3180z00zz__crcz00 =
				bstring_to_symbol(BGl_string3181z00zz__crcz00);
			BGl_symbol3185z00zz__crcz00 =
				bstring_to_symbol(BGl_string3186z00zz__crcz00);
			BGl_symbol3200z00zz__crcz00 =
				bstring_to_symbol(BGl_string3192z00zz__crcz00);
			BGl_symbol3201z00zz__crcz00 =
				bstring_to_symbol(BGl_string3194z00zz__crcz00);
			BGl_symbol3202z00zz__crcz00 =
				bstring_to_symbol(BGl_string3196z00zz__crcz00);
			BGl_symbol3203z00zz__crcz00 =
				bstring_to_symbol(BGl_string3204z00zz__crcz00);
			BGl_keyword3210z00zz__crcz00 =
				bstring_to_keyword(BGl_string3211z00zz__crcz00);
			BGl_keyword3212z00zz__crcz00 =
				bstring_to_keyword(BGl_string3213z00zz__crcz00);
			BGl_keyword3214z00zz__crcz00 =
				bstring_to_keyword(BGl_string3215z00zz__crcz00);
			BGl_symbol3219z00zz__crcz00 =
				bstring_to_symbol(BGl_string3220z00zz__crcz00);
			return (BGl_symbol3224z00zz__crcz00 =
				bstring_to_symbol(BGl_string3225z00zz__crcz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__crcz00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 15 */
			{	/* Unsafe/crc.scm 241 */
				obj_t BgL_arg1960z00_1002;

				obj_t BgL_arg1961z00_1003;

				{	/* Unsafe/crc.scm 241 */
					obj_t BgL_arg1962z00_1004;

					obj_t BgL_arg1963z00_1005;

					BgL_arg1962z00_1004 = BGl_symbol3137z00zz__crcz00;
					{	/* Unsafe/crc.scm 241 */
						long BgL_arg1967z00_1008;

						BgL_arg1967z00_1008 = (((long) -1) & ((long) -306674912));
						{	/* Unsafe/crc.scm 241 */
							obj_t BgL_list1969z00_1010;

							{	/* Unsafe/crc.scm 241 */
								obj_t BgL_arg1970z00_1011;

								{	/* Unsafe/crc.scm 241 */
									obj_t BgL_arg1971z00_1012;

									BgL_arg1971z00_1012 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1970z00_1011 =
										MAKE_PAIR(make_belong(BgL_arg1967z00_1008),
										BgL_arg1971z00_1012);
								}
								BgL_list1969z00_1010 =
									MAKE_PAIR(BGl_elong3139z00zz__crcz00, BgL_arg1970z00_1011);
							}
							BgL_arg1963z00_1005 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 32)),
								BgL_list1969z00_1010);
					}}
					BgL_arg1960z00_1002 =
						MAKE_PAIR(BgL_arg1962z00_1004, BgL_arg1963z00_1005);
				}
				{	/* Unsafe/crc.scm 242 */
					obj_t BgL_arg1972z00_1013;

					obj_t BgL_arg1973z00_1014;

					obj_t BgL_arg1974z00_1015;

					obj_t BgL_arg1975z00_1016;

					obj_t BgL_arg1976z00_1017;

					obj_t BgL_arg1977z00_1018;

					obj_t BgL_arg1979z00_1019;

					obj_t BgL_arg1980z00_1020;

					obj_t BgL_arg1981z00_1021;

					obj_t BgL_arg1982z00_1022;

					obj_t BgL_arg1983z00_1023;

					obj_t BgL_arg1984z00_1024;

					obj_t BgL_arg1985z00_1025;

					obj_t BgL_arg1986z00_1026;

					obj_t BgL_arg1987z00_1027;

					obj_t BgL_arg1988z00_1028;

					obj_t BgL_arg1989z00_1029;

					obj_t BgL_arg1990z00_1030;

					obj_t BgL_arg1991z00_1031;

					obj_t BgL_arg1992z00_1032;

					obj_t BgL_arg1993z00_1033;

					obj_t BgL_arg1994z00_1034;

					obj_t BgL_arg1995z00_1035;

					obj_t BgL_arg1996z00_1036;

					obj_t BgL_arg1998z00_1037;

					obj_t BgL_arg1999z00_1038;

					{	/* Unsafe/crc.scm 242 */
						obj_t BgL_arg2030z00_1066;

						obj_t BgL_arg2031z00_1067;

						BgL_arg2030z00_1066 = BGl_symbol3140z00zz__crcz00;
						{	/* Unsafe/crc.scm 242 */
							obj_t BgL_list2032z00_1068;

							{	/* Unsafe/crc.scm 242 */
								obj_t BgL_arg2034z00_1070;

								{	/* Unsafe/crc.scm 242 */
									obj_t BgL_arg2037z00_1072;

									BgL_arg2037z00_1072 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2034z00_1070 =
										MAKE_PAIR(BINT(((long) 14627425)), BgL_arg2037z00_1072);
								}
								BgL_list2032z00_1068 =
									MAKE_PAIR(BINT(((long) 8801531)), BgL_arg2034z00_1070);
							}
							BgL_arg2031z00_1067 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 24)),
								BgL_list2032z00_1068);
						}
						BgL_arg1972z00_1013 =
							MAKE_PAIR(BgL_arg2030z00_1066, BgL_arg2031z00_1067);
					}
					{	/* Unsafe/crc.scm 243 */
						obj_t BgL_arg2038z00_1073;

						obj_t BgL_arg2039z00_1074;

						BgL_arg2038z00_1073 = BGl_symbol3142z00zz__crcz00;
						{	/* Unsafe/crc.scm 243 */
							obj_t BgL_list2040z00_1075;

							{	/* Unsafe/crc.scm 243 */
								obj_t BgL_arg2042z00_1077;

								{	/* Unsafe/crc.scm 243 */
									obj_t BgL_arg2044z00_1079;

									BgL_arg2044z00_1079 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2042z00_1077 =
										MAKE_PAIR(BINT(((long) 33800)), BgL_arg2044z00_1079);
								}
								BgL_list2040z00_1075 =
									MAKE_PAIR(BINT(((long) 4129)), BgL_arg2042z00_1077);
							}
							BgL_arg2039z00_1074 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 16)),
								BgL_list2040z00_1075);
						}
						BgL_arg1973z00_1014 =
							MAKE_PAIR(BgL_arg2038z00_1073, BgL_arg2039z00_1074);
					}
					{	/* Unsafe/crc.scm 244 */
						obj_t BgL_arg2045z00_1080;

						obj_t BgL_arg2046z00_1081;

						BgL_arg2045z00_1080 = BGl_symbol3144z00zz__crcz00;
						{	/* Unsafe/crc.scm 244 */
							obj_t BgL_list2047z00_1082;

							{	/* Unsafe/crc.scm 244 */
								obj_t BgL_arg2051z00_1084;

								{	/* Unsafe/crc.scm 244 */
									obj_t BgL_arg2053z00_1086;

									BgL_arg2053z00_1086 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2051z00_1084 =
										MAKE_PAIR(BINT(((long) 42684)), BgL_arg2053z00_1086);
								}
								BgL_list2047z00_1082 =
									MAKE_PAIR(BINT(((long) 15717)), BgL_arg2051z00_1084);
							}
							BgL_arg2046z00_1081 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 16)),
								BgL_list2047z00_1082);
						}
						BgL_arg1974z00_1015 =
							MAKE_PAIR(BgL_arg2045z00_1080, BgL_arg2046z00_1081);
					}
					{	/* Unsafe/crc.scm 245 */
						obj_t BgL_arg2054z00_1087;

						obj_t BgL_arg2055z00_1088;

						BgL_arg2054z00_1087 = BGl_symbol3146z00zz__crcz00;
						{	/* Unsafe/crc.scm 245 */
							obj_t BgL_list2056z00_1089;

							{	/* Unsafe/crc.scm 245 */
								obj_t BgL_arg2058z00_1091;

								{	/* Unsafe/crc.scm 245 */
									obj_t BgL_arg2060z00_1093;

									BgL_arg2060z00_1093 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2058z00_1091 =
										MAKE_PAIR(BINT(((long) 40961)), BgL_arg2060z00_1093);
								}
								BgL_list2056z00_1089 =
									MAKE_PAIR(BINT(((long) 32773)), BgL_arg2058z00_1091);
							}
							BgL_arg2055z00_1088 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 16)),
								BgL_list2056z00_1089);
						}
						BgL_arg1975z00_1016 =
							MAKE_PAIR(BgL_arg2054z00_1087, BgL_arg2055z00_1088);
					}
					{	/* Unsafe/crc.scm 246 */
						obj_t BgL_arg2062z00_1095;

						{	/* Unsafe/crc.scm 246 */
							obj_t BgL_list2063z00_1096;

							{	/* Unsafe/crc.scm 246 */
								obj_t BgL_arg2065z00_1098;

								{	/* Unsafe/crc.scm 246 */
									obj_t BgL_arg2067z00_1100;

									BgL_arg2067z00_1100 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2065z00_1098 =
										MAKE_PAIR(BINT(((long) 13874874)), BgL_arg2067z00_1100);
								}
								BgL_list2063z00_1096 =
									MAKE_PAIR(BINT(((long) 6122955)), BgL_arg2065z00_1098);
							}
							BgL_arg2062z00_1095 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 24)),
								BgL_list2063z00_1096);
						}
						BgL_arg1976z00_1017 =
							MAKE_PAIR(BINT(((long) 24)), BgL_arg2062z00_1095);
					}
					{	/* Unsafe/crc.scm 247 */
						obj_t BgL_arg2069z00_1102;

						{	/* Unsafe/crc.scm 247 */
							obj_t BgL_list2070z00_1103;

							{	/* Unsafe/crc.scm 247 */
								obj_t BgL_arg2073z00_1105;

								{	/* Unsafe/crc.scm 247 */
									obj_t BgL_arg2077z00_1107;

									BgL_arg2077z00_1107 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2073z00_1105 =
										MAKE_PAIR(BGl_elong3148z00zz__crcz00, BgL_arg2077z00_1107);
								}
								BgL_list2070z00_1103 =
									MAKE_PAIR(BGl_elong3149z00zz__crcz00, BgL_arg2073z00_1105);
							}
							BgL_arg2069z00_1102 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 30)),
								BgL_list2070z00_1103);
						}
						BgL_arg1977z00_1018 =
							MAKE_PAIR(BINT(((long) 30)), BgL_arg2069z00_1102);
					}
					{	/* Unsafe/crc.scm 248 */
						obj_t BgL_arg2078z00_1108;

						obj_t BgL_arg2079z00_1109;

						BgL_arg2078z00_1108 = BGl_symbol3150z00zz__crcz00;
						{	/* Unsafe/crc.scm 248 */
							long BgL_arg2082z00_1112;

							BgL_arg2082z00_1112 = (((long) -1) & ((long) -2097792136));
							{	/* Unsafe/crc.scm 248 */
								obj_t BgL_list2084z00_1114;

								{	/* Unsafe/crc.scm 248 */
									obj_t BgL_arg2085z00_1115;

									{	/* Unsafe/crc.scm 248 */
										obj_t BgL_arg2086z00_1116;

										BgL_arg2086z00_1116 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2085z00_1115 =
											MAKE_PAIR(make_belong(BgL_arg2082z00_1112),
											BgL_arg2086z00_1116);
									}
									BgL_list2084z00_1114 =
										MAKE_PAIR(BGl_elong3152z00zz__crcz00, BgL_arg2085z00_1115);
								}
								BgL_arg2079z00_1109 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 32)),
									BgL_list2084z00_1114);
						}}
						BgL_arg1979z00_1019 =
							MAKE_PAIR(BgL_arg2078z00_1108, BgL_arg2079z00_1109);
					}
					{	/* Unsafe/crc.scm 249 */
						obj_t BgL_arg2089z00_1117;

						obj_t BgL_arg2090z00_1118;

						BgL_arg2089z00_1117 = BGl_symbol3153z00zz__crcz00;
						{	/* Unsafe/crc.scm 249 */
							long BgL_arg2093z00_1121;

							BgL_arg2093z00_1121 = (((long) -1) & ((long) -349054930));
							{	/* Unsafe/crc.scm 249 */
								obj_t BgL_list2095z00_1123;

								{	/* Unsafe/crc.scm 249 */
									obj_t BgL_arg2096z00_1124;

									{	/* Unsafe/crc.scm 249 */
										obj_t BgL_arg2097z00_1125;

										BgL_arg2097z00_1125 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2096z00_1124 =
											MAKE_PAIR(make_belong(BgL_arg2093z00_1121),
											BgL_arg2097z00_1125);
									}
									BgL_list2095z00_1123 =
										MAKE_PAIR(BGl_elong3155z00zz__crcz00, BgL_arg2096z00_1124);
								}
								BgL_arg2090z00_1118 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 32)),
									BgL_list2095z00_1123);
						}}
						BgL_arg1980z00_1020 =
							MAKE_PAIR(BgL_arg2089z00_1117, BgL_arg2090z00_1118);
					}
					{	/* Unsafe/crc.scm 250 */
						obj_t BgL_arg2098z00_1126;

						obj_t BgL_arg2099z00_1127;

						BgL_arg2098z00_1126 = BGl_symbol3156z00zz__crcz00;
						{	/* Unsafe/crc.scm 250 */
							long BgL_arg2101z00_1129;

							long BgL_arg2102z00_1130;

							BgL_arg2101z00_1129 = (((long) -1) & ((long) -2126429781));
							BgL_arg2102z00_1130 = (((long) -1) & ((long) -712867199));
							{	/* Unsafe/crc.scm 250 */
								obj_t BgL_list2104z00_1132;

								{	/* Unsafe/crc.scm 250 */
									obj_t BgL_arg2105z00_1133;

									{	/* Unsafe/crc.scm 250 */
										obj_t BgL_arg2106z00_1134;

										BgL_arg2106z00_1134 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2105z00_1133 =
											MAKE_PAIR(make_belong(BgL_arg2102z00_1130),
											BgL_arg2106z00_1134);
									}
									BgL_list2104z00_1132 =
										MAKE_PAIR(make_belong(BgL_arg2101z00_1129),
										BgL_arg2105z00_1133);
								}
								BgL_arg2099z00_1127 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 32)),
									BgL_list2104z00_1132);
						}}
						BgL_arg1981z00_1021 =
							MAKE_PAIR(BgL_arg2098z00_1126, BgL_arg2099z00_1127);
					}
					{	/* Unsafe/crc.scm 253 */
						obj_t BgL_arg2107z00_1135;

						obj_t BgL_arg2108z00_1136;

						BgL_arg2107z00_1135 = BGl_symbol3158z00zz__crcz00;
						{	/* Unsafe/crc.scm 253 */
							obj_t BgL_list2109z00_1137;

							{	/* Unsafe/crc.scm 253 */
								obj_t BgL_arg2111z00_1139;

								{	/* Unsafe/crc.scm 253 */
									obj_t BgL_arg2113z00_1141;

									BgL_arg2113z00_1141 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2111z00_1139 =
										MAKE_PAIR(BINT(((long) 12)), BgL_arg2113z00_1141);
								}
								BgL_list2109z00_1137 =
									MAKE_PAIR(BINT(((long) 3)), BgL_arg2111z00_1139);
							}
							BgL_arg2108z00_1136 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 4)),
								BgL_list2109z00_1137);
						}
						BgL_arg1982z00_1022 =
							MAKE_PAIR(BgL_arg2107z00_1135, BgL_arg2108z00_1136);
					}
					{	/* Unsafe/crc.scm 254 */
						obj_t BgL_arg2114z00_1142;

						obj_t BgL_arg2115z00_1143;

						BgL_arg2114z00_1142 = BGl_symbol3160z00zz__crcz00;
						{	/* Unsafe/crc.scm 254 */
							obj_t BgL_list2116z00_1144;

							{	/* Unsafe/crc.scm 254 */
								obj_t BgL_arg2119z00_1146;

								{	/* Unsafe/crc.scm 254 */
									obj_t BgL_arg2123z00_1148;

									BgL_arg2123z00_1148 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2119z00_1146 =
										MAKE_PAIR(BINT(((long) 18)), BgL_arg2123z00_1148);
								}
								BgL_list2116z00_1144 =
									MAKE_PAIR(BINT(((long) 9)), BgL_arg2119z00_1146);
							}
							BgL_arg2115z00_1143 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 5)),
								BgL_list2116z00_1144);
						}
						BgL_arg1983z00_1023 =
							MAKE_PAIR(BgL_arg2114z00_1142, BgL_arg2115z00_1143);
					}
					{	/* Unsafe/crc.scm 255 */
						obj_t BgL_arg2124z00_1149;

						obj_t BgL_arg2125z00_1150;

						BgL_arg2124z00_1149 = BGl_symbol3162z00zz__crcz00;
						{	/* Unsafe/crc.scm 255 */
							obj_t BgL_list2126z00_1151;

							{	/* Unsafe/crc.scm 255 */
								obj_t BgL_arg2130z00_1153;

								{	/* Unsafe/crc.scm 255 */
									obj_t BgL_arg2132z00_1155;

									BgL_arg2132z00_1155 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2130z00_1153 =
										MAKE_PAIR(BINT(((long) 21)), BgL_arg2132z00_1155);
								}
								BgL_list2126z00_1151 =
									MAKE_PAIR(BINT(((long) 21)), BgL_arg2130z00_1153);
							}
							BgL_arg2125z00_1150 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 5)),
								BgL_list2126z00_1151);
						}
						BgL_arg1984z00_1024 =
							MAKE_PAIR(BgL_arg2124z00_1149, BgL_arg2125z00_1150);
					}
					{	/* Unsafe/crc.scm 256 */
						obj_t BgL_arg2133z00_1156;

						obj_t BgL_arg2134z00_1157;

						BgL_arg2133z00_1156 = BGl_symbol3164z00zz__crcz00;
						{	/* Unsafe/crc.scm 256 */
							obj_t BgL_list2135z00_1158;

							{	/* Unsafe/crc.scm 256 */
								obj_t BgL_arg2137z00_1160;

								{	/* Unsafe/crc.scm 256 */
									obj_t BgL_arg2139z00_1162;

									BgL_arg2139z00_1162 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2137z00_1160 =
										MAKE_PAIR(BINT(((long) 20)), BgL_arg2139z00_1162);
								}
								BgL_list2135z00_1158 =
									MAKE_PAIR(BINT(((long) 5)), BgL_arg2137z00_1160);
							}
							BgL_arg2134z00_1157 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 5)),
								BgL_list2135z00_1158);
						}
						BgL_arg1985z00_1025 =
							MAKE_PAIR(BgL_arg2133z00_1156, BgL_arg2134z00_1157);
					}
					{	/* Unsafe/crc.scm 257 */
						obj_t BgL_arg2140z00_1163;

						obj_t BgL_arg2141z00_1164;

						BgL_arg2140z00_1163 = BGl_symbol3166z00zz__crcz00;
						{	/* Unsafe/crc.scm 257 */
							obj_t BgL_list2142z00_1165;

							{	/* Unsafe/crc.scm 257 */
								obj_t BgL_arg2145z00_1167;

								{	/* Unsafe/crc.scm 257 */
									obj_t BgL_arg2147z00_1169;

									BgL_arg2147z00_1169 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2145z00_1167 =
										MAKE_PAIR(BINT(((long) 48)), BgL_arg2147z00_1169);
								}
								BgL_list2142z00_1165 =
									MAKE_PAIR(BINT(((long) 3)), BgL_arg2145z00_1167);
							}
							BgL_arg2141z00_1164 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 6)),
								BgL_list2142z00_1165);
						}
						BgL_arg1986z00_1026 =
							MAKE_PAIR(BgL_arg2140z00_1163, BgL_arg2141z00_1164);
					}
					{	/* Unsafe/crc.scm 258 */
						obj_t BgL_arg2149z00_1171;

						{	/* Unsafe/crc.scm 258 */
							obj_t BgL_list2150z00_1172;

							{	/* Unsafe/crc.scm 258 */
								obj_t BgL_arg2152z00_1174;

								{	/* Unsafe/crc.scm 258 */
									obj_t BgL_arg2154z00_1176;

									BgL_arg2154z00_1176 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2152z00_1174 =
										MAKE_PAIR(BINT(((long) 72)), BgL_arg2154z00_1176);
								}
								BgL_list2150z00_1172 =
									MAKE_PAIR(BINT(((long) 9)), BgL_arg2152z00_1174);
							}
							BgL_arg2149z00_1171 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 7)),
								BgL_list2150z00_1172);
						}
						BgL_arg1987z00_1027 =
							MAKE_PAIR(BINT(((long) 7)), BgL_arg2149z00_1171);
					}
					{	/* Unsafe/crc.scm 259 */
						obj_t BgL_arg2155z00_1177;

						obj_t BgL_arg2156z00_1178;

						BgL_arg2155z00_1177 = BGl_symbol3168z00zz__crcz00;
						{	/* Unsafe/crc.scm 259 */
							obj_t BgL_list2157z00_1179;

							{	/* Unsafe/crc.scm 259 */
								obj_t BgL_arg2159z00_1181;

								{	/* Unsafe/crc.scm 259 */
									obj_t BgL_arg2161z00_1183;

									BgL_arg2161z00_1183 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2159z00_1181 =
										MAKE_PAIR(BINT(((long) 224)), BgL_arg2161z00_1183);
								}
								BgL_list2157z00_1179 =
									MAKE_PAIR(BINT(((long) 7)), BgL_arg2159z00_1181);
							}
							BgL_arg2156z00_1178 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 8)),
								BgL_list2157z00_1179);
						}
						BgL_arg1988z00_1028 =
							MAKE_PAIR(BgL_arg2155z00_1177, BgL_arg2156z00_1178);
					}
					{	/* Unsafe/crc.scm 260 */
						obj_t BgL_arg2162z00_1184;

						obj_t BgL_arg2163z00_1185;

						BgL_arg2162z00_1184 = BGl_symbol3170z00zz__crcz00;
						{	/* Unsafe/crc.scm 260 */
							obj_t BgL_list2164z00_1186;

							{	/* Unsafe/crc.scm 260 */
								obj_t BgL_arg2166z00_1188;

								{	/* Unsafe/crc.scm 260 */
									obj_t BgL_arg2168z00_1190;

									BgL_arg2168z00_1190 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2166z00_1188 =
										MAKE_PAIR(BINT(((long) 177)), BgL_arg2168z00_1190);
								}
								BgL_list2164z00_1186 =
									MAKE_PAIR(BINT(((long) 141)), BgL_arg2166z00_1188);
							}
							BgL_arg2163z00_1185 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 8)),
								BgL_list2164z00_1186);
						}
						BgL_arg1989z00_1029 =
							MAKE_PAIR(BgL_arg2162z00_1184, BgL_arg2163z00_1185);
					}
					{	/* Unsafe/crc.scm 261 */
						obj_t BgL_arg2169z00_1191;

						obj_t BgL_arg2170z00_1192;

						BgL_arg2169z00_1191 = BGl_symbol3172z00zz__crcz00;
						{	/* Unsafe/crc.scm 261 */
							obj_t BgL_list2171z00_1193;

							{	/* Unsafe/crc.scm 261 */
								obj_t BgL_arg2173z00_1195;

								{	/* Unsafe/crc.scm 261 */
									obj_t BgL_arg2175z00_1197;

									BgL_arg2175z00_1197 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2173z00_1195 =
										MAKE_PAIR(BINT(((long) 140)), BgL_arg2175z00_1197);
								}
								BgL_list2171z00_1193 =
									MAKE_PAIR(BINT(((long) 49)), BgL_arg2173z00_1195);
							}
							BgL_arg2170z00_1192 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 8)),
								BgL_list2171z00_1193);
						}
						BgL_arg1990z00_1030 =
							MAKE_PAIR(BgL_arg2169z00_1191, BgL_arg2170z00_1192);
					}
					{	/* Unsafe/crc.scm 262 */
						obj_t BgL_arg2177z00_1199;

						{	/* Unsafe/crc.scm 262 */
							obj_t BgL_list2178z00_1200;

							{	/* Unsafe/crc.scm 262 */
								obj_t BgL_arg2180z00_1202;

								{	/* Unsafe/crc.scm 262 */
									obj_t BgL_arg2182z00_1204;

									BgL_arg2182z00_1204 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2180z00_1202 =
										MAKE_PAIR(BINT(((long) 171)), BgL_arg2182z00_1204);
								}
								BgL_list2178z00_1200 =
									MAKE_PAIR(BINT(((long) 213)), BgL_arg2180z00_1202);
							}
							BgL_arg2177z00_1199 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 8)),
								BgL_list2178z00_1200);
						}
						BgL_arg1991z00_1031 =
							MAKE_PAIR(BINT(((long) 8)), BgL_arg2177z00_1199);
					}
					{	/* Unsafe/crc.scm 263 */
						obj_t BgL_arg2183z00_1205;

						obj_t BgL_arg2184z00_1206;

						BgL_arg2183z00_1205 = BGl_symbol3174z00zz__crcz00;
						{	/* Unsafe/crc.scm 263 */
							obj_t BgL_list2185z00_1207;

							{	/* Unsafe/crc.scm 263 */
								obj_t BgL_arg2187z00_1209;

								{	/* Unsafe/crc.scm 263 */
									obj_t BgL_arg2189z00_1211;

									BgL_arg2189z00_1211 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2187z00_1209 =
										MAKE_PAIR(BINT(((long) 184)), BgL_arg2189z00_1211);
								}
								BgL_list2185z00_1207 =
									MAKE_PAIR(BINT(((long) 29)), BgL_arg2187z00_1209);
							}
							BgL_arg2184z00_1206 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 8)),
								BgL_list2185z00_1207);
						}
						BgL_arg1992z00_1032 =
							MAKE_PAIR(BgL_arg2183z00_1205, BgL_arg2184z00_1206);
					}
					{	/* Unsafe/crc.scm 264 */
						obj_t BgL_arg2191z00_1213;

						{	/* Unsafe/crc.scm 264 */
							obj_t BgL_list2192z00_1214;

							{	/* Unsafe/crc.scm 264 */
								obj_t BgL_arg2194z00_1216;

								{	/* Unsafe/crc.scm 264 */
									obj_t BgL_arg2196z00_1218;

									BgL_arg2196z00_1218 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2194z00_1216 =
										MAKE_PAIR(BINT(((long) 817)), BgL_arg2196z00_1218);
								}
								BgL_list2192z00_1214 =
									MAKE_PAIR(BINT(((long) 563)), BgL_arg2194z00_1216);
							}
							BgL_arg2191z00_1213 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 10)),
								BgL_list2192z00_1214);
						}
						BgL_arg1993z00_1033 =
							MAKE_PAIR(BINT(((long) 10)), BgL_arg2191z00_1213);
					}
					{	/* Unsafe/crc.scm 265 */
						obj_t BgL_arg2198z00_1220;

						{	/* Unsafe/crc.scm 265 */
							obj_t BgL_list2199z00_1221;

							{	/* Unsafe/crc.scm 265 */
								obj_t BgL_arg2203z00_1223;

								{	/* Unsafe/crc.scm 265 */
									obj_t BgL_arg2205z00_1225;

									BgL_arg2205z00_1225 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2203z00_1223 =
										MAKE_PAIR(BINT(((long) 1294)), BgL_arg2205z00_1225);
								}
								BgL_list2199z00_1221 =
									MAKE_PAIR(BINT(((long) 901)), BgL_arg2203z00_1223);
							}
							BgL_arg2198z00_1220 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 11)),
								BgL_list2199z00_1221);
						}
						BgL_arg1994z00_1034 =
							MAKE_PAIR(BINT(((long) 11)), BgL_arg2198z00_1220);
					}
					{	/* Unsafe/crc.scm 266 */
						obj_t BgL_arg2207z00_1227;

						{	/* Unsafe/crc.scm 266 */
							obj_t BgL_list2208z00_1228;

							{	/* Unsafe/crc.scm 266 */
								obj_t BgL_arg2210z00_1230;

								{	/* Unsafe/crc.scm 266 */
									obj_t BgL_arg2212z00_1232;

									BgL_arg2212z00_1232 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2210z00_1230 =
										MAKE_PAIR(BINT(((long) 3841)), BgL_arg2212z00_1232);
								}
								BgL_list2208z00_1228 =
									MAKE_PAIR(BINT(((long) 2063)), BgL_arg2210z00_1230);
							}
							BgL_arg2207z00_1227 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 12)),
								BgL_list2208z00_1228);
						}
						BgL_arg1995z00_1035 =
							MAKE_PAIR(BINT(((long) 12)), BgL_arg2207z00_1227);
					}
					{	/* Unsafe/crc.scm 267 */
						obj_t BgL_arg2213z00_1233;

						obj_t BgL_arg2214z00_1234;

						BgL_arg2213z00_1233 = BGl_symbol3176z00zz__crcz00;
						{	/* Unsafe/crc.scm 267 */
							obj_t BgL_list2215z00_1235;

							{	/* Unsafe/crc.scm 267 */
								obj_t BgL_arg2217z00_1237;

								{	/* Unsafe/crc.scm 267 */
									obj_t BgL_arg2223z00_1239;

									BgL_arg2223z00_1239 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2217z00_1237 =
										MAKE_PAIR(BINT(((long) 19665)), BgL_arg2223z00_1239);
								}
								BgL_list2215z00_1235 =
									MAKE_PAIR(BINT(((long) 17817)), BgL_arg2217z00_1237);
							}
							BgL_arg2214z00_1234 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 15)),
								BgL_list2215z00_1235);
						}
						BgL_arg1996z00_1036 =
							MAKE_PAIR(BgL_arg2213z00_1233, BgL_arg2214z00_1234);
					}
					{	/* Unsafe/crc.scm 268 */
						obj_t BgL_arg2224z00_1240;

						obj_t BgL_arg2226z00_1241;

						BgL_arg2224z00_1240 = BGl_symbol3178z00zz__crcz00;
						{	/* Unsafe/crc.scm 268 */
							obj_t BgL_arg2234z00_1244;

							{	/* Unsafe/crc.scm 268 */
								obj_t BgL_arg2239z00_1249;

								obj_t BgL_arg2240z00_1250;

								BgL_arg2239z00_1249 = BGl_symbol3180z00zz__crcz00;
								{	/* Unsafe/crc.scm 268 */
									obj_t BgL_list2241z00_1251;

									{	/* Unsafe/crc.scm 268 */
										obj_t BgL_arg2243z00_1253;

										BgL_arg2243z00_1253 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2241z00_1251 =
											MAKE_PAIR(BGl_llong3182z00zz__crcz00,
											BgL_arg2243z00_1253);
									}
									BgL_arg2240z00_1250 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_llong3183z00zz__crcz00, BgL_list2241z00_1251);
								}
								BgL_arg2234z00_1244 =
									MAKE_PAIR(BgL_arg2239z00_1249, BgL_arg2240z00_1250);
							}
							{	/* Unsafe/crc.scm 268 */
								obj_t BgL_list2236z00_1246;

								{	/* Unsafe/crc.scm 268 */
									obj_t BgL_arg2237z00_1247;

									{	/* Unsafe/crc.scm 268 */
										obj_t BgL_arg2238z00_1248;

										BgL_arg2238z00_1248 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2237z00_1247 =
											MAKE_PAIR(BgL_arg2234z00_1244, BgL_arg2238z00_1248);
									}
									BgL_list2236z00_1246 =
										MAKE_PAIR(BGl_llong3184z00zz__crcz00, BgL_arg2237z00_1247);
								}
								BgL_arg2226z00_1241 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 64)),
									BgL_list2236z00_1246);
						}}
						BgL_arg1998z00_1037 =
							MAKE_PAIR(BgL_arg2224z00_1240, BgL_arg2226z00_1241);
					}
					{	/* Unsafe/crc.scm 269 */
						obj_t BgL_arg2244z00_1254;

						obj_t BgL_arg2245z00_1255;

						BgL_arg2244z00_1254 = BGl_symbol3185z00zz__crcz00;
						{	/* Unsafe/crc.scm 269 */
							obj_t BgL_arg2248z00_1258;

							{	/* Unsafe/crc.scm 271 */
								obj_t BgL_arg2253z00_1263;

								obj_t BgL_arg2255z00_1264;

								BgL_arg2253z00_1263 = BGl_symbol3180z00zz__crcz00;
								{	/* Unsafe/crc.scm 271 */
									obj_t BgL_list2256z00_1265;

									{	/* Unsafe/crc.scm 271 */
										obj_t BgL_arg2259z00_1267;

										BgL_arg2259z00_1267 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2256z00_1265 =
											MAKE_PAIR(BGl_llong3187z00zz__crcz00,
											BgL_arg2259z00_1267);
									}
									BgL_arg2255z00_1264 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_llong3183z00zz__crcz00, BgL_list2256z00_1265);
								}
								BgL_arg2248z00_1258 =
									MAKE_PAIR(BgL_arg2253z00_1263, BgL_arg2255z00_1264);
							}
							{	/* Unsafe/crc.scm 269 */
								obj_t BgL_list2250z00_1260;

								{	/* Unsafe/crc.scm 269 */
									obj_t BgL_arg2251z00_1261;

									{	/* Unsafe/crc.scm 269 */
										obj_t BgL_arg2252z00_1262;

										BgL_arg2252z00_1262 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2251z00_1261 =
											MAKE_PAIR(BgL_arg2248z00_1258, BgL_arg2252z00_1262);
									}
									BgL_list2250z00_1260 =
										MAKE_PAIR(BGl_llong3188z00zz__crcz00, BgL_arg2251z00_1261);
								}
								BgL_arg2245z00_1255 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BINT(((long) 64)),
									BgL_list2250z00_1260);
						}}
						BgL_arg1999z00_1038 =
							MAKE_PAIR(BgL_arg2244z00_1254, BgL_arg2245z00_1255);
					}
					{	/* Unsafe/crc.scm 241 */
						obj_t BgL_list2001z00_1040;

						{	/* Unsafe/crc.scm 241 */
							obj_t BgL_arg2002z00_1041;

							{	/* Unsafe/crc.scm 241 */
								obj_t BgL_arg2003z00_1042;

								{	/* Unsafe/crc.scm 241 */
									obj_t BgL_arg2004z00_1043;

									{	/* Unsafe/crc.scm 241 */
										obj_t BgL_arg2005z00_1044;

										{	/* Unsafe/crc.scm 241 */
											obj_t BgL_arg2006z00_1045;

											{	/* Unsafe/crc.scm 241 */
												obj_t BgL_arg2007z00_1046;

												{	/* Unsafe/crc.scm 241 */
													obj_t BgL_arg2008z00_1047;

													{	/* Unsafe/crc.scm 241 */
														obj_t BgL_arg2009z00_1048;

														{	/* Unsafe/crc.scm 241 */
															obj_t BgL_arg2010z00_1049;

															{	/* Unsafe/crc.scm 241 */
																obj_t BgL_arg2011z00_1050;

																{	/* Unsafe/crc.scm 241 */
																	obj_t BgL_arg2012z00_1051;

																	{	/* Unsafe/crc.scm 241 */
																		obj_t BgL_arg2013z00_1052;

																		{	/* Unsafe/crc.scm 241 */
																			obj_t BgL_arg2015z00_1053;

																			{	/* Unsafe/crc.scm 241 */
																				obj_t BgL_arg2016z00_1054;

																				{	/* Unsafe/crc.scm 241 */
																					obj_t BgL_arg2017z00_1055;

																					{	/* Unsafe/crc.scm 241 */
																						obj_t BgL_arg2018z00_1056;

																						{	/* Unsafe/crc.scm 241 */
																							obj_t BgL_arg2019z00_1057;

																							{	/* Unsafe/crc.scm 241 */
																								obj_t BgL_arg2021z00_1058;

																								{	/* Unsafe/crc.scm 241 */
																									obj_t BgL_arg2022z00_1059;

																									{	/* Unsafe/crc.scm 241 */
																										obj_t BgL_arg2023z00_1060;

																										{	/* Unsafe/crc.scm 241 */
																											obj_t BgL_arg2024z00_1061;

																											{	/* Unsafe/crc.scm 241 */
																												obj_t
																													BgL_arg2025z00_1062;
																												{	/* Unsafe/crc.scm 241 */
																													obj_t
																														BgL_arg2027z00_1063;
																													{	/* Unsafe/crc.scm 241 */
																														obj_t
																															BgL_arg2028z00_1064;
																														{	/* Unsafe/crc.scm 241 */
																															obj_t
																																BgL_arg2029z00_1065;
																															BgL_arg2029z00_1065
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2028z00_1064
																																=
																																MAKE_PAIR
																																(BgL_arg1999z00_1038,
																																BgL_arg2029z00_1065);
																														}
																														BgL_arg2027z00_1063
																															=
																															MAKE_PAIR
																															(BgL_arg1998z00_1037,
																															BgL_arg2028z00_1064);
																													}
																													BgL_arg2025z00_1062 =
																														MAKE_PAIR
																														(BgL_arg1996z00_1036,
																														BgL_arg2027z00_1063);
																												}
																												BgL_arg2024z00_1061 =
																													MAKE_PAIR
																													(BgL_arg1995z00_1035,
																													BgL_arg2025z00_1062);
																											}
																											BgL_arg2023z00_1060 =
																												MAKE_PAIR
																												(BgL_arg1994z00_1034,
																												BgL_arg2024z00_1061);
																										}
																										BgL_arg2022z00_1059 =
																											MAKE_PAIR
																											(BgL_arg1993z00_1033,
																											BgL_arg2023z00_1060);
																									}
																									BgL_arg2021z00_1058 =
																										MAKE_PAIR
																										(BgL_arg1992z00_1032,
																										BgL_arg2022z00_1059);
																								}
																								BgL_arg2019z00_1057 =
																									MAKE_PAIR(BgL_arg1991z00_1031,
																									BgL_arg2021z00_1058);
																							}
																							BgL_arg2018z00_1056 =
																								MAKE_PAIR(BgL_arg1990z00_1030,
																								BgL_arg2019z00_1057);
																						}
																						BgL_arg2017z00_1055 =
																							MAKE_PAIR(BgL_arg1989z00_1029,
																							BgL_arg2018z00_1056);
																					}
																					BgL_arg2016z00_1054 =
																						MAKE_PAIR(BgL_arg1988z00_1028,
																						BgL_arg2017z00_1055);
																				}
																				BgL_arg2015z00_1053 =
																					MAKE_PAIR(BgL_arg1987z00_1027,
																					BgL_arg2016z00_1054);
																			}
																			BgL_arg2013z00_1052 =
																				MAKE_PAIR(BgL_arg1986z00_1026,
																				BgL_arg2015z00_1053);
																		}
																		BgL_arg2012z00_1051 =
																			MAKE_PAIR(BgL_arg1985z00_1025,
																			BgL_arg2013z00_1052);
																	}
																	BgL_arg2011z00_1050 =
																		MAKE_PAIR(BgL_arg1984z00_1024,
																		BgL_arg2012z00_1051);
																}
																BgL_arg2010z00_1049 =
																	MAKE_PAIR(BgL_arg1983z00_1023,
																	BgL_arg2011z00_1050);
															}
															BgL_arg2009z00_1048 =
																MAKE_PAIR(BgL_arg1982z00_1022,
																BgL_arg2010z00_1049);
														}
														BgL_arg2008z00_1047 =
															MAKE_PAIR(BgL_arg1981z00_1021,
															BgL_arg2009z00_1048);
													}
													BgL_arg2007z00_1046 =
														MAKE_PAIR(BgL_arg1980z00_1020, BgL_arg2008z00_1047);
												}
												BgL_arg2006z00_1045 =
													MAKE_PAIR(BgL_arg1979z00_1019, BgL_arg2007z00_1046);
											}
											BgL_arg2005z00_1044 =
												MAKE_PAIR(BgL_arg1977z00_1018, BgL_arg2006z00_1045);
										}
										BgL_arg2004z00_1043 =
											MAKE_PAIR(BgL_arg1976z00_1017, BgL_arg2005z00_1044);
									}
									BgL_arg2003z00_1042 =
										MAKE_PAIR(BgL_arg1975z00_1016, BgL_arg2004z00_1043);
								}
								BgL_arg2002z00_1041 =
									MAKE_PAIR(BgL_arg1974z00_1015, BgL_arg2003z00_1042);
							}
							BgL_list2001z00_1040 =
								MAKE_PAIR(BgL_arg1973z00_1014, BgL_arg2002z00_1041);
						}
						BgL_arg1961z00_1003 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1972z00_1013,
							BgL_list2001z00_1040);
				}}
				return (BGl_za2crcsza2z00zz__crcz00 =
					MAKE_PAIR(BgL_arg1960z00_1002, BgL_arg1961z00_1003), BUNSPEC);
			}
		}
	}



/* crc-long */
	BGL_EXPORTED_DEF long BGl_crczd2longzd2zz__crcz00(unsigned char BgL_cz00_1,
		long BgL_crcz00_2, long BgL_polyz00_3, long BgL_lenz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 68 */
			{

				if ((BgL_lenz00_4 >= ((long) 8)))
					{	/* Unsafe/crc.scm 74 */
						{	/* Unsafe/crc.scm 74 */
							long BgL_mz00_5848;

							BgL_mz00_5848 =
								(((long) 1) << (int) ((BgL_lenz00_4 - ((long) 1))));
							{	/* Unsafe/crc.scm 74 */

								{
									long BgL_iz00_5850;

									long BgL_crcz00_5851;

									BgL_iz00_5850 = ((long) 0);
									BgL_crcz00_5851 =
										(BgL_crcz00_2 ^
										(((unsigned char) (BgL_cz00_1)) <<
											(int) ((BgL_lenz00_4 - ((long) 8)))));
								BgL_loopz00_5849:
									if ((BgL_iz00_5850 == ((long) 8)))
										{	/* Unsafe/crc.scm 74 */
											return BgL_crcz00_5851;
										}
									else
										{
											long BgL_crcz00_6337;

											long BgL_iz00_6335;

											BgL_iz00_6335 = (BgL_iz00_5850 + ((long) 1));
											BgL_crcz00_6337 =
												(
												(((BgL_mz00_5848 & BgL_crcz00_5851) >>
														(int) (
															(BgL_lenz00_4 - ((long) 1)))) * BgL_polyz00_3) ^
												(BgL_crcz00_5851 << (int) (((long) 1))));
											BgL_crcz00_5851 = BgL_crcz00_6337;
											BgL_iz00_5850 = BgL_iz00_6335;
											goto BgL_loopz00_5849;
										}
								}
							}
						}
					}
				else
					{	/* Unsafe/crc.scm 74 */
						{	/* Unsafe/crc.scm 74 */
							long BgL_mz00_5852;

							BgL_mz00_5852 =
								(((long) 1) << (int) ((BgL_lenz00_4 - ((long) 1))));
							{	/* Unsafe/crc.scm 74 */

								{
									long BgL_iz00_5854;

									long BgL_crcz00_5855;

									long BgL_shiftedzd2valuezd2_5856;

									BgL_iz00_5854 = ((long) 0);
									BgL_crcz00_5855 = BgL_crcz00_2;
									BgL_shiftedzd2valuezd2_5856 =
										(((unsigned char) (BgL_cz00_1)) << (int) (BgL_lenz00_4));
								BgL_loopz00_5853:
									if ((BgL_iz00_5854 == ((long) 8)))
										{	/* Unsafe/crc.scm 74 */
											return BgL_crcz00_5855;
										}
									else
										{	/* Unsafe/crc.scm 74 */
											long BgL_crc2z00_5857;

											BgL_crc2z00_5857 =
												(BgL_crcz00_5855 ^
												(BgL_mz00_5852 &
													(BgL_shiftedzd2valuezd2_5856 >> (int) (((long) 8)))));
											{	/* Unsafe/crc.scm 74 */

												{
													long BgL_shiftedzd2valuezd2_6372;

													long BgL_crcz00_6363;

													long BgL_iz00_6361;

													BgL_iz00_6361 = (BgL_iz00_5854 + ((long) 1));
													BgL_crcz00_6363 =
														(
														(((BgL_mz00_5852 & BgL_crc2z00_5857) >>
																(int) (
																	(BgL_lenz00_4 -
																		((long) 1)))) *
															BgL_polyz00_3) ^ (BgL_crc2z00_5857 <<
															(int) (((long) 1))));
													BgL_shiftedzd2valuezd2_6372 =
														(BgL_shiftedzd2valuezd2_5856 << (int) (((long) 1)));
													BgL_shiftedzd2valuezd2_5856 =
														BgL_shiftedzd2valuezd2_6372;
													BgL_crcz00_5855 = BgL_crcz00_6363;
													BgL_iz00_5854 = BgL_iz00_6361;
													goto BgL_loopz00_5853;
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



/* _crc-long */
	obj_t BGl__crczd2longzd2zz__crcz00(obj_t BgL_envz00_5688, obj_t BgL_cz00_5689,
		obj_t BgL_crcz00_5690, obj_t BgL_polyz00_5691, obj_t BgL_lenz00_5692)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 68 */
			{	/* Unsafe/crc.scm 74 */
				long BgL_auxz00_6379;

				{	/* Unsafe/crc.scm 74 */
					long BgL_res3233z00_5874;

					{	/* Unsafe/crc.scm 74 */
						unsigned char BgL_cz00_5858;

						long BgL_crcz00_5859;

						long BgL_polyz00_5860;

						long BgL_lenz00_5861;

						{	/* Unsafe/crc.scm 74 */
							obj_t BgL_auxz00_6380;

							if (CHARP(BgL_cz00_5689))
								{	/* Unsafe/crc.scm 74 */
									BgL_auxz00_6380 = BgL_cz00_5689;
								}
							else
								{
									obj_t BgL_auxz00_6383;

									BgL_auxz00_6383 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 2985)), BGl_string3190z00zz__crcz00,
										BGl_string3191z00zz__crcz00, BgL_cz00_5689);
									FAILURE(BgL_auxz00_6383, BFALSE, BFALSE);
								}
							BgL_cz00_5858 = CCHAR(BgL_auxz00_6380);
						}
						{	/* Unsafe/crc.scm 74 */
							obj_t BgL_auxz00_6388;

							if (INTEGERP(BgL_crcz00_5690))
								{	/* Unsafe/crc.scm 74 */
									BgL_auxz00_6388 = BgL_crcz00_5690;
								}
							else
								{
									obj_t BgL_auxz00_6391;

									BgL_auxz00_6391 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 2985)), BGl_string3190z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_crcz00_5690);
									FAILURE(BgL_auxz00_6391, BFALSE, BFALSE);
								}
							BgL_crcz00_5859 = (long) CINT(BgL_auxz00_6388);
						}
						{	/* Unsafe/crc.scm 74 */
							obj_t BgL_auxz00_6396;

							if (INTEGERP(BgL_polyz00_5691))
								{	/* Unsafe/crc.scm 74 */
									BgL_auxz00_6396 = BgL_polyz00_5691;
								}
							else
								{
									obj_t BgL_auxz00_6399;

									BgL_auxz00_6399 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 2985)), BGl_string3190z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_polyz00_5691);
									FAILURE(BgL_auxz00_6399, BFALSE, BFALSE);
								}
							BgL_polyz00_5860 = (long) CINT(BgL_auxz00_6396);
						}
						{	/* Unsafe/crc.scm 74 */
							obj_t BgL_auxz00_6404;

							if (INTEGERP(BgL_lenz00_5692))
								{	/* Unsafe/crc.scm 74 */
									BgL_auxz00_6404 = BgL_lenz00_5692;
								}
							else
								{
									obj_t BgL_auxz00_6407;

									BgL_auxz00_6407 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 2985)), BGl_string3190z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_lenz00_5692);
									FAILURE(BgL_auxz00_6407, BFALSE, BFALSE);
								}
							BgL_lenz00_5861 = (long) CINT(BgL_auxz00_6404);
						}
						{

							if ((BgL_lenz00_5861 >= ((long) 8)))
								{	/* Unsafe/crc.scm 74 */
									{	/* Unsafe/crc.scm 74 */
										long BgL_mz00_5864;

										BgL_mz00_5864 =
											(((long) 1) << (int) ((BgL_lenz00_5861 - ((long) 1))));
										{	/* Unsafe/crc.scm 74 */

											{
												long BgL_iz00_5866;

												long BgL_crcz00_5867;

												BgL_iz00_5866 = ((long) 0);
												BgL_crcz00_5867 =
													(BgL_crcz00_5859 ^
													(((unsigned char) (BgL_cz00_5858)) <<
														(int) ((BgL_lenz00_5861 - ((long) 8)))));
											BgL_loopz00_5865:
												if ((BgL_iz00_5866 == ((long) 8)))
													{	/* Unsafe/crc.scm 74 */
														BgL_res3233z00_5874 = BgL_crcz00_5867;
													}
												else
													{
														long BgL_crcz00_6421;

														long BgL_iz00_6419;

														BgL_iz00_6419 = (BgL_iz00_5866 + ((long) 1));
														BgL_crcz00_6421 =
															(
															(((BgL_mz00_5864 & BgL_crcz00_5867) >>
																	(int) (
																		(BgL_lenz00_5861 -
																			((long) 1)))) *
																BgL_polyz00_5860) ^ (BgL_crcz00_5867 <<
																(int) (((long) 1))));
														BgL_crcz00_5867 = BgL_crcz00_6421;
														BgL_iz00_5866 = BgL_iz00_6419;
														goto BgL_loopz00_5865;
													}
											}
										}
									}
								}
							else
								{	/* Unsafe/crc.scm 74 */
									{	/* Unsafe/crc.scm 74 */
										long BgL_mz00_5868;

										BgL_mz00_5868 =
											(((long) 1) << (int) ((BgL_lenz00_5861 - ((long) 1))));
										{	/* Unsafe/crc.scm 74 */

											{
												long BgL_iz00_5870;

												long BgL_crcz00_5871;

												long BgL_shiftedzd2valuezd2_5872;

												BgL_iz00_5870 = ((long) 0);
												BgL_crcz00_5871 = BgL_crcz00_5859;
												BgL_shiftedzd2valuezd2_5872 =
													(
													((unsigned char) (BgL_cz00_5858)) <<
													(int) (BgL_lenz00_5861));
											BgL_loopz00_5869:
												if ((BgL_iz00_5870 == ((long) 8)))
													{	/* Unsafe/crc.scm 74 */
														BgL_res3233z00_5874 = BgL_crcz00_5871;
													}
												else
													{	/* Unsafe/crc.scm 74 */
														long BgL_crc2z00_5873;

														BgL_crc2z00_5873 =
															(BgL_crcz00_5871 ^
															(BgL_mz00_5868 &
																(BgL_shiftedzd2valuezd2_5872 >>
																	(int) (((long) 8)))));
														{	/* Unsafe/crc.scm 74 */

															{
																long BgL_shiftedzd2valuezd2_6456;

																long BgL_crcz00_6447;

																long BgL_iz00_6445;

																BgL_iz00_6445 = (BgL_iz00_5870 + ((long) 1));
																BgL_crcz00_6447 =
																	(
																	(((BgL_mz00_5868 & BgL_crc2z00_5873) >>
																			(int) (
																				(BgL_lenz00_5861 -
																					((long) 1)))) *
																		BgL_polyz00_5860) ^ (BgL_crc2z00_5873 <<
																		(int) (((long) 1))));
																BgL_shiftedzd2valuezd2_6456 =
																	(BgL_shiftedzd2valuezd2_5872 << (int) (((long)
																			1)));
																BgL_shiftedzd2valuezd2_5872 =
																	BgL_shiftedzd2valuezd2_6456;
																BgL_crcz00_5871 = BgL_crcz00_6447;
																BgL_iz00_5870 = BgL_iz00_6445;
																goto BgL_loopz00_5869;
															}
														}
													}
											}
										}
									}
								}
						}
					}
					BgL_auxz00_6379 = BgL_res3233z00_5874;
				}
				return BINT(BgL_auxz00_6379);
			}
		}
	}



/* crc-elong */
	BGL_EXPORTED_DEF long BGl_crczd2elongzd2zz__crcz00(unsigned char BgL_cz00_5,
		long BgL_crcz00_6, long BgL_polyz00_7, long BgL_lenz00_8)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 119 */
			if ((BgL_lenz00_8 >= ((long) 8)))
				{	/* Unsafe/crc.scm 120 */
					long BgL_octetz00_5875;

					BgL_octetz00_5875 = ((unsigned char) (BgL_cz00_5));
					{	/* Unsafe/crc.scm 120 */
						long BgL_valuez00_5876;

						long BgL_mz00_5877;

						{	/* Unsafe/crc.scm 120 */
							long BgL_arg2301z00_5878;

							long BgL_arg2302z00_5879;

							BgL_arg2301z00_5878 = LONG_TO_ELONG(BgL_octetz00_5875);
							BgL_arg2302z00_5879 = (BgL_lenz00_8 - ((long) 8));
							BgL_valuez00_5876 =
								(BgL_arg2301z00_5878 << (int) (BgL_arg2302z00_5879));
						}
						BgL_mz00_5877 = (((long) 1) << (int) ((BgL_lenz00_8 - ((long) 1))));
						{
							long BgL_iz00_5881;

							long BgL_crcz00_5882;

							BgL_iz00_5881 = ((long) 0);
							BgL_crcz00_5882 = (BgL_crcz00_6 ^ BgL_valuez00_5876);
						BgL_loopz00_5880:
							if ((BgL_iz00_5881 == ((long) 8)))
								{	/* Unsafe/crc.scm 120 */
									return BgL_crcz00_5882;
								}
							else
								{	/* Unsafe/crc.scm 120 */
									long BgL_newzd2crczd2_5883;

									BgL_newzd2crczd2_5883 =
										(BgL_crcz00_5882 << (int) (((long) 1)));
									if ((((long) 0) == (BgL_mz00_5877 & BgL_crcz00_5882)))
										{
											long BgL_crcz00_6484;

											long BgL_iz00_6482;

											BgL_iz00_6482 = (BgL_iz00_5881 + ((long) 1));
											BgL_crcz00_6484 = BgL_newzd2crczd2_5883;
											BgL_crcz00_5882 = BgL_crcz00_6484;
											BgL_iz00_5881 = BgL_iz00_6482;
											goto BgL_loopz00_5880;
										}
									else
										{
											long BgL_crcz00_6487;

											long BgL_iz00_6485;

											BgL_iz00_6485 = (BgL_iz00_5881 + ((long) 1));
											BgL_crcz00_6487 = (BgL_newzd2crczd2_5883 ^ BgL_polyz00_7);
											BgL_crcz00_5882 = BgL_crcz00_6487;
											BgL_iz00_5881 = BgL_iz00_6485;
											goto BgL_loopz00_5880;
										}
								}
						}
					}
				}
			else
				{	/* Unsafe/crc.scm 120 */
					long BgL_arg2305z00_5884;

					{	/* Unsafe/crc.scm 120 */
						long BgL_arg2306z00_5885;

						long BgL_arg2307z00_5886;

						{	/* Unsafe/crc.scm 120 */
							long BgL_res3017z00_5887;

							{	/* Unsafe/crc.scm 120 */
								long BgL_auxz00_6490;

								{	/* Unsafe/crc.scm 120 */
									long BgL_auxz00_6491;

									BgL_auxz00_6491 = ELONG_TO_LONG(BgL_crcz00_6);
									BgL_auxz00_6490 = ELONG_TO_LONG(BgL_auxz00_6491);
								}
								BgL_res3017z00_5887 = ELONG_TO_LONG(BgL_auxz00_6490);
							}
							BgL_arg2306z00_5885 = BgL_res3017z00_5887;
						}
						{	/* Unsafe/crc.scm 120 */
							long BgL_res3018z00_5888;

							{	/* Unsafe/crc.scm 120 */
								long BgL_auxz00_6495;

								{	/* Unsafe/crc.scm 120 */
									long BgL_auxz00_6496;

									BgL_auxz00_6496 = ELONG_TO_LONG(BgL_polyz00_7);
									BgL_auxz00_6495 = ELONG_TO_LONG(BgL_auxz00_6496);
								}
								BgL_res3018z00_5888 = ELONG_TO_LONG(BgL_auxz00_6495);
							}
							BgL_arg2307z00_5886 = BgL_res3018z00_5888;
						}
						{

							if ((BgL_lenz00_8 >= ((long) 8)))
								{	/* Unsafe/crc.scm 120 */
									{	/* Unsafe/crc.scm 120 */
										long BgL_mz00_5891;

										BgL_mz00_5891 =
											(((long) 1) << (int) ((BgL_lenz00_8 - ((long) 1))));
										{	/* Unsafe/crc.scm 120 */

											{
												long BgL_iz00_5893;

												long BgL_crcz00_5894;

												BgL_iz00_5893 = ((long) 0);
												BgL_crcz00_5894 =
													(BgL_arg2306z00_5885 ^
													(((unsigned char) (BgL_cz00_5)) <<
														(int) ((BgL_lenz00_8 - ((long) 8)))));
											BgL_loopz00_5892:
												if ((BgL_iz00_5893 == ((long) 8)))
													{	/* Unsafe/crc.scm 120 */
														BgL_arg2305z00_5884 = BgL_crcz00_5894;
													}
												else
													{
														long BgL_crcz00_6509;

														long BgL_iz00_6507;

														BgL_iz00_6507 = (BgL_iz00_5893 + ((long) 1));
														BgL_crcz00_6509 =
															(
															(((BgL_mz00_5891 & BgL_crcz00_5894) >>
																	(int) (
																		(BgL_lenz00_8 -
																			((long) 1)))) *
																BgL_arg2307z00_5886) ^ (BgL_crcz00_5894 <<
																(int) (((long) 1))));
														BgL_crcz00_5894 = BgL_crcz00_6509;
														BgL_iz00_5893 = BgL_iz00_6507;
														goto BgL_loopz00_5892;
													}
											}
										}
									}
								}
							else
								{	/* Unsafe/crc.scm 120 */
									{	/* Unsafe/crc.scm 120 */
										long BgL_mz00_5895;

										BgL_mz00_5895 =
											(((long) 1) << (int) ((BgL_lenz00_8 - ((long) 1))));
										{	/* Unsafe/crc.scm 120 */

											{
												long BgL_iz00_5897;

												long BgL_crcz00_5898;

												long BgL_shiftedzd2valuezd2_5899;

												BgL_iz00_5897 = ((long) 0);
												BgL_crcz00_5898 = BgL_arg2306z00_5885;
												BgL_shiftedzd2valuezd2_5899 =
													(
													((unsigned char) (BgL_cz00_5)) <<
													(int) (BgL_lenz00_8));
											BgL_loopz00_5896:
												if ((BgL_iz00_5897 == ((long) 8)))
													{	/* Unsafe/crc.scm 120 */
														BgL_arg2305z00_5884 = BgL_crcz00_5898;
													}
												else
													{	/* Unsafe/crc.scm 120 */
														long BgL_crc2z00_5900;

														BgL_crc2z00_5900 =
															(BgL_crcz00_5898 ^
															(BgL_mz00_5895 &
																(BgL_shiftedzd2valuezd2_5899 >>
																	(int) (((long) 8)))));
														{	/* Unsafe/crc.scm 120 */

															{
																long BgL_shiftedzd2valuezd2_6544;

																long BgL_crcz00_6535;

																long BgL_iz00_6533;

																BgL_iz00_6533 = (BgL_iz00_5897 + ((long) 1));
																BgL_crcz00_6535 =
																	(
																	(((BgL_mz00_5895 & BgL_crc2z00_5900) >>
																			(int) (
																				(BgL_lenz00_8 -
																					((long) 1)))) *
																		BgL_arg2307z00_5886) ^ (BgL_crc2z00_5900 <<
																		(int) (((long) 1))));
																BgL_shiftedzd2valuezd2_6544 =
																	(BgL_shiftedzd2valuezd2_5899 << (int) (((long)
																			1)));
																BgL_shiftedzd2valuezd2_5899 =
																	BgL_shiftedzd2valuezd2_6544;
																BgL_crcz00_5898 = BgL_crcz00_6535;
																BgL_iz00_5897 = BgL_iz00_6533;
																goto BgL_loopz00_5896;
															}
														}
													}
											}
										}
									}
								}
						}
					}
					return LONG_TO_ELONG(BgL_arg2305z00_5884);
				}
		}
	}



/* _crc-elong */
	obj_t BGl__crczd2elongzd2zz__crcz00(obj_t BgL_envz00_5693,
		obj_t BgL_cz00_5694, obj_t BgL_crcz00_5695, obj_t BgL_polyz00_5696,
		obj_t BgL_lenz00_5697)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 119 */
			{	/* Unsafe/crc.scm 120 */
				long BgL_auxz00_6552;

				{	/* Unsafe/crc.scm 120 */
					unsigned char BgL_cz00_5901;

					long BgL_crcz00_5902;

					long BgL_polyz00_5903;

					long BgL_lenz00_5904;

					{	/* Unsafe/crc.scm 120 */
						obj_t BgL_auxz00_6553;

						if (CHARP(BgL_cz00_5694))
							{	/* Unsafe/crc.scm 120 */
								BgL_auxz00_6553 = BgL_cz00_5694;
							}
						else
							{
								obj_t BgL_auxz00_6556;

								BgL_auxz00_6556 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 4737)), BGl_string3193z00zz__crcz00,
									BGl_string3191z00zz__crcz00, BgL_cz00_5694);
								FAILURE(BgL_auxz00_6556, BFALSE, BFALSE);
							}
						BgL_cz00_5901 = CCHAR(BgL_auxz00_6553);
					}
					{	/* Unsafe/crc.scm 120 */
						obj_t BgL_auxz00_6561;

						if (ELONGP(BgL_crcz00_5695))
							{	/* Unsafe/crc.scm 120 */
								BgL_auxz00_6561 = BgL_crcz00_5695;
							}
						else
							{
								obj_t BgL_auxz00_6564;

								BgL_auxz00_6564 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 4737)), BGl_string3193z00zz__crcz00,
									BGl_string3194z00zz__crcz00, BgL_crcz00_5695);
								FAILURE(BgL_auxz00_6564, BFALSE, BFALSE);
							}
						BgL_crcz00_5902 = BELONG_TO_LONG(BgL_auxz00_6561);
					}
					{	/* Unsafe/crc.scm 120 */
						obj_t BgL_auxz00_6569;

						if (ELONGP(BgL_polyz00_5696))
							{	/* Unsafe/crc.scm 120 */
								BgL_auxz00_6569 = BgL_polyz00_5696;
							}
						else
							{
								obj_t BgL_auxz00_6572;

								BgL_auxz00_6572 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 4737)), BGl_string3193z00zz__crcz00,
									BGl_string3194z00zz__crcz00, BgL_polyz00_5696);
								FAILURE(BgL_auxz00_6572, BFALSE, BFALSE);
							}
						BgL_polyz00_5903 = BELONG_TO_LONG(BgL_auxz00_6569);
					}
					{	/* Unsafe/crc.scm 120 */
						obj_t BgL_auxz00_6577;

						if (INTEGERP(BgL_lenz00_5697))
							{	/* Unsafe/crc.scm 120 */
								BgL_auxz00_6577 = BgL_lenz00_5697;
							}
						else
							{
								obj_t BgL_auxz00_6580;

								BgL_auxz00_6580 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 4737)), BGl_string3193z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_lenz00_5697);
								FAILURE(BgL_auxz00_6580, BFALSE, BFALSE);
							}
						BgL_lenz00_5904 = (long) CINT(BgL_auxz00_6577);
					}
					if ((BgL_lenz00_5904 >= ((long) 8)))
						{	/* Unsafe/crc.scm 120 */
							long BgL_octetz00_5905;

							BgL_octetz00_5905 = ((unsigned char) (BgL_cz00_5901));
							{	/* Unsafe/crc.scm 120 */
								long BgL_valuez00_5906;

								long BgL_mz00_5907;

								{	/* Unsafe/crc.scm 120 */
									long BgL_arg2301z00_5908;

									long BgL_arg2302z00_5909;

									BgL_arg2301z00_5908 = LONG_TO_ELONG(BgL_octetz00_5905);
									BgL_arg2302z00_5909 = (BgL_lenz00_5904 - ((long) 8));
									BgL_valuez00_5906 =
										(BgL_arg2301z00_5908 << (int) (BgL_arg2302z00_5909));
								}
								BgL_mz00_5907 =
									(((long) 1) << (int) ((BgL_lenz00_5904 - ((long) 1))));
								{
									long BgL_iz00_5911;

									long BgL_crcz00_5912;

									BgL_iz00_5911 = ((long) 0);
									BgL_crcz00_5912 = (BgL_crcz00_5902 ^ BgL_valuez00_5906);
								BgL_loopz00_5910:
									if ((BgL_iz00_5911 == ((long) 8)))
										{	/* Unsafe/crc.scm 120 */
											BgL_auxz00_6552 = BgL_crcz00_5912;
										}
									else
										{	/* Unsafe/crc.scm 120 */
											long BgL_newzd2crczd2_5913;

											BgL_newzd2crczd2_5913 =
												(BgL_crcz00_5912 << (int) (((long) 1)));
											if ((((long) 0) == (BgL_mz00_5907 & BgL_crcz00_5912)))
												{
													long BgL_crcz00_6605;

													long BgL_iz00_6603;

													BgL_iz00_6603 = (BgL_iz00_5911 + ((long) 1));
													BgL_crcz00_6605 = BgL_newzd2crczd2_5913;
													BgL_crcz00_5912 = BgL_crcz00_6605;
													BgL_iz00_5911 = BgL_iz00_6603;
													goto BgL_loopz00_5910;
												}
											else
												{
													long BgL_crcz00_6608;

													long BgL_iz00_6606;

													BgL_iz00_6606 = (BgL_iz00_5911 + ((long) 1));
													BgL_crcz00_6608 =
														(BgL_newzd2crczd2_5913 ^ BgL_polyz00_5903);
													BgL_crcz00_5912 = BgL_crcz00_6608;
													BgL_iz00_5911 = BgL_iz00_6606;
													goto BgL_loopz00_5910;
												}
										}
								}
							}
						}
					else
						{	/* Unsafe/crc.scm 120 */
							long BgL_arg2305z00_5914;

							{	/* Unsafe/crc.scm 120 */
								long BgL_arg2306z00_5915;

								long BgL_arg2307z00_5916;

								{	/* Unsafe/crc.scm 120 */
									long BgL_res3017z00_5917;

									{	/* Unsafe/crc.scm 120 */
										long BgL_auxz00_6611;

										{	/* Unsafe/crc.scm 120 */
											long BgL_auxz00_6612;

											BgL_auxz00_6612 = ELONG_TO_LONG(BgL_crcz00_5902);
											BgL_auxz00_6611 = ELONG_TO_LONG(BgL_auxz00_6612);
										}
										BgL_res3017z00_5917 = ELONG_TO_LONG(BgL_auxz00_6611);
									}
									BgL_arg2306z00_5915 = BgL_res3017z00_5917;
								}
								{	/* Unsafe/crc.scm 120 */
									long BgL_res3018z00_5918;

									{	/* Unsafe/crc.scm 120 */
										long BgL_auxz00_6616;

										{	/* Unsafe/crc.scm 120 */
											long BgL_auxz00_6617;

											BgL_auxz00_6617 = ELONG_TO_LONG(BgL_polyz00_5903);
											BgL_auxz00_6616 = ELONG_TO_LONG(BgL_auxz00_6617);
										}
										BgL_res3018z00_5918 = ELONG_TO_LONG(BgL_auxz00_6616);
									}
									BgL_arg2307z00_5916 = BgL_res3018z00_5918;
								}
								{

									if ((BgL_lenz00_5904 >= ((long) 8)))
										{	/* Unsafe/crc.scm 120 */
											{	/* Unsafe/crc.scm 120 */
												long BgL_mz00_5921;

												BgL_mz00_5921 =
													(((long) 1) <<
													(int) ((BgL_lenz00_5904 - ((long) 1))));
												{	/* Unsafe/crc.scm 120 */

													{
														long BgL_iz00_5923;

														long BgL_crcz00_5924;

														BgL_iz00_5923 = ((long) 0);
														BgL_crcz00_5924 =
															(BgL_arg2306z00_5915 ^
															(((unsigned char) (BgL_cz00_5901)) <<
																(int) ((BgL_lenz00_5904 - ((long) 8)))));
													BgL_loopz00_5922:
														if ((BgL_iz00_5923 == ((long) 8)))
															{	/* Unsafe/crc.scm 120 */
																BgL_arg2305z00_5914 = BgL_crcz00_5924;
															}
														else
															{
																long BgL_crcz00_6630;

																long BgL_iz00_6628;

																BgL_iz00_6628 = (BgL_iz00_5923 + ((long) 1));
																BgL_crcz00_6630 =
																	(
																	(((BgL_mz00_5921 & BgL_crcz00_5924) >>
																			(int) (
																				(BgL_lenz00_5904 -
																					((long) 1)))) *
																		BgL_arg2307z00_5916) ^ (BgL_crcz00_5924 <<
																		(int) (((long) 1))));
																BgL_crcz00_5924 = BgL_crcz00_6630;
																BgL_iz00_5923 = BgL_iz00_6628;
																goto BgL_loopz00_5922;
															}
													}
												}
											}
										}
									else
										{	/* Unsafe/crc.scm 120 */
											{	/* Unsafe/crc.scm 120 */
												long BgL_mz00_5925;

												BgL_mz00_5925 =
													(((long) 1) <<
													(int) ((BgL_lenz00_5904 - ((long) 1))));
												{	/* Unsafe/crc.scm 120 */

													{
														long BgL_iz00_5927;

														long BgL_crcz00_5928;

														long BgL_shiftedzd2valuezd2_5929;

														BgL_iz00_5927 = ((long) 0);
														BgL_crcz00_5928 = BgL_arg2306z00_5915;
														BgL_shiftedzd2valuezd2_5929 =
															(
															((unsigned char) (BgL_cz00_5901)) <<
															(int) (BgL_lenz00_5904));
													BgL_loopz00_5926:
														if ((BgL_iz00_5927 == ((long) 8)))
															{	/* Unsafe/crc.scm 120 */
																BgL_arg2305z00_5914 = BgL_crcz00_5928;
															}
														else
															{	/* Unsafe/crc.scm 120 */
																long BgL_crc2z00_5930;

																BgL_crc2z00_5930 =
																	(BgL_crcz00_5928 ^
																	(BgL_mz00_5925 &
																		(BgL_shiftedzd2valuezd2_5929 >>
																			(int) (((long) 8)))));
																{	/* Unsafe/crc.scm 120 */

																	{
																		long BgL_shiftedzd2valuezd2_6665;

																		long BgL_crcz00_6656;

																		long BgL_iz00_6654;

																		BgL_iz00_6654 =
																			(BgL_iz00_5927 + ((long) 1));
																		BgL_crcz00_6656 =
																			(
																			(((BgL_mz00_5925 & BgL_crc2z00_5930) >>
																					(int) (
																						(BgL_lenz00_5904 -
																							((long) 1)))) *
																				BgL_arg2307z00_5916) ^ (BgL_crc2z00_5930
																				<< (int) (((long) 1))));
																		BgL_shiftedzd2valuezd2_6665 =
																			(BgL_shiftedzd2valuezd2_5929 <<
																			(int) (((long) 1)));
																		BgL_shiftedzd2valuezd2_5929 =
																			BgL_shiftedzd2valuezd2_6665;
																		BgL_crcz00_5928 = BgL_crcz00_6656;
																		BgL_iz00_5927 = BgL_iz00_6654;
																		goto BgL_loopz00_5926;
																	}
																}
															}
													}
												}
											}
										}
								}
							}
							BgL_auxz00_6552 = LONG_TO_ELONG(BgL_arg2305z00_5914);
						}
				}
				return make_belong(BgL_auxz00_6552);
			}
		}
	}



/* crc-llong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_crczd2llongzd2zz__crcz00(unsigned char
		BgL_cz00_9, BGL_LONGLONG_T BgL_crcz00_10, BGL_LONGLONG_T BgL_polyz00_11,
		long BgL_lenz00_12)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 139 */
			if ((BgL_lenz00_12 >= ((long) 8)))
				{	/* Unsafe/crc.scm 140 */
					long BgL_octetz00_5931;

					BgL_octetz00_5931 = ((unsigned char) (BgL_cz00_9));
					{	/* Unsafe/crc.scm 140 */
						BGL_LONGLONG_T BgL_valuez00_5932;

						BGL_LONGLONG_T BgL_mz00_5933;

						{	/* Unsafe/crc.scm 140 */
							BGL_LONGLONG_T BgL_arg2317z00_5934;

							long BgL_arg2318z00_5935;

							BgL_arg2317z00_5934 = LONG_TO_LLONG(BgL_octetz00_5931);
							BgL_arg2318z00_5935 = (BgL_lenz00_12 - ((long) 8));
							BgL_valuez00_5932 =
								(BgL_arg2317z00_5934 << (int) (BgL_arg2318z00_5935));
						}
						BgL_mz00_5933 =
							(((BGL_LONGLONG_T) 1) << (int) ((BgL_lenz00_12 - ((long) 1))));
						{
							long BgL_iz00_5937;

							BGL_LONGLONG_T BgL_crcz00_5938;

							BgL_iz00_5937 = ((long) 0);
							BgL_crcz00_5938 = (BgL_crcz00_10 ^ BgL_valuez00_5932);
						BgL_loopz00_5936:
							if ((BgL_iz00_5937 == ((long) 8)))
								{	/* Unsafe/crc.scm 140 */
									return BgL_crcz00_5938;
								}
							else
								{	/* Unsafe/crc.scm 140 */
									BGL_LONGLONG_T BgL_newzd2crczd2_5939;

									BgL_newzd2crczd2_5939 =
										(BgL_crcz00_5938 << (int) (((long) 1)));
									if (
										(((BGL_LONGLONG_T) 0) == (BgL_mz00_5933 & BgL_crcz00_5938)))
										{
											BGL_LONGLONG_T BgL_crcz00_6694;

											long BgL_iz00_6692;

											BgL_iz00_6692 = (BgL_iz00_5937 + ((long) 1));
											BgL_crcz00_6694 = BgL_newzd2crczd2_5939;
											BgL_crcz00_5938 = BgL_crcz00_6694;
											BgL_iz00_5937 = BgL_iz00_6692;
											goto BgL_loopz00_5936;
										}
									else
										{
											BGL_LONGLONG_T BgL_crcz00_6697;

											long BgL_iz00_6695;

											BgL_iz00_6695 = (BgL_iz00_5937 + ((long) 1));
											BgL_crcz00_6697 =
												(BgL_newzd2crczd2_5939 ^ BgL_polyz00_11);
											BgL_crcz00_5938 = BgL_crcz00_6697;
											BgL_iz00_5937 = BgL_iz00_6695;
											goto BgL_loopz00_5936;
										}
								}
						}
					}
				}
			else
				{	/* Unsafe/crc.scm 140 */
					long BgL_arg2321z00_5940;

					{	/* Unsafe/crc.scm 140 */
						long BgL_arg2322z00_5941;

						long BgL_arg2323z00_5942;

						BgL_arg2322z00_5941 = LLONG_TO_LONG(BgL_crcz00_10);
						BgL_arg2323z00_5942 = LLONG_TO_LONG(BgL_polyz00_11);
						{

							if ((BgL_lenz00_12 >= ((long) 8)))
								{	/* Unsafe/crc.scm 140 */
									{	/* Unsafe/crc.scm 140 */
										long BgL_mz00_5945;

										BgL_mz00_5945 =
											(((long) 1) << (int) ((BgL_lenz00_12 - ((long) 1))));
										{	/* Unsafe/crc.scm 140 */

											{
												long BgL_iz00_5947;

												long BgL_crcz00_5948;

												BgL_iz00_5947 = ((long) 0);
												BgL_crcz00_5948 =
													(BgL_arg2322z00_5941 ^
													(((unsigned char) (BgL_cz00_9)) <<
														(int) ((BgL_lenz00_12 - ((long) 8)))));
											BgL_loopz00_5946:
												if ((BgL_iz00_5947 == ((long) 8)))
													{	/* Unsafe/crc.scm 140 */
														BgL_arg2321z00_5940 = BgL_crcz00_5948;
													}
												else
													{
														long BgL_crcz00_6711;

														long BgL_iz00_6709;

														BgL_iz00_6709 = (BgL_iz00_5947 + ((long) 1));
														BgL_crcz00_6711 =
															(
															(((BgL_mz00_5945 & BgL_crcz00_5948) >>
																	(int) (
																		(BgL_lenz00_12 -
																			((long) 1)))) *
																BgL_arg2323z00_5942) ^ (BgL_crcz00_5948 <<
																(int) (((long) 1))));
														BgL_crcz00_5948 = BgL_crcz00_6711;
														BgL_iz00_5947 = BgL_iz00_6709;
														goto BgL_loopz00_5946;
													}
											}
										}
									}
								}
							else
								{	/* Unsafe/crc.scm 140 */
									{	/* Unsafe/crc.scm 140 */
										long BgL_mz00_5949;

										BgL_mz00_5949 =
											(((long) 1) << (int) ((BgL_lenz00_12 - ((long) 1))));
										{	/* Unsafe/crc.scm 140 */

											{
												long BgL_iz00_5951;

												long BgL_crcz00_5952;

												long BgL_shiftedzd2valuezd2_5953;

												BgL_iz00_5951 = ((long) 0);
												BgL_crcz00_5952 = BgL_arg2322z00_5941;
												BgL_shiftedzd2valuezd2_5953 =
													(
													((unsigned char) (BgL_cz00_9)) <<
													(int) (BgL_lenz00_12));
											BgL_loopz00_5950:
												if ((BgL_iz00_5951 == ((long) 8)))
													{	/* Unsafe/crc.scm 140 */
														BgL_arg2321z00_5940 = BgL_crcz00_5952;
													}
												else
													{	/* Unsafe/crc.scm 140 */
														long BgL_crc2z00_5954;

														BgL_crc2z00_5954 =
															(BgL_crcz00_5952 ^
															(BgL_mz00_5949 &
																(BgL_shiftedzd2valuezd2_5953 >>
																	(int) (((long) 8)))));
														{	/* Unsafe/crc.scm 140 */

															{
																long BgL_shiftedzd2valuezd2_6746;

																long BgL_crcz00_6737;

																long BgL_iz00_6735;

																BgL_iz00_6735 = (BgL_iz00_5951 + ((long) 1));
																BgL_crcz00_6737 =
																	(
																	(((BgL_mz00_5949 & BgL_crc2z00_5954) >>
																			(int) (
																				(BgL_lenz00_12 -
																					((long) 1)))) *
																		BgL_arg2323z00_5942) ^ (BgL_crc2z00_5954 <<
																		(int) (((long) 1))));
																BgL_shiftedzd2valuezd2_6746 =
																	(BgL_shiftedzd2valuezd2_5953 << (int) (((long)
																			1)));
																BgL_shiftedzd2valuezd2_5953 =
																	BgL_shiftedzd2valuezd2_6746;
																BgL_crcz00_5952 = BgL_crcz00_6737;
																BgL_iz00_5951 = BgL_iz00_6735;
																goto BgL_loopz00_5950;
															}
														}
													}
											}
										}
									}
								}
						}
					}
					return LONG_TO_LLONG(BgL_arg2321z00_5940);
				}
		}
	}



/* _crc-llong */
	obj_t BGl__crczd2llongzd2zz__crcz00(obj_t BgL_envz00_5698,
		obj_t BgL_cz00_5699, obj_t BgL_crcz00_5700, obj_t BgL_polyz00_5701,
		obj_t BgL_lenz00_5702)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 139 */
			{	/* Unsafe/crc.scm 140 */
				BGL_LONGLONG_T BgL_auxz00_6754;

				{	/* Unsafe/crc.scm 140 */
					unsigned char BgL_cz00_5955;

					BGL_LONGLONG_T BgL_crcz00_5956;

					BGL_LONGLONG_T BgL_polyz00_5957;

					long BgL_lenz00_5958;

					{	/* Unsafe/crc.scm 140 */
						obj_t BgL_auxz00_6755;

						if (CHARP(BgL_cz00_5699))
							{	/* Unsafe/crc.scm 140 */
								BgL_auxz00_6755 = BgL_cz00_5699;
							}
						else
							{
								obj_t BgL_auxz00_6758;

								BgL_auxz00_6758 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 5714)), BGl_string3195z00zz__crcz00,
									BGl_string3191z00zz__crcz00, BgL_cz00_5699);
								FAILURE(BgL_auxz00_6758, BFALSE, BFALSE);
							}
						BgL_cz00_5955 = CCHAR(BgL_auxz00_6755);
					}
					{	/* Unsafe/crc.scm 140 */
						obj_t BgL_auxz00_6763;

						if (LLONGP(BgL_crcz00_5700))
							{	/* Unsafe/crc.scm 140 */
								BgL_auxz00_6763 = BgL_crcz00_5700;
							}
						else
							{
								obj_t BgL_auxz00_6766;

								BgL_auxz00_6766 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 5714)), BGl_string3195z00zz__crcz00,
									BGl_string3196z00zz__crcz00, BgL_crcz00_5700);
								FAILURE(BgL_auxz00_6766, BFALSE, BFALSE);
							}
						BgL_crcz00_5956 = BLLONG_TO_LLONG(BgL_auxz00_6763);
					}
					{	/* Unsafe/crc.scm 140 */
						obj_t BgL_auxz00_6771;

						if (LLONGP(BgL_polyz00_5701))
							{	/* Unsafe/crc.scm 140 */
								BgL_auxz00_6771 = BgL_polyz00_5701;
							}
						else
							{
								obj_t BgL_auxz00_6774;

								BgL_auxz00_6774 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 5714)), BGl_string3195z00zz__crcz00,
									BGl_string3196z00zz__crcz00, BgL_polyz00_5701);
								FAILURE(BgL_auxz00_6774, BFALSE, BFALSE);
							}
						BgL_polyz00_5957 = BLLONG_TO_LLONG(BgL_auxz00_6771);
					}
					{	/* Unsafe/crc.scm 140 */
						obj_t BgL_auxz00_6779;

						if (INTEGERP(BgL_lenz00_5702))
							{	/* Unsafe/crc.scm 140 */
								BgL_auxz00_6779 = BgL_lenz00_5702;
							}
						else
							{
								obj_t BgL_auxz00_6782;

								BgL_auxz00_6782 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
									BINT(((long) 5714)), BGl_string3195z00zz__crcz00,
									BGl_string3192z00zz__crcz00, BgL_lenz00_5702);
								FAILURE(BgL_auxz00_6782, BFALSE, BFALSE);
							}
						BgL_lenz00_5958 = (long) CINT(BgL_auxz00_6779);
					}
					if ((BgL_lenz00_5958 >= ((long) 8)))
						{	/* Unsafe/crc.scm 140 */
							long BgL_octetz00_5959;

							BgL_octetz00_5959 = ((unsigned char) (BgL_cz00_5955));
							{	/* Unsafe/crc.scm 140 */
								BGL_LONGLONG_T BgL_valuez00_5960;

								BGL_LONGLONG_T BgL_mz00_5961;

								{	/* Unsafe/crc.scm 140 */
									BGL_LONGLONG_T BgL_arg2317z00_5962;

									long BgL_arg2318z00_5963;

									BgL_arg2317z00_5962 = LONG_TO_LLONG(BgL_octetz00_5959);
									BgL_arg2318z00_5963 = (BgL_lenz00_5958 - ((long) 8));
									BgL_valuez00_5960 =
										(BgL_arg2317z00_5962 << (int) (BgL_arg2318z00_5963));
								}
								BgL_mz00_5961 =
									(((BGL_LONGLONG_T) 1) <<
									(int) ((BgL_lenz00_5958 - ((long) 1))));
								{
									long BgL_iz00_5965;

									BGL_LONGLONG_T BgL_crcz00_5966;

									BgL_iz00_5965 = ((long) 0);
									BgL_crcz00_5966 = (BgL_crcz00_5956 ^ BgL_valuez00_5960);
								BgL_loopz00_5964:
									if ((BgL_iz00_5965 == ((long) 8)))
										{	/* Unsafe/crc.scm 140 */
											BgL_auxz00_6754 = BgL_crcz00_5966;
										}
									else
										{	/* Unsafe/crc.scm 140 */
											BGL_LONGLONG_T BgL_newzd2crczd2_5967;

											BgL_newzd2crczd2_5967 =
												(BgL_crcz00_5966 << (int) (((long) 1)));
											if (
												(((BGL_LONGLONG_T) 0) ==
													(BgL_mz00_5961 & BgL_crcz00_5966)))
												{
													BGL_LONGLONG_T BgL_crcz00_6807;

													long BgL_iz00_6805;

													BgL_iz00_6805 = (BgL_iz00_5965 + ((long) 1));
													BgL_crcz00_6807 = BgL_newzd2crczd2_5967;
													BgL_crcz00_5966 = BgL_crcz00_6807;
													BgL_iz00_5965 = BgL_iz00_6805;
													goto BgL_loopz00_5964;
												}
											else
												{
													BGL_LONGLONG_T BgL_crcz00_6810;

													long BgL_iz00_6808;

													BgL_iz00_6808 = (BgL_iz00_5965 + ((long) 1));
													BgL_crcz00_6810 =
														(BgL_newzd2crczd2_5967 ^ BgL_polyz00_5957);
													BgL_crcz00_5966 = BgL_crcz00_6810;
													BgL_iz00_5965 = BgL_iz00_6808;
													goto BgL_loopz00_5964;
												}
										}
								}
							}
						}
					else
						{	/* Unsafe/crc.scm 140 */
							long BgL_arg2321z00_5968;

							{	/* Unsafe/crc.scm 140 */
								long BgL_arg2322z00_5969;

								long BgL_arg2323z00_5970;

								BgL_arg2322z00_5969 = LLONG_TO_LONG(BgL_crcz00_5956);
								BgL_arg2323z00_5970 = LLONG_TO_LONG(BgL_polyz00_5957);
								{

									if ((BgL_lenz00_5958 >= ((long) 8)))
										{	/* Unsafe/crc.scm 140 */
											{	/* Unsafe/crc.scm 140 */
												long BgL_mz00_5973;

												BgL_mz00_5973 =
													(((long) 1) <<
													(int) ((BgL_lenz00_5958 - ((long) 1))));
												{	/* Unsafe/crc.scm 140 */

													{
														long BgL_iz00_5975;

														long BgL_crcz00_5976;

														BgL_iz00_5975 = ((long) 0);
														BgL_crcz00_5976 =
															(BgL_arg2322z00_5969 ^
															(((unsigned char) (BgL_cz00_5955)) <<
																(int) ((BgL_lenz00_5958 - ((long) 8)))));
													BgL_loopz00_5974:
														if ((BgL_iz00_5975 == ((long) 8)))
															{	/* Unsafe/crc.scm 140 */
																BgL_arg2321z00_5968 = BgL_crcz00_5976;
															}
														else
															{
																long BgL_crcz00_6824;

																long BgL_iz00_6822;

																BgL_iz00_6822 = (BgL_iz00_5975 + ((long) 1));
																BgL_crcz00_6824 =
																	(
																	(((BgL_mz00_5973 & BgL_crcz00_5976) >>
																			(int) (
																				(BgL_lenz00_5958 -
																					((long) 1)))) *
																		BgL_arg2323z00_5970) ^ (BgL_crcz00_5976 <<
																		(int) (((long) 1))));
																BgL_crcz00_5976 = BgL_crcz00_6824;
																BgL_iz00_5975 = BgL_iz00_6822;
																goto BgL_loopz00_5974;
															}
													}
												}
											}
										}
									else
										{	/* Unsafe/crc.scm 140 */
											{	/* Unsafe/crc.scm 140 */
												long BgL_mz00_5977;

												BgL_mz00_5977 =
													(((long) 1) <<
													(int) ((BgL_lenz00_5958 - ((long) 1))));
												{	/* Unsafe/crc.scm 140 */

													{
														long BgL_iz00_5979;

														long BgL_crcz00_5980;

														long BgL_shiftedzd2valuezd2_5981;

														BgL_iz00_5979 = ((long) 0);
														BgL_crcz00_5980 = BgL_arg2322z00_5969;
														BgL_shiftedzd2valuezd2_5981 =
															(
															((unsigned char) (BgL_cz00_5955)) <<
															(int) (BgL_lenz00_5958));
													BgL_loopz00_5978:
														if ((BgL_iz00_5979 == ((long) 8)))
															{	/* Unsafe/crc.scm 140 */
																BgL_arg2321z00_5968 = BgL_crcz00_5980;
															}
														else
															{	/* Unsafe/crc.scm 140 */
																long BgL_crc2z00_5982;

																BgL_crc2z00_5982 =
																	(BgL_crcz00_5980 ^
																	(BgL_mz00_5977 &
																		(BgL_shiftedzd2valuezd2_5981 >>
																			(int) (((long) 8)))));
																{	/* Unsafe/crc.scm 140 */

																	{
																		long BgL_shiftedzd2valuezd2_6859;

																		long BgL_crcz00_6850;

																		long BgL_iz00_6848;

																		BgL_iz00_6848 =
																			(BgL_iz00_5979 + ((long) 1));
																		BgL_crcz00_6850 =
																			(
																			(((BgL_mz00_5977 & BgL_crc2z00_5982) >>
																					(int) (
																						(BgL_lenz00_5958 -
																							((long) 1)))) *
																				BgL_arg2323z00_5970) ^ (BgL_crc2z00_5982
																				<< (int) (((long) 1))));
																		BgL_shiftedzd2valuezd2_6859 =
																			(BgL_shiftedzd2valuezd2_5981 <<
																			(int) (((long) 1)));
																		BgL_shiftedzd2valuezd2_5981 =
																			BgL_shiftedzd2valuezd2_6859;
																		BgL_crcz00_5980 = BgL_crcz00_6850;
																		BgL_iz00_5979 = BgL_iz00_6848;
																		goto BgL_loopz00_5978;
																	}
																}
															}
													}
												}
											}
										}
								}
							}
							BgL_auxz00_6754 = LONG_TO_LLONG(BgL_arg2321z00_5968);
						}
				}
				return make_bllong(BgL_auxz00_6754);
			}
		}
	}



/* crc-long-le */
	BGL_EXPORTED_DEF long BGl_crczd2longzd2lez00zz__crcz00(unsigned char
		BgL_cz00_13, long BgL_crcz00_14, long BgL_polyz00_15, long BgL_lenz00_16)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 159 */
			{
				long BgL_iz00_5984;

				long BgL_crcz00_5985;

				BgL_iz00_5984 = ((long) 0);
				BgL_crcz00_5985 = (BgL_crcz00_14 ^ ((unsigned char) (BgL_cz00_13)));
			BgL_loopz00_5983:
				if ((BgL_iz00_5984 == ((long) 8)))
					{	/* Unsafe/crc.scm 160 */
						return BgL_crcz00_5985;
					}
				else
					{
						long BgL_crcz00_6872;

						long BgL_iz00_6870;

						BgL_iz00_6870 = (BgL_iz00_5984 + ((long) 1));
						BgL_crcz00_6872 =
							(
							((((long) 1) & BgL_crcz00_5985) * BgL_polyz00_15) ^
							(long) (
								((unsigned long) (BgL_crcz00_5985) >> (int) (((long) 1)))));
						BgL_crcz00_5985 = BgL_crcz00_6872;
						BgL_iz00_5984 = BgL_iz00_6870;
						goto BgL_loopz00_5983;
					}
			}
		}
	}



/* _crc-long-le */
	obj_t BGl__crczd2longzd2lez00zz__crcz00(obj_t BgL_envz00_5703,
		obj_t BgL_cz00_5704, obj_t BgL_crcz00_5705, obj_t BgL_polyz00_5706,
		obj_t BgL_lenz00_5707)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 159 */
			{	/* Unsafe/crc.scm 160 */
				long BgL_auxz00_6883;

				{	/* Unsafe/crc.scm 160 */
					long BgL_res3234z00_5993;

					{	/* Unsafe/crc.scm 160 */
						unsigned char BgL_cz00_5986;

						long BgL_crcz00_5987;

						long BgL_polyz00_5988;

						long BgL_lenz00_5989;

						{	/* Unsafe/crc.scm 160 */
							obj_t BgL_auxz00_6884;

							if (CHARP(BgL_cz00_5704))
								{	/* Unsafe/crc.scm 160 */
									BgL_auxz00_6884 = BgL_cz00_5704;
								}
							else
								{
									obj_t BgL_auxz00_6887;

									BgL_auxz00_6887 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 6690)), BGl_string3197z00zz__crcz00,
										BGl_string3191z00zz__crcz00, BgL_cz00_5704);
									FAILURE(BgL_auxz00_6887, BFALSE, BFALSE);
								}
							BgL_cz00_5986 = CCHAR(BgL_auxz00_6884);
						}
						{	/* Unsafe/crc.scm 160 */
							obj_t BgL_auxz00_6892;

							if (INTEGERP(BgL_crcz00_5705))
								{	/* Unsafe/crc.scm 160 */
									BgL_auxz00_6892 = BgL_crcz00_5705;
								}
							else
								{
									obj_t BgL_auxz00_6895;

									BgL_auxz00_6895 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 6690)), BGl_string3197z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_crcz00_5705);
									FAILURE(BgL_auxz00_6895, BFALSE, BFALSE);
								}
							BgL_crcz00_5987 = (long) CINT(BgL_auxz00_6892);
						}
						{	/* Unsafe/crc.scm 160 */
							obj_t BgL_auxz00_6900;

							if (INTEGERP(BgL_polyz00_5706))
								{	/* Unsafe/crc.scm 160 */
									BgL_auxz00_6900 = BgL_polyz00_5706;
								}
							else
								{
									obj_t BgL_auxz00_6903;

									BgL_auxz00_6903 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 6690)), BGl_string3197z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_polyz00_5706);
									FAILURE(BgL_auxz00_6903, BFALSE, BFALSE);
								}
							BgL_polyz00_5988 = (long) CINT(BgL_auxz00_6900);
						}
						{	/* Unsafe/crc.scm 160 */
							obj_t BgL_auxz00_6908;

							if (INTEGERP(BgL_lenz00_5707))
								{	/* Unsafe/crc.scm 160 */
									BgL_auxz00_6908 = BgL_lenz00_5707;
								}
							else
								{
									obj_t BgL_auxz00_6911;

									BgL_auxz00_6911 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 6690)), BGl_string3197z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_lenz00_5707);
									FAILURE(BgL_auxz00_6911, BFALSE, BFALSE);
								}
							BgL_lenz00_5989 = (long) CINT(BgL_auxz00_6908);
						}
						{
							long BgL_iz00_5991;

							long BgL_crcz00_5992;

							BgL_iz00_5991 = ((long) 0);
							BgL_crcz00_5992 =
								(BgL_crcz00_5987 ^ ((unsigned char) (BgL_cz00_5986)));
						BgL_loopz00_5990:
							if ((BgL_iz00_5991 == ((long) 8)))
								{	/* Unsafe/crc.scm 160 */
									BgL_res3234z00_5993 = BgL_crcz00_5992;
								}
							else
								{
									long BgL_crcz00_6920;

									long BgL_iz00_6918;

									BgL_iz00_6918 = (BgL_iz00_5991 + ((long) 1));
									BgL_crcz00_6920 =
										(
										((((long) 1) & BgL_crcz00_5992) * BgL_polyz00_5988) ^
										(long) (
											((unsigned long) (BgL_crcz00_5992) >>
												(int) (((long) 1)))));
									BgL_crcz00_5992 = BgL_crcz00_6920;
									BgL_iz00_5991 = BgL_iz00_6918;
									goto BgL_loopz00_5990;
								}
						}
					}
					BgL_auxz00_6883 = BgL_res3234z00_5993;
				}
				return BINT(BgL_auxz00_6883);
			}
		}
	}



/* crc-elong-le */
	BGL_EXPORTED_DEF long BGl_crczd2elongzd2lez00zz__crcz00(unsigned char
		BgL_cz00_17, long BgL_crcz00_18, long BgL_polyz00_19, long BgL_lenz00_20)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 173 */
			{	/* Unsafe/crc.scm 174 */
				long BgL_octetz00_5994;

				BgL_octetz00_5994 = ((unsigned char) (BgL_cz00_17));
				{	/* Unsafe/crc.scm 174 */
					long BgL_g1828z00_5995;

					{	/* Unsafe/crc.scm 174 */
						long BgL_arg2336z00_5996;

						BgL_arg2336z00_5996 = LONG_TO_ELONG(BgL_octetz00_5994);
						BgL_g1828z00_5995 = (BgL_crcz00_18 ^ BgL_arg2336z00_5996);
					}
					{
						long BgL_iz00_5998;

						long BgL_crcz00_5999;

						BgL_iz00_5998 = ((long) 0);
						BgL_crcz00_5999 = BgL_g1828z00_5995;
					BgL_loopz00_5997:
						if ((BgL_iz00_5998 == ((long) 8)))
							{	/* Unsafe/crc.scm 174 */
								return BgL_crcz00_5999;
							}
						else
							{	/* Unsafe/crc.scm 174 */
								long BgL_newzd2crczd2_6000;

								{	/* Unsafe/crc.scm 174 */
									unsigned long BgL_xz00_6001;

									BgL_xz00_6001 = (unsigned long) (BgL_crcz00_5999);
									{	/* Unsafe/crc.scm 174 */
										unsigned long BgL_auxz00_6939;

										{	/* Unsafe/crc.scm 174 */
											int BgL_auxz00_6940;

											BgL_auxz00_6940 = (int) (((long) 1));
											BgL_auxz00_6939 = (BgL_xz00_6001 >> BgL_auxz00_6940);
										}
										BgL_newzd2crczd2_6000 = (long) (BgL_auxz00_6939);
								}}
								{
									long BgL_crcz00_6946;

									long BgL_iz00_6944;

									BgL_iz00_6944 = (BgL_iz00_5998 + ((long) 1));
									BgL_crcz00_6946 =
										(
										((((long) 1) & BgL_crcz00_5999) *
											BgL_polyz00_19) ^ BgL_newzd2crczd2_6000);
									BgL_crcz00_5999 = BgL_crcz00_6946;
									BgL_iz00_5998 = BgL_iz00_6944;
									goto BgL_loopz00_5997;
								}
							}
					}
				}
			}
		}
	}



/* _crc-elong-le */
	obj_t BGl__crczd2elongzd2lez00zz__crcz00(obj_t BgL_envz00_5708,
		obj_t BgL_cz00_5709, obj_t BgL_crcz00_5710, obj_t BgL_polyz00_5711,
		obj_t BgL_lenz00_5712)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 173 */
			{	/* Unsafe/crc.scm 174 */
				long BgL_auxz00_6950;

				{	/* Unsafe/crc.scm 174 */
					long BgL_res3235z00_6014;

					{	/* Unsafe/crc.scm 174 */
						unsigned char BgL_cz00_6002;

						long BgL_crcz00_6003;

						long BgL_polyz00_6004;

						long BgL_lenz00_6005;

						{	/* Unsafe/crc.scm 174 */
							obj_t BgL_auxz00_6951;

							if (CHARP(BgL_cz00_5709))
								{	/* Unsafe/crc.scm 174 */
									BgL_auxz00_6951 = BgL_cz00_5709;
								}
							else
								{
									obj_t BgL_auxz00_6954;

									BgL_auxz00_6954 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7245)), BGl_string3198z00zz__crcz00,
										BGl_string3191z00zz__crcz00, BgL_cz00_5709);
									FAILURE(BgL_auxz00_6954, BFALSE, BFALSE);
								}
							BgL_cz00_6002 = CCHAR(BgL_auxz00_6951);
						}
						{	/* Unsafe/crc.scm 174 */
							obj_t BgL_auxz00_6959;

							if (ELONGP(BgL_crcz00_5710))
								{	/* Unsafe/crc.scm 174 */
									BgL_auxz00_6959 = BgL_crcz00_5710;
								}
							else
								{
									obj_t BgL_auxz00_6962;

									BgL_auxz00_6962 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7245)), BGl_string3198z00zz__crcz00,
										BGl_string3194z00zz__crcz00, BgL_crcz00_5710);
									FAILURE(BgL_auxz00_6962, BFALSE, BFALSE);
								}
							BgL_crcz00_6003 = BELONG_TO_LONG(BgL_auxz00_6959);
						}
						{	/* Unsafe/crc.scm 174 */
							obj_t BgL_auxz00_6967;

							if (ELONGP(BgL_polyz00_5711))
								{	/* Unsafe/crc.scm 174 */
									BgL_auxz00_6967 = BgL_polyz00_5711;
								}
							else
								{
									obj_t BgL_auxz00_6970;

									BgL_auxz00_6970 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7245)), BGl_string3198z00zz__crcz00,
										BGl_string3194z00zz__crcz00, BgL_polyz00_5711);
									FAILURE(BgL_auxz00_6970, BFALSE, BFALSE);
								}
							BgL_polyz00_6004 = BELONG_TO_LONG(BgL_auxz00_6967);
						}
						{	/* Unsafe/crc.scm 174 */
							obj_t BgL_auxz00_6975;

							if (INTEGERP(BgL_lenz00_5712))
								{	/* Unsafe/crc.scm 174 */
									BgL_auxz00_6975 = BgL_lenz00_5712;
								}
							else
								{
									obj_t BgL_auxz00_6978;

									BgL_auxz00_6978 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7245)), BGl_string3198z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_lenz00_5712);
									FAILURE(BgL_auxz00_6978, BFALSE, BFALSE);
								}
							BgL_lenz00_6005 = (long) CINT(BgL_auxz00_6975);
						}
						{	/* Unsafe/crc.scm 174 */
							long BgL_octetz00_6006;

							BgL_octetz00_6006 = ((unsigned char) (BgL_cz00_6002));
							{	/* Unsafe/crc.scm 174 */
								long BgL_g1828z00_6007;

								{	/* Unsafe/crc.scm 174 */
									long BgL_arg2336z00_6008;

									BgL_arg2336z00_6008 = LONG_TO_ELONG(BgL_octetz00_6006);
									BgL_g1828z00_6007 = (BgL_crcz00_6003 ^ BgL_arg2336z00_6008);
								}
								{
									long BgL_iz00_6010;

									long BgL_crcz00_6011;

									BgL_iz00_6010 = ((long) 0);
									BgL_crcz00_6011 = BgL_g1828z00_6007;
								BgL_loopz00_6009:
									if ((BgL_iz00_6010 == ((long) 8)))
										{	/* Unsafe/crc.scm 174 */
											BgL_res3235z00_6014 = BgL_crcz00_6011;
										}
									else
										{	/* Unsafe/crc.scm 174 */
											long BgL_newzd2crczd2_6012;

											{	/* Unsafe/crc.scm 174 */
												unsigned long BgL_xz00_6013;

												BgL_xz00_6013 = (unsigned long) (BgL_crcz00_6011);
												{	/* Unsafe/crc.scm 174 */
													unsigned long BgL_auxz00_6990;

													{	/* Unsafe/crc.scm 174 */
														int BgL_auxz00_6991;

														BgL_auxz00_6991 = (int) (((long) 1));
														BgL_auxz00_6990 =
															(BgL_xz00_6013 >> BgL_auxz00_6991);
													}
													BgL_newzd2crczd2_6012 = (long) (BgL_auxz00_6990);
											}}
											{
												long BgL_crcz00_6997;

												long BgL_iz00_6995;

												BgL_iz00_6995 = (BgL_iz00_6010 + ((long) 1));
												BgL_crcz00_6997 =
													(
													((((long) 1) & BgL_crcz00_6011) *
														BgL_polyz00_6004) ^ BgL_newzd2crczd2_6012);
												BgL_crcz00_6011 = BgL_crcz00_6997;
												BgL_iz00_6010 = BgL_iz00_6995;
												goto BgL_loopz00_6009;
											}
										}
								}
							}
						}
					}
					BgL_auxz00_6950 = BgL_res3235z00_6014;
				}
				return make_belong(BgL_auxz00_6950);
			}
		}
	}



/* crc-llong-le */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_crczd2llongzd2lez00zz__crcz00(unsigned
		char BgL_cz00_21, BGL_LONGLONG_T BgL_crcz00_22,
		BGL_LONGLONG_T BgL_polyz00_23, long BgL_lenz00_24)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 187 */
			{	/* Unsafe/crc.scm 188 */
				long BgL_octetz00_6015;

				BgL_octetz00_6015 = ((unsigned char) (BgL_cz00_21));
				{	/* Unsafe/crc.scm 188 */
					BGL_LONGLONG_T BgL_g1829z00_6016;

					{	/* Unsafe/crc.scm 188 */
						BGL_LONGLONG_T BgL_arg2343z00_6017;

						BgL_arg2343z00_6017 = LONG_TO_LLONG(BgL_octetz00_6015);
						BgL_g1829z00_6016 = (BgL_crcz00_22 ^ BgL_arg2343z00_6017);
					}
					{
						long BgL_iz00_6019;

						BGL_LONGLONG_T BgL_crcz00_6020;

						BgL_iz00_6019 = ((long) 0);
						BgL_crcz00_6020 = BgL_g1829z00_6016;
					BgL_loopz00_6018:
						if ((BgL_iz00_6019 == ((long) 8)))
							{	/* Unsafe/crc.scm 188 */
								return BgL_crcz00_6020;
							}
						else
							{	/* Unsafe/crc.scm 188 */
								BGL_LONGLONG_T BgL_newzd2crczd2_6021;

								{	/* Unsafe/crc.scm 188 */
									unsigned BGL_LONGLONG_T BgL_xz00_6022;

									BgL_xz00_6022 = (unsigned BGL_LONGLONG_T) (BgL_crcz00_6020);
									{	/* Unsafe/crc.scm 188 */
										unsigned BGL_LONGLONG_T BgL_auxz00_7009;

										{	/* Unsafe/crc.scm 188 */
											int BgL_auxz00_7010;

											BgL_auxz00_7010 = (int) (((long) 1));
											BgL_auxz00_7009 = (BgL_xz00_6022 >> BgL_auxz00_7010);
										}
										BgL_newzd2crczd2_6021 = (BGL_LONGLONG_T) (BgL_auxz00_7009);
								}}
								{
									BGL_LONGLONG_T BgL_crcz00_7016;

									long BgL_iz00_7014;

									BgL_iz00_7014 = (BgL_iz00_6019 + ((long) 1));
									BgL_crcz00_7016 =
										(
										((((BGL_LONGLONG_T) 1) & BgL_crcz00_6020) *
											BgL_polyz00_23) ^ BgL_newzd2crczd2_6021);
									BgL_crcz00_6020 = BgL_crcz00_7016;
									BgL_iz00_6019 = BgL_iz00_7014;
									goto BgL_loopz00_6018;
								}
							}
					}
				}
			}
		}
	}



/* _crc-llong-le */
	obj_t BGl__crczd2llongzd2lez00zz__crcz00(obj_t BgL_envz00_5713,
		obj_t BgL_cz00_5714, obj_t BgL_crcz00_5715, obj_t BgL_polyz00_5716,
		obj_t BgL_lenz00_5717)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 187 */
			{	/* Unsafe/crc.scm 188 */
				BGL_LONGLONG_T BgL_auxz00_7020;

				{	/* Unsafe/crc.scm 188 */
					BGL_LONGLONG_T BgL_res3236z00_6035;

					{	/* Unsafe/crc.scm 188 */
						unsigned char BgL_cz00_6023;

						BGL_LONGLONG_T BgL_crcz00_6024;

						BGL_LONGLONG_T BgL_polyz00_6025;

						long BgL_lenz00_6026;

						{	/* Unsafe/crc.scm 188 */
							obj_t BgL_auxz00_7021;

							if (CHARP(BgL_cz00_5714))
								{	/* Unsafe/crc.scm 188 */
									BgL_auxz00_7021 = BgL_cz00_5714;
								}
							else
								{
									obj_t BgL_auxz00_7024;

									BgL_auxz00_7024 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7841)), BGl_string3199z00zz__crcz00,
										BGl_string3191z00zz__crcz00, BgL_cz00_5714);
									FAILURE(BgL_auxz00_7024, BFALSE, BFALSE);
								}
							BgL_cz00_6023 = CCHAR(BgL_auxz00_7021);
						}
						{	/* Unsafe/crc.scm 188 */
							obj_t BgL_auxz00_7029;

							if (LLONGP(BgL_crcz00_5715))
								{	/* Unsafe/crc.scm 188 */
									BgL_auxz00_7029 = BgL_crcz00_5715;
								}
							else
								{
									obj_t BgL_auxz00_7032;

									BgL_auxz00_7032 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7841)), BGl_string3199z00zz__crcz00,
										BGl_string3196z00zz__crcz00, BgL_crcz00_5715);
									FAILURE(BgL_auxz00_7032, BFALSE, BFALSE);
								}
							BgL_crcz00_6024 = BLLONG_TO_LLONG(BgL_auxz00_7029);
						}
						{	/* Unsafe/crc.scm 188 */
							obj_t BgL_auxz00_7037;

							if (LLONGP(BgL_polyz00_5716))
								{	/* Unsafe/crc.scm 188 */
									BgL_auxz00_7037 = BgL_polyz00_5716;
								}
							else
								{
									obj_t BgL_auxz00_7040;

									BgL_auxz00_7040 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7841)), BGl_string3199z00zz__crcz00,
										BGl_string3196z00zz__crcz00, BgL_polyz00_5716);
									FAILURE(BgL_auxz00_7040, BFALSE, BFALSE);
								}
							BgL_polyz00_6025 = BLLONG_TO_LLONG(BgL_auxz00_7037);
						}
						{	/* Unsafe/crc.scm 188 */
							obj_t BgL_auxz00_7045;

							if (INTEGERP(BgL_lenz00_5717))
								{	/* Unsafe/crc.scm 188 */
									BgL_auxz00_7045 = BgL_lenz00_5717;
								}
							else
								{
									obj_t BgL_auxz00_7048;

									BgL_auxz00_7048 =
										BGl_typezd2errorzd2zz__errorz00(BGl_string3189z00zz__crcz00,
										BINT(((long) 7841)), BGl_string3199z00zz__crcz00,
										BGl_string3192z00zz__crcz00, BgL_lenz00_5717);
									FAILURE(BgL_auxz00_7048, BFALSE, BFALSE);
								}
							BgL_lenz00_6026 = (long) CINT(BgL_auxz00_7045);
						}
						{	/* Unsafe/crc.scm 188 */
							long BgL_octetz00_6027;

							BgL_octetz00_6027 = ((unsigned char) (BgL_cz00_6023));
							{	/* Unsafe/crc.scm 188 */
								BGL_LONGLONG_T BgL_g1829z00_6028;

								{	/* Unsafe/crc.scm 188 */
									BGL_LONGLONG_T BgL_arg2343z00_6029;

									BgL_arg2343z00_6029 = LONG_TO_LLONG(BgL_octetz00_6027);
									BgL_g1829z00_6028 = (BgL_crcz00_6024 ^ BgL_arg2343z00_6029);
								}
								{
									long BgL_iz00_6031;

									BGL_LONGLONG_T BgL_crcz00_6032;

									BgL_iz00_6031 = ((long) 0);
									BgL_crcz00_6032 = BgL_g1829z00_6028;
								BgL_loopz00_6030:
									if ((BgL_iz00_6031 == ((long) 8)))
										{	/* Unsafe/crc.scm 188 */
											BgL_res3236z00_6035 = BgL_crcz00_6032;
										}
									else
										{	/* Unsafe/crc.scm 188 */
											BGL_LONGLONG_T BgL_newzd2crczd2_6033;

											{	/* Unsafe/crc.scm 188 */
												unsigned BGL_LONGLONG_T BgL_xz00_6034;

												BgL_xz00_6034 =
													(unsigned BGL_LONGLONG_T) (BgL_crcz00_6032);
												{	/* Unsafe/crc.scm 188 */
													unsigned BGL_LONGLONG_T BgL_auxz00_7060;

													{	/* Unsafe/crc.scm 188 */
														int BgL_auxz00_7061;

														BgL_auxz00_7061 = (int) (((long) 1));
														BgL_auxz00_7060 =
															(BgL_xz00_6034 >> BgL_auxz00_7061);
													}
													BgL_newzd2crczd2_6033 =
														(BGL_LONGLONG_T) (BgL_auxz00_7060);
											}}
											{
												BGL_LONGLONG_T BgL_crcz00_7067;

												long BgL_iz00_7065;

												BgL_iz00_7065 = (BgL_iz00_6031 + ((long) 1));
												BgL_crcz00_7067 =
													(
													((((BGL_LONGLONG_T) 1) & BgL_crcz00_6032) *
														BgL_polyz00_6025) ^ BgL_newzd2crczd2_6033);
												BgL_crcz00_6032 = BgL_crcz00_7067;
												BgL_iz00_6031 = BgL_iz00_7065;
												goto BgL_loopz00_6030;
											}
										}
								}
							}
						}
					}
					BgL_auxz00_7020 = BgL_res3236z00_6035;
				}
				return make_bllong(BgL_auxz00_7020);
			}
		}
	}



/* crc-polynomial-be->le */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t
		BgL_lenz00_25, obj_t BgL_polyz00_26)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 201 */
			{	/* Unsafe/crc.scm 202 */
				obj_t BgL_typez00_1409;

				if (INTEGERP(BgL_polyz00_26))
					{	/* Unsafe/crc.scm 204 */
						BgL_typez00_1409 = BGl_symbol3200z00zz__crcz00;
					}
				else
					{	/* Unsafe/crc.scm 204 */
						if (ELONGP(BgL_polyz00_26))
							{	/* Unsafe/crc.scm 205 */
								BgL_typez00_1409 = BGl_symbol3201z00zz__crcz00;
							}
						else
							{	/* Unsafe/crc.scm 205 */
								if (LLONGP(BgL_polyz00_26))
									{	/* Unsafe/crc.scm 206 */
										BgL_typez00_1409 = BGl_symbol3202z00zz__crcz00;
									}
								else
									{	/* Unsafe/crc.scm 206 */
										BgL_typez00_1409 =
											BGl_errorz00zz__errorz00(BGl_symbol3203z00zz__crcz00,
											BGl_string3205z00zz__crcz00, BgL_polyz00_26);
									}
							}
					}
				{	/* Unsafe/crc.scm 202 */
					obj_t BgL_onez00_1410;

					if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
						{	/* Unsafe/crc.scm 209 */
							BgL_onez00_1410 = BINT(((long) 1));
						}
					else
						{	/* Unsafe/crc.scm 209 */
							if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
								{	/* Unsafe/crc.scm 209 */
									BgL_onez00_1410 = BGl_elong3206z00zz__crcz00;
								}
							else
								{	/* Unsafe/crc.scm 209 */
									if ((BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
										{	/* Unsafe/crc.scm 209 */
											BgL_onez00_1410 = BGl_llong3207z00zz__crcz00;
										}
									else
										{	/* Unsafe/crc.scm 209 */
											BgL_onez00_1410 = BUNSPEC;
										}
								}
						}
					{	/* Unsafe/crc.scm 209 */
						obj_t BgL_za7eroza7_1411;

						if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
							{	/* Unsafe/crc.scm 210 */
								BgL_za7eroza7_1411 = BINT(((long) 0));
							}
						else
							{	/* Unsafe/crc.scm 210 */
								if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
									{	/* Unsafe/crc.scm 210 */
										BgL_za7eroza7_1411 = BGl_elong3208z00zz__crcz00;
									}
								else
									{	/* Unsafe/crc.scm 210 */
										if ((BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
											{	/* Unsafe/crc.scm 210 */
												BgL_za7eroza7_1411 = BGl_llong3209z00zz__crcz00;
											}
										else
											{	/* Unsafe/crc.scm 210 */
												BgL_za7eroza7_1411 = BUNSPEC;
											}
									}
							}
						{	/* Unsafe/crc.scm 210 */
							obj_t BgL_lshz00_1412;

							if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
								{	/* Unsafe/crc.scm 211 */
									BgL_lshz00_1412 = BGl_bitzd2lshzd2envz00zz__bitz00;
								}
							else
								{	/* Unsafe/crc.scm 211 */
									if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
										{	/* Unsafe/crc.scm 211 */
											BgL_lshz00_1412 = BGl_bitzd2lshelongzd2envz00zz__bitz00;
										}
									else
										{	/* Unsafe/crc.scm 211 */
											if ((BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
												{	/* Unsafe/crc.scm 211 */
													BgL_lshz00_1412 =
														BGl_bitzd2lshllongzd2envz00zz__bitz00;
												}
											else
												{	/* Unsafe/crc.scm 211 */
													BgL_lshz00_1412 = BUNSPEC;
												}
										}
								}
							{	/* Unsafe/crc.scm 211 */
								obj_t BgL_rshz00_1413;

								if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
									{	/* Unsafe/crc.scm 214 */
										BgL_rshz00_1413 = BGl_bitzd2rshzd2envz00zz__bitz00;
									}
								else
									{	/* Unsafe/crc.scm 214 */
										if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
											{	/* Unsafe/crc.scm 214 */
												BgL_rshz00_1413 = BGl_bitzd2rshelongzd2envz00zz__bitz00;
											}
										else
											{	/* Unsafe/crc.scm 214 */
												if ((BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
													{	/* Unsafe/crc.scm 214 */
														BgL_rshz00_1413 =
															BGl_bitzd2rshllongzd2envz00zz__bitz00;
													}
												else
													{	/* Unsafe/crc.scm 214 */
														BgL_rshz00_1413 = BUNSPEC;
													}
											}
									}
								{	/* Unsafe/crc.scm 214 */
									obj_t BgL_bzd2andzd2_1414;

									if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
										{	/* Unsafe/crc.scm 217 */
											BgL_bzd2andzd2_1414 = BGl_bitzd2andzd2envz00zz__bitz00;
										}
									else
										{	/* Unsafe/crc.scm 217 */
											if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
												{	/* Unsafe/crc.scm 217 */
													BgL_bzd2andzd2_1414 =
														BGl_bitzd2andelongzd2envz00zz__bitz00;
												}
											else
												{	/* Unsafe/crc.scm 217 */
													if ((BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
														{	/* Unsafe/crc.scm 217 */
															BgL_bzd2andzd2_1414 =
																BGl_bitzd2andllongzd2envz00zz__bitz00;
														}
													else
														{	/* Unsafe/crc.scm 217 */
															BgL_bzd2andzd2_1414 = BUNSPEC;
														}
												}
										}
									{	/* Unsafe/crc.scm 217 */
										obj_t BgL_bzd2orzd2_1415;

										if ((BgL_typez00_1409 == BGl_symbol3200z00zz__crcz00))
											{	/* Unsafe/crc.scm 220 */
												BgL_bzd2orzd2_1415 = BGl_bitzd2orzd2envz00zz__bitz00;
											}
										else
											{	/* Unsafe/crc.scm 220 */
												if ((BgL_typez00_1409 == BGl_symbol3201z00zz__crcz00))
													{	/* Unsafe/crc.scm 220 */
														BgL_bzd2orzd2_1415 =
															BGl_bitzd2orelongzd2envz00zz__bitz00;
													}
												else
													{	/* Unsafe/crc.scm 220 */
														if (
															(BgL_typez00_1409 == BGl_symbol3202z00zz__crcz00))
															{	/* Unsafe/crc.scm 220 */
																BgL_bzd2orzd2_1415 =
																	BGl_bitzd2orllongzd2envz00zz__bitz00;
															}
														else
															{	/* Unsafe/crc.scm 220 */
																BgL_bzd2orzd2_1415 = BUNSPEC;
															}
													}
											}
										{	/* Unsafe/crc.scm 220 */

											{
												long BgL_iz00_3039;

												obj_t BgL_polyz00_3040;

												obj_t BgL_resz00_3041;

												BgL_iz00_3039 = ((long) 0);
												BgL_polyz00_3040 = BgL_polyz00_26;
												BgL_resz00_3041 = BgL_za7eroza7_1411;
											BgL_loopz00_3038:
												if ((BgL_iz00_3039 >= (long) CINT(BgL_lenz00_25)))
													{	/* Unsafe/crc.scm 223 */
														return BgL_resz00_3041;
													}
												else
													{	/* Unsafe/crc.scm 223 */
														long BgL_arg2346z00_3049;

														obj_t BgL_arg2347z00_3050;

														obj_t BgL_arg2348z00_3051;

														BgL_arg2346z00_3049 = (BgL_iz00_3039 + ((long) 1));
														BgL_arg2347z00_3050 =
															PROCEDURE_ENTRY(BgL_rshz00_1413) (BgL_rshz00_1413,
															BgL_polyz00_3040, BINT(((long) 1)), BEOA);
														{	/* Unsafe/crc.scm 223 */
															obj_t BgL_arg2349z00_3052;

															obj_t BgL_arg2350z00_3053;

															BgL_arg2349z00_3052 =
																PROCEDURE_ENTRY(BgL_lshz00_1412)
																(BgL_lshz00_1412, BgL_resz00_3041,
																BINT(((long) 1)), BEOA);
															BgL_arg2350z00_3053 =
																PROCEDURE_ENTRY(BgL_bzd2andzd2_1414)
																(BgL_bzd2andzd2_1414, BgL_onez00_1410,
																BgL_polyz00_3040, BEOA);
															BgL_arg2348z00_3051 =
																PROCEDURE_ENTRY(BgL_bzd2orzd2_1415)
																(BgL_bzd2orzd2_1415, BgL_arg2349z00_3052,
																BgL_arg2350z00_3053, BEOA);
														}
														{
															obj_t BgL_resz00_7133;

															obj_t BgL_polyz00_7132;

															long BgL_iz00_7131;

															BgL_iz00_7131 = BgL_arg2346z00_3049;
															BgL_polyz00_7132 = BgL_arg2347z00_3050;
															BgL_resz00_7133 = BgL_arg2348z00_3051;
															BgL_resz00_3041 = BgL_resz00_7133;
															BgL_polyz00_3040 = BgL_polyz00_7132;
															BgL_iz00_3039 = BgL_iz00_7131;
															goto BgL_loopz00_3038;
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



/* _crc-polynomial-be->le */
	obj_t BGl__crczd2polynomialzd2bezd2ze3lez31zz__crcz00(obj_t BgL_envz00_5718,
		obj_t BgL_lenz00_5719, obj_t BgL_polyz00_5720)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 201 */
			return
				BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(BgL_lenz00_5719,
				BgL_polyz00_5720);
		}
	}



/* register-crc! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2crcz12zc0zz__crcz00(obj_t
		BgL_namez00_27, obj_t BgL_polyz00_28, obj_t BgL_lenz00_29)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 276 */
			{	/* Unsafe/crc.scm 278 */
				obj_t BgL_arg2372z00_3081;

				{	/* Unsafe/crc.scm 278 */
					obj_t BgL_arg2373z00_3082;

					BgL_arg2373z00_3082 =
						BGl_crczd2polynomialzd2bezd2ze3lez31zz__crcz00(BgL_polyz00_28,
						BgL_lenz00_29);
					{	/* Unsafe/crc.scm 278 */
						obj_t BgL_list2374z00_3083;

						{	/* Unsafe/crc.scm 278 */
							obj_t BgL_arg2375z00_3084;

							{	/* Unsafe/crc.scm 278 */
								obj_t BgL_arg2376z00_3085;

								{	/* Unsafe/crc.scm 278 */
									obj_t BgL_arg2377z00_3086;

									BgL_arg2377z00_3086 = MAKE_PAIR(BgL_arg2373z00_3082, BNIL);
									BgL_arg2376z00_3085 =
										MAKE_PAIR(BgL_polyz00_28, BgL_arg2377z00_3086);
								}
								BgL_arg2375z00_3084 =
									MAKE_PAIR(BgL_lenz00_29, BgL_arg2376z00_3085);
							}
							BgL_list2374z00_3083 =
								MAKE_PAIR(BgL_namez00_27, BgL_arg2375z00_3084);
						}
						BgL_arg2372z00_3081 = BgL_list2374z00_3083;
					}
				}
				return (BGl_za2crcsza2z00zz__crcz00 =
					MAKE_PAIR(BgL_arg2372z00_3081, BGl_za2crcsza2z00zz__crcz00), BUNSPEC);
			}
		}
	}



/* _register-crc! */
	obj_t BGl__registerzd2crcz12zc0zz__crcz00(obj_t BgL_envz00_5757,
		obj_t BgL_namez00_5758, obj_t BgL_polyz00_5759, obj_t BgL_lenz00_5760)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 276 */
			return
				BGl_registerzd2crcz12zc0zz__crcz00(BgL_namez00_5758, BgL_polyz00_5759,
				BgL_lenz00_5760);
		}
	}



/* crc-polynomial */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2zz__crcz00(obj_t BgL_namez00_30)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 283 */
			{	/* Unsafe/crc.scm 284 */
				obj_t BgL_tz00_3089;

				BgL_tz00_3089 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_30,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3089))
					{	/* Unsafe/crc.scm 284 */
						obj_t BgL_pairz00_3091;

						BgL_pairz00_3091 = BgL_tz00_3089;
						return CAR(CDR(CDR(BgL_pairz00_3091)));
					}
				else
					{	/* Unsafe/crc.scm 284 */
						return BFALSE;
					}
			}
		}
	}



/* _crc-polynomial */
	obj_t BGl__crczd2polynomialzd2zz__crcz00(obj_t BgL_envz00_5761,
		obj_t BgL_namez00_5762)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 283 */
			return BGl_crczd2polynomialzd2zz__crcz00(BgL_namez00_5762);
		}
	}



/* crc-polynomial-le */
	BGL_EXPORTED_DEF obj_t BGl_crczd2polynomialzd2lez00zz__crcz00(obj_t
		BgL_namez00_31)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 290 */
			{	/* Unsafe/crc.scm 291 */
				obj_t BgL_tz00_3097;

				BgL_tz00_3097 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_31,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3097))
					{	/* Unsafe/crc.scm 291 */
						obj_t BgL_pairz00_3099;

						BgL_pairz00_3099 = BgL_tz00_3097;
						return CAR(CDR(CDR(CDR(BgL_pairz00_3099))));
					}
				else
					{	/* Unsafe/crc.scm 291 */
						return BFALSE;
					}
			}
		}
	}



/* _crc-polynomial-le */
	obj_t BGl__crczd2polynomialzd2lez00zz__crcz00(obj_t BgL_envz00_5763,
		obj_t BgL_namez00_5764)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 290 */
			return BGl_crczd2polynomialzd2lez00zz__crcz00(BgL_namez00_5764);
		}
	}



/* crc-length */
	BGL_EXPORTED_DEF obj_t BGl_crczd2lengthzd2zz__crcz00(obj_t BgL_namez00_32)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 297 */
			{	/* Unsafe/crc.scm 298 */
				obj_t BgL_tz00_3107;

				BgL_tz00_3107 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_32,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_tz00_3107))
					{	/* Unsafe/crc.scm 298 */
						obj_t BgL_pairz00_3109;

						BgL_pairz00_3109 = BgL_tz00_3107;
						return CAR(CDR(BgL_pairz00_3109));
					}
				else
					{	/* Unsafe/crc.scm 298 */
						return BFALSE;
					}
			}
		}
	}



/* _crc-length */
	obj_t BGl__crczd2lengthzd2zz__crcz00(obj_t BgL_envz00_5765,
		obj_t BgL_namez00_5766)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 297 */
			return BGl_crczd2lengthzd2zz__crcz00(BgL_namez00_5766);
		}
	}



/* crc-names */
	BGL_EXPORTED_DEF obj_t BGl_crczd2nameszd2zz__crcz00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 304 */
			{	/* Unsafe/crc.scm 305 */
				obj_t BgL_l1865z00_1467;

				BgL_l1865z00_1467 = BGl_za2crcsza2z00zz__crcz00;
				{	/* Unsafe/crc.scm 305 */
					obj_t BgL_head1867z00_1469;

					BgL_head1867z00_1469 = MAKE_PAIR(CAR(CAR(BgL_l1865z00_1467)), BNIL);
					{	/* Unsafe/crc.scm 305 */
						obj_t BgL_g1870z00_1470;

						BgL_g1870z00_1470 = CDR(BgL_l1865z00_1467);
						{
							obj_t BgL_l1865z00_3120;

							obj_t BgL_tail1868z00_3121;

							BgL_l1865z00_3120 = BgL_g1870z00_1470;
							BgL_tail1868z00_3121 = BgL_head1867z00_1469;
						BgL_zc3anonymousza32379ze3z83_3119:
							if (NULLP(BgL_l1865z00_3120))
								{	/* Unsafe/crc.scm 305 */
									return BgL_head1867z00_1469;
								}
							else
								{	/* Unsafe/crc.scm 305 */
									obj_t BgL_newtail1869z00_3129;

									BgL_newtail1869z00_3129 =
										MAKE_PAIR(CAR(CAR(BgL_l1865z00_3120)), BNIL);
									SET_CDR(BgL_tail1868z00_3121, BgL_newtail1869z00_3129);
									{
										obj_t BgL_tail1868z00_7175;

										obj_t BgL_l1865z00_7173;

										BgL_l1865z00_7173 = CDR(BgL_l1865z00_3120);
										BgL_tail1868z00_7175 = BgL_newtail1869z00_3129;
										BgL_tail1868z00_3121 = BgL_tail1868z00_7175;
										BgL_l1865z00_3120 = BgL_l1865z00_7173;
										goto BgL_zc3anonymousza32379ze3z83_3119;
									}
								}
						}
					}
				}
			}
		}
	}



/* _crc-names */
	obj_t BGl__crczd2nameszd2zz__crcz00(obj_t BgL_envz00_5767)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 304 */
			return BGl_crczd2nameszd2zz__crcz00();
		}
	}



/* _crc */
	obj_t BGl__crcz00zz__crcz00(obj_t BgL_envz00_39, obj_t BgL_opt1889z00_38)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 310 */
			{	/* Unsafe/crc.scm 310 */
				int BgL_l1890z00_1485;

				BgL_l1890z00_1485 = VECTOR_LENGTH(BgL_opt1889z00_38);
				{	/* Unsafe/crc.scm 310 */
					obj_t BgL_namez00_1489;

					obj_t BgL_objz00_1490;

					BgL_namez00_1489 = VECTOR_REF(BgL_opt1889z00_38, (int) (((long) 0)));
					BgL_objz00_1490 = VECTOR_REF(BgL_opt1889z00_38, (int) (((long) 1)));
					{	/* Unsafe/crc.scm 310 */
						obj_t BgL_bigzd2endianzf3z21_1491;

						BgL_bigzd2endianzf3z21_1491 = BTRUE;
						{	/* Unsafe/crc.scm 310 */
							obj_t BgL_finalzd2xorzd2_1492;

							BgL_finalzd2xorzd2_1492 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 310 */
								obj_t BgL_initz00_1493;

								BgL_initz00_1493 = BINT(((long) 0));
								{	/* Unsafe/crc.scm 310 */

									{	/* Unsafe/crc.scm 310 */
										long BgL_index1894z00_1494;

										{
											long BgL_iz00_3174;

											BgL_iz00_3174 = ((long) 2);
										BgL_search1891z00_3173:
											if ((BgL_iz00_3174 == (long) (BgL_l1890z00_1485)))
												{	/* Unsafe/crc.scm 310 */
													BgL_index1894z00_1494 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 310 */
													obj_t BgL_vz00_3176;

													BgL_vz00_3176 =
														VECTOR_REF(BgL_opt1889z00_38,
														(int) (BgL_iz00_3174));
													if ((BgL_vz00_3176 == BGl_keyword3210z00zz__crcz00))
														{	/* Unsafe/crc.scm 310 */
															BgL_index1894z00_1494 =
																(BgL_iz00_3174 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7192;

															BgL_iz00_7192 = (BgL_iz00_3174 + ((long) 2));
															BgL_iz00_3174 = BgL_iz00_7192;
															goto BgL_search1891z00_3173;
														}
												}
										}
										if ((BgL_index1894z00_1494 >= ((long) 0)))
											{	/* Unsafe/crc.scm 310 */
												BgL_bigzd2endianzf3z21_1491 =
													VECTOR_REF(BgL_opt1889z00_38,
													(int) (BgL_index1894z00_1494));
											}
										else
											{	/* Unsafe/crc.scm 310 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 310 */
										long BgL_index1895z00_1496;

										{
											long BgL_iz00_3188;

											BgL_iz00_3188 = ((long) 2);
										BgL_search1891z00_3187:
											if ((BgL_iz00_3188 == (long) (BgL_l1890z00_1485)))
												{	/* Unsafe/crc.scm 310 */
													BgL_index1895z00_1496 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 310 */
													obj_t BgL_vz00_3190;

													BgL_vz00_3190 =
														VECTOR_REF(BgL_opt1889z00_38,
														(int) (BgL_iz00_3188));
													if ((BgL_vz00_3190 == BGl_keyword3212z00zz__crcz00))
														{	/* Unsafe/crc.scm 310 */
															BgL_index1895z00_1496 =
																(BgL_iz00_3188 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7206;

															BgL_iz00_7206 = (BgL_iz00_3188 + ((long) 2));
															BgL_iz00_3188 = BgL_iz00_7206;
															goto BgL_search1891z00_3187;
														}
												}
										}
										if ((BgL_index1895z00_1496 >= ((long) 0)))
											{	/* Unsafe/crc.scm 310 */
												BgL_finalzd2xorzd2_1492 =
													VECTOR_REF(BgL_opt1889z00_38,
													(int) (BgL_index1895z00_1496));
											}
										else
											{	/* Unsafe/crc.scm 310 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 310 */
										long BgL_index1896z00_1498;

										{
											long BgL_iz00_3202;

											BgL_iz00_3202 = ((long) 2);
										BgL_search1891z00_3201:
											if ((BgL_iz00_3202 == (long) (BgL_l1890z00_1485)))
												{	/* Unsafe/crc.scm 310 */
													BgL_index1896z00_1498 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 310 */
													obj_t BgL_vz00_3204;

													BgL_vz00_3204 =
														VECTOR_REF(BgL_opt1889z00_38,
														(int) (BgL_iz00_3202));
													if ((BgL_vz00_3204 == BGl_keyword3214z00zz__crcz00))
														{	/* Unsafe/crc.scm 310 */
															BgL_index1896z00_1498 =
																(BgL_iz00_3202 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7220;

															BgL_iz00_7220 = (BgL_iz00_3202 + ((long) 2));
															BgL_iz00_3202 = BgL_iz00_7220;
															goto BgL_search1891z00_3201;
														}
												}
										}
										if ((BgL_index1896z00_1498 >= ((long) 0)))
											{	/* Unsafe/crc.scm 310 */
												BgL_initz00_1493 =
													VECTOR_REF(BgL_opt1889z00_38,
													(int) (BgL_index1896z00_1498));
											}
										else
											{	/* Unsafe/crc.scm 310 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 310 */
										obj_t BgL_arg2391z00_1500;

										obj_t BgL_arg2392z00_1501;

										BgL_arg2391z00_1500 =
											VECTOR_REF(BgL_opt1889z00_38, (int) (((long) 0)));
										BgL_arg2392z00_1501 =
											VECTOR_REF(BgL_opt1889z00_38, (int) (((long) 1)));
										{	/* Unsafe/crc.scm 310 */
											obj_t BgL_bigzd2endianzf3z21_1502;

											BgL_bigzd2endianzf3z21_1502 = BgL_bigzd2endianzf3z21_1491;
											{	/* Unsafe/crc.scm 310 */
												obj_t BgL_finalzd2xorzd2_1503;

												BgL_finalzd2xorzd2_1503 = BgL_finalzd2xorzd2_1492;
												{	/* Unsafe/crc.scm 310 */
													obj_t BgL_initz00_1504;

													BgL_initz00_1504 = BgL_initz00_1493;
													if (STRINGP(BgL_arg2392z00_1501))
														{	/* Unsafe/crc.scm 310 */
															obj_t BgL_arg2397z00_3221;

															{	/* Unsafe/crc.scm 310 */
																obj_t BgL_g2398z00_3222;

																BgL_g2398z00_3222 = BgL_arg2392z00_1501;
																{	/* Unsafe/crc.scm 310 */

																	BgL_arg2397z00_3221 =
																		BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
																		(BgL_g2398z00_3222, BINT(((long) 0)));
															}}
															{	/* Unsafe/crc.scm 310 */
																obj_t BgL_auxz00_7234;

																if (INPUT_PORTP(BgL_arg2397z00_3221))
																	{	/* Unsafe/crc.scm 310 */
																		BgL_auxz00_7234 = BgL_arg2397z00_3221;
																	}
																else
																	{
																		obj_t BgL_auxz00_7237;

																		BgL_auxz00_7237 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3189z00zz__crcz00,
																			BINT(((long) 12664)),
																			BGl_string3216z00zz__crcz00,
																			BGl_string3217z00zz__crcz00,
																			BgL_arg2397z00_3221);
																		FAILURE(BgL_auxz00_7237, BFALSE, BFALSE);
																	}
																return
																	BGl_crczd2fastzd2portz00zz__crcz00
																	(BgL_arg2391z00_1500, BgL_auxz00_7234,
																	BgL_initz00_1504, BgL_finalzd2xorzd2_1503,
																	BgL_bigzd2endianzf3z21_1502);
															}
														}
													else
														{	/* Unsafe/crc.scm 310 */
															if (INPUT_PORTP(BgL_arg2392z00_1501))
																{	/* Unsafe/crc.scm 310 */
																	return
																		BGl_crczd2fastzd2portz00zz__crcz00
																		(BgL_arg2391z00_1500, BgL_arg2392z00_1501,
																		BgL_initz00_1504, BgL_finalzd2xorzd2_1503,
																		BgL_bigzd2endianzf3z21_1502);
																}
															else
																{	/* Unsafe/crc.scm 310 */
																	if (BGL_MMAPP(BgL_arg2392z00_1501))
																		{	/* Unsafe/crc.scm 310 */
																			obj_t BgL_auxz00_7247;

																			if (BGL_MMAPP(BgL_arg2392z00_1501))
																				{	/* Unsafe/crc.scm 310 */
																					BgL_auxz00_7247 = BgL_arg2392z00_1501;
																				}
																			else
																				{
																					obj_t BgL_auxz00_7250;

																					BgL_auxz00_7250 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3189z00zz__crcz00,
																						BINT(((long) 12664)),
																						BGl_string3216z00zz__crcz00,
																						BGl_string3218z00zz__crcz00,
																						BgL_arg2392z00_1501);
																					FAILURE(BgL_auxz00_7250, BFALSE,
																						BFALSE);
																				}
																			return
																				BGl_crczd2fastzd2mmapz00zz__crcz00
																				(BgL_arg2391z00_1500, BgL_auxz00_7247,
																				BgL_initz00_1504,
																				BgL_finalzd2xorzd2_1503,
																				BgL_bigzd2endianzf3z21_1502);
																		}
																	else
																		{	/* Unsafe/crc.scm 310 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_symbol3219z00zz__crcz00,
																				BGl_string3221z00zz__crcz00,
																				BgL_arg2392z00_1501);
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
	}



/* crc */
	BGL_EXPORTED_DEF obj_t BGl_crcz00zz__crcz00(obj_t BgL_namez00_33,
		obj_t BgL_objz00_34, obj_t BgL_bigzd2endianzf3z21_35,
		obj_t BgL_finalzd2xorzd2_36, obj_t BgL_initz00_37)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 310 */
			if (STRINGP(BgL_objz00_34))
				{	/* Unsafe/crc.scm 312 */
					obj_t BgL_arg2397z00_3252;

					{	/* Unsafe/crc.scm 312 */
						obj_t BgL_g2398z00_3253;

						BgL_g2398z00_3253 = BgL_objz00_34;
						{	/* Unsafe/crc.scm 312 */

							BgL_arg2397z00_3252 =
								BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
								(BgL_g2398z00_3253, BINT(((long) 0)));
					}}
					return
						BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_33,
						BgL_arg2397z00_3252, BgL_initz00_37, BgL_finalzd2xorzd2_36,
						BgL_bigzd2endianzf3z21_35);
				}
			else
				{	/* Unsafe/crc.scm 312 */
					if (INPUT_PORTP(BgL_objz00_34))
						{	/* Unsafe/crc.scm 312 */
							return
								BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_33,
								BgL_objz00_34, BgL_initz00_37, BgL_finalzd2xorzd2_36,
								BgL_bigzd2endianzf3z21_35);
						}
					else
						{	/* Unsafe/crc.scm 312 */
							if (BGL_MMAPP(BgL_objz00_34))
								{	/* Unsafe/crc.scm 312 */
									return
										BGl_crczd2fastzd2mmapz00zz__crcz00(BgL_namez00_33,
										BgL_objz00_34, BgL_initz00_37, BgL_finalzd2xorzd2_36,
										BgL_bigzd2endianzf3z21_35);
								}
							else
								{	/* Unsafe/crc.scm 312 */
									return
										BGl_errorz00zz__errorz00(BGl_symbol3219z00zz__crcz00,
										BGl_string3221z00zz__crcz00, BgL_objz00_34);
								}
						}
				}
		}
	}



/* _crc-file */
	obj_t BGl__crczd2filezd2zz__crcz00(obj_t BgL_envz00_46,
		obj_t BgL_opt1897z00_45)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 324 */
			{	/* Unsafe/crc.scm 324 */
				int BgL_l1898z00_1515;

				BgL_l1898z00_1515 = VECTOR_LENGTH(BgL_opt1897z00_45);
				{	/* Unsafe/crc.scm 324 */
					obj_t BgL_namez00_1519;

					obj_t BgL_fz00_1520;

					BgL_namez00_1519 = VECTOR_REF(BgL_opt1897z00_45, (int) (((long) 0)));
					BgL_fz00_1520 = VECTOR_REF(BgL_opt1897z00_45, (int) (((long) 1)));
					{	/* Unsafe/crc.scm 324 */
						obj_t BgL_bigzd2endianzf3z21_1521;

						BgL_bigzd2endianzf3z21_1521 = BTRUE;
						{	/* Unsafe/crc.scm 324 */
							obj_t BgL_finalzd2xorzd2_1522;

							BgL_finalzd2xorzd2_1522 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 324 */
								obj_t BgL_initz00_1523;

								BgL_initz00_1523 = BINT(((long) 0));
								{	/* Unsafe/crc.scm 324 */

									{	/* Unsafe/crc.scm 324 */
										long BgL_index1902z00_1524;

										{
											long BgL_iz00_3262;

											BgL_iz00_3262 = ((long) 2);
										BgL_search1899z00_3261:
											if ((BgL_iz00_3262 == (long) (BgL_l1898z00_1515)))
												{	/* Unsafe/crc.scm 324 */
													BgL_index1902z00_1524 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 324 */
													obj_t BgL_vz00_3264;

													BgL_vz00_3264 =
														VECTOR_REF(BgL_opt1897z00_45,
														(int) (BgL_iz00_3262));
													if ((BgL_vz00_3264 == BGl_keyword3210z00zz__crcz00))
														{	/* Unsafe/crc.scm 324 */
															BgL_index1902z00_1524 =
																(BgL_iz00_3262 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7283;

															BgL_iz00_7283 = (BgL_iz00_3262 + ((long) 2));
															BgL_iz00_3262 = BgL_iz00_7283;
															goto BgL_search1899z00_3261;
														}
												}
										}
										if ((BgL_index1902z00_1524 >= ((long) 0)))
											{	/* Unsafe/crc.scm 324 */
												BgL_bigzd2endianzf3z21_1521 =
													VECTOR_REF(BgL_opt1897z00_45,
													(int) (BgL_index1902z00_1524));
											}
										else
											{	/* Unsafe/crc.scm 324 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 324 */
										long BgL_index1903z00_1526;

										{
											long BgL_iz00_3276;

											BgL_iz00_3276 = ((long) 2);
										BgL_search1899z00_3275:
											if ((BgL_iz00_3276 == (long) (BgL_l1898z00_1515)))
												{	/* Unsafe/crc.scm 324 */
													BgL_index1903z00_1526 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 324 */
													obj_t BgL_vz00_3278;

													BgL_vz00_3278 =
														VECTOR_REF(BgL_opt1897z00_45,
														(int) (BgL_iz00_3276));
													if ((BgL_vz00_3278 == BGl_keyword3212z00zz__crcz00))
														{	/* Unsafe/crc.scm 324 */
															BgL_index1903z00_1526 =
																(BgL_iz00_3276 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7297;

															BgL_iz00_7297 = (BgL_iz00_3276 + ((long) 2));
															BgL_iz00_3276 = BgL_iz00_7297;
															goto BgL_search1899z00_3275;
														}
												}
										}
										if ((BgL_index1903z00_1526 >= ((long) 0)))
											{	/* Unsafe/crc.scm 324 */
												BgL_finalzd2xorzd2_1522 =
													VECTOR_REF(BgL_opt1897z00_45,
													(int) (BgL_index1903z00_1526));
											}
										else
											{	/* Unsafe/crc.scm 324 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 324 */
										long BgL_index1904z00_1528;

										{
											long BgL_iz00_3290;

											BgL_iz00_3290 = ((long) 2);
										BgL_search1899z00_3289:
											if ((BgL_iz00_3290 == (long) (BgL_l1898z00_1515)))
												{	/* Unsafe/crc.scm 324 */
													BgL_index1904z00_1528 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 324 */
													obj_t BgL_vz00_3292;

													BgL_vz00_3292 =
														VECTOR_REF(BgL_opt1897z00_45,
														(int) (BgL_iz00_3290));
													if ((BgL_vz00_3292 == BGl_keyword3214z00zz__crcz00))
														{	/* Unsafe/crc.scm 324 */
															BgL_index1904z00_1528 =
																(BgL_iz00_3290 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7311;

															BgL_iz00_7311 = (BgL_iz00_3290 + ((long) 2));
															BgL_iz00_3290 = BgL_iz00_7311;
															goto BgL_search1899z00_3289;
														}
												}
										}
										if ((BgL_index1904z00_1528 >= ((long) 0)))
											{	/* Unsafe/crc.scm 324 */
												BgL_initz00_1523 =
													VECTOR_REF(BgL_opt1897z00_45,
													(int) (BgL_index1904z00_1528));
											}
										else
											{	/* Unsafe/crc.scm 324 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 324 */
										obj_t BgL_arg2404z00_1530;

										obj_t BgL_arg2405z00_1531;

										BgL_arg2404z00_1530 =
											VECTOR_REF(BgL_opt1897z00_45, (int) (((long) 0)));
										BgL_arg2405z00_1531 =
											VECTOR_REF(BgL_opt1897z00_45, (int) (((long) 1)));
										{	/* Unsafe/crc.scm 324 */
											obj_t BgL_bigzd2endianzf3z21_1532;

											BgL_bigzd2endianzf3z21_1532 = BgL_bigzd2endianzf3z21_1521;
											{	/* Unsafe/crc.scm 324 */
												obj_t BgL_finalzd2xorzd2_1533;

												BgL_finalzd2xorzd2_1533 = BgL_finalzd2xorzd2_1522;
												{	/* Unsafe/crc.scm 324 */
													obj_t BgL_initz00_1534;

													BgL_initz00_1534 = BgL_initz00_1523;
													{	/* Unsafe/crc.scm 324 */
														obj_t BgL_fz00_3304;

														if (STRINGP(BgL_arg2405z00_1531))
															{	/* Unsafe/crc.scm 324 */
																BgL_fz00_3304 = BgL_arg2405z00_1531;
															}
														else
															{
																obj_t BgL_auxz00_7323;

																BgL_auxz00_7323 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3189z00zz__crcz00,
																	BINT(((long) 13288)),
																	BGl_string3222z00zz__crcz00,
																	BGl_string3223z00zz__crcz00,
																	BgL_arg2405z00_1531);
																FAILURE(BgL_auxz00_7323, BFALSE, BFALSE);
															}
														{	/* Unsafe/crc.scm 324 */
															obj_t BgL_pz00_3308;

															{	/* Unsafe/crc.scm 324 */

																BgL_pz00_3308 =
																	BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																	(BgL_fz00_3304, BTRUE);
															}
															if (CBOOL(BgL_pz00_3308))
																{	/* Unsafe/crc.scm 324 */
																	BFALSE;
																}
															else
																{	/* Unsafe/crc.scm 324 */
																	BGl_errorz00zz__errorz00
																		(BGl_symbol3224z00zz__crcz00,
																		BGl_string3226z00zz__crcz00, BgL_fz00_3304);
																}
															{	/* Unsafe/crc.scm 324 */
																obj_t BgL_val1835z00_3311;

																BgL_val1835z00_3311 =
																	BGl_zc3exitza32412ze3z72zf1zz__crcz00
																	(BgL_bigzd2endianzf3z21_1532,
																	BgL_finalzd2xorzd2_1533, BgL_initz00_1534,
																	BgL_pz00_3308, BgL_arg2404z00_1530);
																{	/* Unsafe/crc.scm 324 */
																	obj_t BgL_portz00_3318;

																	if (INPUT_PORTP(BgL_pz00_3308))
																		{	/* Unsafe/crc.scm 324 */
																			BgL_portz00_3318 = BgL_pz00_3308;
																		}
																	else
																		{
																			obj_t BgL_auxz00_7334;

																			BgL_auxz00_7334 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3189z00zz__crcz00,
																				BINT(((long) 13288)),
																				BGl_string3222z00zz__crcz00,
																				BGl_string3217z00zz__crcz00,
																				BgL_pz00_3308);
																			FAILURE(BgL_auxz00_7334, BFALSE, BFALSE);
																		}
																	bgl_close_input_port(BgL_portz00_3318);
																}
																if (CBOOL
																	(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
																		(BgL_val1835z00_3311)))
																	{	/* Unsafe/crc.scm 324 */
																		obj_t BgL_arg2410z00_3316;

																		obj_t BgL_arg2411z00_3317;

																		{	/* Unsafe/crc.scm 324 */
																			obj_t BgL_pairz00_3319;

																			if (PAIRP(BgL_val1835z00_3311))
																				{	/* Unsafe/crc.scm 324 */
																					BgL_pairz00_3319 =
																						BgL_val1835z00_3311;
																				}
																			else
																				{
																					obj_t BgL_auxz00_7344;

																					BgL_auxz00_7344 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3189z00zz__crcz00,
																						BINT(((long) 13288)),
																						BGl_string3222z00zz__crcz00,
																						BGl_string3227z00zz__crcz00,
																						BgL_val1835z00_3311);
																					FAILURE(BgL_auxz00_7344, BFALSE,
																						BFALSE);
																				}
																			BgL_arg2410z00_3316 =
																				CAR(BgL_pairz00_3319);
																		}
																		BgL_arg2411z00_3317 =
																			CDR(BgL_val1835z00_3311);
																		return
																			BGl_unwindzd2untilz12zc0zz__bexitz00
																			(BgL_arg2410z00_3316,
																			BgL_arg2411z00_3317);
																	}
																else
																	{	/* Unsafe/crc.scm 324 */
																		return BgL_val1835z00_3311;
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
		}
	}



/* <exit:2412>' */
	obj_t BGl_zc3exitza32412ze3z72zf1zz__crcz00(obj_t BgL_bigzd2endianzf3z21_5777,
		obj_t BgL_finalzd2xorzd2_5776, obj_t BgL_initz00_5775, obj_t BgL_pz00_5774,
		obj_t BgL_namez00_5773)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 329 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1836z00_3313;

			if (SET_EXIT(BgL_an_exit1836z00_3313))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1836z00_3313 = (void *) jmpbuf;
					{	/* Unsafe/crc.scm 324 */

						PUSH_EXIT(BgL_an_exit1836z00_3313, ((long) 0));
						{	/* Unsafe/crc.scm 324 */
							obj_t BgL_val1837z00_3314;

							BgL_val1837z00_3314 =
								BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_5773,
								BgL_pz00_5774, BgL_initz00_5775, BgL_finalzd2xorzd2_5776,
								BgL_bigzd2endianzf3z21_5777);
							POP_EXIT();
							return BgL_val1837z00_3314;
						}
					}
				}
		}
	}



/* crc-file */
	BGL_EXPORTED_DEF obj_t BGl_crczd2filezd2zz__crcz00(obj_t BgL_namez00_40,
		obj_t BgL_fz00_41, obj_t BgL_bigzd2endianzf3z21_42,
		obj_t BgL_finalzd2xorzd2_43, obj_t BgL_initz00_44)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 324 */
			{	/* Unsafe/crc.scm 325 */
				obj_t BgL_pz00_3343;

				{	/* Unsafe/crc.scm 325 */

					BgL_pz00_3343 =
						BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_fz00_41,
						BTRUE);
				}
				if (CBOOL(BgL_pz00_3343))
					{	/* Unsafe/crc.scm 325 */
						BFALSE;
					}
				else
					{	/* Unsafe/crc.scm 325 */
						BGl_errorz00zz__errorz00(BGl_symbol3224z00zz__crcz00,
							BGl_string3226z00zz__crcz00, BgL_fz00_41);
					}
				{	/* Unsafe/crc.scm 325 */
					obj_t BgL_val1835z00_3346;

					BgL_val1835z00_3346 =
						BGl_zc3exitza32412ze3z83zz__crcz00(BgL_bigzd2endianzf3z21_42,
						BgL_finalzd2xorzd2_43, BgL_initz00_44, BgL_pz00_3343,
						BgL_namez00_40);
					bgl_close_input_port(BgL_pz00_3343);
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1835z00_3346)))
						{	/* Unsafe/crc.scm 325 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val1835z00_3346),
								CDR(BgL_val1835z00_3346));
						}
					else
						{	/* Unsafe/crc.scm 325 */
							return BgL_val1835z00_3346;
						}
				}
			}
		}
	}



/* <exit:2412> */
	obj_t BGl_zc3exitza32412ze3z83zz__crcz00(obj_t BgL_bigzd2endianzf3z21_5772,
		obj_t BgL_finalzd2xorzd2_5771, obj_t BgL_initz00_5770, obj_t BgL_pz00_5769,
		obj_t BgL_namez00_5768)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 329 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1836z00_3348;

			if (SET_EXIT(BgL_an_exit1836z00_3348))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1836z00_3348 = (void *) jmpbuf;
					{	/* Unsafe/crc.scm 325 */

						PUSH_EXIT(BgL_an_exit1836z00_3348, ((long) 0));
						{	/* Unsafe/crc.scm 325 */
							obj_t BgL_val1837z00_3349;

							BgL_val1837z00_3349 =
								BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_5768,
								BgL_pz00_5769, BgL_initz00_5770, BgL_finalzd2xorzd2_5771,
								BgL_bigzd2endianzf3z21_5772);
							POP_EXIT();
							return BgL_val1837z00_3349;
						}
					}
				}
		}
	}



/* _crc-string */
	obj_t BGl__crczd2stringzd2zz__crcz00(obj_t BgL_envz00_53,
		obj_t BgL_opt1905z00_52)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 334 */
			{	/* Unsafe/crc.scm 334 */
				int BgL_l1906z00_1549;

				BgL_l1906z00_1549 = VECTOR_LENGTH(BgL_opt1905z00_52);
				{	/* Unsafe/crc.scm 334 */
					obj_t BgL_namez00_1553;

					obj_t BgL_strz00_1554;

					BgL_namez00_1553 = VECTOR_REF(BgL_opt1905z00_52, (int) (((long) 0)));
					BgL_strz00_1554 = VECTOR_REF(BgL_opt1905z00_52, (int) (((long) 1)));
					{	/* Unsafe/crc.scm 334 */
						obj_t BgL_bigzd2endianzf3z21_1555;

						BgL_bigzd2endianzf3z21_1555 = BTRUE;
						{	/* Unsafe/crc.scm 334 */
							obj_t BgL_finalzd2xorzd2_1556;

							BgL_finalzd2xorzd2_1556 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 334 */
								obj_t BgL_initz00_1557;

								BgL_initz00_1557 = BINT(((long) 0));
								{	/* Unsafe/crc.scm 334 */

									{	/* Unsafe/crc.scm 334 */
										long BgL_index1910z00_1558;

										{
											long BgL_iz00_3358;

											BgL_iz00_3358 = ((long) 2);
										BgL_search1907z00_3357:
											if ((BgL_iz00_3358 == (long) (BgL_l1906z00_1549)))
												{	/* Unsafe/crc.scm 334 */
													BgL_index1910z00_1558 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 334 */
													obj_t BgL_vz00_3360;

													BgL_vz00_3360 =
														VECTOR_REF(BgL_opt1905z00_52,
														(int) (BgL_iz00_3358));
													if ((BgL_vz00_3360 == BGl_keyword3210z00zz__crcz00))
														{	/* Unsafe/crc.scm 334 */
															BgL_index1910z00_1558 =
																(BgL_iz00_3358 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7388;

															BgL_iz00_7388 = (BgL_iz00_3358 + ((long) 2));
															BgL_iz00_3358 = BgL_iz00_7388;
															goto BgL_search1907z00_3357;
														}
												}
										}
										if ((BgL_index1910z00_1558 >= ((long) 0)))
											{	/* Unsafe/crc.scm 334 */
												BgL_bigzd2endianzf3z21_1555 =
													VECTOR_REF(BgL_opt1905z00_52,
													(int) (BgL_index1910z00_1558));
											}
										else
											{	/* Unsafe/crc.scm 334 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 334 */
										long BgL_index1911z00_1560;

										{
											long BgL_iz00_3372;

											BgL_iz00_3372 = ((long) 2);
										BgL_search1907z00_3371:
											if ((BgL_iz00_3372 == (long) (BgL_l1906z00_1549)))
												{	/* Unsafe/crc.scm 334 */
													BgL_index1911z00_1560 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 334 */
													obj_t BgL_vz00_3374;

													BgL_vz00_3374 =
														VECTOR_REF(BgL_opt1905z00_52,
														(int) (BgL_iz00_3372));
													if ((BgL_vz00_3374 == BGl_keyword3212z00zz__crcz00))
														{	/* Unsafe/crc.scm 334 */
															BgL_index1911z00_1560 =
																(BgL_iz00_3372 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7402;

															BgL_iz00_7402 = (BgL_iz00_3372 + ((long) 2));
															BgL_iz00_3372 = BgL_iz00_7402;
															goto BgL_search1907z00_3371;
														}
												}
										}
										if ((BgL_index1911z00_1560 >= ((long) 0)))
											{	/* Unsafe/crc.scm 334 */
												BgL_finalzd2xorzd2_1556 =
													VECTOR_REF(BgL_opt1905z00_52,
													(int) (BgL_index1911z00_1560));
											}
										else
											{	/* Unsafe/crc.scm 334 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 334 */
										long BgL_index1912z00_1562;

										{
											long BgL_iz00_3386;

											BgL_iz00_3386 = ((long) 2);
										BgL_search1907z00_3385:
											if ((BgL_iz00_3386 == (long) (BgL_l1906z00_1549)))
												{	/* Unsafe/crc.scm 334 */
													BgL_index1912z00_1562 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 334 */
													obj_t BgL_vz00_3388;

													BgL_vz00_3388 =
														VECTOR_REF(BgL_opt1905z00_52,
														(int) (BgL_iz00_3386));
													if ((BgL_vz00_3388 == BGl_keyword3214z00zz__crcz00))
														{	/* Unsafe/crc.scm 334 */
															BgL_index1912z00_1562 =
																(BgL_iz00_3386 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7416;

															BgL_iz00_7416 = (BgL_iz00_3386 + ((long) 2));
															BgL_iz00_3386 = BgL_iz00_7416;
															goto BgL_search1907z00_3385;
														}
												}
										}
										if ((BgL_index1912z00_1562 >= ((long) 0)))
											{	/* Unsafe/crc.scm 334 */
												BgL_initz00_1557 =
													VECTOR_REF(BgL_opt1905z00_52,
													(int) (BgL_index1912z00_1562));
											}
										else
											{	/* Unsafe/crc.scm 334 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 334 */
										obj_t BgL_arg2417z00_1564;

										obj_t BgL_arg2418z00_1565;

										BgL_arg2417z00_1564 =
											VECTOR_REF(BgL_opt1905z00_52, (int) (((long) 0)));
										BgL_arg2418z00_1565 =
											VECTOR_REF(BgL_opt1905z00_52, (int) (((long) 1)));
										{	/* Unsafe/crc.scm 334 */
											obj_t BgL_bigzd2endianzf3z21_1566;

											BgL_bigzd2endianzf3z21_1566 = BgL_bigzd2endianzf3z21_1555;
											{	/* Unsafe/crc.scm 334 */
												obj_t BgL_finalzd2xorzd2_1567;

												BgL_finalzd2xorzd2_1567 = BgL_finalzd2xorzd2_1556;
												{	/* Unsafe/crc.scm 334 */
													obj_t BgL_initz00_1568;

													BgL_initz00_1568 = BgL_initz00_1557;
													{	/* Unsafe/crc.scm 334 */
														obj_t BgL_strz00_3400;

														if (STRINGP(BgL_arg2418z00_1565))
															{	/* Unsafe/crc.scm 334 */
																BgL_strz00_3400 = BgL_arg2418z00_1565;
															}
														else
															{
																obj_t BgL_auxz00_7428;

																BgL_auxz00_7428 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3189z00zz__crcz00,
																	BINT(((long) 13785)),
																	BGl_string3228z00zz__crcz00,
																	BGl_string3223z00zz__crcz00,
																	BgL_arg2418z00_1565);
																FAILURE(BgL_auxz00_7428, BFALSE, BFALSE);
															}
														{	/* Unsafe/crc.scm 334 */
															obj_t BgL_arg2422z00_3404;

															{	/* Unsafe/crc.scm 334 */

																BgL_arg2422z00_3404 =
																	BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
																	(BgL_strz00_3400, BINT(((long) 0)));
															}
															{	/* Unsafe/crc.scm 334 */
																obj_t BgL_auxz00_7434;

																if (INPUT_PORTP(BgL_arg2422z00_3404))
																	{	/* Unsafe/crc.scm 334 */
																		BgL_auxz00_7434 = BgL_arg2422z00_3404;
																	}
																else
																	{
																		obj_t BgL_auxz00_7437;

																		BgL_auxz00_7437 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3189z00zz__crcz00,
																			BINT(((long) 13785)),
																			BGl_string3228z00zz__crcz00,
																			BGl_string3217z00zz__crcz00,
																			BgL_arg2422z00_3404);
																		FAILURE(BgL_auxz00_7437, BFALSE, BFALSE);
																	}
																return
																	BGl_crczd2fastzd2portz00zz__crcz00
																	(BgL_arg2417z00_1564, BgL_auxz00_7434,
																	BgL_initz00_1568, BgL_finalzd2xorzd2_1567,
																	BgL_bigzd2endianzf3z21_1566);
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
	}



/* crc-string */
	BGL_EXPORTED_DEF obj_t BGl_crczd2stringzd2zz__crcz00(obj_t BgL_namez00_47,
		obj_t BgL_strz00_48, obj_t BgL_bigzd2endianzf3z21_49,
		obj_t BgL_finalzd2xorzd2_50, obj_t BgL_initz00_51)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 334 */
			{	/* Unsafe/crc.scm 335 */
				obj_t BgL_arg2422z00_3429;

				{	/* Unsafe/crc.scm 335 */

					BgL_arg2422z00_3429 =
						BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_strz00_48,
						BINT(((long) 0)));
				}
				return
					BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_47,
					BgL_arg2422z00_3429, BgL_initz00_51, BgL_finalzd2xorzd2_50,
					BgL_bigzd2endianzf3z21_49);
			}
		}
	}



/* _crc-port */
	obj_t BGl__crczd2portzd2zz__crcz00(obj_t BgL_envz00_60,
		obj_t BgL_opt1913z00_59)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 340 */
			{	/* Unsafe/crc.scm 340 */
				int BgL_l1914z00_1576;

				BgL_l1914z00_1576 = VECTOR_LENGTH(BgL_opt1913z00_59);
				{	/* Unsafe/crc.scm 340 */
					obj_t BgL_namez00_1580;

					obj_t BgL_pz00_1581;

					BgL_namez00_1580 = VECTOR_REF(BgL_opt1913z00_59, (int) (((long) 0)));
					BgL_pz00_1581 = VECTOR_REF(BgL_opt1913z00_59, (int) (((long) 1)));
					{	/* Unsafe/crc.scm 340 */
						obj_t BgL_bigzd2endianzf3z21_1582;

						BgL_bigzd2endianzf3z21_1582 = BTRUE;
						{	/* Unsafe/crc.scm 340 */
							obj_t BgL_finalzd2xorzd2_1583;

							BgL_finalzd2xorzd2_1583 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 340 */
								obj_t BgL_initz00_1584;

								BgL_initz00_1584 = BINT(((long) 0));
								{	/* Unsafe/crc.scm 340 */

									{	/* Unsafe/crc.scm 340 */
										long BgL_index1918z00_1585;

										{
											long BgL_iz00_3434;

											BgL_iz00_3434 = ((long) 2);
										BgL_search1915z00_3433:
											if ((BgL_iz00_3434 == (long) (BgL_l1914z00_1576)))
												{	/* Unsafe/crc.scm 340 */
													BgL_index1918z00_1585 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 340 */
													obj_t BgL_vz00_3436;

													BgL_vz00_3436 =
														VECTOR_REF(BgL_opt1913z00_59,
														(int) (BgL_iz00_3434));
													if ((BgL_vz00_3436 == BGl_keyword3210z00zz__crcz00))
														{	/* Unsafe/crc.scm 340 */
															BgL_index1918z00_1585 =
																(BgL_iz00_3434 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7460;

															BgL_iz00_7460 = (BgL_iz00_3434 + ((long) 2));
															BgL_iz00_3434 = BgL_iz00_7460;
															goto BgL_search1915z00_3433;
														}
												}
										}
										if ((BgL_index1918z00_1585 >= ((long) 0)))
											{	/* Unsafe/crc.scm 340 */
												BgL_bigzd2endianzf3z21_1582 =
													VECTOR_REF(BgL_opt1913z00_59,
													(int) (BgL_index1918z00_1585));
											}
										else
											{	/* Unsafe/crc.scm 340 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 340 */
										long BgL_index1919z00_1587;

										{
											long BgL_iz00_3448;

											BgL_iz00_3448 = ((long) 2);
										BgL_search1915z00_3447:
											if ((BgL_iz00_3448 == (long) (BgL_l1914z00_1576)))
												{	/* Unsafe/crc.scm 340 */
													BgL_index1919z00_1587 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 340 */
													obj_t BgL_vz00_3450;

													BgL_vz00_3450 =
														VECTOR_REF(BgL_opt1913z00_59,
														(int) (BgL_iz00_3448));
													if ((BgL_vz00_3450 == BGl_keyword3212z00zz__crcz00))
														{	/* Unsafe/crc.scm 340 */
															BgL_index1919z00_1587 =
																(BgL_iz00_3448 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7474;

															BgL_iz00_7474 = (BgL_iz00_3448 + ((long) 2));
															BgL_iz00_3448 = BgL_iz00_7474;
															goto BgL_search1915z00_3447;
														}
												}
										}
										if ((BgL_index1919z00_1587 >= ((long) 0)))
											{	/* Unsafe/crc.scm 340 */
												BgL_finalzd2xorzd2_1583 =
													VECTOR_REF(BgL_opt1913z00_59,
													(int) (BgL_index1919z00_1587));
											}
										else
											{	/* Unsafe/crc.scm 340 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 340 */
										long BgL_index1920z00_1589;

										{
											long BgL_iz00_3462;

											BgL_iz00_3462 = ((long) 2);
										BgL_search1915z00_3461:
											if ((BgL_iz00_3462 == (long) (BgL_l1914z00_1576)))
												{	/* Unsafe/crc.scm 340 */
													BgL_index1920z00_1589 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 340 */
													obj_t BgL_vz00_3464;

													BgL_vz00_3464 =
														VECTOR_REF(BgL_opt1913z00_59,
														(int) (BgL_iz00_3462));
													if ((BgL_vz00_3464 == BGl_keyword3214z00zz__crcz00))
														{	/* Unsafe/crc.scm 340 */
															BgL_index1920z00_1589 =
																(BgL_iz00_3462 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7488;

															BgL_iz00_7488 = (BgL_iz00_3462 + ((long) 2));
															BgL_iz00_3462 = BgL_iz00_7488;
															goto BgL_search1915z00_3461;
														}
												}
										}
										if ((BgL_index1920z00_1589 >= ((long) 0)))
											{	/* Unsafe/crc.scm 340 */
												BgL_initz00_1584 =
													VECTOR_REF(BgL_opt1913z00_59,
													(int) (BgL_index1920z00_1589));
											}
										else
											{	/* Unsafe/crc.scm 340 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 340 */
										obj_t BgL_arg2426z00_1591;

										obj_t BgL_arg2427z00_1592;

										BgL_arg2426z00_1591 =
											VECTOR_REF(BgL_opt1913z00_59, (int) (((long) 0)));
										BgL_arg2427z00_1592 =
											VECTOR_REF(BgL_opt1913z00_59, (int) (((long) 1)));
										{	/* Unsafe/crc.scm 340 */
											obj_t BgL_bigzd2endianzf3z21_1593;

											BgL_bigzd2endianzf3z21_1593 = BgL_bigzd2endianzf3z21_1582;
											{	/* Unsafe/crc.scm 340 */
												obj_t BgL_finalzd2xorzd2_1594;

												BgL_finalzd2xorzd2_1594 = BgL_finalzd2xorzd2_1583;
												{	/* Unsafe/crc.scm 340 */
													obj_t BgL_initz00_1595;

													BgL_initz00_1595 = BgL_initz00_1584;
													{	/* Unsafe/crc.scm 340 */
														obj_t BgL_pz00_3476;

														if (INPUT_PORTP(BgL_arg2427z00_1592))
															{	/* Unsafe/crc.scm 340 */
																BgL_pz00_3476 = BgL_arg2427z00_1592;
															}
														else
															{
																obj_t BgL_auxz00_7500;

																BgL_auxz00_7500 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3189z00zz__crcz00,
																	BINT(((long) 14170)),
																	BGl_string3229z00zz__crcz00,
																	BGl_string3217z00zz__crcz00,
																	BgL_arg2427z00_1592);
																FAILURE(BgL_auxz00_7500, BFALSE, BFALSE);
															}
														return
															BGl_crczd2fastzd2portz00zz__crcz00
															(BgL_arg2426z00_1591, BgL_pz00_3476,
															BgL_initz00_1595, BgL_finalzd2xorzd2_1594,
															BgL_bigzd2endianzf3z21_1593);
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



/* crc-port */
	BGL_EXPORTED_DEF obj_t BGl_crczd2portzd2zz__crcz00(obj_t BgL_namez00_54,
		obj_t BgL_pz00_55, obj_t BgL_bigzd2endianzf3z21_56,
		obj_t BgL_finalzd2xorzd2_57, obj_t BgL_initz00_58)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 340 */
			return
				BGl_crczd2fastzd2portz00zz__crcz00(BgL_namez00_54, BgL_pz00_55,
				BgL_initz00_58, BgL_finalzd2xorzd2_57, BgL_bigzd2endianzf3z21_56);
		}
	}



/* _crc-mmap */
	obj_t BGl__crczd2mmapzd2zz__crcz00(obj_t BgL_envz00_67,
		obj_t BgL_opt1921z00_66)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 346 */
			{	/* Unsafe/crc.scm 346 */
				int BgL_l1922z00_1600;

				BgL_l1922z00_1600 = VECTOR_LENGTH(BgL_opt1921z00_66);
				{	/* Unsafe/crc.scm 346 */
					obj_t BgL_namez00_1604;

					obj_t BgL_mz00_1605;

					BgL_namez00_1604 = VECTOR_REF(BgL_opt1921z00_66, (int) (((long) 0)));
					BgL_mz00_1605 = VECTOR_REF(BgL_opt1921z00_66, (int) (((long) 1)));
					{	/* Unsafe/crc.scm 346 */
						obj_t BgL_bigzd2endianzf3z21_1606;

						BgL_bigzd2endianzf3z21_1606 = BTRUE;
						{	/* Unsafe/crc.scm 346 */
							obj_t BgL_finalzd2xorzd2_1607;

							BgL_finalzd2xorzd2_1607 = BINT(((long) 0));
							{	/* Unsafe/crc.scm 346 */
								obj_t BgL_initz00_1608;

								BgL_initz00_1608 = BINT(((long) 0));
								{	/* Unsafe/crc.scm 346 */

									{	/* Unsafe/crc.scm 346 */
										long BgL_index1926z00_1609;

										{
											long BgL_iz00_3504;

											BgL_iz00_3504 = ((long) 2);
										BgL_search1923z00_3503:
											if ((BgL_iz00_3504 == (long) (BgL_l1922z00_1600)))
												{	/* Unsafe/crc.scm 346 */
													BgL_index1926z00_1609 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 346 */
													obj_t BgL_vz00_3506;

													BgL_vz00_3506 =
														VECTOR_REF(BgL_opt1921z00_66,
														(int) (BgL_iz00_3504));
													if ((BgL_vz00_3506 == BGl_keyword3210z00zz__crcz00))
														{	/* Unsafe/crc.scm 346 */
															BgL_index1926z00_1609 =
																(BgL_iz00_3504 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7521;

															BgL_iz00_7521 = (BgL_iz00_3504 + ((long) 2));
															BgL_iz00_3504 = BgL_iz00_7521;
															goto BgL_search1923z00_3503;
														}
												}
										}
										if ((BgL_index1926z00_1609 >= ((long) 0)))
											{	/* Unsafe/crc.scm 346 */
												BgL_bigzd2endianzf3z21_1606 =
													VECTOR_REF(BgL_opt1921z00_66,
													(int) (BgL_index1926z00_1609));
											}
										else
											{	/* Unsafe/crc.scm 346 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 346 */
										long BgL_index1927z00_1611;

										{
											long BgL_iz00_3518;

											BgL_iz00_3518 = ((long) 2);
										BgL_search1923z00_3517:
											if ((BgL_iz00_3518 == (long) (BgL_l1922z00_1600)))
												{	/* Unsafe/crc.scm 346 */
													BgL_index1927z00_1611 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 346 */
													obj_t BgL_vz00_3520;

													BgL_vz00_3520 =
														VECTOR_REF(BgL_opt1921z00_66,
														(int) (BgL_iz00_3518));
													if ((BgL_vz00_3520 == BGl_keyword3212z00zz__crcz00))
														{	/* Unsafe/crc.scm 346 */
															BgL_index1927z00_1611 =
																(BgL_iz00_3518 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7535;

															BgL_iz00_7535 = (BgL_iz00_3518 + ((long) 2));
															BgL_iz00_3518 = BgL_iz00_7535;
															goto BgL_search1923z00_3517;
														}
												}
										}
										if ((BgL_index1927z00_1611 >= ((long) 0)))
											{	/* Unsafe/crc.scm 346 */
												BgL_finalzd2xorzd2_1607 =
													VECTOR_REF(BgL_opt1921z00_66,
													(int) (BgL_index1927z00_1611));
											}
										else
											{	/* Unsafe/crc.scm 346 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 346 */
										long BgL_index1928z00_1613;

										{
											long BgL_iz00_3532;

											BgL_iz00_3532 = ((long) 2);
										BgL_search1923z00_3531:
											if ((BgL_iz00_3532 == (long) (BgL_l1922z00_1600)))
												{	/* Unsafe/crc.scm 346 */
													BgL_index1928z00_1613 = ((long) -1);
												}
											else
												{	/* Unsafe/crc.scm 346 */
													obj_t BgL_vz00_3534;

													BgL_vz00_3534 =
														VECTOR_REF(BgL_opt1921z00_66,
														(int) (BgL_iz00_3532));
													if ((BgL_vz00_3534 == BGl_keyword3214z00zz__crcz00))
														{	/* Unsafe/crc.scm 346 */
															BgL_index1928z00_1613 =
																(BgL_iz00_3532 + ((long) 1));
														}
													else
														{
															long BgL_iz00_7549;

															BgL_iz00_7549 = (BgL_iz00_3532 + ((long) 2));
															BgL_iz00_3532 = BgL_iz00_7549;
															goto BgL_search1923z00_3531;
														}
												}
										}
										if ((BgL_index1928z00_1613 >= ((long) 0)))
											{	/* Unsafe/crc.scm 346 */
												BgL_initz00_1608 =
													VECTOR_REF(BgL_opt1921z00_66,
													(int) (BgL_index1928z00_1613));
											}
										else
											{	/* Unsafe/crc.scm 346 */
												BFALSE;
											}
									}
									{	/* Unsafe/crc.scm 346 */
										obj_t BgL_arg2434z00_1615;

										obj_t BgL_arg2435z00_1616;

										BgL_arg2434z00_1615 =
											VECTOR_REF(BgL_opt1921z00_66, (int) (((long) 0)));
										BgL_arg2435z00_1616 =
											VECTOR_REF(BgL_opt1921z00_66, (int) (((long) 1)));
										{	/* Unsafe/crc.scm 346 */
											obj_t BgL_bigzd2endianzf3z21_1617;

											BgL_bigzd2endianzf3z21_1617 = BgL_bigzd2endianzf3z21_1606;
											{	/* Unsafe/crc.scm 346 */
												obj_t BgL_finalzd2xorzd2_1618;

												BgL_finalzd2xorzd2_1618 = BgL_finalzd2xorzd2_1607;
												{	/* Unsafe/crc.scm 346 */
													obj_t BgL_initz00_1619;

													BgL_initz00_1619 = BgL_initz00_1608;
													{	/* Unsafe/crc.scm 346 */
														obj_t BgL_mz00_3546;

														if (BGL_MMAPP(BgL_arg2435z00_1616))
															{	/* Unsafe/crc.scm 346 */
																BgL_mz00_3546 = BgL_arg2435z00_1616;
															}
														else
															{
																obj_t BgL_auxz00_7561;

																BgL_auxz00_7561 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3189z00zz__crcz00,
																	BINT(((long) 14532)),
																	BGl_string3230z00zz__crcz00,
																	BGl_string3218z00zz__crcz00,
																	BgL_arg2435z00_1616);
																FAILURE(BgL_auxz00_7561, BFALSE, BFALSE);
															}
														return
															BGl_crczd2fastzd2mmapz00zz__crcz00
															(BgL_arg2434z00_1615, BgL_mz00_3546,
															BgL_initz00_1619, BgL_finalzd2xorzd2_1618,
															BgL_bigzd2endianzf3z21_1617);
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



/* crc-mmap */
	BGL_EXPORTED_DEF obj_t BGl_crczd2mmapzd2zz__crcz00(obj_t BgL_namez00_61,
		obj_t BgL_mz00_62, obj_t BgL_bigzd2endianzf3z21_63,
		obj_t BgL_finalzd2xorzd2_64, obj_t BgL_initz00_65)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 346 */
			return
				BGl_crczd2fastzd2mmapz00zz__crcz00(BgL_namez00_61, BgL_mz00_62,
				BgL_initz00_65, BgL_finalzd2xorzd2_64, BgL_bigzd2endianzf3z21_63);
		}
	}



/* get-crc */
	obj_t BGl_getzd2crczd2zz__crcz00(obj_t BgL_namez00_68)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 352 */
			{	/* Unsafe/crc.scm 353 */
				obj_t BgL_crczd2desczd2_1624;

				BgL_crczd2desczd2_1624 =
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_namez00_68,
					BGl_za2crcsza2z00zz__crcz00);
				if (CBOOL(BgL_crczd2desczd2_1624))
					{	/* Unsafe/crc.scm 354 */
						BFALSE;
					}
				else
					{	/* Unsafe/crc.scm 354 */
						BGl_errorz00zz__errorz00(BGl_symbol3219z00zz__crcz00,
							BGl_string3231z00zz__crcz00, BgL_namez00_68);
					}
				{	/* Unsafe/crc.scm 356 */
					obj_t BgL_lenz00_1625;

					obj_t BgL_polyz00_1626;

					obj_t BgL_lsbzd2polyzd2_1627;

					{	/* Unsafe/crc.scm 356 */
						obj_t BgL_pairz00_3572;

						BgL_pairz00_3572 = BgL_crczd2desczd2_1624;
						BgL_lenz00_1625 = CAR(CDR(BgL_pairz00_3572));
					}
					{	/* Unsafe/crc.scm 357 */
						obj_t BgL_pairz00_3576;

						BgL_pairz00_3576 = BgL_crczd2desczd2_1624;
						BgL_polyz00_1626 = CAR(CDR(CDR(BgL_pairz00_3576)));
					}
					{	/* Unsafe/crc.scm 358 */
						obj_t BgL_pairz00_3582;

						BgL_pairz00_3582 = BgL_crczd2desczd2_1624;
						BgL_lsbzd2polyzd2_1627 = CAR(CDR(CDR(CDR(BgL_pairz00_3582))));
					}
					{	/* Unsafe/crc.scm 359 */
						int BgL_auxz00_7580;

						BgL_auxz00_7580 = (int) (((long) 3));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_7580);
					}
					{	/* Unsafe/crc.scm 359 */
						int BgL_auxz00_7583;

						BgL_auxz00_7583 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_7583, BgL_polyz00_1626);
					}
					{	/* Unsafe/crc.scm 359 */
						int BgL_auxz00_7586;

						BgL_auxz00_7586 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_auxz00_7586, BgL_lsbzd2polyzd2_1627);
					}
					return BgL_lenz00_1625;
				}
			}
		}
	}



/* crc-fast-port */
	obj_t BGl_crczd2fastzd2portz00zz__crcz00(obj_t BgL_namez00_71,
		obj_t BgL_pz00_72, obj_t BgL_initz00_73, obj_t BgL_finalzd2xorzd2_74,
		obj_t BgL_bigzd2endianzf3z21_75)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 381 */
			{	/* Unsafe/crc.scm 382 */
				obj_t BgL_lenz00_1634;

				BgL_lenz00_1634 = BGl_getzd2crczd2zz__crcz00(BgL_namez00_71);
				{	/* Unsafe/crc.scm 385 */
					obj_t BgL_polyz00_1635;

					obj_t BgL_lsbzd2polyzd2_1636;

					{	/* Unsafe/crc.scm 385 */
						int BgL_auxz00_7590;

						BgL_auxz00_7590 = (int) (((long) 1));
						BgL_polyz00_1635 = BGL_MVALUES_VAL(BgL_auxz00_7590);
					}
					{	/* Unsafe/crc.scm 385 */
						int BgL_auxz00_7593;

						BgL_auxz00_7593 = (int) (((long) 2));
						BgL_lsbzd2polyzd2_1636 = BGL_MVALUES_VAL(BgL_auxz00_7593);
					}
					if (INTEGERP(BgL_polyz00_1635))
						{	/* Unsafe/crc.scm 385 */
							if (CBOOL(BgL_bigzd2endianzf3z21_75))
								{	/* Unsafe/crc.scm 387 */
									long BgL_res3023z00_3751;

									{	/* Unsafe/crc.scm 387 */
										long BgL_initz00_3608;

										long BgL_finalzd2xorzd2_3609;

										long BgL_polyz00_3610;

										long BgL_crczd2lenzd2_3611;

										BgL_initz00_3608 = (long) CINT(BgL_initz00_73);
										BgL_finalzd2xorzd2_3609 =
											(long) CINT(BgL_finalzd2xorzd2_74);
										BgL_polyz00_3610 = (long) CINT(BgL_polyz00_1635);
										BgL_crczd2lenzd2_3611 = (long) CINT(BgL_lenz00_1634);
										{	/* Unsafe/crc.scm 387 */
											long BgL_mz00_3612;

											BgL_mz00_3612 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_3611 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_3611 - ((long) 1)))) -
													((long) 1)));
											{
												long BgL_crcz00_3622;

												BgL_crcz00_3622 = BgL_initz00_3608;
											BgL_loopz00_3621:
												{	/* Unsafe/crc.scm 387 */
													obj_t BgL_cz00_3623;

													BgL_cz00_3623 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_pz00_72);
													if (EOF_OBJECTP(BgL_cz00_3623))
														{	/* Unsafe/crc.scm 387 */
															BgL_res3023z00_3751 =
																(
																(BgL_finalzd2xorzd2_3609 ^ BgL_crcz00_3622) &
																BgL_mz00_3612);
														}
													else
														{	/* Unsafe/crc.scm 387 */
															long BgL_arg2517z00_3626;

															{	/* Unsafe/crc.scm 506 */
																unsigned char BgL_cz00_3644;

																BgL_cz00_3644 = CCHAR(BgL_cz00_3623);
																{

																	if ((BgL_crczd2lenzd2_3611 >= ((long) 8)))
																		{	/* Unsafe/crc.scm 506 */
																			{	/* Unsafe/crc.scm 506 */
																				long BgL_mz00_3653;

																				BgL_mz00_3653 =
																					(((long) 1) <<
																					(int) (
																						(BgL_crczd2lenzd2_3611 -
																							((long) 1))));
																				{	/* Unsafe/crc.scm 506 */

																					{
																						long BgL_iz00_3658;

																						long BgL_crcz00_3659;

																						BgL_iz00_3658 = ((long) 0);
																						BgL_crcz00_3659 =
																							(BgL_crcz00_3622 ^
																							(((unsigned char) (BgL_cz00_3644))
																								<< (int) ((BgL_crczd2lenzd2_3611
																										- ((long) 8)))));
																					BgL_loopz00_3657:
																						if ((BgL_iz00_3658 == ((long) 8)))
																							{	/* Unsafe/crc.scm 506 */
																								BgL_arg2517z00_3626 =
																									BgL_crcz00_3659;
																							}
																						else
																							{
																								long BgL_crcz00_7627;

																								long BgL_iz00_7625;

																								BgL_iz00_7625 =
																									(BgL_iz00_3658 + ((long) 1));
																								BgL_crcz00_7627 =
																									(
																									(((BgL_mz00_3653 &
																												BgL_crcz00_3659) >>
																											(int) (
																												(BgL_crczd2lenzd2_3611 -
																													((long) 1)))) *
																										BgL_polyz00_3610) ^
																									(BgL_crcz00_3659 <<
																										(int) (((long) 1))));
																								BgL_crcz00_3659 =
																									BgL_crcz00_7627;
																								BgL_iz00_3658 = BgL_iz00_7625;
																								goto BgL_loopz00_3657;
																							}
																					}
																				}
																			}
																		}
																	else
																		{	/* Unsafe/crc.scm 506 */
																			{	/* Unsafe/crc.scm 506 */
																				long BgL_mz00_3669;

																				BgL_mz00_3669 =
																					(((long) 1) <<
																					(int) (
																						(BgL_crczd2lenzd2_3611 -
																							((long) 1))));
																				{	/* Unsafe/crc.scm 506 */

																					{
																						long BgL_iz00_3674;

																						long BgL_crcz00_3675;

																						long BgL_shiftedzd2valuezd2_3676;

																						BgL_iz00_3674 = ((long) 0);
																						BgL_crcz00_3675 = BgL_crcz00_3622;
																						BgL_shiftedzd2valuezd2_3676 =
																							(
																							((unsigned char) (BgL_cz00_3644))
																							<< (int) (BgL_crczd2lenzd2_3611));
																					BgL_loopz00_3673:
																						if ((BgL_iz00_3674 == ((long) 8)))
																							{	/* Unsafe/crc.scm 506 */
																								BgL_arg2517z00_3626 =
																									BgL_crcz00_3675;
																							}
																						else
																							{	/* Unsafe/crc.scm 506 */
																								long BgL_crc2z00_3678;

																								BgL_crc2z00_3678 =
																									(BgL_crcz00_3675 ^
																									(BgL_mz00_3669 &
																										(BgL_shiftedzd2valuezd2_3676
																											>> (int) (((long) 8)))));
																								{	/* Unsafe/crc.scm 506 */

																									{
																										long
																											BgL_shiftedzd2valuezd2_7662;
																										long BgL_crcz00_7653;

																										long BgL_iz00_7651;

																										BgL_iz00_7651 =
																											(BgL_iz00_3674 +
																											((long) 1));
																										BgL_crcz00_7653 =
																											((((BgL_mz00_3669 &
																														BgL_crc2z00_3678) >>
																													(int) (
																														(BgL_crczd2lenzd2_3611
																															-
																															((long) 1)))) *
																												BgL_polyz00_3610) ^
																											(BgL_crc2z00_3678 <<
																												(int) (((long) 1))));
																										BgL_shiftedzd2valuezd2_7662
																											=
																											(BgL_shiftedzd2valuezd2_3676
																											<< (int) (((long) 1)));
																										BgL_shiftedzd2valuezd2_3676
																											=
																											BgL_shiftedzd2valuezd2_7662;
																										BgL_crcz00_3675 =
																											BgL_crcz00_7653;
																										BgL_iz00_3674 =
																											BgL_iz00_7651;
																										goto BgL_loopz00_3673;
																									}
																								}
																							}
																					}
																				}
																			}
																		}
																}
															}
															{
																long BgL_crcz00_7669;

																BgL_crcz00_7669 = BgL_arg2517z00_3626;
																BgL_crcz00_3622 = BgL_crcz00_7669;
																goto BgL_loopz00_3621;
															}
														}
												}
											}
										}
									}
									return BINT(BgL_res3023z00_3751);
								}
							else
								{	/* Unsafe/crc.scm 388 */
									long BgL_res3025z00_3820;

									{	/* Unsafe/crc.scm 388 */
										long BgL_initz00_3753;

										long BgL_finalzd2xorzd2_3754;

										long BgL_polyz00_3755;

										long BgL_crczd2lenzd2_3756;

										BgL_initz00_3753 = (long) CINT(BgL_initz00_73);
										BgL_finalzd2xorzd2_3754 =
											(long) CINT(BgL_finalzd2xorzd2_74);
										BgL_polyz00_3755 = (long) CINT(BgL_lsbzd2polyzd2_1636);
										BgL_crczd2lenzd2_3756 = (long) CINT(BgL_lenz00_1634);
										{	/* Unsafe/crc.scm 388 */
											long BgL_mz00_3757;

											BgL_mz00_3757 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_3756 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_3756 - ((long) 1)))) -
													((long) 1)));
											{
												long BgL_crcz00_3767;

												BgL_crcz00_3767 = BgL_initz00_3753;
											BgL_loopz00_3766:
												{	/* Unsafe/crc.scm 388 */
													obj_t BgL_cz00_3768;

													BgL_cz00_3768 =
														BGl_readzd2charzd2zz__r4_input_6_10_2z00
														(BgL_pz00_72);
													if (EOF_OBJECTP(BgL_cz00_3768))
														{	/* Unsafe/crc.scm 388 */
															BgL_res3025z00_3820 =
																(
																(BgL_finalzd2xorzd2_3754 ^ BgL_crcz00_3767) &
																BgL_mz00_3757);
														}
													else
														{	/* Unsafe/crc.scm 388 */
															long BgL_arg2517z00_3771;

															{
																long BgL_iz00_3796;

																long BgL_crcz00_3797;

																BgL_iz00_3796 = ((long) 0);
																BgL_crcz00_3797 =
																	(BgL_crcz00_3767 ^
																	((unsigned char) (CCHAR(BgL_cz00_3768))));
															BgL_loopz00_3795:
																if ((BgL_iz00_3796 == ((long) 8)))
																	{	/* Unsafe/crc.scm 506 */
																		BgL_arg2517z00_3771 = BgL_crcz00_3797;
																	}
																else
																	{
																		long BgL_crcz00_7692;

																		long BgL_iz00_7690;

																		BgL_iz00_7690 =
																			(BgL_iz00_3796 + ((long) 1));
																		BgL_crcz00_7692 =
																			(
																			((((long) 1) & BgL_crcz00_3797) *
																				BgL_polyz00_3755) ^ (long) (((unsigned
																						long) (BgL_crcz00_3797) >>
																					(int) (((long) 1)))));
																		BgL_crcz00_3797 = BgL_crcz00_7692;
																		BgL_iz00_3796 = BgL_iz00_7690;
																		goto BgL_loopz00_3795;
																	}
															}
															{
																long BgL_crcz00_7704;

																BgL_crcz00_7704 = BgL_arg2517z00_3771;
																BgL_crcz00_3767 = BgL_crcz00_7704;
																goto BgL_loopz00_3766;
															}
														}
												}
											}
										}
									}
									return BINT(BgL_res3025z00_3820);
								}
						}
					else
						{	/* Unsafe/crc.scm 385 */
							if (ELONGP(BgL_polyz00_1635))
								{	/* Unsafe/crc.scm 389 */
									if (CBOOL(BgL_bigzd2endianzf3z21_75))
										{	/* Unsafe/crc.scm 391 */
											obj_t BgL_arg2444z00_1639;

											obj_t BgL_arg2445z00_1640;

											if (INTEGERP(BgL_initz00_73))
												{	/* Unsafe/crc.scm 391 */
													long BgL_xz00_3825;

													BgL_xz00_3825 = (long) CINT(BgL_initz00_73);
													{	/* Unsafe/crc.scm 391 */
														long BgL_auxz00_7713;

														BgL_auxz00_7713 = LONG_TO_ELONG(BgL_xz00_3825);
														BgL_arg2444z00_1639 = make_belong(BgL_auxz00_7713);
												}}
											else
												{	/* Unsafe/crc.scm 391 */
													BgL_arg2444z00_1639 = BgL_initz00_73;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_74))
												{	/* Unsafe/crc.scm 391 */
													long BgL_xz00_3829;

													BgL_xz00_3829 = (long) CINT(BgL_finalzd2xorzd2_74);
													{	/* Unsafe/crc.scm 391 */
														long BgL_auxz00_7719;

														BgL_auxz00_7719 = LONG_TO_ELONG(BgL_xz00_3829);
														BgL_arg2445z00_1640 = make_belong(BgL_auxz00_7719);
												}}
											else
												{	/* Unsafe/crc.scm 391 */
													BgL_arg2445z00_1640 = BgL_finalzd2xorzd2_74;
												}
											{	/* Unsafe/crc.scm 391 */
												long BgL_res3031z00_4036;

												{	/* Unsafe/crc.scm 391 */
													long BgL_initz00_3831;

													long BgL_finalzd2xorzd2_3832;

													long BgL_polyz00_3833;

													long BgL_crczd2lenzd2_3834;

													BgL_initz00_3831 =
														BELONG_TO_LONG(BgL_arg2444z00_1639);
													BgL_finalzd2xorzd2_3832 =
														BELONG_TO_LONG(BgL_arg2445z00_1640);
													BgL_polyz00_3833 = BELONG_TO_LONG(BgL_polyz00_1635);
													BgL_crczd2lenzd2_3834 = (long) CINT(BgL_lenz00_1634);
													{	/* Unsafe/crc.scm 391 */
														long BgL_mz00_3835;

														{	/* Unsafe/crc.scm 391 */
															long BgL_auxz00_7726;

															{	/* Unsafe/crc.scm 391 */
																long BgL_res3026z00_3860;

																{	/* Unsafe/crc.scm 391 */
																	long BgL_auxz00_7730;

																	BgL_auxz00_7730 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_3834 - ((long) 1)))) -
																		((long) 1));
																	BgL_res3026z00_3860 =
																		LONG_TO_ELONG(BgL_auxz00_7730);
																}
																BgL_auxz00_7726 = BgL_res3026z00_3860;
															}
															BgL_mz00_3835 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_3834 - ((long) 1)))) +
																BgL_auxz00_7726);
														}
														{
															long BgL_crcz00_3845;

															BgL_crcz00_3845 = BgL_initz00_3831;
														BgL_loopz00_3844:
															{	/* Unsafe/crc.scm 391 */
																obj_t BgL_cz00_3846;

																BgL_cz00_3846 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_pz00_72);
																if (EOF_OBJECTP(BgL_cz00_3846))
																	{	/* Unsafe/crc.scm 391 */
																		BgL_res3031z00_4036 =
																			(
																			(BgL_finalzd2xorzd2_3832 ^
																				BgL_crcz00_3845) & BgL_mz00_3835);
																	}
																else
																	{	/* Unsafe/crc.scm 391 */
																		long BgL_arg2529z00_3849;

																		{	/* Unsafe/crc.scm 523 */
																			long BgL_res3030z00_4035;

																			{	/* Unsafe/crc.scm 523 */
																				unsigned char BgL_cz00_3868;

																				BgL_cz00_3868 = CCHAR(BgL_cz00_3846);
																				if (
																					(BgL_crczd2lenzd2_3834 >= ((long) 8)))
																					{	/* Unsafe/crc.scm 523 */
																						long BgL_octetz00_3873;

																						BgL_octetz00_3873 =
																							((unsigned char) (BgL_cz00_3868));
																						{	/* Unsafe/crc.scm 523 */
																							long BgL_valuez00_3874;

																							long BgL_mz00_3875;

																							{	/* Unsafe/crc.scm 523 */
																								long BgL_arg2301z00_3876;

																								long BgL_arg2302z00_3877;

																								BgL_arg2301z00_3876 =
																									LONG_TO_ELONG
																									(BgL_octetz00_3873);
																								BgL_arg2302z00_3877 =
																									(BgL_crczd2lenzd2_3834 -
																									((long) 8));
																								BgL_valuez00_3874 =
																									(BgL_arg2301z00_3876 <<
																									(int) (BgL_arg2302z00_3877));
																							}
																							BgL_mz00_3875 =
																								(((long) 1) <<
																								(int) (
																									(BgL_crczd2lenzd2_3834 -
																										((long) 1))));
																							{
																								long BgL_iz00_3882;

																								long BgL_crcz00_3883;

																								BgL_iz00_3882 = ((long) 0);
																								BgL_crcz00_3883 =
																									(BgL_crcz00_3845 ^
																									BgL_valuez00_3874);
																							BgL_loopz00_3881:
																								if (
																									(BgL_iz00_3882 == ((long) 8)))
																									{	/* Unsafe/crc.scm 523 */
																										BgL_res3030z00_4035 =
																											BgL_crcz00_3883;
																									}
																								else
																									{	/* Unsafe/crc.scm 523 */
																										long BgL_newzd2crczd2_3885;

																										BgL_newzd2crczd2_3885 =
																											(BgL_crcz00_3883 <<
																											(int) (((long) 1)));
																										if (
																											(((long) 0) ==
																												(BgL_mz00_3875 &
																													BgL_crcz00_3883)))
																											{
																												long BgL_crcz00_7763;

																												long BgL_iz00_7761;

																												BgL_iz00_7761 =
																													(BgL_iz00_3882 +
																													((long) 1));
																												BgL_crcz00_7763 =
																													BgL_newzd2crczd2_3885;
																												BgL_crcz00_3883 =
																													BgL_crcz00_7763;
																												BgL_iz00_3882 =
																													BgL_iz00_7761;
																												goto BgL_loopz00_3881;
																											}
																										else
																											{
																												long BgL_crcz00_7766;

																												long BgL_iz00_7764;

																												BgL_iz00_7764 =
																													(BgL_iz00_3882 +
																													((long) 1));
																												BgL_crcz00_7766 =
																													(BgL_newzd2crczd2_3885
																													^ BgL_polyz00_3833);
																												BgL_crcz00_3883 =
																													BgL_crcz00_7766;
																												BgL_iz00_3882 =
																													BgL_iz00_7764;
																												goto BgL_loopz00_3881;
																											}
																									}
																							}
																						}
																					}
																				else
																					{	/* Unsafe/crc.scm 523 */
																						long BgL_arg2305z00_3892;

																						{	/* Unsafe/crc.scm 523 */
																							long BgL_arg2306z00_3893;

																							long BgL_arg2307z00_3894;

																							{	/* Unsafe/crc.scm 523 */
																								long BgL_res3027z00_3924;

																								{	/* Unsafe/crc.scm 523 */
																									long BgL_auxz00_7769;

																									{	/* Unsafe/crc.scm 523 */
																										long BgL_auxz00_7770;

																										BgL_auxz00_7770 =
																											ELONG_TO_LONG
																											(BgL_crcz00_3845);
																										BgL_auxz00_7769 =
																											ELONG_TO_LONG
																											(BgL_auxz00_7770);
																									}
																									BgL_res3027z00_3924 =
																										ELONG_TO_LONG
																										(BgL_auxz00_7769);
																								}
																								BgL_arg2306z00_3893 =
																									BgL_res3027z00_3924;
																							}
																							{	/* Unsafe/crc.scm 523 */
																								long BgL_res3028z00_3926;

																								{	/* Unsafe/crc.scm 523 */
																									long BgL_auxz00_7774;

																									{	/* Unsafe/crc.scm 523 */
																										long BgL_auxz00_7775;

																										BgL_auxz00_7775 =
																											ELONG_TO_LONG
																											(BgL_polyz00_3833);
																										BgL_auxz00_7774 =
																											ELONG_TO_LONG
																											(BgL_auxz00_7775);
																									}
																									BgL_res3028z00_3926 =
																										ELONG_TO_LONG
																										(BgL_auxz00_7774);
																								}
																								BgL_arg2307z00_3894 =
																									BgL_res3028z00_3926;
																							}
																							{

																								if (
																									(BgL_crczd2lenzd2_3834 >=
																										((long) 8)))
																									{	/* Unsafe/crc.scm 523 */
																										{	/* Unsafe/crc.scm 523 */
																											long BgL_mz00_3936;

																											BgL_mz00_3936 =
																												(((long) 1) <<
																												(int) (
																													(BgL_crczd2lenzd2_3834
																														- ((long) 1))));
																											{	/* Unsafe/crc.scm 523 */

																												{
																													long BgL_iz00_3941;

																													long BgL_crcz00_3942;

																													BgL_iz00_3941 =
																														((long) 0);
																													BgL_crcz00_3942 =
																														(BgL_arg2306z00_3893
																														^ (((unsigned
																																	char)
																																(BgL_cz00_3868))
																															<<
																															(int) (
																																(BgL_crczd2lenzd2_3834
																																	-
																																	((long)
																																		8)))));
																												BgL_loopz00_3940:
																													if (
																														(BgL_iz00_3941 ==
																															((long) 8)))
																														{	/* Unsafe/crc.scm 523 */
																															BgL_arg2305z00_3892
																																=
																																BgL_crcz00_3942;
																														}
																													else
																														{
																															long
																																BgL_crcz00_7788;
																															long
																																BgL_iz00_7786;
																															BgL_iz00_7786 =
																																(BgL_iz00_3941 +
																																((long) 1));
																															BgL_crcz00_7788 =
																																((((BgL_mz00_3936 & BgL_crcz00_3942) >> (int) ((BgL_crczd2lenzd2_3834 - ((long) 1)))) * BgL_arg2307z00_3894) ^ (BgL_crcz00_3942 << (int) (((long) 1))));
																															BgL_crcz00_3942 =
																																BgL_crcz00_7788;
																															BgL_iz00_3941 =
																																BgL_iz00_7786;
																															goto
																																BgL_loopz00_3940;
																														}
																												}
																											}
																										}
																									}
																								else
																									{	/* Unsafe/crc.scm 523 */
																										{	/* Unsafe/crc.scm 523 */
																											long BgL_mz00_3952;

																											BgL_mz00_3952 =
																												(((long) 1) <<
																												(int) (
																													(BgL_crczd2lenzd2_3834
																														- ((long) 1))));
																											{	/* Unsafe/crc.scm 523 */

																												{
																													long BgL_iz00_3957;

																													long BgL_crcz00_3958;

																													long
																														BgL_shiftedzd2valuezd2_3959;
																													BgL_iz00_3957 =
																														((long) 0);
																													BgL_crcz00_3958 =
																														BgL_arg2306z00_3893;
																													BgL_shiftedzd2valuezd2_3959
																														=
																														(((unsigned
																																char)
																															(BgL_cz00_3868))
																														<<
																														(int)
																														(BgL_crczd2lenzd2_3834));
																												BgL_loopz00_3956:
																													if (
																														(BgL_iz00_3957 ==
																															((long) 8)))
																														{	/* Unsafe/crc.scm 523 */
																															BgL_arg2305z00_3892
																																=
																																BgL_crcz00_3958;
																														}
																													else
																														{	/* Unsafe/crc.scm 523 */
																															long
																																BgL_crc2z00_3961;
																															BgL_crc2z00_3961 =
																																(BgL_crcz00_3958
																																^ (BgL_mz00_3952
																																	&
																																	(BgL_shiftedzd2valuezd2_3959
																																		>>
																																		(int) ((
																																				(long)
																																				8)))));
																															{	/* Unsafe/crc.scm 523 */

																																{
																																	long
																																		BgL_shiftedzd2valuezd2_7823;
																																	long
																																		BgL_crcz00_7814;
																																	long
																																		BgL_iz00_7812;
																																	BgL_iz00_7812
																																		=
																																		(BgL_iz00_3957
																																		+
																																		((long) 1));
																																	BgL_crcz00_7814
																																		=
																																		((((BgL_mz00_3952 & BgL_crc2z00_3961) >> (int) ((BgL_crczd2lenzd2_3834 - ((long) 1)))) * BgL_arg2307z00_3894) ^ (BgL_crc2z00_3961 << (int) (((long) 1))));
																																	BgL_shiftedzd2valuezd2_7823
																																		=
																																		(BgL_shiftedzd2valuezd2_3959
																																		<<
																																		(int) ((
																																				(long)
																																				1)));
																																	BgL_shiftedzd2valuezd2_3959
																																		=
																																		BgL_shiftedzd2valuezd2_7823;
																																	BgL_crcz00_3958
																																		=
																																		BgL_crcz00_7814;
																																	BgL_iz00_3957
																																		=
																																		BgL_iz00_7812;
																																	goto
																																		BgL_loopz00_3956;
																																}
																															}
																														}
																												}
																											}
																										}
																									}
																							}
																						}
																						BgL_res3030z00_4035 =
																							LONG_TO_ELONG
																							(BgL_arg2305z00_3892);
																					}
																			}
																			BgL_arg2529z00_3849 = BgL_res3030z00_4035;
																		}
																		{
																			long BgL_crcz00_7831;

																			BgL_crcz00_7831 = BgL_arg2529z00_3849;
																			BgL_crcz00_3845 = BgL_crcz00_7831;
																			goto BgL_loopz00_3844;
																		}
																	}
															}
														}
													}
												}
												return make_belong(BgL_res3031z00_4036);
											}
										}
									else
										{	/* Unsafe/crc.scm 393 */
											obj_t BgL_arg2446z00_1641;

											obj_t BgL_arg2447z00_1642;

											if (INTEGERP(BgL_initz00_73))
												{	/* Unsafe/crc.scm 393 */
													long BgL_xz00_4040;

													BgL_xz00_4040 = (long) CINT(BgL_initz00_73);
													{	/* Unsafe/crc.scm 393 */
														long BgL_auxz00_7836;

														BgL_auxz00_7836 = LONG_TO_ELONG(BgL_xz00_4040);
														BgL_arg2446z00_1641 = make_belong(BgL_auxz00_7836);
												}}
											else
												{	/* Unsafe/crc.scm 393 */
													BgL_arg2446z00_1641 = BgL_initz00_73;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_74))
												{	/* Unsafe/crc.scm 393 */
													long BgL_xz00_4044;

													BgL_xz00_4044 = (long) CINT(BgL_finalzd2xorzd2_74);
													{	/* Unsafe/crc.scm 393 */
														long BgL_auxz00_7842;

														BgL_auxz00_7842 = LONG_TO_ELONG(BgL_xz00_4044);
														BgL_arg2447z00_1642 = make_belong(BgL_auxz00_7842);
												}}
											else
												{	/* Unsafe/crc.scm 393 */
													BgL_arg2447z00_1642 = BgL_finalzd2xorzd2_74;
												}
											{	/* Unsafe/crc.scm 393 */
												long BgL_res3034z00_4116;

												{	/* Unsafe/crc.scm 393 */
													long BgL_initz00_4046;

													long BgL_finalzd2xorzd2_4047;

													long BgL_polyz00_4048;

													long BgL_crczd2lenzd2_4049;

													BgL_initz00_4046 =
														BELONG_TO_LONG(BgL_arg2446z00_1641);
													BgL_finalzd2xorzd2_4047 =
														BELONG_TO_LONG(BgL_arg2447z00_1642);
													BgL_polyz00_4048 =
														BELONG_TO_LONG(BgL_lsbzd2polyzd2_1636);
													BgL_crczd2lenzd2_4049 = (long) CINT(BgL_lenz00_1634);
													{	/* Unsafe/crc.scm 393 */
														long BgL_mz00_4050;

														{	/* Unsafe/crc.scm 393 */
															long BgL_auxz00_7849;

															{	/* Unsafe/crc.scm 393 */
																long BgL_res3032z00_4075;

																{	/* Unsafe/crc.scm 393 */
																	long BgL_auxz00_7853;

																	BgL_auxz00_7853 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4049 - ((long) 1)))) -
																		((long) 1));
																	BgL_res3032z00_4075 =
																		LONG_TO_ELONG(BgL_auxz00_7853);
																}
																BgL_auxz00_7849 = BgL_res3032z00_4075;
															}
															BgL_mz00_4050 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4049 - ((long) 1)))) +
																BgL_auxz00_7849);
														}
														{
															long BgL_crcz00_4060;

															BgL_crcz00_4060 = BgL_initz00_4046;
														BgL_loopz00_4059:
															{	/* Unsafe/crc.scm 393 */
																obj_t BgL_cz00_4061;

																BgL_cz00_4061 =
																	BGl_readzd2charzd2zz__r4_input_6_10_2z00
																	(BgL_pz00_72);
																if (EOF_OBJECTP(BgL_cz00_4061))
																	{	/* Unsafe/crc.scm 393 */
																		BgL_res3034z00_4116 =
																			(
																			(BgL_finalzd2xorzd2_4047 ^
																				BgL_crcz00_4060) & BgL_mz00_4050);
																	}
																else
																	{	/* Unsafe/crc.scm 393 */
																		long BgL_arg2529z00_4064;

																		{	/* Unsafe/crc.scm 523 */
																			long BgL_res3033z00_4115;

																			{	/* Unsafe/crc.scm 523 */
																				unsigned char BgL_cz00_4083;

																				BgL_cz00_4083 = CCHAR(BgL_cz00_4061);
																				{	/* Unsafe/crc.scm 523 */
																					long BgL_octetz00_4087;

																					BgL_octetz00_4087 =
																						((unsigned char) (BgL_cz00_4083));
																					{	/* Unsafe/crc.scm 523 */
																						long BgL_g1828z00_4088;

																						{	/* Unsafe/crc.scm 523 */
																							long BgL_arg2336z00_4089;

																							BgL_arg2336z00_4089 =
																								LONG_TO_ELONG
																								(BgL_octetz00_4087);
																							BgL_g1828z00_4088 =
																								(BgL_crcz00_4060 ^
																								BgL_arg2336z00_4089);
																						}
																						{
																							long BgL_iz00_4091;

																							long BgL_crcz00_4092;

																							BgL_iz00_4091 = ((long) 0);
																							BgL_crcz00_4092 =
																								BgL_g1828z00_4088;
																						BgL_loopz00_4090:
																							if ((BgL_iz00_4091 == ((long) 8)))
																								{	/* Unsafe/crc.scm 523 */
																									BgL_res3033z00_4115 =
																										BgL_crcz00_4092;
																								}
																							else
																								{	/* Unsafe/crc.scm 523 */
																									long BgL_newzd2crczd2_4094;

																									{	/* Unsafe/crc.scm 523 */
																										unsigned long BgL_xz00_4105;

																										BgL_xz00_4105 =
																											(unsigned
																											long) (BgL_crcz00_4092);
																										{	/* Unsafe/crc.scm 523 */
																											unsigned long
																												BgL_auxz00_7873;
																											{	/* Unsafe/crc.scm 523 */
																												int BgL_auxz00_7874;

																												BgL_auxz00_7874 =
																													(int) (((long) 1));
																												BgL_auxz00_7873 =
																													(BgL_xz00_4105 >>
																													BgL_auxz00_7874);
																											}
																											BgL_newzd2crczd2_4094 =
																												(long)
																												(BgL_auxz00_7873);
																									}}
																									{
																										long BgL_crcz00_7880;

																										long BgL_iz00_7878;

																										BgL_iz00_7878 =
																											(BgL_iz00_4091 +
																											((long) 1));
																										BgL_crcz00_7880 =
																											(((((long) 1) &
																													BgL_crcz00_4092) *
																												BgL_polyz00_4048) ^
																											BgL_newzd2crczd2_4094);
																										BgL_crcz00_4092 =
																											BgL_crcz00_7880;
																										BgL_iz00_4091 =
																											BgL_iz00_7878;
																										goto BgL_loopz00_4090;
																									}
																								}
																						}
																					}
																				}
																			}
																			BgL_arg2529z00_4064 = BgL_res3033z00_4115;
																		}
																		{
																			long BgL_crcz00_7884;

																			BgL_crcz00_7884 = BgL_arg2529z00_4064;
																			BgL_crcz00_4060 = BgL_crcz00_7884;
																			goto BgL_loopz00_4059;
																		}
																	}
															}
														}
													}
												}
												return make_belong(BgL_res3034z00_4116);
											}
										}
								}
							else
								{	/* Unsafe/crc.scm 389 */
									if (LLONGP(BgL_polyz00_1635))
										{	/* Unsafe/crc.scm 395 */
											if (CBOOL(BgL_bigzd2endianzf3z21_75))
												{	/* Unsafe/crc.scm 397 */
													obj_t BgL_arg2449z00_1644;

													obj_t BgL_arg2450z00_1645;

													if (INTEGERP(BgL_initz00_73))
														{	/* Unsafe/crc.scm 397 */
															long BgL_xz00_4122;

															BgL_xz00_4122 = (long) CINT(BgL_initz00_73);
															BgL_arg2449z00_1644 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4122));
														}
													else
														{	/* Unsafe/crc.scm 397 */
															if (ELONGP(BgL_initz00_73))
																{	/* Unsafe/crc.scm 397 */
																	long BgL_xz00_4124;

																	BgL_xz00_4124 =
																		BELONG_TO_LONG(BgL_initz00_73);
																	BgL_arg2449z00_1644 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4124));
																}
															else
																{	/* Unsafe/crc.scm 397 */
																	BgL_arg2449z00_1644 = BgL_initz00_73;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_74))
														{	/* Unsafe/crc.scm 397 */
															long BgL_xz00_4129;

															BgL_xz00_4129 =
																(long) CINT(BgL_finalzd2xorzd2_74);
															BgL_arg2450z00_1645 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4129));
														}
													else
														{	/* Unsafe/crc.scm 397 */
															if (ELONGP(BgL_finalzd2xorzd2_74))
																{	/* Unsafe/crc.scm 397 */
																	long BgL_xz00_4131;

																	BgL_xz00_4131 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_74);
																	BgL_arg2450z00_1645 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4131));
																}
															else
																{	/* Unsafe/crc.scm 397 */
																	BgL_arg2450z00_1645 = BgL_finalzd2xorzd2_74;
																}
														}
													{	/* Unsafe/crc.scm 397 */
														BGL_LONGLONG_T BgL_res3037z00_4335;

														{	/* Unsafe/crc.scm 397 */
															BGL_LONGLONG_T BgL_initz00_4133;

															BGL_LONGLONG_T BgL_finalzd2xorzd2_4134;

															BGL_LONGLONG_T BgL_polyz00_4135;

															long BgL_crczd2lenzd2_4136;

															BgL_initz00_4133 =
																BLLONG_TO_LLONG(BgL_arg2449z00_1644);
															BgL_finalzd2xorzd2_4134 =
																BLLONG_TO_LLONG(BgL_arg2450z00_1645);
															BgL_polyz00_4135 =
																BLLONG_TO_LLONG(BgL_polyz00_1635);
															BgL_crczd2lenzd2_4136 =
																(long) CINT(BgL_lenz00_1634);
															{	/* Unsafe/crc.scm 397 */
																BGL_LONGLONG_T BgL_mz00_4137;

																BgL_mz00_4137 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_4136 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4136 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{
																	BGL_LONGLONG_T BgL_crcz00_4147;

																	BgL_crcz00_4147 = BgL_initz00_4133;
																BgL_loopz00_4146:
																	{	/* Unsafe/crc.scm 397 */
																		obj_t BgL_cz00_4148;

																		BgL_cz00_4148 =
																			BGl_readzd2charzd2zz__r4_input_6_10_2z00
																			(BgL_pz00_72);
																		if (EOF_OBJECTP(BgL_cz00_4148))
																			{	/* Unsafe/crc.scm 397 */
																				BgL_res3037z00_4335 =
																					(
																					(BgL_finalzd2xorzd2_4134 ^
																						BgL_crcz00_4147) & BgL_mz00_4137);
																			}
																		else
																			{	/* Unsafe/crc.scm 397 */
																				BGL_LONGLONG_T BgL_arg2541z00_4151;

																				{	/* Unsafe/crc.scm 540 */
																					BGL_LONGLONG_T BgL_res3036z00_4334;

																					{	/* Unsafe/crc.scm 540 */
																						unsigned char BgL_cz00_4169;

																						BgL_cz00_4169 =
																							CCHAR(BgL_cz00_4148);
																						if (
																							(BgL_crczd2lenzd2_4136 >=
																								((long) 8)))
																							{	/* Unsafe/crc.scm 540 */
																								long BgL_octetz00_4174;

																								BgL_octetz00_4174 =
																									(
																									(unsigned
																										char) (BgL_cz00_4169));
																								{	/* Unsafe/crc.scm 540 */
																									BGL_LONGLONG_T
																										BgL_valuez00_4175;
																									BGL_LONGLONG_T BgL_mz00_4176;

																									{	/* Unsafe/crc.scm 540 */
																										BGL_LONGLONG_T
																											BgL_arg2317z00_4177;
																										long BgL_arg2318z00_4178;

																										BgL_arg2317z00_4177 =
																											LONG_TO_LLONG
																											(BgL_octetz00_4174);
																										BgL_arg2318z00_4178 =
																											(BgL_crczd2lenzd2_4136 -
																											((long) 8));
																										BgL_valuez00_4175 =
																											(BgL_arg2317z00_4177 <<
																											(int)
																											(BgL_arg2318z00_4178));
																									}
																									BgL_mz00_4176 =
																										(((BGL_LONGLONG_T) 1) <<
																										(int) (
																											(BgL_crczd2lenzd2_4136 -
																												((long) 1))));
																									{
																										long BgL_iz00_4183;

																										BGL_LONGLONG_T
																											BgL_crcz00_4184;
																										BgL_iz00_4183 = ((long) 0);
																										BgL_crcz00_4184 =
																											(BgL_crcz00_4147 ^
																											BgL_valuez00_4175);
																									BgL_loopz00_4182:
																										if (
																											(BgL_iz00_4183 ==
																												((long) 8)))
																											{	/* Unsafe/crc.scm 540 */
																												BgL_res3036z00_4334 =
																													BgL_crcz00_4184;
																											}
																										else
																											{	/* Unsafe/crc.scm 540 */
																												BGL_LONGLONG_T
																													BgL_newzd2crczd2_4186;
																												BgL_newzd2crczd2_4186 =
																													(BgL_crcz00_4184 <<
																													(int) (((long) 1)));
																												if ((((BGL_LONGLONG_T)
																															0) ==
																														(BgL_mz00_4176 &
																															BgL_crcz00_4184)))
																													{
																														BGL_LONGLONG_T
																															BgL_crcz00_7948;
																														long BgL_iz00_7946;

																														BgL_iz00_7946 =
																															(BgL_iz00_4183 +
																															((long) 1));
																														BgL_crcz00_7948 =
																															BgL_newzd2crczd2_4186;
																														BgL_crcz00_4184 =
																															BgL_crcz00_7948;
																														BgL_iz00_4183 =
																															BgL_iz00_7946;
																														goto
																															BgL_loopz00_4182;
																													}
																												else
																													{
																														BGL_LONGLONG_T
																															BgL_crcz00_7951;
																														long BgL_iz00_7949;

																														BgL_iz00_7949 =
																															(BgL_iz00_4183 +
																															((long) 1));
																														BgL_crcz00_7951 =
																															(BgL_newzd2crczd2_4186
																															^
																															BgL_polyz00_4135);
																														BgL_crcz00_4184 =
																															BgL_crcz00_7951;
																														BgL_iz00_4183 =
																															BgL_iz00_7949;
																														goto
																															BgL_loopz00_4182;
																													}
																											}
																									}
																								}
																							}
																						else
																							{	/* Unsafe/crc.scm 540 */
																								long BgL_arg2321z00_4193;

																								{	/* Unsafe/crc.scm 540 */
																									long BgL_arg2322z00_4194;

																									long BgL_arg2323z00_4195;

																									BgL_arg2322z00_4194 =
																										LLONG_TO_LONG
																										(BgL_crcz00_4147);
																									BgL_arg2323z00_4195 =
																										LLONG_TO_LONG
																										(BgL_polyz00_4135);
																									{

																										if (
																											(BgL_crczd2lenzd2_4136 >=
																												((long) 8)))
																											{	/* Unsafe/crc.scm 540 */
																												{	/* Unsafe/crc.scm 540 */
																													long BgL_mz00_4235;

																													BgL_mz00_4235 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4136
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 540 */

																														{
																															long
																																BgL_iz00_4240;
																															long
																																BgL_crcz00_4241;
																															BgL_iz00_4240 =
																																((long) 0);
																															BgL_crcz00_4241 =
																																(BgL_arg2322z00_4194
																																^ (((unsigned
																																			char)
																																		(BgL_cz00_4169))
																																	<<
																																	(int) (
																																		(BgL_crczd2lenzd2_4136
																																			-
																																			((long)
																																				8)))));
																														BgL_loopz00_4239:
																															if (
																																(BgL_iz00_4240
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 540 */
																																	BgL_arg2321z00_4193
																																		=
																																		BgL_crcz00_4241;
																																}
																															else
																																{
																																	long
																																		BgL_crcz00_7965;
																																	long
																																		BgL_iz00_7963;
																																	BgL_iz00_7963
																																		=
																																		(BgL_iz00_4240
																																		+
																																		((long) 1));
																																	BgL_crcz00_7965
																																		=
																																		((((BgL_mz00_4235 & BgL_crcz00_4241) >> (int) ((BgL_crczd2lenzd2_4136 - ((long) 1)))) * BgL_arg2323z00_4195) ^ (BgL_crcz00_4241 << (int) (((long) 1))));
																																	BgL_crcz00_4241
																																		=
																																		BgL_crcz00_7965;
																																	BgL_iz00_4240
																																		=
																																		BgL_iz00_7963;
																																	goto
																																		BgL_loopz00_4239;
																																}
																														}
																													}
																												}
																											}
																										else
																											{	/* Unsafe/crc.scm 540 */
																												{	/* Unsafe/crc.scm 540 */
																													long BgL_mz00_4251;

																													BgL_mz00_4251 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4136
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 540 */

																														{
																															long
																																BgL_iz00_4256;
																															long
																																BgL_crcz00_4257;
																															long
																																BgL_shiftedzd2valuezd2_4258;
																															BgL_iz00_4256 =
																																((long) 0);
																															BgL_crcz00_4257 =
																																BgL_arg2322z00_4194;
																															BgL_shiftedzd2valuezd2_4258
																																=
																																(((unsigned
																																		char)
																																	(BgL_cz00_4169))
																																<<
																																(int)
																																(BgL_crczd2lenzd2_4136));
																														BgL_loopz00_4255:
																															if (
																																(BgL_iz00_4256
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 540 */
																																	BgL_arg2321z00_4193
																																		=
																																		BgL_crcz00_4257;
																																}
																															else
																																{	/* Unsafe/crc.scm 540 */
																																	long
																																		BgL_crc2z00_4260;
																																	BgL_crc2z00_4260
																																		=
																																		(BgL_crcz00_4257
																																		^
																																		(BgL_mz00_4251
																																			&
																																			(BgL_shiftedzd2valuezd2_4258
																																				>>
																																				(int) ((
																																						(long)
																																						8)))));
																																	{	/* Unsafe/crc.scm 540 */

																																		{
																																			long
																																				BgL_shiftedzd2valuezd2_8000;
																																			long
																																				BgL_crcz00_7991;
																																			long
																																				BgL_iz00_7989;
																																			BgL_iz00_7989
																																				=
																																				(BgL_iz00_4256
																																				+
																																				((long)
																																					1));
																																			BgL_crcz00_7991
																																				=
																																				((((BgL_mz00_4251 & BgL_crc2z00_4260) >> (int) ((BgL_crczd2lenzd2_4136 - ((long) 1)))) * BgL_arg2323z00_4195) ^ (BgL_crc2z00_4260 << (int) (((long) 1))));
																																			BgL_shiftedzd2valuezd2_8000
																																				=
																																				(BgL_shiftedzd2valuezd2_4258
																																				<<
																																				(int) ((
																																						(long)
																																						1)));
																																			BgL_shiftedzd2valuezd2_4258
																																				=
																																				BgL_shiftedzd2valuezd2_8000;
																																			BgL_crcz00_4257
																																				=
																																				BgL_crcz00_7991;
																																			BgL_iz00_4256
																																				=
																																				BgL_iz00_7989;
																																			goto
																																				BgL_loopz00_4255;
																																		}
																																	}
																																}
																														}
																													}
																												}
																											}
																									}
																								}
																								BgL_res3036z00_4334 =
																									LONG_TO_LLONG
																									(BgL_arg2321z00_4193);
																							}
																					}
																					BgL_arg2541z00_4151 =
																						BgL_res3036z00_4334;
																				}
																				{
																					BGL_LONGLONG_T BgL_crcz00_8008;

																					BgL_crcz00_8008 = BgL_arg2541z00_4151;
																					BgL_crcz00_4147 = BgL_crcz00_8008;
																					goto BgL_loopz00_4146;
																				}
																			}
																	}
																}
															}
														}
														return make_bllong(BgL_res3037z00_4335);
													}
												}
											else
												{	/* Unsafe/crc.scm 399 */
													obj_t BgL_arg2451z00_1646;

													obj_t BgL_arg2452z00_1647;

													if (INTEGERP(BgL_initz00_73))
														{	/* Unsafe/crc.scm 399 */
															long BgL_xz00_4340;

															BgL_xz00_4340 = (long) CINT(BgL_initz00_73);
															BgL_arg2451z00_1646 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4340));
														}
													else
														{	/* Unsafe/crc.scm 399 */
															if (ELONGP(BgL_initz00_73))
																{	/* Unsafe/crc.scm 399 */
																	long BgL_xz00_4342;

																	BgL_xz00_4342 =
																		BELONG_TO_LONG(BgL_initz00_73);
																	BgL_arg2451z00_1646 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4342));
																}
															else
																{	/* Unsafe/crc.scm 399 */
																	BgL_arg2451z00_1646 = BgL_initz00_73;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_74))
														{	/* Unsafe/crc.scm 399 */
															long BgL_xz00_4347;

															BgL_xz00_4347 =
																(long) CINT(BgL_finalzd2xorzd2_74);
															BgL_arg2452z00_1647 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4347));
														}
													else
														{	/* Unsafe/crc.scm 399 */
															if (ELONGP(BgL_finalzd2xorzd2_74))
																{	/* Unsafe/crc.scm 399 */
																	long BgL_xz00_4349;

																	BgL_xz00_4349 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_74);
																	BgL_arg2452z00_1647 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4349));
																}
															else
																{	/* Unsafe/crc.scm 399 */
																	BgL_arg2452z00_1647 = BgL_finalzd2xorzd2_74;
																}
														}
													{	/* Unsafe/crc.scm 399 */
														BGL_LONGLONG_T BgL_res3039z00_4420;

														{	/* Unsafe/crc.scm 399 */
															BGL_LONGLONG_T BgL_initz00_4351;

															BGL_LONGLONG_T BgL_finalzd2xorzd2_4352;

															BGL_LONGLONG_T BgL_polyz00_4353;

															long BgL_crczd2lenzd2_4354;

															BgL_initz00_4351 =
																BLLONG_TO_LLONG(BgL_arg2451z00_1646);
															BgL_finalzd2xorzd2_4352 =
																BLLONG_TO_LLONG(BgL_arg2452z00_1647);
															BgL_polyz00_4353 =
																BLLONG_TO_LLONG(BgL_lsbzd2polyzd2_1636);
															BgL_crczd2lenzd2_4354 =
																(long) CINT(BgL_lenz00_1634);
															{	/* Unsafe/crc.scm 399 */
																BGL_LONGLONG_T BgL_mz00_4355;

																BgL_mz00_4355 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_4354 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4354 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{
																	BGL_LONGLONG_T BgL_crcz00_4365;

																	BgL_crcz00_4365 = BgL_initz00_4351;
																BgL_loopz00_4364:
																	{	/* Unsafe/crc.scm 399 */
																		obj_t BgL_cz00_4366;

																		BgL_cz00_4366 =
																			BGl_readzd2charzd2zz__r4_input_6_10_2z00
																			(BgL_pz00_72);
																		if (EOF_OBJECTP(BgL_cz00_4366))
																			{	/* Unsafe/crc.scm 399 */
																				BgL_res3039z00_4420 =
																					(
																					(BgL_finalzd2xorzd2_4352 ^
																						BgL_crcz00_4365) & BgL_mz00_4355);
																			}
																		else
																			{	/* Unsafe/crc.scm 399 */
																				BGL_LONGLONG_T BgL_arg2541z00_4369;

																				{	/* Unsafe/crc.scm 540 */
																					BGL_LONGLONG_T BgL_res3038z00_4419;

																					{	/* Unsafe/crc.scm 540 */
																						unsigned char BgL_cz00_4387;

																						BgL_cz00_4387 =
																							CCHAR(BgL_cz00_4366);
																						{	/* Unsafe/crc.scm 540 */
																							long BgL_octetz00_4391;

																							BgL_octetz00_4391 =
																								(
																								(unsigned
																									char) (BgL_cz00_4387));
																							{	/* Unsafe/crc.scm 540 */
																								BGL_LONGLONG_T
																									BgL_g1829z00_4392;
																								{	/* Unsafe/crc.scm 540 */
																									BGL_LONGLONG_T
																										BgL_arg2343z00_4393;
																									BgL_arg2343z00_4393 =
																										LONG_TO_LLONG
																										(BgL_octetz00_4391);
																									BgL_g1829z00_4392 =
																										(BgL_crcz00_4365 ^
																										BgL_arg2343z00_4393);
																								}
																								{
																									long BgL_iz00_4395;

																									BGL_LONGLONG_T
																										BgL_crcz00_4396;
																									BgL_iz00_4395 = ((long) 0);
																									BgL_crcz00_4396 =
																										BgL_g1829z00_4392;
																								BgL_loopz00_4394:
																									if (
																										(BgL_iz00_4395 ==
																											((long) 8)))
																										{	/* Unsafe/crc.scm 540 */
																											BgL_res3038z00_4419 =
																												BgL_crcz00_4396;
																										}
																									else
																										{	/* Unsafe/crc.scm 540 */
																											BGL_LONGLONG_T
																												BgL_newzd2crczd2_4398;
																											{	/* Unsafe/crc.scm 540 */
																												unsigned BGL_LONGLONG_T
																													BgL_xz00_4409;
																												BgL_xz00_4409 =
																													(unsigned
																													BGL_LONGLONG_T)
																													(BgL_crcz00_4396);
																												{	/* Unsafe/crc.scm 540 */
																													unsigned
																														BGL_LONGLONG_T
																														BgL_auxz00_8055;
																													{	/* Unsafe/crc.scm 540 */
																														int BgL_auxz00_8056;

																														BgL_auxz00_8056 =
																															(int) (((long)
																																1));
																														BgL_auxz00_8055 =
																															(BgL_xz00_4409 >>
																															BgL_auxz00_8056);
																													}
																													BgL_newzd2crczd2_4398
																														=
																														(BGL_LONGLONG_T)
																														(BgL_auxz00_8055);
																											}}
																											{
																												BGL_LONGLONG_T
																													BgL_crcz00_8062;
																												long BgL_iz00_8060;

																												BgL_iz00_8060 =
																													(BgL_iz00_4395 +
																													((long) 1));
																												BgL_crcz00_8062 =
																													(((((BGL_LONGLONG_T)
																																1) &
																															BgL_crcz00_4396) *
																														BgL_polyz00_4353) ^
																													BgL_newzd2crczd2_4398);
																												BgL_crcz00_4396 =
																													BgL_crcz00_8062;
																												BgL_iz00_4395 =
																													BgL_iz00_8060;
																												goto BgL_loopz00_4394;
																											}
																										}
																								}
																							}
																						}
																					}
																					BgL_arg2541z00_4369 =
																						BgL_res3038z00_4419;
																				}
																				{
																					BGL_LONGLONG_T BgL_crcz00_8066;

																					BgL_crcz00_8066 = BgL_arg2541z00_4369;
																					BgL_crcz00_4365 = BgL_crcz00_8066;
																					goto BgL_loopz00_4364;
																				}
																			}
																	}
																}
															}
														}
														return make_bllong(BgL_res3039z00_4420);
													}
												}
										}
									else
										{	/* Unsafe/crc.scm 395 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol3219z00zz__crcz00,
												BGl_string3232z00zz__crcz00, BgL_polyz00_1635);
										}
								}
						}
				}
			}
		}
	}



/* crc-fast-mmap */
	obj_t BGl_crczd2fastzd2mmapz00zz__crcz00(obj_t BgL_namez00_76,
		obj_t BgL_mz00_77, obj_t BgL_initz00_78, obj_t BgL_finalzd2xorzd2_79,
		obj_t BgL_bigzd2endianzf3z21_80)
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 407 */
			{	/* Unsafe/crc.scm 408 */
				obj_t BgL_lenz00_1648;

				BgL_lenz00_1648 = BGl_getzd2crczd2zz__crcz00(BgL_namez00_76);
				{	/* Unsafe/crc.scm 411 */
					obj_t BgL_polyz00_1649;

					obj_t BgL_lsbzd2polyzd2_1650;

					{	/* Unsafe/crc.scm 411 */
						int BgL_auxz00_8070;

						BgL_auxz00_8070 = (int) (((long) 1));
						BgL_polyz00_1649 = BGL_MVALUES_VAL(BgL_auxz00_8070);
					}
					{	/* Unsafe/crc.scm 411 */
						int BgL_auxz00_8073;

						BgL_auxz00_8073 = (int) (((long) 2));
						BgL_lsbzd2polyzd2_1650 = BGL_MVALUES_VAL(BgL_auxz00_8073);
					}
					if (INTEGERP(BgL_polyz00_1649))
						{	/* Unsafe/crc.scm 411 */
							if (CBOOL(BgL_bigzd2endianzf3z21_80))
								{	/* Unsafe/crc.scm 413 */
									long BgL_res3041z00_4575;

									{	/* Unsafe/crc.scm 413 */
										long BgL_initz00_4425;

										long BgL_finalzd2xorzd2_4426;

										long BgL_polyz00_4427;

										long BgL_crczd2lenzd2_4428;

										BgL_initz00_4425 = (long) CINT(BgL_initz00_78);
										BgL_finalzd2xorzd2_4426 =
											(long) CINT(BgL_finalzd2xorzd2_79);
										BgL_polyz00_4427 = (long) CINT(BgL_polyz00_1649);
										BgL_crczd2lenzd2_4428 = (long) CINT(BgL_lenz00_1648);
										{	/* Unsafe/crc.scm 413 */
											long BgL_mz00_4429;

											BgL_mz00_4429 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_4428 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_4428 - ((long) 1)))) -
													((long) 1)));
											{	/* Unsafe/crc.scm 413 */
												long BgL_lenz00_4438;

												BgL_lenz00_4438 = BGL_MMAP_LENGTH(BgL_mz00_77);
												{
													long BgL_iz00_4440;

													long BgL_crcz00_4441;

													BgL_iz00_4440 = ((long) 0);
													BgL_crcz00_4441 = BgL_initz00_4425;
												BgL_loopz00_4439:
													{	/* Unsafe/crc.scm 413 */
														bool_t BgL_testz00_8093;

														{	/* Unsafe/crc.scm 413 */
															long BgL_n2z00_4461;

															BgL_n2z00_4461 = ELONG_TO_LONG(BgL_lenz00_4438);
															BgL_testz00_8093 =
																(BgL_iz00_4440 == BgL_n2z00_4461);
														}
														if (BgL_testz00_8093)
															{	/* Unsafe/crc.scm 413 */
																BgL_res3041z00_4575 =
																	(
																	(BgL_finalzd2xorzd2_4426 ^ BgL_crcz00_4441) &
																	BgL_mz00_4429);
															}
														else
															{	/* Unsafe/crc.scm 413 */
																long BgL_arg2470z00_4444;

																long BgL_arg2471z00_4445;

																BgL_arg2470z00_4444 =
																	(BgL_iz00_4440 + ((long) 1));
																{	/* Unsafe/crc.scm 413 */
																	unsigned char BgL_arg2472z00_4446;

																	{	/* Unsafe/crc.scm 413 */
																		long BgL_auxz00_8099;

																		BgL_auxz00_8099 =
																			LONG_TO_ELONG(BgL_iz00_4440);
																		BgL_arg2472z00_4446 =
																			BGL_MMAP_REF(BgL_mz00_77,
																			BgL_auxz00_8099);
																	}
																	{	/* Unsafe/crc.scm 448 */
																		unsigned char BgL_cz00_4468;

																		BgL_cz00_4468 =
																			(char) (BgL_arg2472z00_4446);
																		{

																			if ((BgL_crczd2lenzd2_4428 >= ((long) 8)))
																				{	/* Unsafe/crc.scm 448 */
																					{	/* Unsafe/crc.scm 448 */
																						long BgL_mz00_4477;

																						BgL_mz00_4477 =
																							(((long) 1) <<
																							(int) (
																								(BgL_crczd2lenzd2_4428 -
																									((long) 1))));
																						{	/* Unsafe/crc.scm 448 */

																							{
																								long BgL_iz00_4482;

																								long BgL_crcz00_4483;

																								BgL_iz00_4482 = ((long) 0);
																								BgL_crcz00_4483 =
																									(BgL_crcz00_4441 ^
																									(((unsigned
																												char) (BgL_cz00_4468))
																										<<
																										(int) (
																											(BgL_crczd2lenzd2_4428 -
																												((long) 8)))));
																							BgL_loopz00_4481:
																								if (
																									(BgL_iz00_4482 == ((long) 8)))
																									{	/* Unsafe/crc.scm 448 */
																										BgL_arg2471z00_4445 =
																											BgL_crcz00_4483;
																									}
																								else
																									{
																										long BgL_crcz00_8112;

																										long BgL_iz00_8110;

																										BgL_iz00_8110 =
																											(BgL_iz00_4482 +
																											((long) 1));
																										BgL_crcz00_8112 =
																											((((BgL_mz00_4477 &
																														BgL_crcz00_4483) >>
																													(int) (
																														(BgL_crczd2lenzd2_4428
																															-
																															((long) 1)))) *
																												BgL_polyz00_4427) ^
																											(BgL_crcz00_4483 <<
																												(int) (((long) 1))));
																										BgL_crcz00_4483 =
																											BgL_crcz00_8112;
																										BgL_iz00_4482 =
																											BgL_iz00_8110;
																										goto BgL_loopz00_4481;
																									}
																							}
																						}
																					}
																				}
																			else
																				{	/* Unsafe/crc.scm 448 */
																					{	/* Unsafe/crc.scm 448 */
																						long BgL_mz00_4493;

																						BgL_mz00_4493 =
																							(((long) 1) <<
																							(int) (
																								(BgL_crczd2lenzd2_4428 -
																									((long) 1))));
																						{	/* Unsafe/crc.scm 448 */

																							{
																								long BgL_iz00_4498;

																								long BgL_crcz00_4499;

																								long
																									BgL_shiftedzd2valuezd2_4500;
																								BgL_iz00_4498 = ((long) 0);
																								BgL_crcz00_4499 =
																									BgL_crcz00_4441;
																								BgL_shiftedzd2valuezd2_4500 =
																									(((unsigned
																											char) (BgL_cz00_4468)) <<
																									(int)
																									(BgL_crczd2lenzd2_4428));
																							BgL_loopz00_4497:
																								if (
																									(BgL_iz00_4498 == ((long) 8)))
																									{	/* Unsafe/crc.scm 448 */
																										BgL_arg2471z00_4445 =
																											BgL_crcz00_4499;
																									}
																								else
																									{	/* Unsafe/crc.scm 448 */
																										long BgL_crc2z00_4502;

																										BgL_crc2z00_4502 =
																											(BgL_crcz00_4499 ^
																											(BgL_mz00_4493 &
																												(BgL_shiftedzd2valuezd2_4500
																													>> (int) (((long)
																															8)))));
																										{	/* Unsafe/crc.scm 448 */

																											{
																												long
																													BgL_shiftedzd2valuezd2_8147;
																												long BgL_crcz00_8138;

																												long BgL_iz00_8136;

																												BgL_iz00_8136 =
																													(BgL_iz00_4498 +
																													((long) 1));
																												BgL_crcz00_8138 =
																													((((BgL_mz00_4493 &
																																BgL_crc2z00_4502)
																															>>
																															(int) (
																																(BgL_crczd2lenzd2_4428
																																	-
																																	((long) 1))))
																														*
																														BgL_polyz00_4427) ^
																													(BgL_crc2z00_4502 <<
																														(int) (((long)
																																1))));
																												BgL_shiftedzd2valuezd2_8147
																													=
																													(BgL_shiftedzd2valuezd2_4500
																													<< (int) (((long)
																															1)));
																												BgL_shiftedzd2valuezd2_4500
																													=
																													BgL_shiftedzd2valuezd2_8147;
																												BgL_crcz00_4499 =
																													BgL_crcz00_8138;
																												BgL_iz00_4498 =
																													BgL_iz00_8136;
																												goto BgL_loopz00_4497;
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
																{
																	long BgL_crcz00_8155;

																	long BgL_iz00_8154;

																	BgL_iz00_8154 = BgL_arg2470z00_4444;
																	BgL_crcz00_8155 = BgL_arg2471z00_4445;
																	BgL_crcz00_4441 = BgL_crcz00_8155;
																	BgL_iz00_4440 = BgL_iz00_8154;
																	goto BgL_loopz00_4439;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res3041z00_4575);
								}
							else
								{	/* Unsafe/crc.scm 414 */
									long BgL_res3043z00_4651;

									{	/* Unsafe/crc.scm 414 */
										long BgL_initz00_4577;

										long BgL_finalzd2xorzd2_4578;

										long BgL_polyz00_4579;

										long BgL_crczd2lenzd2_4580;

										BgL_initz00_4577 = (long) CINT(BgL_initz00_78);
										BgL_finalzd2xorzd2_4578 =
											(long) CINT(BgL_finalzd2xorzd2_79);
										BgL_polyz00_4579 = (long) CINT(BgL_lsbzd2polyzd2_1650);
										BgL_crczd2lenzd2_4580 = (long) CINT(BgL_lenz00_1648);
										{	/* Unsafe/crc.scm 414 */
											long BgL_mz00_4581;

											BgL_mz00_4581 =
												(
												(((long) 1) <<
													(int) (
														(BgL_crczd2lenzd2_4580 - ((long) 1)))) +
												((((long) 1) <<
														(int) (
															(BgL_crczd2lenzd2_4580 - ((long) 1)))) -
													((long) 1)));
											{	/* Unsafe/crc.scm 414 */
												long BgL_lenz00_4590;

												BgL_lenz00_4590 = BGL_MMAP_LENGTH(BgL_mz00_77);
												{
													long BgL_iz00_4592;

													long BgL_crcz00_4593;

													BgL_iz00_4592 = ((long) 0);
													BgL_crcz00_4593 = BgL_initz00_4577;
												BgL_loopz00_4591:
													{	/* Unsafe/crc.scm 414 */
														bool_t BgL_testz00_8170;

														{	/* Unsafe/crc.scm 414 */
															long BgL_n2z00_4613;

															BgL_n2z00_4613 = ELONG_TO_LONG(BgL_lenz00_4590);
															BgL_testz00_8170 =
																(BgL_iz00_4592 == BgL_n2z00_4613);
														}
														if (BgL_testz00_8170)
															{	/* Unsafe/crc.scm 414 */
																BgL_res3043z00_4651 =
																	(
																	(BgL_finalzd2xorzd2_4578 ^ BgL_crcz00_4593) &
																	BgL_mz00_4581);
															}
														else
															{	/* Unsafe/crc.scm 414 */
																long BgL_arg2470z00_4596;

																long BgL_arg2471z00_4597;

																BgL_arg2470z00_4596 =
																	(BgL_iz00_4592 + ((long) 1));
																{	/* Unsafe/crc.scm 414 */
																	unsigned char BgL_arg2472z00_4598;

																	{	/* Unsafe/crc.scm 414 */
																		long BgL_auxz00_8176;

																		BgL_auxz00_8176 =
																			LONG_TO_ELONG(BgL_iz00_4592);
																		BgL_arg2472z00_4598 =
																			BGL_MMAP_REF(BgL_mz00_77,
																			BgL_auxz00_8176);
																	}
																	{
																		long BgL_iz00_4627;

																		long BgL_crcz00_4628;

																		BgL_iz00_4627 = ((long) 0);
																		BgL_crcz00_4628 =
																			(BgL_crcz00_4593 ^
																			((unsigned char) (
																					(char) (BgL_arg2472z00_4598))));
																	BgL_loopz00_4626:
																		if ((BgL_iz00_4627 == ((long) 8)))
																			{	/* Unsafe/crc.scm 448 */
																				BgL_arg2471z00_4597 = BgL_crcz00_4628;
																			}
																		else
																			{
																				long BgL_crcz00_8183;

																				long BgL_iz00_8181;

																				BgL_iz00_8181 =
																					(BgL_iz00_4627 + ((long) 1));
																				BgL_crcz00_8183 =
																					(
																					((((long) 1) & BgL_crcz00_4628) *
																						BgL_polyz00_4579) ^
																					(long) (((unsigned
																								long) (BgL_crcz00_4628) >>
																							(int) (((long) 1)))));
																				BgL_crcz00_4628 = BgL_crcz00_8183;
																				BgL_iz00_4627 = BgL_iz00_8181;
																				goto BgL_loopz00_4626;
																			}
																	}
																}
																{
																	long BgL_crcz00_8196;

																	long BgL_iz00_8195;

																	BgL_iz00_8195 = BgL_arg2470z00_4596;
																	BgL_crcz00_8196 = BgL_arg2471z00_4597;
																	BgL_crcz00_4593 = BgL_crcz00_8196;
																	BgL_iz00_4592 = BgL_iz00_8195;
																	goto BgL_loopz00_4591;
																}
															}
													}
												}
											}
										}
									}
									return BINT(BgL_res3043z00_4651);
								}
						}
					else
						{	/* Unsafe/crc.scm 411 */
							if (ELONGP(BgL_polyz00_1649))
								{	/* Unsafe/crc.scm 415 */
									if (CBOOL(BgL_bigzd2endianzf3z21_80))
										{	/* Unsafe/crc.scm 417 */
											obj_t BgL_arg2455z00_1653;

											obj_t BgL_arg2456z00_1654;

											if (INTEGERP(BgL_initz00_78))
												{	/* Unsafe/crc.scm 417 */
													long BgL_xz00_4656;

													BgL_xz00_4656 = (long) CINT(BgL_initz00_78);
													{	/* Unsafe/crc.scm 417 */
														long BgL_auxz00_8205;

														BgL_auxz00_8205 = LONG_TO_ELONG(BgL_xz00_4656);
														BgL_arg2455z00_1653 = make_belong(BgL_auxz00_8205);
												}}
											else
												{	/* Unsafe/crc.scm 417 */
													BgL_arg2455z00_1653 = BgL_initz00_78;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_79))
												{	/* Unsafe/crc.scm 417 */
													long BgL_xz00_4660;

													BgL_xz00_4660 = (long) CINT(BgL_finalzd2xorzd2_79);
													{	/* Unsafe/crc.scm 417 */
														long BgL_auxz00_8211;

														BgL_auxz00_8211 = LONG_TO_ELONG(BgL_xz00_4660);
														BgL_arg2456z00_1654 = make_belong(BgL_auxz00_8211);
												}}
											else
												{	/* Unsafe/crc.scm 417 */
													BgL_arg2456z00_1654 = BgL_finalzd2xorzd2_79;
												}
											{	/* Unsafe/crc.scm 417 */
												long BgL_res3049z00_4874;

												{	/* Unsafe/crc.scm 417 */
													long BgL_initz00_4662;

													long BgL_finalzd2xorzd2_4663;

													long BgL_polyz00_4664;

													long BgL_crczd2lenzd2_4665;

													BgL_initz00_4662 =
														BELONG_TO_LONG(BgL_arg2455z00_1653);
													BgL_finalzd2xorzd2_4663 =
														BELONG_TO_LONG(BgL_arg2456z00_1654);
													BgL_polyz00_4664 = BELONG_TO_LONG(BgL_polyz00_1649);
													BgL_crczd2lenzd2_4665 = (long) CINT(BgL_lenz00_1648);
													{	/* Unsafe/crc.scm 417 */
														long BgL_mz00_4666;

														{	/* Unsafe/crc.scm 417 */
															long BgL_auxz00_8218;

															{	/* Unsafe/crc.scm 417 */
																long BgL_res3044z00_4694;

																{	/* Unsafe/crc.scm 417 */
																	long BgL_auxz00_8222;

																	BgL_auxz00_8222 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4665 - ((long) 1)))) -
																		((long) 1));
																	BgL_res3044z00_4694 =
																		LONG_TO_ELONG(BgL_auxz00_8222);
																}
																BgL_auxz00_8218 = BgL_res3044z00_4694;
															}
															BgL_mz00_4666 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4665 - ((long) 1)))) +
																BgL_auxz00_8218);
														}
														{	/* Unsafe/crc.scm 417 */
															long BgL_lenz00_4675;

															BgL_lenz00_4675 = BGL_MMAP_LENGTH(BgL_mz00_77);
															{
																long BgL_iz00_4677;

																long BgL_crcz00_4678;

																BgL_iz00_4677 = ((long) 0);
																BgL_crcz00_4678 = BgL_initz00_4662;
															BgL_loopz00_4676:
																{	/* Unsafe/crc.scm 417 */
																	bool_t BgL_testz00_8230;

																	{	/* Unsafe/crc.scm 417 */
																		long BgL_n2z00_4699;

																		BgL_n2z00_4699 =
																			ELONG_TO_LONG(BgL_lenz00_4675);
																		BgL_testz00_8230 =
																			(BgL_iz00_4677 == BgL_n2z00_4699);
																	}
																	if (BgL_testz00_8230)
																		{	/* Unsafe/crc.scm 417 */
																			BgL_res3049z00_4874 =
																				(
																				(BgL_finalzd2xorzd2_4663 ^
																					BgL_crcz00_4678) & BgL_mz00_4666);
																		}
																	else
																		{	/* Unsafe/crc.scm 417 */
																			long BgL_arg2487z00_4681;

																			long BgL_arg2488z00_4682;

																			BgL_arg2487z00_4681 =
																				(BgL_iz00_4677 + ((long) 1));
																			{	/* Unsafe/crc.scm 417 */
																				unsigned char BgL_arg2489z00_4683;

																				{	/* Unsafe/crc.scm 417 */
																					long BgL_auxz00_8236;

																					BgL_auxz00_8236 =
																						LONG_TO_ELONG(BgL_iz00_4677);
																					BgL_arg2489z00_4683 =
																						BGL_MMAP_REF(BgL_mz00_77,
																						BgL_auxz00_8236);
																				}
																				{	/* Unsafe/crc.scm 468 */
																					long BgL_res3048z00_4873;

																					{	/* Unsafe/crc.scm 468 */
																						unsigned char BgL_cz00_4706;

																						BgL_cz00_4706 =
																							(char) (BgL_arg2489z00_4683);
																						if (
																							(BgL_crczd2lenzd2_4665 >=
																								((long) 8)))
																							{	/* Unsafe/crc.scm 468 */
																								long BgL_octetz00_4711;

																								BgL_octetz00_4711 =
																									(
																									(unsigned
																										char) (BgL_cz00_4706));
																								{	/* Unsafe/crc.scm 468 */
																									long BgL_valuez00_4712;

																									long BgL_mz00_4713;

																									{	/* Unsafe/crc.scm 468 */
																										long BgL_arg2301z00_4714;

																										long BgL_arg2302z00_4715;

																										BgL_arg2301z00_4714 =
																											LONG_TO_ELONG
																											(BgL_octetz00_4711);
																										BgL_arg2302z00_4715 =
																											(BgL_crczd2lenzd2_4665 -
																											((long) 8));
																										BgL_valuez00_4712 =
																											(BgL_arg2301z00_4714 <<
																											(int)
																											(BgL_arg2302z00_4715));
																									}
																									BgL_mz00_4713 =
																										(((long) 1) <<
																										(int) (
																											(BgL_crczd2lenzd2_4665 -
																												((long) 1))));
																									{
																										long BgL_iz00_4720;

																										long BgL_crcz00_4721;

																										BgL_iz00_4720 = ((long) 0);
																										BgL_crcz00_4721 =
																											(BgL_crcz00_4678 ^
																											BgL_valuez00_4712);
																									BgL_loopz00_4719:
																										if (
																											(BgL_iz00_4720 ==
																												((long) 8)))
																											{	/* Unsafe/crc.scm 468 */
																												BgL_res3048z00_4873 =
																													BgL_crcz00_4721;
																											}
																										else
																											{	/* Unsafe/crc.scm 468 */
																												long
																													BgL_newzd2crczd2_4723;
																												BgL_newzd2crczd2_4723 =
																													(BgL_crcz00_4721 <<
																													(int) (((long) 1)));
																												if ((((long) 0) ==
																														(BgL_mz00_4713 &
																															BgL_crcz00_4721)))
																													{
																														long
																															BgL_crcz00_8260;
																														long BgL_iz00_8258;

																														BgL_iz00_8258 =
																															(BgL_iz00_4720 +
																															((long) 1));
																														BgL_crcz00_8260 =
																															BgL_newzd2crczd2_4723;
																														BgL_crcz00_4721 =
																															BgL_crcz00_8260;
																														BgL_iz00_4720 =
																															BgL_iz00_8258;
																														goto
																															BgL_loopz00_4719;
																													}
																												else
																													{
																														long
																															BgL_crcz00_8263;
																														long BgL_iz00_8261;

																														BgL_iz00_8261 =
																															(BgL_iz00_4720 +
																															((long) 1));
																														BgL_crcz00_8263 =
																															(BgL_newzd2crczd2_4723
																															^
																															BgL_polyz00_4664);
																														BgL_crcz00_4721 =
																															BgL_crcz00_8263;
																														BgL_iz00_4720 =
																															BgL_iz00_8261;
																														goto
																															BgL_loopz00_4719;
																													}
																											}
																									}
																								}
																							}
																						else
																							{	/* Unsafe/crc.scm 468 */
																								long BgL_arg2305z00_4730;

																								{	/* Unsafe/crc.scm 468 */
																									long BgL_arg2306z00_4731;

																									long BgL_arg2307z00_4732;

																									{	/* Unsafe/crc.scm 468 */
																										long BgL_res3045z00_4762;

																										{	/* Unsafe/crc.scm 468 */
																											long BgL_auxz00_8266;

																											{	/* Unsafe/crc.scm 468 */
																												long BgL_auxz00_8267;

																												BgL_auxz00_8267 =
																													ELONG_TO_LONG
																													(BgL_crcz00_4678);
																												BgL_auxz00_8266 =
																													ELONG_TO_LONG
																													(BgL_auxz00_8267);
																											}
																											BgL_res3045z00_4762 =
																												ELONG_TO_LONG
																												(BgL_auxz00_8266);
																										}
																										BgL_arg2306z00_4731 =
																											BgL_res3045z00_4762;
																									}
																									{	/* Unsafe/crc.scm 468 */
																										long BgL_res3046z00_4764;

																										{	/* Unsafe/crc.scm 468 */
																											long BgL_auxz00_8271;

																											{	/* Unsafe/crc.scm 468 */
																												long BgL_auxz00_8272;

																												BgL_auxz00_8272 =
																													ELONG_TO_LONG
																													(BgL_polyz00_4664);
																												BgL_auxz00_8271 =
																													ELONG_TO_LONG
																													(BgL_auxz00_8272);
																											}
																											BgL_res3046z00_4764 =
																												ELONG_TO_LONG
																												(BgL_auxz00_8271);
																										}
																										BgL_arg2307z00_4732 =
																											BgL_res3046z00_4764;
																									}
																									{

																										if (
																											(BgL_crczd2lenzd2_4665 >=
																												((long) 8)))
																											{	/* Unsafe/crc.scm 468 */
																												{	/* Unsafe/crc.scm 468 */
																													long BgL_mz00_4774;

																													BgL_mz00_4774 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4665
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 468 */

																														{
																															long
																																BgL_iz00_4779;
																															long
																																BgL_crcz00_4780;
																															BgL_iz00_4779 =
																																((long) 0);
																															BgL_crcz00_4780 =
																																(BgL_arg2306z00_4731
																																^ (((unsigned
																																			char)
																																		(BgL_cz00_4706))
																																	<<
																																	(int) (
																																		(BgL_crczd2lenzd2_4665
																																			-
																																			((long)
																																				8)))));
																														BgL_loopz00_4778:
																															if (
																																(BgL_iz00_4779
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 468 */
																																	BgL_arg2305z00_4730
																																		=
																																		BgL_crcz00_4780;
																																}
																															else
																																{
																																	long
																																		BgL_crcz00_8285;
																																	long
																																		BgL_iz00_8283;
																																	BgL_iz00_8283
																																		=
																																		(BgL_iz00_4779
																																		+
																																		((long) 1));
																																	BgL_crcz00_8285
																																		=
																																		((((BgL_mz00_4774 & BgL_crcz00_4780) >> (int) ((BgL_crczd2lenzd2_4665 - ((long) 1)))) * BgL_arg2307z00_4732) ^ (BgL_crcz00_4780 << (int) (((long) 1))));
																																	BgL_crcz00_4780
																																		=
																																		BgL_crcz00_8285;
																																	BgL_iz00_4779
																																		=
																																		BgL_iz00_8283;
																																	goto
																																		BgL_loopz00_4778;
																																}
																														}
																													}
																												}
																											}
																										else
																											{	/* Unsafe/crc.scm 468 */
																												{	/* Unsafe/crc.scm 468 */
																													long BgL_mz00_4790;

																													BgL_mz00_4790 =
																														(((long) 1) <<
																														(int) (
																															(BgL_crczd2lenzd2_4665
																																- ((long) 1))));
																													{	/* Unsafe/crc.scm 468 */

																														{
																															long
																																BgL_iz00_4795;
																															long
																																BgL_crcz00_4796;
																															long
																																BgL_shiftedzd2valuezd2_4797;
																															BgL_iz00_4795 =
																																((long) 0);
																															BgL_crcz00_4796 =
																																BgL_arg2306z00_4731;
																															BgL_shiftedzd2valuezd2_4797
																																=
																																(((unsigned
																																		char)
																																	(BgL_cz00_4706))
																																<<
																																(int)
																																(BgL_crczd2lenzd2_4665));
																														BgL_loopz00_4794:
																															if (
																																(BgL_iz00_4795
																																	==
																																	((long) 8)))
																																{	/* Unsafe/crc.scm 468 */
																																	BgL_arg2305z00_4730
																																		=
																																		BgL_crcz00_4796;
																																}
																															else
																																{	/* Unsafe/crc.scm 468 */
																																	long
																																		BgL_crc2z00_4799;
																																	BgL_crc2z00_4799
																																		=
																																		(BgL_crcz00_4796
																																		^
																																		(BgL_mz00_4790
																																			&
																																			(BgL_shiftedzd2valuezd2_4797
																																				>>
																																				(int) ((
																																						(long)
																																						8)))));
																																	{	/* Unsafe/crc.scm 468 */

																																		{
																																			long
																																				BgL_shiftedzd2valuezd2_8320;
																																			long
																																				BgL_crcz00_8311;
																																			long
																																				BgL_iz00_8309;
																																			BgL_iz00_8309
																																				=
																																				(BgL_iz00_4795
																																				+
																																				((long)
																																					1));
																																			BgL_crcz00_8311
																																				=
																																				((((BgL_mz00_4790 & BgL_crc2z00_4799) >> (int) ((BgL_crczd2lenzd2_4665 - ((long) 1)))) * BgL_arg2307z00_4732) ^ (BgL_crc2z00_4799 << (int) (((long) 1))));
																																			BgL_shiftedzd2valuezd2_8320
																																				=
																																				(BgL_shiftedzd2valuezd2_4797
																																				<<
																																				(int) ((
																																						(long)
																																						1)));
																																			BgL_shiftedzd2valuezd2_4797
																																				=
																																				BgL_shiftedzd2valuezd2_8320;
																																			BgL_crcz00_4796
																																				=
																																				BgL_crcz00_8311;
																																			BgL_iz00_4795
																																				=
																																				BgL_iz00_8309;
																																			goto
																																				BgL_loopz00_4794;
																																		}
																																	}
																																}
																														}
																													}
																												}
																											}
																									}
																								}
																								BgL_res3048z00_4873 =
																									LONG_TO_ELONG
																									(BgL_arg2305z00_4730);
																							}
																					}
																					BgL_arg2488z00_4682 =
																						BgL_res3048z00_4873;
																				}
																			}
																			{
																				long BgL_crcz00_8329;

																				long BgL_iz00_8328;

																				BgL_iz00_8328 = BgL_arg2487z00_4681;
																				BgL_crcz00_8329 = BgL_arg2488z00_4682;
																				BgL_crcz00_4678 = BgL_crcz00_8329;
																				BgL_iz00_4677 = BgL_iz00_8328;
																				goto BgL_loopz00_4676;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res3049z00_4874);
											}
										}
									else
										{	/* Unsafe/crc.scm 419 */
											obj_t BgL_arg2457z00_1655;

											obj_t BgL_arg2458z00_1656;

											if (INTEGERP(BgL_initz00_78))
												{	/* Unsafe/crc.scm 419 */
													long BgL_xz00_4878;

													BgL_xz00_4878 = (long) CINT(BgL_initz00_78);
													{	/* Unsafe/crc.scm 419 */
														long BgL_auxz00_8334;

														BgL_auxz00_8334 = LONG_TO_ELONG(BgL_xz00_4878);
														BgL_arg2457z00_1655 = make_belong(BgL_auxz00_8334);
												}}
											else
												{	/* Unsafe/crc.scm 419 */
													BgL_arg2457z00_1655 = BgL_initz00_78;
												}
											if (INTEGERP(BgL_finalzd2xorzd2_79))
												{	/* Unsafe/crc.scm 419 */
													long BgL_xz00_4882;

													BgL_xz00_4882 = (long) CINT(BgL_finalzd2xorzd2_79);
													{	/* Unsafe/crc.scm 419 */
														long BgL_auxz00_8340;

														BgL_auxz00_8340 = LONG_TO_ELONG(BgL_xz00_4882);
														BgL_arg2458z00_1656 = make_belong(BgL_auxz00_8340);
												}}
											else
												{	/* Unsafe/crc.scm 419 */
													BgL_arg2458z00_1656 = BgL_finalzd2xorzd2_79;
												}
											{	/* Unsafe/crc.scm 419 */
												long BgL_res3052z00_4961;

												{	/* Unsafe/crc.scm 419 */
													long BgL_initz00_4884;

													long BgL_finalzd2xorzd2_4885;

													long BgL_polyz00_4886;

													long BgL_crczd2lenzd2_4887;

													BgL_initz00_4884 =
														BELONG_TO_LONG(BgL_arg2457z00_1655);
													BgL_finalzd2xorzd2_4885 =
														BELONG_TO_LONG(BgL_arg2458z00_1656);
													BgL_polyz00_4886 =
														BELONG_TO_LONG(BgL_lsbzd2polyzd2_1650);
													BgL_crczd2lenzd2_4887 = (long) CINT(BgL_lenz00_1648);
													{	/* Unsafe/crc.scm 419 */
														long BgL_mz00_4888;

														{	/* Unsafe/crc.scm 419 */
															long BgL_auxz00_8347;

															{	/* Unsafe/crc.scm 419 */
																long BgL_res3050z00_4916;

																{	/* Unsafe/crc.scm 419 */
																	long BgL_auxz00_8351;

																	BgL_auxz00_8351 =
																		(
																		(((long) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4887 - ((long) 1)))) -
																		((long) 1));
																	BgL_res3050z00_4916 =
																		LONG_TO_ELONG(BgL_auxz00_8351);
																}
																BgL_auxz00_8347 = BgL_res3050z00_4916;
															}
															BgL_mz00_4888 =
																(
																(((long) 1) <<
																	(int) (
																		(BgL_crczd2lenzd2_4887 - ((long) 1)))) +
																BgL_auxz00_8347);
														}
														{	/* Unsafe/crc.scm 419 */
															long BgL_lenz00_4897;

															BgL_lenz00_4897 = BGL_MMAP_LENGTH(BgL_mz00_77);
															{
																long BgL_iz00_4899;

																long BgL_crcz00_4900;

																BgL_iz00_4899 = ((long) 0);
																BgL_crcz00_4900 = BgL_initz00_4884;
															BgL_loopz00_4898:
																{	/* Unsafe/crc.scm 419 */
																	bool_t BgL_testz00_8359;

																	{	/* Unsafe/crc.scm 419 */
																		long BgL_n2z00_4921;

																		BgL_n2z00_4921 =
																			ELONG_TO_LONG(BgL_lenz00_4897);
																		BgL_testz00_8359 =
																			(BgL_iz00_4899 == BgL_n2z00_4921);
																	}
																	if (BgL_testz00_8359)
																		{	/* Unsafe/crc.scm 419 */
																			BgL_res3052z00_4961 =
																				(
																				(BgL_finalzd2xorzd2_4885 ^
																					BgL_crcz00_4900) & BgL_mz00_4888);
																		}
																	else
																		{	/* Unsafe/crc.scm 419 */
																			long BgL_arg2487z00_4903;

																			long BgL_arg2488z00_4904;

																			BgL_arg2487z00_4903 =
																				(BgL_iz00_4899 + ((long) 1));
																			{	/* Unsafe/crc.scm 419 */
																				unsigned char BgL_arg2489z00_4905;

																				{	/* Unsafe/crc.scm 419 */
																					long BgL_auxz00_8365;

																					BgL_auxz00_8365 =
																						LONG_TO_ELONG(BgL_iz00_4899);
																					BgL_arg2489z00_4905 =
																						BGL_MMAP_REF(BgL_mz00_77,
																						BgL_auxz00_8365);
																				}
																				{	/* Unsafe/crc.scm 468 */
																					long BgL_res3051z00_4960;

																					{	/* Unsafe/crc.scm 468 */
																						unsigned char BgL_cz00_4928;

																						BgL_cz00_4928 =
																							(char) (BgL_arg2489z00_4905);
																						{	/* Unsafe/crc.scm 468 */
																							long BgL_octetz00_4932;

																							BgL_octetz00_4932 =
																								(
																								(unsigned
																									char) (BgL_cz00_4928));
																							{	/* Unsafe/crc.scm 468 */
																								long BgL_g1828z00_4933;

																								{	/* Unsafe/crc.scm 468 */
																									long BgL_arg2336z00_4934;

																									BgL_arg2336z00_4934 =
																										LONG_TO_ELONG
																										(BgL_octetz00_4932);
																									BgL_g1828z00_4933 =
																										(BgL_crcz00_4900 ^
																										BgL_arg2336z00_4934);
																								}
																								{
																									long BgL_iz00_4936;

																									long BgL_crcz00_4937;

																									BgL_iz00_4936 = ((long) 0);
																									BgL_crcz00_4937 =
																										BgL_g1828z00_4933;
																								BgL_loopz00_4935:
																									if (
																										(BgL_iz00_4936 ==
																											((long) 8)))
																										{	/* Unsafe/crc.scm 468 */
																											BgL_res3051z00_4960 =
																												BgL_crcz00_4937;
																										}
																									else
																										{	/* Unsafe/crc.scm 468 */
																											long
																												BgL_newzd2crczd2_4939;
																											{	/* Unsafe/crc.scm 468 */
																												unsigned long
																													BgL_xz00_4950;
																												BgL_xz00_4950 =
																													(unsigned
																													long)
																													(BgL_crcz00_4937);
																												{	/* Unsafe/crc.scm 468 */
																													unsigned long
																														BgL_auxz00_8376;
																													{	/* Unsafe/crc.scm 468 */
																														int BgL_auxz00_8377;

																														BgL_auxz00_8377 =
																															(int) (((long)
																																1));
																														BgL_auxz00_8376 =
																															(BgL_xz00_4950 >>
																															BgL_auxz00_8377);
																													}
																													BgL_newzd2crczd2_4939
																														=
																														(long)
																														(BgL_auxz00_8376);
																											}}
																											{
																												long BgL_crcz00_8383;

																												long BgL_iz00_8381;

																												BgL_iz00_8381 =
																													(BgL_iz00_4936 +
																													((long) 1));
																												BgL_crcz00_8383 =
																													(((((long) 1) &
																															BgL_crcz00_4937) *
																														BgL_polyz00_4886) ^
																													BgL_newzd2crczd2_4939);
																												BgL_crcz00_4937 =
																													BgL_crcz00_8383;
																												BgL_iz00_4936 =
																													BgL_iz00_8381;
																												goto BgL_loopz00_4935;
																											}
																										}
																								}
																							}
																						}
																					}
																					BgL_arg2488z00_4904 =
																						BgL_res3051z00_4960;
																				}
																			}
																			{
																				long BgL_crcz00_8388;

																				long BgL_iz00_8387;

																				BgL_iz00_8387 = BgL_arg2487z00_4903;
																				BgL_crcz00_8388 = BgL_arg2488z00_4904;
																				BgL_crcz00_4900 = BgL_crcz00_8388;
																				BgL_iz00_4899 = BgL_iz00_8387;
																				goto BgL_loopz00_4898;
																			}
																		}
																}
															}
														}
													}
												}
												return make_belong(BgL_res3052z00_4961);
											}
										}
								}
							else
								{	/* Unsafe/crc.scm 415 */
									if (LLONGP(BgL_polyz00_1649))
										{	/* Unsafe/crc.scm 421 */
											if (CBOOL(BgL_bigzd2endianzf3z21_80))
												{	/* Unsafe/crc.scm 423 */
													obj_t BgL_arg2460z00_1658;

													obj_t BgL_arg2461z00_1659;

													if (INTEGERP(BgL_initz00_78))
														{	/* Unsafe/crc.scm 423 */
															long BgL_xz00_4967;

															BgL_xz00_4967 = (long) CINT(BgL_initz00_78);
															BgL_arg2460z00_1658 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4967));
														}
													else
														{	/* Unsafe/crc.scm 423 */
															if (ELONGP(BgL_initz00_78))
																{	/* Unsafe/crc.scm 423 */
																	long BgL_xz00_4969;

																	BgL_xz00_4969 =
																		BELONG_TO_LONG(BgL_initz00_78);
																	BgL_arg2460z00_1658 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4969));
																}
															else
																{	/* Unsafe/crc.scm 423 */
																	BgL_arg2460z00_1658 = BgL_initz00_78;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_79))
														{	/* Unsafe/crc.scm 423 */
															long BgL_xz00_4974;

															BgL_xz00_4974 =
																(long) CINT(BgL_finalzd2xorzd2_79);
															BgL_arg2461z00_1659 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_4974));
														}
													else
														{	/* Unsafe/crc.scm 423 */
															if (ELONGP(BgL_finalzd2xorzd2_79))
																{	/* Unsafe/crc.scm 423 */
																	long BgL_xz00_4976;

																	BgL_xz00_4976 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_79);
																	BgL_arg2461z00_1659 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_4976));
																}
															else
																{	/* Unsafe/crc.scm 423 */
																	BgL_arg2461z00_1659 = BgL_finalzd2xorzd2_79;
																}
														}
													{	/* Unsafe/crc.scm 423 */
														BGL_LONGLONG_T BgL_res3055z00_5187;

														{	/* Unsafe/crc.scm 423 */
															BGL_LONGLONG_T BgL_initz00_4978;

															BGL_LONGLONG_T BgL_finalzd2xorzd2_4979;

															BGL_LONGLONG_T BgL_polyz00_4980;

															long BgL_crczd2lenzd2_4981;

															BgL_initz00_4978 =
																BLLONG_TO_LLONG(BgL_arg2460z00_1658);
															BgL_finalzd2xorzd2_4979 =
																BLLONG_TO_LLONG(BgL_arg2461z00_1659);
															BgL_polyz00_4980 =
																BLLONG_TO_LLONG(BgL_polyz00_1649);
															BgL_crczd2lenzd2_4981 =
																(long) CINT(BgL_lenz00_1648);
															{	/* Unsafe/crc.scm 423 */
																BGL_LONGLONG_T BgL_mz00_4982;

																BgL_mz00_4982 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_4981 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_4981 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{	/* Unsafe/crc.scm 423 */
																	long BgL_lenz00_4991;

																	BgL_lenz00_4991 =
																		BGL_MMAP_LENGTH(BgL_mz00_77);
																	{
																		long BgL_iz00_4993;

																		BGL_LONGLONG_T BgL_crcz00_4994;

																		BgL_iz00_4993 = ((long) 0);
																		BgL_crcz00_4994 = BgL_initz00_4978;
																	BgL_loopz00_4992:
																		{	/* Unsafe/crc.scm 423 */
																			bool_t BgL_testz00_8427;

																			{	/* Unsafe/crc.scm 423 */
																				long BgL_n2z00_5014;

																				BgL_n2z00_5014 =
																					ELONG_TO_LONG(BgL_lenz00_4991);
																				BgL_testz00_8427 =
																					(BgL_iz00_4993 == BgL_n2z00_5014);
																			}
																			if (BgL_testz00_8427)
																				{	/* Unsafe/crc.scm 423 */
																					BgL_res3055z00_5187 =
																						(
																						(BgL_finalzd2xorzd2_4979 ^
																							BgL_crcz00_4994) & BgL_mz00_4982);
																				}
																			else
																				{	/* Unsafe/crc.scm 423 */
																					long BgL_arg2503z00_4997;

																					BGL_LONGLONG_T BgL_arg2504z00_4998;

																					BgL_arg2503z00_4997 =
																						(BgL_iz00_4993 + ((long) 1));
																					{	/* Unsafe/crc.scm 423 */
																						unsigned char BgL_arg2505z00_4999;

																						{	/* Unsafe/crc.scm 423 */
																							long BgL_auxz00_8433;

																							BgL_auxz00_8433 =
																								LONG_TO_ELONG(BgL_iz00_4993);
																							BgL_arg2505z00_4999 =
																								BGL_MMAP_REF(BgL_mz00_77,
																								BgL_auxz00_8433);
																						}
																						{	/* Unsafe/crc.scm 488 */
																							BGL_LONGLONG_T
																								BgL_res3054z00_5186;
																							{	/* Unsafe/crc.scm 488 */
																								unsigned char BgL_cz00_5021;

																								BgL_cz00_5021 =
																									(char) (BgL_arg2505z00_4999);
																								if (
																									(BgL_crczd2lenzd2_4981 >=
																										((long) 8)))
																									{	/* Unsafe/crc.scm 488 */
																										long BgL_octetz00_5026;

																										BgL_octetz00_5026 =
																											(
																											(unsigned
																												char) (BgL_cz00_5021));
																										{	/* Unsafe/crc.scm 488 */
																											BGL_LONGLONG_T
																												BgL_valuez00_5027;
																											BGL_LONGLONG_T
																												BgL_mz00_5028;
																											{	/* Unsafe/crc.scm 488 */
																												BGL_LONGLONG_T
																													BgL_arg2317z00_5029;
																												long
																													BgL_arg2318z00_5030;
																												BgL_arg2317z00_5029 =
																													LONG_TO_LLONG
																													(BgL_octetz00_5026);
																												BgL_arg2318z00_5030 =
																													(BgL_crczd2lenzd2_4981
																													- ((long) 8));
																												BgL_valuez00_5027 =
																													(BgL_arg2317z00_5029
																													<<
																													(int)
																													(BgL_arg2318z00_5030));
																											}
																											BgL_mz00_5028 =
																												(((BGL_LONGLONG_T) 1) <<
																												(int) (
																													(BgL_crczd2lenzd2_4981
																														- ((long) 1))));
																											{
																												long BgL_iz00_5035;

																												BGL_LONGLONG_T
																													BgL_crcz00_5036;
																												BgL_iz00_5035 =
																													((long) 0);
																												BgL_crcz00_5036 =
																													(BgL_crcz00_4994 ^
																													BgL_valuez00_5027);
																											BgL_loopz00_5034:
																												if (
																													(BgL_iz00_5035 ==
																														((long) 8)))
																													{	/* Unsafe/crc.scm 488 */
																														BgL_res3054z00_5186
																															= BgL_crcz00_5036;
																													}
																												else
																													{	/* Unsafe/crc.scm 488 */
																														BGL_LONGLONG_T
																															BgL_newzd2crczd2_5038;
																														BgL_newzd2crczd2_5038
																															=
																															(BgL_crcz00_5036
																															<< (int) (((long)
																																	1)));
																														if ((((BGL_LONGLONG_T) 0) == (BgL_mz00_5028 & BgL_crcz00_5036)))
																															{
																																BGL_LONGLONG_T
																																	BgL_crcz00_8457;
																																long
																																	BgL_iz00_8455;
																																BgL_iz00_8455 =
																																	(BgL_iz00_5035
																																	+ ((long) 1));
																																BgL_crcz00_8457
																																	=
																																	BgL_newzd2crczd2_5038;
																																BgL_crcz00_5036
																																	=
																																	BgL_crcz00_8457;
																																BgL_iz00_5035 =
																																	BgL_iz00_8455;
																																goto
																																	BgL_loopz00_5034;
																															}
																														else
																															{
																																BGL_LONGLONG_T
																																	BgL_crcz00_8460;
																																long
																																	BgL_iz00_8458;
																																BgL_iz00_8458 =
																																	(BgL_iz00_5035
																																	+ ((long) 1));
																																BgL_crcz00_8460
																																	=
																																	(BgL_newzd2crczd2_5038
																																	^
																																	BgL_polyz00_4980);
																																BgL_crcz00_5036
																																	=
																																	BgL_crcz00_8460;
																																BgL_iz00_5035 =
																																	BgL_iz00_8458;
																																goto
																																	BgL_loopz00_5034;
																															}
																													}
																											}
																										}
																									}
																								else
																									{	/* Unsafe/crc.scm 488 */
																										long BgL_arg2321z00_5045;

																										{	/* Unsafe/crc.scm 488 */
																											long BgL_arg2322z00_5046;

																											long BgL_arg2323z00_5047;

																											BgL_arg2322z00_5046 =
																												LLONG_TO_LONG
																												(BgL_crcz00_4994);
																											BgL_arg2323z00_5047 =
																												LLONG_TO_LONG
																												(BgL_polyz00_4980);
																											{

																												if (
																													(BgL_crczd2lenzd2_4981
																														>= ((long) 8)))
																													{	/* Unsafe/crc.scm 488 */
																														{	/* Unsafe/crc.scm 488 */
																															long
																																BgL_mz00_5087;
																															BgL_mz00_5087 =
																																(((long) 1) <<
																																(int) (
																																	(BgL_crczd2lenzd2_4981
																																		-
																																		((long)
																																			1))));
																															{	/* Unsafe/crc.scm 488 */

																																{
																																	long
																																		BgL_iz00_5092;
																																	long
																																		BgL_crcz00_5093;
																																	BgL_iz00_5092
																																		=
																																		((long) 0);
																																	BgL_crcz00_5093
																																		=
																																		(BgL_arg2322z00_5046
																																		^
																																		(((unsigned
																																					char)
																																				(BgL_cz00_5021))
																																			<<
																																			(int) (
																																				(BgL_crczd2lenzd2_4981
																																					-
																																					((long) 8)))));
																																BgL_loopz00_5091:
																																	if (
																																		(BgL_iz00_5092
																																			==
																																			((long)
																																				8)))
																																		{	/* Unsafe/crc.scm 488 */
																																			BgL_arg2321z00_5045
																																				=
																																				BgL_crcz00_5093;
																																		}
																																	else
																																		{
																																			long
																																				BgL_crcz00_8474;
																																			long
																																				BgL_iz00_8472;
																																			BgL_iz00_8472
																																				=
																																				(BgL_iz00_5092
																																				+
																																				((long)
																																					1));
																																			BgL_crcz00_8474
																																				=
																																				((((BgL_mz00_5087 & BgL_crcz00_5093) >> (int) ((BgL_crczd2lenzd2_4981 - ((long) 1)))) * BgL_arg2323z00_5047) ^ (BgL_crcz00_5093 << (int) (((long) 1))));
																																			BgL_crcz00_5093
																																				=
																																				BgL_crcz00_8474;
																																			BgL_iz00_5092
																																				=
																																				BgL_iz00_8472;
																																			goto
																																				BgL_loopz00_5091;
																																		}
																																}
																															}
																														}
																													}
																												else
																													{	/* Unsafe/crc.scm 488 */
																														{	/* Unsafe/crc.scm 488 */
																															long
																																BgL_mz00_5103;
																															BgL_mz00_5103 =
																																(((long) 1) <<
																																(int) (
																																	(BgL_crczd2lenzd2_4981
																																		-
																																		((long)
																																			1))));
																															{	/* Unsafe/crc.scm 488 */

																																{
																																	long
																																		BgL_iz00_5108;
																																	long
																																		BgL_crcz00_5109;
																																	long
																																		BgL_shiftedzd2valuezd2_5110;
																																	BgL_iz00_5108
																																		=
																																		((long) 0);
																																	BgL_crcz00_5109
																																		=
																																		BgL_arg2322z00_5046;
																																	BgL_shiftedzd2valuezd2_5110
																																		=
																																		(((unsigned
																																				char)
																																			(BgL_cz00_5021))
																																		<<
																																		(int)
																																		(BgL_crczd2lenzd2_4981));
																																BgL_loopz00_5107:
																																	if (
																																		(BgL_iz00_5108
																																			==
																																			((long)
																																				8)))
																																		{	/* Unsafe/crc.scm 488 */
																																			BgL_arg2321z00_5045
																																				=
																																				BgL_crcz00_5109;
																																		}
																																	else
																																		{	/* Unsafe/crc.scm 488 */
																																			long
																																				BgL_crc2z00_5112;
																																			BgL_crc2z00_5112
																																				=
																																				(BgL_crcz00_5109
																																				^
																																				(BgL_mz00_5103
																																					&
																																					(BgL_shiftedzd2valuezd2_5110
																																						>>
																																						(int)
																																						(((long) 8)))));
																																			{	/* Unsafe/crc.scm 488 */

																																				{
																																					long
																																						BgL_shiftedzd2valuezd2_8509;
																																					long
																																						BgL_crcz00_8500;
																																					long
																																						BgL_iz00_8498;
																																					BgL_iz00_8498
																																						=
																																						(BgL_iz00_5108
																																						+
																																						((long) 1));
																																					BgL_crcz00_8500
																																						=
																																						((((BgL_mz00_5103 & BgL_crc2z00_5112) >> (int) ((BgL_crczd2lenzd2_4981 - ((long) 1)))) * BgL_arg2323z00_5047) ^ (BgL_crc2z00_5112 << (int) (((long) 1))));
																																					BgL_shiftedzd2valuezd2_8509
																																						=
																																						(BgL_shiftedzd2valuezd2_5110
																																						<<
																																						(int)
																																						(((long) 1)));
																																					BgL_shiftedzd2valuezd2_5110
																																						=
																																						BgL_shiftedzd2valuezd2_8509;
																																					BgL_crcz00_5109
																																						=
																																						BgL_crcz00_8500;
																																					BgL_iz00_5108
																																						=
																																						BgL_iz00_8498;
																																					goto
																																						BgL_loopz00_5107;
																																				}
																																			}
																																		}
																																}
																															}
																														}
																													}
																											}
																										}
																										BgL_res3054z00_5186 =
																											LONG_TO_LLONG
																											(BgL_arg2321z00_5045);
																									}
																							}
																							BgL_arg2504z00_4998 =
																								BgL_res3054z00_5186;
																						}
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_8518;

																						long BgL_iz00_8517;

																						BgL_iz00_8517 = BgL_arg2503z00_4997;
																						BgL_crcz00_8518 =
																							BgL_arg2504z00_4998;
																						BgL_crcz00_4994 = BgL_crcz00_8518;
																						BgL_iz00_4993 = BgL_iz00_8517;
																						goto BgL_loopz00_4992;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res3055z00_5187);
													}
												}
											else
												{	/* Unsafe/crc.scm 425 */
													obj_t BgL_arg2462z00_1660;

													obj_t BgL_arg2465z00_1661;

													if (INTEGERP(BgL_initz00_78))
														{	/* Unsafe/crc.scm 425 */
															long BgL_xz00_5192;

															BgL_xz00_5192 = (long) CINT(BgL_initz00_78);
															BgL_arg2462z00_1660 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_5192));
														}
													else
														{	/* Unsafe/crc.scm 425 */
															if (ELONGP(BgL_initz00_78))
																{	/* Unsafe/crc.scm 425 */
																	long BgL_xz00_5194;

																	BgL_xz00_5194 =
																		BELONG_TO_LONG(BgL_initz00_78);
																	BgL_arg2462z00_1660 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5194));
																}
															else
																{	/* Unsafe/crc.scm 425 */
																	BgL_arg2462z00_1660 = BgL_initz00_78;
																}
														}
													if (INTEGERP(BgL_finalzd2xorzd2_79))
														{	/* Unsafe/crc.scm 425 */
															long BgL_xz00_5199;

															BgL_xz00_5199 =
																(long) CINT(BgL_finalzd2xorzd2_79);
															BgL_arg2465z00_1661 =
																make_bllong(LONG_TO_LLONG(BgL_xz00_5199));
														}
													else
														{	/* Unsafe/crc.scm 425 */
															if (ELONGP(BgL_finalzd2xorzd2_79))
																{	/* Unsafe/crc.scm 425 */
																	long BgL_xz00_5201;

																	BgL_xz00_5201 =
																		BELONG_TO_LONG(BgL_finalzd2xorzd2_79);
																	BgL_arg2465z00_1661 =
																		make_bllong(
																		(BGL_LONGLONG_T) (BgL_xz00_5201));
																}
															else
																{	/* Unsafe/crc.scm 425 */
																	BgL_arg2465z00_1661 = BgL_finalzd2xorzd2_79;
																}
														}
													{	/* Unsafe/crc.scm 425 */
														BGL_LONGLONG_T BgL_res3057z00_5279;

														{	/* Unsafe/crc.scm 425 */
															BGL_LONGLONG_T BgL_initz00_5203;

															BGL_LONGLONG_T BgL_finalzd2xorzd2_5204;

															BGL_LONGLONG_T BgL_polyz00_5205;

															long BgL_crczd2lenzd2_5206;

															BgL_initz00_5203 =
																BLLONG_TO_LLONG(BgL_arg2462z00_1660);
															BgL_finalzd2xorzd2_5204 =
																BLLONG_TO_LLONG(BgL_arg2465z00_1661);
															BgL_polyz00_5205 =
																BLLONG_TO_LLONG(BgL_lsbzd2polyzd2_1650);
															BgL_crczd2lenzd2_5206 =
																(long) CINT(BgL_lenz00_1648);
															{	/* Unsafe/crc.scm 425 */
																BGL_LONGLONG_T BgL_mz00_5207;

																BgL_mz00_5207 =
																	(
																	(((BGL_LONGLONG_T) 1) <<
																		(int) (
																			(BgL_crczd2lenzd2_5206 - ((long) 1)))) +
																	((((BGL_LONGLONG_T) 1) <<
																			(int) (
																				(BgL_crczd2lenzd2_5206 - ((long) 1)))) -
																		((BGL_LONGLONG_T) 1)));
																{	/* Unsafe/crc.scm 425 */
																	long BgL_lenz00_5216;

																	BgL_lenz00_5216 =
																		BGL_MMAP_LENGTH(BgL_mz00_77);
																	{
																		long BgL_iz00_5218;

																		BGL_LONGLONG_T BgL_crcz00_5219;

																		BgL_iz00_5218 = ((long) 0);
																		BgL_crcz00_5219 = BgL_initz00_5203;
																	BgL_loopz00_5217:
																		{	/* Unsafe/crc.scm 425 */
																			bool_t BgL_testz00_8553;

																			{	/* Unsafe/crc.scm 425 */
																				long BgL_n2z00_5239;

																				BgL_n2z00_5239 =
																					ELONG_TO_LONG(BgL_lenz00_5216);
																				BgL_testz00_8553 =
																					(BgL_iz00_5218 == BgL_n2z00_5239);
																			}
																			if (BgL_testz00_8553)
																				{	/* Unsafe/crc.scm 425 */
																					BgL_res3057z00_5279 =
																						(
																						(BgL_finalzd2xorzd2_5204 ^
																							BgL_crcz00_5219) & BgL_mz00_5207);
																				}
																			else
																				{	/* Unsafe/crc.scm 425 */
																					long BgL_arg2503z00_5222;

																					BGL_LONGLONG_T BgL_arg2504z00_5223;

																					BgL_arg2503z00_5222 =
																						(BgL_iz00_5218 + ((long) 1));
																					{	/* Unsafe/crc.scm 425 */
																						unsigned char BgL_arg2505z00_5224;

																						{	/* Unsafe/crc.scm 425 */
																							long BgL_auxz00_8559;

																							BgL_auxz00_8559 =
																								LONG_TO_ELONG(BgL_iz00_5218);
																							BgL_arg2505z00_5224 =
																								BGL_MMAP_REF(BgL_mz00_77,
																								BgL_auxz00_8559);
																						}
																						{	/* Unsafe/crc.scm 488 */
																							BGL_LONGLONG_T
																								BgL_res3056z00_5278;
																							{	/* Unsafe/crc.scm 488 */
																								unsigned char BgL_cz00_5246;

																								BgL_cz00_5246 =
																									(char) (BgL_arg2505z00_5224);
																								{	/* Unsafe/crc.scm 488 */
																									long BgL_octetz00_5250;

																									BgL_octetz00_5250 =
																										(
																										(unsigned
																											char) (BgL_cz00_5246));
																									{	/* Unsafe/crc.scm 488 */
																										BGL_LONGLONG_T
																											BgL_g1829z00_5251;
																										{	/* Unsafe/crc.scm 488 */
																											BGL_LONGLONG_T
																												BgL_arg2343z00_5252;
																											BgL_arg2343z00_5252 =
																												LONG_TO_LLONG
																												(BgL_octetz00_5250);
																											BgL_g1829z00_5251 =
																												(BgL_crcz00_5219 ^
																												BgL_arg2343z00_5252);
																										}
																										{
																											long BgL_iz00_5254;

																											BGL_LONGLONG_T
																												BgL_crcz00_5255;
																											BgL_iz00_5254 =
																												((long) 0);
																											BgL_crcz00_5255 =
																												BgL_g1829z00_5251;
																										BgL_loopz00_5253:
																											if (
																												(BgL_iz00_5254 ==
																													((long) 8)))
																												{	/* Unsafe/crc.scm 488 */
																													BgL_res3056z00_5278 =
																														BgL_crcz00_5255;
																												}
																											else
																												{	/* Unsafe/crc.scm 488 */
																													BGL_LONGLONG_T
																														BgL_newzd2crczd2_5257;
																													{	/* Unsafe/crc.scm 488 */
																														unsigned
																															BGL_LONGLONG_T
																															BgL_xz00_5268;
																														BgL_xz00_5268 =
																															(unsigned
																															BGL_LONGLONG_T)
																															(BgL_crcz00_5255);
																														{	/* Unsafe/crc.scm 488 */
																															unsigned
																																BGL_LONGLONG_T
																																BgL_auxz00_8570;
																															{	/* Unsafe/crc.scm 488 */
																																int
																																	BgL_auxz00_8571;
																																BgL_auxz00_8571
																																	=
																																	(int) (((long)
																																		1));
																																BgL_auxz00_8570
																																	=
																																	(BgL_xz00_5268
																																	>>
																																	BgL_auxz00_8571);
																															}
																															BgL_newzd2crczd2_5257
																																=
																																(BGL_LONGLONG_T)
																																(BgL_auxz00_8570);
																													}}
																													{
																														BGL_LONGLONG_T
																															BgL_crcz00_8577;
																														long BgL_iz00_8575;

																														BgL_iz00_8575 =
																															(BgL_iz00_5254 +
																															((long) 1));
																														BgL_crcz00_8577 =
																															(((((BGL_LONGLONG_T) 1) & BgL_crcz00_5255) * BgL_polyz00_5205) ^ BgL_newzd2crczd2_5257);
																														BgL_crcz00_5255 =
																															BgL_crcz00_8577;
																														BgL_iz00_5254 =
																															BgL_iz00_8575;
																														goto
																															BgL_loopz00_5253;
																													}
																												}
																										}
																									}
																								}
																							}
																							BgL_arg2504z00_5223 =
																								BgL_res3056z00_5278;
																						}
																					}
																					{
																						BGL_LONGLONG_T BgL_crcz00_8582;

																						long BgL_iz00_8581;

																						BgL_iz00_8581 = BgL_arg2503z00_5222;
																						BgL_crcz00_8582 =
																							BgL_arg2504z00_5223;
																						BgL_crcz00_5219 = BgL_crcz00_8582;
																						BgL_iz00_5218 = BgL_iz00_8581;
																						goto BgL_loopz00_5217;
																					}
																				}
																		}
																	}
																}
															}
														}
														return make_bllong(BgL_res3057z00_5279);
													}
												}
										}
									else
										{	/* Unsafe/crc.scm 421 */
											return
												BGl_errorz00zz__errorz00(BGl_symbol3219z00zz__crcz00,
												BGl_string3232z00zz__crcz00, BgL_polyz00_1649);
										}
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__crcz00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__crcz00()
	{
		AN_OBJECT;
		{	/* Unsafe/crc.scm 15 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
