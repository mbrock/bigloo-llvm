/*===========================================================================*/
/*   (Integrate/kaptured.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/kaptured.scm)*/
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2iinfozf2_bglt;

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
		BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_freez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzintegrate_kapturedz00();
	extern obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t, BgL_localz00_bglt);
	static obj_t BGl__setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t, obj_t);
	static long BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00;
	static obj_t BGl_methodzd2initzd2zzintegrate_kapturedz00();
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_kapturedz00();
	static obj_t BGl_unionz00zzintegrate_kapturedz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00();
	extern obj_t BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2kapturedz12zd2envz12zzintegrate_kapturedz00,
		BgL_bgl__setza7d2kapturedza73605z00,
		BGl__setzd2kapturedz12zc0zzintegrate_kapturedz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3604z00zzintegrate_kapturedz00,
		BgL_bgl_string3604za700za7za7i3606za7, "integrate_kaptured", 18);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long
		BgL_checksumz00_1461, char *BgL_fromz00_1462)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00();
					BGl_toplevelzd2initzd2zzintegrate_kapturedz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00()
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_kaptured");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_kaptured");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_kapturedz00()
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 17 */
			return (BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00 =
				((long) 0), BUNSPEC);
		}
	}



/* set-kaptured! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t
		BgL_localza2za2_1)
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 31 */
			{
				obj_t BgL_l3500z00_888;

				{	/* Integrate/kaptured.scm 32 */
					bool_t BgL_auxz00_1471;

					BgL_l3500z00_888 = BgL_localza2za2_1;
				BgL_zc3anonymousza33507ze3z83_889:
					if (PAIRP(BgL_l3500z00_888))
						{	/* Integrate/kaptured.scm 32 */
							{	/* Integrate/kaptured.scm 33 */
								obj_t BgL_localz00_891;

								BgL_localz00_891 = CAR(BgL_l3500z00_888);
								BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00
									(BgL_localz00_891, BgL_localz00_891);
							}
							{
								obj_t BgL_l3500z00_1476;

								BgL_l3500z00_1476 = CDR(BgL_l3500z00_888);
								BgL_l3500z00_888 = BgL_l3500z00_1476;
								goto BgL_zc3anonymousza33507ze3z83_889;
							}
						}
					else
						{	/* Integrate/kaptured.scm 32 */
							BgL_auxz00_1471 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1471);
				}
			}
		}
	}



/* _set-kaptured! */
	obj_t BGl__setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t BgL_envz00_1459,
		obj_t BgL_localza2za2_1460)
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 31 */
			return
				BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(BgL_localza2za2_1460);
		}
	}



/* set-one-kaptured! */
	obj_t BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00(obj_t
		BgL_localz00_2, obj_t BgL_lockingz00_3)
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 48 */
			{	/* Integrate/kaptured.scm 52 */
				BgL_valuez00_bglt BgL_infoz00_894;

				{
					BgL_variablez00_bglt BgL_auxz00_1480;

					BgL_auxz00_1480 = (BgL_variablez00_bglt) (BgL_localz00_2);
					BgL_infoz00_894 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1480))->BgL_valuez00);
				}
				{	/* Integrate/kaptured.scm 52 */
					obj_t BgL_kapturedz00_895;

					{	/* Integrate/kaptured.scm 53 */
						BgL_sfunzf2iinfozf2_bglt BgL_obj3440z00_1379;

						BgL_obj3440z00_1379 = (BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_894);
						{
							obj_t BgL_auxz00_1484;

							{	/* Integrate/kaptured.scm 53 */
								BgL_objectz00_bglt BgL_auxz00_1485;

								BgL_auxz00_1485 = (BgL_objectz00_bglt) (BgL_obj3440z00_1379);
								BgL_auxz00_1484 = BGL_OBJECT_WIDENING(BgL_auxz00_1485);
							}
							BgL_kapturedz00_895 =
								(((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1484))->
								BgL_kapturedz00);
						}
					}
					{	/* Integrate/kaptured.scm 53 */

						{	/* Integrate/kaptured.scm 55 */
							bool_t BgL_testz00_1489;

							if (PAIRP(BgL_kapturedz00_895))
								{	/* Integrate/kaptured.scm 55 */
									BgL_testz00_1489 = ((bool_t) 1);
								}
							else
								{	/* Integrate/kaptured.scm 55 */
									BgL_testz00_1489 = NULLP(BgL_kapturedz00_895);
								}
							if (BgL_testz00_1489)
								{	/* Integrate/kaptured.scm 55 */
									{	/* Integrate/kaptured.scm 58 */
										obj_t BgL_v3502z00_897;

										BgL_v3502z00_897 = create_vector((int) (((long) 3)));
										VECTOR_SET(BgL_v3502z00_897,
											(int) (((long) 2)), BgL_kapturedz00_895);
										VECTOR_SET(BgL_v3502z00_897,
											(int) (((long) 1)), BgL_lockingz00_3);
										VECTOR_SET(BgL_v3502z00_897, (int) (((long) 0)), BTRUE);
										return BgL_v3502z00_897;
									}
								}
							else
								{	/* Integrate/kaptured.scm 55 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_kapturedz00_895,
											BGl_localz00zzast_varz00))
										{	/* Integrate/kaptured.scm 59 */
											{	/* Integrate/kaptured.scm 62 */
												obj_t BgL_v3503z00_899;

												BgL_v3503z00_899 = create_vector((int) (((long) 3)));
												VECTOR_SET(BgL_v3503z00_899, (int) (((long) 2)), BNIL);
												VECTOR_SET(BgL_v3503z00_899,
													(int) (((long) 1)), BgL_lockingz00_3);
												VECTOR_SET(BgL_v3503z00_899,
													(int) (((long) 0)), BFALSE);
												return BgL_v3503z00_899;
											}
										}
									else
										{	/* Integrate/kaptured.scm 64 */
											obj_t BgL_bodyz00_900;

											{	/* Integrate/kaptured.scm 64 */
												BgL_sfunz00_bglt BgL_obj1884z00_1402;

												{	/* Integrate/kaptured.scm 64 */
													BgL_variablez00_bglt BgL_obj1611z00_1401;

													BgL_obj1611z00_1401 =
														(BgL_variablez00_bglt) (BgL_localz00_2);
													BgL_obj1884z00_1402 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_1401))->BgL_valuez00));
												}
												BgL_bodyz00_900 =
													(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1402))->
													BgL_bodyz00);
											}
											BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
												(BgL_nodez00_bglt) (BgL_bodyz00_900),
												(BgL_localz00_bglt) (BgL_localz00_2));
											{	/* Integrate/kaptured.scm 71 */
												BgL_sfunzf2iinfozf2_bglt BgL_obj3442z00_1403;

												obj_t BgL_val3441z00_1404;

												BgL_obj3442z00_1403 =
													(BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_894);
												BgL_val3441z00_1404 = BgL_localz00_2;
												{
													obj_t BgL_auxz00_1519;

													{	/* Integrate/kaptured.scm 71 */
														BgL_objectz00_bglt BgL_auxz00_1520;

														BgL_auxz00_1520 =
															(BgL_objectz00_bglt) (BgL_obj3442z00_1403);
														BgL_auxz00_1519 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1520);
													}
													((((BgL_sfunzf2iinfozf2_bglt) CREF(BgL_auxz00_1519))->
															BgL_kapturedz00) =
														((obj_t) BgL_val3441z00_1404), BUNSPEC);
												}
											}
											{	/* Integrate/kaptured.scm 73 */
												obj_t BgL_g3496z00_902;

												{	/* Integrate/kaptured.scm 74 */
													BgL_sfunzf2iinfozf2_bglt BgL_obj3404z00_1405;

													BgL_obj3404z00_1405 =
														(BgL_sfunzf2iinfozf2_bglt) (BgL_infoz00_894);
													{
														obj_t BgL_auxz00_1525;

														{	/* Integrate/kaptured.scm 74 */
															BgL_objectz00_bglt BgL_auxz00_1526;

															BgL_auxz00_1526 =
																(BgL_objectz00_bglt) (BgL_obj3404z00_1405);
															BgL_auxz00_1525 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1526);
														}
														BgL_g3496z00_902 =
															(((BgL_sfunzf2iinfozf2_bglt)
																CREF(BgL_auxz00_1525))->BgL_ctoz00);
													}
												}
												{
													obj_t BgL_kapturedz00_904;

													obj_t BgL_ctoz00_905;

													bool_t BgL_setterzf3zf3_906;

													BgL_kapturedz00_904 = BNIL;
													BgL_ctoz00_905 = BgL_g3496z00_902;
													BgL_setterzf3zf3_906 = ((bool_t) 1);
												BgL_zc3anonymousza33512ze3z83_907:
													if (NULLP(BgL_ctoz00_905))
														{	/* Integrate/kaptured.scm 83 */
															obj_t BgL_freez00_909;

															BgL_freez00_909 =
																BGl_getzd2freezd2varsz00zzintegrate_freez00(
																(BgL_nodez00_bglt) (BgL_bodyz00_900),
																(BgL_localz00_bglt) (BgL_localz00_2));
															{	/* Integrate/kaptured.scm 83 */
																obj_t BgL_fkapturedz00_910;

																BgL_fkapturedz00_910 =
																	BGl_freezd2fromzd2zzintegrate_freez00
																	(BgL_kapturedz00_904,
																	(BgL_localz00_bglt) (BgL_localz00_2));
																{	/* Integrate/kaptured.scm 84 */
																	obj_t BgL_rkapturedz00_911;

																	{	/* Integrate/kaptured.scm 85 */
																		obj_t BgL_arg3519z00_921;

																		BgL_arg3519z00_921 =
																			MAKE_PAIR(BgL_freez00_909,
																			BgL_fkapturedz00_910);
																		BgL_rkapturedz00_911 =
																			BGl_unionz00zzintegrate_kapturedz00
																			(BgL_arg3519z00_921);
																	}
																	{	/* Integrate/kaptured.scm 85 */

																		if (BgL_setterzf3zf3_906)
																			{	/* Integrate/kaptured.scm 98 */
																				{	/* Integrate/kaptured.scm 101 */
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_obj3442z00_1407;
																					obj_t BgL_val3441z00_1408;

																					BgL_obj3442z00_1407 =
																						(BgL_sfunzf2iinfozf2_bglt)
																						(BgL_infoz00_894);
																					BgL_val3441z00_1408 =
																						BgL_rkapturedz00_911;
																					{
																						obj_t BgL_auxz00_1541;

																						{	/* Integrate/kaptured.scm 101 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1542;
																							BgL_auxz00_1542 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3442z00_1407);
																							BgL_auxz00_1541 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1542);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									CREF(BgL_auxz00_1541))->
																								BgL_kapturedz00) =
																							((obj_t) BgL_val3441z00_1408),
																							BUNSPEC);
																					}
																				}
																				{
																					obj_t BgL_l3504z00_913;

																					{	/* Integrate/kaptured.scm 103 */
																						bool_t BgL_auxz00_1546;

																						BgL_l3504z00_913 =
																							BgL_rkapturedz00_911;
																					BgL_zc3anonymousza33514ze3z83_914:
																						if (PAIRP(BgL_l3504z00_913))
																							{	/* Integrate/kaptured.scm 103 */
																								{	/* Integrate/kaptured.scm 104 */
																									obj_t BgL_localz00_916;

																									BgL_localz00_916 =
																										CAR(BgL_l3504z00_913);
																									{	/* Integrate/kaptured.scm 105 */
																										BgL_valuez00_bglt
																											BgL_arg3517z00_917;
																										{
																											BgL_variablez00_bglt
																												BgL_auxz00_1550;
																											BgL_auxz00_1550 =
																												(BgL_variablez00_bglt)
																												(BgL_localz00_916);
																											BgL_arg3517z00_917 =
																												(((BgL_variablez00_bglt)
																													CREF
																													(BgL_auxz00_1550))->
																												BgL_valuez00);
																										}
																										{	/* Integrate/kaptured.scm 104 */
																											BgL_svarzf2iinfozf2_bglt
																												BgL_obj3267z00_1412;
																											bool_t
																												BgL_val3266z00_1413;
																											BgL_obj3267z00_1412 =
																												(BgL_svarzf2iinfozf2_bglt)
																												(BgL_arg3517z00_917);
																											BgL_val3266z00_1413 =
																												((bool_t) 1);
																											{
																												obj_t BgL_auxz00_1554;

																												{	/* Integrate/kaptured.scm 104 */
																													BgL_objectz00_bglt
																														BgL_auxz00_1555;
																													BgL_auxz00_1555 =
																														(BgL_objectz00_bglt)
																														(BgL_obj3267z00_1412);
																													BgL_auxz00_1554 =
																														BGL_OBJECT_WIDENING
																														(BgL_auxz00_1555);
																												}
																												((((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_1554))->BgL_kapturedzf3zf3) = ((bool_t) BgL_val3266z00_1413), BUNSPEC);
																											}
																										}
																									}
																								}
																								{
																									obj_t BgL_l3504z00_1559;

																									BgL_l3504z00_1559 =
																										CDR(BgL_l3504z00_913);
																									BgL_l3504z00_913 =
																										BgL_l3504z00_1559;
																									goto
																										BgL_zc3anonymousza33514ze3z83_914;
																								}
																							}
																						else
																							{	/* Integrate/kaptured.scm 103 */
																								BgL_auxz00_1546 = ((bool_t) 1);
																							}
																						BBOOL(BgL_auxz00_1546);
																					}
																				}
																			}
																		else
																			{	/* Integrate/kaptured.scm 109 */
																				BgL_sfunzf2iinfozf2_bglt
																					BgL_obj3442z00_1415;
																				obj_t BgL_val3441z00_1416;

																				BgL_obj3442z00_1415 =
																					(BgL_sfunzf2iinfozf2_bglt)
																					(BgL_infoz00_894);
																				BgL_val3441z00_1416 = BUNSPEC;
																				{
																					obj_t BgL_auxz00_1563;

																					{	/* Integrate/kaptured.scm 109 */
																						BgL_objectz00_bglt BgL_auxz00_1564;

																						BgL_auxz00_1564 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3442z00_1415);
																						BgL_auxz00_1563 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_1564);
																					}
																					((((BgL_sfunzf2iinfozf2_bglt)
																								CREF(BgL_auxz00_1563))->
																							BgL_kapturedz00) =
																						((obj_t) BgL_val3441z00_1416),
																						BUNSPEC);
																				}
																			}
																		{	/* Integrate/kaptured.scm 110 */
																			obj_t BgL_v3506z00_920;

																			BgL_v3506z00_920 =
																				create_vector((int) (((long) 3)));
																			VECTOR_SET(BgL_v3506z00_920,
																				(int) (((long) 2)),
																				BgL_rkapturedz00_911);
																			VECTOR_SET(BgL_v3506z00_920,
																				(int) (((long) 1)), BgL_lockingz00_3);
																			VECTOR_SET(BgL_v3506z00_920,
																				(int) (((long) 0)),
																				BBOOL(BgL_setterzf3zf3_906));
																			return BgL_v3506z00_920;
																		}
																	}
																}
															}
														}
													else
														{	/* Integrate/kaptured.scm 82 */
															if ((CAR(BgL_ctoz00_905) == BgL_localz00_2))
																{
																	obj_t BgL_ctoz00_1580;

																	BgL_ctoz00_1580 = CDR(BgL_ctoz00_905);
																	BgL_ctoz00_905 = BgL_ctoz00_1580;
																	goto BgL_zc3anonymousza33512ze3z83_907;
																}
															else
																{	/* Integrate/kaptured.scm 115 */
																	bool_t BgL_testz00_1582;

																	{	/* Integrate/kaptured.scm 115 */
																		BgL_sfunzf2iinfozf2_bglt
																			BgL_obj3425z00_1430;
																		{	/* Integrate/kaptured.scm 115 */
																			BgL_valuez00_bglt BgL_auxz00_1583;

																			{	/* Integrate/kaptured.scm 115 */
																				BgL_variablez00_bglt
																					BgL_obj1611z00_1429;
																				{	/* Integrate/kaptured.scm 115 */
																					obj_t BgL_pairz00_1428;

																					BgL_pairz00_1428 = BgL_ctoz00_905;
																					BgL_obj1611z00_1429 =
																						(BgL_variablez00_bglt) (CAR
																						(BgL_pairz00_1428));
																				}
																				BgL_auxz00_1583 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_1429))->
																					BgL_valuez00);
																			}
																			BgL_obj3425z00_1430 =
																				(BgL_sfunzf2iinfozf2_bglt)
																				(BgL_auxz00_1583);
																		}
																		{
																			obj_t BgL_auxz00_1588;

																			{	/* Integrate/kaptured.scm 115 */
																				BgL_objectz00_bglt BgL_auxz00_1589;

																				BgL_auxz00_1589 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3425z00_1430);
																				BgL_auxz00_1588 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1589);
																			}
																			BgL_testz00_1582 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					CREF(BgL_auxz00_1588))->BgL_gzf3zf3);
																		}
																	}
																	if (BgL_testz00_1582)
																		{	/* Integrate/kaptured.scm 116 */
																			obj_t BgL_otherzd2kapturedzd2_925;

																			BgL_otherzd2kapturedzd2_925 =
																				BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00
																				(CAR(BgL_ctoz00_905), BgL_lockingz00_3);
																			{	/* Integrate/kaptured.scm 118 */
																				bool_t BgL_testz00_1595;

																				{	/* Integrate/kaptured.scm 118 */
																					int BgL_kz00_1433;

																					BgL_kz00_1433 = (int) (((long) 0));
																					BgL_testz00_1595 =
																						CBOOL(VECTOR_REF
																						(BgL_otherzd2kapturedzd2_925,
																							BgL_kz00_1433));
																				}
																				if (BgL_testz00_1595)
																					{	/* Integrate/kaptured.scm 124 */
																						obj_t BgL_arg3524z00_927;

																						obj_t BgL_arg3525z00_928;

																						BgL_arg3524z00_927 =
																							MAKE_PAIR(VECTOR_REF
																							(BgL_otherzd2kapturedzd2_925,
																								(int) (((long) 2))),
																							BgL_kapturedz00_904);
																						BgL_arg3525z00_928 =
																							CDR(BgL_ctoz00_905);
																						{
																							obj_t BgL_ctoz00_1604;

																							obj_t BgL_kapturedz00_1603;

																							BgL_kapturedz00_1603 =
																								BgL_arg3524z00_927;
																							BgL_ctoz00_1604 =
																								BgL_arg3525z00_928;
																							BgL_ctoz00_905 = BgL_ctoz00_1604;
																							BgL_kapturedz00_904 =
																								BgL_kapturedz00_1603;
																							goto
																								BgL_zc3anonymousza33512ze3z83_907;
																						}
																					}
																				else
																					{	/* Integrate/kaptured.scm 119 */
																						obj_t BgL_arg3527z00_930;

																						obj_t BgL_arg3528z00_931;

																						bool_t BgL_arg3529z00_932;

																						BgL_arg3527z00_930 =
																							MAKE_PAIR(VECTOR_REF
																							(BgL_otherzd2kapturedzd2_925,
																								(int) (((long) 2))),
																							BgL_kapturedz00_904);
																						BgL_arg3528z00_931 =
																							CDR(BgL_ctoz00_905);
																						if (BgL_setterzf3zf3_906)
																							{	/* Integrate/kaptured.scm 121 */
																								BgL_arg3529z00_932 =
																									(VECTOR_REF
																									(BgL_otherzd2kapturedzd2_925,
																										(int) (((long) 1))) ==
																									BgL_localz00_2);
																							}
																						else
																							{	/* Integrate/kaptured.scm 121 */
																								BgL_arg3529z00_932 =
																									((bool_t) 0);
																							}
																						{
																							bool_t BgL_setterzf3zf3_1615;

																							obj_t BgL_ctoz00_1614;

																							obj_t BgL_kapturedz00_1613;

																							BgL_kapturedz00_1613 =
																								BgL_arg3527z00_930;
																							BgL_ctoz00_1614 =
																								BgL_arg3528z00_931;
																							BgL_setterzf3zf3_1615 =
																								BgL_arg3529z00_932;
																							BgL_setterzf3zf3_906 =
																								BgL_setterzf3zf3_1615;
																							BgL_ctoz00_905 = BgL_ctoz00_1614;
																							BgL_kapturedz00_904 =
																								BgL_kapturedz00_1613;
																							goto
																								BgL_zc3anonymousza33512ze3z83_907;
																						}
																					}
																			}
																		}
																	else
																		{
																			obj_t BgL_ctoz00_1616;

																			BgL_ctoz00_1616 = CDR(BgL_ctoz00_905);
																			BgL_ctoz00_905 = BgL_ctoz00_1616;
																			goto BgL_zc3anonymousza33512ze3z83_907;
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



/* union */
	obj_t BGl_unionz00zzintegrate_kapturedz00(obj_t BgL_setsz00_4)
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 140 */
			BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00 =
				(((long) 1) + BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00);
			{
				obj_t BgL_setsz00_946;

				obj_t BgL_unionz00_947;

				BgL_setsz00_946 = BgL_setsz00_4;
				BgL_unionz00_947 = BNIL;
			BgL_zc3anonymousza33540ze3z83_948:
				if (NULLP(BgL_setsz00_946))
					{	/* Integrate/kaptured.scm 144 */
						return BgL_unionz00_947;
					}
				else
					{	/* Integrate/kaptured.scm 146 */
						obj_t BgL_g3499z00_950;

						BgL_g3499z00_950 = CAR(BgL_setsz00_946);
						{
							obj_t BgL_setz00_952;

							obj_t BgL_unionz00_953;

							BgL_setz00_952 = BgL_g3499z00_950;
							BgL_unionz00_953 = BgL_unionz00_947;
						BgL_zc3anonymousza33542ze3z83_954:
							if (NULLP(BgL_setz00_952))
								{
									obj_t BgL_unionz00_1626;

									obj_t BgL_setsz00_1624;

									BgL_setsz00_1624 = CDR(BgL_setsz00_946);
									BgL_unionz00_1626 = BgL_unionz00_953;
									BgL_unionz00_947 = BgL_unionz00_1626;
									BgL_setsz00_946 = BgL_setsz00_1624;
									goto BgL_zc3anonymousza33540ze3z83_948;
								}
							else
								{	/* Integrate/kaptured.scm 151 */
									bool_t BgL_testz00_1627;

									{	/* Integrate/kaptured.scm 151 */
										obj_t BgL_arg3552z00_964;

										{	/* Integrate/kaptured.scm 151 */
											BgL_svarzf2iinfozf2_bglt BgL_obj3262z00_1451;

											{	/* Integrate/kaptured.scm 151 */
												BgL_valuez00_bglt BgL_auxz00_1628;

												{	/* Integrate/kaptured.scm 151 */
													BgL_variablez00_bglt BgL_obj1611z00_1450;

													{	/* Integrate/kaptured.scm 151 */
														obj_t BgL_pairz00_1449;

														BgL_pairz00_1449 = BgL_setz00_952;
														BgL_obj1611z00_1450 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_1449));
													}
													BgL_auxz00_1628 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1611z00_1450))->BgL_valuez00);
												}
												BgL_obj3262z00_1451 =
													(BgL_svarzf2iinfozf2_bglt) (BgL_auxz00_1628);
											}
											{
												obj_t BgL_auxz00_1633;

												{	/* Integrate/kaptured.scm 151 */
													BgL_objectz00_bglt BgL_auxz00_1634;

													BgL_auxz00_1634 =
														(BgL_objectz00_bglt) (BgL_obj3262z00_1451);
													BgL_auxz00_1633 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1634);
												}
												BgL_arg3552z00_964 =
													(((BgL_svarzf2iinfozf2_bglt) CREF(BgL_auxz00_1633))->
													BgL_uzd2markzd2);
											}
										}
										BgL_testz00_1627 =
											(BgL_arg3552z00_964 ==
											BINT(BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00));
									}
									if (BgL_testz00_1627)
										{
											obj_t BgL_setz00_1640;

											BgL_setz00_1640 = CDR(BgL_setz00_952);
											BgL_setz00_952 = BgL_setz00_1640;
											goto BgL_zc3anonymousza33542ze3z83_954;
										}
									else
										{	/* Integrate/kaptured.scm 151 */
											{	/* Integrate/kaptured.scm 155 */
												BgL_valuez00_bglt BgL_arg3547z00_959;

												{	/* Integrate/kaptured.scm 155 */
													BgL_variablez00_bglt BgL_obj1611z00_1454;

													{	/* Integrate/kaptured.scm 155 */
														obj_t BgL_pairz00_1453;

														BgL_pairz00_1453 = BgL_setz00_952;
														BgL_obj1611z00_1454 =
															(BgL_variablez00_bglt) (CAR(BgL_pairz00_1453));
													}
													BgL_arg3547z00_959 =
														(((BgL_variablez00_bglt)
															CREF(BgL_obj1611z00_1454))->BgL_valuez00);
												}
												{	/* Integrate/kaptured.scm 155 */
													BgL_svarzf2iinfozf2_bglt BgL_obj3264z00_1455;

													obj_t BgL_val3263z00_1456;

													BgL_obj3264z00_1455 =
														(BgL_svarzf2iinfozf2_bglt) (BgL_arg3547z00_959);
													BgL_val3263z00_1456 =
														BINT
														(BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00);
													{
														obj_t BgL_auxz00_1647;

														{	/* Integrate/kaptured.scm 155 */
															BgL_objectz00_bglt BgL_auxz00_1648;

															BgL_auxz00_1648 =
																(BgL_objectz00_bglt) (BgL_obj3264z00_1455);
															BgL_auxz00_1647 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1648);
														}
														((((BgL_svarzf2iinfozf2_bglt)
																	CREF(BgL_auxz00_1647))->BgL_uzd2markzd2) =
															((obj_t) BgL_val3263z00_1456), BUNSPEC);
													}
												}
											}
											{	/* Integrate/kaptured.scm 156 */
												obj_t BgL_arg3549z00_961;

												obj_t BgL_arg3550z00_962;

												BgL_arg3549z00_961 = CDR(BgL_setz00_952);
												BgL_arg3550z00_962 =
													MAKE_PAIR(CAR(BgL_setz00_952), BgL_unionz00_953);
												{
													obj_t BgL_unionz00_1656;

													obj_t BgL_setz00_1655;

													BgL_setz00_1655 = BgL_arg3549z00_961;
													BgL_unionz00_1656 = BgL_arg3550z00_962;
													BgL_unionz00_953 = BgL_unionz00_1656;
													BgL_setz00_952 = BgL_setz00_1655;
													goto BgL_zc3anonymousza33542ze3z83_954;
												}
											}
										}
								}
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_kapturedz00()
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_kapturedz00()
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00()
	{
		AN_OBJECT;
		{	/* Integrate/kaptured.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzintegrate_freez00(((long) 437744453),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(((long) 58038127),
				BSTRING_TO_STRING(BGl_string3604z00zzintegrate_kapturedz00));
		}
	}

#ifdef __cplusplus
}
#endif
