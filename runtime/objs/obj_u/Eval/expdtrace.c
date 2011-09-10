/*===========================================================================*/
/*   (Eval/expdtrace.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdtrace.scm -indent -o objs/obj_u/Eval/expdtrace.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_tracez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t);
	extern int bgl_debug();
	static obj_t BGl_genericzd2initzd2zz__expander_tracez00();
	static obj_t BGl_cnstzd2initzd2zz__expander_tracez00();
	static obj_t BGl_zc3anonymousza31894ze3z83zz__expander_tracez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_tracez00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t);
	static obj_t BGl_symbol2289z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2291z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2302z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2293z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2304z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2295z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2306z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2297z00zz__expander_tracez00 = BUNSPEC;
	static obj_t BGl_symbol2310z00zz__expander_tracez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_zc3anonymousza31925ze3z83zz__expander_tracez00(obj_t, obj_t,
		obj_t);
	extern int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza31983ze3z83zz__expander_tracez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_tracez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2whenzd2tracezd2envz00zz__expander_tracez00,
		BgL_bgl__makeza7d2expandza7d2313z00,
		BGl__makezd2expandzd2whenzd2tracezd2zz__expander_tracez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2tracezd2itemzd2envz00zz__expander_tracez00,
		BgL_bgl__makeza7d2expandza7d2314z00,
		BGl__makezd2expandzd2tracezd2itemzd2zz__expander_tracez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2expandzd2withzd2tracezd2envz00zz__expander_tracez00,
		BgL_bgl__makeza7d2expandza7d2315z00,
		BGl__makezd2expandzd2withzd2tracezd2zz__expander_tracez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2286z00zz__expander_tracez00,
		BgL_bgl_string2286za700za7za7_2316za7,
		"/tmp/bigloo/runtime/Eval/expdtrace.scm", 38);
	      DEFINE_STRING(BGl_string2287z00zz__expander_tracez00,
		BgL_bgl_string2287za700za7za7_2317za7, "_make-expand-when-trace", 23);
	      DEFINE_STRING(BGl_string2288z00zz__expander_tracez00,
		BgL_bgl_string2288za700za7za7_2318za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2300z00zz__expander_tracez00,
		BgL_bgl_string2300za700za7za7_2319za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2290z00zz__expander_tracez00,
		BgL_bgl_string2290za700za7za7_2320za7, "compiler", 8);
	      DEFINE_STRING(BGl_string2301z00zz__expander_tracez00,
		BgL_bgl_string2301za700za7za7_2321za7, "_make-expand-with-trace", 23);
	      DEFINE_STRING(BGl_string2292z00zz__expander_tracez00,
		BgL_bgl_string2292za700za7za7_2322za7, "if", 2);
	      DEFINE_STRING(BGl_string2303z00zz__expander_tracez00,
		BgL_bgl_string2303za700za7za7_2323za7, ">fx", 3);
	      DEFINE_STRING(BGl_string2294z00zz__expander_tracez00,
		BgL_bgl_string2294za700za7za7_2324za7, ">=fx", 4);
	      DEFINE_STRING(BGl_string2305z00zz__expander_tracez00,
		BgL_bgl_string2305za700za7za7_2325za7, "%with-trace", 11);
	      DEFINE_STRING(BGl_string2296z00zz__expander_tracez00,
		BgL_bgl_string2296za700za7za7_2326za7, "bigloo-debug", 12);
	      DEFINE_STRING(BGl_string2307z00zz__expander_tracez00,
		BgL_bgl_string2307za700za7za7_2327za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2308z00zz__expander_tracez00,
		BgL_bgl_string2308za700za7za7_2328za7, "with-trace", 10);
	      DEFINE_STRING(BGl_string2298z00zz__expander_tracez00,
		BgL_bgl_string2298za700za7za7_2329za7, "begin", 5);
	      DEFINE_STRING(BGl_string2309z00zz__expander_tracez00,
		BgL_bgl_string2309za700za7za7_2330za7, "_make-expand-trace-item", 23);
	      DEFINE_STRING(BGl_string2299z00zz__expander_tracez00,
		BgL_bgl_string2299za700za7za7_2331za7, "when-trace", 10);
	      DEFINE_STRING(BGl_string2311z00zz__expander_tracez00,
		BgL_bgl_string2311za700za7za7_2332za7, "trace-item", 10);
	      DEFINE_STRING(BGl_string2312z00zz__expander_tracez00,
		BgL_bgl_string2312za700za7za7_2333za7, "__expander_trace", 16);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_tracez00(long
		BgL_checksumz00_1596, char *BgL_fromz00_1597)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_tracez00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_tracez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_tracez00();
					BGl_importedzd2moduleszd2initz00zz__expander_tracez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_tracez00()
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 14 */
			BGl_symbol2289z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2290z00zz__expander_tracez00);
			BGl_symbol2291z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2292z00zz__expander_tracez00);
			BGl_symbol2293z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2294z00zz__expander_tracez00);
			BGl_symbol2295z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2296z00zz__expander_tracez00);
			BGl_symbol2297z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2298z00zz__expander_tracez00);
			BGl_symbol2302z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2303z00zz__expander_tracez00);
			BGl_symbol2304z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2305z00zz__expander_tracez00);
			BGl_symbol2306z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2307z00zz__expander_tracez00);
			return (BGl_symbol2310z00zz__expander_tracez00 =
				bstring_to_symbol(BGl_string2311z00zz__expander_tracez00), BUNSPEC);
		}
	}



/* make-expand-when-trace */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t
		BgL_modez00_1)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 54 */
			{	/* Eval/expdtrace.scm 55 */
				obj_t BgL_zc3anonymousza31894ze3z83_1569;

				BgL_zc3anonymousza31894ze3z83_1569 =
					make_fx_procedure(BGl_zc3anonymousza31894ze3z83zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31894ze3z83_1569,
					(int) (((long) 0)), BgL_modez00_1);
				return BgL_zc3anonymousza31894ze3z83_1569;
			}
		}
	}



/* _make-expand-when-trace */
	obj_t BGl__makezd2expandzd2whenzd2tracezd2zz__expander_tracez00(obj_t
		BgL_envz00_1570, obj_t BgL_modez00_1571)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 54 */
			{	/* Eval/expdtrace.scm 55 */
				obj_t BgL_auxz00_1617;

				if (SYMBOLP(BgL_modez00_1571))
					{	/* Eval/expdtrace.scm 55 */
						BgL_auxz00_1617 = BgL_modez00_1571;
					}
				else
					{
						obj_t BgL_auxz00_1620;

						BgL_auxz00_1620 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2286z00zz__expander_tracez00, BINT(((long) 1908)),
							BGl_string2287z00zz__expander_tracez00,
							BGl_string2288z00zz__expander_tracez00, BgL_modez00_1571);
						FAILURE(BgL_auxz00_1620, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2whenzd2tracezd2zz__expander_tracez00
					(BgL_auxz00_1617);
			}
		}
	}



/* <anonymous:1894> */
	obj_t BGl_zc3anonymousza31894ze3z83zz__expander_tracez00(obj_t
		BgL_envz00_1572, obj_t BgL_xz00_1574, obj_t BgL_ez00_1575)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 55 */
			{	/* Eval/expdtrace.scm 55 */
				obj_t BgL_modez00_1573;

				BgL_modez00_1573 = PROCEDURE_REF(BgL_envz00_1572, (int) (((long) 0)));
				{
					obj_t BgL_xz00_771;

					obj_t BgL_ez00_772;

					BgL_xz00_771 = BgL_xz00_1574;
					BgL_ez00_772 = BgL_ez00_1575;
					{
						obj_t BgL_levelz00_774;

						obj_t BgL_expz00_775;

						if (PAIRP(BgL_xz00_771))
							{	/* Eval/expdtrace.scm 55 */
								obj_t BgL_cdrzd21397zd2_780;

								BgL_cdrzd21397zd2_780 = CDR(BgL_xz00_771);
								if (PAIRP(BgL_cdrzd21397zd2_780))
									{	/* Eval/expdtrace.scm 55 */
										BgL_levelz00_774 = CAR(BgL_cdrzd21397zd2_780);
										BgL_expz00_775 = CDR(BgL_cdrzd21397zd2_780);
										{	/* Eval/expdtrace.scm 58 */
											bool_t BgL_testz00_1632;

											if (
												(BgL_modez00_1573 ==
													BGl_symbol2289z00zz__expander_tracez00))
												{	/* Eval/expdtrace.scm 59 */
													int BgL_arg1921z00_803;

													BgL_arg1921z00_803 =
														BGl_bigloozd2compilerzd2debugz00zz__paramz00();
													BgL_testz00_1632 =
														((long) (BgL_arg1921z00_803) > ((long) 0));
												}
											else
												{	/* Eval/expdtrace.scm 60 */
													int BgL_arg1923z00_805;

													BgL_arg1923z00_805 = bgl_debug();
													BgL_testz00_1632 =
														((long) (BgL_arg1923z00_805) > ((long) 0));
												}
											if (BgL_testz00_1632)
												{	/* Eval/expdtrace.scm 61 */
													obj_t BgL_arg1901z00_785;

													{	/* Eval/expdtrace.scm 61 */
														obj_t BgL_arg1902z00_786;

														obj_t BgL_arg1903z00_787;

														BgL_arg1902z00_786 =
															BGl_symbol2291z00zz__expander_tracez00;
														{	/* Eval/expdtrace.scm 61 */
															obj_t BgL_arg1904z00_788;

															obj_t BgL_arg1905z00_789;

															{	/* Eval/expdtrace.scm 61 */
																obj_t BgL_arg1910z00_794;

																obj_t BgL_arg1911z00_795;

																BgL_arg1910z00_794 =
																	BGl_symbol2293z00zz__expander_tracez00;
																{	/* Eval/expdtrace.scm 61 */
																	obj_t BgL_arg1912z00_796;

																	BgL_arg1912z00_796 =
																		MAKE_PAIR
																		(BGl_symbol2295z00zz__expander_tracez00,
																		BNIL);
																	{	/* Eval/expdtrace.scm 61 */
																		obj_t BgL_list1915z00_798;

																		{	/* Eval/expdtrace.scm 61 */
																			obj_t BgL_arg1916z00_799;

																			BgL_arg1916z00_799 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list1915z00_798 =
																				MAKE_PAIR(BgL_levelz00_774,
																				BgL_arg1916z00_799);
																		}
																		BgL_arg1911z00_795 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1912z00_796, BgL_list1915z00_798);
																	}
																}
																BgL_arg1904z00_788 =
																	MAKE_PAIR(BgL_arg1910z00_794,
																	BgL_arg1911z00_795);
															}
															BgL_arg1905z00_789 =
																MAKE_PAIR
																(BGl_symbol2297z00zz__expander_tracez00,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_expz00_775, BNIL));
															{	/* Eval/expdtrace.scm 61 */
																obj_t BgL_list1907z00_791;

																{	/* Eval/expdtrace.scm 61 */
																	obj_t BgL_arg1908z00_792;

																	{	/* Eval/expdtrace.scm 61 */
																		obj_t BgL_arg1909z00_793;

																		BgL_arg1909z00_793 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg1908z00_792 =
																			MAKE_PAIR(BUNSPEC, BgL_arg1909z00_793);
																	}
																	BgL_list1907z00_791 =
																		MAKE_PAIR(BgL_arg1905z00_789,
																		BgL_arg1908z00_792);
																}
																BgL_arg1903z00_787 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1904z00_788, BgL_list1907z00_791);
															}
														}
														BgL_arg1901z00_785 =
															MAKE_PAIR(BgL_arg1902z00_786, BgL_arg1903z00_787);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_772) (BgL_ez00_772,
														BgL_arg1901z00_785, BgL_ez00_772, BEOA);
												}
											else
												{	/* Eval/expdtrace.scm 58 */
													return BUNSPEC;
												}
										}
									}
								else
									{	/* Eval/expdtrace.scm 55 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2299z00zz__expander_tracez00,
											BGl_string2300z00zz__expander_tracez00, BgL_xz00_771);
									}
							}
						else
							{	/* Eval/expdtrace.scm 55 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2299z00zz__expander_tracez00,
									BGl_string2300z00zz__expander_tracez00, BgL_xz00_771);
							}
					}
				}
			}
		}
	}



/* make-expand-with-trace */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t
		BgL_modez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 72 */
			{	/* Eval/expdtrace.scm 73 */
				obj_t BgL_zc3anonymousza31925ze3z83_1576;

				BgL_zc3anonymousza31925ze3z83_1576 =
					make_fx_procedure(BGl_zc3anonymousza31925ze3z83zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31925ze3z83_1576,
					(int) (((long) 0)), BgL_modez00_2);
				return BgL_zc3anonymousza31925ze3z83_1576;
			}
		}
	}



/* _make-expand-with-trace */
	obj_t BGl__makezd2expandzd2withzd2tracezd2zz__expander_tracez00(obj_t
		BgL_envz00_1577, obj_t BgL_modez00_1578)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 72 */
			{	/* Eval/expdtrace.scm 73 */
				obj_t BgL_auxz00_1664;

				if (SYMBOLP(BgL_modez00_1578))
					{	/* Eval/expdtrace.scm 73 */
						BgL_auxz00_1664 = BgL_modez00_1578;
					}
				else
					{
						obj_t BgL_auxz00_1667;

						BgL_auxz00_1667 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2286z00zz__expander_tracez00, BINT(((long) 2490)),
							BGl_string2301z00zz__expander_tracez00,
							BGl_string2288z00zz__expander_tracez00, BgL_modez00_1578);
						FAILURE(BgL_auxz00_1667, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2withzd2tracezd2zz__expander_tracez00
					(BgL_auxz00_1664);
			}
		}
	}



/* <anonymous:1925> */
	obj_t BGl_zc3anonymousza31925ze3z83zz__expander_tracez00(obj_t
		BgL_envz00_1579, obj_t BgL_xz00_1581, obj_t BgL_ez00_1582)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 73 */
			{	/* Eval/expdtrace.scm 73 */
				obj_t BgL_modez00_1580;

				BgL_modez00_1580 = PROCEDURE_REF(BgL_envz00_1579, (int) (((long) 0)));
				{
					obj_t BgL_xz00_807;

					obj_t BgL_ez00_808;

					BgL_xz00_807 = BgL_xz00_1581;
					BgL_ez00_808 = BgL_ez00_1582;
					{
						obj_t BgL_levelz00_810;

						obj_t BgL_lblz00_811;

						obj_t BgL_argza2za2_812;

						if (PAIRP(BgL_xz00_807))
							{	/* Eval/expdtrace.scm 73 */
								obj_t BgL_cdrzd21414zd2_817;

								BgL_cdrzd21414zd2_817 = CDR(BgL_xz00_807);
								if (PAIRP(BgL_cdrzd21414zd2_817))
									{	/* Eval/expdtrace.scm 73 */
										obj_t BgL_cdrzd21419zd2_819;

										BgL_cdrzd21419zd2_819 = CDR(BgL_cdrzd21414zd2_817);
										if (PAIRP(BgL_cdrzd21419zd2_819))
											{	/* Eval/expdtrace.scm 73 */
												BgL_levelz00_810 = CAR(BgL_cdrzd21414zd2_817);
												BgL_lblz00_811 = CAR(BgL_cdrzd21419zd2_819);
												BgL_argza2za2_812 = CDR(BgL_cdrzd21419zd2_819);
												{	/* Eval/expdtrace.scm 76 */
													bool_t BgL_testz00_1682;

													if (
														(BgL_modez00_1580 ==
															BGl_symbol2289z00zz__expander_tracez00))
														{	/* Eval/expdtrace.scm 77 */
															int BgL_arg1979z00_864;

															BgL_arg1979z00_864 =
																BGl_bigloozd2compilerzd2debugz00zz__paramz00();
															BgL_testz00_1682 =
																((long) (BgL_arg1979z00_864) > ((long) 0));
														}
													else
														{	/* Eval/expdtrace.scm 78 */
															int BgL_arg1981z00_866;

															BgL_arg1981z00_866 = bgl_debug();
															BgL_testz00_1682 =
																((long) (BgL_arg1981z00_866) > ((long) 0));
														}
													if (BgL_testz00_1682)
														{	/* Eval/expdtrace.scm 79 */
															obj_t BgL_arg1935z00_825;

															{	/* Eval/expdtrace.scm 79 */
																obj_t BgL_arg1937z00_826;

																obj_t BgL_arg1938z00_827;

																BgL_arg1937z00_826 =
																	BGl_symbol2291z00zz__expander_tracez00;
																{	/* Eval/expdtrace.scm 79 */
																	obj_t BgL_arg1940z00_828;

																	obj_t BgL_arg1941z00_829;

																	obj_t BgL_arg1942z00_830;

																	{	/* Eval/expdtrace.scm 79 */
																		obj_t BgL_arg1948z00_835;

																		obj_t BgL_arg1949z00_836;

																		BgL_arg1948z00_835 =
																			BGl_symbol2302z00zz__expander_tracez00;
																		{	/* Eval/expdtrace.scm 79 */
																			obj_t BgL_arg1950z00_837;

																			BgL_arg1950z00_837 =
																				MAKE_PAIR
																				(BGl_symbol2295z00zz__expander_tracez00,
																				BNIL);
																			{	/* Eval/expdtrace.scm 79 */
																				obj_t BgL_list1953z00_840;

																				{	/* Eval/expdtrace.scm 79 */
																					obj_t BgL_arg1954z00_841;

																					BgL_arg1954z00_841 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list1953z00_840 =
																						MAKE_PAIR(BINT(((long) 0)),
																						BgL_arg1954z00_841);
																				}
																				BgL_arg1949z00_836 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1950z00_837,
																					BgL_list1953z00_840);
																		}}
																		BgL_arg1940z00_828 =
																			MAKE_PAIR(BgL_arg1948z00_835,
																			BgL_arg1949z00_836);
																	}
																	{	/* Eval/expdtrace.scm 80 */
																		obj_t BgL_arg1955z00_842;

																		obj_t BgL_arg1956z00_843;

																		BgL_arg1955z00_842 =
																			BGl_symbol2304z00zz__expander_tracez00;
																		{	/* Eval/expdtrace.scm 80 */
																			obj_t BgL_arg1957z00_844;

																			{	/* Eval/expdtrace.scm 80 */
																				obj_t BgL_arg1962z00_849;

																				obj_t BgL_arg1963z00_850;

																				BgL_arg1962z00_849 =
																					BGl_symbol2306z00zz__expander_tracez00;
																				{	/* Eval/expdtrace.scm 80 */
																					obj_t BgL_arg1966z00_852;

																					BgL_arg1966z00_852 =
																						MAKE_PAIR
																						(BGl_symbol2297z00zz__expander_tracez00,
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_argza2za2_812, BNIL));
																					{	/* Eval/expdtrace.scm 80 */
																						obj_t BgL_list1968z00_854;

																						{	/* Eval/expdtrace.scm 80 */
																							obj_t BgL_arg1969z00_855;

																							BgL_arg1969z00_855 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1968z00_854 =
																								MAKE_PAIR(BgL_arg1966z00_852,
																								BgL_arg1969z00_855);
																						}
																						BgL_arg1963z00_850 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BNIL, BgL_list1968z00_854);
																				}}
																				BgL_arg1957z00_844 =
																					MAKE_PAIR(BgL_arg1962z00_849,
																					BgL_arg1963z00_850);
																			}
																			{	/* Eval/expdtrace.scm 80 */
																				obj_t BgL_list1959z00_846;

																				{	/* Eval/expdtrace.scm 80 */
																					obj_t BgL_arg1960z00_847;

																					{	/* Eval/expdtrace.scm 80 */
																						obj_t BgL_arg1961z00_848;

																						BgL_arg1961z00_848 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg1960z00_847 =
																							MAKE_PAIR(BgL_arg1957z00_844,
																							BgL_arg1961z00_848);
																					}
																					BgL_list1959z00_846 =
																						MAKE_PAIR(BgL_lblz00_811,
																						BgL_arg1960z00_847);
																				}
																				BgL_arg1956z00_843 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_levelz00_810,
																					BgL_list1959z00_846);
																		}}
																		BgL_arg1941z00_829 =
																			MAKE_PAIR(BgL_arg1955z00_842,
																			BgL_arg1956z00_843);
																	}
																	BgL_arg1942z00_830 =
																		MAKE_PAIR
																		(BGl_symbol2297z00zz__expander_tracez00,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_argza2za2_812, BNIL));
																	{	/* Eval/expdtrace.scm 79 */
																		obj_t BgL_list1944z00_832;

																		{	/* Eval/expdtrace.scm 79 */
																			obj_t BgL_arg1945z00_833;

																			{	/* Eval/expdtrace.scm 79 */
																				obj_t BgL_arg1946z00_834;

																				BgL_arg1946z00_834 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1945z00_833 =
																					MAKE_PAIR(BgL_arg1942z00_830,
																					BgL_arg1946z00_834);
																			}
																			BgL_list1944z00_832 =
																				MAKE_PAIR(BgL_arg1941z00_829,
																				BgL_arg1945z00_833);
																		}
																		BgL_arg1938z00_827 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1940z00_828, BgL_list1944z00_832);
																}}
																BgL_arg1935z00_825 =
																	MAKE_PAIR(BgL_arg1937z00_826,
																	BgL_arg1938z00_827);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_808) (BgL_ez00_808,
																BgL_arg1935z00_825, BgL_ez00_808, BEOA);
														}
													else
														{	/* Eval/expdtrace.scm 82 */
															obj_t BgL_arg1974z00_860;

															BgL_arg1974z00_860 =
																MAKE_PAIR
																(BGl_symbol2297z00zz__expander_tracez00,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_argza2za2_812, BNIL));
															return
																PROCEDURE_ENTRY(BgL_ez00_808) (BgL_ez00_808,
																BgL_arg1974z00_860, BgL_ez00_808, BEOA);
														}
												}
											}
										else
											{	/* Eval/expdtrace.scm 73 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2308z00zz__expander_tracez00,
													BGl_string2300z00zz__expander_tracez00, BgL_xz00_807);
											}
									}
								else
									{	/* Eval/expdtrace.scm 73 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2308z00zz__expander_tracez00,
											BGl_string2300z00zz__expander_tracez00, BgL_xz00_807);
									}
							}
						else
							{	/* Eval/expdtrace.scm 73 */
								return
									BGl_errorz00zz__errorz00
									(BGl_string2308z00zz__expander_tracez00,
									BGl_string2300z00zz__expander_tracez00, BgL_xz00_807);
							}
					}
				}
			}
		}
	}



/* make-expand-trace-item */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t
		BgL_modez00_3)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 89 */
			{	/* Eval/expdtrace.scm 90 */
				obj_t BgL_zc3anonymousza31983ze3z83_1583;

				BgL_zc3anonymousza31983ze3z83_1583 =
					make_fx_procedure(BGl_zc3anonymousza31983ze3z83zz__expander_tracez00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza31983ze3z83_1583,
					(int) (((long) 0)), BgL_modez00_3);
				return BgL_zc3anonymousza31983ze3z83_1583;
			}
		}
	}



/* _make-expand-trace-item */
	obj_t BGl__makezd2expandzd2tracezd2itemzd2zz__expander_tracez00(obj_t
		BgL_envz00_1584, obj_t BgL_modez00_1585)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 89 */
			{	/* Eval/expdtrace.scm 90 */
				obj_t BgL_auxz00_1732;

				if (SYMBOLP(BgL_modez00_1585))
					{	/* Eval/expdtrace.scm 90 */
						BgL_auxz00_1732 = BgL_modez00_1585;
					}
				else
					{
						obj_t BgL_auxz00_1735;

						BgL_auxz00_1735 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2286z00zz__expander_tracez00, BINT(((long) 3122)),
							BGl_string2309z00zz__expander_tracez00,
							BGl_string2288z00zz__expander_tracez00, BgL_modez00_1585);
						FAILURE(BgL_auxz00_1735, BFALSE, BFALSE);
					}
				return
					BGl_makezd2expandzd2tracezd2itemzd2zz__expander_tracez00
					(BgL_auxz00_1732);
			}
		}
	}



/* <anonymous:1983> */
	obj_t BGl_zc3anonymousza31983ze3z83zz__expander_tracez00(obj_t
		BgL_envz00_1586, obj_t BgL_xz00_1588, obj_t BgL_ez00_1589)
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 90 */
			{	/* Eval/expdtrace.scm 91 */
				obj_t BgL_modez00_1587;

				BgL_modez00_1587 = PROCEDURE_REF(BgL_envz00_1586, (int) (((long) 0)));
				{
					obj_t BgL_xz00_868;

					obj_t BgL_ez00_869;

					BgL_xz00_868 = BgL_xz00_1588;
					BgL_ez00_869 = BgL_ez00_1589;
					{	/* Eval/expdtrace.scm 91 */
						bool_t BgL_testz00_1742;

						if ((BgL_modez00_1587 == BGl_symbol2289z00zz__expander_tracez00))
							{	/* Eval/expdtrace.scm 92 */
								int BgL_arg2012z00_906;

								BgL_arg2012z00_906 =
									BGl_bigloozd2compilerzd2debugz00zz__paramz00();
								BgL_testz00_1742 = ((long) (BgL_arg2012z00_906) > ((long) 0));
							}
						else
							{	/* Eval/expdtrace.scm 93 */
								int BgL_arg2015z00_908;

								BgL_arg2015z00_908 = bgl_debug();
								BgL_testz00_1742 = ((long) (BgL_arg2015z00_908) > ((long) 0));
							}
						if (BgL_testz00_1742)
							{	/* Eval/expdtrace.scm 94 */
								obj_t BgL_arg1985z00_872;

								obj_t BgL_arg1986z00_873;

								BgL_arg1985z00_872 = BGl_symbol2291z00zz__expander_tracez00;
								{	/* Eval/expdtrace.scm 94 */
									obj_t BgL_arg1987z00_874;

									obj_t BgL_arg1988z00_875;

									{	/* Eval/expdtrace.scm 94 */
										obj_t BgL_arg1993z00_880;

										obj_t BgL_arg1994z00_881;

										BgL_arg1993z00_880 = BGl_symbol2302z00zz__expander_tracez00;
										{	/* Eval/expdtrace.scm 94 */
											obj_t BgL_arg1995z00_882;

											BgL_arg1995z00_882 =
												MAKE_PAIR(BGl_symbol2295z00zz__expander_tracez00, BNIL);
											{	/* Eval/expdtrace.scm 94 */
												obj_t BgL_list1999z00_885;

												{	/* Eval/expdtrace.scm 94 */
													obj_t BgL_arg2000z00_886;

													BgL_arg2000z00_886 = MAKE_PAIR(BNIL, BNIL);
													BgL_list1999z00_885 =
														MAKE_PAIR(BINT(((long) 0)), BgL_arg2000z00_886);
												}
												BgL_arg1994z00_881 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1995z00_882, BgL_list1999z00_885);
										}}
										BgL_arg1987z00_874 =
											MAKE_PAIR(BgL_arg1993z00_880, BgL_arg1994z00_881);
									}
									{	/* Eval/expdtrace.scm 95 */
										obj_t BgL_arg2001z00_887;

										obj_t BgL_arg2002z00_888;

										BgL_arg2001z00_887 = BGl_symbol2310z00zz__expander_tracez00;
										{	/* Eval/expdtrace.scm 95 */
											obj_t BgL_arg2003z00_889;

											{	/* Eval/expdtrace.scm 95 */
												obj_t BgL_l1848z00_891;

												BgL_l1848z00_891 = CDR(BgL_xz00_868);
												if (NULLP(BgL_l1848z00_891))
													{	/* Eval/expdtrace.scm 95 */
														BgL_arg2003z00_889 = BNIL;
													}
												else
													{	/* Eval/expdtrace.scm 95 */
														obj_t BgL_head1850z00_893;

														BgL_head1850z00_893 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l1848z00_895;

															obj_t BgL_tail1851z00_896;

															BgL_l1848z00_895 = BgL_l1848z00_891;
															BgL_tail1851z00_896 = BgL_head1850z00_893;
														BgL_zc3anonymousza32006ze3z83_897:
															if (NULLP(BgL_l1848z00_895))
																{	/* Eval/expdtrace.scm 95 */
																	BgL_arg2003z00_889 = CDR(BgL_head1850z00_893);
																}
															else
																{	/* Eval/expdtrace.scm 95 */
																	obj_t BgL_newtail1852z00_899;

																	{	/* Eval/expdtrace.scm 95 */
																		obj_t BgL_arg2009z00_901;

																		{	/* Eval/expdtrace.scm 95 */
																			obj_t BgL_xz00_903;

																			BgL_xz00_903 = CAR(BgL_l1848z00_895);
																			BgL_arg2009z00_901 =
																				PROCEDURE_ENTRY(BgL_ez00_869)
																				(BgL_ez00_869, BgL_xz00_903,
																				BgL_ez00_869, BEOA);
																		}
																		BgL_newtail1852z00_899 =
																			MAKE_PAIR(BgL_arg2009z00_901, BNIL);
																	}
																	SET_CDR(BgL_tail1851z00_896,
																		BgL_newtail1852z00_899);
																	{
																		obj_t BgL_tail1851z00_1771;

																		obj_t BgL_l1848z00_1769;

																		BgL_l1848z00_1769 = CDR(BgL_l1848z00_895);
																		BgL_tail1851z00_1771 =
																			BgL_newtail1852z00_899;
																		BgL_tail1851z00_896 = BgL_tail1851z00_1771;
																		BgL_l1848z00_895 = BgL_l1848z00_1769;
																		goto BgL_zc3anonymousza32006ze3z83_897;
																	}
																}
														}
													}
											}
											BgL_arg2002z00_888 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2003z00_889, BNIL);
										}
										BgL_arg1988z00_875 =
											MAKE_PAIR(BgL_arg2001z00_887, BgL_arg2002z00_888);
									}
									{	/* Eval/expdtrace.scm 94 */
										obj_t BgL_list1990z00_877;

										{	/* Eval/expdtrace.scm 94 */
											obj_t BgL_arg1991z00_878;

											{	/* Eval/expdtrace.scm 94 */
												obj_t BgL_arg1992z00_879;

												BgL_arg1992z00_879 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1991z00_878 =
													MAKE_PAIR(BUNSPEC, BgL_arg1992z00_879);
											}
											BgL_list1990z00_877 =
												MAKE_PAIR(BgL_arg1988z00_875, BgL_arg1991z00_878);
										}
										BgL_arg1986z00_873 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1987z00_874, BgL_list1990z00_877);
									}
								}
								return MAKE_PAIR(BgL_arg1985z00_872, BgL_arg1986z00_873);
							}
						else
							{	/* Eval/expdtrace.scm 91 */
								return BUNSPEC;
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_tracez00()
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_tracez00()
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_tracez00()
	{
		AN_OBJECT;
		{	/* Eval/expdtrace.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
			return BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2312z00zz__expander_tracez00));
		}
	}

#ifdef __cplusplus
}
#endif
