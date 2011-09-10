/*===========================================================================*/
/*   (Unsafe/kmp.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Unsafe/kmp.scm -indent -o objs/obj_u/Unsafe/kmp.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_kmpzd2tablezd2zz__kmpz00(obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__kmpz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__kmpz00();
	BGL_EXPORTED_DECL long BGl_kmpzd2mmapzd2zz__kmpz00(obj_t, obj_t, long);
	static obj_t BGl_cnstzd2initzd2zz__kmpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__kmpz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2255z00zz__kmpz00 = BUNSPEC;
	static obj_t BGl_symbol2258z00zz__kmpz00 = BUNSPEC;
	static obj_t BGl_symbol2260z00zz__kmpz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__kmpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__kmpzd2mmapzd2zz__kmpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__kmpzd2stringzd2zz__kmpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__kmpzd2tablezd2zz__kmpz00(obj_t, obj_t);
	extern obj_t make_vector(int, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_kmpzd2stringzd2zz__kmpz00(obj_t, obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__kmpz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2stringzd2envz00zz__kmpz00,
		BgL_bgl__kmpza7d2stringza7d22269z00, BGl__kmpzd2stringzd2zz__kmpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2mmapzd2envz00zz__kmpz00,
		BgL_bgl__kmpza7d2mmapza7d2za7za72270z00, BGl__kmpzd2mmapzd2zz__kmpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2tablezd2envz00zz__kmpz00,
		BgL_bgl__kmpza7d2tableza7d2za72271za7, BGl__kmpzd2tablezd2zz__kmpz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2252z00zz__kmpz00,
		BgL_bgl_string2252za700za7za7_2272za7, "/tmp/bigloo/runtime/Unsafe/kmp.scm",
		34);
	      DEFINE_STRING(BGl_string2253z00zz__kmpz00,
		BgL_bgl_string2253za700za7za7_2273za7, "_kmp-table", 10);
	      DEFINE_STRING(BGl_string2254z00zz__kmpz00,
		BgL_bgl_string2254za700za7za7_2274za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2256z00zz__kmpz00,
		BgL_bgl_string2256za700za7za7_2275za7, "kmp-mmap", 8);
	      DEFINE_STRING(BGl_string2257z00zz__kmpz00,
		BgL_bgl_string2257za700za7za7_2276za7, "Illegal kmp-table", 17);
	      DEFINE_STRING(BGl_string2259z00zz__kmpz00,
		BgL_bgl_string2259za700za7za7_2277za7, "string", 6);
	      DEFINE_STRING(BGl_string2261z00zz__kmpz00,
		BgL_bgl_string2261za700za7za7_2278za7, "vector", 6);
	      DEFINE_STRING(BGl_string2262z00zz__kmpz00,
		BgL_bgl_string2262za700za7za7_2279za7, "_kmp-mmap", 9);
	      DEFINE_STRING(BGl_string2263z00zz__kmpz00,
		BgL_bgl_string2263za700za7za7_2280za7, "pair", 4);
	      DEFINE_STRING(BGl_string2264z00zz__kmpz00,
		BgL_bgl_string2264za700za7za7_2281za7, "mmap", 4);
	      DEFINE_STRING(BGl_string2265z00zz__kmpz00,
		BgL_bgl_string2265za700za7za7_2282za7, "elong", 5);
	      DEFINE_STRING(BGl_string2266z00zz__kmpz00,
		BgL_bgl_string2266za700za7za7_2283za7, "_kmp-string", 11);
	      DEFINE_STRING(BGl_string2267z00zz__kmpz00,
		BgL_bgl_string2267za700za7za7_2284za7, "long", 4);
	      DEFINE_STRING(BGl_string2268z00zz__kmpz00,
		BgL_bgl_string2268za700za7za7_2285za7, "__kmp", 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__kmpz00(long
		BgL_checksumz00_1645, char *BgL_fromz00_1646)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__kmpz00))
				{
					BGl_requirezd2initializa7ationz75zz__kmpz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__kmpz00();
					BGl_importedzd2moduleszd2initz00zz__kmpz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__kmpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 15 */
			BGl_symbol2255z00zz__kmpz00 =
				bstring_to_symbol(BGl_string2256z00zz__kmpz00);
			BGl_symbol2258z00zz__kmpz00 =
				bstring_to_symbol(BGl_string2259z00zz__kmpz00);
			return (BGl_symbol2260z00zz__kmpz00 =
				bstring_to_symbol(BGl_string2261z00zz__kmpz00), BUNSPEC);
		}
	}



/* kmp-table */
	BGL_EXPORTED_DEF obj_t BGl_kmpzd2tablezd2zz__kmpz00(obj_t BgL_pz00_1)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 50 */
			{	/* Unsafe/kmp.scm 51 */
				long BgL_lpz00_770;

				BgL_lpz00_770 = STRING_LENGTH(BgL_pz00_1);
				{	/* Unsafe/kmp.scm 51 */
					obj_t BgL_tz00_771;

					{	/* Unsafe/kmp.scm 52 */
						long BgL_arg1890z00_786;

						BgL_arg1890z00_786 = (BgL_lpz00_770 + ((long) 2));
						BgL_tz00_771 =
							make_vector((int) (BgL_arg1890z00_786), BINT(((long) 0)));
					}
					{	/* Unsafe/kmp.scm 52 */
						long BgL_iz00_772;

						BgL_iz00_772 = ((long) 0);
						{	/* Unsafe/kmp.scm 53 */
							obj_t BgL_jz00_773;

							BgL_jz00_773 = BINT(((long) -1));
							{	/* Unsafe/kmp.scm 54 */
								unsigned char BgL_cz00_774;

								BgL_cz00_774 = ((unsigned char) '\000');
								{	/* Unsafe/kmp.scm 55 */

									VECTOR_SET(BgL_tz00_771, (int) (((long) 0)), BgL_jz00_773);
									{

									BgL_zc3anonymousza31879ze3z83_776:
										if ((BgL_iz00_772 < BgL_lpz00_770))
											{	/* Unsafe/kmp.scm 58 */
												{	/* Unsafe/kmp.scm 60 */
													bool_t BgL_testz00_1665;

													{	/* Unsafe/kmp.scm 60 */
														unsigned char BgL_char2z00_1331;

														BgL_char2z00_1331 = BgL_cz00_774;
														BgL_testz00_1665 =
															(STRING_REF(BgL_pz00_1,
																BgL_iz00_772) == BgL_char2z00_1331);
													}
													if (BgL_testz00_1665)
														{	/* Unsafe/kmp.scm 60 */
															{	/* Unsafe/kmp.scm 61 */
																long BgL_arg1882z00_779;

																long BgL_arg1883z00_780;

																BgL_arg1882z00_779 =
																	(BgL_iz00_772 + ((long) 1));
																BgL_arg1883z00_780 =
																	((long) CINT(BgL_jz00_773) + ((long) 1));
																VECTOR_SET(BgL_tz00_771,
																	(int) (BgL_arg1882z00_779),
																	BINT(BgL_arg1883z00_780));
															}
															{	/* Unsafe/kmp.scm 62 */
																long BgL_za71za7_1339;

																BgL_za71za7_1339 = (long) CINT(BgL_jz00_773);
																BgL_jz00_773 =
																	BINT((BgL_za71za7_1339 + ((long) 1)));
															}
															BgL_iz00_772 = (BgL_iz00_772 + ((long) 1));
														}
													else
														{	/* Unsafe/kmp.scm 60 */
															if (((long) CINT(BgL_jz00_773) > ((long) 0)))
																{	/* Unsafe/kmp.scm 64 */
																	BgL_jz00_773 =
																		VECTOR_REF(BgL_tz00_771,
																		CINT(BgL_jz00_773));
																}
															else
																{	/* Unsafe/kmp.scm 64 */
																	{	/* Unsafe/kmp.scm 67 */
																		long BgL_arg1886z00_782;

																		BgL_arg1886z00_782 =
																			(BgL_iz00_772 + ((long) 1));
																		VECTOR_SET(BgL_tz00_771,
																			(int) (BgL_arg1886z00_782),
																			BINT(((long) 0)));
																	}
																	BgL_iz00_772 = (BgL_iz00_772 + ((long) 1));
																	BgL_jz00_773 = BINT(((long) 0));
												}}}
												BgL_cz00_774 =
													STRING_REF(BgL_pz00_1, (long) CINT(BgL_jz00_773));
												goto BgL_zc3anonymousza31879ze3z83_776;
											}
										else
											{	/* Unsafe/kmp.scm 58 */
												((bool_t) 0);
											}
									}
									return MAKE_PAIR(BgL_tz00_771, BgL_pz00_1);
								}
							}
						}
					}
				}
			}
		}
	}



/* _kmp-table */
	obj_t BGl__kmpzd2tablezd2zz__kmpz00(obj_t BgL_envz00_1621,
		obj_t BgL_pz00_1622)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 50 */
			{	/* Unsafe/kmp.scm 51 */
				obj_t BgL_auxz00_1692;

				if (STRINGP(BgL_pz00_1622))
					{	/* Unsafe/kmp.scm 51 */
						BgL_auxz00_1692 = BgL_pz00_1622;
					}
				else
					{
						obj_t BgL_auxz00_1695;

						BgL_auxz00_1695 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
							BINT(((long) 1822)), BGl_string2253z00zz__kmpz00,
							BGl_string2254z00zz__kmpz00, BgL_pz00_1622);
						FAILURE(BgL_auxz00_1695, BFALSE, BFALSE);
					}
				return BGl_kmpzd2tablezd2zz__kmpz00(BgL_auxz00_1692);
			}
		}
	}



/* kmp-mmap */
	BGL_EXPORTED_DEF long BGl_kmpzd2mmapzd2zz__kmpz00(obj_t BgL_tpz00_2,
		obj_t BgL_mmz00_3, long BgL_mz00_4)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 77 */
			{	/* Unsafe/kmp.scm 79 */
				bool_t BgL_testz00_1700;

				{	/* Unsafe/kmp.scm 79 */
					obj_t BgL_auxz00_1701;

					BgL_auxz00_1701 = CAR(BgL_tpz00_2);
					BgL_testz00_1700 = VECTORP(BgL_auxz00_1701);
				}
				if (BgL_testz00_1700)
					{	/* Unsafe/kmp.scm 81 */
						bool_t BgL_testz00_1704;

						{	/* Unsafe/kmp.scm 81 */
							obj_t BgL_auxz00_1705;

							BgL_auxz00_1705 = CDR(BgL_tpz00_2);
							BgL_testz00_1704 = STRINGP(BgL_auxz00_1705);
						}
						if (BgL_testz00_1704)
							{	/* Unsafe/kmp.scm 83 */
								bool_t BgL_testz00_1708;

								{	/* Unsafe/kmp.scm 83 */
									int BgL_arg1909z00_813;

									long BgL_arg1910z00_814;

									BgL_arg1909z00_813 = VECTOR_LENGTH(CAR(BgL_tpz00_2));
									BgL_arg1910z00_814 =
										(((long) 2) + STRING_LENGTH(CDR(BgL_tpz00_2)));
									BgL_testz00_1708 =
										((long) (BgL_arg1909z00_813) == BgL_arg1910z00_814);
								}
								if (BgL_testz00_1708)
									{	/* Unsafe/kmp.scm 86 */
										obj_t BgL_tz00_791;

										BgL_tz00_791 = CAR(BgL_tpz00_2);
										{	/* Unsafe/kmp.scm 86 */
											obj_t BgL_pz00_792;

											BgL_pz00_792 = CDR(BgL_tpz00_2);
											{	/* Unsafe/kmp.scm 87 */
												long BgL_lsz00_793;

												BgL_lsz00_793 = BGL_MMAP_LENGTH(BgL_mmz00_3);
												{	/* Unsafe/kmp.scm 88 */
													long BgL_lpz00_794;

													{	/* Unsafe/kmp.scm 89 */
														long BgL_auxz00_1719;

														BgL_auxz00_1719 = STRING_LENGTH(BgL_pz00_792);
														BgL_lpz00_794 = LONG_TO_ELONG(BgL_auxz00_1719);
													}
													{	/* Unsafe/kmp.scm 89 */

														{
															long BgL_iz00_796;

															BgL_iz00_796 = ((long) 0);
														BgL_zc3anonymousza31896ze3z83_797:
															if ((BgL_iz00_796 == BgL_lpz00_794))
																{	/* Unsafe/kmp.scm 92 */
																	return BgL_mz00_4;
																}
															else
																{	/* Unsafe/kmp.scm 92 */
																	if (
																		((BgL_iz00_796 + BgL_mz00_4) >=
																			BgL_lsz00_793))
																		{	/* Unsafe/kmp.scm 94 */
																			return ((long) -1);
																		}
																	else
																		{	/* Unsafe/kmp.scm 97 */
																			long BgL_fiz00_800;

																			{	/* Unsafe/kmp.scm 97 */
																				long BgL_res2225z00_1380;

																				{	/* Unsafe/kmp.scm 97 */
																					long BgL_auxz00_1727;

																					{	/* Unsafe/kmp.scm 97 */
																						long BgL_auxz00_1728;

																						BgL_auxz00_1728 =
																							ELONG_TO_LONG(BgL_iz00_796);
																						BgL_auxz00_1727 =
																							ELONG_TO_LONG(BgL_auxz00_1728);
																					}
																					BgL_res2225z00_1380 =
																						ELONG_TO_LONG(BgL_auxz00_1727);
																				}
																				BgL_fiz00_800 = BgL_res2225z00_1380;
																			}
																			{	/* Unsafe/kmp.scm 98 */
																				bool_t BgL_testz00_1732;

																				{	/* Unsafe/kmp.scm 98 */
																					unsigned char BgL_arg1904z00_807;

																					unsigned char BgL_arg1905z00_808;

																					{	/* Unsafe/kmp.scm 98 */
																						long BgL_arg1906z00_809;

																						BgL_arg1906z00_809 =
																							(BgL_iz00_796 + BgL_mz00_4);
																						{	/* Unsafe/kmp.scm 98 */
																							unsigned char BgL_res2227z00_1392;

																							{	/* Unsafe/kmp.scm 98 */
																								unsigned char BgL_cz00_1385;

																								BgL_cz00_1385 =
																									BGL_MMAP_REF(BgL_mmz00_3,
																									BgL_arg1906z00_809);
																								{	/* Unsafe/kmp.scm 98 */
																									long BgL_arg2224z00_1386;

																									BgL_arg2224z00_1386 =
																										(BgL_arg1906z00_809 +
																										((long) 1));
																									{	/* Unsafe/kmp.scm 98 */
																										long BgL_res2226z00_1391;

																										BGL_MMAP_RP_SET(BgL_mmz00_3,
																											BgL_arg2224z00_1386);
																										BUNSPEC;
																										BgL_res2226z00_1391 =
																											BgL_arg2224z00_1386;
																										BgL_res2226z00_1391;
																								}}
																								BgL_res2227z00_1392 =
																									BgL_cz00_1385;
																							}
																							BgL_arg1904z00_807 =
																								BgL_res2227z00_1392;
																					}}
																					BgL_arg1905z00_808 =
																						STRING_REF(BgL_pz00_792,
																						BgL_fiz00_800);
																					BgL_testz00_1732 =
																						(BgL_arg1904z00_807 ==
																						BgL_arg1905z00_808);
																				}
																				if (BgL_testz00_1732)
																					{
																						long BgL_iz00_1739;

																						BgL_iz00_1739 =
																							(BgL_iz00_796 + ((long) 1));
																						BgL_iz00_796 = BgL_iz00_1739;
																						goto
																							BgL_zc3anonymousza31896ze3z83_797;
																					}
																				else
																					{	/* Unsafe/kmp.scm 100 */
																						long BgL_tiz00_803;

																						{	/* Unsafe/kmp.scm 100 */
																							obj_t BgL_arg1903z00_806;

																							BgL_arg1903z00_806 =
																								VECTOR_REF(BgL_tz00_791,
																								(int) (BgL_fiz00_800));
																							{	/* Unsafe/kmp.scm 100 */
																								long BgL_auxz00_1743;

																								BgL_auxz00_1743 =
																									(long)
																									CINT(BgL_arg1903z00_806);
																								BgL_tiz00_803 =
																									LONG_TO_ELONG
																									(BgL_auxz00_1743);
																						}}
																						{	/* Unsafe/kmp.scm 101 */
																							long BgL_za71za7_1405;

																							BgL_za71za7_1405 = BgL_mz00_4;
																							{	/* Unsafe/kmp.scm 101 */
																								long BgL_auxz00_1746;

																								{	/* Unsafe/kmp.scm 101 */
																									long BgL_res2228z00_1404;

																									{	/* Unsafe/kmp.scm 101 */
																										long BgL_auxz00_1747;

																										BgL_auxz00_1747 =
																											(BgL_iz00_796 -
																											BgL_tiz00_803);
																										BgL_res2228z00_1404 =
																											LONG_TO_ELONG
																											(BgL_auxz00_1747);
																									}
																									BgL_auxz00_1746 =
																										BgL_res2228z00_1404;
																								}
																								BgL_mz00_4 =
																									(BgL_za71za7_1405 +
																									BgL_auxz00_1746);
																						}}
																						if ((BgL_iz00_796 > ((long) 0)))
																							{
																								long BgL_iz00_1753;

																								BgL_iz00_1753 = BgL_tiz00_803;
																								BgL_iz00_796 = BgL_iz00_1753;
																								goto
																									BgL_zc3anonymousza31896ze3z83_797;
																							}
																						else
																							{

																								goto
																									BgL_zc3anonymousza31896ze3z83_797;
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
								else
									{	/* Unsafe/kmp.scm 84 */
										obj_t BgL_auxz00_1754;

										BgL_auxz00_1754 =
											BGl_errorz00zz__errorz00(BGl_symbol2255z00zz__kmpz00,
											BGl_string2257z00zz__kmpz00, BgL_tpz00_2);
										return BELONG_TO_LONG(BgL_auxz00_1754);
									}
							}
						else
							{	/* Unsafe/kmp.scm 82 */
								obj_t BgL_arg1916z00_819;

								obj_t BgL_arg1918z00_820;

								obj_t BgL_arg1919z00_821;

								BgL_arg1916z00_819 = BGl_symbol2255z00zz__kmpz00;
								BgL_arg1918z00_820 = BGl_symbol2258z00zz__kmpz00;
								BgL_arg1919z00_821 = CDR(BgL_tpz00_2);
								{	/* Unsafe/kmp.scm 82 */
									obj_t BgL_auxz00_1758;

									BgL_auxz00_1758 =
										BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg1916z00_819,
										BgL_arg1918z00_820, BgL_arg1919z00_821);
									return BELONG_TO_LONG(BgL_auxz00_1758);
								}
							}
					}
				else
					{	/* Unsafe/kmp.scm 80 */
						obj_t BgL_arg1921z00_823;

						obj_t BgL_arg1922z00_824;

						obj_t BgL_arg1923z00_825;

						BgL_arg1921z00_823 = BGl_symbol2255z00zz__kmpz00;
						BgL_arg1922z00_824 = BGl_symbol2260z00zz__kmpz00;
						BgL_arg1923z00_825 = CAR(BgL_tpz00_2);
						{	/* Unsafe/kmp.scm 80 */
							obj_t BgL_auxz00_1762;

							BgL_auxz00_1762 =
								BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg1921z00_823,
								BgL_arg1922z00_824, BgL_arg1923z00_825);
							return BELONG_TO_LONG(BgL_auxz00_1762);
						}
					}
			}
		}
	}



/* _kmp-mmap */
	obj_t BGl__kmpzd2mmapzd2zz__kmpz00(obj_t BgL_envz00_1623,
		obj_t BgL_tpz00_1624, obj_t BgL_mmz00_1625, obj_t BgL_mz00_1626)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 77 */
			{	/* Unsafe/kmp.scm 79 */
				long BgL_auxz00_1765;

				{	/* Unsafe/kmp.scm 79 */
					long BgL_auxz00_1780;

					obj_t BgL_auxz00_1773;

					obj_t BgL_auxz00_1766;

					{	/* Unsafe/kmp.scm 79 */
						obj_t BgL_auxz00_1781;

						if (ELONGP(BgL_mz00_1626))
							{	/* Unsafe/kmp.scm 79 */
								BgL_auxz00_1781 = BgL_mz00_1626;
							}
						else
							{
								obj_t BgL_auxz00_1784;

								BgL_auxz00_1784 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
									BINT(((long) 2572)), BGl_string2262z00zz__kmpz00,
									BGl_string2265z00zz__kmpz00, BgL_mz00_1626);
								FAILURE(BgL_auxz00_1784, BFALSE, BFALSE);
							}
						BgL_auxz00_1780 = BELONG_TO_LONG(BgL_auxz00_1781);
					}
					if (BGL_MMAPP(BgL_mmz00_1625))
						{	/* Unsafe/kmp.scm 79 */
							BgL_auxz00_1773 = BgL_mmz00_1625;
						}
					else
						{
							obj_t BgL_auxz00_1776;

							BgL_auxz00_1776 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
								BINT(((long) 2572)), BGl_string2262z00zz__kmpz00,
								BGl_string2264z00zz__kmpz00, BgL_mmz00_1625);
							FAILURE(BgL_auxz00_1776, BFALSE, BFALSE);
						}
					if (PAIRP(BgL_tpz00_1624))
						{	/* Unsafe/kmp.scm 79 */
							BgL_auxz00_1766 = BgL_tpz00_1624;
						}
					else
						{
							obj_t BgL_auxz00_1769;

							BgL_auxz00_1769 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
								BINT(((long) 2572)), BGl_string2262z00zz__kmpz00,
								BGl_string2263z00zz__kmpz00, BgL_tpz00_1624);
							FAILURE(BgL_auxz00_1769, BFALSE, BFALSE);
						}
					BgL_auxz00_1765 =
						BGl_kmpzd2mmapzd2zz__kmpz00(BgL_auxz00_1766, BgL_auxz00_1773,
						BgL_auxz00_1780);
				}
				return make_belong(BgL_auxz00_1765);
			}
		}
	}



/* kmp-string */
	BGL_EXPORTED_DEF long BGl_kmpzd2stringzd2zz__kmpz00(obj_t BgL_tpz00_5,
		obj_t BgL_strz00_6, long BgL_mz00_7)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 109 */
			{	/* Unsafe/kmp.scm 111 */
				bool_t BgL_testz00_1791;

				{	/* Unsafe/kmp.scm 111 */
					obj_t BgL_auxz00_1792;

					BgL_auxz00_1792 = CAR(BgL_tpz00_5);
					BgL_testz00_1791 = VECTORP(BgL_auxz00_1792);
				}
				if (BgL_testz00_1791)
					{	/* Unsafe/kmp.scm 113 */
						bool_t BgL_testz00_1795;

						{	/* Unsafe/kmp.scm 113 */
							obj_t BgL_auxz00_1796;

							BgL_auxz00_1796 = CDR(BgL_tpz00_5);
							BgL_testz00_1795 = STRINGP(BgL_auxz00_1796);
						}
						if (BgL_testz00_1795)
							{	/* Unsafe/kmp.scm 115 */
								bool_t BgL_testz00_1799;

								{	/* Unsafe/kmp.scm 115 */
									int BgL_arg1942z00_849;

									long BgL_arg1943z00_850;

									BgL_arg1942z00_849 = VECTOR_LENGTH(CAR(BgL_tpz00_5));
									BgL_arg1943z00_850 =
										(((long) 2) + STRING_LENGTH(CDR(BgL_tpz00_5)));
									BgL_testz00_1799 =
										((long) (BgL_arg1942z00_849) == BgL_arg1943z00_850);
								}
								if (BgL_testz00_1799)
									{	/* Unsafe/kmp.scm 118 */
										obj_t BgL_tz00_830;

										BgL_tz00_830 = CAR(BgL_tpz00_5);
										{	/* Unsafe/kmp.scm 118 */
											obj_t BgL_pz00_831;

											BgL_pz00_831 = CDR(BgL_tpz00_5);
											{	/* Unsafe/kmp.scm 119 */
												long BgL_lsz00_832;

												BgL_lsz00_832 = STRING_LENGTH(BgL_strz00_6);
												{	/* Unsafe/kmp.scm 120 */
													long BgL_lpz00_833;

													BgL_lpz00_833 = STRING_LENGTH(BgL_pz00_831);
													{	/* Unsafe/kmp.scm 121 */

														{
															obj_t BgL_iz00_835;

															BgL_iz00_835 = BINT(((long) 0));
														BgL_zc3anonymousza31928ze3z83_836:
															if (((long) CINT(BgL_iz00_835) == BgL_lpz00_833))
																{	/* Unsafe/kmp.scm 124 */
																	return BgL_mz00_7;
																}
															else
																{	/* Unsafe/kmp.scm 124 */
																	if (
																		(((long) CINT(BgL_iz00_835) + BgL_mz00_7) >=
																			BgL_lsz00_832))
																		{	/* Unsafe/kmp.scm 126 */
																			return ((long) -1);
																		}
																	else
																		{	/* Unsafe/kmp.scm 126 */
																			if (
																				(STRING_REF(BgL_strz00_6,
																						((long) CINT(BgL_iz00_835) +
																							BgL_mz00_7)) ==
																					STRING_REF(BgL_pz00_831,
																						(long) CINT(BgL_iz00_835))))
																				{	/* Unsafe/kmp.scm 130 */
																					long BgL_arg1932z00_840;

																					BgL_arg1932z00_840 =
																						(
																						(long) CINT(BgL_iz00_835) +
																						((long) 1));
																					{
																						obj_t BgL_iz00_1827;

																						BgL_iz00_1827 =
																							BINT(BgL_arg1932z00_840);
																						BgL_iz00_835 = BgL_iz00_1827;
																						goto
																							BgL_zc3anonymousza31928ze3z83_836;
																					}
																				}
																			else
																				{	/* Unsafe/kmp.scm 131 */
																					obj_t BgL_tiz00_841;

																					BgL_tiz00_841 =
																						VECTOR_REF(BgL_tz00_830,
																						CINT(BgL_iz00_835));
																					BgL_mz00_7 =
																						(BgL_mz00_7 +
																						((long) CINT(BgL_iz00_835) -
																							(long) CINT(BgL_tiz00_841)));
																					if (
																						((long) CINT(BgL_iz00_835) >
																							((long) 0)))
																						{
																							obj_t BgL_iz00_1838;

																							BgL_iz00_1838 = BgL_tiz00_841;
																							BgL_iz00_835 = BgL_iz00_1838;
																							goto
																								BgL_zc3anonymousza31928ze3z83_836;
																						}
																					else
																						{

																							goto
																								BgL_zc3anonymousza31928ze3z83_836;
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
								else
									{	/* Unsafe/kmp.scm 115 */
										return
											(long)
											CINT(BGl_errorz00zz__errorz00(BGl_symbol2255z00zz__kmpz00,
												BGl_string2257z00zz__kmpz00, BgL_tpz00_5));
							}}
						else
							{	/* Unsafe/kmp.scm 114 */
								obj_t BgL_arg1949z00_855;

								obj_t BgL_arg1950z00_856;

								obj_t BgL_arg1951z00_857;

								BgL_arg1949z00_855 = BGl_symbol2255z00zz__kmpz00;
								BgL_arg1950z00_856 = BGl_symbol2258z00zz__kmpz00;
								BgL_arg1951z00_857 = CDR(BgL_tpz00_5);
								return
									(long)
									CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
									(BgL_arg1949z00_855, BgL_arg1950z00_856, BgL_arg1951z00_857));
					}}
				else
					{	/* Unsafe/kmp.scm 112 */
						obj_t BgL_arg1953z00_859;

						obj_t BgL_arg1954z00_860;

						obj_t BgL_arg1955z00_861;

						BgL_arg1953z00_859 = BGl_symbol2255z00zz__kmpz00;
						BgL_arg1954z00_860 = BGl_symbol2260z00zz__kmpz00;
						BgL_arg1955z00_861 = CAR(BgL_tpz00_5);
						return
							(long)
							CINT(BGl_bigloozd2typezd2errorz00zz__errorz00(BgL_arg1953z00_859,
								BgL_arg1954z00_860, BgL_arg1955z00_861));
		}}}
	}



/* _kmp-string */
	obj_t BGl__kmpzd2stringzd2zz__kmpz00(obj_t BgL_envz00_1627,
		obj_t BgL_tpz00_1628, obj_t BgL_strz00_1629, obj_t BgL_mz00_1630)
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 109 */
			{	/* Unsafe/kmp.scm 111 */
				long BgL_auxz00_1848;

				{	/* Unsafe/kmp.scm 111 */
					long BgL_auxz00_1863;

					obj_t BgL_auxz00_1856;

					obj_t BgL_auxz00_1849;

					{	/* Unsafe/kmp.scm 111 */
						obj_t BgL_auxz00_1864;

						if (INTEGERP(BgL_mz00_1630))
							{	/* Unsafe/kmp.scm 111 */
								BgL_auxz00_1864 = BgL_mz00_1630;
							}
						else
							{
								obj_t BgL_auxz00_1867;

								BgL_auxz00_1867 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
									BINT(((long) 3663)), BGl_string2266z00zz__kmpz00,
									BGl_string2267z00zz__kmpz00, BgL_mz00_1630);
								FAILURE(BgL_auxz00_1867, BFALSE, BFALSE);
							}
						BgL_auxz00_1863 = (long) CINT(BgL_auxz00_1864);
					}
					if (STRINGP(BgL_strz00_1629))
						{	/* Unsafe/kmp.scm 111 */
							BgL_auxz00_1856 = BgL_strz00_1629;
						}
					else
						{
							obj_t BgL_auxz00_1859;

							BgL_auxz00_1859 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
								BINT(((long) 3663)), BGl_string2266z00zz__kmpz00,
								BGl_string2254z00zz__kmpz00, BgL_strz00_1629);
							FAILURE(BgL_auxz00_1859, BFALSE, BFALSE);
						}
					if (PAIRP(BgL_tpz00_1628))
						{	/* Unsafe/kmp.scm 111 */
							BgL_auxz00_1849 = BgL_tpz00_1628;
						}
					else
						{
							obj_t BgL_auxz00_1852;

							BgL_auxz00_1852 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2252z00zz__kmpz00,
								BINT(((long) 3663)), BGl_string2266z00zz__kmpz00,
								BGl_string2263z00zz__kmpz00, BgL_tpz00_1628);
							FAILURE(BgL_auxz00_1852, BFALSE, BFALSE);
						}
					BgL_auxz00_1848 =
						BGl_kmpzd2stringzd2zz__kmpz00(BgL_auxz00_1849, BgL_auxz00_1856,
						BgL_auxz00_1863);
				}
				return BINT(BgL_auxz00_1848);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__kmpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__kmpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__kmpz00()
	{
		AN_OBJECT;
		{	/* Unsafe/kmp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2268z00zz__kmpz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2268z00zz__kmpz00));
		}
	}

#ifdef __cplusplus
}
#endif
