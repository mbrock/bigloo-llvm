/*===========================================================================*/
/*   (Cc/cc.scm)                                                             */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/cc.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_pwdz00zz__osz00();
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_za2cflagsza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_ccz00 = BUNSPEC;
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_genericzd2initzd2zzcc_ccz00();
	static obj_t BGl_unixzd2cczd2zzcc_ccz00(obj_t, obj_t, bool_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	extern obj_t BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00;
	extern obj_t BGl_za2cczd2moveza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_loopz72z72z00zzcc_ccz00(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzcc_ccz00();
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_ccz00();
	extern obj_t BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
	BGL_IMPORT bool_t directoryp(char *);
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_mingwzd2cczd2zzcc_ccz00(obj_t, obj_t, bool_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugzd2optionza2z00zzengine_paramz00;
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__ccz00zzcc_ccz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_oszd2classzd2zz__osz00();
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2ccza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	static obj_t BGl_loopz00zzcc_ccz00(obj_t);
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_loopz72z72zzcc_ccz00(obj_t);
	static obj_t BGl_win32zd2cczd2zzcc_ccz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_ccz00();
	BGL_EXPORTED_DECL obj_t BGl_ccz00zzcc_ccz00(obj_t, obj_t, bool_t);
	static obj_t BGl_methodzd2initzd2zzcc_ccz00();
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cczd2envzd2zzcc_ccz00,
		BgL_bgl__ccza700za7za7cc_ccza7001856z00, BGl__ccz00zzcc_ccz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string1830z00zzcc_ccz00,
		BgL_bgl_string1830za700za7za7c1857za7, "unix", 4);
	      DEFINE_STRING(BGl_string1831z00zzcc_ccz00,
		BgL_bgl_string1831za700za7za7c1858za7, "win32", 5);
	      DEFINE_STRING(BGl_string1832z00zzcc_ccz00,
		BgL_bgl_string1832za700za7za7c1859za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1833z00zzcc_ccz00,
		BgL_bgl_string1833za700za7za7c1860za7, "cc", 2);
	      DEFINE_STRING(BGl_string1834z00zzcc_ccz00,
		BgL_bgl_string1834za700za7za7c1861za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string1835z00zzcc_ccz00,
		BgL_bgl_string1835za700za7za7c1862za7, ")", 1);
	      DEFINE_STRING(BGl_string1836z00zzcc_ccz00,
		BgL_bgl_string1836za700za7za7c1863za7, "   . cc (", 9);
	      DEFINE_STRING(BGl_string1837z00zzcc_ccz00,
		BgL_bgl_string1837za700za7za7c1864za7, ".", 1);
	      DEFINE_STRING(BGl_string1838z00zzcc_ccz00,
		BgL_bgl_string1838za700za7za7c1865za7, "", 0);
	      DEFINE_STRING(BGl_string1840z00zzcc_ccz00,
		BgL_bgl_string1840za700za7za7c1866za7, ".c", 2);
	      DEFINE_STRING(BGl_string1839z00zzcc_ccz00,
		BgL_bgl_string1839za700za7za7c1867za7, " ", 1);
	      DEFINE_STRING(BGl_string1841z00zzcc_ccz00,
		BgL_bgl_string1841za700za7za7c1868za7, " -I. ", 5);
	      DEFINE_STRING(BGl_string1842z00zzcc_ccz00,
		BgL_bgl_string1842za700za7za7c1869za7, " -c ", 4);
	      DEFINE_STRING(BGl_string1843z00zzcc_ccz00,
		BgL_bgl_string1843za700za7za7c1870za7, "&& ", 3);
	      DEFINE_STRING(BGl_string1844z00zzcc_ccz00,
		BgL_bgl_string1844za700za7za7c1871za7, " 2>&1 >/dev/null ", 17);
	      DEFINE_STRING(BGl_string1845z00zzcc_ccz00,
		BgL_bgl_string1845za700za7za7c1872za7, "      [", 7);
	      DEFINE_STRING(BGl_string1846z00zzcc_ccz00,
		BgL_bgl_string1846za700za7za7c1873za7, "can't process cc on stdout", 26);
	      DEFINE_STRING(BGl_string1847z00zzcc_ccz00,
		BgL_bgl_string1847za700za7za7c1874za7, "-I", 2);
	      DEFINE_STRING(BGl_string1848z00zzcc_ccz00,
		BgL_bgl_string1848za700za7za7c1875za7, "libdir:", 7);
	      DEFINE_STRING(BGl_string1850z00zzcc_ccz00,
		BgL_bgl_string1850za700za7za7c1876za7, ".c ", 3);
	      DEFINE_STRING(BGl_string1849z00zzcc_ccz00,
		BgL_bgl_string1849za700za7za7c1877za7, " - ", 3);
	      DEFINE_STRING(BGl_string1851z00zzcc_ccz00,
		BgL_bgl_string1851za700za7za7c1878za7, "      ", 6);
	      DEFINE_STRING(BGl_string1852z00zzcc_ccz00,
		BgL_bgl_string1852za700za7za7c1879za7, "cc_cc", 5);
	      DEFINE_STRING(BGl_string1853z00zzcc_ccz00,
		BgL_bgl_string1853za700za7za7c1880za7,
		"(:wait #t) (\"-I.\") (\"-c\") shell-mv shell-rm ", 44);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_ccz00(long
		BgL_checksumz00_482, char *BgL_fromz00_483)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_ccz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_ccz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcc_ccz00();
					BGl_cnstzd2initzd2zzcc_ccz00();
					BGl_importedzd2moduleszd2initz00zzcc_ccz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_ccz00()
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_cc");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_cc");
			BGl_modulezd2initializa7ationz75zz__processz00(((long) 0), "cc_cc");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcc_ccz00()
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 15 */
			{	/* Cc/cc.scm 15 */
				obj_t BgL_cportz00_470;

				BgL_cportz00_470 =
					bgl_open_input_string(BGl_string1853z00zzcc_ccz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_471;

					BgL_iz00_471 = ((long) 4);
				BgL_loopz00_472:
					if ((BgL_iz00_471 == ((long) -1)))
						{	/* Cc/cc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cc/cc.scm 15 */
							{	/* Cc/cc.scm 15 */
								obj_t BgL_arg1855z00_474;

								{	/* Cc/cc.scm 15 */

									{	/* Cc/cc.scm 15 */
										obj_t BgL_locationz00_476;

										BgL_locationz00_476 = BBOOL(((bool_t) 0));
										{	/* Cc/cc.scm 15 */

											BgL_arg1855z00_474 =
												BGl_readz00zz__readerz00(BgL_cportz00_470,
												BgL_locationz00_476);
										}
									}
								}
								{	/* Cc/cc.scm 15 */
									int BgL_auxz00_505;

									BgL_auxz00_505 = (int) (BgL_iz00_471);
									CNST_TABLE_SET(BgL_auxz00_505, BgL_arg1855z00_474);
							}}
							{	/* Cc/cc.scm 15 */
								int BgL_auxz00_477;

								BgL_auxz00_477 = (int) ((BgL_iz00_471 - ((long) 1)));
								{
									long BgL_iz00_510;

									BgL_iz00_510 = (long) (BgL_auxz00_477);
									BgL_iz00_471 = BgL_iz00_510;
									goto BgL_loopz00_472;
								}
							}
						}
				}
			}
		}
	}



/* cc */
	BGL_EXPORTED_DEF obj_t BGl_ccz00zzcc_ccz00(obj_t BgL_namez00_1,
		obj_t BgL_onamez00_2, bool_t BgL_needzd2tozd2returnz00_3)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 27 */
			if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
					BGl_string1830z00zzcc_ccz00))
				{	/* Cc/cc.scm 29 */
					return
						BGl_unixzd2cczd2zzcc_ccz00(BgL_namez00_1, BgL_onamez00_2,
						BgL_needzd2tozd2returnz00_3);
				}
			else
				{	/* Cc/cc.scm 29 */
					if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
							BGl_string1831z00zzcc_ccz00))
						{	/* Cc/cc.scm 31 */
							return BGl_win32zd2cczd2zzcc_ccz00(BgL_namez00_1, BgL_onamez00_2);
						}
					else
						{	/* Cc/cc.scm 31 */
							if (bigloo_strcmp(BGl_oszd2classzd2zz__osz00(),
									BGl_string1832z00zzcc_ccz00))
								{	/* Cc/cc.scm 33 */
									return
										BGl_mingwzd2cczd2zzcc_ccz00(BgL_namez00_1, BgL_onamez00_2,
										BgL_needzd2tozd2returnz00_3);
								}
							else
								{	/* Cc/cc.scm 33 */
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string1833z00zzcc_ccz00, BGl_string1834z00zzcc_ccz00,
										BGl_oszd2classzd2zz__osz00(), BNIL);
								}
						}
				}
		}
	}



/* _cc */
	obj_t BGl__ccz00zzcc_ccz00(obj_t BgL_envz00_466, obj_t BgL_namez00_467,
		obj_t BgL_onamez00_468, obj_t BgL_needzd2tozd2returnz00_469)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 27 */
			return
				BGl_ccz00zzcc_ccz00(BgL_namez00_467, BgL_onamez00_468,
				CBOOL(BgL_needzd2tozd2returnz00_469));
		}
	}



/* unix-cc */
	obj_t BGl_unixzd2cczd2zzcc_ccz00(obj_t BgL_namez00_4, obj_t BgL_onamez00_5,
		bool_t BgL_needzd2tozd2returnz00_6)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 41 */
			{	/* Cc/cc.scm 42 */
				obj_t BgL_list1547z00_120;

				{	/* Cc/cc.scm 42 */
					obj_t BgL_arg1549z00_122;

					{	/* Cc/cc.scm 42 */
						obj_t BgL_arg1551z00_123;

						{	/* Cc/cc.scm 42 */
							obj_t BgL_arg1553z00_125;

							BgL_arg1553z00_125 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1551z00_123 =
								MAKE_PAIR(BGl_string1835z00zzcc_ccz00, BgL_arg1553z00_125);
						}
						BgL_arg1549z00_122 =
							MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00, BgL_arg1551z00_123);
					}
					BgL_list1547z00_120 =
						MAKE_PAIR(BGl_string1836z00zzcc_ccz00, BgL_arg1549z00_122);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1547z00_120);
			}
			if (STRINGP(BgL_namez00_4))
				{	/* Cc/cc.scm 47 */
					obj_t BgL_objnamez00_127;

					if (STRINGP(BgL_onamez00_5))
						{	/* Cc/cc.scm 47 */
							BgL_objnamez00_127 = BgL_onamez00_5;
						}
					else
						{	/* Cc/cc.scm 47 */
							BgL_objnamez00_127 = BgL_namez00_4;
						}
					{	/* Cc/cc.scm 47 */
						obj_t BgL_basenamez00_128;

						BgL_basenamez00_128 = BGl_basenamez00zz__osz00(BgL_objnamez00_127);
						{	/* Cc/cc.scm 48 */
							bool_t BgL_needzd2ozd2_129;

							{	/* Cc/cc.scm 49 */
								bool_t BgL_testz00_540;

								if (bigloo_strcmp(BgL_basenamez00_128, BgL_objnamez00_127))
									{	/* Cc/cc.scm 49 */
										BgL_testz00_540 = ((bool_t) 0);
									}
								else
									{	/* Cc/cc.scm 49 */
										BgL_testz00_540 = ((bool_t) 1);
									}
								if (BgL_testz00_540)
									{	/* Cc/cc.scm 50 */
										bool_t BgL_testz00_543;

										if (bigloo_strcmp(BGl_pwdz00zz__osz00(),
												BGl_dirnamez00zz__osz00(BgL_objnamez00_127)))
											{	/* Cc/cc.scm 50 */
												BgL_testz00_543 = ((bool_t) 0);
											}
										else
											{	/* Cc/cc.scm 50 */
												BgL_testz00_543 = ((bool_t) 1);
											}
										if (BgL_testz00_543)
											{	/* Cc/cc.scm 50 */
												if (bigloo_strcmp(BGl_string1837z00zzcc_ccz00,
														BGl_dirnamez00zz__osz00(BgL_objnamez00_127)))
													{	/* Cc/cc.scm 51 */
														BgL_needzd2ozd2_129 = ((bool_t) 0);
													}
												else
													{	/* Cc/cc.scm 51 */
														BgL_needzd2ozd2_129 = ((bool_t) 1);
													}
											}
										else
											{	/* Cc/cc.scm 50 */
												BgL_needzd2ozd2_129 = ((bool_t) 0);
											}
									}
								else
									{	/* Cc/cc.scm 49 */
										BgL_needzd2ozd2_129 = ((bool_t) 0);
									}
							}
							{	/* Cc/cc.scm 49 */
								obj_t BgL_needmvz00_130;

								if (BgL_needzd2ozd2_129)
									{	/* Cc/cc.scm 52 */
										obj_t BgL__ortest_1531z00_224;

										BgL__ortest_1531z00_224 =
											BGl_za2cczd2moveza2zd2zzengine_paramz00;
										if (CBOOL(BgL__ortest_1531z00_224))
											{	/* Cc/cc.scm 52 */
												BgL_needmvz00_130 = BgL__ortest_1531z00_224;
											}
										else
											{	/* Cc/cc.scm 52 */
												obj_t BgL_string1z00_399;

												BgL_string1z00_399 =
													BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
												BgL_needmvz00_130 =
													BBOOL(bigloo_strcmp(BgL_string1z00_399,
														BGl_string1838z00zzcc_ccz00));
											}
									}
								else
									{	/* Cc/cc.scm 52 */
										BgL_needmvz00_130 = BFALSE;
									}
								{	/* Cc/cc.scm 52 */
									obj_t BgL_objz00_131;

									if (BgL_needzd2ozd2_129)
										{	/* Cc/cc.scm 54 */
											if (CBOOL(BgL_needmvz00_130))
												{	/* Cc/cc.scm 58 */
													obj_t BgL_arg1647z00_216;

													{	/* Cc/cc.scm 58 */
														obj_t BgL_arg1650z00_218;

														{	/* Cc/cc.scm 58 */
															obj_t BgL_arg1653z00_220;

															{	/* Cc/cc.scm 58 */
																obj_t BgL_res1824z00_403;

																{	/* Cc/cc.scm 58 */
																	obj_t BgL_symbolz00_401;

																	BgL_symbolz00_401 =
																		BGl_za2moduleza2z00zzmodule_modulez00;
																	{	/* Cc/cc.scm 58 */
																		obj_t BgL_arg2063z00_402;

																		BgL_arg2063z00_402 =
																			SYMBOL_TO_STRING(BgL_symbolz00_401);
																		BgL_res1824z00_403 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_402);
																	}
																}
																BgL_arg1653z00_220 = BgL_res1824z00_403;
															}
															BgL_arg1650z00_218 =
																bigloo_mangle(BgL_arg1653z00_220);
														}
														BgL_arg1647z00_216 =
															string_append_3(BgL_arg1650z00_218,
															BGl_string1837z00zzcc_ccz00,
															BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													}
													{	/* Cc/cc.scm 57 */
														obj_t BgL_list1648z00_217;

														BgL_list1648z00_217 =
															MAKE_PAIR(BgL_arg1647z00_216, BNIL);
														BgL_objz00_131 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1648z00_217);
													}
												}
											else
												{	/* Cc/cc.scm 63 */
													obj_t BgL_arg1654z00_221;

													BgL_arg1654z00_221 =
														string_append_3(BgL_objnamez00_127,
														BGl_string1837z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													{	/* Cc/cc.scm 62 */
														obj_t BgL_list1655z00_222;

														BgL_list1655z00_222 =
															MAKE_PAIR(BgL_arg1654z00_221, BNIL);
														BgL_objz00_131 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1655z00_222);
													}
												}
										}
									else
										{	/* Cc/cc.scm 54 */
											BgL_objz00_131 = BGl_string1838z00zzcc_ccz00;
										}
									{	/* Cc/cc.scm 53 */
										obj_t BgL_ccz00_132;

										{	/* Cc/cc.scm 66 */
											obj_t BgL_arg1599z00_173;

											obj_t BgL_arg1602z00_176;

											obj_t BgL_arg1603z00_177;

											obj_t BgL_arg1605z00_179;

											if (BgL_needzd2ozd2_129)
												{	/* Cc/cc.scm 72 */
													BgL_arg1599z00_173 =
														BGl_za2cczd2ozd2optionza2z00zzengine_paramz00;
												}
											else
												{	/* Cc/cc.scm 72 */
													BgL_arg1599z00_173 = BGl_string1838z00zzcc_ccz00;
												}
											BgL_arg1602z00_176 =
												BGl_loopz72z72z00zzcc_ccz00
												(BGl_za2libzd2dirza2zd2zzengine_paramz00);
											{	/* Cc/cc.scm 87 */
												bool_t BgL_testz00_570;

												if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
													{	/* Cc/cc.scm 87 */
														BgL_testz00_570 = ((bool_t) 1);
													}
												else
													{	/* Cc/cc.scm 87 */
														BgL_testz00_570 =
															(
															(long)
															CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
															((long) 0));
													}
												if (BgL_testz00_570)
													{	/* Cc/cc.scm 87 */
														BgL_arg1603z00_177 =
															string_append(BGl_string1839z00zzcc_ccz00,
															BGl_za2czd2debugzd2optionza2z00zzengine_paramz00);
													}
												else
													{	/* Cc/cc.scm 87 */
														BgL_arg1603z00_177 = BGl_string1838z00zzcc_ccz00;
													}
											}
											{	/* Cc/cc.scm 90 */
												obj_t BgL_list1645z00_214;

												{	/* Cc/cc.scm 90 */
													obj_t BgL_arg1646z00_215;

													BgL_arg1646z00_215 =
														MAKE_PAIR(BGl_string1840z00zzcc_ccz00, BNIL);
													BgL_list1645z00_214 =
														MAKE_PAIR(BgL_namez00_4, BgL_arg1646z00_215);
												}
												BgL_arg1605z00_179 =
													BGl_unixzd2filenamezd2zzcc_execz00
													(BgL_list1645z00_214);
											}
											{	/* Cc/cc.scm 66 */
												obj_t BgL_list1607z00_181;

												{	/* Cc/cc.scm 66 */
													obj_t BgL_arg1608z00_182;

													{	/* Cc/cc.scm 66 */
														obj_t BgL_arg1610z00_183;

														{	/* Cc/cc.scm 66 */
															obj_t BgL_arg1611z00_184;

															{	/* Cc/cc.scm 66 */
																obj_t BgL_arg1613z00_185;

																{	/* Cc/cc.scm 66 */
																	obj_t BgL_arg1614z00_186;

																	{	/* Cc/cc.scm 66 */
																		obj_t BgL_arg1615z00_187;

																		{	/* Cc/cc.scm 66 */
																			obj_t BgL_arg1616z00_188;

																			{	/* Cc/cc.scm 66 */
																				obj_t BgL_arg1618z00_189;

																				{	/* Cc/cc.scm 66 */
																					obj_t BgL_arg1621z00_190;

																					{	/* Cc/cc.scm 66 */
																						obj_t BgL_arg1622z00_191;

																						{	/* Cc/cc.scm 66 */
																							obj_t BgL_arg1623z00_192;

																							{	/* Cc/cc.scm 66 */
																								obj_t BgL_arg1624z00_193;

																								{	/* Cc/cc.scm 66 */
																									obj_t BgL_arg1625z00_194;

																									{	/* Cc/cc.scm 66 */
																										obj_t BgL_arg1626z00_195;

																										BgL_arg1626z00_195 =
																											MAKE_PAIR
																											(BGl_string1839z00zzcc_ccz00,
																											BNIL);
																										BgL_arg1625z00_194 =
																											MAKE_PAIR
																											(BgL_arg1605z00_179,
																											BgL_arg1626z00_195);
																									}
																									BgL_arg1624z00_193 =
																										MAKE_PAIR
																										(BGl_string1839z00zzcc_ccz00,
																										BgL_arg1625z00_194);
																								}
																								BgL_arg1623z00_192 =
																									MAKE_PAIR(BgL_arg1603z00_177,
																									BgL_arg1624z00_193);
																							}
																							BgL_arg1622z00_191 =
																								MAKE_PAIR(BgL_arg1602z00_176,
																								BgL_arg1623z00_192);
																						}
																						BgL_arg1621z00_190 =
																							MAKE_PAIR
																							(BGl_string1841z00zzcc_ccz00,
																							BgL_arg1622z00_191);
																					}
																					BgL_arg1618z00_189 =
																						MAKE_PAIR(BgL_objz00_131,
																						BgL_arg1621z00_190);
																				}
																				BgL_arg1616z00_188 =
																					MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																					BgL_arg1618z00_189);
																			}
																			BgL_arg1615z00_187 =
																				MAKE_PAIR(BgL_arg1599z00_173,
																				BgL_arg1616z00_188);
																		}
																		BgL_arg1614z00_186 =
																			MAKE_PAIR(BGl_string1842z00zzcc_ccz00,
																			BgL_arg1615z00_187);
																	}
																	BgL_arg1613z00_185 =
																		MAKE_PAIR
																		(BGl_za2cflagsza2z00zzengine_paramz00,
																		BgL_arg1614z00_186);
																}
																BgL_arg1611z00_184 =
																	MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																	BgL_arg1613z00_185);
															}
															BgL_arg1610z00_183 =
																MAKE_PAIR
																(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
																BgL_arg1611z00_184);
														}
														BgL_arg1608z00_182 =
															MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
															BgL_arg1610z00_183);
													}
													BgL_list1607z00_181 =
														MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00,
														BgL_arg1608z00_182);
												}
												BgL_ccz00_132 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list1607z00_181);
											}
										}
										{	/* Cc/cc.scm 66 */
											obj_t BgL_rmzd2csrczd2_133;

											if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
												{	/* Cc/cc.scm 92 */
													obj_t BgL_arg1583z00_159;

													obj_t BgL_arg1585z00_161;

													BgL_arg1583z00_159 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 0)));
													{	/* Cc/cc.scm 95 */
														obj_t BgL_list1592z00_168;

														{	/* Cc/cc.scm 95 */
															obj_t BgL_arg1593z00_169;

															BgL_arg1593z00_169 =
																MAKE_PAIR(BGl_string1840z00zzcc_ccz00, BNIL);
															BgL_list1592z00_168 =
																MAKE_PAIR(BgL_namez00_4, BgL_arg1593z00_169);
														}
														BgL_arg1585z00_161 =
															BGl_unixzd2filenamezd2zzcc_execz00
															(BgL_list1592z00_168);
													}
													{	/* Cc/cc.scm 92 */
														obj_t BgL_list1587z00_163;

														{	/* Cc/cc.scm 92 */
															obj_t BgL_arg1588z00_164;

															{	/* Cc/cc.scm 92 */
																obj_t BgL_arg1589z00_165;

																{	/* Cc/cc.scm 92 */
																	obj_t BgL_arg1590z00_166;

																	{	/* Cc/cc.scm 92 */
																		obj_t BgL_arg1591z00_167;

																		BgL_arg1591z00_167 =
																			MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																			BNIL);
																		BgL_arg1590z00_166 =
																			MAKE_PAIR(BgL_arg1585z00_161,
																			BgL_arg1591z00_167);
																	}
																	BgL_arg1589z00_165 =
																		MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																		BgL_arg1590z00_166);
																}
																BgL_arg1588z00_164 =
																	MAKE_PAIR(BgL_arg1583z00_159,
																	BgL_arg1589z00_165);
															}
															BgL_list1587z00_163 =
																MAKE_PAIR(BGl_string1843z00zzcc_ccz00,
																BgL_arg1588z00_164);
														}
														BgL_rmzd2csrczd2_133 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list1587z00_163);
												}}
											else
												{	/* Cc/cc.scm 91 */
													BgL_rmzd2csrczd2_133 = BGl_string1838z00zzcc_ccz00;
												}
											{	/* Cc/cc.scm 91 */
												obj_t BgL_mvzd2objzd2_134;

												if (CBOOL(BgL_needmvz00_130))
													{	/* Cc/cc.scm 98 */
														obj_t BgL_arg1563z00_142;

														obj_t BgL_arg1566z00_145;

														BgL_arg1563z00_142 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 1)));
														{	/* Cc/cc.scm 103 */
															obj_t BgL_list1577z00_154;

															{	/* Cc/cc.scm 103 */
																obj_t BgL_arg1578z00_155;

																{	/* Cc/cc.scm 103 */
																	obj_t BgL_arg1581z00_157;

																	BgL_arg1581z00_157 =
																		MAKE_PAIR
																		(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
																		BNIL);
																	BgL_arg1578z00_155 =
																		MAKE_PAIR(BGl_string1837z00zzcc_ccz00,
																		BgL_arg1581z00_157);
																}
																BgL_list1577z00_154 =
																	MAKE_PAIR(BgL_objnamez00_127,
																	BgL_arg1578z00_155);
															}
															BgL_arg1566z00_145 =
																BGl_unixzd2filenamezd2zzcc_execz00
																(BgL_list1577z00_154);
														}
														{	/* Cc/cc.scm 98 */
															obj_t BgL_list1568z00_147;

															{	/* Cc/cc.scm 98 */
																obj_t BgL_arg1570z00_148;

																{	/* Cc/cc.scm 98 */
																	obj_t BgL_arg1571z00_149;

																	{	/* Cc/cc.scm 98 */
																		obj_t BgL_arg1572z00_150;

																		{	/* Cc/cc.scm 98 */
																			obj_t BgL_arg1574z00_151;

																			{	/* Cc/cc.scm 98 */
																				obj_t BgL_arg1575z00_152;

																				{	/* Cc/cc.scm 98 */
																					obj_t BgL_arg1576z00_153;

																					BgL_arg1576z00_153 =
																						MAKE_PAIR
																						(BGl_string1844z00zzcc_ccz00, BNIL);
																					BgL_arg1575z00_152 =
																						MAKE_PAIR(BgL_arg1566z00_145,
																						BgL_arg1576z00_153);
																				}
																				BgL_arg1574z00_151 =
																					MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																					BgL_arg1575z00_152);
																			}
																			BgL_arg1572z00_150 =
																				MAKE_PAIR(BgL_objz00_131,
																				BgL_arg1574z00_151);
																		}
																		BgL_arg1571z00_149 =
																			MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																			BgL_arg1572z00_150);
																	}
																	BgL_arg1570z00_148 =
																		MAKE_PAIR(BgL_arg1563z00_142,
																		BgL_arg1571z00_149);
																}
																BgL_list1568z00_147 =
																	MAKE_PAIR(BGl_string1843z00zzcc_ccz00,
																	BgL_arg1570z00_148);
															}
															BgL_mvzd2objzd2_134 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1568z00_147);
													}}
												else
													{	/* Cc/cc.scm 97 */
														BgL_mvzd2objzd2_134 = BGl_string1838z00zzcc_ccz00;
													}
												{	/* Cc/cc.scm 97 */
													obj_t BgL_cmdz00_135;

													BgL_cmdz00_135 =
														string_append_3(BgL_ccz00_132, BgL_mvzd2objzd2_134,
														BgL_rmzd2csrczd2_133);
													{	/* Cc/cc.scm 108 */

														{	/* Cc/cc.scm 109 */
															obj_t BgL_list1555z00_136;

															{	/* Cc/cc.scm 109 */
																obj_t BgL_arg1557z00_138;

																{	/* Cc/cc.scm 109 */
																	obj_t BgL_arg1559z00_139;

																	{	/* Cc/cc.scm 109 */
																		obj_t BgL_arg1560z00_140;

																		BgL_arg1560z00_140 =
																			MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																			BNIL);
																		BgL_arg1559z00_139 =
																			MAKE_PAIR(BCHAR(((unsigned char) ']')),
																			BgL_arg1560z00_140);
																	}
																	BgL_arg1557z00_138 =
																		MAKE_PAIR(BgL_cmdz00_135,
																		BgL_arg1559z00_139);
																}
																BgL_list1555z00_136 =
																	MAKE_PAIR(BGl_string1845z00zzcc_ccz00,
																	BgL_arg1557z00_138);
															}
															BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
																BgL_list1555z00_136);
														}
														return
															BGl_execz00zzcc_execz00(BgL_cmdz00_135,
															BgL_needzd2tozd2returnz00_6,
															BGl_string1833z00zzcc_ccz00);
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
			else
				{	/* Cc/cc.scm 44 */
					return
						BGl_errorz00zz__errorz00(BGl_string1833z00zzcc_ccz00,
						BGl_string1846z00zzcc_ccz00, BgL_namez00_4);
				}
		}
	}



/* loop'' */
	obj_t BGl_loopz72z72z00zzcc_ccz00(obj_t BgL_pathz00_197)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 76 */
		BGl_loopz72z72z00zzcc_ccz00:
			if (NULLP(BgL_pathz00_197))
				{	/* Cc/cc.scm 78 */
					return BGl_string1838z00zzcc_ccz00;
				}
			else
				{	/* Cc/cc.scm 80 */
					bool_t BgL_testz00_637;

					{	/* Cc/cc.scm 80 */
						obj_t BgL_arg1643z00_211;

						BgL_arg1643z00_211 = CAR(BgL_pathz00_197);
						BgL_testz00_637 = directoryp(BSTRING_TO_STRING(BgL_arg1643z00_211));
					}
					if (BgL_testz00_637)
						{	/* Cc/cc.scm 81 */
							obj_t BgL_arg1631z00_202;

							obj_t BgL_arg1633z00_204;

							BgL_arg1631z00_202 = CAR(BgL_pathz00_197);
							BgL_arg1633z00_204 =
								BGl_loopz72z72z00zzcc_ccz00(CDR(BgL_pathz00_197));
							{	/* Cc/cc.scm 81 */
								obj_t BgL_list1634z00_205;

								{	/* Cc/cc.scm 81 */
									obj_t BgL_arg1635z00_206;

									{	/* Cc/cc.scm 81 */
										obj_t BgL_arg1636z00_207;

										{	/* Cc/cc.scm 81 */
											obj_t BgL_arg1637z00_208;

											BgL_arg1637z00_208 = MAKE_PAIR(BgL_arg1633z00_204, BNIL);
											BgL_arg1636z00_207 =
												MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
												BgL_arg1637z00_208);
										}
										BgL_arg1635z00_206 =
											MAKE_PAIR(BgL_arg1631z00_202, BgL_arg1636z00_207);
									}
									BgL_list1634z00_205 =
										MAKE_PAIR(BGl_string1847z00zzcc_ccz00, BgL_arg1635z00_206);
								}
								return
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1634z00_205);
							}
						}
					else
						{
							obj_t BgL_pathz00_649;

							BgL_pathz00_649 = CDR(BgL_pathz00_197);
							BgL_pathz00_197 = BgL_pathz00_649;
							goto BGl_loopz72z72z00zzcc_ccz00;
						}
				}
		}
	}



/* mingw-cc */
	obj_t BGl_mingwzd2cczd2zzcc_ccz00(obj_t BgL_namez00_7, obj_t BgL_onamez00_8,
		bool_t BgL_needzd2tozd2returnz00_9)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 115 */
			{	/* Cc/cc.scm 116 */
				obj_t BgL_list1666z00_235;

				{	/* Cc/cc.scm 116 */
					obj_t BgL_arg1668z00_237;

					{	/* Cc/cc.scm 116 */
						obj_t BgL_arg1669z00_238;

						{	/* Cc/cc.scm 116 */
							obj_t BgL_arg1672z00_240;

							BgL_arg1672z00_240 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1669z00_238 =
								MAKE_PAIR(BGl_string1835z00zzcc_ccz00, BgL_arg1672z00_240);
						}
						BgL_arg1668z00_237 =
							MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00, BgL_arg1669z00_238);
					}
					BgL_list1666z00_235 =
						MAKE_PAIR(BGl_string1836z00zzcc_ccz00, BgL_arg1668z00_237);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1666z00_235);
			}
			{	/* Cc/cc.scm 117 */
				obj_t BgL_port1532z00_241;

				{	/* Cc/cc.scm 117 */
					obj_t BgL_res1825z00_413;

					{	/* Cc/cc.scm 117 */
						obj_t BgL_auxz00_658;

						BgL_auxz00_658 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1825z00_413 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_658);
					}
					BgL_port1532z00_241 = BgL_res1825z00_413;
				}
				bgl_display_string(BGl_string1848z00zzcc_ccz00, BgL_port1532z00_241);
				bgl_display_obj(BGl_za2libzd2dirza2zd2zzengine_paramz00,
					BgL_port1532z00_241);
				bgl_display_string(BGl_string1849z00zzcc_ccz00, BgL_port1532z00_241);
				bgl_display_obj(BGl_za2defaultzd2libzd2dirza2z00zzengine_paramz00,
					BgL_port1532z00_241);
				bgl_display_char(((unsigned char) '\n'), BgL_port1532z00_241);
			}
			if (STRINGP(BgL_namez00_7))
				{	/* Cc/cc.scm 122 */
					obj_t BgL_onamez00_243;

					if (STRINGP(BgL_onamez00_8))
						{	/* Cc/cc.scm 122 */
							BgL_onamez00_243 = BgL_onamez00_8;
						}
					else
						{	/* Cc/cc.scm 122 */
							BgL_onamez00_243 = BgL_namez00_7;
						}
					{	/* Cc/cc.scm 122 */
						obj_t BgL_destzd2objzd2_244;

						if (CBOOL(BGl_za2cczd2moveza2zd2zzengine_paramz00))
							{	/* Cc/cc.scm 123 */
								BgL_destzd2objzd2_244 = BGl_string1838z00zzcc_ccz00;
							}
						else
							{	/* Cc/cc.scm 126 */
								obj_t BgL_arg1739z00_306;

								{	/* Cc/cc.scm 126 */
									obj_t BgL_list1741z00_308;

									{	/* Cc/cc.scm 126 */
										obj_t BgL_arg1742z00_309;

										{	/* Cc/cc.scm 126 */
											obj_t BgL_arg1743z00_310;

											{	/* Cc/cc.scm 126 */
												obj_t BgL_arg1745z00_312;

												BgL_arg1745z00_312 =
													MAKE_PAIR
													(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
													BNIL);
												BgL_arg1743z00_310 =
													MAKE_PAIR(BGl_string1837z00zzcc_ccz00,
													BgL_arg1745z00_312);
											}
											BgL_arg1742z00_309 =
												MAKE_PAIR(BgL_onamez00_243, BgL_arg1743z00_310);
										}
										BgL_list1741z00_308 =
											MAKE_PAIR(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
											BgL_arg1742z00_309);
									}
									BgL_arg1739z00_306 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1741z00_308);
								}
								{	/* Cc/cc.scm 125 */
									obj_t BgL_list1740z00_307;

									BgL_list1740z00_307 = MAKE_PAIR(BgL_arg1739z00_306, BNIL);
									BgL_destzd2objzd2_244 =
										BGl_unixzd2filenamezd2zzcc_execz00(BgL_list1740z00_307);
								}
							}
						{	/* Cc/cc.scm 123 */
							obj_t BgL_ccz00_245;

							{	/* Cc/cc.scm 128 */
								obj_t BgL_arg1697z00_271;

								obj_t BgL_arg1700z00_272;

								obj_t BgL_arg1702z00_274;

								BgL_arg1697z00_271 =
									BGl_loopz72z72zzcc_ccz00
									(BGl_za2libzd2dirza2zd2zzengine_paramz00);
								{	/* Cc/cc.scm 143 */
									bool_t BgL_testz00_680;

									if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
										{	/* Cc/cc.scm 143 */
											BgL_testz00_680 = ((bool_t) 1);
										}
									else
										{	/* Cc/cc.scm 143 */
											BgL_testz00_680 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
												((long) 0));
										}
									if (BgL_testz00_680)
										{	/* Cc/cc.scm 143 */
											BgL_arg1700z00_272 =
												string_append(BGl_string1839z00zzcc_ccz00,
												BGl_za2czd2debugzd2optionza2z00zzengine_paramz00);
										}
									else
										{	/* Cc/cc.scm 143 */
											BgL_arg1700z00_272 = BGl_string1838z00zzcc_ccz00;
										}
								}
								{	/* Cc/cc.scm 146 */
									obj_t BgL_list1737z00_304;

									{	/* Cc/cc.scm 146 */
										obj_t BgL_arg1738z00_305;

										BgL_arg1738z00_305 =
											MAKE_PAIR(BGl_string1840z00zzcc_ccz00, BNIL);
										BgL_list1737z00_304 =
											MAKE_PAIR(BgL_namez00_7, BgL_arg1738z00_305);
									}
									BgL_arg1702z00_274 =
										BGl_unixzd2filenamezd2zzcc_execz00(BgL_list1737z00_304);
								}
								{	/* Cc/cc.scm 128 */
									obj_t BgL_list1704z00_276;

									{	/* Cc/cc.scm 128 */
										obj_t BgL_arg1705z00_277;

										{	/* Cc/cc.scm 128 */
											obj_t BgL_arg1706z00_278;

											{	/* Cc/cc.scm 128 */
												obj_t BgL_arg1707z00_279;

												{	/* Cc/cc.scm 128 */
													obj_t BgL_arg1708z00_280;

													{	/* Cc/cc.scm 128 */
														obj_t BgL_arg1709z00_281;

														{	/* Cc/cc.scm 128 */
															obj_t BgL_arg1710z00_282;

															{	/* Cc/cc.scm 128 */
																obj_t BgL_arg1711z00_283;

																{	/* Cc/cc.scm 128 */
																	obj_t BgL_arg1713z00_284;

																	{	/* Cc/cc.scm 128 */
																		obj_t BgL_arg1714z00_285;

																		{	/* Cc/cc.scm 128 */
																			obj_t BgL_arg1715z00_286;

																			{	/* Cc/cc.scm 128 */
																				obj_t BgL_arg1718z00_287;

																				{	/* Cc/cc.scm 128 */
																					obj_t BgL_arg1719z00_288;

																					BgL_arg1719z00_288 =
																						MAKE_PAIR
																						(BGl_string1839z00zzcc_ccz00, BNIL);
																					BgL_arg1718z00_287 =
																						MAKE_PAIR(BgL_arg1702z00_274,
																						BgL_arg1719z00_288);
																				}
																				BgL_arg1715z00_286 =
																					MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
																					BgL_arg1718z00_287);
																			}
																			BgL_arg1714z00_285 =
																				MAKE_PAIR(BgL_arg1700z00_272,
																				BgL_arg1715z00_286);
																		}
																		BgL_arg1713z00_284 =
																			MAKE_PAIR(BgL_arg1697z00_271,
																			BgL_arg1714z00_285);
																	}
																	BgL_arg1711z00_283 =
																		MAKE_PAIR(BGl_string1841z00zzcc_ccz00,
																		BgL_arg1713z00_284);
																}
																BgL_arg1710z00_282 =
																	MAKE_PAIR(BgL_destzd2objzd2_244,
																	BgL_arg1711z00_283);
															}
															BgL_arg1709z00_281 =
																MAKE_PAIR(BGl_string1842z00zzcc_ccz00,
																BgL_arg1710z00_282);
														}
														BgL_arg1708z00_280 =
															MAKE_PAIR(BGl_za2cflagsza2z00zzengine_paramz00,
															BgL_arg1709z00_281);
													}
													BgL_arg1707z00_279 =
														MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
														BgL_arg1708z00_280);
												}
												BgL_arg1706z00_278 =
													MAKE_PAIR(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
													BgL_arg1707z00_279);
											}
											BgL_arg1705z00_277 =
												MAKE_PAIR(BGl_string1839z00zzcc_ccz00,
												BgL_arg1706z00_278);
										}
										BgL_list1704z00_276 =
											MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00,
											BgL_arg1705z00_277);
									}
									BgL_ccz00_245 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1704z00_276);
								}
							}
							{	/* Cc/cc.scm 128 */
								obj_t BgL_basenamez00_246;

								BgL_basenamez00_246 =
									BGl_basenamez00zz__osz00(BgL_onamez00_243);
								{	/* Cc/cc.scm 149 */
									obj_t BgL_cmdz00_249;

									BgL_cmdz00_249 =
										string_append_3(BgL_ccz00_245, BGl_string1838z00zzcc_ccz00,
										BGl_string1838z00zzcc_ccz00);
									{	/* Cc/cc.scm 150 */

										{	/* Cc/cc.scm 151 */
											obj_t BgL_port1533z00_250;

											{	/* Cc/cc.scm 151 */
												obj_t BgL_res1826z00_427;

												{	/* Cc/cc.scm 151 */
													obj_t BgL_auxz00_705;

													BgL_auxz00_705 = BGL_CURRENT_DYNAMIC_ENV();
													BgL_res1826z00_427 =
														BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_705);
												}
												BgL_port1533z00_250 = BgL_res1826z00_427;
											}
											bgl_display_obj(BgL_cmdz00_249, BgL_port1533z00_250);
											bgl_display_char(((unsigned char) '\n'),
												BgL_port1533z00_250);
										}
										{	/* Cc/cc.scm 152 */
											obj_t BgL_list1674z00_251;

											{	/* Cc/cc.scm 152 */
												obj_t BgL_arg1676z00_253;

												{	/* Cc/cc.scm 152 */
													obj_t BgL_arg1677z00_254;

													{	/* Cc/cc.scm 152 */
														obj_t BgL_arg1678z00_255;

														BgL_arg1678z00_255 =
															MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
														BgL_arg1677z00_254 =
															MAKE_PAIR(BCHAR(((unsigned char) ']')),
															BgL_arg1678z00_255);
													}
													BgL_arg1676z00_253 =
														MAKE_PAIR(BgL_cmdz00_249, BgL_arg1677z00_254);
												}
												BgL_list1674z00_251 =
													MAKE_PAIR(BGl_string1845z00zzcc_ccz00,
													BgL_arg1676z00_253);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1674z00_251);
										}
										BGl_execz00zzcc_execz00(BgL_cmdz00_249,
											BgL_needzd2tozd2returnz00_9, BGl_string1833z00zzcc_ccz00);
										{	/* Cc/cc.scm 154 */
											bool_t BgL_testz00_719;

											if (CBOOL(BGl_za2cczd2moveza2zd2zzengine_paramz00))
												{	/* Cc/cc.scm 154 */
													if (bigloo_strcmp(BgL_basenamez00_246,
															BgL_onamez00_243))
														{	/* Cc/cc.scm 155 */
															BgL_testz00_719 = ((bool_t) 0);
														}
													else
														{	/* Cc/cc.scm 155 */
															if (bigloo_strcmp(BGl_pwdz00zz__osz00(),
																	BGl_dirnamez00zz__osz00(BgL_onamez00_243)))
																{	/* Cc/cc.scm 156 */
																	BgL_testz00_719 = ((bool_t) 0);
																}
															else
																{	/* Cc/cc.scm 156 */
																	if (bigloo_strcmp(BGl_string1837z00zzcc_ccz00,
																			BGl_dirnamez00zz__osz00
																			(BgL_onamez00_243)))
																		{	/* Cc/cc.scm 157 */
																			BgL_testz00_719 = ((bool_t) 0);
																		}
																	else
																		{	/* Cc/cc.scm 157 */
																			BgL_testz00_719 = ((bool_t) 1);
																		}
																}
														}
												}
											else
												{	/* Cc/cc.scm 154 */
													BgL_testz00_719 = ((bool_t) 0);
												}
											if (BgL_testz00_719)
												{	/* Cc/cc.scm 158 */
													obj_t BgL_arg1680z00_257;

													obj_t BgL_arg1684z00_258;

													BgL_arg1680z00_257 =
														string_append_3(BgL_basenamez00_246,
														BGl_string1837z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													BgL_arg1684z00_258 =
														string_append_3(BgL_onamez00_243,
														BGl_string1837z00zzcc_ccz00,
														BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
													{	/* Cc/cc.scm 158 */
														char *BgL_string1z00_435;

														char *BgL_string2z00_436;

														BgL_string1z00_435 =
															BSTRING_TO_STRING(BgL_arg1680z00_257);
														BgL_string2z00_436 =
															BSTRING_TO_STRING(BgL_arg1684z00_258);
														{	/* Cc/cc.scm 158 */
															bool_t BgL_testz00_735;

															{	/* Cc/cc.scm 158 */
																int BgL_arg1965z00_438;

																BgL_arg1965z00_438 =
																	rename(BgL_string1z00_435,
																	BgL_string2z00_436);
																BgL_testz00_735 =
																	((long) (BgL_arg1965z00_438) == ((long) 0));
															}
															if (BgL_testz00_735)
																{	/* Cc/cc.scm 158 */
																	((bool_t) 1);
																}
															else
																{	/* Cc/cc.scm 158 */
																	((bool_t) 0);
																}
														}
													}
												}
											else
												{	/* Cc/cc.scm 154 */
													((bool_t) 0);
												}
										}
										if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
											{	/* Cc/cc.scm 161 */
												obj_t BgL_arg1692z00_266;

												BgL_arg1692z00_266 =
													string_append(BgL_namez00_7,
													BGl_string1850z00zzcc_ccz00);
												{	/* Cc/cc.scm 161 */
													char *BgL_stringz00_442;

													BgL_stringz00_442 =
														BSTRING_TO_STRING(BgL_arg1692z00_266);
													if (unlink(BgL_stringz00_442))
														{	/* Cc/cc.scm 161 */
															return BFALSE;
														}
													else
														{	/* Cc/cc.scm 161 */
															return BTRUE;
														}
												}
											}
										else
											{	/* Cc/cc.scm 160 */
												return BFALSE;
											}
									}
								}
							}
						}
					}
				}
			else
				{	/* Cc/cc.scm 119 */
					return
						BGl_errorz00zz__errorz00(BGl_string1833z00zzcc_ccz00,
						BGl_string1846z00zzcc_ccz00, BgL_namez00_7);
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzcc_ccz00(obj_t BgL_pathz00_290)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 136 */
			if (NULLP(BgL_pathz00_290))
				{	/* Cc/cc.scm 137 */
					return BGl_string1838z00zzcc_ccz00;
				}
			else
				{	/* Cc/cc.scm 139 */
					obj_t BgL_arg1725z00_294;

					obj_t BgL_arg1730z00_296;

					BgL_arg1725z00_294 = CAR(BgL_pathz00_290);
					BgL_arg1730z00_296 = BGl_loopz72z72zzcc_ccz00(CDR(BgL_pathz00_290));
					{	/* Cc/cc.scm 139 */
						obj_t BgL_list1731z00_297;

						{	/* Cc/cc.scm 139 */
							obj_t BgL_arg1732z00_298;

							{	/* Cc/cc.scm 139 */
								obj_t BgL_arg1733z00_299;

								{	/* Cc/cc.scm 139 */
									obj_t BgL_arg1734z00_300;

									BgL_arg1734z00_300 = MAKE_PAIR(BgL_arg1730z00_296, BNIL);
									BgL_arg1733z00_299 =
										MAKE_PAIR(BGl_string1839z00zzcc_ccz00, BgL_arg1734z00_300);
								}
								BgL_arg1732z00_298 =
									MAKE_PAIR(BgL_arg1725z00_294, BgL_arg1733z00_299);
							}
							BgL_list1731z00_297 =
								MAKE_PAIR(BGl_string1847z00zzcc_ccz00, BgL_arg1732z00_298);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1731z00_297);
					}
				}
		}
	}



/* win32-cc */
	obj_t BGl_win32zd2cczd2zzcc_ccz00(obj_t BgL_namez00_10, obj_t BgL_onamez00_11)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 166 */
			{	/* Cc/cc.scm 167 */
				obj_t BgL_list1747z00_314;

				{	/* Cc/cc.scm 167 */
					obj_t BgL_arg1749z00_316;

					{	/* Cc/cc.scm 167 */
						obj_t BgL_arg1750z00_317;

						{	/* Cc/cc.scm 167 */
							obj_t BgL_arg1753z00_319;

							BgL_arg1753z00_319 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg1750z00_317 =
								MAKE_PAIR(BGl_string1835z00zzcc_ccz00, BgL_arg1753z00_319);
						}
						BgL_arg1749z00_316 =
							MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00, BgL_arg1750z00_317);
					}
					BgL_list1747z00_314 =
						MAKE_PAIR(BGl_string1836z00zzcc_ccz00, BgL_arg1749z00_316);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1747z00_314);
			}
			if (STRINGP(BgL_namez00_10))
				{	/* Cc/cc.scm 172 */
					obj_t BgL_onamez00_321;

					if (STRINGP(BgL_onamez00_11))
						{	/* Cc/cc.scm 172 */
							BgL_onamez00_321 = BgL_onamez00_11;
						}
					else
						{	/* Cc/cc.scm 172 */
							BgL_onamez00_321 = BgL_namez00_10;
						}
					{	/* Cc/cc.scm 172 */
						obj_t BgL_cczd2argszd2_322;

						{	/* Cc/cc.scm 173 */
							obj_t BgL_arg1775z00_334;

							obj_t BgL_arg1776z00_335;

							obj_t BgL_arg1777z00_336;

							obj_t BgL_arg1778z00_337;

							obj_t BgL_arg1779z00_338;

							obj_t BgL_arg1782z00_339;

							obj_t BgL_arg1783z00_340;

							obj_t BgL_arg1784z00_341;

							BgL_arg1775z00_334 =
								BGl_stringzd2splitzd2charz00zztools_miscz00
								(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
								BCHAR(((unsigned char) ' ')));
							BgL_arg1776z00_335 =
								BGl_stringzd2splitzd2charz00zztools_miscz00
								(BGl_za2cflagsza2z00zzengine_paramz00,
								BCHAR(((unsigned char) ' ')));
							BgL_arg1777z00_336 = CNST_TABLE_REF(((long) 2));
							BgL_arg1778z00_337 = CNST_TABLE_REF(((long) 3));
							BgL_arg1779z00_338 =
								BGl_loopz00zzcc_ccz00(BGl_za2libzd2dirza2zd2zzengine_paramz00);
							{	/* Cc/cc.scm 182 */
								bool_t BgL_testz00_774;

								if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
									{	/* Cc/cc.scm 182 */
										BgL_testz00_774 = ((bool_t) 1);
									}
								else
									{	/* Cc/cc.scm 182 */
										BgL_testz00_774 =
											(
											(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
											((long) 0));
									}
								if (BgL_testz00_774)
									{	/* Cc/cc.scm 182 */
										BgL_arg1782z00_339 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2czd2debugzd2optionza2z00zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
									}
								else
									{	/* Cc/cc.scm 182 */
										BgL_arg1782z00_339 = BNIL;
									}
							}
							{	/* Cc/cc.scm 185 */
								obj_t BgL_arg1803z00_361;

								BgL_arg1803z00_361 =
									string_append(BgL_namez00_10, BGl_string1840z00zzcc_ccz00);
								{	/* Cc/cc.scm 185 */
									obj_t BgL_list1804z00_362;

									BgL_list1804z00_362 = MAKE_PAIR(BgL_arg1803z00_361, BNIL);
									BgL_arg1783z00_340 = BgL_list1804z00_362;
								}
							}
							{	/* Cc/cc.scm 186 */
								bool_t BgL_testz00_783;

								{	/* Cc/cc.scm 187 */
									unsigned char BgL_arg1818z00_374;

									{	/* Cc/cc.scm 187 */
										obj_t BgL_arg1819z00_375;

										{	/* Cc/cc.scm 187 */
											long BgL_arg1820z00_376;

											BgL_arg1820z00_376 =
												STRING_LENGTH
												(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00);
											BgL_arg1819z00_375 =
												BINT((BgL_arg1820z00_376 - ((long) 1)));
										}
										BgL_arg1818z00_374 =
											STRING_REF(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
											(long) CINT(BgL_arg1819z00_375));
									}
									BgL_testz00_783 =
										(BgL_arg1818z00_374 == ((unsigned char) ' '));
								}
								if (BgL_testz00_783)
									{	/* Cc/cc.scm 190 */
										obj_t BgL_arg1806z00_364;

										BgL_arg1806z00_364 =
											string_append_3(BgL_onamez00_321,
											BGl_string1837z00zzcc_ccz00,
											BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
										{	/* Cc/cc.scm 189 */
											obj_t BgL_list1807z00_365;

											{	/* Cc/cc.scm 189 */
												obj_t BgL_arg1809z00_366;

												BgL_arg1809z00_366 =
													MAKE_PAIR(BgL_arg1806z00_364, BNIL);
												BgL_list1807z00_365 =
													MAKE_PAIR
													(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
													BgL_arg1809z00_366);
											}
											BgL_arg1784z00_341 = BgL_list1807z00_365;
										}
									}
								else
									{	/* Cc/cc.scm 191 */
										obj_t BgL_arg1810z00_367;

										{	/* Cc/cc.scm 191 */
											obj_t BgL_list1812z00_369;

											{	/* Cc/cc.scm 191 */
												obj_t BgL_arg1813z00_370;

												{	/* Cc/cc.scm 191 */
													obj_t BgL_arg1815z00_371;

													{	/* Cc/cc.scm 191 */
														obj_t BgL_arg1817z00_373;

														BgL_arg1817z00_373 =
															MAKE_PAIR
															(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
															BNIL);
														BgL_arg1815z00_371 =
															MAKE_PAIR(BGl_string1837z00zzcc_ccz00,
															BgL_arg1817z00_373);
													}
													BgL_arg1813z00_370 =
														MAKE_PAIR(BgL_onamez00_321, BgL_arg1815z00_371);
												}
												BgL_list1812z00_369 =
													MAKE_PAIR
													(BGl_za2cczd2ozd2optionza2z00zzengine_paramz00,
													BgL_arg1813z00_370);
											}
											BgL_arg1810z00_367 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list1812z00_369);
										}
										{	/* Cc/cc.scm 191 */
											obj_t BgL_list1811z00_368;

											BgL_list1811z00_368 = MAKE_PAIR(BgL_arg1810z00_367, BNIL);
											BgL_arg1784z00_341 = BgL_list1811z00_368;
										}
									}
							}
							{	/* Cc/cc.scm 173 */
								obj_t BgL_list1785z00_342;

								{	/* Cc/cc.scm 173 */
									obj_t BgL_arg1786z00_343;

									{	/* Cc/cc.scm 173 */
										obj_t BgL_arg1787z00_344;

										{	/* Cc/cc.scm 173 */
											obj_t BgL_arg1789z00_345;

											{	/* Cc/cc.scm 173 */
												obj_t BgL_arg1790z00_346;

												{	/* Cc/cc.scm 173 */
													obj_t BgL_arg1791z00_347;

													{	/* Cc/cc.scm 173 */
														obj_t BgL_arg1792z00_348;

														{	/* Cc/cc.scm 173 */
															obj_t BgL_arg1793z00_349;

															BgL_arg1793z00_349 =
																MAKE_PAIR(BgL_arg1784z00_341, BNIL);
															BgL_arg1792z00_348 =
																MAKE_PAIR(BgL_arg1783z00_340,
																BgL_arg1793z00_349);
														}
														BgL_arg1791z00_347 =
															MAKE_PAIR(BgL_arg1782z00_339, BgL_arg1792z00_348);
													}
													BgL_arg1790z00_346 =
														MAKE_PAIR(BgL_arg1779z00_338, BgL_arg1791z00_347);
												}
												BgL_arg1789z00_345 =
													MAKE_PAIR(BgL_arg1778z00_337, BgL_arg1790z00_346);
											}
											BgL_arg1787z00_344 =
												MAKE_PAIR(BgL_arg1777z00_336, BgL_arg1789z00_345);
										}
										BgL_arg1786z00_343 =
											MAKE_PAIR(BgL_arg1776z00_335, BgL_arg1787z00_344);
									}
									BgL_list1785z00_342 =
										MAKE_PAIR(BgL_arg1775z00_334, BgL_arg1786z00_343);
								}
								BgL_cczd2argszd2_322 =
									BGl_appendz00zz__r4_pairs_and_lists_6_3z00
									(BgL_list1785z00_342);
							}
						}
						{	/* Cc/cc.scm 173 */

							{	/* Cc/cc.scm 192 */
								obj_t BgL_arg1757z00_325;

								BgL_arg1757z00_325 =
									MAKE_PAIR(BGl_za2ccza2z00zzengine_paramz00,
									BgL_cczd2argszd2_322);
								{	/* Cc/cc.scm 192 */
									obj_t BgL_list1758z00_326;

									{	/* Cc/cc.scm 192 */
										obj_t BgL_arg1764z00_327;

										{	/* Cc/cc.scm 192 */
											obj_t BgL_arg1767z00_328;

											BgL_arg1767z00_328 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1764z00_327 =
												MAKE_PAIR(BgL_arg1757z00_325, BgL_arg1767z00_328);
										}
										BgL_list1758z00_326 =
											MAKE_PAIR(BGl_string1851z00zzcc_ccz00,
											BgL_arg1764z00_327);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1758z00_326);
							}}
							{	/* Cc/cc.scm 193 */
								obj_t BgL_runner1771z00_332;

								{	/* Cc/cc.scm 193 */
									obj_t BgL_arg1768z00_329;

									BgL_arg1768z00_329 =
										bgl_append2(BgL_cczd2argszd2_322,
										CNST_TABLE_REF(((long) 4)));
									{	/* Cc/cc.scm 193 */
										obj_t BgL_list1769z00_330;

										BgL_list1769z00_330 = MAKE_PAIR(BgL_arg1768z00_329, BNIL);
										BgL_runner1771z00_332 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BGl_za2ccza2z00zzengine_paramz00, BgL_list1769z00_330);
								}}
								{	/* Cc/cc.scm 193 */
									obj_t BgL_aux1770z00_331;

									BgL_aux1770z00_331 = CAR(BgL_runner1771z00_332);
									BgL_runner1771z00_332 = CDR(BgL_runner1771z00_332);
									BGl_runzd2processzd2zz__processz00(BgL_aux1770z00_331,
										BgL_runner1771z00_332);
							}}
							if (CBOOL(BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00))
								{	/* Cc/cc.scm 195 */
									obj_t BgL_arg1772z00_333;

									BgL_arg1772z00_333 =
										string_append(BgL_namez00_10, BGl_string1850z00zzcc_ccz00);
									{	/* Cc/cc.scm 195 */
										char *BgL_stringz00_464;

										BgL_stringz00_464 = BSTRING_TO_STRING(BgL_arg1772z00_333);
										if (unlink(BgL_stringz00_464))
											{	/* Cc/cc.scm 195 */
												return BFALSE;
											}
										else
											{	/* Cc/cc.scm 195 */
												return BTRUE;
											}
									}
								}
							else
								{	/* Cc/cc.scm 194 */
									return BFALSE;
								}
						}
					}
				}
			else
				{	/* Cc/cc.scm 169 */
					return
						BGl_errorz00zz__errorz00(BGl_string1833z00zzcc_ccz00,
						BGl_string1846z00zzcc_ccz00, BgL_namez00_10);
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zzcc_ccz00(obj_t BgL_pathz00_351)
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 177 */
			if (NULLP(BgL_pathz00_351))
				{	/* Cc/cc.scm 178 */
					return BNIL;
				}
			else
				{	/* Cc/cc.scm 178 */
					return
						MAKE_PAIR(string_append(BGl_string1847z00zzcc_ccz00,
							CAR(BgL_pathz00_351)),
						BGl_loopz00zzcc_ccz00(CDR(BgL_pathz00_351)));
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_ccz00()
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_ccz00()
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_ccz00()
	{
		AN_OBJECT;
		{	/* Cc/cc.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 209072610),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1852z00zzcc_ccz00));
		}
	}

#ifdef __cplusplus
}
#endif
