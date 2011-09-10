/*===========================================================================*/
/*   (Init/extend.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/extend.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__loadzd2extendzd2zzinit_extendz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinit_extendz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinit_extendz00();
	static obj_t BGl_cnstzd2initzd2zzinit_extendz00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_extendz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_extendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzinit_extendz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_za2extendzd2tableza2zd2zzinit_extendz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_loadzd2extendzd2zzinit_extendz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_extendz00();
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinit_extendz00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1546z00zzinit_extendz00,
		BgL_bgl_string1546za700za7za7i1555za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1547z00zzinit_extendz00,
		BgL_bgl_string1547za700za7za7i1556za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1548z00zzinit_extendz00,
		BgL_bgl_string1548za700za7za7i1557za7, ".init", 5);
	      DEFINE_STRING(BGl_string1550z00zzinit_extendz00,
		BgL_bgl_string1550za700za7za7i1558za7, "Can't find extend file", 22);
	      DEFINE_STRING(BGl_string1549z00zzinit_extendz00,
		BgL_bgl_string1549za700za7za7i1559za7, "parse-args", 10);
	      DEFINE_STRING(BGl_string1551z00zzinit_extendz00,
		BgL_bgl_string1551za700za7za7i1560za7, "init_extend", 11);
	      DEFINE_STRING(BGl_string1552z00zzinit_extendz00,
		BgL_bgl_string1552za700za7za7i1561za7, "pass-started ", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loadzd2extendzd2envz00zzinit_extendz00,
		BgL_bgl__loadza7d2extendza7d1562z00, BGl__loadzd2extendzd2zzinit_extendz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_extendz00(long
		BgL_checksumz00_157, char *BgL_fromz00_158)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_extendz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_extendz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzinit_extendz00();
					BGl_cnstzd2initzd2zzinit_extendz00();
					BGl_importedzd2moduleszd2initz00zzinit_extendz00();
					BGl_toplevelzd2initzd2zzinit_extendz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_extend");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"init_extend");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			{	/* Init/extend.scm 16 */
				obj_t BgL_cportz00_149;

				BgL_cportz00_149 =
					bgl_open_input_string(BGl_string1552z00zzinit_extendz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_150;

					BgL_iz00_150 = ((long) 0);
				BgL_loopz00_151:
					if ((BgL_iz00_150 == ((long) -1)))
						{	/* Init/extend.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Init/extend.scm 16 */
							{	/* Init/extend.scm 16 */
								obj_t BgL_arg1554z00_153;

								{	/* Init/extend.scm 16 */

									{	/* Init/extend.scm 16 */
										obj_t BgL_locationz00_155;

										BgL_locationz00_155 = BBOOL(((bool_t) 0));
										{	/* Init/extend.scm 16 */

											BgL_arg1554z00_153 =
												BGl_readz00zz__readerz00(BgL_cportz00_149,
												BgL_locationz00_155);
										}
									}
								}
								{	/* Init/extend.scm 16 */
									int BgL_auxz00_177;

									BgL_auxz00_177 = (int) (BgL_iz00_150);
									CNST_TABLE_SET(BgL_auxz00_177, BgL_arg1554z00_153);
							}}
							{	/* Init/extend.scm 16 */
								int BgL_auxz00_156;

								BgL_auxz00_156 = (int) ((BgL_iz00_150 - ((long) 1)));
								{
									long BgL_iz00_182;

									BgL_iz00_182 = (long) (BgL_auxz00_156);
									BgL_iz00_150 = BgL_iz00_182;
									goto BgL_loopz00_151;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			return (BGl_za2extendzd2tableza2zd2zzinit_extendz00 = BNIL, BUNSPEC);
		}
	}



/* load-extend */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2extendzd2zzinit_extendz00(obj_t
		BgL_extendzd2namezd2_1)
	{
		AN_OBJECT;
		{	/* Init/extend.scm 25 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
					(BgL_extendzd2namezd2_1,
						BGl_za2extendzd2tableza2zd2zzinit_extendz00)))
				{	/* Init/extend.scm 26 */
					return BFALSE;
				}
			else
				{	/* Init/extend.scm 26 */
					BGl_za2extendzd2tableza2zd2zzinit_extendz00 =
						MAKE_PAIR(BgL_extendzd2namezd2_1,
						BGl_za2extendzd2tableza2zd2zzinit_extendz00);
					{	/* Init/extend.scm 28 */
						obj_t BgL_fnamez00_88;

						BgL_fnamez00_88 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_extendzd2namezd2_1,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						if (CBOOL(BgL_fnamez00_88))
							{	/* Init/extend.scm 29 */
								{	/* Init/extend.scm 31 */
									obj_t BgL_list1517z00_89;

									{	/* Init/extend.scm 31 */
										obj_t BgL_arg1519z00_91;

										{	/* Init/extend.scm 31 */
											obj_t BgL_arg1520z00_92;

											BgL_arg1520z00_92 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1519z00_91 =
												MAKE_PAIR(BgL_fnamez00_88, BgL_arg1520z00_92);
										}
										BgL_list1517z00_89 =
											MAKE_PAIR(BGl_string1546z00zzinit_extendz00,
											BgL_arg1519z00_91);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
										BgL_list1517z00_89);
								}
								BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
									BINT(((long) 0));
								BGl_za2currentzd2passza2zd2zzengine_passz00 = BgL_fnamez00_88;
								{
									obj_t BgL_hooksz00_96;

									obj_t BgL_hnamesz00_97;

									BgL_hooksz00_96 = BNIL;
									BgL_hnamesz00_97 = BNIL;
								BgL_zc3anonymousza31521ze3z83_98:
									if (NULLP(BgL_hooksz00_96))
										{	/* Init/extend.scm 31 */
											CNST_TABLE_REF(((long) 0));
										}
									else
										{	/* Init/extend.scm 31 */
											bool_t BgL_testz00_201;

											{	/* Init/extend.scm 31 */
												obj_t BgL_fun1528z00_105;

												BgL_fun1528z00_105 = CAR(BgL_hooksz00_96);
												BgL_testz00_201 =
													CBOOL(PROCEDURE_ENTRY(BgL_fun1528z00_105)
													(BgL_fun1528z00_105, BEOA));
											}
											if (BgL_testz00_201)
												{
													obj_t BgL_hnamesz00_208;

													obj_t BgL_hooksz00_206;

													BgL_hooksz00_206 = CDR(BgL_hooksz00_96);
													BgL_hnamesz00_208 = CDR(BgL_hnamesz00_97);
													BgL_hnamesz00_97 = BgL_hnamesz00_208;
													BgL_hooksz00_96 = BgL_hooksz00_206;
													goto BgL_zc3anonymousza31521ze3z83_98;
												}
											else
												{	/* Init/extend.scm 31 */
													BGl_internalzd2errorzd2zztools_errorz00
														(BgL_fnamez00_88, BGl_string1547z00zzinit_extendz00,
														CAR(BgL_hnamesz00_97));
												}
										}
								}
								{	/* Init/extend.scm 32 */
									obj_t BgL_envz00_109;

									BgL_envz00_109 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Init/extend.scm 32 */

										return
											BGl_loadqz00zz__evalz00(BgL_fnamez00_88, BgL_envz00_109);
									}
								}
							}
						else
							{	/* Init/extend.scm 33 */
								obj_t BgL_fnamez00_110;

								{	/* Init/extend.scm 33 */
									obj_t BgL_arg1543z00_132;

									BgL_arg1543z00_132 =
										string_append(BgL_extendzd2namezd2_1,
										BGl_string1548z00zzinit_extendz00);
									BgL_fnamez00_110 =
										BGl_findzd2filezf2pathz20zz__osz00(BgL_arg1543z00_132,
										BGl_za2libzd2dirza2zd2zzengine_paramz00);
								}
								if (CBOOL(BgL_fnamez00_110))
									{	/* Init/extend.scm 35 */
										{	/* Init/extend.scm 37 */
											obj_t BgL_list1530z00_111;

											{	/* Init/extend.scm 37 */
												obj_t BgL_arg1532z00_113;

												{	/* Init/extend.scm 37 */
													obj_t BgL_arg1533z00_114;

													BgL_arg1533z00_114 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
													BgL_arg1532z00_113 =
														MAKE_PAIR(BgL_fnamez00_110, BgL_arg1533z00_114);
												}
												BgL_list1530z00_111 =
													MAKE_PAIR(BGl_string1546z00zzinit_extendz00,
													BgL_arg1532z00_113);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
												BgL_list1530z00_111);
										}
										BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
											BINT(((long) 0));
										BGl_za2currentzd2passza2zd2zzengine_passz00 =
											BgL_fnamez00_110;
										{
											obj_t BgL_hooksz00_118;

											obj_t BgL_hnamesz00_119;

											BgL_hooksz00_118 = BNIL;
											BgL_hnamesz00_119 = BNIL;
										BgL_zc3anonymousza31534ze3z83_120:
											if (NULLP(BgL_hooksz00_118))
												{	/* Init/extend.scm 37 */
													CNST_TABLE_REF(((long) 0));
												}
											else
												{	/* Init/extend.scm 37 */
													bool_t BgL_testz00_228;

													{	/* Init/extend.scm 37 */
														obj_t BgL_fun1541z00_127;

														BgL_fun1541z00_127 = CAR(BgL_hooksz00_118);
														BgL_testz00_228 =
															CBOOL(PROCEDURE_ENTRY(BgL_fun1541z00_127)
															(BgL_fun1541z00_127, BEOA));
													}
													if (BgL_testz00_228)
														{
															obj_t BgL_hnamesz00_235;

															obj_t BgL_hooksz00_233;

															BgL_hooksz00_233 = CDR(BgL_hooksz00_118);
															BgL_hnamesz00_235 = CDR(BgL_hnamesz00_119);
															BgL_hnamesz00_119 = BgL_hnamesz00_235;
															BgL_hooksz00_118 = BgL_hooksz00_233;
															goto BgL_zc3anonymousza31534ze3z83_120;
														}
													else
														{	/* Init/extend.scm 37 */
															BGl_internalzd2errorzd2zztools_errorz00
																(BgL_fnamez00_110,
																BGl_string1547z00zzinit_extendz00,
																CAR(BgL_hnamesz00_119));
														}
												}
										}
										{	/* Init/extend.scm 38 */
											obj_t BgL_envz00_131;

											BgL_envz00_131 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Init/extend.scm 38 */

												return
													BGl_loadqz00zz__evalz00(BgL_fnamez00_110,
													BgL_envz00_131);
											}
										}
									}
								else
									{	/* Init/extend.scm 35 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string1549z00zzinit_extendz00,
											BGl_string1550z00zzinit_extendz00,
											BgL_extendzd2namezd2_1);
									}
							}
					}
				}
		}
	}



/* _load-extend */
	obj_t BGl__loadzd2extendzd2zzinit_extendz00(obj_t BgL_envz00_147,
		obj_t BgL_extendzd2namezd2_148)
	{
		AN_OBJECT;
		{	/* Init/extend.scm 25 */
			return BGl_loadzd2extendzd2zzinit_extendz00(BgL_extendzd2namezd2_148);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_extendz00()
	{
		AN_OBJECT;
		{	/* Init/extend.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1551z00zzinit_extendz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1551z00zzinit_extendz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string1551z00zzinit_extendz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1551z00zzinit_extendz00));
		}
	}

#ifdef __cplusplus
}
#endif
