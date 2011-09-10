/*===========================================================================*/
/*   (Integrate/walk.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/walk.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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


	extern obj_t BGl_integratezd2definitionz12zc0zzintegrate_definitionz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzintegrate_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_walkz00();
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_walkz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_walkz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00();
	static obj_t BGl__integratezd2walkz12zc0zzintegrate_walkz00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3338z00zzintegrate_walkz00,
		BgL_bgl_string3338za700za7za7i3350za7, "Integration", 11);
	      DEFINE_STRING(BGl_string3340z00zzintegrate_walkz00,
		BgL_bgl_string3340za700za7za7i3351za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3339z00zzintegrate_walkz00,
		BgL_bgl_string3339za700za7za7i3352za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3341z00zzintegrate_walkz00,
		BgL_bgl_string3341za700za7za7i3353za7, " error", 6);
	      DEFINE_STRING(BGl_string3342z00zzintegrate_walkz00,
		BgL_bgl_string3342za700za7za7i3354za7, "s", 1);
	      DEFINE_STRING(BGl_string3343z00zzintegrate_walkz00,
		BgL_bgl_string3343za700za7za7i3355za7, "", 0);
	      DEFINE_STRING(BGl_string3344z00zzintegrate_walkz00,
		BgL_bgl_string3344za700za7za7i3356za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3345z00zzintegrate_walkz00,
		BgL_bgl_string3345za700za7za7i3357za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3346z00zzintegrate_walkz00,
		BgL_bgl_string3346za700za7za7i3358za7, "integrate_walk", 14);
	      DEFINE_STRING(BGl_string3347z00zzintegrate_walkz00,
		BgL_bgl_string3347za700za7za7i3359za7, "(integrate cfa) pass-started ", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integratezd2walkz12zd2envz12zzintegrate_walkz00,
		BgL_bgl__integrateza7d2wal3360za7,
		BGl__integratezd2walkz12zc0zzintegrate_walkz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_walkz00(long
		BgL_checksumz00_1240, char *BgL_fromz00_1241)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00();
					BGl_cnstzd2initzd2zzintegrate_walkz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_walkz00()
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"integrate_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_walkz00()
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 15 */
			{	/* Integrate/walk.scm 15 */
				obj_t BgL_cportz00_1232;

				BgL_cportz00_1232 =
					bgl_open_input_string(BGl_string3347z00zzintegrate_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1233;

					BgL_iz00_1233 = ((long) 1);
				BgL_loopz00_1234:
					if ((BgL_iz00_1233 == ((long) -1)))
						{	/* Integrate/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/walk.scm 15 */
							{	/* Integrate/walk.scm 15 */
								obj_t BgL_arg3349z00_1236;

								{	/* Integrate/walk.scm 15 */

									{	/* Integrate/walk.scm 15 */
										obj_t BgL_locationz00_1238;

										BgL_locationz00_1238 = BBOOL(((bool_t) 0));
										{	/* Integrate/walk.scm 15 */

											BgL_arg3349z00_1236 =
												BGl_readz00zz__readerz00(BgL_cportz00_1232,
												BgL_locationz00_1238);
										}
									}
								}
								{	/* Integrate/walk.scm 15 */
									int BgL_auxz00_1260;

									BgL_auxz00_1260 = (int) (BgL_iz00_1233);
									CNST_TABLE_SET(BgL_auxz00_1260, BgL_arg3349z00_1236);
							}}
							{	/* Integrate/walk.scm 15 */
								int BgL_auxz00_1239;

								BgL_auxz00_1239 = (int) ((BgL_iz00_1233 - ((long) 1)));
								{
									long BgL_iz00_1265;

									BgL_iz00_1265 = (long) (BgL_auxz00_1239);
									BgL_iz00_1233 = BgL_iz00_1265;
									goto BgL_loopz00_1234;
								}
							}
						}
				}
			}
		}
	}



/* integrate-walk! */
	BGL_EXPORTED_DEF obj_t BGl_integratezd2walkz12zc0zzintegrate_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 29 */
			{	/* Integrate/walk.scm 30 */
				obj_t BgL_list3252z00_774;

				{	/* Integrate/walk.scm 30 */
					obj_t BgL_arg3254z00_776;

					{	/* Integrate/walk.scm 30 */
						obj_t BgL_arg3256z00_778;

						BgL_arg3256z00_778 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3254z00_776 =
							MAKE_PAIR(BGl_string3338z00zzintegrate_walkz00,
							BgL_arg3256z00_778);
					}
					BgL_list3252z00_774 =
						MAKE_PAIR(BGl_string3339z00zzintegrate_walkz00, BgL_arg3254z00_776);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3252z00_774);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3338z00zzintegrate_walkz00;
			{
				obj_t BgL_hooksz00_782;

				obj_t BgL_hnamesz00_783;

				BgL_hooksz00_782 = BNIL;
				BgL_hnamesz00_783 = BNIL;
			BgL_zc3anonymousza33257ze3z83_784:
				if (NULLP(BgL_hooksz00_782))
					{	/* Integrate/walk.scm 30 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Integrate/walk.scm 30 */
						bool_t BgL_testz00_1277;

						{	/* Integrate/walk.scm 30 */
							obj_t BgL_fun3265z00_792;

							BgL_fun3265z00_792 = CAR(BgL_hooksz00_782);
							BgL_testz00_1277 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3265z00_792) (BgL_fun3265z00_792,
									BEOA));
						}
						if (BgL_testz00_1277)
							{
								obj_t BgL_hnamesz00_1284;

								obj_t BgL_hooksz00_1282;

								BgL_hooksz00_1282 = CDR(BgL_hooksz00_782);
								BgL_hnamesz00_1284 = CDR(BgL_hnamesz00_783);
								BgL_hnamesz00_783 = BgL_hnamesz00_1284;
								BgL_hooksz00_782 = BgL_hooksz00_1282;
								goto BgL_zc3anonymousza33257ze3z83_784;
							}
						else
							{	/* Integrate/walk.scm 30 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3338z00zzintegrate_walkz00,
									BGl_string3340z00zzintegrate_walkz00, CAR(BgL_hnamesz00_783));
							}
					}
			}
			{
				obj_t BgL_oldz00_797;

				obj_t BgL_newz00_798;

				BgL_oldz00_797 = BgL_globalsz00_1;
				BgL_newz00_798 = BNIL;
			BgL_zc3anonymousza33267ze3z83_799:
				if (NULLP(BgL_oldz00_797))
					{	/* Integrate/walk.scm 34 */
						obj_t BgL_valuez00_801;

						BgL_valuez00_801 =
							BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
							BgL_newz00_798);
						if (((long)
								CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
								((long) 0)))
							{	/* Integrate/walk.scm 34 */
								{	/* Integrate/walk.scm 34 */
									obj_t BgL_port3251z00_803;

									{	/* Integrate/walk.scm 34 */
										obj_t BgL_res3336z00_1214;

										{	/* Integrate/walk.scm 34 */
											obj_t BgL_auxz00_1295;

											BgL_auxz00_1295 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3336z00_1214 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1295);
										}
										BgL_port3251z00_803 = BgL_res3336z00_1214;
									}
									bgl_display_obj
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
										BgL_port3251z00_803);
									bgl_display_string(BGl_string3341z00zzintegrate_walkz00,
										BgL_port3251z00_803);
									{	/* Integrate/walk.scm 34 */
										obj_t BgL_arg3270z00_804;

										{	/* Integrate/walk.scm 34 */
											bool_t BgL_testz00_1300;

											if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Integrate/walk.scm 34 */
													BgL_testz00_1300 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
												}
											else
												{	/* Integrate/walk.scm 34 */
													BgL_testz00_1300 = ((bool_t) 0);
												}
											if (BgL_testz00_1300)
												{	/* Integrate/walk.scm 34 */
													BgL_arg3270z00_804 =
														BGl_string3342z00zzintegrate_walkz00;
												}
											else
												{	/* Integrate/walk.scm 34 */
													BgL_arg3270z00_804 =
														BGl_string3343z00zzintegrate_walkz00;
												}
										}
										bgl_display_obj(BgL_arg3270z00_804, BgL_port3251z00_803);
									}
									bgl_display_string(BGl_string3344z00zzintegrate_walkz00,
										BgL_port3251z00_803);
									bgl_display_char(((unsigned char) '\n'), BgL_port3251z00_803);
								}
								{	/* Integrate/walk.scm 34 */
									obj_t BgL_list3273z00_807;

									BgL_list3273z00_807 = MAKE_PAIR(BINT(((long) -1)), BNIL);
									return BGl_exitz00zz__errorz00(BgL_list3273z00_807);
								}
							}
						else
							{
								obj_t BgL_hooksz00_811;

								obj_t BgL_hnamesz00_812;

								BgL_hooksz00_811 = BNIL;
								BgL_hnamesz00_812 = BNIL;
							BgL_zc3anonymousza33274ze3z83_813:
								if (NULLP(BgL_hooksz00_811))
									{	/* Integrate/walk.scm 34 */
										return BgL_valuez00_801;
									}
								else
									{	/* Integrate/walk.scm 34 */
										bool_t BgL_testz00_1313;

										{	/* Integrate/walk.scm 34 */
											obj_t BgL_fun3281z00_820;

											BgL_fun3281z00_820 = CAR(BgL_hooksz00_811);
											BgL_testz00_1313 =
												CBOOL(PROCEDURE_ENTRY(BgL_fun3281z00_820)
												(BgL_fun3281z00_820, BEOA));
										}
										if (BgL_testz00_1313)
											{
												obj_t BgL_hnamesz00_1320;

												obj_t BgL_hooksz00_1318;

												BgL_hooksz00_1318 = CDR(BgL_hooksz00_811);
												BgL_hnamesz00_1320 = CDR(BgL_hnamesz00_812);
												BgL_hnamesz00_812 = BgL_hnamesz00_1320;
												BgL_hooksz00_811 = BgL_hooksz00_1318;
												goto BgL_zc3anonymousza33274ze3z83_813;
											}
										else
											{	/* Integrate/walk.scm 34 */
												obj_t BgL_arg3280z00_819;

												BgL_arg3280z00_819 = CAR(BgL_hnamesz00_812);
												return
													BGl_internalzd2errorzd2zztools_errorz00
													(BGl_za2currentzd2passza2zd2zzengine_passz00,
													BGl_string3345z00zzintegrate_walkz00,
													BgL_arg3280z00_819);
											}
									}
							}
					}
				else
					{	/* Integrate/walk.scm 35 */
						obj_t BgL_globalz00_823;

						BgL_globalz00_823 = CAR(BgL_oldz00_797);
						{	/* Integrate/walk.scm 36 */
							obj_t BgL_arg3283z00_824;

							{
								BgL_variablez00_bglt BgL_auxz00_1325;

								BgL_auxz00_1325 = (BgL_variablez00_bglt) (BgL_globalz00_823);
								BgL_arg3283z00_824 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1325))->BgL_idz00);
							}
							BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3283z00_824);
						}
						{
							obj_t BgL_newz00_1331;

							obj_t BgL_oldz00_1329;

							BgL_oldz00_1329 = CDR(BgL_oldz00_797);
							BgL_newz00_1331 =
								bgl_append2
								(BGl_integratezd2definitionz12zc0zzintegrate_definitionz00
								(BgL_globalz00_823), BgL_newz00_798);
							BgL_newz00_798 = BgL_newz00_1331;
							BgL_oldz00_797 = BgL_oldz00_1329;
							goto BgL_zc3anonymousza33267ze3z83_799;
						}
					}
			}
		}
	}



/* _integrate-walk! */
	obj_t BGl__integratezd2walkz12zc0zzintegrate_walkz00(obj_t BgL_envz00_1230,
		obj_t BgL_globalsz00_1231)
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 29 */
			return BGl_integratezd2walkz12zc0zzintegrate_walkz00(BgL_globalsz00_1231);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_walkz00()
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_walkz00()
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_walkz00()
	{
		AN_OBJECT;
		{	/* Integrate/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_definitionz00(((long)
					112483603), BSTRING_TO_STRING(BGl_string3346z00zzintegrate_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
