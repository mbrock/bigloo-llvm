/*===========================================================================*/
/*   (Expand/farith.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/farith.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_farithmetiquez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_farithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2fminzd2zzexpand_farithmetiquez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t the_failure(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_bstring(char *);
	static obj_t BGl__expandzd2fminzd2zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00();
	static obj_t BGl_methodzd2initzd2zzexpand_farithmetiquez00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fmaxzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl__expandza7d2fmaxza7d1755z00,
		BGl__expandzd2fmaxzd2zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fminzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl__expandza7d2fminza7d1756z00,
		BGl__expandzd2fminzd2zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1747z00zzexpand_farithmetiquez00,
		BgL_bgl_string1747za700za7za7e1757za7, "atanfl", 6);
	      DEFINE_STRING(BGl_string1748z00zzexpand_farithmetiquez00,
		BgL_bgl_string1748za700za7za7e1758za7, "Domain error", 12);
	      DEFINE_STRING(BGl_string1750z00zzexpand_farithmetiquez00,
		BgL_bgl_string1750za700za7za7e1759za7, "Too many arguments provided", 27);
	      DEFINE_STRING(BGl_string1751z00zzexpand_farithmetiquez00,
		BgL_bgl_string1751za700za7za7e1760za7, "expand_farithmetique", 20);
	      DEFINE_STRING(BGl_string1752z00zzexpand_farithmetiquez00,
		BgL_bgl_string1752za700za7za7e1761za7,
		"atan-2fl atan-1fl minfl min min-2fl maxfl let max max-2fl ", 58);
	      DEFINE_REAL(BGl_real1749z00zzexpand_farithmetiquez00,
		BgL_bgl_real1749za700za7za7exp1762za7, 0.0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2fatanzd2envz00zzexpand_farithmetiquez00,
		BgL_bgl__expandza7d2fatanza71763z00,
		BGl__expandzd2fatanzd2zzexpand_farithmetiquez00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_farithmetiquez00(long
		BgL_checksumz00_411, char *BgL_fromz00_412)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_farithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_farithmetiquez00();
					BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_farithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_farithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_farithmetique");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_farithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 15 */
			{	/* Expand/farith.scm 15 */
				obj_t BgL_cportz00_403;

				BgL_cportz00_403 =
					bgl_open_input_string(BGl_string1752z00zzexpand_farithmetiquez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_404;

					BgL_iz00_404 = ((long) 8);
				BgL_loopz00_405:
					if ((BgL_iz00_404 == ((long) -1)))
						{	/* Expand/farith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/farith.scm 15 */
							{	/* Expand/farith.scm 15 */
								obj_t BgL_arg1754z00_407;

								{	/* Expand/farith.scm 15 */

									{	/* Expand/farith.scm 15 */
										obj_t BgL_locationz00_409;

										BgL_locationz00_409 = BBOOL(((bool_t) 0));
										{	/* Expand/farith.scm 15 */

											BgL_arg1754z00_407 =
												BGl_readz00zz__readerz00(BgL_cportz00_403,
												BgL_locationz00_409);
										}
									}
								}
								{	/* Expand/farith.scm 15 */
									int BgL_auxz00_429;

									BgL_auxz00_429 = (int) (BgL_iz00_404);
									CNST_TABLE_SET(BgL_auxz00_429, BgL_arg1754z00_407);
							}}
							{	/* Expand/farith.scm 15 */
								int BgL_auxz00_410;

								BgL_auxz00_410 = (int) ((BgL_iz00_404 - ((long) 1)));
								{
									long BgL_iz00_434;

									BgL_iz00_434 = (long) (BgL_auxz00_410);
									BgL_iz00_404 = BgL_iz00_434;
									goto BgL_loopz00_405;
								}
							}
						}
				}
			}
		}
	}



/* expand-fmax */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 25 */
			{
				obj_t BgL_xz00_155;

				obj_t BgL_yz00_156;

				obj_t BgL_xz00_152;

				obj_t BgL_yz00_153;

				if (PAIRP(BgL_xz00_1))
					{	/* Expand/farith.scm 26 */
						obj_t BgL_cdrzd21397zd2_160;

						BgL_cdrzd21397zd2_160 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21397zd2_160))
							{	/* Expand/farith.scm 26 */
								obj_t BgL_cdrzd21401zd2_162;

								BgL_cdrzd21401zd2_162 = CDR(BgL_cdrzd21397zd2_160);
								if (PAIRP(BgL_cdrzd21401zd2_162))
									{	/* Expand/farith.scm 26 */
										if (NULLP(CDR(BgL_cdrzd21401zd2_162)))
											{	/* Expand/farith.scm 26 */
												BgL_xz00_152 = CAR(BgL_cdrzd21397zd2_160);
												BgL_yz00_153 = CAR(BgL_cdrzd21401zd2_162);
												{	/* Expand/farith.scm 29 */
													bool_t BgL_testz00_447;

													{	/* Expand/farith.scm 29 */
														bool_t BgL_testz00_448;

														if (INTEGERP(BgL_xz00_152))
															{	/* Expand/farith.scm 29 */
																BgL_testz00_448 = ((bool_t) 1);
															}
														else
															{	/* Expand/farith.scm 29 */
																BgL_testz00_448 = REALP(BgL_xz00_152);
															}
														if (BgL_testz00_448)
															{	/* Expand/farith.scm 29 */
																if (INTEGERP(BgL_yz00_153))
																	{	/* Expand/farith.scm 29 */
																		BgL_testz00_447 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 29 */
																		BgL_testz00_447 = REALP(BgL_yz00_153);
																	}
															}
														else
															{	/* Expand/farith.scm 29 */
																BgL_testz00_447 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_447)
														{	/* Expand/farith.scm 29 */
															return
																DOUBLE_TO_REAL(BGL_FL_MAX2(REAL_TO_DOUBLE
																	(BgL_xz00_152),
																	REAL_TO_DOUBLE(BgL_yz00_153)));
														}
													else
														{	/* Expand/farith.scm 32 */
															obj_t BgL_arg1613z00_175;

															{	/* Expand/farith.scm 32 */
																obj_t BgL_arg1614z00_176;

																obj_t BgL_arg1615z00_177;

																BgL_arg1614z00_176 = CNST_TABLE_REF(((long) 0));
																{	/* Expand/farith.scm 32 */
																	obj_t BgL_list1616z00_178;

																	{	/* Expand/farith.scm 32 */
																		obj_t BgL_arg1618z00_179;

																		BgL_arg1618z00_179 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1616z00_178 =
																			MAKE_PAIR(BgL_yz00_153,
																			BgL_arg1618z00_179);
																	}
																	BgL_arg1615z00_177 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_152, BgL_list1616z00_178);
																}
																BgL_arg1613z00_175 =
																	MAKE_PAIR(BgL_arg1614z00_176,
																	BgL_arg1615z00_177);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
																BgL_arg1613z00_175, BgL_ez00_2, BEOA);
														}
												}
											}
										else
											{	/* Expand/farith.scm 26 */
												BgL_xz00_155 = CAR(BgL_cdrzd21397zd2_160);
												BgL_yz00_156 = CDR(BgL_cdrzd21397zd2_160);
											BgL_tagzd21390zd2_157:
												{	/* Expand/farith.scm 34 */
													obj_t BgL_maxz00_181;

													BgL_maxz00_181 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 1))));
													{	/* Expand/farith.scm 35 */
														obj_t BgL_arg1621z00_182;

														{	/* Expand/farith.scm 35 */
															obj_t BgL_arg1622z00_183;

															obj_t BgL_arg1623z00_184;

															BgL_arg1622z00_183 = CNST_TABLE_REF(((long) 2));
															{	/* Expand/farith.scm 35 */
																obj_t BgL_arg1624z00_185;

																obj_t BgL_arg1625z00_186;

																{	/* Expand/farith.scm 35 */
																	obj_t BgL_arg1630z00_190;

																	{	/* Expand/farith.scm 35 */
																		obj_t BgL_arg1632z00_192;

																		{	/* Expand/farith.scm 35 */
																			obj_t BgL_arg1633z00_193;

																			{	/* Expand/farith.scm 35 */
																				obj_t BgL_arg1637z00_196;

																				obj_t BgL_arg1639z00_197;

																				BgL_arg1637z00_196 =
																					CNST_TABLE_REF(((long) 0));
																				{	/* Expand/farith.scm 35 */
																					obj_t BgL_arg1640z00_198;

																					BgL_arg1640z00_198 =
																						CAR(BgL_yz00_156);
																					{	/* Expand/farith.scm 35 */
																						obj_t BgL_list1644z00_200;

																						{	/* Expand/farith.scm 35 */
																							obj_t BgL_arg1645z00_201;

																							BgL_arg1645z00_201 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1644z00_200 =
																								MAKE_PAIR(BgL_arg1640z00_198,
																								BgL_arg1645z00_201);
																						}
																						BgL_arg1639z00_197 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_xz00_155,
																							BgL_list1644z00_200);
																				}}
																				BgL_arg1633z00_193 =
																					MAKE_PAIR(BgL_arg1637z00_196,
																					BgL_arg1639z00_197);
																			}
																			{	/* Expand/farith.scm 35 */
																				obj_t BgL_list1636z00_195;

																				BgL_list1636z00_195 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1632z00_192 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1633z00_193,
																					BgL_list1636z00_195);
																		}}
																		BgL_arg1630z00_190 =
																			MAKE_PAIR(BgL_maxz00_181,
																			BgL_arg1632z00_192);
																	}
																	BgL_arg1624z00_185 =
																		MAKE_PAIR(BgL_arg1630z00_190, BNIL);
																}
																{	/* Expand/farith.scm 36 */
																	obj_t BgL_arg1646z00_202;

																	obj_t BgL_arg1647z00_203;

																	BgL_arg1646z00_202 =
																		CNST_TABLE_REF(((long) 3));
																	{	/* Expand/farith.scm 36 */
																		obj_t BgL_arg1650z00_204;

																		BgL_arg1650z00_204 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_156, BNIL);
																		{	/* Expand/farith.scm 36 */
																			obj_t BgL_list1651z00_205;

																			BgL_list1651z00_205 =
																				MAKE_PAIR(BgL_arg1650z00_204, BNIL);
																			BgL_arg1647z00_203 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_maxz00_181, BgL_list1651z00_205);
																	}}
																	BgL_arg1625z00_186 =
																		MAKE_PAIR(BgL_arg1646z00_202,
																		BgL_arg1647z00_203);
																}
																{	/* Expand/farith.scm 35 */
																	obj_t BgL_list1627z00_188;

																	{	/* Expand/farith.scm 35 */
																		obj_t BgL_arg1628z00_189;

																		BgL_arg1628z00_189 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1627z00_188 =
																			MAKE_PAIR(BgL_arg1625z00_186,
																			BgL_arg1628z00_189);
																	}
																	BgL_arg1623z00_184 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1624z00_185, BgL_list1627z00_188);
															}}
															BgL_arg1621z00_182 =
																MAKE_PAIR(BgL_arg1622z00_183,
																BgL_arg1623z00_184);
														}
														return
															PROCEDURE_ENTRY(BgL_ez00_2) (BgL_ez00_2,
															BgL_arg1621z00_182, BgL_ez00_2, BEOA);
													}
												}
											}
									}
								else
									{
										obj_t BgL_yz00_497;

										obj_t BgL_xz00_495;

										BgL_xz00_495 = CAR(BgL_cdrzd21397zd2_160);
										BgL_yz00_497 = CDR(BgL_cdrzd21397zd2_160);
										BgL_yz00_156 = BgL_yz00_497;
										BgL_xz00_155 = BgL_xz00_495;
										goto BgL_tagzd21390zd2_157;
									}
							}
						else
							{	/* Expand/farith.scm 26 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/farith.scm 26 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-fmax */
	obj_t BGl__expandzd2fmaxzd2zzexpand_farithmetiquez00(obj_t BgL_envz00_394,
		obj_t BgL_xz00_395, obj_t BgL_ez00_396)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 25 */
			return
				BGl_expandzd2fmaxzd2zzexpand_farithmetiquez00(BgL_xz00_395,
				BgL_ez00_396);
		}
	}



/* expand-fmin */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fminzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 42 */
			{
				obj_t BgL_xz00_210;

				obj_t BgL_yz00_211;

				obj_t BgL_xz00_207;

				obj_t BgL_yz00_208;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/farith.scm 43 */
						obj_t BgL_cdrzd21453zd2_215;

						BgL_cdrzd21453zd2_215 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd21453zd2_215))
							{	/* Expand/farith.scm 43 */
								obj_t BgL_cdrzd21457zd2_217;

								BgL_cdrzd21457zd2_217 = CDR(BgL_cdrzd21453zd2_215);
								if (PAIRP(BgL_cdrzd21457zd2_217))
									{	/* Expand/farith.scm 43 */
										if (NULLP(CDR(BgL_cdrzd21457zd2_217)))
											{	/* Expand/farith.scm 43 */
												BgL_xz00_207 = CAR(BgL_cdrzd21453zd2_215);
												BgL_yz00_208 = CAR(BgL_cdrzd21457zd2_217);
												{	/* Expand/farith.scm 46 */
													bool_t BgL_testz00_511;

													{	/* Expand/farith.scm 46 */
														bool_t BgL_testz00_512;

														if (INTEGERP(BgL_xz00_207))
															{	/* Expand/farith.scm 46 */
																BgL_testz00_512 = ((bool_t) 1);
															}
														else
															{	/* Expand/farith.scm 46 */
																BgL_testz00_512 = REALP(BgL_xz00_207);
															}
														if (BgL_testz00_512)
															{	/* Expand/farith.scm 46 */
																if (INTEGERP(BgL_yz00_208))
																	{	/* Expand/farith.scm 46 */
																		BgL_testz00_511 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 46 */
																		BgL_testz00_511 = REALP(BgL_yz00_208);
																	}
															}
														else
															{	/* Expand/farith.scm 46 */
																BgL_testz00_511 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_511)
														{	/* Expand/farith.scm 46 */
															return
																DOUBLE_TO_REAL(BGL_FL_MIN2(REAL_TO_DOUBLE
																	(BgL_xz00_207),
																	REAL_TO_DOUBLE(BgL_yz00_208)));
														}
													else
														{	/* Expand/farith.scm 49 */
															obj_t BgL_arg1669z00_230;

															{	/* Expand/farith.scm 49 */
																obj_t BgL_arg1670z00_231;

																obj_t BgL_arg1672z00_232;

																BgL_arg1670z00_231 = CNST_TABLE_REF(((long) 4));
																{	/* Expand/farith.scm 49 */
																	obj_t BgL_list1673z00_233;

																	{	/* Expand/farith.scm 49 */
																		obj_t BgL_arg1674z00_234;

																		BgL_arg1674z00_234 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1673z00_233 =
																			MAKE_PAIR(BgL_yz00_208,
																			BgL_arg1674z00_234);
																	}
																	BgL_arg1672z00_232 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_xz00_207, BgL_list1673z00_233);
																}
																BgL_arg1669z00_230 =
																	MAKE_PAIR(BgL_arg1670z00_231,
																	BgL_arg1672z00_232);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																BgL_arg1669z00_230, BgL_ez00_4, BEOA);
														}
												}
											}
										else
											{	/* Expand/farith.scm 43 */
												BgL_xz00_210 = CAR(BgL_cdrzd21453zd2_215);
												BgL_yz00_211 = CDR(BgL_cdrzd21453zd2_215);
											BgL_tagzd21446zd2_212:
												{	/* Expand/farith.scm 51 */
													obj_t BgL_minz00_236;

													BgL_minz00_236 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																	(long) 5))));
													{	/* Expand/farith.scm 52 */
														obj_t BgL_arg1676z00_237;

														{	/* Expand/farith.scm 52 */
															obj_t BgL_arg1677z00_238;

															obj_t BgL_arg1678z00_239;

															BgL_arg1677z00_238 = CNST_TABLE_REF(((long) 2));
															{	/* Expand/farith.scm 52 */
																obj_t BgL_arg1680z00_240;

																obj_t BgL_arg1684z00_241;

																{	/* Expand/farith.scm 52 */
																	obj_t BgL_arg1689z00_245;

																	{	/* Expand/farith.scm 52 */
																		obj_t BgL_arg1691z00_247;

																		{	/* Expand/farith.scm 52 */
																			obj_t BgL_arg1692z00_248;

																			{	/* Expand/farith.scm 52 */
																				obj_t BgL_arg1695z00_251;

																				obj_t BgL_arg1696z00_252;

																				BgL_arg1695z00_251 =
																					CNST_TABLE_REF(((long) 4));
																				{	/* Expand/farith.scm 52 */
																					obj_t BgL_arg1697z00_253;

																					BgL_arg1697z00_253 =
																						CAR(BgL_yz00_211);
																					{	/* Expand/farith.scm 52 */
																						obj_t BgL_list1701z00_255;

																						{	/* Expand/farith.scm 52 */
																							obj_t BgL_arg1702z00_256;

																							BgL_arg1702z00_256 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list1701z00_255 =
																								MAKE_PAIR(BgL_arg1697z00_253,
																								BgL_arg1702z00_256);
																						}
																						BgL_arg1696z00_252 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_xz00_210,
																							BgL_list1701z00_255);
																				}}
																				BgL_arg1692z00_248 =
																					MAKE_PAIR(BgL_arg1695z00_251,
																					BgL_arg1696z00_252);
																			}
																			{	/* Expand/farith.scm 52 */
																				obj_t BgL_list1694z00_250;

																				BgL_list1694z00_250 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg1691z00_247 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1692z00_248,
																					BgL_list1694z00_250);
																		}}
																		BgL_arg1689z00_245 =
																			MAKE_PAIR(BgL_minz00_236,
																			BgL_arg1691z00_247);
																	}
																	BgL_arg1680z00_240 =
																		MAKE_PAIR(BgL_arg1689z00_245, BNIL);
																}
																{	/* Expand/farith.scm 53 */
																	obj_t BgL_arg1703z00_257;

																	obj_t BgL_arg1704z00_258;

																	BgL_arg1703z00_257 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Expand/farith.scm 53 */
																		obj_t BgL_arg1705z00_259;

																		BgL_arg1705z00_259 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_yz00_211, BNIL);
																		{	/* Expand/farith.scm 53 */
																			obj_t BgL_list1706z00_260;

																			BgL_list1706z00_260 =
																				MAKE_PAIR(BgL_arg1705z00_259, BNIL);
																			BgL_arg1704z00_258 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_minz00_236, BgL_list1706z00_260);
																	}}
																	BgL_arg1684z00_241 =
																		MAKE_PAIR(BgL_arg1703z00_257,
																		BgL_arg1704z00_258);
																}
																{	/* Expand/farith.scm 52 */
																	obj_t BgL_list1686z00_243;

																	{	/* Expand/farith.scm 52 */
																		obj_t BgL_arg1688z00_244;

																		BgL_arg1688z00_244 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list1686z00_243 =
																			MAKE_PAIR(BgL_arg1684z00_241,
																			BgL_arg1688z00_244);
																	}
																	BgL_arg1678z00_239 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1680z00_240, BgL_list1686z00_243);
															}}
															BgL_arg1676z00_237 =
																MAKE_PAIR(BgL_arg1677z00_238,
																BgL_arg1678z00_239);
														}
														return
															PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
															BgL_arg1676z00_237, BgL_ez00_4, BEOA);
													}
												}
											}
									}
								else
									{
										obj_t BgL_yz00_561;

										obj_t BgL_xz00_559;

										BgL_xz00_559 = CAR(BgL_cdrzd21453zd2_215);
										BgL_yz00_561 = CDR(BgL_cdrzd21453zd2_215);
										BgL_yz00_211 = BgL_yz00_561;
										BgL_xz00_210 = BgL_xz00_559;
										goto BgL_tagzd21446zd2_212;
									}
							}
						else
							{	/* Expand/farith.scm 43 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/farith.scm 43 */
						return BFALSE;
					}
			}
		}
	}



/* _expand-fmin */
	obj_t BGl__expandzd2fminzd2zzexpand_farithmetiquez00(obj_t BgL_envz00_397,
		obj_t BgL_xz00_398, obj_t BgL_ez00_399)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 42 */
			return
				BGl_expandzd2fminzd2zzexpand_farithmetiquez00(BgL_xz00_398,
				BgL_ez00_399);
		}
	}



/* expand-fatan */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 59 */
			{
				obj_t BgL_xz00_264;

				obj_t BgL_yz00_265;

				obj_t BgL_xz00_262;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/farith.scm 60 */
						obj_t BgL_cdrzd21509zd2_270;

						BgL_cdrzd21509zd2_270 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd21509zd2_270))
							{	/* Expand/farith.scm 60 */
								if (NULLP(CDR(BgL_cdrzd21509zd2_270)))
									{	/* Expand/farith.scm 60 */
										BgL_xz00_262 = CAR(BgL_cdrzd21509zd2_270);
										{	/* Expand/farith.scm 62 */
											bool_t BgL_testz00_572;

											if (INTEGERP(BgL_xz00_262))
												{	/* Expand/farith.scm 62 */
													BgL_testz00_572 = ((bool_t) 1);
												}
											else
												{	/* Expand/farith.scm 62 */
													BgL_testz00_572 = REALP(BgL_xz00_262);
												}
											if (BgL_testz00_572)
												{	/* Expand/farith.scm 62 */
													return
														DOUBLE_TO_REAL(atan(REAL_TO_DOUBLE(BgL_xz00_262)));
												}
											else
												{	/* Expand/farith.scm 64 */
													obj_t BgL_arg1724z00_283;

													{	/* Expand/farith.scm 64 */
														obj_t BgL_arg1725z00_284;

														obj_t BgL_arg1729z00_285;

														BgL_arg1725z00_284 = CNST_TABLE_REF(((long) 7));
														{	/* Expand/farith.scm 64 */
															obj_t BgL_list1730z00_286;

															BgL_list1730z00_286 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg1729z00_285 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_xz00_262, BgL_list1730z00_286);
														}
														BgL_arg1724z00_283 =
															MAKE_PAIR(BgL_arg1725z00_284, BgL_arg1729z00_285);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
														BgL_arg1724z00_283, BgL_ez00_6, BEOA);
												}
										}
									}
								else
									{	/* Expand/farith.scm 60 */
										obj_t BgL_cdrzd21525zd2_275;

										BgL_cdrzd21525zd2_275 = CDR(BgL_cdrzd21509zd2_270);
										if (PAIRP(BgL_cdrzd21525zd2_275))
											{	/* Expand/farith.scm 60 */
												if (NULLP(CDR(BgL_cdrzd21525zd2_275)))
													{	/* Expand/farith.scm 60 */
														BgL_xz00_264 = CAR(BgL_cdrzd21509zd2_270);
														BgL_yz00_265 = CAR(BgL_cdrzd21525zd2_275);
														{	/* Expand/farith.scm 66 */
															bool_t BgL_testz00_592;

															{	/* Expand/farith.scm 66 */
																bool_t BgL_testz00_593;

																if (INTEGERP(BgL_xz00_264))
																	{	/* Expand/farith.scm 66 */
																		BgL_testz00_593 = ((bool_t) 1);
																	}
																else
																	{	/* Expand/farith.scm 66 */
																		BgL_testz00_593 = REALP(BgL_xz00_264);
																	}
																if (BgL_testz00_593)
																	{	/* Expand/farith.scm 66 */
																		if (INTEGERP(BgL_yz00_265))
																			{	/* Expand/farith.scm 66 */
																				BgL_testz00_592 = ((bool_t) 1);
																			}
																		else
																			{	/* Expand/farith.scm 66 */
																				BgL_testz00_592 = REALP(BgL_yz00_265);
																			}
																	}
																else
																	{	/* Expand/farith.scm 66 */
																		BgL_testz00_592 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_592)
																{	/* Expand/farith.scm 67 */
																	double BgL_res1746z00_393;

																	{	/* Expand/farith.scm 67 */
																		double BgL_xz00_382;

																		double BgL_yz00_383;

																		BgL_xz00_382 = REAL_TO_DOUBLE(BgL_xz00_264);
																		BgL_yz00_383 = REAL_TO_DOUBLE(BgL_yz00_265);
																		{	/* Expand/farith.scm 67 */
																			bool_t BgL_testz00_602;

																			if ((BgL_xz00_382 == ((double) 0.0)))
																				{	/* Expand/farith.scm 67 */
																					BgL_testz00_602 =
																						(BgL_yz00_383 == ((double) 0.0));
																				}
																			else
																				{	/* Expand/farith.scm 67 */
																					BgL_testz00_602 = ((bool_t) 0);
																				}
																			if (BgL_testz00_602)
																				{	/* Expand/farith.scm 67 */
																					obj_t BgL_procz00_386;

																					obj_t BgL_msgz00_387;

																					BgL_procz00_386 =
																						string_to_bstring(BSTRING_TO_STRING
																						(BGl_string1747z00zzexpand_farithmetiquez00));
																					BgL_msgz00_387 =
																						string_to_bstring(BSTRING_TO_STRING
																						(BGl_string1748z00zzexpand_farithmetiquez00));
																					the_failure(BgL_procz00_386,
																						BgL_msgz00_387,
																						BGl_real1749z00zzexpand_farithmetiquez00);
																					BgL_res1746z00_393 = ((double) 0.0);
																				}
																			else
																				{	/* Expand/farith.scm 67 */
																					BgL_res1746z00_393 =
																						atan2(BgL_xz00_382, BgL_yz00_383);
																				}
																		}
																	}
																	return DOUBLE_TO_REAL(BgL_res1746z00_393);
																}
															else
																{	/* Expand/farith.scm 68 */
																	obj_t BgL_arg1732z00_288;

																	{	/* Expand/farith.scm 68 */
																		obj_t BgL_arg1733z00_289;

																		obj_t BgL_arg1734z00_290;

																		BgL_arg1733z00_289 =
																			CNST_TABLE_REF(((long) 8));
																		{	/* Expand/farith.scm 68 */
																			obj_t BgL_list1735z00_291;

																			{	/* Expand/farith.scm 68 */
																				obj_t BgL_arg1736z00_292;

																				BgL_arg1736z00_292 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list1735z00_291 =
																					MAKE_PAIR(BgL_yz00_265,
																					BgL_arg1736z00_292);
																			}
																			BgL_arg1734z00_290 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_xz00_264, BgL_list1735z00_291);
																		}
																		BgL_arg1732z00_288 =
																			MAKE_PAIR(BgL_arg1733z00_289,
																			BgL_arg1734z00_290);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_6) (BgL_ez00_6,
																		BgL_arg1732z00_288, BgL_ez00_6, BEOA);
																}
														}
													}
												else
													{	/* Expand/farith.scm 60 */
													BgL_tagzd21503zd2_267:
														return
															BGl_errorz00zz__errorz00(BNIL,
															BGl_string1750z00zzexpand_farithmetiquez00,
															BgL_xz00_5);
													}
											}
										else
											{	/* Expand/farith.scm 60 */
												goto BgL_tagzd21503zd2_267;
											}
									}
							}
						else
							{	/* Expand/farith.scm 60 */
								goto BgL_tagzd21503zd2_267;
							}
					}
				else
					{	/* Expand/farith.scm 60 */
						goto BgL_tagzd21503zd2_267;
					}
			}
		}
	}



/* _expand-fatan */
	obj_t BGl__expandzd2fatanzd2zzexpand_farithmetiquez00(obj_t BgL_envz00_400,
		obj_t BgL_xz00_401, obj_t BgL_ez00_402)
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 59 */
			return
				BGl_expandzd2fatanzd2zzexpand_farithmetiquez00(BgL_xz00_401,
				BgL_ez00_402);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_farithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_farithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_farithmetiquez00()
	{
		AN_OBJECT;
		{	/* Expand/farith.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1751z00zzexpand_farithmetiquez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string1751z00zzexpand_farithmetiquez00));
		}
	}

#ifdef __cplusplus
}
#endif
