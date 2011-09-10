/*===========================================================================*/
/*   (Eval/eval.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/eval.scm -indent -o objs/obj_u/Eval/eval.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;


	static obj_t BGl__notifyzd2assertzd2failz00zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32091ze3z83zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
	extern obj_t BGl_notifyzd2interruptzd2zz__errorz00(int);
	static obj_t BGl_zc3anonymousza32094ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32083ze3z83zz__evalz00(obj_t, long);
	extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern BgL_z62errorz62_bglt BGl_makezd2z62errorzb0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t obj_to_string(obj_t);
	static obj_t BGl_readz00zz__evalz00(obj_t);
	extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_symbol3183z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3185z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32087ze3z83zz__evalz00();
	static obj_t BGl_symbol3187z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_errz00zz__evalz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3200z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3191z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_notifyzd2assertzd2failz00zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol3208z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3211z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3212z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bytezd2codezd2runz00zz__evalz00(obj_t);
	static obj_t BGl_zc3anonymousza32667ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32112ze3z83zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2prompterzd2zz__evalz00();
	static obj_t BGl_zc3exitza32101ze3z83zz__evalz00(obj_t);
	static obj_t BGl_zc3anonymousza32668ze3z83zz__evalz00(obj_t);
	static obj_t BGl_zc3anonymousza32249ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl__czd2debugzd2replz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3231z00zz__evalz00 = BUNSPEC;
	extern int bgl_debug();
	static obj_t BGl__transcriptzd2offzd2zz__evalz00(obj_t);
	extern obj_t BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00();
	BGL_EXPORTED_DECL obj_t BGl_interactionzd2environmentzd2zz__evalz00();
	extern obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_symbol3237z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32114ze3z83zz__evalz00(obj_t);
	static obj_t BGl_symbol3242z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3246z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3248z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3252z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__evalz00();
	static obj_t BGl_zc3anonymousza32116ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3259z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_evalzd2modulezd2zz__evmodulez00();
	extern obj_t reset_console(obj_t);
	static obj_t BGl_symbol3267z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3269z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3271z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3273z00zz__evalz00 = BUNSPEC;
	extern bool_t fexists(char *);
	static obj_t BGl_symbol3275z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32106ze3z83zz__evalz00(obj_t);
	static obj_t BGl_symbol3277z00zz__evalz00 = BUNSPEC;
	static obj_t BGl__bytezd2codezd2compilez00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3279z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3281z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3283z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3285z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3287z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3289z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3301z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3291z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3303z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3293z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32664ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3305z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3295z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3298z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3315z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32099ze3z83zz__evalz00(obj_t);
	static obj_t BGl_zc3exitza32246ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol3318z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3320z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_symbol3326z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3328z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3330z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3333z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3335z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32680ze3z83zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_symbol3339z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3341z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3344z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_intrhdlz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3346z00zz__evalz00 = BUNSPEC;
	static obj_t BGl__expandzd2definezd2macroz00zz__evalz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_signalz00zz__osz00(int, obj_t);
	static obj_t BGl_symbol3348z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_defaultzd2evaluatezd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3351z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3353z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_replz00zz__evalz00();
	static obj_t BGl_symbol3366z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_symbol3369z00zz__evalz00 = BUNSPEC;
	static obj_t BGl__nullzd2environmentzd2zz__evalz00(obj_t, obj_t);
	static obj_t BGl_symbol3372z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_exceptionzd2notifyzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2replzd2printerz12z12zz__evalz00(obj_t);
	static obj_t BGl_symbol3376z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_debug_repl(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t);
	extern obj_t BGl_extendze2rze2macrozd2envzd2zz__match_normaliza7eza7(obj_t,
		obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_keyword3256z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32269ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	static obj_t BGl__loadz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evalz00();
	static obj_t BGl_zc3anonymousza32419ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	static obj_t BGl_findzd2filezd2zz__evalz00(obj_t);
	extern bool_t BGl_evmodulezf3zf3zz__evmodulez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_transcriptzd2offzd2zz__evalz00();
	extern obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2passza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_za2promptza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_evexpandzd2errorzd2zz__evalz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evmeaningz00zz__evmeaningz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__evalz00();
	static obj_t BGl__expandzd2definezd2expanderz00zz__evalz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2evalzd2readerz00zz__evalz00();
	static obj_t BGl_zc3anonymousza32008ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32270ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_zc3exitza32420ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32013ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl__quitz00zz__evalz00(obj_t);
	static obj_t BGl_quit_2968z00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nativezd2replzd2printerz00zz__evalz00();
	static obj_t BGl__nativezd2replzd2printerz00zz__evalz00(obj_t);
	extern obj_t BGl_evmeaningzd2exceptionzd2handlerz00zz__everrorz00(obj_t);
	extern obj_t BGl_evcompilez00zz__evcompilez00(obj_t, obj_t, obj_t, obj_t,
		bool_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DEF obj_t BGl_za2loadzd2verboseza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl__transcriptzd2onzd2zz__evalz00(obj_t, obj_t);
	static obj_t BGl__expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__setzd2replzd2printerz12z12zz__evalz00(obj_t, obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl__defaultzd2environmentzd2zz__evalz00(obj_t);
	static obj_t BGl__bytezd2codezd2evaluatez00zz__evalz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2replzd2quitza2zd2zz__evalz00 = BUNSPEC;
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evprimopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__everrorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmeaningz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__install_expandersz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_expandz00zz__expandz00(obj_t);
	static obj_t BGl_zc3anonymousza32297ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__evalz00();
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_zc3anonymousza32446ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_za2replzd2printerza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	static obj_t BGl_zc3exitza32155ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	static obj_t BGl_zc3exitza32294ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_transcriptzd2onzd2zz__evalz00(obj_t);
	static obj_t BGl__schemezd2reportzd2environmentz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32035ze3z83zz__evalz00(obj_t, obj_t);
	static obj_t BGl_bytezd2codezd2evaluatez00zz__evalz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3exitza32443ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	static obj_t BGl_zc3exitza32025ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_evalzf2expanderzf2zz__evalz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__setzd2prompterz12zc0zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32031ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_z62errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_loadvz00zz__evalz00(obj_t, obj_t, obj_t);
	extern obj_t string_to_bstring(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_schemezd2reportzd2environmentz00zz__evalz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2nilza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_za2transcriptza2z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_quitz00zz__evalz00();
	static obj_t BGl_evalzd2exceptionzd2handlerz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__evalz00(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_list3297z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t, obj_t);
	static obj_t BGl_list3317z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2prompterz12zc0zz__evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nullzd2environmentzd2zz__evalz00(obj_t);
	static obj_t BGl_list3338z00zz__evalz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_evalz12z12zz__evalz00(obj_t, obj_t);
	extern obj_t bgl_close_input_port(obj_t);
	extern obj_t string_to_obj(obj_t);
	static obj_t BGl_list3350z00zz__evalz00 = BUNSPEC;
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl__evalzd2evaluatezd2setz12z12zz__evalz00(obj_t, obj_t);
	static obj_t BGl__expandzd2definezd2patternz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_evalzd2initzd2zz__evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2userzd2passzd2nameza2z00zz__evalz00 = BUNSPEC;
	static obj_t BGl_internalzd2replzd2zz__evalz00();
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_z62exceptionz62zz__objectz00;
	static obj_t BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BUNSPEC;
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_zc3anonymousza32217ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	static obj_t BGl__evalz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_zc3anonymousza32074ze3z83zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2evaluatezd2setz12z12zz__evalz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2loadzd2pathza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl_zc3exitza32064ze3z83zz__evalz00(obj_t);
	static obj_t BGl_defaultzd2replzd2printerz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl__replz00zz__evalz00(obj_t);
	extern obj_t BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
	BGL_EXPORTED_DECL obj_t BGl_bytezd2codezd2compilez00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_zc3exitza32071ze3z83zz__evalz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__evalz12z12zz__evalz00(obj_t, obj_t);
	extern bool_t reset_eof(obj_t);
	static obj_t BGl_methodzd2initzd2zz__evalz00();
	static obj_t BGl__bytezd2codezd2runz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl__defaultzd2replzd2printerz00zz__evalz00(obj_t, obj_t, obj_t);
	extern char *BGl_datez00zz__osz00();
	static obj_t BGl__interactionzd2environmentzd2zz__evalz00(obj_t);
	static obj_t BGl_zc3exitza32220ze3z83zz__evalz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2replzd2numza2zd2zz__evalz00 = BUNSPEC;
	static obj_t BGl__getzd2prompterzd2zz__evalz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_transcriptzd2offzd2envz00zz__evalz00,
		BgL_bgl__transcriptza7d2of3386za7, BGl__transcriptzd2offzd2zz__evalz00, 0L,
		BUNSPEC, 0);
	extern obj_t BGl_displayzd2circlezd2envz00zz__pp_circlez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_schemezd2reportzd2environmentzd2envzd2zz__evalz00,
		BgL_bgl__schemeza7d2report3387za7,
		BGl__schemezd2reportzd2environmentz00zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replzd2envzd2zz__evalz00,
		BgL_bgl__replza700za7za7__eval3388za7, BGl__replz00zz__evalz00, 0L, BUNSPEC,
		0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_transcriptzd2onzd2envz00zz__evalz00,
		BgL_bgl__transcriptza7d2on3389za7, BGl__transcriptzd2onzd2zz__evalz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_notifyzd2assertzd2failzd2envzd2zz__evalz00,
		BgL_bgl__notifyza7d2assert3390za7,
		BGl__notifyzd2assertzd2failz00zz__evalz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2hygienezd2macrozd2envz00zz__evalz00,
		BgL_bgl__expandza7d2define3391za7,
		BGl__expandzd2definezd2hygienezd2macrozd2zz__evalz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bytezd2codezd2runzd2envzd2zz__evalz00,
		BgL_bgl__byteza7d2codeza7d2r3392z00, BGl__bytezd2codezd2runz00zz__evalz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_czd2debugzd2replzd2envzd2zz__evalz00,
		BgL_bgl__cza7d2debugza7d2rep3393z00, BGl__czd2debugzd2replz00zz__evalz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_interactionzd2environmentzd2envz00zz__evalz00,
		BgL_bgl__interactionza7d2e3394za7,
		BGl__interactionzd2environmentzd2zz__evalz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_expandz12zd2envzc0zz__expandz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2prompterzd2envz00zz__evalz00,
		BgL_bgl__getza7d2prompterza73395z00, BGl__getzd2prompterzd2zz__evalz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3180z00zz__evalz00,
		BgL_bgl_za7c3anonymousza7a323396z00,
		BGl_zc3anonymousza32013ze3z83zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3179z00zz__evalz00,
		BgL_bgl_za7c3anonymousza7a323397z00,
		BGl_zc3anonymousza32008ze3z83zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadqzd2envzd2zz__evalz00,
		BgL_bgl__loadqza700za7za7__eva3398za7, opt_generic_entry,
		BGl__loadqz00zz__evalz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3218z00zz__evalz00,
		BgL_bgl_za7c3anonymousza7a323399z00,
		BGl_zc3anonymousza32091ze3z83zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3221z00zz__evalz00,
		BgL_bgl_readza700za7za7__evalza73400z00, BGl_readz00zz__evalz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3222z00zz__evalz00,
		BgL_bgl_za7c3anonymousza7a323401z00,
		BGl_zc3anonymousza32094ze3z83zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2evaluatezd2setz12zd2envzc0zz__evalz00,
		BgL_bgl__evalza7d2evaluate3402za7,
		BGl__evalzd2evaluatezd2setz12z12zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2envzd2zz__evalz00,
		BgL_bgl__loadza700za7za7__eval3403za7, opt_generic_entry,
		BGl__loadz00zz__evalz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2replzd2printerz12zd2envzc0zz__evalz00,
		BgL_bgl__setza7d2replza7d2pr3404z00,
		BGl__setzd2replzd2printerz12z12zz__evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nativezd2replzd2printerzd2envzd2zz__evalz00,
		BgL_bgl__nativeza7d2replza7d3405z00,
		BGl__nativezd2replzd2printerz00zz__evalz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2envzd2zz__evalz00,
		BgL_bgl__evalza700za7za7__eval3406za7, opt_generic_entry,
		BGl__evalz00zz__evalz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalz12zd2envzc0zz__evalz00,
		BgL_bgl__evalza712za712za7za7__e3407z00, opt_generic_entry,
		BGl__evalz12z12zz__evalz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_quitzd2envzd2zz__evalz00,
		BgL_bgl__quitza700za7za7__eval3408za7, BGl__quitz00zz__evalz00, 0L, BUNSPEC,
		0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3362z00zz__evalz00,
		BgL_bgl_za7c3anonymousza7a323409z00,
		BGl_zc3anonymousza32680ze3z83zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3181z00zz__evalz00,
		BgL_bgl_string3181za700za7za7_3410za7, "User", 4);
	      DEFINE_STRING(BGl_string3182z00zz__evalz00,
		BgL_bgl_string3182za700za7za7_3411za7, ":=> ", 4);
	      DEFINE_STRING(BGl_string3184z00zz__evalz00,
		BgL_bgl_string3184za700za7za7_3412za7, "_", 1);
	      DEFINE_STRING(BGl_string3186z00zz__evalz00,
		BgL_bgl_string3186za700za7za7_3413za7, "classic", 7);
	      DEFINE_STRING(BGl_string3188z00zz__evalz00,
		BgL_bgl_string3188za700za7za7_3414za7, "new", 3);
	      DEFINE_STRING(BGl_string3190z00zz__evalz00,
		BgL_bgl_string3190za700za7za7_3415za7, "Illegal compiler", 16);
	      DEFINE_STRING(BGl_string3189z00zz__evalz00,
		BgL_bgl_string3189za700za7za7_3416za7, "eval-evaluate-set!", 18);
	      DEFINE_STRING(BGl_string3201z00zz__evalz00,
		BgL_bgl_string3201za700za7za7_3417za7, "at", 2);
	      DEFINE_STRING(BGl_string3202z00zz__evalz00,
		BgL_bgl_string3202za700za7za7_3418za7, "<exit:2064>", 11);
	      DEFINE_STRING(BGl_string3192z00zz__evalz00,
		BgL_bgl_string3192za700za7za7_3419za7, "interaction-environment", 23);
	      DEFINE_STRING(BGl_string3203z00zz__evalz00,
		BgL_bgl_string3203za700za7za7_3420za7, "_byte-code-run", 14);
	      DEFINE_STRING(BGl_string3193z00zz__evalz00,
		BgL_bgl_string3193za700za7za7_3421za7, "/tmp/bigloo/runtime/Eval/eval.scm",
		33);
	      DEFINE_STRING(BGl_string3204z00zz__evalz00,
		BgL_bgl_string3204za700za7za7_3422za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3194z00zz__evalz00,
		BgL_bgl_string3194za700za7za7_3423za7, "_eval", 5);
	      DEFINE_STRING(BGl_string3205z00zz__evalz00,
		BgL_bgl_string3205za700za7za7_3424za7, "<anonymous:2074>", 16);
	      DEFINE_STRING(BGl_string3195z00zz__evalz00,
		BgL_bgl_string3195za700za7za7_3425za7, "procedure", 9);
	      DEFINE_STRING(BGl_string3206z00zz__evalz00,
		BgL_bgl_string3206za700za7za7_3426za7, "scheme-report-environment", 25);
	      DEFINE_STRING(BGl_string3196z00zz__evalz00,
		BgL_bgl_string3196za700za7za7_3427za7, "eval", 4);
	      DEFINE_STRING(BGl_string3207z00zz__evalz00,
		BgL_bgl_string3207za700za7za7_3428za7, "long", 4);
	      DEFINE_STRING(BGl_string3197z00zz__evalz00,
		BgL_bgl_string3197za700za7za7_3429za7, "<exit:2025>", 11);
	      DEFINE_STRING(BGl_string3198z00zz__evalz00,
		BgL_bgl_string3198za700za7za7_3430za7, "pair", 4);
	      DEFINE_STRING(BGl_string3210z00zz__evalz00,
		BgL_bgl_string3210za700za7za7_3431za7, "null-environment", 16);
	      DEFINE_STRING(BGl_string3209z00zz__evalz00,
		BgL_bgl_string3209za700za7za7_3432za7, "Version not supported", 21);
	      DEFINE_STRING(BGl_string3199z00zz__evalz00,
		BgL_bgl_string3199za700za7za7_3433za7, "<anonymous:2035>", 16);
	extern obj_t BGl_evaluate2zd2envzd2zz__evaluatez00;
	   
		 
		DEFINE_STRING(BGl_string3213z00zz__evalz00,
		BgL_bgl_string3213za700za7za7_3434za7, "set-prompter!", 13);
	      DEFINE_STRING(BGl_string3214z00zz__evalz00,
		BgL_bgl_string3214za700za7za7_3435za7,
		"argument has to be a procedure of 1 argument", 44);
	      DEFINE_STRING(BGl_string3215z00zz__evalz00,
		BgL_bgl_string3215za700za7za7_3436za7, "_set-prompter!", 14);
	      DEFINE_STRING(BGl_string3216z00zz__evalz00,
		BgL_bgl_string3216za700za7za7_3437za7, "repl", 4);
	      DEFINE_STRING(BGl_string3217z00zz__evalz00,
		BgL_bgl_string3217za700za7za7_3438za7, "<exit:2083>", 11);
	      DEFINE_STRING(BGl_string3220z00zz__evalz00,
		BgL_bgl_string3220za700za7za7_3439za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3219z00zz__evalz00,
		BgL_bgl_string3219za700za7za7_3440za7, "<anonymous:2091>", 16);
	      DEFINE_STRING(BGl_string3223z00zz__evalz00,
		BgL_bgl_string3223za700za7za7_3441za7, "internal-repl", 13);
	      DEFINE_STRING(BGl_string3224z00zz__evalz00,
		BgL_bgl_string3224za700za7za7_3442za7, "<exit:2106>", 11);
	      DEFINE_STRING(BGl_string3225z00zz__evalz00,
		BgL_bgl_string3225za700za7za7_3443za7, "output-port", 11);
	      DEFINE_STRING(BGl_string3226z00zz__evalz00,
		BgL_bgl_string3226za700za7za7_3444za7, ";; ", 3);
	      DEFINE_STRING(BGl_string3227z00zz__evalz00,
		BgL_bgl_string3227za700za7za7_3445za7, "<anonymous:2114>", 16);
	      DEFINE_STRING(BGl_string3228z00zz__evalz00,
		BgL_bgl_string3228za700za7za7_3446za7, "read", 4);
	      DEFINE_STRING(BGl_string3230z00zz__evalz00,
		BgL_bgl_string3230za700za7za7_3447za7, "int", 3);
	      DEFINE_STRING(BGl_string3229z00zz__evalz00,
		BgL_bgl_string3229za700za7za7_3448za7, "intrhdl", 7);
	      DEFINE_STRING(BGl_string3232z00zz__evalz00,
		BgL_bgl_string3232za700za7za7_3449za7, "set-repl-printer!", 17);
	      DEFINE_STRING(BGl_string3233z00zz__evalz00,
		BgL_bgl_string3233za700za7za7_3450za7, "Illegal repl-printer (wrong arity)",
		34);
	      DEFINE_STRING(BGl_string3234z00zz__evalz00,
		BgL_bgl_string3234za700za7za7_3451za7, "_set-repl-printer!", 18);
	      DEFINE_STRING(BGl_string3235z00zz__evalz00,
		BgL_bgl_string3235za700za7za7_3452za7, "?* ", 3);
	      DEFINE_STRING(BGl_string3236z00zz__evalz00,
		BgL_bgl_string3236za700za7za7_3453za7, "loop", 4);
	      DEFINE_STRING(BGl_string3238z00zz__evalz00,
		BgL_bgl_string3238za700za7za7_3454za7, "find-file", 9);
	      DEFINE_STRING(BGl_string3240z00zz__evalz00,
		BgL_bgl_string3240za700za7za7_3455za7, "/tmp/bigloo/runtime/Ieee/port.scm",
		33);
	      DEFINE_STRING(BGl_string3239z00zz__evalz00,
		BgL_bgl_string3239za700za7za7_3456za7, "Illegal file name", 17);
	      DEFINE_STRING(BGl_string3241z00zz__evalz00,
		BgL_bgl_string3241za700za7za7_3457za7, "loadv", 5);
	      DEFINE_STRING(BGl_string3243z00zz__evalz00,
		BgL_bgl_string3243za700za7za7_3458za7, "load", 4);
	      DEFINE_STRING(BGl_string3244z00zz__evalz00,
		BgL_bgl_string3244za700za7za7_3459za7, "Can't open file", 15);
	      DEFINE_STRING(BGl_string3245z00zz__evalz00,
		BgL_bgl_string3245za700za7za7_3460za7, "<exit:2155>", 11);
	      DEFINE_STRING(BGl_string3247z00zz__evalz00,
		BgL_bgl_string3247za700za7za7_3461za7, "module", 6);
	      DEFINE_STRING(BGl_string3250z00zz__evalz00,
		BgL_bgl_string3250za700za7za7_3462za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string3249z00zz__evalz00,
		BgL_bgl_string3249za700za7za7_3463za7, "main", 4);
	      DEFINE_STRING(BGl_string3251z00zz__evalz00,
		BgL_bgl_string3251za700za7za7_3464za7, "Illegal main clause", 19);
	      DEFINE_STRING(BGl_string3253z00zz__evalz00,
		BgL_bgl_string3253za700za7za7_3465za7, "command-line", 12);
	      DEFINE_STRING(BGl_string3254z00zz__evalz00,
		BgL_bgl_string3254za700za7za7_3466za7, "evexpand-error", 14);
	      DEFINE_STRING(BGl_string3255z00zz__evalz00,
		BgL_bgl_string3255za700za7za7_3467za7, "epair", 5);
	      DEFINE_STRING(BGl_string3257z00zz__evalz00,
		BgL_bgl_string3257za700za7za7_3468za7, "eval!", 5);
	      DEFINE_STRING(BGl_string3258z00zz__evalz00,
		BgL_bgl_string3258za700za7za7_3469za7, "expand-define-expander", 22);
	      DEFINE_STRING(BGl_string3260z00zz__evalz00,
		BgL_bgl_string3260za700za7za7_3470za7, "define-expander", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2expanderzd2envzd2zz__evalz00,
		BgL_bgl__expandza7d2define3471za7,
		BGl__expandzd2definezd2expanderz00zz__evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3261z00zz__evalz00,
		BgL_bgl_string3261za700za7za7_3472za7, "Illegal `define-expander' syntax",
		32);
	      DEFINE_STRING(BGl_string3262z00zz__evalz00,
		BgL_bgl_string3262za700za7za7_3473za7,
		"wrong number of argument for expand", 35);
	      DEFINE_STRING(BGl_string3263z00zz__evalz00,
		BgL_bgl_string3263za700za7za7_3474za7, "illegal expander", 16);
	      DEFINE_STRING(BGl_string3264z00zz__evalz00,
		BgL_bgl_string3264za700za7za7_3475za7, "<exit:2220>", 11);
	      DEFINE_STRING(BGl_string3265z00zz__evalz00,
		BgL_bgl_string3265za700za7za7_3476za7, "<exit:2246>", 11);
	      DEFINE_STRING(BGl_string3266z00zz__evalz00,
		BgL_bgl_string3266za700za7za7_3477za7, "<anonymous:2249>", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bytezd2codezd2compilezd2envzd2zz__evalz00,
		BgL_bgl__byteza7d2codeza7d2c3478z00, opt_generic_entry,
		BGl__bytezd2codezd2compilez00zz__evalz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3268z00zz__evalz00,
		BgL_bgl_string3268za700za7za7_3479za7, "lambda", 6);
	      DEFINE_STRING(BGl_string3270z00zz__evalz00,
		BgL_bgl_string3270za700za7za7_3480za7, "x1", 2);
	      DEFINE_STRING(BGl_string3272z00zz__evalz00,
		BgL_bgl_string3272za700za7za7_3481za7, "e", 1);
	      DEFINE_STRING(BGl_string3274z00zz__evalz00,
		BgL_bgl_string3274za700za7za7_3482za7, "let", 3);
	      DEFINE_STRING(BGl_string3276z00zz__evalz00,
		BgL_bgl_string3276za700za7za7_3483za7, "when", 4);
	      DEFINE_STRING(BGl_string3278z00zz__evalz00,
		BgL_bgl_string3278za700za7za7_3484za7, "epair?", 6);
	      DEFINE_STRING(BGl_string3280z00zz__evalz00,
		BgL_bgl_string3280za700za7za7_3485za7, "match-case", 10);
	      DEFINE_STRING(BGl_string3282z00zz__evalz00,
		BgL_bgl_string3282za700za7za7_3486za7, "cer", 3);
	      DEFINE_STRING(BGl_string3284z00zz__evalz00,
		BgL_bgl_string3284za700za7za7_3487za7, "?l", 2);
	      DEFINE_STRING(BGl_string3286z00zz__evalz00,
		BgL_bgl_string3286za700za7za7_3488za7, "?f", 2);
	      DEFINE_STRING(BGl_string3288z00zz__evalz00,
		BgL_bgl_string3288za700za7za7_3489za7, "set!", 4);
	      DEFINE_STRING(BGl_string3300z00zz__evalz00,
		BgL_bgl_string3300za700za7za7_3490za7, "TAG-1560", 8);
	      DEFINE_STRING(BGl_string3290z00zz__evalz00,
		BgL_bgl_string3290za700za7za7_3491za7, "f", 1);
	      DEFINE_STRING(BGl_string3302z00zz__evalz00,
		BgL_bgl_string3302za700za7za7_3492za7, "ne", 2);
	      DEFINE_STRING(BGl_string3292z00zz__evalz00,
		BgL_bgl_string3292za700za7za7_3493za7, "l", 1);
	      DEFINE_STRING(BGl_string3304z00zz__evalz00,
		BgL_bgl_string3304za700za7za7_3494za7, "evepairify*", 11);
	      DEFINE_STRING(BGl_string3294z00zz__evalz00,
		BgL_bgl_string3294za700za7za7_3495za7, "let*", 4);
	      DEFINE_STRING(BGl_string3306z00zz__evalz00,
		BgL_bgl_string3306za700za7za7_3496za7, "define-macro", 12);
	      DEFINE_STRING(BGl_string3296z00zz__evalz00,
		BgL_bgl_string3296za700za7za7_3497za7, "n", 1);
	      DEFINE_STRING(BGl_string3307z00zz__evalz00,
		BgL_bgl_string3307za700za7za7_3498za7, "Illegal `define-macro' syntax", 29);
	      DEFINE_STRING(BGl_string3308z00zz__evalz00,
		BgL_bgl_string3308za700za7za7_3499za7, "<exit:2270>", 11);
	      DEFINE_STRING(BGl_string3310z00zz__evalz00,
		BgL_bgl_string3310za700za7za7_3500za7, "<anonymous:2297>", 16);
	      DEFINE_STRING(BGl_string3309z00zz__evalz00,
		BgL_bgl_string3309za700za7za7_3501za7, "<exit:2294>", 11);
	      DEFINE_STRING(BGl_string3299z00zz__evalz00,
		BgL_bgl_string3299za700za7za7_3502za7, "cdr", 3);
	      DEFINE_STRING(BGl_string3311z00zz__evalz00,
		BgL_bgl_string3311za700za7za7_3503za7, "TAG-1636", 8);
	      DEFINE_STRING(BGl_string3312z00zz__evalz00,
		BgL_bgl_string3312za700za7za7_3504za7, "<anonymous:2534>", 16);
	      DEFINE_STRING(BGl_string3313z00zz__evalz00,
		BgL_bgl_string3313za700za7za7_3505za7, "map", 3);
	      DEFINE_STRING(BGl_string3314z00zz__evalz00,
		BgL_bgl_string3314za700za7za7_3506za7, "argument not a list", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nullzd2environmentzd2envz00zz__evalz00,
		BgL_bgl__nullza7d2environm3507za7, BGl__nullzd2environmentzd2zz__evalz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3316z00zz__evalz00,
		BgL_bgl_string3316za700za7za7_3508za7, "x", 1);
	      DEFINE_STRING(BGl_string3319z00zz__evalz00,
		BgL_bgl_string3319za700za7za7_3509za7, "quote", 5);
	      DEFINE_STRING(BGl_string3321z00zz__evalz00,
		BgL_bgl_string3321za700za7za7_3510za7, "define-hygiene-macro", 20);
	      DEFINE_STRING(BGl_string3322z00zz__evalz00,
		BgL_bgl_string3322za700za7za7_3511za7,
		"Illegal `define-hygiene-macro' syntax", 37);
	      DEFINE_STRING(BGl_string3323z00zz__evalz00,
		BgL_bgl_string3323za700za7za7_3512za7, "<exit:2420>", 11);
	      DEFINE_STRING(BGl_string3324z00zz__evalz00,
		BgL_bgl_string3324za700za7za7_3513za7, "<exit:2443>", 11);
	      DEFINE_STRING(BGl_string3325z00zz__evalz00,
		BgL_bgl_string3325za700za7za7_3514za7, "<anonymous:2446>", 16);
	      DEFINE_STRING(BGl_string3327z00zz__evalz00,
		BgL_bgl_string3327za700za7za7_3515za7, "if", 2);
	      DEFINE_STRING(BGl_string3329z00zz__evalz00,
		BgL_bgl_string3329za700za7za7_3516za7, "not", 3);
	      DEFINE_STRING(BGl_string3331z00zz__evalz00,
		BgL_bgl_string3331za700za7za7_3517za7, "null?", 5);
	      DEFINE_STRING(BGl_string3332z00zz__evalz00,
		BgL_bgl_string3332za700za7za7_3518za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string3334z00zz__evalz00,
		BgL_bgl_string3334za700za7za7_3519za7, "pair?", 5);
	      DEFINE_STRING(BGl_string3336z00zz__evalz00,
		BgL_bgl_string3336za700za7za7_3520za7, "car", 3);
	      DEFINE_STRING(BGl_string3337z00zz__evalz00,
		BgL_bgl_string3337za700za7za7_3521za7, "Missing value for argument", 26);
	      DEFINE_STRING(BGl_string3340z00zz__evalz00,
		BgL_bgl_string3340za700za7za7_3522za7, "unquote", 7);
	      DEFINE_STRING(BGl_string3342z00zz__evalz00,
		BgL_bgl_string3342za700za7za7_3523za7, "id", 2);
	      DEFINE_STRING(BGl_string3343z00zz__evalz00,
		BgL_bgl_string3343za700za7za7_3524za7, "Illegal macro parameter", 23);
	      DEFINE_STRING(BGl_string3345z00zz__evalz00,
		BgL_bgl_string3345za700za7za7_3525za7, "string?", 7);
	      DEFINE_STRING(BGl_string3347z00zz__evalz00,
		BgL_bgl_string3347za700za7za7_3526za7, "error/location", 14);
	      DEFINE_STRING(BGl_string3349z00zz__evalz00,
		BgL_bgl_string3349za700za7za7_3527za7, "error", 5);
	      DEFINE_STRING(BGl_string3352z00zz__evalz00,
		BgL_bgl_string3352za700za7za7_3528za7, "dummy", 5);
	      DEFINE_STRING(BGl_string3354z00zz__evalz00,
		BgL_bgl_string3354za700za7za7_3529za7, "expand-define-pattern", 21);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00,
		BgL_bgl__byteza7d2codeza7d2e3530z00,
		BGl__bytezd2codezd2evaluatez00zz__evalz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3355z00zz__evalz00,
		BgL_bgl_string3355za700za7za7_3531za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string3356z00zz__evalz00,
		BgL_bgl_string3356za700za7za7_3532za7, "-----------------------", 23);
	      DEFINE_STRING(BGl_string3357z00zz__evalz00,
		BgL_bgl_string3357za700za7za7_3533za7, "Variables' value are : ", 23);
	      DEFINE_STRING(BGl_string3358z00zz__evalz00,
		BgL_bgl_string3358za700za7za7_3534za7, "   ", 3);
	      DEFINE_STRING(BGl_string3360z00zz__evalz00,
		BgL_bgl_string3360za700za7za7_3535za7, "<anonymous:2674>", 16);
	      DEFINE_STRING(BGl_string3359z00zz__evalz00,
		BgL_bgl_string3359za700za7za7_3536za7, " : ", 3);
	      DEFINE_STRING(BGl_string3361z00zz__evalz00,
		BgL_bgl_string3361za700za7za7_3537za7, "for-each", 8);
	      DEFINE_STRING(BGl_string3363z00zz__evalz00,
		BgL_bgl_string3363za700za7za7_3538za7, "*:=> ", 5);
	      DEFINE_STRING(BGl_string3364z00zz__evalz00,
		BgL_bgl_string3364za700za7za7_3539za7, "assert", 6);
	      DEFINE_STRING(BGl_string3365z00zz__evalz00,
		BgL_bgl_string3365za700za7za7_3540za7, "assertion failed", 16);
	      DEFINE_STRING(BGl_string3367z00zz__evalz00,
		BgL_bgl_string3367za700za7za7_3541za7, "transcript-on", 13);
	      DEFINE_STRING(BGl_string3368z00zz__evalz00,
		BgL_bgl_string3368za700za7za7_3542za7, ";; session started on ", 22);
	      DEFINE_STRING(BGl_string3370z00zz__evalz00,
		BgL_bgl_string3370za700za7za7_3543za7, "A transcript is already in use",
		30);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00,
		BgL_bgl__defaultza7d2replza73544z00, va_generic_entry,
		BGl__defaultzd2replzd2printerz00zz__evalz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string3371z00zz__evalz00,
		BgL_bgl_string3371za700za7za7_3545za7, "_transcript-on", 14);
	      DEFINE_STRING(BGl_string3373z00zz__evalz00,
		BgL_bgl_string3373za700za7za7_3546za7, "transcript-off", 14);
	      DEFINE_STRING(BGl_string3374z00zz__evalz00,
		BgL_bgl_string3374za700za7za7_3547za7, "No transcript is currently in use",
		33);
	      DEFINE_STRING(BGl_string3375z00zz__evalz00,
		BgL_bgl_string3375za700za7za7_3548za7, "__eval", 6);
	      DEFINE_STRING(BGl_string3377z00zz__evalz00,
		BgL_bgl_string3377za700za7za7_3549za7, "*c-debug-repl-value*", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2patternzd2envzd2zz__evalz00,
		BgL_bgl__expandza7d2define3550za7,
		BGl__expandzd2definezd2patternz00zz__evalz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2prompterz12zd2envz12zz__evalz00,
		BgL_bgl__setza7d2prompterza73551z00, BGl__setzd2prompterz12zc0zz__evalz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_expandzd2envzd2zz__expandz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_defaultzd2environmentzd2envz00zz__evalz00,
		BgL_bgl__defaultza7d2envir3552za7, BGl__defaultzd2environmentzd2zz__evalz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2definezd2macrozd2envzd2zz__evalz00,
		BgL_bgl__expandza7d2define3553za7,
		BGl__expandzd2definezd2macroz00zz__evalz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long
		BgL_checksumz00_3599, char *BgL_fromz00_3600)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evalz00))
				{
					BGl_requirezd2initializa7ationz75zz__evalz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__evalz00();
					BGl_importedzd2moduleszd2initz00zz__evalz00();
					BGl_evalzd2initzd2zz__evalz00();
					BGl_toplevelzd2initzd2zz__evalz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			BGl_symbol3183z00zz__evalz00 =
				bstring_to_symbol(BGl_string3184z00zz__evalz00);
			BGl_symbol3185z00zz__evalz00 =
				bstring_to_symbol(BGl_string3186z00zz__evalz00);
			BGl_symbol3187z00zz__evalz00 =
				bstring_to_symbol(BGl_string3188z00zz__evalz00);
			BGl_symbol3191z00zz__evalz00 =
				bstring_to_symbol(BGl_string3192z00zz__evalz00);
			BGl_symbol3200z00zz__evalz00 =
				bstring_to_symbol(BGl_string3201z00zz__evalz00);
			BGl_symbol3208z00zz__evalz00 =
				bstring_to_symbol(BGl_string3206z00zz__evalz00);
			BGl_symbol3211z00zz__evalz00 =
				bstring_to_symbol(BGl_string3210z00zz__evalz00);
			BGl_symbol3212z00zz__evalz00 =
				bstring_to_symbol(BGl_string3213z00zz__evalz00);
			BGl_symbol3231z00zz__evalz00 =
				bstring_to_symbol(BGl_string3232z00zz__evalz00);
			BGl_symbol3237z00zz__evalz00 =
				bstring_to_symbol(BGl_string3238z00zz__evalz00);
			BGl_symbol3242z00zz__evalz00 =
				bstring_to_symbol(BGl_string3243z00zz__evalz00);
			BGl_symbol3246z00zz__evalz00 =
				bstring_to_symbol(BGl_string3247z00zz__evalz00);
			BGl_symbol3248z00zz__evalz00 =
				bstring_to_symbol(BGl_string3249z00zz__evalz00);
			BGl_symbol3252z00zz__evalz00 =
				bstring_to_symbol(BGl_string3253z00zz__evalz00);
			BGl_keyword3256z00zz__evalz00 =
				bstring_to_keyword(BGl_string3257z00zz__evalz00);
			BGl_symbol3259z00zz__evalz00 =
				bstring_to_symbol(BGl_string3260z00zz__evalz00);
			BGl_symbol3267z00zz__evalz00 =
				bstring_to_symbol(BGl_string3268z00zz__evalz00);
			BGl_symbol3269z00zz__evalz00 =
				bstring_to_symbol(BGl_string3270z00zz__evalz00);
			BGl_symbol3271z00zz__evalz00 =
				bstring_to_symbol(BGl_string3272z00zz__evalz00);
			BGl_symbol3273z00zz__evalz00 =
				bstring_to_symbol(BGl_string3274z00zz__evalz00);
			BGl_symbol3275z00zz__evalz00 =
				bstring_to_symbol(BGl_string3276z00zz__evalz00);
			BGl_symbol3277z00zz__evalz00 =
				bstring_to_symbol(BGl_string3278z00zz__evalz00);
			BGl_symbol3279z00zz__evalz00 =
				bstring_to_symbol(BGl_string3280z00zz__evalz00);
			BGl_symbol3281z00zz__evalz00 =
				bstring_to_symbol(BGl_string3282z00zz__evalz00);
			BGl_symbol3283z00zz__evalz00 =
				bstring_to_symbol(BGl_string3284z00zz__evalz00);
			BGl_symbol3285z00zz__evalz00 =
				bstring_to_symbol(BGl_string3286z00zz__evalz00);
			BGl_symbol3287z00zz__evalz00 =
				bstring_to_symbol(BGl_string3288z00zz__evalz00);
			BGl_symbol3289z00zz__evalz00 =
				bstring_to_symbol(BGl_string3290z00zz__evalz00);
			BGl_symbol3291z00zz__evalz00 =
				bstring_to_symbol(BGl_string3292z00zz__evalz00);
			BGl_symbol3293z00zz__evalz00 =
				bstring_to_symbol(BGl_string3294z00zz__evalz00);
			BGl_symbol3295z00zz__evalz00 =
				bstring_to_symbol(BGl_string3296z00zz__evalz00);
			BGl_symbol3298z00zz__evalz00 =
				bstring_to_symbol(BGl_string3299z00zz__evalz00);
			BGl_list3297z00zz__evalz00 =
				MAKE_PAIR(BGl_symbol3298z00zz__evalz00,
				MAKE_PAIR(BGl_symbol3269z00zz__evalz00, BNIL));
			BGl_symbol3301z00zz__evalz00 =
				bstring_to_symbol(BGl_string3302z00zz__evalz00);
			BGl_symbol3303z00zz__evalz00 =
				bstring_to_symbol(BGl_string3304z00zz__evalz00);
			BGl_symbol3305z00zz__evalz00 =
				bstring_to_symbol(BGl_string3306z00zz__evalz00);
			BGl_symbol3315z00zz__evalz00 =
				bstring_to_symbol(BGl_string3316z00zz__evalz00);
			BGl_list3317z00zz__evalz00 =
				MAKE_PAIR(BGl_symbol3298z00zz__evalz00,
				MAKE_PAIR(BGl_symbol3315z00zz__evalz00, BNIL));
			BGl_symbol3318z00zz__evalz00 =
				bstring_to_symbol(BGl_string3319z00zz__evalz00);
			BGl_symbol3320z00zz__evalz00 =
				bstring_to_symbol(BGl_string3321z00zz__evalz00);
			BGl_symbol3326z00zz__evalz00 =
				bstring_to_symbol(BGl_string3327z00zz__evalz00);
			BGl_symbol3328z00zz__evalz00 =
				bstring_to_symbol(BGl_string3329z00zz__evalz00);
			BGl_symbol3330z00zz__evalz00 =
				bstring_to_symbol(BGl_string3331z00zz__evalz00);
			BGl_symbol3333z00zz__evalz00 =
				bstring_to_symbol(BGl_string3334z00zz__evalz00);
			BGl_symbol3335z00zz__evalz00 =
				bstring_to_symbol(BGl_string3336z00zz__evalz00);
			BGl_symbol3339z00zz__evalz00 =
				bstring_to_symbol(BGl_string3340z00zz__evalz00);
			BGl_symbol3341z00zz__evalz00 =
				bstring_to_symbol(BGl_string3342z00zz__evalz00);
			BGl_list3338z00zz__evalz00 =
				MAKE_PAIR(BGl_symbol3339z00zz__evalz00,
				MAKE_PAIR(BGl_symbol3341z00zz__evalz00, BNIL));
			BGl_symbol3344z00zz__evalz00 =
				bstring_to_symbol(BGl_string3345z00zz__evalz00);
			BGl_symbol3346z00zz__evalz00 =
				bstring_to_symbol(BGl_string3347z00zz__evalz00);
			BGl_symbol3348z00zz__evalz00 =
				bstring_to_symbol(BGl_string3349z00zz__evalz00);
			BGl_symbol3351z00zz__evalz00 =
				bstring_to_symbol(BGl_string3352z00zz__evalz00);
			BGl_list3350z00zz__evalz00 =
				MAKE_PAIR(BGl_symbol3318z00zz__evalz00,
				MAKE_PAIR(BGl_symbol3351z00zz__evalz00, BNIL));
			BGl_symbol3353z00zz__evalz00 =
				bstring_to_symbol(BGl_string3354z00zz__evalz00);
			BGl_symbol3366z00zz__evalz00 =
				bstring_to_symbol(BGl_string3364z00zz__evalz00);
			BGl_symbol3369z00zz__evalz00 =
				bstring_to_symbol(BGl_string3367z00zz__evalz00);
			BGl_symbol3372z00zz__evalz00 =
				bstring_to_symbol(BGl_string3373z00zz__evalz00);
			return (BGl_symbol3376z00zz__evalz00 =
				bstring_to_symbol(BGl_string3377z00zz__evalz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			BGl_defaultzd2evaluatezd2zz__evalz00 =
				BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
			BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
			BGl_za2promptza2z00zz__evalz00 = BGl_proc3179z00zz__evalz00;
			BGl_za2replzd2numza2zd2zz__evalz00 = BINT(((long) 0));
			BGl_za2replzd2quitza2zd2zz__evalz00 = BGl_proc3180z00zz__evalz00;
			BGl_za2replzd2printerza2zd2zz__evalz00 =
				BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00;
			BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BUNSPEC;
			BGl_za2loadzd2pathza2zd2zz__evalz00 = BNIL;
			BGl_za2loadzd2verboseza2zd2zz__evalz00 = BTRUE;
			BGl_za2nilza2z00zz__evalz00 = BTRUE;
			BGl_za2userzd2passza2zd2zz__evalz00 = BUNSPEC;
			BGl_za2userzd2passzd2nameza2z00zz__evalz00 = BGl_string3181z00zz__evalz00;
			{	/* Eval/eval.scm 733 */
				obj_t BgL_res2935z00_2300;

				{	/* Eval/eval.scm 733 */
					obj_t BgL_auxz00_3672;

					BgL_auxz00_3672 = BGL_CURRENT_DYNAMIC_ENV();
					BgL_res2935z00_2300 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3672);
				}
				return (BGl_za2transcriptza2z00zz__evalz00 =
					BgL_res2935z00_2300, BUNSPEC);
			}
		}
	}



/* <anonymous:2013> */
	obj_t BGl_zc3anonymousza32013ze3z83zz__evalz00(obj_t BgL_envz00_3134,
		obj_t BgL_xz00_3135)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 279 */
			return BIGLOO_EXIT(BgL_xz00_3135);
		}
	}



/* <anonymous:2008> */
	obj_t BGl_zc3anonymousza32008ze3z83zz__evalz00(obj_t BgL_envz00_3136,
		obj_t BgL_numz00_3137)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 254 */
			{
				obj_t BgL_numz00_832;

				BgL_numz00_832 = BgL_numz00_3137;
				{	/* Eval/eval.scm 255 */
					obj_t BgL_arg2009z00_2285;

					{	/* Eval/eval.scm 255 */
						obj_t BgL_res2931z00_2290;

						{	/* Eval/eval.scm 255 */
							obj_t BgL_auxz00_3676;

							BgL_auxz00_3676 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2931z00_2290 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3676);
						}
						BgL_arg2009z00_2285 = BgL_res2931z00_2290;
					}
					bgl_display_obj(BgL_numz00_832, BgL_arg2009z00_2285);
				}
				{	/* Eval/eval.scm 255 */
					obj_t BgL_arg2011z00_2287;

					{	/* Eval/eval.scm 255 */
						obj_t BgL_res2932z00_2292;

						{	/* Eval/eval.scm 255 */
							obj_t BgL_auxz00_3680;

							BgL_auxz00_3680 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2932z00_2292 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3680);
						}
						BgL_arg2011z00_2287 = BgL_res2932z00_2292;
					}
					bgl_display_string(BGl_string3182z00zz__evalz00, BgL_arg2011z00_2287);
				}
				{	/* Eval/eval.scm 255 */
					obj_t BgL_arg2012z00_2288;

					{	/* Eval/eval.scm 255 */
						obj_t BgL_res2933z00_2296;

						{	/* Eval/eval.scm 255 */
							obj_t BgL_auxz00_3684;

							BgL_auxz00_3684 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2933z00_2296 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_3684);
						}
						BgL_arg2012z00_2288 = BgL_res2933z00_2296;
					}
					return FLUSH_OUTPUT_PORT(BgL_arg2012z00_2288);
				}
			}
		}
	}



/* byte-code-evaluate */
	obj_t BGl_bytezd2codezd2evaluatez00zz__evalz00(obj_t BgL_eexpz00_1,
		obj_t BgL_envz00_2, obj_t BgL_locz00_3)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 116 */
			{	/* Eval/eval.scm 117 */
				obj_t BgL_cexpz00_2301;

				obj_t BgL_denvz00_2302;

				BgL_cexpz00_2301 =
					BGl_evcompilez00zz__evcompilez00(BgL_eexpz00_1, BNIL, BgL_envz00_2,
					BGl_symbol3183z00zz__evalz00, ((bool_t) 0), BgL_locz00_3,
					((bool_t) 1), ((bool_t) 1));
				BgL_denvz00_2302 = BGL_CURRENT_DYNAMIC_ENV();
				{	/* Eval/eval.scm 117 */

					BGL_ENV_PUSH_TRACE(BgL_denvz00_2302, BUNSPEC, BUNSPEC);
					{	/* Eval/eval.scm 117 */
						obj_t BgL_tmpz00_2303;

						BgL_tmpz00_2303 =
							BGl_evmeaningz00zz__evmeaningz00(BgL_cexpz00_2301, BNIL,
							BgL_denvz00_2302);
						BGL_ENV_POP_TRACE(BgL_denvz00_2302);
						return BgL_tmpz00_2303;
					}
				}
			}
		}
	}



/* _byte-code-evaluate */
	obj_t BGl__bytezd2codezd2evaluatez00zz__evalz00(obj_t BgL_envz00_3138,
		obj_t BgL_eexpz00_3139, obj_t BgL_envz00_3140, obj_t BgL_locz00_3141)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 116 */
			return
				BGl_bytezd2codezd2evaluatez00zz__evalz00(BgL_eexpz00_3139,
				BgL_envz00_3140, BgL_locz00_3141);
		}
	}



/* eval-evaluate-set! */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2evaluatezd2setz12z12zz__evalz00(obj_t
		BgL_compz00_4)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 139 */
			if ((BgL_compz00_4 == BGl_symbol3185z00zz__evalz00))
				{	/* Eval/eval.scm 140 */
					return (BGl_defaultzd2evaluatezd2zz__evalz00 =
						BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00, BUNSPEC);
				}
			else
				{	/* Eval/eval.scm 140 */
					if ((BgL_compz00_4 == BGl_symbol3187z00zz__evalz00))
						{	/* Eval/eval.scm 140 */
							return (BGl_defaultzd2evaluatezd2zz__evalz00 =
								BGl_evaluate2zd2envzd2zz__evaluatez00, BUNSPEC);
						}
					else
						{	/* Eval/eval.scm 140 */
							if (PROCEDUREP(BgL_compz00_4))
								{	/* Eval/eval.scm 146 */
									return (BGl_defaultzd2evaluatezd2zz__evalz00 =
										BgL_compz00_4, BUNSPEC);
								}
							else
								{	/* Eval/eval.scm 146 */
									return
										BGl_errorz00zz__errorz00(BGl_string3189z00zz__evalz00,
										BGl_string3190z00zz__evalz00, BgL_compz00_4);
								}
						}
				}
		}
	}



/* _eval-evaluate-set! */
	obj_t BGl__evalzd2evaluatezd2setz12z12zz__evalz00(obj_t BgL_envz00_3145,
		obj_t BgL_compz00_3146)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 139 */
			return BGl_evalzd2evaluatezd2setz12z12zz__evalz00(BgL_compz00_3146);
		}
	}



/* _eval */
	obj_t BGl__evalz00zz__evalz00(obj_t BgL_envz00_8, obj_t BgL_optz00_7)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 163 */
			{	/* Eval/eval.scm 163 */
				obj_t BgL_g1964z00_847;

				BgL_g1964z00_847 = VECTOR_REF(BgL_optz00_7, (int) (((long) 0)));
				{	/* Eval/eval.scm 163 */
					int BgL_aux1966z00_849;

					BgL_aux1966z00_849 = VECTOR_LENGTH(BgL_optz00_7);
					switch ((long) (BgL_aux1966z00_849))
						{
						case ((long) 1):

							{	/* Eval/eval.scm 163 */
								obj_t BgL_envz00_851;

								{	/* Eval/eval.scm 163 */
									obj_t BgL_mz00_2309;

									BgL_mz00_2309 = BGl_evalzd2modulezd2zz__evmodulez00();
									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2309))
										{	/* Eval/eval.scm 163 */
											BgL_envz00_851 = BgL_mz00_2309;
										}
									else
										{	/* Eval/eval.scm 163 */
											BgL_envz00_851 = BGl_symbol3191z00zz__evalz00;
										}
								}
								{	/* Eval/eval.scm 163 */

									{	/* Eval/eval.scm 163 */
										obj_t BgL_arg2018z00_852;

										BgL_arg2018z00_852 =
											VECTOR_REF(BgL_optz00_7, (int) (((long) 0)));
										{	/* Eval/eval.scm 163 */
											obj_t BgL_auxz00_3710;

											{	/* Eval/eval.scm 163 */
												obj_t BgL_aux2971z00_3337;

												BgL_aux2971z00_3337 =
													BGl_defaultzd2evaluatezd2zz__evalz00;
												if (PROCEDUREP(BgL_aux2971z00_3337))
													{	/* Eval/eval.scm 163 */
														BgL_auxz00_3710 = BgL_aux2971z00_3337;
													}
												else
													{
														obj_t BgL_auxz00_3713;

														BgL_auxz00_3713 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3193z00zz__evalz00,
															BINT(((long) 6192)), BGl_string3194z00zz__evalz00,
															BGl_string3195z00zz__evalz00,
															BgL_aux2971z00_3337);
														FAILURE(BgL_auxz00_3713, BFALSE, BFALSE);
											}}
											return
												BGl_evalzf2expanderzf2zz__evalz00(BgL_arg2018z00_852,
												BgL_envz00_851, BGl_expandzd2envzd2zz__expandz00,
												BgL_auxz00_3710);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Eval/eval.scm 163 */
								obj_t BgL_envz00_853;

								BgL_envz00_853 = VECTOR_REF(BgL_optz00_7, (int) (((long) 1)));
								{	/* Eval/eval.scm 163 */

									{	/* Eval/eval.scm 163 */
										obj_t BgL_arg2019z00_854;

										BgL_arg2019z00_854 =
											VECTOR_REF(BgL_optz00_7, (int) (((long) 0)));
										{	/* Eval/eval.scm 163 */
											obj_t BgL_auxz00_3722;

											{	/* Eval/eval.scm 163 */
												obj_t BgL_aux2973z00_3339;

												BgL_aux2973z00_3339 =
													BGl_defaultzd2evaluatezd2zz__evalz00;
												if (PROCEDUREP(BgL_aux2973z00_3339))
													{	/* Eval/eval.scm 163 */
														BgL_auxz00_3722 = BgL_aux2973z00_3339;
													}
												else
													{
														obj_t BgL_auxz00_3725;

														BgL_auxz00_3725 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3193z00zz__evalz00,
															BINT(((long) 6192)), BGl_string3194z00zz__evalz00,
															BGl_string3195z00zz__evalz00,
															BgL_aux2973z00_3339);
														FAILURE(BgL_auxz00_3725, BFALSE, BFALSE);
											}}
											return
												BGl_evalzf2expanderzf2zz__evalz00(BgL_arg2019z00_854,
												BgL_envz00_853, BGl_expandzd2envzd2zz__expandz00,
												BgL_auxz00_3722);
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



/* eval */
	BGL_EXPORTED_DEF obj_t BGl_evalz00zz__evalz00(obj_t BgL_expz00_5,
		obj_t BgL_envz00_6)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 163 */
			{	/* Eval/eval.scm 164 */
				obj_t BgL_auxz00_3732;

				{	/* Eval/eval.scm 164 */
					obj_t BgL_aux2975z00_3341;

					BgL_aux2975z00_3341 = BGl_defaultzd2evaluatezd2zz__evalz00;
					if (PROCEDUREP(BgL_aux2975z00_3341))
						{	/* Eval/eval.scm 164 */
							BgL_auxz00_3732 = BgL_aux2975z00_3341;
						}
					else
						{
							obj_t BgL_auxz00_3735;

							BgL_auxz00_3735 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
								BINT(((long) 6283)), BGl_string3196z00zz__evalz00,
								BGl_string3195z00zz__evalz00, BgL_aux2975z00_3341);
							FAILURE(BgL_auxz00_3735, BFALSE, BFALSE);
				}}
				return
					BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_5, BgL_envz00_6,
					BGl_expandzd2envzd2zz__expandz00, BgL_auxz00_3732);
			}
		}
	}



/* _eval! */
	obj_t BGl__evalz12z12zz__evalz00(obj_t BgL_envz00_12, obj_t BgL_optz00_11)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 169 */
			{	/* Eval/eval.scm 169 */
				obj_t BgL_g1967z00_855;

				BgL_g1967z00_855 = VECTOR_REF(BgL_optz00_11, (int) (((long) 0)));
				{	/* Eval/eval.scm 169 */
					int BgL_aux1969z00_857;

					BgL_aux1969z00_857 = VECTOR_LENGTH(BgL_optz00_11);
					switch ((long) (BgL_aux1969z00_857))
						{
						case ((long) 1):

							{	/* Eval/eval.scm 169 */
								obj_t BgL_envz00_859;

								{	/* Eval/eval.scm 169 */
									obj_t BgL_mz00_2315;

									BgL_mz00_2315 = BGl_evalzd2modulezd2zz__evmodulez00();
									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2315))
										{	/* Eval/eval.scm 169 */
											BgL_envz00_859 = BgL_mz00_2315;
										}
									else
										{	/* Eval/eval.scm 169 */
											BgL_envz00_859 = BGl_symbol3191z00zz__evalz00;
										}
								}
								{	/* Eval/eval.scm 169 */

									{	/* Eval/eval.scm 169 */
										obj_t BgL_arg2021z00_860;

										BgL_arg2021z00_860 =
											VECTOR_REF(BgL_optz00_11, (int) (((long) 0)));
										{	/* Eval/eval.scm 169 */
											obj_t BgL_evaluatez00_2319;

											if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
												{	/* Eval/eval.scm 169 */
													BgL_evaluatez00_2319 =
														BGl_defaultzd2evaluatezd2zz__evalz00;
												}
											else
												{	/* Eval/eval.scm 169 */
													BgL_evaluatez00_2319 =
														BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
												}
											return
												BGl_evalzf2expanderzf2zz__evalz00(BgL_arg2021z00_860,
												BgL_envz00_859, BGl_expandz12zd2envzc0zz__expandz00,
												BgL_evaluatez00_2319);
										}
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Eval/eval.scm 169 */
								obj_t BgL_envz00_861;

								BgL_envz00_861 = VECTOR_REF(BgL_optz00_11, (int) (((long) 1)));
								{	/* Eval/eval.scm 169 */

									{	/* Eval/eval.scm 169 */
										obj_t BgL_arg2022z00_862;

										BgL_arg2022z00_862 =
											VECTOR_REF(BgL_optz00_11, (int) (((long) 0)));
										{	/* Eval/eval.scm 169 */
											obj_t BgL_evaluatez00_2324;

											if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
												{	/* Eval/eval.scm 169 */
													BgL_evaluatez00_2324 =
														BGl_defaultzd2evaluatezd2zz__evalz00;
												}
											else
												{	/* Eval/eval.scm 169 */
													BgL_evaluatez00_2324 =
														BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
												}
											return
												BGl_evalzf2expanderzf2zz__evalz00(BgL_arg2022z00_862,
												BgL_envz00_861, BGl_expandz12zd2envzc0zz__expandz00,
												BgL_evaluatez00_2324);
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



/* eval! */
	BGL_EXPORTED_DEF obj_t BGl_evalz12z12zz__evalz00(obj_t BgL_expz00_9,
		obj_t BgL_envz00_10)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 169 */
			{	/* Eval/eval.scm 170 */
				obj_t BgL_evaluatez00_2327;

				if (PROCEDUREP(BGl_defaultzd2evaluatezd2zz__evalz00))
					{	/* Eval/eval.scm 170 */
						BgL_evaluatez00_2327 = BGl_defaultzd2evaluatezd2zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 170 */
						BgL_evaluatez00_2327 =
							BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
					}
				return
					BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_9, BgL_envz00_10,
					BGl_expandz12zd2envzc0zz__expandz00, BgL_evaluatez00_2327);
			}
		}
	}



/* eval/expander */
	obj_t BGl_evalzf2expanderzf2zz__evalz00(obj_t BgL_expz00_13,
		obj_t BgL_envz00_14, obj_t BgL_expandz00_15, obj_t BgL_evaluatez00_16)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 178 */
			{	/* Eval/eval.scm 179 */
				obj_t BgL_locz00_865;

				obj_t BgL_sexpz00_866;

				BgL_locz00_865 =
					BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_13);
				if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
					{	/* Eval/eval.scm 180 */
						BgL_sexpz00_866 =
							PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
							(BGl_za2userzd2passza2zd2zz__evalz00, BgL_expz00_13, BEOA);
					}
				else
					{	/* Eval/eval.scm 180 */
						BgL_sexpz00_866 = BgL_expz00_13;
					}
				{	/* Eval/eval.scm 181 */
					bool_t BgL_testz00_3768;

					if (CBOOL(BgL_locz00_865))
						{	/* Eval/eval.scm 181 */
							int BgL_arg2038z00_893;

							BgL_arg2038z00_893 = bgl_debug();
							BgL_testz00_3768 =
								BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT(BgL_arg2038z00_893),
								BINT(((long) 0)));
						}
					else
						{	/* Eval/eval.scm 181 */
							BgL_testz00_3768 = ((bool_t) 0);
						}
					if (BgL_testz00_3768)
						{	/* Eval/eval.scm 181 */
							return
								BGl_zc3exitza32025ze3z83zz__evalz00(BgL_locz00_865,
								BgL_envz00_14, BgL_evaluatez00_16, BgL_sexpz00_866,
								BgL_expandz00_15);
						}
					else
						{	/* Eval/eval.scm 186 */
							obj_t BgL_arg2037z00_892;

							BgL_arg2037z00_892 =
								PROCEDURE_ENTRY(BgL_expandz00_15) (BgL_expandz00_15,
								BgL_sexpz00_866, BEOA);
							return PROCEDURE_ENTRY(BgL_evaluatez00_16) (BgL_evaluatez00_16,
								BgL_arg2037z00_892, BgL_envz00_14, BgL_locz00_865, BEOA);
						}
				}
			}
		}
	}



/* <exit:2025> */
	obj_t BGl_zc3exitza32025ze3z83zz__evalz00(obj_t BgL_locz00_3327,
		obj_t BgL_envz00_3326, obj_t BgL_evaluatez00_3325, obj_t BgL_sexpz00_3324,
		obj_t BgL_expandz00_3323)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 182 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1829z00_869;

			if (SET_EXIT(BgL_an_exit1829z00_869))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1829z00_869 = (void *) jmpbuf;
					{	/* Eval/eval.scm 182 */

						PUSH_EXIT(BgL_an_exit1829z00_869, ((long) 1));
						{	/* Eval/eval.scm 182 */
							obj_t BgL_an_exitd1830z00_870;

							BgL_an_exitd1830z00_870 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 182 */
								obj_t BgL_res1832z00_873;

								{	/* Eval/eval.scm 182 */
									obj_t BgL_err1827z00_874;

									obj_t BgL_ohs1826z00_875;

									BgL_err1827z00_874 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1826z00_875 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 182 */
										obj_t BgL_val1833z00_876;

										BgL_val1833z00_876 =
											BGl_zc3exitza32031ze3z83zz__evalz00(BgL_locz00_3327,
											BgL_envz00_3326, BgL_evaluatez00_3325, BgL_sexpz00_3324,
											BgL_expandz00_3323, BgL_ohs1826z00_875,
											BgL_an_exitd1830z00_870, BgL_err1827z00_874);
										BGL_ERROR_HANDLER_SET(BgL_ohs1826z00_875);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1827z00_874)))
											{	/* Eval/eval.scm 182 */
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1830z00_870,
													BGl_evalzd2exceptionzd2handlerz00zz__evalz00(CDR
														(BgL_err1827z00_874), BgL_locz00_3327));
											}
										else
											{	/* Eval/eval.scm 182 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1833z00_876)))
											{	/* Eval/eval.scm 182 */
												obj_t BgL_arg2029z00_881;

												obj_t BgL_arg2030z00_882;

												{	/* Eval/eval.scm 182 */
													obj_t BgL_pairz00_2339;

													if (PAIRP(BgL_val1833z00_876))
														{	/* Eval/eval.scm 182 */
															BgL_pairz00_2339 = BgL_val1833z00_876;
														}
													else
														{
															obj_t BgL_auxz00_3799;

															BgL_auxz00_3799 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 7189)),
																BGl_string3197z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1833z00_876);
															FAILURE(BgL_auxz00_3799, BFALSE, BFALSE);
														}
													BgL_arg2029z00_881 = CAR(BgL_pairz00_2339);
												}
												BgL_arg2030z00_882 = CDR(BgL_val1833z00_876);
												BgL_res1832z00_873 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2029z00_881, BgL_arg2030z00_882);
											}
										else
											{	/* Eval/eval.scm 182 */
												BgL_res1832z00_873 = BgL_val1833z00_876;
											}
									}
								}
								POP_EXIT();
								return BgL_res1832z00_873;
							}
						}
					}
				}
		}
	}



/* <exit:2031> */
	obj_t BGl_zc3exitza32031ze3z83zz__evalz00(obj_t BgL_locz00_3335,
		obj_t BgL_envz00_3334, obj_t BgL_evaluatez00_3333, obj_t BgL_sexpz00_3332,
		obj_t BgL_expandz00_3331, obj_t BgL_ohs1826z00_3330,
		obj_t BgL_an_exitd1830z00_3329, obj_t BgL_err1827z00_3328)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 182 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1834z00_884;

			if (SET_EXIT(BgL_an_exit1834z00_884))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1834z00_884 = (void *) jmpbuf;
					{	/* Eval/eval.scm 182 */

						PUSH_EXIT(BgL_an_exit1834z00_884, ((long) 0));
						{	/* Eval/eval.scm 182 */
							obj_t BgL_val1835z00_885;

							{	/* Eval/eval.scm 182 */
								obj_t BgL_arg2033z00_886;

								{	/* Eval/eval.scm 182 */
									obj_t BgL_zc3anonymousza32035ze3z83_3155;

									BgL_zc3anonymousza32035ze3z83_3155 =
										make_fx_procedure(BGl_zc3anonymousza32035ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32035ze3z83_3155,
										(int) (((long) 0)), BgL_err1827z00_3328);
									PROCEDURE_SET(BgL_zc3anonymousza32035ze3z83_3155,
										(int) (((long) 1)), BgL_an_exitd1830z00_3329);
									BgL_arg2033z00_886 =
										MAKE_PAIR(BgL_zc3anonymousza32035ze3z83_3155,
										BgL_ohs1826z00_3330);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2033z00_886);
								BUNSPEC;
							}
							{	/* Eval/eval.scm 185 */
								obj_t BgL_arg2036z00_891;

								BgL_arg2036z00_891 =
									PROCEDURE_ENTRY(BgL_expandz00_3331) (BgL_expandz00_3331,
									BgL_sexpz00_3332, BEOA);
								BgL_val1835z00_885 =
									PROCEDURE_ENTRY(BgL_evaluatez00_3333) (BgL_evaluatez00_3333,
									BgL_arg2036z00_891, BgL_envz00_3334, BgL_locz00_3335, BEOA);
							}
							POP_EXIT();
							return BgL_val1835z00_885;
						}
					}
				}
		}
	}



/* <anonymous:2035> */
	obj_t BGl_zc3anonymousza32035ze3z83zz__evalz00(obj_t BgL_envz00_3156,
		obj_t BgL_ez00_3159)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 182 */
			{	/* Eval/eval.scm 182 */
				obj_t BgL_err1827z00_3157;

				obj_t BgL_an_exitd1830z00_3158;

				BgL_err1827z00_3157 =
					PROCEDURE_REF(BgL_envz00_3156, (int) (((long) 0)));
				BgL_an_exitd1830z00_3158 =
					PROCEDURE_REF(BgL_envz00_3156, (int) (((long) 1)));
				{
					obj_t BgL_ez00_888;

					BgL_ez00_888 = BgL_ez00_3159;
					{	/* Eval/eval.scm 182 */
						obj_t BgL_pairz00_2331;

						if (PAIRP(BgL_err1827z00_3157))
							{	/* Eval/eval.scm 182 */
								BgL_pairz00_2331 = BgL_err1827z00_3157;
							}
						else
							{
								obj_t BgL_auxz00_3830;

								BgL_auxz00_3830 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 7189)), BGl_string3199z00zz__evalz00,
									BGl_string3198z00zz__evalz00, BgL_err1827z00_3157);
								FAILURE(BgL_auxz00_3830, BFALSE, BFALSE);
							}
						SET_CAR(BgL_pairz00_2331, BTRUE);
					}
					SET_CDR(BgL_err1827z00_3157, BgL_ez00_888);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1830z00_3158,
						BgL_ez00_888);
				}
			}
		}
	}



/* eval-exception-handler */
	obj_t BGl_evalzd2exceptionzd2handlerz00zz__evalz00(obj_t BgL_ez00_17,
		obj_t BgL_locz00_18)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 191 */
			{	/* Eval/eval.scm 192 */
				bool_t BgL_testz00_3837;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_17,
						BGl_z62exceptionz62zz__objectz00))
					{	/* Eval/eval.scm 192 */
						bool_t BgL_testz00_3840;

						{	/* Eval/eval.scm 192 */
							BgL_z62exceptionz62_bglt BgL_obj1102z00_2342;

							BgL_obj1102z00_2342 = (BgL_z62exceptionz62_bglt) (BgL_ez00_17);
							BgL_testz00_3840 =
								CBOOL(
								(((BgL_z62exceptionz62_bglt) CREF(BgL_obj1102z00_2342))->
									BgL_fnamez00));
						}
						if (BgL_testz00_3840)
							{	/* Eval/eval.scm 192 */
								BgL_testz00_3837 = ((bool_t) 0);
							}
						else
							{	/* Eval/eval.scm 192 */
								BgL_testz00_3837 = ((bool_t) 1);
							}
					}
				else
					{	/* Eval/eval.scm 192 */
						BgL_testz00_3837 = ((bool_t) 0);
					}
				if (BgL_testz00_3837)
					{	/* Eval/eval.scm 192 */
						if (PAIRP(BgL_locz00_18))
							{	/* Eval/eval.scm 193 */
								obj_t BgL_cdrzd21396zd2_902;

								BgL_cdrzd21396zd2_902 = CDR(BgL_locz00_18);
								if ((CAR(BgL_locz00_18) == BGl_symbol3200z00zz__evalz00))
									{	/* Eval/eval.scm 193 */
										if (PAIRP(BgL_cdrzd21396zd2_902))
											{	/* Eval/eval.scm 193 */
												obj_t BgL_cdrzd21400zd2_905;

												BgL_cdrzd21400zd2_905 = CDR(BgL_cdrzd21396zd2_902);
												if (PAIRP(BgL_cdrzd21400zd2_905))
													{	/* Eval/eval.scm 193 */
														if (NULLP(CDR(BgL_cdrzd21400zd2_905)))
															{	/* Eval/eval.scm 193 */
																obj_t BgL_arg2047z00_908;

																obj_t BgL_arg2048z00_909;

																BgL_arg2047z00_908 = CAR(BgL_cdrzd21396zd2_902);
																BgL_arg2048z00_909 = CAR(BgL_cdrzd21400zd2_905);
																{
																	BgL_z62exceptionz62_bglt BgL_auxz00_3860;

																	BgL_auxz00_3860 =
																		(BgL_z62exceptionz62_bglt) (BgL_ez00_17);
																	((((BgL_z62exceptionz62_bglt)
																				CREF(BgL_auxz00_3860))->BgL_fnamez00) =
																		((obj_t) BgL_arg2047z00_908), BUNSPEC);
																}
																{
																	BgL_z62exceptionz62_bglt BgL_auxz00_3863;

																	BgL_auxz00_3863 =
																		(BgL_z62exceptionz62_bglt) (BgL_ez00_17);
																	((((BgL_z62exceptionz62_bglt)
																				CREF(BgL_auxz00_3863))->
																			BgL_locationz00) =
																		((obj_t) BgL_arg2048z00_909), BUNSPEC);
																}
															}
														else
															{	/* Eval/eval.scm 193 */
																BFALSE;
															}
													}
												else
													{	/* Eval/eval.scm 193 */
														BFALSE;
													}
											}
										else
											{	/* Eval/eval.scm 193 */
												BFALSE;
											}
									}
								else
									{	/* Eval/eval.scm 193 */
										BFALSE;
									}
							}
						else
							{	/* Eval/eval.scm 193 */
								BFALSE;
							}
					}
				else
					{	/* Eval/eval.scm 192 */
						BFALSE;
					}
			}
			return BGl_raisez00zz__errorz00(BgL_ez00_17);
		}
	}



/* _byte-code-compile */
	obj_t BGl__bytezd2codezd2compilez00zz__evalz00(obj_t BgL_envz00_22,
		obj_t BgL_optz00_21)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 202 */
			{	/* Eval/eval.scm 202 */
				obj_t BgL_g1970z00_915;

				BgL_g1970z00_915 = VECTOR_REF(BgL_optz00_21, (int) (((long) 0)));
				{	/* Eval/eval.scm 202 */
					int BgL_aux1972z00_917;

					BgL_aux1972z00_917 = VECTOR_LENGTH(BgL_optz00_21);
					switch ((long) (BgL_aux1972z00_917))
						{
						case ((long) 1):

							{	/* Eval/eval.scm 202 */
								obj_t BgL_envz00_919;

								{	/* Eval/eval.scm 202 */
									obj_t BgL_mz00_2363;

									BgL_mz00_2363 = BGl_evalzd2modulezd2zz__evmodulez00();
									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2363))
										{	/* Eval/eval.scm 202 */
											BgL_envz00_919 = BgL_mz00_2363;
										}
									else
										{	/* Eval/eval.scm 202 */
											BgL_envz00_919 = BGl_symbol3191z00zz__evalz00;
										}
								}
								{	/* Eval/eval.scm 202 */

									return
										BGl_bytezd2codezd2compilez00zz__evalz00(VECTOR_REF
										(BgL_optz00_21, (int) (((long) 0))), BgL_envz00_919);
							}} break;
						case ((long) 2):

							{	/* Eval/eval.scm 202 */
								obj_t BgL_envz00_921;

								BgL_envz00_921 = VECTOR_REF(BgL_optz00_21, (int) (((long) 1)));
								{	/* Eval/eval.scm 202 */

									return
										BGl_bytezd2codezd2compilez00zz__evalz00(VECTOR_REF
										(BgL_optz00_21, (int) (((long) 0))), BgL_envz00_921);
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* byte-code-compile */
	BGL_EXPORTED_DEF obj_t BGl_bytezd2codezd2compilez00zz__evalz00(obj_t
		BgL_expz00_19, obj_t BgL_envz00_20)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 202 */
			{	/* Eval/eval.scm 203 */
				obj_t BgL_locz00_923;

				BgL_locz00_923 =
					BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_expz00_19);
				{	/* Eval/eval.scm 203 */
					obj_t BgL_sexpz00_924;

					if (PROCEDUREP(BGl_za2userzd2passza2zd2zz__evalz00))
						{	/* Eval/eval.scm 204 */
							BgL_sexpz00_924 =
								PROCEDURE_ENTRY(BGl_za2userzd2passza2zd2zz__evalz00)
								(BGl_za2userzd2passza2zd2zz__evalz00, BgL_expz00_19, BEOA);
						}
					else
						{	/* Eval/eval.scm 204 */
							BgL_sexpz00_924 = BgL_expz00_19;
						}
					{	/* Eval/eval.scm 204 */

						return
							obj_to_string(BGl_evcompilez00zz__evcompilez00
							(BGl_expandz00zz__expandz00(BgL_sexpz00_924), BNIL, BgL_envz00_20,
								BGl_symbol3183z00zz__evalz00, ((bool_t) 1), BgL_locz00_923,
								((bool_t) 0), ((bool_t) 1)));
					}
				}
			}
		}
	}



/* byte-code-run */
	BGL_EXPORTED_DEF obj_t BGl_bytezd2codezd2runz00zz__evalz00(obj_t
		BgL_bytezd2codezd2_23)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 211 */
			return BGl_zc3exitza32064ze3z83zz__evalz00(BgL_bytezd2codezd2_23);
		}
	}



/* <exit:2064> */
	obj_t BGl_zc3exitza32064ze3z83zz__evalz00(obj_t BgL_bytezd2codezd2_3318)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 212 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1840z00_931;

			if (SET_EXIT(BgL_an_exit1840z00_931))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1840z00_931 = (void *) jmpbuf;
					{	/* Eval/eval.scm 212 */

						PUSH_EXIT(BgL_an_exit1840z00_931, ((long) 1));
						{	/* Eval/eval.scm 212 */
							obj_t BgL_an_exitd1841z00_932;

							BgL_an_exitd1841z00_932 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 212 */
								obj_t BgL_res1843z00_935;

								{	/* Eval/eval.scm 212 */
									obj_t BgL_err1838z00_936;

									obj_t BgL_ohs1837z00_937;

									BgL_err1838z00_936 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1837z00_937 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 212 */
										obj_t BgL_val1844z00_938;

										BgL_val1844z00_938 =
											BGl_zc3exitza32071ze3z83zz__evalz00
											(BgL_bytezd2codezd2_3318, BgL_ohs1837z00_937,
											BgL_an_exitd1841z00_932, BgL_err1838z00_936);
										BGL_ERROR_HANDLER_SET(BgL_ohs1837z00_937);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1838z00_936)))
											{	/* Eval/eval.scm 212 */
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1841z00_932,
													BGl_evmeaningzd2exceptionzd2handlerz00zz__everrorz00
													(CDR(BgL_err1838z00_936)));
											}
										else
											{	/* Eval/eval.scm 212 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1844z00_938)))
											{	/* Eval/eval.scm 212 */
												obj_t BgL_arg2069z00_943;

												obj_t BgL_arg2070z00_944;

												{	/* Eval/eval.scm 212 */
													obj_t BgL_pairz00_2374;

													if (PAIRP(BgL_val1844z00_938))
														{	/* Eval/eval.scm 212 */
															BgL_pairz00_2374 = BgL_val1844z00_938;
														}
													else
														{
															obj_t BgL_auxz00_3911;

															BgL_auxz00_3911 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 8532)),
																BGl_string3202z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1844z00_938);
															FAILURE(BgL_auxz00_3911, BFALSE, BFALSE);
														}
													BgL_arg2069z00_943 = CAR(BgL_pairz00_2374);
												}
												BgL_arg2070z00_944 = CDR(BgL_val1844z00_938);
												BgL_res1843z00_935 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2069z00_943, BgL_arg2070z00_944);
											}
										else
											{	/* Eval/eval.scm 212 */
												BgL_res1843z00_935 = BgL_val1844z00_938;
											}
									}
								}
								POP_EXIT();
								return BgL_res1843z00_935;
							}
						}
					}
				}
		}
	}



/* <exit:2071> */
	obj_t BGl_zc3exitza32071ze3z83zz__evalz00(obj_t BgL_bytezd2codezd2_3322,
		obj_t BgL_ohs1837z00_3321, obj_t BgL_an_exitd1841z00_3320,
		obj_t BgL_err1838z00_3319)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 212 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1845z00_946;

			if (SET_EXIT(BgL_an_exit1845z00_946))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1845z00_946 = (void *) jmpbuf;
					{	/* Eval/eval.scm 212 */

						PUSH_EXIT(BgL_an_exit1845z00_946, ((long) 0));
						{	/* Eval/eval.scm 212 */
							obj_t BgL_val1846z00_947;

							{	/* Eval/eval.scm 212 */
								obj_t BgL_arg2072z00_948;

								{	/* Eval/eval.scm 212 */
									obj_t BgL_zc3anonymousza32074ze3z83_3160;

									BgL_zc3anonymousza32074ze3z83_3160 =
										make_fx_procedure(BGl_zc3anonymousza32074ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32074ze3z83_3160,
										(int) (((long) 0)), BgL_err1838z00_3319);
									PROCEDURE_SET(BgL_zc3anonymousza32074ze3z83_3160,
										(int) (((long) 1)), BgL_an_exitd1841z00_3320);
									BgL_arg2072z00_948 =
										MAKE_PAIR(BgL_zc3anonymousza32074ze3z83_3160,
										BgL_ohs1837z00_3321);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2072z00_948);
								BUNSPEC;
							}
							BgL_val1846z00_947 =
								BGl_evmeaningz00zz__evmeaningz00(string_to_obj
								(BgL_bytezd2codezd2_3322), BNIL, BGL_CURRENT_DYNAMIC_ENV());
							POP_EXIT();
							return BgL_val1846z00_947;
						}
					}
				}
		}
	}



/* _byte-code-run */
	obj_t BGl__bytezd2codezd2runz00zz__evalz00(obj_t BgL_envz00_3161,
		obj_t BgL_bytezd2codezd2_3162)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 211 */
			{	/* Eval/eval.scm 212 */
				obj_t BgL_bytezd2codezd2_3546;

				if (STRINGP(BgL_bytezd2codezd2_3162))
					{	/* Eval/eval.scm 212 */
						BgL_bytezd2codezd2_3546 = BgL_bytezd2codezd2_3162;
					}
				else
					{
						obj_t BgL_auxz00_3937;

						BgL_auxz00_3937 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
							BINT(((long) 8532)), BGl_string3203z00zz__evalz00,
							BGl_string3204z00zz__evalz00, BgL_bytezd2codezd2_3162);
						FAILURE(BgL_auxz00_3937, BFALSE, BFALSE);
					}
				return BGl_zc3exitza32064ze3z83zz__evalz00(BgL_bytezd2codezd2_3546);
			}
		}
	}



/* <anonymous:2074> */
	obj_t BGl_zc3anonymousza32074ze3z83zz__evalz00(obj_t BgL_envz00_3163,
		obj_t BgL_ez00_3166)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 212 */
			{	/* Eval/eval.scm 212 */
				obj_t BgL_err1838z00_3164;

				obj_t BgL_an_exitd1841z00_3165;

				BgL_err1838z00_3164 =
					PROCEDURE_REF(BgL_envz00_3163, (int) (((long) 0)));
				BgL_an_exitd1841z00_3165 =
					PROCEDURE_REF(BgL_envz00_3163, (int) (((long) 1)));
				{
					obj_t BgL_ez00_950;

					BgL_ez00_950 = BgL_ez00_3166;
					{	/* Eval/eval.scm 212 */
						obj_t BgL_pairz00_2366;

						if (PAIRP(BgL_err1838z00_3164))
							{	/* Eval/eval.scm 212 */
								BgL_pairz00_2366 = BgL_err1838z00_3164;
							}
						else
							{
								obj_t BgL_auxz00_3948;

								BgL_auxz00_3948 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 8532)), BGl_string3205z00zz__evalz00,
									BGl_string3198z00zz__evalz00, BgL_err1838z00_3164);
								FAILURE(BgL_auxz00_3948, BFALSE, BFALSE);
							}
						SET_CAR(BgL_pairz00_2366, BTRUE);
					}
					SET_CDR(BgL_err1838z00_3164, BgL_ez00_950);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1841z00_3165,
						BgL_ez00_950);
				}
			}
		}
	}



/* scheme-report-environment */
	BGL_EXPORTED_DEF obj_t BGl_schemezd2reportzd2environmentz00zz__evalz00(obj_t
		BgL_versionz00_24)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 219 */
			{	/* Eval/eval.scm 220 */
				bool_t BgL_testz00_3955;

				{	/* Eval/eval.scm 220 */
					long BgL_n1z00_2377;

					{	/* Eval/eval.scm 220 */
						obj_t BgL_auxz00_3956;

						if (INTEGERP(BgL_versionz00_24))
							{	/* Eval/eval.scm 220 */
								BgL_auxz00_3956 = BgL_versionz00_24;
							}
						else
							{
								obj_t BgL_auxz00_3959;

								BgL_auxz00_3959 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 8929)), BGl_string3206z00zz__evalz00,
									BGl_string3207z00zz__evalz00, BgL_versionz00_24);
								FAILURE(BgL_auxz00_3959, BFALSE, BFALSE);
							}
						BgL_n1z00_2377 = (long) CINT(BgL_auxz00_3956);
					}
					BgL_testz00_3955 = (BgL_n1z00_2377 == ((long) 5));
				}
				if (BgL_testz00_3955)
					{	/* Eval/eval.scm 220 */
						return BGl_symbol3208z00zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 220 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3208z00zz__evalz00,
							BGl_string3209z00zz__evalz00, BgL_versionz00_24);
					}
			}
		}
	}



/* _scheme-report-environment */
	obj_t BGl__schemezd2reportzd2environmentz00zz__evalz00(obj_t BgL_envz00_3167,
		obj_t BgL_versionz00_3168)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 219 */
			return
				BGl_schemezd2reportzd2environmentz00zz__evalz00(BgL_versionz00_3168);
		}
	}



/* null-environment */
	BGL_EXPORTED_DEF obj_t BGl_nullzd2environmentzd2zz__evalz00(obj_t
		BgL_versionz00_25)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 229 */
			{	/* Eval/eval.scm 230 */
				bool_t BgL_testz00_3967;

				{	/* Eval/eval.scm 230 */
					long BgL_n1z00_2380;

					{	/* Eval/eval.scm 230 */
						obj_t BgL_auxz00_3968;

						if (INTEGERP(BgL_versionz00_25))
							{	/* Eval/eval.scm 230 */
								BgL_auxz00_3968 = BgL_versionz00_25;
							}
						else
							{
								obj_t BgL_auxz00_3971;

								BgL_auxz00_3971 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 9337)), BGl_string3210z00zz__evalz00,
									BGl_string3207z00zz__evalz00, BgL_versionz00_25);
								FAILURE(BgL_auxz00_3971, BFALSE, BFALSE);
							}
						BgL_n1z00_2380 = (long) CINT(BgL_auxz00_3968);
					}
					BgL_testz00_3967 = (BgL_n1z00_2380 == ((long) 5));
				}
				if (BgL_testz00_3967)
					{	/* Eval/eval.scm 230 */
						return BGl_symbol3211z00zz__evalz00;
					}
				else
					{	/* Eval/eval.scm 230 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3208z00zz__evalz00,
							BGl_string3209z00zz__evalz00, BgL_versionz00_25);
					}
			}
		}
	}



/* _null-environment */
	obj_t BGl__nullzd2environmentzd2zz__evalz00(obj_t BgL_envz00_3169,
		obj_t BgL_versionz00_3170)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 229 */
			return BGl_nullzd2environmentzd2zz__evalz00(BgL_versionz00_3170);
		}
	}



/* interaction-environment */
	BGL_EXPORTED_DEF obj_t BGl_interactionzd2environmentzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 239 */
			return BGl_symbol3191z00zz__evalz00;
		}
	}



/* _interaction-environment */
	obj_t BGl__interactionzd2environmentzd2zz__evalz00(obj_t BgL_envz00_3171)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 239 */
			return BGl_symbol3191z00zz__evalz00;
		}
	}



/* default-environment */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2environmentzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 245 */
			{	/* Eval/eval.scm 246 */
				obj_t BgL_mz00_2382;

				BgL_mz00_2382 = BGl_evalzd2modulezd2zz__evmodulez00();
				if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2382))
					{	/* Eval/eval.scm 246 */
						return BgL_mz00_2382;
					}
				else
					{	/* Eval/eval.scm 246 */
						return BGl_symbol3191z00zz__evalz00;
					}
			}
		}
	}



/* _default-environment */
	obj_t BGl__defaultzd2environmentzd2zz__evalz00(obj_t BgL_envz00_3172)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 245 */
			return BGl_defaultzd2environmentzd2zz__evalz00();
		}
	}



/* set-prompter! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2prompterz12zc0zz__evalz00(obj_t
		BgL_procz00_26)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 262 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_procz00_26, (int) (((long) 1))))
				{	/* Eval/eval.scm 263 */
					return (BGl_za2promptza2z00zz__evalz00 = BgL_procz00_26, BUNSPEC);
				}
			else
				{	/* Eval/eval.scm 263 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3212z00zz__evalz00,
						BGl_string3214z00zz__evalz00, BgL_procz00_26);
				}
		}
	}



/* _set-prompter! */
	obj_t BGl__setzd2prompterz12zc0zz__evalz00(obj_t BgL_envz00_3173,
		obj_t BgL_procz00_3174)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 262 */
			{	/* Eval/eval.scm 263 */
				obj_t BgL_auxz00_3987;

				if (PROCEDUREP(BgL_procz00_3174))
					{	/* Eval/eval.scm 263 */
						BgL_auxz00_3987 = BgL_procz00_3174;
					}
				else
					{
						obj_t BgL_auxz00_3990;

						BgL_auxz00_3990 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
							BINT(((long) 10702)), BGl_string3215z00zz__evalz00,
							BGl_string3195z00zz__evalz00, BgL_procz00_3174);
						FAILURE(BgL_auxz00_3990, BFALSE, BFALSE);
					}
				return BGl_setzd2prompterz12zc0zz__evalz00(BgL_auxz00_3987);
			}
		}
	}



/* get-prompter */
	BGL_EXPORTED_DEF obj_t BGl_getzd2prompterzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 272 */
			return BGl_za2promptza2z00zz__evalz00;
		}
	}



/* _get-prompter */
	obj_t BGl__getzd2prompterzd2zz__evalz00(obj_t BgL_envz00_3175)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 272 */
			return BGl_za2promptza2z00zz__evalz00;
		}
	}



/* repl */
	BGL_EXPORTED_DEF obj_t BGl_replz00zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 284 */
			{	/* Eval/eval.scm 285 */
				obj_t BgL_replzd2quitzd2_961;

				long BgL_replzd2numzd2_962;

				BgL_replzd2quitzd2_961 = BGl_za2replzd2quitza2zd2zz__evalz00;
				{	/* Eval/eval.scm 286 */
					obj_t BgL_auxz00_3995;

					{	/* Eval/eval.scm 286 */
						obj_t BgL_aux3001z00_3367;

						BgL_aux3001z00_3367 = BGl_za2replzd2numza2zd2zz__evalz00;
						if (INTEGERP(BgL_aux3001z00_3367))
							{	/* Eval/eval.scm 286 */
								BgL_auxz00_3995 = BgL_aux3001z00_3367;
							}
						else
							{
								obj_t BgL_auxz00_3998;

								BgL_auxz00_3998 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 11694)), BGl_string3216z00zz__evalz00,
									BGl_string3207z00zz__evalz00, BgL_aux3001z00_3367);
								FAILURE(BgL_auxz00_3998, BFALSE, BFALSE);
					}}
					BgL_replzd2numzd2_962 = (long) CINT(BgL_auxz00_3995);
				}
				BGl_zc3exitza32083ze3z83zz__evalz00(BgL_replzd2quitzd2_961,
					BgL_replzd2numzd2_962);
				{	/* Eval/eval.scm 295 */
					obj_t BgL_arg2089z00_976;

					{	/* Eval/eval.scm 295 */
						obj_t BgL_res2936z00_2390;

						{	/* Eval/eval.scm 295 */
							obj_t BgL_auxz00_4004;

							BgL_auxz00_4004 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2936z00_2390 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4004);
						}
						BgL_arg2089z00_976 = BgL_res2936z00_2390;
					}
					bgl_display_char(((unsigned char) '\n'), BgL_arg2089z00_976);
				}
				{	/* Eval/eval.scm 296 */
					obj_t BgL_arg2090z00_977;

					{	/* Eval/eval.scm 296 */
						obj_t BgL_res2937z00_2393;

						{	/* Eval/eval.scm 296 */
							obj_t BgL_auxz00_4008;

							BgL_auxz00_4008 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2937z00_2393 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4008);
						}
						BgL_arg2090z00_977 = BgL_res2937z00_2393;
					}
					return FLUSH_OUTPUT_PORT(BgL_arg2090z00_977);
				}
			}
		}
	}



/* <exit:2087> */
	obj_t BGl_zc3exitza32087ze3z83zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 293 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1852z00_974;

			if (SET_EXIT(BgL_an_exit1852z00_974))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1852z00_974 = (void *) jmpbuf;
					{	/* Eval/eval.scm 293 */

						PUSH_EXIT(BgL_an_exit1852z00_974, ((long) 0));
						{	/* Eval/eval.scm 291 */
							obj_t BgL_val1853z00_975;

							BgL_val1853z00_975 = BGl_internalzd2replzd2zz__evalz00();
							POP_EXIT();
							return BgL_val1853z00_975;
						}
					}
				}
		}
	}



/* <exit:2083> */
	obj_t BGl_zc3exitza32083ze3z83zz__evalz00(obj_t BgL_replzd2quitzd2_3317,
		long BgL_replzd2numzd2_3316)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 287 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1847z00_964;

			if (SET_EXIT(BgL_an_exit1847z00_964))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1847z00_964 = (void *) jmpbuf;
					{	/* Eval/eval.scm 287 */

						PUSH_EXIT(BgL_an_exit1847z00_964, ((long) 1));
						{	/* Eval/eval.scm 287 */
							obj_t BgL_an_exitd1848z00_965;

							BgL_an_exitd1848z00_965 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 287 */
								obj_t BgL_quitz00_3176;

								BgL_quitz00_3176 =
									make_fx_procedure(BGl_quit_2968z00zz__evalz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_quitz00_3176,
									(int) (((long) 0)), BgL_an_exitd1848z00_965);
								{	/* Eval/eval.scm 294 */
									obj_t BgL_res1850z00_968;

									BGl_za2replzd2quitza2zd2zz__evalz00 = BgL_quitz00_3176;
									{	/* Eval/eval.scm 289 */
										long BgL_za72za7_2386;

										{	/* Eval/eval.scm 289 */
											obj_t BgL_auxz00_4026;

											{	/* Eval/eval.scm 289 */
												obj_t BgL_aux3003z00_3369;

												BgL_aux3003z00_3369 =
													BGl_za2replzd2numza2zd2zz__evalz00;
												if (INTEGERP(BgL_aux3003z00_3369))
													{	/* Eval/eval.scm 289 */
														BgL_auxz00_4026 = BgL_aux3003z00_3369;
													}
												else
													{
														obj_t BgL_auxz00_4029;

														BgL_auxz00_4029 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string3193z00zz__evalz00,
															BINT(((long) 11787)),
															BGl_string3217z00zz__evalz00,
															BGl_string3207z00zz__evalz00,
															BgL_aux3003z00_3369);
														FAILURE(BgL_auxz00_4029, BFALSE, BFALSE);
											}}
											BgL_za72za7_2386 = (long) CINT(BgL_auxz00_4026);
										}
										BGl_za2replzd2numza2zd2zz__evalz00 =
											BINT((((long) 1) + BgL_za72za7_2386));
									}
									{	/* Eval/eval.scm 290 */
										obj_t BgL_val1851z00_969;

										BgL_val1851z00_969 = BGl_zc3exitza32087ze3z83zz__evalz00();
										BGl_za2replzd2numza2zd2zz__evalz00 =
											BINT(BgL_replzd2numzd2_3316);
										BGl_za2replzd2quitza2zd2zz__evalz00 =
											BgL_replzd2quitzd2_3317;
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1851z00_969)))
											{	/* Eval/eval.scm 294 */
												obj_t BgL_arg2085z00_971;

												obj_t BgL_arg2086z00_972;

												{	/* Eval/eval.scm 294 */
													obj_t BgL_pairz00_2387;

													if (PAIRP(BgL_val1851z00_969))
														{	/* Eval/eval.scm 294 */
															BgL_pairz00_2387 = BgL_val1851z00_969;
														}
													else
														{
															obj_t BgL_auxz00_4043;

															BgL_auxz00_4043 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 11901)),
																BGl_string3217z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1851z00_969);
															FAILURE(BgL_auxz00_4043, BFALSE, BFALSE);
														}
													BgL_arg2085z00_971 = CAR(BgL_pairz00_2387);
												}
												BgL_arg2086z00_972 = CDR(BgL_val1851z00_969);
												BgL_res1850z00_968 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2085z00_971, BgL_arg2086z00_972);
											}
										else
											{	/* Eval/eval.scm 294 */
												BgL_res1850z00_968 = BgL_val1851z00_969;
											}
									}
									POP_EXIT();
									return BgL_res1850z00_968;
								}
							}
						}
					}
				}
		}
	}



/* _repl */
	obj_t BGl__replz00zz__evalz00(obj_t BgL_envz00_3177)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 284 */
			return BGl_replz00zz__evalz00();
		}
	}



/* quit_2968 */
	obj_t BGl_quit_2968z00zz__evalz00(obj_t BgL_envz00_3178,
		obj_t BgL_val1849z00_3180)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 287 */
			{	/* Eval/eval.scm 287 */
				obj_t BgL_an_exitd1848z00_3179;

				BgL_an_exitd1848z00_3179 =
					PROCEDURE_REF(BgL_envz00_3178, (int) (((long) 0)));
				{
					obj_t BgL_val1849z00_966;

					BgL_val1849z00_966 = BgL_val1849z00_3180;
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1848z00_3179,
						BgL_val1849z00_966);
				}
			}
		}
	}



/* get-eval-reader */
	obj_t BGl_getzd2evalzd2readerz00zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 301 */
			{	/* Eval/eval.scm 302 */
				obj_t BgL__ortest_1854z00_978;

				BgL__ortest_1854z00_978 = BGl_bigloozd2loadzd2readerz00zz__paramz00();
				if (CBOOL(BgL__ortest_1854z00_978))
					{	/* Eval/eval.scm 302 */
						return BgL__ortest_1854z00_978;
					}
				else
					{	/* Eval/eval.scm 302 */
						return BGl_proc3218z00zz__evalz00;
					}
			}
		}
	}



/* <anonymous:2091> */
	obj_t BGl_zc3anonymousza32091ze3z83zz__evalz00(obj_t BgL_envz00_3182,
		obj_t BgL_pz00_3183)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 303 */
			{
				obj_t BgL_pz00_979;

				BgL_pz00_979 = BgL_pz00_3183;
				{	/* Eval/eval.scm 303 */
					obj_t BgL_auxz00_4058;

					if (INPUT_PORTP(BgL_pz00_979))
						{	/* Eval/eval.scm 303 */
							BgL_auxz00_4058 = BgL_pz00_979;
						}
					else
						{
							obj_t BgL_auxz00_4061;

							BgL_auxz00_4061 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
								BINT(((long) 12295)), BGl_string3219z00zz__evalz00,
								BGl_string3220z00zz__evalz00, BgL_pz00_979);
							FAILURE(BgL_auxz00_4061, BFALSE, BFALSE);
						}
					return BGl_readz00zz__readerz00(BgL_auxz00_4058, BTRUE);
				}
			}
		}
	}



/* internal-repl */
	obj_t BGl_internalzd2replzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 308 */
			{	/* Eval/eval.scm 309 */
				obj_t BgL_oldzd2intrhdlzd2_981;

				BgL_oldzd2intrhdlzd2_981 =
					BGl_getzd2signalzd2handlerz00zz__osz00(SIGINT);
				{	/* Eval/eval.scm 312 */
					obj_t BgL_val1855z00_983;

					BgL_val1855z00_983 =
						BGl_zc3exitza32099ze3z83zz__evalz00(BGl_proc3221z00zz__evalz00);
					if (PROCEDUREP(BgL_oldzd2intrhdlzd2_981))
						{	/* Eval/eval.scm 358 */
							BGl_signalz00zz__osz00(SIGINT, BgL_oldzd2intrhdlzd2_981);
						}
					else
						{	/* Eval/eval.scm 358 */
							BGl_signalz00zz__osz00(SIGINT, BGl_proc3222z00zz__evalz00);
						}
					if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
							(BgL_val1855z00_983)))
						{	/* Eval/eval.scm 358 */
							obj_t BgL_arg2097z00_991;

							obj_t BgL_arg2098z00_992;

							{	/* Eval/eval.scm 358 */
								obj_t BgL_pairz00_2427;

								if (PAIRP(BgL_val1855z00_983))
									{	/* Eval/eval.scm 358 */
										BgL_pairz00_2427 = BgL_val1855z00_983;
									}
								else
									{
										obj_t BgL_auxz00_4077;

										BgL_auxz00_4077 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3193z00zz__evalz00, BINT(((long) 14013)),
											BGl_string3223z00zz__evalz00,
											BGl_string3198z00zz__evalz00, BgL_val1855z00_983);
										FAILURE(BgL_auxz00_4077, BFALSE, BFALSE);
									}
								BgL_arg2097z00_991 = CAR(BgL_pairz00_2427);
							}
							BgL_arg2098z00_992 = CDR(BgL_val1855z00_983);
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_arg2097z00_991,
								BgL_arg2098z00_992);
						}
					else
						{	/* Eval/eval.scm 358 */
							return BgL_val1855z00_983;
						}
				}
			}
		}
	}



/* <exit:2106> */
	obj_t BGl_zc3exitza32106ze3z83zz__evalz00(obj_t BgL_readz00_3313)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 328 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1862z00_1013;

			if (SET_EXIT(BgL_an_exit1862z00_1013))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1862z00_1013 = (void *) jmpbuf;
					{	/* Eval/eval.scm 328 */

						PUSH_EXIT(BgL_an_exit1862z00_1013, ((long) 1));
						{	/* Eval/eval.scm 328 */
							obj_t BgL_an_exitd1863z00_1014;

							BgL_an_exitd1863z00_1014 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 329 */
								obj_t BgL_res1865z00_1017;

								{	/* Eval/eval.scm 329 */
									obj_t BgL_expz00_1018;

									{	/* Eval/eval.scm 331 */
										obj_t BgL_zc3anonymousza32116ze3z83_3188;

										BgL_zc3anonymousza32116ze3z83_3188 =
											make_fx_procedure
											(BGl_zc3anonymousza32116ze3z83zz__evalz00,
											(int) (((long) 1)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3anonymousza32116ze3z83_3188,
											(int) (((long) 0)), BgL_an_exitd1863z00_1014);
										BgL_expz00_1018 =
											BGl_withzd2exceptionzd2handlerz00zz__errorz00
											(BgL_zc3anonymousza32116ze3z83_3188, BgL_readz00_3313);
									}
									if (EOF_OBJECTP(BgL_expz00_1018))
										{	/* Eval/eval.scm 341 */
											BgL_res1865z00_1017 =
												PROCEDURE_ENTRY(BGl_za2replzd2quitza2zd2zz__evalz00)
												(BGl_za2replzd2quitza2zd2zz__evalz00, BINT(((long) 0)),
												BEOA);
										}
									else
										{	/* Eval/eval.scm 343 */
											obj_t BgL_vz00_1020;

											{	/* Eval/eval.scm 345 */
												obj_t BgL_zc3anonymousza32114ze3z83_3185;

												obj_t BgL_zc3anonymousza32112ze3z83_3186;

												BgL_zc3anonymousza32114ze3z83_3185 =
													make_fx_procedure
													(BGl_zc3anonymousza32114ze3z83zz__evalz00,
													(int) (((long) 0)), (int) (((long) 1)));
												BgL_zc3anonymousza32112ze3z83_3186 =
													make_fx_procedure
													(BGl_zc3anonymousza32112ze3z83zz__evalz00,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza32114ze3z83_3185,
													(int) (((long) 0)), BgL_expz00_1018);
												PROCEDURE_SET(BgL_zc3anonymousza32112ze3z83_3186,
													(int) (((long) 0)), BgL_an_exitd1863z00_1014);
												BgL_vz00_1020 =
													BGl_withzd2exceptionzd2handlerz00zz__errorz00
													(BgL_zc3anonymousza32112ze3z83_3186,
													BgL_zc3anonymousza32114ze3z83_3185);
											}
											{	/* Eval/eval.scm 352 */
												bool_t BgL_testz00_4110;

												{	/* Eval/eval.scm 352 */
													obj_t BgL_arg2109z00_1023;

													{	/* Eval/eval.scm 352 */
														obj_t BgL_res2941z00_2420;

														{	/* Eval/eval.scm 352 */
															obj_t BgL_auxz00_4111;

															BgL_auxz00_4111 = BGL_CURRENT_DYNAMIC_ENV();
															BgL_res2941z00_2420 =
																BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4111);
														}
														BgL_arg2109z00_1023 = BgL_res2941z00_2420;
													}
													BgL_testz00_4110 =
														(BGl_za2transcriptza2z00zz__evalz00 ==
														BgL_arg2109z00_1023);
												}
												if (BgL_testz00_4110)
													{	/* Eval/eval.scm 352 */
														BFALSE;
													}
												else
													{	/* Eval/eval.scm 353 */
														obj_t BgL_port1938z00_1022;

														BgL_port1938z00_1022 =
															BGl_za2transcriptza2z00zz__evalz00;
														{	/* Eval/eval.scm 353 */
															obj_t BgL_portz00_2422;

															if (OUTPUT_PORTP(BgL_port1938z00_1022))
																{	/* Eval/eval.scm 353 */
																	BgL_portz00_2422 = BgL_port1938z00_1022;
																}
															else
																{
																	obj_t BgL_auxz00_4117;

																	BgL_auxz00_4117 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3193z00zz__evalz00,
																		BINT(((long) 13873)),
																		BGl_string3224z00zz__evalz00,
																		BGl_string3225z00zz__evalz00,
																		BgL_port1938z00_1022);
																	FAILURE(BgL_auxz00_4117, BFALSE, BFALSE);
																}
															bgl_display_string(BGl_string3226z00zz__evalz00,
																BgL_portz00_2422);
														}
														bgl_display_obj(BgL_expz00_1018,
															BgL_port1938z00_1022);
														bgl_display_char(((unsigned char) '\n'),
															BgL_port1938z00_1022);
											}}
											PROCEDURE_ENTRY(BGl_za2replzd2printerza2zd2zz__evalz00)
												(BGl_za2replzd2printerza2zd2zz__evalz00, BgL_vz00_1020,
												BGl_za2transcriptza2z00zz__evalz00, BEOA);
											{	/* Eval/eval.scm 355 */
												obj_t BgL_portz00_2424;

												{	/* Eval/eval.scm 355 */
													obj_t BgL_aux3021z00_3387;

													BgL_aux3021z00_3387 =
														BGl_za2transcriptza2z00zz__evalz00;
													if (OUTPUT_PORTP(BgL_aux3021z00_3387))
														{	/* Eval/eval.scm 355 */
															BgL_portz00_2424 = BgL_aux3021z00_3387;
														}
													else
														{
															obj_t BgL_auxz00_4128;

															BgL_auxz00_4128 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 13958)),
																BGl_string3224z00zz__evalz00,
																BGl_string3225z00zz__evalz00,
																BgL_aux3021z00_3387);
															FAILURE(BgL_auxz00_4128, BFALSE, BFALSE);
												}}
												BgL_res1865z00_1017 =
													bgl_display_char(((unsigned char) '\n'),
													BgL_portz00_2424);
								}}}
								POP_EXIT();
								return BgL_res1865z00_1017;
							}
						}
					}
				}
		}
	}



/* <exit:2101> */
	obj_t BGl_zc3exitza32101ze3z83zz__evalz00(obj_t BgL_readz00_3314)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 314 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1858z00_999;

			if (SET_EXIT(BgL_an_exit1858z00_999))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1858z00_999 = (void *) jmpbuf;
					{	/* Eval/eval.scm 314 */

						PUSH_EXIT(BgL_an_exit1858z00_999, ((long) 1));
						{	/* Eval/eval.scm 314 */
							obj_t BgL_an_exitd1859z00_1000;

							BgL_an_exitd1859z00_1000 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 356 */
								obj_t BgL_res1861z00_1003;

								{	/* Eval/eval.scm 317 */
									obj_t BgL_intrhdlz00_3189;

									BgL_intrhdlz00_3189 =
										make_fx_procedure(BGl_intrhdlz00zz__evalz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_intrhdlz00_3189,
										(int) (((long) 0)), BgL_an_exitd1859z00_1000);
									BGl_signalz00zz__osz00(SIGINT, BgL_intrhdlz00_3189);
								}
								{	/* Eval/eval.scm 325 */
									obj_t BgL_arg2104z00_1009;

									{	/* Eval/eval.scm 325 */
										obj_t BgL_res2939z00_2400;

										{	/* Eval/eval.scm 325 */
											obj_t BgL_auxz00_4144;

											BgL_auxz00_4144 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2939z00_2400 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4144);
										}
										BgL_arg2104z00_1009 = BgL_res2939z00_2400;
									}
									bgl_display_char(((unsigned char) '\n'), BgL_arg2104z00_1009);
								}
								{

								BgL_zc3anonymousza32105ze3z83_1011:
									PROCEDURE_ENTRY(BGl_za2promptza2z00zz__evalz00)
										(BGl_za2promptza2z00zz__evalz00,
										BGl_za2replzd2numza2zd2zz__evalz00, BEOA);
									BGl_zc3exitza32106ze3z83zz__evalz00(BgL_readz00_3314);
									goto BgL_zc3anonymousza32105ze3z83_1011;
								}
								POP_EXIT();
								return BgL_res1861z00_1003;
							}
						}
					}
				}
		}
	}



/* <exit:2099> */
	obj_t BGl_zc3exitza32099ze3z83zz__evalz00(obj_t BgL_readz00_3315)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 358 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1856z00_994;

			if (SET_EXIT(BgL_an_exit1856z00_994))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1856z00_994 = (void *) jmpbuf;
					{	/* Eval/eval.scm 358 */

						PUSH_EXIT(BgL_an_exit1856z00_994, ((long) 0));
						{	/* Eval/eval.scm 314 */
							obj_t BgL_val1857z00_995;

							{

							BgL_zc3anonymousza32100ze3z83_997:
								BGl_zc3exitza32101ze3z83zz__evalz00(BgL_readz00_3315);
								goto BgL_zc3anonymousza32100ze3z83_997;
							}
							POP_EXIT();
							return BgL_val1857z00_995;
						}
					}
				}
		}
	}



/* <anonymous:2094> */
	obj_t BGl_zc3anonymousza32094ze3z83zz__evalz00(obj_t BgL_envz00_3190,
		obj_t BgL_nz00_3191)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 360 */
			{
				obj_t BgL_nz00_986;

				BgL_nz00_986 = BgL_nz00_3191;
				{	/* Eval/eval.scm 360 */
					obj_t BgL_list2095z00_2426;

					BgL_list2095z00_2426 = MAKE_PAIR(BINT(((long) 0)), BNIL);
					return BGl_exitz00zz__errorz00(BgL_list2095z00_2426);
				}
			}
		}
	}



/* <anonymous:2114> */
	obj_t BGl_zc3anonymousza32114ze3z83zz__evalz00(obj_t BgL_envz00_3192)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 351 */
			{	/* Eval/eval.scm 351 */
				obj_t BgL_expz00_3193;

				BgL_expz00_3193 = PROCEDURE_REF(BgL_envz00_3192, (int) (((long) 0)));
				{

					{	/* Eval/eval.scm 351 */
						obj_t BgL_envz00_2414;

						{	/* Eval/eval.scm 351 */
							obj_t BgL_mz00_2415;

							BgL_mz00_2415 = BGl_evalzd2modulezd2zz__evmodulez00();
							if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2415))
								{	/* Eval/eval.scm 351 */
									BgL_envz00_2414 = BgL_mz00_2415;
								}
							else
								{	/* Eval/eval.scm 351 */
									BgL_envz00_2414 = BGl_symbol3191z00zz__evalz00;
								}
						}
						{	/* Eval/eval.scm 351 */

							{	/* Eval/eval.scm 351 */
								obj_t BgL_auxz00_4165;

								{	/* Eval/eval.scm 351 */
									obj_t BgL_aux3023z00_3389;

									BgL_aux3023z00_3389 = BGl_defaultzd2evaluatezd2zz__evalz00;
									if (PROCEDUREP(BgL_aux3023z00_3389))
										{	/* Eval/eval.scm 351 */
											BgL_auxz00_4165 = BgL_aux3023z00_3389;
										}
									else
										{
											obj_t BgL_auxz00_4168;

											BgL_auxz00_4168 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3193z00zz__evalz00, BINT(((long) 13796)),
												BGl_string3227z00zz__evalz00,
												BGl_string3195z00zz__evalz00, BgL_aux3023z00_3389);
											FAILURE(BgL_auxz00_4168, BFALSE, BFALSE);
								}}
								return
									BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_3193,
									BgL_envz00_2414, BGl_expandzd2envzd2zz__expandz00,
									BgL_auxz00_4165);
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:2112> */
	obj_t BGl_zc3anonymousza32112ze3z83zz__evalz00(obj_t BgL_envz00_3194,
		obj_t BgL_ez00_3196)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 344 */
			{	/* Eval/eval.scm 345 */
				obj_t BgL_an_exitd1863z00_3195;

				BgL_an_exitd1863z00_3195 =
					PROCEDURE_REF(BgL_envz00_3194, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1026;

					BgL_ez00_1026 = BgL_ez00_3196;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1026,
							BGl_z62errorz62zz__objectz00))
						{	/* Eval/eval.scm 345 */
							BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1026);
							{	/* Eval/eval.scm 345 */
								int BgL_auxz00_4178;

								BgL_auxz00_4178 = (int) (((long) 0));
								BGL_SIGSETMASK(BgL_auxz00_4178);
							}
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1863z00_3195,
								BUNSPEC);
						}
					else
						{	/* Eval/eval.scm 345 */
							return BGl_raisez00zz__errorz00(BgL_ez00_1026);
						}
				}
			}
		}
	}



/* read */
	obj_t BGl_readz00zz__evalz00(obj_t BgL_envz00_3197)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 310 */
			{

				{	/* Eval/eval.scm 311 */
					obj_t BgL_fun2124z00_2429;

					BgL_fun2124z00_2429 = BGl_getzd2evalzd2readerz00zz__evalz00();
					{	/* Eval/eval.scm 311 */
						obj_t BgL_arg2123z00_2430;

						{	/* Eval/eval.scm 311 */
							obj_t BgL_res2942z00_2432;

							{	/* Eval/eval.scm 311 */
								obj_t BgL_auxz00_4184;

								BgL_auxz00_4184 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2942z00_2432 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_4184);
							}
							BgL_arg2123z00_2430 = BgL_res2942z00_2432;
						}
						{	/* Eval/eval.scm 311 */
							obj_t BgL_auxz00_4188;

							{	/* Eval/eval.scm 311 */
								bool_t BgL_test3026z00_3392;

								BgL_test3026z00_3392 = PROCEDUREP(BgL_fun2124z00_2429);
								if (BgL_test3026z00_3392)
									{	/* Eval/eval.scm 311 */
										BgL_auxz00_4188 = BgL_fun2124z00_2429;
									}
								else
									{
										obj_t BgL_auxz00_4191;

										BgL_auxz00_4191 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3193z00zz__evalz00, BINT(((long) 12632)),
											BGl_string3228z00zz__evalz00,
											BGl_string3195z00zz__evalz00, BgL_fun2124z00_2429);
										FAILURE(BgL_auxz00_4191, BFALSE, BFALSE);
							}}
							return
								PROCEDURE_ENTRY(BgL_auxz00_4188) (BgL_fun2124z00_2429,
								BgL_arg2123z00_2430, BEOA);
						}
					}
				}
			}
		}
	}



/* <anonymous:2116> */
	obj_t BGl_zc3anonymousza32116ze3z83zz__evalz00(obj_t BgL_envz00_3198,
		obj_t BgL_ez00_3200)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 330 */
			{	/* Eval/eval.scm 331 */
				obj_t BgL_an_exitd1863z00_3199;

				BgL_an_exitd1863z00_3199 =
					PROCEDURE_REF(BgL_envz00_3198, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1035;

					BgL_ez00_1035 = BgL_ez00_3200;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1035,
							BGl_z62errorz62zz__objectz00))
						{	/* Eval/eval.scm 331 */
							BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00();
							BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1035);
							{	/* Eval/eval.scm 335 */
								bool_t BgL_testz00_4201;

								{	/* Eval/eval.scm 335 */
									obj_t BgL_arg2121z00_1040;

									{
										BgL_z62errorz62_bglt BgL_auxz00_4202;

										BgL_auxz00_4202 = (BgL_z62errorz62_bglt) (BgL_ez00_1035);
										BgL_arg2121z00_1040 =
											(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_4202))->
											BgL_objz00);
									}
									BgL_testz00_4201 = EOF_OBJECTP(BgL_arg2121z00_1040);
								}
								if (BgL_testz00_4201)
									{	/* Eval/eval.scm 336 */
										obj_t BgL_arg2119z00_1039;

										{	/* Eval/eval.scm 336 */
											obj_t BgL_res2940z00_2406;

											{	/* Eval/eval.scm 336 */
												obj_t BgL_auxz00_4206;

												BgL_auxz00_4206 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res2940z00_2406 =
													BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_4206);
											}
											BgL_arg2119z00_1039 = BgL_res2940z00_2406;
										}
										reset_eof(BgL_arg2119z00_1039);
									}
								else
									{	/* Eval/eval.scm 335 */
										((bool_t) 0);
									}
							}
							{	/* Eval/eval.scm 337 */
								int BgL_auxz00_4210;

								BgL_auxz00_4210 = (int) (((long) 0));
								BGL_SIGSETMASK(BgL_auxz00_4210);
							}
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1863z00_3199,
								BUNSPEC);
						}
					else
						{	/* Eval/eval.scm 331 */
							return BGl_raisez00zz__errorz00(BgL_ez00_1035);
						}
				}
			}
		}
	}



/* intrhdl */
	obj_t BGl_intrhdlz00zz__evalz00(obj_t BgL_envz00_3201, obj_t BgL_nz00_3203)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 316 */
			{	/* Eval/eval.scm 317 */
				obj_t BgL_an_exitd1859z00_3202;

				BgL_an_exitd1859z00_3202 =
					PROCEDURE_REF(BgL_envz00_3201, (int) (((long) 0)));
				{
					obj_t BgL_nz00_1005;

					BgL_nz00_1005 = BgL_nz00_3203;
					{	/* Eval/eval.scm 317 */
						int BgL_auxz00_4217;

						{	/* Eval/eval.scm 317 */
							obj_t BgL_auxz00_4218;

							if (INTEGERP(BgL_nz00_1005))
								{	/* Eval/eval.scm 317 */
									BgL_auxz00_4218 = BgL_nz00_1005;
								}
							else
								{
									obj_t BgL_auxz00_4221;

									BgL_auxz00_4221 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3193z00zz__evalz00, BINT(((long) 12849)),
										BGl_string3229z00zz__evalz00, BGl_string3230z00zz__evalz00,
										BgL_nz00_1005);
									FAILURE(BgL_auxz00_4221, BFALSE, BFALSE);
								}
							BgL_auxz00_4217 = CINT(BgL_auxz00_4218);
						}
						BGl_notifyzd2interruptzd2zz__errorz00(BgL_auxz00_4217);
					}
					{	/* Eval/eval.scm 319 */
						obj_t BgL_arg2103z00_2395;

						{	/* Eval/eval.scm 319 */
							obj_t BgL_res2938z00_2397;

							{	/* Eval/eval.scm 319 */
								obj_t BgL_auxz00_4227;

								BgL_auxz00_4227 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2938z00_2397 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_4227);
							}
							BgL_arg2103z00_2395 = BgL_res2938z00_2397;
						}
						reset_console(BgL_arg2103z00_2395);
					}
					{	/* Eval/eval.scm 319 */
						int BgL_auxz00_4231;

						BgL_auxz00_4231 = (int) (((long) 0));
						BGL_SIGSETMASK(BgL_auxz00_4231);
					}
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1859z00_3202,
						BUNSPEC);
				}
			}
		}
	}



/* default-repl-printer */
	obj_t BGl_defaultzd2replzd2printerz00zz__evalz00(obj_t BgL_expz00_27,
		obj_t BgL_portz00_28)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 365 */
			{	/* Eval/eval.scm 366 */
				obj_t BgL_auxz00_4235;

				{	/* Eval/eval.scm 366 */
					obj_t BgL_list2125z00_2433;

					BgL_list2125z00_2433 = MAKE_PAIR(BgL_portz00_28, BNIL);
					BgL_auxz00_4235 =
						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_expz00_27,
						BgL_list2125z00_2433);
				}
				return
					apply(BGl_displayzd2circlezd2envz00zz__pp_circlez00, BgL_auxz00_4235);
			}
		}
	}



/* _default-repl-printer */
	obj_t BGl__defaultzd2replzd2printerz00zz__evalz00(obj_t BgL_envz00_3142,
		obj_t BgL_expz00_3143, obj_t BgL_portz00_3144)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 365 */
			return
				BGl_defaultzd2replzd2printerz00zz__evalz00(BgL_expz00_3143,
				BgL_portz00_3144);
		}
	}



/* set-repl-printer! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2replzd2printerz12z12zz__evalz00(obj_t
		BgL_dispz00_29)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 376 */
			if (PROCEDURE_CORRECT_ARITYP(BgL_dispz00_29, (int) (((long) -2))))
				{	/* Eval/eval.scm 377 */
					obj_t BgL_oldz00_2435;

					BgL_oldz00_2435 = BGl_za2replzd2printerza2zd2zz__evalz00;
					BGl_za2replzd2printerza2zd2zz__evalz00 = BgL_dispz00_29;
					return BgL_oldz00_2435;
				}
			else
				{	/* Eval/eval.scm 377 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3231z00zz__evalz00,
						BGl_string3233z00zz__evalz00, BgL_dispz00_29);
				}
		}
	}



/* _set-repl-printer! */
	obj_t BGl__setzd2replzd2printerz12z12zz__evalz00(obj_t BgL_envz00_3207,
		obj_t BgL_dispz00_3208)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 376 */
			{	/* Eval/eval.scm 377 */
				obj_t BgL_auxz00_4244;

				if (PROCEDUREP(BgL_dispz00_3208))
					{	/* Eval/eval.scm 377 */
						BgL_auxz00_4244 = BgL_dispz00_3208;
					}
				else
					{
						obj_t BgL_auxz00_4247;

						BgL_auxz00_4247 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
							BINT(((long) 14952)), BGl_string3234z00zz__evalz00,
							BGl_string3195z00zz__evalz00, BgL_dispz00_3208);
						FAILURE(BgL_auxz00_4247, BFALSE, BFALSE);
					}
				return BGl_setzd2replzd2printerz12z12zz__evalz00(BgL_auxz00_4244);
			}
		}
	}



/* native-repl-printer */
	BGL_EXPORTED_DEF obj_t BGl_nativezd2replzd2printerz00zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 386 */
			return BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00;
		}
	}



/* _native-repl-printer */
	obj_t BGl__nativezd2replzd2printerz00zz__evalz00(obj_t BgL_envz00_3209)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 386 */
			return BGl_defaultzd2replzd2printerzd2envzd2zz__evalz00;
		}
	}



/* c-debug-repl */
	BGL_EXPORTED_DEF obj_t bgl_debug_repl(obj_t BgL_valz00_30)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 397 */
			BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00 = BgL_valz00_30;
			{

				{	/* Eval/eval.scm 399 */
					bool_t BgL_auxz00_4252;

				BgL_zc3anonymousza32127ze3z83_1052:
					{	/* Eval/eval.scm 400 */
						obj_t BgL_arg2131z00_1054;

						{	/* Eval/eval.scm 400 */
							obj_t BgL_res2943z00_2437;

							{	/* Eval/eval.scm 400 */
								obj_t BgL_auxz00_4253;

								BgL_auxz00_4253 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2943z00_2437 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4253);
							}
							BgL_arg2131z00_1054 = BgL_res2943z00_2437;
						}
						bgl_display_string(BGl_string3235z00zz__evalz00,
							BgL_arg2131z00_1054);
					}
					{	/* Eval/eval.scm 401 */
						obj_t BgL_expz00_1055;

						{	/* Eval/eval.scm 401 */
							obj_t BgL_fun2135z00_1061;

							BgL_fun2135z00_1061 = BGl_getzd2evalzd2readerz00zz__evalz00();
							{	/* Eval/eval.scm 401 */
								obj_t BgL_arg2134z00_1062;

								{	/* Eval/eval.scm 401 */
									obj_t BgL_res2944z00_2441;

									{	/* Eval/eval.scm 401 */
										obj_t BgL_auxz00_4258;

										BgL_auxz00_4258 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2944z00_2441 =
											BGL_ENV_CURRENT_INPUT_PORT(BgL_auxz00_4258);
									}
									BgL_arg2134z00_1062 = BgL_res2944z00_2441;
								}
								{	/* Eval/eval.scm 401 */
									obj_t BgL_auxz00_4262;

									{	/* Eval/eval.scm 401 */
										bool_t BgL_test3032z00_3398;

										BgL_test3032z00_3398 = PROCEDUREP(BgL_fun2135z00_1061);
										if (BgL_test3032z00_3398)
											{	/* Eval/eval.scm 401 */
												BgL_auxz00_4262 = BgL_fun2135z00_1061;
											}
										else
											{
												obj_t BgL_auxz00_4265;

												BgL_auxz00_4265 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3193z00zz__evalz00, BINT(((long) 16022)),
													BGl_string3236z00zz__evalz00,
													BGl_string3195z00zz__evalz00, BgL_fun2135z00_1061);
												FAILURE(BgL_auxz00_4265, BFALSE, BFALSE);
									}}
									BgL_expz00_1055 =
										PROCEDURE_ENTRY(BgL_auxz00_4262) (BgL_fun2135z00_1061,
										BgL_arg2134z00_1062, BEOA);
						}}}
						if (EOF_OBJECTP(BgL_expz00_1055))
							{	/* Eval/eval.scm 402 */
								BgL_auxz00_4252 = ((bool_t) 0);
							}
						else
							{	/* Eval/eval.scm 402 */
								{	/* Eval/eval.scm 403 */
									obj_t BgL_port1939z00_1057;

									{	/* Eval/eval.scm 403 */
										obj_t BgL_res2945z00_2444;

										{	/* Eval/eval.scm 403 */
											obj_t BgL_auxz00_4271;

											BgL_auxz00_4271 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res2945z00_2444 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_4271);
										}
										BgL_port1939z00_1057 = BgL_res2945z00_2444;
									}
									{	/* Eval/eval.scm 403 */
										obj_t BgL_arg2133z00_1058;

										{	/* Eval/eval.scm 80 */
											obj_t BgL_envz00_1060;

											{	/* Eval/eval.scm 80 */
												obj_t BgL_mz00_2445;

												BgL_mz00_2445 = BGl_evalzd2modulezd2zz__evmodulez00();
												if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2445))
													{	/* Eval/eval.scm 80 */
														BgL_envz00_1060 = BgL_mz00_2445;
													}
												else
													{	/* Eval/eval.scm 80 */
														BgL_envz00_1060 = BGl_symbol3191z00zz__evalz00;
													}
											}
											{	/* Eval/eval.scm 80 */

												{	/* Eval/eval.scm 80 */
													obj_t BgL_auxz00_4277;

													{	/* Eval/eval.scm 80 */
														obj_t BgL_aux3033z00_3399;

														BgL_aux3033z00_3399 =
															BGl_defaultzd2evaluatezd2zz__evalz00;
														if (PROCEDUREP(BgL_aux3033z00_3399))
															{	/* Eval/eval.scm 80 */
																BgL_auxz00_4277 = BgL_aux3033z00_3399;
															}
														else
															{
																obj_t BgL_auxz00_4280;

																BgL_auxz00_4280 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3193z00zz__evalz00,
																	BINT(((long) 2496)),
																	BGl_string3236z00zz__evalz00,
																	BGl_string3195z00zz__evalz00,
																	BgL_aux3033z00_3399);
																FAILURE(BgL_auxz00_4280, BFALSE, BFALSE);
													}}
													BgL_arg2133z00_1058 =
														BGl_evalzf2expanderzf2zz__evalz00(BgL_expz00_1055,
														BgL_envz00_1060, BGl_expandzd2envzd2zz__expandz00,
														BgL_auxz00_4277);
										}}}
										bgl_display_obj(BgL_arg2133z00_1058, BgL_port1939z00_1057);
									}
									bgl_display_char(((unsigned char) '\n'),
										BgL_port1939z00_1057);
								}
								goto BgL_zc3anonymousza32127ze3z83_1052;
							}
					}
					return BBOOL(BgL_auxz00_4252);
				}
			}
		}
	}



/* _c-debug-repl */
	obj_t BGl__czd2debugzd2replz00zz__evalz00(obj_t BgL_envz00_3210,
		obj_t BgL_valz00_3211)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 397 */
			return bgl_debug_repl(BgL_valz00_3211);
		}
	}



/* quit */
	BGL_EXPORTED_DEF obj_t BGl_quitz00zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 409 */
			return
				PROCEDURE_ENTRY(BGl_za2replzd2quitza2zd2zz__evalz00)
				(BGl_za2replzd2quitza2zd2zz__evalz00, BINT(((long) 0)), BEOA);
		}
	}



/* _quit */
	obj_t BGl__quitz00zz__evalz00(obj_t BgL_envz00_3212)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 409 */
			return BGl_quitz00zz__evalz00();
		}
	}



/* find-file */
	obj_t BGl_findzd2filezd2zz__evalz00(obj_t BgL_namez00_31)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 420 */
			if (STRINGP(BgL_namez00_31))
				{	/* Eval/eval.scm 421 */
					if (fexists(BSTRING_TO_STRING(BgL_namez00_31)))
						{	/* Eval/eval.scm 423 */
							return BgL_namez00_31;
						}
					else
						{
							obj_t BgL_pathz00_1067;

							BgL_pathz00_1067 = BGl_za2loadzd2pathza2zd2zz__evalz00;
						BgL_zc3anonymousza32138ze3z83_1068:
							if (NULLP(BgL_pathz00_1067))
								{	/* Eval/eval.scm 426 */
									return BgL_namez00_31;
								}
							else
								{	/* Eval/eval.scm 428 */
									obj_t BgL_fz00_1070;

									{	/* Eval/eval.scm 428 */
										obj_t BgL_arg2144z00_1073;

										{	/* Eval/eval.scm 428 */
											obj_t BgL_pairz00_2453;

											if (PAIRP(BgL_pathz00_1067))
												{	/* Eval/eval.scm 428 */
													BgL_pairz00_2453 = BgL_pathz00_1067;
												}
											else
												{
													obj_t BgL_auxz00_4302;

													BgL_auxz00_4302 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3193z00zz__evalz00, BINT(((long) 17108)),
														BGl_string3236z00zz__evalz00,
														BGl_string3198z00zz__evalz00, BgL_pathz00_1067);
													FAILURE(BgL_auxz00_4302, BFALSE, BFALSE);
												}
											BgL_arg2144z00_1073 = CAR(BgL_pairz00_2453);
										}
										{	/* Eval/eval.scm 428 */
											obj_t BgL_auxz00_4307;

											if (STRINGP(BgL_arg2144z00_1073))
												{	/* Eval/eval.scm 428 */
													BgL_auxz00_4307 = BgL_arg2144z00_1073;
												}
											else
												{
													obj_t BgL_auxz00_4310;

													BgL_auxz00_4310 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string3193z00zz__evalz00, BINT(((long) 17112)),
														BGl_string3236z00zz__evalz00,
														BGl_string3204z00zz__evalz00, BgL_arg2144z00_1073);
													FAILURE(BgL_auxz00_4310, BFALSE, BFALSE);
												}
											BgL_fz00_1070 =
												BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_4307,
												BgL_namez00_31);
									}}
									if (fexists(BSTRING_TO_STRING(BgL_fz00_1070)))
										{	/* Eval/eval.scm 429 */
											return BgL_fz00_1070;
										}
									else
										{
											obj_t BgL_pathz00_4318;

											BgL_pathz00_4318 = CDR(BgL_pathz00_1067);
											BgL_pathz00_1067 = BgL_pathz00_4318;
											goto BgL_zc3anonymousza32138ze3z83_1068;
										}
								}
						}
				}
			else
				{	/* Eval/eval.scm 421 */
					return
						BGl_errorz00zz__errorz00(BGl_symbol3237z00zz__evalz00,
						BGl_string3239z00zz__evalz00, BgL_namez00_31);
				}
		}
	}



/* _load */
	obj_t BGl__loadz00zz__evalz00(obj_t BgL_envz00_35, obj_t BgL_optz00_34)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 441 */
			{	/* Eval/eval.scm 441 */
				obj_t BgL_zc3stringze3z20_1075;

				BgL_zc3stringze3z20_1075 =
					VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
				{	/* Eval/eval.scm 441 */
					int BgL_aux1974z00_1077;

					BgL_aux1974z00_1077 = VECTOR_LENGTH(BgL_optz00_34);
					switch ((long) (BgL_aux1974z00_1077))
						{
						case ((long) 1):

							{	/* Eval/eval.scm 441 */
								obj_t BgL_envz00_1079;

								{	/* Eval/eval.scm 441 */
									obj_t BgL_mz00_2456;

									BgL_mz00_2456 = BGl_evalzd2modulezd2zz__evmodulez00();
									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2456))
										{	/* Eval/eval.scm 441 */
											BgL_envz00_1079 = BgL_mz00_2456;
										}
									else
										{	/* Eval/eval.scm 441 */
											BgL_envz00_1079 = BGl_symbol3191z00zz__evalz00;
										}
								}
								{	/* Eval/eval.scm 441 */

									{	/* Eval/eval.scm 441 */
										obj_t BgL_arg2146z00_1080;

										BgL_arg2146z00_1080 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
										return
											BGl_loadvz00zz__evalz00(BgL_arg2146z00_1080,
											BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_1079);
									}
								}
							}
							break;
						case ((long) 2):

							{	/* Eval/eval.scm 441 */
								obj_t BgL_envz00_1081;

								BgL_envz00_1081 = VECTOR_REF(BgL_optz00_34, (int) (((long) 1)));
								{	/* Eval/eval.scm 441 */

									{	/* Eval/eval.scm 441 */
										obj_t BgL_arg2147z00_1082;

										BgL_arg2147z00_1082 =
											VECTOR_REF(BgL_optz00_34, (int) (((long) 0)));
										return
											BGl_loadvz00zz__evalz00(BgL_arg2147z00_1082,
											BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_1081);
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



/* load */
	BGL_EXPORTED_DEF obj_t BGl_loadz00zz__evalz00(obj_t BgL_filezd2namezd2_32,
		obj_t BgL_envz00_33)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 441 */
			return
				BGl_loadvz00zz__evalz00(BgL_filezd2namezd2_32,
				BGl_za2loadzd2verboseza2zd2zz__evalz00, BgL_envz00_33);
		}
	}



/* _loadq */
	obj_t BGl__loadqz00zz__evalz00(obj_t BgL_envz00_39, obj_t BgL_optz00_38)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 444 */
			{	/* Eval/eval.scm 444 */
				obj_t BgL_zc3stringze3z20_1083;

				BgL_zc3stringze3z20_1083 =
					VECTOR_REF(BgL_optz00_38, (int) (((long) 0)));
				{	/* Eval/eval.scm 444 */
					int BgL_aux1976z00_1085;

					BgL_aux1976z00_1085 = VECTOR_LENGTH(BgL_optz00_38);
					switch ((long) (BgL_aux1976z00_1085))
						{
						case ((long) 1):

							{	/* Eval/eval.scm 444 */
								obj_t BgL_envz00_1087;

								{	/* Eval/eval.scm 444 */
									obj_t BgL_mz00_2462;

									BgL_mz00_2462 = BGl_evalzd2modulezd2zz__evmodulez00();
									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2462))
										{	/* Eval/eval.scm 444 */
											BgL_envz00_1087 = BgL_mz00_2462;
										}
									else
										{	/* Eval/eval.scm 444 */
											BgL_envz00_1087 = BGl_symbol3191z00zz__evalz00;
										}
								}
								{	/* Eval/eval.scm 444 */

									return
										BGl_loadvz00zz__evalz00(VECTOR_REF(BgL_optz00_38,
											(int) (((long) 0))), BFALSE, BgL_envz00_1087);
							}} break;
						case ((long) 2):

							{	/* Eval/eval.scm 444 */
								obj_t BgL_envz00_1089;

								BgL_envz00_1089 = VECTOR_REF(BgL_optz00_38, (int) (((long) 1)));
								{	/* Eval/eval.scm 444 */

									return
										BGl_loadvz00zz__evalz00(VECTOR_REF(BgL_optz00_38,
											(int) (((long) 0))), BFALSE, BgL_envz00_1089);
							}} break;
						default:
							return BUNSPEC;
						}
				}
			}
		}
	}



/* loadq */
	BGL_EXPORTED_DEF obj_t BGl_loadqz00zz__evalz00(obj_t BgL_filezd2namezd2_36,
		obj_t BgL_envz00_37)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 444 */
			return
				BGl_loadvz00zz__evalz00(BgL_filezd2namezd2_36, BFALSE, BgL_envz00_37);
		}
	}



/* loadv */
	obj_t BGl_loadvz00zz__evalz00(obj_t BgL_filezd2namezd2_40,
		obj_t BgL_vzf3zf3_41, obj_t BgL_envz00_42)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 447 */
			{	/* Eval/eval.scm 448 */
				obj_t BgL_pathz00_1091;

				BgL_pathz00_1091 = BGl_findzd2filezd2zz__evalz00(BgL_filezd2namezd2_40);
				{	/* Eval/eval.scm 448 */
					obj_t BgL_portz00_1092;

					{	/* Ieee/port.scm 375 */

						{	/* Ieee/port.scm 375 */
							obj_t BgL_auxz00_4356;

							if (STRINGP(BgL_pathz00_1091))
								{	/* Ieee/port.scm 375 */
									BgL_auxz00_4356 = BgL_pathz00_1091;
								}
							else
								{
									obj_t BgL_auxz00_4359;

									BgL_auxz00_4359 =
										BGl_typezd2errorzd2zz__errorz00
										(BGl_string3240z00zz__evalz00, BINT(((long) 16442)),
										BGl_string3241z00zz__evalz00, BGl_string3204z00zz__evalz00,
										BgL_pathz00_1091);
									FAILURE(BgL_auxz00_4359, BFALSE, BFALSE);
								}
							BgL_portz00_1092 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_auxz00_4356, BTRUE);
					}}
					{	/* Eval/eval.scm 449 */
						obj_t BgL_readz00_1093;

						BgL_readz00_1093 = BGl_getzd2evalzd2readerz00zz__evalz00();
						{	/* Eval/eval.scm 450 */
							obj_t BgL_modz00_1094;

							BgL_modz00_1094 = BGL_MODULE();
							{	/* Eval/eval.scm 451 */

								if (INPUT_PORTP(BgL_portz00_1092))
									{	/* Eval/eval.scm 453 */
										obj_t BgL_val1868z00_1096;

										BgL_val1868z00_1096 =
											BGl_zc3exitza32155ze3z83zz__evalz00(BgL_pathz00_1091,
											BgL_vzf3zf3_41, BgL_envz00_42, BgL_portz00_1092,
											BgL_readz00_1093);
										BGL_MODULE_SET(BgL_modz00_1094);
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1868z00_1096)))
											{	/* Eval/eval.scm 480 */
												obj_t BgL_arg2153z00_1098;

												obj_t BgL_arg2154z00_1099;

												{	/* Eval/eval.scm 480 */
													obj_t BgL_pairz00_2510;

													if (PAIRP(BgL_val1868z00_1096))
														{	/* Eval/eval.scm 480 */
															BgL_pairz00_2510 = BgL_val1868z00_1096;
														}
													else
														{
															obj_t BgL_auxz00_4375;

															BgL_auxz00_4375 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 18803)),
																BGl_string3241z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1868z00_1096);
															FAILURE(BgL_auxz00_4375, BFALSE, BFALSE);
														}
													BgL_arg2153z00_1098 = CAR(BgL_pairz00_2510);
												}
												BgL_arg2154z00_1099 = CDR(BgL_val1868z00_1096);
												return
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2153z00_1098, BgL_arg2154z00_1099);
											}
										else
											{	/* Eval/eval.scm 480 */
												return BgL_val1868z00_1096;
											}
									}
								else
									{	/* Eval/eval.scm 452 */
										return
											BGl_errorz00zz__errorz00(BGl_symbol3242z00zz__evalz00,
											BGl_string3244z00zz__evalz00, BgL_filezd2namezd2_40);
									}
							}
						}
					}
				}
			}
		}
	}



/* <exit:2155> */
	obj_t BGl_zc3exitza32155ze3z83zz__evalz00(obj_t BgL_pathz00_3312,
		obj_t BgL_vzf3zf3_3311, obj_t BgL_envz00_3310, obj_t BgL_portz00_3309,
		obj_t BgL_readz00_3308)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 480 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1869z00_1101;

			if (SET_EXIT(BgL_an_exit1869z00_1101))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1869z00_1101 = (void *) jmpbuf;
					{	/* Eval/eval.scm 480 */

						PUSH_EXIT(BgL_an_exit1869z00_1101, ((long) 0));
						{	/* Eval/eval.scm 454 */
							obj_t BgL_val1870z00_1102;

							{	/* Eval/eval.scm 454 */
								obj_t BgL_sexpz00_1103;

								{	/* Eval/eval.scm 454 */
									obj_t BgL_auxz00_4387;

									{	/* Eval/eval.scm 454 */
										bool_t BgL_test3048z00_3414;

										BgL_test3048z00_3414 = PROCEDUREP(BgL_readz00_3308);
										if (BgL_test3048z00_3414)
											{	/* Eval/eval.scm 454 */
												BgL_auxz00_4387 = BgL_readz00_3308;
											}
										else
											{
												obj_t BgL_auxz00_4390;

												BgL_auxz00_4390 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3193z00zz__evalz00, BINT(((long) 18084)),
													BGl_string3245z00zz__evalz00,
													BGl_string3195z00zz__evalz00, BgL_readz00_3308);
												FAILURE(BgL_auxz00_4390, BFALSE, BFALSE);
									}}
									BgL_sexpz00_1103 =
										PROCEDURE_ENTRY(BgL_auxz00_4387) (BgL_readz00_3308,
										BgL_portz00_3309, BEOA);
								}
								{	/* Eval/eval.scm 454 */
									obj_t BgL_mainsymz00_1104;

									{	/* Eval/eval.scm 455 */
										bool_t BgL_testz00_4394;

										if (PAIRP(BgL_sexpz00_1103))
											{	/* Eval/eval.scm 455 */
												BgL_testz00_4394 =
													(CAR(BgL_sexpz00_1103) ==
													BGl_symbol3246z00zz__evalz00);
											}
										else
											{	/* Eval/eval.scm 455 */
												BgL_testz00_4394 = ((bool_t) 0);
											}
										if (BgL_testz00_4394)
											{	/* Eval/eval.scm 456 */
												obj_t BgL_clausez00_1122;

												{	/* Eval/eval.scm 456 */
													obj_t BgL_auxz00_4399;

													{	/* Eval/eval.scm 456 */
														obj_t BgL_pairz00_2474;

														{	/* Eval/eval.scm 456 */
															obj_t BgL_aux3049z00_3415;

															BgL_aux3049z00_3415 = CDR(BgL_sexpz00_1103);
															if (PAIRP(BgL_aux3049z00_3415))
																{	/* Eval/eval.scm 456 */
																	BgL_pairz00_2474 = BgL_aux3049z00_3415;
																}
															else
																{
																	obj_t BgL_auxz00_4403;

																	BgL_auxz00_4403 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3193z00zz__evalz00,
																		BINT(((long) 18191)),
																		BGl_string3245z00zz__evalz00,
																		BGl_string3198z00zz__evalz00,
																		BgL_aux3049z00_3415);
																	FAILURE(BgL_auxz00_4403, BFALSE, BFALSE);
														}}
														{	/* Eval/eval.scm 456 */
															obj_t BgL_aux3051z00_3417;

															BgL_aux3051z00_3417 = CDR(BgL_pairz00_2474);
															{	/* Eval/eval.scm 456 */
																bool_t BgL_testz00_4408;

																if (PAIRP(BgL_aux3051z00_3417))
																	{	/* Eval/eval.scm 456 */
																		BgL_testz00_4408 = ((bool_t) 1);
																	}
																else
																	{	/* Eval/eval.scm 456 */
																		BgL_testz00_4408 =
																			NULLP(BgL_aux3051z00_3417);
																	}
																if (BgL_testz00_4408)
																	{	/* Eval/eval.scm 456 */
																		BgL_auxz00_4399 = BgL_aux3051z00_3417;
																	}
																else
																	{
																		obj_t BgL_auxz00_4412;

																		BgL_auxz00_4412 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3193z00zz__evalz00,
																			BINT(((long) 18191)),
																			BGl_string3245z00zz__evalz00,
																			BGl_string3250z00zz__evalz00,
																			BgL_aux3051z00_3417);
																		FAILURE(BgL_auxz00_4412, BFALSE, BFALSE);
													}}}}
													BgL_clausez00_1122 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol3248z00zz__evalz00, BgL_auxz00_4399);
												}
												if (PAIRP(BgL_clausez00_1122))
													{	/* Eval/eval.scm 458 */
														bool_t BgL_testz00_4419;

														{	/* Eval/eval.scm 458 */
															bool_t BgL_testz00_4420;

															{	/* Eval/eval.scm 458 */
																obj_t BgL_auxz00_4421;

																BgL_auxz00_4421 = CDR(BgL_clausez00_1122);
																BgL_testz00_4420 = PAIRP(BgL_auxz00_4421);
															}
															if (BgL_testz00_4420)
																{	/* Eval/eval.scm 459 */
																	bool_t BgL_testz00_4424;

																	{	/* Eval/eval.scm 459 */
																		obj_t BgL_auxz00_4425;

																		{	/* Eval/eval.scm 459 */
																			obj_t BgL_pairz00_2481;

																			{	/* Eval/eval.scm 459 */
																				obj_t BgL_aux3053z00_3419;

																				BgL_aux3053z00_3419 =
																					CDR(BgL_clausez00_1122);
																				if (PAIRP(BgL_aux3053z00_3419))
																					{	/* Eval/eval.scm 459 */
																						BgL_pairz00_2481 =
																							BgL_aux3053z00_3419;
																					}
																				else
																					{
																						obj_t BgL_auxz00_4429;

																						BgL_auxz00_4429 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3193z00zz__evalz00,
																							BINT(((long) 18282)),
																							BGl_string3245z00zz__evalz00,
																							BGl_string3198z00zz__evalz00,
																							BgL_aux3053z00_3419);
																						FAILURE(BgL_auxz00_4429, BFALSE,
																							BFALSE);
																			}}
																			BgL_auxz00_4425 = CDR(BgL_pairz00_2481);
																		}
																		BgL_testz00_4424 = NULLP(BgL_auxz00_4425);
																	}
																	if (BgL_testz00_4424)
																		{	/* Eval/eval.scm 460 */
																			obj_t BgL_auxz00_4435;

																			{	/* Eval/eval.scm 460 */
																				obj_t BgL_pairz00_2486;

																				{	/* Eval/eval.scm 460 */
																					obj_t BgL_aux3055z00_3421;

																					BgL_aux3055z00_3421 =
																						CDR(BgL_clausez00_1122);
																					if (PAIRP(BgL_aux3055z00_3421))
																						{	/* Eval/eval.scm 460 */
																							BgL_pairz00_2486 =
																								BgL_aux3055z00_3421;
																						}
																					else
																						{
																							obj_t BgL_auxz00_4439;

																							BgL_auxz00_4439 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string3193z00zz__evalz00,
																								BINT(((long) 18313)),
																								BGl_string3245z00zz__evalz00,
																								BGl_string3198z00zz__evalz00,
																								BgL_aux3055z00_3421);
																							FAILURE(BgL_auxz00_4439, BFALSE,
																								BFALSE);
																				}}
																				BgL_auxz00_4435 = CAR(BgL_pairz00_2486);
																			}
																			BgL_testz00_4419 =
																				SYMBOLP(BgL_auxz00_4435);
																		}
																	else
																		{	/* Eval/eval.scm 459 */
																			BgL_testz00_4419 = ((bool_t) 0);
																		}
																}
															else
																{	/* Eval/eval.scm 458 */
																	BgL_testz00_4419 = ((bool_t) 0);
																}
														}
														if (BgL_testz00_4419)
															{	/* Eval/eval.scm 461 */
																obj_t BgL_pairz00_2491;

																{	/* Eval/eval.scm 461 */
																	obj_t BgL_aux3057z00_3423;

																	BgL_aux3057z00_3423 = CDR(BgL_clausez00_1122);
																	if (PAIRP(BgL_aux3057z00_3423))
																		{	/* Eval/eval.scm 461 */
																			BgL_pairz00_2491 = BgL_aux3057z00_3423;
																		}
																	else
																		{
																			obj_t BgL_auxz00_4448;

																			BgL_auxz00_4448 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string3193z00zz__evalz00,
																				BINT(((long) 18338)),
																				BGl_string3245z00zz__evalz00,
																				BGl_string3198z00zz__evalz00,
																				BgL_aux3057z00_3423);
																			FAILURE(BgL_auxz00_4448, BFALSE, BFALSE);
																}}
																BgL_mainsymz00_1104 = CAR(BgL_pairz00_2491);
															}
														else
															{	/* Eval/eval.scm 458 */
																BgL_mainsymz00_1104 =
																	BGl_errorz00zz__errorz00
																	(BGl_symbol3242z00zz__evalz00,
																	BGl_string3251z00zz__evalz00,
																	BgL_clausez00_1122);
															}
													}
												else
													{	/* Eval/eval.scm 457 */
														BgL_mainsymz00_1104 = BFALSE;
													}
											}
										else
											{	/* Eval/eval.scm 455 */
												BgL_mainsymz00_1104 = BFALSE;
											}
									}
									{	/* Eval/eval.scm 455 */

										{
											obj_t BgL_sexpz00_1106;

											BgL_sexpz00_1106 = BgL_sexpz00_1103;
										BgL_zc3anonymousza32156ze3z83_1107:
											BGl_evmeaningzd2resetzd2errorz12z12zz__everrorz00();
											if (EOF_OBJECTP(BgL_sexpz00_1106))
												{	/* Eval/eval.scm 469 */
													{	/* Eval/eval.scm 470 */
														obj_t BgL_portz00_2493;

														if (INPUT_PORTP(BgL_portz00_3309))
															{	/* Eval/eval.scm 470 */
																BgL_portz00_2493 = BgL_portz00_3309;
															}
														else
															{
																obj_t BgL_auxz00_4459;

																BgL_auxz00_4459 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3193z00zz__evalz00,
																	BINT(((long) 18558)),
																	BGl_string3236z00zz__evalz00,
																	BGl_string3220z00zz__evalz00,
																	BgL_portz00_3309);
																FAILURE(BgL_auxz00_4459, BFALSE, BFALSE);
															}
														bgl_close_input_port(BgL_portz00_2493);
													}
													if (SYMBOLP(BgL_mainsymz00_1104))
														{	/* Eval/eval.scm 472 */
															obj_t BgL_arg2159z00_1110;

															{	/* Eval/eval.scm 472 */
																obj_t BgL_arg2160z00_1111;

																{	/* Eval/eval.scm 472 */
																	obj_t BgL_arg2161z00_1112;

																	BgL_arg2161z00_1112 =
																		MAKE_PAIR(BGl_symbol3252z00zz__evalz00,
																		BNIL);
																	{	/* Eval/eval.scm 472 */
																		obj_t BgL_list2163z00_1114;

																		BgL_list2163z00_1114 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2160z00_1111 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2161z00_1112,
																			BgL_list2163z00_1114);
																	}
																}
																BgL_arg2159z00_1110 =
																	MAKE_PAIR(BgL_mainsymz00_1104,
																	BgL_arg2160z00_1111);
															}
															{	/* Eval/eval.scm 472 */
																obj_t BgL_evaluatez00_2497;

																if (PROCEDUREP
																	(BGl_defaultzd2evaluatezd2zz__evalz00))
																	{	/* Eval/eval.scm 472 */
																		BgL_evaluatez00_2497 =
																			BGl_defaultzd2evaluatezd2zz__evalz00;
																	}
																else
																	{	/* Eval/eval.scm 472 */
																		BgL_evaluatez00_2497 =
																			BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																	}
																BGl_evalzf2expanderzf2zz__evalz00
																	(BgL_arg2159z00_1110, BgL_envz00_3310,
																	BGl_expandz12zd2envzc0zz__expandz00,
																	BgL_evaluatez00_2497);
															}
														}
													else
														{	/* Eval/eval.scm 471 */
															BFALSE;
														}
													BgL_val1870z00_1102 = BgL_pathz00_3312;
												}
											else
												{	/* Eval/eval.scm 475 */
													obj_t BgL_vz00_1115;

													{	/* Eval/eval.scm 475 */
														obj_t BgL_evaluatez00_2502;

														if (PROCEDUREP
															(BGl_defaultzd2evaluatezd2zz__evalz00))
															{	/* Eval/eval.scm 475 */
																BgL_evaluatez00_2502 =
																	BGl_defaultzd2evaluatezd2zz__evalz00;
															}
														else
															{	/* Eval/eval.scm 475 */
																BgL_evaluatez00_2502 =
																	BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
															}
														BgL_vz00_1115 =
															BGl_evalzf2expanderzf2zz__evalz00
															(BgL_sexpz00_1106, BgL_envz00_3310,
															BGl_expandz12zd2envzc0zz__expandz00,
															BgL_evaluatez00_2502);
													}
													if (CBOOL(BgL_vzf3zf3_3311))
														{	/* Eval/eval.scm 476 */
															{	/* Pp/circle.scm 70 */
																obj_t BgL_portz00_1117;

																{	/* Pp/circle.scm 70 */
																	obj_t BgL_res2946z00_2506;

																	{	/* Pp/circle.scm 70 */
																		obj_t BgL_auxz00_4478;

																		BgL_auxz00_4478 = BGL_CURRENT_DYNAMIC_ENV();
																		BgL_res2946z00_2506 =
																			BGL_ENV_CURRENT_OUTPUT_PORT
																			(BgL_auxz00_4478);
																	}
																	BgL_portz00_1117 = BgL_res2946z00_2506;
																}
																{	/* Pp/circle.scm 70 */

																	BGl_displayzd2circlezd2zz__pp_circlez00
																		(BgL_vz00_1115, BgL_portz00_1117);
																}
															}
															{	/* Eval/eval.scm 478 */
																obj_t BgL_arg2165z00_1118;

																{	/* Eval/eval.scm 478 */
																	obj_t BgL_res2947z00_2508;

																	{	/* Eval/eval.scm 478 */
																		obj_t BgL_auxz00_4482;

																		BgL_auxz00_4482 = BGL_CURRENT_DYNAMIC_ENV();
																		BgL_res2947z00_2508 =
																			BGL_ENV_CURRENT_OUTPUT_PORT
																			(BgL_auxz00_4482);
																	}
																	BgL_arg2165z00_1118 = BgL_res2947z00_2508;
																}
																bgl_display_char(((unsigned char) '\n'),
																	BgL_arg2165z00_1118);
														}}
													else
														{	/* Eval/eval.scm 476 */
															BFALSE;
														}
													{	/* Eval/eval.scm 479 */
														obj_t BgL_arg2166z00_1119;

														{	/* Eval/eval.scm 479 */
															obj_t BgL_auxz00_4487;

															{	/* Eval/eval.scm 479 */
																bool_t BgL_test3062z00_3428;

																BgL_test3062z00_3428 =
																	PROCEDUREP(BgL_readz00_3308);
																if (BgL_test3062z00_3428)
																	{	/* Eval/eval.scm 479 */
																		BgL_auxz00_4487 = BgL_readz00_3308;
																	}
																else
																	{
																		obj_t BgL_auxz00_4490;

																		BgL_auxz00_4490 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3193z00zz__evalz00,
																			BINT(((long) 18779)),
																			BGl_string3236z00zz__evalz00,
																			BGl_string3195z00zz__evalz00,
																			BgL_readz00_3308);
																		FAILURE(BgL_auxz00_4490, BFALSE, BFALSE);
															}}
															BgL_arg2166z00_1119 =
																PROCEDURE_ENTRY(BgL_auxz00_4487)
																(BgL_readz00_3308, BgL_portz00_3309, BEOA);
														}
														{
															obj_t BgL_sexpz00_4494;

															BgL_sexpz00_4494 = BgL_arg2166z00_1119;
															BgL_sexpz00_1106 = BgL_sexpz00_4494;
															goto BgL_zc3anonymousza32156ze3z83_1107;
														}
													}
												}
										}
									}
								}
							}
							POP_EXIT();
							return BgL_val1870z00_1102;
						}
					}
				}
		}
	}



/* evexpand-error */
	obj_t BGl_evexpandzd2errorzd2zz__evalz00(obj_t BgL_procz00_43,
		obj_t BgL_mesz00_44, obj_t BgL_objz00_45)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 486 */
			if (EXTENDED_PAIRP(BgL_objz00_45))
				{	/* Eval/eval.scm 488 */
					obj_t BgL_ezd21408zd2_1142;

					{	/* Eval/eval.scm 488 */
						obj_t BgL_objz00_2513;

						if (EXTENDED_PAIRP(BgL_objz00_45))
							{	/* Eval/eval.scm 488 */
								BgL_objz00_2513 = BgL_objz00_45;
							}
						else
							{
								obj_t BgL_auxz00_4500;

								BgL_auxz00_4500 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 19181)), BGl_string3254z00zz__evalz00,
									BGl_string3255z00zz__evalz00, BgL_objz00_45);
								FAILURE(BgL_auxz00_4500, BFALSE, BFALSE);
							}
						BgL_ezd21408zd2_1142 = CER(BgL_objz00_2513);
					}
					if (PAIRP(BgL_ezd21408zd2_1142))
						{	/* Eval/eval.scm 488 */
							obj_t BgL_cdrzd21414zd2_1144;

							BgL_cdrzd21414zd2_1144 = CDR(BgL_ezd21408zd2_1142);
							if ((CAR(BgL_ezd21408zd2_1142) == BGl_symbol3200z00zz__evalz00))
								{	/* Eval/eval.scm 488 */
									if (PAIRP(BgL_cdrzd21414zd2_1144))
										{	/* Eval/eval.scm 488 */
											obj_t BgL_cdrzd21418zd2_1147;

											BgL_cdrzd21418zd2_1147 = CDR(BgL_cdrzd21414zd2_1144);
											if (PAIRP(BgL_cdrzd21418zd2_1147))
												{	/* Eval/eval.scm 488 */
													if (NULLP(CDR(BgL_cdrzd21418zd2_1147)))
														{	/* Eval/eval.scm 488 */
															return
																BGl_errorzf2locationzf2zz__errorz00
																(BgL_procz00_43, BgL_mesz00_44, BgL_objz00_45,
																CAR(BgL_cdrzd21414zd2_1144),
																CAR(BgL_cdrzd21418zd2_1147));
														}
													else
														{	/* Eval/eval.scm 488 */
															return
																BGl_errorz00zz__errorz00(BgL_procz00_43,
																BgL_mesz00_44, BgL_objz00_45);
														}
												}
											else
												{	/* Eval/eval.scm 488 */
													return
														BGl_errorz00zz__errorz00(BgL_procz00_43,
														BgL_mesz00_44, BgL_objz00_45);
												}
										}
									else
										{	/* Eval/eval.scm 488 */
											return
												BGl_errorz00zz__errorz00(BgL_procz00_43, BgL_mesz00_44,
												BgL_objz00_45);
										}
								}
							else
								{	/* Eval/eval.scm 488 */
									return
										BGl_errorz00zz__errorz00(BgL_procz00_43, BgL_mesz00_44,
										BgL_objz00_45);
								}
						}
					else
						{	/* Eval/eval.scm 488 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_43, BgL_mesz00_44,
								BgL_objz00_45);
						}
				}
			else
				{	/* Eval/eval.scm 487 */
					return
						BGl_errorz00zz__errorz00(BgL_procz00_43, BgL_mesz00_44,
						BgL_objz00_45);
				}
		}
	}



/* expand-define-expander */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t
		BgL_xz00_46, obj_t BgL_ez00_47)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 504 */
			{
				obj_t BgL_namez00_1209;

				obj_t BgL_expdzd2lamzd2_1210;

				obj_t BgL_expdzd2lamzf2locz20_1211;

				obj_t BgL_expdzd2evalzd2_1212;

				if (PAIRP(BgL_xz00_46))
					{	/* Eval/eval.scm 534 */
						obj_t BgL_cdrzd21451zd2_1165;

						BgL_cdrzd21451zd2_1165 = CDR(BgL_xz00_46);
						if (PAIRP(BgL_cdrzd21451zd2_1165))
							{	/* Eval/eval.scm 534 */
								obj_t BgL_carzd21454zd2_1167;

								obj_t BgL_cdrzd21455zd2_1168;

								BgL_carzd21454zd2_1167 = CAR(BgL_cdrzd21451zd2_1165);
								BgL_cdrzd21455zd2_1168 = CDR(BgL_cdrzd21451zd2_1165);
								if (SYMBOLP(BgL_carzd21454zd2_1167))
									{	/* Eval/eval.scm 534 */
										if (PAIRP(BgL_cdrzd21455zd2_1168))
											{	/* Eval/eval.scm 534 */
												obj_t BgL_cdrzd21461zd2_1171;

												BgL_cdrzd21461zd2_1171 = CDR(BgL_cdrzd21455zd2_1168);
												if (
													(CAR(BgL_cdrzd21455zd2_1168) ==
														BGl_keyword3256z00zz__evalz00))
													{	/* Eval/eval.scm 534 */
														if (PAIRP(BgL_cdrzd21461zd2_1171))
															{	/* Eval/eval.scm 534 */
																if (NULLP(CDR(BgL_cdrzd21461zd2_1171)))
																	{	/* Eval/eval.scm 534 */
																		obj_t BgL_arg2199z00_1175;

																		BgL_arg2199z00_1175 =
																			CAR(BgL_cdrzd21461zd2_1171);
																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_namez00_2541;

																			BgL_namez00_2541 = BgL_carzd21454zd2_1167;
																			{	/* Eval/eval.scm 534 */
																				obj_t BgL_expdzd2lamzf2locz20_2544;

																				BgL_expdzd2lamzf2locz20_2544 =
																					BGl_evepairifyz00zz__prognz00
																					(BgL_arg2199z00_1175, BgL_xz00_46);
																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_expdzd2evalzd2_2545;

																					{	/* Eval/eval.scm 534 */
																						obj_t BgL_envz00_2547;

																						BgL_envz00_2547 =
																							BGl_defaultzd2environmentzd2zz__evalz00
																							();
																						{	/* Eval/eval.scm 534 */

																							{	/* Eval/eval.scm 534 */
																								obj_t BgL_evaluatez00_2550;

																								if (PROCEDUREP
																									(BGl_defaultzd2evaluatezd2zz__evalz00))
																									{	/* Eval/eval.scm 534 */
																										BgL_evaluatez00_2550 =
																											BGl_defaultzd2evaluatezd2zz__evalz00;
																									}
																								else
																									{	/* Eval/eval.scm 534 */
																										BgL_evaluatez00_2550 =
																											BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																									}
																								BgL_expdzd2evalzd2_2545 =
																									BGl_evalzf2expanderzf2zz__evalz00
																									(BgL_expdzd2lamzf2locz20_2544,
																									BgL_envz00_2547,
																									BGl_expandz12zd2envzc0zz__expandz00,
																									BgL_evaluatez00_2550);
																							}
																						}
																					}
																					{	/* Eval/eval.scm 534 */

																						BgL_namez00_1209 = BgL_namez00_2541;
																						BgL_expdzd2lamzd2_1210 =
																							BgL_arg2199z00_1175;
																						BgL_expdzd2lamzf2locz20_1211 =
																							BgL_expdzd2lamzf2locz20_2544;
																						BgL_expdzd2evalzd2_1212 =
																							BgL_expdzd2evalzd2_2545;
																					BgL_zc3anonymousza32215ze3z83_1213:
																						{	/* Eval/eval.scm 510 */
																							obj_t
																								BgL_zc3anonymousza32217ze3z83_3214;
																							BgL_zc3anonymousza32217ze3z83_3214
																								=
																								make_fx_procedure
																								(BGl_zc3anonymousza32217ze3z83zz__evalz00,
																								(int) (((long) 2)),
																								(int) (((long) 2)));
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32217ze3z83_3214,
																								(int) (((long) 0)),
																								BgL_namez00_1209);
																							PROCEDURE_SET
																								(BgL_zc3anonymousza32217ze3z83_3214,
																								(int) (((long) 1)),
																								BgL_expdzd2evalzd2_1212);
																							BGl_installzd2expanderzd2zz__macroz00
																								(BgL_namez00_1209,
																								BgL_zc3anonymousza32217ze3z83_3214);
																						}
																						return BUNSPEC;
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/eval.scm 534 */
																		obj_t BgL_carzd21476zd2_1177;

																		BgL_carzd21476zd2_1177 =
																			CAR(BgL_cdrzd21451zd2_1165);
																		if (SYMBOLP(BgL_carzd21476zd2_1177))
																			{	/* Eval/eval.scm 534 */
																				obj_t BgL_arg2203z00_1179;

																				BgL_arg2203z00_1179 =
																					CDR(BgL_cdrzd21451zd2_1165);
																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_namez00_2557;

																					BgL_namez00_2557 =
																						BgL_carzd21476zd2_1177;
																					{	/* Eval/eval.scm 534 */
																						obj_t BgL_expdzd2lamzd2_2559;

																						{	/* Eval/eval.scm 534 */
																							obj_t BgL_auxz00_4566;

																							{	/* Eval/eval.scm 534 */
																								bool_t BgL_testz00_4567;

																								if (PAIRP(BgL_arg2203z00_1179))
																									{	/* Eval/eval.scm 534 */
																										BgL_testz00_4567 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Eval/eval.scm 534 */
																										BgL_testz00_4567 =
																											NULLP
																											(BgL_arg2203z00_1179);
																									}
																								if (BgL_testz00_4567)
																									{	/* Eval/eval.scm 534 */
																										BgL_auxz00_4566 =
																											BgL_arg2203z00_1179;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4571;

																										BgL_auxz00_4571 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3193z00zz__evalz00,
																											BINT(((long) 20708)),
																											BGl_string3258z00zz__evalz00,
																											BGl_string3250z00zz__evalz00,
																											BgL_arg2203z00_1179);
																										FAILURE(BgL_auxz00_4571,
																											BFALSE, BFALSE);
																							}}
																							BgL_expdzd2lamzd2_2559 =
																								BGl_expandzd2prognzd2zz__prognz00
																								(BgL_auxz00_4566);
																						}
																						{	/* Eval/eval.scm 534 */
																							obj_t
																								BgL_expdzd2lamzf2locz20_2560;
																							BgL_expdzd2lamzf2locz20_2560 =
																								BGl_evepairifyz00zz__prognz00
																								(BgL_expdzd2lamzd2_2559,
																								BgL_xz00_46);
																							{	/* Eval/eval.scm 534 */
																								obj_t BgL_expdzd2evalzd2_2561;

																								{	/* Eval/eval.scm 534 */
																									obj_t BgL_envz00_2563;

																									BgL_envz00_2563 =
																										BGl_defaultzd2environmentzd2zz__evalz00
																										();
																									{	/* Eval/eval.scm 534 */

																										{	/* Eval/eval.scm 534 */
																											obj_t BgL_auxz00_4578;

																											{	/* Eval/eval.scm 534 */
																												obj_t
																													BgL_aux3071z00_3437;
																												BgL_aux3071z00_3437 =
																													BGl_defaultzd2evaluatezd2zz__evalz00;
																												if (PROCEDUREP
																													(BgL_aux3071z00_3437))
																													{	/* Eval/eval.scm 534 */
																														BgL_auxz00_4578 =
																															BgL_aux3071z00_3437;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_4581;
																														BgL_auxz00_4581 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3193z00zz__evalz00,
																															BINT(((long)
																																	20708)),
																															BGl_string3258z00zz__evalz00,
																															BGl_string3195z00zz__evalz00,
																															BgL_aux3071z00_3437);
																														FAILURE
																															(BgL_auxz00_4581,
																															BFALSE, BFALSE);
																											}}
																											BgL_expdzd2evalzd2_2561 =
																												BGl_evalzf2expanderzf2zz__evalz00
																												(BgL_expdzd2lamzf2locz20_2560,
																												BgL_envz00_2563,
																												BGl_expandzd2envzd2zz__expandz00,
																												BgL_auxz00_4578);
																								}}}
																								{	/* Eval/eval.scm 534 */

																									{
																										obj_t
																											BgL_expdzd2evalzd2_4589;
																										obj_t
																											BgL_expdzd2lamzf2locz20_4588;
																										obj_t
																											BgL_expdzd2lamzd2_4587;
																										obj_t BgL_namez00_4586;

																										BgL_namez00_4586 =
																											BgL_namez00_2557;
																										BgL_expdzd2lamzd2_4587 =
																											BgL_expdzd2lamzd2_2559;
																										BgL_expdzd2lamzf2locz20_4588
																											=
																											BgL_expdzd2lamzf2locz20_2560;
																										BgL_expdzd2evalzd2_4589 =
																											BgL_expdzd2evalzd2_2561;
																										BgL_expdzd2evalzd2_1212 =
																											BgL_expdzd2evalzd2_4589;
																										BgL_expdzd2lamzf2locz20_1211
																											=
																											BgL_expdzd2lamzf2locz20_4588;
																										BgL_expdzd2lamzd2_1210 =
																											BgL_expdzd2lamzd2_4587;
																										BgL_namez00_1209 =
																											BgL_namez00_4586;
																										goto
																											BgL_zc3anonymousza32215ze3z83_1213;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* Eval/eval.scm 534 */
																				return
																					BGl_evexpandzd2errorzd2zz__evalz00
																					(BGl_symbol3259z00zz__evalz00,
																					BGl_string3261z00zz__evalz00,
																					BgL_xz00_46);
																			}
																	}
															}
														else
															{	/* Eval/eval.scm 534 */
																obj_t BgL_carzd21494zd2_1182;

																BgL_carzd21494zd2_1182 =
																	CAR(BgL_cdrzd21451zd2_1165);
																if (SYMBOLP(BgL_carzd21494zd2_1182))
																	{	/* Eval/eval.scm 534 */
																		obj_t BgL_arg2206z00_1184;

																		BgL_arg2206z00_1184 =
																			CDR(BgL_cdrzd21451zd2_1165);
																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_namez00_2570;

																			BgL_namez00_2570 = BgL_carzd21494zd2_1182;
																			{	/* Eval/eval.scm 534 */
																				obj_t BgL_expdzd2lamzd2_2572;

																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_auxz00_4595;

																					{	/* Eval/eval.scm 534 */
																						bool_t BgL_testz00_4596;

																						if (PAIRP(BgL_arg2206z00_1184))
																							{	/* Eval/eval.scm 534 */
																								BgL_testz00_4596 = ((bool_t) 1);
																							}
																						else
																							{	/* Eval/eval.scm 534 */
																								BgL_testz00_4596 =
																									NULLP(BgL_arg2206z00_1184);
																							}
																						if (BgL_testz00_4596)
																							{	/* Eval/eval.scm 534 */
																								BgL_auxz00_4595 =
																									BgL_arg2206z00_1184;
																							}
																						else
																							{
																								obj_t BgL_auxz00_4600;

																								BgL_auxz00_4600 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3193z00zz__evalz00,
																									BINT(((long) 20708)),
																									BGl_string3258z00zz__evalz00,
																									BGl_string3250z00zz__evalz00,
																									BgL_arg2206z00_1184);
																								FAILURE(BgL_auxz00_4600, BFALSE,
																									BFALSE);
																					}}
																					BgL_expdzd2lamzd2_2572 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_auxz00_4595);
																				}
																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_expdzd2lamzf2locz20_2573;

																					BgL_expdzd2lamzf2locz20_2573 =
																						BGl_evepairifyz00zz__prognz00
																						(BgL_expdzd2lamzd2_2572,
																						BgL_xz00_46);
																					{	/* Eval/eval.scm 534 */
																						obj_t BgL_expdzd2evalzd2_2574;

																						{	/* Eval/eval.scm 534 */
																							obj_t BgL_envz00_2576;

																							BgL_envz00_2576 =
																								BGl_defaultzd2environmentzd2zz__evalz00
																								();
																							{	/* Eval/eval.scm 534 */

																								{	/* Eval/eval.scm 534 */
																									obj_t BgL_auxz00_4607;

																									{	/* Eval/eval.scm 534 */
																										obj_t BgL_aux3079z00_3445;

																										BgL_aux3079z00_3445 =
																											BGl_defaultzd2evaluatezd2zz__evalz00;
																										if (PROCEDUREP
																											(BgL_aux3079z00_3445))
																											{	/* Eval/eval.scm 534 */
																												BgL_auxz00_4607 =
																													BgL_aux3079z00_3445;
																											}
																										else
																											{
																												obj_t BgL_auxz00_4610;

																												BgL_auxz00_4610 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string3193z00zz__evalz00,
																													BINT(((long) 20708)),
																													BGl_string3258z00zz__evalz00,
																													BGl_string3195z00zz__evalz00,
																													BgL_aux3079z00_3445);
																												FAILURE(BgL_auxz00_4610,
																													BFALSE, BFALSE);
																									}}
																									BgL_expdzd2evalzd2_2574 =
																										BGl_evalzf2expanderzf2zz__evalz00
																										(BgL_expdzd2lamzf2locz20_2573,
																										BgL_envz00_2576,
																										BGl_expandzd2envzd2zz__expandz00,
																										BgL_auxz00_4607);
																						}}}
																						{	/* Eval/eval.scm 534 */

																							{
																								obj_t BgL_expdzd2evalzd2_4618;

																								obj_t
																									BgL_expdzd2lamzf2locz20_4617;
																								obj_t BgL_expdzd2lamzd2_4616;

																								obj_t BgL_namez00_4615;

																								BgL_namez00_4615 =
																									BgL_namez00_2570;
																								BgL_expdzd2lamzd2_4616 =
																									BgL_expdzd2lamzd2_2572;
																								BgL_expdzd2lamzf2locz20_4617 =
																									BgL_expdzd2lamzf2locz20_2573;
																								BgL_expdzd2evalzd2_4618 =
																									BgL_expdzd2evalzd2_2574;
																								BgL_expdzd2evalzd2_1212 =
																									BgL_expdzd2evalzd2_4618;
																								BgL_expdzd2lamzf2locz20_1211 =
																									BgL_expdzd2lamzf2locz20_4617;
																								BgL_expdzd2lamzd2_1210 =
																									BgL_expdzd2lamzd2_4616;
																								BgL_namez00_1209 =
																									BgL_namez00_4615;
																								goto
																									BgL_zc3anonymousza32215ze3z83_1213;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Eval/eval.scm 534 */
																		return
																			BGl_evexpandzd2errorzd2zz__evalz00
																			(BGl_symbol3259z00zz__evalz00,
																			BGl_string3261z00zz__evalz00,
																			BgL_xz00_46);
																	}
															}
													}
												else
													{	/* Eval/eval.scm 534 */
														obj_t BgL_carzd21512zd2_1186;

														BgL_carzd21512zd2_1186 =
															CAR(BgL_cdrzd21451zd2_1165);
														if (SYMBOLP(BgL_carzd21512zd2_1186))
															{	/* Eval/eval.scm 534 */
																obj_t BgL_arg2208z00_1188;

																BgL_arg2208z00_1188 =
																	CDR(BgL_cdrzd21451zd2_1165);
																{	/* Eval/eval.scm 534 */
																	obj_t BgL_namez00_2583;

																	BgL_namez00_2583 = BgL_carzd21512zd2_1186;
																	{	/* Eval/eval.scm 534 */
																		obj_t BgL_expdzd2lamzd2_2585;

																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_auxz00_4624;

																			{	/* Eval/eval.scm 534 */
																				bool_t BgL_testz00_4625;

																				if (PAIRP(BgL_arg2208z00_1188))
																					{	/* Eval/eval.scm 534 */
																						BgL_testz00_4625 = ((bool_t) 1);
																					}
																				else
																					{	/* Eval/eval.scm 534 */
																						BgL_testz00_4625 =
																							NULLP(BgL_arg2208z00_1188);
																					}
																				if (BgL_testz00_4625)
																					{	/* Eval/eval.scm 534 */
																						BgL_auxz00_4624 =
																							BgL_arg2208z00_1188;
																					}
																				else
																					{
																						obj_t BgL_auxz00_4629;

																						BgL_auxz00_4629 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3193z00zz__evalz00,
																							BINT(((long) 20708)),
																							BGl_string3258z00zz__evalz00,
																							BGl_string3250z00zz__evalz00,
																							BgL_arg2208z00_1188);
																						FAILURE(BgL_auxz00_4629, BFALSE,
																							BFALSE);
																			}}
																			BgL_expdzd2lamzd2_2585 =
																				BGl_expandzd2prognzd2zz__prognz00
																				(BgL_auxz00_4624);
																		}
																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_expdzd2lamzf2locz20_2586;

																			BgL_expdzd2lamzf2locz20_2586 =
																				BGl_evepairifyz00zz__prognz00
																				(BgL_expdzd2lamzd2_2585, BgL_xz00_46);
																			{	/* Eval/eval.scm 534 */
																				obj_t BgL_expdzd2evalzd2_2587;

																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_envz00_2589;

																					BgL_envz00_2589 =
																						BGl_defaultzd2environmentzd2zz__evalz00
																						();
																					{	/* Eval/eval.scm 534 */

																						{	/* Eval/eval.scm 534 */
																							obj_t BgL_auxz00_4636;

																							{	/* Eval/eval.scm 534 */
																								obj_t BgL_aux3087z00_3453;

																								BgL_aux3087z00_3453 =
																									BGl_defaultzd2evaluatezd2zz__evalz00;
																								if (PROCEDUREP
																									(BgL_aux3087z00_3453))
																									{	/* Eval/eval.scm 534 */
																										BgL_auxz00_4636 =
																											BgL_aux3087z00_3453;
																									}
																								else
																									{
																										obj_t BgL_auxz00_4639;

																										BgL_auxz00_4639 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3193z00zz__evalz00,
																											BINT(((long) 20708)),
																											BGl_string3258z00zz__evalz00,
																											BGl_string3195z00zz__evalz00,
																											BgL_aux3087z00_3453);
																										FAILURE(BgL_auxz00_4639,
																											BFALSE, BFALSE);
																							}}
																							BgL_expdzd2evalzd2_2587 =
																								BGl_evalzf2expanderzf2zz__evalz00
																								(BgL_expdzd2lamzf2locz20_2586,
																								BgL_envz00_2589,
																								BGl_expandzd2envzd2zz__expandz00,
																								BgL_auxz00_4636);
																				}}}
																				{	/* Eval/eval.scm 534 */

																					{
																						obj_t BgL_expdzd2evalzd2_4647;

																						obj_t BgL_expdzd2lamzf2locz20_4646;

																						obj_t BgL_expdzd2lamzd2_4645;

																						obj_t BgL_namez00_4644;

																						BgL_namez00_4644 = BgL_namez00_2583;
																						BgL_expdzd2lamzd2_4645 =
																							BgL_expdzd2lamzd2_2585;
																						BgL_expdzd2lamzf2locz20_4646 =
																							BgL_expdzd2lamzf2locz20_2586;
																						BgL_expdzd2evalzd2_4647 =
																							BgL_expdzd2evalzd2_2587;
																						BgL_expdzd2evalzd2_1212 =
																							BgL_expdzd2evalzd2_4647;
																						BgL_expdzd2lamzf2locz20_1211 =
																							BgL_expdzd2lamzf2locz20_4646;
																						BgL_expdzd2lamzd2_1210 =
																							BgL_expdzd2lamzd2_4645;
																						BgL_namez00_1209 = BgL_namez00_4644;
																						goto
																							BgL_zc3anonymousza32215ze3z83_1213;
																					}
																				}
																			}
																		}
																	}
																}
															}
														else
															{	/* Eval/eval.scm 534 */
																return
																	BGl_evexpandzd2errorzd2zz__evalz00
																	(BGl_symbol3259z00zz__evalz00,
																	BGl_string3261z00zz__evalz00, BgL_xz00_46);
															}
													}
											}
										else
											{	/* Eval/eval.scm 534 */
												obj_t BgL_carzd21530zd2_1192;

												BgL_carzd21530zd2_1192 = CAR(BgL_cdrzd21451zd2_1165);
												if (SYMBOLP(BgL_carzd21530zd2_1192))
													{	/* Eval/eval.scm 534 */
														obj_t BgL_arg2212z00_1194;

														BgL_arg2212z00_1194 = CDR(BgL_cdrzd21451zd2_1165);
														{	/* Eval/eval.scm 534 */
															obj_t BgL_namez00_2596;

															BgL_namez00_2596 = BgL_carzd21530zd2_1192;
															{	/* Eval/eval.scm 534 */
																obj_t BgL_expdzd2lamzd2_2598;

																{	/* Eval/eval.scm 534 */
																	obj_t BgL_auxz00_4653;

																	{	/* Eval/eval.scm 534 */
																		bool_t BgL_testz00_4654;

																		if (PAIRP(BgL_arg2212z00_1194))
																			{	/* Eval/eval.scm 534 */
																				BgL_testz00_4654 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/eval.scm 534 */
																				BgL_testz00_4654 =
																					NULLP(BgL_arg2212z00_1194);
																			}
																		if (BgL_testz00_4654)
																			{	/* Eval/eval.scm 534 */
																				BgL_auxz00_4653 = BgL_arg2212z00_1194;
																			}
																		else
																			{
																				obj_t BgL_auxz00_4658;

																				BgL_auxz00_4658 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string3193z00zz__evalz00,
																					BINT(((long) 20708)),
																					BGl_string3258z00zz__evalz00,
																					BGl_string3250z00zz__evalz00,
																					BgL_arg2212z00_1194);
																				FAILURE(BgL_auxz00_4658, BFALSE,
																					BFALSE);
																	}}
																	BgL_expdzd2lamzd2_2598 =
																		BGl_expandzd2prognzd2zz__prognz00
																		(BgL_auxz00_4653);
																}
																{	/* Eval/eval.scm 534 */
																	obj_t BgL_expdzd2lamzf2locz20_2599;

																	BgL_expdzd2lamzf2locz20_2599 =
																		BGl_evepairifyz00zz__prognz00
																		(BgL_expdzd2lamzd2_2598, BgL_xz00_46);
																	{	/* Eval/eval.scm 534 */
																		obj_t BgL_expdzd2evalzd2_2600;

																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_envz00_2602;

																			BgL_envz00_2602 =
																				BGl_defaultzd2environmentzd2zz__evalz00
																				();
																			{	/* Eval/eval.scm 534 */

																				{	/* Eval/eval.scm 534 */
																					obj_t BgL_auxz00_4665;

																					{	/* Eval/eval.scm 534 */
																						obj_t BgL_aux3095z00_3461;

																						BgL_aux3095z00_3461 =
																							BGl_defaultzd2evaluatezd2zz__evalz00;
																						if (PROCEDUREP(BgL_aux3095z00_3461))
																							{	/* Eval/eval.scm 534 */
																								BgL_auxz00_4665 =
																									BgL_aux3095z00_3461;
																							}
																						else
																							{
																								obj_t BgL_auxz00_4668;

																								BgL_auxz00_4668 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string3193z00zz__evalz00,
																									BINT(((long) 20708)),
																									BGl_string3258z00zz__evalz00,
																									BGl_string3195z00zz__evalz00,
																									BgL_aux3095z00_3461);
																								FAILURE(BgL_auxz00_4668, BFALSE,
																									BFALSE);
																					}}
																					BgL_expdzd2evalzd2_2600 =
																						BGl_evalzf2expanderzf2zz__evalz00
																						(BgL_expdzd2lamzf2locz20_2599,
																						BgL_envz00_2602,
																						BGl_expandzd2envzd2zz__expandz00,
																						BgL_auxz00_4665);
																		}}}
																		{	/* Eval/eval.scm 534 */

																			{
																				obj_t BgL_expdzd2evalzd2_4676;

																				obj_t BgL_expdzd2lamzf2locz20_4675;

																				obj_t BgL_expdzd2lamzd2_4674;

																				obj_t BgL_namez00_4673;

																				BgL_namez00_4673 = BgL_namez00_2596;
																				BgL_expdzd2lamzd2_4674 =
																					BgL_expdzd2lamzd2_2598;
																				BgL_expdzd2lamzf2locz20_4675 =
																					BgL_expdzd2lamzf2locz20_2599;
																				BgL_expdzd2evalzd2_4676 =
																					BgL_expdzd2evalzd2_2600;
																				BgL_expdzd2evalzd2_1212 =
																					BgL_expdzd2evalzd2_4676;
																				BgL_expdzd2lamzf2locz20_1211 =
																					BgL_expdzd2lamzf2locz20_4675;
																				BgL_expdzd2lamzd2_1210 =
																					BgL_expdzd2lamzd2_4674;
																				BgL_namez00_1209 = BgL_namez00_4673;
																				goto BgL_zc3anonymousza32215ze3z83_1213;
																			}
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Eval/eval.scm 534 */
														return
															BGl_evexpandzd2errorzd2zz__evalz00
															(BGl_symbol3259z00zz__evalz00,
															BGl_string3261z00zz__evalz00, BgL_xz00_46);
													}
											}
									}
								else
									{	/* Eval/eval.scm 534 */
										obj_t BgL_carzd21546zd2_1196;

										BgL_carzd21546zd2_1196 = CAR(BgL_cdrzd21451zd2_1165);
										if (SYMBOLP(BgL_carzd21546zd2_1196))
											{	/* Eval/eval.scm 534 */
												obj_t BgL_arg2214z00_1198;

												BgL_arg2214z00_1198 = CDR(BgL_cdrzd21451zd2_1165);
												{	/* Eval/eval.scm 534 */
													obj_t BgL_namez00_2609;

													BgL_namez00_2609 = BgL_carzd21546zd2_1196;
													{	/* Eval/eval.scm 534 */
														obj_t BgL_expdzd2lamzd2_2611;

														{	/* Eval/eval.scm 534 */
															obj_t BgL_auxz00_4682;

															{	/* Eval/eval.scm 534 */
																bool_t BgL_testz00_4683;

																if (PAIRP(BgL_arg2214z00_1198))
																	{	/* Eval/eval.scm 534 */
																		BgL_testz00_4683 = ((bool_t) 1);
																	}
																else
																	{	/* Eval/eval.scm 534 */
																		BgL_testz00_4683 =
																			NULLP(BgL_arg2214z00_1198);
																	}
																if (BgL_testz00_4683)
																	{	/* Eval/eval.scm 534 */
																		BgL_auxz00_4682 = BgL_arg2214z00_1198;
																	}
																else
																	{
																		obj_t BgL_auxz00_4687;

																		BgL_auxz00_4687 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3193z00zz__evalz00,
																			BINT(((long) 20708)),
																			BGl_string3258z00zz__evalz00,
																			BGl_string3250z00zz__evalz00,
																			BgL_arg2214z00_1198);
																		FAILURE(BgL_auxz00_4687, BFALSE, BFALSE);
															}}
															BgL_expdzd2lamzd2_2611 =
																BGl_expandzd2prognzd2zz__prognz00
																(BgL_auxz00_4682);
														}
														{	/* Eval/eval.scm 534 */
															obj_t BgL_expdzd2lamzf2locz20_2612;

															BgL_expdzd2lamzf2locz20_2612 =
																BGl_evepairifyz00zz__prognz00
																(BgL_expdzd2lamzd2_2611, BgL_xz00_46);
															{	/* Eval/eval.scm 534 */
																obj_t BgL_expdzd2evalzd2_2613;

																{	/* Eval/eval.scm 534 */
																	obj_t BgL_envz00_2615;

																	BgL_envz00_2615 =
																		BGl_defaultzd2environmentzd2zz__evalz00();
																	{	/* Eval/eval.scm 534 */

																		{	/* Eval/eval.scm 534 */
																			obj_t BgL_auxz00_4694;

																			{	/* Eval/eval.scm 534 */
																				obj_t BgL_aux3103z00_3469;

																				BgL_aux3103z00_3469 =
																					BGl_defaultzd2evaluatezd2zz__evalz00;
																				if (PROCEDUREP(BgL_aux3103z00_3469))
																					{	/* Eval/eval.scm 534 */
																						BgL_auxz00_4694 =
																							BgL_aux3103z00_3469;
																					}
																				else
																					{
																						obj_t BgL_auxz00_4697;

																						BgL_auxz00_4697 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string3193z00zz__evalz00,
																							BINT(((long) 20708)),
																							BGl_string3258z00zz__evalz00,
																							BGl_string3195z00zz__evalz00,
																							BgL_aux3103z00_3469);
																						FAILURE(BgL_auxz00_4697, BFALSE,
																							BFALSE);
																			}}
																			BgL_expdzd2evalzd2_2613 =
																				BGl_evalzf2expanderzf2zz__evalz00
																				(BgL_expdzd2lamzf2locz20_2612,
																				BgL_envz00_2615,
																				BGl_expandzd2envzd2zz__expandz00,
																				BgL_auxz00_4694);
																}}}
																{	/* Eval/eval.scm 534 */

																	{
																		obj_t BgL_expdzd2evalzd2_4705;

																		obj_t BgL_expdzd2lamzf2locz20_4704;

																		obj_t BgL_expdzd2lamzd2_4703;

																		obj_t BgL_namez00_4702;

																		BgL_namez00_4702 = BgL_namez00_2609;
																		BgL_expdzd2lamzd2_4703 =
																			BgL_expdzd2lamzd2_2611;
																		BgL_expdzd2lamzf2locz20_4704 =
																			BgL_expdzd2lamzf2locz20_2612;
																		BgL_expdzd2evalzd2_4705 =
																			BgL_expdzd2evalzd2_2613;
																		BgL_expdzd2evalzd2_1212 =
																			BgL_expdzd2evalzd2_4705;
																		BgL_expdzd2lamzf2locz20_1211 =
																			BgL_expdzd2lamzf2locz20_4704;
																		BgL_expdzd2lamzd2_1210 =
																			BgL_expdzd2lamzd2_4703;
																		BgL_namez00_1209 = BgL_namez00_4702;
																		goto BgL_zc3anonymousza32215ze3z83_1213;
																	}
																}
															}
														}
													}
												}
											}
										else
											{	/* Eval/eval.scm 534 */
												return
													BGl_evexpandzd2errorzd2zz__evalz00
													(BGl_symbol3259z00zz__evalz00,
													BGl_string3261z00zz__evalz00, BgL_xz00_46);
											}
									}
							}
						else
							{	/* Eval/eval.scm 534 */
								return
									BGl_evexpandzd2errorzd2zz__evalz00
									(BGl_symbol3259z00zz__evalz00, BGl_string3261z00zz__evalz00,
									BgL_xz00_46);
							}
					}
				else
					{	/* Eval/eval.scm 534 */
						return
							BGl_evexpandzd2errorzd2zz__evalz00(BGl_symbol3259z00zz__evalz00,
							BGl_string3261z00zz__evalz00, BgL_xz00_46);
					}
			}
		}
	}



/* _expand-define-expander */
	obj_t BGl__expandzd2definezd2expanderz00zz__evalz00(obj_t BgL_envz00_3215,
		obj_t BgL_xz00_3216, obj_t BgL_ez00_3217)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 504 */
			return
				BGl_expandzd2definezd2expanderz00zz__evalz00(BgL_xz00_3216,
				BgL_ez00_3217);
		}
	}



/* <anonymous:2217> */
	obj_t BGl_zc3anonymousza32217ze3z83zz__evalz00(obj_t BgL_envz00_3218,
		obj_t BgL_xz00_3221, obj_t BgL_ez00_3222)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 509 */
			{	/* Eval/eval.scm 510 */
				obj_t BgL_namez00_3219;

				obj_t BgL_expdzd2evalzd2_3220;

				BgL_namez00_3219 = PROCEDURE_REF(BgL_envz00_3218, (int) (((long) 0)));
				BgL_expdzd2evalzd2_3220 =
					PROCEDURE_REF(BgL_envz00_3218, (int) (((long) 1)));
				{
					obj_t BgL_xz00_1215;

					obj_t BgL_ez00_1216;

					BgL_xz00_1215 = BgL_xz00_3221;
					BgL_ez00_1216 = BgL_ez00_3222;
					if (PROCEDUREP(BgL_expdzd2evalzd2_3220))
						{	/* Eval/eval.scm 510 */
							if (PROCEDURE_CORRECT_ARITYP(BgL_expdzd2evalzd2_3220,
									(int) (((long) 2))))
								{	/* Eval/eval.scm 512 */
									return
										BGl_zc3exitza32220ze3z83zz__evalz00(BgL_ez00_1216,
										BgL_xz00_1215, BgL_expdzd2evalzd2_3220);
								}
							else
								{	/* Eval/eval.scm 512 */
									return
										BGl_evexpandzd2errorzd2zz__evalz00(BgL_namez00_3219,
										BGl_string3262z00zz__evalz00, BgL_xz00_1215);
								}
						}
					else
						{	/* Eval/eval.scm 510 */
							return
								BGl_evexpandzd2errorzd2zz__evalz00(BgL_namez00_3219,
								BGl_string3263z00zz__evalz00, BgL_xz00_1215);
						}
				}
			}
		}
	}



/* <exit:2220> */
	obj_t BGl_zc3exitza32220ze3z83zz__evalz00(obj_t BgL_ez00_3301,
		obj_t BgL_xz00_3300, obj_t BgL_expdzd2evalzd2_3299)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 516 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1874z00_1221;

			if (SET_EXIT(BgL_an_exit1874z00_1221))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1874z00_1221 = (void *) jmpbuf;
					{	/* Eval/eval.scm 516 */

						PUSH_EXIT(BgL_an_exit1874z00_1221, ((long) 1));
						{	/* Eval/eval.scm 516 */
							obj_t BgL_an_exitd1875z00_1222;

							BgL_an_exitd1875z00_1222 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 516 */
								obj_t BgL_res1877z00_1225;

								{	/* Eval/eval.scm 516 */
									obj_t BgL_err1872z00_1226;

									obj_t BgL_ohs1871z00_1227;

									BgL_err1872z00_1226 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1871z00_1227 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 516 */
										obj_t BgL_val1878z00_1228;

										BgL_val1878z00_1228 =
											BGl_zc3exitza32246ze3z83zz__evalz00(BgL_ez00_3301,
											BgL_xz00_3300, BgL_expdzd2evalzd2_3299,
											BgL_ohs1871z00_1227, BgL_an_exitd1875z00_1222,
											BgL_err1872z00_1226);
										BGL_ERROR_HANDLER_SET(BgL_ohs1871z00_1227);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1872z00_1226)))
											{	/* Eval/eval.scm 518 */
												obj_t BgL_arg2222z00_1230;

												{	/* Eval/eval.scm 518 */
													obj_t BgL_excz00_1231;

													BgL_excz00_1231 = CDR(BgL_err1872z00_1226);
													{	/* Eval/eval.scm 518 */
														obj_t BgL_nexcz00_1232;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_excz00_1231,
																BGl_z62errorz62zz__objectz00))
															{	/* Eval/eval.scm 519 */
																obj_t BgL_objz00_1234;

																{
																	BgL_z62errorz62_bglt BgL_auxz00_4736;

																	BgL_auxz00_4736 =
																		(BgL_z62errorz62_bglt) (BgL_excz00_1231);
																	BgL_objz00_1234 =
																		(((BgL_z62errorz62_bglt)
																			CREF(BgL_auxz00_4736))->BgL_objz00);
																}
																if (EXTENDED_PAIRP(BgL_objz00_1234))
																	{	/* Eval/eval.scm 521 */
																		obj_t BgL_ezd21426zd2_1240;

																		{	/* Eval/eval.scm 521 */
																			obj_t BgL_objz00_2650;

																			if (EXTENDED_PAIRP(BgL_objz00_1234))
																				{	/* Eval/eval.scm 521 */
																					BgL_objz00_2650 = BgL_objz00_1234;
																				}
																			else
																				{
																					obj_t BgL_auxz00_4743;

																					BgL_auxz00_4743 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3193z00zz__evalz00,
																						BINT(((long) 20455)),
																						BGl_string3264z00zz__evalz00,
																						BGl_string3255z00zz__evalz00,
																						BgL_objz00_1234);
																					FAILURE(BgL_auxz00_4743, BFALSE,
																						BFALSE);
																				}
																			BgL_ezd21426zd2_1240 =
																				CER(BgL_objz00_2650);
																		}
																		if (PAIRP(BgL_ezd21426zd2_1240))
																			{	/* Eval/eval.scm 521 */
																				obj_t BgL_cdrzd21432zd2_1242;

																				BgL_cdrzd21432zd2_1242 =
																					CDR(BgL_ezd21426zd2_1240);
																				if (
																					(CAR(BgL_ezd21426zd2_1240) ==
																						BGl_symbol3200z00zz__evalz00))
																					{	/* Eval/eval.scm 521 */
																						if (PAIRP(BgL_cdrzd21432zd2_1242))
																							{	/* Eval/eval.scm 521 */
																								obj_t BgL_cdrzd21436zd2_1245;

																								BgL_cdrzd21436zd2_1245 =
																									CDR(BgL_cdrzd21432zd2_1242);
																								if (PAIRP
																									(BgL_cdrzd21436zd2_1245))
																									{	/* Eval/eval.scm 521 */
																										if (NULLP(CDR
																												(BgL_cdrzd21436zd2_1245)))
																											{	/* Eval/eval.scm 521 */
																												obj_t
																													BgL_arg2233z00_1248;
																												obj_t
																													BgL_arg2234z00_1249;
																												BgL_arg2233z00_1248 =
																													CAR
																													(BgL_cdrzd21432zd2_1242);
																												BgL_arg2234z00_1249 =
																													CAR
																													(BgL_cdrzd21436zd2_1245);
																												{	/* Eval/eval.scm 521 */
																													BgL_z62errorz62_bglt
																														BgL_duplicated1881z00_2663;
																													BgL_duplicated1881z00_2663
																														=
																														(BgL_z62errorz62_bglt)
																														(BgL_excz00_1231);
																													{	/* Eval/eval.scm 521 */
																														BgL_z62errorz62_bglt
																															BgL_new1882z00_2664;
																														{	/* Eval/eval.scm 521 */
																															obj_t
																																BgL_arg2238z00_2665;
																															obj_t
																																BgL_arg2239z00_2666;
																															obj_t
																																BgL_arg2240z00_2667;
																															obj_t
																																BgL_arg2242z00_2668;
																															{
																																BgL_z62exceptionz62_bglt
																																	BgL_auxz00_4765;
																																BgL_auxz00_4765
																																	=
																																	(BgL_z62exceptionz62_bglt)
																																	(BgL_duplicated1881z00_2663);
																																BgL_arg2238z00_2665
																																	=
																																	(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_4765))->BgL_stackz00);
																															}
																															BgL_arg2239z00_2666
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1881z00_2663))->BgL_procz00);
																															BgL_arg2240z00_2667
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1881z00_2663))->BgL_msgz00);
																															BgL_arg2242z00_2668
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1881z00_2663))->BgL_objz00);
																															BgL_new1882z00_2664
																																=
																																BGl_makezd2z62errorzb0zz__objectz00
																																(BgL_arg2233z00_1248,
																																BgL_arg2234z00_1249,
																																BgL_arg2238z00_2665,
																																BgL_arg2239z00_2666,
																																BgL_arg2240z00_2667,
																																BgL_arg2242z00_2668);
																														}
																														{	/* Eval/eval.scm 521 */

																															BgL_nexcz00_1232 =
																																(obj_t)
																																(BgL_new1882z00_2664);
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/eval.scm 521 */
																												BgL_nexcz00_1232 =
																													BgL_excz00_1231;
																											}
																									}
																								else
																									{	/* Eval/eval.scm 521 */
																										BgL_nexcz00_1232 =
																											BgL_excz00_1231;
																									}
																							}
																						else
																							{	/* Eval/eval.scm 521 */
																								BgL_nexcz00_1232 =
																									BgL_excz00_1231;
																							}
																					}
																				else
																					{	/* Eval/eval.scm 521 */
																						BgL_nexcz00_1232 = BgL_excz00_1231;
																					}
																			}
																		else
																			{	/* Eval/eval.scm 521 */
																				BgL_nexcz00_1232 = BgL_excz00_1231;
																			}
																	}
																else
																	{	/* Eval/eval.scm 520 */
																		BgL_nexcz00_1232 = BgL_excz00_1231;
																	}
															}
														else
															{	/* Eval/eval.scm 518 */
																BgL_nexcz00_1232 = BgL_excz00_1231;
															}
														BgL_arg2222z00_1230 =
															BGl_raisez00zz__errorz00(BgL_nexcz00_1232);
													}
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1875z00_1222, BgL_arg2222z00_1230);
											}
										else
											{	/* Eval/eval.scm 516 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1878z00_1228)))
											{	/* Eval/eval.scm 516 */
												obj_t BgL_arg2244z00_1260;

												obj_t BgL_arg2245z00_1261;

												{	/* Eval/eval.scm 516 */
													obj_t BgL_pairz00_2684;

													if (PAIRP(BgL_val1878z00_1228))
														{	/* Eval/eval.scm 516 */
															BgL_pairz00_2684 = BgL_val1878z00_1228;
														}
													else
														{
															obj_t BgL_auxz00_4780;

															BgL_auxz00_4780 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 20298)),
																BGl_string3264z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1878z00_1228);
															FAILURE(BgL_auxz00_4780, BFALSE, BFALSE);
														}
													BgL_arg2244z00_1260 = CAR(BgL_pairz00_2684);
												}
												BgL_arg2245z00_1261 = CDR(BgL_val1878z00_1228);
												BgL_res1877z00_1225 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2244z00_1260, BgL_arg2245z00_1261);
											}
										else
											{	/* Eval/eval.scm 516 */
												BgL_res1877z00_1225 = BgL_val1878z00_1228;
											}
									}
								}
								POP_EXIT();
								return BgL_res1877z00_1225;
							}
						}
					}
				}
		}
	}



/* <exit:2246> */
	obj_t BGl_zc3exitza32246ze3z83zz__evalz00(obj_t BgL_ez00_3307,
		obj_t BgL_xz00_3306, obj_t BgL_expdzd2evalzd2_3305,
		obj_t BgL_ohs1871z00_3304, obj_t BgL_an_exitd1875z00_3303,
		obj_t BgL_err1872z00_3302)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 516 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1879z00_1263;

			if (SET_EXIT(BgL_an_exit1879z00_1263))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1879z00_1263 = (void *) jmpbuf;
					{	/* Eval/eval.scm 516 */

						PUSH_EXIT(BgL_an_exit1879z00_1263, ((long) 0));
						{	/* Eval/eval.scm 516 */
							obj_t BgL_val1880z00_1264;

							{	/* Eval/eval.scm 516 */
								obj_t BgL_arg2247z00_1265;

								{	/* Eval/eval.scm 516 */
									obj_t BgL_zc3anonymousza32249ze3z83_3213;

									BgL_zc3anonymousza32249ze3z83_3213 =
										make_fx_procedure(BGl_zc3anonymousza32249ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32249ze3z83_3213,
										(int) (((long) 0)), BgL_err1872z00_3302);
									PROCEDURE_SET(BgL_zc3anonymousza32249ze3z83_3213,
										(int) (((long) 1)), BgL_an_exitd1875z00_3303);
									BgL_arg2247z00_1265 =
										MAKE_PAIR(BgL_zc3anonymousza32249ze3z83_3213,
										BgL_ohs1871z00_3304);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2247z00_1265);
								BUNSPEC;
							}
							{	/* Eval/eval.scm 531 */
								obj_t BgL_auxz00_4801;

								{	/* Eval/eval.scm 531 */
									bool_t BgL_test3114z00_3480;

									BgL_test3114z00_3480 = PROCEDUREP(BgL_expdzd2evalzd2_3305);
									if (BgL_test3114z00_3480)
										{	/* Eval/eval.scm 531 */
											BgL_auxz00_4801 = BgL_expdzd2evalzd2_3305;
										}
									else
										{
											obj_t BgL_auxz00_4804;

											BgL_auxz00_4804 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3193z00zz__evalz00, BINT(((long) 20660)),
												BGl_string3265z00zz__evalz00,
												BGl_string3195z00zz__evalz00, BgL_expdzd2evalzd2_3305);
											FAILURE(BgL_auxz00_4804, BFALSE, BFALSE);
								}}
								BgL_val1880z00_1264 =
									PROCEDURE_ENTRY(BgL_auxz00_4801) (BgL_expdzd2evalzd2_3305,
									BgL_xz00_3306, BgL_ez00_3307, BEOA);
							}
							POP_EXIT();
							return BgL_val1880z00_1264;
						}
					}
				}
		}
	}



/* <anonymous:2249> */
	obj_t BGl_zc3anonymousza32249ze3z83zz__evalz00(obj_t BgL_envz00_3223,
		obj_t BgL_ez00_3226)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 516 */
			{	/* Eval/eval.scm 516 */
				obj_t BgL_err1872z00_3224;

				obj_t BgL_an_exitd1875z00_3225;

				BgL_err1872z00_3224 =
					PROCEDURE_REF(BgL_envz00_3223, (int) (((long) 0)));
				BgL_an_exitd1875z00_3225 =
					PROCEDURE_REF(BgL_envz00_3223, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1267;

					BgL_ez00_1267 = BgL_ez00_3226;
					{	/* Eval/eval.scm 516 */
						obj_t BgL_pairz00_2640;

						if (PAIRP(BgL_err1872z00_3224))
							{	/* Eval/eval.scm 516 */
								BgL_pairz00_2640 = BgL_err1872z00_3224;
							}
						else
							{
								obj_t BgL_auxz00_4815;

								BgL_auxz00_4815 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 20298)), BGl_string3266z00zz__evalz00,
									BGl_string3198z00zz__evalz00, BgL_err1872z00_3224);
								FAILURE(BgL_auxz00_4815, BFALSE, BFALSE);
							}
						SET_CAR(BgL_pairz00_2640, BTRUE);
					}
					SET_CDR(BgL_err1872z00_3224, BgL_ez00_1267);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1875z00_3225,
						BgL_ez00_1267);
				}
			}
		}
	}



/* expand-define-macro */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t
		BgL_xz00_48, obj_t BgL_ez00_49)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 553 */
			{
				obj_t BgL_namez00_1272;

				obj_t BgL_argsz00_1273;

				obj_t BgL_bodyz00_1274;

				if (PAIRP(BgL_xz00_48))
					{	/* Eval/eval.scm 554 */
						obj_t BgL_cdrzd21574zd2_1279;

						BgL_cdrzd21574zd2_1279 = CDR(BgL_xz00_48);
						if (PAIRP(BgL_cdrzd21574zd2_1279))
							{	/* Eval/eval.scm 554 */
								obj_t BgL_carzd21578zd2_1281;

								BgL_carzd21578zd2_1281 = CAR(BgL_cdrzd21574zd2_1279);
								if (PAIRP(BgL_carzd21578zd2_1281))
									{	/* Eval/eval.scm 554 */
										BgL_namez00_1272 = CAR(BgL_carzd21578zd2_1281);
										BgL_argsz00_1273 = CDR(BgL_carzd21578zd2_1281);
										BgL_bodyz00_1274 = CDR(BgL_cdrzd21574zd2_1279);
									BgL_tagzd21560zd2_1275:
										{	/* Eval/eval.scm 557 */
											obj_t BgL_fnamez00_1301;

											obj_t BgL_locz00_1302;

											{	/* Eval/eval.scm 557 */

												{	/* Eval/eval.scm 557 */

													BgL_fnamez00_1301 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/eval.scm 558 */

												{	/* Eval/eval.scm 558 */

													BgL_locz00_1302 =
														BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
												}
											}
											{	/* Eval/eval.scm 561 */
												obj_t BgL_arg2268z00_1303;

												{	/* Eval/eval.scm 561 */
													obj_t BgL_evexpdz00_1304;

													{	/* Eval/eval.scm 561 */
														obj_t BgL_arg2300z00_1362;

														obj_t BgL_arg2301z00_1363;

														BgL_arg2300z00_1362 = BGl_symbol3267z00zz__evalz00;
														{	/* Eval/eval.scm 561 */
															obj_t BgL_arg2302z00_1364;

															obj_t BgL_arg2303z00_1365;

															{	/* Eval/eval.scm 561 */
																obj_t BgL_arg2307z00_1369;

																obj_t BgL_arg2308z00_1370;

																BgL_arg2307z00_1369 =
																	BGl_symbol3269z00zz__evalz00;
																{	/* Eval/eval.scm 561 */
																	obj_t BgL_list2309z00_1371;

																	BgL_list2309z00_1371 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2308z00_1370 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BGl_symbol3271z00zz__evalz00,
																		BgL_list2309z00_1371);
																}
																BgL_arg2302z00_1364 =
																	MAKE_PAIR(BgL_arg2307z00_1369,
																	BgL_arg2308z00_1370);
															}
															{	/* Eval/eval.scm 562 */
																obj_t BgL_arg2310z00_1372;

																obj_t BgL_arg2311z00_1373;

																BgL_arg2310z00_1372 =
																	BGl_symbol3273z00zz__evalz00;
																{	/* Eval/eval.scm 562 */
																	obj_t BgL_arg2312z00_1374;

																	obj_t BgL_arg2313z00_1375;

																	obj_t BgL_arg2314z00_1376;

																	{	/* Eval/eval.scm 562 */
																		obj_t BgL_arg2319z00_1381;

																		obj_t BgL_arg2320z00_1382;

																		{	/* Eval/eval.scm 562 */
																			obj_t BgL_arg2321z00_1383;

																			{	/* Eval/eval.scm 562 */
																				obj_t BgL_list2322z00_1384;

																				BgL_list2322z00_1384 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2321z00_1383 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BFALSE, BgL_list2322z00_1384);
																			}
																			BgL_arg2319z00_1381 =
																				MAKE_PAIR(BgL_fnamez00_1301,
																				BgL_arg2321z00_1383);
																		}
																		{	/* Eval/eval.scm 562 */
																			obj_t BgL_list2323z00_1385;

																			BgL_list2323z00_1385 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2320z00_1382 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_locz00_1302, BgL_list2323z00_1385);
																		}
																		BgL_arg2312z00_1374 =
																			MAKE_PAIR(BgL_arg2319z00_1381,
																			BgL_arg2320z00_1382);
																	}
																	{	/* Eval/eval.scm 563 */
																		obj_t BgL_arg2324z00_1386;

																		obj_t BgL_arg2325z00_1387;

																		BgL_arg2324z00_1386 =
																			BGl_symbol3275z00zz__evalz00;
																		{	/* Eval/eval.scm 563 */
																			obj_t BgL_arg2326z00_1388;

																			obj_t BgL_arg2327z00_1389;

																			{	/* Eval/eval.scm 563 */
																				obj_t BgL_arg2331z00_1393;

																				obj_t BgL_arg2332z00_1394;

																				BgL_arg2331z00_1393 =
																					BGl_symbol3277z00zz__evalz00;
																				{	/* Eval/eval.scm 563 */
																					obj_t BgL_list2333z00_1395;

																					BgL_list2333z00_1395 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2332z00_1394 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol3269z00zz__evalz00,
																						BgL_list2333z00_1395);
																				}
																				BgL_arg2326z00_1388 =
																					MAKE_PAIR(BgL_arg2331z00_1393,
																					BgL_arg2332z00_1394);
																			}
																			{	/* Eval/eval.scm 564 */
																				obj_t BgL_arg2334z00_1396;

																				obj_t BgL_arg2335z00_1397;

																				BgL_arg2334z00_1396 =
																					BGl_symbol3279z00zz__evalz00;
																				{	/* Eval/eval.scm 564 */
																					obj_t BgL_arg2336z00_1398;

																					obj_t BgL_arg2337z00_1399;

																					{	/* Eval/eval.scm 564 */
																						obj_t BgL_arg2341z00_1403;

																						obj_t BgL_arg2342z00_1404;

																						BgL_arg2341z00_1403 =
																							BGl_symbol3281z00zz__evalz00;
																						{	/* Eval/eval.scm 564 */
																							obj_t BgL_list2343z00_1405;

																							BgL_list2343z00_1405 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2342z00_1404 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol3269z00zz__evalz00,
																								BgL_list2343z00_1405);
																						}
																						BgL_arg2336z00_1398 =
																							MAKE_PAIR(BgL_arg2341z00_1403,
																							BgL_arg2342z00_1404);
																					}
																					{	/* Eval/eval.scm 565 */
																						obj_t BgL_arg2344z00_1406;

																						obj_t BgL_arg2345z00_1407;

																						{	/* Eval/eval.scm 565 */
																							obj_t BgL_arg2346z00_1408;

																							obj_t BgL_arg2347z00_1409;

																							BgL_arg2346z00_1408 =
																								BGl_symbol3200z00zz__evalz00;
																							{	/* Eval/eval.scm 565 */
																								obj_t BgL_list2348z00_1410;

																								{	/* Eval/eval.scm 565 */
																									obj_t BgL_arg2349z00_1411;

																									obj_t BgL_arg2350z00_1412;

																									BgL_arg2349z00_1411 =
																										BGl_symbol3283z00zz__evalz00;
																									BgL_arg2350z00_1412 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2348z00_1410 =
																										MAKE_PAIR
																										(BgL_arg2349z00_1411,
																										BgL_arg2350z00_1412);
																								}
																								BgL_arg2347z00_1409 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol3285z00zz__evalz00,
																									BgL_list2348z00_1410);
																							}
																							BgL_arg2344z00_1406 =
																								MAKE_PAIR(BgL_arg2346z00_1408,
																								BgL_arg2347z00_1409);
																						}
																						{	/* Eval/eval.scm 566 */
																							obj_t BgL_arg2351z00_1413;

																							obj_t BgL_arg2352z00_1414;

																							{	/* Eval/eval.scm 566 */
																								obj_t BgL_arg2356z00_1418;

																								obj_t BgL_arg2357z00_1419;

																								BgL_arg2356z00_1418 =
																									BGl_symbol3287z00zz__evalz00;
																								{	/* Eval/eval.scm 566 */
																									obj_t BgL_list2358z00_1420;

																									{	/* Eval/eval.scm 566 */
																										obj_t BgL_arg2359z00_1421;

																										obj_t BgL_arg2360z00_1422;

																										BgL_arg2359z00_1421 =
																											BGl_symbol3289z00zz__evalz00;
																										BgL_arg2360z00_1422 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2358z00_1420 =
																											MAKE_PAIR
																											(BgL_arg2359z00_1421,
																											BgL_arg2360z00_1422);
																									}
																									BgL_arg2357z00_1419 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_fnamez00_1301,
																										BgL_list2358z00_1420);
																								}
																								BgL_arg2351z00_1413 =
																									MAKE_PAIR(BgL_arg2356z00_1418,
																									BgL_arg2357z00_1419);
																							}
																							{	/* Eval/eval.scm 567 */
																								obj_t BgL_arg2361z00_1423;

																								obj_t BgL_arg2362z00_1424;

																								BgL_arg2361z00_1423 =
																									BGl_symbol3287z00zz__evalz00;
																								{	/* Eval/eval.scm 567 */
																									obj_t BgL_list2363z00_1425;

																									{	/* Eval/eval.scm 567 */
																										obj_t BgL_arg2364z00_1426;

																										obj_t BgL_arg2365z00_1427;

																										BgL_arg2364z00_1426 =
																											BGl_symbol3291z00zz__evalz00;
																										BgL_arg2365z00_1427 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2363z00_1425 =
																											MAKE_PAIR
																											(BgL_arg2364z00_1426,
																											BgL_arg2365z00_1427);
																									}
																									BgL_arg2362z00_1424 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_locz00_1302,
																										BgL_list2363z00_1425);
																								}
																								BgL_arg2352z00_1414 =
																									MAKE_PAIR(BgL_arg2361z00_1423,
																									BgL_arg2362z00_1424);
																							}
																							{	/* Eval/eval.scm 565 */
																								obj_t BgL_list2354z00_1416;

																								{	/* Eval/eval.scm 565 */
																									obj_t BgL_arg2355z00_1417;

																									BgL_arg2355z00_1417 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2354z00_1416 =
																										MAKE_PAIR
																										(BgL_arg2352z00_1414,
																										BgL_arg2355z00_1417);
																								}
																								BgL_arg2345z00_1407 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2351z00_1413,
																									BgL_list2354z00_1416);
																							}
																						}
																						BgL_arg2337z00_1399 =
																							MAKE_PAIR(BgL_arg2344z00_1406,
																							BgL_arg2345z00_1407);
																					}
																					{	/* Eval/eval.scm 564 */
																						obj_t BgL_list2339z00_1401;

																						{	/* Eval/eval.scm 564 */
																							obj_t BgL_arg2340z00_1402;

																							BgL_arg2340z00_1402 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2339z00_1401 =
																								MAKE_PAIR(BgL_arg2337z00_1399,
																								BgL_arg2340z00_1402);
																						}
																						BgL_arg2335z00_1397 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2336z00_1398,
																							BgL_list2339z00_1401);
																					}
																				}
																				BgL_arg2327z00_1389 =
																					MAKE_PAIR(BgL_arg2334z00_1396,
																					BgL_arg2335z00_1397);
																			}
																			{	/* Eval/eval.scm 563 */
																				obj_t BgL_list2329z00_1391;

																				{	/* Eval/eval.scm 563 */
																					obj_t BgL_arg2330z00_1392;

																					BgL_arg2330z00_1392 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2329z00_1391 =
																						MAKE_PAIR(BgL_arg2327z00_1389,
																						BgL_arg2330z00_1392);
																				}
																				BgL_arg2325z00_1387 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2326z00_1388,
																					BgL_list2329z00_1391);
																			}
																		}
																		BgL_arg2313z00_1375 =
																			MAKE_PAIR(BgL_arg2324z00_1386,
																			BgL_arg2325z00_1387);
																	}
																	{	/* Eval/eval.scm 568 */
																		obj_t BgL_arg2366z00_1428;

																		obj_t BgL_arg2367z00_1429;

																		BgL_arg2366z00_1428 =
																			BGl_symbol3293z00zz__evalz00;
																		{	/* Eval/eval.scm 568 */
																			obj_t BgL_arg2368z00_1430;

																			obj_t BgL_arg2369z00_1431;

																			{	/* Eval/eval.scm 568 */
																				obj_t BgL_arg2373z00_1435;

																				obj_t BgL_arg2374z00_1436;

																				{	/* Eval/eval.scm 568 */
																					obj_t BgL_arg2375z00_1437;

																					obj_t BgL_arg2376z00_1438;

																					BgL_arg2375z00_1437 =
																						BGl_symbol3295z00zz__evalz00;
																					{	/* Eval/eval.scm 568 */
																						obj_t BgL_arg2377z00_1439;

																						{	/* Eval/eval.scm 568 */
																							obj_t BgL_arg2380z00_1442;

																							obj_t BgL_arg2381z00_1443;

																							BgL_arg2380z00_1442 =
																								BGl_symbol3293z00zz__evalz00;
																							{	/* Eval/eval.scm 568 */
																								obj_t BgL_arg2382z00_1444;

																								obj_t BgL_arg2383z00_1445;

																								BgL_arg2382z00_1444 =
																									BGl_loopz00zz__evalz00
																									(BgL_locz00_1302,
																									BgL_namez00_1272,
																									BgL_fnamez00_1301,
																									BgL_argsz00_1273,
																									BGl_list3297z00zz__evalz00,
																									BNIL);
																								{	/* Eval/eval.scm 571 */
																									obj_t BgL_auxz00_4872;

																									{	/* Eval/eval.scm 571 */
																										bool_t BgL_testz00_4873;

																										if (PAIRP(BgL_bodyz00_1274))
																											{	/* Eval/eval.scm 571 */
																												BgL_testz00_4873 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Eval/eval.scm 571 */
																												BgL_testz00_4873 =
																													NULLP
																													(BgL_bodyz00_1274);
																											}
																										if (BgL_testz00_4873)
																											{	/* Eval/eval.scm 571 */
																												BgL_auxz00_4872 =
																													BgL_bodyz00_1274;
																											}
																										else
																											{
																												obj_t BgL_auxz00_4877;

																												BgL_auxz00_4877 =
																													BGl_typezd2errorzd2zz__errorz00
																													(BGl_string3193z00zz__evalz00,
																													BINT(((long) 22049)),
																													BGl_string3300z00zz__evalz00,
																													BGl_string3250z00zz__evalz00,
																													BgL_bodyz00_1274);
																												FAILURE(BgL_auxz00_4877,
																													BFALSE, BFALSE);
																									}}
																									BgL_arg2383z00_1445 =
																										BGl_expandzd2prognzd2zz__prognz00
																										(BgL_auxz00_4872);
																								}
																								{	/* Eval/eval.scm 568 */
																									obj_t BgL_list2385z00_1447;

																									{	/* Eval/eval.scm 568 */
																										obj_t BgL_arg2386z00_1448;

																										BgL_arg2386z00_1448 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2385z00_1447 =
																											MAKE_PAIR
																											(BgL_arg2383z00_1445,
																											BgL_arg2386z00_1448);
																									}
																									BgL_arg2381z00_1443 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2382z00_1444,
																										BgL_list2385z00_1447);
																							}}
																							BgL_arg2377z00_1439 =
																								MAKE_PAIR(BgL_arg2380z00_1442,
																								BgL_arg2381z00_1443);
																						}
																						{	/* Eval/eval.scm 568 */
																							obj_t BgL_list2379z00_1441;

																							BgL_list2379z00_1441 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2376z00_1438 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2377z00_1439,
																								BgL_list2379z00_1441);
																					}}
																					BgL_arg2373z00_1435 =
																						MAKE_PAIR(BgL_arg2375z00_1437,
																						BgL_arg2376z00_1438);
																				}
																				{	/* Eval/eval.scm 572 */
																					obj_t BgL_arg2387z00_1449;

																					{	/* Eval/eval.scm 572 */
																						obj_t BgL_arg2390z00_1452;

																						obj_t BgL_arg2391z00_1453;

																						BgL_arg2390z00_1452 =
																							BGl_symbol3301z00zz__evalz00;
																						{	/* Eval/eval.scm 572 */
																							obj_t BgL_arg2392z00_1454;

																							{	/* Eval/eval.scm 572 */
																								obj_t BgL_arg2395z00_1457;

																								obj_t BgL_arg2396z00_1458;

																								BgL_arg2395z00_1457 =
																									BGl_symbol3271z00zz__evalz00;
																								{	/* Eval/eval.scm 572 */
																									obj_t BgL_list2397z00_1459;

																									{	/* Eval/eval.scm 572 */
																										obj_t BgL_arg2398z00_1460;

																										obj_t BgL_arg2399z00_1461;

																										BgL_arg2398z00_1460 =
																											BGl_symbol3271z00zz__evalz00;
																										BgL_arg2399z00_1461 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2397z00_1459 =
																											MAKE_PAIR
																											(BgL_arg2398z00_1460,
																											BgL_arg2399z00_1461);
																									}
																									BgL_arg2396z00_1458 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol3295z00zz__evalz00,
																										BgL_list2397z00_1459);
																								}
																								BgL_arg2392z00_1454 =
																									MAKE_PAIR(BgL_arg2395z00_1457,
																									BgL_arg2396z00_1458);
																							}
																							{	/* Eval/eval.scm 572 */
																								obj_t BgL_list2394z00_1456;

																								BgL_list2394z00_1456 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2391z00_1453 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2392z00_1454,
																									BgL_list2394z00_1456);
																						}}
																						BgL_arg2387z00_1449 =
																							MAKE_PAIR(BgL_arg2390z00_1452,
																							BgL_arg2391z00_1453);
																					}
																					{	/* Eval/eval.scm 568 */
																						obj_t BgL_list2389z00_1451;

																						BgL_list2389z00_1451 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2374z00_1436 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2387z00_1449,
																							BgL_list2389z00_1451);
																				}}
																				BgL_arg2368z00_1430 =
																					MAKE_PAIR(BgL_arg2373z00_1435,
																					BgL_arg2374z00_1436);
																			}
																			{	/* Eval/eval.scm 573 */
																				obj_t BgL_arg2400z00_1462;

																				obj_t BgL_arg2401z00_1463;

																				BgL_arg2400z00_1462 =
																					BGl_symbol3303z00zz__evalz00;
																				{	/* Eval/eval.scm 573 */
																					obj_t BgL_list2402z00_1464;

																					{	/* Eval/eval.scm 573 */
																						obj_t BgL_arg2403z00_1465;

																						obj_t BgL_arg2404z00_1466;

																						BgL_arg2403z00_1465 =
																							BGl_symbol3269z00zz__evalz00;
																						BgL_arg2404z00_1466 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2402z00_1464 =
																							MAKE_PAIR(BgL_arg2403z00_1465,
																							BgL_arg2404z00_1466);
																					}
																					BgL_arg2401z00_1463 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BGl_symbol3301z00zz__evalz00,
																						BgL_list2402z00_1464);
																				}
																				BgL_arg2369z00_1431 =
																					MAKE_PAIR(BgL_arg2400z00_1462,
																					BgL_arg2401z00_1463);
																			}
																			{	/* Eval/eval.scm 568 */
																				obj_t BgL_list2371z00_1433;

																				{	/* Eval/eval.scm 568 */
																					obj_t BgL_arg2372z00_1434;

																					BgL_arg2372z00_1434 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2371z00_1433 =
																						MAKE_PAIR(BgL_arg2369z00_1431,
																						BgL_arg2372z00_1434);
																				}
																				BgL_arg2367z00_1429 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2368z00_1430,
																					BgL_list2371z00_1433);
																		}}
																		BgL_arg2314z00_1376 =
																			MAKE_PAIR(BgL_arg2366z00_1428,
																			BgL_arg2367z00_1429);
																	}
																	{	/* Eval/eval.scm 562 */
																		obj_t BgL_list2316z00_1378;

																		{	/* Eval/eval.scm 562 */
																			obj_t BgL_arg2317z00_1379;

																			{	/* Eval/eval.scm 562 */
																				obj_t BgL_arg2318z00_1380;

																				BgL_arg2318z00_1380 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2317z00_1379 =
																					MAKE_PAIR(BgL_arg2314z00_1376,
																					BgL_arg2318z00_1380);
																			}
																			BgL_list2316z00_1378 =
																				MAKE_PAIR(BgL_arg2313z00_1375,
																				BgL_arg2317z00_1379);
																		}
																		BgL_arg2311z00_1373 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2312z00_1374,
																			BgL_list2316z00_1378);
																}}
																BgL_arg2303z00_1365 =
																	MAKE_PAIR(BgL_arg2310z00_1372,
																	BgL_arg2311z00_1373);
															}
															{	/* Eval/eval.scm 561 */
																obj_t BgL_list2305z00_1367;

																{	/* Eval/eval.scm 561 */
																	obj_t BgL_arg2306z00_1368;

																	BgL_arg2306z00_1368 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2305z00_1367 =
																		MAKE_PAIR(BgL_arg2303z00_1365,
																		BgL_arg2306z00_1368);
																}
																BgL_arg2301z00_1363 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2302z00_1364, BgL_list2305z00_1367);
														}}
														BgL_evexpdz00_1304 =
															MAKE_PAIR(BgL_arg2300z00_1362,
															BgL_arg2301z00_1363);
													}
													{	/* Eval/eval.scm 561 */
														obj_t BgL_evexpdzf2loczf2_1305;

														BgL_evexpdzf2loczf2_1305 =
															BGl_evepairifyz00zz__prognz00(BgL_evexpdz00_1304,
															BgL_xz00_48);
														{	/* Eval/eval.scm 574 */
															obj_t BgL_expdzd2evalzd2_1306;

															{	/* Eval/eval.scm 81 */
																obj_t BgL_envz00_1361;

																{	/* Eval/eval.scm 81 */
																	obj_t BgL_mz00_2707;

																	BgL_mz00_2707 =
																		BGl_evalzd2modulezd2zz__evmodulez00();
																	if (BGl_evmodulezf3zf3zz__evmodulez00
																		(BgL_mz00_2707))
																		{	/* Eval/eval.scm 81 */
																			BgL_envz00_1361 = BgL_mz00_2707;
																		}
																	else
																		{	/* Eval/eval.scm 81 */
																			BgL_envz00_1361 =
																				BGl_symbol3191z00zz__evalz00;
																		}
																}
																{	/* Eval/eval.scm 81 */

																	{	/* Eval/eval.scm 81 */
																		obj_t BgL_evaluatez00_2711;

																		if (PROCEDUREP
																			(BGl_defaultzd2evaluatezd2zz__evalz00))
																			{	/* Eval/eval.scm 81 */
																				BgL_evaluatez00_2711 =
																					BGl_defaultzd2evaluatezd2zz__evalz00;
																			}
																		else
																			{	/* Eval/eval.scm 81 */
																				BgL_evaluatez00_2711 =
																					BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																			}
																		BgL_expdzd2evalzd2_1306 =
																			BGl_evalzf2expanderzf2zz__evalz00
																			(BgL_evexpdzf2loczf2_1305,
																			BgL_envz00_1361,
																			BGl_expandz12zd2envzc0zz__expandz00,
																			BgL_evaluatez00_2711);
																	}
																}
															}
															{	/* Eval/eval.scm 575 */

																{	/* Eval/eval.scm 576 */
																	obj_t BgL_zc3anonymousza32269ze3z83_3228;

																	BgL_zc3anonymousza32269ze3z83_3228 =
																		make_fx_procedure
																		(BGl_zc3anonymousza32269ze3z83zz__evalz00,
																		(int) (((long) 2)), (int) (((long) 1)));
																	PROCEDURE_SET
																		(BgL_zc3anonymousza32269ze3z83_3228,
																		(int) (((long) 0)),
																		BgL_expdzd2evalzd2_1306);
																	BgL_arg2268z00_1303 =
																		BgL_zc3anonymousza32269ze3z83_3228;
												}}}}}
												BGl_installzd2expanderzd2zz__macroz00(BgL_namez00_1272,
													BgL_arg2268z00_1303);
										}}
										return BUNSPEC;
									}
								else
									{	/* Eval/eval.scm 554 */
										obj_t BgL_cdrzd21596zd2_1287;

										BgL_cdrzd21596zd2_1287 = CDR(BgL_cdrzd21574zd2_1279);
										if (PAIRP(BgL_cdrzd21596zd2_1287))
											{	/* Eval/eval.scm 554 */
												obj_t BgL_carzd21600zd2_1289;

												BgL_carzd21600zd2_1289 = CAR(BgL_cdrzd21596zd2_1287);
												if (PAIRP(BgL_carzd21600zd2_1289))
													{	/* Eval/eval.scm 554 */
														obj_t BgL_cdrzd21605zd2_1291;

														BgL_cdrzd21605zd2_1291 =
															CDR(BgL_carzd21600zd2_1289);
														if (
															(CAR(BgL_carzd21600zd2_1289) ==
																BGl_symbol3267z00zz__evalz00))
															{	/* Eval/eval.scm 554 */
																if (PAIRP(BgL_cdrzd21605zd2_1291))
																	{	/* Eval/eval.scm 554 */
																		if (NULLP(CDR(BgL_cdrzd21596zd2_1287)))
																			{
																				obj_t BgL_bodyz00_4951;

																				obj_t BgL_argsz00_4949;

																				obj_t BgL_namez00_4947;

																				BgL_namez00_4947 =
																					CAR(BgL_cdrzd21574zd2_1279);
																				BgL_argsz00_4949 =
																					CAR(BgL_cdrzd21605zd2_1291);
																				BgL_bodyz00_4951 =
																					CDR(BgL_cdrzd21605zd2_1291);
																				BgL_bodyz00_1274 = BgL_bodyz00_4951;
																				BgL_argsz00_1273 = BgL_argsz00_4949;
																				BgL_namez00_1272 = BgL_namez00_4947;
																				goto BgL_tagzd21560zd2_1275;
																			}
																		else
																			{	/* Eval/eval.scm 554 */
																				return
																					BGl_evexpandzd2errorzd2zz__evalz00
																					(BGl_symbol3305z00zz__evalz00,
																					BGl_string3307z00zz__evalz00,
																					BgL_xz00_48);
																			}
																	}
																else
																	{	/* Eval/eval.scm 554 */
																		return
																			BGl_evexpandzd2errorzd2zz__evalz00
																			(BGl_symbol3305z00zz__evalz00,
																			BGl_string3307z00zz__evalz00,
																			BgL_xz00_48);
																	}
															}
														else
															{	/* Eval/eval.scm 554 */
																return
																	BGl_evexpandzd2errorzd2zz__evalz00
																	(BGl_symbol3305z00zz__evalz00,
																	BGl_string3307z00zz__evalz00, BgL_xz00_48);
															}
													}
												else
													{	/* Eval/eval.scm 554 */
														return
															BGl_evexpandzd2errorzd2zz__evalz00
															(BGl_symbol3305z00zz__evalz00,
															BGl_string3307z00zz__evalz00, BgL_xz00_48);
													}
											}
										else
											{	/* Eval/eval.scm 554 */
												return
													BGl_evexpandzd2errorzd2zz__evalz00
													(BGl_symbol3305z00zz__evalz00,
													BGl_string3307z00zz__evalz00, BgL_xz00_48);
											}
									}
							}
						else
							{	/* Eval/eval.scm 554 */
								return
									BGl_evexpandzd2errorzd2zz__evalz00
									(BGl_symbol3305z00zz__evalz00, BGl_string3307z00zz__evalz00,
									BgL_xz00_48);
							}
					}
				else
					{	/* Eval/eval.scm 554 */
						return
							BGl_evexpandzd2errorzd2zz__evalz00(BGl_symbol3305z00zz__evalz00,
							BGl_string3307z00zz__evalz00, BgL_xz00_48);
					}
			}
		}
	}



/* _expand-define-macro */
	obj_t BGl__expandzd2definezd2macroz00zz__evalz00(obj_t BgL_envz00_3229,
		obj_t BgL_xz00_3230, obj_t BgL_ez00_3231)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 553 */
			return
				BGl_expandzd2definezd2macroz00zz__evalz00(BgL_xz00_3230, BgL_ez00_3231);
		}
	}



/* <anonymous:2269> */
	obj_t BGl_zc3anonymousza32269ze3z83zz__evalz00(obj_t BgL_envz00_3232,
		obj_t BgL_xz00_3234, obj_t BgL_ez00_3235)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 576 */
			{	/* Eval/eval.scm 577 */
				obj_t BgL_expdzd2evalzd2_3233;

				BgL_expdzd2evalzd2_3233 =
					PROCEDURE_REF(BgL_envz00_3232, (int) (((long) 0)));
				{
					obj_t BgL_xz00_1307;

					obj_t BgL_ez00_1308;

					BgL_xz00_1307 = BgL_xz00_3234;
					BgL_ez00_1308 = BgL_ez00_3235;
					return
						BGl_zc3exitza32270ze3z83zz__evalz00(BgL_ez00_1308, BgL_xz00_1307,
						BgL_expdzd2evalzd2_3233);
				}
			}
		}
	}



/* <exit:2270> */
	obj_t BGl_zc3exitza32270ze3z83zz__evalz00(obj_t BgL_ez00_3292,
		obj_t BgL_xz00_3291, obj_t BgL_expdzd2evalzd2_3290)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 577 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1886z00_1311;

			if (SET_EXIT(BgL_an_exit1886z00_1311))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1886z00_1311 = (void *) jmpbuf;
					{	/* Eval/eval.scm 577 */

						PUSH_EXIT(BgL_an_exit1886z00_1311, ((long) 1));
						{	/* Eval/eval.scm 577 */
							obj_t BgL_an_exitd1887z00_1312;

							BgL_an_exitd1887z00_1312 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 577 */
								obj_t BgL_res1889z00_1315;

								{	/* Eval/eval.scm 577 */
									obj_t BgL_err1884z00_1316;

									obj_t BgL_ohs1883z00_1317;

									BgL_err1884z00_1316 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1883z00_1317 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 577 */
										obj_t BgL_val1890z00_1318;

										BgL_val1890z00_1318 =
											BGl_zc3exitza32294ze3z83zz__evalz00(BgL_ez00_3292,
											BgL_xz00_3291, BgL_expdzd2evalzd2_3290,
											BgL_ohs1883z00_1317, BgL_an_exitd1887z00_1312,
											BgL_err1884z00_1316);
										BGL_ERROR_HANDLER_SET(BgL_ohs1883z00_1317);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1884z00_1316)))
											{	/* Eval/eval.scm 579 */
												obj_t BgL_arg2272z00_1320;

												{	/* Eval/eval.scm 579 */
													obj_t BgL_ez00_1321;

													BgL_ez00_1321 = CDR(BgL_err1884z00_1316);
													{	/* Eval/eval.scm 579 */
														obj_t BgL_nez00_1322;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1321,
																BGl_z62errorz62zz__objectz00))
															{	/* Eval/eval.scm 580 */
																obj_t BgL_objz00_1324;

																{
																	BgL_z62errorz62_bglt BgL_auxz00_4978;

																	BgL_auxz00_4978 =
																		(BgL_z62errorz62_bglt) (BgL_ez00_1321);
																	BgL_objz00_1324 =
																		(((BgL_z62errorz62_bglt)
																			CREF(BgL_auxz00_4978))->BgL_objz00);
																}
																if (EXTENDED_PAIRP(BgL_objz00_1324))
																	{	/* Eval/eval.scm 582 */
																		obj_t BgL_ezd21620zd2_1330;

																		{	/* Eval/eval.scm 582 */
																			obj_t BgL_objz00_2724;

																			if (EXTENDED_PAIRP(BgL_objz00_1324))
																				{	/* Eval/eval.scm 582 */
																					BgL_objz00_2724 = BgL_objz00_1324;
																				}
																			else
																				{
																					obj_t BgL_auxz00_4985;

																					BgL_auxz00_4985 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3193z00zz__evalz00,
																						BINT(((long) 22359)),
																						BGl_string3308z00zz__evalz00,
																						BGl_string3255z00zz__evalz00,
																						BgL_objz00_1324);
																					FAILURE(BgL_auxz00_4985, BFALSE,
																						BFALSE);
																				}
																			BgL_ezd21620zd2_1330 =
																				CER(BgL_objz00_2724);
																		}
																		if (PAIRP(BgL_ezd21620zd2_1330))
																			{	/* Eval/eval.scm 582 */
																				obj_t BgL_cdrzd21626zd2_1332;

																				BgL_cdrzd21626zd2_1332 =
																					CDR(BgL_ezd21620zd2_1330);
																				if (
																					(CAR(BgL_ezd21620zd2_1330) ==
																						BGl_symbol3200z00zz__evalz00))
																					{	/* Eval/eval.scm 582 */
																						if (PAIRP(BgL_cdrzd21626zd2_1332))
																							{	/* Eval/eval.scm 582 */
																								obj_t BgL_cdrzd21630zd2_1335;

																								BgL_cdrzd21630zd2_1335 =
																									CDR(BgL_cdrzd21626zd2_1332);
																								if (PAIRP
																									(BgL_cdrzd21630zd2_1335))
																									{	/* Eval/eval.scm 582 */
																										if (NULLP(CDR
																												(BgL_cdrzd21630zd2_1335)))
																											{	/* Eval/eval.scm 582 */
																												obj_t
																													BgL_arg2280z00_1338;
																												obj_t
																													BgL_arg2281z00_1339;
																												BgL_arg2280z00_1338 =
																													CAR
																													(BgL_cdrzd21626zd2_1332);
																												BgL_arg2281z00_1339 =
																													CAR
																													(BgL_cdrzd21630zd2_1335);
																												{	/* Eval/eval.scm 582 */
																													BgL_z62errorz62_bglt
																														BgL_duplicated1893z00_2737;
																													BgL_duplicated1893z00_2737
																														=
																														(BgL_z62errorz62_bglt)
																														(BgL_ez00_1321);
																													{	/* Eval/eval.scm 582 */
																														BgL_z62errorz62_bglt
																															BgL_new1894z00_2738;
																														{	/* Eval/eval.scm 582 */
																															obj_t
																																BgL_arg2285z00_2739;
																															obj_t
																																BgL_arg2286z00_2740;
																															obj_t
																																BgL_arg2289z00_2741;
																															obj_t
																																BgL_arg2290z00_2742;
																															{
																																BgL_z62exceptionz62_bglt
																																	BgL_auxz00_5007;
																																BgL_auxz00_5007
																																	=
																																	(BgL_z62exceptionz62_bglt)
																																	(BgL_duplicated1893z00_2737);
																																BgL_arg2285z00_2739
																																	=
																																	(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_5007))->BgL_stackz00);
																															}
																															BgL_arg2286z00_2740
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1893z00_2737))->BgL_procz00);
																															BgL_arg2289z00_2741
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1893z00_2737))->BgL_msgz00);
																															BgL_arg2290z00_2742
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1893z00_2737))->BgL_objz00);
																															BgL_new1894z00_2738
																																=
																																BGl_makezd2z62errorzb0zz__objectz00
																																(BgL_arg2280z00_1338,
																																BgL_arg2281z00_1339,
																																BgL_arg2285z00_2739,
																																BgL_arg2286z00_2740,
																																BgL_arg2289z00_2741,
																																BgL_arg2290z00_2742);
																														}
																														{	/* Eval/eval.scm 582 */

																															BgL_nez00_1322 =
																																(obj_t)
																																(BgL_new1894z00_2738);
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/eval.scm 582 */
																												BgL_nez00_1322 =
																													BgL_ez00_1321;
																											}
																									}
																								else
																									{	/* Eval/eval.scm 582 */
																										BgL_nez00_1322 =
																											BgL_ez00_1321;
																									}
																							}
																						else
																							{	/* Eval/eval.scm 582 */
																								BgL_nez00_1322 = BgL_ez00_1321;
																							}
																					}
																				else
																					{	/* Eval/eval.scm 582 */
																						BgL_nez00_1322 = BgL_ez00_1321;
																					}
																			}
																		else
																			{	/* Eval/eval.scm 582 */
																				BgL_nez00_1322 = BgL_ez00_1321;
																			}
																	}
																else
																	{	/* Eval/eval.scm 581 */
																		BgL_nez00_1322 = BgL_ez00_1321;
																	}
															}
														else
															{	/* Eval/eval.scm 579 */
																BgL_nez00_1322 = BgL_ez00_1321;
															}
														BgL_arg2272z00_1320 =
															BGl_raisez00zz__errorz00(BgL_ez00_1321);
													}
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1887z00_1312, BgL_arg2272z00_1320);
											}
										else
											{	/* Eval/eval.scm 577 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1890z00_1318)))
											{	/* Eval/eval.scm 577 */
												obj_t BgL_arg2292z00_1350;

												obj_t BgL_arg2293z00_1351;

												{	/* Eval/eval.scm 577 */
													obj_t BgL_pairz00_2758;

													if (PAIRP(BgL_val1890z00_1318))
														{	/* Eval/eval.scm 577 */
															BgL_pairz00_2758 = BgL_val1890z00_1318;
														}
													else
														{
															obj_t BgL_auxz00_5022;

															BgL_auxz00_5022 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 22207)),
																BGl_string3308z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1890z00_1318);
															FAILURE(BgL_auxz00_5022, BFALSE, BFALSE);
														}
													BgL_arg2292z00_1350 = CAR(BgL_pairz00_2758);
												}
												BgL_arg2293z00_1351 = CDR(BgL_val1890z00_1318);
												BgL_res1889z00_1315 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2292z00_1350, BgL_arg2293z00_1351);
											}
										else
											{	/* Eval/eval.scm 577 */
												BgL_res1889z00_1315 = BgL_val1890z00_1318;
											}
									}
								}
								POP_EXIT();
								return BgL_res1889z00_1315;
							}
						}
					}
				}
		}
	}



/* <exit:2294> */
	obj_t BGl_zc3exitza32294ze3z83zz__evalz00(obj_t BgL_ez00_3298,
		obj_t BgL_xz00_3297, obj_t BgL_expdzd2evalzd2_3296,
		obj_t BgL_ohs1883z00_3295, obj_t BgL_an_exitd1887z00_3294,
		obj_t BgL_err1884z00_3293)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 577 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1891z00_1353;

			if (SET_EXIT(BgL_an_exit1891z00_1353))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1891z00_1353 = (void *) jmpbuf;
					{	/* Eval/eval.scm 577 */

						PUSH_EXIT(BgL_an_exit1891z00_1353, ((long) 0));
						{	/* Eval/eval.scm 577 */
							obj_t BgL_val1892z00_1354;

							{	/* Eval/eval.scm 577 */
								obj_t BgL_arg2295z00_1355;

								{	/* Eval/eval.scm 577 */
									obj_t BgL_zc3anonymousza32297ze3z83_3227;

									BgL_zc3anonymousza32297ze3z83_3227 =
										make_fx_procedure(BGl_zc3anonymousza32297ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32297ze3z83_3227,
										(int) (((long) 0)), BgL_err1884z00_3293);
									PROCEDURE_SET(BgL_zc3anonymousza32297ze3z83_3227,
										(int) (((long) 1)), BgL_an_exitd1887z00_3294);
									BgL_arg2295z00_1355 =
										MAKE_PAIR(BgL_zc3anonymousza32297ze3z83_3227,
										BgL_ohs1883z00_3295);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2295z00_1355);
								BUNSPEC;
							}
							{	/* Eval/eval.scm 592 */
								obj_t BgL_auxz00_5043;

								{	/* Eval/eval.scm 592 */
									bool_t BgL_test3132z00_3498;

									BgL_test3132z00_3498 = PROCEDUREP(BgL_expdzd2evalzd2_3296);
									if (BgL_test3132z00_3498)
										{	/* Eval/eval.scm 592 */
											BgL_auxz00_5043 = BgL_expdzd2evalzd2_3296;
										}
									else
										{
											obj_t BgL_auxz00_5046;

											BgL_auxz00_5046 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3193z00zz__evalz00, BINT(((long) 22548)),
												BGl_string3309z00zz__evalz00,
												BGl_string3195z00zz__evalz00, BgL_expdzd2evalzd2_3296);
											FAILURE(BgL_auxz00_5046, BFALSE, BFALSE);
								}}
								BgL_val1892z00_1354 =
									PROCEDURE_ENTRY(BgL_auxz00_5043) (BgL_expdzd2evalzd2_3296,
									BgL_xz00_3297, BgL_ez00_3298, BEOA);
							}
							POP_EXIT();
							return BgL_val1892z00_1354;
						}
					}
				}
		}
	}



/* <anonymous:2297> */
	obj_t BGl_zc3anonymousza32297ze3z83zz__evalz00(obj_t BgL_envz00_3236,
		obj_t BgL_ez00_3239)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 577 */
			{	/* Eval/eval.scm 577 */
				obj_t BgL_err1884z00_3237;

				obj_t BgL_an_exitd1887z00_3238;

				BgL_err1884z00_3237 =
					PROCEDURE_REF(BgL_envz00_3236, (int) (((long) 0)));
				BgL_an_exitd1887z00_3238 =
					PROCEDURE_REF(BgL_envz00_3236, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1357;

					BgL_ez00_1357 = BgL_ez00_3239;
					{	/* Eval/eval.scm 577 */
						obj_t BgL_pairz00_2714;

						if (PAIRP(BgL_err1884z00_3237))
							{	/* Eval/eval.scm 577 */
								BgL_pairz00_2714 = BgL_err1884z00_3237;
							}
						else
							{
								obj_t BgL_auxz00_5057;

								BgL_auxz00_5057 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 22207)), BGl_string3310z00zz__evalz00,
									BGl_string3198z00zz__evalz00, BgL_err1884z00_3237);
								FAILURE(BgL_auxz00_5057, BFALSE, BFALSE);
							}
						SET_CAR(BgL_pairz00_2714, BTRUE);
					}
					SET_CDR(BgL_err1884z00_3237, BgL_ez00_1357);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1887z00_3238,
						BgL_ez00_1357);
				}
			}
		}
	}



/* expand-define-hygiene-macro */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t BgL_xz00_50,
		obj_t BgL_ez00_51)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 600 */
			{
				obj_t BgL_namez00_1469;

				obj_t BgL_argsz00_1470;

				obj_t BgL_bodyz00_1471;

				if (PAIRP(BgL_xz00_50))
					{	/* Eval/eval.scm 601 */
						obj_t BgL_cdrzd21646zd2_1476;

						BgL_cdrzd21646zd2_1476 = CDR(BgL_xz00_50);
						if (PAIRP(BgL_cdrzd21646zd2_1476))
							{	/* Eval/eval.scm 601 */
								obj_t BgL_carzd21650zd2_1478;

								BgL_carzd21650zd2_1478 = CAR(BgL_cdrzd21646zd2_1476);
								if (PAIRP(BgL_carzd21650zd2_1478))
									{	/* Eval/eval.scm 601 */
										obj_t BgL_cdrzd21655zd2_1480;

										BgL_cdrzd21655zd2_1480 = CDR(BgL_carzd21650zd2_1478);
										if (
											(CAR(BgL_carzd21650zd2_1478) ==
												BGl_symbol3318z00zz__evalz00))
											{	/* Eval/eval.scm 601 */
												if (PAIRP(BgL_cdrzd21655zd2_1480))
													{	/* Eval/eval.scm 601 */
														obj_t BgL_carzd21658zd2_1483;

														BgL_carzd21658zd2_1483 =
															CAR(BgL_cdrzd21655zd2_1480);
														if (PAIRP(BgL_carzd21658zd2_1483))
															{	/* Eval/eval.scm 601 */
																if (NULLP(CDR(BgL_cdrzd21655zd2_1480)))
																	{	/* Eval/eval.scm 601 */
																		BgL_namez00_1469 =
																			CAR(BgL_carzd21658zd2_1483);
																		BgL_argsz00_1470 =
																			CDR(BgL_carzd21658zd2_1483);
																		BgL_bodyz00_1471 =
																			CDR(BgL_cdrzd21646zd2_1476);
																		{	/* Eval/eval.scm 603 */
																			obj_t BgL_bodyz00_1492;

																			obj_t BgL_fnamez00_1493;

																			obj_t BgL_locz00_1494;

																			if (NULLP(BgL_bodyz00_1471))
																				{	/* Eval/eval.scm 603 */
																					BgL_bodyz00_1492 = BNIL;
																				}
																			else
																				{	/* Eval/eval.scm 603 */
																					obj_t BgL_head1944z00_1636;

																					{	/* Eval/eval.scm 603 */
																						obj_t BgL_arg2542z00_1650;

																						{	/* Eval/eval.scm 603 */
																							obj_t BgL_pairz00_2777;

																							{	/* Eval/eval.scm 603 */
																								obj_t BgL_pairz00_2776;

																								if (PAIRP(BgL_bodyz00_1471))
																									{	/* Eval/eval.scm 603 */
																										BgL_pairz00_2776 =
																											BgL_bodyz00_1471;
																									}
																								else
																									{
																										obj_t BgL_auxz00_5088;

																										BgL_auxz00_5088 =
																											BGl_typezd2errorzd2zz__errorz00
																											(BGl_string3193z00zz__evalz00,
																											BINT(((long) 23022)),
																											BGl_string3311z00zz__evalz00,
																											BGl_string3198z00zz__evalz00,
																											BgL_bodyz00_1471);
																										FAILURE(BgL_auxz00_5088,
																											BFALSE, BFALSE);
																									}
																								{	/* Eval/eval.scm 603 */
																									obj_t BgL_aux3139z00_3505;

																									BgL_aux3139z00_3505 =
																										CAR(BgL_pairz00_2776);
																									if (PAIRP
																										(BgL_aux3139z00_3505))
																										{	/* Eval/eval.scm 603 */
																											BgL_pairz00_2777 =
																												BgL_aux3139z00_3505;
																										}
																									else
																										{
																											obj_t BgL_auxz00_5095;

																											BgL_auxz00_5095 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3193z00zz__evalz00,
																												BINT(((long) 23022)),
																												BGl_string3311z00zz__evalz00,
																												BGl_string3198z00zz__evalz00,
																												BgL_aux3139z00_3505);
																											FAILURE(BgL_auxz00_5095,
																												BFALSE, BFALSE);
																							}}}
																							{	/* Eval/eval.scm 603 */
																								obj_t BgL_pairz00_2780;

																								{	/* Eval/eval.scm 603 */
																									obj_t BgL_aux3141z00_3507;

																									BgL_aux3141z00_3507 =
																										CDR(BgL_pairz00_2777);
																									if (PAIRP
																										(BgL_aux3141z00_3507))
																										{	/* Eval/eval.scm 603 */
																											BgL_pairz00_2780 =
																												BgL_aux3141z00_3507;
																										}
																									else
																										{
																											obj_t BgL_auxz00_5102;

																											BgL_auxz00_5102 =
																												BGl_typezd2errorzd2zz__errorz00
																												(BGl_string3193z00zz__evalz00,
																												BINT(((long) 23022)),
																												BGl_string3311z00zz__evalz00,
																												BGl_string3198z00zz__evalz00,
																												BgL_aux3141z00_3507);
																											FAILURE(BgL_auxz00_5102,
																												BFALSE, BFALSE);
																								}}
																								BgL_arg2542z00_1650 =
																									CAR(BgL_pairz00_2780);
																						}}
																						BgL_head1944z00_1636 =
																							MAKE_PAIR(BgL_arg2542z00_1650,
																							BNIL);
																					}
																					{	/* Eval/eval.scm 603 */
																						obj_t BgL_g1947z00_1637;

																						{	/* Eval/eval.scm 603 */
																							obj_t BgL_pairz00_2783;

																							if (PAIRP(BgL_bodyz00_1471))
																								{	/* Eval/eval.scm 603 */
																									BgL_pairz00_2783 =
																										BgL_bodyz00_1471;
																								}
																							else
																								{
																									obj_t BgL_auxz00_5110;

																									BgL_auxz00_5110 =
																										BGl_typezd2errorzd2zz__errorz00
																										(BGl_string3193z00zz__evalz00,
																										BINT(((long) 23022)),
																										BGl_string3311z00zz__evalz00,
																										BGl_string3198z00zz__evalz00,
																										BgL_bodyz00_1471);
																									FAILURE(BgL_auxz00_5110,
																										BFALSE, BFALSE);
																								}
																							BgL_g1947z00_1637 =
																								CDR(BgL_pairz00_2783);
																						}
																						{
																							obj_t BgL_l1942z00_1639;

																							obj_t BgL_tail1945z00_1640;

																							BgL_l1942z00_1639 =
																								BgL_g1947z00_1637;
																							BgL_tail1945z00_1640 =
																								BgL_head1944z00_1636;
																						BgL_zc3anonymousza32534ze3z83_1641:
																							if (PAIRP(BgL_l1942z00_1639))
																								{	/* Eval/eval.scm 603 */
																									obj_t BgL_newtail1946z00_1643;

																									{	/* Eval/eval.scm 603 */
																										obj_t BgL_arg2537z00_1645;

																										{	/* Eval/eval.scm 603 */
																											obj_t BgL_pairz00_2786;

																											{	/* Eval/eval.scm 603 */
																												obj_t
																													BgL_aux3145z00_3511;
																												BgL_aux3145z00_3511 =
																													CAR
																													(BgL_l1942z00_1639);
																												if (PAIRP
																													(BgL_aux3145z00_3511))
																													{	/* Eval/eval.scm 603 */
																														BgL_pairz00_2786 =
																															BgL_aux3145z00_3511;
																													}
																												else
																													{
																														obj_t
																															BgL_auxz00_5120;
																														BgL_auxz00_5120 =
																															BGl_typezd2errorzd2zz__errorz00
																															(BGl_string3193z00zz__evalz00,
																															BINT(((long)
																																	23022)),
																															BGl_string3312z00zz__evalz00,
																															BGl_string3198z00zz__evalz00,
																															BgL_aux3145z00_3511);
																														FAILURE
																															(BgL_auxz00_5120,
																															BFALSE, BFALSE);
																											}}
																											{	/* Eval/eval.scm 603 */
																												obj_t BgL_pairz00_2789;

																												{	/* Eval/eval.scm 603 */
																													obj_t
																														BgL_aux3147z00_3513;
																													BgL_aux3147z00_3513 =
																														CDR
																														(BgL_pairz00_2786);
																													if (PAIRP
																														(BgL_aux3147z00_3513))
																														{	/* Eval/eval.scm 603 */
																															BgL_pairz00_2789 =
																																BgL_aux3147z00_3513;
																														}
																													else
																														{
																															obj_t
																																BgL_auxz00_5127;
																															BgL_auxz00_5127 =
																																BGl_typezd2errorzd2zz__errorz00
																																(BGl_string3193z00zz__evalz00,
																																BINT(((long)
																																		23022)),
																																BGl_string3312z00zz__evalz00,
																																BGl_string3198z00zz__evalz00,
																																BgL_aux3147z00_3513);
																															FAILURE
																																(BgL_auxz00_5127,
																																BFALSE, BFALSE);
																												}}
																												BgL_arg2537z00_1645 =
																													CAR(BgL_pairz00_2789);
																										}}
																										BgL_newtail1946z00_1643 =
																											MAKE_PAIR
																											(BgL_arg2537z00_1645,
																											BNIL);
																									}
																									SET_CDR(BgL_tail1945z00_1640,
																										BgL_newtail1946z00_1643);
																									{
																										obj_t BgL_tail1945z00_5136;

																										obj_t BgL_l1942z00_5134;

																										BgL_l1942z00_5134 =
																											CDR(BgL_l1942z00_1639);
																										BgL_tail1945z00_5136 =
																											BgL_newtail1946z00_1643;
																										BgL_tail1945z00_1640 =
																											BgL_tail1945z00_5136;
																										BgL_l1942z00_1639 =
																											BgL_l1942z00_5134;
																										goto
																											BgL_zc3anonymousza32534ze3z83_1641;
																									}
																								}
																							else
																								{	/* Eval/eval.scm 603 */
																									if (NULLP(BgL_l1942z00_1639))
																										{	/* Eval/eval.scm 603 */
																											BgL_bodyz00_1492 =
																												BgL_head1944z00_1636;
																										}
																									else
																										{	/* Eval/eval.scm 603 */
																											BgL_bodyz00_1492 =
																												BGl_errorz00zz__errorz00
																												(BGl_string3313z00zz__evalz00,
																												BGl_string3314z00zz__evalz00,
																												BgL_l1942z00_1639);
																										}
																								}
																						}
																					}
																				}
																			{	/* Eval/eval.scm 604 */

																				{	/* Eval/eval.scm 604 */

																					BgL_fnamez00_1493 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																				}
																			}
																			{	/* Eval/eval.scm 605 */

																				{	/* Eval/eval.scm 605 */

																					BgL_locz00_1494 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																				}
																			}
																			{	/* Eval/eval.scm 608 */
																				obj_t BgL_arg2418z00_1495;

																				{	/* Eval/eval.scm 608 */
																					obj_t BgL_expdzd2lamzd2_1496;

																					{	/* Eval/eval.scm 608 */
																						obj_t BgL_arg2447z00_1554;

																						obj_t BgL_arg2448z00_1555;

																						BgL_arg2447z00_1554 =
																							BGl_symbol3267z00zz__evalz00;
																						{	/* Eval/eval.scm 608 */
																							obj_t BgL_arg2449z00_1556;

																							obj_t BgL_arg2450z00_1557;

																							{	/* Eval/eval.scm 608 */
																								obj_t BgL_arg2454z00_1561;

																								obj_t BgL_arg2455z00_1562;

																								BgL_arg2454z00_1561 =
																									BGl_symbol3315z00zz__evalz00;
																								{	/* Eval/eval.scm 608 */
																									obj_t BgL_list2456z00_1563;

																									BgL_list2456z00_1563 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2455z00_1562 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol3271z00zz__evalz00,
																										BgL_list2456z00_1563);
																								}
																								BgL_arg2449z00_1556 =
																									MAKE_PAIR(BgL_arg2454z00_1561,
																									BgL_arg2455z00_1562);
																							}
																							{	/* Eval/eval.scm 609 */
																								obj_t BgL_arg2457z00_1564;

																								obj_t BgL_arg2458z00_1565;

																								BgL_arg2457z00_1564 =
																									BGl_symbol3273z00zz__evalz00;
																								{	/* Eval/eval.scm 609 */
																									obj_t BgL_arg2459z00_1566;

																									obj_t BgL_arg2460z00_1567;

																									obj_t BgL_arg2461z00_1568;

																									{	/* Eval/eval.scm 609 */
																										obj_t BgL_arg2469z00_1573;

																										obj_t BgL_arg2470z00_1574;

																										{	/* Eval/eval.scm 609 */
																											obj_t BgL_arg2471z00_1575;

																											{	/* Eval/eval.scm 609 */
																												obj_t
																													BgL_list2472z00_1576;
																												BgL_list2472z00_1576 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2471z00_1575 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BFALSE,
																													BgL_list2472z00_1576);
																											}
																											BgL_arg2469z00_1573 =
																												MAKE_PAIR
																												(BgL_fnamez00_1493,
																												BgL_arg2471z00_1575);
																										}
																										{	/* Eval/eval.scm 609 */
																											obj_t
																												BgL_list2473z00_1577;
																											BgL_list2473z00_1577 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2470z00_1574 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_locz00_1494,
																												BgL_list2473z00_1577);
																										}
																										BgL_arg2459z00_1566 =
																											MAKE_PAIR
																											(BgL_arg2469z00_1573,
																											BgL_arg2470z00_1574);
																									}
																									{	/* Eval/eval.scm 610 */
																										obj_t BgL_arg2476z00_1578;

																										obj_t BgL_arg2477z00_1579;

																										BgL_arg2476z00_1578 =
																											BGl_symbol3275z00zz__evalz00;
																										{	/* Eval/eval.scm 610 */
																											obj_t BgL_arg2478z00_1580;

																											obj_t BgL_arg2479z00_1581;

																											{	/* Eval/eval.scm 610 */
																												obj_t
																													BgL_arg2483z00_1585;
																												obj_t
																													BgL_arg2484z00_1586;
																												BgL_arg2483z00_1585 =
																													BGl_symbol3277z00zz__evalz00;
																												{	/* Eval/eval.scm 610 */
																													obj_t
																														BgL_list2485z00_1587;
																													BgL_list2485z00_1587 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2484z00_1586 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BGl_symbol3315z00zz__evalz00,
																														BgL_list2485z00_1587);
																												}
																												BgL_arg2478z00_1580 =
																													MAKE_PAIR
																													(BgL_arg2483z00_1585,
																													BgL_arg2484z00_1586);
																											}
																											{	/* Eval/eval.scm 611 */
																												obj_t
																													BgL_arg2486z00_1588;
																												obj_t
																													BgL_arg2487z00_1589;
																												BgL_arg2486z00_1588 =
																													BGl_symbol3279z00zz__evalz00;
																												{	/* Eval/eval.scm 611 */
																													obj_t
																														BgL_arg2488z00_1590;
																													obj_t
																														BgL_arg2489z00_1591;
																													{	/* Eval/eval.scm 611 */
																														obj_t
																															BgL_arg2494z00_1595;
																														obj_t
																															BgL_arg2495z00_1596;
																														BgL_arg2494z00_1595
																															=
																															BGl_symbol3281z00zz__evalz00;
																														{	/* Eval/eval.scm 611 */
																															obj_t
																																BgL_list2496z00_1597;
																															BgL_list2496z00_1597
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2495z00_1596
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BGl_symbol3315z00zz__evalz00,
																																BgL_list2496z00_1597);
																														}
																														BgL_arg2488z00_1590
																															=
																															MAKE_PAIR
																															(BgL_arg2494z00_1595,
																															BgL_arg2495z00_1596);
																													}
																													{	/* Eval/eval.scm 612 */
																														obj_t
																															BgL_arg2497z00_1598;
																														obj_t
																															BgL_arg2498z00_1599;
																														{	/* Eval/eval.scm 612 */
																															obj_t
																																BgL_arg2499z00_1600;
																															obj_t
																																BgL_arg2500z00_1601;
																															BgL_arg2499z00_1600
																																=
																																BGl_symbol3200z00zz__evalz00;
																															{	/* Eval/eval.scm 612 */
																																obj_t
																																	BgL_list2501z00_1602;
																																{	/* Eval/eval.scm 612 */
																																	obj_t
																																		BgL_arg2502z00_1603;
																																	obj_t
																																		BgL_arg2503z00_1604;
																																	BgL_arg2502z00_1603
																																		=
																																		BGl_symbol3283z00zz__evalz00;
																																	BgL_arg2503z00_1604
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2501z00_1602
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2502z00_1603,
																																		BgL_arg2503z00_1604);
																																}
																																BgL_arg2500z00_1601
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_symbol3285z00zz__evalz00,
																																	BgL_list2501z00_1602);
																															}
																															BgL_arg2497z00_1598
																																=
																																MAKE_PAIR
																																(BgL_arg2499z00_1600,
																																BgL_arg2500z00_1601);
																														}
																														{	/* Eval/eval.scm 613 */
																															obj_t
																																BgL_arg2504z00_1605;
																															obj_t
																																BgL_arg2505z00_1606;
																															{	/* Eval/eval.scm 613 */
																																obj_t
																																	BgL_arg2509z00_1610;
																																obj_t
																																	BgL_arg2510z00_1611;
																																BgL_arg2509z00_1610
																																	=
																																	BGl_symbol3287z00zz__evalz00;
																																{	/* Eval/eval.scm 613 */
																																	obj_t
																																		BgL_list2511z00_1612;
																																	{	/* Eval/eval.scm 613 */
																																		obj_t
																																			BgL_arg2512z00_1613;
																																		obj_t
																																			BgL_arg2513z00_1614;
																																		BgL_arg2512z00_1613
																																			=
																																			BGl_symbol3289z00zz__evalz00;
																																		BgL_arg2513z00_1614
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2511z00_1612
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2512z00_1613,
																																			BgL_arg2513z00_1614);
																																	}
																																	BgL_arg2510z00_1611
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_fnamez00_1493,
																																		BgL_list2511z00_1612);
																																}
																																BgL_arg2504z00_1605
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2509z00_1610,
																																	BgL_arg2510z00_1611);
																															}
																															{	/* Eval/eval.scm 614 */
																																obj_t
																																	BgL_arg2514z00_1615;
																																obj_t
																																	BgL_arg2515z00_1616;
																																BgL_arg2514z00_1615
																																	=
																																	BGl_symbol3287z00zz__evalz00;
																																{	/* Eval/eval.scm 614 */
																																	obj_t
																																		BgL_list2516z00_1617;
																																	{	/* Eval/eval.scm 614 */
																																		obj_t
																																			BgL_arg2517z00_1618;
																																		obj_t
																																			BgL_arg2518z00_1619;
																																		BgL_arg2517z00_1618
																																			=
																																			BGl_symbol3291z00zz__evalz00;
																																		BgL_arg2518z00_1619
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2516z00_1617
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2517z00_1618,
																																			BgL_arg2518z00_1619);
																																	}
																																	BgL_arg2515z00_1616
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_locz00_1494,
																																		BgL_list2516z00_1617);
																																}
																																BgL_arg2505z00_1606
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2514z00_1615,
																																	BgL_arg2515z00_1616);
																															}
																															{	/* Eval/eval.scm 612 */
																																obj_t
																																	BgL_list2507z00_1608;
																																{	/* Eval/eval.scm 612 */
																																	obj_t
																																		BgL_arg2508z00_1609;
																																	BgL_arg2508z00_1609
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2507z00_1608
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2505z00_1606,
																																		BgL_arg2508z00_1609);
																																}
																																BgL_arg2498z00_1599
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2504z00_1605,
																																	BgL_list2507z00_1608);
																															}
																														}
																														BgL_arg2489z00_1591
																															=
																															MAKE_PAIR
																															(BgL_arg2497z00_1598,
																															BgL_arg2498z00_1599);
																													}
																													{	/* Eval/eval.scm 611 */
																														obj_t
																															BgL_list2492z00_1593;
																														{	/* Eval/eval.scm 611 */
																															obj_t
																																BgL_arg2493z00_1594;
																															BgL_arg2493z00_1594
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2492z00_1593
																																=
																																MAKE_PAIR
																																(BgL_arg2489z00_1591,
																																BgL_arg2493z00_1594);
																														}
																														BgL_arg2487z00_1589
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2488z00_1590,
																															BgL_list2492z00_1593);
																													}
																												}
																												BgL_arg2479z00_1581 =
																													MAKE_PAIR
																													(BgL_arg2486z00_1588,
																													BgL_arg2487z00_1589);
																											}
																											{	/* Eval/eval.scm 610 */
																												obj_t
																													BgL_list2481z00_1583;
																												{	/* Eval/eval.scm 610 */
																													obj_t
																														BgL_arg2482z00_1584;
																													BgL_arg2482z00_1584 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2481z00_1583 =
																														MAKE_PAIR
																														(BgL_arg2479z00_1581,
																														BgL_arg2482z00_1584);
																												}
																												BgL_arg2477z00_1579 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2478z00_1580,
																													BgL_list2481z00_1583);
																											}
																										}
																										BgL_arg2460z00_1567 =
																											MAKE_PAIR
																											(BgL_arg2476z00_1578,
																											BgL_arg2477z00_1579);
																									}
																									{	/* Eval/eval.scm 615 */
																										obj_t BgL_arg2519z00_1620;

																										obj_t BgL_arg2520z00_1621;

																										BgL_arg2519z00_1620 =
																											BGl_symbol3271z00zz__evalz00;
																										{	/* Eval/eval.scm 615 */
																											obj_t BgL_arg2521z00_1622;

																											obj_t BgL_arg2522z00_1623;

																											{	/* Eval/eval.scm 615 */
																												obj_t
																													BgL_arg2526z00_1627;
																												obj_t
																													BgL_arg2527z00_1628;
																												BgL_arg2526z00_1627 =
																													BGl_symbol3293z00zz__evalz00;
																												{	/* Eval/eval.scm 615 */
																													obj_t
																														BgL_arg2528z00_1629;
																													obj_t
																														BgL_arg2529z00_1630;
																													BgL_arg2528z00_1629 =
																														BGl_loopz00zz__evalz00
																														(BgL_locz00_1494,
																														BgL_namez00_1469,
																														BgL_fnamez00_1493,
																														BgL_argsz00_1470,
																														BGl_list3317z00zz__evalz00,
																														BNIL);
																													{	/* Eval/eval.scm 618 */
																														obj_t
																															BgL_auxz00_5182;
																														{	/* Eval/eval.scm 618 */
																															bool_t
																																BgL_testz00_5183;
																															if (PAIRP
																																(BgL_bodyz00_1492))
																																{	/* Eval/eval.scm 618 */
																																	BgL_testz00_5183
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Eval/eval.scm 618 */
																																	BgL_testz00_5183
																																		=
																																		NULLP
																																		(BgL_bodyz00_1492);
																																}
																															if (BgL_testz00_5183)
																																{	/* Eval/eval.scm 618 */
																																	BgL_auxz00_5182
																																		=
																																		BgL_bodyz00_1492;
																																}
																															else
																																{
																																	obj_t
																																		BgL_auxz00_5187;
																																	BgL_auxz00_5187
																																		=
																																		BGl_typezd2errorzd2zz__errorz00
																																		(BGl_string3193z00zz__evalz00,
																																		BINT(((long)
																																				23404)),
																																		BGl_string3311z00zz__evalz00,
																																		BGl_string3250z00zz__evalz00,
																																		BgL_bodyz00_1492);
																																	FAILURE
																																		(BgL_auxz00_5187,
																																		BFALSE,
																																		BFALSE);
																														}}
																														BgL_arg2529z00_1630
																															=
																															BGl_expandzd2prognzd2zz__prognz00
																															(BgL_auxz00_5182);
																													}
																													{	/* Eval/eval.scm 615 */
																														obj_t
																															BgL_list2531z00_1632;
																														{	/* Eval/eval.scm 615 */
																															obj_t
																																BgL_arg2532z00_1633;
																															BgL_arg2532z00_1633
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2531z00_1632
																																=
																																MAKE_PAIR
																																(BgL_arg2529z00_1630,
																																BgL_arg2532z00_1633);
																														}
																														BgL_arg2527z00_1628
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2528z00_1629,
																															BgL_list2531z00_1632);
																												}}
																												BgL_arg2521z00_1622 =
																													MAKE_PAIR
																													(BgL_arg2526z00_1627,
																													BgL_arg2527z00_1628);
																											}
																											BgL_arg2522z00_1623 =
																												BGl_symbol3271z00zz__evalz00;
																											{	/* Eval/eval.scm 615 */
																												obj_t
																													BgL_list2524z00_1625;
																												{	/* Eval/eval.scm 615 */
																													obj_t
																														BgL_arg2525z00_1626;
																													BgL_arg2525z00_1626 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2524z00_1625 =
																														MAKE_PAIR
																														(BgL_arg2522z00_1623,
																														BgL_arg2525z00_1626);
																												}
																												BgL_arg2520z00_1621 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2521z00_1622,
																													BgL_list2524z00_1625);
																										}}
																										BgL_arg2461z00_1568 =
																											MAKE_PAIR
																											(BgL_arg2519z00_1620,
																											BgL_arg2520z00_1621);
																									}
																									{	/* Eval/eval.scm 609 */
																										obj_t BgL_list2463z00_1570;

																										{	/* Eval/eval.scm 609 */
																											obj_t BgL_arg2465z00_1571;

																											{	/* Eval/eval.scm 609 */
																												obj_t
																													BgL_arg2467z00_1572;
																												BgL_arg2467z00_1572 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2465z00_1571 =
																													MAKE_PAIR
																													(BgL_arg2461z00_1568,
																													BgL_arg2467z00_1572);
																											}
																											BgL_list2463z00_1570 =
																												MAKE_PAIR
																												(BgL_arg2460z00_1567,
																												BgL_arg2465z00_1571);
																										}
																										BgL_arg2458z00_1565 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2459z00_1566,
																											BgL_list2463z00_1570);
																								}}
																								BgL_arg2450z00_1557 =
																									MAKE_PAIR(BgL_arg2457z00_1564,
																									BgL_arg2458z00_1565);
																							}
																							{	/* Eval/eval.scm 608 */
																								obj_t BgL_list2452z00_1559;

																								{	/* Eval/eval.scm 608 */
																									obj_t BgL_arg2453z00_1560;

																									BgL_arg2453z00_1560 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2452z00_1559 =
																										MAKE_PAIR
																										(BgL_arg2450z00_1557,
																										BgL_arg2453z00_1560);
																								}
																								BgL_arg2448z00_1555 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2449z00_1556,
																									BgL_list2452z00_1559);
																						}}
																						BgL_expdzd2lamzd2_1496 =
																							MAKE_PAIR(BgL_arg2447z00_1554,
																							BgL_arg2448z00_1555);
																					}
																					{	/* Eval/eval.scm 608 */
																						obj_t BgL_expdzd2lamzf2locz20_1497;

																						BgL_expdzd2lamzf2locz20_1497 =
																							BGl_evepairifyz00zz__prognz00
																							(BgL_expdzd2lamzd2_1496,
																							BgL_xz00_50);
																						{	/* Eval/eval.scm 620 */
																							obj_t BgL_expdzd2evalzd2_1498;

																							{	/* Eval/eval.scm 81 */
																								obj_t BgL_envz00_1553;

																								{	/* Eval/eval.scm 81 */
																									obj_t BgL_mz00_2796;

																									BgL_mz00_2796 =
																										BGl_evalzd2modulezd2zz__evmodulez00
																										();
																									if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2796))
																										{	/* Eval/eval.scm 81 */
																											BgL_envz00_1553 =
																												BgL_mz00_2796;
																										}
																									else
																										{	/* Eval/eval.scm 81 */
																											BgL_envz00_1553 =
																												BGl_symbol3191z00zz__evalz00;
																										}
																								}
																								{	/* Eval/eval.scm 81 */

																									{	/* Eval/eval.scm 81 */
																										obj_t BgL_evaluatez00_2800;

																										if (PROCEDUREP
																											(BGl_defaultzd2evaluatezd2zz__evalz00))
																											{	/* Eval/eval.scm 81 */
																												BgL_evaluatez00_2800 =
																													BGl_defaultzd2evaluatezd2zz__evalz00;
																											}
																										else
																											{	/* Eval/eval.scm 81 */
																												BgL_evaluatez00_2800 =
																													BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																											}
																										BgL_expdzd2evalzd2_1498 =
																											BGl_evalzf2expanderzf2zz__evalz00
																											(BgL_expdzd2lamzf2locz20_1497,
																											BgL_envz00_1553,
																											BGl_expandz12zd2envzc0zz__expandz00,
																											BgL_evaluatez00_2800);
																									}
																								}
																							}
																							{	/* Eval/eval.scm 621 */

																								{	/* Eval/eval.scm 622 */
																									obj_t
																										BgL_zc3anonymousza32419ze3z83_3241;
																									BgL_zc3anonymousza32419ze3z83_3241
																										=
																										make_fx_procedure
																										(BGl_zc3anonymousza32419ze3z83zz__evalz00,
																										(int) (((long) 2)),
																										(int) (((long) 1)));
																									PROCEDURE_SET
																										(BgL_zc3anonymousza32419ze3z83_3241,
																										(int) (((long) 0)),
																										BgL_expdzd2evalzd2_1498);
																									BgL_arg2418z00_1495 =
																										BgL_zc3anonymousza32419ze3z83_3241;
																				}}}}}
																				BGl_installzd2expanderzd2zz__macroz00
																					(BgL_namez00_1469,
																					BgL_arg2418z00_1495);
																			}
																			return BUNSPEC;
																		}
																	}
																else
																	{	/* Eval/eval.scm 601 */
																		return
																			BGl_evexpandzd2errorzd2zz__evalz00
																			(BGl_symbol3320z00zz__evalz00,
																			BGl_string3322z00zz__evalz00,
																			BgL_xz00_50);
																	}
															}
														else
															{	/* Eval/eval.scm 601 */
																return
																	BGl_evexpandzd2errorzd2zz__evalz00
																	(BGl_symbol3320z00zz__evalz00,
																	BGl_string3322z00zz__evalz00, BgL_xz00_50);
															}
													}
												else
													{	/* Eval/eval.scm 601 */
														return
															BGl_evexpandzd2errorzd2zz__evalz00
															(BGl_symbol3320z00zz__evalz00,
															BGl_string3322z00zz__evalz00, BgL_xz00_50);
													}
											}
										else
											{	/* Eval/eval.scm 601 */
												return
													BGl_evexpandzd2errorzd2zz__evalz00
													(BGl_symbol3320z00zz__evalz00,
													BGl_string3322z00zz__evalz00, BgL_xz00_50);
											}
									}
								else
									{	/* Eval/eval.scm 601 */
										return
											BGl_evexpandzd2errorzd2zz__evalz00
											(BGl_symbol3320z00zz__evalz00,
											BGl_string3322z00zz__evalz00, BgL_xz00_50);
									}
							}
						else
							{	/* Eval/eval.scm 601 */
								return
									BGl_evexpandzd2errorzd2zz__evalz00
									(BGl_symbol3320z00zz__evalz00, BGl_string3322z00zz__evalz00,
									BgL_xz00_50);
							}
					}
				else
					{	/* Eval/eval.scm 601 */
						return
							BGl_evexpandzd2errorzd2zz__evalz00(BGl_symbol3320z00zz__evalz00,
							BGl_string3322z00zz__evalz00, BgL_xz00_50);
					}
			}
		}
	}



/* _expand-define-hygiene-macro */
	obj_t BGl__expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t
		BgL_envz00_3242, obj_t BgL_xz00_3243, obj_t BgL_ez00_3244)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 600 */
			return
				BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(BgL_xz00_3243,
				BgL_ez00_3244);
		}
	}



/* <anonymous:2419> */
	obj_t BGl_zc3anonymousza32419ze3z83zz__evalz00(obj_t BgL_envz00_3245,
		obj_t BgL_xz00_3247, obj_t BgL_ez00_3248)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 622 */
			{	/* Eval/eval.scm 623 */
				obj_t BgL_expdzd2evalzd2_3246;

				BgL_expdzd2evalzd2_3246 =
					PROCEDURE_REF(BgL_envz00_3245, (int) (((long) 0)));
				{
					obj_t BgL_xz00_1499;

					obj_t BgL_ez00_1500;

					BgL_xz00_1499 = BgL_xz00_3247;
					BgL_ez00_1500 = BgL_ez00_3248;
					return
						BGl_zc3exitza32420ze3z83zz__evalz00(BgL_ez00_1500, BgL_xz00_1499,
						BgL_expdzd2evalzd2_3246);
				}
			}
		}
	}



/* <exit:2420> */
	obj_t BGl_zc3exitza32420ze3z83zz__evalz00(obj_t BgL_ez00_3283,
		obj_t BgL_xz00_3282, obj_t BgL_expdzd2evalzd2_3281)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 623 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1898z00_1503;

			if (SET_EXIT(BgL_an_exit1898z00_1503))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1898z00_1503 = (void *) jmpbuf;
					{	/* Eval/eval.scm 623 */

						PUSH_EXIT(BgL_an_exit1898z00_1503, ((long) 1));
						{	/* Eval/eval.scm 623 */
							obj_t BgL_an_exitd1899z00_1504;

							BgL_an_exitd1899z00_1504 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 623 */
								obj_t BgL_res1901z00_1507;

								{	/* Eval/eval.scm 623 */
									obj_t BgL_err1896z00_1508;

									obj_t BgL_ohs1895z00_1509;

									BgL_err1896z00_1508 = MAKE_PAIR(BFALSE, BUNSPEC);
									BgL_ohs1895z00_1509 = BGL_ERROR_HANDLER_GET();
									{	/* Eval/eval.scm 623 */
										obj_t BgL_val1902z00_1510;

										BgL_val1902z00_1510 =
											BGl_zc3exitza32443ze3z83zz__evalz00(BgL_ez00_3283,
											BgL_xz00_3282, BgL_expdzd2evalzd2_3281,
											BgL_ohs1895z00_1509, BgL_an_exitd1899z00_1504,
											BgL_err1896z00_1508);
										BGL_ERROR_HANDLER_SET(BgL_ohs1895z00_1509);
										BUNSPEC;
										if (CBOOL(CAR(BgL_err1896z00_1508)))
											{	/* Eval/eval.scm 625 */
												obj_t BgL_arg2422z00_1512;

												{	/* Eval/eval.scm 625 */
													obj_t BgL_ez00_1513;

													BgL_ez00_1513 = CDR(BgL_err1896z00_1508);
													{	/* Eval/eval.scm 625 */
														obj_t BgL_nez00_1514;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1513,
																BGl_z62errorz62zz__objectz00))
															{	/* Eval/eval.scm 626 */
																obj_t BgL_objz00_1516;

																{
																	BgL_z62errorz62_bglt BgL_auxz00_5250;

																	BgL_auxz00_5250 =
																		(BgL_z62errorz62_bglt) (BgL_ez00_1513);
																	BgL_objz00_1516 =
																		(((BgL_z62errorz62_bglt)
																			CREF(BgL_auxz00_5250))->BgL_objz00);
																}
																if (EXTENDED_PAIRP(BgL_objz00_1516))
																	{	/* Eval/eval.scm 628 */
																		obj_t BgL_ezd21669zd2_1522;

																		{	/* Eval/eval.scm 628 */
																			obj_t BgL_objz00_2813;

																			if (EXTENDED_PAIRP(BgL_objz00_1516))
																				{	/* Eval/eval.scm 628 */
																					BgL_objz00_2813 = BgL_objz00_1516;
																				}
																			else
																				{
																					obj_t BgL_auxz00_5257;

																					BgL_auxz00_5257 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string3193z00zz__evalz00,
																						BINT(((long) 23684)),
																						BGl_string3323z00zz__evalz00,
																						BGl_string3255z00zz__evalz00,
																						BgL_objz00_1516);
																					FAILURE(BgL_auxz00_5257, BFALSE,
																						BFALSE);
																				}
																			BgL_ezd21669zd2_1522 =
																				CER(BgL_objz00_2813);
																		}
																		if (PAIRP(BgL_ezd21669zd2_1522))
																			{	/* Eval/eval.scm 628 */
																				obj_t BgL_cdrzd21675zd2_1524;

																				BgL_cdrzd21675zd2_1524 =
																					CDR(BgL_ezd21669zd2_1522);
																				if (
																					(CAR(BgL_ezd21669zd2_1522) ==
																						BGl_symbol3200z00zz__evalz00))
																					{	/* Eval/eval.scm 628 */
																						if (PAIRP(BgL_cdrzd21675zd2_1524))
																							{	/* Eval/eval.scm 628 */
																								obj_t BgL_cdrzd21679zd2_1527;

																								BgL_cdrzd21679zd2_1527 =
																									CDR(BgL_cdrzd21675zd2_1524);
																								if (PAIRP
																									(BgL_cdrzd21679zd2_1527))
																									{	/* Eval/eval.scm 628 */
																										if (NULLP(CDR
																												(BgL_cdrzd21679zd2_1527)))
																											{	/* Eval/eval.scm 628 */
																												obj_t
																													BgL_arg2430z00_1530;
																												obj_t
																													BgL_arg2431z00_1531;
																												BgL_arg2430z00_1530 =
																													CAR
																													(BgL_cdrzd21675zd2_1524);
																												BgL_arg2431z00_1531 =
																													CAR
																													(BgL_cdrzd21679zd2_1527);
																												{	/* Eval/eval.scm 628 */
																													BgL_z62errorz62_bglt
																														BgL_duplicated1905z00_2826;
																													BgL_duplicated1905z00_2826
																														=
																														(BgL_z62errorz62_bglt)
																														(BgL_ez00_1513);
																													{	/* Eval/eval.scm 628 */
																														BgL_z62errorz62_bglt
																															BgL_new1906z00_2827;
																														{	/* Eval/eval.scm 628 */
																															obj_t
																																BgL_arg2436z00_2828;
																															obj_t
																																BgL_arg2437z00_2829;
																															obj_t
																																BgL_arg2438z00_2830;
																															obj_t
																																BgL_arg2439z00_2831;
																															{
																																BgL_z62exceptionz62_bglt
																																	BgL_auxz00_5279;
																																BgL_auxz00_5279
																																	=
																																	(BgL_z62exceptionz62_bglt)
																																	(BgL_duplicated1905z00_2826);
																																BgL_arg2436z00_2828
																																	=
																																	(((BgL_z62exceptionz62_bglt) CREF(BgL_auxz00_5279))->BgL_stackz00);
																															}
																															BgL_arg2437z00_2829
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1905z00_2826))->BgL_procz00);
																															BgL_arg2438z00_2830
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1905z00_2826))->BgL_msgz00);
																															BgL_arg2439z00_2831
																																=
																																(((BgL_z62errorz62_bglt) CREF(BgL_duplicated1905z00_2826))->BgL_objz00);
																															BgL_new1906z00_2827
																																=
																																BGl_makezd2z62errorzb0zz__objectz00
																																(BgL_arg2430z00_1530,
																																BgL_arg2431z00_1531,
																																BgL_arg2436z00_2828,
																																BgL_arg2437z00_2829,
																																BgL_arg2438z00_2830,
																																BgL_arg2439z00_2831);
																														}
																														{	/* Eval/eval.scm 628 */

																															BgL_nez00_1514 =
																																(obj_t)
																																(BgL_new1906z00_2827);
																														}
																													}
																												}
																											}
																										else
																											{	/* Eval/eval.scm 628 */
																												BgL_nez00_1514 =
																													BgL_ez00_1513;
																											}
																									}
																								else
																									{	/* Eval/eval.scm 628 */
																										BgL_nez00_1514 =
																											BgL_ez00_1513;
																									}
																							}
																						else
																							{	/* Eval/eval.scm 628 */
																								BgL_nez00_1514 = BgL_ez00_1513;
																							}
																					}
																				else
																					{	/* Eval/eval.scm 628 */
																						BgL_nez00_1514 = BgL_ez00_1513;
																					}
																			}
																		else
																			{	/* Eval/eval.scm 628 */
																				BgL_nez00_1514 = BgL_ez00_1513;
																			}
																	}
																else
																	{	/* Eval/eval.scm 627 */
																		BgL_nez00_1514 = BgL_ez00_1513;
																	}
															}
														else
															{	/* Eval/eval.scm 625 */
																BgL_nez00_1514 = BgL_ez00_1513;
															}
														BGl_exceptionzd2notifyzd2zz__objectz00
															(BgL_nez00_1514);
														BgL_arg2422z00_1512 =
															BGl_raisez00zz__errorz00(BgL_nez00_1514);
													}
												}
												BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_an_exitd1899z00_1504, BgL_arg2422z00_1512);
											}
										else
											{	/* Eval/eval.scm 623 */
												BFALSE;
											}
										if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
												(BgL_val1902z00_1510)))
											{	/* Eval/eval.scm 623 */
												obj_t BgL_arg2441z00_1542;

												obj_t BgL_arg2442z00_1543;

												{	/* Eval/eval.scm 623 */
													obj_t BgL_pairz00_2847;

													if (PAIRP(BgL_val1902z00_1510))
														{	/* Eval/eval.scm 623 */
															BgL_pairz00_2847 = BgL_val1902z00_1510;
														}
													else
														{
															obj_t BgL_auxz00_5295;

															BgL_auxz00_5295 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 23532)),
																BGl_string3323z00zz__evalz00,
																BGl_string3198z00zz__evalz00,
																BgL_val1902z00_1510);
															FAILURE(BgL_auxz00_5295, BFALSE, BFALSE);
														}
													BgL_arg2441z00_1542 = CAR(BgL_pairz00_2847);
												}
												BgL_arg2442z00_1543 = CDR(BgL_val1902z00_1510);
												BgL_res1901z00_1507 =
													BGl_unwindzd2untilz12zc0zz__bexitz00
													(BgL_arg2441z00_1542, BgL_arg2442z00_1543);
											}
										else
											{	/* Eval/eval.scm 623 */
												BgL_res1901z00_1507 = BgL_val1902z00_1510;
											}
									}
								}
								POP_EXIT();
								return BgL_res1901z00_1507;
							}
						}
					}
				}
		}
	}



/* <exit:2443> */
	obj_t BGl_zc3exitza32443ze3z83zz__evalz00(obj_t BgL_ez00_3289,
		obj_t BgL_xz00_3288, obj_t BgL_expdzd2evalzd2_3287,
		obj_t BgL_ohs1895z00_3286, obj_t BgL_an_exitd1899z00_3285,
		obj_t BgL_err1896z00_3284)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 623 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1903z00_1545;

			if (SET_EXIT(BgL_an_exit1903z00_1545))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1903z00_1545 = (void *) jmpbuf;
					{	/* Eval/eval.scm 623 */

						PUSH_EXIT(BgL_an_exit1903z00_1545, ((long) 0));
						{	/* Eval/eval.scm 623 */
							obj_t BgL_val1904z00_1546;

							{	/* Eval/eval.scm 623 */
								obj_t BgL_arg2444z00_1547;

								{	/* Eval/eval.scm 623 */
									obj_t BgL_zc3anonymousza32446ze3z83_3240;

									BgL_zc3anonymousza32446ze3z83_3240 =
										make_fx_procedure(BGl_zc3anonymousza32446ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza32446ze3z83_3240,
										(int) (((long) 0)), BgL_err1896z00_3284);
									PROCEDURE_SET(BgL_zc3anonymousza32446ze3z83_3240,
										(int) (((long) 1)), BgL_an_exitd1899z00_3285);
									BgL_arg2444z00_1547 =
										MAKE_PAIR(BgL_zc3anonymousza32446ze3z83_3240,
										BgL_ohs1895z00_3286);
								}
								BGL_ERROR_HANDLER_SET(BgL_arg2444z00_1547);
								BUNSPEC;
							}
							{	/* Eval/eval.scm 639 */
								obj_t BgL_auxz00_5316;

								{	/* Eval/eval.scm 639 */
									bool_t BgL_test3158z00_3524;

									BgL_test3158z00_3524 = PROCEDUREP(BgL_expdzd2evalzd2_3287);
									if (BgL_test3158z00_3524)
										{	/* Eval/eval.scm 639 */
											BgL_auxz00_5316 = BgL_expdzd2evalzd2_3287;
										}
									else
										{
											obj_t BgL_auxz00_5319;

											BgL_auxz00_5319 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3193z00zz__evalz00, BINT(((long) 23901)),
												BGl_string3324z00zz__evalz00,
												BGl_string3195z00zz__evalz00, BgL_expdzd2evalzd2_3287);
											FAILURE(BgL_auxz00_5319, BFALSE, BFALSE);
								}}
								BgL_val1904z00_1546 =
									PROCEDURE_ENTRY(BgL_auxz00_5316) (BgL_expdzd2evalzd2_3287,
									BgL_xz00_3288, BgL_ez00_3289, BEOA);
							}
							POP_EXIT();
							return BgL_val1904z00_1546;
						}
					}
				}
		}
	}



/* <anonymous:2446> */
	obj_t BGl_zc3anonymousza32446ze3z83zz__evalz00(obj_t BgL_envz00_3249,
		obj_t BgL_ez00_3252)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 623 */
			{	/* Eval/eval.scm 623 */
				obj_t BgL_err1896z00_3250;

				obj_t BgL_an_exitd1899z00_3251;

				BgL_err1896z00_3250 =
					PROCEDURE_REF(BgL_envz00_3249, (int) (((long) 0)));
				BgL_an_exitd1899z00_3251 =
					PROCEDURE_REF(BgL_envz00_3249, (int) (((long) 1)));
				{
					obj_t BgL_ez00_1549;

					BgL_ez00_1549 = BgL_ez00_3252;
					{	/* Eval/eval.scm 623 */
						obj_t BgL_pairz00_2803;

						if (PAIRP(BgL_err1896z00_3250))
							{	/* Eval/eval.scm 623 */
								BgL_pairz00_2803 = BgL_err1896z00_3250;
							}
						else
							{
								obj_t BgL_auxz00_5330;

								BgL_auxz00_5330 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
									BINT(((long) 23532)), BGl_string3325z00zz__evalz00,
									BGl_string3198z00zz__evalz00, BgL_err1896z00_3250);
								FAILURE(BgL_auxz00_5330, BFALSE, BFALSE);
							}
						SET_CAR(BgL_pairz00_2803, BTRUE);
					}
					SET_CDR(BgL_err1896z00_3250, BgL_ez00_1549);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1899z00_3251,
						BgL_ez00_1549);
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__evalz00(obj_t BgL_locz00_3277, obj_t BgL_idz00_3276,
		obj_t BgL_fnamez00_3275, obj_t BgL_patz00_1657, obj_t BgL_argz00_1658,
		obj_t BgL_bindingsz00_1659)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 654 */
		BGl_loopz00zz__evalz00:
			if (NULLP(BgL_patz00_1657))
				{	/* Eval/eval.scm 659 */
					obj_t BgL_arg2547z00_1662;

					{	/* Eval/eval.scm 659 */
						obj_t BgL_arg2548z00_1663;

						obj_t BgL_arg2549z00_1664;

						{	/* Eval/eval.scm 659 */

							{	/* Eval/eval.scm 659 */

								BgL_arg2548z00_1663 =
									BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
							}
						}
						{	/* Eval/eval.scm 660 */
							obj_t BgL_arg2550z00_1666;

							{	/* Eval/eval.scm 660 */
								obj_t BgL_arg2553z00_1669;

								obj_t BgL_arg2554z00_1670;

								BgL_arg2553z00_1669 = BGl_symbol3326z00zz__evalz00;
								{	/* Eval/eval.scm 660 */
									obj_t BgL_arg2555z00_1671;

									obj_t BgL_arg2556z00_1672;

									obj_t BgL_arg2557z00_1673;

									{	/* Eval/eval.scm 660 */
										obj_t BgL_arg2562z00_1678;

										obj_t BgL_arg2563z00_1679;

										BgL_arg2562z00_1678 = BGl_symbol3328z00zz__evalz00;
										{	/* Eval/eval.scm 660 */
											obj_t BgL_arg2564z00_1680;

											{	/* Eval/eval.scm 660 */
												obj_t BgL_arg2568z00_1683;

												obj_t BgL_arg2569z00_1684;

												BgL_arg2568z00_1683 = BGl_symbol3330z00zz__evalz00;
												{	/* Eval/eval.scm 660 */
													obj_t BgL_list2570z00_1685;

													BgL_list2570z00_1685 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2569z00_1684 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_argz00_1658, BgL_list2570z00_1685);
												}
												BgL_arg2564z00_1680 =
													MAKE_PAIR(BgL_arg2568z00_1683, BgL_arg2569z00_1684);
											}
											{	/* Eval/eval.scm 660 */
												obj_t BgL_list2566z00_1682;

												BgL_list2566z00_1682 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2563z00_1679 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2564z00_1680, BgL_list2566z00_1682);
											}
										}
										BgL_arg2555z00_1671 =
											MAKE_PAIR(BgL_arg2562z00_1678, BgL_arg2563z00_1679);
									}
									BgL_arg2556z00_1672 =
										BGl_errz00zz__evalz00(BgL_locz00_3277, BgL_idz00_3276,
										BgL_fnamez00_3275, BGl_string3332z00zz__evalz00,
										BgL_argz00_1658);
									{	/* Eval/eval.scm 662 */
										obj_t BgL_arg2571z00_1686;

										obj_t BgL_arg2572z00_1687;

										BgL_arg2571z00_1686 = BGl_symbol3318z00zz__evalz00;
										{	/* Eval/eval.scm 662 */
											obj_t BgL_list2573z00_1688;

											BgL_list2573z00_1688 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2572z00_1687 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
												BgL_list2573z00_1688);
										}
										BgL_arg2557z00_1673 =
											MAKE_PAIR(BgL_arg2571z00_1686, BgL_arg2572z00_1687);
									}
									{	/* Eval/eval.scm 660 */
										obj_t BgL_list2559z00_1675;

										{	/* Eval/eval.scm 660 */
											obj_t BgL_arg2560z00_1676;

											{	/* Eval/eval.scm 660 */
												obj_t BgL_arg2561z00_1677;

												BgL_arg2561z00_1677 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2560z00_1676 =
													MAKE_PAIR(BgL_arg2557z00_1673, BgL_arg2561z00_1677);
											}
											BgL_list2559z00_1675 =
												MAKE_PAIR(BgL_arg2556z00_1672, BgL_arg2560z00_1676);
										}
										BgL_arg2554z00_1670 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2555z00_1671, BgL_list2559z00_1675);
									}
								}
								BgL_arg2550z00_1666 =
									MAKE_PAIR(BgL_arg2553z00_1669, BgL_arg2554z00_1670);
							}
							{	/* Eval/eval.scm 659 */
								obj_t BgL_list2552z00_1668;

								BgL_list2552z00_1668 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2549z00_1664 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2550z00_1666, BgL_list2552z00_1668);
							}
						}
						BgL_arg2547z00_1662 =
							MAKE_PAIR(BgL_arg2548z00_1663, BgL_arg2549z00_1664);
					}
					return MAKE_PAIR(BgL_arg2547z00_1662, BgL_bindingsz00_1659);
				}
			else
				{	/* Eval/eval.scm 658 */
					if (SYMBOLP(BgL_patz00_1657))
						{	/* Eval/eval.scm 665 */
							obj_t BgL_arg2575z00_1690;

							{	/* Eval/eval.scm 665 */
								obj_t BgL_arg2576z00_1691;

								{	/* Eval/eval.scm 665 */
									obj_t BgL_list2577z00_1692;

									BgL_list2577z00_1692 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2576z00_1691 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_argz00_1658,
										BgL_list2577z00_1692);
								}
								BgL_arg2575z00_1690 =
									MAKE_PAIR(BgL_patz00_1657, BgL_arg2576z00_1691);
							}
							return MAKE_PAIR(BgL_arg2575z00_1690, BgL_bindingsz00_1659);
						}
					else
						{	/* Eval/eval.scm 664 */
							if (PAIRP(BgL_patz00_1657))
								{	/* Eval/eval.scm 667 */
									obj_t BgL_arg2579z00_1694;

									obj_t BgL_arg2580z00_1695;

									obj_t BgL_arg2581z00_1696;

									BgL_arg2579z00_1694 = CAR(BgL_patz00_1657);
									{	/* Eval/eval.scm 668 */
										obj_t BgL_arg2582z00_1697;

										obj_t BgL_arg2583z00_1698;

										BgL_arg2582z00_1697 = BGl_symbol3326z00zz__evalz00;
										{	/* Eval/eval.scm 668 */
											obj_t BgL_arg2584z00_1699;

											obj_t BgL_arg2585z00_1700;

											obj_t BgL_arg2586z00_1701;

											{	/* Eval/eval.scm 668 */
												obj_t BgL_arg2591z00_1706;

												obj_t BgL_arg2592z00_1707;

												BgL_arg2591z00_1706 = BGl_symbol3333z00zz__evalz00;
												{	/* Eval/eval.scm 668 */
													obj_t BgL_list2593z00_1708;

													BgL_list2593z00_1708 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2592z00_1707 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_argz00_1658, BgL_list2593z00_1708);
												}
												BgL_arg2584z00_1699 =
													MAKE_PAIR(BgL_arg2591z00_1706, BgL_arg2592z00_1707);
											}
											{	/* Eval/eval.scm 669 */
												obj_t BgL_arg2594z00_1709;

												obj_t BgL_arg2595z00_1710;

												BgL_arg2594z00_1709 = BGl_symbol3335z00zz__evalz00;
												{	/* Eval/eval.scm 669 */
													obj_t BgL_list2596z00_1711;

													BgL_list2596z00_1711 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2595z00_1710 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_argz00_1658, BgL_list2596z00_1711);
												}
												BgL_arg2585z00_1700 =
													MAKE_PAIR(BgL_arg2594z00_1709, BgL_arg2595z00_1710);
											}
											BgL_arg2586z00_1701 =
												BGl_errz00zz__evalz00(BgL_locz00_3277, BgL_idz00_3276,
												BgL_fnamez00_3275, BGl_string3337z00zz__evalz00,
												CAR(BgL_patz00_1657));
											{	/* Eval/eval.scm 668 */
												obj_t BgL_list2588z00_1703;

												{	/* Eval/eval.scm 668 */
													obj_t BgL_arg2589z00_1704;

													{	/* Eval/eval.scm 668 */
														obj_t BgL_arg2590z00_1705;

														BgL_arg2590z00_1705 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2589z00_1704 =
															MAKE_PAIR(BgL_arg2586z00_1701,
															BgL_arg2590z00_1705);
													}
													BgL_list2588z00_1703 =
														MAKE_PAIR(BgL_arg2585z00_1700, BgL_arg2589z00_1704);
												}
												BgL_arg2583z00_1698 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2584z00_1699, BgL_list2588z00_1703);
											}
										}
										BgL_arg2580z00_1695 =
											MAKE_PAIR(BgL_arg2582z00_1697, BgL_arg2583z00_1698);
									}
									{	/* Eval/eval.scm 671 */
										obj_t BgL_arg2599z00_1714;

										obj_t BgL_arg2600z00_1715;

										BgL_arg2599z00_1714 = CDR(BgL_patz00_1657);
										{	/* Eval/eval.scm 671 */
											obj_t BgL_arg2601z00_1716;

											obj_t BgL_arg2602z00_1717;

											BgL_arg2601z00_1716 = BGl_symbol3298z00zz__evalz00;
											{	/* Eval/eval.scm 671 */
												obj_t BgL_list2603z00_1718;

												BgL_list2603z00_1718 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2602z00_1717 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_argz00_1658, BgL_list2603z00_1718);
											}
											BgL_arg2600z00_1715 =
												MAKE_PAIR(BgL_arg2601z00_1716, BgL_arg2602z00_1717);
										}
										BgL_arg2581z00_1696 =
											BGl_loopz00zz__evalz00(BgL_locz00_3277, BgL_idz00_3276,
											BgL_fnamez00_3275, BgL_arg2599z00_1714,
											BgL_arg2600z00_1715, BgL_bindingsz00_1659);
									}
									{
										obj_t BgL_bindingsz00_5388;

										obj_t BgL_argz00_5387;

										obj_t BgL_patz00_5386;

										BgL_patz00_5386 = BgL_arg2579z00_1694;
										BgL_argz00_5387 = BgL_arg2580z00_1695;
										BgL_bindingsz00_5388 = BgL_arg2581z00_1696;
										BgL_bindingsz00_1659 = BgL_bindingsz00_5388;
										BgL_argz00_1658 = BgL_argz00_5387;
										BgL_patz00_1657 = BgL_patz00_5386;
										goto BGl_loopz00zz__evalz00;
									}
								}
							else
								{	/* Eval/eval.scm 666 */
									return
										BGl_evexpandzd2errorzd2zz__evalz00
										(BGl_list3338z00zz__evalz00, BGl_string3343z00zz__evalz00,
										BgL_patz00_1657);
								}
						}
				}
		}
	}



/* err */
	obj_t BGl_errz00zz__evalz00(obj_t BgL_locz00_3280, obj_t BgL_idz00_3279,
		obj_t BgL_fnamez00_3278, obj_t BgL_msgz00_1720, obj_t BgL_objz00_1721)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 653 */
			{	/* Eval/eval.scm 651 */
				obj_t BgL_arg2605z00_1723;

				obj_t BgL_arg2606z00_1724;

				BgL_arg2605z00_1723 = BGl_symbol3326z00zz__evalz00;
				{	/* Eval/eval.scm 651 */
					obj_t BgL_arg2607z00_1725;

					obj_t BgL_arg2608z00_1726;

					obj_t BgL_arg2609z00_1727;

					{	/* Eval/eval.scm 651 */
						obj_t BgL_arg2614z00_1732;

						obj_t BgL_arg2615z00_1733;

						BgL_arg2614z00_1732 = BGl_symbol3344z00zz__evalz00;
						{	/* Eval/eval.scm 651 */
							obj_t BgL_list2616z00_1734;

							BgL_list2616z00_1734 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg2615z00_1733 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_fnamez00_3278,
								BgL_list2616z00_1734);
						}
						BgL_arg2607z00_1725 =
							MAKE_PAIR(BgL_arg2614z00_1732, BgL_arg2615z00_1733);
					}
					{	/* Eval/eval.scm 652 */
						obj_t BgL_arg2617z00_1735;

						obj_t BgL_arg2618z00_1736;

						BgL_arg2617z00_1735 = BGl_symbol3346z00zz__evalz00;
						{	/* Eval/eval.scm 652 */
							obj_t BgL_arg2619z00_1737;

							obj_t BgL_arg2620z00_1738;

							{	/* Eval/eval.scm 652 */
								obj_t BgL_arg2627z00_1745;

								obj_t BgL_arg2628z00_1746;

								BgL_arg2627z00_1745 = BGl_symbol3318z00zz__evalz00;
								{	/* Eval/eval.scm 652 */
									obj_t BgL_list2629z00_1747;

									BgL_list2629z00_1747 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2628z00_1746 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_3279,
										BgL_list2629z00_1747);
								}
								BgL_arg2619z00_1737 =
									MAKE_PAIR(BgL_arg2627z00_1745, BgL_arg2628z00_1746);
							}
							{	/* Eval/eval.scm 652 */
								obj_t BgL_arg2630z00_1748;

								obj_t BgL_arg2631z00_1749;

								BgL_arg2630z00_1748 = BGl_symbol3318z00zz__evalz00;
								{	/* Eval/eval.scm 652 */
									obj_t BgL_list2632z00_1750;

									BgL_list2632z00_1750 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2631z00_1749 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1721,
										BgL_list2632z00_1750);
								}
								BgL_arg2620z00_1738 =
									MAKE_PAIR(BgL_arg2630z00_1748, BgL_arg2631z00_1749);
							}
							{	/* Eval/eval.scm 652 */
								obj_t BgL_list2622z00_1740;

								{	/* Eval/eval.scm 652 */
									obj_t BgL_arg2623z00_1741;

									{	/* Eval/eval.scm 652 */
										obj_t BgL_arg2624z00_1742;

										{	/* Eval/eval.scm 652 */
											obj_t BgL_arg2625z00_1743;

											{	/* Eval/eval.scm 652 */
												obj_t BgL_arg2626z00_1744;

												BgL_arg2626z00_1744 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2625z00_1743 =
													MAKE_PAIR(BgL_locz00_3280, BgL_arg2626z00_1744);
											}
											BgL_arg2624z00_1742 =
												MAKE_PAIR(BgL_fnamez00_3278, BgL_arg2625z00_1743);
										}
										BgL_arg2623z00_1741 =
											MAKE_PAIR(BgL_arg2620z00_1738, BgL_arg2624z00_1742);
									}
									BgL_list2622z00_1740 =
										MAKE_PAIR(BgL_msgz00_1720, BgL_arg2623z00_1741);
								}
								BgL_arg2618z00_1736 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2619z00_1737, BgL_list2622z00_1740);
							}
						}
						BgL_arg2608z00_1726 =
							MAKE_PAIR(BgL_arg2617z00_1735, BgL_arg2618z00_1736);
					}
					{	/* Eval/eval.scm 653 */
						obj_t BgL_arg2633z00_1751;

						obj_t BgL_arg2634z00_1752;

						BgL_arg2633z00_1751 = BGl_symbol3348z00zz__evalz00;
						{	/* Eval/eval.scm 653 */
							obj_t BgL_arg2635z00_1753;

							obj_t BgL_arg2636z00_1754;

							{	/* Eval/eval.scm 653 */
								obj_t BgL_arg2641z00_1759;

								obj_t BgL_arg2642z00_1760;

								BgL_arg2641z00_1759 = BGl_symbol3318z00zz__evalz00;
								{	/* Eval/eval.scm 653 */
									obj_t BgL_list2643z00_1761;

									BgL_list2643z00_1761 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2642z00_1760 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_idz00_3279,
										BgL_list2643z00_1761);
								}
								BgL_arg2635z00_1753 =
									MAKE_PAIR(BgL_arg2641z00_1759, BgL_arg2642z00_1760);
							}
							{	/* Eval/eval.scm 653 */
								obj_t BgL_arg2644z00_1762;

								obj_t BgL_arg2645z00_1763;

								BgL_arg2644z00_1762 = BGl_symbol3318z00zz__evalz00;
								{	/* Eval/eval.scm 653 */
									obj_t BgL_list2646z00_1764;

									BgL_list2646z00_1764 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2645z00_1763 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1721,
										BgL_list2646z00_1764);
								}
								BgL_arg2636z00_1754 =
									MAKE_PAIR(BgL_arg2644z00_1762, BgL_arg2645z00_1763);
							}
							{	/* Eval/eval.scm 653 */
								obj_t BgL_list2638z00_1756;

								{	/* Eval/eval.scm 653 */
									obj_t BgL_arg2639z00_1757;

									{	/* Eval/eval.scm 653 */
										obj_t BgL_arg2640z00_1758;

										BgL_arg2640z00_1758 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2639z00_1757 =
											MAKE_PAIR(BgL_arg2636z00_1754, BgL_arg2640z00_1758);
									}
									BgL_list2638z00_1756 =
										MAKE_PAIR(BgL_msgz00_1720, BgL_arg2639z00_1757);
								}
								BgL_arg2634z00_1752 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2635z00_1753, BgL_list2638z00_1756);
							}
						}
						BgL_arg2609z00_1727 =
							MAKE_PAIR(BgL_arg2633z00_1751, BgL_arg2634z00_1752);
					}
					{	/* Eval/eval.scm 651 */
						obj_t BgL_list2611z00_1729;

						{	/* Eval/eval.scm 651 */
							obj_t BgL_arg2612z00_1730;

							{	/* Eval/eval.scm 651 */
								obj_t BgL_arg2613z00_1731;

								BgL_arg2613z00_1731 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2612z00_1730 =
									MAKE_PAIR(BgL_arg2609z00_1727, BgL_arg2613z00_1731);
							}
							BgL_list2611z00_1729 =
								MAKE_PAIR(BgL_arg2608z00_1726, BgL_arg2612z00_1730);
						}
						BgL_arg2606z00_1724 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2607z00_1725,
							BgL_list2611z00_1729);
					}
				}
				return MAKE_PAIR(BgL_arg2605z00_1723, BgL_arg2606z00_1724);
			}
		}
	}



/* expand-define-pattern */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t
		BgL_xz00_58)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 678 */
			if (PAIRP(BgL_xz00_58))
				{	/* Eval/eval.scm 679 */
					obj_t BgL_cdrzd21695zd2_1773;

					BgL_cdrzd21695zd2_1773 = CDR(BgL_xz00_58);
					if (PAIRP(BgL_cdrzd21695zd2_1773))
						{	/* Eval/eval.scm 679 */
							obj_t BgL_cdrzd21700zd2_1775;

							BgL_cdrzd21700zd2_1775 = CDR(BgL_cdrzd21695zd2_1773);
							if (PAIRP(BgL_cdrzd21700zd2_1775))
								{	/* Eval/eval.scm 679 */
									obj_t BgL_cdrzd21705zd2_1777;

									BgL_cdrzd21705zd2_1777 = CDR(BgL_cdrzd21700zd2_1775);
									if (PAIRP(BgL_cdrzd21705zd2_1777))
										{	/* Eval/eval.scm 679 */
											if (NULLP(CDR(BgL_cdrzd21705zd2_1777)))
												{	/* Eval/eval.scm 679 */
													obj_t BgL_arg2652z00_1780;

													obj_t BgL_arg2655z00_1781;

													obj_t BgL_arg2656z00_1782;

													BgL_arg2652z00_1780 = CAR(BgL_cdrzd21695zd2_1773);
													BgL_arg2655z00_1781 = CAR(BgL_cdrzd21700zd2_1775);
													BgL_arg2656z00_1782 = CAR(BgL_cdrzd21705zd2_1777);
													{	/* Eval/eval.scm 679 */
														obj_t BgL_arg2658z00_2870;

														{	/* Eval/eval.scm 679 */
															obj_t BgL_arg2659z00_2871;

															{	/* Eval/eval.scm 679 */
																obj_t BgL_arg2660z00_2872;

																obj_t BgL_arg2661z00_2873;

																BgL_arg2660z00_2872 =
																	BGl_symbol3267z00zz__evalz00;
																{	/* Eval/eval.scm 679 */
																	obj_t BgL_list2662z00_2874;

																	{	/* Eval/eval.scm 679 */
																		obj_t BgL_arg2663z00_2875;

																		BgL_arg2663z00_2875 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2662z00_2874 =
																			MAKE_PAIR(BgL_arg2656z00_1782,
																			BgL_arg2663z00_2875);
																	}
																	BgL_arg2661z00_2873 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2655z00_1781, BgL_list2662z00_2874);
																}
																BgL_arg2659z00_2871 =
																	MAKE_PAIR(BgL_arg2660z00_2872,
																	BgL_arg2661z00_2873);
															}
															{	/* Eval/eval.scm 679 */
																obj_t BgL_envz00_2877;

																BgL_envz00_2877 =
																	BGl_defaultzd2environmentzd2zz__evalz00();
																{	/* Eval/eval.scm 679 */

																	{	/* Eval/eval.scm 679 */
																		obj_t BgL_evaluatez00_2880;

																		if (PROCEDUREP
																			(BGl_defaultzd2evaluatezd2zz__evalz00))
																			{	/* Eval/eval.scm 679 */
																				BgL_evaluatez00_2880 =
																					BGl_defaultzd2evaluatezd2zz__evalz00;
																			}
																		else
																			{	/* Eval/eval.scm 679 */
																				BgL_evaluatez00_2880 =
																					BGl_bytezd2codezd2evaluatezd2envzd2zz__evalz00;
																			}
																		BgL_arg2658z00_2870 =
																			BGl_evalzf2expanderzf2zz__evalz00
																			(BgL_arg2659z00_2871, BgL_envz00_2877,
																			BGl_expandz12zd2envzc0zz__expandz00,
																			BgL_evaluatez00_2880);
																	}
																}
															}
														}
														BGl_extendze2rze2macrozd2envzd2zz__match_normaliza7eza7
															(BgL_arg2652z00_1780, BgL_arg2658z00_2870);
													}
													return BGl_list3350z00zz__evalz00;
												}
											else
												{	/* Eval/eval.scm 679 */
													return
														BGl_evexpandzd2errorzd2zz__evalz00
														(BGl_symbol3353z00zz__evalz00,
														BGl_string3355z00zz__evalz00, BgL_xz00_58);
												}
										}
									else
										{	/* Eval/eval.scm 679 */
											return
												BGl_evexpandzd2errorzd2zz__evalz00
												(BGl_symbol3353z00zz__evalz00,
												BGl_string3355z00zz__evalz00, BgL_xz00_58);
										}
								}
							else
								{	/* Eval/eval.scm 679 */
									return
										BGl_evexpandzd2errorzd2zz__evalz00
										(BGl_symbol3353z00zz__evalz00, BGl_string3355z00zz__evalz00,
										BgL_xz00_58);
								}
						}
					else
						{	/* Eval/eval.scm 679 */
							return
								BGl_evexpandzd2errorzd2zz__evalz00(BGl_symbol3353z00zz__evalz00,
								BGl_string3355z00zz__evalz00, BgL_xz00_58);
						}
				}
			else
				{	/* Eval/eval.scm 679 */
					return
						BGl_evexpandzd2errorzd2zz__evalz00(BGl_symbol3353z00zz__evalz00,
						BGl_string3355z00zz__evalz00, BgL_xz00_58);
				}
		}
	}



/* _expand-define-pattern */
	obj_t BGl__expandzd2definezd2patternz00zz__evalz00(obj_t BgL_envz00_3253,
		obj_t BgL_xz00_3254)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 678 */
			return BGl_expandzd2definezd2patternz00zz__evalz00(BgL_xz00_3254);
		}
	}



/* notify-assert-fail */
	BGL_EXPORTED_DEF obj_t BGl_notifyzd2assertzd2failz00zz__evalz00(obj_t
		BgL_varsz00_59, obj_t BgL_failzd2bodyzd2_60, obj_t BgL_locz00_61)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 689 */
			{	/* Eval/eval.scm 690 */
				obj_t BgL_portz00_1792;

				{	/* Eval/eval.scm 690 */
					obj_t BgL_res2948z00_2899;

					{	/* Eval/eval.scm 690 */
						obj_t BgL_auxz00_5454;

						BgL_auxz00_5454 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2948z00_2899 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_5454);
					}
					BgL_portz00_1792 = BgL_res2948z00_2899;
				}
				BGl_zc3exitza32664ze3z83zz__evalz00(BgL_locz00_61,
					BgL_failzd2bodyzd2_60);
				bgl_display_string(BGl_string3356z00zz__evalz00, BgL_portz00_1792);
				bgl_display_char(((unsigned char) '\n'), BgL_portz00_1792);
				bgl_display_string(BGl_string3357z00zz__evalz00, BgL_portz00_1792);
				bgl_display_char(((unsigned char) '\n'), BgL_portz00_1792);
				{
					obj_t BgL_l1950z00_1814;

					BgL_l1950z00_1814 = BgL_varsz00_59;
				BgL_zc3anonymousza32674ze3z83_1815:
					if (PAIRP(BgL_l1950z00_1814))
						{	/* Eval/eval.scm 706 */
							{	/* Eval/eval.scm 711 */
								obj_t BgL_fz00_1817;

								BgL_fz00_1817 = CAR(BgL_l1950z00_1814);
								bgl_display_string(BGl_string3358z00zz__evalz00,
									BgL_portz00_1792);
								bgl_display_obj(BgL_fz00_1817, BgL_portz00_1792);
								bgl_display_string(BGl_string3359z00zz__evalz00,
									BgL_portz00_1792);
								{	/* Eval/eval.scm 710 */
									obj_t BgL_arg2676z00_1818;

									{	/* Eval/eval.scm 80 */
										obj_t BgL_envz00_1820;

										{	/* Eval/eval.scm 80 */
											obj_t BgL_mz00_2916;

											BgL_mz00_2916 = BGl_evalzd2modulezd2zz__evmodulez00();
											if (BGl_evmodulezf3zf3zz__evmodulez00(BgL_mz00_2916))
												{	/* Eval/eval.scm 80 */
													BgL_envz00_1820 = BgL_mz00_2916;
												}
											else
												{	/* Eval/eval.scm 80 */
													BgL_envz00_1820 = BGl_symbol3191z00zz__evalz00;
												}
										}
										{	/* Eval/eval.scm 80 */

											{	/* Eval/eval.scm 80 */
												obj_t BgL_auxz00_5471;

												{	/* Eval/eval.scm 80 */
													obj_t BgL_aux3163z00_3529;

													BgL_aux3163z00_3529 =
														BGl_defaultzd2evaluatezd2zz__evalz00;
													if (PROCEDUREP(BgL_aux3163z00_3529))
														{	/* Eval/eval.scm 80 */
															BgL_auxz00_5471 = BgL_aux3163z00_3529;
														}
													else
														{
															obj_t BgL_auxz00_5474;

															BgL_auxz00_5474 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string3193z00zz__evalz00,
																BINT(((long) 2496)),
																BGl_string3360z00zz__evalz00,
																BGl_string3195z00zz__evalz00,
																BgL_aux3163z00_3529);
															FAILURE(BgL_auxz00_5474, BFALSE, BFALSE);
												}}
												BgL_arg2676z00_1818 =
													BGl_evalzf2expanderzf2zz__evalz00(BgL_fz00_1817,
													BgL_envz00_1820, BGl_expandzd2envzd2zz__expandz00,
													BgL_auxz00_5471);
									}}}
									PROCEDURE_ENTRY(BGl_za2replzd2printerza2zd2zz__evalz00)
										(BGl_za2replzd2printerza2zd2zz__evalz00,
										BgL_arg2676z00_1818, BgL_portz00_1792, BEOA);
								}
								bgl_display_char(((unsigned char) '\n'), BgL_portz00_1792);
							}
							{
								obj_t BgL_l1950z00_5482;

								BgL_l1950z00_5482 = CDR(BgL_l1950z00_1814);
								BgL_l1950z00_1814 = BgL_l1950z00_5482;
								goto BgL_zc3anonymousza32674ze3z83_1815;
							}
						}
					else
						{	/* Eval/eval.scm 706 */
							if (NULLP(BgL_l1950z00_1814))
								{	/* Eval/eval.scm 706 */
									BTRUE;
								}
							else
								{	/* Eval/eval.scm 706 */
									BGl_errorz00zz__errorz00(BGl_string3361z00zz__evalz00,
										BGl_string3314z00zz__evalz00, BgL_l1950z00_1814);
								}
						}
				}
				bgl_display_string(BGl_string3356z00zz__evalz00, BgL_portz00_1792);
				bgl_display_char(((unsigned char) '\n'), BgL_portz00_1792);
				{	/* Eval/eval.scm 714 */
					obj_t BgL_oldzd2prompterzd2_1825;

					BgL_oldzd2prompterzd2_1825 = BGl_za2promptza2z00zz__evalz00;
					if (PROCEDURE_CORRECT_ARITYP(BGl_proc3362z00zz__evalz00,
							(int) (((long) 1))))
						{	/* Eval/eval.scm 715 */
							BGl_za2promptza2z00zz__evalz00 = BGl_proc3362z00zz__evalz00;
						}
					else
						{	/* Eval/eval.scm 715 */
							BGl_errorz00zz__errorz00(BGl_symbol3212z00zz__evalz00,
								BGl_string3214z00zz__evalz00, BGl_proc3362z00zz__evalz00);
						}
					BGl_replz00zz__evalz00();
					if (PROCEDURE_CORRECT_ARITYP(BgL_oldzd2prompterzd2_1825,
							(int) (((long) 1))))
						{	/* Eval/eval.scm 717 */
							return (BGl_za2promptza2z00zz__evalz00 =
								BgL_oldzd2prompterzd2_1825, BUNSPEC);
						}
					else
						{	/* Eval/eval.scm 717 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3212z00zz__evalz00,
								BGl_string3214z00zz__evalz00, BgL_oldzd2prompterzd2_1825);
						}
				}
			}
		}
	}



/* <exit:2664> */
	obj_t BGl_zc3exitza32664ze3z83zz__evalz00(obj_t BgL_locz00_3274,
		obj_t BgL_failzd2bodyzd2_3273)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 691 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit1907z00_1794;

			if (SET_EXIT(BgL_an_exit1907z00_1794))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit1907z00_1794 = (void *) jmpbuf;
					{	/* Eval/eval.scm 691 */

						PUSH_EXIT(BgL_an_exit1907z00_1794, ((long) 1));
						{	/* Eval/eval.scm 691 */
							obj_t BgL_an_exitd1908z00_1795;

							BgL_an_exitd1908z00_1795 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Eval/eval.scm 694 */
								obj_t BgL_res1910z00_1798;

								{	/* Eval/eval.scm 694 */
									obj_t BgL_zc3anonymousza32668ze3z83_3256;

									obj_t BgL_zc3anonymousza32667ze3z83_3257;

									BgL_zc3anonymousza32668ze3z83_3256 =
										make_fx_procedure(BGl_zc3anonymousza32668ze3z83zz__evalz00,
										(int) (((long) 0)), (int) (((long) 2)));
									BgL_zc3anonymousza32667ze3z83_3257 =
										make_fx_procedure(BGl_zc3anonymousza32667ze3z83zz__evalz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza32668ze3z83_3256,
										(int) (((long) 0)), BgL_failzd2bodyzd2_3273);
									PROCEDURE_SET(BgL_zc3anonymousza32668ze3z83_3256,
										(int) (((long) 1)), BgL_locz00_3274);
									PROCEDURE_SET(BgL_zc3anonymousza32667ze3z83_3257,
										(int) (((long) 0)), BgL_an_exitd1908z00_1795);
									BgL_res1910z00_1798 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza32667ze3z83_3257,
										BgL_zc3anonymousza32668ze3z83_3256);
								}
								POP_EXIT();
								return BgL_res1910z00_1798;
							}
						}
					}
				}
		}
	}



/* _notify-assert-fail */
	obj_t BGl__notifyzd2assertzd2failz00zz__evalz00(obj_t BgL_envz00_3258,
		obj_t BgL_varsz00_3259, obj_t BgL_failzd2bodyzd2_3260,
		obj_t BgL_locz00_3261)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 689 */
			return
				BGl_notifyzd2assertzd2failz00zz__evalz00(BgL_varsz00_3259,
				BgL_failzd2bodyzd2_3260, BgL_locz00_3261);
		}
	}



/* <anonymous:2680> */
	obj_t BGl_zc3anonymousza32680ze3z83zz__evalz00(obj_t BgL_envz00_3262,
		obj_t BgL_numz00_3263)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 715 */
			{
				obj_t BgL_numz00_1827;

				BgL_numz00_1827 = BgL_numz00_3263;
				{	/* Eval/eval.scm 715 */
					obj_t BgL_arg2682z00_2929;

					{	/* Eval/eval.scm 715 */
						obj_t BgL_res2950z00_2931;

						{	/* Eval/eval.scm 715 */
							obj_t BgL_auxz00_5517;

							BgL_auxz00_5517 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2950z00_2931 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5517);
						}
						BgL_arg2682z00_2929 = BgL_res2950z00_2931;
					}
					return
						bgl_display_string(BGl_string3363z00zz__evalz00,
						BgL_arg2682z00_2929);
				}
			}
		}
	}



/* <anonymous:2668> */
	obj_t BGl_zc3anonymousza32668ze3z83zz__evalz00(obj_t BgL_envz00_3264)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 696 */
			{	/* Eval/eval.scm 697 */
				obj_t BgL_failzd2bodyzd2_3265;

				obj_t BgL_locz00_3266;

				BgL_failzd2bodyzd2_3265 =
					PROCEDURE_REF(BgL_envz00_3264, (int) (((long) 0)));
				BgL_locz00_3266 = PROCEDURE_REF(BgL_envz00_3264, (int) (((long) 1)));
				{

					if (PAIRP(BgL_locz00_3266))
						{	/* Eval/eval.scm 697 */
							return
								BGl_errorzf2locationzf2zz__errorz00
								(BGl_string3364z00zz__evalz00, BGl_string3365z00zz__evalz00,
								BgL_failzd2bodyzd2_3265, CAR(BgL_locz00_3266),
								CDR(BgL_locz00_3266));
						}
					else
						{	/* Eval/eval.scm 697 */
							return
								BGl_errorz00zz__errorz00(BGl_symbol3366z00zz__evalz00,
								BGl_string3365z00zz__evalz00, BgL_failzd2bodyzd2_3265);
						}
				}
			}
		}
	}



/* <anonymous:2667> */
	obj_t BGl_zc3anonymousza32667ze3z83zz__evalz00(obj_t BgL_envz00_3267,
		obj_t BgL_ez00_3269)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 693 */
			{	/* Eval/eval.scm 694 */
				obj_t BgL_an_exitd1908z00_3268;

				BgL_an_exitd1908z00_3268 =
					PROCEDURE_REF(BgL_envz00_3267, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1801;

					BgL_ez00_1801 = BgL_ez00_3269;
					BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1801);
					return
						BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1908z00_3268,
						BUNSPEC);
				}
			}
		}
	}



/* transcript-on */
	BGL_EXPORTED_DEF obj_t BGl_transcriptzd2onzd2zz__evalz00(obj_t BgL_filez00_62)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 738 */
			{	/* Eval/eval.scm 739 */
				bool_t BgL_testz00_5535;

				{	/* Eval/eval.scm 739 */
					obj_t BgL_arg2686z00_1837;

					{	/* Eval/eval.scm 739 */
						obj_t BgL_res2951z00_2937;

						{	/* Eval/eval.scm 739 */
							obj_t BgL_auxz00_5536;

							BgL_auxz00_5536 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2951z00_2937 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5536);
						}
						BgL_arg2686z00_1837 = BgL_res2951z00_2937;
					}
					BgL_testz00_5535 =
						(BGl_za2transcriptza2z00zz__evalz00 == BgL_arg2686z00_1837);
				}
				if (BgL_testz00_5535)
					{	/* Eval/eval.scm 739 */
						{	/* Ieee/port.scm 385 */

							BGl_za2transcriptza2z00zz__evalz00 =
								BGl_appendzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_filez00_62, BTRUE);
						}
						{	/* Eval/eval.scm 743 */
							obj_t BgL_port1953z00_1835;

							BgL_port1953z00_1835 = BGl_za2transcriptza2z00zz__evalz00;
							{	/* Eval/eval.scm 743 */
								obj_t BgL_portz00_2939;

								if (OUTPUT_PORTP(BgL_port1953z00_1835))
									{	/* Eval/eval.scm 743 */
										BgL_portz00_2939 = BgL_port1953z00_1835;
									}
								else
									{
										obj_t BgL_auxz00_5543;

										BgL_auxz00_5543 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3193z00zz__evalz00, BINT(((long) 27827)),
											BGl_string3367z00zz__evalz00,
											BGl_string3225z00zz__evalz00, BgL_port1953z00_1835);
										FAILURE(BgL_auxz00_5543, BFALSE, BFALSE);
									}
								bgl_display_string(BGl_string3368z00zz__evalz00,
									BgL_portz00_2939);
							}
							{	/* Eval/eval.scm 743 */
								char *BgL_arg2685z00_1836;

								BgL_arg2685z00_1836 = BGl_datez00zz__osz00();
								bgl_display_obj(string_to_bstring(BgL_arg2685z00_1836),
									BgL_port1953z00_1835);
							}
							bgl_display_char(((unsigned char) '\n'), BgL_port1953z00_1835);
						}
						return BUNSPEC;
					}
				else
					{	/* Eval/eval.scm 739 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol3369z00zz__evalz00,
							BGl_string3370z00zz__evalz00, BGl_za2transcriptza2z00zz__evalz00);
					}
			}
		}
	}



/* _transcript-on */
	obj_t BGl__transcriptzd2onzd2zz__evalz00(obj_t BgL_envz00_3270,
		obj_t BgL_filez00_3271)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 738 */
			{	/* Eval/eval.scm 739 */
				obj_t BgL_auxz00_5553;

				if (STRINGP(BgL_filez00_3271))
					{	/* Eval/eval.scm 739 */
						BgL_auxz00_5553 = BgL_filez00_3271;
					}
				else
					{
						obj_t BgL_auxz00_5556;

						BgL_auxz00_5556 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3193z00zz__evalz00,
							BINT(((long) 27634)), BGl_string3371z00zz__evalz00,
							BGl_string3204z00zz__evalz00, BgL_filez00_3271);
						FAILURE(BgL_auxz00_5556, BFALSE, BFALSE);
					}
				return BGl_transcriptzd2onzd2zz__evalz00(BgL_auxz00_5553);
			}
		}
	}



/* transcript-off */
	BGL_EXPORTED_DEF obj_t BGl_transcriptzd2offzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 749 */
			{	/* Eval/eval.scm 750 */
				bool_t BgL_testz00_5561;

				{	/* Eval/eval.scm 750 */
					obj_t BgL_arg2688z00_1839;

					{	/* Eval/eval.scm 750 */
						obj_t BgL_res2952z00_2942;

						{	/* Eval/eval.scm 750 */
							obj_t BgL_auxz00_5562;

							BgL_auxz00_5562 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2952z00_2942 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5562);
						}
						BgL_arg2688z00_1839 = BgL_res2952z00_2942;
					}
					BgL_testz00_5561 =
						(BGl_za2transcriptza2z00zz__evalz00 == BgL_arg2688z00_1839);
				}
				if (BgL_testz00_5561)
					{	/* Eval/eval.scm 750 */
						BGl_errorz00zz__errorz00(BGl_symbol3372z00zz__evalz00,
							BGl_string3374z00zz__evalz00, BGl_za2transcriptza2z00zz__evalz00);
					}
				else
					{	/* Eval/eval.scm 750 */
						{	/* Eval/eval.scm 755 */
							obj_t BgL_portz00_2943;

							{	/* Eval/eval.scm 755 */
								obj_t BgL_aux3177z00_3543;

								BgL_aux3177z00_3543 = BGl_za2transcriptza2z00zz__evalz00;
								if (OUTPUT_PORTP(BgL_aux3177z00_3543))
									{	/* Eval/eval.scm 755 */
										BgL_portz00_2943 = BgL_aux3177z00_3543;
									}
								else
									{
										obj_t BgL_auxz00_5569;

										BgL_auxz00_5569 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3193z00zz__evalz00, BINT(((long) 28326)),
											BGl_string3373z00zz__evalz00,
											BGl_string3225z00zz__evalz00, BgL_aux3177z00_3543);
										FAILURE(BgL_auxz00_5569, BFALSE, BFALSE);
							}}
							bgl_close_output_port(BgL_portz00_2943);
						}
						{	/* Eval/eval.scm 756 */
							obj_t BgL_res2953z00_2945;

							{	/* Eval/eval.scm 756 */
								obj_t BgL_auxz00_5574;

								BgL_auxz00_5574 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2953z00_2945 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_5574);
							}
							BGl_za2transcriptza2z00zz__evalz00 = BgL_res2953z00_2945;
			}}}
			return BUNSPEC;
		}
	}



/* _transcript-off */
	obj_t BGl__transcriptzd2offzd2zz__evalz00(obj_t BgL_envz00_3272)
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 749 */
			return BGl_transcriptzd2offzd2zz__evalz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 393249273),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 491304118),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 77210208),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 508636713),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__install_expandersz00(((long)
					302096325), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 453710891),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 174190226),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evmeaningz00(((long) 347350696),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evaluatez00(((long) 341489238),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__everrorz00(((long) 357788136),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evprimopz00(((long) 108562560),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 187663721),
				BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
			return BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					123685331), BSTRING_TO_STRING(BGl_string3375z00zz__evalz00));
		}
	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zz__evalz00()
	{
		AN_OBJECT;
		{	/* Eval/eval.scm 18 */
			BGl_definezd2primopzd2refz12z12zz__evenvz00(BGl_symbol3376z00zz__evalz00,
				__EVMEANING_ADDRESS(
					(BGl_za2czd2debugzd2replzd2valueza2zd2zz__evalz00)));
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
