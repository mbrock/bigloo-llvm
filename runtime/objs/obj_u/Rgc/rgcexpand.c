/*===========================================================================*/
/*   (Rgc/rgcexpand.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcexpand.scm -indent -o objs/obj_u/Rgc/rgcexpand.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol3060z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3062z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3064z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3066z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3068z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3070z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3072z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3074z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol3076z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3078z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3080z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3082z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3084z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3086z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3088z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3100z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3090z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3102z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3092z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3104z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3094z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3106z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3096z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3108z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3098z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3110z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3112z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3114z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3116z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3118z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3120z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3123z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3126z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl__expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3128z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3130z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3132z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3135z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3137z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3139z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3141z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3143z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3145z00zz__rgc_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t, obj_t);
	static obj_t BGl_symbol3147z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3149z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3151z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3153z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3155z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3157z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3161z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3163z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3165z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00();
	static obj_t BGl_symbol3167z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3169z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3171z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3173z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol3175z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3177z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3179z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3181z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3183z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3185z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3187z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3189z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3201z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3191z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3193z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3204z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3195z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3207z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3197z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3199z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3211z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3213z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3215z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3220z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3222z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3224z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3227z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3230z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3234z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3240z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3244z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3250z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3252z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3255z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_expandz00();
	static obj_t BGl_symbol3257z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3262z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3264z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3270z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3274z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3281z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3283z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3285z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3291z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3294z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_compilezd2dfazd2zz__rgc_compilez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_expandz00();
	extern obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_expandz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__expandzd2stringzd2casez00zz__rgc_expandz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2stringzd2casez00zz__rgc_expandz00(obj_t,
		obj_t);
	extern obj_t BGl_za2unsafezd2rgcza2zd2zz__rgcz00;
	static obj_t BGl_list3203z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3206z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t);
	static obj_t BGl_list3210z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3209z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3217z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3218z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3219z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3226z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3229z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3232z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3233z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3236z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3237z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3238z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3239z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3242z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3243z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3246z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3247z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3248z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3249z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3254z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3260z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3259z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3261z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3266z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3267z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3268z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3269z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3272z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3273z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3276z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3277z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3278z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3280z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3279z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3288z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3290z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3289z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3293z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_list3296z00zz__rgc_expandz00 = BUNSPEC;
	extern obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
	extern obj_t BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00();
	extern obj_t BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00(obj_t, obj_t);
	extern obj_t BGl_resetzd2treez12zc0zz__rgc_treez00();
	extern obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2regularzd2parserz00zz__rgc_expandz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_expandz00();
	static obj_t BGl_symbol3038z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3040z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3042z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3044z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3046z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3048z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3050z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3054z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3056z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t BGl_symbol3058z00zz__rgc_expandz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00,
		BgL_bgl__expandza7d2regula3299za7,
		BGl__expandzd2regularzd2grammarz00zz__rgc_expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00,
		BgL_bgl__expandza7d2string3300za7,
		BGl__expandzd2stringzd2casez00zz__rgc_expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3039z00zz__rgc_expandz00,
		BgL_bgl_string3039za700za7za7_3301za7, "port", 4);
	      DEFINE_STRING(BGl_string3041z00zz__rgc_expandz00,
		BgL_bgl_string3041za700za7za7_3302za7, "let", 3);
	      DEFINE_STRING(BGl_string3043z00zz__rgc_expandz00,
		BgL_bgl_string3043za700za7za7_3303za7, "open-input-string", 17);
	      DEFINE_STRING(BGl_string3045z00zz__rgc_expandz00,
		BgL_bgl_string3045za700za7za7_3304za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string3047z00zz__rgc_expandz00,
		BgL_bgl_string3047za700za7za7_3305za7, "read/rp", 7);
	      DEFINE_STRING(BGl_string3049z00zz__rgc_expandz00,
		BgL_bgl_string3049za700za7za7_3306za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3051z00zz__rgc_expandz00,
		BgL_bgl_string3051za700za7za7_3307za7, "close-input-port", 16);
	      DEFINE_STRING(BGl_string3052z00zz__rgc_expandz00,
		BgL_bgl_string3052za700za7za7_3308za7, "string-case", 11);
	      DEFINE_STRING(BGl_string3053z00zz__rgc_expandz00,
		BgL_bgl_string3053za700za7za7_3309za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string3055z00zz__rgc_expandz00,
		BgL_bgl_string3055za700za7za7_3310za7, "the-rgc-context", 15);
	      DEFINE_STRING(BGl_string3057z00zz__rgc_expandz00,
		BgL_bgl_string3057za700za7za7_3311za7, "lambda", 6);
	      DEFINE_STRING(BGl_string3059z00zz__rgc_expandz00,
		BgL_bgl_string3059za700za7za7_3312za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3061z00zz__rgc_expandz00,
		BgL_bgl_string3061za700za7za7_3313za7, "define", 6);
	      DEFINE_STRING(BGl_string3063z00zz__rgc_expandz00,
		BgL_bgl_string3063za700za7za7_3314za7, "the-port::input-port", 20);
	      DEFINE_STRING(BGl_string3065z00zz__rgc_expandz00,
		BgL_bgl_string3065za700za7za7_3315za7, "the-character::char", 19);
	      DEFINE_STRING(BGl_string3067z00zz__rgc_expandz00,
		BgL_bgl_string3067za700za7za7_3316za7, "rgc-buffer-character", 20);
	      DEFINE_STRING(BGl_string3069z00zz__rgc_expandz00,
		BgL_bgl_string3069za700za7za7_3317za7, "the-byte::int", 13);
	      DEFINE_STRING(BGl_string3071z00zz__rgc_expandz00,
		BgL_bgl_string3071za700za7za7_3318za7, "rgc-buffer-byte", 15);
	      DEFINE_STRING(BGl_string3073z00zz__rgc_expandz00,
		BgL_bgl_string3073za700za7za7_3319za7, "the-byte-ref::int", 17);
	      DEFINE_STRING(BGl_string3075z00zz__rgc_expandz00,
		BgL_bgl_string3075za700za7za7_3320za7, "offset::int", 11);
	      DEFINE_STRING(BGl_string3077z00zz__rgc_expandz00,
		BgL_bgl_string3077za700za7za7_3321za7, "rgc-buffer-byte-ref", 19);
	      DEFINE_STRING(BGl_string3079z00zz__rgc_expandz00,
		BgL_bgl_string3079za700za7za7_3322za7, "offset", 6);
	      DEFINE_STRING(BGl_string3081z00zz__rgc_expandz00,
		BgL_bgl_string3081za700za7za7_3323za7, "the-string::bstring", 19);
	      DEFINE_STRING(BGl_string3083z00zz__rgc_expandz00,
		BgL_bgl_string3083za700za7za7_3324za7, "rgc-buffer-substring", 20);
	      DEFINE_STRING(BGl_string3085z00zz__rgc_expandz00,
		BgL_bgl_string3085za700za7za7_3325za7, "the-length", 10);
	      DEFINE_STRING(BGl_string3087z00zz__rgc_expandz00,
		BgL_bgl_string3087za700za7za7_3326za7, "the-substring::bstring", 22);
	      DEFINE_STRING(BGl_string3089z00zz__rgc_expandz00,
		BgL_bgl_string3089za700za7za7_3327za7, "max::int", 8);
	      DEFINE_STRING(BGl_string3101z00zz__rgc_expandz00,
		BgL_bgl_string3101za700za7za7_3328za7, "+fx", 3);
	      DEFINE_STRING(BGl_string3091z00zz__rgc_expandz00,
		BgL_bgl_string3091za700za7za7_3329za7, "min::int", 8);
	      DEFINE_STRING(BGl_string3103z00zz__rgc_expandz00,
		BgL_bgl_string3103za700za7za7_3330za7, "if", 2);
	      DEFINE_STRING(BGl_string3093z00zz__rgc_expandz00,
		BgL_bgl_string3093za700za7za7_3331za7, "when", 4);
	      DEFINE_STRING(BGl_string3105z00zz__rgc_expandz00,
		BgL_bgl_string3105za700za7za7_3332za7, "and", 3);
	      DEFINE_STRING(BGl_string3095z00zz__rgc_expandz00,
		BgL_bgl_string3095za700za7za7_3333za7, "<fx", 3);
	      DEFINE_STRING(BGl_string3107z00zz__rgc_expandz00,
		BgL_bgl_string3107za700za7za7_3334za7, ">=fx", 4);
	      DEFINE_STRING(BGl_string3097z00zz__rgc_expandz00,
		BgL_bgl_string3097za700za7za7_3335za7, "max", 3);
	      DEFINE_STRING(BGl_string3109z00zz__rgc_expandz00,
		BgL_bgl_string3109za700za7za7_3336za7, "min", 3);
	      DEFINE_STRING(BGl_string3099z00zz__rgc_expandz00,
		BgL_bgl_string3099za700za7za7_3337za7, "set!", 4);
	      DEFINE_STRING(BGl_string3111z00zz__rgc_expandz00,
		BgL_bgl_string3111za700za7za7_3338za7, "<=fx", 4);
	      DEFINE_STRING(BGl_string3113z00zz__rgc_expandz00,
		BgL_bgl_string3113za700za7za7_3339za7, "error", 5);
	      DEFINE_STRING(BGl_string3115z00zz__rgc_expandz00,
		BgL_bgl_string3115za700za7za7_3340za7, "@", 1);
	      DEFINE_STRING(BGl_string3117z00zz__rgc_expandz00,
		BgL_bgl_string3117za700za7za7_3341za7, "__r4_output_6_10_3", 18);
	      DEFINE_STRING(BGl_string3119z00zz__rgc_expandz00,
		BgL_bgl_string3119za700za7za7_3342za7, "format", 6);
	      DEFINE_STRING(BGl_string3121z00zz__rgc_expandz00,
		BgL_bgl_string3121za700za7za7_3343za7, "the-string", 10);
	      DEFINE_STRING(BGl_string3122z00zz__rgc_expandz00,
		BgL_bgl_string3122za700za7za7_3344za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string3124z00zz__rgc_expandz00,
		BgL_bgl_string3124za700za7za7_3345za7, "cons", 4);
	      DEFINE_STRING(BGl_string3125z00zz__rgc_expandz00,
		BgL_bgl_string3125za700za7za7_3346za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string3127z00zz__rgc_expandz00,
		BgL_bgl_string3127za700za7za7_3347za7, "the-escape-substring::bstring", 29);
	      DEFINE_STRING(BGl_string3129z00zz__rgc_expandz00,
		BgL_bgl_string3129za700za7za7_3348za7, "strict::bool", 12);
	      DEFINE_STRING(BGl_string3131z00zz__rgc_expandz00,
		BgL_bgl_string3131za700za7za7_3349za7, "rgc-buffer-escape-substring", 27);
	      DEFINE_STRING(BGl_string3133z00zz__rgc_expandz00,
		BgL_bgl_string3133za700za7za7_3350za7, "strict", 6);
	      DEFINE_STRING(BGl_string3134z00zz__rgc_expandz00,
		BgL_bgl_string3134za700za7za7_3351za7, "the-escape-substring", 20);
	      DEFINE_STRING(BGl_string3136z00zz__rgc_expandz00,
		BgL_bgl_string3136za700za7za7_3352za7, "the-length::int", 15);
	      DEFINE_STRING(BGl_string3138z00zz__rgc_expandz00,
		BgL_bgl_string3138za700za7za7_3353za7, "rgc-buffer-length", 17);
	      DEFINE_STRING(BGl_string3140z00zz__rgc_expandz00,
		BgL_bgl_string3140za700za7za7_3354za7, "the-fixnum::long", 16);
	      DEFINE_STRING(BGl_string3142z00zz__rgc_expandz00,
		BgL_bgl_string3142za700za7za7_3355za7, "rgc-buffer-fixnum", 17);
	      DEFINE_STRING(BGl_string3144z00zz__rgc_expandz00,
		BgL_bgl_string3144za700za7za7_3356za7, "the-integer::obj", 16);
	      DEFINE_STRING(BGl_string3146z00zz__rgc_expandz00,
		BgL_bgl_string3146za700za7za7_3357za7, "rgc-buffer-integer", 18);
	      DEFINE_STRING(BGl_string3148z00zz__rgc_expandz00,
		BgL_bgl_string3148za700za7za7_3358za7, "the-flonum::double", 18);
	      DEFINE_STRING(BGl_string3150z00zz__rgc_expandz00,
		BgL_bgl_string3150za700za7za7_3359za7, "rgc-buffer-flonum", 17);
	      DEFINE_STRING(BGl_string3152z00zz__rgc_expandz00,
		BgL_bgl_string3152za700za7za7_3360za7, "the-symbol::symbol", 18);
	      DEFINE_STRING(BGl_string3154z00zz__rgc_expandz00,
		BgL_bgl_string3154za700za7za7_3361za7, "rgc-buffer-symbol", 17);
	      DEFINE_STRING(BGl_string3156z00zz__rgc_expandz00,
		BgL_bgl_string3156za700za7za7_3362za7, "the-subsymbol::symbol", 21);
	      DEFINE_STRING(BGl_string3158z00zz__rgc_expandz00,
		BgL_bgl_string3158za700za7za7_3363za7, "stop", 4);
	      DEFINE_STRING(BGl_string3160z00zz__rgc_expandz00,
		BgL_bgl_string3160za700za7za7_3364za7, "the-subsymbol", 13);
	      DEFINE_STRING(BGl_string3159z00zz__rgc_expandz00,
		BgL_bgl_string3159za700za7za7_3365za7, "Illegal range", 13);
	      DEFINE_STRING(BGl_string3162z00zz__rgc_expandz00,
		BgL_bgl_string3162za700za7za7_3366za7, "rgc-buffer-subsymbol", 20);
	      DEFINE_STRING(BGl_string3164z00zz__rgc_expandz00,
		BgL_bgl_string3164za700za7za7_3367za7, "the-downcase-symbol::symbol", 27);
	      DEFINE_STRING(BGl_string3166z00zz__rgc_expandz00,
		BgL_bgl_string3166za700za7za7_3368za7, "rgc-buffer-downcase-symbol", 26);
	      DEFINE_STRING(BGl_string3168z00zz__rgc_expandz00,
		BgL_bgl_string3168za700za7za7_3369za7, "the-upcase-symbol::symbol", 25);
	      DEFINE_STRING(BGl_string3170z00zz__rgc_expandz00,
		BgL_bgl_string3170za700za7za7_3370za7, "rgc-buffer-upcase-symbol", 24);
	      DEFINE_STRING(BGl_string3172z00zz__rgc_expandz00,
		BgL_bgl_string3172za700za7za7_3371za7, "the-keyword::keyword", 20);
	      DEFINE_STRING(BGl_string3174z00zz__rgc_expandz00,
		BgL_bgl_string3174za700za7za7_3372za7, "rgc-buffer-keyword", 18);
	      DEFINE_STRING(BGl_string3176z00zz__rgc_expandz00,
		BgL_bgl_string3176za700za7za7_3373za7, "the-downcase-keyword::keyword", 29);
	      DEFINE_STRING(BGl_string3178z00zz__rgc_expandz00,
		BgL_bgl_string3178za700za7za7_3374za7, "rgc-buffer-downcase-keyword", 27);
	      DEFINE_STRING(BGl_string3180z00zz__rgc_expandz00,
		BgL_bgl_string3180za700za7za7_3375za7, "the-upcase-keyword::keyword", 27);
	      DEFINE_STRING(BGl_string3182z00zz__rgc_expandz00,
		BgL_bgl_string3182za700za7za7_3376za7, "rgc-buffer-upcase-keyword", 25);
	      DEFINE_STRING(BGl_string3184z00zz__rgc_expandz00,
		BgL_bgl_string3184za700za7za7_3377za7, "the-failure", 11);
	      DEFINE_STRING(BGl_string3186z00zz__rgc_expandz00,
		BgL_bgl_string3186za700za7za7_3378za7, "=fx", 3);
	      DEFINE_STRING(BGl_string3188z00zz__rgc_expandz00,
		BgL_bgl_string3188za700za7za7_3379za7, "the-context", 11);
	      DEFINE_STRING(BGl_string3200z00zz__rgc_expandz00,
		BgL_bgl_string3200za700za7za7_3380za7, "pair?", 5);
	      DEFINE_STRING(BGl_string3190z00zz__rgc_expandz00,
		BgL_bgl_string3190za700za7za7_3381za7, "rgc-context?::bool", 18);
	      DEFINE_STRING(BGl_string3202z00zz__rgc_expandz00,
		BgL_bgl_string3202za700za7za7_3382za7, "car", 3);
	      DEFINE_STRING(BGl_string3192z00zz__rgc_expandz00,
		BgL_bgl_string3192za700za7za7_3383za7, "context", 7);
	      DEFINE_STRING(BGl_string3194z00zz__rgc_expandz00,
		BgL_bgl_string3194za700za7za7_3384za7, "eq?", 3);
	      DEFINE_STRING(BGl_string3205z00zz__rgc_expandz00,
		BgL_bgl_string3205za700za7za7_3385za7, "rgc-submatches", 14);
	      DEFINE_STRING(BGl_string3196z00zz__rgc_expandz00,
		BgL_bgl_string3196za700za7za7_3386za7, "rgc-set-context!", 16);
	      DEFINE_STRING(BGl_string3208z00zz__rgc_expandz00,
		BgL_bgl_string3208za700za7za7_3387za7, "quote", 5);
	      DEFINE_STRING(BGl_string3198z00zz__rgc_expandz00,
		BgL_bgl_string3198za700za7za7_3388za7, "rgc-context", 11);
	      DEFINE_STRING(BGl_string3212z00zz__rgc_expandz00,
		BgL_bgl_string3212za700za7za7_3389za7, "rgc-submatch-start!", 19);
	      DEFINE_STRING(BGl_string3214z00zz__rgc_expandz00,
		BgL_bgl_string3214za700za7za7_3390za7, "match::int", 10);
	      DEFINE_STRING(BGl_string3216z00zz__rgc_expandz00,
		BgL_bgl_string3216za700za7za7_3391za7, "submatch::int", 13);
	      DEFINE_STRING(BGl_string3221z00zz__rgc_expandz00,
		BgL_bgl_string3221za700za7za7_3392za7, "vector", 6);
	      DEFINE_STRING(BGl_string3223z00zz__rgc_expandz00,
		BgL_bgl_string3223za700za7za7_3393za7, "match", 5);
	      DEFINE_STRING(BGl_string3225z00zz__rgc_expandz00,
		BgL_bgl_string3225za700za7za7_3394za7, "submatch", 8);
	      DEFINE_STRING(BGl_string3228z00zz__rgc_expandz00,
		BgL_bgl_string3228za700za7za7_3395za7, "rgc-buffer-position", 19);
	      DEFINE_STRING(BGl_string3231z00zz__rgc_expandz00,
		BgL_bgl_string3231za700za7za7_3396za7, "start", 5);
	      DEFINE_STRING(BGl_string3235z00zz__rgc_expandz00,
		BgL_bgl_string3235za700za7za7_3397za7, "rgc-submatch-start*!", 20);
	      DEFINE_STRING(BGl_string3241z00zz__rgc_expandz00,
		BgL_bgl_string3241za700za7za7_3398za7, "start*", 6);
	      DEFINE_STRING(BGl_string3245z00zz__rgc_expandz00,
		BgL_bgl_string3245za700za7za7_3399za7, "rgc-submatch-stop!", 18);
	      DEFINE_STRING(BGl_string3251z00zz__rgc_expandz00,
		BgL_bgl_string3251za700za7za7_3400za7, "ignore", 6);
	      DEFINE_STRING(BGl_string3253z00zz__rgc_expandz00,
		BgL_bgl_string3253za700za7za7_3401za7, "rgc-start-match!", 16);
	      DEFINE_STRING(BGl_string3256z00zz__rgc_expandz00,
		BgL_bgl_string3256za700za7za7_3402za7, "match::long", 11);
	      DEFINE_STRING(BGl_string3258z00zz__rgc_expandz00,
		BgL_bgl_string3258za700za7za7_3403za7, "rgc-set-filepos!", 16);
	      DEFINE_STRING(BGl_string3263z00zz__rgc_expandz00,
		BgL_bgl_string3263za700za7za7_3404za7, "the-submatch", 12);
	      DEFINE_STRING(BGl_string3265z00zz__rgc_expandz00,
		BgL_bgl_string3265za700za7za7_3405za7, "num", 3);
	      DEFINE_STRING(BGl_string3271z00zz__rgc_expandz00,
		BgL_bgl_string3271za700za7za7_3406za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string3275z00zz__rgc_expandz00,
		BgL_bgl_string3275za700za7za7_3407za7, "rgc-the-submatch", 16);
	      DEFINE_STRING(BGl_string3282z00zz__rgc_expandz00,
		BgL_bgl_string3282za700za7za7_3408za7, "", 0);
	      DEFINE_STRING(BGl_string3284z00zz__rgc_expandz00,
		BgL_bgl_string3284za700za7za7_3409za7, "case", 4);
	      DEFINE_STRING(BGl_string3286z00zz__rgc_expandz00,
		BgL_bgl_string3286za700za7za7_3410za7, "else", 4);
	      DEFINE_STRING(BGl_string3287z00zz__rgc_expandz00,
		BgL_bgl_string3287za700za7za7_3411za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3292z00zz__rgc_expandz00,
		BgL_bgl_string3292za700za7za7_3412za7, "closed-input-port?", 18);
	      DEFINE_STRING(BGl_string3295z00zz__rgc_expandz00,
		BgL_bgl_string3295za700za7za7_3413za7, "the-port", 8);
	      DEFINE_STRING(BGl_string3297z00zz__rgc_expandz00,
		BgL_bgl_string3297za700za7za7_3414za7, "Can't read on a closed input port",
		33);
	      DEFINE_STRING(BGl_string3298z00zz__rgc_expandz00,
		BgL_bgl_string3298za700za7za7_3415za7, "__rgc_expand", 12);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long
		BgL_checksumz00_2362, char *BgL_fromz00_2363)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_expandz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_expandz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_expandz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 22 */
			BGl_symbol3038z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3039z00zz__rgc_expandz00);
			BGl_symbol3040z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3041z00zz__rgc_expandz00);
			BGl_symbol3042z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3043z00zz__rgc_expandz00);
			BGl_symbol3044z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3045z00zz__rgc_expandz00);
			BGl_symbol3046z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3047z00zz__rgc_expandz00);
			BGl_symbol3048z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3049z00zz__rgc_expandz00);
			BGl_symbol3050z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3051z00zz__rgc_expandz00);
			BGl_symbol3054z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3055z00zz__rgc_expandz00);
			BGl_symbol3056z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3057z00zz__rgc_expandz00);
			BGl_symbol3058z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3059z00zz__rgc_expandz00);
			BGl_symbol3060z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3061z00zz__rgc_expandz00);
			BGl_symbol3062z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3063z00zz__rgc_expandz00);
			BGl_symbol3064z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3065z00zz__rgc_expandz00);
			BGl_symbol3066z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3067z00zz__rgc_expandz00);
			BGl_symbol3068z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3069z00zz__rgc_expandz00);
			BGl_symbol3070z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3071z00zz__rgc_expandz00);
			BGl_symbol3072z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3073z00zz__rgc_expandz00);
			BGl_symbol3074z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3075z00zz__rgc_expandz00);
			BGl_symbol3076z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3077z00zz__rgc_expandz00);
			BGl_symbol3078z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3079z00zz__rgc_expandz00);
			BGl_symbol3080z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3081z00zz__rgc_expandz00);
			BGl_symbol3082z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3083z00zz__rgc_expandz00);
			BGl_symbol3084z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3085z00zz__rgc_expandz00);
			BGl_symbol3086z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3087z00zz__rgc_expandz00);
			BGl_symbol3088z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3089z00zz__rgc_expandz00);
			BGl_symbol3090z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3091z00zz__rgc_expandz00);
			BGl_symbol3092z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3093z00zz__rgc_expandz00);
			BGl_symbol3094z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3095z00zz__rgc_expandz00);
			BGl_symbol3096z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3097z00zz__rgc_expandz00);
			BGl_symbol3098z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3099z00zz__rgc_expandz00);
			BGl_symbol3100z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3101z00zz__rgc_expandz00);
			BGl_symbol3102z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3103z00zz__rgc_expandz00);
			BGl_symbol3104z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3105z00zz__rgc_expandz00);
			BGl_symbol3106z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3107z00zz__rgc_expandz00);
			BGl_symbol3108z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3109z00zz__rgc_expandz00);
			BGl_symbol3110z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3111z00zz__rgc_expandz00);
			BGl_symbol3112z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3113z00zz__rgc_expandz00);
			BGl_symbol3114z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3115z00zz__rgc_expandz00);
			BGl_symbol3116z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3117z00zz__rgc_expandz00);
			BGl_symbol3118z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3119z00zz__rgc_expandz00);
			BGl_symbol3120z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3121z00zz__rgc_expandz00);
			BGl_symbol3123z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3124z00zz__rgc_expandz00);
			BGl_symbol3126z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3127z00zz__rgc_expandz00);
			BGl_symbol3128z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3129z00zz__rgc_expandz00);
			BGl_symbol3130z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3131z00zz__rgc_expandz00);
			BGl_symbol3132z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3133z00zz__rgc_expandz00);
			BGl_symbol3135z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3136z00zz__rgc_expandz00);
			BGl_symbol3137z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3138z00zz__rgc_expandz00);
			BGl_symbol3139z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3140z00zz__rgc_expandz00);
			BGl_symbol3141z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3142z00zz__rgc_expandz00);
			BGl_symbol3143z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3144z00zz__rgc_expandz00);
			BGl_symbol3145z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3146z00zz__rgc_expandz00);
			BGl_symbol3147z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3148z00zz__rgc_expandz00);
			BGl_symbol3149z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3150z00zz__rgc_expandz00);
			BGl_symbol3151z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3152z00zz__rgc_expandz00);
			BGl_symbol3153z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3154z00zz__rgc_expandz00);
			BGl_symbol3155z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3156z00zz__rgc_expandz00);
			BGl_symbol3157z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3158z00zz__rgc_expandz00);
			BGl_symbol3161z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3162z00zz__rgc_expandz00);
			BGl_symbol3163z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3164z00zz__rgc_expandz00);
			BGl_symbol3165z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3166z00zz__rgc_expandz00);
			BGl_symbol3167z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3168z00zz__rgc_expandz00);
			BGl_symbol3169z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3170z00zz__rgc_expandz00);
			BGl_symbol3171z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3172z00zz__rgc_expandz00);
			BGl_symbol3173z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3174z00zz__rgc_expandz00);
			BGl_symbol3175z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3176z00zz__rgc_expandz00);
			BGl_symbol3177z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3178z00zz__rgc_expandz00);
			BGl_symbol3179z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3180z00zz__rgc_expandz00);
			BGl_symbol3181z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3182z00zz__rgc_expandz00);
			BGl_symbol3183z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3184z00zz__rgc_expandz00);
			BGl_symbol3185z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3186z00zz__rgc_expandz00);
			BGl_symbol3187z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3188z00zz__rgc_expandz00);
			BGl_symbol3189z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3190z00zz__rgc_expandz00);
			BGl_symbol3191z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3192z00zz__rgc_expandz00);
			BGl_symbol3193z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3194z00zz__rgc_expandz00);
			BGl_symbol3195z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3196z00zz__rgc_expandz00);
			BGl_symbol3197z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3198z00zz__rgc_expandz00);
			BGl_symbol3199z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3200z00zz__rgc_expandz00);
			BGl_symbol3201z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3202z00zz__rgc_expandz00);
			BGl_symbol3204z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3205z00zz__rgc_expandz00);
			BGl_symbol3207z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3208z00zz__rgc_expandz00);
			BGl_list3206z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3207z00zz__rgc_expandz00, MAKE_PAIR(BNIL, BNIL));
			BGl_list3203z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3060z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3206z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3211z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3212z00zz__rgc_expandz00);
			BGl_symbol3213z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3214z00zz__rgc_expandz00);
			BGl_symbol3215z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3216z00zz__rgc_expandz00);
			BGl_list3210z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3211z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3213z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3215z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3220z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3221z00zz__rgc_expandz00);
			BGl_symbol3222z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3223z00zz__rgc_expandz00);
			BGl_symbol3224z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3225z00zz__rgc_expandz00);
			BGl_symbol3227z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3228z00zz__rgc_expandz00);
			BGl_list3226z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3227z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3058z00zz__rgc_expandz00, BNIL));
			BGl_symbol3230z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3231z00zz__rgc_expandz00);
			BGl_list3229z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3207z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3230z00zz__rgc_expandz00, BNIL));
			BGl_list3219z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3220z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3222z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3224z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3226z00zz__rgc_expandz00,
							MAKE_PAIR(BGl_list3229z00zz__rgc_expandz00, BNIL)))));
			BGl_list3218z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3123z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3219z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00, BNIL)));
			BGl_list3217z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3218z00zz__rgc_expandz00, BNIL)));
			BGl_list3209z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3060z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3210z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3217z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3234z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3235z00zz__rgc_expandz00);
			BGl_list3233z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3234z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3213z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3215z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3240z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3241z00zz__rgc_expandz00);
			BGl_list3239z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3207z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3240z00zz__rgc_expandz00, BNIL));
			BGl_list3238z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3220z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3222z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3224z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3226z00zz__rgc_expandz00,
							MAKE_PAIR(BGl_list3239z00zz__rgc_expandz00, BNIL)))));
			BGl_list3237z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3123z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3238z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00, BNIL)));
			BGl_list3236z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3237z00zz__rgc_expandz00, BNIL)));
			BGl_list3232z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3060z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3233z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3236z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3244z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3245z00zz__rgc_expandz00);
			BGl_list3243z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3244z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3213z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3215z00zz__rgc_expandz00, BNIL)));
			BGl_list3249z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3207z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3157z00zz__rgc_expandz00, BNIL));
			BGl_list3248z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3220z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3222z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3224z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3226z00zz__rgc_expandz00,
							MAKE_PAIR(BGl_list3249z00zz__rgc_expandz00, BNIL)))));
			BGl_list3247z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3123z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3248z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00, BNIL)));
			BGl_list3246z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3247z00zz__rgc_expandz00, BNIL)));
			BGl_list3242z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3060z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3243z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3246z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3250z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3251z00zz__rgc_expandz00);
			BGl_symbol3252z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3253z00zz__rgc_expandz00);
			BGl_list3254z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3098z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3206z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3255z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3256z00zz__rgc_expandz00);
			BGl_symbol3257z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3258z00zz__rgc_expandz00);
			BGl_symbol3262z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3263z00zz__rgc_expandz00);
			BGl_symbol3264z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3265z00zz__rgc_expandz00);
			BGl_list3261z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3262z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3264z00zz__rgc_expandz00, BNIL));
			BGl_list3267z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3185z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3264z00zz__rgc_expandz00,
					MAKE_PAIR(BINT(((long) 0)), BNIL)));
			BGl_list3268z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3120z00zz__rgc_expandz00, BNIL);
			BGl_symbol3270z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3271z00zz__rgc_expandz00);
			BGl_list3272z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3230z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3157z00zz__rgc_expandz00, BNIL));
			BGl_symbol3274z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3275z00zz__rgc_expandz00);
			BGl_list3273z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3274z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3204z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3226z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_symbol3222z00zz__rgc_expandz00,
							MAKE_PAIR(BGl_symbol3264z00zz__rgc_expandz00, BNIL)))));
			BGl_list3278z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3106z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3230z00zz__rgc_expandz00,
					MAKE_PAIR(BINT(((long) 0)), BNIL)));
			BGl_list3279z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3106z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3157z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3230z00zz__rgc_expandz00, BNIL)));
			BGl_list3277z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3104z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3278z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3279z00zz__rgc_expandz00, BNIL)));
			BGl_symbol3281z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3125z00zz__rgc_expandz00);
			BGl_list3280z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3281z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_symbol3230z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_symbol3157z00zz__rgc_expandz00, BNIL)));
			BGl_list3276z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3102z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3277z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3280z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_string3282z00zz__rgc_expandz00, BNIL))));
			BGl_list3269z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3270z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3272z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3273z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3276z00zz__rgc_expandz00, BNIL))));
			BGl_list3266z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3102z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3267z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3268z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3269z00zz__rgc_expandz00, BNIL))));
			BGl_list3260z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3060z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3261z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3266z00zz__rgc_expandz00, BNIL)));
			BGl_list3259z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_list3260z00zz__rgc_expandz00, BNIL);
			BGl_symbol3283z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3284z00zz__rgc_expandz00);
			BGl_symbol3285z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3286z00zz__rgc_expandz00);
			BGl_list3288z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3250z00zz__rgc_expandz00, BNIL);
			BGl_symbol3291z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3292z00zz__rgc_expandz00);
			BGl_symbol3294z00zz__rgc_expandz00 =
				bstring_to_symbol(BGl_string3295z00zz__rgc_expandz00);
			BGl_list3293z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3294z00zz__rgc_expandz00, BNIL);
			BGl_list3290z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3291z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_list3293z00zz__rgc_expandz00, BNIL));
			BGl_list3296z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3112z00zz__rgc_expandz00,
				MAKE_PAIR(BGl_string3049z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_string3297z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3293z00zz__rgc_expandz00, BNIL))));
			return (BGl_list3289z00zz__rgc_expandz00 =
				MAKE_PAIR(BGl_symbol3102z00zz__rgc_expandz00,
					MAKE_PAIR(BGl_list3290z00zz__rgc_expandz00,
						MAKE_PAIR(BGl_list3296z00zz__rgc_expandz00,
							MAKE_PAIR(BGl_list3288z00zz__rgc_expandz00, BNIL)))), BUNSPEC);
		}
	}



/* expand-string-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2stringzd2casez00zz__rgc_expandz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 73 */
			{
				obj_t BgL_strz00_820;

				obj_t BgL_clausesz00_821;

				if (PAIRP(BgL_xz00_1))
					{	/* Rgc/rgcexpand.scm 74 */
						obj_t BgL_cdrzd21397zd2_826;

						BgL_cdrzd21397zd2_826 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21397zd2_826))
							{	/* Rgc/rgcexpand.scm 74 */
								BgL_strz00_820 = CAR(BgL_cdrzd21397zd2_826);
								BgL_clausesz00_821 = CDR(BgL_cdrzd21397zd2_826);
								{	/* Rgc/rgcexpand.scm 76 */
									obj_t BgL_portzd2idzd2_830;

									BgL_portzd2idzd2_830 =
										BGl_gensymz00zz__r4_symbols_6_4z00
										(BGl_symbol3038z00zz__rgc_expandz00);
									{	/* Rgc/rgcexpand.scm 77 */
										obj_t BgL_newz00_831;

										{	/* Rgc/rgcexpand.scm 77 */
											obj_t BgL_arg1902z00_834;

											obj_t BgL_arg1903z00_835;

											BgL_arg1902z00_834 = BGl_symbol3040z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 77 */
												obj_t BgL_arg1904z00_836;

												obj_t BgL_arg1905z00_837;

												{	/* Rgc/rgcexpand.scm 77 */
													obj_t BgL_arg1909z00_841;

													{	/* Rgc/rgcexpand.scm 77 */
														obj_t BgL_arg1911z00_843;

														{	/* Rgc/rgcexpand.scm 77 */
															obj_t BgL_arg1912z00_844;

															{	/* Rgc/rgcexpand.scm 77 */
																obj_t BgL_arg1916z00_847;

																obj_t BgL_arg1918z00_848;

																BgL_arg1916z00_847 =
																	BGl_symbol3042z00zz__rgc_expandz00;
																{	/* Rgc/rgcexpand.scm 77 */
																	obj_t BgL_list1919z00_849;

																	BgL_list1919z00_849 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg1918z00_848 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_strz00_820, BgL_list1919z00_849);
																}
																BgL_arg1912z00_844 =
																	MAKE_PAIR(BgL_arg1916z00_847,
																	BgL_arg1918z00_848);
															}
															{	/* Rgc/rgcexpand.scm 77 */
																obj_t BgL_list1915z00_846;

																BgL_list1915z00_846 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1911z00_843 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1912z00_844, BgL_list1915z00_846);
															}
														}
														BgL_arg1909z00_841 =
															MAKE_PAIR(BgL_portzd2idzd2_830,
															BgL_arg1911z00_843);
													}
													BgL_arg1904z00_836 =
														MAKE_PAIR(BgL_arg1909z00_841, BNIL);
												}
												{	/* Rgc/rgcexpand.scm 78 */
													obj_t BgL_arg1920z00_850;

													obj_t BgL_arg1921z00_851;

													BgL_arg1920z00_850 =
														BGl_symbol3044z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 79 */
														obj_t BgL_arg1922z00_852;

														obj_t BgL_arg1923z00_853;

														{	/* Rgc/rgcexpand.scm 79 */
															obj_t BgL_arg1927z00_857;

															obj_t BgL_arg1929z00_858;

															BgL_arg1927z00_857 =
																BGl_symbol3046z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 79 */
																obj_t BgL_arg1930z00_859;

																{	/* Rgc/rgcexpand.scm 79 */
																	obj_t BgL_arg1937z00_863;

																	obj_t BgL_arg1938z00_864;

																	BgL_arg1937z00_863 =
																		BGl_symbol3048z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 79 */
																		obj_t BgL_arg1941z00_866;

																		BgL_arg1941z00_866 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_clausesz00_821, BNIL);
																		{	/* Rgc/rgcexpand.scm 79 */
																			obj_t BgL_list1942z00_867;

																			BgL_list1942z00_867 =
																				MAKE_PAIR(BgL_arg1941z00_866, BNIL);
																			BgL_arg1938z00_864 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BNIL, BgL_list1942z00_867);
																		}
																	}
																	BgL_arg1930z00_859 =
																		MAKE_PAIR(BgL_arg1937z00_863,
																		BgL_arg1938z00_864);
																}
																{	/* Rgc/rgcexpand.scm 79 */
																	obj_t BgL_list1932z00_861;

																	{	/* Rgc/rgcexpand.scm 79 */
																		obj_t BgL_arg1935z00_862;

																		BgL_arg1935z00_862 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1932z00_861 =
																			MAKE_PAIR(BgL_portzd2idzd2_830,
																			BgL_arg1935z00_862);
																	}
																	BgL_arg1929z00_858 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1930z00_859, BgL_list1932z00_861);
																}
															}
															BgL_arg1922z00_852 =
																MAKE_PAIR(BgL_arg1927z00_857,
																BgL_arg1929z00_858);
														}
														{	/* Rgc/rgcexpand.scm 82 */
															obj_t BgL_arg1943z00_868;

															obj_t BgL_arg1944z00_869;

															BgL_arg1943z00_868 =
																BGl_symbol3050z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 82 */
																obj_t BgL_list1945z00_870;

																BgL_list1945z00_870 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1944z00_869 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_portzd2idzd2_830, BgL_list1945z00_870);
															}
															BgL_arg1923z00_853 =
																MAKE_PAIR(BgL_arg1943z00_868,
																BgL_arg1944z00_869);
														}
														{	/* Rgc/rgcexpand.scm 78 */
															obj_t BgL_list1925z00_855;

															{	/* Rgc/rgcexpand.scm 78 */
																obj_t BgL_arg1926z00_856;

																BgL_arg1926z00_856 = MAKE_PAIR(BNIL, BNIL);
																BgL_list1925z00_855 =
																	MAKE_PAIR(BgL_arg1923z00_853,
																	BgL_arg1926z00_856);
															}
															BgL_arg1921z00_851 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1922z00_852, BgL_list1925z00_855);
														}
													}
													BgL_arg1905z00_837 =
														MAKE_PAIR(BgL_arg1920z00_850, BgL_arg1921z00_851);
												}
												{	/* Rgc/rgcexpand.scm 77 */
													obj_t BgL_list1907z00_839;

													{	/* Rgc/rgcexpand.scm 77 */
														obj_t BgL_arg1908z00_840;

														BgL_arg1908z00_840 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1907z00_839 =
															MAKE_PAIR(BgL_arg1905z00_837, BgL_arg1908z00_840);
													}
													BgL_arg1903z00_835 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1904z00_836, BgL_list1907z00_839);
												}
											}
											BgL_newz00_831 =
												MAKE_PAIR(BgL_arg1902z00_834, BgL_arg1903z00_835);
										}
										{	/* Rgc/rgcexpand.scm 83 */
											obj_t BgL_auxz00_2628;

											BgL_auxz00_2628 = CAR(BgL_newz00_831);
											SET_CAR(BgL_xz00_1, BgL_auxz00_2628);
										}
										{	/* Rgc/rgcexpand.scm 84 */
											obj_t BgL_auxz00_2631;

											BgL_auxz00_2631 = CDR(BgL_newz00_831);
											SET_CDR(BgL_xz00_1, BgL_auxz00_2631);
										}
										return
											PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2, BgL_xz00_1,
											BgL_ez00_2, BEOA);
									}
								}
							}
						else
							{	/* Rgc/rgcexpand.scm 74 */
								return
									BGl_errorz00zz__errorz00(BGl_string3052z00zz__rgc_expandz00,
									BGl_string3053z00zz__rgc_expandz00, BgL_xz00_1);
							}
					}
				else
					{	/* Rgc/rgcexpand.scm 74 */
						return
							BGl_errorz00zz__errorz00(BGl_string3052z00zz__rgc_expandz00,
							BGl_string3053z00zz__rgc_expandz00, BgL_xz00_1);
					}
			}
		}
	}



/* _expand-string-case */
	obj_t BGl__expandzd2stringzd2casez00zz__rgc_expandz00(obj_t BgL_envz00_2356,
		obj_t BgL_xz00_2357, obj_t BgL_ez00_2358)
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 73 */
			return
				BGl_expandzd2stringzd2casez00zz__rgc_expandz00(BgL_xz00_2357,
				BgL_ez00_2358);
		}
	}



/* expand-regular-grammar */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t BgL_xz00_3,
		obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 94 */
			{
				obj_t BgL_optsz00_896;

				{
					obj_t BgL_optsz00_872;

					obj_t BgL_clausesz00_873;

					if (PAIRP(BgL_xz00_3))
						{	/* Rgc/rgcexpand.scm 106 */
							obj_t BgL_cdrzd21412zd2_878;

							BgL_cdrzd21412zd2_878 = CDR(BgL_xz00_3);
							if (PAIRP(BgL_cdrzd21412zd2_878))
								{	/* Rgc/rgcexpand.scm 106 */
									BgL_optsz00_872 = CAR(BgL_cdrzd21412zd2_878);
									BgL_clausesz00_873 = CDR(BgL_cdrzd21412zd2_878);
									{	/* Rgc/rgcexpand.scm 108 */
										obj_t BgL_uenvz00_882;

										BgL_optsz00_896 = BgL_optsz00_872;
										{
											obj_t BgL_osz00_901;

											obj_t BgL_varsz00_902;

											obj_t BgL_argsz00_903;

											BgL_osz00_901 = BgL_optsz00_896;
											BgL_varsz00_902 = BNIL;
											BgL_argsz00_903 = BNIL;
										BgL_zc3anonymousza31952ze3z83_904:
											if (NULLP(BgL_osz00_901))
												{	/* Rgc/rgcexpand.scm 101 */
													obj_t BgL_val0_1852z00_906;

													obj_t BgL_val1_1853z00_907;

													BgL_val0_1852z00_906 =
														bgl_reverse_bang(BgL_varsz00_902);
													BgL_val1_1853z00_907 =
														bgl_reverse_bang(BgL_argsz00_903);
													{	/* Rgc/rgcexpand.scm 101 */
														int BgL_auxz00_2650;

														BgL_auxz00_2650 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_2650);
													}
													{	/* Rgc/rgcexpand.scm 101 */
														int BgL_auxz00_2653;

														BgL_auxz00_2653 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_2653,
															BgL_val1_1853z00_907);
													}
													BgL_uenvz00_882 = BgL_val0_1852z00_906;
												}
											else
												{	/* Rgc/rgcexpand.scm 102 */
													bool_t BgL_testz00_2656;

													{	/* Rgc/rgcexpand.scm 102 */
														obj_t BgL_auxz00_2657;

														BgL_auxz00_2657 = CAR(BgL_osz00_901);
														BgL_testz00_2656 = SYMBOLP(BgL_auxz00_2657);
													}
													if (BgL_testz00_2656)
														{	/* Rgc/rgcexpand.scm 103 */
															obj_t BgL_arg1955z00_909;

															obj_t BgL_arg1956z00_910;

															BgL_arg1955z00_909 = CDR(BgL_osz00_901);
															BgL_arg1956z00_910 =
																MAKE_PAIR(CAR(BgL_osz00_901), BgL_argsz00_903);
															{
																obj_t BgL_argsz00_2664;

																obj_t BgL_osz00_2663;

																BgL_osz00_2663 = BgL_arg1955z00_909;
																BgL_argsz00_2664 = BgL_arg1956z00_910;
																BgL_argsz00_903 = BgL_argsz00_2664;
																BgL_osz00_901 = BgL_osz00_2663;
																goto BgL_zc3anonymousza31952ze3z83_904;
															}
														}
													else
														{	/* Rgc/rgcexpand.scm 105 */
															obj_t BgL_arg1958z00_912;

															obj_t BgL_arg1959z00_913;

															BgL_arg1958z00_912 = CDR(BgL_osz00_901);
															BgL_arg1959z00_913 =
																MAKE_PAIR(CAR(BgL_osz00_901), BgL_varsz00_902);
															{
																obj_t BgL_varsz00_2669;

																obj_t BgL_osz00_2668;

																BgL_osz00_2668 = BgL_arg1958z00_912;
																BgL_varsz00_2669 = BgL_arg1959z00_913;
																BgL_varsz00_902 = BgL_varsz00_2669;
																BgL_osz00_901 = BgL_osz00_2668;
																goto BgL_zc3anonymousza31952ze3z83_904;
															}
														}
												}
										}
										{	/* Rgc/rgcexpand.scm 110 */
											obj_t BgL_argsz00_883;

											{	/* Rgc/rgcexpand.scm 110 */
												int BgL_auxz00_2670;

												BgL_auxz00_2670 = (int) (((long) 1));
												BgL_argsz00_883 = BGL_MVALUES_VAL(BgL_auxz00_2670);
											}
											{	/* Rgc/rgcexpand.scm 110 */
												obj_t BgL_treez00_884;

												BgL_treez00_884 =
													BGl_ruleszd2ze3regularzd2treeze3zz__rgc_rulesz00
													(BgL_uenvz00_882, BgL_clausesz00_873);
												{	/* Rgc/rgcexpand.scm 114 */
													obj_t BgL_actionsz00_885;

													obj_t BgL_elsezd2numzd2_886;

													obj_t BgL_submatchzf3zf3_887;

													obj_t BgL_defsz00_888;

													{	/* Rgc/rgcexpand.scm 114 */
														int BgL_auxz00_2674;

														BgL_auxz00_2674 = (int) (((long) 1));
														BgL_actionsz00_885 =
															BGL_MVALUES_VAL(BgL_auxz00_2674);
													}
													{	/* Rgc/rgcexpand.scm 114 */
														int BgL_auxz00_2677;

														BgL_auxz00_2677 = (int) (((long) 2));
														BgL_elsezd2numzd2_886 =
															BGL_MVALUES_VAL(BgL_auxz00_2677);
													}
													{	/* Rgc/rgcexpand.scm 114 */
														int BgL_auxz00_2680;

														BgL_auxz00_2680 = (int) (((long) 3));
														BgL_submatchzf3zf3_887 =
															BGL_MVALUES_VAL(BgL_auxz00_2680);
													}
													{	/* Rgc/rgcexpand.scm 114 */
														int BgL_auxz00_2683;

														BgL_auxz00_2683 = (int) (((long) 4));
														BgL_defsz00_888 = BGL_MVALUES_VAL(BgL_auxz00_2683);
													}
													{	/* Rgc/rgcexpand.scm 114 */
														obj_t BgL_nodez00_889;

														BgL_nodez00_889 =
															BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00
															(BgL_treez00_884);
														{	/* Rgc/rgcexpand.scm 121 */
															obj_t BgL_followposz00_890;

															obj_t BgL_positionsz00_891;

															obj_t BgL_submatchesz00_892;

															{	/* Rgc/rgcexpand.scm 121 */
																int BgL_auxz00_2687;

																BgL_auxz00_2687 = (int) (((long) 1));
																BgL_followposz00_890 =
																	BGL_MVALUES_VAL(BgL_auxz00_2687);
															}
															{	/* Rgc/rgcexpand.scm 121 */
																int BgL_auxz00_2690;

																BgL_auxz00_2690 = (int) (((long) 2));
																BgL_positionsz00_891 =
																	BGL_MVALUES_VAL(BgL_auxz00_2690);
															}
															{	/* Rgc/rgcexpand.scm 121 */
																int BgL_auxz00_2693;

																BgL_auxz00_2693 = (int) (((long) 3));
																BgL_submatchesz00_892 =
																	BGL_MVALUES_VAL(BgL_auxz00_2693);
															}
															{	/* Rgc/rgcexpand.scm 121 */
																obj_t BgL_dfaz00_893;

																BgL_dfaz00_893 =
																	BGl_nodezd2ze3dfaz31zz__rgc_dfaz00
																	(BgL_nodez00_889, BgL_followposz00_890,
																	BgL_positionsz00_891);
																{	/* Rgc/rgcexpand.scm 121 */
																	obj_t BgL_sexpz00_894;

																	BgL_sexpz00_894 =
																		BGl_makezd2regularzd2parserz00zz__rgc_expandz00
																		(BgL_argsz00_883,
																		BGl_compilezd2dfazd2zz__rgc_compilez00
																		(BgL_submatchesz00_892, BgL_dfaz00_893,
																			BgL_positionsz00_891), BgL_actionsz00_885,
																		BgL_elsezd2numzd2_886,
																		BgL_submatchzf3zf3_887, BgL_defsz00_888);
																	{	/* Rgc/rgcexpand.scm 122 */

																		BGl_resetzd2specialzd2matchzd2charz12zc0zz__rgc_rulesz00
																			();
																		BGl_resetzd2treez12zc0zz__rgc_treez00();
																		BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
																		return
																			PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																			BgL_sexpz00_894, BgL_ez00_4, BEOA);
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
								{	/* Rgc/rgcexpand.scm 106 */
									return
										BGl_errorz00zz__errorz00(BGl_string3049z00zz__rgc_expandz00,
										BGl_string3053z00zz__rgc_expandz00, BgL_xz00_3);
								}
						}
					else
						{	/* Rgc/rgcexpand.scm 106 */
							return
								BGl_errorz00zz__errorz00(BGl_string3049z00zz__rgc_expandz00,
								BGl_string3053z00zz__rgc_expandz00, BgL_xz00_3);
						}
				}
			}
		}
	}



/* _expand-regular-grammar */
	obj_t BGl__expandzd2regularzd2grammarz00zz__rgc_expandz00(obj_t
		BgL_envz00_2359, obj_t BgL_xz00_2360, obj_t BgL_ez00_2361)
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 94 */
			return
				BGl_expandzd2regularzd2grammarz00zz__rgc_expandz00(BgL_xz00_2360,
				BgL_ez00_2361);
		}
	}



/* make-regular-parser */
	obj_t BGl_makezd2regularzd2parserz00zz__rgc_expandz00(obj_t BgL_argsz00_5,
		obj_t BgL_statesz00_6, obj_t BgL_actionsz00_7, obj_t BgL_elsezd2numzd2_8,
		obj_t BgL_submatchzf3zf3_9, obj_t BgL_defsz00_10)
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 140 */
			{	/* Rgc/rgcexpand.scm 141 */
				obj_t BgL_arg1962z00_918;

				obj_t BgL_arg1963z00_919;

				BgL_arg1962z00_918 = BGl_symbol3040z00zz__rgc_expandz00;
				{	/* Rgc/rgcexpand.scm 141 */
					obj_t BgL_arg1965z00_920;

					obj_t BgL_arg1966z00_921;

					{	/* Rgc/rgcexpand.scm 141 */
						obj_t BgL_arg1970z00_925;

						{	/* Rgc/rgcexpand.scm 141 */
							obj_t BgL_arg1972z00_927;

							obj_t BgL_arg1973z00_928;

							BgL_arg1972z00_927 = BGl_symbol3054z00zz__rgc_expandz00;
							{	/* Rgc/rgcexpand.scm 141 */
								obj_t BgL_list1974z00_929;

								BgL_list1974z00_929 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg1973z00_928 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
									BgL_list1974z00_929);
							}
							BgL_arg1970z00_925 =
								MAKE_PAIR(BgL_arg1972z00_927, BgL_arg1973z00_928);
						}
						BgL_arg1965z00_920 = MAKE_PAIR(BgL_arg1970z00_925, BNIL);
					}
					{	/* Rgc/rgcexpand.scm 142 */
						obj_t BgL_arg1975z00_930;

						obj_t BgL_arg1976z00_931;

						BgL_arg1975z00_930 = BGl_symbol3056z00zz__rgc_expandz00;
						{	/* Rgc/rgcexpand.scm 142 */
							obj_t BgL_arg1977z00_932;

							obj_t BgL_arg1979z00_933;

							BgL_arg1977z00_932 =
								MAKE_PAIR(BGl_symbol3058z00zz__rgc_expandz00,
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_5,
									BNIL));
							{	/* Rgc/rgcexpand.scm 147 */
								obj_t BgL_arg1983z00_937;

								{	/* Rgc/rgcexpand.scm 147 */
									obj_t BgL_arg1984z00_938;

									obj_t BgL_arg1985z00_939;

									{	/* Rgc/rgcexpand.scm 147 */
										obj_t BgL_arg1986z00_940;

										obj_t BgL_arg1987z00_941;

										BgL_arg1986z00_940 = BGl_symbol3060z00zz__rgc_expandz00;
										{	/* Rgc/rgcexpand.scm 147 */
											obj_t BgL_arg1988z00_942;

											obj_t BgL_arg1989z00_943;

											BgL_arg1988z00_942 =
												MAKE_PAIR(BGl_symbol3062z00zz__rgc_expandz00, BNIL);
											BgL_arg1989z00_943 = BGl_symbol3058z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 147 */
												obj_t BgL_list1991z00_945;

												{	/* Rgc/rgcexpand.scm 147 */
													obj_t BgL_arg1992z00_946;

													BgL_arg1992z00_946 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1991z00_945 =
														MAKE_PAIR(BgL_arg1989z00_943, BgL_arg1992z00_946);
												}
												BgL_arg1987z00_941 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1988z00_942, BgL_list1991z00_945);
											}
										}
										BgL_arg1984z00_938 =
											MAKE_PAIR(BgL_arg1986z00_940, BgL_arg1987z00_941);
									}
									{	/* Rgc/rgcexpand.scm 150 */
										obj_t BgL_arg1993z00_947;

										obj_t BgL_arg1994z00_948;

										obj_t BgL_arg1995z00_949;

										obj_t BgL_arg1996z00_950;

										obj_t BgL_arg1998z00_951;

										obj_t BgL_arg1999z00_952;

										obj_t BgL_arg2000z00_953;

										obj_t BgL_arg2001z00_954;

										obj_t BgL_arg2002z00_955;

										obj_t BgL_arg2003z00_956;

										obj_t BgL_arg2004z00_957;

										obj_t BgL_arg2005z00_958;

										obj_t BgL_arg2006z00_959;

										obj_t BgL_arg2007z00_960;

										obj_t BgL_arg2008z00_961;

										obj_t BgL_arg2009z00_962;

										obj_t BgL_arg2010z00_963;

										obj_t BgL_arg2011z00_964;

										obj_t BgL_arg2012z00_965;

										obj_t BgL_arg2013z00_966;

										obj_t BgL_arg2015z00_967;

										obj_t BgL_arg2016z00_968;

										obj_t BgL_arg2017z00_969;

										{	/* Rgc/rgcexpand.scm 150 */
											obj_t BgL_arg2044z00_992;

											obj_t BgL_arg2045z00_993;

											BgL_arg2044z00_992 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 150 */
												obj_t BgL_arg2046z00_994;

												obj_t BgL_arg2047z00_995;

												BgL_arg2046z00_994 =
													MAKE_PAIR(BGl_symbol3064z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 151 */
													obj_t BgL_arg2052z00_999;

													obj_t BgL_arg2053z00_1000;

													BgL_arg2052z00_999 =
														BGl_symbol3066z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 151 */
														obj_t BgL_list2054z00_1001;

														BgL_list2054z00_1001 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2053z00_1000 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2054z00_1001);
													}
													BgL_arg2047z00_995 =
														MAKE_PAIR(BgL_arg2052z00_999, BgL_arg2053z00_1000);
												}
												{	/* Rgc/rgcexpand.scm 150 */
													obj_t BgL_list2049z00_997;

													{	/* Rgc/rgcexpand.scm 150 */
														obj_t BgL_arg2051z00_998;

														BgL_arg2051z00_998 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2049z00_997 =
															MAKE_PAIR(BgL_arg2047z00_995, BgL_arg2051z00_998);
													}
													BgL_arg2045z00_993 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2046z00_994, BgL_list2049z00_997);
												}
											}
											BgL_arg1993z00_947 =
												MAKE_PAIR(BgL_arg2044z00_992, BgL_arg2045z00_993);
										}
										{	/* Rgc/rgcexpand.scm 153 */
											obj_t BgL_arg2055z00_1002;

											obj_t BgL_arg2056z00_1003;

											BgL_arg2055z00_1002 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 153 */
												obj_t BgL_arg2057z00_1004;

												obj_t BgL_arg2058z00_1005;

												BgL_arg2057z00_1004 =
													MAKE_PAIR(BGl_symbol3068z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 154 */
													obj_t BgL_arg2062z00_1009;

													obj_t BgL_arg2063z00_1010;

													BgL_arg2062z00_1009 =
														BGl_symbol3070z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 154 */
														obj_t BgL_list2064z00_1011;

														BgL_list2064z00_1011 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2063z00_1010 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2064z00_1011);
													}
													BgL_arg2058z00_1005 =
														MAKE_PAIR(BgL_arg2062z00_1009, BgL_arg2063z00_1010);
												}
												{	/* Rgc/rgcexpand.scm 153 */
													obj_t BgL_list2060z00_1007;

													{	/* Rgc/rgcexpand.scm 153 */
														obj_t BgL_arg2061z00_1008;

														BgL_arg2061z00_1008 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2060z00_1007 =
															MAKE_PAIR(BgL_arg2058z00_1005,
															BgL_arg2061z00_1008);
													}
													BgL_arg2056z00_1003 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2057z00_1004, BgL_list2060z00_1007);
												}
											}
											BgL_arg1994z00_948 =
												MAKE_PAIR(BgL_arg2055z00_1002, BgL_arg2056z00_1003);
										}
										{	/* Rgc/rgcexpand.scm 156 */
											obj_t BgL_arg2065z00_1012;

											obj_t BgL_arg2066z00_1013;

											BgL_arg2065z00_1012 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 156 */
												obj_t BgL_arg2067z00_1014;

												obj_t BgL_arg2068z00_1015;

												{	/* Rgc/rgcexpand.scm 156 */
													obj_t BgL_arg2073z00_1019;

													obj_t BgL_arg2076z00_1020;

													BgL_arg2073z00_1019 =
														BGl_symbol3072z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 156 */
														obj_t BgL_list2077z00_1021;

														BgL_list2077z00_1021 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2076z00_1020 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3074z00zz__rgc_expandz00,
															BgL_list2077z00_1021);
													}
													BgL_arg2067z00_1014 =
														MAKE_PAIR(BgL_arg2073z00_1019, BgL_arg2076z00_1020);
												}
												{	/* Rgc/rgcexpand.scm 157 */
													obj_t BgL_arg2078z00_1022;

													obj_t BgL_arg2079z00_1023;

													BgL_arg2078z00_1022 =
														BGl_symbol3076z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 157 */
														obj_t BgL_list2080z00_1024;

														{	/* Rgc/rgcexpand.scm 157 */
															obj_t BgL_arg2081z00_1025;

															obj_t BgL_arg2082z00_1026;

															BgL_arg2081z00_1025 =
																BGl_symbol3078z00zz__rgc_expandz00;
															BgL_arg2082z00_1026 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2080z00_1024 =
																MAKE_PAIR(BgL_arg2081z00_1025,
																BgL_arg2082z00_1026);
														}
														BgL_arg2079z00_1023 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2080z00_1024);
													}
													BgL_arg2068z00_1015 =
														MAKE_PAIR(BgL_arg2078z00_1022, BgL_arg2079z00_1023);
												}
												{	/* Rgc/rgcexpand.scm 156 */
													obj_t BgL_list2070z00_1017;

													{	/* Rgc/rgcexpand.scm 156 */
														obj_t BgL_arg2072z00_1018;

														BgL_arg2072z00_1018 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2070z00_1017 =
															MAKE_PAIR(BgL_arg2068z00_1015,
															BgL_arg2072z00_1018);
													}
													BgL_arg2066z00_1013 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2067z00_1014, BgL_list2070z00_1017);
												}
											}
											BgL_arg1995z00_949 =
												MAKE_PAIR(BgL_arg2065z00_1012, BgL_arg2066z00_1013);
										}
										{	/* Rgc/rgcexpand.scm 159 */
											obj_t BgL_arg2083z00_1027;

											obj_t BgL_arg2084z00_1028;

											BgL_arg2083z00_1027 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 159 */
												obj_t BgL_arg2085z00_1029;

												obj_t BgL_arg2086z00_1030;

												BgL_arg2085z00_1029 =
													MAKE_PAIR(BGl_symbol3080z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 160 */
													obj_t BgL_arg2092z00_1034;

													obj_t BgL_arg2093z00_1035;

													BgL_arg2092z00_1034 =
														BGl_symbol3082z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 160 */
														obj_t BgL_arg2094z00_1036;

														obj_t BgL_arg2096z00_1038;

														BgL_arg2094z00_1036 =
															BGl_symbol3058z00zz__rgc_expandz00;
														BgL_arg2096z00_1038 =
															MAKE_PAIR(BGl_symbol3084z00zz__rgc_expandz00,
															BNIL);
														{	/* Rgc/rgcexpand.scm 160 */
															obj_t BgL_list2098z00_1040;

															{	/* Rgc/rgcexpand.scm 160 */
																obj_t BgL_arg2099z00_1041;

																{	/* Rgc/rgcexpand.scm 160 */
																	obj_t BgL_arg2100z00_1042;

																	BgL_arg2100z00_1042 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2099z00_1041 =
																		MAKE_PAIR(BgL_arg2096z00_1038,
																		BgL_arg2100z00_1042);
																}
																BgL_list2098z00_1040 =
																	MAKE_PAIR(BINT(((long) 0)),
																	BgL_arg2099z00_1041);
															}
															BgL_arg2093z00_1035 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2094z00_1036, BgL_list2098z00_1040);
													}}
													BgL_arg2086z00_1030 =
														MAKE_PAIR(BgL_arg2092z00_1034, BgL_arg2093z00_1035);
												}
												{	/* Rgc/rgcexpand.scm 159 */
													obj_t BgL_list2090z00_1032;

													{	/* Rgc/rgcexpand.scm 159 */
														obj_t BgL_arg2091z00_1033;

														BgL_arg2091z00_1033 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2090z00_1032 =
															MAKE_PAIR(BgL_arg2086z00_1030,
															BgL_arg2091z00_1033);
													}
													BgL_arg2084z00_1028 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2085z00_1029, BgL_list2090z00_1032);
											}}
											BgL_arg1996z00_950 =
												MAKE_PAIR(BgL_arg2083z00_1027, BgL_arg2084z00_1028);
										}
										{	/* Rgc/rgcexpand.scm 162 */
											obj_t BgL_arg2101z00_1043;

											obj_t BgL_arg2102z00_1044;

											BgL_arg2101z00_1043 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 162 */
												obj_t BgL_arg2103z00_1045;

												obj_t BgL_arg2104z00_1046;

												obj_t BgL_arg2105z00_1047;

												{	/* Rgc/rgcexpand.scm 162 */
													obj_t BgL_arg2110z00_1052;

													obj_t BgL_arg2111z00_1053;

													BgL_arg2110z00_1052 =
														BGl_symbol3086z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 162 */
														obj_t BgL_list2112z00_1054;

														{	/* Rgc/rgcexpand.scm 162 */
															obj_t BgL_arg2113z00_1055;

															obj_t BgL_arg2114z00_1056;

															BgL_arg2113z00_1055 =
																BGl_symbol3088z00zz__rgc_expandz00;
															BgL_arg2114z00_1056 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2112z00_1054 =
																MAKE_PAIR(BgL_arg2113z00_1055,
																BgL_arg2114z00_1056);
														}
														BgL_arg2111z00_1053 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3090z00zz__rgc_expandz00,
															BgL_list2112z00_1054);
													}
													BgL_arg2103z00_1045 =
														MAKE_PAIR(BgL_arg2110z00_1052, BgL_arg2111z00_1053);
												}
												{	/* Rgc/rgcexpand.scm 163 */
													obj_t BgL_arg2115z00_1057;

													obj_t BgL_arg2116z00_1058;

													BgL_arg2115z00_1057 =
														BGl_symbol3092z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 163 */
														obj_t BgL_arg2118z00_1059;

														obj_t BgL_arg2119z00_1060;

														{	/* Rgc/rgcexpand.scm 163 */
															obj_t BgL_arg2124z00_1064;

															obj_t BgL_arg2125z00_1065;

															BgL_arg2124z00_1064 =
																BGl_symbol3094z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 163 */
																obj_t BgL_list2126z00_1066;

																{	/* Rgc/rgcexpand.scm 163 */
																	obj_t BgL_arg2130z00_1068;

																	BgL_arg2130z00_1068 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2126z00_1066 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2130z00_1068);
																}
																BgL_arg2125z00_1065 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3096z00zz__rgc_expandz00,
																	BgL_list2126z00_1066);
															}
															BgL_arg2118z00_1059 =
																MAKE_PAIR(BgL_arg2124z00_1064,
																BgL_arg2125z00_1065);
														}
														{	/* Rgc/rgcexpand.scm 163 */
															obj_t BgL_arg2131z00_1069;

															obj_t BgL_arg2132z00_1070;

															BgL_arg2131z00_1069 =
																BGl_symbol3098z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 163 */
																obj_t BgL_arg2133z00_1071;

																obj_t BgL_arg2134z00_1072;

																BgL_arg2133z00_1071 =
																	BGl_symbol3096z00zz__rgc_expandz00;
																{	/* Rgc/rgcexpand.scm 163 */
																	obj_t BgL_arg2138z00_1076;

																	obj_t BgL_arg2139z00_1077;

																	BgL_arg2138z00_1076 =
																		BGl_symbol3100z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 163 */
																		obj_t BgL_arg2140z00_1078;

																		obj_t BgL_arg2141z00_1079;

																		BgL_arg2140z00_1078 =
																			MAKE_PAIR
																			(BGl_symbol3084z00zz__rgc_expandz00,
																			BNIL);
																		BgL_arg2141z00_1079 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 163 */
																			obj_t BgL_list2145z00_1081;

																			{	/* Rgc/rgcexpand.scm 163 */
																				obj_t BgL_arg2146z00_1082;

																				BgL_arg2146z00_1082 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2145z00_1081 =
																					MAKE_PAIR(BgL_arg2141z00_1079,
																					BgL_arg2146z00_1082);
																			}
																			BgL_arg2139z00_1077 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2140z00_1078,
																				BgL_list2145z00_1081);
																	}}
																	BgL_arg2134z00_1072 =
																		MAKE_PAIR(BgL_arg2138z00_1076,
																		BgL_arg2139z00_1077);
																}
																{	/* Rgc/rgcexpand.scm 163 */
																	obj_t BgL_list2136z00_1074;

																	{	/* Rgc/rgcexpand.scm 163 */
																		obj_t BgL_arg2137z00_1075;

																		BgL_arg2137z00_1075 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2136z00_1074 =
																			MAKE_PAIR(BgL_arg2134z00_1072,
																			BgL_arg2137z00_1075);
																	}
																	BgL_arg2132z00_1070 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2133z00_1071, BgL_list2136z00_1074);
															}}
															BgL_arg2119z00_1060 =
																MAKE_PAIR(BgL_arg2131z00_1069,
																BgL_arg2132z00_1070);
														}
														{	/* Rgc/rgcexpand.scm 163 */
															obj_t BgL_list2122z00_1062;

															{	/* Rgc/rgcexpand.scm 163 */
																obj_t BgL_arg2123z00_1063;

																BgL_arg2123z00_1063 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2122z00_1062 =
																	MAKE_PAIR(BgL_arg2119z00_1060,
																	BgL_arg2123z00_1063);
															}
															BgL_arg2116z00_1058 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2118z00_1059, BgL_list2122z00_1062);
													}}
													BgL_arg2104z00_1046 =
														MAKE_PAIR(BgL_arg2115z00_1057, BgL_arg2116z00_1058);
												}
												{	/* Rgc/rgcexpand.scm 164 */
													obj_t BgL_arg2147z00_1083;

													obj_t BgL_arg2148z00_1084;

													BgL_arg2147z00_1083 =
														BGl_symbol3102z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 164 */
														obj_t BgL_arg2149z00_1085;

														obj_t BgL_arg2150z00_1086;

														obj_t BgL_arg2151z00_1087;

														{	/* Rgc/rgcexpand.scm 164 */
															obj_t BgL_arg2156z00_1092;

															obj_t BgL_arg2157z00_1093;

															BgL_arg2156z00_1092 =
																BGl_symbol3104z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 164 */
																obj_t BgL_arg2158z00_1094;

																obj_t BgL_arg2159z00_1095;

																obj_t BgL_arg2160z00_1096;

																{	/* Rgc/rgcexpand.scm 164 */
																	obj_t BgL_arg2165z00_1101;

																	obj_t BgL_arg2166z00_1102;

																	BgL_arg2165z00_1101 =
																		BGl_symbol3106z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 164 */
																		obj_t BgL_list2167z00_1103;

																		{	/* Rgc/rgcexpand.scm 164 */
																			obj_t BgL_arg2169z00_1105;

																			BgL_arg2169z00_1105 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2167z00_1103 =
																				MAKE_PAIR(BINT(((long) 0)),
																				BgL_arg2169z00_1105);
																		}
																		BgL_arg2166z00_1102 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3108z00zz__rgc_expandz00,
																			BgL_list2167z00_1103);
																	}
																	BgL_arg2158z00_1094 =
																		MAKE_PAIR(BgL_arg2165z00_1101,
																		BgL_arg2166z00_1102);
																}
																{	/* Rgc/rgcexpand.scm 164 */
																	obj_t BgL_arg2170z00_1106;

																	obj_t BgL_arg2171z00_1107;

																	BgL_arg2170z00_1106 =
																		BGl_symbol3106z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 164 */
																		obj_t BgL_list2172z00_1108;

																		{	/* Rgc/rgcexpand.scm 164 */
																			obj_t BgL_arg2173z00_1109;

																			obj_t BgL_arg2174z00_1110;

																			BgL_arg2173z00_1109 =
																				BGl_symbol3108z00zz__rgc_expandz00;
																			BgL_arg2174z00_1110 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2172z00_1108 =
																				MAKE_PAIR(BgL_arg2173z00_1109,
																				BgL_arg2174z00_1110);
																		}
																		BgL_arg2171z00_1107 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3096z00zz__rgc_expandz00,
																			BgL_list2172z00_1108);
																	}
																	BgL_arg2159z00_1095 =
																		MAKE_PAIR(BgL_arg2170z00_1106,
																		BgL_arg2171z00_1107);
																}
																{	/* Rgc/rgcexpand.scm 164 */
																	obj_t BgL_arg2175z00_1111;

																	obj_t BgL_arg2176z00_1112;

																	BgL_arg2175z00_1111 =
																		BGl_symbol3110z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 164 */
																		obj_t BgL_arg2177z00_1113;

																		obj_t BgL_arg2178z00_1114;

																		BgL_arg2177z00_1113 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		BgL_arg2178z00_1114 =
																			MAKE_PAIR
																			(BGl_symbol3084z00zz__rgc_expandz00,
																			BNIL);
																		{	/* Rgc/rgcexpand.scm 164 */
																			obj_t BgL_list2180z00_1116;

																			{	/* Rgc/rgcexpand.scm 164 */
																				obj_t BgL_arg2181z00_1117;

																				BgL_arg2181z00_1117 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2180z00_1116 =
																					MAKE_PAIR(BgL_arg2178z00_1114,
																					BgL_arg2181z00_1117);
																			}
																			BgL_arg2176z00_1112 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2177z00_1113,
																				BgL_list2180z00_1116);
																	}}
																	BgL_arg2160z00_1096 =
																		MAKE_PAIR(BgL_arg2175z00_1111,
																		BgL_arg2176z00_1112);
																}
																{	/* Rgc/rgcexpand.scm 164 */
																	obj_t BgL_list2162z00_1098;

																	{	/* Rgc/rgcexpand.scm 164 */
																		obj_t BgL_arg2163z00_1099;

																		{	/* Rgc/rgcexpand.scm 164 */
																			obj_t BgL_arg2164z00_1100;

																			BgL_arg2164z00_1100 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2163z00_1099 =
																				MAKE_PAIR(BgL_arg2160z00_1096,
																				BgL_arg2164z00_1100);
																		}
																		BgL_list2162z00_1098 =
																			MAKE_PAIR(BgL_arg2159z00_1095,
																			BgL_arg2163z00_1099);
																	}
																	BgL_arg2157z00_1093 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2158z00_1094, BgL_list2162z00_1098);
															}}
															BgL_arg2149z00_1085 =
																MAKE_PAIR(BgL_arg2156z00_1092,
																BgL_arg2157z00_1093);
														}
														{	/* Rgc/rgcexpand.scm 165 */
															obj_t BgL_arg2182z00_1118;

															obj_t BgL_arg2183z00_1119;

															BgL_arg2182z00_1118 =
																BGl_symbol3082z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 165 */
																obj_t BgL_list2184z00_1120;

																{	/* Rgc/rgcexpand.scm 165 */
																	obj_t BgL_arg2185z00_1121;

																	obj_t BgL_arg2186z00_1122;

																	BgL_arg2185z00_1121 =
																		BGl_symbol3108z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 165 */
																		obj_t BgL_arg2187z00_1123;

																		obj_t BgL_arg2188z00_1124;

																		BgL_arg2187z00_1123 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		BgL_arg2188z00_1124 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2186z00_1122 =
																			MAKE_PAIR(BgL_arg2187z00_1123,
																			BgL_arg2188z00_1124);
																	}
																	BgL_list2184z00_1120 =
																		MAKE_PAIR(BgL_arg2185z00_1121,
																		BgL_arg2186z00_1122);
																}
																BgL_arg2183z00_1119 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3058z00zz__rgc_expandz00,
																	BgL_list2184z00_1120);
															}
															BgL_arg2150z00_1086 =
																MAKE_PAIR(BgL_arg2182z00_1118,
																BgL_arg2183z00_1119);
														}
														{	/* Rgc/rgcexpand.scm 166 */
															obj_t BgL_arg2189z00_1125;

															obj_t BgL_arg2190z00_1126;

															BgL_arg2189z00_1125 =
																BGl_symbol3112z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 166 */
																obj_t BgL_arg2192z00_1128;

																obj_t BgL_arg2193z00_1129;

																{	/* Rgc/rgcexpand.scm 167 */
																	obj_t BgL_arg2198z00_1134;

																	obj_t BgL_arg2199z00_1135;

																	{	/* Rgc/rgcexpand.scm 167 */
																		obj_t BgL_arg2200z00_1136;

																		obj_t BgL_arg2203z00_1137;

																		BgL_arg2200z00_1136 =
																			BGl_symbol3114z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 167 */
																			obj_t BgL_list2205z00_1138;

																			{	/* Rgc/rgcexpand.scm 167 */
																				obj_t BgL_arg2206z00_1139;

																				obj_t BgL_arg2207z00_1140;

																				BgL_arg2206z00_1139 =
																					BGl_symbol3116z00zz__rgc_expandz00;
																				BgL_arg2207z00_1140 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2205z00_1138 =
																					MAKE_PAIR(BgL_arg2206z00_1139,
																					BgL_arg2207z00_1140);
																			}
																			BgL_arg2203z00_1137 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol3118z00zz__rgc_expandz00,
																				BgL_list2205z00_1138);
																		}
																		BgL_arg2198z00_1134 =
																			MAKE_PAIR(BgL_arg2200z00_1136,
																			BgL_arg2203z00_1137);
																	}
																	{	/* Rgc/rgcexpand.scm 167 */
																		obj_t BgL_arg2209z00_1142;

																		BgL_arg2209z00_1142 =
																			MAKE_PAIR
																			(BGl_symbol3120z00zz__rgc_expandz00,
																			BNIL);
																		{	/* Rgc/rgcexpand.scm 167 */
																			obj_t BgL_list2212z00_1144;

																			{	/* Rgc/rgcexpand.scm 167 */
																				obj_t BgL_arg2213z00_1145;

																				BgL_arg2213z00_1145 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2212z00_1144 =
																					MAKE_PAIR(BgL_arg2209z00_1142,
																					BgL_arg2213z00_1145);
																			}
																			BgL_arg2199z00_1135 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_string3122z00zz__rgc_expandz00,
																				BgL_list2212z00_1144);
																	}}
																	BgL_arg2192z00_1128 =
																		MAKE_PAIR(BgL_arg2198z00_1134,
																		BgL_arg2199z00_1135);
																}
																{	/* Rgc/rgcexpand.scm 169 */
																	obj_t BgL_arg2214z00_1146;

																	obj_t BgL_arg2216z00_1147;

																	BgL_arg2214z00_1146 =
																		BGl_symbol3123z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 169 */
																		obj_t BgL_list2217z00_1148;

																		{	/* Rgc/rgcexpand.scm 169 */
																			obj_t BgL_arg2222z00_1149;

																			obj_t BgL_arg2223z00_1150;

																			BgL_arg2222z00_1149 =
																				BGl_symbol3096z00zz__rgc_expandz00;
																			BgL_arg2223z00_1150 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2217z00_1148 =
																				MAKE_PAIR(BgL_arg2222z00_1149,
																				BgL_arg2223z00_1150);
																		}
																		BgL_arg2216z00_1147 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3108z00zz__rgc_expandz00,
																			BgL_list2217z00_1148);
																	}
																	BgL_arg2193z00_1129 =
																		MAKE_PAIR(BgL_arg2214z00_1146,
																		BgL_arg2216z00_1147);
																}
																{	/* Rgc/rgcexpand.scm 166 */
																	obj_t BgL_list2195z00_1131;

																	{	/* Rgc/rgcexpand.scm 166 */
																		obj_t BgL_arg2196z00_1132;

																		{	/* Rgc/rgcexpand.scm 166 */
																			obj_t BgL_arg2197z00_1133;

																			BgL_arg2197z00_1133 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2196z00_1132 =
																				MAKE_PAIR(BgL_arg2193z00_1129,
																				BgL_arg2197z00_1133);
																		}
																		BgL_list2195z00_1131 =
																			MAKE_PAIR(BgL_arg2192z00_1128,
																			BgL_arg2196z00_1132);
																	}
																	BgL_arg2190z00_1126 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_string3125z00zz__rgc_expandz00,
																		BgL_list2195z00_1131);
															}}
															BgL_arg2151z00_1087 =
																MAKE_PAIR(BgL_arg2189z00_1125,
																BgL_arg2190z00_1126);
														}
														{	/* Rgc/rgcexpand.scm 164 */
															obj_t BgL_list2153z00_1089;

															{	/* Rgc/rgcexpand.scm 164 */
																obj_t BgL_arg2154z00_1090;

																{	/* Rgc/rgcexpand.scm 164 */
																	obj_t BgL_arg2155z00_1091;

																	BgL_arg2155z00_1091 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2154z00_1090 =
																		MAKE_PAIR(BgL_arg2151z00_1087,
																		BgL_arg2155z00_1091);
																}
																BgL_list2153z00_1089 =
																	MAKE_PAIR(BgL_arg2150z00_1086,
																	BgL_arg2154z00_1090);
															}
															BgL_arg2148z00_1084 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2149z00_1085, BgL_list2153z00_1089);
													}}
													BgL_arg2105z00_1047 =
														MAKE_PAIR(BgL_arg2147z00_1083, BgL_arg2148z00_1084);
												}
												{	/* Rgc/rgcexpand.scm 162 */
													obj_t BgL_list2107z00_1049;

													{	/* Rgc/rgcexpand.scm 162 */
														obj_t BgL_arg2108z00_1050;

														{	/* Rgc/rgcexpand.scm 162 */
															obj_t BgL_arg2109z00_1051;

															BgL_arg2109z00_1051 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2108z00_1050 =
																MAKE_PAIR(BgL_arg2105z00_1047,
																BgL_arg2109z00_1051);
														}
														BgL_list2107z00_1049 =
															MAKE_PAIR(BgL_arg2104z00_1046,
															BgL_arg2108z00_1050);
													}
													BgL_arg2102z00_1044 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2103z00_1045, BgL_list2107z00_1049);
											}}
											BgL_arg1998z00_951 =
												MAKE_PAIR(BgL_arg2101z00_1043, BgL_arg2102z00_1044);
										}
										{	/* Rgc/rgcexpand.scm 171 */
											obj_t BgL_arg2224z00_1151;

											obj_t BgL_arg2226z00_1152;

											BgL_arg2224z00_1151 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 171 */
												obj_t BgL_arg2227z00_1153;

												obj_t BgL_arg2233z00_1154;

												obj_t BgL_arg2234z00_1155;

												{	/* Rgc/rgcexpand.scm 171 */
													obj_t BgL_arg2239z00_1160;

													obj_t BgL_arg2240z00_1161;

													BgL_arg2239z00_1160 =
														BGl_symbol3126z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 171 */
														obj_t BgL_list2241z00_1162;

														{	/* Rgc/rgcexpand.scm 171 */
															obj_t BgL_arg2242z00_1163;

															obj_t BgL_arg2243z00_1164;

															BgL_arg2242z00_1163 =
																BGl_symbol3088z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 171 */
																obj_t BgL_arg2244z00_1165;

																obj_t BgL_arg2245z00_1166;

																BgL_arg2244z00_1165 =
																	BGl_symbol3128z00zz__rgc_expandz00;
																BgL_arg2245z00_1166 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2243z00_1164 =
																	MAKE_PAIR(BgL_arg2244z00_1165,
																	BgL_arg2245z00_1166);
															}
															BgL_list2241z00_1162 =
																MAKE_PAIR(BgL_arg2242z00_1163,
																BgL_arg2243z00_1164);
														}
														BgL_arg2240z00_1161 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3090z00zz__rgc_expandz00,
															BgL_list2241z00_1162);
													}
													BgL_arg2227z00_1153 =
														MAKE_PAIR(BgL_arg2239z00_1160, BgL_arg2240z00_1161);
												}
												{	/* Rgc/rgcexpand.scm 172 */
													obj_t BgL_arg2246z00_1167;

													obj_t BgL_arg2247z00_1168;

													BgL_arg2246z00_1167 =
														BGl_symbol3092z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 172 */
														obj_t BgL_arg2248z00_1169;

														obj_t BgL_arg2249z00_1170;

														{	/* Rgc/rgcexpand.scm 172 */
															obj_t BgL_arg2253z00_1174;

															obj_t BgL_arg2255z00_1175;

															BgL_arg2253z00_1174 =
																BGl_symbol3094z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 172 */
																obj_t BgL_list2256z00_1176;

																{	/* Rgc/rgcexpand.scm 172 */
																	obj_t BgL_arg2259z00_1178;

																	BgL_arg2259z00_1178 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2256z00_1176 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2259z00_1178);
																}
																BgL_arg2255z00_1175 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3096z00zz__rgc_expandz00,
																	BgL_list2256z00_1176);
															}
															BgL_arg2248z00_1169 =
																MAKE_PAIR(BgL_arg2253z00_1174,
																BgL_arg2255z00_1175);
														}
														{	/* Rgc/rgcexpand.scm 172 */
															obj_t BgL_arg2260z00_1179;

															obj_t BgL_arg2262z00_1180;

															BgL_arg2260z00_1179 =
																BGl_symbol3098z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 172 */
																obj_t BgL_arg2263z00_1181;

																obj_t BgL_arg2264z00_1182;

																BgL_arg2263z00_1181 =
																	BGl_symbol3096z00zz__rgc_expandz00;
																{	/* Rgc/rgcexpand.scm 172 */
																	obj_t BgL_arg2268z00_1186;

																	obj_t BgL_arg2269z00_1187;

																	BgL_arg2268z00_1186 =
																		BGl_symbol3100z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 172 */
																		obj_t BgL_arg2270z00_1188;

																		obj_t BgL_arg2271z00_1189;

																		BgL_arg2270z00_1188 =
																			MAKE_PAIR
																			(BGl_symbol3084z00zz__rgc_expandz00,
																			BNIL);
																		BgL_arg2271z00_1189 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 172 */
																			obj_t BgL_list2273z00_1191;

																			{	/* Rgc/rgcexpand.scm 172 */
																				obj_t BgL_arg2274z00_1192;

																				BgL_arg2274z00_1192 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2273z00_1191 =
																					MAKE_PAIR(BgL_arg2271z00_1189,
																					BgL_arg2274z00_1192);
																			}
																			BgL_arg2269z00_1187 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2270z00_1188,
																				BgL_list2273z00_1191);
																	}}
																	BgL_arg2264z00_1182 =
																		MAKE_PAIR(BgL_arg2268z00_1186,
																		BgL_arg2269z00_1187);
																}
																{	/* Rgc/rgcexpand.scm 172 */
																	obj_t BgL_list2266z00_1184;

																	{	/* Rgc/rgcexpand.scm 172 */
																		obj_t BgL_arg2267z00_1185;

																		BgL_arg2267z00_1185 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2266z00_1184 =
																			MAKE_PAIR(BgL_arg2264z00_1182,
																			BgL_arg2267z00_1185);
																	}
																	BgL_arg2262z00_1180 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2263z00_1181, BgL_list2266z00_1184);
															}}
															BgL_arg2249z00_1170 =
																MAKE_PAIR(BgL_arg2260z00_1179,
																BgL_arg2262z00_1180);
														}
														{	/* Rgc/rgcexpand.scm 172 */
															obj_t BgL_list2251z00_1172;

															{	/* Rgc/rgcexpand.scm 172 */
																obj_t BgL_arg2252z00_1173;

																BgL_arg2252z00_1173 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2251z00_1172 =
																	MAKE_PAIR(BgL_arg2249z00_1170,
																	BgL_arg2252z00_1173);
															}
															BgL_arg2247z00_1168 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2248z00_1169, BgL_list2251z00_1172);
													}}
													BgL_arg2233z00_1154 =
														MAKE_PAIR(BgL_arg2246z00_1167, BgL_arg2247z00_1168);
												}
												{	/* Rgc/rgcexpand.scm 173 */
													obj_t BgL_arg2275z00_1193;

													obj_t BgL_arg2277z00_1194;

													BgL_arg2275z00_1193 =
														BGl_symbol3102z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 173 */
														obj_t BgL_arg2278z00_1195;

														obj_t BgL_arg2279z00_1196;

														obj_t BgL_arg2280z00_1197;

														{	/* Rgc/rgcexpand.scm 173 */
															obj_t BgL_arg2285z00_1202;

															obj_t BgL_arg2286z00_1203;

															BgL_arg2285z00_1202 =
																BGl_symbol3104z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 173 */
																obj_t BgL_arg2289z00_1204;

																obj_t BgL_arg2290z00_1205;

																obj_t BgL_arg2291z00_1206;

																{	/* Rgc/rgcexpand.scm 173 */
																	obj_t BgL_arg2296z00_1211;

																	obj_t BgL_arg2297z00_1212;

																	BgL_arg2296z00_1211 =
																		BGl_symbol3106z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 173 */
																		obj_t BgL_list2298z00_1213;

																		{	/* Rgc/rgcexpand.scm 173 */
																			obj_t BgL_arg2301z00_1215;

																			BgL_arg2301z00_1215 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2298z00_1213 =
																				MAKE_PAIR(BINT(((long) 0)),
																				BgL_arg2301z00_1215);
																		}
																		BgL_arg2297z00_1212 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3108z00zz__rgc_expandz00,
																			BgL_list2298z00_1213);
																	}
																	BgL_arg2289z00_1204 =
																		MAKE_PAIR(BgL_arg2296z00_1211,
																		BgL_arg2297z00_1212);
																}
																{	/* Rgc/rgcexpand.scm 173 */
																	obj_t BgL_arg2302z00_1216;

																	obj_t BgL_arg2303z00_1217;

																	BgL_arg2302z00_1216 =
																		BGl_symbol3106z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 173 */
																		obj_t BgL_list2304z00_1218;

																		{	/* Rgc/rgcexpand.scm 173 */
																			obj_t BgL_arg2305z00_1219;

																			obj_t BgL_arg2306z00_1220;

																			BgL_arg2305z00_1219 =
																				BGl_symbol3108z00zz__rgc_expandz00;
																			BgL_arg2306z00_1220 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2304z00_1218 =
																				MAKE_PAIR(BgL_arg2305z00_1219,
																				BgL_arg2306z00_1220);
																		}
																		BgL_arg2303z00_1217 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3096z00zz__rgc_expandz00,
																			BgL_list2304z00_1218);
																	}
																	BgL_arg2290z00_1205 =
																		MAKE_PAIR(BgL_arg2302z00_1216,
																		BgL_arg2303z00_1217);
																}
																{	/* Rgc/rgcexpand.scm 173 */
																	obj_t BgL_arg2307z00_1221;

																	obj_t BgL_arg2308z00_1222;

																	BgL_arg2307z00_1221 =
																		BGl_symbol3110z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 173 */
																		obj_t BgL_arg2309z00_1223;

																		obj_t BgL_arg2310z00_1224;

																		BgL_arg2309z00_1223 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		BgL_arg2310z00_1224 =
																			MAKE_PAIR
																			(BGl_symbol3084z00zz__rgc_expandz00,
																			BNIL);
																		{	/* Rgc/rgcexpand.scm 173 */
																			obj_t BgL_list2312z00_1226;

																			{	/* Rgc/rgcexpand.scm 173 */
																				obj_t BgL_arg2313z00_1227;

																				BgL_arg2313z00_1227 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2312z00_1226 =
																					MAKE_PAIR(BgL_arg2310z00_1224,
																					BgL_arg2313z00_1227);
																			}
																			BgL_arg2308z00_1222 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2309z00_1223,
																				BgL_list2312z00_1226);
																	}}
																	BgL_arg2291z00_1206 =
																		MAKE_PAIR(BgL_arg2307z00_1221,
																		BgL_arg2308z00_1222);
																}
																{	/* Rgc/rgcexpand.scm 173 */
																	obj_t BgL_list2293z00_1208;

																	{	/* Rgc/rgcexpand.scm 173 */
																		obj_t BgL_arg2294z00_1209;

																		{	/* Rgc/rgcexpand.scm 173 */
																			obj_t BgL_arg2295z00_1210;

																			BgL_arg2295z00_1210 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2294z00_1209 =
																				MAKE_PAIR(BgL_arg2291z00_1206,
																				BgL_arg2295z00_1210);
																		}
																		BgL_list2293z00_1208 =
																			MAKE_PAIR(BgL_arg2290z00_1205,
																			BgL_arg2294z00_1209);
																	}
																	BgL_arg2286z00_1203 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2289z00_1204, BgL_list2293z00_1208);
															}}
															BgL_arg2278z00_1195 =
																MAKE_PAIR(BgL_arg2285z00_1202,
																BgL_arg2286z00_1203);
														}
														{	/* Rgc/rgcexpand.scm 174 */
															obj_t BgL_arg2314z00_1228;

															obj_t BgL_arg2315z00_1229;

															BgL_arg2314z00_1228 =
																BGl_symbol3130z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 174 */
																obj_t BgL_list2316z00_1230;

																{	/* Rgc/rgcexpand.scm 174 */
																	obj_t BgL_arg2317z00_1231;

																	obj_t BgL_arg2318z00_1232;

																	BgL_arg2317z00_1231 =
																		BGl_symbol3108z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 174 */
																		obj_t BgL_arg2319z00_1233;

																		obj_t BgL_arg2320z00_1234;

																		BgL_arg2319z00_1233 =
																			BGl_symbol3096z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 174 */
																			obj_t BgL_arg2321z00_1235;

																			obj_t BgL_arg2322z00_1236;

																			BgL_arg2321z00_1235 =
																				BGl_symbol3132z00zz__rgc_expandz00;
																			BgL_arg2322z00_1236 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2320z00_1234 =
																				MAKE_PAIR(BgL_arg2321z00_1235,
																				BgL_arg2322z00_1236);
																		}
																		BgL_arg2318z00_1232 =
																			MAKE_PAIR(BgL_arg2319z00_1233,
																			BgL_arg2320z00_1234);
																	}
																	BgL_list2316z00_1230 =
																		MAKE_PAIR(BgL_arg2317z00_1231,
																		BgL_arg2318z00_1232);
																}
																BgL_arg2315z00_1229 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3058z00zz__rgc_expandz00,
																	BgL_list2316z00_1230);
															}
															BgL_arg2279z00_1196 =
																MAKE_PAIR(BgL_arg2314z00_1228,
																BgL_arg2315z00_1229);
														}
														{	/* Rgc/rgcexpand.scm 175 */
															obj_t BgL_arg2323z00_1237;

															obj_t BgL_arg2324z00_1238;

															BgL_arg2323z00_1237 =
																BGl_symbol3112z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 175 */
																obj_t BgL_arg2326z00_1240;

																obj_t BgL_arg2327z00_1241;

																{	/* Rgc/rgcexpand.scm 176 */
																	obj_t BgL_arg2332z00_1246;

																	obj_t BgL_arg2333z00_1247;

																	{	/* Rgc/rgcexpand.scm 176 */
																		obj_t BgL_arg2334z00_1248;

																		obj_t BgL_arg2335z00_1249;

																		BgL_arg2334z00_1248 =
																			BGl_symbol3114z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 176 */
																			obj_t BgL_list2336z00_1250;

																			{	/* Rgc/rgcexpand.scm 176 */
																				obj_t BgL_arg2337z00_1251;

																				obj_t BgL_arg2338z00_1252;

																				BgL_arg2337z00_1251 =
																					BGl_symbol3116z00zz__rgc_expandz00;
																				BgL_arg2338z00_1252 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2336z00_1250 =
																					MAKE_PAIR(BgL_arg2337z00_1251,
																					BgL_arg2338z00_1252);
																			}
																			BgL_arg2335z00_1249 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_symbol3118z00zz__rgc_expandz00,
																				BgL_list2336z00_1250);
																		}
																		BgL_arg2332z00_1246 =
																			MAKE_PAIR(BgL_arg2334z00_1248,
																			BgL_arg2335z00_1249);
																	}
																	{	/* Rgc/rgcexpand.scm 176 */
																		obj_t BgL_arg2340z00_1254;

																		BgL_arg2340z00_1254 =
																			MAKE_PAIR
																			(BGl_symbol3120z00zz__rgc_expandz00,
																			BNIL);
																		{	/* Rgc/rgcexpand.scm 176 */
																			obj_t BgL_list2342z00_1256;

																			{	/* Rgc/rgcexpand.scm 176 */
																				obj_t BgL_arg2343z00_1257;

																				BgL_arg2343z00_1257 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2342z00_1256 =
																					MAKE_PAIR(BgL_arg2340z00_1254,
																					BgL_arg2343z00_1257);
																			}
																			BgL_arg2333z00_1247 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_string3122z00zz__rgc_expandz00,
																				BgL_list2342z00_1256);
																	}}
																	BgL_arg2326z00_1240 =
																		MAKE_PAIR(BgL_arg2332z00_1246,
																		BgL_arg2333z00_1247);
																}
																{	/* Rgc/rgcexpand.scm 178 */
																	obj_t BgL_arg2344z00_1258;

																	obj_t BgL_arg2345z00_1259;

																	BgL_arg2344z00_1258 =
																		BGl_symbol3123z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 178 */
																		obj_t BgL_list2346z00_1260;

																		{	/* Rgc/rgcexpand.scm 178 */
																			obj_t BgL_arg2347z00_1261;

																			obj_t BgL_arg2348z00_1262;

																			BgL_arg2347z00_1261 =
																				BGl_symbol3096z00zz__rgc_expandz00;
																			BgL_arg2348z00_1262 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2346z00_1260 =
																				MAKE_PAIR(BgL_arg2347z00_1261,
																				BgL_arg2348z00_1262);
																		}
																		BgL_arg2345z00_1259 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3108z00zz__rgc_expandz00,
																			BgL_list2346z00_1260);
																	}
																	BgL_arg2327z00_1241 =
																		MAKE_PAIR(BgL_arg2344z00_1258,
																		BgL_arg2345z00_1259);
																}
																{	/* Rgc/rgcexpand.scm 175 */
																	obj_t BgL_list2329z00_1243;

																	{	/* Rgc/rgcexpand.scm 175 */
																		obj_t BgL_arg2330z00_1244;

																		{	/* Rgc/rgcexpand.scm 175 */
																			obj_t BgL_arg2331z00_1245;

																			BgL_arg2331z00_1245 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2330z00_1244 =
																				MAKE_PAIR(BgL_arg2327z00_1241,
																				BgL_arg2331z00_1245);
																		}
																		BgL_list2329z00_1243 =
																			MAKE_PAIR(BgL_arg2326z00_1240,
																			BgL_arg2330z00_1244);
																	}
																	BgL_arg2324z00_1238 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_string3134z00zz__rgc_expandz00,
																		BgL_list2329z00_1243);
															}}
															BgL_arg2280z00_1197 =
																MAKE_PAIR(BgL_arg2323z00_1237,
																BgL_arg2324z00_1238);
														}
														{	/* Rgc/rgcexpand.scm 173 */
															obj_t BgL_list2282z00_1199;

															{	/* Rgc/rgcexpand.scm 173 */
																obj_t BgL_arg2283z00_1200;

																{	/* Rgc/rgcexpand.scm 173 */
																	obj_t BgL_arg2284z00_1201;

																	BgL_arg2284z00_1201 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2283z00_1200 =
																		MAKE_PAIR(BgL_arg2280z00_1197,
																		BgL_arg2284z00_1201);
																}
																BgL_list2282z00_1199 =
																	MAKE_PAIR(BgL_arg2279z00_1196,
																	BgL_arg2283z00_1200);
															}
															BgL_arg2277z00_1194 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2278z00_1195, BgL_list2282z00_1199);
													}}
													BgL_arg2234z00_1155 =
														MAKE_PAIR(BgL_arg2275z00_1193, BgL_arg2277z00_1194);
												}
												{	/* Rgc/rgcexpand.scm 171 */
													obj_t BgL_list2236z00_1157;

													{	/* Rgc/rgcexpand.scm 171 */
														obj_t BgL_arg2237z00_1158;

														{	/* Rgc/rgcexpand.scm 171 */
															obj_t BgL_arg2238z00_1159;

															BgL_arg2238z00_1159 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2237z00_1158 =
																MAKE_PAIR(BgL_arg2234z00_1155,
																BgL_arg2238z00_1159);
														}
														BgL_list2236z00_1157 =
															MAKE_PAIR(BgL_arg2233z00_1154,
															BgL_arg2237z00_1158);
													}
													BgL_arg2226z00_1152 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2227z00_1153, BgL_list2236z00_1157);
											}}
											BgL_arg1999z00_952 =
												MAKE_PAIR(BgL_arg2224z00_1151, BgL_arg2226z00_1152);
										}
										{	/* Rgc/rgcexpand.scm 180 */
											obj_t BgL_arg2349z00_1263;

											obj_t BgL_arg2350z00_1264;

											BgL_arg2349z00_1263 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 180 */
												obj_t BgL_arg2351z00_1265;

												obj_t BgL_arg2352z00_1266;

												BgL_arg2351z00_1265 =
													MAKE_PAIR(BGl_symbol3135z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 181 */
													obj_t BgL_arg2356z00_1270;

													obj_t BgL_arg2357z00_1271;

													BgL_arg2356z00_1270 =
														BGl_symbol3137z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 181 */
														obj_t BgL_list2358z00_1272;

														BgL_list2358z00_1272 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2357z00_1271 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2358z00_1272);
													}
													BgL_arg2352z00_1266 =
														MAKE_PAIR(BgL_arg2356z00_1270, BgL_arg2357z00_1271);
												}
												{	/* Rgc/rgcexpand.scm 180 */
													obj_t BgL_list2354z00_1268;

													{	/* Rgc/rgcexpand.scm 180 */
														obj_t BgL_arg2355z00_1269;

														BgL_arg2355z00_1269 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2354z00_1268 =
															MAKE_PAIR(BgL_arg2352z00_1266,
															BgL_arg2355z00_1269);
													}
													BgL_arg2350z00_1264 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2351z00_1265, BgL_list2354z00_1268);
											}}
											BgL_arg2000z00_953 =
												MAKE_PAIR(BgL_arg2349z00_1263, BgL_arg2350z00_1264);
										}
										{	/* Rgc/rgcexpand.scm 183 */
											obj_t BgL_arg2359z00_1273;

											obj_t BgL_arg2360z00_1274;

											BgL_arg2359z00_1273 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 183 */
												obj_t BgL_arg2361z00_1275;

												obj_t BgL_arg2362z00_1276;

												BgL_arg2361z00_1275 =
													MAKE_PAIR(BGl_symbol3139z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 184 */
													obj_t BgL_arg2366z00_1280;

													obj_t BgL_arg2367z00_1281;

													BgL_arg2366z00_1280 =
														BGl_symbol3141z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 184 */
														obj_t BgL_list2368z00_1282;

														BgL_list2368z00_1282 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2367z00_1281 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2368z00_1282);
													}
													BgL_arg2362z00_1276 =
														MAKE_PAIR(BgL_arg2366z00_1280, BgL_arg2367z00_1281);
												}
												{	/* Rgc/rgcexpand.scm 183 */
													obj_t BgL_list2364z00_1278;

													{	/* Rgc/rgcexpand.scm 183 */
														obj_t BgL_arg2365z00_1279;

														BgL_arg2365z00_1279 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2364z00_1278 =
															MAKE_PAIR(BgL_arg2362z00_1276,
															BgL_arg2365z00_1279);
													}
													BgL_arg2360z00_1274 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2361z00_1275, BgL_list2364z00_1278);
											}}
											BgL_arg2001z00_954 =
												MAKE_PAIR(BgL_arg2359z00_1273, BgL_arg2360z00_1274);
										}
										{	/* Rgc/rgcexpand.scm 186 */
											obj_t BgL_arg2369z00_1283;

											obj_t BgL_arg2370z00_1284;

											BgL_arg2369z00_1283 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 186 */
												obj_t BgL_arg2371z00_1285;

												obj_t BgL_arg2372z00_1286;

												BgL_arg2371z00_1285 =
													MAKE_PAIR(BGl_symbol3143z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 187 */
													obj_t BgL_arg2376z00_1290;

													obj_t BgL_arg2377z00_1291;

													BgL_arg2376z00_1290 =
														BGl_symbol3145z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 187 */
														obj_t BgL_list2378z00_1292;

														BgL_list2378z00_1292 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2377z00_1291 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2378z00_1292);
													}
													BgL_arg2372z00_1286 =
														MAKE_PAIR(BgL_arg2376z00_1290, BgL_arg2377z00_1291);
												}
												{	/* Rgc/rgcexpand.scm 186 */
													obj_t BgL_list2374z00_1288;

													{	/* Rgc/rgcexpand.scm 186 */
														obj_t BgL_arg2375z00_1289;

														BgL_arg2375z00_1289 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2374z00_1288 =
															MAKE_PAIR(BgL_arg2372z00_1286,
															BgL_arg2375z00_1289);
													}
													BgL_arg2370z00_1284 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2371z00_1285, BgL_list2374z00_1288);
											}}
											BgL_arg2002z00_955 =
												MAKE_PAIR(BgL_arg2369z00_1283, BgL_arg2370z00_1284);
										}
										{	/* Rgc/rgcexpand.scm 189 */
											obj_t BgL_arg2379z00_1293;

											obj_t BgL_arg2380z00_1294;

											BgL_arg2379z00_1293 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 189 */
												obj_t BgL_arg2381z00_1295;

												obj_t BgL_arg2382z00_1296;

												BgL_arg2381z00_1295 =
													MAKE_PAIR(BGl_symbol3147z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 190 */
													obj_t BgL_arg2386z00_1300;

													obj_t BgL_arg2387z00_1301;

													BgL_arg2386z00_1300 =
														BGl_symbol3149z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 190 */
														obj_t BgL_list2388z00_1302;

														BgL_list2388z00_1302 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2387z00_1301 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2388z00_1302);
													}
													BgL_arg2382z00_1296 =
														MAKE_PAIR(BgL_arg2386z00_1300, BgL_arg2387z00_1301);
												}
												{	/* Rgc/rgcexpand.scm 189 */
													obj_t BgL_list2384z00_1298;

													{	/* Rgc/rgcexpand.scm 189 */
														obj_t BgL_arg2385z00_1299;

														BgL_arg2385z00_1299 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2384z00_1298 =
															MAKE_PAIR(BgL_arg2382z00_1296,
															BgL_arg2385z00_1299);
													}
													BgL_arg2380z00_1294 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2381z00_1295, BgL_list2384z00_1298);
											}}
											BgL_arg2003z00_956 =
												MAKE_PAIR(BgL_arg2379z00_1293, BgL_arg2380z00_1294);
										}
										{	/* Rgc/rgcexpand.scm 192 */
											obj_t BgL_arg2389z00_1303;

											obj_t BgL_arg2390z00_1304;

											BgL_arg2389z00_1303 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 192 */
												obj_t BgL_arg2391z00_1305;

												obj_t BgL_arg2392z00_1306;

												BgL_arg2391z00_1305 =
													MAKE_PAIR(BGl_symbol3151z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 193 */
													obj_t BgL_arg2396z00_1310;

													obj_t BgL_arg2397z00_1311;

													BgL_arg2396z00_1310 =
														BGl_symbol3153z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 193 */
														obj_t BgL_list2398z00_1312;

														BgL_list2398z00_1312 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2397z00_1311 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2398z00_1312);
													}
													BgL_arg2392z00_1306 =
														MAKE_PAIR(BgL_arg2396z00_1310, BgL_arg2397z00_1311);
												}
												{	/* Rgc/rgcexpand.scm 192 */
													obj_t BgL_list2394z00_1308;

													{	/* Rgc/rgcexpand.scm 192 */
														obj_t BgL_arg2395z00_1309;

														BgL_arg2395z00_1309 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2394z00_1308 =
															MAKE_PAIR(BgL_arg2392z00_1306,
															BgL_arg2395z00_1309);
													}
													BgL_arg2390z00_1304 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2391z00_1305, BgL_list2394z00_1308);
											}}
											BgL_arg2004z00_957 =
												MAKE_PAIR(BgL_arg2389z00_1303, BgL_arg2390z00_1304);
										}
										{	/* Rgc/rgcexpand.scm 195 */
											obj_t BgL_arg2399z00_1313;

											obj_t BgL_arg2400z00_1314;

											BgL_arg2399z00_1313 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 195 */
												obj_t BgL_arg2401z00_1315;

												obj_t BgL_arg2402z00_1316;

												{	/* Rgc/rgcexpand.scm 195 */
													obj_t BgL_arg2406z00_1320;

													obj_t BgL_arg2407z00_1321;

													BgL_arg2406z00_1320 =
														BGl_symbol3155z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 195 */
														obj_t BgL_list2408z00_1322;

														{	/* Rgc/rgcexpand.scm 195 */
															obj_t BgL_arg2409z00_1323;

															obj_t BgL_arg2410z00_1324;

															BgL_arg2409z00_1323 =
																BGl_symbol3096z00zz__rgc_expandz00;
															BgL_arg2410z00_1324 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2408z00_1322 =
																MAKE_PAIR(BgL_arg2409z00_1323,
																BgL_arg2410z00_1324);
														}
														BgL_arg2407z00_1321 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3108z00zz__rgc_expandz00,
															BgL_list2408z00_1322);
													}
													BgL_arg2401z00_1315 =
														MAKE_PAIR(BgL_arg2406z00_1320, BgL_arg2407z00_1321);
												}
												{	/* Rgc/rgcexpand.scm 196 */
													obj_t BgL_arg2411z00_1325;

													obj_t BgL_arg2412z00_1326;

													BgL_arg2411z00_1325 =
														BGl_symbol3102z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 196 */
														obj_t BgL_arg2413z00_1327;

														obj_t BgL_arg2414z00_1328;

														obj_t BgL_arg2415z00_1329;

														{	/* Rgc/rgcexpand.scm 196 */
															obj_t BgL_arg2420z00_1334;

															obj_t BgL_arg2421z00_1335;

															BgL_arg2420z00_1334 =
																BGl_symbol3094z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 196 */
																obj_t BgL_list2422z00_1336;

																{	/* Rgc/rgcexpand.scm 196 */
																	obj_t BgL_arg2424z00_1338;

																	BgL_arg2424z00_1338 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2422z00_1336 =
																		MAKE_PAIR(BINT(((long) 0)),
																		BgL_arg2424z00_1338);
																}
																BgL_arg2421z00_1335 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3096z00zz__rgc_expandz00,
																	BgL_list2422z00_1336);
															}
															BgL_arg2413z00_1327 =
																MAKE_PAIR(BgL_arg2420z00_1334,
																BgL_arg2421z00_1335);
														}
														{	/* Rgc/rgcexpand.scm 197 */
															obj_t BgL_arg2425z00_1339;

															obj_t BgL_arg2426z00_1340;

															BgL_arg2425z00_1339 =
																BGl_symbol3040z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 197 */
																obj_t BgL_arg2427z00_1341;

																obj_t BgL_arg2428z00_1342;

																{	/* Rgc/rgcexpand.scm 197 */
																	obj_t BgL_arg2432z00_1346;

																	{	/* Rgc/rgcexpand.scm 197 */
																		obj_t BgL_arg2435z00_1348;

																		obj_t BgL_arg2436z00_1349;

																		BgL_arg2435z00_1348 =
																			BGl_symbol3157z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 197 */
																			obj_t BgL_arg2437z00_1350;

																			{	/* Rgc/rgcexpand.scm 197 */
																				obj_t BgL_arg2440z00_1353;

																				obj_t BgL_arg2441z00_1354;

																				BgL_arg2440z00_1353 =
																					BGl_symbol3100z00zz__rgc_expandz00;
																				{	/* Rgc/rgcexpand.scm 197 */
																					obj_t BgL_arg2442z00_1355;

																					obj_t BgL_arg2443z00_1356;

																					BgL_arg2442z00_1355 =
																						MAKE_PAIR
																						(BGl_symbol3084z00zz__rgc_expandz00,
																						BNIL);
																					BgL_arg2443z00_1356 =
																						BGl_symbol3096z00zz__rgc_expandz00;
																					{	/* Rgc/rgcexpand.scm 197 */
																						obj_t BgL_list2445z00_1358;

																						{	/* Rgc/rgcexpand.scm 197 */
																							obj_t BgL_arg2446z00_1359;

																							BgL_arg2446z00_1359 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2445z00_1358 =
																								MAKE_PAIR(BgL_arg2443z00_1356,
																								BgL_arg2446z00_1359);
																						}
																						BgL_arg2441z00_1354 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2442z00_1355,
																							BgL_list2445z00_1358);
																				}}
																				BgL_arg2437z00_1350 =
																					MAKE_PAIR(BgL_arg2440z00_1353,
																					BgL_arg2441z00_1354);
																			}
																			{	/* Rgc/rgcexpand.scm 197 */
																				obj_t BgL_list2439z00_1352;

																				BgL_list2439z00_1352 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2436z00_1349 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2437z00_1350,
																					BgL_list2439z00_1352);
																		}}
																		BgL_arg2432z00_1346 =
																			MAKE_PAIR(BgL_arg2435z00_1348,
																			BgL_arg2436z00_1349);
																	}
																	BgL_arg2427z00_1341 =
																		MAKE_PAIR(BgL_arg2432z00_1346, BNIL);
																}
																{	/* Rgc/rgcexpand.scm 198 */
																	obj_t BgL_arg2447z00_1360;

																	obj_t BgL_arg2448z00_1361;

																	BgL_arg2447z00_1360 =
																		BGl_symbol3102z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 198 */
																		obj_t BgL_arg2449z00_1362;

																		obj_t BgL_arg2450z00_1363;

																		obj_t BgL_arg2451z00_1364;

																		{	/* Rgc/rgcexpand.scm 198 */
																			obj_t BgL_arg2456z00_1369;

																			obj_t BgL_arg2457z00_1370;

																			BgL_arg2456z00_1369 =
																				BGl_symbol3110z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 198 */
																				obj_t BgL_list2458z00_1371;

																				{	/* Rgc/rgcexpand.scm 198 */
																					obj_t BgL_arg2459z00_1372;

																					obj_t BgL_arg2460z00_1373;

																					BgL_arg2459z00_1372 =
																						BGl_symbol3108z00zz__rgc_expandz00;
																					BgL_arg2460z00_1373 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2458z00_1371 =
																						MAKE_PAIR(BgL_arg2459z00_1372,
																						BgL_arg2460z00_1373);
																				}
																				BgL_arg2457z00_1370 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol3157z00zz__rgc_expandz00,
																					BgL_list2458z00_1371);
																			}
																			BgL_arg2449z00_1362 =
																				MAKE_PAIR(BgL_arg2456z00_1369,
																				BgL_arg2457z00_1370);
																		}
																		{	/* Rgc/rgcexpand.scm 199 */
																			obj_t BgL_arg2461z00_1374;

																			obj_t BgL_arg2462z00_1375;

																			BgL_arg2461z00_1374 =
																				BGl_symbol3112z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 199 */
																				obj_t BgL_arg2469z00_1378;

																				{	/* Rgc/rgcexpand.scm 199 */
																					obj_t BgL_arg2477z00_1383;

																					obj_t BgL_arg2478z00_1384;

																					BgL_arg2477z00_1383 =
																						BGl_symbol3123z00zz__rgc_expandz00;
																					{	/* Rgc/rgcexpand.scm 199 */
																						obj_t BgL_list2479z00_1385;

																						{	/* Rgc/rgcexpand.scm 199 */
																							obj_t BgL_arg2480z00_1386;

																							obj_t BgL_arg2481z00_1387;

																							BgL_arg2480z00_1386 =
																								BGl_symbol3096z00zz__rgc_expandz00;
																							BgL_arg2481z00_1387 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2479z00_1385 =
																								MAKE_PAIR(BgL_arg2480z00_1386,
																								BgL_arg2481z00_1387);
																						}
																						BgL_arg2478z00_1384 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BGl_symbol3108z00zz__rgc_expandz00,
																							BgL_list2479z00_1385);
																					}
																					BgL_arg2469z00_1378 =
																						MAKE_PAIR(BgL_arg2477z00_1383,
																						BgL_arg2478z00_1384);
																				}
																				{	/* Rgc/rgcexpand.scm 199 */
																					obj_t BgL_list2471z00_1380;

																					{	/* Rgc/rgcexpand.scm 199 */
																						obj_t BgL_arg2472z00_1381;

																						{	/* Rgc/rgcexpand.scm 199 */
																							obj_t BgL_arg2476z00_1382;

																							BgL_arg2476z00_1382 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2472z00_1381 =
																								MAKE_PAIR(BgL_arg2469z00_1378,
																								BgL_arg2476z00_1382);
																						}
																						BgL_list2471z00_1380 =
																							MAKE_PAIR
																							(BGl_string3159z00zz__rgc_expandz00,
																							BgL_arg2472z00_1381);
																					}
																					BgL_arg2462z00_1375 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_string3160z00zz__rgc_expandz00,
																						BgL_list2471z00_1380);
																			}}
																			BgL_arg2450z00_1363 =
																				MAKE_PAIR(BgL_arg2461z00_1374,
																				BgL_arg2462z00_1375);
																		}
																		{	/* Rgc/rgcexpand.scm 200 */
																			obj_t BgL_arg2482z00_1388;

																			obj_t BgL_arg2483z00_1389;

																			BgL_arg2482z00_1388 =
																				BGl_symbol3161z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 200 */
																				obj_t BgL_list2484z00_1390;

																				{	/* Rgc/rgcexpand.scm 200 */
																					obj_t BgL_arg2485z00_1391;

																					obj_t BgL_arg2486z00_1392;

																					BgL_arg2485z00_1391 =
																						BGl_symbol3108z00zz__rgc_expandz00;
																					{	/* Rgc/rgcexpand.scm 200 */
																						obj_t BgL_arg2487z00_1393;

																						obj_t BgL_arg2488z00_1394;

																						BgL_arg2487z00_1393 =
																							BGl_symbol3157z00zz__rgc_expandz00;
																						BgL_arg2488z00_1394 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2486z00_1392 =
																							MAKE_PAIR(BgL_arg2487z00_1393,
																							BgL_arg2488z00_1394);
																					}
																					BgL_list2484z00_1390 =
																						MAKE_PAIR(BgL_arg2485z00_1391,
																						BgL_arg2486z00_1392);
																				}
																				BgL_arg2483z00_1389 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol3058z00zz__rgc_expandz00,
																					BgL_list2484z00_1390);
																			}
																			BgL_arg2451z00_1364 =
																				MAKE_PAIR(BgL_arg2482z00_1388,
																				BgL_arg2483z00_1389);
																		}
																		{	/* Rgc/rgcexpand.scm 198 */
																			obj_t BgL_list2453z00_1366;

																			{	/* Rgc/rgcexpand.scm 198 */
																				obj_t BgL_arg2454z00_1367;

																				{	/* Rgc/rgcexpand.scm 198 */
																					obj_t BgL_arg2455z00_1368;

																					BgL_arg2455z00_1368 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2454z00_1367 =
																						MAKE_PAIR(BgL_arg2451z00_1364,
																						BgL_arg2455z00_1368);
																				}
																				BgL_list2453z00_1366 =
																					MAKE_PAIR(BgL_arg2450z00_1363,
																					BgL_arg2454z00_1367);
																			}
																			BgL_arg2448z00_1361 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2449z00_1362,
																				BgL_list2453z00_1366);
																	}}
																	BgL_arg2428z00_1342 =
																		MAKE_PAIR(BgL_arg2447z00_1360,
																		BgL_arg2448z00_1361);
																}
																{	/* Rgc/rgcexpand.scm 197 */
																	obj_t BgL_list2430z00_1344;

																	{	/* Rgc/rgcexpand.scm 197 */
																		obj_t BgL_arg2431z00_1345;

																		BgL_arg2431z00_1345 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2430z00_1344 =
																			MAKE_PAIR(BgL_arg2428z00_1342,
																			BgL_arg2431z00_1345);
																	}
																	BgL_arg2426z00_1340 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2427z00_1341, BgL_list2430z00_1344);
															}}
															BgL_arg2414z00_1328 =
																MAKE_PAIR(BgL_arg2425z00_1339,
																BgL_arg2426z00_1340);
														}
														{	/* Rgc/rgcexpand.scm 201 */
															obj_t BgL_arg2489z00_1395;

															obj_t BgL_arg2491z00_1396;

															BgL_arg2489z00_1395 =
																BGl_symbol3102z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 201 */
																obj_t BgL_arg2492z00_1397;

																obj_t BgL_arg2493z00_1398;

																obj_t BgL_arg2494z00_1399;

																{	/* Rgc/rgcexpand.scm 201 */
																	obj_t BgL_arg2499z00_1404;

																	obj_t BgL_arg2500z00_1405;

																	BgL_arg2499z00_1404 =
																		BGl_symbol3104z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 201 */
																		obj_t BgL_arg2501z00_1406;

																		obj_t BgL_arg2502z00_1407;

																		obj_t BgL_arg2503z00_1408;

																		{	/* Rgc/rgcexpand.scm 201 */
																			obj_t BgL_arg2508z00_1413;

																			obj_t BgL_arg2509z00_1414;

																			BgL_arg2508z00_1413 =
																				BGl_symbol3106z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 201 */
																				obj_t BgL_list2510z00_1415;

																				{	/* Rgc/rgcexpand.scm 201 */
																					obj_t BgL_arg2512z00_1417;

																					BgL_arg2512z00_1417 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2510z00_1415 =
																						MAKE_PAIR(BINT(((long) 0)),
																						BgL_arg2512z00_1417);
																				}
																				BgL_arg2509z00_1414 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol3108z00zz__rgc_expandz00,
																					BgL_list2510z00_1415);
																			}
																			BgL_arg2501z00_1406 =
																				MAKE_PAIR(BgL_arg2508z00_1413,
																				BgL_arg2509z00_1414);
																		}
																		{	/* Rgc/rgcexpand.scm 201 */
																			obj_t BgL_arg2513z00_1418;

																			obj_t BgL_arg2514z00_1419;

																			BgL_arg2513z00_1418 =
																				BGl_symbol3110z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 201 */
																				obj_t BgL_arg2515z00_1420;

																				obj_t BgL_arg2516z00_1421;

																				BgL_arg2515z00_1420 =
																					BGl_symbol3096z00zz__rgc_expandz00;
																				BgL_arg2516z00_1421 =
																					MAKE_PAIR
																					(BGl_symbol3084z00zz__rgc_expandz00,
																					BNIL);
																				{	/* Rgc/rgcexpand.scm 201 */
																					obj_t BgL_list2518z00_1423;

																					{	/* Rgc/rgcexpand.scm 201 */
																						obj_t BgL_arg2519z00_1424;

																						BgL_arg2519z00_1424 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2518z00_1423 =
																							MAKE_PAIR(BgL_arg2516z00_1421,
																							BgL_arg2519z00_1424);
																					}
																					BgL_arg2514z00_1419 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2515z00_1420,
																						BgL_list2518z00_1423);
																			}}
																			BgL_arg2502z00_1407 =
																				MAKE_PAIR(BgL_arg2513z00_1418,
																				BgL_arg2514z00_1419);
																		}
																		{	/* Rgc/rgcexpand.scm 201 */
																			obj_t BgL_arg2520z00_1425;

																			obj_t BgL_arg2521z00_1426;

																			BgL_arg2520z00_1425 =
																				BGl_symbol3106z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 201 */
																				obj_t BgL_list2522z00_1427;

																				{	/* Rgc/rgcexpand.scm 201 */
																					obj_t BgL_arg2523z00_1428;

																					obj_t BgL_arg2524z00_1429;

																					BgL_arg2523z00_1428 =
																						BGl_symbol3108z00zz__rgc_expandz00;
																					BgL_arg2524z00_1429 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2522z00_1427 =
																						MAKE_PAIR(BgL_arg2523z00_1428,
																						BgL_arg2524z00_1429);
																				}
																				BgL_arg2521z00_1426 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol3096z00zz__rgc_expandz00,
																					BgL_list2522z00_1427);
																			}
																			BgL_arg2503z00_1408 =
																				MAKE_PAIR(BgL_arg2520z00_1425,
																				BgL_arg2521z00_1426);
																		}
																		{	/* Rgc/rgcexpand.scm 201 */
																			obj_t BgL_list2505z00_1410;

																			{	/* Rgc/rgcexpand.scm 201 */
																				obj_t BgL_arg2506z00_1411;

																				{	/* Rgc/rgcexpand.scm 201 */
																					obj_t BgL_arg2507z00_1412;

																					BgL_arg2507z00_1412 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2506z00_1411 =
																						MAKE_PAIR(BgL_arg2503z00_1408,
																						BgL_arg2507z00_1412);
																				}
																				BgL_list2505z00_1410 =
																					MAKE_PAIR(BgL_arg2502z00_1407,
																					BgL_arg2506z00_1411);
																			}
																			BgL_arg2500z00_1405 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2501z00_1406,
																				BgL_list2505z00_1410);
																	}}
																	BgL_arg2492z00_1397 =
																		MAKE_PAIR(BgL_arg2499z00_1404,
																		BgL_arg2500z00_1405);
																}
																{	/* Rgc/rgcexpand.scm 202 */
																	obj_t BgL_arg2525z00_1430;

																	obj_t BgL_arg2526z00_1431;

																	BgL_arg2525z00_1430 =
																		BGl_symbol3161z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 202 */
																		obj_t BgL_list2527z00_1432;

																		{	/* Rgc/rgcexpand.scm 202 */
																			obj_t BgL_arg2528z00_1433;

																			obj_t BgL_arg2529z00_1434;

																			BgL_arg2528z00_1433 =
																				BGl_symbol3108z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 202 */
																				obj_t BgL_arg2530z00_1435;

																				obj_t BgL_arg2531z00_1436;

																				BgL_arg2530z00_1435 =
																					BGl_symbol3096z00zz__rgc_expandz00;
																				BgL_arg2531z00_1436 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2529z00_1434 =
																					MAKE_PAIR(BgL_arg2530z00_1435,
																					BgL_arg2531z00_1436);
																			}
																			BgL_list2527z00_1432 =
																				MAKE_PAIR(BgL_arg2528z00_1433,
																				BgL_arg2529z00_1434);
																		}
																		BgL_arg2526z00_1431 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3058z00zz__rgc_expandz00,
																			BgL_list2527z00_1432);
																	}
																	BgL_arg2493z00_1398 =
																		MAKE_PAIR(BgL_arg2525z00_1430,
																		BgL_arg2526z00_1431);
																}
																{	/* Rgc/rgcexpand.scm 203 */
																	obj_t BgL_arg2532z00_1437;

																	obj_t BgL_arg2533z00_1438;

																	BgL_arg2532z00_1437 =
																		BGl_symbol3112z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 203 */
																		obj_t BgL_arg2536z00_1441;

																		{	/* Rgc/rgcexpand.scm 203 */
																			obj_t BgL_arg2541z00_1446;

																			obj_t BgL_arg2542z00_1447;

																			BgL_arg2541z00_1446 =
																				BGl_symbol3123z00zz__rgc_expandz00;
																			{	/* Rgc/rgcexpand.scm 203 */
																				obj_t BgL_list2543z00_1448;

																				{	/* Rgc/rgcexpand.scm 203 */
																					obj_t BgL_arg2544z00_1449;

																					obj_t BgL_arg2545z00_1450;

																					BgL_arg2544z00_1449 =
																						BGl_symbol3096z00zz__rgc_expandz00;
																					BgL_arg2545z00_1450 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2543z00_1448 =
																						MAKE_PAIR(BgL_arg2544z00_1449,
																						BgL_arg2545z00_1450);
																				}
																				BgL_arg2542z00_1447 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BGl_symbol3108z00zz__rgc_expandz00,
																					BgL_list2543z00_1448);
																			}
																			BgL_arg2536z00_1441 =
																				MAKE_PAIR(BgL_arg2541z00_1446,
																				BgL_arg2542z00_1447);
																		}
																		{	/* Rgc/rgcexpand.scm 203 */
																			obj_t BgL_list2538z00_1443;

																			{	/* Rgc/rgcexpand.scm 203 */
																				obj_t BgL_arg2539z00_1444;

																				{	/* Rgc/rgcexpand.scm 203 */
																					obj_t BgL_arg2540z00_1445;

																					BgL_arg2540z00_1445 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2539z00_1444 =
																						MAKE_PAIR(BgL_arg2536z00_1441,
																						BgL_arg2540z00_1445);
																				}
																				BgL_list2538z00_1443 =
																					MAKE_PAIR
																					(BGl_string3159z00zz__rgc_expandz00,
																					BgL_arg2539z00_1444);
																			}
																			BgL_arg2533z00_1438 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BGl_string3160z00zz__rgc_expandz00,
																				BgL_list2538z00_1443);
																	}}
																	BgL_arg2494z00_1399 =
																		MAKE_PAIR(BgL_arg2532z00_1437,
																		BgL_arg2533z00_1438);
																}
																{	/* Rgc/rgcexpand.scm 201 */
																	obj_t BgL_list2496z00_1401;

																	{	/* Rgc/rgcexpand.scm 201 */
																		obj_t BgL_arg2497z00_1402;

																		{	/* Rgc/rgcexpand.scm 201 */
																			obj_t BgL_arg2498z00_1403;

																			BgL_arg2498z00_1403 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2497z00_1402 =
																				MAKE_PAIR(BgL_arg2494z00_1399,
																				BgL_arg2498z00_1403);
																		}
																		BgL_list2496z00_1401 =
																			MAKE_PAIR(BgL_arg2493z00_1398,
																			BgL_arg2497z00_1402);
																	}
																	BgL_arg2491z00_1396 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2492z00_1397, BgL_list2496z00_1401);
															}}
															BgL_arg2415z00_1329 =
																MAKE_PAIR(BgL_arg2489z00_1395,
																BgL_arg2491z00_1396);
														}
														{	/* Rgc/rgcexpand.scm 196 */
															obj_t BgL_list2417z00_1331;

															{	/* Rgc/rgcexpand.scm 196 */
																obj_t BgL_arg2418z00_1332;

																{	/* Rgc/rgcexpand.scm 196 */
																	obj_t BgL_arg2419z00_1333;

																	BgL_arg2419z00_1333 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2418z00_1332 =
																		MAKE_PAIR(BgL_arg2415z00_1329,
																		BgL_arg2419z00_1333);
																}
																BgL_list2417z00_1331 =
																	MAKE_PAIR(BgL_arg2414z00_1328,
																	BgL_arg2418z00_1332);
															}
															BgL_arg2412z00_1326 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2413z00_1327, BgL_list2417z00_1331);
													}}
													BgL_arg2402z00_1316 =
														MAKE_PAIR(BgL_arg2411z00_1325, BgL_arg2412z00_1326);
												}
												{	/* Rgc/rgcexpand.scm 195 */
													obj_t BgL_list2404z00_1318;

													{	/* Rgc/rgcexpand.scm 195 */
														obj_t BgL_arg2405z00_1319;

														BgL_arg2405z00_1319 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2404z00_1318 =
															MAKE_PAIR(BgL_arg2402z00_1316,
															BgL_arg2405z00_1319);
													}
													BgL_arg2400z00_1314 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2401z00_1315, BgL_list2404z00_1318);
											}}
											BgL_arg2005z00_958 =
												MAKE_PAIR(BgL_arg2399z00_1313, BgL_arg2400z00_1314);
										}
										{	/* Rgc/rgcexpand.scm 205 */
											obj_t BgL_arg2546z00_1451;

											obj_t BgL_arg2547z00_1452;

											BgL_arg2546z00_1451 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 205 */
												obj_t BgL_arg2548z00_1453;

												obj_t BgL_arg2549z00_1454;

												BgL_arg2548z00_1453 =
													MAKE_PAIR(BGl_symbol3163z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 206 */
													obj_t BgL_arg2553z00_1458;

													obj_t BgL_arg2554z00_1459;

													BgL_arg2553z00_1458 =
														BGl_symbol3165z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 206 */
														obj_t BgL_list2555z00_1460;

														BgL_list2555z00_1460 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2554z00_1459 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2555z00_1460);
													}
													BgL_arg2549z00_1454 =
														MAKE_PAIR(BgL_arg2553z00_1458, BgL_arg2554z00_1459);
												}
												{	/* Rgc/rgcexpand.scm 205 */
													obj_t BgL_list2551z00_1456;

													{	/* Rgc/rgcexpand.scm 205 */
														obj_t BgL_arg2552z00_1457;

														BgL_arg2552z00_1457 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2551z00_1456 =
															MAKE_PAIR(BgL_arg2549z00_1454,
															BgL_arg2552z00_1457);
													}
													BgL_arg2547z00_1452 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2548z00_1453, BgL_list2551z00_1456);
											}}
											BgL_arg2006z00_959 =
												MAKE_PAIR(BgL_arg2546z00_1451, BgL_arg2547z00_1452);
										}
										{	/* Rgc/rgcexpand.scm 208 */
											obj_t BgL_arg2556z00_1461;

											obj_t BgL_arg2557z00_1462;

											BgL_arg2556z00_1461 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 208 */
												obj_t BgL_arg2558z00_1463;

												obj_t BgL_arg2559z00_1464;

												BgL_arg2558z00_1463 =
													MAKE_PAIR(BGl_symbol3167z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 209 */
													obj_t BgL_arg2563z00_1468;

													obj_t BgL_arg2564z00_1469;

													BgL_arg2563z00_1468 =
														BGl_symbol3169z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 209 */
														obj_t BgL_list2565z00_1470;

														BgL_list2565z00_1470 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2564z00_1469 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2565z00_1470);
													}
													BgL_arg2559z00_1464 =
														MAKE_PAIR(BgL_arg2563z00_1468, BgL_arg2564z00_1469);
												}
												{	/* Rgc/rgcexpand.scm 208 */
													obj_t BgL_list2561z00_1466;

													{	/* Rgc/rgcexpand.scm 208 */
														obj_t BgL_arg2562z00_1467;

														BgL_arg2562z00_1467 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2561z00_1466 =
															MAKE_PAIR(BgL_arg2559z00_1464,
															BgL_arg2562z00_1467);
													}
													BgL_arg2557z00_1462 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2558z00_1463, BgL_list2561z00_1466);
											}}
											BgL_arg2007z00_960 =
												MAKE_PAIR(BgL_arg2556z00_1461, BgL_arg2557z00_1462);
										}
										{	/* Rgc/rgcexpand.scm 211 */
											obj_t BgL_arg2566z00_1471;

											obj_t BgL_arg2568z00_1472;

											BgL_arg2566z00_1471 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 211 */
												obj_t BgL_arg2569z00_1473;

												obj_t BgL_arg2571z00_1474;

												BgL_arg2569z00_1473 =
													MAKE_PAIR(BGl_symbol3171z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 212 */
													obj_t BgL_arg2575z00_1478;

													obj_t BgL_arg2576z00_1479;

													BgL_arg2575z00_1478 =
														BGl_symbol3173z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 212 */
														obj_t BgL_list2577z00_1480;

														BgL_list2577z00_1480 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2576z00_1479 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2577z00_1480);
													}
													BgL_arg2571z00_1474 =
														MAKE_PAIR(BgL_arg2575z00_1478, BgL_arg2576z00_1479);
												}
												{	/* Rgc/rgcexpand.scm 211 */
													obj_t BgL_list2573z00_1476;

													{	/* Rgc/rgcexpand.scm 211 */
														obj_t BgL_arg2574z00_1477;

														BgL_arg2574z00_1477 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2573z00_1476 =
															MAKE_PAIR(BgL_arg2571z00_1474,
															BgL_arg2574z00_1477);
													}
													BgL_arg2568z00_1472 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2569z00_1473, BgL_list2573z00_1476);
											}}
											BgL_arg2008z00_961 =
												MAKE_PAIR(BgL_arg2566z00_1471, BgL_arg2568z00_1472);
										}
										{	/* Rgc/rgcexpand.scm 214 */
											obj_t BgL_arg2578z00_1481;

											obj_t BgL_arg2579z00_1482;

											BgL_arg2578z00_1481 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 214 */
												obj_t BgL_arg2580z00_1483;

												obj_t BgL_arg2581z00_1484;

												BgL_arg2580z00_1483 =
													MAKE_PAIR(BGl_symbol3175z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 215 */
													obj_t BgL_arg2585z00_1488;

													obj_t BgL_arg2586z00_1489;

													BgL_arg2585z00_1488 =
														BGl_symbol3177z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 215 */
														obj_t BgL_list2587z00_1490;

														BgL_list2587z00_1490 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2586z00_1489 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2587z00_1490);
													}
													BgL_arg2581z00_1484 =
														MAKE_PAIR(BgL_arg2585z00_1488, BgL_arg2586z00_1489);
												}
												{	/* Rgc/rgcexpand.scm 214 */
													obj_t BgL_list2583z00_1486;

													{	/* Rgc/rgcexpand.scm 214 */
														obj_t BgL_arg2584z00_1487;

														BgL_arg2584z00_1487 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2583z00_1486 =
															MAKE_PAIR(BgL_arg2581z00_1484,
															BgL_arg2584z00_1487);
													}
													BgL_arg2579z00_1482 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2580z00_1483, BgL_list2583z00_1486);
											}}
											BgL_arg2009z00_962 =
												MAKE_PAIR(BgL_arg2578z00_1481, BgL_arg2579z00_1482);
										}
										{	/* Rgc/rgcexpand.scm 217 */
											obj_t BgL_arg2589z00_1491;

											obj_t BgL_arg2590z00_1492;

											BgL_arg2589z00_1491 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 217 */
												obj_t BgL_arg2591z00_1493;

												obj_t BgL_arg2592z00_1494;

												BgL_arg2591z00_1493 =
													MAKE_PAIR(BGl_symbol3179z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 218 */
													obj_t BgL_arg2596z00_1498;

													obj_t BgL_arg2597z00_1499;

													BgL_arg2596z00_1498 =
														BGl_symbol3181z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 218 */
														obj_t BgL_list2598z00_1500;

														BgL_list2598z00_1500 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2597z00_1499 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3058z00zz__rgc_expandz00,
															BgL_list2598z00_1500);
													}
													BgL_arg2592z00_1494 =
														MAKE_PAIR(BgL_arg2596z00_1498, BgL_arg2597z00_1499);
												}
												{	/* Rgc/rgcexpand.scm 217 */
													obj_t BgL_list2594z00_1496;

													{	/* Rgc/rgcexpand.scm 217 */
														obj_t BgL_arg2595z00_1497;

														BgL_arg2595z00_1497 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2594z00_1496 =
															MAKE_PAIR(BgL_arg2592z00_1494,
															BgL_arg2595z00_1497);
													}
													BgL_arg2590z00_1492 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2591z00_1493, BgL_list2594z00_1496);
											}}
											BgL_arg2010z00_963 =
												MAKE_PAIR(BgL_arg2589z00_1491, BgL_arg2590z00_1492);
										}
										{	/* Rgc/rgcexpand.scm 220 */
											obj_t BgL_arg2599z00_1501;

											obj_t BgL_arg2600z00_1502;

											BgL_arg2599z00_1501 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 220 */
												obj_t BgL_arg2601z00_1503;

												obj_t BgL_arg2602z00_1504;

												BgL_arg2601z00_1503 =
													MAKE_PAIR(BGl_symbol3183z00zz__rgc_expandz00, BNIL);
												{	/* Rgc/rgcexpand.scm 221 */
													obj_t BgL_arg2606z00_1508;

													obj_t BgL_arg2607z00_1509;

													BgL_arg2606z00_1508 =
														BGl_symbol3102z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 221 */
														obj_t BgL_arg2608z00_1510;

														obj_t BgL_arg2609z00_1511;

														{	/* Rgc/rgcexpand.scm 221 */
															obj_t BgL_arg2614z00_1516;

															obj_t BgL_arg2615z00_1517;

															BgL_arg2614z00_1516 =
																BGl_symbol3185z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 221 */
																obj_t BgL_arg2616z00_1518;

																{	/* Rgc/rgcexpand.scm 221 */
																	obj_t BgL_arg2621z00_1523;

																	obj_t BgL_arg2622z00_1524;

																	BgL_arg2621z00_1523 =
																		BGl_symbol3137z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 221 */
																		obj_t BgL_list2623z00_1525;

																		BgL_list2623z00_1525 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2622z00_1524 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3058z00zz__rgc_expandz00,
																			BgL_list2623z00_1525);
																	}
																	BgL_arg2616z00_1518 =
																		MAKE_PAIR(BgL_arg2621z00_1523,
																		BgL_arg2622z00_1524);
																}
																{	/* Rgc/rgcexpand.scm 221 */
																	obj_t BgL_list2619z00_1521;

																	{	/* Rgc/rgcexpand.scm 221 */
																		obj_t BgL_arg2620z00_1522;

																		BgL_arg2620z00_1522 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2619z00_1521 =
																			MAKE_PAIR(BINT(((long) 0)),
																			BgL_arg2620z00_1522);
																	}
																	BgL_arg2615z00_1517 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2616z00_1518, BgL_list2619z00_1521);
															}}
															BgL_arg2608z00_1510 =
																MAKE_PAIR(BgL_arg2614z00_1516,
																BgL_arg2615z00_1517);
														}
														{	/* Rgc/rgcexpand.scm 224 */
															obj_t BgL_arg2624z00_1526;

															obj_t BgL_arg2625z00_1527;

															BgL_arg2624z00_1526 =
																BGl_symbol3066z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 224 */
																obj_t BgL_list2626z00_1528;

																BgL_list2626z00_1528 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2625z00_1527 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3058z00zz__rgc_expandz00,
																	BgL_list2626z00_1528);
															}
															BgL_arg2609z00_1511 =
																MAKE_PAIR(BgL_arg2624z00_1526,
																BgL_arg2625z00_1527);
														}
														{	/* Rgc/rgcexpand.scm 221 */
															obj_t BgL_list2611z00_1513;

															{	/* Rgc/rgcexpand.scm 221 */
																obj_t BgL_arg2612z00_1514;

																{	/* Rgc/rgcexpand.scm 221 */
																	obj_t BgL_arg2613z00_1515;

																	BgL_arg2613z00_1515 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2612z00_1514 =
																		MAKE_PAIR(BgL_arg2609z00_1511,
																		BgL_arg2613z00_1515);
																}
																BgL_list2611z00_1513 =
																	MAKE_PAIR(BCNST(256), BgL_arg2612z00_1514);
															}
															BgL_arg2607z00_1509 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2608z00_1510, BgL_list2611z00_1513);
													}}
													BgL_arg2602z00_1504 =
														MAKE_PAIR(BgL_arg2606z00_1508, BgL_arg2607z00_1509);
												}
												{	/* Rgc/rgcexpand.scm 220 */
													obj_t BgL_list2604z00_1506;

													{	/* Rgc/rgcexpand.scm 220 */
														obj_t BgL_arg2605z00_1507;

														BgL_arg2605z00_1507 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2604z00_1506 =
															MAKE_PAIR(BgL_arg2602z00_1504,
															BgL_arg2605z00_1507);
													}
													BgL_arg2600z00_1502 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2601z00_1503, BgL_list2604z00_1506);
											}}
											BgL_arg2011z00_964 =
												MAKE_PAIR(BgL_arg2599z00_1501, BgL_arg2600z00_1502);
										}
										{	/* Rgc/rgcexpand.scm 226 */
											obj_t BgL_arg2627z00_1529;

											obj_t BgL_arg2628z00_1530;

											BgL_arg2627z00_1529 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 226 */
												obj_t BgL_arg2629z00_1531;

												obj_t BgL_arg2630z00_1532;

												BgL_arg2629z00_1531 =
													MAKE_PAIR(BGl_symbol3187z00zz__rgc_expandz00, BNIL);
												BgL_arg2630z00_1532 =
													BGl_symbol3054z00zz__rgc_expandz00;
												{	/* Rgc/rgcexpand.scm 226 */
													obj_t BgL_list2632z00_1534;

													{	/* Rgc/rgcexpand.scm 226 */
														obj_t BgL_arg2633z00_1535;

														BgL_arg2633z00_1535 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2632z00_1534 =
															MAKE_PAIR(BgL_arg2630z00_1532,
															BgL_arg2633z00_1535);
													}
													BgL_arg2628z00_1530 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2629z00_1531, BgL_list2632z00_1534);
											}}
											BgL_arg2012z00_965 =
												MAKE_PAIR(BgL_arg2627z00_1529, BgL_arg2628z00_1530);
										}
										{	/* Rgc/rgcexpand.scm 229 */
											obj_t BgL_arg2634z00_1536;

											obj_t BgL_arg2635z00_1537;

											BgL_arg2634z00_1536 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 229 */
												obj_t BgL_arg2636z00_1538;

												obj_t BgL_arg2637z00_1539;

												{	/* Rgc/rgcexpand.scm 229 */
													obj_t BgL_arg2641z00_1543;

													obj_t BgL_arg2642z00_1544;

													BgL_arg2641z00_1543 =
														BGl_symbol3189z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 229 */
														obj_t BgL_list2643z00_1545;

														BgL_list2643z00_1545 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2642z00_1544 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3191z00zz__rgc_expandz00,
															BgL_list2643z00_1545);
													}
													BgL_arg2636z00_1538 =
														MAKE_PAIR(BgL_arg2641z00_1543, BgL_arg2642z00_1544);
												}
												{	/* Rgc/rgcexpand.scm 230 */
													obj_t BgL_arg2644z00_1546;

													obj_t BgL_arg2645z00_1547;

													BgL_arg2644z00_1546 =
														BGl_symbol3193z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 230 */
														obj_t BgL_list2646z00_1548;

														{	/* Rgc/rgcexpand.scm 230 */
															obj_t BgL_arg2647z00_1549;

															obj_t BgL_arg2648z00_1550;

															BgL_arg2647z00_1549 =
																BGl_symbol3191z00zz__rgc_expandz00;
															BgL_arg2648z00_1550 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2646z00_1548 =
																MAKE_PAIR(BgL_arg2647z00_1549,
																BgL_arg2648z00_1550);
														}
														BgL_arg2645z00_1547 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3054z00zz__rgc_expandz00,
															BgL_list2646z00_1548);
													}
													BgL_arg2637z00_1539 =
														MAKE_PAIR(BgL_arg2644z00_1546, BgL_arg2645z00_1547);
												}
												{	/* Rgc/rgcexpand.scm 229 */
													obj_t BgL_list2639z00_1541;

													{	/* Rgc/rgcexpand.scm 229 */
														obj_t BgL_arg2640z00_1542;

														BgL_arg2640z00_1542 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2639z00_1541 =
															MAKE_PAIR(BgL_arg2637z00_1539,
															BgL_arg2640z00_1542);
													}
													BgL_arg2635z00_1537 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2636z00_1538, BgL_list2639z00_1541);
											}}
											BgL_arg2013z00_966 =
												MAKE_PAIR(BgL_arg2634z00_1536, BgL_arg2635z00_1537);
										}
										{	/* Rgc/rgcexpand.scm 232 */
											obj_t BgL_arg2649z00_1551;

											obj_t BgL_arg2650z00_1552;

											BgL_arg2649z00_1551 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 232 */
												obj_t BgL_arg2651z00_1553;

												obj_t BgL_arg2652z00_1554;

												{	/* Rgc/rgcexpand.scm 232 */
													obj_t BgL_arg2658z00_1558;

													obj_t BgL_arg2659z00_1559;

													BgL_arg2658z00_1558 =
														BGl_symbol3195z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 232 */
														obj_t BgL_list2660z00_1560;

														BgL_list2660z00_1560 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2659z00_1559 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3191z00zz__rgc_expandz00,
															BgL_list2660z00_1560);
													}
													BgL_arg2651z00_1553 =
														MAKE_PAIR(BgL_arg2658z00_1558, BgL_arg2659z00_1559);
												}
												{	/* Rgc/rgcexpand.scm 233 */
													obj_t BgL_arg2661z00_1561;

													obj_t BgL_arg2663z00_1562;

													BgL_arg2661z00_1561 =
														BGl_symbol3098z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 233 */
														obj_t BgL_list2664z00_1563;

														{	/* Rgc/rgcexpand.scm 233 */
															obj_t BgL_arg2665z00_1564;

															obj_t BgL_arg2666z00_1565;

															BgL_arg2665z00_1564 =
																BGl_symbol3191z00zz__rgc_expandz00;
															BgL_arg2666z00_1565 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2664z00_1563 =
																MAKE_PAIR(BgL_arg2665z00_1564,
																BgL_arg2666z00_1565);
														}
														BgL_arg2663z00_1562 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BGl_symbol3054z00zz__rgc_expandz00,
															BgL_list2664z00_1563);
													}
													BgL_arg2652z00_1554 =
														MAKE_PAIR(BgL_arg2661z00_1561, BgL_arg2663z00_1562);
												}
												{	/* Rgc/rgcexpand.scm 232 */
													obj_t BgL_list2656z00_1556;

													{	/* Rgc/rgcexpand.scm 232 */
														obj_t BgL_arg2657z00_1557;

														BgL_arg2657z00_1557 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2656z00_1556 =
															MAKE_PAIR(BgL_arg2652z00_1554,
															BgL_arg2657z00_1557);
													}
													BgL_arg2650z00_1552 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2651z00_1553, BgL_list2656z00_1556);
											}}
											BgL_arg2015z00_967 =
												MAKE_PAIR(BgL_arg2649z00_1551, BgL_arg2650z00_1552);
										}
										{	/* Rgc/rgcexpand.scm 234 */
											obj_t BgL_arg2667z00_1566;

											obj_t BgL_arg2668z00_1567;

											BgL_arg2667z00_1566 = BGl_symbol3060z00zz__rgc_expandz00;
											{	/* Rgc/rgcexpand.scm 234 */
												obj_t BgL_arg2669z00_1568;

												obj_t BgL_arg2670z00_1569;

												BgL_arg2669z00_1568 =
													MAKE_PAIR(BGl_symbol3197z00zz__rgc_expandz00,
													BGl_symbol3191z00zz__rgc_expandz00);
												{	/* Rgc/rgcexpand.scm 235 */
													obj_t BgL_arg2674z00_1573;

													obj_t BgL_arg2675z00_1574;

													BgL_arg2674z00_1573 =
														BGl_symbol3102z00zz__rgc_expandz00;
													{	/* Rgc/rgcexpand.scm 235 */
														obj_t BgL_arg2676z00_1575;

														obj_t BgL_arg2677z00_1576;

														obj_t BgL_arg2678z00_1577;

														{	/* Rgc/rgcexpand.scm 235 */
															obj_t BgL_arg2683z00_1582;

															obj_t BgL_arg2684z00_1583;

															BgL_arg2683z00_1582 =
																BGl_symbol3199z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 235 */
																obj_t BgL_list2685z00_1584;

																BgL_list2685z00_1584 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2684z00_1583 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3191z00zz__rgc_expandz00,
																	BgL_list2685z00_1584);
															}
															BgL_arg2676z00_1575 =
																MAKE_PAIR(BgL_arg2683z00_1582,
																BgL_arg2684z00_1583);
														}
														{	/* Rgc/rgcexpand.scm 236 */
															obj_t BgL_arg2686z00_1585;

															obj_t BgL_arg2687z00_1586;

															BgL_arg2686z00_1585 =
																BGl_symbol3098z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 236 */
																obj_t BgL_arg2688z00_1587;

																obj_t BgL_arg2689z00_1588;

																BgL_arg2688z00_1587 =
																	BGl_symbol3054z00zz__rgc_expandz00;
																{	/* Rgc/rgcexpand.scm 236 */
																	obj_t BgL_arg2693z00_1592;

																	obj_t BgL_arg2694z00_1593;

																	BgL_arg2693z00_1592 =
																		BGl_symbol3201z00zz__rgc_expandz00;
																	{	/* Rgc/rgcexpand.scm 236 */
																		obj_t BgL_list2695z00_1594;

																		BgL_list2695z00_1594 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2694z00_1593 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_symbol3191z00zz__rgc_expandz00,
																			BgL_list2695z00_1594);
																	}
																	BgL_arg2689z00_1588 =
																		MAKE_PAIR(BgL_arg2693z00_1592,
																		BgL_arg2694z00_1593);
																}
																{	/* Rgc/rgcexpand.scm 236 */
																	obj_t BgL_list2691z00_1590;

																	{	/* Rgc/rgcexpand.scm 236 */
																		obj_t BgL_arg2692z00_1591;

																		BgL_arg2692z00_1591 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2691z00_1590 =
																			MAKE_PAIR(BgL_arg2689z00_1588,
																			BgL_arg2692z00_1591);
																	}
																	BgL_arg2687z00_1586 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2688z00_1587, BgL_list2691z00_1590);
															}}
															BgL_arg2677z00_1576 =
																MAKE_PAIR(BgL_arg2686z00_1585,
																BgL_arg2687z00_1586);
														}
														{	/* Rgc/rgcexpand.scm 237 */
															obj_t BgL_arg2696z00_1595;

															obj_t BgL_arg2697z00_1596;

															BgL_arg2696z00_1595 =
																BGl_symbol3098z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 237 */
																obj_t BgL_list2698z00_1597;

																{	/* Rgc/rgcexpand.scm 237 */
																	obj_t BgL_arg2699z00_1598;

																	BgL_arg2699z00_1598 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2698z00_1597 =
																		MAKE_PAIR(BUNSPEC, BgL_arg2699z00_1598);
																}
																BgL_arg2697z00_1596 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BGl_symbol3054z00zz__rgc_expandz00,
																	BgL_list2698z00_1597);
															}
															BgL_arg2678z00_1577 =
																MAKE_PAIR(BgL_arg2696z00_1595,
																BgL_arg2697z00_1596);
														}
														{	/* Rgc/rgcexpand.scm 235 */
															obj_t BgL_list2680z00_1579;

															{	/* Rgc/rgcexpand.scm 235 */
																obj_t BgL_arg2681z00_1580;

																{	/* Rgc/rgcexpand.scm 235 */
																	obj_t BgL_arg2682z00_1581;

																	BgL_arg2682z00_1581 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2681z00_1580 =
																		MAKE_PAIR(BgL_arg2678z00_1577,
																		BgL_arg2682z00_1581);
																}
																BgL_list2680z00_1579 =
																	MAKE_PAIR(BgL_arg2677z00_1576,
																	BgL_arg2681z00_1580);
															}
															BgL_arg2675z00_1574 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2676z00_1575, BgL_list2680z00_1579);
													}}
													BgL_arg2670z00_1569 =
														MAKE_PAIR(BgL_arg2674z00_1573, BgL_arg2675z00_1574);
												}
												{	/* Rgc/rgcexpand.scm 234 */
													obj_t BgL_list2672z00_1571;

													{	/* Rgc/rgcexpand.scm 234 */
														obj_t BgL_arg2673z00_1572;

														BgL_arg2673z00_1572 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2672z00_1571 =
															MAKE_PAIR(BgL_arg2670z00_1569,
															BgL_arg2673z00_1572);
													}
													BgL_arg2668z00_1567 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2669z00_1568, BgL_list2672z00_1571);
											}}
											BgL_arg2016z00_968 =
												MAKE_PAIR(BgL_arg2667z00_1566, BgL_arg2668z00_1567);
										}
										{	/* Rgc/rgcexpand.scm 238 */
											obj_t BgL_arg2700z00_1599;

											obj_t BgL_arg2701z00_1600;

											if (CBOOL(BgL_submatchzf3zf3_9))
												{	/* Rgc/rgcexpand.scm 240 */
													obj_t BgL_list2702z00_1601;

													{	/* Rgc/rgcexpand.scm 240 */
														obj_t BgL_arg2703z00_1602;

														obj_t BgL_arg2704z00_1603;

														BgL_arg2703z00_1602 =
															BGl_list3203z00zz__rgc_expandz00;
														{	/* Rgc/rgcexpand.scm 241 */
															obj_t BgL_arg2705z00_1604;

															obj_t BgL_arg2706z00_1605;

															BgL_arg2705z00_1604 =
																BGl_list3209z00zz__rgc_expandz00;
															{	/* Rgc/rgcexpand.scm 248 */
																obj_t BgL_arg2707z00_1606;

																obj_t BgL_arg2708z00_1607;

																BgL_arg2707z00_1606 =
																	BGl_list3232z00zz__rgc_expandz00;
																BgL_arg2708z00_1607 =
																	MAKE_PAIR(BGl_list3242z00zz__rgc_expandz00,
																	BNIL);
																BgL_arg2706z00_1605 =
																	MAKE_PAIR(BgL_arg2707z00_1606,
																	BgL_arg2708z00_1607);
															}
															BgL_arg2704z00_1603 =
																MAKE_PAIR(BgL_arg2705z00_1604,
																BgL_arg2706z00_1605);
														}
														BgL_list2702z00_1601 =
															MAKE_PAIR(BgL_arg2703z00_1602,
															BgL_arg2704z00_1603);
													}
													BgL_arg2700z00_1599 = BgL_list2702z00_1601;
												}
											else
												{	/* Rgc/rgcexpand.scm 238 */
													BgL_arg2700z00_1599 = BNIL;
												}
											{	/* Rgc/rgcexpand.scm 266 */
												obj_t BgL_arg2709z00_1608;

												{	/* Rgc/rgcexpand.scm 266 */
													obj_t BgL_arg2710z00_1609;

													obj_t BgL_arg2711z00_1610;

													{	/* Rgc/rgcexpand.scm 266 */
														obj_t BgL_arg2712z00_1611;

														obj_t BgL_arg2713z00_1612;

														BgL_arg2712z00_1611 =
															BGl_symbol3060z00zz__rgc_expandz00;
														{	/* Rgc/rgcexpand.scm 266 */
															obj_t BgL_arg2714z00_1613;

															obj_t BgL_arg2716z00_1614;

															obj_t BgL_arg2717z00_1615;

															BgL_arg2714z00_1613 =
																MAKE_PAIR(BGl_symbol3250z00zz__rgc_expandz00,
																BNIL);
															{	/* Rgc/rgcexpand.scm 267 */
																obj_t BgL_arg2720z00_1618;

																obj_t BgL_arg2721z00_1619;

																BgL_arg2720z00_1618 =
																	BGl_symbol3252z00zz__rgc_expandz00;
																{	/* Rgc/rgcexpand.scm 267 */
																	obj_t BgL_list2722z00_1620;

																	BgL_list2722z00_1620 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2721z00_1619 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol3058z00zz__rgc_expandz00,
																		BgL_list2722z00_1620);
																}
																BgL_arg2716z00_1614 =
																	MAKE_PAIR(BgL_arg2720z00_1618,
																	BgL_arg2721z00_1619);
															}
															{	/* Rgc/rgcexpand.scm 268 */
																obj_t BgL_arg2724z00_1621;

																obj_t BgL_arg2725z00_1622;

																if (CBOOL(BgL_submatchzf3zf3_9))
																	{	/* Rgc/rgcexpand.scm 269 */
																		obj_t BgL_list2726z00_1623;

																		BgL_list2726z00_1623 =
																			MAKE_PAIR
																			(BGl_list3254z00zz__rgc_expandz00, BNIL);
																		BgL_arg2724z00_1621 = BgL_list2726z00_1623;
																	}
																else
																	{	/* Rgc/rgcexpand.scm 268 */
																		BgL_arg2724z00_1621 = BNIL;
																	}
																{	/* Rgc/rgcexpand.scm 271 */
																	obj_t BgL_arg2727z00_1624;

																	{	/* Rgc/rgcexpand.scm 271 */
																		obj_t BgL_arg2729z00_1626;

																		obj_t BgL_arg2730z00_1627;

																		BgL_arg2729z00_1626 =
																			BGl_symbol3040z00zz__rgc_expandz00;
																		{	/* Rgc/rgcexpand.scm 271 */
																			obj_t BgL_arg2731z00_1628;

																			obj_t BgL_arg2732z00_1629;

																			obj_t BgL_arg2733z00_1630;

																			{	/* Rgc/rgcexpand.scm 271 */
																				obj_t BgL_arg2736z00_1633;

																				{	/* Rgc/rgcexpand.scm 271 */
																					obj_t BgL_arg2738z00_1635;

																					obj_t BgL_arg2739z00_1636;

																					BgL_arg2738z00_1635 =
																						BGl_symbol3255z00zz__rgc_expandz00;
																					{	/* Rgc/rgcexpand.scm 271 */
																						obj_t BgL_arg2740z00_1637;

																						{	/* Rgc/rgcexpand.scm 271 */
																							obj_t BgL_arg2743z00_1640;

																							obj_t BgL_arg2745z00_1641;

																							BgL_arg2743z00_1640 =
																								BGl_statezd2namezd2zz__rgc_dfaz00
																								(BGl_getzd2initialzd2statez00zz__rgc_dfaz00
																								());
																							{	/* Rgc/rgcexpand.scm 271 */
																								obj_t BgL_list2747z00_1643;

																								{	/* Rgc/rgcexpand.scm 271 */
																									obj_t BgL_arg2748z00_1644;

																									BgL_arg2748z00_1644 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2747z00_1643 =
																										MAKE_PAIR
																										(BgL_elsezd2numzd2_8,
																										BgL_arg2748z00_1644);
																								}
																								BgL_arg2745z00_1641 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol3058z00zz__rgc_expandz00,
																									BgL_list2747z00_1643);
																							}
																							BgL_arg2740z00_1637 =
																								MAKE_PAIR(BgL_arg2743z00_1640,
																								BgL_arg2745z00_1641);
																						}
																						{	/* Rgc/rgcexpand.scm 271 */
																							obj_t BgL_list2742z00_1639;

																							BgL_list2742z00_1639 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2739z00_1636 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2740z00_1637,
																								BgL_list2742z00_1639);
																						}
																					}
																					BgL_arg2736z00_1633 =
																						MAKE_PAIR(BgL_arg2738z00_1635,
																						BgL_arg2739z00_1636);
																				}
																				BgL_arg2731z00_1628 =
																					MAKE_PAIR(BgL_arg2736z00_1633, BNIL);
																			}
																			{	/* Rgc/rgcexpand.scm 274 */
																				obj_t BgL_arg2749z00_1645;

																				obj_t BgL_arg2750z00_1646;

																				BgL_arg2749z00_1645 =
																					BGl_symbol3257z00zz__rgc_expandz00;
																				{	/* Rgc/rgcexpand.scm 274 */
																					obj_t BgL_list2751z00_1647;

																					BgL_list2751z00_1647 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2750z00_1646 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol3058z00zz__rgc_expandz00,
																						BgL_list2751z00_1647);
																				}
																				BgL_arg2732z00_1629 =
																					MAKE_PAIR(BgL_arg2749z00_1645,
																					BgL_arg2750z00_1646);
																			}
																			{	/* Rgc/rgcexpand.scm 275 */
																				obj_t BgL_arg2752z00_1648;

																				obj_t BgL_arg2753z00_1649;

																				if (CBOOL(BgL_submatchzf3zf3_9))
																					{	/* Rgc/rgcexpand.scm 275 */
																						BgL_arg2752z00_1648 =
																							BGl_list3259z00zz__rgc_expandz00;
																					}
																				else
																					{	/* Rgc/rgcexpand.scm 275 */
																						BgL_arg2752z00_1648 = BNIL;
																					}
																				{	/* Rgc/rgcexpand.scm 290 */
																					obj_t BgL_arg2754z00_1650;

																					{	/* Rgc/rgcexpand.scm 290 */
																						obj_t BgL_arg2756z00_1652;

																						obj_t BgL_arg2758z00_1653;

																						BgL_arg2756z00_1652 =
																							BGl_symbol3283z00zz__rgc_expandz00;
																						{	/* Rgc/rgcexpand.scm 290 */
																							obj_t BgL_arg2759z00_1654;

																							obj_t BgL_arg2760z00_1655;

																							BgL_arg2759z00_1654 =
																								BGl_symbol3222z00zz__rgc_expandz00;
																							{	/* Rgc/rgcexpand.scm 291 */
																								obj_t BgL_arg2762z00_1657;

																								obj_t BgL_arg2763z00_1658;

																								{
																									obj_t BgL_actionsz00_1661;

																									long BgL_numz00_1662;

																									obj_t BgL_resz00_1663;

																									BgL_actionsz00_1661 =
																										BgL_actionsz00_7;
																									BgL_numz00_1662 = ((long) 0);
																									BgL_resz00_1663 = BNIL;
																								BgL_zc3anonymousza32764ze3z83_1664:
																									if (NULLP
																										(BgL_actionsz00_1661))
																										{	/* Rgc/rgcexpand.scm 294 */
																											BgL_arg2762z00_1657 =
																												BgL_resz00_1663;
																										}
																									else
																										{	/* Rgc/rgcexpand.scm 296 */
																											obj_t BgL_arg2766z00_1666;

																											long BgL_arg2767z00_1667;

																											obj_t BgL_arg2768z00_1668;

																											BgL_arg2766z00_1666 =
																												CDR
																												(BgL_actionsz00_1661);
																											BgL_arg2767z00_1667 =
																												(BgL_numz00_1662 +
																												((long) 1));
																											{	/* Rgc/rgcexpand.scm 298 */
																												obj_t
																													BgL_arg2769z00_1669;
																												{	/* Rgc/rgcexpand.scm 298 */
																													obj_t
																														BgL_arg2770z00_1670;
																													obj_t
																														BgL_arg2771z00_1671;
																													BgL_arg2770z00_1670 =
																														MAKE_PAIR(BINT
																														(BgL_numz00_1662),
																														BNIL);
																													{	/* Rgc/rgcexpand.scm 298 */
																														obj_t
																															BgL_arg2773z00_1672;
																														BgL_arg2773z00_1672
																															=
																															CAR
																															(BgL_actionsz00_1661);
																														{	/* Rgc/rgcexpand.scm 298 */
																															obj_t
																																BgL_list2775z00_1674;
																															BgL_list2775z00_1674
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2771z00_1671
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2773z00_1672,
																																BgL_list2775z00_1674);
																													}}
																													BgL_arg2769z00_1669 =
																														MAKE_PAIR
																														(BgL_arg2770z00_1670,
																														BgL_arg2771z00_1671);
																												}
																												BgL_arg2768z00_1668 =
																													MAKE_PAIR
																													(BgL_arg2769z00_1669,
																													BgL_resz00_1663);
																											}
																											{
																												obj_t BgL_resz00_3194;

																												long BgL_numz00_3193;

																												obj_t
																													BgL_actionsz00_3192;
																												BgL_actionsz00_3192 =
																													BgL_arg2766z00_1666;
																												BgL_numz00_3193 =
																													BgL_arg2767z00_1667;
																												BgL_resz00_3194 =
																													BgL_arg2768z00_1668;
																												BgL_resz00_1663 =
																													BgL_resz00_3194;
																												BgL_numz00_1662 =
																													BgL_numz00_3193;
																												BgL_actionsz00_1661 =
																													BgL_actionsz00_3192;
																												goto
																													BgL_zc3anonymousza32764ze3z83_1664;
																											}
																										}
																								}
																								{	/* Rgc/rgcexpand.scm 299 */
																									obj_t BgL_arg2776z00_1676;

																									{	/* Rgc/rgcexpand.scm 299 */
																										obj_t BgL_arg2778z00_1678;

																										obj_t BgL_arg2779z00_1679;

																										BgL_arg2778z00_1678 =
																											BGl_symbol3285z00zz__rgc_expandz00;
																										{	/* Rgc/rgcexpand.scm 300 */
																											obj_t BgL_arg2780z00_1680;

																											{	/* Rgc/rgcexpand.scm 300 */
																												obj_t
																													BgL_arg2784z00_1683;
																												obj_t
																													BgL_arg2785z00_1684;
																												BgL_arg2784z00_1683 =
																													BGl_symbol3112z00zz__rgc_expandz00;
																												{	/* Rgc/rgcexpand.scm 300 */
																													obj_t
																														BgL_list2786z00_1685;
																													{	/* Rgc/rgcexpand.scm 300 */
																														obj_t
																															BgL_arg2789z00_1687;
																														{	/* Rgc/rgcexpand.scm 300 */
																															obj_t
																																BgL_arg2790z00_1688;
																															obj_t
																																BgL_arg2791z00_1689;
																															BgL_arg2790z00_1688
																																=
																																BGl_symbol3222z00zz__rgc_expandz00;
																															BgL_arg2791z00_1689
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2789z00_1687
																																=
																																MAKE_PAIR
																																(BgL_arg2790z00_1688,
																																BgL_arg2791z00_1689);
																														}
																														BgL_list2786z00_1685
																															=
																															MAKE_PAIR
																															(BGl_string3287z00zz__rgc_expandz00,
																															BgL_arg2789z00_1687);
																													}
																													BgL_arg2785z00_1684 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BGl_string3049z00zz__rgc_expandz00,
																														BgL_list2786z00_1685);
																												}
																												BgL_arg2780z00_1680 =
																													MAKE_PAIR
																													(BgL_arg2784z00_1683,
																													BgL_arg2785z00_1684);
																											}
																											{	/* Rgc/rgcexpand.scm 299 */
																												obj_t
																													BgL_list2783z00_1682;
																												BgL_list2783z00_1682 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2779z00_1679 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2780z00_1680,
																													BgL_list2783z00_1682);
																											}
																										}
																										BgL_arg2776z00_1676 =
																											MAKE_PAIR
																											(BgL_arg2778z00_1678,
																											BgL_arg2779z00_1679);
																									}
																									BgL_arg2763z00_1658 =
																										MAKE_PAIR
																										(BgL_arg2776z00_1676, BNIL);
																								}
																								BgL_arg2760z00_1655 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2762z00_1657,
																									BgL_arg2763z00_1658);
																							}
																							{	/* Rgc/rgcexpand.scm 290 */
																								obj_t BgL_list2761z00_1656;

																								BgL_list2761z00_1656 =
																									MAKE_PAIR(BgL_arg2760z00_1655,
																									BNIL);
																								BgL_arg2758z00_1653 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2759z00_1654,
																									BgL_list2761z00_1656);
																							}
																						}
																						BgL_arg2754z00_1650 =
																							MAKE_PAIR(BgL_arg2756z00_1652,
																							BgL_arg2758z00_1653);
																					}
																					BgL_arg2753z00_1649 =
																						MAKE_PAIR(BgL_arg2754z00_1650,
																						BNIL);
																				}
																				BgL_arg2733z00_1630 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2752z00_1648,
																					BgL_arg2753z00_1649);
																			}
																			{	/* Rgc/rgcexpand.scm 271 */
																				obj_t BgL_list2734z00_1631;

																				{	/* Rgc/rgcexpand.scm 271 */
																					obj_t BgL_arg2735z00_1632;

																					BgL_arg2735z00_1632 =
																						MAKE_PAIR(BgL_arg2733z00_1630,
																						BNIL);
																					BgL_list2734z00_1631 =
																						MAKE_PAIR(BgL_arg2732z00_1629,
																						BgL_arg2735z00_1632);
																				}
																				BgL_arg2730z00_1627 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2731z00_1628,
																					BgL_list2734z00_1631);
																			}
																		}
																		BgL_arg2727z00_1624 =
																			MAKE_PAIR(BgL_arg2729z00_1626,
																			BgL_arg2730z00_1627);
																	}
																	BgL_arg2725z00_1622 =
																		MAKE_PAIR(BgL_arg2727z00_1624, BNIL);
																}
																BgL_arg2717z00_1615 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2724z00_1621, BgL_arg2725z00_1622);
															}
															{	/* Rgc/rgcexpand.scm 266 */
																obj_t BgL_list2718z00_1616;

																{	/* Rgc/rgcexpand.scm 266 */
																	obj_t BgL_arg2719z00_1617;

																	BgL_arg2719z00_1617 =
																		MAKE_PAIR(BgL_arg2717z00_1615, BNIL);
																	BgL_list2718z00_1616 =
																		MAKE_PAIR(BgL_arg2716z00_1614,
																		BgL_arg2719z00_1617);
																}
																BgL_arg2713z00_1612 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2714z00_1613, BgL_list2718z00_1616);
															}
														}
														BgL_arg2710z00_1609 =
															MAKE_PAIR(BgL_arg2712z00_1611,
															BgL_arg2713z00_1612);
													}
													{	/* Rgc/rgcexpand.scm 304 */
														obj_t BgL_arg2792z00_1690;

														if (CBOOL(BGl_za2unsafezd2rgcza2zd2zz__rgcz00))
															{	/* Rgc/rgcexpand.scm 304 */
																BgL_arg2792z00_1690 =
																	BGl_list3288z00zz__rgc_expandz00;
															}
														else
															{	/* Rgc/rgcexpand.scm 304 */
																BgL_arg2792z00_1690 =
																	BGl_list3289z00zz__rgc_expandz00;
															}
														{	/* Rgc/rgcexpand.scm 142 */
															obj_t BgL_list2794z00_1692;

															BgL_list2794z00_1692 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2711z00_1610 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2792z00_1690, BgL_list2794z00_1692);
														}
													}
													BgL_arg2709z00_1608 =
														MAKE_PAIR(BgL_arg2710z00_1609, BgL_arg2711z00_1610);
												}
												BgL_arg2701z00_1600 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_defsz00_10, BgL_arg2709z00_1608);
											}
											BgL_arg2017z00_969 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2700z00_1599, BgL_arg2701z00_1600);
										}
										{	/* Rgc/rgcexpand.scm 142 */
											obj_t BgL_list2018z00_970;

											{	/* Rgc/rgcexpand.scm 142 */
												obj_t BgL_arg2019z00_971;

												{	/* Rgc/rgcexpand.scm 142 */
													obj_t BgL_arg2021z00_972;

													{	/* Rgc/rgcexpand.scm 142 */
														obj_t BgL_arg2022z00_973;

														{	/* Rgc/rgcexpand.scm 142 */
															obj_t BgL_arg2023z00_974;

															{	/* Rgc/rgcexpand.scm 142 */
																obj_t BgL_arg2024z00_975;

																{	/* Rgc/rgcexpand.scm 142 */
																	obj_t BgL_arg2025z00_976;

																	{	/* Rgc/rgcexpand.scm 142 */
																		obj_t BgL_arg2027z00_977;

																		{	/* Rgc/rgcexpand.scm 142 */
																			obj_t BgL_arg2028z00_978;

																			{	/* Rgc/rgcexpand.scm 142 */
																				obj_t BgL_arg2029z00_979;

																				{	/* Rgc/rgcexpand.scm 142 */
																					obj_t BgL_arg2030z00_980;

																					{	/* Rgc/rgcexpand.scm 142 */
																						obj_t BgL_arg2031z00_981;

																						{	/* Rgc/rgcexpand.scm 142 */
																							obj_t BgL_arg2033z00_982;

																							{	/* Rgc/rgcexpand.scm 142 */
																								obj_t BgL_arg2034z00_983;

																								{	/* Rgc/rgcexpand.scm 142 */
																									obj_t BgL_arg2036z00_984;

																									{	/* Rgc/rgcexpand.scm 142 */
																										obj_t BgL_arg2037z00_985;

																										{	/* Rgc/rgcexpand.scm 142 */
																											obj_t BgL_arg2038z00_986;

																											{	/* Rgc/rgcexpand.scm 142 */
																												obj_t
																													BgL_arg2039z00_987;
																												{	/* Rgc/rgcexpand.scm 142 */
																													obj_t
																														BgL_arg2040z00_988;
																													{	/* Rgc/rgcexpand.scm 142 */
																														obj_t
																															BgL_arg2041z00_989;
																														{	/* Rgc/rgcexpand.scm 142 */
																															obj_t
																																BgL_arg2042z00_990;
																															{	/* Rgc/rgcexpand.scm 142 */
																																obj_t
																																	BgL_arg2043z00_991;
																																BgL_arg2043z00_991
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2017z00_969,
																																	BNIL);
																																BgL_arg2042z00_990
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2016z00_968,
																																	BgL_arg2043z00_991);
																															}
																															BgL_arg2041z00_989
																																=
																																MAKE_PAIR
																																(BgL_arg2015z00_967,
																																BgL_arg2042z00_990);
																														}
																														BgL_arg2040z00_988 =
																															MAKE_PAIR
																															(BgL_arg2013z00_966,
																															BgL_arg2041z00_989);
																													}
																													BgL_arg2039z00_987 =
																														MAKE_PAIR
																														(BgL_arg2012z00_965,
																														BgL_arg2040z00_988);
																												}
																												BgL_arg2038z00_986 =
																													MAKE_PAIR
																													(BgL_arg2011z00_964,
																													BgL_arg2039z00_987);
																											}
																											BgL_arg2037z00_985 =
																												MAKE_PAIR
																												(BgL_arg2010z00_963,
																												BgL_arg2038z00_986);
																										}
																										BgL_arg2036z00_984 =
																											MAKE_PAIR
																											(BgL_arg2009z00_962,
																											BgL_arg2037z00_985);
																									}
																									BgL_arg2034z00_983 =
																										MAKE_PAIR
																										(BgL_arg2008z00_961,
																										BgL_arg2036z00_984);
																								}
																								BgL_arg2033z00_982 =
																									MAKE_PAIR(BgL_arg2007z00_960,
																									BgL_arg2034z00_983);
																							}
																							BgL_arg2031z00_981 =
																								MAKE_PAIR(BgL_arg2006z00_959,
																								BgL_arg2033z00_982);
																						}
																						BgL_arg2030z00_980 =
																							MAKE_PAIR(BgL_arg2005z00_958,
																							BgL_arg2031z00_981);
																					}
																					BgL_arg2029z00_979 =
																						MAKE_PAIR(BgL_arg2004z00_957,
																						BgL_arg2030z00_980);
																				}
																				BgL_arg2028z00_978 =
																					MAKE_PAIR(BgL_arg2003z00_956,
																					BgL_arg2029z00_979);
																			}
																			BgL_arg2027z00_977 =
																				MAKE_PAIR(BgL_arg2002z00_955,
																				BgL_arg2028z00_978);
																		}
																		BgL_arg2025z00_976 =
																			MAKE_PAIR(BgL_arg2001z00_954,
																			BgL_arg2027z00_977);
																	}
																	BgL_arg2024z00_975 =
																		MAKE_PAIR(BgL_arg2000z00_953,
																		BgL_arg2025z00_976);
																}
																BgL_arg2023z00_974 =
																	MAKE_PAIR(BgL_arg1999z00_952,
																	BgL_arg2024z00_975);
															}
															BgL_arg2022z00_973 =
																MAKE_PAIR(BgL_arg1998z00_951,
																BgL_arg2023z00_974);
														}
														BgL_arg2021z00_972 =
															MAKE_PAIR(BgL_arg1996z00_950, BgL_arg2022z00_973);
													}
													BgL_arg2019z00_971 =
														MAKE_PAIR(BgL_arg1995z00_949, BgL_arg2021z00_972);
												}
												BgL_list2018z00_970 =
													MAKE_PAIR(BgL_arg1994z00_948, BgL_arg2019z00_971);
											}
											BgL_arg1985z00_939 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1993z00_947, BgL_list2018z00_970);
										}
									}
									BgL_arg1983z00_937 =
										MAKE_PAIR(BgL_arg1984z00_938, BgL_arg1985z00_939);
								}
								BgL_arg1979z00_933 =
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_statesz00_6, BgL_arg1983z00_937);
							}
							{	/* Rgc/rgcexpand.scm 142 */
								obj_t BgL_list1980z00_934;

								BgL_list1980z00_934 = MAKE_PAIR(BgL_arg1979z00_933, BNIL);
								BgL_arg1976z00_931 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1977z00_932, BgL_list1980z00_934);
							}
						}
						BgL_arg1966z00_921 =
							MAKE_PAIR(BgL_arg1975z00_930, BgL_arg1976z00_931);
					}
					{	/* Rgc/rgcexpand.scm 141 */
						obj_t BgL_list1968z00_923;

						{	/* Rgc/rgcexpand.scm 141 */
							obj_t BgL_arg1969z00_924;

							BgL_arg1969z00_924 = MAKE_PAIR(BNIL, BNIL);
							BgL_list1968z00_923 =
								MAKE_PAIR(BgL_arg1966z00_921, BgL_arg1969z00_924);
						}
						BgL_arg1963z00_919 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1965z00_920,
							BgL_list1968z00_923);
					}
				}
				return MAKE_PAIR(BgL_arg1962z00_918, BgL_arg1963z00_919);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_expandz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 22 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_expandz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 22 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_expandz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcexpand.scm 22 */
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 23441563),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_treez00(((long) 163567986),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(((long) 359983032),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_compilez00(((long) 213497063),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 36213488),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 284603935),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 492883814),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3298z00zz__rgc_expandz00));
		}
	}

#ifdef __cplusplus
}
#endif
