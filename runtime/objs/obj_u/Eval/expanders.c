/*===========================================================================*/
/*   (Eval/expanders.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expanders.scm -indent -o objs/obj_u/Eval/expanders.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_zc3anonymousza31987ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32087ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31990ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_evmodulezd2staticzd2classz00zz__evmodulez00(obj_t);
	extern obj_t BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t);
	static obj_t BGl_expandzd2andzd2letza2za2zz__install_expandersz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31993ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_expandzd2tprintzd2zz__install_expandersz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31997ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_ez00zz__install_expandersz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32110ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__install_expandersz00 =
		BUNSPEC;
	extern obj_t BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__install_expandersz00();
	static obj_t BGl__expandzd2beginzd2zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2andzd2letza2za2zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_expandzd2definezd2macroz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2definezd2patternz00zz__evalz00(obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_zc3anonymousza32133ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32270ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int,
		obj_t);
	extern obj_t BGl_quasiquotationz00zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_expandzd2beginzd2zz__install_expandersz00(obj_t, obj_t);
	static obj_t BGl__expandzd2ifzd2zz__install_expandersz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__install_expandersz00();
	extern obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32001ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_installzd2evalzd2expanderz00zz__macroz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32276ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32005ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__install_expandersz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_expandzd2definezd2expanderz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t);
	extern obj_t BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t);
	static obj_t BGl_zc3anonymousza32154ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t);
	static obj_t BGl_list2867z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_list2870z00zz__install_expandersz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__install_expandersz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evobjectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evmodulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_expandz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_argsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_recordz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_structz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_tryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_doz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_casez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_boolz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_quotez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_expandzd2quotezd2zz__expander_quotez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__install_expandersz00();
	static obj_t BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
	static obj_t BGl_zc3anonymousza32028ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32174ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_expandzd2errorzd2zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31950ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nilza2z00zz__evalz00;
	static obj_t BGl_zc3anonymousza32052ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31953ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_installzd2expanderzd2zz__macroz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t);
	extern obj_t BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32204ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_expandzd2ifzd2zz__install_expandersz00(obj_t, obj_t);
	static obj_t BGl_symbol2704z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2706z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2708z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2710z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2712z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_installzd2compilerzd2expanderz00zz__macroz00(obj_t, obj_t);
	static obj_t BGl_symbol2715z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2718z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2721z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2724z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2727z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2730z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32199ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2733z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2736z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2739z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2742z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2745z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2748z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2751z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2753z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2755z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2757z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2759z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_expandzd2testzd2zz__install_expandersz00(obj_t, obj_t);
	static obj_t BGl_symbol2762z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2765z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32067ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2768z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2771z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2773z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2775z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2777z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2779z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2781z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2783z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2785z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2787z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31969ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2789z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2791z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2802z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2793z00zz__install_expandersz00 = BUNSPEC;
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_symbol2805z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2796z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2808z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2810z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2799z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2812z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2814z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2816z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2818z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2820z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2822z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2824z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2826z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31973ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2828z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2830z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2832z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2835z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2838z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2841z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2844z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2846z00zz__install_expandersz00 = BUNSPEC;
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_symbol2848z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2850z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2853z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2855z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2857z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31976ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_symbol2860z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2863z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2865z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2868z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2871z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_symbol2875z00zz__install_expandersz00 = BUNSPEC;
	static obj_t
		BGl__installzd2allzd2expandersz12z12zz__install_expandersz00(obj_t);
	static obj_t BGl_symbol2877z00zz__install_expandersz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31980ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__expandzd2tprintzd2zz__install_expandersz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
	static bool_t BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00;
	static obj_t BGl_makezd2ifzd2zz__install_expandersz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31983ze3z83zz__install_expandersz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__install_expandersz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2andzd2letza2zd2envz70zz__install_expandersz00,
		BgL_bgl__expandza7d2andza7d22884z00,
		BGl__expandzd2andzd2letza2za2zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2714z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312885z00,
		BGl_zc3anonymousza31950ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2tprintzd2envz00zz__install_expandersz00,
		BgL_bgl__expandza7d2tprint2886za7,
		BGl__expandzd2tprintzd2zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2717z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312887z00,
		BGl_zc3anonymousza31953ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2720z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312888z00,
		BGl_zc3anonymousza31969ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2723z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312889z00,
		BGl_zc3anonymousza31973ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2726z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312890z00,
		BGl_zc3anonymousza31976ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2729z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312891z00,
		BGl_zc3anonymousza31980ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2732z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312892z00,
		BGl_zc3anonymousza31983ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2735z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312893z00,
		BGl_zc3anonymousza31987ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2738z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312894z00,
		BGl_zc3anonymousza31990ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2741z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312895z00,
		BGl_zc3anonymousza31993ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2744z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a312896z00,
		BGl_zc3anonymousza31997ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2747z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322897z00,
		BGl_zc3anonymousza32001ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2750z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322898z00,
		BGl_zc3anonymousza32005ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2761z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322899z00,
		BGl_zc3anonymousza32028ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2764z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322900z00,
		BGl_zc3anonymousza32052ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2767z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322901z00,
		BGl_zc3anonymousza32067ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2770z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322902z00,
		BGl_zc3anonymousza32087ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2801z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322903z00,
		BGl_zc3anonymousza32154ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2804z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322904z00,
		BGl_zc3anonymousza32174ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2795z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322905z00,
		BGl_zc3anonymousza32110ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2807z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322906z00,
		BGl_zc3anonymousza32199ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2798z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322907z00,
		BGl_zc3anonymousza32133ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2834z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322908z00,
		BGl_zc3anonymousza32204ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2837z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322909z00,
		BGl_zc3anonymousza32270ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2840z00zz__install_expandersz00,
		BgL_bgl_za7c3anonymousza7a322910z00,
		BGl_zc3anonymousza32276ze3z83zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2843z00zz__install_expandersz00,
		BgL_bgl_eza700za7za7__install_2911za7, BGl_ez00zz__install_expandersz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2ifzd2envz00zz__install_expandersz00,
		BgL_bgl__expandza7d2ifza7d2za72912za7,
		BGl__expandzd2ifzd2zz__install_expandersz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2705z00zz__install_expandersz00,
		BgL_bgl_string2705za700za7za7_2913za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2707z00zz__install_expandersz00,
		BgL_bgl_string2707za700za7za7_2914za7, "test-aux-for-nil", 16);
	      DEFINE_STRING(BGl_string2709z00zz__install_expandersz00,
		BgL_bgl_string2709za700za7za7_2915za7, "if", 2);
	      DEFINE_STRING(BGl_string2711z00zz__install_expandersz00,
		BgL_bgl_string2711za700za7za7_2916za7, "null?", 5);
	      DEFINE_STRING(BGl_string2713z00zz__install_expandersz00,
		BgL_bgl_string2713za700za7za7_2917za7, "quote", 5);
	      DEFINE_STRING(BGl_string2716z00zz__install_expandersz00,
		BgL_bgl_string2716za700za7za7_2918za7, "@", 1);
	      DEFINE_STRING(BGl_string2719z00zz__install_expandersz00,
		BgL_bgl_string2719za700za7za7_2919za7, "quasiquote", 10);
	      DEFINE_STRING(BGl_string2722z00zz__install_expandersz00,
		BgL_bgl_string2722za700za7za7_2920za7, "define-macro", 12);
	      DEFINE_STRING(BGl_string2725z00zz__install_expandersz00,
		BgL_bgl_string2725za700za7za7_2921za7, "define-hygiene-macro", 20);
	      DEFINE_STRING(BGl_string2728z00zz__install_expandersz00,
		BgL_bgl_string2728za700za7za7_2922za7, "define-expander", 15);
	      DEFINE_STRING(BGl_string2731z00zz__install_expandersz00,
		BgL_bgl_string2731za700za7za7_2923za7, "cond", 4);
	      DEFINE_STRING(BGl_string2734z00zz__install_expandersz00,
		BgL_bgl_string2734za700za7za7_2924za7, "do", 2);
	      DEFINE_STRING(BGl_string2737z00zz__install_expandersz00,
		BgL_bgl_string2737za700za7za7_2925za7, "try", 3);
	      DEFINE_STRING(BGl_string2740z00zz__install_expandersz00,
		BgL_bgl_string2740za700za7za7_2926za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2743z00zz__install_expandersz00,
		BgL_bgl_string2743za700za7za7_2927za7, "match-lambda", 12);
	      DEFINE_STRING(BGl_string2746z00zz__install_expandersz00,
		BgL_bgl_string2746za700za7za7_2928za7, "define-pattern", 14);
	      DEFINE_STRING(BGl_string2749z00zz__install_expandersz00,
		BgL_bgl_string2749za700za7za7_2929za7, "delay", 5);
	      DEFINE_STRING(BGl_string2752z00zz__install_expandersz00,
		BgL_bgl_string2752za700za7za7_2930za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2754z00zz__install_expandersz00,
		BgL_bgl_string2754za700za7za7_2931za7, "string-case", 11);
	      DEFINE_STRING(BGl_string2756z00zz__install_expandersz00,
		BgL_bgl_string2756za700za7za7_2932za7, "lalr-grammar", 12);
	      DEFINE_STRING(BGl_string2758z00zz__install_expandersz00,
		BgL_bgl_string2758za700za7za7_2933za7, "begin", 5);
	      DEFINE_STRING(BGl_string2760z00zz__install_expandersz00,
		BgL_bgl_string2760za700za7za7_2934za7, "failure", 7);
	      DEFINE_STRING(BGl_string2763z00zz__install_expandersz00,
		BgL_bgl_string2763za700za7za7_2935za7, "receive", 7);
	      DEFINE_STRING(BGl_string2766z00zz__install_expandersz00,
		BgL_bgl_string2766za700za7za7_2936za7, "when", 4);
	      DEFINE_STRING(BGl_string2769z00zz__install_expandersz00,
		BgL_bgl_string2769za700za7za7_2937za7, "unless", 6);
	      DEFINE_STRING(BGl_string2772z00zz__install_expandersz00,
		BgL_bgl_string2772za700za7za7_2938za7, "define-record-type", 18);
	      DEFINE_STRING(BGl_string2774z00zz__install_expandersz00,
		BgL_bgl_string2774za700za7za7_2939za7, "args-parse", 10);
	      DEFINE_STRING(BGl_string2776z00zz__install_expandersz00,
		BgL_bgl_string2776za700za7za7_2940za7, "tprint", 6);
	      DEFINE_STRING(BGl_string2778z00zz__install_expandersz00,
		BgL_bgl_string2778za700za7za7_2941za7, "and-let*", 8);
	      DEFINE_STRING(BGl_string2780z00zz__install_expandersz00,
		BgL_bgl_string2780za700za7za7_2942za7, "define-syntax", 13);
	      DEFINE_STRING(BGl_string2782z00zz__install_expandersz00,
		BgL_bgl_string2782za700za7za7_2943za7, "letrec-syntax", 13);
	      DEFINE_STRING(BGl_string2784z00zz__install_expandersz00,
		BgL_bgl_string2784za700za7za7_2944za7, "let-syntax", 10);
	      DEFINE_STRING(BGl_string2786z00zz__install_expandersz00,
		BgL_bgl_string2786za700za7za7_2945za7, "when-trace", 10);
	      DEFINE_STRING(BGl_string2788z00zz__install_expandersz00,
		BgL_bgl_string2788za700za7za7_2946za7, "compiler", 8);
	      DEFINE_STRING(BGl_string2800z00zz__install_expandersz00,
		BgL_bgl_string2800za700za7za7_2947za7, "with-handler", 12);
	      DEFINE_STRING(BGl_string2790z00zz__install_expandersz00,
		BgL_bgl_string2790za700za7za7_2948za7, "with-trace", 10);
	      DEFINE_STRING(BGl_string2792z00zz__install_expandersz00,
		BgL_bgl_string2792za700za7za7_2949za7, "trace-item", 10);
	extern obj_t BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2allzd2expandersz12zd2envzc0zz__install_expandersz00,
		BgL_bgl__installza7d2allza7d2950z00,
		BGl__installzd2allzd2expandersz12z12zz__install_expandersz00, 0L, BUNSPEC,
		0);
	      DEFINE_STRING(BGl_string2803z00zz__install_expandersz00,
		BgL_bgl_string2803za700za7za7_2951za7, "multiple-value-bind", 19);
	      DEFINE_STRING(BGl_string2794z00zz__install_expandersz00,
		BgL_bgl_string2794za700za7za7_2952za7, "bind-exit", 9);
	      DEFINE_STRING(BGl_string2806z00zz__install_expandersz00,
		BgL_bgl_string2806za700za7za7_2953za7, "module", 6);
	      DEFINE_STRING(BGl_string2797z00zz__install_expandersz00,
		BgL_bgl_string2797za700za7za7_2954za7, "unwind-protect", 14);
	      DEFINE_STRING(BGl_string2809z00zz__install_expandersz00,
		BgL_bgl_string2809za700za7za7_2955za7, "let", 3);
	      DEFINE_STRING(BGl_string2811z00zz__install_expandersz00,
		BgL_bgl_string2811za700za7za7_2956za7, "let*", 4);
	      DEFINE_STRING(BGl_string2813z00zz__install_expandersz00,
		BgL_bgl_string2813za700za7za7_2957za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2815z00zz__install_expandersz00,
		BgL_bgl_string2815za700za7za7_2958za7, "letrec*", 7);
	      DEFINE_STRING(BGl_string2817z00zz__install_expandersz00,
		BgL_bgl_string2817za700za7za7_2959za7, "labels", 6);
	      DEFINE_STRING(BGl_string2819z00zz__install_expandersz00,
		BgL_bgl_string2819za700za7za7_2960za7, "define", 6);
	      DEFINE_STRING(BGl_string2821z00zz__install_expandersz00,
		BgL_bgl_string2821za700za7za7_2961za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2823z00zz__install_expandersz00,
		BgL_bgl_string2823za700za7za7_2962za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2825z00zz__install_expandersz00,
		BgL_bgl_string2825za700za7za7_2963za7, "define-method", 13);
	      DEFINE_STRING(BGl_string2827z00zz__install_expandersz00,
		BgL_bgl_string2827za700za7za7_2964za7, "define-struct", 13);
	      DEFINE_STRING(BGl_string2829z00zz__install_expandersz00,
		BgL_bgl_string2829za700za7za7_2965za7, "case", 4);
	      DEFINE_STRING(BGl_string2831z00zz__install_expandersz00,
		BgL_bgl_string2831za700za7za7_2966za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string2833z00zz__install_expandersz00,
		BgL_bgl_string2833za700za7za7_2967za7, "profile", 7);
	      DEFINE_STRING(BGl_string2836z00zz__install_expandersz00,
		BgL_bgl_string2836za700za7za7_2968za7, "instantiate", 11);
	      DEFINE_STRING(BGl_string2839z00zz__install_expandersz00,
		BgL_bgl_string2839za700za7za7_2969za7, "with-access", 11);
	      DEFINE_STRING(BGl_string2842z00zz__install_expandersz00,
		BgL_bgl_string2842za700za7za7_2970za7, "co-instantiate", 14);
	extern obj_t BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00;
	   
		 
		DEFINE_STRING(BGl_string2845z00zz__install_expandersz00,
		BgL_bgl_string2845za700za7za7_2971za7, "define-class", 12);
	      DEFINE_STRING(BGl_string2847z00zz__install_expandersz00,
		BgL_bgl_string2847za700za7za7_2972za7, "define-abstract-class", 21);
	      DEFINE_STRING(BGl_string2849z00zz__install_expandersz00,
		BgL_bgl_string2849za700za7za7_2973za7, "define-final-class", 18);
	      DEFINE_STRING(BGl_string2851z00zz__install_expandersz00,
		BgL_bgl_string2851za700za7za7_2974za7, "eval", 4);
	      DEFINE_STRING(BGl_string2852z00zz__install_expandersz00,
		BgL_bgl_string2852za700za7za7_2975za7, "Unknown class", 13);
	      DEFINE_STRING(BGl_string2854z00zz__install_expandersz00,
		BgL_bgl_string2854za700za7za7_2976za7, "value", 5);
	      DEFINE_STRING(BGl_string2856z00zz__install_expandersz00,
		BgL_bgl_string2856za700za7za7_2977za7, "GC-profile-push", 15);
	      DEFINE_STRING(BGl_string2858z00zz__install_expandersz00,
		BgL_bgl_string2858za700za7za7_2978za7, "GC-profile-pop", 14);
	      DEFINE_STRING(BGl_string2859z00zz__install_expandersz00,
		BgL_bgl_string2859za700za7za7_2979za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2861z00zz__install_expandersz00,
		BgL_bgl_string2861za700za7za7_2980za7, "call-with-values", 16);
	      DEFINE_STRING(BGl_string2862z00zz__install_expandersz00,
		BgL_bgl_string2862za700za7za7_2981za7, "Illegal `failure' form", 22);
	extern obj_t BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00;
	   
		 
		DEFINE_STRING(BGl_string2864z00zz__install_expandersz00,
		BgL_bgl_string2864za700za7za7_2982za7, "make-promise", 12);
	      DEFINE_STRING(BGl_string2866z00zz__install_expandersz00,
		BgL_bgl_string2866za700za7za7_2983za7, "not", 3);
	      DEFINE_STRING(BGl_string2869z00zz__install_expandersz00,
		BgL_bgl_string2869za700za7za7_2984za7, "__r4_output_6_10_3", 18);
	      DEFINE_STRING(BGl_string2872z00zz__install_expandersz00,
		BgL_bgl_string2872za700za7za7_2985za7, "current-error-port", 18);
	      DEFINE_STRING(BGl_string2873z00zz__install_expandersz00,
		BgL_bgl_string2873za700za7za7_2986za7, ":", 1);
	      DEFINE_STRING(BGl_string2874z00zz__install_expandersz00,
		BgL_bgl_string2874za700za7za7_2987za7, ",", 1);
	      DEFINE_STRING(BGl_string2876z00zz__install_expandersz00,
		BgL_bgl_string2876za700za7za7_2988za7, "at", 2);
	      DEFINE_STRING(BGl_string2878z00zz__install_expandersz00,
		BgL_bgl_string2878za700za7za7_2989za7, "and", 3);
	      DEFINE_STRING(BGl_string2880z00zz__install_expandersz00,
		BgL_bgl_string2880za700za7za7_2990za7, "duplicate variable in the bindings",
		34);
	      DEFINE_STRING(BGl_string2879z00zz__install_expandersz00,
		BgL_bgl_string2879za700za7za7_2991za7, "bindings must be a list", 23);
	      DEFINE_STRING(BGl_string2881z00zz__install_expandersz00,
		BgL_bgl_string2881za700za7za7_2992za7, "ill-formed binding", 18);
	      DEFINE_STRING(BGl_string2882z00zz__install_expandersz00,
		BgL_bgl_string2882za700za7za7_2993za7, "Illegal `and-let*' form", 23);
	      DEFINE_STRING(BGl_string2883z00zz__install_expandersz00,
		BgL_bgl_string2883za700za7za7_2994za7, "__install_expanders", 19);
	extern obj_t BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00;
	extern obj_t BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00;
	extern obj_t BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00;
	extern obj_t BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00;
	extern obj_t BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00;
	extern obj_t BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00;
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_expandzd2beginzd2envz00zz__install_expandersz00,
		BgL_bgl__expandza7d2beginza72995z00,
		BGl__expandzd2beginzd2zz__install_expandersz00, 0L, BUNSPEC, 2);
	extern obj_t
		BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00;
	extern obj_t BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00;
	extern obj_t BGl_evalzd2expandzd2cozd2instantiatezd2envz00zz__evobjectz00;
	extern obj_t BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00;
	extern obj_t BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00;
	extern obj_t
		BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00;
	extern obj_t BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00;
	extern obj_t BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__install_expandersz00(long
		BgL_checksumz00_2674, char *BgL_fromz00_2675)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__install_expandersz00))
				{
					BGl_requirezd2initializa7ationz75zz__install_expandersz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__install_expandersz00();
					BGl_importedzd2moduleszd2initz00zz__install_expandersz00();
					BGl_toplevelzd2initzd2zz__install_expandersz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 15 */
			BGl_symbol2704z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2705z00zz__install_expandersz00);
			BGl_symbol2706z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2707z00zz__install_expandersz00);
			BGl_symbol2708z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2709z00zz__install_expandersz00);
			BGl_symbol2710z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2711z00zz__install_expandersz00);
			BGl_symbol2712z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2713z00zz__install_expandersz00);
			BGl_symbol2715z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2716z00zz__install_expandersz00);
			BGl_symbol2718z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2719z00zz__install_expandersz00);
			BGl_symbol2721z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2722z00zz__install_expandersz00);
			BGl_symbol2724z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2725z00zz__install_expandersz00);
			BGl_symbol2727z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2728z00zz__install_expandersz00);
			BGl_symbol2730z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2731z00zz__install_expandersz00);
			BGl_symbol2733z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2734z00zz__install_expandersz00);
			BGl_symbol2736z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2737z00zz__install_expandersz00);
			BGl_symbol2739z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2740z00zz__install_expandersz00);
			BGl_symbol2742z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2743z00zz__install_expandersz00);
			BGl_symbol2745z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2746z00zz__install_expandersz00);
			BGl_symbol2748z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2749z00zz__install_expandersz00);
			BGl_symbol2751z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2752z00zz__install_expandersz00);
			BGl_symbol2753z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2754z00zz__install_expandersz00);
			BGl_symbol2755z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2756z00zz__install_expandersz00);
			BGl_symbol2757z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2758z00zz__install_expandersz00);
			BGl_symbol2759z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2760z00zz__install_expandersz00);
			BGl_symbol2762z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2763z00zz__install_expandersz00);
			BGl_symbol2765z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2766z00zz__install_expandersz00);
			BGl_symbol2768z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2769z00zz__install_expandersz00);
			BGl_symbol2771z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2772z00zz__install_expandersz00);
			BGl_symbol2773z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2774z00zz__install_expandersz00);
			BGl_symbol2775z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2776z00zz__install_expandersz00);
			BGl_symbol2777z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2778z00zz__install_expandersz00);
			BGl_symbol2779z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2780z00zz__install_expandersz00);
			BGl_symbol2781z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2782z00zz__install_expandersz00);
			BGl_symbol2783z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2784z00zz__install_expandersz00);
			BGl_symbol2785z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2786z00zz__install_expandersz00);
			BGl_symbol2787z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2788z00zz__install_expandersz00);
			BGl_symbol2789z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2790z00zz__install_expandersz00);
			BGl_symbol2791z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2792z00zz__install_expandersz00);
			BGl_symbol2793z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2794z00zz__install_expandersz00);
			BGl_symbol2796z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2797z00zz__install_expandersz00);
			BGl_symbol2799z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2800z00zz__install_expandersz00);
			BGl_symbol2802z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2803z00zz__install_expandersz00);
			BGl_symbol2805z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2806z00zz__install_expandersz00);
			BGl_symbol2808z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2809z00zz__install_expandersz00);
			BGl_symbol2810z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2811z00zz__install_expandersz00);
			BGl_symbol2812z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2813z00zz__install_expandersz00);
			BGl_symbol2814z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2815z00zz__install_expandersz00);
			BGl_symbol2816z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2817z00zz__install_expandersz00);
			BGl_symbol2818z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2819z00zz__install_expandersz00);
			BGl_symbol2820z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2821z00zz__install_expandersz00);
			BGl_symbol2822z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2823z00zz__install_expandersz00);
			BGl_symbol2824z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2825z00zz__install_expandersz00);
			BGl_symbol2826z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2827z00zz__install_expandersz00);
			BGl_symbol2828z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2829z00zz__install_expandersz00);
			BGl_symbol2830z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2831z00zz__install_expandersz00);
			BGl_symbol2832z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2833z00zz__install_expandersz00);
			BGl_symbol2835z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2836z00zz__install_expandersz00);
			BGl_symbol2838z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2839z00zz__install_expandersz00);
			BGl_symbol2841z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2842z00zz__install_expandersz00);
			BGl_symbol2844z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2845z00zz__install_expandersz00);
			BGl_symbol2846z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2847z00zz__install_expandersz00);
			BGl_symbol2848z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2849z00zz__install_expandersz00);
			BGl_symbol2850z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2851z00zz__install_expandersz00);
			BGl_symbol2853z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2854z00zz__install_expandersz00);
			BGl_symbol2855z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2856z00zz__install_expandersz00);
			BGl_symbol2857z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2858z00zz__install_expandersz00);
			BGl_symbol2860z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2861z00zz__install_expandersz00);
			BGl_symbol2863z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2864z00zz__install_expandersz00);
			BGl_symbol2865z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2866z00zz__install_expandersz00);
			BGl_symbol2868z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2869z00zz__install_expandersz00);
			BGl_list2867z00zz__install_expandersz00 =
				MAKE_PAIR(BGl_symbol2715z00zz__install_expandersz00,
				MAKE_PAIR(BGl_symbol2775z00zz__install_expandersz00,
					MAKE_PAIR(BGl_symbol2868z00zz__install_expandersz00, BNIL)));
			BGl_symbol2871z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2872z00zz__install_expandersz00);
			BGl_list2870z00zz__install_expandersz00 =
				MAKE_PAIR(BGl_symbol2871z00zz__install_expandersz00, BNIL);
			BGl_symbol2875z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2876z00zz__install_expandersz00);
			return (BGl_symbol2877z00zz__install_expandersz00 =
				bstring_to_symbol(BGl_string2878z00zz__install_expandersz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 15 */
			BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
				((bool_t) 0);
			if (BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00)
				{	/* Eval/expanders.scm 520 */
					return BFALSE;
				}
			else
				{	/* Eval/expanders.scm 520 */
					BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
						((bool_t) 1);
					return
						BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
				}
		}
	}



/* expand-test */
	obj_t BGl_expandzd2testzd2zz__install_expandersz00(obj_t BgL_xz00_1,
		obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 77 */
			if (CBOOL(BGl_za2nilza2z00zz__evalz00))
				{	/* Eval/expanders.scm 78 */
					return
						PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2, BgL_xz00_1, BgL_ez00_2,
						BEOA);
				}
			else
				{	/* Eval/expanders.scm 80 */
					obj_t BgL_arg1906z00_787;

					obj_t BgL_arg1907z00_788;

					{	/* Eval/expanders.scm 80 */
						obj_t BgL_arg1908z00_789;

						obj_t BgL_arg1909z00_790;

						BgL_arg1908z00_789 = BGl_symbol2704z00zz__install_expandersz00;
						{	/* Eval/expanders.scm 80 */
							obj_t BgL_arg1910z00_791;

							obj_t BgL_arg1911z00_792;

							BgL_arg1910z00_791 =
								MAKE_PAIR(BGl_symbol2706z00zz__install_expandersz00, BNIL);
							{	/* Eval/expanders.scm 81 */
								obj_t BgL_arg1915z00_796;

								obj_t BgL_arg1916z00_797;

								BgL_arg1915z00_796 = BGl_symbol2708z00zz__install_expandersz00;
								{	/* Eval/expanders.scm 81 */
									obj_t BgL_arg1918z00_798;

									obj_t BgL_arg1919z00_799;

									BgL_arg1918z00_798 =
										BGl_symbol2706z00zz__install_expandersz00;
									{	/* Eval/expanders.scm 82 */
										obj_t BgL_arg1924z00_804;

										obj_t BgL_arg1925z00_805;

										BgL_arg1924z00_804 =
											BGl_symbol2708z00zz__install_expandersz00;
										{	/* Eval/expanders.scm 82 */
											obj_t BgL_arg1926z00_806;

											{	/* Eval/expanders.scm 82 */
												obj_t BgL_arg1931z00_811;

												obj_t BgL_arg1932z00_812;

												BgL_arg1931z00_811 =
													BGl_symbol2710z00zz__install_expandersz00;
												{	/* Eval/expanders.scm 82 */
													obj_t BgL_list1933z00_813;

													BgL_list1933z00_813 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg1932z00_812 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_symbol2706z00zz__install_expandersz00,
														BgL_list1933z00_813);
												}
												BgL_arg1926z00_806 =
													MAKE_PAIR(BgL_arg1931z00_811, BgL_arg1932z00_812);
											}
											{	/* Eval/expanders.scm 82 */
												obj_t BgL_list1928z00_808;

												{	/* Eval/expanders.scm 82 */
													obj_t BgL_arg1929z00_809;

													{	/* Eval/expanders.scm 82 */
														obj_t BgL_arg1930z00_810;

														BgL_arg1930z00_810 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1929z00_809 =
															MAKE_PAIR(BTRUE, BgL_arg1930z00_810);
													}
													BgL_list1928z00_808 =
														MAKE_PAIR(BFALSE, BgL_arg1929z00_809);
												}
												BgL_arg1925z00_805 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1926z00_806, BgL_list1928z00_808);
											}
										}
										BgL_arg1919z00_799 =
											MAKE_PAIR(BgL_arg1924z00_804, BgL_arg1925z00_805);
									}
									{	/* Eval/expanders.scm 81 */
										obj_t BgL_list1921z00_801;

										{	/* Eval/expanders.scm 81 */
											obj_t BgL_arg1922z00_802;

											{	/* Eval/expanders.scm 81 */
												obj_t BgL_arg1923z00_803;

												BgL_arg1923z00_803 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1922z00_802 =
													MAKE_PAIR(BFALSE, BgL_arg1923z00_803);
											}
											BgL_list1921z00_801 =
												MAKE_PAIR(BgL_arg1919z00_799, BgL_arg1922z00_802);
										}
										BgL_arg1916z00_797 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1918z00_798, BgL_list1921z00_801);
									}
								}
								BgL_arg1911z00_792 =
									MAKE_PAIR(BgL_arg1915z00_796, BgL_arg1916z00_797);
							}
							{	/* Eval/expanders.scm 80 */
								obj_t BgL_list1913z00_794;

								{	/* Eval/expanders.scm 80 */
									obj_t BgL_arg1914z00_795;

									BgL_arg1914z00_795 = MAKE_PAIR(BNIL, BNIL);
									BgL_list1913z00_794 =
										MAKE_PAIR(BgL_arg1911z00_792, BgL_arg1914z00_795);
								}
								BgL_arg1909z00_790 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1910z00_791, BgL_list1913z00_794);
							}
						}
						BgL_arg1906z00_787 =
							MAKE_PAIR(BgL_arg1908z00_789, BgL_arg1909z00_790);
					}
					{	/* Eval/expanders.scm 86 */
						obj_t BgL_arg1935z00_814;

						BgL_arg1935z00_814 =
							PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2, BgL_xz00_1, BgL_ez00_2,
							BEOA);
						{	/* Eval/expanders.scm 80 */
							obj_t BgL_list1938z00_816;

							BgL_list1938z00_816 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg1907z00_788 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1935z00_814,
								BgL_list1938z00_816);
						}
					}
					return MAKE_PAIR(BgL_arg1906z00_787, BgL_arg1907z00_788);
				}
		}
	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__install_expandersz00(obj_t BgL_pz00_3,
		obj_t BgL_mz00_4, obj_t BgL_xz00_5)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 91 */
			{	/* Eval/expanders.scm 92 */
				obj_t BgL_locz00_817;

				if (EXTENDED_PAIRP(BgL_xz00_5))
					{	/* Eval/expanders.scm 92 */
						BgL_locz00_817 = CER(BgL_xz00_5);
					}
				else
					{	/* Eval/expanders.scm 92 */
						BgL_locz00_817 = BFALSE;
					}
				{	/* Eval/expanders.scm 93 */
					bool_t BgL_testz00_2789;

					if (PAIRP(BgL_locz00_817))
						{	/* Eval/expanders.scm 93 */
							bool_t BgL_testz00_2792;

							{	/* Eval/expanders.scm 93 */
								obj_t BgL_auxz00_2793;

								BgL_auxz00_2793 = CDR(BgL_locz00_817);
								BgL_testz00_2792 = PAIRP(BgL_auxz00_2793);
							}
							if (BgL_testz00_2792)
								{	/* Eval/expanders.scm 93 */
									obj_t BgL_auxz00_2796;

									BgL_auxz00_2796 = CDR(CDR(BgL_locz00_817));
									BgL_testz00_2789 = PAIRP(BgL_auxz00_2796);
								}
							else
								{	/* Eval/expanders.scm 93 */
									BgL_testz00_2789 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expanders.scm 93 */
							BgL_testz00_2789 = ((bool_t) 0);
						}
					if (BgL_testz00_2789)
						{	/* Eval/expanders.scm 93 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BgL_pz00_3, BgL_mz00_4,
								BgL_xz00_5, CAR(CDR(BgL_locz00_817)),
								CAR(CDR(CDR(BgL_locz00_817))));
						}
					else
						{	/* Eval/expanders.scm 93 */
							return
								BGl_errorz00zz__errorz00(BgL_pz00_3, BgL_mz00_4, BgL_xz00_5);
						}
				}
			}
		}
	}



/* install-all-expanders! */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2allzd2expandersz12z12zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 105 */
			if (BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00)
				{	/* Eval/expanders.scm 106 */
					return BFALSE;
				}
			else
				{	/* Eval/expanders.scm 106 */
					BGl_za2expanderszd2installedzd2pza2z00zz__install_expandersz00 =
						((bool_t) 1);
					return
						BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00();
				}
		}
	}



/* _install-all-expanders! */
	obj_t BGl__installzd2allzd2expandersz12z12zz__install_expandersz00(obj_t
		BgL_envz00_2477)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 105 */
			return BGl_installzd2allzd2expandersz12z12zz__install_expandersz00();
		}
	}



/* %install-all-expanders! */
	obj_t BGl_z52installzd2allzd2expandersz12z40zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 119 */
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2712z00zz__install_expandersz00,
				BGl_proc2714z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2715z00zz__install_expandersz00,
				BGl_proc2717z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2718z00zz__install_expandersz00,
				BGl_proc2720z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2721z00zz__install_expandersz00,
				BGl_proc2723z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2724z00zz__install_expandersz00,
				BGl_proc2726z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2727z00zz__install_expandersz00,
				BGl_proc2729z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2730z00zz__install_expandersz00,
				BGl_proc2732z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2733z00zz__install_expandersz00,
				BGl_proc2735z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2736z00zz__install_expandersz00,
				BGl_proc2738z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2739z00zz__install_expandersz00,
				BGl_proc2741z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2742z00zz__install_expandersz00,
				BGl_proc2744z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2745z00zz__install_expandersz00,
				BGl_proc2747z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2748z00zz__install_expandersz00,
				BGl_proc2750z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2751z00zz__install_expandersz00,
				BGl_expandzd2regularzd2grammarzd2envzd2zz__rgc_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2753z00zz__install_expandersz00,
				BGl_expandzd2stringzd2casezd2envzd2zz__rgc_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2755z00zz__install_expandersz00,
				BGl_expandzd2lalrzd2grammarzd2envzd2zz__lalr_expandz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2757z00zz__install_expandersz00,
				BGl_expandzd2beginzd2envz00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2759z00zz__install_expandersz00,
				BGl_proc2761z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2762z00zz__install_expandersz00,
				BGl_proc2764z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2765z00zz__install_expandersz00,
				BGl_proc2767z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2768z00zz__install_expandersz00,
				BGl_proc2770z00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2771z00zz__install_expandersz00,
				BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2773z00zz__install_expandersz00,
				BGl_expandzd2argszd2parsezd2envzd2zz__expander_argsz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2775z00zz__install_expandersz00,
				BGl_expandzd2tprintzd2envz00zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2777z00zz__install_expandersz00,
				BGl_expandzd2andzd2letza2zd2envz70zz__install_expandersz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2779z00zz__install_expandersz00,
				BGl_expandzd2definezd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2781z00zz__install_expandersz00,
				BGl_expandzd2letreczd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			BGl_installzd2expanderzd2zz__macroz00
				(BGl_symbol2783z00zz__install_expandersz00,
				BGl_expandzd2letzd2syntaxzd2envzd2zz__r5_macro_4_3_syntaxz00);
			BGl_installzd2compilerzd2expanderz00zz__macroz00
				(BGl_symbol2785z00zz__install_expandersz00,
				BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
				(BGl_symbol2787z00zz__install_expandersz00));
			BGl_installzd2compilerzd2expanderz00zz__macroz00
				(BGl_symbol2789z00zz__install_expandersz00,
				BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
				(BGl_symbol2787z00zz__install_expandersz00));
			BGl_installzd2compilerzd2expanderz00zz__macroz00
				(BGl_symbol2791z00zz__install_expandersz00,
				BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
				(BGl_symbol2787z00zz__install_expandersz00));
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2793z00zz__install_expandersz00,
				BGl_proc2795z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2796z00zz__install_expandersz00,
				BGl_proc2798z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2799z00zz__install_expandersz00,
				BGl_proc2801z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2802z00zz__install_expandersz00,
				BGl_proc2804z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2805z00zz__install_expandersz00,
				BGl_proc2807z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2708z00zz__install_expandersz00,
				BGl_expandzd2ifzd2envz00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2704z00zz__install_expandersz00,
				BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2808z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2810z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2812z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2814z00zz__install_expandersz00,
				BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2816z00zz__install_expandersz00,
				BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2818z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2820z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2822z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2824z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2826z00zz__install_expandersz00,
				BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2828z00zz__install_expandersz00,
				BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2830z00zz__install_expandersz00,
				BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2832z00zz__install_expandersz00,
				BGl_proc2834z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2835z00zz__install_expandersz00,
				BGl_proc2837z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2838z00zz__install_expandersz00,
				BGl_proc2840z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2841z00zz__install_expandersz00,
				BGl_evalzd2expandzd2cozd2instantiatezd2envz00zz__evobjectz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2844z00zz__install_expandersz00,
				BGl_proc2843z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2846z00zz__install_expandersz00,
				BGl_proc2843z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2848z00zz__install_expandersz00,
				BGl_proc2843z00zz__install_expandersz00);
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2785z00zz__install_expandersz00,
				BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
				(BGl_symbol2850z00zz__install_expandersz00));
			BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2789z00zz__install_expandersz00,
				BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
				(BGl_symbol2850z00zz__install_expandersz00));
			return
				BGl_installzd2evalzd2expanderz00zz__macroz00
				(BGl_symbol2791z00zz__install_expandersz00,
				BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
				(BGl_symbol2850z00zz__install_expandersz00));
		}
	}



/* e */
	obj_t BGl_ez00zz__install_expandersz00(obj_t BgL_envz00_2504,
		obj_t BgL_xz00_2505, obj_t BgL_ez00_2506)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 404 */
			{
				obj_t BgL_xz00_1302;

				obj_t BgL_ez00_1303;

				BgL_xz00_1302 = BgL_xz00_2505;
				BgL_ez00_1303 = BgL_ez00_2506;
				{	/* Eval/expanders.scm 404 */
					obj_t BgL_arg2280z00_2159;

					BgL_arg2280z00_2159 =
						BGl_evmodulezd2staticzd2classz00zz__evmodulez00(BgL_xz00_1302);
					return
						PROCEDURE_ENTRY(BgL_ez00_1303) (BgL_ez00_1303, BgL_arg2280z00_2159,
						BgL_ez00_1303, BEOA);
				}
			}
		}
	}



/* <anonymous:2276> */
	obj_t BGl_zc3anonymousza32276ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2507, obj_t BgL_xz00_2508, obj_t BgL_ez00_2509)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 395 */
			{
				obj_t BgL_xz00_1292;

				obj_t BgL_ez00_1293;

				BgL_xz00_1292 = BgL_xz00_2508;
				BgL_ez00_1293 = BgL_ez00_2509;
				if (PAIRP(BgL_xz00_1292))
					{	/* Eval/expanders.scm 395 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00(CAR(BgL_xz00_1292),
							BGl_string2852z00zz__install_expandersz00, BgL_xz00_1292);
					}
				else
					{	/* Eval/expanders.scm 395 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:2270> */
	obj_t BGl_zc3anonymousza32270ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2510, obj_t BgL_xz00_2511, obj_t BgL_ez00_2512)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 388 */
			{
				obj_t BgL_xz00_1281;

				obj_t BgL_ez00_1282;

				BgL_xz00_1281 = BgL_xz00_2511;
				BgL_ez00_1282 = BgL_ez00_2512;
				if (PAIRP(BgL_xz00_1281))
					{	/* Eval/expanders.scm 388 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00(CAR(BgL_xz00_1281),
							BGl_string2852z00zz__install_expandersz00, BgL_xz00_1281);
					}
				else
					{	/* Eval/expanders.scm 388 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:2204> */
	obj_t BGl_zc3anonymousza32204ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2513, obj_t BgL_xz00_2514, obj_t BgL_ez00_2515)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 359 */
			{
				obj_t BgL_xz00_1212;

				obj_t BgL_ez00_1213;

				BgL_xz00_1212 = BgL_xz00_2514;
				BgL_ez00_1213 = BgL_ez00_2515;
				{
					obj_t BgL_lblz00_1215;

					obj_t BgL_exprsz00_1216;

					if (PAIRP(BgL_xz00_1212))
						{	/* Eval/expanders.scm 359 */
							obj_t BgL_cdrzd21568zd2_1221;

							BgL_cdrzd21568zd2_1221 = CDR(BgL_xz00_1212);
							if (PAIRP(BgL_cdrzd21568zd2_1221))
								{	/* Eval/expanders.scm 359 */
									obj_t BgL_carzd21571zd2_1223;

									BgL_carzd21571zd2_1223 = CAR(BgL_cdrzd21568zd2_1221);
									if (SYMBOLP(BgL_carzd21571zd2_1223))
										{	/* Eval/expanders.scm 359 */
											BgL_lblz00_1215 = BgL_carzd21571zd2_1223;
											BgL_exprsz00_1216 = CDR(BgL_cdrzd21568zd2_1221);
											{	/* Eval/expanders.scm 362 */
												obj_t BgL_laz00_1226;

												{	/* Eval/expanders.scm 362 */
													obj_t BgL_arg2263z00_1273;

													obj_t BgL_arg2264z00_1274;

													BgL_arg2263z00_1273 =
														BGl_symbol2704z00zz__install_expandersz00;
													{	/* Eval/expanders.scm 362 */
														obj_t BgL_arg2266z00_1276;

														BgL_arg2266z00_1276 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_exprsz00_1216, BNIL);
														{	/* Eval/expanders.scm 362 */
															obj_t BgL_list2267z00_1277;

															BgL_list2267z00_1277 =
																MAKE_PAIR(BgL_arg2266z00_1276, BNIL);
															BgL_arg2264z00_1274 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BNIL, BgL_list2267z00_1277);
														}
													}
													BgL_laz00_1226 =
														MAKE_PAIR(BgL_arg2263z00_1273, BgL_arg2264z00_1274);
												}
												{	/* Eval/expanders.scm 362 */
													obj_t BgL_lamz00_1227;

													if (EXTENDED_PAIRP(BgL_xz00_1212))
														{	/* Eval/expanders.scm 364 */
															obj_t BgL_arg2259z00_1270;

															obj_t BgL_arg2260z00_1271;

															obj_t BgL_arg2262z00_1272;

															BgL_arg2259z00_1270 = CAR(BgL_laz00_1226);
															BgL_arg2260z00_1271 = CDR(BgL_laz00_1226);
															BgL_arg2262z00_1272 = CER(BgL_xz00_1212);
															{	/* Eval/expanders.scm 364 */
																obj_t BgL_res2648z00_2131;

																BgL_res2648z00_2131 =
																	MAKE_EXTENDED_PAIR(BgL_arg2259z00_1270,
																	BgL_arg2260z00_1271, BgL_arg2262z00_1272);
																BgL_lamz00_1227 = BgL_res2648z00_2131;
															}
														}
													else
														{	/* Eval/expanders.scm 363 */
															BgL_lamz00_1227 = BgL_laz00_1226;
														}
													{	/* Eval/expanders.scm 363 */
														obj_t BgL_valz00_1228;

														BgL_valz00_1228 =
															BGl_gensymz00zz__r4_symbols_6_4z00
															(BGl_symbol2853z00zz__install_expandersz00);
														{	/* Eval/expanders.scm 368 */
															obj_t BgL_auxz00_1229;

															{	/* Eval/expanders.scm 370 */
																obj_t BgL_arg2213z00_1235;

																obj_t BgL_arg2214z00_1236;

																BgL_arg2213z00_1235 =
																	BGl_symbol2808z00zz__install_expandersz00;
																{	/* Eval/expanders.scm 370 */
																	obj_t BgL_arg2216z00_1237;

																	obj_t BgL_arg2217z00_1238;

																	obj_t BgL_arg2222z00_1239;

																	{	/* Eval/expanders.scm 370 */
																		obj_t BgL_arg2233z00_1244;

																		{	/* Eval/expanders.scm 370 */
																			obj_t BgL_arg2235z00_1246;

																			{	/* Eval/expanders.scm 370 */
																				obj_t BgL_list2236z00_1247;

																				BgL_list2236z00_1247 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2235z00_1246 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_lamz00_1227,
																					BgL_list2236z00_1247);
																			}
																			BgL_arg2233z00_1244 =
																				MAKE_PAIR(BgL_lblz00_1215,
																				BgL_arg2235z00_1246);
																		}
																		BgL_arg2216z00_1237 =
																			MAKE_PAIR(BgL_arg2233z00_1244, BNIL);
																	}
																	{	/* Eval/expanders.scm 371 */
																		obj_t BgL_arg2237z00_1248;

																		obj_t BgL_arg2238z00_1249;

																		BgL_arg2237z00_1248 =
																			BGl_symbol2855z00zz__install_expandersz00;
																		{	/* Eval/expanders.scm 372 */
																			obj_t BgL_arg2239z00_1250;

																			{	/* Eval/expanders.scm 372 */
																				obj_t BgL_res2649z00_2134;

																				{	/* Eval/expanders.scm 372 */
																					obj_t BgL_arg2575z00_2133;

																					BgL_arg2575z00_2133 =
																						SYMBOL_TO_STRING(BgL_lblz00_1215);
																					BgL_res2649z00_2134 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2575z00_2133);
																				}
																				BgL_arg2239z00_1250 =
																					BgL_res2649z00_2134;
																			}
																			{	/* Eval/expanders.scm 371 */
																				obj_t BgL_list2241z00_1252;

																				{	/* Eval/expanders.scm 371 */
																					obj_t BgL_arg2242z00_1253;

																					BgL_arg2242z00_1253 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2241z00_1252 =
																						MAKE_PAIR(BgL_lblz00_1215,
																						BgL_arg2242z00_1253);
																				}
																				BgL_arg2238z00_1249 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2239z00_1250,
																					BgL_list2241z00_1252);
																			}
																		}
																		BgL_arg2217z00_1238 =
																			MAKE_PAIR(BgL_arg2237z00_1248,
																			BgL_arg2238z00_1249);
																	}
																	{	/* Eval/expanders.scm 374 */
																		obj_t BgL_arg2243z00_1254;

																		obj_t BgL_arg2244z00_1255;

																		BgL_arg2243z00_1254 =
																			BGl_symbol2808z00zz__install_expandersz00;
																		{	/* Eval/expanders.scm 374 */
																			obj_t BgL_arg2245z00_1256;

																			obj_t BgL_arg2246z00_1257;

																			{	/* Eval/expanders.scm 374 */
																				obj_t BgL_arg2251z00_1262;

																				{	/* Eval/expanders.scm 374 */
																					obj_t BgL_arg2253z00_1264;

																					{	/* Eval/expanders.scm 374 */
																						obj_t BgL_arg2255z00_1265;

																						BgL_arg2255z00_1265 =
																							MAKE_PAIR(BgL_lblz00_1215, BNIL);
																						{	/* Eval/expanders.scm 374 */
																							obj_t BgL_list2257z00_1267;

																							BgL_list2257z00_1267 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2253z00_1264 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2255z00_1265,
																								BgL_list2257z00_1267);
																						}
																					}
																					BgL_arg2251z00_1262 =
																						MAKE_PAIR(BgL_valz00_1228,
																						BgL_arg2253z00_1264);
																				}
																				BgL_arg2245z00_1256 =
																					MAKE_PAIR(BgL_arg2251z00_1262, BNIL);
																			}
																			BgL_arg2246z00_1257 =
																				MAKE_PAIR
																				(BGl_symbol2857z00zz__install_expandersz00,
																				BNIL);
																			{	/* Eval/expanders.scm 374 */
																				obj_t BgL_list2248z00_1259;

																				{	/* Eval/expanders.scm 374 */
																					obj_t BgL_arg2249z00_1260;

																					{	/* Eval/expanders.scm 374 */
																						obj_t BgL_arg2250z00_1261;

																						BgL_arg2250z00_1261 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2249z00_1260 =
																							MAKE_PAIR(BgL_valz00_1228,
																							BgL_arg2250z00_1261);
																					}
																					BgL_list2248z00_1259 =
																						MAKE_PAIR(BgL_arg2246z00_1257,
																						BgL_arg2249z00_1260);
																				}
																				BgL_arg2244z00_1255 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2245z00_1256,
																					BgL_list2248z00_1259);
																			}
																		}
																		BgL_arg2222z00_1239 =
																			MAKE_PAIR(BgL_arg2243z00_1254,
																			BgL_arg2244z00_1255);
																	}
																	{	/* Eval/expanders.scm 370 */
																		obj_t BgL_list2224z00_1241;

																		{	/* Eval/expanders.scm 370 */
																			obj_t BgL_arg2226z00_1242;

																			{	/* Eval/expanders.scm 370 */
																				obj_t BgL_arg2227z00_1243;

																				BgL_arg2227z00_1243 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2226z00_1242 =
																					MAKE_PAIR(BgL_arg2222z00_1239,
																					BgL_arg2227z00_1243);
																			}
																			BgL_list2224z00_1241 =
																				MAKE_PAIR(BgL_arg2217z00_1238,
																				BgL_arg2226z00_1242);
																		}
																		BgL_arg2214z00_1236 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2216z00_1237,
																			BgL_list2224z00_1241);
																	}
																}
																BgL_auxz00_1229 =
																	MAKE_PAIR(BgL_arg2213z00_1235,
																	BgL_arg2214z00_1236);
															}
															{	/* Eval/expanders.scm 370 */
																obj_t BgL_resz00_1230;

																if (EXTENDED_PAIRP(BgL_xz00_1212))
																	{	/* Eval/expanders.scm 378 */
																		obj_t BgL_arg2210z00_1232;

																		obj_t BgL_arg2211z00_1233;

																		obj_t BgL_arg2212z00_1234;

																		BgL_arg2210z00_1232 = CAR(BgL_auxz00_1229);
																		BgL_arg2211z00_1233 = CDR(BgL_auxz00_1229);
																		BgL_arg2212z00_1234 = CER(BgL_xz00_1212);
																		{	/* Eval/expanders.scm 378 */
																			obj_t BgL_res2650z00_2142;

																			BgL_res2650z00_2142 =
																				MAKE_EXTENDED_PAIR(BgL_arg2210z00_1232,
																				BgL_arg2211z00_1233,
																				BgL_arg2212z00_1234);
																			BgL_resz00_1230 = BgL_res2650z00_2142;
																		}
																	}
																else
																	{	/* Eval/expanders.scm 377 */
																		BgL_resz00_1230 = BgL_auxz00_1229;
																	}
																{	/* Eval/expanders.scm 377 */

																	return
																		PROCEDURE_ENTRY(BgL_ez00_1213)
																		(BgL_ez00_1213, BgL_auxz00_1229,
																		BgL_ez00_1213, BEOA);
																}
															}
														}
													}
												}
											}
										}
									else
										{	/* Eval/expanders.scm 359 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2833z00zz__install_expandersz00,
												BGl_string2859z00zz__install_expandersz00,
												BgL_xz00_1212);
										}
								}
							else
								{	/* Eval/expanders.scm 359 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2833z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1212);
								}
						}
					else
						{	/* Eval/expanders.scm 359 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2833z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1212);
						}
				}
			}
		}
	}



/* <anonymous:2199> */
	obj_t BGl_zc3anonymousza32199ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2516, obj_t BgL_xz00_2517, obj_t BgL_ez00_2518)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 313 */
			return BgL_xz00_2517;
		}
	}



/* <anonymous:2174> */
	obj_t BGl_zc3anonymousza32174ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2519, obj_t BgL_xz00_2520, obj_t BgL_ez00_2521)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 302 */
			{
				obj_t BgL_xz00_1170;

				obj_t BgL_ez00_1171;

				BgL_xz00_1170 = BgL_xz00_2520;
				BgL_ez00_1171 = BgL_ez00_2521;
				{
					obj_t BgL_varsz00_1173;

					obj_t BgL_callz00_1174;

					obj_t BgL_exprsz00_1175;

					if (PAIRP(BgL_xz00_1170))
						{	/* Eval/expanders.scm 302 */
							obj_t BgL_cdrzd21547zd2_1180;

							BgL_cdrzd21547zd2_1180 = CDR(BgL_xz00_1170);
							if (PAIRP(BgL_cdrzd21547zd2_1180))
								{	/* Eval/expanders.scm 302 */
									obj_t BgL_cdrzd21552zd2_1182;

									BgL_cdrzd21552zd2_1182 = CDR(BgL_cdrzd21547zd2_1180);
									if (PAIRP(BgL_cdrzd21552zd2_1182))
										{	/* Eval/expanders.scm 302 */
											BgL_varsz00_1173 = CAR(BgL_cdrzd21547zd2_1180);
											BgL_callz00_1174 = CAR(BgL_cdrzd21552zd2_1182);
											BgL_exprsz00_1175 = CDR(BgL_cdrzd21552zd2_1182);
											{	/* Eval/expanders.scm 305 */
												obj_t BgL_arg2181z00_1187;

												{	/* Eval/expanders.scm 305 */
													obj_t BgL_arg2182z00_1188;

													obj_t BgL_arg2183z00_1189;

													BgL_arg2182z00_1188 =
														BGl_symbol2860z00zz__install_expandersz00;
													{	/* Eval/expanders.scm 305 */
														obj_t BgL_arg2184z00_1190;

														obj_t BgL_arg2185z00_1191;

														{	/* Eval/expanders.scm 305 */
															obj_t BgL_arg2189z00_1195;

															obj_t BgL_arg2190z00_1196;

															BgL_arg2189z00_1195 =
																BGl_symbol2704z00zz__install_expandersz00;
															{	/* Eval/expanders.scm 305 */
																obj_t BgL_list2191z00_1197;

																{	/* Eval/expanders.scm 305 */
																	obj_t BgL_arg2192z00_1198;

																	BgL_arg2192z00_1198 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2191z00_1197 =
																		MAKE_PAIR(BgL_callz00_1174,
																		BgL_arg2192z00_1198);
																}
																BgL_arg2190z00_1196 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BNIL, BgL_list2191z00_1197);
															}
															BgL_arg2184z00_1190 =
																MAKE_PAIR(BgL_arg2189z00_1195,
																BgL_arg2190z00_1196);
														}
														{	/* Eval/expanders.scm 306 */
															obj_t BgL_arg2193z00_1199;

															obj_t BgL_arg2194z00_1200;

															BgL_arg2193z00_1199 =
																BGl_symbol2704z00zz__install_expandersz00;
															{	/* Eval/expanders.scm 306 */
																obj_t BgL_arg2195z00_1201;

																BgL_arg2195z00_1201 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_exprsz00_1175, BNIL);
																{	/* Eval/expanders.scm 306 */
																	obj_t BgL_list2196z00_1202;

																	BgL_list2196z00_1202 =
																		MAKE_PAIR(BgL_arg2195z00_1201, BNIL);
																	BgL_arg2194z00_1200 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_varsz00_1173, BgL_list2196z00_1202);
																}
															}
															BgL_arg2185z00_1191 =
																MAKE_PAIR(BgL_arg2193z00_1199,
																BgL_arg2194z00_1200);
														}
														{	/* Eval/expanders.scm 305 */
															obj_t BgL_list2187z00_1193;

															{	/* Eval/expanders.scm 305 */
																obj_t BgL_arg2188z00_1194;

																BgL_arg2188z00_1194 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2187z00_1193 =
																	MAKE_PAIR(BgL_arg2185z00_1191,
																	BgL_arg2188z00_1194);
															}
															BgL_arg2183z00_1189 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2184z00_1190, BgL_list2187z00_1193);
														}
													}
													BgL_arg2181z00_1187 =
														MAKE_PAIR(BgL_arg2182z00_1188, BgL_arg2183z00_1189);
												}
												return
													PROCEDURE_ENTRY(BgL_ez00_1171) (BgL_ez00_1171,
													BgL_arg2181z00_1187, BgL_ez00_1171, BEOA);
											}
										}
									else
										{	/* Eval/expanders.scm 302 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2803z00zz__install_expandersz00,
												BGl_string2859z00zz__install_expandersz00,
												BgL_xz00_1170);
										}
								}
							else
								{	/* Eval/expanders.scm 302 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2803z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1170);
								}
						}
					else
						{	/* Eval/expanders.scm 302 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2803z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1170);
						}
				}
			}
		}
	}



/* <anonymous:2154> */
	obj_t BGl_zc3anonymousza32154ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2522, obj_t BgL_xz00_2523, obj_t BgL_ez00_2524)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 288 */
			{
				obj_t BgL_xz00_1133;

				obj_t BgL_ez00_1134;

				BgL_xz00_1133 = BgL_xz00_2523;
				BgL_ez00_1134 = BgL_ez00_2524;
				{
					obj_t BgL_handlerz00_1136;

					obj_t BgL_bodyz00_1137;

					if (PAIRP(BgL_xz00_1133))
						{	/* Eval/expanders.scm 288 */
							obj_t BgL_cdrzd21530zd2_1142;

							BgL_cdrzd21530zd2_1142 = CDR(BgL_xz00_1133);
							if (PAIRP(BgL_cdrzd21530zd2_1142))
								{	/* Eval/expanders.scm 288 */
									BgL_handlerz00_1136 = CAR(BgL_cdrzd21530zd2_1142);
									BgL_bodyz00_1137 = CDR(BgL_cdrzd21530zd2_1142);
									{	/* Eval/expanders.scm 291 */
										obj_t BgL_arg2159z00_1146;

										obj_t BgL_arg2160z00_1147;

										BgL_arg2159z00_1146 =
											BGl_symbol2799z00zz__install_expandersz00;
										{	/* Eval/expanders.scm 291 */
											obj_t BgL_arg2161z00_1148;

											obj_t BgL_arg2162z00_1149;

											BgL_arg2161z00_1148 =
												PROCEDURE_ENTRY(BgL_ez00_1134) (BgL_ez00_1134,
												BgL_handlerz00_1136, BgL_ez00_1134, BEOA);
											{	/* Eval/expanders.scm 292 */
												obj_t BgL_arg2164z00_1151;

												if (NULLP(BgL_bodyz00_1137))
													{	/* Eval/expanders.scm 292 */
														BgL_arg2164z00_1151 = BNIL;
													}
												else
													{	/* Eval/expanders.scm 292 */
														obj_t BgL_head1855z00_1155;

														BgL_head1855z00_1155 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l1853z00_1157;

															obj_t BgL_tail1856z00_1158;

															BgL_l1853z00_1157 = BgL_bodyz00_1137;
															BgL_tail1856z00_1158 = BgL_head1855z00_1155;
														BgL_zc3anonymousza32167ze3z83_1159:
															if (NULLP(BgL_l1853z00_1157))
																{	/* Eval/expanders.scm 292 */
																	BgL_arg2164z00_1151 =
																		CDR(BgL_head1855z00_1155);
																}
															else
																{	/* Eval/expanders.scm 292 */
																	obj_t BgL_newtail1857z00_1161;

																	{	/* Eval/expanders.scm 292 */
																		obj_t BgL_arg2170z00_1163;

																		{	/* Eval/expanders.scm 292 */
																			obj_t BgL_xz00_1165;

																			BgL_xz00_1165 = CAR(BgL_l1853z00_1157);
																			BgL_arg2170z00_1163 =
																				PROCEDURE_ENTRY(BgL_ez00_1134)
																				(BgL_ez00_1134, BgL_xz00_1165,
																				BgL_ez00_1134, BEOA);
																		}
																		BgL_newtail1857z00_1161 =
																			MAKE_PAIR(BgL_arg2170z00_1163, BNIL);
																	}
																	SET_CDR(BgL_tail1856z00_1158,
																		BgL_newtail1857z00_1161);
																	{
																		obj_t BgL_tail1856z00_2992;

																		obj_t BgL_l1853z00_2990;

																		BgL_l1853z00_2990 = CDR(BgL_l1853z00_1157);
																		BgL_tail1856z00_2992 =
																			BgL_newtail1857z00_1161;
																		BgL_tail1856z00_1158 = BgL_tail1856z00_2992;
																		BgL_l1853z00_1157 = BgL_l1853z00_2990;
																		goto BgL_zc3anonymousza32167ze3z83_1159;
																	}
																}
														}
													}
												BgL_arg2162z00_1149 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2164z00_1151, BNIL);
											}
											{	/* Eval/expanders.scm 291 */
												obj_t BgL_list2163z00_1150;

												BgL_list2163z00_1150 =
													MAKE_PAIR(BgL_arg2162z00_1149, BNIL);
												BgL_arg2160z00_1147 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2161z00_1148, BgL_list2163z00_1150);
											}
										}
										return MAKE_PAIR(BgL_arg2159z00_1146, BgL_arg2160z00_1147);
									}
								}
							else
								{	/* Eval/expanders.scm 288 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2800z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1133);
								}
						}
					else
						{	/* Eval/expanders.scm 288 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2800z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1133);
						}
				}
			}
		}
	}



/* <anonymous:2133> */
	obj_t BGl_zc3anonymousza32133ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2525, obj_t BgL_xz00_2526, obj_t BgL_ez00_2527)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 274 */
			{
				obj_t BgL_xz00_1096;

				obj_t BgL_ez00_1097;

				BgL_xz00_1096 = BgL_xz00_2526;
				BgL_ez00_1097 = BgL_ez00_2527;
				{
					obj_t BgL_bodyz00_1099;

					obj_t BgL_expz00_1100;

					if (PAIRP(BgL_xz00_1096))
						{	/* Eval/expanders.scm 274 */
							obj_t BgL_cdrzd21515zd2_1105;

							BgL_cdrzd21515zd2_1105 = CDR(BgL_xz00_1096);
							if (PAIRP(BgL_cdrzd21515zd2_1105))
								{	/* Eval/expanders.scm 274 */
									BgL_bodyz00_1099 = CAR(BgL_cdrzd21515zd2_1105);
									BgL_expz00_1100 = CDR(BgL_cdrzd21515zd2_1105);
									{	/* Eval/expanders.scm 277 */
										obj_t BgL_arg2138z00_1109;

										obj_t BgL_arg2139z00_1110;

										BgL_arg2138z00_1109 =
											BGl_symbol2796z00zz__install_expandersz00;
										{	/* Eval/expanders.scm 278 */
											obj_t BgL_arg2140z00_1111;

											obj_t BgL_arg2141z00_1112;

											BgL_arg2140z00_1111 =
												PROCEDURE_ENTRY(BgL_ez00_1097) (BgL_ez00_1097,
												BgL_bodyz00_1099, BgL_ez00_1097, BEOA);
											{	/* Eval/expanders.scm 279 */
												obj_t BgL_arg2144z00_1114;

												if (NULLP(BgL_expz00_1100))
													{	/* Eval/expanders.scm 279 */
														BgL_arg2144z00_1114 = BNIL;
													}
												else
													{	/* Eval/expanders.scm 279 */
														obj_t BgL_head1850z00_1118;

														BgL_head1850z00_1118 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l1848z00_1120;

															obj_t BgL_tail1851z00_1121;

															BgL_l1848z00_1120 = BgL_expz00_1100;
															BgL_tail1851z00_1121 = BgL_head1850z00_1118;
														BgL_zc3anonymousza32147ze3z83_1122:
															if (NULLP(BgL_l1848z00_1120))
																{	/* Eval/expanders.scm 279 */
																	BgL_arg2144z00_1114 =
																		CDR(BgL_head1850z00_1118);
																}
															else
																{	/* Eval/expanders.scm 279 */
																	obj_t BgL_newtail1852z00_1124;

																	{	/* Eval/expanders.scm 279 */
																		obj_t BgL_arg2150z00_1126;

																		{	/* Eval/expanders.scm 279 */
																			obj_t BgL_xz00_1128;

																			BgL_xz00_1128 = CAR(BgL_l1848z00_1120);
																			BgL_arg2150z00_1126 =
																				PROCEDURE_ENTRY(BgL_ez00_1097)
																				(BgL_ez00_1097, BgL_xz00_1128,
																				BgL_ez00_1097, BEOA);
																		}
																		BgL_newtail1852z00_1124 =
																			MAKE_PAIR(BgL_arg2150z00_1126, BNIL);
																	}
																	SET_CDR(BgL_tail1851z00_1121,
																		BgL_newtail1852z00_1124);
																	{
																		obj_t BgL_tail1851z00_3021;

																		obj_t BgL_l1848z00_3019;

																		BgL_l1848z00_3019 = CDR(BgL_l1848z00_1120);
																		BgL_tail1851z00_3021 =
																			BgL_newtail1852z00_1124;
																		BgL_tail1851z00_1121 = BgL_tail1851z00_3021;
																		BgL_l1848z00_1120 = BgL_l1848z00_3019;
																		goto BgL_zc3anonymousza32147ze3z83_1122;
																	}
																}
														}
													}
												BgL_arg2141z00_1112 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2144z00_1114, BNIL);
											}
											{	/* Eval/expanders.scm 277 */
												obj_t BgL_list2142z00_1113;

												BgL_list2142z00_1113 =
													MAKE_PAIR(BgL_arg2141z00_1112, BNIL);
												BgL_arg2139z00_1110 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2140z00_1111, BgL_list2142z00_1113);
											}
										}
										return MAKE_PAIR(BgL_arg2138z00_1109, BgL_arg2139z00_1110);
									}
								}
							else
								{	/* Eval/expanders.scm 274 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2797z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1096);
								}
						}
					else
						{	/* Eval/expanders.scm 274 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2797z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1096);
						}
				}
			}
		}
	}



/* <anonymous:2110> */
	obj_t BGl_zc3anonymousza32110ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2528, obj_t BgL_xz00_2529, obj_t BgL_ez00_2530)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 263 */
			{
				obj_t BgL_xz00_1067;

				obj_t BgL_ez00_1068;

				BgL_xz00_1067 = BgL_xz00_2529;
				BgL_ez00_1068 = BgL_ez00_2530;
				if (PAIRP(BgL_xz00_1067))
					{	/* Eval/expanders.scm 263 */
						obj_t BgL_cdrzd21496zd2_1076;

						BgL_cdrzd21496zd2_1076 = CDR(BgL_xz00_1067);
						if (PAIRP(BgL_cdrzd21496zd2_1076))
							{	/* Eval/expanders.scm 263 */
								obj_t BgL_carzd21499zd2_1078;

								obj_t BgL_cdrzd21500zd2_1079;

								BgL_carzd21499zd2_1078 = CAR(BgL_cdrzd21496zd2_1076);
								BgL_cdrzd21500zd2_1079 = CDR(BgL_cdrzd21496zd2_1076);
								if (PAIRP(BgL_carzd21499zd2_1078))
									{	/* Eval/expanders.scm 263 */
										if (NULLP(CDR(BgL_carzd21499zd2_1078)))
											{	/* Eval/expanders.scm 263 */
												if (NULLP(BgL_cdrzd21500zd2_1079))
													{	/* Eval/expanders.scm 263 */
														return
															BGl_expandzd2errorzd2zz__install_expandersz00
															(BGl_string2794z00zz__install_expandersz00,
															BGl_string2859z00zz__install_expandersz00,
															BgL_xz00_1067);
													}
												else
													{	/* Eval/expanders.scm 263 */
														obj_t BgL_arg2116z00_1083;

														BgL_arg2116z00_1083 = CAR(BgL_carzd21499zd2_1078);
														{	/* Eval/expanders.scm 263 */
															obj_t BgL_arg2119z00_2062;

															obj_t BgL_arg2121z00_2063;

															BgL_arg2119z00_2062 =
																BGl_symbol2793z00zz__install_expandersz00;
															{	/* Eval/expanders.scm 263 */
																obj_t BgL_arg2123z00_2064;

																obj_t BgL_arg2124z00_2065;

																BgL_arg2123z00_2064 =
																	MAKE_PAIR(BgL_arg2116z00_1083, BNIL);
																{	/* Eval/expanders.scm 263 */
																	obj_t BgL_arg2130z00_2067;

																	BgL_arg2130z00_2067 =
																		BGl_expandzd2prognzd2zz__prognz00
																		(BgL_cdrzd21500zd2_1079);
																	BgL_arg2124z00_2065 =
																		PROCEDURE_ENTRY(BgL_ez00_1068)
																		(BgL_ez00_1068, BgL_arg2130z00_2067,
																		BgL_ez00_1068, BEOA);
																}
																{	/* Eval/expanders.scm 263 */
																	obj_t BgL_list2126z00_2068;

																	{	/* Eval/expanders.scm 263 */
																		obj_t BgL_arg2127z00_2069;

																		BgL_arg2127z00_2069 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2126z00_2068 =
																			MAKE_PAIR(BgL_arg2124z00_2065,
																			BgL_arg2127z00_2069);
																	}
																	BgL_arg2121z00_2063 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2123z00_2064, BgL_list2126z00_2068);
																}
															}
															return
																MAKE_PAIR(BgL_arg2119z00_2062,
																BgL_arg2121z00_2063);
														}
													}
											}
										else
											{	/* Eval/expanders.scm 263 */
												return
													BGl_expandzd2errorzd2zz__install_expandersz00
													(BGl_string2794z00zz__install_expandersz00,
													BGl_string2859z00zz__install_expandersz00,
													BgL_xz00_1067);
											}
									}
								else
									{	/* Eval/expanders.scm 263 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2794z00zz__install_expandersz00,
											BGl_string2859z00zz__install_expandersz00, BgL_xz00_1067);
									}
							}
						else
							{	/* Eval/expanders.scm 263 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2794z00zz__install_expandersz00,
									BGl_string2859z00zz__install_expandersz00, BgL_xz00_1067);
							}
					}
				else
					{	/* Eval/expanders.scm 263 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2794z00zz__install_expandersz00,
							BGl_string2859z00zz__install_expandersz00, BgL_xz00_1067);
					}
			}
		}
	}



/* <anonymous:2087> */
	obj_t BGl_zc3anonymousza32087ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2531, obj_t BgL_xz00_2532, obj_t BgL_ez00_2533)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 225 */
			{
				obj_t BgL_xz00_1035;

				obj_t BgL_ez00_1036;

				BgL_xz00_1035 = BgL_xz00_2532;
				BgL_ez00_1036 = BgL_ez00_2533;
				{
					obj_t BgL_siz00_1038;

					obj_t BgL_bodyz00_1039;

					if (PAIRP(BgL_xz00_1035))
						{	/* Eval/expanders.scm 225 */
							obj_t BgL_cdrzd21481zd2_1044;

							BgL_cdrzd21481zd2_1044 = CDR(BgL_xz00_1035);
							if (PAIRP(BgL_cdrzd21481zd2_1044))
								{	/* Eval/expanders.scm 225 */
									BgL_siz00_1038 = CAR(BgL_cdrzd21481zd2_1044);
									BgL_bodyz00_1039 = CDR(BgL_cdrzd21481zd2_1044);
									{	/* Eval/expanders.scm 228 */
										obj_t BgL_arg2092z00_1048;

										{	/* Eval/expanders.scm 228 */
											obj_t BgL_arg2093z00_1049;

											obj_t BgL_arg2094z00_1050;

											BgL_arg2093z00_1049 =
												BGl_symbol2708z00zz__install_expandersz00;
											{	/* Eval/expanders.scm 230 */
												obj_t BgL_arg2095z00_1051;

												BgL_arg2095z00_1051 =
													MAKE_PAIR(BGl_symbol2757z00zz__install_expandersz00,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_bodyz00_1039, BNIL));
												{	/* Eval/expanders.scm 228 */
													obj_t BgL_list2097z00_1053;

													{	/* Eval/expanders.scm 228 */
														obj_t BgL_arg2098z00_1054;

														{	/* Eval/expanders.scm 228 */
															obj_t BgL_arg2099z00_1055;

															BgL_arg2099z00_1055 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2098z00_1054 =
																MAKE_PAIR(BgL_arg2095z00_1051,
																BgL_arg2099z00_1055);
														}
														BgL_list2097z00_1053 =
															MAKE_PAIR(BFALSE, BgL_arg2098z00_1054);
													}
													BgL_arg2094z00_1050 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_siz00_1038, BgL_list2097z00_1053);
												}
											}
											BgL_arg2092z00_1048 =
												MAKE_PAIR(BgL_arg2093z00_1049, BgL_arg2094z00_1050);
										}
										return
											PROCEDURE_ENTRY(BgL_ez00_1036) (BgL_ez00_1036,
											BgL_arg2092z00_1048, BgL_ez00_1036, BEOA);
									}
								}
							else
								{	/* Eval/expanders.scm 225 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2769z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1035);
								}
						}
					else
						{	/* Eval/expanders.scm 225 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2769z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1035);
						}
				}
			}
		}
	}



/* <anonymous:2067> */
	obj_t BGl_zc3anonymousza32067ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2534, obj_t BgL_xz00_2535, obj_t BgL_ez00_2536)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 213 */
			{
				obj_t BgL_xz00_1009;

				obj_t BgL_ez00_1010;

				BgL_xz00_1009 = BgL_xz00_2535;
				BgL_ez00_1010 = BgL_ez00_2536;
				{
					obj_t BgL_siz00_1012;

					obj_t BgL_bodyz00_1013;

					if (PAIRP(BgL_xz00_1009))
						{	/* Eval/expanders.scm 213 */
							obj_t BgL_cdrzd21466zd2_1018;

							BgL_cdrzd21466zd2_1018 = CDR(BgL_xz00_1009);
							if (PAIRP(BgL_cdrzd21466zd2_1018))
								{	/* Eval/expanders.scm 213 */
									BgL_siz00_1012 = CAR(BgL_cdrzd21466zd2_1018);
									BgL_bodyz00_1013 = CDR(BgL_cdrzd21466zd2_1018);
									{	/* Eval/expanders.scm 216 */
										obj_t BgL_arg2073z00_1022;

										{	/* Eval/expanders.scm 216 */
											obj_t BgL_arg2076z00_1023;

											obj_t BgL_arg2077z00_1024;

											BgL_arg2076z00_1023 =
												BGl_symbol2708z00zz__install_expandersz00;
											{	/* Eval/expanders.scm 217 */
												obj_t BgL_arg2078z00_1025;

												BgL_arg2078z00_1025 =
													MAKE_PAIR(BGl_symbol2757z00zz__install_expandersz00,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_bodyz00_1013, BNIL));
												{	/* Eval/expanders.scm 216 */
													obj_t BgL_list2080z00_1027;

													{	/* Eval/expanders.scm 216 */
														obj_t BgL_arg2081z00_1028;

														{	/* Eval/expanders.scm 216 */
															obj_t BgL_arg2082z00_1029;

															BgL_arg2082z00_1029 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2081z00_1028 =
																MAKE_PAIR(BFALSE, BgL_arg2082z00_1029);
														}
														BgL_list2080z00_1027 =
															MAKE_PAIR(BgL_arg2078z00_1025,
															BgL_arg2081z00_1028);
													}
													BgL_arg2077z00_1024 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_siz00_1012, BgL_list2080z00_1027);
												}
											}
											BgL_arg2073z00_1022 =
												MAKE_PAIR(BgL_arg2076z00_1023, BgL_arg2077z00_1024);
										}
										return
											PROCEDURE_ENTRY(BgL_ez00_1010) (BgL_ez00_1010,
											BgL_arg2073z00_1022, BgL_ez00_1010, BEOA);
									}
								}
							else
								{	/* Eval/expanders.scm 213 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2766z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_1009);
								}
						}
					else
						{	/* Eval/expanders.scm 213 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2766z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_1009);
						}
				}
			}
		}
	}



/* <anonymous:2052> */
	obj_t BGl_zc3anonymousza32052ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2537, obj_t BgL_xz00_2538, obj_t BgL_ez00_2539)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 202 */
			{
				obj_t BgL_xz00_983;

				obj_t BgL_ez00_984;

				BgL_xz00_983 = BgL_xz00_2538;
				BgL_ez00_984 = BgL_ez00_2539;
				if (PAIRP(BgL_xz00_983))
					{	/* Eval/expanders.scm 202 */
						obj_t BgL_cdrzd21445zd2_993;

						BgL_cdrzd21445zd2_993 = CDR(BgL_xz00_983);
						if (PAIRP(BgL_cdrzd21445zd2_993))
							{	/* Eval/expanders.scm 202 */
								obj_t BgL_cdrzd21450zd2_995;

								BgL_cdrzd21450zd2_995 = CDR(BgL_cdrzd21445zd2_993);
								if (PAIRP(BgL_cdrzd21450zd2_995))
									{	/* Eval/expanders.scm 202 */
										obj_t BgL_arg2056z00_997;

										obj_t BgL_arg2057z00_998;

										obj_t BgL_arg2058z00_999;

										BgL_arg2056z00_997 = CAR(BgL_cdrzd21445zd2_993);
										BgL_arg2057z00_998 = CAR(BgL_cdrzd21450zd2_995);
										BgL_arg2058z00_999 = CDR(BgL_cdrzd21450zd2_995);
										{	/* Eval/expanders.scm 202 */
											obj_t BgL_arg2059z00_2028;

											{	/* Eval/expanders.scm 202 */
												obj_t BgL_arg2060z00_2029;

												obj_t BgL_arg2061z00_2030;

												BgL_arg2060z00_2029 =
													BGl_symbol2802z00zz__install_expandersz00;
												{	/* Eval/expanders.scm 202 */
													obj_t BgL_arg2062z00_2031;

													BgL_arg2062z00_2031 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2058z00_999, BNIL);
													{	/* Eval/expanders.scm 202 */
														obj_t BgL_list2063z00_2032;

														{	/* Eval/expanders.scm 202 */
															obj_t BgL_arg2064z00_2033;

															BgL_arg2064z00_2033 =
																MAKE_PAIR(BgL_arg2062z00_2031, BNIL);
															BgL_list2063z00_2032 =
																MAKE_PAIR(BgL_arg2057z00_998,
																BgL_arg2064z00_2033);
														}
														BgL_arg2061z00_2030 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2056z00_997, BgL_list2063z00_2032);
													}
												}
												BgL_arg2059z00_2028 =
													MAKE_PAIR(BgL_arg2060z00_2029, BgL_arg2061z00_2030);
											}
											return
												PROCEDURE_ENTRY(BgL_ez00_984) (BgL_ez00_984,
												BgL_arg2059z00_2028, BgL_ez00_984, BEOA);
										}
									}
								else
									{	/* Eval/expanders.scm 202 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2763z00zz__install_expandersz00,
											BGl_string2859z00zz__install_expandersz00, BgL_xz00_983);
									}
							}
						else
							{	/* Eval/expanders.scm 202 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2763z00zz__install_expandersz00,
									BGl_string2859z00zz__install_expandersz00, BgL_xz00_983);
							}
					}
				else
					{	/* Eval/expanders.scm 202 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2763z00zz__install_expandersz00,
							BGl_string2859z00zz__install_expandersz00, BgL_xz00_983);
					}
			}
		}
	}



/* <anonymous:2028> */
	obj_t BGl_zc3anonymousza32028ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2540, obj_t BgL_xz00_2541, obj_t BgL_ez00_2542)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 189 */
			{
				obj_t BgL_xz00_950;

				obj_t BgL_ez00_951;

				BgL_xz00_950 = BgL_xz00_2541;
				BgL_ez00_951 = BgL_ez00_2542;
				if (PAIRP(BgL_xz00_950))
					{	/* Eval/expanders.scm 189 */
						obj_t BgL_cdrzd21419zd2_960;

						BgL_cdrzd21419zd2_960 = CDR(BgL_xz00_950);
						if (PAIRP(BgL_cdrzd21419zd2_960))
							{	/* Eval/expanders.scm 189 */
								obj_t BgL_cdrzd21424zd2_962;

								BgL_cdrzd21424zd2_962 = CDR(BgL_cdrzd21419zd2_960);
								if (PAIRP(BgL_cdrzd21424zd2_962))
									{	/* Eval/expanders.scm 189 */
										obj_t BgL_cdrzd21429zd2_964;

										BgL_cdrzd21429zd2_964 = CDR(BgL_cdrzd21424zd2_962);
										if (PAIRP(BgL_cdrzd21429zd2_964))
											{	/* Eval/expanders.scm 189 */
												if (NULLP(CDR(BgL_cdrzd21429zd2_964)))
													{	/* Eval/expanders.scm 189 */
														obj_t BgL_arg2034z00_967;

														obj_t BgL_arg2036z00_968;

														obj_t BgL_arg2037z00_969;

														BgL_arg2034z00_967 = CAR(BgL_cdrzd21419zd2_960);
														BgL_arg2036z00_968 = CAR(BgL_cdrzd21424zd2_962);
														BgL_arg2037z00_969 = CAR(BgL_cdrzd21429zd2_964);
														{	/* Eval/expanders.scm 189 */
															obj_t BgL_arg2039z00_1999;

															obj_t BgL_arg2040z00_2000;

															BgL_arg2039z00_1999 =
																BGl_symbol2759z00zz__install_expandersz00;
															{	/* Eval/expanders.scm 189 */
																obj_t BgL_arg2041z00_2001;

																obj_t BgL_arg2042z00_2002;

																obj_t BgL_arg2043z00_2003;

																BgL_arg2041z00_2001 =
																	PROCEDURE_ENTRY(BgL_ez00_951) (BgL_ez00_951,
																	BgL_arg2034z00_967, BgL_ez00_951, BEOA);
																BgL_arg2042z00_2002 =
																	PROCEDURE_ENTRY(BgL_ez00_951) (BgL_ez00_951,
																	BgL_arg2036z00_968, BgL_ez00_951, BEOA);
																BgL_arg2043z00_2003 =
																	PROCEDURE_ENTRY(BgL_ez00_951) (BgL_ez00_951,
																	BgL_arg2037z00_969, BgL_ez00_951, BEOA);
																{	/* Eval/expanders.scm 189 */
																	obj_t BgL_list2045z00_2005;

																	{	/* Eval/expanders.scm 189 */
																		obj_t BgL_arg2046z00_2006;

																		{	/* Eval/expanders.scm 189 */
																			obj_t BgL_arg2047z00_2007;

																			BgL_arg2047z00_2007 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2046z00_2006 =
																				MAKE_PAIR(BgL_arg2043z00_2003,
																				BgL_arg2047z00_2007);
																		}
																		BgL_list2045z00_2005 =
																			MAKE_PAIR(BgL_arg2042z00_2002,
																			BgL_arg2046z00_2006);
																	}
																	BgL_arg2040z00_2000 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2041z00_2001, BgL_list2045z00_2005);
																}
															}
															return
																MAKE_PAIR(BgL_arg2039z00_1999,
																BgL_arg2040z00_2000);
														}
													}
												else
													{	/* Eval/expanders.scm 189 */
														return
															BGl_expandzd2errorzd2zz__install_expandersz00
															(BGl_string2760z00zz__install_expandersz00,
															BGl_string2862z00zz__install_expandersz00,
															BgL_xz00_950);
													}
											}
										else
											{	/* Eval/expanders.scm 189 */
												return
													BGl_expandzd2errorzd2zz__install_expandersz00
													(BGl_string2760z00zz__install_expandersz00,
													BGl_string2862z00zz__install_expandersz00,
													BgL_xz00_950);
											}
									}
								else
									{	/* Eval/expanders.scm 189 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2760z00zz__install_expandersz00,
											BGl_string2862z00zz__install_expandersz00, BgL_xz00_950);
									}
							}
						else
							{	/* Eval/expanders.scm 189 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2760z00zz__install_expandersz00,
									BGl_string2862z00zz__install_expandersz00, BgL_xz00_950);
							}
					}
				else
					{	/* Eval/expanders.scm 189 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2760z00zz__install_expandersz00,
							BGl_string2862z00zz__install_expandersz00, BgL_xz00_950);
					}
			}
		}
	}



/* <anonymous:2005> */
	obj_t BGl_zc3anonymousza32005ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2543, obj_t BgL_xz00_2544, obj_t BgL_ez00_2545)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 170 */
			{
				obj_t BgL_xz00_922;

				obj_t BgL_ez00_923;

				BgL_xz00_922 = BgL_xz00_2544;
				BgL_ez00_923 = BgL_ez00_2545;
				{
					obj_t BgL_expz00_925;

					if (PAIRP(BgL_xz00_922))
						{	/* Eval/expanders.scm 170 */
							obj_t BgL_cdrzd21404zd2_930;

							BgL_cdrzd21404zd2_930 = CDR(BgL_xz00_922);
							if (PAIRP(BgL_cdrzd21404zd2_930))
								{	/* Eval/expanders.scm 170 */
									if (NULLP(CDR(BgL_cdrzd21404zd2_930)))
										{	/* Eval/expanders.scm 170 */
											BgL_expz00_925 = CAR(BgL_cdrzd21404zd2_930);
											{	/* Eval/expanders.scm 173 */
												obj_t BgL_arg2011z00_935;

												obj_t BgL_arg2012z00_936;

												BgL_arg2011z00_935 =
													BGl_symbol2863z00zz__install_expandersz00;
												{	/* Eval/expanders.scm 173 */
													obj_t BgL_arg2013z00_937;

													{	/* Eval/expanders.scm 173 */
														obj_t BgL_arg2017z00_940;

														obj_t BgL_arg2018z00_941;

														BgL_arg2017z00_940 =
															BGl_symbol2704z00zz__install_expandersz00;
														{	/* Eval/expanders.scm 173 */
															obj_t BgL_arg2021z00_943;

															BgL_arg2021z00_943 =
																PROCEDURE_ENTRY(BgL_ez00_923) (BgL_ez00_923,
																BgL_expz00_925, BgL_ez00_923, BEOA);
															{	/* Eval/expanders.scm 173 */
																obj_t BgL_list2023z00_945;

																{	/* Eval/expanders.scm 173 */
																	obj_t BgL_arg2024z00_946;

																	BgL_arg2024z00_946 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2023z00_945 =
																		MAKE_PAIR(BgL_arg2021z00_943,
																		BgL_arg2024z00_946);
																}
																BgL_arg2018z00_941 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BNIL, BgL_list2023z00_945);
															}
														}
														BgL_arg2013z00_937 =
															MAKE_PAIR(BgL_arg2017z00_940, BgL_arg2018z00_941);
													}
													{	/* Eval/expanders.scm 173 */
														obj_t BgL_list2016z00_939;

														BgL_list2016z00_939 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2012z00_936 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2013z00_937, BgL_list2016z00_939);
													}
												}
												return
													MAKE_PAIR(BgL_arg2011z00_935, BgL_arg2012z00_936);
											}
										}
									else
										{	/* Eval/expanders.scm 170 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2749z00zz__install_expandersz00,
												BGl_string2859z00zz__install_expandersz00,
												BgL_xz00_922);
										}
								}
							else
								{	/* Eval/expanders.scm 170 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2749z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_922);
								}
						}
					else
						{	/* Eval/expanders.scm 170 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2749z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_922);
						}
				}
			}
		}
	}



/* <anonymous:2001> */
	obj_t BGl_zc3anonymousza32001ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2546, obj_t BgL_xz00_2547, obj_t BgL_ez00_2548)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 166 */
			{
				obj_t BgL_xz00_915;

				obj_t BgL_ez00_916;

				BgL_xz00_915 = BgL_xz00_2547;
				BgL_ez00_916 = BgL_ez00_2548;
				{	/* Eval/expanders.scm 167 */
					obj_t BgL_arg2002z00_1977;

					BgL_arg2002z00_1977 =
						BGl_expandzd2definezd2patternz00zz__evalz00(BgL_xz00_915);
					return
						PROCEDURE_ENTRY(BgL_ez00_916) (BgL_ez00_916, BgL_arg2002z00_1977,
						BgL_ez00_916, BEOA);
				}
			}
		}
	}



/* <anonymous:1997> */
	obj_t BGl_zc3anonymousza31997ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2549, obj_t BgL_xz00_2550, obj_t BgL_ez00_2551)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 162 */
			{
				obj_t BgL_xz00_908;

				obj_t BgL_ez00_909;

				BgL_xz00_908 = BgL_xz00_2550;
				BgL_ez00_909 = BgL_ez00_2551;
				{	/* Eval/expanders.scm 163 */
					obj_t BgL_arg1998z00_1976;

					BgL_arg1998z00_1976 =
						BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(BgL_xz00_908);
					return
						PROCEDURE_ENTRY(BgL_ez00_909) (BgL_ez00_909, BgL_arg1998z00_1976,
						BgL_ez00_909, BEOA);
				}
			}
		}
	}



/* <anonymous:1993> */
	obj_t BGl_zc3anonymousza31993ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2552, obj_t BgL_xz00_2553, obj_t BgL_ez00_2554)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 159 */
			{
				obj_t BgL_xz00_901;

				obj_t BgL_ez00_902;

				BgL_xz00_901 = BgL_xz00_2553;
				BgL_ez00_902 = BgL_ez00_2554;
				{	/* Eval/expanders.scm 159 */
					obj_t BgL_arg1994z00_1975;

					BgL_arg1994z00_1975 =
						BGl_expandzd2matchzd2casez00zz__match_expandz00(BgL_xz00_901);
					return
						PROCEDURE_ENTRY(BgL_ez00_902) (BgL_ez00_902, BgL_arg1994z00_1975,
						BgL_ez00_902, BEOA);
				}
			}
		}
	}



/* <anonymous:1990> */
	obj_t BGl_zc3anonymousza31990ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2555, obj_t BgL_xz00_2556, obj_t BgL_ez00_2557)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 156 */
			return
				BGl_expandzd2tryzd2zz__expander_tryz00(BgL_xz00_2556, BgL_ez00_2557);
		}
	}



/* <anonymous:1987> */
	obj_t BGl_zc3anonymousza31987ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2558, obj_t BgL_xz00_2559, obj_t BgL_ez00_2560)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 153 */
			return BGl_expandzd2dozd2zz__expander_doz00(BgL_xz00_2559, BgL_ez00_2560);
		}
	}



/* <anonymous:1983> */
	obj_t BGl_zc3anonymousza31983ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2561, obj_t BgL_xz00_2562, obj_t BgL_ez00_2563)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 150 */
			{
				obj_t BgL_xz00_882;

				obj_t BgL_ez00_883;

				BgL_xz00_882 = BgL_xz00_2562;
				BgL_ez00_883 = BgL_ez00_2563;
				{	/* Eval/expanders.scm 150 */
					obj_t BgL_arg1984z00_1974;

					BgL_arg1984z00_1974 =
						BGl_expandzd2condzd2zz__expander_boolz00(BgL_xz00_882);
					return
						PROCEDURE_ENTRY(BgL_ez00_883) (BgL_ez00_883, BgL_arg1984z00_1974,
						BgL_ez00_883, BEOA);
				}
			}
		}
	}



/* <anonymous:1980> */
	obj_t BGl_zc3anonymousza31980ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2564, obj_t BgL_xz00_2565, obj_t BgL_ez00_2566)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 146 */
			return
				BGl_expandzd2definezd2expanderz00zz__evalz00(BgL_xz00_2565,
				BgL_ez00_2566);
		}
	}



/* <anonymous:1976> */
	obj_t BGl_zc3anonymousza31976ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2567, obj_t BgL_xz00_2568, obj_t BgL_ez00_2569)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 142 */
			return
				BGl_expandzd2definezd2hygienezd2macrozd2zz__evalz00(BgL_xz00_2568,
				BgL_ez00_2569);
		}
	}



/* <anonymous:1973> */
	obj_t BGl_zc3anonymousza31973ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2570, obj_t BgL_xz00_2571, obj_t BgL_ez00_2572)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 138 */
			return
				BGl_expandzd2definezd2macroz00zz__evalz00(BgL_xz00_2571, BgL_ez00_2572);
		}
	}



/* <anonymous:1969> */
	obj_t BGl_zc3anonymousza31969ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2573, obj_t BgL_xz00_2574, obj_t BgL_ez00_2575)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 135 */
			{
				obj_t BgL_xz00_857;

				obj_t BgL_ez00_858;

				BgL_xz00_857 = BgL_xz00_2574;
				BgL_ez00_858 = BgL_ez00_2575;
				{	/* Eval/expanders.scm 135 */
					obj_t BgL_arg1970z00_1973;

					BgL_arg1970z00_1973 =
						BGl_quasiquotationz00zz__expander_quotez00(BINT(((long) 1)),
						BgL_xz00_857);
					return PROCEDURE_ENTRY(BgL_ez00_858) (BgL_ez00_858,
						BgL_arg1970z00_1973, BgL_ez00_858, BEOA);
				}
			}
		}
	}



/* <anonymous:1953> */
	obj_t BGl_zc3anonymousza31953ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2576, obj_t BgL_xz00_2577, obj_t BgL_ez00_2578)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 128 */
			{
				obj_t BgL_xz00_834;

				obj_t BgL_ez00_835;

				BgL_xz00_834 = BgL_xz00_2577;
				BgL_ez00_835 = BgL_ez00_2578;
				if (PAIRP(BgL_xz00_834))
					{	/* Eval/expanders.scm 128 */
						obj_t BgL_cdrzd21393zd2_841;

						BgL_cdrzd21393zd2_841 = CDR(BgL_xz00_834);
						if (
							(CAR(BgL_xz00_834) == BGl_symbol2715z00zz__install_expandersz00))
							{	/* Eval/expanders.scm 128 */
								if (PAIRP(BgL_cdrzd21393zd2_841))
									{	/* Eval/expanders.scm 128 */
										obj_t BgL_cdrzd21395zd2_844;

										BgL_cdrzd21395zd2_844 = CDR(BgL_cdrzd21393zd2_841);
										{	/* Eval/expanders.scm 128 */
											bool_t BgL_testz00_3199;

											{	/* Eval/expanders.scm 128 */
												obj_t BgL_auxz00_3200;

												BgL_auxz00_3200 = CAR(BgL_cdrzd21393zd2_841);
												BgL_testz00_3199 = SYMBOLP(BgL_auxz00_3200);
											}
											if (BgL_testz00_3199)
												{	/* Eval/expanders.scm 128 */
													if (PAIRP(BgL_cdrzd21395zd2_844))
														{	/* Eval/expanders.scm 128 */
															bool_t BgL_testz00_3205;

															{	/* Eval/expanders.scm 128 */
																obj_t BgL_auxz00_3206;

																BgL_auxz00_3206 = CAR(BgL_cdrzd21395zd2_844);
																BgL_testz00_3205 = SYMBOLP(BgL_auxz00_3206);
															}
															if (BgL_testz00_3205)
																{	/* Eval/expanders.scm 128 */
																	if (NULLP(CDR(BgL_cdrzd21395zd2_844)))
																		{	/* Eval/expanders.scm 128 */
																			return BgL_xz00_834;
																		}
																	else
																		{	/* Eval/expanders.scm 128 */
																			return
																				BGl_expandzd2errorzd2zz__install_expandersz00
																				(BGl_string2716z00zz__install_expandersz00,
																				BGl_string2859z00zz__install_expandersz00,
																				BgL_xz00_834);
																		}
																}
															else
																{	/* Eval/expanders.scm 128 */
																	return
																		BGl_expandzd2errorzd2zz__install_expandersz00
																		(BGl_string2716z00zz__install_expandersz00,
																		BGl_string2859z00zz__install_expandersz00,
																		BgL_xz00_834);
																}
														}
													else
														{	/* Eval/expanders.scm 128 */
															return
																BGl_expandzd2errorzd2zz__install_expandersz00
																(BGl_string2716z00zz__install_expandersz00,
																BGl_string2859z00zz__install_expandersz00,
																BgL_xz00_834);
														}
												}
											else
												{	/* Eval/expanders.scm 128 */
													return
														BGl_expandzd2errorzd2zz__install_expandersz00
														(BGl_string2716z00zz__install_expandersz00,
														BGl_string2859z00zz__install_expandersz00,
														BgL_xz00_834);
												}
										}
									}
								else
									{	/* Eval/expanders.scm 128 */
										return
											BGl_expandzd2errorzd2zz__install_expandersz00
											(BGl_string2716z00zz__install_expandersz00,
											BGl_string2859z00zz__install_expandersz00, BgL_xz00_834);
									}
							}
						else
							{	/* Eval/expanders.scm 128 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2716z00zz__install_expandersz00,
									BGl_string2859z00zz__install_expandersz00, BgL_xz00_834);
							}
					}
				else
					{	/* Eval/expanders.scm 128 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2716z00zz__install_expandersz00,
							BGl_string2859z00zz__install_expandersz00, BgL_xz00_834);
					}
			}
		}
	}



/* <anonymous:1950> */
	obj_t BGl_zc3anonymousza31950ze3z83zz__install_expandersz00(obj_t
		BgL_envz00_2579, obj_t BgL_xz00_2580, obj_t BgL_ez00_2581)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 125 */
			return
				BGl_expandzd2quotezd2zz__expander_quotez00(BgL_xz00_2580,
				BgL_ez00_2581);
		}
	}



/* expand-if */
	obj_t BGl_expandzd2ifzd2zz__install_expandersz00(obj_t BgL_xz00_6,
		obj_t BgL_ez00_7)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 417 */
			if (PAIRP(BgL_xz00_6))
				{	/* Eval/expanders.scm 426 */
					obj_t BgL_cdrzd21613zd2_1324;

					BgL_cdrzd21613zd2_1324 = CDR(BgL_xz00_6);
					if ((CAR(BgL_xz00_6) == BGl_symbol2708z00zz__install_expandersz00))
						{	/* Eval/expanders.scm 426 */
							if (PAIRP(BgL_cdrzd21613zd2_1324))
								{	/* Eval/expanders.scm 426 */
									obj_t BgL_cdrzd21618zd2_1327;

									BgL_cdrzd21618zd2_1327 = CDR(BgL_cdrzd21613zd2_1324);
									if (PAIRP(BgL_cdrzd21618zd2_1327))
										{	/* Eval/expanders.scm 426 */
											obj_t BgL_cdrzd21623zd2_1329;

											BgL_cdrzd21623zd2_1329 = CDR(BgL_cdrzd21618zd2_1327);
											if (PAIRP(BgL_cdrzd21623zd2_1329))
												{	/* Eval/expanders.scm 426 */
													if (NULLP(CDR(BgL_cdrzd21623zd2_1329)))
														{	/* Eval/expanders.scm 426 */
															obj_t BgL_arg2293z00_1332;

															obj_t BgL_arg2294z00_1333;

															obj_t BgL_arg2295z00_1334;

															BgL_arg2293z00_1332 = CAR(BgL_cdrzd21613zd2_1324);
															BgL_arg2294z00_1333 = CAR(BgL_cdrzd21618zd2_1327);
															BgL_arg2295z00_1334 = CAR(BgL_cdrzd21623zd2_1329);
															{	/* Eval/expanders.scm 426 */
																obj_t BgL_nxz00_2176;

																{	/* Eval/expanders.scm 426 */
																	obj_t BgL_arg2305z00_2177;

																	obj_t BgL_arg2306z00_2178;

																	obj_t BgL_arg2307z00_2179;

																	BgL_arg2305z00_2177 =
																		BGl_expandzd2testzd2zz__install_expandersz00
																		(BgL_arg2293z00_1332, BgL_ez00_7);
																	BgL_arg2306z00_2178 =
																		PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
																		BgL_arg2294z00_1333, BgL_ez00_7, BEOA);
																	BgL_arg2307z00_2179 =
																		PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
																		BgL_arg2295z00_1334, BgL_ez00_7, BEOA);
																	BgL_nxz00_2176 =
																		BGl_makezd2ifzd2zz__install_expandersz00
																		(BgL_arg2305z00_2177, BgL_arg2306z00_2178,
																		BgL_arg2307z00_2179);
																}
																return
																	BGl_evepairifyz00zz__prognz00(BgL_nxz00_2176,
																	BgL_xz00_6);
															}
														}
													else
														{	/* Eval/expanders.scm 426 */
															return
																BGl_expandzd2errorzd2zz__install_expandersz00
																(BGl_string2709z00zz__install_expandersz00,
																BGl_string2859z00zz__install_expandersz00,
																BgL_xz00_6);
														}
												}
											else
												{	/* Eval/expanders.scm 426 */
													obj_t BgL_cdrzd21648zd2_1337;

													BgL_cdrzd21648zd2_1337 = CDR(BgL_cdrzd21613zd2_1324);
													if (NULLP(CDR(BgL_cdrzd21648zd2_1337)))
														{	/* Eval/expanders.scm 426 */
															obj_t BgL_arg2300z00_1339;

															obj_t BgL_arg2301z00_1340;

															BgL_arg2300z00_1339 = CAR(BgL_cdrzd21613zd2_1324);
															BgL_arg2301z00_1340 = CAR(BgL_cdrzd21648zd2_1337);
															{	/* Eval/expanders.scm 426 */
																obj_t BgL_nxz00_2188;

																{	/* Eval/expanders.scm 426 */
																	obj_t BgL_arg2308z00_2189;

																	obj_t BgL_arg2309z00_2190;

																	BgL_arg2308z00_2189 =
																		BGl_expandzd2testzd2zz__install_expandersz00
																		(BgL_arg2300z00_1339, BgL_ez00_7);
																	BgL_arg2309z00_2190 =
																		PROCEDURE_ENTRY(BgL_ez00_7) (BgL_ez00_7,
																		BgL_arg2301z00_1340, BgL_ez00_7, BEOA);
																	BgL_nxz00_2188 =
																		BGl_makezd2ifzd2zz__install_expandersz00
																		(BgL_arg2308z00_2189, BgL_arg2309z00_2190,
																		BFALSE);
																}
																return
																	BGl_evepairifyz00zz__prognz00(BgL_nxz00_2188,
																	BgL_xz00_6);
															}
														}
													else
														{	/* Eval/expanders.scm 426 */
															return
																BGl_expandzd2errorzd2zz__install_expandersz00
																(BGl_string2709z00zz__install_expandersz00,
																BGl_string2859z00zz__install_expandersz00,
																BgL_xz00_6);
														}
												}
										}
									else
										{	/* Eval/expanders.scm 426 */
											return
												BGl_expandzd2errorzd2zz__install_expandersz00
												(BGl_string2709z00zz__install_expandersz00,
												BGl_string2859z00zz__install_expandersz00, BgL_xz00_6);
										}
								}
							else
								{	/* Eval/expanders.scm 426 */
									return
										BGl_expandzd2errorzd2zz__install_expandersz00
										(BGl_string2709z00zz__install_expandersz00,
										BGl_string2859z00zz__install_expandersz00, BgL_xz00_6);
								}
						}
					else
						{	/* Eval/expanders.scm 426 */
							return
								BGl_expandzd2errorzd2zz__install_expandersz00
								(BGl_string2709z00zz__install_expandersz00,
								BGl_string2859z00zz__install_expandersz00, BgL_xz00_6);
						}
				}
			else
				{	/* Eval/expanders.scm 426 */
					return
						BGl_expandzd2errorzd2zz__install_expandersz00
						(BGl_string2709z00zz__install_expandersz00,
						BGl_string2859z00zz__install_expandersz00, BgL_xz00_6);
				}
		}
	}



/* make-if */
	obj_t BGl_makezd2ifzd2zz__install_expandersz00(obj_t BgL_testz00_1351,
		obj_t BgL_thenz00_1352, obj_t BgL_elsez00_1353)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 424 */
			{
				obj_t BgL_testz00_1355;

				if (PAIRP(BgL_testz00_1351))
					{	/* Eval/expanders.scm 424 */
						obj_t BgL_cdrzd21597zd2_1360;

						BgL_cdrzd21597zd2_1360 = CDR(BgL_testz00_1351);
						if (
							(CAR(BgL_testz00_1351) ==
								BGl_symbol2865z00zz__install_expandersz00))
							{	/* Eval/expanders.scm 424 */
								if (PAIRP(BgL_cdrzd21597zd2_1360))
									{	/* Eval/expanders.scm 424 */
										if (NULLP(CDR(BgL_cdrzd21597zd2_1360)))
											{	/* Eval/expanders.scm 424 */
												BgL_testz00_1355 = CAR(BgL_cdrzd21597zd2_1360);
												{	/* Eval/expanders.scm 422 */
													obj_t BgL_arg2319z00_1368;

													obj_t BgL_arg2320z00_1369;

													BgL_arg2319z00_1368 =
														BGl_symbol2708z00zz__install_expandersz00;
													{	/* Eval/expanders.scm 422 */
														obj_t BgL_list2321z00_1370;

														{	/* Eval/expanders.scm 422 */
															obj_t BgL_arg2322z00_1371;

															{	/* Eval/expanders.scm 422 */
																obj_t BgL_arg2323z00_1372;

																BgL_arg2323z00_1372 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2322z00_1371 =
																	MAKE_PAIR(BgL_thenz00_1352,
																	BgL_arg2323z00_1372);
															}
															BgL_list2321z00_1370 =
																MAKE_PAIR(BgL_elsez00_1353,
																BgL_arg2322z00_1371);
														}
														BgL_arg2320z00_1369 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_testz00_1355, BgL_list2321z00_1370);
													}
													return
														MAKE_PAIR(BgL_arg2319z00_1368, BgL_arg2320z00_1369);
												}
											}
										else
											{	/* Eval/expanders.scm 424 */
											BgL_tagzd21592zd2_1357:
												{	/* Eval/expanders.scm 424 */
													obj_t BgL_arg2324z00_1373;

													obj_t BgL_arg2325z00_1374;

													BgL_arg2324z00_1373 =
														BGl_symbol2708z00zz__install_expandersz00;
													{	/* Eval/expanders.scm 424 */
														obj_t BgL_list2326z00_1375;

														{	/* Eval/expanders.scm 424 */
															obj_t BgL_arg2327z00_1376;

															{	/* Eval/expanders.scm 424 */
																obj_t BgL_arg2328z00_1377;

																BgL_arg2328z00_1377 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2327z00_1376 =
																	MAKE_PAIR(BgL_elsez00_1353,
																	BgL_arg2328z00_1377);
															}
															BgL_list2326z00_1375 =
																MAKE_PAIR(BgL_thenz00_1352,
																BgL_arg2327z00_1376);
														}
														BgL_arg2325z00_1374 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_testz00_1351, BgL_list2326z00_1375);
													}
													return
														MAKE_PAIR(BgL_arg2324z00_1373, BgL_arg2325z00_1374);
												}
											}
									}
								else
									{	/* Eval/expanders.scm 424 */
										goto BgL_tagzd21592zd2_1357;
									}
							}
						else
							{	/* Eval/expanders.scm 424 */
								goto BgL_tagzd21592zd2_1357;
							}
					}
				else
					{	/* Eval/expanders.scm 424 */
						goto BgL_tagzd21592zd2_1357;
					}
			}
		}
	}



/* _expand-if */
	obj_t BGl__expandzd2ifzd2zz__install_expandersz00(obj_t BgL_envz00_2615,
		obj_t BgL_xz00_2616, obj_t BgL_ez00_2617)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 417 */
			return
				BGl_expandzd2ifzd2zz__install_expandersz00(BgL_xz00_2616,
				BgL_ez00_2617);
		}
	}



/* expand-tprint */
	obj_t BGl_expandzd2tprintzd2zz__install_expandersz00(obj_t BgL_xz00_8,
		obj_t BgL_ez00_9)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 439 */
			SET_CAR(BgL_xz00_8, BGl_list2867z00zz__install_expandersz00);
			{	/* Eval/expanders.scm 441 */
				obj_t BgL_arg2329z00_1379;

				if (EXTENDED_PAIRP(BgL_xz00_8))
					{
						obj_t BgL_namez00_1381;

						obj_t BgL_posz00_1382;

						{	/* Eval/expanders.scm 442 */
							obj_t BgL_ezd21676zd2_1385;

							BgL_ezd21676zd2_1385 = CER(BgL_xz00_8);
							if (PAIRP(BgL_ezd21676zd2_1385))
								{	/* Eval/expanders.scm 442 */
									obj_t BgL_cdrzd21682zd2_1387;

									BgL_cdrzd21682zd2_1387 = CDR(BgL_ezd21676zd2_1385);
									if (
										(CAR(BgL_ezd21676zd2_1385) ==
											BGl_symbol2875z00zz__install_expandersz00))
										{	/* Eval/expanders.scm 442 */
											if (PAIRP(BgL_cdrzd21682zd2_1387))
												{	/* Eval/expanders.scm 442 */
													obj_t BgL_cdrzd21686zd2_1390;

													BgL_cdrzd21686zd2_1390 = CDR(BgL_cdrzd21682zd2_1387);
													if (PAIRP(BgL_cdrzd21686zd2_1390))
														{	/* Eval/expanders.scm 442 */
															if (NULLP(CDR(BgL_cdrzd21686zd2_1390)))
																{	/* Eval/expanders.scm 442 */
																	BgL_namez00_1381 =
																		CAR(BgL_cdrzd21682zd2_1387);
																	BgL_posz00_1382 = CAR(BgL_cdrzd21686zd2_1390);
																	{	/* Eval/expanders.scm 445 */
																		obj_t BgL_arg2341z00_1398;

																		{	/* Eval/expanders.scm 445 */
																			obj_t BgL_arg2342z00_1399;

																			obj_t BgL_arg2343z00_1400;

																			BgL_arg2342z00_1399 =
																				BGl_list2870z00zz__install_expandersz00;
																			{	/* Eval/expanders.scm 446 */
																				obj_t BgL_arg2344z00_1401;

																				obj_t BgL_arg2346z00_1403;

																				obj_t BgL_arg2348z00_1405;

																				BgL_arg2344z00_1401 =
																					BGl_relativezd2filezd2namez00zz__osz00
																					(BgL_namez00_1381,
																					BGl_pwdz00zz__osz00());
																				BgL_arg2346z00_1403 =
																					BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00
																					(CINT(BgL_posz00_1382),
																					BgL_namez00_1381);
																				BgL_arg2348z00_1405 = CDR(BgL_xz00_8);
																				{	/* Eval/expanders.scm 445 */
																					obj_t BgL_list2349z00_1406;

																					{	/* Eval/expanders.scm 445 */
																						obj_t BgL_arg2350z00_1407;

																						{	/* Eval/expanders.scm 445 */
																							obj_t BgL_arg2351z00_1408;

																							{	/* Eval/expanders.scm 445 */
																								obj_t BgL_arg2352z00_1409;

																								BgL_arg2352z00_1409 =
																									MAKE_PAIR(BgL_arg2348z00_1405,
																									BNIL);
																								BgL_arg2351z00_1408 =
																									MAKE_PAIR
																									(BGl_string2873z00zz__install_expandersz00,
																									BgL_arg2352z00_1409);
																							}
																							BgL_arg2350z00_1407 =
																								MAKE_PAIR(BgL_arg2346z00_1403,
																								BgL_arg2351z00_1408);
																						}
																						BgL_list2349z00_1406 =
																							MAKE_PAIR
																							(BGl_string2874z00zz__install_expandersz00,
																							BgL_arg2350z00_1407);
																					}
																					BgL_arg2343z00_1400 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2344z00_1401,
																						BgL_list2349z00_1406);
																				}
																			}
																			BgL_arg2341z00_1398 =
																				MAKE_PAIR(BgL_arg2342z00_1399,
																				BgL_arg2343z00_1400);
																		}
																		SET_CDR(BgL_xz00_8, BgL_arg2341z00_1398);
																	}
																	BgL_arg2329z00_1379 = BgL_xz00_8;
																}
															else
																{	/* Eval/expanders.scm 442 */
																BgL_tagzd21675zd2_1384:
																	{	/* Eval/expanders.scm 453 */
																		obj_t BgL_arg2354z00_1411;

																		BgL_arg2354z00_1411 =
																			MAKE_PAIR
																			(BGl_list2870z00zz__install_expandersz00,
																			CDR(BgL_xz00_8));
																		SET_CDR(BgL_xz00_8, BgL_arg2354z00_1411);
																	}
																	BgL_arg2329z00_1379 = BgL_xz00_8;
																}
														}
													else
														{	/* Eval/expanders.scm 442 */
															goto BgL_tagzd21675zd2_1384;
														}
												}
											else
												{	/* Eval/expanders.scm 442 */
													goto BgL_tagzd21675zd2_1384;
												}
										}
									else
										{	/* Eval/expanders.scm 442 */
											goto BgL_tagzd21675zd2_1384;
										}
								}
							else
								{	/* Eval/expanders.scm 442 */
									goto BgL_tagzd21675zd2_1384;
								}
						}
					}
				else
					{	/* Eval/expanders.scm 441 */
						{	/* Eval/expanders.scm 456 */
							obj_t BgL_arg2357z00_1414;

							BgL_arg2357z00_1414 =
								MAKE_PAIR(BGl_list2870z00zz__install_expandersz00,
								CDR(BgL_xz00_8));
							SET_CDR(BgL_xz00_8, BgL_arg2357z00_1414);
						}
						BgL_arg2329z00_1379 = BgL_xz00_8;
					}
				return
					PROCEDURE_ENTRY(BgL_ez00_9) (BgL_ez00_9, BgL_arg2329z00_1379,
					BgL_ez00_9, BEOA);
			}
		}
	}



/* _expand-tprint */
	obj_t BGl__expandzd2tprintzd2zz__install_expandersz00(obj_t BgL_envz00_2600,
		obj_t BgL_xz00_2601, obj_t BgL_ez00_2602)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 439 */
			return
				BGl_expandzd2tprintzd2zz__install_expandersz00(BgL_xz00_2601,
				BgL_ez00_2602);
		}
	}



/* expand-begin */
	obj_t BGl_expandzd2beginzd2zz__install_expandersz00(obj_t BgL_xz00_10,
		obj_t BgL_ez00_11)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 463 */
			{
				obj_t BgL_bodyz00_1417;

				if (PAIRP(BgL_xz00_10))
					{	/* Eval/expanders.scm 464 */
						BgL_bodyz00_1417 = CDR(BgL_xz00_10);
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_bodyz00_1417))
							{	/* Eval/expanders.scm 468 */
								obj_t BgL_arg2363z00_1424;

								if (NULLP(BgL_bodyz00_1417))
									{	/* Eval/expanders.scm 468 */
										BgL_arg2363z00_1424 = BNIL;
									}
								else
									{	/* Eval/expanders.scm 468 */
										obj_t BgL_head1860z00_1427;

										BgL_head1860z00_1427 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1858z00_1429;

											obj_t BgL_tail1861z00_1430;

											BgL_l1858z00_1429 = BgL_bodyz00_1417;
											BgL_tail1861z00_1430 = BgL_head1860z00_1427;
										BgL_zc3anonymousza32365ze3z83_1431:
											if (NULLP(BgL_l1858z00_1429))
												{	/* Eval/expanders.scm 468 */
													BgL_arg2363z00_1424 = CDR(BgL_head1860z00_1427);
												}
											else
												{	/* Eval/expanders.scm 468 */
													obj_t BgL_newtail1862z00_1433;

													{	/* Eval/expanders.scm 468 */
														obj_t BgL_arg2368z00_1435;

														{	/* Eval/expanders.scm 468 */
															obj_t BgL_xz00_1437;

															BgL_xz00_1437 = CAR(BgL_l1858z00_1429);
															BgL_arg2368z00_1435 =
																PROCEDURE_ENTRY(BgL_ez00_11) (BgL_ez00_11,
																BgL_xz00_1437, BgL_ez00_11, BEOA);
														}
														BgL_newtail1862z00_1433 =
															MAKE_PAIR(BgL_arg2368z00_1435, BNIL);
													}
													SET_CDR(BgL_tail1861z00_1430,
														BgL_newtail1862z00_1433);
													{
														obj_t BgL_tail1861z00_3345;

														obj_t BgL_l1858z00_3343;

														BgL_l1858z00_3343 = CDR(BgL_l1858z00_1429);
														BgL_tail1861z00_3345 = BgL_newtail1862z00_1433;
														BgL_tail1861z00_1430 = BgL_tail1861z00_3345;
														BgL_l1858z00_1429 = BgL_l1858z00_3343;
														goto BgL_zc3anonymousza32365ze3z83_1431;
													}
												}
										}
									}
								return BGl_expandzd2prognzd2zz__prognz00(BgL_arg2363z00_1424);
							}
						else
							{	/* Eval/expanders.scm 466 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2758z00zz__install_expandersz00,
									BGl_string2859z00zz__install_expandersz00, BgL_xz00_10);
							}
					}
				else
					{	/* Eval/expanders.scm 464 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2758z00zz__install_expandersz00,
							BGl_string2859z00zz__install_expandersz00, BgL_xz00_10);
					}
			}
		}
	}



/* _expand-begin */
	obj_t BGl__expandzd2beginzd2zz__install_expandersz00(obj_t BgL_envz00_2591,
		obj_t BgL_xz00_2592, obj_t BgL_ez00_2593)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 463 */
			return
				BGl_expandzd2beginzd2zz__install_expandersz00(BgL_xz00_2592,
				BgL_ez00_2593);
		}
	}



/* expand-and-let* */
	obj_t BGl_expandzd2andzd2letza2za2zz__install_expandersz00(obj_t BgL_xz00_12,
		obj_t BgL_ez00_13)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 475 */
			{
				obj_t BgL_clawsz00_1439;

				obj_t BgL_bodyz00_1440;

				if (PAIRP(BgL_xz00_12))
					{	/* Eval/expanders.scm 476 */
						obj_t BgL_cdrzd21708zd2_1445;

						BgL_cdrzd21708zd2_1445 = CDR(BgL_xz00_12);
						if (PAIRP(BgL_cdrzd21708zd2_1445))
							{	/* Eval/expanders.scm 476 */
								BgL_clawsz00_1439 = CAR(BgL_cdrzd21708zd2_1445);
								BgL_bodyz00_1440 = CDR(BgL_cdrzd21708zd2_1445);
								{	/* Eval/expanders.scm 478 */
									obj_t BgL_newzd2varszd2_1449;

									BgL_newzd2varszd2_1449 = BNIL;
									{	/* Eval/expanders.scm 478 */
										obj_t BgL_resultz00_1450;

										BgL_resultz00_1450 =
											MAKE_PAIR(BGl_symbol2877z00zz__install_expandersz00,
											BNIL);
										{	/* Eval/expanders.scm 478 */
											obj_t BgL_growthzd2pointzd2_1451;

											BgL_growthzd2pointzd2_1451 = BgL_resultz00_1450;
											{	/* Eval/expanders.scm 478 */

												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_clawsz00_1439))
													{	/* Eval/expanders.scm 483 */
														BFALSE;
													}
												else
													{	/* Eval/expanders.scm 483 */
														BGl_expandzd2errorzd2zz__install_expandersz00
															(BFALSE,
															BGl_string2879z00zz__install_expandersz00,
															BgL_clawsz00_1439);
													}
												{
													obj_t BgL_l1863z00_1455;

													BgL_l1863z00_1455 = BgL_clawsz00_1439;
												BgL_zc3anonymousza32375ze3z83_1456:
													if (PAIRP(BgL_l1863z00_1455))
														{	/* Eval/expanders.scm 485 */
															{	/* Eval/expanders.scm 488 */
																obj_t BgL_clawz00_1458;

																BgL_clawz00_1458 = CAR(BgL_l1863z00_1455);
																if (SYMBOLP(BgL_clawz00_1458))
																	{	/* Eval/expanders.scm 490 */
																		obj_t BgL_clausez00_2249;

																		BgL_clausez00_2249 = BgL_clawz00_1458;
																		{	/* Eval/expanders.scm 490 */
																			obj_t BgL_prevzd2pointzd2_2250;

																			obj_t BgL_clausezd2cellzd2_2251;

																			BgL_prevzd2pointzd2_2250 =
																				BgL_growthzd2pointzd2_1451;
																			BgL_clausezd2cellzd2_2251 =
																				MAKE_PAIR(BgL_clausez00_2249, BNIL);
																			SET_CDR(BgL_growthzd2pointzd2_1451,
																				BgL_clausezd2cellzd2_2251);
																			BgL_growthzd2pointzd2_1451 =
																				BgL_clausezd2cellzd2_2251;
																		}
																	}
																else
																	{	/* Eval/expanders.scm 491 */
																		bool_t BgL_testz00_3367;

																		if (PAIRP(BgL_clawz00_1458))
																			{	/* Eval/expanders.scm 491 */
																				BgL_testz00_3367 =
																					NULLP(CDR(BgL_clawz00_1458));
																			}
																		else
																			{	/* Eval/expanders.scm 491 */
																				BgL_testz00_3367 = ((bool_t) 0);
																			}
																		if (BgL_testz00_3367)
																			{	/* Eval/expanders.scm 493 */
																				obj_t BgL_arg2379z00_1461;

																				BgL_arg2379z00_1461 =
																					CAR(BgL_clawz00_1458);
																				{	/* Eval/expanders.scm 493 */
																					obj_t BgL_prevzd2pointzd2_2259;

																					obj_t BgL_clausezd2cellzd2_2260;

																					BgL_prevzd2pointzd2_2259 =
																						BgL_growthzd2pointzd2_1451;
																					BgL_clausezd2cellzd2_2260 =
																						MAKE_PAIR(BgL_arg2379z00_1461,
																						BNIL);
																					SET_CDR(BgL_growthzd2pointzd2_1451,
																						BgL_clausezd2cellzd2_2260);
																					BgL_growthzd2pointzd2_1451 =
																						BgL_clausezd2cellzd2_2260;
																				}
																			}
																		else
																			{	/* Eval/expanders.scm 495 */
																				bool_t BgL_testz00_3375;

																				if (PAIRP(BgL_clawz00_1458))
																					{	/* Eval/expanders.scm 495 */
																						bool_t BgL_testz00_3378;

																						{	/* Eval/expanders.scm 495 */
																							obj_t BgL_auxz00_3379;

																							BgL_auxz00_3379 =
																								CAR(BgL_clawz00_1458);
																							BgL_testz00_3378 =
																								SYMBOLP(BgL_auxz00_3379);
																						}
																						if (BgL_testz00_3378)
																							{	/* Eval/expanders.scm 496 */
																								bool_t BgL_testz00_3382;

																								{	/* Eval/expanders.scm 496 */
																									obj_t BgL_auxz00_3383;

																									BgL_auxz00_3383 =
																										CDR(BgL_clawz00_1458);
																									BgL_testz00_3382 =
																										PAIRP(BgL_auxz00_3383);
																								}
																								if (BgL_testz00_3382)
																									{	/* Eval/expanders.scm 496 */
																										BgL_testz00_3375 =
																											NULLP(CDR(CDR
																												(BgL_clawz00_1458)));
																									}
																								else
																									{	/* Eval/expanders.scm 496 */
																										BgL_testz00_3375 =
																											((bool_t) 0);
																									}
																							}
																						else
																							{	/* Eval/expanders.scm 495 */
																								BgL_testz00_3375 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Eval/expanders.scm 495 */
																						BgL_testz00_3375 = ((bool_t) 0);
																					}
																				if (BgL_testz00_3375)
																					{	/* Eval/expanders.scm 497 */
																						obj_t BgL_varz00_1463;

																						BgL_varz00_1463 =
																							CAR(BgL_clawz00_1458);
																						{	/* Eval/expanders.scm 497 */
																							obj_t BgL_varzd2cellzd2_1464;

																							BgL_varzd2cellzd2_1464 =
																								MAKE_PAIR(BgL_varz00_1463,
																								BNIL);
																							{	/* Eval/expanders.scm 497 */

																								if (CBOOL
																									(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																										(BgL_varz00_1463,
																											BgL_newzd2varszd2_1449)))
																									{	/* Eval/expanders.scm 498 */
																										BGl_expandzd2errorzd2zz__install_expandersz00
																											(BGl_string2809z00zz__install_expandersz00,
																											BGl_string2880z00zz__install_expandersz00,
																											BgL_varz00_1463);
																									}
																								else
																									{	/* Eval/expanders.scm 498 */
																										BFALSE;
																									}
																								BgL_newzd2varszd2_1449 =
																									MAKE_PAIR(BgL_varz00_1463,
																									BgL_newzd2varszd2_1449);
																								{	/* Eval/expanders.scm 503 */
																									obj_t BgL_arg2382z00_1466;

																									{	/* Eval/expanders.scm 503 */
																										obj_t BgL_arg2383z00_1467;

																										{	/* Eval/expanders.scm 503 */
																											obj_t BgL_arg2385z00_1469;

																											obj_t BgL_arg2386z00_1470;

																											BgL_arg2385z00_1469 =
																												BGl_symbol2808z00zz__install_expandersz00;
																											{	/* Eval/expanders.scm 503 */
																												obj_t
																													BgL_arg2387z00_1471;
																												obj_t
																													BgL_arg2388z00_1472;
																												BgL_arg2387z00_1471 =
																													MAKE_PAIR
																													(BgL_clawz00_1458,
																													BNIL);
																												BgL_arg2388z00_1472 =
																													MAKE_PAIR
																													(BGl_symbol2877z00zz__install_expandersz00,
																													BgL_varzd2cellzd2_1464);
																												{	/* Eval/expanders.scm 503 */
																													obj_t
																														BgL_list2390z00_1474;
																													{	/* Eval/expanders.scm 503 */
																														obj_t
																															BgL_arg2391z00_1475;
																														BgL_arg2391z00_1475
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2390z00_1474
																															=
																															MAKE_PAIR
																															(BgL_arg2388z00_1472,
																															BgL_arg2391z00_1475);
																													}
																													BgL_arg2386z00_1470 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2387z00_1471,
																														BgL_list2390z00_1474);
																												}
																											}
																											BgL_arg2383z00_1467 =
																												MAKE_PAIR
																												(BgL_arg2385z00_1469,
																												BgL_arg2386z00_1470);
																										}
																										BgL_arg2382z00_1466 =
																											MAKE_PAIR
																											(BgL_arg2383z00_1467,
																											BNIL);
																									}
																									SET_CDR
																										(BgL_growthzd2pointzd2_1451,
																										BgL_arg2382z00_1466);
																								}
																								BgL_growthzd2pointzd2_1451 =
																									BgL_varzd2cellzd2_1464;
																							}
																						}
																					}
																				else
																					{	/* Eval/expanders.scm 495 */
																						BGl_expandzd2errorzd2zz__install_expandersz00
																							(BGl_string2809z00zz__install_expandersz00,
																							BGl_string2881z00zz__install_expandersz00,
																							BgL_clawz00_1458);
																					}
																			}
																	}
															}
															{
																obj_t BgL_l1863z00_3405;

																BgL_l1863z00_3405 = CDR(BgL_l1863z00_1455);
																BgL_l1863z00_1455 = BgL_l1863z00_3405;
																goto BgL_zc3anonymousza32375ze3z83_1456;
															}
														}
													else
														{	/* Eval/expanders.scm 485 */
															((bool_t) 1);
														}
												}
												if (NULLP(BgL_bodyz00_1440))
													{	/* Eval/expanders.scm 508 */
														BFALSE;
													}
												else
													{	/* Eval/expanders.scm 508 */
														obj_t BgL_arg2402z00_1487;

														BgL_arg2402z00_1487 =
															MAKE_PAIR
															(BGl_symbol2757z00zz__install_expandersz00,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_bodyz00_1440, BNIL));
														{	/* Eval/expanders.scm 508 */
															obj_t BgL_prevzd2pointzd2_2279;

															obj_t BgL_clausezd2cellzd2_2280;

															BgL_prevzd2pointzd2_2279 =
																BgL_growthzd2pointzd2_1451;
															BgL_clausezd2cellzd2_2280 =
																MAKE_PAIR(BgL_arg2402z00_1487, BNIL);
															SET_CDR(BgL_growthzd2pointzd2_1451,
																BgL_clausezd2cellzd2_2280);
															BgL_growthzd2pointzd2_1451 =
																BgL_clausezd2cellzd2_2280;
														}
													}
												{	/* Eval/expanders.scm 509 */
													obj_t BgL_arg2405z00_1490;

													BgL_arg2405z00_1490 =
														PROCEDURE_ENTRY(BgL_ez00_13) (BgL_ez00_13,
														BgL_resultz00_1450, BgL_ez00_13, BEOA);
													return
														BGl_evepairifyz00zz__prognz00(BgL_arg2405z00_1490,
														BgL_xz00_12);
												}
											}
										}
									}
								}
							}
						else
							{	/* Eval/expanders.scm 476 */
								return
									BGl_expandzd2errorzd2zz__install_expandersz00
									(BGl_string2809z00zz__install_expandersz00,
									BGl_string2882z00zz__install_expandersz00, BgL_xz00_12);
							}
					}
				else
					{	/* Eval/expanders.scm 476 */
						return
							BGl_expandzd2errorzd2zz__install_expandersz00
							(BGl_string2809z00zz__install_expandersz00,
							BGl_string2882z00zz__install_expandersz00, BgL_xz00_12);
					}
			}
		}
	}



/* _expand-and-let* */
	obj_t BGl__expandzd2andzd2letza2za2zz__install_expandersz00(obj_t
		BgL_envz00_2603, obj_t BgL_xz00_2604, obj_t BgL_ez00_2605)
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 475 */
			return
				BGl_expandzd2andzd2letza2za2zz__install_expandersz00(BgL_xz00_2604,
				BgL_ez00_2605);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__install_expandersz00()
	{
		AN_OBJECT;
		{	/* Eval/expanders.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 508636713),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_quotez00(((long) 263716903),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_letz00(((long) 153382121),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_boolz00(((long) 112965567),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_casez00(((long) 253551275),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_definez00(((long) 340645947),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_doz00(((long) 360863958),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_tryz00(((long) 363690510),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_structz00(((long) 177694337),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_recordz00(((long) 461512487),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 121715845),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_argsz00(((long) 326956659),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expander_tracez00(((long) 21704168),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 41770876),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__lalr_expandz00(((long) 336541815),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__rgc_expandz00(((long) 404580459),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__match_expandz00(((long) 149612973),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 453710891),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evmodulez00(((long) 187663721),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			BGl_modulezd2initializa7ationz75zz__evobjectz00(((long) 266783111),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
			return
				BGl_modulezd2initializa7ationz75zz__r5_macro_4_3_syntaxz00(((long)
					304810762),
				BSTRING_TO_STRING(BGl_string2883z00zz__install_expandersz00));
		}
	}

#ifdef __cplusplus
}
#endif
