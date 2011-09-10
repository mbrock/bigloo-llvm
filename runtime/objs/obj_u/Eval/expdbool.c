/*===========================================================================*/
/*   (Eval/expdbool.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdbool.scm -indent -o objs/obj_u/Eval/expdbool.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_list2291z00zz__expander_boolz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_boolz00();
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_boolz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_boolz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t);
	static obj_t BGl_symbol2300z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2302z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2292z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2304z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2306z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2296z00zz__expander_boolz00 = BUNSPEC;
	static obj_t BGl_symbol2298z00zz__expander_boolz00 = BUNSPEC;
	extern bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_boolz00(long, char *);
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
	extern long bgl_list_length(obj_t);
	extern int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl__expandzd2condzd2zz__expander_boolz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_boolz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2301z00zz__expander_boolz00,
		BgL_bgl_string2301za700za7za7_2310za7, "=>", 2);
	      DEFINE_STRING(BGl_string2303z00zz__expander_boolz00,
		BgL_bgl_string2303za700za7za7_2311za7, "non-user", 8);
	      DEFINE_STRING(BGl_string2293z00zz__expander_boolz00,
		BgL_bgl_string2293za700za7za7_2312za7, "else", 4);
	      DEFINE_STRING(BGl_string2294z00zz__expander_boolz00,
		BgL_bgl_string2294za700za7za7_2313za7, "cond-clause", 11);
	      DEFINE_STRING(BGl_string2305z00zz__expander_boolz00,
		BgL_bgl_string2305za700za7za7_2314za7, "let", 3);
	      DEFINE_STRING(BGl_string2295z00zz__expander_boolz00,
		BgL_bgl_string2295za700za7za7_2315za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2307z00zz__expander_boolz00,
		BgL_bgl_string2307za700za7za7_2316za7, "if", 2);
	      DEFINE_STRING(BGl_string2297z00zz__expander_boolz00,
		BgL_bgl_string2297za700za7za7_2317za7, "or", 2);
	      DEFINE_STRING(BGl_string2308z00zz__expander_boolz00,
		BgL_bgl_string2308za700za7za7_2318za7, "ignored COND clauses -- ", 24);
	      DEFINE_STRING(BGl_string2309z00zz__expander_boolz00,
		BgL_bgl_string2309za700za7za7_2319za7, "__expander_bool", 15);
	      DEFINE_STRING(BGl_string2299z00zz__expander_boolz00,
		BgL_bgl_string2299za700za7za7_2320za7, "cond", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2condzd2envz00zz__expander_boolz00,
		BgL_bgl__expandza7d2condza7d2321z00,
		BGl__expandzd2condzd2zz__expander_boolz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_boolz00(long
		BgL_checksumz00_1637, char *BgL_fromz00_1638)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_boolz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_boolz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_boolz00();
					BGl_importedzd2moduleszd2initz00zz__expander_boolz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_boolz00()
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 14 */
			BGl_symbol2292z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2293z00zz__expander_boolz00);
			BGl_list2291z00zz__expander_boolz00 =
				MAKE_PAIR(BGl_symbol2292z00zz__expander_boolz00, BNIL);
			BGl_symbol2296z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2297z00zz__expander_boolz00);
			BGl_symbol2298z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2299z00zz__expander_boolz00);
			BGl_symbol2300z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2301z00zz__expander_boolz00);
			BGl_symbol2302z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2303z00zz__expander_boolz00);
			BGl_symbol2304z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2305z00zz__expander_boolz00);
			return (BGl_symbol2306z00zz__expander_boolz00 =
				bstring_to_symbol(BGl_string2307z00zz__expander_boolz00), BUNSPEC);
		}
	}



/* expand-cond */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2condzd2zz__expander_boolz00(obj_t
		BgL_expz00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 64 */
			{	/* Eval/expdbool.scm 65 */
				obj_t BgL_clausesz00_772;

				BgL_clausesz00_772 = CDR(BgL_expz00_2);
				{	/* Eval/expdbool.scm 65 */
					obj_t BgL_clause1z00_773;

					if (PAIRP(BgL_clausesz00_772))
						{	/* Eval/expdbool.scm 66 */
							BgL_clause1z00_773 = CAR(BgL_clausesz00_772);
						}
					else
						{	/* Eval/expdbool.scm 66 */
							BgL_clause1z00_773 = BNIL;
						}
					{	/* Eval/expdbool.scm 66 */
						obj_t BgL_clause2zb2zb2_774;

						if (PAIRP(BgL_clause1z00_773))
							{	/* Eval/expdbool.scm 69 */
								BgL_clause2zb2zb2_774 = CDR(BgL_clausesz00_772);
							}
						else
							{	/* Eval/expdbool.scm 69 */
								BgL_clause2zb2zb2_774 = BFALSE;
							}
						{	/* Eval/expdbool.scm 69 */

							if (NULLP(BgL_clause1z00_773))
								{	/* Eval/expdbool.scm 73 */
									return BFALSE;
								}
							else
								{	/* Eval/expdbool.scm 75 */
									bool_t BgL_testz00_1661;

									if (PAIRP(BgL_clause1z00_773))
										{	/* Eval/expdbool.scm 75 */
											BgL_testz00_1661 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
												(BgL_clause1z00_773,
												BGl_list2291z00zz__expander_boolz00);
										}
									else
										{	/* Eval/expdbool.scm 75 */
											BgL_testz00_1661 = ((bool_t) 1);
										}
									if (BgL_testz00_1661)
										{	/* Eval/expdbool.scm 75 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2294z00zz__expander_boolz00,
												BGl_string2295z00zz__expander_boolz00, BgL_expz00_2);
										}
									else
										{	/* Eval/expdbool.scm 75 */
											if (NULLP(CDR(BgL_clause1z00_773)))
												{	/* Eval/expdbool.scm 78 */
													obj_t BgL_resz00_778;

													{	/* Eval/expdbool.scm 78 */
														obj_t BgL_arg1899z00_785;

														obj_t BgL_arg1900z00_786;

														BgL_arg1899z00_785 =
															BGl_symbol2296z00zz__expander_boolz00;
														{	/* Eval/expdbool.scm 78 */
															obj_t BgL_arg1901z00_787;

															obj_t BgL_arg1902z00_788;

															BgL_arg1901z00_787 = CAR(BgL_clause1z00_773);
															BgL_arg1902z00_788 =
																MAKE_PAIR(BGl_symbol2298z00zz__expander_boolz00,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_clause2zb2zb2_774, BNIL));
															{	/* Eval/expdbool.scm 78 */
																obj_t BgL_list1904z00_790;

																{	/* Eval/expdbool.scm 78 */
																	obj_t BgL_arg1905z00_791;

																	BgL_arg1905z00_791 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list1904z00_790 =
																		MAKE_PAIR(BgL_arg1902z00_788,
																		BgL_arg1905z00_791);
																}
																BgL_arg1900z00_786 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1901z00_787, BgL_list1904z00_790);
															}
														}
														BgL_resz00_778 =
															MAKE_PAIR(BgL_arg1899z00_785, BgL_arg1900z00_786);
													}
													{	/* Eval/expdbool.scm 79 */
														bool_t BgL_testz00_1676;

														{	/* Eval/expdbool.scm 79 */
															obj_t BgL_auxz00_1677;

															BgL_auxz00_1677 = CAR(BgL_clause1z00_773);
															BgL_testz00_1676 =
																EXTENDED_PAIRP(BgL_auxz00_1677);
														}
														if (BgL_testz00_1676)
															{	/* Eval/expdbool.scm 80 */
																obj_t BgL_arg1893z00_780;

																obj_t BgL_arg1894z00_781;

																obj_t BgL_arg1895z00_782;

																BgL_arg1893z00_780 = CAR(BgL_resz00_778);
																BgL_arg1894z00_781 = CDR(BgL_resz00_778);
																BgL_arg1895z00_782 =
																	CER(CAR(BgL_clause1z00_773));
																{	/* Eval/expdbool.scm 80 */
																	obj_t BgL_res2276z00_1367;

																	BgL_res2276z00_1367 =
																		MAKE_EXTENDED_PAIR(BgL_arg1893z00_780,
																		BgL_arg1894z00_781, BgL_arg1895z00_782);
																	return BgL_res2276z00_1367;
																}
															}
														else
															{	/* Eval/expdbool.scm 79 */
																return
																	BGl_evepairifyz00zz__prognz00(BgL_resz00_778,
																	BgL_expz00_2);
															}
													}
												}
											else
												{	/* Eval/expdbool.scm 82 */
													bool_t BgL_testz00_1686;

													{	/* Eval/expdbool.scm 82 */
														bool_t BgL_testz00_1687;

														{	/* Eval/expdbool.scm 82 */
															obj_t BgL_auxz00_1688;

															{	/* Eval/expdbool.scm 82 */
																obj_t BgL_pairz00_1368;

																BgL_pairz00_1368 = BgL_clause1z00_773;
																BgL_auxz00_1688 = CAR(CDR(BgL_pairz00_1368));
															}
															BgL_testz00_1687 =
																(BgL_auxz00_1688 ==
																BGl_symbol2300z00zz__expander_boolz00);
														}
														if (BgL_testz00_1687)
															{	/* Eval/expdbool.scm 82 */
																BgL_testz00_1686 =
																	(bgl_list_length(BgL_clause1z00_773) ==
																	((long) 3));
															}
														else
															{	/* Eval/expdbool.scm 82 */
																BgL_testz00_1686 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_1686)
														{	/* Eval/expdbool.scm 83 */
															obj_t BgL_auxz00_795;

															{	/* Eval/expdbool.scm 83 */
																obj_t BgL_symbolz00_1375;

																{	/* Eval/expdbool.scm 83 */

																	{	/* Eval/expdbool.scm 83 */

																		BgL_symbolz00_1375 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BFALSE);
																	}
																}
																BGl_putpropz12z12zz__r4_symbols_6_4z00
																	(BgL_symbolz00_1375,
																	BGl_symbol2302z00zz__expander_boolz00, BTRUE);
																BgL_auxz00_795 = BgL_symbolz00_1375;
															}
															{	/* Eval/expdbool.scm 83 */
																obj_t BgL_testz00_796;

																{	/* Eval/expdbool.scm 84 */
																	obj_t BgL_symbolz00_1378;

																	{	/* Eval/expdbool.scm 84 */

																		{	/* Eval/expdbool.scm 84 */

																			BgL_symbolz00_1378 =
																				BGl_gensymz00zz__r4_symbols_6_4z00
																				(BFALSE);
																		}
																	}
																	BGl_putpropz12z12zz__r4_symbols_6_4z00
																		(BgL_symbolz00_1378,
																		BGl_symbol2302z00zz__expander_boolz00,
																		BTRUE);
																	BgL_testz00_796 = BgL_symbolz00_1378;
																}
																{	/* Eval/expdbool.scm 84 */
																	obj_t BgL_resz00_797;

																	{	/* Eval/expdbool.scm 85 */
																		obj_t BgL_arg1916z00_804;

																		obj_t BgL_arg1918z00_805;

																		BgL_arg1916z00_804 =
																			BGl_symbol2304z00zz__expander_boolz00;
																		{	/* Eval/expdbool.scm 85 */
																			obj_t BgL_arg1919z00_806;

																			obj_t BgL_arg1920z00_807;

																			{	/* Eval/expdbool.scm 85 */
																				obj_t BgL_arg1924z00_811;

																				{	/* Eval/expdbool.scm 85 */
																					obj_t BgL_arg1926z00_813;

																					{	/* Eval/expdbool.scm 85 */
																						obj_t BgL_arg1927z00_814;

																						BgL_arg1927z00_814 =
																							CAR(BgL_clause1z00_773);
																						{	/* Eval/expdbool.scm 85 */
																							obj_t BgL_list1930z00_816;

																							BgL_list1930z00_816 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1926z00_813 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1927z00_814,
																								BgL_list1930z00_816);
																						}
																					}
																					BgL_arg1924z00_811 =
																						MAKE_PAIR(BgL_testz00_796,
																						BgL_arg1926z00_813);
																				}
																				BgL_arg1919z00_806 =
																					MAKE_PAIR(BgL_arg1924z00_811, BNIL);
																			}
																			{	/* Eval/expdbool.scm 86 */
																				obj_t BgL_arg1931z00_817;

																				obj_t BgL_arg1932z00_818;

																				BgL_arg1931z00_817 =
																					BGl_symbol2306z00zz__expander_boolz00;
																				{	/* Eval/expdbool.scm 87 */
																					obj_t BgL_arg1935z00_819;

																					obj_t BgL_arg1937z00_820;

																					{	/* Eval/expdbool.scm 87 */
																						obj_t BgL_arg1942z00_825;

																						obj_t BgL_arg1943z00_826;

																						BgL_arg1942z00_825 =
																							BGl_symbol2304z00zz__expander_boolz00;
																						{	/* Eval/expdbool.scm 87 */
																							obj_t BgL_arg1944z00_827;

																							obj_t BgL_arg1945z00_828;

																							{	/* Eval/expdbool.scm 87 */
																								obj_t BgL_arg1949z00_832;

																								{	/* Eval/expdbool.scm 87 */
																									obj_t BgL_arg1951z00_834;

																									{	/* Eval/expdbool.scm 87 */
																										obj_t BgL_list1952z00_835;

																										BgL_list1952z00_835 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1951z00_834 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_testz00_796,
																											BgL_list1952z00_835);
																									}
																									BgL_arg1949z00_832 =
																										MAKE_PAIR(BgL_auxz00_795,
																										BgL_arg1951z00_834);
																								}
																								BgL_arg1944z00_827 =
																									MAKE_PAIR(BgL_arg1949z00_832,
																									BNIL);
																							}
																							{	/* Eval/expdbool.scm 88 */
																								obj_t BgL_arg1953z00_836;

																								obj_t BgL_arg1954z00_837;

																								{	/* Eval/expdbool.scm 88 */
																									obj_t BgL_pairz00_1381;

																									BgL_pairz00_1381 =
																										BgL_clause1z00_773;
																									BgL_arg1953z00_836 =
																										CAR(CDR(CDR
																											(BgL_pairz00_1381)));
																								}
																								{	/* Eval/expdbool.scm 88 */
																									obj_t BgL_list1955z00_838;

																									BgL_list1955z00_838 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg1954z00_837 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_auxz00_795,
																										BgL_list1955z00_838);
																								}
																								BgL_arg1945z00_828 =
																									MAKE_PAIR(BgL_arg1953z00_836,
																									BgL_arg1954z00_837);
																							}
																							{	/* Eval/expdbool.scm 87 */
																								obj_t BgL_list1947z00_830;

																								{	/* Eval/expdbool.scm 87 */
																									obj_t BgL_arg1948z00_831;

																									BgL_arg1948z00_831 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list1947z00_830 =
																										MAKE_PAIR
																										(BgL_arg1945z00_828,
																										BgL_arg1948z00_831);
																								}
																								BgL_arg1943z00_826 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1944z00_827,
																									BgL_list1947z00_830);
																							}
																						}
																						BgL_arg1935z00_819 =
																							MAKE_PAIR(BgL_arg1942z00_825,
																							BgL_arg1943z00_826);
																					}
																					BgL_arg1937z00_820 =
																						MAKE_PAIR
																						(BGl_symbol2298z00zz__expander_boolz00,
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_clause2zb2zb2_774, BNIL));
																					{	/* Eval/expdbool.scm 86 */
																						obj_t BgL_list1939z00_822;

																						{	/* Eval/expdbool.scm 86 */
																							obj_t BgL_arg1940z00_823;

																							{	/* Eval/expdbool.scm 86 */
																								obj_t BgL_arg1941z00_824;

																								BgL_arg1941z00_824 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1940z00_823 =
																									MAKE_PAIR(BgL_arg1937z00_820,
																									BgL_arg1941z00_824);
																							}
																							BgL_list1939z00_822 =
																								MAKE_PAIR(BgL_arg1935z00_819,
																								BgL_arg1940z00_823);
																						}
																						BgL_arg1932z00_818 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_testz00_796,
																							BgL_list1939z00_822);
																					}
																				}
																				BgL_arg1920z00_807 =
																					MAKE_PAIR(BgL_arg1931z00_817,
																					BgL_arg1932z00_818);
																			}
																			{	/* Eval/expdbool.scm 85 */
																				obj_t BgL_list1922z00_809;

																				{	/* Eval/expdbool.scm 85 */
																					obj_t BgL_arg1923z00_810;

																					BgL_arg1923z00_810 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1922z00_809 =
																						MAKE_PAIR(BgL_arg1920z00_807,
																						BgL_arg1923z00_810);
																				}
																				BgL_arg1918z00_805 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1919z00_806,
																					BgL_list1922z00_809);
																			}
																		}
																		BgL_resz00_797 =
																			MAKE_PAIR(BgL_arg1916z00_804,
																			BgL_arg1918z00_805);
																	}
																	{	/* Eval/expdbool.scm 85 */

																		{	/* Eval/expdbool.scm 90 */
																			bool_t BgL_testz00_1728;

																			{	/* Eval/expdbool.scm 90 */
																				obj_t BgL_auxz00_1729;

																				BgL_auxz00_1729 =
																					CAR(BgL_clause1z00_773);
																				BgL_testz00_1728 =
																					EXTENDED_PAIRP(BgL_auxz00_1729);
																			}
																			if (BgL_testz00_1728)
																				{	/* Eval/expdbool.scm 91 */
																					obj_t BgL_arg1910z00_799;

																					obj_t BgL_arg1911z00_800;

																					obj_t BgL_arg1912z00_801;

																					BgL_arg1910z00_799 =
																						CAR(BgL_resz00_797);
																					BgL_arg1911z00_800 =
																						CDR(BgL_resz00_797);
																					BgL_arg1912z00_801 =
																						CER(CAR(BgL_clause1z00_773));
																					{	/* Eval/expdbool.scm 91 */
																						obj_t BgL_res2277z00_1396;

																						BgL_res2277z00_1396 =
																							MAKE_EXTENDED_PAIR
																							(BgL_arg1910z00_799,
																							BgL_arg1911z00_800,
																							BgL_arg1912z00_801);
																						return BgL_res2277z00_1396;
																					}
																				}
																			else
																				{	/* Eval/expdbool.scm 90 */
																					return
																						BGl_evepairifyz00zz__prognz00
																						(BgL_resz00_797, BgL_expz00_2);
																				}
																		}
																	}
																}
															}
														}
													else
														{	/* Eval/expdbool.scm 82 */
															if (
																(CAR(BgL_clause1z00_773) ==
																	BGl_symbol2292z00zz__expander_boolz00))
																{	/* Eval/expdbool.scm 93 */
																	{	/* Eval/expdbool.scm 94 */
																		bool_t BgL_testz00_1741;

																		if (PAIRP(BgL_clause2zb2zb2_774))
																			{	/* Eval/expdbool.scm 94 */
																				int BgL_arg1967z00_849;

																				BgL_arg1967z00_849 =
																					BGl_bigloozd2warningzd2zz__paramz00();
																				BgL_testz00_1741 =
																					BGl_2ze3ze3zz__r4_numbers_6_5z00(BINT
																					(BgL_arg1967z00_849),
																					BINT(((long) 0)));
																			}
																		else
																			{	/* Eval/expdbool.scm 94 */
																				BgL_testz00_1741 = ((bool_t) 0);
																			}
																		if (BgL_testz00_1741)
																			{	/* Eval/expdbool.scm 95 */
																				obj_t BgL_list1960z00_843;

																				{	/* Eval/expdbool.scm 95 */
																					obj_t BgL_arg1961z00_844;

																					obj_t BgL_arg1962z00_845;

																					BgL_arg1961z00_844 =
																						BGl_symbol2298z00zz__expander_boolz00;
																					{	/* Eval/expdbool.scm 95 */
																						obj_t BgL_arg1965z00_847;

																						BgL_arg1965z00_847 =
																							MAKE_PAIR(BgL_clause2zb2zb2_774,
																							BNIL);
																						BgL_arg1962z00_845 =
																							MAKE_PAIR
																							(BGl_string2308z00zz__expander_boolz00,
																							BgL_arg1965z00_847);
																					}
																					BgL_list1960z00_843 =
																						MAKE_PAIR(BgL_arg1961z00_844,
																						BgL_arg1962z00_845);
																				}
																				BGl_warningz00zz__errorz00
																					(BgL_list1960z00_843);
																			}
																		else
																			{	/* Eval/expdbool.scm 94 */
																				BFALSE;
																			}
																	}
																	return
																		BGl_expandzd2prognzd2zz__prognz00(CDR
																		(BgL_clause1z00_773));
																}
															else
																{	/* Eval/expdbool.scm 98 */
																	obj_t BgL_ncondz00_852;

																	{	/* Eval/expdbool.scm 98 */
																		obj_t BgL_ncz00_881;

																		BgL_ncz00_881 =
																			MAKE_PAIR
																			(BGl_symbol2298z00zz__expander_boolz00,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_clause2zb2zb2_774, BNIL));
																		{	/* Eval/expdbool.scm 100 */
																			bool_t BgL_testz00_1756;

																			if (PAIRP(BgL_clause2zb2zb2_774))
																				{	/* Eval/expdbool.scm 100 */
																					obj_t BgL_auxz00_1759;

																					BgL_auxz00_1759 =
																						CAR(BgL_clause2zb2zb2_774);
																					BgL_testz00_1756 =
																						EXTENDED_PAIRP(BgL_auxz00_1759);
																				}
																			else
																				{	/* Eval/expdbool.scm 100 */
																					BgL_testz00_1756 = ((bool_t) 0);
																				}
																			if (BgL_testz00_1756)
																				{	/* Eval/expdbool.scm 101 */
																					obj_t BgL_arg2000z00_883;

																					obj_t BgL_arg2001z00_884;

																					obj_t BgL_arg2002z00_885;

																					BgL_arg2000z00_883 =
																						CAR(BgL_ncz00_881);
																					BgL_arg2001z00_884 =
																						CDR(BgL_ncz00_881);
																					BgL_arg2002z00_885 =
																						CER(CAR(BgL_clause2zb2zb2_774));
																					{	/* Eval/expdbool.scm 101 */
																						obj_t BgL_res2278z00_1410;

																						BgL_res2278z00_1410 =
																							MAKE_EXTENDED_PAIR
																							(BgL_arg2000z00_883,
																							BgL_arg2001z00_884,
																							BgL_arg2002z00_885);
																						BgL_ncondz00_852 =
																							BgL_res2278z00_1410;
																					}
																				}
																			else
																				{	/* Eval/expdbool.scm 100 */
																					BgL_ncondz00_852 = BgL_ncz00_881;
																				}
																		}
																	}
																	{	/* Eval/expdbool.scm 98 */
																		obj_t BgL_resz00_853;

																		{	/* Eval/expdbool.scm 104 */
																			obj_t BgL_arg1989z00_872;

																			obj_t BgL_arg1990z00_873;

																			BgL_arg1989z00_872 =
																				BGl_symbol2306z00zz__expander_boolz00;
																			{	/* Eval/expdbool.scm 104 */
																				obj_t BgL_arg1991z00_874;

																				obj_t BgL_arg1992z00_875;

																				BgL_arg1991z00_874 =
																					CAR(BgL_clause1z00_773);
																				BgL_arg1992z00_875 =
																					BGl_expandzd2prognzd2zz__prognz00(CDR
																					(BgL_clause1z00_773));
																				{	/* Eval/expdbool.scm 104 */
																					obj_t BgL_list1994z00_877;

																					{	/* Eval/expdbool.scm 104 */
																						obj_t BgL_arg1995z00_878;

																						{	/* Eval/expdbool.scm 104 */
																							obj_t BgL_arg1996z00_879;

																							BgL_arg1996z00_879 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg1995z00_878 =
																								MAKE_PAIR(BgL_ncondz00_852,
																								BgL_arg1996z00_879);
																						}
																						BgL_list1994z00_877 =
																							MAKE_PAIR(BgL_arg1992z00_875,
																							BgL_arg1995z00_878);
																					}
																					BgL_arg1990z00_873 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1991z00_874,
																						BgL_list1994z00_877);
																				}
																			}
																			BgL_resz00_853 =
																				MAKE_PAIR(BgL_arg1989z00_872,
																				BgL_arg1990z00_873);
																		}
																		{	/* Eval/expdbool.scm 104 */

																			{	/* Eval/expdbool.scm 108 */
																				bool_t BgL_testz00_1775;

																				{	/* Eval/expdbool.scm 108 */
																					obj_t BgL_auxz00_1776;

																					BgL_auxz00_1776 =
																						CAR(BgL_clause1z00_773);
																					BgL_testz00_1775 =
																						EXTENDED_PAIRP(BgL_auxz00_1776);
																				}
																				if (BgL_testz00_1775)
																					{	/* Eval/expdbool.scm 109 */
																						obj_t BgL_arg1971z00_855;

																						obj_t BgL_arg1972z00_856;

																						obj_t BgL_arg1973z00_857;

																						BgL_arg1971z00_855 =
																							CAR(BgL_resz00_853);
																						BgL_arg1972z00_856 =
																							CDR(BgL_resz00_853);
																						BgL_arg1973z00_857 =
																							CER(CAR(BgL_clause1z00_773));
																						{	/* Eval/expdbool.scm 109 */
																							obj_t BgL_res2279z00_1422;

																							BgL_res2279z00_1422 =
																								MAKE_EXTENDED_PAIR
																								(BgL_arg1971z00_855,
																								BgL_arg1972z00_856,
																								BgL_arg1973z00_857);
																							return BgL_res2279z00_1422;
																						}
																					}
																				else
																					{	/* Eval/expdbool.scm 108 */
																						if (EXTENDED_PAIRP
																							(BgL_clause1z00_773))
																							{	/* Eval/expdbool.scm 111 */
																								obj_t BgL_arg1976z00_860;

																								obj_t BgL_arg1977z00_861;

																								obj_t BgL_arg1979z00_862;

																								BgL_arg1976z00_860 =
																									CAR(BgL_resz00_853);
																								BgL_arg1977z00_861 =
																									CDR(BgL_resz00_853);
																								BgL_arg1979z00_862 =
																									CER(BgL_clause1z00_773);
																								{	/* Eval/expdbool.scm 111 */
																									obj_t BgL_res2280z00_1430;

																									BgL_res2280z00_1430 =
																										MAKE_EXTENDED_PAIR
																										(BgL_arg1976z00_860,
																										BgL_arg1977z00_861,
																										BgL_arg1979z00_862);
																									return BgL_res2280z00_1430;
																								}
																							}
																						else
																							{	/* Eval/expdbool.scm 112 */
																								bool_t BgL_testz00_1790;

																								{	/* Eval/expdbool.scm 112 */
																									bool_t BgL_testz00_1791;

																									{	/* Eval/expdbool.scm 112 */
																										obj_t BgL_auxz00_1792;

																										BgL_auxz00_1792 =
																											CDR(BgL_clause1z00_773);
																										BgL_testz00_1791 =
																											PAIRP(BgL_auxz00_1792);
																									}
																									if (BgL_testz00_1791)
																										{	/* Eval/expdbool.scm 112 */
																											obj_t BgL_arg1986z00_869;

																											{	/* Eval/expdbool.scm 112 */
																												obj_t BgL_pairz00_1433;

																												BgL_pairz00_1433 =
																													BgL_clause1z00_773;
																												BgL_arg1986z00_869 =
																													CAR(CDR
																													(BgL_pairz00_1433));
																											}
																											BgL_testz00_1790 =
																												EXTENDED_PAIRP
																												(BgL_arg1986z00_869);
																										}
																									else
																										{	/* Eval/expdbool.scm 112 */
																											BgL_testz00_1790 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_testz00_1790)
																									{	/* Eval/expdbool.scm 113 */
																										obj_t BgL_arg1981z00_864;

																										obj_t BgL_arg1982z00_865;

																										obj_t BgL_arg1983z00_866;

																										BgL_arg1981z00_864 =
																											CAR(BgL_resz00_853);
																										BgL_arg1982z00_865 =
																											CDR(BgL_resz00_853);
																										{	/* Eval/expdbool.scm 113 */
																											obj_t BgL_objz00_1444;

																											{	/* Eval/expdbool.scm 113 */
																												obj_t BgL_pairz00_1440;

																												BgL_pairz00_1440 =
																													BgL_clause1z00_773;
																												BgL_objz00_1444 =
																													CAR(CDR
																													(BgL_pairz00_1440));
																											}
																											BgL_arg1983z00_866 =
																												CER(BgL_objz00_1444);
																										}
																										{	/* Eval/expdbool.scm 113 */
																											obj_t BgL_res2281z00_1448;

																											BgL_res2281z00_1448 =
																												MAKE_EXTENDED_PAIR
																												(BgL_arg1981z00_864,
																												BgL_arg1982z00_865,
																												BgL_arg1983z00_866);
																											return
																												BgL_res2281z00_1448;
																										}
																									}
																								else
																									{	/* Eval/expdbool.scm 112 */
																										return
																											BGl_evepairifyz00zz__prognz00
																											(BgL_resz00_853,
																											BgL_expz00_2);
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
			}
		}
	}



/* _expand-cond */
	obj_t BGl__expandzd2condzd2zz__expander_boolz00(obj_t BgL_envz00_1635,
		obj_t BgL_expz00_1636)
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 64 */
			return BGl_expandzd2condzd2zz__expander_boolz00(BgL_expz00_1636);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_boolz00()
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_boolz00()
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_boolz00()
	{
		AN_OBJECT;
		{	/* Eval/expdbool.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2309z00zz__expander_boolz00));
		}
	}

#ifdef __cplusplus
}
#endif
