/*===========================================================================*/
/*   (Inline/app.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/app.scm)*/
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

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
	}               *BgL_isfunz00_bglt;


	extern obj_t BGl_za2inlinedzd2callsza2zd2zzinline_walkz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__inlinezd2appzf3z21zzinline_appz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern long BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt);
	static obj_t BGl__inlinezd2appzd2zzinline_appz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzinline_appz00();
	extern obj_t BGl_nodezd2walkzd2zzast_nodez00(BgL_nodez00_bglt, obj_t);
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_recursionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	extern obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzinline_appz00();
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_appz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinline_appz00();
	extern obj_t BGl_za2inlinezd2modeza2zd2zzinline_walkz00;
	static obj_t BGl_zc3anonymousza33341ze3z83zzinline_appz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_zc3exitza33339ze3z83zzinline_appz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_appz00();
	extern obj_t BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt, long, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL bool_t
		BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt, long, long,
		obj_t);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	extern obj_t BGl_za2userzd2inliningzf3za2z21zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_appz00();
	extern obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2appzd2envz00zzinline_appz00,
		BgL_bgl__inlineza7d2appza7d23427z00, BGl__inlinezd2appzd2zzinline_appz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2appzf3zd2envzf3zzinline_appz00,
		BgL_bgl__inlineza7d2appza7f33428z00, BGl__inlinezd2appzf3z21zzinline_appz00,
		0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3422z00zzinline_appz00,
		BgL_bgl_string3422za700za7za7i3429za7, "simple", 6);
	      DEFINE_STRING(BGl_string3423z00zzinline_appz00,
		BgL_bgl_string3423za700za7za7i3430za7, "inline_app", 10);
	      DEFINE_STRING(BGl_string3424z00zzinline_appz00,
		BgL_bgl_string3424za700za7za7i3431za7,
		"import predicate reducer all snifun sifun ", 42);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long
		BgL_checksumz00_1282, char *BgL_fromz00_1283)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_appz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_appz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinline_appz00();
					BGl_cnstzd2initzd2zzinline_appz00();
					BGl_importedzd2moduleszd2initz00zzinline_appz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_appz00()
	{
		AN_OBJECT;
		{	/* Inline/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_app");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "inline_app");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_app");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_appz00()
	{
		AN_OBJECT;
		{	/* Inline/app.scm 15 */
			{	/* Inline/app.scm 15 */
				obj_t BgL_cportz00_1273;

				BgL_cportz00_1273 =
					bgl_open_input_string(BGl_string3424z00zzinline_appz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1274;

					BgL_iz00_1274 = ((long) 5);
				BgL_loopz00_1275:
					if ((BgL_iz00_1274 == ((long) -1)))
						{	/* Inline/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/app.scm 15 */
							{	/* Inline/app.scm 15 */
								obj_t BgL_arg3426z00_1277;

								{	/* Inline/app.scm 15 */

									{	/* Inline/app.scm 15 */
										obj_t BgL_locationz00_1279;

										BgL_locationz00_1279 = BBOOL(((bool_t) 0));
										{	/* Inline/app.scm 15 */

											BgL_arg3426z00_1277 =
												BGl_readz00zz__readerz00(BgL_cportz00_1273,
												BgL_locationz00_1279);
										}
									}
								}
								{	/* Inline/app.scm 15 */
									int BgL_auxz00_1300;

									BgL_auxz00_1300 = (int) (BgL_iz00_1274);
									CNST_TABLE_SET(BgL_auxz00_1300, BgL_arg3426z00_1277);
							}}
							{	/* Inline/app.scm 15 */
								int BgL_auxz00_1280;

								BgL_auxz00_1280 = (int) ((BgL_iz00_1274 - ((long) 1)));
								{
									long BgL_iz00_1305;

									BgL_iz00_1305 = (long) (BgL_auxz00_1280);
									BgL_iz00_1274 = BgL_iz00_1305;
									goto BgL_loopz00_1275;
								}
							}
						}
				}
			}
		}
	}



/* inline-app */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt BgL_nodez00_1,
		long BgL_kfactorz00_2, obj_t BgL_stackz00_3)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 34 */
			{	/* Inline/app.scm 35 */
				BgL_varz00_bglt BgL_calleez00_789;

				BgL_calleez00_789 =
					(((BgL_appz00_bglt) CREF(BgL_nodez00_1))->BgL_funz00);
				{	/* Inline/app.scm 35 */
					BgL_variablez00_bglt BgL_varz00_790;

					BgL_varz00_790 =
						(((BgL_varz00_bglt) CREF(BgL_calleez00_789))->BgL_variablez00);
					{	/* Inline/app.scm 36 */
						BgL_valuez00_bglt BgL_sfunz00_791;

						BgL_sfunz00_791 =
							(((BgL_variablez00_bglt) CREF(BgL_varz00_790))->BgL_valuez00);
						{	/* Inline/app.scm 39 */

							{	/* Inline/app.scm 44 */
								bool_t BgL_testz00_1310;

								{	/* Inline/app.scm 44 */
									obj_t BgL_obj1955z00_1232;

									BgL_obj1955z00_1232 = (obj_t) (BgL_sfunz00_791);
									BgL_testz00_1310 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1232,
										BGl_sfunz00zzast_varz00);
								}
								if (BgL_testz00_1310)
									{	/* Inline/app.scm 46 */
										bool_t BgL_testz00_1313;

										{	/* Inline/app.scm 48 */
											long BgL_arg3335z00_800;

											BgL_arg3335z00_800 =
												(((long) 1) +
												bgl_list_length(
													(((BgL_appz00_bglt) CREF(BgL_nodez00_1))->
														BgL_argsz00)));
											BgL_testz00_1313 =
												BGl_inlinezd2appzf3z21zzinline_appz00(BgL_varz00_790,
												BgL_kfactorz00_2, BgL_arg3335z00_800, BgL_stackz00_3);
										}
										if (BgL_testz00_1313)
											{	/* Inline/app.scm 46 */
												{	/* Inline/app.scm 51 */
													bool_t BgL_testz00_1318;

													{	/* Inline/app.scm 51 */
														obj_t BgL_auxz00_1319;

														{
															BgL_sfunz00_bglt BgL_auxz00_1320;

															BgL_auxz00_1320 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_791);
															BgL_auxz00_1319 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1320))->
																BgL_classz00);
														}
														BgL_testz00_1318 =
															(BgL_auxz00_1319 == CNST_TABLE_REF(((long) 0)));
													}
													if (BgL_testz00_1318)
														{	/* Inline/app.scm 51 */
															BFALSE;
														}
													else
														{	/* Inline/app.scm 52 */
															long BgL_za71za7_1237;

															BgL_za71za7_1237 =
																(long)
																CINT
																(BGl_za2inlinedzd2callsza2zd2zzinline_walkz00);
															BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 =
																BINT((BgL_za71za7_1237 + ((long) 1)));
												}}
												{	/* Inline/app.scm 53 */
													bool_t BgL_testz00_1328;

													if (CBOOL
														(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00))
														{	/* Inline/app.scm 53 */
															BgL_testz00_1328 =
																BGl_iszd2recursivezf3z21zzinline_recursionz00
																(BgL_varz00_790);
														}
													else
														{	/* Inline/app.scm 53 */
															BgL_testz00_1328 = ((bool_t) 0);
														}
													if (BgL_testz00_1328)
														{	/* Inline/app.scm 53 */
															return
																BGl_inlinezd2appzd2recursivez00zzinline_recursionz00
																((BgL_nodez00_bglt) (BgL_nodez00_1),
																BgL_kfactorz00_2, BgL_stackz00_3);
														}
													else
														{	/* Inline/app.scm 53 */
															return
																BGl_inlinezd2appzd2simplez00zzinline_simplez00(
																(BgL_nodez00_bglt) (BgL_nodez00_1),
																BgL_kfactorz00_2, BgL_stackz00_3,
																BGl_string3422z00zzinline_appz00);
														}
												}
											}
										else
											{	/* Inline/app.scm 46 */
												return (BgL_nodez00_bglt) (BgL_nodez00_1);
											}
									}
								else
									{	/* Inline/app.scm 44 */
										return (BgL_nodez00_bglt) (BgL_nodez00_1);
									}
							}
						}
					}
				}
			}
		}
	}



/* _inline-app */
	obj_t BGl__inlinezd2appzd2zzinline_appz00(obj_t BgL_envz00_1259,
		obj_t BgL_nodez00_1260, obj_t BgL_kfactorz00_1261, obj_t BgL_stackz00_1262)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 34 */
			return
				(obj_t) (BGl_inlinezd2appzd2zzinline_appz00(
					(BgL_appz00_bglt) (BgL_nodez00_1260),
					(long) CINT(BgL_kfactorz00_1261), BgL_stackz00_1262));
		}
	}



/* <exit:3339> */
	obj_t BGl_zc3exitza33339ze3z83zzinline_appz00(obj_t BgL_nodez00_1272)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 62 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3324z00_805;

			if (SET_EXIT(BgL_an_exit3324z00_805))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3324z00_805 = (void *) jmpbuf;
					{	/* Inline/app.scm 62 */

						PUSH_EXIT(BgL_an_exit3324z00_805, ((long) 1));
						{	/* Inline/app.scm 62 */
							obj_t BgL_an_exitd3325z00_806;

							BgL_an_exitd3325z00_806 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Inline/app.scm 64 */
								bool_t BgL_res3327z00_809;

								{	/* Inline/app.scm 63 */
									obj_t BgL_zc3anonymousza33341ze3z83_1263;

									BgL_zc3anonymousza33341ze3z83_1263 =
										make_fx_procedure
										(BGl_zc3anonymousza33341ze3z83zzinline_appz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3anonymousza33341ze3z83_1263,
										(int) (((long) 0)), BgL_an_exitd3325z00_806);
									BGl_nodezd2walkzd2zzast_nodez00((BgL_nodez00_bglt)
										(BgL_nodez00_1272), BgL_zc3anonymousza33341ze3z83_1263);
								}
								BgL_res3327z00_809 = ((bool_t) 0);
								POP_EXIT();
								return BBOOL(BgL_res3327z00_809);
							}
						}
					}
				}
		}
	}



/* <anonymous:3341> */
	obj_t BGl_zc3anonymousza33341ze3z83zzinline_appz00(obj_t BgL_envz00_1264,
		obj_t BgL_nz00_1266)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 63 */
			{	/* Inline/app.scm 63 */
				obj_t BgL_an_exitd3325z00_1265;

				BgL_an_exitd3325z00_1265 =
					PROCEDURE_REF(BgL_envz00_1264, (int) (((long) 0)));
				{
					obj_t BgL_nz00_811;

					BgL_nz00_811 = BgL_nz00_1266;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_nz00_811,
							BGl_kwotez00zzast_nodez00))
						{	/* Inline/app.scm 63 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd3325z00_1265,
								BTRUE);
						}
					else
						{	/* Inline/app.scm 63 */
							return BFALSE;
						}
				}
			}
		}
	}



/* inline-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt BgL_varz00_5,
		long BgL_kfactorz00_6, long BgL_callzd2siza7ez75_7, obj_t BgL_stackz00_8)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 69 */
			{	/* Inline/app.scm 78 */
				BgL_valuez00_bglt BgL_sfunz00_815;

				BgL_sfunz00_815 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_5))->BgL_valuez00);
				{	/* Inline/app.scm 78 */
					obj_t BgL_bodyz00_816;

					{	/* Inline/app.scm 79 */
						bool_t BgL_testz00_1361;

						{	/* Inline/app.scm 79 */
							obj_t BgL_obj3269z00_1243;

							BgL_obj3269z00_1243 = (obj_t) (BgL_sfunz00_815);
							BgL_testz00_1361 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj3269z00_1243,
								BGl_isfunz00zzinline_inlinez00);
						}
						if (BgL_testz00_1361)
							{	/* Inline/app.scm 80 */
								BgL_isfunz00_bglt BgL_obj3270z00_1244;

								BgL_obj3270z00_1244 = (BgL_isfunz00_bglt) (BgL_sfunz00_815);
								{	/* Inline/app.scm 80 */
									BgL_nodez00_bglt BgL_auxz00_1365;

									{
										obj_t BgL_auxz00_1366;

										{	/* Inline/app.scm 80 */
											BgL_objectz00_bglt BgL_auxz00_1367;

											BgL_auxz00_1367 =
												(BgL_objectz00_bglt) (BgL_obj3270z00_1244);
											BgL_auxz00_1366 = BGL_OBJECT_WIDENING(BgL_auxz00_1367);
										}
										BgL_auxz00_1365 =
											(((BgL_isfunz00_bglt) CREF(BgL_auxz00_1366))->
											BgL_originalzd2bodyzd2);
									}
									BgL_bodyz00_816 = (obj_t) (BgL_auxz00_1365);
								}
							}
						else
							{
								BgL_sfunz00_bglt BgL_auxz00_1372;

								BgL_auxz00_1372 = (BgL_sfunz00_bglt) (BgL_sfunz00_815);
								BgL_bodyz00_816 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1372))->BgL_bodyz00);
							}
					}
					{	/* Inline/app.scm 79 */

						if (CBOOL(BGl_za2inliningzf3za2zf3zzengine_paramz00))
							{	/* Inline/app.scm 88 */
								bool_t BgL_testz00_1377;

								if (CBOOL
									(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00))
									{	/* Inline/app.scm 88 */
										if (CBOOL
											(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00))
											{	/* Inline/app.scm 89 */
												BgL_testz00_1377 = ((bool_t) 0);
											}
										else
											{	/* Inline/app.scm 89 */
												BgL_testz00_1377 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
														(obj_t) (BgL_varz00_5), BgL_stackz00_8));
											}
									}
								else
									{	/* Inline/app.scm 88 */
										BgL_testz00_1377 = ((bool_t) 0);
									}
								if (BgL_testz00_1377)
									{	/* Inline/app.scm 88 */
										return ((bool_t) 0);
									}
								else
									{	/* Inline/app.scm 93 */
										bool_t BgL_testz00_1385;

										{	/* Inline/app.scm 93 */
											obj_t BgL_auxz00_1386;

											{
												BgL_sfunz00_bglt BgL_auxz00_1387;

												BgL_auxz00_1387 = (BgL_sfunz00_bglt) (BgL_sfunz00_815);
												BgL_auxz00_1386 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1387))->
													BgL_classz00);
											}
											BgL_testz00_1385 =
												(BgL_auxz00_1386 == CNST_TABLE_REF(((long) 1)));
										}
										if (BgL_testz00_1385)
											{	/* Inline/app.scm 93 */
												return ((bool_t) 0);
											}
										else
											{	/* Inline/app.scm 98 */
												bool_t BgL_testz00_1392;

												if (
													(BGl_za2inlinezd2modeza2zd2zzinline_walkz00 ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Inline/app.scm 98 */
														BgL_testz00_1392 = ((bool_t) 0);
													}
												else
													{	/* Inline/app.scm 99 */
														bool_t BgL_testz00_1396;

														{	/* Inline/app.scm 99 */
															obj_t BgL_auxz00_1397;

															{
																BgL_sfunz00_bglt BgL_auxz00_1398;

																BgL_auxz00_1398 =
																	(BgL_sfunz00_bglt) (BgL_sfunz00_815);
																BgL_auxz00_1397 =
																	(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1398))->
																	BgL_classz00);
															}
															BgL_testz00_1396 =
																(BgL_auxz00_1397 == CNST_TABLE_REF(((long) 0)));
														}
														if (BgL_testz00_1396)
															{	/* Inline/app.scm 99 */
																BgL_testz00_1392 =
																	BGl_iszd2recursivezf3z21zzinline_recursionz00
																	(BgL_varz00_5);
															}
														else
															{	/* Inline/app.scm 99 */
																BgL_testz00_1392 = ((bool_t) 0);
															}
													}
												if (BgL_testz00_1392)
													{	/* Inline/app.scm 98 */
														return ((bool_t) 0);
													}
												else
													{	/* Inline/app.scm 105 */
														bool_t BgL_testz00_1404;

														{	/* Inline/app.scm 105 */
															bool_t BgL_testz00_1405;

															{	/* Inline/app.scm 105 */
																obj_t BgL_auxz00_1406;

																{
																	BgL_sfunz00_bglt BgL_auxz00_1407;

																	BgL_auxz00_1407 =
																		(BgL_sfunz00_bglt) (BgL_sfunz00_815);
																	BgL_auxz00_1406 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_1407))->BgL_classz00);
																}
																BgL_testz00_1405 =
																	(BgL_auxz00_1406 ==
																	CNST_TABLE_REF(((long) 0)));
															}
															if (BgL_testz00_1405)
																{	/* Inline/app.scm 105 */
																	if (CBOOL
																		(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
																				(obj_t) (BgL_varz00_5),
																				BgL_stackz00_8)))
																		{	/* Inline/app.scm 106 */
																			BgL_testz00_1404 = ((bool_t) 0);
																		}
																	else
																		{	/* Inline/app.scm 107 */
																			bool_t BgL_testz00_1416;

																			if (
																				(BGl_za2inlinezd2modeza2zd2zzinline_walkz00
																					== CNST_TABLE_REF(((long) 3))))
																				{	/* Inline/app.scm 108 */
																					bool_t BgL_testz00_1420;

																					{	/* Inline/app.scm 108 */
																						obj_t BgL_arg3364z00_839;

																						{
																							BgL_sfunz00_bglt BgL_auxz00_1421;

																							BgL_auxz00_1421 =
																								(BgL_sfunz00_bglt)
																								(BgL_sfunz00_815);
																							BgL_arg3364z00_839 =
																								(((BgL_sfunz00_bglt)
																									CREF(BgL_auxz00_1421))->
																								BgL_bodyz00);
																						}
																						BgL_testz00_1420 =
																							CBOOL
																							(BGl_zc3exitza33339ze3z83zzinline_appz00
																							(BgL_arg3364z00_839));
																					}
																					if (BgL_testz00_1420)
																						{	/* Inline/app.scm 108 */
																							BgL_testz00_1416 = ((bool_t) 0);
																						}
																					else
																						{	/* Inline/app.scm 108 */
																							BgL_testz00_1416 = ((bool_t) 1);
																						}
																				}
																			else
																				{	/* Inline/app.scm 107 */
																					BgL_testz00_1416 = ((bool_t) 1);
																				}
																			if (BgL_testz00_1416)
																				{	/* Inline/app.scm 109 */
																					bool_t BgL__ortest_3328z00_835;

																					if (
																						(BGl_za2inlinezd2modeza2zd2zzinline_walkz00
																							== CNST_TABLE_REF(((long) 4))))
																						{	/* Inline/app.scm 109 */
																							BgL__ortest_3328z00_835 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Inline/app.scm 109 */
																							BgL__ortest_3328z00_835 =
																								((bool_t) 1);
																						}
																					if (BgL__ortest_3328z00_835)
																						{	/* Inline/app.scm 109 */
																							BgL_testz00_1404 =
																								BgL__ortest_3328z00_835;
																						}
																					else
																						{	/* Inline/app.scm 110 */
																							BgL_funz00_bglt
																								BgL_obj1817z00_1250;
																							BgL_obj1817z00_1250 =
																								(BgL_funz00_bglt)
																								(BgL_sfunz00_815);
																							BgL_testz00_1404 =
																								CBOOL((((BgL_funz00_bglt)
																										CREF(BgL_obj1817z00_1250))->
																									BgL_predicatezd2ofzd2));
																						}
																				}
																			else
																				{	/* Inline/app.scm 107 */
																					BgL_testz00_1404 = ((bool_t) 0);
																				}
																		}
																}
															else
																{	/* Inline/app.scm 105 */
																	BgL_testz00_1404 = ((bool_t) 0);
																}
														}
														if (BgL_testz00_1404)
															{	/* Inline/app.scm 105 */
																return ((bool_t) 1);
															}
														else
															{	/* Inline/app.scm 115 */
																bool_t BgL_testz00_1433;

																{	/* Inline/app.scm 115 */
																	bool_t BgL_testz00_1434;

																	{	/* Inline/app.scm 115 */
																		obj_t BgL_obj1751z00_1251;

																		BgL_obj1751z00_1251 =
																			(obj_t) (BgL_varz00_5);
																		BgL_testz00_1434 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj1751z00_1251,
																			BGl_globalz00zzast_varz00);
																	}
																	if (BgL_testz00_1434)
																		{	/* Inline/app.scm 115 */
																			obj_t BgL_auxz00_1437;

																			{
																				BgL_globalz00_bglt BgL_auxz00_1438;

																				BgL_auxz00_1438 =
																					(BgL_globalz00_bglt) (BgL_varz00_5);
																				BgL_auxz00_1437 =
																					(((BgL_globalz00_bglt)
																						CREF(BgL_auxz00_1438))->
																					BgL_importz00);
																			}
																			BgL_testz00_1433 =
																				(BgL_auxz00_1437 ==
																				CNST_TABLE_REF(((long) 5)));
																		}
																	else
																		{	/* Inline/app.scm 115 */
																			BgL_testz00_1433 = ((bool_t) 0);
																		}
																}
																if (BgL_testz00_1433)
																	{	/* Inline/app.scm 115 */
																		return ((bool_t) 0);
																	}
																else
																	{	/* Inline/app.scm 115 */
																		if (CBOOL
																			(BGl_za2userzd2inliningzf3za2z21zzengine_paramz00))
																			{	/* Inline/app.scm 120 */
																				if (
																					(BGl_nodezd2siza7ez75zzinline_siza7eza7
																						((BgL_nodez00_bglt)
																							(BgL_bodyz00_816)) <
																						(BgL_kfactorz00_6 *
																							BgL_callzd2siza7ez75_7)))
																					{	/* Inline/app.scm 124 */
																						return ((bool_t) 1);
																					}
																				else
																					{	/* Inline/app.scm 137 */
																						bool_t BgL_testz00_1450;

																						if (
																							(BGl_nodezd2siza7ez75zzinline_siza7eza7
																								((BgL_nodez00_bglt)
																									(BgL_bodyz00_816)) ==
																								BgL_callzd2siza7ez75_7))
																							{	/* Inline/app.scm 137 */
																								if (CBOOL
																									(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																										((obj_t) (BgL_varz00_5),
																											BgL_stackz00_8)))
																									{	/* Inline/app.scm 137 */
																										BgL_testz00_1450 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Inline/app.scm 137 */
																										BgL_testz00_1450 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Inline/app.scm 137 */
																								BgL_testz00_1450 = ((bool_t) 0);
																							}
																						if (BgL_testz00_1450)
																							{	/* Inline/app.scm 137 */
																								return ((bool_t) 1);
																							}
																						else
																							{	/* Inline/app.scm 137 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																		else
																			{	/* Inline/app.scm 120 */
																				return ((bool_t) 0);
																			}
																	}
															}
													}
											}
									}
							}
						else
							{	/* Inline/app.scm 83 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* _inline-app? */
	obj_t BGl__inlinezd2appzf3z21zzinline_appz00(obj_t BgL_envz00_1267,
		obj_t BgL_varz00_1268, obj_t BgL_kfactorz00_1269,
		obj_t BgL_callzd2siza7ez75_1270, obj_t BgL_stackz00_1271)
	{
		AN_OBJECT;
		{	/* Inline/app.scm 69 */
			return
				BBOOL(BGl_inlinezd2appzf3z21zzinline_appz00(
					(BgL_variablez00_bglt) (BgL_varz00_1268),
					(long) CINT(BgL_kfactorz00_1269),
					(long) CINT(BgL_callzd2siza7ez75_1270), BgL_stackz00_1271));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_appz00()
	{
		AN_OBJECT;
		{	/* Inline/app.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_appz00()
	{
		AN_OBJECT;
		{	/* Inline/app.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_appz00()
	{
		AN_OBJECT;
		{	/* Inline/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 175384950),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 326457085),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_siza7eza7(((long) 405067005),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_simplez00(((long) 168165545),
				BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_recursionz00(((long)
					405725008), BSTRING_TO_STRING(BGl_string3423z00zzinline_appz00));
		}
	}

#ifdef __cplusplus
}
#endif
