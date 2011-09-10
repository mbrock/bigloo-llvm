/*===========================================================================*/
/*   (Expand/let.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/let.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33457ze3z83zzexpand_letz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__expandzd2letreczd2zzexpand_letz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_letz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letreczd2zzexpand_letz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letzd2zzexpand_letz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33499ze3z83zzexpand_letz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzexpand_letz00();
	static obj_t BGl_zc3anonymousza33538ze3z83zzexpand_letz00(obj_t);
	static obj_t BGl_zc3anonymousza33561ze3z83zzexpand_letz00(obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl__expandzd2labelszd2zzexpand_letz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2labelszd2zzexpand_letz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_letz00();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl__expandzd2letzd2zzexpand_letz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letza2z70zzexpand_letz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_letz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzexpand_letz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_letz00();
	static obj_t BGl__expandzd2letza2z70zzexpand_letz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_zc3anonymousza33418ze3z83zzexpand_letz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_letz00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letzd2envz00zzexpand_letz00,
		BgL_bgl__expandza7d2letza7d23713z00, BGl__expandzd2letzd2zzexpand_letz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letreczd2envz00zzexpand_letz00,
		BgL_bgl__expandza7d2letrec3714za7, BGl__expandzd2letreczd2zzexpand_letz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letza2zd2envza2zzexpand_letz00,
		BgL_bgl__expandza7d2letza7a23715z00, BGl__expandzd2letza2z70zzexpand_letz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2labelszd2envz00zzexpand_letz00,
		BgL_bgl__expandza7d2labels3716za7, BGl__expandzd2labelszd2zzexpand_letz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3702z00zzexpand_letz00,
		BgL_bgl_za7c3anonymousza7a333717z00,
		BGl_zc3anonymousza33418ze3z83zzexpand_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3700z00zzexpand_letz00,
		BgL_bgl_string3700za700za7za7e3718za7, "Illegal `let*' form", 19);
	      DEFINE_STRING(BGl_string3701z00zzexpand_letz00,
		BgL_bgl_string3701za700za7za7e3719za7, "Illegal `named let' binding", 27);
	      DEFINE_STRING(BGl_string3703z00zzexpand_letz00,
		BgL_bgl_string3703za700za7za7e3720za7, "Illegal `let' binding", 21);
	      DEFINE_STRING(BGl_string3704z00zzexpand_letz00,
		BgL_bgl_string3704za700za7za7e3721za7, "Illegal `let' form", 18);
	      DEFINE_STRING(BGl_string3705z00zzexpand_letz00,
		BgL_bgl_string3705za700za7za7e3722za7, "Illegal `letrec' binding", 24);
	      DEFINE_STRING(BGl_string3706z00zzexpand_letz00,
		BgL_bgl_string3706za700za7za7e3723za7, "Illegal `letrec' form", 21);
	      DEFINE_STRING(BGl_string3707z00zzexpand_letz00,
		BgL_bgl_string3707za700za7za7e3724za7, "Illegal `labels' binding", 24);
	      DEFINE_STRING(BGl_string3708z00zzexpand_letz00,
		BgL_bgl_string3708za700za7za7e3725za7, "Illegal `labels' form", 21);
	      DEFINE_STRING(BGl_string3710z00zzexpand_letz00,
		BgL_bgl_string3710za700za7za7e3726za7, "labels _ lambda letrec let* let ",
		32);
	      DEFINE_STRING(BGl_string3709z00zzexpand_letz00,
		BgL_bgl_string3709za700za7za7e3727za7, "expand_let", 10);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_letz00(long
		BgL_checksumz00_2207, char *BgL_fromz00_2208)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_letz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_letz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzexpand_letz00();
					BGl_cnstzd2initzd2zzexpand_letz00();
					BGl_importedzd2moduleszd2initz00zzexpand_letz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_let");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			{	/* Expand/let.scm 15 */
				obj_t BgL_cportz00_2199;

				BgL_cportz00_2199 =
					bgl_open_input_string(BGl_string3710z00zzexpand_letz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2200;

					BgL_iz00_2200 = ((long) 5);
				BgL_loopz00_2201:
					if ((BgL_iz00_2200 == ((long) -1)))
						{	/* Expand/let.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/let.scm 15 */
							{	/* Expand/let.scm 15 */
								obj_t BgL_arg3712z00_2203;

								{	/* Expand/let.scm 15 */

									{	/* Expand/let.scm 15 */
										obj_t BgL_locationz00_2205;

										BgL_locationz00_2205 = BBOOL(((bool_t) 0));
										{	/* Expand/let.scm 15 */

											BgL_arg3712z00_2203 =
												BGl_readz00zz__readerz00(BgL_cportz00_2199,
												BgL_locationz00_2205);
										}
									}
								}
								{	/* Expand/let.scm 15 */
									int BgL_auxz00_2228;

									BgL_auxz00_2228 = (int) (BgL_iz00_2200);
									CNST_TABLE_SET(BgL_auxz00_2228, BgL_arg3712z00_2203);
							}}
							{	/* Expand/let.scm 15 */
								int BgL_auxz00_2206;

								BgL_auxz00_2206 = (int) ((BgL_iz00_2200 - ((long) 1)));
								{
									long BgL_iz00_2233;

									BgL_iz00_2233 = (long) (BgL_auxz00_2206);
									BgL_iz00_2200 = BgL_iz00_2233;
									goto BgL_loopz00_2201;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}
	}



/* expand-let* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letza2z70zzexpand_letz00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 32 */
			{	/* Expand/let.scm 33 */
				obj_t BgL_oldzd2internalzd2_805;

				BgL_oldzd2internalzd2_805 =
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
				{	/* Expand/let.scm 35 */
					obj_t BgL_ez00_806;

					BgL_ez00_806 =
						BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_16);
					{	/* Expand/let.scm 35 */
						obj_t BgL_resz00_807;

						{
							obj_t BgL_bindingsz00_810;

							obj_t BgL_bodyz00_811;

							obj_t BgL_bodyz00_808;

							if (PAIRP(BgL_xz00_15))
								{	/* Expand/let.scm 36 */
									obj_t BgL_cdrzd21397zd2_816;

									BgL_cdrzd21397zd2_816 = CDR(BgL_xz00_15);
									if (PAIRP(BgL_cdrzd21397zd2_816))
										{	/* Expand/let.scm 36 */
											obj_t BgL_cdrzd21400zd2_818;

											BgL_cdrzd21400zd2_818 = CDR(BgL_cdrzd21397zd2_816);
											if (NULLP(CAR(BgL_cdrzd21397zd2_816)))
												{	/* Expand/let.scm 36 */
													if (NULLP(BgL_cdrzd21400zd2_818))
														{	/* Expand/let.scm 36 */
														BgL_tagzd21391zd2_813:
															BgL_resz00_807 =
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string3700z00zzexpand_letz00, BgL_xz00_15);
														}
													else
														{	/* Expand/let.scm 36 */
															BgL_bodyz00_808 = BgL_cdrzd21400zd2_818;
															{	/* Expand/let.scm 38 */
																obj_t BgL_arg3308z00_827;

																{	/* Expand/let.scm 38 */
																	obj_t BgL_arg3309z00_828;

																	obj_t BgL_arg3310z00_829;

																	BgL_arg3309z00_828 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Expand/let.scm 38 */
																		obj_t BgL_arg3312z00_831;

																		{	/* Expand/let.scm 38 */
																			obj_t BgL_arg3316z00_835;

																			BgL_arg3316z00_835 =
																				BGl_expandzd2prognzd2zz__prognz00
																				(BgL_bodyz00_808);
																			BgL_arg3312z00_831 =
																				PROCEDURE_ENTRY(BgL_ez00_806)
																				(BgL_ez00_806, BgL_arg3316z00_835,
																				BgL_ez00_806, BEOA);
																		}
																		{	/* Expand/let.scm 38 */
																			obj_t BgL_list3314z00_833;

																			{	/* Expand/let.scm 38 */
																				obj_t BgL_arg3315z00_834;

																				BgL_arg3315z00_834 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3314z00_833 =
																					MAKE_PAIR(BgL_arg3312z00_831,
																					BgL_arg3315z00_834);
																			}
																			BgL_arg3310z00_829 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BNIL, BgL_list3314z00_833);
																	}}
																	BgL_arg3308z00_827 =
																		MAKE_PAIR(BgL_arg3309z00_828,
																		BgL_arg3310z00_829);
																}
																BgL_resz00_807 =
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_15,
																	BgL_arg3308z00_827);
												}}}
											else
												{	/* Expand/let.scm 36 */
													obj_t BgL_carzd21415zd2_822;

													obj_t BgL_cdrzd21416zd2_823;

													BgL_carzd21415zd2_822 = CAR(BgL_cdrzd21397zd2_816);
													BgL_cdrzd21416zd2_823 = CDR(BgL_cdrzd21397zd2_816);
													if (PAIRP(BgL_carzd21415zd2_822))
														{	/* Expand/let.scm 36 */
															if (NULLP(BgL_cdrzd21416zd2_823))
																{	/* Expand/let.scm 36 */
																	goto BgL_tagzd21391zd2_813;
																}
															else
																{	/* Expand/let.scm 36 */
																	BgL_bindingsz00_810 = BgL_carzd21415zd2_822;
																	BgL_bodyz00_811 = BgL_cdrzd21416zd2_823;
																	{	/* Expand/let.scm 40 */
																		obj_t BgL_slz00_836;

																		obj_t BgL_bz00_837;

																		{	/* Expand/let.scm 40 */
																			obj_t BgL_arg3324z00_843;

																			obj_t BgL_arg3325z00_844;

																			obj_t BgL_arg3326z00_845;

																			BgL_arg3324z00_843 =
																				CNST_TABLE_REF(((long) 1));
																			BgL_arg3325z00_844 =
																				MAKE_PAIR(CDR(BgL_bindingsz00_810),
																				BgL_bodyz00_811);
																			BgL_arg3326z00_845 =
																				BGl_findzd2locationzd2zztools_locationz00
																				(CAR(BgL_bindingsz00_810));
																			{	/* Expand/let.scm 40 */
																				obj_t BgL_res3697z00_1814;

																				BgL_res3697z00_1814 =
																					MAKE_EXTENDED_PAIR(BgL_arg3324z00_843,
																					BgL_arg3325z00_844,
																					BgL_arg3326z00_845);
																				BgL_slz00_836 = BgL_res3697z00_1814;
																		}}
																		{	/* Expand/let.scm 43 */
																			obj_t BgL_arg3329z00_848;

																			BgL_arg3329z00_848 =
																				MAKE_PAIR(CAR(BgL_bindingsz00_810),
																				BNIL);
																			BgL_bz00_837 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg3329z00_848,
																				BgL_bindingsz00_810);
																		}
																		{	/* Expand/let.scm 44 */
																			obj_t BgL_arg3317z00_838;

																			{	/* Expand/let.scm 44 */
																				obj_t BgL_arg3318z00_839;

																				obj_t BgL_arg3319z00_840;

																				BgL_arg3318z00_839 =
																					CNST_TABLE_REF(((long) 0));
																				{	/* Expand/let.scm 44 */
																					obj_t BgL_list3320z00_841;

																					{	/* Expand/let.scm 44 */
																						obj_t BgL_arg3321z00_842;

																						BgL_arg3321z00_842 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3320z00_841 =
																							MAKE_PAIR(BgL_slz00_836,
																							BgL_arg3321z00_842);
																					}
																					BgL_arg3319z00_840 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_bz00_837, BgL_list3320z00_841);
																				}
																				BgL_arg3317z00_838 =
																					MAKE_PAIR(BgL_arg3318z00_839,
																					BgL_arg3319z00_840);
																			}
																			BgL_resz00_807 =
																				PROCEDURE_ENTRY(BgL_ez00_806)
																				(BgL_ez00_806, BgL_arg3317z00_838,
																				BgL_ez00_806, BEOA);
														}}}}
													else
														{	/* Expand/let.scm 36 */
															goto BgL_tagzd21391zd2_813;
														}
												}
										}
									else
										{	/* Expand/let.scm 36 */
											goto BgL_tagzd21391zd2_813;
										}
								}
							else
								{	/* Expand/let.scm 36 */
									goto BgL_tagzd21391zd2_813;
								}
						}
						{	/* Expand/let.scm 36 */

							BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
								BgL_oldzd2internalzd2_805;
							return BGl_replacez12z12zztools_miscz00(BgL_xz00_15,
								BgL_resz00_807);
						}
					}
				}
			}
		}
	}



/* _expand-let* */
	obj_t BGl__expandzd2letza2z70zzexpand_letz00(obj_t BgL_envz00_2160,
		obj_t BgL_xz00_2161, obj_t BgL_ez00_2162)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 32 */
			return
				BGl_expandzd2letza2z70zzexpand_letz00(BgL_xz00_2161, BgL_ez00_2162);
		}
	}



/* expand-let */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letzd2zzexpand_letz00(obj_t BgL_xz00_17,
		obj_t BgL_ez00_18)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 53 */
			{
				obj_t BgL_ez00_1037;

				obj_t BgL_bindingsz00_1038;

				obj_t BgL_bodyz00_1039;

				obj_t BgL_ez00_926;

				obj_t BgL_loopz00_927;

				obj_t BgL_bindingsz00_928;

				obj_t BgL_bodyz00_929;

				{	/* Expand/let.scm 83 */
					obj_t BgL_oldzd2internalzd2_853;

					BgL_oldzd2internalzd2_853 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 85 */
						obj_t BgL_ez00_854;

						BgL_ez00_854 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_18);
						{	/* Expand/let.scm 85 */
							obj_t BgL_resz00_855;

							{
								obj_t BgL_bodyz00_856;

								if (PAIRP(BgL_xz00_17))
									{	/* Expand/let.scm 86 */
										obj_t BgL_cdrzd21463zd2_868;

										BgL_cdrzd21463zd2_868 = CDR(BgL_xz00_17);
										if (PAIRP(BgL_cdrzd21463zd2_868))
											{	/* Expand/let.scm 86 */
												obj_t BgL_cdrzd21466zd2_870;

												BgL_cdrzd21466zd2_870 = CDR(BgL_cdrzd21463zd2_868);
												if (NULLP(CAR(BgL_cdrzd21463zd2_868)))
													{	/* Expand/let.scm 86 */
														if (NULLP(BgL_cdrzd21466zd2_870))
															{	/* Expand/let.scm 86 */
																obj_t BgL_carzd21480zd2_874;

																obj_t BgL_cdrzd21481zd2_875;

																BgL_carzd21480zd2_874 =
																	CAR(BgL_cdrzd21463zd2_868);
																BgL_cdrzd21481zd2_875 =
																	CDR(BgL_cdrzd21463zd2_868);
																if (SYMBOLP(BgL_carzd21480zd2_874))
																	{	/* Expand/let.scm 86 */
																		if (PAIRP(BgL_cdrzd21481zd2_875))
																			{	/* Expand/let.scm 86 */
																				obj_t BgL_carzd21487zd2_878;

																				obj_t BgL_cdrzd21488zd2_879;

																				BgL_carzd21487zd2_878 =
																					CAR(BgL_cdrzd21481zd2_875);
																				BgL_cdrzd21488zd2_879 =
																					CDR(BgL_cdrzd21481zd2_875);
																				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21487zd2_878))
																					{	/* Expand/let.scm 86 */
																						if (NULLP(BgL_cdrzd21488zd2_879))
																							{	/* Expand/let.scm 86 */
																								obj_t BgL_carzd21502zd2_883;

																								BgL_carzd21502zd2_883 =
																									CAR(BgL_cdrzd21463zd2_868);
																								if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21502zd2_883))
																									{	/* Expand/let.scm 86 */
																										BgL_ez00_1037 =
																											BgL_ez00_854;
																										BgL_bindingsz00_1038 =
																											BgL_carzd21502zd2_883;
																										BgL_bodyz00_1039 =
																											CDR
																											(BgL_cdrzd21463zd2_868);
																									BgL_zc3anonymousza33435ze3z83_1040:
																										{	/* Expand/let.scm 72 */
																											obj_t BgL_varsz00_1041;

																											if (NULLP
																												(BgL_bindingsz00_1038))
																												{	/* Expand/let.scm 72 */
																													BgL_varsz00_1041 =
																														BNIL;
																												}
																											else
																												{	/* Expand/let.scm 72 */
																													obj_t
																														BgL_head3262z00_1075;
																													BgL_head3262z00_1075 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													{
																														obj_t
																															BgL_l3260z00_1077;
																														obj_t
																															BgL_tail3263z00_1078;
																														BgL_l3260z00_1077 =
																															BgL_bindingsz00_1038;
																														BgL_tail3263z00_1078
																															=
																															BgL_head3262z00_1075;
																													BgL_zc3anonymousza33460ze3z83_1079:
																														if (NULLP
																															(BgL_l3260z00_1077))
																															{	/* Expand/let.scm 72 */
																																BgL_varsz00_1041
																																	=
																																	CDR
																																	(BgL_head3262z00_1075);
																															}
																														else
																															{	/* Expand/let.scm 72 */
																																obj_t
																																	BgL_newtail3264z00_1081;
																																{	/* Expand/let.scm 72 */
																																	obj_t
																																		BgL_arg3463z00_1083;
																																	{	/* Expand/let.scm 72 */
																																		obj_t
																																			BgL_xz00_1085;
																																		BgL_xz00_1085
																																			=
																																			CAR
																																			(BgL_l3260z00_1077);
																																		{
																																			obj_t
																																				BgL_valz00_1086;
																																			if (PAIRP
																																				(BgL_xz00_1085))
																																				{	/* Expand/let.scm 73 */
																																					obj_t
																																						BgL_cdrzd21448zd2_1092;
																																					BgL_cdrzd21448zd2_1092
																																						=
																																						CDR
																																						(BgL_xz00_1085);
																																					if (PAIRP(BgL_cdrzd21448zd2_1092))
																																						{	/* Expand/let.scm 73 */
																																							if (NULLP(CDR(BgL_cdrzd21448zd2_1092)))
																																								{	/* Expand/let.scm 73 */
																																									BgL_valz00_1086
																																										=
																																										CAR
																																										(BgL_cdrzd21448zd2_1092);
																																									{	/* Expand/let.scm 74 */
																																										obj_t
																																											BgL_arg3473z00_1100;
																																										obj_t
																																											BgL_arg3474z00_1101;
																																										BgL_arg3473z00_1100
																																											=
																																											CDR
																																											(BgL_xz00_1085);
																																										BgL_arg3474z00_1101
																																											=
																																											PROCEDURE_ENTRY
																																											(BgL_ez00_1037)
																																											(BgL_ez00_1037,
																																											BgL_valz00_1086,
																																											BgL_ez00_1037,
																																											BEOA);
																																										SET_CAR
																																											(BgL_arg3473z00_1100,
																																											BgL_arg3474z00_1101);
																																									}
																																									BgL_arg3463z00_1083
																																										=
																																										BgL_xz00_1085;
																																								}
																																							else
																																								{	/* Expand/let.scm 73 */
																																								BgL_tagzd21443zd2_1089:
																																									BgL_arg3463z00_1083 = BGl_errorz00zz__errorz00(BFALSE, BGl_string3703z00zzexpand_letz00, BgL_xz00_1085);
																																								}
																																						}
																																					else
																																						{	/* Expand/let.scm 73 */
																																							goto
																																								BgL_tagzd21443zd2_1089;
																																						}
																																				}
																																			else
																																				{	/* Expand/let.scm 73 */
																																					if (SYMBOLP(BgL_xz00_1085))
																																						{	/* Expand/let.scm 73 */
																																							{	/* Expand/let.scm 75 */
																																								obj_t
																																									BgL_list3475z00_1102;
																																								{	/* Expand/let.scm 75 */
																																									obj_t
																																										BgL_arg3476z00_1103;
																																									BgL_arg3476z00_1103
																																										=
																																										MAKE_PAIR
																																										(BUNSPEC,
																																										BNIL);
																																									BgL_list3475z00_1102
																																										=
																																										MAKE_PAIR
																																										(BgL_xz00_1085,
																																										BgL_arg3476z00_1103);
																																								}
																																								BgL_arg3463z00_1083
																																									=
																																									BgL_list3475z00_1102;
																																							}
																																						}
																																					else
																																						{	/* Expand/let.scm 73 */
																																							goto
																																								BgL_tagzd21443zd2_1089;
																																						}
																																				}
																																		}
																																	}
																																	BgL_newtail3264z00_1081
																																		=
																																		MAKE_PAIR
																																		(BgL_arg3463z00_1083,
																																		BNIL);
																																}
																																SET_CDR
																																	(BgL_tail3263z00_1078,
																																	BgL_newtail3264z00_1081);
																																{
																																	obj_t
																																		BgL_tail3263z00_2337;
																																	obj_t
																																		BgL_l3260z00_2335;
																																	BgL_l3260z00_2335
																																		=
																																		CDR
																																		(BgL_l3260z00_1077);
																																	BgL_tail3263z00_2337
																																		=
																																		BgL_newtail3264z00_1081;
																																	BgL_tail3263z00_1078
																																		=
																																		BgL_tail3263z00_2337;
																																	BgL_l3260z00_1077
																																		=
																																		BgL_l3260z00_2335;
																																	goto
																																		BgL_zc3anonymousza33460ze3z83_1079;
																																}
																															}
																													}
																												}
																											{	/* Expand/let.scm 78 */
																												obj_t
																													BgL_arg3436z00_1042;
																												obj_t
																													BgL_arg3437z00_1043;
																												BgL_arg3436z00_1042 =
																													CNST_TABLE_REF(((long)
																														0));
																												{	/* Expand/let.scm 79 */
																													obj_t
																														BgL_arg3438z00_1044;
																													{	/* Expand/let.scm 79 */
																														obj_t
																															BgL_arg3443z00_1048;
																														obj_t
																															BgL_arg3444z00_1049;
																														obj_t
																															BgL_arg3445z00_1050;
																														if (NULLP
																															(BgL_varsz00_1041))
																															{	/* Expand/let.scm 79 */
																																BgL_arg3443z00_1048
																																	= BNIL;
																															}
																														else
																															{	/* Expand/let.scm 79 */
																																obj_t
																																	BgL_head3267z00_1054;
																																BgL_head3267z00_1054
																																	=
																																	MAKE_PAIR(CAR
																																	(CAR
																																		(BgL_varsz00_1041)),
																																	BNIL);
																																{	/* Expand/let.scm 79 */
																																	obj_t
																																		BgL_g3270z00_1055;
																																	BgL_g3270z00_1055
																																		=
																																		CDR
																																		(BgL_varsz00_1041);
																																	{
																																		obj_t
																																			BgL_l3265z00_1057;
																																		obj_t
																																			BgL_tail3268z00_1058;
																																		BgL_l3265z00_1057
																																			=
																																			BgL_g3270z00_1055;
																																		BgL_tail3268z00_1058
																																			=
																																			BgL_head3267z00_1054;
																																	BgL_zc3anonymousza33448ze3z83_1059:
																																		if (NULLP
																																			(BgL_l3265z00_1057))
																																			{	/* Expand/let.scm 79 */
																																				BgL_arg3443z00_1048
																																					=
																																					BgL_head3267z00_1054;
																																			}
																																		else
																																			{	/* Expand/let.scm 79 */
																																				obj_t
																																					BgL_newtail3269z00_1061;
																																				BgL_newtail3269z00_1061
																																					=
																																					MAKE_PAIR
																																					(CAR
																																					(CAR
																																						(BgL_l3265z00_1057)),
																																					BNIL);
																																				SET_CDR
																																					(BgL_tail3268z00_1058,
																																					BgL_newtail3269z00_1061);
																																				{
																																					obj_t
																																						BgL_tail3268z00_2353;
																																					obj_t
																																						BgL_l3265z00_2351;
																																					BgL_l3265z00_2351
																																						=
																																						CDR
																																						(BgL_l3265z00_1057);
																																					BgL_tail3268z00_2353
																																						=
																																						BgL_newtail3269z00_1061;
																																					BgL_tail3268z00_1058
																																						=
																																						BgL_tail3268z00_2353;
																																					BgL_l3265z00_1057
																																						=
																																						BgL_l3265z00_2351;
																																					goto
																																						BgL_zc3anonymousza33448ze3z83_1059;
																																				}
																																			}
																																	}
																																}
																															}
																														BgL_arg3444z00_1049
																															=
																															CNST_TABLE_REF((
																																(long) 4));
																														BgL_arg3445z00_1050
																															=
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_xz00_17);
																														{	/* Expand/let.scm 82 */
																															obj_t
																																BgL_zc3anonymousza33457ze3z83_2163;
																															BgL_zc3anonymousza33457ze3z83_2163
																																=
																																make_fx_procedure
																																(BGl_zc3anonymousza33457ze3z83zzexpand_letz00,
																																(int) (((long)
																																		0)),
																																(int) (((long)
																																		2)));
																															PROCEDURE_SET
																																(BgL_zc3anonymousza33457ze3z83_2163,
																																(int) (((long)
																																		0)),
																																BgL_bodyz00_1039);
																															PROCEDURE_SET
																																(BgL_zc3anonymousza33457ze3z83_2163,
																																(int) (((long)
																																		1)),
																																BgL_ez00_1037);
																															BgL_arg3438z00_1044
																																=
																																BGl_withzd2lexicalzd2zzexpand_epsz00
																																(BgL_arg3443z00_1048,
																																BgL_arg3444z00_1049,
																																BgL_arg3445z00_1050,
																																BgL_zc3anonymousza33457ze3z83_2163);
																													}}
																													{	/* Expand/let.scm 78 */
																														obj_t
																															BgL_list3440z00_1046;
																														{	/* Expand/let.scm 78 */
																															obj_t
																																BgL_arg3441z00_1047;
																															BgL_arg3441z00_1047
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list3440z00_1046
																																=
																																MAKE_PAIR
																																(BgL_arg3438z00_1044,
																																BgL_arg3441z00_1047);
																														}
																														BgL_arg3437z00_1043
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_varsz00_1041,
																															BgL_list3440z00_1046);
																												}}
																												BgL_resz00_855 =
																													MAKE_PAIR
																													(BgL_arg3436z00_1042,
																													BgL_arg3437z00_1043);
																									}}}
																								else
																									{	/* Expand/let.scm 86 */
																									BgL_tagzd21456zd2_865:
																										BgL_resz00_855 =
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string3704z00zzexpand_letz00,
																											BgL_xz00_17);
																									}
																							}
																						else
																							{	/* Expand/let.scm 86 */
																								BgL_ez00_926 = BgL_ez00_854;
																								BgL_loopz00_927 =
																									BgL_carzd21480zd2_874;
																								BgL_bindingsz00_928 =
																									BgL_carzd21487zd2_878;
																								BgL_bodyz00_929 =
																									BgL_cdrzd21488zd2_879;
																							BgL_zc3anonymousza33365ze3z83_930:
																								{	/* Expand/let.scm 55 */
																									obj_t BgL_varsz00_931;

																									if (NULLP
																										(BgL_bindingsz00_928))
																										{	/* Expand/let.scm 55 */
																											BgL_varsz00_931 = BNIL;
																										}
																									else
																										{	/* Expand/let.scm 55 */
																											obj_t
																												BgL_head3245z00_1011;
																											BgL_head3245z00_1011 =
																												MAKE_PAIR(BNIL, BNIL);
																											{
																												obj_t BgL_l3243z00_1013;

																												obj_t
																													BgL_tail3246z00_1014;
																												BgL_l3243z00_1013 =
																													BgL_bindingsz00_928;
																												BgL_tail3246z00_1014 =
																													BgL_head3245z00_1011;
																											BgL_zc3anonymousza33422ze3z83_1015:
																												if (NULLP
																													(BgL_l3243z00_1013))
																													{	/* Expand/let.scm 55 */
																														BgL_varsz00_931 =
																															CDR
																															(BgL_head3245z00_1011);
																													}
																												else
																													{	/* Expand/let.scm 55 */
																														obj_t
																															BgL_newtail3247z00_1017;
																														{	/* Expand/let.scm 55 */
																															obj_t
																																BgL_arg3425z00_1019;
																															{	/* Expand/let.scm 55 */
																																obj_t
																																	BgL_xz00_1021;
																																BgL_xz00_1021 =
																																	CAR
																																	(BgL_l3243z00_1013);
																																{
																																	obj_t
																																		BgL_valz00_1022;
																																	if (PAIRP
																																		(BgL_xz00_1021))
																																		{	/* Expand/let.scm 56 */
																																			obj_t
																																				BgL_cdrzd21436zd2_1027;
																																			BgL_cdrzd21436zd2_1027
																																				=
																																				CDR
																																				(BgL_xz00_1021);
																																			if (PAIRP
																																				(BgL_cdrzd21436zd2_1027))
																																				{	/* Expand/let.scm 56 */
																																					if (NULLP(CDR(BgL_cdrzd21436zd2_1027)))
																																						{	/* Expand/let.scm 56 */
																																							BgL_valz00_1022
																																								=
																																								CAR
																																								(BgL_cdrzd21436zd2_1027);
																																							if (PAIRP(BgL_valz00_1022))
																																								{	/* Expand/let.scm 59 */
																																									obj_t
																																										BgL_arg3433z00_1033;
																																									{	/* Expand/let.scm 59 */

																																										{	/* Expand/let.scm 59 */

																																											BgL_arg3433z00_1033
																																												=
																																												BGl_gensymz00zz__r4_symbols_6_4z00
																																												(BFALSE);
																																										}
																																									}
																																									BgL_arg3425z00_1019
																																										=
																																										MAKE_PAIR
																																										(BTRUE,
																																										BgL_arg3433z00_1033);
																																								}
																																							else
																																								{	/* Expand/let.scm 60 */
																																									obj_t
																																										BgL_arg3434z00_1035;
																																									{	/* Expand/let.scm 60 */
																																										obj_t
																																											BgL_pairz00_1890;
																																										BgL_pairz00_1890
																																											=
																																											BgL_xz00_1021;
																																										BgL_arg3434z00_1035
																																											=
																																											CAR
																																											(CDR
																																											(BgL_pairz00_1890));
																																									}
																																									BgL_arg3425z00_1019
																																										=
																																										MAKE_PAIR
																																										(BFALSE,
																																										BgL_arg3434z00_1035);
																																								}
																																						}
																																					else
																																						{	/* Expand/let.scm 56 */
																																						BgL_tagzd21431zd2_1024:
																																							BgL_arg3425z00_1019 = BGl_errorz00zz__errorz00(BFALSE, BGl_string3701z00zzexpand_letz00, BgL_xz00_1021);
																																						}
																																				}
																																			else
																																				{	/* Expand/let.scm 56 */
																																					goto
																																						BgL_tagzd21431zd2_1024;
																																				}
																																		}
																																	else
																																		{	/* Expand/let.scm 56 */
																																			goto
																																				BgL_tagzd21431zd2_1024;
																																		}
																																}
																															}
																															BgL_newtail3247z00_1017
																																=
																																MAKE_PAIR
																																(BgL_arg3425z00_1019,
																																BNIL);
																														}
																														SET_CDR
																															(BgL_tail3246z00_1014,
																															BgL_newtail3247z00_1017);
																														{
																															obj_t
																																BgL_tail3246z00_2398;
																															obj_t
																																BgL_l3243z00_2396;
																															BgL_l3243z00_2396
																																=
																																CDR
																																(BgL_l3243z00_1013);
																															BgL_tail3246z00_2398
																																=
																																BgL_newtail3247z00_1017;
																															BgL_tail3246z00_1014
																																=
																																BgL_tail3246z00_2398;
																															BgL_l3243z00_1013
																																=
																																BgL_l3243z00_2396;
																															goto
																																BgL_zc3anonymousza33422ze3z83_1015;
																														}
																													}
																											}
																										}
																									{	/* Expand/let.scm 55 */
																										obj_t BgL_auxz00_932;

																										{	/* Expand/let.scm 64 */
																											obj_t
																												BgL_list3416z00_1000;
																											{	/* Expand/let.scm 64 */
																												obj_t
																													BgL_arg3417z00_1001;
																												BgL_arg3417z00_1001 =
																													MAKE_PAIR
																													(BgL_bindingsz00_928,
																													BNIL);
																												BgL_list3416z00_1000 =
																													MAKE_PAIR
																													(BgL_varsz00_931,
																													BgL_arg3417z00_1001);
																											}
																											BgL_auxz00_932 =
																												BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																												(BGl_proc3702z00zzexpand_letz00,
																												BgL_list3416z00_1000);
																										}
																										{	/* Expand/let.scm 64 */
																											obj_t BgL_recz00_933;

																											{	/* Expand/let.scm 67 */
																												obj_t
																													BgL_arg3372z00_940;
																												obj_t
																													BgL_arg3373z00_941;
																												BgL_arg3372z00_940 =
																													CNST_TABLE_REF(((long)
																														2));
																												{	/* Expand/let.scm 67 */
																													obj_t
																														BgL_arg3374z00_942;
																													obj_t
																														BgL_arg3375z00_943;
																													{	/* Expand/let.scm 67 */
																														obj_t
																															BgL_arg3379z00_947;
																														{	/* Expand/let.scm 67 */
																															obj_t
																																BgL_arg3381z00_949;
																															{	/* Expand/let.scm 67 */
																																obj_t
																																	BgL_arg3382z00_950;
																																{	/* Expand/let.scm 67 */
																																	obj_t
																																		BgL_arg3385z00_953;
																																	obj_t
																																		BgL_arg3386z00_954;
																																	BgL_arg3385z00_953
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			3));
																																	{	/* Expand/let.scm 67 */
																																		obj_t
																																			BgL_arg3387z00_955;
																																		obj_t
																																			BgL_arg3388z00_956;
																																		if (NULLP
																																			(BgL_bindingsz00_928))
																																			{	/* Expand/let.scm 67 */
																																				BgL_arg3387z00_955
																																					=
																																					BNIL;
																																			}
																																		else
																																			{	/* Expand/let.scm 67 */
																																				obj_t
																																					BgL_head3250z00_962;
																																				BgL_head3250z00_962
																																					=
																																					MAKE_PAIR
																																					(CAR
																																					(CAR
																																						(BgL_bindingsz00_928)),
																																					BNIL);
																																				{	/* Expand/let.scm 67 */
																																					obj_t
																																						BgL_g3253z00_963;
																																					BgL_g3253z00_963
																																						=
																																						CDR
																																						(BgL_bindingsz00_928);
																																					{
																																						obj_t
																																							BgL_l3248z00_965;
																																						obj_t
																																							BgL_tail3251z00_966;
																																						BgL_l3248z00_965
																																							=
																																							BgL_g3253z00_963;
																																						BgL_tail3251z00_966
																																							=
																																							BgL_head3250z00_962;
																																					BgL_zc3anonymousza33393ze3z83_967:
																																						if (NULLP(BgL_l3248z00_965))
																																							{	/* Expand/let.scm 67 */
																																								BgL_arg3387z00_955
																																									=
																																									BgL_head3250z00_962;
																																							}
																																						else
																																							{	/* Expand/let.scm 67 */
																																								obj_t
																																									BgL_newtail3252z00_969;
																																								BgL_newtail3252z00_969
																																									=
																																									MAKE_PAIR
																																									(CAR
																																									(CAR
																																										(BgL_l3248z00_965)),
																																									BNIL);
																																								SET_CDR
																																									(BgL_tail3251z00_966,
																																									BgL_newtail3252z00_969);
																																								{
																																									obj_t
																																										BgL_tail3251z00_2418;
																																									obj_t
																																										BgL_l3248z00_2416;
																																									BgL_l3248z00_2416
																																										=
																																										CDR
																																										(BgL_l3248z00_965);
																																									BgL_tail3251z00_2418
																																										=
																																										BgL_newtail3252z00_969;
																																									BgL_tail3251z00_966
																																										=
																																										BgL_tail3251z00_2418;
																																									BgL_l3248z00_965
																																										=
																																										BgL_l3248z00_2416;
																																									goto
																																										BgL_zc3anonymousza33393ze3z83_967;
																																								}
																																							}
																																					}
																																				}
																																			}
																																		BgL_arg3388z00_956
																																			=
																																			BGl_expandzd2prognzd2zz__prognz00
																																			(BgL_bodyz00_929);
																																		{	/* Expand/let.scm 67 */
																																			obj_t
																																				BgL_list3390z00_958;
																																			{	/* Expand/let.scm 67 */
																																				obj_t
																																					BgL_arg3391z00_959;
																																				BgL_arg3391z00_959
																																					=
																																					MAKE_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_list3390z00_958
																																					=
																																					MAKE_PAIR
																																					(BgL_arg3388z00_956,
																																					BgL_arg3391z00_959);
																																			}
																																			BgL_arg3386z00_954
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg3387z00_955,
																																				BgL_list3390z00_958);
																																		}
																																	}
																																	BgL_arg3382z00_950
																																		=
																																		MAKE_PAIR
																																		(BgL_arg3385z00_953,
																																		BgL_arg3386z00_954);
																																}
																																{	/* Expand/let.scm 67 */
																																	obj_t
																																		BgL_list3384z00_952;
																																	BgL_list3384z00_952
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg3381z00_949
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg3382z00_950,
																																		BgL_list3384z00_952);
																																}
																															}
																															BgL_arg3379z00_947
																																=
																																MAKE_PAIR
																																(BgL_loopz00_927,
																																BgL_arg3381z00_949);
																														}
																														BgL_arg3374z00_942 =
																															MAKE_PAIR
																															(BgL_arg3379z00_947,
																															BNIL);
																													}
																													{	/* Expand/let.scm 68 */
																														obj_t
																															BgL_arg3402z00_978;
																														{	/* Expand/let.scm 68 */
																															obj_t
																																BgL_arg3403z00_979;
																															if (NULLP
																																(BgL_varsz00_931))
																																{	/* Expand/let.scm 68 */
																																	BgL_arg3403z00_979
																																		= BNIL;
																																}
																															else
																																{	/* Expand/let.scm 68 */
																																	obj_t
																																		BgL_head3256z00_983;
																																	BgL_head3256z00_983
																																		=
																																		MAKE_PAIR
																																		(CDR(CAR
																																			(BgL_varsz00_931)),
																																		BNIL);
																																	{	/* Expand/let.scm 68 */
																																		obj_t
																																			BgL_g3259z00_984;
																																		BgL_g3259z00_984
																																			=
																																			CDR
																																			(BgL_varsz00_931);
																																		{
																																			obj_t
																																				BgL_l3254z00_986;
																																			obj_t
																																				BgL_tail3257z00_987;
																																			BgL_l3254z00_986
																																				=
																																				BgL_g3259z00_984;
																																			BgL_tail3257z00_987
																																				=
																																				BgL_head3256z00_983;
																																		BgL_zc3anonymousza33406ze3z83_988:
																																			if (NULLP
																																				(BgL_l3254z00_986))
																																				{	/* Expand/let.scm 68 */
																																					BgL_arg3403z00_979
																																						=
																																						BgL_head3256z00_983;
																																				}
																																			else
																																				{	/* Expand/let.scm 68 */
																																					obj_t
																																						BgL_newtail3258z00_990;
																																					BgL_newtail3258z00_990
																																						=
																																						MAKE_PAIR
																																						(CDR
																																						(CAR
																																							(BgL_l3254z00_986)),
																																						BNIL);
																																					SET_CDR
																																						(BgL_tail3257z00_987,
																																						BgL_newtail3258z00_990);
																																					{
																																						obj_t
																																							BgL_tail3257z00_2442;
																																						obj_t
																																							BgL_l3254z00_2440;
																																						BgL_l3254z00_2440
																																							=
																																							CDR
																																							(BgL_l3254z00_986);
																																						BgL_tail3257z00_2442
																																							=
																																							BgL_newtail3258z00_990;
																																						BgL_tail3257z00_987
																																							=
																																							BgL_tail3257z00_2442;
																																						BgL_l3254z00_986
																																							=
																																							BgL_l3254z00_2440;
																																						goto
																																							BgL_zc3anonymousza33406ze3z83_988;
																																					}
																																				}
																																		}
																																	}
																																}
																															BgL_arg3402z00_978
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg3403z00_979,
																																BNIL);
																														}
																														BgL_arg3375z00_943 =
																															MAKE_PAIR
																															(BgL_loopz00_927,
																															BgL_arg3402z00_978);
																													}
																													{	/* Expand/let.scm 67 */
																														obj_t
																															BgL_list3377z00_945;
																														{	/* Expand/let.scm 67 */
																															obj_t
																																BgL_arg3378z00_946;
																															BgL_arg3378z00_946
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list3377z00_945
																																=
																																MAKE_PAIR
																																(BgL_arg3375z00_943,
																																BgL_arg3378z00_946);
																														}
																														BgL_arg3373z00_941 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg3374z00_942,
																															BgL_list3377z00_945);
																													}
																												}
																												BgL_recz00_933 =
																													MAKE_PAIR
																													(BgL_arg3372z00_940,
																													BgL_arg3373z00_941);
																											}
																											{	/* Expand/let.scm 67 */
																												obj_t BgL_expz00_934;

																												if (PAIRP
																													(BgL_auxz00_932))
																													{	/* Expand/let.scm 69 */
																														obj_t
																															BgL_arg3367z00_936;
																														obj_t
																															BgL_arg3368z00_937;
																														BgL_arg3367z00_936 =
																															CNST_TABLE_REF((
																																(long) 0));
																														{	/* Expand/let.scm 69 */
																															obj_t
																																BgL_list3369z00_938;
																															{	/* Expand/let.scm 69 */
																																obj_t
																																	BgL_arg3371z00_939;
																																BgL_arg3371z00_939
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list3369z00_938
																																	=
																																	MAKE_PAIR
																																	(BgL_recz00_933,
																																	BgL_arg3371z00_939);
																															}
																															BgL_arg3368z00_937
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_auxz00_932,
																																BgL_list3369z00_938);
																														}
																														BgL_expz00_934 =
																															MAKE_PAIR
																															(BgL_arg3367z00_936,
																															BgL_arg3368z00_937);
																													}
																												else
																													{	/* Expand/let.scm 69 */
																														BgL_expz00_934 =
																															BgL_recz00_933;
																													}
																												{	/* Expand/let.scm 69 */

																													BgL_resz00_855 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_926)
																														(BgL_ez00_926,
																														BgL_expz00_934,
																														BgL_ez00_926, BEOA);
																												}
																											}
																										}
																									}
																								}
																							}
																					}
																				else
																					{	/* Expand/let.scm 86 */
																						obj_t BgL_carzd21517zd2_887;

																						BgL_carzd21517zd2_887 =
																							CAR(BgL_cdrzd21463zd2_868);
																						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21517zd2_887))
																							{
																								obj_t BgL_bodyz00_2463;

																								obj_t BgL_bindingsz00_2462;

																								obj_t BgL_ez00_2461;

																								BgL_ez00_2461 = BgL_ez00_854;
																								BgL_bindingsz00_2462 =
																									BgL_carzd21517zd2_887;
																								BgL_bodyz00_2463 =
																									CDR(BgL_cdrzd21463zd2_868);
																								BgL_bodyz00_1039 =
																									BgL_bodyz00_2463;
																								BgL_bindingsz00_1038 =
																									BgL_bindingsz00_2462;
																								BgL_ez00_1037 = BgL_ez00_2461;
																								goto
																									BgL_zc3anonymousza33435ze3z83_1040;
																							}
																						else
																							{	/* Expand/let.scm 86 */
																								goto BgL_tagzd21456zd2_865;
																							}
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd21456zd2_865;
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		goto BgL_tagzd21456zd2_865;
																	}
															}
														else
															{	/* Expand/let.scm 86 */
																BgL_bodyz00_856 = BgL_cdrzd21466zd2_870;
																{	/* Expand/let.scm 89 */
																	obj_t BgL_arg3357z00_918;

																	obj_t BgL_arg3358z00_919;

																	BgL_arg3357z00_918 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Expand/let.scm 89 */
																		obj_t BgL_arg3360z00_921;

																		{	/* Expand/let.scm 89 */
																			obj_t BgL_arg3364z00_925;

																			BgL_arg3364z00_925 =
																				BGl_expandzd2prognzd2zz__prognz00
																				(BgL_bodyz00_856);
																			BgL_arg3360z00_921 =
																				PROCEDURE_ENTRY(BgL_ez00_854)
																				(BgL_ez00_854, BgL_arg3364z00_925,
																				BgL_ez00_854, BEOA);
																		}
																		{	/* Expand/let.scm 89 */
																			obj_t BgL_list3362z00_923;

																			{	/* Expand/let.scm 89 */
																				obj_t BgL_arg3363z00_924;

																				BgL_arg3363z00_924 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3362z00_923 =
																					MAKE_PAIR(BgL_arg3360z00_921,
																					BgL_arg3363z00_924);
																			}
																			BgL_arg3358z00_919 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BNIL, BgL_list3362z00_923);
																	}}
																	BgL_resz00_855 =
																		MAKE_PAIR(BgL_arg3357z00_918,
																		BgL_arg3358z00_919);
													}}}
												else
													{	/* Expand/let.scm 86 */
														obj_t BgL_carzd21543zd2_891;

														obj_t BgL_cdrzd21544zd2_892;

														BgL_carzd21543zd2_891 = CAR(BgL_cdrzd21463zd2_868);
														BgL_cdrzd21544zd2_892 = CDR(BgL_cdrzd21463zd2_868);
														if (SYMBOLP(BgL_carzd21543zd2_891))
															{	/* Expand/let.scm 86 */
																if (PAIRP(BgL_cdrzd21544zd2_892))
																	{	/* Expand/let.scm 86 */
																		obj_t BgL_carzd21550zd2_895;

																		obj_t BgL_cdrzd21551zd2_896;

																		BgL_carzd21550zd2_895 =
																			CAR(BgL_cdrzd21544zd2_892);
																		BgL_cdrzd21551zd2_896 =
																			CDR(BgL_cdrzd21544zd2_892);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21550zd2_895))
																			{	/* Expand/let.scm 86 */
																				if (NULLP(BgL_cdrzd21551zd2_896))
																					{	/* Expand/let.scm 86 */
																						obj_t BgL_carzd21567zd2_900;

																						BgL_carzd21567zd2_900 =
																							CAR(BgL_cdrzd21463zd2_868);
																						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21567zd2_900))
																							{
																								obj_t BgL_bodyz00_2490;

																								obj_t BgL_bindingsz00_2489;

																								obj_t BgL_ez00_2488;

																								BgL_ez00_2488 = BgL_ez00_854;
																								BgL_bindingsz00_2489 =
																									BgL_carzd21567zd2_900;
																								BgL_bodyz00_2490 =
																									CDR(BgL_cdrzd21463zd2_868);
																								BgL_bodyz00_1039 =
																									BgL_bodyz00_2490;
																								BgL_bindingsz00_1038 =
																									BgL_bindingsz00_2489;
																								BgL_ez00_1037 = BgL_ez00_2488;
																								goto
																									BgL_zc3anonymousza33435ze3z83_1040;
																							}
																						else
																							{	/* Expand/let.scm 86 */
																								goto BgL_tagzd21456zd2_865;
																							}
																					}
																				else
																					{
																						obj_t BgL_bodyz00_2495;

																						obj_t BgL_bindingsz00_2494;

																						obj_t BgL_loopz00_2493;

																						obj_t BgL_ez00_2492;

																						BgL_ez00_2492 = BgL_ez00_854;
																						BgL_loopz00_2493 =
																							BgL_carzd21543zd2_891;
																						BgL_bindingsz00_2494 =
																							BgL_carzd21550zd2_895;
																						BgL_bodyz00_2495 =
																							BgL_cdrzd21551zd2_896;
																						BgL_bodyz00_929 = BgL_bodyz00_2495;
																						BgL_bindingsz00_928 =
																							BgL_bindingsz00_2494;
																						BgL_loopz00_927 = BgL_loopz00_2493;
																						BgL_ez00_926 = BgL_ez00_2492;
																						goto
																							BgL_zc3anonymousza33365ze3z83_930;
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				obj_t BgL_carzd21586zd2_904;

																				BgL_carzd21586zd2_904 =
																					CAR(BgL_cdrzd21463zd2_868);
																				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21586zd2_904))
																					{
																						obj_t BgL_bodyz00_2501;

																						obj_t BgL_bindingsz00_2500;

																						obj_t BgL_ez00_2499;

																						BgL_ez00_2499 = BgL_ez00_854;
																						BgL_bindingsz00_2500 =
																							BgL_carzd21586zd2_904;
																						BgL_bodyz00_2501 =
																							CDR(BgL_cdrzd21463zd2_868);
																						BgL_bodyz00_1039 = BgL_bodyz00_2501;
																						BgL_bindingsz00_1038 =
																							BgL_bindingsz00_2500;
																						BgL_ez00_1037 = BgL_ez00_2499;
																						goto
																							BgL_zc3anonymousza33435ze3z83_1040;
																					}
																				else
																					{	/* Expand/let.scm 86 */
																						goto BgL_tagzd21456zd2_865;
																					}
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		obj_t BgL_carzd21605zd2_908;

																		obj_t BgL_cdrzd21606zd2_909;

																		BgL_carzd21605zd2_908 =
																			CAR(BgL_cdrzd21463zd2_868);
																		BgL_cdrzd21606zd2_909 =
																			CDR(BgL_cdrzd21463zd2_868);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21605zd2_908))
																			{	/* Expand/let.scm 86 */
																				if (NULLP(BgL_cdrzd21606zd2_909))
																					{	/* Expand/let.scm 86 */
																						goto BgL_tagzd21456zd2_865;
																					}
																				else
																					{
																						obj_t BgL_bodyz00_2511;

																						obj_t BgL_bindingsz00_2510;

																						obj_t BgL_ez00_2509;

																						BgL_ez00_2509 = BgL_ez00_854;
																						BgL_bindingsz00_2510 =
																							BgL_carzd21605zd2_908;
																						BgL_bodyz00_2511 =
																							BgL_cdrzd21606zd2_909;
																						BgL_bodyz00_1039 = BgL_bodyz00_2511;
																						BgL_bindingsz00_1038 =
																							BgL_bindingsz00_2510;
																						BgL_ez00_1037 = BgL_ez00_2509;
																						goto
																							BgL_zc3anonymousza33435ze3z83_1040;
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd21456zd2_865;
																			}
																	}
															}
														else
															{	/* Expand/let.scm 86 */
																obj_t BgL_carzd21622zd2_913;

																obj_t BgL_cdrzd21623zd2_914;

																BgL_carzd21622zd2_913 =
																	CAR(BgL_cdrzd21463zd2_868);
																BgL_cdrzd21623zd2_914 =
																	CDR(BgL_cdrzd21463zd2_868);
																if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																	(BgL_carzd21622zd2_913))
																	{	/* Expand/let.scm 86 */
																		if (NULLP(BgL_cdrzd21623zd2_914))
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd21456zd2_865;
																			}
																		else
																			{
																				obj_t BgL_bodyz00_2520;

																				obj_t BgL_bindingsz00_2519;

																				obj_t BgL_ez00_2518;

																				BgL_ez00_2518 = BgL_ez00_854;
																				BgL_bindingsz00_2519 =
																					BgL_carzd21622zd2_913;
																				BgL_bodyz00_2520 =
																					BgL_cdrzd21623zd2_914;
																				BgL_bodyz00_1039 = BgL_bodyz00_2520;
																				BgL_bindingsz00_1038 =
																					BgL_bindingsz00_2519;
																				BgL_ez00_1037 = BgL_ez00_2518;
																				goto BgL_zc3anonymousza33435ze3z83_1040;
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		goto BgL_tagzd21456zd2_865;
																	}
															}
													}
											}
										else
											{	/* Expand/let.scm 86 */
												goto BgL_tagzd21456zd2_865;
											}
									}
								else
									{	/* Expand/let.scm 86 */
										goto BgL_tagzd21456zd2_865;
									}
							}
							{	/* Expand/let.scm 86 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_853;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_17,
									BgL_resz00_855);
							}
						}
					}
				}
			}
		}
	}



/* _expand-let */
	obj_t BGl__expandzd2letzd2zzexpand_letz00(obj_t BgL_envz00_2165,
		obj_t BgL_xz00_2166, obj_t BgL_ez00_2167)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 53 */
			return BGl_expandzd2letzd2zzexpand_letz00(BgL_xz00_2166, BgL_ez00_2167);
		}
	}



/* <anonymous:3457> */
	obj_t BGl_zc3anonymousza33457ze3z83zzexpand_letz00(obj_t BgL_envz00_2168)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 82 */
			{	/* Expand/let.scm 82 */
				obj_t BgL_bodyz00_2169;

				obj_t BgL_ez00_2170;

				BgL_bodyz00_2169 = PROCEDURE_REF(BgL_envz00_2168, (int) (((long) 0)));
				BgL_ez00_2170 = PROCEDURE_REF(BgL_envz00_2168, (int) (((long) 1)));
				{

					{	/* Expand/let.scm 82 */
						obj_t BgL_arg3458z00_1071;

						BgL_arg3458z00_1071 =
							BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2169);
						return
							PROCEDURE_ENTRY(BgL_ez00_2170) (BgL_ez00_2170,
							BgL_arg3458z00_1071, BgL_ez00_2170, BEOA);
					}
				}
			}
		}
	}



/* <anonymous:3418> */
	obj_t BGl_zc3anonymousza33418ze3z83zzexpand_letz00(obj_t BgL_envz00_2171,
		obj_t BgL_xz00_2172, obj_t BgL_yz00_2173)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 64 */
			{
				obj_t BgL_xz00_1002;

				obj_t BgL_yz00_1003;

				BgL_xz00_1002 = BgL_xz00_2172;
				BgL_yz00_1003 = BgL_yz00_2173;
				{	/* Expand/let.scm 65 */
					obj_t BgL__andtest_3242z00_1005;

					BgL__andtest_3242z00_1005 = CAR(BgL_xz00_1002);
					if (CBOOL(BgL__andtest_3242z00_1005))
						{	/* Expand/let.scm 65 */
							return MAKE_PAIR(CDR(BgL_xz00_1002), CDR(BgL_yz00_1003));
						}
					else
						{	/* Expand/let.scm 65 */
							return BFALSE;
						}
				}
			}
		}
	}



/* expand-letrec */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letreczd2zzexpand_letz00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 104 */
			{
				obj_t BgL_ez00_1130;

				obj_t BgL_bindingsz00_1131;

				obj_t BgL_bodyz00_1132;

				{	/* Expand/let.scm 118 */
					obj_t BgL_oldzd2internalzd2_1108;

					BgL_oldzd2internalzd2_1108 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 120 */
						obj_t BgL_ez00_1109;

						BgL_ez00_1109 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_20);
						{	/* Expand/let.scm 120 */
							obj_t BgL_resz00_1110;

							{

								if (PAIRP(BgL_xz00_19))
									{	/* Expand/let.scm 121 */
										obj_t BgL_cdrzd21669zd2_1119;

										BgL_cdrzd21669zd2_1119 = CDR(BgL_xz00_19);
										if (PAIRP(BgL_cdrzd21669zd2_1119))
											{	/* Expand/let.scm 121 */
												obj_t BgL_cdrzd21672zd2_1121;

												BgL_cdrzd21672zd2_1121 = CDR(BgL_cdrzd21669zd2_1119);
												if (NULLP(CAR(BgL_cdrzd21669zd2_1119)))
													{	/* Expand/let.scm 121 */
														if (NULLP(BgL_cdrzd21672zd2_1121))
															{	/* Expand/let.scm 121 */
															BgL_tagzd21663zd2_1116:
																BgL_resz00_1110 =
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string3706z00zzexpand_letz00,
																	BgL_xz00_19);
															}
														else
															{	/* Expand/let.scm 121 */
																{	/* Expand/let.scm 121 */
																	obj_t BgL_pairz00_1978;

																	obj_t BgL_objz00_1979;

																	BgL_pairz00_1978 = BgL_xz00_19;
																	BgL_objz00_1979 = CNST_TABLE_REF(((long) 0));
																	SET_CAR(BgL_pairz00_1978, BgL_objz00_1979);
																}
																BgL_resz00_1110 =
																	PROCEDURE_ENTRY(BgL_ez00_1109) (BgL_ez00_1109,
																	BgL_xz00_19, BgL_ez00_1109, BEOA);
													}}
												else
													{	/* Expand/let.scm 121 */
														obj_t BgL_carzd21687zd2_1125;

														obj_t BgL_cdrzd21688zd2_1126;

														BgL_carzd21687zd2_1125 =
															CAR(BgL_cdrzd21669zd2_1119);
														BgL_cdrzd21688zd2_1126 =
															CDR(BgL_cdrzd21669zd2_1119);
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd21687zd2_1125))
															{	/* Expand/let.scm 121 */
																if (NULLP(BgL_cdrzd21688zd2_1126))
																	{	/* Expand/let.scm 121 */
																		goto BgL_tagzd21663zd2_1116;
																	}
																else
																	{	/* Expand/let.scm 121 */
																		BgL_ez00_1130 = BgL_ez00_1109;
																		BgL_bindingsz00_1131 =
																			BgL_carzd21687zd2_1125;
																		BgL_bodyz00_1132 = BgL_cdrzd21688zd2_1126;
																		{	/* Expand/let.scm 106 */
																			obj_t BgL_varsz00_1134;

																			if (NULLP(BgL_bindingsz00_1131))
																				{	/* Expand/let.scm 106 */
																					BgL_varsz00_1134 = BNIL;
																				}
																			else
																				{	/* Expand/let.scm 106 */
																					obj_t BgL_head3273z00_1168;

																					BgL_head3273z00_1168 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3271z00_1170;

																						obj_t BgL_tail3274z00_1171;

																						BgL_l3271z00_1170 =
																							BgL_bindingsz00_1131;
																						BgL_tail3274z00_1171 =
																							BgL_head3273z00_1168;
																					BgL_zc3anonymousza33508ze3z83_1172:
																						if (NULLP(BgL_l3271z00_1170))
																							{	/* Expand/let.scm 106 */
																								BgL_varsz00_1134 =
																									CDR(BgL_head3273z00_1168);
																							}
																						else
																							{	/* Expand/let.scm 106 */
																								obj_t BgL_newtail3275z00_1174;

																								{	/* Expand/let.scm 106 */
																									obj_t BgL_arg3511z00_1176;

																									{	/* Expand/let.scm 106 */
																										obj_t BgL_xz00_1178;

																										BgL_xz00_1178 =
																											CAR(BgL_l3271z00_1170);
																										{
																											obj_t BgL_valz00_1179;

																											if (PAIRP(BgL_xz00_1178))
																												{	/* Expand/let.scm 107 */
																													obj_t
																														BgL_cdrzd21656zd2_1185;
																													BgL_cdrzd21656zd2_1185
																														=
																														CDR(BgL_xz00_1178);
																													if (PAIRP
																														(BgL_cdrzd21656zd2_1185))
																														{	/* Expand/let.scm 107 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21656zd2_1185)))
																																{	/* Expand/let.scm 107 */
																																	BgL_valz00_1179
																																		=
																																		CAR
																																		(BgL_cdrzd21656zd2_1185);
																																	{	/* Expand/let.scm 108 */
																																		obj_t
																																			BgL_arg3522z00_1193;
																																		obj_t
																																			BgL_arg3523z00_1194;
																																		BgL_arg3522z00_1193
																																			=
																																			CDR
																																			(BgL_xz00_1178);
																																		BgL_arg3523z00_1194
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_ez00_1130)
																																			(BgL_ez00_1130,
																																			BgL_valz00_1179,
																																			BgL_ez00_1130,
																																			BEOA);
																																		SET_CAR
																																			(BgL_arg3522z00_1193,
																																			BgL_arg3523z00_1194);
																																	}
																																	BgL_arg3511z00_1176
																																		=
																																		BgL_xz00_1178;
																																}
																															else
																																{	/* Expand/let.scm 107 */
																																BgL_tagzd21651zd2_1182:
																																	BgL_arg3511z00_1176 = BGl_errorz00zz__errorz00(BFALSE, BGl_string3705z00zzexpand_letz00, BgL_xz00_1178);
																																}
																														}
																													else
																														{	/* Expand/let.scm 107 */
																															goto
																																BgL_tagzd21651zd2_1182;
																														}
																												}
																											else
																												{	/* Expand/let.scm 107 */
																													if (SYMBOLP
																														(BgL_xz00_1178))
																														{	/* Expand/let.scm 107 */
																															{	/* Expand/let.scm 109 */
																																obj_t
																																	BgL_list3524z00_1195;
																																{	/* Expand/let.scm 109 */
																																	obj_t
																																		BgL_arg3525z00_1196;
																																	BgL_arg3525z00_1196
																																		=
																																		MAKE_PAIR
																																		(BUNSPEC,
																																		BNIL);
																																	BgL_list3524z00_1195
																																		=
																																		MAKE_PAIR
																																		(BgL_xz00_1178,
																																		BgL_arg3525z00_1196);
																																}
																																BgL_arg3511z00_1176
																																	=
																																	BgL_list3524z00_1195;
																															}
																														}
																													else
																														{	/* Expand/let.scm 107 */
																															goto
																																BgL_tagzd21651zd2_1182;
																														}
																												}
																										}
																									}
																									BgL_newtail3275z00_1174 =
																										MAKE_PAIR
																										(BgL_arg3511z00_1176, BNIL);
																								}
																								SET_CDR(BgL_tail3274z00_1171,
																									BgL_newtail3275z00_1174);
																								{
																									obj_t BgL_tail3274z00_2588;

																									obj_t BgL_l3271z00_2586;

																									BgL_l3271z00_2586 =
																										CDR(BgL_l3271z00_1170);
																									BgL_tail3274z00_2588 =
																										BgL_newtail3275z00_1174;
																									BgL_tail3274z00_1171 =
																										BgL_tail3274z00_2588;
																									BgL_l3271z00_1170 =
																										BgL_l3271z00_2586;
																									goto
																										BgL_zc3anonymousza33508ze3z83_1172;
																								}
																							}
																					}
																				}
																			{	/* Expand/let.scm 112 */
																				obj_t BgL_arg3485z00_1135;

																				obj_t BgL_arg3486z00_1136;

																				obj_t BgL_arg3487z00_1137;

																				if (NULLP(BgL_varsz00_1134))
																					{	/* Expand/let.scm 112 */
																						BgL_arg3485z00_1135 = BNIL;
																					}
																				else
																					{	/* Expand/let.scm 112 */
																						obj_t BgL_head3278z00_1141;

																						BgL_head3278z00_1141 =
																							MAKE_PAIR(CAR(CAR
																								(BgL_varsz00_1134)), BNIL);
																						{	/* Expand/let.scm 112 */
																							obj_t BgL_g3281z00_1142;

																							BgL_g3281z00_1142 =
																								CDR(BgL_varsz00_1134);
																							{
																								obj_t BgL_l3276z00_1144;

																								obj_t BgL_tail3279z00_1145;

																								BgL_l3276z00_1144 =
																									BgL_g3281z00_1142;
																								BgL_tail3279z00_1145 =
																									BgL_head3278z00_1141;
																							BgL_zc3anonymousza33490ze3z83_1146:
																								if (NULLP
																									(BgL_l3276z00_1144))
																									{	/* Expand/let.scm 112 */
																										BgL_arg3485z00_1135 =
																											BgL_head3278z00_1141;
																									}
																								else
																									{	/* Expand/let.scm 112 */
																										obj_t
																											BgL_newtail3280z00_1148;
																										BgL_newtail3280z00_1148 =
																											MAKE_PAIR(CAR(CAR
																												(BgL_l3276z00_1144)),
																											BNIL);
																										SET_CDR
																											(BgL_tail3279z00_1145,
																											BgL_newtail3280z00_1148);
																										{
																											obj_t
																												BgL_tail3279z00_2603;
																											obj_t BgL_l3276z00_2601;

																											BgL_l3276z00_2601 =
																												CDR(BgL_l3276z00_1144);
																											BgL_tail3279z00_2603 =
																												BgL_newtail3280z00_1148;
																											BgL_tail3279z00_1145 =
																												BgL_tail3279z00_2603;
																											BgL_l3276z00_1144 =
																												BgL_l3276z00_2601;
																											goto
																												BgL_zc3anonymousza33490ze3z83_1146;
																										}
																									}
																							}
																						}
																					}
																				BgL_arg3486z00_1136 =
																					CNST_TABLE_REF(((long) 4));
																				BgL_arg3487z00_1137 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_xz00_19);
																				{	/* Expand/let.scm 116 */
																					obj_t
																						BgL_zc3anonymousza33499ze3z83_2174;
																					BgL_zc3anonymousza33499ze3z83_2174 =
																						make_fx_procedure
																						(BGl_zc3anonymousza33499ze3z83zzexpand_letz00,
																						(int) (((long) 0)),
																						(int) (((long) 4)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33499ze3z83_2174,
																						(int) (((long) 0)), BgL_xz00_19);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33499ze3z83_2174,
																						(int) (((long) 1)),
																						BgL_bodyz00_1132);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33499ze3z83_2174,
																						(int) (((long) 2)), BgL_ez00_1130);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33499ze3z83_2174,
																						(int) (((long) 3)),
																						BgL_varsz00_1134);
																					BgL_resz00_1110 =
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_arg3485z00_1135,
																						BgL_arg3486z00_1136,
																						BgL_arg3487z00_1137,
																						BgL_zc3anonymousza33499ze3z83_2174);
															}}}}}
														else
															{	/* Expand/let.scm 121 */
																goto BgL_tagzd21663zd2_1116;
															}
													}
											}
										else
											{	/* Expand/let.scm 121 */
												goto BgL_tagzd21663zd2_1116;
											}
									}
								else
									{	/* Expand/let.scm 121 */
										goto BgL_tagzd21663zd2_1116;
									}
							}
							{	/* Expand/let.scm 121 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_1108;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_19,
									BgL_resz00_1110);
							}
						}
					}
				}
			}
		}
	}



/* _expand-letrec */
	obj_t BGl__expandzd2letreczd2zzexpand_letz00(obj_t BgL_envz00_2175,
		obj_t BgL_xz00_2176, obj_t BgL_ez00_2177)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 104 */
			return
				BGl_expandzd2letreczd2zzexpand_letz00(BgL_xz00_2176, BgL_ez00_2177);
		}
	}



/* <anonymous:3499> */
	obj_t BGl_zc3anonymousza33499ze3z83zzexpand_letz00(obj_t BgL_envz00_2178)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 115 */
			{	/* Expand/let.scm 116 */
				obj_t BgL_xz00_2179;

				obj_t BgL_bodyz00_2180;

				obj_t BgL_ez00_2181;

				obj_t BgL_varsz00_2182;

				BgL_xz00_2179 = PROCEDURE_REF(BgL_envz00_2178, (int) (((long) 0)));
				BgL_bodyz00_2180 = PROCEDURE_REF(BgL_envz00_2178, (int) (((long) 1)));
				BgL_ez00_2181 = PROCEDURE_REF(BgL_envz00_2178, (int) (((long) 2)));
				BgL_varsz00_2182 = PROCEDURE_REF(BgL_envz00_2178, (int) (((long) 3)));
				{

					{	/* Expand/let.scm 116 */
						obj_t BgL_arg3500z00_1158;

						obj_t BgL_arg3501z00_1159;

						BgL_arg3500z00_1158 = CAR(BgL_xz00_2179);
						{	/* Expand/let.scm 117 */
							obj_t BgL_arg3502z00_1160;

							{	/* Expand/let.scm 117 */
								obj_t BgL_arg3506z00_1164;

								BgL_arg3506z00_1164 =
									BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2180);
								BgL_arg3502z00_1160 =
									PROCEDURE_ENTRY(BgL_ez00_2181) (BgL_ez00_2181,
									BgL_arg3506z00_1164, BgL_ez00_2181, BEOA);
							}
							{	/* Expand/let.scm 116 */
								obj_t BgL_list3504z00_1162;

								{	/* Expand/let.scm 116 */
									obj_t BgL_arg3505z00_1163;

									BgL_arg3505z00_1163 = MAKE_PAIR(BNIL, BNIL);
									BgL_list3504z00_1162 =
										MAKE_PAIR(BgL_arg3502z00_1160, BgL_arg3505z00_1163);
								}
								BgL_arg3501z00_1159 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_varsz00_2182,
									BgL_list3504z00_1162);
						}}
						return MAKE_PAIR(BgL_arg3500z00_1158, BgL_arg3501z00_1159);
					}
				}
			}
		}
	}



/* expand-labels */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2labelszd2zzexpand_letz00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 135 */
			{
				obj_t BgL_ez00_1222;

				obj_t BgL_bindingsz00_1223;

				obj_t BgL_bodyz00_1224;

				{	/* Expand/let.scm 170 */
					obj_t BgL_oldzd2internalzd2_1200;

					BgL_oldzd2internalzd2_1200 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 172 */
						obj_t BgL_ez00_1201;

						BgL_ez00_1201 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_22);
						{	/* Expand/let.scm 172 */
							obj_t BgL_resz00_1202;

							{

								if (PAIRP(BgL_xz00_21))
									{	/* Expand/let.scm 173 */
										obj_t BgL_cdrzd21857zd2_1211;

										BgL_cdrzd21857zd2_1211 = CDR(BgL_xz00_21);
										if (PAIRP(BgL_cdrzd21857zd2_1211))
											{	/* Expand/let.scm 173 */
												obj_t BgL_cdrzd21860zd2_1213;

												BgL_cdrzd21860zd2_1213 = CDR(BgL_cdrzd21857zd2_1211);
												if (NULLP(CAR(BgL_cdrzd21857zd2_1211)))
													{	/* Expand/let.scm 173 */
														if (NULLP(BgL_cdrzd21860zd2_1213))
															{	/* Expand/let.scm 173 */
															BgL_tagzd21851zd2_1208:
																BgL_resz00_1202 =
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string3708z00zzexpand_letz00,
																	BgL_xz00_21);
															}
														else
															{	/* Expand/let.scm 173 */
																{	/* Expand/let.scm 173 */
																	obj_t BgL_pairz00_2036;

																	obj_t BgL_objz00_2037;

																	BgL_pairz00_2036 = BgL_xz00_21;
																	BgL_objz00_2037 = CNST_TABLE_REF(((long) 0));
																	SET_CAR(BgL_pairz00_2036, BgL_objz00_2037);
																}
																BgL_resz00_1202 =
																	PROCEDURE_ENTRY(BgL_ez00_1201) (BgL_ez00_1201,
																	BgL_xz00_21, BgL_ez00_1201, BEOA);
													}}
												else
													{	/* Expand/let.scm 173 */
														obj_t BgL_carzd21875zd2_1217;

														obj_t BgL_cdrzd21876zd2_1218;

														BgL_carzd21875zd2_1217 =
															CAR(BgL_cdrzd21857zd2_1211);
														BgL_cdrzd21876zd2_1218 =
															CDR(BgL_cdrzd21857zd2_1211);
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd21875zd2_1217))
															{	/* Expand/let.scm 173 */
																if (NULLP(BgL_cdrzd21876zd2_1218))
																	{	/* Expand/let.scm 173 */
																		goto BgL_tagzd21851zd2_1208;
																	}
																else
																	{	/* Expand/let.scm 173 */
																		BgL_ez00_1222 = BgL_ez00_1201;
																		BgL_bindingsz00_1223 =
																			BgL_carzd21875zd2_1217;
																		BgL_bodyz00_1224 = BgL_cdrzd21876zd2_1218;
																		{	/* Expand/let.scm 137 */
																			obj_t BgL_varsz00_1226;

																			if (NULLP(BgL_bindingsz00_1223))
																				{	/* Expand/let.scm 137 */
																					BgL_varsz00_1226 = BNIL;
																				}
																			else
																				{	/* Expand/let.scm 137 */
																					obj_t BgL_head3284z00_1281;

																					BgL_head3284z00_1281 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3282z00_1283;

																						obj_t BgL_tail3285z00_1284;

																						BgL_l3282z00_1283 =
																							BgL_bindingsz00_1223;
																						BgL_tail3285z00_1284 =
																							BgL_head3284z00_1281;
																					BgL_zc3anonymousza33567ze3z83_1285:
																						if (NULLP(BgL_l3282z00_1283))
																							{	/* Expand/let.scm 137 */
																								BgL_varsz00_1226 =
																									CDR(BgL_head3284z00_1281);
																							}
																						else
																							{	/* Expand/let.scm 137 */
																								obj_t BgL_newtail3286z00_1287;

																								{	/* Expand/let.scm 137 */
																									obj_t BgL_arg3570z00_1289;

																									{	/* Expand/let.scm 137 */
																										obj_t BgL_xz00_1291;

																										BgL_xz00_1291 =
																											CAR(BgL_l3282z00_1283);
																										{

																											if (PAIRP(BgL_xz00_1291))
																												{	/* Expand/let.scm 138 */
																													obj_t
																														BgL_cdrzd21715zd2_1303;
																													BgL_cdrzd21715zd2_1303
																														=
																														CDR(BgL_xz00_1291);
																													{	/* Expand/let.scm 138 */
																														obj_t
																															BgL_idz00_1304;
																														BgL_idz00_1304 =
																															CAR
																															(BgL_xz00_1291);
																														if (PAIRP
																															(BgL_cdrzd21715zd2_1303))
																															{	/* Expand/let.scm 138 */
																																if (NULLP(CAR
																																		(BgL_cdrzd21715zd2_1303)))
																																	{	/* Expand/let.scm 138 */
																																		BgL_arg3570z00_1289
																																			=
																																			BgL_idz00_1304;
																																	}
																																else
																																	{	/* Expand/let.scm 138 */
																																		bool_t
																																			BgL_testz00_2675;
																																		{	/* Expand/let.scm 138 */
																																			obj_t
																																				BgL_auxz00_2676;
																																			BgL_auxz00_2676
																																				=
																																				CAR
																																				(BgL_cdrzd21715zd2_1303);
																																			BgL_testz00_2675
																																				=
																																				SYMBOLP
																																				(BgL_auxz00_2676);
																																		}
																																		if (BgL_testz00_2675)
																																			{	/* Expand/let.scm 138 */
																																				BgL_arg3570z00_1289
																																					=
																																					BgL_idz00_1304;
																																			}
																																		else
																																			{	/* Expand/let.scm 138 */
																																				obj_t
																																					BgL_idz00_1309;
																																				BgL_idz00_1309
																																					=
																																					CAR
																																					(BgL_xz00_1291);
																																				{
																																					obj_t
																																						BgL_gzd21742zd2_1364;
																																					obj_t
																																						BgL_gzd21737zd2_1314;
																																					BgL_gzd21737zd2_1314
																																						=
																																						CAR
																																						(CDR
																																						(BgL_xz00_1291));
																																					if (PAIRP(BgL_gzd21737zd2_1314))
																																						{	/* Expand/let.scm 138 */
																																							obj_t
																																								BgL_carzd21739zd2_1317;
																																							BgL_carzd21739zd2_1317
																																								=
																																								CAR
																																								(BgL_gzd21737zd2_1314);
																																							{

																																								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_carzd21739zd2_1317))
																																									{	/* Expand/let.scm 138 */
																																									BgL_kapzd21741zd2_1318:
																																										BgL_gzd21742zd2_1364 = CDR(BgL_gzd21737zd2_1314);
																																									BgL_zc3anonymousza33611ze3z83_1365:
																																										if (NULLP(BgL_gzd21742zd2_1364))
																																											{	/* Expand/let.scm 138 */
																																												BgL_arg3570z00_1289
																																													=
																																													BgL_idz00_1309;
																																											}
																																										else
																																											{	/* Expand/let.scm 138 */
																																												if (PAIRP(BgL_gzd21742zd2_1364))
																																													{	/* Expand/let.scm 138 */
																																														obj_t
																																															BgL_carzd21744zd2_1368;
																																														BgL_carzd21744zd2_1368
																																															=
																																															CAR
																																															(BgL_gzd21742zd2_1364);
																																														{

																																															if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_carzd21744zd2_1368))
																																																{	/* Expand/let.scm 138 */
																																																BgL_kapzd21746zd2_1369:
																																																	{
																																																		obj_t
																																																			BgL_gzd21742zd2_2692;
																																																		BgL_gzd21742zd2_2692
																																																			=
																																																			CDR
																																																			(BgL_gzd21742zd2_1364);
																																																		BgL_gzd21742zd2_1364
																																																			=
																																																			BgL_gzd21742zd2_2692;
																																																		goto
																																																			BgL_zc3anonymousza33611ze3z83_1365;
																																																	}
																																																}
																																															else
																																																{	/* Expand/let.scm 138 */
																																																	if (SYMBOLP(BgL_carzd21744zd2_1368))
																																																		{	/* Expand/let.scm 138 */
																																																			goto
																																																				BgL_kapzd21746zd2_1369;
																																																		}
																																																	else
																																																		{	/* Expand/let.scm 138 */
																																																			obj_t
																																																				BgL_idz00_1372;
																																																			BgL_idz00_1372
																																																				=
																																																				CAR
																																																				(BgL_xz00_1291);
																																																			{
																																																				obj_t
																																																					BgL_gzd21760zd2_1384;
																																																				obj_t
																																																					BgL_gzd21756zd2_1377;
																																																				BgL_gzd21756zd2_1377
																																																					=
																																																					CAR
																																																					(CDR
																																																					(BgL_xz00_1291));
																																																				if (SYMBOLP(BgL_gzd21756zd2_1377))
																																																					{	/* Expand/let.scm 138 */
																																																						BgL_arg3570z00_1289
																																																							=
																																																							BgL_idz00_1372;
																																																					}
																																																				else
																																																					{	/* Expand/let.scm 138 */
																																																						if (PAIRP(BgL_gzd21756zd2_1377))
																																																							{	/* Expand/let.scm 138 */
																																																								bool_t
																																																									BgL_testz00_2701;
																																																								{	/* Expand/let.scm 138 */
																																																									obj_t
																																																										BgL_auxz00_2702;
																																																									BgL_auxz00_2702
																																																										=
																																																										CAR
																																																										(BgL_gzd21756zd2_1377);
																																																									BgL_testz00_2701
																																																										=
																																																										SYMBOLP
																																																										(BgL_auxz00_2702);
																																																								}
																																																								if (BgL_testz00_2701)
																																																									{	/* Expand/let.scm 138 */
																																																										BgL_gzd21760zd2_1384
																																																											=
																																																											CDR
																																																											(BgL_gzd21756zd2_1377);
																																																									BgL_zc3anonymousza33624ze3z83_1385:
																																																										if (SYMBOLP(BgL_gzd21760zd2_1384))
																																																											{	/* Expand/let.scm 138 */
																																																												BgL_arg3570z00_1289
																																																													=
																																																													BgL_idz00_1372;
																																																											}
																																																										else
																																																											{	/* Expand/let.scm 138 */
																																																												if (PAIRP(BgL_gzd21760zd2_1384))
																																																													{	/* Expand/let.scm 138 */
																																																														bool_t
																																																															BgL_testz00_2709;
																																																														{	/* Expand/let.scm 138 */
																																																															obj_t
																																																																BgL_auxz00_2710;
																																																															BgL_auxz00_2710
																																																																=
																																																																CAR
																																																																(BgL_gzd21760zd2_1384);
																																																															BgL_testz00_2709
																																																																=
																																																																SYMBOLP
																																																																(BgL_auxz00_2710);
																																																														}
																																																														if (BgL_testz00_2709)
																																																															{
																																																																obj_t
																																																																	BgL_gzd21760zd2_2713;
																																																																BgL_gzd21760zd2_2713
																																																																	=
																																																																	CDR
																																																																	(BgL_gzd21760zd2_1384);
																																																																BgL_gzd21760zd2_1384
																																																																	=
																																																																	BgL_gzd21760zd2_2713;
																																																																goto
																																																																	BgL_zc3anonymousza33624ze3z83_1385;
																																																															}
																																																														else
																																																															{	/* Expand/let.scm 138 */
																																																															BgL_tagzd21706zd2_1300:
																																																																BgL_arg3570z00_1289 = BGl_errorz00zz__errorz00(BFALSE, BGl_string3707z00zzexpand_letz00, BgL_xz00_1291);
																																																															}
																																																													}
																																																												else
																																																													{	/* Expand/let.scm 138 */
																																																														goto
																																																															BgL_tagzd21706zd2_1300;
																																																													}
																																																											}
																																																									}
																																																								else
																																																									{	/* Expand/let.scm 138 */
																																																										goto
																																																											BgL_tagzd21706zd2_1300;
																																																									}
																																																							}
																																																						else
																																																							{	/* Expand/let.scm 138 */
																																																								goto
																																																									BgL_tagzd21706zd2_1300;
																																																							}
																																																					}
																																																			}
																																																		}
																																																}
																																														}
																																													}
																																												else
																																													{	/* Expand/let.scm 138 */
																																														obj_t
																																															BgL_idz00_1394;
																																														BgL_idz00_1394
																																															=
																																															CAR
																																															(BgL_xz00_1291);
																																														{
																																															obj_t
																																																BgL_gzd21777zd2_1406;
																																															obj_t
																																																BgL_gzd21773zd2_1399;
																																															BgL_gzd21773zd2_1399
																																																=
																																																CAR
																																																(CDR
																																																(BgL_xz00_1291));
																																															if (SYMBOLP(BgL_gzd21773zd2_1399))
																																																{	/* Expand/let.scm 138 */
																																																	BgL_arg3570z00_1289
																																																		=
																																																		BgL_idz00_1394;
																																																}
																																															else
																																																{	/* Expand/let.scm 138 */
																																																	if (PAIRP(BgL_gzd21773zd2_1399))
																																																		{	/* Expand/let.scm 138 */
																																																			bool_t
																																																				BgL_testz00_2724;
																																																			{	/* Expand/let.scm 138 */
																																																				obj_t
																																																					BgL_auxz00_2725;
																																																				BgL_auxz00_2725
																																																					=
																																																					CAR
																																																					(BgL_gzd21773zd2_1399);
																																																				BgL_testz00_2724
																																																					=
																																																					SYMBOLP
																																																					(BgL_auxz00_2725);
																																																			}
																																																			if (BgL_testz00_2724)
																																																				{	/* Expand/let.scm 138 */
																																																					BgL_gzd21777zd2_1406
																																																						=
																																																						CDR
																																																						(BgL_gzd21773zd2_1399);
																																																				BgL_zc3anonymousza33639ze3z83_1407:
																																																					if (SYMBOLP(BgL_gzd21777zd2_1406))
																																																						{	/* Expand/let.scm 138 */
																																																							BgL_arg3570z00_1289
																																																								=
																																																								BgL_idz00_1394;
																																																						}
																																																					else
																																																						{	/* Expand/let.scm 138 */
																																																							if (PAIRP(BgL_gzd21777zd2_1406))
																																																								{	/* Expand/let.scm 138 */
																																																									bool_t
																																																										BgL_testz00_2732;
																																																									{	/* Expand/let.scm 138 */
																																																										obj_t
																																																											BgL_auxz00_2733;
																																																										BgL_auxz00_2733
																																																											=
																																																											CAR
																																																											(BgL_gzd21777zd2_1406);
																																																										BgL_testz00_2732
																																																											=
																																																											SYMBOLP
																																																											(BgL_auxz00_2733);
																																																									}
																																																									if (BgL_testz00_2732)
																																																										{
																																																											obj_t
																																																												BgL_gzd21777zd2_2736;
																																																											BgL_gzd21777zd2_2736
																																																												=
																																																												CDR
																																																												(BgL_gzd21777zd2_1406);
																																																											BgL_gzd21777zd2_1406
																																																												=
																																																												BgL_gzd21777zd2_2736;
																																																											goto
																																																												BgL_zc3anonymousza33639ze3z83_1407;
																																																										}
																																																									else
																																																										{	/* Expand/let.scm 138 */
																																																											goto
																																																												BgL_tagzd21706zd2_1300;
																																																										}
																																																								}
																																																							else
																																																								{	/* Expand/let.scm 138 */
																																																									goto
																																																										BgL_tagzd21706zd2_1300;
																																																								}
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/let.scm 138 */
																																																					goto
																																																						BgL_tagzd21706zd2_1300;
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/let.scm 138 */
																																																			goto
																																																				BgL_tagzd21706zd2_1300;
																																																		}
																																																}
																																														}
																																													}
																																											}
																																									}
																																								else
																																									{	/* Expand/let.scm 138 */
																																										if (SYMBOLP(BgL_carzd21739zd2_1317))
																																											{	/* Expand/let.scm 138 */
																																												goto
																																													BgL_kapzd21741zd2_1318;
																																											}
																																										else
																																											{	/* Expand/let.scm 138 */
																																												obj_t
																																													BgL_idz00_1321;
																																												BgL_idz00_1321
																																													=
																																													CAR
																																													(BgL_xz00_1291);
																																												{
																																													obj_t
																																														BgL_gzd21794zd2_1333;
																																													obj_t
																																														BgL_gzd21790zd2_1326;
																																													BgL_gzd21790zd2_1326
																																														=
																																														CAR
																																														(CDR
																																														(BgL_xz00_1291));
																																													if (SYMBOLP(BgL_gzd21790zd2_1326))
																																														{	/* Expand/let.scm 138 */
																																															BgL_arg3570z00_1289
																																																=
																																																BgL_idz00_1321;
																																														}
																																													else
																																														{	/* Expand/let.scm 138 */
																																															if (PAIRP(BgL_gzd21790zd2_1326))
																																																{	/* Expand/let.scm 138 */
																																																	bool_t
																																																		BgL_testz00_2749;
																																																	{	/* Expand/let.scm 138 */
																																																		obj_t
																																																			BgL_auxz00_2750;
																																																		BgL_auxz00_2750
																																																			=
																																																			CAR
																																																			(BgL_gzd21790zd2_1326);
																																																		BgL_testz00_2749
																																																			=
																																																			SYMBOLP
																																																			(BgL_auxz00_2750);
																																																	}
																																																	if (BgL_testz00_2749)
																																																		{	/* Expand/let.scm 138 */
																																																			BgL_gzd21794zd2_1333
																																																				=
																																																				CDR
																																																				(BgL_gzd21790zd2_1326);
																																																		BgL_zc3anonymousza33590ze3z83_1334:
																																																			if (SYMBOLP(BgL_gzd21794zd2_1333))
																																																				{	/* Expand/let.scm 138 */
																																																					BgL_arg3570z00_1289
																																																						=
																																																						BgL_idz00_1321;
																																																				}
																																																			else
																																																				{	/* Expand/let.scm 138 */
																																																					if (PAIRP(BgL_gzd21794zd2_1333))
																																																						{	/* Expand/let.scm 138 */
																																																							bool_t
																																																								BgL_testz00_2757;
																																																							{	/* Expand/let.scm 138 */
																																																								obj_t
																																																									BgL_auxz00_2758;
																																																								BgL_auxz00_2758
																																																									=
																																																									CAR
																																																									(BgL_gzd21794zd2_1333);
																																																								BgL_testz00_2757
																																																									=
																																																									SYMBOLP
																																																									(BgL_auxz00_2758);
																																																							}
																																																							if (BgL_testz00_2757)
																																																								{
																																																									obj_t
																																																										BgL_gzd21794zd2_2761;
																																																									BgL_gzd21794zd2_2761
																																																										=
																																																										CDR
																																																										(BgL_gzd21794zd2_1333);
																																																									BgL_gzd21794zd2_1333
																																																										=
																																																										BgL_gzd21794zd2_2761;
																																																									goto
																																																										BgL_zc3anonymousza33590ze3z83_1334;
																																																								}
																																																							else
																																																								{	/* Expand/let.scm 138 */
																																																									goto
																																																										BgL_tagzd21706zd2_1300;
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/let.scm 138 */
																																																							goto
																																																								BgL_tagzd21706zd2_1300;
																																																						}
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/let.scm 138 */
																																																			goto
																																																				BgL_tagzd21706zd2_1300;
																																																		}
																																																}
																																															else
																																																{	/* Expand/let.scm 138 */
																																																	goto
																																																		BgL_tagzd21706zd2_1300;
																																																}
																																														}
																																												}
																																											}
																																									}
																																							}
																																						}
																																					else
																																						{	/* Expand/let.scm 138 */
																																							obj_t
																																								BgL_idz00_1343;
																																							BgL_idz00_1343
																																								=
																																								CAR
																																								(BgL_xz00_1291);
																																							{
																																								obj_t
																																									BgL_gzd21811zd2_1355;
																																								obj_t
																																									BgL_gzd21807zd2_1348;
																																								BgL_gzd21807zd2_1348
																																									=
																																									CAR
																																									(CDR
																																									(BgL_xz00_1291));
																																								if (SYMBOLP(BgL_gzd21807zd2_1348))
																																									{	/* Expand/let.scm 138 */
																																										BgL_arg3570z00_1289
																																											=
																																											BgL_idz00_1343;
																																									}
																																								else
																																									{	/* Expand/let.scm 138 */
																																										if (PAIRP(BgL_gzd21807zd2_1348))
																																											{	/* Expand/let.scm 138 */
																																												bool_t
																																													BgL_testz00_2771;
																																												{	/* Expand/let.scm 138 */
																																													obj_t
																																														BgL_auxz00_2772;
																																													BgL_auxz00_2772
																																														=
																																														CAR
																																														(BgL_gzd21807zd2_1348);
																																													BgL_testz00_2771
																																														=
																																														SYMBOLP
																																														(BgL_auxz00_2772);
																																												}
																																												if (BgL_testz00_2771)
																																													{	/* Expand/let.scm 138 */
																																														BgL_gzd21811zd2_1355
																																															=
																																															CDR
																																															(BgL_gzd21807zd2_1348);
																																													BgL_zc3anonymousza33605ze3z83_1356:
																																														if (SYMBOLP(BgL_gzd21811zd2_1355))
																																															{	/* Expand/let.scm 138 */
																																																BgL_arg3570z00_1289
																																																	=
																																																	BgL_idz00_1343;
																																															}
																																														else
																																															{	/* Expand/let.scm 138 */
																																																if (PAIRP(BgL_gzd21811zd2_1355))
																																																	{	/* Expand/let.scm 138 */
																																																		bool_t
																																																			BgL_testz00_2779;
																																																		{	/* Expand/let.scm 138 */
																																																			obj_t
																																																				BgL_auxz00_2780;
																																																			BgL_auxz00_2780
																																																				=
																																																				CAR
																																																				(BgL_gzd21811zd2_1355);
																																																			BgL_testz00_2779
																																																				=
																																																				SYMBOLP
																																																				(BgL_auxz00_2780);
																																																		}
																																																		if (BgL_testz00_2779)
																																																			{
																																																				obj_t
																																																					BgL_gzd21811zd2_2783;
																																																				BgL_gzd21811zd2_2783
																																																					=
																																																					CDR
																																																					(BgL_gzd21811zd2_1355);
																																																				BgL_gzd21811zd2_1355
																																																					=
																																																					BgL_gzd21811zd2_2783;
																																																				goto
																																																					BgL_zc3anonymousza33605ze3z83_1356;
																																																			}
																																																		else
																																																			{	/* Expand/let.scm 138 */
																																																				goto
																																																					BgL_tagzd21706zd2_1300;
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/let.scm 138 */
																																																		goto
																																																			BgL_tagzd21706zd2_1300;
																																																	}
																																															}
																																													}
																																												else
																																													{	/* Expand/let.scm 138 */
																																														goto
																																															BgL_tagzd21706zd2_1300;
																																													}
																																											}
																																										else
																																											{	/* Expand/let.scm 138 */
																																												goto
																																													BgL_tagzd21706zd2_1300;
																																											}
																																									}
																																							}
																																						}
																																				}
																																			}
																																	}
																															}
																														else
																															{	/* Expand/let.scm 138 */
																																goto
																																	BgL_tagzd21706zd2_1300;
																															}
																													}
																												}
																											else
																												{	/* Expand/let.scm 138 */
																													goto
																														BgL_tagzd21706zd2_1300;
																												}
																										}
																									}
																									BgL_newtail3286z00_1287 =
																										MAKE_PAIR
																										(BgL_arg3570z00_1289, BNIL);
																								}
																								SET_CDR(BgL_tail3285z00_1284,
																									BgL_newtail3286z00_1287);
																								{
																									obj_t BgL_tail3285z00_2794;

																									obj_t BgL_l3282z00_2792;

																									BgL_l3282z00_2792 =
																										CDR(BgL_l3282z00_1283);
																									BgL_tail3285z00_2794 =
																										BgL_newtail3286z00_1287;
																									BgL_tail3285z00_1284 =
																										BgL_tail3285z00_2794;
																									BgL_l3282z00_1283 =
																										BgL_l3282z00_2792;
																									goto
																										BgL_zc3anonymousza33567ze3z83_1285;
																								}
																							}
																					}
																				}
																			{	/* Expand/let.scm 152 */
																				obj_t BgL_arg3535z00_1227;

																				obj_t BgL_arg3536z00_1228;

																				BgL_arg3535z00_1227 =
																					CNST_TABLE_REF(((long) 4));
																				BgL_arg3536z00_1228 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_xz00_21);
																				{	/* Expand/let.scm 155 */
																					obj_t
																						BgL_zc3anonymousza33538ze3z83_2184;
																					BgL_zc3anonymousza33538ze3z83_2184 =
																						make_fx_procedure
																						(BGl_zc3anonymousza33538ze3z83zzexpand_letz00,
																						(int) (((long) 0)),
																						(int) (((long) 3)));
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33538ze3z83_2184,
																						(int) (((long) 0)),
																						BgL_bindingsz00_1223);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33538ze3z83_2184,
																						(int) (((long) 1)), BgL_ez00_1222);
																					PROCEDURE_SET
																						(BgL_zc3anonymousza33538ze3z83_2184,
																						(int) (((long) 2)),
																						BgL_bodyz00_1224);
																					BgL_resz00_1202 =
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_varsz00_1226,
																						BgL_arg3535z00_1227,
																						BgL_arg3536z00_1228,
																						BgL_zc3anonymousza33538ze3z83_2184);
															}}}}}
														else
															{	/* Expand/let.scm 173 */
																goto BgL_tagzd21851zd2_1208;
															}
													}
											}
										else
											{	/* Expand/let.scm 173 */
												goto BgL_tagzd21851zd2_1208;
											}
									}
								else
									{	/* Expand/let.scm 173 */
										goto BgL_tagzd21851zd2_1208;
									}
							}
							{	/* Expand/let.scm 173 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_1200;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_21,
									BgL_resz00_1202);
							}
						}
					}
				}
			}
		}
	}



/* _expand-labels */
	obj_t BGl__expandzd2labelszd2zzexpand_letz00(obj_t BgL_envz00_2185,
		obj_t BgL_xz00_2186, obj_t BgL_ez00_2187)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 135 */
			return
				BGl_expandzd2labelszd2zzexpand_letz00(BgL_xz00_2186, BgL_ez00_2187);
		}
	}



/* <anonymous:3538> */
	obj_t BGl_zc3anonymousza33538ze3z83zzexpand_letz00(obj_t BgL_envz00_2188)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 154 */
			{	/* Expand/let.scm 155 */
				obj_t BgL_bindingsz00_2189;

				obj_t BgL_ez00_2190;

				obj_t BgL_bodyz00_2191;

				BgL_bindingsz00_2189 =
					PROCEDURE_REF(BgL_envz00_2188, (int) (((long) 0)));
				BgL_ez00_2190 = PROCEDURE_REF(BgL_envz00_2188, (int) (((long) 1)));
				BgL_bodyz00_2191 = PROCEDURE_REF(BgL_envz00_2188, (int) (((long) 2)));
				{

					{	/* Expand/let.scm 155 */
						obj_t BgL_newz00_1231;

						if (NULLP(BgL_bindingsz00_2189))
							{	/* Expand/let.scm 155 */
								BgL_newz00_1231 = BNIL;
							}
						else
							{	/* Expand/let.scm 155 */
								obj_t BgL_head3289z00_1241;

								BgL_head3289z00_1241 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3287z00_1243;

									obj_t BgL_tail3290z00_1244;

									BgL_l3287z00_1243 = BgL_bindingsz00_2189;
									BgL_tail3290z00_1244 = BgL_head3289z00_1241;
								BgL_zc3anonymousza33547ze3z83_1245:
									if (NULLP(BgL_l3287z00_1243))
										{	/* Expand/let.scm 155 */
											BgL_newz00_1231 = CDR(BgL_head3289z00_1241);
										}
									else
										{	/* Expand/let.scm 155 */
											obj_t BgL_newtail3291z00_1247;

											{	/* Expand/let.scm 155 */
												obj_t BgL_arg3550z00_1249;

												{	/* Expand/let.scm 155 */
													obj_t BgL_xz00_1251;

													BgL_xz00_1251 = CAR(BgL_l3287z00_1243);
													{
														obj_t BgL_namez00_1252;

														obj_t BgL_argsz00_1253;

														obj_t BgL_lbodyz00_1254;

														if (PAIRP(BgL_xz00_1251))
															{	/* Expand/let.scm 156 */
																obj_t BgL_cdrzd21840zd2_1259;

																BgL_cdrzd21840zd2_1259 = CDR(BgL_xz00_1251);
																if (PAIRP(BgL_cdrzd21840zd2_1259))
																	{	/* Expand/let.scm 156 */
																		obj_t BgL_cdrzd21845zd2_1261;

																		BgL_cdrzd21845zd2_1261 =
																			CDR(BgL_cdrzd21840zd2_1259);
																		if (NULLP(BgL_cdrzd21845zd2_1261))
																			{	/* Expand/let.scm 156 */
																			BgL_tagzd21831zd2_1256:
																				BgL_arg3550z00_1249 =
																					BGl_errorz00zz__errorz00(BFALSE,
																					BGl_string3707z00zzexpand_letz00,
																					BgL_xz00_1251);
																			}
																		else
																			{	/* Expand/let.scm 156 */
																				BgL_namez00_1252 = CAR(BgL_xz00_1251);
																				BgL_argsz00_1253 =
																					CAR(BgL_cdrzd21840zd2_1259);
																				BgL_lbodyz00_1254 =
																					BgL_cdrzd21845zd2_1261;
																				{	/* Expand/let.scm 159 */
																					obj_t BgL_arg3557z00_1265;

																					obj_t BgL_arg3558z00_1266;

																					obj_t BgL_arg3559z00_1267;

																					BgL_arg3557z00_1265 =
																						BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																						(BgL_argsz00_1253);
																					BgL_arg3558z00_1266 =
																						CNST_TABLE_REF(((long) 4));
																					BgL_arg3559z00_1267 =
																						BGl_findzd2locationzd2zztools_locationz00
																						(BgL_xz00_1251);
																					{	/* Expand/let.scm 163 */
																						obj_t
																							BgL_zc3anonymousza33561ze3z83_2183;
																						BgL_zc3anonymousza33561ze3z83_2183 =
																							make_fx_procedure
																							(BGl_zc3anonymousza33561ze3z83zzexpand_letz00,
																							(int) (((long) 0)),
																							(int) (((long) 5)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33561ze3z83_2183,
																							(int) (((long) 0)),
																							BgL_lbodyz00_1254);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33561ze3z83_2183,
																							(int) (((long) 1)),
																							BgL_ez00_2190);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33561ze3z83_2183,
																							(int) (((long) 2)),
																							BgL_argsz00_1253);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33561ze3z83_2183,
																							(int) (((long) 3)),
																							BgL_namez00_1252);
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33561ze3z83_2183,
																							(int) (((long) 4)),
																							BgL_xz00_1251);
																						BgL_arg3550z00_1249 =
																							BGl_withzd2lexicalzd2zzexpand_epsz00
																							(BgL_arg3557z00_1265,
																							BgL_arg3558z00_1266,
																							BgL_arg3559z00_1267,
																							BgL_zc3anonymousza33561ze3z83_2183);
																	}}}}
																else
																	{	/* Expand/let.scm 156 */
																		goto BgL_tagzd21831zd2_1256;
																	}
															}
														else
															{	/* Expand/let.scm 156 */
																goto BgL_tagzd21831zd2_1256;
															}
													}
												}
												BgL_newtail3291z00_1247 =
													MAKE_PAIR(BgL_arg3550z00_1249, BNIL);
											}
											SET_CDR(BgL_tail3290z00_1244, BgL_newtail3291z00_1247);
											{
												obj_t BgL_tail3290z00_2854;

												obj_t BgL_l3287z00_2852;

												BgL_l3287z00_2852 = CDR(BgL_l3287z00_1243);
												BgL_tail3290z00_2854 = BgL_newtail3291z00_1247;
												BgL_tail3290z00_1244 = BgL_tail3290z00_2854;
												BgL_l3287z00_1243 = BgL_l3287z00_2852;
												goto BgL_zc3anonymousza33547ze3z83_1245;
											}
										}
								}
							}
						{	/* Expand/let.scm 169 */
							obj_t BgL_arg3539z00_1232;

							obj_t BgL_arg3540z00_1233;

							BgL_arg3539z00_1232 = CNST_TABLE_REF(((long) 5));
							{	/* Expand/let.scm 169 */
								obj_t BgL_arg3541z00_1234;

								{	/* Expand/let.scm 169 */
									obj_t BgL_arg3545z00_1238;

									BgL_arg3545z00_1238 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2191);
									BgL_arg3541z00_1234 =
										PROCEDURE_ENTRY(BgL_ez00_2190) (BgL_ez00_2190,
										BgL_arg3545z00_1238, BgL_ez00_2190, BEOA);
								}
								{	/* Expand/let.scm 169 */
									obj_t BgL_list3543z00_1236;

									{	/* Expand/let.scm 169 */
										obj_t BgL_arg3544z00_1237;

										BgL_arg3544z00_1237 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3543z00_1236 =
											MAKE_PAIR(BgL_arg3541z00_1234, BgL_arg3544z00_1237);
									}
									BgL_arg3540z00_1233 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_newz00_1231,
										BgL_list3543z00_1236);
							}}
							return MAKE_PAIR(BgL_arg3539z00_1232, BgL_arg3540z00_1233);
						}
					}
				}
			}
		}
	}



/* <anonymous:3561> */
	obj_t BGl_zc3anonymousza33561ze3z83zzexpand_letz00(obj_t BgL_envz00_2192)
	{
		AN_OBJECT;
		{	/* Expand/let.scm 162 */
			{	/* Expand/let.scm 163 */
				obj_t BgL_lbodyz00_2193;

				obj_t BgL_ez00_2194;

				obj_t BgL_argsz00_2195;

				obj_t BgL_namez00_2196;

				obj_t BgL_xz00_2197;

				BgL_lbodyz00_2193 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 0)));
				BgL_ez00_2194 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 1)));
				BgL_argsz00_2195 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 2)));
				BgL_namez00_2196 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 3)));
				BgL_xz00_2197 = PROCEDURE_REF(BgL_envz00_2192, (int) (((long) 4)));
				{

					{	/* Expand/let.scm 163 */
						obj_t BgL_bodyz00_1270;

						{	/* Expand/let.scm 163 */
							obj_t BgL_arg3565z00_1275;

							BgL_arg3565z00_1275 =
								BGl_expandzd2prognzd2zz__prognz00(BgL_lbodyz00_2193);
							BgL_bodyz00_1270 =
								PROCEDURE_ENTRY(BgL_ez00_2194) (BgL_ez00_2194,
								BgL_arg3565z00_1275, BgL_ez00_2194, BEOA);
						}
						{	/* Expand/let.scm 163 */
							obj_t BgL_bz00_1271;

							{	/* Expand/let.scm 164 */
								obj_t BgL_arg3562z00_1272;

								{	/* Expand/let.scm 164 */
									obj_t BgL_list3563z00_1273;

									{	/* Expand/let.scm 164 */
										obj_t BgL_arg3564z00_1274;

										BgL_arg3564z00_1274 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3563z00_1273 =
											MAKE_PAIR(BgL_bodyz00_1270, BgL_arg3564z00_1274);
									}
									BgL_arg3562z00_1272 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_argsz00_2195, BgL_list3563z00_1273);
								}
								BgL_bz00_1271 =
									MAKE_PAIR(BgL_namez00_2196, BgL_arg3562z00_1272);
							}
							{	/* Expand/let.scm 164 */

								return
									BGl_epairifyz00zztools_miscz00(BgL_bz00_1271, BgL_xz00_2197);
							}
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_letz00()
	{
		AN_OBJECT;
		{	/* Expand/let.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 245373811),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3709z00zzexpand_letz00));
		}
	}

#ifdef __cplusplus
}
#endif
