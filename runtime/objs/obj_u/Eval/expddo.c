/*===========================================================================*/
/*   (Eval/expddo.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expddo.scm -indent -o objs/obj_u/Eval/expddo.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_doz00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__expandzd2dozd2zz__expander_doz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_doz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_doz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2224z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol2226z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol2228z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol2230z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol2232z00zz__expander_doz00 = BUNSPEC;
	static obj_t BGl_symbol2234z00zz__expander_doz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_doz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern long bgl_list_length(obj_t);
	extern obj_t bgl_reverse(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_doz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2dozd2envz00zz__expander_doz00,
		BgL_bgl__expandza7d2doza7d2za72237za7,
		BGl__expandzd2dozd2zz__expander_doz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2221z00zz__expander_doz00,
		BgL_bgl_string2221za700za7za7_2238za7, "do-loop--", 9);
	      DEFINE_STRING(BGl_string2222z00zz__expander_doz00,
		BgL_bgl_string2222za700za7za7_2239za7, "do", 2);
	      DEFINE_STRING(BGl_string2223z00zz__expander_doz00,
		BgL_bgl_string2223za700za7za7_2240za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2225z00zz__expander_doz00,
		BgL_bgl_string2225za700za7za7_2241za7, "Illegal form:", 13);
	      DEFINE_STRING(BGl_string2227z00zz__expander_doz00,
		BgL_bgl_string2227za700za7za7_2242za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2229z00zz__expander_doz00,
		BgL_bgl_string2229za700za7za7_2243za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2231z00zz__expander_doz00,
		BgL_bgl_string2231za700za7za7_2244za7, "if", 2);
	      DEFINE_STRING(BGl_string2233z00zz__expander_doz00,
		BgL_bgl_string2233za700za7za7_2245za7, "begin", 5);
	      DEFINE_STRING(BGl_string2235z00zz__expander_doz00,
		BgL_bgl_string2235za700za7za7_2246za7, "exp", 3);
	      DEFINE_STRING(BGl_string2236z00zz__expander_doz00,
		BgL_bgl_string2236za700za7za7_2247za7, "__expander_do", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__expander_doz00(long
		BgL_checksumz00_1521, char *BgL_fromz00_1522)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_doz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_doz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_doz00();
					BGl_importedzd2moduleszd2initz00zz__expander_doz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_doz00()
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 14 */
			BGl_symbol2224z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2222z00zz__expander_doz00);
			BGl_symbol2226z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2227z00zz__expander_doz00);
			BGl_symbol2228z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2229z00zz__expander_doz00);
			BGl_symbol2230z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2231z00zz__expander_doz00);
			BGl_symbol2232z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2233z00zz__expander_doz00);
			return (BGl_symbol2234z00zz__expander_doz00 =
				bstring_to_symbol(BGl_string2235z00zz__expander_doz00), BUNSPEC);
		}
	}



/* expand-do */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2dozd2zz__expander_doz00(obj_t
		BgL_expz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 57 */
			{
				obj_t BgL_bindingsz00_770;

				obj_t BgL_endz00_771;

				obj_t BgL_commandz00_772;

				if (PAIRP(BgL_expz00_1))
					{	/* Eval/expddo.scm 58 */
						obj_t BgL_cdrzd21399zd2_777;

						BgL_cdrzd21399zd2_777 = CDR(BgL_expz00_1);
						if (PAIRP(BgL_cdrzd21399zd2_777))
							{	/* Eval/expddo.scm 58 */
								obj_t BgL_cdrzd21404zd2_779;

								BgL_cdrzd21404zd2_779 = CDR(BgL_cdrzd21399zd2_777);
								if (PAIRP(BgL_cdrzd21404zd2_779))
									{	/* Eval/expddo.scm 58 */
										BgL_bindingsz00_770 = CAR(BgL_cdrzd21399zd2_777);
										BgL_endz00_771 = CAR(BgL_cdrzd21404zd2_779);
										BgL_commandz00_772 = CDR(BgL_cdrzd21404zd2_779);
										{	/* Eval/expddo.scm 60 */
											obj_t BgL_varsz00_785;

											BgL_varsz00_785 = BNIL;
											{	/* Eval/expddo.scm 61 */
												obj_t BgL_initsz00_786;

												BgL_initsz00_786 = BNIL;
												{	/* Eval/expddo.scm 62 */
													obj_t BgL_stepsz00_787;

													BgL_stepsz00_787 = BNIL;
													{	/* Eval/expddo.scm 63 */
														obj_t BgL_loopz00_788;

														BgL_loopz00_788 =
															BGl_gensymz00zz__r4_symbols_6_4z00
															(BGl_string2221z00zz__expander_doz00);
														{	/* Eval/expddo.scm 64 */
															obj_t BgL_testz00_789;

															if (PAIRP(BgL_endz00_771))
																{	/* Eval/expddo.scm 65 */
																	BgL_testz00_789 = CAR(BgL_endz00_771);
																}
															else
																{	/* Eval/expddo.scm 65 */
																	BgL_testz00_789 =
																		BGl_errorz00zz__errorz00
																		(BGl_string2222z00zz__expander_doz00,
																		BGl_string2223z00zz__expander_doz00,
																		BgL_expz00_1);
																}
															{	/* Eval/expddo.scm 65 */
																obj_t BgL_endingz00_790;

																if (NULLP(CDR(BgL_endz00_771)))
																	{	/* Eval/expddo.scm 69 */
																		obj_t BgL_list1957z00_850;

																		BgL_list1957z00_850 =
																			MAKE_PAIR(BFALSE, BNIL);
																		BgL_endingz00_790 = BgL_list1957z00_850;
																	}
																else
																	{	/* Eval/expddo.scm 68 */
																		BgL_endingz00_790 = CDR(BgL_endz00_771);
																	}
																{	/* Eval/expddo.scm 71 */

																	{	/* Eval/expddo.scm 72 */
																		obj_t BgL_g1850z00_792;

																		BgL_g1850z00_792 =
																			bgl_reverse(BgL_bindingsz00_770);
																		{
																			obj_t BgL_l1848z00_794;

																			BgL_l1848z00_794 = BgL_g1850z00_792;
																		BgL_zc3anonymousza31899ze3z83_795:
																			if (PAIRP(BgL_l1848z00_794))
																				{	/* Eval/expddo.scm 85 */
																					{	/* Eval/expddo.scm 74 */
																						obj_t BgL_varzd2initzd2stepz00_797;

																						BgL_varzd2initzd2stepz00_797 =
																							CAR(BgL_l1848z00_794);
																						{	/* Eval/expddo.scm 74 */
																							bool_t BgL_testz00_1556;

																							if (
																								(bgl_list_length
																									(BgL_varzd2initzd2stepz00_797)
																									>= ((long) 2)))
																								{	/* Eval/expddo.scm 74 */
																									BgL_testz00_1556 =
																										(bgl_list_length
																										(BgL_varzd2initzd2stepz00_797)
																										<= ((long) 3));
																								}
																							else
																								{	/* Eval/expddo.scm 74 */
																									BgL_testz00_1556 =
																										((bool_t) 0);
																								}
																							if (BgL_testz00_1556)
																								{	/* Eval/expddo.scm 76 */
																									obj_t BgL_varz00_799;

																									BgL_varz00_799 =
																										CAR
																										(BgL_varzd2initzd2stepz00_797);
																									{	/* Eval/expddo.scm 76 */
																										obj_t BgL_initz00_800;

																										{	/* Eval/expddo.scm 77 */
																											obj_t BgL_pairz00_1319;

																											BgL_pairz00_1319 =
																												BgL_varzd2initzd2stepz00_797;
																											BgL_initz00_800 =
																												CAR(CDR
																												(BgL_pairz00_1319));
																										}
																										{	/* Eval/expddo.scm 77 */
																											obj_t BgL_stepz00_801;

																											{	/* Eval/expddo.scm 78 */
																												bool_t BgL_testz00_1565;

																												{	/* Eval/expddo.scm 78 */
																													obj_t BgL_auxz00_1566;

																													{	/* Eval/expddo.scm 78 */
																														obj_t
																															BgL_pairz00_1323;
																														BgL_pairz00_1323 =
																															BgL_varzd2initzd2stepz00_797;
																														BgL_auxz00_1566 =
																															CDR(CDR
																															(BgL_pairz00_1323));
																													}
																													BgL_testz00_1565 =
																														NULLP
																														(BgL_auxz00_1566);
																												}
																												if (BgL_testz00_1565)
																													{	/* Eval/expddo.scm 78 */
																														BgL_stepz00_801 =
																															BgL_varz00_799;
																													}
																												else
																													{	/* Eval/expddo.scm 79 */
																														obj_t
																															BgL_pairz00_1332;
																														{	/* Eval/expddo.scm 79 */
																															obj_t
																																BgL_pairz00_1328;
																															BgL_pairz00_1328 =
																																BgL_varzd2initzd2stepz00_797;
																															BgL_pairz00_1332 =
																																CDR(CDR
																																(BgL_pairz00_1328));
																														}
																														BgL_stepz00_801 =
																															CAR
																															(BgL_pairz00_1332);
																													}
																											}
																											{	/* Eval/expddo.scm 78 */

																												BgL_varsz00_785 =
																													MAKE_PAIR
																													(BgL_varz00_799,
																													BgL_varsz00_785);
																												BgL_stepsz00_787 =
																													MAKE_PAIR
																													(BgL_stepz00_801,
																													BgL_stepsz00_787);
																												BgL_initsz00_786 =
																													MAKE_PAIR
																													(BgL_initz00_800,
																													BgL_initsz00_786);
																											}
																										}
																									}
																								}
																							else
																								{	/* Eval/expddo.scm 74 */
																									BGl_errorz00zz__errorz00
																										(BGl_symbol2224z00zz__expander_doz00,
																										BGl_string2225z00zz__expander_doz00,
																										BgL_varzd2initzd2stepz00_797);
																								}
																						}
																					}
																					{
																						obj_t BgL_l1848z00_1577;

																						BgL_l1848z00_1577 =
																							CDR(BgL_l1848z00_794);
																						BgL_l1848z00_794 =
																							BgL_l1848z00_1577;
																						goto
																							BgL_zc3anonymousza31899ze3z83_795;
																					}
																				}
																			else
																				{	/* Eval/expddo.scm 85 */
																					((bool_t) 1);
																				}
																		}
																	}
																	{	/* Eval/expddo.scm 86 */
																		obj_t BgL_arg1911z00_812;

																		{	/* Eval/expddo.scm 86 */
																			obj_t BgL_arg1912z00_813;

																			obj_t BgL_arg1914z00_814;

																			BgL_arg1912z00_813 =
																				BGl_symbol2226z00zz__expander_doz00;
																			{	/* Eval/expddo.scm 86 */
																				obj_t BgL_arg1915z00_815;

																				obj_t BgL_arg1916z00_816;

																				{	/* Eval/expddo.scm 86 */
																					obj_t BgL_arg1921z00_820;

																					{	/* Eval/expddo.scm 86 */
																						obj_t BgL_arg1923z00_822;

																						{	/* Eval/expddo.scm 86 */
																							obj_t BgL_arg1924z00_823;

																							{	/* Eval/expddo.scm 86 */
																								obj_t BgL_arg1927z00_826;

																								obj_t BgL_arg1929z00_827;

																								BgL_arg1927z00_826 =
																									BGl_symbol2228z00zz__expander_doz00;
																								{	/* Eval/expddo.scm 87 */
																									obj_t BgL_arg1930z00_828;

																									{	/* Eval/expddo.scm 87 */
																										obj_t BgL_arg1937z00_832;

																										obj_t BgL_arg1938z00_833;

																										BgL_arg1937z00_832 =
																											BGl_symbol2230z00zz__expander_doz00;
																										{	/* Eval/expddo.scm 88 */
																											obj_t BgL_arg1940z00_834;

																											obj_t BgL_arg1941z00_835;

																											BgL_arg1940z00_834 =
																												MAKE_PAIR
																												(BGl_symbol2232z00zz__expander_doz00,
																												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																												(BgL_endingz00_790,
																													BNIL));
																											{	/* Eval/expddo.scm 89 */
																												obj_t
																													BgL_arg1949z00_842;
																												obj_t
																													BgL_arg1950z00_843;
																												BgL_arg1949z00_842 =
																													BGl_symbol2232z00zz__expander_doz00;
																												{	/* Eval/expddo.scm 90 */
																													obj_t
																														BgL_arg1951z00_844;
																													{	/* Eval/expddo.scm 90 */
																														obj_t
																															BgL_arg1952z00_845;
																														BgL_arg1952z00_845 =
																															MAKE_PAIR
																															(BgL_loopz00_788,
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_stepsz00_787,
																																BNIL));
																														BgL_arg1951z00_844 =
																															MAKE_PAIR
																															(BgL_arg1952z00_845,
																															BNIL);
																													}
																													BgL_arg1950z00_843 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_commandz00_772,
																														BgL_arg1951z00_844);
																												}
																												BgL_arg1941z00_835 =
																													MAKE_PAIR
																													(BgL_arg1949z00_842,
																													BgL_arg1950z00_843);
																											}
																											{	/* Eval/expddo.scm 87 */
																												obj_t
																													BgL_list1943z00_837;
																												{	/* Eval/expddo.scm 87 */
																													obj_t
																														BgL_arg1944z00_838;
																													{	/* Eval/expddo.scm 87 */
																														obj_t
																															BgL_arg1945z00_839;
																														BgL_arg1945z00_839 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg1944z00_838 =
																															MAKE_PAIR
																															(BgL_arg1941z00_835,
																															BgL_arg1945z00_839);
																													}
																													BgL_list1943z00_837 =
																														MAKE_PAIR
																														(BgL_arg1940z00_834,
																														BgL_arg1944z00_838);
																												}
																												BgL_arg1938z00_833 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_testz00_789,
																													BgL_list1943z00_837);
																											}
																										}
																										BgL_arg1930z00_828 =
																											MAKE_PAIR
																											(BgL_arg1937z00_832,
																											BgL_arg1938z00_833);
																									}
																									{	/* Eval/expddo.scm 86 */
																										obj_t BgL_list1932z00_830;

																										{	/* Eval/expddo.scm 86 */
																											obj_t BgL_arg1935z00_831;

																											BgL_arg1935z00_831 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list1932z00_830 =
																												MAKE_PAIR
																												(BgL_arg1930z00_828,
																												BgL_arg1935z00_831);
																										}
																										BgL_arg1929z00_827 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_varsz00_785,
																											BgL_list1932z00_830);
																									}
																								}
																								BgL_arg1924z00_823 =
																									MAKE_PAIR(BgL_arg1927z00_826,
																									BgL_arg1929z00_827);
																							}
																							{	/* Eval/expddo.scm 86 */
																								obj_t BgL_list1926z00_825;

																								BgL_list1926z00_825 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1923z00_822 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1924z00_823,
																									BgL_list1926z00_825);
																							}
																						}
																						BgL_arg1921z00_820 =
																							MAKE_PAIR(BgL_loopz00_788,
																							BgL_arg1923z00_822);
																					}
																					BgL_arg1915z00_815 =
																						MAKE_PAIR(BgL_arg1921z00_820, BNIL);
																				}
																				BgL_arg1916z00_816 =
																					MAKE_PAIR(BgL_loopz00_788,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_initsz00_786, BNIL));
																				{	/* Eval/expddo.scm 86 */
																					obj_t BgL_list1919z00_818;

																					{	/* Eval/expddo.scm 86 */
																						obj_t BgL_arg1920z00_819;

																						BgL_arg1920z00_819 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list1919z00_818 =
																							MAKE_PAIR(BgL_arg1916z00_816,
																							BgL_arg1920z00_819);
																					}
																					BgL_arg1914z00_814 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1915z00_815,
																						BgL_list1919z00_818);
																				}
																			}
																			BgL_arg1911z00_812 =
																				MAKE_PAIR(BgL_arg1912z00_813,
																				BgL_arg1914z00_814);
																		}
																		return
																			PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																			BgL_arg1911z00_812, BgL_ez00_2, BEOA);
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
									{	/* Eval/expddo.scm 58 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol2224z00zz__expander_doz00,
											BGl_string2223z00zz__expander_doz00,
											BGl_symbol2234z00zz__expander_doz00);
									}
							}
						else
							{	/* Eval/expddo.scm 58 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2224z00zz__expander_doz00,
									BGl_string2223z00zz__expander_doz00,
									BGl_symbol2234z00zz__expander_doz00);
							}
					}
				else
					{	/* Eval/expddo.scm 58 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2224z00zz__expander_doz00,
							BGl_string2223z00zz__expander_doz00,
							BGl_symbol2234z00zz__expander_doz00);
					}
			}
		}
	}



/* _expand-do */
	obj_t BGl__expandzd2dozd2zz__expander_doz00(obj_t BgL_envz00_1518,
		obj_t BgL_expz00_1519, obj_t BgL_ez00_1520)
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 57 */
			return
				BGl_expandzd2dozd2zz__expander_doz00(BgL_expz00_1519, BgL_ez00_1520);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_doz00()
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_doz00()
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_doz00()
	{
		AN_OBJECT;
		{	/* Eval/expddo.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2236z00zz__expander_doz00));
		}
	}

#ifdef __cplusplus
}
#endif
