/*===========================================================================*/
/*   (Match/mexpand.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Match/mexpand.scm -indent -o objs/obj_u/Match/mexpand.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_list2305z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_list2308z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_list2321z00zz__match_expandz00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_pcompilez00zz__match_compilerz00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__match_expandz00();
	extern obj_t BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_patternzd2variableszd2zz__match_descriptionsz00(obj_t);
	static obj_t BGl_fetchzd2prototypeszd2zz__match_expandz00(obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_expandz00();
	static obj_t BGl_zc3anonymousza31896ze3z83zz__match_expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_expandz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t);
	static obj_t BGl__expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t, obj_t);
	static obj_t BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2306z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2309z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2312z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2314z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2316z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2319z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2322z00zz__match_expandz00 = BUNSPEC;
	static obj_t BGl_symbol2324z00zz__match_expandz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_compilerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__match_expandz00();
	extern obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00;
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31944ze3z83zz__match_expandz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t);
	static obj_t BGl__expandzd2matchzd2casez00zz__match_expandz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_expandz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2matchzd2casezd2envzd2zz__match_expandz00,
		BgL_bgl__expandza7d2matchza72327z00,
		BGl__expandzd2matchzd2casez00zz__match_expandz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2matchzd2lambdazd2envzd2zz__match_expandz00,
		BgL_bgl__expandza7d2matchza72328z00,
		BGl__expandzd2matchzd2lambdaz00zz__match_expandz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2307z00zz__match_expandz00,
		BgL_bgl_string2307za700za7za7_2329za7, "not", 3);
	      DEFINE_STRING(BGl_string2310z00zz__match_expandz00,
		BgL_bgl_string2310za700za7za7_2330za7, "any", 3);
	      DEFINE_STRING(BGl_string2311z00zz__match_expandz00,
		BgL_bgl_string2311za700za7za7_2331za7, "TAG-", 4);
	      DEFINE_STRING(BGl_string2313z00zz__match_expandz00,
		BgL_bgl_string2313za700za7za7_2332za7, "else", 4);
	      DEFINE_STRING(BGl_string2315z00zz__match_expandz00,
		BgL_bgl_string2315za700za7za7_2333za7, "tagged-or", 9);
	      DEFINE_STRING(BGl_string2317z00zz__match_expandz00,
		BgL_bgl_string2317za700za7za7_2334za7, "match-case", 10);
	      DEFINE_STRING(BGl_string2318z00zz__match_expandz00,
		BgL_bgl_string2318za700za7za7_2335za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string2320z00zz__match_expandz00,
		BgL_bgl_string2320za700za7za7_2336za7, "labels", 6);
	      DEFINE_STRING(BGl_string2323z00zz__match_expandz00,
		BgL_bgl_string2323za700za7za7_2337za7, "t-or", 4);
	      DEFINE_STRING(BGl_string2325z00zz__match_expandz00,
		BgL_bgl_string2325za700za7za7_2338za7, "match-lambda", 12);
	      DEFINE_STRING(BGl_string2326z00zz__match_expandz00,
		BgL_bgl_string2326za700za7za7_2339za7, "__match_expand", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_expandz00(long
		BgL_checksumz00_1706, char *BgL_fromz00_1707)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_expandz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__match_expandz00();
					BGl_importedzd2moduleszd2initz00zz__match_expandz00();
					BGl_toplevelzd2initzd2zz__match_expandz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_expandz00()
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 26 */
			BGl_symbol2306z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2307z00zz__match_expandz00);
			BGl_symbol2309z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2310z00zz__match_expandz00);
			BGl_list2308z00zz__match_expandz00 =
				MAKE_PAIR(BGl_symbol2309z00zz__match_expandz00, BNIL);
			BGl_list2305z00zz__match_expandz00 =
				MAKE_PAIR(BGl_symbol2306z00zz__match_expandz00,
				MAKE_PAIR(BGl_list2308z00zz__match_expandz00, BNIL));
			BGl_symbol2312z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2313z00zz__match_expandz00);
			BGl_symbol2314z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2315z00zz__match_expandz00);
			BGl_symbol2316z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2317z00zz__match_expandz00);
			BGl_symbol2319z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2320z00zz__match_expandz00);
			BGl_symbol2322z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2323z00zz__match_expandz00);
			BGl_list2321z00zz__match_expandz00 =
				MAKE_PAIR(BGl_symbol2322z00zz__match_expandz00,
				MAKE_PAIR(BGl_symbol2314z00zz__match_expandz00, BNIL));
			return (BGl_symbol2324z00zz__match_expandz00 =
				bstring_to_symbol(BGl_string2325z00zz__match_expandz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_expandz00()
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 26 */
			return (BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00 =
				BNIL, BUNSPEC);
		}
	}



/* expand-match-lambda */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t
		BgL_expz00_1)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 71 */
			{
				obj_t BgL_clausesz00_798;

				obj_t BgL_kz00_799;

				{	/* Match/mexpand.scm 95 */
					obj_t BgL_arg1894z00_801;

					BgL_arg1894z00_801 = CDR(BgL_expz00_1);
					{	/* Match/mexpand.scm 97 */
						obj_t BgL_zc3anonymousza31896ze3z83_1689;

						BgL_zc3anonymousza31896ze3z83_1689 =
							make_fx_procedure
							(BGl_zc3anonymousza31896ze3z83zz__match_expandz00,
							(int) (((long) 2)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza31896ze3z83_1689,
							(int) (((long) 0)), BgL_expz00_1);
						BgL_clausesz00_798 = BgL_arg1894z00_801;
						BgL_kz00_799 = BgL_zc3anonymousza31896ze3z83_1689;
					BgL_clauseszd2ze3patternz31_800:
						if (NULLP(BgL_clausesz00_798))
							{	/* Match/mexpand.scm 75 */
								return
									PROCEDURE_ENTRY(BgL_kz00_799) (BgL_kz00_799,
									BGl_list2305z00zz__match_expandz00,
									BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00, BEOA);
							}
						else
							{	/* Match/mexpand.scm 77 */
								bool_t BgL_testz00_1737;

								{	/* Match/mexpand.scm 77 */
									obj_t BgL_auxz00_1738;

									BgL_auxz00_1738 = CAR(BgL_clausesz00_798);
									BgL_testz00_1737 = PAIRP(BgL_auxz00_1738);
								}
								if (BgL_testz00_1737)
									{	/* Match/mexpand.scm 80 */
										obj_t BgL_patternz00_840;

										obj_t BgL_actionsz00_841;

										obj_t BgL_restz00_842;

										{	/* Match/mexpand.scm 80 */
											obj_t BgL_pairz00_1414;

											BgL_pairz00_1414 = BgL_clausesz00_798;
											BgL_patternz00_840 = CAR(CAR(BgL_pairz00_1414));
										}
										{	/* Match/mexpand.scm 81 */
											obj_t BgL_pairz00_1418;

											BgL_pairz00_1418 = BgL_clausesz00_798;
											BgL_actionsz00_841 = CDR(CAR(BgL_pairz00_1418));
										}
										BgL_restz00_842 = CDR(BgL_clausesz00_798);
										{	/* Match/mexpand.scm 83 */
											obj_t BgL_tagz00_843;

											BgL_tagz00_843 =
												PROCEDURE_ENTRY(BGl_jimzd2gensymzd2zz__match_s2cfunz00)
												(BGl_jimzd2gensymzd2zz__match_s2cfunz00,
												BGl_string2311z00zz__match_expandz00, BEOA);
											if ((BgL_patternz00_840 ==
													BGl_symbol2312z00zz__match_expandz00))
												{	/* Match/mexpand.scm 85 */
													obj_t BgL_arg1923z00_845;

													obj_t BgL_arg1924z00_846;

													{	/* Match/mexpand.scm 85 */
														obj_t BgL_arg1925z00_847;

														obj_t BgL_arg1926z00_848;

														BgL_arg1925z00_847 =
															BGl_symbol2314z00zz__match_expandz00;
														{	/* Match/mexpand.scm 85 */
															obj_t BgL_arg1927z00_849;

															obj_t BgL_arg1929z00_850;

															BgL_arg1927z00_849 =
																MAKE_PAIR(BGl_symbol2309z00zz__match_expandz00,
																BNIL);
															{	/* Match/mexpand.scm 85 */
																obj_t BgL_arg1937z00_855;

																obj_t BgL_arg1938z00_856;

																BgL_arg1937z00_855 =
																	BGl_symbol2306z00zz__match_expandz00;
																{	/* Match/mexpand.scm 85 */
																	obj_t BgL_arg1940z00_857;

																	BgL_arg1940z00_857 =
																		MAKE_PAIR
																		(BGl_symbol2309z00zz__match_expandz00,
																		BNIL);
																	{	/* Match/mexpand.scm 85 */
																		obj_t BgL_list1942z00_859;

																		BgL_list1942z00_859 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1938z00_856 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1940z00_857, BgL_list1942z00_859);
																	}
																}
																BgL_arg1929z00_850 =
																	MAKE_PAIR(BgL_arg1937z00_855,
																	BgL_arg1938z00_856);
															}
															{	/* Match/mexpand.scm 85 */
																obj_t BgL_list1931z00_852;

																{	/* Match/mexpand.scm 85 */
																	obj_t BgL_arg1932z00_853;

																	{	/* Match/mexpand.scm 85 */
																		obj_t BgL_arg1935z00_854;

																		BgL_arg1935z00_854 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1932z00_853 =
																			MAKE_PAIR(BgL_arg1929z00_850,
																			BgL_arg1935z00_854);
																	}
																	BgL_list1931z00_852 =
																		MAKE_PAIR(BgL_tagz00_843,
																		BgL_arg1932z00_853);
																}
																BgL_arg1926z00_848 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1927z00_849, BgL_list1931z00_852);
															}
														}
														BgL_arg1923z00_845 =
															MAKE_PAIR(BgL_arg1925z00_847, BgL_arg1926z00_848);
													}
													{	/* Match/mexpand.scm 86 */
														obj_t BgL_envz00_1423;

														BgL_envz00_1423 =
															BGl_za2thezd2emptyzd2envza2z00zz__match_expandz00;
														{	/* Match/mexpand.scm 86 */
															obj_t BgL_arg1982z00_1426;

															BgL_arg1982z00_1426 =
																MAKE_PAIR(BgL_tagz00_843, BgL_actionsz00_841);
															BgL_arg1924z00_846 =
																MAKE_PAIR(BgL_arg1982z00_1426, BgL_envz00_1423);
														}
													}
													return
														PROCEDURE_ENTRY(BgL_kz00_799) (BgL_kz00_799,
														BgL_arg1923z00_845, BgL_arg1924z00_846, BEOA);
												}
											else
												{	/* Match/mexpand.scm 90 */
													obj_t BgL_zc3anonymousza31944ze3z83_1690;

													BgL_zc3anonymousza31944ze3z83_1690 =
														make_fx_procedure
														(BGl_zc3anonymousza31944ze3z83zz__match_expandz00,
														(int) (((long) 2)), (int) (((long) 4)));
													PROCEDURE_SET(BgL_zc3anonymousza31944ze3z83_1690,
														(int) (((long) 0)), BgL_patternz00_840);
													PROCEDURE_SET(BgL_zc3anonymousza31944ze3z83_1690,
														(int) (((long) 1)), BgL_tagz00_843);
													PROCEDURE_SET(BgL_zc3anonymousza31944ze3z83_1690,
														(int) (((long) 2)), BgL_actionsz00_841);
													PROCEDURE_SET(BgL_zc3anonymousza31944ze3z83_1690,
														(int) (((long) 3)), BgL_kz00_799);
													{
														obj_t BgL_kz00_1776;

														obj_t BgL_clausesz00_1775;

														BgL_clausesz00_1775 = BgL_restz00_842;
														BgL_kz00_1776 = BgL_zc3anonymousza31944ze3z83_1690;
														BgL_kz00_799 = BgL_kz00_1776;
														BgL_clausesz00_798 = BgL_clausesz00_1775;
														goto BgL_clauseszd2ze3patternz31_800;
													}
												}
										}
									}
								else
									{	/* Match/mexpand.scm 77 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol2316z00zz__match_expandz00,
											BGl_string2318z00zz__match_expandz00, BgL_expz00_1);
									}
							}
					}
				}
			}
		}
	}



/* _expand-match-lambda */
	obj_t BGl__expandzd2matchzd2lambdaz00zz__match_expandz00(obj_t
		BgL_envz00_1691, obj_t BgL_expz00_1692)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 71 */
			return BGl_expandzd2matchzd2lambdaz00zz__match_expandz00(BgL_expz00_1692);
		}
	}



/* <anonymous:1896> */
	obj_t BGl_zc3anonymousza31896ze3z83zz__match_expandz00(obj_t BgL_envz00_1693,
		obj_t BgL_patz00_1695, obj_t BgL_envz00_1696)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 96 */
			{	/* Match/mexpand.scm 97 */
				obj_t BgL_expz00_1694;

				BgL_expz00_1694 = PROCEDURE_REF(BgL_envz00_1693, (int) (((long) 0)));
				{
					obj_t BgL_patz00_803;

					obj_t BgL_envz00_804;

					BgL_patz00_803 = BgL_patz00_1695;
					BgL_envz00_804 = BgL_envz00_1696;
					{	/* Match/mexpand.scm 97 */
						obj_t BgL_compiledzd2patzd2_806;

						obj_t BgL_prototypesz00_807;

						BgL_compiledzd2patzd2_806 =
							BGl_pcompilez00zz__match_compilerz00(BgL_patz00_803);
						BgL_prototypesz00_807 =
							BGl_fetchzd2prototypeszd2zz__match_expandz00(BgL_patz00_803);
						{	/* Match/mexpand.scm 101 */
							obj_t BgL_arg1898z00_808;

							obj_t BgL_arg1899z00_809;

							BgL_arg1898z00_808 = BGl_symbol2319z00zz__match_expandz00;
							{	/* Match/mexpand.scm 102 */
								obj_t BgL_arg1900z00_810;

								{	/* Match/mexpand.scm 102 */
									obj_t BgL_arg1904z00_814;

									if (NULLP(BgL_prototypesz00_807))
										{	/* Match/mexpand.scm 102 */
											BgL_arg1904z00_814 = BNIL;
										}
									else
										{	/* Match/mexpand.scm 102 */
											obj_t BgL_head1850z00_818;

											BgL_head1850z00_818 = MAKE_PAIR(BNIL, BNIL);
											{
												obj_t BgL_l1848z00_820;

												obj_t BgL_tail1851z00_821;

												BgL_l1848z00_820 = BgL_prototypesz00_807;
												BgL_tail1851z00_821 = BgL_head1850z00_818;
											BgL_zc3anonymousza31907ze3z83_822:
												if (NULLP(BgL_l1848z00_820))
													{	/* Match/mexpand.scm 102 */
														BgL_arg1904z00_814 = CDR(BgL_head1850z00_818);
													}
												else
													{	/* Match/mexpand.scm 102 */
														obj_t BgL_newtail1852z00_824;

														{	/* Match/mexpand.scm 102 */
															obj_t BgL_arg1910z00_826;

															{	/* Match/mexpand.scm 102 */
																obj_t BgL_prototypez00_828;

																BgL_prototypez00_828 = CAR(BgL_l1848z00_820);
																{	/* Match/mexpand.scm 104 */
																	obj_t BgL_bodyz00_829;

																	BgL_bodyz00_829 =
																		CDR(BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																		(CAR(BgL_prototypez00_828),
																			BgL_envz00_804));
																	if (NULLP(BgL_bodyz00_829))
																		{	/* Match/mexpand.scm 105 */
																			BgL_arg1910z00_826 =
																				BGl_errorz00zz__errorz00
																				(BGl_symbol2316z00zz__match_expandz00,
																				BGl_string2318z00zz__match_expandz00,
																				BgL_expz00_1694);
																		}
																	else
																		{	/* Match/mexpand.scm 107 */
																			obj_t BgL_arg1914z00_831;

																			obj_t BgL_arg1915z00_832;

																			BgL_arg1914z00_831 =
																				CAR(BgL_prototypez00_828);
																			{	/* Match/mexpand.scm 108 */
																				obj_t BgL_arg1916z00_833;

																				{	/* Match/mexpand.scm 108 */
																					obj_t BgL_pairz00_1402;

																					BgL_pairz00_1402 =
																						BgL_prototypez00_828;
																					BgL_arg1916z00_833 =
																						CAR(CDR(BgL_pairz00_1402));
																				}
																				BgL_arg1915z00_832 =
																					MAKE_PAIR(BgL_arg1916z00_833,
																					BgL_bodyz00_829);
																			}
																			BgL_arg1910z00_826 =
																				MAKE_PAIR(BgL_arg1914z00_831,
																				BgL_arg1915z00_832);
																		}
																}
															}
															BgL_newtail1852z00_824 =
																MAKE_PAIR(BgL_arg1910z00_826, BNIL);
														}
														SET_CDR(BgL_tail1851z00_821,
															BgL_newtail1852z00_824);
														{
															obj_t BgL_tail1851z00_1805;

															obj_t BgL_l1848z00_1803;

															BgL_l1848z00_1803 = CDR(BgL_l1848z00_820);
															BgL_tail1851z00_1805 = BgL_newtail1852z00_824;
															BgL_tail1851z00_821 = BgL_tail1851z00_1805;
															BgL_l1848z00_820 = BgL_l1848z00_1803;
															goto BgL_zc3anonymousza31907ze3z83_822;
														}
													}
											}
										}
									BgL_arg1900z00_810 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1904z00_814, BNIL);
								}
								{	/* Match/mexpand.scm 101 */
									obj_t BgL_list1902z00_812;

									{	/* Match/mexpand.scm 101 */
										obj_t BgL_arg1903z00_813;

										BgL_arg1903z00_813 = MAKE_PAIR(BNIL, BNIL);
										BgL_list1902z00_812 =
											MAKE_PAIR(BgL_compiledzd2patzd2_806, BgL_arg1903z00_813);
									}
									BgL_arg1899z00_809 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1900z00_810, BgL_list1902z00_812);
								}
							}
							return MAKE_PAIR(BgL_arg1898z00_808, BgL_arg1899z00_809);
						}
					}
				}
			}
		}
	}



/* <anonymous:1944> */
	obj_t BGl_zc3anonymousza31944ze3z83zz__match_expandz00(obj_t BgL_envz00_1697,
		obj_t BgL_patz00_1702, obj_t BgL_envz00_1703)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 89 */
			{	/* Match/mexpand.scm 90 */
				obj_t BgL_patternz00_1698;

				obj_t BgL_tagz00_1699;

				obj_t BgL_actionsz00_1700;

				obj_t BgL_kz00_1701;

				BgL_patternz00_1698 =
					PROCEDURE_REF(BgL_envz00_1697, (int) (((long) 0)));
				BgL_tagz00_1699 = PROCEDURE_REF(BgL_envz00_1697, (int) (((long) 1)));
				BgL_actionsz00_1700 =
					PROCEDURE_REF(BgL_envz00_1697, (int) (((long) 2)));
				BgL_kz00_1701 = PROCEDURE_REF(BgL_envz00_1697, (int) (((long) 3)));
				{
					obj_t BgL_patz00_861;

					obj_t BgL_envz00_862;

					BgL_patz00_861 = BgL_patz00_1702;
					BgL_envz00_862 = BgL_envz00_1703;
					{	/* Match/mexpand.scm 90 */
						obj_t BgL_arg1945z00_864;

						obj_t BgL_arg1946z00_865;

						{	/* Match/mexpand.scm 90 */
							obj_t BgL_arg1948z00_866;

							obj_t BgL_arg1949z00_867;

							BgL_arg1948z00_866 = BGl_symbol2314z00zz__match_expandz00;
							{	/* Match/mexpand.scm 90 */
								obj_t BgL_arg1950z00_868;

								BgL_arg1950z00_868 =
									BGl_normaliza7ezd2patternz75zz__match_normaliza7eza7
									(BgL_patternz00_1698);
								{	/* Match/mexpand.scm 90 */
									obj_t BgL_list1952z00_870;

									{	/* Match/mexpand.scm 90 */
										obj_t BgL_arg1953z00_871;

										{	/* Match/mexpand.scm 90 */
											obj_t BgL_arg1954z00_872;

											BgL_arg1954z00_872 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1953z00_871 =
												MAKE_PAIR(BgL_patz00_861, BgL_arg1954z00_872);
										}
										BgL_list1952z00_870 =
											MAKE_PAIR(BgL_tagz00_1699, BgL_arg1953z00_871);
									}
									BgL_arg1949z00_867 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1950z00_868, BgL_list1952z00_870);
							}}
							BgL_arg1945z00_864 =
								MAKE_PAIR(BgL_arg1948z00_866, BgL_arg1949z00_867);
						}
						{	/* Match/mexpand.scm 93 */
							obj_t BgL_arg1982z00_1430;

							BgL_arg1982z00_1430 =
								MAKE_PAIR(BgL_tagz00_1699, BgL_actionsz00_1700);
							BgL_arg1946z00_865 =
								MAKE_PAIR(BgL_arg1982z00_1430, BgL_envz00_862);
						}
						return
							PROCEDURE_ENTRY(BgL_kz00_1701) (BgL_kz00_1701, BgL_arg1945z00_864,
							BgL_arg1946z00_865, BEOA);
					}
				}
			}
		}
	}



/* fetch-prototypes */
	obj_t BGl_fetchzd2prototypeszd2zz__match_expandz00(obj_t BgL_patz00_2)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 112 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(BgL_patz00_2),
						BGl_list2321z00zz__match_expandz00)))
				{	/* Match/mexpand.scm 114 */
					obj_t BgL_arg1957z00_876;

					obj_t BgL_arg1958z00_877;

					{	/* Match/mexpand.scm 114 */
						obj_t BgL_arg1959z00_878;

						obj_t BgL_arg1960z00_879;

						{	/* Match/mexpand.scm 114 */
							obj_t BgL_pairz00_1432;

							BgL_pairz00_1432 = BgL_patz00_2;
							BgL_arg1959z00_878 = CAR(CDR(CDR(BgL_pairz00_1432)));
						}
						{	/* Match/mexpand.scm 114 */
							obj_t BgL_arg1961z00_880;

							{	/* Match/mexpand.scm 114 */
								obj_t BgL_arg1965z00_883;

								{	/* Match/mexpand.scm 114 */
									obj_t BgL_pairz00_1438;

									BgL_pairz00_1438 = BgL_patz00_2;
									BgL_arg1965z00_883 = CAR(CDR(BgL_pairz00_1438));
								}
								BgL_arg1961z00_880 =
									BGl_patternzd2variableszd2zz__match_descriptionsz00
									(BgL_arg1965z00_883);
							}
							{	/* Match/mexpand.scm 114 */
								obj_t BgL_list1963z00_882;

								BgL_list1963z00_882 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg1960z00_879 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1961z00_880, BgL_list1963z00_882);
							}
						}
						BgL_arg1957z00_876 =
							MAKE_PAIR(BgL_arg1959z00_878, BgL_arg1960z00_879);
					}
					{	/* Match/mexpand.scm 115 */
						obj_t BgL_arg1966z00_884;

						{	/* Match/mexpand.scm 115 */
							obj_t BgL_pairz00_1442;

							BgL_pairz00_1442 = BgL_patz00_2;
							BgL_arg1966z00_884 = CAR(CDR(CDR(CDR(BgL_pairz00_1442))));
						}
						BgL_arg1958z00_877 =
							BGl_fetchzd2prototypeszd2zz__match_expandz00(BgL_arg1966z00_884);
					}
					return MAKE_PAIR(BgL_arg1957z00_876, BgL_arg1958z00_877);
				}
			else
				{	/* Match/mexpand.scm 113 */
					return BNIL;
				}
		}
	}



/* expand-match-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2matchzd2casez00zz__match_expandz00(obj_t
		BgL_expz00_5)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 123 */
			{	/* Match/mexpand.scm 124 */
				obj_t BgL_arg1973z00_891;

				obj_t BgL_arg1974z00_892;

				{	/* Match/mexpand.scm 124 */
					obj_t BgL_arg1977z00_895;

					{	/* Match/mexpand.scm 124 */
						obj_t BgL_arg1979z00_896;

						{	/* Match/mexpand.scm 124 */
							obj_t BgL_arg1980z00_897;

							obj_t BgL_arg1981z00_898;

							BgL_arg1980z00_897 = BGl_symbol2324z00zz__match_expandz00;
							{	/* Match/mexpand.scm 124 */
								obj_t BgL_pairz00_1462;

								BgL_pairz00_1462 = BgL_expz00_5;
								BgL_arg1981z00_898 = CDR(CDR(BgL_pairz00_1462));
							}
							BgL_arg1979z00_896 =
								MAKE_PAIR(BgL_arg1980z00_897, BgL_arg1981z00_898);
						}
						if (EXTENDED_PAIRP(BgL_expz00_5))
							{	/* Match/mexpand.scm 124 */
								obj_t BgL_arg1970z00_1469;

								obj_t BgL_arg1971z00_1470;

								obj_t BgL_arg1972z00_1471;

								BgL_arg1970z00_1469 = CAR(BgL_arg1979z00_896);
								BgL_arg1971z00_1470 = CDR(BgL_arg1979z00_896);
								BgL_arg1972z00_1471 = CER(BgL_expz00_5);
								{	/* Match/mexpand.scm 124 */
									obj_t BgL_res2294z00_1479;

									BgL_res2294z00_1479 =
										MAKE_EXTENDED_PAIR(BgL_arg1970z00_1469, BgL_arg1971z00_1470,
										BgL_arg1972z00_1471);
									BgL_arg1977z00_895 = BgL_res2294z00_1479;
								}
							}
						else
							{	/* Match/mexpand.scm 124 */
								BgL_arg1977z00_895 = BgL_arg1979z00_896;
							}
					}
					BgL_arg1973z00_891 =
						BGl_expandzd2matchzd2lambdaz00zz__match_expandz00
						(BgL_arg1977z00_895);
				}
				{	/* Match/mexpand.scm 125 */
					obj_t BgL_pairz00_1480;

					BgL_pairz00_1480 = BgL_expz00_5;
					BgL_arg1974z00_892 = CAR(CDR(BgL_pairz00_1480));
				}
				{	/* Match/mexpand.scm 124 */
					obj_t BgL_list1975z00_893;

					{	/* Match/mexpand.scm 124 */
						obj_t BgL_arg1976z00_894;

						BgL_arg1976z00_894 = MAKE_PAIR(BgL_arg1974z00_892, BNIL);
						BgL_list1975z00_893 =
							MAKE_PAIR(BgL_arg1973z00_891, BgL_arg1976z00_894);
					}
					return BgL_list1975z00_893;
				}
			}
		}
	}



/* _expand-match-case */
	obj_t BGl__expandzd2matchzd2casez00zz__match_expandz00(obj_t BgL_envz00_1704,
		obj_t BgL_expz00_1705)
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 123 */
			return BGl_expandzd2matchzd2casez00zz__match_expandz00(BgL_expz00_1705);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_expandz00()
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 26 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_expandz00()
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 26 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_expandz00()
	{
		AN_OBJECT;
		{	/* Match/mexpand.scm 26 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_compilerz00(((long) 141933902),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_descriptionsz00(((long)
					307502710), BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					123685331), BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(((long) 228296415),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
			return BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2326z00zz__match_expandz00));
		}
	}

#ifdef __cplusplus
}
#endif
