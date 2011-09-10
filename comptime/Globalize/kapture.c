/*===========================================================================*/
/*   (Globalize/kapture.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/kapture.scm)*/
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

	typedef struct BgL_svarzf2ginfozf2_bgl
	{
		bool_t BgL_kapturedzf3zf3;
		long BgL_freezd2markzd2;
		long BgL_markz00;
		bool_t BgL_celledzf3zf3;
	}                      *BgL_svarzf2ginfozf2_bglt;


	extern obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7();
	extern obj_t BGl_freezd2fromzd2zzglobaliza7e_freeza7(obj_t,
		BgL_localz00_bglt);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl__setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t, obj_t);
	static long BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_kaptureza7();
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_kaptureza7();
	extern obj_t BGl_funz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
	static obj_t BGl__unionz00zzglobaliza7e_kaptureza7(obj_t, obj_t);
	extern obj_t BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t
		BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(BgL_localz00_bglt,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7,
		BgL_bgl_string3768za700za7za7g3769za7, "globalize_kapture", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2kapturedz12zd2envz12zzglobaliza7e_kaptureza7,
		BgL_bgl__setza7d2kapturedza73770z00,
		BGl__setzd2kapturedz12zc0zzglobaliza7e_kaptureza7, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unionzd2envzd2zzglobaliza7e_kaptureza7,
		BgL_bgl__unionza700za7za7globa3771za7,
		BGl__unionz00zzglobaliza7e_kaptureza7, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long
		BgL_checksumz00_1542, char *BgL_fromz00_1543)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_kaptureza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7();
					BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_kaptureza7()
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_kapture");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_kapture");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_kapture");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_kaptureza7()
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 15 */
			return (BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7 =
				((long) 0), BUNSPEC);
		}
	}



/* set-kaptured! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t
		BgL_localza2za2_1)
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 36 */
			{
				obj_t BgL_l3642z00_916;

				BgL_l3642z00_916 = BgL_localza2za2_1;
			BgL_zc3anonymousza33651ze3z83_917:
				if (PAIRP(BgL_l3642z00_916))
					{	/* Globalize/kapture.scm 39 */
						{	/* Globalize/kapture.scm 40 */
							obj_t BgL_localz00_919;

							BgL_localz00_919 = CAR(BgL_l3642z00_916);
							BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(
								(BgL_localz00_bglt) (BgL_localz00_919));
						}
						{
							obj_t BgL_l3642z00_1558;

							BgL_l3642z00_1558 = CDR(BgL_l3642z00_916);
							BgL_l3642z00_916 = BgL_l3642z00_1558;
							goto BgL_zc3anonymousza33651ze3z83_917;
						}
					}
				else
					{	/* Globalize/kapture.scm 39 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3644z00_923;

				{	/* Globalize/kapture.scm 43 */
					bool_t BgL_auxz00_1560;

					BgL_l3644z00_923 = BgL_localza2za2_1;
				BgL_zc3anonymousza33654ze3z83_924:
					if (PAIRP(BgL_l3644z00_923))
						{	/* Globalize/kapture.scm 43 */
							{	/* Globalize/kapture.scm 44 */
								obj_t BgL_localz00_926;

								BgL_localz00_926 = CAR(BgL_l3644z00_923);
								BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(
									(BgL_localz00_bglt) (BgL_localz00_926), BgL_localz00_926);
							}
							{
								obj_t BgL_l3644z00_1566;

								BgL_l3644z00_1566 = CDR(BgL_l3644z00_923);
								BgL_l3644z00_923 = BgL_l3644z00_1566;
								goto BgL_zc3anonymousza33654ze3z83_924;
							}
						}
					else
						{	/* Globalize/kapture.scm 43 */
							BgL_auxz00_1560 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1560);
				}
			}
		}
	}



/* _set-kaptured! */
	obj_t BGl__setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t BgL_envz00_1534,
		obj_t BgL_localza2za2_1535)
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 36 */
			return
				BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(BgL_localza2za2_1535);
		}
	}



/* set-one-kaptured! */
	obj_t BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7(BgL_localz00_bglt
		BgL_localz00_2, obj_t BgL_lockingz00_3)
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 53 */
			{	/* Globalize/kapture.scm 58 */
				BgL_valuez00_bglt BgL_infoz00_929;

				{
					BgL_variablez00_bglt BgL_auxz00_1570;

					BgL_auxz00_1570 = (BgL_variablez00_bglt) (BgL_localz00_2);
					BgL_infoz00_929 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1570))->BgL_valuez00);
				}
				{	/* Globalize/kapture.scm 58 */
					obj_t BgL_kapturedz00_930;

					{	/* Globalize/kapture.scm 59 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3367z00_1441;

						BgL_obj3367z00_1441 = (BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_929);
						{
							obj_t BgL_auxz00_1574;

							{	/* Globalize/kapture.scm 59 */
								BgL_objectz00_bglt BgL_auxz00_1575;

								BgL_auxz00_1575 = (BgL_objectz00_bglt) (BgL_obj3367z00_1441);
								BgL_auxz00_1574 = BGL_OBJECT_WIDENING(BgL_auxz00_1575);
							}
							BgL_kapturedz00_930 =
								(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1574))->
								BgL_kapturedz00);
						}
					}
					{	/* Globalize/kapture.scm 59 */

						{	/* Globalize/kapture.scm 61 */
							bool_t BgL_testz00_1579;

							if (PAIRP(BgL_kapturedz00_930))
								{	/* Globalize/kapture.scm 61 */
									BgL_testz00_1579 = ((bool_t) 1);
								}
							else
								{	/* Globalize/kapture.scm 61 */
									BgL_testz00_1579 = NULLP(BgL_kapturedz00_930);
								}
							if (BgL_testz00_1579)
								{	/* Globalize/kapture.scm 61 */
									{	/* Globalize/kapture.scm 64 */
										obj_t BgL_v3646z00_932;

										BgL_v3646z00_932 = create_vector((int) (((long) 3)));
										VECTOR_SET(BgL_v3646z00_932,
											(int) (((long) 2)), BgL_kapturedz00_930);
										VECTOR_SET(BgL_v3646z00_932,
											(int) (((long) 1)), BgL_lockingz00_3);
										VECTOR_SET(BgL_v3646z00_932, (int) (((long) 0)), BTRUE);
										return BgL_v3646z00_932;
									}
								}
							else
								{	/* Globalize/kapture.scm 61 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_kapturedz00_930,
											BGl_localz00zzast_varz00))
										{	/* Globalize/kapture.scm 65 */
											{	/* Globalize/kapture.scm 68 */
												obj_t BgL_v3647z00_934;

												BgL_v3647z00_934 = create_vector((int) (((long) 3)));
												VECTOR_SET(BgL_v3647z00_934, (int) (((long) 2)), BNIL);
												VECTOR_SET(BgL_v3647z00_934,
													(int) (((long) 1)), BgL_lockingz00_3);
												VECTOR_SET(BgL_v3647z00_934,
													(int) (((long) 0)), BFALSE);
												return BgL_v3647z00_934;
											}
										}
									else
										{	/* Globalize/kapture.scm 65 */
											{	/* Globalize/kapture.scm 72 */
												obj_t BgL_newzd2bodyzd2_935;

												{	/* Globalize/kapture.scm 72 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3370z00_1463;

													BgL_obj3370z00_1463 =
														(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_929);
													{
														obj_t BgL_auxz00_1602;

														{	/* Globalize/kapture.scm 72 */
															BgL_objectz00_bglt BgL_auxz00_1603;

															BgL_auxz00_1603 =
																(BgL_objectz00_bglt) (BgL_obj3370z00_1463);
															BgL_auxz00_1602 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1603);
														}
														BgL_newzd2bodyzd2_935 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1602))->BgL_newzd2bodyzd2);
													}
												}
												{	/* Globalize/kapture.scm 74 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3369z00_1464;

													obj_t BgL_val3368z00_1465;

													BgL_obj3369z00_1464 =
														(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_929);
													BgL_val3368z00_1465 = (obj_t) (BgL_localz00_2);
													{
														obj_t BgL_auxz00_1609;

														{	/* Globalize/kapture.scm 74 */
															BgL_objectz00_bglt BgL_auxz00_1610;

															BgL_auxz00_1610 =
																(BgL_objectz00_bglt) (BgL_obj3369z00_1464);
															BgL_auxz00_1609 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1610);
														}
														((((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_1609))->BgL_kapturedz00) =
															((obj_t) BgL_val3368z00_1465), BUNSPEC);
													}
												}
												{	/* Globalize/kapture.scm 76 */
													obj_t BgL_g3638z00_937;

													{	/* Globalize/kapture.scm 77 */
														obj_t BgL_auxz00_1621;

														obj_t BgL_auxz00_1614;

														{	/* Globalize/kapture.scm 78 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3339z00_1467;

															BgL_obj3339z00_1467 =
																(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_929);
															{
																obj_t BgL_auxz00_1623;

																{	/* Globalize/kapture.scm 78 */
																	BgL_objectz00_bglt BgL_auxz00_1624;

																	BgL_auxz00_1624 =
																		(BgL_objectz00_bglt) (BgL_obj3339z00_1467);
																	BgL_auxz00_1623 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1624);
																}
																BgL_auxz00_1621 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1623))->BgL_cfunctionz00);
															}
														}
														{	/* Globalize/kapture.scm 77 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3336z00_1466;

															BgL_obj3336z00_1466 =
																(BgL_sfunzf2ginfozf2_bglt) (BgL_infoz00_929);
															{
																obj_t BgL_auxz00_1616;

																{	/* Globalize/kapture.scm 77 */
																	BgL_objectz00_bglt BgL_auxz00_1617;

																	BgL_auxz00_1617 =
																		(BgL_objectz00_bglt) (BgL_obj3336z00_1466);
																	BgL_auxz00_1616 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1617);
																}
																BgL_auxz00_1614 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1616))->BgL_ctoza2za2);
															}
														}
														BgL_g3638z00_937 =
															bgl_append2(BgL_auxz00_1614, BgL_auxz00_1621);
													}
													{
														obj_t BgL_kapturedz00_939;

														obj_t BgL_ctoz00_940;

														bool_t BgL_setterzf3zf3_941;

														BgL_kapturedz00_939 = BNIL;
														BgL_ctoz00_940 = BgL_g3638z00_937;
														BgL_setterzf3zf3_941 = ((bool_t) 1);
													BgL_zc3anonymousza33659ze3z83_942:
														if (NULLP(BgL_ctoz00_940))
															{	/* Globalize/kapture.scm 87 */
																obj_t BgL_freez00_944;

																BgL_freez00_944 =
																	BGl_getzd2freezd2varsz00zzglobaliza7e_freeza7(
																	(BgL_nodez00_bglt) (BgL_newzd2bodyzd2_935),
																	BgL_localz00_2);
																{	/* Globalize/kapture.scm 87 */
																	obj_t BgL_fkapturedz00_945;

																	BgL_fkapturedz00_945 =
																		BGl_freezd2fromzd2zzglobaliza7e_freeza7
																		(BgL_kapturedz00_939, BgL_localz00_2);
																	{	/* Globalize/kapture.scm 88 */
																		obj_t BgL_kapturedz00_946;

																		{	/* Globalize/kapture.scm 89 */
																			obj_t BgL_arg3665z00_956;

																			BgL_arg3665z00_956 =
																				MAKE_PAIR(BgL_freez00_944,
																				BgL_fkapturedz00_945);
																			BgL_kapturedz00_946 =
																				BGl_unionz00zzglobaliza7e_kaptureza7
																				(BgL_arg3665z00_956);
																		}
																		{	/* Globalize/kapture.scm 89 */

																			if (BgL_setterzf3zf3_941)
																				{	/* Globalize/kapture.scm 96 */
																					{	/* Globalize/kapture.scm 99 */
																						BgL_sfunzf2ginfozf2_bglt
																							BgL_obj3369z00_1469;
																						obj_t BgL_val3368z00_1470;

																						BgL_obj3369z00_1469 =
																							(BgL_sfunzf2ginfozf2_bglt)
																							(BgL_infoz00_929);
																						BgL_val3368z00_1470 =
																							BgL_kapturedz00_946;
																						{
																							obj_t BgL_auxz00_1638;

																							{	/* Globalize/kapture.scm 99 */
																								BgL_objectz00_bglt
																									BgL_auxz00_1639;
																								BgL_auxz00_1639 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3369z00_1469);
																								BgL_auxz00_1638 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_1639);
																							}
																							((((BgL_sfunzf2ginfozf2_bglt)
																										CREF(BgL_auxz00_1638))->
																									BgL_kapturedz00) =
																								((obj_t) BgL_val3368z00_1470),
																								BUNSPEC);
																						}
																					}
																					{
																						obj_t BgL_l3648z00_948;

																						{	/* Globalize/kapture.scm 101 */
																							bool_t BgL_auxz00_1643;

																							BgL_l3648z00_948 =
																								BgL_kapturedz00_946;
																						BgL_zc3anonymousza33661ze3z83_949:
																							if (PAIRP(BgL_l3648z00_948))
																								{	/* Globalize/kapture.scm 101 */
																									{	/* Globalize/kapture.scm 102 */
																										obj_t BgL_localz00_951;

																										BgL_localz00_951 =
																											CAR(BgL_l3648z00_948);
																										{	/* Globalize/kapture.scm 103 */
																											BgL_valuez00_bglt
																												BgL_arg3663z00_952;
																											{
																												BgL_variablez00_bglt
																													BgL_auxz00_1647;
																												BgL_auxz00_1647 =
																													(BgL_variablez00_bglt)
																													(BgL_localz00_951);
																												BgL_arg3663z00_952 =
																													(((BgL_variablez00_bglt) CREF(BgL_auxz00_1647))->BgL_valuez00);
																											}
																											{	/* Globalize/kapture.scm 102 */
																												BgL_svarzf2ginfozf2_bglt
																													BgL_obj3450z00_1474;
																												bool_t
																													BgL_val3449z00_1475;
																												BgL_obj3450z00_1474 =
																													(BgL_svarzf2ginfozf2_bglt)
																													(BgL_arg3663z00_952);
																												BgL_val3449z00_1475 =
																													((bool_t) 1);
																												{
																													obj_t BgL_auxz00_1651;

																													{	/* Globalize/kapture.scm 102 */
																														BgL_objectz00_bglt
																															BgL_auxz00_1652;
																														BgL_auxz00_1652 =
																															(BgL_objectz00_bglt)
																															(BgL_obj3450z00_1474);
																														BgL_auxz00_1651 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_1652);
																													}
																													((((BgL_svarzf2ginfozf2_bglt) CREF(BgL_auxz00_1651))->BgL_kapturedzf3zf3) = ((bool_t) BgL_val3449z00_1475), BUNSPEC);
																												}
																											}
																										}
																									}
																									{
																										obj_t BgL_l3648z00_1656;

																										BgL_l3648z00_1656 =
																											CDR(BgL_l3648z00_948);
																										BgL_l3648z00_948 =
																											BgL_l3648z00_1656;
																										goto
																											BgL_zc3anonymousza33661ze3z83_949;
																									}
																								}
																							else
																								{	/* Globalize/kapture.scm 101 */
																									BgL_auxz00_1643 =
																										((bool_t) 1);
																								}
																							BBOOL(BgL_auxz00_1643);
																						}
																					}
																				}
																			else
																				{	/* Globalize/kapture.scm 105 */
																					BgL_sfunzf2ginfozf2_bglt
																						BgL_obj3369z00_1477;
																					obj_t BgL_val3368z00_1478;

																					BgL_obj3369z00_1477 =
																						(BgL_sfunzf2ginfozf2_bglt)
																						(BgL_infoz00_929);
																					BgL_val3368z00_1478 = BFALSE;
																					{
																						obj_t BgL_auxz00_1660;

																						{	/* Globalize/kapture.scm 105 */
																							BgL_objectz00_bglt
																								BgL_auxz00_1661;
																							BgL_auxz00_1661 =
																								(BgL_objectz00_bglt)
																								(BgL_obj3369z00_1477);
																							BgL_auxz00_1660 =
																								BGL_OBJECT_WIDENING
																								(BgL_auxz00_1661);
																						}
																						((((BgL_sfunzf2ginfozf2_bglt)
																									CREF(BgL_auxz00_1660))->
																								BgL_kapturedz00) =
																							((obj_t) BgL_val3368z00_1478),
																							BUNSPEC);
																					}
																				}
																			{	/* Globalize/kapture.scm 106 */
																				obj_t BgL_v3650z00_955;

																				BgL_v3650z00_955 =
																					create_vector((int) (((long) 3)));
																				VECTOR_SET(BgL_v3650z00_955,
																					(int) (((long) 2)),
																					BgL_kapturedz00_946);
																				VECTOR_SET(BgL_v3650z00_955,
																					(int) (((long) 1)), BgL_lockingz00_3);
																				VECTOR_SET(BgL_v3650z00_955,
																					(int) (((long) 0)),
																					BBOOL(BgL_setterzf3zf3_941));
																				return BgL_v3650z00_955;
																			}
																		}
																	}
																}
															}
														else
															{	/* Globalize/kapture.scm 86 */
																if (
																	(CAR(BgL_ctoz00_940) ==
																		(obj_t) (BgL_localz00_2)))
																	{	/* Globalize/kapture.scm 107 */
																		{
																			obj_t BgL_ctoz00_1678;

																			BgL_ctoz00_1678 = CDR(BgL_ctoz00_940);
																			BgL_ctoz00_940 = BgL_ctoz00_1678;
																			goto BgL_zc3anonymousza33659ze3z83_942;
																		}
																	}
																else
																	{	/* Globalize/kapture.scm 113 */
																		bool_t BgL_testz00_1680;

																		{	/* Globalize/kapture.scm 113 */
																			BgL_sfunzf2ginfozf2_bglt
																				BgL_obj3323z00_1492;
																			{	/* Globalize/kapture.scm 113 */
																				BgL_valuez00_bglt BgL_auxz00_1681;

																				{	/* Globalize/kapture.scm 113 */
																					BgL_variablez00_bglt
																						BgL_obj1611z00_1491;
																					{	/* Globalize/kapture.scm 113 */
																						obj_t BgL_pairz00_1490;

																						BgL_pairz00_1490 = BgL_ctoz00_940;
																						BgL_obj1611z00_1491 =
																							(BgL_variablez00_bglt) (CAR
																							(BgL_pairz00_1490));
																					}
																					BgL_auxz00_1681 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_1491))->
																						BgL_valuez00);
																				}
																				BgL_obj3323z00_1492 =
																					(BgL_sfunzf2ginfozf2_bglt)
																					(BgL_auxz00_1681);
																			}
																			{
																				obj_t BgL_auxz00_1686;

																				{	/* Globalize/kapture.scm 113 */
																					BgL_objectz00_bglt BgL_auxz00_1687;

																					BgL_auxz00_1687 =
																						(BgL_objectz00_bglt)
																						(BgL_obj3323z00_1492);
																					BgL_auxz00_1686 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1687);
																				}
																				BgL_testz00_1680 =
																					(((BgL_sfunzf2ginfozf2_bglt)
																						CREF(BgL_auxz00_1686))->
																					BgL_gzf3zf3);
																			}
																		}
																		if (BgL_testz00_1680)
																			{	/* Globalize/kapture.scm 113 */
																				{	/* Globalize/kapture.scm 116 */
																					obj_t BgL_otherzd2kapturedzd2_960;

																					{	/* Globalize/kapture.scm 116 */
																						obj_t BgL_arg3679z00_971;

																						BgL_arg3679z00_971 =
																							CAR(BgL_ctoz00_940);
																						BgL_otherzd2kapturedzd2_960 =
																							BGl_setzd2onezd2kapturedz12z12zzglobaliza7e_kaptureza7
																							((BgL_localz00_bglt)
																							(BgL_arg3679z00_971),
																							BgL_lockingz00_3);
																					}
																					{	/* Globalize/kapture.scm 118 */
																						bool_t BgL_testz00_1694;

																						{	/* Globalize/kapture.scm 118 */
																							int BgL_kz00_1495;

																							BgL_kz00_1495 =
																								(int) (((long) 0));
																							BgL_testz00_1694 =
																								CBOOL(VECTOR_REF
																								(BgL_otherzd2kapturedzd2_960,
																									BgL_kz00_1495));
																						}
																						if (BgL_testz00_1694)
																							{	/* Globalize/kapture.scm 124 */
																								obj_t BgL_arg3670z00_962;

																								obj_t BgL_arg3671z00_963;

																								BgL_arg3670z00_962 =
																									MAKE_PAIR(VECTOR_REF
																									(BgL_otherzd2kapturedzd2_960,
																										(int) (((long) 2))),
																									BgL_kapturedz00_939);
																								BgL_arg3671z00_963 =
																									CDR(BgL_ctoz00_940);
																								{
																									obj_t BgL_ctoz00_1703;

																									obj_t BgL_kapturedz00_1702;

																									BgL_kapturedz00_1702 =
																										BgL_arg3670z00_962;
																									BgL_ctoz00_1703 =
																										BgL_arg3671z00_963;
																									BgL_ctoz00_940 =
																										BgL_ctoz00_1703;
																									BgL_kapturedz00_939 =
																										BgL_kapturedz00_1702;
																									goto
																										BgL_zc3anonymousza33659ze3z83_942;
																								}
																							}
																						else
																							{	/* Globalize/kapture.scm 119 */
																								obj_t BgL_arg3673z00_965;

																								obj_t BgL_arg3674z00_966;

																								bool_t BgL_arg3675z00_967;

																								BgL_arg3673z00_965 =
																									MAKE_PAIR(VECTOR_REF
																									(BgL_otherzd2kapturedzd2_960,
																										(int) (((long) 2))),
																									BgL_kapturedz00_939);
																								BgL_arg3674z00_966 =
																									CDR(BgL_ctoz00_940);
																								if (BgL_setterzf3zf3_941)
																									{	/* Globalize/kapture.scm 121 */
																										BgL_arg3675z00_967 =
																											(VECTOR_REF
																											(BgL_otherzd2kapturedzd2_960,
																												(int) (((long) 1))) ==
																											(obj_t) (BgL_localz00_2));
																									}
																								else
																									{	/* Globalize/kapture.scm 121 */
																										BgL_arg3675z00_967 =
																											((bool_t) 0);
																									}
																								{
																									bool_t BgL_setterzf3zf3_1715;

																									obj_t BgL_ctoz00_1714;

																									obj_t BgL_kapturedz00_1713;

																									BgL_kapturedz00_1713 =
																										BgL_arg3673z00_965;
																									BgL_ctoz00_1714 =
																										BgL_arg3674z00_966;
																									BgL_setterzf3zf3_1715 =
																										BgL_arg3675z00_967;
																									BgL_setterzf3zf3_941 =
																										BgL_setterzf3zf3_1715;
																									BgL_ctoz00_940 =
																										BgL_ctoz00_1714;
																									BgL_kapturedz00_939 =
																										BgL_kapturedz00_1713;
																									goto
																										BgL_zc3anonymousza33659ze3z83_942;
																								}
																							}
																					}
																				}
																			}
																		else
																			{	/* Globalize/kapture.scm 113 */
																				{
																					obj_t BgL_ctoz00_1716;

																					BgL_ctoz00_1716 = CDR(BgL_ctoz00_940);
																					BgL_ctoz00_940 = BgL_ctoz00_1716;
																					goto
																						BgL_zc3anonymousza33659ze3z83_942;
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



/* union */
	BGL_EXPORTED_DEF obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t
		BgL_setsz00_4)
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 142 */
			BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7 =
				(((long) 1) + BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
			{
				obj_t BgL_setsz00_982;

				obj_t BgL_unionz00_983;

				BgL_setsz00_982 = BgL_setsz00_4;
				BgL_unionz00_983 = BNIL;
			BgL_zc3anonymousza33687ze3z83_984:
				if (NULLP(BgL_setsz00_982))
					{	/* Globalize/kapture.scm 146 */
						return BgL_unionz00_983;
					}
				else
					{	/* Globalize/kapture.scm 148 */
						obj_t BgL_g3641z00_986;

						BgL_g3641z00_986 = CAR(BgL_setsz00_982);
						{
							obj_t BgL_setz00_988;

							obj_t BgL_unionz00_989;

							BgL_setz00_988 = BgL_g3641z00_986;
							BgL_unionz00_989 = BgL_unionz00_983;
						BgL_zc3anonymousza33689ze3z83_990:
							if (NULLP(BgL_setz00_988))
								{
									obj_t BgL_unionz00_1726;

									obj_t BgL_setsz00_1724;

									BgL_setsz00_1724 = CDR(BgL_setsz00_982);
									BgL_unionz00_1726 = BgL_unionz00_989;
									BgL_unionz00_983 = BgL_unionz00_1726;
									BgL_setsz00_982 = BgL_setsz00_1724;
									goto BgL_zc3anonymousza33687ze3z83_984;
								}
							else
								{	/* Globalize/kapture.scm 154 */
									bool_t BgL_testz00_1727;

									{	/* Globalize/kapture.scm 154 */
										BgL_valuez00_bglt BgL_arg3713z00_1014;

										{	/* Globalize/kapture.scm 154 */
											BgL_variablez00_bglt BgL_obj1611z00_1512;

											{	/* Globalize/kapture.scm 154 */
												obj_t BgL_pairz00_1511;

												BgL_pairz00_1511 = BgL_setz00_988;
												BgL_obj1611z00_1512 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_1511));
											}
											BgL_arg3713z00_1014 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1512))->
												BgL_valuez00);
										}
										{	/* Globalize/kapture.scm 154 */
											obj_t BgL_obj1856z00_1513;

											BgL_obj1856z00_1513 = (obj_t) (BgL_arg3713z00_1014);
											BgL_testz00_1727 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_1513,
												BGl_funz00zzast_varz00);
										}
									}
									if (BgL_testz00_1727)
										{	/* Globalize/kapture.scm 155 */
											bool_t BgL_testz00_1733;

											{	/* Globalize/kapture.scm 155 */
												long BgL_arg3700z00_1001;

												{	/* Globalize/kapture.scm 155 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3376z00_1516;

													{	/* Globalize/kapture.scm 155 */
														BgL_valuez00_bglt BgL_auxz00_1734;

														{	/* Globalize/kapture.scm 155 */
															BgL_variablez00_bglt BgL_obj1611z00_1515;

															{	/* Globalize/kapture.scm 155 */
																obj_t BgL_pairz00_1514;

																BgL_pairz00_1514 = BgL_setz00_988;
																BgL_obj1611z00_1515 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1514));
															}
															BgL_auxz00_1734 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1515))->BgL_valuez00);
														}
														BgL_obj3376z00_1516 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_1734);
													}
													{
														obj_t BgL_auxz00_1739;

														{	/* Globalize/kapture.scm 155 */
															BgL_objectz00_bglt BgL_auxz00_1740;

															BgL_auxz00_1740 =
																(BgL_objectz00_bglt) (BgL_obj3376z00_1516);
															BgL_auxz00_1739 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1740);
														}
														BgL_arg3700z00_1001 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1739))->BgL_umarkz00);
												}}
												BgL_testz00_1733 =
													(BgL_arg3700z00_1001 ==
													BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
											}
											if (BgL_testz00_1733)
												{
													obj_t BgL_setz00_1745;

													BgL_setz00_1745 = CDR(BgL_setz00_988);
													BgL_setz00_988 = BgL_setz00_1745;
													goto BgL_zc3anonymousza33689ze3z83_990;
												}
											else
												{	/* Globalize/kapture.scm 155 */
													{	/* Globalize/kapture.scm 159 */
														BgL_valuez00_bglt BgL_arg3695z00_996;

														{	/* Globalize/kapture.scm 159 */
															BgL_variablez00_bglt BgL_obj1611z00_1519;

															{	/* Globalize/kapture.scm 159 */
																obj_t BgL_pairz00_1518;

																BgL_pairz00_1518 = BgL_setz00_988;
																BgL_obj1611z00_1519 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1518));
															}
															BgL_arg3695z00_996 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1519))->BgL_valuez00);
														}
														{	/* Globalize/kapture.scm 159 */
															BgL_sfunzf2ginfozf2_bglt BgL_obj3378z00_1520;

															long BgL_val3377z00_1521;

															BgL_obj3378z00_1520 =
																(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3695z00_996);
															BgL_val3377z00_1521 =
																BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
															{
																obj_t BgL_auxz00_1751;

																{	/* Globalize/kapture.scm 159 */
																	BgL_objectz00_bglt BgL_auxz00_1752;

																	BgL_auxz00_1752 =
																		(BgL_objectz00_bglt) (BgL_obj3378z00_1520);
																	BgL_auxz00_1751 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1752);
																}
																((((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_1751))->BgL_umarkz00) =
																	((long) BgL_val3377z00_1521), BUNSPEC);
													}}}
													{	/* Globalize/kapture.scm 161 */
														obj_t BgL_arg3697z00_998;

														obj_t BgL_arg3698z00_999;

														BgL_arg3697z00_998 = CDR(BgL_setz00_988);
														BgL_arg3698z00_999 =
															MAKE_PAIR(CAR(BgL_setz00_988), BgL_unionz00_989);
														{
															obj_t BgL_unionz00_1760;

															obj_t BgL_setz00_1759;

															BgL_setz00_1759 = BgL_arg3697z00_998;
															BgL_unionz00_1760 = BgL_arg3698z00_999;
															BgL_unionz00_989 = BgL_unionz00_1760;
															BgL_setz00_988 = BgL_setz00_1759;
															goto BgL_zc3anonymousza33689ze3z83_990;
														}
													}
												}
										}
									else
										{	/* Globalize/kapture.scm 163 */
											bool_t BgL_testz00_1761;

											{	/* Globalize/kapture.scm 163 */
												long BgL_arg3710z00_1011;

												{	/* Globalize/kapture.scm 163 */
													BgL_svarzf2ginfozf2_bglt BgL_obj3454z00_1526;

													{	/* Globalize/kapture.scm 163 */
														BgL_valuez00_bglt BgL_auxz00_1762;

														{	/* Globalize/kapture.scm 163 */
															BgL_variablez00_bglt BgL_obj1611z00_1525;

															{	/* Globalize/kapture.scm 163 */
																obj_t BgL_pairz00_1524;

																BgL_pairz00_1524 = BgL_setz00_988;
																BgL_obj1611z00_1525 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1524));
															}
															BgL_auxz00_1762 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1525))->BgL_valuez00);
														}
														BgL_obj3454z00_1526 =
															(BgL_svarzf2ginfozf2_bglt) (BgL_auxz00_1762);
													}
													{
														obj_t BgL_auxz00_1767;

														{	/* Globalize/kapture.scm 163 */
															BgL_objectz00_bglt BgL_auxz00_1768;

															BgL_auxz00_1768 =
																(BgL_objectz00_bglt) (BgL_obj3454z00_1526);
															BgL_auxz00_1767 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1768);
														}
														BgL_arg3710z00_1011 =
															(((BgL_svarzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1767))->BgL_markz00);
												}}
												BgL_testz00_1761 =
													(BgL_arg3710z00_1011 ==
													BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7);
											}
											if (BgL_testz00_1761)
												{
													obj_t BgL_setz00_1773;

													BgL_setz00_1773 = CDR(BgL_setz00_988);
													BgL_setz00_988 = BgL_setz00_1773;
													goto BgL_zc3anonymousza33689ze3z83_990;
												}
											else
												{	/* Globalize/kapture.scm 163 */
													{	/* Globalize/kapture.scm 166 */
														BgL_valuez00_bglt BgL_arg3705z00_1006;

														{	/* Globalize/kapture.scm 166 */
															BgL_variablez00_bglt BgL_obj1611z00_1529;

															{	/* Globalize/kapture.scm 166 */
																obj_t BgL_pairz00_1528;

																BgL_pairz00_1528 = BgL_setz00_988;
																BgL_obj1611z00_1529 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_pairz00_1528));
															}
															BgL_arg3705z00_1006 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1529))->BgL_valuez00);
														}
														{	/* Globalize/kapture.scm 166 */
															BgL_svarzf2ginfozf2_bglt BgL_obj3456z00_1530;

															long BgL_val3455z00_1531;

															BgL_obj3456z00_1530 =
																(BgL_svarzf2ginfozf2_bglt)
																(BgL_arg3705z00_1006);
															BgL_val3455z00_1531 =
																BGl_za2unionzd2roundza2zd2zzglobaliza7e_kaptureza7;
															{
																obj_t BgL_auxz00_1779;

																{	/* Globalize/kapture.scm 166 */
																	BgL_objectz00_bglt BgL_auxz00_1780;

																	BgL_auxz00_1780 =
																		(BgL_objectz00_bglt) (BgL_obj3456z00_1530);
																	BgL_auxz00_1779 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1780);
																}
																((((BgL_svarzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_1779))->BgL_markz00) =
																	((long) BgL_val3455z00_1531), BUNSPEC);
													}}}
													{	/* Globalize/kapture.scm 167 */
														obj_t BgL_arg3707z00_1008;

														obj_t BgL_arg3708z00_1009;

														BgL_arg3707z00_1008 = CDR(BgL_setz00_988);
														BgL_arg3708z00_1009 =
															MAKE_PAIR(CAR(BgL_setz00_988), BgL_unionz00_989);
														{
															obj_t BgL_unionz00_1788;

															obj_t BgL_setz00_1787;

															BgL_setz00_1787 = BgL_arg3707z00_1008;
															BgL_unionz00_1788 = BgL_arg3708z00_1009;
															BgL_unionz00_989 = BgL_unionz00_1788;
															BgL_setz00_988 = BgL_setz00_1787;
															goto BgL_zc3anonymousza33689ze3z83_990;
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



/* _union */
	obj_t BGl__unionz00zzglobaliza7e_kaptureza7(obj_t BgL_envz00_1536,
		obj_t BgL_setsz00_1537)
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 142 */
			return BGl_unionz00zzglobaliza7e_kaptureza7(BgL_setsz00_1537);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_kaptureza7()
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_kaptureza7()
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_kaptureza7()
	{
		AN_OBJECT;
		{	/* Globalize/kapture.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 157543843),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 242972228),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(((long)
					212892615),
				BSTRING_TO_STRING(BGl_string3768z00zzglobaliza7e_kaptureza7));
		}
	}

#ifdef __cplusplus
}
#endif
