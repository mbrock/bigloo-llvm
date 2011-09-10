/*===========================================================================*/
/*   (Eval/expdcase.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdcase.scm -indent -o objs/obj_u/Eval/expdcase.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_casez00 = BUNSPEC;
	static obj_t BGl__expandzd2evalzd2casez00zz__expander_casez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_casez00();
	static obj_t BGl_cnstzd2initzd2zz__expander_casez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_casez00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2247z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2249z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2252z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2254z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2256z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2258z00zz__expander_casez00 = BUNSPEC;
	static obj_t BGl_symbol2260z00zz__expander_casez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_casez00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2evalzd2casez00zz__expander_casez00(obj_t,
		obj_t);
	static obj_t BGl_loopz00zz__expander_casez00(obj_t, obj_t);
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_genericzd2casezd2zz__expander_casez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_casez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2245z00zz__expander_casez00,
		BgL_bgl_string2245za700za7za7_2263za7, "case", 4);
	      DEFINE_STRING(BGl_string2246z00zz__expander_casez00,
		BgL_bgl_string2246za700za7za7_2264za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2248z00zz__expander_casez00,
		BgL_bgl_string2248za700za7za7_2265za7, "let", 3);
	      DEFINE_STRING(BGl_string2250z00zz__expander_casez00,
		BgL_bgl_string2250za700za7za7_2266za7, "case-value", 10);
	      DEFINE_STRING(BGl_string2251z00zz__expander_casez00,
		BgL_bgl_string2251za700za7za7_2267za7, "Illegal `case' form", 19);
	      DEFINE_STRING(BGl_string2253z00zz__expander_casez00,
		BgL_bgl_string2253za700za7za7_2268za7, "if", 2);
	      DEFINE_STRING(BGl_string2255z00zz__expander_casez00,
		BgL_bgl_string2255za700za7za7_2269za7, "eqv?", 4);
	      DEFINE_STRING(BGl_string2257z00zz__expander_casez00,
		BgL_bgl_string2257za700za7za7_2270za7, "quote", 5);
	      DEFINE_STRING(BGl_string2259z00zz__expander_casez00,
		BgL_bgl_string2259za700za7za7_2271za7, "memv", 4);
	      DEFINE_STRING(BGl_string2261z00zz__expander_casez00,
		BgL_bgl_string2261za700za7za7_2272za7, "else", 4);
	      DEFINE_STRING(BGl_string2262z00zz__expander_casez00,
		BgL_bgl_string2262za700za7za7_2273za7, "__expander_case", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2casezd2envzd2zz__expander_casez00,
		BgL_bgl__expandza7d2evalza7d2274z00,
		BGl__expandzd2evalzd2casez00zz__expander_casez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_casez00(long
		BgL_checksumz00_1542, char *BgL_fromz00_1543)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_casez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_casez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_casez00();
					BGl_importedzd2moduleszd2initz00zz__expander_casez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_casez00()
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 14 */
			BGl_symbol2247z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2248z00zz__expander_casez00);
			BGl_symbol2249z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2250z00zz__expander_casez00);
			BGl_symbol2252z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2253z00zz__expander_casez00);
			BGl_symbol2254z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2255z00zz__expander_casez00);
			BGl_symbol2256z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2257z00zz__expander_casez00);
			BGl_symbol2258z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2259z00zz__expander_casez00);
			return (BGl_symbol2260z00zz__expander_casez00 =
				bstring_to_symbol(BGl_string2261z00zz__expander_casez00), BUNSPEC);
		}
	}



/* expand-eval-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2casez00zz__expander_casez00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 52 */
			if (PAIRP(BgL_xz00_1))
				{	/* Eval/expdcase.scm 53 */
					obj_t BgL_cdrzd21397zd2_780;

					BgL_cdrzd21397zd2_780 = CDR(BgL_xz00_1);
					if (PAIRP(BgL_cdrzd21397zd2_780))
						{	/* Eval/expdcase.scm 53 */
							return
								BGl_genericzd2casezd2zz__expander_casez00(BgL_xz00_1,
								CAR(BgL_cdrzd21397zd2_780),
								CDR(BgL_cdrzd21397zd2_780), BgL_ez00_2);
						}
					else
						{	/* Eval/expdcase.scm 53 */
							return
								BGl_errorz00zz__errorz00(BGl_string2245z00zz__expander_casez00,
								BGl_string2246z00zz__expander_casez00, BgL_xz00_1);
						}
				}
			else
				{	/* Eval/expdcase.scm 53 */
					return
						BGl_errorz00zz__errorz00(BGl_string2245z00zz__expander_casez00,
						BGl_string2246z00zz__expander_casez00, BgL_xz00_1);
				}
		}
	}



/* _expand-eval-case */
	obj_t BGl__expandzd2evalzd2casez00zz__expander_casez00(obj_t BgL_envz00_1538,
		obj_t BgL_xz00_1539, obj_t BgL_ez00_1540)
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 52 */
			return
				BGl_expandzd2evalzd2casez00zz__expander_casez00(BgL_xz00_1539,
				BgL_ez00_1540);
		}
	}



/* generic-case */
	obj_t BGl_genericzd2casezd2zz__expander_casez00(obj_t BgL_xz00_3,
		obj_t BgL_valuez00_4, obj_t BgL_clausesz00_5, obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 63 */
			{	/* Eval/expdcase.scm 64 */
				obj_t BgL_arg1894z00_784;

				{	/* Eval/expdcase.scm 64 */
					obj_t BgL_arg1895z00_785;

					obj_t BgL_arg1896z00_786;

					BgL_arg1895z00_785 = BGl_symbol2247z00zz__expander_casez00;
					{	/* Eval/expdcase.scm 64 */
						obj_t BgL_arg1898z00_787;

						obj_t BgL_arg1899z00_788;

						{	/* Eval/expdcase.scm 64 */
							obj_t BgL_arg1903z00_792;

							{	/* Eval/expdcase.scm 64 */
								obj_t BgL_arg1905z00_794;

								obj_t BgL_arg1906z00_795;

								BgL_arg1905z00_794 = BGl_symbol2249z00zz__expander_casez00;
								{	/* Eval/expdcase.scm 64 */
									obj_t BgL_list1907z00_796;

									BgL_list1907z00_796 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1906z00_795 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_valuez00_4,
										BgL_list1907z00_796);
								}
								BgL_arg1903z00_792 =
									MAKE_PAIR(BgL_arg1905z00_794, BgL_arg1906z00_795);
							}
							BgL_arg1898z00_787 = MAKE_PAIR(BgL_arg1903z00_792, BNIL);
						}
						BgL_arg1899z00_788 =
							BGl_loopz00zz__expander_casez00(BgL_xz00_3, BgL_clausesz00_5);
						{	/* Eval/expdcase.scm 64 */
							obj_t BgL_list1901z00_790;

							{	/* Eval/expdcase.scm 64 */
								obj_t BgL_arg1902z00_791;

								BgL_arg1902z00_791 = MAKE_PAIR(BNIL, BNIL);
								BgL_list1901z00_790 =
									MAKE_PAIR(BgL_arg1899z00_788, BgL_arg1902z00_791);
							}
							BgL_arg1896z00_786 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1898z00_787,
								BgL_list1901z00_790);
						}
					}
					BgL_arg1894z00_784 =
						MAKE_PAIR(BgL_arg1895z00_785, BgL_arg1896z00_786);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6, BgL_arg1894z00_784,
					BgL_ez00_6, BEOA);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expander_casez00(obj_t BgL_xz00_1541,
		obj_t BgL_clausesz00_798)
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 65 */
			if (NULLP(BgL_clausesz00_798))
				{	/* Eval/expdcase.scm 66 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_bodyz00_802;

					obj_t BgL_datumsz00_804;

					obj_t BgL_bodyz00_805;

					obj_t BgL_datumsz00_807;

					obj_t BgL_bodyz00_808;

					{	/* Eval/expdcase.scm 68 */
						obj_t BgL_ezd21409zd2_811;

						BgL_ezd21409zd2_811 = CAR(BgL_clausesz00_798);
						if (NULLP(BgL_ezd21409zd2_811))
							{	/* Eval/expdcase.scm 68 */
								return BUNSPEC;
							}
						else
							{	/* Eval/expdcase.scm 68 */
								if (PAIRP(BgL_ezd21409zd2_811))
									{	/* Eval/expdcase.scm 68 */
										if (
											(CAR(BgL_ezd21409zd2_811) ==
												BGl_symbol2260z00zz__expander_casez00))
											{	/* Eval/expdcase.scm 68 */
												BgL_bodyz00_802 = CDR(BgL_ezd21409zd2_811);
												{	/* Eval/expdcase.scm 72 */
													bool_t BgL_testz00_1588;

													if (NULLP(CDR(BgL_clausesz00_798)))
														{	/* Eval/expdcase.scm 72 */
															BgL_testz00_1588 = NULLP(BgL_bodyz00_802);
														}
													else
														{	/* Eval/expdcase.scm 72 */
															BgL_testz00_1588 = ((bool_t) 1);
														}
													if (BgL_testz00_1588)
														{	/* Eval/expdcase.scm 72 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2245z00zz__expander_casez00,
																BGl_string2251z00zz__expander_casez00,
																BgL_xz00_1541);
														}
													else
														{	/* Eval/expdcase.scm 72 */
															return
																BGl_expandzd2prognzd2zz__prognz00
																(BgL_bodyz00_802);
														}
												}
											}
										else
											{	/* Eval/expdcase.scm 68 */
												obj_t BgL_carzd21422zd2_816;

												BgL_carzd21422zd2_816 = CAR(BgL_ezd21409zd2_811);
												if (PAIRP(BgL_carzd21422zd2_816))
													{	/* Eval/expdcase.scm 68 */
														bool_t BgL_testz00_1599;

														{	/* Eval/expdcase.scm 68 */
															obj_t BgL_auxz00_1600;

															BgL_auxz00_1600 = CDR(BgL_carzd21422zd2_816);
															BgL_testz00_1599 = PAIRP(BgL_auxz00_1600);
														}
														if (BgL_testz00_1599)
															{	/* Eval/expdcase.scm 68 */
																BgL_datumsz00_804 = BgL_carzd21422zd2_816;
																BgL_bodyz00_805 = CDR(BgL_ezd21409zd2_811);
																if (NULLP(BgL_bodyz00_805))
																	{	/* Eval/expdcase.scm 76 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2245z00zz__expander_casez00,
																			BGl_string2251z00zz__expander_casez00,
																			BgL_xz00_1541);
																	}
																else
																	{	/* Eval/expdcase.scm 78 */
																		obj_t BgL_arg1937z00_838;

																		obj_t BgL_arg1938z00_839;

																		BgL_arg1937z00_838 =
																			BGl_symbol2252z00zz__expander_casez00;
																		{	/* Eval/expdcase.scm 78 */
																			obj_t BgL_arg1940z00_840;

																			obj_t BgL_arg1941z00_841;

																			obj_t BgL_arg1942z00_842;

																			{	/* Eval/expdcase.scm 78 */
																				obj_t BgL_arg1948z00_847;

																				obj_t BgL_arg1949z00_848;

																				BgL_arg1948z00_847 =
																					BGl_symbol2258z00zz__expander_casez00;
																				{	/* Eval/expdcase.scm 78 */
																					obj_t BgL_arg1950z00_849;

																					obj_t BgL_arg1951z00_850;

																					BgL_arg1950z00_849 =
																						BGl_symbol2249z00zz__expander_casez00;
																					{	/* Eval/expdcase.scm 78 */
																						obj_t BgL_arg1955z00_854;

																						obj_t BgL_arg1956z00_855;

																						BgL_arg1955z00_854 =
																							BGl_symbol2256z00zz__expander_casez00;
																						{	/* Eval/expdcase.scm 78 */
																							obj_t BgL_list1957z00_856;

																							BgL_list1957z00_856 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1956z00_855 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_datumsz00_804,
																								BgL_list1957z00_856);
																						}
																						BgL_arg1951z00_850 =
																							MAKE_PAIR(BgL_arg1955z00_854,
																							BgL_arg1956z00_855);
																					}
																					{	/* Eval/expdcase.scm 78 */
																						obj_t BgL_list1953z00_852;

																						{	/* Eval/expdcase.scm 78 */
																							obj_t BgL_arg1954z00_853;

																							BgL_arg1954z00_853 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1953z00_852 =
																								MAKE_PAIR(BgL_arg1951z00_850,
																								BgL_arg1954z00_853);
																						}
																						BgL_arg1949z00_848 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1950z00_849,
																							BgL_list1953z00_852);
																					}
																				}
																				BgL_arg1940z00_840 =
																					MAKE_PAIR(BgL_arg1948z00_847,
																					BgL_arg1949z00_848);
																			}
																			BgL_arg1941z00_841 =
																				BGl_expandzd2prognzd2zz__prognz00
																				(BgL_bodyz00_805);
																			BgL_arg1942z00_842 =
																				BGl_loopz00zz__expander_casez00
																				(BgL_xz00_1541,
																				CDR(BgL_clausesz00_798));
																			{	/* Eval/expdcase.scm 78 */
																				obj_t BgL_list1944z00_844;

																				{	/* Eval/expdcase.scm 78 */
																					obj_t BgL_arg1945z00_845;

																					{	/* Eval/expdcase.scm 78 */
																						obj_t BgL_arg1946z00_846;

																						BgL_arg1946z00_846 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1945z00_845 =
																							MAKE_PAIR(BgL_arg1942z00_842,
																							BgL_arg1946z00_846);
																					}
																					BgL_list1944z00_844 =
																						MAKE_PAIR(BgL_arg1941z00_841,
																						BgL_arg1945z00_845);
																				}
																				BgL_arg1938z00_839 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1940z00_840,
																					BgL_list1944z00_844);
																			}
																		}
																		return
																			MAKE_PAIR(BgL_arg1937z00_838,
																			BgL_arg1938z00_839);
																	}
															}
														else
															{	/* Eval/expdcase.scm 68 */
																if (NULLP(CDR(BgL_carzd21422zd2_816)))
																	{	/* Eval/expdcase.scm 68 */
																		BgL_datumsz00_807 =
																			CAR(BgL_carzd21422zd2_816);
																		BgL_bodyz00_808 = CDR(BgL_ezd21409zd2_811);
																		if (NULLP(BgL_bodyz00_808))
																			{	/* Eval/expdcase.scm 82 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2245z00zz__expander_casez00,
																					BGl_string2251z00zz__expander_casez00,
																					BgL_xz00_1541);
																			}
																		else
																			{	/* Eval/expdcase.scm 84 */
																				obj_t BgL_arg1960z00_859;

																				obj_t BgL_arg1961z00_860;

																				BgL_arg1960z00_859 =
																					BGl_symbol2252z00zz__expander_casez00;
																				{	/* Eval/expdcase.scm 84 */
																					obj_t BgL_arg1962z00_861;

																					obj_t BgL_arg1963z00_862;

																					obj_t BgL_arg1965z00_863;

																					{	/* Eval/expdcase.scm 84 */
																						obj_t BgL_arg1970z00_868;

																						obj_t BgL_arg1971z00_869;

																						BgL_arg1970z00_868 =
																							BGl_symbol2254z00zz__expander_casez00;
																						{	/* Eval/expdcase.scm 84 */
																							obj_t BgL_arg1972z00_870;

																							obj_t BgL_arg1973z00_871;

																							BgL_arg1972z00_870 =
																								BGl_symbol2249z00zz__expander_casez00;
																							{	/* Eval/expdcase.scm 84 */
																								obj_t BgL_arg1977z00_875;

																								obj_t BgL_arg1979z00_876;

																								BgL_arg1977z00_875 =
																									BGl_symbol2256z00zz__expander_casez00;
																								{	/* Eval/expdcase.scm 84 */
																									obj_t BgL_list1980z00_877;

																									BgL_list1980z00_877 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1979z00_876 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_datumsz00_807,
																										BgL_list1980z00_877);
																								}
																								BgL_arg1973z00_871 =
																									MAKE_PAIR(BgL_arg1977z00_875,
																									BgL_arg1979z00_876);
																							}
																							{	/* Eval/expdcase.scm 84 */
																								obj_t BgL_list1975z00_873;

																								{	/* Eval/expdcase.scm 84 */
																									obj_t BgL_arg1976z00_874;

																									BgL_arg1976z00_874 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list1975z00_873 =
																										MAKE_PAIR
																										(BgL_arg1973z00_871,
																										BgL_arg1976z00_874);
																								}
																								BgL_arg1971z00_869 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1972z00_870,
																									BgL_list1975z00_873);
																							}
																						}
																						BgL_arg1962z00_861 =
																							MAKE_PAIR(BgL_arg1970z00_868,
																							BgL_arg1971z00_869);
																					}
																					BgL_arg1963z00_862 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_808);
																					BgL_arg1965z00_863 =
																						BGl_loopz00zz__expander_casez00
																						(BgL_xz00_1541,
																						CDR(BgL_clausesz00_798));
																					{	/* Eval/expdcase.scm 84 */
																						obj_t BgL_list1967z00_865;

																						{	/* Eval/expdcase.scm 84 */
																							obj_t BgL_arg1968z00_866;

																							{	/* Eval/expdcase.scm 84 */
																								obj_t BgL_arg1969z00_867;

																								BgL_arg1969z00_867 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1968z00_866 =
																									MAKE_PAIR(BgL_arg1965z00_863,
																									BgL_arg1969z00_867);
																							}
																							BgL_list1967z00_865 =
																								MAKE_PAIR(BgL_arg1963z00_862,
																								BgL_arg1968z00_866);
																						}
																						BgL_arg1961z00_860 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1962z00_861,
																							BgL_list1967z00_865);
																					}
																				}
																				return
																					MAKE_PAIR(BgL_arg1960z00_859,
																					BgL_arg1961z00_860);
																			}
																	}
																else
																	{	/* Eval/expdcase.scm 68 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2245z00zz__expander_casez00,
																			BGl_string2251z00zz__expander_casez00,
																			BgL_xz00_1541);
																	}
															}
													}
												else
													{	/* Eval/expdcase.scm 68 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2245z00zz__expander_casez00,
															BGl_string2251z00zz__expander_casez00,
															BgL_xz00_1541);
													}
											}
									}
								else
									{	/* Eval/expdcase.scm 68 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2245z00zz__expander_casez00,
											BGl_string2251z00zz__expander_casez00, BgL_xz00_1541);
									}
							}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_casez00()
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_casez00()
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_casez00()
	{
		AN_OBJECT;
		{	/* Eval/expdcase.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2262z00zz__expander_casez00));
		}
	}

#ifdef __cplusplus
}
#endif
