/*===========================================================================*/
/*   (Write/version.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/version.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_versionz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_versionz00zzwrite_versionz00();
	static obj_t BGl_genericzd2initzd2zzwrite_versionz00();
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl__revisionz00zzwrite_versionz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzwrite_versionz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_versionz00();
	static obj_t BGl_horsez00zzwrite_versionz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_versionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t BGl_za2bigloozd2urlza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_displayzd2tozd2columnz00zzwrite_versionz00(obj_t, long,
		unsigned char);
	static obj_t BGl__versionz00zzwrite_versionz00(obj_t);
	extern obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl__shortzd2versionzd2zzwrite_versionz00(obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_versionz00();
	BGL_EXPORTED_DECL obj_t BGl_shortzd2versionzd2zzwrite_versionz00();
	static obj_t BGl_methodzd2initzd2zzwrite_versionz00();
	BGL_EXPORTED_DECL obj_t BGl_revisionz00zzwrite_versionz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_revisionzd2envzd2zzwrite_versionz00,
		BgL_bgl__revisionza700za7za7wr1597za7, BGl__revisionz00zzwrite_versionz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_versionzd2envzd2zzwrite_versionz00,
		BgL_bgl__versionza700za7za7wri1598za7, BGl__versionz00zzwrite_versionz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1584z00zzwrite_versionz00,
		BgL_bgl_string1584za700za7za7w1599za7, "", 0);
	      DEFINE_STRING(BGl_string1585z00zzwrite_versionz00,
		BgL_bgl_string1585za700za7za7w1600za7, "email: ", 7);
	      DEFINE_STRING(BGl_string1586z00zzwrite_versionz00,
		BgL_bgl_string1586za700za7za7w1601za7, "url: ", 5);
	      DEFINE_STRING(BGl_string1587z00zzwrite_versionz00,
		BgL_bgl_string1587za700za7za7w1602za7, "`a practical Scheme compiler'", 29);
	      DEFINE_STRING(BGl_string1588z00zzwrite_versionz00,
		BgL_bgl_string1588za700za7za7w1603za7, " ", 1);
	      DEFINE_STRING(BGl_string1590z00zzwrite_versionz00,
		BgL_bgl_string1590za700za7za7w1604za7,
		" \340 Marcel Lebas, mon grand-p\350re, d\351c\351d\351 le 29 Octobre 1998",
		58);
	      DEFINE_STRING(BGl_string1589z00zzwrite_versionz00,
		BgL_bgl_string1589za700za7za7w1605za7,
		" Ce travail est dedi\351 \340 Nelly Lebas, ma grand-m\350re, d\351c\351d\351e le 10 Mars 1995,",
		76);
	      DEFINE_STRING(BGl_string1591z00zzwrite_versionz00,
		BgL_bgl_string1591za700za7za7w1606za7,
		" \340 Carlos, mon p\350re d\351c\351d\351, le 12 Mars 2001 au matin,", 53);
	      DEFINE_STRING(BGl_string1592z00zzwrite_versionz00,
		BgL_bgl_string1592za700za7za7w1607za7,
		" et \340 Pierrette, ma m\350re, d\351c\351d\351e le 31 Janvier 2006 \340 10h30.",
		61);
	      DEFINE_STRING(BGl_string1593z00zzwrite_versionz00,
		BgL_bgl_string1593za700za7za7w1608za7, "write_version", 13);
	      DEFINE_STRING(BGl_string1594z00zzwrite_versionz00,
		BgL_bgl_string1594za700za7za7w1609za7,
		"done (\"            ,--^, \" \"      _ ___/ /|/  \" \"  ,;'( )__, ) '   \" \" ;;  //   L__.    \" \" '   \\\\    /  '    \" \"      ^   ^       \") ",
		134);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_shortzd2versionzd2envz00zzwrite_versionz00,
		BgL_bgl__shortza7d2version1610za7,
		BGl__shortzd2versionzd2zzwrite_versionz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_versionz00(long
		BgL_checksumz00_229, char *BgL_fromz00_230)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_versionz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_versionz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzwrite_versionz00();
					BGl_cnstzd2initzd2zzwrite_versionz00();
					BGl_importedzd2moduleszd2initz00zzwrite_versionz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_version");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 15 */
			{	/* Write/version.scm 15 */
				obj_t BgL_cportz00_221;

				BgL_cportz00_221 =
					bgl_open_input_string(BGl_string1594z00zzwrite_versionz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_222;

					BgL_iz00_222 = ((long) 1);
				BgL_loopz00_223:
					if ((BgL_iz00_222 == ((long) -1)))
						{	/* Write/version.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/version.scm 15 */
							{	/* Write/version.scm 15 */
								obj_t BgL_arg1596z00_225;

								{	/* Write/version.scm 15 */

									{	/* Write/version.scm 15 */
										obj_t BgL_locationz00_227;

										BgL_locationz00_227 = BBOOL(((bool_t) 0));
										{	/* Write/version.scm 15 */

											BgL_arg1596z00_225 =
												BGl_readz00zz__readerz00(BgL_cportz00_221,
												BgL_locationz00_227);
										}
									}
								}
								{	/* Write/version.scm 15 */
									int BgL_auxz00_245;

									BgL_auxz00_245 = (int) (BgL_iz00_222);
									CNST_TABLE_SET(BgL_auxz00_245, BgL_arg1596z00_225);
							}}
							{	/* Write/version.scm 15 */
								int BgL_auxz00_228;

								BgL_auxz00_228 = (int) ((BgL_iz00_222 - ((long) 1)));
								{
									long BgL_iz00_250;

									BgL_iz00_250 = (long) (BgL_auxz00_228);
									BgL_iz00_222 = BgL_iz00_250;
									goto BgL_loopz00_223;
								}
							}
						}
				}
			}
		}
	}



/* revision */
	BGL_EXPORTED_DEF obj_t BGl_revisionz00zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 25 */
			{	/* Write/version.scm 26 */
				obj_t BgL_port1510z00_90;

				{	/* Write/version.scm 26 */
					obj_t BgL_res1573z00_158;

					{	/* Write/version.scm 26 */
						obj_t BgL_auxz00_252;

						BgL_auxz00_252 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1573z00_158 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_252);
					}
					BgL_port1510z00_90 = BgL_res1573z00_158;
				}
				bgl_display_obj(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
					BgL_port1510z00_90);
				return bgl_display_char(((unsigned char) '\n'), BgL_port1510z00_90);
		}}
	}



/* _revision */
	obj_t BGl__revisionz00zzwrite_versionz00(obj_t BgL_envz00_218)
	{
		AN_OBJECT;
		{	/* Write/version.scm 25 */
			return BGl_revisionz00zzwrite_versionz00();
		}
	}



/* short-version */
	BGL_EXPORTED_DEF obj_t BGl_shortzd2versionzd2zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 31 */
			{	/* Write/version.scm 32 */
				obj_t BgL_port1511z00_91;

				{	/* Write/version.scm 32 */
					obj_t BgL_res1574z00_161;

					{	/* Write/version.scm 32 */
						obj_t BgL_auxz00_258;

						BgL_auxz00_258 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1574z00_161 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_258);
					}
					BgL_port1511z00_91 = BgL_res1574z00_161;
				}
				bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
					BgL_port1511z00_91);
				return bgl_display_char(((unsigned char) '\n'), BgL_port1511z00_91);
		}}
	}



/* _short-version */
	obj_t BGl__shortzd2versionzd2zzwrite_versionz00(obj_t BgL_envz00_219)
	{
		AN_OBJECT;
		{	/* Write/version.scm 31 */
			return BGl_shortzd2versionzd2zzwrite_versionz00();
		}
	}



/* version */
	BGL_EXPORTED_DEF obj_t BGl_versionz00zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 37 */
			BGl_displayzd2tozd2columnz00zzwrite_versionz00
				(BGl_string1584z00zzwrite_versionz00, ((long) 79),
				((unsigned char) '-'));
			{	/* Write/version.scm 39 */
				obj_t BgL_arg1515z00_92;

				{	/* Write/version.scm 39 */
					obj_t BgL_res1575z00_164;

					{	/* Write/version.scm 39 */
						obj_t BgL_auxz00_265;

						BgL_auxz00_265 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1575z00_164 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_265);
					}
					BgL_arg1515z00_92 = BgL_res1575z00_164;
				}
				bgl_display_char(((unsigned char) '\n'), BgL_arg1515z00_92);
			}
			{	/* Write/version.scm 40 */
				obj_t BgL_arg1517z00_94;

				obj_t BgL_arg1518z00_95;

				obj_t BgL_arg1519z00_96;

				if (
					(STRING_REF(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
							((long) 0)) == ((unsigned char) ' ')))
					{	/* Write/version.scm 43 */
						long BgL_arg1529z00_105;

						BgL_arg1529z00_105 =
							STRING_LENGTH(BGl_za2bigloozd2dateza2zd2zzengine_paramz00);
						BgL_arg1517z00_94 =
							c_substring(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
							((long) 1), BgL_arg1529z00_105);
					}
				else
					{	/* Write/version.scm 42 */
						BgL_arg1517z00_94 = BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
					}
				BgL_arg1518z00_95 =
					string_append(BGl_string1585z00zzwrite_versionz00,
					BGl_za2bigloozd2emailza2zd2zzengine_paramz00);
				BgL_arg1519z00_96 =
					string_append(BGl_string1586z00zzwrite_versionz00,
					BGl_za2bigloozd2urlza2zd2zzengine_paramz00);
				{	/* Write/version.scm 40 */
					obj_t BgL_list1520z00_97;

					{	/* Write/version.scm 40 */
						obj_t BgL_arg1521z00_98;

						{	/* Write/version.scm 40 */
							obj_t BgL_arg1522z00_99;

							{	/* Write/version.scm 40 */
								obj_t BgL_arg1523z00_100;

								{	/* Write/version.scm 40 */
									obj_t BgL_arg1524z00_101;

									{	/* Write/version.scm 40 */
										obj_t BgL_arg1525z00_102;

										BgL_arg1525z00_102 = MAKE_PAIR(BgL_arg1519z00_96, BNIL);
										BgL_arg1524z00_101 =
											MAKE_PAIR(BgL_arg1518z00_95, BgL_arg1525z00_102);
									}
									BgL_arg1523z00_100 =
										MAKE_PAIR(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
										BgL_arg1524z00_101);
								}
								BgL_arg1522z00_99 =
									MAKE_PAIR(BgL_arg1517z00_94, BgL_arg1523z00_100);
							}
							BgL_arg1521z00_98 =
								MAKE_PAIR(BGl_string1587z00zzwrite_versionz00,
								BgL_arg1522z00_99);
						}
						BgL_list1520z00_97 =
							MAKE_PAIR(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
							BgL_arg1521z00_98);
					}
					BGl_horsez00zzwrite_versionz00(BgL_list1520z00_97);
				}
			}
			if (((long) CINT(BGl_za2verboseza2z00zzengine_paramz00) >= ((long) 3)))
				{	/* Write/version.scm 48 */
					BGl_displayzd2tozd2columnz00zzwrite_versionz00
						(BGl_string1588z00zzwrite_versionz00, ((long) 78),
						((unsigned char) '-'));
					{	/* Write/version.scm 50 */
						obj_t BgL_arg1532z00_108;

						{	/* Write/version.scm 50 */
							obj_t BgL_res1576z00_177;

							{	/* Write/version.scm 50 */
								obj_t BgL_auxz00_287;

								BgL_auxz00_287 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1576z00_177 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_287);
							}
							BgL_arg1532z00_108 = BgL_res1576z00_177;
						}
						bgl_display_char(((unsigned char) '\n'), BgL_arg1532z00_108);
					}
					{	/* Write/version.scm 51 */
						obj_t BgL_list1533z00_109;

						{	/* Write/version.scm 51 */
							obj_t BgL_arg1535z00_111;

							BgL_arg1535z00_111 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_list1533z00_109 =
								MAKE_PAIR(BGl_string1589z00zzwrite_versionz00,
								BgL_arg1535z00_111);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list1533z00_109);
					}
					{	/* Write/version.scm 52 */
						obj_t BgL_list1536z00_112;

						{	/* Write/version.scm 52 */
							obj_t BgL_arg1538z00_114;

							BgL_arg1538z00_114 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_list1536z00_112 =
								MAKE_PAIR(BGl_string1590z00zzwrite_versionz00,
								BgL_arg1538z00_114);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list1536z00_112);
					}
					{	/* Write/version.scm 53 */
						obj_t BgL_list1539z00_115;

						{	/* Write/version.scm 53 */
							obj_t BgL_arg1541z00_117;

							BgL_arg1541z00_117 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_list1539z00_115 =
								MAKE_PAIR(BGl_string1591z00zzwrite_versionz00,
								BgL_arg1541z00_117);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list1539z00_115);
					}
					{	/* Write/version.scm 54 */
						obj_t BgL_list1542z00_118;

						{	/* Write/version.scm 54 */
							obj_t BgL_arg1544z00_120;

							BgL_arg1544z00_120 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_list1542z00_118 =
								MAKE_PAIR(BGl_string1592z00zzwrite_versionz00,
								BgL_arg1544z00_120);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list1542z00_118);
				}}
			else
				{	/* Write/version.scm 48 */
					BFALSE;
				}
			BGl_displayzd2tozd2columnz00zzwrite_versionz00
				(BGl_string1584z00zzwrite_versionz00, ((long) 79),
				((unsigned char) '-'));
			{	/* Write/version.scm 56 */
				obj_t BgL_arg1545z00_121;

				{	/* Write/version.scm 56 */
					obj_t BgL_res1577z00_180;

					{	/* Write/version.scm 56 */
						obj_t BgL_auxz00_312;

						BgL_auxz00_312 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1577z00_180 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_312);
					}
					BgL_arg1545z00_121 = BgL_res1577z00_180;
				}
				bgl_display_char(((unsigned char) '\n'), BgL_arg1545z00_121);
			}
			{	/* Write/version.scm 57 */
				obj_t BgL_arg1546z00_122;

				{	/* Write/version.scm 57 */
					obj_t BgL_res1578z00_183;

					{	/* Write/version.scm 57 */
						obj_t BgL_auxz00_316;

						BgL_auxz00_316 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1578z00_183 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_316);
					}
					BgL_arg1546z00_122 = BgL_res1578z00_183;
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_arg1546z00_122);
		}}
	}



/* _version */
	obj_t BGl__versionz00zzwrite_versionz00(obj_t BgL_envz00_220)
	{
		AN_OBJECT;
		{	/* Write/version.scm 37 */
			return BGl_versionz00zzwrite_versionz00();
		}
	}



/* horse */
	obj_t BGl_horsez00zzwrite_versionz00(obj_t BgL_lz00_1)
	{
		AN_OBJECT;
		{	/* Write/version.scm 62 */
			{	/* Write/version.scm 63 */
				obj_t BgL_g1508z00_123;

				BgL_g1508z00_123 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_lz00_125;

					obj_t BgL_horsez00_126;

					BgL_lz00_125 = BgL_lz00_1;
					BgL_horsez00_126 = BgL_g1508z00_123;
				BgL_zc3anonymousza31547ze3z83_127:
					if (NULLP(BgL_lz00_125))
						{	/* Write/version.scm 71 */
							if (NULLP(BgL_horsez00_126))
								{	/* Write/version.scm 72 */
									return CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Write/version.scm 72 */
									BGl_displayzd2tozd2columnz00zzwrite_versionz00
										(BGl_string1584z00zzwrite_versionz00, ((long) 62),
										((unsigned char) ' '));
									{	/* Write/version.scm 76 */
										obj_t BgL_port1512z00_130;

										{	/* Write/version.scm 76 */
											obj_t BgL_res1579z00_188;

											{	/* Write/version.scm 76 */
												obj_t BgL_auxz00_328;

												BgL_auxz00_328 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1579z00_188 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_328);
											}
											BgL_port1512z00_130 = BgL_res1579z00_188;
										}
										bgl_display_obj(CAR(BgL_horsez00_126), BgL_port1512z00_130);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port1512z00_130);
									}
									{
										obj_t BgL_horsez00_335;

										obj_t BgL_lz00_334;

										BgL_lz00_334 = BNIL;
										BgL_horsez00_335 = CDR(BgL_horsez00_126);
										BgL_horsez00_126 = BgL_horsez00_335;
										BgL_lz00_125 = BgL_lz00_334;
										goto BgL_zc3anonymousza31547ze3z83_127;
									}
								}
						}
					else
						{	/* Write/version.scm 71 */
							if (NULLP(BgL_horsez00_126))
								{	/* Write/version.scm 78 */
									{	/* Write/version.scm 79 */
										obj_t BgL_port1513z00_135;

										{	/* Write/version.scm 79 */
											obj_t BgL_res1580z00_194;

											{	/* Write/version.scm 79 */
												obj_t BgL_auxz00_339;

												BgL_auxz00_339 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1580z00_194 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_339);
											}
											BgL_port1513z00_135 = BgL_res1580z00_194;
										}
										bgl_display_obj(CAR(BgL_lz00_125), BgL_port1513z00_135);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port1513z00_135);
									}
									{
										obj_t BgL_horsez00_347;

										obj_t BgL_lz00_345;

										BgL_lz00_345 = CDR(BgL_lz00_125);
										BgL_horsez00_347 = BNIL;
										BgL_horsez00_126 = BgL_horsez00_347;
										BgL_lz00_125 = BgL_lz00_345;
										goto BgL_zc3anonymousza31547ze3z83_127;
									}
								}
							else
								{	/* Write/version.scm 78 */
									BGl_displayzd2tozd2columnz00zzwrite_versionz00(CAR
										(BgL_lz00_125), ((long) 62), ((unsigned char) ' '));
									{	/* Write/version.scm 83 */
										obj_t BgL_port1514z00_141;

										{	/* Write/version.scm 83 */
											obj_t BgL_res1581z00_200;

											{	/* Write/version.scm 83 */
												obj_t BgL_auxz00_350;

												BgL_auxz00_350 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1581z00_200 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_350);
											}
											BgL_port1514z00_141 = BgL_res1581z00_200;
										}
										bgl_display_obj(CAR(BgL_horsez00_126), BgL_port1514z00_141);
										bgl_display_char(((unsigned char) '\n'),
											BgL_port1514z00_141);
									}
									{
										obj_t BgL_horsez00_358;

										obj_t BgL_lz00_356;

										BgL_lz00_356 = CDR(BgL_lz00_125);
										BgL_horsez00_358 = CDR(BgL_horsez00_126);
										BgL_horsez00_126 = BgL_horsez00_358;
										BgL_lz00_125 = BgL_lz00_356;
										goto BgL_zc3anonymousza31547ze3z83_127;
									}
								}
						}
				}
			}
		}
	}



/* display-to-column */
	obj_t BGl_displayzd2tozd2columnz00zzwrite_versionz00(obj_t BgL_stringz00_2,
		long BgL_columnz00_3, unsigned char BgL_charz00_4)
	{
		AN_OBJECT;
		{	/* Write/version.scm 89 */
			{	/* Write/version.scm 90 */
				obj_t BgL_arg1565z00_146;

				{	/* Write/version.scm 90 */
					obj_t BgL_res1582z00_206;

					{	/* Write/version.scm 90 */
						obj_t BgL_auxz00_360;

						BgL_auxz00_360 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1582z00_206 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_360);
					}
					BgL_arg1565z00_146 = BgL_res1582z00_206;
				}
				bgl_display_obj(BgL_stringz00_2, BgL_arg1565z00_146);
			}
			{	/* Write/version.scm 91 */
				long BgL_g1509z00_147;

				BgL_g1509z00_147 = (((long) 1) + STRING_LENGTH(BgL_stringz00_2));
				{
					long BgL_lz00_149;

					BgL_lz00_149 = BgL_g1509z00_147;
				BgL_zc3anonymousza31566ze3z83_150:
					if ((BgL_lz00_149 == BgL_columnz00_3))
						{	/* Write/version.scm 92 */
							return CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Write/version.scm 92 */
							{	/* Write/version.scm 95 */
								obj_t BgL_arg1568z00_152;

								{	/* Write/version.scm 95 */
									obj_t BgL_res1583z00_213;

									{	/* Write/version.scm 95 */
										obj_t BgL_auxz00_369;

										BgL_auxz00_369 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1583z00_213 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_369);
									}
									BgL_arg1568z00_152 = BgL_res1583z00_213;
								}
								bgl_display_char(BgL_charz00_4, BgL_arg1568z00_152);
							}
							{
								long BgL_lz00_373;

								BgL_lz00_373 = (BgL_lz00_149 + ((long) 1));
								BgL_lz00_149 = BgL_lz00_373;
								goto BgL_zc3anonymousza31566ze3z83_150;
							}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_versionz00()
	{
		AN_OBJECT;
		{	/* Write/version.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string1593z00zzwrite_versionz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string1593z00zzwrite_versionz00));
		}
	}

#ifdef __cplusplus
}
#endif
