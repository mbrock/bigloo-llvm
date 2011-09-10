/*===========================================================================*/
/*   (Ieee/equiv.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/equiv.scm -indent -o objs/obj_u/Ieee/equiv.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */

	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_symbol2401z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2403z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	extern bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_symbol2405z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2395z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2407z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2397z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2409z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	static obj_t BGl_symbol2399z00zz__r4_equivalence_6_2z00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	extern bool_t ucs2_strcmp(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 =
		BUNSPEC;
	static obj_t BGl__eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00();
	BGL_EXPORTED_DECL bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t,
		obj_t);
	static obj_t BGl__eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	static obj_t BGl__equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	extern long bgl_date_to_seconds(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();
	extern obj_t weakptr_data(obj_t);
	extern bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt,
		BgL_objectz00_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string2400z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2400za700za7za7_2412za7, "s8", 2);
	      DEFINE_STRING(BGl_string2402z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2402za700za7za7_2413za7, "u8", 2);
	      DEFINE_STRING(BGl_string2404z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2404za700za7za7_2414za7, "s16", 3);
	      DEFINE_STRING(BGl_string2406z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2406za700za7za7_2415za7, "u16", 3);
	      DEFINE_STRING(BGl_string2396z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2396za700za7za7_2416za7, "f32", 3);
	      DEFINE_STRING(BGl_string2408z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2408za700za7za7_2417za7, "s32", 3);
	      DEFINE_STRING(BGl_string2398z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2398za700za7za7_2418za7, "f64", 3);
	      DEFINE_STRING(BGl_string2410z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2410za700za7za7_2419za7, "u32", 3);
	      DEFINE_STRING(BGl_string2411z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string2411za700za7za7_2420za7, "__r4_equivalence_6_2", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl__equalza7f3za7f3za7za7__2421z00,
		BGl__equalzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_eqvzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl__eqvza7f3za7f3za7za7__r42422z00,
		BGl__eqvzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl__eqza7f3za7f3za7za7__r4_2423z00,
		BGl__eqzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long
		BgL_checksumz00_1876, char *BgL_fromz00_1877)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00();
					BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 14 */
			BGl_symbol2395z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2396z00zz__r4_equivalence_6_2z00);
			BGl_symbol2397z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2398z00zz__r4_equivalence_6_2z00);
			BGl_symbol2399z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2400z00zz__r4_equivalence_6_2z00);
			BGl_symbol2401z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2402z00zz__r4_equivalence_6_2z00);
			BGl_symbol2403z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2404z00zz__r4_equivalence_6_2z00);
			BGl_symbol2405z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2406z00zz__r4_equivalence_6_2z00);
			BGl_symbol2407z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2408z00zz__r4_equivalence_6_2z00);
			return (BGl_symbol2409z00zz__r4_equivalence_6_2z00 =
				bstring_to_symbol(BGl_string2410z00zz__r4_equivalence_6_2z00), BUNSPEC);
		}
	}



/* eq? */
	BGL_EXPORTED_DEF bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_1, obj_t BgL_obj2z00_2)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 66 */
			return (BgL_obj1z00_1 == BgL_obj2z00_2);
		}
	}



/* _eq? */
	obj_t BGl__eqzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1865,
		obj_t BgL_obj1z00_1866, obj_t BgL_obj2z00_1867)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 66 */
			return BBOOL((BgL_obj1z00_1866 == BgL_obj2z00_1867));
		}
	}



/* eqv? */
	BGL_EXPORTED_DEF bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_3, obj_t BgL_obj2z00_4)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 72 */
		BGl_eqvzf3zf3zz__r4_equivalence_6_2z00:
			if ((BgL_obj1z00_3 == BgL_obj2z00_4))
				{	/* Ieee/equiv.scm 74 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/equiv.scm 76 */
					bool_t BgL_testz00_1896;

					if (INTEGERP(BgL_obj1z00_3))
						{	/* Ieee/equiv.scm 76 */
							BgL_testz00_1896 = ((bool_t) 1);
						}
					else
						{	/* Ieee/equiv.scm 76 */
							if (ELONGP(BgL_obj1z00_3))
								{	/* Ieee/equiv.scm 76 */
									BgL_testz00_1896 = ((bool_t) 1);
								}
							else
								{	/* Ieee/equiv.scm 76 */
									if (LLONGP(BgL_obj1z00_3))
										{	/* Ieee/equiv.scm 76 */
											BgL_testz00_1896 = ((bool_t) 1);
										}
									else
										{	/* Ieee/equiv.scm 76 */
											BgL_testz00_1896 = BIGNUMP(BgL_obj1z00_3);
										}
								}
						}
					if (BgL_testz00_1896)
						{	/* Ieee/equiv.scm 77 */
							bool_t BgL_testz00_1904;

							if (INTEGERP(BgL_obj2z00_4))
								{	/* Ieee/equiv.scm 77 */
									BgL_testz00_1904 = ((bool_t) 1);
								}
							else
								{	/* Ieee/equiv.scm 77 */
									if (ELONGP(BgL_obj2z00_4))
										{	/* Ieee/equiv.scm 77 */
											BgL_testz00_1904 = ((bool_t) 1);
										}
									else
										{	/* Ieee/equiv.scm 77 */
											if (LLONGP(BgL_obj2z00_4))
												{	/* Ieee/equiv.scm 77 */
													BgL_testz00_1904 = ((bool_t) 1);
												}
											else
												{	/* Ieee/equiv.scm 77 */
													BgL_testz00_1904 = BIGNUMP(BgL_obj2z00_4);
												}
										}
								}
							if (BgL_testz00_1904)
								{	/* Ieee/equiv.scm 77 */
									return
										BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_3,
										BgL_obj2z00_4);
								}
							else
								{	/* Ieee/equiv.scm 77 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Ieee/equiv.scm 76 */
							if (REALP(BgL_obj1z00_3))
								{	/* Ieee/equiv.scm 78 */
									if (REALP(BgL_obj2z00_4))
										{	/* Ieee/equiv.scm 79 */
											return
												BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_3,
												BgL_obj2z00_4);
										}
									else
										{	/* Ieee/equiv.scm 79 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Ieee/equiv.scm 78 */
									if (SYMBOLP(BgL_obj1z00_3))
										{	/* Ieee/equiv.scm 80 */
											if (SYMBOLP(BgL_obj2z00_4))
												{	/* Ieee/equiv.scm 82 */
													obj_t BgL_arg1834z00_830;

													obj_t BgL_arg1835z00_831;

													BgL_arg1834z00_830 = SYMBOL_TO_STRING(BgL_obj1z00_3);
													BgL_arg1835z00_831 = SYMBOL_TO_STRING(BgL_obj2z00_4);
													return
														bigloo_strcmp(BgL_arg1834z00_830,
														BgL_arg1835z00_831);
												}
											else
												{	/* Ieee/equiv.scm 81 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/equiv.scm 80 */
											if (FOREIGNP(BgL_obj1z00_3))
												{	/* Ieee/equiv.scm 83 */
													if (FOREIGNP(BgL_obj2z00_4))
														{	/* Ieee/equiv.scm 84 */
															return FOREIGN_EQP(BgL_obj1z00_3, BgL_obj2z00_4);
														}
													else
														{	/* Ieee/equiv.scm 84 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 83 */
													if (BGL_WEAKPTRP(BgL_obj1z00_3))
														{	/* Ieee/equiv.scm 85 */
															if (BGL_WEAKPTRP(BgL_obj2z00_4))
																{
																	obj_t BgL_obj2z00_1936;

																	obj_t BgL_obj1z00_1934;

																	BgL_obj1z00_1934 =
																		weakptr_data(BgL_obj1z00_3);
																	BgL_obj2z00_1936 =
																		weakptr_data(BgL_obj2z00_4);
																	BgL_obj2z00_4 = BgL_obj2z00_1936;
																	BgL_obj1z00_3 = BgL_obj1z00_1934;
																	goto BGl_eqvzf3zf3zz__r4_equivalence_6_2z00;
																}
															else
																{	/* Ieee/equiv.scm 86 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/equiv.scm 85 */
															return ((bool_t) 0);
														}
												}
										}
								}
						}
				}
		}
	}



/* _eqv? */
	obj_t BGl__eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1868,
		obj_t BgL_obj1z00_1869, obj_t BgL_obj2z00_1870)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 72 */
			return
				BBOOL(BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1869,
					BgL_obj2z00_1870));
		}
	}



/* equal? */
	BGL_EXPORTED_DEF bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_5, obj_t BgL_obj2z00_6)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 93 */
		BGl_equalzf3zf3zz__r4_equivalence_6_2z00:
			if ((BgL_obj1z00_5 == BgL_obj2z00_6))
				{	/* Ieee/equiv.scm 95 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/equiv.scm 95 */
					if (STRINGP(BgL_obj1z00_5))
						{	/* Ieee/equiv.scm 97 */
							if (STRINGP(BgL_obj2z00_6))
								{	/* Ieee/equiv.scm 98 */
									return bigloo_strcmp(BgL_obj1z00_5, BgL_obj2z00_6);
								}
							else
								{	/* Ieee/equiv.scm 98 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Ieee/equiv.scm 97 */
							if (SYMBOLP(BgL_obj1z00_5))
								{	/* Ieee/equiv.scm 99 */
									return ((bool_t) 0);
								}
							else
								{	/* Ieee/equiv.scm 99 */
									if (PAIRP(BgL_obj1z00_5))
										{	/* Ieee/equiv.scm 101 */
											if (PAIRP(BgL_obj2z00_6))
												{	/* Ieee/equiv.scm 102 */
													if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR
															(BgL_obj1z00_5), CAR(BgL_obj2z00_6)))
														{
															obj_t BgL_obj2z00_1959;

															obj_t BgL_obj1z00_1957;

															BgL_obj1z00_1957 = CDR(BgL_obj1z00_5);
															BgL_obj2z00_1959 = CDR(BgL_obj2z00_6);
															BgL_obj2z00_6 = BgL_obj2z00_1959;
															BgL_obj1z00_5 = BgL_obj1z00_1957;
															goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
														}
													else
														{	/* Ieee/equiv.scm 103 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 102 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/equiv.scm 101 */
											if (VECTORP(BgL_obj1z00_5))
												{	/* Ieee/equiv.scm 106 */
													int BgL_lobj1z00_850;

													BgL_lobj1z00_850 = VECTOR_LENGTH(BgL_obj1z00_5);
													if (VECTORP(BgL_obj2z00_6))
														{	/* Ieee/equiv.scm 108 */
															bool_t BgL_testz00_1966;

															{	/* Ieee/equiv.scm 108 */
																int BgL_arg1856z00_865;

																BgL_arg1856z00_865 =
																	VECTOR_LENGTH(BgL_obj2z00_6);
																BgL_testz00_1966 =
																	(
																	(long) (BgL_arg1856z00_865) ==
																	(long) (BgL_lobj1z00_850));
															}
															if (BgL_testz00_1966)
																{	/* Ieee/equiv.scm 109 */
																	bool_t BgL_testz00_1971;

																	{	/* Ieee/equiv.scm 109 */
																		int BgL_arg1854z00_863;

																		int BgL_arg1855z00_864;

																		BgL_arg1854z00_863 =
																			VECTOR_TAG(BgL_obj1z00_5);
																		BgL_arg1855z00_864 =
																			VECTOR_TAG(BgL_obj2z00_6);
																		BgL_testz00_1971 =
																			(
																			(long) (BgL_arg1854z00_863) ==
																			(long) (BgL_arg1855z00_864));
																	}
																	if (BgL_testz00_1971)
																		{
																			long BgL_iz00_855;

																			BgL_iz00_855 = ((long) 0);
																		BgL_zc3anonymousza31850ze3z83_856:
																			{	/* Ieee/equiv.scm 111 */
																				bool_t BgL__ortest_1767z00_857;

																				BgL__ortest_1767z00_857 =
																					(BgL_iz00_855 ==
																					(long) (BgL_lobj1z00_850));
																				if (BgL__ortest_1767z00_857)
																					{	/* Ieee/equiv.scm 111 */
																						return BgL__ortest_1767z00_857;
																					}
																				else
																					{	/* Ieee/equiv.scm 111 */
																						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(VECTOR_REF(BgL_obj1z00_5, (int) (BgL_iz00_855)), VECTOR_REF(BgL_obj2z00_6, (int) (BgL_iz00_855))))
																							{
																								long BgL_iz00_1986;

																								BgL_iz00_1986 =
																									(BgL_iz00_855 + ((long) 1));
																								BgL_iz00_855 = BgL_iz00_1986;
																								goto
																									BgL_zc3anonymousza31850ze3z83_856;
																							}
																						else
																							{	/* Ieee/equiv.scm 112 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																		}
																	else
																		{	/* Ieee/equiv.scm 109 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Ieee/equiv.scm 108 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/equiv.scm 107 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 105 */
													if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
														(BgL_obj1z00_5, BgL_obj2z00_6))
														{	/* Ieee/equiv.scm 115 */
															return ((bool_t) 1);
														}
													else
														{	/* Ieee/equiv.scm 115 */
															if (INTEGERP(BgL_obj1z00_5))
																{	/* Ieee/equiv.scm 117 */
																	return ((bool_t) 0);
																}
															else
																{	/* Ieee/equiv.scm 117 */
																	if (BGL_HVECTORP(BgL_obj1z00_5))
																		{	/* Ieee/equiv.scm 120 */
																			long BgL_lobj1z00_869;

																			BgL_lobj1z00_869 =
																				BGL_HVECTOR_LENGTH(BgL_obj1z00_5);
																			if (BGL_HVECTORP(BgL_obj2z00_6))
																				{	/* Ieee/equiv.scm 122 */
																					bool_t BgL_testz00_1997;

																					{	/* Ieee/equiv.scm 122 */
																						long BgL_arg1874z00_917;

																						BgL_arg1874z00_917 =
																							BGL_HVECTOR_LENGTH(BgL_obj2z00_6);
																						BgL_testz00_1997 =
																							(BgL_arg1874z00_917 ==
																							BgL_lobj1z00_869);
																					}
																					if (BgL_testz00_1997)
																						{	/* Ieee/equiv.scm 123 */
																							obj_t BgL_tag1z00_872;

																							BgL_tag1z00_872 =
																								BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																								(BgL_obj1z00_5);
																							{	/* Ieee/equiv.scm 125 */
																								obj_t BgL__z00_873;

																								obj_t BgL_getz00_874;

																								obj_t BgL__z00_875;

																								{	/* Ieee/equiv.scm 125 */
																									int BgL_auxz00_2001;

																									BgL_auxz00_2001 =
																										(int) (((long) 1));
																									BgL__z00_873 =
																										BGL_MVALUES_VAL
																										(BgL_auxz00_2001);
																								}
																								{	/* Ieee/equiv.scm 125 */
																									int BgL_auxz00_2004;

																									BgL_auxz00_2004 =
																										(int) (((long) 2));
																									BgL_getz00_874 =
																										BGL_MVALUES_VAL
																										(BgL_auxz00_2004);
																								}
																								{	/* Ieee/equiv.scm 125 */
																									int BgL_auxz00_2007;

																									BgL_auxz00_2007 =
																										(int) (((long) 3));
																									BgL__z00_875 =
																										BGL_MVALUES_VAL
																										(BgL_auxz00_2007);
																								}
																								{	/* Ieee/equiv.scm 125 */
																									obj_t BgL_tag2z00_876;

																									BgL_tag2z00_876 =
																										BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																										(BgL_obj2z00_6);
																									{	/* Ieee/equiv.scm 127 */
																										obj_t BgL__z00_877;

																										obj_t BgL__z00_878;

																										obj_t BgL__z00_879;

																										{	/* Ieee/equiv.scm 127 */
																											int BgL_auxz00_2011;

																											BgL_auxz00_2011 =
																												(int) (((long) 1));
																											BgL__z00_877 =
																												BGL_MVALUES_VAL
																												(BgL_auxz00_2011);
																										}
																										{	/* Ieee/equiv.scm 127 */
																											int BgL_auxz00_2014;

																											BgL_auxz00_2014 =
																												(int) (((long) 2));
																											BgL__z00_878 =
																												BGL_MVALUES_VAL
																												(BgL_auxz00_2014);
																										}
																										{	/* Ieee/equiv.scm 127 */
																											int BgL_auxz00_2017;

																											BgL_auxz00_2017 =
																												(int) (((long) 3));
																											BgL__z00_879 =
																												BGL_MVALUES_VAL
																												(BgL_auxz00_2017);
																										}
																										if (
																											(BgL_tag1z00_872 ==
																												BgL_tag2z00_876))
																											{	/* Ieee/equiv.scm 128 */
																												bool_t BgL_testz00_2022;

																												{	/* Ieee/equiv.scm 128 */
																													bool_t
																														BgL__ortest_1772z00_916;
																													BgL__ortest_1772z00_916
																														=
																														(BgL_tag1z00_872 ==
																														BGl_symbol2395z00zz__r4_equivalence_6_2z00);
																													if (BgL__ortest_1772z00_916)
																														{	/* Ieee/equiv.scm 128 */
																															BgL_testz00_2022 =
																																BgL__ortest_1772z00_916;
																														}
																													else
																														{	/* Ieee/equiv.scm 128 */
																															BgL_testz00_2022 =
																																(BgL_tag1z00_872
																																==
																																BGl_symbol2397z00zz__r4_equivalence_6_2z00);
																														}
																												}
																												if (BgL_testz00_2022)
																													{
																														long BgL_iz00_884;

																														BgL_iz00_884 =
																															((long) 0);
																													BgL_zc3anonymousza31861ze3z83_885:
																														{	/* Ieee/equiv.scm 131 */
																															bool_t
																																BgL__ortest_1773z00_886;
																															BgL__ortest_1773z00_886
																																=
																																(BgL_iz00_884 ==
																																BgL_lobj1z00_869);
																															if (BgL__ortest_1773z00_886)
																																{	/* Ieee/equiv.scm 131 */
																																	return
																																		BgL__ortest_1773z00_886;
																																}
																															else
																																{	/* Ieee/equiv.scm 132 */
																																	bool_t
																																		BgL_testz00_2028;
																																	{	/* Ieee/equiv.scm 132 */
																																		obj_t
																																			BgL_arg1863z00_889;
																																		obj_t
																																			BgL_arg1864z00_890;
																																		BgL_arg1863z00_889
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_getz00_874)
																																			(BgL_getz00_874,
																																			BgL_obj1z00_5,
																																			BINT
																																			(BgL_iz00_884),
																																			BEOA);
																																		BgL_arg1864z00_890
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_getz00_874)
																																			(BgL_getz00_874,
																																			BgL_obj2z00_6,
																																			BINT
																																			(BgL_iz00_884),
																																			BEOA);
																																		BgL_testz00_2028
																																			=
																																			BGl_2zd3zd3zz__r4_numbers_6_5z00
																																			(BgL_arg1863z00_889,
																																			BgL_arg1864z00_890);
																																	}
																																	if (BgL_testz00_2028)
																																		{
																																			long
																																				BgL_iz00_2036;
																																			BgL_iz00_2036
																																				=
																																				(BgL_iz00_884
																																				+
																																				((long)
																																					1));
																																			BgL_iz00_884
																																				=
																																				BgL_iz00_2036;
																																			goto
																																				BgL_zc3anonymousza31861ze3z83_885;
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 132 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																														}
																													}
																												else
																													{	/* Ieee/equiv.scm 128 */
																														bool_t
																															BgL_testz00_2038;
																														{	/* Ieee/equiv.scm 128 */
																															bool_t
																																BgL__ortest_1775z00_911;
																															BgL__ortest_1775z00_911
																																=
																																(BgL_tag1z00_872
																																==
																																BGl_symbol2399z00zz__r4_equivalence_6_2z00);
																															if (BgL__ortest_1775z00_911)
																																{	/* Ieee/equiv.scm 128 */
																																	BgL_testz00_2038
																																		=
																																		BgL__ortest_1775z00_911;
																																}
																															else
																																{	/* Ieee/equiv.scm 128 */
																																	bool_t
																																		BgL__ortest_1776z00_912;
																																	BgL__ortest_1776z00_912
																																		=
																																		(BgL_tag1z00_872
																																		==
																																		BGl_symbol2401z00zz__r4_equivalence_6_2z00);
																																	if (BgL__ortest_1776z00_912)
																																		{	/* Ieee/equiv.scm 128 */
																																			BgL_testz00_2038
																																				=
																																				BgL__ortest_1776z00_912;
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 128 */
																																			bool_t
																																				BgL__ortest_1777z00_913;
																																			BgL__ortest_1777z00_913
																																				=
																																				(BgL_tag1z00_872
																																				==
																																				BGl_symbol2403z00zz__r4_equivalence_6_2z00);
																																			if (BgL__ortest_1777z00_913)
																																				{	/* Ieee/equiv.scm 128 */
																																					BgL_testz00_2038
																																						=
																																						BgL__ortest_1777z00_913;
																																				}
																																			else
																																				{	/* Ieee/equiv.scm 128 */
																																					bool_t
																																						BgL__ortest_1778z00_914;
																																					BgL__ortest_1778z00_914
																																						=
																																						(BgL_tag1z00_872
																																						==
																																						BGl_symbol2405z00zz__r4_equivalence_6_2z00);
																																					if (BgL__ortest_1778z00_914)
																																						{	/* Ieee/equiv.scm 128 */
																																							BgL_testz00_2038
																																								=
																																								BgL__ortest_1778z00_914;
																																						}
																																					else
																																						{	/* Ieee/equiv.scm 128 */
																																							bool_t
																																								BgL__ortest_1779z00_915;
																																							BgL__ortest_1779z00_915
																																								=
																																								(BgL_tag1z00_872
																																								==
																																								BGl_symbol2407z00zz__r4_equivalence_6_2z00);
																																							if (BgL__ortest_1779z00_915)
																																								{	/* Ieee/equiv.scm 128 */
																																									BgL_testz00_2038
																																										=
																																										BgL__ortest_1779z00_915;
																																								}
																																							else
																																								{	/* Ieee/equiv.scm 128 */
																																									BgL_testz00_2038
																																										=
																																										(BgL_tag1z00_872
																																										==
																																										BGl_symbol2409z00zz__r4_equivalence_6_2z00);
																																								}
																																						}
																																				}
																																		}
																																}
																														}
																														if (BgL_testz00_2038)
																															{
																																long
																																	BgL_iz00_894;
																																BgL_iz00_894 =
																																	((long) 0);
																															BgL_zc3anonymousza31866ze3z83_895:
																																{	/* Ieee/equiv.scm 136 */
																																	bool_t
																																		BgL__ortest_1780z00_896;
																																	BgL__ortest_1780z00_896
																																		=
																																		(BgL_iz00_894
																																		==
																																		BgL_lobj1z00_869);
																																	if (BgL__ortest_1780z00_896)
																																		{	/* Ieee/equiv.scm 136 */
																																			return
																																				BgL__ortest_1780z00_896;
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 137 */
																																			bool_t
																																				BgL_testz00_2052;
																																			{	/* Ieee/equiv.scm 137 */
																																				obj_t
																																					BgL_arg1868z00_899;
																																				obj_t
																																					BgL_arg1869z00_900;
																																				BgL_arg1868z00_899
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_getz00_874)
																																					(BgL_getz00_874,
																																					BgL_obj1z00_5,
																																					BINT
																																					(BgL_iz00_894),
																																					BEOA);
																																				BgL_arg1869z00_900
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_getz00_874)
																																					(BgL_getz00_874,
																																					BgL_obj2z00_6,
																																					BINT
																																					(BgL_iz00_894),
																																					BEOA);
																																				BgL_testz00_2052
																																					=
																																					(
																																					(long)
																																					CINT
																																					(BgL_arg1868z00_899)
																																					==
																																					(long)
																																					CINT
																																					(BgL_arg1869z00_900));
																																			}
																																			if (BgL_testz00_2052)
																																				{
																																					long
																																						BgL_iz00_2062;
																																					BgL_iz00_2062
																																						=
																																						(BgL_iz00_894
																																						+
																																						((long) 1));
																																					BgL_iz00_894
																																						=
																																						BgL_iz00_2062;
																																					goto
																																						BgL_zc3anonymousza31866ze3z83_895;
																																				}
																																			else
																																				{	/* Ieee/equiv.scm 137 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{
																																long
																																	BgL_iz00_903;
																																BgL_iz00_903 =
																																	((long) 0);
																															BgL_zc3anonymousza31870ze3z83_904:
																																{	/* Ieee/equiv.scm 141 */
																																	bool_t
																																		BgL__ortest_1782z00_905;
																																	BgL__ortest_1782z00_905
																																		=
																																		(BgL_iz00_903
																																		==
																																		BgL_lobj1z00_869);
																																	if (BgL__ortest_1782z00_905)
																																		{	/* Ieee/equiv.scm 141 */
																																			return
																																				BgL__ortest_1782z00_905;
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 142 */
																																			bool_t
																																				BgL_testz00_2066;
																																			{	/* Ieee/equiv.scm 142 */
																																				obj_t
																																					BgL_arg1872z00_908;
																																				obj_t
																																					BgL_arg1873z00_909;
																																				BgL_arg1872z00_908
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_getz00_874)
																																					(BgL_getz00_874,
																																					BgL_obj1z00_5,
																																					BINT
																																					(BgL_iz00_903),
																																					BEOA);
																																				BgL_arg1873z00_909
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_getz00_874)
																																					(BgL_getz00_874,
																																					BgL_obj2z00_6,
																																					BINT
																																					(BgL_iz00_903),
																																					BEOA);
																																				BgL_testz00_2066
																																					=
																																					(BLLONG_TO_LLONG
																																					(BgL_arg1872z00_908)
																																					==
																																					BLLONG_TO_LLONG
																																					(BgL_arg1873z00_909));
																																			}
																																			if (BgL_testz00_2066)
																																				{
																																					long
																																						BgL_iz00_2076;
																																					BgL_iz00_2076
																																						=
																																						(BgL_iz00_903
																																						+
																																						((long) 1));
																																					BgL_iz00_903
																																						=
																																						BgL_iz00_2076;
																																					goto
																																						BgL_zc3anonymousza31870ze3z83_904;
																																				}
																																			else
																																				{	/* Ieee/equiv.scm 142 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																													}
																											}
																										else
																											{	/* Ieee/equiv.scm 127 */
																												return ((bool_t) 0);
																											}
																									}
																								}
																							}
																						}
																					else
																						{	/* Ieee/equiv.scm 122 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Ieee/equiv.scm 121 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Ieee/equiv.scm 119 */
																			if (REALP(BgL_obj1z00_5))
																				{	/* Ieee/equiv.scm 144 */
																					return ((bool_t) 0);
																				}
																			else
																				{	/* Ieee/equiv.scm 144 */
																					if (STRUCTP(BgL_obj1z00_5))
																						{	/* Ieee/equiv.scm 147 */
																							int BgL_lobj1z00_920;

																							BgL_lobj1z00_920 =
																								STRUCT_LENGTH(BgL_obj1z00_5);
																							if (STRUCTP(BgL_obj2z00_6))
																								{	/* Ieee/equiv.scm 148 */
																									if (
																										((long) (STRUCT_LENGTH
																												(BgL_obj2z00_6)) ==
																											(long)
																											(BgL_lobj1z00_920)))
																										{
																											long BgL_iz00_924;

																											BgL_iz00_924 = ((long) 0);
																										BgL_zc3anonymousza31877ze3z83_925:
																											{	/* Ieee/equiv.scm 151 */
																												bool_t
																													BgL__ortest_1786z00_926;
																												BgL__ortest_1786z00_926
																													=
																													(BgL_iz00_924 ==
																													(long)
																													(BgL_lobj1z00_920));
																												if (BgL__ortest_1786z00_926)
																													{	/* Ieee/equiv.scm 151 */
																														return
																															BgL__ortest_1786z00_926;
																													}
																												else
																													{	/* Ieee/equiv.scm 151 */
																														if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(STRUCT_REF(BgL_obj1z00_5, (int) (BgL_iz00_924)), STRUCT_REF(BgL_obj2z00_6, (int) (BgL_iz00_924))))
																															{
																																long
																																	BgL_iz00_2099;
																																BgL_iz00_2099 =
																																	(BgL_iz00_924
																																	+ ((long) 1));
																																BgL_iz00_924 =
																																	BgL_iz00_2099;
																																goto
																																	BgL_zc3anonymousza31877ze3z83_925;
																															}
																														else
																															{	/* Ieee/equiv.scm 152 */
																																return ((bool_t)
																																	0);
																															}
																													}
																											}
																										}
																									else
																										{	/* Ieee/equiv.scm 149 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Ieee/equiv.scm 148 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Ieee/equiv.scm 146 */
																							if (CELLP(BgL_obj1z00_5))
																								{	/* Ieee/equiv.scm 154 */
																									if (CELLP(BgL_obj2z00_6))
																										{
																											obj_t BgL_obj2z00_2107;

																											obj_t BgL_obj1z00_2105;

																											BgL_obj1z00_2105 =
																												CELL_REF(BgL_obj1z00_5);
																											BgL_obj2z00_2107 =
																												CELL_REF(BgL_obj2z00_6);
																											BgL_obj2z00_6 =
																												BgL_obj2z00_2107;
																											BgL_obj1z00_5 =
																												BgL_obj1z00_2105;
																											goto
																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
																										}
																									else
																										{	/* Ieee/equiv.scm 155 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Ieee/equiv.scm 154 */
																									if (BGL_OBJECTP
																										(BgL_obj1z00_5))
																										{	/* Ieee/equiv.scm 156 */
																											if (BGL_OBJECTP
																												(BgL_obj2z00_6))
																												{	/* Ieee/equiv.scm 157 */
																													return
																														BGl_objectzd2equalzf3z21zz__objectz00
																														(
																														(BgL_objectz00_bglt)
																														(BgL_obj1z00_5),
																														(BgL_objectz00_bglt)
																														(BgL_obj2z00_6));
																												}
																											else
																												{	/* Ieee/equiv.scm 157 */
																													return ((bool_t) 0);
																												}
																										}
																									else
																										{	/* Ieee/equiv.scm 156 */
																											if (UCS2_STRINGP
																												(BgL_obj1z00_5))
																												{	/* Ieee/equiv.scm 158 */
																													if (UCS2_STRINGP
																														(BgL_obj2z00_6))
																														{	/* Ieee/equiv.scm 159 */
																															return
																																ucs2_strcmp
																																(BgL_obj1z00_5,
																																BgL_obj2z00_6);
																														}
																													else
																														{	/* Ieee/equiv.scm 159 */
																															return ((bool_t)
																																0);
																														}
																												}
																											else
																												{	/* Ieee/equiv.scm 158 */
																													if (CUSTOMP
																														(BgL_obj1z00_5))
																														{	/* Ieee/equiv.scm 160 */
																															if (CUSTOMP
																																(BgL_obj2z00_6))
																																{	/* Ieee/equiv.scm 161 */
																																	return
																																		CUSTOM_CMP
																																		(BgL_obj1z00_5,
																																		BgL_obj2z00_6);
																																}
																															else
																																{	/* Ieee/equiv.scm 161 */
																																	return (
																																		(bool_t) 0);
																																}
																														}
																													else
																														{	/* Ieee/equiv.scm 160 */
																															if (UCS2P
																																(BgL_obj1z00_5))
																																{	/* Ieee/equiv.scm 162 */
																																	if (UCS2P
																																		(BgL_obj2z00_6))
																																		{	/* Ieee/equiv.scm 163 */
																																			return
																																				(CUCS2
																																				(BgL_obj1z00_5)
																																				==
																																				CUCS2
																																				(BgL_obj2z00_6));
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 163 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Ieee/equiv.scm 162 */
																																	if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_5))
																																		{	/* Ieee/equiv.scm 164 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 164 */
																																			if (BGL_DATEP(BgL_obj1z00_5))
																																				{	/* Ieee/equiv.scm 166 */
																																					if (BGL_DATEP(BgL_obj2z00_6))
																																						{	/* Ieee/equiv.scm 167 */
																																							return
																																								(bgl_date_to_seconds
																																								(BgL_obj1z00_5)
																																								==
																																								bgl_date_to_seconds
																																								(BgL_obj2z00_6));
																																						}
																																					else
																																						{	/* Ieee/equiv.scm 167 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Ieee/equiv.scm 166 */
																																					if (FOREIGNP(BgL_obj1z00_5))
																																						{	/* Ieee/equiv.scm 168 */
																																							if (FOREIGNP(BgL_obj2z00_6))
																																								{	/* Ieee/equiv.scm 169 */
																																									return
																																										FOREIGN_EQP
																																										(BgL_obj1z00_5,
																																										BgL_obj2z00_6);
																																								}
																																							else
																																								{	/* Ieee/equiv.scm 169 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Ieee/equiv.scm 168 */
																																							if (BGL_WEAKPTRP(BgL_obj1z00_5))
																																								{	/* Ieee/equiv.scm 170 */
																																									if (BGL_WEAKPTRP(BgL_obj2z00_6))
																																										{
																																											obj_t
																																												BgL_obj2z00_2153;
																																											obj_t
																																												BgL_obj1z00_2151;
																																											BgL_obj1z00_2151
																																												=
																																												weakptr_data
																																												(BgL_obj1z00_5);
																																											BgL_obj2z00_2153
																																												=
																																												weakptr_data
																																												(BgL_obj2z00_6);
																																											BgL_obj2z00_6
																																												=
																																												BgL_obj2z00_2153;
																																											BgL_obj1z00_5
																																												=
																																												BgL_obj1z00_2151;
																																											goto
																																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
																																										}
																																									else
																																										{	/* Ieee/equiv.scm 171 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Ieee/equiv.scm 170 */
																																									return
																																										(
																																										(bool_t)
																																										0);
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
						}
				}
		}
	}



/* _equal? */
	obj_t BGl__equalzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1871,
		obj_t BgL_obj1z00_1872, obj_t BgL_obj2z00_1873)
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 93 */
			return
				BBOOL(BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1872,
					BgL_obj2z00_1873));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00()
	{
		AN_OBJECT;
		{	/* Ieee/equiv.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2411z00zz__r4_equivalence_6_2z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2411z00zz__r4_equivalence_6_2z00));
		}
	}

#ifdef __cplusplus
}
#endif
