/*===========================================================================*/
/*   (Integrate/definition.scm)                                              */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/definition.scm)*/
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

	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	BGL_EXPORTED_DECL obj_t
		BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t);
	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	extern obj_t BGl_Az00zzintegrate_az00(BgL_globalz00_bglt, BgL_nodez00_bglt);
	static bool_t BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00(obj_t,
		obj_t);
	extern obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_Gz12z12zzintegrate_gz00(obj_t);
	extern obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t, BgL_globalz00_bglt);
	extern obj_t BGl_Uz12z12zzintegrate_uz00();
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzintegrate_definitionz00();
	extern obj_t BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t);
	extern obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_definitionz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_definitionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00();
	static obj_t BGl__integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_Cnz62Ctz12z70zzintegrate_ctnz00(obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2definitionz12zd2envz12zzintegrate_definitionz00,
		BgL_bgl__integrateza7d2def3606za7,
		BGl__integratezd2definitionz12zc0zzintegrate_definitionz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3603z00zzintegrate_definitionz00,
		BgL_bgl_string3603za700za7za7i3607za7, " -->", 4);
	      DEFINE_STRING(BGl_string3604z00zzintegrate_definitionz00,
		BgL_bgl_string3604za700za7za7i3608za7, "           ", 11);
	      DEFINE_STRING(BGl_string3605z00zzintegrate_definitionz00,
		BgL_bgl_string3605za700za7za7i3609za7, "integrate_definition", 20);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long
		BgL_checksumz00_1401, char *BgL_fromz00_1402)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_definitionz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_definitionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_definitionz00()
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"integrate_definition");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_definition");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_definition");
			return BUNSPEC;
		}
	}



/* integrate-definition! */
	BGL_EXPORTED_DEF obj_t
		BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t
		BgL_globalz00_1)
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 57 */
			{	/* Integrate/definition.scm 62 */
				BgL_valuez00_bglt BgL_funz00_886;

				{
					BgL_variablez00_bglt BgL_auxz00_1411;

					BgL_auxz00_1411 = (BgL_variablez00_bglt) (BgL_globalz00_1);
					BgL_funz00_886 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1411))->BgL_valuez00);
				}
				{	/* Integrate/definition.scm 62 */
					obj_t BgL_bodyz00_887;

					{
						BgL_sfunz00_bglt BgL_auxz00_1414;

						BgL_auxz00_1414 = (BgL_sfunz00_bglt) (BgL_funz00_886);
						BgL_bodyz00_887 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1414))->BgL_bodyz00);
					}
					{	/* Integrate/definition.scm 63 */
						obj_t BgL_az00_888;

						BgL_az00_888 =
							BGl_Az00zzintegrate_az00(
							(BgL_globalz00_bglt) (BgL_globalz00_1),
							(BgL_nodez00_bglt) (BgL_bodyz00_887));
						{	/* Integrate/definition.scm 64 */

							BGl_Kza2z12zb0zzintegrate_kkz00(BGl_Kz12z12zzintegrate_kkz00
								(BgL_az00_888, (BgL_globalz00_bglt) (BgL_globalz00_1)));
							BGl_Uz12z12zzintegrate_uz00();
							{	/* Integrate/definition.scm 67 */
								obj_t BgL_gz00_890;

								BgL_gz00_890 =
									BGl_Gz12z12zzintegrate_gz00
									(BGl_Cnz62Ctz12z70zzintegrate_ctnz00(BgL_az00_888));
								if (NULLP(BgL_gz00_890))
									{	/* Integrate/definition.scm 73 */
										obj_t BgL_list3511z00_892;

										BgL_list3511z00_892 = MAKE_PAIR(BgL_globalz00_1, BNIL);
										return BgL_list3511z00_892;
									}
								else
									{	/* Integrate/definition.scm 71 */
										BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00
											(BgL_globalz00_1, BgL_gz00_890);
										{
											obj_t BgL_l3496z00_894;

											BgL_l3496z00_894 = BGl_za2phiza2z00zzintegrate_az00;
										BgL_zc3anonymousza33512ze3z83_895:
											if (PAIRP(BgL_l3496z00_894))
												{	/* Integrate/definition.scm 77 */
													{	/* Integrate/definition.scm 79 */
														obj_t BgL_fz00_897;

														BgL_fz00_897 = CAR(BgL_l3496z00_894);
														{	/* Integrate/definition.scm 79 */
															bool_t BgL_testz00_1433;

															if (BGl_iszd2azf3z21zz__objectz00(BgL_fz00_897,
																	BGl_localz00zzast_varz00))
																{	/* Integrate/definition.scm 79 */
																	bool_t BgL_testz00_1436;

																	{	/* Integrate/definition.scm 79 */
																		BgL_sfunzf2iinfozf2_bglt
																			BgL_obj3425z00_1371;
																		{	/* Integrate/definition.scm 79 */
																			BgL_variablez00_bglt BgL_obj1611z00_1370;

																			BgL_obj1611z00_1370 =
																				(BgL_variablez00_bglt) (
																				(BgL_localz00_bglt) (BgL_fz00_897));
																			BgL_obj3425z00_1371 =
																				(BgL_sfunzf2iinfozf2_bglt) (
																				(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_1370))->
																					BgL_valuez00));
																		}
																		{
																			obj_t BgL_auxz00_1441;

																			{	/* Integrate/definition.scm 79 */
																				BgL_objectz00_bglt BgL_auxz00_1442;

																				BgL_auxz00_1442 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3425z00_1371);
																				BgL_auxz00_1441 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1442);
																			}
																			BgL_testz00_1436 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					CREF(BgL_auxz00_1441))->BgL_gzf3zf3);
																		}
																	}
																	if (BgL_testz00_1436)
																		{	/* Integrate/definition.scm 79 */
																			BgL_testz00_1433 = ((bool_t) 0);
																		}
																	else
																		{	/* Integrate/definition.scm 79 */
																			BgL_testz00_1433 = ((bool_t) 1);
																		}
																}
															else
																{	/* Integrate/definition.scm 79 */
																	BgL_testz00_1433 = ((bool_t) 0);
																}
															if (BgL_testz00_1433)
																{	/* Integrate/definition.scm 80 */
																	obj_t BgL_gz00_899;

																	{	/* Integrate/definition.scm 80 */
																		BgL_sfunzf2iinfozf2_bglt
																			BgL_obj3428z00_1373;
																		{	/* Integrate/definition.scm 80 */
																			BgL_variablez00_bglt BgL_obj1611z00_1372;

																			BgL_obj1611z00_1372 =
																				(BgL_variablez00_bglt) (
																				(BgL_localz00_bglt) (BgL_fz00_897));
																			BgL_obj3428z00_1373 =
																				(BgL_sfunzf2iinfozf2_bglt) (
																				(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_1372))->
																					BgL_valuez00));
																		}
																		{
																			obj_t BgL_auxz00_1450;

																			{	/* Integrate/definition.scm 80 */
																				BgL_objectz00_bglt BgL_auxz00_1451;

																				BgL_auxz00_1451 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3428z00_1373);
																				BgL_auxz00_1450 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1451);
																			}
																			BgL_gz00_899 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					CREF(BgL_auxz00_1450))->BgL_lz00);
																		}
																	}
																	{	/* Integrate/definition.scm 80 */
																		BgL_valuez00_bglt BgL_ifuz00_900;

																		{
																			BgL_variablez00_bglt BgL_auxz00_1455;

																			BgL_auxz00_1455 =
																				(BgL_variablez00_bglt) (BgL_gz00_899);
																			BgL_ifuz00_900 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_1455))->BgL_valuez00);
																		}
																		{	/* Integrate/definition.scm 81 */

																			{	/* Integrate/definition.scm 84 */
																				obj_t BgL_arg3515z00_901;

																				{	/* Integrate/definition.scm 84 */
																					obj_t BgL_arg3517z00_902;

																					{	/* Integrate/definition.scm 84 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3431z00_1375;
																						BgL_obj3431z00_1375 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_ifuz00_900);
																						{
																							obj_t BgL_auxz00_1459;

																							{	/* Integrate/definition.scm 84 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1460;
																								BgL_auxz00_1460 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3431z00_1375);
																								BgL_auxz00_1459 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1460);
																							}
																							BgL_arg3517z00_902 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									CREF(BgL_auxz00_1459))->
																								BgL_ledz00);
																						}
																					}
																					BgL_arg3515z00_901 =
																						MAKE_PAIR(BgL_fz00_897,
																						BgL_arg3517z00_902);
																				}
																				{	/* Integrate/definition.scm 82 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3433z00_1376;
																					obj_t BgL_val3432z00_1377;

																					BgL_obj3433z00_1376 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_ifuz00_900);
																					BgL_val3432z00_1377 =
																						BgL_arg3515z00_901;
																					{
																						obj_t BgL_auxz00_1466;

																						{	/* Integrate/definition.scm 82 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1467;
																							BgL_auxz00_1467 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3433z00_1376);
																							BgL_auxz00_1466 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1467);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									CREF(BgL_auxz00_1466))->
																								BgL_ledz00) =
																							((obj_t) BgL_val3432z00_1377),
																							BUNSPEC);
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Integrate/definition.scm 79 */
																	BFALSE;
																}
														}
													}
													{
														obj_t BgL_l3496z00_1471;

														BgL_l3496z00_1471 = CDR(BgL_l3496z00_894);
														BgL_l3496z00_894 = BgL_l3496z00_1471;
														goto BgL_zc3anonymousza33512ze3z83_895;
													}
												}
											else
												{	/* Integrate/definition.scm 77 */
													((bool_t) 1);
												}
										}
										{
											obj_t BgL_l3498z00_910;

											BgL_l3498z00_910 = BgL_gz00_890;
										BgL_zc3anonymousza33523ze3z83_911:
											if (PAIRP(BgL_l3498z00_910))
												{	/* Integrate/definition.scm 88 */
													BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2
														(CAR(BgL_l3498z00_910));
													{
														obj_t BgL_l3498z00_1477;

														BgL_l3498z00_1477 = CDR(BgL_l3498z00_910);
														BgL_l3498z00_910 = BgL_l3498z00_1477;
														goto BgL_zc3anonymousza33523ze3z83_911;
													}
												}
											else
												{	/* Integrate/definition.scm 88 */
													((bool_t) 1);
												}
										}
										BGl_displacezd2letzd2funz12z12zzintegrate_letzd2funzd2
											(BgL_globalz00_1);
										BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00
											(BgL_gz00_890);
										{	/* Integrate/definition.scm 97 */
											obj_t BgL_newzd2gzd2_916;

											{	/* Integrate/definition.scm 97 */
												obj_t BgL_head3502z00_920;

												{	/* Integrate/definition.scm 97 */
													obj_t BgL_arg3536z00_933;

													{	/* Integrate/definition.scm 97 */
														obj_t BgL_arg3538z00_935;

														BgL_arg3538z00_935 = CAR(BgL_gz00_890);
														BgL_arg3536z00_933 =
															BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31
															((BgL_localz00_bglt) (BgL_arg3538z00_935));
													}
													BgL_head3502z00_920 =
														MAKE_PAIR(BgL_arg3536z00_933, BNIL);
												}
												{	/* Integrate/definition.scm 97 */
													obj_t BgL_g3505z00_921;

													BgL_g3505z00_921 = CDR(BgL_gz00_890);
													{
														obj_t BgL_l3500z00_923;

														obj_t BgL_tail3503z00_924;

														BgL_l3500z00_923 = BgL_g3505z00_921;
														BgL_tail3503z00_924 = BgL_head3502z00_920;
													BgL_zc3anonymousza33529ze3z83_925:
														if (NULLP(BgL_l3500z00_923))
															{	/* Integrate/definition.scm 97 */
																BgL_newzd2gzd2_916 = BgL_head3502z00_920;
															}
														else
															{	/* Integrate/definition.scm 97 */
																obj_t BgL_newtail3504z00_927;

																{	/* Integrate/definition.scm 97 */
																	obj_t BgL_arg3532z00_929;

																	{	/* Integrate/definition.scm 97 */
																		obj_t BgL_arg3535z00_931;

																		BgL_arg3535z00_931 = CAR(BgL_l3500z00_923);
																		BgL_arg3532z00_929 =
																			BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31
																			((BgL_localz00_bglt)
																			(BgL_arg3535z00_931));
																	}
																	BgL_newtail3504z00_927 =
																		MAKE_PAIR(BgL_arg3532z00_929, BNIL);
																}
																SET_CDR(BgL_tail3503z00_924,
																	BgL_newtail3504z00_927);
																{
																	obj_t BgL_tail3503z00_1495;

																	obj_t BgL_l3500z00_1493;

																	BgL_l3500z00_1493 = CDR(BgL_l3500z00_923);
																	BgL_tail3503z00_1495 = BgL_newtail3504z00_927;
																	BgL_tail3503z00_924 = BgL_tail3503z00_1495;
																	BgL_l3500z00_923 = BgL_l3500z00_1493;
																	goto BgL_zc3anonymousza33529ze3z83_925;
																}
															}
													}
												}
											}
											{
												obj_t BgL_auxz00_1498;

												BgL_sfunz00_bglt BgL_auxz00_1496;

												BgL_auxz00_1498 =
													BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
													(BgL_nodez00_bglt) (BgL_bodyz00_887),
													(BgL_variablez00_bglt) (BgL_globalz00_1), BNIL);
												BgL_auxz00_1496 = (BgL_sfunz00_bglt) (BgL_funz00_886);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1496))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_1498), BUNSPEC);
											}
											return MAKE_PAIR(BgL_globalz00_1, BgL_newzd2gzd2_916);
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* _integrate-definition! */
	obj_t BGl__integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t
		BgL_envz00_1399, obj_t BgL_globalz00_1400)
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 57 */
			return
				BGl_integratezd2definitionz12zc0zzintegrate_definitionz00
				(BgL_globalz00_1400);
		}
	}



/* verb-globalization */
	bool_t BGl_verbzd2globaliza7ationz75zzintegrate_definitionz00(obj_t
		BgL_globalz00_2, obj_t BgL_gz00_3)
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 105 */
			{
				obj_t BgL_l3506z00_938;

				BgL_l3506z00_938 = BgL_gz00_3;
			BgL_zc3anonymousza33540ze3z83_939:
				if (PAIRP(BgL_l3506z00_938))
					{	/* Integrate/definition.scm 109 */
						{	/* Integrate/definition.scm 110 */
							obj_t BgL_localz00_941;

							BgL_localz00_941 = CAR(BgL_l3506z00_938);
							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
									BGl_za2verboseza2z00zzengine_paramz00))
								{	/* Integrate/definition.scm 110 */
									if (BGl_zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
											BGl_za2verboseza2z00zzengine_paramz00, BNIL))
										{	/* Integrate/definition.scm 110 */
											obj_t BgL_arg3545z00_947;

											BgL_arg3545z00_947 =
												BGl_shapez00zztools_shapez00(BgL_localz00_941);
											{	/* Integrate/definition.scm 110 */
												obj_t BgL_list3547z00_949;

												{	/* Integrate/definition.scm 110 */
													obj_t BgL_arg3548z00_950;

													{	/* Integrate/definition.scm 110 */
														obj_t BgL_arg3549z00_951;

														{	/* Integrate/definition.scm 110 */
															obj_t BgL_arg3550z00_952;

															BgL_arg3550z00_952 =
																MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
															BgL_arg3549z00_951 =
																MAKE_PAIR
																(BGl_string3603z00zzintegrate_definitionz00,
																BgL_arg3550z00_952);
														}
														BgL_arg3548z00_950 =
															MAKE_PAIR(BgL_arg3545z00_947, BgL_arg3549z00_951);
													}
													BgL_list3547z00_949 =
														MAKE_PAIR
														(BGl_string3604z00zzintegrate_definitionz00,
														BgL_arg3548z00_950);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list3547z00_949);
										}}
									else
										{	/* Integrate/definition.scm 110 */
											BUNSPEC;
										}
								}
							else
								{	/* Integrate/definition.scm 110 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l3506z00_1522;

							BgL_l3506z00_1522 = CDR(BgL_l3506z00_938);
							BgL_l3506z00_938 = BgL_l3506z00_1522;
							goto BgL_zc3anonymousza33540ze3z83_939;
						}
					}
				else
					{	/* Integrate/definition.scm 109 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_definitionz00()
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_definitionz00()
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_definitionz00()
	{
		AN_OBJECT;
		{	/* Integrate/definition.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 408271643),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_kkz00(((long) 442403958),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_uz00(((long) 406437228),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_ctnz00(((long) 112989039),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_gz00(((long) 408163452),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(((long)
					421147681),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_letzd2funzd2(((long)
					23718232),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 507393140),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(((long)
					154146174),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_definitionz00));
		}
	}

#ifdef __cplusplus
}
#endif
