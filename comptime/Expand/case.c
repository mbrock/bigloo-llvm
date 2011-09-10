/*===========================================================================*/
/*   (Expand/case.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/case.scm)*/
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
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_casez00 = BUNSPEC;
	static obj_t BGl_dozd2genericzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_casez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopz72z72z00zzexpand_casez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_casez00();
	static obj_t BGl_generalz00zzexpand_casez00(obj_t, obj_t);
	static obj_t BGl_dozd2typedzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_casez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2casezd2zzexpand_casez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_casez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2casezd2zzexpand_casez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00;
	static obj_t BGl_loopz00zzexpand_casez00(obj_t);
	static obj_t BGl_casezd2typezd2zzexpand_casez00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zzexpand_casez00(obj_t, obj_t);
	static bool_t BGl_typezd2matchzf3z21zzexpand_casez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t
		BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_dozd2cnstzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_casez00();
	static obj_t BGl_typezd2testzd2zzexpand_casez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_casez00();
	static obj_t __cnst[26];


	   
		 
		DEFINE_STRING(BGl_string2752z00zzexpand_casez00,
		BgL_bgl_string2752za700za7za7e2762za7, "case", 4);
	      DEFINE_STRING(BGl_string2753z00zzexpand_casez00,
		BgL_bgl_string2753za700za7za7e2763za7, "Illegal `case' form", 19);
	      DEFINE_STRING(BGl_string2754z00zzexpand_casez00,
		BgL_bgl_string2754za700za7za7e2764za7, "case_else", 9);
	      DEFINE_STRING(BGl_string2755z00zzexpand_casez00,
		BgL_bgl_string2755za700za7za7e2765za7, "Illegal `case' clause", 21);
	      DEFINE_STRING(BGl_string2756z00zzexpand_casez00,
		BgL_bgl_string2756za700za7za7e2766za7, "type-test", 9);
	      DEFINE_STRING(BGl_string2757z00zzexpand_casez00,
		BgL_bgl_string2757za700za7za7e2767za7, "Unknown `case' type", 19);
	      DEFINE_STRING(BGl_string2758z00zzexpand_casez00,
		BgL_bgl_string2758za700za7za7e2768za7, "expand_case", 11);
	      DEFINE_STRING(BGl_string2759z00zzexpand_casez00,
		BgL_bgl_string2759za700za7za7e2769za7,
		"c-keyword? c-symbol? c-fixnum? c-char? labels memv c-eq? or quote eqv? case-value cnst->integer cnst? if let aux else etherogeneous case fail-type keyword symbol cnst char long integer ",
		185);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2casezd2envz00zzexpand_casez00,
		BgL_bgl__expandza7d2caseza7d2770z00, BGl__expandzd2casezd2zzexpand_casez00,
		0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_casez00(long
		BgL_checksumz00_1222, char *BgL_fromz00_1223)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_casez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_casez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_casez00();
					BGl_cnstzd2initzd2zzexpand_casez00();
					BGl_importedzd2moduleszd2initz00zzexpand_casez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_casez00()
	{
		AN_OBJECT;
		{	/* Expand/case.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_case");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_casez00()
	{
		AN_OBJECT;
		{	/* Expand/case.scm 15 */
			{	/* Expand/case.scm 15 */
				obj_t BgL_cportz00_1214;

				BgL_cportz00_1214 =
					bgl_open_input_string(BGl_string2759z00zzexpand_casez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1215;

					BgL_iz00_1215 = ((long) 25);
				BgL_loopz00_1216:
					if ((BgL_iz00_1215 == ((long) -1)))
						{	/* Expand/case.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/case.scm 15 */
							{	/* Expand/case.scm 15 */
								obj_t BgL_arg2761z00_1218;

								{	/* Expand/case.scm 15 */

									{	/* Expand/case.scm 15 */
										obj_t BgL_locationz00_1220;

										BgL_locationz00_1220 = BBOOL(((bool_t) 0));
										{	/* Expand/case.scm 15 */

											BgL_arg2761z00_1218 =
												BGl_readz00zz__readerz00(BgL_cportz00_1214,
												BgL_locationz00_1220);
										}
									}
								}
								{	/* Expand/case.scm 15 */
									int BgL_auxz00_1241;

									BgL_auxz00_1241 = (int) (BgL_iz00_1215);
									CNST_TABLE_SET(BgL_auxz00_1241, BgL_arg2761z00_1218);
							}}
							{	/* Expand/case.scm 15 */
								int BgL_auxz00_1221;

								BgL_auxz00_1221 = (int) ((BgL_iz00_1215 - ((long) 1)));
								{
									long BgL_iz00_1246;

									BgL_iz00_1246 = (long) (BgL_auxz00_1221);
									BgL_iz00_1215 = BgL_iz00_1246;
									goto BgL_loopz00_1216;
								}
							}
						}
				}
			}
		}
	}



/* expand-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2casezd2zzexpand_casez00(obj_t BgL_xz00_1,
		obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 33 */
			{
				obj_t BgL_valuez00_178;

				obj_t BgL_clausesz00_179;

				if (PAIRP(BgL_xz00_1))
					{	/* Expand/case.scm 35 */
						obj_t BgL_cdrzd21655zd2_184;

						BgL_cdrzd21655zd2_184 = CDR(BgL_xz00_1);
						if (PAIRP(BgL_cdrzd21655zd2_184))
							{	/* Expand/case.scm 35 */
								BgL_valuez00_178 = CAR(BgL_cdrzd21655zd2_184);
								BgL_clausesz00_179 = CDR(BgL_cdrzd21655zd2_184);
								{	/* Expand/case.scm 37 */
									obj_t BgL_casezd2valuezd2_188;

									BgL_casezd2valuezd2_188 =
										BGl_casezd2typezd2zzexpand_casez00(BgL_xz00_1,
										BgL_clausesz00_179);
									if ((BgL_casezd2valuezd2_188 == CNST_TABLE_REF(((long) 0))))
										{	/* Expand/case.scm 37 */
											return
												BGl_dozd2typedzd2casez00zzexpand_casez00(CNST_TABLE_REF(
													((long) 1)), BgL_valuez00_178, BgL_clausesz00_179,
												BgL_ez00_2);
										}
									else
										{	/* Expand/case.scm 37 */
											if (
												(BgL_casezd2valuezd2_188 == CNST_TABLE_REF(((long) 2))))
												{	/* Expand/case.scm 37 */
													return
														BGl_dozd2typedzd2casez00zzexpand_casez00
														(CNST_TABLE_REF(((long) 2)), BgL_valuez00_178,
														BgL_clausesz00_179, BgL_ez00_2);
												}
											else
												{	/* Expand/case.scm 37 */
													if (
														(BgL_casezd2valuezd2_188 ==
															CNST_TABLE_REF(((long) 3))))
														{	/* Expand/case.scm 37 */
															return
																BGl_dozd2cnstzd2casez00zzexpand_casez00
																(BgL_valuez00_178, BgL_clausesz00_179,
																BgL_ez00_2);
														}
													else
														{	/* Expand/case.scm 37 */
															if (
																(BgL_casezd2valuezd2_188 ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/case.scm 37 */
																	{	/* Expand/case.scm 49 */
																		obj_t BgL_typez00_956;

																		BgL_typez00_956 =
																			CNST_TABLE_REF(((long) 4));
																		if (CBOOL
																			(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00))
																			{	/* Expand/case.scm 49 */
																				return
																					BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00
																					(BgL_typez00_956, BgL_valuez00_178,
																					BgL_clausesz00_179, BgL_ez00_2);
																			}
																		else
																			{	/* Expand/case.scm 49 */
																				return
																					BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
																					(BgL_valuez00_178, BgL_clausesz00_179,
																					BgL_ez00_2);
																			}
																	}
																}
															else
																{	/* Expand/case.scm 37 */
																	if (
																		(BgL_casezd2valuezd2_188 ==
																			CNST_TABLE_REF(((long) 5))))
																		{	/* Expand/case.scm 37 */
																			{	/* Expand/case.scm 52 */
																				obj_t BgL_typez00_962;

																				BgL_typez00_962 =
																					CNST_TABLE_REF(((long) 5));
																				if (CBOOL
																					(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00))
																					{	/* Expand/case.scm 52 */
																						return
																							BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00
																							(BgL_typez00_962,
																							BgL_valuez00_178,
																							BgL_clausesz00_179, BgL_ez00_2);
																					}
																				else
																					{	/* Expand/case.scm 52 */
																						return
																							BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
																							(BgL_valuez00_178,
																							BgL_clausesz00_179, BgL_ez00_2);
																					}
																			}
																		}
																	else
																		{	/* Expand/case.scm 37 */
																			return
																				BGl_dozd2genericzd2casez00zzexpand_casez00
																				(BgL_valuez00_178, BgL_clausesz00_179,
																				BgL_ez00_2);
																		}
																}
														}
												}
										}
								}
							}
						else
							{	/* Expand/case.scm 35 */
							BgL_tagzd21648zd2_181:
								return
									BGl_errorz00zz__errorz00(BGl_string2752z00zzexpand_casez00,
									BGl_string2753z00zzexpand_casez00, BgL_xz00_1);
							}
					}
				else
					{	/* Expand/case.scm 35 */
						goto BgL_tagzd21648zd2_181;
					}
			}
		}
	}



/* _expand-case */
	obj_t BGl__expandzd2casezd2zzexpand_casez00(obj_t BgL_envz00_1208,
		obj_t BgL_xz00_1209, obj_t BgL_ez00_1210)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 33 */
			return BGl_expandzd2casezd2zzexpand_casez00(BgL_xz00_1209, BgL_ez00_1210);
		}
	}



/* case-type */
	obj_t BGl_casezd2typezd2zzexpand_casez00(obj_t BgL_xz00_3,
		obj_t BgL_clausesz00_4)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 70 */
			{
				obj_t BgL_datumz00_245;

				obj_t BgL_datumsz00_252;

				{
					obj_t BgL_clausesz00_200;

					obj_t BgL_typez00_201;

					BgL_clausesz00_200 = BgL_clausesz00_4;
					BgL_typez00_201 = BNIL;
				BgL_zc3anonymousza31650ze3z83_202:
					if (NULLP(BgL_clausesz00_200))
						{	/* Expand/case.scm 113 */
							return BgL_typez00_201;
						}
					else
						{
							obj_t BgL_expsz00_204;

							obj_t BgL_datumz00_206;

							obj_t BgL_expsz00_207;

							{	/* Expand/case.scm 115 */
								obj_t BgL_ezd21665zd2_210;

								BgL_ezd21665zd2_210 = CAR(BgL_clausesz00_200);
								if (PAIRP(BgL_ezd21665zd2_210))
									{	/* Expand/case.scm 115 */
										if (
											(CAR(BgL_ezd21665zd2_210) == CNST_TABLE_REF(((long) 9))))
											{	/* Expand/case.scm 115 */
												BgL_expsz00_204 = CDR(BgL_ezd21665zd2_210);
												{	/* Expand/case.scm 117 */
													bool_t BgL_testz00_1298;

													if (NULLP(CDR(BgL_clausesz00_200)))
														{	/* Expand/case.scm 117 */
															BgL_testz00_1298 = NULLP(BgL_expsz00_204);
														}
													else
														{	/* Expand/case.scm 117 */
															BgL_testz00_1298 = ((bool_t) 1);
														}
													if (BgL_testz00_1298)
														{	/* Expand/case.scm 117 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2752z00zzexpand_casez00,
																BGl_string2753z00zzexpand_casez00, BgL_xz00_3);
														}
													else
														{	/* Expand/case.scm 117 */
															return BgL_typez00_201;
														}
												}
											}
										else
											{	/* Expand/case.scm 115 */
												obj_t BgL_carzd21676zd2_214;

												BgL_carzd21676zd2_214 = CAR(BgL_ezd21665zd2_210);
												if (NULLP(BgL_carzd21676zd2_214))
													{	/* Expand/case.scm 115 */
													BgL_tagzd21664zd2_209:
														return
															BGl_errorz00zz__errorz00
															(BGl_string2752z00zzexpand_casez00,
															BGl_string2753z00zzexpand_casez00, BgL_xz00_3);
													}
												else
													{	/* Expand/case.scm 115 */
														BgL_datumz00_206 = BgL_carzd21676zd2_214;
														BgL_expsz00_207 = CDR(BgL_ezd21665zd2_210);
														if (NULLP(BgL_expsz00_207))
															{	/* Expand/case.scm 122 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2752z00zzexpand_casez00,
																	BGl_string2753z00zzexpand_casez00,
																	BgL_xz00_3);
															}
														else
															{	/* Expand/case.scm 124 */
																obj_t BgL_dtypez00_223;

																BgL_datumsz00_252 = BgL_datumz00_206;
																{
																	obj_t BgL_datumsz00_256;

																	obj_t BgL_typez00_257;

																	BgL_datumsz00_256 = BgL_datumsz00_252;
																	BgL_typez00_257 = BNIL;
																BgL_zc3anonymousza31681ze3z83_258:
																	if (NULLP(BgL_datumsz00_256))
																		{	/* Expand/case.scm 100 */
																			BgL_dtypez00_223 = BgL_typez00_257;
																		}
																	else
																		{	/* Expand/case.scm 100 */
																			if (PAIRP(BgL_datumsz00_256))
																				{	/* Expand/case.scm 106 */
																					obj_t BgL_dtypez00_261;

																					BgL_datumz00_245 =
																						CAR(BgL_datumsz00_256);
																					if (INTEGERP(BgL_datumz00_245))
																						{	/* Expand/case.scm 89 */
																							BgL_dtypez00_261 =
																								CNST_TABLE_REF(((long) 0));
																						}
																					else
																						{	/* Expand/case.scm 89 */
																							if (CHARP(BgL_datumz00_245))
																								{	/* Expand/case.scm 90 */
																									BgL_dtypez00_261 =
																										CNST_TABLE_REF(((long) 2));
																								}
																							else
																								{	/* Expand/case.scm 90 */
																									if (CNSTP(BgL_datumz00_245))
																										{	/* Expand/case.scm 91 */
																											BgL_dtypez00_261 =
																												CNST_TABLE_REF(((long)
																													3));
																										}
																									else
																										{	/* Expand/case.scm 91 */
																											if (SYMBOLP
																												(BgL_datumz00_245))
																												{	/* Expand/case.scm 92 */
																													BgL_dtypez00_261 =
																														CNST_TABLE_REF((
																															(long) 4));
																												}
																											else
																												{	/* Expand/case.scm 92 */
																													if (KEYWORDP
																														(BgL_datumz00_245))
																														{	/* Expand/case.scm 93 */
																															BgL_dtypez00_261 =
																																CNST_TABLE_REF((
																																	(long) 5));
																														}
																													else
																														{	/* Expand/case.scm 93 */
																															BgL_dtypez00_261 =
																																CNST_TABLE_REF((
																																	(long) 6));
																						}}}}}
																					if (BGl_typezd2matchzf3z21zzexpand_casez00(BgL_dtypez00_261, BgL_typez00_257))
																						{
																							obj_t BgL_typez00_1337;

																							obj_t BgL_datumsz00_1335;

																							BgL_datumsz00_1335 =
																								CDR(BgL_datumsz00_256);
																							BgL_typez00_1337 =
																								BGl_generalz00zzexpand_casez00
																								(BgL_dtypez00_261,
																								BgL_typez00_257);
																							BgL_typez00_257 =
																								BgL_typez00_1337;
																							BgL_datumsz00_256 =
																								BgL_datumsz00_1335;
																							goto
																								BgL_zc3anonymousza31681ze3z83_258;
																						}
																					else
																						{	/* Expand/case.scm 107 */
																							BgL_dtypez00_223 =
																								CNST_TABLE_REF(((long) 6));
																				}}
																			else
																				{	/* Expand/case.scm 102 */
																					BGl_errorz00zz__errorz00
																						(CNST_TABLE_REF(((long) 7)),
																						BGl_string2753z00zzexpand_casez00,
																						BgL_xz00_3);
																					BgL_dtypez00_223 = BFALSE;
																}}}
																if (BGl_typezd2matchzf3z21zzexpand_casez00
																	(BgL_dtypez00_223, BgL_typez00_201))
																	{
																		obj_t BgL_typez00_1346;

																		obj_t BgL_clausesz00_1344;

																		BgL_clausesz00_1344 =
																			CDR(BgL_clausesz00_200);
																		BgL_typez00_1346 =
																			BGl_generalz00zzexpand_casez00
																			(BgL_dtypez00_223, BgL_typez00_201);
																		BgL_typez00_201 = BgL_typez00_1346;
																		BgL_clausesz00_200 = BgL_clausesz00_1344;
																		goto BgL_zc3anonymousza31650ze3z83_202;
																	}
																else
																	{	/* Expand/case.scm 125 */
																		return CNST_TABLE_REF(((long) 8));
									}}}}}
								else
									{	/* Expand/case.scm 115 */
										goto BgL_tagzd21664zd2_209;
									}
							}
						}
				}
			}
		}
	}



/* type-match? */
	bool_t BGl_typezd2matchzf3z21zzexpand_casez00(obj_t BgL_type1z00_228,
		obj_t BgL_type2z00_229)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 78 */
			{	/* Expand/case.scm 73 */
				bool_t BgL__ortest_1604z00_231;

				BgL__ortest_1604z00_231 = NULLP(BgL_type1z00_228);
				if (BgL__ortest_1604z00_231)
					{	/* Expand/case.scm 73 */
						return BgL__ortest_1604z00_231;
					}
				else
					{	/* Expand/case.scm 74 */
						bool_t BgL__ortest_1605z00_232;

						BgL__ortest_1605z00_232 = NULLP(BgL_type2z00_229);
						if (BgL__ortest_1605z00_232)
							{	/* Expand/case.scm 74 */
								return BgL__ortest_1605z00_232;
							}
						else
							{	/* Expand/case.scm 75 */
								bool_t BgL_testz00_1354;

								if ((BgL_type1z00_228 == CNST_TABLE_REF(((long) 6))))
									{	/* Expand/case.scm 75 */
										BgL_testz00_1354 = ((bool_t) 0);
									}
								else
									{	/* Expand/case.scm 75 */
										BgL_testz00_1354 = ((bool_t) 1);
									}
								if (BgL_testz00_1354)
									{	/* Expand/case.scm 76 */
										bool_t BgL__ortest_1607z00_234;

										BgL__ortest_1607z00_234 =
											(BgL_type1z00_228 == BgL_type2z00_229);
										if (BgL__ortest_1607z00_234)
											{	/* Expand/case.scm 76 */
												return BgL__ortest_1607z00_234;
											}
										else
											{	/* Expand/case.scm 77 */
												bool_t BgL__ortest_1608z00_235;

												if ((BgL_type1z00_228 == CNST_TABLE_REF(((long) 3))))
													{	/* Expand/case.scm 77 */
														BgL__ortest_1608z00_235 =
															(BgL_type2z00_229 == CNST_TABLE_REF(((long) 2)));
													}
												else
													{	/* Expand/case.scm 77 */
														BgL__ortest_1608z00_235 = ((bool_t) 0);
													}
												if (BgL__ortest_1608z00_235)
													{	/* Expand/case.scm 77 */
														return BgL__ortest_1608z00_235;
													}
												else
													{	/* Expand/case.scm 77 */
														if (
															(BgL_type1z00_228 == CNST_TABLE_REF(((long) 2))))
															{	/* Expand/case.scm 78 */
																return
																	(BgL_type2z00_229 ==
																	CNST_TABLE_REF(((long) 3)));
															}
														else
															{	/* Expand/case.scm 78 */
																return ((bool_t) 0);
															}
													}
											}
									}
								else
									{	/* Expand/case.scm 75 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* general */
	obj_t BGl_generalz00zzexpand_casez00(obj_t BgL_type1z00_239,
		obj_t BgL_type2z00_240)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 85 */
			if ((BgL_type1z00_239 == BgL_type2z00_240))
				{	/* Expand/case.scm 82 */
					return BgL_type1z00_239;
				}
			else
				{	/* Expand/case.scm 82 */
					if ((BgL_type1z00_239 == CNST_TABLE_REF(((long) 3))))
						{	/* Expand/case.scm 83 */
							return BgL_type1z00_239;
						}
					else
						{	/* Expand/case.scm 83 */
							if (NULLP(BgL_type2z00_240))
								{	/* Expand/case.scm 84 */
									return BgL_type1z00_239;
								}
							else
								{	/* Expand/case.scm 84 */
									return BgL_type2z00_240;
								}
						}
				}
		}
	}



/* do-typed-case */
	obj_t BGl_dozd2typedzd2casez00zzexpand_casez00(obj_t BgL_typez00_5,
		obj_t BgL_valuez00_6, obj_t BgL_clausesz00_7, obj_t BgL_ez00_8)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 135 */
			{	/* Expand/case.scm 136 */
				obj_t BgL_elsezd2bodyzd2_271;

				{
					obj_t BgL_clausesz00_346;

					BgL_clausesz00_346 = BgL_clausesz00_7;
				BgL_zc3anonymousza31754ze3z83_347:
					if (NULLP(BgL_clausesz00_346))
						{	/* Expand/case.scm 138 */
							obj_t BgL_list1756z00_349;

							BgL_list1756z00_349 = MAKE_PAIR(BUNSPEC, BNIL);
							BgL_elsezd2bodyzd2_271 = BgL_list1756z00_349;
						}
					else
						{
							obj_t BgL_bodyz00_351;

							{	/* Expand/case.scm 139 */
								obj_t BgL_ezd21689zd2_354;

								BgL_ezd21689zd2_354 = CAR(BgL_clausesz00_346);
								if (NULLP(BgL_ezd21689zd2_354))
									{	/* Expand/case.scm 139 */
										BgL_elsezd2bodyzd2_271 = BUNSPEC;
									}
								else
									{	/* Expand/case.scm 139 */
										if (PAIRP(BgL_ezd21689zd2_354))
											{	/* Expand/case.scm 139 */
												if (
													(CAR(BgL_ezd21689zd2_354) ==
														CNST_TABLE_REF(((long) 9))))
													{	/* Expand/case.scm 139 */
														BgL_bodyz00_351 = CDR(BgL_ezd21689zd2_354);
														if (NULLP(BgL_bodyz00_351))
															{	/* Expand/case.scm 143 */
																BgL_elsezd2bodyzd2_271 = BNIL;
															}
														else
															{	/* Expand/case.scm 143 */
																obj_t BgL_head1615z00_363;

																BgL_head1615z00_363 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l1613z00_365;

																	obj_t BgL_tail1616z00_366;

																	BgL_l1613z00_365 = BgL_bodyz00_351;
																	BgL_tail1616z00_366 = BgL_head1615z00_363;
																BgL_zc3anonymousza31770ze3z83_367:
																	if (NULLP(BgL_l1613z00_365))
																		{	/* Expand/case.scm 143 */
																			BgL_elsezd2bodyzd2_271 =
																				CDR(BgL_head1615z00_363);
																		}
																	else
																		{	/* Expand/case.scm 143 */
																			obj_t BgL_newtail1617z00_369;

																			{	/* Expand/case.scm 143 */
																				obj_t BgL_arg1775z00_371;

																				{	/* Expand/case.scm 143 */
																					obj_t BgL_xz00_373;

																					BgL_xz00_373 = CAR(BgL_l1613z00_365);
																					BgL_arg1775z00_371 =
																						PROCEDURE_ENTRY(BgL_ez00_8)
																						(BgL_ez00_8, BgL_xz00_373,
																						BgL_ez00_8, BEOA);
																				}
																				BgL_newtail1617z00_369 =
																					MAKE_PAIR(BgL_arg1775z00_371, BNIL);
																			}
																			SET_CDR(BgL_tail1616z00_366,
																				BgL_newtail1617z00_369);
																			{
																				obj_t BgL_tail1616z00_1403;

																				obj_t BgL_l1613z00_1401;

																				BgL_l1613z00_1401 =
																					CDR(BgL_l1613z00_365);
																				BgL_tail1616z00_1403 =
																					BgL_newtail1617z00_369;
																				BgL_tail1616z00_366 =
																					BgL_tail1616z00_1403;
																				BgL_l1613z00_365 = BgL_l1613z00_1401;
																				goto BgL_zc3anonymousza31770ze3z83_367;
																			}
																		}
																}
															}
													}
												else
													{	/* Expand/case.scm 139 */
													BgL_tagzd21688zd2_353:
														{
															obj_t BgL_clausesz00_1405;

															BgL_clausesz00_1405 = CDR(BgL_clausesz00_346);
															BgL_clausesz00_346 = BgL_clausesz00_1405;
															goto BgL_zc3anonymousza31754ze3z83_347;
														}
													}
											}
										else
											{	/* Expand/case.scm 139 */
												goto BgL_tagzd21688zd2_353;
											}
									}
							}
						}
				}
				{	/* Expand/case.scm 136 */
					obj_t BgL_elsezd2namezd2_272;

					BgL_elsezd2namezd2_272 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_string2754z00zzexpand_casez00));
					{	/* Expand/case.scm 146 */
						obj_t BgL_auxz00_273;

						BgL_auxz00_273 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10))));
						{	/* Expand/case.scm 147 */

							{	/* Expand/case.scm 148 */
								obj_t BgL_casez00_274;

								{	/* Expand/case.scm 148 */
									obj_t BgL_arg1690z00_275;

									obj_t BgL_arg1691z00_276;

									BgL_arg1690z00_275 = CNST_TABLE_REF(((long) 7));
									{	/* Expand/case.scm 150 */
										obj_t BgL_arg1692z00_277;

										BgL_arg1692z00_277 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BGl_loopz72z72z00zzexpand_casez00(BgL_elsezd2namezd2_272,
												BgL_ez00_8, BgL_clausesz00_7), BNIL);
										{	/* Expand/case.scm 148 */
											obj_t BgL_list1693z00_278;

											BgL_list1693z00_278 = MAKE_PAIR(BgL_arg1692z00_277, BNIL);
											BgL_arg1691z00_276 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_273, BgL_list1693z00_278);
									}}
									BgL_casez00_274 =
										MAKE_PAIR(BgL_arg1690z00_275, BgL_arg1691z00_276);
								}
								return
									BGl_typezd2testzd2zzexpand_casez00(BgL_auxz00_273,
									BgL_typez00_5, BgL_valuez00_6, BgL_casez00_274,
									BgL_elsezd2bodyzd2_271, BgL_elsezd2namezd2_272, BgL_ez00_8);
							}
						}
					}
				}
			}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zzexpand_casez00(obj_t BgL_elsezd2namezd2_1213,
		obj_t BgL_ez00_1212, obj_t BgL_clausesz00_282)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 149 */
			if (NULLP(BgL_clausesz00_282))
				{	/* Expand/case.scm 152 */
					obj_t BgL_arg1700z00_285;

					{	/* Expand/case.scm 152 */
						obj_t BgL_arg1702z00_287;

						obj_t BgL_arg1703z00_288;

						BgL_arg1702z00_287 = CNST_TABLE_REF(((long) 9));
						{	/* Expand/case.scm 152 */
							obj_t BgL_list1704z00_289;

							BgL_list1704z00_289 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg1703z00_288 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
								BgL_list1704z00_289);
						}
						BgL_arg1700z00_285 =
							MAKE_PAIR(BgL_arg1702z00_287, BgL_arg1703z00_288);
					}
					return MAKE_PAIR(BgL_arg1700z00_285, BNIL);
				}
			else
				{
					obj_t BgL_bodyz00_291;

					obj_t BgL_datumsz00_293;

					obj_t BgL_bodyz00_294;

					{	/* Expand/case.scm 153 */
						obj_t BgL_ezd21700zd2_297;

						BgL_ezd21700zd2_297 = CAR(BgL_clausesz00_282);
						if (NULLP(BgL_ezd21700zd2_297))
							{	/* Expand/case.scm 153 */
								{	/* Expand/case.scm 155 */
									obj_t BgL_arg1714z00_306;

									{	/* Expand/case.scm 155 */
										obj_t BgL_arg1718z00_308;

										obj_t BgL_arg1719z00_309;

										BgL_arg1718z00_308 = CNST_TABLE_REF(((long) 9));
										{	/* Expand/case.scm 155 */
											obj_t BgL_list1720z00_310;

											BgL_list1720z00_310 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1719z00_309 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BUNSPEC,
												BgL_list1720z00_310);
										}
										BgL_arg1714z00_306 =
											MAKE_PAIR(BgL_arg1718z00_308, BgL_arg1719z00_309);
									}
									return MAKE_PAIR(BgL_arg1714z00_306, BNIL);
								}
							}
						else
							{	/* Expand/case.scm 153 */
								if (PAIRP(BgL_ezd21700zd2_297))
									{	/* Expand/case.scm 153 */
										if (
											(CAR(BgL_ezd21700zd2_297) == CNST_TABLE_REF(((long) 9))))
											{	/* Expand/case.scm 153 */
												BgL_bodyz00_291 = CDR(BgL_ezd21700zd2_297);
												{	/* Expand/case.scm 157 */
													obj_t BgL_arg1724z00_311;

													{	/* Expand/case.scm 157 */
														obj_t BgL_arg1729z00_313;

														obj_t BgL_arg1730z00_314;

														BgL_arg1729z00_313 = CNST_TABLE_REF(((long) 9));
														{	/* Expand/case.scm 157 */
															obj_t BgL_arg1731z00_315;

															BgL_arg1731z00_315 =
																MAKE_PAIR(BgL_elsezd2namezd2_1213, BNIL);
															{	/* Expand/case.scm 157 */
																obj_t BgL_list1733z00_317;

																BgL_list1733z00_317 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1730z00_314 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1731z00_315, BgL_list1733z00_317);
														}}
														BgL_arg1724z00_311 =
															MAKE_PAIR(BgL_arg1729z00_313, BgL_arg1730z00_314);
													}
													return MAKE_PAIR(BgL_arg1724z00_311, BNIL);
												}
											}
										else
											{	/* Expand/case.scm 153 */
												BgL_datumsz00_293 = CAR(BgL_ezd21700zd2_297);
												BgL_bodyz00_294 = CDR(BgL_ezd21700zd2_297);
												if (NULLP(BgL_bodyz00_294))
													{	/* Expand/case.scm 159 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2752z00zzexpand_casez00,
															BGl_string2755z00zzexpand_casez00,
															CAR(BgL_clausesz00_282));
													}
												else
													{	/* Expand/case.scm 164 */
														obj_t BgL_arg1739z00_322;

														obj_t BgL_arg1740z00_323;

														{	/* Expand/case.scm 164 */
															obj_t BgL_arg1741z00_324;

															{	/* Expand/case.scm 164 */
																obj_t BgL_arg1742z00_325;

																{	/* Expand/case.scm 164 */
																	obj_t BgL_head1620z00_329;

																	BgL_head1620z00_329 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_l1618z00_331;

																		obj_t BgL_tail1621z00_332;

																		BgL_l1618z00_331 = BgL_bodyz00_294;
																		BgL_tail1621z00_332 = BgL_head1620z00_329;
																	BgL_zc3anonymousza31745ze3z83_333:
																		if (NULLP(BgL_l1618z00_331))
																			{	/* Expand/case.scm 164 */
																				BgL_arg1742z00_325 =
																					CDR(BgL_head1620z00_329);
																			}
																		else
																			{	/* Expand/case.scm 164 */
																				obj_t BgL_newtail1622z00_335;

																				{	/* Expand/case.scm 164 */
																					obj_t BgL_arg1748z00_337;

																					{	/* Expand/case.scm 164 */
																						obj_t BgL_xz00_339;

																						BgL_xz00_339 =
																							CAR(BgL_l1618z00_331);
																						BgL_arg1748z00_337 =
																							PROCEDURE_ENTRY(BgL_ez00_1212)
																							(BgL_ez00_1212, BgL_xz00_339,
																							BgL_ez00_1212, BEOA);
																					}
																					BgL_newtail1622z00_335 =
																						MAKE_PAIR(BgL_arg1748z00_337, BNIL);
																				}
																				SET_CDR(BgL_tail1621z00_332,
																					BgL_newtail1622z00_335);
																				{
																					obj_t BgL_tail1621z00_1462;

																					obj_t BgL_l1618z00_1460;

																					BgL_l1618z00_1460 =
																						CDR(BgL_l1618z00_331);
																					BgL_tail1621z00_1462 =
																						BgL_newtail1622z00_335;
																					BgL_tail1621z00_332 =
																						BgL_tail1621z00_1462;
																					BgL_l1618z00_331 = BgL_l1618z00_1460;
																					goto
																						BgL_zc3anonymousza31745ze3z83_333;
																				}
																			}
																	}
																}
																BgL_arg1741z00_324 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg1742z00_325, BNIL);
															}
															BgL_arg1739z00_322 =
																MAKE_PAIR(BgL_datumsz00_293,
																BgL_arg1741z00_324);
														}
														BgL_arg1740z00_323 =
															BGl_loopz72z72z00zzexpand_casez00
															(BgL_elsezd2namezd2_1213, BgL_ez00_1212,
															CDR(BgL_clausesz00_282));
														return MAKE_PAIR(BgL_arg1739z00_322,
															BgL_arg1740z00_323);
													}
											}
									}
								else
									{	/* Expand/case.scm 153 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2752z00zzexpand_casez00,
											BGl_string2753z00zzexpand_casez00, BgL_clausesz00_282);
									}
							}
					}
				}
		}
	}



/* do-cnst-case */
	obj_t BGl_dozd2cnstzd2casez00zzexpand_casez00(obj_t BgL_valuez00_9,
		obj_t BgL_clausesz00_10, obj_t BgL_ez00_11)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 180 */
			{	/* Expand/case.scm 181 */
				obj_t BgL_auxz00_377;

				BgL_auxz00_377 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10))));
				{	/* Expand/case.scm 181 */
					obj_t BgL_valuez00_378;

					{	/* Expand/case.scm 182 */
						obj_t BgL_arg1797z00_408;

						obj_t BgL_arg1798z00_409;

						BgL_arg1797z00_408 = CNST_TABLE_REF(((long) 11));
						{	/* Expand/case.scm 182 */
							obj_t BgL_arg1799z00_410;

							obj_t BgL_arg1800z00_411;

							{	/* Expand/case.scm 182 */
								obj_t BgL_arg1804z00_415;

								{	/* Expand/case.scm 182 */
									obj_t BgL_arg1806z00_417;

									{	/* Expand/case.scm 182 */
										obj_t BgL_list1807z00_418;

										BgL_list1807z00_418 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1806z00_417 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_valuez00_9, BgL_list1807z00_418);
									}
									BgL_arg1804z00_415 =
										MAKE_PAIR(BgL_auxz00_377, BgL_arg1806z00_417);
								}
								BgL_arg1799z00_410 = MAKE_PAIR(BgL_arg1804z00_415, BNIL);
							}
							{	/* Expand/case.scm 183 */
								obj_t BgL_arg1809z00_419;

								obj_t BgL_arg1810z00_420;

								BgL_arg1809z00_419 = CNST_TABLE_REF(((long) 12));
								{	/* Expand/case.scm 183 */
									obj_t BgL_arg1811z00_421;

									obj_t BgL_arg1812z00_422;

									{	/* Expand/case.scm 183 */
										obj_t BgL_arg1819z00_428;

										obj_t BgL_arg1820z00_429;

										BgL_arg1819z00_428 = CNST_TABLE_REF(((long) 13));
										{	/* Expand/case.scm 183 */
											obj_t BgL_list1821z00_430;

											BgL_list1821z00_430 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1820z00_429 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_377, BgL_list1821z00_430);
										}
										BgL_arg1811z00_421 =
											MAKE_PAIR(BgL_arg1819z00_428, BgL_arg1820z00_429);
									}
									{	/* Expand/case.scm 184 */
										obj_t BgL_arg1822z00_431;

										obj_t BgL_arg1823z00_432;

										BgL_arg1822z00_431 = CNST_TABLE_REF(((long) 14));
										{	/* Expand/case.scm 184 */
											obj_t BgL_list1824z00_433;

											BgL_list1824z00_433 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1823z00_432 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_377, BgL_list1824z00_433);
										}
										BgL_arg1812z00_422 =
											MAKE_PAIR(BgL_arg1822z00_431, BgL_arg1823z00_432);
									}
									{	/* Expand/case.scm 183 */
										obj_t BgL_list1816z00_425;

										{	/* Expand/case.scm 183 */
											obj_t BgL_arg1817z00_426;

											{	/* Expand/case.scm 183 */
												obj_t BgL_arg1818z00_427;

												BgL_arg1818z00_427 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1817z00_426 =
													MAKE_PAIR(BINT(((long) -1)), BgL_arg1818z00_427);
											}
											BgL_list1816z00_425 =
												MAKE_PAIR(BgL_arg1812z00_422, BgL_arg1817z00_426);
										}
										BgL_arg1810z00_420 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1811z00_421, BgL_list1816z00_425);
								}}
								BgL_arg1800z00_411 =
									MAKE_PAIR(BgL_arg1809z00_419, BgL_arg1810z00_420);
							}
							{	/* Expand/case.scm 182 */
								obj_t BgL_list1802z00_413;

								{	/* Expand/case.scm 182 */
									obj_t BgL_arg1803z00_414;

									BgL_arg1803z00_414 = MAKE_PAIR(BNIL, BNIL);
									BgL_list1802z00_413 =
										MAKE_PAIR(BgL_arg1800z00_411, BgL_arg1803z00_414);
								}
								BgL_arg1798z00_409 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1799z00_410, BgL_list1802z00_413);
						}}
						BgL_valuez00_378 =
							MAKE_PAIR(BgL_arg1797z00_408, BgL_arg1798z00_409);
					}
					{	/* Expand/case.scm 182 */

						{
							obj_t BgL_cz00_380;

							BgL_cz00_380 = BgL_clausesz00_10;
						BgL_zc3anonymousza31778ze3z83_381:
							if (NULLP(BgL_cz00_380))
								{	/* Expand/case.scm 189 */
									return
										BGl_dozd2typedzd2casez00zzexpand_casez00(CNST_TABLE_REF((
												(long) 1)), BgL_valuez00_378, BgL_clausesz00_10,
										BgL_ez00_11);
								}
							else
								{	/* Expand/case.scm 191 */
									obj_t BgL_clausez00_383;

									BgL_clausez00_383 = CAR(BgL_cz00_380);
									if ((CAR(BgL_clausez00_383) == CNST_TABLE_REF(((long) 9))))
										{	/* Expand/case.scm 192 */
											BFALSE;
										}
									else
										{	/* Expand/case.scm 193 */
											obj_t BgL_arg1782z00_385;

											{	/* Expand/case.scm 193 */
												obj_t BgL_l1623z00_386;

												BgL_l1623z00_386 = CAR(BgL_clausez00_383);
												if (NULLP(BgL_l1623z00_386))
													{	/* Expand/case.scm 193 */
														BgL_arg1782z00_385 = BNIL;
													}
												else
													{	/* Expand/case.scm 193 */
														obj_t BgL_head1625z00_388;

														{	/* Expand/case.scm 193 */
															long BgL_arg1791z00_401;

															BgL_arg1791z00_401 = CCNST(CAR(BgL_l1623z00_386));
															BgL_head1625z00_388 =
																MAKE_PAIR(BINT(BgL_arg1791z00_401), BNIL);
														}
														{	/* Expand/case.scm 193 */
															obj_t BgL_g1628z00_389;

															BgL_g1628z00_389 = CDR(BgL_l1623z00_386);
															{
																obj_t BgL_l1623z00_391;

																obj_t BgL_tail1626z00_392;

																BgL_l1623z00_391 = BgL_g1628z00_389;
																BgL_tail1626z00_392 = BgL_head1625z00_388;
															BgL_zc3anonymousza31784ze3z83_393:
																if (NULLP(BgL_l1623z00_391))
																	{	/* Expand/case.scm 193 */
																		BgL_arg1782z00_385 = BgL_head1625z00_388;
																	}
																else
																	{	/* Expand/case.scm 193 */
																		obj_t BgL_newtail1627z00_395;

																		{	/* Expand/case.scm 193 */
																			long BgL_arg1787z00_397;

																			BgL_arg1787z00_397 =
																				CCNST(CAR(BgL_l1623z00_391));
																			BgL_newtail1627z00_395 =
																				MAKE_PAIR(BINT(BgL_arg1787z00_397),
																				BNIL);
																		}
																		SET_CDR(BgL_tail1626z00_392,
																			BgL_newtail1627z00_395);
																		{
																			obj_t BgL_tail1626z00_1524;

																			obj_t BgL_l1623z00_1522;

																			BgL_l1623z00_1522 = CDR(BgL_l1623z00_391);
																			BgL_tail1626z00_1524 =
																				BgL_newtail1627z00_395;
																			BgL_tail1626z00_392 =
																				BgL_tail1626z00_1524;
																			BgL_l1623z00_391 = BgL_l1623z00_1522;
																			goto BgL_zc3anonymousza31784ze3z83_393;
																		}
																	}
															}
														}
													}
											}
											SET_CAR(BgL_clausez00_383, BgL_arg1782z00_385);
										}
									{
										obj_t BgL_cz00_1526;

										BgL_cz00_1526 = CDR(BgL_cz00_380);
										BgL_cz00_380 = BgL_cz00_1526;
										goto BgL_zc3anonymousza31778ze3z83_381;
									}
								}
						}
					}
				}
			}
		}
	}



/* do-optim-symbol/keyword-case */
	obj_t BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t
		BgL_typez00_16, obj_t BgL_valuez00_17, obj_t BgL_clausesz00_18,
		obj_t BgL_ez00_19)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 208 */
			{
				obj_t BgL_clausesz00_438;

				{	/* Expand/case.scm 223 */
					obj_t BgL_numzd2elszd2_436;

					BgL_clausesz00_438 = BgL_clausesz00_18;
					{
						obj_t BgL_clausesz00_441;

						long BgL_resz00_442;

						BgL_clausesz00_441 = BgL_clausesz00_438;
						BgL_resz00_442 = ((long) 0);
					BgL_zc3anonymousza31828ze3z83_443:
						if (NULLP(BgL_clausesz00_441))
							{	/* Expand/case.scm 212 */
								BgL_numzd2elszd2_436 = BINT(BgL_resz00_442);
							}
						else
							{	/* Expand/case.scm 214 */
								obj_t BgL_ezd21725zd2_454;

								BgL_ezd21725zd2_454 = CAR(BgL_clausesz00_441);
								if (NULLP(BgL_ezd21725zd2_454))
									{	/* Expand/case.scm 214 */
										BgL_numzd2elszd2_436 = BINT(BgL_resz00_442);
									}
								else
									{	/* Expand/case.scm 214 */
										if (PAIRP(BgL_ezd21725zd2_454))
											{	/* Expand/case.scm 214 */
												if (
													(CAR(BgL_ezd21725zd2_454) ==
														CNST_TABLE_REF(((long) 9))))
													{	/* Expand/case.scm 214 */
														BgL_numzd2elszd2_436 = BINT(BgL_resz00_442);
													}
												else
													{	/* Expand/case.scm 214 */
														obj_t BgL_carzd21738zd2_459;

														BgL_carzd21738zd2_459 = CAR(BgL_ezd21725zd2_454);
														if (PAIRP(BgL_carzd21738zd2_459))
															{	/* Expand/case.scm 214 */
																bool_t BgL_testz00_1545;

																{	/* Expand/case.scm 214 */
																	obj_t BgL_auxz00_1546;

																	BgL_auxz00_1546 = CDR(BgL_carzd21738zd2_459);
																	BgL_testz00_1545 = PAIRP(BgL_auxz00_1546);
																}
																if (BgL_testz00_1545)
																	{
																		long BgL_resz00_1551;

																		obj_t BgL_clausesz00_1549;

																		BgL_clausesz00_1549 =
																			CDR(BgL_clausesz00_441);
																		BgL_resz00_1551 =
																			(bgl_list_length(BgL_carzd21738zd2_459) +
																			BgL_resz00_442);
																		BgL_resz00_442 = BgL_resz00_1551;
																		BgL_clausesz00_441 = BgL_clausesz00_1549;
																		goto BgL_zc3anonymousza31828ze3z83_443;
																	}
																else
																	{	/* Expand/case.scm 214 */
																		if (NULLP(CDR(BgL_carzd21738zd2_459)))
																			{
																				long BgL_resz00_1559;

																				obj_t BgL_clausesz00_1557;

																				BgL_clausesz00_1557 =
																					CDR(BgL_clausesz00_441);
																				BgL_resz00_1559 =
																					(((long) 1) + BgL_resz00_442);
																				BgL_resz00_442 = BgL_resz00_1559;
																				BgL_clausesz00_441 =
																					BgL_clausesz00_1557;
																				goto BgL_zc3anonymousza31828ze3z83_443;
																			}
																		else
																			{	/* Expand/case.scm 214 */
																				BgL_numzd2elszd2_436 = BFALSE;
																			}
																	}
															}
														else
															{	/* Expand/case.scm 214 */
																BgL_numzd2elszd2_436 = BFALSE;
															}
													}
											}
										else
											{	/* Expand/case.scm 214 */
												BgL_numzd2elszd2_436 = BFALSE;
											}
									}
							}
					}
					if (((long) CINT(BgL_numzd2elszd2_436) < ((long) 10)))
						{	/* Expand/case.scm 224 */
							return
								BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
								(BgL_valuez00_17, BgL_clausesz00_18, BgL_ez00_19);
						}
					else
						{	/* Expand/case.scm 224 */
							return
								BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
								(BgL_valuez00_17, BgL_clausesz00_18, BgL_ez00_19);
						}
				}
			}
		}
	}



/* do-generic-symbol/keyword-case */
	obj_t BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t
		BgL_valuez00_20, obj_t BgL_clausesz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 233 */
			{	/* Expand/case.scm 234 */
				obj_t BgL_arg1856z00_484;

				obj_t BgL_arg1857z00_485;

				BgL_arg1856z00_484 = CNST_TABLE_REF(((long) 11));
				{	/* Expand/case.scm 234 */
					obj_t BgL_arg1858z00_486;

					obj_t BgL_arg1860z00_487;

					{	/* Expand/case.scm 234 */
						obj_t BgL_arg1864z00_491;

						{	/* Expand/case.scm 234 */
							obj_t BgL_arg1866z00_493;

							obj_t BgL_arg1867z00_494;

							BgL_arg1866z00_493 = CNST_TABLE_REF(((long) 15));
							{	/* Expand/case.scm 234 */
								obj_t BgL_arg1868z00_495;

								BgL_arg1868z00_495 =
									PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22, BgL_valuez00_20,
									BgL_ez00_22, BEOA);
								{	/* Expand/case.scm 234 */
									obj_t BgL_list1870z00_497;

									BgL_list1870z00_497 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1867z00_494 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1868z00_495, BgL_list1870z00_497);
							}}
							BgL_arg1864z00_491 =
								MAKE_PAIR(BgL_arg1866z00_493, BgL_arg1867z00_494);
						}
						BgL_arg1858z00_486 = MAKE_PAIR(BgL_arg1864z00_491, BNIL);
					}
					BgL_arg1860z00_487 =
						BGl_loopz72z72zzexpand_casez00(BgL_ez00_22, BgL_clausesz00_21);
					{	/* Expand/case.scm 234 */
						obj_t BgL_list1862z00_489;

						{	/* Expand/case.scm 234 */
							obj_t BgL_arg1863z00_490;

							BgL_arg1863z00_490 = MAKE_PAIR(BNIL, BNIL);
							BgL_list1862z00_489 =
								MAKE_PAIR(BgL_arg1860z00_487, BgL_arg1863z00_490);
						}
						BgL_arg1857z00_485 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1858z00_486,
							BgL_list1862z00_489);
				}}
				return MAKE_PAIR(BgL_arg1856z00_484, BgL_arg1857z00_485);
			}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzexpand_casez00(obj_t BgL_ez00_1211,
		obj_t BgL_clausesz00_499)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 235 */
			if (NULLP(BgL_clausesz00_499))
				{	/* Expand/case.scm 236 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_bodyz00_503;

					obj_t BgL_datumsz00_505;

					obj_t BgL_bodyz00_506;

					obj_t BgL_datumz00_508;

					obj_t BgL_bodyz00_509;

					{	/* Expand/case.scm 238 */
						obj_t BgL_ezd21781zd2_511;

						BgL_ezd21781zd2_511 = CAR(BgL_clausesz00_499);
						if (NULLP(BgL_ezd21781zd2_511))
							{	/* Expand/case.scm 238 */
								return BUNSPEC;
							}
						else
							{	/* Expand/case.scm 238 */
								if (PAIRP(BgL_ezd21781zd2_511))
									{	/* Expand/case.scm 238 */
										if (
											(CAR(BgL_ezd21781zd2_511) == CNST_TABLE_REF(((long) 9))))
											{	/* Expand/case.scm 238 */
												BgL_bodyz00_503 = CDR(BgL_ezd21781zd2_511);
												if (NULLP(BgL_bodyz00_503))
													{	/* Expand/case.scm 242 */
														return BFALSE;
													}
												else
													{	/* Expand/case.scm 244 */
														obj_t BgL_arg1895z00_535;

														BgL_arg1895z00_535 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_bodyz00_503);
														return
															PROCEDURE_ENTRY(BgL_ez00_1211) (BgL_ez00_1211,
															BgL_arg1895z00_535, BgL_ez00_1211, BEOA);
													}
											}
										else
											{	/* Expand/case.scm 238 */
												obj_t BgL_carzd21797zd2_516;

												BgL_carzd21797zd2_516 = CAR(BgL_ezd21781zd2_511);
												if (PAIRP(BgL_carzd21797zd2_516))
													{	/* Expand/case.scm 238 */
														bool_t BgL_testz00_1599;

														{	/* Expand/case.scm 238 */
															obj_t BgL_auxz00_1600;

															BgL_auxz00_1600 = CDR(BgL_carzd21797zd2_516);
															BgL_testz00_1599 = PAIRP(BgL_auxz00_1600);
														}
														if (BgL_testz00_1599)
															{	/* Expand/case.scm 238 */
																BgL_datumsz00_505 = BgL_carzd21797zd2_516;
																BgL_bodyz00_506 = CDR(BgL_ezd21781zd2_511);
																if (NULLP(BgL_bodyz00_506))
																	{	/* Expand/case.scm 247 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2752z00zzexpand_casez00,
																			BGl_string2755z00zzexpand_casez00,
																			CAR(BgL_clausesz00_499));
																	}
																else
																	{	/* Expand/case.scm 247 */
																		if (
																			(bgl_list_length(BgL_datumsz00_505) <
																				((long) 10)))
																			{	/* Expand/case.scm 250 */
																				obj_t BgL_arg1902z00_541;

																				obj_t BgL_arg1903z00_542;

																				BgL_arg1902z00_541 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 250 */
																					obj_t BgL_arg1904z00_543;

																					obj_t BgL_arg1905z00_544;

																					obj_t BgL_arg1906z00_545;

																					{	/* Expand/case.scm 250 */
																						obj_t BgL_arg1911z00_550;

																						{	/* Expand/case.scm 250 */
																							obj_t BgL_arg1912z00_551;

																							obj_t BgL_arg1914z00_552;

																							BgL_arg1912z00_551 =
																								CNST_TABLE_REF(((long) 18));
																							{	/* Expand/case.scm 250 */
																								obj_t BgL_arg1915z00_553;

																								{	/* Expand/case.scm 250 */
																									obj_t BgL_head1631z00_557;

																									BgL_head1631z00_557 =
																										MAKE_PAIR(BNIL, BNIL);
																									{
																										obj_t BgL_l1629z00_559;

																										obj_t BgL_tail1632z00_560;

																										BgL_l1629z00_559 =
																											BgL_datumsz00_505;
																										BgL_tail1632z00_560 =
																											BgL_head1631z00_557;
																									BgL_zc3anonymousza31918ze3z83_561:
																										if (NULLP
																											(BgL_l1629z00_559))
																											{	/* Expand/case.scm 250 */
																												BgL_arg1915z00_553 =
																													CDR
																													(BgL_head1631z00_557);
																											}
																										else
																											{	/* Expand/case.scm 250 */
																												obj_t
																													BgL_newtail1633z00_563;
																												{	/* Expand/case.scm 250 */
																													obj_t
																														BgL_arg1921z00_565;
																													{	/* Expand/case.scm 250 */
																														obj_t BgL_dz00_567;

																														BgL_dz00_567 =
																															CAR
																															(BgL_l1629z00_559);
																														{	/* Expand/case.scm 250 */
																															obj_t
																																BgL_arg1923z00_568;
																															obj_t
																																BgL_arg1924z00_569;
																															BgL_arg1923z00_568
																																=
																																CNST_TABLE_REF((
																																	(long) 19));
																															{	/* Expand/case.scm 250 */
																																obj_t
																																	BgL_arg1925z00_570;
																																obj_t
																																	BgL_arg1926z00_571;
																																BgL_arg1925z00_570
																																	=
																																	CNST_TABLE_REF
																																	(((long) 15));
																																{	/* Expand/case.scm 250 */
																																	obj_t
																																		BgL_arg1930z00_575;
																																	obj_t
																																		BgL_arg1931z00_576;
																																	BgL_arg1930z00_575
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			17));
																																	{	/* Expand/case.scm 250 */
																																		obj_t
																																			BgL_list1932z00_577;
																																		BgL_list1932z00_577
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg1931z00_576
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_dz00_567,
																																			BgL_list1932z00_577);
																																	}
																																	BgL_arg1926z00_571
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1930z00_575,
																																		BgL_arg1931z00_576);
																																}
																																{	/* Expand/case.scm 250 */
																																	obj_t
																																		BgL_list1928z00_573;
																																	{	/* Expand/case.scm 250 */
																																		obj_t
																																			BgL_arg1929z00_574;
																																		BgL_arg1929z00_574
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list1928z00_573
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1926z00_571,
																																			BgL_arg1929z00_574);
																																	}
																																	BgL_arg1924z00_569
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1925z00_570,
																																		BgL_list1928z00_573);
																															}}
																															BgL_arg1921z00_565
																																=
																																MAKE_PAIR
																																(BgL_arg1923z00_568,
																																BgL_arg1924z00_569);
																													}}
																													BgL_newtail1633z00_563
																														=
																														MAKE_PAIR
																														(BgL_arg1921z00_565,
																														BNIL);
																												}
																												SET_CDR
																													(BgL_tail1632z00_560,
																													BgL_newtail1633z00_563);
																												{
																													obj_t
																														BgL_tail1632z00_1631;
																													obj_t
																														BgL_l1629z00_1629;
																													BgL_l1629z00_1629 =
																														CDR
																														(BgL_l1629z00_559);
																													BgL_tail1632z00_1631 =
																														BgL_newtail1633z00_563;
																													BgL_tail1632z00_560 =
																														BgL_tail1632z00_1631;
																													BgL_l1629z00_559 =
																														BgL_l1629z00_1629;
																													goto
																														BgL_zc3anonymousza31918ze3z83_561;
																												}
																											}
																									}
																								}
																								BgL_arg1914z00_552 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1915z00_553, BNIL);
																							}
																							BgL_arg1911z00_550 =
																								MAKE_PAIR(BgL_arg1912z00_551,
																								BgL_arg1914z00_552);
																						}
																						BgL_arg1904z00_543 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg1911z00_550, BgL_ez00_1211,
																							BEOA);
																					}
																					{	/* Expand/case.scm 251 */
																						obj_t BgL_arg1935z00_579;

																						BgL_arg1935z00_579 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_506);
																						BgL_arg1905z00_544 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg1935z00_579, BgL_ez00_1211,
																							BEOA);
																					}
																					BgL_arg1906z00_545 =
																						BGl_loopz72z72zzexpand_casez00
																						(BgL_ez00_1211,
																						CDR(BgL_clausesz00_499));
																					{	/* Expand/case.scm 250 */
																						obj_t BgL_list1908z00_547;

																						{	/* Expand/case.scm 250 */
																							obj_t BgL_arg1909z00_548;

																							{	/* Expand/case.scm 250 */
																								obj_t BgL_arg1910z00_549;

																								BgL_arg1910z00_549 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1909z00_548 =
																									MAKE_PAIR(BgL_arg1906z00_545,
																									BgL_arg1910z00_549);
																							}
																							BgL_list1908z00_547 =
																								MAKE_PAIR(BgL_arg1905z00_544,
																								BgL_arg1909z00_548);
																						}
																						BgL_arg1903z00_542 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1904z00_543,
																							BgL_list1908z00_547);
																					}
																				}
																				return
																					MAKE_PAIR(BgL_arg1902z00_541,
																					BgL_arg1903z00_542);
																			}
																		else
																			{	/* Expand/case.scm 254 */
																				obj_t BgL_arg1938z00_581;

																				obj_t BgL_arg1940z00_582;

																				BgL_arg1938z00_581 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 254 */
																					obj_t BgL_arg1941z00_583;

																					obj_t BgL_arg1942z00_584;

																					obj_t BgL_arg1943z00_585;

																					{	/* Expand/case.scm 254 */
																						obj_t BgL_arg1949z00_590;

																						{	/* Expand/case.scm 254 */
																							obj_t BgL_arg1950z00_591;

																							obj_t BgL_arg1952z00_592;

																							BgL_arg1950z00_591 =
																								CNST_TABLE_REF(((long) 20));
																							{	/* Expand/case.scm 254 */
																								obj_t BgL_arg1955z00_593;

																								obj_t BgL_arg1957z00_594;

																								BgL_arg1955z00_593 =
																									CNST_TABLE_REF(((long) 15));
																								{	/* Expand/case.scm 254 */
																									obj_t BgL_arg1963z00_598;

																									obj_t BgL_arg1967z00_599;

																									BgL_arg1963z00_598 =
																										CNST_TABLE_REF(((long) 17));
																									{	/* Expand/case.scm 254 */
																										obj_t BgL_list1968z00_600;

																										BgL_list1968z00_600 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg1967z00_599 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_datumsz00_505,
																											BgL_list1968z00_600);
																									}
																									BgL_arg1957z00_594 =
																										MAKE_PAIR
																										(BgL_arg1963z00_598,
																										BgL_arg1967z00_599);
																								}
																								{	/* Expand/case.scm 254 */
																									obj_t BgL_list1959z00_596;

																									{	/* Expand/case.scm 254 */
																										obj_t BgL_arg1962z00_597;

																										BgL_arg1962z00_597 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list1959z00_596 =
																											MAKE_PAIR
																											(BgL_arg1957z00_594,
																											BgL_arg1962z00_597);
																									}
																									BgL_arg1952z00_592 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1955z00_593,
																										BgL_list1959z00_596);
																							}}
																							BgL_arg1949z00_590 =
																								MAKE_PAIR(BgL_arg1950z00_591,
																								BgL_arg1952z00_592);
																						}
																						BgL_arg1941z00_583 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg1949z00_590, BgL_ez00_1211,
																							BEOA);
																					}
																					{	/* Expand/case.scm 255 */
																						obj_t BgL_arg1969z00_601;

																						BgL_arg1969z00_601 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_506);
																						BgL_arg1942z00_584 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg1969z00_601, BgL_ez00_1211,
																							BEOA);
																					}
																					BgL_arg1943z00_585 =
																						BGl_loopz72z72zzexpand_casez00
																						(BgL_ez00_1211,
																						CDR(BgL_clausesz00_499));
																					{	/* Expand/case.scm 254 */
																						obj_t BgL_list1945z00_587;

																						{	/* Expand/case.scm 254 */
																							obj_t BgL_arg1946z00_588;

																							{	/* Expand/case.scm 254 */
																								obj_t BgL_arg1948z00_589;

																								BgL_arg1948z00_589 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1946z00_588 =
																									MAKE_PAIR(BgL_arg1943z00_585,
																									BgL_arg1948z00_589);
																							}
																							BgL_list1945z00_587 =
																								MAKE_PAIR(BgL_arg1942z00_584,
																								BgL_arg1946z00_588);
																						}
																						BgL_arg1940z00_582 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1941z00_583,
																							BgL_list1945z00_587);
																				}}
																				return
																					MAKE_PAIR(BgL_arg1938z00_581,
																					BgL_arg1940z00_582);
																			}
																	}
															}
														else
															{	/* Expand/case.scm 238 */
																if (NULLP(CDR(BgL_carzd21797zd2_516)))
																	{	/* Expand/case.scm 238 */
																		BgL_datumz00_508 =
																			CAR(BgL_carzd21797zd2_516);
																		BgL_bodyz00_509 = CDR(BgL_ezd21781zd2_511);
																		if (NULLP(BgL_bodyz00_509))
																			{	/* Expand/case.scm 258 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2752z00zzexpand_casez00,
																					BGl_string2755z00zzexpand_casez00,
																					CAR(BgL_clausesz00_499));
																			}
																		else
																			{	/* Expand/case.scm 260 */
																				obj_t BgL_arg1987z00_609;

																				obj_t BgL_arg1988z00_610;

																				BgL_arg1987z00_609 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 260 */
																					obj_t BgL_arg1989z00_611;

																					obj_t BgL_arg1990z00_612;

																					obj_t BgL_arg1991z00_613;

																					{	/* Expand/case.scm 260 */
																						obj_t BgL_arg1996z00_618;

																						{	/* Expand/case.scm 260 */
																							obj_t BgL_arg1998z00_619;

																							obj_t BgL_arg1999z00_620;

																							BgL_arg1998z00_619 =
																								CNST_TABLE_REF(((long) 16));
																							{	/* Expand/case.scm 260 */
																								obj_t BgL_arg2000z00_621;

																								obj_t BgL_arg2001z00_622;

																								BgL_arg2000z00_621 =
																									CNST_TABLE_REF(((long) 15));
																								{	/* Expand/case.scm 260 */
																									obj_t BgL_arg2005z00_626;

																									obj_t BgL_arg2012z00_627;

																									BgL_arg2005z00_626 =
																										CNST_TABLE_REF(((long) 17));
																									{	/* Expand/case.scm 260 */
																										obj_t BgL_list2013z00_628;

																										BgL_list2013z00_628 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2012z00_627 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_datumz00_508,
																											BgL_list2013z00_628);
																									}
																									BgL_arg2001z00_622 =
																										MAKE_PAIR
																										(BgL_arg2005z00_626,
																										BgL_arg2012z00_627);
																								}
																								{	/* Expand/case.scm 260 */
																									obj_t BgL_list2003z00_624;

																									{	/* Expand/case.scm 260 */
																										obj_t BgL_arg2004z00_625;

																										BgL_arg2004z00_625 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2003z00_624 =
																											MAKE_PAIR
																											(BgL_arg2001z00_622,
																											BgL_arg2004z00_625);
																									}
																									BgL_arg1999z00_620 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2000z00_621,
																										BgL_list2003z00_624);
																							}}
																							BgL_arg1996z00_618 =
																								MAKE_PAIR(BgL_arg1998z00_619,
																								BgL_arg1999z00_620);
																						}
																						BgL_arg1989z00_611 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg1996z00_618, BgL_ez00_1211,
																							BEOA);
																					}
																					{	/* Expand/case.scm 261 */
																						obj_t BgL_arg2021z00_629;

																						BgL_arg2021z00_629 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_509);
																						BgL_arg1990z00_612 =
																							PROCEDURE_ENTRY(BgL_ez00_1211)
																							(BgL_ez00_1211,
																							BgL_arg2021z00_629, BgL_ez00_1211,
																							BEOA);
																					}
																					BgL_arg1991z00_613 =
																						BGl_loopz72z72zzexpand_casez00
																						(BgL_ez00_1211,
																						CDR(BgL_clausesz00_499));
																					{	/* Expand/case.scm 260 */
																						obj_t BgL_list1993z00_615;

																						{	/* Expand/case.scm 260 */
																							obj_t BgL_arg1994z00_616;

																							{	/* Expand/case.scm 260 */
																								obj_t BgL_arg1995z00_617;

																								BgL_arg1995z00_617 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg1994z00_616 =
																									MAKE_PAIR(BgL_arg1991z00_613,
																									BgL_arg1995z00_617);
																							}
																							BgL_list1993z00_615 =
																								MAKE_PAIR(BgL_arg1990z00_612,
																								BgL_arg1994z00_616);
																						}
																						BgL_arg1988z00_610 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1989z00_611,
																							BgL_list1993z00_615);
																				}}
																				return
																					MAKE_PAIR(BgL_arg1987z00_609,
																					BgL_arg1988z00_610);
																			}
																	}
																else
																	{	/* Expand/case.scm 238 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Expand/case.scm 238 */
														return BFALSE;
													}
											}
									}
								else
									{	/* Expand/case.scm 238 */
										return BFALSE;
									}
							}
					}
				}
		}
	}



/* type-test */
	obj_t BGl_typezd2testzd2zzexpand_casez00(obj_t BgL_auxz00_23,
		obj_t BgL_typez00_24, obj_t BgL_valuez00_25, obj_t BgL_casezd2formzd2_26,
		obj_t BgL_elsezd2bodyzd2_27, obj_t BgL_elsezd2namezd2_28, obj_t BgL_ez00_29)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 267 */
			if ((BgL_typez00_24 == CNST_TABLE_REF(((long) 2))))
				{	/* Expand/case.scm 270 */
					obj_t BgL_arg2027z00_634;

					obj_t BgL_arg2028z00_635;

					BgL_arg2027z00_634 = CNST_TABLE_REF(((long) 21));
					{	/* Expand/case.scm 270 */
						obj_t BgL_arg2029z00_636;

						obj_t BgL_arg2031z00_637;

						{	/* Expand/case.scm 270 */
							obj_t BgL_arg2038z00_641;

							{	/* Expand/case.scm 270 */
								obj_t BgL_arg2048z00_643;

								{	/* Expand/case.scm 270 */
									obj_t BgL_arg2052z00_645;

									BgL_arg2052z00_645 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_elsezd2bodyzd2_27, BNIL);
									{	/* Expand/case.scm 270 */
										obj_t BgL_list2053z00_646;

										BgL_list2053z00_646 = MAKE_PAIR(BgL_arg2052z00_645, BNIL);
										BgL_arg2048z00_643 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
											BgL_list2053z00_646);
								}}
								BgL_arg2038z00_641 =
									MAKE_PAIR(BgL_elsezd2namezd2_28, BgL_arg2048z00_643);
							}
							BgL_arg2029z00_636 = MAKE_PAIR(BgL_arg2038z00_641, BNIL);
						}
						{	/* Expand/case.scm 271 */
							obj_t BgL_arg2054z00_647;

							obj_t BgL_arg2055z00_648;

							BgL_arg2054z00_647 = CNST_TABLE_REF(((long) 11));
							{	/* Expand/case.scm 271 */
								obj_t BgL_arg2056z00_649;

								obj_t BgL_arg2057z00_650;

								{	/* Expand/case.scm 271 */
									obj_t BgL_arg2062z00_654;

									{	/* Expand/case.scm 271 */
										obj_t BgL_arg2118z00_656;

										{	/* Expand/case.scm 271 */
											obj_t BgL_arg2119z00_657;

											BgL_arg2119z00_657 =
												PROCEDURE_ENTRY(BgL_ez00_29) (BgL_ez00_29,
												BgL_valuez00_25, BgL_ez00_29, BEOA);
											{	/* Expand/case.scm 271 */
												obj_t BgL_list2126z00_659;

												BgL_list2126z00_659 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2118z00_656 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2119z00_657, BgL_list2126z00_659);
										}}
										BgL_arg2062z00_654 =
											MAKE_PAIR(BgL_auxz00_23, BgL_arg2118z00_656);
									}
									BgL_arg2056z00_649 = MAKE_PAIR(BgL_arg2062z00_654, BNIL);
								}
								{	/* Expand/case.scm 272 */
									obj_t BgL_arg2127z00_660;

									obj_t BgL_arg2139z00_661;

									BgL_arg2127z00_660 = CNST_TABLE_REF(((long) 12));
									{	/* Expand/case.scm 272 */
										obj_t BgL_arg2141z00_662;

										obj_t BgL_arg2145z00_663;

										{	/* Expand/case.scm 272 */
											obj_t BgL_arg2165z00_668;

											obj_t BgL_arg2172z00_669;

											BgL_arg2165z00_668 = CNST_TABLE_REF(((long) 22));
											{	/* Expand/case.scm 272 */
												obj_t BgL_list2173z00_670;

												BgL_list2173z00_670 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2172z00_669 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_auxz00_23, BgL_list2173z00_670);
											}
											BgL_arg2141z00_662 =
												MAKE_PAIR(BgL_arg2165z00_668, BgL_arg2172z00_669);
										}
										BgL_arg2145z00_663 = MAKE_PAIR(BgL_elsezd2namezd2_28, BNIL);
										{	/* Expand/case.scm 272 */
											obj_t BgL_list2152z00_665;

											{	/* Expand/case.scm 272 */
												obj_t BgL_arg2155z00_666;

												{	/* Expand/case.scm 272 */
													obj_t BgL_arg2159z00_667;

													BgL_arg2159z00_667 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2155z00_666 =
														MAKE_PAIR(BgL_arg2145z00_663, BgL_arg2159z00_667);
												}
												BgL_list2152z00_665 =
													MAKE_PAIR(BgL_casezd2formzd2_26, BgL_arg2155z00_666);
											}
											BgL_arg2139z00_661 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2141z00_662, BgL_list2152z00_665);
									}}
									BgL_arg2057z00_650 =
										MAKE_PAIR(BgL_arg2127z00_660, BgL_arg2139z00_661);
								}
								{	/* Expand/case.scm 271 */
									obj_t BgL_list2059z00_652;

									{	/* Expand/case.scm 271 */
										obj_t BgL_arg2061z00_653;

										BgL_arg2061z00_653 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2059z00_652 =
											MAKE_PAIR(BgL_arg2057z00_650, BgL_arg2061z00_653);
									}
									BgL_arg2055z00_648 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2056z00_649, BgL_list2059z00_652);
							}}
							BgL_arg2031z00_637 =
								MAKE_PAIR(BgL_arg2054z00_647, BgL_arg2055z00_648);
						}
						{	/* Expand/case.scm 270 */
							obj_t BgL_list2034z00_639;

							{	/* Expand/case.scm 270 */
								obj_t BgL_arg2037z00_640;

								BgL_arg2037z00_640 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2034z00_639 =
									MAKE_PAIR(BgL_arg2031z00_637, BgL_arg2037z00_640);
							}
							BgL_arg2028z00_635 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2029z00_636,
								BgL_list2034z00_639);
					}}
					return MAKE_PAIR(BgL_arg2027z00_634, BgL_arg2028z00_635);
				}
			else
				{	/* Expand/case.scm 269 */
					if ((BgL_typez00_24 == CNST_TABLE_REF(((long) 1))))
						{	/* Expand/case.scm 276 */
							obj_t BgL_arg2178z00_672;

							obj_t BgL_arg2185z00_673;

							BgL_arg2178z00_672 = CNST_TABLE_REF(((long) 21));
							{	/* Expand/case.scm 276 */
								obj_t BgL_arg2187z00_674;

								obj_t BgL_arg2192z00_675;

								{	/* Expand/case.scm 276 */
									obj_t BgL_arg2208z00_679;

									{	/* Expand/case.scm 276 */
										obj_t BgL_arg2216z00_681;

										{	/* Expand/case.scm 276 */
											obj_t BgL_arg2226z00_683;

											BgL_arg2226z00_683 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_elsezd2bodyzd2_27, BNIL);
											{	/* Expand/case.scm 276 */
												obj_t BgL_list2227z00_684;

												BgL_list2227z00_684 =
													MAKE_PAIR(BgL_arg2226z00_683, BNIL);
												BgL_arg2216z00_681 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
													BgL_list2227z00_684);
										}}
										BgL_arg2208z00_679 =
											MAKE_PAIR(BgL_elsezd2namezd2_28, BgL_arg2216z00_681);
									}
									BgL_arg2187z00_674 = MAKE_PAIR(BgL_arg2208z00_679, BNIL);
								}
								{	/* Expand/case.scm 277 */
									obj_t BgL_arg2233z00_685;

									obj_t BgL_arg2237z00_686;

									BgL_arg2233z00_685 = CNST_TABLE_REF(((long) 11));
									{	/* Expand/case.scm 277 */
										obj_t BgL_arg2239z00_687;

										obj_t BgL_arg2240z00_688;

										{	/* Expand/case.scm 277 */
											obj_t BgL_arg2252z00_692;

											{	/* Expand/case.scm 277 */
												obj_t BgL_arg2259z00_694;

												{	/* Expand/case.scm 277 */
													obj_t BgL_arg2260z00_695;

													BgL_arg2260z00_695 =
														PROCEDURE_ENTRY(BgL_ez00_29) (BgL_ez00_29,
														BgL_valuez00_25, BgL_ez00_29, BEOA);
													{	/* Expand/case.scm 277 */
														obj_t BgL_list2268z00_697;

														BgL_list2268z00_697 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2259z00_694 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2260z00_695, BgL_list2268z00_697);
												}}
												BgL_arg2252z00_692 =
													MAKE_PAIR(BgL_auxz00_23, BgL_arg2259z00_694);
											}
											BgL_arg2239z00_687 = MAKE_PAIR(BgL_arg2252z00_692, BNIL);
										}
										{	/* Expand/case.scm 278 */
											obj_t BgL_arg2274z00_698;

											obj_t BgL_arg2275z00_699;

											BgL_arg2274z00_698 = CNST_TABLE_REF(((long) 12));
											{	/* Expand/case.scm 278 */
												obj_t BgL_arg2282z00_700;

												obj_t BgL_arg2285z00_701;

												{	/* Expand/case.scm 278 */
													obj_t BgL_arg2297z00_706;

													obj_t BgL_arg2305z00_707;

													BgL_arg2297z00_706 = CNST_TABLE_REF(((long) 23));
													{	/* Expand/case.scm 278 */
														obj_t BgL_list2306z00_708;

														BgL_list2306z00_708 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2305z00_707 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_auxz00_23, BgL_list2306z00_708);
													}
													BgL_arg2282z00_700 =
														MAKE_PAIR(BgL_arg2297z00_706, BgL_arg2305z00_707);
												}
												BgL_arg2285z00_701 =
													MAKE_PAIR(BgL_elsezd2namezd2_28, BNIL);
												{	/* Expand/case.scm 278 */
													obj_t BgL_list2287z00_703;

													{	/* Expand/case.scm 278 */
														obj_t BgL_arg2290z00_704;

														{	/* Expand/case.scm 278 */
															obj_t BgL_arg2295z00_705;

															BgL_arg2295z00_705 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2290z00_704 =
																MAKE_PAIR(BgL_arg2285z00_701,
																BgL_arg2295z00_705);
														}
														BgL_list2287z00_703 =
															MAKE_PAIR(BgL_casezd2formzd2_26,
															BgL_arg2290z00_704);
													}
													BgL_arg2275z00_699 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2282z00_700, BgL_list2287z00_703);
											}}
											BgL_arg2240z00_688 =
												MAKE_PAIR(BgL_arg2274z00_698, BgL_arg2275z00_699);
										}
										{	/* Expand/case.scm 277 */
											obj_t BgL_list2243z00_690;

											{	/* Expand/case.scm 277 */
												obj_t BgL_arg2245z00_691;

												BgL_arg2245z00_691 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2243z00_690 =
													MAKE_PAIR(BgL_arg2240z00_688, BgL_arg2245z00_691);
											}
											BgL_arg2237z00_686 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2239z00_687, BgL_list2243z00_690);
									}}
									BgL_arg2192z00_675 =
										MAKE_PAIR(BgL_arg2233z00_685, BgL_arg2237z00_686);
								}
								{	/* Expand/case.scm 276 */
									obj_t BgL_list2199z00_677;

									{	/* Expand/case.scm 276 */
										obj_t BgL_arg2200z00_678;

										BgL_arg2200z00_678 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2199z00_677 =
											MAKE_PAIR(BgL_arg2192z00_675, BgL_arg2200z00_678);
									}
									BgL_arg2185z00_673 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2187z00_674, BgL_list2199z00_677);
							}}
							return MAKE_PAIR(BgL_arg2178z00_672, BgL_arg2185z00_673);
						}
					else
						{	/* Expand/case.scm 269 */
							if ((BgL_typez00_24 == CNST_TABLE_REF(((long) 4))))
								{	/* Expand/case.scm 282 */
									obj_t BgL_arg2312z00_710;

									obj_t BgL_arg2318z00_711;

									BgL_arg2312z00_710 = CNST_TABLE_REF(((long) 21));
									{	/* Expand/case.scm 282 */
										obj_t BgL_arg2325z00_712;

										obj_t BgL_arg2331z00_713;

										{	/* Expand/case.scm 282 */
											obj_t BgL_arg2351z00_717;

											{	/* Expand/case.scm 282 */
												obj_t BgL_arg2364z00_719;

												{	/* Expand/case.scm 282 */
													obj_t BgL_arg2377z00_721;

													BgL_arg2377z00_721 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_elsezd2bodyzd2_27, BNIL);
													{	/* Expand/case.scm 282 */
														obj_t BgL_list2378z00_722;

														BgL_list2378z00_722 =
															MAKE_PAIR(BgL_arg2377z00_721, BNIL);
														BgL_arg2364z00_719 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
															BgL_list2378z00_722);
												}}
												BgL_arg2351z00_717 =
													MAKE_PAIR(BgL_elsezd2namezd2_28, BgL_arg2364z00_719);
											}
											BgL_arg2325z00_712 = MAKE_PAIR(BgL_arg2351z00_717, BNIL);
										}
										{	/* Expand/case.scm 283 */
											obj_t BgL_arg2383z00_723;

											obj_t BgL_arg2390z00_724;

											BgL_arg2383z00_723 = CNST_TABLE_REF(((long) 11));
											{	/* Expand/case.scm 283 */
												obj_t BgL_arg2396z00_725;

												obj_t BgL_arg2403z00_726;

												{	/* Expand/case.scm 283 */
													obj_t BgL_arg2422z00_730;

													{	/* Expand/case.scm 283 */
														obj_t BgL_arg2430z00_732;

														{	/* Expand/case.scm 283 */
															obj_t BgL_arg2431z00_733;

															BgL_arg2431z00_733 =
																PROCEDURE_ENTRY(BgL_ez00_29) (BgL_ez00_29,
																BgL_valuez00_25, BgL_ez00_29, BEOA);
															{	/* Expand/case.scm 283 */
																obj_t BgL_list2438z00_735;

																BgL_list2438z00_735 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2430z00_732 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2431z00_733, BgL_list2438z00_735);
														}}
														BgL_arg2422z00_730 =
															MAKE_PAIR(BgL_auxz00_23, BgL_arg2430z00_732);
													}
													BgL_arg2396z00_725 =
														MAKE_PAIR(BgL_arg2422z00_730, BNIL);
												}
												{	/* Expand/case.scm 284 */
													obj_t BgL_arg2444z00_736;

													obj_t BgL_arg2445z00_737;

													BgL_arg2444z00_736 = CNST_TABLE_REF(((long) 12));
													{	/* Expand/case.scm 284 */
														obj_t BgL_arg2448z00_738;

														obj_t BgL_arg2451z00_739;

														{	/* Expand/case.scm 284 */
															obj_t BgL_arg2460z00_744;

															obj_t BgL_arg2461z00_745;

															BgL_arg2460z00_744 = CNST_TABLE_REF(((long) 24));
															{	/* Expand/case.scm 284 */
																obj_t BgL_list2462z00_746;

																BgL_list2462z00_746 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2461z00_745 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_auxz00_23, BgL_list2462z00_746);
															}
															BgL_arg2448z00_738 =
																MAKE_PAIR(BgL_arg2460z00_744,
																BgL_arg2461z00_745);
														}
														BgL_arg2451z00_739 =
															MAKE_PAIR(BgL_elsezd2namezd2_28, BNIL);
														{	/* Expand/case.scm 284 */
															obj_t BgL_list2453z00_741;

															{	/* Expand/case.scm 284 */
																obj_t BgL_arg2454z00_742;

																{	/* Expand/case.scm 284 */
																	obj_t BgL_arg2459z00_743;

																	BgL_arg2459z00_743 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2454z00_742 =
																		MAKE_PAIR(BgL_arg2451z00_739,
																		BgL_arg2459z00_743);
																}
																BgL_list2453z00_741 =
																	MAKE_PAIR(BgL_casezd2formzd2_26,
																	BgL_arg2454z00_742);
															}
															BgL_arg2445z00_737 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2448z00_738, BgL_list2453z00_741);
													}}
													BgL_arg2403z00_726 =
														MAKE_PAIR(BgL_arg2444z00_736, BgL_arg2445z00_737);
												}
												{	/* Expand/case.scm 283 */
													obj_t BgL_list2410z00_728;

													{	/* Expand/case.scm 283 */
														obj_t BgL_arg2416z00_729;

														BgL_arg2416z00_729 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2410z00_728 =
															MAKE_PAIR(BgL_arg2403z00_726, BgL_arg2416z00_729);
													}
													BgL_arg2390z00_724 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2396z00_725, BgL_list2410z00_728);
											}}
											BgL_arg2331z00_713 =
												MAKE_PAIR(BgL_arg2383z00_723, BgL_arg2390z00_724);
										}
										{	/* Expand/case.scm 282 */
											obj_t BgL_list2339z00_715;

											{	/* Expand/case.scm 282 */
												obj_t BgL_arg2344z00_716;

												BgL_arg2344z00_716 = MAKE_PAIR(BNIL, BNIL);
												BgL_list2339z00_715 =
													MAKE_PAIR(BgL_arg2331z00_713, BgL_arg2344z00_716);
											}
											BgL_arg2318z00_711 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2325z00_712, BgL_list2339z00_715);
									}}
									return MAKE_PAIR(BgL_arg2312z00_710, BgL_arg2318z00_711);
								}
							else
								{	/* Expand/case.scm 269 */
									if ((BgL_typez00_24 == CNST_TABLE_REF(((long) 5))))
										{	/* Expand/case.scm 288 */
											obj_t BgL_arg2470z00_748;

											obj_t BgL_arg2471z00_749;

											BgL_arg2470z00_748 = CNST_TABLE_REF(((long) 21));
											{	/* Expand/case.scm 288 */
												obj_t BgL_arg2472z00_750;

												obj_t BgL_arg2476z00_751;

												{	/* Expand/case.scm 288 */
													obj_t BgL_arg2492z00_755;

													{	/* Expand/case.scm 288 */
														obj_t BgL_arg2503z00_757;

														{	/* Expand/case.scm 288 */
															obj_t BgL_arg2505z00_759;

															BgL_arg2505z00_759 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_elsezd2bodyzd2_27, BNIL);
															{	/* Expand/case.scm 288 */
																obj_t BgL_list2506z00_760;

																BgL_list2506z00_760 =
																	MAKE_PAIR(BgL_arg2505z00_759, BNIL);
																BgL_arg2503z00_757 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BNIL, BgL_list2506z00_760);
														}}
														BgL_arg2492z00_755 =
															MAKE_PAIR(BgL_elsezd2namezd2_28,
															BgL_arg2503z00_757);
													}
													BgL_arg2472z00_750 =
														MAKE_PAIR(BgL_arg2492z00_755, BNIL);
												}
												{	/* Expand/case.scm 289 */
													obj_t BgL_arg2523z00_761;

													obj_t BgL_arg2529z00_762;

													BgL_arg2523z00_761 = CNST_TABLE_REF(((long) 11));
													{	/* Expand/case.scm 289 */
														obj_t BgL_arg2531z00_763;

														obj_t BgL_arg2536z00_764;

														{	/* Expand/case.scm 289 */
															obj_t BgL_arg2554z00_768;

															{	/* Expand/case.scm 289 */
																obj_t BgL_arg2556z00_770;

																{	/* Expand/case.scm 289 */
																	obj_t BgL_arg2557z00_771;

																	BgL_arg2557z00_771 =
																		PROCEDURE_ENTRY(BgL_ez00_29) (BgL_ez00_29,
																		BgL_valuez00_25, BgL_ez00_29, BEOA);
																	{	/* Expand/case.scm 289 */
																		obj_t BgL_list2559z00_773;

																		BgL_list2559z00_773 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2556z00_770 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2557z00_771, BgL_list2559z00_773);
																}}
																BgL_arg2554z00_768 =
																	MAKE_PAIR(BgL_auxz00_23, BgL_arg2556z00_770);
															}
															BgL_arg2531z00_763 =
																MAKE_PAIR(BgL_arg2554z00_768, BNIL);
														}
														{	/* Expand/case.scm 290 */
															obj_t BgL_arg2560z00_774;

															obj_t BgL_arg2561z00_775;

															BgL_arg2560z00_774 = CNST_TABLE_REF(((long) 12));
															{	/* Expand/case.scm 290 */
																obj_t BgL_arg2562z00_776;

																obj_t BgL_arg2563z00_777;

																{	/* Expand/case.scm 290 */
																	obj_t BgL_arg2572z00_782;

																	obj_t BgL_arg2576z00_783;

																	BgL_arg2572z00_782 =
																		CNST_TABLE_REF(((long) 25));
																	{	/* Expand/case.scm 290 */
																		obj_t BgL_list2577z00_784;

																		BgL_list2577z00_784 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2576z00_783 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_auxz00_23, BgL_list2577z00_784);
																	}
																	BgL_arg2562z00_776 =
																		MAKE_PAIR(BgL_arg2572z00_782,
																		BgL_arg2576z00_783);
																}
																BgL_arg2563z00_777 =
																	MAKE_PAIR(BgL_elsezd2namezd2_28, BNIL);
																{	/* Expand/case.scm 290 */
																	obj_t BgL_list2565z00_779;

																	{	/* Expand/case.scm 290 */
																		obj_t BgL_arg2566z00_780;

																		{	/* Expand/case.scm 290 */
																			obj_t BgL_arg2571z00_781;

																			BgL_arg2571z00_781 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2566z00_780 =
																				MAKE_PAIR(BgL_arg2563z00_777,
																				BgL_arg2571z00_781);
																		}
																		BgL_list2565z00_779 =
																			MAKE_PAIR(BgL_casezd2formzd2_26,
																			BgL_arg2566z00_780);
																	}
																	BgL_arg2561z00_775 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2562z00_776, BgL_list2565z00_779);
															}}
															BgL_arg2536z00_764 =
																MAKE_PAIR(BgL_arg2560z00_774,
																BgL_arg2561z00_775);
														}
														{	/* Expand/case.scm 289 */
															obj_t BgL_list2545z00_766;

															{	/* Expand/case.scm 289 */
																obj_t BgL_arg2550z00_767;

																BgL_arg2550z00_767 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2545z00_766 =
																	MAKE_PAIR(BgL_arg2536z00_764,
																	BgL_arg2550z00_767);
															}
															BgL_arg2529z00_762 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2531z00_763, BgL_list2545z00_766);
													}}
													BgL_arg2476z00_751 =
														MAKE_PAIR(BgL_arg2523z00_761, BgL_arg2529z00_762);
												}
												{	/* Expand/case.scm 288 */
													obj_t BgL_list2478z00_753;

													{	/* Expand/case.scm 288 */
														obj_t BgL_arg2491z00_754;

														BgL_arg2491z00_754 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2478z00_753 =
															MAKE_PAIR(BgL_arg2476z00_751, BgL_arg2491z00_754);
													}
													BgL_arg2471z00_749 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2472z00_750, BgL_list2478z00_753);
											}}
											return MAKE_PAIR(BgL_arg2470z00_748, BgL_arg2471z00_749);
										}
									else
										{	/* Expand/case.scm 269 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2756z00zzexpand_casez00,
												BGl_string2757z00zzexpand_casez00, BgL_typez00_24);
										}
								}
						}
				}
		}
	}



/* do-generic-case */
	obj_t BGl_dozd2genericzd2casez00zzexpand_casez00(obj_t BgL_valuez00_30,
		obj_t BgL_clausesz00_31, obj_t BgL_ez00_32)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 300 */
			{	/* Expand/case.scm 301 */
				obj_t BgL_arg2586z00_785;

				{	/* Expand/case.scm 301 */
					obj_t BgL_arg2587z00_786;

					obj_t BgL_arg2589z00_787;

					BgL_arg2587z00_786 = CNST_TABLE_REF(((long) 11));
					{	/* Expand/case.scm 301 */
						obj_t BgL_arg2590z00_788;

						obj_t BgL_arg2594z00_789;

						{	/* Expand/case.scm 301 */
							obj_t BgL_arg2608z00_793;

							{	/* Expand/case.scm 301 */
								obj_t BgL_arg2621z00_795;

								obj_t BgL_arg2628z00_796;

								BgL_arg2621z00_795 = CNST_TABLE_REF(((long) 15));
								{	/* Expand/case.scm 301 */
									obj_t BgL_list2629z00_797;

									BgL_list2629z00_797 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg2628z00_796 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_valuez00_30,
										BgL_list2629z00_797);
								}
								BgL_arg2608z00_793 =
									MAKE_PAIR(BgL_arg2621z00_795, BgL_arg2628z00_796);
							}
							BgL_arg2590z00_788 = MAKE_PAIR(BgL_arg2608z00_793, BNIL);
						}
						BgL_arg2594z00_789 = BGl_loopz00zzexpand_casez00(BgL_clausesz00_31);
						{	/* Expand/case.scm 301 */
							obj_t BgL_list2596z00_791;

							{	/* Expand/case.scm 301 */
								obj_t BgL_arg2602z00_792;

								BgL_arg2602z00_792 = MAKE_PAIR(BNIL, BNIL);
								BgL_list2596z00_791 =
									MAKE_PAIR(BgL_arg2594z00_789, BgL_arg2602z00_792);
							}
							BgL_arg2589z00_787 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2590z00_788,
								BgL_list2596z00_791);
					}}
					BgL_arg2586z00_785 =
						MAKE_PAIR(BgL_arg2587z00_786, BgL_arg2589z00_787);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_32) (BgL_ez00_32, BgL_arg2586z00_785,
					BgL_ez00_32, BEOA);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzexpand_casez00(obj_t BgL_clausesz00_799)
	{
		AN_OBJECT;
		{	/* Expand/case.scm 302 */
			if (NULLP(BgL_clausesz00_799))
				{	/* Expand/case.scm 303 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_datumsz00_805;

					obj_t BgL_bodyz00_806;

					obj_t BgL_datumz00_808;

					obj_t BgL_bodyz00_809;

					{	/* Expand/case.scm 305 */
						obj_t BgL_ezd21841zd2_811;

						BgL_ezd21841zd2_811 = CAR(BgL_clausesz00_799);
						if (NULLP(BgL_ezd21841zd2_811))
							{	/* Expand/case.scm 305 */
								return BUNSPEC;
							}
						else
							{	/* Expand/case.scm 305 */
								if (PAIRP(BgL_ezd21841zd2_811))
									{	/* Expand/case.scm 305 */
										if (
											(CAR(BgL_ezd21841zd2_811) == CNST_TABLE_REF(((long) 9))))
											{	/* Expand/case.scm 305 */
												obj_t BgL_arg2642z00_815;

												BgL_arg2642z00_815 = CDR(BgL_ezd21841zd2_811);
												if (NULLP(BgL_arg2642z00_815))
													{	/* Expand/case.scm 305 */
														return BFALSE;
													}
												else
													{	/* Expand/case.scm 305 */
														return
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_arg2642z00_815);
													}
											}
										else
											{	/* Expand/case.scm 305 */
												obj_t BgL_carzd21857zd2_816;

												BgL_carzd21857zd2_816 = CAR(BgL_ezd21841zd2_811);
												if (PAIRP(BgL_carzd21857zd2_816))
													{	/* Expand/case.scm 305 */
														bool_t BgL_testz00_1874;

														{	/* Expand/case.scm 305 */
															obj_t BgL_auxz00_1875;

															BgL_auxz00_1875 = CDR(BgL_carzd21857zd2_816);
															BgL_testz00_1874 = PAIRP(BgL_auxz00_1875);
														}
														if (BgL_testz00_1874)
															{	/* Expand/case.scm 305 */
																BgL_datumsz00_805 = BgL_carzd21857zd2_816;
																BgL_bodyz00_806 = CDR(BgL_ezd21841zd2_811);
																if (NULLP(BgL_bodyz00_806))
																	{	/* Expand/case.scm 314 */
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2752z00zzexpand_casez00,
																			BGl_string2755z00zzexpand_casez00,
																			CAR(BgL_clausesz00_799));
																	}
																else
																	{	/* Expand/case.scm 316 */
																		bool_t BgL_testz00_1882;

																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_datumsz00_805))
																			{	/* Expand/case.scm 316 */
																				BgL_testz00_1882 =
																					(bgl_list_length(BgL_datumsz00_805) <
																					((long) 10));
																			}
																		else
																			{	/* Expand/case.scm 316 */
																				BgL_testz00_1882 = ((bool_t) 0);
																			}
																		if (BgL_testz00_1882)
																			{	/* Expand/case.scm 318 */
																				obj_t BgL_arg2672z00_840;

																				obj_t BgL_arg2673z00_841;

																				BgL_arg2672z00_840 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 318 */
																					obj_t BgL_arg2674z00_842;

																					obj_t BgL_arg2675z00_843;

																					obj_t BgL_arg2676z00_844;

																					{	/* Expand/case.scm 318 */
																						obj_t BgL_arg2681z00_849;

																						obj_t BgL_arg2682z00_850;

																						BgL_arg2681z00_849 =
																							CNST_TABLE_REF(((long) 18));
																						{	/* Expand/case.scm 318 */
																							obj_t BgL_arg2683z00_851;

																							{	/* Expand/case.scm 318 */
																								obj_t BgL_head1636z00_855;

																								BgL_head1636z00_855 =
																									MAKE_PAIR(BNIL, BNIL);
																								{
																									obj_t BgL_l1634z00_857;

																									obj_t BgL_tail1637z00_858;

																									BgL_l1634z00_857 =
																										BgL_datumsz00_805;
																									BgL_tail1637z00_858 =
																										BgL_head1636z00_855;
																								BgL_zc3anonymousza32686ze3z83_859:
																									if (NULLP
																										(BgL_l1634z00_857))
																										{	/* Expand/case.scm 318 */
																											BgL_arg2683z00_851 =
																												CDR
																												(BgL_head1636z00_855);
																										}
																									else
																										{	/* Expand/case.scm 318 */
																											obj_t
																												BgL_newtail1638z00_861;
																											{	/* Expand/case.scm 318 */
																												obj_t
																													BgL_arg2689z00_863;
																												{	/* Expand/case.scm 318 */
																													obj_t BgL_dz00_865;

																													BgL_dz00_865 =
																														CAR
																														(BgL_l1634z00_857);
																													{	/* Expand/case.scm 318 */
																														obj_t
																															BgL_arg2691z00_866;
																														obj_t
																															BgL_arg2692z00_867;
																														BgL_arg2691z00_866 =
																															CNST_TABLE_REF((
																																(long) 16));
																														{	/* Expand/case.scm 318 */
																															obj_t
																																BgL_arg2693z00_868;
																															obj_t
																																BgL_arg2694z00_869;
																															BgL_arg2693z00_868
																																=
																																CNST_TABLE_REF((
																																	(long) 15));
																															{	/* Expand/case.scm 318 */
																																obj_t
																																	BgL_arg2698z00_873;
																																obj_t
																																	BgL_arg2699z00_874;
																																BgL_arg2698z00_873
																																	=
																																	CNST_TABLE_REF
																																	(((long) 17));
																																{	/* Expand/case.scm 318 */
																																	obj_t
																																		BgL_list2700z00_875;
																																	BgL_list2700z00_875
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2699z00_874
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_dz00_865,
																																		BgL_list2700z00_875);
																																}
																																BgL_arg2694z00_869
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2698z00_873,
																																	BgL_arg2699z00_874);
																															}
																															{	/* Expand/case.scm 318 */
																																obj_t
																																	BgL_list2696z00_871;
																																{	/* Expand/case.scm 318 */
																																	obj_t
																																		BgL_arg2697z00_872;
																																	BgL_arg2697z00_872
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list2696z00_871
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2694z00_869,
																																		BgL_arg2697z00_872);
																																}
																																BgL_arg2692z00_867
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg2693z00_868,
																																	BgL_list2696z00_871);
																														}}
																														BgL_arg2689z00_863 =
																															MAKE_PAIR
																															(BgL_arg2691z00_866,
																															BgL_arg2692z00_867);
																												}}
																												BgL_newtail1638z00_861 =
																													MAKE_PAIR
																													(BgL_arg2689z00_863,
																													BNIL);
																											}
																											SET_CDR
																												(BgL_tail1637z00_858,
																												BgL_newtail1638z00_861);
																											{
																												obj_t
																													BgL_tail1637z00_1908;
																												obj_t BgL_l1634z00_1906;

																												BgL_l1634z00_1906 =
																													CDR(BgL_l1634z00_857);
																												BgL_tail1637z00_1908 =
																													BgL_newtail1638z00_861;
																												BgL_tail1637z00_858 =
																													BgL_tail1637z00_1908;
																												BgL_l1634z00_857 =
																													BgL_l1634z00_1906;
																												goto
																													BgL_zc3anonymousza32686ze3z83_859;
																											}
																										}
																								}
																							}
																							BgL_arg2682z00_850 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2683z00_851, BNIL);
																						}
																						BgL_arg2674z00_842 =
																							MAKE_PAIR(BgL_arg2681z00_849,
																							BgL_arg2682z00_850);
																					}
																					BgL_arg2675z00_843 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_806);
																					BgL_arg2676z00_844 =
																						BGl_loopz00zzexpand_casez00(CDR
																						(BgL_clausesz00_799));
																					{	/* Expand/case.scm 318 */
																						obj_t BgL_list2678z00_846;

																						{	/* Expand/case.scm 318 */
																							obj_t BgL_arg2679z00_847;

																							{	/* Expand/case.scm 318 */
																								obj_t BgL_arg2680z00_848;

																								BgL_arg2680z00_848 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2679z00_847 =
																									MAKE_PAIR(BgL_arg2676z00_844,
																									BgL_arg2680z00_848);
																							}
																							BgL_list2678z00_846 =
																								MAKE_PAIR(BgL_arg2675z00_843,
																								BgL_arg2679z00_847);
																						}
																						BgL_arg2673z00_841 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2674z00_842,
																							BgL_list2678z00_846);
																					}
																				}
																				return
																					MAKE_PAIR(BgL_arg2672z00_840,
																					BgL_arg2673z00_841);
																			}
																		else
																			{	/* Expand/case.scm 322 */
																				obj_t BgL_arg2702z00_878;

																				obj_t BgL_arg2703z00_879;

																				BgL_arg2702z00_878 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 322 */
																					obj_t BgL_arg2704z00_880;

																					obj_t BgL_arg2705z00_881;

																					obj_t BgL_arg2706z00_882;

																					{	/* Expand/case.scm 322 */
																						obj_t BgL_arg2711z00_887;

																						obj_t BgL_arg2712z00_888;

																						BgL_arg2711z00_887 =
																							CNST_TABLE_REF(((long) 20));
																						{	/* Expand/case.scm 322 */
																							obj_t BgL_arg2713z00_889;

																							obj_t BgL_arg2714z00_890;

																							BgL_arg2713z00_889 =
																								CNST_TABLE_REF(((long) 15));
																							{	/* Expand/case.scm 322 */
																								obj_t BgL_arg2719z00_894;

																								obj_t BgL_arg2720z00_895;

																								BgL_arg2719z00_894 =
																									CNST_TABLE_REF(((long) 17));
																								{	/* Expand/case.scm 322 */
																									obj_t BgL_list2721z00_896;

																									BgL_list2721z00_896 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2720z00_895 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_datumsz00_805,
																										BgL_list2721z00_896);
																								}
																								BgL_arg2714z00_890 =
																									MAKE_PAIR(BgL_arg2719z00_894,
																									BgL_arg2720z00_895);
																							}
																							{	/* Expand/case.scm 322 */
																								obj_t BgL_list2717z00_892;

																								{	/* Expand/case.scm 322 */
																									obj_t BgL_arg2718z00_893;

																									BgL_arg2718z00_893 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2717z00_892 =
																										MAKE_PAIR
																										(BgL_arg2714z00_890,
																										BgL_arg2718z00_893);
																								}
																								BgL_arg2712z00_888 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2713z00_889,
																									BgL_list2717z00_892);
																						}}
																						BgL_arg2704z00_880 =
																							MAKE_PAIR(BgL_arg2711z00_887,
																							BgL_arg2712z00_888);
																					}
																					BgL_arg2705z00_881 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_806);
																					BgL_arg2706z00_882 =
																						BGl_loopz00zzexpand_casez00(CDR
																						(BgL_clausesz00_799));
																					{	/* Expand/case.scm 322 */
																						obj_t BgL_list2708z00_884;

																						{	/* Expand/case.scm 322 */
																							obj_t BgL_arg2709z00_885;

																							{	/* Expand/case.scm 322 */
																								obj_t BgL_arg2710z00_886;

																								BgL_arg2710z00_886 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2709z00_885 =
																									MAKE_PAIR(BgL_arg2706z00_882,
																									BgL_arg2710z00_886);
																							}
																							BgL_list2708z00_884 =
																								MAKE_PAIR(BgL_arg2705z00_881,
																								BgL_arg2709z00_885);
																						}
																						BgL_arg2703z00_879 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2704z00_880,
																							BgL_list2708z00_884);
																				}}
																				return
																					MAKE_PAIR(BgL_arg2702z00_878,
																					BgL_arg2703z00_879);
																			}
																	}
															}
														else
															{	/* Expand/case.scm 305 */
																if (NULLP(CDR(BgL_carzd21857zd2_816)))
																	{	/* Expand/case.scm 305 */
																		BgL_datumz00_808 =
																			CAR(BgL_carzd21857zd2_816);
																		BgL_bodyz00_809 = CDR(BgL_ezd21841zd2_811);
																		if (NULLP(BgL_bodyz00_809))
																			{	/* Expand/case.scm 326 */
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2752z00zzexpand_casez00,
																					BGl_string2755z00zzexpand_casez00,
																					CAR(BgL_clausesz00_799));
																			}
																		else
																			{	/* Expand/case.scm 328 */
																				obj_t BgL_arg2730z00_905;

																				obj_t BgL_arg2731z00_906;

																				BgL_arg2730z00_905 =
																					CNST_TABLE_REF(((long) 12));
																				{	/* Expand/case.scm 328 */
																					obj_t BgL_arg2732z00_907;

																					obj_t BgL_arg2733z00_908;

																					obj_t BgL_arg2734z00_909;

																					{	/* Expand/case.scm 328 */
																						obj_t BgL_arg2739z00_914;

																						obj_t BgL_arg2740z00_915;

																						BgL_arg2739z00_914 =
																							CNST_TABLE_REF(((long) 16));
																						{	/* Expand/case.scm 328 */
																							obj_t BgL_arg2741z00_916;

																							obj_t BgL_arg2742z00_917;

																							BgL_arg2741z00_916 =
																								CNST_TABLE_REF(((long) 15));
																							{	/* Expand/case.scm 328 */
																								obj_t BgL_arg2746z00_921;

																								obj_t BgL_arg2747z00_922;

																								BgL_arg2746z00_921 =
																									CNST_TABLE_REF(((long) 17));
																								{	/* Expand/case.scm 328 */
																									obj_t BgL_list2748z00_923;

																									BgL_list2748z00_923 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2747z00_922 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_datumz00_808,
																										BgL_list2748z00_923);
																								}
																								BgL_arg2742z00_917 =
																									MAKE_PAIR(BgL_arg2746z00_921,
																									BgL_arg2747z00_922);
																							}
																							{	/* Expand/case.scm 328 */
																								obj_t BgL_list2744z00_919;

																								{	/* Expand/case.scm 328 */
																									obj_t BgL_arg2745z00_920;

																									BgL_arg2745z00_920 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2744z00_919 =
																										MAKE_PAIR
																										(BgL_arg2742z00_917,
																										BgL_arg2745z00_920);
																								}
																								BgL_arg2740z00_915 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2741z00_916,
																									BgL_list2744z00_919);
																						}}
																						BgL_arg2732z00_907 =
																							MAKE_PAIR(BgL_arg2739z00_914,
																							BgL_arg2740z00_915);
																					}
																					BgL_arg2733z00_908 =
																						BGl_expandzd2prognzd2zz__prognz00
																						(BgL_bodyz00_809);
																					BgL_arg2734z00_909 =
																						BGl_loopz00zzexpand_casez00(CDR
																						(BgL_clausesz00_799));
																					{	/* Expand/case.scm 328 */
																						obj_t BgL_list2736z00_911;

																						{	/* Expand/case.scm 328 */
																							obj_t BgL_arg2737z00_912;

																							{	/* Expand/case.scm 328 */
																								obj_t BgL_arg2738z00_913;

																								BgL_arg2738z00_913 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2737z00_912 =
																									MAKE_PAIR(BgL_arg2734z00_909,
																									BgL_arg2738z00_913);
																							}
																							BgL_list2736z00_911 =
																								MAKE_PAIR(BgL_arg2733z00_908,
																								BgL_arg2737z00_912);
																						}
																						BgL_arg2731z00_906 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2732z00_907,
																							BgL_list2736z00_911);
																				}}
																				return
																					MAKE_PAIR(BgL_arg2730z00_905,
																					BgL_arg2731z00_906);
																			}
																	}
																else
																	{	/* Expand/case.scm 305 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Expand/case.scm 305 */
														return BFALSE;
													}
											}
									}
								else
									{	/* Expand/case.scm 305 */
										return BFALSE;
									}
							}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_casez00()
	{
		AN_OBJECT;
		{	/* Expand/case.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_casez00()
	{
		AN_OBJECT;
		{	/* Expand/case.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_casez00()
	{
		AN_OBJECT;
		{	/* Expand/case.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2758z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2758z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2758z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2758z00zzexpand_casez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2758z00zzexpand_casez00));
		}
	}

#ifdef __cplusplus
}
#endif
