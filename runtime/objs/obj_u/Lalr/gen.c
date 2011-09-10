/*===========================================================================*/
/*   (Lalr/gen.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Lalr/gen.scm -indent -o objs/obj_u/Lalr/gen.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_actionzd2tablezd2zz__lalr_globalz00;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2432z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2435z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2438z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__lalr_genz00();
	static obj_t BGl_list2450z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2449z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2451z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2454z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2457z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2460z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2463z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_genzd2gotozd2tablez00zz__lalr_genz00();
	static obj_t BGl_list2466z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2467z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2470z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2473z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2476z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_list2477z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_gotosz00zz__lalr_genz00();
	extern obj_t BGl_shiftzd2tablezd2zz__lalr_globalz00;
	static obj_t BGl_actionsz00zz__lalr_genz00();
	static obj_t BGl_loopz72z72z00zz__lalr_genz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__lalr_genz00();
	extern obj_t BGl_nstatesz00zz__lalr_globalz00;
	static obj_t BGl__genzd2lalrzd2codez00zz__lalr_genz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_genz00();
	static obj_t BGl_loopzd2azd2zz__lalr_genz00(long);
	static obj_t BGl_loopzd2gzd2zz__lalr_genz00(long);
	static obj_t BGl_loopzd2lzd2zz__lalr_genz00(obj_t, long);
	static obj_t BGl_loopzd2pzd2zz__lalr_genz00(obj_t, obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00();
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__lalr_globalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern long bgl_list_length(obj_t);
	static obj_t BGl_symbol2430z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_reductionsz00zz__lalr_genz00();
	static obj_t BGl_symbol2433z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2436z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2439z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2441z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_nvarsz00zz__lalr_globalz00;
	static obj_t BGl_symbol2443z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2445z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2447z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2452z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2455z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2458z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2461z00zz__lalr_genz00 = BUNSPEC;
	extern obj_t BGl_za2symvza2z00zz__lalr_rewritez00;
	static obj_t BGl_symbol2464z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2468z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2471z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2474z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2478z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2480z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2482z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2484z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2486z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2488z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2500z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2490z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2502z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2492z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2494z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2496z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_symbol2498z00zz__lalr_genz00 = BUNSPEC;
	static obj_t BGl_genzd2actionzd2tablez00zz__lalr_genz00();
	static obj_t BGl_loopz00zz__lalr_genz00(long, obj_t);
	static obj_t BGl_genzd2reductionzd2tablez00zz__lalr_genz00();
	static obj_t BGl_loopz72z72zz__lalr_genz00(obj_t);
	extern obj_t BGl_acceszd2symbolzd2zz__lalr_globalz00;
	static obj_t BGl_methodzd2initzd2zz__lalr_genz00();
	extern obj_t BGl_grammarz00zz__lalr_globalz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2431z00zz__lalr_genz00,
		BgL_bgl_string2431za700za7za7_2505za7, "let*", 4);
	      DEFINE_STRING(BGl_string2434z00zz__lalr_genz00,
		BgL_bgl_string2434za700za7za7_2506za7, "__push", 6);
	      DEFINE_STRING(BGl_string2437z00zz__lalr_genz00,
		BgL_bgl_string2437za700za7za7_2507za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2440z00zz__lalr_genz00,
		BgL_bgl_string2440za700za7za7_2508za7, "stack", 5);
	      DEFINE_STRING(BGl_string2442z00zz__lalr_genz00,
		BgL_bgl_string2442za700za7za7_2509za7, "sp", 2);
	      DEFINE_STRING(BGl_string2444z00zz__lalr_genz00,
		BgL_bgl_string2444za700za7za7_2510za7, "new-cat", 7);
	      DEFINE_STRING(BGl_string2446z00zz__lalr_genz00,
		BgL_bgl_string2446za700za7za7_2511za7, "goto-table", 10);
	      DEFINE_STRING(BGl_string2448z00zz__lalr_genz00,
		BgL_bgl_string2448za700za7za7_2512za7, "lval", 4);
	      DEFINE_STRING(BGl_string2453z00zz__lalr_genz00,
		BgL_bgl_string2453za700za7za7_2513za7, "state", 5);
	      DEFINE_STRING(BGl_string2456z00zz__lalr_genz00,
		BgL_bgl_string2456za700za7za7_2514za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string2459z00zz__lalr_genz00,
		BgL_bgl_string2459za700za7za7_2515za7, "new-state", 9);
	      DEFINE_STRING(BGl_string2462z00zz__lalr_genz00,
		BgL_bgl_string2462za700za7za7_2516za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2465z00zz__lalr_genz00,
		BgL_bgl_string2465za700za7za7_2517za7, "assq", 4);
	      DEFINE_STRING(BGl_string2469z00zz__lalr_genz00,
		BgL_bgl_string2469za700za7za7_2518za7, "new-sp", 6);
	      DEFINE_STRING(BGl_string2472z00zz__lalr_genz00,
		BgL_bgl_string2472za700za7za7_2519za7, "+fx", 3);
	      DEFINE_STRING(BGl_string2475z00zz__lalr_genz00,
		BgL_bgl_string2475za700za7za7_2520za7, "vector-set!", 11);
	      DEFINE_STRING(BGl_string2479z00zz__lalr_genz00,
		BgL_bgl_string2479za700za7za7_2521za7, "-fx", 3);
	      DEFINE_STRING(BGl_string2481z00zz__lalr_genz00,
		BgL_bgl_string2481za700za7za7_2522za7, "__make-parser", 13);
	      DEFINE_STRING(BGl_string2483z00zz__lalr_genz00,
		BgL_bgl_string2483za700za7za7_2523za7, "__reduce", 8);
	      DEFINE_STRING(BGl_string2485z00zz__lalr_genz00,
		BgL_bgl_string2485za700za7za7_2524za7, "__action-table", 14);
	      DEFINE_STRING(BGl_string2487z00zz__lalr_genz00,
		BgL_bgl_string2487za700za7za7_2525za7, "quote", 5);
	      DEFINE_STRING(BGl_string2489z00zz__lalr_genz00,
		BgL_bgl_string2489za700za7za7_2526za7, "__goto-table", 12);
	      DEFINE_STRING(BGl_string2501z00zz__lalr_genz00,
		BgL_bgl_string2501za700za7za7_2527za7, "*start*", 7);
	      DEFINE_STRING(BGl_string2491z00zz__lalr_genz00,
		BgL_bgl_string2491za700za7za7_2528za7, "n", 1);
	      DEFINE_STRING(BGl_string2503z00zz__lalr_genz00,
		BgL_bgl_string2503za700za7za7_2529za7, "let", 3);
	      DEFINE_STRING(BGl_string2493z00zz__lalr_genz00,
		BgL_bgl_string2493za700za7za7_2530za7, "__sp", 4);
	      DEFINE_STRING(BGl_string2504z00zz__lalr_genz00,
		BgL_bgl_string2504za700za7za7_2531za7, "__lalr_gen", 10);
	      DEFINE_STRING(BGl_string2495z00zz__lalr_genz00,
		BgL_bgl_string2495za700za7za7_2532za7, "__stack", 7);
	      DEFINE_STRING(BGl_string2497z00zz__lalr_genz00,
		BgL_bgl_string2497za700za7za7_2533za7, "case", 4);
	      DEFINE_STRING(BGl_string2499z00zz__lalr_genz00,
		BgL_bgl_string2499za700za7za7_2534za7, "vector-ref-ur", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_genzd2lalrzd2codezd2envzd2zz__lalr_genz00,
		BgL_bgl__genza7d2lalrza7d2co2535z00,
		BGl__genzd2lalrzd2codez00zz__lalr_genz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_genz00(long
		BgL_checksumz00_1705, char *BgL_fromz00_1706)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_genz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_genz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__lalr_genz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_genz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 11 */
			BGl_symbol2430z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2431z00zz__lalr_genz00);
			BGl_symbol2433z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2434z00zz__lalr_genz00);
			BGl_symbol2436z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2437z00zz__lalr_genz00);
			BGl_symbol2439z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2440z00zz__lalr_genz00);
			BGl_symbol2441z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2442z00zz__lalr_genz00);
			BGl_symbol2443z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2444z00zz__lalr_genz00);
			BGl_symbol2445z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2446z00zz__lalr_genz00);
			BGl_symbol2447z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2448z00zz__lalr_genz00);
			BGl_list2438z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2439z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2441z00zz__lalr_genz00,
					MAKE_PAIR(BGl_symbol2443z00zz__lalr_genz00,
						MAKE_PAIR(BGl_symbol2445z00zz__lalr_genz00,
							MAKE_PAIR(BGl_symbol2447z00zz__lalr_genz00, BNIL)))));
			BGl_symbol2452z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2453z00zz__lalr_genz00);
			BGl_symbol2455z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2456z00zz__lalr_genz00);
			BGl_list2454z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2455z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2439z00zz__lalr_genz00,
					MAKE_PAIR(BGl_symbol2441z00zz__lalr_genz00, BNIL)));
			BGl_list2451z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2452z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2454z00zz__lalr_genz00, BNIL));
			BGl_symbol2458z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2459z00zz__lalr_genz00);
			BGl_symbol2461z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2462z00zz__lalr_genz00);
			BGl_symbol2464z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2465z00zz__lalr_genz00);
			BGl_list2466z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2455z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2445z00zz__lalr_genz00,
					MAKE_PAIR(BGl_symbol2452z00zz__lalr_genz00, BNIL)));
			BGl_list2463z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2464z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2443z00zz__lalr_genz00,
					MAKE_PAIR(BGl_list2466z00zz__lalr_genz00, BNIL)));
			BGl_list2460z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2461z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2463z00zz__lalr_genz00, BNIL));
			BGl_list2457z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2458z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2460z00zz__lalr_genz00, BNIL));
			BGl_symbol2468z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2469z00zz__lalr_genz00);
			BGl_symbol2471z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2472z00zz__lalr_genz00);
			BGl_list2470z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2471z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2441z00zz__lalr_genz00,
					MAKE_PAIR(BINT(((long) 2)), BNIL)));
			BGl_list2467z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2468z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2470z00zz__lalr_genz00, BNIL));
			BGl_list2450z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_list2451z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2457z00zz__lalr_genz00,
					MAKE_PAIR(BGl_list2467z00zz__lalr_genz00, BNIL)));
			BGl_symbol2474z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2475z00zz__lalr_genz00);
			BGl_list2473z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2474z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2439z00zz__lalr_genz00,
					MAKE_PAIR(BGl_symbol2468z00zz__lalr_genz00,
						MAKE_PAIR(BGl_symbol2458z00zz__lalr_genz00, BNIL))));
			BGl_symbol2478z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2479z00zz__lalr_genz00);
			BGl_list2477z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2478z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2468z00zz__lalr_genz00,
					MAKE_PAIR(BINT(((long) 1)), BNIL)));
			BGl_list2476z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2474z00zz__lalr_genz00,
				MAKE_PAIR(BGl_symbol2439z00zz__lalr_genz00,
					MAKE_PAIR(BGl_list2477z00zz__lalr_genz00,
						MAKE_PAIR(BGl_symbol2447z00zz__lalr_genz00, BNIL))));
			BGl_list2449z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2430z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2450z00zz__lalr_genz00,
					MAKE_PAIR(BGl_list2473z00zz__lalr_genz00,
						MAKE_PAIR(BGl_list2476z00zz__lalr_genz00,
							MAKE_PAIR(BGl_symbol2468z00zz__lalr_genz00, BNIL)))));
			BGl_list2435z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2436z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2438z00zz__lalr_genz00,
					MAKE_PAIR(BGl_list2449z00zz__lalr_genz00, BNIL)));
			BGl_list2432z00zz__lalr_genz00 =
				MAKE_PAIR(BGl_symbol2433z00zz__lalr_genz00,
				MAKE_PAIR(BGl_list2435z00zz__lalr_genz00, BNIL));
			BGl_symbol2480z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2481z00zz__lalr_genz00);
			BGl_symbol2482z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2483z00zz__lalr_genz00);
			BGl_symbol2484z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2485z00zz__lalr_genz00);
			BGl_symbol2486z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2487z00zz__lalr_genz00);
			BGl_symbol2488z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2489z00zz__lalr_genz00);
			BGl_symbol2490z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2491z00zz__lalr_genz00);
			BGl_symbol2492z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2493z00zz__lalr_genz00);
			BGl_symbol2494z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2495z00zz__lalr_genz00);
			BGl_symbol2496z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2497z00zz__lalr_genz00);
			BGl_symbol2498z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2499z00zz__lalr_genz00);
			BGl_symbol2500z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2501z00zz__lalr_genz00);
			return (BGl_symbol2502z00zz__lalr_genz00 =
				bstring_to_symbol(BGl_string2503z00zz__lalr_genz00), BUNSPEC);
		}
	}



/* gen-lalr-code */
	BGL_EXPORTED_DEF obj_t BGl_genzd2lalrzd2codez00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 48 */
			{	/* Lalr/gen.scm 49 */
				obj_t BgL_arg1979z00_768;

				obj_t BgL_arg1980z00_769;

				BgL_arg1979z00_768 = BGl_symbol2430z00zz__lalr_genz00;
				{	/* Lalr/gen.scm 49 */
					obj_t BgL_arg1981z00_770;

					obj_t BgL_arg1982z00_771;

					{	/* Lalr/gen.scm 49 */
						obj_t BgL_arg1986z00_775;

						obj_t BgL_arg1987z00_776;

						BgL_arg1986z00_775 = BGl_genzd2actionzd2tablez00zz__lalr_genz00();
						{	/* Lalr/gen.scm 50 */
							obj_t BgL_arg1988z00_777;

							obj_t BgL_arg1989z00_778;

							obj_t BgL_arg1990z00_779;

							BgL_arg1988z00_777 = BGl_genzd2gotozd2tablez00zz__lalr_genz00();
							BgL_arg1989z00_778 = BGl_list2432z00zz__lalr_genz00;
							BgL_arg1990z00_779 =
								BGl_genzd2reductionzd2tablez00zz__lalr_genz00();
							{	/* Lalr/gen.scm 49 */
								obj_t BgL_list1992z00_781;

								{	/* Lalr/gen.scm 49 */
									obj_t BgL_arg1993z00_782;

									{	/* Lalr/gen.scm 49 */
										obj_t BgL_arg1994z00_783;

										BgL_arg1994z00_783 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1993z00_782 =
											MAKE_PAIR(BgL_arg1990z00_779, BgL_arg1994z00_783);
									}
									BgL_list1992z00_781 =
										MAKE_PAIR(BgL_arg1989z00_778, BgL_arg1993z00_782);
								}
								BgL_arg1987z00_776 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1988z00_777, BgL_list1992z00_781);
							}
						}
						BgL_arg1981z00_770 =
							MAKE_PAIR(BgL_arg1986z00_775, BgL_arg1987z00_776);
					}
					{	/* Lalr/gen.scm 53 */
						obj_t BgL_arg1995z00_784;

						obj_t BgL_arg1996z00_785;

						BgL_arg1995z00_784 = BGl_symbol2480z00zz__lalr_genz00;
						{	/* Lalr/gen.scm 53 */
							obj_t BgL_list1997z00_786;

							{	/* Lalr/gen.scm 53 */
								obj_t BgL_arg1998z00_787;

								obj_t BgL_arg1999z00_788;

								BgL_arg1998z00_787 = BGl_symbol2482z00zz__lalr_genz00;
								BgL_arg1999z00_788 = MAKE_PAIR(BNIL, BNIL);
								BgL_list1997z00_786 =
									MAKE_PAIR(BgL_arg1998z00_787, BgL_arg1999z00_788);
							}
							BgL_arg1996z00_785 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_symbol2484z00zz__lalr_genz00, BgL_list1997z00_786);
						}
						BgL_arg1982z00_771 =
							MAKE_PAIR(BgL_arg1995z00_784, BgL_arg1996z00_785);
					}
					{	/* Lalr/gen.scm 49 */
						obj_t BgL_list1984z00_773;

						{	/* Lalr/gen.scm 49 */
							obj_t BgL_arg1985z00_774;

							BgL_arg1985z00_774 = MAKE_PAIR(BNIL, BNIL);
							BgL_list1984z00_773 =
								MAKE_PAIR(BgL_arg1982z00_771, BgL_arg1985z00_774);
						}
						BgL_arg1980z00_769 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1981z00_770,
							BgL_list1984z00_773);
					}
				}
				return MAKE_PAIR(BgL_arg1979z00_768, BgL_arg1980z00_769);
			}
		}
	}



/* _gen-lalr-code */
	obj_t BGl__genzd2lalrzd2codez00zz__lalr_genz00(obj_t BgL_envz00_1699)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 48 */
			return BGl_genzd2lalrzd2codez00zz__lalr_genz00();
		}
	}



/* gen-action-table */
	obj_t BGl_genzd2actionzd2tablez00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 66 */
			{	/* Lalr/gen.scm 83 */
				obj_t BgL_arg2000z00_790;

				obj_t BgL_arg2001z00_791;

				BgL_arg2000z00_790 = BGl_symbol2484z00zz__lalr_genz00;
				{	/* Lalr/gen.scm 83 */
					obj_t BgL_arg2002z00_792;

					{	/* Lalr/gen.scm 83 */
						obj_t BgL_arg2005z00_795;

						obj_t BgL_arg2006z00_796;

						BgL_arg2005z00_795 = BGl_symbol2486z00zz__lalr_genz00;
						{	/* Lalr/gen.scm 83 */
							obj_t BgL_arg2007z00_797;

							BgL_arg2007z00_797 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BGl_actionsz00zz__lalr_genz00(), BNIL));
							{	/* Lalr/gen.scm 83 */
								obj_t BgL_list2009z00_799;

								BgL_list2009z00_799 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2006z00_796 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2007z00_797, BgL_list2009z00_799);
							}
						}
						BgL_arg2002z00_792 =
							MAKE_PAIR(BgL_arg2005z00_795, BgL_arg2006z00_796);
					}
					{	/* Lalr/gen.scm 83 */
						obj_t BgL_list2004z00_794;

						BgL_list2004z00_794 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg2001z00_791 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2002z00_792,
							BgL_list2004z00_794);
					}
				}
				return MAKE_PAIR(BgL_arg2000z00_790, BgL_arg2001z00_791);
			}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zz__lalr_genz00(obj_t BgL_lz00_812)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 72 */
			if (NULLP(BgL_lz00_812))
				{	/* Lalr/gen.scm 73 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 75 */
					obj_t BgL_pz00_815;

					BgL_pz00_815 = CAR(BgL_lz00_812);
					{	/* Lalr/gen.scm 75 */
						obj_t BgL_xz00_816;

						BgL_xz00_816 = CAR(BgL_pz00_815);
						{	/* Lalr/gen.scm 75 */
							obj_t BgL_yz00_817;

							BgL_yz00_817 = CDR(BgL_pz00_815);
							{	/* Lalr/gen.scm 75 */

								{	/* Lalr/gen.scm 78 */
									obj_t BgL_arg2021z00_818;

									obj_t BgL_arg2022z00_819;

									{	/* Lalr/gen.scm 78 */
										obj_t BgL_arg2023z00_820;

										if (INTEGERP(BgL_xz00_816))
											{	/* Lalr/gen.scm 78 */
												long BgL_arg2025z00_822;

												BgL_arg2025z00_822 =
													(
													(long) CINT(BGl_nvarsz00zz__lalr_globalz00) +
													(long) CINT(BgL_xz00_816));
												BgL_arg2023z00_820 =
													VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
													(int) (BgL_arg2025z00_822));
											}
										else
											{	/* Lalr/gen.scm 78 */
												BgL_arg2023z00_820 = BgL_xz00_816;
											}
										BgL_arg2021z00_818 =
											MAKE_PAIR(BgL_arg2023z00_820, BgL_yz00_817);
									}
									BgL_arg2022z00_819 =
										BGl_loopz72z72z00zz__lalr_genz00(CDR(BgL_lz00_812));
									return MAKE_PAIR(BgL_arg2021z00_818, BgL_arg2022z00_819);
								}
							}
						}
					}
				}
		}
	}



/* loop-a */
	obj_t BGl_loopzd2azd2zz__lalr_genz00(long BgL_iz00_805)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 68 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_805),
					BGl_nstatesz00zz__lalr_globalz00))
				{	/* Lalr/gen.scm 69 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 69 */
					return
						MAKE_PAIR(BGl_loopz72z72z00zz__lalr_genz00(VECTOR_REF
							(BGl_actionzd2tablezd2zz__lalr_globalz00, (int) (BgL_iz00_805))),
						BGl_loopzd2azd2zz__lalr_genz00((BgL_iz00_805 + ((long) 1))));
		}}
	}



/* actions */
	obj_t BGl_actionsz00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 81 */
			return BGl_loopzd2azd2zz__lalr_genz00(((long) 0));
		}
	}



/* gen-goto-table */
	obj_t BGl_genzd2gotozd2tablez00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 85 */
			{	/* Lalr/gen.scm 106 */
				obj_t BgL_arg2029z00_829;

				obj_t BgL_arg2030z00_830;

				BgL_arg2029z00_829 = BGl_symbol2488z00zz__lalr_genz00;
				{	/* Lalr/gen.scm 106 */
					obj_t BgL_arg2031z00_831;

					{	/* Lalr/gen.scm 106 */
						obj_t BgL_arg2036z00_834;

						obj_t BgL_arg2037z00_835;

						BgL_arg2036z00_834 = BGl_symbol2486z00zz__lalr_genz00;
						{	/* Lalr/gen.scm 106 */
							obj_t BgL_arg2038z00_836;

							BgL_arg2038z00_836 =
								BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
								(BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BGl_gotosz00zz__lalr_genz00(), BNIL));
							{	/* Lalr/gen.scm 106 */
								obj_t BgL_list2040z00_838;

								BgL_list2040z00_838 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2037z00_835 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2038z00_836, BgL_list2040z00_838);
						}}
						BgL_arg2031z00_831 =
							MAKE_PAIR(BgL_arg2036z00_834, BgL_arg2037z00_835);
					}
					{	/* Lalr/gen.scm 106 */
						obj_t BgL_list2034z00_833;

						BgL_list2034z00_833 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg2030z00_830 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2031z00_831,
							BgL_list2034z00_833);
				}}
				return MAKE_PAIR(BgL_arg2029z00_829, BgL_arg2030z00_830);
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zz__lalr_genz00(obj_t BgL_lz00_852)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 93 */
		BGl_loopz72z72zz__lalr_genz00:
			if (NULLP(BgL_lz00_852))
				{	/* Lalr/gen.scm 94 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 96 */
					obj_t BgL_statez00_855;

					BgL_statez00_855 = CAR(BgL_lz00_852);
					{	/* Lalr/gen.scm 96 */
						obj_t BgL_symbolz00_856;

						BgL_symbolz00_856 =
							VECTOR_REF(BGl_acceszd2symbolzd2zz__lalr_globalz00,
							CINT(BgL_statez00_855));
						{	/* Lalr/gen.scm 97 */

							if (
								((long) CINT(BgL_symbolz00_856) <
									(long) CINT(BGl_nvarsz00zz__lalr_globalz00)))
								{	/* Lalr/gen.scm 100 */
									obj_t BgL_arg2052z00_858;

									obj_t BgL_arg2053z00_859;

									BgL_arg2052z00_858 =
										MAKE_PAIR(VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
											CINT(BgL_symbolz00_856)), BgL_statez00_855);
									BgL_arg2053z00_859 =
										BGl_loopz72z72zz__lalr_genz00(CDR(BgL_lz00_852));
									return MAKE_PAIR(BgL_arg2052z00_858, BgL_arg2053z00_859);
								}
							else
								{
									obj_t BgL_lz00_1868;

									BgL_lz00_1868 = CDR(BgL_lz00_852);
									BgL_lz00_852 = BgL_lz00_1868;
									goto BGl_loopz72z72zz__lalr_genz00;
								}
						}
					}
				}
		}
	}



/* loop-g */
	obj_t BGl_loopzd2gzd2zz__lalr_genz00(long BgL_iz00_844)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 87 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(BgL_iz00_844),
					BGl_nstatesz00zz__lalr_globalz00))
				{	/* Lalr/gen.scm 88 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 91 */
					obj_t BgL_arg2047z00_847;

					obj_t BgL_arg2048z00_848;

					{	/* Lalr/gen.scm 91 */
						obj_t BgL_shiftsz00_849;

						BgL_shiftsz00_849 =
							VECTOR_REF(BGl_shiftzd2tablezd2zz__lalr_globalz00,
							(int) (BgL_iz00_844));
						if (CBOOL(BgL_shiftsz00_849))
							{	/* Lalr/gen.scm 92 */
								BgL_arg2047z00_847 =
									BGl_loopz72z72zz__lalr_genz00(VECTOR_REF(BgL_shiftsz00_849,
										(int) (((long) 2))));
							}
						else
							{	/* Lalr/gen.scm 92 */
								BgL_arg2047z00_847 = BNIL;
							}
					}
					BgL_arg2048z00_848 =
						BGl_loopzd2gzd2zz__lalr_genz00((BgL_iz00_844 + ((long) 1)));
					return MAKE_PAIR(BgL_arg2047z00_847, BgL_arg2048z00_848);
				}
		}
	}



/* gotos */
	obj_t BGl_gotosz00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 104 */
			return BGl_loopzd2gzd2zz__lalr_genz00(((long) 0));
		}
	}



/* gen-reduction-table */
	obj_t BGl_genzd2reductionzd2tablez00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 108 */
			{	/* Lalr/gen.scm 145 */
				obj_t BgL_arg2058z00_870;

				obj_t BgL_arg2059z00_871;

				BgL_arg2058z00_870 = BGl_symbol2482z00zz__lalr_genz00;
				{	/* Lalr/gen.scm 145 */
					obj_t BgL_arg2060z00_872;

					{	/* Lalr/gen.scm 145 */
						obj_t BgL_arg2063z00_875;

						obj_t BgL_arg2064z00_876;

						BgL_arg2063z00_875 = BGl_symbol2436z00zz__lalr_genz00;
						{	/* Lalr/gen.scm 145 */
							obj_t BgL_arg2065z00_877;

							obj_t BgL_arg2066z00_878;

							{	/* Lalr/gen.scm 145 */
								obj_t BgL_arg2070z00_882;

								obj_t BgL_arg2072z00_883;

								BgL_arg2070z00_882 = BGl_symbol2490z00zz__lalr_genz00;
								{	/* Lalr/gen.scm 145 */
									obj_t BgL_list2073z00_884;

									{	/* Lalr/gen.scm 145 */
										obj_t BgL_arg2076z00_885;

										obj_t BgL_arg2077z00_886;

										BgL_arg2076z00_885 = BGl_symbol2492z00zz__lalr_genz00;
										BgL_arg2077z00_886 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2073z00_884 =
											MAKE_PAIR(BgL_arg2076z00_885, BgL_arg2077z00_886);
									}
									BgL_arg2072z00_883 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BGl_symbol2494z00zz__lalr_genz00, BgL_list2073z00_884);
								}
								BgL_arg2065z00_877 =
									MAKE_PAIR(BgL_arg2070z00_882, BgL_arg2072z00_883);
							}
							{	/* Lalr/gen.scm 146 */
								obj_t BgL_arg2078z00_887;

								obj_t BgL_arg2079z00_888;

								BgL_arg2078z00_887 = BGl_symbol2496z00zz__lalr_genz00;
								{	/* Lalr/gen.scm 146 */
									obj_t BgL_arg2080z00_889;

									obj_t BgL_arg2081z00_890;

									BgL_arg2080z00_889 = BGl_symbol2490z00zz__lalr_genz00;
									BgL_arg2081z00_890 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BGl_reductionsz00zz__lalr_genz00(), BNIL);
									{	/* Lalr/gen.scm 146 */
										obj_t BgL_list2082z00_891;

										BgL_list2082z00_891 = MAKE_PAIR(BgL_arg2081z00_890, BNIL);
										BgL_arg2079z00_888 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2080z00_889, BgL_list2082z00_891);
								}}
								BgL_arg2066z00_878 =
									MAKE_PAIR(BgL_arg2078z00_887, BgL_arg2079z00_888);
							}
							{	/* Lalr/gen.scm 145 */
								obj_t BgL_list2068z00_880;

								{	/* Lalr/gen.scm 145 */
									obj_t BgL_arg2069z00_881;

									BgL_arg2069z00_881 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2068z00_880 =
										MAKE_PAIR(BgL_arg2066z00_878, BgL_arg2069z00_881);
								}
								BgL_arg2064z00_876 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2065z00_877, BgL_list2068z00_880);
						}}
						BgL_arg2060z00_872 =
							MAKE_PAIR(BgL_arg2063z00_875, BgL_arg2064z00_876);
					}
					{	/* Lalr/gen.scm 145 */
						obj_t BgL_list2062z00_874;

						BgL_list2062z00_874 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg2059z00_871 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2060z00_872,
							BgL_list2062z00_874);
				}}
				return MAKE_PAIR(BgL_arg2058z00_870, BgL_arg2059z00_871);
			}
		}
	}



/* loop-l */
	obj_t BGl_loopzd2lzd2zz__lalr_genz00(obj_t BgL_lz00_966, long BgL_noz00_967)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 128 */
			if (NULLP(BgL_lz00_966))
				{	/* Lalr/gen.scm 129 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 131 */
					obj_t BgL_defz00_970;

					BgL_defz00_970 = CAR(BgL_lz00_966);
					{	/* Lalr/gen.scm 131 */
						obj_t BgL_ntz00_971;

						BgL_ntz00_971 = CAR(BgL_defz00_970);
						{	/* Lalr/gen.scm 132 */

							return
								BGl_loopzd2pzd2zz__lalr_genz00(BgL_lz00_966, BgL_ntz00_971,
								CDR(BgL_defz00_970), BgL_noz00_967);
						}
					}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__lalr_genz00(long BgL_iz00_899, obj_t BgL_lz00_900)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 110 */
			if (NULLP(BgL_lz00_900))
				{	/* Lalr/gen.scm 111 */
					return BNIL;
				}
			else
				{	/* Lalr/gen.scm 113 */
					obj_t BgL_symz00_903;

					BgL_symz00_903 = CAR(BgL_lz00_900);
					{	/* Lalr/gen.scm 115 */
						obj_t BgL_arg2089z00_904;

						obj_t BgL_arg2090z00_905;

						{	/* Lalr/gen.scm 115 */
							obj_t BgL_arg2091z00_906;

							obj_t BgL_arg2092z00_907;

							if (PAIRP(BgL_symz00_903))
								{	/* Lalr/gen.scm 115 */
									BgL_arg2091z00_906 = CDR(BgL_symz00_903);
								}
							else
								{	/* Lalr/gen.scm 115 */
									BgL_arg2091z00_906 = BgL_symz00_903;
								}
							{	/* Lalr/gen.scm 116 */
								obj_t BgL_arg2094z00_909;

								{	/* Lalr/gen.scm 116 */
									obj_t BgL_arg2097z00_912;

									obj_t BgL_arg2098z00_913;

									BgL_arg2097z00_912 = BGl_symbol2498z00zz__lalr_genz00;
									{	/* Lalr/gen.scm 116 */
										obj_t BgL_arg2099z00_914;

										obj_t BgL_arg2100z00_915;

										BgL_arg2099z00_914 = BGl_symbol2494z00zz__lalr_genz00;
										{	/* Lalr/gen.scm 116 */
											obj_t BgL_arg2104z00_919;

											obj_t BgL_arg2105z00_920;

											BgL_arg2104z00_919 = BGl_symbol2478z00zz__lalr_genz00;
											{	/* Lalr/gen.scm 116 */
												obj_t BgL_arg2106z00_921;

												long BgL_arg2107z00_922;

												BgL_arg2106z00_921 = BGl_symbol2492z00zz__lalr_genz00;
												BgL_arg2107z00_922 =
													((BgL_iz00_899 * ((long) 2)) - ((long) 1));
												{	/* Lalr/gen.scm 116 */
													obj_t BgL_list2109z00_924;

													{	/* Lalr/gen.scm 116 */
														obj_t BgL_arg2110z00_925;

														BgL_arg2110z00_925 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2109z00_924 =
															MAKE_PAIR(BINT(BgL_arg2107z00_922),
															BgL_arg2110z00_925);
													}
													BgL_arg2105z00_920 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2106z00_921, BgL_list2109z00_924);
											}}
											BgL_arg2100z00_915 =
												MAKE_PAIR(BgL_arg2104z00_919, BgL_arg2105z00_920);
										}
										{	/* Lalr/gen.scm 116 */
											obj_t BgL_list2102z00_917;

											{	/* Lalr/gen.scm 116 */
												obj_t BgL_arg2103z00_918;

												BgL_arg2103z00_918 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2102z00_917 =
													MAKE_PAIR(BgL_arg2100z00_915, BgL_arg2103z00_918);
											}
											BgL_arg2098z00_913 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2099z00_914, BgL_list2102z00_917);
									}}
									BgL_arg2094z00_909 =
										MAKE_PAIR(BgL_arg2097z00_912, BgL_arg2098z00_913);
								}
								{	/* Lalr/gen.scm 115 */
									obj_t BgL_list2096z00_911;

									BgL_list2096z00_911 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2092z00_907 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2094z00_909, BgL_list2096z00_911);
							}}
							BgL_arg2089z00_904 =
								MAKE_PAIR(BgL_arg2091z00_906, BgL_arg2092z00_907);
						}
						BgL_arg2090z00_905 =
							BGl_loopz00zz__lalr_genz00(
							(BgL_iz00_899 - ((long) 1)), CDR(BgL_lz00_900));
						return MAKE_PAIR(BgL_arg2089z00_904, BgL_arg2090z00_905);
					}
				}
		}
	}



/* loop-p */
	obj_t BGl_loopzd2pzd2zz__lalr_genz00(obj_t BgL_lz00_1701,
		obj_t BgL_ntz00_1700, obj_t BgL_prodsz00_974, long BgL_noz00_975)
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 133 */
			{
				obj_t BgL_ntz00_931;

				long BgL_nz00_932;

				obj_t BgL_actz00_933;

				if (NULLP(BgL_prodsz00_974))
					{	/* Lalr/gen.scm 134 */
						return
							BGl_loopzd2lzd2zz__lalr_genz00(CDR(BgL_lz00_1701), BgL_noz00_975);
					}
				else
					{	/* Lalr/gen.scm 136 */
						obj_t BgL_rhsz00_979;

						{	/* Lalr/gen.scm 136 */
							obj_t BgL_pairz00_1500;

							BgL_pairz00_1500 = BgL_prodsz00_974;
							BgL_rhsz00_979 = CAR(CAR(BgL_pairz00_1500));
						}
						{	/* Lalr/gen.scm 136 */
							obj_t BgL_actz00_980;

							{	/* Lalr/gen.scm 136 */
								obj_t BgL_pairz00_1504;

								BgL_pairz00_1504 = BgL_prodsz00_974;
								BgL_actz00_980 = CDR(CAR(BgL_pairz00_1504));
							}
							{	/* Lalr/gen.scm 136 */
								long BgL_nz00_981;

								BgL_nz00_981 = bgl_list_length(BgL_rhsz00_979);
								{	/* Lalr/gen.scm 136 */

									{	/* Lalr/gen.scm 139 */
										obj_t BgL_arg2157z00_982;

										obj_t BgL_arg2158z00_983;

										{	/* Lalr/gen.scm 139 */
											obj_t BgL_arg2159z00_984;

											obj_t BgL_arg2160z00_985;

											{	/* Lalr/gen.scm 139 */
												obj_t BgL_list2163z00_988;

												BgL_list2163z00_988 =
													MAKE_PAIR(BINT(BgL_noz00_975), BNIL);
												BgL_arg2159z00_984 = BgL_list2163z00_988;
											}
											{	/* Lalr/gen.scm 140 */
												obj_t BgL_arg2164z00_989;

												obj_t BgL_arg2165z00_990;

												BgL_arg2164z00_989 = BGl_symbol2502z00zz__lalr_genz00;
												{	/* Lalr/gen.scm 140 */
													obj_t BgL_arg2166z00_991;

													obj_t BgL_arg2167z00_992;

													BgL_arg2166z00_991 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BGl_loopz00zz__lalr_genz00(BgL_nz00_981,
															BgL_rhsz00_979), BNIL);
													BgL_ntz00_931 = BgL_ntz00_1700;
													BgL_nz00_932 = BgL_nz00_981;
													BgL_actz00_933 = BgL_actz00_980;
													if (
														(BgL_ntz00_931 == BGl_symbol2500z00zz__lalr_genz00))
														{	/* Lalr/gen.scm 120 */
															BgL_arg2167z00_992 =
																VECTOR_REF(BGl_za2symvza2z00zz__lalr_rewritez00,
																(int) (((long) 1)));
														}
													else
														{	/* Lalr/gen.scm 122 */
															obj_t BgL_arg2118z00_936;

															obj_t BgL_arg2119z00_937;

															BgL_arg2118z00_936 =
																BGl_symbol2433z00zz__lalr_genz00;
															{	/* Lalr/gen.scm 122 */
																obj_t BgL_arg2121z00_938;

																obj_t BgL_arg2123z00_939;

																obj_t BgL_arg2124z00_940;

																obj_t BgL_arg2125z00_941;

																obj_t BgL_arg2126z00_942;

																BgL_arg2121z00_938 =
																	BGl_symbol2494z00zz__lalr_genz00;
																{	/* Lalr/gen.scm 122 */
																	obj_t BgL_arg2134z00_949;

																	obj_t BgL_arg2135z00_950;

																	BgL_arg2134z00_949 =
																		BGl_symbol2478z00zz__lalr_genz00;
																	{	/* Lalr/gen.scm 122 */
																		obj_t BgL_arg2136z00_951;

																		long BgL_arg2137z00_952;

																		BgL_arg2136z00_951 =
																			BGl_symbol2492z00zz__lalr_genz00;
																		BgL_arg2137z00_952 =
																			(((long) 2) * BgL_nz00_932);
																		{	/* Lalr/gen.scm 122 */
																			obj_t BgL_list2139z00_954;

																			{	/* Lalr/gen.scm 122 */
																				obj_t BgL_arg2140z00_955;

																				BgL_arg2140z00_955 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2139z00_954 =
																					MAKE_PAIR(BINT(BgL_arg2137z00_952),
																					BgL_arg2140z00_955);
																			}
																			BgL_arg2135z00_950 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2136z00_951,
																				BgL_list2139z00_954);
																	}}
																	BgL_arg2123z00_939 =
																		MAKE_PAIR(BgL_arg2134z00_949,
																		BgL_arg2135z00_950);
																}
																{	/* Lalr/gen.scm 123 */
																	obj_t BgL_arg2141z00_956;

																	obj_t BgL_arg2144z00_957;

																	BgL_arg2141z00_956 =
																		BGl_symbol2486z00zz__lalr_genz00;
																	{	/* Lalr/gen.scm 123 */
																		obj_t BgL_list2145z00_958;

																		BgL_list2145z00_958 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2144z00_957 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_ntz00_931, BgL_list2145z00_958);
																	}
																	BgL_arg2124z00_940 =
																		MAKE_PAIR(BgL_arg2141z00_956,
																		BgL_arg2144z00_957);
																}
																BgL_arg2125z00_941 =
																	BGl_symbol2488z00zz__lalr_genz00;
																{	/* Lalr/gen.scm 125 */
																	obj_t BgL_arg2146z00_959;

																	obj_t BgL_arg2147z00_960;

																	BgL_arg2146z00_959 =
																		BGl_symbol2502z00zz__lalr_genz00;
																	{	/* Lalr/gen.scm 125 */
																		obj_t BgL_arg2149z00_962;

																		BgL_arg2149z00_962 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_actz00_933, BNIL);
																		{	/* Lalr/gen.scm 125 */
																			obj_t BgL_list2150z00_963;

																			BgL_list2150z00_963 =
																				MAKE_PAIR(BgL_arg2149z00_962, BNIL);
																			BgL_arg2147z00_960 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BNIL, BgL_list2150z00_963);
																	}}
																	BgL_arg2126z00_942 =
																		MAKE_PAIR(BgL_arg2146z00_959,
																		BgL_arg2147z00_960);
																}
																{	/* Lalr/gen.scm 122 */
																	obj_t BgL_list2128z00_944;

																	{	/* Lalr/gen.scm 122 */
																		obj_t BgL_arg2130z00_945;

																		{	/* Lalr/gen.scm 122 */
																			obj_t BgL_arg2131z00_946;

																			{	/* Lalr/gen.scm 122 */
																				obj_t BgL_arg2132z00_947;

																				{	/* Lalr/gen.scm 122 */
																					obj_t BgL_arg2133z00_948;

																					BgL_arg2133z00_948 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2132z00_947 =
																						MAKE_PAIR(BgL_arg2126z00_942,
																						BgL_arg2133z00_948);
																				}
																				BgL_arg2131z00_946 =
																					MAKE_PAIR(BgL_arg2125z00_941,
																					BgL_arg2132z00_947);
																			}
																			BgL_arg2130z00_945 =
																				MAKE_PAIR(BgL_arg2124z00_940,
																				BgL_arg2131z00_946);
																		}
																		BgL_list2128z00_944 =
																			MAKE_PAIR(BgL_arg2123z00_939,
																			BgL_arg2130z00_945);
																	}
																	BgL_arg2119z00_937 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2121z00_938, BgL_list2128z00_944);
															}}
															BgL_arg2167z00_992 =
																MAKE_PAIR(BgL_arg2118z00_936,
																BgL_arg2119z00_937);
														}
													{	/* Lalr/gen.scm 140 */
														obj_t BgL_list2169z00_994;

														{	/* Lalr/gen.scm 140 */
															obj_t BgL_arg2170z00_995;

															BgL_arg2170z00_995 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2169z00_994 =
																MAKE_PAIR(BgL_arg2167z00_992,
																BgL_arg2170z00_995);
														}
														BgL_arg2165z00_990 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2166z00_991, BgL_list2169z00_994);
												}}
												BgL_arg2160z00_985 =
													MAKE_PAIR(BgL_arg2164z00_989, BgL_arg2165z00_990);
											}
											{	/* Lalr/gen.scm 138 */
												obj_t BgL_list2161z00_986;

												{	/* Lalr/gen.scm 138 */
													obj_t BgL_arg2162z00_987;

													BgL_arg2162z00_987 =
														MAKE_PAIR(BgL_arg2160z00_985, BNIL);
													BgL_list2161z00_986 =
														MAKE_PAIR(BgL_arg2159z00_984, BgL_arg2162z00_987);
												}
												BgL_arg2157z00_982 = BgL_list2161z00_986;
										}}
										BgL_arg2158z00_983 =
											BGl_loopzd2pzd2zz__lalr_genz00(BgL_lz00_1701,
											BgL_ntz00_1700, CDR(BgL_prodsz00_974),
											(BgL_noz00_975 + ((long) 1)));
										return MAKE_PAIR(BgL_arg2157z00_982, BgL_arg2158z00_983);
									}
								}
							}
						}
					}
			}
		}
	}



/* reductions */
	obj_t BGl_reductionsz00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 142 */
			return
				BGl_loopzd2lzd2zz__lalr_genz00(BGl_grammarz00zz__lalr_globalz00,
				((long) 1));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_genz00()
	{
		AN_OBJECT;
		{	/* Lalr/gen.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__lalr_globalz00(((long) 45247587),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__lalr_rewritez00(((long) 229415577),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 70840631),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
			return BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 535170906),
				BSTRING_TO_STRING(BGl_string2504z00zz__lalr_genz00));
		}
	}

#ifdef __cplusplus
}
#endif
