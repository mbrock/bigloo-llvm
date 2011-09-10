/*===========================================================================*/
/*   (Eval/expdtry.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdtry.scm -indent -o objs/obj_u/Eval/expdtry.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t, obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_tryz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_tryz00();
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_tryz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_tryz00();
	static obj_t BGl_symbol2169z00zz__expander_tryz00 = BUNSPEC;
	static obj_t BGl_symbol2171z00zz__expander_tryz00 = BUNSPEC;
	static obj_t BGl_symbol2173z00zz__expander_tryz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tryz00(long, char *);
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
	static obj_t BGl__expandzd2tryzd2zz__expander_tryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_tryz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2tryzd2envz00zz__expander_tryz00,
		BgL_bgl__expandza7d2tryza7d22177z00,
		BGl__expandzd2tryzd2zz__expander_tryz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2170z00zz__expander_tryz00,
		BgL_bgl_string2170za700za7za7_2178za7, "&try", 4);
	      DEFINE_STRING(BGl_string2172z00zz__expander_tryz00,
		BgL_bgl_string2172za700za7za7_2179za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2174z00zz__expander_tryz00,
		BgL_bgl_string2174za700za7za7_2180za7, "try", 3);
	      DEFINE_STRING(BGl_string2175z00zz__expander_tryz00,
		BgL_bgl_string2175za700za7za7_2181za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2176z00zz__expander_tryz00,
		BgL_bgl_string2176za700za7za7_2182za7, "__expander_try", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tryz00(long
		BgL_checksumz00_1432, char *BgL_fromz00_1433)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_tryz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_tryz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_tryz00();
					BGl_importedzd2moduleszd2initz00zz__expander_tryz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_tryz00()
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 14 */
			BGl_symbol2169z00zz__expander_tryz00 =
				bstring_to_symbol(BGl_string2170z00zz__expander_tryz00);
			BGl_symbol2171z00zz__expander_tryz00 =
				bstring_to_symbol(BGl_string2172z00zz__expander_tryz00);
			return (BGl_symbol2173z00zz__expander_tryz00 =
				bstring_to_symbol(BGl_string2174z00zz__expander_tryz00), BUNSPEC);
		}
	}



/* expand-try */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2tryzd2zz__expander_tryz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 51 */
			{
				obj_t BgL_bodyz00_770;

				obj_t BgL_handlerz00_771;

				if (PAIRP(BgL_xz00_1))
					{	/* Eval/expdtry.scm 52 */
						obj_t BgL_cdrzd21397zd2_776;

						BgL_cdrzd21397zd2_776 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21397zd2_776))
							{	/* Eval/expdtry.scm 52 */
								obj_t BgL_carzd21400zd2_778;

								obj_t BgL_cdrzd21401zd2_779;

								BgL_carzd21400zd2_778 = CAR(BgL_cdrzd21397zd2_776);
								BgL_cdrzd21401zd2_779 = CDR(BgL_cdrzd21397zd2_776);
								if (NULLP(BgL_carzd21400zd2_778))
									{	/* Eval/expdtry.scm 52 */
										return
											BGl_errorz00zz__errorz00
											(BGl_symbol2173z00zz__expander_tryz00,
											BGl_string2175z00zz__expander_tryz00, BgL_xz00_1);
									}
								else
									{	/* Eval/expdtry.scm 52 */
										if (PAIRP(BgL_cdrzd21401zd2_779))
											{	/* Eval/expdtry.scm 52 */
												if (NULLP(CDR(BgL_cdrzd21401zd2_779)))
													{	/* Eval/expdtry.scm 52 */
														BgL_bodyz00_770 = BgL_carzd21400zd2_778;
														BgL_handlerz00_771 = CAR(BgL_cdrzd21401zd2_779);
														{	/* Eval/expdtry.scm 54 */
															obj_t BgL_nz00_785;

															{	/* Eval/expdtry.scm 54 */
																obj_t BgL_arg1896z00_786;

																{	/* Eval/expdtry.scm 54 */
																	obj_t BgL_arg1898z00_787;

																	obj_t BgL_arg1899z00_788;

																	BgL_arg1898z00_787 =
																		BGl_symbol2169z00zz__expander_tryz00;
																	{	/* Eval/expdtry.scm 54 */
																		obj_t BgL_arg1900z00_789;

																		{	/* Eval/expdtry.scm 54 */
																			obj_t BgL_arg1904z00_793;

																			obj_t BgL_arg1905z00_794;

																			BgL_arg1904z00_793 =
																				BGl_symbol2171z00zz__expander_tryz00;
																			{	/* Eval/expdtry.scm 54 */
																				obj_t BgL_list1906z00_795;

																				{	/* Eval/expdtry.scm 54 */
																					obj_t BgL_arg1907z00_796;

																					BgL_arg1907z00_796 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1906z00_795 =
																						MAKE_PAIR(BgL_bodyz00_770,
																						BgL_arg1907z00_796);
																				}
																				BgL_arg1905z00_794 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BNIL, BgL_list1906z00_795);
																			}
																			BgL_arg1900z00_789 =
																				MAKE_PAIR(BgL_arg1904z00_793,
																				BgL_arg1905z00_794);
																		}
																		{	/* Eval/expdtry.scm 54 */
																			obj_t BgL_list1902z00_791;

																			{	/* Eval/expdtry.scm 54 */
																				obj_t BgL_arg1903z00_792;

																				BgL_arg1903z00_792 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list1902z00_791 =
																					MAKE_PAIR(BgL_handlerz00_771,
																					BgL_arg1903z00_792);
																			}
																			BgL_arg1899z00_788 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1900z00_789,
																				BgL_list1902z00_791);
																		}
																	}
																	BgL_arg1896z00_786 =
																		MAKE_PAIR(BgL_arg1898z00_787,
																		BgL_arg1899z00_788);
																}
																BgL_nz00_785 =
																	PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																	BgL_arg1896z00_786, BgL_ez00_2, BEOA);
															}
															return
																BGl_evepairifyz00zz__prognz00(BgL_nz00_785,
																BgL_xz00_1);
														}
													}
												else
													{	/* Eval/expdtry.scm 52 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol2173z00zz__expander_tryz00,
															BGl_string2175z00zz__expander_tryz00, BgL_xz00_1);
													}
											}
										else
											{	/* Eval/expdtry.scm 52 */
												return
													BGl_errorz00zz__errorz00
													(BGl_symbol2173z00zz__expander_tryz00,
													BGl_string2175z00zz__expander_tryz00, BgL_xz00_1);
											}
									}
							}
						else
							{	/* Eval/expdtry.scm 52 */
								return
									BGl_errorz00zz__errorz00(BGl_symbol2173z00zz__expander_tryz00,
									BGl_string2175z00zz__expander_tryz00, BgL_xz00_1);
							}
					}
				else
					{	/* Eval/expdtry.scm 52 */
						return
							BGl_errorz00zz__errorz00(BGl_symbol2173z00zz__expander_tryz00,
							BGl_string2175z00zz__expander_tryz00, BgL_xz00_1);
					}
			}
		}
	}



/* _expand-try */
	obj_t BGl__expandzd2tryzd2zz__expander_tryz00(obj_t BgL_envz00_1429,
		obj_t BgL_xz00_1430, obj_t BgL_ez00_1431)
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 51 */
			return
				BGl_expandzd2tryzd2zz__expander_tryz00(BgL_xz00_1430, BgL_ez00_1431);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_tryz00()
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_tryz00()
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_tryz00()
	{
		AN_OBJECT;
		{	/* Eval/expdtry.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2176z00zz__expander_tryz00));
		}
	}

#ifdef __cplusplus
}
#endif
