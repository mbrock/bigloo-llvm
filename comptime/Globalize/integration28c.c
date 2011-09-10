/*===========================================================================*/
/*   (Globalize/integration28c.scm)                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/integration28c.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static bool_t
		BGl_integratorzf3zf3zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_integrationzd228cz75();
	static obj_t
		BGl_findzd2integratorzd2zzglobaliza7e_integrationzd228cz75
		(BgL_localz00_bglt);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_integrationzd228cz75();
	static bool_t
		BGl_integratezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_variablez00_bglt,
		BgL_localz00_bglt);
	static obj_t
		BGl__setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationzd228cz75(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_loopz00zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static long BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75;
	static bool_t
		BGl_integratezf3z72z81zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationzd228cz75();
	static long BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationzd228cz75();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t
		BGl_ownerzd2integratorzd2zzglobaliza7e_integrationzd228cz75
		(BgL_localz00_bglt);
	static obj_t
		BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75();
	static bool_t
		BGl_visiblezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t
		BGl_findzd2otherzd2integratorza2za2zzglobaliza7e_integrationzd228cz75
		(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75
		(BgL_globalz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2optimzd2integratezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static bool_t
		BGl_okzd2callzf3z21zzglobaliza7e_integrationzd228cz75(BgL_variablez00_bglt,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string3821z00zzglobaliza7e_integrationzd228cz75,
		BgL_bgl_string3821za700za7za7g3826za7, "empty integrator*", 17);
	      DEFINE_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75,
		BgL_bgl_string3822za700za7za7g3827za7, "globalize_integration-28c", 25);
	      DEFINE_STRING(BGl_string3823z00zzglobaliza7e_integrationzd228cz75,
		BgL_bgl_string3823za700za7za7g3828za7, "find-integrator ", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2integrationzd228cz12zd2envzc0zzglobaliza7e_integrationzd228cz75,
		BgL_bgl__setza7d2integrati3829za7,
		BGl__setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75, 0L,
		BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75(long
		BgL_checksumz00_1623, char *BgL_fromz00_1624)
	{
		AN_OBJECT;
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_integrationzd228cz75 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75();
					BGl_cnstzd2initzd2zzglobaliza7e_integrationzd228cz75();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75();
					BGl_toplevelzd2initzd2zzglobaliza7e_integrationzd228cz75();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_integration-28c");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_integration-28c");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			{	/* Globalize/integration28c.scm 17 */
				obj_t BgL_cportz00_1615;

				BgL_cportz00_1615 =
					bgl_open_input_string
					(BGl_string3823z00zzglobaliza7e_integrationzd228cz75,
					(int) (((long) 0)));
				{
					long BgL_iz00_1616;

					BgL_iz00_1616 = ((long) 0);
				BgL_loopz00_1617:
					if ((BgL_iz00_1616 == ((long) -1)))
						{	/* Globalize/integration28c.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/integration28c.scm 17 */
							{	/* Globalize/integration28c.scm 17 */
								obj_t BgL_arg3825z00_1619;

								{	/* Globalize/integration28c.scm 17 */

									{	/* Globalize/integration28c.scm 17 */
										obj_t BgL_locationz00_1621;

										BgL_locationz00_1621 = BBOOL(((bool_t) 0));
										{	/* Globalize/integration28c.scm 17 */

											BgL_arg3825z00_1619 =
												BGl_readz00zz__readerz00(BgL_cportz00_1615,
												BgL_locationz00_1621);
										}
									}
								}
								{	/* Globalize/integration28c.scm 17 */
									int BgL_auxz00_1640;

									BgL_auxz00_1640 = (int) (BgL_iz00_1616);
									CNST_TABLE_SET(BgL_auxz00_1640, BgL_arg3825z00_1619);
							}}
							{	/* Globalize/integration28c.scm 17 */
								int BgL_auxz00_1622;

								BgL_auxz00_1622 = (int) ((BgL_iz00_1616 - ((long) 1)));
								{
									long BgL_iz00_1645;

									BgL_iz00_1645 = (long) (BgL_auxz00_1622);
									BgL_iz00_1616 = BgL_iz00_1645;
									goto BgL_loopz00_1617;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75 = ((long) 0);
			return (BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75 =
				((long) 0), BUNSPEC);
		}
	}



/* set-integration-28c! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75
		(BgL_globalz00_bglt BgL_globalz00_1, obj_t BgL_ez00_2, obj_t BgL_g0z00_3,
		obj_t BgL_g1z00_4)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 33 */
			{
				obj_t BgL_l3672z00_927;

				{	/* Globalize/integration28c.scm 35 */
					bool_t BgL_auxz00_1647;

					BgL_l3672z00_927 = BgL_g1z00_4;
				BgL_zc3anonymousza33689ze3z83_928:
					if (PAIRP(BgL_l3672z00_927))
						{	/* Globalize/integration28c.scm 35 */
							{	/* Globalize/integration28c.scm 36 */
								obj_t BgL_fz00_930;

								BgL_fz00_930 = CAR(BgL_l3672z00_927);
								{	/* Globalize/integration28c.scm 36 */
									obj_t BgL_gz00_931;

									BgL_gz00_931 =
										BGl_findzd2integratorzd2zzglobaliza7e_integrationzd228cz75(
										(BgL_localz00_bglt) (BgL_fz00_930));
									if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_931,
											BGl_variablez00zzast_varz00))
										{	/* Globalize/integration28c.scm 37 */
											BGl_integratezd2inz12zc0zzglobaliza7e_integrationzd228cz75
												(BgL_fz00_930, (BgL_variablez00_bglt) (BgL_gz00_931));
										}
									else
										{	/* Globalize/integration28c.scm 37 */
											{	/* Globalize/integration28c.scm 39 */
												BgL_valuez00_bglt BgL_arg3697z00_1502;

												{
													BgL_variablez00_bglt BgL_auxz00_1657;

													BgL_auxz00_1657 =
														(BgL_variablez00_bglt) (BgL_fz00_930);
													BgL_arg3697z00_1502 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1657))->
														BgL_valuez00);
												}
												{	/* Globalize/integration28c.scm 39 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3344z00_1504;

													obj_t BgL_val3343z00_1505;

													BgL_obj3344z00_1504 =
														(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3697z00_1502);
													BgL_val3343z00_1505 = BFALSE;
													{
														obj_t BgL_auxz00_1661;

														{	/* Globalize/integration28c.scm 39 */
															BgL_objectz00_bglt BgL_auxz00_1662;

															BgL_auxz00_1662 =
																(BgL_objectz00_bglt) (BgL_obj3344z00_1504);
															BgL_auxz00_1661 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1662);
														}
														((((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_1661))->BgL_integratorz00) =
															((obj_t) BgL_val3343z00_1505), BUNSPEC);
													}
												}
											}
										}
								}
							}
							{
								obj_t BgL_l3672z00_1666;

								BgL_l3672z00_1666 = CDR(BgL_l3672z00_927);
								BgL_l3672z00_927 = BgL_l3672z00_1666;
								goto BgL_zc3anonymousza33689ze3z83_928;
							}
						}
					else
						{	/* Globalize/integration28c.scm 35 */
							BgL_auxz00_1647 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_1647);
				}
			}
		}
	}



/* _set-integration-28c! */
	obj_t
		BGl__setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75(obj_t
		BgL_envz00_1604, obj_t BgL_globalz00_1605, obj_t BgL_ez00_1606,
		obj_t BgL_g0z00_1607, obj_t BgL_g1z00_1608)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 33 */
			return
				BGl_setzd2integrationzd228cz12z12zzglobaliza7e_integrationzd228cz75(
				(BgL_globalz00_bglt) (BgL_globalz00_1605), BgL_ez00_1606,
				BgL_g0z00_1607, BgL_g1z00_1608);
		}
	}



/* integrate-in! */
	obj_t BGl_integratezd2inz12zc0zzglobaliza7e_integrationzd228cz75(obj_t
		BgL_fz00_5, BgL_variablez00_bglt BgL_gz00_6)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 45 */
			{	/* Globalize/integration28c.scm 49 */
				BgL_valuez00_bglt BgL_arg3693z00_936;

				{
					BgL_variablez00_bglt BgL_auxz00_1671;

					BgL_auxz00_1671 = (BgL_variablez00_bglt) (BgL_fz00_5);
					BgL_arg3693z00_936 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1671))->BgL_valuez00);
				}
				{	/* Globalize/integration28c.scm 49 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3344z00_1508;

					obj_t BgL_val3343z00_1509;

					BgL_obj3344z00_1508 = (BgL_sfunzf2ginfozf2_bglt) (BgL_arg3693z00_936);
					BgL_val3343z00_1509 = (obj_t) (BgL_gz00_6);
					{
						obj_t BgL_auxz00_1676;

						{	/* Globalize/integration28c.scm 49 */
							BgL_objectz00_bglt BgL_auxz00_1677;

							BgL_auxz00_1677 = (BgL_objectz00_bglt) (BgL_obj3344z00_1508);
							BgL_auxz00_1676 = BGL_OBJECT_WIDENING(BgL_auxz00_1677);
						}
						((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1676))->
								BgL_integratorz00) = ((obj_t) BgL_val3343z00_1509), BUNSPEC);
					}
				}
			}
			{	/* Globalize/integration28c.scm 50 */
				BgL_valuez00_bglt BgL_arg3694z00_937;

				{
					BgL_variablez00_bglt BgL_auxz00_1681;

					BgL_auxz00_1681 = (BgL_variablez00_bglt) (BgL_fz00_5);
					BgL_arg3694z00_937 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1681))->BgL_valuez00);
				}
				{	/* Globalize/integration28c.scm 50 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3325z00_1511;

					bool_t BgL_val3324z00_1512;

					BgL_obj3325z00_1511 = (BgL_sfunzf2ginfozf2_bglt) (BgL_arg3694z00_937);
					BgL_val3324z00_1512 = ((bool_t) 0);
					{
						obj_t BgL_auxz00_1685;

						{	/* Globalize/integration28c.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_1686;

							BgL_auxz00_1686 = (BgL_objectz00_bglt) (BgL_obj3325z00_1511);
							BgL_auxz00_1685 = BGL_OBJECT_WIDENING(BgL_auxz00_1686);
						}
						((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1685))->BgL_gzf3zf3) =
							((bool_t) BgL_val3324z00_1512), BUNSPEC);
					}
				}
			}
			{	/* Globalize/integration28c.scm 51 */
				BgL_valuez00_bglt BgL_instance3639z00_938;

				BgL_instance3639z00_938 =
					(((BgL_variablez00_bglt) CREF(BgL_gz00_6))->BgL_valuez00);
				{	/* Globalize/integration28c.scm 52 */
					obj_t BgL_arg3695z00_939;

					{	/* Globalize/integration28c.scm 52 */
						obj_t BgL_arg3696z00_940;

						{	/* Globalize/integration28c.scm 52 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3352z00_1514;

							BgL_obj3352z00_1514 =
								(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3639z00_938);
							{
								obj_t BgL_auxz00_1692;

								{	/* Globalize/integration28c.scm 52 */
									BgL_objectz00_bglt BgL_auxz00_1693;

									BgL_auxz00_1693 = (BgL_objectz00_bglt) (BgL_obj3352z00_1514);
									BgL_auxz00_1692 = BGL_OBJECT_WIDENING(BgL_auxz00_1693);
								}
								BgL_arg3696z00_940 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1692))->
									BgL_integratedz00);
							}
						}
						BgL_arg3695z00_939 = MAKE_PAIR(BgL_fz00_5, BgL_arg3696z00_940);
					}
					{	/* Globalize/integration28c.scm 52 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3354z00_1515;

						obj_t BgL_val3353z00_1516;

						BgL_obj3354z00_1515 =
							(BgL_sfunzf2ginfozf2_bglt) (BgL_instance3639z00_938);
						BgL_val3353z00_1516 = BgL_arg3695z00_939;
						{
							obj_t BgL_auxz00_1699;

							{	/* Globalize/integration28c.scm 52 */
								BgL_objectz00_bglt BgL_auxz00_1700;

								BgL_auxz00_1700 = (BgL_objectz00_bglt) (BgL_obj3354z00_1515);
								BgL_auxz00_1699 = BGL_OBJECT_WIDENING(BgL_auxz00_1700);
							}
							return
								((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1699))->
									BgL_integratedz00) = ((obj_t) BgL_val3353z00_1516), BUNSPEC);
						}
					}
				}
			}
		}
	}



/* find-integrator */
	obj_t
		BGl_findzd2integratorzd2zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt
		BgL_fz00_8)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 65 */
			{	/* Globalize/integration28c.scm 77 */
				obj_t BgL__andtest_3643z00_943;

				BgL__andtest_3643z00_943 =
					BGl_za2optimzd2integratezf3za2z21zzengine_paramz00;
				if (CBOOL(BgL__andtest_3643z00_943))
					{	/* Globalize/integration28c.scm 78 */
						obj_t BgL_guessz00_944;

						{	/* Globalize/integration28c.scm 78 */
							obj_t BgL__ortest_3647z00_1523;

							BgL__ortest_3647z00_1523 =
								BGl_ownerzd2integratorzd2zzglobaliza7e_integrationzd228cz75
								(BgL_fz00_8);
							if (CBOOL(BgL__ortest_3647z00_1523))
								{	/* Globalize/integration28c.scm 78 */
									BgL_guessz00_944 = BgL__ortest_3647z00_1523;
								}
							else
								{	/* Globalize/integration28c.scm 78 */
									BgL_guessz00_944 =
										BGl_findzd2otherzd2integratorza2za2zzglobaliza7e_integrationzd228cz75
										(BgL_fz00_8);
								}
						}
						if (NULLP(BgL_guessz00_944))
							{	/* Globalize/integration28c.scm 80 */
								BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											0)), BGl_string3821z00zzglobaliza7e_integrationzd228cz75,
									(obj_t) (BgL_fz00_8));
								return BFALSE;
							}
						else
							{	/* Globalize/integration28c.scm 86 */
								bool_t BgL_testz00_1715;

								{	/* Globalize/integration28c.scm 86 */
									obj_t BgL_auxz00_1716;

									BgL_auxz00_1716 = CDR(BgL_guessz00_944);
									BgL_testz00_1715 = PAIRP(BgL_auxz00_1716);
								}
								if (BgL_testz00_1715)
									{	/* Globalize/integration28c.scm 86 */
										return BFALSE;
									}
								else
									{	/* Globalize/integration28c.scm 90 */
										bool_t BgL_testz00_1719;

										{	/* Globalize/integration28c.scm 90 */
											obj_t BgL_arg3701z00_948;

											BgL_arg3701z00_948 = CAR(BgL_guessz00_944);
											BgL_testz00_1719 =
												BGl_integratezf3zf3zzglobaliza7e_integrationzd228cz75(
												(BgL_variablez00_bglt) (BgL_fz00_8),
												(BgL_localz00_bglt) (BgL_arg3701z00_948));
										}
										if (BgL_testz00_1719)
											{	/* Globalize/integration28c.scm 90 */
												return CAR(BgL_guessz00_944);
											}
										else
											{	/* Globalize/integration28c.scm 90 */
												return BFALSE;
											}
									}
							}
					}
				else
					{	/* Globalize/integration28c.scm 77 */
						return BFALSE;
					}
			}
		}
	}



/* integrator? */
	bool_t
		BGl_integratorzf3zf3zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt
		BgL_fz00_9, obj_t BgL_gz00_10)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 101 */
			{	/* Globalize/integration28c.scm 102 */
				bool_t BgL__ortest_3644z00_950;

				{	/* Globalize/integration28c.scm 102 */
					obj_t BgL_auxz00_1725;

					{	/* Globalize/integration28c.scm 102 */
						BgL_sfunzf2ginfozf2_bglt BgL_obj3348z00_1530;

						{	/* Globalize/integration28c.scm 102 */
							BgL_variablez00_bglt BgL_obj1611z00_1529;

							BgL_obj1611z00_1529 = (BgL_variablez00_bglt) (BgL_fz00_9);
							BgL_obj3348z00_1530 =
								(BgL_sfunzf2ginfozf2_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1529))->
									BgL_valuez00));
						}
						{
							obj_t BgL_auxz00_1729;

							{	/* Globalize/integration28c.scm 102 */
								BgL_objectz00_bglt BgL_auxz00_1730;

								BgL_auxz00_1730 = (BgL_objectz00_bglt) (BgL_obj3348z00_1530);
								BgL_auxz00_1729 = BGL_OBJECT_WIDENING(BgL_auxz00_1730);
							}
							BgL_auxz00_1725 =
								(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1729))->
								BgL_ownerz00);
						}
					}
					BgL__ortest_3644z00_950 = (BgL_auxz00_1725 == BgL_gz00_10);
				}
				if (BgL__ortest_3644z00_950)
					{	/* Globalize/integration28c.scm 102 */
						return BgL__ortest_3644z00_950;
					}
				else
					{	/* Globalize/integration28c.scm 103 */
						bool_t BgL__ortest_3645z00_951;

						BgL__ortest_3645z00_951 =
							BGl_iszd2azf3z21zz__objectz00(BgL_gz00_10,
							BGl_globalz00zzast_varz00);
						if (BgL__ortest_3645z00_951)
							{	/* Globalize/integration28c.scm 103 */
								return BgL__ortest_3645z00_951;
							}
						else
							{	/* Globalize/integration28c.scm 103 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_10,
										BGl_localz00zzast_varz00))
									{	/* Globalize/integration28c.scm 104 */
										BgL_localzf2ginfozf2_bglt BgL_obj3520z00_1533;

										BgL_obj3520z00_1533 =
											(BgL_localzf2ginfozf2_bglt) (
											(BgL_localz00_bglt) (BgL_gz00_10));
										{
											obj_t BgL_auxz00_1742;

											{	/* Globalize/integration28c.scm 104 */
												BgL_objectz00_bglt BgL_auxz00_1743;

												BgL_auxz00_1743 =
													(BgL_objectz00_bglt) (BgL_obj3520z00_1533);
												BgL_auxz00_1742 = BGL_OBJECT_WIDENING(BgL_auxz00_1743);
											}
											return
												(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1742))->
												BgL_escapezf3zf3);
										}
									}
								else
									{	/* Globalize/integration28c.scm 104 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}
	}



/* owner-integrator */
	obj_t
		BGl_ownerzd2integratorzd2zzglobaliza7e_integrationzd228cz75
		(BgL_localz00_bglt BgL_fz00_12)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 124 */
			{	/* Globalize/integration28c.scm 125 */
				obj_t BgL_ownerz00_956;

				{	/* Globalize/integration28c.scm 125 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3348z00_1536;

					{	/* Globalize/integration28c.scm 125 */
						BgL_variablez00_bglt BgL_obj1611z00_1535;

						BgL_obj1611z00_1535 = (BgL_variablez00_bglt) (BgL_fz00_12);
						BgL_obj3348z00_1536 =
							(BgL_sfunzf2ginfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1535))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_1750;

						{	/* Globalize/integration28c.scm 125 */
							BgL_objectz00_bglt BgL_auxz00_1751;

							BgL_auxz00_1751 = (BgL_objectz00_bglt) (BgL_obj3348z00_1536);
							BgL_auxz00_1750 = BGL_OBJECT_WIDENING(BgL_auxz00_1751);
						}
						BgL_ownerz00_956 =
							(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1750))->
							BgL_ownerz00);
					}
				}
				{	/* Globalize/integration28c.scm 126 */
					bool_t BgL_testz00_1755;

					{
						obj_t BgL_l3674z00_961;

						{	/* Globalize/integration28c.scm 128 */
							BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1538;

							{	/* Globalize/integration28c.scm 128 */
								BgL_variablez00_bglt BgL_obj1611z00_1537;

								BgL_obj1611z00_1537 = (BgL_variablez00_bglt) (BgL_fz00_12);
								BgL_obj3326z00_1538 =
									(BgL_sfunzf2ginfozf2_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1537))->
										BgL_valuez00));
							}
							{
								obj_t BgL_auxz00_1769;

								{	/* Globalize/integration28c.scm 128 */
									BgL_objectz00_bglt BgL_auxz00_1770;

									BgL_auxz00_1770 = (BgL_objectz00_bglt) (BgL_obj3326z00_1538);
									BgL_auxz00_1769 = BGL_OBJECT_WIDENING(BgL_auxz00_1770);
								}
								BgL_l3674z00_961 =
									(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1769))->
									BgL_cfromz00);
							}
						}
					BgL_zc3anonymousza33707ze3z83_962:
						if (NULLP(BgL_l3674z00_961))
							{	/* Globalize/integration28c.scm 128 */
								BgL_testz00_1755 = ((bool_t) 1);
							}
						else
							{	/* Globalize/integration28c.scm 128 */
								bool_t BgL_testz00_1758;

								{	/* Globalize/integration28c.scm 127 */
									obj_t BgL_xz00_966;

									BgL_xz00_966 = CAR(BgL_l3674z00_961);
									{	/* Globalize/integration28c.scm 127 */
										bool_t BgL__ortest_3648z00_967;

										BgL__ortest_3648z00_967 =
											(BgL_xz00_966 == (obj_t) (BgL_fz00_12));
										if (BgL__ortest_3648z00_967)
											{	/* Globalize/integration28c.scm 127 */
												BgL_testz00_1758 = BgL__ortest_3648z00_967;
											}
										else
											{	/* Globalize/integration28c.scm 127 */
												BgL_testz00_1758 = (BgL_xz00_966 == BgL_ownerz00_956);
											}
									}
								}
								if (BgL_testz00_1758)
									{
										obj_t BgL_l3674z00_1764;

										BgL_l3674z00_1764 = CDR(BgL_l3674z00_961);
										BgL_l3674z00_961 = BgL_l3674z00_1764;
										goto BgL_zc3anonymousza33707ze3z83_962;
									}
								else
									{	/* Globalize/integration28c.scm 128 */
										BgL_testz00_1755 = ((bool_t) 0);
									}
							}
					}
					if (BgL_testz00_1755)
						{	/* Globalize/integration28c.scm 129 */
							obj_t BgL_list3706z00_958;

							BgL_list3706z00_958 = MAKE_PAIR(BgL_ownerz00_956, BNIL);
							return BgL_list3706z00_958;
						}
					else
						{	/* Globalize/integration28c.scm 126 */
							return BFALSE;
						}
				}
			}
		}
	}



/* find-other-integrator* */
	obj_t
		BGl_findzd2otherzd2integratorza2za2zzglobaliza7e_integrationzd228cz75
		(BgL_localz00_bglt BgL_fz00_13)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 135 */
			BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75 =
				(((long) 1) +
				BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75);
			{	/* Globalize/integration28c.scm 137 */
				obj_t BgL_g3649z00_971;

				{	/* Globalize/integration28c.scm 137 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1547;

					{	/* Globalize/integration28c.scm 137 */
						BgL_variablez00_bglt BgL_obj1611z00_1546;

						BgL_obj1611z00_1546 = (BgL_variablez00_bglt) (BgL_fz00_13);
						BgL_obj3326z00_1547 =
							(BgL_sfunzf2ginfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1546))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_1779;

						{	/* Globalize/integration28c.scm 137 */
							BgL_objectz00_bglt BgL_auxz00_1780;

							BgL_auxz00_1780 = (BgL_objectz00_bglt) (BgL_obj3326z00_1547);
							BgL_auxz00_1779 = BGL_OBJECT_WIDENING(BgL_auxz00_1780);
						}
						BgL_g3649z00_971 =
							(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1779))->
							BgL_cfromz00);
				}}
				return
					BGl_loopz00zzglobaliza7e_integrationzd228cz75(BgL_fz00_13,
					BgL_g3649z00_971, BNIL);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt
		BgL_fz00_1614, obj_t BgL_cfromz00_974, obj_t BgL_escapeza2za2_975)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 137 */
		BGl_loopz00zzglobaliza7e_integrationzd228cz75:
			if (NULLP(BgL_cfromz00_974))
				{	/* Globalize/integration28c.scm 139 */
					return BgL_escapeza2za2_975;
				}
			else
				{	/* Globalize/integration28c.scm 141 */
					obj_t BgL_gz00_978;

					BgL_gz00_978 = CAR(BgL_cfromz00_974);
					{	/* Globalize/integration28c.scm 142 */
						bool_t BgL_testz00_1788;

						{	/* Globalize/integration28c.scm 142 */
							obj_t BgL_arg3725z00_989;

							{	/* Globalize/integration28c.scm 142 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3330z00_1551;

								{	/* Globalize/integration28c.scm 142 */
									BgL_variablez00_bglt BgL_obj1611z00_1550;

									BgL_obj1611z00_1550 = (BgL_variablez00_bglt) (BgL_gz00_978);
									BgL_obj3330z00_1551 =
										(BgL_sfunzf2ginfozf2_bglt) (
										(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1550))->
											BgL_valuez00));
								}
								{
									obj_t BgL_auxz00_1792;

									{	/* Globalize/integration28c.scm 142 */
										BgL_objectz00_bglt BgL_auxz00_1793;

										BgL_auxz00_1793 =
											(BgL_objectz00_bglt) (BgL_obj3330z00_1551);
										BgL_auxz00_1792 = BGL_OBJECT_WIDENING(BgL_auxz00_1793);
									}
									BgL_arg3725z00_989 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1792))->
										BgL_cfromza2za2);
								}
							}
							BgL_testz00_1788 =
								(BgL_arg3725z00_989 ==
								BINT
								(BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75));
						}
						if (BgL_testz00_1788)
							{
								obj_t BgL_cfromz00_1799;

								BgL_cfromz00_1799 = CDR(BgL_cfromz00_974);
								BgL_cfromz00_974 = BgL_cfromz00_1799;
								goto BGl_loopz00zzglobaliza7e_integrationzd228cz75;
							}
						else
							{	/* Globalize/integration28c.scm 142 */
								{	/* Globalize/integration28c.scm 145 */
									BgL_valuez00_bglt BgL_arg3717z00_981;

									{
										BgL_variablez00_bglt BgL_auxz00_1801;

										BgL_auxz00_1801 = (BgL_variablez00_bglt) (BgL_gz00_978);
										BgL_arg3717z00_981 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1801))->
											BgL_valuez00);
									}
									{	/* Globalize/integration28c.scm 145 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3332z00_1554;

										obj_t BgL_val3331z00_1555;

										BgL_obj3332z00_1554 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3717z00_981);
										BgL_val3331z00_1555 =
											BINT
											(BGl_za2escapezd2markza2zd2zzglobaliza7e_integrationzd228cz75);
										{
											obj_t BgL_auxz00_1806;

											{	/* Globalize/integration28c.scm 145 */
												BgL_objectz00_bglt BgL_auxz00_1807;

												BgL_auxz00_1807 =
													(BgL_objectz00_bglt) (BgL_obj3332z00_1554);
												BgL_auxz00_1806 = BGL_OBJECT_WIDENING(BgL_auxz00_1807);
											}
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1806))->
													BgL_cfromza2za2) =
												((obj_t) BgL_val3331z00_1555), BUNSPEC);
										}
									}
								}
								if (BGl_integratorzf3zf3zzglobaliza7e_integrationzd228cz75
									(BgL_fz00_1614, BgL_gz00_978))
									{	/* Globalize/integration28c.scm 148 */
										obj_t BgL_arg3719z00_983;

										obj_t BgL_arg3720z00_984;

										BgL_arg3719z00_983 = CDR(BgL_cfromz00_974);
										BgL_arg3720z00_984 =
											MAKE_PAIR(BgL_gz00_978, BgL_escapeza2za2_975);
										{
											obj_t BgL_escapeza2za2_1816;

											obj_t BgL_cfromz00_1815;

											BgL_cfromz00_1815 = BgL_arg3719z00_983;
											BgL_escapeza2za2_1816 = BgL_arg3720z00_984;
											BgL_escapeza2za2_975 = BgL_escapeza2za2_1816;
											BgL_cfromz00_974 = BgL_cfromz00_1815;
											goto BGl_loopz00zzglobaliza7e_integrationzd228cz75;
										}
									}
								else
									{	/* Globalize/integration28c.scm 150 */
										obj_t BgL_arg3721z00_985;

										obj_t BgL_arg3722z00_986;

										BgL_arg3721z00_985 = CDR(BgL_cfromz00_974);
										{	/* Globalize/integration28c.scm 151 */
											obj_t BgL_arg3723z00_987;

											{	/* Globalize/integration28c.scm 151 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1559;

												{	/* Globalize/integration28c.scm 151 */
													BgL_variablez00_bglt BgL_obj1611z00_1558;

													BgL_obj1611z00_1558 =
														(BgL_variablez00_bglt) (BgL_gz00_978);
													BgL_obj3326z00_1559 =
														(BgL_sfunzf2ginfozf2_bglt) (
														(((BgL_variablez00_bglt)
																CREF(BgL_obj1611z00_1558))->BgL_valuez00));
												}
												{
													obj_t BgL_auxz00_1821;

													{	/* Globalize/integration28c.scm 151 */
														BgL_objectz00_bglt BgL_auxz00_1822;

														BgL_auxz00_1822 =
															(BgL_objectz00_bglt) (BgL_obj3326z00_1559);
														BgL_auxz00_1821 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1822);
													}
													BgL_arg3723z00_987 =
														(((BgL_sfunzf2ginfozf2_bglt)
															CREF(BgL_auxz00_1821))->BgL_cfromz00);
												}
											}
											BgL_arg3722z00_986 =
												BGl_loopz00zzglobaliza7e_integrationzd228cz75
												(BgL_fz00_1614, BgL_arg3723z00_987,
												BgL_escapeza2za2_975);
										}
										{
											obj_t BgL_escapeza2za2_1828;

											obj_t BgL_cfromz00_1827;

											BgL_cfromz00_1827 = BgL_arg3721z00_985;
											BgL_escapeza2za2_1828 = BgL_arg3722z00_986;
											BgL_escapeza2za2_975 = BgL_escapeza2za2_1828;
											BgL_cfromz00_974 = BgL_cfromz00_1827;
											goto BGl_loopz00zzglobaliza7e_integrationzd228cz75;
										}
									}
							}
					}
				}
		}
	}



/* integrate? */
	bool_t
		BGl_integratezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_variablez00_bglt
		BgL_fz00_14, BgL_localz00_bglt BgL_gz00_15)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 164 */
			BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75 =
				(BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75 +
				((long) 1));
			{	/* Globalize/integration28c.scm 203 */
				bool_t BgL_rz00_997;

				BgL_rz00_997 =
					BGl_integratezf3z72z81zzglobaliza7e_integrationzd228cz75(BgL_gz00_15,
					BgL_fz00_14, (obj_t) (BgL_fz00_14));
				return BgL_rz00_997;
			}
		}
	}



/* ok-call? */
	bool_t
		BGl_okzd2callzf3z21zzglobaliza7e_integrationzd228cz75(BgL_variablez00_bglt
		BgL_fz00_1609, obj_t BgL_gz00_1005)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 178 */
			{	/* Globalize/integration28c.scm 174 */
				bool_t BgL__ortest_3654z00_1007;

				BgL__ortest_3654z00_1007 = ((obj_t) (BgL_fz00_1609) == BgL_gz00_1005);
				if (BgL__ortest_3654z00_1007)
					{	/* Globalize/integration28c.scm 174 */
						return BgL__ortest_3654z00_1007;
					}
				else
					{	/* Globalize/integration28c.scm 175 */
						bool_t BgL__ortest_3655z00_1008;

						{	/* Globalize/integration28c.scm 175 */
							obj_t BgL_auxz00_1835;

							{	/* Globalize/integration28c.scm 175 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3348z00_1563;

								BgL_obj3348z00_1563 =
									(BgL_sfunzf2ginfozf2_bglt) (
									(((BgL_variablez00_bglt) CREF(BgL_fz00_1609))->BgL_valuez00));
								{
									obj_t BgL_auxz00_1838;

									{	/* Globalize/integration28c.scm 175 */
										BgL_objectz00_bglt BgL_auxz00_1839;

										BgL_auxz00_1839 =
											(BgL_objectz00_bglt) (BgL_obj3348z00_1563);
										BgL_auxz00_1838 = BGL_OBJECT_WIDENING(BgL_auxz00_1839);
									}
									BgL_auxz00_1835 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1838))->
										BgL_ownerz00);
								}
							}
							BgL__ortest_3655z00_1008 = (BgL_auxz00_1835 == BgL_gz00_1005);
						}
						if (BgL__ortest_3655z00_1008)
							{	/* Globalize/integration28c.scm 175 */
								return BgL__ortest_3655z00_1008;
							}
						else
							{	/* Globalize/integration28c.scm 176 */
								bool_t BgL__ortest_3656z00_1009;

								{	/* Globalize/integration28c.scm 176 */
									BgL_localzf2ginfozf2_bglt BgL_obj3520z00_1564;

									BgL_obj3520z00_1564 =
										(BgL_localzf2ginfozf2_bglt) (BgL_gz00_1005);
									{
										obj_t BgL_auxz00_1846;

										{	/* Globalize/integration28c.scm 176 */
											BgL_objectz00_bglt BgL_auxz00_1847;

											BgL_auxz00_1847 =
												(BgL_objectz00_bglt) (BgL_obj3520z00_1564);
											BgL_auxz00_1846 = BGL_OBJECT_WIDENING(BgL_auxz00_1847);
										}
										BgL__ortest_3656z00_1009 =
											(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1846))->
											BgL_escapezf3zf3);
									}
								}
								if (BgL__ortest_3656z00_1009)
									{	/* Globalize/integration28c.scm 176 */
										return BgL__ortest_3656z00_1009;
									}
								else
									{	/* Globalize/integration28c.scm 177 */
										bool_t BgL__ortest_3657z00_1010;

										BgL__ortest_3657z00_1010 =
											BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1005,
											BGl_globalz00zzast_varz00);
										if (BgL__ortest_3657z00_1010)
											{	/* Globalize/integration28c.scm 177 */
												return BgL__ortest_3657z00_1010;
											}
										else
											{	/* Globalize/integration28c.scm 178 */
												obj_t BgL_auxz00_1854;

												{	/* Globalize/integration28c.scm 178 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3342z00_1567;

													{	/* Globalize/integration28c.scm 178 */
														BgL_variablez00_bglt BgL_obj1611z00_1566;

														BgL_obj1611z00_1566 =
															(BgL_variablez00_bglt) (BgL_gz00_1005);
														BgL_obj3342z00_1567 =
															(BgL_sfunzf2ginfozf2_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1566))->BgL_valuez00));
													}
													{
														obj_t BgL_auxz00_1858;

														{	/* Globalize/integration28c.scm 178 */
															BgL_objectz00_bglt BgL_auxz00_1859;

															BgL_auxz00_1859 =
																(BgL_objectz00_bglt) (BgL_obj3342z00_1567);
															BgL_auxz00_1858 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1859);
														}
														BgL_auxz00_1854 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1858))->BgL_integratorz00);
													}
												}
												return (BgL_auxz00_1854 == (obj_t) (BgL_fz00_1609));
											}
									}
							}
					}
			}
		}
	}



/* visible? */
	bool_t BGl_visiblezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt
		BgL_gz00_1611, BgL_variablez00_bglt BgL_fz00_1610, obj_t BgL_hz00_1015)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 187 */
			{	/* Globalize/integration28c.scm 181 */
				bool_t BgL__ortest_3658z00_1017;

				BgL__ortest_3658z00_1017 = (BgL_hz00_1015 == (obj_t) (BgL_gz00_1611));
				if (BgL__ortest_3658z00_1017)
					{	/* Globalize/integration28c.scm 181 */
						return BgL__ortest_3658z00_1017;
					}
				else
					{	/* Globalize/integration28c.scm 182 */
						bool_t BgL__ortest_3659z00_1018;

						BgL__ortest_3659z00_1018 =
							BGl_iszd2azf3z21zz__objectz00(BgL_hz00_1015,
							BGl_globalz00zzast_varz00);
						if (BgL__ortest_3659z00_1018)
							{	/* Globalize/integration28c.scm 182 */
								return BgL__ortest_3659z00_1018;
							}
						else
							{	/* Globalize/integration28c.scm 183 */
								bool_t BgL__ortest_3660z00_1019;

								{	/* Globalize/integration28c.scm 183 */
									bool_t BgL_testz00_1870;

									{	/* Globalize/integration28c.scm 183 */
										BgL_localzf2ginfozf2_bglt BgL_obj3520z00_1569;

										BgL_obj3520z00_1569 =
											(BgL_localzf2ginfozf2_bglt) (BgL_hz00_1015);
										{
											obj_t BgL_auxz00_1872;

											{	/* Globalize/integration28c.scm 183 */
												BgL_objectz00_bglt BgL_auxz00_1873;

												BgL_auxz00_1873 =
													(BgL_objectz00_bglt) (BgL_obj3520z00_1569);
												BgL_auxz00_1872 = BGL_OBJECT_WIDENING(BgL_auxz00_1873);
											}
											BgL_testz00_1870 =
												(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_1872))->
												BgL_escapezf3zf3);
										}
									}
									if (BgL_testz00_1870)
										{	/* Globalize/integration28c.scm 183 */
											BgL__ortest_3660z00_1019 = ((bool_t) 0);
										}
									else
										{	/* Globalize/integration28c.scm 183 */
											BgL__ortest_3660z00_1019 = ((bool_t) 1);
										}
								}
								if (BgL__ortest_3660z00_1019)
									{	/* Globalize/integration28c.scm 183 */
										return BgL__ortest_3660z00_1019;
									}
								else
									{	/* Globalize/integration28c.scm 184 */
										bool_t BgL__ortest_3661z00_1020;

										{	/* Globalize/integration28c.scm 184 */
											bool_t BgL_testz00_1878;

											{
												obj_t BgL_l3677z00_1037;

												{	/* Globalize/integration28c.scm 184 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1571;

													{	/* Globalize/integration28c.scm 184 */
														BgL_variablez00_bglt BgL_obj1611z00_1570;

														BgL_obj1611z00_1570 =
															(BgL_variablez00_bglt) (BgL_hz00_1015);
														BgL_obj3333z00_1571 =
															(BgL_sfunzf2ginfozf2_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1570))->BgL_valuez00));
													}
													{
														obj_t BgL_auxz00_1889;

														{	/* Globalize/integration28c.scm 184 */
															BgL_objectz00_bglt BgL_auxz00_1890;

															BgL_auxz00_1890 =
																(BgL_objectz00_bglt) (BgL_obj3333z00_1571);
															BgL_auxz00_1889 =
																BGL_OBJECT_WIDENING(BgL_auxz00_1890);
														}
														BgL_l3677z00_1037 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_1889))->BgL_ctoz00);
													}
												}
											BgL_zc3anonymousza33747ze3z83_1038:
												if (NULLP(BgL_l3677z00_1037))
													{	/* Globalize/integration28c.scm 184 */
														BgL_testz00_1878 = ((bool_t) 1);
													}
												else
													{	/* Globalize/integration28c.scm 184 */
														if (BGl_okzd2callzf3z21zzglobaliza7e_integrationzd228cz75(BgL_fz00_1610, CAR(BgL_l3677z00_1037)))
															{
																obj_t BgL_l3677z00_1884;

																BgL_l3677z00_1884 = CDR(BgL_l3677z00_1037);
																BgL_l3677z00_1037 = BgL_l3677z00_1884;
																goto BgL_zc3anonymousza33747ze3z83_1038;
															}
														else
															{	/* Globalize/integration28c.scm 184 */
																BgL_testz00_1878 = ((bool_t) 0);
															}
													}
											}
											if (BgL_testz00_1878)
												{
													obj_t BgL_l3680z00_1027;

													{	/* Globalize/integration28c.scm 185 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1576;

														{	/* Globalize/integration28c.scm 185 */
															BgL_variablez00_bglt BgL_obj1611z00_1575;

															BgL_obj1611z00_1575 =
																(BgL_variablez00_bglt) (BgL_hz00_1015);
															BgL_obj3326z00_1576 =
																(BgL_sfunzf2ginfozf2_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1575))->BgL_valuez00));
														}
														{
															obj_t BgL_auxz00_1904;

															{	/* Globalize/integration28c.scm 185 */
																BgL_objectz00_bglt BgL_auxz00_1905;

																BgL_auxz00_1905 =
																	(BgL_objectz00_bglt) (BgL_obj3326z00_1576);
																BgL_auxz00_1904 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1905);
															}
															BgL_l3680z00_1027 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_1904))->BgL_cfromz00);
														}
													}
												BgL_zc3anonymousza33739ze3z83_1028:
													if (NULLP(BgL_l3680z00_1027))
														{	/* Globalize/integration28c.scm 185 */
															BgL__ortest_3661z00_1020 = ((bool_t) 1);
														}
													else
														{	/* Globalize/integration28c.scm 185 */
															if (BGl_okzd2callzf3z21zzglobaliza7e_integrationzd228cz75(BgL_fz00_1610, CAR(BgL_l3680z00_1027)))
																{
																	obj_t BgL_l3680z00_1899;

																	BgL_l3680z00_1899 = CDR(BgL_l3680z00_1027);
																	BgL_l3680z00_1027 = BgL_l3680z00_1899;
																	goto BgL_zc3anonymousza33739ze3z83_1028;
																}
															else
																{	/* Globalize/integration28c.scm 185 */
																	BgL__ortest_3661z00_1020 = ((bool_t) 0);
																}
														}
												}
											else
												{	/* Globalize/integration28c.scm 184 */
													BgL__ortest_3661z00_1020 = ((bool_t) 0);
												}
										}
										if (BgL__ortest_3661z00_1020)
											{	/* Globalize/integration28c.scm 184 */
												return BgL__ortest_3661z00_1020;
											}
										else
											{	/* Globalize/integration28c.scm 186 */
												bool_t BgL__ortest_3662z00_1021;

												{	/* Globalize/integration28c.scm 186 */
													obj_t BgL_auxz00_1910;

													{	/* Globalize/integration28c.scm 186 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3348z00_1581;

														{	/* Globalize/integration28c.scm 186 */
															BgL_variablez00_bglt BgL_obj1611z00_1580;

															BgL_obj1611z00_1580 =
																(BgL_variablez00_bglt) (BgL_gz00_1611);
															BgL_obj3348z00_1581 =
																(BgL_sfunzf2ginfozf2_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_obj1611z00_1580))->BgL_valuez00));
														}
														{
															obj_t BgL_auxz00_1914;

															{	/* Globalize/integration28c.scm 186 */
																BgL_objectz00_bglt BgL_auxz00_1915;

																BgL_auxz00_1915 =
																	(BgL_objectz00_bglt) (BgL_obj3348z00_1581);
																BgL_auxz00_1914 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1915);
															}
															BgL_auxz00_1910 =
																(((BgL_sfunzf2ginfozf2_bglt)
																	CREF(BgL_auxz00_1914))->BgL_ownerz00);
														}
													}
													BgL__ortest_3662z00_1021 =
														(BgL_auxz00_1910 == BgL_hz00_1015);
												}
												if (BgL__ortest_3662z00_1021)
													{	/* Globalize/integration28c.scm 186 */
														return BgL__ortest_3662z00_1021;
													}
												else
													{	/* Globalize/integration28c.scm 186 */
														return
															BGl_integratezf3z72z81zzglobaliza7e_integrationzd228cz75
															(BgL_gz00_1611, BgL_fz00_1610, BgL_hz00_1015);
													}
											}
									}
							}
					}
			}
		}
	}



/* integrate?' */
	bool_t
		BGl_integratezf3z72z81zzglobaliza7e_integrationzd228cz75(BgL_localz00_bglt
		BgL_gz00_1613, BgL_variablez00_bglt BgL_fz00_1612, obj_t BgL_fz00_1046)
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 202 */
			{	/* Globalize/integration28c.scm 190 */
				bool_t BgL__ortest_3664z00_1048;

				BgL__ortest_3664z00_1048 = (BgL_fz00_1046 == (obj_t) (BgL_gz00_1613));
				if (BgL__ortest_3664z00_1048)
					{	/* Globalize/integration28c.scm 190 */
						return BgL__ortest_3664z00_1048;
					}
				else
					{	/* Globalize/integration28c.scm 191 */
						bool_t BgL_testz00_1925;

						{	/* Globalize/integration28c.scm 191 */
							obj_t BgL_obj1812z00_1582;

							BgL_obj1812z00_1582 = (obj_t) (BgL_gz00_1613);
							BgL_testz00_1925 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1582,
								BGl_localz00zzast_varz00);
						}
						if (BgL_testz00_1925)
							{	/* Globalize/integration28c.scm 192 */
								BgL_valuez00_bglt BgL_vz00_1050;

								{
									BgL_variablez00_bglt BgL_auxz00_1928;

									BgL_auxz00_1928 = (BgL_variablez00_bglt) (BgL_fz00_1046);
									BgL_vz00_1050 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1928))->
										BgL_valuez00);
								}
								{	/* Globalize/integration28c.scm 194 */
									bool_t BgL_testz00_1931;

									{	/* Globalize/integration28c.scm 194 */
										obj_t BgL_auxz00_1932;

										{	/* Globalize/integration28c.scm 194 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1584;

											BgL_obj3345z00_1584 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_vz00_1050);
											{
												obj_t BgL_auxz00_1934;

												{	/* Globalize/integration28c.scm 194 */
													BgL_objectz00_bglt BgL_auxz00_1935;

													BgL_auxz00_1935 =
														(BgL_objectz00_bglt) (BgL_obj3345z00_1584);
													BgL_auxz00_1934 =
														BGL_OBJECT_WIDENING(BgL_auxz00_1935);
												}
												BgL_auxz00_1932 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_1934))->
													BgL_imarkz00);
											}
										}
										BgL_testz00_1931 = INTEGERP(BgL_auxz00_1932);
									}
									if (BgL_testz00_1931)
										{	/* Globalize/integration28c.scm 195 */
											bool_t BgL__ortest_3669z00_1053;

											{	/* Globalize/integration28c.scm 195 */
												long BgL_n2z00_1588;

												BgL_n2z00_1588 =
													BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75;
												{	/* Globalize/integration28c.scm 195 */
													long BgL_auxz00_1940;

													{	/* Globalize/integration28c.scm 195 */
														BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1586;

														BgL_obj3345z00_1586 =
															(BgL_sfunzf2ginfozf2_bglt) (BgL_vz00_1050);
														{	/* Globalize/integration28c.scm 195 */
															obj_t BgL_auxz00_1942;

															{
																obj_t BgL_auxz00_1943;

																{	/* Globalize/integration28c.scm 195 */
																	BgL_objectz00_bglt BgL_auxz00_1944;

																	BgL_auxz00_1944 =
																		(BgL_objectz00_bglt) (BgL_obj3345z00_1586);
																	BgL_auxz00_1943 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1944);
																}
																BgL_auxz00_1942 =
																	(((BgL_sfunzf2ginfozf2_bglt)
																		CREF(BgL_auxz00_1943))->BgL_imarkz00);
															}
															BgL_auxz00_1940 = (long) CINT(BgL_auxz00_1942);
													}}
													BgL__ortest_3669z00_1053 =
														(BgL_auxz00_1940 == BgL_n2z00_1588);
											}}
											if (BgL__ortest_3669z00_1053)
												{	/* Globalize/integration28c.scm 195 */
													return BgL__ortest_3669z00_1053;
												}
											else
												{	/* Globalize/integration28c.scm 196 */
													bool_t BgL_testz00_1951;

													{	/* Globalize/integration28c.scm 196 */
														long BgL_n2z00_1591;

														BgL_n2z00_1591 =
															BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75;
														{	/* Globalize/integration28c.scm 196 */
															long BgL_auxz00_1952;

															{	/* Globalize/integration28c.scm 196 */
																BgL_sfunzf2ginfozf2_bglt BgL_obj3345z00_1589;

																BgL_obj3345z00_1589 =
																	(BgL_sfunzf2ginfozf2_bglt) (BgL_vz00_1050);
																{	/* Globalize/integration28c.scm 196 */
																	obj_t BgL_auxz00_1954;

																	{
																		obj_t BgL_auxz00_1955;

																		{	/* Globalize/integration28c.scm 196 */
																			BgL_objectz00_bglt BgL_auxz00_1956;

																			BgL_auxz00_1956 =
																				(BgL_objectz00_bglt)
																				(BgL_obj3345z00_1589);
																			BgL_auxz00_1955 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_1956);
																		}
																		BgL_auxz00_1954 =
																			(((BgL_sfunzf2ginfozf2_bglt)
																				CREF(BgL_auxz00_1955))->BgL_imarkz00);
																	}
																	BgL_auxz00_1952 =
																		(long) CINT(BgL_auxz00_1954);
															}}
															BgL_testz00_1951 =
																(BgL_auxz00_1952 < BgL_n2z00_1591);
													}}
													if (BgL_testz00_1951)
														{	/* Globalize/integration28c.scm 196 */
															{	/* Globalize/integration28c.scm 198 */
																BgL_sfunzf2ginfozf2_bglt BgL_obj3347z00_1592;

																obj_t BgL_val3346z00_1593;

																BgL_obj3347z00_1592 =
																	(BgL_sfunzf2ginfozf2_bglt) (BgL_vz00_1050);
																BgL_val3346z00_1593 =
																	BINT
																	(BGl_za2integratezd2markza2zd2zzglobaliza7e_integrationzd228cz75);
																{
																	obj_t BgL_auxz00_1964;

																	{	/* Globalize/integration28c.scm 198 */
																		BgL_objectz00_bglt BgL_auxz00_1965;

																		BgL_auxz00_1965 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3347z00_1592);
																		BgL_auxz00_1964 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1965);
																	}
																	((((BgL_sfunzf2ginfozf2_bglt)
																				CREF(BgL_auxz00_1964))->BgL_imarkz00) =
																		((obj_t) BgL_val3346z00_1593), BUNSPEC);
																}
															}
															{	/* Globalize/integration28c.scm 199 */
																bool_t BgL_rz00_1055;

																{	/* Globalize/integration28c.scm 199 */
																	bool_t BgL_testz00_1969;

																	{	/* Globalize/integration28c.scm 199 */
																		obj_t BgL_g3685z00_1066;

																		{	/* Globalize/integration28c.scm 199 */
																			BgL_sfunzf2ginfozf2_bglt
																				BgL_obj3326z00_1594;
																			BgL_obj3326z00_1594 =
																				(BgL_sfunzf2ginfozf2_bglt)
																				(BgL_vz00_1050);
																			{
																				obj_t BgL_auxz00_1971;

																				{	/* Globalize/integration28c.scm 199 */
																					BgL_objectz00_bglt BgL_auxz00_1972;

																					BgL_auxz00_1972 =
																						(BgL_objectz00_bglt)
																						(BgL_obj3326z00_1594);
																					BgL_auxz00_1971 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_1972);
																				}
																				BgL_g3685z00_1066 =
																					(((BgL_sfunzf2ginfozf2_bglt)
																						CREF(BgL_auxz00_1971))->
																					BgL_cfromz00);
																			}
																		}
																		{
																			obj_t BgL_l3683z00_1068;

																			BgL_l3683z00_1068 = BgL_g3685z00_1066;
																		BgL_zc3anonymousza33760ze3z83_1069:
																			if (NULLP(BgL_l3683z00_1068))
																				{	/* Globalize/integration28c.scm 199 */
																					BgL_testz00_1969 = ((bool_t) 1);
																				}
																			else
																				{	/* Globalize/integration28c.scm 199 */
																					if (BGl_visiblezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_gz00_1613, BgL_fz00_1612, CAR(BgL_l3683z00_1068)))
																						{
																							obj_t BgL_l3683z00_1981;

																							BgL_l3683z00_1981 =
																								CDR(BgL_l3683z00_1068);
																							BgL_l3683z00_1068 =
																								BgL_l3683z00_1981;
																							goto
																								BgL_zc3anonymousza33760ze3z83_1069;
																						}
																					else
																						{	/* Globalize/integration28c.scm 199 */
																							BgL_testz00_1969 = ((bool_t) 0);
																						}
																				}
																		}
																	}
																	if (BgL_testz00_1969)
																		{	/* Globalize/integration28c.scm 200 */
																			obj_t BgL_g3688z00_1057;

																			{	/* Globalize/integration28c.scm 200 */
																				BgL_sfunzf2ginfozf2_bglt
																					BgL_obj3333z00_1598;
																				BgL_obj3333z00_1598 =
																					(BgL_sfunzf2ginfozf2_bglt)
																					(BgL_vz00_1050);
																				{
																					obj_t BgL_auxz00_1984;

																					{	/* Globalize/integration28c.scm 200 */
																						BgL_objectz00_bglt BgL_auxz00_1985;

																						BgL_auxz00_1985 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3333z00_1598);
																						BgL_auxz00_1984 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_1985);
																					}
																					BgL_g3688z00_1057 =
																						(((BgL_sfunzf2ginfozf2_bglt)
																							CREF(BgL_auxz00_1984))->
																						BgL_ctoz00);
																				}
																			}
																			{
																				obj_t BgL_l3686z00_1059;

																				BgL_l3686z00_1059 = BgL_g3688z00_1057;
																			BgL_zc3anonymousza33755ze3z83_1060:
																				if (NULLP(BgL_l3686z00_1059))
																					{	/* Globalize/integration28c.scm 200 */
																						BgL_rz00_1055 = ((bool_t) 1);
																					}
																				else
																					{	/* Globalize/integration28c.scm 200 */
																						if (BGl_visiblezf3zf3zzglobaliza7e_integrationzd228cz75(BgL_gz00_1613, BgL_fz00_1612, CAR(BgL_l3686z00_1059)))
																							{
																								obj_t BgL_l3686z00_1994;

																								BgL_l3686z00_1994 =
																									CDR(BgL_l3686z00_1059);
																								BgL_l3686z00_1059 =
																									BgL_l3686z00_1994;
																								goto
																									BgL_zc3anonymousza33755ze3z83_1060;
																							}
																						else
																							{	/* Globalize/integration28c.scm 200 */
																								BgL_rz00_1055 = ((bool_t) 0);
																							}
																					}
																			}
																		}
																	else
																		{	/* Globalize/integration28c.scm 199 */
																			BgL_rz00_1055 = ((bool_t) 0);
																		}
																}
																if (BgL_rz00_1055)
																	{	/* Globalize/integration28c.scm 201 */
																		BFALSE;
																	}
																else
																	{	/* Globalize/integration28c.scm 201 */
																		BgL_sfunzf2ginfozf2_bglt
																			BgL_obj3347z00_1602;
																		obj_t BgL_val3346z00_1603;

																		BgL_obj3347z00_1602 =
																			(BgL_sfunzf2ginfozf2_bglt)
																			(BgL_vz00_1050);
																		BgL_val3346z00_1603 = BFALSE;
																		{
																			obj_t BgL_auxz00_1998;

																			{	/* Globalize/integration28c.scm 201 */
																				BgL_objectz00_bglt BgL_auxz00_1999;

																				BgL_auxz00_1999 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3347z00_1602);
																				BgL_auxz00_1998 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1999);
																			}
																			((((BgL_sfunzf2ginfozf2_bglt)
																						CREF(BgL_auxz00_1998))->
																					BgL_imarkz00) =
																				((obj_t) BgL_val3346z00_1603), BUNSPEC);
																		}
																	}
																return BgL_rz00_1055;
															}
														}
													else
														{	/* Globalize/integration28c.scm 196 */
															return ((bool_t) 0);
														}
												}
										}
									else
										{	/* Globalize/integration28c.scm 194 */
											return ((bool_t) 0);
										}
								}
							}
						else
							{	/* Globalize/integration28c.scm 191 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_integrationzd228cz75()
	{
		AN_OBJECT;
		{	/* Globalize/integration28c.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					426556099),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					482601228),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
			return BGl_modulezd2initializa7ationz75zztools_errorz00(((long)
					139755433),
				BSTRING_TO_STRING(BGl_string3822z00zzglobaliza7e_integrationzd228cz75));
		}
	}

#ifdef __cplusplus
}
#endif
