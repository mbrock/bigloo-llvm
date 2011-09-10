/*===========================================================================*/
/*   (Integrate/ctn.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/ctn.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_ctnz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_ctnz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_ctnz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_ctnz00();
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl__Cnz62Ctz12z70zzintegrate_ctnz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Cnz62Ctz12zd2envza2zzintegrate_ctnz00,
		BgL_bgl__cnza762ctza712za770za7za73597za7,
		BGl__Cnz62Ctz12z70zzintegrate_ctnz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3588z00zzintegrate_ctnz00,
		BgL_bgl_string3588za700za7za7i3598za7, "!!!!! SHOULD NOT BE HERE.....", 29);
	      DEFINE_STRING(BGl_string3590z00zzintegrate_ctnz00,
		BgL_bgl_string3590za700za7za7i3599za7, ",", 1);
	      DEFINE_STRING(BGl_string3589z00zzintegrate_ctnz00,
		BgL_bgl_string3589za700za7za7i3600za7, ":", 1);
	      DEFINE_STRING(BGl_string3591z00zzintegrate_ctnz00,
		BgL_bgl_string3591za700za7za7i3601za7, "Integrate/ctn.scm", 17);
	      DEFINE_STRING(BGl_string3592z00zzintegrate_ctnz00,
		BgL_bgl_string3592za700za7za7i3602za7, "SHould not be here", 18);
	      DEFINE_STRING(BGl_string3593z00zzintegrate_ctnz00,
		BgL_bgl_string3593za700za7za7i3603za7, "integrate_ctn", 13);
	      DEFINE_STRING(BGl_string3594z00zzintegrate_ctnz00,
		BgL_bgl_string3594za700za7za7i3604za7, "Cn&Ct! escape tail ", 19);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long
		BgL_checksumz00_1395, char *BgL_fromz00_1396)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_ctnz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_ctnz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00();
					BGl_cnstzd2initzd2zzintegrate_ctnz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_ctnz00()
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_ctn");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_ctn");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_ctnz00()
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 15 */
			{	/* Integrate/ctn.scm 15 */
				obj_t BgL_cportz00_1387;

				BgL_cportz00_1387 =
					bgl_open_input_string(BGl_string3594z00zzintegrate_ctnz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1388;

					BgL_iz00_1388 = ((long) 2);
				BgL_loopz00_1389:
					if ((BgL_iz00_1388 == ((long) -1)))
						{	/* Integrate/ctn.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/ctn.scm 15 */
							{	/* Integrate/ctn.scm 15 */
								obj_t BgL_arg3596z00_1391;

								{	/* Integrate/ctn.scm 15 */

									{	/* Integrate/ctn.scm 15 */
										obj_t BgL_locationz00_1393;

										BgL_locationz00_1393 = BBOOL(((bool_t) 0));
										{	/* Integrate/ctn.scm 15 */

											BgL_arg3596z00_1391 =
												BGl_readz00zz__readerz00(BgL_cportz00_1387,
												BgL_locationz00_1393);
										}
									}
								}
								{	/* Integrate/ctn.scm 15 */
									int BgL_auxz00_1414;

									BgL_auxz00_1414 = (int) (BgL_iz00_1388);
									CNST_TABLE_SET(BgL_auxz00_1414, BgL_arg3596z00_1391);
							}}
							{	/* Integrate/ctn.scm 15 */
								int BgL_auxz00_1394;

								BgL_auxz00_1394 = (int) ((BgL_iz00_1388 - ((long) 1)));
								{
									long BgL_iz00_1419;

									BgL_iz00_1419 = (long) (BgL_auxz00_1394);
									BgL_iz00_1388 = BgL_iz00_1419;
									goto BgL_loopz00_1389;
								}
							}
						}
				}
			}
		}
	}



/* Cn&Ct! */
	BGL_EXPORTED_DEF obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t BgL_az00_1)
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 31 */
			{
				obj_t BgL_asz00_886;

				obj_t BgL_gzf2cnzf2_887;

				BgL_asz00_886 = BgL_az00_1;
				BgL_gzf2cnzf2_887 = BNIL;
			BgL_zc3anonymousza33496ze3z83_888:
				if (NULLP(BgL_asz00_886))
					{	/* Integrate/ctn.scm 34 */
						return BgL_gzf2cnzf2_887;
					}
				else
					{	/* Integrate/ctn.scm 38 */
						obj_t BgL_az00_890;

						BgL_az00_890 = CAR(BgL_asz00_886);
						{	/* Integrate/ctn.scm 38 */
							obj_t BgL_fz00_891;

							BgL_fz00_891 = CAR(BgL_az00_890);
							{	/* Integrate/ctn.scm 39 */
								obj_t BgL_gz00_892;

								{	/* Integrate/ctn.scm 40 */
									obj_t BgL_pairz00_1344;

									BgL_pairz00_1344 = BgL_az00_890;
									BgL_gz00_892 = CAR(CDR(BgL_pairz00_1344));
								}
								{	/* Integrate/ctn.scm 40 */
									obj_t BgL_kz00_893;

									{	/* Integrate/ctn.scm 41 */
										obj_t BgL_pairz00_1348;

										BgL_pairz00_1348 = BgL_az00_890;
										BgL_kz00_893 = CAR(CDR(CDR(BgL_pairz00_1348)));
									}
									{	/* Integrate/ctn.scm 41 */
										BgL_valuez00_bglt BgL_fiz00_894;

										{
											BgL_variablez00_bglt BgL_auxz00_1430;

											BgL_auxz00_1430 = (BgL_variablez00_bglt) (BgL_fz00_891);
											BgL_fiz00_894 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1430))->
												BgL_valuez00);
										}
										{	/* Integrate/ctn.scm 42 */
											BgL_valuez00_bglt BgL_giz00_895;

											{
												BgL_variablez00_bglt BgL_auxz00_1433;

												BgL_auxz00_1433 = (BgL_variablez00_bglt) (BgL_gz00_892);
												BgL_giz00_895 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1433))->
													BgL_valuez00);
											}
											{	/* Integrate/ctn.scm 43 */

												if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_892,
														BGl_globalz00zzast_varz00))
													{
														obj_t BgL_asz00_1438;

														BgL_asz00_1438 = CDR(BgL_asz00_886);
														BgL_asz00_886 = BgL_asz00_1438;
														goto BgL_zc3anonymousza33496ze3z83_888;
													}
												else
													{	/* Integrate/ctn.scm 45 */
														if ((BgL_kz00_893 == CNST_TABLE_REF(((long) 0))))
															{	/* Integrate/ctn.scm 47 */
																{	/* Integrate/ctn.scm 48 */
																	obj_t BgL_arg3501z00_899;

																	{	/* Integrate/ctn.scm 48 */
																		obj_t BgL_arg3502z00_900;

																		{	/* Integrate/ctn.scm 48 */
																			BgL_sfunzf2iinfozf2_bglt
																				BgL_obj3419z00_1358;
																			BgL_obj3419z00_1358 =
																				(BgL_sfunzf2iinfozf2_bglt)
																				(BgL_fiz00_894);
																			{
																				obj_t BgL_auxz00_1444;

																				{	/* Integrate/ctn.scm 48 */
																					BgL_objectz00_bglt BgL_auxz00_1445;

																					BgL_auxz00_1445 =
																						(BgL_objectz00_bglt)
																						(BgL_obj3419z00_1358);
																					BgL_auxz00_1444 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1445);
																				}
																				BgL_arg3502z00_900 =
																					(((BgL_sfunzf2iinfozf2_bglt)
																						CREF(BgL_auxz00_1444))->BgL_ctz00);
																		}}
																		BgL_arg3501z00_899 =
																			MAKE_PAIR(BgL_gz00_892,
																			BgL_arg3502z00_900);
																	}
																	{	/* Integrate/ctn.scm 48 */
																		BgL_sfunzf2iinfozf2_bglt
																			BgL_obj3421z00_1359;
																		obj_t BgL_val3420z00_1360;

																		BgL_obj3421z00_1359 =
																			(BgL_sfunzf2iinfozf2_bglt)
																			(BgL_fiz00_894);
																		BgL_val3420z00_1360 = BgL_arg3501z00_899;
																		{
																			obj_t BgL_auxz00_1451;

																			{	/* Integrate/ctn.scm 48 */
																				BgL_objectz00_bglt BgL_auxz00_1452;

																				BgL_auxz00_1452 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3421z00_1359);
																				BgL_auxz00_1451 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1452);
																			}
																			((((BgL_sfunzf2iinfozf2_bglt)
																						CREF(BgL_auxz00_1451))->BgL_ctz00) =
																				((obj_t) BgL_val3420z00_1360), BUNSPEC);
																}}}
																{	/* Integrate/ctn.scm 49 */
																	bool_t BgL_testz00_1456;

																	if ((BgL_fz00_891 == BgL_gz00_892))
																		{	/* Integrate/ctn.scm 49 */
																			BgL_testz00_1456 = ((bool_t) 0);
																		}
																	else
																		{	/* Integrate/ctn.scm 50 */
																			bool_t BgL_testz00_1459;

																			{	/* Integrate/ctn.scm 50 */
																				obj_t BgL_auxz00_1460;

																				{	/* Integrate/ctn.scm 50 */
																					obj_t BgL_auxz00_1461;

																					{	/* Integrate/ctn.scm 50 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3422z00_1361;
																						BgL_obj3422z00_1361 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_fiz00_894);
																						{
																							obj_t BgL_auxz00_1463;

																							{	/* Integrate/ctn.scm 50 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1464;
																								BgL_auxz00_1464 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3422z00_1361);
																								BgL_auxz00_1463 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1464);
																							}
																							BgL_auxz00_1461 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									CREF(BgL_auxz00_1463))->
																								BgL_kontz00);
																						}
																					}
																					BgL_auxz00_1460 =
																						BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_gz00_892, BgL_auxz00_1461);
																				}
																				BgL_testz00_1459 =
																					CBOOL(BgL_auxz00_1460);
																			}
																			if (BgL_testz00_1459)
																				{	/* Integrate/ctn.scm 50 */
																					BgL_testz00_1456 = ((bool_t) 0);
																				}
																			else
																				{	/* Integrate/ctn.scm 50 */
																					BgL_testz00_1456 = ((bool_t) 1);
																				}
																		}
																	if (BgL_testz00_1456)
																		{	/* Integrate/ctn.scm 51 */
																			obj_t BgL_arg3504z00_902;

																			{	/* Integrate/ctn.scm 51 */
																				obj_t BgL_arg3505z00_903;

																				{	/* Integrate/ctn.scm 51 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3422z00_1362;
																					BgL_obj3422z00_1362 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_fiz00_894);
																					{
																						obj_t BgL_auxz00_1471;

																						{	/* Integrate/ctn.scm 51 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1472;
																							BgL_auxz00_1472 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3422z00_1362);
																							BgL_auxz00_1471 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1472);
																						}
																						BgL_arg3505z00_903 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1471))->
																							BgL_kontz00);
																					}
																				}
																				BgL_arg3504z00_902 =
																					MAKE_PAIR(BgL_gz00_892,
																					BgL_arg3505z00_903);
																			}
																			{	/* Integrate/ctn.scm 51 */
																				BgL_sfunzf2iinfozf2_bglt
																					BgL_obj3424z00_1363;
																				obj_t BgL_val3423z00_1364;

																				BgL_obj3424z00_1363 =
																					(BgL_sfunzf2iinfozf2_bglt)
																					(BgL_fiz00_894);
																				BgL_val3423z00_1364 =
																					BgL_arg3504z00_902;
																				{
																					obj_t BgL_auxz00_1478;

																					{	/* Integrate/ctn.scm 51 */
																						BgL_objectz00_bglt BgL_auxz00_1479;

																						BgL_auxz00_1479 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3424z00_1363);
																						BgL_auxz00_1478 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_1479);
																					}
																					((((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1478))->
																							BgL_kontz00) =
																						((obj_t) BgL_val3423z00_1364),
																						BUNSPEC);
																				}
																			}
																		}
																	else
																		{	/* Integrate/ctn.scm 49 */
																			BFALSE;
																		}
																}
																{
																	obj_t BgL_asz00_1483;

																	BgL_asz00_1483 = CDR(BgL_asz00_886);
																	BgL_asz00_886 = BgL_asz00_1483;
																	goto BgL_zc3anonymousza33496ze3z83_888;
																}
															}
														else
															{	/* Integrate/ctn.scm 47 */
																if (
																	(BgL_kz00_893 == CNST_TABLE_REF(((long) 1))))
																	{	/* Integrate/ctn.scm 53 */
																		{	/* Integrate/ctn.scm 54 */
																			obj_t BgL_arg3511z00_909;

																			{	/* Integrate/ctn.scm 54 */
																				obj_t BgL_res3587z00_1367;

																				{	/* Integrate/ctn.scm 54 */
																					obj_t BgL_auxz00_1488;

																					BgL_auxz00_1488 =
																						BGL_CURRENT_DYNAMIC_ENV();
																					BgL_res3587z00_1367 =
																						BGL_ENV_CURRENT_ERROR_PORT
																						(BgL_auxz00_1488);
																				}
																				BgL_arg3511z00_909 =
																					BgL_res3587z00_1367;
																			}
																			{	/* Integrate/ctn.scm 54 */
																				obj_t BgL_list3518z00_915;

																				{	/* Integrate/ctn.scm 54 */
																					obj_t BgL_arg3519z00_916;

																					{	/* Integrate/ctn.scm 54 */
																						obj_t BgL_arg3520z00_917;

																						{	/* Integrate/ctn.scm 54 */
																							obj_t BgL_arg3521z00_918;

																							{	/* Integrate/ctn.scm 54 */
																								obj_t BgL_arg3522z00_919;

																								BgL_arg3522z00_919 =
																									MAKE_PAIR
																									(BGl_string3588z00zzintegrate_ctnz00,
																									BNIL);
																								BgL_arg3521z00_918 =
																									MAKE_PAIR
																									(BGl_string3589z00zzintegrate_ctnz00,
																									BgL_arg3522z00_919);
																							}
																							BgL_arg3520z00_917 =
																								MAKE_PAIR(BINT(((long) 54)),
																								BgL_arg3521z00_918);
																						}
																						BgL_arg3519z00_916 =
																							MAKE_PAIR
																							(BGl_string3590z00zzintegrate_ctnz00,
																							BgL_arg3520z00_917);
																					}
																					BgL_list3518z00_915 =
																						MAKE_PAIR
																						(BGl_string3591z00zzintegrate_ctnz00,
																						BgL_arg3519z00_916);
																				}
																				BGl_tprintz00zz__r4_output_6_10_3z00
																					(BgL_arg3511z00_909,
																					BgL_list3518z00_915);
																		}}
																		return
																			BGl_errorz00zz__errorz00(CNST_TABLE_REF((
																					(long) 2)),
																			BGl_string3592z00zzintegrate_ctnz00,
																			BgL_az00_890);
																	}
																else
																	{	/* Integrate/ctn.scm 60 */
																		bool_t BgL_testz00_1500;

																		{	/* Integrate/ctn.scm 60 */
																			BgL_sfunzf2iinfozf2_bglt
																				BgL_obj3413z00_1368;
																			BgL_obj3413z00_1368 =
																				(BgL_sfunzf2iinfozf2_bglt)
																				(BgL_giz00_895);
																			{	/* Integrate/ctn.scm 60 */
																				obj_t BgL_auxz00_1502;

																				{
																					obj_t BgL_auxz00_1503;

																					{	/* Integrate/ctn.scm 60 */
																						BgL_objectz00_bglt BgL_auxz00_1504;

																						BgL_auxz00_1504 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3413z00_1368);
																						BgL_auxz00_1503 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_1504);
																					}
																					BgL_auxz00_1502 =
																						(((BgL_sfunzf2iinfozf2_bglt)
																							CREF(BgL_auxz00_1503))->BgL_uz00);
																				}
																				BgL_testz00_1500 =
																					CBOOL(BgL_auxz00_1502);
																			}
																		}
																		if (BgL_testz00_1500)
																			{	/* Integrate/ctn.scm 60 */
																				{	/* Integrate/ctn.scm 61 */
																					obj_t BgL_arg3524z00_921;

																					{	/* Integrate/ctn.scm 61 */
																						obj_t BgL_arg3525z00_922;

																						{	/* Integrate/ctn.scm 61 */
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_obj3419z00_1369;
																							BgL_obj3419z00_1369 =
																								(BgL_sfunzf2iinfozf2_bglt)
																								(BgL_fiz00_894);
																							{
																								obj_t BgL_auxz00_1510;

																								{	/* Integrate/ctn.scm 61 */
																									BgL_objectz00_bglt
																										BgL_auxz00_1511;
																									BgL_auxz00_1511 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3419z00_1369);
																									BgL_auxz00_1510 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_1511);
																								}
																								BgL_arg3525z00_922 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1510))->
																									BgL_ctz00);
																							}
																						}
																						BgL_arg3524z00_921 =
																							MAKE_PAIR(BgL_gz00_892,
																							BgL_arg3525z00_922);
																					}
																					{	/* Integrate/ctn.scm 61 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3421z00_1370;
																						obj_t BgL_val3420z00_1371;

																						BgL_obj3421z00_1370 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_fiz00_894);
																						BgL_val3420z00_1371 =
																							BgL_arg3524z00_921;
																						{
																							obj_t BgL_auxz00_1517;

																							{	/* Integrate/ctn.scm 61 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1518;
																								BgL_auxz00_1518 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3421z00_1370);
																								BgL_auxz00_1517 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1518);
																							}
																							((((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1517))->
																									BgL_ctz00) =
																								((obj_t) BgL_val3420z00_1371),
																								BUNSPEC);
																						}
																					}
																				}
																				{	/* Integrate/ctn.scm 62 */
																					bool_t BgL_testz00_1522;

																					{	/* Integrate/ctn.scm 62 */
																						obj_t BgL_auxz00_1523;

																						{	/* Integrate/ctn.scm 62 */
																							obj_t BgL_auxz00_1524;

																							{	/* Integrate/ctn.scm 62 */
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_obj3422z00_1372;
																								BgL_obj3422z00_1372 =
																									(BgL_sfunzf2iinfozf2_bglt)
																									(BgL_fiz00_894);
																								{
																									obj_t BgL_auxz00_1526;

																									{	/* Integrate/ctn.scm 62 */
																										BgL_objectz00_bglt
																											BgL_auxz00_1527;
																										BgL_auxz00_1527 =
																											(BgL_objectz00_bglt)
																											(BgL_obj3422z00_1372);
																										BgL_auxz00_1526 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_1527);
																									}
																									BgL_auxz00_1524 =
																										(((BgL_sfunzf2iinfozf2_bglt)
																											CREF(BgL_auxz00_1526))->
																										BgL_kontz00);
																								}
																							}
																							BgL_auxz00_1523 =
																								BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_gz00_892, BgL_auxz00_1524);
																						}
																						BgL_testz00_1522 =
																							CBOOL(BgL_auxz00_1523);
																					}
																					if (BgL_testz00_1522)
																						{	/* Integrate/ctn.scm 62 */
																							BFALSE;
																						}
																					else
																						{	/* Integrate/ctn.scm 63 */
																							obj_t BgL_arg3527z00_924;

																							{	/* Integrate/ctn.scm 63 */
																								obj_t BgL_arg3528z00_925;

																								{	/* Integrate/ctn.scm 63 */
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_obj3422z00_1373;
																									BgL_obj3422z00_1373 =
																										(BgL_sfunzf2iinfozf2_bglt)
																										(BgL_fiz00_894);
																									{
																										obj_t BgL_auxz00_1534;

																										{	/* Integrate/ctn.scm 63 */
																											BgL_objectz00_bglt
																												BgL_auxz00_1535;
																											BgL_auxz00_1535 =
																												(BgL_objectz00_bglt)
																												(BgL_obj3422z00_1373);
																											BgL_auxz00_1534 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_1535);
																										}
																										BgL_arg3528z00_925 =
																											(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1534))->BgL_kontz00);
																									}
																								}
																								BgL_arg3527z00_924 =
																									MAKE_PAIR(BgL_gz00_892,
																									BgL_arg3528z00_925);
																							}
																							{	/* Integrate/ctn.scm 63 */
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_obj3424z00_1374;
																								obj_t BgL_val3423z00_1375;

																								BgL_obj3424z00_1374 =
																									(BgL_sfunzf2iinfozf2_bglt)
																									(BgL_fiz00_894);
																								BgL_val3423z00_1375 =
																									BgL_arg3527z00_924;
																								{
																									obj_t BgL_auxz00_1541;

																									{	/* Integrate/ctn.scm 63 */
																										BgL_objectz00_bglt
																											BgL_auxz00_1542;
																										BgL_auxz00_1542 =
																											(BgL_objectz00_bglt)
																											(BgL_obj3424z00_1374);
																										BgL_auxz00_1541 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_1542);
																									}
																									((((BgL_sfunzf2iinfozf2_bglt)
																												CREF(BgL_auxz00_1541))->
																											BgL_kontz00) =
																										((obj_t)
																											BgL_val3423z00_1375),
																										BUNSPEC);
																								}
																							}
																						}
																				}
																				{
																					obj_t BgL_asz00_1546;

																					BgL_asz00_1546 = CDR(BgL_asz00_886);
																					BgL_asz00_886 = BgL_asz00_1546;
																					goto
																						BgL_zc3anonymousza33496ze3z83_888;
																				}
																			}
																		else
																			{	/* Integrate/ctn.scm 60 */
																				{	/* Integrate/ctn.scm 66 */
																					obj_t BgL_arg3531z00_928;

																					{	/* Integrate/ctn.scm 66 */
																						obj_t BgL_arg3532z00_929;

																						{	/* Integrate/ctn.scm 66 */
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_obj3416z00_1377;
																							BgL_obj3416z00_1377 =
																								(BgL_sfunzf2iinfozf2_bglt)
																								(BgL_fiz00_894);
																							{
																								obj_t BgL_auxz00_1549;

																								{	/* Integrate/ctn.scm 66 */
																									BgL_objectz00_bglt
																										BgL_auxz00_1550;
																									BgL_auxz00_1550 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3416z00_1377);
																									BgL_auxz00_1549 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_1550);
																								}
																								BgL_arg3532z00_929 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1549))->
																									BgL_cnz00);
																							}
																						}
																						BgL_arg3531z00_928 =
																							MAKE_PAIR(BgL_gz00_892,
																							BgL_arg3532z00_929);
																					}
																					{	/* Integrate/ctn.scm 66 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3418z00_1378;
																						obj_t BgL_val3417z00_1379;

																						BgL_obj3418z00_1378 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_fiz00_894);
																						BgL_val3417z00_1379 =
																							BgL_arg3531z00_928;
																						{
																							obj_t BgL_auxz00_1556;

																							{	/* Integrate/ctn.scm 66 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1557;
																								BgL_auxz00_1557 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3418z00_1378);
																								BgL_auxz00_1556 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1557);
																							}
																							((((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1556))->
																									BgL_cnz00) =
																								((obj_t) BgL_val3417z00_1379),
																								BUNSPEC);
																						}
																					}
																				}
																				{	/* Integrate/ctn.scm 67 */
																					bool_t BgL_testz00_1561;

																					{	/* Integrate/ctn.scm 67 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3425z00_1380;
																						BgL_obj3425z00_1380 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_giz00_895);
																						{
																							obj_t BgL_auxz00_1563;

																							{	/* Integrate/ctn.scm 67 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1564;
																								BgL_auxz00_1564 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3425z00_1380);
																								BgL_auxz00_1563 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1564);
																							}
																							BgL_testz00_1561 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									CREF(BgL_auxz00_1563))->
																								BgL_gzf3zf3);
																						}
																					}
																					if (BgL_testz00_1561)
																						{
																							obj_t BgL_asz00_1568;

																							BgL_asz00_1568 =
																								CDR(BgL_asz00_886);
																							BgL_asz00_886 = BgL_asz00_1568;
																							goto
																								BgL_zc3anonymousza33496ze3z83_888;
																						}
																					else
																						{	/* Integrate/ctn.scm 67 */
																							{	/* Integrate/ctn.scm 69 */
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_obj3427z00_1382;
																								bool_t BgL_val3426z00_1383;

																								BgL_obj3427z00_1382 =
																									(BgL_sfunzf2iinfozf2_bglt)
																									(BgL_giz00_895);
																								BgL_val3426z00_1383 =
																									((bool_t) 1);
																								{
																									obj_t BgL_auxz00_1571;

																									{	/* Integrate/ctn.scm 69 */
																										BgL_objectz00_bglt
																											BgL_auxz00_1572;
																										BgL_auxz00_1572 =
																											(BgL_objectz00_bglt)
																											(BgL_obj3427z00_1382);
																										BgL_auxz00_1571 =
																											BGL_OBJECT_WIDENING
																											(BgL_auxz00_1572);
																									}
																									((((BgL_sfunzf2iinfozf2_bglt)
																												CREF(BgL_auxz00_1571))->
																											BgL_gzf3zf3) =
																										((bool_t)
																											BgL_val3426z00_1383),
																										BUNSPEC);
																								}
																							}
																							{	/* Integrate/ctn.scm 70 */
																								obj_t BgL_arg3536z00_932;

																								obj_t BgL_arg3537z00_933;

																								BgL_arg3536z00_932 =
																									CDR(BgL_asz00_886);
																								BgL_arg3537z00_933 =
																									MAKE_PAIR(BgL_gz00_892,
																									BgL_gzf2cnzf2_887);
																								{
																									obj_t BgL_gzf2cnzf2_1579;

																									obj_t BgL_asz00_1578;

																									BgL_asz00_1578 =
																										BgL_arg3536z00_932;
																									BgL_gzf2cnzf2_1579 =
																										BgL_arg3537z00_933;
																									BgL_gzf2cnzf2_887 =
																										BgL_gzf2cnzf2_1579;
																									BgL_asz00_886 =
																										BgL_asz00_1578;
																									goto
																										BgL_zc3anonymousza33496ze3z83_888;
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



/* _Cn&Ct! */
	obj_t BGl__Cnz62Ctz12z70zzintegrate_ctnz00(obj_t BgL_envz00_1385,
		obj_t BgL_az00_1386)
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 31 */
			return BGl_Cnz62Ctz12z70zzintegrate_ctnz00(BgL_az00_1386);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_ctnz00()
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_ctnz00()
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_ctnz00()
	{
		AN_OBJECT;
		{	/* Integrate/ctn.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 408271643),
				BSTRING_TO_STRING(BGl_string3593z00zzintegrate_ctnz00));
		}
	}

#ifdef __cplusplus
}
#endif
