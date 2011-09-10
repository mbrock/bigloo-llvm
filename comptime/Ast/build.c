/*===========================================================================*/
/*   (Ast/build.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/build.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_buildz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t BGl__appendzd2astzd2zzast_buildz00(obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_sfunzd2defzd2ze3astze3zzast_buildz00(BgL_globalz00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl__buildzd2astzd2zzast_buildz00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_buildz00();
	static obj_t BGl_requirezd2initializa7ationz75zzast_buildz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_buildz00();
	extern obj_t BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
	static obj_t BGl_zc3exitza33342ze3z83zzast_buildz00(BgL_globalz00_bglt);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_buildz00();
	static obj_t BGl__buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_buildz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_appendzd2astzd2envz00zzast_buildz00,
		BgL_bgl__appendza7d2astza7d23410z00, BGl__appendzd2astzd2zzast_buildz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_buildzd2astzd2envz00zzast_buildz00,
		BgL_bgl__buildza7d2astza7d2za73411za7, BGl__buildzd2astzd2zzast_buildz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_buildzd2astzd2sanszd2removezd2envz00zzast_buildz00,
		BgL_bgl__buildza7d2astza7d2s3412z00,
		BGl__buildzd2astzd2sanszd2removezd2zzast_buildz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3400z00zzast_buildz00,
		BgL_bgl_string3400za700za7za7a3413za7, " error", 6);
	      DEFINE_STRING(BGl_string3401z00zzast_buildz00,
		BgL_bgl_string3401za700za7za7a3414za7, "s", 1);
	      DEFINE_STRING(BGl_string3402z00zzast_buildz00,
		BgL_bgl_string3402za700za7za7a3415za7, "", 0);
	      DEFINE_STRING(BGl_string3403z00zzast_buildz00,
		BgL_bgl_string3403za700za7za7a3416za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3404z00zzast_buildz00,
		BgL_bgl_string3404za700za7za7a3417za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3405z00zzast_buildz00,
		BgL_bgl_string3405za700za7za7a3418za7, "ast_build", 9);
	      DEFINE_STRING(BGl_string3406z00zzast_buildz00,
		BgL_bgl_string3406za700za7za7a3419za7, "value pass-started ast ", 23);
	      DEFINE_STRING(BGl_string3397z00zzast_buildz00,
		BgL_bgl_string3397za700za7za7a3420za7, "Ast", 3);
	      DEFINE_STRING(BGl_string3398z00zzast_buildz00,
		BgL_bgl_string3398za700za7za7a3421za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3399z00zzast_buildz00,
		BgL_bgl_string3399za700za7za7a3422za7, "failure during prelude hook", 27);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long
		BgL_checksumz00_1370, char *BgL_fromz00_1371)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_buildz00))
				{
					BGl_requirezd2initializa7ationz75zzast_buildz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_buildz00();
					BGl_cnstzd2initzd2zzast_buildz00();
					BGl_importedzd2moduleszd2initz00zzast_buildz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_buildz00()
	{
		AN_OBJECT;
		{	/* Ast/build.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_build");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_build");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_buildz00()
	{
		AN_OBJECT;
		{	/* Ast/build.scm 14 */
			{	/* Ast/build.scm 14 */
				obj_t BgL_cportz00_1359;

				BgL_cportz00_1359 =
					bgl_open_input_string(BGl_string3406z00zzast_buildz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1360;

					BgL_iz00_1360 = ((long) 2);
				BgL_loopz00_1361:
					if ((BgL_iz00_1360 == ((long) -1)))
						{	/* Ast/build.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/build.scm 14 */
							{	/* Ast/build.scm 14 */
								obj_t BgL_arg3408z00_1363;

								{	/* Ast/build.scm 14 */

									{	/* Ast/build.scm 14 */
										obj_t BgL_locationz00_1365;

										BgL_locationz00_1365 = BBOOL(((bool_t) 0));
										{	/* Ast/build.scm 14 */

											BgL_arg3408z00_1363 =
												BGl_readz00zz__readerz00(BgL_cportz00_1359,
												BgL_locationz00_1365);
										}
									}
								}
								{	/* Ast/build.scm 14 */
									int BgL_auxz00_1391;

									BgL_auxz00_1391 = (int) (BgL_iz00_1360);
									CNST_TABLE_SET(BgL_auxz00_1391, BgL_arg3408z00_1363);
							}}
							{	/* Ast/build.scm 14 */
								int BgL_auxz00_1366;

								BgL_auxz00_1366 = (int) ((BgL_iz00_1360 - ((long) 1)));
								{
									long BgL_iz00_1396;

									BgL_iz00_1396 = (long) (BgL_auxz00_1366);
									BgL_iz00_1360 = BgL_iz00_1396;
									goto BgL_loopz00_1361;
								}
							}
						}
				}
			}
		}
	}



/* append-ast */
	BGL_EXPORTED_DEF obj_t BGl_appendzd2astzd2zzast_buildz00(obj_t BgL_a1z00_1,
		obj_t BgL_a2z00_2)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 35 */
			return bgl_append2(BgL_a1z00_1, BgL_a2z00_2);
		}
	}



/* _append-ast */
	obj_t BGl__appendzd2astzd2zzast_buildz00(obj_t BgL_envz00_1351,
		obj_t BgL_a1z00_1352, obj_t BgL_a2z00_1353)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 35 */
			return bgl_append2(BgL_a1z00_1352, BgL_a2z00_1353);
		}
	}



/* build-ast */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t BgL_unitsz00_3)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 43 */
			{	/* Ast/build.scm 44 */
				obj_t BgL_arg3269z00_1275;

				obj_t BgL_arg3270z00_1276;

				BgL_arg3269z00_1275 = CNST_TABLE_REF(((long) 0));
				BgL_arg3270z00_1276 =
					BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(BgL_unitsz00_3);
				return
					BGl_removezd2varzd2zzast_removez00(BgL_arg3269z00_1275,
					BgL_arg3270z00_1276);
			}
		}
	}



/* _build-ast */
	obj_t BGl__buildzd2astzd2zzast_buildz00(obj_t BgL_envz00_1354,
		obj_t BgL_unitsz00_1355)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 43 */
			return BGl_buildzd2astzd2zzast_buildz00(BgL_unitsz00_1355);
		}
	}



/* build-ast-sans-remove */
	BGL_EXPORTED_DEF obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t
		BgL_unitsz00_4)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 51 */
			{	/* Ast/build.scm 52 */
				obj_t BgL_list3271z00_780;

				{	/* Ast/build.scm 52 */
					obj_t BgL_arg3273z00_782;

					{	/* Ast/build.scm 52 */
						obj_t BgL_arg3275z00_784;

						BgL_arg3275z00_784 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3273z00_782 =
							MAKE_PAIR(BGl_string3397z00zzast_buildz00, BgL_arg3275z00_784);
					}
					BgL_list3271z00_780 =
						MAKE_PAIR(BGl_string3398z00zzast_buildz00, BgL_arg3273z00_782);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3271z00_780);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3397z00zzast_buildz00;
			{
				obj_t BgL_hooksz00_788;

				obj_t BgL_hnamesz00_789;

				BgL_hooksz00_788 = BNIL;
				BgL_hnamesz00_789 = BNIL;
			BgL_zc3anonymousza33276ze3z83_790:
				if (NULLP(BgL_hooksz00_788))
					{	/* Ast/build.scm 52 */
						CNST_TABLE_REF(((long) 1));
					}
				else
					{	/* Ast/build.scm 52 */
						bool_t BgL_testz00_1414;

						{	/* Ast/build.scm 52 */
							obj_t BgL_fun3284z00_798;

							BgL_fun3284z00_798 = CAR(BgL_hooksz00_788);
							BgL_testz00_1414 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3284z00_798) (BgL_fun3284z00_798,
									BEOA));
						}
						if (BgL_testz00_1414)
							{
								obj_t BgL_hnamesz00_1421;

								obj_t BgL_hooksz00_1419;

								BgL_hooksz00_1419 = CDR(BgL_hooksz00_788);
								BgL_hnamesz00_1421 = CDR(BgL_hnamesz00_789);
								BgL_hnamesz00_789 = BgL_hnamesz00_1421;
								BgL_hooksz00_788 = BgL_hooksz00_1419;
								goto BgL_zc3anonymousza33276ze3z83_790;
							}
						else
							{	/* Ast/build.scm 52 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3397z00zzast_buildz00,
									BGl_string3399z00zzast_buildz00, CAR(BgL_hnamesz00_789));
							}
					}
			}
			{	/* Ast/build.scm 56 */
				obj_t BgL_nberrz00_801;

				BgL_nberrz00_801 = BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
				{	/* Ast/build.scm 56 */
					obj_t BgL_defsz00_802;

					{	/* Ast/build.scm 57 */
						obj_t BgL_runner3337z00_885;

						if (NULLP(BgL_unitsz00_4))
							{	/* Ast/build.scm 57 */
								BgL_runner3337z00_885 = BNIL;
							}
						else
							{	/* Ast/build.scm 57 */
								obj_t BgL_head3257z00_869;

								BgL_head3257z00_869 =
									MAKE_PAIR(BGl_unitzd2ze3defsz31zzast_unitz00(CAR
										(BgL_unitsz00_4)), BNIL);
								{	/* Ast/build.scm 57 */
									obj_t BgL_g3260z00_870;

									BgL_g3260z00_870 = CDR(BgL_unitsz00_4);
									{
										obj_t BgL_l3255z00_872;

										obj_t BgL_tail3258z00_873;

										BgL_l3255z00_872 = BgL_g3260z00_870;
										BgL_tail3258z00_873 = BgL_head3257z00_869;
									BgL_zc3anonymousza33328ze3z83_874:
										if (NULLP(BgL_l3255z00_872))
											{	/* Ast/build.scm 57 */
												BgL_runner3337z00_885 = BgL_head3257z00_869;
											}
										else
											{	/* Ast/build.scm 57 */
												obj_t BgL_newtail3259z00_876;

												BgL_newtail3259z00_876 =
													MAKE_PAIR(BGl_unitzd2ze3defsz31zzast_unitz00(CAR
														(BgL_l3255z00_872)), BNIL);
												SET_CDR(BgL_tail3258z00_873, BgL_newtail3259z00_876);
												{
													obj_t BgL_tail3258z00_1439;

													obj_t BgL_l3255z00_1437;

													BgL_l3255z00_1437 = CDR(BgL_l3255z00_872);
													BgL_tail3258z00_1439 = BgL_newtail3259z00_876;
													BgL_tail3258z00_873 = BgL_tail3258z00_1439;
													BgL_l3255z00_872 = BgL_l3255z00_1437;
													goto BgL_zc3anonymousza33328ze3z83_874;
												}
											}
									}
								}
							}
						BgL_defsz00_802 =
							BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_runner3337z00_885);
					}
					{	/* Ast/build.scm 57 */

						if (
							((long) CINT(BgL_nberrz00_801) ==
								(long)
								CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)))
							{	/* Ast/build.scm 58 */
								BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
								{	/* Ast/build.scm 63 */
									obj_t BgL_astz00_804;

									if (NULLP(BgL_defsz00_802))
										{	/* Ast/build.scm 63 */
											BgL_astz00_804 = BNIL;
										}
									else
										{	/* Ast/build.scm 63 */
											obj_t BgL_head3263z00_829;

											{	/* Ast/build.scm 63 */
												BgL_globalz00_bglt BgL_arg3308z00_842;

												{	/* Ast/build.scm 63 */
													obj_t BgL_arg3310z00_844;

													BgL_arg3310z00_844 = CAR(BgL_defsz00_802);
													BgL_arg3308z00_842 =
														BGl_sfunzd2defzd2ze3astze3zzast_buildz00(
														(BgL_globalz00_bglt) (BgL_arg3310z00_844));
												}
												BgL_head3263z00_829 =
													MAKE_PAIR((obj_t) (BgL_arg3308z00_842), BNIL);
											}
											{	/* Ast/build.scm 63 */
												obj_t BgL_g3266z00_830;

												BgL_g3266z00_830 = CDR(BgL_defsz00_802);
												{
													obj_t BgL_l3261z00_832;

													obj_t BgL_tail3264z00_833;

													BgL_l3261z00_832 = BgL_g3266z00_830;
													BgL_tail3264z00_833 = BgL_head3263z00_829;
												BgL_zc3anonymousza33302ze3z83_834:
													if (NULLP(BgL_l3261z00_832))
														{	/* Ast/build.scm 63 */
															BgL_astz00_804 = BgL_head3263z00_829;
														}
													else
														{	/* Ast/build.scm 63 */
															obj_t BgL_newtail3265z00_836;

															{	/* Ast/build.scm 63 */
																BgL_globalz00_bglt BgL_arg3305z00_838;

																{	/* Ast/build.scm 63 */
																	obj_t BgL_arg3307z00_840;

																	BgL_arg3307z00_840 = CAR(BgL_l3261z00_832);
																	BgL_arg3305z00_838 =
																		BGl_sfunzd2defzd2ze3astze3zzast_buildz00(
																		(BgL_globalz00_bglt) (BgL_arg3307z00_840));
																}
																BgL_newtail3265z00_836 =
																	MAKE_PAIR((obj_t) (BgL_arg3305z00_838), BNIL);
															}
															SET_CDR(BgL_tail3264z00_833,
																BgL_newtail3265z00_836);
															{
																obj_t BgL_tail3264z00_1464;

																obj_t BgL_l3261z00_1462;

																BgL_l3261z00_1462 = CDR(BgL_l3261z00_832);
																BgL_tail3264z00_1464 = BgL_newtail3265z00_836;
																BgL_tail3264z00_833 = BgL_tail3264z00_1464;
																BgL_l3261z00_832 = BgL_l3261z00_1462;
																goto BgL_zc3anonymousza33302ze3z83_834;
															}
														}
												}
											}
										}
									if (
										((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Ast/build.scm 65 */
											{	/* Ast/build.scm 65 */
												obj_t BgL_port3267z00_807;

												{	/* Ast/build.scm 65 */
													obj_t BgL_res3393z00_1313;

													{	/* Ast/build.scm 65 */
														obj_t BgL_auxz00_1468;

														BgL_auxz00_1468 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3393z00_1313 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1468);
													}
													BgL_port3267z00_807 = BgL_res3393z00_1313;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port3267z00_807);
												bgl_display_string(BGl_string3400z00zzast_buildz00,
													BgL_port3267z00_807);
												{	/* Ast/build.scm 65 */
													obj_t BgL_arg3288z00_808;

													{	/* Ast/build.scm 65 */
														bool_t BgL_testz00_1473;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Ast/build.scm 65 */
																BgL_testz00_1473 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
															}
														else
															{	/* Ast/build.scm 65 */
																BgL_testz00_1473 = ((bool_t) 0);
															}
														if (BgL_testz00_1473)
															{	/* Ast/build.scm 65 */
																BgL_arg3288z00_808 =
																	BGl_string3401z00zzast_buildz00;
															}
														else
															{	/* Ast/build.scm 65 */
																BgL_arg3288z00_808 =
																	BGl_string3402z00zzast_buildz00;
															}
													}
													bgl_display_obj(BgL_arg3288z00_808,
														BgL_port3267z00_807);
												}
												bgl_display_string(BGl_string3403z00zzast_buildz00,
													BgL_port3267z00_807);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port3267z00_807);
											}
											{	/* Ast/build.scm 65 */
												obj_t BgL_list3291z00_811;

												BgL_list3291z00_811 =
													MAKE_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list3291z00_811);
											}
										}
									else
										{
											obj_t BgL_hooksz00_815;

											obj_t BgL_hnamesz00_816;

											BgL_hooksz00_815 = BNIL;
											BgL_hnamesz00_816 = BNIL;
										BgL_zc3anonymousza33292ze3z83_817:
											if (NULLP(BgL_hooksz00_815))
												{	/* Ast/build.scm 65 */
													return BgL_astz00_804;
												}
											else
												{	/* Ast/build.scm 65 */
													bool_t BgL_testz00_1486;

													{	/* Ast/build.scm 65 */
														obj_t BgL_fun3299z00_824;

														BgL_fun3299z00_824 = CAR(BgL_hooksz00_815);
														BgL_testz00_1486 =
															CBOOL(PROCEDURE_ENTRY(BgL_fun3299z00_824)
															(BgL_fun3299z00_824, BEOA));
													}
													if (BgL_testz00_1486)
														{
															obj_t BgL_hnamesz00_1493;

															obj_t BgL_hooksz00_1491;

															BgL_hooksz00_1491 = CDR(BgL_hooksz00_815);
															BgL_hnamesz00_1493 = CDR(BgL_hnamesz00_816);
															BgL_hnamesz00_816 = BgL_hnamesz00_1493;
															BgL_hooksz00_815 = BgL_hooksz00_1491;
															goto BgL_zc3anonymousza33292ze3z83_817;
														}
													else
														{	/* Ast/build.scm 65 */
															obj_t BgL_arg3298z00_823;

															BgL_arg3298z00_823 = CAR(BgL_hnamesz00_816);
															return
																BGl_internalzd2errorzd2zztools_errorz00
																(BGl_za2currentzd2passza2zd2zzengine_passz00,
																BGl_string3404z00zzast_buildz00,
																BgL_arg3298z00_823);
														}
												}
										}
								}
							}
						else
							{	/* Ast/build.scm 58 */
								if (
									((long)
										CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
										((long) 0)))
									{	/* Ast/build.scm 66 */
										{	/* Ast/build.scm 66 */
											obj_t BgL_port3268z00_847;

											{	/* Ast/build.scm 66 */
												obj_t BgL_res3395z00_1329;

												{	/* Ast/build.scm 66 */
													obj_t BgL_auxz00_1500;

													BgL_auxz00_1500 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res3395z00_1329 =
														BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1500);
												}
												BgL_port3268z00_847 = BgL_res3395z00_1329;
											}
											bgl_display_obj
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BgL_port3268z00_847);
											bgl_display_string(BGl_string3400z00zzast_buildz00,
												BgL_port3268z00_847);
											{	/* Ast/build.scm 66 */
												obj_t BgL_arg3312z00_848;

												{	/* Ast/build.scm 66 */
													bool_t BgL_testz00_1505;

													if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
														{	/* Ast/build.scm 66 */
															BgL_testz00_1505 =
																BGl_2ze3ze3zz__r4_numbers_6_5z00
																(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																BINT(((long) 1)));
														}
													else
														{	/* Ast/build.scm 66 */
															BgL_testz00_1505 = ((bool_t) 0);
														}
													if (BgL_testz00_1505)
														{	/* Ast/build.scm 66 */
															BgL_arg3312z00_848 =
																BGl_string3401z00zzast_buildz00;
														}
													else
														{	/* Ast/build.scm 66 */
															BgL_arg3312z00_848 =
																BGl_string3402z00zzast_buildz00;
														}
												}
												bgl_display_obj(BgL_arg3312z00_848,
													BgL_port3268z00_847);
											}
											bgl_display_string(BGl_string3403z00zzast_buildz00,
												BgL_port3268z00_847);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port3268z00_847);
										}
										{	/* Ast/build.scm 66 */
											obj_t BgL_list3315z00_851;

											BgL_list3315z00_851 = MAKE_PAIR(BINT(((long) -1)), BNIL);
											return BGl_exitz00zz__errorz00(BgL_list3315z00_851);
										}
									}
								else
									{
										obj_t BgL_hooksz00_855;

										obj_t BgL_hnamesz00_856;

										BgL_hooksz00_855 = BNIL;
										BgL_hnamesz00_856 = BNIL;
									BgL_zc3anonymousza33316ze3z83_857:
										if (NULLP(BgL_hooksz00_855))
											{	/* Ast/build.scm 66 */
												return BNIL;
											}
										else
											{	/* Ast/build.scm 66 */
												bool_t BgL_testz00_1518;

												{	/* Ast/build.scm 66 */
													obj_t BgL_fun3325z00_864;

													BgL_fun3325z00_864 = CAR(BgL_hooksz00_855);
													BgL_testz00_1518 =
														CBOOL(PROCEDURE_ENTRY(BgL_fun3325z00_864)
														(BgL_fun3325z00_864, BEOA));
												}
												if (BgL_testz00_1518)
													{
														obj_t BgL_hnamesz00_1525;

														obj_t BgL_hooksz00_1523;

														BgL_hooksz00_1523 = CDR(BgL_hooksz00_855);
														BgL_hnamesz00_1525 = CDR(BgL_hnamesz00_856);
														BgL_hnamesz00_856 = BgL_hnamesz00_1525;
														BgL_hooksz00_855 = BgL_hooksz00_1523;
														goto BgL_zc3anonymousza33316ze3z83_857;
													}
												else
													{	/* Ast/build.scm 66 */
														obj_t BgL_arg3324z00_863;

														BgL_arg3324z00_863 = CAR(BgL_hnamesz00_856);
														return
															BGl_internalzd2errorzd2zztools_errorz00
															(BGl_za2currentzd2passza2zd2zzengine_passz00,
															BGl_string3404z00zzast_buildz00,
															BgL_arg3324z00_863);
													}
											}
									}
							}
					}
				}
			}
		}
	}



/* _build-ast-sans-remove */
	obj_t BGl__buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t BgL_envz00_1356,
		obj_t BgL_unitsz00_1357)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 51 */
			return
				BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(BgL_unitsz00_1357);
		}
	}



/* sfun-def->ast */
	BgL_globalz00_bglt BGl_sfunzd2defzd2ze3astze3zzast_buildz00(BgL_globalz00_bglt
		BgL_defz00_5)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 71 */
			{	/* Ast/build.scm 72 */
				obj_t BgL_arg3338z00_886;

				{
					BgL_variablez00_bglt BgL_auxz00_1530;

					BgL_auxz00_1530 = (BgL_variablez00_bglt) (BgL_defz00_5);
					BgL_arg3338z00_886 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1530))->BgL_idz00);
				}
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3338z00_886);
			}
			{	/* Ast/build.scm 73 */
				obj_t BgL_val3252z00_887;

				BgL_val3252z00_887 =
					BGl_zc3exitza33342ze3z83zzast_buildz00(BgL_defz00_5);
				BGl_leavezd2functionzd2zztools_errorz00();
				if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(BgL_val3252z00_887)))
					{	/* Ast/build.scm 84 */
						BGl_unwindzd2untilz12zc0zz__bexitz00(CAR(BgL_val3252z00_887),
							CDR(BgL_val3252z00_887));
					}
				else
					{	/* Ast/build.scm 84 */
						BgL_val3252z00_887;
					}
			}
			return BgL_defz00_5;
		}
	}



/* <exit:3342> */
	obj_t BGl_zc3exitza33342ze3z83zzast_buildz00(BgL_globalz00_bglt
		BgL_defz00_1358)
	{
		AN_OBJECT;
		{	/* Ast/build.scm 84 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3253z00_892;

			if (SET_EXIT(BgL_an_exit3253z00_892))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3253z00_892 = (void *) jmpbuf;
					{	/* Ast/build.scm 84 */

						PUSH_EXIT(BgL_an_exit3253z00_892, ((long) 0));
						{	/* Ast/build.scm 74 */
							obj_t BgL_val3254z00_893;

							{	/* Ast/build.scm 74 */
								BgL_valuez00_bglt BgL_sfunz00_894;

								{
									BgL_variablez00_bglt BgL_auxz00_1545;

									BgL_auxz00_1545 = (BgL_variablez00_bglt) (BgL_defz00_1358);
									BgL_sfunz00_894 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_1545))->
										BgL_valuez00);
								}
								{	/* Ast/build.scm 74 */
									obj_t BgL_sfunzd2argszd2_895;

									{
										BgL_sfunz00_bglt BgL_auxz00_1548;

										BgL_auxz00_1548 = (BgL_sfunz00_bglt) (BgL_sfunz00_894);
										BgL_sfunzd2argszd2_895 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1548))->BgL_argsz00);
									}
									{	/* Ast/build.scm 75 */
										obj_t BgL_sfunzd2bodyzd2expz00_896;

										{
											BgL_sfunz00_bglt BgL_auxz00_1551;

											BgL_auxz00_1551 = (BgL_sfunz00_bglt) (BgL_sfunz00_894);
											BgL_sfunzd2bodyzd2expz00_896 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1551))->
												BgL_bodyz00);
										}
										{	/* Ast/build.scm 76 */
											obj_t BgL_defzd2loczd2_897;

											{	/* Ast/build.scm 77 */
												obj_t BgL_arg3343z00_900;

												BgL_arg3343z00_900 =
													(((BgL_globalz00_bglt) CREF(BgL_defz00_1358))->
													BgL_srcz00);
												BgL_defzd2loczd2_897 =
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_arg3343z00_900);
											}
											{	/* Ast/build.scm 77 */
												obj_t BgL_locz00_898;

												BgL_locz00_898 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_sfunzd2bodyzd2expz00_896, BgL_defzd2loczd2_897);
												{	/* Ast/build.scm 78 */
													BgL_nodez00_bglt BgL_bodyz00_899;

													BgL_bodyz00_899 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BgL_sfunzd2bodyzd2expz00_896,
														BgL_sfunzd2argszd2_895, BgL_locz00_898,
														CNST_TABLE_REF(((long) 2)));
													{	/* Ast/build.scm 79 */

														{
															obj_t BgL_auxz00_1561;

															BgL_sfunz00_bglt BgL_auxz00_1559;

															BgL_auxz00_1561 = (obj_t) (BgL_bodyz00_899);
															BgL_auxz00_1559 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_894);
															BgL_val3254z00_893 =
																((((BgL_sfunz00_bglt) CREF(BgL_auxz00_1559))->
																	BgL_bodyz00) =
																((obj_t) BgL_auxz00_1561), BUNSPEC);
							}}}}}}}}
							POP_EXIT();
							return BgL_val3254z00_893;
						}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_buildz00()
	{
		AN_OBJECT;
		{	/* Ast/build.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_buildz00()
	{
		AN_OBJECT;
		{	/* Ast/build.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_buildz00()
	{
		AN_OBJECT;
		{	/* Ast/build.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 356303425),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3405z00zzast_buildz00));
		}
	}

#ifdef __cplusplus
}
#endif
