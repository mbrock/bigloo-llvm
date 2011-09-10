/*===========================================================================*/
/*   (Globalize/clocto.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/clocto.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_localz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;


	static obj_t
		BGl__ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_cloctoza7();
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_cloctoza7();
	extern obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ctozd2transitivezd2closurez12zd2envzc0zzglobaliza7e_cloctoza7,
		BgL_bgl__ctoza7d2transitiv3721za7,
		BGl__ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7,
		BgL_bgl_string3720za700za7za7g3722za7, "globalize_clocto", 16);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long
		BgL_checksumz00_1397, char *BgL_fromz00_1398)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7()
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_clocto");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_clocto");
			return BUNSPEC;
		}
	}



/* cto-transitive-closure! */
	BGL_EXPORTED_DEF obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt BgL_hostz00_1)
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 36 */
			{	/* Globalize/clocto.scm 37 */
				BgL_valuez00_bglt BgL_infoz00_912;

				{
					BgL_variablez00_bglt BgL_auxz00_1406;

					BgL_auxz00_1406 = (BgL_variablez00_bglt) (BgL_hostz00_1);
					BgL_infoz00_912 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1406))->BgL_valuez00);
				}
				{	/* Globalize/clocto.scm 37 */
					obj_t BgL_ctoz00_913;

					{	/* Globalize/clocto.scm 38 */
						obj_t BgL_auxz00_1416;

						obj_t BgL_auxz00_1409;

						{	/* Globalize/clocto.scm 39 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3339z00_1367;

							BgL_obj3339z00_1367 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_912);
							{
								obj_t BgL_auxz00_1418;

								{	/* Globalize/clocto.scm 39 */
									BgL_objectz00_bglt BgL_auxz00_1419;

									BgL_auxz00_1419 = (BgL_objectz00_bglt) (BgL_obj3339z00_1367);
									BgL_auxz00_1418 = BGL_OBJECT_WIDENING(BgL_auxz00_1419);
								}
								BgL_auxz00_1416 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1418))->
									BgL_cfunctionz00);
							}
						}
						{	/* Globalize/clocto.scm 38 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1366;

							BgL_obj3333z00_1366 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_912);
							{
								obj_t BgL_auxz00_1411;

								{	/* Globalize/clocto.scm 38 */
									BgL_objectz00_bglt BgL_auxz00_1412;

									BgL_auxz00_1412 = (BgL_objectz00_bglt) (BgL_obj3333z00_1366);
									BgL_auxz00_1411 = BGL_OBJECT_WIDENING(BgL_auxz00_1412);
								}
								BgL_auxz00_1409 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1411))->
									BgL_ctoz00);
							}
						}
						BgL_ctoz00_913 = bgl_append2(BgL_auxz00_1409, BgL_auxz00_1416);
					}
					{	/* Globalize/clocto.scm 38 */
						obj_t BgL_ctoza2zd2origz70_914;

						{	/* Globalize/clocto.scm 40 */
							obj_t BgL_list3663z00_946;

							BgL_list3663z00_946 = MAKE_PAIR(BgL_ctoz00_913, BNIL);
							BgL_ctoza2zd2origz70_914 = BgL_list3663z00_946;
						}
						{	/* Globalize/clocto.scm 40 */

							{
								obj_t BgL_ctoz00_916;

								obj_t BgL_ctoza2za2_917;

								BgL_ctoz00_916 = BgL_ctoz00_913;
								BgL_ctoza2za2_917 = BgL_ctoza2zd2origz70_914;
							BgL_zc3anonymousza33637ze3z83_918:
								if (NULLP(BgL_ctoz00_916))
									{	/* Globalize/clocto.scm 46 */
										obj_t BgL_arg3639z00_920;

										if ((BgL_ctoza2za2_917 == BgL_ctoza2zd2origz70_914))
											{	/* Globalize/clocto.scm 46 */
												BgL_arg3639z00_920 = CAR(BgL_ctoza2zd2origz70_914);
											}
										else
											{	/* Globalize/clocto.scm 46 */
												BgL_arg3639z00_920 =
													BGl_unionz00zzglobaliza7e_kaptureza7
													(BgL_ctoza2za2_917);
											}
										{	/* Globalize/clocto.scm 45 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3338z00_1372;

											obj_t BgL_val3337z00_1373;

											BgL_obj3338z00_1372 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_912);
											BgL_val3337z00_1373 = BgL_arg3639z00_920;
											{
												obj_t BgL_auxz00_1432;

												{	/* Globalize/clocto.scm 45 */
													BgL_objectz00_bglt BgL_auxz00_1433;

													BgL_auxz00_1433 =
														(BgL_objectz00_bglt) (BgL_obj3338z00_1372);
													BgL_auxz00_1432 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1433);
												}
												return
													((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1432))->
														BgL_ctoza2za2) =
													((obj_t) BgL_val3337z00_1373), BUNSPEC);
											}
										}
									}
								else
									{	/* Globalize/clocto.scm 49 */
										bool_t BgL_testz00_1437;

										{	/* Globalize/clocto.scm 49 */
											obj_t BgL_arg3662z00_944;

											BgL_arg3662z00_944 = CAR(BgL_ctoz00_916);
											BgL_testz00_1437 =
												(BgL_arg3662z00_944 == BGl_localz00zzast_varz00);
										}
										if (BgL_testz00_1437)
											{
												obj_t BgL_ctoz00_1440;

												BgL_ctoz00_1440 = CDR(BgL_ctoz00_916);
												BgL_ctoz00_916 = BgL_ctoz00_1440;
												goto BgL_zc3anonymousza33637ze3z83_918;
											}
										else
											{	/* Globalize/clocto.scm 51 */
												bool_t BgL_testz00_1442;

												{	/* Globalize/clocto.scm 51 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_1378;

													{	/* Globalize/clocto.scm 51 */
														BgL_valuez00_bglt BgL_auxz00_1443;

														{	/* Globalize/clocto.scm 51 */
															BgL_variablez00_bglt BgL_obj1611z00_1377;

															{	/* Globalize/clocto.scm 51 */
																obj_t BgL_pairz00_1376;

																BgL_pairz00_1376 = BgL_ctoz00_916;
																BgL_obj1611z00_1377 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1376));
															}
															BgL_auxz00_1443 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1377))->BgL_valuez00);
														}
														BgL_obj3323z00_1378 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_1443);
													}
													{
														obj_t BgL_auxz00_1448;

														{	/* Globalize/clocto.scm 51 */
															BgL_objectz00_bglt BgL_auxz00_1449;

															BgL_auxz00_1449 =
																(BgL_objectz00_bglt) (BgL_obj3323z00_1378);
															BgL_auxz00_1448 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1449);
														}
														BgL_testz00_1442 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1448))->BgL_gzf3zf3);
													}
												}
												if (BgL_testz00_1442)
													{
														obj_t BgL_ctoz00_1453;

														BgL_ctoz00_1453 = CDR(BgL_ctoz00_916);
														BgL_ctoz00_916 = BgL_ctoz00_1453;
														goto BgL_zc3anonymousza33637ze3z83_918;
													}
												else
													{	/* Globalize/clocto.scm 53 */
														bool_t BgL_testz00_1455;

														{	/* Globalize/clocto.scm 53 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3336z00_1382;

															{	/* Globalize/clocto.scm 53 */
																BgL_valuez00_bglt BgL_auxz00_1456;

																{	/* Globalize/clocto.scm 53 */
																	BgL_variablez00_bglt BgL_obj1611z00_1381;

																	{	/* Globalize/clocto.scm 53 */
																		obj_t BgL_pairz00_1380;

																		BgL_pairz00_1380 = BgL_ctoz00_916;
																		BgL_obj1611z00_1381 =
																			(BgL_variablez00_bglt) (CAR
																			(BgL_pairz00_1380));
																	}
																	BgL_auxz00_1456 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_obj1611z00_1381))->BgL_valuez00);
																}
																BgL_obj3336z00_1382 =
																	(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_1456);
															}
															{	/* Globalize/clocto.scm 53 */
																obj_t BgL_auxz00_1461;

																{
																	obj_t BgL_auxz00_1462;

																	{	/* Globalize/clocto.scm 53 */
																		BgL_objectz00_bglt BgL_auxz00_1463;

																		BgL_auxz00_1463 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3336z00_1382);
																		BgL_auxz00_1462 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1463);
																	}
																	BgL_auxz00_1461 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_1462))->BgL_ctoza2za2);
																}
																BgL_testz00_1455 = CBOOL(BgL_auxz00_1461);
															}
														}
														if (BgL_testz00_1455)
															{
																obj_t BgL_ctoz00_1468;

																BgL_ctoz00_1468 = CDR(BgL_ctoz00_916);
																BgL_ctoz00_916 = BgL_ctoz00_1468;
																goto BgL_zc3anonymousza33637ze3z83_918;
															}
														else
															{	/* Globalize/clocto.scm 57 */
																obj_t BgL_calleez00_928;

																{	/* Globalize/clocto.scm 57 */
																	obj_t BgL_auxz00_1481;

																	obj_t BgL_auxz00_1470;

																	{	/* Globalize/clocto.scm 59 */
																		BgL_sfunzf2ginfozf2_bglt
																			BgL_obj3339z00_1389;
																		{	/* Globalize/clocto.scm 59 */
																			BgL_valuez00_bglt BgL_auxz00_1482;

																			{	/* Globalize/clocto.scm 59 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_1388;
																				{	/* Globalize/clocto.scm 59 */
																					obj_t BgL_pairz00_1387;

																					BgL_pairz00_1387 = BgL_ctoz00_916;
																					BgL_obj1611z00_1388 =
																						(BgL_variablez00_bglt) (CAR
																						(BgL_pairz00_1387));
																				}
																				BgL_auxz00_1482 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_1388))->
																					BgL_valuez00);
																			}
																			BgL_obj3339z00_1389 =
																				(BgL_sfunzf2ginfozf2_bglt)
																				(BgL_auxz00_1482);
																		}
																		{
																			obj_t BgL_auxz00_1487;

																			{	/* Globalize/clocto.scm 59 */
																				BgL_objectz00_bglt BgL_auxz00_1488;

																				BgL_auxz00_1488 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3339z00_1389);
																				BgL_auxz00_1487 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1488);
																			}
																			BgL_auxz00_1481 =
																				(((BgL_sfunzf2ginfozf2_bglt)
																					CREF(BgL_auxz00_1487))->
																				BgL_cfunctionz00);
																		}
																	}
																	{	/* Globalize/clocto.scm 58 */
																		BgL_sfunzf2ginfozf2_bglt
																			BgL_obj3333z00_1386;
																		{	/* Globalize/clocto.scm 58 */
																			BgL_valuez00_bglt BgL_auxz00_1471;

																			{	/* Globalize/clocto.scm 58 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_1385;
																				{	/* Globalize/clocto.scm 58 */
																					obj_t BgL_pairz00_1384;

																					BgL_pairz00_1384 = BgL_ctoz00_916;
																					BgL_obj1611z00_1385 =
																						(BgL_variablez00_bglt) (CAR
																						(BgL_pairz00_1384));
																				}
																				BgL_auxz00_1471 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_1385))->
																					BgL_valuez00);
																			}
																			BgL_obj3333z00_1386 =
																				(BgL_sfunzf2ginfozf2_bglt)
																				(BgL_auxz00_1471);
																		}
																		{
																			obj_t BgL_auxz00_1476;

																			{	/* Globalize/clocto.scm 58 */
																				BgL_objectz00_bglt BgL_auxz00_1477;

																				BgL_auxz00_1477 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3333z00_1386);
																				BgL_auxz00_1476 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1477);
																			}
																			BgL_auxz00_1470 =
																				(((BgL_sfunzf2ginfozf2_bglt)
																					CREF(BgL_auxz00_1476))->BgL_ctoz00);
																		}
																	}
																	BgL_calleez00_928 =
																		bgl_append2(BgL_auxz00_1470,
																		BgL_auxz00_1481);
																}
																{	/* Globalize/clocto.scm 61 */
																	BgL_valuez00_bglt BgL_arg3647z00_929;

																	{	/* Globalize/clocto.scm 61 */
																		BgL_variablez00_bglt BgL_obj1611z00_1391;

																		{	/* Globalize/clocto.scm 61 */
																			obj_t BgL_pairz00_1390;

																			BgL_pairz00_1390 = BgL_ctoz00_916;
																			BgL_obj1611z00_1391 =
																				(BgL_variablez00_bglt) (CAR
																				(BgL_pairz00_1390));
																		}
																		BgL_arg3647z00_929 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_obj1611z00_1391))->
																			BgL_valuez00);
																	}
																	{	/* Globalize/clocto.scm 61 */
																		BgL_sfunzf2ginfozf2_bglt
																			BgL_obj3338z00_1392;
																		obj_t BgL_val3337z00_1393;

																		BgL_obj3338z00_1392 =
																			(BgL_sfunzf2ginfozf2_bglt)
																			(BgL_arg3647z00_929);
																		BgL_val3337z00_1393 = BTRUE;
																		{
																			obj_t BgL_auxz00_1497;

																			{	/* Globalize/clocto.scm 61 */
																				BgL_objectz00_bglt BgL_auxz00_1498;

																				BgL_auxz00_1498 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3338z00_1392);
																				BgL_auxz00_1497 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1498);
																			}
																			((((BgL_sfunzf2ginfozf2_bglt)
																						CREF(BgL_auxz00_1497))->
																					BgL_ctoza2za2) =
																				((obj_t) BgL_val3337z00_1393), BUNSPEC);
																		}
																	}
																}
																{	/* Globalize/clocto.scm 63 */
																	obj_t BgL_arg3649z00_931;

																	obj_t BgL_arg3650z00_932;

																	BgL_arg3649z00_931 =
																		bgl_append2(CDR(BgL_ctoz00_916),
																		BgL_calleez00_928);
																	BgL_arg3650z00_932 =
																		MAKE_PAIR(BgL_calleez00_928,
																		BgL_ctoza2za2_917);
																	{
																		obj_t BgL_ctoza2za2_1506;

																		obj_t BgL_ctoz00_1505;

																		BgL_ctoz00_1505 = BgL_arg3649z00_931;
																		BgL_ctoza2za2_1506 = BgL_arg3650z00_932;
																		BgL_ctoza2za2_917 = BgL_ctoza2za2_1506;
																		BgL_ctoz00_916 = BgL_ctoz00_1505;
																		goto BgL_zc3anonymousza33637ze3z83_918;
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



/* _cto-transitive-closure! */
	obj_t BGl__ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(obj_t
		BgL_envz00_1395, obj_t BgL_hostz00_1396)
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 36 */
			return
				BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(
				(BgL_localz00_bglt) (BgL_hostz00_1396));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_cloctoza7()
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_cloctoza7()
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7()
	{
		AN_OBJECT;
		{	/* Globalize/clocto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					482601228),
				BSTRING_TO_STRING(BGl_string3720z00zzglobaliza7e_cloctoza7));
		}
	}

#ifdef __cplusplus
}
#endif
