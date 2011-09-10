/*===========================================================================*/
/*   (Cc/indent.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/indent.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT bool_t fexists(char *);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcc_indentz00();
	static obj_t BGl_requirezd2initializa7ationz75zzcc_indentz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcc_indentz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_indentz00();
	extern obj_t BGl_za2indentza2z00zzengine_paramz00;
	static obj_t BGl__indentz00zzcc_indentz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_indentz00zzcc_indentz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_indentz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1549z00zzcc_indentz00,
		BgL_bgl_string1549za700za7za7c1560za7, ")", 1);
	      DEFINE_STRING(BGl_string1550z00zzcc_indentz00,
		BgL_bgl_string1550za700za7za7c1561za7, "   . indent (", 13);
	      DEFINE_STRING(BGl_string1551z00zzcc_indentz00,
		BgL_bgl_string1551za700za7za7c1562za7, ".cc ", 4);
	      DEFINE_STRING(BGl_string1552z00zzcc_indentz00,
		BgL_bgl_string1552za700za7za7c1563za7, ".c > ", 5);
	      DEFINE_STRING(BGl_string1553z00zzcc_indentz00,
		BgL_bgl_string1553za700za7za7c1564za7, " ", 1);
	      DEFINE_STRING(BGl_string1554z00zzcc_indentz00,
		BgL_bgl_string1554za700za7za7c1565za7, "      [", 7);
	      DEFINE_STRING(BGl_string1555z00zzcc_indentz00,
		BgL_bgl_string1555za700za7za7c1566za7, "Non nul value returned -- ", 26);
	      DEFINE_STRING(BGl_string1556z00zzcc_indentz00,
		BgL_bgl_string1556za700za7za7c1567za7, ".cc", 3);
	      DEFINE_STRING(BGl_string1557z00zzcc_indentz00,
		BgL_bgl_string1557za700za7za7c1568za7, ".c", 2);
	      DEFINE_STRING(BGl_string1558z00zzcc_indentz00,
		BgL_bgl_string1558za700za7za7c1569za7, "        mv ", 11);
	      DEFINE_STRING(BGl_string1559z00zzcc_indentz00,
		BgL_bgl_string1559za700za7za7c1570za7, "cc_indent", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_indentzd2envzd2zzcc_indentz00,
		BgL_bgl__indentza700za7za7cc_i1571za7, BGl__indentz00zzcc_indentz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_indentz00(long
		BgL_checksumz00_151, char *BgL_fromz00_152)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_indentz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_indentz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcc_indentz00();
					BGl_importedzd2moduleszd2initz00zzcc_indentz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_indentz00()
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_indent");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_indent");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_indent");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_indent");
			return BUNSPEC;
		}
	}



/* indent */
	BGL_EXPORTED_DEF obj_t BGl_indentz00zzcc_indentz00(obj_t BgL_namez00_1)
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 23 */
			{	/* Cc/indent.scm 24 */
				bool_t BgL_testz00_162;

				if (STRINGP(BgL_namez00_1))
					{	/* Cc/indent.scm 24 */
						if (STRINGP(BGl_za2indentza2z00zzengine_paramz00))
							{	/* Cc/indent.scm 25 */
								BgL_testz00_162 =
									(STRING_LENGTH(BGl_za2indentza2z00zzengine_paramz00) >
									((long) 0));
							}
						else
							{	/* Cc/indent.scm 25 */
								BgL_testz00_162 = ((bool_t) 0);
							}
					}
				else
					{	/* Cc/indent.scm 24 */
						BgL_testz00_162 = ((bool_t) 0);
					}
				if (BgL_testz00_162)
					{	/* Cc/indent.scm 24 */
						{	/* Cc/indent.scm 28 */
							obj_t BgL_arg1511z00_90;

							BgL_arg1511z00_90 =
								BGl_basenamez00zz__osz00(BGl_za2indentza2z00zzengine_paramz00);
							{	/* Cc/indent.scm 28 */
								obj_t BgL_list1513z00_92;

								{	/* Cc/indent.scm 28 */
									obj_t BgL_arg1514z00_93;

									{	/* Cc/indent.scm 28 */
										obj_t BgL_arg1515z00_94;

										{	/* Cc/indent.scm 28 */
											obj_t BgL_arg1516z00_95;

											BgL_arg1516z00_95 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1515z00_94 =
												MAKE_PAIR(BGl_string1549z00zzcc_indentz00,
												BgL_arg1516z00_95);
										}
										BgL_arg1514z00_93 =
											MAKE_PAIR(BgL_arg1511z00_90, BgL_arg1515z00_94);
									}
									BgL_list1513z00_92 =
										MAKE_PAIR(BGl_string1550z00zzcc_indentz00,
										BgL_arg1514z00_93);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
									BgL_list1513z00_92);
						}}
						{	/* Cc/indent.scm 29 */
							obj_t BgL_cmdz00_96;

							{	/* Cc/indent.scm 29 */
								obj_t BgL_list1537z00_120;

								{	/* Cc/indent.scm 29 */
									obj_t BgL_arg1538z00_121;

									{	/* Cc/indent.scm 29 */
										obj_t BgL_arg1540z00_123;

										{	/* Cc/indent.scm 29 */
											obj_t BgL_arg1541z00_124;

											{	/* Cc/indent.scm 29 */
												obj_t BgL_arg1543z00_126;

												{	/* Cc/indent.scm 29 */
													obj_t BgL_arg1544z00_127;

													BgL_arg1544z00_127 =
														MAKE_PAIR(BGl_string1551z00zzcc_indentz00, BNIL);
													BgL_arg1543z00_126 =
														MAKE_PAIR(BgL_namez00_1, BgL_arg1544z00_127);
												}
												BgL_arg1541z00_124 =
													MAKE_PAIR(BGl_string1552z00zzcc_indentz00,
													BgL_arg1543z00_126);
											}
											BgL_arg1540z00_123 =
												MAKE_PAIR(BgL_namez00_1, BgL_arg1541z00_124);
										}
										BgL_arg1538z00_121 =
											MAKE_PAIR(BGl_string1553z00zzcc_indentz00,
											BgL_arg1540z00_123);
									}
									BgL_list1537z00_120 =
										MAKE_PAIR(BGl_za2indentza2z00zzengine_paramz00,
										BgL_arg1538z00_121);
								}
								BgL_cmdz00_96 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1537z00_120);
							}
							{	/* Cc/indent.scm 32 */
								obj_t BgL_list1517z00_97;

								{	/* Cc/indent.scm 32 */
									obj_t BgL_arg1519z00_99;

									{	/* Cc/indent.scm 32 */
										obj_t BgL_arg1520z00_100;

										{	/* Cc/indent.scm 32 */
											obj_t BgL_arg1521z00_101;

											BgL_arg1521z00_101 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg1520z00_100 =
												MAKE_PAIR(BCHAR(((unsigned char) ']')),
												BgL_arg1521z00_101);
										}
										BgL_arg1519z00_99 =
											MAKE_PAIR(BgL_cmdz00_96, BgL_arg1520z00_100);
									}
									BgL_list1517z00_97 =
										MAKE_PAIR(BGl_string1554z00zzcc_indentz00,
										BgL_arg1519z00_99);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
									BgL_list1517z00_97);
							}
							{	/* Cc/indent.scm 33 */
								obj_t BgL_resz00_102;

								{	/* Cc/indent.scm 33 */
									obj_t BgL_list1527z00_108;

									BgL_list1527z00_108 = MAKE_PAIR(BgL_cmdz00_96, BNIL);
									BgL_resz00_102 = BGl_systemz00zz__osz00(BgL_list1527z00_108);
								}
								if (((long) CINT(BgL_resz00_102) == ((long) 0)))
									{	/* Cc/indent.scm 34 */
										BFALSE;
									}
								else
									{	/* Cc/indent.scm 35 */
										obj_t BgL_list1523z00_104;

										{	/* Cc/indent.scm 35 */
											obj_t BgL_arg1524z00_105;

											{	/* Cc/indent.scm 35 */
												obj_t BgL_arg1526z00_107;

												BgL_arg1526z00_107 = MAKE_PAIR(BgL_resz00_102, BNIL);
												BgL_arg1524z00_105 =
													MAKE_PAIR(BGl_string1555z00zzcc_indentz00,
													BgL_arg1526z00_107);
											}
											BgL_list1523z00_104 =
												MAKE_PAIR(BGl_za2indentza2z00zzengine_paramz00,
												BgL_arg1524z00_105);
										}
										BGl_warningz00zz__errorz00(BgL_list1523z00_104);
									}
							}
							{	/* Cc/indent.scm 36 */
								bool_t BgL_testz00_201;

								{	/* Cc/indent.scm 36 */
									obj_t BgL_arg1536z00_119;

									BgL_arg1536z00_119 =
										string_append(BgL_namez00_1,
										BGl_string1556z00zzcc_indentz00);
									BgL_testz00_201 =
										fexists(BSTRING_TO_STRING(BgL_arg1536z00_119));
								}
								if (BgL_testz00_201)
									{	/* Cc/indent.scm 37 */
										obj_t BgL_snamez00_110;

										obj_t BgL_dnamez00_111;

										BgL_snamez00_110 =
											string_append(BgL_namez00_1,
											BGl_string1556z00zzcc_indentz00);
										BgL_dnamez00_111 =
											string_append(BgL_namez00_1,
											BGl_string1557z00zzcc_indentz00);
										{	/* Cc/indent.scm 39 */
											obj_t BgL_list1529z00_112;

											{	/* Cc/indent.scm 39 */
												obj_t BgL_arg1531z00_114;

												{	/* Cc/indent.scm 39 */
													obj_t BgL_arg1532z00_115;

													{	/* Cc/indent.scm 39 */
														obj_t BgL_arg1534z00_117;

														{	/* Cc/indent.scm 39 */
															obj_t BgL_arg1535z00_118;

															BgL_arg1535z00_118 =
																MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
															BgL_arg1534z00_117 =
																MAKE_PAIR(BgL_dnamez00_111, BgL_arg1535z00_118);
														}
														BgL_arg1532z00_115 =
															MAKE_PAIR(BGl_string1553z00zzcc_indentz00,
															BgL_arg1534z00_117);
													}
													BgL_arg1531z00_114 =
														MAKE_PAIR(BgL_snamez00_110, BgL_arg1532z00_115);
												}
												BgL_list1529z00_112 =
													MAKE_PAIR(BGl_string1558z00zzcc_indentz00,
													BgL_arg1531z00_114);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1529z00_112);
										}
										{	/* Cc/indent.scm 40 */
											char *BgL_string1z00_140;

											char *BgL_string2z00_141;

											BgL_string1z00_140 = BSTRING_TO_STRING(BgL_snamez00_110);
											BgL_string2z00_141 = BSTRING_TO_STRING(BgL_dnamez00_111);
											{	/* Cc/indent.scm 40 */
												bool_t BgL_testz00_217;

												{	/* Cc/indent.scm 40 */
													int BgL_arg1965z00_143;

													BgL_arg1965z00_143 =
														rename(BgL_string1z00_140, BgL_string2z00_141);
													BgL_testz00_217 =
														((long) (BgL_arg1965z00_143) == ((long) 0));
												}
												if (BgL_testz00_217)
													{	/* Cc/indent.scm 40 */
														return BTRUE;
													}
												else
													{	/* Cc/indent.scm 40 */
														return BFALSE;
													}
											}
										}
									}
								else
									{	/* Cc/indent.scm 36 */
										return BFALSE;
									}
							}
						}
					}
				else
					{	/* Cc/indent.scm 24 */
						return BFALSE;
					}
			}
		}
	}



/* _indent */
	obj_t BGl__indentz00zzcc_indentz00(obj_t BgL_envz00_147,
		obj_t BgL_namez00_148)
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 23 */
			return BGl_indentz00zzcc_indentz00(BgL_namez00_148);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_indentz00()
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_indentz00()
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_indentz00()
	{
		AN_OBJECT;
		{	/* Cc/indent.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1559z00zzcc_indentz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1559z00zzcc_indentz00));
		}
	}

#ifdef __cplusplus
}
#endif
