/*===========================================================================*/
/*   (Eval/evmodule.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/evmodule.scm -indent -o objs/obj_u/Eval/evmodule.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol3064z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_symbol3066z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3068z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol3075z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3076z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl__evalzd2findzd2modulez00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_symbol3079z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3081z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl__makezd2z52evmodulez80zz__evmodulez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t);
	static obj_t BGl_symbol3090z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3104z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3106z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3109z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_zc3exitza32362ze3z83zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3112z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3114z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_evmodulezd2condzd2expandz00zz__evmodulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3119z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_portzd2ze3listz31zz__readerz00(obj_t, obj_t);
	static obj_t BGl_symbol3121z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3123z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3126z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3128z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_za2moduleszd2mutexza2zd2zz__evmodulez00 = BUNSPEC;
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_symbol3140z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2importzd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2includezd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_symbol3172z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol3177z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3180z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3182z00zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_symbol3184z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3186z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3200z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3189z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3191z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl__evalzd2modulezd2setz12z12zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_symbol3193z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3195z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3198z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3209z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3211z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_symbol3213z00zz__evmodulez00 = BUNSPEC;
	static obj_t BGl_evmodulezd2libraryzd2zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_za2moduleszd2tableza2zd2zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	extern obj_t BGl_warningzf2loczf2zz__errorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulez00zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__evmodulez00();
	BGL_EXPORTED_DECL obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	static obj_t BGl_evmodulezd2staticzd2zz__evmodulez00(obj_t, obj_t, obj_t,
		bool_t);
	extern obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t);
	static obj_t BGl_importzd2modulezd2zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_evmodulezd2step1zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32410ze3z83zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2step2zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	static obj_t BGl_evmodulezd2step3zd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl__evmodulezd2loadqzd2zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2fromz12zc0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evmodulez00();
	static obj_t BGl_zc3exitza32263ze3z83zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_za2loadingzd2listza2zd2zz__evmodulez00 = BUNSPEC;
	extern obj_t BGl_untypezd2identzd2zz__evcompilez00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evmodulez00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32272ze3z83zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__evmodulez00zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2condzd2expandzd2clausezd2zz__evmodulez00(obj_t,
		obj_t);
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32291ze3z83zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_zc3anonymousza32292ze3z83zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_evmodulezd2loadqzd2zz__evmodulez00(obj_t);
	static obj_t BGl_evmodulezd2fromzd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl__evalzd2modulezd2zz__evmodulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2uninitializa7edz75zz__evmodulez00 =
		BUNSPEC;
	static obj_t BGl__evmodulezd2extensionzd2zz__evmodulez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evmodulez00();
	extern obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t BGl_hashtablezf3zf3zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t);
	static obj_t BGl__evmodulezd2findzd2globalz00zz__evmodulez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl__evmodulezd2staticzd2classz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_evcompilezd2errorzd2zz__evcompilez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_evcompilezd2loczd2filenamez00zz__evcompilez00(obj_t);
	static obj_t BGl_za2loadqzd2mutexza2zd2zz__evmodulez00 = BUNSPEC;
	extern int BGl_bigloozd2debugzd2modulez00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2extensionzd2zz__evmodulez00(obj_t);
	static obj_t BGl_zc3exitza32309ze3z83zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2modulezd2setz12z12zz__evmodulez00(obj_t);
	extern obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__evmodulezd2namezd2zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2importz12zc0zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00(obj_t);
	extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_loopz00zz__evmodulez00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl_loopz72z72zz__evmodulez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
	extern obj_t BGl_dirnamez00zz__osz00(obj_t);
	extern obj_t BGl_hashtablezd2updatez12zc0zz__hashz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl__evmodulezf3zf3zz__evmodulez00(obj_t, obj_t);
	static obj_t BGl_evmodulezd2exportzd2zz__evmodulez00(obj_t, obj_t, obj_t,
		bool_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl_zc3exitza32483ze3z83zz__evmodulez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_makezd2evmodulezd2zz__evmodulez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evmeaningzd2warningzd2zz__everrorz00(obj_t, obj_t);
	extern bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31980ze3z83zz__evmodulez00(obj_t, obj_t);
	extern obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evmodulez00();
	extern obj_t BGl_evalzd2classzd2zz__evobjectz00(obj_t, bool_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2bindzd2globalz12zd2envzc0zz__evmodulez00,
		BgL_bgl__evmoduleza7d2bind3235za7,
		BGl__evmodulezd2bindzd2globalz12z12zz__evmodulez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2modulezd2setz12zd2envzc0zz__evmodulez00,
		BgL_bgl__evalza7d2moduleza7d3236z00,
		BGl__evalzd2modulezd2setz12z12zz__evmodulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2findzd2globalzd2envzd2zz__evmodulez00,
		BgL_bgl__evmoduleza7d2find3237za7,
		BGl__evmodulezd2findzd2globalz00zz__evmodulez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2envzd2zz__evmodulez00,
		BgL_bgl__evmoduleza700za7za7__3238za7, BGl__evmodulez00zz__evmodulez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evmodulezd2loadqzd2envz00zz__evmodulez00,
		BgL_bgl__evmoduleza7d2load3239za7, BGl__evmodulezd2loadqzd2zz__evmodulez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2extensionzd2envz00zz__evmodulez00,
		BgL_bgl__evmoduleza7d2exte3240za7,
		BGl__evmodulezd2extensionzd2zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezf3zd2envz21zz__evmodulez00,
		BgL_bgl__evmoduleza7f3za7f3za73241za7, BGl__evmodulezf3zf3zz__evmodulez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2staticzd2classzd2envzd2zz__evmodulez00,
		BgL_bgl__evmoduleza7d2stat3242za7,
		BGl__evmodulezd2staticzd2classz00zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3168z00zz__evmodulez00,
		BgL_bgl_za7c3anonymousza7a323243z00,
		BGl_zc3anonymousza32410ze3z83zz__evmodulez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_STRING(BGl_string3062z00zz__evmodulez00,
		BgL_bgl_string3062za700za7za7_3244za7, "modules", 7);
	      DEFINE_STRING(BGl_string3063z00zz__evmodulez00,
		BgL_bgl_string3063za700za7za7_3245za7, "loadq", 5);
	      DEFINE_STRING(BGl_string3065z00zz__evmodulez00,
		BgL_bgl_string3065za700za7za7_3246za7, "#uninitialized", 14);
	      DEFINE_STRING(BGl_string3067z00zz__evmodulez00,
		BgL_bgl_string3067za700za7za7_3247za7, "%evmodule", 9);
	      DEFINE_STRING(BGl_string3070z00zz__evmodulez00,
		BgL_bgl_string3070za700za7za7_3248za7, "Too many argument provided", 26);
	      DEFINE_STRING(BGl_string3069z00zz__evmodulez00,
		BgL_bgl_string3069za700za7za7_3249za7, "make-%evmodule", 14);
	      DEFINE_STRING(BGl_string3071z00zz__evmodulez00,
		BgL_bgl_string3071za700za7za7_3250za7,
		"/tmp/bigloo/runtime/Eval/evmodule.scm", 37);
	      DEFINE_STRING(BGl_string3072z00zz__evmodulez00,
		BgL_bgl_string3072za700za7za7_3251za7, "evmodule?", 9);
	      DEFINE_STRING(BGl_string3073z00zz__evmodulez00,
		BgL_bgl_string3073za700za7za7_3252za7, "symbol", 6);
	      DEFINE_STRING(BGl_string3074z00zz__evmodulez00,
		BgL_bgl_string3074za700za7za7_3253za7, "evmodule-name", 13);
	      DEFINE_STRING(BGl_string3077z00zz__evmodulez00,
		BgL_bgl_string3077za700za7za7_3254za7, "module", 6);
	      DEFINE_STRING(BGl_string3078z00zz__evmodulez00,
		BgL_bgl_string3078za700za7za7_3255za7, "evmodule-macro-table", 20);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2modulezd2envz00zz__evmodulez00,
		BgL_bgl__evalza7d2moduleza7d3256z00, BGl__evalzd2modulezd2zz__evmodulez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string3080z00zz__evmodulez00,
		BgL_bgl_string3080za700za7za7_3257za7, "evmodule-extension", 18);
	      DEFINE_STRING(BGl_string3082z00zz__evmodulez00,
		BgL_bgl_string3082za700za7za7_3258za7, "make-evmodule", 13);
	      DEFINE_STRING(BGl_string3083z00zz__evmodulez00,
		BgL_bgl_string3083za700za7za7_3259za7, "struct", 6);
	      DEFINE_STRING(BGl_string3084z00zz__evmodulez00,
		BgL_bgl_string3084za700za7za7_3260za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3085z00zz__evmodulez00,
		BgL_bgl_string3085za700za7za7_3261za7, "\"", 1);
	      DEFINE_STRING(BGl_string3086z00zz__evmodulez00,
		BgL_bgl_string3086za700za7za7_3262za7, "\", new (ignored) \"", 18);
	      DEFINE_STRING(BGl_string3087z00zz__evmodulez00,
		BgL_bgl_string3087za700za7za7_3263za7, "'. Previous \"", 13);
	      DEFINE_STRING(BGl_string3088z00zz__evmodulez00,
		BgL_bgl_string3088za700za7za7_3264za7, "Module redefinition `", 21);
	      DEFINE_STRING(BGl_string3100z00zz__evmodulez00,
		BgL_bgl_string3100za700za7za7_3265za7, "every?", 6);
	      DEFINE_STRING(BGl_string3089z00zz__evmodulez00,
		BgL_bgl_string3089za700za7za7_3266za7, "eval-module-set!", 16);
	      DEFINE_STRING(BGl_string3101z00zz__evmodulez00,
		BgL_bgl_string3101za700za7za7_3267za7, "argument not a list", 19);
	      DEFINE_STRING(BGl_string3091z00zz__evmodulez00,
		BgL_bgl_string3091za700za7za7_3268za7, "Illegal module", 14);
	      DEFINE_STRING(BGl_string3102z00zz__evmodulez00,
		BgL_bgl_string3102za700za7za7_3269za7, "evmodule-library", 16);
	      DEFINE_STRING(BGl_string3092z00zz__evmodulez00,
		BgL_bgl_string3092za700za7za7_3270za7, "eval-find-module", 16);
	      DEFINE_STRING(BGl_string3103z00zz__evmodulez00,
		BgL_bgl_string3103za700za7za7_3271za7, "pair", 4);
	      DEFINE_STRING(BGl_string3093z00zz__evmodulez00,
		BgL_bgl_string3093za700za7za7_3272za7, "_eval-find-module", 17);
	      DEFINE_STRING(BGl_string3094z00zz__evmodulez00,
		BgL_bgl_string3094za700za7za7_3273za7, "evmodule-find-global", 20);
	      DEFINE_STRING(BGl_string3105z00zz__evmodulez00,
		BgL_bgl_string3105za700za7za7_3274za7, "library-load", 12);
	      DEFINE_STRING(BGl_string3095z00zz__evmodulez00,
		BgL_bgl_string3095za700za7za7_3275za7, "_evmodule-find-global", 21);
	      DEFINE_STRING(BGl_string3096z00zz__evmodulez00,
		BgL_bgl_string3096za700za7za7_3276za7, "Variable `", 10);
	      DEFINE_STRING(BGl_string3107z00zz__evmodulez00,
		BgL_bgl_string3107za700za7za7_3277za7, "quote", 5);
	      DEFINE_STRING(BGl_string3097z00zz__evmodulez00,
		BgL_bgl_string3097za700za7za7_3278za7, "' hidden by an expander.", 24);
	      DEFINE_STRING(BGl_string3108z00zz__evmodulez00,
		BgL_bgl_string3108za700za7za7_3279za7, "for-each", 8);
	      DEFINE_STRING(BGl_string3098z00zz__evmodulez00,
		BgL_bgl_string3098za700za7za7_3280za7, "evmodule-bind-global!", 21);
	      DEFINE_STRING(BGl_string3110z00zz__evmodulez00,
		BgL_bgl_string3110za700za7za7_3281za7, "eval", 4);
	      DEFINE_STRING(BGl_string3099z00zz__evmodulez00,
		BgL_bgl_string3099za700za7za7_3282za7, "_evmodule-bind-global!", 22);
	      DEFINE_STRING(BGl_string3111z00zz__evmodulez00,
		BgL_bgl_string3111za700za7za7_3283za7, "Illegal `library' clause", 24);
	      DEFINE_STRING(BGl_string3113z00zz__evmodulez00,
		BgL_bgl_string3113za700za7za7_3284za7, "define", 6);
	      DEFINE_STRING(BGl_string3115z00zz__evmodulez00,
		BgL_bgl_string3115za700za7za7_3285za7, "class", 5);
	      DEFINE_STRING(BGl_string3116z00zz__evmodulez00,
		BgL_bgl_string3116za700za7za7_3286za7, "evmodule-static-clause", 22);
	      DEFINE_STRING(BGl_string3117z00zz__evmodulez00,
		BgL_bgl_string3117za700za7za7_3287za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string3118z00zz__evmodulez00,
		BgL_bgl_string3118za700za7za7_3288za7, "Illegal `static' clause", 23);
	      DEFINE_STRING(BGl_string3120z00zz__evmodulez00,
		BgL_bgl_string3120za700za7za7_3289za7, "final-class", 11);
	      DEFINE_STRING(BGl_string3122z00zz__evmodulez00,
		BgL_bgl_string3122za700za7za7_3290za7, "abstract-class", 14);
	      DEFINE_STRING(BGl_string3124z00zz__evmodulez00,
		BgL_bgl_string3124za700za7za7_3291za7, "wide-class", 10);
	      DEFINE_STRING(BGl_string3125z00zz__evmodulez00,
		BgL_bgl_string3125za700za7za7_3292za7,
		"Wide classes are not supported within eval", 42);
	      DEFINE_STRING(BGl_string3127z00zz__evmodulez00,
		BgL_bgl_string3127za700za7za7_3293za7, "inline", 6);
	      DEFINE_STRING(BGl_string3130z00zz__evmodulez00,
		BgL_bgl_string3130za700za7za7_3294za7, "evmodule-static", 15);
	      DEFINE_STRING(BGl_string3129z00zz__evmodulez00,
		BgL_bgl_string3129za700za7za7_3295za7, "generic", 7);
	      DEFINE_STRING(BGl_string3131z00zz__evmodulez00,
		BgL_bgl_string3131za700za7za7_3296za7, "TAG-1721", 8);
	      DEFINE_STRING(BGl_string3132z00zz__evmodulez00,
		BgL_bgl_string3132za700za7za7_3297za7, "TAG-1722", 8);
	      DEFINE_STRING(BGl_string3133z00zz__evmodulez00,
		BgL_bgl_string3133za700za7za7_3298za7, "TAG-1723", 8);
	      DEFINE_STRING(BGl_string3134z00zz__evmodulez00,
		BgL_bgl_string3134za700za7za7_3299za7, "Illegal `export' clause", 23);
	      DEFINE_STRING(BGl_string3135z00zz__evmodulez00,
		BgL_bgl_string3135za700za7za7_3300za7, "evmodule-export", 15);
	      DEFINE_STRING(BGl_string3136z00zz__evmodulez00,
		BgL_bgl_string3136za700za7za7_3301za7, "loadq-with-cv", 13);
	      DEFINE_STRING(BGl_string3137z00zz__evmodulez00,
		BgL_bgl_string3137za700za7za7_3302za7, "condvar", 7);
	      DEFINE_STRING(BGl_string3138z00zz__evmodulez00,
		BgL_bgl_string3138za700za7za7_3303za7, "evmodule-loadq", 14);
	      DEFINE_STRING(BGl_string3139z00zz__evmodulez00,
		BgL_bgl_string3139za700za7za7_3304za7,
		"/tmp/bigloo/runtime/Llib/thread.scm", 35);
	      DEFINE_STRING(BGl_string3141z00zz__evmodulez00,
		BgL_bgl_string3141za700za7za7_3305za7, "evmodule-import!", 16);
	      DEFINE_STRING(BGl_string3142z00zz__evmodulez00,
		BgL_bgl_string3142za700za7za7_3306za7, "*** loading module `", 20);
	      DEFINE_STRING(BGl_string3143z00zz__evmodulez00,
		BgL_bgl_string3143za700za7za7_3307za7, "' [", 3);
	      DEFINE_STRING(BGl_string3144z00zz__evmodulez00,
		BgL_bgl_string3144za700za7za7_3308za7, "]...", 4);
	      DEFINE_STRING(BGl_string3145z00zz__evmodulez00,
		BgL_bgl_string3145za700za7za7_3309za7,
		"Cannot find imported module in base \"~a\"", 40);
	      DEFINE_STRING(BGl_string3146z00zz__evmodulez00,
		BgL_bgl_string3146za700za7za7_3310za7, "<anonymous:2292>", 16);
	      DEFINE_STRING(BGl_string3147z00zz__evmodulez00,
		BgL_bgl_string3147za700za7za7_3311za7, "Cannot find binding from module `",
		33);
	      DEFINE_STRING(BGl_string3148z00zz__evmodulez00,
		BgL_bgl_string3148za700za7za7_3312za7, "'", 1);
	      DEFINE_STRING(BGl_string3150z00zz__evmodulez00,
		BgL_bgl_string3150za700za7za7_3313za7, "loop'", 5);
	      DEFINE_STRING(BGl_string3149z00zz__evmodulez00,
		BgL_bgl_string3149za700za7za7_3314za7, "import-module", 13);
	      DEFINE_STRING(BGl_string3151z00zz__evmodulez00,
		BgL_bgl_string3151za700za7za7_3315za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3152z00zz__evmodulez00,
		BgL_bgl_string3152za700za7za7_3316za7, "Cannot find module `", 20);
	      DEFINE_STRING(BGl_string3153z00zz__evmodulez00,
		BgL_bgl_string3153za700za7za7_3317za7, "' in source", 11);
	      DEFINE_STRING(BGl_string3154z00zz__evmodulez00,
		BgL_bgl_string3154za700za7za7_3318za7, "<anonymous:2291>", 16);
	      DEFINE_STRING(BGl_string3155z00zz__evmodulez00,
		BgL_bgl_string3155za700za7za7_3319za7, "import-clause", 13);
	      DEFINE_STRING(BGl_string3156z00zz__evmodulez00,
		BgL_bgl_string3156za700za7za7_3320za7, "evmodule-import", 15);
	      DEFINE_STRING(BGl_string3157z00zz__evmodulez00,
		BgL_bgl_string3157za700za7za7_3321za7, "Illegal `import' clause", 23);
	      DEFINE_STRING(BGl_string3158z00zz__evmodulez00,
		BgL_bgl_string3158za700za7za7_3322za7, "<exit:2309>", 11);
	      DEFINE_STRING(BGl_string3160z00zz__evmodulez00,
		BgL_bgl_string3160za700za7za7_3323za7, "evmodule-from!", 14);
	      DEFINE_STRING(BGl_string3159z00zz__evmodulez00,
		BgL_bgl_string3159za700za7za7_3324za7, "from-module", 11);
	      DEFINE_STRING(BGl_string3161z00zz__evmodulez00,
		BgL_bgl_string3161za700za7za7_3325za7, "<anonymous:2333>", 16);
	      DEFINE_STRING(BGl_string3162z00zz__evmodulez00,
		BgL_bgl_string3162za700za7za7_3326za7, "Cannot find module", 18);
	      DEFINE_STRING(BGl_string3163z00zz__evmodulez00,
		BgL_bgl_string3163za700za7za7_3327za7, "from-clause", 11);
	      DEFINE_STRING(BGl_string3164z00zz__evmodulez00,
		BgL_bgl_string3164za700za7za7_3328za7, "evmodule-from", 13);
	      DEFINE_STRING(BGl_string3165z00zz__evmodulez00,
		BgL_bgl_string3165za700za7za7_3329za7, "Illegal `from' clause", 21);
	      DEFINE_STRING(BGl_string3166z00zz__evmodulez00,
		BgL_bgl_string3166za700za7za7_3330za7, "<exit:2362>", 11);
	      DEFINE_STRING(BGl_string3167z00zz__evmodulez00,
		BgL_bgl_string3167za700za7za7_3331za7, "evmodule-include-file!", 22);
	      DEFINE_STRING(BGl_string3170z00zz__evmodulez00,
		BgL_bgl_string3170za700za7za7_3332za7, "loop", 4);
	      DEFINE_STRING(BGl_string3169z00zz__evmodulez00,
		BgL_bgl_string3169za700za7za7_3333za7, "Cannot find include file ~s", 27);
	      DEFINE_STRING(BGl_string3171z00zz__evmodulez00,
		BgL_bgl_string3171za700za7za7_3334za7, "evmodule-include", 16);
	      DEFINE_STRING(BGl_string3173z00zz__evmodulez00,
		BgL_bgl_string3173za700za7za7_3335za7, "include", 7);
	      DEFINE_STRING(BGl_string3174z00zz__evmodulez00,
		BgL_bgl_string3174za700za7za7_3336za7, "Illegal module clause", 21);
	      DEFINE_STRING(BGl_string3175z00zz__evmodulez00,
		BgL_bgl_string3175za700za7za7_3337za7, "<anonymous:2410>", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2findzd2modulezd2envzd2zz__evmodulez00,
		BgL_bgl__evalza7d2findza7d2m3338z00,
		BGl__evalzd2findzd2modulez00zz__evmodulez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3176z00zz__evmodulez00,
		BgL_bgl_string3176za700za7za7_3339za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3178z00zz__evmodulez00,
		BgL_bgl_string3178za700za7za7_3340za7, "directives", 10);
	      DEFINE_STRING(BGl_string3179z00zz__evmodulez00,
		BgL_bgl_string3179za700za7za7_3341za7, "<anonymous:2426>", 16);
	      DEFINE_STRING(BGl_string3181z00zz__evmodulez00,
		BgL_bgl_string3181za700za7za7_3342za7, "library", 7);
	      DEFINE_STRING(BGl_string3183z00zz__evmodulez00,
		BgL_bgl_string3183za700za7za7_3343za7, "static", 6);
	      DEFINE_STRING(BGl_string3185z00zz__evmodulez00,
		BgL_bgl_string3185za700za7za7_3344za7, "export", 6);
	      DEFINE_STRING(BGl_string3187z00zz__evmodulez00,
		BgL_bgl_string3187za700za7za7_3345za7, "load", 4);
	      DEFINE_STRING(BGl_string3188z00zz__evmodulez00,
		BgL_bgl_string3188za700za7za7_3346za7, "<anonymous:2434>", 16);
	      DEFINE_STRING(BGl_string3190z00zz__evmodulez00,
		BgL_bgl_string3190za700za7za7_3347za7, "import", 6);
	      DEFINE_STRING(BGl_string3201z00zz__evmodulez00,
		BgL_bgl_string3201za700za7za7_3348za7, "begin", 5);
	      DEFINE_STRING(BGl_string3202z00zz__evmodulez00,
		BgL_bgl_string3202za700za7za7_3349za7, ".", 1);
	      DEFINE_STRING(BGl_string3192z00zz__evmodulez00,
		BgL_bgl_string3192za700za7za7_3350za7, "use", 3);
	      DEFINE_STRING(BGl_string3203z00zz__evmodulez00,
		BgL_bgl_string3203za700za7za7_3351za7, "TAG-2051", 8);
	      DEFINE_STRING(BGl_string3204z00zz__evmodulez00,
		BgL_bgl_string3204za700za7za7_3352za7, "Illegal module clauses", 22);
	      DEFINE_STRING(BGl_string3194z00zz__evmodulez00,
		BgL_bgl_string3194za700za7za7_3353za7, "with", 4);
	      DEFINE_STRING(BGl_string3205z00zz__evmodulez00,
		BgL_bgl_string3205za700za7za7_3354za7, "Illegal module expression", 25);
	      DEFINE_STRING(BGl_string3206z00zz__evmodulez00,
		BgL_bgl_string3206za700za7za7_3355za7, "<exit:2483>", 11);
	      DEFINE_STRING(BGl_string3196z00zz__evmodulez00,
		BgL_bgl_string3196za700za7za7_3356za7, "from", 4);
	      DEFINE_STRING(BGl_string3207z00zz__evmodulez00,
		BgL_bgl_string3207za700za7za7_3357za7, "_evmodule", 9);
	      DEFINE_STRING(BGl_string3197z00zz__evmodulez00,
		BgL_bgl_string3197za700za7za7_3358za7, "<anonymous:2440>", 16);
	      DEFINE_STRING(BGl_string3208z00zz__evmodulez00,
		BgL_bgl_string3208za700za7za7_3359za7, "evmodule-static-class", 21);
	      DEFINE_STRING(BGl_string3210z00zz__evmodulez00,
		BgL_bgl_string3210za700za7za7_3360za7, "define-class", 12);
	      DEFINE_STRING(BGl_string3199z00zz__evmodulez00,
		BgL_bgl_string3199za700za7za7_3361za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string3212z00zz__evmodulez00,
		BgL_bgl_string3212za700za7za7_3362za7, "define-final-class", 18);
	      DEFINE_STRING(BGl_string3214z00zz__evmodulez00,
		BgL_bgl_string3214za700za7za7_3363za7, "define-abstract-class", 21);
	      DEFINE_STRING(BGl_string3215z00zz__evmodulez00,
		BgL_bgl_string3215za700za7za7_3364za7, "_evmodule-static-class", 22);
	      DEFINE_STRING(BGl_string3216z00zz__evmodulez00,
		BgL_bgl_string3216za700za7za7_3365za7, "__evmodule", 10);
	extern obj_t BGl_readzd2envzd2zz__readerz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evmodulezd2macrozd2tablezd2envzd2zz__evmodulez00,
		BgL_bgl__evmoduleza7d2macr3366za7,
		BGl__evmodulezd2macrozd2tablez00zz__evmodulez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_makezd2z52evmodulezd2envz52zz__evmodulez00,
		BgL_bgl__makeza7d2za752evmod3367z00, va_generic_entry,
		BGl__makezd2z52evmodulez80zz__evmodulez00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evmodulezd2namezd2envz00zz__evmodulez00,
		BgL_bgl__evmoduleza7d2name3368za7, BGl__evmodulezd2namezd2zz__evmodulez00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long
		BgL_checksumz00_3820, char *BgL_fromz00_3821)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evmodulez00))
				{
					BGl_requirezd2initializa7ationz75zz__evmodulez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evmodulez00();
					BGl_importedzd2moduleszd2initz00zz__evmodulez00();
					BGl_toplevelzd2initzd2zz__evmodulez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 15 */
			BGl_symbol3064z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3065z00zz__evmodulez00);
			BGl_symbol3066z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3067z00zz__evmodulez00);
			BGl_symbol3068z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3069z00zz__evmodulez00);
			BGl_symbol3075z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3074z00zz__evmodulez00);
			BGl_symbol3076z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3077z00zz__evmodulez00);
			BGl_symbol3079z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3078z00zz__evmodulez00);
			BGl_symbol3081z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3080z00zz__evmodulez00);
			BGl_symbol3090z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3089z00zz__evmodulez00);
			BGl_symbol3104z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3105z00zz__evmodulez00);
			BGl_symbol3106z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3107z00zz__evmodulez00);
			BGl_symbol3109z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3110z00zz__evmodulez00);
			BGl_symbol3112z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3113z00zz__evmodulez00);
			BGl_symbol3114z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3115z00zz__evmodulez00);
			BGl_symbol3119z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3120z00zz__evmodulez00);
			BGl_symbol3121z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3122z00zz__evmodulez00);
			BGl_symbol3123z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3124z00zz__evmodulez00);
			BGl_symbol3126z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3127z00zz__evmodulez00);
			BGl_symbol3128z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3129z00zz__evmodulez00);
			BGl_symbol3140z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3063z00zz__evmodulez00);
			BGl_symbol3172z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3173z00zz__evmodulez00);
			BGl_symbol3177z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3178z00zz__evmodulez00);
			BGl_symbol3180z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3181z00zz__evmodulez00);
			BGl_symbol3182z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3183z00zz__evmodulez00);
			BGl_symbol3184z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3185z00zz__evmodulez00);
			BGl_symbol3186z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3187z00zz__evmodulez00);
			BGl_symbol3189z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3190z00zz__evmodulez00);
			BGl_symbol3191z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3192z00zz__evmodulez00);
			BGl_symbol3193z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3194z00zz__evmodulez00);
			BGl_symbol3195z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3196z00zz__evmodulez00);
			BGl_symbol3198z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3199z00zz__evmodulez00);
			BGl_symbol3200z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3201z00zz__evmodulez00);
			BGl_symbol3209z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3210z00zz__evmodulez00);
			BGl_symbol3211z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3212z00zz__evmodulez00);
			return (BGl_symbol3213z00zz__evmodulez00 =
				bstring_to_symbol(BGl_string3214z00zz__evmodulez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 15 */
			BGl_za2moduleszd2mutexza2zd2zz__evmodulez00 =
				bgl_make_mutex(BGl_string3062z00zz__evmodulez00);
			BGl_za2loadqzd2mutexza2zd2zz__evmodulez00 =
				bgl_make_mutex(BGl_string3063z00zz__evmodulez00);
			BGl_evmodulezd2uninitializa7edz75zz__evmodulez00 =
				BGl_symbol3064z00zz__evmodulez00;
			BGl_za2moduleszd2tableza2zd2zz__evmodulez00 = BNIL;
			return (BGl_za2loadingzd2listza2zd2zz__evmodulez00 = BNIL, BUNSPEC);
		}
	}



/* _make-%evmodule */
	obj_t BGl__makezd2z52evmodulez80zz__evmodulez00(obj_t BgL_envz00_3362,
		obj_t BgL_initz00_3363)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 103 */
			if (PAIRP(BgL_initz00_3363))
				{	/* Eval/evmodule.scm 103 */
					if (NULLP(CDR(BgL_initz00_3363)))
						{	/* Eval/evmodule.scm 103 */
							return
								make_struct(BGl_symbol3066z00zz__evmodulez00,
								(int) (((long) 7)), CAR(BgL_initz00_3363));
						}
					else
						{	/* Eval/evmodule.scm 103 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3068z00zz__evmodulez00,
								BGl_string3070z00zz__evmodulez00, BgL_initz00_3363);
						}
				}
			else
				{	/* Eval/evmodule.scm 103 */
					return
						make_struct(BGl_symbol3066z00zz__evmodulez00,
						(int) (((long) 7)), BNIL);
		}}
	}



/* evmodule? */
	BGL_EXPORTED_DEF bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t BgL_objz00_31)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 108 */
			{	/* Eval/evmodule.scm 109 */
				bool_t BgL_testz00_3875;

				if (STRUCTP(BgL_objz00_31))
					{	/* Eval/evmodule.scm 109 */
						obj_t BgL_auxz00_3878;

						{	/* Eval/evmodule.scm 109 */
							obj_t BgL_res2753z00_2355;

							{	/* Eval/evmodule.scm 109 */
								obj_t BgL_aux2798z00_3456;

								BgL_aux2798z00_3456 = STRUCT_KEY(BgL_objz00_31);
								if (SYMBOLP(BgL_aux2798z00_3456))
									{	/* Eval/evmodule.scm 109 */
										BgL_res2753z00_2355 = BgL_aux2798z00_3456;
									}
								else
									{
										obj_t BgL_auxz00_3882;

										BgL_auxz00_3882 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3071z00zz__evmodulez00, BINT(((long) 3847)),
											BGl_string3072z00zz__evmodulez00,
											BGl_string3073z00zz__evmodulez00, BgL_aux2798z00_3456);
										FAILURE(BgL_auxz00_3882, BFALSE, BFALSE);
							}}
							BgL_auxz00_3878 = BgL_res2753z00_2355;
						}
						BgL_testz00_3875 =
							(BgL_auxz00_3878 == BGl_symbol3066z00zz__evmodulez00);
					}
				else
					{	/* Eval/evmodule.scm 109 */
						BgL_testz00_3875 = ((bool_t) 0);
					}
				if (BgL_testz00_3875)
					{	/* Eval/evmodule.scm 109 */
						return
							(STRUCT_REF(BgL_objz00_31,
								(int) (((long) 0))) ==
							BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
					}
				else
					{	/* Eval/evmodule.scm 109 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _evmodule? */
	obj_t BGl__evmodulezf3zf3zz__evmodulez00(obj_t BgL_envz00_3364,
		obj_t BgL_objz00_3365)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 108 */
			return BBOOL(BGl_evmodulezf3zf3zz__evmodulez00(BgL_objz00_3365));
		}
	}



/* evmodule-name */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2namezd2zz__evmodulez00(obj_t
		BgL_modz00_32)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 114 */
			{	/* Eval/evmodule.scm 115 */
				bool_t BgL_testz00_3892;

				{	/* Eval/evmodule.scm 115 */
					bool_t BgL_testz00_3893;

					if (STRUCTP(BgL_modz00_32))
						{	/* Eval/evmodule.scm 115 */
							obj_t BgL_auxz00_3896;

							{	/* Eval/evmodule.scm 115 */
								obj_t BgL_res2754z00_2369;

								{	/* Eval/evmodule.scm 115 */
									obj_t BgL_aux2800z00_3458;

									BgL_aux2800z00_3458 = STRUCT_KEY(BgL_modz00_32);
									if (SYMBOLP(BgL_aux2800z00_3458))
										{	/* Eval/evmodule.scm 115 */
											BgL_res2754z00_2369 = BgL_aux2800z00_3458;
										}
									else
										{
											obj_t BgL_auxz00_3900;

											BgL_auxz00_3900 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 4165)),
												BGl_string3074z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_aux2800z00_3458);
											FAILURE(BgL_auxz00_3900, BFALSE, BFALSE);
								}}
								BgL_auxz00_3896 = BgL_res2754z00_2369;
							}
							BgL_testz00_3893 =
								(BgL_auxz00_3896 == BGl_symbol3066z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 115 */
							BgL_testz00_3893 = ((bool_t) 0);
						}
					if (BgL_testz00_3893)
						{	/* Eval/evmodule.scm 115 */
							BgL_testz00_3892 =
								(STRUCT_REF(BgL_modz00_32,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 115 */
							BgL_testz00_3892 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_3892)
					{	/* Eval/evmodule.scm 115 */
						obj_t BgL_sz00_2375;

						BgL_sz00_2375 = BgL_modz00_32;
						{	/* Eval/evmodule.scm 115 */
							obj_t BgL_aux2804z00_3462;

							BgL_aux2804z00_3462 =
								STRUCT_REF(BgL_sz00_2375, (int) (((long) 1)));
							if (SYMBOLP(BgL_aux2804z00_3462))
								{	/* Eval/evmodule.scm 115 */
									return BgL_aux2804z00_3462;
								}
							else
								{
									obj_t BgL_auxz00_3912;

									BgL_auxz00_3912 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 4161)),
										BGl_string3074z00zz__evmodulez00,
										BGl_string3073z00zz__evmodulez00, BgL_aux2804z00_3462);
									FAILURE(BgL_auxz00_3912, BFALSE, BFALSE);
					}}}
				else
					{	/* Eval/evmodule.scm 115 */
						obj_t BgL_aux2806z00_3464;

						BgL_aux2806z00_3464 =
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_symbol3075z00zz__evmodulez00,
							BGl_symbol3076z00zz__evmodulez00, BgL_modz00_32);
						if (SYMBOLP(BgL_aux2806z00_3464))
							{	/* Eval/evmodule.scm 115 */
								return BgL_aux2806z00_3464;
							}
						else
							{
								obj_t BgL_auxz00_3919;

								BgL_auxz00_3919 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 4161)),
									BGl_string3074z00zz__evmodulez00,
									BGl_string3073z00zz__evmodulez00, BgL_aux2806z00_3464);
								FAILURE(BgL_auxz00_3919, BFALSE, BFALSE);
		}}}}
	}



/* _evmodule-name */
	obj_t BGl__evmodulezd2namezd2zz__evmodulez00(obj_t BgL_envz00_3366,
		obj_t BgL_modz00_3367)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 114 */
			return BGl_evmodulezd2namezd2zz__evmodulez00(BgL_modz00_3367);
		}
	}



/* evmodule-macro-table */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t
		BgL_modz00_33)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 122 */
			{	/* Eval/evmodule.scm 123 */
				bool_t BgL_testz00_3924;

				{	/* Eval/evmodule.scm 123 */
					bool_t BgL_testz00_3925;

					if (STRUCTP(BgL_modz00_33))
						{	/* Eval/evmodule.scm 123 */
							obj_t BgL_auxz00_3928;

							{	/* Eval/evmodule.scm 123 */
								obj_t BgL_res2756z00_2387;

								{	/* Eval/evmodule.scm 123 */
									obj_t BgL_aux2808z00_3466;

									BgL_aux2808z00_3466 = STRUCT_KEY(BgL_modz00_33);
									if (SYMBOLP(BgL_aux2808z00_3466))
										{	/* Eval/evmodule.scm 123 */
											BgL_res2756z00_2387 = BgL_aux2808z00_3466;
										}
									else
										{
											obj_t BgL_auxz00_3932;

											BgL_auxz00_3932 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 4528)),
												BGl_string3078z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_aux2808z00_3466);
											FAILURE(BgL_auxz00_3932, BFALSE, BFALSE);
								}}
								BgL_auxz00_3928 = BgL_res2756z00_2387;
							}
							BgL_testz00_3925 =
								(BgL_auxz00_3928 == BGl_symbol3066z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 123 */
							BgL_testz00_3925 = ((bool_t) 0);
						}
					if (BgL_testz00_3925)
						{	/* Eval/evmodule.scm 123 */
							BgL_testz00_3924 =
								(STRUCT_REF(BgL_modz00_33,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 123 */
							BgL_testz00_3924 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_3924)
					{	/* Eval/evmodule.scm 123 */
						return STRUCT_REF(BgL_modz00_33, (int) (((long) 5)));
					}
				else
					{	/* Eval/evmodule.scm 123 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_symbol3079z00zz__evmodulez00,
							BGl_symbol3076z00zz__evmodulez00, BgL_modz00_33);
					}
			}
		}
	}



/* _evmodule-macro-table */
	obj_t BGl__evmodulezd2macrozd2tablez00zz__evmodulez00(obj_t BgL_envz00_3368,
		obj_t BgL_modz00_3369)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 122 */
			return BGl_evmodulezd2macrozd2tablez00zz__evmodulez00(BgL_modz00_3369);
		}
	}



/* evmodule-extension */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2extensionzd2zz__evmodulez00(obj_t
		BgL_modz00_34)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 130 */
			{	/* Eval/evmodule.scm 131 */
				bool_t BgL_testz00_3944;

				{	/* Eval/evmodule.scm 131 */
					bool_t BgL_testz00_3945;

					if (STRUCTP(BgL_modz00_34))
						{	/* Eval/evmodule.scm 131 */
							obj_t BgL_auxz00_3948;

							{	/* Eval/evmodule.scm 131 */
								obj_t BgL_res2758z00_2405;

								{	/* Eval/evmodule.scm 131 */
									obj_t BgL_aux2812z00_3470;

									BgL_aux2812z00_3470 = STRUCT_KEY(BgL_modz00_34);
									if (SYMBOLP(BgL_aux2812z00_3470))
										{	/* Eval/evmodule.scm 131 */
											BgL_res2758z00_2405 = BgL_aux2812z00_3470;
										}
									else
										{
											obj_t BgL_auxz00_3952;

											BgL_auxz00_3952 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 4900)),
												BGl_string3080z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_aux2812z00_3470);
											FAILURE(BgL_auxz00_3952, BFALSE, BFALSE);
								}}
								BgL_auxz00_3948 = BgL_res2758z00_2405;
							}
							BgL_testz00_3945 =
								(BgL_auxz00_3948 == BGl_symbol3066z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 131 */
							BgL_testz00_3945 = ((bool_t) 0);
						}
					if (BgL_testz00_3945)
						{	/* Eval/evmodule.scm 131 */
							BgL_testz00_3944 =
								(STRUCT_REF(BgL_modz00_34,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 131 */
							BgL_testz00_3944 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_3944)
					{	/* Eval/evmodule.scm 131 */
						return STRUCT_REF(BgL_modz00_34, (int) (((long) 6)));
					}
				else
					{	/* Eval/evmodule.scm 131 */
						return
							BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_symbol3081z00zz__evmodulez00,
							BGl_symbol3076z00zz__evmodulez00, BgL_modz00_34);
					}
			}
		}
	}



/* _evmodule-extension */
	obj_t BGl__evmodulezd2extensionzd2zz__evmodulez00(obj_t BgL_envz00_3370,
		obj_t BgL_modz00_3371)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 130 */
			return BGl_evmodulezd2extensionzd2zz__evmodulez00(BgL_modz00_3371);
		}
	}



/* make-evmodule */
	obj_t BGl_makezd2evmodulezd2zz__evmodulez00(obj_t BgL_idz00_35,
		obj_t BgL_pathz00_36, obj_t BgL_locz00_37)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 138 */
			{	/* Eval/evmodule.scm 139 */
				obj_t BgL_g1940z00_932;

				BgL_g1940z00_932 = BGl_za2moduleszd2mutexza2zd2zz__evmodulez00;
				{	/* Llib/thread.scm 201 */

					if ((((long) 0) == ((long) 0)))
						{	/* Llib/thread.scm 201 */
							bgl_mutex_lock(BgL_g1940z00_932);
						}
					else
						{	/* Llib/thread.scm 201 */
							bgl_mutex_timed_lock(BgL_g1940z00_932, ((long) 0));
			}}}
			{	/* Eval/evmodule.scm 140 */
				obj_t BgL_envz00_934;

				{	/* Eval/evmodule.scm 140 */
					obj_t BgL_list1999z00_962;

					{	/* Eval/evmodule.scm 140 */
						obj_t BgL_arg2001z00_964;

						{	/* Eval/evmodule.scm 140 */
							obj_t BgL_arg2002z00_965;

							BgL_arg2002z00_965 =
								MAKE_PAIR(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BNIL);
							BgL_arg2001z00_964 = MAKE_PAIR(BUNSPEC, BgL_arg2002z00_965);
						}
						BgL_list1999z00_962 =
							MAKE_PAIR(BINT(((long) 100)), BgL_arg2001z00_964);
					}
					BgL_envz00_934 =
						BGl_makezd2hashtablezd2zz__hashz00(BgL_list1999z00_962);
				}
				{	/* Eval/evmodule.scm 140 */
					obj_t BgL_mactablez00_935;

					{	/* Eval/evmodule.scm 141 */
						obj_t BgL_list1998z00_961;

						BgL_list1998z00_961 = MAKE_PAIR(BINT(((long) 64)), BNIL);
						BgL_mactablez00_935 =
							BGl_makezd2hashtablezd2zz__hashz00(BgL_list1998z00_961);
					}
					{	/* Eval/evmodule.scm 141 */
						obj_t BgL_modz00_936;

						{	/* Eval/evmodule.scm 142 */
							obj_t BgL_newz00_2424;

							BgL_newz00_2424 =
								create_struct(BGl_symbol3066z00zz__evmodulez00,
								(int) (((long) 7)));
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3978;

								BgL_auxz00_3978 = (int) (((long) 6));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3978, BNIL);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3981;

								BgL_auxz00_3981 = (int) (((long) 5));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3981,
									BgL_mactablez00_935);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3984;

								BgL_auxz00_3984 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3984, BNIL);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3987;

								BgL_auxz00_3987 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3987, BgL_envz00_934);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3990;

								BgL_auxz00_3990 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3990, BgL_pathz00_36);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3993;

								BgL_auxz00_3993 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3993, BgL_idz00_35);
							}
							{	/* Eval/evmodule.scm 142 */
								int BgL_auxz00_3996;

								BgL_auxz00_3996 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_2424, BgL_auxz00_3996,
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
							BgL_modz00_936 = BgL_newz00_2424;
						}
						{	/* Eval/evmodule.scm 142 */

							if (BGl_hashtablezf3zf3zz__hashz00
								(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
								{	/* Eval/evmodule.scm 147 */
									obj_t BgL_oldz00_938;

									{	/* Eval/evmodule.scm 147 */
										obj_t BgL_auxz00_4001;

										{	/* Eval/evmodule.scm 147 */
											obj_t BgL_aux2816z00_3474;

											BgL_aux2816z00_3474 =
												BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
											if (STRUCTP(BgL_aux2816z00_3474))
												{	/* Eval/evmodule.scm 147 */
													BgL_auxz00_4001 = BgL_aux2816z00_3474;
												}
											else
												{
													obj_t BgL_auxz00_4004;

													BgL_auxz00_4004 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 5637)),
														BGl_string3082z00zz__evmodulez00,
														BGl_string3083z00zz__evmodulez00,
														BgL_aux2816z00_3474);
													FAILURE(BgL_auxz00_4004, BFALSE, BFALSE);
										}}
										BgL_oldz00_938 =
											BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4001,
											BgL_idz00_35);
									}
									if (CBOOL(BgL_oldz00_938))
										{	/* Eval/evmodule.scm 148 */
											{	/* Eval/evmodule.scm 150 */
												obj_t BgL_zc3anonymousza31980ze3z83_3372;

												BgL_zc3anonymousza31980ze3z83_3372 =
													make_fx_procedure
													(BGl_zc3anonymousza31980ze3z83zz__evmodulez00,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza31980ze3z83_3372,
													(int) (((long) 0)), BgL_modz00_936);
												{	/* Eval/evmodule.scm 150 */
													obj_t BgL_auxz00_4016;

													{	/* Eval/evmodule.scm 150 */
														obj_t BgL_aux2818z00_3476;

														BgL_aux2818z00_3476 =
															BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
														if (STRUCTP(BgL_aux2818z00_3476))
															{	/* Eval/evmodule.scm 150 */
																BgL_auxz00_4016 = BgL_aux2818z00_3476;
															}
														else
															{
																obj_t BgL_auxz00_4019;

																BgL_auxz00_4019 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 5708)),
																	BGl_string3082z00zz__evmodulez00,
																	BGl_string3083z00zz__evmodulez00,
																	BgL_aux2818z00_3476);
																FAILURE(BgL_auxz00_4019, BFALSE, BFALSE);
													}}
													BGl_hashtablezd2updatez12zc0zz__hashz00
														(BgL_auxz00_4016, BgL_idz00_35,
														BgL_zc3anonymousza31980ze3z83_3372, BgL_modz00_936);
											}}
											{	/* Eval/evmodule.scm 151 */
												bool_t BgL_testz00_4024;

												{	/* Eval/evmodule.scm 151 */
													obj_t BgL_arg1996z00_959;

													{	/* Eval/evmodule.scm 151 */
														obj_t BgL_sz00_2459;

														if (STRUCTP(BgL_oldz00_938))
															{	/* Eval/evmodule.scm 151 */
																BgL_sz00_2459 = BgL_oldz00_938;
															}
														else
															{
																obj_t BgL_auxz00_4027;

																BgL_auxz00_4027 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 5789)),
																	BGl_string3082z00zz__evmodulez00,
																	BGl_string3083z00zz__evmodulez00,
																	BgL_oldz00_938);
																FAILURE(BgL_auxz00_4027, BFALSE, BFALSE);
															}
														BgL_arg1996z00_959 =
															STRUCT_REF(BgL_sz00_2459, (int) (((long) 2)));
													}
													{	/* Eval/evmodule.scm 151 */
														obj_t BgL_string1z00_2461;

														obj_t BgL_string2z00_2462;

														if (STRINGP(BgL_arg1996z00_959))
															{	/* Eval/evmodule.scm 151 */
																BgL_string1z00_2461 = BgL_arg1996z00_959;
															}
														else
															{
																obj_t BgL_auxz00_4035;

																BgL_auxz00_4035 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 5792)),
																	BGl_string3082z00zz__evmodulez00,
																	BGl_string3084z00zz__evmodulez00,
																	BgL_arg1996z00_959);
																FAILURE(BgL_auxz00_4035, BFALSE, BFALSE);
															}
														if (STRINGP(BgL_pathz00_36))
															{	/* Eval/evmodule.scm 151 */
																BgL_string2z00_2462 = BgL_pathz00_36;
															}
														else
															{
																obj_t BgL_auxz00_4041;

																BgL_auxz00_4041 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 5794)),
																	BGl_string3082z00zz__evmodulez00,
																	BGl_string3084z00zz__evmodulez00,
																	BgL_pathz00_36);
																FAILURE(BgL_auxz00_4041, BFALSE, BFALSE);
															}
														BgL_testz00_4024 =
															bigloo_strcmp(BgL_string1z00_2461,
															BgL_string2z00_2462);
												}}
												if (BgL_testz00_4024)
													{	/* Eval/evmodule.scm 151 */
														BFALSE;
													}
												else
													{	/* Eval/evmodule.scm 152 */
														obj_t BgL_msgz00_944;

														{	/* Eval/evmodule.scm 152 */
															obj_t BgL_arg1984z00_947;

															obj_t BgL_arg1986z00_949;

															{	/* Eval/evmodule.scm 153 */
																obj_t BgL_res2760z00_2465;

																{	/* Eval/evmodule.scm 153 */
																	obj_t BgL_arg2694z00_2464;

																	BgL_arg2694z00_2464 =
																		SYMBOL_TO_STRING(BgL_idz00_35);
																	BgL_res2760z00_2465 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2694z00_2464);
																}
																BgL_arg1984z00_947 = BgL_res2760z00_2465;
															}
															{	/* Eval/evmodule.scm 155 */
																obj_t BgL_sz00_2467;

																if (STRUCTP(BgL_oldz00_938))
																	{	/* Eval/evmodule.scm 155 */
																		BgL_sz00_2467 = BgL_oldz00_938;
																	}
																else
																	{
																		obj_t BgL_auxz00_4050;

																		BgL_auxz00_4050 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3071z00zz__evmodulez00,
																			BINT(((long) 5933)),
																			BGl_string3082z00zz__evmodulez00,
																			BGl_string3083z00zz__evmodulez00,
																			BgL_oldz00_938);
																		FAILURE(BgL_auxz00_4050, BFALSE, BFALSE);
																	}
																BgL_arg1986z00_949 =
																	STRUCT_REF(BgL_sz00_2467, (int) (((long) 2)));
															}
															{	/* Eval/evmodule.scm 152 */
																obj_t BgL_list1989z00_952;

																{	/* Eval/evmodule.scm 152 */
																	obj_t BgL_arg1990z00_953;

																	{	/* Eval/evmodule.scm 152 */
																		obj_t BgL_arg1991z00_954;

																		{	/* Eval/evmodule.scm 152 */
																			obj_t BgL_arg1992z00_955;

																			{	/* Eval/evmodule.scm 152 */
																				obj_t BgL_arg1993z00_956;

																				{	/* Eval/evmodule.scm 152 */
																					obj_t BgL_arg1994z00_957;

																					{	/* Eval/evmodule.scm 152 */
																						obj_t BgL_arg1995z00_958;

																						BgL_arg1995z00_958 =
																							MAKE_PAIR
																							(BGl_string3085z00zz__evmodulez00,
																							BNIL);
																						BgL_arg1994z00_957 =
																							MAKE_PAIR(BgL_pathz00_36,
																							BgL_arg1995z00_958);
																					}
																					BgL_arg1993z00_956 =
																						MAKE_PAIR
																						(BGl_string3086z00zz__evmodulez00,
																						BgL_arg1994z00_957);
																				}
																				BgL_arg1992z00_955 =
																					MAKE_PAIR(BgL_arg1986z00_949,
																					BgL_arg1993z00_956);
																			}
																			BgL_arg1991z00_954 =
																				MAKE_PAIR
																				(BGl_string3087z00zz__evmodulez00,
																				BgL_arg1992z00_955);
																		}
																		BgL_arg1990z00_953 =
																			MAKE_PAIR(BgL_arg1984z00_947,
																			BgL_arg1991z00_954);
																	}
																	BgL_list1989z00_952 =
																		MAKE_PAIR(BGl_string3088z00zz__evmodulez00,
																		BgL_arg1990z00_953);
																}
																BgL_msgz00_944 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list1989z00_952);
														}}
														{	/* Eval/evmodule.scm 158 */
															obj_t BgL_list1982z00_945;

															BgL_list1982z00_945 =
																MAKE_PAIR(BgL_msgz00_944, BNIL);
															BGl_warningzf2loczf2zz__errorz00(BgL_locz00_37,
																BgL_list1982z00_945);
										}}}}
									else
										{	/* Eval/evmodule.scm 159 */
											obj_t BgL_auxz00_4066;

											{	/* Eval/evmodule.scm 159 */
												obj_t BgL_aux2828z00_3486;

												BgL_aux2828z00_3486 =
													BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
												if (STRUCTP(BgL_aux2828z00_3486))
													{	/* Eval/evmodule.scm 159 */
														BgL_auxz00_4066 = BgL_aux2828z00_3486;
													}
												else
													{
														obj_t BgL_auxz00_4069;

														BgL_auxz00_4069 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3071z00zz__evmodulez00,
															BINT(((long) 6037)),
															BGl_string3082z00zz__evmodulez00,
															BGl_string3083z00zz__evmodulez00,
															BgL_aux2828z00_3486);
														FAILURE(BgL_auxz00_4069, BFALSE, BFALSE);
											}}
											BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_4066,
												BgL_idz00_35, BgL_modz00_936);
								}}
							else
								{	/* Eval/evmodule.scm 143 */
									{	/* Eval/evmodule.scm 145 */
										obj_t BgL_list1997z00_960;

										BgL_list1997z00_960 = MAKE_PAIR(BINT(((long) 100)), BNIL);
										BGl_za2moduleszd2tableza2zd2zz__evmodulez00 =
											BGl_makezd2hashtablezd2zz__hashz00(BgL_list1997z00_960);
									}
									{	/* Eval/evmodule.scm 146 */
										obj_t BgL_auxz00_4077;

										{	/* Eval/evmodule.scm 146 */
											obj_t BgL_aux2830z00_3488;

											BgL_aux2830z00_3488 =
												BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
											if (STRUCTP(BgL_aux2830z00_3488))
												{	/* Eval/evmodule.scm 146 */
													BgL_auxz00_4077 = BgL_aux2830z00_3488;
												}
											else
												{
													obj_t BgL_auxz00_4080;

													BgL_auxz00_4080 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 5583)),
														BGl_string3082z00zz__evmodulez00,
														BGl_string3083z00zz__evmodulez00,
														BgL_aux2830z00_3488);
													FAILURE(BgL_auxz00_4080, BFALSE, BFALSE);
										}}
										BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_4077,
											BgL_idz00_35, BgL_modz00_936);
								}}
							bgl_mutex_unlock(BGl_za2moduleszd2mutexza2zd2zz__evmodulez00);
							return BgL_modz00_936;
						}
					}
				}
			}
		}
	}



/* <anonymous:1980> */
	obj_t BGl_zc3anonymousza31980ze3z83zz__evmodulez00(obj_t BgL_envz00_3373,
		obj_t BgL_vz00_3375)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 150 */
			return PROCEDURE_REF(BgL_envz00_3373, (int) (((long) 0)));
		}
	}



/* eval-module */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2modulezd2zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 166 */
			return BGL_MODULE();
		}
	}



/* _eval-module */
	obj_t BGl__evalzd2modulezd2zz__evmodulez00(obj_t BgL_envz00_3379)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 166 */
			return BGL_MODULE();
		}
	}



/* eval-module-set! */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2modulezd2setz12z12zz__evmodulez00(obj_t
		BgL_modz00_38)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 172 */
			{	/* Eval/evmodule.scm 173 */
				bool_t BgL_testz00_4090;

				{	/* Eval/evmodule.scm 173 */
					bool_t BgL_testz00_4091;

					{	/* Eval/evmodule.scm 173 */
						bool_t BgL_testz00_4092;

						if (STRUCTP(BgL_modz00_38))
							{	/* Eval/evmodule.scm 173 */
								obj_t BgL_auxz00_4095;

								{	/* Eval/evmodule.scm 173 */
									obj_t BgL_res2761z00_2479;

									{	/* Eval/evmodule.scm 173 */
										obj_t BgL_aux2832z00_3490;

										BgL_aux2832z00_3490 = STRUCT_KEY(BgL_modz00_38);
										if (SYMBOLP(BgL_aux2832z00_3490))
											{	/* Eval/evmodule.scm 173 */
												BgL_res2761z00_2479 = BgL_aux2832z00_3490;
											}
										else
											{
												obj_t BgL_auxz00_4099;

												BgL_auxz00_4099 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 6643)), BGl_string3089z00zz__evmodulez00,
													BGl_string3073z00zz__evmodulez00,
													BgL_aux2832z00_3490);
												FAILURE(BgL_auxz00_4099, BFALSE, BFALSE);
									}}
									BgL_auxz00_4095 = BgL_res2761z00_2479;
								}
								BgL_testz00_4092 =
									(BgL_auxz00_4095 == BGl_symbol3066z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 173 */
								BgL_testz00_4092 = ((bool_t) 0);
							}
						if (BgL_testz00_4092)
							{	/* Eval/evmodule.scm 173 */
								BgL_testz00_4091 =
									(STRUCT_REF(BgL_modz00_38,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 173 */
								BgL_testz00_4091 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4091)
						{	/* Eval/evmodule.scm 173 */
							BgL_testz00_4090 = ((bool_t) 1);
						}
					else
						{	/* Eval/evmodule.scm 173 */
							if (
								(BgL_modz00_38 ==
									BGl_interactionzd2environmentzd2zz__evalz00()))
								{	/* Eval/evmodule.scm 174 */
									BgL_testz00_4090 = ((bool_t) 1);
								}
							else
								{	/* Eval/evmodule.scm 174 */
									BgL_testz00_4090 = (BgL_modz00_38 == BUNSPEC);
								}
						}
				}
				if (BgL_testz00_4090)
					{	/* Eval/evmodule.scm 173 */
						return BGL_MODULE_SET(BgL_modz00_38);
					}
				else
					{	/* Eval/evmodule.scm 173 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3090z00zz__evmodulez00,
							BGl_string3091z00zz__evmodulez00, BgL_modz00_38);
					}
			}
		}
	}



/* _eval-module-set! */
	obj_t BGl__evalzd2modulezd2setz12z12zz__evmodulez00(obj_t BgL_envz00_3380,
		obj_t BgL_modz00_3381)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 172 */
			return BGl_evalzd2modulezd2setz12z12zz__evmodulez00(BgL_modz00_3381);
		}
	}



/* eval-find-module */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2findzd2modulez00zz__evmodulez00(obj_t
		BgL_idz00_39)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 182 */
			if (BGl_hashtablezf3zf3zz__hashz00
				(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
				{	/* Eval/evmodule.scm 183 */
					obj_t BgL_auxz00_4116;

					{	/* Eval/evmodule.scm 183 */
						obj_t BgL_aux2834z00_3492;

						BgL_aux2834z00_3492 = BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
						if (STRUCTP(BgL_aux2834z00_3492))
							{	/* Eval/evmodule.scm 183 */
								BgL_auxz00_4116 = BgL_aux2834z00_3492;
							}
						else
							{
								obj_t BgL_auxz00_4119;

								BgL_auxz00_4119 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 7070)),
									BGl_string3092z00zz__evmodulez00,
									BGl_string3083z00zz__evmodulez00, BgL_aux2834z00_3492);
								FAILURE(BgL_auxz00_4119, BFALSE, BFALSE);
					}}
					return
						BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4116, BgL_idz00_39);
				}
			else
				{	/* Eval/evmodule.scm 183 */
					return BFALSE;
				}
		}
	}



/* _eval-find-module */
	obj_t BGl__evalzd2findzd2modulez00zz__evmodulez00(obj_t BgL_envz00_3382,
		obj_t BgL_idz00_3383)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 182 */
			{	/* Eval/evmodule.scm 183 */
				obj_t BgL_auxz00_4124;

				if (SYMBOLP(BgL_idz00_3383))
					{	/* Eval/evmodule.scm 183 */
						BgL_auxz00_4124 = BgL_idz00_3383;
					}
				else
					{
						obj_t BgL_auxz00_4127;

						BgL_auxz00_4127 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3071z00zz__evmodulez00,
							BINT(((long) 7070)), BGl_string3093z00zz__evmodulez00,
							BGl_string3073z00zz__evmodulez00, BgL_idz00_3383);
						FAILURE(BgL_auxz00_4127, BFALSE, BFALSE);
					}
				return BGl_evalzd2findzd2modulez00zz__evmodulez00(BgL_auxz00_4124);
			}
		}
	}



/* evmodule-find-global */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2findzd2globalz00zz__evmodulez00(obj_t
		BgL_modz00_40, obj_t BgL_idz00_41)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 189 */
			{	/* Eval/evmodule.scm 190 */
				bool_t BgL_testz00_4132;

				{	/* Eval/evmodule.scm 190 */
					bool_t BgL_testz00_4133;

					if (STRUCTP(BgL_modz00_40))
						{	/* Eval/evmodule.scm 190 */
							obj_t BgL_auxz00_4136;

							{	/* Eval/evmodule.scm 190 */
								obj_t BgL_res2763z00_2497;

								{	/* Eval/evmodule.scm 190 */
									obj_t BgL_aux2838z00_3496;

									BgL_aux2838z00_3496 = STRUCT_KEY(BgL_modz00_40);
									if (SYMBOLP(BgL_aux2838z00_3496))
										{	/* Eval/evmodule.scm 190 */
											BgL_res2763z00_2497 = BgL_aux2838z00_3496;
										}
									else
										{
											obj_t BgL_auxz00_4140;

											BgL_auxz00_4140 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 7416)),
												BGl_string3094z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_aux2838z00_3496);
											FAILURE(BgL_auxz00_4140, BFALSE, BFALSE);
								}}
								BgL_auxz00_4136 = BgL_res2763z00_2497;
							}
							BgL_testz00_4133 =
								(BgL_auxz00_4136 == BGl_symbol3066z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 190 */
							BgL_testz00_4133 = ((bool_t) 0);
						}
					if (BgL_testz00_4133)
						{	/* Eval/evmodule.scm 190 */
							BgL_testz00_4132 =
								(STRUCT_REF(BgL_modz00_40,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 190 */
							BgL_testz00_4132 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_4132)
					{	/* Eval/evmodule.scm 190 */
						obj_t BgL__ortest_1825z00_2486;

						{	/* Eval/evmodule.scm 190 */
							obj_t BgL_auxz00_4148;

							{	/* Eval/evmodule.scm 190 */
								obj_t BgL_sz00_2503;

								BgL_sz00_2503 = BgL_modz00_40;
								{	/* Eval/evmodule.scm 190 */
									obj_t BgL_aux2842z00_3500;

									BgL_aux2842z00_3500 =
										STRUCT_REF(BgL_sz00_2503, (int) (((long) 3)));
									if (STRUCTP(BgL_aux2842z00_3500))
										{	/* Eval/evmodule.scm 190 */
											BgL_auxz00_4148 = BgL_aux2842z00_3500;
										}
									else
										{
											obj_t BgL_auxz00_4153;

											BgL_auxz00_4153 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 7412)),
												BGl_string3094z00zz__evmodulez00,
												BGl_string3083z00zz__evmodulez00, BgL_aux2842z00_3500);
											FAILURE(BgL_auxz00_4153, BFALSE, BFALSE);
							}}}
							BgL__ortest_1825z00_2486 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4148,
								BgL_idz00_41);
						}
						if (CBOOL(BgL__ortest_1825z00_2486))
							{	/* Eval/evmodule.scm 190 */
								return BgL__ortest_1825z00_2486;
							}
						else
							{	/* Eval/evmodule.scm 190 */
								return BGl_evalzd2lookupzd2zz__evenvz00(BgL_idz00_41);
							}
					}
				else
					{	/* Eval/evmodule.scm 190 */
						return BGl_evalzd2lookupzd2zz__evenvz00(BgL_idz00_41);
					}
			}
		}
	}



/* _evmodule-find-global */
	obj_t BGl__evmodulezd2findzd2globalz00zz__evmodulez00(obj_t BgL_envz00_3384,
		obj_t BgL_modz00_3385, obj_t BgL_idz00_3386)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 189 */
			{	/* Eval/evmodule.scm 190 */
				obj_t BgL_auxz00_4162;

				if (SYMBOLP(BgL_idz00_3386))
					{	/* Eval/evmodule.scm 190 */
						BgL_auxz00_4162 = BgL_idz00_3386;
					}
				else
					{
						obj_t BgL_auxz00_4165;

						BgL_auxz00_4165 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3071z00zz__evmodulez00,
							BINT(((long) 7412)), BGl_string3095z00zz__evmodulez00,
							BGl_string3073z00zz__evmodulez00, BgL_idz00_3386);
						FAILURE(BgL_auxz00_4165, BFALSE, BFALSE);
					}
				return
					BGl_evmodulezd2findzd2globalz00zz__evmodulez00(BgL_modz00_3385,
					BgL_auxz00_4162);
			}
		}
	}



/* evmodule-bind-global! */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t
		BgL_modz00_42, obj_t BgL_idz00_43, obj_t BgL_varz00_44)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 197 */
			if (CBOOL(BGl_getzd2evalzd2expanderz00zz__macroz00(BgL_idz00_43)))
				{	/* Eval/evmodule.scm 199 */
					obj_t BgL_msgz00_975;

					{	/* Eval/evmodule.scm 199 */
						obj_t BgL_arg2013z00_978;

						{	/* Eval/evmodule.scm 199 */
							obj_t BgL_res2765z00_2507;

							{	/* Eval/evmodule.scm 199 */
								obj_t BgL_arg2694z00_2506;

								BgL_arg2694z00_2506 = SYMBOL_TO_STRING(BgL_idz00_43);
								BgL_res2765z00_2507 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2694z00_2506);
							}
							BgL_arg2013z00_978 = BgL_res2765z00_2507;
						}
						BgL_msgz00_975 =
							string_append_3(BGl_string3096z00zz__evmodulez00,
							BgL_arg2013z00_978, BGl_string3097z00zz__evmodulez00);
					}
					{	/* Eval/evmodule.scm 201 */
						obj_t BgL_list2011z00_976;

						BgL_list2011z00_976 = MAKE_PAIR(BgL_msgz00_975, BNIL);
						BGl_evmeaningzd2warningzd2zz__everrorz00(BFALSE,
							BgL_list2011z00_976);
					}
				}
			else
				{	/* Eval/evmodule.scm 198 */
					BFALSE;
				}
			{	/* Eval/evmodule.scm 202 */
				bool_t BgL_testz00_4178;

				{	/* Eval/evmodule.scm 202 */
					bool_t BgL_testz00_4179;

					if (STRUCTP(BgL_modz00_42))
						{	/* Eval/evmodule.scm 202 */
							obj_t BgL_auxz00_4182;

							{	/* Eval/evmodule.scm 202 */
								obj_t BgL_res2766z00_2517;

								{	/* Eval/evmodule.scm 202 */
									obj_t BgL_aux2846z00_3504;

									BgL_aux2846z00_3504 = STRUCT_KEY(BgL_modz00_42);
									if (SYMBOLP(BgL_aux2846z00_3504))
										{	/* Eval/evmodule.scm 202 */
											BgL_res2766z00_2517 = BgL_aux2846z00_3504;
										}
									else
										{
											obj_t BgL_auxz00_4186;

											BgL_auxz00_4186 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 7961)),
												BGl_string3098z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_aux2846z00_3504);
											FAILURE(BgL_auxz00_4186, BFALSE, BFALSE);
								}}
								BgL_auxz00_4182 = BgL_res2766z00_2517;
							}
							BgL_testz00_4179 =
								(BgL_auxz00_4182 == BGl_symbol3066z00zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 202 */
							BgL_testz00_4179 = ((bool_t) 0);
						}
					if (BgL_testz00_4179)
						{	/* Eval/evmodule.scm 202 */
							BgL_testz00_4178 =
								(STRUCT_REF(BgL_modz00_42,
									(int) (((long) 0))) ==
								BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
						}
					else
						{	/* Eval/evmodule.scm 202 */
							BgL_testz00_4178 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_4178)
					{	/* Eval/evmodule.scm 203 */
						obj_t BgL_arg2017z00_981;

						BgL_arg2017z00_981 = STRUCT_REF(BgL_modz00_42, (int) (((long) 3)));
						{	/* Eval/evmodule.scm 203 */
							obj_t BgL_auxz00_4196;

							if (STRUCTP(BgL_arg2017z00_981))
								{	/* Eval/evmodule.scm 203 */
									BgL_auxz00_4196 = BgL_arg2017z00_981;
								}
							else
								{
									obj_t BgL_auxz00_4199;

									BgL_auxz00_4199 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 8018)),
										BGl_string3098z00zz__evmodulez00,
										BGl_string3083z00zz__evmodulez00, BgL_arg2017z00_981);
									FAILURE(BgL_auxz00_4199, BFALSE, BFALSE);
								}
							return
								BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_4196,
								BgL_idz00_43, BgL_varz00_44);
						}
					}
				else
					{	/* Eval/evmodule.scm 202 */
						return
							BGl_bindzd2evalzd2globalz12z12zz__evenvz00(BgL_idz00_43,
							BgL_varz00_44);
					}
			}
		}
	}



/* _evmodule-bind-global! */
	obj_t BGl__evmodulezd2bindzd2globalz12z12zz__evmodulez00(obj_t
		BgL_envz00_3387, obj_t BgL_modz00_3388, obj_t BgL_idz00_3389,
		obj_t BgL_varz00_3390)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 197 */
			{	/* Eval/evmodule.scm 204 */
				obj_t BgL_auxz00_4205;

				if (SYMBOLP(BgL_idz00_3389))
					{	/* Eval/evmodule.scm 204 */
						BgL_auxz00_4205 = BgL_idz00_3389;
					}
				else
					{
						obj_t BgL_auxz00_4208;

						BgL_auxz00_4208 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3071z00zz__evmodulez00,
							BINT(((long) 8061)), BGl_string3099z00zz__evmodulez00,
							BGl_string3073z00zz__evmodulez00, BgL_idz00_3389);
						FAILURE(BgL_auxz00_4208, BFALSE, BFALSE);
					}
				return
					BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00(BgL_modz00_3388,
					BgL_auxz00_4205, BgL_varz00_3390);
			}
		}
	}



/* evmodule-library */
	obj_t BGl_evmodulezd2libraryzd2zz__evmodulez00(obj_t BgL_clausez00_45,
		obj_t BgL_locz00_46)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 209 */
			{	/* Eval/evmodule.scm 210 */
				bool_t BgL_testz00_4213;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_45))
					{
						obj_t BgL_l1880z00_1005;

						{	/* Eval/evmodule.scm 210 */
							obj_t BgL_auxz00_4216;

							BgL_l1880z00_1005 = BgL_clausez00_45;
						BgL_zc3anonymousza32036ze3z83_1006:
							if (NULLP(BgL_l1880z00_1005))
								{	/* Eval/evmodule.scm 210 */
									BgL_auxz00_4216 = BTRUE;
								}
							else
								{	/* Eval/evmodule.scm 210 */
									if (PAIRP(BgL_l1880z00_1005))
										{	/* Eval/evmodule.scm 210 */
											bool_t BgL_testz00_4221;

											{	/* Eval/evmodule.scm 210 */
												obj_t BgL_auxz00_4222;

												BgL_auxz00_4222 = CAR(BgL_l1880z00_1005);
												BgL_testz00_4221 = SYMBOLP(BgL_auxz00_4222);
											}
											if (BgL_testz00_4221)
												{
													obj_t BgL_l1880z00_4225;

													BgL_l1880z00_4225 = CDR(BgL_l1880z00_1005);
													BgL_l1880z00_1005 = BgL_l1880z00_4225;
													goto BgL_zc3anonymousza32036ze3z83_1006;
												}
											else
												{	/* Eval/evmodule.scm 210 */
													BgL_auxz00_4216 = BFALSE;
												}
										}
									else
										{	/* Eval/evmodule.scm 210 */
											BgL_auxz00_4216 =
												BGl_errorz00zz__errorz00
												(BGl_string3100z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1880z00_1005);
										}
								}
							BgL_testz00_4213 = CBOOL(BgL_auxz00_4216);
						}
					}
				else
					{	/* Eval/evmodule.scm 210 */
						BgL_testz00_4213 = ((bool_t) 0);
					}
				if (BgL_testz00_4213)
					{	/* Eval/evmodule.scm 212 */
						obj_t BgL_g1884z00_983;

						{	/* Eval/evmodule.scm 212 */
							obj_t BgL_pairz00_2530;

							if (PAIRP(BgL_clausez00_45))
								{	/* Eval/evmodule.scm 212 */
									BgL_pairz00_2530 = BgL_clausez00_45;
								}
							else
								{
									obj_t BgL_auxz00_4231;

									BgL_auxz00_4231 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 8514)),
										BGl_string3102z00zz__evmodulez00,
										BGl_string3103z00zz__evmodulez00, BgL_clausez00_45);
									FAILURE(BgL_auxz00_4231, BFALSE, BFALSE);
								}
							BgL_g1884z00_983 = CDR(BgL_pairz00_2530);
						}
						{
							obj_t BgL_l1882z00_985;

							BgL_l1882z00_985 = BgL_g1884z00_983;
						BgL_zc3anonymousza32019ze3z83_986:
							if (PAIRP(BgL_l1882z00_985))
								{	/* Eval/evmodule.scm 212 */
									{	/* Eval/evmodule.scm 212 */
										obj_t BgL_sz00_988;

										BgL_sz00_988 = CAR(BgL_l1882z00_985);
										{	/* Eval/evmodule.scm 212 */
											obj_t BgL_arg2021z00_989;

											{	/* Eval/evmodule.scm 212 */
												obj_t BgL_arg2023z00_992;

												obj_t BgL_arg2024z00_993;

												BgL_arg2023z00_992 = BGl_symbol3104z00zz__evmodulez00;
												{	/* Eval/evmodule.scm 212 */
													obj_t BgL_arg2025z00_994;

													{	/* Eval/evmodule.scm 212 */
														obj_t BgL_arg2029z00_997;

														obj_t BgL_arg2030z00_998;

														BgL_arg2029z00_997 =
															BGl_symbol3106z00zz__evmodulez00;
														{	/* Eval/evmodule.scm 212 */
															obj_t BgL_list2031z00_999;

															BgL_list2031z00_999 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2030z00_998 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_sz00_988, BgL_list2031z00_999);
														}
														BgL_arg2025z00_994 =
															MAKE_PAIR(BgL_arg2029z00_997, BgL_arg2030z00_998);
													}
													{	/* Eval/evmodule.scm 212 */
														obj_t BgL_list2028z00_996;

														BgL_list2028z00_996 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2024z00_993 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2025z00_994, BgL_list2028z00_996);
													}
												}
												BgL_arg2021z00_989 =
													MAKE_PAIR(BgL_arg2023z00_992, BgL_arg2024z00_993);
											}
											{	/* Eval/eval.scm 80 */
												obj_t BgL_envz00_991;

												BgL_envz00_991 =
													BGl_defaultzd2environmentzd2zz__evalz00();
												{	/* Eval/eval.scm 80 */

													BGl_evalz00zz__evalz00(BgL_arg2021z00_989,
														BgL_envz00_991);
												}
											}
										}
									}
									{
										obj_t BgL_l1882z00_4247;

										BgL_l1882z00_4247 = CDR(BgL_l1882z00_985);
										BgL_l1882z00_985 = BgL_l1882z00_4247;
										goto BgL_zc3anonymousza32019ze3z83_986;
									}
								}
							else
								{	/* Eval/evmodule.scm 212 */
									if (NULLP(BgL_l1882z00_985))
										{	/* Eval/evmodule.scm 212 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 212 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3108z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1882z00_985);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 210 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_46,
							BGl_symbol3109z00zz__evmodulez00,
							BGl_string3111z00zz__evmodulez00, BgL_clausez00_45);
					}
			}
		}
	}



/* evmodule-static */
	obj_t BGl_evmodulezd2staticzd2zz__evmodulez00(obj_t BgL_modz00_47,
		obj_t BgL_clausez00_48, obj_t BgL_locz00_49, bool_t BgL_classpz00_50)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 217 */
			{
				obj_t BgL_sz00_1024;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_48))
					{	/* Eval/evmodule.scm 251 */
						obj_t BgL_g1887z00_1015;

						{	/* Eval/evmodule.scm 251 */
							obj_t BgL_pairz00_2535;

							if (PAIRP(BgL_clausez00_48))
								{	/* Eval/evmodule.scm 251 */
									BgL_pairz00_2535 = BgL_clausez00_48;
								}
							else
								{
									obj_t BgL_auxz00_4257;

									BgL_auxz00_4257 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 9966)),
										BGl_string3130z00zz__evmodulez00,
										BGl_string3103z00zz__evmodulez00, BgL_clausez00_48);
									FAILURE(BgL_auxz00_4257, BFALSE, BFALSE);
								}
							BgL_g1887z00_1015 = CDR(BgL_pairz00_2535);
						}
						{
							obj_t BgL_l1885z00_1017;

							BgL_l1885z00_1017 = BgL_g1887z00_1015;
						BgL_zc3anonymousza32043ze3z83_1018:
							if (PAIRP(BgL_l1885z00_1017))
								{	/* Eval/evmodule.scm 251 */
									BgL_sz00_1024 = CAR(BgL_l1885z00_1017);
									{
										obj_t BgL_sz00_1041;

										obj_t BgL_sz00_1039;

										if (SYMBOLP(BgL_sz00_1024))
											{	/* Eval/evmodule.scm 248 */
												{	/* Eval/evmodule.scm 221 */
													obj_t BgL_idz00_1133;

													BgL_idz00_1133 =
														BGl_untypezd2identzd2zz__evcompilez00
														(BgL_sz00_1024);
													{	/* Eval/evmodule.scm 222 */
														obj_t BgL_arg2102z00_1134;

														{	/* Eval/evmodule.scm 222 */
															obj_t BgL_arg2103z00_1135;

															obj_t BgL_arg2104z00_1136;

															BgL_arg2103z00_1135 =
																BGl_symbol3112z00zz__evmodulez00;
															{	/* Eval/evmodule.scm 222 */
																obj_t BgL_arg2105z00_1137;

																{	/* Eval/evmodule.scm 222 */
																	obj_t BgL_arg2109z00_1141;

																	obj_t BgL_arg2110z00_1142;

																	BgL_arg2109z00_1141 =
																		BGl_symbol3106z00zz__evmodulez00;
																	{	/* Eval/evmodule.scm 222 */
																		obj_t BgL_list2111z00_1143;

																		BgL_list2111z00_1143 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2110z00_1142 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																			BgL_list2111z00_1143);
																	}
																	BgL_arg2105z00_1137 =
																		MAKE_PAIR(BgL_arg2109z00_1141,
																		BgL_arg2110z00_1142);
																}
																{	/* Eval/evmodule.scm 222 */
																	obj_t BgL_list2107z00_1139;

																	{	/* Eval/evmodule.scm 222 */
																		obj_t BgL_arg2108z00_1140;

																		BgL_arg2108z00_1140 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2107z00_1139 =
																			MAKE_PAIR(BgL_arg2105z00_1137,
																			BgL_arg2108z00_1140);
																	}
																	BgL_arg2104z00_1136 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_idz00_1133, BgL_list2107z00_1139);
																}
															}
															BgL_arg2102z00_1134 =
																MAKE_PAIR(BgL_arg2103z00_1135,
																BgL_arg2104z00_1136);
														}
														BGl_evalz00zz__evalz00(BgL_arg2102z00_1134,
															BgL_modz00_47);
													}
												}
											}
										else
											{	/* Eval/evmodule.scm 248 */
												if (PAIRP(BgL_sz00_1024))
													{	/* Eval/evmodule.scm 248 */
														obj_t BgL_cdrzd21407zd2_1047;

														BgL_cdrzd21407zd2_1047 = CDR(BgL_sz00_1024);
														if (
															(CAR(BgL_sz00_1024) ==
																BGl_symbol3114z00zz__evmodulez00))
															{	/* Eval/evmodule.scm 248 */
																if (PAIRP(BgL_cdrzd21407zd2_1047))
																	{	/* Eval/evmodule.scm 248 */
																		obj_t BgL_carzd21410zd2_1050;

																		BgL_carzd21410zd2_1050 =
																			CAR(BgL_cdrzd21407zd2_1047);
																		if (SYMBOLP(BgL_carzd21410zd2_1050))
																			{	/* Eval/evmodule.scm 248 */
																				obj_t BgL_arg2054z00_1052;

																				BgL_arg2054z00_1052 =
																					CDR(BgL_cdrzd21407zd2_1047);
																				{	/* Eval/evmodule.scm 248 */
																					obj_t BgL_claz00_2548;

																					BgL_claz00_2548 =
																						BgL_carzd21410zd2_1050;
																					if (BgL_classpz00_50)
																						{	/* Eval/evmodule.scm 248 */
																							obj_t BgL_auxz00_4297;

																							obj_t BgL_auxz00_4288;

																							if (PAIRP(BgL_clausez00_48))
																								{	/* Eval/evmodule.scm 248 */
																									BgL_auxz00_4297 =
																										BgL_clausez00_48;
																								}
																							else
																								{
																									obj_t BgL_auxz00_4300;

																									BgL_auxz00_4300 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3071z00zz__evmodulez00,
																										BINT(((long) 9822)),
																										BGl_string3116z00zz__evmodulez00,
																										BGl_string3103z00zz__evmodulez00,
																										BgL_clausez00_48);
																									FAILURE(BgL_auxz00_4300,
																										BFALSE, BFALSE);
																								}
																							{	/* Eval/evmodule.scm 248 */
																								bool_t BgL_testz00_4289;

																								if (PAIRP(BgL_arg2054z00_1052))
																									{	/* Eval/evmodule.scm 248 */
																										BgL_testz00_4289 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Eval/evmodule.scm 248 */
																										BgL_testz00_4289 =
																											NULLP
																											(BgL_arg2054z00_1052);
																									}
																								if (BgL_testz00_4289)
																									{	/* Eval/evmodule.scm 248 */
																										BgL_auxz00_4288 =
																											BgL_arg2054z00_1052;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4293;

																										BgL_auxz00_4293 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3071z00zz__evmodulez00,
																											BINT(((long) 9822)),
																											BGl_string3116z00zz__evmodulez00,
																											BGl_string3117z00zz__evmodulez00,
																											BgL_arg2054z00_1052);
																										FAILURE(BgL_auxz00_4293,
																											BFALSE, BFALSE);
																							}}
																							BGl_evalzd2classzd2zz__evobjectz00
																								(BgL_claz00_2548, ((bool_t) 0),
																								BgL_auxz00_4288,
																								BgL_auxz00_4297, BgL_modz00_47);
																						}
																					else
																						{	/* Eval/evmodule.scm 248 */
																							BFALSE;
																						}
																				}
																			}
																		else
																			{	/* Eval/evmodule.scm 248 */
																				obj_t BgL_carzd21454zd2_1054;

																				BgL_carzd21454zd2_1054 =
																					CAR(BgL_sz00_1024);
																				if (SYMBOLP(BgL_carzd21454zd2_1054))
																					{	/* Eval/evmodule.scm 248 */
																						BgL_sz00_1041 =
																							BgL_carzd21454zd2_1054;
																					BgL_tagzd21395zd2_1042:
																						{	/* Eval/evmodule.scm 243 */
																							obj_t BgL_idz00_1155;

																							BgL_idz00_1155 =
																								BGl_untypezd2identzd2zz__evcompilez00
																								(BgL_sz00_1041);
																							{	/* Eval/evmodule.scm 244 */
																								obj_t BgL_arg2123z00_1156;

																								{	/* Eval/evmodule.scm 244 */
																									obj_t BgL_arg2124z00_1157;

																									obj_t BgL_arg2125z00_1158;

																									BgL_arg2124z00_1157 =
																										BGl_symbol3112z00zz__evmodulez00;
																									{	/* Eval/evmodule.scm 244 */
																										obj_t BgL_arg2126z00_1159;

																										{	/* Eval/evmodule.scm 244 */
																											obj_t BgL_arg2131z00_1163;

																											obj_t BgL_arg2132z00_1164;

																											BgL_arg2131z00_1163 =
																												BGl_symbol3106z00zz__evmodulez00;
																											{	/* Eval/evmodule.scm 244 */
																												obj_t
																													BgL_list2133z00_1165;
																												BgL_list2133z00_1165 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2132z00_1164 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																													BgL_list2133z00_1165);
																											}
																											BgL_arg2126z00_1159 =
																												MAKE_PAIR
																												(BgL_arg2131z00_1163,
																												BgL_arg2132z00_1164);
																										}
																										{	/* Eval/evmodule.scm 244 */
																											obj_t
																												BgL_list2128z00_1161;
																											{	/* Eval/evmodule.scm 244 */
																												obj_t
																													BgL_arg2130z00_1162;
																												BgL_arg2130z00_1162 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list2128z00_1161 =
																													MAKE_PAIR
																													(BgL_arg2126z00_1159,
																													BgL_arg2130z00_1162);
																											}
																											BgL_arg2125z00_1158 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_1155,
																												BgL_list2128z00_1161);
																										}
																									}
																									BgL_arg2123z00_1156 =
																										MAKE_PAIR
																										(BgL_arg2124z00_1157,
																										BgL_arg2125z00_1158);
																								}
																								BGl_evalz00zz__evalz00
																									(BgL_arg2123z00_1156,
																									BgL_modz00_47);
																							}
																						}
																					}
																				else
																					{	/* Eval/evmodule.scm 248 */
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																							(BgL_locz00_49,
																							BGl_symbol3109z00zz__evmodulez00,
																							BGl_string3118z00zz__evmodulez00,
																							BgL_clausez00_48);
																					}
																			}
																	}
																else
																	{	/* Eval/evmodule.scm 248 */
																		obj_t BgL_carzd21478zd2_1061;

																		BgL_carzd21478zd2_1061 = CAR(BgL_sz00_1024);
																		if (SYMBOLP(BgL_carzd21478zd2_1061))
																			{
																				obj_t BgL_sz00_4321;

																				BgL_sz00_4321 = BgL_carzd21478zd2_1061;
																				BgL_sz00_1041 = BgL_sz00_4321;
																				goto BgL_tagzd21395zd2_1042;
																			}
																		else
																			{	/* Eval/evmodule.scm 248 */
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																					(BgL_locz00_49,
																					BGl_symbol3109z00zz__evmodulez00,
																					BGl_string3118z00zz__evmodulez00,
																					BgL_clausez00_48);
																			}
																	}
															}
														else
															{	/* Eval/evmodule.scm 248 */
																if (
																	(CAR(BgL_sz00_1024) ==
																		BGl_symbol3119z00zz__evmodulez00))
																	{	/* Eval/evmodule.scm 248 */
																		if (PAIRP(BgL_cdrzd21407zd2_1047))
																			{	/* Eval/evmodule.scm 248 */
																				obj_t BgL_carzd21492zd2_1066;

																				BgL_carzd21492zd2_1066 =
																					CAR(BgL_cdrzd21407zd2_1047);
																				if (SYMBOLP(BgL_carzd21492zd2_1066))
																					{	/* Eval/evmodule.scm 248 */
																						obj_t BgL_arg2063z00_1068;

																						BgL_arg2063z00_1068 =
																							CDR(BgL_cdrzd21407zd2_1047);
																						{	/* Eval/evmodule.scm 248 */
																							obj_t BgL_claz00_2560;

																							BgL_claz00_2560 =
																								BgL_carzd21492zd2_1066;
																							if (BgL_classpz00_50)
																								{	/* Eval/evmodule.scm 248 */
																									obj_t BgL_auxz00_4342;

																									obj_t BgL_auxz00_4333;

																									if (PAIRP(BgL_clausez00_48))
																										{	/* Eval/evmodule.scm 248 */
																											BgL_auxz00_4342 =
																												BgL_clausez00_48;
																										}
																									else
																										{
																											obj_t BgL_auxz00_4345;

																											BgL_auxz00_4345 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3071z00zz__evmodulez00,
																												BINT(((long) 9822)),
																												BGl_string3116z00zz__evmodulez00,
																												BGl_string3103z00zz__evmodulez00,
																												BgL_clausez00_48);
																											FAILURE(BgL_auxz00_4345,
																												BFALSE, BFALSE);
																										}
																									{	/* Eval/evmodule.scm 248 */
																										bool_t BgL_testz00_4334;

																										if (PAIRP
																											(BgL_arg2063z00_1068))
																											{	/* Eval/evmodule.scm 248 */
																												BgL_testz00_4334 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Eval/evmodule.scm 248 */
																												BgL_testz00_4334 =
																													NULLP
																													(BgL_arg2063z00_1068);
																											}
																										if (BgL_testz00_4334)
																											{	/* Eval/evmodule.scm 248 */
																												BgL_auxz00_4333 =
																													BgL_arg2063z00_1068;
																											}
																										else
																											{
																												obj_t BgL_auxz00_4338;

																												BgL_auxz00_4338 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string3071z00zz__evmodulez00,
																													BINT(((long) 9822)),
																													BGl_string3116z00zz__evmodulez00,
																													BGl_string3117z00zz__evmodulez00,
																													BgL_arg2063z00_1068);
																												FAILURE(BgL_auxz00_4338,
																													BFALSE, BFALSE);
																									}}
																									BGl_evalzd2classzd2zz__evobjectz00
																										(BgL_claz00_2560,
																										((bool_t) 0),
																										BgL_auxz00_4333,
																										BgL_auxz00_4342,
																										BgL_modz00_47);
																								}
																							else
																								{	/* Eval/evmodule.scm 248 */
																									BFALSE;
																								}
																						}
																					}
																				else
																					{	/* Eval/evmodule.scm 248 */
																						obj_t BgL_carzd21531zd2_1070;

																						BgL_carzd21531zd2_1070 =
																							CAR(BgL_sz00_1024);
																						if (SYMBOLP(BgL_carzd21531zd2_1070))
																							{
																								obj_t BgL_sz00_4353;

																								BgL_sz00_4353 =
																									BgL_carzd21531zd2_1070;
																								BgL_sz00_1041 = BgL_sz00_4353;
																								goto BgL_tagzd21395zd2_1042;
																							}
																						else
																							{	/* Eval/evmodule.scm 248 */
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_49,
																									BGl_symbol3109z00zz__evmodulez00,
																									BGl_string3118z00zz__evmodulez00,
																									BgL_clausez00_48);
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 248 */
																				obj_t BgL_carzd21550zd2_1077;

																				BgL_carzd21550zd2_1077 =
																					CAR(BgL_sz00_1024);
																				if (SYMBOLP(BgL_carzd21550zd2_1077))
																					{
																						obj_t BgL_sz00_4358;

																						BgL_sz00_4358 =
																							BgL_carzd21550zd2_1077;
																						BgL_sz00_1041 = BgL_sz00_4358;
																						goto BgL_tagzd21395zd2_1042;
																					}
																				else
																					{	/* Eval/evmodule.scm 248 */
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																							(BgL_locz00_49,
																							BGl_symbol3109z00zz__evmodulez00,
																							BGl_string3118z00zz__evmodulez00,
																							BgL_clausez00_48);
																					}
																			}
																	}
																else
																	{	/* Eval/evmodule.scm 248 */
																		obj_t BgL_cdrzd21561zd2_1079;

																		BgL_cdrzd21561zd2_1079 = CDR(BgL_sz00_1024);
																		if (
																			(CAR(BgL_sz00_1024) ==
																				BGl_symbol3121z00zz__evmodulez00))
																			{	/* Eval/evmodule.scm 248 */
																				if (PAIRP(BgL_cdrzd21561zd2_1079))
																					{	/* Eval/evmodule.scm 248 */
																						obj_t BgL_carzd21564zd2_1082;

																						BgL_carzd21564zd2_1082 =
																							CAR(BgL_cdrzd21561zd2_1079);
																						if (SYMBOLP(BgL_carzd21564zd2_1082))
																							{	/* Eval/evmodule.scm 248 */
																								obj_t BgL_arg2072z00_1084;

																								BgL_arg2072z00_1084 =
																									CDR(BgL_cdrzd21561zd2_1079);
																								{	/* Eval/evmodule.scm 248 */
																									obj_t BgL_claz00_2572;

																									BgL_claz00_2572 =
																										BgL_carzd21564zd2_1082;
																									if (BgL_classpz00_50)
																										{	/* Eval/evmodule.scm 248 */
																											obj_t BgL_auxz00_4380;

																											obj_t BgL_auxz00_4371;

																											if (PAIRP
																												(BgL_clausez00_48))
																												{	/* Eval/evmodule.scm 248 */
																													BgL_auxz00_4380 =
																														BgL_clausez00_48;
																												}
																											else
																												{
																													obj_t BgL_auxz00_4383;

																													BgL_auxz00_4383 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3071z00zz__evmodulez00,
																														BINT(((long) 9822)),
																														BGl_string3116z00zz__evmodulez00,
																														BGl_string3103z00zz__evmodulez00,
																														BgL_clausez00_48);
																													FAILURE
																														(BgL_auxz00_4383,
																														BFALSE, BFALSE);
																												}
																											{	/* Eval/evmodule.scm 248 */
																												bool_t BgL_testz00_4372;

																												if (PAIRP
																													(BgL_arg2072z00_1084))
																													{	/* Eval/evmodule.scm 248 */
																														BgL_testz00_4372 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Eval/evmodule.scm 248 */
																														BgL_testz00_4372 =
																															NULLP
																															(BgL_arg2072z00_1084);
																													}
																												if (BgL_testz00_4372)
																													{	/* Eval/evmodule.scm 248 */
																														BgL_auxz00_4371 =
																															BgL_arg2072z00_1084;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_4376;
																														BgL_auxz00_4376 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3071z00zz__evmodulez00,
																															BINT(((long)
																																	9822)),
																															BGl_string3116z00zz__evmodulez00,
																															BGl_string3117z00zz__evmodulez00,
																															BgL_arg2072z00_1084);
																														FAILURE
																															(BgL_auxz00_4376,
																															BFALSE, BFALSE);
																											}}
																											BGl_evalzd2classzd2zz__evobjectz00
																												(BgL_claz00_2572,
																												((bool_t) 1),
																												BgL_auxz00_4371,
																												BgL_auxz00_4380,
																												BgL_modz00_47);
																										}
																									else
																										{	/* Eval/evmodule.scm 248 */
																											BFALSE;
																										}
																								}
																							}
																						else
																							{	/* Eval/evmodule.scm 248 */
																								obj_t BgL_carzd21598zd2_1086;

																								BgL_carzd21598zd2_1086 =
																									CAR(BgL_sz00_1024);
																								if (SYMBOLP
																									(BgL_carzd21598zd2_1086))
																									{
																										obj_t BgL_sz00_4391;

																										BgL_sz00_4391 =
																											BgL_carzd21598zd2_1086;
																										BgL_sz00_1041 =
																											BgL_sz00_4391;
																										goto BgL_tagzd21395zd2_1042;
																									}
																								else
																									{	/* Eval/evmodule.scm 248 */
																										BGl_evcompilezd2errorzd2zz__evcompilez00
																											(BgL_locz00_49,
																											BGl_symbol3109z00zz__evmodulez00,
																											BGl_string3118z00zz__evmodulez00,
																											BgL_clausez00_48);
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 248 */
																						obj_t BgL_carzd21612zd2_1093;

																						BgL_carzd21612zd2_1093 =
																							CAR(BgL_sz00_1024);
																						if (SYMBOLP(BgL_carzd21612zd2_1093))
																							{
																								obj_t BgL_sz00_4396;

																								BgL_sz00_4396 =
																									BgL_carzd21612zd2_1093;
																								BgL_sz00_1041 = BgL_sz00_4396;
																								goto BgL_tagzd21395zd2_1042;
																							}
																						else
																							{	/* Eval/evmodule.scm 248 */
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_49,
																									BGl_symbol3109z00zz__evmodulez00,
																									BGl_string3118z00zz__evmodulez00,
																									BgL_clausez00_48);
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 248 */
																				if (
																					(CAR(BgL_sz00_1024) ==
																						BGl_symbol3123z00zz__evmodulez00))
																					{	/* Eval/evmodule.scm 248 */
																						if (PAIRP(BgL_cdrzd21561zd2_1079))
																							{	/* Eval/evmodule.scm 248 */
																								obj_t BgL_carzd21626zd2_1098;

																								BgL_carzd21626zd2_1098 =
																									CAR(BgL_cdrzd21561zd2_1079);
																								if (SYMBOLP
																									(BgL_carzd21626zd2_1098))
																									{	/* Eval/evmodule.scm 248 */
																										if (BgL_classpz00_50)
																											{	/* Eval/evmodule.scm 248 */
																												BGl_evcompilezd2errorzd2zz__evcompilez00
																													(BgL_locz00_49,
																													BGl_symbol3109z00zz__evmodulez00,
																													BGl_string3125z00zz__evmodulez00,
																													BgL_clausez00_48);
																											}
																										else
																											{	/* Eval/evmodule.scm 248 */
																												BFALSE;
																											}
																									}
																								else
																									{	/* Eval/evmodule.scm 248 */
																										obj_t
																											BgL_carzd21655zd2_1102;
																										BgL_carzd21655zd2_1102 =
																											CAR(BgL_sz00_1024);
																										if (SYMBOLP
																											(BgL_carzd21655zd2_1102))
																											{
																												obj_t BgL_sz00_4411;

																												BgL_sz00_4411 =
																													BgL_carzd21655zd2_1102;
																												BgL_sz00_1041 =
																													BgL_sz00_4411;
																												goto
																													BgL_tagzd21395zd2_1042;
																											}
																										else
																											{	/* Eval/evmodule.scm 248 */
																												BGl_evcompilezd2errorzd2zz__evcompilez00
																													(BgL_locz00_49,
																													BGl_symbol3109z00zz__evmodulez00,
																													BGl_string3118z00zz__evmodulez00,
																													BgL_clausez00_48);
																											}
																									}
																							}
																						else
																							{	/* Eval/evmodule.scm 248 */
																								obj_t BgL_carzd21664zd2_1109;

																								BgL_carzd21664zd2_1109 =
																									CAR(BgL_sz00_1024);
																								if (SYMBOLP
																									(BgL_carzd21664zd2_1109))
																									{
																										obj_t BgL_sz00_4416;

																										BgL_sz00_4416 =
																											BgL_carzd21664zd2_1109;
																										BgL_sz00_1041 =
																											BgL_sz00_4416;
																										goto BgL_tagzd21395zd2_1042;
																									}
																								else
																									{	/* Eval/evmodule.scm 248 */
																										BGl_evcompilezd2errorzd2zz__evcompilez00
																											(BgL_locz00_49,
																											BGl_symbol3109z00zz__evmodulez00,
																											BGl_string3118z00zz__evmodulez00,
																											BgL_clausez00_48);
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 248 */
																						obj_t BgL_carzd21671zd2_1111;

																						obj_t BgL_cdrzd21672zd2_1112;

																						BgL_carzd21671zd2_1111 =
																							CAR(BgL_sz00_1024);
																						BgL_cdrzd21672zd2_1112 =
																							CDR(BgL_sz00_1024);
																						{

																							if (
																								(BgL_carzd21671zd2_1111 ==
																									BGl_symbol3126z00zz__evmodulez00))
																								{	/* Eval/evmodule.scm 248 */
																								BgL_kapzd21673zd2_1113:
																									if (PAIRP
																										(BgL_cdrzd21672zd2_1112))
																										{	/* Eval/evmodule.scm 248 */
																											obj_t
																												BgL_carzd21675zd2_1119;
																											BgL_carzd21675zd2_1119 =
																												CAR
																												(BgL_cdrzd21672zd2_1112);
																											if (SYMBOLP
																												(BgL_carzd21675zd2_1119))
																												{	/* Eval/evmodule.scm 248 */
																													BgL_sz00_1039 =
																														BgL_carzd21675zd2_1119;
																													{	/* Eval/evmodule.scm 240 */
																														obj_t
																															BgL_idz00_1144;
																														BgL_idz00_1144 =
																															BGl_untypezd2identzd2zz__evcompilez00
																															(BgL_sz00_1039);
																														{	/* Eval/evmodule.scm 241 */
																															obj_t
																																BgL_arg2112z00_1145;
																															{	/* Eval/evmodule.scm 241 */
																																obj_t
																																	BgL_arg2113z00_1146;
																																obj_t
																																	BgL_arg2114z00_1147;
																																BgL_arg2113z00_1146
																																	=
																																	BGl_symbol3112z00zz__evmodulez00;
																																{	/* Eval/evmodule.scm 241 */
																																	obj_t
																																		BgL_arg2115z00_1148;
																																	{	/* Eval/evmodule.scm 241 */
																																		obj_t
																																			BgL_arg2119z00_1152;
																																		obj_t
																																			BgL_arg2121z00_1153;
																																		BgL_arg2119z00_1152
																																			=
																																			BGl_symbol3106z00zz__evmodulez00;
																																		{	/* Eval/evmodule.scm 241 */
																																			obj_t
																																				BgL_list2122z00_1154;
																																			BgL_list2122z00_1154
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2121z00_1153
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																																				BgL_list2122z00_1154);
																																		}
																																		BgL_arg2115z00_1148
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2119z00_1152,
																																			BgL_arg2121z00_1153);
																																	}
																																	{	/* Eval/evmodule.scm 241 */
																																		obj_t
																																			BgL_list2117z00_1150;
																																		{	/* Eval/evmodule.scm 241 */
																																			obj_t
																																				BgL_arg2118z00_1151;
																																			BgL_arg2118z00_1151
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list2117z00_1150
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2115z00_1148,
																																				BgL_arg2118z00_1151);
																																		}
																																		BgL_arg2114z00_1147
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_idz00_1144,
																																			BgL_list2117z00_1150);
																																	}
																																}
																																BgL_arg2112z00_1145
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2113z00_1146,
																																	BgL_arg2114z00_1147);
																															}
																															BGl_evalz00zz__evalz00
																																(BgL_arg2112z00_1145,
																																BgL_modz00_47);
																														}
																													}
																												}
																											else
																												{	/* Eval/evmodule.scm 248 */
																													obj_t
																														BgL_carzd21682zd2_1121;
																													BgL_carzd21682zd2_1121
																														=
																														CAR(BgL_sz00_1024);
																													if (SYMBOLP
																														(BgL_carzd21682zd2_1121))
																														{
																															obj_t
																																BgL_sz00_4439;
																															BgL_sz00_4439 =
																																BgL_carzd21682zd2_1121;
																															BgL_sz00_1041 =
																																BgL_sz00_4439;
																															goto
																																BgL_tagzd21395zd2_1042;
																														}
																													else
																														{	/* Eval/evmodule.scm 248 */
																															BGl_evcompilezd2errorzd2zz__evcompilez00
																																(BgL_locz00_49,
																																BGl_symbol3109z00zz__evmodulez00,
																																BGl_string3118z00zz__evmodulez00,
																																BgL_clausez00_48);
																														}
																												}
																										}
																									else
																										{	/* Eval/evmodule.scm 248 */
																											obj_t
																												BgL_carzd21689zd2_1123;
																											BgL_carzd21689zd2_1123 =
																												CAR(BgL_sz00_1024);
																											if (SYMBOLP
																												(BgL_carzd21689zd2_1123))
																												{
																													obj_t BgL_sz00_4444;

																													BgL_sz00_4444 =
																														BgL_carzd21689zd2_1123;
																													BgL_sz00_1041 =
																														BgL_sz00_4444;
																													goto
																														BgL_tagzd21395zd2_1042;
																												}
																											else
																												{	/* Eval/evmodule.scm 248 */
																													BGl_evcompilezd2errorzd2zz__evcompilez00
																														(BgL_locz00_49,
																														BGl_symbol3109z00zz__evmodulez00,
																														BGl_string3118z00zz__evmodulez00,
																														BgL_clausez00_48);
																												}
																										}
																								}
																							else
																								{	/* Eval/evmodule.scm 248 */
																									if (
																										(BgL_carzd21671zd2_1111 ==
																											BGl_symbol3128z00zz__evmodulez00))
																										{	/* Eval/evmodule.scm 248 */
																											goto
																												BgL_kapzd21673zd2_1113;
																										}
																									else
																										{	/* Eval/evmodule.scm 248 */
																											if (SYMBOLP
																												(BgL_carzd21671zd2_1111))
																												{
																													obj_t BgL_sz00_4450;

																													BgL_sz00_4450 =
																														BgL_carzd21671zd2_1111;
																													BgL_sz00_1041 =
																														BgL_sz00_4450;
																													goto
																														BgL_tagzd21395zd2_1042;
																												}
																											else
																												{	/* Eval/evmodule.scm 248 */
																													BGl_evcompilezd2errorzd2zz__evcompilez00
																														(BgL_locz00_49,
																														BGl_symbol3109z00zz__evmodulez00,
																														BGl_string3118z00zz__evmodulez00,
																														BgL_clausez00_48);
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
													{	/* Eval/evmodule.scm 248 */
														BGl_evcompilezd2errorzd2zz__evcompilez00
															(BgL_locz00_49, BGl_symbol3109z00zz__evmodulez00,
															BGl_string3118z00zz__evmodulez00,
															BgL_clausez00_48);
													}
											}
									}
									{
										obj_t BgL_l1885z00_4454;

										BgL_l1885z00_4454 = CDR(BgL_l1885z00_1017);
										BgL_l1885z00_1017 = BgL_l1885z00_4454;
										goto BgL_zc3anonymousza32043ze3z83_1018;
									}
								}
							else
								{	/* Eval/evmodule.scm 251 */
									if (NULLP(BgL_l1885z00_1017))
										{	/* Eval/evmodule.scm 251 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 251 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3108z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1885z00_1017);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 249 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_49,
							BGl_symbol3109z00zz__evmodulez00,
							BGl_string3118z00zz__evmodulez00, BgL_clausez00_48);
					}
			}
		}
	}



/* evmodule-export */
	obj_t BGl_evmodulezd2exportzd2zz__evmodulez00(obj_t BgL_modz00_53,
		obj_t BgL_clausez00_54, obj_t BgL_locz00_55, bool_t BgL_classpz00_56)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 262 */
			{
				obj_t BgL_sz00_1180;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_54))
					{	/* Eval/evmodule.scm 302 */
						obj_t BgL_g1896z00_1171;

						{	/* Eval/evmodule.scm 302 */
							obj_t BgL_pairz00_2611;

							if (PAIRP(BgL_clausez00_54))
								{	/* Eval/evmodule.scm 302 */
									BgL_pairz00_2611 = BgL_clausez00_54;
								}
							else
								{
									obj_t BgL_auxz00_4464;

									BgL_auxz00_4464 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 12064)),
										BGl_string3135z00zz__evmodulez00,
										BGl_string3103z00zz__evmodulez00, BgL_clausez00_54);
									FAILURE(BgL_auxz00_4464, BFALSE, BFALSE);
								}
							BgL_g1896z00_1171 = CDR(BgL_pairz00_2611);
						}
						{
							obj_t BgL_l1894z00_1173;

							BgL_l1894z00_1173 = BgL_g1896z00_1171;
						BgL_zc3anonymousza32137ze3z83_1174:
							if (PAIRP(BgL_l1894z00_1173))
								{	/* Eval/evmodule.scm 302 */
									BgL_sz00_1180 = CAR(BgL_l1894z00_1173);
									{
										obj_t BgL_sz00_1197;

										obj_t BgL_sz00_1195;

										obj_t BgL_claz00_1189;

										obj_t BgL_clausesz00_1190;

										obj_t BgL_claz00_1186;

										obj_t BgL_clausesz00_1187;

										obj_t BgL_claz00_1183;

										obj_t BgL_clausesz00_1184;

										if (SYMBOLP(BgL_sz00_1180))
											{	/* Eval/evmodule.scm 299 */
												{	/* Eval/evmodule.scm 266 */
													obj_t BgL_idz00_1289;

													BgL_idz00_1289 =
														BGl_untypezd2identzd2zz__evcompilez00
														(BgL_sz00_1180);
													{	/* Eval/evmodule.scm 267 */
														obj_t BgL_arg2134z00_2673;

														BgL_arg2134z00_2673 =
															MAKE_PAIR(BgL_idz00_1289,
															STRUCT_REF(BgL_modz00_53, (int) (((long) 4))));
														{	/* Eval/evmodule.scm 267 */
															int BgL_auxz00_4477;

															BgL_auxz00_4477 = (int) (((long) 4));
															STRUCT_SET(BgL_modz00_53, BgL_auxz00_4477,
																BgL_arg2134z00_2673);
													}}
													{	/* Eval/evmodule.scm 268 */
														obj_t BgL_arg2196z00_1290;

														{	/* Eval/evmodule.scm 268 */
															obj_t BgL_arg2197z00_1291;

															obj_t BgL_arg2198z00_1292;

															BgL_arg2197z00_1291 =
																BGl_symbol3112z00zz__evmodulez00;
															{	/* Eval/evmodule.scm 268 */
																obj_t BgL_arg2199z00_1293;

																{	/* Eval/evmodule.scm 268 */
																	obj_t BgL_arg2204z00_1297;

																	obj_t BgL_arg2205z00_1298;

																	BgL_arg2204z00_1297 =
																		BGl_symbol3106z00zz__evmodulez00;
																	{	/* Eval/evmodule.scm 268 */
																		obj_t BgL_list2206z00_1299;

																		BgL_list2206z00_1299 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2205z00_1298 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																			BgL_list2206z00_1299);
																	}
																	BgL_arg2199z00_1293 =
																		MAKE_PAIR(BgL_arg2204z00_1297,
																		BgL_arg2205z00_1298);
																}
																{	/* Eval/evmodule.scm 268 */
																	obj_t BgL_list2201z00_1295;

																	{	/* Eval/evmodule.scm 268 */
																		obj_t BgL_arg2203z00_1296;

																		BgL_arg2203z00_1296 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2201z00_1295 =
																			MAKE_PAIR(BgL_arg2199z00_1293,
																			BgL_arg2203z00_1296);
																	}
																	BgL_arg2198z00_1292 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_idz00_1289, BgL_list2201z00_1295);
															}}
															BgL_arg2196z00_1290 =
																MAKE_PAIR(BgL_arg2197z00_1291,
																BgL_arg2198z00_1292);
														}
														BGl_evalz00zz__evalz00(BgL_arg2196z00_1290,
															BgL_modz00_53);
											}}}
										else
											{	/* Eval/evmodule.scm 299 */
												if (PAIRP(BgL_sz00_1180))
													{	/* Eval/evmodule.scm 299 */
														obj_t BgL_cdrzd21738zd2_1203;

														BgL_cdrzd21738zd2_1203 = CDR(BgL_sz00_1180);
														if (
															(CAR(BgL_sz00_1180) ==
																BGl_symbol3114z00zz__evmodulez00))
															{	/* Eval/evmodule.scm 299 */
																if (PAIRP(BgL_cdrzd21738zd2_1203))
																	{	/* Eval/evmodule.scm 299 */
																		obj_t BgL_carzd21741zd2_1206;

																		BgL_carzd21741zd2_1206 =
																			CAR(BgL_cdrzd21738zd2_1203);
																		if (SYMBOLP(BgL_carzd21741zd2_1206))
																			{	/* Eval/evmodule.scm 299 */
																				BgL_claz00_1183 =
																					BgL_carzd21741zd2_1206;
																				BgL_clausesz00_1184 =
																					CDR(BgL_cdrzd21738zd2_1203);
																				if (BgL_classpz00_56)
																					{	/* Eval/evmodule.scm 271 */
																						obj_t BgL_identsz00_1300;

																						{	/* Eval/evmodule.scm 271 */
																							obj_t BgL_auxz00_4509;

																							obj_t BgL_auxz00_4500;

																							if (PAIRP(BgL_clausez00_54))
																								{	/* Eval/evmodule.scm 271 */
																									BgL_auxz00_4509 =
																										BgL_clausez00_54;
																								}
																							else
																								{
																									obj_t BgL_auxz00_4512;

																									BgL_auxz00_4512 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3071z00zz__evmodulez00,
																										BINT(((long) 10875)),
																										BGl_string3131z00zz__evmodulez00,
																										BGl_string3103z00zz__evmodulez00,
																										BgL_clausez00_54);
																									FAILURE(BgL_auxz00_4512,
																										BFALSE, BFALSE);
																								}
																							{	/* Eval/evmodule.scm 271 */
																								bool_t BgL_testz00_4501;

																								if (PAIRP(BgL_clausesz00_1184))
																									{	/* Eval/evmodule.scm 271 */
																										BgL_testz00_4501 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Eval/evmodule.scm 271 */
																										BgL_testz00_4501 =
																											NULLP
																											(BgL_clausesz00_1184);
																									}
																								if (BgL_testz00_4501)
																									{	/* Eval/evmodule.scm 271 */
																										BgL_auxz00_4500 =
																											BgL_clausesz00_1184;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4505;

																										BgL_auxz00_4505 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3071z00zz__evmodulez00,
																											BINT(((long) 10867)),
																											BGl_string3131z00zz__evmodulez00,
																											BGl_string3117z00zz__evmodulez00,
																											BgL_clausesz00_1184);
																										FAILURE(BgL_auxz00_4505,
																											BFALSE, BFALSE);
																							}}
																							BgL_identsz00_1300 =
																								BGl_evalzd2classzd2zz__evobjectz00
																								(BgL_claz00_1183, ((bool_t) 0),
																								BgL_auxz00_4500,
																								BgL_auxz00_4509, BgL_modz00_53);
																						}
																						{
																							obj_t BgL_l1888z00_1302;

																							BgL_l1888z00_1302 =
																								BgL_identsz00_1300;
																						BgL_zc3anonymousza32207ze3z83_1303:
																							if (PAIRP(BgL_l1888z00_1302))
																								{	/* Eval/evmodule.scm 272 */
																									{	/* Eval/evmodule.scm 272 */
																										obj_t BgL_iz00_1305;

																										BgL_iz00_1305 =
																											CAR(BgL_l1888z00_1302);
																										{	/* Eval/evmodule.scm 272 */
																											obj_t BgL_arg2134z00_2687;

																											BgL_arg2134z00_2687 =
																												MAKE_PAIR(BgL_iz00_1305,
																												STRUCT_REF
																												(BgL_modz00_53,
																													(int) (((long) 4))));
																											{	/* Eval/evmodule.scm 272 */
																												int BgL_auxz00_4523;

																												BgL_auxz00_4523 =
																													(int) (((long) 4));
																												STRUCT_SET
																													(BgL_modz00_53,
																													BgL_auxz00_4523,
																													BgL_arg2134z00_2687);
																									}}}
																									{
																										obj_t BgL_l1888z00_4526;

																										BgL_l1888z00_4526 =
																											CDR(BgL_l1888z00_1302);
																										BgL_l1888z00_1302 =
																											BgL_l1888z00_4526;
																										goto
																											BgL_zc3anonymousza32207ze3z83_1303;
																									}
																								}
																							else
																								{	/* Eval/evmodule.scm 272 */
																									if (NULLP(BgL_l1888z00_1302))
																										{	/* Eval/evmodule.scm 272 */
																											BTRUE;
																										}
																									else
																										{	/* Eval/evmodule.scm 272 */
																											BGl_errorz00zz__errorz00
																												(BGl_string3108z00zz__evmodulez00,
																												BGl_string3101z00zz__evmodulez00,
																												BgL_l1888z00_1302);
																										}
																								}
																						}
																					}
																				else
																					{	/* Eval/evmodule.scm 270 */
																						BFALSE;
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 299 */
																				obj_t BgL_carzd21785zd2_1210;

																				BgL_carzd21785zd2_1210 =
																					CAR(BgL_sz00_1180);
																				if (SYMBOLP(BgL_carzd21785zd2_1210))
																					{	/* Eval/evmodule.scm 299 */
																						BgL_sz00_1197 =
																							BgL_carzd21785zd2_1210;
																					BgL_tagzd21726zd2_1198:
																						{	/* Eval/evmodule.scm 293 */
																							obj_t BgL_idz00_1338;

																							BgL_idz00_1338 =
																								BGl_untypezd2identzd2zz__evcompilez00
																								(BgL_sz00_1197);
																							{	/* Eval/evmodule.scm 294 */
																								obj_t BgL_arg2134z00_2745;

																								BgL_arg2134z00_2745 =
																									MAKE_PAIR(BgL_idz00_1338,
																									STRUCT_REF(BgL_modz00_53,
																										(int) (((long) 4))));
																								{	/* Eval/evmodule.scm 294 */
																									int BgL_auxz00_4539;

																									BgL_auxz00_4539 =
																										(int) (((long) 4));
																									STRUCT_SET(BgL_modz00_53,
																										BgL_auxz00_4539,
																										BgL_arg2134z00_2745);
																							}}
																							{	/* Eval/evmodule.scm 295 */
																								obj_t BgL_arg2237z00_1339;

																								{	/* Eval/evmodule.scm 295 */
																									obj_t BgL_arg2238z00_1340;

																									obj_t BgL_arg2239z00_1341;

																									BgL_arg2238z00_1340 =
																										BGl_symbol3112z00zz__evmodulez00;
																									{	/* Eval/evmodule.scm 295 */
																										obj_t BgL_arg2240z00_1342;

																										{	/* Eval/evmodule.scm 295 */
																											obj_t BgL_arg2245z00_1346;

																											obj_t BgL_arg2246z00_1347;

																											BgL_arg2245z00_1346 =
																												BGl_symbol3106z00zz__evmodulez00;
																											{	/* Eval/evmodule.scm 295 */
																												obj_t
																													BgL_list2247z00_1348;
																												BgL_list2247z00_1348 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2246z00_1347 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																													BgL_list2247z00_1348);
																											}
																											BgL_arg2240z00_1342 =
																												MAKE_PAIR
																												(BgL_arg2245z00_1346,
																												BgL_arg2246z00_1347);
																										}
																										{	/* Eval/evmodule.scm 295 */
																											obj_t
																												BgL_list2243z00_1344;
																											{	/* Eval/evmodule.scm 295 */
																												obj_t
																													BgL_arg2244z00_1345;
																												BgL_arg2244z00_1345 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list2243z00_1344 =
																													MAKE_PAIR
																													(BgL_arg2240z00_1342,
																													BgL_arg2244z00_1345);
																											}
																											BgL_arg2239z00_1341 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_1338,
																												BgL_list2243z00_1344);
																									}}
																									BgL_arg2237z00_1339 =
																										MAKE_PAIR
																										(BgL_arg2238z00_1340,
																										BgL_arg2239z00_1341);
																								}
																								BGl_evalz00zz__evalz00
																									(BgL_arg2237z00_1339,
																									BgL_modz00_53);
																					}}}
																				else
																					{	/* Eval/evmodule.scm 299 */
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																							(BgL_locz00_55,
																							BGl_string3110z00zz__evmodulez00,
																							BGl_string3134z00zz__evmodulez00,
																							BgL_clausez00_54);
																					}
																			}
																	}
																else
																	{	/* Eval/evmodule.scm 299 */
																		obj_t BgL_carzd21809zd2_1217;

																		BgL_carzd21809zd2_1217 = CAR(BgL_sz00_1180);
																		if (SYMBOLP(BgL_carzd21809zd2_1217))
																			{
																				obj_t BgL_sz00_4554;

																				BgL_sz00_4554 = BgL_carzd21809zd2_1217;
																				BgL_sz00_1197 = BgL_sz00_4554;
																				goto BgL_tagzd21726zd2_1198;
																			}
																		else
																			{	/* Eval/evmodule.scm 299 */
																				BGl_evcompilezd2errorzd2zz__evcompilez00
																					(BgL_locz00_55,
																					BGl_string3110z00zz__evmodulez00,
																					BGl_string3134z00zz__evmodulez00,
																					BgL_clausez00_54);
																			}
																	}
															}
														else
															{	/* Eval/evmodule.scm 299 */
																if (
																	(CAR(BgL_sz00_1180) ==
																		BGl_symbol3119z00zz__evmodulez00))
																	{	/* Eval/evmodule.scm 299 */
																		if (PAIRP(BgL_cdrzd21738zd2_1203))
																			{	/* Eval/evmodule.scm 299 */
																				obj_t BgL_carzd21823zd2_1222;

																				BgL_carzd21823zd2_1222 =
																					CAR(BgL_cdrzd21738zd2_1203);
																				if (SYMBOLP(BgL_carzd21823zd2_1222))
																					{	/* Eval/evmodule.scm 299 */
																						BgL_claz00_1186 =
																							BgL_carzd21823zd2_1222;
																						BgL_clausesz00_1187 =
																							CDR(BgL_cdrzd21738zd2_1203);
																						if (BgL_classpz00_56)
																							{	/* Eval/evmodule.scm 275 */
																								obj_t BgL_identsz00_1309;

																								{	/* Eval/evmodule.scm 275 */
																									obj_t BgL_auxz00_4574;

																									obj_t BgL_auxz00_4565;

																									if (PAIRP(BgL_clausez00_54))
																										{	/* Eval/evmodule.scm 275 */
																											BgL_auxz00_4574 =
																												BgL_clausez00_54;
																										}
																									else
																										{
																											obj_t BgL_auxz00_4577;

																											BgL_auxz00_4577 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3071z00zz__evmodulez00,
																												BINT(((long) 11064)),
																												BGl_string3132z00zz__evmodulez00,
																												BGl_string3103z00zz__evmodulez00,
																												BgL_clausez00_54);
																											FAILURE(BgL_auxz00_4577,
																												BFALSE, BFALSE);
																										}
																									{	/* Eval/evmodule.scm 275 */
																										bool_t BgL_testz00_4566;

																										if (PAIRP
																											(BgL_clausesz00_1187))
																											{	/* Eval/evmodule.scm 275 */
																												BgL_testz00_4566 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Eval/evmodule.scm 275 */
																												BgL_testz00_4566 =
																													NULLP
																													(BgL_clausesz00_1187);
																											}
																										if (BgL_testz00_4566)
																											{	/* Eval/evmodule.scm 275 */
																												BgL_auxz00_4565 =
																													BgL_clausesz00_1187;
																											}
																										else
																											{
																												obj_t BgL_auxz00_4570;

																												BgL_auxz00_4570 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string3071z00zz__evmodulez00,
																													BINT(((long) 11056)),
																													BGl_string3132z00zz__evmodulez00,
																													BGl_string3117z00zz__evmodulez00,
																													BgL_clausesz00_1187);
																												FAILURE(BgL_auxz00_4570,
																													BFALSE, BFALSE);
																									}}
																									BgL_identsz00_1309 =
																										BGl_evalzd2classzd2zz__evobjectz00
																										(BgL_claz00_1186,
																										((bool_t) 0),
																										BgL_auxz00_4565,
																										BgL_auxz00_4574,
																										BgL_modz00_53);
																								}
																								{
																									obj_t BgL_l1890z00_1311;

																									BgL_l1890z00_1311 =
																										BgL_identsz00_1309;
																								BgL_zc3anonymousza32211ze3z83_1312:
																									if (PAIRP
																										(BgL_l1890z00_1311))
																										{	/* Eval/evmodule.scm 276 */
																											{	/* Eval/evmodule.scm 276 */
																												obj_t BgL_iz00_1314;

																												BgL_iz00_1314 =
																													CAR
																													(BgL_l1890z00_1311);
																												{	/* Eval/evmodule.scm 276 */
																													obj_t
																														BgL_arg2134z00_2703;
																													BgL_arg2134z00_2703 =
																														MAKE_PAIR
																														(BgL_iz00_1314,
																														STRUCT_REF
																														(BgL_modz00_53,
																															(int) (((long)
																																	4))));
																													{	/* Eval/evmodule.scm 276 */
																														int BgL_auxz00_4588;

																														BgL_auxz00_4588 =
																															(int) (((long)
																																4));
																														STRUCT_SET
																															(BgL_modz00_53,
																															BgL_auxz00_4588,
																															BgL_arg2134z00_2703);
																											}}}
																											{
																												obj_t BgL_l1890z00_4591;

																												BgL_l1890z00_4591 =
																													CDR
																													(BgL_l1890z00_1311);
																												BgL_l1890z00_1311 =
																													BgL_l1890z00_4591;
																												goto
																													BgL_zc3anonymousza32211ze3z83_1312;
																											}
																										}
																									else
																										{	/* Eval/evmodule.scm 276 */
																											if (NULLP
																												(BgL_l1890z00_1311))
																												{	/* Eval/evmodule.scm 276 */
																													BTRUE;
																												}
																											else
																												{	/* Eval/evmodule.scm 276 */
																													BGl_errorz00zz__errorz00
																														(BGl_string3108z00zz__evmodulez00,
																														BGl_string3101z00zz__evmodulez00,
																														BgL_l1890z00_1311);
																												}
																										}
																								}
																							}
																						else
																							{	/* Eval/evmodule.scm 274 */
																								BFALSE;
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 299 */
																						obj_t BgL_carzd21862zd2_1226;

																						BgL_carzd21862zd2_1226 =
																							CAR(BgL_sz00_1180);
																						if (SYMBOLP(BgL_carzd21862zd2_1226))
																							{
																								obj_t BgL_sz00_4600;

																								BgL_sz00_4600 =
																									BgL_carzd21862zd2_1226;
																								BgL_sz00_1197 = BgL_sz00_4600;
																								goto BgL_tagzd21726zd2_1198;
																							}
																						else
																							{	/* Eval/evmodule.scm 299 */
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_55,
																									BGl_string3110z00zz__evmodulez00,
																									BGl_string3134z00zz__evmodulez00,
																									BgL_clausez00_54);
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 299 */
																				obj_t BgL_carzd21881zd2_1233;

																				BgL_carzd21881zd2_1233 =
																					CAR(BgL_sz00_1180);
																				if (SYMBOLP(BgL_carzd21881zd2_1233))
																					{
																						obj_t BgL_sz00_4605;

																						BgL_sz00_4605 =
																							BgL_carzd21881zd2_1233;
																						BgL_sz00_1197 = BgL_sz00_4605;
																						goto BgL_tagzd21726zd2_1198;
																					}
																				else
																					{	/* Eval/evmodule.scm 299 */
																						BGl_evcompilezd2errorzd2zz__evcompilez00
																							(BgL_locz00_55,
																							BGl_string3110z00zz__evmodulez00,
																							BGl_string3134z00zz__evmodulez00,
																							BgL_clausez00_54);
																					}
																			}
																	}
																else
																	{	/* Eval/evmodule.scm 299 */
																		obj_t BgL_cdrzd21892zd2_1235;

																		BgL_cdrzd21892zd2_1235 = CDR(BgL_sz00_1180);
																		if (
																			(CAR(BgL_sz00_1180) ==
																				BGl_symbol3121z00zz__evmodulez00))
																			{	/* Eval/evmodule.scm 299 */
																				if (PAIRP(BgL_cdrzd21892zd2_1235))
																					{	/* Eval/evmodule.scm 299 */
																						obj_t BgL_carzd21895zd2_1238;

																						BgL_carzd21895zd2_1238 =
																							CAR(BgL_cdrzd21892zd2_1235);
																						if (SYMBOLP(BgL_carzd21895zd2_1238))
																							{	/* Eval/evmodule.scm 299 */
																								BgL_claz00_1189 =
																									BgL_carzd21895zd2_1238;
																								BgL_clausesz00_1190 =
																									CDR(BgL_cdrzd21892zd2_1235);
																								if (BgL_classpz00_56)
																									{	/* Eval/evmodule.scm 279 */
																										obj_t BgL_identsz00_1318;

																										{	/* Eval/evmodule.scm 279 */
																											obj_t BgL_auxz00_4626;

																											obj_t BgL_auxz00_4617;

																											if (PAIRP
																												(BgL_clausez00_54))
																												{	/* Eval/evmodule.scm 279 */
																													BgL_auxz00_4626 =
																														BgL_clausez00_54;
																												}
																											else
																												{
																													obj_t BgL_auxz00_4629;

																													BgL_auxz00_4629 =
																														BGl_typezd2errorzd2zz__errorz00
																														(BGl_string3071z00zz__evmodulez00,
																														BINT(((long)
																																11256)),
																														BGl_string3133z00zz__evmodulez00,
																														BGl_string3103z00zz__evmodulez00,
																														BgL_clausez00_54);
																													FAILURE
																														(BgL_auxz00_4629,
																														BFALSE, BFALSE);
																												}
																											{	/* Eval/evmodule.scm 279 */
																												bool_t BgL_testz00_4618;

																												if (PAIRP
																													(BgL_clausesz00_1190))
																													{	/* Eval/evmodule.scm 279 */
																														BgL_testz00_4618 =
																															((bool_t) 1);
																													}
																												else
																													{	/* Eval/evmodule.scm 279 */
																														BgL_testz00_4618 =
																															NULLP
																															(BgL_clausesz00_1190);
																													}
																												if (BgL_testz00_4618)
																													{	/* Eval/evmodule.scm 279 */
																														BgL_auxz00_4617 =
																															BgL_clausesz00_1190;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_4622;
																														BgL_auxz00_4622 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3071z00zz__evmodulez00,
																															BINT(((long)
																																	11248)),
																															BGl_string3133z00zz__evmodulez00,
																															BGl_string3117z00zz__evmodulez00,
																															BgL_clausesz00_1190);
																														FAILURE
																															(BgL_auxz00_4622,
																															BFALSE, BFALSE);
																											}}
																											BgL_identsz00_1318 =
																												BGl_evalzd2classzd2zz__evobjectz00
																												(BgL_claz00_1189,
																												((bool_t) 1),
																												BgL_auxz00_4617,
																												BgL_auxz00_4626,
																												BgL_modz00_53);
																										}
																										{
																											obj_t BgL_l1892z00_1320;

																											BgL_l1892z00_1320 =
																												BgL_identsz00_1318;
																										BgL_zc3anonymousza32215ze3z83_1321:
																											if (PAIRP
																												(BgL_l1892z00_1320))
																												{	/* Eval/evmodule.scm 280 */
																													{	/* Eval/evmodule.scm 280 */
																														obj_t BgL_iz00_1323;

																														BgL_iz00_1323 =
																															CAR
																															(BgL_l1892z00_1320);
																														{	/* Eval/evmodule.scm 280 */
																															obj_t
																																BgL_arg2134z00_2719;
																															BgL_arg2134z00_2719
																																=
																																MAKE_PAIR
																																(BgL_iz00_1323,
																																STRUCT_REF
																																(BgL_modz00_53,
																																	(int) (((long)
																																			4))));
																															{	/* Eval/evmodule.scm 280 */
																																int
																																	BgL_auxz00_4640;
																																BgL_auxz00_4640
																																	=
																																	(int) (((long)
																																		4));
																																STRUCT_SET
																																	(BgL_modz00_53,
																																	BgL_auxz00_4640,
																																	BgL_arg2134z00_2719);
																													}}}
																													{
																														obj_t
																															BgL_l1892z00_4643;
																														BgL_l1892z00_4643 =
																															CDR
																															(BgL_l1892z00_1320);
																														BgL_l1892z00_1320 =
																															BgL_l1892z00_4643;
																														goto
																															BgL_zc3anonymousza32215ze3z83_1321;
																													}
																												}
																											else
																												{	/* Eval/evmodule.scm 280 */
																													if (NULLP
																														(BgL_l1892z00_1320))
																														{	/* Eval/evmodule.scm 280 */
																															BTRUE;
																														}
																													else
																														{	/* Eval/evmodule.scm 280 */
																															BGl_errorz00zz__errorz00
																																(BGl_string3108z00zz__evmodulez00,
																																BGl_string3101z00zz__evmodulez00,
																																BgL_l1892z00_1320);
																														}
																												}
																										}
																									}
																								else
																									{	/* Eval/evmodule.scm 278 */
																										BFALSE;
																									}
																							}
																						else
																							{	/* Eval/evmodule.scm 299 */
																								obj_t BgL_carzd21929zd2_1242;

																								BgL_carzd21929zd2_1242 =
																									CAR(BgL_sz00_1180);
																								if (SYMBOLP
																									(BgL_carzd21929zd2_1242))
																									{
																										obj_t BgL_sz00_4652;

																										BgL_sz00_4652 =
																											BgL_carzd21929zd2_1242;
																										BgL_sz00_1197 =
																											BgL_sz00_4652;
																										goto BgL_tagzd21726zd2_1198;
																									}
																								else
																									{	/* Eval/evmodule.scm 299 */
																										BGl_evcompilezd2errorzd2zz__evcompilez00
																											(BgL_locz00_55,
																											BGl_string3110z00zz__evmodulez00,
																											BGl_string3134z00zz__evmodulez00,
																											BgL_clausez00_54);
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 299 */
																						obj_t BgL_carzd21943zd2_1249;

																						BgL_carzd21943zd2_1249 =
																							CAR(BgL_sz00_1180);
																						if (SYMBOLP(BgL_carzd21943zd2_1249))
																							{
																								obj_t BgL_sz00_4657;

																								BgL_sz00_4657 =
																									BgL_carzd21943zd2_1249;
																								BgL_sz00_1197 = BgL_sz00_4657;
																								goto BgL_tagzd21726zd2_1198;
																							}
																						else
																							{	/* Eval/evmodule.scm 299 */
																								BGl_evcompilezd2errorzd2zz__evcompilez00
																									(BgL_locz00_55,
																									BGl_string3110z00zz__evmodulez00,
																									BGl_string3134z00zz__evmodulez00,
																									BgL_clausez00_54);
																							}
																					}
																			}
																		else
																			{	/* Eval/evmodule.scm 299 */
																				if (
																					(CAR(BgL_sz00_1180) ==
																						BGl_symbol3123z00zz__evmodulez00))
																					{	/* Eval/evmodule.scm 299 */
																						if (PAIRP(BgL_cdrzd21892zd2_1235))
																							{	/* Eval/evmodule.scm 299 */
																								obj_t BgL_carzd21957zd2_1254;

																								BgL_carzd21957zd2_1254 =
																									CAR(BgL_cdrzd21892zd2_1235);
																								if (SYMBOLP
																									(BgL_carzd21957zd2_1254))
																									{	/* Eval/evmodule.scm 299 */
																										if (BgL_classpz00_56)
																											{	/* Eval/evmodule.scm 299 */
																												BGl_evcompilezd2errorzd2zz__evcompilez00
																													(BgL_locz00_55,
																													BGl_symbol3109z00zz__evmodulez00,
																													BGl_string3125z00zz__evmodulez00,
																													BgL_clausez00_54);
																											}
																										else
																											{	/* Eval/evmodule.scm 299 */
																												BFALSE;
																											}
																									}
																								else
																									{	/* Eval/evmodule.scm 299 */
																										obj_t
																											BgL_carzd21986zd2_1258;
																										BgL_carzd21986zd2_1258 =
																											CAR(BgL_sz00_1180);
																										if (SYMBOLP
																											(BgL_carzd21986zd2_1258))
																											{
																												obj_t BgL_sz00_4672;

																												BgL_sz00_4672 =
																													BgL_carzd21986zd2_1258;
																												BgL_sz00_1197 =
																													BgL_sz00_4672;
																												goto
																													BgL_tagzd21726zd2_1198;
																											}
																										else
																											{	/* Eval/evmodule.scm 299 */
																												BGl_evcompilezd2errorzd2zz__evcompilez00
																													(BgL_locz00_55,
																													BGl_string3110z00zz__evmodulez00,
																													BGl_string3134z00zz__evmodulez00,
																													BgL_clausez00_54);
																											}
																									}
																							}
																						else
																							{	/* Eval/evmodule.scm 299 */
																								obj_t BgL_carzd21995zd2_1265;

																								BgL_carzd21995zd2_1265 =
																									CAR(BgL_sz00_1180);
																								if (SYMBOLP
																									(BgL_carzd21995zd2_1265))
																									{
																										obj_t BgL_sz00_4677;

																										BgL_sz00_4677 =
																											BgL_carzd21995zd2_1265;
																										BgL_sz00_1197 =
																											BgL_sz00_4677;
																										goto BgL_tagzd21726zd2_1198;
																									}
																								else
																									{	/* Eval/evmodule.scm 299 */
																										BGl_evcompilezd2errorzd2zz__evcompilez00
																											(BgL_locz00_55,
																											BGl_string3110z00zz__evmodulez00,
																											BGl_string3134z00zz__evmodulez00,
																											BgL_clausez00_54);
																									}
																							}
																					}
																				else
																					{	/* Eval/evmodule.scm 299 */
																						obj_t BgL_carzd22002zd2_1267;

																						obj_t BgL_cdrzd22003zd2_1268;

																						BgL_carzd22002zd2_1267 =
																							CAR(BgL_sz00_1180);
																						BgL_cdrzd22003zd2_1268 =
																							CDR(BgL_sz00_1180);
																						{

																							if (
																								(BgL_carzd22002zd2_1267 ==
																									BGl_symbol3126z00zz__evmodulez00))
																								{	/* Eval/evmodule.scm 299 */
																								BgL_kapzd22004zd2_1269:
																									if (PAIRP
																										(BgL_cdrzd22003zd2_1268))
																										{	/* Eval/evmodule.scm 299 */
																											obj_t
																												BgL_carzd22006zd2_1275;
																											BgL_carzd22006zd2_1275 =
																												CAR
																												(BgL_cdrzd22003zd2_1268);
																											if (SYMBOLP
																												(BgL_carzd22006zd2_1275))
																												{	/* Eval/evmodule.scm 299 */
																													BgL_sz00_1195 =
																														BgL_carzd22006zd2_1275;
																													{	/* Eval/evmodule.scm 289 */
																														obj_t
																															BgL_idz00_1327;
																														BgL_idz00_1327 =
																															BGl_untypezd2identzd2zz__evcompilez00
																															(BgL_sz00_1195);
																														{	/* Eval/evmodule.scm 290 */
																															obj_t
																																BgL_arg2134z00_2733;
																															BgL_arg2134z00_2733
																																=
																																MAKE_PAIR
																																(BgL_idz00_1327,
																																STRUCT_REF
																																(BgL_modz00_53,
																																	(int) (((long)
																																			4))));
																															{	/* Eval/evmodule.scm 290 */
																																int
																																	BgL_auxz00_4692;
																																BgL_auxz00_4692
																																	=
																																	(int) (((long)
																																		4));
																																STRUCT_SET
																																	(BgL_modz00_53,
																																	BgL_auxz00_4692,
																																	BgL_arg2134z00_2733);
																														}}
																														{	/* Eval/evmodule.scm 291 */
																															obj_t
																																BgL_arg2222z00_1328;
																															{	/* Eval/evmodule.scm 291 */
																																obj_t
																																	BgL_arg2223z00_1329;
																																obj_t
																																	BgL_arg2224z00_1330;
																																BgL_arg2223z00_1329
																																	=
																																	BGl_symbol3112z00zz__evmodulez00;
																																{	/* Eval/evmodule.scm 291 */
																																	obj_t
																																		BgL_arg2226z00_1331;
																																	{	/* Eval/evmodule.scm 291 */
																																		obj_t
																																			BgL_arg2234z00_1335;
																																		obj_t
																																			BgL_arg2235z00_1336;
																																		BgL_arg2234z00_1335
																																			=
																																			BGl_symbol3106z00zz__evmodulez00;
																																		{	/* Eval/evmodule.scm 291 */
																																			obj_t
																																				BgL_list2236z00_1337;
																																			BgL_list2236z00_1337
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2235z00_1336
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BGl_evmodulezd2uninitializa7edz75zz__evmodulez00,
																																				BgL_list2236z00_1337);
																																		}
																																		BgL_arg2226z00_1331
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2234z00_1335,
																																			BgL_arg2235z00_1336);
																																	}
																																	{	/* Eval/evmodule.scm 291 */
																																		obj_t
																																			BgL_list2228z00_1333;
																																		{	/* Eval/evmodule.scm 291 */
																																			obj_t
																																				BgL_arg2233z00_1334;
																																			BgL_arg2233z00_1334
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list2228z00_1333
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2226z00_1331,
																																				BgL_arg2233z00_1334);
																																		}
																																		BgL_arg2224z00_1330
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_idz00_1327,
																																			BgL_list2228z00_1333);
																																}}
																																BgL_arg2222z00_1328
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2223z00_1329,
																																	BgL_arg2224z00_1330);
																															}
																															BGl_evalz00zz__evalz00
																																(BgL_arg2222z00_1328,
																																BgL_modz00_53);
																												}}}
																											else
																												{	/* Eval/evmodule.scm 299 */
																													obj_t
																														BgL_carzd22013zd2_1277;
																													BgL_carzd22013zd2_1277
																														=
																														CAR(BgL_sz00_1180);
																													if (SYMBOLP
																														(BgL_carzd22013zd2_1277))
																														{
																															obj_t
																																BgL_sz00_4706;
																															BgL_sz00_4706 =
																																BgL_carzd22013zd2_1277;
																															BgL_sz00_1197 =
																																BgL_sz00_4706;
																															goto
																																BgL_tagzd21726zd2_1198;
																														}
																													else
																														{	/* Eval/evmodule.scm 299 */
																															BGl_evcompilezd2errorzd2zz__evcompilez00
																																(BgL_locz00_55,
																																BGl_string3110z00zz__evmodulez00,
																																BGl_string3134z00zz__evmodulez00,
																																BgL_clausez00_54);
																														}
																												}
																										}
																									else
																										{	/* Eval/evmodule.scm 299 */
																											obj_t
																												BgL_carzd22020zd2_1279;
																											BgL_carzd22020zd2_1279 =
																												CAR(BgL_sz00_1180);
																											if (SYMBOLP
																												(BgL_carzd22020zd2_1279))
																												{
																													obj_t BgL_sz00_4711;

																													BgL_sz00_4711 =
																														BgL_carzd22020zd2_1279;
																													BgL_sz00_1197 =
																														BgL_sz00_4711;
																													goto
																														BgL_tagzd21726zd2_1198;
																												}
																											else
																												{	/* Eval/evmodule.scm 299 */
																													BGl_evcompilezd2errorzd2zz__evcompilez00
																														(BgL_locz00_55,
																														BGl_string3110z00zz__evmodulez00,
																														BGl_string3134z00zz__evmodulez00,
																														BgL_clausez00_54);
																												}
																										}
																								}
																							else
																								{	/* Eval/evmodule.scm 299 */
																									if (
																										(BgL_carzd22002zd2_1267 ==
																											BGl_symbol3128z00zz__evmodulez00))
																										{	/* Eval/evmodule.scm 299 */
																											goto
																												BgL_kapzd22004zd2_1269;
																										}
																									else
																										{	/* Eval/evmodule.scm 299 */
																											if (SYMBOLP
																												(BgL_carzd22002zd2_1267))
																												{
																													obj_t BgL_sz00_4717;

																													BgL_sz00_4717 =
																														BgL_carzd22002zd2_1267;
																													BgL_sz00_1197 =
																														BgL_sz00_4717;
																													goto
																														BgL_tagzd21726zd2_1198;
																												}
																											else
																												{	/* Eval/evmodule.scm 299 */
																													BGl_evcompilezd2errorzd2zz__evcompilez00
																														(BgL_locz00_55,
																														BGl_string3110z00zz__evmodulez00,
																														BGl_string3134z00zz__evmodulez00,
																														BgL_clausez00_54);
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
													{	/* Eval/evmodule.scm 299 */
														BGl_evcompilezd2errorzd2zz__evcompilez00
															(BgL_locz00_55, BGl_string3110z00zz__evmodulez00,
															BGl_string3134z00zz__evmodulez00,
															BgL_clausez00_54);
													}
											}
									}
									{
										obj_t BgL_l1894z00_4721;

										BgL_l1894z00_4721 = CDR(BgL_l1894z00_1173);
										BgL_l1894z00_1173 = BgL_l1894z00_4721;
										goto BgL_zc3anonymousza32137ze3z83_1174;
									}
								}
							else
								{	/* Eval/evmodule.scm 302 */
									if (NULLP(BgL_l1894z00_1173))
										{	/* Eval/evmodule.scm 302 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 302 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3108z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1894z00_1173);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 300 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_55,
							BGl_symbol3109z00zz__evmodulez00,
							BGl_string3134z00zz__evmodulez00, BgL_clausez00_54);
					}
			}
		}
	}



/* evmodule-loadq */
	obj_t BGl_evmodulezd2loadqzd2zz__evmodulez00(obj_t BgL_filez00_63)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 332 */
			{
				obj_t BgL_pathz00_1371;

				obj_t BgL_cvz00_1372;

				{	/* Eval/evmodule.scm 345 */
					obj_t BgL_pathz00_1360;

					{	/* Eval/evmodule.scm 345 */
						obj_t BgL_auxz00_4727;

						if (STRINGP(BgL_filez00_63))
							{	/* Eval/evmodule.scm 345 */
								BgL_auxz00_4727 = BgL_filez00_63;
							}
						else
							{
								obj_t BgL_auxz00_4730;

								BgL_auxz00_4730 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 13932)),
									BGl_string3138z00zz__evmodulez00,
									BGl_string3084z00zz__evmodulez00, BgL_filez00_63);
								FAILURE(BgL_auxz00_4730, BFALSE, BFALSE);
							}
						BgL_pathz00_1360 =
							BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00
							(BgL_auxz00_4727);
					}
					{	/* Eval/evmodule.scm 346 */
						obj_t BgL_g1940z00_1361;

						BgL_g1940z00_1361 = BGl_za2loadqzd2mutexza2zd2zz__evmodulez00;
						{	/* Llib/thread.scm 201 */

							if ((((long) 0) == ((long) 0)))
								{	/* Llib/thread.scm 201 */
									bgl_mutex_lock(BgL_g1940z00_1361);
								}
							else
								{	/* Llib/thread.scm 201 */
									bgl_mutex_timed_lock(BgL_g1940z00_1361, ((long) 0));
					}}}
					{	/* Eval/evmodule.scm 347 */
						obj_t BgL_cz00_1363;

						{	/* Eval/evmodule.scm 347 */
							obj_t BgL_auxz00_4739;

							{	/* Eval/evmodule.scm 347 */
								obj_t BgL_aux2894z00_3552;

								BgL_aux2894z00_3552 =
									BGl_za2loadingzd2listza2zd2zz__evmodulez00;
								{	/* Eval/evmodule.scm 347 */
									bool_t BgL_testz00_4740;

									if (PAIRP(BgL_aux2894z00_3552))
										{	/* Eval/evmodule.scm 347 */
											BgL_testz00_4740 = ((bool_t) 1);
										}
									else
										{	/* Eval/evmodule.scm 347 */
											BgL_testz00_4740 = NULLP(BgL_aux2894z00_3552);
										}
									if (BgL_testz00_4740)
										{	/* Eval/evmodule.scm 347 */
											BgL_auxz00_4739 = BgL_aux2894z00_3552;
										}
									else
										{
											obj_t BgL_auxz00_4744;

											BgL_auxz00_4744 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 14001)),
												BGl_string3138z00zz__evmodulez00,
												BGl_string3117z00zz__evmodulez00, BgL_aux2894z00_3552);
											FAILURE(BgL_auxz00_4744, BFALSE, BFALSE);
							}}}
							BgL_cz00_1363 =
								BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_pathz00_1360,
								BgL_auxz00_4739);
						}
						if (PAIRP(BgL_cz00_1363))
							{	/* Eval/evmodule.scm 351 */
								obj_t BgL_cvz00_1365;

								BgL_cvz00_1365 = CDR(BgL_cz00_1363);
								{	/* Eval/evmodule.scm 352 */
									obj_t BgL_g1935z00_1367;

									BgL_g1935z00_1367 = BGl_za2loadqzd2mutexza2zd2zz__evmodulez00;
									{	/* Llib/thread.scm 211 */

										{	/* Llib/thread.scm 211 */
											bool_t BgL_res2770z00_2794;

											{	/* Llib/thread.scm 211 */
												obj_t BgL_cz00_2788;

												if (BGL_CONDVARP(BgL_cvz00_1365))
													{	/* Llib/thread.scm 211 */
														BgL_cz00_2788 = BgL_cvz00_1365;
													}
												else
													{
														obj_t BgL_auxz00_4754;

														BgL_auxz00_4754 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3139z00zz__evmodulez00,
															BINT(((long) 7752)),
															BGl_string3138z00zz__evmodulez00,
															BGl_string3137z00zz__evmodulez00, BgL_cvz00_1365);
														FAILURE(BgL_auxz00_4754, BFALSE, BFALSE);
													}
												if ((((long) 0) == ((long) 0)))
													{	/* Llib/thread.scm 211 */
														BgL_res2770z00_2794 =
															bgl_condvar_wait(BgL_cz00_2788,
															BgL_g1935z00_1367);
													}
												else
													{	/* Llib/thread.scm 211 */
														BgL_res2770z00_2794 =
															bgl_condvar_timed_wait(BgL_cz00_2788,
															BgL_g1935z00_1367, ((long) 0));
											}} BgL_res2770z00_2794;
								}}}
								BgL_pathz00_1371 = BgL_pathz00_1360;
								BgL_cvz00_1372 = BgL_cvz00_1365;
							BgL_zc3anonymousza32258ze3z83_1373:
								{	/* Eval/evmodule.scm 334 */
									obj_t BgL_cellz00_1374;

									BgL_cellz00_1374 =
										MAKE_PAIR(BgL_pathz00_1371, BgL_cvz00_1372);
									{	/* Eval/evmodule.scm 335 */
										obj_t BgL_val1827z00_1375;

										BgL_val1827z00_1375 =
											BGl_zc3exitza32263ze3z83zz__evmodulez00(BgL_pathz00_1371,
											BgL_cellz00_1374);
										{	/* Eval/evmodule.scm 341 */
											obj_t BgL_g1940z00_1376;

											BgL_g1940z00_1376 =
												BGl_za2loadqzd2mutexza2zd2zz__evmodulez00;
											{	/* Llib/thread.scm 201 */

												if ((((long) 0) == ((long) 0)))
													{	/* Llib/thread.scm 201 */
														bgl_mutex_lock(BgL_g1940z00_1376);
													}
												else
													{	/* Llib/thread.scm 201 */
														bgl_mutex_timed_lock(BgL_g1940z00_1376, ((long) 0));
										}}}
										{	/* Eval/evmodule.scm 342 */
											obj_t BgL_auxz00_4768;

											{	/* Eval/evmodule.scm 342 */
												obj_t BgL_aux2884z00_3542;

												BgL_aux2884z00_3542 =
													BGl_za2loadingzd2listza2zd2zz__evmodulez00;
												{	/* Eval/evmodule.scm 342 */
													bool_t BgL_testz00_4769;

													if (PAIRP(BgL_aux2884z00_3542))
														{	/* Eval/evmodule.scm 342 */
															BgL_testz00_4769 = ((bool_t) 1);
														}
													else
														{	/* Eval/evmodule.scm 342 */
															BgL_testz00_4769 = NULLP(BgL_aux2884z00_3542);
														}
													if (BgL_testz00_4769)
														{	/* Eval/evmodule.scm 342 */
															BgL_auxz00_4768 = BgL_aux2884z00_3542;
														}
													else
														{
															obj_t BgL_auxz00_4773;

															BgL_auxz00_4773 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 13789)),
																BGl_string3136z00zz__evmodulez00,
																BGl_string3117z00zz__evmodulez00,
																BgL_aux2884z00_3542);
															FAILURE(BgL_auxz00_4773, BFALSE, BFALSE);
											}}}
											BGl_za2loadingzd2listza2zd2zz__evmodulez00 =
												bgl_remq_bang(BgL_cellz00_1374, BgL_auxz00_4768);
										}
										{	/* Eval/evmodule.scm 343 */
											obj_t BgL_cz00_2802;

											if (BGL_CONDVARP(BgL_cvz00_1372))
												{	/* Eval/evmodule.scm 343 */
													BgL_cz00_2802 = BgL_cvz00_1372;
												}
											else
												{
													obj_t BgL_auxz00_4780;

													BgL_auxz00_4780 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 13842)),
														BGl_string3136z00zz__evmodulez00,
														BGl_string3137z00zz__evmodulez00, BgL_cvz00_1372);
													FAILURE(BgL_auxz00_4780, BFALSE, BFALSE);
												}
											bgl_condvar_signal(BgL_cz00_2802);
										}
										bgl_mutex_unlock(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1827z00_1375)))
											{	/* Eval/evmodule.scm 344 */
												obj_t BgL_arg2260z00_1379;

												obj_t BgL_arg2262z00_1380;

												{	/* Eval/evmodule.scm 344 */
													obj_t BgL_pairz00_2804;

													if (PAIRP(BgL_val1827z00_1375))
														{	/* Eval/evmodule.scm 344 */
															BgL_pairz00_2804 = BgL_val1827z00_1375;
														}
													else
														{
															obj_t BgL_auxz00_4791;

															BgL_auxz00_4791 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 13854)),
																BGl_string3136z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_val1827z00_1375);
															FAILURE(BgL_auxz00_4791, BFALSE, BFALSE);
														}
													BgL_arg2260z00_1379 = CAR(BgL_pairz00_2804);
												}
												BgL_arg2262z00_1380 = CDR(BgL_val1827z00_1375);
												return
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2260z00_1379, BgL_arg2262z00_1380);
											}
										else
											{	/* Eval/evmodule.scm 344 */
												return BgL_val1827z00_1375;
											}
									}
								}
							}
						else
							{	/* Eval/evmodule.scm 355 */
								obj_t BgL_arg2256z00_1369;

								{	/* Eval/evmodule.scm 355 */
									obj_t BgL_auxz00_4798;

									BgL_auxz00_4798 =
										BGl_gensymz00zz__r4_symbols_6_4z00
										(BGl_symbol3140z00zz__evmodulez00);
									BgL_arg2256z00_1369 = bgl_make_condvar(BgL_auxz00_4798);
								}
								{
									obj_t BgL_cvz00_4802;

									obj_t BgL_pathz00_4801;

									BgL_pathz00_4801 = BgL_pathz00_1360;
									BgL_cvz00_4802 = BgL_arg2256z00_1369;
									BgL_cvz00_1372 = BgL_cvz00_4802;
									BgL_pathz00_1371 = BgL_pathz00_4801;
									goto BgL_zc3anonymousza32258ze3z83_1373;
								}
							}
					}
				}
			}
		}
	}



/* <exit:2263> */
	obj_t BGl_zc3exitza32263ze3z83zz__evmodulez00(obj_t BgL_pathz00_3454,
		obj_t BgL_cellz00_3453)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 343 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1828z00_1382;

			if (SET_EXIT(BgL_an_exit1828z00_1382))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1828z00_1382 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 343 */

						PUSH_EXIT(BgL_an_exit1828z00_1382, ((long) 0));
						{	/* Eval/evmodule.scm 338 */
							obj_t BgL_val1829z00_1383;

							BGl_za2loadingzd2listza2zd2zz__evmodulez00 =
								MAKE_PAIR(BgL_cellz00_3453,
								BGl_za2loadingzd2listza2zd2zz__evmodulez00);
							bgl_mutex_unlock(BGl_za2loadqzd2mutexza2zd2zz__evmodulez00);
							{	/* Eval/eval.scm 91 */
								obj_t BgL_envz00_1385;

								BgL_envz00_1385 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Eval/eval.scm 91 */

									BgL_val1829z00_1383 =
										BGl_loadqz00zz__evalz00(BgL_pathz00_3454, BgL_envz00_1385);
							}}
							POP_EXIT();
							return BgL_val1829z00_1383;
						}
					}
				}
		}
	}



/* _evmodule-loadq */
	obj_t BGl__evmodulezd2loadqzd2zz__evmodulez00(obj_t BgL_envz00_3391,
		obj_t BgL_filez00_3392)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 332 */
			return BGl_evmodulezd2loadqzd2zz__evmodulez00(BgL_filez00_3392);
		}
	}



/* evmodule-import! */
	obj_t BGl_evmodulezd2importz12zc0zz__evmodulez00(obj_t BgL_modz00_64,
		obj_t BgL_identz00_65, obj_t BgL_pathz00_66, obj_t BgL_setz00_67,
		obj_t BgL_abasez00_68, obj_t BgL_locz00_69)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 360 */
			{	/* Eval/evmodule.scm 374 */
				obj_t BgL_mod2z00_1389;

				{	/* Eval/evmodule.scm 374 */
					obj_t BgL_idz00_2806;

					if (SYMBOLP(BgL_identz00_65))
						{	/* Eval/evmodule.scm 374 */
							BgL_idz00_2806 = BgL_identz00_65;
						}
					else
						{
							obj_t BgL_auxz00_4814;

							BgL_auxz00_4814 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3071z00zz__evmodulez00, BINT(((long) 15060)),
								BGl_string3141z00zz__evmodulez00,
								BGl_string3073z00zz__evmodulez00, BgL_identz00_65);
							FAILURE(BgL_auxz00_4814, BFALSE, BFALSE);
						}
					if (BGl_hashtablezf3zf3zz__hashz00
						(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
						{	/* Eval/evmodule.scm 374 */
							obj_t BgL_auxz00_4820;

							{	/* Eval/evmodule.scm 374 */
								obj_t BgL_aux2900z00_3558;

								BgL_aux2900z00_3558 =
									BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
								if (STRUCTP(BgL_aux2900z00_3558))
									{	/* Eval/evmodule.scm 374 */
										BgL_auxz00_4820 = BgL_aux2900z00_3558;
									}
								else
									{
										obj_t BgL_auxz00_4823;

										BgL_auxz00_4823 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3071z00zz__evmodulez00, BINT(((long) 15042)),
											BGl_string3141z00zz__evmodulez00,
											BGl_string3083z00zz__evmodulez00, BgL_aux2900z00_3558);
										FAILURE(BgL_auxz00_4823, BFALSE, BFALSE);
							}}
							BgL_mod2z00_1389 =
								BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4820,
								BgL_idz00_2806);
						}
					else
						{	/* Eval/evmodule.scm 374 */
							BgL_mod2z00_1389 = BFALSE;
						}
				}
				{	/* Eval/evmodule.scm 376 */
					bool_t BgL_testz00_4828;

					{	/* Eval/evmodule.scm 376 */
						bool_t BgL_testz00_4829;

						if (STRUCTP(BgL_mod2z00_1389))
							{	/* Eval/evmodule.scm 376 */
								obj_t BgL_auxz00_4832;

								{	/* Eval/evmodule.scm 376 */
									obj_t BgL_res2771z00_2817;

									{	/* Eval/evmodule.scm 376 */
										obj_t BgL_aux2902z00_3560;

										BgL_aux2902z00_3560 = STRUCT_KEY(BgL_mod2z00_1389);
										if (SYMBOLP(BgL_aux2902z00_3560))
											{	/* Eval/evmodule.scm 376 */
												BgL_res2771z00_2817 = BgL_aux2902z00_3560;
											}
										else
											{
												obj_t BgL_auxz00_4836;

												BgL_auxz00_4836 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 15084)),
													BGl_string3141z00zz__evmodulez00,
													BGl_string3073z00zz__evmodulez00,
													BgL_aux2902z00_3560);
												FAILURE(BgL_auxz00_4836, BFALSE, BFALSE);
									}}
									BgL_auxz00_4832 = BgL_res2771z00_2817;
								}
								BgL_testz00_4829 =
									(BgL_auxz00_4832 == BGl_symbol3066z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 376 */
								BgL_testz00_4829 = ((bool_t) 0);
							}
						if (BgL_testz00_4829)
							{	/* Eval/evmodule.scm 376 */
								BgL_testz00_4828 =
									(STRUCT_REF(BgL_mod2z00_1389,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 376 */
								BgL_testz00_4828 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4828)
						{	/* Eval/evmodule.scm 376 */
							return
								BGl_importzd2modulezd2zz__evmodulez00(BgL_modz00_64,
								BgL_setz00_67, BgL_locz00_69, BgL_mod2z00_1389);
						}
					else
						{	/* Eval/evmodule.scm 376 */
							if (PAIRP(BgL_pathz00_66))
								{	/* Eval/evmodule.scm 378 */
									{	/* Eval/evmodule.scm 383 */
										bool_t BgL_testz00_4847;

										{	/* Eval/evmodule.scm 383 */
											int BgL_arg2267z00_1394;

											BgL_arg2267z00_1394 =
												BGl_bigloozd2debugzd2modulez00zz__paramz00();
											BgL_testz00_4847 =
												((long) (BgL_arg2267z00_1394) > ((long) 0));
										}
										if (BgL_testz00_4847)
											{	/* Eval/evmodule.scm 384 */
												obj_t BgL_port1900z00_1393;

												{	/* Eval/evmodule.scm 384 */
													obj_t BgL_res2773z00_2826;

													{	/* Eval/evmodule.scm 384 */
														obj_t BgL_auxz00_4851;

														BgL_auxz00_4851 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res2773z00_2826 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_4851);
													}
													BgL_port1900z00_1393 = BgL_res2773z00_2826;
												}
												bgl_display_string(BGl_string3142z00zz__evmodulez00,
													BgL_port1900z00_1393);
												bgl_display_obj(BgL_identz00_65, BgL_port1900z00_1393);
												bgl_display_string(BGl_string3143z00zz__evmodulez00,
													BgL_port1900z00_1393);
												bgl_display_obj(BgL_pathz00_66, BgL_port1900z00_1393);
												bgl_display_string(BGl_string3144z00zz__evmodulez00,
													BgL_port1900z00_1393);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port1900z00_1393);
											}
										else
											{	/* Eval/evmodule.scm 383 */
												BFALSE;
											}
									}
									{	/* Eval/evmodule.scm 386 */
										obj_t BgL_val1830z00_1396;

										BgL_val1830z00_1396 =
											BGl_zc3exitza32272ze3z83zz__evmodulez00(BgL_pathz00_66,
											BgL_locz00_69, BgL_identz00_65, BgL_modz00_64,
											BgL_setz00_67);
										BGL_MODULE_SET(BgL_modz00_64);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1830z00_1396)))
											{	/* Eval/evmodule.scm 401 */
												obj_t BgL_arg2270z00_1398;

												obj_t BgL_arg2271z00_1399;

												{	/* Eval/evmodule.scm 401 */
													obj_t BgL_pairz00_2861;

													if (PAIRP(BgL_val1830z00_1396))
														{	/* Eval/evmodule.scm 401 */
															BgL_pairz00_2861 = BgL_val1830z00_1396;
														}
													else
														{
															obj_t BgL_auxz00_4867;

															BgL_auxz00_4867 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 15814)),
																BGl_string3141z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_val1830z00_1396);
															FAILURE(BgL_auxz00_4867, BFALSE, BFALSE);
														}
													BgL_arg2270z00_1398 = CAR(BgL_pairz00_2861);
												}
												BgL_arg2271z00_1399 = CDR(BgL_val1830z00_1396);
												return
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2270z00_1398, BgL_arg2271z00_1399);
											}
										else
											{	/* Eval/evmodule.scm 401 */
												return BgL_val1830z00_1396;
											}
									}
								}
							else
								{	/* Eval/evmodule.scm 380 */
									obj_t BgL_arg2283z00_1417;

									{	/* Eval/evmodule.scm 380 */
										obj_t BgL_list2284z00_1418;

										BgL_list2284z00_1418 = MAKE_PAIR(BgL_abasez00_68, BNIL);
										BgL_arg2283z00_1417 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string3145z00zz__evmodulez00, BgL_list2284z00_1418);
									}
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_69,
										BGl_symbol3109z00zz__evmodulez00, BgL_arg2283z00_1417,
										BgL_identz00_65);
								}
						}
				}
			}
		}
	}



/* <anonymous:2292> */
	obj_t BGl_zc3anonymousza32292ze3z83zz__evmodulez00(obj_t BgL_setz00_3440,
		obj_t BgL_locz00_3439, obj_t BgL_mod2z00_3438, obj_t BgL_modz00_3437,
		obj_t BgL_l1897z00_1433)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 373 */
		BGl_zc3anonymousza32292ze3z83zz__evmodulez00:
			if (PAIRP(BgL_l1897z00_1433))
				{	/* Eval/evmodule.scm 373 */
					{	/* Eval/evmodule.scm 371 */
						obj_t BgL_bz00_1436;

						BgL_bz00_1436 = CAR(BgL_l1897z00_1433);
						{	/* Eval/evmodule.scm 372 */
							obj_t BgL_varz00_2882;

							{	/* Eval/evmodule.scm 372 */
								obj_t BgL_auxz00_4880;

								if (SYMBOLP(BgL_bz00_1436))
									{	/* Eval/evmodule.scm 372 */
										BgL_auxz00_4880 = BgL_bz00_1436;
									}
								else
									{
										obj_t BgL_auxz00_4883;

										BgL_auxz00_4883 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3071z00zz__evmodulez00, BINT(((long) 14952)),
											BGl_string3146z00zz__evmodulez00,
											BGl_string3073z00zz__evmodulez00, BgL_bz00_1436);
										FAILURE(BgL_auxz00_4883, BFALSE, BFALSE);
									}
								BgL_varz00_2882 =
									BGl_evmodulezd2findzd2globalz00zz__evmodulez00
									(BgL_mod2z00_3438, BgL_auxz00_4880);
							}
							if (CBOOL(BgL_varz00_2882))
								{	/* Eval/evmodule.scm 372 */
									obj_t BgL_auxz00_4890;

									if (SYMBOLP(BgL_bz00_1436))
										{	/* Eval/evmodule.scm 372 */
											BgL_auxz00_4890 = BgL_bz00_1436;
										}
									else
										{
											obj_t BgL_auxz00_4893;

											BgL_auxz00_4893 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 14952)),
												BGl_string3146z00zz__evmodulez00,
												BGl_string3073z00zz__evmodulez00, BgL_bz00_1436);
											FAILURE(BgL_auxz00_4893, BFALSE, BFALSE);
										}
									BGl_evmodulezd2bindzd2globalz12z12zz__evmodulez00
										(BgL_modz00_3437, BgL_auxz00_4890, BgL_varz00_2882);
								}
							else
								{	/* Eval/evmodule.scm 372 */
									obj_t BgL_arg2248z00_2883;

									obj_t BgL_arg2249z00_2884;

									BgL_arg2248z00_2883 = BGl_symbol3109z00zz__evmodulez00;
									{	/* Eval/evmodule.scm 372 */
										obj_t BgL_arg2251z00_2886;

										{	/* Eval/evmodule.scm 372 */
											obj_t BgL_arg2253z00_2888;

											BgL_arg2253z00_2888 =
												BGl_evmodulezd2namezd2zz__evmodulez00(BgL_mod2z00_3438);
											{	/* Eval/evmodule.scm 372 */
												obj_t BgL_res2777z00_2891;

												{	/* Eval/evmodule.scm 372 */
													obj_t BgL_arg2694z00_2890;

													BgL_arg2694z00_2890 =
														SYMBOL_TO_STRING(BgL_arg2253z00_2888);
													BgL_res2777z00_2891 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2694z00_2890);
												}
												BgL_arg2251z00_2886 = BgL_res2777z00_2891;
											}
										}
										BgL_arg2249z00_2884 =
											string_append_3(BGl_string3147z00zz__evmodulez00,
											BgL_arg2251z00_2886, BGl_string3148z00zz__evmodulez00);
									}
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_3439,
										BgL_arg2248z00_2883, BgL_arg2249z00_2884, BgL_bz00_1436);
								}
						}
					}
					{
						obj_t BgL_l1897z00_4903;

						BgL_l1897z00_4903 = CDR(BgL_l1897z00_1433);
						BgL_l1897z00_1433 = BgL_l1897z00_4903;
						goto BGl_zc3anonymousza32292ze3z83zz__evmodulez00;
					}
				}
			else
				{	/* Eval/evmodule.scm 373 */
					if (NULLP(BgL_l1897z00_1433))
						{	/* Eval/evmodule.scm 373 */
							return BTRUE;
						}
					else
						{	/* Eval/evmodule.scm 373 */
							return
								BGl_errorz00zz__errorz00(BGl_string3108z00zz__evmodulez00,
								BGl_string3101z00zz__evmodulez00, BgL_l1897z00_1433);
						}
				}
		}
	}



/* import-module */
	obj_t BGl_importzd2modulezd2zz__evmodulez00(obj_t BgL_modz00_3443,
		obj_t BgL_setz00_3442, obj_t BgL_locz00_3441, obj_t BgL_mod2z00_1422)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 368 */
			{	/* Eval/evmodule.scm 365 */
				obj_t BgL_tz00_1424;

				BgL_tz00_1424 = STRUCT_REF(BgL_modz00_3443, (int) (((long) 5)));
				{	/* Eval/evmodule.scm 366 */
					obj_t BgL_arg2289z00_1425;

					{	/* Eval/evmodule.scm 366 */
						obj_t BgL_sz00_2869;

						if (STRUCTP(BgL_mod2z00_1422))
							{	/* Eval/evmodule.scm 366 */
								BgL_sz00_2869 = BgL_mod2z00_1422;
							}
						else
							{
								obj_t BgL_auxz00_4912;

								BgL_auxz00_4912 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 14791)),
									BGl_string3149z00zz__evmodulez00,
									BGl_string3083z00zz__evmodulez00, BgL_mod2z00_1422);
								FAILURE(BgL_auxz00_4912, BFALSE, BFALSE);
							}
						BgL_arg2289z00_1425 = STRUCT_REF(BgL_sz00_2869, (int) (((long) 5)));
					}
					{	/* Eval/evmodule.scm 368 */
						obj_t BgL_zc3anonymousza32291ze3z83_3393;

						BgL_zc3anonymousza32291ze3z83_3393 =
							make_fx_procedure(BGl_zc3anonymousza32291ze3z83zz__evmodulez00,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza32291ze3z83_3393,
							(int) (((long) 0)), BgL_tz00_1424);
						{	/* Eval/evmodule.scm 366 */
							obj_t BgL_auxz00_4923;

							if (STRUCTP(BgL_arg2289z00_1425))
								{	/* Eval/evmodule.scm 366 */
									BgL_auxz00_4923 = BgL_arg2289z00_1425;
								}
							else
								{
									obj_t BgL_auxz00_4926;

									BgL_auxz00_4926 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 14795)),
										BGl_string3149z00zz__evmodulez00,
										BGl_string3083z00zz__evmodulez00, BgL_arg2289z00_1425);
									FAILURE(BgL_auxz00_4926, BFALSE, BFALSE);
								}
							BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_auxz00_4923,
								BgL_zc3anonymousza32291ze3z83_3393);
			}}}}
			return
				BGl_zc3anonymousza32292ze3z83zz__evmodulez00(BgL_setz00_3442,
				BgL_locz00_3441, BgL_mod2z00_1422, BgL_modz00_3443,
				STRUCT_REF(BgL_mod2z00_1422, (int) (((long) 4))));
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__evmodulez00(obj_t BgL_locz00_3447,
		obj_t BgL_identz00_3446, obj_t BgL_modz00_3445, obj_t BgL_setz00_3444,
		obj_t BgL_pathz00_1404, obj_t BgL_mod2z00_1405)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 387 */
		BGl_loopz72z72zz__evmodulez00:
			if (PAIRP(BgL_pathz00_1404))
				{	/* Eval/evmodule.scm 389 */
					{	/* Eval/evmodule.scm 391 */
						obj_t BgL_arg2275z00_1408;

						BgL_arg2275z00_1408 = CAR(BgL_pathz00_1404);
						{	/* Eval/evmodule.scm 391 */
							obj_t BgL__ortest_1826z00_2837;

							BgL__ortest_1826z00_2837 =
								BGl_bigloozd2loadzd2modulez00zz__paramz00();
							{	/* Eval/evmodule.scm 391 */
								obj_t BgL_fun2254z00_2838;

								if (CBOOL(BgL__ortest_1826z00_2837))
									{	/* Eval/evmodule.scm 391 */
										BgL_fun2254z00_2838 = BgL__ortest_1826z00_2837;
									}
								else
									{	/* Eval/evmodule.scm 391 */
										BgL_fun2254z00_2838 =
											BGl_evmodulezd2loadqzd2envz00zz__evmodulez00;
									}
								{	/* Eval/evmodule.scm 391 */
									obj_t BgL_auxz00_4941;

									{	/* Eval/evmodule.scm 391 */
										bool_t BgL_test2919z00_3577;

										BgL_test2919z00_3577 = PROCEDUREP(BgL_fun2254z00_2838);
										if (BgL_test2919z00_3577)
											{	/* Eval/evmodule.scm 391 */
												BgL_auxz00_4941 = BgL_fun2254z00_2838;
											}
										else
											{
												obj_t BgL_auxz00_4944;

												BgL_auxz00_4944 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 15482)),
													BGl_string3150z00zz__evmodulez00,
													BGl_string3151z00zz__evmodulez00,
													BgL_fun2254z00_2838);
												FAILURE(BgL_auxz00_4944, BFALSE, BFALSE);
									}}
									PROCEDURE_ENTRY(BgL_auxz00_4941) (BgL_fun2254z00_2838,
										BgL_arg2275z00_1408, BEOA);
					}}}}
					{	/* Eval/evmodule.scm 392 */
						obj_t BgL_mod2z00_1409;

						{	/* Eval/evmodule.scm 392 */
							obj_t BgL_idz00_2839;

							if (SYMBOLP(BgL_identz00_3446))
								{	/* Eval/evmodule.scm 392 */
									BgL_idz00_2839 = BgL_identz00_3446;
								}
							else
								{
									obj_t BgL_auxz00_4950;

									BgL_auxz00_4950 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 15548)),
										BGl_string3150z00zz__evmodulez00,
										BGl_string3073z00zz__evmodulez00, BgL_identz00_3446);
									FAILURE(BgL_auxz00_4950, BFALSE, BFALSE);
								}
							if (BGl_hashtablezf3zf3zz__hashz00
								(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
								{	/* Eval/evmodule.scm 392 */
									obj_t BgL_auxz00_4956;

									{	/* Eval/evmodule.scm 392 */
										obj_t BgL_aux2922z00_3580;

										BgL_aux2922z00_3580 =
											BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
										if (STRUCTP(BgL_aux2922z00_3580))
											{	/* Eval/evmodule.scm 392 */
												BgL_auxz00_4956 = BgL_aux2922z00_3580;
											}
										else
											{
												obj_t BgL_auxz00_4959;

												BgL_auxz00_4959 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 15530)),
													BGl_string3150z00zz__evmodulez00,
													BGl_string3083z00zz__evmodulez00,
													BgL_aux2922z00_3580);
												FAILURE(BgL_auxz00_4959, BFALSE, BFALSE);
									}}
									BgL_mod2z00_1409 =
										BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_4956,
										BgL_idz00_2839);
								}
							else
								{	/* Eval/evmodule.scm 392 */
									BgL_mod2z00_1409 = BFALSE;
								}
						}
						BGL_MODULE_SET(BgL_mod2z00_1409);
						{
							obj_t BgL_mod2z00_4967;

							obj_t BgL_pathz00_4965;

							BgL_pathz00_4965 = CDR(BgL_pathz00_1404);
							BgL_mod2z00_4967 = BgL_mod2z00_1409;
							BgL_mod2z00_1405 = BgL_mod2z00_4967;
							BgL_pathz00_1404 = BgL_pathz00_4965;
							goto BGl_loopz72z72zz__evmodulez00;
						}
					}
				}
			else
				{	/* Eval/evmodule.scm 395 */
					bool_t BgL_testz00_4968;

					{	/* Eval/evmodule.scm 395 */
						bool_t BgL_testz00_4969;

						if (STRUCTP(BgL_mod2z00_1405))
							{	/* Eval/evmodule.scm 395 */
								obj_t BgL_auxz00_4972;

								{	/* Eval/evmodule.scm 395 */
									obj_t BgL_res2774z00_2851;

									{	/* Eval/evmodule.scm 395 */
										obj_t BgL_aux2924z00_3582;

										BgL_aux2924z00_3582 = STRUCT_KEY(BgL_mod2z00_1405);
										if (SYMBOLP(BgL_aux2924z00_3582))
											{	/* Eval/evmodule.scm 395 */
												BgL_res2774z00_2851 = BgL_aux2924z00_3582;
											}
										else
											{
												obj_t BgL_auxz00_4976;

												BgL_auxz00_4976 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 15632)),
													BGl_string3150z00zz__evmodulez00,
													BGl_string3073z00zz__evmodulez00,
													BgL_aux2924z00_3582);
												FAILURE(BgL_auxz00_4976, BFALSE, BFALSE);
									}}
									BgL_auxz00_4972 = BgL_res2774z00_2851;
								}
								BgL_testz00_4969 =
									(BgL_auxz00_4972 == BGl_symbol3066z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 395 */
								BgL_testz00_4969 = ((bool_t) 0);
							}
						if (BgL_testz00_4969)
							{	/* Eval/evmodule.scm 395 */
								BgL_testz00_4968 =
									(STRUCT_REF(BgL_mod2z00_1405,
										(int) (((long) 0))) ==
									BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 395 */
								BgL_testz00_4968 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_4968)
						{	/* Eval/evmodule.scm 395 */
							return
								BGl_importzd2modulezd2zz__evmodulez00(BgL_modz00_3445,
								BgL_setz00_3444, BgL_locz00_3447, BgL_mod2z00_1405);
						}
					else
						{	/* Eval/evmodule.scm 396 */
							obj_t BgL_arg2279z00_1412;

							{	/* Eval/evmodule.scm 396 */
								obj_t BgL_arg2281z00_1414;

								{	/* Eval/evmodule.scm 397 */
									obj_t BgL_res2776z00_2858;

									{	/* Eval/evmodule.scm 397 */
										obj_t BgL_symbolz00_2856;

										if (SYMBOLP(BgL_identz00_3446))
											{	/* Eval/evmodule.scm 397 */
												BgL_symbolz00_2856 = BgL_identz00_3446;
											}
										else
											{
												obj_t BgL_auxz00_4987;

												BgL_auxz00_4987 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 15732)),
													BGl_string3150z00zz__evmodulez00,
													BGl_string3073z00zz__evmodulez00, BgL_identz00_3446);
												FAILURE(BgL_auxz00_4987, BFALSE, BFALSE);
											}
										{	/* Eval/evmodule.scm 397 */
											obj_t BgL_arg2694z00_2857;

											BgL_arg2694z00_2857 =
												SYMBOL_TO_STRING(BgL_symbolz00_2856);
											BgL_res2776z00_2858 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2694z00_2857);
									}}
									BgL_arg2281z00_1414 = BgL_res2776z00_2858;
								}
								BgL_arg2279z00_1412 =
									string_append_3(BGl_string3152z00zz__evmodulez00,
									BgL_arg2281z00_1414, BGl_string3153z00zz__evmodulez00);
							}
							return
								BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_3447,
								BGl_symbol3109z00zz__evmodulez00, BgL_arg2279z00_1412,
								BgL_pathz00_1404);
						}
				}
		}
	}



/* <exit:2272> */
	obj_t BGl_zc3exitza32272ze3z83zz__evmodulez00(obj_t BgL_pathz00_3452,
		obj_t BgL_locz00_3451, obj_t BgL_identz00_3450, obj_t BgL_modz00_3449,
		obj_t BgL_setz00_3448)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 401 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1831z00_1401;

			if (SET_EXIT(BgL_an_exit1831z00_1401))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1831z00_1401 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 401 */

						PUSH_EXIT(BgL_an_exit1831z00_1401, ((long) 0));
						{	/* Eval/evmodule.scm 389 */
							obj_t BgL_val1832z00_1402;

							BgL_val1832z00_1402 =
								BGl_loopz72z72zz__evmodulez00(BgL_locz00_3451,
								BgL_identz00_3450, BgL_modz00_3449, BgL_setz00_3448,
								BgL_pathz00_3452, BFALSE);
							POP_EXIT();
							return BgL_val1832z00_1402;
						}
					}
				}
		}
	}



/* <anonymous:2291> */
	obj_t BGl_zc3anonymousza32291ze3z83zz__evmodulez00(obj_t BgL_envz00_3394,
		obj_t BgL_kz00_3396, obj_t BgL_vz00_3397)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 367 */
			{	/* Eval/evmodule.scm 368 */
				obj_t BgL_tz00_3395;

				BgL_tz00_3395 = PROCEDURE_REF(BgL_envz00_3394, (int) (((long) 0)));
				{
					obj_t BgL_kz00_1427;

					obj_t BgL_vz00_1428;

					BgL_kz00_1427 = BgL_kz00_3396;
					BgL_vz00_1428 = BgL_vz00_3397;
					{	/* Eval/evmodule.scm 368 */
						obj_t BgL_auxz00_5002;

						if (STRUCTP(BgL_tz00_3395))
							{	/* Eval/evmodule.scm 368 */
								BgL_auxz00_5002 = BgL_tz00_3395;
							}
						else
							{
								obj_t BgL_auxz00_5005;

								BgL_auxz00_5005 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 14839)),
									BGl_string3154z00zz__evmodulez00,
									BGl_string3083z00zz__evmodulez00, BgL_tz00_3395);
								FAILURE(BgL_auxz00_5005, BFALSE, BFALSE);
							}
						return
							BGl_hashtablezd2putz12zc0zz__hashz00(BgL_auxz00_5002,
							BgL_kz00_1427, BgL_vz00_1428);
					}
				}
			}
		}
	}



/* evmodule-import */
	obj_t BGl_evmodulezd2importzd2zz__evmodulez00(obj_t BgL_modz00_70,
		obj_t BgL_clausez00_71, obj_t BgL_locz00_72)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 406 */
			{
				obj_t BgL_sz00_1458;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_71))
					{	/* Eval/evmodule.scm 426 */
						obj_t BgL_g1903z00_1447;

						{	/* Eval/evmodule.scm 426 */
							obj_t BgL_pairz00_2894;

							if (PAIRP(BgL_clausez00_71))
								{	/* Eval/evmodule.scm 426 */
									BgL_pairz00_2894 = BgL_clausez00_71;
								}
							else
								{
									obj_t BgL_auxz00_5014;

									BgL_auxz00_5014 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 16872)),
										BGl_string3156z00zz__evmodulez00,
										BGl_string3103z00zz__evmodulez00, BgL_clausez00_71);
									FAILURE(BgL_auxz00_5014, BFALSE, BFALSE);
								}
							BgL_g1903z00_1447 = CDR(BgL_pairz00_2894);
						}
						{
							obj_t BgL_l1901z00_1449;

							BgL_l1901z00_1449 = BgL_g1903z00_1447;
						BgL_zc3anonymousza32299ze3z83_1450:
							if (PAIRP(BgL_l1901z00_1449))
								{	/* Eval/evmodule.scm 426 */
									BgL_sz00_1458 = CAR(BgL_l1901z00_1449);
									{	/* Eval/evmodule.scm 410 */
										obj_t BgL_locz00_1460;

										obj_t BgL_abasez00_1461;

										{	/* Eval/evmodule.scm 410 */
											obj_t BgL__ortest_1833z00_1489;

											BgL__ortest_1833z00_1489 =
												BGl_getzd2sourcezd2locationz00zz__readerz00
												(BgL_sz00_1458);
											if (CBOOL(BgL__ortest_1833z00_1489))
												{	/* Eval/evmodule.scm 410 */
													BgL_locz00_1460 = BgL__ortest_1833z00_1489;
												}
											else
												{	/* Eval/evmodule.scm 410 */
													BgL_locz00_1460 = BgL_locz00_72;
												}
										}
										BgL_abasez00_1461 = BGL_ABASE();
										{	/* Eval/evmodule.scm 412 */
											obj_t BgL_val1834z00_1462;

											BgL_val1834z00_1462 =
												BGl_zc3exitza32309ze3z83zz__evmodulez00
												(BgL_abasez00_1461, BgL_locz00_72, BgL_locz00_1460,
												BgL_modz00_70, BgL_sz00_1458);
											BGL_ABASE_SET(BgL_abasez00_1461);
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val1834z00_1462)))
												{	/* Eval/evmodule.scm 423 */
													obj_t BgL_arg2307z00_1464;

													obj_t BgL_arg2308z00_1465;

													{	/* Eval/evmodule.scm 423 */
														obj_t BgL_pairz00_2910;

														if (PAIRP(BgL_val1834z00_1462))
															{	/* Eval/evmodule.scm 423 */
																BgL_pairz00_2910 = BgL_val1834z00_1462;
															}
														else
															{
																obj_t BgL_auxz00_5032;

																BgL_auxz00_5032 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 16750)),
																	BGl_string3155z00zz__evmodulez00,
																	BGl_string3103z00zz__evmodulez00,
																	BgL_val1834z00_1462);
																FAILURE(BgL_auxz00_5032, BFALSE, BFALSE);
															}
														BgL_arg2307z00_1464 = CAR(BgL_pairz00_2910);
													}
													BgL_arg2308z00_1465 = CDR(BgL_val1834z00_1462);
													BGl_unwindzd2untilz12zc0zz__bexitz00
														(BgL_arg2307z00_1464, BgL_arg2308z00_1465);
												}
											else
												{	/* Eval/evmodule.scm 423 */
													BgL_val1834z00_1462;
												}
										}
									}
									{
										obj_t BgL_l1901z00_5040;

										BgL_l1901z00_5040 = CDR(BgL_l1901z00_1449);
										BgL_l1901z00_1449 = BgL_l1901z00_5040;
										goto BgL_zc3anonymousza32299ze3z83_1450;
									}
								}
							else
								{	/* Eval/evmodule.scm 426 */
									if (NULLP(BgL_l1901z00_1449))
										{	/* Eval/evmodule.scm 426 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 426 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3108z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1901z00_1449);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 424 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_72,
							BGl_symbol3109z00zz__evmodulez00,
							BGl_string3157z00zz__evmodulez00, BgL_clausez00_71);
					}
			}
		}
	}



/* <exit:2309> */
	obj_t BGl_zc3exitza32309ze3z83zz__evmodulez00(obj_t BgL_abasez00_3436,
		obj_t BgL_locz00_3435, obj_t BgL_locz00_3434, obj_t BgL_modz00_3433,
		obj_t BgL_sz00_3432)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 423 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1835z00_1467;

			if (SET_EXIT(BgL_an_exit1835z00_1467))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1835z00_1467 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 423 */

						PUSH_EXIT(BgL_an_exit1835z00_1467, ((long) 0));
						{	/* Eval/evmodule.scm 414 */
							obj_t BgL_val1836z00_1468;

							if (SYMBOLP(BgL_sz00_3432))
								{	/* Eval/evmodule.scm 415 */
									obj_t BgL_pathz00_1470;

									{	/* Eval/evmodule.scm 415 */
										obj_t BgL_fun2313z00_1473;

										BgL_fun2313z00_1473 =
											BGl_bigloozd2modulezd2resolverz00zz__modulez00();
										BgL_pathz00_1470 =
											PROCEDURE_ENTRY(BgL_fun2313z00_1473) (BgL_fun2313z00_1473,
											BgL_sz00_3432, BgL_abasez00_3436, BEOA);
									}
									{	/* Eval/evmodule.scm 416 */
										obj_t BgL_arg2312z00_1472;

										BgL_arg2312z00_1472 = BGL_ABASE();
										BgL_val1836z00_1468 =
											BGl_evmodulezd2importz12zc0zz__evmodulez00
											(BgL_modz00_3433, BgL_sz00_3432, BgL_pathz00_1470, BNIL,
											BgL_arg2312z00_1472, BgL_locz00_3434);
									}
								}
							else
								{	/* Eval/evmodule.scm 417 */
									bool_t BgL_testz00_5056;

									if (PAIRP(BgL_sz00_3432))
										{	/* Eval/evmodule.scm 417 */
											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
												(BgL_sz00_3432))
												{	/* Eval/evmodule.scm 417 */
													bool_t BgL_testz00_5061;

													{	/* Eval/evmodule.scm 417 */
														obj_t BgL_auxz00_5062;

														BgL_auxz00_5062 = CAR(BgL_sz00_3432);
														BgL_testz00_5061 = SYMBOLP(BgL_auxz00_5062);
													}
													if (BgL_testz00_5061)
														{	/* Eval/evmodule.scm 417 */
															BgL_testz00_5056 = ((bool_t) 0);
														}
													else
														{	/* Eval/evmodule.scm 417 */
															BgL_testz00_5056 = ((bool_t) 1);
														}
												}
											else
												{	/* Eval/evmodule.scm 417 */
													BgL_testz00_5056 = ((bool_t) 1);
												}
										}
									else
										{	/* Eval/evmodule.scm 417 */
											BgL_testz00_5056 = ((bool_t) 1);
										}
									if (BgL_testz00_5056)
										{	/* Eval/evmodule.scm 417 */
											BgL_val1836z00_1468 =
												BGl_evcompilezd2errorzd2zz__evcompilez00
												(BgL_locz00_3435, BGl_symbol3109z00zz__evmodulez00,
												BGl_string3157z00zz__evmodulez00, BgL_sz00_3432);
										}
									else
										{	/* Eval/evmodule.scm 417 */
											{	/* Eval/evmodule.scm 420 */
												obj_t BgL_arg2315z00_1475;

												obj_t BgL_arg2316z00_1476;

												obj_t BgL_arg2317z00_1477;

												{	/* Eval/evmodule.scm 420 */
													obj_t BgL_pairz00_2905;

													if (PAIRP(BgL_sz00_3432))
														{	/* Eval/evmodule.scm 420 */
															BgL_pairz00_2905 = BgL_sz00_3432;
														}
													else
														{
															obj_t BgL_auxz00_5068;

															BgL_auxz00_5068 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 16603)),
																BGl_string3158z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_sz00_3432);
															FAILURE(BgL_auxz00_5068, BFALSE, BFALSE);
														}
													BgL_arg2315z00_1475 = CAR(BgL_pairz00_2905);
												}
												BgL_arg2316z00_1476 = CDR(BgL_sz00_3432);
												BgL_arg2317z00_1477 = BGl_pwdz00zz__osz00();
												{	/* Eval/evmodule.scm 420 */
													obj_t BgL_auxz00_5089;

													obj_t BgL_auxz00_5082;

													obj_t BgL_auxz00_5075;

													if (STRINGP(BgL_arg2317z00_1477))
														{	/* Eval/evmodule.scm 420 */
															BgL_auxz00_5089 = BgL_arg2317z00_1477;
														}
													else
														{
															obj_t BgL_auxz00_5092;

															BgL_auxz00_5092 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 16618)),
																BGl_string3158z00zz__evmodulez00,
																BGl_string3084z00zz__evmodulez00,
																BgL_arg2317z00_1477);
															FAILURE(BgL_auxz00_5092, BFALSE, BFALSE);
														}
													if (PAIRP(BgL_arg2316z00_1476))
														{	/* Eval/evmodule.scm 420 */
															BgL_auxz00_5082 = BgL_arg2316z00_1476;
														}
													else
														{
															obj_t BgL_auxz00_5085;

															BgL_auxz00_5085 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 16612)),
																BGl_string3158z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_arg2316z00_1476);
															FAILURE(BgL_auxz00_5085, BFALSE, BFALSE);
														}
													if (SYMBOLP(BgL_arg2315z00_1475))
														{	/* Eval/evmodule.scm 420 */
															BgL_auxz00_5075 = BgL_arg2315z00_1475;
														}
													else
														{
															obj_t BgL_auxz00_5078;

															BgL_auxz00_5078 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 16604)),
																BGl_string3158z00zz__evmodulez00,
																BGl_string3073z00zz__evmodulez00,
																BgL_arg2315z00_1475);
															FAILURE(BgL_auxz00_5078, BFALSE, BFALSE);
														}
													BGl_modulezd2addzd2accessz12z12zz__modulez00
														(BgL_auxz00_5075, BgL_auxz00_5082, BgL_auxz00_5089);
											}}
											{	/* Eval/evmodule.scm 421 */
												obj_t BgL_pathz00_1478;

												{	/* Eval/evmodule.scm 421 */
													obj_t BgL_fun2323z00_1482;

													BgL_fun2323z00_1482 =
														BGl_bigloozd2modulezd2resolverz00zz__modulez00();
													{	/* Eval/evmodule.scm 421 */
														obj_t BgL_arg2321z00_1483;

														obj_t BgL_arg2322z00_1484;

														BgL_arg2321z00_1483 = CAR(BgL_sz00_3432);
														BgL_arg2322z00_1484 = BGl_pwdz00zz__osz00();
														BgL_pathz00_1478 =
															PROCEDURE_ENTRY(BgL_fun2323z00_1482)
															(BgL_fun2323z00_1482, BgL_arg2321z00_1483,
															BgL_arg2322z00_1484, BEOA);
												}}
												{	/* Eval/evmodule.scm 422 */
													obj_t BgL_arg2318z00_1479;

													obj_t BgL_arg2320z00_1481;

													BgL_arg2318z00_1479 = CAR(BgL_sz00_3432);
													BgL_arg2320z00_1481 = BGL_ABASE();
													BgL_val1836z00_1468 =
														BGl_evmodulezd2importz12zc0zz__evmodulez00
														(BgL_modz00_3433, BgL_arg2318z00_1479,
														BgL_pathz00_1478, BNIL, BgL_arg2320z00_1481,
														BgL_locz00_3434);
								}}}}
							POP_EXIT();
							return BgL_val1836z00_1468;
						}
					}
				}
		}
	}



/* evmodule-from! */
	obj_t BGl_evmodulezd2fromz12zc0zz__evmodulez00(obj_t BgL_modz00_73,
		obj_t BgL_identz00_74, obj_t BgL_pathz00_75, obj_t BgL_setz00_76,
		obj_t BgL_locz00_77)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 431 */
			{
				obj_t BgL_mod2z00_1518;

				{	/* Eval/evmodule.scm 441 */
					obj_t BgL_mod2z00_1494;

					{	/* Eval/evmodule.scm 441 */
						obj_t BgL_idz00_2912;

						if (SYMBOLP(BgL_identz00_74))
							{	/* Eval/evmodule.scm 441 */
								BgL_idz00_2912 = BgL_identz00_74;
							}
						else
							{
								obj_t BgL_auxz00_5108;

								BgL_auxz00_5108 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 17506)),
									BGl_string3160z00zz__evmodulez00,
									BGl_string3073z00zz__evmodulez00, BgL_identz00_74);
								FAILURE(BgL_auxz00_5108, BFALSE, BFALSE);
							}
						if (BGl_hashtablezf3zf3zz__hashz00
							(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
							{	/* Eval/evmodule.scm 441 */
								obj_t BgL_auxz00_5114;

								{	/* Eval/evmodule.scm 441 */
									obj_t BgL_aux2958z00_3617;

									BgL_aux2958z00_3617 =
										BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
									if (STRUCTP(BgL_aux2958z00_3617))
										{	/* Eval/evmodule.scm 441 */
											BgL_auxz00_5114 = BgL_aux2958z00_3617;
										}
									else
										{
											obj_t BgL_auxz00_5117;

											BgL_auxz00_5117 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3071z00zz__evmodulez00, BINT(((long) 17488)),
												BGl_string3160z00zz__evmodulez00,
												BGl_string3083z00zz__evmodulez00, BgL_aux2958z00_3617);
											FAILURE(BgL_auxz00_5117, BFALSE, BFALSE);
								}}
								BgL_mod2z00_1494 =
									BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_5114,
									BgL_idz00_2912);
							}
						else
							{	/* Eval/evmodule.scm 441 */
								BgL_mod2z00_1494 = BFALSE;
							}
					}
					{	/* Eval/evmodule.scm 443 */
						bool_t BgL_testz00_5122;

						{	/* Eval/evmodule.scm 443 */
							bool_t BgL_testz00_5123;

							if (STRUCTP(BgL_mod2z00_1494))
								{	/* Eval/evmodule.scm 443 */
									obj_t BgL_auxz00_5126;

									{	/* Eval/evmodule.scm 443 */
										obj_t BgL_res2778z00_2923;

										{	/* Eval/evmodule.scm 443 */
											obj_t BgL_aux2960z00_3619;

											BgL_aux2960z00_3619 = STRUCT_KEY(BgL_mod2z00_1494);
											if (SYMBOLP(BgL_aux2960z00_3619))
												{	/* Eval/evmodule.scm 443 */
													BgL_res2778z00_2923 = BgL_aux2960z00_3619;
												}
											else
												{
													obj_t BgL_auxz00_5130;

													BgL_auxz00_5130 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 17530)),
														BGl_string3160z00zz__evmodulez00,
														BGl_string3073z00zz__evmodulez00,
														BgL_aux2960z00_3619);
													FAILURE(BgL_auxz00_5130, BFALSE, BFALSE);
										}}
										BgL_auxz00_5126 = BgL_res2778z00_2923;
									}
									BgL_testz00_5123 =
										(BgL_auxz00_5126 == BGl_symbol3066z00zz__evmodulez00);
								}
							else
								{	/* Eval/evmodule.scm 443 */
									BgL_testz00_5123 = ((bool_t) 0);
								}
							if (BgL_testz00_5123)
								{	/* Eval/evmodule.scm 443 */
									BgL_testz00_5122 =
										(STRUCT_REF(BgL_mod2z00_1494,
											(int) (((long) 0))) ==
										BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
								}
							else
								{	/* Eval/evmodule.scm 443 */
									BgL_testz00_5122 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_5122)
							{	/* Eval/evmodule.scm 443 */
								BgL_mod2z00_1518 = BgL_mod2z00_1494;
							BgL_zc3anonymousza32344ze3z83_1519:
								{	/* Eval/evmodule.scm 435 */
									obj_t BgL_nxz00_1520;

									{	/* Eval/evmodule.scm 435 */
										obj_t BgL_arg2345z00_1521;

										obj_t BgL_arg2346z00_1522;

										{	/* Eval/evmodule.scm 438 */
											obj_t BgL_sz00_2975;

											if (STRUCTP(BgL_mod2z00_1518))
												{	/* Eval/evmodule.scm 438 */
													BgL_sz00_2975 = BgL_mod2z00_1518;
												}
											else
												{
													obj_t BgL_auxz00_5140;

													BgL_auxz00_5140 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 17400)),
														BGl_string3159z00zz__evmodulez00,
														BGl_string3083z00zz__evmodulez00, BgL_mod2z00_1518);
													FAILURE(BgL_auxz00_5140, BFALSE, BFALSE);
												}
											BgL_arg2345z00_1521 =
												STRUCT_REF(BgL_sz00_2975, (int) (((long) 4)));
										}
										BgL_arg2346z00_1522 =
											STRUCT_REF(BgL_modz00_73, (int) (((long) 4)));
										{	/* Eval/evmodule.scm 435 */
											obj_t BgL_auxz00_5148;

											{	/* Eval/evmodule.scm 435 */
												bool_t BgL_testz00_5149;

												if (PAIRP(BgL_arg2345z00_1521))
													{	/* Eval/evmodule.scm 435 */
														BgL_testz00_5149 = ((bool_t) 1);
													}
												else
													{	/* Eval/evmodule.scm 435 */
														BgL_testz00_5149 = NULLP(BgL_arg2345z00_1521);
													}
												if (BgL_testz00_5149)
													{	/* Eval/evmodule.scm 435 */
														BgL_auxz00_5148 = BgL_arg2345z00_1521;
													}
												else
													{
														obj_t BgL_auxz00_5153;

														BgL_auxz00_5153 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3071z00zz__evmodulez00,
															BINT(((long) 17275)),
															BGl_string3159z00zz__evmodulez00,
															BGl_string3117z00zz__evmodulez00,
															BgL_arg2345z00_1521);
														FAILURE(BgL_auxz00_5153, BFALSE, BFALSE);
											}}
											BgL_nxz00_1520 =
												bgl_append2(BgL_auxz00_5148, BgL_arg2346z00_1522);
									}}
									{	/* Eval/evmodule.scm 440 */
										obj_t BgL_xz00_3614;

										{	/* Eval/evmodule.scm 440 */
											int BgL_auxz00_5158;

											BgL_auxz00_5158 = (int) (((long) 4));
											BgL_xz00_3614 =
												STRUCT_SET(BgL_modz00_73, BgL_auxz00_5158,
												BgL_nxz00_1520);
										}
										return BUNSPEC;
									}
								}
							}
						else
							{	/* Eval/evmodule.scm 443 */
								if (PAIRP(BgL_pathz00_75))
									{	/* Eval/evmodule.scm 445 */
										{	/* Eval/evmodule.scm 448 */
											bool_t BgL_testz00_5163;

											{	/* Eval/evmodule.scm 448 */
												int BgL_arg2331z00_1499;

												BgL_arg2331z00_1499 =
													BGl_bigloozd2debugzd2modulez00zz__paramz00();
												BgL_testz00_5163 =
													((long) (BgL_arg2331z00_1499) > ((long) 0));
											}
											if (BgL_testz00_5163)
												{	/* Eval/evmodule.scm 449 */
													obj_t BgL_port1904z00_1498;

													{	/* Eval/evmodule.scm 449 */
														obj_t BgL_res2780z00_2932;

														{	/* Eval/evmodule.scm 449 */
															obj_t BgL_auxz00_5167;

															BgL_auxz00_5167 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2780z00_2932 =
																BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5167);
														}
														BgL_port1904z00_1498 = BgL_res2780z00_2932;
													}
													bgl_display_string(BGl_string3142z00zz__evmodulez00,
														BgL_port1904z00_1498);
													bgl_display_obj(BgL_identz00_74,
														BgL_port1904z00_1498);
													bgl_display_string(BGl_string3143z00zz__evmodulez00,
														BgL_port1904z00_1498);
													bgl_display_obj(BgL_pathz00_75, BgL_port1904z00_1498);
													bgl_display_string(BGl_string3144z00zz__evmodulez00,
														BgL_port1904z00_1498);
													bgl_display_char(((unsigned char) '\n'),
														BgL_port1904z00_1498);
												}
											else
												{	/* Eval/evmodule.scm 448 */
													BFALSE;
												}
										}
										{
											obj_t BgL_l1905z00_1502;

											BgL_l1905z00_1502 = BgL_pathz00_75;
										BgL_zc3anonymousza32333ze3z83_1503:
											if (PAIRP(BgL_l1905z00_1502))
												{	/* Eval/evmodule.scm 451 */
													{	/* Eval/evmodule.scm 451 */
														obj_t BgL_arg2335z00_1505;

														BgL_arg2335z00_1505 = CAR(BgL_l1905z00_1502);
														{	/* Eval/evmodule.scm 451 */
															obj_t BgL__ortest_1826z00_2943;

															BgL__ortest_1826z00_2943 =
																BGl_bigloozd2loadzd2modulez00zz__paramz00();
															{	/* Eval/evmodule.scm 451 */
																obj_t BgL_fun2254z00_2944;

																if (CBOOL(BgL__ortest_1826z00_2943))
																	{	/* Eval/evmodule.scm 451 */
																		BgL_fun2254z00_2944 =
																			BgL__ortest_1826z00_2943;
																	}
																else
																	{	/* Eval/evmodule.scm 451 */
																		BgL_fun2254z00_2944 =
																			BGl_evmodulezd2loadqzd2envz00zz__evmodulez00;
																	}
																{	/* Eval/evmodule.scm 451 */
																	obj_t BgL_auxz00_5183;

																	{	/* Eval/evmodule.scm 451 */
																		bool_t BgL_test2963z00_3622;

																		BgL_test2963z00_3622 =
																			PROCEDUREP(BgL_fun2254z00_2944);
																		if (BgL_test2963z00_3622)
																			{	/* Eval/evmodule.scm 451 */
																				BgL_auxz00_5183 = BgL_fun2254z00_2944;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5186;

																				BgL_auxz00_5186 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3071z00zz__evmodulez00,
																					BINT(((long) 17777)),
																					BGl_string3161z00zz__evmodulez00,
																					BGl_string3151z00zz__evmodulez00,
																					BgL_fun2254z00_2944);
																				FAILURE(BgL_auxz00_5186, BFALSE,
																					BFALSE);
																	}}
																	PROCEDURE_ENTRY(BgL_auxz00_5183)
																		(BgL_fun2254z00_2944, BgL_arg2335z00_1505,
																		BEOA);
													}}}}
													{
														obj_t BgL_l1905z00_5190;

														BgL_l1905z00_5190 = CDR(BgL_l1905z00_1502);
														BgL_l1905z00_1502 = BgL_l1905z00_5190;
														goto BgL_zc3anonymousza32333ze3z83_1503;
													}
												}
											else
												{	/* Eval/evmodule.scm 451 */
													if (NULLP(BgL_l1905z00_1502))
														{	/* Eval/evmodule.scm 451 */
															BTRUE;
														}
													else
														{	/* Eval/evmodule.scm 451 */
															BGl_errorz00zz__errorz00
																(BGl_string3108z00zz__evmodulez00,
																BGl_string3101z00zz__evmodulez00,
																BgL_l1905z00_1502);
														}
												}
										}
										{	/* Eval/evmodule.scm 452 */
											obj_t BgL_mod2z00_1509;

											{	/* Eval/evmodule.scm 452 */
												obj_t BgL_idz00_2947;

												BgL_idz00_2947 = BgL_identz00_74;
												if (BGl_hashtablezf3zf3zz__hashz00
													(BGl_za2moduleszd2tableza2zd2zz__evmodulez00))
													{	/* Eval/evmodule.scm 452 */
														obj_t BgL_auxz00_5197;

														{	/* Eval/evmodule.scm 452 */
															obj_t BgL_aux2966z00_3625;

															BgL_aux2966z00_3625 =
																BGl_za2moduleszd2tableza2zd2zz__evmodulez00;
															if (STRUCTP(BgL_aux2966z00_3625))
																{	/* Eval/evmodule.scm 452 */
																	BgL_auxz00_5197 = BgL_aux2966z00_3625;
																}
															else
																{
																	obj_t BgL_auxz00_5200;

																	BgL_auxz00_5200 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3071z00zz__evmodulez00,
																		BINT(((long) 17822)),
																		BGl_string3160z00zz__evmodulez00,
																		BGl_string3083z00zz__evmodulez00,
																		BgL_aux2966z00_3625);
																	FAILURE(BgL_auxz00_5200, BFALSE, BFALSE);
														}}
														BgL_mod2z00_1509 =
															BGl_hashtablezd2getzd2zz__hashz00(BgL_auxz00_5197,
															BgL_idz00_2947);
													}
												else
													{	/* Eval/evmodule.scm 452 */
														BgL_mod2z00_1509 = BFALSE;
													}
											}
											{	/* Eval/evmodule.scm 453 */
												bool_t BgL_testz00_5205;

												{	/* Eval/evmodule.scm 453 */
													bool_t BgL_testz00_5206;

													if (STRUCTP(BgL_mod2z00_1509))
														{	/* Eval/evmodule.scm 453 */
															obj_t BgL_auxz00_5209;

															{	/* Eval/evmodule.scm 453 */
																obj_t BgL_res2781z00_2958;

																{	/* Eval/evmodule.scm 453 */
																	obj_t BgL_aux2968z00_3627;

																	BgL_aux2968z00_3627 =
																		STRUCT_KEY(BgL_mod2z00_1509);
																	if (SYMBOLP(BgL_aux2968z00_3627))
																		{	/* Eval/evmodule.scm 453 */
																			BgL_res2781z00_2958 = BgL_aux2968z00_3627;
																		}
																	else
																		{
																			obj_t BgL_auxz00_5213;

																			BgL_auxz00_5213 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3071z00zz__evmodulez00,
																				BINT(((long) 17864)),
																				BGl_string3160z00zz__evmodulez00,
																				BGl_string3073z00zz__evmodulez00,
																				BgL_aux2968z00_3627);
																			FAILURE(BgL_auxz00_5213, BFALSE, BFALSE);
																}}
																BgL_auxz00_5209 = BgL_res2781z00_2958;
															}
															BgL_testz00_5206 =
																(BgL_auxz00_5209 ==
																BGl_symbol3066z00zz__evmodulez00);
														}
													else
														{	/* Eval/evmodule.scm 453 */
															BgL_testz00_5206 = ((bool_t) 0);
														}
													if (BgL_testz00_5206)
														{	/* Eval/evmodule.scm 453 */
															BgL_testz00_5205 =
																(STRUCT_REF(BgL_mod2z00_1509,
																	(int) (((long) 0))) ==
																BGl_makezd2z52evmodulezd2envz52zz__evmodulez00);
														}
													else
														{	/* Eval/evmodule.scm 453 */
															BgL_testz00_5205 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_5205)
													{
														obj_t BgL_mod2z00_5221;

														BgL_mod2z00_5221 = BgL_mod2z00_1509;
														BgL_mod2z00_1518 = BgL_mod2z00_5221;
														goto BgL_zc3anonymousza32344ze3z83_1519;
													}
												else
													{	/* Eval/evmodule.scm 454 */
														obj_t BgL_arg2339z00_1511;

														{	/* Eval/evmodule.scm 454 */
															obj_t BgL_arg2341z00_1513;

															{	/* Eval/evmodule.scm 455 */
																obj_t BgL_res2783z00_2965;

																{	/* Eval/evmodule.scm 455 */
																	obj_t BgL_symbolz00_2963;

																	BgL_symbolz00_2963 = BgL_identz00_74;
																	{	/* Eval/evmodule.scm 455 */
																		obj_t BgL_arg2694z00_2964;

																		BgL_arg2694z00_2964 =
																			SYMBOL_TO_STRING(BgL_symbolz00_2963);
																		BgL_res2783z00_2965 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2694z00_2964);
																	}
																}
																BgL_arg2341z00_1513 = BgL_res2783z00_2965;
															}
															BgL_arg2339z00_1511 =
																string_append_3
																(BGl_string3152z00zz__evmodulez00,
																BgL_arg2341z00_1513,
																BGl_string3153z00zz__evmodulez00);
														}
														{	/* Eval/evmodule.scm 454 */
															obj_t BgL_objz00_2967;

															BgL_objz00_2967 = BgL_pathz00_75;
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_77,
																BGl_symbol3109z00zz__evmodulez00,
																BgL_arg2339z00_1511, BgL_objz00_2967);
														}
													}
											}
										}
									}
								else
									{	/* Eval/evmodule.scm 445 */
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_77,
											BGl_symbol3109z00zz__evmodulez00,
											BGl_string3162z00zz__evmodulez00, BgL_identz00_74);
									}
							}
					}
				}
			}
		}
	}



/* evmodule-from */
	obj_t BGl_evmodulezd2fromzd2zz__evmodulez00(obj_t BgL_modz00_78,
		obj_t BgL_clausez00_79, obj_t BgL_locz00_80)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 463 */
			{
				obj_t BgL_sz00_1545;

				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_clausez00_79))
					{	/* Eval/evmodule.scm 483 */
						obj_t BgL_g1909z00_1534;

						{	/* Eval/evmodule.scm 483 */
							obj_t BgL_pairz00_2985;

							if (PAIRP(BgL_clausez00_79))
								{	/* Eval/evmodule.scm 483 */
									BgL_pairz00_2985 = BgL_clausez00_79;
								}
							else
								{
									obj_t BgL_auxz00_5231;

									BgL_auxz00_5231 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 19014)),
										BGl_string3164z00zz__evmodulez00,
										BGl_string3103z00zz__evmodulez00, BgL_clausez00_79);
									FAILURE(BgL_auxz00_5231, BFALSE, BFALSE);
								}
							BgL_g1909z00_1534 = CDR(BgL_pairz00_2985);
						}
						{
							obj_t BgL_l1907z00_1536;

							BgL_l1907z00_1536 = BgL_g1909z00_1534;
						BgL_zc3anonymousza32352ze3z83_1537:
							if (PAIRP(BgL_l1907z00_1536))
								{	/* Eval/evmodule.scm 483 */
									BgL_sz00_1545 = CAR(BgL_l1907z00_1536);
									{	/* Eval/evmodule.scm 467 */
										obj_t BgL_locz00_1547;

										obj_t BgL_abasez00_1548;

										{	/* Eval/evmodule.scm 467 */
											obj_t BgL__ortest_1837z00_1573;

											BgL__ortest_1837z00_1573 =
												BGl_getzd2sourcezd2locationz00zz__readerz00
												(BgL_sz00_1545);
											if (CBOOL(BgL__ortest_1837z00_1573))
												{	/* Eval/evmodule.scm 467 */
													BgL_locz00_1547 = BgL__ortest_1837z00_1573;
												}
											else
												{	/* Eval/evmodule.scm 467 */
													BgL_locz00_1547 = BgL_locz00_80;
												}
										}
										BgL_abasez00_1548 = BGL_ABASE();
										{	/* Eval/evmodule.scm 469 */
											obj_t BgL_val1838z00_1549;

											BgL_val1838z00_1549 =
												BGl_zc3exitza32362ze3z83zz__evmodulez00
												(BgL_abasez00_1548, BgL_locz00_80, BgL_locz00_1547,
												BgL_modz00_78, BgL_sz00_1545);
											BGL_ABASE_SET(BgL_abasez00_1548);
											if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
													(BgL_val1838z00_1549)))
												{	/* Eval/evmodule.scm 480 */
													obj_t BgL_arg2360z00_1551;

													obj_t BgL_arg2361z00_1552;

													{	/* Eval/evmodule.scm 480 */
														obj_t BgL_pairz00_3001;

														if (PAIRP(BgL_val1838z00_1549))
															{	/* Eval/evmodule.scm 480 */
																BgL_pairz00_3001 = BgL_val1838z00_1549;
															}
														else
															{
																obj_t BgL_auxz00_5249;

																BgL_auxz00_5249 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 18896)),
																	BGl_string3163z00zz__evmodulez00,
																	BGl_string3103z00zz__evmodulez00,
																	BgL_val1838z00_1549);
																FAILURE(BgL_auxz00_5249, BFALSE, BFALSE);
															}
														BgL_arg2360z00_1551 = CAR(BgL_pairz00_3001);
													}
													BgL_arg2361z00_1552 = CDR(BgL_val1838z00_1549);
													BGl_unwindzd2untilz12zc0zz__bexitz00
														(BgL_arg2360z00_1551, BgL_arg2361z00_1552);
												}
											else
												{	/* Eval/evmodule.scm 480 */
													BgL_val1838z00_1549;
												}
										}
									}
									{
										obj_t BgL_l1907z00_5257;

										BgL_l1907z00_5257 = CDR(BgL_l1907z00_1536);
										BgL_l1907z00_1536 = BgL_l1907z00_5257;
										goto BgL_zc3anonymousza32352ze3z83_1537;
									}
								}
							else
								{	/* Eval/evmodule.scm 483 */
									if (NULLP(BgL_l1907z00_1536))
										{	/* Eval/evmodule.scm 483 */
											return BTRUE;
										}
									else
										{	/* Eval/evmodule.scm 483 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string3108z00zz__evmodulez00,
												BGl_string3101z00zz__evmodulez00, BgL_l1907z00_1536);
										}
								}
						}
					}
				else
					{	/* Eval/evmodule.scm 481 */
						return
							BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_80,
							BGl_symbol3109z00zz__evmodulez00,
							BGl_string3165z00zz__evmodulez00, BgL_clausez00_79);
					}
			}
		}
	}



/* <exit:2362> */
	obj_t BGl_zc3exitza32362ze3z83zz__evmodulez00(obj_t BgL_abasez00_3431,
		obj_t BgL_locz00_3430, obj_t BgL_locz00_3429, obj_t BgL_modz00_3428,
		obj_t BgL_sz00_3427)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 480 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1839z00_1554;

			if (SET_EXIT(BgL_an_exit1839z00_1554))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1839z00_1554 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 480 */

						PUSH_EXIT(BgL_an_exit1839z00_1554, ((long) 0));
						{	/* Eval/evmodule.scm 471 */
							obj_t BgL_val1840z00_1555;

							if (SYMBOLP(BgL_sz00_3427))
								{	/* Eval/evmodule.scm 472 */
									obj_t BgL_pathz00_1557;

									{	/* Eval/evmodule.scm 472 */
										obj_t BgL_fun2364z00_1558;

										BgL_fun2364z00_1558 =
											BGl_bigloozd2modulezd2resolverz00zz__modulez00();
										BgL_pathz00_1557 =
											PROCEDURE_ENTRY(BgL_fun2364z00_1558) (BgL_fun2364z00_1558,
											BgL_sz00_3427, BgL_abasez00_3431, BEOA);
									}
									BgL_val1840z00_1555 =
										BGl_evmodulezd2fromz12zc0zz__evmodulez00(BgL_modz00_3428,
										BgL_sz00_3427, BgL_pathz00_1557, BNIL, BgL_locz00_3429);
								}
							else
								{	/* Eval/evmodule.scm 474 */
									bool_t BgL_testz00_5272;

									if (PAIRP(BgL_sz00_3427))
										{	/* Eval/evmodule.scm 474 */
											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
												(BgL_sz00_3427))
												{	/* Eval/evmodule.scm 474 */
													bool_t BgL_testz00_5277;

													{	/* Eval/evmodule.scm 474 */
														obj_t BgL_auxz00_5278;

														BgL_auxz00_5278 = CAR(BgL_sz00_3427);
														BgL_testz00_5277 = SYMBOLP(BgL_auxz00_5278);
													}
													if (BgL_testz00_5277)
														{	/* Eval/evmodule.scm 474 */
															BgL_testz00_5272 = ((bool_t) 0);
														}
													else
														{	/* Eval/evmodule.scm 474 */
															BgL_testz00_5272 = ((bool_t) 1);
														}
												}
											else
												{	/* Eval/evmodule.scm 474 */
													BgL_testz00_5272 = ((bool_t) 1);
												}
										}
									else
										{	/* Eval/evmodule.scm 474 */
											BgL_testz00_5272 = ((bool_t) 1);
										}
									if (BgL_testz00_5272)
										{	/* Eval/evmodule.scm 474 */
											BgL_val1840z00_1555 =
												BGl_evcompilezd2errorzd2zz__evcompilez00
												(BgL_locz00_3430, BGl_symbol3109z00zz__evmodulez00,
												BGl_string3165z00zz__evmodulez00, BgL_sz00_3427);
										}
									else
										{	/* Eval/evmodule.scm 474 */
											{	/* Eval/evmodule.scm 477 */
												obj_t BgL_arg2366z00_1560;

												obj_t BgL_arg2367z00_1561;

												obj_t BgL_arg2368z00_1562;

												{	/* Eval/evmodule.scm 477 */
													obj_t BgL_pairz00_2996;

													if (PAIRP(BgL_sz00_3427))
														{	/* Eval/evmodule.scm 477 */
															BgL_pairz00_2996 = BgL_sz00_3427;
														}
													else
														{
															obj_t BgL_auxz00_5284;

															BgL_auxz00_5284 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 18766)),
																BGl_string3166z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_sz00_3427);
															FAILURE(BgL_auxz00_5284, BFALSE, BFALSE);
														}
													BgL_arg2366z00_1560 = CAR(BgL_pairz00_2996);
												}
												BgL_arg2367z00_1561 = CDR(BgL_sz00_3427);
												BgL_arg2368z00_1562 = BGl_pwdz00zz__osz00();
												{	/* Eval/evmodule.scm 477 */
													obj_t BgL_auxz00_5305;

													obj_t BgL_auxz00_5298;

													obj_t BgL_auxz00_5291;

													if (STRINGP(BgL_arg2368z00_1562))
														{	/* Eval/evmodule.scm 477 */
															BgL_auxz00_5305 = BgL_arg2368z00_1562;
														}
													else
														{
															obj_t BgL_auxz00_5308;

															BgL_auxz00_5308 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 18781)),
																BGl_string3166z00zz__evmodulez00,
																BGl_string3084z00zz__evmodulez00,
																BgL_arg2368z00_1562);
															FAILURE(BgL_auxz00_5308, BFALSE, BFALSE);
														}
													if (PAIRP(BgL_arg2367z00_1561))
														{	/* Eval/evmodule.scm 477 */
															BgL_auxz00_5298 = BgL_arg2367z00_1561;
														}
													else
														{
															obj_t BgL_auxz00_5301;

															BgL_auxz00_5301 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 18775)),
																BGl_string3166z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_arg2367z00_1561);
															FAILURE(BgL_auxz00_5301, BFALSE, BFALSE);
														}
													if (SYMBOLP(BgL_arg2366z00_1560))
														{	/* Eval/evmodule.scm 477 */
															BgL_auxz00_5291 = BgL_arg2366z00_1560;
														}
													else
														{
															obj_t BgL_auxz00_5294;

															BgL_auxz00_5294 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 18767)),
																BGl_string3166z00zz__evmodulez00,
																BGl_string3073z00zz__evmodulez00,
																BgL_arg2366z00_1560);
															FAILURE(BgL_auxz00_5294, BFALSE, BFALSE);
														}
													BGl_modulezd2addzd2accessz12z12zz__modulez00
														(BgL_auxz00_5291, BgL_auxz00_5298, BgL_auxz00_5305);
											}}
											{	/* Eval/evmodule.scm 478 */
												obj_t BgL_pathz00_1563;

												{	/* Eval/evmodule.scm 478 */
													obj_t BgL_fun2373z00_1566;

													BgL_fun2373z00_1566 =
														BGl_bigloozd2modulezd2resolverz00zz__modulez00();
													{	/* Eval/evmodule.scm 478 */
														obj_t BgL_arg2371z00_1567;

														obj_t BgL_arg2372z00_1568;

														BgL_arg2371z00_1567 = CAR(BgL_sz00_3427);
														BgL_arg2372z00_1568 = BGl_pwdz00zz__osz00();
														BgL_pathz00_1563 =
															PROCEDURE_ENTRY(BgL_fun2373z00_1566)
															(BgL_fun2373z00_1566, BgL_arg2371z00_1567,
															BgL_arg2372z00_1568, BEOA);
												}}
												BgL_val1840z00_1555 =
													BGl_evmodulezd2fromz12zc0zz__evmodulez00
													(BgL_modz00_3428, CAR(BgL_sz00_3427),
													BgL_pathz00_1563, BNIL, BgL_locz00_3429);
								}}}
							POP_EXIT();
							return BgL_val1840z00_1555;
						}
					}
				}
		}
	}



/* evmodule-include */
	obj_t BGl_evmodulezd2includezd2zz__evmodulez00(obj_t BgL_modz00_81,
		obj_t BgL_clausesz00_82, obj_t BgL_locz00_83)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 488 */
			{
				obj_t BgL_filesz00_1645;

				obj_t BgL_pathz00_1646;

				obj_t BgL_filez00_1621;

				obj_t BgL_pathz00_1622;

				{	/* Eval/evmodule.scm 513 */
					obj_t BgL_pathz00_1578;

					{	/* Eval/evmodule.scm 513 */
						bool_t BgL_testz00_5321;

						{	/* Eval/evmodule.scm 513 */
							obj_t BgL_auxz00_5322;

							BgL_auxz00_5322 = STRUCT_REF(BgL_modz00_81, (int) (((long) 2)));
							BgL_testz00_5321 = STRINGP(BgL_auxz00_5322);
						}
						if (BgL_testz00_5321)
							{	/* Eval/evmodule.scm 514 */
								obj_t BgL_arg2404z00_1618;

								{	/* Eval/evmodule.scm 514 */
									obj_t BgL_arg2405z00_1619;

									BgL_arg2405z00_1619 =
										STRUCT_REF(BgL_modz00_81, (int) (((long) 2)));
									{	/* Eval/evmodule.scm 514 */
										obj_t BgL_auxz00_5328;

										if (STRINGP(BgL_arg2405z00_1619))
											{	/* Eval/evmodule.scm 514 */
												BgL_auxz00_5328 = BgL_arg2405z00_1619;
											}
										else
											{
												obj_t BgL_auxz00_5331;

												BgL_auxz00_5331 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 20144)),
													BGl_string3171z00zz__evmodulez00,
													BGl_string3084z00zz__evmodulez00,
													BgL_arg2405z00_1619);
												FAILURE(BgL_auxz00_5331, BFALSE, BFALSE);
											}
										BgL_arg2404z00_1618 =
											BGl_dirnamez00zz__osz00(BgL_auxz00_5328);
								}}
								BgL_pathz00_1578 =
									MAKE_PAIR(BgL_arg2404z00_1618,
									BGl_za2loadzd2pathza2zd2zz__evalz00);
							}
						else
							{	/* Eval/evmodule.scm 513 */
								BgL_pathz00_1578 = BGl_za2loadzd2pathza2zd2zz__evalz00;
							}
					}
					{
						obj_t BgL_clausesz00_1582;

						obj_t BgL_iclausesz00_1583;

						obj_t BgL_iexprsz00_1584;

						BgL_clausesz00_1582 = BgL_clausesz00_82;
						BgL_iclausesz00_1583 = BNIL;
						BgL_iexprsz00_1584 = BNIL;
					BgL_zc3anonymousza32378ze3z83_1585:
						if (NULLP(BgL_clausesz00_1582))
							{	/* Eval/evmodule.scm 520 */
								{	/* Eval/evmodule.scm 521 */
									int BgL_auxz00_5339;

									BgL_auxz00_5339 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_5339);
								}
								{	/* Eval/evmodule.scm 521 */
									int BgL_auxz00_5342;

									BgL_auxz00_5342 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5342, BgL_iexprsz00_1584);
								}
								return BgL_iclausesz00_1583;
							}
						else
							{	/* Eval/evmodule.scm 522 */
								bool_t BgL_testz00_5345;

								{	/* Eval/evmodule.scm 522 */
									obj_t BgL_auxz00_5346;

									{	/* Eval/evmodule.scm 522 */
										obj_t BgL_pairz00_3014;

										if (PAIRP(BgL_clausesz00_1582))
											{	/* Eval/evmodule.scm 522 */
												BgL_pairz00_3014 = BgL_clausesz00_1582;
											}
										else
											{
												obj_t BgL_auxz00_5349;

												BgL_auxz00_5349 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 20335)),
													BGl_string3170z00zz__evmodulez00,
													BGl_string3103z00zz__evmodulez00,
													BgL_clausesz00_1582);
												FAILURE(BgL_auxz00_5349, BFALSE, BFALSE);
											}
										BgL_auxz00_5346 = CAR(BgL_pairz00_3014);
									}
									BgL_testz00_5345 = PAIRP(BgL_auxz00_5346);
								}
								if (BgL_testz00_5345)
									{	/* Eval/evmodule.scm 524 */
										bool_t BgL_testz00_5355;

										{	/* Eval/evmodule.scm 524 */
											obj_t BgL_auxz00_5356;

											{	/* Eval/evmodule.scm 524 */
												obj_t BgL_pairz00_3016;

												if (PAIRP(BgL_clausesz00_1582))
													{	/* Eval/evmodule.scm 524 */
														BgL_pairz00_3016 = BgL_clausesz00_1582;
													}
												else
													{
														obj_t BgL_auxz00_5359;

														BgL_auxz00_5359 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3071z00zz__evmodulez00,
															BINT(((long) 20437)),
															BGl_string3170z00zz__evmodulez00,
															BGl_string3103z00zz__evmodulez00,
															BgL_clausesz00_1582);
														FAILURE(BgL_auxz00_5359, BFALSE, BFALSE);
													}
												{	/* Eval/evmodule.scm 524 */
													obj_t BgL_pairz00_3019;

													{	/* Eval/evmodule.scm 524 */
														obj_t BgL_aux3012z00_3671;

														BgL_aux3012z00_3671 = CAR(BgL_pairz00_3016);
														if (PAIRP(BgL_aux3012z00_3671))
															{	/* Eval/evmodule.scm 524 */
																BgL_pairz00_3019 = BgL_aux3012z00_3671;
															}
														else
															{
																obj_t BgL_auxz00_5366;

																BgL_auxz00_5366 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 20431)),
																	BGl_string3170z00zz__evmodulez00,
																	BGl_string3103z00zz__evmodulez00,
																	BgL_aux3012z00_3671);
																FAILURE(BgL_auxz00_5366, BFALSE, BFALSE);
													}}
													BgL_auxz00_5356 = CAR(BgL_pairz00_3019);
											}}
											BgL_testz00_5355 =
												(BgL_auxz00_5356 == BGl_symbol3172z00zz__evmodulez00);
										}
										if (BgL_testz00_5355)
											{	/* Eval/evmodule.scm 525 */
												obj_t BgL_icz00_1591;

												{	/* Eval/evmodule.scm 526 */
													obj_t BgL_arg2391z00_1604;

													{	/* Eval/evmodule.scm 526 */
														obj_t BgL_pairz00_3020;

														if (PAIRP(BgL_clausesz00_1582))
															{	/* Eval/evmodule.scm 526 */
																BgL_pairz00_3020 = BgL_clausesz00_1582;
															}
														else
															{
																obj_t BgL_auxz00_5374;

																BgL_auxz00_5374 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 20524)),
																	BGl_string3170z00zz__evmodulez00,
																	BGl_string3103z00zz__evmodulez00,
																	BgL_clausesz00_1582);
																FAILURE(BgL_auxz00_5374, BFALSE, BFALSE);
															}
														{	/* Eval/evmodule.scm 526 */
															obj_t BgL_pairz00_3023;

															{	/* Eval/evmodule.scm 526 */
																obj_t BgL_aux3016z00_3675;

																BgL_aux3016z00_3675 = CAR(BgL_pairz00_3020);
																if (PAIRP(BgL_aux3016z00_3675))
																	{	/* Eval/evmodule.scm 526 */
																		BgL_pairz00_3023 = BgL_aux3016z00_3675;
																	}
																else
																	{
																		obj_t BgL_auxz00_5381;

																		BgL_auxz00_5381 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3071z00zz__evmodulez00,
																			BINT(((long) 20518)),
																			BGl_string3170z00zz__evmodulez00,
																			BGl_string3103z00zz__evmodulez00,
																			BgL_aux3016z00_3675);
																		FAILURE(BgL_auxz00_5381, BFALSE, BFALSE);
															}}
															BgL_arg2391z00_1604 = CDR(BgL_pairz00_3023);
													}}
													BgL_filesz00_1645 = BgL_arg2391z00_1604;
													BgL_pathz00_1646 = BgL_pathz00_1578;
													{
														obj_t BgL_filesz00_3043;

														obj_t BgL_iclausesz00_3044;

														obj_t BgL_iexprsz00_3045;

														BgL_filesz00_3043 = BgL_filesz00_1645;
														BgL_iclausesz00_3044 = BNIL;
														BgL_iexprsz00_3045 = BNIL;
													BgL_loopz00_3042:
														if (NULLP(BgL_filesz00_3043))
															{	/* Eval/evmodule.scm 504 */
																{	/* Eval/evmodule.scm 504 */
																	int BgL_auxz00_5388;

																	BgL_auxz00_5388 = (int) (((long) 2));
																	BGL_MVALUES_NUMBER_SET(BgL_auxz00_5388);
																}
																{	/* Eval/evmodule.scm 504 */
																	int BgL_auxz00_5391;

																	BgL_auxz00_5391 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_auxz00_5391,
																		BgL_iexprsz00_3045);
																}
																BgL_icz00_1591 = BgL_iclausesz00_3044;
															}
														else
															{	/* Eval/evmodule.scm 504 */
																obj_t BgL_icz00_3058;

																{	/* Eval/evmodule.scm 504 */
																	obj_t BgL_arg2425z00_3059;

																	{	/* Eval/evmodule.scm 504 */
																		obj_t BgL_pairz00_3068;

																		if (PAIRP(BgL_filesz00_3043))
																			{	/* Eval/evmodule.scm 504 */
																				BgL_pairz00_3068 = BgL_filesz00_3043;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5396;

																				BgL_auxz00_5396 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3071z00zz__evmodulez00,
																					BINT(((long) 19796)),
																					BGl_string3170z00zz__evmodulez00,
																					BGl_string3103z00zz__evmodulez00,
																					BgL_filesz00_3043);
																				FAILURE(BgL_auxz00_5396, BFALSE,
																					BFALSE);
																			}
																		BgL_arg2425z00_3059 = CAR(BgL_pairz00_3068);
																	}
																	BgL_filez00_1621 = BgL_arg2425z00_3059;
																	BgL_pathz00_1622 = BgL_pathz00_1646;
																	{	/* Eval/evmodule.scm 491 */
																		obj_t BgL_ffilez00_1624;

																		{	/* Eval/evmodule.scm 491 */
																			obj_t BgL_auxz00_5401;

																			if (STRINGP(BgL_filez00_1621))
																				{	/* Eval/evmodule.scm 491 */
																					BgL_auxz00_5401 = BgL_filez00_1621;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5404;

																					BgL_auxz00_5404 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3071z00zz__evmodulez00,
																						BINT(((long) 19373)),
																						BGl_string3167z00zz__evmodulez00,
																						BGl_string3084z00zz__evmodulez00,
																						BgL_filez00_1621);
																					FAILURE(BgL_auxz00_5404, BFALSE,
																						BFALSE);
																				}
																			BgL_ffilez00_1624 =
																				BGl_findzd2filezf2pathz20zz__osz00
																				(BgL_auxz00_5401, BgL_pathz00_1622);
																		}
																		if (STRINGP(BgL_ffilez00_1624))
																			{	/* Eval/evmodule.scm 492 */
																				BgL_icz00_3058 =
																					BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00
																					(BgL_ffilez00_1624,
																					BGl_proc3168z00zz__evmodulez00);
																			}
																		else
																			{	/* Eval/evmodule.scm 499 */
																				obj_t BgL_arg2417z00_1643;

																				{	/* Eval/evmodule.scm 500 */
																					obj_t BgL_list2418z00_1644;

																					BgL_list2418z00_1644 =
																						MAKE_PAIR(BgL_filez00_1621, BNIL);
																					BgL_arg2417z00_1643 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string3169z00zz__evmodulez00,
																						BgL_list2418z00_1644);
																				}
																				BgL_icz00_3058 =
																					BGl_evcompilezd2errorzd2zz__evcompilez00
																					(BgL_locz00_83,
																					BGl_string3110z00zz__evmodulez00,
																					BgL_arg2417z00_1643,
																					BgL_pathz00_1622);
																			}
																	}
																}
																{	/* Eval/evmodule.scm 504 */
																	obj_t BgL_iez00_3060;

																	{	/* Eval/evmodule.scm 504 */
																		int BgL_auxz00_5415;

																		BgL_auxz00_5415 = (int) (((long) 1));
																		BgL_iez00_3060 =
																			BGL_MVALUES_VAL(BgL_auxz00_5415);
																	}
																	{	/* Eval/evmodule.scm 504 */
																		obj_t BgL_arg2422z00_3061;

																		obj_t BgL_arg2423z00_3062;

																		obj_t BgL_arg2424z00_3063;

																		BgL_arg2422z00_3061 =
																			CDR(BgL_filesz00_3043);
																		{	/* Eval/evmodule.scm 504 */
																			obj_t BgL_auxz00_5419;

																			{	/* Eval/evmodule.scm 504 */
																				bool_t BgL_testz00_5420;

																				if (PAIRP(BgL_iclausesz00_3044))
																					{	/* Eval/evmodule.scm 504 */
																						BgL_testz00_5420 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/evmodule.scm 504 */
																						BgL_testz00_5420 =
																							NULLP(BgL_iclausesz00_3044);
																					}
																				if (BgL_testz00_5420)
																					{	/* Eval/evmodule.scm 504 */
																						BgL_auxz00_5419 =
																							BgL_iclausesz00_3044;
																					}
																				else
																					{
																						obj_t BgL_auxz00_5424;

																						BgL_auxz00_5424 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3071z00zz__evmodulez00,
																							BINT(((long) 19796)),
																							BGl_string3170z00zz__evmodulez00,
																							BGl_string3117z00zz__evmodulez00,
																							BgL_iclausesz00_3044);
																						FAILURE(BgL_auxz00_5424, BFALSE,
																							BFALSE);
																			}}
																			BgL_arg2423z00_3062 =
																				bgl_append2(BgL_auxz00_5419,
																				BgL_icz00_3058);
																		}
																		{	/* Eval/evmodule.scm 504 */
																			obj_t BgL_auxz00_5429;

																			{	/* Eval/evmodule.scm 504 */
																				bool_t BgL_testz00_5430;

																				if (PAIRP(BgL_iexprsz00_3045))
																					{	/* Eval/evmodule.scm 504 */
																						BgL_testz00_5430 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/evmodule.scm 504 */
																						BgL_testz00_5430 =
																							NULLP(BgL_iexprsz00_3045);
																					}
																				if (BgL_testz00_5430)
																					{	/* Eval/evmodule.scm 504 */
																						BgL_auxz00_5429 =
																							BgL_iexprsz00_3045;
																					}
																				else
																					{
																						obj_t BgL_auxz00_5434;

																						BgL_auxz00_5434 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3071z00zz__evmodulez00,
																							BINT(((long) 19796)),
																							BGl_string3170z00zz__evmodulez00,
																							BGl_string3117z00zz__evmodulez00,
																							BgL_iexprsz00_3045);
																						FAILURE(BgL_auxz00_5434, BFALSE,
																							BFALSE);
																			}}
																			BgL_arg2424z00_3063 =
																				bgl_append2(BgL_auxz00_5429,
																				BgL_iez00_3060);
																		}
																		{
																			obj_t BgL_iexprsz00_5441;

																			obj_t BgL_iclausesz00_5440;

																			obj_t BgL_filesz00_5439;

																			BgL_filesz00_5439 = BgL_arg2422z00_3061;
																			BgL_iclausesz00_5440 =
																				BgL_arg2423z00_3062;
																			BgL_iexprsz00_5441 = BgL_arg2424z00_3063;
																			BgL_iexprsz00_3045 = BgL_iexprsz00_5441;
																			BgL_iclausesz00_3044 =
																				BgL_iclausesz00_5440;
																			BgL_filesz00_3043 = BgL_filesz00_5439;
																			goto BgL_loopz00_3042;
																		}
																	}
																}
															}
													}
												}
												{	/* Eval/evmodule.scm 527 */
													obj_t BgL_iez00_1592;

													{	/* Eval/evmodule.scm 527 */
														int BgL_auxz00_5442;

														BgL_auxz00_5442 = (int) (((long) 1));
														BgL_iez00_1592 = BGL_MVALUES_VAL(BgL_auxz00_5442);
													}
													{	/* Eval/evmodule.scm 527 */
														obj_t BgL_ic2z00_1593;

														BgL_ic2z00_1593 =
															BGl_evmodulezd2includezd2zz__evmodulez00
															(BgL_modz00_81, BgL_icz00_1591, BgL_locz00_83);
														{	/* Eval/evmodule.scm 529 */
															obj_t BgL_ie2z00_1594;

															{	/* Eval/evmodule.scm 529 */
																int BgL_auxz00_5446;

																BgL_auxz00_5446 = (int) (((long) 1));
																BgL_ie2z00_1594 =
																	BGL_MVALUES_VAL(BgL_auxz00_5446);
															}
															{	/* Eval/evmodule.scm 529 */
																obj_t BgL_arg2382z00_1595;

																obj_t BgL_arg2383z00_1596;

																obj_t BgL_arg2384z00_1597;

																BgL_arg2382z00_1595 = CDR(BgL_clausesz00_1582);
																{	/* Eval/evmodule.scm 530 */
																	obj_t BgL_list2385z00_1598;

																	{	/* Eval/evmodule.scm 530 */
																		obj_t BgL_arg2386z00_1599;

																		{	/* Eval/evmodule.scm 530 */
																			obj_t BgL_arg2387z00_1600;

																			BgL_arg2387z00_1600 =
																				MAKE_PAIR(BgL_icz00_1591, BNIL);
																			BgL_arg2386z00_1599 =
																				MAKE_PAIR(BgL_ic2z00_1593,
																				BgL_arg2387z00_1600);
																		}
																		BgL_list2385z00_1598 =
																			MAKE_PAIR(BgL_iclausesz00_1583,
																			BgL_arg2386z00_1599);
																	}
																	BgL_arg2383z00_1596 =
																		BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_list2385z00_1598);
																}
																{	/* Eval/evmodule.scm 531 */
																	obj_t BgL_list2388z00_1601;

																	{	/* Eval/evmodule.scm 531 */
																		obj_t BgL_arg2389z00_1602;

																		{	/* Eval/evmodule.scm 531 */
																			obj_t BgL_arg2390z00_1603;

																			BgL_arg2390z00_1603 =
																				MAKE_PAIR(BgL_iez00_1592, BNIL);
																			BgL_arg2389z00_1602 =
																				MAKE_PAIR(BgL_ie2z00_1594,
																				BgL_arg2390z00_1603);
																		}
																		BgL_list2388z00_1601 =
																			MAKE_PAIR(BgL_iexprsz00_1584,
																			BgL_arg2389z00_1602);
																	}
																	BgL_arg2384z00_1597 =
																		BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																		(BgL_list2388z00_1601);
																}
																{
																	obj_t BgL_iexprsz00_5460;

																	obj_t BgL_iclausesz00_5459;

																	obj_t BgL_clausesz00_5458;

																	BgL_clausesz00_5458 = BgL_arg2382z00_1595;
																	BgL_iclausesz00_5459 = BgL_arg2383z00_1596;
																	BgL_iexprsz00_5460 = BgL_arg2384z00_1597;
																	BgL_iexprsz00_1584 = BgL_iexprsz00_5460;
																	BgL_iclausesz00_1583 = BgL_iclausesz00_5459;
																	BgL_clausesz00_1582 = BgL_clausesz00_5458;
																	goto BgL_zc3anonymousza32378ze3z83_1585;
																}
															}
														}
													}
												}
											}
										else
											{	/* Eval/evmodule.scm 533 */
												obj_t BgL_arg2392z00_1605;

												obj_t BgL_arg2393z00_1606;

												{	/* Eval/evmodule.scm 533 */
													obj_t BgL_pairz00_3027;

													if (PAIRP(BgL_clausesz00_1582))
														{	/* Eval/evmodule.scm 533 */
															BgL_pairz00_3027 = BgL_clausesz00_1582;
														}
													else
														{
															obj_t BgL_auxz00_5463;

															BgL_auxz00_5463 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 20720)),
																BGl_string3170z00zz__evmodulez00,
																BGl_string3103z00zz__evmodulez00,
																BgL_clausesz00_1582);
															FAILURE(BgL_auxz00_5463, BFALSE, BFALSE);
														}
													BgL_arg2392z00_1605 = CDR(BgL_pairz00_3027);
												}
												{	/* Eval/evmodule.scm 534 */
													obj_t BgL_arg2394z00_1607;

													{	/* Eval/evmodule.scm 534 */
														obj_t BgL_arg2395z00_1608;

														BgL_arg2395z00_1608 = CAR(BgL_clausesz00_1582);
														{	/* Eval/evmodule.scm 534 */
															obj_t BgL_list2396z00_1609;

															BgL_list2396z00_1609 =
																MAKE_PAIR(BgL_arg2395z00_1608, BNIL);
															BgL_arg2394z00_1607 = BgL_list2396z00_1609;
													}}
													{	/* Eval/evmodule.scm 534 */
														obj_t BgL_auxz00_5470;

														{	/* Eval/evmodule.scm 534 */
															bool_t BgL_testz00_5471;

															if (PAIRP(BgL_iclausesz00_1583))
																{	/* Eval/evmodule.scm 534 */
																	BgL_testz00_5471 = ((bool_t) 1);
																}
															else
																{	/* Eval/evmodule.scm 534 */
																	BgL_testz00_5471 =
																		NULLP(BgL_iclausesz00_1583);
																}
															if (BgL_testz00_5471)
																{	/* Eval/evmodule.scm 534 */
																	BgL_auxz00_5470 = BgL_iclausesz00_1583;
																}
															else
																{
																	obj_t BgL_auxz00_5475;

																	BgL_auxz00_5475 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3071z00zz__evmodulez00,
																		BINT(((long) 20734)),
																		BGl_string3170z00zz__evmodulez00,
																		BGl_string3117z00zz__evmodulez00,
																		BgL_iclausesz00_1583);
																	FAILURE(BgL_auxz00_5475, BFALSE, BFALSE);
														}}
														BgL_arg2393z00_1606 =
															bgl_append2(BgL_auxz00_5470, BgL_arg2394z00_1607);
												}}
												{
													obj_t BgL_iclausesz00_5481;

													obj_t BgL_clausesz00_5480;

													BgL_clausesz00_5480 = BgL_arg2392z00_1605;
													BgL_iclausesz00_5481 = BgL_arg2393z00_1606;
													BgL_iclausesz00_1583 = BgL_iclausesz00_5481;
													BgL_clausesz00_1582 = BgL_clausesz00_5480;
													goto BgL_zc3anonymousza32378ze3z83_1585;
												}
											}
									}
								else
									{	/* Eval/evmodule.scm 523 */
										obj_t BgL_arg2401z00_1614;

										{	/* Eval/evmodule.scm 523 */
											obj_t BgL_pairz00_3031;

											if (PAIRP(BgL_clausesz00_1582))
												{	/* Eval/evmodule.scm 523 */
													BgL_pairz00_3031 = BgL_clausesz00_1582;
												}
											else
												{
													obj_t BgL_auxz00_5484;

													BgL_auxz00_5484 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3071z00zz__evmodulez00,
														BINT(((long) 20409)),
														BGl_string3170z00zz__evmodulez00,
														BGl_string3103z00zz__evmodulez00,
														BgL_clausesz00_1582);
													FAILURE(BgL_auxz00_5484, BFALSE, BFALSE);
												}
											BgL_arg2401z00_1614 = CAR(BgL_pairz00_3031);
										}
										return
											BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_83,
											BGl_string3110z00zz__evmodulez00,
											BGl_string3174z00zz__evmodulez00, BgL_arg2401z00_1614);
									}
							}
					}
				}
			}
		}
	}



/* <anonymous:2410> */
	obj_t BGl_zc3anonymousza32410ze3z83zz__evmodulez00(obj_t BgL_envz00_3406,
		obj_t BgL_pz00_3407)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 494 */
			{
				obj_t BgL_pz00_1627;

				BgL_pz00_1627 = BgL_pz00_3407;
				{	/* Eval/evmodule.scm 495 */
					obj_t BgL_e0z00_1629;

					{	/* Eval/evmodule.scm 495 */

						{	/* Eval/evmodule.scm 495 */
							obj_t BgL_iportz00_1639;

							if (INPUT_PORTP(BgL_pz00_1627))
								{	/* Eval/evmodule.scm 495 */
									BgL_iportz00_1639 = BgL_pz00_1627;
								}
							else
								{
									obj_t BgL_auxz00_5492;

									BgL_auxz00_5492 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3071z00zz__evmodulez00, BINT(((long) 19471)),
										BGl_string3175z00zz__evmodulez00,
										BGl_string3176z00zz__evmodulez00, BgL_pz00_1627);
									FAILURE(BgL_auxz00_5492, BFALSE, BFALSE);
								}
							{	/* Eval/evmodule.scm 495 */

								BgL_e0z00_1629 =
									BGl_readz00zz__readerz00(BgL_iportz00_1639, BFALSE);
					}}}
					{	/* Eval/evmodule.scm 496 */
						bool_t BgL_testz00_5497;

						if (PAIRP(BgL_e0z00_1629))
							{	/* Eval/evmodule.scm 496 */
								BgL_testz00_5497 =
									(CAR(BgL_e0z00_1629) == BGl_symbol3177z00zz__evmodulez00);
							}
						else
							{	/* Eval/evmodule.scm 496 */
								BgL_testz00_5497 = ((bool_t) 0);
							}
						if (BgL_testz00_5497)
							{	/* Eval/evmodule.scm 497 */
								obj_t BgL_val0_1910z00_1631;

								obj_t BgL_val1_1911z00_1632;

								BgL_val0_1910z00_1631 = CDR(BgL_e0z00_1629);
								BgL_val1_1911z00_1632 =
									BGl_portzd2ze3listz31zz__readerz00
									(BGl_readzd2envzd2zz__readerz00, BgL_pz00_1627);
								{	/* Eval/evmodule.scm 497 */
									int BgL_auxz00_5504;

									BgL_auxz00_5504 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_5504);
								}
								{	/* Eval/evmodule.scm 497 */
									int BgL_auxz00_5507;

									BgL_auxz00_5507 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5507, BgL_val1_1911z00_1632);
								}
								return BgL_val0_1910z00_1631;
							}
						else
							{	/* Eval/evmodule.scm 498 */
								obj_t BgL_val1_1913z00_1634;

								BgL_val1_1913z00_1634 =
									MAKE_PAIR(BgL_e0z00_1629,
									BGl_portzd2ze3listz31zz__readerz00
									(BGl_readzd2envzd2zz__readerz00, BgL_pz00_1627));
								{	/* Eval/evmodule.scm 498 */
									int BgL_auxz00_5512;

									BgL_auxz00_5512 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_5512);
								}
								{	/* Eval/evmodule.scm 498 */
									int BgL_auxz00_5515;

									BgL_auxz00_5515 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_5515, BgL_val1_1913z00_1634);
								}
								return BNIL;
							}
					}
				}
			}
		}
	}



/* evmodule-step1 */
	obj_t BGl_evmodulezd2step1zd2zz__evmodulez00(obj_t BgL_modz00_84,
		obj_t BgL_clausesz00_85, obj_t BgL_locz00_86)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 540 */
			{
				obj_t BgL_l1918z00_1668;

				BgL_l1918z00_1668 = BgL_clausesz00_85;
			BgL_zc3anonymousza32426ze3z83_1669:
				if (PAIRP(BgL_l1918z00_1668))
					{	/* Eval/evmodule.scm 541 */
						{	/* Eval/evmodule.scm 553 */
							obj_t BgL_clausez00_1671;

							BgL_clausez00_1671 = CAR(BgL_l1918z00_1668);
							BGL_MODULE_SET(BgL_modz00_84);
							{	/* Eval/evmodule.scm 543 */
								obj_t BgL_locz00_1672;

								{	/* Eval/evmodule.scm 543 */
									obj_t BgL__ortest_1845z00_1679;

									BgL__ortest_1845z00_1679 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_1671);
									if (CBOOL(BgL__ortest_1845z00_1679))
										{	/* Eval/evmodule.scm 543 */
											BgL_locz00_1672 = BgL__ortest_1845z00_1679;
										}
									else
										{	/* Eval/evmodule.scm 543 */
											BgL_locz00_1672 = BgL_locz00_86;
										}
								}
								if (CBOOL(BgL_locz00_1672))
									{	/* Eval/evmodule.scm 544 */
										BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00
											(BgL_locz00_1672);
									}
								else
									{	/* Eval/evmodule.scm 544 */
										BFALSE;
									}
								{	/* Eval/evmodule.scm 545 */
									obj_t BgL_casezd2valuezd2_1673;

									{	/* Eval/evmodule.scm 545 */
										obj_t BgL_pairz00_3108;

										if (PAIRP(BgL_clausez00_1671))
											{	/* Eval/evmodule.scm 545 */
												BgL_pairz00_3108 = BgL_clausez00_1671;
											}
										else
											{
												obj_t BgL_auxz00_5530;

												BgL_auxz00_5530 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 21232)),
													BGl_string3179z00zz__evmodulez00,
													BGl_string3103z00zz__evmodulez00, BgL_clausez00_1671);
												FAILURE(BgL_auxz00_5530, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_1673 = CAR(BgL_pairz00_3108);
									}
									if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
										(BgL_casezd2valuezd2_1673,
											BGl_symbol3180z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 545 */
											BGl_evmodulezd2libraryzd2zz__evmodulez00
												(BgL_clausez00_1671, BgL_locz00_1672);
										}
									else
										{	/* Eval/evmodule.scm 545 */
											if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
												(BgL_casezd2valuezd2_1673,
													BGl_symbol3182z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 545 */
													BGl_evmodulezd2staticzd2zz__evmodulez00(BgL_modz00_84,
														BgL_clausez00_1671, BgL_locz00_1672, ((bool_t) 0));
												}
											else
												{	/* Eval/evmodule.scm 545 */
													if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
														(BgL_casezd2valuezd2_1673,
															BGl_symbol3184z00zz__evmodulez00))
														{	/* Eval/evmodule.scm 545 */
															BGl_evmodulezd2exportzd2zz__evmodulez00
																(BgL_modz00_84, BgL_clausez00_1671,
																BgL_locz00_1672, ((bool_t) 0));
														}
													else
														{	/* Eval/evmodule.scm 545 */
															if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																(BgL_casezd2valuezd2_1673,
																	BGl_symbol3186z00zz__evmodulez00))
																{	/* Eval/evmodule.scm 545 */
																	BGl_evmodulezd2importzd2zz__evmodulez00
																		(BgL_modz00_84, BgL_clausez00_1671,
																		BgL_locz00_1672);
																}
															else
																{	/* Eval/evmodule.scm 545 */
																	BUNSPEC;
																}
														}
												}
										}
								}
							}
						}
						{
							obj_t BgL_l1918z00_5547;

							BgL_l1918z00_5547 = CDR(BgL_l1918z00_1668);
							BgL_l1918z00_1668 = BgL_l1918z00_5547;
							goto BgL_zc3anonymousza32426ze3z83_1669;
						}
					}
				else
					{	/* Eval/evmodule.scm 541 */
						if (NULLP(BgL_l1918z00_1668))
							{	/* Eval/evmodule.scm 541 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 541 */
								return
									BGl_errorz00zz__errorz00(BGl_string3108z00zz__evmodulez00,
									BGl_string3101z00zz__evmodulez00, BgL_l1918z00_1668);
							}
					}
			}
		}
	}



/* evmodule-step2 */
	obj_t BGl_evmodulezd2step2zd2zz__evmodulez00(obj_t BgL_modz00_87,
		obj_t BgL_clausesz00_88, obj_t BgL_locz00_89)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 559 */
			{
				obj_t BgL_l1920z00_1684;

				BgL_l1920z00_1684 = BgL_clausesz00_88;
			BgL_zc3anonymousza32434ze3z83_1685:
				if (PAIRP(BgL_l1920z00_1684))
					{	/* Eval/evmodule.scm 560 */
						{	/* Eval/evmodule.scm 568 */
							obj_t BgL_clausez00_1687;

							BgL_clausez00_1687 = CAR(BgL_l1920z00_1684);
							BGL_MODULE_SET(BgL_modz00_87);
							{	/* Eval/evmodule.scm 562 */
								obj_t BgL_locz00_1688;

								{	/* Eval/evmodule.scm 562 */
									obj_t BgL__ortest_1846z00_1694;

									BgL__ortest_1846z00_1694 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_1687);
									if (CBOOL(BgL__ortest_1846z00_1694))
										{	/* Eval/evmodule.scm 562 */
											BgL_locz00_1688 = BgL__ortest_1846z00_1694;
										}
									else
										{	/* Eval/evmodule.scm 562 */
											BgL_locz00_1688 = BgL_locz00_89;
										}
								}
								if (CBOOL(BgL_locz00_1688))
									{	/* Eval/evmodule.scm 563 */
										BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00
											(BgL_locz00_1688);
									}
								else
									{	/* Eval/evmodule.scm 563 */
										BFALSE;
									}
								{	/* Eval/evmodule.scm 564 */
									obj_t BgL_casezd2valuezd2_1689;

									{	/* Eval/evmodule.scm 564 */
										obj_t BgL_pairz00_3113;

										if (PAIRP(BgL_clausez00_1687))
											{	/* Eval/evmodule.scm 564 */
												BgL_pairz00_3113 = BgL_clausez00_1687;
											}
										else
											{
												obj_t BgL_auxz00_5564;

												BgL_auxz00_5564 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 21946)),
													BGl_string3188z00zz__evmodulez00,
													BGl_string3103z00zz__evmodulez00, BgL_clausez00_1687);
												FAILURE(BgL_auxz00_5564, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_1689 = CAR(BgL_pairz00_3113);
									}
									{	/* Eval/evmodule.scm 564 */
										bool_t BgL_testz00_5569;

										{	/* Eval/evmodule.scm 564 */
											bool_t BgL__ortest_1847z00_1692;

											BgL__ortest_1847z00_1692 =
												(BgL_casezd2valuezd2_1689 ==
												BGl_symbol3189z00zz__evmodulez00);
											if (BgL__ortest_1847z00_1692)
												{	/* Eval/evmodule.scm 564 */
													BgL_testz00_5569 = BgL__ortest_1847z00_1692;
												}
											else
												{	/* Eval/evmodule.scm 564 */
													bool_t BgL__ortest_1848z00_1693;

													BgL__ortest_1848z00_1693 =
														(BgL_casezd2valuezd2_1689 ==
														BGl_symbol3191z00zz__evmodulez00);
													if (BgL__ortest_1848z00_1693)
														{	/* Eval/evmodule.scm 564 */
															BgL_testz00_5569 = BgL__ortest_1848z00_1693;
														}
													else
														{	/* Eval/evmodule.scm 564 */
															BgL_testz00_5569 =
																(BgL_casezd2valuezd2_1689 ==
																BGl_symbol3193z00zz__evmodulez00);
														}
												}
										}
										if (BgL_testz00_5569)
											{	/* Eval/evmodule.scm 564 */
												BGl_evmodulezd2importzd2zz__evmodulez00(BgL_modz00_87,
													BgL_clausez00_1687, BgL_locz00_1688);
											}
										else
											{	/* Eval/evmodule.scm 564 */
												if (
													(BgL_casezd2valuezd2_1689 ==
														BGl_symbol3195z00zz__evmodulez00))
													{	/* Eval/evmodule.scm 564 */
														BGl_evmodulezd2fromzd2zz__evmodulez00(BgL_modz00_87,
															BgL_clausez00_1687, BgL_locz00_1688);
													}
												else
													{	/* Eval/evmodule.scm 564 */
														BUNSPEC;
													}
											}
									}
								}
							}
						}
						{
							obj_t BgL_l1920z00_5579;

							BgL_l1920z00_5579 = CDR(BgL_l1920z00_1684);
							BgL_l1920z00_1684 = BgL_l1920z00_5579;
							goto BgL_zc3anonymousza32434ze3z83_1685;
						}
					}
				else
					{	/* Eval/evmodule.scm 560 */
						if (NULLP(BgL_l1920z00_1684))
							{	/* Eval/evmodule.scm 560 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 560 */
								return
									BGl_errorz00zz__errorz00(BGl_string3108z00zz__evmodulez00,
									BGl_string3101z00zz__evmodulez00, BgL_l1920z00_1684);
							}
					}
			}
		}
	}



/* evmodule-step3 */
	obj_t BGl_evmodulezd2step3zd2zz__evmodulez00(obj_t BgL_modz00_90,
		obj_t BgL_clausesz00_91, obj_t BgL_locz00_92)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 574 */
			{
				obj_t BgL_l1922z00_1699;

				BgL_l1922z00_1699 = BgL_clausesz00_91;
			BgL_zc3anonymousza32440ze3z83_1700:
				if (PAIRP(BgL_l1922z00_1699))
					{	/* Eval/evmodule.scm 575 */
						{	/* Eval/evmodule.scm 583 */
							obj_t BgL_clausez00_1702;

							BgL_clausez00_1702 = CAR(BgL_l1922z00_1699);
							BGL_MODULE_SET(BgL_modz00_90);
							{	/* Eval/evmodule.scm 577 */
								obj_t BgL_locz00_1703;

								{	/* Eval/evmodule.scm 577 */
									obj_t BgL__ortest_1849z00_1707;

									BgL__ortest_1849z00_1707 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_clausez00_1702);
									if (CBOOL(BgL__ortest_1849z00_1707))
										{	/* Eval/evmodule.scm 577 */
											BgL_locz00_1703 = BgL__ortest_1849z00_1707;
										}
									else
										{	/* Eval/evmodule.scm 577 */
											BgL_locz00_1703 = BgL_locz00_92;
										}
								}
								if (CBOOL(BgL_locz00_1703))
									{	/* Eval/evmodule.scm 578 */
										BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00
											(BgL_locz00_1703);
									}
								else
									{	/* Eval/evmodule.scm 578 */
										BFALSE;
									}
								{	/* Eval/evmodule.scm 579 */
									obj_t BgL_casezd2valuezd2_1704;

									{	/* Eval/evmodule.scm 579 */
										obj_t BgL_pairz00_3120;

										if (PAIRP(BgL_clausez00_1702))
											{	/* Eval/evmodule.scm 579 */
												BgL_pairz00_3120 = BgL_clausez00_1702;
											}
										else
											{
												obj_t BgL_auxz00_5596;

												BgL_auxz00_5596 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3071z00zz__evmodulez00,
													BINT(((long) 22541)),
													BGl_string3197z00zz__evmodulez00,
													BGl_string3103z00zz__evmodulez00, BgL_clausez00_1702);
												FAILURE(BgL_auxz00_5596, BFALSE, BFALSE);
											}
										BgL_casezd2valuezd2_1704 = CAR(BgL_pairz00_3120);
									}
									if (
										(BgL_casezd2valuezd2_1704 ==
											BGl_symbol3182z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 579 */
											BGl_evmodulezd2staticzd2zz__evmodulez00(BgL_modz00_90,
												BgL_clausez00_1702, BgL_locz00_1703, ((bool_t) 1));
										}
									else
										{	/* Eval/evmodule.scm 579 */
											if (
												(BgL_casezd2valuezd2_1704 ==
													BGl_symbol3184z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 579 */
													BGl_evmodulezd2exportzd2zz__evmodulez00(BgL_modz00_90,
														BgL_clausez00_1702, BgL_locz00_1703, ((bool_t) 1));
												}
											else
												{	/* Eval/evmodule.scm 579 */
													BUNSPEC;
												}
										}
								}
							}
						}
						{
							obj_t BgL_l1922z00_5607;

							BgL_l1922z00_5607 = CDR(BgL_l1922z00_1699);
							BgL_l1922z00_1699 = BgL_l1922z00_5607;
							goto BgL_zc3anonymousza32440ze3z83_1700;
						}
					}
				else
					{	/* Eval/evmodule.scm 575 */
						if (NULLP(BgL_l1922z00_1699))
							{	/* Eval/evmodule.scm 575 */
								return BTRUE;
							}
						else
							{	/* Eval/evmodule.scm 575 */
								return
									BGl_errorz00zz__errorz00(BGl_string3108z00zz__evmodulez00,
									BGl_string3101z00zz__evmodulez00, BgL_l1922z00_1699);
							}
					}
			}
		}
	}



/* evmodule-cond-expand */
	obj_t BGl_evmodulezd2condzd2expandz00zz__evmodulez00(obj_t BgL_modz00_93,
		obj_t BgL_clausesz00_94, obj_t BgL_locz00_95)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 589 */
			{	/* Eval/evmodule.scm 594 */
				obj_t BgL_evmodulezd2condzd2expandzd2clausezd2_3409;

				BgL_evmodulezd2condzd2expandzd2clausezd2_3409 =
					make_fx_procedure
					(BGl_evmodulezd2condzd2expandzd2clausezd2zz__evmodulez00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_evmodulezd2condzd2expandzd2clausezd2_3409,
					(int) (((long) 0)), BgL_locz00_95);
				{	/* Eval/evmodule.scm 611 */
					obj_t BgL_list2446z00_1712;

					BgL_list2446z00_1712 = MAKE_PAIR(BgL_clausesz00_94, BNIL);
					return
						BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
						(BgL_evmodulezd2condzd2expandzd2clausezd2_3409,
						BgL_list2446z00_1712);
				}
			}
		}
	}



/* evmodule-cond-expand-clause */
	obj_t BGl_evmodulezd2condzd2expandzd2clausezd2zz__evmodulez00(obj_t
		BgL_envz00_3410, obj_t BgL_c0z00_3412)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 609 */
			{	/* Eval/evmodule.scm 594 */
				obj_t BgL_locz00_3411;

				BgL_locz00_3411 = PROCEDURE_REF(BgL_envz00_3410, (int) (((long) 0)));
				{
					obj_t BgL_c0z00_1713;

					BgL_c0z00_1713 = BgL_c0z00_3412;
					{	/* Eval/evmodule.scm 594 */
						obj_t BgL_loopz00_3408;

						BgL_loopz00_3408 =
							make_fx_procedure(BGl_loopz00zz__evmodulez00,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_loopz00_3408,
							(int) (((long) 0)), BgL_locz00_3411);
						PROCEDURE_SET(BgL_loopz00_3408, (int) (((long) 1)), BgL_c0z00_1713);
						return BGl_loopz00zz__evmodulez00(BgL_loopz00_3408, BgL_c0z00_1713);
					}
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__evmodulez00(obj_t BgL_envz00_3413, obj_t BgL_cz00_3416)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 592 */
			{	/* Eval/evmodule.scm 594 */
				obj_t BgL_locz00_3414;

				obj_t BgL_c0z00_3415;

				BgL_locz00_3414 = PROCEDURE_REF(BgL_envz00_3413, (int) (((long) 0)));
				BgL_c0z00_3415 = PROCEDURE_REF(BgL_envz00_3413, (int) (((long) 1)));
				{
					obj_t BgL_cz00_1716;

					BgL_cz00_1716 = BgL_cz00_3416;
				BgL_zc3anonymousza32448ze3z83_1717:
					{	/* Eval/evmodule.scm 594 */
						bool_t BgL_testz00_5633;

						if (PAIRP(BgL_cz00_1716))
							{	/* Eval/evmodule.scm 594 */
								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_cz00_1716))
									{	/* Eval/evmodule.scm 594 */
										obj_t BgL_auxz00_5638;

										BgL_auxz00_5638 = CAR(BgL_cz00_1716);
										BgL_testz00_5633 = SYMBOLP(BgL_auxz00_5638);
									}
								else
									{	/* Eval/evmodule.scm 594 */
										BgL_testz00_5633 = ((bool_t) 0);
									}
							}
						else
							{	/* Eval/evmodule.scm 594 */
								BgL_testz00_5633 = ((bool_t) 0);
							}
						if (BgL_testz00_5633)
							{	/* Eval/evmodule.scm 594 */
								if ((CAR(BgL_cz00_1716) == BGl_symbol3198z00zz__evmodulez00))
									{	/* Eval/evmodule.scm 598 */
										obj_t BgL_ncz00_1720;

										BgL_ncz00_1720 = BGl_expandz00zz__expandz00(BgL_cz00_1716);
										if (PAIRP(BgL_ncz00_1720))
											{	/* Eval/evmodule.scm 600 */
												if (
													(CAR(BgL_ncz00_1720) ==
														BGl_symbol3200z00zz__evmodulez00))
													{	/* Eval/evmodule.scm 602 */
														obj_t BgL_arg2453z00_1723;

														BgL_arg2453z00_1723 = CDR(BgL_ncz00_1720);
														{	/* Eval/evmodule.scm 602 */
															obj_t BgL_list2454z00_1724;

															BgL_list2454z00_1724 =
																MAKE_PAIR(BgL_arg2453z00_1723, BNIL);
															return
																BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																(BgL_envz00_3413, BgL_list2454z00_1724);
														}
													}
												else
													{
														obj_t BgL_cz00_5653;

														BgL_cz00_5653 = BgL_ncz00_1720;
														BgL_cz00_1716 = BgL_cz00_5653;
														goto BgL_zc3anonymousza32448ze3z83_1717;
													}
											}
										else
											{	/* Eval/evmodule.scm 600 */
												if ((BgL_ncz00_1720 == BUNSPEC))
													{	/* Eval/evmodule.scm 604 */
														return BNIL;
													}
												else
													{	/* Eval/evmodule.scm 607 */
														obj_t BgL_list2458z00_1728;

														BgL_list2458z00_1728 =
															MAKE_PAIR(BgL_ncz00_1720, BNIL);
														return BgL_list2458z00_1728;
													}
											}
									}
								else
									{	/* Eval/evmodule.scm 609 */
										obj_t BgL_list2459z00_1729;

										BgL_list2459z00_1729 = MAKE_PAIR(BgL_cz00_1716, BNIL);
										return BgL_list2459z00_1729;
									}
							}
						else
							{	/* Eval/evmodule.scm 595 */
								obj_t BgL_locz00_1732;

								{	/* Eval/evmodule.scm 595 */
									obj_t BgL__ortest_1850z00_1733;

									BgL__ortest_1850z00_1733 =
										BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_cz00_1716);
									if (CBOOL(BgL__ortest_1850z00_1733))
										{	/* Eval/evmodule.scm 595 */
											BgL_locz00_1732 = BgL__ortest_1850z00_1733;
										}
									else
										{	/* Eval/evmodule.scm 595 */
											BgL_locz00_1732 = BgL_locz00_3414;
										}
								}
								return
									BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_1732,
									BGl_symbol3109z00zz__evmodulez00,
									BGl_string3174z00zz__evmodulez00, BgL_c0z00_3415);
							}
					}
				}
			}
		}
	}



/* evmodule */
	BGL_EXPORTED_DEF obj_t BGl_evmodulez00zz__evmodulez00(obj_t BgL_expz00_99,
		obj_t BgL_locz00_100)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 637 */
			{	/* Eval/evmodule.scm 638 */
				obj_t BgL_locz00_1744;

				{	/* Eval/evmodule.scm 638 */
					obj_t BgL__ortest_1851z00_1773;

					BgL__ortest_1851z00_1773 =
						BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_99);
					if (CBOOL(BgL__ortest_1851z00_1773))
						{	/* Eval/evmodule.scm 638 */
							BgL_locz00_1744 = BgL__ortest_1851z00_1773;
						}
					else
						{	/* Eval/evmodule.scm 638 */
							BgL_locz00_1744 = BgL_locz00_100;
						}
				}
				{	/* Eval/evmodule.scm 638 */
					obj_t BgL_hdlz00_1745;

					BgL_hdlz00_1745 =
						BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
					{	/* Eval/evmodule.scm 639 */

						{
							obj_t BgL_namez00_1746;

							obj_t BgL_clausesz00_1747;

							if (PAIRP(BgL_expz00_99))
								{	/* Eval/evmodule.scm 640 */
									obj_t BgL_cdrzd22059zd2_1752;

									BgL_cdrzd22059zd2_1752 = CDR(BgL_expz00_99);
									if ((CAR(BgL_expz00_99) == BGl_symbol3076z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 640 */
											if (PAIRP(BgL_cdrzd22059zd2_1752))
												{	/* Eval/evmodule.scm 640 */
													obj_t BgL_carzd22062zd2_1755;

													BgL_carzd22062zd2_1755 = CAR(BgL_cdrzd22059zd2_1752);
													if (SYMBOLP(BgL_carzd22062zd2_1755))
														{	/* Eval/evmodule.scm 640 */
															BgL_namez00_1746 = BgL_carzd22062zd2_1755;
															BgL_clausesz00_1747 = CDR(BgL_cdrzd22059zd2_1752);
															if (CBOOL(BgL_locz00_1744))
																{	/* Eval/evmodule.scm 642 */
																	BGl_evmeaningzd2setzd2errorzd2locationz12zc0zz__everrorz00
																		(BgL_locz00_1744);
																}
															else
																{	/* Eval/evmodule.scm 642 */
																	BFALSE;
																}
															if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																(BgL_clausesz00_1747))
																{	/* Eval/evmodule.scm 645 */
																	obj_t BgL_pathz00_1761;

																	{	/* Eval/evmodule.scm 645 */
																		obj_t BgL__ortest_1852z00_1772;

																		BgL__ortest_1852z00_1772 =
																			BGl_evcompilezd2loczd2filenamez00zz__evcompilez00
																			(BgL_locz00_1744);
																		if (CBOOL(BgL__ortest_1852z00_1772))
																			{	/* Eval/evmodule.scm 645 */
																				BgL_pathz00_1761 =
																					BgL__ortest_1852z00_1772;
																			}
																		else
																			{	/* Eval/evmodule.scm 645 */
																				BgL_pathz00_1761 =
																					BGl_string3202z00zz__evmodulez00;
																			}
																	}
																	{	/* Eval/evmodule.scm 645 */
																		obj_t BgL_modz00_1762;

																		BgL_modz00_1762 =
																			BGl_makezd2evmodulezd2zz__evmodulez00
																			(BgL_namez00_1746, BgL_pathz00_1761,
																			BgL_locz00_1744);
																		{	/* Eval/evmodule.scm 646 */

																			{	/* Eval/evmodule.scm 647 */
																				obj_t BgL_val1853z00_1763;

																				BgL_val1853z00_1763 =
																					BGl_zc3exitza32483ze3z83zz__evmodulez00
																					(BgL_locz00_1744, BgL_clausesz00_1747,
																					BgL_modz00_1762, BgL_expz00_99,
																					BgL_hdlz00_1745);
																				BGL_MODULE_SET(BgL_modz00_1762);
																				if (CBOOL
																					(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
																						(BgL_val1853z00_1763)))
																					{	/* Eval/evmodule.scm 652 */
																						obj_t BgL_arg2481z00_1765;

																						obj_t BgL_arg2482z00_1766;

																						{	/* Eval/evmodule.scm 652 */
																							obj_t BgL_pairz00_3166;

																							if (PAIRP(BgL_val1853z00_1763))
																								{	/* Eval/evmodule.scm 652 */
																									BgL_pairz00_3166 =
																										BgL_val1853z00_1763;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5693;

																									BgL_auxz00_5693 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3071z00zz__evmodulez00,
																										BINT(((long) 25422)),
																										BGl_string3203z00zz__evmodulez00,
																										BGl_string3103z00zz__evmodulez00,
																										BgL_val1853z00_1763);
																									FAILURE(BgL_auxz00_5693,
																										BFALSE, BFALSE);
																								}
																							BgL_arg2481z00_1765 =
																								CAR(BgL_pairz00_3166);
																						}
																						BgL_arg2482z00_1766 =
																							CDR(BgL_val1853z00_1763);
																						return
																							BGl_unwindzd2untilz12zc0zz__bexitz00
																							(BgL_arg2481z00_1765,
																							BgL_arg2482z00_1766);
																					}
																				else
																					{	/* Eval/evmodule.scm 652 */
																						return BgL_val1853z00_1763;
																					}
																			}
																		}
																	}
																}
															else
																{	/* Eval/evmodule.scm 643 */
																	return
																		BGl_evcompilezd2errorzd2zz__evcompilez00
																		(BgL_locz00_1744,
																		BGl_symbol3109z00zz__evmodulez00,
																		BGl_string3204z00zz__evmodulez00,
																		BgL_clausesz00_1747);
																}
														}
													else
														{	/* Eval/evmodule.scm 640 */
															return
																BGl_evcompilezd2errorzd2zz__evcompilez00
																(BgL_locz00_1744,
																BGl_symbol3109z00zz__evmodulez00,
																BGl_string3205z00zz__evmodulez00,
																BgL_expz00_99);
														}
												}
											else
												{	/* Eval/evmodule.scm 640 */
													return
														BGl_evcompilezd2errorzd2zz__evcompilez00
														(BgL_locz00_1744, BGl_symbol3109z00zz__evmodulez00,
														BGl_string3205z00zz__evmodulez00, BgL_expz00_99);
												}
										}
									else
										{	/* Eval/evmodule.scm 640 */
											return
												BGl_evcompilezd2errorzd2zz__evcompilez00
												(BgL_locz00_1744, BGl_symbol3109z00zz__evmodulez00,
												BGl_string3205z00zz__evmodulez00, BgL_expz00_99);
										}
								}
							else
								{	/* Eval/evmodule.scm 640 */
									return
										BGl_evcompilezd2errorzd2zz__evcompilez00(BgL_locz00_1744,
										BGl_symbol3109z00zz__evmodulez00,
										BGl_string3205z00zz__evmodulez00, BgL_expz00_99);
								}
						}
					}
				}
			}
		}
	}



/* <exit:2483> */
	obj_t BGl_zc3exitza32483ze3z83zz__evmodulez00(obj_t BgL_locz00_3426,
		obj_t BgL_clausesz00_3425, obj_t BgL_modz00_3424, obj_t BgL_expz00_3423,
		obj_t BgL_hdlz00_3422)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 652 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1854z00_1768;

			if (SET_EXIT(BgL_an_exit1854z00_1768))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1854z00_1768 = (void *) jmpbuf;
					{	/* Eval/evmodule.scm 652 */

						PUSH_EXIT(BgL_an_exit1854z00_1768, ((long) 0));
						{	/* Eval/evmodule.scm 649 */
							obj_t BgL_val1855z00_1769;

							if (PROCEDUREP(BgL_hdlz00_3422))
								{	/* Eval/evmodule.scm 650 */
									obj_t BgL_arg2485z00_1771;

									BgL_arg2485z00_1771 =
										PROCEDURE_ENTRY(BgL_hdlz00_3422) (BgL_hdlz00_3422,
										BgL_expz00_3423, BEOA);
									{	/* Eval/evmodule.scm 650 */
										int BgL_auxz00_5713;

										BgL_auxz00_5713 = (int) (((long) 6));
										STRUCT_SET(BgL_modz00_3424, BgL_auxz00_5713,
											BgL_arg2485z00_1771);
								}}
							else
								{	/* Eval/evmodule.scm 649 */
									BFALSE;
								}
							{	/* Eval/evmodule.scm 651 */
								obj_t BgL_mclausesz00_3160;

								BgL_mclausesz00_3160 =
									BGl_evmodulezd2condzd2expandz00zz__evmodulez00
									(BgL_modz00_3424, BgL_clausesz00_3425, BgL_locz00_3426);
								{	/* Eval/evmodule.scm 651 */
									obj_t BgL_iclausesz00_3161;

									BgL_iclausesz00_3161 =
										BGl_evmodulezd2includezd2zz__evmodulez00(BgL_modz00_3424,
										BgL_mclausesz00_3160, BgL_locz00_3426);
									{	/* Eval/evmodule.scm 651 */
										obj_t BgL_iexprsz00_3162;

										{	/* Eval/evmodule.scm 651 */
											int BgL_auxz00_5718;

											BgL_auxz00_5718 = (int) (((long) 1));
											BgL_iexprsz00_3162 = BGL_MVALUES_VAL(BgL_auxz00_5718);
										}
										BGl_evmodulezd2step1zd2zz__evmodulez00(BgL_modz00_3424,
											BgL_iclausesz00_3161, BgL_locz00_3426);
										BGl_evmodulezd2step2zd2zz__evmodulez00(BgL_modz00_3424,
											BgL_iclausesz00_3161, BgL_locz00_3426);
										BGl_evmodulezd2step3zd2zz__evmodulez00(BgL_modz00_3424,
											BgL_mclausesz00_3160, BgL_locz00_3426);
										{	/* Eval/evmodule.scm 651 */
											obj_t BgL_arg2467z00_3163;

											obj_t BgL_arg2469z00_3164;

											BgL_arg2467z00_3163 = BGl_symbol3200z00zz__evmodulez00;
											{	/* Eval/evmodule.scm 651 */
												obj_t BgL_auxz00_5724;

												{	/* Eval/evmodule.scm 651 */
													bool_t BgL_testz00_5725;

													if (PAIRP(BgL_iexprsz00_3162))
														{	/* Eval/evmodule.scm 651 */
															BgL_testz00_5725 = ((bool_t) 1);
														}
													else
														{	/* Eval/evmodule.scm 651 */
															BgL_testz00_5725 = NULLP(BgL_iexprsz00_3162);
														}
													if (BgL_testz00_5725)
														{	/* Eval/evmodule.scm 651 */
															BgL_auxz00_5724 = BgL_iexprsz00_3162;
														}
													else
														{
															obj_t BgL_auxz00_5729;

															BgL_auxz00_5729 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3071z00zz__evmodulez00,
																BINT(((long) 25381)),
																BGl_string3206z00zz__evmodulez00,
																BGl_string3117z00zz__evmodulez00,
																BgL_iexprsz00_3162);
															FAILURE(BgL_auxz00_5729, BFALSE, BFALSE);
												}}
												BgL_arg2469z00_3164 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_auxz00_5724, BNIL);
											}
											BgL_val1855z00_1769 =
												MAKE_PAIR(BgL_arg2467z00_3163, BgL_arg2469z00_3164);
							}}}}
							POP_EXIT();
							return BgL_val1855z00_1769;
						}
					}
				}
		}
	}



/* _evmodule */
	obj_t BGl__evmodulez00zz__evmodulez00(obj_t BgL_envz00_3417,
		obj_t BgL_expz00_3418, obj_t BgL_locz00_3419)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 637 */
			{	/* Eval/evmodule.scm 638 */
				obj_t BgL_auxz00_5736;

				{	/* Eval/evmodule.scm 638 */
					bool_t BgL_testz00_5737;

					if (PAIRP(BgL_expz00_3418))
						{	/* Eval/evmodule.scm 638 */
							BgL_testz00_5737 = ((bool_t) 1);
						}
					else
						{	/* Eval/evmodule.scm 638 */
							BgL_testz00_5737 = NULLP(BgL_expz00_3418);
						}
					if (BgL_testz00_5737)
						{	/* Eval/evmodule.scm 638 */
							BgL_auxz00_5736 = BgL_expz00_3418;
						}
					else
						{
							obj_t BgL_auxz00_5741;

							BgL_auxz00_5741 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3071z00zz__evmodulez00, BINT(((long) 24850)),
								BGl_string3207z00zz__evmodulez00,
								BGl_string3117z00zz__evmodulez00, BgL_expz00_3418);
							FAILURE(BgL_auxz00_5741, BFALSE, BFALSE);
				}}
				return BGl_evmodulez00zz__evmodulez00(BgL_auxz00_5736, BgL_locz00_3419);
			}
		}
	}



/* evmodule-static-class */
	BGL_EXPORTED_DEF obj_t BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t
		BgL_xz00_101)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 659 */
			{	/* Eval/evmodule.scm 660 */
				obj_t BgL_modz00_1774;

				BgL_modz00_1774 = BGL_MODULE();
				{	/* Eval/evmodule.scm 660 */
					obj_t BgL_restz00_1775;

					{	/* Eval/evmodule.scm 661 */
						obj_t BgL_pairz00_3168;

						if (PAIRP(BgL_xz00_101))
							{	/* Eval/evmodule.scm 661 */
								BgL_pairz00_3168 = BgL_xz00_101;
							}
						else
							{
								obj_t BgL_auxz00_5749;

								BgL_auxz00_5749 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string3071z00zz__evmodulez00, BINT(((long) 25826)),
									BGl_string3208z00zz__evmodulez00,
									BGl_string3103z00zz__evmodulez00, BgL_xz00_101);
								FAILURE(BgL_auxz00_5749, BFALSE, BFALSE);
							}
						BgL_restz00_1775 = CDR(BgL_pairz00_3168);
					}
					{	/* Eval/evmodule.scm 661 */
						obj_t BgL_clausez00_1776;

						{	/* Eval/evmodule.scm 662 */
							obj_t BgL_casezd2valuezd2_1778;

							BgL_casezd2valuezd2_1778 = CAR(BgL_xz00_101);
							if (
								(BgL_casezd2valuezd2_1778 == BGl_symbol3209z00zz__evmodulez00))
								{	/* Eval/evmodule.scm 664 */
									obj_t BgL_arg2488z00_1780;

									{	/* Eval/evmodule.scm 664 */
										obj_t BgL_arg2489z00_1781;

										obj_t BgL_arg2491z00_1782;

										BgL_arg2489z00_1781 = BGl_symbol3182z00zz__evmodulez00;
										{	/* Eval/evmodule.scm 664 */
											obj_t BgL_arg2492z00_1783;

											{	/* Eval/evmodule.scm 664 */
												obj_t BgL_arg2495z00_1786;

												obj_t BgL_arg2497z00_1787;

												BgL_arg2495z00_1786 = BGl_symbol3114z00zz__evmodulez00;
												{	/* Eval/evmodule.scm 664 */
													obj_t BgL_auxz00_5757;

													{	/* Eval/evmodule.scm 664 */
														bool_t BgL_testz00_5758;

														if (PAIRP(BgL_restz00_1775))
															{	/* Eval/evmodule.scm 664 */
																BgL_testz00_5758 = ((bool_t) 1);
															}
														else
															{	/* Eval/evmodule.scm 664 */
																BgL_testz00_5758 = NULLP(BgL_restz00_1775);
															}
														if (BgL_testz00_5758)
															{	/* Eval/evmodule.scm 664 */
																BgL_auxz00_5757 = BgL_restz00_1775;
															}
														else
															{
																obj_t BgL_auxz00_5762;

																BgL_auxz00_5762 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3071z00zz__evmodulez00,
																	BINT(((long) 25907)),
																	BGl_string3208z00zz__evmodulez00,
																	BGl_string3117z00zz__evmodulez00,
																	BgL_restz00_1775);
																FAILURE(BgL_auxz00_5762, BFALSE, BFALSE);
													}}
													BgL_arg2497z00_1787 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_5757, BNIL);
												}
												BgL_arg2492z00_1783 =
													MAKE_PAIR(BgL_arg2495z00_1786, BgL_arg2497z00_1787);
											}
											{	/* Eval/evmodule.scm 664 */
												obj_t BgL_list2494z00_1785;

												BgL_list2494z00_1785 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2491z00_1782 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2492z00_1783, BgL_list2494z00_1785);
										}}
										BgL_arg2488z00_1780 =
											MAKE_PAIR(BgL_arg2489z00_1781, BgL_arg2491z00_1782);
									}
									BgL_clausez00_1776 =
										BGl_evepairifyz00zz__prognz00(BgL_arg2488z00_1780,
										BgL_xz00_101);
								}
							else
								{	/* Eval/evmodule.scm 662 */
									if (
										(BgL_casezd2valuezd2_1778 ==
											BGl_symbol3211z00zz__evmodulez00))
										{	/* Eval/evmodule.scm 666 */
											obj_t BgL_arg2499z00_1789;

											{	/* Eval/evmodule.scm 666 */
												obj_t BgL_arg2500z00_1790;

												obj_t BgL_arg2501z00_1791;

												BgL_arg2500z00_1790 = BGl_symbol3182z00zz__evmodulez00;
												{	/* Eval/evmodule.scm 666 */
													obj_t BgL_arg2502z00_1792;

													{	/* Eval/evmodule.scm 666 */
														obj_t BgL_arg2505z00_1795;

														obj_t BgL_arg2506z00_1796;

														BgL_arg2505z00_1795 =
															BGl_symbol3119z00zz__evmodulez00;
														{	/* Eval/evmodule.scm 666 */
															obj_t BgL_auxz00_5774;

															{	/* Eval/evmodule.scm 666 */
																bool_t BgL_testz00_5775;

																if (PAIRP(BgL_restz00_1775))
																	{	/* Eval/evmodule.scm 666 */
																		BgL_testz00_5775 = ((bool_t) 1);
																	}
																else
																	{	/* Eval/evmodule.scm 666 */
																		BgL_testz00_5775 = NULLP(BgL_restz00_1775);
																	}
																if (BgL_testz00_5775)
																	{	/* Eval/evmodule.scm 666 */
																		BgL_auxz00_5774 = BgL_restz00_1775;
																	}
																else
																	{
																		obj_t BgL_auxz00_5779;

																		BgL_auxz00_5779 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3071z00zz__evmodulez00,
																			BINT(((long) 25985)),
																			BGl_string3208z00zz__evmodulez00,
																			BGl_string3117z00zz__evmodulez00,
																			BgL_restz00_1775);
																		FAILURE(BgL_auxz00_5779, BFALSE, BFALSE);
															}}
															BgL_arg2506z00_1796 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_5774, BNIL);
														}
														BgL_arg2502z00_1792 =
															MAKE_PAIR(BgL_arg2505z00_1795,
															BgL_arg2506z00_1796);
													}
													{	/* Eval/evmodule.scm 666 */
														obj_t BgL_list2504z00_1794;

														BgL_list2504z00_1794 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2501z00_1791 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2502z00_1792, BgL_list2504z00_1794);
												}}
												BgL_arg2499z00_1789 =
													MAKE_PAIR(BgL_arg2500z00_1790, BgL_arg2501z00_1791);
											}
											BgL_clausez00_1776 =
												BGl_evepairifyz00zz__prognz00(BgL_arg2499z00_1789,
												BgL_xz00_101);
										}
									else
										{	/* Eval/evmodule.scm 662 */
											if (
												(BgL_casezd2valuezd2_1778 ==
													BGl_symbol3213z00zz__evmodulez00))
												{	/* Eval/evmodule.scm 668 */
													obj_t BgL_arg2508z00_1798;

													{	/* Eval/evmodule.scm 668 */
														obj_t BgL_arg2509z00_1799;

														obj_t BgL_arg2510z00_1800;

														BgL_arg2509z00_1799 =
															BGl_symbol3182z00zz__evmodulez00;
														{	/* Eval/evmodule.scm 668 */
															obj_t BgL_arg2511z00_1801;

															{	/* Eval/evmodule.scm 668 */
																obj_t BgL_arg2514z00_1804;

																obj_t BgL_arg2515z00_1805;

																BgL_arg2514z00_1804 =
																	BGl_symbol3121z00zz__evmodulez00;
																{	/* Eval/evmodule.scm 668 */
																	obj_t BgL_auxz00_5791;

																	{	/* Eval/evmodule.scm 668 */
																		bool_t BgL_testz00_5792;

																		if (PAIRP(BgL_restz00_1775))
																			{	/* Eval/evmodule.scm 668 */
																				BgL_testz00_5792 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/evmodule.scm 668 */
																				BgL_testz00_5792 =
																					NULLP(BgL_restz00_1775);
																			}
																		if (BgL_testz00_5792)
																			{	/* Eval/evmodule.scm 668 */
																				BgL_auxz00_5791 = BgL_restz00_1775;
																			}
																		else
																			{
																				obj_t BgL_auxz00_5796;

																				BgL_auxz00_5796 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3071z00zz__evmodulez00,
																					BINT(((long) 26072)),
																					BGl_string3208z00zz__evmodulez00,
																					BGl_string3117z00zz__evmodulez00,
																					BgL_restz00_1775);
																				FAILURE(BgL_auxz00_5796, BFALSE,
																					BFALSE);
																	}}
																	BgL_arg2515z00_1805 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_auxz00_5791, BNIL);
																}
																BgL_arg2511z00_1801 =
																	MAKE_PAIR(BgL_arg2514z00_1804,
																	BgL_arg2515z00_1805);
															}
															{	/* Eval/evmodule.scm 668 */
																obj_t BgL_list2513z00_1803;

																BgL_list2513z00_1803 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2510z00_1800 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2511z00_1801, BgL_list2513z00_1803);
														}}
														BgL_arg2508z00_1798 =
															MAKE_PAIR(BgL_arg2509z00_1799,
															BgL_arg2510z00_1800);
													}
													BgL_clausez00_1776 =
														BGl_evepairifyz00zz__prognz00(BgL_arg2508z00_1798,
														BgL_xz00_101);
												}
											else
												{	/* Eval/evmodule.scm 662 */
													BgL_clausez00_1776 = BUNSPEC;
												}
										}
								}
						}
						{	/* Eval/evmodule.scm 662 */

							return
								BGl_evmodulezd2staticzd2zz__evmodulez00(BgL_modz00_1774,
								BgL_clausez00_1776,
								BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_xz00_101),
								((bool_t) 1));
						}
					}
				}
			}
		}
	}



/* _evmodule-static-class */
	obj_t BGl__evmodulezd2staticzd2classz00zz__evmodulez00(obj_t BgL_envz00_3420,
		obj_t BgL_xz00_3421)
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 659 */
			{	/* Eval/evmodule.scm 660 */
				obj_t BgL_auxz00_5808;

				{	/* Eval/evmodule.scm 660 */
					bool_t BgL_testz00_5809;

					if (PAIRP(BgL_xz00_3421))
						{	/* Eval/evmodule.scm 660 */
							BgL_testz00_5809 = ((bool_t) 1);
						}
					else
						{	/* Eval/evmodule.scm 660 */
							BgL_testz00_5809 = NULLP(BgL_xz00_3421);
						}
					if (BgL_testz00_5809)
						{	/* Eval/evmodule.scm 660 */
							BgL_auxz00_5808 = BgL_xz00_3421;
						}
					else
						{
							obj_t BgL_auxz00_5813;

							BgL_auxz00_5813 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string3071z00zz__evmodulez00, BINT(((long) 25785)),
								BGl_string3215z00zz__evmodulez00,
								BGl_string3117z00zz__evmodulez00, BgL_xz00_3421);
							FAILURE(BgL_auxz00_5813, BFALSE, BFALSE);
				}}
				return BGl_evmodulezd2staticzd2classz00zz__evmodulez00(BgL_auxz00_5808);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evmodulez00()
	{
		AN_OBJECT;
		{	/* Eval/evmodule.scm 15 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 212515581),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 32719508),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 81619416),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 508636713),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 453710891),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long)
					183289170), BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 41770876),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 174190226),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
			return BGl_modulezd2initializa7ationz75zz__evobjectz00(((long) 266783111),
				BSTRING_TO_STRING(BGl_string3216z00zz__evmodulez00));
		}
	}

#ifdef __cplusplus
}
#endif
