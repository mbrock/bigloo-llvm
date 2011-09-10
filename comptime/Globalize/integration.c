/*===========================================================================*/
/*   (Globalize/integration.scm)                                             */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/integration.scm)*/
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

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t
		BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7(obj_t);
	static obj_t BGl__setzd2integrationz12zc0zzglobaliza7e_integrationza7(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationza7();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationza7();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7();
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33699ze3z83zzglobaliza7e_integrationza7(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3767z00zzglobaliza7e_integrationza7,
		BgL_bgl_string3767za700za7za7g3770za7, "set-integration!", 16);
	      DEFINE_STRING(BGl_string3768z00zzglobaliza7e_integrationza7,
		BgL_bgl_string3768za700za7za7g3771za7, "No integration for ", 19);
	      DEFINE_STRING(BGl_string3769z00zzglobaliza7e_integrationza7,
		BgL_bgl_string3769za700za7za7g3772za7, "globalize_integration", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2integrationz12zd2envz12zzglobaliza7e_integrationza7,
		BgL_bgl__setza7d2integrati3773za7,
		BGl__setzd2integrationz12zc0zzglobaliza7e_integrationza7, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long
		BgL_checksumz00_1513, char *BgL_fromz00_1514)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationza7()
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_integration");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_integration");
			return BUNSPEC;
		}
	}



/* set-integration! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt
		BgL_globalz00_1, obj_t BgL_ez00_2, obj_t BgL_g0z00_3, obj_t BgL_g1z00_4)
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 31 */
			{
				obj_t BgL_l3651z00_921;

				BgL_l3651z00_921 = BgL_ez00_2;
			BgL_zc3anonymousza33663ze3z83_922:
				if (PAIRP(BgL_l3651z00_921))
					{	/* Globalize/integration.scm 34 */
						{	/* Globalize/integration.scm 35 */
							obj_t BgL_fz00_924;

							BgL_fz00_924 = CAR(BgL_l3651z00_921);
							{	/* Globalize/integration.scm 36 */
								BgL_localzf2ginfozf2_bglt BgL_obj3525z00_1422;

								bool_t BgL_val3524z00_1423;

								BgL_obj3525z00_1422 =
									(BgL_localzf2ginfozf2_bglt) (BgL_fz00_924);
								BgL_val3524z00_1423 = ((bool_t) 1);
								{
									obj_t BgL_auxz00_1528;

									{	/* Globalize/integration.scm 36 */
										BgL_objectz00_bglt BgL_auxz00_1529;

										BgL_auxz00_1529 =
											(BgL_objectz00_bglt) (BgL_obj3525z00_1422);
										BgL_auxz00_1528 = BGL_OBJECT_WIDENING(BgL_auxz00_1529);
									}
									((((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1528))->
											BgL_globaliza7edzf3z54) =
										((bool_t) BgL_val3524z00_1423), BUNSPEC);
								}
							}
						}
						{
							obj_t BgL_l3651z00_1533;

							BgL_l3651z00_1533 = CDR(BgL_l3651z00_921);
							BgL_l3651z00_921 = BgL_l3651z00_1533;
							goto BgL_zc3anonymousza33663ze3z83_922;
						}
					}
				else
					{	/* Globalize/integration.scm 34 */
						((bool_t) 1);
					}
			}
			{	/* Globalize/integration.scm 40 */
				obj_t BgL_g3639z00_928;

				BgL_g3639z00_928 = MAKE_PAIR((obj_t) (BgL_globalz00_1), BgL_ez00_2);
				{
					obj_t BgL_fnsz00_930;

					BgL_fnsz00_930 = BgL_g3639z00_928;
				BgL_zc3anonymousza33666ze3z83_931:
					if (PAIRP(BgL_fnsz00_930))
						{	/* Globalize/integration.scm 42 */
							obj_t BgL_arg3668z00_933;

							{	/* Globalize/integration.scm 42 */
								obj_t BgL_runner3680z00_952;

								{	/* Globalize/integration.scm 42 */
									obj_t BgL_l3653z00_934;

									BgL_l3653z00_934 = BgL_fnsz00_930;
									{	/* Globalize/integration.scm 42 */
										obj_t BgL_head3655z00_936;

										BgL_head3655z00_936 =
											MAKE_PAIR
											(BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7
											(CAR(BgL_l3653z00_934)), BNIL);
										{	/* Globalize/integration.scm 42 */
											obj_t BgL_g3658z00_937;

											BgL_g3658z00_937 = CDR(BgL_l3653z00_934);
											{
												obj_t BgL_l3653z00_939;

												obj_t BgL_tail3656z00_940;

												BgL_l3653z00_939 = BgL_g3658z00_937;
												BgL_tail3656z00_940 = BgL_head3655z00_936;
											BgL_zc3anonymousza33670ze3z83_941:
												if (NULLP(BgL_l3653z00_939))
													{	/* Globalize/integration.scm 42 */
														BgL_runner3680z00_952 = BgL_head3655z00_936;
													}
												else
													{	/* Globalize/integration.scm 42 */
														obj_t BgL_newtail3657z00_943;

														BgL_newtail3657z00_943 =
															MAKE_PAIR
															(BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7
															(CAR(BgL_l3653z00_939)), BNIL);
														SET_CDR(BgL_tail3656z00_940,
															BgL_newtail3657z00_943);
														{
															obj_t BgL_tail3656z00_1551;

															obj_t BgL_l3653z00_1549;

															BgL_l3653z00_1549 = CDR(BgL_l3653z00_939);
															BgL_tail3656z00_1551 = BgL_newtail3657z00_943;
															BgL_tail3656z00_940 = BgL_tail3656z00_1551;
															BgL_l3653z00_939 = BgL_l3653z00_1549;
															goto BgL_zc3anonymousza33670ze3z83_941;
														}
													}
											}
										}
									}
								}
								BgL_arg3668z00_933 =
									BGl_appendz00zz__r4_pairs_and_lists_6_3z00
									(BgL_runner3680z00_952);
							}
							{
								obj_t BgL_fnsz00_1553;

								BgL_fnsz00_1553 = BgL_arg3668z00_933;
								BgL_fnsz00_930 = BgL_fnsz00_1553;
								goto BgL_zc3anonymousza33666ze3z83_931;
							}
						}
					else
						{	/* Globalize/integration.scm 41 */
							((bool_t) 0);
						}
				}
			}
			{
				obj_t BgL_l3659z00_955;

				BgL_l3659z00_955 = BgL_g1z00_4;
			BgL_zc3anonymousza33681ze3z83_956:
				if (PAIRP(BgL_l3659z00_955))
					{	/* Globalize/integration.scm 44 */
						{	/* Globalize/integration.scm 45 */
							obj_t BgL_fz00_958;

							BgL_fz00_958 = CAR(BgL_l3659z00_955);
							{	/* Globalize/integration.scm 45 */
								bool_t BgL_testz00_1557;

								{	/* Globalize/integration.scm 45 */
									bool_t BgL__ortest_3646z00_1441;

									BgL__ortest_3646z00_1441 =
										BGl_iszd2azf3z21zz__objectz00(BgL_fz00_958,
										BGl_globalz00zzast_varz00);
									if (BgL__ortest_3646z00_1441)
										{	/* Globalize/integration.scm 45 */
											BgL_testz00_1557 = BgL__ortest_3646z00_1441;
										}
									else
										{	/* Globalize/integration.scm 45 */
											BgL_localzf2ginfozf2_bglt BgL_obj3523z00_1443;

											BgL_obj3523z00_1443 =
												(BgL_localzf2ginfozf2_bglt) (BgL_fz00_958);
											{
												obj_t BgL_auxz00_1561;

												{	/* Globalize/integration.scm 45 */
													BgL_objectz00_bglt BgL_auxz00_1562;

													BgL_auxz00_1562 =
														(BgL_objectz00_bglt) (BgL_obj3523z00_1443);
													BgL_auxz00_1561 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1562);
												}
												BgL_testz00_1557 =
													(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1561))->
													BgL_globaliza7edzf3z54);
											}
										}
								}
								if (BgL_testz00_1557)
									{	/* Globalize/integration.scm 45 */
										BFALSE;
									}
								else
									{	/* Globalize/integration.scm 48 */
										BgL_valuez00_bglt BgL_instance3640z00_960;

										{
											BgL_variablez00_bglt BgL_auxz00_1566;

											BgL_auxz00_1566 = (BgL_variablez00_bglt) (BgL_fz00_958);
											BgL_instance3640z00_960 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1566))->
												BgL_valuez00);
										}
										{	/* Globalize/integration.scm 49 */
											obj_t BgL_arg3684z00_961;

											{	/* Globalize/integration.scm 49 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1445;

												BgL_obj3345z00_1445 =
													(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3640z00_960);
												{
													obj_t BgL_auxz00_1570;

													{	/* Globalize/integration.scm 49 */
														BgL_objectz00_bglt BgL_auxz00_1571;

														BgL_auxz00_1571 =
															(BgL_objectz00_bglt) (BgL_obj3345z00_1445);
														BgL_auxz00_1570 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1571);
													}
													BgL_arg3684z00_961 =
														(((BgL_sfunzf2ginfozf2_bglt)
															CREF(BgL_auxz00_1570))->BgL_imarkz00);
												}
											}
											{	/* Globalize/integration.scm 49 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3344z00_1446;

												obj_t BgL_val3343z00_1447;

												BgL_obj3344z00_1446 =
													(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3640z00_960);
												BgL_val3343z00_1447 = BgL_arg3684z00_961;
												{
													obj_t BgL_auxz00_1576;

													{	/* Globalize/integration.scm 49 */
														BgL_objectz00_bglt BgL_auxz00_1577;

														BgL_auxz00_1577 =
															(BgL_objectz00_bglt) (BgL_obj3344z00_1446);
														BgL_auxz00_1576 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1577);
													}
													((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1576))->
															BgL_integratorz00) =
														((obj_t) BgL_val3343z00_1447), BUNSPEC);
												}
											}
										}
									}
							}
						}
						{
							obj_t BgL_l3659z00_1581;

							BgL_l3659z00_1581 = CDR(BgL_l3659z00_955);
							BgL_l3659z00_955 = BgL_l3659z00_1581;
							goto BgL_zc3anonymousza33681ze3z83_956;
						}
					}
				else
					{	/* Globalize/integration.scm 44 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3661z00_965;

				{	/* Globalize/integration.scm 52 */
					bool_t BgL_auxz00_1583;

					BgL_l3661z00_965 = BgL_g1z00_4;
				BgL_zc3anonymousza33686ze3z83_966:
					if (PAIRP(BgL_l3661z00_965))
						{	/* Globalize/integration.scm 52 */
							{	/* Globalize/integration.scm 53 */
								obj_t BgL_fz00_968;

								BgL_fz00_968 = CAR(BgL_l3661z00_965);
								{	/* Globalize/integration.scm 53 */
									BgL_valuez00_bglt BgL_instance3642z00_969;

									{
										BgL_variablez00_bglt BgL_auxz00_1587;

										BgL_auxz00_1587 = (BgL_variablez00_bglt) (BgL_fz00_968);
										BgL_instance3642z00_969 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1587))->
											BgL_valuez00);
									}
									{	/* Globalize/integration.scm 56 */
										bool_t BgL_testz00_1590;

										{	/* Globalize/integration.scm 56 */
											bool_t BgL__ortest_3646z00_1453;

											BgL__ortest_3646z00_1453 =
												BGl_iszd2azf3z21zz__objectz00(BgL_fz00_968,
												BGl_globalz00zzast_varz00);
											if (BgL__ortest_3646z00_1453)
												{	/* Globalize/integration.scm 56 */
													BgL_testz00_1590 = BgL__ortest_3646z00_1453;
												}
											else
												{	/* Globalize/integration.scm 56 */
													BgL_localzf2ginfozf2_bglt BgL_obj3523z00_1455;

													BgL_obj3523z00_1455 =
														(BgL_localzf2ginfozf2_bglt) (BgL_fz00_968);
													{
														obj_t BgL_auxz00_1594;

														{	/* Globalize/integration.scm 56 */
															BgL_objectz00_bglt BgL_auxz00_1595;

															BgL_auxz00_1595 =
																(BgL_objectz00_bglt) (BgL_obj3523z00_1455);
															BgL_auxz00_1594 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1595);
														}
														BgL_testz00_1590 =
															(((BgL_localzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1594))->BgL_globaliza7edzf3z54);
													}
												}
										}
										if (BgL_testz00_1590)
											{	/* Globalize/integration.scm 56 */
												{	/* Globalize/integration.scm 58 */
													BgL_valuez00_bglt BgL_arg3713z00_1457;

													{
														BgL_variablez00_bglt BgL_auxz00_1599;

														BgL_auxz00_1599 =
															(BgL_variablez00_bglt) (BgL_fz00_968);
														BgL_arg3713z00_1457 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1599))->
															BgL_valuez00);
													}
													{	/* Globalize/integration.scm 58 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3344z00_1459;

														obj_t BgL_val3343z00_1460;

														BgL_obj3344z00_1459 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3713z00_1457);
														BgL_val3343z00_1460 = BFALSE;
														{
															obj_t BgL_auxz00_1603;

															{	/* Globalize/integration.scm 58 */
																BgL_objectz00_bglt BgL_auxz00_1604;

																BgL_auxz00_1604 =
																	(BgL_objectz00_bglt) (BgL_obj3344z00_1459);
																BgL_auxz00_1603 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1604);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1603))->BgL_integratorz00) =
																((obj_t) BgL_val3343z00_1460), BUNSPEC);
														}
													}
												}
											}
										else
											{	/* Globalize/integration.scm 59 */
												bool_t BgL_testz00_1608;

												{	/* Globalize/integration.scm 59 */
													obj_t BgL_arg3694z00_976;

													{	/* Globalize/integration.scm 59 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1461;

														BgL_obj3342z00_1461 =
															(BgL_sfunzf2ginfozf2_bglt)
															(BgL_instance3642z00_969);
														{
															obj_t BgL_auxz00_1610;

															{	/* Globalize/integration.scm 59 */
																BgL_objectz00_bglt BgL_auxz00_1611;

																BgL_auxz00_1611 =
																	(BgL_objectz00_bglt) (BgL_obj3342z00_1461);
																BgL_auxz00_1610 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1611);
															}
															BgL_arg3694z00_976 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_1610))->BgL_integratorz00);
														}
													}
													BgL_testz00_1608 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3694z00_976,
														BGl_variablez00zzast_varz00);
												}
												if (BgL_testz00_1608)
													{	/* Globalize/integration.scm 59 */
														{	/* Globalize/integration.scm 63 */
															obj_t BgL_arg3690z00_972;

															{	/* Globalize/integration.scm 63 */
																BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1463;

																BgL_obj3342z00_1463 =
																	(BgL_sfunzf2ginfozf2_bglt)
																	(BgL_instance3642z00_969);
																{
																	obj_t BgL_auxz00_1617;

																	{	/* Globalize/integration.scm 63 */
																		BgL_objectz00_bglt BgL_auxz00_1618;

																		BgL_auxz00_1618 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3342z00_1463);
																		BgL_auxz00_1617 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1618);
																	}
																	BgL_arg3690z00_972 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			CREF(BgL_auxz00_1617))->
																		BgL_integratorz00);
																}
															}
															BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7
																(BgL_fz00_968, BgL_arg3690z00_972);
														}
													}
												else
													{	/* Globalize/integration.scm 59 */
														BGl_internalzd2errorzd2zztools_errorz00
															(BGl_string3767z00zzglobaliza7e_integrationza7,
															BGl_string3768z00zzglobaliza7e_integrationza7,
															BGl_shapez00zztools_shapez00(BgL_fz00_968));
													}
											}
									}
								}
							}
							{
								obj_t BgL_l3661z00_1625;

								BgL_l3661z00_1625 = CDR(BgL_l3661z00_965);
								BgL_l3661z00_965 = BgL_l3661z00_1625;
								goto BgL_zc3anonymousza33686ze3z83_966;
							}
						}
					else
						{	/* Globalize/integration.scm 52 */
							BgL_auxz00_1583 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1583);
				}
			}
		}
	}



/* _set-integration! */
	obj_t BGl__setzd2integrationz12zc0zzglobaliza7e_integrationza7(obj_t
		BgL_envz00_1503, obj_t BgL_globalz00_1504, obj_t BgL_ez00_1505,
		obj_t BgL_g0z00_1506, obj_t BgL_g1z00_1507)
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 31 */
			return
				BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(
				(BgL_globalz00_bglt) (BgL_globalz00_1504), BgL_ez00_1505,
				BgL_g0z00_1506, BgL_g1z00_1507);
		}
	}



/* traverse-call-to! */
	obj_t BGl_traversezd2callzd2toz12z12zzglobaliza7e_integrationza7(obj_t
		BgL_fz00_5)
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 74 */
			{	/* Globalize/integration.scm 75 */
				obj_t BgL_integratorz00_979;

				{	/* Globalize/integration.scm 75 */
					bool_t BgL_testz00_1630;

					{	/* Globalize/integration.scm 75 */
						bool_t BgL__ortest_3646z00_1466;

						BgL__ortest_3646z00_1466 =
							BGl_iszd2azf3z21zz__objectz00(BgL_fz00_5,
							BGl_globalz00zzast_varz00);
						if (BgL__ortest_3646z00_1466)
							{	/* Globalize/integration.scm 75 */
								BgL_testz00_1630 = BgL__ortest_3646z00_1466;
							}
						else
							{	/* Globalize/integration.scm 75 */
								BgL_localzf2ginfozf2_bglt BgL_obj3523z00_1468;

								BgL_obj3523z00_1468 = (BgL_localzf2ginfozf2_bglt) (BgL_fz00_5);
								{
									obj_t BgL_auxz00_1634;

									{	/* Globalize/integration.scm 75 */
										BgL_objectz00_bglt BgL_auxz00_1635;

										BgL_auxz00_1635 =
											(BgL_objectz00_bglt) (BgL_obj3523z00_1468);
										BgL_auxz00_1634 = BGL_OBJECT_WIDENING(BgL_auxz00_1635);
									}
									BgL_testz00_1630 =
										(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1634))->
										BgL_globaliza7edzf3z54);
								}
							}
					}
					if (BgL_testz00_1630)
						{	/* Globalize/integration.scm 75 */
							BgL_integratorz00_979 = BgL_fz00_5;
						}
					else
						{	/* Globalize/integration.scm 77 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1470;

							{	/* Globalize/integration.scm 77 */
								BgL_variablez00_bglt BgL_obj1611z00_1469;

								BgL_obj1611z00_1469 = (BgL_variablez00_bglt) (BgL_fz00_5);
								BgL_obj3345z00_1470 =
									(BgL_sfunzf2ginfozf2_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1469))->
										BgL_valuez00));
							}
							{
								obj_t BgL_auxz00_1642;

								{	/* Globalize/integration.scm 77 */
									BgL_objectz00_bglt BgL_auxz00_1643;

									BgL_auxz00_1643 = (BgL_objectz00_bglt) (BgL_obj3345z00_1470);
									BgL_auxz00_1642 = BGL_OBJECT_WIDENING(BgL_auxz00_1643);
								}
								BgL_integratorz00_979 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1642))->
									BgL_imarkz00);
							}
						}
				}
				{	/* Globalize/integration.scm 78 */
					obj_t BgL_arg3697z00_981;

					{	/* Globalize/integration.scm 91 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1472;

						{	/* Globalize/integration.scm 91 */
							BgL_variablez00_bglt BgL_obj1611z00_1471;

							BgL_obj1611z00_1471 = (BgL_variablez00_bglt) (BgL_fz00_5);
							BgL_obj3333z00_1472 =
								(BgL_sfunzf2ginfozf2_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1471))->
									BgL_valuez00));
						}
						{
							obj_t BgL_auxz00_1650;

							{	/* Globalize/integration.scm 91 */
								BgL_objectz00_bglt BgL_auxz00_1651;

								BgL_auxz00_1651 = (BgL_objectz00_bglt) (BgL_obj3333z00_1472);
								BgL_auxz00_1650 = BGL_OBJECT_WIDENING(BgL_auxz00_1651);
							}
							BgL_arg3697z00_981 =
								(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1650))->
								BgL_ctoz00);
						}
					}
					{	/* Globalize/integration.scm 79 */
						obj_t BgL_zc3anonymousza33699ze3z83_1508;

						BgL_zc3anonymousza33699ze3z83_1508 =
							make_fx_procedure
							(BGl_zc3anonymousza33699ze3z83zzglobaliza7e_integrationza7,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3anonymousza33699ze3z83_1508,
							(int) (((long) 0)), BgL_integratorz00_979);
						PROCEDURE_SET(BgL_zc3anonymousza33699ze3z83_1508,
							(int) (((long) 1)), BgL_fz00_5);
						{	/* Globalize/integration.scm 78 */
							obj_t BgL_list3698z00_982;

							BgL_list3698z00_982 = MAKE_PAIR(BgL_arg3697z00_981, BNIL);
							return
								BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
								(BgL_zc3anonymousza33699ze3z83_1508, BgL_list3698z00_982);
						}
					}
				}
			}
		}
	}



/* <anonymous:3699> */
	obj_t BGl_zc3anonymousza33699ze3z83zzglobaliza7e_integrationza7(obj_t
		BgL_envz00_1509, obj_t BgL_gz00_1512)
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 78 */
			{	/* Globalize/integration.scm 79 */
				obj_t BgL_integratorz00_1510;

				obj_t BgL_fz00_1511;

				BgL_integratorz00_1510 =
					PROCEDURE_REF(BgL_envz00_1509, (int) (((long) 0)));
				BgL_fz00_1511 = PROCEDURE_REF(BgL_envz00_1509, (int) (((long) 1)));
				{
					obj_t BgL_gz00_983;

					BgL_gz00_983 = BgL_gz00_1512;
					{	/* Globalize/integration.scm 79 */
						bool_t BgL_testz00_1668;

						{	/* Globalize/integration.scm 79 */
							bool_t BgL_testz00_1669;

							{	/* Globalize/integration.scm 79 */
								bool_t BgL__ortest_3646z00_1474;

								BgL__ortest_3646z00_1474 =
									BGl_iszd2azf3z21zz__objectz00(BgL_gz00_983,
									BGl_globalz00zzast_varz00);
								if (BgL__ortest_3646z00_1474)
									{	/* Globalize/integration.scm 79 */
										BgL_testz00_1669 = BgL__ortest_3646z00_1474;
									}
								else
									{	/* Globalize/integration.scm 79 */
										BgL_localzf2ginfozf2_bglt BgL_obj3523z00_1476;

										BgL_obj3523z00_1476 =
											(BgL_localzf2ginfozf2_bglt) (BgL_gz00_983);
										{
											obj_t BgL_auxz00_1673;

											{	/* Globalize/integration.scm 79 */
												BgL_objectz00_bglt BgL_auxz00_1674;

												BgL_auxz00_1674 =
													(BgL_objectz00_bglt) (BgL_obj3523z00_1476);
												BgL_auxz00_1673 = BGL_OBJECT_WIDENING(BgL_auxz00_1674);
											}
											BgL_testz00_1669 =
												(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1673))->
												BgL_globaliza7edzf3z54);
										}
									}
							}
							if (BgL_testz00_1669)
								{	/* Globalize/integration.scm 79 */
									BgL_testz00_1668 = ((bool_t) 1);
								}
							else
								{	/* Globalize/integration.scm 79 */
									BgL_testz00_1668 = (BgL_fz00_1511 == BgL_gz00_983);
								}
						}
						if (BgL_testz00_1668)
							{	/* Globalize/integration.scm 79 */
								return BFALSE;
							}
						else
							{	/* Globalize/integration.scm 80 */
								BgL_valuez00_bglt BgL_instance3644z00_986;

								{
									BgL_variablez00_bglt BgL_auxz00_1679;

									BgL_auxz00_1679 = (BgL_variablez00_bglt) (BgL_gz00_983);
									BgL_instance3644z00_986 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1679))->
										BgL_valuez00);
								}
								{	/* Globalize/integration.scm 82 */
									bool_t BgL_testz00_1682;

									{	/* Globalize/integration.scm 82 */
										obj_t BgL_auxz00_1683;

										{	/* Globalize/integration.scm 82 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1478;

											BgL_obj3345z00_1478 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3644z00_986);
											{
												obj_t BgL_auxz00_1685;

												{	/* Globalize/integration.scm 82 */
													BgL_objectz00_bglt BgL_auxz00_1686;

													BgL_auxz00_1686 =
														(BgL_objectz00_bglt) (BgL_obj3345z00_1478);
													BgL_auxz00_1685 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1686);
												}
												BgL_auxz00_1683 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1685))->
													BgL_imarkz00);
											}
										}
										BgL_testz00_1682 =
											(BgL_auxz00_1683 == BgL_integratorz00_1510);
									}
									if (BgL_testz00_1682)
										{	/* Globalize/integration.scm 82 */
											return BFALSE;
										}
									else
										{	/* Globalize/integration.scm 84 */
											bool_t BgL_testz00_1691;

											{	/* Globalize/integration.scm 84 */
												obj_t BgL_auxz00_1692;

												{	/* Globalize/integration.scm 84 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1479;

													BgL_obj3345z00_1479 =
														(BgL_sfunzf2ginfozf2_bglt)
														(BgL_instance3644z00_986);
													{
														obj_t BgL_auxz00_1694;

														{	/* Globalize/integration.scm 84 */
															BgL_objectz00_bglt BgL_auxz00_1695;

															BgL_auxz00_1695 =
																(BgL_objectz00_bglt) (BgL_obj3345z00_1479);
															BgL_auxz00_1694 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1695);
														}
														BgL_auxz00_1692 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1694))->BgL_imarkz00);
													}
												}
												BgL_testz00_1691 = (BgL_auxz00_1692 == BUNSPEC);
											}
											if (BgL_testz00_1691)
												{	/* Globalize/integration.scm 84 */
													{	/* Globalize/integration.scm 85 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3347z00_1480;

														obj_t BgL_val3346z00_1481;

														BgL_obj3347z00_1480 =
															(BgL_sfunzf2ginfozf2_bglt)
															(BgL_instance3644z00_986);
														BgL_val3346z00_1481 = BgL_integratorz00_1510;
														{
															obj_t BgL_auxz00_1701;

															{	/* Globalize/integration.scm 85 */
																BgL_objectz00_bglt BgL_auxz00_1702;

																BgL_auxz00_1702 =
																	(BgL_objectz00_bglt) (BgL_obj3347z00_1480);
																BgL_auxz00_1701 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1702);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1701))->BgL_imarkz00) =
																((obj_t) BgL_val3346z00_1481), BUNSPEC);
														}
													}
													return BgL_gz00_983;
												}
											else
												{	/* Globalize/integration.scm 84 */
													{	/* Globalize/integration.scm 88 */
														BgL_localzf2ginfozf2_bglt BgL_obj3525z00_1482;

														bool_t BgL_val3524z00_1483;

														BgL_obj3525z00_1482 =
															(BgL_localzf2ginfozf2_bglt) (BgL_gz00_983);
														BgL_val3524z00_1483 = ((bool_t) 1);
														{
															obj_t BgL_auxz00_1707;

															{	/* Globalize/integration.scm 88 */
																BgL_objectz00_bglt BgL_auxz00_1708;

																BgL_auxz00_1708 =
																	(BgL_objectz00_bglt) (BgL_obj3525z00_1482);
																BgL_auxz00_1707 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1708);
															}
															((((BgL_localzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1707))->
																	BgL_globaliza7edzf3z54) =
																((bool_t) BgL_val3524z00_1483), BUNSPEC);
														}
													}
													{	/* Globalize/integration.scm 89 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3347z00_1484;

														obj_t BgL_val3346z00_1485;

														BgL_obj3347z00_1484 =
															(BgL_sfunzf2ginfozf2_bglt)
															(BgL_instance3644z00_986);
														BgL_val3346z00_1485 = BFALSE;
														{
															obj_t BgL_auxz00_1713;

															{	/* Globalize/integration.scm 89 */
																BgL_objectz00_bglt BgL_auxz00_1714;

																BgL_auxz00_1714 =
																	(BgL_objectz00_bglt) (BgL_obj3347z00_1484);
																BgL_auxz00_1713 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1714);
															}
															((((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1713))->BgL_imarkz00) =
																((obj_t) BgL_val3346z00_1485), BUNSPEC);
														}
													}
													return BgL_gz00_983;
												}
										}
								}
							}
					}
				}
			}
		}
	}



/* integrate-in! */
	obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationza7(obj_t BgL_fz00_7,
		obj_t BgL_gz00_8)
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 106 */
			{	/* Globalize/integration.scm 108 */
				BgL_valuez00_bglt BgL_arg3709z00_998;

				{
					BgL_variablez00_bglt BgL_auxz00_1718;

					BgL_auxz00_1718 = (BgL_variablez00_bglt) (BgL_fz00_7);
					BgL_arg3709z00_998 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1718))->BgL_valuez00);
				}
				{	/* Globalize/integration.scm 108 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3344z00_1490;

					obj_t BgL_val3343z00_1491;

					BgL_obj3344z00_1490 = (BgL_sfunzf2ginfozf2_bglt) (BgL_arg3709z00_998);
					BgL_val3343z00_1491 = BgL_gz00_8;
					{
						obj_t BgL_auxz00_1722;

						{	/* Globalize/integration.scm 108 */
							BgL_objectz00_bglt BgL_auxz00_1723;

							BgL_auxz00_1723 = (BgL_objectz00_bglt) (BgL_obj3344z00_1490);
							BgL_auxz00_1722 = BGL_OBJECT_WIDENING(BgL_auxz00_1723);
						}
						((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1722))->
								BgL_integratorz00) = ((obj_t) BgL_val3343z00_1491), BUNSPEC);
					}
				}
			}
			{	/* Globalize/integration.scm 109 */
				BgL_valuez00_bglt BgL_arg3710z00_999;

				{
					BgL_variablez00_bglt BgL_auxz00_1727;

					BgL_auxz00_1727 = (BgL_variablez00_bglt) (BgL_fz00_7);
					BgL_arg3710z00_999 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1727))->BgL_valuez00);
				}
				{	/* Globalize/integration.scm 109 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3325z00_1493;

					bool_t BgL_val3324z00_1494;

					BgL_obj3325z00_1493 = (BgL_sfunzf2ginfozf2_bglt) (BgL_arg3710z00_999);
					BgL_val3324z00_1494 = ((bool_t) 0);
					{
						obj_t BgL_auxz00_1731;

						{	/* Globalize/integration.scm 109 */
							BgL_objectz00_bglt BgL_auxz00_1732;

							BgL_auxz00_1732 = (BgL_objectz00_bglt) (BgL_obj3325z00_1493);
							BgL_auxz00_1731 = BGL_OBJECT_WIDENING(BgL_auxz00_1732);
						}
						((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1731))->BgL_gzf3zf3) =
							((bool_t) BgL_val3324z00_1494), BUNSPEC);
					}
				}
			}
			{	/* Globalize/integration.scm 110 */
				BgL_valuez00_bglt BgL_instance3649z00_1000;

				{
					BgL_variablez00_bglt BgL_auxz00_1736;

					BgL_auxz00_1736 = (BgL_variablez00_bglt) (BgL_gz00_8);
					BgL_instance3649z00_1000 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1736))->BgL_valuez00);
				}
				{	/* Globalize/integration.scm 111 */
					obj_t BgL_arg3711z00_1001;

					{	/* Globalize/integration.scm 111 */
						obj_t BgL_arg3712z00_1002;

						{	/* Globalize/integration.scm 111 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3352z00_1496;

							BgL_obj3352z00_1496 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3649z00_1000);
							{
								obj_t BgL_auxz00_1740;

								{	/* Globalize/integration.scm 111 */
									BgL_objectz00_bglt BgL_auxz00_1741;

									BgL_auxz00_1741 = (BgL_objectz00_bglt) (BgL_obj3352z00_1496);
									BgL_auxz00_1740 = BGL_OBJECT_WIDENING(BgL_auxz00_1741);
								}
								BgL_arg3712z00_1002 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1740))->
									BgL_integratedz00);
							}
						}
						BgL_arg3711z00_1001 = MAKE_PAIR(BgL_fz00_7, BgL_arg3712z00_1002);
					}
					{	/* Globalize/integration.scm 111 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3354z00_1497;

						obj_t BgL_val3353z00_1498;

						BgL_obj3354z00_1497 =
							(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3649z00_1000);
						BgL_val3353z00_1498 = BgL_arg3711z00_1001;
						{
							obj_t BgL_auxz00_1747;

							{	/* Globalize/integration.scm 111 */
								BgL_objectz00_bglt BgL_auxz00_1748;

								BgL_auxz00_1748 = (BgL_objectz00_bglt) (BgL_obj3354z00_1497);
								BgL_auxz00_1747 = BGL_OBJECT_WIDENING(BgL_auxz00_1748);
							}
							return
								((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1747))->
									BgL_integratedz00) = ((obj_t) BgL_val3353z00_1498), BUNSPEC);
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationza7()
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationza7()
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationza7()
	{
		AN_OBJECT;
		{	/* Globalize/integration.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					426556099),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					482601228),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					139755433),
				BSTRING_TO_STRING(BGl_string3769z00zzglobaliza7e_integrationza7));
		}
	}

#ifdef __cplusplus
}
#endif
