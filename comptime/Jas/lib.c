/*===========================================================================*/
/*   (Jas/lib.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/lib.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl__w4llongz00zzjas_libz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_float_to_ieee_string(float);
	static long BGl_utf8zd2lengthzd2zzjas_libz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_u2z00zzjas_libz00(int);
	BGL_EXPORTED_DECL obj_t BGl_u4z00zzjas_libz00(int);
	static long BGl_producezd2utf8zd21z00zzjas_libz00(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_w2z00zzjas_libz00(int);
	BGL_EXPORTED_DECL obj_t BGl_w4z00zzjas_libz00(long);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_libz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_libz00();
	static obj_t BGl__w4elongz00zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_collectz00zzjas_libz00(long, obj_t, long);
	static obj_t BGl_producezd2utf8zd2zzjas_libz00(obj_t, obj_t);
	static obj_t BGl__f2z00zzjas_libz00(obj_t, obj_t);
	static obj_t BGl__f4z00zzjas_libz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static long BGl_utf8zd2length1zd2zzjas_libz00(long);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T);
	static obj_t BGl__u2z00zzjas_libz00(obj_t, obj_t);
	static obj_t BGl__u4z00zzjas_libz00(obj_t, obj_t);
	static obj_t BGl__w2z00zzjas_libz00(obj_t, obj_t);
	static obj_t BGl__w4z00zzjas_libz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_w4elongz00zzjas_libz00(long);
	static obj_t BGl__stringzd2ze3utf8z31zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_stringzd2ze3shortlistz31zzjas_libz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_f2z00zzjas_libz00(float);
	BGL_EXPORTED_DECL obj_t BGl_f4z00zzjas_libz00(double);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_libz00();
	BGL_IMPORT obj_t bgl_double_to_ieee_string(double);
	static obj_t BGl_methodzd2initzd2zzjas_libz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4llongzd2envzd2zzjas_libz00,
		BgL_bgl__w4llongza700za7za7jas1693za7, BGl__w4llongz00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u4zd2envzd2zzjas_libz00,
		BgL_bgl__u4za700za7za7jas_libza71694z00, BGl__u4z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f4zd2envzd2zzjas_libz00,
		BgL_bgl__f4za700za7za7jas_libza71695z00, BGl__f4z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u2zd2envzd2zzjas_libz00,
		BgL_bgl__u2za700za7za7jas_libza71696z00, BGl__u2z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f2zd2envzd2zzjas_libz00,
		BgL_bgl__f2za700za7za7jas_libza71697z00, BGl__f2z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4elongzd2envzd2zzjas_libz00,
		BgL_bgl__w4elongza700za7za7jas1698za7, BGl__w4elongz00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4zd2envzd2zzjas_libz00,
		BgL_bgl__w4za700za7za7jas_libza71699z00, BGl__w4z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w2zd2envzd2zzjas_libz00,
		BgL_bgl__w2za700za7za7jas_libza71700z00, BGl__w2z00zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3utf8zd2envze3zzjas_libz00,
		BgL_bgl__stringza7d2za7e3utf1701z00, BGl__stringzd2ze3utf8z31zzjas_libz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long
		BgL_checksumz00_661, char *BgL_fromz00_662)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_libz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_libz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_libz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_libz00()
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_lib");
			return BUNSPEC;
		}
	}



/* u2 */
	BGL_EXPORTED_DEF obj_t BGl_u2z00zzjas_libz00(int BgL_nz00_1)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 13 */
			{	/* Jas/lib.scm 14 */
				long BgL_arg1508z00_110;

				long BgL_arg1509z00_111;

				BgL_arg1508z00_110 =
					(((long) (BgL_nz00_1) >> (int) (((long) 8))) & ((long) 255));
				BgL_arg1509z00_111 = ((long) (BgL_nz00_1) & ((long) 255));
				{	/* Jas/lib.scm 14 */
					obj_t BgL_list1510z00_112;

					{	/* Jas/lib.scm 14 */
						obj_t BgL_arg1511z00_113;

						BgL_arg1511z00_113 = MAKE_PAIR(BINT(BgL_arg1509z00_111), BNIL);
						BgL_list1510z00_112 =
							MAKE_PAIR(BINT(BgL_arg1508z00_110), BgL_arg1511z00_113);
					}
					return BgL_list1510z00_112;
				}
			}
		}
	}



/* _u2 */
	obj_t BGl__u2z00zzjas_libz00(obj_t BgL_envz00_629, obj_t BgL_nz00_630)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 13 */
			return BGl_u2z00zzjas_libz00(CINT(BgL_nz00_630));
		}
	}



/* u4 */
	BGL_EXPORTED_DEF obj_t BGl_u4z00zzjas_libz00(int BgL_nz00_2)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 17 */
			{	/* Jas/lib.scm 18 */
				long BgL_arg1514z00_116;

				long BgL_arg1515z00_117;

				long BgL_arg1516z00_118;

				long BgL_arg1517z00_119;

				BgL_arg1514z00_116 =
					(((long) (BgL_nz00_2) >> (int) (((long) 24))) & ((long) 255));
				BgL_arg1515z00_117 =
					(((long) (BgL_nz00_2) >> (int) (((long) 16))) & ((long) 255));
				BgL_arg1516z00_118 =
					(((long) (BgL_nz00_2) >> (int) (((long) 8))) & ((long) 255));
				BgL_arg1517z00_119 = ((long) (BgL_nz00_2) & ((long) 255));
				{	/* Jas/lib.scm 18 */
					obj_t BgL_list1518z00_120;

					{	/* Jas/lib.scm 18 */
						obj_t BgL_arg1519z00_121;

						{	/* Jas/lib.scm 18 */
							obj_t BgL_arg1520z00_122;

							{	/* Jas/lib.scm 18 */
								obj_t BgL_arg1521z00_123;

								BgL_arg1521z00_123 = MAKE_PAIR(BINT(BgL_arg1517z00_119), BNIL);
								BgL_arg1520z00_122 =
									MAKE_PAIR(BINT(BgL_arg1516z00_118), BgL_arg1521z00_123);
							}
							BgL_arg1519z00_121 =
								MAKE_PAIR(BINT(BgL_arg1515z00_117), BgL_arg1520z00_122);
						}
						BgL_list1518z00_120 =
							MAKE_PAIR(BINT(BgL_arg1514z00_116), BgL_arg1519z00_121);
					}
					return BgL_list1518z00_120;
				}
			}
		}
	}



/* _u4 */
	obj_t BGl__u4z00zzjas_libz00(obj_t BgL_envz00_631, obj_t BgL_nz00_632)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 17 */
			return BGl_u4z00zzjas_libz00(CINT(BgL_nz00_632));
		}
	}



/* w2 */
	BGL_EXPORTED_DEF obj_t BGl_w2z00zzjas_libz00(int BgL_nz00_3)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 23 */
			{	/* Jas/lib.scm 24 */
				long BgL_arg1529z00_130;

				long BgL_arg1530z00_131;

				BgL_arg1529z00_130 =
					(((long) (BgL_nz00_3) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1530z00_131 = ((long) (BgL_nz00_3) & ((long) 65535));
				{	/* Jas/lib.scm 24 */
					obj_t BgL_list1531z00_132;

					{	/* Jas/lib.scm 24 */
						obj_t BgL_arg1532z00_133;

						BgL_arg1532z00_133 = MAKE_PAIR(BINT(BgL_arg1530z00_131), BNIL);
						BgL_list1531z00_132 =
							MAKE_PAIR(BINT(BgL_arg1529z00_130), BgL_arg1532z00_133);
					}
					return BgL_list1531z00_132;
				}
			}
		}
	}



/* _w2 */
	obj_t BGl__w2z00zzjas_libz00(obj_t BgL_envz00_633, obj_t BgL_nz00_634)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 23 */
			return BGl_w2z00zzjas_libz00(CINT(BgL_nz00_634));
		}
	}



/* w4elong */
	BGL_EXPORTED_DEF obj_t BGl_w4elongz00zzjas_libz00(long BgL_nz00_5)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 30 */
			{	/* Jas/lib.scm 31 */
				long BgL_arg1537z00_138;

				long BgL_arg1538z00_139;

				long BgL_arg1539z00_140;

				long BgL_arg1540z00_141;

				{	/* Jas/lib.scm 31 */
					long BgL_arg1545z00_146;

					BgL_arg1545z00_146 =
						(
						((BgL_nz00_5 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 31 */
						long BgL_arg1535z00_320;

						{	/* Jas/lib.scm 31 */
							long BgL_arg1536z00_321;

							BgL_arg1536z00_321 = LONG_TO_ELONG(((long) 65535));
							BgL_arg1535z00_320 = (BgL_arg1545z00_146 & BgL_arg1536z00_321);
						}
						{	/* Jas/lib.scm 31 */
							long BgL_res1685z00_326;

							{	/* Jas/lib.scm 31 */
								long BgL_auxz00_724;

								{	/* Jas/lib.scm 31 */
									long BgL_auxz00_725;

									BgL_auxz00_725 = ELONG_TO_LONG(BgL_arg1535z00_320);
									BgL_auxz00_724 = ELONG_TO_LONG(BgL_auxz00_725);
								}
								BgL_res1685z00_326 = ELONG_TO_LONG(BgL_auxz00_724);
							}
							BgL_arg1537z00_138 = BgL_res1685z00_326;
				}}}
				{	/* Jas/lib.scm 32 */
					long BgL_arg1551z00_151;

					BgL_arg1551z00_151 =
						((BgL_nz00_5 >> (int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 32 */
						long BgL_arg1535z00_332;

						{	/* Jas/lib.scm 32 */
							long BgL_arg1536z00_333;

							BgL_arg1536z00_333 = LONG_TO_ELONG(((long) 65535));
							BgL_arg1535z00_332 = (BgL_arg1551z00_151 & BgL_arg1536z00_333);
						}
						{	/* Jas/lib.scm 32 */
							long BgL_res1686z00_338;

							{	/* Jas/lib.scm 32 */
								long BgL_auxz00_735;

								{	/* Jas/lib.scm 32 */
									long BgL_auxz00_736;

									BgL_auxz00_736 = ELONG_TO_LONG(BgL_arg1535z00_332);
									BgL_auxz00_735 = ELONG_TO_LONG(BgL_auxz00_736);
								}
								BgL_res1686z00_338 = ELONG_TO_LONG(BgL_auxz00_735);
							}
							BgL_arg1538z00_139 = BgL_res1686z00_338;
				}}}
				{	/* Jas/lib.scm 33 */
					long BgL_arg1554z00_154;

					BgL_arg1554z00_154 = (BgL_nz00_5 >> (int) (((long) 16)));
					{	/* Jas/lib.scm 33 */
						long BgL_arg1535z00_342;

						{	/* Jas/lib.scm 33 */
							long BgL_arg1536z00_343;

							BgL_arg1536z00_343 = LONG_TO_ELONG(((long) 65535));
							BgL_arg1535z00_342 = (BgL_arg1554z00_154 & BgL_arg1536z00_343);
						}
						{	/* Jas/lib.scm 33 */
							long BgL_res1687z00_348;

							{	/* Jas/lib.scm 33 */
								long BgL_auxz00_744;

								{	/* Jas/lib.scm 33 */
									long BgL_auxz00_745;

									BgL_auxz00_745 = ELONG_TO_LONG(BgL_arg1535z00_342);
									BgL_auxz00_744 = ELONG_TO_LONG(BgL_auxz00_745);
								}
								BgL_res1687z00_348 = ELONG_TO_LONG(BgL_auxz00_744);
							}
							BgL_arg1539z00_140 = BgL_res1687z00_348;
				}}}
				{	/* Jas/lib.scm 34 */
					long BgL_arg1535z00_350;

					{	/* Jas/lib.scm 34 */
						long BgL_arg1536z00_351;

						BgL_arg1536z00_351 = LONG_TO_ELONG(((long) 65535));
						BgL_arg1535z00_350 = (BgL_nz00_5 & BgL_arg1536z00_351);
					}
					{	/* Jas/lib.scm 34 */
						long BgL_res1688z00_356;

						{	/* Jas/lib.scm 34 */
							long BgL_auxz00_751;

							{	/* Jas/lib.scm 34 */
								long BgL_auxz00_752;

								BgL_auxz00_752 = ELONG_TO_LONG(BgL_arg1535z00_350);
								BgL_auxz00_751 = ELONG_TO_LONG(BgL_auxz00_752);
							}
							BgL_res1688z00_356 = ELONG_TO_LONG(BgL_auxz00_751);
						}
						BgL_arg1540z00_141 = BgL_res1688z00_356;
				}}
				{	/* Jas/lib.scm 31 */
					obj_t BgL_list1541z00_142;

					{	/* Jas/lib.scm 31 */
						obj_t BgL_arg1542z00_143;

						{	/* Jas/lib.scm 31 */
							obj_t BgL_arg1543z00_144;

							{	/* Jas/lib.scm 31 */
								obj_t BgL_arg1544z00_145;

								BgL_arg1544z00_145 = MAKE_PAIR(BINT(BgL_arg1540z00_141), BNIL);
								BgL_arg1543z00_144 =
									MAKE_PAIR(BINT(BgL_arg1539z00_140), BgL_arg1544z00_145);
							}
							BgL_arg1542z00_143 =
								MAKE_PAIR(BINT(BgL_arg1538z00_139), BgL_arg1543z00_144);
						}
						BgL_list1541z00_142 =
							MAKE_PAIR(BINT(BgL_arg1537z00_138), BgL_arg1542z00_143);
					}
					return BgL_list1541z00_142;
				}
			}
		}
	}



/* _w4elong */
	obj_t BGl__w4elongz00zzjas_libz00(obj_t BgL_envz00_635, obj_t BgL_nz00_636)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 30 */
			return BGl_w4elongz00zzjas_libz00(BELONG_TO_LONG(BgL_nz00_636));
		}
	}



/* w4 */
	BGL_EXPORTED_DEF obj_t BGl_w4z00zzjas_libz00(long BgL_nz00_6)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 36 */
			{	/* Jas/lib.scm 38 */
				long BgL_arg1555z00_155;

				long BgL_arg1556z00_156;

				long BgL_arg1557z00_157;

				long BgL_arg1559z00_158;

				BgL_arg1555z00_155 =
					(
					(((BgL_nz00_6 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1556z00_156 =
					(
					((BgL_nz00_6 >>
							(int) (((long) 16))) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1557z00_157 =
					((BgL_nz00_6 >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1559z00_158 = (BgL_nz00_6 & ((long) 65535));
				{	/* Jas/lib.scm 38 */
					obj_t BgL_list1560z00_159;

					{	/* Jas/lib.scm 38 */
						obj_t BgL_arg1562z00_160;

						{	/* Jas/lib.scm 38 */
							obj_t BgL_arg1563z00_161;

							{	/* Jas/lib.scm 38 */
								obj_t BgL_arg1564z00_162;

								BgL_arg1564z00_162 = MAKE_PAIR(BINT(BgL_arg1559z00_158), BNIL);
								BgL_arg1563z00_161 =
									MAKE_PAIR(BINT(BgL_arg1557z00_157), BgL_arg1564z00_162);
							}
							BgL_arg1562z00_160 =
								MAKE_PAIR(BINT(BgL_arg1556z00_156), BgL_arg1563z00_161);
						}
						BgL_list1560z00_159 =
							MAKE_PAIR(BINT(BgL_arg1555z00_155), BgL_arg1562z00_160);
					}
					return BgL_list1560z00_159;
				}
			}
		}
	}



/* _w4 */
	obj_t BGl__w4z00zzjas_libz00(obj_t BgL_envz00_637, obj_t BgL_nz00_638)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 36 */
			return BGl_w4z00zzjas_libz00((long) CINT(BgL_nz00_638));
		}
	}



/* w4llong */
	BGL_EXPORTED_DEF obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T BgL_nz00_8)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 46 */
			{	/* Jas/lib.scm 48 */
				long BgL_arg1582z00_177;

				long BgL_arg1583z00_178;

				long BgL_arg1584z00_179;

				long BgL_arg1585z00_180;

				{	/* Jas/lib.scm 48 */
					BGL_LONGLONG_T BgL_arg1590z00_185;

					BgL_arg1590z00_185 =
						(
						((BgL_nz00_8 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 48 */
						BGL_LONGLONG_T BgL_arg1580z00_394;

						{	/* Jas/lib.scm 48 */
							BGL_LONGLONG_T BgL_arg1581z00_395;

							BgL_arg1581z00_395 = LONG_TO_LLONG(((long) 65535));
							BgL_arg1580z00_394 = (BgL_arg1590z00_185 & BgL_arg1581z00_395);
						}
						BgL_arg1582z00_177 = LLONG_TO_LONG(BgL_arg1580z00_394);
				}}
				{	/* Jas/lib.scm 49 */
					BGL_LONGLONG_T BgL_arg1598z00_190;

					BgL_arg1598z00_190 =
						((BgL_nz00_8 >> (int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 49 */
						BGL_LONGLONG_T BgL_arg1580z00_405;

						{	/* Jas/lib.scm 49 */
							BGL_LONGLONG_T BgL_arg1581z00_406;

							BgL_arg1581z00_406 = LONG_TO_LLONG(((long) 65535));
							BgL_arg1580z00_405 = (BgL_arg1598z00_190 & BgL_arg1581z00_406);
						}
						BgL_arg1583z00_178 = LLONG_TO_LONG(BgL_arg1580z00_405);
				}}
				{	/* Jas/lib.scm 50 */
					BGL_LONGLONG_T BgL_arg1601z00_193;

					BgL_arg1601z00_193 = (BgL_nz00_8 >> (int) (((long) 16)));
					{	/* Jas/lib.scm 50 */
						BGL_LONGLONG_T BgL_arg1580z00_414;

						{	/* Jas/lib.scm 50 */
							BGL_LONGLONG_T BgL_arg1581z00_415;

							BgL_arg1581z00_415 = LONG_TO_LLONG(((long) 65535));
							BgL_arg1580z00_414 = (BgL_arg1601z00_193 & BgL_arg1581z00_415);
						}
						BgL_arg1584z00_179 = LLONG_TO_LONG(BgL_arg1580z00_414);
				}}
				{	/* Jas/lib.scm 51 */
					BGL_LONGLONG_T BgL_arg1580z00_421;

					{	/* Jas/lib.scm 51 */
						BGL_LONGLONG_T BgL_arg1581z00_422;

						BgL_arg1581z00_422 = LONG_TO_LLONG(((long) 65535));
						BgL_arg1580z00_421 = (BgL_nz00_8 & BgL_arg1581z00_422);
					}
					BgL_arg1585z00_180 = LLONG_TO_LONG(BgL_arg1580z00_421);
				}
				{	/* Jas/lib.scm 48 */
					obj_t BgL_list1586z00_181;

					{	/* Jas/lib.scm 48 */
						obj_t BgL_arg1587z00_182;

						{	/* Jas/lib.scm 48 */
							obj_t BgL_arg1588z00_183;

							{	/* Jas/lib.scm 48 */
								obj_t BgL_arg1589z00_184;

								BgL_arg1589z00_184 = MAKE_PAIR(BINT(BgL_arg1585z00_180), BNIL);
								BgL_arg1588z00_183 =
									MAKE_PAIR(BINT(BgL_arg1584z00_179), BgL_arg1589z00_184);
							}
							BgL_arg1587z00_182 =
								MAKE_PAIR(BINT(BgL_arg1583z00_178), BgL_arg1588z00_183);
						}
						BgL_list1586z00_181 =
							MAKE_PAIR(BINT(BgL_arg1582z00_177), BgL_arg1587z00_182);
					}
					return BgL_list1586z00_181;
				}
			}
		}
	}



/* _w4llong */
	obj_t BGl__w4llongz00zzjas_libz00(obj_t BgL_envz00_639, obj_t BgL_nz00_640)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 46 */
			return BGl_w4llongz00zzjas_libz00(BLLONG_TO_LLONG(BgL_nz00_640));
		}
	}



/* f2 */
	BGL_EXPORTED_DEF obj_t BGl_f2z00zzjas_libz00(float BgL_nz00_9)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 53 */
			return
				BGl_stringzd2ze3shortlistz31zzjas_libz00(bgl_float_to_ieee_string
				(BgL_nz00_9));
		}
	}



/* _f2 */
	obj_t BGl__f2z00zzjas_libz00(obj_t BgL_envz00_641, obj_t BgL_nz00_642)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 53 */
			return BGl_f2z00zzjas_libz00(REAL_TO_FLOAT(BgL_nz00_642));
		}
	}



/* f4 */
	BGL_EXPORTED_DEF obj_t BGl_f4z00zzjas_libz00(double BgL_nz00_10)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 56 */
			return
				BGl_stringzd2ze3shortlistz31zzjas_libz00(bgl_double_to_ieee_string
				(BgL_nz00_10));
		}
	}



/* _f4 */
	obj_t BGl__f4z00zzjas_libz00(obj_t BgL_envz00_643, obj_t BgL_nz00_644)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 56 */
			return BGl_f4z00zzjas_libz00(REAL_TO_DOUBLE(BgL_nz00_644));
		}
	}



/* string->shortlist */
	obj_t BGl_stringzd2ze3shortlistz31zzjas_libz00(obj_t BgL_sz00_11)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 59 */
			return
				BGl_collectz00zzjas_libz00(STRING_LENGTH(BgL_sz00_11), BgL_sz00_11,
				((long) 0));
		}
	}



/* collect */
	obj_t BGl_collectz00zzjas_libz00(long BgL_nz00_648, obj_t BgL_sz00_647,
		long BgL_iz00_198)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 66 */
			if ((BgL_iz00_198 == BgL_nz00_648))
				{	/* Jas/lib.scm 62 */
					return BNIL;
				}
			else
				{	/* Jas/lib.scm 64 */
					long BgL_arg1606z00_201;

					obj_t BgL_arg1607z00_202;

					BgL_arg1606z00_201 =
						(
						((STRING_REF(BgL_sz00_647, BgL_iz00_198)) <<
							(int) (((long) 8))) |
						(STRING_REF(BgL_sz00_647, (BgL_iz00_198 + ((long) 1)))));
					BgL_arg1607z00_202 =
						BGl_collectz00zzjas_libz00(BgL_nz00_648, BgL_sz00_647,
						(BgL_iz00_198 + ((long) 2)));
					return MAKE_PAIR(BINT(BgL_arg1606z00_201), BgL_arg1607z00_202);
				}
		}
	}



/* string->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t BgL_sz00_12)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 69 */
			return
				BGl_producezd2utf8zd2zzjas_libz00(BgL_sz00_12,
				make_string(BGl_utf8zd2lengthzd2zzjas_libz00(BgL_sz00_12),
					((unsigned char) ' ')));
		}
	}



/* _string->utf8 */
	obj_t BGl__stringzd2ze3utf8z31zzjas_libz00(obj_t BgL_envz00_645,
		obj_t BgL_sz00_646)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 69 */
			return BGl_stringzd2ze3utf8z31zzjas_libz00(BgL_sz00_646);
		}
	}



/* utf8-length */
	long BGl_utf8zd2lengthzd2zzjas_libz00(obj_t BgL_sz00_18)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 78 */
			{	/* Jas/lib.scm 79 */
				long BgL_nz00_217;

				BgL_nz00_217 = STRING_LENGTH(BgL_sz00_18);
				{
					obj_t BgL_sz00_219;

					long BgL_iz00_220;

					long BgL_rz00_221;

					BgL_sz00_219 = BgL_sz00_18;
					BgL_iz00_220 = ((long) 0);
					BgL_rz00_221 = ((long) 0);
				BgL_zc3anonymousza31626ze3z83_222:
					if ((BgL_iz00_220 == BgL_nz00_217))
						{	/* Jas/lib.scm 81 */
							return BgL_rz00_221;
						}
					else
						{
							long BgL_rz00_859;

							long BgL_iz00_857;

							BgL_iz00_857 = (BgL_iz00_220 + ((long) 1));
							BgL_rz00_859 =
								(BgL_rz00_221 +
								BGl_utf8zd2length1zd2zzjas_libz00(
									(STRING_REF(BgL_sz00_219, BgL_iz00_220))));
							BgL_rz00_221 = BgL_rz00_859;
							BgL_iz00_220 = BgL_iz00_857;
							goto BgL_zc3anonymousza31626ze3z83_222;
						}
				}
			}
		}
	}



/* utf8-length1 */
	long BGl_utf8zd2length1zd2zzjas_libz00(long BgL_cnz00_19)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 86 */
			if ((BgL_cnz00_19 == ((long) 0)))
				{	/* Jas/lib.scm 88 */
					return ((long) 2);
				}
			else
				{	/* Jas/lib.scm 88 */
					if ((BgL_cnz00_19 < ((long) 128)))
						{	/* Jas/lib.scm 89 */
							return ((long) 1);
						}
					else
						{	/* Jas/lib.scm 89 */
							if ((BgL_cnz00_19 < ((long) 2048)))
								{	/* Jas/lib.scm 90 */
									return ((long) 2);
								}
							else
								{	/* Jas/lib.scm 90 */
									return ((long) 3);
		}}}}
	}



/* produce-utf8 */
	obj_t BGl_producezd2utf8zd2zzjas_libz00(obj_t BgL_sz00_20, obj_t BgL_s8z00_21)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 93 */
			{	/* Jas/lib.scm 94 */
				long BgL_nz00_232;

				BgL_nz00_232 = STRING_LENGTH(BgL_sz00_20);
				{
					long BgL_iz00_234;

					long BgL_jz00_235;

					BgL_iz00_234 = ((long) 0);
					BgL_jz00_235 = ((long) 0);
				BgL_zc3anonymousza31636ze3z83_236:
					if ((BgL_iz00_234 == BgL_nz00_232))
						{	/* Jas/lib.scm 96 */
							return BgL_s8z00_21;
						}
					else
						{
							long BgL_jz00_875;

							long BgL_iz00_873;

							BgL_iz00_873 = (BgL_iz00_234 + ((long) 1));
							BgL_jz00_875 =
								(BgL_jz00_235 +
								BGl_producezd2utf8zd21z00zzjas_libz00(BgL_s8z00_21,
									BgL_jz00_235, (STRING_REF(BgL_sz00_20, BgL_iz00_234))));
							BgL_jz00_235 = BgL_jz00_875;
							BgL_iz00_234 = BgL_iz00_873;
							goto BgL_zc3anonymousza31636ze3z83_236;
						}
				}
			}
		}
	}



/* produce-utf8-1 */
	long BGl_producezd2utf8zd21z00zzjas_libz00(obj_t BgL_s8z00_22,
		long BgL_jz00_23, long BgL_cnz00_24)
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 101 */
			if ((BgL_cnz00_24 == ((long) 0)))
				{	/* Jas/lib.scm 105 */
					{	/* Jas/lib.scm 106 */
						unsigned char BgL_auxz00_884;

						long BgL_auxz00_882;

						BgL_auxz00_884 = (((long) 192));
						BgL_auxz00_882 = (BgL_jz00_23 + ((long) 0));
						STRING_SET(BgL_s8z00_22, BgL_auxz00_882, BgL_auxz00_884);
					}
					{	/* Jas/lib.scm 107 */
						unsigned char BgL_auxz00_889;

						long BgL_auxz00_887;

						BgL_auxz00_889 = (((long) 128));
						BgL_auxz00_887 = (BgL_jz00_23 + ((long) 1));
						STRING_SET(BgL_s8z00_22, BgL_auxz00_887, BgL_auxz00_889);
					}
					return ((long) 2);
				}
			else
				{	/* Jas/lib.scm 105 */
					if ((BgL_cnz00_24 < ((long) 128)))
						{	/* Jas/lib.scm 109 */
							{	/* Jas/lib.scm 110 */
								unsigned char BgL_auxz00_896;

								long BgL_auxz00_894;

								BgL_auxz00_896 = (BgL_cnz00_24);
								BgL_auxz00_894 = (BgL_jz00_23 + ((long) 0));
								STRING_SET(BgL_s8z00_22, BgL_auxz00_894, BgL_auxz00_896);
							}
							return ((long) 1);
						}
					else
						{	/* Jas/lib.scm 109 */
							if ((BgL_cnz00_24 < ((long) 2048)))
								{	/* Jas/lib.scm 112 */
									{	/* Jas/lib.scm 113 */
										long BgL_arg1651z00_248;

										BgL_arg1651z00_248 =
											(((long) 192) | (BgL_cnz00_24 >> (int) (((long) 6))));
										{	/* Jas/lib.scm 113 */
											unsigned char BgL_auxz00_906;

											long BgL_auxz00_904;

											BgL_auxz00_906 = (BgL_arg1651z00_248);
											BgL_auxz00_904 = (BgL_jz00_23 + ((long) 0));
											STRING_SET(BgL_s8z00_22, BgL_auxz00_904, BgL_auxz00_906);
									}}
									{	/* Jas/lib.scm 114 */
										long BgL_arg1657z00_252;

										BgL_arg1657z00_252 =
											(((long) 128) | (BgL_cnz00_24 & ((long) 63)));
										{	/* Jas/lib.scm 114 */
											unsigned char BgL_auxz00_913;

											long BgL_auxz00_911;

											BgL_auxz00_913 = (BgL_arg1657z00_252);
											BgL_auxz00_911 = (BgL_jz00_23 + ((long) 1));
											STRING_SET(BgL_s8z00_22, BgL_auxz00_911, BgL_auxz00_913);
									}}
									return ((long) 2);
								}
							else
								{	/* Jas/lib.scm 112 */
									{	/* Jas/lib.scm 117 */
										long BgL_arg1663z00_256;

										BgL_arg1663z00_256 =
											(((long) 224) | (BgL_cnz00_24 >> (int) (((long) 12))));
										{	/* Jas/lib.scm 117 */
											unsigned char BgL_auxz00_921;

											long BgL_auxz00_919;

											BgL_auxz00_921 = (BgL_arg1663z00_256);
											BgL_auxz00_919 = (BgL_jz00_23 + ((long) 0));
											STRING_SET(BgL_s8z00_22, BgL_auxz00_919, BgL_auxz00_921);
									}}
									{	/* Jas/lib.scm 118 */
										long BgL_arg1668z00_260;

										BgL_arg1668z00_260 =
											(((long) 128) |
											((BgL_cnz00_24 >> (int) (((long) 6))) & ((long) 63)));
										{	/* Jas/lib.scm 118 */
											unsigned char BgL_auxz00_930;

											long BgL_auxz00_928;

											BgL_auxz00_930 = (BgL_arg1668z00_260);
											BgL_auxz00_928 = (BgL_jz00_23 + ((long) 1));
											STRING_SET(BgL_s8z00_22, BgL_auxz00_928, BgL_auxz00_930);
									}}
									{	/* Jas/lib.scm 119 */
										long BgL_arg1675z00_266;

										BgL_arg1675z00_266 =
											(((long) 128) | (BgL_cnz00_24 & ((long) 63)));
										{	/* Jas/lib.scm 119 */
											unsigned char BgL_auxz00_937;

											long BgL_auxz00_935;

											BgL_auxz00_937 = (BgL_arg1675z00_266);
											BgL_auxz00_935 = (BgL_jz00_23 + ((long) 2));
											STRING_SET(BgL_s8z00_22, BgL_auxz00_935, BgL_auxz00_937);
									}}
									return ((long) 3);
		}}}}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_libz00()
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_libz00()
	{
		AN_OBJECT;
		{	/* Jas/lib.scm 1 */
			return BUNSPEC;
		}
	}

#ifdef __cplusplus
}
#endif
