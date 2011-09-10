/*===========================================================================*/
/*   (Match/s2cfun.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Match/s2cfun.scm -indent -o objs/obj_u/Match/s2cfun.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__atomzf3zf3zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_andmapz00zz__match_s2cfunz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl__ormapz00zz__match_s2cfunz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_concatz00zz__match_s2cfunz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__match_s2cfunz00();
	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__match_s2cfunz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_symbol2286z00zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_symbol2288z00zz__match_s2cfunz00 = BUNSPEC;
	static obj_t BGl_symbol2290z00zz__match_s2cfunz00 = BUNSPEC;
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zz__match_s2cfunz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_zc3anonymousza31930ze3z83zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t string_to_symbol(char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jimzd2gensymzd2zz__match_s2cfunz00 = BUNSPEC;
	extern obj_t string_to_bstring(char *);
	static obj_t BGl__andmapz00zz__match_s2cfunz00(obj_t, obj_t, obj_t);
	static obj_t BGl__concatz00zz__match_s2cfunz00(obj_t, obj_t);
	extern char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ormapz00zz__match_s2cfunz00(obj_t, obj_t);
	extern obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__match_s2cfunz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_concatzd2envzd2zz__match_s2cfunz00,
		BgL_bgl__concatza700za7za7__ma2294za7, va_generic_entry,
		BGl__concatz00zz__match_s2cfunz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_andmapzd2envzd2zz__match_s2cfunz00,
		BgL_bgl__andmapza700za7za7__ma2295za7, va_generic_entry,
		BGl__andmapz00zz__match_s2cfunz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_atomzf3zd2envz21zz__match_s2cfunz00,
		BgL_bgl__atomza7f3za7f3za7za7__m2296z00, BGl__atomzf3zf3zz__match_s2cfunz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ormapzd2envzd2zz__match_s2cfunz00,
		BgL_bgl__ormapza700za7za7__mat2297za7, va_generic_entry,
		BGl__ormapz00zz__match_s2cfunz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2287z00zz__match_s2cfunz00,
		BgL_bgl_string2287za700za7za7_2298za7, "G", 1);
	      DEFINE_STRING(BGl_string2289z00zz__match_s2cfunz00,
		BgL_bgl_string2289za700za7za7_2299za7, "non-user", 8);
	      DEFINE_STRING(BGl_string2291z00zz__match_s2cfunz00,
		BgL_bgl_string2291za700za7za7_2300za7, "concat", 6);
	      DEFINE_STRING(BGl_string2292z00zz__match_s2cfunz00,
		BgL_bgl_string2292za700za7za7_2301za7, "", 0);
	      DEFINE_STRING(BGl_string2293z00zz__match_s2cfunz00,
		BgL_bgl_string2293za700za7za7_2302za7, "__match_s2cfun", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__match_s2cfunz00(long
		BgL_checksumz00_1893, char *BgL_fromz00_1894)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__match_s2cfunz00))
				{
					BGl_requirezd2initializa7ationz75zz__match_s2cfunz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__match_s2cfunz00();
					BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00();
					BGl_toplevelzd2initzd2zz__match_s2cfunz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__match_s2cfunz00()
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 11 */
			BGl_symbol2286z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string2287z00zz__match_s2cfunz00);
			BGl_symbol2288z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string2289z00zz__match_s2cfunz00);
			return (BGl_symbol2290z00zz__match_s2cfunz00 =
				bstring_to_symbol(BGl_string2291z00zz__match_s2cfunz00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__match_s2cfunz00()
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 11 */
			{	/* Match/s2cfun.scm 63 */
				obj_t BgL_counterz00_774;

				{	/* Match/s2cfun.scm 63 */
					obj_t BgL_cellvalz00_1904;

					BgL_cellvalz00_1904 = BINT(((long) 100));
					BgL_counterz00_774 = MAKE_CELL(BgL_cellvalz00_1904);
				}
				{	/* Match/s2cfun.scm 64 */
					obj_t BgL_zc3anonymousza31930ze3z83_1878;

					BgL_zc3anonymousza31930ze3z83_1878 =
						make_va_procedure(BGl_zc3anonymousza31930ze3z83zz__match_s2cfunz00,
						(int) (((long) -1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza31930ze3z83_1878,
						(int) (((long) 0)), BgL_counterz00_774);
					return (BGl_jimzd2gensymzd2zz__match_s2cfunz00 =
						BgL_zc3anonymousza31930ze3z83_1878, BUNSPEC);
				}
			}
		}
	}



/* <anonymous:1930> */
	obj_t BGl_zc3anonymousza31930ze3z83zz__match_s2cfunz00(obj_t BgL_envz00_1879,
		obj_t BgL_argsz00_1881)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 64 */
			{	/* Match/s2cfun.scm 65 */
				obj_t BgL_counterz00_1880;

				BgL_counterz00_1880 =
					PROCEDURE_REF(BgL_envz00_1879, (int) (((long) 0)));
				{
					obj_t BgL_argsz00_775;

					BgL_argsz00_775 = BgL_argsz00_1881;
					{	/* Match/s2cfun.scm 65 */
						obj_t BgL_auxz00_1882;

						BgL_auxz00_1882 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(CELL_REF(BgL_counterz00_1880),
							BINT(((long) 1)));
						CELL_SET(BgL_counterz00_1880, BgL_auxz00_1882);
					}
					{	/* Match/s2cfun.scm 66 */
						obj_t BgL_symbolz00_777;

						{	/* Match/s2cfun.scm 66 */
							obj_t BgL_arg1931z00_778;

							if (PAIRP(BgL_argsz00_775))
								{	/* Match/s2cfun.scm 66 */
									BgL_arg1931z00_778 = CAR(BgL_argsz00_775);
								}
							else
								{	/* Match/s2cfun.scm 66 */
									BgL_arg1931z00_778 = BGl_symbol2286z00zz__match_s2cfunz00;
								}
							{	/* Match/s2cfun.scm 66 */
								obj_t BgL_list1932z00_779;

								{	/* Match/s2cfun.scm 66 */
									obj_t BgL_arg1935z00_780;

									BgL_arg1935z00_780 =
										MAKE_PAIR(CELL_REF(BgL_counterz00_1880), BNIL);
									BgL_list1932z00_779 =
										MAKE_PAIR(BgL_arg1931z00_778, BgL_arg1935z00_780);
								}
								BgL_symbolz00_777 =
									BGl_concatz00zz__match_s2cfunz00(BgL_list1932z00_779);
							}
						}
						BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symbolz00_777,
							BGl_symbol2288z00zz__match_s2cfunz00, BTRUE);
						return BgL_symbolz00_777;
					}
				}
			}
		}
	}



/* atom? */
	BGL_EXPORTED_DEF obj_t BGl_atomzf3zf3zz__match_s2cfunz00(obj_t BgL_ez00_1)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 49 */
			if (PAIRP(BgL_ez00_1))
				{	/* Match/s2cfun.scm 50 */
					return BFALSE;
				}
			else
				{	/* Match/s2cfun.scm 50 */
					return BTRUE;
				}
		}
	}



/* _atom? */
	obj_t BGl__atomzf3zf3zz__match_s2cfunz00(obj_t BgL_envz00_1883,
		obj_t BgL_ez00_1884)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 49 */
			return BGl_atomzf3zf3zz__match_s2cfunz00(BgL_ez00_1884);
		}
	}



/* concat */
	BGL_EXPORTED_DEF obj_t BGl_concatz00zz__match_s2cfunz00(obj_t BgL_argsz00_2)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 52 */
			{	/* Match/s2cfun.scm 54 */
				obj_t BgL_arg1938z00_783;

				{	/* Match/s2cfun.scm 54 */
					obj_t BgL_runner1948z00_803;

					if (NULLP(BgL_argsz00_2))
						{	/* Match/s2cfun.scm 55 */
							BgL_runner1948z00_803 = BNIL;
						}
					else
						{	/* Match/s2cfun.scm 55 */
							obj_t BgL_head1856z00_786;

							BgL_head1856z00_786 = MAKE_PAIR(BNIL, BNIL);
							{
								obj_t BgL_l1854z00_788;

								obj_t BgL_tail1857z00_789;

								BgL_l1854z00_788 = BgL_argsz00_2;
								BgL_tail1857z00_789 = BgL_head1856z00_786;
							BgL_zc3anonymousza31940ze3z83_790:
								if (NULLP(BgL_l1854z00_788))
									{	/* Match/s2cfun.scm 55 */
										BgL_runner1948z00_803 = CDR(BgL_head1856z00_786);
									}
								else
									{	/* Match/s2cfun.scm 55 */
										obj_t BgL_newtail1858z00_792;

										{	/* Match/s2cfun.scm 55 */
											obj_t BgL_arg1943z00_794;

											{	/* Match/s2cfun.scm 55 */
												obj_t BgL_sz00_796;

												BgL_sz00_796 = CAR(BgL_l1854z00_788);
												if (STRINGP(BgL_sz00_796))
													{	/* Match/s2cfun.scm 56 */
														BgL_arg1943z00_794 = BgL_sz00_796;
													}
												else
													{	/* Match/s2cfun.scm 56 */
														if (SYMBOLP(BgL_sz00_796))
															{	/* Match/s2cfun.scm 57 */
																obj_t BgL_res2276z00_1392;

																{	/* Match/s2cfun.scm 57 */
																	obj_t BgL_symbolz00_1390;

																	BgL_symbolz00_1390 = BgL_sz00_796;
																	{	/* Match/s2cfun.scm 57 */
																		obj_t BgL_arg2191z00_1391;

																		BgL_arg2191z00_1391 =
																			SYMBOL_TO_STRING(BgL_symbolz00_1390);
																		BgL_res2276z00_1392 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2191z00_1391);
																	}
																}
																BgL_arg1943z00_794 = BgL_res2276z00_1392;
															}
														else
															{	/* Match/s2cfun.scm 57 */
																if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
																	(BgL_sz00_796))
																	{	/* Ieee/number.scm 133 */

																		BgL_arg1943z00_794 =
																			string_to_bstring
																			(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																			(BgL_sz00_796, BINT(((long) 10))));
																	}
																else
																	{	/* Match/s2cfun.scm 58 */
																		BgL_arg1943z00_794 =
																			BGl_errorz00zz__errorz00
																			(BGl_symbol2290z00zz__match_s2cfunz00,
																			BGl_string2292z00zz__match_s2cfunz00,
																			BgL_argsz00_2);
																	}
															}
													}
											}
											BgL_newtail1858z00_792 =
												MAKE_PAIR(BgL_arg1943z00_794, BNIL);
										}
										SET_CDR(BgL_tail1857z00_789, BgL_newtail1858z00_792);
										{
											obj_t BgL_tail1857z00_1948;

											obj_t BgL_l1854z00_1946;

											BgL_l1854z00_1946 = CDR(BgL_l1854z00_788);
											BgL_tail1857z00_1948 = BgL_newtail1858z00_792;
											BgL_tail1857z00_789 = BgL_tail1857z00_1948;
											BgL_l1854z00_788 = BgL_l1854z00_1946;
											goto BgL_zc3anonymousza31940ze3z83_790;
										}
									}
							}
						}
					BgL_arg1938z00_783 =
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner1948z00_803);
				}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg1938z00_783));
			}
		}
	}



/* _concat */
	obj_t BGl__concatz00zz__match_s2cfunz00(obj_t BgL_envz00_1885,
		obj_t BgL_argsz00_1886)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 52 */
			return BGl_concatz00zz__match_s2cfunz00(BgL_argsz00_1886);
		}
	}



/* andmap */
	BGL_EXPORTED_DEF obj_t BGl_andmapz00zz__match_s2cfunz00(obj_t BgL_pz00_3,
		obj_t BgL_argsz00_4)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 71 */
			{
				obj_t BgL_argsz00_805;

				obj_t BgL_valuez00_806;

				BgL_argsz00_805 = BgL_argsz00_4;
				BgL_valuez00_806 = BTRUE;
			BgL_zc3anonymousza31949ze3z83_807:
				{	/* Match/s2cfun.scm 74 */
					bool_t BgL_testz00_1953;

					{
						obj_t BgL_lsz00_849;

						BgL_lsz00_849 = BgL_argsz00_805;
					BgL_zc3anonymousza31972ze3z83_850:
						if (PAIRP(BgL_lsz00_849))
							{	/* Match/s2cfun.scm 76 */
								bool_t BgL__ortest_1825z00_852;

								{	/* Match/s2cfun.scm 76 */
									bool_t BgL_testz00_1956;

									{	/* Match/s2cfun.scm 76 */
										obj_t BgL_auxz00_1957;

										BgL_auxz00_1957 = CAR(BgL_lsz00_849);
										BgL_testz00_1956 = PAIRP(BgL_auxz00_1957);
									}
									if (BgL_testz00_1956)
										{	/* Match/s2cfun.scm 76 */
											BgL__ortest_1825z00_852 = ((bool_t) 0);
										}
									else
										{	/* Match/s2cfun.scm 76 */
											BgL__ortest_1825z00_852 = ((bool_t) 1);
										}
								}
								if (BgL__ortest_1825z00_852)
									{	/* Match/s2cfun.scm 76 */
										BgL_testz00_1953 = BgL__ortest_1825z00_852;
									}
								else
									{
										obj_t BgL_lsz00_1961;

										BgL_lsz00_1961 = CDR(BgL_lsz00_849);
										BgL_lsz00_849 = BgL_lsz00_1961;
										goto BgL_zc3anonymousza31972ze3z83_850;
									}
							}
						else
							{	/* Match/s2cfun.scm 75 */
								BgL_testz00_1953 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_1953)
						{	/* Match/s2cfun.scm 74 */
							return BgL_valuez00_806;
						}
					else
						{	/* Match/s2cfun.scm 79 */
							obj_t BgL_valuez00_809;

							{	/* Match/s2cfun.scm 79 */
								obj_t BgL_auxz00_1963;

								if (NULLP(BgL_argsz00_805))
									{	/* Match/s2cfun.scm 79 */
										BgL_auxz00_1963 = BNIL;
									}
								else
									{	/* Match/s2cfun.scm 79 */
										obj_t BgL_head1861z00_832;

										BgL_head1861z00_832 =
											MAKE_PAIR(CAR(CAR(BgL_argsz00_805)), BNIL);
										{	/* Match/s2cfun.scm 79 */
											obj_t BgL_g1864z00_833;

											BgL_g1864z00_833 = CDR(BgL_argsz00_805);
											{
												obj_t BgL_l1859z00_1410;

												obj_t BgL_tail1862z00_1411;

												BgL_l1859z00_1410 = BgL_g1864z00_833;
												BgL_tail1862z00_1411 = BgL_head1861z00_832;
											BgL_zc3anonymousza31963ze3z83_1409:
												if (NULLP(BgL_l1859z00_1410))
													{	/* Match/s2cfun.scm 79 */
														BgL_auxz00_1963 = BgL_head1861z00_832;
													}
												else
													{	/* Match/s2cfun.scm 79 */
														obj_t BgL_newtail1863z00_1419;

														BgL_newtail1863z00_1419 =
															MAKE_PAIR(CAR(CAR(BgL_l1859z00_1410)), BNIL);
														SET_CDR(BgL_tail1862z00_1411,
															BgL_newtail1863z00_1419);
														{
															obj_t BgL_tail1862z00_1978;

															obj_t BgL_l1859z00_1976;

															BgL_l1859z00_1976 = CDR(BgL_l1859z00_1410);
															BgL_tail1862z00_1978 = BgL_newtail1863z00_1419;
															BgL_tail1862z00_1411 = BgL_tail1862z00_1978;
															BgL_l1859z00_1410 = BgL_l1859z00_1976;
															goto BgL_zc3anonymousza31963ze3z83_1409;
														}
													}
											}
										}
									}
								BgL_valuez00_809 = apply(BgL_pz00_3, BgL_auxz00_1963);
							}
							if (CBOOL(BgL_valuez00_809))
								{	/* Match/s2cfun.scm 80 */
									obj_t BgL_arg1951z00_811;

									if (NULLP(BgL_argsz00_805))
										{	/* Match/s2cfun.scm 80 */
											BgL_arg1951z00_811 = BNIL;
										}
									else
										{	/* Match/s2cfun.scm 80 */
											obj_t BgL_head1867z00_814;

											BgL_head1867z00_814 =
												MAKE_PAIR(CDR(CAR(BgL_argsz00_805)), BNIL);
											{	/* Match/s2cfun.scm 80 */
												obj_t BgL_g1870z00_815;

												BgL_g1870z00_815 = CDR(BgL_argsz00_805);
												{
													obj_t BgL_l1865z00_1469;

													obj_t BgL_tail1868z00_1470;

													BgL_l1865z00_1469 = BgL_g1870z00_815;
													BgL_tail1868z00_1470 = BgL_head1867z00_814;
												BgL_zc3anonymousza31953ze3z83_1468:
													if (NULLP(BgL_l1865z00_1469))
														{	/* Match/s2cfun.scm 80 */
															BgL_arg1951z00_811 = BgL_head1867z00_814;
														}
													else
														{	/* Match/s2cfun.scm 80 */
															obj_t BgL_newtail1869z00_1478;

															BgL_newtail1869z00_1478 =
																MAKE_PAIR(CDR(CAR(BgL_l1865z00_1469)), BNIL);
															SET_CDR(BgL_tail1868z00_1470,
																BgL_newtail1869z00_1478);
															{
																obj_t BgL_tail1868z00_1996;

																obj_t BgL_l1865z00_1994;

																BgL_l1865z00_1994 = CDR(BgL_l1865z00_1469);
																BgL_tail1868z00_1996 = BgL_newtail1869z00_1478;
																BgL_tail1868z00_1470 = BgL_tail1868z00_1996;
																BgL_l1865z00_1469 = BgL_l1865z00_1994;
																goto BgL_zc3anonymousza31953ze3z83_1468;
															}
														}
												}
											}
										}
									{
										obj_t BgL_valuez00_1998;

										obj_t BgL_argsz00_1997;

										BgL_argsz00_1997 = BgL_arg1951z00_811;
										BgL_valuez00_1998 = BgL_valuez00_809;
										BgL_valuez00_806 = BgL_valuez00_1998;
										BgL_argsz00_805 = BgL_argsz00_1997;
										goto BgL_zc3anonymousza31949ze3z83_807;
									}
								}
							else
								{	/* Match/s2cfun.scm 80 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* _andmap */
	obj_t BGl__andmapz00zz__match_s2cfunz00(obj_t BgL_envz00_1887,
		obj_t BgL_pz00_1888, obj_t BgL_argsz00_1889)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 71 */
			return BGl_andmapz00zz__match_s2cfunz00(BgL_pz00_1888, BgL_argsz00_1889);
		}
	}



/* ormap */
	BGL_EXPORTED_DEF obj_t BGl_ormapz00zz__match_s2cfunz00(obj_t BgL_pz00_5,
		obj_t BgL_argsz00_6)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 83 */
			if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length(BgL_argsz00_6)),
					BINT(((long) 1))))
				{	/* Match/s2cfun.scm 86 */
					obj_t BgL_arg1977z00_859;

					{	/* Match/s2cfun.scm 86 */
						obj_t BgL_l1871z00_860;

						BgL_l1871z00_860 = CAR(BgL_argsz00_6);
						if (NULLP(BgL_l1871z00_860))
							{	/* Match/s2cfun.scm 86 */
								BgL_arg1977z00_859 = BNIL;
							}
						else
							{	/* Match/s2cfun.scm 86 */
								obj_t BgL_head1873z00_862;

								{	/* Match/s2cfun.scm 86 */
									obj_t BgL_arg1985z00_875;

									{	/* Match/s2cfun.scm 86 */
										obj_t BgL_arg1987z00_877;

										BgL_arg1987z00_877 = CAR(BgL_l1871z00_860);
										BgL_arg1985z00_875 =
											PROCEDURE_ENTRY(BgL_pz00_5) (BgL_pz00_5,
											BgL_arg1987z00_877, BEOA);
									}
									BgL_head1873z00_862 = MAKE_PAIR(BgL_arg1985z00_875, BNIL);
								}
								{	/* Match/s2cfun.scm 86 */
									obj_t BgL_g1876z00_863;

									BgL_g1876z00_863 = CDR(BgL_l1871z00_860);
									{
										obj_t BgL_l1871z00_1528;

										obj_t BgL_tail1874z00_1529;

										BgL_l1871z00_1528 = BgL_g1876z00_863;
										BgL_tail1874z00_1529 = BgL_head1873z00_862;
									BgL_zc3anonymousza31979ze3z83_1527:
										if (NULLP(BgL_l1871z00_1528))
											{	/* Match/s2cfun.scm 86 */
												BgL_arg1977z00_859 = BgL_head1873z00_862;
											}
										else
											{	/* Match/s2cfun.scm 86 */
												obj_t BgL_newtail1875z00_1537;

												{	/* Match/s2cfun.scm 86 */
													obj_t BgL_arg1982z00_1538;

													{	/* Match/s2cfun.scm 86 */
														obj_t BgL_arg1984z00_1540;

														BgL_arg1984z00_1540 = CAR(BgL_l1871z00_1528);
														BgL_arg1982z00_1538 =
															PROCEDURE_ENTRY(BgL_pz00_5) (BgL_pz00_5,
															BgL_arg1984z00_1540, BEOA);
													}
													BgL_newtail1875z00_1537 =
														MAKE_PAIR(BgL_arg1982z00_1538, BNIL);
												}
												SET_CDR(BgL_tail1874z00_1529, BgL_newtail1875z00_1537);
												{
													obj_t BgL_tail1874z00_2022;

													obj_t BgL_l1871z00_2020;

													BgL_l1871z00_2020 = CDR(BgL_l1871z00_1528);
													BgL_tail1874z00_2022 = BgL_newtail1875z00_1537;
													BgL_tail1874z00_1529 = BgL_tail1874z00_2022;
													BgL_l1871z00_1528 = BgL_l1871z00_2020;
													goto BgL_zc3anonymousza31979ze3z83_1527;
												}
											}
									}
								}
							}
					}
					return
						BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BTRUE,
						BgL_arg1977z00_859);
				}
			else
				{
					obj_t BgL_argsz00_879;

					obj_t BgL_valuez00_880;

					BgL_argsz00_879 = BgL_argsz00_6;
					BgL_valuez00_880 = BFALSE;
				BgL_zc3anonymousza31988ze3z83_881:
					{	/* Match/s2cfun.scm 88 */
						bool_t BgL_testz00_2024;

						{
							obj_t BgL_lsz00_923;

							BgL_lsz00_923 = BgL_argsz00_879;
						BgL_zc3anonymousza32012ze3z83_924:
							if (PAIRP(BgL_lsz00_923))
								{	/* Match/s2cfun.scm 90 */
									bool_t BgL__ortest_1828z00_926;

									{	/* Match/s2cfun.scm 90 */
										bool_t BgL_testz00_2027;

										{	/* Match/s2cfun.scm 90 */
											obj_t BgL_auxz00_2028;

											BgL_auxz00_2028 = CAR(BgL_lsz00_923);
											BgL_testz00_2027 = PAIRP(BgL_auxz00_2028);
										}
										if (BgL_testz00_2027)
											{	/* Match/s2cfun.scm 90 */
												BgL__ortest_1828z00_926 = ((bool_t) 0);
											}
										else
											{	/* Match/s2cfun.scm 90 */
												BgL__ortest_1828z00_926 = ((bool_t) 1);
											}
									}
									if (BgL__ortest_1828z00_926)
										{	/* Match/s2cfun.scm 90 */
											BgL_testz00_2024 = BgL__ortest_1828z00_926;
										}
									else
										{
											obj_t BgL_lsz00_2032;

											BgL_lsz00_2032 = CDR(BgL_lsz00_923);
											BgL_lsz00_923 = BgL_lsz00_2032;
											goto BgL_zc3anonymousza32012ze3z83_924;
										}
								}
							else
								{	/* Match/s2cfun.scm 89 */
									BgL_testz00_2024 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2024)
							{	/* Match/s2cfun.scm 88 */
								return BgL_valuez00_880;
							}
						else
							{	/* Match/s2cfun.scm 93 */
								obj_t BgL_valuez00_883;

								{	/* Match/s2cfun.scm 93 */
									obj_t BgL_auxz00_2034;

									if (NULLP(BgL_argsz00_879))
										{	/* Match/s2cfun.scm 93 */
											BgL_auxz00_2034 = BNIL;
										}
									else
										{	/* Match/s2cfun.scm 93 */
											obj_t BgL_head1879z00_906;

											BgL_head1879z00_906 =
												MAKE_PAIR(CAR(CAR(BgL_argsz00_879)), BNIL);
											{	/* Match/s2cfun.scm 93 */
												obj_t BgL_g1882z00_907;

												BgL_g1882z00_907 = CDR(BgL_argsz00_879);
												{
													obj_t BgL_l1877z00_1588;

													obj_t BgL_tail1880z00_1589;

													BgL_l1877z00_1588 = BgL_g1882z00_907;
													BgL_tail1880z00_1589 = BgL_head1879z00_906;
												BgL_zc3anonymousza32003ze3z83_1587:
													if (NULLP(BgL_l1877z00_1588))
														{	/* Match/s2cfun.scm 93 */
															BgL_auxz00_2034 = BgL_head1879z00_906;
														}
													else
														{	/* Match/s2cfun.scm 93 */
															obj_t BgL_newtail1881z00_1597;

															BgL_newtail1881z00_1597 =
																MAKE_PAIR(CAR(CAR(BgL_l1877z00_1588)), BNIL);
															SET_CDR(BgL_tail1880z00_1589,
																BgL_newtail1881z00_1597);
															{
																obj_t BgL_tail1880z00_2049;

																obj_t BgL_l1877z00_2047;

																BgL_l1877z00_2047 = CDR(BgL_l1877z00_1588);
																BgL_tail1880z00_2049 = BgL_newtail1881z00_1597;
																BgL_tail1880z00_1589 = BgL_tail1880z00_2049;
																BgL_l1877z00_1588 = BgL_l1877z00_2047;
																goto BgL_zc3anonymousza32003ze3z83_1587;
															}
														}
												}
											}
										}
									BgL_valuez00_883 = apply(BgL_pz00_5, BgL_auxz00_2034);
								}
								if (CBOOL(BgL_valuez00_883))
									{	/* Match/s2cfun.scm 94 */
										return BgL_valuez00_883;
									}
								else
									{	/* Match/s2cfun.scm 94 */
										obj_t BgL_arg1990z00_885;

										if (NULLP(BgL_argsz00_879))
											{	/* Match/s2cfun.scm 94 */
												BgL_arg1990z00_885 = BNIL;
											}
										else
											{	/* Match/s2cfun.scm 94 */
												obj_t BgL_head1885z00_888;

												BgL_head1885z00_888 =
													MAKE_PAIR(CDR(CAR(BgL_argsz00_879)), BNIL);
												{	/* Match/s2cfun.scm 94 */
													obj_t BgL_g1888z00_889;

													BgL_g1888z00_889 = CDR(BgL_argsz00_879);
													{
														obj_t BgL_l1883z00_1647;

														obj_t BgL_tail1886z00_1648;

														BgL_l1883z00_1647 = BgL_g1888z00_889;
														BgL_tail1886z00_1648 = BgL_head1885z00_888;
													BgL_zc3anonymousza31992ze3z83_1646:
														if (NULLP(BgL_l1883z00_1647))
															{	/* Match/s2cfun.scm 94 */
																BgL_arg1990z00_885 = BgL_head1885z00_888;
															}
														else
															{	/* Match/s2cfun.scm 94 */
																obj_t BgL_newtail1887z00_1656;

																BgL_newtail1887z00_1656 =
																	MAKE_PAIR(CDR(CAR(BgL_l1883z00_1647)), BNIL);
																SET_CDR(BgL_tail1886z00_1648,
																	BgL_newtail1887z00_1656);
																{
																	obj_t BgL_tail1886z00_2067;

																	obj_t BgL_l1883z00_2065;

																	BgL_l1883z00_2065 = CDR(BgL_l1883z00_1647);
																	BgL_tail1886z00_2067 =
																		BgL_newtail1887z00_1656;
																	BgL_tail1886z00_1648 = BgL_tail1886z00_2067;
																	BgL_l1883z00_1647 = BgL_l1883z00_2065;
																	goto BgL_zc3anonymousza31992ze3z83_1646;
																}
															}
													}
												}
											}
										{
											obj_t BgL_valuez00_2069;

											obj_t BgL_argsz00_2068;

											BgL_argsz00_2068 = BgL_arg1990z00_885;
											BgL_valuez00_2069 = BgL_valuez00_883;
											BgL_valuez00_880 = BgL_valuez00_2069;
											BgL_argsz00_879 = BgL_argsz00_2068;
											goto BgL_zc3anonymousza31988ze3z83_881;
										}
									}
							}
					}
				}
		}
	}



/* _ormap */
	obj_t BGl__ormapz00zz__match_s2cfunz00(obj_t BgL_envz00_1890,
		obj_t BgL_pz00_1891, obj_t BgL_argsz00_1892)
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 83 */
			return BGl_ormapz00zz__match_s2cfunz00(BgL_pz00_1891, BgL_argsz00_1892);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__match_s2cfunz00()
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 11 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__match_s2cfunz00()
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 11 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__match_s2cfunz00()
	{
		AN_OBJECT;
		{	/* Match/s2cfun.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2293z00zz__match_s2cfunz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2293z00zz__match_s2cfunz00));
		}
	}

#ifdef __cplusplus
}
#endif
