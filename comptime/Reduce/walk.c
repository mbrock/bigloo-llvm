/*===========================================================================*/
/*   (Reduce/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/walk.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00;
	extern obj_t BGl_reducezd2conditionalz12zc0zzreduce_condz00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzreduce_walkz00();
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_typecz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_condz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_walkz00();
	extern obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzreduce_walkz00();
	extern obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t);
	extern obj_t BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_walkz00();
	extern obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t);
	static obj_t BGl__reducezd2walkz12zc0zzreduce_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_walkz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3354z00zzreduce_walkz00,
		BgL_bgl_string3354za700za7za7r3365za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3355z00zzreduce_walkz00,
		BgL_bgl_string3355za700za7za7r3366za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3356z00zzreduce_walkz00,
		BgL_bgl_string3356za700za7za7r3367za7, " error", 6);
	      DEFINE_STRING(BGl_string3357z00zzreduce_walkz00,
		BgL_bgl_string3357za700za7za7r3368za7, "s", 1);
	      DEFINE_STRING(BGl_string3358z00zzreduce_walkz00,
		BgL_bgl_string3358za700za7za7r3369za7, "", 0);
	      DEFINE_STRING(BGl_string3360z00zzreduce_walkz00,
		BgL_bgl_string3360za700za7za7r3370za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3359z00zzreduce_walkz00,
		BgL_bgl_string3359za700za7za7r3371za7, " occured, ending ...", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2walkz12zd2envz12zzreduce_walkz00,
		BgL_bgl__reduceza7d2walkza713372z00, va_generic_entry,
		BGl__reducezd2walkz12zc0zzreduce_walkz00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string3361z00zzreduce_walkz00,
		BgL_bgl_string3361za700za7za7r3373za7, "reduce_walk", 11);
	      DEFINE_STRING(BGl_string3362z00zzreduce_walkz00,
		BgL_bgl_string3362za700za7za7r3374za7, "reduce pass-started ", 20);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_walkz00(long
		BgL_checksumz00_1271, char *BgL_fromz00_1272)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_walkz00();
					BGl_cnstzd2initzd2zzreduce_walkz00();
					BGl_importedzd2moduleszd2initz00zzreduce_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_walkz00()
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"reduce_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"reduce_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_walkz00()
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 15 */
			{	/* Reduce/walk.scm 15 */
				obj_t BgL_cportz00_1263;

				BgL_cportz00_1263 =
					bgl_open_input_string(BGl_string3362z00zzreduce_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1264;

					BgL_iz00_1264 = ((long) 1);
				BgL_loopz00_1265:
					if ((BgL_iz00_1264 == ((long) -1)))
						{	/* Reduce/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/walk.scm 15 */
							{	/* Reduce/walk.scm 15 */
								obj_t BgL_arg3364z00_1267;

								{	/* Reduce/walk.scm 15 */

									{	/* Reduce/walk.scm 15 */
										obj_t BgL_locationz00_1269;

										BgL_locationz00_1269 = BBOOL(((bool_t) 0));
										{	/* Reduce/walk.scm 15 */

											BgL_arg3364z00_1267 =
												BGl_readz00zz__readerz00(BgL_cportz00_1263,
												BgL_locationz00_1269);
										}
									}
								}
								{	/* Reduce/walk.scm 15 */
									int BgL_auxz00_1290;

									BgL_auxz00_1290 = (int) (BgL_iz00_1264);
									CNST_TABLE_SET(BgL_auxz00_1290, BgL_arg3364z00_1267);
							}}
							{	/* Reduce/walk.scm 15 */
								int BgL_auxz00_1270;

								BgL_auxz00_1270 = (int) ((BgL_iz00_1264 - ((long) 1)));
								{
									long BgL_iz00_1295;

									BgL_iz00_1295 = (long) (BgL_auxz00_1270);
									BgL_iz00_1264 = BgL_iz00_1295;
									goto BgL_loopz00_1265;
								}
							}
						}
				}
			}
		}
	}



/* reduce-walk! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2walkz12zc0zzreduce_walkz00(obj_t
		BgL_globalsz00_1, obj_t BgL_msgz00_2, obj_t BgL_typezd2unsafezd2_3)
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 36 */
			{	/* Reduce/walk.scm 37 */
				obj_t BgL_list3254z00_776;

				{	/* Reduce/walk.scm 37 */
					obj_t BgL_arg3256z00_778;

					{	/* Reduce/walk.scm 37 */
						obj_t BgL_arg3257z00_779;

						BgL_arg3257z00_779 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3256z00_778 = MAKE_PAIR(BgL_msgz00_2, BgL_arg3257z00_779);
					}
					BgL_list3254z00_776 =
						MAKE_PAIR(BGl_string3354z00zzreduce_walkz00, BgL_arg3256z00_778);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3254z00_776);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_msgz00_2;
			{
				obj_t BgL_hooksz00_783;

				obj_t BgL_hnamesz00_784;

				BgL_hooksz00_783 = BNIL;
				BgL_hnamesz00_784 = BNIL;
			BgL_zc3anonymousza33258ze3z83_785:
				if (NULLP(BgL_hooksz00_783))
					{	/* Reduce/walk.scm 37 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/walk.scm 37 */
						bool_t BgL_testz00_1307;

						{	/* Reduce/walk.scm 37 */
							obj_t BgL_fun3265z00_792;

							BgL_fun3265z00_792 = CAR(BgL_hooksz00_783);
							BgL_testz00_1307 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3265z00_792) (BgL_fun3265z00_792,
									BEOA));
						}
						if (BgL_testz00_1307)
							{
								obj_t BgL_hnamesz00_1314;

								obj_t BgL_hooksz00_1312;

								BgL_hooksz00_1312 = CDR(BgL_hooksz00_783);
								BgL_hnamesz00_1314 = CDR(BgL_hnamesz00_784);
								BgL_hnamesz00_784 = BgL_hnamesz00_1314;
								BgL_hooksz00_783 = BgL_hooksz00_1312;
								goto BgL_zc3anonymousza33258ze3z83_785;
							}
						else
							{	/* Reduce/walk.scm 37 */
								BGl_internalzd2errorzd2zztools_errorz00(BgL_msgz00_2,
									BGl_string3355z00zzreduce_walkz00, CAR(BgL_hnamesz00_784));
							}
					}
			}
			{	/* Reduce/walk.scm 39 */
				bool_t BgL_testz00_1318;

				if (PAIRP(BgL_typezd2unsafezd2_3))
					{	/* Reduce/walk.scm 39 */
						BgL_testz00_1318 = CBOOL(CAR(BgL_typezd2unsafezd2_3));
					}
				else
					{	/* Reduce/walk.scm 39 */
						BgL_testz00_1318 = ((bool_t) 0);
					}
				if (BgL_testz00_1318)
					{	/* Reduce/walk.scm 39 */
						BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_1);
						{	/* Reduce/walk.scm 41 */
							obj_t BgL_valuez00_796;

							BgL_valuez00_796 =
								BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
								BgL_globalsz00_1);
							if (((long)
									CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
									((long) 0)))
								{	/* Reduce/walk.scm 41 */
									{	/* Reduce/walk.scm 41 */
										obj_t BgL_port3252z00_798;

										{	/* Reduce/walk.scm 41 */
											obj_t BgL_res3350z00_1228;

											{	/* Reduce/walk.scm 41 */
												obj_t BgL_auxz00_1329;

												BgL_auxz00_1329 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res3350z00_1228 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1329);
											}
											BgL_port3252z00_798 = BgL_res3350z00_1228;
										}
										bgl_display_obj
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BgL_port3252z00_798);
										bgl_display_string(BGl_string3356z00zzreduce_walkz00,
											BgL_port3252z00_798);
										{	/* Reduce/walk.scm 41 */
											obj_t BgL_arg3269z00_799;

											{	/* Reduce/walk.scm 41 */
												bool_t BgL_testz00_1334;

												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
													{	/* Reduce/walk.scm 41 */
														BgL_testz00_1334 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
															BINT(((long) 1)));
													}
												else
													{	/* Reduce/walk.scm 41 */
														BgL_testz00_1334 = ((bool_t) 0);
													}
												if (BgL_testz00_1334)
													{	/* Reduce/walk.scm 41 */
														BgL_arg3269z00_799 =
															BGl_string3357z00zzreduce_walkz00;
													}
												else
													{	/* Reduce/walk.scm 41 */
														BgL_arg3269z00_799 =
															BGl_string3358z00zzreduce_walkz00;
													}
											}
											bgl_display_obj(BgL_arg3269z00_799, BgL_port3252z00_798);
										}
										bgl_display_string(BGl_string3359z00zzreduce_walkz00,
											BgL_port3252z00_798);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port3252z00_798);
									}
									{	/* Reduce/walk.scm 41 */
										obj_t BgL_list3272z00_802;

										BgL_list3272z00_802 = MAKE_PAIR(BINT(((long) -1)), BNIL);
										return BGl_exitz00zz__errorz00(BgL_list3272z00_802);
									}
								}
							else
								{
									obj_t BgL_hooksz00_806;

									obj_t BgL_hnamesz00_807;

									BgL_hooksz00_806 = BNIL;
									BgL_hnamesz00_807 = BNIL;
								BgL_zc3anonymousza33273ze3z83_808:
									if (NULLP(BgL_hooksz00_806))
										{	/* Reduce/walk.scm 41 */
											return BgL_valuez00_796;
										}
									else
										{	/* Reduce/walk.scm 41 */
											bool_t BgL_testz00_1347;

											{	/* Reduce/walk.scm 41 */
												obj_t BgL_fun3281z00_815;

												BgL_fun3281z00_815 = CAR(BgL_hooksz00_806);
												BgL_testz00_1347 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun3281z00_815)
													(BgL_fun3281z00_815, BEOA));
											}
											if (BgL_testz00_1347)
												{
													obj_t BgL_hnamesz00_1354;

													obj_t BgL_hooksz00_1352;

													BgL_hooksz00_1352 = CDR(BgL_hooksz00_806);
													BgL_hnamesz00_1354 = CDR(BgL_hnamesz00_807);
													BgL_hnamesz00_807 = BgL_hnamesz00_1354;
													BgL_hooksz00_806 = BgL_hooksz00_1352;
													goto BgL_zc3anonymousza33273ze3z83_808;
												}
											else
												{	/* Reduce/walk.scm 41 */
													obj_t BgL_arg3279z00_814;

													BgL_arg3279z00_814 = CAR(BgL_hnamesz00_807);
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_za2currentzd2passza2zd2zzengine_passz00,
														BGl_string3360z00zzreduce_walkz00,
														BgL_arg3279z00_814);
												}
										}
								}
						}
					}
				else
					{	/* Reduce/walk.scm 39 */
						if (CBOOL(BGl_za2optimzd2dataflowzf3za2z21zzengine_paramz00))
							{	/* Reduce/walk.scm 42 */
								BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_1);
								if (
									((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
										((long) 2)))
									{	/* Reduce/walk.scm 44 */
										BGl_reducezd2csez12zc0zzreduce_csez00(BgL_globalsz00_1);
									}
								else
									{	/* Reduce/walk.scm 44 */
										BFALSE;
									}
								BGl_reducezd2typezd2checkz12z12zzreduce_typecz00
									(BgL_globalsz00_1);
								BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_1);
								BGl_reducezd2conditionalz12zc0zzreduce_condz00
									(BgL_globalsz00_1);
								BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_1);
								if (CBOOL
									(BGl_za2optimzd2reducezd2betazf3za2zf3zzengine_paramz00))
									{	/* Reduce/walk.scm 49 */
										BGl_reducezd2betaz12zc0zzreduce_betaz00(BgL_globalsz00_1);
									}
								else
									{	/* Reduce/walk.scm 49 */
										BFALSE;
									}
								BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2
									(BgL_globalsz00_1);
								{	/* Reduce/walk.scm 51 */
									obj_t BgL_valuez00_819;

									BgL_valuez00_819 =
										BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long)
												1)), BgL_globalsz00_1);
									if (((long)
											CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
											> ((long) 0)))
										{	/* Reduce/walk.scm 51 */
											{	/* Reduce/walk.scm 51 */
												obj_t BgL_port3253z00_821;

												{	/* Reduce/walk.scm 51 */
													obj_t BgL_res3352z00_1246;

													{	/* Reduce/walk.scm 51 */
														obj_t BgL_auxz00_1378;

														BgL_auxz00_1378 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res3352z00_1246 =
															BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1378);
													}
													BgL_port3253z00_821 = BgL_res3352z00_1246;
												}
												bgl_display_obj
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BgL_port3253z00_821);
												bgl_display_string(BGl_string3356z00zzreduce_walkz00,
													BgL_port3253z00_821);
												{	/* Reduce/walk.scm 51 */
													obj_t BgL_arg3285z00_822;

													{	/* Reduce/walk.scm 51 */
														bool_t BgL_testz00_1383;

														if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
															(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
															{	/* Reduce/walk.scm 51 */
																BgL_testz00_1383 =
																	BGl_2ze3ze3zz__r4_numbers_6_5z00
																	(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
																	BINT(((long) 1)));
															}
														else
															{	/* Reduce/walk.scm 51 */
																BgL_testz00_1383 = ((bool_t) 0);
															}
														if (BgL_testz00_1383)
															{	/* Reduce/walk.scm 51 */
																BgL_arg3285z00_822 =
																	BGl_string3357z00zzreduce_walkz00;
															}
														else
															{	/* Reduce/walk.scm 51 */
																BgL_arg3285z00_822 =
																	BGl_string3358z00zzreduce_walkz00;
															}
													}
													bgl_display_obj(BgL_arg3285z00_822,
														BgL_port3253z00_821);
												}
												bgl_display_string(BGl_string3359z00zzreduce_walkz00,
													BgL_port3253z00_821);
												bgl_display_char(((unsigned char) '\n'),
													BgL_port3253z00_821);
											}
											{	/* Reduce/walk.scm 51 */
												obj_t BgL_list3288z00_825;

												BgL_list3288z00_825 =
													MAKE_PAIR(BINT(((long) -1)), BNIL);
												return BGl_exitz00zz__errorz00(BgL_list3288z00_825);
											}
										}
									else
										{
											obj_t BgL_hooksz00_829;

											obj_t BgL_hnamesz00_830;

											BgL_hooksz00_829 = BNIL;
											BgL_hnamesz00_830 = BNIL;
										BgL_zc3anonymousza33289ze3z83_831:
											if (NULLP(BgL_hooksz00_829))
												{	/* Reduce/walk.scm 51 */
													return BgL_valuez00_819;
												}
											else
												{	/* Reduce/walk.scm 51 */
													bool_t BgL_testz00_1396;

													{	/* Reduce/walk.scm 51 */
														obj_t BgL_fun3297z00_838;

														BgL_fun3297z00_838 = CAR(BgL_hooksz00_829);
														BgL_testz00_1396 =
															CBOOL(PROCEDURE_ENTRY(BgL_fun3297z00_838)
															(BgL_fun3297z00_838, BEOA));
													}
													if (BgL_testz00_1396)
														{
															obj_t BgL_hnamesz00_1403;

															obj_t BgL_hooksz00_1401;

															BgL_hooksz00_1401 = CDR(BgL_hooksz00_829);
															BgL_hnamesz00_1403 = CDR(BgL_hnamesz00_830);
															BgL_hnamesz00_830 = BgL_hnamesz00_1403;
															BgL_hooksz00_829 = BgL_hooksz00_1401;
															goto BgL_zc3anonymousza33289ze3z83_831;
														}
													else
														{	/* Reduce/walk.scm 51 */
															obj_t BgL_arg3295z00_837;

															BgL_arg3295z00_837 = CAR(BgL_hnamesz00_830);
															return
																BGl_internalzd2errorzd2zztools_errorz00
																(BGl_za2currentzd2passza2zd2zzengine_passz00,
																BGl_string3360z00zzreduce_walkz00,
																BgL_arg3295z00_837);
														}
												}
										}
								}
							}
						else
							{	/* Reduce/walk.scm 42 */
								return
									BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
									BgL_globalsz00_1);
		}}}}
	}



/* _reduce-walk! */
	obj_t BGl__reducezd2walkz12zc0zzreduce_walkz00(obj_t BgL_envz00_1259,
		obj_t BgL_globalsz00_1260, obj_t BgL_msgz00_1261,
		obj_t BgL_typezd2unsafezd2_1262)
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 36 */
			return
				BGl_reducezd2walkz12zc0zzreduce_walkz00(BgL_globalsz00_1260,
				BgL_msgz00_1261, BgL_typezd2unsafezd2_1262);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_walkz00()
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_walkz00()
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_walkz00()
	{
		AN_OBJECT;
		{	/* Reduce/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_copyz00(((long) 507280352),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_csez00(((long) 318913315),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_condz00(((long) 111370478),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_typecz00(((long) 497580776),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(((long)
					489276306), BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_1occz00(((long) 507050626),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			BGl_modulezd2initializa7ationz75zzreduce_betaz00(((long) 507281462),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
			return BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3361z00zzreduce_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
