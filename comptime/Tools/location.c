/*===========================================================================*/
/*   (Tools/location.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/location.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_pwdz00zz__osz00();
	static obj_t BGl_za2filezd2lineszd2tableza2z00zztools_locationz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2locationzd2zztools_locationz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__findzd2locationzd2zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_locationz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_locationz00();
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_poszd2ze3linez31zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int,
		obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_locationz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_locationz00();
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t,
		obj_t);
	extern obj_t BGl_za2locationzd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2srczd2dirza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztools_locationz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztools_locationz00();
	static obj_t BGl__locationzd2skipzd2forwardz00zztools_locationz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__locationzd2shapezd2zztools_locationz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2filezd2linesz00zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl__dumpzd2locationzd2zztools_locationz00(obj_t, obj_t, obj_t);
	static obj_t BGl__locationzd2fullzd2fnamez00zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_locationz00();
	static obj_t BGl_methodzd2initzd2zztools_locationz00();
	BGL_EXPORTED_DECL obj_t
		BGl_locationzd2skipzd2forwardz00zztools_locationz00(obj_t, int);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2fullzd2fnamezd2envzd2zztools_locationz00,
		BgL_bgl__locationza7d2full1597za7,
		BGl__locationzd2fullzd2fnamez00zztools_locationz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2shapezd2envz00zztools_locationz00,
		BgL_bgl__locationza7d2shap1598za7,
		BGl__locationzd2shapezd2zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2skipzd2forwardzd2envzd2zztools_locationz00,
		BgL_bgl__locationza7d2skip1599za7,
		BGl__locationzd2skipzd2forwardz00zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2locationzd2envz00zztools_locationz00,
		BgL_bgl__dumpza7d2location1600za7,
		BGl__dumpzd2locationzd2zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2locationzd2envz00zztools_locationz00,
		BgL_bgl__findza7d2location1601za7,
		BGl__findzd2locationzd2zztools_locationz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1585z00zztools_locationz00,
		BgL_bgl_string1585za700za7za7t1602za7, " ", 1);
	      DEFINE_STRING(BGl_string1586z00zztools_locationz00,
		BgL_bgl_string1586za700za7za7t1603za7,
		"*** WARNING:pos->list: NO LINE NUMBER ", 38);
	      DEFINE_STRING(BGl_string1587z00zztools_locationz00,
		BgL_bgl_string1587za700za7za7t1604za7, ":", 1);
	      DEFINE_STRING(BGl_string1588z00zztools_locationz00,
		BgL_bgl_string1588za700za7za7t1605za7, ",", 1);
	      DEFINE_STRING(BGl_string1590z00zztools_locationz00,
		BgL_bgl_string1590za700za7za7t1606za7, "~~ ", 3);
	      DEFINE_STRING(BGl_string1589z00zztools_locationz00,
		BgL_bgl_string1589za700za7za7t1607za7, "Tools/location.scm", 18);
	      DEFINE_STRING(BGl_string1591z00zztools_locationz00,
		BgL_bgl_string1591za700za7za7t1608za7, ": ", 2);
	      DEFINE_STRING(BGl_string1592z00zztools_locationz00,
		BgL_bgl_string1592za700za7za7t1609za7, "____ ", 5);
	      DEFINE_STRING(BGl_string1593z00zztools_locationz00,
		BgL_bgl_string1593za700za7za7t1610za7, "tools_location", 14);
	      DEFINE_STRING(BGl_string1594z00zztools_locationz00,
		BgL_bgl_string1594za700za7za7t1611za7, "at location ", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2locationzf2loczd2envzf2zztools_locationz00,
		BgL_bgl__findza7d2location1612za7,
		BGl__findzd2locationzf2locz20zztools_locationz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zztools_locationz00(long
		BgL_checksumz00_421, char *BgL_fromz00_422)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_locationz00))
				{
					BGl_requirezd2initializa7ationz75zztools_locationz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_locationz00();
					BGl_cnstzd2initzd2zztools_locationz00();
					BGl_importedzd2moduleszd2initz00zztools_locationz00();
					BGl_toplevelzd2initzd2zztools_locationz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "tools_location");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "tools_location");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			{	/* Tools/location.scm 15 */
				obj_t BgL_cportz00_413;

				BgL_cportz00_413 =
					bgl_open_input_string(BGl_string1594z00zztools_locationz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_414;

					BgL_iz00_414 = ((long) 1);
				BgL_loopz00_415:
					if ((BgL_iz00_414 == ((long) -1)))
						{	/* Tools/location.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/location.scm 15 */
							{	/* Tools/location.scm 15 */
								obj_t BgL_arg1596z00_417;

								{	/* Tools/location.scm 15 */

									{	/* Tools/location.scm 15 */
										obj_t BgL_locationz00_419;

										BgL_locationz00_419 = BBOOL(((bool_t) 0));
										{	/* Tools/location.scm 15 */

											BgL_arg1596z00_417 =
												BGl_readz00zz__readerz00(BgL_cportz00_413,
												BgL_locationz00_419);
										}
									}
								}
								{	/* Tools/location.scm 15 */
									int BgL_auxz00_441;

									BgL_auxz00_441 = (int) (BgL_iz00_414);
									CNST_TABLE_SET(BgL_auxz00_441, BgL_arg1596z00_417);
							}}
							{	/* Tools/location.scm 15 */
								int BgL_auxz00_420;

								BgL_auxz00_420 = (int) ((BgL_iz00_414 - ((long) 1)));
								{
									long BgL_iz00_446;

									BgL_iz00_446 = (long) (BgL_auxz00_420);
									BgL_iz00_414 = BgL_iz00_446;
									goto BgL_loopz00_415;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			return (BGl_za2filezd2lineszd2tableza2z00zztools_locationz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}
	}



/* get-file-lines */
	obj_t BGl_getzd2filezd2linesz00zztools_locationz00(obj_t BgL_filez00_15)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 33 */
			{	/* Tools/location.scm 34 */
				obj_t BgL_linesz00_124;

				BgL_linesz00_124 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2filezd2lineszd2tableza2z00zztools_locationz00,
					BgL_filez00_15);
				if (CBOOL(BgL_linesz00_124))
					{	/* Tools/location.scm 35 */
						return BgL_linesz00_124;
					}
				else
					{	/* Tools/location.scm 36 */
						obj_t BgL_linesz00_125;

						BgL_linesz00_125 =
							BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_filez00_15);
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2filezd2lineszd2tableza2z00zztools_locationz00,
							BgL_filez00_15, BgL_linesz00_125);
						return BgL_linesz00_125;
					}
			}
		}
	}



/* pos->line */
	obj_t BGl_poszd2ze3linez31zztools_locationz00(obj_t BgL_filez00_16,
		obj_t BgL_posz00_17)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 44 */
			{	/* Tools/location.scm 45 */
				obj_t BgL_linesz00_126;

				BgL_linesz00_126 =
					BGl_getzd2filezd2linesz00zztools_locationz00(BgL_filez00_16);
				{	/* Tools/location.scm 46 */
					obj_t BgL_rz00_127;

					BgL_rz00_127 =
						BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(CINT
						(BgL_posz00_17), BgL_linesz00_126);
					if (CBOOL(BgL_rz00_127))
						{	/* Tools/location.scm 47 */
							BFALSE;
						}
					else
						{	/* Tools/location.scm 48 */
							obj_t BgL_arg1521z00_128;

							{	/* Tools/location.scm 48 */
								obj_t BgL_res1578z00_240;

								{	/* Tools/location.scm 48 */
									obj_t BgL_auxz00_459;

									BgL_auxz00_459 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1578z00_240 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_459);
								}
								BgL_arg1521z00_128 = BgL_res1578z00_240;
							}
							{	/* Tools/location.scm 48 */
								obj_t BgL_list1528z00_135;

								{	/* Tools/location.scm 48 */
									obj_t BgL_arg1529z00_136;

									{	/* Tools/location.scm 48 */
										obj_t BgL_arg1530z00_137;

										{	/* Tools/location.scm 48 */
											obj_t BgL_arg1531z00_138;

											{	/* Tools/location.scm 48 */
												obj_t BgL_arg1532z00_139;

												{	/* Tools/location.scm 48 */
													obj_t BgL_arg1533z00_140;

													{	/* Tools/location.scm 48 */
														obj_t BgL_arg1534z00_141;

														{	/* Tools/location.scm 48 */
															obj_t BgL_arg1535z00_142;

															BgL_arg1535z00_142 =
																MAKE_PAIR(BgL_posz00_17, BNIL);
															BgL_arg1534z00_141 =
																MAKE_PAIR(BGl_string1585z00zztools_locationz00,
																BgL_arg1535z00_142);
														}
														BgL_arg1533z00_140 =
															MAKE_PAIR(BgL_filez00_16, BgL_arg1534z00_141);
													}
													BgL_arg1532z00_139 =
														MAKE_PAIR(BGl_string1586z00zztools_locationz00,
														BgL_arg1533z00_140);
												}
												BgL_arg1531z00_138 =
													MAKE_PAIR(BGl_string1587z00zztools_locationz00,
													BgL_arg1532z00_139);
											}
											BgL_arg1530z00_137 =
												MAKE_PAIR(BINT(((long) 48)), BgL_arg1531z00_138);
										}
										BgL_arg1529z00_136 =
											MAKE_PAIR(BGl_string1588z00zztools_locationz00,
											BgL_arg1530z00_137);
									}
									BgL_list1528z00_135 =
										MAKE_PAIR(BGl_string1589z00zztools_locationz00,
										BgL_arg1529z00_136);
								}
								BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1521z00_128,
									BgL_list1528z00_135);
						}}
					return BgL_rz00_127;
				}
			}
		}
	}



/* find-location */
	BGL_EXPORTED_DEF obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t
		BgL_expz00_18)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 54 */
			{
				obj_t BgL_locz00_146;

				if (EXTENDED_PAIRP(BgL_expz00_18))
					{	/* Tools/location.scm 64 */
						BgL_locz00_146 = CER(BgL_expz00_18);
						{	/* Tools/location.scm 56 */
							bool_t BgL_testz00_474;

							if (STRUCTP(BgL_locz00_146))
								{	/* Tools/location.scm 56 */
									BgL_testz00_474 =
										(STRUCT_KEY(BgL_locz00_146) == CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* Tools/location.scm 56 */
									BgL_testz00_474 = ((bool_t) 0);
								}
							if (BgL_testz00_474)
								{	/* Tools/location.scm 56 */
									return BgL_locz00_146;
								}
							else
								{	/* Tools/location.scm 56 */
									if (PAIRP(BgL_locz00_146))
										{	/* Tools/location.scm 58 */
											obj_t BgL_cdrzd21397zd2_155;

											BgL_cdrzd21397zd2_155 = CDR(BgL_locz00_146);
											if ((CAR(BgL_locz00_146) == CNST_TABLE_REF(((long) 1))))
												{	/* Tools/location.scm 58 */
													if (PAIRP(BgL_cdrzd21397zd2_155))
														{	/* Tools/location.scm 58 */
															obj_t BgL_cdrzd21401zd2_158;

															BgL_cdrzd21401zd2_158 =
																CDR(BgL_cdrzd21397zd2_155);
															if (PAIRP(BgL_cdrzd21401zd2_158))
																{	/* Tools/location.scm 58 */
																	if (NULLP(CDR(BgL_cdrzd21401zd2_158)))
																		{	/* Tools/location.scm 58 */
																			obj_t BgL_arg1545z00_161;

																			obj_t BgL_arg1546z00_162;

																			BgL_arg1545z00_161 =
																				CAR(BgL_cdrzd21397zd2_155);
																			BgL_arg1546z00_162 =
																				CAR(BgL_cdrzd21401zd2_158);
																			{	/* Tools/location.scm 58 */
																				obj_t BgL_arg1551z00_262;

																				BgL_arg1551z00_262 =
																					BGl_poszd2ze3linez31zztools_locationz00
																					(BgL_arg1545z00_161,
																					BgL_arg1546z00_162);
																				{	/* Tools/location.scm 58 */
																					obj_t BgL_newz00_266;

																					BgL_newz00_266 =
																						create_struct(CNST_TABLE_REF(((long)
																								0)), (int) (((long) 3)));
																					{	/* Tools/location.scm 58 */
																						int BgL_auxz00_501;

																						BgL_auxz00_501 = (int) (((long) 2));
																						STRUCT_SET(BgL_newz00_266,
																							BgL_auxz00_501,
																							BgL_arg1551z00_262);
																					}
																					{	/* Tools/location.scm 58 */
																						int BgL_auxz00_504;

																						BgL_auxz00_504 = (int) (((long) 1));
																						STRUCT_SET(BgL_newz00_266,
																							BgL_auxz00_504,
																							BgL_arg1546z00_162);
																					}
																					{	/* Tools/location.scm 58 */
																						int BgL_auxz00_507;

																						BgL_auxz00_507 = (int) (((long) 0));
																						STRUCT_SET(BgL_newz00_266,
																							BgL_auxz00_507,
																							BgL_arg1545z00_161);
																					}
																					return BgL_newz00_266;
																				}
																			}
																		}
																	else
																		{	/* Tools/location.scm 58 */
																			return BFALSE;
																		}
																}
															else
																{	/* Tools/location.scm 58 */
																	return BFALSE;
																}
														}
													else
														{	/* Tools/location.scm 58 */
															return BFALSE;
														}
												}
											else
												{	/* Tools/location.scm 58 */
													return BFALSE;
												}
										}
									else
										{	/* Tools/location.scm 58 */
											return BFALSE;
										}
								}
						}
					}
				else
					{	/* Tools/location.scm 64 */
						return BFALSE;
					}
			}
		}
	}



/* _find-location */
	obj_t BGl__findzd2locationzd2zztools_locationz00(obj_t BgL_envz00_396,
		obj_t BgL_expz00_397)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 54 */
			return BGl_findzd2locationzd2zztools_locationz00(BgL_expz00_397);
		}
	}



/* find-location/loc */
	BGL_EXPORTED_DEF obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t
		BgL_expz00_19, obj_t BgL_locz00_20)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 73 */
			{	/* Tools/location.scm 74 */
				obj_t BgL_newzd2loczd2_302;

				BgL_newzd2loczd2_302 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_expz00_19);
				{	/* Tools/location.scm 74 */
					bool_t BgL_testz00_513;

					if (STRUCTP(BgL_newzd2loczd2_302))
						{	/* Tools/location.scm 74 */
							BgL_testz00_513 =
								(STRUCT_KEY(BgL_newzd2loczd2_302) ==
								CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Tools/location.scm 74 */
							BgL_testz00_513 = ((bool_t) 0);
						}
					if (BgL_testz00_513)
						{	/* Tools/location.scm 74 */
							return BgL_newzd2loczd2_302;
						}
					else
						{	/* Tools/location.scm 74 */
							return BgL_locz00_20;
						}
				}
			}
		}
	}



/* _find-location/loc */
	obj_t BGl__findzd2locationzf2locz20zztools_locationz00(obj_t BgL_envz00_398,
		obj_t BgL_expz00_399, obj_t BgL_locz00_400)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 73 */
			return
				BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_399,
				BgL_locz00_400);
		}
	}



/* location-full-fname */
	BGL_EXPORTED_DEF obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t
		BgL_locz00_21)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 82 */
			{	/* Tools/location.scm 83 */
				obj_t BgL_filezd2namezd2_170;

				BgL_filezd2namezd2_170 = STRUCT_REF(BgL_locz00_21, (int) (((long) 0)));
				{	/* Tools/location.scm 83 */
					obj_t BgL_fullzd2namezd2_171;

					BgL_fullzd2namezd2_171 =
						BGl_makezd2filezd2namez00zz__osz00(BGl_pwdz00zz__osz00(),
						BgL_filezd2namezd2_170);
					{	/* Tools/location.scm 84 */

						if (fexists(BSTRING_TO_STRING(BgL_fullzd2namezd2_171)))
							{	/* Tools/location.scm 85 */
								return BgL_fullzd2namezd2_171;
							}
						else
							{	/* Tools/location.scm 87 */
								obj_t BgL_libzd2namezd2_173;

								BgL_libzd2namezd2_173 =
									BGl_makezd2filezd2namez00zz__osz00
									(BGl_za2libzd2srczd2dirza2z00zzengine_paramz00,
									BgL_filezd2namezd2_170);
								if (fexists(BSTRING_TO_STRING(BgL_libzd2namezd2_173)))
									{	/* Tools/location.scm 88 */
										return BgL_libzd2namezd2_173;
									}
								else
									{	/* Tools/location.scm 88 */
										return BgL_filezd2namezd2_170;
									}
							}
					}
				}
			}
		}
	}



/* _location-full-fname */
	obj_t BGl__locationzd2fullzd2fnamez00zztools_locationz00(obj_t BgL_envz00_401,
		obj_t BgL_locz00_402)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 82 */
			return BGl_locationzd2fullzd2fnamez00zztools_locationz00(BgL_locz00_402);
		}
	}



/* location-shape */
	BGL_EXPORTED_DEF obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t
		BgL_locz00_22, obj_t BgL_lz00_23)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 95 */
			{	/* Tools/location.scm 96 */
				bool_t BgL_testz00_532;

				if (CBOOL(BGl_za2locationzd2shapezf3za2z21zzengine_paramz00))
					{	/* Tools/location.scm 96 */
						if (STRUCTP(BgL_locz00_22))
							{	/* Tools/location.scm 96 */
								BgL_testz00_532 =
									(STRUCT_KEY(BgL_locz00_22) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Tools/location.scm 96 */
								BgL_testz00_532 = ((bool_t) 0);
							}
					}
				else
					{	/* Tools/location.scm 96 */
						BgL_testz00_532 = ((bool_t) 0);
					}
				if (BgL_testz00_532)
					{	/* Tools/location.scm 97 */
						obj_t BgL_arg1557z00_177;

						{	/* Tools/location.scm 97 */
							obj_t BgL_v1508z00_178;

							BgL_v1508z00_178 = create_vector((int) (((long) 3)));
							VECTOR_SET(BgL_v1508z00_178,
								(int) (((long) 2)),
								STRUCT_REF(BgL_locz00_22, (int) (((long) 2))));
							VECTOR_SET(BgL_v1508z00_178,
								(int) (((long) 1)),
								STRUCT_REF(BgL_locz00_22, (int) (((long) 1))));
							{	/* Tools/location.scm 97 */
								obj_t BgL_arg1565z00_184;

								{	/* Tools/location.scm 97 */
									obj_t BgL_arg1566z00_185;

									BgL_arg1566z00_185 =
										STRUCT_REF(BgL_locz00_22, (int) (((long) 0)));
									{	/* Tools/location.scm 97 */
										obj_t BgL_stringz00_338;

										BgL_stringz00_338 = BgL_arg1566z00_185;
										BgL_arg1565z00_184 =
											string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_338));
								}}
								VECTOR_SET(BgL_v1508z00_178,
									(int) (((long) 0)), BgL_arg1565z00_184);
							}
							BgL_arg1557z00_177 = BgL_v1508z00_178;
						}
						return MAKE_PAIR(BgL_arg1557z00_177, BgL_lz00_23);
					}
				else
					{	/* Tools/location.scm 96 */
						return BgL_lz00_23;
					}
			}
		}
	}



/* _location-shape */
	obj_t BGl__locationzd2shapezd2zztools_locationz00(obj_t BgL_envz00_403,
		obj_t BgL_locz00_404, obj_t BgL_lz00_405)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 95 */
			return
				BGl_locationzd2shapezd2zztools_locationz00(BgL_locz00_404,
				BgL_lz00_405);
		}
	}



/* dump-location */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2locationzd2zztools_locationz00(obj_t
		BgL_fromz00_24, obj_t BgL_exprz00_25)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 107 */
			{	/* Tools/location.scm 108 */
				obj_t BgL_port1509z00_186;

				{	/* Tools/location.scm 108 */
					obj_t BgL_res1582z00_343;

					{	/* Tools/location.scm 108 */
						obj_t BgL_auxz00_558;

						BgL_auxz00_558 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1582z00_343 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_558);
					}
					BgL_port1509z00_186 = BgL_res1582z00_343;
				}
				bgl_display_string(BGl_string1590z00zztools_locationz00,
					BgL_port1509z00_186);
				bgl_display_obj(BgL_fromz00_24, BgL_port1509z00_186);
				bgl_display_string(BGl_string1591z00zztools_locationz00,
					BgL_port1509z00_186);
				bgl_display_obj(BgL_exprz00_25, BgL_port1509z00_186);
				bgl_display_string(BGl_string1585z00zztools_locationz00,
					BgL_port1509z00_186);
				bgl_display_obj(BGl_findzd2locationzd2zztools_locationz00
					(BgL_exprz00_25), BgL_port1509z00_186);
				bgl_display_char(((unsigned char) '\n'), BgL_port1509z00_186);
			}
			{
				obj_t BgL_exprz00_189;

				{	/* Tools/location.scm 109 */
					bool_t BgL_auxz00_569;

					BgL_exprz00_189 = BgL_exprz00_25;
				BgL_zc3anonymousza31568ze3z83_190:
					if (PAIRP(BgL_exprz00_189))
						{	/* Tools/location.scm 110 */
							{	/* Tools/location.scm 112 */
								obj_t BgL_port1510z00_192;

								{	/* Tools/location.scm 112 */
									obj_t BgL_res1583z00_353;

									{	/* Tools/location.scm 112 */
										obj_t BgL_auxz00_572;

										BgL_auxz00_572 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1583z00_353 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_572);
									}
									BgL_port1510z00_192 = BgL_res1583z00_353;
								}
								bgl_display_string(BGl_string1592z00zztools_locationz00,
									BgL_port1510z00_192);
								bgl_display_obj(BgL_fromz00_24, BgL_port1510z00_192);
								bgl_display_string(BGl_string1591z00zztools_locationz00,
									BgL_port1510z00_192);
								bgl_display_obj(BgL_exprz00_189, BgL_port1510z00_192);
								bgl_display_string(BGl_string1585z00zztools_locationz00,
									BgL_port1510z00_192);
								bgl_display_obj(BGl_findzd2locationzd2zztools_locationz00
									(BgL_exprz00_189), BgL_port1510z00_192);
								bgl_display_char(((unsigned char) '\n'), BgL_port1510z00_192);
							}
							{
								obj_t BgL_exprz00_583;

								BgL_exprz00_583 = CDR(BgL_exprz00_189);
								BgL_exprz00_189 = BgL_exprz00_583;
								goto BgL_zc3anonymousza31568ze3z83_190;
							}
						}
					else
						{	/* Tools/location.scm 110 */
							BgL_auxz00_569 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_569);
				}
			}
		}
	}



/* _dump-location */
	obj_t BGl__dumpzd2locationzd2zztools_locationz00(obj_t BgL_envz00_406,
		obj_t BgL_fromz00_407, obj_t BgL_exprz00_408)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 107 */
			return
				BGl_dumpzd2locationzd2zztools_locationz00(BgL_fromz00_407,
				BgL_exprz00_408);
		}
	}



/* location-skip-forward */
	BGL_EXPORTED_DEF obj_t
		BGl_locationzd2skipzd2forwardz00zztools_locationz00(obj_t BgL_locz00_26,
		int BgL_skipz00_27)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 119 */
			{	/* Tools/location.scm 120 */
				bool_t BgL_testz00_587;

				if (STRUCTP(BgL_locz00_26))
					{	/* Tools/location.scm 120 */
						BgL_testz00_587 =
							(STRUCT_KEY(BgL_locz00_26) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Tools/location.scm 120 */
						BgL_testz00_587 = ((bool_t) 0);
					}
				if (BgL_testz00_587)
					{	/* Tools/location.scm 121 */
						obj_t BgL_fnamez00_197;

						long BgL_nposz00_198;

						BgL_fnamez00_197 = STRUCT_REF(BgL_locz00_26, (int) (((long) 0)));
						BgL_nposz00_198 =
							(
							(long) CINT(STRUCT_REF(BgL_locz00_26,
									(int) (((long) 1)))) + (long) (BgL_skipz00_27));
						{	/* Tools/location.scm 123 */
							obj_t BgL_arg1574z00_199;

							BgL_arg1574z00_199 =
								BGl_poszd2ze3linez31zztools_locationz00(BgL_fnamez00_197,
								BINT(BgL_nposz00_198));
							{	/* Tools/location.scm 123 */
								obj_t BgL_newz00_380;

								BgL_newz00_380 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 3)));
								{	/* Tools/location.scm 123 */
									int BgL_auxz00_605;

									BgL_auxz00_605 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_380, BgL_auxz00_605,
										BgL_arg1574z00_199);
								}
								{	/* Tools/location.scm 123 */
									obj_t BgL_auxz00_610;

									int BgL_auxz00_608;

									BgL_auxz00_610 = BINT(BgL_nposz00_198);
									BgL_auxz00_608 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_380, BgL_auxz00_608, BgL_auxz00_610);
								}
								{	/* Tools/location.scm 123 */
									int BgL_auxz00_613;

									BgL_auxz00_613 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_380, BgL_auxz00_613, BgL_fnamez00_197);
								}
								return BgL_newz00_380;
							}
						}
					}
				else
					{	/* Tools/location.scm 120 */
						return BgL_locz00_26;
					}
			}
		}
	}



/* _location-skip-forward */
	obj_t BGl__locationzd2skipzd2forwardz00zztools_locationz00(obj_t
		BgL_envz00_409, obj_t BgL_locz00_410, obj_t BgL_skipz00_411)
	{
		AN_OBJECT;
		{	/* Tools/location.scm 119 */
			return
				BGl_locationzd2skipzd2forwardz00zztools_locationz00(BgL_locz00_410,
				CINT(BgL_skipz00_411));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_locationz00()
	{
		AN_OBJECT;
		{	/* Tools/location.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1593z00zztools_locationz00));
		}
	}

#ifdef __cplusplus
}
#endif
