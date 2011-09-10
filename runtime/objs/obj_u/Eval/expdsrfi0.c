/*===========================================================================*/
/*   (Eval/expdsrfi0.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdsrfi0.scm -indent -o objs/obj_u/Eval/expdsrfi0.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_evalzd2srfizf3z21zz__expander_srfi0z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
		BUNSPEC;
	static obj_t BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_list2451z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl__compilezd2srfizf3z21zz__expander_srfi0z00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t
		BGl__expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_compilezd2srfizf3z21zz__expander_srfi0z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl__expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__expander_srfi0z00();
	static obj_t BGl_symbol2443z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2445z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2447z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2449z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2452z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2454z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2456z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2458z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2460z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2462z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2464z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2466z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2468z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2470z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2472z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2474z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2476z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2500z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2489z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2502z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2493z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2504z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2494z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2496z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_symbol2498z00zz__expander_srfi0z00 = BUNSPEC;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__evalzd2srfizf3z21zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t BGl_za2srfizd2commonzd2listza2z00zz__expander_srfi0z00 = BUNSPEC;
	static obj_t BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t, obj_t);
	static obj_t BGl__registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t);
	extern obj_t BGl_libraryzd2existszf3z21zz__libraryz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_srfi0z00();
	BGL_EXPORTED_DECL obj_t bgl_register_eval_srfi(obj_t);
	static obj_t BGl__registerzd2evalzd2srfiz12z12zz__expander_srfi0z00(obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2compilezd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl__registerza7d2comp2512za7,
		BGl__registerzd2compilezd2srfiz12z12zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2444z00zz__expander_srfi0z00,
		BgL_bgl_string2444za700za7za7_2513za7, "srfi0", 5);
	      DEFINE_STRING(BGl_string2446z00zz__expander_srfi0z00,
		BgL_bgl_string2446za700za7za7_2514za7, "bigloo3.6a", 10);
	      DEFINE_STRING(BGl_string2448z00zz__expander_srfi0z00,
		BgL_bgl_string2448za700za7za7_2515za7, "bigloo3", 7);
	      DEFINE_STRING(BGl_string2450z00zz__expander_srfi0z00,
		BgL_bgl_string2450za700za7za7_2516za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string2453z00zz__expander_srfi0z00,
		BgL_bgl_string2453za700za7za7_2517za7, "srfi-0", 6);
	      DEFINE_STRING(BGl_string2455z00zz__expander_srfi0z00,
		BgL_bgl_string2455za700za7za7_2518za7, "srfi-2", 6);
	      DEFINE_STRING(BGl_string2457z00zz__expander_srfi0z00,
		BgL_bgl_string2457za700za7za7_2519za7, "srfi-4", 6);
	      DEFINE_STRING(BGl_string2459z00zz__expander_srfi0z00,
		BgL_bgl_string2459za700za7za7_2520za7, "srfi-6", 6);
	      DEFINE_STRING(BGl_string2461z00zz__expander_srfi0z00,
		BgL_bgl_string2461za700za7za7_2521za7, "srfi-8", 6);
	      DEFINE_STRING(BGl_string2463z00zz__expander_srfi0z00,
		BgL_bgl_string2463za700za7za7_2522za7, "srfi-9", 6);
	      DEFINE_STRING(BGl_string2465z00zz__expander_srfi0z00,
		BgL_bgl_string2465za700za7za7_2523za7, "srfi-22", 7);
	      DEFINE_STRING(BGl_string2467z00zz__expander_srfi0z00,
		BgL_bgl_string2467za700za7za7_2524za7, "srfi-28", 7);
	      DEFINE_STRING(BGl_string2469z00zz__expander_srfi0z00,
		BgL_bgl_string2469za700za7za7_2525za7, "srfi-30", 7);
	      DEFINE_STRING(BGl_string2471z00zz__expander_srfi0z00,
		BgL_bgl_string2471za700za7za7_2526za7, "bigloo3.6", 9);
	      DEFINE_STRING(BGl_string2473z00zz__expander_srfi0z00,
		BgL_bgl_string2473za700za7za7_2527za7, "bigloo-finalizer", 16);
	      DEFINE_STRING(BGl_string2475z00zz__expander_srfi0z00,
		BgL_bgl_string2475za700za7za7_2528za7, "bigloo-weakptr", 14);
	      DEFINE_STRING(BGl_string2477z00zz__expander_srfi0z00,
		BgL_bgl_string2477za700za7za7_2529za7, "bigloo-eval", 11);
	      DEFINE_STRING(BGl_string2478z00zz__expander_srfi0z00,
		BgL_bgl_string2478za700za7za7_2530za7,
		"/tmp/bigloo/runtime/Eval/expdsrfi0.scm", 38);
	      DEFINE_STRING(BGl_string2480z00zz__expander_srfi0z00,
		BgL_bgl_string2480za700za7za7_2531za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2479z00zz__expander_srfi0z00,
		BgL_bgl_string2479za700za7za7_2532za7, "_register-eval-srfi!", 20);
	      DEFINE_STRING(BGl_string2481z00zz__expander_srfi0z00,
		BgL_bgl_string2481za700za7za7_2533za7, "_register-compile-srfi!", 23);
	      DEFINE_STRING(BGl_string2482z00zz__expander_srfi0z00,
		BgL_bgl_string2482za700za7za7_2534za7, "_register-srfi!", 15);
	      DEFINE_STRING(BGl_string2483z00zz__expander_srfi0z00,
		BgL_bgl_string2483za700za7za7_2535za7, "_expand-eval-cond-expand", 24);
	      DEFINE_STRING(BGl_string2484z00zz__expander_srfi0z00,
		BgL_bgl_string2484za700za7za7_2536za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2485z00zz__expander_srfi0z00,
		BgL_bgl_string2485za700za7za7_2537za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2486z00zz__expander_srfi0z00,
		BgL_bgl_string2486za700za7za7_2538za7, "_expand-compile-cond-expand", 27);
	      DEFINE_STRING(BGl_string2487z00zz__expander_srfi0z00,
		BgL_bgl_string2487za700za7za7_2539za7, "_compile-srfi?", 14);
	      DEFINE_STRING(BGl_string2488z00zz__expander_srfi0z00,
		BgL_bgl_string2488za700za7za7_2540za7, "_eval-srfi?", 11);
	      DEFINE_STRING(BGl_string2490z00zz__expander_srfi0z00,
		BgL_bgl_string2490za700za7za7_2541za7, "begin", 5);
	      DEFINE_STRING(BGl_string2501z00zz__expander_srfi0z00,
		BgL_bgl_string2501za700za7za7_2542za7, "not", 3);
	      DEFINE_STRING(BGl_string2491z00zz__expander_srfi0z00,
		BgL_bgl_string2491za700za7za7_2543za7, "cond-expand", 11);
	      DEFINE_STRING(BGl_string2492z00zz__expander_srfi0z00,
		BgL_bgl_string2492za700za7za7_2544za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2503z00zz__expander_srfi0z00,
		BgL_bgl_string2503za700za7za7_2545za7, "library", 7);
	      DEFINE_STRING(BGl_string2505z00zz__expander_srfi0z00,
		BgL_bgl_string2505za700za7za7_2546za7, "config", 6);
	      DEFINE_STRING(BGl_string2495z00zz__expander_srfi0z00,
		BgL_bgl_string2495za700za7za7_2547za7, "else", 4);
	      DEFINE_STRING(BGl_string2506z00zz__expander_srfi0z00,
		BgL_bgl_string2506za700za7za7_2548za7, "_expand-cond-expand", 19);
	      DEFINE_STRING(BGl_string2507z00zz__expander_srfi0z00,
		BgL_bgl_string2507za700za7za7_2549za7, "__expander_srfi0", 16);
	      DEFINE_STRING(BGl_string2497z00zz__expander_srfi0z00,
		BgL_bgl_string2497za700za7za7_2550za7, "and", 3);
	      DEFINE_STRING(BGl_string2499z00zz__expander_srfi0z00,
		BgL_bgl_string2499za700za7za7_2551za7, "or", 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compilezd2srfizf3zd2envzf3zz__expander_srfi0z00,
		BgL_bgl__compileza7d2srfiza72552z00,
		BGl__compilezd2srfizf3z21zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2srfizf3zd2envzf3zz__expander_srfi0z00,
		BgL_bgl__evalza7d2srfiza7f3za72553za7,
		BGl__evalzd2srfizf3z21zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2condzd2expandzd2envz00zz__expander_srfi0z00,
		BgL_bgl__expandza7d2evalza7d2554z00,
		BGl__expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2condzd2expandzd2envzd2zz__expander_srfi0z00,
		BgL_bgl__expandza7d2condza7d2555z00,
		BGl__expandzd2condzd2expandz00zz__expander_srfi0z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2srfiz12zd2envz12zz__expander_srfi0z00,
		BgL_bgl__registerza7d2srfi2556za7,
		BGl__registerzd2srfiz12zc0zz__expander_srfi0z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2compilezd2condzd2expandzd2envz00zz__expander_srfi0z00,
		BgL_bgl__expandza7d2compil2557za7,
		BGl__expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2evalzd2srfiz12zd2envzc0zz__expander_srfi0z00,
		BgL_bgl__registerza7d2eval2558za7,
		BGl__registerzd2evalzd2srfiz12z12zz__expander_srfi0z00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long
		BgL_checksumz00_2085, char *BgL_fromz00_2086)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_srfi0z00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_srfi0z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_srfi0z00();
					BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00();
					BGl_toplevelzd2initzd2zz__expander_srfi0z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_srfi0z00()
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 15 */
			BGl_symbol2443z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2444z00zz__expander_srfi0z00);
			BGl_symbol2445z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2446z00zz__expander_srfi0z00);
			BGl_symbol2447z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2448z00zz__expander_srfi0z00);
			BGl_symbol2449z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2450z00zz__expander_srfi0z00);
			BGl_symbol2452z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2453z00zz__expander_srfi0z00);
			BGl_symbol2454z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2455z00zz__expander_srfi0z00);
			BGl_symbol2456z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2457z00zz__expander_srfi0z00);
			BGl_symbol2458z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2459z00zz__expander_srfi0z00);
			BGl_symbol2460z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2461z00zz__expander_srfi0z00);
			BGl_symbol2462z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2463z00zz__expander_srfi0z00);
			BGl_symbol2464z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2465z00zz__expander_srfi0z00);
			BGl_symbol2466z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2467z00zz__expander_srfi0z00);
			BGl_symbol2468z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2469z00zz__expander_srfi0z00);
			BGl_list2451z00zz__expander_srfi0z00 =
				MAKE_PAIR(BGl_symbol2452z00zz__expander_srfi0z00,
				MAKE_PAIR(BGl_symbol2454z00zz__expander_srfi0z00,
					MAKE_PAIR(BGl_symbol2456z00zz__expander_srfi0z00,
						MAKE_PAIR(BGl_symbol2458z00zz__expander_srfi0z00,
							MAKE_PAIR(BGl_symbol2460z00zz__expander_srfi0z00,
								MAKE_PAIR(BGl_symbol2462z00zz__expander_srfi0z00,
									MAKE_PAIR(BGl_symbol2464z00zz__expander_srfi0z00,
										MAKE_PAIR(BGl_symbol2466z00zz__expander_srfi0z00,
											MAKE_PAIR(BGl_symbol2468z00zz__expander_srfi0z00,
												BNIL)))))))));
			BGl_symbol2470z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2471z00zz__expander_srfi0z00);
			BGl_symbol2472z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2473z00zz__expander_srfi0z00);
			BGl_symbol2474z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2475z00zz__expander_srfi0z00);
			BGl_symbol2476z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2477z00zz__expander_srfi0z00);
			BGl_symbol2489z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2490z00zz__expander_srfi0z00);
			BGl_symbol2493z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2491z00zz__expander_srfi0z00);
			BGl_symbol2494z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2495z00zz__expander_srfi0z00);
			BGl_symbol2496z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2497z00zz__expander_srfi0z00);
			BGl_symbol2498z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2499z00zz__expander_srfi0z00);
			BGl_symbol2500z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2501z00zz__expander_srfi0z00);
			BGl_symbol2502z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2503z00zz__expander_srfi0z00);
			return (BGl_symbol2504z00zz__expander_srfi0z00 =
				bstring_to_symbol(BGl_string2505z00zz__expander_srfi0z00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__expander_srfi0z00()
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 15 */
			BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00 =
				bgl_make_mutex(BGl_symbol2443z00zz__expander_srfi0z00);
			{	/* Eval/expdsrfi0.scm 114 */
				obj_t BgL_lz00_794;

				{	/* Eval/expdsrfi0.scm 114 */
					obj_t BgL_arg1901z00_798;

					obj_t BgL_arg1902z00_799;

					BgL_arg1901z00_798 = BGl_symbol2445z00zz__expander_srfi0z00;
					{	/* Eval/expdsrfi0.scm 116 */
						obj_t BgL_list1903z00_800;

						{	/* Eval/expdsrfi0.scm 116 */
							obj_t BgL_arg1904z00_801;

							obj_t BgL_arg1905z00_802;

							BgL_arg1904z00_801 = BGl_symbol2447z00zz__expander_srfi0z00;
							{	/* Eval/expdsrfi0.scm 117 */
								obj_t BgL_arg1906z00_803;

								obj_t BgL_arg1907z00_804;

								BgL_arg1906z00_803 = BGl_symbol2449z00zz__expander_srfi0z00;
								BgL_arg1907z00_804 =
									MAKE_PAIR(BGl_list2451z00zz__expander_srfi0z00, BNIL);
								BgL_arg1905z00_802 =
									MAKE_PAIR(BgL_arg1906z00_803, BgL_arg1907z00_804);
							}
							BgL_list1903z00_800 =
								MAKE_PAIR(BgL_arg1904z00_801, BgL_arg1905z00_802);
						}
						BgL_arg1902z00_799 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
							(BGl_symbol2470z00zz__expander_srfi0z00, BgL_list1903z00_800);
					}
					BgL_lz00_794 = MAKE_PAIR(BgL_arg1901z00_798, BgL_arg1902z00_799);
				}
				if (BGL_AUTO_FINALIZER)
					{	/* Eval/expdsrfi0.scm 128 */
						obj_t BgL_arg1898z00_795;

						obj_t BgL_arg1899z00_796;

						BgL_arg1898z00_795 = BGl_symbol2472z00zz__expander_srfi0z00;
						{	/* Eval/expdsrfi0.scm 128 */
							obj_t BgL_list1900z00_797;

							BgL_list1900z00_797 = MAKE_PAIR(BgL_lz00_794, BNIL);
							BgL_arg1899z00_796 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_symbol2474z00zz__expander_srfi0z00, BgL_list1900z00_797);
						}
						BGl_za2srfizd2commonzd2listza2z00zz__expander_srfi0z00 =
							MAKE_PAIR(BgL_arg1898z00_795, BgL_arg1899z00_796);
					}
				else
					{	/* Eval/expdsrfi0.scm 127 */
						BGl_za2srfizd2commonzd2listza2z00zz__expander_srfi0z00 =
							BgL_lz00_794;
					}
			}
			BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
				MAKE_PAIR(BGl_symbol2476z00zz__expander_srfi0z00,
				BGl_za2srfizd2commonzd2listza2z00zz__expander_srfi0z00);
			return (BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
				BGl_za2srfizd2commonzd2listza2z00zz__expander_srfi0z00, BUNSPEC);
		}
	}



/* register-eval-srfi! */
	BGL_EXPORTED_DEF obj_t bgl_register_eval_srfi(obj_t BgL_srfiz00_1)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 146 */
			{	/* Eval/expdsrfi0.scm 147 */
				obj_t BgL_g1890z00_1568;

				BgL_g1890z00_1568 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 147 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 147 */
							bgl_mutex_lock(BgL_g1890z00_1568);
						}
					else
						{	/* Eval/expdsrfi0.scm 147 */
							bgl_mutex_timed_lock(BgL_g1890z00_1568, ((long) 0));
			}}}
			BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
				MAKE_PAIR(BgL_srfiz00_1,
				BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00);
			{	/* Eval/expdsrfi0.scm 147 */
				obj_t BgL_mz00_1575;

				BgL_mz00_1575 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1575));
			}
		}
	}



/* _register-eval-srfi! */
	obj_t BGl__registerzd2evalzd2srfiz12z12zz__expander_srfi0z00(obj_t
		BgL_envz00_2021, obj_t BgL_srfiz00_2022)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 146 */
			{	/* Eval/expdsrfi0.scm 149 */
				obj_t BgL_auxz00_2145;

				if (SYMBOLP(BgL_srfiz00_2022))
					{	/* Eval/expdsrfi0.scm 149 */
						BgL_auxz00_2145 = BgL_srfiz00_2022;
					}
				else
					{
						obj_t BgL_auxz00_2148;

						BgL_auxz00_2148 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 6189)),
							BGl_string2479z00zz__expander_srfi0z00,
							BGl_string2480z00zz__expander_srfi0z00, BgL_srfiz00_2022);
						FAILURE(BgL_auxz00_2148, BFALSE, BFALSE);
					}
				return bgl_register_eval_srfi(BgL_auxz00_2145);
			}
		}
	}



/* register-compile-srfi! */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t
		BgL_srfiz00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 154 */
			{	/* Eval/expdsrfi0.scm 155 */
				obj_t BgL_g1890z00_1576;

				BgL_g1890z00_1576 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 155 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 155 */
							bgl_mutex_lock(BgL_g1890z00_1576);
						}
					else
						{	/* Eval/expdsrfi0.scm 155 */
							bgl_mutex_timed_lock(BgL_g1890z00_1576, ((long) 0));
			}}}
			BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
				MAKE_PAIR(BgL_srfiz00_2,
				BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00);
			{	/* Eval/expdsrfi0.scm 155 */
				obj_t BgL_mz00_1583;

				BgL_mz00_1583 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1583));
			}
		}
	}



/* _register-compile-srfi! */
	obj_t BGl__registerzd2compilezd2srfiz12z12zz__expander_srfi0z00(obj_t
		BgL_envz00_2023, obj_t BgL_srfiz00_2024)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 154 */
			{	/* Eval/expdsrfi0.scm 157 */
				obj_t BgL_auxz00_2160;

				if (SYMBOLP(BgL_srfiz00_2024))
					{	/* Eval/expdsrfi0.scm 157 */
						BgL_auxz00_2160 = BgL_srfiz00_2024;
					}
				else
					{
						obj_t BgL_auxz00_2163;

						BgL_auxz00_2163 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 6583)),
							BGl_string2481z00zz__expander_srfi0z00,
							BGl_string2480z00zz__expander_srfi0z00, BgL_srfiz00_2024);
						FAILURE(BgL_auxz00_2163, BFALSE, BFALSE);
					}
				return
					BGl_registerzd2compilezd2srfiz12z12zz__expander_srfi0z00
					(BgL_auxz00_2160);
			}
		}
	}



/* register-srfi! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t
		BgL_srfiz00_3)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 162 */
			{	/* Eval/expdsrfi0.scm 163 */
				obj_t BgL_g1890z00_1585;

				BgL_g1890z00_1585 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 163 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 163 */
							bgl_mutex_lock(BgL_g1890z00_1585);
						}
					else
						{	/* Eval/expdsrfi0.scm 163 */
							bgl_mutex_timed_lock(BgL_g1890z00_1585, ((long) 0));
			}}}
			BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00 =
				MAKE_PAIR(BgL_srfiz00_3,
				BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00);
			bgl_mutex_unlock(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
			{	/* Eval/expdsrfi0.scm 164 */
				obj_t BgL_g1890z00_1594;

				BgL_g1890z00_1594 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 164 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 164 */
							bgl_mutex_lock(BgL_g1890z00_1594);
						}
					else
						{	/* Eval/expdsrfi0.scm 164 */
							bgl_mutex_timed_lock(BgL_g1890z00_1594, ((long) 0));
			}}}
			BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00 =
				MAKE_PAIR(BgL_srfiz00_3,
				BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00);
			{	/* Eval/expdsrfi0.scm 164 */
				obj_t BgL_mz00_1601;

				BgL_mz00_1601 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				return BBOOL(bgl_mutex_unlock(BgL_mz00_1601));
			}
		}
	}



/* _register-srfi! */
	obj_t BGl__registerzd2srfiz12zc0zz__expander_srfi0z00(obj_t BgL_envz00_2025,
		obj_t BgL_srfiz00_2026)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 162 */
			{	/* Eval/expdsrfi0.scm 164 */
				obj_t BgL_auxz00_2181;

				if (SYMBOLP(BgL_srfiz00_2026))
					{	/* Eval/expdsrfi0.scm 164 */
						BgL_auxz00_2181 = BgL_srfiz00_2026;
					}
				else
					{
						obj_t BgL_auxz00_2184;

						BgL_auxz00_2184 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 6908)),
							BGl_string2482z00zz__expander_srfi0z00,
							BGl_string2480z00zz__expander_srfi0z00, BgL_srfiz00_2026);
						FAILURE(BgL_auxz00_2184, BFALSE, BFALSE);
					}
				return BGl_registerzd2srfiz12zc0zz__expander_srfi0z00(BgL_auxz00_2181);
			}
		}
	}



/* expand-eval-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t BgL_xz00_4,
		obj_t BgL_ez00_5)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 169 */
			return
				BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_xz00_4,
				BgL_ez00_5, BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00);
		}
	}



/* _expand-eval-cond-expand */
	obj_t BGl__expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00(obj_t
		BgL_envz00_2027, obj_t BgL_xz00_2028, obj_t BgL_ez00_2029)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 169 */
			{	/* Eval/expdsrfi0.scm 170 */
				obj_t BgL_auxz00_2199;

				obj_t BgL_auxz00_2190;

				if (PROCEDUREP(BgL_ez00_2029))
					{	/* Eval/expdsrfi0.scm 170 */
						BgL_auxz00_2199 = BgL_ez00_2029;
					}
				else
					{
						obj_t BgL_auxz00_2202;

						BgL_auxz00_2202 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 7175)),
							BGl_string2483z00zz__expander_srfi0z00,
							BGl_string2485z00zz__expander_srfi0z00, BgL_ez00_2029);
						FAILURE(BgL_auxz00_2202, BFALSE, BFALSE);
					}
				{	/* Eval/expdsrfi0.scm 170 */
					bool_t BgL_testz00_2191;

					if (PAIRP(BgL_xz00_2028))
						{	/* Eval/expdsrfi0.scm 170 */
							BgL_testz00_2191 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdsrfi0.scm 170 */
							BgL_testz00_2191 = NULLP(BgL_xz00_2028);
						}
					if (BgL_testz00_2191)
						{	/* Eval/expdsrfi0.scm 170 */
							BgL_auxz00_2190 = BgL_xz00_2028;
						}
					else
						{
							obj_t BgL_auxz00_2195;

							BgL_auxz00_2195 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 7175)),
								BGl_string2483z00zz__expander_srfi0z00,
								BGl_string2484z00zz__expander_srfi0z00, BgL_xz00_2028);
							FAILURE(BgL_auxz00_2195, BFALSE, BFALSE);
				}}
				return
					BGl_expandzd2evalzd2condzd2expandzd2zz__expander_srfi0z00
					(BgL_auxz00_2190, BgL_auxz00_2199);
			}
		}
	}



/* expand-compile-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_6, obj_t BgL_ez00_7)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 175 */
			return
				BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_xz00_6,
				BgL_ez00_7, BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00);
		}
	}



/* _expand-compile-cond-expand */
	obj_t BGl__expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00(obj_t
		BgL_envz00_2030, obj_t BgL_xz00_2031, obj_t BgL_ez00_2032)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 175 */
			{	/* Eval/expdsrfi0.scm 176 */
				obj_t BgL_auxz00_2217;

				obj_t BgL_auxz00_2208;

				if (PROCEDUREP(BgL_ez00_2032))
					{	/* Eval/expdsrfi0.scm 176 */
						BgL_auxz00_2217 = BgL_ez00_2032;
					}
				else
					{
						obj_t BgL_auxz00_2220;

						BgL_auxz00_2220 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 7485)),
							BGl_string2486z00zz__expander_srfi0z00,
							BGl_string2485z00zz__expander_srfi0z00, BgL_ez00_2032);
						FAILURE(BgL_auxz00_2220, BFALSE, BFALSE);
					}
				{	/* Eval/expdsrfi0.scm 176 */
					bool_t BgL_testz00_2209;

					if (PAIRP(BgL_xz00_2031))
						{	/* Eval/expdsrfi0.scm 176 */
							BgL_testz00_2209 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdsrfi0.scm 176 */
							BgL_testz00_2209 = NULLP(BgL_xz00_2031);
						}
					if (BgL_testz00_2209)
						{	/* Eval/expdsrfi0.scm 176 */
							BgL_auxz00_2208 = BgL_xz00_2031;
						}
					else
						{
							obj_t BgL_auxz00_2213;

							BgL_auxz00_2213 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 7485)),
								BGl_string2486z00zz__expander_srfi0z00,
								BGl_string2484z00zz__expander_srfi0z00, BgL_xz00_2031);
							FAILURE(BgL_auxz00_2213, BFALSE, BFALSE);
				}}
				return
					BGl_expandzd2compilezd2condzd2expandzd2zz__expander_srfi0z00
					(BgL_auxz00_2208, BgL_auxz00_2217);
			}
		}
	}



/* compile-srfi? */
	BGL_EXPORTED_DEF bool_t BGl_compilezd2srfizf3z21zz__expander_srfi0z00(obj_t
		BgL_srfiz00_8)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 181 */
			{	/* Eval/expdsrfi0.scm 182 */
				obj_t BgL_g1890z00_1602;

				BgL_g1890z00_1602 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 182 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 182 */
							bgl_mutex_lock(BgL_g1890z00_1602);
						}
					else
						{	/* Eval/expdsrfi0.scm 182 */
							bgl_mutex_timed_lock(BgL_g1890z00_1602, ((long) 0));
			}}}
			{	/* Eval/expdsrfi0.scm 182 */
				obj_t BgL_vz00_1604;

				BgL_vz00_1604 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_srfiz00_8,
					BGl_za2srfizd2compilezd2listza2z00zz__expander_srfi0z00);
				bgl_mutex_unlock(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				return CBOOL(BgL_vz00_1604);
			}
		}
	}



/* _compile-srfi? */
	obj_t BGl__compilezd2srfizf3z21zz__expander_srfi0z00(obj_t BgL_envz00_2033,
		obj_t BgL_srfiz00_2034)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 181 */
			{	/* Eval/expdsrfi0.scm 185 */
				bool_t BgL_auxz00_2232;

				{	/* Eval/expdsrfi0.scm 185 */
					obj_t BgL_auxz00_2233;

					if (SYMBOLP(BgL_srfiz00_2034))
						{	/* Eval/expdsrfi0.scm 185 */
							BgL_auxz00_2233 = BgL_srfiz00_2034;
						}
					else
						{
							obj_t BgL_auxz00_2236;

							BgL_auxz00_2236 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 7901)),
								BGl_string2487z00zz__expander_srfi0z00,
								BGl_string2480z00zz__expander_srfi0z00, BgL_srfiz00_2034);
							FAILURE(BgL_auxz00_2236, BFALSE, BFALSE);
						}
					BgL_auxz00_2232 =
						BGl_compilezd2srfizf3z21zz__expander_srfi0z00(BgL_auxz00_2233);
				}
				return BBOOL(BgL_auxz00_2232);
			}
		}
	}



/* eval-srfi? */
	BGL_EXPORTED_DEF bool_t BGl_evalzd2srfizf3z21zz__expander_srfi0z00(obj_t
		BgL_srfiz00_9)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 190 */
			{	/* Eval/expdsrfi0.scm 191 */
				obj_t BgL_g1890z00_1611;

				BgL_g1890z00_1611 = BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00;
				{	/* Eval/expdsrfi0.scm 191 */

					if ((((long) 0) == ((long) 0)))
						{	/* Eval/expdsrfi0.scm 191 */
							bgl_mutex_lock(BgL_g1890z00_1611);
						}
					else
						{	/* Eval/expdsrfi0.scm 191 */
							bgl_mutex_timed_lock(BgL_g1890z00_1611, ((long) 0));
			}}}
			{	/* Eval/expdsrfi0.scm 191 */
				obj_t BgL_vz00_1613;

				BgL_vz00_1613 =
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_srfiz00_9,
					BGl_za2srfizd2evalzd2listza2z00zz__expander_srfi0z00);
				bgl_mutex_unlock(BGl_za2srfizd2mutexza2zd2zz__expander_srfi0z00);
				return CBOOL(BgL_vz00_1613);
			}
		}
	}



/* _eval-srfi? */
	obj_t BGl__evalzd2srfizf3z21zz__expander_srfi0z00(obj_t BgL_envz00_2035,
		obj_t BgL_srfiz00_2036)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 190 */
			{	/* Eval/expdsrfi0.scm 194 */
				bool_t BgL_auxz00_2249;

				{	/* Eval/expdsrfi0.scm 194 */
					obj_t BgL_auxz00_2250;

					if (SYMBOLP(BgL_srfiz00_2036))
						{	/* Eval/expdsrfi0.scm 194 */
							BgL_auxz00_2250 = BgL_srfiz00_2036;
						}
					else
						{
							obj_t BgL_auxz00_2253;

							BgL_auxz00_2253 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 8271)),
								BGl_string2488z00zz__expander_srfi0z00,
								BGl_string2480z00zz__expander_srfi0z00, BgL_srfiz00_2036);
							FAILURE(BgL_auxz00_2253, BFALSE, BFALSE);
						}
					BgL_auxz00_2249 =
						BGl_evalzd2srfizf3z21zz__expander_srfi0z00(BgL_auxz00_2250);
				}
				return BBOOL(BgL_auxz00_2249);
			}
		}
	}



/* expand-cond-expand */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t BgL_xz00_10,
		obj_t BgL_ez00_11, obj_t BgL_featuresz00_12)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 199 */
			{
				obj_t BgL_clausez00_816;

				obj_t BgL_elsez00_817;

				if (PAIRP(BgL_xz00_10))
					{	/* Eval/expdsrfi0.scm 200 */
						if ((CAR(BgL_xz00_10) == BGl_symbol2493z00zz__expander_srfi0z00))
							{	/* Eval/expdsrfi0.scm 200 */
								if (NULLP(CDR(BgL_xz00_10)))
									{	/* Eval/expdsrfi0.scm 200 */
										return BUNSPEC;
									}
								else
									{	/* Eval/expdsrfi0.scm 200 */
										obj_t BgL_cdrzd21453zd2_824;

										BgL_cdrzd21453zd2_824 = CDR(BgL_xz00_10);
										if (PAIRP(BgL_cdrzd21453zd2_824))
											{	/* Eval/expdsrfi0.scm 200 */
												BgL_clausez00_816 = CAR(BgL_cdrzd21453zd2_824);
												BgL_elsez00_817 = CDR(BgL_cdrzd21453zd2_824);
											BgL_tagzd21441zd2_818:
												{
													obj_t BgL_featurez00_867;

													obj_t BgL_bodyz00_868;

													obj_t BgL_libz00_860;

													obj_t BgL_bodyz00_861;

													obj_t BgL_reqz00_857;

													obj_t BgL_bodyz00_858;

													obj_t BgL_req1z00_849;

													obj_t BgL_bodyz00_850;

													obj_t BgL_req1z00_839;

													obj_t BgL_bodyz00_840;

													obj_t BgL_bodyz00_835;

													if (PAIRP(BgL_clausez00_816))
														{	/* Eval/expdsrfi0.scm 200 */
															if (
																(CAR(BgL_clausez00_816) ==
																	BGl_symbol2494z00zz__expander_srfi0z00))
																{	/* Eval/expdsrfi0.scm 200 */
																	BgL_bodyz00_835 = CDR(BgL_clausez00_816);
																	if (NULLP(BgL_elsez00_817))
																		{	/* Eval/expdsrfi0.scm 207 */
																			obj_t BgL_arg2029z00_999;

																			{	/* Eval/expdsrfi0.scm 207 */
																				obj_t BgL_arg2030z00_1000;

																				BgL_arg2030z00_1000 =
																					MAKE_PAIR
																					(BGl_symbol2489z00zz__expander_srfi0z00,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_bodyz00_835, BNIL));
																				BgL_arg2029z00_999 =
																					BGl_evepairifyz00zz__prognz00
																					(BgL_arg2030z00_1000, BgL_xz00_10);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_11)
																				(BgL_ez00_11, BgL_arg2029z00_999,
																				BgL_ez00_11, BEOA);
																		}
																	else
																		{	/* Eval/expdsrfi0.scm 206 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string2491z00zz__expander_srfi0z00,
																				BGl_string2492z00zz__expander_srfi0z00,
																				BgL_xz00_10);
																		}
																}
															else
																{	/* Eval/expdsrfi0.scm 200 */
																	obj_t BgL_carzd21512zd2_875;

																	BgL_carzd21512zd2_875 =
																		CAR(BgL_clausez00_816);
																	if (PAIRP(BgL_carzd21512zd2_875))
																		{	/* Eval/expdsrfi0.scm 200 */
																			if (
																				(CAR(BgL_carzd21512zd2_875) ==
																					BGl_symbol2496z00zz__expander_srfi0z00))
																				{	/* Eval/expdsrfi0.scm 200 */
																					if (NULLP(CDR(BgL_carzd21512zd2_875)))
																						{	/* Eval/expdsrfi0.scm 200 */
																							obj_t BgL_arg1929z00_879;

																							BgL_arg1929z00_879 =
																								CDR(BgL_clausez00_816);
																							{	/* Eval/expdsrfi0.scm 200 */
																								obj_t BgL_arg2034z00_1642;

																								{	/* Eval/expdsrfi0.scm 200 */
																									obj_t BgL_arg2036z00_1643;

																									BgL_arg2036z00_1643 =
																										MAKE_PAIR
																										(BGl_symbol2489z00zz__expander_srfi0z00,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1929z00_879, BNIL));
																									BgL_arg2034z00_1642 =
																										BGl_evepairifyz00zz__prognz00
																										(BgL_arg2036z00_1643,
																										BgL_xz00_10);
																								}
																								return
																									PROCEDURE_ENTRY(BgL_ez00_11)
																									(BgL_ez00_11,
																									BgL_arg2034z00_1642,
																									BgL_ez00_11, BEOA);
																							}
																						}
																					else
																						{	/* Eval/expdsrfi0.scm 200 */
																							obj_t BgL_cdrzd21532zd2_880;

																							BgL_cdrzd21532zd2_880 =
																								CDR(BgL_carzd21512zd2_875);
																							if (PAIRP(BgL_cdrzd21532zd2_880))
																								{	/* Eval/expdsrfi0.scm 200 */
																									if (NULLP(CDR
																											(BgL_cdrzd21532zd2_880)))
																										{	/* Eval/expdsrfi0.scm 200 */
																											BgL_req1z00_839 =
																												CAR
																												(BgL_cdrzd21532zd2_880);
																											BgL_bodyz00_840 =
																												CDR(BgL_clausez00_816);
																											{	/* Eval/expdsrfi0.scm 212 */
																												obj_t
																													BgL_arg2039z00_1007;
																												{	/* Eval/expdsrfi0.scm 212 */
																													obj_t
																														BgL_arg2040z00_1008;
																													{	/* Eval/expdsrfi0.scm 212 */
																														obj_t
																															BgL_arg2041z00_1009;
																														obj_t
																															BgL_arg2042z00_1010;
																														BgL_arg2041z00_1009
																															=
																															BGl_symbol2493z00zz__expander_srfi0z00;
																														{	/* Eval/expdsrfi0.scm 213 */
																															obj_t
																																BgL_arg2043z00_1011;
																															obj_t
																																BgL_arg2044z00_1012;
																															BgL_arg2043z00_1011
																																=
																																MAKE_PAIR
																																(BgL_req1z00_839,
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_bodyz00_840,
																																	BNIL));
																															BgL_arg2044z00_1012
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_elsez00_817,
																																BNIL);
																															{	/* Eval/expdsrfi0.scm 212 */
																																obj_t
																																	BgL_list2045z00_1013;
																																BgL_list2045z00_1013
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2044z00_1012,
																																	BNIL);
																																BgL_arg2042z00_1010
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2043z00_1011,
																																	BgL_list2045z00_1013);
																															}
																														}
																														BgL_arg2040z00_1008
																															=
																															MAKE_PAIR
																															(BgL_arg2041z00_1009,
																															BgL_arg2042z00_1010);
																													}
																													BgL_arg2039z00_1007 =
																														BGl_evepairifyz00zz__prognz00
																														(BgL_arg2040z00_1008,
																														BgL_xz00_10);
																												}
																												return
																													PROCEDURE_ENTRY
																													(BgL_ez00_11)
																													(BgL_ez00_11,
																													BgL_arg2039z00_1007,
																													BgL_ez00_11, BEOA);
																											}
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 200 */
																											obj_t
																												BgL_cdrzd21559zd2_885;
																											BgL_cdrzd21559zd2_885 =
																												CDR(CAR
																												(BgL_clausez00_816));
																											{	/* Eval/expdsrfi0.scm 200 */
																												obj_t
																													BgL_cdrzd21565zd2_886;
																												BgL_cdrzd21565zd2_886 =
																													CDR
																													(BgL_cdrzd21559zd2_885);
																												if (PAIRP
																													(BgL_cdrzd21565zd2_886))
																													{	/* Eval/expdsrfi0.scm 200 */
																														return
																															BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00
																															(BgL_xz00_10,
																															BgL_ez00_11,
																															CAR
																															(BgL_cdrzd21559zd2_885),
																															CAR
																															(BgL_cdrzd21565zd2_886),
																															CDR
																															(BgL_cdrzd21565zd2_886),
																															CDR
																															(BgL_clausez00_816),
																															BgL_elsez00_817);
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 200 */
																														obj_t
																															BgL_carzd21635zd2_892;
																														BgL_carzd21635zd2_892
																															=
																															CAR
																															(BgL_clausez00_816);
																														if (SYMBOLP
																															(BgL_carzd21635zd2_892))
																															{	/* Eval/expdsrfi0.scm 200 */
																																BgL_featurez00_867
																																	=
																																	BgL_carzd21635zd2_892;
																																BgL_bodyz00_868
																																	=
																																	CDR
																																	(BgL_clausez00_816);
																															BgL_tagzd21486zd2_869:
																																{	/* Eval/expdsrfi0.scm 248 */
																																	obj_t
																																		BgL_arg2097z00_1060;
																																	{	/* Eval/expdsrfi0.scm 248 */
																																		obj_t
																																			BgL_arg2098z00_1061;
																																		if (CBOOL
																																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																				(BgL_featurez00_867,
																																					BgL_featuresz00_12)))
																																			{	/* Eval/expdsrfi0.scm 248 */
																																				BgL_arg2098z00_1061
																																					=
																																					MAKE_PAIR
																																					(BGl_symbol2489z00zz__expander_srfi0z00,
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_bodyz00_868,
																																						BNIL));
																																			}
																																		else
																																			{	/* Eval/expdsrfi0.scm 248 */
																																				BgL_arg2098z00_1061
																																					=
																																					MAKE_PAIR
																																					(BGl_symbol2493z00zz__expander_srfi0z00,
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_elsez00_817,
																																						BNIL));
																																			}
																																		BgL_arg2097z00_1060
																																			=
																																			BGl_evepairifyz00zz__prognz00
																																			(BgL_arg2098z00_1061,
																																			BgL_xz00_10);
																																	}
																																	return
																																		PROCEDURE_ENTRY
																																		(BgL_ez00_11)
																																		(BgL_ez00_11,
																																		BgL_arg2097z00_1060,
																																		BgL_ez00_11,
																																		BEOA);
																																}
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 200 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2491z00zz__expander_srfi0z00,
																																	BGl_string2492z00zz__expander_srfi0z00,
																																	BgL_xz00_10);
																															}
																													}
																											}
																										}
																								}
																							else
																								{	/* Eval/expdsrfi0.scm 200 */
																									obj_t BgL_carzd21714zd2_897;

																									BgL_carzd21714zd2_897 =
																										CAR(BgL_clausez00_816);
																									if (SYMBOLP
																										(BgL_carzd21714zd2_897))
																										{
																											obj_t BgL_bodyz00_2345;

																											obj_t BgL_featurez00_2344;

																											BgL_featurez00_2344 =
																												BgL_carzd21714zd2_897;
																											BgL_bodyz00_2345 =
																												CDR(BgL_clausez00_816);
																											BgL_bodyz00_868 =
																												BgL_bodyz00_2345;
																											BgL_featurez00_867 =
																												BgL_featurez00_2344;
																											goto
																												BgL_tagzd21486zd2_869;
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 200 */
																											return
																												BGl_errorz00zz__errorz00
																												(BGl_string2491z00zz__expander_srfi0z00,
																												BGl_string2492z00zz__expander_srfi0z00,
																												BgL_xz00_10);
																										}
																								}
																						}
																				}
																			else
																				{	/* Eval/expdsrfi0.scm 200 */
																					if (
																						(CAR(BgL_carzd21512zd2_875) ==
																							BGl_symbol2498z00zz__expander_srfi0z00))
																						{	/* Eval/expdsrfi0.scm 200 */
																							if (NULLP(CDR
																									(BgL_carzd21512zd2_875)))
																								{	/* Eval/expdsrfi0.scm 200 */
																									obj_t BgL_arg2047z00_1677;

																									{	/* Eval/expdsrfi0.scm 200 */
																										obj_t BgL_arg2048z00_1678;

																										BgL_arg2048z00_1678 =
																											MAKE_PAIR
																											(BGl_symbol2493z00zz__expander_srfi0z00,
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_elsez00_817, BNIL));
																										BgL_arg2047z00_1677 =
																											BGl_evepairifyz00zz__prognz00
																											(BgL_arg2048z00_1678,
																											BgL_xz00_10);
																									}
																									return
																										PROCEDURE_ENTRY(BgL_ez00_11)
																										(BgL_ez00_11,
																										BgL_arg2047z00_1677,
																										BgL_ez00_11, BEOA);
																								}
																							else
																								{	/* Eval/expdsrfi0.scm 200 */
																									obj_t BgL_cdrzd21774zd2_906;

																									BgL_cdrzd21774zd2_906 =
																										CDR(CAR(BgL_clausez00_816));
																									if (PAIRP
																										(BgL_cdrzd21774zd2_906))
																										{	/* Eval/expdsrfi0.scm 200 */
																											if (NULLP(CDR
																													(BgL_cdrzd21774zd2_906)))
																												{	/* Eval/expdsrfi0.scm 200 */
																													BgL_req1z00_849 =
																														CAR
																														(BgL_cdrzd21774zd2_906);
																													BgL_bodyz00_850 =
																														CDR
																														(BgL_clausez00_816);
																													{	/* Eval/expdsrfi0.scm 222 */
																														obj_t
																															BgL_arg2053z00_1019;
																														{	/* Eval/expdsrfi0.scm 222 */
																															obj_t
																																BgL_arg2054z00_1020;
																															{	/* Eval/expdsrfi0.scm 222 */
																																obj_t
																																	BgL_arg2055z00_1021;
																																obj_t
																																	BgL_arg2056z00_1022;
																																BgL_arg2055z00_1021
																																	=
																																	BGl_symbol2493z00zz__expander_srfi0z00;
																																{	/* Eval/expdsrfi0.scm 223 */
																																	obj_t
																																		BgL_arg2057z00_1023;
																																	obj_t
																																		BgL_arg2058z00_1024;
																																	BgL_arg2057z00_1023
																																		=
																																		MAKE_PAIR
																																		(BgL_req1z00_849,
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_bodyz00_850,
																																			BNIL));
																																	BgL_arg2058z00_1024
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_elsez00_817,
																																		BNIL);
																																	{	/* Eval/expdsrfi0.scm 222 */
																																		obj_t
																																			BgL_list2059z00_1025;
																																		BgL_list2059z00_1025
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2058z00_1024,
																																			BNIL);
																																		BgL_arg2056z00_1022
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg2057z00_1023,
																																			BgL_list2059z00_1025);
																																	}
																																}
																																BgL_arg2054z00_1020
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2055z00_1021,
																																	BgL_arg2056z00_1022);
																															}
																															BgL_arg2053z00_1019
																																=
																																BGl_evepairifyz00zz__prognz00
																																(BgL_arg2054z00_1020,
																																BgL_xz00_10);
																														}
																														return
																															PROCEDURE_ENTRY
																															(BgL_ez00_11)
																															(BgL_ez00_11,
																															BgL_arg2053z00_1019,
																															BgL_ez00_11,
																															BEOA);
																													}
																												}
																											else
																												{	/* Eval/expdsrfi0.scm 200 */
																													obj_t
																														BgL_cdrzd21807zd2_912;
																													BgL_cdrzd21807zd2_912
																														=
																														CDR
																														(BgL_cdrzd21774zd2_906);
																													if (PAIRP
																														(BgL_cdrzd21807zd2_912))
																														{	/* Eval/expdsrfi0.scm 200 */
																															return
																																BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00
																																(BgL_xz00_10,
																																BgL_ez00_11,
																																CAR
																																(BgL_cdrzd21774zd2_906),
																																CAR
																																(BgL_cdrzd21807zd2_912),
																																CDR
																																(BgL_cdrzd21807zd2_912),
																																CDR
																																(BgL_clausez00_816),
																																BgL_elsez00_817);
																														}
																													else
																														{	/* Eval/expdsrfi0.scm 200 */
																															obj_t
																																BgL_carzd21843zd2_918;
																															BgL_carzd21843zd2_918
																																=
																																CAR
																																(BgL_clausez00_816);
																															if (SYMBOLP
																																(BgL_carzd21843zd2_918))
																																{
																																	obj_t
																																		BgL_bodyz00_2389;
																																	obj_t
																																		BgL_featurez00_2388;
																																	BgL_featurez00_2388
																																		=
																																		BgL_carzd21843zd2_918;
																																	BgL_bodyz00_2389
																																		=
																																		CDR
																																		(BgL_clausez00_816);
																																	BgL_bodyz00_868
																																		=
																																		BgL_bodyz00_2389;
																																	BgL_featurez00_867
																																		=
																																		BgL_featurez00_2388;
																																	goto
																																		BgL_tagzd21486zd2_869;
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 200 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BGl_string2491z00zz__expander_srfi0z00,
																																		BGl_string2492z00zz__expander_srfi0z00,
																																		BgL_xz00_10);
																																}
																														}
																												}
																										}
																									else
																										{	/* Eval/expdsrfi0.scm 200 */
																											obj_t
																												BgL_carzd21888zd2_923;
																											BgL_carzd21888zd2_923 =
																												CAR(BgL_clausez00_816);
																											if (SYMBOLP
																												(BgL_carzd21888zd2_923))
																												{
																													obj_t
																														BgL_bodyz00_2396;
																													obj_t
																														BgL_featurez00_2395;
																													BgL_featurez00_2395 =
																														BgL_carzd21888zd2_923;
																													BgL_bodyz00_2396 =
																														CDR
																														(BgL_clausez00_816);
																													BgL_bodyz00_868 =
																														BgL_bodyz00_2396;
																													BgL_featurez00_867 =
																														BgL_featurez00_2395;
																													goto
																														BgL_tagzd21486zd2_869;
																												}
																											else
																												{	/* Eval/expdsrfi0.scm 200 */
																													return
																														BGl_errorz00zz__errorz00
																														(BGl_string2491z00zz__expander_srfi0z00,
																														BGl_string2492z00zz__expander_srfi0z00,
																														BgL_xz00_10);
																												}
																										}
																								}
																						}
																					else
																						{	/* Eval/expdsrfi0.scm 200 */
																							obj_t BgL_carzd21926zd2_928;

																							BgL_carzd21926zd2_928 =
																								CAR(BgL_clausez00_816);
																							{	/* Eval/expdsrfi0.scm 200 */
																								obj_t BgL_cdrzd21930zd2_929;

																								BgL_cdrzd21930zd2_929 =
																									CDR(BgL_carzd21926zd2_928);
																								if (
																									(CAR(BgL_carzd21926zd2_928) ==
																										BGl_symbol2500z00zz__expander_srfi0z00))
																									{	/* Eval/expdsrfi0.scm 200 */
																										if (PAIRP
																											(BgL_cdrzd21930zd2_929))
																											{	/* Eval/expdsrfi0.scm 200 */
																												if (NULLP(CDR
																														(BgL_cdrzd21930zd2_929)))
																													{	/* Eval/expdsrfi0.scm 200 */
																														BgL_reqz00_857 =
																															CAR
																															(BgL_cdrzd21930zd2_929);
																														BgL_bodyz00_858 =
																															CDR
																															(BgL_clausez00_816);
																														{	/* Eval/expdsrfi0.scm 230 */
																															obj_t
																																BgL_arg2061z00_1027;
																															{	/* Eval/expdsrfi0.scm 230 */
																																obj_t
																																	BgL_arg2062z00_1028;
																																{	/* Eval/expdsrfi0.scm 230 */
																																	obj_t
																																		BgL_arg2063z00_1029;
																																	obj_t
																																		BgL_arg2064z00_1030;
																																	BgL_arg2063z00_1029
																																		=
																																		BGl_symbol2493z00zz__expander_srfi0z00;
																																	{	/* Eval/expdsrfi0.scm 231 */
																																		obj_t
																																			BgL_arg2065z00_1031;
																																		obj_t
																																			BgL_arg2066z00_1032;
																																		{	/* Eval/expdsrfi0.scm 231 */
																																			obj_t
																																				BgL_arg2070z00_1036;
																																			{	/* Eval/expdsrfi0.scm 231 */
																																				obj_t
																																					BgL_arg2072z00_1037;
																																				BgL_arg2072z00_1037
																																					=
																																					MAKE_PAIR
																																					(BGl_symbol2493z00zz__expander_srfi0z00,
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_elsez00_817,
																																						BNIL));
																																				{	/* Eval/expdsrfi0.scm 231 */
																																					obj_t
																																						BgL_list2074z00_1039;
																																					BgL_list2074z00_1039
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg2070z00_1036
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg2072z00_1037,
																																						BgL_list2074z00_1039);
																																				}
																																			}
																																			BgL_arg2065z00_1031
																																				=
																																				MAKE_PAIR
																																				(BgL_reqz00_857,
																																				BgL_arg2070z00_1036);
																																		}
																																		BgL_arg2066z00_1032
																																			=
																																			MAKE_PAIR
																																			(BGl_symbol2494z00zz__expander_srfi0z00,
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_bodyz00_858,
																																				BNIL));
																																		{	/* Eval/expdsrfi0.scm 230 */
																																			obj_t
																																				BgL_list2068z00_1034;
																																			{	/* Eval/expdsrfi0.scm 230 */
																																				obj_t
																																					BgL_arg2069z00_1035;
																																				BgL_arg2069z00_1035
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_list2068z00_1034
																																					=
																																					MAKE_PAIR
																																					(BgL_arg2066z00_1032,
																																					BgL_arg2069z00_1035);
																																			}
																																			BgL_arg2064z00_1030
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg2065z00_1031,
																																				BgL_list2068z00_1034);
																																		}
																																	}
																																	BgL_arg2062z00_1028
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2063z00_1029,
																																		BgL_arg2064z00_1030);
																																}
																																BgL_arg2061z00_1027
																																	=
																																	BGl_evepairifyz00zz__prognz00
																																	(BgL_arg2062z00_1028,
																																	BgL_xz00_10);
																															}
																															return
																																PROCEDURE_ENTRY
																																(BgL_ez00_11)
																																(BgL_ez00_11,
																																BgL_arg2061z00_1027,
																																BgL_ez00_11,
																																BEOA);
																														}
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 200 */
																														if (SYMBOLP
																															(BgL_carzd21926zd2_928))
																															{
																																obj_t
																																	BgL_bodyz00_2428;
																																obj_t
																																	BgL_featurez00_2427;
																																BgL_featurez00_2427
																																	=
																																	BgL_carzd21926zd2_928;
																																BgL_bodyz00_2428
																																	=
																																	CDR
																																	(BgL_clausez00_816);
																																BgL_bodyz00_868
																																	=
																																	BgL_bodyz00_2428;
																																BgL_featurez00_867
																																	=
																																	BgL_featurez00_2427;
																																goto
																																	BgL_tagzd21486zd2_869;
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 200 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2491z00zz__expander_srfi0z00,
																																	BGl_string2492z00zz__expander_srfi0z00,
																																	BgL_xz00_10);
																															}
																													}
																											}
																										else
																											{	/* Eval/expdsrfi0.scm 200 */
																												if (SYMBOLP
																													(BgL_carzd21926zd2_928))
																													{
																														obj_t
																															BgL_bodyz00_2434;
																														obj_t
																															BgL_featurez00_2433;
																														BgL_featurez00_2433
																															=
																															BgL_carzd21926zd2_928;
																														BgL_bodyz00_2434 =
																															CDR
																															(BgL_clausez00_816);
																														BgL_bodyz00_868 =
																															BgL_bodyz00_2434;
																														BgL_featurez00_867 =
																															BgL_featurez00_2433;
																														goto
																															BgL_tagzd21486zd2_869;
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 200 */
																														return
																															BGl_errorz00zz__errorz00
																															(BGl_string2491z00zz__expander_srfi0z00,
																															BGl_string2492z00zz__expander_srfi0z00,
																															BgL_xz00_10);
																													}
																											}
																									}
																								else
																									{	/* Eval/expdsrfi0.scm 200 */
																										obj_t BgL_cdrzd21995zd2_943;

																										BgL_cdrzd21995zd2_943 =
																											CDR
																											(BgL_carzd21926zd2_928);
																										if ((CAR
																												(BgL_carzd21926zd2_928)
																												==
																												BGl_symbol2502z00zz__expander_srfi0z00))
																											{	/* Eval/expdsrfi0.scm 200 */
																												if (PAIRP
																													(BgL_cdrzd21995zd2_943))
																													{	/* Eval/expdsrfi0.scm 200 */
																														obj_t
																															BgL_carzd21997zd2_946;
																														BgL_carzd21997zd2_946
																															=
																															CAR
																															(BgL_cdrzd21995zd2_943);
																														if (SYMBOLP
																															(BgL_carzd21997zd2_946))
																															{	/* Eval/expdsrfi0.scm 200 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21995zd2_943)))
																																	{	/* Eval/expdsrfi0.scm 200 */
																																		BgL_libz00_860
																																			=
																																			BgL_carzd21997zd2_946;
																																		BgL_bodyz00_861
																																			=
																																			CDR
																																			(BgL_clausez00_816);
																																		{	/* Eval/expdsrfi0.scm 236 */
																																			obj_t
																																				BgL_arg2080z00_1044;
																																			{	/* Eval/expdsrfi0.scm 236 */
																																				obj_t
																																					BgL_arg2081z00_1045;
																																				if (CBOOL(BGl_libraryzd2existszf3z21zz__libraryz00(BgL_libz00_860, BNIL)))
																																					{	/* Eval/expdsrfi0.scm 236 */
																																						BgL_arg2081z00_1045
																																							=
																																							MAKE_PAIR
																																							(BGl_symbol2489z00zz__expander_srfi0z00,
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_bodyz00_861,
																																								BNIL));
																																					}
																																				else
																																					{	/* Eval/expdsrfi0.scm 236 */
																																						BgL_arg2081z00_1045
																																							=
																																							MAKE_PAIR
																																							(BGl_symbol2493z00zz__expander_srfi0z00,
																																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_elsez00_817,
																																								BNIL));
																																					}
																																				BgL_arg2080z00_1044
																																					=
																																					BGl_evepairifyz00zz__prognz00
																																					(BgL_arg2081z00_1045,
																																					BgL_xz00_10);
																																			}
																																			return
																																				PROCEDURE_ENTRY
																																				(BgL_ez00_11)
																																				(BgL_ez00_11,
																																				BgL_arg2080z00_1044,
																																				BgL_ez00_11,
																																				BEOA);
																																		}
																																	}
																																else
																																	{	/* Eval/expdsrfi0.scm 200 */
																																		obj_t
																																			BgL_carzd22014zd2_950;
																																		BgL_carzd22014zd2_950
																																			=
																																			CAR
																																			(BgL_clausez00_816);
																																		if (SYMBOLP
																																			(BgL_carzd22014zd2_950))
																																			{
																																				obj_t
																																					BgL_bodyz00_2464;
																																				obj_t
																																					BgL_featurez00_2463;
																																				BgL_featurez00_2463
																																					=
																																					BgL_carzd22014zd2_950;
																																				BgL_bodyz00_2464
																																					=
																																					CDR
																																					(BgL_clausez00_816);
																																				BgL_bodyz00_868
																																					=
																																					BgL_bodyz00_2464;
																																				BgL_featurez00_867
																																					=
																																					BgL_featurez00_2463;
																																				goto
																																					BgL_tagzd21486zd2_869;
																																			}
																																		else
																																			{	/* Eval/expdsrfi0.scm 200 */
																																				return
																																					BGl_errorz00zz__errorz00
																																					(BGl_string2491z00zz__expander_srfi0z00,
																																					BGl_string2492z00zz__expander_srfi0z00,
																																					BgL_xz00_10);
																																			}
																																	}
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 200 */
																																obj_t
																																	BgL_carzd22031zd2_954;
																																BgL_carzd22031zd2_954
																																	=
																																	CAR
																																	(BgL_clausez00_816);
																																if (SYMBOLP
																																	(BgL_carzd22031zd2_954))
																																	{
																																		obj_t
																																			BgL_bodyz00_2471;
																																		obj_t
																																			BgL_featurez00_2470;
																																		BgL_featurez00_2470
																																			=
																																			BgL_carzd22031zd2_954;
																																		BgL_bodyz00_2471
																																			=
																																			CDR
																																			(BgL_clausez00_816);
																																		BgL_bodyz00_868
																																			=
																																			BgL_bodyz00_2471;
																																		BgL_featurez00_867
																																			=
																																			BgL_featurez00_2470;
																																		goto
																																			BgL_tagzd21486zd2_869;
																																	}
																																else
																																	{	/* Eval/expdsrfi0.scm 200 */
																																		return
																																			BGl_errorz00zz__errorz00
																																			(BGl_string2491z00zz__expander_srfi0z00,
																																			BGl_string2492z00zz__expander_srfi0z00,
																																			BgL_xz00_10);
																																	}
																															}
																													}
																												else
																													{	/* Eval/expdsrfi0.scm 200 */
																														obj_t
																															BgL_carzd22048zd2_957;
																														BgL_carzd22048zd2_957
																															=
																															CAR
																															(BgL_clausez00_816);
																														if (SYMBOLP
																															(BgL_carzd22048zd2_957))
																															{
																																obj_t
																																	BgL_bodyz00_2478;
																																obj_t
																																	BgL_featurez00_2477;
																																BgL_featurez00_2477
																																	=
																																	BgL_carzd22048zd2_957;
																																BgL_bodyz00_2478
																																	=
																																	CDR
																																	(BgL_clausez00_816);
																																BgL_bodyz00_868
																																	=
																																	BgL_bodyz00_2478;
																																BgL_featurez00_867
																																	=
																																	BgL_featurez00_2477;
																																goto
																																	BgL_tagzd21486zd2_869;
																															}
																														else
																															{	/* Eval/expdsrfi0.scm 200 */
																																return
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2491z00zz__expander_srfi0z00,
																																	BGl_string2492z00zz__expander_srfi0z00,
																																	BgL_xz00_10);
																															}
																													}
																											}
																										else
																											{	/* Eval/expdsrfi0.scm 200 */
																												obj_t
																													BgL_carzd22061zd2_960;
																												BgL_carzd22061zd2_960 =
																													CAR
																													(BgL_clausez00_816);
																												{	/* Eval/expdsrfi0.scm 200 */
																													obj_t
																														BgL_cdrzd22066zd2_961;
																													BgL_cdrzd22066zd2_961
																														=
																														CDR
																														(BgL_carzd22061zd2_960);
																													if ((CAR
																															(BgL_carzd22061zd2_960)
																															==
																															BGl_symbol2504z00zz__expander_srfi0z00))
																														{	/* Eval/expdsrfi0.scm 200 */
																															if (PAIRP
																																(BgL_cdrzd22066zd2_961))
																																{	/* Eval/expdsrfi0.scm 200 */
																																	obj_t
																																		BgL_cdrzd22070zd2_964;
																																	BgL_cdrzd22070zd2_964
																																		=
																																		CDR
																																		(BgL_cdrzd22066zd2_961);
																																	if (PAIRP
																																		(BgL_cdrzd22070zd2_964))
																																		{	/* Eval/expdsrfi0.scm 200 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd22070zd2_964)))
																																				{	/* Eval/expdsrfi0.scm 200 */
																																					obj_t
																																						BgL_arg1999z00_967;
																																					obj_t
																																						BgL_arg2000z00_968;
																																					obj_t
																																						BgL_arg2001z00_969;
																																					BgL_arg1999z00_967
																																						=
																																						CAR
																																						(BgL_cdrzd22066zd2_961);
																																					BgL_arg2000z00_968
																																						=
																																						CAR
																																						(BgL_cdrzd22070zd2_964);
																																					BgL_arg2001z00_969
																																						=
																																						CDR
																																						(BgL_clausez00_816);
																																					{	/* Eval/expdsrfi0.scm 200 */
																																						obj_t
																																							BgL_arg2089z00_1752;
																																						{	/* Eval/expdsrfi0.scm 200 */
																																							obj_t
																																								BgL_arg2090z00_1753;
																																							if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BGl_bigloozd2configzd2zz__configurez00(BgL_arg1999z00_967), BgL_arg2000z00_968))
																																								{	/* Eval/expdsrfi0.scm 200 */
																																									BgL_arg2090z00_1753
																																										=
																																										MAKE_PAIR
																																										(BGl_symbol2489z00zz__expander_srfi0z00,
																																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_arg2001z00_969,
																																											BNIL));
																																								}
																																							else
																																								{	/* Eval/expdsrfi0.scm 200 */
																																									BgL_arg2090z00_1753
																																										=
																																										MAKE_PAIR
																																										(BGl_symbol2493z00zz__expander_srfi0z00,
																																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_elsez00_817,
																																											BNIL));
																																								}
																																							BgL_arg2089z00_1752
																																								=
																																								BGl_evepairifyz00zz__prognz00
																																								(BgL_arg2090z00_1753,
																																								BgL_xz00_10);
																																						}
																																						return
																																							PROCEDURE_ENTRY
																																							(BgL_ez00_11)
																																							(BgL_ez00_11,
																																							BgL_arg2089z00_1752,
																																							BgL_ez00_11,
																																							BEOA);
																																					}
																																				}
																																			else
																																				{	/* Eval/expdsrfi0.scm 200 */
																																					if (SYMBOLP(BgL_carzd22061zd2_960))
																																						{
																																							obj_t
																																								BgL_bodyz00_2510;
																																							obj_t
																																								BgL_featurez00_2509;
																																							BgL_featurez00_2509
																																								=
																																								BgL_carzd22061zd2_960;
																																							BgL_bodyz00_2510
																																								=
																																								CDR
																																								(BgL_clausez00_816);
																																							BgL_bodyz00_868
																																								=
																																								BgL_bodyz00_2510;
																																							BgL_featurez00_867
																																								=
																																								BgL_featurez00_2509;
																																							goto
																																								BgL_tagzd21486zd2_869;
																																						}
																																					else
																																						{	/* Eval/expdsrfi0.scm 200 */
																																							return
																																								BGl_errorz00zz__errorz00
																																								(BGl_string2491z00zz__expander_srfi0z00,
																																								BGl_string2492z00zz__expander_srfi0z00,
																																								BgL_xz00_10);
																																						}
																																				}
																																		}
																																	else
																																		{	/* Eval/expdsrfi0.scm 200 */
																																			if (SYMBOLP(BgL_carzd22061zd2_960))
																																				{
																																					obj_t
																																						BgL_bodyz00_2516;
																																					obj_t
																																						BgL_featurez00_2515;
																																					BgL_featurez00_2515
																																						=
																																						BgL_carzd22061zd2_960;
																																					BgL_bodyz00_2516
																																						=
																																						CDR
																																						(BgL_clausez00_816);
																																					BgL_bodyz00_868
																																						=
																																						BgL_bodyz00_2516;
																																					BgL_featurez00_867
																																						=
																																						BgL_featurez00_2515;
																																					goto
																																						BgL_tagzd21486zd2_869;
																																				}
																																			else
																																				{	/* Eval/expdsrfi0.scm 200 */
																																					return
																																						BGl_errorz00zz__errorz00
																																						(BGl_string2491z00zz__expander_srfi0z00,
																																						BGl_string2492z00zz__expander_srfi0z00,
																																						BgL_xz00_10);
																																				}
																																		}
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 200 */
																																	if (SYMBOLP
																																		(BgL_carzd22061zd2_960))
																																		{
																																			obj_t
																																				BgL_bodyz00_2522;
																																			obj_t
																																				BgL_featurez00_2521;
																																			BgL_featurez00_2521
																																				=
																																				BgL_carzd22061zd2_960;
																																			BgL_bodyz00_2522
																																				=
																																				CDR
																																				(BgL_clausez00_816);
																																			BgL_bodyz00_868
																																				=
																																				BgL_bodyz00_2522;
																																			BgL_featurez00_867
																																				=
																																				BgL_featurez00_2521;
																																			goto
																																				BgL_tagzd21486zd2_869;
																																		}
																																	else
																																		{	/* Eval/expdsrfi0.scm 200 */
																																			return
																																				BGl_errorz00zz__errorz00
																																				(BGl_string2491z00zz__expander_srfi0z00,
																																				BGl_string2492z00zz__expander_srfi0z00,
																																				BgL_xz00_10);
																																		}
																																}
																														}
																													else
																														{	/* Eval/expdsrfi0.scm 200 */
																															if (SYMBOLP
																																(BgL_carzd22061zd2_960))
																																{
																																	obj_t
																																		BgL_bodyz00_2528;
																																	obj_t
																																		BgL_featurez00_2527;
																																	BgL_featurez00_2527
																																		=
																																		BgL_carzd22061zd2_960;
																																	BgL_bodyz00_2528
																																		=
																																		CDR
																																		(BgL_clausez00_816);
																																	BgL_bodyz00_868
																																		=
																																		BgL_bodyz00_2528;
																																	BgL_featurez00_867
																																		=
																																		BgL_featurez00_2527;
																																	goto
																																		BgL_tagzd21486zd2_869;
																																}
																															else
																																{	/* Eval/expdsrfi0.scm 200 */
																																	return
																																		BGl_errorz00zz__errorz00
																																		(BGl_string2491z00zz__expander_srfi0z00,
																																		BGl_string2492z00zz__expander_srfi0z00,
																																		BgL_xz00_10);
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
																		{	/* Eval/expdsrfi0.scm 200 */
																			if (SYMBOLP(BgL_carzd21512zd2_875))
																				{
																					obj_t BgL_bodyz00_2534;

																					obj_t BgL_featurez00_2533;

																					BgL_featurez00_2533 =
																						BgL_carzd21512zd2_875;
																					BgL_bodyz00_2534 =
																						CDR(BgL_clausez00_816);
																					BgL_bodyz00_868 = BgL_bodyz00_2534;
																					BgL_featurez00_867 =
																						BgL_featurez00_2533;
																					goto BgL_tagzd21486zd2_869;
																				}
																			else
																				{	/* Eval/expdsrfi0.scm 200 */
																					return
																						BGl_errorz00zz__errorz00
																						(BGl_string2491z00zz__expander_srfi0z00,
																						BGl_string2492z00zz__expander_srfi0z00,
																						BgL_xz00_10);
																				}
																		}
																}
														}
													else
														{	/* Eval/expdsrfi0.scm 200 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2491z00zz__expander_srfi0z00,
																BGl_string2492z00zz__expander_srfi0z00,
																BgL_xz00_10);
														}
												}
											}
										else
											{	/* Eval/expdsrfi0.scm 200 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2491z00zz__expander_srfi0z00,
													BGl_string2492z00zz__expander_srfi0z00, BgL_xz00_10);
											}
									}
							}
						else
							{	/* Eval/expdsrfi0.scm 200 */
								obj_t BgL_cdrzd21465zd2_829;

								BgL_cdrzd21465zd2_829 = CDR(BgL_xz00_10);
								if (PAIRP(BgL_cdrzd21465zd2_829))
									{
										obj_t BgL_elsez00_2546;

										obj_t BgL_clausez00_2544;

										BgL_clausez00_2544 = CAR(BgL_cdrzd21465zd2_829);
										BgL_elsez00_2546 = CDR(BgL_cdrzd21465zd2_829);
										BgL_elsez00_817 = BgL_elsez00_2546;
										BgL_clausez00_816 = BgL_clausez00_2544;
										goto BgL_tagzd21441zd2_818;
									}
								else
									{	/* Eval/expdsrfi0.scm 200 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2491z00zz__expander_srfi0z00,
											BGl_string2492z00zz__expander_srfi0z00, BgL_xz00_10);
									}
							}
					}
				else
					{	/* Eval/expdsrfi0.scm 200 */
						return
							BGl_errorz00zz__errorz00(BGl_string2491z00zz__expander_srfi0z00,
							BGl_string2492z00zz__expander_srfi0z00, BgL_xz00_10);
					}
			}
		}
	}



/* _expand-cond-expand */
	obj_t BGl__expandzd2condzd2expandz00zz__expander_srfi0z00(obj_t
		BgL_envz00_2037, obj_t BgL_xz00_2038, obj_t BgL_ez00_2039,
		obj_t BgL_featuresz00_2040)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 199 */
			{	/* Eval/expdsrfi0.scm 200 */
				obj_t BgL_auxz00_2566;

				obj_t BgL_auxz00_2559;

				obj_t BgL_auxz00_2550;

				{	/* Eval/expdsrfi0.scm 200 */
					bool_t BgL_testz00_2567;

					if (PAIRP(BgL_featuresz00_2040))
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_testz00_2567 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_testz00_2567 = NULLP(BgL_featuresz00_2040);
						}
					if (BgL_testz00_2567)
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_auxz00_2566 = BgL_featuresz00_2040;
						}
					else
						{
							obj_t BgL_auxz00_2571;

							BgL_auxz00_2571 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 8545)),
								BGl_string2506z00zz__expander_srfi0z00,
								BGl_string2484z00zz__expander_srfi0z00, BgL_featuresz00_2040);
							FAILURE(BgL_auxz00_2571, BFALSE, BFALSE);
				}}
				if (PROCEDUREP(BgL_ez00_2039))
					{	/* Eval/expdsrfi0.scm 200 */
						BgL_auxz00_2559 = BgL_ez00_2039;
					}
				else
					{
						obj_t BgL_auxz00_2562;

						BgL_auxz00_2562 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 8545)),
							BGl_string2506z00zz__expander_srfi0z00,
							BGl_string2485z00zz__expander_srfi0z00, BgL_ez00_2039);
						FAILURE(BgL_auxz00_2562, BFALSE, BFALSE);
					}
				{	/* Eval/expdsrfi0.scm 200 */
					bool_t BgL_testz00_2551;

					if (PAIRP(BgL_xz00_2038))
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_testz00_2551 = ((bool_t) 1);
						}
					else
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_testz00_2551 = NULLP(BgL_xz00_2038);
						}
					if (BgL_testz00_2551)
						{	/* Eval/expdsrfi0.scm 200 */
							BgL_auxz00_2550 = BgL_xz00_2038;
						}
					else
						{
							obj_t BgL_auxz00_2555;

							BgL_auxz00_2555 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2478z00zz__expander_srfi0z00, BINT(((long) 8545)),
								BGl_string2506z00zz__expander_srfi0z00,
								BGl_string2484z00zz__expander_srfi0z00, BgL_xz00_2038);
							FAILURE(BgL_auxz00_2555, BFALSE, BFALSE);
				}}
				return
					BGl_expandzd2condzd2expandz00zz__expander_srfi0z00(BgL_auxz00_2550,
					BgL_auxz00_2559, BgL_auxz00_2566);
			}
		}
	}



/* expand-cond-expand-and */
	obj_t BGl_expandzd2condzd2expandzd2andzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14, obj_t BgL_req1z00_15, obj_t BgL_req2z00_16,
		obj_t BgL_reqsz00_17, obj_t BgL_bodyz00_18, obj_t BgL_elsez00_19)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 261 */
			{	/* Eval/expdsrfi0.scm 264 */
				obj_t BgL_arg2104z00_1821;

				{	/* Eval/expdsrfi0.scm 264 */
					obj_t BgL_arg2105z00_1822;

					{	/* Eval/expdsrfi0.scm 264 */
						obj_t BgL_arg2106z00_1823;

						obj_t BgL_arg2107z00_1824;

						BgL_arg2106z00_1823 = BGl_symbol2493z00zz__expander_srfi0z00;
						{	/* Eval/expdsrfi0.scm 264 */
							obj_t BgL_arg2108z00_1825;

							obj_t BgL_arg2109z00_1826;

							{	/* Eval/expdsrfi0.scm 264 */
								obj_t BgL_arg2111z00_1827;

								{	/* Eval/expdsrfi0.scm 264 */
									obj_t BgL_arg2112z00_1828;

									{	/* Eval/expdsrfi0.scm 264 */
										obj_t BgL_arg2115z00_1830;

										obj_t BgL_arg2116z00_1831;

										BgL_arg2115z00_1830 =
											BGl_symbol2493z00zz__expander_srfi0z00;
										{	/* Eval/expdsrfi0.scm 264 */
											obj_t BgL_arg2118z00_1832;

											obj_t BgL_arg2119z00_1833;

											{	/* Eval/expdsrfi0.scm 264 */
												obj_t BgL_arg2121z00_1834;

												obj_t BgL_arg2123z00_1835;

												{	/* Eval/expdsrfi0.scm 264 */
													obj_t BgL_arg2124z00_1836;

													obj_t BgL_arg2125z00_1837;

													BgL_arg2124z00_1836 =
														BGl_symbol2496z00zz__expander_srfi0z00;
													{	/* Eval/expdsrfi0.scm 264 */
														obj_t BgL_arg2126z00_1838;

														BgL_arg2126z00_1838 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_reqsz00_17, BNIL);
														{	/* Eval/expdsrfi0.scm 264 */
															obj_t BgL_list2127z00_1839;

															BgL_list2127z00_1839 =
																MAKE_PAIR(BgL_arg2126z00_1838, BNIL);
															BgL_arg2125z00_1837 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_req2z00_16, BgL_list2127z00_1839);
														}
													}
													BgL_arg2121z00_1834 =
														MAKE_PAIR(BgL_arg2124z00_1836, BgL_arg2125z00_1837);
												}
												BgL_arg2123z00_1835 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_bodyz00_18, BNIL);
												BgL_arg2118z00_1832 =
													MAKE_PAIR(BgL_arg2121z00_1834, BgL_arg2123z00_1835);
											}
											BgL_arg2119z00_1833 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_elsez00_19, BNIL);
											{	/* Eval/expdsrfi0.scm 264 */
												obj_t BgL_list2120z00_1840;

												BgL_list2120z00_1840 =
													MAKE_PAIR(BgL_arg2119z00_1833, BNIL);
												BgL_arg2116z00_1831 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2118z00_1832, BgL_list2120z00_1840);
											}
										}
										BgL_arg2112z00_1828 =
											MAKE_PAIR(BgL_arg2115z00_1830, BgL_arg2116z00_1831);
									}
									{	/* Eval/expdsrfi0.scm 264 */
										obj_t BgL_list2114z00_1841;

										BgL_list2114z00_1841 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2111z00_1827 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2112z00_1828, BgL_list2114z00_1841);
									}
								}
								BgL_arg2108z00_1825 =
									MAKE_PAIR(BgL_req1z00_15, BgL_arg2111z00_1827);
							}
							BgL_arg2109z00_1826 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_elsez00_19,
								BNIL);
							{	/* Eval/expdsrfi0.scm 264 */
								obj_t BgL_list2110z00_1842;

								BgL_list2110z00_1842 = MAKE_PAIR(BgL_arg2109z00_1826, BNIL);
								BgL_arg2107z00_1824 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2108z00_1825, BgL_list2110z00_1842);
							}
						}
						BgL_arg2105z00_1822 =
							MAKE_PAIR(BgL_arg2106z00_1823, BgL_arg2107z00_1824);
					}
					BgL_arg2104z00_1821 =
						BGl_evepairifyz00zz__prognz00(BgL_arg2105z00_1822, BgL_xz00_13);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14, BgL_arg2104z00_1821,
					BgL_ez00_14, BEOA);
			}
		}
	}



/* expand-cond-expand-or */
	obj_t BGl_expandzd2condzd2expandzd2orzd2zz__expander_srfi0z00(obj_t
		BgL_xz00_20, obj_t BgL_ez00_21, obj_t BgL_req1z00_22, obj_t BgL_req2z00_23,
		obj_t BgL_reqsz00_24, obj_t BgL_bodyz00_25, obj_t BgL_elsez00_26)
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 273 */
			{	/* Eval/expdsrfi0.scm 274 */
				obj_t BgL_bdz00_1089;

				{	/* Eval/expdsrfi0.scm 274 */

					{	/* Eval/expdsrfi0.scm 274 */

						BgL_bdz00_1089 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
					}
				}
				{	/* Eval/expdsrfi0.scm 275 */
					obj_t BgL_arg2130z00_1090;

					{	/* Eval/expdsrfi0.scm 275 */
						obj_t BgL_arg2131z00_1091;

						{	/* Eval/expdsrfi0.scm 275 */
							obj_t BgL_arg2132z00_1092;

							obj_t BgL_arg2133z00_1093;

							BgL_arg2132z00_1092 = BGl_symbol2493z00zz__expander_srfi0z00;
							{	/* Eval/expdsrfi0.scm 276 */
								obj_t BgL_arg2134z00_1094;

								obj_t BgL_arg2135z00_1095;

								{	/* Eval/expdsrfi0.scm 276 */
									obj_t BgL_arg2139z00_1099;

									{	/* Eval/expdsrfi0.scm 276 */
										obj_t BgL_arg2140z00_1100;

										{	/* Eval/expdsrfi0.scm 276 */
											obj_t BgL_arg2144z00_1103;

											BgL_arg2144z00_1103 =
												MAKE_PAIR(BGl_symbol2489z00zz__expander_srfi0z00,
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_bodyz00_25, BNIL));
											BgL_arg2140z00_1100 =
												BGl_evepairifyz00zz__prognz00(BgL_arg2144z00_1103,
												BgL_bodyz00_25);
										}
										{	/* Eval/expdsrfi0.scm 276 */
											obj_t BgL_list2142z00_1102;

											BgL_list2142z00_1102 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2139z00_1099 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2140z00_1100, BgL_list2142z00_1102);
										}
									}
									BgL_arg2134z00_1094 =
										MAKE_PAIR(BgL_req1z00_22, BgL_arg2139z00_1099);
								}
								{	/* Eval/expdsrfi0.scm 277 */
									obj_t BgL_arg2147z00_1106;

									obj_t BgL_arg2148z00_1107;

									BgL_arg2147z00_1106 = BGl_symbol2494z00zz__expander_srfi0z00;
									{	/* Eval/expdsrfi0.scm 278 */
										obj_t BgL_arg2149z00_1108;

										{	/* Eval/expdsrfi0.scm 278 */
											obj_t BgL_arg2152z00_1111;

											obj_t BgL_arg2153z00_1112;

											BgL_arg2152z00_1111 =
												BGl_symbol2493z00zz__expander_srfi0z00;
											{	/* Eval/expdsrfi0.scm 279 */
												obj_t BgL_arg2154z00_1113;

												obj_t BgL_arg2155z00_1114;

												{	/* Eval/expdsrfi0.scm 279 */
													obj_t BgL_arg2157z00_1116;

													obj_t BgL_arg2158z00_1117;

													{	/* Eval/expdsrfi0.scm 279 */
														obj_t BgL_arg2159z00_1118;

														obj_t BgL_arg2160z00_1119;

														BgL_arg2159z00_1118 =
															BGl_symbol2498z00zz__expander_srfi0z00;
														{	/* Eval/expdsrfi0.scm 279 */
															obj_t BgL_arg2161z00_1120;

															BgL_arg2161z00_1120 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_reqsz00_24, BNIL);
															{	/* Eval/expdsrfi0.scm 279 */
																obj_t BgL_list2162z00_1121;

																BgL_list2162z00_1121 =
																	MAKE_PAIR(BgL_arg2161z00_1120, BNIL);
																BgL_arg2160z00_1119 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_req2z00_23, BgL_list2162z00_1121);
															}
														}
														BgL_arg2157z00_1116 =
															MAKE_PAIR(BgL_arg2159z00_1118,
															BgL_arg2160z00_1119);
													}
													BgL_arg2158z00_1117 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_bodyz00_25, BNIL);
													BgL_arg2154z00_1113 =
														MAKE_PAIR(BgL_arg2157z00_1116, BgL_arg2158z00_1117);
												}
												BgL_arg2155z00_1114 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_elsez00_26, BNIL);
												{	/* Eval/expdsrfi0.scm 278 */
													obj_t BgL_list2156z00_1115;

													BgL_list2156z00_1115 =
														MAKE_PAIR(BgL_arg2155z00_1114, BNIL);
													BgL_arg2153z00_1112 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2154z00_1113, BgL_list2156z00_1115);
												}
											}
											BgL_arg2149z00_1108 =
												MAKE_PAIR(BgL_arg2152z00_1111, BgL_arg2153z00_1112);
										}
										{	/* Eval/expdsrfi0.scm 277 */
											obj_t BgL_list2151z00_1110;

											BgL_list2151z00_1110 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2148z00_1107 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2149z00_1108, BgL_list2151z00_1110);
										}
									}
									BgL_arg2135z00_1095 =
										MAKE_PAIR(BgL_arg2147z00_1106, BgL_arg2148z00_1107);
								}
								{	/* Eval/expdsrfi0.scm 275 */
									obj_t BgL_list2137z00_1097;

									{	/* Eval/expdsrfi0.scm 275 */
										obj_t BgL_arg2138z00_1098;

										BgL_arg2138z00_1098 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2137z00_1097 =
											MAKE_PAIR(BgL_arg2135z00_1095, BgL_arg2138z00_1098);
									}
									BgL_arg2133z00_1093 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2134z00_1094, BgL_list2137z00_1097);
								}
							}
							BgL_arg2131z00_1091 =
								MAKE_PAIR(BgL_arg2132z00_1092, BgL_arg2133z00_1093);
						}
						BgL_arg2130z00_1090 =
							BGl_evepairifyz00zz__prognz00(BgL_arg2131z00_1091, BgL_xz00_20);
					}
					return
						PROCEDURE_ENTRY(BgL_ez00_21) (BgL_ez00_21, BgL_arg2130z00_1090,
						BgL_ez00_21, BEOA);
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_srfi0z00()
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_srfi0z00()
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_srfi0z00()
	{
		AN_OBJECT;
		{	/* Eval/expdsrfi0.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 14769766),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2507z00zz__expander_srfi0z00));
		}
	}

#ifdef __cplusplus
}
#endif
