/*===========================================================================*/
/*   (Tools/progn.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/progn.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl__normaliza7ezd2beginz75zztools_prognz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_prognz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_prognz00();
	static obj_t BGl__emapz00zztools_prognz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t, obj_t);
	static obj_t BGl__normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_prognz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_prognz00();
	BGL_EXPORTED_DECL obj_t BGl_emapz00zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zztools_prognz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__normaliza7ezd2prognz75zztools_prognz00(obj_t, obj_t);
	static obj_t BGl__prognzd2firstzd2expressionz00zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	static obj_t BGl_loopz00zztools_prognz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zztools_prognz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl__prognzd2tailzd2expressionsz00zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_normaliza7ezd2beginz75zztools_prognz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_prognz00();
	static obj_t BGl_methodzd2initzd2zztools_prognz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2beginzd2envza7zztools_prognz00,
		BgL_bgl__normaliza7a7eza7d2b1651z00,
		BGl__normaliza7ezd2beginz75zztools_prognz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prognzd2tailzd2expressionszd2envzd2zztools_prognz00,
		BgL_bgl__prognza7d2tailza7d21652z00,
		BGl__prognzd2tailzd2expressionsz00zztools_prognz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2prognzf2loczd2envz55zztools_prognz00,
		BgL_bgl__normaliza7a7eza7d2p1653z00,
		BGl__normaliza7ezd2prognzf2locz87zztools_prognz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2prognzd2envza7zztools_prognz00,
		BgL_bgl__normaliza7a7eza7d2p1654z00,
		BGl__normaliza7ezd2prognz75zztools_prognz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emapzd2envzd2zztools_prognz00,
		BgL_bgl__emapza700za7za7tools_1655za7, BGl__emapz00zztools_prognz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1642z00zztools_prognz00,
		BgL_bgl_string1642za700za7za7t1656za7, "normalize-progn", 15);
	      DEFINE_STRING(BGl_string1643z00zztools_prognz00,
		BgL_bgl_string1643za700za7za7t1657za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string1644z00zztools_prognz00,
		BgL_bgl_string1644za700za7za7t1658za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1645z00zztools_prognz00,
		BgL_bgl_string1645za700za7za7t1659za7, "Illegal parameter list", 22);
	      DEFINE_STRING(BGl_string1646z00zztools_prognz00,
		BgL_bgl_string1646za700za7za7t1660za7, "tools_progn", 11);
	      DEFINE_STRING(BGl_string1647z00zztools_prognz00,
		BgL_bgl_string1647za700za7za7t1661za7, "emap normalize-begin begin ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prognzd2firstzd2expressionzd2envzd2zztools_prognz00,
		BgL_bgl__prognza7d2firstza7d1662z00,
		BGl__prognzd2firstzd2expressionz00zztools_prognz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long
		BgL_checksumz00_419, char *BgL_fromz00_420)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_prognz00))
				{
					BGl_requirezd2initializa7ationz75zztools_prognz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_prognz00();
					BGl_cnstzd2initzd2zztools_prognz00();
					BGl_importedzd2moduleszd2initz00zztools_prognz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_progn");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_progn");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "tools_progn");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			{	/* Tools/progn.scm 15 */
				obj_t BgL_cportz00_411;

				BgL_cportz00_411 =
					bgl_open_input_string(BGl_string1647z00zztools_prognz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_412;

					BgL_iz00_412 = ((long) 2);
				BgL_loopz00_413:
					if ((BgL_iz00_412 == ((long) -1)))
						{	/* Tools/progn.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/progn.scm 15 */
							{	/* Tools/progn.scm 15 */
								obj_t BgL_arg1650z00_415;

								{	/* Tools/progn.scm 15 */

									{	/* Tools/progn.scm 15 */
										obj_t BgL_locationz00_417;

										BgL_locationz00_417 = BBOOL(((bool_t) 0));
										{	/* Tools/progn.scm 15 */

											BgL_arg1650z00_415 =
												BGl_readz00zz__readerz00(BgL_cportz00_411,
												BgL_locationz00_417);
										}
									}
								}
								{	/* Tools/progn.scm 15 */
									int BgL_auxz00_436;

									BgL_auxz00_436 = (int) (BgL_iz00_412);
									CNST_TABLE_SET(BgL_auxz00_436, BgL_arg1650z00_415);
							}}
							{	/* Tools/progn.scm 15 */
								int BgL_auxz00_418;

								BgL_auxz00_418 = (int) ((BgL_iz00_412 - ((long) 1)));
								{
									long BgL_iz00_441;

									BgL_iz00_441 = (long) (BgL_auxz00_418);
									BgL_iz00_412 = BgL_iz00_441;
									goto BgL_loopz00_413;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}
	}



/* normalize-progn */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t
		BgL_bodyza2za2_15)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 31 */
		BGl_normaliza7ezd2prognz75zztools_prognz00:
			if (PAIRP(BgL_bodyza2za2_15))
				{	/* Tools/progn.scm 33 */
					if (NULLP(CDR(BgL_bodyza2za2_15)))
						{	/* Tools/progn.scm 36 */
							obj_t BgL_ezd21393zd2_126;

							BgL_ezd21393zd2_126 = CAR(BgL_bodyza2za2_15);
							if (PAIRP(BgL_ezd21393zd2_126))
								{	/* Tools/progn.scm 36 */
									if ((CAR(BgL_ezd21393zd2_126) == CNST_TABLE_REF(((long) 0))))
										{	/* Tools/progn.scm 36 */
											if (NULLP(CDR(BgL_ezd21393zd2_126)))
												{	/* Tools/progn.scm 36 */
													return BUNSPEC;
												}
											else
												{	/* Tools/progn.scm 36 */
													obj_t BgL_cdrzd21400zd2_130;

													BgL_cdrzd21400zd2_130 = CDR(BgL_ezd21393zd2_126);
													if (PAIRP(BgL_cdrzd21400zd2_130))
														{	/* Tools/progn.scm 36 */
															if (NULLP(CDR(BgL_cdrzd21400zd2_130)))
																{	/* Tools/progn.scm 36 */
																	return BgL_ezd21393zd2_126;
																}
															else
																{
																	obj_t BgL_bodyza2za2_464;

																	BgL_bodyza2za2_464 = BgL_cdrzd21400zd2_130;
																	BgL_bodyza2za2_15 = BgL_bodyza2za2_464;
																	goto
																		BGl_normaliza7ezd2prognz75zztools_prognz00;
																}
														}
													else
														{
															obj_t BgL_bodyza2za2_465;

															BgL_bodyza2za2_465 = BgL_cdrzd21400zd2_130;
															BgL_bodyza2za2_15 = BgL_bodyza2za2_465;
															goto BGl_normaliza7ezd2prognz75zztools_prognz00;
														}
												}
										}
									else
										{	/* Tools/progn.scm 36 */
											return BgL_ezd21393zd2_126;
										}
								}
							else
								{	/* Tools/progn.scm 36 */
									return BgL_ezd21393zd2_126;
								}
						}
					else
						{	/* Tools/progn.scm 46 */
							obj_t BgL_subz00_140;

							{	/* Tools/progn.scm 46 */
								obj_t BgL_g1508z00_144;

								if ((CAR(BgL_bodyza2za2_15) == CNST_TABLE_REF(((long) 0))))
									{	/* Tools/progn.scm 46 */
										BgL_g1508z00_144 = CDR(BgL_bodyza2za2_15);
									}
								else
									{	/* Tools/progn.scm 46 */
										BgL_g1508z00_144 = BgL_bodyza2za2_15;
									}
								BgL_subz00_140 =
									BGl_loopz72z72zztools_prognz00(BgL_g1508z00_144);
							}
							if (EXTENDED_PAIRP(BgL_bodyza2za2_15))
								{	/* Tools/progn.scm 69 */
									obj_t BgL_arg1535z00_142;

									obj_t BgL_arg1536z00_143;

									BgL_arg1535z00_142 = CNST_TABLE_REF(((long) 0));
									BgL_arg1536z00_143 = CER(BgL_bodyza2za2_15);
									{	/* Tools/progn.scm 69 */
										obj_t BgL_res1637z00_329;

										BgL_res1637z00_329 =
											MAKE_EXTENDED_PAIR(BgL_arg1535z00_142, BgL_subz00_140,
											BgL_arg1536z00_143);
										return BgL_res1637z00_329;
									}
								}
							else
								{	/* Tools/progn.scm 68 */
									return MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BgL_subz00_140);
				}}}
			else
				{	/* Tools/progn.scm 33 */
					return
						BGl_internalzd2errorzd2zztools_errorz00
						(BGl_string1642z00zztools_prognz00,
						BGl_string1643z00zztools_prognz00, BgL_bodyza2za2_15);
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zztools_prognz00(obj_t BgL_bodyza2za2_146)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 46 */
		BGl_loopz72z72zztools_prognz00:
			if (NULLP(BgL_bodyza2za2_146))
				{	/* Tools/progn.scm 49 */
					return BNIL;
				}
			else
				{	/* Tools/progn.scm 51 */
					obj_t BgL_exprz00_149;

					BgL_exprz00_149 = CAR(BgL_bodyza2za2_146);
					{	/* Tools/progn.scm 52 */
						bool_t BgL_testz00_483;

						if (PAIRP(BgL_exprz00_149))
							{	/* Tools/progn.scm 52 */
								BgL_testz00_483 =
									(CAR(BgL_exprz00_149) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Tools/progn.scm 52 */
								BgL_testz00_483 = ((bool_t) 0);
							}
						if (BgL_testz00_483)
							{	/* Tools/progn.scm 52 */
								return
									bgl_append2(CDR(BgL_exprz00_149),
									BGl_loopz72z72zztools_prognz00(CDR(BgL_bodyza2za2_146)));
							}
						else
							{	/* Tools/progn.scm 55 */
								bool_t BgL_testz00_493;

								if ((BgL_exprz00_149 == BUNSPEC))
									{	/* Tools/progn.scm 56 */
										obj_t BgL_auxz00_496;

										BgL_auxz00_496 = CDR(BgL_bodyza2za2_146);
										BgL_testz00_493 = PAIRP(BgL_auxz00_496);
									}
								else
									{	/* Tools/progn.scm 55 */
										BgL_testz00_493 = ((bool_t) 0);
									}
								if (BgL_testz00_493)
									{
										obj_t BgL_bodyza2za2_499;

										BgL_bodyza2za2_499 = CDR(BgL_bodyza2za2_146);
										BgL_bodyza2za2_146 = BgL_bodyza2za2_499;
										goto BGl_loopz72z72zztools_prognz00;
									}
								else
									{	/* Tools/progn.scm 55 */
										if (EXTENDED_PAIRP(BgL_exprz00_149))
											{	/* Tools/progn.scm 60 */
												obj_t BgL_arg1546z00_157;

												obj_t BgL_arg1547z00_158;

												BgL_arg1546z00_157 =
													BGl_loopz72z72zztools_prognz00(CDR
													(BgL_bodyza2za2_146));
												BgL_arg1547z00_158 = CER(BgL_exprz00_149);
												{	/* Tools/progn.scm 59 */
													obj_t BgL_res1635z00_315;

													BgL_res1635z00_315 =
														MAKE_EXTENDED_PAIR(BgL_exprz00_149,
														BgL_arg1546z00_157, BgL_arg1547z00_158);
													return BgL_res1635z00_315;
												}
											}
										else
											{	/* Tools/progn.scm 58 */
												if (EXTENDED_PAIRP(BgL_bodyza2za2_146))
													{	/* Tools/progn.scm 64 */
														obj_t BgL_arg1551z00_161;

														obj_t BgL_arg1552z00_162;

														BgL_arg1551z00_161 =
															BGl_loopz72z72zztools_prognz00(CDR
															(BgL_bodyza2za2_146));
														BgL_arg1552z00_162 = CER(BgL_bodyza2za2_146);
														{	/* Tools/progn.scm 63 */
															obj_t BgL_res1636z00_322;

															BgL_res1636z00_322 =
																MAKE_EXTENDED_PAIR(BgL_exprz00_149,
																BgL_arg1551z00_161, BgL_arg1552z00_162);
															return BgL_res1636z00_322;
														}
													}
												else
													{	/* Tools/progn.scm 62 */
														return
															MAKE_PAIR(BgL_exprz00_149,
															BGl_loopz72z72zztools_prognz00(CDR
																(BgL_bodyza2za2_146)));
													}
											}
									}
							}
					}
				}
		}
	}



/* _normalize-progn */
	obj_t BGl__normaliza7ezd2prognz75zztools_prognz00(obj_t BgL_envz00_394,
		obj_t BgL_bodyza2za2_395)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 31 */
			return BGl_normaliza7ezd2prognz75zztools_prognz00(BgL_bodyza2za2_395);
		}
	}



/* normalize-begin */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2beginz75zztools_prognz00(obj_t
		BgL_begz00_16)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 75 */
		BGl_normaliza7ezd2beginz75zztools_prognz00:
			{	/* Tools/progn.scm 76 */
				obj_t BgL_bodyz00_176;

				BgL_bodyz00_176 = CDR(BgL_begz00_16);
				if (NULLP(BgL_bodyz00_176))
					{	/* Tools/progn.scm 78 */
						return BUNSPEC;
					}
				else
					{	/* Tools/progn.scm 78 */
						if (NULLP(CDR(BgL_bodyz00_176)))
							{	/* Tools/progn.scm 81 */
								obj_t BgL_ez00_179;

								BgL_ez00_179 = CAR(BgL_bodyz00_176);
								if (PAIRP(BgL_ez00_179))
									{	/* Tools/progn.scm 82 */
										if ((CAR(BgL_ez00_179) == CNST_TABLE_REF(((long) 0))))
											{
												obj_t BgL_begz00_530;

												BgL_begz00_530 = BgL_ez00_179;
												BgL_begz00_16 = BgL_begz00_530;
												goto BGl_normaliza7ezd2beginz75zztools_prognz00;
											}
										else
											{	/* Tools/progn.scm 82 */
												return BgL_ez00_179;
											}
									}
								else
									{	/* Tools/progn.scm 82 */
										return BgL_ez00_179;
									}
							}
						else
							{
								obj_t BgL_lz00_191;

								obj_t BgL_resz00_192;

								BgL_lz00_191 = BgL_bodyz00_176;
								BgL_resz00_192 = BNIL;
							BgL_zc3anonymousza31573ze3z83_193:
								if (NULLP(BgL_lz00_191))
									{	/* Tools/progn.scm 91 */
										if (NULLP(BgL_resz00_192))
											{	/* Tools/progn.scm 93 */
												return BUNSPEC;
											}
										else
											{	/* Tools/progn.scm 93 */
												if (NULLP(CDR(BgL_resz00_192)))
													{	/* Tools/progn.scm 95 */
														return CAR(BgL_resz00_192);
													}
												else
													{	/* Tools/progn.scm 98 */
														obj_t BgL_arg1577z00_197;

														{	/* Tools/progn.scm 98 */
															obj_t BgL_arg1578z00_198;

															obj_t BgL_arg1580z00_199;

															BgL_arg1578z00_198 = CNST_TABLE_REF(((long) 0));
															BgL_arg1580z00_199 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(bgl_reverse_bang(BgL_resz00_192), BNIL);
															BgL_arg1577z00_197 =
																MAKE_PAIR(BgL_arg1578z00_198,
																BgL_arg1580z00_199);
														}
														return
															BGl_epairifyz00zztools_miscz00(BgL_arg1577z00_197,
															BgL_begz00_16);
													}
											}
									}
								else
									{	/* Tools/progn.scm 91 */
										if (PAIRP(BgL_lz00_191))
											{	/* Tools/progn.scm 100 */
												obj_t BgL_bz00_204;

												BgL_bz00_204 = CAR(BgL_lz00_191);
												{	/* Tools/progn.scm 101 */
													bool_t BgL_testz00_547;

													if (PAIRP(BgL_bz00_204))
														{	/* Tools/progn.scm 101 */
															BgL_testz00_547 = ((bool_t) 0);
														}
													else
														{	/* Tools/progn.scm 101 */
															if (SYMBOLP(BgL_bz00_204))
																{	/* Tools/progn.scm 101 */
																	BgL_testz00_547 = ((bool_t) 0);
																}
															else
																{	/* Tools/progn.scm 101 */
																	obj_t BgL_auxz00_552;

																	BgL_auxz00_552 = CDR(BgL_lz00_191);
																	BgL_testz00_547 = PAIRP(BgL_auxz00_552);
																}
														}
													if (BgL_testz00_547)
														{
															obj_t BgL_lz00_555;

															BgL_lz00_555 = CDR(BgL_lz00_191);
															BgL_lz00_191 = BgL_lz00_555;
															goto BgL_zc3anonymousza31573ze3z83_193;
														}
													else
														{	/* Tools/progn.scm 103 */
															obj_t BgL_arg1587z00_207;

															obj_t BgL_arg1588z00_208;

															BgL_arg1587z00_207 = CDR(BgL_lz00_191);
															BgL_arg1588z00_208 =
																MAKE_PAIR(BgL_bz00_204, BgL_resz00_192);
															{
																obj_t BgL_resz00_560;

																obj_t BgL_lz00_559;

																BgL_lz00_559 = BgL_arg1587z00_207;
																BgL_resz00_560 = BgL_arg1588z00_208;
																BgL_resz00_192 = BgL_resz00_560;
																BgL_lz00_191 = BgL_lz00_559;
																goto BgL_zc3anonymousza31573ze3z83_193;
															}
														}
												}
											}
										else
											{	/* Tools/progn.scm 99 */
												return
													BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF
													(((long) 1)), BGl_string1644z00zztools_prognz00,
													BgL_begz00_16);
		}}}}}}
	}



/* _normalize-begin */
	obj_t BGl__normaliza7ezd2beginz75zztools_prognz00(obj_t BgL_envz00_396,
		obj_t BgL_begz00_397)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 75 */
			return BGl_normaliza7ezd2beginz75zztools_prognz00(BgL_begz00_397);
		}
	}



/* normalize-progn/loc */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t
		BgL_bodyza2za2_17, obj_t BgL_locz00_18)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 110 */
			{	/* Tools/progn.scm 111 */
				obj_t BgL_nbodyz00_214;

				BgL_nbodyz00_214 = BGl_expandzd2prognzd2zz__prognz00(BgL_bodyza2za2_17);
				if (CBOOL(BgL_locz00_18))
					{	/* Tools/progn.scm 113 */
						if (EXTENDED_PAIRP(BgL_nbodyz00_214))
							{	/* Tools/progn.scm 115 */
								return BgL_nbodyz00_214;
							}
						else
							{	/* Tools/progn.scm 115 */
								if (PAIRP(BgL_nbodyz00_214))
									{	/* Tools/progn.scm 118 */
										obj_t BgL_arg1596z00_217;

										obj_t BgL_arg1597z00_218;

										BgL_arg1596z00_217 = CAR(BgL_nbodyz00_214);
										BgL_arg1597z00_218 = CDR(BgL_nbodyz00_214);
										{	/* Tools/progn.scm 118 */
											obj_t BgL_res1638z00_359;

											BgL_res1638z00_359 =
												MAKE_EXTENDED_PAIR(BgL_arg1596z00_217,
												BgL_arg1597z00_218, BgL_locz00_18);
											return BgL_res1638z00_359;
										}
									}
								else
									{	/* Tools/progn.scm 120 */
										obj_t BgL_arg1598z00_219;

										obj_t BgL_arg1599z00_220;

										BgL_arg1598z00_219 = CNST_TABLE_REF(((long) 0));
										{	/* Tools/progn.scm 120 */
											obj_t BgL_list1600z00_221;

											BgL_list1600z00_221 = MAKE_PAIR(BgL_nbodyz00_214, BNIL);
											BgL_arg1599z00_220 = BgL_list1600z00_221;
										}
										{	/* Tools/progn.scm 120 */
											obj_t BgL_res1640z00_365;

											BgL_res1640z00_365 =
												MAKE_EXTENDED_PAIR(BgL_arg1598z00_219,
												BgL_arg1599z00_220, BgL_locz00_18);
											return BgL_res1640z00_365;
										}
									}
							}
					}
				else
					{	/* Tools/progn.scm 113 */
						return BgL_nbodyz00_214;
					}
			}
		}
	}



/* _normalize-progn/loc */
	obj_t BGl__normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t BgL_envz00_398,
		obj_t BgL_bodyza2za2_399, obj_t BgL_locz00_400)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 110 */
			return
				BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyza2za2_399,
				BgL_locz00_400);
		}
	}



/* emap */
	BGL_EXPORTED_DEF obj_t BGl_emapz00zztools_prognz00(obj_t BgL_fz00_19,
		obj_t BgL_l0z00_20)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 125 */
			return
				BGl_loopz00zztools_prognz00(BgL_fz00_19, BgL_l0z00_20, BgL_l0z00_20);
		}
	}



/* loop */
	obj_t BGl_loopz00zztools_prognz00(obj_t BgL_fz00_409, obj_t BgL_l0z00_408,
		obj_t BgL_lz00_223)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 126 */
			if (NULLP(BgL_lz00_223))
				{	/* Tools/progn.scm 128 */
					return BNIL;
				}
			else
				{	/* Tools/progn.scm 128 */
					if (EXTENDED_PAIRP(BgL_lz00_223))
						{	/* Tools/progn.scm 131 */
							obj_t BgL_arg1604z00_227;

							obj_t BgL_arg1605z00_228;

							obj_t BgL_arg1606z00_229;

							{	/* Tools/progn.scm 131 */
								obj_t BgL_arg1607z00_230;

								BgL_arg1607z00_230 = CAR(BgL_lz00_223);
								BgL_arg1604z00_227 =
									PROCEDURE_ENTRY(BgL_fz00_409) (BgL_fz00_409,
									BgL_arg1607z00_230, BEOA);
							}
							BgL_arg1605z00_228 =
								BGl_loopz00zztools_prognz00(BgL_fz00_409, BgL_l0z00_408,
								CDR(BgL_lz00_223));
							BgL_arg1606z00_229 = CER(BgL_lz00_223);
							{	/* Tools/progn.scm 131 */
								obj_t BgL_res1641z00_374;

								BgL_res1641z00_374 =
									MAKE_EXTENDED_PAIR(BgL_arg1604z00_227, BgL_arg1605z00_228,
									BgL_arg1606z00_229);
								return BgL_res1641z00_374;
							}
						}
					else
						{	/* Tools/progn.scm 130 */
							if (PAIRP(BgL_lz00_223))
								{	/* Tools/progn.scm 133 */
									obj_t BgL_arg1610z00_233;

									obj_t BgL_arg1611z00_234;

									{	/* Tools/progn.scm 133 */
										obj_t BgL_arg1613z00_235;

										BgL_arg1613z00_235 = CAR(BgL_lz00_223);
										BgL_arg1610z00_233 =
											PROCEDURE_ENTRY(BgL_fz00_409) (BgL_fz00_409,
											BgL_arg1613z00_235, BEOA);
									}
									BgL_arg1611z00_234 =
										BGl_loopz00zztools_prognz00(BgL_fz00_409, BgL_l0z00_408,
										CDR(BgL_lz00_223));
									return MAKE_PAIR(BgL_arg1610z00_233, BgL_arg1611z00_234);
								}
							else
								{	/* Tools/progn.scm 132 */
									return
										BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
												(long) 2)), BGl_string1645z00zztools_prognz00,
										BgL_l0z00_408);
		}}}}
	}



/* _emap */
	obj_t BGl__emapz00zztools_prognz00(obj_t BgL_envz00_401, obj_t BgL_fz00_402,
		obj_t BgL_l0z00_403)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 125 */
			return BGl_emapz00zztools_prognz00(BgL_fz00_402, BgL_l0z00_403);
		}
	}



/* progn-first-expression */
	BGL_EXPORTED_DEF obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t
		BgL_expz00_21)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 142 */
			{
				obj_t BgL_expz00_239;

				BgL_expz00_239 = BgL_expz00_21;
			BgL_zc3anonymousza31615ze3z83_240:
				if (PAIRP(BgL_expz00_239))
					{	/* Tools/progn.scm 143 */
						if ((CAR(BgL_expz00_239) == CNST_TABLE_REF(((long) 0))))
							{	/* Tools/progn.scm 143 */
								if (NULLP(CDR(BgL_expz00_239)))
									{	/* Tools/progn.scm 143 */
										return BFALSE;
									}
								else
									{	/* Tools/progn.scm 143 */
										obj_t BgL_cdrzd21441zd2_249;

										BgL_cdrzd21441zd2_249 = CDR(BgL_expz00_239);
										if (PAIRP(BgL_cdrzd21441zd2_249))
											{
												obj_t BgL_expz00_613;

												BgL_expz00_613 = CAR(BgL_cdrzd21441zd2_249);
												BgL_expz00_239 = BgL_expz00_613;
												goto BgL_zc3anonymousza31615ze3z83_240;
											}
										else
											{	/* Tools/progn.scm 143 */
												return BgL_expz00_239;
											}
									}
							}
						else
							{	/* Tools/progn.scm 143 */
								return BgL_expz00_239;
							}
					}
				else
					{	/* Tools/progn.scm 143 */
						return BgL_expz00_239;
					}
			}
		}
	}



/* _progn-first-expression */
	obj_t BGl__prognzd2firstzd2expressionz00zztools_prognz00(obj_t BgL_envz00_404,
		obj_t BgL_expz00_405)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 142 */
			return BGl_prognzd2firstzd2expressionz00zztools_prognz00(BgL_expz00_405);
		}
	}



/* progn-tail-expressions */
	BGL_EXPORTED_DEF obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t
		BgL_expz00_22)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 157 */
			{
				obj_t BgL_expz00_257;

				BgL_expz00_257 = BgL_expz00_22;
				if (PAIRP(BgL_expz00_257))
					{	/* Tools/progn.scm 158 */
						if ((CAR(BgL_expz00_257) == CNST_TABLE_REF(((long) 0))))
							{	/* Tools/progn.scm 158 */
								if (NULLP(CDR(BgL_expz00_257)))
									{	/* Tools/progn.scm 158 */
										return BNIL;
									}
								else
									{	/* Tools/progn.scm 158 */
										obj_t BgL_cdrzd21460zd2_267;

										BgL_cdrzd21460zd2_267 = CDR(BgL_expz00_257);
										if (PAIRP(BgL_cdrzd21460zd2_267))
											{	/* Tools/progn.scm 158 */
												return CDR(BgL_cdrzd21460zd2_267);
											}
										else
											{	/* Tools/progn.scm 158 */
												return BNIL;
											}
									}
							}
						else
							{	/* Tools/progn.scm 158 */
								return BNIL;
							}
					}
				else
					{	/* Tools/progn.scm 158 */
						return BNIL;
					}
			}
		}
	}



/* _progn-tail-expressions */
	obj_t BGl__prognzd2tailzd2expressionsz00zztools_prognz00(obj_t BgL_envz00_406,
		obj_t BgL_expz00_407)
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 157 */
			return BGl_prognzd2tailzd2expressionsz00zztools_prognz00(BgL_expz00_407);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_prognz00()
	{
		AN_OBJECT;
		{	/* Tools/progn.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1646z00zztools_prognz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1646z00zztools_prognz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1646z00zztools_prognz00));
		}
	}

#ifdef __cplusplus
}
#endif
