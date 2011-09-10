/*===========================================================================*/
/*   (Integrate/kk.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/kk.scm)*/
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
	static obj_t BGl__Kz12z12zzintegrate_kkz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_kkz00();
	BGL_EXPORTED_DECL obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_methodzd2initzd2zzintegrate_kkz00();
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_kkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_kkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kkz00();
	static obj_t BGl_Kze21z12zf0zzintegrate_kkz00(obj_t, obj_t);
	static obj_t BGl_Kze22z12zf0zzintegrate_kkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00();
	static obj_t BGl__Kza2z12zb0zzintegrate_kkz00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Kza2z12zd2envz62zzintegrate_kkz00,
		BgL_bgl__kza7a2za712za7b0za7za7int3609za7, BGl__Kza2z12zb0zzintegrate_kkz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Kz12zd2envzc0zzintegrate_kkz00,
		BgL_bgl__kza712za712za7za7integr3610z00, BGl__Kz12z12zzintegrate_kkz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3605z00zzintegrate_kkz00,
		BgL_bgl_string3605za700za7za7i3611za7, "integrate_kk", 12);
	      DEFINE_STRING(BGl_string3606z00zzintegrate_kkz00,
		BgL_bgl_string3606za700za7za7i3612za7, "tail bottom ", 12);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long
		BgL_checksumz00_1485, char *BgL_fromz00_1486)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_kkz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_kkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00();
					BGl_cnstzd2initzd2zzintegrate_kkz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_kkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00()
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_kk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_kk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_kkz00()
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 15 */
			{	/* Integrate/kk.scm 15 */
				obj_t BgL_cportz00_1477;

				BgL_cportz00_1477 =
					bgl_open_input_string(BGl_string3606z00zzintegrate_kkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1478;

					BgL_iz00_1478 = ((long) 1);
				BgL_loopz00_1479:
					if ((BgL_iz00_1478 == ((long) -1)))
						{	/* Integrate/kk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/kk.scm 15 */
							{	/* Integrate/kk.scm 15 */
								obj_t BgL_arg3608z00_1481;

								{	/* Integrate/kk.scm 15 */

									{	/* Integrate/kk.scm 15 */
										obj_t BgL_locationz00_1483;

										BgL_locationz00_1483 = BBOOL(((bool_t) 0));
										{	/* Integrate/kk.scm 15 */

											BgL_arg3608z00_1481 =
												BGl_readz00zz__readerz00(BgL_cportz00_1477,
												BgL_locationz00_1483);
										}
									}
								}
								{	/* Integrate/kk.scm 15 */
									int BgL_auxz00_1501;

									BgL_auxz00_1501 = (int) (BgL_iz00_1478);
									CNST_TABLE_SET(BgL_auxz00_1501, BgL_arg3608z00_1481);
							}}
							{	/* Integrate/kk.scm 15 */
								int BgL_auxz00_1484;

								BgL_auxz00_1484 = (int) ((BgL_iz00_1478 - ((long) 1)));
								{
									long BgL_iz00_1506;

									BgL_iz00_1506 = (long) (BgL_auxz00_1484);
									BgL_iz00_1478 = BgL_iz00_1506;
									goto BgL_loopz00_1479;
								}
							}
						}
				}
			}
		}
	}



/* K! */
	BGL_EXPORTED_DEF obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t BgL_az00_1,
		BgL_globalz00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 44 */
			{	/* Integrate/kk.scm 50 */
				BgL_valuez00_bglt BgL_ifunz00_890;

				{
					BgL_variablez00_bglt BgL_auxz00_1508;

					BgL_auxz00_1508 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_ifunz00_890 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1508))->BgL_valuez00);
				}
				{	/* Integrate/kk.scm 51 */
					obj_t BgL_arg3497z00_891;

					{	/* Integrate/kk.scm 51 */
						obj_t BgL_list3498z00_892;

						BgL_list3498z00_892 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						BgL_arg3497z00_891 = BgL_list3498z00_892;
					}
					{	/* Integrate/kk.scm 51 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3409z00_1393;

						obj_t BgL_val3408z00_1394;

						BgL_obj3409z00_1393 = (BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_890);
						BgL_val3408z00_1394 = BgL_arg3497z00_891;
						{
							obj_t BgL_auxz00_1514;

							{	/* Integrate/kk.scm 51 */
								BgL_objectz00_bglt BgL_auxz00_1515;

								BgL_auxz00_1515 = (BgL_objectz00_bglt) (BgL_obj3409z00_1393);
								BgL_auxz00_1514 = BGL_OBJECT_WIDENING(BgL_auxz00_1515);
							}
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1514))->BgL_kz00) =
								((obj_t) BgL_val3408z00_1394), BUNSPEC);
				}}}
				{	/* Integrate/kk.scm 52 */
					obj_t BgL_arg3499z00_893;

					{	/* Integrate/kk.scm 52 */
						obj_t BgL_list3500z00_894;

						BgL_list3500z00_894 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						BgL_arg3499z00_893 = BgL_list3500z00_894;
					}
					{	/* Integrate/kk.scm 52 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3412z00_1397;

						obj_t BgL_val3411z00_1398;

						BgL_obj3412z00_1397 = (BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_890);
						BgL_val3411z00_1398 = BgL_arg3499z00_893;
						{
							obj_t BgL_auxz00_1522;

							{	/* Integrate/kk.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_1523;

								BgL_auxz00_1523 = (BgL_objectz00_bglt) (BgL_obj3412z00_1397);
								BgL_auxz00_1522 = BGL_OBJECT_WIDENING(BgL_auxz00_1523);
							}
							((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1522))->
									BgL_kza2za2) = ((obj_t) BgL_val3411z00_1398), BUNSPEC);
				}}}
				return
					BGl_Kze22z12zf0zzintegrate_kkz00(BgL_az00_1,
					BGl_Kze21z12zf0zzintegrate_kkz00(BgL_az00_1, BNIL));
			}
		}
	}



/* _K! */
	obj_t BGl__Kz12z12zzintegrate_kkz00(obj_t BgL_envz00_1472,
		obj_t BgL_az00_1473, obj_t BgL_varz00_1474)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 44 */
			return
				BGl_Kz12z12zzintegrate_kkz00(BgL_az00_1473,
				(BgL_globalz00_bglt) (BgL_varz00_1474));
		}
	}



/* K.1! */
	obj_t BGl_Kze21z12zf0zzintegrate_kkz00(obj_t BgL_az00_3,
		obj_t BgL_azd2tailzd2_4)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 58 */
		BGl_Kze21z12zf0zzintegrate_kkz00:
			if (NULLP(BgL_az00_3))
				{	/* Integrate/kk.scm 60 */
					return BgL_azd2tailzd2_4;
				}
			else
				{	/* Integrate/kk.scm 62 */
					obj_t BgL_prz00_897;

					BgL_prz00_897 = CAR(BgL_az00_3);
					{	/* Integrate/kk.scm 62 */
						obj_t BgL_fz00_898;

						BgL_fz00_898 = CAR(BgL_prz00_897);
						{	/* Integrate/kk.scm 63 */
							obj_t BgL_gz00_899;

							{	/* Integrate/kk.scm 64 */
								obj_t BgL_pairz00_1402;

								BgL_pairz00_1402 = BgL_prz00_897;
								BgL_gz00_899 = CAR(CDR(BgL_pairz00_1402));
							}
							{	/* Integrate/kk.scm 64 */
								obj_t BgL_kz00_900;

								{	/* Integrate/kk.scm 65 */
									obj_t BgL_pairz00_1406;

									BgL_pairz00_1406 = BgL_prz00_897;
									BgL_kz00_900 = CAR(CDR(CDR(BgL_pairz00_1406)));
								}
								{	/* Integrate/kk.scm 65 */

									if ((BgL_kz00_900 == CNST_TABLE_REF(((long) 1))))
										{	/* Integrate/kk.scm 67 */
											if ((BgL_fz00_898 == BgL_gz00_899))
												{
													obj_t BgL_az00_1545;

													BgL_az00_1545 = CDR(BgL_az00_3);
													BgL_az00_3 = BgL_az00_1545;
													goto BGl_Kze21z12zf0zzintegrate_kkz00;
												}
											else
												{	/* Integrate/kk.scm 70 */
													obj_t BgL_arg3506z00_904;

													obj_t BgL_arg3507z00_905;

													BgL_arg3506z00_904 = CDR(BgL_az00_3);
													BgL_arg3507z00_905 =
														MAKE_PAIR(BgL_prz00_897, BgL_azd2tailzd2_4);
													{
														obj_t BgL_azd2tailzd2_1550;

														obj_t BgL_az00_1549;

														BgL_az00_1549 = BgL_arg3506z00_904;
														BgL_azd2tailzd2_1550 = BgL_arg3507z00_905;
														BgL_azd2tailzd2_4 = BgL_azd2tailzd2_1550;
														BgL_az00_3 = BgL_az00_1549;
														goto BGl_Kze21z12zf0zzintegrate_kkz00;
													}
												}
										}
									else
										{	/* Integrate/kk.scm 72 */
											BgL_valuez00_bglt BgL_ifunz00_906;

											{
												BgL_variablez00_bglt BgL_auxz00_1551;

												BgL_auxz00_1551 = (BgL_variablez00_bglt) (BgL_gz00_899);
												BgL_ifunz00_906 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1551))->
													BgL_valuez00);
											}
											{	/* Integrate/kk.scm 73 */
												bool_t BgL_testz00_1554;

												{	/* Integrate/kk.scm 73 */
													obj_t BgL_auxz00_1555;

													{	/* Integrate/kk.scm 73 */
														obj_t BgL_auxz00_1556;

														{	/* Integrate/kk.scm 73 */
															BgL_sfunzf2iinfozf2_bglt BgL_obj3407z00_1415;

															BgL_obj3407z00_1415 =
																(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_906);
															{
																obj_t BgL_auxz00_1558;

																{	/* Integrate/kk.scm 73 */
																	BgL_objectz00_bglt BgL_auxz00_1559;

																	BgL_auxz00_1559 =
																		(BgL_objectz00_bglt) (BgL_obj3407z00_1415);
																	BgL_auxz00_1558 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1559);
																}
																BgL_auxz00_1556 =
																	(((BgL_sfunzf2iinfozf2_bglt)
																		CREF(BgL_auxz00_1558))->BgL_kz00);
															}
														}
														BgL_auxz00_1555 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_kz00_900, BgL_auxz00_1556);
													}
													BgL_testz00_1554 = CBOOL(BgL_auxz00_1555);
												}
												if (BgL_testz00_1554)
													{
														obj_t BgL_az00_1565;

														BgL_az00_1565 = CDR(BgL_az00_3);
														BgL_az00_3 = BgL_az00_1565;
														goto BGl_Kze21z12zf0zzintegrate_kkz00;
													}
												else
													{	/* Integrate/kk.scm 73 */
														{	/* Integrate/kk.scm 76 */
															obj_t BgL_arg3510z00_909;

															{	/* Integrate/kk.scm 76 */
																obj_t BgL_arg3511z00_910;

																{	/* Integrate/kk.scm 76 */
																	BgL_sfunzf2iinfozf2_bglt BgL_obj3407z00_1417;

																	BgL_obj3407z00_1417 =
																		(BgL_sfunzf2iinfozf2_bglt)
																		(BgL_ifunz00_906);
																	{
																		obj_t BgL_auxz00_1568;

																		{	/* Integrate/kk.scm 76 */
																			BgL_objectz00_bglt BgL_auxz00_1569;

																			BgL_auxz00_1569 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3407z00_1417);
																			BgL_auxz00_1568 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1569);
																		}
																		BgL_arg3511z00_910 =
																			(((BgL_sfunzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1568))->BgL_kz00);
																	}
																}
																BgL_arg3510z00_909 =
																	MAKE_PAIR(BgL_kz00_900, BgL_arg3511z00_910);
															}
															{	/* Integrate/kk.scm 76 */
																BgL_sfunzf2iinfozf2_bglt BgL_obj3409z00_1418;

																obj_t BgL_val3408z00_1419;

																BgL_obj3409z00_1418 =
																	(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_906);
																BgL_val3408z00_1419 = BgL_arg3510z00_909;
																{
																	obj_t BgL_auxz00_1575;

																	{	/* Integrate/kk.scm 76 */
																		BgL_objectz00_bglt BgL_auxz00_1576;

																		BgL_auxz00_1576 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3409z00_1418);
																		BgL_auxz00_1575 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1576);
																	}
																	((((BgL_sfunzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1575))->BgL_kz00) =
																		((obj_t) BgL_val3408z00_1419), BUNSPEC);
																}
															}
														}
														{	/* Integrate/kk.scm 77 */
															obj_t BgL_arg3512z00_911;

															{	/* Integrate/kk.scm 77 */
																obj_t BgL_arg3513z00_912;

																{	/* Integrate/kk.scm 77 */
																	BgL_sfunzf2iinfozf2_bglt BgL_obj3410z00_1420;

																	BgL_obj3410z00_1420 =
																		(BgL_sfunzf2iinfozf2_bglt)
																		(BgL_ifunz00_906);
																	{
																		obj_t BgL_auxz00_1581;

																		{	/* Integrate/kk.scm 77 */
																			BgL_objectz00_bglt BgL_auxz00_1582;

																			BgL_auxz00_1582 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3410z00_1420);
																			BgL_auxz00_1581 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1582);
																		}
																		BgL_arg3513z00_912 =
																			(((BgL_sfunzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1581))->BgL_kza2za2);
																	}
																}
																BgL_arg3512z00_911 =
																	MAKE_PAIR(BgL_kz00_900, BgL_arg3513z00_912);
															}
															{	/* Integrate/kk.scm 77 */
																BgL_sfunzf2iinfozf2_bglt BgL_obj3412z00_1421;

																obj_t BgL_val3411z00_1422;

																BgL_obj3412z00_1421 =
																	(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_906);
																BgL_val3411z00_1422 = BgL_arg3512z00_911;
																{
																	obj_t BgL_auxz00_1588;

																	{	/* Integrate/kk.scm 77 */
																		BgL_objectz00_bglt BgL_auxz00_1589;

																		BgL_auxz00_1589 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3412z00_1421);
																		BgL_auxz00_1588 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1589);
																	}
																	((((BgL_sfunzf2iinfozf2_bglt)
																				CREF(BgL_auxz00_1588))->BgL_kza2za2) =
																		((obj_t) BgL_val3411z00_1422), BUNSPEC);
																}
															}
														}
														{
															obj_t BgL_az00_1593;

															BgL_az00_1593 = CDR(BgL_az00_3);
															BgL_az00_3 = BgL_az00_1593;
															goto BGl_Kze21z12zf0zzintegrate_kkz00;
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



/* K.2! */
	obj_t BGl_Kze22z12zf0zzintegrate_kkz00(obj_t BgL_az00_5,
		obj_t BgL_azd2tailzd2_6)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 83 */
			{
				bool_t BgL_continuez00_916;

				BgL_continuez00_916 = ((bool_t) 1);
			BgL_zc3anonymousza33516ze3z83_917:
				if (BgL_continuez00_916)
					{
						obj_t BgL_atz00_919;

						bool_t BgL_continuez00_920;

						BgL_atz00_919 = BgL_azd2tailzd2_6;
						BgL_continuez00_920 = ((bool_t) 0);
					BgL_zc3anonymousza33517ze3z83_921:
						if (NULLP(BgL_atz00_919))
							{
								bool_t BgL_continuez00_1598;

								BgL_continuez00_1598 = BgL_continuez00_920;
								BgL_continuez00_916 = BgL_continuez00_1598;
								goto BgL_zc3anonymousza33516ze3z83_917;
							}
						else
							{	/* Integrate/kk.scm 95 */
								BgL_valuez00_bglt BgL_ifunz00_923;

								{
									BgL_variablez00_bglt BgL_auxz00_1599;

									BgL_auxz00_1599 =
										(BgL_variablez00_bglt) (CAR(CAR(BgL_atz00_919)));
									BgL_ifunz00_923 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1599))->
										BgL_valuez00);
								}
								{	/* Integrate/kk.scm 96 */
									bool_t BgL_testz00_1604;

									{	/* Integrate/kk.scm 96 */
										obj_t BgL_auxz00_1605;

										{	/* Integrate/kk.scm 96 */
											BgL_sfunzf2iinfozf2_bglt BgL_obj3407z00_1428;

											BgL_obj3407z00_1428 =
												(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_923);
											{
												obj_t BgL_auxz00_1607;

												{	/* Integrate/kk.scm 96 */
													BgL_objectz00_bglt BgL_auxz00_1608;

													BgL_auxz00_1608 =
														(BgL_objectz00_bglt) (BgL_obj3407z00_1428);
													BgL_auxz00_1607 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1608);
												}
												BgL_auxz00_1605 =
													(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1607))->
													BgL_kz00);
											}
										}
										BgL_testz00_1604 = NULLP(BgL_auxz00_1605);
									}
									if (BgL_testz00_1604)
										{
											obj_t BgL_atz00_1613;

											BgL_atz00_1613 = CDR(BgL_atz00_919);
											BgL_atz00_919 = BgL_atz00_1613;
											goto BgL_zc3anonymousza33517ze3z83_921;
										}
									else
										{	/* Integrate/kk.scm 98 */
											obj_t BgL_gz00_926;

											{	/* Integrate/kk.scm 98 */
												obj_t BgL_pairz00_1432;

												BgL_pairz00_1432 = CAR(BgL_atz00_919);
												BgL_gz00_926 = CAR(CDR(BgL_pairz00_1432));
											}
											{	/* Integrate/kk.scm 98 */
												BgL_valuez00_bglt BgL_gifunz00_927;

												{
													BgL_variablez00_bglt BgL_auxz00_1618;

													BgL_auxz00_1618 =
														(BgL_variablez00_bglt) (BgL_gz00_926);
													BgL_gifunz00_927 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1618))->
														BgL_valuez00);
												}
												{	/* Integrate/kk.scm 99 */

													{	/* Integrate/kk.scm 100 */
														obj_t BgL_g3495z00_928;

														{	/* Integrate/kk.scm 100 */
															BgL_sfunzf2iinfozf2_bglt BgL_obj3407z00_1437;

															BgL_obj3407z00_1437 =
																(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_923);
															{
																obj_t BgL_auxz00_1622;

																{	/* Integrate/kk.scm 100 */
																	BgL_objectz00_bglt BgL_auxz00_1623;

																	BgL_auxz00_1623 =
																		(BgL_objectz00_bglt) (BgL_obj3407z00_1437);
																	BgL_auxz00_1622 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1623);
																}
																BgL_g3495z00_928 =
																	(((BgL_sfunzf2iinfozf2_bglt)
																		CREF(BgL_auxz00_1622))->BgL_kz00);
															}
														}
														{
															obj_t BgL_ksz00_930;

															bool_t BgL_continuez00_931;

															BgL_ksz00_930 = BgL_g3495z00_928;
															BgL_continuez00_931 = BgL_continuez00_920;
														BgL_zc3anonymousza33521ze3z83_932:
															if (NULLP(BgL_ksz00_930))
																{
																	bool_t BgL_continuez00_1631;

																	obj_t BgL_atz00_1629;

																	BgL_atz00_1629 = CDR(BgL_atz00_919);
																	BgL_continuez00_1631 = BgL_continuez00_931;
																	BgL_continuez00_920 = BgL_continuez00_1631;
																	BgL_atz00_919 = BgL_atz00_1629;
																	goto BgL_zc3anonymousza33517ze3z83_921;
																}
															else
																{	/* Integrate/kk.scm 107 */
																	obj_t BgL_kz00_935;

																	BgL_kz00_935 = CAR(BgL_ksz00_930);
																	{	/* Integrate/kk.scm 108 */
																		bool_t BgL_testz00_1633;

																		{	/* Integrate/kk.scm 108 */
																			obj_t BgL_auxz00_1634;

																			{	/* Integrate/kk.scm 108 */
																				obj_t BgL_auxz00_1635;

																				{	/* Integrate/kk.scm 108 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3407z00_1441;
																					BgL_obj3407z00_1441 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_gifunz00_927);
																					{
																						obj_t BgL_auxz00_1637;

																						{	/* Integrate/kk.scm 108 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1638;
																							BgL_auxz00_1638 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3407z00_1441);
																							BgL_auxz00_1637 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1638);
																						}
																						BgL_auxz00_1635 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1637))->
																							BgL_kz00);
																					}
																				}
																				BgL_auxz00_1634 =
																					BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(BgL_kz00_935, BgL_auxz00_1635);
																			}
																			BgL_testz00_1633 = CBOOL(BgL_auxz00_1634);
																		}
																		if (BgL_testz00_1633)
																			{
																				obj_t BgL_ksz00_1644;

																				BgL_ksz00_1644 = CDR(BgL_ksz00_930);
																				BgL_ksz00_930 = BgL_ksz00_1644;
																				goto BgL_zc3anonymousza33521ze3z83_932;
																			}
																		else
																			{	/* Integrate/kk.scm 108 */
																				{	/* Integrate/kk.scm 113 */
																					obj_t BgL_arg3526z00_938;

																					{	/* Integrate/kk.scm 113 */
																						obj_t BgL_arg3527z00_939;

																						{	/* Integrate/kk.scm 113 */
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_obj3407z00_1443;
																							BgL_obj3407z00_1443 =
																								(BgL_sfunzf2iinfozf2_bglt)
																								(BgL_gifunz00_927);
																							{
																								obj_t BgL_auxz00_1647;

																								{	/* Integrate/kk.scm 113 */
																									BgL_objectz00_bglt
																										BgL_auxz00_1648;
																									BgL_auxz00_1648 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3407z00_1443);
																									BgL_auxz00_1647 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_1648);
																								}
																								BgL_arg3527z00_939 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1647))->
																									BgL_kz00);
																							}
																						}
																						BgL_arg3526z00_938 =
																							MAKE_PAIR(BgL_kz00_935,
																							BgL_arg3527z00_939);
																					}
																					{	/* Integrate/kk.scm 111 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3409z00_1444;
																						obj_t BgL_val3408z00_1445;

																						BgL_obj3409z00_1444 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_gifunz00_927);
																						BgL_val3408z00_1445 =
																							BgL_arg3526z00_938;
																						{
																							obj_t BgL_auxz00_1654;

																							{	/* Integrate/kk.scm 111 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1655;
																								BgL_auxz00_1655 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3409z00_1444);
																								BgL_auxz00_1654 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1655);
																							}
																							((((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1654))->
																									BgL_kz00) =
																								((obj_t) BgL_val3408z00_1445),
																								BUNSPEC);
																						}
																					}
																				}
																				{	/* Integrate/kk.scm 116 */
																					obj_t BgL_arg3528z00_940;

																					{	/* Integrate/kk.scm 116 */
																						obj_t BgL_arg3529z00_941;

																						{	/* Integrate/kk.scm 116 */
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_obj3410z00_1446;
																							BgL_obj3410z00_1446 =
																								(BgL_sfunzf2iinfozf2_bglt)
																								(BgL_gifunz00_927);
																							{
																								obj_t BgL_auxz00_1660;

																								{	/* Integrate/kk.scm 116 */
																									BgL_objectz00_bglt
																										BgL_auxz00_1661;
																									BgL_auxz00_1661 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3410z00_1446);
																									BgL_auxz00_1660 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_1661);
																								}
																								BgL_arg3529z00_941 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1660))->
																									BgL_kza2za2);
																							}
																						}
																						BgL_arg3528z00_940 =
																							MAKE_PAIR(BgL_kz00_935,
																							BgL_arg3529z00_941);
																					}
																					{	/* Integrate/kk.scm 114 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3412z00_1447;
																						obj_t BgL_val3411z00_1448;

																						BgL_obj3412z00_1447 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_gifunz00_927);
																						BgL_val3411z00_1448 =
																							BgL_arg3528z00_940;
																						{
																							obj_t BgL_auxz00_1667;

																							{	/* Integrate/kk.scm 114 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1668;
																								BgL_auxz00_1668 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3412z00_1447);
																								BgL_auxz00_1667 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1668);
																							}
																							((((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1667))->
																									BgL_kza2za2) =
																								((obj_t) BgL_val3411z00_1448),
																								BUNSPEC);
																						}
																					}
																				}
																				{
																					bool_t BgL_continuez00_1674;

																					obj_t BgL_ksz00_1672;

																					BgL_ksz00_1672 = CDR(BgL_ksz00_930);
																					BgL_continuez00_1674 = ((bool_t) 1);
																					BgL_continuez00_931 =
																						BgL_continuez00_1674;
																					BgL_ksz00_930 = BgL_ksz00_1672;
																					goto
																						BgL_zc3anonymousza33521ze3z83_932;
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
				else
					{	/* Integrate/kk.scm 86 */
						return BgL_azd2tailzd2_6;
					}
			}
		}
	}



/* K*! */
	BGL_EXPORTED_DEF obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t
		BgL_azd2tailzd2_7)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 132 */
			{
				bool_t BgL_continuez00_952;

				BgL_continuez00_952 = ((bool_t) 1);
			BgL_zc3anonymousza33537ze3z83_953:
				if (BgL_continuez00_952)
					{
						obj_t BgL_atz00_955;

						bool_t BgL_continuez00_956;

						BgL_atz00_955 = BgL_azd2tailzd2_7;
						BgL_continuez00_956 = ((bool_t) 0);
					BgL_zc3anonymousza33538ze3z83_957:
						if (NULLP(BgL_atz00_955))
							{
								bool_t BgL_continuez00_1678;

								BgL_continuez00_1678 = BgL_continuez00_956;
								BgL_continuez00_952 = BgL_continuez00_1678;
								goto BgL_zc3anonymousza33537ze3z83_953;
							}
						else
							{	/* Integrate/kk.scm 141 */
								BgL_valuez00_bglt BgL_ifunz00_959;

								{	/* Integrate/kk.scm 141 */
									BgL_variablez00_bglt BgL_obj1611z00_1456;

									{	/* Integrate/kk.scm 141 */
										obj_t BgL_auxz00_1679;

										{	/* Integrate/kk.scm 141 */
											obj_t BgL_pairz00_1452;

											BgL_pairz00_1452 = CAR(BgL_atz00_955);
											BgL_auxz00_1679 = CAR(CDR(BgL_pairz00_1452));
										}
										BgL_obj1611z00_1456 =
											(BgL_variablez00_bglt) (BgL_auxz00_1679);
									}
									BgL_ifunz00_959 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1456))->
										BgL_valuez00);
								}
								{	/* Integrate/kk.scm 142 */
									bool_t BgL_testz00_1685;

									{	/* Integrate/kk.scm 142 */
										obj_t BgL_auxz00_1686;

										{	/* Integrate/kk.scm 142 */
											BgL_sfunzf2iinfozf2_bglt BgL_obj3410z00_1457;

											BgL_obj3410z00_1457 =
												(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_959);
											{
												obj_t BgL_auxz00_1688;

												{	/* Integrate/kk.scm 142 */
													BgL_objectz00_bglt BgL_auxz00_1689;

													BgL_auxz00_1689 =
														(BgL_objectz00_bglt) (BgL_obj3410z00_1457);
													BgL_auxz00_1688 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1689);
												}
												BgL_auxz00_1686 =
													(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1688))->
													BgL_kza2za2);
											}
										}
										BgL_testz00_1685 = NULLP(BgL_auxz00_1686);
									}
									if (BgL_testz00_1685)
										{
											bool_t BgL_continuez00_1694;

											BgL_continuez00_1694 = BgL_continuez00_956;
											BgL_continuez00_952 = BgL_continuez00_1694;
											goto BgL_zc3anonymousza33537ze3z83_953;
										}
									else
										{	/* Integrate/kk.scm 144 */
											obj_t BgL_g3496z00_961;

											{	/* Integrate/kk.scm 144 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3410z00_1459;

												BgL_obj3410z00_1459 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_ifunz00_959);
												{
													obj_t BgL_auxz00_1696;

													{	/* Integrate/kk.scm 144 */
														BgL_objectz00_bglt BgL_auxz00_1697;

														BgL_auxz00_1697 =
															(BgL_objectz00_bglt) (BgL_obj3410z00_1459);
														BgL_auxz00_1696 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1697);
													}
													BgL_g3496z00_961 =
														(((BgL_sfunzf2iinfozf2_bglt)
															CREF(BgL_auxz00_1696))->BgL_kza2za2);
												}
											}
											{
												obj_t BgL_ksz00_963;

												bool_t BgL_continuez00_964;

												BgL_ksz00_963 = BgL_g3496z00_961;
												BgL_continuez00_964 = BgL_continuez00_956;
											BgL_zc3anonymousza33541ze3z83_965:
												if (NULLP(BgL_ksz00_963))
													{
														bool_t BgL_continuez00_1705;

														obj_t BgL_atz00_1703;

														BgL_atz00_1703 = CDR(BgL_atz00_955);
														BgL_continuez00_1705 = BgL_continuez00_964;
														BgL_continuez00_956 = BgL_continuez00_1705;
														BgL_atz00_955 = BgL_atz00_1703;
														goto BgL_zc3anonymousza33538ze3z83_957;
													}
												else
													{	/* Integrate/kk.scm 148 */
														obj_t BgL_fz00_968;

														BgL_fz00_968 = CAR(CAR(BgL_atz00_955));
														{	/* Integrate/kk.scm 148 */
															BgL_valuez00_bglt BgL_fifunz00_969;

															{
																BgL_variablez00_bglt BgL_auxz00_1708;

																BgL_auxz00_1708 =
																	(BgL_variablez00_bglt) (BgL_fz00_968);
																BgL_fifunz00_969 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1708))->BgL_valuez00);
															}
															{	/* Integrate/kk.scm 149 */
																obj_t BgL_kz00_970;

																BgL_kz00_970 = CAR(BgL_ksz00_963);
																{	/* Integrate/kk.scm 150 */

																	{	/* Integrate/kk.scm 151 */
																		bool_t BgL_testz00_1712;

																		{	/* Integrate/kk.scm 151 */
																			obj_t BgL_auxz00_1713;

																			{	/* Integrate/kk.scm 151 */
																				obj_t BgL_auxz00_1714;

																				{	/* Integrate/kk.scm 151 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3410z00_1466;
																					BgL_obj3410z00_1466 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_fifunz00_969);
																					{
																						obj_t BgL_auxz00_1716;

																						{	/* Integrate/kk.scm 151 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1717;
																							BgL_auxz00_1717 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3410z00_1466);
																							BgL_auxz00_1716 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1717);
																						}
																						BgL_auxz00_1714 =
																							(((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1716))->
																							BgL_kza2za2);
																					}
																				}
																				BgL_auxz00_1713 =
																					BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(BgL_kz00_970, BgL_auxz00_1714);
																			}
																			BgL_testz00_1712 = CBOOL(BgL_auxz00_1713);
																		}
																		if (BgL_testz00_1712)
																			{
																				obj_t BgL_ksz00_1723;

																				BgL_ksz00_1723 = CDR(BgL_ksz00_963);
																				BgL_ksz00_963 = BgL_ksz00_1723;
																				goto BgL_zc3anonymousza33541ze3z83_965;
																			}
																		else
																			{	/* Integrate/kk.scm 151 */
																				{	/* Integrate/kk.scm 156 */
																					obj_t BgL_arg3546z00_973;

																					{	/* Integrate/kk.scm 156 */
																						obj_t BgL_arg3547z00_974;

																						{	/* Integrate/kk.scm 156 */
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_obj3410z00_1468;
																							BgL_obj3410z00_1468 =
																								(BgL_sfunzf2iinfozf2_bglt)
																								(BgL_fifunz00_969);
																							{
																								obj_t BgL_auxz00_1726;

																								{	/* Integrate/kk.scm 156 */
																									BgL_objectz00_bglt
																										BgL_auxz00_1727;
																									BgL_auxz00_1727 =
																										(BgL_objectz00_bglt)
																										(BgL_obj3410z00_1468);
																									BgL_auxz00_1726 =
																										BGL_OBJECT_WIDENING
																										(BgL_auxz00_1727);
																								}
																								BgL_arg3547z00_974 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1726))->
																									BgL_kza2za2);
																							}
																						}
																						BgL_arg3546z00_973 =
																							MAKE_PAIR(BgL_kz00_970,
																							BgL_arg3547z00_974);
																					}
																					{	/* Integrate/kk.scm 154 */
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_obj3412z00_1469;
																						obj_t BgL_val3411z00_1470;

																						BgL_obj3412z00_1469 =
																							(BgL_sfunzf2iinfozf2_bglt)
																							(BgL_fifunz00_969);
																						BgL_val3411z00_1470 =
																							BgL_arg3546z00_973;
																						{
																							obj_t BgL_auxz00_1733;

																							{	/* Integrate/kk.scm 154 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1734;
																								BgL_auxz00_1734 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3412z00_1469);
																								BgL_auxz00_1733 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1734);
																							}
																							((((BgL_sfunzf2iinfozf2_bglt)
																										CREF(BgL_auxz00_1733))->
																									BgL_kza2za2) =
																								((obj_t) BgL_val3411z00_1470),
																								BUNSPEC);
																						}
																					}
																				}
																				{
																					bool_t BgL_continuez00_1740;

																					obj_t BgL_ksz00_1738;

																					BgL_ksz00_1738 = CDR(BgL_ksz00_963);
																					BgL_continuez00_1740 = ((bool_t) 1);
																					BgL_continuez00_964 =
																						BgL_continuez00_1740;
																					BgL_ksz00_963 = BgL_ksz00_1738;
																					goto
																						BgL_zc3anonymousza33541ze3z83_965;
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
				else
					{	/* Integrate/kk.scm 135 */
						return BNIL;
					}
			}
		}
	}



/* _K*! */
	obj_t BGl__Kza2z12zb0zzintegrate_kkz00(obj_t BgL_envz00_1475,
		obj_t BgL_azd2tailzd2_1476)
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 132 */
			return BGl_Kza2z12zb0zzintegrate_kkz00(BgL_azd2tailzd2_1476);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_kkz00()
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_kkz00()
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kkz00()
	{
		AN_OBJECT;
		{	/* Integrate/kk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 408271643),
				BSTRING_TO_STRING(BGl_string3605z00zzintegrate_kkz00));
		}
	}

#ifdef __cplusplus
}
#endif
