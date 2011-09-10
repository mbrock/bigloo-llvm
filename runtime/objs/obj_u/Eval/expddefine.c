/*===========================================================================*/
/*   (Eval/expddefine.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expddefine.scm -indent -o objs/obj_u/Eval/expddefine.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t, obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32373ze3z83zz__expander_definez00(obj_t,
		obj_t);
	static obj_t
		BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00(obj_t,
		obj_t);
	static obj_t
		BGl__expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32382ze3z83zz__expander_definez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_definez00 =
		BUNSPEC;
	extern obj_t BGl_argszd2ze3listz31zz__evutilsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_definez00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t);
	static obj_t BGl__evalzd2beginzd2expanderz00zz__expander_definez00(obj_t,
		obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_mapzb2zb2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_definez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_definez00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_newez00zz__expander_definez00(obj_t, obj_t, obj_t);
	static obj_t
		BGl__expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00(obj_t,
		obj_t);
	static obj_t BGl_getzd2argszd2zz__expander_definez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_definez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t, obj_t);
	extern obj_t bgl_reverse(obj_t);
	extern obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	static bool_t BGl_allzf3zf3zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31941ze3z83zz__expander_definez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_lambdazd2defineszd2zz__expander_definez00(obj_t);
	static obj_t BGl_loopz00zz__expander_definez00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	static obj_t BGl__expandzd2evalzd2definez00zz__expander_definez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_symbol2780z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2783z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2788z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2800z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2790z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2802z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2792z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl__expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_symbol2804z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2806z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2796z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2808z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2810z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2812z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2814z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2816z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2818z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2824z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2826z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2828z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_symbol2830z00zz__expander_definez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32356ze3z83zz__expander_definez00(obj_t,
		obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definez00zz__expander_definez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_definez00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t, obj_t);
	static obj_t *__cnst;


	extern obj_t BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2798z00zz__expander_definez00,
		BgL_bgl_za7c3anonymousza7a322835z00,
		BGl_zc3anonymousza32373ze3z83zz__expander_definez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2799z00zz__expander_definez00,
		BgL_bgl_za7c3anonymousza7a322836z00,
		BGl_zc3anonymousza32356ze3z83zz__expander_definez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2beginzd2expanderzd2envzd2zz__expander_definez00,
		BgL_bgl__evalza7d2beginza7d22837z00,
		BGl__evalzd2beginzd2expanderz00zz__expander_definez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2775z00zz__expander_definez00,
		BgL_bgl_string2775za700za7za7_2838za7, "expand", 6);
	      DEFINE_STRING(BGl_string2776z00zz__expander_definez00,
		BgL_bgl_string2776za700za7za7_2839za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string2777z00zz__expander_definez00,
		BgL_bgl_string2777za700za7za7_2840za7,
		"/tmp/bigloo/runtime/Eval/expddefine.scm", 39);
	      DEFINE_STRING(BGl_string2778z00zz__expander_definez00,
		BgL_bgl_string2778za700za7za7_2841za7, "_eval-begin-expander", 20);
	      DEFINE_STRING(BGl_string2779z00zz__expander_definez00,
		BgL_bgl_string2779za700za7za7_2842za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2781z00zz__expander_definez00,
		BgL_bgl_string2781za700za7za7_2843za7, "begin", 5);
	      DEFINE_STRING(BGl_string2782z00zz__expander_definez00,
		BgL_bgl_string2782za700za7za7_2844za7, "Illegal `begin' form", 20);
	      DEFINE_STRING(BGl_string2784z00zz__expander_definez00,
		BgL_bgl_string2784za700za7za7_2845za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2785z00zz__expander_definez00,
		BgL_bgl_string2785za700za7za7_2846za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2786z00zz__expander_definez00,
		BgL_bgl_string2786za700za7za7_2847za7, "_expand-eval-lambda", 19);
	      DEFINE_STRING(BGl_string2787z00zz__expander_definez00,
		BgL_bgl_string2787za700za7za7_2848za7, "_expand-eval-define", 19);
	      DEFINE_STRING(BGl_string2789z00zz__expander_definez00,
		BgL_bgl_string2789za700za7za7_2849za7, "define", 6);
	      DEFINE_STRING(BGl_string2801z00zz__expander_definez00,
		BgL_bgl_string2801za700za7za7_2850za7, "procedure->generic", 18);
	      DEFINE_STRING(BGl_string2791z00zz__expander_definez00,
		BgL_bgl_string2791za700za7za7_2851za7, "set!", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2envzd2zz__expander_definez00,
		BgL_bgl__expandza7d2evalza7d2852z00,
		BGl__expandzd2evalzd2definez00zz__expander_definez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2803z00zz__expander_definez00,
		BgL_bgl_string2803za700za7za7_2853za7, "apply", 5);
	      DEFINE_STRING(BGl_string2793z00zz__expander_definez00,
		BgL_bgl_string2793za700za7za7_2854za7, "let", 3);
	      DEFINE_STRING(BGl_string2794z00zz__expander_definez00,
		BgL_bgl_string2794za700za7za7_2855za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2805z00zz__expander_definez00,
		BgL_bgl_string2805za700za7za7_2856za7, "and", 3);
	      DEFINE_STRING(BGl_string2795z00zz__expander_definez00,
		BgL_bgl_string2795za700za7za7_2857za7, "_expand-eval-define-inline", 26);
	      DEFINE_STRING(BGl_string2807z00zz__expander_definez00,
		BgL_bgl_string2807za700za7za7_2858za7, "object?", 7);
	      DEFINE_STRING(BGl_string2797z00zz__expander_definez00,
		BgL_bgl_string2797za700za7za7_2859za7, "generic-default", 15);
	      DEFINE_STRING(BGl_string2809z00zz__expander_definez00,
		BgL_bgl_string2809za700za7za7_2860za7, "find-method", 11);
	      DEFINE_STRING(BGl_string2811z00zz__expander_definez00,
		BgL_bgl_string2811za700za7za7_2861za7, "if", 2);
	      DEFINE_STRING(BGl_string2813z00zz__expander_definez00,
		BgL_bgl_string2813za700za7za7_2862za7, "procedure?", 10);
	      DEFINE_STRING(BGl_string2815z00zz__expander_definez00,
		BgL_bgl_string2815za700za7za7_2863za7, "register-generic!", 17);
	      DEFINE_STRING(BGl_string2817z00zz__expander_definez00,
		BgL_bgl_string2817za700za7za7_2864za7, "error", 5);
	      DEFINE_STRING(BGl_string2820z00zz__expander_definez00,
		BgL_bgl_string2820za700za7za7_2865za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string2819z00zz__expander_definez00,
		BgL_bgl_string2819za700za7za7_2866za7, "quote", 5);
	      DEFINE_STRING(BGl_string2821z00zz__expander_definez00,
		BgL_bgl_string2821za700za7za7_2867za7,
		"Illegal formal arguments for generic function", 45);
	      DEFINE_STRING(BGl_string2822z00zz__expander_definez00,
		BgL_bgl_string2822za700za7za7_2868za7, "define-generic", 14);
	      DEFINE_STRING(BGl_string2823z00zz__expander_definez00,
		BgL_bgl_string2823za700za7za7_2869za7, "_expand-eval-define-generic", 27);
	      DEFINE_STRING(BGl_string2825z00zz__expander_definez00,
		BgL_bgl_string2825za700za7za7_2870za7, "generic-add-eval-method!", 24);
	      DEFINE_STRING(BGl_string2827z00zz__expander_definez00,
		BgL_bgl_string2827za700za7za7_2871za7, "call-next-method", 16);
	      DEFINE_STRING(BGl_string2829z00zz__expander_definez00,
		BgL_bgl_string2829za700za7za7_2872za7, "next", 4);
	      DEFINE_STRING(BGl_string2831z00zz__expander_definez00,
		BgL_bgl_string2831za700za7za7_2873za7, "find-super-class-method", 23);
	      DEFINE_STRING(BGl_string2832z00zz__expander_definez00,
		BgL_bgl_string2832za700za7za7_2874za7, "define-method", 13);
	      DEFINE_STRING(BGl_string2833z00zz__expander_definez00,
		BgL_bgl_string2833za700za7za7_2875za7, "_expand-eval-define-method", 26);
	      DEFINE_STRING(BGl_string2834z00zz__expander_definez00,
		BgL_bgl_string2834za700za7za7_2876za7, "__expander_define", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2lambdazd2envzd2zz__expander_definez00,
		BgL_bgl__expandza7d2evalza7d2877z00,
		BGl__expandzd2evalzd2lambdaz00zz__expander_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2inlinezd2envz00zz__expander_definez00,
		BgL_bgl__expandza7d2evalza7d2878z00,
		BGl__expandzd2evalzd2definezd2inlinezd2zz__expander_definez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2methodzd2envz00zz__expander_definez00,
		BgL_bgl__expandza7d2evalza7d2879z00,
		BGl__expandzd2evalzd2definezd2methodzd2zz__expander_definez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2genericzd2envz00zz__expander_definez00,
		BgL_bgl__expandza7d2evalza7d2880z00,
		BGl__expandzd2evalzd2definezd2genericzd2zz__expander_definez00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_definez00(long
		BgL_checksumz00_2562, char *BgL_fromz00_2563)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_definez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_definez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_definez00();
					BGl_importedzd2moduleszd2initz00zz__expander_definez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_definez00()
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 15 */
			BGl_symbol2780z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2781z00zz__expander_definez00);
			BGl_symbol2783z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2784z00zz__expander_definez00);
			BGl_symbol2788z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2789z00zz__expander_definez00);
			BGl_symbol2790z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2791z00zz__expander_definez00);
			BGl_symbol2792z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2793z00zz__expander_definez00);
			BGl_symbol2796z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2797z00zz__expander_definez00);
			BGl_symbol2800z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2801z00zz__expander_definez00);
			BGl_symbol2802z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2803z00zz__expander_definez00);
			BGl_symbol2804z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2805z00zz__expander_definez00);
			BGl_symbol2806z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2807z00zz__expander_definez00);
			BGl_symbol2808z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2809z00zz__expander_definez00);
			BGl_symbol2810z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2811z00zz__expander_definez00);
			BGl_symbol2812z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2813z00zz__expander_definez00);
			BGl_symbol2814z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2815z00zz__expander_definez00);
			BGl_symbol2816z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2817z00zz__expander_definez00);
			BGl_symbol2818z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2819z00zz__expander_definez00);
			BGl_symbol2824z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2825z00zz__expander_definez00);
			BGl_symbol2826z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2827z00zz__expander_definez00);
			BGl_symbol2828z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2829z00zz__expander_definez00);
			return (BGl_symbol2830z00zz__expander_definez00 =
				bstring_to_symbol(BGl_string2831z00zz__expander_definez00), BUNSPEC);
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expander_definez00(obj_t BgL_ez00_2537,
		obj_t BgL_argsz00_791)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 62 */
			if (NULLP(BgL_argsz00_791))
				{	/* Eval/expddefine.scm 64 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 64 */
					if (SYMBOLP(BgL_argsz00_791))
						{	/* Eval/expddefine.scm 66 */
							return BgL_argsz00_791;
						}
					else
						{	/* Eval/expddefine.scm 66 */
							if (PAIRP(BgL_argsz00_791))
								{	/* Eval/expddefine.scm 70 */
									bool_t BgL_testz00_2595;

									{	/* Eval/expddefine.scm 70 */
										bool_t BgL_testz00_2596;

										{	/* Eval/expddefine.scm 70 */
											obj_t BgL_auxz00_2597;

											BgL_auxz00_2597 = CAR(BgL_argsz00_791);
											BgL_testz00_2596 = PAIRP(BgL_auxz00_2597);
										}
										if (BgL_testz00_2596)
											{	/* Eval/expddefine.scm 71 */
												bool_t BgL_testz00_2600;

												{	/* Eval/expddefine.scm 71 */
													obj_t BgL_auxz00_2601;

													BgL_auxz00_2601 = CDR(CAR(BgL_argsz00_791));
													BgL_testz00_2600 = PAIRP(BgL_auxz00_2601);
												}
												if (BgL_testz00_2600)
													{	/* Eval/expddefine.scm 72 */
														obj_t BgL_auxz00_2605;

														{	/* Eval/expddefine.scm 72 */
															obj_t BgL_pairz00_1985;

															BgL_pairz00_1985 = CAR(BgL_argsz00_791);
															BgL_auxz00_2605 = CDR(CDR(BgL_pairz00_1985));
														}
														BgL_testz00_2595 = NULLP(BgL_auxz00_2605);
													}
												else
													{	/* Eval/expddefine.scm 71 */
														BgL_testz00_2595 = ((bool_t) 0);
													}
											}
										else
											{	/* Eval/expddefine.scm 70 */
												BgL_testz00_2595 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_2595)
										{	/* Eval/expddefine.scm 75 */
											obj_t BgL_arg1915z00_797;

											obj_t BgL_arg1916z00_798;

											{	/* Eval/expddefine.scm 75 */
												obj_t BgL_arg1918z00_799;

												obj_t BgL_arg1919z00_800;

												BgL_arg1918z00_799 = CAR(CAR(BgL_argsz00_791));
												{	/* Eval/expddefine.scm 75 */
													obj_t BgL_arg1923z00_804;

													{	/* Eval/expddefine.scm 75 */
														obj_t BgL_pairz00_1993;

														BgL_pairz00_1993 = CAR(BgL_argsz00_791);
														BgL_arg1923z00_804 = CAR(CDR(BgL_pairz00_1993));
													}
													BgL_arg1919z00_800 =
														PROCEDURE_ENTRY(BgL_ez00_2537) (BgL_ez00_2537,
														BgL_arg1923z00_804, BgL_ez00_2537, BEOA);
												}
												{	/* Eval/expddefine.scm 75 */
													obj_t BgL_list1920z00_801;

													{	/* Eval/expddefine.scm 75 */
														obj_t BgL_arg1921z00_802;

														BgL_arg1921z00_802 =
															MAKE_PAIR(BgL_arg1919z00_800, BNIL);
														BgL_list1920z00_801 =
															MAKE_PAIR(BgL_arg1918z00_799, BgL_arg1921z00_802);
													}
													BgL_arg1915z00_797 = BgL_list1920z00_801;
												}
											}
											BgL_arg1916z00_798 =
												BGl_loopz00zz__expander_definez00(BgL_ez00_2537,
												CDR(BgL_argsz00_791));
											return MAKE_PAIR(BgL_arg1915z00_797, BgL_arg1916z00_798);
										}
									else
										{	/* Eval/expddefine.scm 70 */
											return
												MAKE_PAIR(CAR(BgL_argsz00_791),
												BGl_loopz00zz__expander_definez00(BgL_ez00_2537,
													CDR(BgL_argsz00_791)));
										}
								}
							else
								{	/* Eval/expddefine.scm 68 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2775z00zz__expander_definez00,
										BGl_string2776z00zz__expander_definez00, BgL_argsz00_791);
								}
						}
				}
		}
	}



/* eval-begin-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t BgL_oldez00_3)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 81 */
			{	/* Eval/expddefine.scm 82 */
				obj_t BgL_zc3anonymousza31941ze3z83_2498;

				BgL_zc3anonymousza31941ze3z83_2498 =
					make_fx_procedure(BGl_zc3anonymousza31941ze3z83zz__expander_definez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31941ze3z83_2498,
					(int) (((long) 0)), BgL_oldez00_3);
				return BgL_zc3anonymousza31941ze3z83_2498;
			}
		}
	}



/* _eval-begin-expander */
	obj_t BGl__evalzd2beginzd2expanderz00zz__expander_definez00(obj_t
		BgL_envz00_2499, obj_t BgL_oldez00_2500)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 81 */
			{	/* Eval/expddefine.scm 82 */
				obj_t BgL_auxz00_2632;

				if (PROCEDUREP(BgL_oldez00_2500))
					{	/* Eval/expddefine.scm 82 */
						BgL_auxz00_2632 = BgL_oldez00_2500;
					}
				else
					{
						obj_t BgL_auxz00_2635;

						BgL_auxz00_2635 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 2794)),
							BGl_string2778z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_oldez00_2500);
						FAILURE(BgL_auxz00_2635, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_auxz00_2632);
			}
		}
	}



/* <anonymous:1941> */
	obj_t BGl_zc3anonymousza31941ze3z83zz__expander_definez00(obj_t
		BgL_envz00_2501, obj_t BgL_xz00_2503, obj_t BgL_ez00_2504)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 82 */
			{	/* Eval/expddefine.scm 83 */
				obj_t BgL_oldez00_2502;

				BgL_oldez00_2502 = PROCEDURE_REF(BgL_envz00_2501, (int) (((long) 0)));
				{
					obj_t BgL_xz00_818;

					obj_t BgL_ez00_819;

					BgL_xz00_818 = BgL_xz00_2503;
					BgL_ez00_819 = BgL_ez00_2504;
					{	/* Eval/expddefine.scm 83 */
						obj_t BgL_resz00_821;

						{
							obj_t BgL_restz00_823;

							if (PAIRP(BgL_xz00_818))
								{	/* Eval/expddefine.scm 83 */
									if (
										(CAR(BgL_xz00_818) ==
											BGl_symbol2780z00zz__expander_definez00))
										{	/* Eval/expddefine.scm 83 */
											if (NULLP(CDR(BgL_xz00_818)))
												{	/* Eval/expddefine.scm 83 */
													BgL_resz00_821 = BUNSPEC;
												}
											else
												{	/* Eval/expddefine.scm 83 */
													BgL_restz00_823 = CDR(BgL_xz00_818);
													if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
														(BgL_restz00_823))
														{	/* Eval/expddefine.scm 89 */
															obj_t BgL_arg1951z00_835;

															if (NULLP(BgL_restz00_823))
																{	/* Eval/expddefine.scm 89 */
																	BgL_arg1951z00_835 = BNIL;
																}
															else
																{	/* Eval/expddefine.scm 89 */
																	obj_t BgL_head1859z00_838;

																	BgL_head1859z00_838 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l1857z00_840;

																		obj_t BgL_tail1860z00_841;

																		BgL_l1857z00_840 = BgL_restz00_823;
																		BgL_tail1860z00_841 = BgL_head1859z00_838;
																	BgL_zc3anonymousza31953ze3z83_842:
																		if (NULLP(BgL_l1857z00_840))
																			{	/* Eval/expddefine.scm 89 */
																				BgL_arg1951z00_835 =
																					CDR(BgL_head1859z00_838);
																			}
																		else
																			{	/* Eval/expddefine.scm 89 */
																				obj_t BgL_newtail1861z00_844;

																				{	/* Eval/expddefine.scm 89 */
																					obj_t BgL_arg1956z00_846;

																					{	/* Eval/expddefine.scm 89 */
																						obj_t BgL_xz00_848;

																						BgL_xz00_848 =
																							CAR(BgL_l1857z00_840);
																						BgL_arg1956z00_846 =
																							PROCEDURE_ENTRY(BgL_oldez00_2502)
																							(BgL_oldez00_2502, BgL_xz00_848,
																							BgL_ez00_819, BEOA);
																					}
																					BgL_newtail1861z00_844 =
																						MAKE_PAIR(BgL_arg1956z00_846, BNIL);
																				}
																				SET_CDR(BgL_tail1860z00_841,
																					BgL_newtail1861z00_844);
																				{
																					obj_t BgL_tail1860z00_2665;

																					obj_t BgL_l1857z00_2663;

																					BgL_l1857z00_2663 =
																						CDR(BgL_l1857z00_840);
																					BgL_tail1860z00_2665 =
																						BgL_newtail1861z00_844;
																					BgL_tail1860z00_841 =
																						BgL_tail1860z00_2665;
																					BgL_l1857z00_840 = BgL_l1857z00_2663;
																					goto
																						BgL_zc3anonymousza31953ze3z83_842;
																				}
																			}
																	}
																}
															BgL_resz00_821 =
																BGl_lambdazd2defineszd2zz__expander_definez00
																(BgL_arg1951z00_835);
														}
													else
														{	/* Eval/expddefine.scm 87 */
															BgL_resz00_821 =
																BGl_errorz00zz__errorz00
																(BGl_string2781z00zz__expander_definez00,
																BGl_string2782z00zz__expander_definez00,
																BgL_xz00_818);
														}
												}
										}
									else
										{	/* Eval/expddefine.scm 83 */
										BgL_tagzd21391zd2_825:
											{	/* Eval/expddefine.scm 91 */
												obj_t BgL_nxz00_850;

												BgL_nxz00_850 =
													PROCEDURE_ENTRY(BgL_oldez00_2502) (BgL_oldez00_2502,
													BgL_xz00_818, BgL_ez00_819, BEOA);
												if (PAIRP(BgL_nxz00_850))
													{	/* Eval/expddefine.scm 92 */
														if (
															(CAR(BgL_nxz00_850) ==
																BGl_symbol2780z00zz__expander_definez00))
															{	/* Eval/expddefine.scm 92 */
																if (NULLP(CDR(BgL_nxz00_850)))
																	{	/* Eval/expddefine.scm 92 */
																		BgL_resz00_821 = BUNSPEC;
																	}
																else
																	{	/* Eval/expddefine.scm 92 */
																		obj_t BgL_arg1961z00_859;

																		BgL_arg1961z00_859 = CDR(BgL_nxz00_850);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_arg1961z00_859))
																			{	/* Eval/expddefine.scm 92 */
																				BgL_resz00_821 =
																					BGl_lambdazd2defineszd2zz__expander_definez00
																					(BgL_arg1961z00_859);
																			}
																		else
																			{	/* Eval/expddefine.scm 92 */
																				BgL_resz00_821 =
																					BGl_errorz00zz__errorz00
																					(BGl_string2781z00zz__expander_definez00,
																					BGl_string2782z00zz__expander_definez00,
																					BgL_xz00_818);
																			}
																	}
															}
														else
															{	/* Eval/expddefine.scm 92 */
																BgL_resz00_821 = BgL_nxz00_850;
															}
													}
												else
													{	/* Eval/expddefine.scm 92 */
														BgL_resz00_821 = BgL_nxz00_850;
													}
											}
										}
								}
							else
								{	/* Eval/expddefine.scm 83 */
									goto BgL_tagzd21391zd2_825;
								}
						}
						return BGl_evepairifyz00zz__prognz00(BgL_resz00_821, BgL_xz00_818);
					}
				}
			}
		}
	}



/* expand-eval-lambda */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t BgL_xz00_4,
		obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 106 */
			{	/* Eval/expddefine.scm 107 */
				obj_t BgL_resz00_864;

				{
					obj_t BgL_argsz00_865;

					obj_t BgL_bodyz00_866;

					if (PAIRP(BgL_xz00_4))
						{	/* Eval/expddefine.scm 107 */
							obj_t BgL_cdrzd21429zd2_871;

							BgL_cdrzd21429zd2_871 = CDR(BgL_xz00_4);
							if (PAIRP(BgL_cdrzd21429zd2_871))
								{	/* Eval/expddefine.scm 107 */
									obj_t BgL_cdrzd21433zd2_873;

									BgL_cdrzd21433zd2_873 = CDR(BgL_cdrzd21429zd2_871);
									if (NULLP(BgL_cdrzd21433zd2_873))
										{	/* Eval/expddefine.scm 107 */
											BgL_resz00_864 =
												BGl_errorz00zz__errorz00
												(BGl_string2784z00zz__expander_definez00,
												BGl_string2785z00zz__expander_definez00, BgL_xz00_4);
										}
									else
										{	/* Eval/expddefine.scm 107 */
											BgL_argsz00_865 = CAR(BgL_cdrzd21429zd2_871);
											BgL_bodyz00_866 = BgL_cdrzd21433zd2_873;
											{	/* Eval/expddefine.scm 109 */
												obj_t BgL_eargsz00_876;

												BgL_eargsz00_876 =
													BGl_loopz00zz__expander_definez00(BgL_ez00_5,
													BgL_argsz00_865);
												{	/* Eval/expddefine.scm 109 */
													obj_t BgL_ebodyz00_877;

													BgL_ebodyz00_877 =
														BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_866);
													{	/* Eval/expddefine.scm 110 */
														obj_t BgL_nez00_878;

														BgL_nez00_878 =
															BGl_evalzd2beginzd2expanderz00zz__expander_definez00
															(BgL_ez00_5);
														{	/* Eval/expddefine.scm 111 */

															{	/* Eval/expddefine.scm 112 */
																obj_t BgL_arg1971z00_879;

																obj_t BgL_arg1972z00_880;

																BgL_arg1971z00_879 =
																	BGl_symbol2783z00zz__expander_definez00;
																{	/* Eval/expddefine.scm 113 */
																	obj_t BgL_arg1973z00_881;

																	BgL_arg1973z00_881 =
																		BGl_z52withzd2lexicalz80zz__expandz00
																		(BGl_argszd2ze3listz31zz__evutilsz00
																		(BgL_eargsz00_876), BgL_ebodyz00_877,
																		BgL_nez00_878, BFALSE);
																	{	/* Eval/expddefine.scm 112 */
																		obj_t BgL_list1975z00_883;

																		{	/* Eval/expddefine.scm 112 */
																			obj_t BgL_arg1976z00_884;

																			BgL_arg1976z00_884 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1975z00_883 =
																				MAKE_PAIR(BgL_arg1973z00_881,
																				BgL_arg1976z00_884);
																		}
																		BgL_arg1972z00_880 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_eargsz00_876, BgL_list1975z00_883);
																	}
																}
																BgL_resz00_864 =
																	MAKE_PAIR(BgL_arg1971z00_879,
																	BgL_arg1972z00_880);
															}
														}
													}
												}
											}
										}
								}
							else
								{	/* Eval/expddefine.scm 107 */
									BgL_resz00_864 =
										BGl_errorz00zz__errorz00
										(BGl_string2784z00zz__expander_definez00,
										BGl_string2785z00zz__expander_definez00, BgL_xz00_4);
								}
						}
					else
						{	/* Eval/expddefine.scm 107 */
							BgL_resz00_864 =
								BGl_errorz00zz__errorz00
								(BGl_string2784z00zz__expander_definez00,
								BGl_string2785z00zz__expander_definez00, BgL_xz00_4);
						}
				}
				return BGl_evepairifyz00zz__prognz00(BgL_resz00_864, BgL_xz00_4);
			}
		}
	}



/* _expand-eval-lambda */
	obj_t BGl__expandzd2evalzd2lambdaz00zz__expander_definez00(obj_t
		BgL_envz00_2505, obj_t BgL_xz00_2506, obj_t BgL_ez00_2507)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 106 */
			{	/* Eval/expddefine.scm 107 */
				obj_t BgL_auxz00_2707;

				if (PROCEDUREP(BgL_ez00_2507))
					{	/* Eval/expddefine.scm 107 */
						BgL_auxz00_2707 = BgL_ez00_2507;
					}
				else
					{
						obj_t BgL_auxz00_2710;

						BgL_auxz00_2710 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 3565)),
							BGl_string2786z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_ez00_2507);
						FAILURE(BgL_auxz00_2710, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2lambdaz00zz__expander_definez00(BgL_xz00_2506,
					BgL_auxz00_2707);
			}
		}
	}



/* expand-eval-define */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definez00zz__expander_definez00(obj_t BgL_xz00_6,
		obj_t BgL_oldez00_7)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 125 */
			{	/* Eval/expddefine.scm 126 */
				obj_t BgL_newez00_2508;

				BgL_newez00_2508 =
					make_fx_procedure(BGl_newez00zz__expander_definez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_newez00_2508, (int) (((long) 0)), BgL_oldez00_7);
				return
					BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00
					(BgL_xz00_6, BgL_newez00_2508);
			}
		}
	}



/* _expand-eval-define */
	obj_t BGl__expandzd2evalzd2definez00zz__expander_definez00(obj_t
		BgL_envz00_2509, obj_t BgL_xz00_2510, obj_t BgL_oldez00_2511)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 125 */
			{	/* Eval/expddefine.scm 126 */
				obj_t BgL_auxz00_2721;

				if (PROCEDUREP(BgL_oldez00_2511))
					{	/* Eval/expddefine.scm 126 */
						BgL_auxz00_2721 = BgL_oldez00_2511;
					}
				else
					{
						obj_t BgL_auxz00_2724;

						BgL_auxz00_2724 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 4463)),
							BGl_string2787z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_oldez00_2511);
						FAILURE(BgL_auxz00_2724, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definez00zz__expander_definez00(BgL_xz00_2510,
					BgL_auxz00_2721);
			}
		}
	}



/* newe */
	obj_t BGl_newez00zz__expander_definez00(obj_t BgL_envz00_2512,
		obj_t BgL_xz00_2514, obj_t BgL_ez00_2515)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 126 */
			{	/* Eval/expddefine.scm 126 */
				obj_t BgL_oldez00_2513;

				BgL_oldez00_2513 = PROCEDURE_REF(BgL_envz00_2512, (int) (((long) 0)));
				{
					obj_t BgL_xz00_887;

					obj_t BgL_ez00_888;

					BgL_xz00_887 = BgL_xz00_2514;
					BgL_ez00_888 = BgL_ez00_2515;
					if (PAIRP(BgL_xz00_887))
						{	/* Eval/expddefine.scm 126 */
							if (
								(CAR(BgL_xz00_887) == BGl_symbol2788z00zz__expander_definez00))
								{	/* Eval/expddefine.scm 126 */
									return
										BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00
										(BgL_xz00_887, BgL_ez00_888);
								}
							else
								{	/* Eval/expddefine.scm 126 */
									return
										PROCEDURE_ENTRY(BgL_oldez00_2513) (BgL_oldez00_2513,
										BgL_xz00_887, BgL_ez00_888, BEOA);
								}
						}
					else
						{	/* Eval/expddefine.scm 126 */
							return
								PROCEDURE_ENTRY(BgL_oldez00_2513) (BgL_oldez00_2513,
								BgL_xz00_887, BgL_ez00_888, BEOA);
						}
				}
			}
		}
	}



/* expand-eval-external-define */
	obj_t BGl_expandzd2evalzd2externalzd2definezd2zz__expander_definez00(obj_t
		BgL_xz00_8, obj_t BgL_ez00_9)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 137 */
			{	/* Eval/expddefine.scm 138 */
				obj_t BgL_ez00_898;

				BgL_ez00_898 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_9);
				{	/* Eval/expddefine.scm 139 */
					obj_t BgL_resz00_900;

					{	/* Eval/expddefine.scm 140 */
						bool_t BgL_testz00_2742;

						if (PAIRP(BgL_xz00_8))
							{	/* Eval/expddefine.scm 140 */
								bool_t BgL_testz00_2745;

								{	/* Eval/expddefine.scm 140 */
									obj_t BgL_auxz00_2746;

									BgL_auxz00_2746 = CDR(BgL_xz00_8);
									BgL_testz00_2745 = PAIRP(BgL_auxz00_2746);
								}
								if (BgL_testz00_2745)
									{	/* Eval/expddefine.scm 140 */
										obj_t BgL_auxz00_2749;

										BgL_auxz00_2749 = CDR(CDR(BgL_xz00_8));
										BgL_testz00_2742 = PAIRP(BgL_auxz00_2749);
									}
								else
									{	/* Eval/expddefine.scm 140 */
										BgL_testz00_2742 = ((bool_t) 0);
									}
							}
						else
							{	/* Eval/expddefine.scm 140 */
								BgL_testz00_2742 = ((bool_t) 0);
							}
						if (BgL_testz00_2742)
							{	/* Eval/expddefine.scm 141 */
								obj_t BgL_typez00_902;

								BgL_typez00_902 = CAR(CDR(BgL_xz00_8));
								{	/* Eval/expddefine.scm 143 */
									bool_t BgL_testz00_2755;

									if (PAIRP(BgL_typez00_902))
										{	/* Eval/expddefine.scm 143 */
											obj_t BgL_auxz00_2758;

											BgL_auxz00_2758 = CAR(BgL_typez00_902);
											BgL_testz00_2755 = SYMBOLP(BgL_auxz00_2758);
										}
									else
										{	/* Eval/expddefine.scm 143 */
											BgL_testz00_2755 = ((bool_t) 0);
										}
									if (BgL_testz00_2755)
										{	/* Eval/expddefine.scm 144 */
											obj_t BgL_arg1985z00_904;

											obj_t BgL_arg1986z00_905;

											BgL_arg1985z00_904 =
												BGl_symbol2788z00zz__expander_definez00;
											{	/* Eval/expddefine.scm 144 */
												obj_t BgL_arg1987z00_906;

												obj_t BgL_arg1988z00_907;

												BgL_arg1987z00_906 = CAR(BgL_typez00_902);
												{	/* Eval/expddefine.scm 145 */
													obj_t BgL_arg1992z00_911;

													obj_t BgL_arg1993z00_912;

													BgL_arg1992z00_911 =
														BGl_symbol2783z00zz__expander_definez00;
													{	/* Eval/expddefine.scm 145 */
														obj_t BgL_arg1994z00_913;

														obj_t BgL_arg1995z00_914;

														BgL_arg1994z00_913 =
															BGl_loopz00zz__expander_definez00(BgL_ez00_898,
															CDR(BgL_typez00_902));
														{	/* Eval/expddefine.scm 146 */
															obj_t BgL_arg2000z00_919;

															BgL_arg2000z00_919 =
																BGl_expandzd2prognzd2zz__prognz00(CDR(CDR
																	(BgL_xz00_8)));
															BgL_arg1995z00_914 =
																PROCEDURE_ENTRY(BgL_ez00_898) (BgL_ez00_898,
																BgL_arg2000z00_919, BgL_ez00_898, BEOA);
														}
														{	/* Eval/expddefine.scm 145 */
															obj_t BgL_list1997z00_916;

															{	/* Eval/expddefine.scm 145 */
																obj_t BgL_arg1998z00_917;

																BgL_arg1998z00_917 = MAKE_PAIR(BNIL, BNIL);
																BgL_list1997z00_916 =
																	MAKE_PAIR(BgL_arg1995z00_914,
																	BgL_arg1998z00_917);
															}
															BgL_arg1993z00_912 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg1994z00_913, BgL_list1997z00_916);
														}
													}
													BgL_arg1988z00_907 =
														MAKE_PAIR(BgL_arg1992z00_911, BgL_arg1993z00_912);
												}
												{	/* Eval/expddefine.scm 144 */
													obj_t BgL_list1990z00_909;

													{	/* Eval/expddefine.scm 144 */
														obj_t BgL_arg1991z00_910;

														BgL_arg1991z00_910 = MAKE_PAIR(BNIL, BNIL);
														BgL_list1990z00_909 =
															MAKE_PAIR(BgL_arg1988z00_907, BgL_arg1991z00_910);
													}
													BgL_arg1986z00_905 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1987z00_906, BgL_list1990z00_909);
												}
											}
											BgL_resz00_900 =
												MAKE_PAIR(BgL_arg1985z00_904, BgL_arg1986z00_905);
										}
									else
										{	/* Eval/expddefine.scm 143 */
											if (SYMBOLP(BgL_typez00_902))
												{	/* Eval/expddefine.scm 148 */
													obj_t BgL_arg2003z00_922;

													obj_t BgL_arg2004z00_923;

													BgL_arg2003z00_922 =
														BGl_symbol2788z00zz__expander_definez00;
													{	/* Eval/expddefine.scm 149 */
														obj_t BgL_arg2005z00_924;

														{	/* Eval/expddefine.scm 149 */
															obj_t BgL_arg2009z00_928;

															BgL_arg2009z00_928 =
																BGl_expandzd2prognzd2zz__prognz00(CDR(CDR
																	(BgL_xz00_8)));
															BgL_arg2005z00_924 =
																PROCEDURE_ENTRY(BgL_ez00_898) (BgL_ez00_898,
																BgL_arg2009z00_928, BgL_ez00_898, BEOA);
														}
														{	/* Eval/expddefine.scm 148 */
															obj_t BgL_list2007z00_926;

															{	/* Eval/expddefine.scm 148 */
																obj_t BgL_arg2008z00_927;

																BgL_arg2008z00_927 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2007z00_926 =
																	MAKE_PAIR(BgL_arg2005z00_924,
																	BgL_arg2008z00_927);
															}
															BgL_arg2004z00_923 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_typez00_902, BgL_list2007z00_926);
														}
													}
													BgL_resz00_900 =
														MAKE_PAIR(BgL_arg2003z00_922, BgL_arg2004z00_923);
												}
											else
												{	/* Eval/expddefine.scm 147 */
													BgL_resz00_900 =
														BGl_errorz00zz__errorz00
														(BGl_string2789z00zz__expander_definez00,
														BGl_string2785z00zz__expander_definez00,
														BgL_xz00_8);
												}
										}
								}
							}
						else
							{	/* Eval/expddefine.scm 140 */
								BgL_resz00_900 =
									BGl_errorz00zz__errorz00
									(BGl_string2789z00zz__expander_definez00,
									BGl_string2785z00zz__expander_definez00, BgL_xz00_8);
							}
					}
					{	/* Eval/expddefine.scm 140 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_900, BgL_xz00_8);
					}
				}
			}
		}
	}



/* expand-eval-internal-define */
	obj_t BGl_expandzd2evalzd2internalzd2definezd2zz__expander_definez00(obj_t
		BgL_xz00_10, obj_t BgL_ez00_11)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 158 */
			{
				obj_t BgL_namez00_942;

				obj_t BgL_valuez00_943;

				obj_t BgL_namez00_938;

				obj_t BgL_argsz00_939;

				obj_t BgL_bodyz00_940;

				if (PAIRP(BgL_xz00_10))
					{	/* Eval/expddefine.scm 159 */
						obj_t BgL_cdrzd21458zd2_948;

						BgL_cdrzd21458zd2_948 = CDR(BgL_xz00_10);
						if (PAIRP(BgL_cdrzd21458zd2_948))
							{	/* Eval/expddefine.scm 159 */
								obj_t BgL_carzd21462zd2_950;

								obj_t BgL_cdrzd21463zd2_951;

								BgL_carzd21462zd2_950 = CAR(BgL_cdrzd21458zd2_948);
								BgL_cdrzd21463zd2_951 = CDR(BgL_cdrzd21458zd2_948);
								if (PAIRP(BgL_carzd21462zd2_950))
									{	/* Eval/expddefine.scm 159 */
										if (NULLP(BgL_cdrzd21463zd2_951))
											{	/* Eval/expddefine.scm 159 */
												obj_t BgL_cdrzd21481zd2_955;

												BgL_cdrzd21481zd2_955 = CDR(BgL_cdrzd21458zd2_948);
												if (PAIRP(BgL_cdrzd21481zd2_955))
													{	/* Eval/expddefine.scm 159 */
														obj_t BgL_carzd21485zd2_957;

														BgL_carzd21485zd2_957 = CAR(BgL_cdrzd21481zd2_955);
														if (PAIRP(BgL_carzd21485zd2_957))
															{	/* Eval/expddefine.scm 159 */
																obj_t BgL_cdrzd21490zd2_959;

																BgL_cdrzd21490zd2_959 =
																	CDR(BgL_carzd21485zd2_957);
																if (
																	(CAR(BgL_carzd21485zd2_957) ==
																		BGl_symbol2783z00zz__expander_definez00))
																	{	/* Eval/expddefine.scm 159 */
																		if (PAIRP(BgL_cdrzd21490zd2_959))
																			{	/* Eval/expddefine.scm 159 */
																				obj_t BgL_cdrzd21494zd2_962;

																				BgL_cdrzd21494zd2_962 =
																					CDR(BgL_cdrzd21490zd2_959);
																				if (NULLP(BgL_cdrzd21494zd2_962))
																					{	/* Eval/expddefine.scm 159 */
																						obj_t BgL_cdrzd21503zd2_964;

																						BgL_cdrzd21503zd2_964 =
																							CDR(BgL_xz00_10);
																						{	/* Eval/expddefine.scm 159 */
																							obj_t BgL_cdrzd21507zd2_965;

																							BgL_cdrzd21507zd2_965 =
																								CDR(BgL_cdrzd21503zd2_964);
																							if (NULLP(CDR
																									(BgL_cdrzd21507zd2_965)))
																								{	/* Eval/expddefine.scm 159 */
																									BgL_namez00_942 =
																										CAR(BgL_cdrzd21503zd2_964);
																									BgL_valuez00_943 =
																										CAR(BgL_cdrzd21507zd2_965);
																								BgL_tagzd21443zd2_944:
																									{	/* Eval/expddefine.scm 172 */
																										obj_t BgL_locz00_1062;

																										BgL_locz00_1062 =
																											BGl_getzd2sourcezd2locationz00zz__readerz00
																											(BgL_xz00_10);
																										{	/* Eval/expddefine.scm 172 */
																											obj_t BgL_resz00_1063;

																											{	/* Eval/expddefine.scm 173 */
																												obj_t
																													BgL_arg2107z00_1064;
																												obj_t
																													BgL_arg2108z00_1065;
																												BgL_arg2107z00_1064 =
																													BGl_symbol2788z00zz__expander_definez00;
																												{	/* Eval/expddefine.scm 173 */
																													obj_t
																														BgL_arg2109z00_1066;
																													obj_t
																														BgL_arg2110z00_1067;
																													BgL_arg2109z00_1066 =
																														CAR
																														(BGl_parsezd2formalzd2identz00zz__evutilsz00
																														(BgL_namez00_942,
																															BgL_locz00_1062));
																													BgL_arg2110z00_1067 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_11)
																														(BgL_ez00_11,
																														BgL_valuez00_943,
																														BgL_ez00_11, BEOA);
																													{	/* Eval/expddefine.scm 173 */
																														obj_t
																															BgL_list2112z00_1069;
																														{	/* Eval/expddefine.scm 173 */
																															obj_t
																																BgL_arg2113z00_1070;
																															BgL_arg2113z00_1070
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2112z00_1069
																																=
																																MAKE_PAIR
																																(BgL_arg2110z00_1067,
																																BgL_arg2113z00_1070);
																														}
																														BgL_arg2108z00_1065
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2109z00_1066,
																															BgL_list2112z00_1069);
																													}
																												}
																												BgL_resz00_1063 =
																													MAKE_PAIR
																													(BgL_arg2107z00_1064,
																													BgL_arg2108z00_1065);
																											}
																											{	/* Eval/expddefine.scm 173 */

																												return
																													BGl_evepairifyz00zz__prognz00
																													(BgL_resz00_1063,
																													BgL_xz00_10);
																											}
																										}
																									}
																								}
																							else
																								{	/* Eval/expddefine.scm 159 */
																									return
																										BGl_errorz00zz__errorz00
																										(BGl_string2789z00zz__expander_definez00,
																										BGl_string2785z00zz__expander_definez00,
																										BgL_xz00_10);
																								}
																						}
																					}
																				else
																					{	/* Eval/expddefine.scm 159 */
																						if (NULLP(CDR
																								(BgL_cdrzd21481zd2_955)))
																							{	/* Eval/expddefine.scm 159 */
																								BgL_namez00_938 =
																									CAR(BgL_cdrzd21458zd2_948);
																								BgL_argsz00_939 =
																									CAR(BgL_cdrzd21490zd2_959);
																								BgL_bodyz00_940 =
																									BgL_cdrzd21494zd2_962;
																							BgL_tagzd21442zd2_941:
																								{	/* Eval/expddefine.scm 163 */
																									obj_t BgL_locz00_1043;

																									BgL_locz00_1043 =
																										BGl_getzd2sourcezd2locationz00zz__readerz00
																										(BgL_xz00_10);
																									{	/* Eval/expddefine.scm 163 */
																										obj_t BgL_eargsz00_1044;

																										BgL_eargsz00_1044 =
																											BGl_loopz00zz__expander_definez00
																											(BgL_ez00_11,
																											BgL_argsz00_939);
																										{	/* Eval/expddefine.scm 164 */
																											obj_t BgL_resz00_1045;

																											{	/* Eval/expddefine.scm 165 */
																												obj_t
																													BgL_arg2091z00_1046;
																												obj_t
																													BgL_arg2092z00_1047;
																												BgL_arg2091z00_1046 =
																													BGl_symbol2788z00zz__expander_definez00;
																												{	/* Eval/expddefine.scm 165 */
																													obj_t
																														BgL_arg2093z00_1048;
																													obj_t
																														BgL_arg2094z00_1049;
																													BgL_arg2093z00_1048 =
																														CAR
																														(BGl_parsezd2formalzd2identz00zz__evutilsz00
																														(BgL_namez00_938,
																															BgL_locz00_1043));
																													{	/* Eval/expddefine.scm 166 */
																														obj_t
																															BgL_arg2099z00_1054;
																														obj_t
																															BgL_arg2100z00_1055;
																														BgL_arg2099z00_1054
																															=
																															BGl_symbol2783z00zz__expander_definez00;
																														{	/* Eval/expddefine.scm 168 */
																															obj_t
																																BgL_arg2101z00_1056;
																															BgL_arg2101z00_1056
																																=
																																BGl_z52withzd2lexicalz80zz__expandz00
																																(BGl_argszd2ze3listz31zz__evutilsz00
																																(BgL_eargsz00_1044),
																																BGl_expandzd2prognzd2zz__prognz00
																																(BgL_bodyz00_940),
																																BgL_ez00_11,
																																BFALSE);
																															{	/* Eval/expddefine.scm 166 */
																																obj_t
																																	BgL_list2103z00_1058;
																																{	/* Eval/expddefine.scm 166 */
																																	obj_t
																																		BgL_arg2104z00_1059;
																																	BgL_arg2104z00_1059
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2103z00_1058
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2101z00_1056,
																																		BgL_arg2104z00_1059);
																																}
																																BgL_arg2100z00_1055
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_eargsz00_1044,
																																	BgL_list2103z00_1058);
																															}
																														}
																														BgL_arg2094z00_1049
																															=
																															MAKE_PAIR
																															(BgL_arg2099z00_1054,
																															BgL_arg2100z00_1055);
																													}
																													{	/* Eval/expddefine.scm 165 */
																														obj_t
																															BgL_list2096z00_1051;
																														{	/* Eval/expddefine.scm 165 */
																															obj_t
																																BgL_arg2097z00_1052;
																															BgL_arg2097z00_1052
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2096z00_1051
																																=
																																MAKE_PAIR
																																(BgL_arg2094z00_1049,
																																BgL_arg2097z00_1052);
																														}
																														BgL_arg2092z00_1047
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2093z00_1048,
																															BgL_list2096z00_1051);
																													}
																												}
																												BgL_resz00_1045 =
																													MAKE_PAIR
																													(BgL_arg2091z00_1046,
																													BgL_arg2092z00_1047);
																											}
																											{	/* Eval/expddefine.scm 165 */

																												return
																													BGl_evepairifyz00zz__prognz00
																													(BgL_resz00_1045,
																													BgL_xz00_10);
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Eval/expddefine.scm 159 */
																								return
																									BGl_errorz00zz__errorz00
																									(BGl_string2789z00zz__expander_definez00,
																									BGl_string2785z00zz__expander_definez00,
																									BgL_xz00_10);
																							}
																					}
																			}
																		else
																			{	/* Eval/expddefine.scm 159 */
																				obj_t BgL_cdrzd21522zd2_974;

																				BgL_cdrzd21522zd2_974 =
																					CDR(BgL_xz00_10);
																				{	/* Eval/expddefine.scm 159 */
																					obj_t BgL_cdrzd21526zd2_975;

																					BgL_cdrzd21526zd2_975 =
																						CDR(BgL_cdrzd21522zd2_974);
																					if (NULLP(CDR(BgL_cdrzd21526zd2_975)))
																						{
																							obj_t BgL_valuez00_2864;

																							obj_t BgL_namez00_2862;

																							BgL_namez00_2862 =
																								CAR(BgL_cdrzd21522zd2_974);
																							BgL_valuez00_2864 =
																								CAR(BgL_cdrzd21526zd2_975);
																							BgL_valuez00_943 =
																								BgL_valuez00_2864;
																							BgL_namez00_942 =
																								BgL_namez00_2862;
																							goto BgL_tagzd21443zd2_944;
																						}
																					else
																						{	/* Eval/expddefine.scm 159 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string2789z00zz__expander_definez00,
																								BGl_string2785z00zz__expander_definez00,
																								BgL_xz00_10);
																						}
																				}
																			}
																	}
																else
																	{	/* Eval/expddefine.scm 159 */
																		obj_t BgL_cdrzd21537zd2_980;

																		BgL_cdrzd21537zd2_980 = CDR(BgL_xz00_10);
																		{	/* Eval/expddefine.scm 159 */
																			obj_t BgL_cdrzd21541zd2_981;

																			BgL_cdrzd21541zd2_981 =
																				CDR(BgL_cdrzd21537zd2_980);
																			if (NULLP(CDR(BgL_cdrzd21541zd2_981)))
																				{
																					obj_t BgL_valuez00_2874;

																					obj_t BgL_namez00_2872;

																					BgL_namez00_2872 =
																						CAR(BgL_cdrzd21537zd2_980);
																					BgL_valuez00_2874 =
																						CAR(BgL_cdrzd21541zd2_981);
																					BgL_valuez00_943 = BgL_valuez00_2874;
																					BgL_namez00_942 = BgL_namez00_2872;
																					goto BgL_tagzd21443zd2_944;
																				}
																			else
																				{	/* Eval/expddefine.scm 159 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string2789z00zz__expander_definez00,
																						BGl_string2785z00zz__expander_definez00,
																						BgL_xz00_10);
																				}
																		}
																	}
															}
														else
															{	/* Eval/expddefine.scm 159 */
																obj_t BgL_cdrzd21556zd2_989;

																BgL_cdrzd21556zd2_989 =
																	CDR(BgL_cdrzd21458zd2_948);
																if (NULLP(CDR(BgL_cdrzd21556zd2_989)))
																	{
																		obj_t BgL_valuez00_2883;

																		obj_t BgL_namez00_2881;

																		BgL_namez00_2881 =
																			CAR(BgL_cdrzd21458zd2_948);
																		BgL_valuez00_2883 =
																			CAR(BgL_cdrzd21556zd2_989);
																		BgL_valuez00_943 = BgL_valuez00_2883;
																		BgL_namez00_942 = BgL_namez00_2881;
																		goto BgL_tagzd21443zd2_944;
																	}
																else
																	{	/* Eval/expddefine.scm 159 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2789z00zz__expander_definez00,
																			BGl_string2785z00zz__expander_definez00,
																			BgL_xz00_10);
																	}
															}
													}
												else
													{	/* Eval/expddefine.scm 159 */
														obj_t BgL_cdrzd21571zd2_995;

														BgL_cdrzd21571zd2_995 = CDR(BgL_cdrzd21458zd2_948);
														if (PAIRP(BgL_cdrzd21571zd2_995))
															{	/* Eval/expddefine.scm 159 */
																if (NULLP(CDR(BgL_cdrzd21571zd2_995)))
																	{
																		obj_t BgL_valuez00_2894;

																		obj_t BgL_namez00_2892;

																		BgL_namez00_2892 =
																			CAR(BgL_cdrzd21458zd2_948);
																		BgL_valuez00_2894 =
																			CAR(BgL_cdrzd21571zd2_995);
																		BgL_valuez00_943 = BgL_valuez00_2894;
																		BgL_namez00_942 = BgL_namez00_2892;
																		goto BgL_tagzd21443zd2_944;
																	}
																else
																	{	/* Eval/expddefine.scm 159 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2789z00zz__expander_definez00,
																			BGl_string2785z00zz__expander_definez00,
																			BgL_xz00_10);
																	}
															}
														else
															{	/* Eval/expddefine.scm 159 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2789z00zz__expander_definez00,
																	BGl_string2785z00zz__expander_definez00,
																	BgL_xz00_10);
															}
													}
											}
										else
											{
												obj_t BgL_bodyz00_2902;

												obj_t BgL_argsz00_2900;

												obj_t BgL_namez00_2898;

												BgL_namez00_2898 = CAR(BgL_carzd21462zd2_950);
												BgL_argsz00_2900 = CDR(BgL_carzd21462zd2_950);
												BgL_bodyz00_2902 = BgL_cdrzd21463zd2_951;
												BgL_bodyz00_940 = BgL_bodyz00_2902;
												BgL_argsz00_939 = BgL_argsz00_2900;
												BgL_namez00_938 = BgL_namez00_2898;
												goto BgL_tagzd21442zd2_941;
											}
									}
								else
									{	/* Eval/expddefine.scm 159 */
										obj_t BgL_cdrzd21586zd2_1004;

										BgL_cdrzd21586zd2_1004 = CDR(BgL_cdrzd21458zd2_948);
										if (PAIRP(BgL_cdrzd21586zd2_1004))
											{	/* Eval/expddefine.scm 159 */
												obj_t BgL_carzd21590zd2_1006;

												BgL_carzd21590zd2_1006 = CAR(BgL_cdrzd21586zd2_1004);
												if (PAIRP(BgL_carzd21590zd2_1006))
													{	/* Eval/expddefine.scm 159 */
														obj_t BgL_cdrzd21595zd2_1008;

														BgL_cdrzd21595zd2_1008 =
															CDR(BgL_carzd21590zd2_1006);
														if (
															(CAR(BgL_carzd21590zd2_1006) ==
																BGl_symbol2783z00zz__expander_definez00))
															{	/* Eval/expddefine.scm 159 */
																if (PAIRP(BgL_cdrzd21595zd2_1008))
																	{	/* Eval/expddefine.scm 159 */
																		obj_t BgL_cdrzd21599zd2_1011;

																		BgL_cdrzd21599zd2_1011 =
																			CDR(BgL_cdrzd21595zd2_1008);
																		if (NULLP(BgL_cdrzd21599zd2_1011))
																			{	/* Eval/expddefine.scm 159 */
																				obj_t BgL_cdrzd21609zd2_1013;

																				BgL_cdrzd21609zd2_1013 =
																					CDR(BgL_xz00_10);
																				{	/* Eval/expddefine.scm 159 */
																					obj_t BgL_cdrzd21614zd2_1014;

																					BgL_cdrzd21614zd2_1014 =
																						CDR(BgL_cdrzd21609zd2_1013);
																					if (NULLP(CDR
																							(BgL_cdrzd21614zd2_1014)))
																						{
																							obj_t BgL_valuez00_2925;

																							obj_t BgL_namez00_2923;

																							BgL_namez00_2923 =
																								CAR(BgL_cdrzd21609zd2_1013);
																							BgL_valuez00_2925 =
																								CAR(BgL_cdrzd21614zd2_1014);
																							BgL_valuez00_943 =
																								BgL_valuez00_2925;
																							BgL_namez00_942 =
																								BgL_namez00_2923;
																							goto BgL_tagzd21443zd2_944;
																						}
																					else
																						{	/* Eval/expddefine.scm 159 */
																							return
																								BGl_errorz00zz__errorz00
																								(BGl_string2789z00zz__expander_definez00,
																								BGl_string2785z00zz__expander_definez00,
																								BgL_xz00_10);
																						}
																				}
																			}
																		else
																			{	/* Eval/expddefine.scm 159 */
																				if (NULLP(CDR(BgL_cdrzd21586zd2_1004)))
																					{
																						obj_t BgL_bodyz00_2935;

																						obj_t BgL_argsz00_2933;

																						obj_t BgL_namez00_2931;

																						BgL_namez00_2931 =
																							CAR(BgL_cdrzd21458zd2_948);
																						BgL_argsz00_2933 =
																							CAR(BgL_cdrzd21595zd2_1008);
																						BgL_bodyz00_2935 =
																							BgL_cdrzd21599zd2_1011;
																						BgL_bodyz00_940 = BgL_bodyz00_2935;
																						BgL_argsz00_939 = BgL_argsz00_2933;
																						BgL_namez00_938 = BgL_namez00_2931;
																						goto BgL_tagzd21442zd2_941;
																					}
																				else
																					{	/* Eval/expddefine.scm 159 */
																						return
																							BGl_errorz00zz__errorz00
																							(BGl_string2789z00zz__expander_definez00,
																							BGl_string2785z00zz__expander_definez00,
																							BgL_xz00_10);
																					}
																			}
																	}
																else
																	{	/* Eval/expddefine.scm 159 */
																		obj_t BgL_cdrzd21632zd2_1023;

																		BgL_cdrzd21632zd2_1023 = CDR(BgL_xz00_10);
																		{	/* Eval/expddefine.scm 159 */
																			obj_t BgL_cdrzd21637zd2_1024;

																			BgL_cdrzd21637zd2_1024 =
																				CDR(BgL_cdrzd21632zd2_1023);
																			if (NULLP(CDR(BgL_cdrzd21637zd2_1024)))
																				{
																					obj_t BgL_valuez00_2944;

																					obj_t BgL_namez00_2942;

																					BgL_namez00_2942 =
																						CAR(BgL_cdrzd21632zd2_1023);
																					BgL_valuez00_2944 =
																						CAR(BgL_cdrzd21637zd2_1024);
																					BgL_valuez00_943 = BgL_valuez00_2944;
																					BgL_namez00_942 = BgL_namez00_2942;
																					goto BgL_tagzd21443zd2_944;
																				}
																			else
																				{	/* Eval/expddefine.scm 159 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string2789z00zz__expander_definez00,
																						BGl_string2785z00zz__expander_definez00,
																						BgL_xz00_10);
																				}
																		}
																	}
															}
														else
															{	/* Eval/expddefine.scm 159 */
																obj_t BgL_cdrzd21650zd2_1029;

																BgL_cdrzd21650zd2_1029 = CDR(BgL_xz00_10);
																{	/* Eval/expddefine.scm 159 */
																	obj_t BgL_cdrzd21655zd2_1030;

																	BgL_cdrzd21655zd2_1030 =
																		CDR(BgL_cdrzd21650zd2_1029);
																	if (NULLP(CDR(BgL_cdrzd21655zd2_1030)))
																		{
																			obj_t BgL_valuez00_2954;

																			obj_t BgL_namez00_2952;

																			BgL_namez00_2952 =
																				CAR(BgL_cdrzd21650zd2_1029);
																			BgL_valuez00_2954 =
																				CAR(BgL_cdrzd21655zd2_1030);
																			BgL_valuez00_943 = BgL_valuez00_2954;
																			BgL_namez00_942 = BgL_namez00_2952;
																			goto BgL_tagzd21443zd2_944;
																		}
																	else
																		{	/* Eval/expddefine.scm 159 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2789z00zz__expander_definez00,
																				BGl_string2785z00zz__expander_definez00,
																				BgL_xz00_10);
																		}
																}
															}
													}
												else
													{	/* Eval/expddefine.scm 159 */
														obj_t BgL_cdrzd21673zd2_1038;

														BgL_cdrzd21673zd2_1038 = CDR(BgL_cdrzd21458zd2_948);
														if (NULLP(CDR(BgL_cdrzd21673zd2_1038)))
															{
																obj_t BgL_valuez00_2963;

																obj_t BgL_namez00_2961;

																BgL_namez00_2961 = CAR(BgL_cdrzd21458zd2_948);
																BgL_valuez00_2963 = CAR(BgL_cdrzd21673zd2_1038);
																BgL_valuez00_943 = BgL_valuez00_2963;
																BgL_namez00_942 = BgL_namez00_2961;
																goto BgL_tagzd21443zd2_944;
															}
														else
															{	/* Eval/expddefine.scm 159 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2789z00zz__expander_definez00,
																	BGl_string2785z00zz__expander_definez00,
																	BgL_xz00_10);
															}
													}
											}
										else
											{	/* Eval/expddefine.scm 159 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2789z00zz__expander_definez00,
													BGl_string2785z00zz__expander_definez00, BgL_xz00_10);
											}
									}
							}
						else
							{	/* Eval/expddefine.scm 159 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2789z00zz__expander_definez00,
									BGl_string2785z00zz__expander_definez00, BgL_xz00_10);
							}
					}
				else
					{	/* Eval/expddefine.scm 159 */
						return
							BGl_errorz00zz__errorz00(BGl_string2789z00zz__expander_definez00,
							BGl_string2785z00zz__expander_definez00, BgL_xz00_10);
					}
			}
		}
	}



/* lambda-defines */
	obj_t BGl_lambdazd2defineszd2zz__expander_definez00(obj_t BgL_bodyz00_12)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 182 */
			{
				obj_t BgL_oldformsz00_1076;

				obj_t BgL_newformsz00_1077;

				obj_t BgL_varsz00_1078;

				obj_t BgL_setsz00_1079;

				BgL_oldformsz00_1076 = BgL_bodyz00_12;
				BgL_newformsz00_1077 = BNIL;
				BgL_varsz00_1078 = BNIL;
				BgL_setsz00_1079 = BNIL;
			BgL_zc3anonymousza32115ze3z83_1080:
				if (PAIRP(BgL_oldformsz00_1076))
					{	/* Eval/expddefine.scm 188 */
						obj_t BgL_formz00_1082;

						BgL_formz00_1082 = CAR(BgL_oldformsz00_1076);
						{	/* Eval/expddefine.scm 188 */
							obj_t BgL_locz00_1083;

							{	/* Eval/expddefine.scm 189 */
								obj_t BgL__ortest_1827z00_1105;

								BgL__ortest_1827z00_1105 =
									BGl_getzd2sourcezd2locationz00zz__readerz00(BgL_formz00_1082);
								if (CBOOL(BgL__ortest_1827z00_1105))
									{	/* Eval/expddefine.scm 189 */
										BgL_locz00_1083 = BgL__ortest_1827z00_1105;
									}
								else
									{	/* Eval/expddefine.scm 189 */
										BgL_locz00_1083 =
											BGl_getzd2sourcezd2locationz00zz__readerz00
											(BgL_oldformsz00_1076);
									}
							}
							{	/* Eval/expddefine.scm 189 */

								{	/* Eval/expddefine.scm 191 */
									bool_t BgL_testz00_2976;

									if (PAIRP(BgL_formz00_1082))
										{	/* Eval/expddefine.scm 191 */
											if (
												(CAR(BgL_formz00_1082) ==
													BGl_symbol2788z00zz__expander_definez00))
												{	/* Eval/expddefine.scm 192 */
													BgL_testz00_2976 = ((bool_t) 0);
												}
											else
												{	/* Eval/expddefine.scm 192 */
													BgL_testz00_2976 = ((bool_t) 1);
												}
										}
									else
										{	/* Eval/expddefine.scm 191 */
											BgL_testz00_2976 = ((bool_t) 1);
										}
									if (BgL_testz00_2976)
										{	/* Eval/expddefine.scm 193 */
											obj_t BgL_arg2118z00_1085;

											obj_t BgL_arg2119z00_1086;

											BgL_arg2118z00_1085 = CDR(BgL_oldformsz00_1076);
											BgL_arg2119z00_1086 =
												MAKE_PAIR(BgL_formz00_1082, BgL_newformsz00_1077);
											{
												obj_t BgL_newformsz00_2985;

												obj_t BgL_oldformsz00_2984;

												BgL_oldformsz00_2984 = BgL_arg2118z00_1085;
												BgL_newformsz00_2985 = BgL_arg2119z00_1086;
												BgL_newformsz00_1077 = BgL_newformsz00_2985;
												BgL_oldformsz00_1076 = BgL_oldformsz00_2984;
												goto BgL_zc3anonymousza32115ze3z83_1080;
											}
										}
									else
										{	/* Eval/expddefine.scm 197 */
											obj_t BgL_arg2121z00_1087;

											obj_t BgL_arg2123z00_1088;

											obj_t BgL_arg2124z00_1089;

											BgL_arg2121z00_1087 = CDR(BgL_oldformsz00_1076);
											{	/* Eval/expddefine.scm 198 */
												obj_t BgL_arg2125z00_1090;

												{	/* Eval/expddefine.scm 198 */
													obj_t BgL_pairz00_2160;

													BgL_pairz00_2160 = BgL_formz00_1082;
													BgL_arg2125z00_1090 = CAR(CDR(BgL_pairz00_2160));
												}
												BgL_arg2123z00_1088 =
													MAKE_PAIR(BgL_arg2125z00_1090, BgL_varsz00_1078);
											}
											{	/* Eval/expddefine.scm 199 */
												obj_t BgL_arg2126z00_1091;

												{	/* Eval/expddefine.scm 199 */
													obj_t BgL_arg2127z00_1092;

													obj_t BgL_arg2130z00_1093;

													BgL_arg2127z00_1092 =
														BGl_symbol2790z00zz__expander_definez00;
													{	/* Eval/expddefine.scm 199 */
														obj_t BgL_arg2131z00_1094;

														obj_t BgL_arg2132z00_1095;

														{	/* Eval/expddefine.scm 199 */
															obj_t BgL_arg2136z00_1099;

															{	/* Eval/expddefine.scm 199 */
																obj_t BgL_arg2137z00_1100;

																{	/* Eval/expddefine.scm 199 */
																	obj_t BgL_pairz00_2164;

																	BgL_pairz00_2164 = BgL_formz00_1082;
																	BgL_arg2137z00_1100 =
																		CAR(CDR(BgL_pairz00_2164));
																}
																BgL_arg2136z00_1099 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_arg2137z00_1100, BgL_locz00_1083);
															}
															BgL_arg2131z00_1094 = CAR(BgL_arg2136z00_1099);
														}
														{	/* Eval/expddefine.scm 200 */
															obj_t BgL_pairz00_2169;

															BgL_pairz00_2169 = BgL_formz00_1082;
															BgL_arg2132z00_1095 =
																CAR(CDR(CDR(BgL_pairz00_2169)));
														}
														{	/* Eval/expddefine.scm 199 */
															obj_t BgL_list2134z00_1097;

															{	/* Eval/expddefine.scm 199 */
																obj_t BgL_arg2135z00_1098;

																BgL_arg2135z00_1098 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2134z00_1097 =
																	MAKE_PAIR(BgL_arg2132z00_1095,
																	BgL_arg2135z00_1098);
															}
															BgL_arg2130z00_1093 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2131z00_1094, BgL_list2134z00_1097);
														}
													}
													BgL_arg2126z00_1091 =
														MAKE_PAIR(BgL_arg2127z00_1092, BgL_arg2130z00_1093);
												}
												BgL_arg2124z00_1089 =
													MAKE_PAIR(BgL_arg2126z00_1091, BgL_setsz00_1079);
											}
											{
												obj_t BgL_setsz00_3004;

												obj_t BgL_varsz00_3003;

												obj_t BgL_oldformsz00_3002;

												BgL_oldformsz00_3002 = BgL_arg2121z00_1087;
												BgL_varsz00_3003 = BgL_arg2123z00_1088;
												BgL_setsz00_3004 = BgL_arg2124z00_1089;
												BgL_setsz00_1079 = BgL_setsz00_3004;
												BgL_varsz00_1078 = BgL_varsz00_3003;
												BgL_oldformsz00_1076 = BgL_oldformsz00_3002;
												goto BgL_zc3anonymousza32115ze3z83_1080;
											}
										}
								}
							}
						}
					}
				else
					{	/* Eval/expddefine.scm 187 */
						if (NULLP(BgL_varsz00_1078))
							{	/* Eval/expddefine.scm 202 */
								return BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_12);
							}
						else
							{	/* Eval/expddefine.scm 203 */
								obj_t BgL_arg2144z00_1107;

								obj_t BgL_arg2145z00_1108;

								BgL_arg2144z00_1107 = BGl_symbol2792z00zz__expander_definez00;
								{	/* Eval/expddefine.scm 203 */
									obj_t BgL_arg2146z00_1109;

									obj_t BgL_arg2147z00_1110;

									{	/* Eval/expddefine.scm 203 */
										obj_t BgL_head1864z00_1116;

										BgL_head1864z00_1116 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l1862z00_1118;

											obj_t BgL_tail1865z00_1119;

											BgL_l1862z00_1118 = BgL_varsz00_1078;
											BgL_tail1865z00_1119 = BgL_head1864z00_1116;
										BgL_zc3anonymousza32152ze3z83_1120:
											if (NULLP(BgL_l1862z00_1118))
												{	/* Eval/expddefine.scm 203 */
													BgL_arg2146z00_1109 = CDR(BgL_head1864z00_1116);
												}
											else
												{	/* Eval/expddefine.scm 203 */
													obj_t BgL_newtail1866z00_1122;

													{	/* Eval/expddefine.scm 203 */
														obj_t BgL_arg2155z00_1124;

														{	/* Eval/expddefine.scm 203 */
															obj_t BgL_vz00_1126;

															BgL_vz00_1126 = CAR(BgL_l1862z00_1118);
															{	/* Eval/expddefine.scm 203 */
																obj_t BgL_list2157z00_1127;

																{	/* Eval/expddefine.scm 203 */
																	obj_t BgL_arg2158z00_1128;

																	BgL_arg2158z00_1128 =
																		MAKE_PAIR(BUNSPEC, BNIL);
																	BgL_list2157z00_1127 =
																		MAKE_PAIR(BgL_vz00_1126,
																		BgL_arg2158z00_1128);
																}
																BgL_arg2155z00_1124 = BgL_list2157z00_1127;
															}
														}
														BgL_newtail1866z00_1122 =
															MAKE_PAIR(BgL_arg2155z00_1124, BNIL);
													}
													SET_CDR(BgL_tail1865z00_1119,
														BgL_newtail1866z00_1122);
													{
														obj_t BgL_tail1865z00_3019;

														obj_t BgL_l1862z00_3017;

														BgL_l1862z00_3017 = CDR(BgL_l1862z00_1118);
														BgL_tail1865z00_3019 = BgL_newtail1866z00_1122;
														BgL_tail1865z00_1119 = BgL_tail1865z00_3019;
														BgL_l1862z00_1118 = BgL_l1862z00_3017;
														goto BgL_zc3anonymousza32152ze3z83_1120;
													}
												}
										}
									}
									BgL_arg2147z00_1110 =
										BGl_expandzd2prognzd2zz__prognz00(bgl_append2(bgl_reverse
											(BgL_setsz00_1079), bgl_reverse(BgL_newformsz00_1077)));
									{	/* Eval/expddefine.scm 203 */
										obj_t BgL_list2149z00_1112;

										{	/* Eval/expddefine.scm 203 */
											obj_t BgL_arg2150z00_1113;

											BgL_arg2150z00_1113 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2149z00_1112 =
												MAKE_PAIR(BgL_arg2147z00_1110, BgL_arg2150z00_1113);
										}
										BgL_arg2145z00_1108 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2146z00_1109, BgL_list2149z00_1112);
									}
								}
								return MAKE_PAIR(BgL_arg2144z00_1107, BgL_arg2145z00_1108);
							}
					}
			}
		}
	}



/* expand-eval-define-inline */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 210 */
			{
				obj_t BgL_funz00_1134;

				obj_t BgL_formalsz00_1135;

				obj_t BgL_bodyz00_1136;

				if (PAIRP(BgL_xz00_13))
					{	/* Eval/expddefine.scm 211 */
						obj_t BgL_cdrzd21709zd2_1141;

						BgL_cdrzd21709zd2_1141 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd21709zd2_1141))
							{	/* Eval/expddefine.scm 211 */
								obj_t BgL_carzd21713zd2_1143;

								obj_t BgL_cdrzd21714zd2_1144;

								BgL_carzd21713zd2_1143 = CAR(BgL_cdrzd21709zd2_1141);
								BgL_cdrzd21714zd2_1144 = CDR(BgL_cdrzd21709zd2_1141);
								if (PAIRP(BgL_carzd21713zd2_1143))
									{	/* Eval/expddefine.scm 211 */
										if (NULLP(BgL_cdrzd21714zd2_1144))
											{	/* Eval/expddefine.scm 211 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2794z00zz__expander_definez00,
													BGl_string2785z00zz__expander_definez00, BgL_xz00_13);
											}
										else
											{	/* Eval/expddefine.scm 211 */
												BgL_funz00_1134 = CAR(BgL_carzd21713zd2_1143);
												BgL_formalsz00_1135 = CDR(BgL_carzd21713zd2_1143);
												BgL_bodyz00_1136 = BgL_cdrzd21714zd2_1144;
												{	/* Eval/expddefine.scm 213 */
													obj_t BgL_locz00_1149;

													BgL_locz00_1149 =
														BGl_getzd2sourcezd2locationz00zz__readerz00
														(BgL_xz00_13);
													{	/* Eval/expddefine.scm 213 */
														obj_t BgL_resz00_1150;

														{	/* Eval/expddefine.scm 214 */
															obj_t BgL_arg2168z00_1151;

															obj_t BgL_arg2169z00_1152;

															BgL_arg2168z00_1151 =
																BGl_symbol2788z00zz__expander_definez00;
															{	/* Eval/expddefine.scm 214 */
																obj_t BgL_arg2170z00_1153;

																obj_t BgL_arg2171z00_1154;

																BgL_arg2170z00_1153 =
																	CAR
																	(BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_funz00_1134, BgL_locz00_1149));
																{	/* Eval/expddefine.scm 215 */
																	obj_t BgL_arg2176z00_1159;

																	{	/* Eval/expddefine.scm 215 */
																		obj_t BgL_arg2177z00_1160;

																		obj_t BgL_arg2178z00_1161;

																		BgL_arg2177z00_1160 =
																			BGl_symbol2783z00zz__expander_definez00;
																		{	/* Eval/expddefine.scm 215 */
																			obj_t BgL_arg2179z00_1162;

																			obj_t BgL_arg2180z00_1163;

																			BgL_arg2179z00_1162 =
																				BGl_loopz00zz__expander_definez00
																				(BgL_ez00_14, BgL_formalsz00_1135);
																			BgL_arg2180z00_1163 =
																				BGl_expandzd2prognzd2zz__prognz00
																				(BgL_bodyz00_1136);
																			{	/* Eval/expddefine.scm 215 */
																				obj_t BgL_list2182z00_1165;

																				{	/* Eval/expddefine.scm 215 */
																					obj_t BgL_arg2183z00_1166;

																					BgL_arg2183z00_1166 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2182z00_1165 =
																						MAKE_PAIR(BgL_arg2180z00_1163,
																						BgL_arg2183z00_1166);
																				}
																				BgL_arg2178z00_1161 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2179z00_1162,
																					BgL_list2182z00_1165);
																			}
																		}
																		BgL_arg2176z00_1159 =
																			MAKE_PAIR(BgL_arg2177z00_1160,
																			BgL_arg2178z00_1161);
																	}
																	BgL_arg2171z00_1154 =
																		PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																		BgL_arg2176z00_1159, BgL_ez00_14, BEOA);
																}
																{	/* Eval/expddefine.scm 214 */
																	obj_t BgL_list2173z00_1156;

																	{	/* Eval/expddefine.scm 214 */
																		obj_t BgL_arg2174z00_1157;

																		BgL_arg2174z00_1157 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list2173z00_1156 =
																			MAKE_PAIR(BgL_arg2171z00_1154,
																			BgL_arg2174z00_1157);
																	}
																	BgL_arg2169z00_1152 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2170z00_1153, BgL_list2173z00_1156);
																}
															}
															BgL_resz00_1150 =
																MAKE_PAIR(BgL_arg2168z00_1151,
																BgL_arg2169z00_1152);
														}
														{	/* Eval/expddefine.scm 214 */

															return
																BGl_evepairifyz00zz__prognz00(BgL_resz00_1150,
																BgL_xz00_13);
														}
													}
												}
											}
									}
								else
									{	/* Eval/expddefine.scm 211 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2794z00zz__expander_definez00,
											BGl_string2785z00zz__expander_definez00, BgL_xz00_13);
									}
							}
						else
							{	/* Eval/expddefine.scm 211 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2794z00zz__expander_definez00,
									BGl_string2785z00zz__expander_definez00, BgL_xz00_13);
							}
					}
				else
					{	/* Eval/expddefine.scm 211 */
						return
							BGl_errorz00zz__errorz00(BGl_string2794z00zz__expander_definez00,
							BGl_string2785z00zz__expander_definez00, BgL_xz00_13);
					}
			}
		}
	}



/* _expand-eval-define-inline */
	obj_t BGl__expandzd2evalzd2definezd2inlinezd2zz__expander_definez00(obj_t
		BgL_envz00_2516, obj_t BgL_xz00_2517, obj_t BgL_ez00_2518)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 210 */
			{	/* Eval/expddefine.scm 211 */
				obj_t BgL_auxz00_3061;

				if (PROCEDUREP(BgL_ez00_2518))
					{	/* Eval/expddefine.scm 211 */
						BgL_auxz00_3061 = BgL_ez00_2518;
					}
				else
					{
						obj_t BgL_auxz00_3064;

						BgL_auxz00_3064 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 7669)),
							BGl_string2795z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_ez00_2518);
						FAILURE(BgL_auxz00_3064, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2inlinezd2zz__expander_definez00
					(BgL_xz00_2517, BgL_auxz00_3061);
			}
		}
	}



/* map+ */
	obj_t BGl_mapzb2zb2zz__expander_definez00(obj_t BgL_fz00_15,
		obj_t BgL_lstz00_16)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 224 */
			if (NULLP(BgL_lstz00_16))
				{	/* Eval/expddefine.scm 226 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 226 */
					if (PAIRP(BgL_lstz00_16))
						{	/* Eval/expddefine.scm 231 */
							obj_t BgL_arg2186z00_1169;

							obj_t BgL_arg2187z00_1170;

							{	/* Eval/expddefine.scm 231 */
								obj_t BgL_arg2188z00_1171;

								BgL_arg2188z00_1171 = CAR(BgL_lstz00_16);
								BgL_arg2186z00_1169 =
									PROCEDURE_ENTRY(BgL_fz00_15) (BgL_fz00_15,
									BgL_arg2188z00_1171, BEOA);
							}
							BgL_arg2187z00_1170 =
								BGl_mapzb2zb2zz__expander_definez00(BgL_fz00_15,
								CDR(BgL_lstz00_16));
							return MAKE_PAIR(BgL_arg2186z00_1169, BgL_arg2187z00_1170);
						}
					else
						{	/* Eval/expddefine.scm 228 */
							return
								PROCEDURE_ENTRY(BgL_fz00_15) (BgL_fz00_15, BgL_lstz00_16, BEOA);
						}
				}
		}
	}



/* all? */
	bool_t BGl_allzf3zf3zz__expander_definez00(obj_t BgL_predz00_17,
		obj_t BgL_pz00_18)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 236 */
			{
				obj_t BgL_pz00_1174;

				BgL_pz00_1174 = BgL_pz00_18;
			BgL_zc3anonymousza32190ze3z83_1175:
				if (NULLP(BgL_pz00_1174))
					{	/* Eval/expddefine.scm 239 */
						return ((bool_t) 1);
					}
				else
					{	/* Eval/expddefine.scm 239 */
						if (PAIRP(BgL_pz00_1174))
							{	/* Eval/expddefine.scm 240 */
								bool_t BgL_testz00_3085;

								{	/* Eval/expddefine.scm 240 */
									obj_t BgL_arg2195z00_1180;

									BgL_arg2195z00_1180 = CAR(BgL_pz00_1174);
									BgL_testz00_3085 =
										CBOOL(PROCEDURE_ENTRY(BgL_predz00_17) (BgL_predz00_17,
											BgL_arg2195z00_1180, BEOA));
								}
								if (BgL_testz00_3085)
									{
										obj_t BgL_pz00_3090;

										BgL_pz00_3090 = CDR(BgL_pz00_1174);
										BgL_pz00_1174 = BgL_pz00_3090;
										goto BgL_zc3anonymousza32190ze3z83_1175;
									}
								else
									{	/* Eval/expddefine.scm 240 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Eval/expddefine.scm 240 */
								if (CBOOL(PROCEDURE_ENTRY(BgL_predz00_17) (BgL_predz00_17,
											BgL_pz00_1174, BEOA)))
									{	/* Eval/expddefine.scm 241 */
										return ((bool_t) 1);
									}
								else
									{	/* Eval/expddefine.scm 241 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* expand-eval-define-generic */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 247 */
			{
				obj_t BgL_funz00_1183;

				obj_t BgL_f0z00_1184;

				obj_t BgL_formalsz00_1185;

				obj_t BgL_bodyz00_1186;

				if (PAIRP(BgL_xz00_19))
					{	/* Eval/expddefine.scm 248 */
						obj_t BgL_cdrzd21735zd2_1191;

						BgL_cdrzd21735zd2_1191 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd21735zd2_1191))
							{	/* Eval/expddefine.scm 248 */
								obj_t BgL_carzd21740zd2_1193;

								BgL_carzd21740zd2_1193 = CAR(BgL_cdrzd21735zd2_1191);
								if (PAIRP(BgL_carzd21740zd2_1193))
									{	/* Eval/expddefine.scm 248 */
										obj_t BgL_cdrzd21746zd2_1195;

										BgL_cdrzd21746zd2_1195 = CDR(BgL_carzd21740zd2_1193);
										if (PAIRP(BgL_cdrzd21746zd2_1195))
											{	/* Eval/expddefine.scm 248 */
												BgL_funz00_1183 = CAR(BgL_carzd21740zd2_1193);
												BgL_f0z00_1184 = CAR(BgL_cdrzd21746zd2_1195);
												BgL_formalsz00_1185 = CDR(BgL_cdrzd21746zd2_1195);
												BgL_bodyz00_1186 = CDR(BgL_cdrzd21735zd2_1191);
												{	/* Eval/expddefine.scm 250 */
													obj_t BgL_locz00_1201;

													BgL_locz00_1201 =
														BGl_getzd2sourcezd2locationz00zz__readerz00
														(BgL_xz00_19);
													{	/* Eval/expddefine.scm 250 */
														obj_t BgL_pfz00_1202;

														BgL_pfz00_1202 =
															BGl_parsezd2formalzd2identz00zz__evutilsz00
															(BgL_funz00_1183, BgL_locz00_1201);
														{	/* Eval/expddefine.scm 251 */
															obj_t BgL_idz00_1203;

															BgL_idz00_1203 = CAR(BgL_pfz00_1202);
															{	/* Eval/expddefine.scm 252 */
																obj_t BgL_paz00_1204;

																{	/* Eval/expddefine.scm 253 */
																	obj_t BgL_arg2381z00_1377;

																	BgL_arg2381z00_1377 =
																		MAKE_PAIR(BgL_f0z00_1184,
																		BgL_formalsz00_1185);
																	{	/* Eval/expddefine.scm 253 */
																		obj_t BgL_zc3anonymousza32382ze3z83_2521;

																		BgL_zc3anonymousza32382ze3z83_2521 =
																			make_fx_procedure
																			(BGl_zc3anonymousza32382ze3z83zz__expander_definez00,
																			(int) (((long) 1)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3anonymousza32382ze3z83_2521,
																			(int) (((long) 0)), BgL_locz00_1201);
																		BgL_paz00_1204 =
																			BGl_mapzb2zb2zz__expander_definez00
																			(BgL_zc3anonymousza32382ze3z83_2521,
																			BgL_arg2381z00_1377);
																}}
																{	/* Eval/expddefine.scm 253 */
																	obj_t BgL_defz00_1205;

																	BgL_defz00_1205 =
																		BGl_gensymz00zz__r4_symbols_6_4z00
																		(BgL_idz00_1203);
																	{	/* Eval/expddefine.scm 254 */
																		obj_t BgL_epaz00_1206;

																		BgL_epaz00_1206 =
																			BGl_loopz00zz__expander_definez00
																			(BgL_ez00_20, BgL_paz00_1204);
																		{	/* Eval/expddefine.scm 255 */
																			bool_t BgL_vaz00_1207;

																			{	/* Eval/expddefine.scm 256 */
																				bool_t BgL_testz00_3119;

																				if (NULLP(BgL_formalsz00_1185))
																					{	/* Eval/expddefine.scm 256 */
																						BgL_testz00_3119 = ((bool_t) 0);
																					}
																				else
																					{	/* Eval/expddefine.scm 256 */
																						BgL_testz00_3119 = ((bool_t) 1);
																					}
																				if (BgL_testz00_3119)
																					{	/* Eval/expddefine.scm 257 */
																						bool_t BgL__ortest_1829z00_1370;

																						if (PAIRP(BgL_formalsz00_1185))
																							{	/* Eval/expddefine.scm 257 */
																								BgL__ortest_1829z00_1370 =
																									((bool_t) 0);
																							}
																						else
																							{	/* Eval/expddefine.scm 257 */
																								BgL__ortest_1829z00_1370 =
																									((bool_t) 1);
																							}
																						if (BgL__ortest_1829z00_1370)
																							{	/* Eval/expddefine.scm 257 */
																								BgL_vaz00_1207 =
																									BgL__ortest_1829z00_1370;
																							}
																						else
																							{	/* Eval/expddefine.scm 257 */
																								if (NULLP(CDR
																										(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_formalsz00_1185))))
																									{	/* Eval/expddefine.scm 258 */
																										BgL_vaz00_1207 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/expddefine.scm 258 */
																										BgL_vaz00_1207 =
																											((bool_t) 1);
																									}
																							}
																					}
																				else
																					{	/* Eval/expddefine.scm 256 */
																						BgL_vaz00_1207 = ((bool_t) 0);
																					}
																			}
																			{	/* Eval/expddefine.scm 256 */
																				obj_t BgL_defzd2bodyzd2_1208;

																				{	/* Eval/expddefine.scm 259 */
																					obj_t BgL_arg2365z00_1357;

																					obj_t BgL_arg2366z00_1358;

																					{	/* Eval/expddefine.scm 259 */
																						obj_t BgL_arg2367z00_1359;

																						obj_t BgL_arg2368z00_1360;

																						BgL_arg2367z00_1359 =
																							BGl_symbol2796z00zz__expander_definez00;
																						{	/* Eval/expddefine.scm 259 */
																							obj_t BgL_list2369z00_1361;

																							BgL_list2369z00_1361 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2368z00_1360 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_1203,
																								BgL_list2369z00_1361);
																						}
																						BgL_arg2365z00_1357 =
																							MAKE_PAIR(BgL_arg2367z00_1359,
																							BgL_arg2368z00_1360);
																					}
																					BgL_arg2366z00_1358 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_mapzb2zb2zz__expander_definez00
																						(BGl_proc2798z00zz__expander_definez00,
																							BgL_epaz00_1206), BNIL);
																					BgL_defzd2bodyzd2_1208 =
																						MAKE_PAIR(BgL_arg2365z00_1357,
																						BgL_arg2366z00_1358);
																				}
																				{	/* Eval/expddefine.scm 259 */
																					obj_t BgL_metz00_1209;

																					{	/* Eval/expddefine.scm 263 */
																						bool_t BgL_testz00_3135;

																						{
																							obj_t BgL_l1867z00_1348;

																							BgL_l1867z00_1348 =
																								BgL_paz00_1204;
																						BgL_zc3anonymousza32359ze3z83_1349:
																							if (NULLP(BgL_l1867z00_1348))
																								{	/* Eval/expddefine.scm 263 */
																									BgL_testz00_3135 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Eval/expddefine.scm 263 */
																									bool_t BgL_testz00_3138;

																									{	/* Eval/expddefine.scm 264 */
																										obj_t BgL_az00_1353;

																										BgL_az00_1353 =
																											CAR(BgL_l1867z00_1348);
																										if (PAIRP(BgL_az00_1353))
																											{	/* Eval/expddefine.scm 264 */
																												BgL_testz00_3138 =
																													(CAR(BgL_az00_1353) ==
																													BgL_idz00_1203);
																											}
																										else
																											{	/* Eval/expddefine.scm 264 */
																												BgL_testz00_3138 =
																													(BgL_az00_1353 ==
																													BgL_idz00_1203);
																											}
																									}
																									if (BgL_testz00_3138)
																										{	/* Eval/expddefine.scm 263 */
																											BgL_testz00_3135 =
																												((bool_t) 1);
																										}
																									else
																										{
																											obj_t BgL_l1867z00_3145;

																											BgL_l1867z00_3145 =
																												CDR(BgL_l1867z00_1348);
																											BgL_l1867z00_1348 =
																												BgL_l1867z00_3145;
																											goto
																												BgL_zc3anonymousza32359ze3z83_1349;
																										}
																								}
																						}
																						if (BgL_testz00_3135)
																							{	/* Eval/expddefine.scm 263 */
																								BgL_metz00_1209 =
																									BGl_gensymz00zz__r4_symbols_6_4z00
																									(BgL_idz00_1203);
																							}
																						else
																							{	/* Eval/expddefine.scm 263 */
																								BgL_metz00_1209 =
																									BgL_idz00_1203;
																							}
																					}
																					{	/* Eval/expddefine.scm 263 */
																						obj_t BgL_metzd2bodyzd2_1210;

																						BgL_metzd2bodyzd2_1210 =
																							MAKE_PAIR(BgL_metz00_1209,
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BGl_mapzb2zb2zz__expander_definez00
																								(BGl_proc2799z00zz__expander_definez00,
																									BgL_epaz00_1206), BNIL));
																						{	/* Eval/expddefine.scm 270 */

																							{	/* Eval/expddefine.scm 273 */
																								bool_t BgL_testz00_3151;

																								{	/* Eval/expddefine.scm 273 */
																									obj_t BgL_arg2350z00_1336;

																									{	/* Eval/expddefine.scm 273 */
																										obj_t BgL_pairz00_2238;

																										{	/* Eval/expddefine.scm 273 */
																											obj_t BgL_pairz00_2234;

																											BgL_pairz00_2234 =
																												BgL_xz00_19;
																											BgL_pairz00_2238 =
																												CAR(CDR
																												(BgL_pairz00_2234));
																										}
																										BgL_arg2350z00_1336 =
																											CDR(BgL_pairz00_2238);
																									}
																									BgL_testz00_3151 =
																										BGl_allzf3zf3zz__expander_definez00
																										(BGl_symbolzf3zd2envz21zz__r4_symbols_6_4z00,
																										BgL_arg2350z00_1336);
																								}
																								if (BgL_testz00_3151)
																									{	/* Eval/expddefine.scm 274 */
																										obj_t BgL_arg2208z00_1212;

																										{	/* Eval/expddefine.scm 274 */
																											obj_t BgL_arg2209z00_1213;

																											obj_t BgL_arg2210z00_1214;

																											BgL_arg2209z00_1213 =
																												BGl_symbol2780z00zz__expander_definez00;
																											{	/* Eval/expddefine.scm 275 */
																												obj_t
																													BgL_arg2211z00_1215;
																												obj_t
																													BgL_arg2212z00_1216;
																												{	/* Eval/expddefine.scm 275 */
																													obj_t
																														BgL_arg2217z00_1220;
																													obj_t
																														BgL_arg2222z00_1221;
																													BgL_arg2217z00_1220 =
																														BGl_symbol2788z00zz__expander_definez00;
																													{	/* Eval/expddefine.scm 276 */
																														obj_t
																															BgL_arg2223z00_1222;
																														{	/* Eval/expddefine.scm 276 */
																															obj_t
																																BgL_arg2227z00_1226;
																															obj_t
																																BgL_arg2233z00_1227;
																															BgL_arg2227z00_1226
																																=
																																BGl_symbol2800z00zz__expander_definez00;
																															{	/* Eval/expddefine.scm 277 */
																																obj_t
																																	BgL_arg2234z00_1228;
																																{	/* Eval/expddefine.scm 277 */
																																	obj_t
																																		BgL_arg2237z00_1231;
																																	obj_t
																																		BgL_arg2238z00_1232;
																																	BgL_arg2237z00_1231
																																		=
																																		BGl_symbol2783z00zz__expander_definez00;
																																	{	/* Eval/expddefine.scm 277 */
																																		obj_t
																																			BgL_arg2239z00_1233;
																																		obj_t
																																			BgL_arg2240z00_1234;
																																		BgL_arg2239z00_1233
																																			=
																																			MAKE_PAIR
																																			(BgL_f0z00_1184,
																																			BgL_formalsz00_1185);
																																		{	/* Eval/expddefine.scm 278 */
																																			obj_t
																																				BgL_arg2245z00_1238;
																																			obj_t
																																				BgL_arg2246z00_1239;
																																			BgL_arg2245z00_1238
																																				=
																																				BGl_symbol2792z00zz__expander_definez00;
																																			{	/* Eval/expddefine.scm 278 */
																																				obj_t
																																					BgL_arg2247z00_1240;
																																				obj_t
																																					BgL_arg2248z00_1241;
																																				{	/* Eval/expddefine.scm 278 */
																																					obj_t
																																						BgL_arg2252z00_1245;
																																					{	/* Eval/expddefine.scm 278 */
																																						obj_t
																																							BgL_arg2255z00_1247;
																																						{	/* Eval/expddefine.scm 278 */
																																							obj_t
																																								BgL_arg2256z00_1248;
																																							{	/* Eval/expddefine.scm 278 */
																																								obj_t
																																									BgL_arg2259z00_1251;
																																								obj_t
																																									BgL_arg2260z00_1252;
																																								BgL_arg2259z00_1251
																																									=
																																									BGl_symbol2783z00zz__expander_definez00;
																																								{	/* Eval/expddefine.scm 278 */
																																									obj_t
																																										BgL_arg2263z00_1254;
																																									if (BgL_vaz00_1207)
																																										{	/* Eval/expddefine.scm 279 */
																																											BgL_arg2263z00_1254
																																												=
																																												MAKE_PAIR
																																												(BGl_symbol2802z00zz__expander_definez00,
																																												BgL_defzd2bodyzd2_1208);
																																										}
																																									else
																																										{	/* Eval/expddefine.scm 279 */
																																											BgL_arg2263z00_1254
																																												=
																																												BgL_defzd2bodyzd2_1208;
																																										}
																																									{	/* Eval/expddefine.scm 278 */
																																										obj_t
																																											BgL_list2265z00_1256;
																																										{	/* Eval/expddefine.scm 278 */
																																											obj_t
																																												BgL_arg2266z00_1257;
																																											BgL_arg2266z00_1257
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_list2265z00_1256
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2263z00_1254,
																																												BgL_arg2266z00_1257);
																																										}
																																										BgL_arg2260z00_1252
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BNIL,
																																											BgL_list2265z00_1256);
																																									}
																																								}
																																								BgL_arg2256z00_1248
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2259z00_1251,
																																									BgL_arg2260z00_1252);
																																							}
																																							{	/* Eval/expddefine.scm 278 */
																																								obj_t
																																									BgL_list2258z00_1250;
																																								BgL_list2258z00_1250
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_arg2255z00_1247
																																									=
																																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																									(BgL_arg2256z00_1248,
																																									BgL_list2258z00_1250);
																																							}
																																						}
																																						BgL_arg2252z00_1245
																																							=
																																							MAKE_PAIR
																																							(BgL_defz00_1205,
																																							BgL_arg2255z00_1247);
																																					}
																																					BgL_arg2247z00_1240
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2252z00_1245,
																																						BNIL);
																																				}
																																				{	/* Eval/expddefine.scm 282 */
																																					obj_t
																																						BgL_arg2267z00_1258;
																																					obj_t
																																						BgL_arg2268z00_1259;
																																					BgL_arg2267z00_1258
																																						=
																																						BGl_symbol2792z00zz__expander_definez00;
																																					{	/* Eval/expddefine.scm 282 */
																																						obj_t
																																							BgL_arg2269z00_1260;
																																						obj_t
																																							BgL_arg2270z00_1261;
																																						{	/* Eval/expddefine.scm 282 */
																																							obj_t
																																								BgL_arg2275z00_1265;
																																							{	/* Eval/expddefine.scm 282 */
																																								obj_t
																																									BgL_arg2278z00_1267;
																																								{	/* Eval/expddefine.scm 282 */
																																									obj_t
																																										BgL_arg2279z00_1268;
																																									{	/* Eval/expddefine.scm 282 */
																																										obj_t
																																											BgL_arg2282z00_1271;
																																										obj_t
																																											BgL_arg2283z00_1272;
																																										BgL_arg2282z00_1271
																																											=
																																											BGl_symbol2804z00zz__expander_definez00;
																																										{	/* Eval/expddefine.scm 282 */
																																											obj_t
																																												BgL_arg2284z00_1273;
																																											obj_t
																																												BgL_arg2285z00_1274;
																																											{	/* Eval/expddefine.scm 282 */
																																												obj_t
																																													BgL_arg2290z00_1278;
																																												obj_t
																																													BgL_arg2291z00_1279;
																																												BgL_arg2290z00_1278
																																													=
																																													BGl_symbol2806z00zz__expander_definez00;
																																												{	/* Eval/expddefine.scm 282 */
																																													obj_t
																																														BgL_arg2292z00_1280;
																																													{	/* Eval/expddefine.scm 282 */
																																														obj_t
																																															BgL_pairz00_2239;
																																														BgL_pairz00_2239
																																															=
																																															BgL_paz00_1204;
																																														BgL_arg2292z00_1280
																																															=
																																															CAR
																																															(CAR
																																															(BgL_pairz00_2239));
																																													}
																																													{	/* Eval/expddefine.scm 282 */
																																														obj_t
																																															BgL_list2294z00_1282;
																																														BgL_list2294z00_1282
																																															=
																																															MAKE_PAIR
																																															(BNIL,
																																															BNIL);
																																														BgL_arg2291z00_1279
																																															=
																																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																															(BgL_arg2292z00_1280,
																																															BgL_list2294z00_1282);
																																													}
																																												}
																																												BgL_arg2284z00_1273
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2290z00_1278,
																																													BgL_arg2291z00_1279);
																																											}
																																											{	/* Eval/expddefine.scm 283 */
																																												obj_t
																																													BgL_arg2295z00_1283;
																																												obj_t
																																													BgL_arg2296z00_1284;
																																												BgL_arg2295z00_1283
																																													=
																																													BGl_symbol2808z00zz__expander_definez00;
																																												{	/* Eval/expddefine.scm 283 */
																																													obj_t
																																														BgL_arg2297z00_1285;
																																													{	/* Eval/expddefine.scm 283 */
																																														obj_t
																																															BgL_pairz00_2243;
																																														BgL_pairz00_2243
																																															=
																																															BgL_paz00_1204;
																																														BgL_arg2297z00_1285
																																															=
																																															CAR
																																															(CAR
																																															(BgL_pairz00_2243));
																																													}
																																													{	/* Eval/expddefine.scm 283 */
																																														obj_t
																																															BgL_list2301z00_1287;
																																														{	/* Eval/expddefine.scm 283 */
																																															obj_t
																																																BgL_arg2302z00_1288;
																																															BgL_arg2302z00_1288
																																																=
																																																MAKE_PAIR
																																																(BNIL,
																																																BNIL);
																																															BgL_list2301z00_1287
																																																=
																																																MAKE_PAIR
																																																(BgL_idz00_1203,
																																																BgL_arg2302z00_1288);
																																														}
																																														BgL_arg2296z00_1284
																																															=
																																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																															(BgL_arg2297z00_1285,
																																															BgL_list2301z00_1287);
																																													}
																																												}
																																												BgL_arg2285z00_1274
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2295z00_1283,
																																													BgL_arg2296z00_1284);
																																											}
																																											{	/* Eval/expddefine.scm 282 */
																																												obj_t
																																													BgL_list2287z00_1276;
																																												{	/* Eval/expddefine.scm 282 */
																																													obj_t
																																														BgL_arg2289z00_1277;
																																													BgL_arg2289z00_1277
																																														=
																																														MAKE_PAIR
																																														(BNIL,
																																														BNIL);
																																													BgL_list2287z00_1276
																																														=
																																														MAKE_PAIR
																																														(BgL_arg2285z00_1274,
																																														BgL_arg2289z00_1277);
																																												}
																																												BgL_arg2283z00_1272
																																													=
																																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																													(BgL_arg2284z00_1273,
																																													BgL_list2287z00_1276);
																																											}
																																										}
																																										BgL_arg2279z00_1268
																																											=
																																											MAKE_PAIR
																																											(BgL_arg2282z00_1271,
																																											BgL_arg2283z00_1272);
																																									}
																																									{	/* Eval/expddefine.scm 282 */
																																										obj_t
																																											BgL_list2281z00_1270;
																																										BgL_list2281z00_1270
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg2278z00_1267
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg2279z00_1268,
																																											BgL_list2281z00_1270);
																																									}
																																								}
																																								BgL_arg2275z00_1265
																																									=
																																									MAKE_PAIR
																																									(BgL_metz00_1209,
																																									BgL_arg2278z00_1267);
																																							}
																																							BgL_arg2269z00_1260
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2275z00_1265,
																																								BNIL);
																																						}
																																						{	/* Eval/expddefine.scm 284 */
																																							obj_t
																																								BgL_arg2303z00_1289;
																																							obj_t
																																								BgL_arg2304z00_1290;
																																							BgL_arg2303z00_1289
																																								=
																																								BGl_symbol2810z00zz__expander_definez00;
																																							{	/* Eval/expddefine.scm 284 */
																																								obj_t
																																									BgL_arg2305z00_1291;
																																								obj_t
																																									BgL_arg2306z00_1292;
																																								obj_t
																																									BgL_arg2307z00_1293;
																																								{	/* Eval/expddefine.scm 284 */
																																									obj_t
																																										BgL_arg2312z00_1298;
																																									obj_t
																																										BgL_arg2313z00_1299;
																																									BgL_arg2312z00_1298
																																										=
																																										BGl_symbol2812z00zz__expander_definez00;
																																									{	/* Eval/expddefine.scm 284 */
																																										obj_t
																																											BgL_list2314z00_1300;
																																										BgL_list2314z00_1300
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg2313z00_1299
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_metz00_1209,
																																											BgL_list2314z00_1300);
																																									}
																																									BgL_arg2305z00_1291
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2312z00_1298,
																																										BgL_arg2313z00_1299);
																																								}
																																								if (BgL_vaz00_1207)
																																									{	/* Eval/expddefine.scm 285 */
																																										BgL_arg2306z00_1292
																																											=
																																											MAKE_PAIR
																																											(BGl_symbol2802z00zz__expander_definez00,
																																											BgL_metzd2bodyzd2_1210);
																																									}
																																								else
																																									{	/* Eval/expddefine.scm 285 */
																																										BgL_arg2306z00_1292
																																											=
																																											BgL_metzd2bodyzd2_1210;
																																									}
																																								BgL_arg2307z00_1293
																																									=
																																									MAKE_PAIR
																																									(BgL_defz00_1205,
																																									BNIL);
																																								{	/* Eval/expddefine.scm 284 */
																																									obj_t
																																										BgL_list2309z00_1295;
																																									{	/* Eval/expddefine.scm 284 */
																																										obj_t
																																											BgL_arg2310z00_1296;
																																										{	/* Eval/expddefine.scm 284 */
																																											obj_t
																																												BgL_arg2311z00_1297;
																																											BgL_arg2311z00_1297
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_arg2310z00_1296
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2307z00_1293,
																																												BgL_arg2311z00_1297);
																																										}
																																										BgL_list2309z00_1295
																																											=
																																											MAKE_PAIR
																																											(BgL_arg2306z00_1292,
																																											BgL_arg2310z00_1296);
																																									}
																																									BgL_arg2304z00_1290
																																										=
																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_arg2305z00_1291,
																																										BgL_list2309z00_1295);
																																								}
																																							}
																																							BgL_arg2270z00_1261
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2303z00_1289,
																																								BgL_arg2304z00_1290);
																																						}
																																						{	/* Eval/expddefine.scm 282 */
																																							obj_t
																																								BgL_list2272z00_1263;
																																							{	/* Eval/expddefine.scm 282 */
																																								obj_t
																																									BgL_arg2274z00_1264;
																																								BgL_arg2274z00_1264
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_list2272z00_1263
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2270z00_1261,
																																									BgL_arg2274z00_1264);
																																							}
																																							BgL_arg2268z00_1259
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2269z00_1260,
																																								BgL_list2272z00_1263);
																																						}
																																					}
																																					BgL_arg2248z00_1241
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2267z00_1258,
																																						BgL_arg2268z00_1259);
																																				}
																																				{	/* Eval/expddefine.scm 278 */
																																					obj_t
																																						BgL_list2250z00_1243;
																																					{	/* Eval/expddefine.scm 278 */
																																						obj_t
																																							BgL_arg2251z00_1244;
																																						BgL_arg2251z00_1244
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_list2250z00_1243
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2248z00_1241,
																																							BgL_arg2251z00_1244);
																																					}
																																					BgL_arg2246z00_1239
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg2247z00_1240,
																																						BgL_list2250z00_1243);
																																				}
																																			}
																																			BgL_arg2240z00_1234
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2245z00_1238,
																																				BgL_arg2246z00_1239);
																																		}
																																		{	/* Eval/expddefine.scm 277 */
																																			obj_t
																																				BgL_list2243z00_1236;
																																			{	/* Eval/expddefine.scm 277 */
																																				obj_t
																																					BgL_arg2244z00_1237;
																																				BgL_arg2244z00_1237
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_list2243z00_1236
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2240z00_1234,
																																					BgL_arg2244z00_1237);
																																			}
																																			BgL_arg2238z00_1232
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2239z00_1233,
																																				BgL_list2243z00_1236);
																																		}
																																	}
																																	BgL_arg2234z00_1228
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2237z00_1231,
																																		BgL_arg2238z00_1232);
																																}
																																{	/* Eval/expddefine.scm 276 */
																																	obj_t
																																		BgL_list2236z00_1230;
																																	BgL_list2236z00_1230
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2233z00_1227
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg2234z00_1228,
																																		BgL_list2236z00_1230);
																																}
																															}
																															BgL_arg2223z00_1222
																																=
																																MAKE_PAIR
																																(BgL_arg2227z00_1226,
																																BgL_arg2233z00_1227);
																														}
																														{	/* Eval/expddefine.scm 275 */
																															obj_t
																																BgL_list2225z00_1224;
																															{	/* Eval/expddefine.scm 275 */
																																obj_t
																																	BgL_arg2226z00_1225;
																																BgL_arg2226z00_1225
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list2225z00_1224
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2223z00_1222,
																																	BgL_arg2226z00_1225);
																															}
																															BgL_arg2222z00_1221
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_funz00_1183,
																																BgL_list2225z00_1224);
																														}
																													}
																													BgL_arg2211z00_1215 =
																														MAKE_PAIR
																														(BgL_arg2217z00_1220,
																														BgL_arg2222z00_1221);
																												}
																												{	/* Eval/expddefine.scm 287 */
																													obj_t
																														BgL_arg2315z00_1301;
																													obj_t
																														BgL_arg2316z00_1302;
																													BgL_arg2315z00_1301 =
																														BGl_symbol2814z00zz__expander_definez00;
																													{	/* Eval/expddefine.scm 289 */
																														obj_t
																															BgL_arg2317z00_1303;
																														obj_t
																															BgL_arg2318z00_1304;
																														{	/* Eval/expddefine.scm 289 */
																															obj_t
																																BgL_arg2324z00_1310;
																															obj_t
																																BgL_arg2325z00_1311;
																															BgL_arg2324z00_1310
																																=
																																BGl_symbol2783z00zz__expander_definez00;
																															{	/* Eval/expddefine.scm 289 */
																																obj_t
																																	BgL_arg2326z00_1312;
																																obj_t
																																	BgL_arg2327z00_1313;
																																BgL_arg2326z00_1312
																																	=
																																	MAKE_PAIR
																																	(BgL_f0z00_1184,
																																	BgL_formalsz00_1185);
																																if (PAIRP
																																	(BgL_bodyz00_1186))
																																	{	/* Eval/expddefine.scm 290 */
																																		BgL_arg2327z00_1313
																																			=
																																			MAKE_PAIR
																																			(BGl_symbol2780z00zz__expander_definez00,
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_bodyz00_1186,
																																				BNIL));
																																	}
																																else
																																	{	/* Eval/expddefine.scm 292 */
																																		obj_t
																																			BgL_arg2334z00_1320;
																																		obj_t
																																			BgL_arg2335z00_1321;
																																		BgL_arg2334z00_1320
																																			=
																																			BGl_symbol2816z00zz__expander_definez00;
																																		{	/* Eval/expddefine.scm 292 */
																																			obj_t
																																				BgL_arg2336z00_1322;
																																			obj_t
																																				BgL_arg2338z00_1324;
																																			{	/* Eval/expddefine.scm 292 */
																																				obj_t
																																					BgL_arg2343z00_1329;
																																				BgL_arg2343z00_1329
																																					=
																																					CAR
																																					(BgL_pfz00_1202);
																																				{	/* Eval/expddefine.scm 292 */
																																					obj_t
																																						BgL_res2751z00_2251;
																																					{	/* Eval/expddefine.scm 292 */
																																						obj_t
																																							BgL_symbolz00_2249;
																																						BgL_symbolz00_2249
																																							=
																																							BgL_arg2343z00_1329;
																																						{	/* Eval/expddefine.scm 292 */
																																							obj_t
																																								BgL_arg2676z00_2250;
																																							BgL_arg2676z00_2250
																																								=
																																								SYMBOL_TO_STRING
																																								(BgL_symbolz00_2249);
																																							BgL_res2751z00_2251
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg2676z00_2250);
																																						}
																																					}
																																					BgL_arg2336z00_1322
																																						=
																																						BgL_res2751z00_2251;
																																				}
																																			}
																																			{	/* Eval/expddefine.scm 294 */
																																				obj_t
																																					BgL_arg2344z00_1330;
																																				obj_t
																																					BgL_arg2345z00_1331;
																																				BgL_arg2344z00_1330
																																					=
																																					BGl_symbol2818z00zz__expander_definez00;
																																				{	/* Eval/expddefine.scm 294 */
																																					obj_t
																																						BgL_arg2346z00_1332;
																																					BgL_arg2346z00_1332
																																						=
																																						CAR
																																						(CAR
																																						(BgL_paz00_1204));
																																					{	/* Eval/expddefine.scm 294 */
																																						obj_t
																																							BgL_list2348z00_1334;
																																						BgL_list2348z00_1334
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_arg2345z00_1331
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_arg2346z00_1332,
																																							BgL_list2348z00_1334);
																																					}
																																				}
																																				BgL_arg2338z00_1324
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2344z00_1330,
																																					BgL_arg2345z00_1331);
																																			}
																																			{	/* Eval/expddefine.scm 292 */
																																				obj_t
																																					BgL_list2340z00_1326;
																																				{	/* Eval/expddefine.scm 292 */
																																					obj_t
																																						BgL_arg2341z00_1327;
																																					{	/* Eval/expddefine.scm 292 */
																																						obj_t
																																							BgL_arg2342z00_1328;
																																						BgL_arg2342z00_1328
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_arg2341z00_1327
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2338z00_1324,
																																							BgL_arg2342z00_1328);
																																					}
																																					BgL_list2340z00_1326
																																						=
																																						MAKE_PAIR
																																						(BGl_string2820z00zz__expander_definez00,
																																						BgL_arg2341z00_1327);
																																				}
																																				BgL_arg2335z00_1321
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg2336z00_1322,
																																					BgL_list2340z00_1326);
																																			}
																																		}
																																		BgL_arg2327z00_1313
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2334z00_1320,
																																			BgL_arg2335z00_1321);
																																	}
																																{	/* Eval/expddefine.scm 289 */
																																	obj_t
																																		BgL_list2329z00_1315;
																																	{	/* Eval/expddefine.scm 289 */
																																		obj_t
																																			BgL_arg2330z00_1316;
																																		BgL_arg2330z00_1316
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2329z00_1315
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2327z00_1313,
																																			BgL_arg2330z00_1316);
																																	}
																																	BgL_arg2325z00_1311
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg2326z00_1312,
																																		BgL_list2329z00_1315);
																																}
																															}
																															BgL_arg2317z00_1303
																																=
																																MAKE_PAIR
																																(BgL_arg2324z00_1310,
																																BgL_arg2325z00_1311);
																														}
																														{	/* Eval/expddefine.scm 296 */
																															obj_t
																																BgL_res2752z00_2256;
																															{	/* Eval/expddefine.scm 296 */
																																obj_t
																																	BgL_symbolz00_2254;
																																BgL_symbolz00_2254
																																	=
																																	BgL_idz00_1203;
																																{	/* Eval/expddefine.scm 296 */
																																	obj_t
																																		BgL_arg2676z00_2255;
																																	BgL_arg2676z00_2255
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_2254);
																																	BgL_res2752z00_2256
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2676z00_2255);
																																}
																															}
																															BgL_arg2318z00_1304
																																=
																																BgL_res2752z00_2256;
																														}
																														{	/* Eval/expddefine.scm 287 */
																															obj_t
																																BgL_list2320z00_1306;
																															{	/* Eval/expddefine.scm 287 */
																																obj_t
																																	BgL_arg2321z00_1307;
																																{	/* Eval/expddefine.scm 287 */
																																	obj_t
																																		BgL_arg2322z00_1308;
																																	{	/* Eval/expddefine.scm 287 */
																																		obj_t
																																			BgL_arg2323z00_1309;
																																		BgL_arg2323z00_1309
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2322z00_1308
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2318z00_1304,
																																			BgL_arg2323z00_1309);
																																	}
																																	BgL_arg2321z00_1307
																																		=
																																		MAKE_PAIR
																																		(BFALSE,
																																		BgL_arg2322z00_1308);
																																}
																																BgL_list2320z00_1306
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2317z00_1303,
																																	BgL_arg2321z00_1307);
																															}
																															BgL_arg2316z00_1302
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_idz00_1203,
																																BgL_list2320z00_1306);
																														}
																													}
																													BgL_arg2212z00_1216 =
																														MAKE_PAIR
																														(BgL_arg2315z00_1301,
																														BgL_arg2316z00_1302);
																												}
																												{	/* Eval/expddefine.scm 274 */
																													obj_t
																														BgL_list2214z00_1218;
																													{	/* Eval/expddefine.scm 274 */
																														obj_t
																															BgL_arg2216z00_1219;
																														BgL_arg2216z00_1219
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2214z00_1218
																															=
																															MAKE_PAIR
																															(BgL_arg2212z00_1216,
																															BgL_arg2216z00_1219);
																													}
																													BgL_arg2210z00_1214 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2211z00_1215,
																														BgL_list2214z00_1218);
																												}
																											}
																											BgL_arg2208z00_1212 =
																												MAKE_PAIR
																												(BgL_arg2209z00_1213,
																												BgL_arg2210z00_1214);
																										}
																										return
																											PROCEDURE_ENTRY
																											(BgL_ez00_20)
																											(BgL_ez00_20,
																											BgL_arg2208z00_1212,
																											BgL_ez00_20, BEOA);
																									}
																								else
																									{	/* Eval/expddefine.scm 273 */
																										return
																											BGl_errorz00zz__errorz00
																											(BgL_funz00_1183,
																											BGl_string2821z00zz__expander_definez00,
																											BgL_xz00_19);
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
											{	/* Eval/expddefine.scm 248 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2822z00zz__expander_definez00,
													BGl_string2785z00zz__expander_definez00, BgL_xz00_19);
											}
									}
								else
									{	/* Eval/expddefine.scm 248 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2822z00zz__expander_definez00,
											BGl_string2785z00zz__expander_definez00, BgL_xz00_19);
									}
							}
						else
							{	/* Eval/expddefine.scm 248 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2822z00zz__expander_definez00,
									BGl_string2785z00zz__expander_definez00, BgL_xz00_19);
							}
					}
				else
					{	/* Eval/expddefine.scm 248 */
						return
							BGl_errorz00zz__errorz00(BGl_string2822z00zz__expander_definez00,
							BGl_string2785z00zz__expander_definez00, BgL_xz00_19);
					}
			}
		}
	}



/* _expand-eval-define-generic */
	obj_t BGl__expandzd2evalzd2definezd2genericzd2zz__expander_definez00(obj_t
		BgL_envz00_2522, obj_t BgL_xz00_2523, obj_t BgL_ez00_2524)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 247 */
			{	/* Eval/expddefine.scm 248 */
				obj_t BgL_auxz00_3261;

				if (PROCEDUREP(BgL_ez00_2524))
					{	/* Eval/expddefine.scm 248 */
						BgL_auxz00_3261 = BgL_ez00_2524;
					}
				else
					{
						obj_t BgL_auxz00_3264;

						BgL_auxz00_3264 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 9042)),
							BGl_string2823z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_ez00_2524);
						FAILURE(BgL_auxz00_3264, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2genericzd2zz__expander_definez00
					(BgL_xz00_2523, BgL_auxz00_3261);
			}
		}
	}



/* <anonymous:2356> */
	obj_t BGl_zc3anonymousza32356ze3z83zz__expander_definez00(obj_t
		BgL_envz00_2525, obj_t BgL_az00_2526)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 270 */
			{
				obj_t BgL_az00_1342;

				BgL_az00_1342 = BgL_az00_2526;
				if (PAIRP(BgL_az00_1342))
					{	/* Eval/expddefine.scm 271 */
						return CAR(BgL_az00_1342);
					}
				else
					{	/* Eval/expddefine.scm 271 */
						return BgL_az00_1342;
					}
			}
		}
	}



/* <anonymous:2373> */
	obj_t BGl_zc3anonymousza32373ze3z83zz__expander_definez00(obj_t
		BgL_envz00_2527, obj_t BgL_az00_2528)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 260 */
			{
				obj_t BgL_az00_1365;

				BgL_az00_1365 = BgL_az00_2528;
				if (PAIRP(BgL_az00_1365))
					{	/* Eval/expddefine.scm 261 */
						return CAR(BgL_az00_1365);
					}
				else
					{	/* Eval/expddefine.scm 261 */
						return BgL_az00_1365;
					}
			}
		}
	}



/* <anonymous:2382> */
	obj_t BGl_zc3anonymousza32382ze3z83zz__expander_definez00(obj_t
		BgL_envz00_2529, obj_t BgL_iz00_2531)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 253 */
			{	/* Eval/expddefine.scm 253 */
				obj_t BgL_locz00_2530;

				BgL_locz00_2530 = PROCEDURE_REF(BgL_envz00_2529, (int) (((long) 0)));
				{
					obj_t BgL_iz00_1378;

					BgL_iz00_1378 = BgL_iz00_2531;
					return
						BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_iz00_1378,
						BgL_locz00_2530);
				}
			}
		}
	}



/* expand-eval-define-method */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 305 */
			{
				obj_t BgL_funz00_1383;

				obj_t BgL_f0z00_1384;

				obj_t BgL_formalsz00_1385;

				obj_t BgL_bodyz00_1386;

				if (PAIRP(BgL_xz00_21))
					{	/* Eval/expddefine.scm 320 */
						obj_t BgL_cdrzd21767zd2_1391;

						BgL_cdrzd21767zd2_1391 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd21767zd2_1391))
							{	/* Eval/expddefine.scm 320 */
								obj_t BgL_carzd21772zd2_1393;

								obj_t BgL_cdrzd21773zd2_1394;

								BgL_carzd21772zd2_1393 = CAR(BgL_cdrzd21767zd2_1391);
								BgL_cdrzd21773zd2_1394 = CDR(BgL_cdrzd21767zd2_1391);
								if (PAIRP(BgL_carzd21772zd2_1393))
									{	/* Eval/expddefine.scm 320 */
										obj_t BgL_cdrzd21778zd2_1396;

										BgL_cdrzd21778zd2_1396 = CDR(BgL_carzd21772zd2_1393);
										if (PAIRP(BgL_cdrzd21778zd2_1396))
											{	/* Eval/expddefine.scm 320 */
												if (NULLP(BgL_cdrzd21773zd2_1394))
													{	/* Eval/expddefine.scm 320 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2832z00zz__expander_definez00,
															BGl_string2785z00zz__expander_definez00,
															BgL_xz00_21);
													}
												else
													{	/* Eval/expddefine.scm 320 */
														BgL_funz00_1383 = CAR(BgL_carzd21772zd2_1393);
														BgL_f0z00_1384 = CAR(BgL_cdrzd21778zd2_1396);
														BgL_formalsz00_1385 = CDR(BgL_cdrzd21778zd2_1396);
														BgL_bodyz00_1386 = BgL_cdrzd21773zd2_1394;
														{	/* Eval/expddefine.scm 322 */
															obj_t BgL_locz00_1402;

															BgL_locz00_1402 =
																BGl_getzd2sourcezd2locationz00zz__readerz00
																(BgL_xz00_21);
															{	/* Eval/expddefine.scm 322 */
																obj_t BgL_p0z00_1403;

																BgL_p0z00_1403 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(BgL_f0z00_1384, BgL_locz00_1402);
																{	/* Eval/expddefine.scm 323 */
																	obj_t BgL_restz00_1404;

																	BgL_restz00_1404 =
																		BGl_getzd2argszd2zz__expander_definez00
																		(BgL_formalsz00_1385, BgL_locz00_1402);
																	{	/* Eval/expddefine.scm 324 */
																		bool_t BgL_vaz00_1405;

																		{	/* Eval/expddefine.scm 325 */
																			bool_t BgL_testz00_3296;

																			if (NULLP(BgL_formalsz00_1385))
																				{	/* Eval/expddefine.scm 325 */
																					BgL_testz00_3296 = ((bool_t) 0);
																				}
																			else
																				{	/* Eval/expddefine.scm 325 */
																					BgL_testz00_3296 = ((bool_t) 1);
																				}
																			if (BgL_testz00_3296)
																				{	/* Eval/expddefine.scm 326 */
																					bool_t BgL__ortest_1832z00_1506;

																					if (PAIRP(BgL_formalsz00_1385))
																						{	/* Eval/expddefine.scm 326 */
																							BgL__ortest_1832z00_1506 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Eval/expddefine.scm 326 */
																							BgL__ortest_1832z00_1506 =
																								((bool_t) 1);
																						}
																					if (BgL__ortest_1832z00_1506)
																						{	/* Eval/expddefine.scm 326 */
																							BgL_vaz00_1405 =
																								BgL__ortest_1832z00_1506;
																						}
																					else
																						{	/* Eval/expddefine.scm 326 */
																							if (NULLP(CDR
																									(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_formalsz00_1385))))
																								{	/* Eval/expddefine.scm 327 */
																									BgL_vaz00_1405 = ((bool_t) 0);
																								}
																							else
																								{	/* Eval/expddefine.scm 327 */
																									BgL_vaz00_1405 = ((bool_t) 1);
																								}
																						}
																				}
																			else
																				{	/* Eval/expddefine.scm 325 */
																					BgL_vaz00_1405 = ((bool_t) 0);
																				}
																		}
																		{	/* Eval/expddefine.scm 325 */

																			{	/* Eval/expddefine.scm 328 */
																				bool_t BgL_testz00_3306;

																				if (PAIRP(BgL_p0z00_1403))
																					{	/* Eval/expddefine.scm 328 */
																						obj_t BgL_auxz00_3309;

																						BgL_auxz00_3309 =
																							CDR(BgL_p0z00_1403);
																						BgL_testz00_3306 =
																							SYMBOLP(BgL_auxz00_3309);
																					}
																				else
																					{	/* Eval/expddefine.scm 328 */
																						BgL_testz00_3306 = ((bool_t) 0);
																					}
																				if (BgL_testz00_3306)
																					{	/* Eval/expddefine.scm 329 */
																						obj_t BgL_resz00_1407;

																						{	/* Eval/expddefine.scm 329 */
																							obj_t BgL_arg2392z00_1408;

																							obj_t BgL_arg2393z00_1409;

																							BgL_arg2392z00_1408 =
																								BGl_symbol2824z00zz__expander_definez00;
																							{	/* Eval/expddefine.scm 331 */
																								obj_t BgL_arg2394z00_1410;

																								obj_t BgL_arg2395z00_1411;

																								obj_t BgL_arg2396z00_1412;

																								BgL_arg2394z00_1410 =
																									CDR(BgL_p0z00_1403);
																								{	/* Eval/expddefine.scm 332 */
																									obj_t BgL_arg2402z00_1418;

																									{	/* Eval/expddefine.scm 332 */
																										obj_t BgL_arg2403z00_1419;

																										obj_t BgL_arg2404z00_1420;

																										BgL_arg2403z00_1419 =
																											BGl_symbol2783z00zz__expander_definez00;
																										{	/* Eval/expddefine.scm 332 */
																											obj_t BgL_arg2405z00_1421;

																											obj_t BgL_arg2406z00_1422;

																											obj_t BgL_arg2407z00_1423;

																											{	/* Eval/expddefine.scm 332 */
																												obj_t
																													BgL_arg2410z00_1426;
																												BgL_arg2410z00_1426 =
																													MAKE_PAIR
																													(BgL_f0z00_1384,
																													BgL_formalsz00_1385);
																												BgL_arg2405z00_1421 =
																													BGl_loopz00zz__expander_definez00
																													(BgL_ez00_22,
																													BgL_arg2410z00_1426);
																											}
																											{	/* Eval/expddefine.scm 333 */
																												obj_t
																													BgL_arg2411z00_1427;
																												obj_t
																													BgL_arg2412z00_1428;
																												BgL_arg2411z00_1427 =
																													BGl_symbol2788z00zz__expander_definez00;
																												{	/* Eval/expddefine.scm 333 */
																													obj_t
																														BgL_arg2413z00_1429;
																													obj_t
																														BgL_arg2414z00_1430;
																													BgL_arg2413z00_1429 =
																														MAKE_PAIR
																														(BGl_symbol2826z00zz__expander_definez00,
																														BNIL);
																													{	/* Eval/expddefine.scm 334 */
																														obj_t
																															BgL_arg2418z00_1434;
																														obj_t
																															BgL_arg2419z00_1435;
																														BgL_arg2418z00_1434
																															=
																															BGl_symbol2792z00zz__expander_definez00;
																														{	/* Eval/expddefine.scm 334 */
																															obj_t
																																BgL_arg2420z00_1436;
																															obj_t
																																BgL_arg2421z00_1437;
																															{	/* Eval/expddefine.scm 334 */
																																obj_t
																																	BgL_arg2425z00_1441;
																																{	/* Eval/expddefine.scm 334 */
																																	obj_t
																																		BgL_arg2427z00_1443;
																																	obj_t
																																		BgL_arg2428z00_1444;
																																	BgL_arg2427z00_1443
																																		=
																																		BGl_symbol2828z00zz__expander_definez00;
																																	{	/* Eval/expddefine.scm 334 */
																																		obj_t
																																			BgL_arg2429z00_1445;
																																		{	/* Eval/expddefine.scm 334 */
																																			obj_t
																																				BgL_arg2432z00_1448;
																																			obj_t
																																				BgL_arg2434z00_1449;
																																			BgL_arg2432z00_1448
																																				=
																																				BGl_symbol2830z00zz__expander_definez00;
																																			{	/* Eval/expddefine.scm 335 */
																																				obj_t
																																					BgL_arg2435z00_1450;
																																				obj_t
																																					BgL_arg2436z00_1451;
																																				BgL_arg2435z00_1450
																																					=
																																					CAR
																																					(BgL_p0z00_1403);
																																				BgL_arg2436z00_1451
																																					=
																																					CDR
																																					(BgL_p0z00_1403);
																																				{	/* Eval/expddefine.scm 334 */
																																					obj_t
																																						BgL_list2438z00_1453;
																																					{	/* Eval/expddefine.scm 334 */
																																						obj_t
																																							BgL_arg2439z00_1454;
																																						{	/* Eval/expddefine.scm 334 */
																																							obj_t
																																								BgL_arg2440z00_1455;
																																							BgL_arg2440z00_1455
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_arg2439z00_1454
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2436z00_1451,
																																								BgL_arg2440z00_1455);
																																						}
																																						BgL_list2438z00_1453
																																							=
																																							MAKE_PAIR
																																							(BgL_funz00_1383,
																																							BgL_arg2439z00_1454);
																																					}
																																					BgL_arg2434z00_1449
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg2435z00_1450,
																																						BgL_list2438z00_1453);
																																				}
																																			}
																																			BgL_arg2429z00_1445
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2432z00_1448,
																																				BgL_arg2434z00_1449);
																																		}
																																		{	/* Eval/expddefine.scm 334 */
																																			obj_t
																																				BgL_list2431z00_1447;
																																			BgL_list2431z00_1447
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2428z00_1444
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2429z00_1445,
																																				BgL_list2431z00_1447);
																																		}
																																	}
																																	BgL_arg2425z00_1441
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2427z00_1443,
																																		BgL_arg2428z00_1444);
																																}
																																BgL_arg2420z00_1436
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2425z00_1441,
																																	BNIL);
																															}
																															{	/* Eval/expddefine.scm 338 */
																																obj_t
																																	BgL_arg2441z00_1456;
																																obj_t
																																	BgL_arg2442z00_1457;
																																BgL_arg2441z00_1456
																																	=
																																	BGl_symbol2810z00zz__expander_definez00;
																																{	/* Eval/expddefine.scm 338 */
																																	obj_t
																																		BgL_arg2443z00_1458;
																																	obj_t
																																		BgL_arg2444z00_1459;
																																	{	/* Eval/expddefine.scm 338 */
																																		obj_t
																																			BgL_arg2448z00_1463;
																																		obj_t
																																			BgL_arg2449z00_1464;
																																		BgL_arg2448z00_1463
																																			=
																																			BGl_symbol2812z00zz__expander_definez00;
																																		{	/* Eval/expddefine.scm 338 */
																																			obj_t
																																				BgL_list2450z00_1465;
																																			BgL_list2450z00_1465
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2449z00_1464
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BGl_symbol2828z00zz__expander_definez00,
																																				BgL_list2450z00_1465);
																																		}
																																		BgL_arg2443z00_1458
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2448z00_1463,
																																			BgL_arg2449z00_1464);
																																	}
																																	{	/* Eval/expddefine.scm 339 */
																																		obj_t
																																			BgL_arg2451z00_1466;
																																		obj_t
																																			BgL_arg2452z00_1467;
																																		BgL_arg2451z00_1466
																																			=
																																			BGl_symbol2810z00zz__expander_definez00;
																																		{	/* Eval/expddefine.scm 339 */
																																			obj_t
																																				BgL_arg2453z00_1468;
																																			obj_t
																																				BgL_arg2454z00_1469;
																																			obj_t
																																				BgL_arg2455z00_1470;
																																			{	/* Eval/expddefine.scm 339 */
																																				obj_t
																																					BgL_arg2460z00_1475;
																																				obj_t
																																					BgL_arg2461z00_1476;
																																				BgL_arg2460z00_1475
																																					=
																																					BGl_symbol2812z00zz__expander_definez00;
																																				{	/* Eval/expddefine.scm 339 */
																																					obj_t
																																						BgL_list2462z00_1477;
																																					BgL_list2462z00_1477
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg2461z00_1476
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BGl_symbol2828z00zz__expander_definez00,
																																						BgL_list2462z00_1477);
																																				}
																																				BgL_arg2453z00_1468
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2460z00_1475,
																																					BgL_arg2461z00_1476);
																																			}
																																			if (BgL_vaz00_1405)
																																				{	/* Eval/expddefine.scm 341 */
																																					obj_t
																																						BgL_arg2465z00_1478;
																																					obj_t
																																						BgL_arg2467z00_1479;
																																					BgL_arg2465z00_1478
																																						=
																																						BGl_symbol2802z00zz__expander_definez00;
																																					{	/* Eval/expddefine.scm 341 */
																																						obj_t
																																							BgL_arg2469z00_1480;
																																						obj_t
																																							BgL_arg2470z00_1481;
																																						obj_t
																																							BgL_arg2471z00_1482;
																																						BgL_arg2469z00_1480
																																							=
																																							BGl_symbol2828z00zz__expander_definez00;
																																						BgL_arg2470z00_1481
																																							=
																																							CAR
																																							(BgL_p0z00_1403);
																																						BgL_arg2471z00_1482
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_restz00_1404,
																																							BNIL);
																																						{	/* Eval/expddefine.scm 341 */
																																							obj_t
																																								BgL_list2472z00_1483;
																																							{	/* Eval/expddefine.scm 341 */
																																								obj_t
																																									BgL_arg2476z00_1484;
																																								BgL_arg2476z00_1484
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2471z00_1482,
																																									BNIL);
																																								BgL_list2472z00_1483
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2470z00_1481,
																																									BgL_arg2476z00_1484);
																																							}
																																							BgL_arg2467z00_1479
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2469z00_1480,
																																								BgL_list2472z00_1483);
																																						}
																																					}
																																					BgL_arg2454z00_1469
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2465z00_1478,
																																						BgL_arg2467z00_1479);
																																				}
																																			else
																																				{	/* Eval/expddefine.scm 342 */
																																					obj_t
																																						BgL_arg2477z00_1485;
																																					obj_t
																																						BgL_arg2478z00_1486;
																																					BgL_arg2477z00_1485
																																						=
																																						BGl_symbol2828z00zz__expander_definez00;
																																					{	/* Eval/expddefine.scm 342 */
																																						obj_t
																																							BgL_arg2479z00_1487;
																																						obj_t
																																							BgL_arg2480z00_1488;
																																						BgL_arg2479z00_1487
																																							=
																																							CAR
																																							(BgL_p0z00_1403);
																																						BgL_arg2480z00_1488
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_restz00_1404,
																																							BNIL);
																																						{	/* Eval/expddefine.scm 342 */
																																							obj_t
																																								BgL_list2481z00_1489;
																																							BgL_list2481z00_1489
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2480z00_1488,
																																								BNIL);
																																							BgL_arg2478z00_1486
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2479z00_1487,
																																								BgL_list2481z00_1489);
																																						}
																																					}
																																					BgL_arg2454z00_1469
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2477z00_1485,
																																						BgL_arg2478z00_1486);
																																				}
																																			if (BgL_vaz00_1405)
																																				{	/* Eval/expddefine.scm 344 */
																																					obj_t
																																						BgL_arg2482z00_1490;
																																					obj_t
																																						BgL_arg2483z00_1491;
																																					BgL_arg2482z00_1490
																																						=
																																						BGl_symbol2802z00zz__expander_definez00;
																																					{	/* Eval/expddefine.scm 344 */
																																						obj_t
																																							BgL_arg2484z00_1492;
																																						obj_t
																																							BgL_arg2485z00_1493;
																																						BgL_arg2484z00_1492
																																							=
																																							CAR
																																							(BgL_p0z00_1403);
																																						BgL_arg2485z00_1493
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_restz00_1404,
																																							BNIL);
																																						{	/* Eval/expddefine.scm 344 */
																																							obj_t
																																								BgL_list2486z00_1494;
																																							{	/* Eval/expddefine.scm 344 */
																																								obj_t
																																									BgL_arg2487z00_1495;
																																								BgL_arg2487z00_1495
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2485z00_1493,
																																									BNIL);
																																								BgL_list2486z00_1494
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2484z00_1492,
																																									BgL_arg2487z00_1495);
																																							}
																																							BgL_arg2483z00_1491
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_funz00_1383,
																																								BgL_list2486z00_1494);
																																						}
																																					}
																																					BgL_arg2455z00_1470
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2482z00_1490,
																																						BgL_arg2483z00_1491);
																																				}
																																			else
																																				{	/* Eval/expddefine.scm 345 */
																																					obj_t
																																						BgL_arg2488z00_1496;
																																					{	/* Eval/expddefine.scm 345 */
																																						obj_t
																																							BgL_arg2489z00_1497;
																																						obj_t
																																							BgL_arg2491z00_1498;
																																						BgL_arg2489z00_1497
																																							=
																																							CAR
																																							(BgL_p0z00_1403);
																																						BgL_arg2491z00_1498
																																							=
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_restz00_1404,
																																							BNIL);
																																						{	/* Eval/expddefine.scm 345 */
																																							obj_t
																																								BgL_list2492z00_1499;
																																							BgL_list2492z00_1499
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2491z00_1498,
																																								BNIL);
																																							BgL_arg2488z00_1496
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_arg2489z00_1497,
																																								BgL_list2492z00_1499);
																																						}
																																					}
																																					BgL_arg2455z00_1470
																																						=
																																						MAKE_PAIR
																																						(BgL_funz00_1383,
																																						BgL_arg2488z00_1496);
																																				}
																																			{	/* Eval/expddefine.scm 339 */
																																				obj_t
																																					BgL_list2457z00_1472;
																																				{	/* Eval/expddefine.scm 339 */
																																					obj_t
																																						BgL_arg2458z00_1473;
																																					{	/* Eval/expddefine.scm 339 */
																																						obj_t
																																							BgL_arg2459z00_1474;
																																						BgL_arg2459z00_1474
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_arg2458z00_1473
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2455z00_1470,
																																							BgL_arg2459z00_1474);
																																					}
																																					BgL_list2457z00_1472
																																						=
																																						MAKE_PAIR
																																						(BgL_arg2454z00_1469,
																																						BgL_arg2458z00_1473);
																																				}
																																				BgL_arg2452z00_1467
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg2453z00_1468,
																																					BgL_list2457z00_1472);
																																			}
																																		}
																																		BgL_arg2444z00_1459
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2451z00_1466,
																																			BgL_arg2452z00_1467);
																																	}
																																	{	/* Eval/expddefine.scm 338 */
																																		obj_t
																																			BgL_list2446z00_1461;
																																		{	/* Eval/expddefine.scm 338 */
																																			obj_t
																																				BgL_arg2447z00_1462;
																																			BgL_arg2447z00_1462
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list2446z00_1461
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2444z00_1459,
																																				BgL_arg2447z00_1462);
																																		}
																																		BgL_arg2442z00_1457
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg2443z00_1458,
																																			BgL_list2446z00_1461);
																																	}
																																}
																																BgL_arg2421z00_1437
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2441z00_1456,
																																	BgL_arg2442z00_1457);
																															}
																															{	/* Eval/expddefine.scm 334 */
																																obj_t
																																	BgL_list2423z00_1439;
																																{	/* Eval/expddefine.scm 334 */
																																	obj_t
																																		BgL_arg2424z00_1440;
																																	BgL_arg2424z00_1440
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2423z00_1439
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2421z00_1437,
																																		BgL_arg2424z00_1440);
																																}
																																BgL_arg2419z00_1435
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2420z00_1436,
																																	BgL_list2423z00_1439);
																															}
																														}
																														BgL_arg2414z00_1430
																															=
																															MAKE_PAIR
																															(BgL_arg2418z00_1434,
																															BgL_arg2419z00_1435);
																													}
																													{	/* Eval/expddefine.scm 333 */
																														obj_t
																															BgL_list2416z00_1432;
																														{	/* Eval/expddefine.scm 333 */
																															obj_t
																																BgL_arg2417z00_1433;
																															BgL_arg2417z00_1433
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2416z00_1432
																																=
																																MAKE_PAIR
																																(BgL_arg2414z00_1430,
																																BgL_arg2417z00_1433);
																														}
																														BgL_arg2412z00_1428
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2413z00_1429,
																															BgL_list2416z00_1432);
																													}
																												}
																												BgL_arg2406z00_1422 =
																													MAKE_PAIR
																													(BgL_arg2411z00_1427,
																													BgL_arg2412z00_1428);
																											}
																											BgL_arg2407z00_1423 =
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_bodyz00_1386,
																												BNIL);
																											{	/* Eval/expddefine.scm 332 */
																												obj_t
																													BgL_list2408z00_1424;
																												{	/* Eval/expddefine.scm 332 */
																													obj_t
																														BgL_arg2409z00_1425;
																													BgL_arg2409z00_1425 =
																														MAKE_PAIR
																														(BgL_arg2407z00_1423,
																														BNIL);
																													BgL_list2408z00_1424 =
																														MAKE_PAIR
																														(BgL_arg2406z00_1422,
																														BgL_arg2409z00_1425);
																												}
																												BgL_arg2404z00_1420 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2405z00_1421,
																													BgL_list2408z00_1424);
																											}
																										}
																										BgL_arg2402z00_1418 =
																											MAKE_PAIR
																											(BgL_arg2403z00_1419,
																											BgL_arg2404z00_1420);
																									}
																									BgL_arg2395z00_1411 =
																										PROCEDURE_ENTRY(BgL_ez00_22)
																										(BgL_ez00_22,
																										BgL_arg2402z00_1418,
																										BgL_ez00_22, BEOA);
																								}
																								{	/* Eval/expddefine.scm 347 */
																									obj_t BgL_arg2493z00_1500;

																									obj_t BgL_arg2494z00_1501;

																									BgL_arg2493z00_1500 =
																										BGl_symbol2818z00zz__expander_definez00;
																									{	/* Eval/expddefine.scm 347 */
																										obj_t BgL_list2495z00_1502;

																										BgL_list2495z00_1502 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2494z00_1501 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_f0z00_1384,
																											BgL_list2495z00_1502);
																									}
																									BgL_arg2396z00_1412 =
																										MAKE_PAIR
																										(BgL_arg2493z00_1500,
																										BgL_arg2494z00_1501);
																								}
																								{	/* Eval/expddefine.scm 329 */
																									obj_t BgL_list2398z00_1414;

																									{	/* Eval/expddefine.scm 329 */
																										obj_t BgL_arg2399z00_1415;

																										{	/* Eval/expddefine.scm 329 */
																											obj_t BgL_arg2400z00_1416;

																											{	/* Eval/expddefine.scm 329 */
																												obj_t
																													BgL_arg2401z00_1417;
																												BgL_arg2401z00_1417 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2400z00_1416 =
																													MAKE_PAIR
																													(BgL_arg2396z00_1412,
																													BgL_arg2401z00_1417);
																											}
																											BgL_arg2399z00_1415 =
																												MAKE_PAIR
																												(BgL_arg2395z00_1411,
																												BgL_arg2400z00_1416);
																										}
																										BgL_list2398z00_1414 =
																											MAKE_PAIR
																											(BgL_arg2394z00_1410,
																											BgL_arg2399z00_1415);
																									}
																									BgL_arg2393z00_1409 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_funz00_1383,
																										BgL_list2398z00_1414);
																								}
																							}
																							BgL_resz00_1407 =
																								MAKE_PAIR(BgL_arg2392z00_1408,
																								BgL_arg2393z00_1409);
																						}
																						{	/* Eval/expddefine.scm 329 */

																							return
																								BGl_evepairifyz00zz__prognz00
																								(BgL_resz00_1407, BgL_xz00_21);
																						}
																					}
																				else
																					{	/* Eval/expddefine.scm 328 */
																						return
																							BGl_errorz00zz__errorz00
																							(BGl_string2832z00zz__expander_definez00,
																							BGl_string2785z00zz__expander_definez00,
																							BgL_xz00_21);
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
											{	/* Eval/expddefine.scm 320 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2832z00zz__expander_definez00,
													BGl_string2785z00zz__expander_definez00, BgL_xz00_21);
											}
									}
								else
									{	/* Eval/expddefine.scm 320 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2832z00zz__expander_definez00,
											BGl_string2785z00zz__expander_definez00, BgL_xz00_21);
									}
							}
						else
							{	/* Eval/expddefine.scm 320 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2832z00zz__expander_definez00,
									BGl_string2785z00zz__expander_definez00, BgL_xz00_21);
							}
					}
				else
					{	/* Eval/expddefine.scm 320 */
						return
							BGl_errorz00zz__errorz00(BGl_string2832z00zz__expander_definez00,
							BGl_string2785z00zz__expander_definez00, BgL_xz00_21);
					}
			}
		}
	}



/* get-args */
	obj_t BGl_getzd2argszd2zz__expander_definez00(obj_t BgL_argsz00_1517,
		obj_t BgL_locz00_1518)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 319 */
			if (NULLP(BgL_argsz00_1517))
				{	/* Eval/expddefine.scm 313 */
					return BNIL;
				}
			else
				{	/* Eval/expddefine.scm 313 */
					if (PAIRP(BgL_argsz00_1517))
						{	/* Eval/expddefine.scm 316 */
							obj_t BgL_arg2508z00_1522;

							obj_t BgL_arg2509z00_1523;

							{	/* Eval/expddefine.scm 316 */
								obj_t BgL_arg2510z00_1524;

								obj_t BgL_arg2511z00_1525;

								BgL_arg2510z00_1524 = CAR(BgL_argsz00_1517);
								{	/* Eval/expddefine.scm 316 */
									obj_t BgL__ortest_1830z00_1526;

									BgL__ortest_1830z00_1526 =
										BGl_getzd2sourcezd2locationz00zz__readerz00
										(BgL_argsz00_1517);
									if (CBOOL(BgL__ortest_1830z00_1526))
										{	/* Eval/expddefine.scm 316 */
											BgL_arg2511z00_1525 = BgL__ortest_1830z00_1526;
										}
									else
										{	/* Eval/expddefine.scm 316 */
											BgL_arg2511z00_1525 = BgL_locz00_1518;
										}
								}
								{	/* Eval/expddefine.scm 316 */
									obj_t BgL_rz00_2292;

									BgL_rz00_2292 =
										BGl_parsezd2formalzd2identz00zz__evutilsz00
										(BgL_arg2510z00_1524, BgL_arg2511z00_1525);
									if (PAIRP(BgL_rz00_2292))
										{	/* Eval/expddefine.scm 316 */
											BgL_arg2508z00_1522 = CAR(BgL_rz00_2292);
										}
									else
										{	/* Eval/expddefine.scm 316 */
											BgL_arg2508z00_1522 = BgL_rz00_2292;
										}
								}
							}
							BgL_arg2509z00_1523 =
								BGl_getzd2argszd2zz__expander_definez00(CDR(BgL_argsz00_1517),
								BgL_locz00_1518);
							return MAKE_PAIR(BgL_arg2508z00_1522, BgL_arg2509z00_1523);
						}
					else
						{	/* Eval/expddefine.scm 319 */
							obj_t BgL_arg2513z00_1528;

							{	/* Eval/expddefine.scm 319 */
								obj_t BgL_rz00_2299;

								BgL_rz00_2299 =
									BGl_parsezd2formalzd2identz00zz__evutilsz00(BgL_argsz00_1517,
									BgL_locz00_1518);
								if (PAIRP(BgL_rz00_2299))
									{	/* Eval/expddefine.scm 319 */
										BgL_arg2513z00_1528 = CAR(BgL_rz00_2299);
									}
								else
									{	/* Eval/expddefine.scm 319 */
										BgL_arg2513z00_1528 = BgL_rz00_2299;
									}
							}
							{	/* Eval/expddefine.scm 319 */
								obj_t BgL_list2514z00_1529;

								BgL_list2514z00_1529 = MAKE_PAIR(BgL_arg2513z00_1528, BNIL);
								return BgL_list2514z00_1529;
							}
						}
				}
		}
	}



/* _expand-eval-define-method */
	obj_t BGl__expandzd2evalzd2definezd2methodzd2zz__expander_definez00(obj_t
		BgL_envz00_2534, obj_t BgL_xz00_2535, obj_t BgL_ez00_2536)
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 305 */
			{	/* Eval/expddefine.scm 307 */
				obj_t BgL_auxz00_3419;

				if (PROCEDUREP(BgL_ez00_2536))
					{	/* Eval/expddefine.scm 307 */
						BgL_auxz00_3419 = BgL_ez00_2536;
					}
				else
					{
						obj_t BgL_auxz00_3422;

						BgL_auxz00_3422 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2777z00zz__expander_definez00, BINT(((long) 10936)),
							BGl_string2833z00zz__expander_definez00,
							BGl_string2779z00zz__expander_definez00, BgL_ez00_2536);
						FAILURE(BgL_auxz00_3422, BFALSE, BFALSE);
					}
				return
					BGl_expandzd2evalzd2definezd2methodzd2zz__expander_definez00
					(BgL_xz00_2535, BgL_auxz00_3419);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_definez00()
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_definez00()
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_definez00()
	{
		AN_OBJECT;
		{	/* Eval/expddefine.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 32372471),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
			return BGl_modulezd2initializa7ationz75zz__expandz00(((long) 453710891),
				BSTRING_TO_STRING(BGl_string2834z00zz__expander_definez00));
		}
	}

#ifdef __cplusplus
}
#endif
