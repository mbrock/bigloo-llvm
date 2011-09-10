/*===========================================================================*/
/*   (Llib/pregexp.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/pregexp.scm -indent -o objs/obj_u/Llib/pregexp.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_fkz00zz__pregexpz00(obj_t);
	static obj_t BGl_symbol3072z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(obj_t,
		obj_t, long);
	static obj_t BGl_symbol3081z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_pregexpzd2readzd2branchz00zz__pregexpz00(obj_t, obj_t, long);
	static obj_t BGl_subz72z72zz__pregexpz00(obj_t);
	static obj_t BGl_symbol3102z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3104z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3106z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3108z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3098z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3111z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3113z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3116z00zz__pregexpz00 = BUNSPEC;
	static long BGl_za2pregexpzd2versionza2zd2zz__pregexpz00;
	static obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00(obj_t,
		obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2patternz00zz__pregexpz00(obj_t, obj_t,
		long);
	static obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3144z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3148z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3150z00zz__pregexpz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3158z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3164z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3166z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl__pregexpzd2replacezd2zz__pregexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32528ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3039z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3041z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3043z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3045z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3047z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3049z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3051z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3053z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3059z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3061z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3063z00zz__pregexpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_keyword3066z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3069z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32534ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_keyword3075z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3077z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3079z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3084z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__pregexpz00();
	static obj_t BGl_keyword3087z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3100z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3090z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3093z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3096z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static unsigned char BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00;
	static obj_t BGl_keyword3118z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3120z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl__pregexpzd2splitzd2zz__pregexpz00(obj_t, obj_t, obj_t);
	static obj_t BGl_keyword3122z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3124z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32538ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_keyword3126z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3128z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3130z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3132z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3134z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3136z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3138z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3140z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_keyword3142z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_subz00zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__pregexpzd2quotezd2zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl__pregexpz00zz__pregexpz00(obj_t, obj_t);
	static obj_t
		BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(unsigned
		char, obj_t);
	static obj_t BGl_loupzd2orzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32551ze3z83zz__pregexpz00(obj_t);
	extern obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__pregexpz00();
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2splitzd2zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(obj_t, obj_t,
		long);
	static obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(obj_t,
		obj_t, long);
	static obj_t BGl_importedzd2moduleszd2initz00zz__pregexpz00();
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replaceza2z70zz__pregexpz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2quotezd2zz__pregexpz00(obj_t);
	static obj_t BGl_zc3anonymousza32564ze3z83zz__pregexpz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32569ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(obj_t, obj_t,
		long);
	extern obj_t bstring_to_keyword(obj_t);
	static unsigned char BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00;
	static obj_t BGl_zc3anonymousza32576ze3z83zz__pregexpz00(obj_t, obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32577ze3z83zz__pregexpz00(obj_t);
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_pregexpzd2readzd2piecez00zz__pregexpz00(obj_t, obj_t, long);
	static obj_t BGl_toplevelzd2initzd2zz__pregexpz00();
	static obj_t BGl_zc3anonymousza32582ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(obj_t,
		obj_t, long);
	extern bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2errorzd2zz__pregexpz00(obj_t, obj_t);
	extern bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_list3065z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3068z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3071z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3074z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32590ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2listzd2refz00zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_list3083z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3086z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3089z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3092z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3095z00zz__pregexpz00 = BUNSPEC;
	static bool_t BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00;
	static obj_t BGl__pregexpzd2matchzd2zz__pregexpz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32595ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_list3154z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_list3173z00zz__pregexpz00 = BUNSPEC;
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static long BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00;
	static obj_t BGl_identityz00zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_loupzd2pzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_loupzd2qzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_loupzd2seqzd2zz__pregexpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__pregexpz00(long, obj_t, obj_t, obj_t, obj_t,
		obj_t, long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2matchzd2zz__pregexpz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pregexpz00zz__pregexpz00(obj_t);
	static obj_t BGl_g1888z00zz__pregexpz00(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl__pregexpzd2replaceza2z70zz__pregexpz00(obj_t, obj_t, obj_t,
		obj_t);
	static unsigned char BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00;
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32488ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_pregexpzd2reversez12zc0zz__pregexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2numsz00zz__pregexpz00(obj_t, obj_t, long);
	static obj_t
		BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(obj_t, obj_t,
		long);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32503ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(obj_t, obj_t, long,
		obj_t);
	static obj_t BGl_zc3anonymousza32495ze3z83zz__pregexpz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32496ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00(obj_t,
		obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_pregexpzd2replacezd2zz__pregexpz00(obj_t, obj_t,
		obj_t);
	extern obj_t string_to_keyword(char *);
	static obj_t BGl_zc3anonymousza32511ze3z83zz__pregexpz00(obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza32513ze3z83zz__pregexpz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__pregexpz00();
	static obj_t BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3055z00zz__pregexpz00 = BUNSPEC;
	static obj_t BGl_symbol3057z00zz__pregexpz00 = BUNSPEC;
	static obj_t *__cnst;


	extern obj_t BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2envzd2zz__pregexpz00,
		BgL_bgl__pregexpza700za7za7__p3176za7, BGl__pregexpz00zz__pregexpz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replacezd2envz00zz__pregexpz00,
		BgL_bgl__pregexpza7d2repla3177za7, BGl__pregexpzd2replacezd2zz__pregexpz00,
		0L, BUNSPEC, 3);
	extern obj_t BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00;
	extern obj_t BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pregexpzd2matchzd2positionszd2envzd2zz__pregexpz00,
		BgL_bgl__pregexpza7d2match3178za7, va_generic_entry,
		BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00, BUNSPEC, -3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3146z00zz__pregexpz00,
		BgL_bgl_identityza700za7za7__p3179za7, BGl_identityz00zz__pregexpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3147z00zz__pregexpz00,
		BgL_bgl_g1888za700za7za7__preg3180za7, BGl_g1888z00zz__pregexpz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3152z00zz__pregexpz00,
		BgL_bgl_za7c3anonymousza7a323181z00,
		BGl_zc3anonymousza32534ze3z83zz__pregexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3153z00zz__pregexpz00,
		BgL_bgl_za7c3anonymousza7a323182z00,
		BGl_zc3anonymousza32538ze3z83zz__pregexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3155z00zz__pregexpz00,
		BgL_bgl_za7c3anonymousza7a323183z00,
		BGl_zc3anonymousza32551ze3z83zz__pregexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3156z00zz__pregexpz00,
		BgL_bgl_za7c3anonymousza7a323184z00,
		BGl_zc3anonymousza32564ze3z83zz__pregexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3157z00zz__pregexpz00,
		BgL_bgl_za7c3anonymousza7a323185z00,
		BGl_zc3anonymousza32569ze3z83zz__pregexpz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3038z00zz__pregexpz00,
		BgL_bgl_string3038za700za7za7_3186za7, "pregexp", 7);
	      DEFINE_STRING(BGl_string3040z00zz__pregexpz00,
		BgL_bgl_string3040za700za7za7_3187za7, "or", 2);
	      DEFINE_STRING(BGl_string3042z00zz__pregexpz00,
		BgL_bgl_string3042za700za7za7_3188za7, "seq", 3);
	      DEFINE_STRING(BGl_string3044z00zz__pregexpz00,
		BgL_bgl_string3044za700za7za7_3189za7, "empty", 5);
	      DEFINE_STRING(BGl_string3046z00zz__pregexpz00,
		BgL_bgl_string3046za700za7za7_3190za7, "bos", 3);
	      DEFINE_STRING(BGl_string3048z00zz__pregexpz00,
		BgL_bgl_string3048za700za7za7_3191za7, "eos", 3);
	      DEFINE_STRING(BGl_string3050z00zz__pregexpz00,
		BgL_bgl_string3050za700za7za7_3192za7, "any", 3);
	      DEFINE_STRING(BGl_string3052z00zz__pregexpz00,
		BgL_bgl_string3052za700za7za7_3193za7, "neg-char", 8);
	      DEFINE_STRING(BGl_string3054z00zz__pregexpz00,
		BgL_bgl_string3054za700za7za7_3194za7, "backref", 7);
	      DEFINE_STRING(BGl_string3056z00zz__pregexpz00,
		BgL_bgl_string3056za700za7za7_3195za7, "backslash", 9);
	      DEFINE_STRING(BGl_string3058z00zz__pregexpz00,
		BgL_bgl_string3058za700za7za7_3196za7, "pregexp-read-piece", 18);
	      DEFINE_STRING(BGl_string3060z00zz__pregexpz00,
		BgL_bgl_string3060za700za7za7_3197za7, "wbdry", 5);
	      DEFINE_STRING(BGl_string3062z00zz__pregexpz00,
		BgL_bgl_string3062za700za7za7_3198za7, "not-wbdry", 9);
	      DEFINE_STRING(BGl_string3064z00zz__pregexpz00,
		BgL_bgl_string3064za700za7za7_3199za7, "digit", 5);
	      DEFINE_STRING(BGl_string3067z00zz__pregexpz00,
		BgL_bgl_string3067za700za7za7_3200za7, "space", 5);
	      DEFINE_STRING(BGl_string3070z00zz__pregexpz00,
		BgL_bgl_string3070za700za7za7_3201za7, "word", 4);
	      DEFINE_STRING(BGl_string3073z00zz__pregexpz00,
		BgL_bgl_string3073za700za7za7_3202za7, "pregexp-read-posix-char-class", 29);
	      DEFINE_STRING(BGl_string3076z00zz__pregexpz00,
		BgL_bgl_string3076za700za7za7_3203za7, "sub", 3);
	      DEFINE_STRING(BGl_string3078z00zz__pregexpz00,
		BgL_bgl_string3078za700za7za7_3204za7, "case-sensitive", 14);
	      DEFINE_STRING(BGl_string3080z00zz__pregexpz00,
		BgL_bgl_string3080za700za7za7_3205za7, "case-insensitive", 16);
	      DEFINE_STRING(BGl_string3082z00zz__pregexpz00,
		BgL_bgl_string3082za700za7za7_3206za7, "pregexp-read-cluster-type", 25);
	      DEFINE_STRING(BGl_string3085z00zz__pregexpz00,
		BgL_bgl_string3085za700za7za7_3207za7, "lookahead", 9);
	      DEFINE_STRING(BGl_string3088z00zz__pregexpz00,
		BgL_bgl_string3088za700za7za7_3208za7, "neg-lookahead", 13);
	      DEFINE_STRING(BGl_string3101z00zz__pregexpz00,
		BgL_bgl_string3101za700za7za7_3209za7, "between", 7);
	      DEFINE_STRING(BGl_string3091z00zz__pregexpz00,
		BgL_bgl_string3091za700za7za7_3210za7, "no-backtrack", 12);
	      DEFINE_STRING(BGl_string3103z00zz__pregexpz00,
		BgL_bgl_string3103za700za7za7_3211za7, "minimal?", 8);
	      DEFINE_STRING(BGl_string3094z00zz__pregexpz00,
		BgL_bgl_string3094za700za7za7_3212za7, "lookbehind", 10);
	      DEFINE_STRING(BGl_string3105z00zz__pregexpz00,
		BgL_bgl_string3105za700za7za7_3213za7, "at-least", 8);
	      DEFINE_STRING(BGl_string3107z00zz__pregexpz00,
		BgL_bgl_string3107za700za7za7_3214za7, "at-most", 7);
	      DEFINE_STRING(BGl_string3097z00zz__pregexpz00,
		BgL_bgl_string3097za700za7za7_3215za7, "neg-lookbehind", 14);
	      DEFINE_STRING(BGl_string3110z00zz__pregexpz00,
		BgL_bgl_string3110za700za7za7_3216za7,
		"left bracket must be followed by number", 39);
	      DEFINE_STRING(BGl_string3109z00zz__pregexpz00,
		BgL_bgl_string3109za700za7za7_3217za7, "next-i", 6);
	      DEFINE_STRING(BGl_string3099z00zz__pregexpz00,
		BgL_bgl_string3099za700za7za7_3218za7, "pregexp-read-subpattern", 23);
	      DEFINE_STRING(BGl_string3112z00zz__pregexpz00,
		BgL_bgl_string3112za700za7za7_3219za7, "pregexp-wrap-quantifier-if-any",
		30);
	      DEFINE_STRING(BGl_string3114z00zz__pregexpz00,
		BgL_bgl_string3114za700za7za7_3220za7, "pregexp-read-nums", 17);
	      DEFINE_STRING(BGl_string3115z00zz__pregexpz00,
		BgL_bgl_string3115za700za7za7_3221za7, "character class ended too soon",
		30);
	      DEFINE_STRING(BGl_string3117z00zz__pregexpz00,
		BgL_bgl_string3117za700za7za7_3222za7, "pregexp-read-char-list", 22);
	      DEFINE_STRING(BGl_string3119z00zz__pregexpz00,
		BgL_bgl_string3119za700za7za7_3223za7, "one-of-chars", 12);
	      DEFINE_STRING(BGl_string3121z00zz__pregexpz00,
		BgL_bgl_string3121za700za7za7_3224za7, "char-range", 10);
	      DEFINE_STRING(BGl_string3123z00zz__pregexpz00,
		BgL_bgl_string3123za700za7za7_3225za7, "alnum", 5);
	      DEFINE_STRING(BGl_string3125z00zz__pregexpz00,
		BgL_bgl_string3125za700za7za7_3226za7, "alpha", 5);
	      DEFINE_STRING(BGl_string3127z00zz__pregexpz00,
		BgL_bgl_string3127za700za7za7_3227za7, "ascii", 5);
	      DEFINE_STRING(BGl_string3129z00zz__pregexpz00,
		BgL_bgl_string3129za700za7za7_3228za7, "blank", 5);
	      DEFINE_STRING(BGl_string3131z00zz__pregexpz00,
		BgL_bgl_string3131za700za7za7_3229za7, "cntrl", 5);
	      DEFINE_STRING(BGl_string3133z00zz__pregexpz00,
		BgL_bgl_string3133za700za7za7_3230za7, "graph", 5);
	      DEFINE_STRING(BGl_string3135z00zz__pregexpz00,
		BgL_bgl_string3135za700za7za7_3231za7, "lower", 5);
	      DEFINE_STRING(BGl_string3137z00zz__pregexpz00,
		BgL_bgl_string3137za700za7za7_3232za7, "print", 5);
	      DEFINE_STRING(BGl_string3139z00zz__pregexpz00,
		BgL_bgl_string3139za700za7za7_3233za7, "punct", 5);
	      DEFINE_STRING(BGl_string3141z00zz__pregexpz00,
		BgL_bgl_string3141za700za7za7_3234za7, "upper", 5);
	      DEFINE_STRING(BGl_string3143z00zz__pregexpz00,
		BgL_bgl_string3143za700za7za7_3235za7, "xdigit", 6);
	      DEFINE_STRING(BGl_string3145z00zz__pregexpz00,
		BgL_bgl_string3145za700za7za7_3236za7, "pregexp-check-if-in-char-class?",
		31);
	      DEFINE_STRING(BGl_string3149z00zz__pregexpz00,
		BgL_bgl_string3149za700za7za7_3237za7, "pregexp-match-positions-aux", 27);
	      DEFINE_STRING(BGl_string3151z00zz__pregexpz00,
		BgL_bgl_string3151za700za7za7_3238za7, "non-existent-backref", 20);
	      DEFINE_STRING(BGl_string3160z00zz__pregexpz00,
		BgL_bgl_string3160za700za7za7_3239za7, "", 0);
	      DEFINE_STRING(BGl_string3159z00zz__pregexpz00,
		BgL_bgl_string3159za700za7za7_3240za7,
		"greedy-quantifier-operand-could-be-empty", 40);
	      DEFINE_STRING(BGl_string3161z00zz__pregexpz00,
		BgL_bgl_string3161za700za7za7_3241za7,
		"/tmp/bigloo/runtime/Llib/pregexp.scm", 36);
	      DEFINE_STRING(BGl_string3162z00zz__pregexpz00,
		BgL_bgl_string3162za700za7za7_3242za7, "_pregexp", 8);
	      DEFINE_STRING(BGl_string3163z00zz__pregexpz00,
		BgL_bgl_string3163za700za7za7_3243za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3165z00zz__pregexpz00,
		BgL_bgl_string3165za700za7za7_3244za7,
		"pattern-must-be-compiled-or-string-regexp", 41);
	      DEFINE_STRING(BGl_string3167z00zz__pregexpz00,
		BgL_bgl_string3167za700za7za7_3245za7, "pregexp-match-positions", 23);
	      DEFINE_STRING(BGl_string3168z00zz__pregexpz00,
		BgL_bgl_string3168za700za7za7_3246za7, "_pregexp-match-positions", 24);
	      DEFINE_STRING(BGl_string3170z00zz__pregexpz00,
		BgL_bgl_string3170za700za7za7_3247za7, "_pregexp-split", 14);
	      DEFINE_STRING(BGl_string3169z00zz__pregexpz00,
		BgL_bgl_string3169za700za7za7_3248za7, "_pregexp-match", 14);
	      DEFINE_STRING(BGl_string3171z00zz__pregexpz00,
		BgL_bgl_string3171za700za7za7_3249za7, "_pregexp-replace", 16);
	      DEFINE_STRING(BGl_string3172z00zz__pregexpz00,
		BgL_bgl_string3172za700za7za7_3250za7, "_pregexp-replace*", 17);
	      DEFINE_STRING(BGl_string3174z00zz__pregexpz00,
		BgL_bgl_string3174za700za7za7_3251za7, "_pregexp-quote", 14);
	      DEFINE_STRING(BGl_string3175z00zz__pregexpz00,
		BgL_bgl_string3175za700za7za7_3252za7, "__pregexp", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2quotezd2envz00zz__pregexpz00,
		BgL_bgl__pregexpza7d2quote3253za7, BGl__pregexpzd2quotezd2zz__pregexpz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2replaceza2zd2envza2zz__pregexpz00,
		BgL_bgl__pregexpza7d2repla3254za7,
		BGl__pregexpzd2replaceza2z70zz__pregexpz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2splitzd2envz00zz__pregexpz00,
		BgL_bgl__pregexpza7d2split3255za7, BGl__pregexpzd2splitzd2zz__pregexpz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pregexpzd2matchzd2envz00zz__pregexpz00,
		BgL_bgl__pregexpza7d2match3256za7, va_generic_entry,
		BGl__pregexpzd2matchzd2zz__pregexpz00, BUNSPEC, -3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__pregexpz00(long
		BgL_checksumz00_3903, char *BgL_fromz00_3904)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__pregexpz00))
				{
					BGl_requirezd2initializa7ationz75zz__pregexpz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__pregexpz00();
					BGl_importedzd2moduleszd2initz00zz__pregexpz00();
					BGl_toplevelzd2initzd2zz__pregexpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__pregexpz00()
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 17 */
			BGl_keyword3039z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3040z00zz__pregexpz00);
			BGl_keyword3041z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3042z00zz__pregexpz00);
			BGl_keyword3043z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3044z00zz__pregexpz00);
			BGl_keyword3045z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3046z00zz__pregexpz00);
			BGl_keyword3047z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3048z00zz__pregexpz00);
			BGl_keyword3049z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3050z00zz__pregexpz00);
			BGl_keyword3051z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3052z00zz__pregexpz00);
			BGl_keyword3053z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3054z00zz__pregexpz00);
			BGl_symbol3055z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3056z00zz__pregexpz00);
			BGl_symbol3057z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3058z00zz__pregexpz00);
			BGl_keyword3059z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3060z00zz__pregexpz00);
			BGl_keyword3061z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3062z00zz__pregexpz00);
			BGl_keyword3063z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3064z00zz__pregexpz00);
			BGl_list3065z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3051z00zz__pregexpz00,
				MAKE_PAIR(BGl_keyword3063z00zz__pregexpz00, BNIL));
			BGl_keyword3066z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3067z00zz__pregexpz00);
			BGl_list3068z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3051z00zz__pregexpz00,
				MAKE_PAIR(BGl_keyword3066z00zz__pregexpz00, BNIL));
			BGl_keyword3069z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3070z00zz__pregexpz00);
			BGl_list3071z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3051z00zz__pregexpz00,
				MAKE_PAIR(BGl_keyword3069z00zz__pregexpz00, BNIL));
			BGl_symbol3072z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3073z00zz__pregexpz00);
			BGl_keyword3075z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3076z00zz__pregexpz00);
			BGl_list3074z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3075z00zz__pregexpz00, BNIL);
			BGl_keyword3077z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3078z00zz__pregexpz00);
			BGl_keyword3079z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3080z00zz__pregexpz00);
			BGl_symbol3081z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3082z00zz__pregexpz00);
			BGl_keyword3084z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3085z00zz__pregexpz00);
			BGl_list3083z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3084z00zz__pregexpz00, BNIL);
			BGl_keyword3087z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3088z00zz__pregexpz00);
			BGl_list3086z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3087z00zz__pregexpz00, BNIL);
			BGl_keyword3090z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3091z00zz__pregexpz00);
			BGl_list3089z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3090z00zz__pregexpz00, BNIL);
			BGl_keyword3093z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3094z00zz__pregexpz00);
			BGl_list3092z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3093z00zz__pregexpz00, BNIL);
			BGl_keyword3096z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3097z00zz__pregexpz00);
			BGl_list3095z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3096z00zz__pregexpz00, BNIL);
			BGl_symbol3098z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3099z00zz__pregexpz00);
			BGl_keyword3100z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3101z00zz__pregexpz00);
			BGl_symbol3102z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3103z00zz__pregexpz00);
			BGl_symbol3104z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3105z00zz__pregexpz00);
			BGl_symbol3106z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3107z00zz__pregexpz00);
			BGl_symbol3108z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3109z00zz__pregexpz00);
			BGl_symbol3111z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3112z00zz__pregexpz00);
			BGl_symbol3113z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3114z00zz__pregexpz00);
			BGl_symbol3116z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3117z00zz__pregexpz00);
			BGl_keyword3118z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3119z00zz__pregexpz00);
			BGl_keyword3120z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3121z00zz__pregexpz00);
			BGl_keyword3122z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3123z00zz__pregexpz00);
			BGl_keyword3124z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3125z00zz__pregexpz00);
			BGl_keyword3126z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3127z00zz__pregexpz00);
			BGl_keyword3128z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3129z00zz__pregexpz00);
			BGl_keyword3130z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3131z00zz__pregexpz00);
			BGl_keyword3132z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3133z00zz__pregexpz00);
			BGl_keyword3134z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3135z00zz__pregexpz00);
			BGl_keyword3136z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3137z00zz__pregexpz00);
			BGl_keyword3138z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3139z00zz__pregexpz00);
			BGl_keyword3140z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3141z00zz__pregexpz00);
			BGl_keyword3142z00zz__pregexpz00 =
				bstring_to_keyword(BGl_string3143z00zz__pregexpz00);
			BGl_symbol3144z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3145z00zz__pregexpz00);
			BGl_symbol3148z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3149z00zz__pregexpz00);
			BGl_symbol3150z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3151z00zz__pregexpz00);
			BGl_list3154z00zz__pregexpz00 =
				MAKE_PAIR(BGl_keyword3100z00zz__pregexpz00,
				MAKE_PAIR(BBOOL(((bool_t) 0)),
					MAKE_PAIR(BINT(((long) 0)),
						MAKE_PAIR(BBOOL(((bool_t) 0)),
							MAKE_PAIR(BGl_keyword3049z00zz__pregexpz00, BNIL)))));
			BGl_symbol3158z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3159z00zz__pregexpz00);
			BGl_symbol3164z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3165z00zz__pregexpz00);
			BGl_symbol3166z00zz__pregexpz00 =
				bstring_to_symbol(BGl_string3167z00zz__pregexpz00);
			return (BGl_list3173z00zz__pregexpz00 =
				MAKE_PAIR(BCHAR(((unsigned char) '\\')),
					MAKE_PAIR(BCHAR(((unsigned char) '.')),
						MAKE_PAIR(BCHAR(((unsigned char) '?')),
							MAKE_PAIR(BCHAR(((unsigned char) '*')),
								MAKE_PAIR(BCHAR(((unsigned char) '+')),
									MAKE_PAIR(BCHAR(((unsigned char) '|')),
										MAKE_PAIR(BCHAR(((unsigned char) '^')),
											MAKE_PAIR(BCHAR(((unsigned char) '$')),
												MAKE_PAIR(BCHAR(((unsigned char) '[')),
													MAKE_PAIR(BCHAR(((unsigned char) ']')),
														MAKE_PAIR(BCHAR(((unsigned char) '{')),
															MAKE_PAIR(BCHAR(((unsigned char) '}')),
																MAKE_PAIR(BCHAR(((unsigned char) '(')),
																	MAKE_PAIR(BCHAR(((unsigned char) ')')),
																		BNIL)))))))))))))), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__pregexpz00()
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 17 */
			BGl_za2pregexpzd2versionza2zd2zz__pregexpz00 = ((long) 20050502);
			BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00 =
				((unsigned char) ';');
			BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00 = ((long) 0);
			BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00 =
				(
				(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 13)),
						BINT(BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00))));
			BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00 =
				(
				(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 9)),
						BINT(BGl_za2pregexpzd2nulzd2charzd2intza2zd2zz__pregexpz00))));
			return (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 =
				((bool_t) 1), BUNSPEC);
		}
	}



/* pregexp-error */
	obj_t BGl_pregexpzd2errorzd2zz__pregexpz00(obj_t BgL_msgz00_1,
		obj_t BgL_optz00_2)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 56 */
			{	/* Llib/pregexp.scm 57 */
				obj_t BgL_arg1981z00_2313;

				if (PAIRP(BgL_optz00_2))
					{	/* Llib/pregexp.scm 57 */
						BgL_arg1981z00_2313 = CAR(BgL_optz00_2);
					}
				else
					{	/* Llib/pregexp.scm 57 */
						BgL_arg1981z00_2313 = BUNSPEC;
					}
				return
					BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
					BgL_msgz00_1, BgL_arg1981z00_2313);
			}
		}
	}



/* pregexp-reverse! */
	obj_t BGl_pregexpzd2reversez12zc0zz__pregexpz00(obj_t BgL_sz00_3)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 86 */
			{
				obj_t BgL_sz00_2318;

				obj_t BgL_rz00_2319;

				BgL_sz00_2318 = BgL_sz00_3;
				BgL_rz00_2319 = BNIL;
			BgL_loopz00_2317:
				if (NULLP(BgL_sz00_2318))
					{	/* Llib/pregexp.scm 89 */
						return BgL_rz00_2319;
					}
				else
					{	/* Llib/pregexp.scm 89 */
						obj_t BgL_dz00_2323;

						BgL_dz00_2323 = CDR(BgL_sz00_2318);
						SET_CDR(BgL_sz00_2318, BgL_rz00_2319);
						{
							obj_t BgL_rz00_4031;

							obj_t BgL_sz00_4030;

							BgL_sz00_4030 = BgL_dz00_2323;
							BgL_rz00_4031 = BgL_sz00_2318;
							BgL_rz00_2319 = BgL_rz00_4031;
							BgL_sz00_2318 = BgL_sz00_4030;
							goto BgL_loopz00_2317;
						}
					}
			}
		}
	}



/* pregexp-read-pattern */
	obj_t BGl_pregexpzd2readzd2patternz00zz__pregexpz00(obj_t BgL_sz00_4,
		obj_t BgL_iz00_5, long BgL_nz00_6)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 99 */
			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_5, BINT(BgL_nz00_6)))
				{	/* Llib/pregexp.scm 103 */
					obj_t BgL_arg1986z00_853;

					{	/* Llib/pregexp.scm 103 */
						obj_t BgL_arg1989z00_856;

						obj_t BgL_arg1990z00_857;

						BgL_arg1989z00_856 = BGl_keyword3039z00zz__pregexpz00;
						{	/* Llib/pregexp.scm 103 */
							obj_t BgL_list1993z00_860;

							BgL_list1993z00_860 =
								MAKE_PAIR(BGl_keyword3041z00zz__pregexpz00, BNIL);
							BgL_arg1990z00_857 = BgL_list1993z00_860;
						}
						{	/* Llib/pregexp.scm 103 */
							obj_t BgL_list1991z00_858;

							{	/* Llib/pregexp.scm 103 */
								obj_t BgL_arg1992z00_859;

								BgL_arg1992z00_859 = MAKE_PAIR(BgL_arg1990z00_857, BNIL);
								BgL_list1991z00_858 =
									MAKE_PAIR(BgL_arg1989z00_856, BgL_arg1992z00_859);
							}
							BgL_arg1986z00_853 = BgL_list1991z00_858;
						}
					}
					{	/* Llib/pregexp.scm 102 */
						obj_t BgL_list1987z00_854;

						{	/* Llib/pregexp.scm 102 */
							obj_t BgL_arg1988z00_855;

							BgL_arg1988z00_855 = MAKE_PAIR(BgL_iz00_5, BNIL);
							BgL_list1987z00_854 =
								MAKE_PAIR(BgL_arg1986z00_853, BgL_arg1988z00_855);
						}
						return BgL_list1987z00_854;
					}
				}
			else
				{
					obj_t BgL_branchesz00_863;

					obj_t BgL_iz00_864;

					BgL_branchesz00_863 = BNIL;
					BgL_iz00_864 = BgL_iz00_5;
				BgL_zc3anonymousza31994ze3z83_865:
					{	/* Llib/pregexp.scm 105 */
						bool_t BgL_testz00_4040;

						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_864,
								BINT(BgL_nz00_6)))
							{	/* Llib/pregexp.scm 105 */
								BgL_testz00_4040 = ((bool_t) 1);
							}
						else
							{	/* Llib/pregexp.scm 105 */
								BgL_testz00_4040 =
									(STRING_REF(BgL_sz00_4,
										(long) CINT(BgL_iz00_864)) == ((unsigned char) ')'));
							}
						if (BgL_testz00_4040)
							{	/* Llib/pregexp.scm 107 */
								obj_t BgL_arg1996z00_867;

								BgL_arg1996z00_867 =
									MAKE_PAIR(BGl_keyword3039z00zz__pregexpz00,
									BGl_pregexpzd2reversez12zc0zz__pregexpz00
									(BgL_branchesz00_863));
								{	/* Llib/pregexp.scm 107 */
									obj_t BgL_list1997z00_868;

									{	/* Llib/pregexp.scm 107 */
										obj_t BgL_arg1998z00_869;

										BgL_arg1998z00_869 = MAKE_PAIR(BgL_iz00_864, BNIL);
										BgL_list1997z00_868 =
											MAKE_PAIR(BgL_arg1996z00_867, BgL_arg1998z00_869);
									}
									return BgL_list1997z00_868;
								}
							}
						else
							{	/* Llib/pregexp.scm 108 */
								obj_t BgL_vvz00_872;

								{	/* Llib/pregexp.scm 110 */
									obj_t BgL_arg2004z00_876;

									if (
										(STRING_REF(BgL_sz00_4,
												(long) CINT(BgL_iz00_864)) == ((unsigned char) '|')))
										{	/* Llib/pregexp.scm 110 */
											BgL_arg2004z00_876 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_864,
												BINT(((long) 1)));
										}
									else
										{	/* Llib/pregexp.scm 110 */
											BgL_arg2004z00_876 = BgL_iz00_864;
										}
									BgL_vvz00_872 =
										BGl_pregexpzd2readzd2branchz00zz__pregexpz00(BgL_sz00_4,
										BgL_arg2004z00_876, BgL_nz00_6);
								}
								{	/* Llib/pregexp.scm 111 */
									obj_t BgL_arg2001z00_873;

									obj_t BgL_arg2002z00_874;

									BgL_arg2001z00_873 =
										MAKE_PAIR(CAR(BgL_vvz00_872), BgL_branchesz00_863);
									{	/* Llib/pregexp.scm 111 */
										obj_t BgL_pairz00_2359;

										BgL_pairz00_2359 = BgL_vvz00_872;
										BgL_arg2002z00_874 = CAR(CDR(BgL_pairz00_2359));
									}
									{
										obj_t BgL_iz00_4063;

										obj_t BgL_branchesz00_4062;

										BgL_branchesz00_4062 = BgL_arg2001z00_873;
										BgL_iz00_4063 = BgL_arg2002z00_874;
										BgL_iz00_864 = BgL_iz00_4063;
										BgL_branchesz00_863 = BgL_branchesz00_4062;
										goto BgL_zc3anonymousza31994ze3z83_865;
									}
								}
							}
					}
				}
		}
	}



/* pregexp-read-branch */
	obj_t BGl_pregexpzd2readzd2branchz00zz__pregexpz00(obj_t BgL_sz00_7,
		obj_t BgL_iz00_8, long BgL_nz00_9)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 113 */
			{
				obj_t BgL_piecesz00_884;

				obj_t BgL_iz00_885;

				BgL_piecesz00_884 = BNIL;
				BgL_iz00_885 = BgL_iz00_8;
			BgL_zc3anonymousza32009ze3z83_886:
				if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_885, BINT(BgL_nz00_9)))
					{	/* Llib/pregexp.scm 117 */
						obj_t BgL_arg2011z00_888;

						BgL_arg2011z00_888 =
							MAKE_PAIR(BGl_keyword3041z00zz__pregexpz00,
							BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_piecesz00_884));
						{	/* Llib/pregexp.scm 117 */
							obj_t BgL_list2012z00_889;

							{	/* Llib/pregexp.scm 117 */
								obj_t BgL_arg2013z00_890;

								BgL_arg2013z00_890 = MAKE_PAIR(BgL_iz00_885, BNIL);
								BgL_list2012z00_889 =
									MAKE_PAIR(BgL_arg2011z00_888, BgL_arg2013z00_890);
							}
							return BgL_list2012z00_889;
						}
					}
				else
					{	/* Llib/pregexp.scm 118 */
						bool_t BgL_testz00_4071;

						{	/* Llib/pregexp.scm 118 */
							unsigned char BgL_cz00_903;

							BgL_cz00_903 = STRING_REF(BgL_sz00_7, (long) CINT(BgL_iz00_885));
							{	/* Llib/pregexp.scm 119 */
								bool_t BgL__ortest_1827z00_904;

								BgL__ortest_1827z00_904 =
									(BgL_cz00_903 == ((unsigned char) '|'));
								if (BgL__ortest_1827z00_904)
									{	/* Llib/pregexp.scm 119 */
										BgL_testz00_4071 = BgL__ortest_1827z00_904;
									}
								else
									{	/* Llib/pregexp.scm 119 */
										BgL_testz00_4071 = (BgL_cz00_903 == ((unsigned char) ')'));
						}}}
						if (BgL_testz00_4071)
							{	/* Llib/pregexp.scm 121 */
								obj_t BgL_arg2018z00_894;

								BgL_arg2018z00_894 =
									MAKE_PAIR(BGl_keyword3041z00zz__pregexpz00,
									BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_piecesz00_884));
								{	/* Llib/pregexp.scm 121 */
									obj_t BgL_list2019z00_895;

									{	/* Llib/pregexp.scm 121 */
										obj_t BgL_arg2021z00_896;

										BgL_arg2021z00_896 = MAKE_PAIR(BgL_iz00_885, BNIL);
										BgL_list2019z00_895 =
											MAKE_PAIR(BgL_arg2018z00_894, BgL_arg2021z00_896);
									}
									return BgL_list2019z00_895;
								}
							}
						else
							{	/* Llib/pregexp.scm 122 */
								obj_t BgL_vvz00_899;

								BgL_vvz00_899 =
									BGl_pregexpzd2readzd2piecez00zz__pregexpz00(BgL_sz00_7,
									BgL_iz00_885, BgL_nz00_9);
								{	/* Llib/pregexp.scm 123 */
									obj_t BgL_arg2024z00_900;

									obj_t BgL_arg2025z00_901;

									BgL_arg2024z00_900 =
										MAKE_PAIR(CAR(BgL_vvz00_899), BgL_piecesz00_884);
									{	/* Llib/pregexp.scm 123 */
										obj_t BgL_pairz00_2374;

										BgL_pairz00_2374 = BgL_vvz00_899;
										BgL_arg2025z00_901 = CAR(CDR(BgL_pairz00_2374));
									}
									{
										obj_t BgL_iz00_4087;

										obj_t BgL_piecesz00_4086;

										BgL_piecesz00_4086 = BgL_arg2024z00_900;
										BgL_iz00_4087 = BgL_arg2025z00_901;
										BgL_iz00_885 = BgL_iz00_4087;
										BgL_piecesz00_884 = BgL_piecesz00_4086;
										goto BgL_zc3anonymousza32009ze3z83_886;
									}
								}
							}
					}
			}
		}
	}



/* pregexp-read-piece */
	obj_t BGl_pregexpzd2readzd2piecez00zz__pregexpz00(obj_t BgL_sz00_10,
		obj_t BgL_iz00_11, long BgL_nz00_12)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 125 */
			{	/* Llib/pregexp.scm 127 */
				unsigned char BgL_cz00_906;

				BgL_cz00_906 = STRING_REF(BgL_sz00_10, (long) CINT(BgL_iz00_11));
				{

					switch (BgL_cz00_906)
						{
						case ((unsigned char) '^'):

							{	/* Llib/pregexp.scm 129 */
								obj_t BgL_arg2029z00_910;

								obj_t BgL_arg2030z00_911;

								BgL_arg2029z00_910 = BGl_keyword3045z00zz__pregexpz00;
								BgL_arg2030z00_911 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
									BINT(((long) 1)));
								{	/* Llib/pregexp.scm 129 */
									obj_t BgL_list2031z00_912;

									{	/* Llib/pregexp.scm 129 */
										obj_t BgL_arg2033z00_913;

										BgL_arg2033z00_913 = MAKE_PAIR(BgL_arg2030z00_911, BNIL);
										BgL_list2031z00_912 =
											MAKE_PAIR(BgL_arg2029z00_910, BgL_arg2033z00_913);
									}
									return BgL_list2031z00_912;
								}
							}
							break;
						case ((unsigned char) '$'):

							{	/* Llib/pregexp.scm 130 */
								obj_t BgL_arg2034z00_914;

								obj_t BgL_arg2036z00_915;

								BgL_arg2034z00_914 = BGl_keyword3047z00zz__pregexpz00;
								BgL_arg2036z00_915 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
									BINT(((long) 1)));
								{	/* Llib/pregexp.scm 130 */
									obj_t BgL_list2037z00_916;

									{	/* Llib/pregexp.scm 130 */
										obj_t BgL_arg2038z00_917;

										BgL_arg2038z00_917 = MAKE_PAIR(BgL_arg2036z00_915, BNIL);
										BgL_list2037z00_916 =
											MAKE_PAIR(BgL_arg2034z00_914, BgL_arg2038z00_917);
									}
									return BgL_list2037z00_916;
								}
							}
							break;
						case ((unsigned char) '.'):

							{	/* Llib/pregexp.scm 132 */
								obj_t BgL_arg2039z00_918;

								{	/* Llib/pregexp.scm 132 */
									obj_t BgL_arg2040z00_919;

									obj_t BgL_arg2041z00_920;

									BgL_arg2040z00_919 = BGl_keyword3049z00zz__pregexpz00;
									BgL_arg2041z00_920 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
										BINT(((long) 1)));
									{	/* Llib/pregexp.scm 132 */
										obj_t BgL_list2042z00_921;

										{	/* Llib/pregexp.scm 132 */
											obj_t BgL_arg2043z00_922;

											BgL_arg2043z00_922 = MAKE_PAIR(BgL_arg2041z00_920, BNIL);
											BgL_list2042z00_921 =
												MAKE_PAIR(BgL_arg2040z00_919, BgL_arg2043z00_922);
										}
										BgL_arg2039z00_918 = BgL_list2042z00_921;
								}}
								return
									BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00
									(BgL_arg2039z00_918, BgL_sz00_10, BgL_nz00_12);
							}
							break;
						case ((unsigned char) '['):

							{	/* Llib/pregexp.scm 133 */
								obj_t BgL_izb21zb2_923;

								BgL_izb21zb2_923 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
									BINT(((long) 1)));
								{	/* Llib/pregexp.scm 135 */
									obj_t BgL_arg2044z00_924;

									{	/* Llib/pregexp.scm 135 */
										obj_t BgL_aux1832z00_926;

										if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_izb21zb2_923,
												BINT(BgL_nz00_12)))
											{	/* Llib/pregexp.scm 135 */
												BgL_aux1832z00_926 =
													BCHAR(STRING_REF(BgL_sz00_10,
														(long) CINT(BgL_izb21zb2_923)));
											}
										else
											{	/* Llib/pregexp.scm 135 */
												BgL_aux1832z00_926 = BFALSE;
											}
										if (CHARP(BgL_aux1832z00_926))
											{	/* Llib/pregexp.scm 135 */
												switch (CCHAR(BgL_aux1832z00_926))
													{
													case ((unsigned char) '^'):

														{	/* Llib/pregexp.scm 137 */
															obj_t BgL_vvz00_928;

															BgL_vvz00_928 =
																BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00
																(BgL_sz00_10,
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
																	BINT(((long) 2))), BgL_nz00_12);
															{	/* Llib/pregexp.scm 138 */
																obj_t BgL_arg2046z00_929;

																obj_t BgL_arg2047z00_930;

																{	/* Llib/pregexp.scm 138 */
																	obj_t BgL_arg2052z00_933;

																	obj_t BgL_arg2053z00_934;

																	BgL_arg2052z00_933 =
																		BGl_keyword3051z00zz__pregexpz00;
																	BgL_arg2053z00_934 = CAR(BgL_vvz00_928);
																	{	/* Llib/pregexp.scm 138 */
																		obj_t BgL_list2054z00_935;

																		{	/* Llib/pregexp.scm 138 */
																			obj_t BgL_arg2055z00_936;

																			BgL_arg2055z00_936 =
																				MAKE_PAIR(BgL_arg2053z00_934, BNIL);
																			BgL_list2054z00_935 =
																				MAKE_PAIR(BgL_arg2052z00_933,
																				BgL_arg2055z00_936);
																		}
																		BgL_arg2046z00_929 = BgL_list2054z00_935;
																}}
																{	/* Llib/pregexp.scm 138 */
																	obj_t BgL_pairz00_2391;

																	BgL_pairz00_2391 = BgL_vvz00_928;
																	BgL_arg2047z00_930 =
																		CAR(CDR(BgL_pairz00_2391));
																}
																{	/* Llib/pregexp.scm 138 */
																	obj_t BgL_list2048z00_931;

																	{	/* Llib/pregexp.scm 138 */
																		obj_t BgL_arg2051z00_932;

																		BgL_arg2051z00_932 =
																			MAKE_PAIR(BgL_arg2047z00_930, BNIL);
																		BgL_list2048z00_931 =
																			MAKE_PAIR(BgL_arg2046z00_929,
																			BgL_arg2051z00_932);
																	}
																	BgL_arg2044z00_924 = BgL_list2048z00_931;
														}}} break;
													default:
														BgL_arg2044z00_924 =
															BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00
															(BgL_sz00_10, BgL_izb21zb2_923, BgL_nz00_12);
													}
											}
										else
											{	/* Llib/pregexp.scm 135 */
												BgL_arg2044z00_924 =
													BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00
													(BgL_sz00_10, BgL_izb21zb2_923, BgL_nz00_12);
											}
									}
									return
										BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00
										(BgL_arg2044z00_924, BgL_sz00_10, BgL_nz00_12);
								}
							}
							break;
						case ((unsigned char) '('):

							return
								BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00
								(BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(BgL_sz00_10,
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
										BINT(((long) 1))), BgL_nz00_12), BgL_sz00_10, BgL_nz00_12);
							break;
						case ((unsigned char) '\\'):

							{	/* Llib/pregexp.scm 146 */
								obj_t BgL_arg2059z00_941;

								{	/* Llib/pregexp.scm 146 */
									obj_t BgL_g1834z00_942;

									BgL_g1834z00_942 =
										BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00
										(BgL_sz00_10, BgL_iz00_11, BgL_nz00_12);
									if (CBOOL(BgL_g1834z00_942))
										{	/* Llib/pregexp.scm 148 */
											obj_t BgL_arg2060z00_945;

											obj_t BgL_arg2061z00_946;

											{	/* Llib/pregexp.scm 148 */
												obj_t BgL_arg2064z00_949;

												obj_t BgL_arg2065z00_950;

												BgL_arg2064z00_949 = BGl_keyword3053z00zz__pregexpz00;
												BgL_arg2065z00_950 = CAR(BgL_g1834z00_942);
												{	/* Llib/pregexp.scm 148 */
													obj_t BgL_list2066z00_951;

													{	/* Llib/pregexp.scm 148 */
														obj_t BgL_arg2067z00_952;

														BgL_arg2067z00_952 =
															MAKE_PAIR(BgL_arg2065z00_950, BNIL);
														BgL_list2066z00_951 =
															MAKE_PAIR(BgL_arg2064z00_949, BgL_arg2067z00_952);
													}
													BgL_arg2060z00_945 = BgL_list2066z00_951;
												}
											}
											{	/* Llib/pregexp.scm 148 */
												obj_t BgL_pairz00_2400;

												BgL_pairz00_2400 = BgL_g1834z00_942;
												BgL_arg2061z00_946 = CAR(CDR(BgL_pairz00_2400));
											}
											{	/* Llib/pregexp.scm 148 */
												obj_t BgL_list2062z00_947;

												{	/* Llib/pregexp.scm 148 */
													obj_t BgL_arg2063z00_948;

													BgL_arg2063z00_948 =
														MAKE_PAIR(BgL_arg2061z00_946, BNIL);
													BgL_list2062z00_947 =
														MAKE_PAIR(BgL_arg2060z00_945, BgL_arg2063z00_948);
												}
												BgL_arg2059z00_941 = BgL_list2062z00_947;
											}
										}
									else
										{	/* Llib/pregexp.scm 149 */
											obj_t BgL_g1836z00_953;

											BgL_g1836z00_953 =
												BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00
												(BgL_sz00_10, BgL_iz00_11, BgL_nz00_12);
											if (CBOOL(BgL_g1836z00_953))
												{	/* Llib/pregexp.scm 151 */
													obj_t BgL_arg2068z00_956;

													obj_t BgL_arg2069z00_957;

													BgL_arg2068z00_956 = CAR(BgL_g1836z00_953);
													{	/* Llib/pregexp.scm 151 */
														obj_t BgL_pairz00_2407;

														BgL_pairz00_2407 = BgL_g1836z00_953;
														BgL_arg2069z00_957 = CAR(CDR(BgL_pairz00_2407));
													}
													{	/* Llib/pregexp.scm 151 */
														obj_t BgL_list2070z00_958;

														{	/* Llib/pregexp.scm 151 */
															obj_t BgL_arg2072z00_959;

															BgL_arg2072z00_959 =
																MAKE_PAIR(BgL_arg2069z00_957, BNIL);
															BgL_list2070z00_958 =
																MAKE_PAIR(BgL_arg2068z00_956,
																BgL_arg2072z00_959);
														}
														BgL_arg2059z00_941 = BgL_list2070z00_958;
													}
												}
											else
												{	/* Llib/pregexp.scm 152 */
													obj_t BgL_list2073z00_960;

													BgL_list2073z00_960 =
														MAKE_PAIR(BGl_symbol3055z00zz__pregexpz00, BNIL);
													BgL_arg2059z00_941 =
														BGl_errorz00zz__errorz00
														(BGl_string3038z00zz__pregexpz00,
														BGl_symbol3057z00zz__pregexpz00,
														CAR(BgL_list2073z00_960));
												}
										}
								}
								return
									BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00
									(BgL_arg2059z00_941, BgL_sz00_10, BgL_nz00_12);
							}
							break;
						default:
							{	/* Llib/pregexp.scm 155 */
								bool_t BgL_testz00_4154;

								if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00)
									{	/* Llib/pregexp.scm 155 */
										BgL_testz00_4154 = ((bool_t) 1);
									}
								else
									{	/* Llib/pregexp.scm 156 */
										bool_t BgL_testz00_4156;

										if (isspace(BgL_cz00_906))
											{	/* Llib/pregexp.scm 156 */
												BgL_testz00_4156 = ((bool_t) 0);
											}
										else
											{	/* Llib/pregexp.scm 156 */
												BgL_testz00_4156 = ((bool_t) 1);
											}
										if (BgL_testz00_4156)
											{	/* Llib/pregexp.scm 156 */
												if (
													(BgL_cz00_906 ==
														BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00))
													{	/* Llib/pregexp.scm 157 */
														BgL_testz00_4154 = ((bool_t) 0);
													}
												else
													{	/* Llib/pregexp.scm 157 */
														BgL_testz00_4154 = ((bool_t) 1);
													}
											}
										else
											{	/* Llib/pregexp.scm 156 */
												BgL_testz00_4154 = ((bool_t) 0);
											}
									}
								if (BgL_testz00_4154)
									{	/* Llib/pregexp.scm 159 */
										obj_t BgL_arg2076z00_962;

										{	/* Llib/pregexp.scm 159 */
											obj_t BgL_arg2077z00_963;

											BgL_arg2077z00_963 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_11,
												BINT(((long) 1)));
											{	/* Llib/pregexp.scm 159 */
												obj_t BgL_list2078z00_964;

												{	/* Llib/pregexp.scm 159 */
													obj_t BgL_arg2079z00_965;

													BgL_arg2079z00_965 =
														MAKE_PAIR(BgL_arg2077z00_963, BNIL);
													BgL_list2078z00_964 =
														MAKE_PAIR(BCHAR(BgL_cz00_906), BgL_arg2079z00_965);
												}
												BgL_arg2076z00_962 = BgL_list2078z00_964;
										}}
										return
											BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00
											(BgL_arg2076z00_962, BgL_sz00_10, BgL_nz00_12);
									}
								else
									{
										obj_t BgL_iz00_967;

										bool_t BgL_inzd2commentzf3z21_968;

										BgL_iz00_967 = BgL_iz00_11;
										BgL_inzd2commentzf3z21_968 = ((bool_t) 0);
									BgL_zc3anonymousza32080ze3z83_969:
										if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_967,
												BINT(BgL_nz00_12)))
											{	/* Llib/pregexp.scm 161 */
												obj_t BgL_list2082z00_971;

												{	/* Llib/pregexp.scm 161 */
													obj_t BgL_arg2083z00_972;

													obj_t BgL_arg2084z00_973;

													BgL_arg2083z00_972 = BGl_keyword3043z00zz__pregexpz00;
													BgL_arg2084z00_973 = MAKE_PAIR(BgL_iz00_967, BNIL);
													BgL_list2082z00_971 =
														MAKE_PAIR(BgL_arg2083z00_972, BgL_arg2084z00_973);
												}
												return BgL_list2082z00_971;
											}
										else
											{	/* Llib/pregexp.scm 162 */
												unsigned char BgL_cz00_974;

												BgL_cz00_974 =
													STRING_REF(BgL_sz00_10, (long) CINT(BgL_iz00_967));
												if (BgL_inzd2commentzf3z21_968)
													{	/* Llib/pregexp.scm 164 */
														obj_t BgL_arg2085z00_975;

														bool_t BgL_arg2086z00_976;

														BgL_arg2085z00_975 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_967,
															BINT(((long) 1)));
														if ((BgL_cz00_974 == ((unsigned char) '\n')))
															{	/* Llib/pregexp.scm 165 */
																BgL_arg2086z00_976 = ((bool_t) 0);
															}
														else
															{	/* Llib/pregexp.scm 165 */
																BgL_arg2086z00_976 = ((bool_t) 1);
															}
														{
															bool_t BgL_inzd2commentzf3z21_4180;

															obj_t BgL_iz00_4179;

															BgL_iz00_4179 = BgL_arg2085z00_975;
															BgL_inzd2commentzf3z21_4180 = BgL_arg2086z00_976;
															BgL_inzd2commentzf3z21_968 =
																BgL_inzd2commentzf3z21_4180;
															BgL_iz00_967 = BgL_iz00_4179;
															goto BgL_zc3anonymousza32080ze3z83_969;
														}
													}
												else
													{	/* Llib/pregexp.scm 163 */
														if (isspace(BgL_cz00_974))
															{
																bool_t BgL_inzd2commentzf3z21_4186;

																obj_t BgL_iz00_4183;

																BgL_iz00_4183 =
																	BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_967,
																	BINT(((long) 1)));
																BgL_inzd2commentzf3z21_4186 = ((bool_t) 0);
																BgL_inzd2commentzf3z21_968 =
																	BgL_inzd2commentzf3z21_4186;
																BgL_iz00_967 = BgL_iz00_4183;
																goto BgL_zc3anonymousza32080ze3z83_969;
															}
														else
															{	/* Llib/pregexp.scm 166 */
																if (
																	(BgL_cz00_974 ==
																		BGl_za2pregexpzd2commentzd2charza2z00zz__pregexpz00))
																	{
																		bool_t BgL_inzd2commentzf3z21_4192;

																		obj_t BgL_iz00_4189;

																		BgL_iz00_4189 =
																			BGl_2zb2zb2zz__r4_numbers_6_5z00
																			(BgL_iz00_967, BINT(((long) 1)));
																		BgL_inzd2commentzf3z21_4192 = ((bool_t) 1);
																		BgL_inzd2commentzf3z21_968 =
																			BgL_inzd2commentzf3z21_4192;
																		BgL_iz00_967 = BgL_iz00_4189;
																		goto BgL_zc3anonymousza32080ze3z83_969;
																	}
																else
																	{	/* Llib/pregexp.scm 170 */
																		obj_t BgL_list2092z00_982;

																		{	/* Llib/pregexp.scm 170 */
																			obj_t BgL_arg2093z00_983;

																			obj_t BgL_arg2094z00_984;

																			BgL_arg2093z00_983 =
																				BGl_keyword3043z00zz__pregexpz00;
																			BgL_arg2094z00_984 =
																				MAKE_PAIR(BgL_iz00_967, BNIL);
																			BgL_list2092z00_982 =
																				MAKE_PAIR(BgL_arg2093z00_983,
																				BgL_arg2094z00_984);
																		}
																		return BgL_list2092z00_982;
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



/* pregexp-read-escaped-number */
	obj_t BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00(obj_t
		BgL_sz00_13, obj_t BgL_iz00_14, long BgL_nz00_15)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 172 */
			if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BGl_2zb2zb2zz__r4_numbers_6_5z00
					(BgL_iz00_14, BINT(((long) 1))), BINT(BgL_nz00_15)))
				{	/* Llib/pregexp.scm 176 */
					unsigned char BgL_cz00_990;

					BgL_cz00_990 =
						STRING_REF(BgL_sz00_13,
						(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_14,
								BINT(((long) 1)))));
					if (isdigit(BgL_cz00_990))
						{	/* Llib/pregexp.scm 178 */
							obj_t BgL_g1840z00_992;

							obj_t BgL_g1841z00_993;

							BgL_g1840z00_992 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_14, BINT(((long) 2)));
							{	/* Llib/pregexp.scm 178 */
								obj_t BgL_list2112z00_1018;

								BgL_list2112z00_1018 = MAKE_PAIR(BCHAR(BgL_cz00_990), BNIL);
								BgL_g1841z00_993 = BgL_list2112z00_1018;
							}
							{
								obj_t BgL_iz00_995;

								obj_t BgL_rz00_996;

								BgL_iz00_995 = BgL_g1840z00_992;
								BgL_rz00_996 = BgL_g1841z00_993;
							BgL_zc3anonymousza32097ze3z83_997:
								if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_995,
										BINT(BgL_nz00_15)))
									{	/* Llib/pregexp.scm 181 */
										obj_t BgL_arg2099z00_999;

										{	/* Llib/pregexp.scm 181 */
											obj_t BgL_arg2102z00_1002;

											BgL_arg2102z00_1002 =
												BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
												(BGl_pregexpzd2reversez12zc0zz__pregexpz00
												(BgL_rz00_996));
											{	/* Ieee/number.scm 134 */

												BgL_arg2099z00_999 =
													BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
													(BgL_arg2102z00_1002, BINT(((long) 10)));
										}}
										{	/* Llib/pregexp.scm 180 */
											obj_t BgL_list2100z00_1000;

											{	/* Llib/pregexp.scm 180 */
												obj_t BgL_arg2101z00_1001;

												BgL_arg2101z00_1001 = MAKE_PAIR(BgL_iz00_995, BNIL);
												BgL_list2100z00_1000 =
													MAKE_PAIR(BgL_arg2099z00_999, BgL_arg2101z00_1001);
											}
											return BgL_list2100z00_1000;
										}
									}
								else
									{	/* Llib/pregexp.scm 182 */
										unsigned char BgL_cz00_1006;

										BgL_cz00_1006 =
											STRING_REF(BgL_sz00_13, (long) CINT(BgL_iz00_995));
										if (isdigit(BgL_cz00_1006))
											{	/* Llib/pregexp.scm 184 */
												obj_t BgL_arg2105z00_1008;

												obj_t BgL_arg2106z00_1009;

												BgL_arg2105z00_1008 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_995,
													BINT(((long) 1)));
												BgL_arg2106z00_1009 =
													MAKE_PAIR(BCHAR(BgL_cz00_1006), BgL_rz00_996);
												{
													obj_t BgL_rz00_4229;

													obj_t BgL_iz00_4228;

													BgL_iz00_4228 = BgL_arg2105z00_1008;
													BgL_rz00_4229 = BgL_arg2106z00_1009;
													BgL_rz00_996 = BgL_rz00_4229;
													BgL_iz00_995 = BgL_iz00_4228;
													goto BgL_zc3anonymousza32097ze3z83_997;
												}
											}
										else
											{	/* Llib/pregexp.scm 186 */
												obj_t BgL_arg2107z00_1010;

												{	/* Llib/pregexp.scm 186 */
													obj_t BgL_arg2110z00_1013;

													BgL_arg2110z00_1013 =
														BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
														(BGl_pregexpzd2reversez12zc0zz__pregexpz00
														(BgL_rz00_996));
													{	/* Ieee/number.scm 134 */

														BgL_arg2107z00_1010 =
															BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
															(BgL_arg2110z00_1013, BINT(((long) 10)));
												}}
												{	/* Llib/pregexp.scm 185 */
													obj_t BgL_list2108z00_1011;

													{	/* Llib/pregexp.scm 185 */
														obj_t BgL_arg2109z00_1012;

														BgL_arg2109z00_1012 = MAKE_PAIR(BgL_iz00_995, BNIL);
														BgL_list2108z00_1011 =
															MAKE_PAIR(BgL_arg2107z00_1010,
															BgL_arg2109z00_1012);
													}
													return BgL_list2108z00_1011;
												}
											}
									}
							}
						}
					else
						{	/* Llib/pregexp.scm 177 */
							return BFALSE;
						}
				}
			else
				{	/* Llib/pregexp.scm 175 */
					return BFALSE;
				}
		}
	}



/* pregexp-read-escaped-char */
	obj_t BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00(obj_t BgL_sz00_16,
		obj_t BgL_iz00_17, long BgL_nz00_18)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 189 */
			if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BGl_2zb2zb2zz__r4_numbers_6_5z00
					(BgL_iz00_17, BINT(((long) 1))), BINT(BgL_nz00_18)))
				{	/* Llib/pregexp.scm 193 */
					unsigned char BgL_cz00_1022;

					BgL_cz00_1022 =
						STRING_REF(BgL_sz00_16,
						(long) CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
								BINT(((long) 1)))));
					{

						switch (BgL_cz00_1022)
							{
							case ((unsigned char) 'b'):

								{	/* Llib/pregexp.scm 195 */
									obj_t BgL_arg2116z00_1026;

									obj_t BgL_arg2118z00_1027;

									BgL_arg2116z00_1026 = BGl_keyword3059z00zz__pregexpz00;
									BgL_arg2118z00_1027 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 195 */
										obj_t BgL_list2119z00_1028;

										{	/* Llib/pregexp.scm 195 */
											obj_t BgL_arg2121z00_1029;

											BgL_arg2121z00_1029 =
												MAKE_PAIR(BgL_arg2118z00_1027, BNIL);
											BgL_list2119z00_1028 =
												MAKE_PAIR(BgL_arg2116z00_1026, BgL_arg2121z00_1029);
										}
										return BgL_list2119z00_1028;
									}
								}
								break;
							case ((unsigned char) 'B'):

								{	/* Llib/pregexp.scm 196 */
									obj_t BgL_arg2123z00_1030;

									obj_t BgL_arg2124z00_1031;

									BgL_arg2123z00_1030 = BGl_keyword3061z00zz__pregexpz00;
									BgL_arg2124z00_1031 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 196 */
										obj_t BgL_list2125z00_1032;

										{	/* Llib/pregexp.scm 196 */
											obj_t BgL_arg2126z00_1033;

											BgL_arg2126z00_1033 =
												MAKE_PAIR(BgL_arg2124z00_1031, BNIL);
											BgL_list2125z00_1032 =
												MAKE_PAIR(BgL_arg2123z00_1030, BgL_arg2126z00_1033);
										}
										return BgL_list2125z00_1032;
									}
								}
								break;
							case ((unsigned char) 'd'):

								{	/* Llib/pregexp.scm 197 */
									obj_t BgL_arg2127z00_1034;

									obj_t BgL_arg2130z00_1035;

									BgL_arg2127z00_1034 = BGl_keyword3063z00zz__pregexpz00;
									BgL_arg2130z00_1035 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 197 */
										obj_t BgL_list2131z00_1036;

										{	/* Llib/pregexp.scm 197 */
											obj_t BgL_arg2132z00_1037;

											BgL_arg2132z00_1037 =
												MAKE_PAIR(BgL_arg2130z00_1035, BNIL);
											BgL_list2131z00_1036 =
												MAKE_PAIR(BgL_arg2127z00_1034, BgL_arg2132z00_1037);
										}
										return BgL_list2131z00_1036;
									}
								}
								break;
							case ((unsigned char) 'D'):

								{	/* Llib/pregexp.scm 198 */
									obj_t BgL_arg2133z00_1038;

									obj_t BgL_arg2134z00_1039;

									BgL_arg2133z00_1038 = BGl_list3065z00zz__pregexpz00;
									BgL_arg2134z00_1039 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 198 */
										obj_t BgL_list2135z00_1040;

										{	/* Llib/pregexp.scm 198 */
											obj_t BgL_arg2136z00_1041;

											BgL_arg2136z00_1041 =
												MAKE_PAIR(BgL_arg2134z00_1039, BNIL);
											BgL_list2135z00_1040 =
												MAKE_PAIR(BgL_arg2133z00_1038, BgL_arg2136z00_1041);
										}
										return BgL_list2135z00_1040;
									}
								}
								break;
							case ((unsigned char) 'n'):

								{	/* Llib/pregexp.scm 199 */
									obj_t BgL_arg2137z00_1042;

									BgL_arg2137z00_1042 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 199 */
										obj_t BgL_list2138z00_1043;

										{	/* Llib/pregexp.scm 199 */
											obj_t BgL_arg2139z00_1044;

											BgL_arg2139z00_1044 =
												MAKE_PAIR(BgL_arg2137z00_1042, BNIL);
											BgL_list2138z00_1043 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')),
												BgL_arg2139z00_1044);
										}
										return BgL_list2138z00_1043;
									}
								}
								break;
							case ((unsigned char) 'r'):

								{	/* Llib/pregexp.scm 200 */
									obj_t BgL_arg2140z00_1045;

									BgL_arg2140z00_1045 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 200 */
										obj_t BgL_list2141z00_1046;

										{	/* Llib/pregexp.scm 200 */
											obj_t BgL_arg2144z00_1047;

											BgL_arg2144z00_1047 =
												MAKE_PAIR(BgL_arg2140z00_1045, BNIL);
											BgL_list2141z00_1046 =
												MAKE_PAIR(BCHAR
												(BGl_za2pregexpzd2returnzd2charza2z00zz__pregexpz00),
												BgL_arg2144z00_1047);
										}
										return BgL_list2141z00_1046;
									}
								}
								break;
							case ((unsigned char) 's'):

								{	/* Llib/pregexp.scm 201 */
									obj_t BgL_arg2145z00_1048;

									obj_t BgL_arg2146z00_1049;

									BgL_arg2145z00_1048 = BGl_keyword3066z00zz__pregexpz00;
									BgL_arg2146z00_1049 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 201 */
										obj_t BgL_list2147z00_1050;

										{	/* Llib/pregexp.scm 201 */
											obj_t BgL_arg2148z00_1051;

											BgL_arg2148z00_1051 =
												MAKE_PAIR(BgL_arg2146z00_1049, BNIL);
											BgL_list2147z00_1050 =
												MAKE_PAIR(BgL_arg2145z00_1048, BgL_arg2148z00_1051);
										}
										return BgL_list2147z00_1050;
									}
								}
								break;
							case ((unsigned char) 'S'):

								{	/* Llib/pregexp.scm 202 */
									obj_t BgL_arg2149z00_1052;

									obj_t BgL_arg2150z00_1053;

									BgL_arg2149z00_1052 = BGl_list3068z00zz__pregexpz00;
									BgL_arg2150z00_1053 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 202 */
										obj_t BgL_list2151z00_1054;

										{	/* Llib/pregexp.scm 202 */
											obj_t BgL_arg2152z00_1055;

											BgL_arg2152z00_1055 =
												MAKE_PAIR(BgL_arg2150z00_1053, BNIL);
											BgL_list2151z00_1054 =
												MAKE_PAIR(BgL_arg2149z00_1052, BgL_arg2152z00_1055);
										}
										return BgL_list2151z00_1054;
									}
								}
								break;
							case ((unsigned char) 't'):

								{	/* Llib/pregexp.scm 203 */
									obj_t BgL_arg2153z00_1056;

									BgL_arg2153z00_1056 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 203 */
										obj_t BgL_list2154z00_1057;

										{	/* Llib/pregexp.scm 203 */
											obj_t BgL_arg2155z00_1058;

											BgL_arg2155z00_1058 =
												MAKE_PAIR(BgL_arg2153z00_1056, BNIL);
											BgL_list2154z00_1057 =
												MAKE_PAIR(BCHAR
												(BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00),
												BgL_arg2155z00_1058);
										}
										return BgL_list2154z00_1057;
									}
								}
								break;
							case ((unsigned char) 'w'):

								{	/* Llib/pregexp.scm 204 */
									obj_t BgL_arg2156z00_1059;

									obj_t BgL_arg2157z00_1060;

									BgL_arg2156z00_1059 = BGl_keyword3069z00zz__pregexpz00;
									BgL_arg2157z00_1060 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 204 */
										obj_t BgL_list2158z00_1061;

										{	/* Llib/pregexp.scm 204 */
											obj_t BgL_arg2159z00_1062;

											BgL_arg2159z00_1062 =
												MAKE_PAIR(BgL_arg2157z00_1060, BNIL);
											BgL_list2158z00_1061 =
												MAKE_PAIR(BgL_arg2156z00_1059, BgL_arg2159z00_1062);
										}
										return BgL_list2158z00_1061;
									}
								}
								break;
							case ((unsigned char) 'W'):

								{	/* Llib/pregexp.scm 205 */
									obj_t BgL_arg2160z00_1063;

									obj_t BgL_arg2161z00_1064;

									BgL_arg2160z00_1063 = BGl_list3071z00zz__pregexpz00;
									BgL_arg2161z00_1064 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 205 */
										obj_t BgL_list2162z00_1065;

										{	/* Llib/pregexp.scm 205 */
											obj_t BgL_arg2163z00_1066;

											BgL_arg2163z00_1066 =
												MAKE_PAIR(BgL_arg2161z00_1064, BNIL);
											BgL_list2162z00_1065 =
												MAKE_PAIR(BgL_arg2160z00_1063, BgL_arg2163z00_1066);
										}
										return BgL_list2162z00_1065;
									}
								}
								break;
							default:
								{	/* Llib/pregexp.scm 206 */
									obj_t BgL_arg2164z00_1067;

									BgL_arg2164z00_1067 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_17,
										BINT(((long) 2)));
									{	/* Llib/pregexp.scm 206 */
										obj_t BgL_list2165z00_1068;

										{	/* Llib/pregexp.scm 206 */
											obj_t BgL_arg2166z00_1069;

											BgL_arg2166z00_1069 =
												MAKE_PAIR(BgL_arg2164z00_1067, BNIL);
											BgL_list2165z00_1068 =
												MAKE_PAIR(BCHAR(BgL_cz00_1022), BgL_arg2166z00_1069);
										}
										return BgL_list2165z00_1068;
									}
								}
							}
					}
				}
			else
				{	/* Llib/pregexp.scm 192 */
					return BFALSE;
				}
		}
	}



/* pregexp-read-posix-char-class */
	obj_t BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00(obj_t
		BgL_sz00_19, obj_t BgL_iz00_20, long BgL_nz00_21)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 208 */
			{	/* Llib/pregexp.scm 211 */
				bool_t BgL_negzf3zf3_1072;

				BgL_negzf3zf3_1072 = ((bool_t) 0);
				{
					obj_t BgL_iz00_1075;

					obj_t BgL_rz00_1076;

					BgL_iz00_1075 = BgL_iz00_20;
					BgL_rz00_1076 = BNIL;
				BgL_zc3anonymousza32169ze3z83_1077:
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1075,
							BINT(BgL_nz00_21)))
						{	/* Llib/pregexp.scm 216 */
							return
								BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
								BGl_symbol3072z00zz__pregexpz00, BUNSPEC);
						}
					else
						{	/* Llib/pregexp.scm 218 */
							unsigned char BgL_cz00_1080;

							BgL_cz00_1080 =
								STRING_REF(BgL_sz00_19, (long) CINT(BgL_iz00_1075));
							if ((BgL_cz00_1080 == ((unsigned char) '^')))
								{	/* Llib/pregexp.scm 219 */
									BgL_negzf3zf3_1072 = ((bool_t) 1);
									{
										obj_t BgL_iz00_4306;

										BgL_iz00_4306 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075,
											BINT(((long) 1)));
										BgL_iz00_1075 = BgL_iz00_4306;
										goto BgL_zc3anonymousza32169ze3z83_1077;
									}
								}
							else
								{	/* Llib/pregexp.scm 219 */
									if (isalpha(BgL_cz00_1080))
										{	/* Llib/pregexp.scm 223 */
											obj_t BgL_arg2175z00_1084;

											obj_t BgL_arg2176z00_1085;

											BgL_arg2175z00_1084 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075,
												BINT(((long) 1)));
											BgL_arg2176z00_1085 =
												MAKE_PAIR(BCHAR(BgL_cz00_1080), BgL_rz00_1076);
											{
												obj_t BgL_rz00_4316;

												obj_t BgL_iz00_4315;

												BgL_iz00_4315 = BgL_arg2175z00_1084;
												BgL_rz00_4316 = BgL_arg2176z00_1085;
												BgL_rz00_1076 = BgL_rz00_4316;
												BgL_iz00_1075 = BgL_iz00_4315;
												goto BgL_zc3anonymousza32169ze3z83_1077;
											}
										}
									else
										{	/* Llib/pregexp.scm 222 */
											if ((BgL_cz00_1080 == ((unsigned char) ':')))
												{	/* Llib/pregexp.scm 225 */
													bool_t BgL_testz00_4319;

													if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
														(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1075,
																BINT(((long) 1))), BINT(BgL_nz00_21)))
														{	/* Llib/pregexp.scm 225 */
															BgL_testz00_4319 = ((bool_t) 1);
														}
													else
														{	/* Llib/pregexp.scm 225 */
															if (
																(STRING_REF(BgL_sz00_19,
																		(long)
																		CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00
																			(BgL_iz00_1075,
																				BINT(((long) 1))))) ==
																	((unsigned char) ']')))
																{	/* Llib/pregexp.scm 226 */
																	BgL_testz00_4319 = ((bool_t) 0);
																}
															else
																{	/* Llib/pregexp.scm 226 */
																	BgL_testz00_4319 = ((bool_t) 1);
																}
														}
													if (BgL_testz00_4319)
														{	/* Llib/pregexp.scm 227 */
															obj_t BgL_list2179z00_1088;

															BgL_list2179z00_1088 =
																MAKE_PAIR(BCHAR(((unsigned char) ':')), BNIL);
															return
																BGl_errorz00zz__errorz00
																(BGl_string3038z00zz__pregexpz00,
																BGl_symbol3072z00zz__pregexpz00,
																CAR(BgL_list2179z00_1088));
														}
													else
														{	/* Llib/pregexp.scm 228 */
															obj_t BgL_posixzd2classzd2_1089;

															{	/* Llib/pregexp.scm 230 */
																obj_t BgL_arg2187z00_1097;

																BgL_arg2187z00_1097 =
																	BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																	(BGl_pregexpzd2reversez12zc0zz__pregexpz00
																	(BgL_rz00_1076));
																BgL_posixzd2classzd2_1089 =
																	string_to_keyword(BSTRING_TO_STRING
																	(BgL_arg2187z00_1097));
															}
															{	/* Llib/pregexp.scm 231 */
																obj_t BgL_arg2180z00_1090;

																obj_t BgL_arg2181z00_1091;

																if (BgL_negzf3zf3_1072)
																	{	/* Llib/pregexp.scm 231 */
																		obj_t BgL_list2184z00_1094;

																		{	/* Llib/pregexp.scm 231 */
																			obj_t BgL_arg2185z00_1095;

																			obj_t BgL_arg2186z00_1096;

																			BgL_arg2185z00_1095 =
																				BGl_keyword3051z00zz__pregexpz00;
																			BgL_arg2186z00_1096 =
																				MAKE_PAIR(BgL_posixzd2classzd2_1089,
																				BNIL);
																			BgL_list2184z00_1094 =
																				MAKE_PAIR(BgL_arg2185z00_1095,
																				BgL_arg2186z00_1096);
																		}
																		BgL_arg2180z00_1090 = BgL_list2184z00_1094;
																	}
																else
																	{	/* Llib/pregexp.scm 231 */
																		BgL_arg2180z00_1090 =
																			BgL_posixzd2classzd2_1089;
																	}
																BgL_arg2181z00_1091 =
																	BGl_2zb2zb2zz__r4_numbers_6_5z00
																	(BgL_iz00_1075, BINT(((long) 2)));
																{	/* Llib/pregexp.scm 231 */
																	obj_t BgL_list2182z00_1092;

																	{	/* Llib/pregexp.scm 231 */
																		obj_t BgL_arg2183z00_1093;

																		BgL_arg2183z00_1093 =
																			MAKE_PAIR(BgL_arg2181z00_1091, BNIL);
																		BgL_list2182z00_1092 =
																			MAKE_PAIR(BgL_arg2180z00_1090,
																			BgL_arg2183z00_1093);
																	}
																	return BgL_list2182z00_1092;
																}
															}
														}
												}
											else
												{	/* Llib/pregexp.scm 224 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string3038z00zz__pregexpz00,
														BGl_symbol3072z00zz__pregexpz00, BUNSPEC);
												}
										}
								}
						}
				}
			}
		}
	}



/* pregexp-read-cluster-type */
	obj_t BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(obj_t BgL_sz00_22,
		obj_t BgL_iz00_23, long BgL_nz00_24)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 237 */
			{	/* Llib/pregexp.scm 240 */
				unsigned char BgL_cz00_1106;

				BgL_cz00_1106 = STRING_REF(BgL_sz00_22, (long) CINT(BgL_iz00_23));
				{

					switch (BgL_cz00_1106)
						{
						case ((unsigned char) '?'):

							{	/* Llib/pregexp.scm 243 */
								obj_t BgL_iz00_1110;

								BgL_iz00_1110 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_23,
									BINT(((long) 1)));
								{

									{	/* Llib/pregexp.scm 244 */
										unsigned char BgL_aux1852z00_1112;

										BgL_aux1852z00_1112 =
											STRING_REF(BgL_sz00_22, (long) CINT(BgL_iz00_1110));
										switch (BgL_aux1852z00_1112)
											{
											case ((unsigned char) ':'):

												{	/* Llib/pregexp.scm 245 */
													obj_t BgL_arg2198z00_1115;

													BgL_arg2198z00_1115 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110,
														BINT(((long) 1)));
													{	/* Llib/pregexp.scm 245 */
														obj_t BgL_list2199z00_1116;

														{	/* Llib/pregexp.scm 245 */
															obj_t BgL_arg2200z00_1117;

															BgL_arg2200z00_1117 =
																MAKE_PAIR(BgL_arg2198z00_1115, BNIL);
															BgL_list2199z00_1116 =
																MAKE_PAIR(BNIL, BgL_arg2200z00_1117);
														}
														return BgL_list2199z00_1116;
													}
												}
												break;
											case ((unsigned char) '='):

												{	/* Llib/pregexp.scm 246 */
													obj_t BgL_arg2203z00_1118;

													obj_t BgL_arg2204z00_1119;

													BgL_arg2203z00_1118 = BGl_list3083z00zz__pregexpz00;
													BgL_arg2204z00_1119 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110,
														BINT(((long) 1)));
													{	/* Llib/pregexp.scm 246 */
														obj_t BgL_list2205z00_1120;

														{	/* Llib/pregexp.scm 246 */
															obj_t BgL_arg2206z00_1121;

															BgL_arg2206z00_1121 =
																MAKE_PAIR(BgL_arg2204z00_1119, BNIL);
															BgL_list2205z00_1120 =
																MAKE_PAIR(BgL_arg2203z00_1118,
																BgL_arg2206z00_1121);
														}
														return BgL_list2205z00_1120;
													}
												}
												break;
											case ((unsigned char) '!'):

												{	/* Llib/pregexp.scm 247 */
													obj_t BgL_arg2207z00_1122;

													obj_t BgL_arg2208z00_1123;

													BgL_arg2207z00_1122 = BGl_list3086z00zz__pregexpz00;
													BgL_arg2208z00_1123 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110,
														BINT(((long) 1)));
													{	/* Llib/pregexp.scm 247 */
														obj_t BgL_list2209z00_1124;

														{	/* Llib/pregexp.scm 247 */
															obj_t BgL_arg2210z00_1125;

															BgL_arg2210z00_1125 =
																MAKE_PAIR(BgL_arg2208z00_1123, BNIL);
															BgL_list2209z00_1124 =
																MAKE_PAIR(BgL_arg2207z00_1122,
																BgL_arg2210z00_1125);
														}
														return BgL_list2209z00_1124;
													}
												}
												break;
											case ((unsigned char) '>'):

												{	/* Llib/pregexp.scm 248 */
													obj_t BgL_arg2211z00_1126;

													obj_t BgL_arg2212z00_1127;

													BgL_arg2211z00_1126 = BGl_list3089z00zz__pregexpz00;
													BgL_arg2212z00_1127 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110,
														BINT(((long) 1)));
													{	/* Llib/pregexp.scm 248 */
														obj_t BgL_list2213z00_1128;

														{	/* Llib/pregexp.scm 248 */
															obj_t BgL_arg2214z00_1129;

															BgL_arg2214z00_1129 =
																MAKE_PAIR(BgL_arg2212z00_1127, BNIL);
															BgL_list2213z00_1128 =
																MAKE_PAIR(BgL_arg2211z00_1126,
																BgL_arg2214z00_1129);
														}
														return BgL_list2213z00_1128;
													}
												}
												break;
											case ((unsigned char) '<'):

												{	/* Llib/pregexp.scm 250 */
													obj_t BgL_arg2216z00_1130;

													obj_t BgL_arg2217z00_1131;

													{	/* Llib/pregexp.scm 250 */
														unsigned char BgL_aux1854z00_1135;

														BgL_aux1854z00_1135 =
															STRING_REF(BgL_sz00_22,
															(long)
															CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00
																(BgL_iz00_1110, BINT(((long) 1)))));
														switch (BgL_aux1854z00_1135)
															{
															case ((unsigned char) '='):

																BgL_arg2216z00_1130 =
																	BGl_list3092z00zz__pregexpz00;
																break;
															case ((unsigned char) '!'):

																BgL_arg2216z00_1130 =
																	BGl_list3095z00zz__pregexpz00;
																break;
															default:
																{	/* Llib/pregexp.scm 250 */
																	obj_t BgL_list2225z00_2525;

																	BgL_list2225z00_2525 =
																		MAKE_PAIR(BCHAR(((unsigned char) '<')),
																		BNIL);
																	BgL_arg2216z00_1130 =
																		BGl_pregexpzd2errorzd2zz__pregexpz00
																		(BGl_symbol3081z00zz__pregexpz00,
																		BgL_list2225z00_2525);
													}}}
													BgL_arg2217z00_1131 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1110,
														BINT(((long) 2)));
													{	/* Llib/pregexp.scm 250 */
														obj_t BgL_list2218z00_1132;

														{	/* Llib/pregexp.scm 250 */
															obj_t BgL_arg2222z00_1133;

															BgL_arg2222z00_1133 =
																MAKE_PAIR(BgL_arg2217z00_1131, BNIL);
															BgL_list2218z00_1132 =
																MAKE_PAIR(BgL_arg2216z00_1130,
																BgL_arg2222z00_1133);
														}
														return BgL_list2218z00_1132;
													}
												}
												break;
											default:
												{
													obj_t BgL_iz00_1141;

													obj_t BgL_rz00_1142;

													bool_t BgL_invzf3zf3_1143;

													BgL_iz00_1141 = BgL_iz00_1110;
													BgL_rz00_1142 = BNIL;
													BgL_invzf3zf3_1143 = ((bool_t) 0);
												BgL_zc3anonymousza32226ze3z83_1144:
													{	/* Llib/pregexp.scm 256 */
														unsigned char BgL_cz00_1145;

														BgL_cz00_1145 =
															STRING_REF(BgL_sz00_22,
															(long) CINT(BgL_iz00_1141));
														switch (BgL_cz00_1145)
															{
															case ((unsigned char) '-'):

																{
																	bool_t BgL_invzf3zf3_4386;

																	obj_t BgL_iz00_4383;

																	BgL_iz00_4383 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1141, BINT(((long) 1)));
																	BgL_invzf3zf3_4386 = ((bool_t) 1);
																	BgL_invzf3zf3_1143 = BgL_invzf3zf3_4386;
																	BgL_iz00_1141 = BgL_iz00_4383;
																	goto BgL_zc3anonymousza32226ze3z83_1144;
																}
																break;
															case ((unsigned char) 'i'):

																{	/* Llib/pregexp.scm 259 */
																	obj_t BgL_arg2234z00_1150;

																	obj_t BgL_arg2235z00_1151;

																	BgL_arg2234z00_1150 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1141, BINT(((long) 1)));
																	{	/* Llib/pregexp.scm 260 */
																		obj_t BgL_arg2236z00_1152;

																		if (BgL_invzf3zf3_1143)
																			{	/* Llib/pregexp.scm 260 */
																				BgL_arg2236z00_1152 =
																					BGl_keyword3077z00zz__pregexpz00;
																			}
																		else
																			{	/* Llib/pregexp.scm 260 */
																				BgL_arg2236z00_1152 =
																					BGl_keyword3079z00zz__pregexpz00;
																			}
																		BgL_arg2235z00_1151 =
																			MAKE_PAIR(BgL_arg2236z00_1152,
																			BgL_rz00_1142);
																	}
																	{
																		bool_t BgL_invzf3zf3_4393;

																		obj_t BgL_rz00_4392;

																		obj_t BgL_iz00_4391;

																		BgL_iz00_4391 = BgL_arg2234z00_1150;
																		BgL_rz00_4392 = BgL_arg2235z00_1151;
																		BgL_invzf3zf3_4393 = ((bool_t) 0);
																		BgL_invzf3zf3_1143 = BgL_invzf3zf3_4393;
																		BgL_rz00_1142 = BgL_rz00_4392;
																		BgL_iz00_1141 = BgL_iz00_4391;
																		goto BgL_zc3anonymousza32226ze3z83_1144;
																	}
																}
																break;
															case ((unsigned char) 'x'):

																BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = BgL_invzf3zf3_1143;
																{
																	bool_t BgL_invzf3zf3_4397;

																	obj_t BgL_iz00_4394;

																	BgL_iz00_4394 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1141, BINT(((long) 1)));
																	BgL_invzf3zf3_4397 = ((bool_t) 0);
																	BgL_invzf3zf3_1143 = BgL_invzf3zf3_4397;
																	BgL_iz00_1141 = BgL_iz00_4394;
																	goto BgL_zc3anonymousza32226ze3z83_1144;
																}
																break;
															case ((unsigned char) ':'):

																{	/* Llib/pregexp.scm 265 */
																	obj_t BgL_arg2238z00_1154;

																	BgL_arg2238z00_1154 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1141, BINT(((long) 1)));
																	{	/* Llib/pregexp.scm 265 */
																		obj_t BgL_list2239z00_1155;

																		{	/* Llib/pregexp.scm 265 */
																			obj_t BgL_arg2240z00_1156;

																			BgL_arg2240z00_1156 =
																				MAKE_PAIR(BgL_arg2238z00_1154, BNIL);
																			BgL_list2239z00_1155 =
																				MAKE_PAIR(BgL_rz00_1142,
																				BgL_arg2240z00_1156);
																		}
																		return BgL_list2239z00_1155;
																	}
																}
																break;
															default:
																{	/* Llib/pregexp.scm 257 */
																	obj_t BgL_list2241z00_2541;

																	BgL_list2241z00_2541 =
																		MAKE_PAIR(BCHAR(BgL_cz00_1145), BNIL);
																	return
																		BGl_pregexpzd2errorzd2zz__pregexpz00
																		(BGl_symbol3081z00zz__pregexpz00,
																		BgL_list2241z00_2541);
																}
															}
													}
												}
											}
									}
								}
							}
							break;
						default:
							{	/* Llib/pregexp.scm 267 */
								obj_t BgL_list2242z00_1159;

								{	/* Llib/pregexp.scm 267 */
									obj_t BgL_arg2243z00_1160;

									obj_t BgL_arg2244z00_1161;

									BgL_arg2243z00_1160 = BGl_list3074z00zz__pregexpz00;
									BgL_arg2244z00_1161 = MAKE_PAIR(BgL_iz00_23, BNIL);
									BgL_list2242z00_1159 =
										MAKE_PAIR(BgL_arg2243z00_1160, BgL_arg2244z00_1161);
								}
								return BgL_list2242z00_1159;
							}
						}
				}
			}
		}
	}



/* pregexp-read-subpattern */
	obj_t BGl_pregexpzd2readzd2subpatternz00zz__pregexpz00(obj_t BgL_sz00_25,
		obj_t BgL_iz00_26, long BgL_nz00_27)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 269 */
			{	/* Llib/pregexp.scm 271 */
				bool_t BgL_rememberzd2spacezd2sensitivezf3zf3_1162;

				BgL_rememberzd2spacezd2sensitivezf3zf3_1162 =
					BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00;
				{	/* Llib/pregexp.scm 271 */
					obj_t BgL_ctypzd2izd2_1163;

					BgL_ctypzd2izd2_1163 =
						BGl_pregexpzd2readzd2clusterzd2typezd2zz__pregexpz00(BgL_sz00_25,
						BgL_iz00_26, BgL_nz00_27);
					{	/* Llib/pregexp.scm 272 */
						obj_t BgL_ctypz00_1164;

						BgL_ctypz00_1164 = CAR(BgL_ctypzd2izd2_1163);
						{	/* Llib/pregexp.scm 273 */
							obj_t BgL_iz00_1165;

							{	/* Llib/pregexp.scm 274 */
								obj_t BgL_pairz00_2554;

								BgL_pairz00_2554 = BgL_ctypzd2izd2_1163;
								BgL_iz00_1165 = CAR(CDR(BgL_pairz00_2554));
							}
							{	/* Llib/pregexp.scm 274 */
								obj_t BgL_vvz00_1166;

								BgL_vvz00_1166 =
									BGl_pregexpzd2readzd2patternz00zz__pregexpz00(BgL_sz00_25,
									BgL_iz00_1165, BgL_nz00_27);
								{	/* Llib/pregexp.scm 275 */

									BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 =
										BgL_rememberzd2spacezd2sensitivezf3zf3_1162;
									{	/* Llib/pregexp.scm 277 */
										obj_t BgL_vvzd2rezd2_1167;

										obj_t BgL_vvzd2izd2_1168;

										BgL_vvzd2rezd2_1167 = CAR(BgL_vvz00_1166);
										{	/* Llib/pregexp.scm 278 */
											obj_t BgL_pairz00_2559;

											BgL_pairz00_2559 = BgL_vvz00_1166;
											BgL_vvzd2izd2_1168 = CAR(CDR(BgL_pairz00_2559));
										}
										{	/* Llib/pregexp.scm 279 */
											bool_t BgL_testz00_4418;

											if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_vvzd2izd2_1168,
													BINT(BgL_nz00_27)))
												{	/* Llib/pregexp.scm 279 */
													BgL_testz00_4418 =
														(STRING_REF(BgL_sz00_25,
															(long) CINT(BgL_vvzd2izd2_1168)) ==
														((unsigned char) ')'));
												}
											else
												{	/* Llib/pregexp.scm 279 */
													BgL_testz00_4418 = ((bool_t) 0);
												}
											if (BgL_testz00_4418)
												{	/* Llib/pregexp.scm 284 */
													obj_t BgL_arg2246z00_1170;

													obj_t BgL_arg2247z00_1171;

													{
														obj_t BgL_ctypz00_2568;

														obj_t BgL_rez00_2569;

														BgL_ctypz00_2568 = BgL_ctypz00_1164;
														BgL_rez00_2569 = BgL_vvzd2rezd2_1167;
													BgL_loopz00_2567:
														if (NULLP(BgL_ctypz00_2568))
															{	/* Llib/pregexp.scm 283 */
																BgL_arg2246z00_1170 = BgL_rez00_2569;
															}
														else
															{	/* Llib/pregexp.scm 283 */
																obj_t BgL_arg2252z00_2577;

																obj_t BgL_arg2253z00_2578;

																BgL_arg2252z00_2577 = CDR(BgL_ctypz00_2568);
																{	/* Llib/pregexp.scm 283 */
																	obj_t BgL_arg2255z00_2579;

																	BgL_arg2255z00_2579 = CAR(BgL_ctypz00_2568);
																	{	/* Llib/pregexp.scm 283 */
																		obj_t BgL_list2256z00_2580;

																		{	/* Llib/pregexp.scm 283 */
																			obj_t BgL_arg2257z00_2581;

																			BgL_arg2257z00_2581 =
																				MAKE_PAIR(BgL_rez00_2569, BNIL);
																			BgL_list2256z00_2580 =
																				MAKE_PAIR(BgL_arg2255z00_2579,
																				BgL_arg2257z00_2581);
																		}
																		BgL_arg2253z00_2578 = BgL_list2256z00_2580;
																	}
																}
																{
																	obj_t BgL_rez00_4432;

																	obj_t BgL_ctypz00_4431;

																	BgL_ctypz00_4431 = BgL_arg2252z00_2577;
																	BgL_rez00_4432 = BgL_arg2253z00_2578;
																	BgL_rez00_2569 = BgL_rez00_4432;
																	BgL_ctypz00_2568 = BgL_ctypz00_4431;
																	goto BgL_loopz00_2567;
																}
															}
													}
													BgL_arg2247z00_1171 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_vvzd2izd2_1168,
														BINT(((long) 1)));
													{	/* Llib/pregexp.scm 282 */
														obj_t BgL_list2248z00_1172;

														{	/* Llib/pregexp.scm 282 */
															obj_t BgL_arg2249z00_1173;

															BgL_arg2249z00_1173 =
																MAKE_PAIR(BgL_arg2247z00_1171, BNIL);
															BgL_list2248z00_1172 =
																MAKE_PAIR(BgL_arg2246z00_1170,
																BgL_arg2249z00_1173);
														}
														return BgL_list2248z00_1172;
													}
												}
											else
												{	/* Llib/pregexp.scm 279 */
													return
														BGl_errorz00zz__errorz00
														(BGl_string3038z00zz__pregexpz00,
														BGl_symbol3098z00zz__pregexpz00, BUNSPEC);
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



/* pregexp-wrap-quantifier-if-any */
	obj_t BGl_pregexpzd2wrapzd2quantifierzd2ifzd2anyz00zz__pregexpz00(obj_t
		BgL_vvz00_28, obj_t BgL_sz00_29, long BgL_nz00_30)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 290 */
			{	/* Llib/pregexp.scm 292 */
				obj_t BgL_rez00_1188;

				BgL_rez00_1188 = CAR(BgL_vvz00_28);
				{	/* Llib/pregexp.scm 293 */
					obj_t BgL_g1855z00_1189;

					{	/* Llib/pregexp.scm 293 */
						obj_t BgL_pairz00_2621;

						BgL_pairz00_2621 = BgL_vvz00_28;
						BgL_g1855z00_1189 = CAR(CDR(BgL_pairz00_2621));
					}
					{
						obj_t BgL_iz00_1191;

						BgL_iz00_1191 = BgL_g1855z00_1189;
					BgL_zc3anonymousza32261ze3z83_1192:
						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1191,
								BINT(BgL_nz00_30)))
							{	/* Llib/pregexp.scm 294 */
								return BgL_vvz00_28;
							}
						else
							{	/* Llib/pregexp.scm 295 */
								unsigned char BgL_cz00_1194;

								BgL_cz00_1194 =
									STRING_REF(BgL_sz00_29, (long) CINT(BgL_iz00_1191));
								{	/* Llib/pregexp.scm 296 */
									bool_t BgL_testz00_4446;

									if (isspace(BgL_cz00_1194))
										{	/* Llib/pregexp.scm 296 */
											if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00)
												{	/* Llib/pregexp.scm 296 */
													BgL_testz00_4446 = ((bool_t) 0);
												}
											else
												{	/* Llib/pregexp.scm 296 */
													BgL_testz00_4446 = ((bool_t) 1);
												}
										}
									else
										{	/* Llib/pregexp.scm 296 */
											BgL_testz00_4446 = ((bool_t) 0);
										}
									if (BgL_testz00_4446)
										{
											obj_t BgL_iz00_4450;

											BgL_iz00_4450 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1191,
												BINT(((long) 1)));
											BgL_iz00_1191 = BgL_iz00_4450;
											goto BgL_zc3anonymousza32261ze3z83_1192;
										}
									else
										{	/* Llib/pregexp.scm 296 */
											switch (BgL_cz00_1194)
												{
												case ((unsigned char) '*'):
												case ((unsigned char) '+'):
												case ((unsigned char) '?'):
												case ((unsigned char) '{'):

													{	/* Llib/pregexp.scm 300 */
														obj_t BgL_newzd2rezd2_1200;

														{	/* Llib/pregexp.scm 300 */
															obj_t BgL_list2304z00_1242;

															{	/* Llib/pregexp.scm 300 */
																obj_t BgL_arg2305z00_1243;

																obj_t BgL_arg2306z00_1244;

																BgL_arg2305z00_1243 =
																	BGl_keyword3100z00zz__pregexpz00;
																{	/* Llib/pregexp.scm 300 */
																	obj_t BgL_arg2307z00_1245;

																	obj_t BgL_arg2308z00_1246;

																	BgL_arg2307z00_1245 =
																		BGl_symbol3102z00zz__pregexpz00;
																	{	/* Llib/pregexp.scm 301 */
																		obj_t BgL_arg2309z00_1247;

																		obj_t BgL_arg2310z00_1248;

																		BgL_arg2309z00_1247 =
																			BGl_symbol3104z00zz__pregexpz00;
																		{	/* Llib/pregexp.scm 301 */
																			obj_t BgL_arg2311z00_1249;

																			obj_t BgL_arg2312z00_1250;

																			BgL_arg2311z00_1249 =
																				BGl_symbol3106z00zz__pregexpz00;
																			BgL_arg2312z00_1250 =
																				MAKE_PAIR(BgL_rez00_1188, BNIL);
																			BgL_arg2310z00_1248 =
																				MAKE_PAIR(BgL_arg2311z00_1249,
																				BgL_arg2312z00_1250);
																		}
																		BgL_arg2308z00_1246 =
																			MAKE_PAIR(BgL_arg2309z00_1247,
																			BgL_arg2310z00_1248);
																	}
																	BgL_arg2306z00_1244 =
																		MAKE_PAIR(BgL_arg2307z00_1245,
																		BgL_arg2308z00_1246);
																}
																BgL_list2304z00_1242 =
																	MAKE_PAIR(BgL_arg2305z00_1243,
																	BgL_arg2306z00_1244);
															}
															BgL_newzd2rezd2_1200 = BgL_list2304z00_1242;
														}
														{	/* Llib/pregexp.scm 300 */
															obj_t BgL_newzd2vvzd2_1201;

															{	/* Llib/pregexp.scm 302 */
																obj_t BgL_list2302z00_1240;

																{	/* Llib/pregexp.scm 302 */
																	obj_t BgL_arg2303z00_1241;

																	BgL_arg2303z00_1241 =
																		MAKE_PAIR(BGl_symbol3108z00zz__pregexpz00,
																		BNIL);
																	BgL_list2302z00_1240 =
																		MAKE_PAIR(BgL_newzd2rezd2_1200,
																		BgL_arg2303z00_1241);
																}
																BgL_newzd2vvzd2_1201 = BgL_list2302z00_1240;
															}
															{	/* Llib/pregexp.scm 302 */

																switch (BgL_cz00_1194)
																	{
																	case ((unsigned char) '*'):

																		{	/* Llib/pregexp.scm 304 */
																			obj_t BgL_arg2267z00_1205;

																			{	/* Llib/pregexp.scm 304 */
																				obj_t BgL_pairz00_2632;

																				BgL_pairz00_2632 = BgL_newzd2rezd2_1200;
																				BgL_arg2267z00_1205 =
																					CDR(CDR(BgL_pairz00_2632));
																			}
																			{	/* Llib/pregexp.scm 304 */
																				obj_t BgL_auxz00_4462;

																				BgL_auxz00_4462 = BINT(((long) 0));
																				SET_CAR(BgL_arg2267z00_1205,
																					BgL_auxz00_4462);
																		}}
																		{	/* Llib/pregexp.scm 305 */
																			obj_t BgL_arg2269z00_1207;

																			{	/* Llib/pregexp.scm 305 */
																				obj_t BgL_pairz00_2638;

																				BgL_pairz00_2638 = BgL_newzd2rezd2_1200;
																				BgL_arg2269z00_1207 =
																					CDR(CDR(CDR(BgL_pairz00_2638)));
																			}
																			SET_CAR(BgL_arg2269z00_1207, BFALSE);
																		} break;
																	case ((unsigned char) '+'):

																		{	/* Llib/pregexp.scm 306 */
																			obj_t BgL_arg2270z00_1208;

																			{	/* Llib/pregexp.scm 306 */
																				obj_t BgL_pairz00_2646;

																				BgL_pairz00_2646 = BgL_newzd2rezd2_1200;
																				BgL_arg2270z00_1208 =
																					CDR(CDR(BgL_pairz00_2646));
																			}
																			{	/* Llib/pregexp.scm 306 */
																				obj_t BgL_auxz00_4471;

																				BgL_auxz00_4471 = BINT(((long) 1));
																				SET_CAR(BgL_arg2270z00_1208,
																					BgL_auxz00_4471);
																		}}
																		{	/* Llib/pregexp.scm 307 */
																			obj_t BgL_arg2272z00_1210;

																			{	/* Llib/pregexp.scm 307 */
																				obj_t BgL_pairz00_2652;

																				BgL_pairz00_2652 = BgL_newzd2rezd2_1200;
																				BgL_arg2272z00_1210 =
																					CDR(CDR(CDR(BgL_pairz00_2652)));
																			}
																			SET_CAR(BgL_arg2272z00_1210, BFALSE);
																		} break;
																	case ((unsigned char) '?'):

																		{	/* Llib/pregexp.scm 308 */
																			obj_t BgL_arg2274z00_1211;

																			{	/* Llib/pregexp.scm 308 */
																				obj_t BgL_pairz00_2660;

																				BgL_pairz00_2660 = BgL_newzd2rezd2_1200;
																				BgL_arg2274z00_1211 =
																					CDR(CDR(BgL_pairz00_2660));
																			}
																			{	/* Llib/pregexp.scm 308 */
																				obj_t BgL_auxz00_4480;

																				BgL_auxz00_4480 = BINT(((long) 0));
																				SET_CAR(BgL_arg2274z00_1211,
																					BgL_auxz00_4480);
																		}}
																		{	/* Llib/pregexp.scm 309 */
																			obj_t BgL_arg2277z00_1213;

																			{	/* Llib/pregexp.scm 309 */
																				obj_t BgL_pairz00_2666;

																				BgL_pairz00_2666 = BgL_newzd2rezd2_1200;
																				BgL_arg2277z00_1213 =
																					CDR(CDR(CDR(BgL_pairz00_2666)));
																			}
																			{	/* Llib/pregexp.scm 309 */
																				obj_t BgL_auxz00_4486;

																				BgL_auxz00_4486 = BINT(((long) 1));
																				SET_CAR(BgL_arg2277z00_1213,
																					BgL_auxz00_4486);
																		}} break;
																	case ((unsigned char) '{'):

																		{	/* Llib/pregexp.scm 310 */
																			obj_t BgL_pqz00_1215;

																			BgL_pqz00_1215 =
																				BGl_pregexpzd2readzd2numsz00zz__pregexpz00
																				(BgL_sz00_29,
																				BGl_2zb2zb2zz__r4_numbers_6_5z00
																				(BgL_iz00_1191, BINT(((long) 1))),
																				BgL_nz00_30);
																			if (CBOOL(BgL_pqz00_1215))
																				{	/* Llib/pregexp.scm 311 */
																					BFALSE;
																				}
																			else
																				{	/* Llib/pregexp.scm 312 */
																					obj_t BgL_list2279z00_1216;

																					BgL_list2279z00_1216 =
																						MAKE_PAIR
																						(BGl_string3110z00zz__pregexpz00,
																						BNIL);
																					BGl_errorz00zz__errorz00
																						(BGl_string3038z00zz__pregexpz00,
																						BGl_symbol3111z00zz__pregexpz00,
																						CAR(BgL_list2279z00_1216));
																				}
																			{	/* Llib/pregexp.scm 315 */
																				obj_t BgL_arg2280z00_1217;

																				obj_t BgL_arg2281z00_1218;

																				{	/* Llib/pregexp.scm 315 */
																					obj_t BgL_pairz00_2681;

																					BgL_pairz00_2681 =
																						BgL_newzd2rezd2_1200;
																					BgL_arg2280z00_1217 =
																						CDR(CDR(BgL_pairz00_2681));
																				}
																				BgL_arg2281z00_1218 =
																					CAR(BgL_pqz00_1215);
																				SET_CAR(BgL_arg2280z00_1217,
																					BgL_arg2281z00_1218);
																			}
																			{	/* Llib/pregexp.scm 316 */
																				obj_t BgL_arg2282z00_1219;

																				obj_t BgL_arg2283z00_1220;

																				{	/* Llib/pregexp.scm 316 */
																					obj_t BgL_pairz00_2688;

																					BgL_pairz00_2688 =
																						BgL_newzd2rezd2_1200;
																					BgL_arg2282z00_1219 =
																						CDR(CDR(CDR(BgL_pairz00_2688)));
																				}
																				{	/* Llib/pregexp.scm 316 */
																					obj_t BgL_pairz00_2694;

																					BgL_pairz00_2694 = BgL_pqz00_1215;
																					BgL_arg2283z00_1220 =
																						CAR(CDR(BgL_pairz00_2694));
																				}
																				SET_CAR(BgL_arg2282z00_1219,
																					BgL_arg2283z00_1220);
																			}
																			{	/* Llib/pregexp.scm 317 */
																				obj_t BgL_pairz00_2700;

																				BgL_pairz00_2700 = BgL_pqz00_1215;
																				BgL_iz00_1191 =
																					CAR(CDR(CDR(BgL_pairz00_2700)));
																			}
																		}
																		break;
																	default:
																		BUNSPEC;
																	}
																{	/* Llib/pregexp.scm 318 */
																	obj_t BgL_g1860z00_1222;

																	BgL_g1860z00_1222 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1191, BINT(((long) 1)));
																	{
																		obj_t BgL_iz00_1224;

																		BgL_iz00_1224 = BgL_g1860z00_1222;
																	BgL_zc3anonymousza32285ze3z83_1225:
																		if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																			(BgL_iz00_1224, BINT(BgL_nz00_30)))
																			{	/* Llib/pregexp.scm 319 */
																				{	/* Llib/pregexp.scm 320 */
																					obj_t BgL_auxz00_4516;

																					BgL_auxz00_4516 =
																						CDR(BgL_newzd2rezd2_1200);
																					SET_CAR(BgL_auxz00_4516, BFALSE);
																				}
																				{	/* Llib/pregexp.scm 321 */
																					obj_t BgL_auxz00_4519;

																					BgL_auxz00_4519 =
																						CDR(BgL_newzd2vvzd2_1201);
																					SET_CAR(BgL_auxz00_4519,
																						BgL_iz00_1224);
																				}
																			}
																		else
																			{	/* Llib/pregexp.scm 322 */
																				unsigned char BgL_cz00_1229;

																				BgL_cz00_1229 =
																					STRING_REF(BgL_sz00_29,
																					(long) CINT(BgL_iz00_1224));
																				{	/* Llib/pregexp.scm 323 */
																					bool_t BgL_testz00_4524;

																					if (isspace(BgL_cz00_1229))
																						{	/* Llib/pregexp.scm 323 */
																							if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00)
																								{	/* Llib/pregexp.scm 324 */
																									BgL_testz00_4524 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Llib/pregexp.scm 324 */
																									BgL_testz00_4524 =
																										((bool_t) 1);
																								}
																						}
																					else
																						{	/* Llib/pregexp.scm 323 */
																							BgL_testz00_4524 = ((bool_t) 0);
																						}
																					if (BgL_testz00_4524)
																						{
																							obj_t BgL_iz00_4528;

																							BgL_iz00_4528 =
																								BGl_2zb2zb2zz__r4_numbers_6_5z00
																								(BgL_iz00_1224,
																								BINT(((long) 1)));
																							BgL_iz00_1224 = BgL_iz00_4528;
																							goto
																								BgL_zc3anonymousza32285ze3z83_1225;
																						}
																					else
																						{	/* Llib/pregexp.scm 323 */
																							if (
																								(BgL_cz00_1229 ==
																									((unsigned char) '?')))
																								{	/* Llib/pregexp.scm 326 */
																									{	/* Llib/pregexp.scm 327 */
																										obj_t BgL_auxz00_4533;

																										BgL_auxz00_4533 =
																											CDR(BgL_newzd2rezd2_1200);
																										SET_CAR(BgL_auxz00_4533,
																											BTRUE);
																									}
																									{	/* Llib/pregexp.scm 328 */
																										obj_t BgL_auxz00_4538;

																										obj_t BgL_auxz00_4536;

																										BgL_auxz00_4538 =
																											BGl_2zb2zb2zz__r4_numbers_6_5z00
																											(BgL_iz00_1224,
																											BINT(((long) 1)));
																										BgL_auxz00_4536 =
																											CDR(BgL_newzd2vvzd2_1201);
																										SET_CAR(BgL_auxz00_4536,
																											BgL_auxz00_4538);
																								}}
																							else
																								{	/* Llib/pregexp.scm 326 */
																									{	/* Llib/pregexp.scm 329 */
																										obj_t BgL_auxz00_4542;

																										BgL_auxz00_4542 =
																											CDR(BgL_newzd2rezd2_1200);
																										SET_CAR(BgL_auxz00_4542,
																											BFALSE);
																									}
																									{	/* Llib/pregexp.scm 330 */
																										obj_t BgL_auxz00_4545;

																										BgL_auxz00_4545 =
																											CDR(BgL_newzd2vvzd2_1201);
																										SET_CAR(BgL_auxz00_4545,
																											BgL_iz00_1224);
																									}
																								}
																						}
																				}
																			}
																	}
																}
																return BgL_newzd2vvzd2_1201;
															}
														}
													}
													break;
												default:
													return BgL_vvz00_28;
												}
										}
								}
							}
					}
				}
			}
		}
	}



/* pregexp-read-nums */
	obj_t BGl_pregexpzd2readzd2numsz00zz__pregexpz00(obj_t BgL_sz00_31,
		obj_t BgL_iz00_32, long BgL_nz00_33)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 336 */
			{
				obj_t BgL_pz00_1256;

				obj_t BgL_qz00_1257;

				obj_t BgL_kz00_1258;

				long BgL_readingz00_1259;

				BgL_pz00_1256 = BNIL;
				BgL_qz00_1257 = BNIL;
				BgL_kz00_1258 = BgL_iz00_32;
				BgL_readingz00_1259 = ((long) 1);
			BgL_zc3anonymousza32314ze3z83_1260:
				if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_1258,
						BINT(BgL_nz00_33)))
					{	/* Llib/pregexp.scm 341 */
						BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
							BGl_symbol3113z00zz__pregexpz00, BUNSPEC);
					}
				else
					{	/* Llib/pregexp.scm 341 */
						BFALSE;
					}
				{	/* Llib/pregexp.scm 342 */
					unsigned char BgL_cz00_1263;

					BgL_cz00_1263 = STRING_REF(BgL_sz00_31, (long) CINT(BgL_kz00_1258));
					if (isdigit(BgL_cz00_1263))
						{	/* Llib/pregexp.scm 343 */
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_readingz00_1259),
									BINT(((long) 1))))
								{	/* Llib/pregexp.scm 345 */
									obj_t BgL_arg2319z00_1266;

									obj_t BgL_arg2320z00_1267;

									BgL_arg2319z00_1266 =
										MAKE_PAIR(BCHAR(BgL_cz00_1263), BgL_pz00_1256);
									BgL_arg2320z00_1267 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258,
										BINT(((long) 1)));
									{
										long BgL_readingz00_4567;

										obj_t BgL_kz00_4566;

										obj_t BgL_pz00_4565;

										BgL_pz00_4565 = BgL_arg2319z00_1266;
										BgL_kz00_4566 = BgL_arg2320z00_1267;
										BgL_readingz00_4567 = ((long) 1);
										BgL_readingz00_1259 = BgL_readingz00_4567;
										BgL_kz00_1258 = BgL_kz00_4566;
										BgL_pz00_1256 = BgL_pz00_4565;
										goto BgL_zc3anonymousza32314ze3z83_1260;
									}
								}
							else
								{	/* Llib/pregexp.scm 346 */
									obj_t BgL_arg2322z00_1269;

									obj_t BgL_arg2323z00_1270;

									BgL_arg2322z00_1269 =
										MAKE_PAIR(BCHAR(BgL_cz00_1263), BgL_qz00_1257);
									BgL_arg2323z00_1270 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258,
										BINT(((long) 1)));
									{
										long BgL_readingz00_4574;

										obj_t BgL_kz00_4573;

										obj_t BgL_qz00_4572;

										BgL_qz00_4572 = BgL_arg2322z00_1269;
										BgL_kz00_4573 = BgL_arg2323z00_1270;
										BgL_readingz00_4574 = ((long) 2);
										BgL_readingz00_1259 = BgL_readingz00_4574;
										BgL_kz00_1258 = BgL_kz00_4573;
										BgL_qz00_1257 = BgL_qz00_4572;
										goto BgL_zc3anonymousza32314ze3z83_1260;
									}
								}
						}
					else
						{	/* Llib/pregexp.scm 347 */
							bool_t BgL_testz00_4575;

							if (isspace(BgL_cz00_1263))
								{	/* Llib/pregexp.scm 347 */
									if (BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00)
										{	/* Llib/pregexp.scm 347 */
											BgL_testz00_4575 = ((bool_t) 0);
										}
									else
										{	/* Llib/pregexp.scm 347 */
											BgL_testz00_4575 = ((bool_t) 1);
										}
								}
							else
								{	/* Llib/pregexp.scm 347 */
									BgL_testz00_4575 = ((bool_t) 0);
								}
							if (BgL_testz00_4575)
								{
									obj_t BgL_kz00_4579;

									BgL_kz00_4579 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258,
										BINT(((long) 1)));
									BgL_kz00_1258 = BgL_kz00_4579;
									goto BgL_zc3anonymousza32314ze3z83_1260;
								}
							else
								{	/* Llib/pregexp.scm 349 */
									bool_t BgL_testz00_4582;

									if ((BgL_cz00_1263 == ((unsigned char) ',')))
										{	/* Llib/pregexp.scm 349 */
											BgL_testz00_4582 =
												BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
												(BgL_readingz00_1259), BINT(((long) 1)));
										}
									else
										{	/* Llib/pregexp.scm 349 */
											BgL_testz00_4582 = ((bool_t) 0);
										}
									if (BgL_testz00_4582)
										{
											long BgL_readingz00_4591;

											obj_t BgL_kz00_4588;

											BgL_kz00_4588 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1258,
												BINT(((long) 1)));
											BgL_readingz00_4591 = ((long) 2);
											BgL_readingz00_1259 = BgL_readingz00_4591;
											BgL_kz00_1258 = BgL_kz00_4588;
											goto BgL_zc3anonymousza32314ze3z83_1260;
										}
									else
										{	/* Llib/pregexp.scm 349 */
											if ((BgL_cz00_1263 == ((unsigned char) '}')))
												{	/* Llib/pregexp.scm 352 */
													obj_t BgL_pz00_1278;

													obj_t BgL_qz00_1279;

													{	/* Llib/pregexp.scm 352 */
														obj_t BgL_arg2343z00_1292;

														BgL_arg2343z00_1292 =
															BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
															(BGl_pregexpzd2reversez12zc0zz__pregexpz00
															(BgL_pz00_1256));
														{	/* Ieee/number.scm 134 */

															BgL_pz00_1278 =
																BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																(BgL_arg2343z00_1292, BINT(((long) 10)));
													}}
													{	/* Llib/pregexp.scm 353 */
														obj_t BgL_arg2345z00_1296;

														BgL_arg2345z00_1296 =
															BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
															(BGl_pregexpzd2reversez12zc0zz__pregexpz00
															(BgL_qz00_1257));
														{	/* Ieee/number.scm 134 */

															BgL_qz00_1279 =
																BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																(BgL_arg2345z00_1296, BINT(((long) 10)));
													}}
													{	/* Llib/pregexp.scm 354 */
														bool_t BgL_testz00_4602;

														if (CBOOL(BgL_pz00_1278))
															{	/* Llib/pregexp.scm 354 */
																BgL_testz00_4602 = ((bool_t) 0);
															}
														else
															{	/* Llib/pregexp.scm 354 */
																BgL_testz00_4602 =
																	BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
																	(BgL_readingz00_1259), BINT(((long) 1)));
															}
														if (BgL_testz00_4602)
															{	/* Llib/pregexp.scm 354 */
																obj_t BgL_list2332z00_1281;

																{	/* Llib/pregexp.scm 354 */
																	obj_t BgL_arg2334z00_1283;

																	{	/* Llib/pregexp.scm 354 */
																		obj_t BgL_arg2335z00_1284;

																		BgL_arg2335z00_1284 =
																			MAKE_PAIR(BgL_kz00_1258, BNIL);
																		BgL_arg2334z00_1283 =
																			MAKE_PAIR(BFALSE, BgL_arg2335z00_1284);
																	}
																	BgL_list2332z00_1281 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2334z00_1283);
																}
																return BgL_list2332z00_1281;
															}
														else
															{	/* Llib/pregexp.scm 354 */
																if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT
																		(BgL_readingz00_1259), BINT(((long) 1))))
																	{	/* Llib/pregexp.scm 355 */
																		obj_t BgL_list2337z00_1286;

																		{	/* Llib/pregexp.scm 355 */
																			obj_t BgL_arg2338z00_1287;

																			{	/* Llib/pregexp.scm 355 */
																				obj_t BgL_arg2339z00_1288;

																				BgL_arg2339z00_1288 =
																					MAKE_PAIR(BgL_kz00_1258, BNIL);
																				BgL_arg2338z00_1287 =
																					MAKE_PAIR(BgL_pz00_1278,
																					BgL_arg2339z00_1288);
																			}
																			BgL_list2337z00_1286 =
																				MAKE_PAIR(BgL_pz00_1278,
																				BgL_arg2338z00_1287);
																		}
																		return BgL_list2337z00_1286;
																	}
																else
																	{	/* Llib/pregexp.scm 356 */
																		obj_t BgL_list2340z00_1289;

																		{	/* Llib/pregexp.scm 356 */
																			obj_t BgL_arg2341z00_1290;

																			{	/* Llib/pregexp.scm 356 */
																				obj_t BgL_arg2342z00_1291;

																				BgL_arg2342z00_1291 =
																					MAKE_PAIR(BgL_kz00_1258, BNIL);
																				BgL_arg2341z00_1290 =
																					MAKE_PAIR(BgL_qz00_1279,
																					BgL_arg2342z00_1291);
																			}
																			BgL_list2340z00_1289 =
																				MAKE_PAIR(BgL_pz00_1278,
																				BgL_arg2341z00_1290);
																		}
																		return BgL_list2340z00_1289;
																	}
															}
													}
												}
											else
												{	/* Llib/pregexp.scm 351 */
													return BFALSE;
												}
										}
								}
						}
				}
			}
		}
	}



/* pregexp-read-char-list */
	obj_t BGl_pregexpzd2readzd2charzd2listzd2zz__pregexpz00(obj_t BgL_sz00_35,
		obj_t BgL_iz00_36, long BgL_nz00_37)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 366 */
			{
				obj_t BgL_rz00_1307;

				obj_t BgL_iz00_1308;

				BgL_rz00_1307 = BNIL;
				BgL_iz00_1308 = BgL_iz00_36;
			BgL_zc3anonymousza32351ze3z83_1309:
				if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1308,
						BINT(BgL_nz00_37)))
					{	/* Llib/pregexp.scm 370 */
						obj_t BgL_list2353z00_1311;

						BgL_list2353z00_1311 =
							MAKE_PAIR(BGl_string3115z00zz__pregexpz00, BNIL);
						return
							BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
							BGl_symbol3116z00zz__pregexpz00, CAR(BgL_list2353z00_1311));
					}
				else
					{	/* Llib/pregexp.scm 372 */
						unsigned char BgL_cz00_1312;

						BgL_cz00_1312 = STRING_REF(BgL_sz00_35, (long) CINT(BgL_iz00_1308));
						{

							switch (BgL_cz00_1312)
								{
								case ((unsigned char) ']'):

									if (NULLP(BgL_rz00_1307))
										{	/* Llib/pregexp.scm 375 */
											obj_t BgL_arg2356z00_1317;

											obj_t BgL_arg2357z00_1318;

											BgL_arg2356z00_1317 =
												MAKE_PAIR(BCHAR(BgL_cz00_1312), BgL_rz00_1307);
											BgL_arg2357z00_1318 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
												BINT(((long) 1)));
											{
												obj_t BgL_iz00_4637;

												obj_t BgL_rz00_4636;

												BgL_rz00_4636 = BgL_arg2356z00_1317;
												BgL_iz00_4637 = BgL_arg2357z00_1318;
												BgL_iz00_1308 = BgL_iz00_4637;
												BgL_rz00_1307 = BgL_rz00_4636;
												goto BgL_zc3anonymousza32351ze3z83_1309;
											}
										}
									else
										{	/* Llib/pregexp.scm 376 */
											obj_t BgL_arg2358z00_1319;

											obj_t BgL_arg2359z00_1320;

											BgL_arg2358z00_1319 =
												MAKE_PAIR(BGl_keyword3118z00zz__pregexpz00,
												BGl_pregexpzd2reversez12zc0zz__pregexpz00
												(BgL_rz00_1307));
											BgL_arg2359z00_1320 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
												BINT(((long) 1)));
											{	/* Llib/pregexp.scm 376 */
												obj_t BgL_list2360z00_1321;

												{	/* Llib/pregexp.scm 376 */
													obj_t BgL_arg2361z00_1322;

													BgL_arg2361z00_1322 =
														MAKE_PAIR(BgL_arg2359z00_1320, BNIL);
													BgL_list2360z00_1321 =
														MAKE_PAIR(BgL_arg2358z00_1319, BgL_arg2361z00_1322);
												}
												return BgL_list2360z00_1321;
											}
										}
									break;
								case ((unsigned char) '\\'):

									{	/* Llib/pregexp.scm 379 */
										obj_t BgL_charzd2izd2_1325;

										BgL_charzd2izd2_1325 =
											BGl_pregexpzd2readzd2escapedzd2charzd2zz__pregexpz00
											(BgL_sz00_35, BgL_iz00_1308, BgL_nz00_37);
										if (CBOOL(BgL_charzd2izd2_1325))
											{	/* Llib/pregexp.scm 380 */
												obj_t BgL_arg2364z00_1326;

												obj_t BgL_arg2365z00_1327;

												BgL_arg2364z00_1326 =
													MAKE_PAIR(CAR(BgL_charzd2izd2_1325), BgL_rz00_1307);
												{	/* Llib/pregexp.scm 380 */
													obj_t BgL_pairz00_2763;

													BgL_pairz00_2763 = BgL_charzd2izd2_1325;
													BgL_arg2365z00_1327 = CAR(CDR(BgL_pairz00_2763));
												}
												{
													obj_t BgL_iz00_4652;

													obj_t BgL_rz00_4651;

													BgL_rz00_4651 = BgL_arg2364z00_1326;
													BgL_iz00_4652 = BgL_arg2365z00_1327;
													BgL_iz00_1308 = BgL_iz00_4652;
													BgL_rz00_1307 = BgL_rz00_4651;
													goto BgL_zc3anonymousza32351ze3z83_1309;
												}
											}
										else
											{	/* Llib/pregexp.scm 381 */
												obj_t BgL_list2367z00_1329;

												BgL_list2367z00_1329 =
													MAKE_PAIR(BCHAR(((unsigned char) '\\')), BNIL);
												return
													BGl_errorz00zz__errorz00
													(BGl_string3038z00zz__pregexpz00,
													BGl_symbol3116z00zz__pregexpz00,
													CAR(BgL_list2367z00_1329));
											}
									}
									break;
								case ((unsigned char) '-'):

									{	/* Llib/pregexp.scm 382 */
										bool_t BgL_testz00_4657;

										if (NULLP(BgL_rz00_1307))
											{	/* Llib/pregexp.scm 382 */
												BgL_testz00_4657 = ((bool_t) 1);
											}
										else
											{	/* Llib/pregexp.scm 383 */
												obj_t BgL_izb21zb2_1348;

												BgL_izb21zb2_1348 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
													BINT(((long) 1)));
												if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_izb21zb2_1348,
														BINT(BgL_nz00_37)))
													{	/* Llib/pregexp.scm 384 */
														BgL_testz00_4657 =
															(STRING_REF(BgL_sz00_35,
																(long) CINT(BgL_izb21zb2_1348)) ==
															((unsigned char) ']'));
													}
												else
													{	/* Llib/pregexp.scm 384 */
														BgL_testz00_4657 = ((bool_t) 0);
													}
											}
										if (BgL_testz00_4657)
											{	/* Llib/pregexp.scm 386 */
												obj_t BgL_arg2369z00_1331;

												obj_t BgL_arg2370z00_1332;

												BgL_arg2369z00_1331 =
													MAKE_PAIR(BCHAR(BgL_cz00_1312), BgL_rz00_1307);
												BgL_arg2370z00_1332 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
													BINT(((long) 1)));
												{
													obj_t BgL_iz00_4673;

													obj_t BgL_rz00_4672;

													BgL_rz00_4672 = BgL_arg2369z00_1331;
													BgL_iz00_4673 = BgL_arg2370z00_1332;
													BgL_iz00_1308 = BgL_iz00_4673;
													BgL_rz00_1307 = BgL_rz00_4672;
													goto BgL_zc3anonymousza32351ze3z83_1309;
												}
											}
										else
											{	/* Llib/pregexp.scm 387 */
												obj_t BgL_czd2prevzd2_1333;

												BgL_czd2prevzd2_1333 = CAR(BgL_rz00_1307);
												if (CHARP(BgL_czd2prevzd2_1333))
													{	/* Llib/pregexp.scm 389 */
														obj_t BgL_arg2372z00_1335;

														obj_t BgL_arg2373z00_1336;

														{	/* Llib/pregexp.scm 389 */
															obj_t BgL_arg2374z00_1337;

															obj_t BgL_arg2375z00_1338;

															{	/* Llib/pregexp.scm 389 */
																obj_t BgL_arg2376z00_1339;

																unsigned char BgL_arg2377z00_1340;

																BgL_arg2376z00_1339 =
																	BGl_keyword3120z00zz__pregexpz00;
																BgL_arg2377z00_1340 =
																	STRING_REF(BgL_sz00_35,
																	(long)
																	CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1308, BINT(((long) 1)))));
																{	/* Llib/pregexp.scm 389 */
																	obj_t BgL_list2378z00_1341;

																	{	/* Llib/pregexp.scm 389 */
																		obj_t BgL_arg2379z00_1342;

																		{	/* Llib/pregexp.scm 389 */
																			obj_t BgL_arg2380z00_1343;

																			BgL_arg2380z00_1343 =
																				MAKE_PAIR(BCHAR(BgL_arg2377z00_1340),
																				BNIL);
																			BgL_arg2379z00_1342 =
																				MAKE_PAIR(BgL_czd2prevzd2_1333,
																				BgL_arg2380z00_1343);
																		}
																		BgL_list2378z00_1341 =
																			MAKE_PAIR(BgL_arg2376z00_1339,
																			BgL_arg2379z00_1342);
																	}
																	BgL_arg2374z00_1337 = BgL_list2378z00_1341;
															}}
															BgL_arg2375z00_1338 = CDR(BgL_rz00_1307);
															BgL_arg2372z00_1335 =
																MAKE_PAIR(BgL_arg2374z00_1337,
																BgL_arg2375z00_1338);
														}
														BgL_arg2373z00_1336 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
															BINT(((long) 2)));
														{
															obj_t BgL_iz00_4690;

															obj_t BgL_rz00_4689;

															BgL_rz00_4689 = BgL_arg2372z00_1335;
															BgL_iz00_4690 = BgL_arg2373z00_1336;
															BgL_iz00_1308 = BgL_iz00_4690;
															BgL_rz00_1307 = BgL_rz00_4689;
															goto BgL_zc3anonymousza32351ze3z83_1309;
														}
													}
												else
													{	/* Llib/pregexp.scm 392 */
														obj_t BgL_arg2382z00_1345;

														obj_t BgL_arg2383z00_1346;

														BgL_arg2382z00_1345 =
															MAKE_PAIR(BCHAR(BgL_cz00_1312), BgL_rz00_1307);
														BgL_arg2383z00_1346 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
															BINT(((long) 1)));
														{
															obj_t BgL_iz00_4696;

															obj_t BgL_rz00_4695;

															BgL_rz00_4695 = BgL_arg2382z00_1345;
															BgL_iz00_4696 = BgL_arg2383z00_1346;
															BgL_iz00_1308 = BgL_iz00_4696;
															BgL_rz00_1307 = BgL_rz00_4695;
															goto BgL_zc3anonymousza32351ze3z83_1309;
														}
													}
											}
									}
									break;
								case ((unsigned char) '['):

									if (
										(STRING_REF(BgL_sz00_35,
												(long)
												CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
														BINT(((long) 1))))) == ((unsigned char) ':')))
										{	/* Llib/pregexp.scm 394 */
											obj_t BgL_posixzd2charzd2classzd2izd2_1352;

											BgL_posixzd2charzd2classzd2izd2_1352 =
												BGl_pregexpzd2readzd2posixzd2charzd2classz00zz__pregexpz00
												(BgL_sz00_35,
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
													BINT(((long) 2))), BgL_nz00_37);
											{	/* Llib/pregexp.scm 396 */
												obj_t BgL_arg2387z00_1353;

												obj_t BgL_arg2388z00_1354;

												BgL_arg2387z00_1353 =
													MAKE_PAIR(CAR(BgL_posixzd2charzd2classzd2izd2_1352),
													BgL_rz00_1307);
												{	/* Llib/pregexp.scm 397 */
													obj_t BgL_pairz00_2791;

													BgL_pairz00_2791 =
														BgL_posixzd2charzd2classzd2izd2_1352;
													BgL_arg2388z00_1354 = CAR(CDR(BgL_pairz00_2791));
												}
												{
													obj_t BgL_iz00_4711;

													obj_t BgL_rz00_4710;

													BgL_rz00_4710 = BgL_arg2387z00_1353;
													BgL_iz00_4711 = BgL_arg2388z00_1354;
													BgL_iz00_1308 = BgL_iz00_4711;
													BgL_rz00_1307 = BgL_rz00_4710;
													goto BgL_zc3anonymousza32351ze3z83_1309;
												}
											}
										}
									else
										{	/* Llib/pregexp.scm 398 */
											obj_t BgL_arg2391z00_1357;

											obj_t BgL_arg2392z00_1358;

											BgL_arg2391z00_1357 =
												MAKE_PAIR(BCHAR(BgL_cz00_1312), BgL_rz00_1307);
											BgL_arg2392z00_1358 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
												BINT(((long) 1)));
											{
												obj_t BgL_iz00_4717;

												obj_t BgL_rz00_4716;

												BgL_rz00_4716 = BgL_arg2391z00_1357;
												BgL_iz00_4717 = BgL_arg2392z00_1358;
												BgL_iz00_1308 = BgL_iz00_4717;
												BgL_rz00_1307 = BgL_rz00_4716;
												goto BgL_zc3anonymousza32351ze3z83_1309;
											}
										}
									break;
								default:
									{	/* Llib/pregexp.scm 399 */
										obj_t BgL_arg2395z00_1361;

										obj_t BgL_arg2396z00_1362;

										BgL_arg2395z00_1361 =
											MAKE_PAIR(BCHAR(BgL_cz00_1312), BgL_rz00_1307);
										BgL_arg2396z00_1362 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1308,
											BINT(((long) 1)));
										{
											obj_t BgL_iz00_4723;

											obj_t BgL_rz00_4722;

											BgL_rz00_4722 = BgL_arg2395z00_1361;
											BgL_iz00_4723 = BgL_arg2396z00_1362;
											BgL_iz00_1308 = BgL_iz00_4723;
											BgL_rz00_1307 = BgL_rz00_4722;
											goto BgL_zc3anonymousza32351ze3z83_1309;
										}
									}
								}
						}
					}
			}
		}
	}



/* pregexp-at-word-boundary? */
	obj_t BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00(obj_t
		BgL_sz00_45, obj_t BgL_iz00_46, obj_t BgL_nz00_47)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 422 */
			{	/* Llib/pregexp.scm 424 */
				bool_t BgL__ortest_1869z00_1380;

				BgL__ortest_1869z00_1380 =
					BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_46, BINT(((long) 0)));
				if (BgL__ortest_1869z00_1380)
					{	/* Llib/pregexp.scm 424 */
						return BBOOL(BgL__ortest_1869z00_1380);
					}
				else
					{	/* Llib/pregexp.scm 424 */
						bool_t BgL__ortest_1870z00_1381;

						BgL__ortest_1870z00_1381 =
							BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_46, BgL_nz00_47);
						if (BgL__ortest_1870z00_1381)
							{	/* Llib/pregexp.scm 424 */
								return BBOOL(BgL__ortest_1870z00_1381);
							}
						else
							{	/* Llib/pregexp.scm 425 */
								unsigned char BgL_czf2izf2_1382;

								unsigned char BgL_czf2izd21z20_1383;

								BgL_czf2izf2_1382 =
									STRING_REF(BgL_sz00_45, (long) CINT(BgL_iz00_46));
								BgL_czf2izd21z20_1383 =
									STRING_REF(BgL_sz00_45,
									(long) CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_iz00_46,
											BINT(((long) 1)))));
								{	/* Llib/pregexp.scm 427 */
									obj_t BgL_czf2izf2wzf3zf3_1384;

									obj_t BgL_czf2izd21zf2wzf3z21_1385;

									BgL_czf2izf2wzf3zf3_1384 =
										BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00
										(BgL_czf2izf2_1382, BGl_keyword3069z00zz__pregexpz00);
									BgL_czf2izd21zf2wzf3z21_1385 =
										BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00
										(BgL_czf2izd21z20_1383, BGl_keyword3069z00zz__pregexpz00);
									{	/* Llib/pregexp.scm 431 */
										bool_t BgL__ortest_1871z00_1386;

										if (CBOOL(BgL_czf2izf2wzf3zf3_1384))
											{	/* Llib/pregexp.scm 431 */
												if (CBOOL(BgL_czf2izd21zf2wzf3z21_1385))
													{	/* Llib/pregexp.scm 431 */
														BgL__ortest_1871z00_1386 = ((bool_t) 0);
													}
												else
													{	/* Llib/pregexp.scm 431 */
														BgL__ortest_1871z00_1386 = ((bool_t) 1);
													}
											}
										else
											{	/* Llib/pregexp.scm 431 */
												BgL__ortest_1871z00_1386 = ((bool_t) 0);
											}
										if (BgL__ortest_1871z00_1386)
											{	/* Llib/pregexp.scm 431 */
												return BBOOL(BgL__ortest_1871z00_1386);
											}
										else
											{	/* Llib/pregexp.scm 432 */
												bool_t BgL_testz00_4746;

												if (CBOOL(BgL_czf2izf2wzf3zf3_1384))
													{	/* Llib/pregexp.scm 432 */
														BgL_testz00_4746 = ((bool_t) 0);
													}
												else
													{	/* Llib/pregexp.scm 432 */
														BgL_testz00_4746 = ((bool_t) 1);
													}
												if (BgL_testz00_4746)
													{	/* Llib/pregexp.scm 432 */
														return BgL_czf2izd21zf2wzf3z21_1385;
													}
												else
													{	/* Llib/pregexp.scm 432 */
														return BFALSE;
													}
											}
									}
								}
							}
					}
			}
		}
	}



/* pregexp-check-if-in-char-class? */
	obj_t
		BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00(unsigned
		char BgL_cz00_48, obj_t BgL_charzd2classzd2_49)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 434 */
			if ((BgL_charzd2classzd2_49 == BGl_keyword3049z00zz__pregexpz00))
				{	/* Llib/pregexp.scm 436 */
					if ((BgL_cz00_48 == ((unsigned char) '\n')))
						{	/* Llib/pregexp.scm 437 */
							return BFALSE;
						}
					else
						{	/* Llib/pregexp.scm 437 */
							return BTRUE;
						}
				}
			else
				{	/* Llib/pregexp.scm 436 */
					if ((BgL_charzd2classzd2_49 == BGl_keyword3122z00zz__pregexpz00))
						{	/* Llib/pregexp.scm 439 */
							bool_t BgL__ortest_1874z00_1394;

							BgL__ortest_1874z00_1394 = isalpha(BgL_cz00_48);
							if (BgL__ortest_1874z00_1394)
								{	/* Llib/pregexp.scm 439 */
									return BBOOL(BgL__ortest_1874z00_1394);
								}
							else
								{	/* Llib/pregexp.scm 439 */
									return BBOOL(isdigit(BgL_cz00_48));
								}
						}
					else
						{	/* Llib/pregexp.scm 436 */
							if ((BgL_charzd2classzd2_49 == BGl_keyword3124z00zz__pregexpz00))
								{	/* Llib/pregexp.scm 436 */
									return BBOOL(isalpha(BgL_cz00_48));
								}
							else
								{	/* Llib/pregexp.scm 436 */
									if (
										(BgL_charzd2classzd2_49 ==
											BGl_keyword3126z00zz__pregexpz00))
										{	/* Llib/pregexp.scm 436 */
											return
												BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(
														(BgL_cz00_48)), BINT(((long) 128))));
										}
									else
										{	/* Llib/pregexp.scm 436 */
											if (
												(BgL_charzd2classzd2_49 ==
													BGl_keyword3128z00zz__pregexpz00))
												{	/* Llib/pregexp.scm 442 */
													bool_t BgL__ortest_1875z00_1400;

													BgL__ortest_1875z00_1400 =
														(BgL_cz00_48 == ((unsigned char) ' '));
													if (BgL__ortest_1875z00_1400)
														{	/* Llib/pregexp.scm 442 */
															return BBOOL(BgL__ortest_1875z00_1400);
														}
													else
														{	/* Llib/pregexp.scm 442 */
															unsigned char BgL_char2z00_2837;

															BgL_char2z00_2837 =
																BGl_za2pregexpzd2tabzd2charza2z00zz__pregexpz00;
															return BBOOL((BgL_cz00_48 == BgL_char2z00_2837));
														}
												}
											else
												{	/* Llib/pregexp.scm 436 */
													if (
														(BgL_charzd2classzd2_49 ==
															BGl_keyword3130z00zz__pregexpz00))
														{	/* Llib/pregexp.scm 436 */
															return
																BBOOL(BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(
																		(BgL_cz00_48)), BINT(((long) 32))));
														}
													else
														{	/* Llib/pregexp.scm 436 */
															if (
																(BgL_charzd2classzd2_49 ==
																	BGl_keyword3063z00zz__pregexpz00))
																{	/* Llib/pregexp.scm 436 */
																	return BBOOL(isdigit(BgL_cz00_48));
																}
															else
																{	/* Llib/pregexp.scm 436 */
																	if (
																		(BgL_charzd2classzd2_49 ==
																			BGl_keyword3132z00zz__pregexpz00))
																		{	/* Llib/pregexp.scm 436 */
																			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																				(BINT((BgL_cz00_48)),
																					BINT(((long) 32))))
																				{	/* Llib/pregexp.scm 445 */
																					if (isspace(BgL_cz00_48))
																						{	/* Llib/pregexp.scm 446 */
																							return BFALSE;
																						}
																					else
																						{	/* Llib/pregexp.scm 446 */
																							return BTRUE;
																						}
																				}
																			else
																				{	/* Llib/pregexp.scm 445 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Llib/pregexp.scm 436 */
																			if (
																				(BgL_charzd2classzd2_49 ==
																					BGl_keyword3134z00zz__pregexpz00))
																				{	/* Llib/pregexp.scm 436 */
																					return BBOOL(islower(BgL_cz00_48));
																				}
																			else
																				{	/* Llib/pregexp.scm 436 */
																					if (
																						(BgL_charzd2classzd2_49 ==
																							BGl_keyword3136z00zz__pregexpz00))
																						{	/* Llib/pregexp.scm 436 */
																							return
																								BBOOL
																								(BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																								(BINT((BgL_cz00_48)),
																									BINT(((long) 32))));
																						}
																					else
																						{	/* Llib/pregexp.scm 436 */
																							if (
																								(BgL_charzd2classzd2_49 ==
																									BGl_keyword3138z00zz__pregexpz00))
																								{	/* Llib/pregexp.scm 436 */
																									if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT((BgL_cz00_48)), BINT(((long) 32))))
																										{	/* Llib/pregexp.scm 450 */
																											bool_t BgL_testz00_4816;

																											if (isspace(BgL_cz00_48))
																												{	/* Llib/pregexp.scm 450 */
																													BgL_testz00_4816 =
																														((bool_t) 0);
																												}
																											else
																												{	/* Llib/pregexp.scm 450 */
																													BgL_testz00_4816 =
																														((bool_t) 1);
																												}
																											if (BgL_testz00_4816)
																												{	/* Llib/pregexp.scm 451 */
																													bool_t
																														BgL_testz00_4819;
																													if (isalpha
																														(BgL_cz00_48))
																														{	/* Llib/pregexp.scm 451 */
																															BgL_testz00_4819 =
																																((bool_t) 0);
																														}
																													else
																														{	/* Llib/pregexp.scm 451 */
																															BgL_testz00_4819 =
																																((bool_t) 1);
																														}
																													if (BgL_testz00_4819)
																														{	/* Llib/pregexp.scm 451 */
																															if (isdigit
																																(BgL_cz00_48))
																																{	/* Llib/pregexp.scm 452 */
																																	return BFALSE;
																																}
																															else
																																{	/* Llib/pregexp.scm 452 */
																																	return BTRUE;
																																}
																														}
																													else
																														{	/* Llib/pregexp.scm 451 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Llib/pregexp.scm 450 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Llib/pregexp.scm 449 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Llib/pregexp.scm 436 */
																									if (
																										(BgL_charzd2classzd2_49 ==
																											BGl_keyword3066z00zz__pregexpz00))
																										{	/* Llib/pregexp.scm 436 */
																											return
																												BBOOL(isspace
																												(BgL_cz00_48));
																										}
																									else
																										{	/* Llib/pregexp.scm 436 */
																											if (
																												(BgL_charzd2classzd2_49
																													==
																													BGl_keyword3140z00zz__pregexpz00))
																												{	/* Llib/pregexp.scm 436 */
																													return
																														BBOOL(isupper
																														(BgL_cz00_48));
																												}
																											else
																												{	/* Llib/pregexp.scm 436 */
																													if (
																														(BgL_charzd2classzd2_49
																															==
																															BGl_keyword3069z00zz__pregexpz00))
																														{	/* Llib/pregexp.scm 455 */
																															bool_t
																																BgL__ortest_1880z00_1426;
																															BgL__ortest_1880z00_1426
																																=
																																isalpha
																																(BgL_cz00_48);
																															if (BgL__ortest_1880z00_1426)
																																{	/* Llib/pregexp.scm 455 */
																																	return
																																		BBOOL
																																		(BgL__ortest_1880z00_1426);
																																}
																															else
																																{	/* Llib/pregexp.scm 456 */
																																	bool_t
																																		BgL__ortest_1881z00_1427;
																																	BgL__ortest_1881z00_1427
																																		=
																																		isdigit
																																		(BgL_cz00_48);
																																	if (BgL__ortest_1881z00_1427)
																																		{	/* Llib/pregexp.scm 456 */
																																			return
																																				BBOOL
																																				(BgL__ortest_1881z00_1427);
																																		}
																																	else
																																		{	/* Llib/pregexp.scm 456 */
																																			return
																																				BBOOL(
																																				(BgL_cz00_48
																																					==
																																					((unsigned char) '_')));
																														}}}
																													else
																														{	/* Llib/pregexp.scm 436 */
																															if (
																																(BgL_charzd2classzd2_49
																																	==
																																	BGl_keyword3142z00zz__pregexpz00))
																																{	/* Llib/pregexp.scm 458 */
																																	bool_t
																																		BgL__ortest_1882z00_1429;
																																	BgL__ortest_1882z00_1429
																																		=
																																		isdigit
																																		(BgL_cz00_48);
																																	if (BgL__ortest_1882z00_1429)
																																		{	/* Llib/pregexp.scm 458 */
																																			return
																																				BBOOL
																																				(BgL__ortest_1882z00_1429);
																																		}
																																	else
																																		{	/* Llib/pregexp.scm 459 */
																																			bool_t
																																				BgL__ortest_1883z00_1430;
																																			BgL__ortest_1883z00_1430
																																				=
																																				(toupper
																																				(BgL_cz00_48)
																																				==
																																				toupper(
																																					((unsigned char) 'a')));
																																			if (BgL__ortest_1883z00_1430)
																																				{	/* Llib/pregexp.scm 459 */
																																					return
																																						BBOOL
																																						(BgL__ortest_1883z00_1430);
																																				}
																																			else
																																				{	/* Llib/pregexp.scm 459 */
																																					bool_t
																																						BgL__ortest_1884z00_1431;
																																					BgL__ortest_1884z00_1431
																																						=
																																						(toupper
																																						(BgL_cz00_48)
																																						==
																																						toupper
																																						(((unsigned char) 'b')));
																																					if (BgL__ortest_1884z00_1431)
																																						{	/* Llib/pregexp.scm 459 */
																																							return
																																								BBOOL
																																								(BgL__ortest_1884z00_1431);
																																						}
																																					else
																																						{	/* Llib/pregexp.scm 460 */
																																							bool_t
																																								BgL__ortest_1885z00_1432;
																																							BgL__ortest_1885z00_1432
																																								=
																																								(toupper
																																								(BgL_cz00_48)
																																								==
																																								toupper
																																								(((unsigned char) 'c')));
																																							if (BgL__ortest_1885z00_1432)
																																								{	/* Llib/pregexp.scm 460 */
																																									return
																																										BBOOL
																																										(BgL__ortest_1885z00_1432);
																																								}
																																							else
																																								{	/* Llib/pregexp.scm 460 */
																																									bool_t
																																										BgL__ortest_1886z00_1433;
																																									BgL__ortest_1886z00_1433
																																										=
																																										(toupper
																																										(BgL_cz00_48)
																																										==
																																										toupper
																																										(((unsigned char) 'd')));
																																									if (BgL__ortest_1886z00_1433)
																																										{	/* Llib/pregexp.scm 460 */
																																											return
																																												BBOOL
																																												(BgL__ortest_1886z00_1433);
																																										}
																																									else
																																										{	/* Llib/pregexp.scm 461 */
																																											bool_t
																																												BgL__ortest_1887z00_1434;
																																											BgL__ortest_1887z00_1434
																																												=
																																												(toupper
																																												(BgL_cz00_48)
																																												==
																																												toupper
																																												(((unsigned char) 'e')));
																																											if (BgL__ortest_1887z00_1434)
																																												{	/* Llib/pregexp.scm 461 */
																																													return
																																														BBOOL
																																														(BgL__ortest_1887z00_1434);
																																												}
																																											else
																																												{	/* Llib/pregexp.scm 461 */
																																													return
																																														BBOOL
																																														(
																																														(toupper
																																															(BgL_cz00_48)
																																															==
																																															toupper
																																															(((unsigned char) 'f'))));
																																}}}}}}}
																															else
																																{	/* Llib/pregexp.scm 462 */
																																	obj_t
																																		BgL_list2437z00_1435;
																																	BgL_list2437z00_1435
																																		=
																																		MAKE_PAIR
																																		(BgL_charzd2classzd2_49,
																																		BNIL);
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BGl_string3038z00zz__pregexpz00,
																																		BGl_symbol3144z00zz__pregexpz00,
																																		CAR
																																		(BgL_list2437z00_1435));
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
	}



/* pregexp-list-ref */
	obj_t BGl_pregexpzd2listzd2refz00zz__pregexpz00(obj_t BgL_sz00_50,
		obj_t BgL_iz00_51)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 464 */
			{
				obj_t BgL_sz00_2937;

				long BgL_kz00_2938;

				BgL_sz00_2937 = BgL_sz00_50;
				BgL_kz00_2938 = ((long) 0);
			BgL_loopz00_2936:
				if (NULLP(BgL_sz00_2937))
					{	/* Llib/pregexp.scm 468 */
						return BFALSE;
					}
				else
					{	/* Llib/pregexp.scm 468 */
						if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_kz00_2938),
								BgL_iz00_51))
							{	/* Llib/pregexp.scm 468 */
								return CAR(BgL_sz00_2937);
							}
						else
							{
								long BgL_kz00_4887;

								obj_t BgL_sz00_4885;

								BgL_sz00_4885 = CDR(BgL_sz00_2937);
								BgL_kz00_4887 =
									(long)
									CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_kz00_2938),
										BINT(((long) 1))));
								BgL_kz00_2938 = BgL_kz00_4887;
								BgL_sz00_2937 = BgL_sz00_4885;
								goto BgL_loopz00_2936;
							}
					}
			}
		}
	}



/* sub' */
	obj_t BGl_subz72z72zz__pregexpz00(obj_t BgL_rez00_1446)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 485 */
			if (PAIRP(BgL_rez00_1446))
				{	/* Llib/pregexp.scm 487 */
					obj_t BgL_carzd2rezd2_1449;

					obj_t BgL_subzd2cdrzd2rez00_1450;

					BgL_carzd2rezd2_1449 = CAR(BgL_rez00_1446);
					BgL_subzd2cdrzd2rez00_1450 =
						BGl_subz72z72zz__pregexpz00(CDR(BgL_rez00_1446));
					if ((BgL_carzd2rezd2_1449 == BGl_keyword3075z00zz__pregexpz00))
						{	/* Llib/pregexp.scm 490 */
							obj_t BgL_arg2446z00_1452;

							BgL_arg2446z00_1452 = MAKE_PAIR(BgL_rez00_1446, BFALSE);
							return MAKE_PAIR(BgL_arg2446z00_1452, BgL_subzd2cdrzd2rez00_1450);
						}
					else
						{	/* Llib/pregexp.scm 489 */
							return
								bgl_append2(BGl_subz72z72zz__pregexpz00(BgL_carzd2rezd2_1449),
								BgL_subzd2cdrzd2rez00_1450);
						}
				}
			else
				{	/* Llib/pregexp.scm 486 */
					return BNIL;
				}
		}
	}



/* pregexp-match-positions-aux */
	obj_t BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00(obj_t
		BgL_rez00_53, obj_t BgL_sz00_54, long BgL_snz00_55, obj_t BgL_startz00_56,
		obj_t BgL_nz00_57, obj_t BgL_iz00_58)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 494 */
			{	/* Llib/pregexp.scm 496 */
				obj_t BgL_nz00_3859;

				obj_t BgL_snz00_3858;

				BgL_nz00_3859 = MAKE_CELL(BgL_nz00_57);
				{	/* Llib/pregexp.scm 496 */
					obj_t BgL_cellvalz00_4903;

					BgL_cellvalz00_4903 = BINT(BgL_snz00_55);
					BgL_snz00_3858 = MAKE_CELL(BgL_cellvalz00_4903);
				}
				{	/* Llib/pregexp.scm 496 */
					obj_t BgL_backrefsz00_1457;

					obj_t BgL_casezd2sensitivezf3z21_1458;

					BgL_backrefsz00_1457 = BGl_subz72z72zz__pregexpz00(BgL_rez00_53);
					BgL_casezd2sensitivezf3z21_1458 = MAKE_CELL(BTRUE);
					BGl_subz00zz__pregexpz00(BgL_startz00_56, BgL_sz00_54,
						BgL_backrefsz00_1457, BgL_snz00_3858, BGl_proc3146z00zz__pregexpz00,
						BgL_casezd2sensitivezf3z21_1458, BgL_nz00_3859, BgL_rez00_53,
						BgL_iz00_58, BGl_proc3146z00zz__pregexpz00,
						BGl_proc3147z00zz__pregexpz00);
					{	/* Llib/pregexp.scm 671 */
						obj_t BgL_backrefsz00_1701;

						if (NULLP(BgL_backrefsz00_1457))
							{	/* Llib/pregexp.scm 671 */
								BgL_backrefsz00_1701 = BNIL;
							}
						else
							{	/* Llib/pregexp.scm 671 */
								obj_t BgL_head1933z00_1705;

								BgL_head1933z00_1705 =
									MAKE_PAIR(CDR(CAR(BgL_backrefsz00_1457)), BNIL);
								{	/* Llib/pregexp.scm 671 */
									obj_t BgL_g1936z00_1706;

									BgL_g1936z00_1706 = CDR(BgL_backrefsz00_1457);
									{
										obj_t BgL_l1931z00_3238;

										obj_t BgL_tail1934z00_3239;

										BgL_l1931z00_3238 = BgL_g1936z00_1706;
										BgL_tail1934z00_3239 = BgL_head1933z00_1705;
									BgL_zc3anonymousza32611ze3z83_3237:
										if (NULLP(BgL_l1931z00_3238))
											{	/* Llib/pregexp.scm 671 */
												BgL_backrefsz00_1701 = BgL_head1933z00_1705;
											}
										else
											{	/* Llib/pregexp.scm 671 */
												obj_t BgL_newtail1935z00_3247;

												BgL_newtail1935z00_3247 =
													MAKE_PAIR(CDR(CAR(BgL_l1931z00_3238)), BNIL);
												SET_CDR(BgL_tail1934z00_3239, BgL_newtail1935z00_3247);
												{
													obj_t BgL_tail1934z00_4921;

													obj_t BgL_l1931z00_4919;

													BgL_l1931z00_4919 = CDR(BgL_l1931z00_3238);
													BgL_tail1934z00_4921 = BgL_newtail1935z00_3247;
													BgL_tail1934z00_3239 = BgL_tail1934z00_4921;
													BgL_l1931z00_3238 = BgL_l1931z00_4919;
													goto BgL_zc3anonymousza32611ze3z83_3237;
												}
											}
									}
								}
							}
						{	/* Llib/pregexp.scm 672 */
							bool_t BgL_testz00_4922;

							{	/* Llib/pregexp.scm 672 */
								obj_t BgL_pairz00_3290;

								BgL_pairz00_3290 = BgL_backrefsz00_1701;
								BgL_testz00_4922 = CBOOL(CAR(BgL_pairz00_3290));
							}
							if (BgL_testz00_4922)
								{	/* Llib/pregexp.scm 672 */
									return BgL_backrefsz00_1701;
								}
							else
								{	/* Llib/pregexp.scm 672 */
									return BFALSE;
								}
						}
					}
				}
			}
		}
	}



/* loup-one-of-chars */
	obj_t BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(obj_t BgL_fkz00_3658,
		obj_t BgL_skz00_3657, obj_t BgL_iz00_3656, obj_t BgL_startz00_3655,
		obj_t BgL_sz00_3654, obj_t BgL_backrefsz00_3653, obj_t BgL_snz00_3652,
		obj_t BgL_identityz00_3651, obj_t BgL_casezd2sensitivezf3z21_3650,
		obj_t BgL_nz00_3649, obj_t BgL_charsz00_1501)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 541 */
			if (NULLP(BgL_charsz00_1501))
				{	/* Llib/pregexp.scm 542 */
					return PROCEDURE_ENTRY(BgL_fkz00_3658) (BgL_fkz00_3658, BEOA);
				}
			else
				{	/* Llib/pregexp.scm 543 */
					obj_t BgL_arg2486z00_1504;

					BgL_arg2486z00_1504 = CAR(BgL_charsz00_1501);
					{	/* Llib/pregexp.scm 545 */
						obj_t BgL_zc3anonymousza32488ze3z83_3646;

						BgL_zc3anonymousza32488ze3z83_3646 =
							make_fx_procedure(BGl_zc3anonymousza32488ze3z83zz__pregexpz00,
							(int) (((long) 0)), (int) (((long) 11)));
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 0)), BgL_nz00_3649);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3650);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 2)), BgL_identityz00_3651);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 3)), BgL_snz00_3652);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 4)), BgL_backrefsz00_3653);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 5)), BgL_sz00_3654);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 6)), BgL_startz00_3655);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 7)), BgL_iz00_3656);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 8)), BgL_skz00_3657);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 9)), BgL_fkz00_3658);
						PROCEDURE_SET(BgL_zc3anonymousza32488ze3z83_3646,
							(int) (((long) 10)), BgL_charsz00_1501);
						return
							BGl_subz00zz__pregexpz00(BgL_startz00_3655, BgL_sz00_3654,
							BgL_backrefsz00_3653, BgL_snz00_3652, BgL_identityz00_3651,
							BgL_casezd2sensitivezf3z21_3650, BgL_nz00_3649,
							BgL_arg2486z00_1504, BgL_iz00_3656, BgL_skz00_3657,
							BgL_zc3anonymousza32488ze3z83_3646);
					}
				}
		}
	}



/* sub */
	obj_t BGl_subz00zz__pregexpz00(obj_t BgL_startz00_3665, obj_t BgL_sz00_3664,
		obj_t BgL_backrefsz00_3663, obj_t BgL_snz00_3662,
		obj_t BgL_identityz00_3661, obj_t BgL_casezd2sensitivezf3z21_3660,
		obj_t BgL_nz00_3659, obj_t BgL_rez00_1461, obj_t BgL_iz00_1462,
		obj_t BgL_skz00_1463, obj_t BgL_fkz00_1464)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 499 */
		BGl_subz00zz__pregexpz00:
			if ((BgL_rez00_1461 == BGl_keyword3045z00zz__pregexpz00))
				{	/* Llib/pregexp.scm 501 */
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_1462,
							BgL_startz00_3665))
						{	/* Llib/pregexp.scm 503 */
							return
								PROCEDURE_ENTRY(BgL_skz00_1463) (BgL_skz00_1463, BgL_iz00_1462,
								BEOA);
						}
					else
						{	/* Llib/pregexp.scm 503 */
							return PROCEDURE_ENTRY(BgL_fkz00_1464) (BgL_fkz00_1464, BEOA);
						}
				}
			else
				{	/* Llib/pregexp.scm 501 */
					if ((BgL_rez00_1461 == BGl_keyword3047z00zz__pregexpz00))
						{	/* Llib/pregexp.scm 505 */
							if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462,
									CELL_REF(BgL_nz00_3659)))
								{	/* Llib/pregexp.scm 507 */
									return
										PROCEDURE_ENTRY(BgL_skz00_1463) (BgL_skz00_1463,
										BgL_iz00_1462, BEOA);
								}
							else
								{	/* Llib/pregexp.scm 507 */
									return PROCEDURE_ENTRY(BgL_fkz00_1464) (BgL_fkz00_1464, BEOA);
								}
						}
					else
						{	/* Llib/pregexp.scm 505 */
							if ((BgL_rez00_1461 == BGl_keyword3043z00zz__pregexpz00))
								{	/* Llib/pregexp.scm 509 */
									return
										PROCEDURE_ENTRY(BgL_skz00_1463) (BgL_skz00_1463,
										BgL_iz00_1462, BEOA);
								}
							else
								{	/* Llib/pregexp.scm 509 */
									if ((BgL_rez00_1461 == BGl_keyword3059z00zz__pregexpz00))
										{	/* Llib/pregexp.scm 511 */
											if (CBOOL
												(BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00
													(BgL_sz00_3664, BgL_iz00_1462,
														CELL_REF(BgL_nz00_3659))))
												{	/* Llib/pregexp.scm 512 */
													return
														PROCEDURE_ENTRY(BgL_skz00_1463) (BgL_skz00_1463,
														BgL_iz00_1462, BEOA);
												}
											else
												{	/* Llib/pregexp.scm 512 */
													return
														PROCEDURE_ENTRY(BgL_fkz00_1464) (BgL_fkz00_1464,
														BEOA);
												}
										}
									else
										{	/* Llib/pregexp.scm 511 */
											if ((BgL_rez00_1461 == BGl_keyword3061z00zz__pregexpz00))
												{	/* Llib/pregexp.scm 515 */
													if (CBOOL
														(BGl_pregexpzd2atzd2wordzd2boundaryzf3z21zz__pregexpz00
															(BgL_sz00_3664, BgL_iz00_1462,
																CELL_REF(BgL_nz00_3659))))
														{	/* Llib/pregexp.scm 516 */
															return
																PROCEDURE_ENTRY(BgL_fkz00_1464) (BgL_fkz00_1464,
																BEOA);
														}
													else
														{	/* Llib/pregexp.scm 516 */
															return
																PROCEDURE_ENTRY(BgL_skz00_1463) (BgL_skz00_1463,
																BgL_iz00_1462, BEOA);
														}
												}
											else
												{	/* Llib/pregexp.scm 519 */
													bool_t BgL_testz00_4994;

													if (CHARP(BgL_rez00_1461))
														{	/* Llib/pregexp.scm 519 */
															BgL_testz00_4994 =
																BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_iz00_1462,
																CELL_REF(BgL_nz00_3659));
														}
													else
														{	/* Llib/pregexp.scm 519 */
															BgL_testz00_4994 = ((bool_t) 0);
														}
													if (BgL_testz00_4994)
														{	/* Llib/pregexp.scm 521 */
															bool_t BgL_testz00_4998;

															{	/* Llib/pregexp.scm 521 */
																obj_t BgL_fun2463z00_1478;

																if (CBOOL(CELL_REF
																		(BgL_casezd2sensitivezf3z21_3660)))
																	{	/* Llib/pregexp.scm 521 */
																		BgL_fun2463z00_1478 =
																			BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00;
																	}
																else
																	{	/* Llib/pregexp.scm 521 */
																		BgL_fun2463z00_1478 =
																			BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00;
																	}
																{	/* Llib/pregexp.scm 522 */
																	unsigned char BgL_arg2462z00_1479;

																	BgL_arg2462z00_1479 =
																		STRING_REF(BgL_sz00_3664,
																		(long) CINT(BgL_iz00_1462));
																	BgL_testz00_4998 =
																		CBOOL(PROCEDURE_ENTRY(BgL_fun2463z00_1478)
																		(BgL_fun2463z00_1478,
																			BCHAR(BgL_arg2462z00_1479),
																			BgL_rez00_1461, BEOA));
															}}
															if (BgL_testz00_4998)
																{	/* Llib/pregexp.scm 523 */
																	obj_t BgL_arg2461z00_1477;

																	BgL_arg2461z00_1477 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00
																		(BgL_iz00_1462, BINT(((long) 1)));
																	return
																		PROCEDURE_ENTRY(BgL_skz00_1463)
																		(BgL_skz00_1463, BgL_arg2461z00_1477, BEOA);
																}
															else
																{	/* Llib/pregexp.scm 521 */
																	return
																		PROCEDURE_ENTRY(BgL_fkz00_1464)
																		(BgL_fkz00_1464, BEOA);
																}
														}
													else
														{	/* Llib/pregexp.scm 524 */
															bool_t BgL_testz00_5013;

															if (PAIRP(BgL_rez00_1461))
																{	/* Llib/pregexp.scm 524 */
																	BgL_testz00_5013 = ((bool_t) 0);
																}
															else
																{	/* Llib/pregexp.scm 524 */
																	BgL_testz00_5013 =
																		BGl_2zc3zc3zz__r4_numbers_6_5z00
																		(BgL_iz00_1462, CELL_REF(BgL_nz00_3659));
																}
															if (BgL_testz00_5013)
																{	/* Llib/pregexp.scm 525 */
																	bool_t BgL_testz00_5017;

																	{	/* Llib/pregexp.scm 526 */
																		unsigned char BgL_arg2469z00_1483;

																		BgL_arg2469z00_1483 =
																			STRING_REF(BgL_sz00_3664,
																			(long) CINT(BgL_iz00_1462));
																		BgL_testz00_5017 =
																			CBOOL
																			(BGl_pregexpzd2checkzd2ifzd2inzd2charzd2classzf3z21zz__pregexpz00
																			(BgL_arg2469z00_1483, BgL_rez00_1461));
																	}
																	if (BgL_testz00_5017)
																		{	/* Llib/pregexp.scm 527 */
																			obj_t BgL_arg2467z00_1482;

																			BgL_arg2467z00_1482 =
																				BGl_2zb2zb2zz__r4_numbers_6_5z00
																				(BgL_iz00_1462, BINT(((long) 1)));
																			return
																				PROCEDURE_ENTRY(BgL_skz00_1463)
																				(BgL_skz00_1463, BgL_arg2467z00_1482,
																				BEOA);
																		}
																	else
																		{	/* Llib/pregexp.scm 525 */
																			return
																				PROCEDURE_ENTRY(BgL_fkz00_1464)
																				(BgL_fkz00_1464, BEOA);
																		}
																}
															else
																{	/* Llib/pregexp.scm 528 */
																	bool_t BgL_testz00_5028;

																	if (PAIRP(BgL_rez00_1461))
																		{	/* Llib/pregexp.scm 528 */
																			if (
																				(CAR(BgL_rez00_1461) ==
																					BGl_keyword3120z00zz__pregexpz00))
																				{	/* Llib/pregexp.scm 528 */
																					BgL_testz00_5028 =
																						BGl_2zc3zc3zz__r4_numbers_6_5z00
																						(BgL_iz00_1462,
																						CELL_REF(BgL_nz00_3659));
																				}
																			else
																				{	/* Llib/pregexp.scm 528 */
																					BgL_testz00_5028 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Llib/pregexp.scm 528 */
																			BgL_testz00_5028 = ((bool_t) 0);
																		}
																	if (BgL_testz00_5028)
																		{	/* Llib/pregexp.scm 529 */
																			unsigned char BgL_cz00_1485;

																			BgL_cz00_1485 =
																				STRING_REF(BgL_sz00_3664,
																				(long) CINT(BgL_iz00_1462));
																			{	/* Llib/pregexp.scm 530 */
																				bool_t BgL_testz00_5037;

																				{	/* Llib/pregexp.scm 530 */
																					obj_t BgL_czc3zc3_1488;

																					if (CBOOL(CELL_REF
																							(BgL_casezd2sensitivezf3z21_3660)))
																						{	/* Llib/pregexp.scm 530 */
																							BgL_czc3zc3_1488 =
																								BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00;
																						}
																					else
																						{	/* Llib/pregexp.scm 530 */
																							BgL_czc3zc3_1488 =
																								BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00;
																						}
																					{	/* Llib/pregexp.scm 531 */
																						obj_t BgL__andtest_1889z00_1489;

																						{	/* Llib/pregexp.scm 531 */
																							obj_t BgL_arg2477z00_1491;

																							BgL_arg2477z00_1491 =
																								CAR(CDR(BgL_rez00_1461));
																							BgL__andtest_1889z00_1489 =
																								PROCEDURE_ENTRY
																								(BgL_czc3zc3_1488)
																								(BgL_czc3zc3_1488,
																								BgL_arg2477z00_1491,
																								BCHAR(BgL_cz00_1485), BEOA);
																						}
																						if (CBOOL
																							(BgL__andtest_1889z00_1489))
																							{	/* Llib/pregexp.scm 532 */
																								obj_t BgL_arg2476z00_1490;

																								BgL_arg2476z00_1490 =
																									CAR(CDR(CDR(BgL_rez00_1461)));
																								BgL_testz00_5037 =
																									CBOOL(PROCEDURE_ENTRY
																									(BgL_czc3zc3_1488)
																									(BgL_czc3zc3_1488,
																										BCHAR(BgL_cz00_1485),
																										BgL_arg2476z00_1490, BEOA));
																							}
																						else
																							{	/* Llib/pregexp.scm 531 */
																								BgL_testz00_5037 = ((bool_t) 0);
																							}
																					}
																				}
																				if (BgL_testz00_5037)
																					{	/* Llib/pregexp.scm 533 */
																						obj_t BgL_arg2472z00_1487;

																						BgL_arg2472z00_1487 =
																							BGl_2zb2zb2zz__r4_numbers_6_5z00
																							(BgL_iz00_1462, BINT(((long) 1)));
																						return
																							PROCEDURE_ENTRY(BgL_skz00_1463)
																							(BgL_skz00_1463,
																							BgL_arg2472z00_1487, BEOA);
																					}
																				else
																					{	/* Llib/pregexp.scm 530 */
																						return
																							PROCEDURE_ENTRY(BgL_fkz00_1464)
																							(BgL_fkz00_1464, BEOA);
																					}
																			}
																		}
																	else
																		{	/* Llib/pregexp.scm 528 */
																			if (PAIRP(BgL_rez00_1461))
																				{	/* Llib/pregexp.scm 535 */
																					obj_t BgL_casezd2valuezd2_1493;

																					BgL_casezd2valuezd2_1493 =
																						CAR(BgL_rez00_1461);
																					if (
																						(BgL_casezd2valuezd2_1493 ==
																							BGl_keyword3120z00zz__pregexpz00))
																						{	/* Llib/pregexp.scm 535 */
																							if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, CELL_REF(BgL_nz00_3659)))
																								{	/* Llib/pregexp.scm 537 */
																									return
																										PROCEDURE_ENTRY
																										(BgL_fkz00_1464)
																										(BgL_fkz00_1464, BEOA);
																								}
																							else
																								{	/* Llib/pregexp.scm 537 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string3038z00zz__pregexpz00,
																										BGl_symbol3148z00zz__pregexpz00,
																										BUNSPEC);
																								}
																						}
																					else
																						{	/* Llib/pregexp.scm 535 */
																							if (
																								(BgL_casezd2valuezd2_1493 ==
																									BGl_keyword3118z00zz__pregexpz00))
																								{	/* Llib/pregexp.scm 535 */
																									if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, CELL_REF(BgL_nz00_3659)))
																										{	/* Llib/pregexp.scm 540 */
																											return
																												PROCEDURE_ENTRY
																												(BgL_fkz00_1464)
																												(BgL_fkz00_1464, BEOA);
																										}
																									else
																										{	/* Llib/pregexp.scm 541 */
																											obj_t BgL_g1890z00_1499;

																											BgL_g1890z00_1499 =
																												CDR(BgL_rez00_1461);
																											return
																												BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00
																												(BgL_fkz00_1464,
																												BgL_skz00_1463,
																												BgL_iz00_1462,
																												BgL_startz00_3665,
																												BgL_sz00_3664,
																												BgL_backrefsz00_3663,
																												BgL_snz00_3662,
																												BgL_identityz00_3661,
																												BgL_casezd2sensitivezf3z21_3660,
																												BgL_nz00_3659,
																												BgL_g1890z00_1499);
																										}
																								}
																							else
																								{	/* Llib/pregexp.scm 535 */
																									if (
																										(BgL_casezd2valuezd2_1493 ==
																											BGl_keyword3051z00zz__pregexpz00))
																										{	/* Llib/pregexp.scm 535 */
																											if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, CELL_REF(BgL_nz00_3659)))
																												{	/* Llib/pregexp.scm 547 */
																													return
																														PROCEDURE_ENTRY
																														(BgL_fkz00_1464)
																														(BgL_fkz00_1464,
																														BEOA);
																												}
																											else
																												{	/* Llib/pregexp.scm 548 */
																													obj_t
																														BgL_arg2492z00_1512;
																													BgL_arg2492z00_1512 =
																														CAR(CDR
																														(BgL_rez00_1461));
																													{	/* Llib/pregexp.scm 549 */
																														obj_t
																															BgL_zc3anonymousza32495ze3z83_3623;
																														obj_t
																															BgL_zc3anonymousza32496ze3z83_3622;
																														BgL_zc3anonymousza32495ze3z83_3623
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza32495ze3z83zz__pregexpz00,
																															(int) (((long)
																																	1)),
																															(int) (((long)
																																	1)));
																														BgL_zc3anonymousza32496ze3z83_3622
																															=
																															make_fx_procedure
																															(BGl_zc3anonymousza32496ze3z83zz__pregexpz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	2)));
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32495ze3z83_3623,
																															(int) (((long)
																																	0)),
																															BgL_fkz00_1464);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32496ze3z83_3622,
																															(int) (((long)
																																	0)),
																															BgL_iz00_1462);
																														PROCEDURE_SET
																															(BgL_zc3anonymousza32496ze3z83_3622,
																															(int) (((long)
																																	1)),
																															BgL_skz00_1463);
																														{
																															obj_t
																																BgL_fkz00_5100;
																															obj_t
																																BgL_skz00_5099;
																															obj_t
																																BgL_rez00_5098;
																															BgL_rez00_5098 =
																																BgL_arg2492z00_1512;
																															BgL_skz00_5099 =
																																BgL_zc3anonymousza32495ze3z83_3623;
																															BgL_fkz00_5100 =
																																BgL_zc3anonymousza32496ze3z83_3622;
																															BgL_fkz00_1464 =
																																BgL_fkz00_5100;
																															BgL_skz00_1463 =
																																BgL_skz00_5099;
																															BgL_rez00_1461 =
																																BgL_rez00_5098;
																															goto
																																BGl_subz00zz__pregexpz00;
																														}
																													}
																												}
																										}
																									else
																										{	/* Llib/pregexp.scm 535 */
																											if (
																												(BgL_casezd2valuezd2_1493
																													==
																													BGl_keyword3041z00zz__pregexpz00))
																												{	/* Llib/pregexp.scm 552 */
																													obj_t
																														BgL_g1891z00_1522;
																													BgL_g1891z00_1522 =
																														CDR(BgL_rez00_1461);
																													return
																														BGl_loupzd2seqzd2zz__pregexpz00
																														(BgL_skz00_1463,
																														BgL_fkz00_1464,
																														BgL_startz00_3665,
																														BgL_sz00_3664,
																														BgL_backrefsz00_3663,
																														BgL_snz00_3662,
																														BgL_identityz00_3661,
																														BgL_casezd2sensitivezf3z21_3660,
																														BgL_nz00_3659,
																														BgL_g1891z00_1522,
																														BgL_iz00_1462);
																												}
																											else
																												{	/* Llib/pregexp.scm 535 */
																													if (
																														(BgL_casezd2valuezd2_1493
																															==
																															BGl_keyword3039z00zz__pregexpz00))
																														{	/* Llib/pregexp.scm 559 */
																															obj_t
																																BgL_g1892z00_1536;
																															BgL_g1892z00_1536
																																=
																																CDR
																																(BgL_rez00_1461);
																															return
																																BGl_loupzd2orzd2zz__pregexpz00
																																(BgL_fkz00_1464,
																																BgL_iz00_1462,
																																BgL_skz00_1463,
																																BgL_startz00_3665,
																																BgL_sz00_3664,
																																BgL_backrefsz00_3663,
																																BgL_snz00_3662,
																																BgL_identityz00_3661,
																																BgL_casezd2sensitivezf3z21_3660,
																																BgL_nz00_3659,
																																BgL_g1892z00_1536);
																														}
																													else
																														{	/* Llib/pregexp.scm 535 */
																															if (
																																(BgL_casezd2valuezd2_1493
																																	==
																																	BGl_keyword3053z00zz__pregexpz00))
																																{	/* Llib/pregexp.scm 567 */
																																	obj_t
																																		BgL_cz00_1554;
																																	BgL_cz00_1554
																																		=
																																		BGl_pregexpzd2listzd2refz00zz__pregexpz00
																																		(BgL_backrefsz00_3663,
																																		CAR(CDR
																																			(BgL_rez00_1461)));
																																	{	/* Llib/pregexp.scm 567 */
																																		obj_t
																																			BgL_backrefz00_1555;
																																		if (CBOOL
																																			(BgL_cz00_1554))
																																			{	/* Llib/pregexp.scm 569 */
																																				BgL_backrefz00_1555
																																					=
																																					CDR
																																					(BgL_cz00_1554);
																																			}
																																		else
																																			{	/* Llib/pregexp.scm 569 */
																																				{	/* Llib/pregexp.scm 572 */
																																					obj_t
																																						BgL_list2521z00_1565;
																																					{	/* Llib/pregexp.scm 572 */
																																						obj_t
																																							BgL_arg2522z00_1566;
																																						obj_t
																																							BgL_arg2523z00_1567;
																																						BgL_arg2522z00_1566
																																							=
																																							BGl_symbol3150z00zz__pregexpz00;
																																						BgL_arg2523z00_1567
																																							=
																																							MAKE_PAIR
																																							(BgL_rez00_1461,
																																							BNIL);
																																						BgL_list2521z00_1565
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2522z00_1566,
																																							BgL_arg2523z00_1567);
																																					}
																																					BGl_errorz00zz__errorz00
																																						(BGl_string3038z00zz__pregexpz00,
																																						BGl_symbol3148z00zz__pregexpz00,
																																						CAR
																																						(BgL_list2521z00_1565));
																																				}
																																				BgL_backrefz00_1555
																																					=
																																					BFALSE;
																																			}
																																		{	/* Llib/pregexp.scm 568 */

																																			if (CBOOL
																																				(BgL_backrefz00_1555))
																																				{	/* Llib/pregexp.scm 576 */
																																					obj_t
																																						BgL_arg2516z00_1556;
																																					{	/* Llib/pregexp.scm 576 */
																																						obj_t
																																							BgL_arg2518z00_1558;
																																						obj_t
																																							BgL_arg2519z00_1559;
																																						BgL_arg2518z00_1558
																																							=
																																							CAR
																																							(BgL_backrefz00_1555);
																																						BgL_arg2519z00_1559
																																							=
																																							CDR
																																							(BgL_backrefz00_1555);
																																						BgL_arg2516z00_1556
																																							=
																																							c_substring
																																							(BgL_sz00_3664,
																																							(long)
																																							CINT
																																							(BgL_arg2518z00_1558),
																																							(long)
																																							CINT
																																							(BgL_arg2519z00_1559));
																																					}
																																					{	/* Llib/pregexp.scm 575 */
																																						obj_t
																																							BgL_nz00_3100;
																																						BgL_nz00_3100
																																							=
																																							CELL_REF
																																							(BgL_nz00_3659);
																																						{	/* Llib/pregexp.scm 575 */
																																							long
																																								BgL_n1z00_3102;
																																							BgL_n1z00_3102
																																								=
																																								STRING_LENGTH
																																								(BgL_arg2516z00_1556);
																																							if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_n1z00_3102), BgL_nz00_3100))
																																								{	/* Llib/pregexp.scm 575 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_fkz00_1464)
																																										(BgL_fkz00_1464,
																																										BEOA);
																																								}
																																							else
																																								{	/* Llib/pregexp.scm 575 */
																																									return
																																										BGl_loopz00zz__pregexpz00
																																										(BgL_n1z00_3102,
																																										BgL_skz00_1463,
																																										BgL_nz00_3100,
																																										BgL_sz00_3664,
																																										BgL_arg2516z00_1556,
																																										BgL_fkz00_1464,
																																										((long) 0), BgL_iz00_1462);
																																				}}}}
																																			else
																																				{	/* Llib/pregexp.scm 574 */
																																					return
																																						PROCEDURE_ENTRY
																																						(BgL_skz00_1463)
																																						(BgL_skz00_1463,
																																						BgL_iz00_1462,
																																						BEOA);
																																				}
																																		}
																																	}
																																}
																															else
																																{	/* Llib/pregexp.scm 535 */
																																	if (
																																		(BgL_casezd2valuezd2_1493
																																			==
																																			BGl_keyword3075z00zz__pregexpz00))
																																		{	/* Llib/pregexp.scm 580 */
																																			obj_t
																																				BgL_arg2526z00_1570;
																																			BgL_arg2526z00_1570
																																				=
																																				CAR(CDR
																																				(BgL_rez00_1461));
																																			{	/* Llib/pregexp.scm 582 */
																																				obj_t
																																					BgL_zc3anonymousza32528ze3z83_3624;
																																				BgL_zc3anonymousza32528ze3z83_3624
																																					=
																																					make_fx_procedure
																																					(BGl_zc3anonymousza32528ze3z83zz__pregexpz00,
																																					(int)
																																					(((long) 1)), (int) (((long) 4)));
																																				PROCEDURE_SET
																																					(BgL_zc3anonymousza32528ze3z83_3624,
																																					(int)
																																					(((long) 0)), BgL_rez00_1461);
																																				PROCEDURE_SET
																																					(BgL_zc3anonymousza32528ze3z83_3624,
																																					(int)
																																					(((long) 1)), BgL_backrefsz00_3663);
																																				PROCEDURE_SET
																																					(BgL_zc3anonymousza32528ze3z83_3624,
																																					(int)
																																					(((long) 2)), BgL_iz00_1462);
																																				PROCEDURE_SET
																																					(BgL_zc3anonymousza32528ze3z83_3624,
																																					(int)
																																					(((long) 3)), BgL_skz00_1463);
																																				{
																																					obj_t
																																						BgL_skz00_5153;
																																					obj_t
																																						BgL_rez00_5152;
																																					BgL_rez00_5152
																																						=
																																						BgL_arg2526z00_1570;
																																					BgL_skz00_5153
																																						=
																																						BgL_zc3anonymousza32528ze3z83_3624;
																																					BgL_skz00_1463
																																						=
																																						BgL_skz00_5153;
																																					BgL_rez00_1461
																																						=
																																						BgL_rez00_5152;
																																					goto
																																						BGl_subz00zz__pregexpz00;
																																				}
																																			}
																																		}
																																	else
																																		{	/* Llib/pregexp.scm 535 */
																																			if (
																																				(BgL_casezd2valuezd2_1493
																																					==
																																					BGl_keyword3084z00zz__pregexpz00))
																																				{	/* Llib/pregexp.scm 585 */
																																					obj_t
																																						BgL_foundzd2itzf3z21_1578;
																																					{	/* Llib/pregexp.scm 586 */
																																						obj_t
																																							BgL_arg2532z00_1579;
																																						BgL_arg2532z00_1579
																																							=
																																							CAR
																																							(CDR
																																							(BgL_rez00_1461));
																																						BgL_foundzd2itzf3z21_1578
																																							=
																																							BGl_subz00zz__pregexpz00
																																							(BgL_startz00_3665,
																																							BgL_sz00_3664,
																																							BgL_backrefsz00_3663,
																																							BgL_snz00_3662,
																																							BgL_identityz00_3661,
																																							BgL_casezd2sensitivezf3z21_3660,
																																							BgL_nz00_3659,
																																							BgL_arg2532z00_1579,
																																							BgL_iz00_1462,
																																							BgL_identityz00_3661,
																																							BGl_proc3152z00zz__pregexpz00);
																																					}
																																					if (CBOOL(BgL_foundzd2itzf3z21_1578))
																																						{	/* Llib/pregexp.scm 588 */
																																							return
																																								PROCEDURE_ENTRY
																																								(BgL_skz00_1463)
																																								(BgL_skz00_1463,
																																								BgL_iz00_1462,
																																								BEOA);
																																						}
																																					else
																																						{	/* Llib/pregexp.scm 588 */
																																							return
																																								PROCEDURE_ENTRY
																																								(BgL_fkz00_1464)
																																								(BgL_fkz00_1464,
																																								BEOA);
																																						}
																																				}
																																			else
																																				{	/* Llib/pregexp.scm 535 */
																																					if (
																																						(BgL_casezd2valuezd2_1493
																																							==
																																							BGl_keyword3087z00zz__pregexpz00))
																																						{	/* Llib/pregexp.scm 590 */
																																							obj_t
																																								BgL_foundzd2itzf3z21_1584;
																																							{	/* Llib/pregexp.scm 591 */
																																								obj_t
																																									BgL_arg2536z00_1585;
																																								BgL_arg2536z00_1585
																																									=
																																									CAR
																																									(CDR
																																									(BgL_rez00_1461));
																																								BgL_foundzd2itzf3z21_1584
																																									=
																																									BGl_subz00zz__pregexpz00
																																									(BgL_startz00_3665,
																																									BgL_sz00_3664,
																																									BgL_backrefsz00_3663,
																																									BgL_snz00_3662,
																																									BgL_identityz00_3661,
																																									BgL_casezd2sensitivezf3z21_3660,
																																									BgL_nz00_3659,
																																									BgL_arg2536z00_1585,
																																									BgL_iz00_1462,
																																									BgL_identityz00_3661,
																																									BGl_proc3153z00zz__pregexpz00);
																																							}
																																							if (CBOOL(BgL_foundzd2itzf3z21_1584))
																																								{	/* Llib/pregexp.scm 593 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_fkz00_1464)
																																										(BgL_fkz00_1464,
																																										BEOA);
																																								}
																																							else
																																								{	/* Llib/pregexp.scm 593 */
																																									return
																																										PROCEDURE_ENTRY
																																										(BgL_skz00_1463)
																																										(BgL_skz00_1463,
																																										BgL_iz00_1462,
																																										BEOA);
																																								}
																																						}
																																					else
																																						{	/* Llib/pregexp.scm 535 */
																																							if ((BgL_casezd2valuezd2_1493 == BGl_keyword3093z00zz__pregexpz00))
																																								{	/* Llib/pregexp.scm 595 */
																																									obj_t
																																										BgL_nzd2actualzd2_1590;
																																									obj_t
																																										BgL_snzd2actualzd2_1591;
																																									BgL_nzd2actualzd2_1590
																																										=
																																										CELL_REF
																																										(BgL_nz00_3659);
																																									BgL_snzd2actualzd2_1591
																																										=
																																										CELL_REF
																																										(BgL_snz00_3662);
																																									CELL_SET
																																										(BgL_nz00_3659,
																																										BgL_iz00_1462);
																																									CELL_SET
																																										(BgL_snz00_3662,
																																										BgL_iz00_1462);
																																									{	/* Llib/pregexp.scm 597 */
																																										obj_t
																																											BgL_foundzd2itzf3z21_1592;
																																										{	/* Llib/pregexp.scm 598 */
																																											obj_t
																																												BgL_arg2540z00_1593;
																																											{	/* Llib/pregexp.scm 598 */
																																												obj_t
																																													BgL_arg2543z00_1596;
																																												obj_t
																																													BgL_arg2544z00_1597;
																																												obj_t
																																													BgL_arg2545z00_1598;
																																												obj_t
																																													BgL_arg2546z00_1599;
																																												BgL_arg2543z00_1596
																																													=
																																													BGl_keyword3041z00zz__pregexpz00;
																																												BgL_arg2544z00_1597
																																													=
																																													BGl_list3154z00zz__pregexpz00;
																																												BgL_arg2545z00_1598
																																													=
																																													CAR
																																													(CDR
																																													(BgL_rez00_1461));
																																												BgL_arg2546z00_1599
																																													=
																																													BGl_keyword3047z00zz__pregexpz00;
																																												{	/* Llib/pregexp.scm 598 */
																																													obj_t
																																														BgL_list2547z00_1600;
																																													{	/* Llib/pregexp.scm 598 */
																																														obj_t
																																															BgL_arg2548z00_1601;
																																														{	/* Llib/pregexp.scm 598 */
																																															obj_t
																																																BgL_arg2549z00_1602;
																																															{	/* Llib/pregexp.scm 598 */
																																																obj_t
																																																	BgL_arg2550z00_1603;
																																																BgL_arg2550z00_1603
																																																	=
																																																	MAKE_PAIR
																																																	(BgL_arg2546z00_1599,
																																																	BNIL);
																																																BgL_arg2549z00_1602
																																																	=
																																																	MAKE_PAIR
																																																	(BgL_arg2545z00_1598,
																																																	BgL_arg2550z00_1603);
																																															}
																																															BgL_arg2548z00_1601
																																																=
																																																MAKE_PAIR
																																																(BgL_arg2544z00_1597,
																																																BgL_arg2549z00_1602);
																																														}
																																														BgL_list2547z00_1600
																																															=
																																															MAKE_PAIR
																																															(BgL_arg2543z00_1596,
																																															BgL_arg2548z00_1601);
																																													}
																																													BgL_arg2540z00_1593
																																														=
																																														BgL_list2547z00_1600;
																																												}
																																											}
																																											BgL_foundzd2itzf3z21_1592
																																												=
																																												BGl_subz00zz__pregexpz00
																																												(BgL_startz00_3665,
																																												BgL_sz00_3664,
																																												BgL_backrefsz00_3663,
																																												BgL_snz00_3662,
																																												BgL_identityz00_3661,
																																												BgL_casezd2sensitivezf3z21_3660,
																																												BgL_nz00_3659,
																																												BgL_arg2540z00_1593,
																																												BINT
																																												(((long) 0)), BgL_identityz00_3661, BGl_proc3155z00zz__pregexpz00);
																																										}
																																										CELL_SET
																																											(BgL_nz00_3659,
																																											BgL_nzd2actualzd2_1590);
																																										CELL_SET
																																											(BgL_snz00_3662,
																																											BgL_snzd2actualzd2_1591);
																																										if (CBOOL(BgL_foundzd2itzf3z21_1592))
																																											{	/* Llib/pregexp.scm 602 */
																																												return
																																													PROCEDURE_ENTRY
																																													(BgL_skz00_1463)
																																													(BgL_skz00_1463,
																																													BgL_iz00_1462,
																																													BEOA);
																																											}
																																										else
																																											{	/* Llib/pregexp.scm 602 */
																																												return
																																													PROCEDURE_ENTRY
																																													(BgL_fkz00_1464)
																																													(BgL_fkz00_1464,
																																													BEOA);
																																											}
																																									}
																																								}
																																							else
																																								{	/* Llib/pregexp.scm 535 */
																																									if ((BgL_casezd2valuezd2_1493 == BGl_keyword3096z00zz__pregexpz00))
																																										{	/* Llib/pregexp.scm 604 */
																																											obj_t
																																												BgL_nzd2actualzd2_1607;
																																											obj_t
																																												BgL_snzd2actualzd2_1608;
																																											BgL_nzd2actualzd2_1607
																																												=
																																												CELL_REF
																																												(BgL_nz00_3659);
																																											BgL_snzd2actualzd2_1608
																																												=
																																												CELL_REF
																																												(BgL_snz00_3662);
																																											CELL_SET
																																												(BgL_nz00_3659,
																																												BgL_iz00_1462);
																																											CELL_SET
																																												(BgL_snz00_3662,
																																												BgL_iz00_1462);
																																											{	/* Llib/pregexp.scm 606 */
																																												obj_t
																																													BgL_foundzd2itzf3z21_1609;
																																												{	/* Llib/pregexp.scm 607 */
																																													obj_t
																																														BgL_arg2553z00_1610;
																																													{	/* Llib/pregexp.scm 607 */
																																														obj_t
																																															BgL_arg2556z00_1613;
																																														obj_t
																																															BgL_arg2557z00_1614;
																																														obj_t
																																															BgL_arg2558z00_1615;
																																														obj_t
																																															BgL_arg2559z00_1616;
																																														BgL_arg2556z00_1613
																																															=
																																															BGl_keyword3041z00zz__pregexpz00;
																																														BgL_arg2557z00_1614
																																															=
																																															BGl_list3154z00zz__pregexpz00;
																																														BgL_arg2558z00_1615
																																															=
																																															CAR
																																															(CDR
																																															(BgL_rez00_1461));
																																														BgL_arg2559z00_1616
																																															=
																																															BGl_keyword3047z00zz__pregexpz00;
																																														{	/* Llib/pregexp.scm 607 */
																																															obj_t
																																																BgL_list2560z00_1617;
																																															{	/* Llib/pregexp.scm 607 */
																																																obj_t
																																																	BgL_arg2561z00_1618;
																																																{	/* Llib/pregexp.scm 607 */
																																																	obj_t
																																																		BgL_arg2562z00_1619;
																																																	{	/* Llib/pregexp.scm 607 */
																																																		obj_t
																																																			BgL_arg2563z00_1620;
																																																		BgL_arg2563z00_1620
																																																			=
																																																			MAKE_PAIR
																																																			(BgL_arg2559z00_1616,
																																																			BNIL);
																																																		BgL_arg2562z00_1619
																																																			=
																																																			MAKE_PAIR
																																																			(BgL_arg2558z00_1615,
																																																			BgL_arg2563z00_1620);
																																																	}
																																																	BgL_arg2561z00_1618
																																																		=
																																																		MAKE_PAIR
																																																		(BgL_arg2557z00_1614,
																																																		BgL_arg2562z00_1619);
																																																}
																																																BgL_list2560z00_1617
																																																	=
																																																	MAKE_PAIR
																																																	(BgL_arg2556z00_1613,
																																																	BgL_arg2561z00_1618);
																																															}
																																															BgL_arg2553z00_1610
																																																=
																																																BgL_list2560z00_1617;
																																														}
																																													}
																																													BgL_foundzd2itzf3z21_1609
																																														=
																																														BGl_subz00zz__pregexpz00
																																														(BgL_startz00_3665,
																																														BgL_sz00_3664,
																																														BgL_backrefsz00_3663,
																																														BgL_snz00_3662,
																																														BgL_identityz00_3661,
																																														BgL_casezd2sensitivezf3z21_3660,
																																														BgL_nz00_3659,
																																														BgL_arg2553z00_1610,
																																														BINT
																																														(((long) 0)), BgL_identityz00_3661, BGl_proc3156z00zz__pregexpz00);
																																												}
																																												CELL_SET
																																													(BgL_nz00_3659,
																																													BgL_nzd2actualzd2_1607);
																																												CELL_SET
																																													(BgL_snz00_3662,
																																													BgL_snzd2actualzd2_1608);
																																												if (CBOOL(BgL_foundzd2itzf3z21_1609))
																																													{	/* Llib/pregexp.scm 611 */
																																														return
																																															PROCEDURE_ENTRY
																																															(BgL_fkz00_1464)
																																															(BgL_fkz00_1464,
																																															BEOA);
																																													}
																																												else
																																													{	/* Llib/pregexp.scm 611 */
																																														return
																																															PROCEDURE_ENTRY
																																															(BgL_skz00_1463)
																																															(BgL_skz00_1463,
																																															BgL_iz00_1462,
																																															BEOA);
																																													}
																																											}
																																										}
																																									else
																																										{	/* Llib/pregexp.scm 535 */
																																											if ((BgL_casezd2valuezd2_1493 == BGl_keyword3090z00zz__pregexpz00))
																																												{	/* Llib/pregexp.scm 613 */
																																													obj_t
																																														BgL_foundzd2itzf3z21_1624;
																																													{	/* Llib/pregexp.scm 613 */
																																														obj_t
																																															BgL_arg2566z00_1625;
																																														BgL_arg2566z00_1625
																																															=
																																															CAR
																																															(CDR
																																															(BgL_rez00_1461));
																																														BgL_foundzd2itzf3z21_1624
																																															=
																																															BGl_subz00zz__pregexpz00
																																															(BgL_startz00_3665,
																																															BgL_sz00_3664,
																																															BgL_backrefsz00_3663,
																																															BgL_snz00_3662,
																																															BgL_identityz00_3661,
																																															BgL_casezd2sensitivezf3z21_3660,
																																															BgL_nz00_3659,
																																															BgL_arg2566z00_1625,
																																															BgL_iz00_1462,
																																															BgL_identityz00_3661,
																																															BGl_proc3157z00zz__pregexpz00);
																																													}
																																													if (CBOOL(BgL_foundzd2itzf3z21_1624))
																																														{	/* Llib/pregexp.scm 615 */
																																															return
																																																PROCEDURE_ENTRY
																																																(BgL_skz00_1463)
																																																(BgL_skz00_1463,
																																																BgL_foundzd2itzf3z21_1624,
																																																BEOA);
																																														}
																																													else
																																														{	/* Llib/pregexp.scm 615 */
																																															return
																																																PROCEDURE_ENTRY
																																																(BgL_fkz00_1464)
																																																(BgL_fkz00_1464,
																																																BEOA);
																																														}
																																												}
																																											else
																																												{	/* Llib/pregexp.scm 535 */
																																													bool_t
																																														BgL_testz00_5219;
																																													{	/* Llib/pregexp.scm 535 */
																																														bool_t
																																															BgL__ortest_1896z00_1689;
																																														BgL__ortest_1896z00_1689
																																															=
																																															(BgL_casezd2valuezd2_1493
																																															==
																																															BGl_keyword3077z00zz__pregexpz00);
																																														if (BgL__ortest_1896z00_1689)
																																															{	/* Llib/pregexp.scm 535 */
																																																BgL_testz00_5219
																																																	=
																																																	BgL__ortest_1896z00_1689;
																																															}
																																														else
																																															{	/* Llib/pregexp.scm 535 */
																																																BgL_testz00_5219
																																																	=
																																																	(BgL_casezd2valuezd2_1493
																																																	==
																																																	BGl_keyword3079z00zz__pregexpz00);
																																															}
																																													}
																																													if (BgL_testz00_5219)
																																														{	/* Llib/pregexp.scm 619 */
																																															obj_t
																																																BgL_oldz00_1630;
																																															BgL_oldz00_1630
																																																=
																																																CELL_REF
																																																(BgL_casezd2sensitivezf3z21_3660);
																																															{	/* Llib/pregexp.scm 620 */
																																																obj_t
																																																	BgL_auxz00_3674;
																																																BgL_auxz00_3674
																																																	=
																																																	BBOOL
																																																	(
																																																	(BgL_casezd2valuezd2_1493
																																																		==
																																																		BGl_keyword3077z00zz__pregexpz00));
																																																CELL_SET
																																																	(BgL_casezd2sensitivezf3z21_3660,
																																																	BgL_auxz00_3674);
																																															}
																																															{	/* Llib/pregexp.scm 622 */
																																																obj_t
																																																	BgL_arg2573z00_1633;
																																																BgL_arg2573z00_1633
																																																	=
																																																	CAR
																																																	(CDR
																																																	(BgL_rez00_1461));
																																																{	/* Llib/pregexp.scm 624 */
																																																	obj_t
																																																		BgL_zc3anonymousza32576ze3z83_3632;
																																																	obj_t
																																																		BgL_zc3anonymousza32577ze3z83_3631;
																																																	BgL_zc3anonymousza32576ze3z83_3632
																																																		=
																																																		make_fx_procedure
																																																		(BGl_zc3anonymousza32576ze3z83zz__pregexpz00,
																																																		(int)
																																																		(((long) 1)), (int) (((long) 3)));
																																																	BgL_zc3anonymousza32577ze3z83_3631
																																																		=
																																																		make_fx_procedure
																																																		(BGl_zc3anonymousza32577ze3z83zz__pregexpz00,
																																																		(int)
																																																		(((long) 0)), (int) (((long) 3)));
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32576ze3z83_3632,
																																																		(int)
																																																		(((long) 0)), BgL_oldz00_1630);
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32576ze3z83_3632,
																																																		(int)
																																																		(((long) 1)), BgL_casezd2sensitivezf3z21_3660);
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32576ze3z83_3632,
																																																		(int)
																																																		(((long) 2)), BgL_skz00_1463);
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32577ze3z83_3631,
																																																		(int)
																																																		(((long) 0)), BgL_oldz00_1630);
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32577ze3z83_3631,
																																																		(int)
																																																		(((long) 1)), BgL_casezd2sensitivezf3z21_3660);
																																																	PROCEDURE_SET
																																																		(BgL_zc3anonymousza32577ze3z83_3631,
																																																		(int)
																																																		(((long) 2)), BgL_fkz00_1464);
																																																	{
																																																		obj_t
																																																			BgL_fkz00_5247;
																																																		obj_t
																																																			BgL_skz00_5246;
																																																		obj_t
																																																			BgL_rez00_5245;
																																																		BgL_rez00_5245
																																																			=
																																																			BgL_arg2573z00_1633;
																																																		BgL_skz00_5246
																																																			=
																																																			BgL_zc3anonymousza32576ze3z83_3632;
																																																		BgL_fkz00_5247
																																																			=
																																																			BgL_zc3anonymousza32577ze3z83_3631;
																																																		BgL_fkz00_1464
																																																			=
																																																			BgL_fkz00_5247;
																																																		BgL_skz00_1463
																																																			=
																																																			BgL_skz00_5246;
																																																		BgL_rez00_1461
																																																			=
																																																			BgL_rez00_5245;
																																																		goto
																																																			BGl_subz00zz__pregexpz00;
																																																	}
																																																}
																																															}
																																														}
																																													else
																																														{	/* Llib/pregexp.scm 535 */
																																															if ((BgL_casezd2valuezd2_1493 == BGl_keyword3100z00zz__pregexpz00))
																																																{	/* Llib/pregexp.scm 630 */
																																																	bool_t
																																																		BgL_maximalzf3zf3_1642;
																																																	{	/* Llib/pregexp.scm 630 */
																																																		bool_t
																																																			BgL_testz00_5250;
																																																		{	/* Llib/pregexp.scm 630 */
																																																			obj_t
																																																				BgL_pairz00_3178;
																																																			BgL_pairz00_3178
																																																				=
																																																				CDR
																																																				(BgL_rez00_1461);
																																																			BgL_testz00_5250
																																																				=
																																																				CBOOL
																																																				(CAR
																																																				(BgL_pairz00_3178));
																																																		}
																																																		if (BgL_testz00_5250)
																																																			{	/* Llib/pregexp.scm 630 */
																																																				BgL_maximalzf3zf3_1642
																																																					=
																																																					(
																																																					(bool_t)
																																																					0);
																																																			}
																																																		else
																																																			{	/* Llib/pregexp.scm 630 */
																																																				BgL_maximalzf3zf3_1642
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																	}
																																																	{	/* Llib/pregexp.scm 630 */
																																																		obj_t
																																																			BgL_pz00_1643;
																																																		BgL_pz00_1643
																																																			=
																																																			CAR
																																																			(CDR
																																																			(CDR
																																																				(BgL_rez00_1461)));
																																																		{	/* Llib/pregexp.scm 631 */
																																																			obj_t
																																																				BgL_qz00_1644;
																																																			BgL_qz00_1644
																																																				=
																																																				CAR
																																																				(CDR
																																																				(CDR
																																																					(CDR
																																																						(BgL_rez00_1461))));
																																																			{	/* Llib/pregexp.scm 632 */
																																																				bool_t
																																																					BgL_couldzd2loopzd2infinitelyzf3zf3_1645;
																																																				if (BgL_maximalzf3zf3_1642)
																																																					{	/* Llib/pregexp.scm 633 */
																																																						if (CBOOL(BgL_qz00_1644))
																																																							{	/* Llib/pregexp.scm 633 */
																																																								BgL_couldzd2loopzd2infinitelyzf3zf3_1645
																																																									=
																																																									(
																																																									(bool_t)
																																																									0);
																																																							}
																																																						else
																																																							{	/* Llib/pregexp.scm 633 */
																																																								BgL_couldzd2loopzd2infinitelyzf3zf3_1645
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																					}
																																																				else
																																																					{	/* Llib/pregexp.scm 633 */
																																																						BgL_couldzd2loopzd2infinitelyzf3zf3_1645
																																																							=
																																																							(
																																																							(bool_t)
																																																							0);
																																																					}
																																																				{	/* Llib/pregexp.scm 633 */
																																																					obj_t
																																																						BgL_rez00_1646;
																																																					BgL_rez00_1646
																																																						=
																																																						CAR
																																																						(CDR
																																																						(CDR
																																																							(CDR
																																																								(CDR
																																																									(BgL_rez00_1461)))));
																																																					{	/* Llib/pregexp.scm 634 */

																																																						return
																																																							BGl_loupzd2pzd2zz__pregexpz00
																																																							(BgL_fkz00_1464,
																																																							BgL_rez00_1646,
																																																							BBOOL
																																																							(BgL_couldzd2loopzd2infinitelyzf3zf3_1645),
																																																							BgL_pz00_1643,
																																																							BgL_qz00_1644,
																																																							BBOOL
																																																							(BgL_maximalzf3zf3_1642),
																																																							BgL_skz00_1463,
																																																							BgL_startz00_3665,
																																																							BgL_sz00_3664,
																																																							BgL_backrefsz00_3663,
																																																							BgL_snz00_3662,
																																																							BgL_identityz00_3661,
																																																							BgL_casezd2sensitivezf3z21_3660,
																																																							BgL_nz00_3659,
																																																							BINT
																																																							(((long) 0)), BgL_iz00_1462);
																																																}}}}}}
																																															else
																																																{	/* Llib/pregexp.scm 535 */
																																																	return
																																																		BGl_errorz00zz__errorz00
																																																		(BGl_string3038z00zz__pregexpz00,
																																																		BGl_symbol3148z00zz__pregexpz00,
																																																		BUNSPEC);
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
																			else
																				{	/* Llib/pregexp.scm 534 */
																					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1462, CELL_REF(BgL_nz00_3659)))
																						{	/* Llib/pregexp.scm 668 */
																							return
																								PROCEDURE_ENTRY(BgL_fkz00_1464)
																								(BgL_fkz00_1464, BEOA);
																						}
																					else
																						{	/* Llib/pregexp.scm 668 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string3038z00zz__pregexpz00,
																								BGl_symbol3148z00zz__pregexpz00,
																								BUNSPEC);
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



/* loup-seq */
	obj_t BGl_loupzd2seqzd2zz__pregexpz00(obj_t BgL_skz00_3683,
		obj_t BgL_fkz00_3682, obj_t BgL_startz00_3681, obj_t BgL_sz00_3680,
		obj_t BgL_backrefsz00_3679, obj_t BgL_snz00_3678,
		obj_t BgL_identityz00_3677, obj_t BgL_casezd2sensitivezf3z21_3676,
		obj_t BgL_nz00_3675, obj_t BgL_resz00_3032, obj_t BgL_iz00_3033)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 552 */
			if (NULLP(BgL_resz00_3032))
				{	/* Llib/pregexp.scm 552 */
					return
						PROCEDURE_ENTRY(BgL_skz00_3683) (BgL_skz00_3683, BgL_iz00_3033,
						BEOA);
				}
			else
				{	/* Llib/pregexp.scm 552 */
					obj_t BgL_arg2501z00_3040;

					BgL_arg2501z00_3040 = CAR(BgL_resz00_3032);
					{	/* Llib/pregexp.scm 552 */
						obj_t BgL_zc3anonymousza32503ze3z83_3610;

						BgL_zc3anonymousza32503ze3z83_3610 =
							make_fx_procedure(BGl_zc3anonymousza32503ze3z83zz__pregexpz00,
							(int) (((long) 1)), (int) (((long) 10)));
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 0)), BgL_nz00_3675);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3676);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 2)), BgL_identityz00_3677);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 3)), BgL_snz00_3678);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 4)), BgL_backrefsz00_3679);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 5)), BgL_sz00_3680);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 6)), BgL_startz00_3681);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 7)), BgL_fkz00_3682);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 8)), BgL_skz00_3683);
						PROCEDURE_SET(BgL_zc3anonymousza32503ze3z83_3610,
							(int) (((long) 9)), BgL_resz00_3032);
						return
							BGl_subz00zz__pregexpz00(BgL_startz00_3681, BgL_sz00_3680,
							BgL_backrefsz00_3679, BgL_snz00_3678, BgL_identityz00_3677,
							BgL_casezd2sensitivezf3z21_3676, BgL_nz00_3675,
							BgL_arg2501z00_3040, BgL_iz00_3033,
							BgL_zc3anonymousza32503ze3z83_3610, BgL_fkz00_3682);
					}
				}
		}
	}



/* loup-or */
	obj_t BGl_loupzd2orzd2zz__pregexpz00(obj_t BgL_fkz00_3693,
		obj_t BgL_iz00_3692, obj_t BgL_skz00_3691, obj_t BgL_startz00_3690,
		obj_t BgL_sz00_3689, obj_t BgL_backrefsz00_3688, obj_t BgL_snz00_3687,
		obj_t BgL_identityz00_3686, obj_t BgL_casezd2sensitivezf3z21_3685,
		obj_t BgL_nz00_3684, obj_t BgL_resz00_1538)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 559 */
			if (NULLP(BgL_resz00_1538))
				{	/* Llib/pregexp.scm 560 */
					return PROCEDURE_ENTRY(BgL_fkz00_3693) (BgL_fkz00_3693, BEOA);
				}
			else
				{	/* Llib/pregexp.scm 561 */
					obj_t BgL_arg2508z00_1541;

					BgL_arg2508z00_1541 = CAR(BgL_resz00_1538);
					{	/* Llib/pregexp.scm 563 */
						obj_t BgL_zc3anonymousza32511ze3z83_3613;

						obj_t BgL_zc3anonymousza32513ze3z83_3612;

						BgL_zc3anonymousza32511ze3z83_3613 =
							make_fx_procedure(BGl_zc3anonymousza32511ze3z83zz__pregexpz00,
							(int) (((long) 1)), (int) (((long) 11)));
						BgL_zc3anonymousza32513ze3z83_3612 =
							make_fx_procedure(BGl_zc3anonymousza32513ze3z83zz__pregexpz00,
							(int) (((long) 0)), (int) (((long) 11)));
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 0)), BgL_nz00_3684);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3685);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 2)), BgL_identityz00_3686);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 3)), BgL_snz00_3687);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 4)), BgL_backrefsz00_3688);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 5)), BgL_sz00_3689);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 6)), BgL_startz00_3690);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 7)), BgL_iz00_3692);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 8)), BgL_fkz00_3693);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 9)), BgL_skz00_3691);
						PROCEDURE_SET(BgL_zc3anonymousza32511ze3z83_3613,
							(int) (((long) 10)), BgL_resz00_1538);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 0)), BgL_nz00_3684);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3685);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 2)), BgL_identityz00_3686);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 3)), BgL_snz00_3687);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 4)), BgL_backrefsz00_3688);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 5)), BgL_sz00_3689);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 6)), BgL_startz00_3690);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 7)), BgL_skz00_3691);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 8)), BgL_iz00_3692);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 9)), BgL_fkz00_3693);
						PROCEDURE_SET(BgL_zc3anonymousza32513ze3z83_3612,
							(int) (((long) 10)), BgL_resz00_1538);
						return
							BGl_subz00zz__pregexpz00(BgL_startz00_3690, BgL_sz00_3689,
							BgL_backrefsz00_3688, BgL_snz00_3687, BgL_identityz00_3686,
							BgL_casezd2sensitivezf3z21_3685, BgL_nz00_3684,
							BgL_arg2508z00_1541, BgL_iz00_3692,
							BgL_zc3anonymousza32511ze3z83_3613,
							BgL_zc3anonymousza32513ze3z83_3612);
					}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__pregexpz00(long BgL_n1z00_3699, obj_t BgL_skz00_3698,
		obj_t BgL_nz00_3697, obj_t BgL_sz00_3696, obj_t BgL_s1z00_3695,
		obj_t BgL_fkz00_3694, long BgL_jz00_3105, obj_t BgL_kz00_3106)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 407 */
		BGl_loopz00zz__pregexpz00:
			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BINT(BgL_jz00_3105),
					BINT(BgL_n1z00_3699)))
				{	/* Llib/pregexp.scm 575 */
					return
						PROCEDURE_ENTRY(BgL_skz00_3698) (BgL_skz00_3698, BgL_kz00_3106,
						BEOA);
				}
			else
				{	/* Llib/pregexp.scm 575 */
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_3106, BgL_nz00_3697))
						{	/* Llib/pregexp.scm 575 */
							return PROCEDURE_ENTRY(BgL_fkz00_3694) (BgL_fkz00_3694, BEOA);
						}
					else
						{	/* Llib/pregexp.scm 575 */
							if (
								(STRING_REF(BgL_s1z00_3695, BgL_jz00_3105) ==
									STRING_REF(BgL_sz00_3696, (long) CINT(BgL_kz00_3106))))
								{
									obj_t BgL_kz00_5384;

									long BgL_jz00_5379;

									BgL_jz00_5379 =
										(long)
										CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(BgL_jz00_3105),
											BINT(((long) 1))));
									BgL_kz00_5384 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3106,
										BINT(((long) 1)));
									BgL_kz00_3106 = BgL_kz00_5384;
									BgL_jz00_3105 = BgL_jz00_5379;
									goto BGl_loopz00zz__pregexpz00;
								}
							else
								{	/* Llib/pregexp.scm 575 */
									return PROCEDURE_ENTRY(BgL_fkz00_3694) (BgL_fkz00_3694, BEOA);
								}
						}
				}
		}
	}



/* loup-p */
	obj_t BGl_loupzd2pzd2zz__pregexpz00(obj_t BgL_fkz00_3713,
		obj_t BgL_rez00_3712, obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3711,
		obj_t BgL_pz00_3710, obj_t BgL_qz00_3709, obj_t BgL_maximalzf3zf3_3708,
		obj_t BgL_skz00_3707, obj_t BgL_startz00_3706, obj_t BgL_sz00_3705,
		obj_t BgL_backrefsz00_3704, obj_t BgL_snz00_3703,
		obj_t BgL_identityz00_3702, obj_t BgL_casezd2sensitivezf3z21_3701,
		obj_t BgL_nz00_3700, obj_t BgL_kz00_1648, obj_t BgL_iz00_1649)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 635 */
			if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_kz00_1648, BgL_pz00_3710))
				{	/* Llib/pregexp.scm 639 */
					obj_t BgL_zc3anonymousza32582ze3z83_3620;

					BgL_zc3anonymousza32582ze3z83_3620 =
						make_fx_procedure(BGl_zc3anonymousza32582ze3z83zz__pregexpz00,
						(int) (((long) 1)), (int) (((long) 16)));
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 0)), BgL_nz00_3700);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3701);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 2)), BgL_identityz00_3702);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 3)), BgL_snz00_3703);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 4)), BgL_backrefsz00_3704);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 5)), BgL_sz00_3705);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 6)), BgL_startz00_3706);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 7)), BgL_skz00_3707);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 8)), BgL_maximalzf3zf3_3708);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 9)), BgL_qz00_3709);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 10)), BgL_pz00_3710);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 11)), BgL_rez00_3712);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 12)), BgL_fkz00_3713);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 13)), BgL_iz00_1649);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 14)), BgL_couldzd2loopzd2infinitelyzf3zf3_3711);
					PROCEDURE_SET(BgL_zc3anonymousza32582ze3z83_3620,
						(int) (((long) 15)), BgL_kz00_1648);
					return
						BGl_subz00zz__pregexpz00(BgL_startz00_3706, BgL_sz00_3705,
						BgL_backrefsz00_3704, BgL_snz00_3703, BgL_identityz00_3702,
						BgL_casezd2sensitivezf3z21_3701, BgL_nz00_3700, BgL_rez00_3712,
						BgL_iz00_1649, BgL_zc3anonymousza32582ze3z83_3620, BgL_fkz00_3713);
				}
			else
				{	/* Llib/pregexp.scm 646 */
					obj_t BgL_qz00_1659;

					if (CBOOL(BgL_qz00_3709))
						{	/* Llib/pregexp.scm 646 */
							BgL_qz00_1659 =
								BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_qz00_3709, BgL_pz00_3710);
						}
					else
						{	/* Llib/pregexp.scm 646 */
							BgL_qz00_1659 = BFALSE;
						}
					return
						BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_1659, BgL_maximalzf3zf3_3708,
						BgL_couldzd2loopzd2infinitelyzf3zf3_3711, BgL_rez00_3712,
						BgL_skz00_3707, BgL_startz00_3706, BgL_sz00_3705,
						BgL_backrefsz00_3704, BgL_snz00_3703, BgL_identityz00_3702,
						BgL_casezd2sensitivezf3z21_3701, BgL_nz00_3700, BINT(((long) 0)),
						BgL_iz00_1649);
		}}
	}



/* loup-q */
	obj_t BGl_loupzd2qzd2zz__pregexpz00(obj_t BgL_qz00_3725,
		obj_t BgL_maximalzf3zf3_3724,
		obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3723, obj_t BgL_rez00_3722,
		obj_t BgL_skz00_3721, obj_t BgL_startz00_3720, obj_t BgL_sz00_3719,
		obj_t BgL_backrefsz00_3718, obj_t BgL_snz00_3717,
		obj_t BgL_identityz00_3716, obj_t BgL_casezd2sensitivezf3z21_3715,
		obj_t BgL_nz00_3714, obj_t BgL_kz00_1661, obj_t BgL_iz00_1662)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 647 */
			{	/* Llib/pregexp.scm 649 */
				obj_t BgL_fkz00_3617;

				BgL_fkz00_3617 =
					make_fx_procedure(BGl_fkz00zz__pregexpz00,
					(int) (((long) 0)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_fkz00_3617, (int) (((long) 0)), BgL_skz00_3721);
				PROCEDURE_SET(BgL_fkz00_3617, (int) (((long) 1)), BgL_iz00_1662);
				{	/* Llib/pregexp.scm 650 */
					bool_t BgL_testz00_5439;

					if (CBOOL(BgL_qz00_3725))
						{	/* Llib/pregexp.scm 650 */
							BgL_testz00_5439 =
								BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_kz00_1661,
								BgL_qz00_3725);
						}
					else
						{	/* Llib/pregexp.scm 650 */
							BgL_testz00_5439 = ((bool_t) 0);
						}
					if (BgL_testz00_5439)
						{	/* Llib/pregexp.scm 650 */
							return
								PROCEDURE_ENTRY(BgL_skz00_3721) (BgL_skz00_3721, BgL_iz00_1662,
								BEOA);
						}
					else
						{	/* Llib/pregexp.scm 650 */
							if (CBOOL(BgL_maximalzf3zf3_3724))
								{	/* Llib/pregexp.scm 654 */
									obj_t BgL_zc3anonymousza32590ze3z83_3616;

									BgL_zc3anonymousza32590ze3z83_3616 =
										make_fx_procedure
										(BGl_zc3anonymousza32590ze3z83zz__pregexpz00,
										(int) (((long) 1)), (int) (((long) 14)));
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 0)), BgL_nz00_3714);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3715);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 2)), BgL_identityz00_3716);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 3)), BgL_snz00_3717);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 4)), BgL_backrefsz00_3718);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 5)), BgL_sz00_3719);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 6)), BgL_startz00_3720);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 7)), BgL_rez00_3722);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 8)), BgL_maximalzf3zf3_3724);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 9)), BgL_qz00_3725);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 10)), BgL_iz00_1662);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 11)),
										BgL_couldzd2loopzd2infinitelyzf3zf3_3723);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 12)), BgL_kz00_1661);
									PROCEDURE_SET(BgL_zc3anonymousza32590ze3z83_3616,
										(int) (((long) 13)), BgL_skz00_3721);
									return BGl_subz00zz__pregexpz00(BgL_startz00_3720,
										BgL_sz00_3719, BgL_backrefsz00_3718, BgL_snz00_3717,
										BgL_identityz00_3716, BgL_casezd2sensitivezf3z21_3715,
										BgL_nz00_3714, BgL_rez00_3722, BgL_iz00_1662,
										BgL_zc3anonymousza32590ze3z83_3616, BgL_fkz00_3617);
								}
							else
								{	/* Llib/pregexp.scm 662 */
									obj_t BgL__ortest_1900z00_1674;

									BgL__ortest_1900z00_1674 =
										PROCEDURE_ENTRY(BgL_skz00_3721) (BgL_skz00_3721,
										BgL_iz00_1662, BEOA);
									if (CBOOL(BgL__ortest_1900z00_1674))
										{	/* Llib/pregexp.scm 662 */
											return BgL__ortest_1900z00_1674;
										}
									else
										{	/* Llib/pregexp.scm 665 */
											obj_t BgL_zc3anonymousza32595ze3z83_3618;

											BgL_zc3anonymousza32595ze3z83_3618 =
												make_fx_procedure
												(BGl_zc3anonymousza32595ze3z83zz__pregexpz00,
												(int) (((long) 1)), (int) (((long) 13)));
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 0)), BgL_nz00_3714);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 1)), BgL_casezd2sensitivezf3z21_3715);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 2)), BgL_identityz00_3716);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 3)), BgL_snz00_3717);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 4)), BgL_backrefsz00_3718);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 5)), BgL_sz00_3719);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 6)), BgL_startz00_3720);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 7)), BgL_skz00_3721);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 8)), BgL_rez00_3722);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 9)),
												BgL_couldzd2loopzd2infinitelyzf3zf3_3723);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 10)), BgL_maximalzf3zf3_3724);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 11)), BgL_qz00_3725);
											PROCEDURE_SET(BgL_zc3anonymousza32595ze3z83_3618,
												(int) (((long) 12)), BgL_kz00_1661);
											return BGl_subz00zz__pregexpz00(BgL_startz00_3720,
												BgL_sz00_3719, BgL_backrefsz00_3718, BgL_snz00_3717,
												BgL_identityz00_3716, BgL_casezd2sensitivezf3z21_3715,
												BgL_nz00_3714, BgL_rez00_3722, BgL_iz00_1662,
												BgL_zc3anonymousza32595ze3z83_3618, BgL_fkz00_3617);
										}
								}
						}
				}
			}
		}
	}



/* g1888 */
	obj_t BGl_g1888z00zz__pregexpz00(obj_t BgL_envz00_3726)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 499 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2488> */
	obj_t BGl_zc3anonymousza32488ze3z83zz__pregexpz00(obj_t BgL_envz00_3727)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 544 */
			{	/* Llib/pregexp.scm 545 */
				obj_t BgL_nz00_3728;

				obj_t BgL_casezd2sensitivezf3z21_3729;

				obj_t BgL_identityz00_3730;

				obj_t BgL_snz00_3731;

				obj_t BgL_backrefsz00_3732;

				obj_t BgL_sz00_3733;

				obj_t BgL_startz00_3734;

				obj_t BgL_iz00_3735;

				obj_t BgL_skz00_3736;

				obj_t BgL_fkz00_3737;

				obj_t BgL_charsz00_3738;

				BgL_nz00_3728 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3729 =
					PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 1)));
				BgL_identityz00_3730 =
					PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 2)));
				BgL_snz00_3731 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 3)));
				BgL_backrefsz00_3732 =
					PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 4)));
				BgL_sz00_3733 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 5)));
				BgL_startz00_3734 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 6)));
				BgL_iz00_3735 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 7)));
				BgL_skz00_3736 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 8)));
				BgL_fkz00_3737 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 9)));
				BgL_charsz00_3738 = PROCEDURE_REF(BgL_envz00_3727, (int) (((long) 10)));
				{

					return
						BGl_loupzd2onezd2ofzd2charszd2zz__pregexpz00(BgL_fkz00_3737,
						BgL_skz00_3736, BgL_iz00_3735, BgL_startz00_3734, BgL_sz00_3733,
						BgL_backrefsz00_3732, BgL_snz00_3731, BgL_identityz00_3730,
						BgL_casezd2sensitivezf3z21_3729, BgL_nz00_3728,
						CDR(BgL_charsz00_3738));
				}
			}
		}
	}



/* <anonymous:2496> */
	obj_t BGl_zc3anonymousza32496ze3z83zz__pregexpz00(obj_t BgL_envz00_3739)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 550 */
			{	/* Llib/pregexp.scm 550 */
				obj_t BgL_iz00_3740;

				obj_t BgL_skz00_3741;

				BgL_iz00_3740 = PROCEDURE_REF(BgL_envz00_3739, (int) (((long) 0)));
				BgL_skz00_3741 = PROCEDURE_REF(BgL_envz00_3739, (int) (((long) 1)));
				{

					{	/* Llib/pregexp.scm 550 */
						obj_t BgL_arg2497z00_3027;

						BgL_arg2497z00_3027 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_3740, BINT(((long) 1)));
						return
							PROCEDURE_ENTRY(BgL_skz00_3741) (BgL_skz00_3741,
							BgL_arg2497z00_3027, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:2495> */
	obj_t BGl_zc3anonymousza32495ze3z83zz__pregexpz00(obj_t BgL_envz00_3742,
		obj_t BgL_i1z00_3744)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 549 */
			{	/* Llib/pregexp.scm 549 */
				obj_t BgL_fkz00_3743;

				BgL_fkz00_3743 = PROCEDURE_REF(BgL_envz00_3742, (int) (((long) 0)));
				{
					obj_t BgL_i1z00_1515;

					BgL_i1z00_1515 = BgL_i1z00_3744;
					return PROCEDURE_ENTRY(BgL_fkz00_3743) (BgL_fkz00_3743, BEOA);
				}
			}
		}
	}



/* <anonymous:2503> */
	obj_t BGl_zc3anonymousza32503ze3z83zz__pregexpz00(obj_t BgL_envz00_3745,
		obj_t BgL_i1z00_3756)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 555 */
			{	/* Llib/pregexp.scm 552 */
				obj_t BgL_nz00_3746;

				obj_t BgL_casezd2sensitivezf3z21_3747;

				obj_t BgL_identityz00_3748;

				obj_t BgL_snz00_3749;

				obj_t BgL_backrefsz00_3750;

				obj_t BgL_sz00_3751;

				obj_t BgL_startz00_3752;

				obj_t BgL_fkz00_3753;

				obj_t BgL_skz00_3754;

				obj_t BgL_resz00_3755;

				BgL_nz00_3746 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3747 =
					PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 1)));
				BgL_identityz00_3748 =
					PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 2)));
				BgL_snz00_3749 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 3)));
				BgL_backrefsz00_3750 =
					PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 4)));
				BgL_sz00_3751 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 5)));
				BgL_startz00_3752 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 6)));
				BgL_fkz00_3753 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 7)));
				BgL_skz00_3754 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 8)));
				BgL_resz00_3755 = PROCEDURE_REF(BgL_envz00_3745, (int) (((long) 9)));
				{
					obj_t BgL_i1z00_3042;

					BgL_i1z00_3042 = BgL_i1z00_3756;
					return
						BGl_loupzd2seqzd2zz__pregexpz00(BgL_skz00_3754, BgL_fkz00_3753,
						BgL_startz00_3752, BgL_sz00_3751, BgL_backrefsz00_3750,
						BgL_snz00_3749, BgL_identityz00_3748,
						BgL_casezd2sensitivezf3z21_3747, BgL_nz00_3746,
						CDR(BgL_resz00_3755), BgL_i1z00_3042);
				}
			}
		}
	}



/* <anonymous:2513> */
	obj_t BGl_zc3anonymousza32513ze3z83zz__pregexpz00(obj_t BgL_envz00_3757)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 565 */
			{	/* Llib/pregexp.scm 565 */
				obj_t BgL_nz00_3758;

				obj_t BgL_casezd2sensitivezf3z21_3759;

				obj_t BgL_identityz00_3760;

				obj_t BgL_snz00_3761;

				obj_t BgL_backrefsz00_3762;

				obj_t BgL_sz00_3763;

				obj_t BgL_startz00_3764;

				obj_t BgL_skz00_3765;

				obj_t BgL_iz00_3766;

				obj_t BgL_fkz00_3767;

				obj_t BgL_resz00_3768;

				BgL_nz00_3758 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3759 =
					PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 1)));
				BgL_identityz00_3760 =
					PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 2)));
				BgL_snz00_3761 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 3)));
				BgL_backrefsz00_3762 =
					PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 4)));
				BgL_sz00_3763 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 5)));
				BgL_startz00_3764 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 6)));
				BgL_skz00_3765 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 7)));
				BgL_iz00_3766 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 8)));
				BgL_fkz00_3767 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 9)));
				BgL_resz00_3768 = PROCEDURE_REF(BgL_envz00_3757, (int) (((long) 10)));
				{

					return
						BGl_loupzd2orzd2zz__pregexpz00(BgL_fkz00_3767, BgL_iz00_3766,
						BgL_skz00_3765, BgL_startz00_3764, BgL_sz00_3763,
						BgL_backrefsz00_3762, BgL_snz00_3761, BgL_identityz00_3760,
						BgL_casezd2sensitivezf3z21_3759, BgL_nz00_3758,
						CDR(BgL_resz00_3768));
				}
			}
		}
	}



/* <anonymous:2511> */
	obj_t BGl_zc3anonymousza32511ze3z83zz__pregexpz00(obj_t BgL_envz00_3769,
		obj_t BgL_i1z00_3781)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 562 */
			{	/* Llib/pregexp.scm 563 */
				obj_t BgL_nz00_3770;

				obj_t BgL_casezd2sensitivezf3z21_3771;

				obj_t BgL_identityz00_3772;

				obj_t BgL_snz00_3773;

				obj_t BgL_backrefsz00_3774;

				obj_t BgL_sz00_3775;

				obj_t BgL_startz00_3776;

				obj_t BgL_iz00_3777;

				obj_t BgL_fkz00_3778;

				obj_t BgL_skz00_3779;

				obj_t BgL_resz00_3780;

				BgL_nz00_3770 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3771 =
					PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 1)));
				BgL_identityz00_3772 =
					PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 2)));
				BgL_snz00_3773 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 3)));
				BgL_backrefsz00_3774 =
					PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 4)));
				BgL_sz00_3775 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 5)));
				BgL_startz00_3776 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 6)));
				BgL_iz00_3777 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 7)));
				BgL_fkz00_3778 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 8)));
				BgL_skz00_3779 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 9)));
				BgL_resz00_3780 = PROCEDURE_REF(BgL_envz00_3769, (int) (((long) 10)));
				{
					obj_t BgL_i1z00_1544;

					BgL_i1z00_1544 = BgL_i1z00_3781;
					{	/* Llib/pregexp.scm 563 */
						obj_t BgL__ortest_1893z00_3073;

						BgL__ortest_1893z00_3073 =
							PROCEDURE_ENTRY(BgL_skz00_3779) (BgL_skz00_3779, BgL_i1z00_1544,
							BEOA);
						if (CBOOL(BgL__ortest_1893z00_3073))
							{	/* Llib/pregexp.scm 563 */
								return BgL__ortest_1893z00_3073;
							}
						else
							{	/* Llib/pregexp.scm 563 */
								return
									BGl_loupzd2orzd2zz__pregexpz00(BgL_fkz00_3778, BgL_iz00_3777,
									BgL_skz00_3779, BgL_startz00_3776, BgL_sz00_3775,
									BgL_backrefsz00_3774, BgL_snz00_3773, BgL_identityz00_3772,
									BgL_casezd2sensitivezf3z21_3771, BgL_nz00_3770,
									CDR(BgL_resz00_3780));
							}
					}
				}
			}
		}
	}



/* <anonymous:2528> */
	obj_t BGl_zc3anonymousza32528ze3z83zz__pregexpz00(obj_t BgL_envz00_3782,
		obj_t BgL_i1z00_3787)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 581 */
			{	/* Llib/pregexp.scm 582 */
				obj_t BgL_rez00_3783;

				obj_t BgL_backrefsz00_3784;

				obj_t BgL_iz00_3785;

				obj_t BgL_skz00_3786;

				BgL_rez00_3783 = PROCEDURE_REF(BgL_envz00_3782, (int) (((long) 0)));
				BgL_backrefsz00_3784 =
					PROCEDURE_REF(BgL_envz00_3782, (int) (((long) 1)));
				BgL_iz00_3785 = PROCEDURE_REF(BgL_envz00_3782, (int) (((long) 2)));
				BgL_skz00_3786 = PROCEDURE_REF(BgL_envz00_3782, (int) (((long) 3)));
				{
					obj_t BgL_i1z00_1572;

					BgL_i1z00_1572 = BgL_i1z00_3787;
					{	/* Llib/pregexp.scm 582 */
						obj_t BgL_arg2529z00_3128;

						obj_t BgL_arg2530z00_3129;

						BgL_arg2529z00_3128 =
							BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_rez00_3783,
							BgL_backrefsz00_3784);
						BgL_arg2530z00_3129 = MAKE_PAIR(BgL_iz00_3785, BgL_i1z00_1572);
						SET_CDR(BgL_arg2529z00_3128, BgL_arg2530z00_3129);
					}
					return
						PROCEDURE_ENTRY(BgL_skz00_3786) (BgL_skz00_3786, BgL_i1z00_1572,
						BEOA);
				}
			}
		}
	}



/* <anonymous:2534> */
	obj_t BGl_zc3anonymousza32534ze3z83zz__pregexpz00(obj_t BgL_envz00_3788)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 587 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2538> */
	obj_t BGl_zc3anonymousza32538ze3z83zz__pregexpz00(obj_t BgL_envz00_3789)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 592 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2551> */
	obj_t BGl_zc3anonymousza32551ze3z83zz__pregexpz00(obj_t BgL_envz00_3790)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 600 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2564> */
	obj_t BGl_zc3anonymousza32564ze3z83zz__pregexpz00(obj_t BgL_envz00_3791)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 609 */
			return BBOOL(((bool_t) 0));
		}
	}



/* <anonymous:2569> */
	obj_t BGl_zc3anonymousza32569ze3z83zz__pregexpz00(obj_t BgL_envz00_3792)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 614 */
			return BBOOL(((bool_t) 0));
		}
	}



/* identity */
	obj_t BGl_identityz00zz__pregexpz00(obj_t BgL_envz00_3793,
		obj_t BgL_xz00_3794)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 496 */
			return BgL_xz00_3794;
		}
	}



/* <anonymous:2577> */
	obj_t BGl_zc3anonymousza32577ze3z83zz__pregexpz00(obj_t BgL_envz00_3795)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 626 */
			{	/* Llib/pregexp.scm 627 */
				obj_t BgL_oldz00_3796;

				obj_t BgL_casezd2sensitivezf3z21_3797;

				obj_t BgL_fkz00_3798;

				BgL_oldz00_3796 = PROCEDURE_REF(BgL_envz00_3795, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3797 =
					PROCEDURE_REF(BgL_envz00_3795, (int) (((long) 1)));
				BgL_fkz00_3798 = PROCEDURE_REF(BgL_envz00_3795, (int) (((long) 2)));
				{

					CELL_SET(BgL_casezd2sensitivezf3z21_3797, BgL_oldz00_3796);
					return PROCEDURE_ENTRY(BgL_fkz00_3798) (BgL_fkz00_3798, BEOA);
				}
			}
		}
	}



/* <anonymous:2576> */
	obj_t BGl_zc3anonymousza32576ze3z83zz__pregexpz00(obj_t BgL_envz00_3800,
		obj_t BgL_i1z00_3804)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 623 */
			{	/* Llib/pregexp.scm 624 */
				obj_t BgL_oldz00_3801;

				obj_t BgL_casezd2sensitivezf3z21_3802;

				obj_t BgL_skz00_3803;

				BgL_oldz00_3801 = PROCEDURE_REF(BgL_envz00_3800, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3802 =
					PROCEDURE_REF(BgL_envz00_3800, (int) (((long) 1)));
				BgL_skz00_3803 = PROCEDURE_REF(BgL_envz00_3800, (int) (((long) 2)));
				{
					obj_t BgL_i1z00_1636;

					BgL_i1z00_1636 = BgL_i1z00_3804;
					CELL_SET(BgL_casezd2sensitivezf3z21_3802, BgL_oldz00_3801);
					return
						PROCEDURE_ENTRY(BgL_skz00_3803) (BgL_skz00_3803, BgL_i1z00_1636,
						BEOA);
				}
			}
		}
	}



/* <anonymous:2582> */
	obj_t BGl_zc3anonymousza32582ze3z83zz__pregexpz00(obj_t BgL_envz00_3806,
		obj_t BgL_i1z00_3823)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 638 */
			{	/* Llib/pregexp.scm 639 */
				obj_t BgL_nz00_3807;

				obj_t BgL_casezd2sensitivezf3z21_3808;

				obj_t BgL_identityz00_3809;

				obj_t BgL_snz00_3810;

				obj_t BgL_backrefsz00_3811;

				obj_t BgL_sz00_3812;

				obj_t BgL_startz00_3813;

				obj_t BgL_skz00_3814;

				obj_t BgL_maximalzf3zf3_3815;

				obj_t BgL_qz00_3816;

				obj_t BgL_pz00_3817;

				obj_t BgL_rez00_3818;

				obj_t BgL_fkz00_3819;

				obj_t BgL_iz00_3820;

				obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3821;

				obj_t BgL_kz00_3822;

				BgL_nz00_3807 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3808 =
					PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 1)));
				BgL_identityz00_3809 =
					PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 2)));
				BgL_snz00_3810 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 3)));
				BgL_backrefsz00_3811 =
					PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 4)));
				BgL_sz00_3812 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 5)));
				BgL_startz00_3813 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 6)));
				BgL_skz00_3814 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 7)));
				BgL_maximalzf3zf3_3815 =
					PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 8)));
				BgL_qz00_3816 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 9)));
				BgL_pz00_3817 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 10)));
				BgL_rez00_3818 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 11)));
				BgL_fkz00_3819 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 12)));
				BgL_iz00_3820 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 13)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_3821 =
					PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 14)));
				BgL_kz00_3822 = PROCEDURE_REF(BgL_envz00_3806, (int) (((long) 15)));
				{
					obj_t BgL_i1z00_1653;

					BgL_i1z00_1653 = BgL_i1z00_3823;
					{	/* Llib/pregexp.scm 639 */
						bool_t BgL_testz00_5690;

						if (CBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_3821))
							{	/* Llib/pregexp.scm 639 */
								BgL_testz00_5690 =
									BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_i1z00_1653,
									BgL_iz00_3820);
							}
						else
							{	/* Llib/pregexp.scm 639 */
								BgL_testz00_5690 = ((bool_t) 0);
							}
						if (BgL_testz00_5690)
							{	/* Llib/pregexp.scm 641 */
								obj_t BgL_list2584z00_1656;

								BgL_list2584z00_1656 =
									MAKE_PAIR(BGl_symbol3158z00zz__pregexpz00, BNIL);
								BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
									BGl_symbol3148z00zz__pregexpz00, CAR(BgL_list2584z00_1656));
							}
						else
							{	/* Llib/pregexp.scm 639 */
								BFALSE;
							}
					}
					return
						BGl_loupzd2pzd2zz__pregexpz00(BgL_fkz00_3819, BgL_rez00_3818,
						BgL_couldzd2loopzd2infinitelyzf3zf3_3821, BgL_pz00_3817,
						BgL_qz00_3816, BgL_maximalzf3zf3_3815, BgL_skz00_3814,
						BgL_startz00_3813, BgL_sz00_3812, BgL_backrefsz00_3811,
						BgL_snz00_3810, BgL_identityz00_3809,
						BgL_casezd2sensitivezf3z21_3808, BgL_nz00_3807,
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3822, BINT(((long) 1))),
						BgL_i1z00_1653);
		}}}
	}



/* <anonymous:2590> */
	obj_t BGl_zc3anonymousza32590ze3z83zz__pregexpz00(obj_t BgL_envz00_3824,
		obj_t BgL_i1z00_3839)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 653 */
			{	/* Llib/pregexp.scm 654 */
				obj_t BgL_nz00_3825;

				obj_t BgL_casezd2sensitivezf3z21_3826;

				obj_t BgL_identityz00_3827;

				obj_t BgL_snz00_3828;

				obj_t BgL_backrefsz00_3829;

				obj_t BgL_sz00_3830;

				obj_t BgL_startz00_3831;

				obj_t BgL_rez00_3832;

				obj_t BgL_maximalzf3zf3_3833;

				obj_t BgL_qz00_3834;

				obj_t BgL_iz00_3835;

				obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3836;

				obj_t BgL_kz00_3837;

				obj_t BgL_skz00_3838;

				BgL_nz00_3825 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3826 =
					PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 1)));
				BgL_identityz00_3827 =
					PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 2)));
				BgL_snz00_3828 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 3)));
				BgL_backrefsz00_3829 =
					PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 4)));
				BgL_sz00_3830 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 5)));
				BgL_startz00_3831 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 6)));
				BgL_rez00_3832 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 7)));
				BgL_maximalzf3zf3_3833 =
					PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 8)));
				BgL_qz00_3834 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 9)));
				BgL_iz00_3835 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 10)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_3836 =
					PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 11)));
				BgL_kz00_3837 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 12)));
				BgL_skz00_3838 = PROCEDURE_REF(BgL_envz00_3824, (int) (((long) 13)));
				{
					obj_t BgL_i1z00_1667;

					BgL_i1z00_1667 = BgL_i1z00_3839;
					{	/* Llib/pregexp.scm 654 */
						bool_t BgL_testz00_5728;

						if (CBOOL(BgL_couldzd2loopzd2infinitelyzf3zf3_3836))
							{	/* Llib/pregexp.scm 654 */
								BgL_testz00_5728 =
									BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_i1z00_1667,
									BgL_iz00_3835);
							}
						else
							{	/* Llib/pregexp.scm 654 */
								BgL_testz00_5728 = ((bool_t) 0);
							}
						if (BgL_testz00_5728)
							{	/* Llib/pregexp.scm 656 */
								obj_t BgL_list2592z00_1670;

								BgL_list2592z00_1670 =
									MAKE_PAIR(BGl_symbol3158z00zz__pregexpz00, BNIL);
								BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
									BGl_symbol3148z00zz__pregexpz00, CAR(BgL_list2592z00_1670));
							}
						else
							{	/* Llib/pregexp.scm 654 */
								BFALSE;
							}
					}
					{	/* Llib/pregexp.scm 659 */
						obj_t BgL__ortest_1899z00_1671;

						BgL__ortest_1899z00_1671 =
							BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_3834,
							BgL_maximalzf3zf3_3833, BgL_couldzd2loopzd2infinitelyzf3zf3_3836,
							BgL_rez00_3832, BgL_skz00_3838, BgL_startz00_3831, BgL_sz00_3830,
							BgL_backrefsz00_3829, BgL_snz00_3828, BgL_identityz00_3827,
							BgL_casezd2sensitivezf3z21_3826, BgL_nz00_3825,
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3837, BINT(((long) 1))),
							BgL_i1z00_1667);
						if (CBOOL(BgL__ortest_1899z00_1671))
							{	/* Llib/pregexp.scm 659 */
								return BgL__ortest_1899z00_1671;
							}
						else
							{	/* Llib/pregexp.scm 659 */
								return
									PROCEDURE_ENTRY(BgL_skz00_3838) (BgL_skz00_3838,
									BgL_iz00_3835, BEOA);
							}
					}
				}
			}
		}
	}



/* fk */
	obj_t BGl_fkz00zz__pregexpz00(obj_t BgL_envz00_3840)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 648 */
			{	/* Llib/pregexp.scm 649 */
				obj_t BgL_skz00_3841;

				obj_t BgL_iz00_3842;

				BgL_skz00_3841 = PROCEDURE_REF(BgL_envz00_3840, (int) (((long) 0)));
				BgL_iz00_3842 = PROCEDURE_REF(BgL_envz00_3840, (int) (((long) 1)));
				{

					return
						PROCEDURE_ENTRY(BgL_skz00_3841) (BgL_skz00_3841, BgL_iz00_3842,
						BEOA);
				}
			}
		}
	}



/* <anonymous:2595> */
	obj_t BGl_zc3anonymousza32595ze3z83zz__pregexpz00(obj_t BgL_envz00_3843,
		obj_t BgL_i1z00_3857)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 664 */
			{	/* Llib/pregexp.scm 665 */
				obj_t BgL_nz00_3844;

				obj_t BgL_casezd2sensitivezf3z21_3845;

				obj_t BgL_identityz00_3846;

				obj_t BgL_snz00_3847;

				obj_t BgL_backrefsz00_3848;

				obj_t BgL_sz00_3849;

				obj_t BgL_startz00_3850;

				obj_t BgL_skz00_3851;

				obj_t BgL_rez00_3852;

				obj_t BgL_couldzd2loopzd2infinitelyzf3zf3_3853;

				obj_t BgL_maximalzf3zf3_3854;

				obj_t BgL_qz00_3855;

				obj_t BgL_kz00_3856;

				BgL_nz00_3844 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 0)));
				BgL_casezd2sensitivezf3z21_3845 =
					PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 1)));
				BgL_identityz00_3846 =
					PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 2)));
				BgL_snz00_3847 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 3)));
				BgL_backrefsz00_3848 =
					PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 4)));
				BgL_sz00_3849 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 5)));
				BgL_startz00_3850 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 6)));
				BgL_skz00_3851 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 7)));
				BgL_rez00_3852 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 8)));
				BgL_couldzd2loopzd2infinitelyzf3zf3_3853 =
					PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 9)));
				BgL_maximalzf3zf3_3854 =
					PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 10)));
				BgL_qz00_3855 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 11)));
				BgL_kz00_3856 = PROCEDURE_REF(BgL_envz00_3843, (int) (((long) 12)));
				{
					obj_t BgL_i1z00_1676;

					BgL_i1z00_1676 = BgL_i1z00_3857;
					return
						BGl_loupzd2qzd2zz__pregexpz00(BgL_qz00_3855, BgL_maximalzf3zf3_3854,
						BgL_couldzd2loopzd2infinitelyzf3zf3_3853, BgL_rez00_3852,
						BgL_skz00_3851, BgL_startz00_3850, BgL_sz00_3849,
						BgL_backrefsz00_3848, BgL_snz00_3847, BgL_identityz00_3846,
						BgL_casezd2sensitivezf3z21_3845, BgL_nz00_3844,
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_3856, BINT(((long) 1))),
						BgL_i1z00_1676);
		}}}
	}



/* pregexp-replace-aux */
	obj_t BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(obj_t BgL_strz00_59,
		obj_t BgL_insz00_60, long BgL_nz00_61, obj_t BgL_backrefsz00_62)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 674 */
			{
				obj_t BgL_iz00_1725;

				obj_t BgL_rz00_1726;

				BgL_iz00_1725 = BINT(((long) 0));
				BgL_rz00_1726 = BGl_string3160z00zz__pregexpz00;
			BgL_zc3anonymousza32621ze3z83_1727:
				if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1725,
						BINT(BgL_nz00_61)))
					{	/* Llib/pregexp.scm 677 */
						return BgL_rz00_1726;
					}
				else
					{	/* Llib/pregexp.scm 678 */
						unsigned char BgL_cz00_1729;

						BgL_cz00_1729 =
							STRING_REF(BgL_insz00_60, (long) CINT(BgL_iz00_1725));
						if ((BgL_cz00_1729 == ((unsigned char) '\\')))
							{	/* Llib/pregexp.scm 680 */
								obj_t BgL_brzd2izd2_1731;

								BgL_brzd2izd2_1731 =
									BGl_pregexpzd2readzd2escapedzd2numberzd2zz__pregexpz00
									(BgL_insz00_60, BgL_iz00_1725, BgL_nz00_61);
								{	/* Llib/pregexp.scm 680 */
									obj_t BgL_brz00_1732;

									if (CBOOL(BgL_brzd2izd2_1731))
										{	/* Llib/pregexp.scm 681 */
											BgL_brz00_1732 = CAR(BgL_brzd2izd2_1731);
										}
									else
										{	/* Llib/pregexp.scm 681 */
											if (
												(STRING_REF(BgL_insz00_60,
														(long)
														CINT(BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1725,
																BINT(((long) 1))))) == ((unsigned char) '&')))
												{	/* Llib/pregexp.scm 682 */
													BgL_brz00_1732 = BINT(((long) 0));
												}
											else
												{	/* Llib/pregexp.scm 682 */
													BgL_brz00_1732 = BFALSE;
												}
										}
									{	/* Llib/pregexp.scm 681 */
										obj_t BgL_iz00_1733;

										if (CBOOL(BgL_brzd2izd2_1731))
											{	/* Llib/pregexp.scm 684 */
												obj_t BgL_pairz00_3300;

												BgL_pairz00_3300 = BgL_brzd2izd2_1731;
												BgL_iz00_1733 = CAR(CDR(BgL_pairz00_3300));
											}
										else
											{	/* Llib/pregexp.scm 684 */
												if (CBOOL(BgL_brz00_1732))
													{	/* Llib/pregexp.scm 685 */
														BgL_iz00_1733 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1725,
															BINT(((long) 2)));
													}
												else
													{	/* Llib/pregexp.scm 685 */
														BgL_iz00_1733 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1725,
															BINT(((long) 1)));
											}}
										{	/* Llib/pregexp.scm 684 */

											if (CBOOL(BgL_brz00_1732))
												{	/* Llib/pregexp.scm 693 */
													obj_t BgL_arg2624z00_1734;

													{	/* Llib/pregexp.scm 693 */
														obj_t BgL_backrefz00_1735;

														BgL_backrefz00_1735 =
															BGl_pregexpzd2listzd2refz00zz__pregexpz00
															(BgL_backrefsz00_62, BgL_brz00_1732);
														if (CBOOL(BgL_backrefz00_1735))
															{	/* Llib/pregexp.scm 696 */
																obj_t BgL_arg2625z00_1736;

																{	/* Llib/pregexp.scm 696 */
																	obj_t BgL_arg2626z00_1737;

																	obj_t BgL_arg2627z00_1738;

																	BgL_arg2626z00_1737 =
																		CAR(BgL_backrefz00_1735);
																	BgL_arg2627z00_1738 =
																		CDR(BgL_backrefz00_1735);
																	BgL_arg2625z00_1736 =
																		c_substring(BgL_strz00_59,
																		(long) CINT(BgL_arg2626z00_1737),
																		(long) CINT(BgL_arg2627z00_1738));
																}
																BgL_arg2624z00_1734 =
																	string_append(BgL_rz00_1726,
																	BgL_arg2625z00_1736);
															}
														else
															{	/* Llib/pregexp.scm 694 */
																BgL_arg2624z00_1734 = BgL_rz00_1726;
															}
													}
													{
														obj_t BgL_rz00_5817;

														obj_t BgL_iz00_5816;

														BgL_iz00_5816 = BgL_iz00_1733;
														BgL_rz00_5817 = BgL_arg2624z00_1734;
														BgL_rz00_1726 = BgL_rz00_5817;
														BgL_iz00_1725 = BgL_iz00_5816;
														goto BgL_zc3anonymousza32621ze3z83_1727;
													}
												}
											else
												{	/* Llib/pregexp.scm 688 */
													unsigned char BgL_c2z00_1739;

													BgL_c2z00_1739 =
														STRING_REF(BgL_insz00_60,
														(long) CINT(BgL_iz00_1733));
													{	/* Llib/pregexp.scm 689 */
														obj_t BgL_arg2628z00_1740;

														obj_t BgL_arg2629z00_1741;

														BgL_arg2628z00_1740 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1733,
															BINT(((long) 1)));
														if ((BgL_c2z00_1739 == ((unsigned char) '$')))
															{	/* Llib/pregexp.scm 690 */
																BgL_arg2629z00_1741 = BgL_rz00_1726;
															}
														else
															{	/* Llib/pregexp.scm 691 */
																obj_t BgL_arg2631z00_1743;

																{	/* Llib/pregexp.scm 691 */
																	obj_t BgL_list2632z00_1744;

																	BgL_list2632z00_1744 =
																		MAKE_PAIR(BCHAR(BgL_c2z00_1739), BNIL);
																	BgL_arg2631z00_1743 =
																		BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																		(BgL_list2632z00_1744);
																}
																BgL_arg2629z00_1741 =
																	string_append(BgL_rz00_1726,
																	BgL_arg2631z00_1743);
															}
														{
															obj_t BgL_rz00_5829;

															obj_t BgL_iz00_5828;

															BgL_iz00_5828 = BgL_arg2628z00_1740;
															BgL_rz00_5829 = BgL_arg2629z00_1741;
															BgL_rz00_1726 = BgL_rz00_5829;
															BgL_iz00_1725 = BgL_iz00_5828;
															goto BgL_zc3anonymousza32621ze3z83_1727;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Llib/pregexp.scm 698 */
								obj_t BgL_arg2636z00_1748;

								obj_t BgL_arg2637z00_1749;

								BgL_arg2636z00_1748 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1725,
									BINT(((long) 1)));
								{	/* Llib/pregexp.scm 698 */
									obj_t BgL_arg2638z00_1750;

									{	/* Llib/pregexp.scm 698 */
										obj_t BgL_list2639z00_1751;

										BgL_list2639z00_1751 =
											MAKE_PAIR(BCHAR(BgL_cz00_1729), BNIL);
										BgL_arg2638z00_1750 =
											BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
											(BgL_list2639z00_1751);
									}
									BgL_arg2637z00_1749 =
										string_append(BgL_rz00_1726, BgL_arg2638z00_1750);
								}
								{
									obj_t BgL_rz00_5837;

									obj_t BgL_iz00_5836;

									BgL_iz00_5836 = BgL_arg2636z00_1748;
									BgL_rz00_5837 = BgL_arg2637z00_1749;
									BgL_rz00_1726 = BgL_rz00_5837;
									BgL_iz00_1725 = BgL_iz00_5836;
									goto BgL_zc3anonymousza32621ze3z83_1727;
								}
							}
					}
			}
		}
	}



/* pregexp */
	BGL_EXPORTED_DEF obj_t BGl_pregexpz00zz__pregexpz00(obj_t BgL_sz00_63)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 700 */
			BGl_za2pregexpzd2spacezd2sensitivezf3za2zf3zz__pregexpz00 = ((bool_t) 1);
			{	/* Llib/pregexp.scm 703 */
				obj_t BgL_arg2640z00_1753;

				obj_t BgL_arg2641z00_1754;

				BgL_arg2640z00_1753 = BGl_keyword3075z00zz__pregexpz00;
				BgL_arg2641z00_1754 =
					CAR(BGl_pregexpzd2readzd2patternz00zz__pregexpz00(BgL_sz00_63,
						BINT(((long) 0)), STRING_LENGTH(BgL_sz00_63)));
				{	/* Llib/pregexp.scm 703 */
					obj_t BgL_list2642z00_1755;

					{	/* Llib/pregexp.scm 703 */
						obj_t BgL_arg2643z00_1756;

						BgL_arg2643z00_1756 = MAKE_PAIR(BgL_arg2641z00_1754, BNIL);
						BgL_list2642z00_1755 =
							MAKE_PAIR(BgL_arg2640z00_1753, BgL_arg2643z00_1756);
					}
					return BgL_list2642z00_1755;
				}
			}
		}
	}



/* _pregexp */
	obj_t BGl__pregexpz00zz__pregexpz00(obj_t BgL_envz00_3860,
		obj_t BgL_sz00_3861)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 700 */
			{	/* Llib/pregexp.scm 703 */
				obj_t BgL_auxz00_5845;

				if (STRINGP(BgL_sz00_3861))
					{	/* Llib/pregexp.scm 703 */
						BgL_auxz00_5845 = BgL_sz00_3861;
					}
				else
					{
						obj_t BgL_auxz00_5848;

						BgL_auxz00_5848 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 28970)), BGl_string3162z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_sz00_3861);
						FAILURE(BgL_auxz00_5848, BFALSE, BFALSE);
					}
				return BGl_pregexpz00zz__pregexpz00(BgL_auxz00_5845);
			}
		}
	}



/* pregexp-match-positions */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t
		BgL_patz00_64, obj_t BgL_strz00_65, obj_t BgL_optzd2argszd2_66)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 705 */
			if (STRINGP(BgL_patz00_64))
				{	/* Llib/pregexp.scm 707 */
					BgL_patz00_64 = BGl_pregexpz00zz__pregexpz00(BgL_patz00_64);
				}
			else
				{	/* Llib/pregexp.scm 707 */
					if (PAIRP(BgL_patz00_64))
						{	/* Llib/pregexp.scm 708 */
							BTRUE;
						}
					else
						{	/* Llib/pregexp.scm 710 */
							obj_t BgL_list2649z00_1762;

							{	/* Llib/pregexp.scm 710 */
								obj_t BgL_arg2650z00_1763;

								obj_t BgL_arg2651z00_1764;

								BgL_arg2650z00_1763 = BGl_symbol3164z00zz__pregexpz00;
								BgL_arg2651z00_1764 = MAKE_PAIR(BgL_patz00_64, BNIL);
								BgL_list2649z00_1762 =
									MAKE_PAIR(BgL_arg2650z00_1763, BgL_arg2651z00_1764);
							}
							BGl_errorz00zz__errorz00(BGl_string3038z00zz__pregexpz00,
								BGl_symbol3166z00zz__pregexpz00, CAR(BgL_list2649z00_1762));
						}
				}
			{	/* Llib/pregexp.scm 712 */
				long BgL_strzd2lenzd2_1765;

				BgL_strzd2lenzd2_1765 = STRING_LENGTH(BgL_strz00_65);
				{	/* Llib/pregexp.scm 712 */
					obj_t BgL_startz00_1766;

					if (NULLP(BgL_optzd2argszd2_66))
						{	/* Llib/pregexp.scm 713 */
							BgL_startz00_1766 = BINT(((long) 0));
						}
					else
						{	/* Llib/pregexp.scm 714 */
							obj_t BgL_startz00_1777;

							BgL_startz00_1777 = CAR(BgL_optzd2argszd2_66);
							BgL_optzd2argszd2_66 = CDR(BgL_optzd2argszd2_66);
							BgL_startz00_1766 = BgL_startz00_1777;
						}
					{	/* Llib/pregexp.scm 713 */
						obj_t BgL_endz00_1767;

						if (NULLP(BgL_optzd2argszd2_66))
							{	/* Llib/pregexp.scm 717 */
								BgL_endz00_1767 = BINT(BgL_strzd2lenzd2_1765);
							}
						else
							{	/* Llib/pregexp.scm 717 */
								BgL_endz00_1767 = CAR(BgL_optzd2argszd2_66);
							}
						{	/* Llib/pregexp.scm 717 */

							{
								obj_t BgL_iz00_1769;

								BgL_iz00_1769 = BgL_startz00_1766;
							BgL_zc3anonymousza32652ze3z83_1770:
								if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_iz00_1769,
										BgL_endz00_1767))
									{	/* Llib/pregexp.scm 721 */
										obj_t BgL__ortest_1903z00_1772;

										BgL__ortest_1903z00_1772 =
											BGl_pregexpzd2matchzd2positionszd2auxzd2zz__pregexpz00
											(BgL_patz00_64, BgL_strz00_65, BgL_strzd2lenzd2_1765,
											BgL_startz00_1766, BgL_endz00_1767, BgL_iz00_1769);
										if (CBOOL(BgL__ortest_1903z00_1772))
											{	/* Llib/pregexp.scm 721 */
												return BgL__ortest_1903z00_1772;
											}
										else
											{
												obj_t BgL_iz00_5877;

												BgL_iz00_5877 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_1769,
													BINT(((long) 1)));
												BgL_iz00_1769 = BgL_iz00_5877;
												goto BgL_zc3anonymousza32652ze3z83_1770;
											}
									}
								else
									{	/* Llib/pregexp.scm 720 */
										return BFALSE;
									}
							}
						}
					}
				}
			}
		}
	}



/* _pregexp-match-positions */
	obj_t BGl__pregexpzd2matchzd2positionsz00zz__pregexpz00(obj_t BgL_envz00_3862,
		obj_t BgL_patz00_3863, obj_t BgL_strz00_3864, obj_t BgL_optzd2argszd2_3865)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 705 */
			{	/* Llib/pregexp.scm 723 */
				obj_t BgL_auxz00_5880;

				if (STRINGP(BgL_strz00_3864))
					{	/* Llib/pregexp.scm 723 */
						BgL_auxz00_5880 = BgL_strz00_3864;
					}
				else
					{
						obj_t BgL_auxz00_5883;

						BgL_auxz00_5883 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 29772)), BGl_string3168z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_strz00_3864);
						FAILURE(BgL_auxz00_5883, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_3863,
					BgL_auxz00_5880, BgL_optzd2argszd2_3865);
			}
		}
	}



/* pregexp-match */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2matchzd2zz__pregexpz00(obj_t
		BgL_patz00_67, obj_t BgL_strz00_68, obj_t BgL_optzd2argszd2_69)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 725 */
			{	/* Llib/pregexp.scm 727 */
				obj_t BgL_ixzd2prszd2_1778;

				{	/* Llib/pregexp.scm 727 */
					obj_t BgL_runner2671z00_1801;

					{	/* Llib/pregexp.scm 727 */
						obj_t BgL_list2667z00_1797;

						{	/* Llib/pregexp.scm 727 */
							obj_t BgL_arg2668z00_1798;

							BgL_arg2668z00_1798 = MAKE_PAIR(BgL_optzd2argszd2_69, BNIL);
							BgL_list2667z00_1797 =
								MAKE_PAIR(BgL_strz00_68, BgL_arg2668z00_1798);
						}
						BgL_runner2671z00_1801 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_patz00_67,
							BgL_list2667z00_1797);
					}
					{	/* Llib/pregexp.scm 727 */
						obj_t BgL_aux2669z00_1799;

						BgL_aux2669z00_1799 = CAR(BgL_runner2671z00_1801);
						BgL_runner2671z00_1801 = CDR(BgL_runner2671z00_1801);
						{	/* Llib/pregexp.scm 727 */
							obj_t BgL_aux2670z00_1800;

							BgL_aux2670z00_1800 = CAR(BgL_runner2671z00_1801);
							BgL_runner2671z00_1801 = CDR(BgL_runner2671z00_1801);
							BgL_ixzd2prszd2_1778 =
								BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00
								(BgL_aux2669z00_1799, BgL_aux2670z00_1800,
								BgL_runner2671z00_1801);
						}
					}
				}
				if (CBOOL(BgL_ixzd2prszd2_1778))
					{	/* Llib/pregexp.scm 728 */
						if (NULLP(BgL_ixzd2prszd2_1778))
							{	/* Llib/pregexp.scm 729 */
								return BNIL;
							}
						else
							{	/* Llib/pregexp.scm 729 */
								obj_t BgL_head1939z00_1782;

								BgL_head1939z00_1782 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l1937z00_1784;

									obj_t BgL_tail1940z00_1785;

									BgL_l1937z00_1784 = BgL_ixzd2prszd2_1778;
									BgL_tail1940z00_1785 = BgL_head1939z00_1782;
								BgL_zc3anonymousza32659ze3z83_1786:
									if (NULLP(BgL_l1937z00_1784))
										{	/* Llib/pregexp.scm 729 */
											return CDR(BgL_head1939z00_1782);
										}
									else
										{	/* Llib/pregexp.scm 729 */
											obj_t BgL_newtail1941z00_1788;

											{	/* Llib/pregexp.scm 729 */
												obj_t BgL_arg2663z00_1790;

												{	/* Llib/pregexp.scm 729 */
													obj_t BgL_ixzd2przd2_1792;

													BgL_ixzd2przd2_1792 = CAR(BgL_l1937z00_1784);
													if (CBOOL(BgL_ixzd2przd2_1792))
														{	/* Llib/pregexp.scm 732 */
															obj_t BgL_arg2665z00_1794;

															obj_t BgL_arg2666z00_1795;

															BgL_arg2665z00_1794 = CAR(BgL_ixzd2przd2_1792);
															BgL_arg2666z00_1795 = CDR(BgL_ixzd2przd2_1792);
															BgL_arg2663z00_1790 =
																c_substring(BgL_strz00_68,
																(long) CINT(BgL_arg2665z00_1794),
																(long) CINT(BgL_arg2666z00_1795));
														}
													else
														{	/* Llib/pregexp.scm 731 */
															BgL_arg2663z00_1790 = BFALSE;
														}
												}
												BgL_newtail1941z00_1788 =
													MAKE_PAIR(BgL_arg2663z00_1790, BNIL);
											}
											SET_CDR(BgL_tail1940z00_1785, BgL_newtail1941z00_1788);
											{
												obj_t BgL_tail1940z00_5916;

												obj_t BgL_l1937z00_5914;

												BgL_l1937z00_5914 = CDR(BgL_l1937z00_1784);
												BgL_tail1940z00_5916 = BgL_newtail1941z00_1788;
												BgL_tail1940z00_1785 = BgL_tail1940z00_5916;
												BgL_l1937z00_1784 = BgL_l1937z00_5914;
												goto BgL_zc3anonymousza32659ze3z83_1786;
											}
										}
								}
							}
					}
				else
					{	/* Llib/pregexp.scm 728 */
						return BFALSE;
					}
			}
		}
	}



/* _pregexp-match */
	obj_t BGl__pregexpzd2matchzd2zz__pregexpz00(obj_t BgL_envz00_3866,
		obj_t BgL_patz00_3867, obj_t BgL_strz00_3868, obj_t BgL_optzd2argszd2_3869)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 725 */
			{	/* Llib/pregexp.scm 727 */
				obj_t BgL_auxz00_5917;

				if (STRINGP(BgL_strz00_3868))
					{	/* Llib/pregexp.scm 727 */
						BgL_auxz00_5917 = BgL_strz00_3868;
					}
				else
					{
						obj_t BgL_auxz00_5920;

						BgL_auxz00_5920 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 29834)), BGl_string3169z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_strz00_3868);
						FAILURE(BgL_auxz00_5920, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2matchzd2zz__pregexpz00(BgL_patz00_3867, BgL_auxz00_5917,
					BgL_optzd2argszd2_3869);
			}
		}
	}



/* pregexp-split */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2splitzd2zz__pregexpz00(obj_t
		BgL_patz00_70, obj_t BgL_strz00_71)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 735 */
			{	/* Llib/pregexp.scm 738 */
				long BgL_nz00_1802;

				BgL_nz00_1802 = STRING_LENGTH(BgL_strz00_71);
				{
					obj_t BgL_iz00_1805;

					obj_t BgL_rz00_1806;

					bool_t BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807;

					BgL_iz00_1805 = BINT(((long) 0));
					BgL_rz00_1806 = BNIL;
					BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807 = ((bool_t) 0);
				BgL_zc3anonymousza32672ze3z83_1808:
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1805,
							BINT(BgL_nz00_1802)))
						{	/* Llib/pregexp.scm 740 */
							return BGl_pregexpzd2reversez12zc0zz__pregexpz00(BgL_rz00_1806);
						}
					else
						{	/* Llib/pregexp.scm 741 */
							obj_t BgL_g1907z00_1810;

							{	/* Llib/pregexp.scm 741 */
								obj_t BgL_list2685z00_1827;

								{	/* Llib/pregexp.scm 741 */
									obj_t BgL_arg2686z00_1828;

									BgL_arg2686z00_1828 = MAKE_PAIR(BINT(BgL_nz00_1802), BNIL);
									BgL_list2685z00_1827 =
										MAKE_PAIR(BgL_iz00_1805, BgL_arg2686z00_1828);
								}
								BgL_g1907z00_1810 =
									BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00
									(BgL_patz00_70, BgL_strz00_71, BgL_list2685z00_1827);
							}
							if (CBOOL(BgL_g1907z00_1810))
								{	/* Llib/pregexp.scm 744 */
									obj_t BgL_jkz00_1813;

									BgL_jkz00_1813 = CAR(BgL_g1907z00_1810);
									{	/* Llib/pregexp.scm 745 */
										obj_t BgL_jz00_1814;

										obj_t BgL_kz00_1815;

										BgL_jz00_1814 = CAR(BgL_jkz00_1813);
										BgL_kz00_1815 = CDR(BgL_jkz00_1813);
										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_jz00_1814,
												BgL_kz00_1815))
											{	/* Llib/pregexp.scm 749 */
												obj_t BgL_arg2675z00_1817;

												obj_t BgL_arg2676z00_1818;

												BgL_arg2675z00_1817 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_kz00_1815,
													BINT(((long) 1)));
												{	/* Llib/pregexp.scm 750 */
													obj_t BgL_arg2677z00_1819;

													{	/* Llib/pregexp.scm 750 */
														obj_t BgL_arg2678z00_1820;

														BgL_arg2678z00_1820 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_jz00_1814,
															BINT(((long) 1)));
														BgL_arg2677z00_1819 =
															c_substring(BgL_strz00_71,
															(long) CINT(BgL_iz00_1805),
															(long) CINT(BgL_arg2678z00_1820));
													}
													BgL_arg2676z00_1818 =
														MAKE_PAIR(BgL_arg2677z00_1819, BgL_rz00_1806);
												}
												{
													bool_t
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5951;
													obj_t BgL_rz00_5950;

													obj_t BgL_iz00_5949;

													BgL_iz00_5949 = BgL_arg2675z00_1817;
													BgL_rz00_5950 = BgL_arg2676z00_1818;
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5951
														= ((bool_t) 1);
													BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807
														=
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5951;
													BgL_rz00_1806 = BgL_rz00_5950;
													BgL_iz00_1805 = BgL_iz00_5949;
													goto BgL_zc3anonymousza32672ze3z83_1808;
												}
											}
										else
											{	/* Llib/pregexp.scm 751 */
												bool_t BgL_testz00_5952;

												if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_jz00_1814,
														BgL_iz00_1805))
													{	/* Llib/pregexp.scm 751 */
														BgL_testz00_5952 =
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807;
													}
												else
													{	/* Llib/pregexp.scm 751 */
														BgL_testz00_5952 = ((bool_t) 0);
													}
												if (BgL_testz00_5952)
													{
														bool_t
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5956;
														obj_t BgL_iz00_5955;

														BgL_iz00_5955 = BgL_kz00_1815;
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5956
															= ((bool_t) 0);
														BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807
															=
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5956;
														BgL_iz00_1805 = BgL_iz00_5955;
														goto BgL_zc3anonymousza32672ze3z83_1808;
													}
												else
													{	/* Llib/pregexp.scm 755 */
														obj_t BgL_arg2680z00_1822;

														BgL_arg2680z00_1822 =
															MAKE_PAIR(c_substring(BgL_strz00_71,
																(long) CINT(BgL_iz00_1805),
																(long) CINT(BgL_jz00_1814)), BgL_rz00_1806);
														{
															bool_t
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5963;
															obj_t BgL_rz00_5962;

															obj_t BgL_iz00_5961;

															BgL_iz00_5961 = BgL_kz00_1815;
															BgL_rz00_5962 = BgL_arg2680z00_1822;
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5963
																= ((bool_t) 0);
															BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807
																=
																BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5963;
															BgL_rz00_1806 = BgL_rz00_5962;
															BgL_iz00_1805 = BgL_iz00_5961;
															goto BgL_zc3anonymousza32672ze3z83_1808;
														}
													}
											}
									}
								}
							else
								{	/* Llib/pregexp.scm 756 */
									obj_t BgL_arg2683z00_1825;

									BgL_arg2683z00_1825 =
										MAKE_PAIR(c_substring(BgL_strz00_71,
											(long) CINT(BgL_iz00_1805), BgL_nz00_1802),
										BgL_rz00_1806);
									{
										bool_t
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5970;
										obj_t BgL_rz00_5969;

										obj_t BgL_iz00_5967;

										BgL_iz00_5967 = BINT(BgL_nz00_1802);
										BgL_rz00_5969 = BgL_arg2683z00_1825;
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5970 =
											((bool_t) 0);
										BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_1807 =
											BgL_pickedzd2upzd2onezd2undelimitedzd2charzf3zf3_5970;
										BgL_rz00_1806 = BgL_rz00_5969;
										BgL_iz00_1805 = BgL_iz00_5967;
										goto BgL_zc3anonymousza32672ze3z83_1808;
									}
								}
						}
				}
			}
		}
	}



/* _pregexp-split */
	obj_t BGl__pregexpzd2splitzd2zz__pregexpz00(obj_t BgL_envz00_3870,
		obj_t BgL_patz00_3871, obj_t BgL_strz00_3872)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 735 */
			{	/* Llib/pregexp.scm 738 */
				obj_t BgL_auxz00_5972;

				if (STRINGP(BgL_strz00_3872))
					{	/* Llib/pregexp.scm 738 */
						BgL_auxz00_5972 = BgL_strz00_3872;
					}
				else
					{
						obj_t BgL_auxz00_5975;

						BgL_auxz00_5975 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 30177)), BGl_string3170z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_strz00_3872);
						FAILURE(BgL_auxz00_5975, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2splitzd2zz__pregexpz00(BgL_patz00_3871,
					BgL_auxz00_5972);
			}
		}
	}



/* pregexp-replace */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replacezd2zz__pregexpz00(obj_t
		BgL_patz00_72, obj_t BgL_strz00_73, obj_t BgL_insz00_74)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 758 */
			{	/* Llib/pregexp.scm 760 */
				long BgL_nz00_1830;

				BgL_nz00_1830 = STRING_LENGTH(BgL_strz00_73);
				{	/* Llib/pregexp.scm 760 */
					obj_t BgL_ppz00_1831;

					{	/* Llib/pregexp.scm 761 */
						obj_t BgL_list2690z00_1838;

						{	/* Llib/pregexp.scm 761 */
							obj_t BgL_arg2692z00_1840;

							BgL_arg2692z00_1840 = MAKE_PAIR(BINT(BgL_nz00_1830), BNIL);
							BgL_list2690z00_1838 =
								MAKE_PAIR(BINT(((long) 0)), BgL_arg2692z00_1840);
						}
						BgL_ppz00_1831 =
							BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00(BgL_patz00_72,
							BgL_strz00_73, BgL_list2690z00_1838);
					}
					{	/* Llib/pregexp.scm 761 */

						if (CBOOL(BgL_ppz00_1831))
							{	/* Llib/pregexp.scm 763 */
								long BgL_inszd2lenzd2_1832;

								obj_t BgL_mzd2izd2_1833;

								obj_t BgL_mzd2nzd2_1834;

								BgL_inszd2lenzd2_1832 = STRING_LENGTH(BgL_insz00_74);
								{	/* Llib/pregexp.scm 764 */
									obj_t BgL_pairz00_3369;

									BgL_pairz00_3369 = BgL_ppz00_1831;
									BgL_mzd2izd2_1833 = CAR(CAR(BgL_pairz00_3369));
								}
								{	/* Llib/pregexp.scm 765 */
									obj_t BgL_pairz00_3373;

									BgL_pairz00_3373 = BgL_ppz00_1831;
									BgL_mzd2nzd2_1834 = CDR(CAR(BgL_pairz00_3373));
								}
								return
									string_append_3(c_substring(BgL_strz00_73, ((long) 0),
										(long) CINT(BgL_mzd2izd2_1833)),
									BGl_pregexpzd2replacezd2auxz00zz__pregexpz00(BgL_strz00_73,
										BgL_insz00_74, BgL_inszd2lenzd2_1832, BgL_ppz00_1831),
									c_substring(BgL_strz00_73, (long) CINT(BgL_mzd2nzd2_1834),
										BgL_nz00_1830));
							}
						else
							{	/* Llib/pregexp.scm 762 */
								return BgL_strz00_73;
							}
					}
				}
			}
		}
	}



/* _pregexp-replace */
	obj_t BGl__pregexpzd2replacezd2zz__pregexpz00(obj_t BgL_envz00_3873,
		obj_t BgL_patz00_3874, obj_t BgL_strz00_3875, obj_t BgL_insz00_3876)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 758 */
			{	/* Llib/pregexp.scm 760 */
				obj_t BgL_auxz00_6006;

				obj_t BgL_auxz00_5999;

				if (STRINGP(BgL_insz00_3876))
					{	/* Llib/pregexp.scm 760 */
						BgL_auxz00_6006 = BgL_insz00_3876;
					}
				else
					{
						obj_t BgL_auxz00_6009;

						BgL_auxz00_6009 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 31230)), BGl_string3171z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_insz00_3876);
						FAILURE(BgL_auxz00_6009, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_3875))
					{	/* Llib/pregexp.scm 760 */
						BgL_auxz00_5999 = BgL_strz00_3875;
					}
				else
					{
						obj_t BgL_auxz00_6002;

						BgL_auxz00_6002 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 31230)), BGl_string3171z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_strz00_3875);
						FAILURE(BgL_auxz00_6002, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replacezd2zz__pregexpz00(BgL_patz00_3874,
					BgL_auxz00_5999, BgL_auxz00_6006);
			}
		}
	}



/* pregexp-replace* */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2replaceza2z70zz__pregexpz00(obj_t
		BgL_patz00_75, obj_t BgL_strz00_76, obj_t BgL_insz00_77)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 771 */
			{	/* Llib/pregexp.scm 775 */
				obj_t BgL_patz00_1841;

				long BgL_nz00_1842;

				long BgL_inszd2lenzd2_1843;

				if (STRINGP(BgL_patz00_75))
					{	/* Llib/pregexp.scm 775 */
						BgL_patz00_1841 = BGl_pregexpz00zz__pregexpz00(BgL_patz00_75);
					}
				else
					{	/* Llib/pregexp.scm 775 */
						BgL_patz00_1841 = BgL_patz00_75;
					}
				BgL_nz00_1842 = STRING_LENGTH(BgL_strz00_76);
				BgL_inszd2lenzd2_1843 = STRING_LENGTH(BgL_insz00_77);
				{
					obj_t BgL_iz00_1845;

					obj_t BgL_rz00_1846;

					BgL_iz00_1845 = BINT(((long) 0));
					BgL_rz00_1846 = BGl_string3160z00zz__pregexpz00;
				BgL_zc3anonymousza32693ze3z83_1847:
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_iz00_1845,
							BINT(BgL_nz00_1842)))
						{	/* Llib/pregexp.scm 781 */
							return BgL_rz00_1846;
						}
					else
						{	/* Llib/pregexp.scm 782 */
							obj_t BgL_ppz00_1849;

							{	/* Llib/pregexp.scm 782 */
								obj_t BgL_list2702z00_1857;

								{	/* Llib/pregexp.scm 782 */
									obj_t BgL_arg2703z00_1858;

									BgL_arg2703z00_1858 = MAKE_PAIR(BINT(BgL_nz00_1842), BNIL);
									BgL_list2702z00_1857 =
										MAKE_PAIR(BgL_iz00_1845, BgL_arg2703z00_1858);
								}
								BgL_ppz00_1849 =
									BGl_pregexpzd2matchzd2positionsz00zz__pregexpz00
									(BgL_patz00_1841, BgL_strz00_76, BgL_list2702z00_1857);
							}
							if (CBOOL(BgL_ppz00_1849))
								{	/* Llib/pregexp.scm 793 */
									obj_t BgL_arg2695z00_1850;

									obj_t BgL_arg2696z00_1851;

									{	/* Llib/pregexp.scm 793 */
										obj_t BgL_pairz00_3386;

										BgL_pairz00_3386 = BgL_ppz00_1849;
										BgL_arg2695z00_1850 = CDR(CAR(BgL_pairz00_3386));
									}
									{	/* Llib/pregexp.scm 796 */
										obj_t BgL_arg2697z00_1852;

										obj_t BgL_arg2698z00_1853;

										{	/* Llib/pregexp.scm 796 */
											obj_t BgL_arg2699z00_1854;

											{	/* Llib/pregexp.scm 796 */
												obj_t BgL_pairz00_3390;

												BgL_pairz00_3390 = BgL_ppz00_1849;
												BgL_arg2699z00_1854 = CAR(CAR(BgL_pairz00_3390));
											}
											BgL_arg2697z00_1852 =
												c_substring(BgL_strz00_76,
												(long) CINT(BgL_iz00_1845),
												(long) CINT(BgL_arg2699z00_1854));
										}
										BgL_arg2698z00_1853 =
											BGl_pregexpzd2replacezd2auxz00zz__pregexpz00
											(BgL_strz00_76, BgL_insz00_77, BgL_inszd2lenzd2_1843,
											BgL_ppz00_1849);
										BgL_arg2696z00_1851 =
											string_append_3(BgL_rz00_1846, BgL_arg2697z00_1852,
											BgL_arg2698z00_1853);
									}
									{
										obj_t BgL_rz00_6038;

										obj_t BgL_iz00_6037;

										BgL_iz00_6037 = BgL_arg2695z00_1850;
										BgL_rz00_6038 = BgL_arg2696z00_1851;
										BgL_rz00_1846 = BgL_rz00_6038;
										BgL_iz00_1845 = BgL_iz00_6037;
										goto BgL_zc3anonymousza32693ze3z83_1847;
									}
								}
							else
								{	/* Llib/pregexp.scm 783 */
									if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_iz00_1845,
											BINT(((long) 0))))
										{	/* Llib/pregexp.scm 784 */
											return BgL_strz00_76;
										}
									else
										{	/* Llib/pregexp.scm 784 */
											return
												string_append(BgL_rz00_1846,
												c_substring(BgL_strz00_76,
													(long) CINT(BgL_iz00_1845), BgL_nz00_1842));
		}}}}}}
	}



/* _pregexp-replace* */
	obj_t BGl__pregexpzd2replaceza2z70zz__pregexpz00(obj_t BgL_envz00_3877,
		obj_t BgL_patz00_3878, obj_t BgL_strz00_3879, obj_t BgL_insz00_3880)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 771 */
			{	/* Llib/pregexp.scm 775 */
				obj_t BgL_auxz00_6053;

				obj_t BgL_auxz00_6046;

				if (STRINGP(BgL_insz00_3880))
					{	/* Llib/pregexp.scm 775 */
						BgL_auxz00_6053 = BgL_insz00_3880;
					}
				else
					{
						obj_t BgL_auxz00_6056;

						BgL_auxz00_6056 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 31731)), BGl_string3172z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_insz00_3880);
						FAILURE(BgL_auxz00_6056, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_strz00_3879))
					{	/* Llib/pregexp.scm 775 */
						BgL_auxz00_6046 = BgL_strz00_3879;
					}
				else
					{
						obj_t BgL_auxz00_6049;

						BgL_auxz00_6049 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 31731)), BGl_string3172z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_strz00_3879);
						FAILURE(BgL_auxz00_6049, BFALSE, BFALSE);
					}
				return
					BGl_pregexpzd2replaceza2z70zz__pregexpz00(BgL_patz00_3878,
					BgL_auxz00_6046, BgL_auxz00_6053);
			}
		}
	}



/* pregexp-quote */
	BGL_EXPORTED_DEF obj_t BGl_pregexpzd2quotezd2zz__pregexpz00(obj_t BgL_sz00_78)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 799 */
			{	/* Llib/pregexp.scm 801 */
				long BgL_g1909z00_1861;

				BgL_g1909z00_1861 =
					(long)
					CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(STRING_LENGTH
							(BgL_sz00_78)), BINT(((long) 1))));
				{
					long BgL_iz00_1864;

					obj_t BgL_rz00_1865;

					BgL_iz00_1864 = BgL_g1909z00_1861;
					BgL_rz00_1865 = BNIL;
				BgL_zc3anonymousza32705ze3z83_1866:
					if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1864),
							BINT(((long) 0))))
						{	/* Llib/pregexp.scm 802 */
							return
								BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(BgL_rz00_1865);
						}
					else
						{	/* Llib/pregexp.scm 803 */
							long BgL_arg2707z00_1868;

							obj_t BgL_arg2708z00_1869;

							BgL_arg2707z00_1868 =
								(long)
								CINT(BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(BgL_iz00_1864),
									BINT(((long) 1))));
							{	/* Llib/pregexp.scm 804 */
								unsigned char BgL_cz00_1870;

								BgL_cz00_1870 = STRING_REF(BgL_sz00_78, BgL_iz00_1864);
								if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BCHAR
											(BgL_cz00_1870), BGl_list3173z00zz__pregexpz00)))
									{	/* Llib/pregexp.scm 807 */
										obj_t BgL_arg2710z00_1872;

										BgL_arg2710z00_1872 =
											MAKE_PAIR(BCHAR(BgL_cz00_1870), BgL_rz00_1865);
										BgL_arg2708z00_1869 =
											MAKE_PAIR(BCHAR(((unsigned char) '\\')),
											BgL_arg2710z00_1872);
									}
								else
									{	/* Llib/pregexp.scm 805 */
										BgL_arg2708z00_1869 =
											MAKE_PAIR(BCHAR(BgL_cz00_1870), BgL_rz00_1865);
									}
							}
							{
								obj_t BgL_rz00_6087;

								long BgL_iz00_6086;

								BgL_iz00_6086 = BgL_arg2707z00_1868;
								BgL_rz00_6087 = BgL_arg2708z00_1869;
								BgL_rz00_1865 = BgL_rz00_6087;
								BgL_iz00_1864 = BgL_iz00_6086;
								goto BgL_zc3anonymousza32705ze3z83_1866;
							}
						}
				}
			}
		}
	}



/* _pregexp-quote */
	obj_t BGl__pregexpzd2quotezd2zz__pregexpz00(obj_t BgL_envz00_3881,
		obj_t BgL_sz00_3882)
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 799 */
			{	/* Llib/pregexp.scm 801 */
				obj_t BgL_auxz00_6088;

				if (STRINGP(BgL_sz00_3882))
					{	/* Llib/pregexp.scm 801 */
						BgL_auxz00_6088 = BgL_sz00_3882;
					}
				else
					{
						obj_t BgL_auxz00_6091;

						BgL_auxz00_6091 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3161z00zz__pregexpz00,
							BINT(((long) 32783)), BGl_string3174z00zz__pregexpz00,
							BGl_string3163z00zz__pregexpz00, BgL_sz00_3882);
						FAILURE(BgL_auxz00_6091, BFALSE, BFALSE);
					}
				return BGl_pregexpzd2quotezd2zz__pregexpz00(BgL_auxz00_6088);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__pregexpz00()
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__pregexpz00()
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__pregexpz00()
	{
		AN_OBJECT;
		{	/* Llib/pregexp.scm 17 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3175z00zz__pregexpz00));
		}
	}

#ifdef __cplusplus
}
#endif
