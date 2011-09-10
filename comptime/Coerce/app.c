/*===========================================================================*/
/*   (Coerce/app.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/app.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00
		(BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcoerce_appz00();
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_appz00();
	static obj_t BGl_coercez12zd2app3256zc0zzcoerce_appz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt, obj_t,
		BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzcoerce_appz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_appz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcoerce_appz00();
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_appz00();
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00
		(BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt, obj_t,
		BgL_appz00_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_appz00();
	static obj_t __cnst[1];


	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3368z00zzcoerce_appz00,
		BgL_bgl_coerceza712za7d2app33374z00,
		BGl_coercez12zd2app3256zc0zzcoerce_appz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3370z00zzcoerce_appz00,
		BgL_bgl_string3370za700za7za7c3375za7, "coerce_app", 10);
	      DEFINE_STRING(BGl_string3369z00zzcoerce_appz00,
		BgL_bgl_string3369za700za7za7c3376za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string3371z00zzcoerce_appz00,
		BgL_bgl_string3371za700za7za7c3377za7, "import ", 7);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long
		BgL_checksumz00_1380, char *BgL_fromz00_1381)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_appz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_appz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_appz00();
					BGl_cnstzd2initzd2zzcoerce_appz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_appz00();
					BGl_methodzd2initzd2zzcoerce_appz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_app");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			{	/* Coerce/app.scm 15 */
				obj_t BgL_cportz00_1372;

				BgL_cportz00_1372 =
					bgl_open_input_string(BGl_string3371z00zzcoerce_appz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1373;

					BgL_iz00_1373 = ((long) 0);
				BgL_loopz00_1374:
					if ((BgL_iz00_1373 == ((long) -1)))
						{	/* Coerce/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/app.scm 15 */
							{	/* Coerce/app.scm 15 */
								obj_t BgL_arg3373z00_1376;

								{	/* Coerce/app.scm 15 */

									{	/* Coerce/app.scm 15 */
										obj_t BgL_locationz00_1378;

										BgL_locationz00_1378 = BBOOL(((bool_t) 0));
										{	/* Coerce/app.scm 15 */

											BgL_arg3373z00_1376 =
												BGl_readz00zz__readerz00(BgL_cportz00_1372,
												BgL_locationz00_1378);
										}
									}
								}
								{	/* Coerce/app.scm 15 */
									int BgL_auxz00_1397;

									BgL_auxz00_1397 = (int) (BgL_iz00_1373);
									CNST_TABLE_SET(BgL_auxz00_1397, BgL_arg3373z00_1376);
							}}
							{	/* Coerce/app.scm 15 */
								int BgL_auxz00_1379;

								BgL_auxz00_1379 = (int) ((BgL_iz00_1373 - ((long) 1)));
								{
									long BgL_iz00_1402;

									BgL_iz00_1402 = (long) (BgL_auxz00_1379);
									BgL_iz00_1373 = BgL_iz00_1402;
									goto BgL_loopz00_1374;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			return BUNSPEC;
		}
	}



/* coerce-foreign-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_5, obj_t BgL_callerz00_6, BgL_appz00_bglt BgL_nodez00_7,
		obj_t BgL_toz00_8, obj_t BgL_safez00_9)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 40 */
			{	/* Coerce/app.scm 43 */
				BgL_valuez00_bglt BgL_ffunz00_809;

				BgL_ffunz00_809 =
					(((BgL_variablez00_bglt) CREF(BgL_calleez00_5))->BgL_valuez00);
				{	/* Coerce/app.scm 43 */
					long BgL_arityz00_810;

					{
						BgL_funz00_bglt BgL_auxz00_1405;

						BgL_auxz00_1405 = (BgL_funz00_bglt) (BgL_ffunz00_809);
						BgL_arityz00_810 =
							(((BgL_funz00_bglt) CREF(BgL_auxz00_1405))->BgL_arityz00);
					}
					{	/* Coerce/app.scm 44 */

						if ((BgL_arityz00_810 >= ((long) 0)))
							{	/* Coerce/app.scm 45 */
								return
									BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00
									(BgL_ffunz00_809, BgL_calleez00_5, BgL_callerz00_6,
									BgL_nodez00_7, BgL_toz00_8, BgL_safez00_9);
							}
						else
							{	/* Coerce/app.scm 45 */
								return
									BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00
									(BgL_ffunz00_809, BgL_calleez00_5, BgL_callerz00_6,
									BgL_nodez00_7, BgL_toz00_8, BgL_safez00_9);
							}
					}
				}
			}
		}
	}



/* coerce-foreign-fx-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt
		BgL_funz00_10, BgL_variablez00_bglt BgL_calleez00_11,
		obj_t BgL_callerz00_12, BgL_appz00_bglt BgL_nodez00_13, obj_t BgL_toz00_14,
		obj_t BgL_safez00_15)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 52 */
			{	/* Coerce/app.scm 53 */
				obj_t BgL_g3246z00_812;

				obj_t BgL_g3247z00_813;

				BgL_g3246z00_812 =
					(((BgL_appz00_bglt) CREF(BgL_nodez00_13))->BgL_argsz00);
				{
					BgL_cfunz00_bglt BgL_auxz00_1413;

					BgL_auxz00_1413 = (BgL_cfunz00_bglt) (BgL_funz00_10);
					BgL_g3247z00_813 =
						(((BgL_cfunz00_bglt) CREF(BgL_auxz00_1413))->BgL_argszd2typezd2);
				}
				{
					obj_t BgL_actualsz00_815;

					obj_t BgL_typesz00_816;

					BgL_actualsz00_815 = BgL_g3246z00_812;
					BgL_typesz00_816 = BgL_g3247z00_813;
				BgL_zc3anonymousza33258ze3z83_817:
					if (NULLP(BgL_actualsz00_815))
						{	/* Coerce/app.scm 56 */
							BgL_typez00_bglt BgL_arg3260z00_819;

							BgL_arg3260z00_819 =
								(((BgL_variablez00_bglt) CREF(BgL_calleez00_11))->BgL_typez00);
							return
								BGl_convertz12z12zzcoerce_convertz00(
								(BgL_nodez00_bglt) (BgL_nodez00_13), BgL_arg3260z00_819,
								(BgL_typez00_bglt) (BgL_toz00_14), CBOOL(BgL_safez00_15));
						}
					else
						{	/* Coerce/app.scm 55 */
							{	/* Coerce/app.scm 58 */
								BgL_nodez00_bglt BgL_arg3261z00_820;

								{	/* Coerce/app.scm 58 */
									obj_t BgL_arg3262z00_821;

									obj_t BgL_arg3263z00_822;

									BgL_arg3262z00_821 = CAR(BgL_actualsz00_815);
									BgL_arg3263z00_822 = CAR(BgL_typesz00_816);
									BgL_arg3261z00_820 =
										BGl_coercez12z12zzcoerce_coercez00(
										(BgL_nodez00_bglt) (BgL_arg3262z00_821), BgL_callerz00_12,
										(BgL_typez00_bglt) (BgL_arg3263z00_822),
										CBOOL(BgL_safez00_15));
								}
								{	/* Coerce/app.scm 58 */
									obj_t BgL_auxz00_1429;

									BgL_auxz00_1429 = (obj_t) (BgL_arg3261z00_820);
									SET_CAR(BgL_actualsz00_815, BgL_auxz00_1429);
								}
							}
							{
								obj_t BgL_typesz00_1434;

								obj_t BgL_actualsz00_1432;

								BgL_actualsz00_1432 = CDR(BgL_actualsz00_815);
								BgL_typesz00_1434 = CDR(BgL_typesz00_816);
								BgL_typesz00_816 = BgL_typesz00_1434;
								BgL_actualsz00_815 = BgL_actualsz00_1432;
								goto BgL_zc3anonymousza33258ze3z83_817;
							}
						}
				}
			}
		}
	}



/* coerce-foreign-va-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt
		BgL_funz00_16, BgL_variablez00_bglt BgL_calleez00_17,
		obj_t BgL_callerz00_18, BgL_appz00_bglt BgL_nodez00_19, obj_t BgL_toz00_20,
		obj_t BgL_safez00_21)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 64 */
			{	/* Coerce/app.scm 65 */
				obj_t BgL_g3248z00_826;

				obj_t BgL_g3249z00_827;

				long BgL_g3250z00_828;

				BgL_g3248z00_826 =
					(((BgL_appz00_bglt) CREF(BgL_nodez00_19))->BgL_argsz00);
				{
					BgL_cfunz00_bglt BgL_auxz00_1437;

					BgL_auxz00_1437 = (BgL_cfunz00_bglt) (BgL_funz00_16);
					BgL_g3249z00_827 =
						(((BgL_cfunz00_bglt) CREF(BgL_auxz00_1437))->BgL_argszd2typezd2);
				}
				{
					BgL_funz00_bglt BgL_auxz00_1440;

					BgL_auxz00_1440 = (BgL_funz00_bglt) (BgL_funz00_16);
					BgL_g3250z00_828 =
						(((BgL_funz00_bglt) CREF(BgL_auxz00_1440))->BgL_arityz00);
				}
				{
					obj_t BgL_actualsz00_830;

					obj_t BgL_typesz00_831;

					long BgL_counterz00_832;

					BgL_actualsz00_830 = BgL_g3248z00_826;
					BgL_typesz00_831 = BgL_g3249z00_827;
					BgL_counterz00_832 = BgL_g3250z00_828;
				BgL_zc3anonymousza33266ze3z83_833:
					if ((BgL_counterz00_832 == ((long) -1)))
						{
							obj_t BgL_actualsz00_836;

							BgL_actualsz00_836 = BgL_actualsz00_830;
						BgL_zc3anonymousza33268ze3z83_837:
							if (NULLP(BgL_actualsz00_836))
								{	/* Coerce/app.scm 72 */
									BgL_typez00_bglt BgL_arg3270z00_839;

									BgL_arg3270z00_839 =
										(((BgL_variablez00_bglt) CREF(BgL_calleez00_17))->
										BgL_typez00);
									return
										BGl_convertz12z12zzcoerce_convertz00((BgL_nodez00_bglt)
										(BgL_nodez00_19), BgL_arg3270z00_839,
										(BgL_typez00_bglt) (BgL_toz00_20), CBOOL(BgL_safez00_21));
								}
							else
								{	/* Coerce/app.scm 71 */
									{	/* Coerce/app.scm 74 */
										BgL_nodez00_bglt BgL_arg3271z00_840;

										{	/* Coerce/app.scm 74 */
											obj_t BgL_arg3272z00_841;

											obj_t BgL_arg3273z00_842;

											BgL_arg3272z00_841 = CAR(BgL_actualsz00_836);
											BgL_arg3273z00_842 = CAR(BgL_typesz00_831);
											BgL_arg3271z00_840 =
												BGl_coercez12z12zzcoerce_coercez00(
												(BgL_nodez00_bglt) (BgL_arg3272z00_841),
												BgL_callerz00_18,
												(BgL_typez00_bglt) (BgL_arg3273z00_842),
												CBOOL(BgL_safez00_21));
										}
										{	/* Coerce/app.scm 74 */
											obj_t BgL_auxz00_1458;

											BgL_auxz00_1458 = (obj_t) (BgL_arg3271z00_840);
											SET_CAR(BgL_actualsz00_836, BgL_auxz00_1458);
										}
									}
									{
										obj_t BgL_actualsz00_1461;

										BgL_actualsz00_1461 = CDR(BgL_actualsz00_836);
										BgL_actualsz00_836 = BgL_actualsz00_1461;
										goto BgL_zc3anonymousza33268ze3z83_837;
									}
								}
						}
					else
						{	/* Coerce/app.scm 68 */
							{	/* Coerce/app.scm 80 */
								BgL_nodez00_bglt BgL_arg3275z00_845;

								{	/* Coerce/app.scm 80 */
									obj_t BgL_arg3276z00_846;

									obj_t BgL_arg3277z00_847;

									BgL_arg3276z00_846 = CAR(BgL_actualsz00_830);
									BgL_arg3277z00_847 = CAR(BgL_typesz00_831);
									BgL_arg3275z00_845 =
										BGl_coercez12z12zzcoerce_coercez00(
										(BgL_nodez00_bglt) (BgL_arg3276z00_846), BgL_callerz00_18,
										(BgL_typez00_bglt) (BgL_arg3277z00_847),
										CBOOL(BgL_safez00_21));
								}
								{	/* Coerce/app.scm 80 */
									obj_t BgL_auxz00_1469;

									BgL_auxz00_1469 = (obj_t) (BgL_arg3275z00_845);
									SET_CAR(BgL_actualsz00_830, BgL_auxz00_1469);
								}
							}
							{
								long BgL_counterz00_1476;

								obj_t BgL_typesz00_1474;

								obj_t BgL_actualsz00_1472;

								BgL_actualsz00_1472 = CDR(BgL_actualsz00_830);
								BgL_typesz00_1474 = CDR(BgL_typesz00_831);
								BgL_counterz00_1476 = (BgL_counterz00_832 + ((long) 1));
								BgL_counterz00_832 = BgL_counterz00_1476;
								BgL_typesz00_831 = BgL_typesz00_1474;
								BgL_actualsz00_830 = BgL_actualsz00_1472;
								goto BgL_zc3anonymousza33266ze3z83_833;
							}
						}
				}
			}
		}
	}



/* coerce-bigloo-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_22, obj_t BgL_callerz00_23, BgL_appz00_bglt BgL_nodez00_24,
		obj_t BgL_toz00_25, obj_t BgL_safez00_26)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 89 */
			{	/* Coerce/app.scm 93 */
				bool_t BgL_testz00_1478;

				{	/* Coerce/app.scm 93 */
					bool_t BgL_testz00_1479;

					{	/* Coerce/app.scm 93 */
						obj_t BgL_obj1751z00_1321;

						BgL_obj1751z00_1321 = (obj_t) (BgL_calleez00_22);
						BgL_testz00_1479 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1321,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_testz00_1479)
						{	/* Coerce/app.scm 94 */
							bool_t BgL_testz00_1482;

							{	/* Coerce/app.scm 94 */
								obj_t BgL_auxz00_1483;

								{
									BgL_globalz00_bglt BgL_auxz00_1484;

									BgL_auxz00_1484 = (BgL_globalz00_bglt) (BgL_calleez00_22);
									BgL_auxz00_1483 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_1484))->
										BgL_importz00);
								}
								BgL_testz00_1482 =
									(BgL_auxz00_1483 == CNST_TABLE_REF(((long) 0)));
							}
							if (BgL_testz00_1482)
								{	/* Coerce/app.scm 95 */
									bool_t BgL_testz00_1489;

									{	/* Coerce/app.scm 95 */
										obj_t BgL_auxz00_1490;

										{	/* Coerce/app.scm 95 */
											BgL_sfunz00_bglt BgL_obj1880z00_1324;

											BgL_obj1880z00_1324 =
												(BgL_sfunz00_bglt) (
												(((BgL_variablez00_bglt) CREF(BgL_calleez00_22))->
													BgL_valuez00));
											BgL_auxz00_1490 =
												(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1324))->
												BgL_argsz00);
										}
										BgL_testz00_1489 = PAIRP(BgL_auxz00_1490);
									}
									if (BgL_testz00_1489)
										{	/* Coerce/app.scm 96 */
											obj_t BgL_arg3285z00_856;

											{	/* Coerce/app.scm 96 */
												obj_t BgL_pairz00_1328;

												{	/* Coerce/app.scm 96 */
													BgL_sfunz00_bglt BgL_obj1880z00_1327;

													BgL_obj1880z00_1327 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt) CREF(BgL_calleez00_22))->
															BgL_valuez00));
													BgL_pairz00_1328 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1327))->
														BgL_argsz00);
												}
												BgL_arg3285z00_856 = CAR(BgL_pairz00_1328);
											}
											BgL_testz00_1478 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg3285z00_856,
												BGl_typez00zztype_typez00);
										}
									else
										{	/* Coerce/app.scm 95 */
											BgL_testz00_1478 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/app.scm 94 */
									BgL_testz00_1478 = ((bool_t) 0);
								}
						}
					else
						{	/* Coerce/app.scm 93 */
							BgL_testz00_1478 = ((bool_t) 0);
						}
				}
				if (BgL_testz00_1478)
					{	/* Coerce/app.scm 93 */
						return
							BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00
							(BgL_calleez00_22, BgL_callerz00_23, BgL_nodez00_24, BgL_toz00_25,
							BgL_safez00_26);
					}
				else
					{	/* Coerce/app.scm 93 */
						return
							BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00
							(BgL_calleez00_22, BgL_callerz00_23, BgL_nodez00_24, BgL_toz00_25,
							BgL_safez00_26);
					}
			}
		}
	}



/* coerce-bigloo-intern-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_27, obj_t BgL_callerz00_28, BgL_appz00_bglt BgL_nodez00_29,
		obj_t BgL_toz00_30, obj_t BgL_safez00_31)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 103 */
			{	/* Coerce/app.scm 107 */
				BgL_valuez00_bglt BgL_funz00_863;

				BgL_funz00_863 =
					(((BgL_variablez00_bglt) CREF(BgL_calleez00_27))->BgL_valuez00);
				{	/* Coerce/app.scm 108 */
					obj_t BgL_shz00_865;

					BgL_shz00_865 =
						BGl_shapez00zztools_shapez00((obj_t) (BgL_calleez00_27));
					{	/* Coerce/app.scm 109 */

						{	/* Coerce/app.scm 110 */
							obj_t BgL_g3251z00_866;

							obj_t BgL_g3252z00_867;

							BgL_g3251z00_866 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_29))->BgL_argsz00);
							{
								BgL_sfunz00_bglt BgL_auxz00_1506;

								BgL_auxz00_1506 = (BgL_sfunz00_bglt) (BgL_funz00_863);
								BgL_g3252z00_867 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1506))->BgL_argsz00);
							}
							{
								obj_t BgL_actualsz00_869;

								obj_t BgL_formalsz00_870;

								BgL_actualsz00_869 = BgL_g3251z00_866;
								BgL_formalsz00_870 = BgL_g3252z00_867;
							BgL_zc3anonymousza33292ze3z83_871:
								if (NULLP(BgL_actualsz00_869))
									{	/* Coerce/app.scm 114 */
										bool_t BgL_testz00_1511;

										if ((BgL_callerz00_28 == (obj_t) (BgL_calleez00_27)))
											{	/* Coerce/app.scm 114 */
												if (CBOOL(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
													{	/* Coerce/app.scm 114 */
														BgL_testz00_1511 = ((bool_t) 0);
													}
												else
													{	/* Coerce/app.scm 114 */
														BgL_testz00_1511 = ((bool_t) 1);
													}
											}
										else
											{	/* Coerce/app.scm 114 */
												BgL_testz00_1511 = ((bool_t) 0);
											}
										if (BgL_testz00_1511)
											{	/* Coerce/app.scm 119 */
												BgL_typez00_bglt BgL_arg3295z00_874;

												BgL_arg3295z00_874 =
													(((BgL_variablez00_bglt) CREF(BgL_calleez00_27))->
													BgL_typez00);
												return
													BGl_convertz12z12zzcoerce_convertz00(
													(BgL_nodez00_bglt) (BgL_nodez00_29),
													BgL_arg3295z00_874, (BgL_typez00_bglt) (BgL_toz00_30),
													((bool_t) 0));
											}
										else
											{	/* Coerce/app.scm 120 */
												BgL_typez00_bglt BgL_arg3296z00_875;

												BgL_arg3296z00_875 =
													(((BgL_variablez00_bglt) CREF(BgL_calleez00_27))->
													BgL_typez00);
												return
													BGl_convertz12z12zzcoerce_convertz00(
													(BgL_nodez00_bglt) (BgL_nodez00_29),
													BgL_arg3296z00_875, (BgL_typez00_bglt) (BgL_toz00_30),
													CBOOL(BgL_safez00_31));
											}
									}
								else
									{	/* Coerce/app.scm 121 */
										BgL_typez00_bglt BgL_typez00_877;

										{	/* Coerce/app.scm 121 */
											BgL_variablez00_bglt BgL_obj1608z00_1338;

											{	/* Coerce/app.scm 121 */
												obj_t BgL_pairz00_1337;

												BgL_pairz00_1337 = BgL_formalsz00_870;
												BgL_obj1608z00_1338 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_1337));
											}
											BgL_typez00_877 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_1338))->
												BgL_typez00);
										}
										{	/* Coerce/app.scm 122 */
											BgL_nodez00_bglt BgL_arg3298z00_878;

											{	/* Coerce/app.scm 122 */
												obj_t BgL_arg3299z00_879;

												BgL_arg3299z00_879 = CAR(BgL_actualsz00_869);
												BgL_arg3298z00_878 =
													BGl_coercez12z12zzcoerce_coercez00(
													(BgL_nodez00_bglt) (BgL_arg3299z00_879),
													BgL_callerz00_28, BgL_typez00_877,
													CBOOL(BgL_safez00_31));
											}
											{	/* Coerce/app.scm 122 */
												obj_t BgL_auxz00_1533;

												BgL_auxz00_1533 = (obj_t) (BgL_arg3298z00_878);
												SET_CAR(BgL_actualsz00_869, BgL_auxz00_1533);
											}
										}
										{
											obj_t BgL_formalsz00_1538;

											obj_t BgL_actualsz00_1536;

											BgL_actualsz00_1536 = CDR(BgL_actualsz00_869);
											BgL_formalsz00_1538 = CDR(BgL_formalsz00_870);
											BgL_formalsz00_870 = BgL_formalsz00_1538;
											BgL_actualsz00_869 = BgL_actualsz00_1536;
											goto BgL_zc3anonymousza33292ze3z83_871;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* coerce-bigloo-extern-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_32, obj_t BgL_callerz00_33, BgL_appz00_bglt BgL_nodez00_34,
		obj_t BgL_toz00_35, obj_t BgL_safez00_36)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 131 */
			{	/* Coerce/app.scm 132 */
				BgL_valuez00_bglt BgL_funz00_884;

				BgL_funz00_884 =
					(((BgL_variablez00_bglt) CREF(BgL_calleez00_32))->BgL_valuez00);
				{	/* Coerce/app.scm 133 */

					{	/* Coerce/app.scm 134 */
						obj_t BgL_g3253z00_886;

						obj_t BgL_g3254z00_887;

						BgL_g3253z00_886 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_34))->BgL_argsz00);
						{
							BgL_sfunz00_bglt BgL_auxz00_1542;

							BgL_auxz00_1542 = (BgL_sfunz00_bglt) (BgL_funz00_884);
							BgL_g3254z00_887 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1542))->BgL_argsz00);
						}
						{
							obj_t BgL_actualsz00_889;

							obj_t BgL_formalsz00_890;

							BgL_actualsz00_889 = BgL_g3253z00_886;
							BgL_formalsz00_890 = BgL_g3254z00_887;
						BgL_zc3anonymousza33303ze3z83_891:
							if (NULLP(BgL_actualsz00_889))
								{	/* Coerce/app.scm 137 */
									BgL_typez00_bglt BgL_arg3305z00_893;

									BgL_arg3305z00_893 =
										(((BgL_variablez00_bglt) CREF(BgL_calleez00_32))->
										BgL_typez00);
									return
										BGl_convertz12z12zzcoerce_convertz00((BgL_nodez00_bglt)
										(BgL_nodez00_34), BgL_arg3305z00_893,
										(BgL_typez00_bglt) (BgL_toz00_35), CBOOL(BgL_safez00_36));
								}
							else
								{	/* Coerce/app.scm 138 */
									obj_t BgL_typez00_894;

									BgL_typez00_894 = CAR(BgL_formalsz00_890);
									{	/* Coerce/app.scm 139 */
										BgL_nodez00_bglt BgL_arg3306z00_895;

										{	/* Coerce/app.scm 139 */
											obj_t BgL_arg3307z00_896;

											BgL_arg3307z00_896 = CAR(BgL_actualsz00_889);
											BgL_arg3306z00_895 =
												BGl_coercez12z12zzcoerce_coercez00(
												(BgL_nodez00_bglt) (BgL_arg3307z00_896),
												BgL_callerz00_33, (BgL_typez00_bglt) (BgL_typez00_894),
												CBOOL(BgL_safez00_36));
										}
										{	/* Coerce/app.scm 139 */
											obj_t BgL_auxz00_1558;

											BgL_auxz00_1558 = (obj_t) (BgL_arg3306z00_895);
											SET_CAR(BgL_actualsz00_889, BgL_auxz00_1558);
										}
									}
									{
										obj_t BgL_formalsz00_1563;

										obj_t BgL_actualsz00_1561;

										BgL_actualsz00_1561 = CDR(BgL_actualsz00_889);
										BgL_formalsz00_1563 = CDR(BgL_formalsz00_890);
										BgL_formalsz00_890 = BgL_formalsz00_1563;
										BgL_actualsz00_889 = BgL_actualsz00_1561;
										goto BgL_zc3anonymousza33303ze3z83_891;
									}
								}
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_appz00zzast_nodez00,
				BGl_proc3368z00zzcoerce_appz00, BGl_string3369z00zzcoerce_appz00);
		}
	}



/* coerce!-app3256 */
	obj_t BGl_coercez12zd2app3256zc0zzcoerce_appz00(obj_t BgL_envz00_1362,
		obj_t BgL_nodez00_1363, obj_t BgL_callerz00_1364, obj_t BgL_toz00_1365,
		obj_t BgL_safez00_1366)
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 29 */
			{
				BgL_appz00_bglt BgL_nodez00_1274;

				obj_t BgL_callerz00_1275;

				obj_t BgL_toz00_1276;

				obj_t BgL_safez00_1277;

				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_auxz00_1566;

					BgL_nodez00_1274 = (BgL_appz00_bglt) (BgL_nodez00_1363);
					BgL_callerz00_1275 = BgL_callerz00_1364;
					BgL_toz00_1276 = BgL_toz00_1365;
					BgL_safez00_1277 = BgL_safez00_1366;
					{	/* Coerce/app.scm 32 */
						BgL_variablez00_bglt BgL_funz00_1280;

						{	/* Coerce/app.scm 32 */
							BgL_varz00_bglt BgL_obj2155z00_1357;

							BgL_obj2155z00_1357 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1274))->BgL_funz00);
							BgL_funz00_1280 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1357))->
								BgL_variablez00);
						}
						{	/* Coerce/app.scm 33 */
							bool_t BgL_testz00_1569;

							{	/* Coerce/app.scm 33 */
								bool_t BgL_testz00_1570;

								{	/* Coerce/app.scm 33 */
									obj_t BgL_obj1751z00_1358;

									BgL_obj1751z00_1358 = (obj_t) (BgL_funz00_1280);
									BgL_testz00_1570 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1358,
										BGl_globalz00zzast_varz00);
								}
								if (BgL_testz00_1570)
									{	/* Coerce/app.scm 33 */
										BgL_valuez00_bglt BgL_arg3361z00_1283;

										BgL_arg3361z00_1283 =
											(((BgL_variablez00_bglt) CREF(BgL_funz00_1280))->
											BgL_valuez00);
										{	/* Coerce/app.scm 33 */
											obj_t BgL_obj2019z00_1360;

											BgL_obj2019z00_1360 = (obj_t) (BgL_arg3361z00_1283);
											BgL_testz00_1569 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_1360,
												BGl_cfunz00zzast_varz00);
										}
									}
								else
									{	/* Coerce/app.scm 33 */
										BgL_testz00_1569 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_1569)
								{	/* Coerce/app.scm 33 */
									BgL_auxz00_1566 =
										BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00
										(BgL_funz00_1280, BgL_callerz00_1275, BgL_nodez00_1274,
										BgL_toz00_1276, BgL_safez00_1277);
								}
							else
								{	/* Coerce/app.scm 33 */
									BgL_auxz00_1566 =
										BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00
										(BgL_funz00_1280, BgL_callerz00_1275, BgL_nodez00_1274,
										BgL_toz00_1276, BgL_safez00_1277);
								}
						}
					}
					return (obj_t) (BgL_auxz00_1566);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_appz00()
	{
		AN_OBJECT;
		{	/* Coerce/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 65499856),
				BSTRING_TO_STRING(BGl_string3370z00zzcoerce_appz00));
		}
	}

#ifdef __cplusplus
}
#endif
