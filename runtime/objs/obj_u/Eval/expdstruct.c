/*===========================================================================*/
/*   (Eval/expdstruct.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdstruct.scm -indent -o objs/obj_u/Eval/expdstruct.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t
		BGl__expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_structz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_structz00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t, obj_t);
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_list2618z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zz__expander_structz00();
	static obj_t BGl_list2664z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_list2665z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_structz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_structz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern long bgl_list_length(obj_t);
	extern obj_t string_to_symbol(char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_symbol2619z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2621z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2623z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2625z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2627z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2629z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2631z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2633z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2635z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2637z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2639z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2642z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2644z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2646z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2648z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2650z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2652z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2654z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2656z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2658z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2660z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2662z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2666z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2668z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2670z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2673z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_symbol2675z00zz__expander_structz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zz__expander_structz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2616z00zz__expander_structz00,
		BgL_bgl_string2616za700za7za7_2679za7, "define-struct", 13);
	      DEFINE_STRING(BGl_string2617z00zz__expander_structz00,
		BgL_bgl_string2617za700za7za7_2680za7, "Illegal `define-struct' form", 28);
	      DEFINE_STRING(BGl_string2620z00zz__expander_structz00,
		BgL_bgl_string2620za700za7za7_2681za7, "quote", 5);
	      DEFINE_STRING(BGl_string2622z00zz__expander_structz00,
		BgL_bgl_string2622za700za7za7_2682za7, "begin", 5);
	      DEFINE_STRING(BGl_string2624z00zz__expander_structz00,
		BgL_bgl_string2624za700za7za7_2683za7, "define-inline", 13);
	      DEFINE_STRING(BGl_string2626z00zz__expander_structz00,
		BgL_bgl_string2626za700za7za7_2684za7, "make-", 5);
	      DEFINE_STRING(BGl_string2628z00zz__expander_structz00,
		BgL_bgl_string2628za700za7za7_2685za7, "init", 4);
	      DEFINE_STRING(BGl_string2630z00zz__expander_structz00,
		BgL_bgl_string2630za700za7za7_2686za7, "if", 2);
	      DEFINE_STRING(BGl_string2632z00zz__expander_structz00,
		BgL_bgl_string2632za700za7za7_2687za7, "pair?", 5);
	      DEFINE_STRING(BGl_string2634z00zz__expander_structz00,
		BgL_bgl_string2634za700za7za7_2688za7, "not", 3);
	      DEFINE_STRING(BGl_string2636z00zz__expander_structz00,
		BgL_bgl_string2636za700za7za7_2689za7, "null?", 5);
	      DEFINE_STRING(BGl_string2638z00zz__expander_structz00,
		BgL_bgl_string2638za700za7za7_2690za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2640z00zz__expander_structz00,
		BgL_bgl_string2640za700za7za7_2691za7, "error", 5);
	      DEFINE_STRING(BGl_string2641z00zz__expander_structz00,
		BgL_bgl_string2641za700za7za7_2692za7, "Too many argument provided", 26);
	      DEFINE_STRING(BGl_string2643z00zz__expander_structz00,
		BgL_bgl_string2643za700za7za7_2693za7, "make-struct", 11);
	      DEFINE_STRING(BGl_string2645z00zz__expander_structz00,
		BgL_bgl_string2645za700za7za7_2694za7, "car", 3);
	      DEFINE_STRING(BGl_string2647z00zz__expander_structz00,
		BgL_bgl_string2647za700za7za7_2695za7, "let", 3);
	      DEFINE_STRING(BGl_string2649z00zz__expander_structz00,
		BgL_bgl_string2649za700za7za7_2696za7, "new", 3);
	      DEFINE_STRING(BGl_string2651z00zz__expander_structz00,
		BgL_bgl_string2651za700za7za7_2697za7, "-", 1);
	      DEFINE_STRING(BGl_string2653z00zz__expander_structz00,
		BgL_bgl_string2653za700za7za7_2698za7, "-set!", 5);
	      DEFINE_STRING(BGl_string2655z00zz__expander_structz00,
		BgL_bgl_string2655za700za7za7_2699za7, "?", 1);
	      DEFINE_STRING(BGl_string2657z00zz__expander_structz00,
		BgL_bgl_string2657za700za7za7_2700za7, "o", 1);
	      DEFINE_STRING(BGl_string2659z00zz__expander_structz00,
		BgL_bgl_string2659za700za7za7_2701za7, "struct?", 7);
	      DEFINE_STRING(BGl_string2661z00zz__expander_structz00,
		BgL_bgl_string2661za700za7za7_2702za7, "eq?", 3);
	      DEFINE_STRING(BGl_string2663z00zz__expander_structz00,
		BgL_bgl_string2663za700za7za7_2703za7, "struct-key", 10);
	      DEFINE_STRING(BGl_string2667z00zz__expander_structz00,
		BgL_bgl_string2667za700za7za7_2704za7, "unspecified", 11);
	      DEFINE_STRING(BGl_string2669z00zz__expander_structz00,
		BgL_bgl_string2669za700za7za7_2705za7, "s", 1);
	      DEFINE_STRING(BGl_string2671z00zz__expander_structz00,
		BgL_bgl_string2671za700za7za7_2706za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string2672z00zz__expander_structz00,
		BgL_bgl_string2672za700za7za7_2707za7, "struct-ref:not an instance of", 29);
	      DEFINE_STRING(BGl_string2674z00zz__expander_structz00,
		BgL_bgl_string2674za700za7za7_2708za7, "v", 1);
	      DEFINE_STRING(BGl_string2676z00zz__expander_structz00,
		BgL_bgl_string2676za700za7za7_2709za7, "struct-set!", 11);
	      DEFINE_STRING(BGl_string2677z00zz__expander_structz00,
		BgL_bgl_string2677za700za7za7_2710za7, "struct-set!:not an instance of",
		30);
	      DEFINE_STRING(BGl_string2678z00zz__expander_structz00,
		BgL_bgl_string2678za700za7za7_2711za7, "__expander_struct", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2definezd2structzd2envz00zz__expander_structz00,
		BgL_bgl__expandza7d2evalza7d2712z00,
		BGl__expandzd2evalzd2definezd2structzd2zz__expander_structz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_structz00(long
		BgL_checksumz00_1963, char *BgL_fromz00_1964)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_structz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_structz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_structz00();
					BGl_importedzd2moduleszd2initz00zz__expander_structz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_structz00()
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 18 */
			BGl_symbol2619z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2620z00zz__expander_structz00);
			BGl_list2618z00zz__expander_structz00 =
				MAKE_PAIR(BGl_symbol2619z00zz__expander_structz00,
				MAKE_PAIR(BNIL, BNIL));
			BGl_symbol2621z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2622z00zz__expander_structz00);
			BGl_symbol2623z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2624z00zz__expander_structz00);
			BGl_symbol2625z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2626z00zz__expander_structz00);
			BGl_symbol2627z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2628z00zz__expander_structz00);
			BGl_symbol2629z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2630z00zz__expander_structz00);
			BGl_symbol2631z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2632z00zz__expander_structz00);
			BGl_symbol2633z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2634z00zz__expander_structz00);
			BGl_symbol2635z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2636z00zz__expander_structz00);
			BGl_symbol2637z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2638z00zz__expander_structz00);
			BGl_symbol2639z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2640z00zz__expander_structz00);
			BGl_symbol2642z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2643z00zz__expander_structz00);
			BGl_symbol2644z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2645z00zz__expander_structz00);
			BGl_symbol2646z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2647z00zz__expander_structz00);
			BGl_symbol2648z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2649z00zz__expander_structz00);
			BGl_symbol2650z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2651z00zz__expander_structz00);
			BGl_symbol2652z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2653z00zz__expander_structz00);
			BGl_symbol2654z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2655z00zz__expander_structz00);
			BGl_symbol2656z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2657z00zz__expander_structz00);
			BGl_symbol2658z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2659z00zz__expander_structz00);
			BGl_symbol2660z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2661z00zz__expander_structz00);
			BGl_symbol2662z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2663z00zz__expander_structz00);
			BGl_symbol2666z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2667z00zz__expander_structz00);
			BGl_list2665z00zz__expander_structz00 =
				MAKE_PAIR(BGl_symbol2666z00zz__expander_structz00, BNIL);
			BGl_list2664z00zz__expander_structz00 =
				MAKE_PAIR(BGl_list2665z00zz__expander_structz00, BNIL);
			BGl_symbol2668z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2669z00zz__expander_structz00);
			BGl_symbol2670z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2671z00zz__expander_structz00);
			BGl_symbol2673z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2674z00zz__expander_structz00);
			return (BGl_symbol2675z00zz__expander_structz00 =
				bstring_to_symbol(BGl_string2676z00zz__expander_structz00), BUNSPEC);
		}
	}



/* expand-eval-define-struct */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 58 */
			{
				obj_t BgL_namez00_770;

				obj_t BgL_slotsz00_771;

				if (PAIRP(BgL_xz00_1))
					{	/* Eval/expdstruct.scm 59 */
						obj_t BgL_cdrzd21397zd2_776;

						BgL_cdrzd21397zd2_776 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21397zd2_776))
							{	/* Eval/expdstruct.scm 59 */
								BgL_namez00_770 = CAR(BgL_cdrzd21397zd2_776);
								BgL_slotsz00_771 = CDR(BgL_cdrzd21397zd2_776);
								BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
									(BgL_xz00_1);
								{	/* Eval/expdstruct.scm 62 */
									long BgL_lenz00_780;

									BgL_lenz00_780 = bgl_list_length(BgL_slotsz00_771);
									{	/* Eval/expdstruct.scm 62 */
										obj_t BgL_slotszd2namezd2_781;

										if (NULLP(BgL_slotsz00_771))
											{	/* Eval/expdstruct.scm 63 */
												BgL_slotszd2namezd2_781 = BNIL;
											}
										else
											{	/* Eval/expdstruct.scm 63 */
												obj_t BgL_head1852z00_1202;

												BgL_head1852z00_1202 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l1850z00_1204;

													obj_t BgL_tail1853z00_1205;

													BgL_l1850z00_1204 = BgL_slotsz00_771;
													BgL_tail1853z00_1205 = BgL_head1852z00_1202;
												BgL_zc3anonymousza32339ze3z83_1206:
													if (NULLP(BgL_l1850z00_1204))
														{	/* Eval/expdstruct.scm 63 */
															BgL_slotszd2namezd2_781 =
																CDR(BgL_head1852z00_1202);
														}
													else
														{	/* Eval/expdstruct.scm 63 */
															obj_t BgL_newtail1854z00_1208;

															{	/* Eval/expdstruct.scm 63 */
																obj_t BgL_arg2342z00_1210;

																{	/* Eval/expdstruct.scm 63 */
																	obj_t BgL_sz00_1212;

																	BgL_sz00_1212 = CAR(BgL_l1850z00_1204);
																	if (PAIRP(BgL_sz00_1212))
																		{	/* Eval/expdstruct.scm 64 */
																			obj_t BgL_cdrzd21413zd2_1220;

																			BgL_cdrzd21413zd2_1220 =
																				CDR(BgL_sz00_1212);
																			if (PAIRP(BgL_cdrzd21413zd2_1220))
																				{	/* Eval/expdstruct.scm 64 */
																					if (NULLP(CDR
																							(BgL_cdrzd21413zd2_1220)))
																						{	/* Eval/expdstruct.scm 64 */
																							BgL_arg2342z00_1210 =
																								CAR(BgL_sz00_1212);
																						}
																					else
																						{	/* Eval/expdstruct.scm 64 */
																							BgL_arg2342z00_1210 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2616z00zz__expander_structz00,
																								BGl_string2617z00zz__expander_structz00,
																								BgL_xz00_1);
																						}
																				}
																			else
																				{	/* Eval/expdstruct.scm 64 */
																					BgL_arg2342z00_1210 =
																						BGl_errorz00zz__errorz00
																						(BGl_string2616z00zz__expander_structz00,
																						BGl_string2617z00zz__expander_structz00,
																						BgL_xz00_1);
																				}
																		}
																	else
																		{	/* Eval/expdstruct.scm 64 */
																			if (SYMBOLP(BgL_sz00_1212))
																				{	/* Eval/expdstruct.scm 64 */
																					BgL_arg2342z00_1210 = BgL_sz00_1212;
																				}
																			else
																				{	/* Eval/expdstruct.scm 64 */
																					BgL_arg2342z00_1210 =
																						BGl_errorz00zz__errorz00
																						(BGl_string2616z00zz__expander_structz00,
																						BGl_string2617z00zz__expander_structz00,
																						BgL_xz00_1);
																				}
																		}
																}
																BgL_newtail1854z00_1208 =
																	MAKE_PAIR(BgL_arg2342z00_1210, BNIL);
															}
															SET_CDR(BgL_tail1853z00_1205,
																BgL_newtail1854z00_1208);
															{
																obj_t BgL_tail1853z00_2033;

																obj_t BgL_l1850z00_2031;

																BgL_l1850z00_2031 = CDR(BgL_l1850z00_1204);
																BgL_tail1853z00_2033 = BgL_newtail1854z00_1208;
																BgL_tail1853z00_1205 = BgL_tail1853z00_2033;
																BgL_l1850z00_1204 = BgL_l1850z00_2031;
																goto BgL_zc3anonymousza32339ze3z83_1206;
															}
														}
												}
											}
										{	/* Eval/expdstruct.scm 63 */
											bool_t BgL_slotszd2valzf3z21_782;

											BgL_slotszd2valzf3z21_782 = ((bool_t) 0);
											{	/* Eval/expdstruct.scm 74 */
												obj_t BgL_slotszd2valzd2_783;

												if (NULLP(BgL_slotsz00_771))
													{	/* Eval/expdstruct.scm 75 */
														BgL_slotszd2valzd2_783 = BNIL;
													}
												else
													{	/* Eval/expdstruct.scm 75 */
														obj_t BgL_head1857z00_1174;

														BgL_head1857z00_1174 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l1855z00_1176;

															obj_t BgL_tail1858z00_1177;

															BgL_l1855z00_1176 = BgL_slotsz00_771;
															BgL_tail1858z00_1177 = BgL_head1857z00_1174;
														BgL_zc3anonymousza32325ze3z83_1178:
															if (NULLP(BgL_l1855z00_1176))
																{	/* Eval/expdstruct.scm 75 */
																	BgL_slotszd2valzd2_783 =
																		CDR(BgL_head1857z00_1174);
																}
															else
																{	/* Eval/expdstruct.scm 75 */
																	obj_t BgL_newtail1859z00_1180;

																	{	/* Eval/expdstruct.scm 75 */
																		obj_t BgL_arg2328z00_1182;

																		{	/* Eval/expdstruct.scm 75 */
																			obj_t BgL_sz00_1184;

																			BgL_sz00_1184 = CAR(BgL_l1855z00_1176);
																			if (PAIRP(BgL_sz00_1184))
																				{	/* Eval/expdstruct.scm 76 */
																					obj_t BgL_cdrzd21426zd2_1191;

																					BgL_cdrzd21426zd2_1191 =
																						CDR(BgL_sz00_1184);
																					if (PAIRP(BgL_cdrzd21426zd2_1191))
																						{	/* Eval/expdstruct.scm 76 */
																							if (NULLP(CDR
																									(BgL_cdrzd21426zd2_1191)))
																								{	/* Eval/expdstruct.scm 76 */
																									obj_t BgL_arg2333z00_1194;

																									BgL_arg2333z00_1194 =
																										CAR(BgL_cdrzd21426zd2_1191);
																									BgL_slotszd2valzf3z21_782 =
																										((bool_t) 1);
																									BgL_arg2328z00_1182 =
																										BgL_arg2333z00_1194;
																								}
																							else
																								{	/* Eval/expdstruct.scm 76 */
																									BgL_arg2328z00_1182 =
																										BGl_errorz00zz__errorz00
																										(BGl_string2616z00zz__expander_structz00,
																										BGl_string2617z00zz__expander_structz00,
																										BgL_xz00_1);
																								}
																						}
																					else
																						{	/* Eval/expdstruct.scm 76 */
																							BgL_arg2328z00_1182 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2616z00zz__expander_structz00,
																								BGl_string2617z00zz__expander_structz00,
																								BgL_xz00_1);
																						}
																				}
																			else
																				{	/* Eval/expdstruct.scm 76 */
																					if (SYMBOLP(BgL_sz00_1184))
																						{	/* Eval/expdstruct.scm 76 */
																							BgL_arg2328z00_1182 =
																								BGl_list2618z00zz__expander_structz00;
																						}
																					else
																						{	/* Eval/expdstruct.scm 76 */
																							BgL_arg2328z00_1182 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2616z00zz__expander_structz00,
																								BGl_string2617z00zz__expander_structz00,
																								BgL_xz00_1);
																						}
																				}
																		}
																		BgL_newtail1859z00_1180 =
																			MAKE_PAIR(BgL_arg2328z00_1182, BNIL);
																	}
																	SET_CDR(BgL_tail1858z00_1177,
																		BgL_newtail1859z00_1180);
																	{
																		obj_t BgL_tail1858z00_2059;

																		obj_t BgL_l1855z00_2057;

																		BgL_l1855z00_2057 = CDR(BgL_l1855z00_1176);
																		BgL_tail1858z00_2059 =
																			BgL_newtail1859z00_1180;
																		BgL_tail1858z00_1177 = BgL_tail1858z00_2059;
																		BgL_l1855z00_1176 = BgL_l1855z00_2057;
																		goto BgL_zc3anonymousza32325ze3z83_1178;
																	}
																}
														}
													}
												{	/* Eval/expdstruct.scm 75 */

													{	/* Eval/expdstruct.scm 88 */
														obj_t BgL_arg1905z00_784;

														obj_t BgL_arg1906z00_785;

														BgL_arg1905z00_784 =
															BGl_symbol2621z00zz__expander_structz00;
														{	/* Eval/expdstruct.scm 92 */
															obj_t BgL_arg1907z00_786;

															obj_t BgL_arg1908z00_787;

															{	/* Eval/expdstruct.scm 92 */
																obj_t BgL_arg1909z00_788;

																{	/* Eval/expdstruct.scm 92 */
																	obj_t BgL_arg1910z00_789;

																	{	/* Eval/expdstruct.scm 92 */
																		obj_t BgL_arg1911z00_790;

																		obj_t BgL_arg1912z00_791;

																		BgL_arg1911z00_790 =
																			BGl_symbol2623z00zz__expander_structz00;
																		{	/* Eval/expdstruct.scm 92 */
																			obj_t BgL_arg1914z00_792;

																			obj_t BgL_arg1915z00_793;

																			{	/* Eval/expdstruct.scm 92 */
																				obj_t BgL_arg1919z00_797;

																				obj_t BgL_arg1920z00_798;

																				{	/* Eval/expdstruct.scm 92 */
																					obj_t BgL_arg1921z00_799;

																					{	/* Eval/expdstruct.scm 92 */
																						obj_t BgL_arg1922z00_800;

																						obj_t BgL_arg1923z00_801;

																						{	/* Eval/expdstruct.scm 92 */
																							obj_t BgL_res2593z00_1725;

																							{	/* Eval/expdstruct.scm 92 */
																								obj_t BgL_symbolz00_1723;

																								BgL_symbolz00_1723 =
																									BGl_symbol2625z00zz__expander_structz00;
																								{	/* Eval/expdstruct.scm 92 */
																									obj_t BgL_arg2517z00_1724;

																									BgL_arg2517z00_1724 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_1723);
																									BgL_res2593z00_1725 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2517z00_1724);
																								}
																							}
																							BgL_arg1922z00_800 =
																								BgL_res2593z00_1725;
																						}
																						{	/* Eval/expdstruct.scm 92 */
																							obj_t BgL_res2594z00_1728;

																							{	/* Eval/expdstruct.scm 92 */
																								obj_t BgL_symbolz00_1726;

																								BgL_symbolz00_1726 =
																									BgL_namez00_770;
																								{	/* Eval/expdstruct.scm 92 */
																									obj_t BgL_arg2517z00_1727;

																									BgL_arg2517z00_1727 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_1726);
																									BgL_res2594z00_1728 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2517z00_1727);
																								}
																							}
																							BgL_arg1923z00_801 =
																								BgL_res2594z00_1728;
																						}
																						{	/* Eval/expdstruct.scm 92 */
																							obj_t BgL_list1924z00_802;

																							{	/* Eval/expdstruct.scm 92 */
																								obj_t BgL_arg1925z00_803;

																								BgL_arg1925z00_803 =
																									MAKE_PAIR(BgL_arg1923z00_801,
																									BNIL);
																								BgL_list1924z00_802 =
																									MAKE_PAIR(BgL_arg1922z00_800,
																									BgL_arg1925z00_803);
																							}
																							BgL_arg1921z00_799 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list1924z00_802);
																						}
																					}
																					BgL_arg1919z00_797 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg1921z00_799));
																				}
																				BgL_arg1920z00_798 =
																					BGl_symbol2627z00zz__expander_structz00;
																				BgL_arg1914z00_792 =
																					MAKE_PAIR(BgL_arg1919z00_797,
																					BgL_arg1920z00_798);
																			}
																			if (BgL_slotszd2valzf3z21_782)
																				{	/* Eval/expdstruct.scm 94 */
																					obj_t BgL_arg1926z00_804;

																					obj_t BgL_arg1927z00_805;

																					BgL_arg1926z00_804 =
																						BGl_symbol2629z00zz__expander_structz00;
																					{	/* Eval/expdstruct.scm 94 */
																						obj_t BgL_arg1929z00_806;

																						obj_t BgL_arg1930z00_807;

																						obj_t BgL_arg1931z00_808;

																						{	/* Eval/expdstruct.scm 94 */
																							obj_t BgL_arg1938z00_813;

																							obj_t BgL_arg1940z00_814;

																							BgL_arg1938z00_813 =
																								BGl_symbol2631z00zz__expander_structz00;
																							{	/* Eval/expdstruct.scm 94 */
																								obj_t BgL_list1941z00_815;

																								BgL_list1941z00_815 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1940z00_814 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol2627z00zz__expander_structz00,
																									BgL_list1941z00_815);
																							}
																							BgL_arg1929z00_806 =
																								MAKE_PAIR(BgL_arg1938z00_813,
																								BgL_arg1940z00_814);
																						}
																						{	/* Eval/expdstruct.scm 95 */
																							obj_t BgL_arg1942z00_816;

																							obj_t BgL_arg1943z00_817;

																							BgL_arg1942z00_816 =
																								BGl_symbol2629z00zz__expander_structz00;
																							{	/* Eval/expdstruct.scm 95 */
																								obj_t BgL_arg1944z00_818;

																								obj_t BgL_arg1945z00_819;

																								obj_t BgL_arg1946z00_820;

																								{	/* Eval/expdstruct.scm 95 */
																									obj_t BgL_arg1952z00_825;

																									obj_t BgL_arg1953z00_826;

																									BgL_arg1952z00_825 =
																										BGl_symbol2633z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 95 */
																										obj_t BgL_arg1954z00_827;

																										{	/* Eval/expdstruct.scm 95 */
																											obj_t BgL_arg1957z00_830;

																											obj_t BgL_arg1958z00_831;

																											BgL_arg1957z00_830 =
																												BGl_symbol2635z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 95 */
																												obj_t
																													BgL_arg1959z00_832;
																												{	/* Eval/expdstruct.scm 95 */
																													obj_t
																														BgL_arg1962z00_835;
																													obj_t
																														BgL_arg1963z00_836;
																													BgL_arg1962z00_835 =
																														BGl_symbol2637z00zz__expander_structz00;
																													{	/* Eval/expdstruct.scm 95 */
																														obj_t
																															BgL_list1964z00_837;
																														BgL_list1964z00_837
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg1963z00_836 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BGl_symbol2627z00zz__expander_structz00,
																															BgL_list1964z00_837);
																													}
																													BgL_arg1959z00_832 =
																														MAKE_PAIR
																														(BgL_arg1962z00_835,
																														BgL_arg1963z00_836);
																												}
																												{	/* Eval/expdstruct.scm 95 */
																													obj_t
																														BgL_list1961z00_834;
																													BgL_list1961z00_834 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1958z00_831 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1959z00_832,
																														BgL_list1961z00_834);
																												}
																											}
																											BgL_arg1954z00_827 =
																												MAKE_PAIR
																												(BgL_arg1957z00_830,
																												BgL_arg1958z00_831);
																										}
																										{	/* Eval/expdstruct.scm 95 */
																											obj_t BgL_list1956z00_829;

																											BgL_list1956z00_829 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1953z00_826 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1954z00_827,
																												BgL_list1956z00_829);
																										}
																									}
																									BgL_arg1944z00_818 =
																										MAKE_PAIR
																										(BgL_arg1952z00_825,
																										BgL_arg1953z00_826);
																								}
																								{	/* Eval/expdstruct.scm 96 */
																									obj_t BgL_arg1965z00_838;

																									obj_t BgL_arg1966z00_839;

																									BgL_arg1965z00_838 =
																										BGl_symbol2639z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 96 */
																										obj_t BgL_arg1967z00_840;

																										obj_t BgL_arg1969z00_842;

																										{	/* Eval/expdstruct.scm 96 */
																											obj_t BgL_arg1974z00_847;

																											obj_t BgL_arg1975z00_848;

																											BgL_arg1974z00_847 =
																												BGl_symbol2619z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 96 */
																												obj_t
																													BgL_arg1976z00_849;
																												{	/* Eval/expdstruct.scm 96 */
																													obj_t
																														BgL_arg1979z00_852;
																													{	/* Eval/expdstruct.scm 96 */
																														obj_t
																															BgL_arg1980z00_853;
																														obj_t
																															BgL_arg1981z00_854;
																														{	/* Eval/expdstruct.scm 96 */
																															obj_t
																																BgL_res2595z00_1732;
																															{	/* Eval/expdstruct.scm 96 */
																																obj_t
																																	BgL_symbolz00_1730;
																																BgL_symbolz00_1730
																																	=
																																	BGl_symbol2625z00zz__expander_structz00;
																																{	/* Eval/expdstruct.scm 96 */
																																	obj_t
																																		BgL_arg2517z00_1731;
																																	BgL_arg2517z00_1731
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1730);
																																	BgL_res2595z00_1732
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2517z00_1731);
																																}
																															}
																															BgL_arg1980z00_853
																																=
																																BgL_res2595z00_1732;
																														}
																														{	/* Eval/expdstruct.scm 96 */
																															obj_t
																																BgL_res2596z00_1735;
																															{	/* Eval/expdstruct.scm 96 */
																																obj_t
																																	BgL_symbolz00_1733;
																																BgL_symbolz00_1733
																																	=
																																	BgL_namez00_770;
																																{	/* Eval/expdstruct.scm 96 */
																																	obj_t
																																		BgL_arg2517z00_1734;
																																	BgL_arg2517z00_1734
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1733);
																																	BgL_res2596z00_1735
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2517z00_1734);
																																}
																															}
																															BgL_arg1981z00_854
																																=
																																BgL_res2596z00_1735;
																														}
																														{	/* Eval/expdstruct.scm 96 */
																															obj_t
																																BgL_list1982z00_855;
																															{	/* Eval/expdstruct.scm 96 */
																																obj_t
																																	BgL_arg1983z00_856;
																																BgL_arg1983z00_856
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1981z00_854,
																																	BNIL);
																																BgL_list1982z00_855
																																	=
																																	MAKE_PAIR
																																	(BgL_arg1980z00_853,
																																	BgL_arg1983z00_856);
																															}
																															BgL_arg1979z00_852
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list1982z00_855);
																														}
																													}
																													BgL_arg1976z00_849 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg1979z00_852));
																												}
																												{	/* Eval/expdstruct.scm 96 */
																													obj_t
																														BgL_list1978z00_851;
																													BgL_list1978z00_851 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1975z00_848 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1976z00_849,
																														BgL_list1978z00_851);
																												}
																											}
																											BgL_arg1967z00_840 =
																												MAKE_PAIR
																												(BgL_arg1974z00_847,
																												BgL_arg1975z00_848);
																										}
																										BgL_arg1969z00_842 =
																											BGl_symbol2627z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 96 */
																											obj_t BgL_list1971z00_844;

																											{	/* Eval/expdstruct.scm 96 */
																												obj_t
																													BgL_arg1972z00_845;
																												{	/* Eval/expdstruct.scm 96 */
																													obj_t
																														BgL_arg1973z00_846;
																													BgL_arg1973z00_846 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1972z00_845 =
																														MAKE_PAIR
																														(BgL_arg1969z00_842,
																														BgL_arg1973z00_846);
																												}
																												BgL_list1971z00_844 =
																													MAKE_PAIR
																													(BGl_string2641z00zz__expander_structz00,
																													BgL_arg1972z00_845);
																											}
																											BgL_arg1966z00_839 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1967z00_840,
																												BgL_list1971z00_844);
																										}
																									}
																									BgL_arg1945z00_819 =
																										MAKE_PAIR
																										(BgL_arg1965z00_838,
																										BgL_arg1966z00_839);
																								}
																								{	/* Eval/expdstruct.scm 99 */
																									obj_t BgL_arg1984z00_857;

																									obj_t BgL_arg1985z00_858;

																									BgL_arg1984z00_857 =
																										BGl_symbol2642z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 99 */
																										obj_t BgL_arg1986z00_859;

																										obj_t BgL_arg1987z00_860;

																										{	/* Eval/expdstruct.scm 99 */
																											obj_t BgL_arg1992z00_865;

																											obj_t BgL_arg1993z00_866;

																											BgL_arg1992z00_865 =
																												BGl_symbol2619z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 99 */
																												obj_t
																													BgL_list1994z00_867;
																												BgL_list1994z00_867 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1993z00_866 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_namez00_770,
																													BgL_list1994z00_867);
																											}
																											BgL_arg1986z00_859 =
																												MAKE_PAIR
																												(BgL_arg1992z00_865,
																												BgL_arg1993z00_866);
																										}
																										{	/* Eval/expdstruct.scm 99 */
																											obj_t BgL_arg1995z00_868;

																											obj_t BgL_arg1996z00_869;

																											BgL_arg1995z00_868 =
																												BGl_symbol2644z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 99 */
																												obj_t
																													BgL_list1997z00_870;
																												BgL_list1997z00_870 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg1996z00_869 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol2627z00zz__expander_structz00,
																													BgL_list1997z00_870);
																											}
																											BgL_arg1987z00_860 =
																												MAKE_PAIR
																												(BgL_arg1995z00_868,
																												BgL_arg1996z00_869);
																										}
																										{	/* Eval/expdstruct.scm 99 */
																											obj_t BgL_list1989z00_862;

																											{	/* Eval/expdstruct.scm 99 */
																												obj_t
																													BgL_arg1990z00_863;
																												{	/* Eval/expdstruct.scm 99 */
																													obj_t
																														BgL_arg1991z00_864;
																													BgL_arg1991z00_864 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg1990z00_863 =
																														MAKE_PAIR
																														(BgL_arg1987z00_860,
																														BgL_arg1991z00_864);
																												}
																												BgL_list1989z00_862 =
																													MAKE_PAIR(BINT
																													(BgL_lenz00_780),
																													BgL_arg1990z00_863);
																											}
																											BgL_arg1985z00_858 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg1986z00_859,
																												BgL_list1989z00_862);
																										}
																									}
																									BgL_arg1946z00_820 =
																										MAKE_PAIR
																										(BgL_arg1984z00_857,
																										BgL_arg1985z00_858);
																								}
																								{	/* Eval/expdstruct.scm 95 */
																									obj_t BgL_list1949z00_822;

																									{	/* Eval/expdstruct.scm 95 */
																										obj_t BgL_arg1950z00_823;

																										{	/* Eval/expdstruct.scm 95 */
																											obj_t BgL_arg1951z00_824;

																											BgL_arg1951z00_824 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg1950z00_823 =
																												MAKE_PAIR
																												(BgL_arg1946z00_820,
																												BgL_arg1951z00_824);
																										}
																										BgL_list1949z00_822 =
																											MAKE_PAIR
																											(BgL_arg1945z00_819,
																											BgL_arg1950z00_823);
																									}
																									BgL_arg1943z00_817 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1944z00_818,
																										BgL_list1949z00_822);
																								}
																							}
																							BgL_arg1930z00_807 =
																								MAKE_PAIR(BgL_arg1942z00_816,
																								BgL_arg1943z00_817);
																						}
																						BgL_arg1931z00_808 =
																							MAKE_PAIR(BgL_namez00_770,
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_slotszd2valzd2_783, BNIL));
																						{	/* Eval/expdstruct.scm 94 */
																							obj_t BgL_list1933z00_810;

																							{	/* Eval/expdstruct.scm 94 */
																								obj_t BgL_arg1935z00_811;

																								{	/* Eval/expdstruct.scm 94 */
																									obj_t BgL_arg1937z00_812;

																									BgL_arg1937z00_812 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1935z00_811 =
																										MAKE_PAIR
																										(BgL_arg1931z00_808,
																										BgL_arg1937z00_812);
																								}
																								BgL_list1933z00_810 =
																									MAKE_PAIR(BgL_arg1930z00_807,
																									BgL_arg1935z00_811);
																							}
																							BgL_arg1927z00_805 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1929z00_806,
																								BgL_list1933z00_810);
																						}
																					}
																					BgL_arg1915z00_793 =
																						MAKE_PAIR(BgL_arg1926z00_804,
																						BgL_arg1927z00_805);
																				}
																			else
																				{	/* Eval/expdstruct.scm 101 */
																					obj_t BgL_arg1999z00_872;

																					obj_t BgL_arg2000z00_873;

																					BgL_arg1999z00_872 =
																						BGl_symbol2629z00zz__expander_structz00;
																					{	/* Eval/expdstruct.scm 101 */
																						obj_t BgL_arg2001z00_874;

																						obj_t BgL_arg2002z00_875;

																						obj_t BgL_arg2003z00_876;

																						{	/* Eval/expdstruct.scm 101 */
																							obj_t BgL_arg2008z00_881;

																							obj_t BgL_arg2009z00_882;

																							BgL_arg2008z00_881 =
																								BGl_symbol2631z00zz__expander_structz00;
																							{	/* Eval/expdstruct.scm 101 */
																								obj_t BgL_list2010z00_883;

																								BgL_list2010z00_883 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2009z00_882 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BGl_symbol2627z00zz__expander_structz00,
																									BgL_list2010z00_883);
																							}
																							BgL_arg2001z00_874 =
																								MAKE_PAIR(BgL_arg2008z00_881,
																								BgL_arg2009z00_882);
																						}
																						{	/* Eval/expdstruct.scm 102 */
																							obj_t BgL_arg2011z00_884;

																							obj_t BgL_arg2012z00_885;

																							BgL_arg2011z00_884 =
																								BGl_symbol2629z00zz__expander_structz00;
																							{	/* Eval/expdstruct.scm 102 */
																								obj_t BgL_arg2013z00_886;

																								obj_t BgL_arg2015z00_887;

																								obj_t BgL_arg2016z00_888;

																								{	/* Eval/expdstruct.scm 102 */
																									obj_t BgL_arg2022z00_893;

																									obj_t BgL_arg2023z00_894;

																									BgL_arg2022z00_893 =
																										BGl_symbol2633z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 102 */
																										obj_t BgL_arg2024z00_895;

																										{	/* Eval/expdstruct.scm 102 */
																											obj_t BgL_arg2027z00_898;

																											obj_t BgL_arg2028z00_899;

																											BgL_arg2027z00_898 =
																												BGl_symbol2635z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 102 */
																												obj_t
																													BgL_arg2029z00_900;
																												{	/* Eval/expdstruct.scm 102 */
																													obj_t
																														BgL_arg2033z00_903;
																													obj_t
																														BgL_arg2034z00_904;
																													BgL_arg2033z00_903 =
																														BGl_symbol2637z00zz__expander_structz00;
																													{	/* Eval/expdstruct.scm 102 */
																														obj_t
																															BgL_list2035z00_905;
																														BgL_list2035z00_905
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2034z00_904 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BGl_symbol2627z00zz__expander_structz00,
																															BgL_list2035z00_905);
																													}
																													BgL_arg2029z00_900 =
																														MAKE_PAIR
																														(BgL_arg2033z00_903,
																														BgL_arg2034z00_904);
																												}
																												{	/* Eval/expdstruct.scm 102 */
																													obj_t
																														BgL_list2031z00_902;
																													BgL_list2031z00_902 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2028z00_899 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2029z00_900,
																														BgL_list2031z00_902);
																												}
																											}
																											BgL_arg2024z00_895 =
																												MAKE_PAIR
																												(BgL_arg2027z00_898,
																												BgL_arg2028z00_899);
																										}
																										{	/* Eval/expdstruct.scm 102 */
																											obj_t BgL_list2026z00_897;

																											BgL_list2026z00_897 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2023z00_894 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2024z00_895,
																												BgL_list2026z00_897);
																										}
																									}
																									BgL_arg2013z00_886 =
																										MAKE_PAIR
																										(BgL_arg2022z00_893,
																										BgL_arg2023z00_894);
																								}
																								{	/* Eval/expdstruct.scm 103 */
																									obj_t BgL_arg2036z00_906;

																									obj_t BgL_arg2037z00_907;

																									BgL_arg2036z00_906 =
																										BGl_symbol2639z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 103 */
																										obj_t BgL_arg2038z00_908;

																										obj_t BgL_arg2040z00_910;

																										{	/* Eval/expdstruct.scm 103 */
																											obj_t BgL_arg2045z00_915;

																											obj_t BgL_arg2046z00_916;

																											BgL_arg2045z00_915 =
																												BGl_symbol2619z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 103 */
																												obj_t
																													BgL_arg2047z00_917;
																												{	/* Eval/expdstruct.scm 103 */
																													obj_t
																														BgL_arg2051z00_920;
																													{	/* Eval/expdstruct.scm 103 */
																														obj_t
																															BgL_arg2052z00_921;
																														obj_t
																															BgL_arg2053z00_922;
																														{	/* Eval/expdstruct.scm 103 */
																															obj_t
																																BgL_res2597z00_1739;
																															{	/* Eval/expdstruct.scm 103 */
																																obj_t
																																	BgL_symbolz00_1737;
																																BgL_symbolz00_1737
																																	=
																																	BGl_symbol2625z00zz__expander_structz00;
																																{	/* Eval/expdstruct.scm 103 */
																																	obj_t
																																		BgL_arg2517z00_1738;
																																	BgL_arg2517z00_1738
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1737);
																																	BgL_res2597z00_1739
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2517z00_1738);
																																}
																															}
																															BgL_arg2052z00_921
																																=
																																BgL_res2597z00_1739;
																														}
																														{	/* Eval/expdstruct.scm 103 */
																															obj_t
																																BgL_res2598z00_1742;
																															{	/* Eval/expdstruct.scm 103 */
																																obj_t
																																	BgL_symbolz00_1740;
																																BgL_symbolz00_1740
																																	=
																																	BgL_namez00_770;
																																{	/* Eval/expdstruct.scm 103 */
																																	obj_t
																																		BgL_arg2517z00_1741;
																																	BgL_arg2517z00_1741
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1740);
																																	BgL_res2598z00_1742
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2517z00_1741);
																																}
																															}
																															BgL_arg2053z00_922
																																=
																																BgL_res2598z00_1742;
																														}
																														{	/* Eval/expdstruct.scm 103 */
																															obj_t
																																BgL_list2054z00_923;
																															{	/* Eval/expdstruct.scm 103 */
																																obj_t
																																	BgL_arg2055z00_924;
																																BgL_arg2055z00_924
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2053z00_922,
																																	BNIL);
																																BgL_list2054z00_923
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2052z00_921,
																																	BgL_arg2055z00_924);
																															}
																															BgL_arg2051z00_920
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2054z00_923);
																														}
																													}
																													BgL_arg2047z00_917 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg2051z00_920));
																												}
																												{	/* Eval/expdstruct.scm 103 */
																													obj_t
																														BgL_list2049z00_919;
																													BgL_list2049z00_919 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2046z00_916 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2047z00_917,
																														BgL_list2049z00_919);
																												}
																											}
																											BgL_arg2038z00_908 =
																												MAKE_PAIR
																												(BgL_arg2045z00_915,
																												BgL_arg2046z00_916);
																										}
																										BgL_arg2040z00_910 =
																											BGl_symbol2627z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 103 */
																											obj_t BgL_list2042z00_912;

																											{	/* Eval/expdstruct.scm 103 */
																												obj_t
																													BgL_arg2043z00_913;
																												{	/* Eval/expdstruct.scm 103 */
																													obj_t
																														BgL_arg2044z00_914;
																													BgL_arg2044z00_914 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2043z00_913 =
																														MAKE_PAIR
																														(BgL_arg2040z00_910,
																														BgL_arg2044z00_914);
																												}
																												BgL_list2042z00_912 =
																													MAKE_PAIR
																													(BGl_string2641z00zz__expander_structz00,
																													BgL_arg2043z00_913);
																											}
																											BgL_arg2037z00_907 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2038z00_908,
																												BgL_list2042z00_912);
																										}
																									}
																									BgL_arg2015z00_887 =
																										MAKE_PAIR
																										(BgL_arg2036z00_906,
																										BgL_arg2037z00_907);
																								}
																								{	/* Eval/expdstruct.scm 106 */
																									obj_t BgL_arg2056z00_925;

																									obj_t BgL_arg2057z00_926;

																									BgL_arg2056z00_925 =
																										BGl_symbol2642z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 106 */
																										obj_t BgL_arg2058z00_927;

																										obj_t BgL_arg2059z00_928;

																										{	/* Eval/expdstruct.scm 106 */
																											obj_t BgL_arg2064z00_933;

																											obj_t BgL_arg2065z00_934;

																											BgL_arg2064z00_933 =
																												BGl_symbol2619z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 106 */
																												obj_t
																													BgL_list2066z00_935;
																												BgL_list2066z00_935 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2065z00_934 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_namez00_770,
																													BgL_list2066z00_935);
																											}
																											BgL_arg2058z00_927 =
																												MAKE_PAIR
																												(BgL_arg2064z00_933,
																												BgL_arg2065z00_934);
																										}
																										{	/* Eval/expdstruct.scm 106 */
																											obj_t BgL_arg2067z00_936;

																											obj_t BgL_arg2068z00_937;

																											BgL_arg2067z00_936 =
																												BGl_symbol2644z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 106 */
																												obj_t
																													BgL_list2069z00_938;
																												BgL_list2069z00_938 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2068z00_937 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BGl_symbol2627z00zz__expander_structz00,
																													BgL_list2069z00_938);
																											}
																											BgL_arg2059z00_928 =
																												MAKE_PAIR
																												(BgL_arg2067z00_936,
																												BgL_arg2068z00_937);
																										}
																										{	/* Eval/expdstruct.scm 106 */
																											obj_t BgL_list2061z00_930;

																											{	/* Eval/expdstruct.scm 106 */
																												obj_t
																													BgL_arg2062z00_931;
																												{	/* Eval/expdstruct.scm 106 */
																													obj_t
																														BgL_arg2063z00_932;
																													BgL_arg2063z00_932 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2062z00_931 =
																														MAKE_PAIR
																														(BgL_arg2059z00_928,
																														BgL_arg2063z00_932);
																												}
																												BgL_list2061z00_930 =
																													MAKE_PAIR(BINT
																													(BgL_lenz00_780),
																													BgL_arg2062z00_931);
																											}
																											BgL_arg2057z00_926 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2058z00_927,
																												BgL_list2061z00_930);
																										}
																									}
																									BgL_arg2016z00_888 =
																										MAKE_PAIR
																										(BgL_arg2056z00_925,
																										BgL_arg2057z00_926);
																								}
																								{	/* Eval/expdstruct.scm 102 */
																									obj_t BgL_list2018z00_890;

																									{	/* Eval/expdstruct.scm 102 */
																										obj_t BgL_arg2019z00_891;

																										{	/* Eval/expdstruct.scm 102 */
																											obj_t BgL_arg2021z00_892;

																											BgL_arg2021z00_892 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2019z00_891 =
																												MAKE_PAIR
																												(BgL_arg2016z00_888,
																												BgL_arg2021z00_892);
																										}
																										BgL_list2018z00_890 =
																											MAKE_PAIR
																											(BgL_arg2015z00_887,
																											BgL_arg2019z00_891);
																									}
																									BgL_arg2012z00_885 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2013z00_886,
																										BgL_list2018z00_890);
																								}
																							}
																							BgL_arg2002z00_875 =
																								MAKE_PAIR(BgL_arg2011z00_884,
																								BgL_arg2012z00_885);
																						}
																						{	/* Eval/expdstruct.scm 107 */
																							obj_t BgL_arg2070z00_939;

																							obj_t BgL_arg2072z00_940;

																							BgL_arg2070z00_939 =
																								BGl_symbol2642z00zz__expander_structz00;
																							{	/* Eval/expdstruct.scm 107 */
																								obj_t BgL_arg2073z00_941;

																								obj_t BgL_arg2076z00_942;

																								{	/* Eval/expdstruct.scm 107 */
																									obj_t BgL_arg2081z00_947;

																									obj_t BgL_arg2082z00_948;

																									BgL_arg2081z00_947 =
																										BGl_symbol2619z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 107 */
																										obj_t BgL_list2083z00_949;

																										BgL_list2083z00_949 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2082z00_948 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_namez00_770,
																											BgL_list2083z00_949);
																									}
																									BgL_arg2073z00_941 =
																										MAKE_PAIR
																										(BgL_arg2081z00_947,
																										BgL_arg2082z00_948);
																								}
																								{	/* Eval/expdstruct.scm 107 */
																									obj_t BgL_arg2084z00_950;

																									obj_t BgL_arg2085z00_951;

																									BgL_arg2084z00_950 =
																										BGl_symbol2619z00zz__expander_structz00;
																									{	/* Eval/expdstruct.scm 107 */
																										obj_t BgL_list2086z00_952;

																										BgL_list2086z00_952 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2085z00_951 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BNIL,
																											BgL_list2086z00_952);
																									}
																									BgL_arg2076z00_942 =
																										MAKE_PAIR
																										(BgL_arg2084z00_950,
																										BgL_arg2085z00_951);
																								}
																								{	/* Eval/expdstruct.scm 107 */
																									obj_t BgL_list2078z00_944;

																									{	/* Eval/expdstruct.scm 107 */
																										obj_t BgL_arg2079z00_945;

																										{	/* Eval/expdstruct.scm 107 */
																											obj_t BgL_arg2080z00_946;

																											BgL_arg2080z00_946 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2079z00_945 =
																												MAKE_PAIR
																												(BgL_arg2076z00_942,
																												BgL_arg2080z00_946);
																										}
																										BgL_list2078z00_944 =
																											MAKE_PAIR(BINT
																											(BgL_lenz00_780),
																											BgL_arg2079z00_945);
																									}
																									BgL_arg2072z00_940 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2073z00_941,
																										BgL_list2078z00_944);
																								}
																							}
																							BgL_arg2003z00_876 =
																								MAKE_PAIR(BgL_arg2070z00_939,
																								BgL_arg2072z00_940);
																						}
																						{	/* Eval/expdstruct.scm 101 */
																							obj_t BgL_list2005z00_878;

																							{	/* Eval/expdstruct.scm 101 */
																								obj_t BgL_arg2006z00_879;

																								{	/* Eval/expdstruct.scm 101 */
																									obj_t BgL_arg2007z00_880;

																									BgL_arg2007z00_880 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2006z00_879 =
																										MAKE_PAIR
																										(BgL_arg2003z00_876,
																										BgL_arg2007z00_880);
																								}
																								BgL_list2005z00_878 =
																									MAKE_PAIR(BgL_arg2002z00_875,
																									BgL_arg2006z00_879);
																							}
																							BgL_arg2000z00_873 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2001z00_874,
																								BgL_list2005z00_878);
																						}
																					}
																					BgL_arg1915z00_793 =
																						MAKE_PAIR(BgL_arg1999z00_872,
																						BgL_arg2000z00_873);
																				}
																			{	/* Eval/expdstruct.scm 92 */
																				obj_t BgL_list1917z00_795;

																				{	/* Eval/expdstruct.scm 92 */
																					obj_t BgL_arg1918z00_796;

																					BgL_arg1918z00_796 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1917z00_795 =
																						MAKE_PAIR(BgL_arg1915z00_793,
																						BgL_arg1918z00_796);
																				}
																				BgL_arg1912z00_791 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1914z00_792,
																					BgL_list1917z00_795);
																			}
																		}
																		BgL_arg1910z00_789 =
																			MAKE_PAIR(BgL_arg1911z00_790,
																			BgL_arg1912z00_791);
																	}
																	BgL_arg1909z00_788 =
																		BGl_evepairifyz00zz__prognz00
																		(BgL_arg1910z00_789, BgL_xz00_1);
																}
																BgL_arg1907z00_786 =
																	PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																	BgL_arg1909z00_788, BgL_ez00_2, BEOA);
															}
															{	/* Eval/expdstruct.scm 112 */
																obj_t BgL_arg2089z00_953;

																obj_t BgL_arg2090z00_954;

																{	/* Eval/expdstruct.scm 112 */
																	obj_t BgL_arg2091z00_955;

																	{	/* Eval/expdstruct.scm 112 */
																		obj_t BgL_arg2092z00_956;

																		{	/* Eval/expdstruct.scm 112 */
																			obj_t BgL_arg2093z00_957;

																			obj_t BgL_arg2094z00_958;

																			BgL_arg2093z00_957 =
																				BGl_symbol2623z00zz__expander_structz00;
																			{	/* Eval/expdstruct.scm 112 */
																				obj_t BgL_arg2095z00_959;

																				obj_t BgL_arg2096z00_960;

																				BgL_arg2095z00_959 =
																					MAKE_PAIR(BgL_namez00_770,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_slotszd2namezd2_781, BNIL));
																				{	/* Eval/expdstruct.scm 113 */
																					obj_t BgL_arg2101z00_965;

																					obj_t BgL_arg2102z00_966;

																					BgL_arg2101z00_965 =
																						BGl_symbol2646z00zz__expander_structz00;
																					{	/* Eval/expdstruct.scm 113 */
																						obj_t BgL_arg2103z00_967;

																						obj_t BgL_arg2104z00_968;

																						{	/* Eval/expdstruct.scm 113 */
																							obj_t BgL_arg2106z00_970;

																							{	/* Eval/expdstruct.scm 113 */
																								obj_t BgL_arg2108z00_972;

																								obj_t BgL_arg2109z00_973;

																								BgL_arg2108z00_972 =
																									BGl_symbol2648z00zz__expander_structz00;
																								{	/* Eval/expdstruct.scm 113 */
																									obj_t BgL_arg2110z00_974;

																									{	/* Eval/expdstruct.scm 113 */
																										obj_t BgL_arg2113z00_977;

																										obj_t BgL_arg2114z00_978;

																										BgL_arg2113z00_977 =
																											BGl_symbol2642z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 113 */
																											obj_t BgL_arg2115z00_979;

																											obj_t BgL_arg2116z00_980;

																											{	/* Eval/expdstruct.scm 113 */
																												obj_t
																													BgL_arg2124z00_985;
																												obj_t
																													BgL_arg2125z00_986;
																												BgL_arg2124z00_985 =
																													BGl_symbol2619z00zz__expander_structz00;
																												{	/* Eval/expdstruct.scm 113 */
																													obj_t
																														BgL_list2126z00_987;
																													BgL_list2126z00_987 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2125z00_986 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_namez00_770,
																														BgL_list2126z00_987);
																												}
																												BgL_arg2115z00_979 =
																													MAKE_PAIR
																													(BgL_arg2124z00_985,
																													BgL_arg2125z00_986);
																											}
																											{	/* Eval/expdstruct.scm 113 */
																												obj_t
																													BgL_arg2127z00_988;
																												obj_t
																													BgL_arg2130z00_989;
																												BgL_arg2127z00_988 =
																													BGl_symbol2619z00zz__expander_structz00;
																												{	/* Eval/expdstruct.scm 113 */
																													obj_t
																														BgL_list2131z00_990;
																													BgL_list2131z00_990 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2130z00_989 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BNIL,
																														BgL_list2131z00_990);
																												}
																												BgL_arg2116z00_980 =
																													MAKE_PAIR
																													(BgL_arg2127z00_988,
																													BgL_arg2130z00_989);
																											}
																											{	/* Eval/expdstruct.scm 113 */
																												obj_t
																													BgL_list2119z00_982;
																												{	/* Eval/expdstruct.scm 113 */
																													obj_t
																														BgL_arg2121z00_983;
																													{	/* Eval/expdstruct.scm 113 */
																														obj_t
																															BgL_arg2123z00_984;
																														BgL_arg2123z00_984 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2121z00_983 =
																															MAKE_PAIR
																															(BgL_arg2116z00_980,
																															BgL_arg2123z00_984);
																													}
																													BgL_list2119z00_982 =
																														MAKE_PAIR(BINT
																														(BgL_lenz00_780),
																														BgL_arg2121z00_983);
																												}
																												BgL_arg2114z00_978 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2115z00_979,
																													BgL_list2119z00_982);
																											}
																										}
																										BgL_arg2110z00_974 =
																											MAKE_PAIR
																											(BgL_arg2113z00_977,
																											BgL_arg2114z00_978);
																									}
																									{	/* Eval/expdstruct.scm 113 */
																										obj_t BgL_list2112z00_976;

																										BgL_list2112z00_976 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2109z00_973 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2110z00_974,
																											BgL_list2112z00_976);
																									}
																								}
																								BgL_arg2106z00_970 =
																									MAKE_PAIR(BgL_arg2108z00_972,
																									BgL_arg2109z00_973);
																							}
																							BgL_arg2103z00_967 =
																								MAKE_PAIR(BgL_arg2106z00_970,
																								BNIL);
																						}
																						{	/* Eval/expdstruct.scm 114 */
																							obj_t BgL_arg2132z00_991;

																							obj_t BgL_arg2133z00_992;

																							{
																								obj_t BgL_slotsz00_995;

																								obj_t BgL_resz00_996;

																								BgL_slotsz00_995 =
																									BgL_slotszd2namezd2_781;
																								BgL_resz00_996 = BNIL;
																							BgL_zc3anonymousza32134ze3z83_997:
																								if (NULLP
																									(BgL_slotsz00_995))
																									{	/* Eval/expdstruct.scm 116 */
																										BgL_arg2132z00_991 =
																											BgL_resz00_996;
																									}
																								else
																									{	/* Eval/expdstruct.scm 118 */
																										obj_t BgL_arg2136z00_999;

																										obj_t BgL_arg2137z00_1000;

																										BgL_arg2136z00_999 =
																											CDR(BgL_slotsz00_995);
																										{	/* Eval/expdstruct.scm 120 */
																											obj_t BgL_arg2138z00_1001;

																											{	/* Eval/expdstruct.scm 120 */
																												obj_t
																													BgL_arg2139z00_1002;
																												obj_t
																													BgL_arg2140z00_1003;
																												{	/* Eval/expdstruct.scm 120 */
																													obj_t
																														BgL_arg2141z00_1004;
																													obj_t
																														BgL_arg2144z00_1005;
																													obj_t
																														BgL_arg2145z00_1006;
																													BgL_arg2141z00_1004 =
																														BGl_symbol2650z00zz__expander_structz00;
																													BgL_arg2144z00_1005 =
																														CAR
																														(BgL_slotsz00_995);
																													BgL_arg2145z00_1006 =
																														BGl_symbol2652z00zz__expander_structz00;
																													{	/* Eval/expdstruct.scm 119 */
																														obj_t
																															BgL_list2146z00_1007;
																														{	/* Eval/expdstruct.scm 119 */
																															obj_t
																																BgL_arg2147z00_1008;
																															{	/* Eval/expdstruct.scm 119 */
																																obj_t
																																	BgL_arg2148z00_1009;
																																{	/* Eval/expdstruct.scm 119 */
																																	obj_t
																																		BgL_arg2149z00_1010;
																																	BgL_arg2149z00_1010
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2145z00_1006,
																																		BNIL);
																																	BgL_arg2148z00_1009
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2144z00_1005,
																																		BgL_arg2149z00_1010);
																																}
																																BgL_arg2147z00_1008
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2141z00_1004,
																																	BgL_arg2148z00_1009);
																															}
																															BgL_list2146z00_1007
																																=
																																MAKE_PAIR
																																(BgL_namez00_770,
																																BgL_arg2147z00_1008);
																														}
																														BgL_arg2139z00_1002
																															=
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list2146z00_1007);
																													}
																												}
																												{	/* Eval/expdstruct.scm 119 */
																													obj_t
																														BgL_arg2150z00_1011;
																													obj_t
																														BgL_arg2151z00_1012;
																													BgL_arg2150z00_1011 =
																														BGl_symbol2648z00zz__expander_structz00;
																													BgL_arg2151z00_1012 =
																														CAR
																														(BgL_slotsz00_995);
																													{	/* Eval/expdstruct.scm 119 */
																														obj_t
																															BgL_list2153z00_1014;
																														{	/* Eval/expdstruct.scm 119 */
																															obj_t
																																BgL_arg2154z00_1015;
																															BgL_arg2154z00_1015
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2153z00_1014
																																=
																																MAKE_PAIR
																																(BgL_arg2151z00_1012,
																																BgL_arg2154z00_1015);
																														}
																														BgL_arg2140z00_1003
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2150z00_1011,
																															BgL_list2153z00_1014);
																													}
																												}
																												BgL_arg2138z00_1001 =
																													MAKE_PAIR
																													(BgL_arg2139z00_1002,
																													BgL_arg2140z00_1003);
																											}
																											BgL_arg2137z00_1000 =
																												MAKE_PAIR
																												(BgL_arg2138z00_1001,
																												BgL_resz00_996);
																										}
																										{
																											obj_t BgL_resz00_2228;

																											obj_t BgL_slotsz00_2227;

																											BgL_slotsz00_2227 =
																												BgL_arg2136z00_999;
																											BgL_resz00_2228 =
																												BgL_arg2137z00_1000;
																											BgL_resz00_996 =
																												BgL_resz00_2228;
																											BgL_slotsz00_995 =
																												BgL_slotsz00_2227;
																											goto
																												BgL_zc3anonymousza32134ze3z83_997;
																										}
																									}
																							}
																							BgL_arg2133z00_992 =
																								MAKE_PAIR
																								(BGl_symbol2648z00zz__expander_structz00,
																								BNIL);
																							BgL_arg2104z00_968 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2132z00_991,
																								BgL_arg2133z00_992);
																						}
																						{	/* Eval/expdstruct.scm 113 */
																							obj_t BgL_list2105z00_969;

																							BgL_list2105z00_969 =
																								MAKE_PAIR(BgL_arg2104z00_968,
																								BNIL);
																							BgL_arg2102z00_966 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2103z00_967,
																								BgL_list2105z00_969);
																						}
																					}
																					BgL_arg2096z00_960 =
																						MAKE_PAIR(BgL_arg2101z00_965,
																						BgL_arg2102z00_966);
																				}
																				{	/* Eval/expdstruct.scm 112 */
																					obj_t BgL_list2098z00_962;

																					{	/* Eval/expdstruct.scm 112 */
																						obj_t BgL_arg2099z00_963;

																						BgL_arg2099z00_963 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2098z00_962 =
																							MAKE_PAIR(BgL_arg2096z00_960,
																							BgL_arg2099z00_963);
																					}
																					BgL_arg2094z00_958 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2095z00_959,
																						BgL_list2098z00_962);
																				}
																			}
																			BgL_arg2092z00_956 =
																				MAKE_PAIR(BgL_arg2093z00_957,
																				BgL_arg2094z00_958);
																		}
																		BgL_arg2091z00_955 =
																			BGl_evepairifyz00zz__prognz00
																			(BgL_arg2092z00_956, BgL_xz00_1);
																	}
																	BgL_arg2089z00_953 =
																		PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																		BgL_arg2091z00_955, BgL_ez00_2, BEOA);
																}
																{	/* Eval/expdstruct.scm 132 */
																	obj_t BgL_arg2155z00_1017;

																	obj_t BgL_arg2156z00_1018;

																	{	/* Eval/expdstruct.scm 132 */
																		obj_t BgL_arg2157z00_1019;

																		{	/* Eval/expdstruct.scm 132 */
																			obj_t BgL_arg2158z00_1020;

																			{	/* Eval/expdstruct.scm 132 */
																				obj_t BgL_arg2159z00_1021;

																				obj_t BgL_arg2160z00_1022;

																				BgL_arg2159z00_1021 =
																					BGl_symbol2623z00zz__expander_structz00;
																				{	/* Eval/expdstruct.scm 132 */
																					obj_t BgL_arg2161z00_1023;

																					obj_t BgL_arg2162z00_1024;

																					{	/* Eval/expdstruct.scm 132 */
																						obj_t BgL_arg2166z00_1028;

																						obj_t BgL_arg2167z00_1029;

																						{	/* Eval/expdstruct.scm 132 */
																							obj_t BgL_arg2168z00_1030;

																							{	/* Eval/expdstruct.scm 132 */
																								obj_t BgL_arg2169z00_1031;

																								obj_t BgL_arg2170z00_1032;

																								{	/* Eval/expdstruct.scm 132 */
																									obj_t BgL_res2599z00_1750;

																									{	/* Eval/expdstruct.scm 132 */
																										obj_t BgL_symbolz00_1748;

																										BgL_symbolz00_1748 =
																											BgL_namez00_770;
																										{	/* Eval/expdstruct.scm 132 */
																											obj_t BgL_arg2517z00_1749;

																											BgL_arg2517z00_1749 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_1748);
																											BgL_res2599z00_1750 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2517z00_1749);
																										}
																									}
																									BgL_arg2169z00_1031 =
																										BgL_res2599z00_1750;
																								}
																								{	/* Eval/expdstruct.scm 132 */
																									obj_t BgL_res2600z00_1753;

																									{	/* Eval/expdstruct.scm 132 */
																										obj_t BgL_symbolz00_1751;

																										BgL_symbolz00_1751 =
																											BGl_symbol2654z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 132 */
																											obj_t BgL_arg2517z00_1752;

																											BgL_arg2517z00_1752 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_1751);
																											BgL_res2600z00_1753 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2517z00_1752);
																										}
																									}
																									BgL_arg2170z00_1032 =
																										BgL_res2600z00_1753;
																								}
																								{	/* Eval/expdstruct.scm 132 */
																									obj_t BgL_list2171z00_1033;

																									{	/* Eval/expdstruct.scm 132 */
																										obj_t BgL_arg2172z00_1034;

																										BgL_arg2172z00_1034 =
																											MAKE_PAIR
																											(BgL_arg2170z00_1032,
																											BNIL);
																										BgL_list2171z00_1033 =
																											MAKE_PAIR
																											(BgL_arg2169z00_1031,
																											BgL_arg2172z00_1034);
																									}
																									BgL_arg2168z00_1030 =
																										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																										(BgL_list2171z00_1033);
																								}
																							}
																							BgL_arg2166z00_1028 =
																								string_to_symbol
																								(BSTRING_TO_STRING
																								(BgL_arg2168z00_1030));
																						}
																						{	/* Eval/expdstruct.scm 132 */
																							obj_t BgL_list2173z00_1035;

																							BgL_list2173z00_1035 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2167z00_1029 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BGl_symbol2656z00zz__expander_structz00,
																								BgL_list2173z00_1035);
																						}
																						BgL_arg2161z00_1023 =
																							MAKE_PAIR(BgL_arg2166z00_1028,
																							BgL_arg2167z00_1029);
																					}
																					{	/* Eval/expdstruct.scm 133 */
																						obj_t BgL_arg2174z00_1036;

																						obj_t BgL_arg2175z00_1037;

																						BgL_arg2174z00_1036 =
																							BGl_symbol2629z00zz__expander_structz00;
																						{	/* Eval/expdstruct.scm 133 */
																							obj_t BgL_arg2176z00_1038;

																							obj_t BgL_arg2177z00_1039;

																							{	/* Eval/expdstruct.scm 133 */
																								obj_t BgL_arg2182z00_1044;

																								obj_t BgL_arg2183z00_1045;

																								BgL_arg2182z00_1044 =
																									BGl_symbol2658z00zz__expander_structz00;
																								{	/* Eval/expdstruct.scm 133 */
																									obj_t BgL_list2184z00_1046;

																									BgL_list2184z00_1046 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2183z00_1045 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BGl_symbol2656z00zz__expander_structz00,
																										BgL_list2184z00_1046);
																								}
																								BgL_arg2176z00_1038 =
																									MAKE_PAIR(BgL_arg2182z00_1044,
																									BgL_arg2183z00_1045);
																							}
																							{	/* Eval/expdstruct.scm 134 */
																								obj_t BgL_arg2185z00_1047;

																								obj_t BgL_arg2186z00_1048;

																								BgL_arg2185z00_1047 =
																									BGl_symbol2660z00zz__expander_structz00;
																								{	/* Eval/expdstruct.scm 134 */
																									obj_t BgL_arg2187z00_1049;

																									obj_t BgL_arg2188z00_1050;

																									{	/* Eval/expdstruct.scm 134 */
																										obj_t BgL_arg2192z00_1054;

																										obj_t BgL_arg2193z00_1055;

																										BgL_arg2192z00_1054 =
																											BGl_symbol2662z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 134 */
																											obj_t
																												BgL_list2194z00_1056;
																											BgL_list2194z00_1056 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2193z00_1055 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BGl_symbol2656z00zz__expander_structz00,
																												BgL_list2194z00_1056);
																										}
																										BgL_arg2187z00_1049 =
																											MAKE_PAIR
																											(BgL_arg2192z00_1054,
																											BgL_arg2193z00_1055);
																									}
																									{	/* Eval/expdstruct.scm 134 */
																										obj_t BgL_arg2195z00_1057;

																										obj_t BgL_arg2196z00_1058;

																										BgL_arg2195z00_1057 =
																											BGl_symbol2619z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 134 */
																											obj_t
																												BgL_list2197z00_1059;
																											BgL_list2197z00_1059 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2196z00_1058 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_namez00_770,
																												BgL_list2197z00_1059);
																										}
																										BgL_arg2188z00_1050 =
																											MAKE_PAIR
																											(BgL_arg2195z00_1057,
																											BgL_arg2196z00_1058);
																									}
																									{	/* Eval/expdstruct.scm 134 */
																										obj_t BgL_list2190z00_1052;

																										{	/* Eval/expdstruct.scm 134 */
																											obj_t BgL_arg2191z00_1053;

																											BgL_arg2191z00_1053 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2190z00_1052 =
																												MAKE_PAIR
																												(BgL_arg2188z00_1050,
																												BgL_arg2191z00_1053);
																										}
																										BgL_arg2186z00_1048 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2187z00_1049,
																											BgL_list2190z00_1052);
																									}
																								}
																								BgL_arg2177z00_1039 =
																									MAKE_PAIR(BgL_arg2185z00_1047,
																									BgL_arg2186z00_1048);
																							}
																							{	/* Eval/expdstruct.scm 133 */
																								obj_t BgL_list2179z00_1041;

																								{	/* Eval/expdstruct.scm 133 */
																									obj_t BgL_arg2180z00_1042;

																									{	/* Eval/expdstruct.scm 133 */
																										obj_t BgL_arg2181z00_1043;

																										BgL_arg2181z00_1043 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2180z00_1042 =
																											MAKE_PAIR(BFALSE,
																											BgL_arg2181z00_1043);
																									}
																									BgL_list2179z00_1041 =
																										MAKE_PAIR
																										(BgL_arg2177z00_1039,
																										BgL_arg2180z00_1042);
																								}
																								BgL_arg2175z00_1037 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2176z00_1038,
																									BgL_list2179z00_1041);
																							}
																						}
																						BgL_arg2162z00_1024 =
																							MAKE_PAIR(BgL_arg2174z00_1036,
																							BgL_arg2175z00_1037);
																					}
																					{	/* Eval/expdstruct.scm 132 */
																						obj_t BgL_list2164z00_1026;

																						{	/* Eval/expdstruct.scm 132 */
																							obj_t BgL_arg2165z00_1027;

																							BgL_arg2165z00_1027 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2164z00_1026 =
																								MAKE_PAIR(BgL_arg2162z00_1024,
																								BgL_arg2165z00_1027);
																						}
																						BgL_arg2160z00_1022 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2161z00_1023,
																							BgL_list2164z00_1026);
																					}
																				}
																				BgL_arg2158z00_1020 =
																					MAKE_PAIR(BgL_arg2159z00_1021,
																					BgL_arg2160z00_1022);
																			}
																			BgL_arg2157z00_1019 =
																				BGl_evepairifyz00zz__prognz00
																				(BgL_arg2158z00_1020, BgL_xz00_1);
																		}
																		BgL_arg2155z00_1017 =
																			PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																			BgL_arg2157z00_1019, BgL_ez00_2, BEOA);
																	}
																	{	/* Eval/expdstruct.scm 139 */
																		obj_t BgL_g1825z00_1060;

																		BgL_g1825z00_1060 =
																			BGl_list2664z00zz__expander_structz00;
																		{
																			long BgL_iz00_1062;

																			obj_t BgL_slotsz00_1063;

																			obj_t BgL_resz00_1064;

																			BgL_iz00_1062 = ((long) 0);
																			BgL_slotsz00_1063 =
																				BgL_slotszd2namezd2_781;
																			BgL_resz00_1064 = BgL_g1825z00_1060;
																		BgL_zc3anonymousza32198ze3z83_1065:
																			if ((BgL_iz00_1062 == BgL_lenz00_780))
																				{	/* Eval/expdstruct.scm 142 */
																					BgL_arg2156z00_1018 = BgL_resz00_1064;
																				}
																			else
																				{	/* Eval/expdstruct.scm 144 */
																					obj_t BgL_prz00_1067;

																					BgL_prz00_1067 =
																						CAR(BgL_slotsz00_1063);
																					{	/* Eval/expdstruct.scm 145 */
																						long BgL_arg2200z00_1068;

																						obj_t BgL_arg2203z00_1069;

																						obj_t BgL_arg2204z00_1070;

																						BgL_arg2200z00_1068 =
																							(BgL_iz00_1062 + ((long) 1));
																						BgL_arg2203z00_1069 =
																							CDR(BgL_slotsz00_1063);
																						{	/* Eval/expdstruct.scm 150 */
																							obj_t BgL_arg2205z00_1071;

																							obj_t BgL_arg2206z00_1072;

																							{	/* Eval/expdstruct.scm 150 */
																								obj_t BgL_arg2207z00_1073;

																								{	/* Eval/expdstruct.scm 150 */
																									obj_t BgL_arg2208z00_1074;

																									{	/* Eval/expdstruct.scm 150 */
																										obj_t BgL_arg2209z00_1075;

																										obj_t BgL_arg2210z00_1076;

																										BgL_arg2209z00_1075 =
																											BGl_symbol2623z00zz__expander_structz00;
																										{	/* Eval/expdstruct.scm 151 */
																											obj_t BgL_arg2211z00_1077;

																											obj_t BgL_arg2212z00_1078;

																											{	/* Eval/expdstruct.scm 151 */
																												obj_t
																													BgL_arg2217z00_1082;
																												obj_t
																													BgL_arg2222z00_1083;
																												{	/* Eval/expdstruct.scm 151 */
																													obj_t
																														BgL_list2223z00_1084;
																													{	/* Eval/expdstruct.scm 151 */
																														obj_t
																															BgL_arg2224z00_1085;
																														{	/* Eval/expdstruct.scm 151 */
																															obj_t
																																BgL_arg2226z00_1086;
																															obj_t
																																BgL_arg2227z00_1087;
																															BgL_arg2226z00_1086
																																=
																																BGl_symbol2650z00zz__expander_structz00;
																															BgL_arg2227z00_1087
																																=
																																MAKE_PAIR
																																(BgL_prz00_1067,
																																BNIL);
																															BgL_arg2224z00_1085
																																=
																																MAKE_PAIR
																																(BgL_arg2226z00_1086,
																																BgL_arg2227z00_1087);
																														}
																														BgL_list2223z00_1084
																															=
																															MAKE_PAIR
																															(BgL_namez00_770,
																															BgL_arg2224z00_1085);
																													}
																													BgL_arg2217z00_1082 =
																														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																														(BgL_list2223z00_1084);
																												}
																												{	/* Eval/expdstruct.scm 151 */
																													obj_t
																														BgL_list2228z00_1088;
																													BgL_list2228z00_1088 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2222z00_1083 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BGl_symbol2668z00zz__expander_structz00,
																														BgL_list2228z00_1088);
																												}
																												BgL_arg2211z00_1077 =
																													MAKE_PAIR
																													(BgL_arg2217z00_1082,
																													BgL_arg2222z00_1083);
																											}
																											{	/* Eval/expdstruct.scm 152 */
																												obj_t
																													BgL_arg2233z00_1089;
																												obj_t
																													BgL_arg2234z00_1090;
																												BgL_arg2233z00_1089 =
																													BGl_symbol2629z00zz__expander_structz00;
																												{	/* Eval/expdstruct.scm 152 */
																													obj_t
																														BgL_arg2235z00_1091;
																													obj_t
																														BgL_arg2236z00_1092;
																													obj_t
																														BgL_arg2237z00_1093;
																													{	/* Eval/expdstruct.scm 152 */
																														obj_t
																															BgL_arg2243z00_1098;
																														obj_t
																															BgL_arg2244z00_1099;
																														{	/* Eval/expdstruct.scm 152 */
																															obj_t
																																BgL_arg2245z00_1100;
																															{	/* Eval/expdstruct.scm 152 */
																																obj_t
																																	BgL_arg2246z00_1101;
																																obj_t
																																	BgL_arg2247z00_1102;
																																{	/* Eval/expdstruct.scm 152 */
																																	obj_t
																																		BgL_res2601z00_1763;
																																	{	/* Eval/expdstruct.scm 152 */
																																		obj_t
																																			BgL_symbolz00_1761;
																																		BgL_symbolz00_1761
																																			=
																																			BgL_namez00_770;
																																		{	/* Eval/expdstruct.scm 152 */
																																			obj_t
																																				BgL_arg2517z00_1762;
																																			BgL_arg2517z00_1762
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_1761);
																																			BgL_res2601z00_1763
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2517z00_1762);
																																	}}
																																	BgL_arg2246z00_1101
																																		=
																																		BgL_res2601z00_1763;
																																}
																																{	/* Eval/expdstruct.scm 152 */
																																	obj_t
																																		BgL_res2602z00_1766;
																																	{	/* Eval/expdstruct.scm 152 */
																																		obj_t
																																			BgL_symbolz00_1764;
																																		BgL_symbolz00_1764
																																			=
																																			BGl_symbol2654z00zz__expander_structz00;
																																		{	/* Eval/expdstruct.scm 152 */
																																			obj_t
																																				BgL_arg2517z00_1765;
																																			BgL_arg2517z00_1765
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_1764);
																																			BgL_res2602z00_1766
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2517z00_1765);
																																	}}
																																	BgL_arg2247z00_1102
																																		=
																																		BgL_res2602z00_1766;
																																}
																																{	/* Eval/expdstruct.scm 152 */
																																	obj_t
																																		BgL_list2248z00_1103;
																																	{	/* Eval/expdstruct.scm 152 */
																																		obj_t
																																			BgL_arg2249z00_1104;
																																		BgL_arg2249z00_1104
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2247z00_1102,
																																			BNIL);
																																		BgL_list2248z00_1103
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2246z00_1101,
																																			BgL_arg2249z00_1104);
																																	}
																																	BgL_arg2245z00_1100
																																		=
																																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																		(BgL_list2248z00_1103);
																															}}
																															BgL_arg2243z00_1098
																																=
																																string_to_symbol
																																(BSTRING_TO_STRING
																																(BgL_arg2245z00_1100));
																														}
																														{	/* Eval/expdstruct.scm 152 */
																															obj_t
																																BgL_list2250z00_1105;
																															BgL_list2250z00_1105
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2244z00_1099
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BGl_symbol2668z00zz__expander_structz00,
																																BgL_list2250z00_1105);
																														}
																														BgL_arg2235z00_1091
																															=
																															MAKE_PAIR
																															(BgL_arg2243z00_1098,
																															BgL_arg2244z00_1099);
																													}
																													{	/* Eval/expdstruct.scm 153 */
																														obj_t
																															BgL_arg2251z00_1106;
																														obj_t
																															BgL_arg2252z00_1107;
																														BgL_arg2251z00_1106
																															=
																															BGl_symbol2670z00zz__expander_structz00;
																														{	/* Eval/expdstruct.scm 153 */
																															obj_t
																																BgL_list2253z00_1108;
																															{	/* Eval/expdstruct.scm 153 */
																																obj_t
																																	BgL_arg2255z00_1109;
																																BgL_arg2255z00_1109
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list2253z00_1108
																																	=
																																	MAKE_PAIR(BINT
																																	(BgL_iz00_1062),
																																	BgL_arg2255z00_1109);
																															}
																															BgL_arg2252z00_1107
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BGl_symbol2668z00zz__expander_structz00,
																																BgL_list2253z00_1108);
																														}
																														BgL_arg2236z00_1092
																															=
																															MAKE_PAIR
																															(BgL_arg2251z00_1106,
																															BgL_arg2252z00_1107);
																													}
																													{	/* Eval/expdstruct.scm 154 */
																														obj_t
																															BgL_arg2256z00_1110;
																														obj_t
																															BgL_arg2257z00_1111;
																														BgL_arg2256z00_1110
																															=
																															BGl_symbol2639z00zz__expander_structz00;
																														{	/* Eval/expdstruct.scm 154 */
																															obj_t
																																BgL_arg2260z00_1113;
																															obj_t
																																BgL_arg2262z00_1114;
																															{	/* Eval/expdstruct.scm 156 */
																																obj_t
																																	BgL_res2603z00_1770;
																																{	/* Eval/expdstruct.scm 156 */
																																	obj_t
																																		BgL_symbolz00_1768;
																																	BgL_symbolz00_1768
																																		=
																																		BgL_namez00_770;
																																	{	/* Eval/expdstruct.scm 156 */
																																		obj_t
																																			BgL_arg2517z00_1769;
																																		BgL_arg2517z00_1769
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_symbolz00_1768);
																																		BgL_res2603z00_1770
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2517z00_1769);
																																}}
																																BgL_arg2260z00_1113
																																	=
																																	BgL_res2603z00_1770;
																															}
																															BgL_arg2262z00_1114
																																=
																																BGl_symbol2668z00zz__expander_structz00;
																															{	/* Eval/expdstruct.scm 154 */
																																obj_t
																																	BgL_list2264z00_1116;
																																{	/* Eval/expdstruct.scm 154 */
																																	obj_t
																																		BgL_arg2265z00_1117;
																																	{	/* Eval/expdstruct.scm 154 */
																																		obj_t
																																			BgL_arg2266z00_1118;
																																		BgL_arg2266z00_1118
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2265z00_1117
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2262z00_1114,
																																			BgL_arg2266z00_1118);
																																	}
																																	BgL_list2264z00_1116
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2260z00_1113,
																																		BgL_arg2265z00_1117);
																																}
																																BgL_arg2257z00_1111
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_string2672z00zz__expander_structz00,
																																	BgL_list2264z00_1116);
																														}}
																														BgL_arg2237z00_1093
																															=
																															MAKE_PAIR
																															(BgL_arg2256z00_1110,
																															BgL_arg2257z00_1111);
																													}
																													{	/* Eval/expdstruct.scm 152 */
																														obj_t
																															BgL_list2239z00_1095;
																														{	/* Eval/expdstruct.scm 152 */
																															obj_t
																																BgL_arg2240z00_1096;
																															{	/* Eval/expdstruct.scm 152 */
																																obj_t
																																	BgL_arg2242z00_1097;
																																BgL_arg2242z00_1097
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2240z00_1096
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2237z00_1093,
																																	BgL_arg2242z00_1097);
																															}
																															BgL_list2239z00_1095
																																=
																																MAKE_PAIR
																																(BgL_arg2236z00_1092,
																																BgL_arg2240z00_1096);
																														}
																														BgL_arg2234z00_1090
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2235z00_1091,
																															BgL_list2239z00_1095);
																												}}
																												BgL_arg2212z00_1078 =
																													MAKE_PAIR
																													(BgL_arg2233z00_1089,
																													BgL_arg2234z00_1090);
																											}
																											{	/* Eval/expdstruct.scm 150 */
																												obj_t
																													BgL_list2214z00_1080;
																												{	/* Eval/expdstruct.scm 150 */
																													obj_t
																														BgL_arg2216z00_1081;
																													BgL_arg2216z00_1081 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2214z00_1080 =
																														MAKE_PAIR
																														(BgL_arg2212z00_1078,
																														BgL_arg2216z00_1081);
																												}
																												BgL_arg2210z00_1076 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2211z00_1077,
																													BgL_list2214z00_1080);
																										}}
																										BgL_arg2208z00_1074 =
																											MAKE_PAIR
																											(BgL_arg2209z00_1075,
																											BgL_arg2210z00_1076);
																									}
																									BgL_arg2207z00_1073 =
																										BGl_evepairifyz00zz__prognz00
																										(BgL_arg2208z00_1074,
																										BgL_xz00_1);
																								}
																								BgL_arg2205z00_1071 =
																									PROCEDURE_ENTRY(BgL_ez00_2)
																									(BgL_ez00_2,
																									BgL_arg2207z00_1073,
																									BgL_ez00_2, BEOA);
																							}
																							{	/* Eval/expdstruct.scm 163 */
																								obj_t BgL_arg2267z00_1119;

																								{	/* Eval/expdstruct.scm 163 */
																									obj_t BgL_arg2268z00_1120;

																									{	/* Eval/expdstruct.scm 163 */
																										obj_t BgL_arg2269z00_1121;

																										{	/* Eval/expdstruct.scm 163 */
																											obj_t BgL_arg2270z00_1122;

																											obj_t BgL_arg2271z00_1123;

																											BgL_arg2270z00_1122 =
																												BGl_symbol2623z00zz__expander_structz00;
																											{	/* Eval/expdstruct.scm 164 */
																												obj_t
																													BgL_arg2272z00_1124;
																												obj_t
																													BgL_arg2274z00_1125;
																												{	/* Eval/expdstruct.scm 164 */
																													obj_t
																														BgL_arg2278z00_1129;
																													obj_t
																														BgL_arg2279z00_1130;
																													{	/* Eval/expdstruct.scm 164 */
																														obj_t
																															BgL_list2280z00_1131;
																														{	/* Eval/expdstruct.scm 164 */
																															obj_t
																																BgL_arg2281z00_1132;
																															{	/* Eval/expdstruct.scm 164 */
																																obj_t
																																	BgL_arg2282z00_1133;
																																obj_t
																																	BgL_arg2283z00_1134;
																																BgL_arg2282z00_1133
																																	=
																																	BGl_symbol2650z00zz__expander_structz00;
																																{	/* Eval/expdstruct.scm 164 */
																																	obj_t
																																		BgL_arg2284z00_1135;
																																	BgL_arg2284z00_1135
																																		=
																																		MAKE_PAIR
																																		(BGl_symbol2652z00zz__expander_structz00,
																																		BNIL);
																																	BgL_arg2283z00_1134
																																		=
																																		MAKE_PAIR
																																		(BgL_prz00_1067,
																																		BgL_arg2284z00_1135);
																																}
																																BgL_arg2281z00_1132
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2282z00_1133,
																																	BgL_arg2283z00_1134);
																															}
																															BgL_list2280z00_1131
																																=
																																MAKE_PAIR
																																(BgL_namez00_770,
																																BgL_arg2281z00_1132);
																														}
																														BgL_arg2278z00_1129
																															=
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list2280z00_1131);
																													}
																													{	/* Eval/expdstruct.scm 164 */
																														obj_t
																															BgL_list2285z00_1136;
																														{	/* Eval/expdstruct.scm 164 */
																															obj_t
																																BgL_arg2286z00_1137;
																															obj_t
																																BgL_arg2289z00_1138;
																															BgL_arg2286z00_1137
																																=
																																BGl_symbol2673z00zz__expander_structz00;
																															BgL_arg2289z00_1138
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2285z00_1136
																																=
																																MAKE_PAIR
																																(BgL_arg2286z00_1137,
																																BgL_arg2289z00_1138);
																														}
																														BgL_arg2279z00_1130
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BGl_symbol2668z00zz__expander_structz00,
																															BgL_list2285z00_1136);
																													}
																													BgL_arg2272z00_1124 =
																														MAKE_PAIR
																														(BgL_arg2278z00_1129,
																														BgL_arg2279z00_1130);
																												}
																												{	/* Eval/expdstruct.scm 165 */
																													obj_t
																														BgL_arg2290z00_1139;
																													obj_t
																														BgL_arg2291z00_1140;
																													BgL_arg2290z00_1139 =
																														BGl_symbol2629z00zz__expander_structz00;
																													{	/* Eval/expdstruct.scm 165 */
																														obj_t
																															BgL_arg2292z00_1141;
																														obj_t
																															BgL_arg2293z00_1142;
																														obj_t
																															BgL_arg2294z00_1143;
																														{	/* Eval/expdstruct.scm 165 */
																															obj_t
																																BgL_arg2301z00_1148;
																															obj_t
																																BgL_arg2302z00_1149;
																															{	/* Eval/expdstruct.scm 165 */
																																obj_t
																																	BgL_arg2303z00_1150;
																																{	/* Eval/expdstruct.scm 165 */
																																	obj_t
																																		BgL_arg2304z00_1151;
																																	obj_t
																																		BgL_arg2305z00_1152;
																																	{	/* Eval/expdstruct.scm 165 */
																																		obj_t
																																			BgL_res2604z00_1773;
																																		{	/* Eval/expdstruct.scm 165 */
																																			obj_t
																																				BgL_symbolz00_1771;
																																			BgL_symbolz00_1771
																																				=
																																				BgL_namez00_770;
																																			{	/* Eval/expdstruct.scm 165 */
																																				obj_t
																																					BgL_arg2517z00_1772;
																																				BgL_arg2517z00_1772
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_1771);
																																				BgL_res2604z00_1773
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg2517z00_1772);
																																		}}
																																		BgL_arg2304z00_1151
																																			=
																																			BgL_res2604z00_1773;
																																	}
																																	{	/* Eval/expdstruct.scm 165 */
																																		obj_t
																																			BgL_res2605z00_1776;
																																		{	/* Eval/expdstruct.scm 165 */
																																			obj_t
																																				BgL_symbolz00_1774;
																																			BgL_symbolz00_1774
																																				=
																																				BGl_symbol2654z00zz__expander_structz00;
																																			{	/* Eval/expdstruct.scm 165 */
																																				obj_t
																																					BgL_arg2517z00_1775;
																																				BgL_arg2517z00_1775
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_1774);
																																				BgL_res2605z00_1776
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg2517z00_1775);
																																		}}
																																		BgL_arg2305z00_1152
																																			=
																																			BgL_res2605z00_1776;
																																	}
																																	{	/* Eval/expdstruct.scm 165 */
																																		obj_t
																																			BgL_list2306z00_1153;
																																		{	/* Eval/expdstruct.scm 165 */
																																			obj_t
																																				BgL_arg2307z00_1154;
																																			BgL_arg2307z00_1154
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2305z00_1152,
																																				BNIL);
																																			BgL_list2306z00_1153
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2304z00_1151,
																																				BgL_arg2307z00_1154);
																																		}
																																		BgL_arg2303z00_1150
																																			=
																																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																			(BgL_list2306z00_1153);
																																}}
																																BgL_arg2301z00_1148
																																	=
																																	string_to_symbol
																																	(BSTRING_TO_STRING
																																	(BgL_arg2303z00_1150));
																															}
																															{	/* Eval/expdstruct.scm 165 */
																																obj_t
																																	BgL_list2308z00_1155;
																																BgL_list2308z00_1155
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2302z00_1149
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_symbol2668z00zz__expander_structz00,
																																	BgL_list2308z00_1155);
																															}
																															BgL_arg2292z00_1141
																																=
																																MAKE_PAIR
																																(BgL_arg2301z00_1148,
																																BgL_arg2302z00_1149);
																														}
																														{	/* Eval/expdstruct.scm 166 */
																															obj_t
																																BgL_arg2309z00_1156;
																															obj_t
																																BgL_arg2310z00_1157;
																															BgL_arg2309z00_1156
																																=
																																BGl_symbol2675z00zz__expander_structz00;
																															{	/* Eval/expdstruct.scm 166 */
																																obj_t
																																	BgL_list2311z00_1158;
																																{	/* Eval/expdstruct.scm 166 */
																																	obj_t
																																		BgL_arg2312z00_1159;
																																	{	/* Eval/expdstruct.scm 166 */
																																		obj_t
																																			BgL_arg2313z00_1160;
																																		obj_t
																																			BgL_arg2314z00_1161;
																																		BgL_arg2313z00_1160
																																			=
																																			BGl_symbol2673z00zz__expander_structz00;
																																		BgL_arg2314z00_1161
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg2312z00_1159
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2313z00_1160,
																																			BgL_arg2314z00_1161);
																																	}
																																	BgL_list2311z00_1158
																																		=
																																		MAKE_PAIR
																																		(BINT
																																		(BgL_iz00_1062),
																																		BgL_arg2312z00_1159);
																																}
																																BgL_arg2310z00_1157
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_symbol2668z00zz__expander_structz00,
																																	BgL_list2311z00_1158);
																															}
																															BgL_arg2293z00_1142
																																=
																																MAKE_PAIR
																																(BgL_arg2309z00_1156,
																																BgL_arg2310z00_1157);
																														}
																														{	/* Eval/expdstruct.scm 167 */
																															obj_t
																																BgL_arg2315z00_1162;
																															obj_t
																																BgL_arg2316z00_1163;
																															BgL_arg2315z00_1162
																																=
																																BGl_symbol2639z00zz__expander_structz00;
																															{	/* Eval/expdstruct.scm 167 */
																																obj_t
																																	BgL_arg2318z00_1165;
																																obj_t
																																	BgL_arg2319z00_1166;
																																{	/* Eval/expdstruct.scm 169 */
																																	obj_t
																																		BgL_res2606z00_1780;
																																	{	/* Eval/expdstruct.scm 169 */
																																		obj_t
																																			BgL_symbolz00_1778;
																																		BgL_symbolz00_1778
																																			=
																																			BgL_namez00_770;
																																		{	/* Eval/expdstruct.scm 169 */
																																			obj_t
																																				BgL_arg2517z00_1779;
																																			BgL_arg2517z00_1779
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_symbolz00_1778);
																																			BgL_res2606z00_1780
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg2517z00_1779);
																																	}}
																																	BgL_arg2318z00_1165
																																		=
																																		BgL_res2606z00_1780;
																																}
																																BgL_arg2319z00_1166
																																	=
																																	BGl_symbol2668z00zz__expander_structz00;
																																{	/* Eval/expdstruct.scm 167 */
																																	obj_t
																																		BgL_list2321z00_1168;
																																	{	/* Eval/expdstruct.scm 167 */
																																		obj_t
																																			BgL_arg2322z00_1169;
																																		{	/* Eval/expdstruct.scm 167 */
																																			obj_t
																																				BgL_arg2323z00_1170;
																																			BgL_arg2323z00_1170
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2322z00_1169
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2319z00_1166,
																																				BgL_arg2323z00_1170);
																																		}
																																		BgL_list2321z00_1168
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2318z00_1165,
																																			BgL_arg2322z00_1169);
																																	}
																																	BgL_arg2316z00_1163
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BGl_string2677z00zz__expander_structz00,
																																		BgL_list2321z00_1168);
																															}}
																															BgL_arg2294z00_1143
																																=
																																MAKE_PAIR
																																(BgL_arg2315z00_1162,
																																BgL_arg2316z00_1163);
																														}
																														{	/* Eval/expdstruct.scm 165 */
																															obj_t
																																BgL_list2296z00_1145;
																															{	/* Eval/expdstruct.scm 165 */
																																obj_t
																																	BgL_arg2297z00_1146;
																																{	/* Eval/expdstruct.scm 165 */
																																	obj_t
																																		BgL_arg2300z00_1147;
																																	BgL_arg2300z00_1147
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2297z00_1146
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2294z00_1143,
																																		BgL_arg2300z00_1147);
																																}
																																BgL_list2296z00_1145
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2293z00_1142,
																																	BgL_arg2297z00_1146);
																															}
																															BgL_arg2291z00_1140
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2292z00_1141,
																																BgL_list2296z00_1145);
																													}}
																													BgL_arg2274z00_1125 =
																														MAKE_PAIR
																														(BgL_arg2290z00_1139,
																														BgL_arg2291z00_1140);
																												}
																												{	/* Eval/expdstruct.scm 163 */
																													obj_t
																														BgL_list2276z00_1127;
																													{	/* Eval/expdstruct.scm 163 */
																														obj_t
																															BgL_arg2277z00_1128;
																														BgL_arg2277z00_1128
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2276z00_1127
																															=
																															MAKE_PAIR
																															(BgL_arg2274z00_1125,
																															BgL_arg2277z00_1128);
																													}
																													BgL_arg2271z00_1123 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2272z00_1124,
																														BgL_list2276z00_1127);
																											}}
																											BgL_arg2269z00_1121 =
																												MAKE_PAIR
																												(BgL_arg2270z00_1122,
																												BgL_arg2271z00_1123);
																										}
																										BgL_arg2268z00_1120 =
																											BGl_evepairifyz00zz__prognz00
																											(BgL_arg2269z00_1121,
																											BgL_xz00_1);
																									}
																									BgL_arg2267z00_1119 =
																										PROCEDURE_ENTRY(BgL_ez00_2)
																										(BgL_ez00_2,
																										BgL_arg2268z00_1120,
																										BgL_ez00_2, BEOA);
																								}
																								BgL_arg2206z00_1072 =
																									MAKE_PAIR(BgL_arg2267z00_1119,
																									BgL_resz00_1064);
																							}
																							BgL_arg2204z00_1070 =
																								MAKE_PAIR(BgL_arg2205z00_1071,
																								BgL_arg2206z00_1072);
																						}
																						{
																							obj_t BgL_resz00_2376;

																							obj_t BgL_slotsz00_2375;

																							long BgL_iz00_2374;

																							BgL_iz00_2374 =
																								BgL_arg2200z00_1068;
																							BgL_slotsz00_2375 =
																								BgL_arg2203z00_1069;
																							BgL_resz00_2376 =
																								BgL_arg2204z00_1070;
																							BgL_resz00_1064 = BgL_resz00_2376;
																							BgL_slotsz00_1063 =
																								BgL_slotsz00_2375;
																							BgL_iz00_1062 = BgL_iz00_2374;
																							goto
																								BgL_zc3anonymousza32198ze3z83_1065;
																						}
																					}
																				}
																		}
																	}
																	BgL_arg2090z00_954 =
																		MAKE_PAIR(BgL_arg2155z00_1017,
																		BgL_arg2156z00_1018);
																}
																BgL_arg1908z00_787 =
																	MAKE_PAIR(BgL_arg2089z00_953,
																	BgL_arg2090z00_954);
															}
															BgL_arg1906z00_785 =
																MAKE_PAIR(BgL_arg1907z00_786,
																BgL_arg1908z00_787);
														}
														return
															MAKE_PAIR(BgL_arg1905z00_784, BgL_arg1906z00_785);
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Eval/expdstruct.scm 59 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2616z00zz__expander_structz00,
									BGl_string2617z00zz__expander_structz00, BgL_xz00_1);
							}
					}
				else
					{	/* Eval/expdstruct.scm 59 */
						return
							BGl_errorz00zz__errorz00(BGl_string2616z00zz__expander_structz00,
							BGl_string2617z00zz__expander_structz00, BgL_xz00_1);
					}
			}
		}
	}



/* _expand-eval-define-struct */
	obj_t BGl__expandzd2evalzd2definezd2structzd2zz__expander_structz00(obj_t
		BgL_envz00_1960, obj_t BgL_xz00_1961, obj_t BgL_ez00_1962)
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 58 */
			return
				BGl_expandzd2evalzd2definezd2structzd2zz__expander_structz00
				(BgL_xz00_1961, BgL_ez00_1962);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_structz00()
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_structz00()
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_structz00()
	{
		AN_OBJECT;
		{	/* Eval/expdstruct.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					123685331),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2678z00zz__expander_structz00));
		}
	}

#ifdef __cplusplus
}
#endif
