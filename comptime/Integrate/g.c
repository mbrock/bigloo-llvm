/*===========================================================================*/
/*   (Integrate/g.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/g.scm)*/
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

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	static bool_t
		BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00();
	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	static obj_t BGl__Gz12z12zzintegrate_gz00(obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_Gz12z12zzintegrate_gz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_gz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_gz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_gz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_gz00();
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_gz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Gz12zd2envzc0zzintegrate_gz00,
		BgL_bgl__gza712za712za7za7integr3612z00, BGl__Gz12z12zzintegrate_gz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3611z00zzintegrate_gz00,
		BgL_bgl_string3611za700za7za7i3613za7, "integrate_g", 11);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long
		BgL_checksumz00_1454, char *BgL_fromz00_1455)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_gz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_gz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_gz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_gz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_gz00()
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_g");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_g");
			return BUNSPEC;
		}
	}



/* G! */
	BGL_EXPORTED_DEF obj_t BGl_Gz12z12zzintegrate_gz00(obj_t BgL_gzf2cnzf2_1)
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 32 */
			{
				bool_t BgL_stopzf3zf3_885;

				long BgL_stampz00_886;

				obj_t BgL_gsz00_887;

				BgL_stopzf3zf3_885 = ((bool_t) 0);
				BgL_stampz00_886 = ((long) 0);
				BgL_gsz00_887 = BgL_gzf2cnzf2_1;
			BgL_zc3anonymousza33502ze3z83_888:
				if (BgL_stopzf3zf3_885)
					{	/* Integrate/g.scm 37 */
						{
							obj_t BgL_l3498z00_890;

							BgL_l3498z00_890 = BGl_za2phiza2z00zzintegrate_az00;
						BgL_zc3anonymousza33503ze3z83_891:
							if (PAIRP(BgL_l3498z00_890))
								{	/* Integrate/g.scm 41 */
									{	/* Integrate/g.scm 42 */
										obj_t BgL_fz00_893;

										BgL_fz00_893 = CAR(BgL_l3498z00_890);
										if (BGl_iszd2azf3z21zz__objectz00(BgL_fz00_893,
												BGl_localz00zzast_varz00))
											{	/* Integrate/g.scm 43 */
												BgL_valuez00_bglt BgL_arg3506z00_895;

												{
													BgL_variablez00_bglt BgL_auxz00_1469;

													BgL_auxz00_1469 =
														(BgL_variablez00_bglt) (
														(BgL_localz00_bglt) (BgL_fz00_893));
													BgL_arg3506z00_895 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1469))->
														BgL_valuez00);
												}
												{	/* Integrate/g.scm 43 */
													BgL_sfunzf2iinfozf2_bglt BgL_obj3436z00_1383;

													obj_t BgL_val3435z00_1384;

													BgL_obj3436z00_1383 =
														(BgL_sfunzf2iinfozf2_bglt) (BgL_arg3506z00_895);
													BgL_val3435z00_1384 = BINT(((long) -1));
													{
														obj_t BgL_auxz00_1475;

														{	/* Integrate/g.scm 43 */
															BgL_objectz00_bglt BgL_auxz00_1476;

															BgL_auxz00_1476 =
																(BgL_objectz00_bglt) (BgL_obj3436z00_1383);
															BgL_auxz00_1475 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1476);
														}
														((((BgL_sfunzf2iinfozf2_bglt)
																	CREF(BgL_auxz00_1475))->BgL_istampz00) =
															((obj_t) BgL_val3435z00_1384), BUNSPEC);
											}}}
										else
											{	/* Integrate/g.scm 42 */
												BFALSE;
											}
									}
									{
										obj_t BgL_l3498z00_1480;

										BgL_l3498z00_1480 = CDR(BgL_l3498z00_890);
										BgL_l3498z00_890 = BgL_l3498z00_1480;
										goto BgL_zc3anonymousza33503ze3z83_891;
									}
								}
							else
								{	/* Integrate/g.scm 41 */
									((bool_t) 1);
								}
						}
						BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00
							();
						return BgL_gsz00_887;
					}
				else
					{
						obj_t BgL_phiz00_900;

						bool_t BgL_stopzf3zf3_901;

						obj_t BgL_gsz00_902;

						BgL_phiz00_900 = BGl_za2phiza2z00zzintegrate_az00;
						BgL_stopzf3zf3_901 = ((bool_t) 1);
						BgL_gsz00_902 = BgL_gsz00_887;
					BgL_zc3anonymousza33509ze3z83_903:
						if (NULLP(BgL_phiz00_900))
							{
								obj_t BgL_gsz00_1488;

								long BgL_stampz00_1486;

								bool_t BgL_stopzf3zf3_1485;

								BgL_stopzf3zf3_1485 = BgL_stopzf3zf3_901;
								BgL_stampz00_1486 = (BgL_stampz00_886 + ((long) 1));
								BgL_gsz00_1488 = BgL_gsz00_902;
								BgL_gsz00_887 = BgL_gsz00_1488;
								BgL_stampz00_886 = BgL_stampz00_1486;
								BgL_stopzf3zf3_885 = BgL_stopzf3zf3_1485;
								goto BgL_zc3anonymousza33502ze3z83_888;
							}
						else
							{	/* Integrate/g.scm 54 */
								obj_t BgL_fz00_906;

								BgL_fz00_906 = CAR(BgL_phiz00_900);
								{	/* Integrate/g.scm 54 */
									BgL_valuez00_bglt BgL_fifz00_907;

									{
										BgL_variablez00_bglt BgL_auxz00_1490;

										BgL_auxz00_1490 = (BgL_variablez00_bglt) (BgL_fz00_906);
										BgL_fifz00_907 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1490))->
											BgL_valuez00);
									}
									{	/* Integrate/g.scm 55 */

										{	/* Integrate/g.scm 56 */
											obj_t BgL_g3495z00_908;

											{	/* Integrate/g.scm 56 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3419z00_1391;

												BgL_obj3419z00_1391 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_fifz00_907);
												{
													obj_t BgL_auxz00_1494;

													{	/* Integrate/g.scm 56 */
														BgL_objectz00_bglt BgL_auxz00_1495;

														BgL_auxz00_1495 =
															(BgL_objectz00_bglt) (BgL_obj3419z00_1391);
														BgL_auxz00_1494 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1495);
													}
													BgL_g3495z00_908 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_1494))->BgL_ctz00);
												}
											}
											{
												obj_t BgL_ctz00_910;

												bool_t BgL_stopzf3zf3_911;

												obj_t BgL_gsz00_912;

												BgL_ctz00_910 = BgL_g3495z00_908;
												BgL_stopzf3zf3_911 = BgL_stopzf3zf3_901;
												BgL_gsz00_912 = BgL_gsz00_902;
											BgL_zc3anonymousza33512ze3z83_913:
												if (NULLP(BgL_ctz00_910))
													{
														obj_t BgL_gsz00_1504;

														bool_t BgL_stopzf3zf3_1503;

														obj_t BgL_phiz00_1501;

														BgL_phiz00_1501 = CDR(BgL_phiz00_900);
														BgL_stopzf3zf3_1503 = BgL_stopzf3zf3_911;
														BgL_gsz00_1504 = BgL_gsz00_912;
														BgL_gsz00_902 = BgL_gsz00_1504;
														BgL_stopzf3zf3_901 = BgL_stopzf3zf3_1503;
														BgL_phiz00_900 = BgL_phiz00_1501;
														goto BgL_zc3anonymousza33509ze3z83_903;
													}
												else
													{	/* Integrate/g.scm 61 */
														obj_t BgL_gz00_916;

														BgL_gz00_916 = CAR(BgL_ctz00_910);
														{	/* Integrate/g.scm 61 */
															BgL_valuez00_bglt BgL_gifz00_917;

															{
																BgL_variablez00_bglt BgL_auxz00_1506;

																BgL_auxz00_1506 =
																	(BgL_variablez00_bglt) (BgL_gz00_916);
																BgL_gifz00_917 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1506))->BgL_valuez00);
															}
															{	/* Integrate/g.scm 62 */

																if ((BgL_fz00_906 == BgL_gz00_916))
																	{
																		obj_t BgL_ctz00_1511;

																		BgL_ctz00_1511 = CDR(BgL_ctz00_910);
																		BgL_ctz00_910 = BgL_ctz00_1511;
																		goto BgL_zc3anonymousza33512ze3z83_913;
																	}
																else
																	{	/* Integrate/g.scm 73 */
																		bool_t BgL_testz00_1513;

																		{	/* Integrate/g.scm 73 */
																			BgL_sfunzf2iinfozf2_bglt
																				BgL_obj3425z00_1397;
																			BgL_obj3425z00_1397 =
																				(BgL_sfunzf2iinfozf2_bglt)
																				(BgL_gifz00_917);
																			{
																				obj_t BgL_auxz00_1515;

																				{	/* Integrate/g.scm 73 */
																					BgL_objectz00_bglt BgL_auxz00_1516;

																					BgL_auxz00_1516 =
																						(BgL_objectz00_bglt)
																						(BgL_obj3425z00_1397);
																					BgL_auxz00_1515 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1516);
																				}
																				BgL_testz00_1513 =
																					(((BgL_sfunzf2iinfozf2_bglt)
																						CREF(BgL_auxz00_1515))->
																					BgL_gzf3zf3);
																			}
																		}
																		if (BgL_testz00_1513)
																			{
																				obj_t BgL_ctz00_1520;

																				BgL_ctz00_1520 = CDR(BgL_ctz00_910);
																				BgL_ctz00_910 = BgL_ctz00_1520;
																				goto BgL_zc3anonymousza33512ze3z83_913;
																			}
																		else
																			{	/* Integrate/g.scm 75 */
																				bool_t BgL_testz00_1522;

																				{	/* Integrate/g.scm 75 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3425z00_1399;
																					BgL_obj3425z00_1399 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_fifz00_907);
																					{
																						obj_t BgL_auxz00_1524;

																						{	/* Integrate/g.scm 75 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1525;
																							BgL_auxz00_1525 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3425z00_1399);
																							BgL_auxz00_1524 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1525);
																						}
																						BgL_testz00_1522 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1524))->
																							BgL_gzf3zf3);
																					}
																				}
																				if (BgL_testz00_1522)
																					{	/* Integrate/g.scm 77 */
																						bool_t BgL_testz00_1529;

																						{	/* Integrate/g.scm 77 */
																							obj_t BgL_arg3528z00_930;

																							{	/* Integrate/g.scm 77 */
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_obj3428z00_1400;
																								BgL_obj3428z00_1400 =
																									(BgL_sfunzf2iinfozf2_bglt)
																									(BgL_gifz00_917);
																								{
																									obj_t BgL_auxz00_1531;

																									{	/* Integrate/g.scm 77 */
																										BgL_objectz00_bglt
																											BgL_auxz00_1532;
																										BgL_auxz00_1532 =
																											(BgL_objectz00_bglt)
																											(BgL_obj3428z00_1400);
																										BgL_auxz00_1531 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_1532);
																									}
																									BgL_arg3528z00_930 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											CREF(BgL_auxz00_1531))->
																										BgL_lz00);
																								}
																							}
																							BgL_testz00_1529 =
																								BGl_iszd2azf3z21zz__objectz00
																								(BgL_arg3528z00_930,
																								BGl_variablez00zzast_varz00);
																						}
																						if (BgL_testz00_1529)
																							{	/* Integrate/g.scm 84 */
																								bool_t BgL_testz00_1537;

																								{	/* Integrate/g.scm 84 */
																									obj_t BgL_auxz00_1538;

																									{	/* Integrate/g.scm 84 */
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_obj3428z00_1402;
																										BgL_obj3428z00_1402 =
																											(BgL_sfunzf2iinfozf2_bglt)
																											(BgL_gifz00_917);
																										{
																											obj_t BgL_auxz00_1540;

																											{	/* Integrate/g.scm 84 */
																												BgL_objectz00_bglt
																													BgL_auxz00_1541;
																												BgL_auxz00_1541 =
																													(BgL_objectz00_bglt)
																													(BgL_obj3428z00_1402);
																												BgL_auxz00_1540 =
																													BGL_OBJECT_WIDENING
																													(BgL_auxz00_1541);
																											}
																											BgL_auxz00_1538 =
																												(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1540))->BgL_lz00);
																										}
																									}
																									BgL_testz00_1537 =
																										(BgL_auxz00_1538 ==
																										BgL_fz00_906);
																								}
																								if (BgL_testz00_1537)
																									{
																										obj_t BgL_ctz00_1546;

																										BgL_ctz00_1546 =
																											CDR(BgL_ctz00_910);
																										BgL_ctz00_910 =
																											BgL_ctz00_1546;
																										goto
																											BgL_zc3anonymousza33512ze3z83_913;
																									}
																								else
																									{	/* Integrate/g.scm 84 */
																										{	/* Integrate/g.scm 87 */
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_obj3427z00_1404;
																											bool_t
																												BgL_val3426z00_1405;
																											BgL_obj3427z00_1404 =
																												(BgL_sfunzf2iinfozf2_bglt)
																												(BgL_gifz00_917);
																											BgL_val3426z00_1405 =
																												((bool_t) 1);
																											{
																												obj_t BgL_auxz00_1549;

																												{	/* Integrate/g.scm 87 */
																													BgL_objectz00_bglt
																														BgL_auxz00_1550;
																													BgL_auxz00_1550 =
																														(BgL_objectz00_bglt)
																														(BgL_obj3427z00_1404);
																													BgL_auxz00_1549 =
																														BGL_OBJECT_WIDENING
																														(BgL_auxz00_1550);
																												}
																												((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1549))->BgL_gzf3zf3) = ((bool_t) BgL_val3426z00_1405), BUNSPEC);
																											}
																										}
																										{	/* Integrate/g.scm 91 */
																											obj_t BgL_arg3524z00_926;

																											obj_t BgL_arg3525z00_927;

																											BgL_arg3524z00_926 =
																												CDR(BgL_ctz00_910);
																											BgL_arg3525z00_927 =
																												MAKE_PAIR(BgL_gz00_916,
																												BgL_gsz00_912);
																											{
																												obj_t BgL_gsz00_1558;

																												bool_t
																													BgL_stopzf3zf3_1557;
																												obj_t BgL_ctz00_1556;

																												BgL_ctz00_1556 =
																													BgL_arg3524z00_926;
																												BgL_stopzf3zf3_1557 =
																													((bool_t) 0);
																												BgL_gsz00_1558 =
																													BgL_arg3525z00_927;
																												BgL_gsz00_912 =
																													BgL_gsz00_1558;
																												BgL_stopzf3zf3_911 =
																													BgL_stopzf3zf3_1557;
																												BgL_ctz00_910 =
																													BgL_ctz00_1556;
																												goto
																													BgL_zc3anonymousza33512ze3z83_913;
																											}
																										}
																									}
																							}
																						else
																							{	/* Integrate/g.scm 77 */
																								{	/* Integrate/g.scm 82 */
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_obj3430z00_1407;
																									obj_t BgL_val3429z00_1408;

																									BgL_obj3430z00_1407 =
																										(BgL_sfunzf2iinfozf2_bglt)
																										(BgL_gifz00_917);
																									BgL_val3429z00_1408 =
																										BgL_fz00_906;
																									{
																										obj_t BgL_auxz00_1560;

																										{	/* Integrate/g.scm 82 */
																											BgL_objectz00_bglt
																												BgL_auxz00_1561;
																											BgL_auxz00_1561 =
																												(BgL_objectz00_bglt)
																												(BgL_obj3430z00_1407);
																											BgL_auxz00_1560 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_1561);
																										}
																										((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1560))->BgL_lz00) = ((obj_t) BgL_val3429z00_1408), BUNSPEC);
																									}
																								}
																								{
																									bool_t BgL_stopzf3zf3_1567;

																									obj_t BgL_ctz00_1565;

																									BgL_ctz00_1565 =
																										CDR(BgL_ctz00_910);
																									BgL_stopzf3zf3_1567 =
																										((bool_t) 0);
																									BgL_stopzf3zf3_911 =
																										BgL_stopzf3zf3_1567;
																									BgL_ctz00_910 =
																										BgL_ctz00_1565;
																									goto
																										BgL_zc3anonymousza33512ze3z83_913;
																								}
																							}
																					}
																				else
																					{	/* Integrate/g.scm 92 */
																						bool_t BgL_testz00_1568;

																						{	/* Integrate/g.scm 92 */
																							obj_t BgL_arg3548z00_952;

																							{	/* Integrate/g.scm 92 */
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_obj3428z00_1410;
																								BgL_obj3428z00_1410 =
																									(BgL_sfunzf2iinfozf2_bglt)
																									(BgL_gifz00_917);
																								{
																									obj_t BgL_auxz00_1570;

																									{	/* Integrate/g.scm 92 */
																										BgL_objectz00_bglt
																											BgL_auxz00_1571;
																										BgL_auxz00_1571 =
																											(BgL_objectz00_bglt)
																											(BgL_obj3428z00_1410);
																										BgL_auxz00_1570 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_1571);
																									}
																									BgL_arg3548z00_952 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											CREF(BgL_auxz00_1570))->
																										BgL_lz00);
																								}
																							}
																							BgL_testz00_1568 =
																								BGl_iszd2azf3z21zz__objectz00
																								(BgL_arg3548z00_952,
																								BGl_variablez00zzast_varz00);
																						}
																						if (BgL_testz00_1568)
																							{	/* Integrate/g.scm 116 */
																								bool_t BgL_testz00_1576;

																								{	/* Integrate/g.scm 116 */
																									obj_t BgL_arg3540z00_941;

																									{	/* Integrate/g.scm 116 */
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_obj3428z00_1412;
																										BgL_obj3428z00_1412 =
																											(BgL_sfunzf2iinfozf2_bglt)
																											(BgL_fifz00_907);
																										{
																											obj_t BgL_auxz00_1578;

																											{	/* Integrate/g.scm 116 */
																												BgL_objectz00_bglt
																													BgL_auxz00_1579;
																												BgL_auxz00_1579 =
																													(BgL_objectz00_bglt)
																													(BgL_obj3428z00_1412);
																												BgL_auxz00_1578 =
																													BGL_OBJECT_WIDENING
																													(BgL_auxz00_1579);
																											}
																											BgL_arg3540z00_941 =
																												(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1578))->BgL_lz00);
																										}
																									}
																									BgL_testz00_1576 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_arg3540z00_941,
																										BGl_variablez00zzast_varz00);
																								}
																								if (BgL_testz00_1576)
																									{	/* Integrate/g.scm 124 */
																										bool_t BgL_testz00_1584;

																										{	/* Integrate/g.scm 124 */
																											obj_t BgL_auxz00_1592;

																											obj_t BgL_auxz00_1585;

																											{	/* Integrate/g.scm 124 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3428z00_1415;
																												BgL_obj3428z00_1415 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_gifz00_917);
																												{
																													obj_t BgL_auxz00_1594;

																													{	/* Integrate/g.scm 124 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1595;
																														BgL_auxz00_1595 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3428z00_1415);
																														BgL_auxz00_1594 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1595);
																													}
																													BgL_auxz00_1592 =
																														(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1594))->BgL_lz00);
																												}
																											}
																											{	/* Integrate/g.scm 124 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3428z00_1414;
																												BgL_obj3428z00_1414 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_fifz00_907);
																												{
																													obj_t BgL_auxz00_1587;

																													{	/* Integrate/g.scm 124 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1588;
																														BgL_auxz00_1588 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3428z00_1414);
																														BgL_auxz00_1587 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1588);
																													}
																													BgL_auxz00_1585 =
																														(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1587))->BgL_lz00);
																												}
																											}
																											BgL_testz00_1584 =
																												(BgL_auxz00_1585 ==
																												BgL_auxz00_1592);
																										}
																										if (BgL_testz00_1584)
																											{	/* Integrate/g.scm 124 */
																												{
																													obj_t BgL_ctz00_1600;

																													BgL_ctz00_1600 =
																														CDR(BgL_ctz00_910);
																													BgL_ctz00_910 =
																														BgL_ctz00_1600;
																													goto
																														BgL_zc3anonymousza33512ze3z83_913;
																												}
																											}
																										else
																											{	/* Integrate/g.scm 124 */
																												{	/* Integrate/g.scm 130 */
																													BgL_sfunzf2iinfozf2_bglt
																														BgL_obj3427z00_1417;
																													bool_t
																														BgL_val3426z00_1418;
																													BgL_obj3427z00_1417 =
																														(BgL_sfunzf2iinfozf2_bglt)
																														(BgL_gifz00_917);
																													BgL_val3426z00_1418 =
																														((bool_t) 1);
																													{
																														obj_t
																															BgL_auxz00_1603;
																														{	/* Integrate/g.scm 130 */
																															BgL_objectz00_bglt
																																BgL_auxz00_1604;
																															BgL_auxz00_1604 =
																																(BgL_objectz00_bglt)
																																(BgL_obj3427z00_1417);
																															BgL_auxz00_1603 =
																																BGL_OBJECT_WIDENING
																																(BgL_auxz00_1604);
																														}
																														((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1603))->BgL_gzf3zf3) = ((bool_t) BgL_val3426z00_1418), BUNSPEC);
																													}
																												}
																												{	/* Integrate/g.scm 133 */
																													obj_t
																														BgL_arg3533z00_935;
																													obj_t
																														BgL_arg3535z00_936;
																													BgL_arg3533z00_935 =
																														CDR(BgL_ctz00_910);
																													BgL_arg3535z00_936 =
																														MAKE_PAIR
																														(BgL_gz00_916,
																														BgL_gsz00_912);
																													{
																														obj_t
																															BgL_gsz00_1612;
																														bool_t
																															BgL_stopzf3zf3_1611;
																														obj_t
																															BgL_ctz00_1610;
																														BgL_ctz00_1610 =
																															BgL_arg3533z00_935;
																														BgL_stopzf3zf3_1611
																															= ((bool_t) 0);
																														BgL_gsz00_1612 =
																															BgL_arg3535z00_936;
																														BgL_gsz00_912 =
																															BgL_gsz00_1612;
																														BgL_stopzf3zf3_911 =
																															BgL_stopzf3zf3_1611;
																														BgL_ctz00_910 =
																															BgL_ctz00_1610;
																														goto
																															BgL_zc3anonymousza33512ze3z83_913;
																													}
																												}
																											}
																									}
																								else
																									{	/* Integrate/g.scm 116 */
																										{	/* Integrate/g.scm 122 */
																											obj_t BgL_arg3538z00_939;

																											{	/* Integrate/g.scm 122 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3428z00_1420;
																												BgL_obj3428z00_1420 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_gifz00_917);
																												{
																													obj_t BgL_auxz00_1614;

																													{	/* Integrate/g.scm 122 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1615;
																														BgL_auxz00_1615 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3428z00_1420);
																														BgL_auxz00_1614 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1615);
																													}
																													BgL_arg3538z00_939 =
																														(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1614))->BgL_lz00);
																												}
																											}
																											{	/* Integrate/g.scm 122 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3430z00_1421;
																												obj_t
																													BgL_val3429z00_1422;
																												BgL_obj3430z00_1421 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_fifz00_907);
																												BgL_val3429z00_1422 =
																													BgL_arg3538z00_939;
																												{
																													obj_t BgL_auxz00_1620;

																													{	/* Integrate/g.scm 122 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1621;
																														BgL_auxz00_1621 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3430z00_1421);
																														BgL_auxz00_1620 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1621);
																													}
																													((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1620))->BgL_lz00) = ((obj_t) BgL_val3429z00_1422), BUNSPEC);
																												}
																											}
																										}
																										{
																											bool_t
																												BgL_stopzf3zf3_1627;
																											obj_t BgL_ctz00_1625;

																											BgL_ctz00_1625 =
																												CDR(BgL_ctz00_910);
																											BgL_stopzf3zf3_1627 =
																												((bool_t) 0);
																											BgL_stopzf3zf3_911 =
																												BgL_stopzf3zf3_1627;
																											BgL_ctz00_910 =
																												BgL_ctz00_1625;
																											goto
																												BgL_zc3anonymousza33512ze3z83_913;
																										}
																									}
																							}
																						else
																							{	/* Integrate/g.scm 94 */
																								bool_t BgL_testz00_1628;

																								{	/* Integrate/g.scm 94 */
																									obj_t BgL_arg3547z00_951;

																									{	/* Integrate/g.scm 94 */
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_obj3428z00_1424;
																										BgL_obj3428z00_1424 =
																											(BgL_sfunzf2iinfozf2_bglt)
																											(BgL_fifz00_907);
																										{
																											obj_t BgL_auxz00_1630;

																											{	/* Integrate/g.scm 94 */
																												BgL_objectz00_bglt
																													BgL_auxz00_1631;
																												BgL_auxz00_1631 =
																													(BgL_objectz00_bglt)
																													(BgL_obj3428z00_1424);
																												BgL_auxz00_1630 =
																													BGL_OBJECT_WIDENING
																													(BgL_auxz00_1631);
																											}
																											BgL_arg3547z00_951 =
																												(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1630))->BgL_lz00);
																										}
																									}
																									BgL_testz00_1628 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_arg3547z00_951,
																										BGl_variablez00zzast_varz00);
																								}
																								if (BgL_testz00_1628)
																									{	/* Integrate/g.scm 94 */
																										{	/* Integrate/g.scm 95 */
																											obj_t BgL_arg3542z00_943;

																											{	/* Integrate/g.scm 95 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3428z00_1426;
																												BgL_obj3428z00_1426 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_fifz00_907);
																												{
																													obj_t BgL_auxz00_1637;

																													{	/* Integrate/g.scm 95 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1638;
																														BgL_auxz00_1638 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3428z00_1426);
																														BgL_auxz00_1637 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1638);
																													}
																													BgL_arg3542z00_943 =
																														(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1637))->BgL_lz00);
																												}
																											}
																											{	/* Integrate/g.scm 95 */
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_obj3430z00_1427;
																												obj_t
																													BgL_val3429z00_1428;
																												BgL_obj3430z00_1427 =
																													(BgL_sfunzf2iinfozf2_bglt)
																													(BgL_gifz00_917);
																												BgL_val3429z00_1428 =
																													BgL_arg3542z00_943;
																												{
																													obj_t BgL_auxz00_1643;

																													{	/* Integrate/g.scm 95 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1644;
																														BgL_auxz00_1644 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3430z00_1427);
																														BgL_auxz00_1643 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1644);
																													}
																													((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1643))->BgL_lz00) = ((obj_t) BgL_val3429z00_1428), BUNSPEC);
																												}
																											}
																										}
																										{
																											bool_t
																												BgL_stopzf3zf3_1650;
																											obj_t BgL_ctz00_1648;

																											BgL_ctz00_1648 =
																												CDR(BgL_ctz00_910);
																											BgL_stopzf3zf3_1650 =
																												((bool_t) 0);
																											BgL_stopzf3zf3_911 =
																												BgL_stopzf3zf3_1650;
																											BgL_ctz00_910 =
																												BgL_ctz00_1648;
																											goto
																												BgL_zc3anonymousza33512ze3z83_913;
																										}
																									}
																								else
																									{	/* Integrate/g.scm 103 */
																										bool_t BgL_stopzf3zf3_945;

																										if (BgL_stopzf3zf3_911)
																											{	/* Integrate/g.scm 105 */
																												bool_t BgL_testz00_1652;

																												{	/* Integrate/g.scm 105 */
																													obj_t BgL_auxz00_1653;

																													{	/* Integrate/g.scm 105 */
																														BgL_sfunzf2iinfozf2_bglt
																															BgL_obj3434z00_1430;
																														BgL_obj3434z00_1430
																															=
																															(BgL_sfunzf2iinfozf2_bglt)
																															(BgL_fifz00_907);
																														{
																															obj_t
																																BgL_auxz00_1655;
																															{	/* Integrate/g.scm 105 */
																																BgL_objectz00_bglt
																																	BgL_auxz00_1656;
																																BgL_auxz00_1656
																																	=
																																	(BgL_objectz00_bglt)
																																	(BgL_obj3434z00_1430);
																																BgL_auxz00_1655
																																	=
																																	BGL_OBJECT_WIDENING
																																	(BgL_auxz00_1656);
																															}
																															BgL_auxz00_1653 =
																																(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1655))->BgL_istampz00);
																														}
																													}
																													BgL_testz00_1652 =
																														INTEGERP
																														(BgL_auxz00_1653);
																												}
																												if (BgL_testz00_1652)
																													{	/* Integrate/g.scm 107 */
																														long
																															BgL_auxz00_1661;
																														{	/* Integrate/g.scm 107 */
																															BgL_sfunzf2iinfozf2_bglt
																																BgL_obj3434z00_1432;
																															BgL_obj3434z00_1432
																																=
																																(BgL_sfunzf2iinfozf2_bglt)
																																(BgL_fifz00_907);
																															{	/* Integrate/g.scm 107 */
																																obj_t
																																	BgL_auxz00_1663;
																																{
																																	obj_t
																																		BgL_auxz00_1664;
																																	{	/* Integrate/g.scm 107 */
																																		BgL_objectz00_bglt
																																			BgL_auxz00_1665;
																																		BgL_auxz00_1665
																																			=
																																			(BgL_objectz00_bglt)
																																			(BgL_obj3434z00_1432);
																																		BgL_auxz00_1664
																																			=
																																			BGL_OBJECT_WIDENING
																																			(BgL_auxz00_1665);
																																	}
																																	BgL_auxz00_1663
																																		=
																																		(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1664))->BgL_istampz00);
																																}
																																BgL_auxz00_1661
																																	=
																																	(long)
																																	CINT
																																	(BgL_auxz00_1663);
																														}}
																														BgL_stopzf3zf3_945 =
																															(BgL_auxz00_1661
																															<=
																															BgL_stampz00_886);
																													}
																												else
																													{	/* Integrate/g.scm 105 */
																														BgL_stopzf3zf3_945 =
																															((bool_t) 0);
																													}
																											}
																										else
																											{	/* Integrate/g.scm 103 */
																												BgL_stopzf3zf3_945 =
																													((bool_t) 0);
																											}
																										{	/* Integrate/g.scm 114 */
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_obj3436z00_1435;
																											obj_t BgL_val3435z00_1436;

																											BgL_obj3436z00_1435 =
																												(BgL_sfunzf2iinfozf2_bglt)
																												(BgL_fifz00_907);
																											BgL_val3435z00_1436 =
																												BINT(BgL_stampz00_886);
																											{
																												obj_t BgL_auxz00_1673;

																												{	/* Integrate/g.scm 114 */
																													BgL_objectz00_bglt
																														BgL_auxz00_1674;
																													BgL_auxz00_1674 =
																														(BgL_objectz00_bglt)
																														(BgL_obj3436z00_1435);
																													BgL_auxz00_1673 =
																														BGL_OBJECT_WIDENING
																														(BgL_auxz00_1674);
																												}
																												((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1673))->BgL_istampz00) = ((obj_t) BgL_val3435z00_1436), BUNSPEC);
																											}
																										}
																										{
																											bool_t
																												BgL_stopzf3zf3_1680;
																											obj_t BgL_ctz00_1678;

																											BgL_ctz00_1678 =
																												CDR(BgL_ctz00_910);
																											BgL_stopzf3zf3_1680 =
																												BgL_stopzf3zf3_945;
																											BgL_stopzf3zf3_911 =
																												BgL_stopzf3zf3_1680;
																											BgL_ctz00_910 =
																												BgL_ctz00_1678;
																											goto
																												BgL_zc3anonymousza33512ze3z83_913;
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



/* _G! */
	obj_t BGl__Gz12z12zzintegrate_gz00(obj_t BgL_envz00_1452,
		obj_t BgL_gzf2cnzf2_1453)
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 32 */
			return BGl_Gz12z12zzintegrate_gz00(BgL_gzf2cnzf2_1453);
		}
	}



/* integrate-remaining-local-functions! */
	bool_t BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00()
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 143 */
			{
				obj_t BgL_l3500z00_957;

				BgL_l3500z00_957 = BGl_za2phiza2z00zzintegrate_az00;
			BgL_zc3anonymousza33549ze3z83_958:
				if (PAIRP(BgL_l3500z00_957))
					{	/* Integrate/g.scm 144 */
						{	/* Integrate/g.scm 145 */
							obj_t BgL_fz00_960;

							BgL_fz00_960 = CAR(BgL_l3500z00_957);
							{	/* Integrate/g.scm 145 */
								bool_t BgL_testz00_1685;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_fz00_960,
										BGl_localz00zzast_varz00))
									{	/* Integrate/g.scm 146 */
										bool_t BgL_testz00_1688;

										{	/* Integrate/g.scm 146 */
											BgL_sfunzf2iinfozf2_bglt BgL_obj3425z00_1442;

											{	/* Integrate/g.scm 146 */
												BgL_variablez00_bglt BgL_obj1611z00_1441;

												BgL_obj1611z00_1441 =
													(BgL_variablez00_bglt) (
													(BgL_localz00_bglt) (BgL_fz00_960));
												BgL_obj3425z00_1442 =
													(BgL_sfunzf2iinfozf2_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1441))->
														BgL_valuez00));
											}
											{
												obj_t BgL_auxz00_1693;

												{	/* Integrate/g.scm 146 */
													BgL_objectz00_bglt BgL_auxz00_1694;

													BgL_auxz00_1694 =
														(BgL_objectz00_bglt) (BgL_obj3425z00_1442);
													BgL_auxz00_1693 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1694);
												}
												BgL_testz00_1688 =
													(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1693))->
													BgL_gzf3zf3);
											}
										}
										if (BgL_testz00_1688)
											{	/* Integrate/g.scm 146 */
												BgL_testz00_1685 = ((bool_t) 0);
											}
										else
											{	/* Integrate/g.scm 147 */
												bool_t BgL_testz00_1698;

												{	/* Integrate/g.scm 147 */
													obj_t BgL_arg3558z00_968;

													{	/* Integrate/g.scm 147 */
														BgL_sfunzf2iinfozf2_bglt BgL_obj3428z00_1444;

														{	/* Integrate/g.scm 147 */
															BgL_variablez00_bglt BgL_obj1611z00_1443;

															BgL_obj1611z00_1443 =
																(BgL_variablez00_bglt) (
																(BgL_localz00_bglt) (BgL_fz00_960));
															BgL_obj3428z00_1444 =
																(BgL_sfunzf2iinfozf2_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1443))->BgL_valuez00));
														}
														{
															obj_t BgL_auxz00_1703;

															{	/* Integrate/g.scm 147 */
																BgL_objectz00_bglt BgL_auxz00_1704;

																BgL_auxz00_1704 =
																	(BgL_objectz00_bglt) (BgL_obj3428z00_1444);
																BgL_auxz00_1703 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1704);
															}
															BgL_arg3558z00_968 =
																(((BgL_sfunzf2iinfozf2_bglt)
																	CREF(BgL_auxz00_1703))->BgL_lz00);
														}
													}
													BgL_testz00_1698 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3558z00_968,
														BGl_variablez00zzast_varz00);
												}
												if (BgL_testz00_1698)
													{	/* Integrate/g.scm 147 */
														BgL_testz00_1685 = ((bool_t) 0);
													}
												else
													{	/* Integrate/g.scm 147 */
														BgL_testz00_1685 = ((bool_t) 1);
													}
											}
									}
								else
									{	/* Integrate/g.scm 145 */
										BgL_testz00_1685 = ((bool_t) 0);
									}
								if (BgL_testz00_1685)
									{	/* Integrate/g.scm 145 */
										{	/* Integrate/g.scm 153 */
											BgL_valuez00_bglt BgL_arg3552z00_962;

											obj_t BgL_arg3553z00_963;

											{
												BgL_variablez00_bglt BgL_auxz00_1709;

												BgL_auxz00_1709 =
													(BgL_variablez00_bglt) (
													(BgL_localz00_bglt) (BgL_fz00_960));
												BgL_arg3552z00_962 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1709))->
													BgL_valuez00);
											}
											{	/* Integrate/g.scm 154 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3390z00_1448;

												{	/* Integrate/g.scm 154 */
													BgL_variablez00_bglt BgL_obj1611z00_1447;

													BgL_obj1611z00_1447 =
														(BgL_variablez00_bglt) (
														(BgL_localz00_bglt) (BgL_fz00_960));
													BgL_obj3390z00_1448 =
														(BgL_sfunzf2iinfozf2_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_1447))->BgL_valuez00));
												}
												{
													obj_t BgL_auxz00_1717;

													{	/* Integrate/g.scm 154 */
														BgL_objectz00_bglt BgL_auxz00_1718;

														BgL_auxz00_1718 =
															(BgL_objectz00_bglt) (BgL_obj3390z00_1448);
														BgL_auxz00_1717 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1718);
													}
													BgL_arg3553z00_963 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_1717))->BgL_ownerz00);
												}
											}
											{	/* Integrate/g.scm 153 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3430z00_1449;

												obj_t BgL_val3429z00_1450;

												BgL_obj3430z00_1449 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_arg3552z00_962);
												BgL_val3429z00_1450 = BgL_arg3553z00_963;
												{
													obj_t BgL_auxz00_1723;

													{	/* Integrate/g.scm 153 */
														BgL_objectz00_bglt BgL_auxz00_1724;

														BgL_auxz00_1724 =
															(BgL_objectz00_bglt) (BgL_obj3430z00_1449);
														BgL_auxz00_1723 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1724);
													}
													((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1723))->
															BgL_lz00) =
														((obj_t) BgL_val3429z00_1450), BUNSPEC);
												}
											}
										}
									}
								else
									{	/* Integrate/g.scm 145 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l3500z00_1728;

							BgL_l3500z00_1728 = CDR(BgL_l3500z00_957);
							BgL_l3500z00_957 = BgL_l3500z00_1728;
							goto BgL_zc3anonymousza33549ze3z83_958;
						}
					}
				else
					{	/* Integrate/g.scm 144 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_gz00()
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_gz00()
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_gz00()
	{
		AN_OBJECT;
		{	/* Integrate/g.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 408271643),
				BSTRING_TO_STRING(BGl_string3611z00zzintegrate_gz00));
		}
	}

#ifdef __cplusplus
}
#endif
