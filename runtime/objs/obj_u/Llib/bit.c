/*===========================================================================*/
/*   (Llib/bit.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/bit.scm -indent -o objs/obj_u/Llib/bit.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__bitzd2orllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2notelongzd2zz__bitz00(long);
	static obj_t BGl__bitzd2orzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2rshzd2zz__bitz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2rshzd2zz__bitz00(long, long);
	static obj_t BGl__bitzd2lshzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
	BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T
		BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T, long);
	BGL_EXPORTED_DECL long BGl_bitzd2lshzd2zz__bitz00(long, long);
	static obj_t BGl__bitzd2rshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2andllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2urshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
	static obj_t BGl__bitzd2xorllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2orelongzd2zz__bitz00(long, long);
	static obj_t BGl_requirezd2initializa7ationz75zz__bitz00 = BUNSPEC;
	BGL_EXPORTED_DECL long BGl_bitzd2andelongzd2zz__bitz00(long, long);
	static obj_t BGl__bitzd2lshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T);
	BGL_EXPORTED_DECL long BGl_bitzd2xorelongzd2zz__bitz00(long, long);
	static obj_t BGl_importedzd2moduleszd2initz00zz__bitz00();
	static obj_t BGl__bitzd2andzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2notelongzd2zz__bitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2andzd2zz__bitz00(long, long);
	BGL_EXPORTED_DECL long BGl_bitzd2orzd2zz__bitz00(long, long);
	static obj_t BGl__bitzd2orelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2rshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2notzd2zz__bitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long,
		long);
	static obj_t BGl__bitzd2urshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL long BGl_bitzd2rshelongzd2zz__bitz00(long, long);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL long BGl_bitzd2notzd2zz__bitz00(long);
	static obj_t BGl__bitzd2urshzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2lshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BGL_LONGLONG_T
		BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
	BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned
		long, long);
	static obj_t BGl__bitzd2xorzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2andelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	static obj_t BGl__bitzd2notllongzd2zz__bitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2lshelongzd2zz__bitz00(long, long);
	static obj_t BGl__bitzd2xorelongzd2zz__bitz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_bitzd2xorzd2zz__bitz00(long, long);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2orelongza7d1489z00, BGl__bitzd2orelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2andllongza71490z00, BGl__bitzd2andllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2xorelongza71491z00, BGl__bitzd2xorelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2lshllongza71492z00, BGl__bitzd2lshllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2urshelong1493za7, BGl__bitzd2urshelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2orza7d2za7za7__1494z00, BGl__bitzd2orzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2rshza7d2za7za7_1495z00, BGl__bitzd2rshzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2andelongza71496z00, BGl__bitzd2andelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2notza7d2za7za7_1497z00, BGl__bitzd2notzd2zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2lshelongza71498z00, BGl__bitzd2lshelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2andzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2andza7d2za7za7_1499z00, BGl__bitzd2andzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1460z00zz__bitz00,
		BgL_bgl_string1460za700za7za7_1500za7, "/tmp/bigloo/runtime/Llib/bit.scm",
		32);
	      DEFINE_STRING(BGl_string1461z00zz__bitz00,
		BgL_bgl_string1461za700za7za7_1501za7, "_bit-or", 7);
	      DEFINE_STRING(BGl_string1462z00zz__bitz00,
		BgL_bgl_string1462za700za7za7_1502za7, "long", 4);
	      DEFINE_STRING(BGl_string1463z00zz__bitz00,
		BgL_bgl_string1463za700za7za7_1503za7, "_bit-orelong", 12);
	      DEFINE_STRING(BGl_string1464z00zz__bitz00,
		BgL_bgl_string1464za700za7za7_1504za7, "elong", 5);
	      DEFINE_STRING(BGl_string1465z00zz__bitz00,
		BgL_bgl_string1465za700za7za7_1505za7, "_bit-orllong", 12);
	      DEFINE_STRING(BGl_string1466z00zz__bitz00,
		BgL_bgl_string1466za700za7za7_1506za7, "llong", 5);
	      DEFINE_STRING(BGl_string1467z00zz__bitz00,
		BgL_bgl_string1467za700za7za7_1507za7, "_bit-and", 8);
	      DEFINE_STRING(BGl_string1468z00zz__bitz00,
		BgL_bgl_string1468za700za7za7_1508za7, "_bit-andelong", 13);
	      DEFINE_STRING(BGl_string1470z00zz__bitz00,
		BgL_bgl_string1470za700za7za7_1509za7, "_bit-xor", 8);
	      DEFINE_STRING(BGl_string1469z00zz__bitz00,
		BgL_bgl_string1469za700za7za7_1510za7, "_bit-andllong", 13);
	      DEFINE_STRING(BGl_string1471z00zz__bitz00,
		BgL_bgl_string1471za700za7za7_1511za7, "_bit-xorelong", 13);
	      DEFINE_STRING(BGl_string1472z00zz__bitz00,
		BgL_bgl_string1472za700za7za7_1512za7, "_bit-xorllong", 13);
	      DEFINE_STRING(BGl_string1473z00zz__bitz00,
		BgL_bgl_string1473za700za7za7_1513za7, "_bit-not", 8);
	      DEFINE_STRING(BGl_string1474z00zz__bitz00,
		BgL_bgl_string1474za700za7za7_1514za7, "_bit-notelong", 13);
	      DEFINE_STRING(BGl_string1475z00zz__bitz00,
		BgL_bgl_string1475za700za7za7_1515za7, "_bit-notllong", 13);
	      DEFINE_STRING(BGl_string1476z00zz__bitz00,
		BgL_bgl_string1476za700za7za7_1516za7, "_bit-rsh", 8);
	      DEFINE_STRING(BGl_string1477z00zz__bitz00,
		BgL_bgl_string1477za700za7za7_1517za7, "_bit-rshelong", 13);
	      DEFINE_STRING(BGl_string1478z00zz__bitz00,
		BgL_bgl_string1478za700za7za7_1518za7, "_bit-rshllong", 13);
	      DEFINE_STRING(BGl_string1480z00zz__bitz00,
		BgL_bgl_string1480za700za7za7_1519za7, "ulong", 5);
	      DEFINE_STRING(BGl_string1479z00zz__bitz00,
		BgL_bgl_string1479za700za7za7_1520za7, "_bit-ursh", 9);
	      DEFINE_STRING(BGl_string1481z00zz__bitz00,
		BgL_bgl_string1481za700za7za7_1521za7, "_bit-urshelong", 14);
	      DEFINE_STRING(BGl_string1482z00zz__bitz00,
		BgL_bgl_string1482za700za7za7_1522za7, "uelong", 6);
	      DEFINE_STRING(BGl_string1483z00zz__bitz00,
		BgL_bgl_string1483za700za7za7_1523za7, "_bit-urshllong", 14);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2notllongza71524z00, BGl__bitzd2notllongzd2zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1484z00zz__bitz00,
		BgL_bgl_string1484za700za7za7_1525za7, "ullong", 6);
	      DEFINE_STRING(BGl_string1485z00zz__bitz00,
		BgL_bgl_string1485za700za7za7_1526za7, "_bit-lsh", 8);
	      DEFINE_STRING(BGl_string1486z00zz__bitz00,
		BgL_bgl_string1486za700za7za7_1527za7, "_bit-lshelong", 13);
	      DEFINE_STRING(BGl_string1487z00zz__bitz00,
		BgL_bgl_string1487za700za7za7_1528za7, "_bit-lshllong", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2xorza7d2za7za7_1529z00, BGl__bitzd2xorzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1488z00zz__bitz00,
		BgL_bgl_string1488za700za7za7_1530za7, "__bit", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2lshzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2lshza7d2za7za7_1531z00, BGl__bitzd2lshzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2notelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2notelongza71532z00, BGl__bitzd2notelongzd2zz__bitz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2rshllongza71533z00, BGl__bitzd2rshllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2orllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2orllongza7d1534z00, BGl__bitzd2orllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2urshza7d2za7za71535z00, BGl__bitzd2urshzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2xorllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2xorllongza71536z00, BGl__bitzd2xorllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2urshllongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2urshllong1537za7, BGl__bitzd2urshllongzd2zz__bitz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bitzd2rshelongzd2envz00zz__bitz00,
		BgL_bgl__bitza7d2rshelongza71538z00, BGl__bitzd2rshelongzd2zz__bitz00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long
		BgL_checksumz00_874, char *BgL_fromz00_875)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__bitz00))
				{
					BGl_requirezd2initializa7ationz75zz__bitz00 = BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__bitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* bit-or */
	BGL_EXPORTED_DEF long BGl_bitzd2orzd2zz__bitz00(long BgL_xz00_1,
		long BgL_yz00_2)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 167 */
			return (BgL_xz00_1 | BgL_yz00_2);
		}
	}



/* _bit-or */
	obj_t BGl__bitzd2orzd2zz__bitz00(obj_t BgL_envz00_697, obj_t BgL_xz00_698,
		obj_t BgL_yz00_699)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 167 */
			{	/* Llib/bit.scm 168 */
				long BgL_auxz00_881;

				{	/* Llib/bit.scm 168 */
					long BgL_xz00_835;

					long BgL_yz00_836;

					{	/* Llib/bit.scm 168 */
						obj_t BgL_auxz00_882;

						if (INTEGERP(BgL_xz00_698))
							{	/* Llib/bit.scm 168 */
								BgL_auxz00_882 = BgL_xz00_698;
							}
						else
							{
								obj_t BgL_auxz00_885;

								BgL_auxz00_885 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 7844)), BGl_string1461z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_698);
								FAILURE(BgL_auxz00_885, BFALSE, BFALSE);
							}
						BgL_xz00_835 = (long) CINT(BgL_auxz00_882);
					}
					{	/* Llib/bit.scm 168 */
						obj_t BgL_auxz00_890;

						if (INTEGERP(BgL_yz00_699))
							{	/* Llib/bit.scm 168 */
								BgL_auxz00_890 = BgL_yz00_699;
							}
						else
							{
								obj_t BgL_auxz00_893;

								BgL_auxz00_893 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 7844)), BGl_string1461z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_699);
								FAILURE(BgL_auxz00_893, BFALSE, BFALSE);
							}
						BgL_yz00_836 = (long) CINT(BgL_auxz00_890);
					}
					BgL_auxz00_881 = (BgL_xz00_835 | BgL_yz00_836);
				}
				return BINT(BgL_auxz00_881);
			}
		}
	}



/* bit-orelong */
	BGL_EXPORTED_DEF long BGl_bitzd2orelongzd2zz__bitz00(long BgL_xz00_3,
		long BgL_yz00_4)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 173 */
			return (BgL_xz00_3 | BgL_yz00_4);
		}
	}



/* _bit-orelong */
	obj_t BGl__bitzd2orelongzd2zz__bitz00(obj_t BgL_envz00_700,
		obj_t BgL_xz00_701, obj_t BgL_yz00_702)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 173 */
			{	/* Llib/bit.scm 174 */
				long BgL_auxz00_901;

				{	/* Llib/bit.scm 174 */
					long BgL_xz00_837;

					long BgL_yz00_838;

					{	/* Llib/bit.scm 174 */
						obj_t BgL_auxz00_902;

						if (ELONGP(BgL_xz00_701))
							{	/* Llib/bit.scm 174 */
								BgL_auxz00_902 = BgL_xz00_701;
							}
						else
							{
								obj_t BgL_auxz00_905;

								BgL_auxz00_905 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8118)), BGl_string1463z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_701);
								FAILURE(BgL_auxz00_905, BFALSE, BFALSE);
							}
						BgL_xz00_837 = BELONG_TO_LONG(BgL_auxz00_902);
					}
					{	/* Llib/bit.scm 174 */
						obj_t BgL_auxz00_910;

						if (ELONGP(BgL_yz00_702))
							{	/* Llib/bit.scm 174 */
								BgL_auxz00_910 = BgL_yz00_702;
							}
						else
							{
								obj_t BgL_auxz00_913;

								BgL_auxz00_913 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8118)), BGl_string1463z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_yz00_702);
								FAILURE(BgL_auxz00_913, BFALSE, BFALSE);
							}
						BgL_yz00_838 = BELONG_TO_LONG(BgL_auxz00_910);
					}
					BgL_auxz00_901 = (BgL_xz00_837 | BgL_yz00_838);
				}
				return make_belong(BgL_auxz00_901);
			}
		}
	}



/* bit-orllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_5, BGL_LONGLONG_T BgL_yz00_6)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 179 */
			return (BgL_xz00_5 | BgL_yz00_6);
		}
	}



/* _bit-orllong */
	obj_t BGl__bitzd2orllongzd2zz__bitz00(obj_t BgL_envz00_703,
		obj_t BgL_xz00_704, obj_t BgL_yz00_705)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 179 */
			{	/* Llib/bit.scm 180 */
				BGL_LONGLONG_T BgL_auxz00_921;

				{	/* Llib/bit.scm 180 */
					BGL_LONGLONG_T BgL_xz00_839;

					BGL_LONGLONG_T BgL_yz00_840;

					{	/* Llib/bit.scm 180 */
						obj_t BgL_auxz00_922;

						if (LLONGP(BgL_xz00_704))
							{	/* Llib/bit.scm 180 */
								BgL_auxz00_922 = BgL_xz00_704;
							}
						else
							{
								obj_t BgL_auxz00_925;

								BgL_auxz00_925 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8397)), BGl_string1465z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_704);
								FAILURE(BgL_auxz00_925, BFALSE, BFALSE);
							}
						BgL_xz00_839 = BLLONG_TO_LLONG(BgL_auxz00_922);
					}
					{	/* Llib/bit.scm 180 */
						obj_t BgL_auxz00_930;

						if (LLONGP(BgL_yz00_705))
							{	/* Llib/bit.scm 180 */
								BgL_auxz00_930 = BgL_yz00_705;
							}
						else
							{
								obj_t BgL_auxz00_933;

								BgL_auxz00_933 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8397)), BGl_string1465z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_yz00_705);
								FAILURE(BgL_auxz00_933, BFALSE, BFALSE);
							}
						BgL_yz00_840 = BLLONG_TO_LLONG(BgL_auxz00_930);
					}
					BgL_auxz00_921 = (BgL_xz00_839 | BgL_yz00_840);
				}
				return make_bllong(BgL_auxz00_921);
			}
		}
	}



/* bit-and */
	BGL_EXPORTED_DEF long BGl_bitzd2andzd2zz__bitz00(long BgL_xz00_7,
		long BgL_yz00_8)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 185 */
			return (BgL_xz00_7 & BgL_yz00_8);
		}
	}



/* _bit-and */
	obj_t BGl__bitzd2andzd2zz__bitz00(obj_t BgL_envz00_706, obj_t BgL_xz00_707,
		obj_t BgL_yz00_708)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 185 */
			{	/* Llib/bit.scm 186 */
				long BgL_auxz00_941;

				{	/* Llib/bit.scm 186 */
					long BgL_xz00_841;

					long BgL_yz00_842;

					{	/* Llib/bit.scm 186 */
						obj_t BgL_auxz00_942;

						if (INTEGERP(BgL_xz00_707))
							{	/* Llib/bit.scm 186 */
								BgL_auxz00_942 = BgL_xz00_707;
							}
						else
							{
								obj_t BgL_auxz00_945;

								BgL_auxz00_945 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8672)), BGl_string1467z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_707);
								FAILURE(BgL_auxz00_945, BFALSE, BFALSE);
							}
						BgL_xz00_841 = (long) CINT(BgL_auxz00_942);
					}
					{	/* Llib/bit.scm 186 */
						obj_t BgL_auxz00_950;

						if (INTEGERP(BgL_yz00_708))
							{	/* Llib/bit.scm 186 */
								BgL_auxz00_950 = BgL_yz00_708;
							}
						else
							{
								obj_t BgL_auxz00_953;

								BgL_auxz00_953 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8672)), BGl_string1467z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_708);
								FAILURE(BgL_auxz00_953, BFALSE, BFALSE);
							}
						BgL_yz00_842 = (long) CINT(BgL_auxz00_950);
					}
					BgL_auxz00_941 = (BgL_xz00_841 & BgL_yz00_842);
				}
				return BINT(BgL_auxz00_941);
			}
		}
	}



/* bit-andelong */
	BGL_EXPORTED_DEF long BGl_bitzd2andelongzd2zz__bitz00(long BgL_xz00_9,
		long BgL_yz00_10)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 191 */
			return (BgL_xz00_9 & BgL_yz00_10);
		}
	}



/* _bit-andelong */
	obj_t BGl__bitzd2andelongzd2zz__bitz00(obj_t BgL_envz00_709,
		obj_t BgL_xz00_710, obj_t BgL_yz00_711)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 191 */
			{	/* Llib/bit.scm 192 */
				long BgL_auxz00_961;

				{	/* Llib/bit.scm 192 */
					long BgL_xz00_843;

					long BgL_yz00_844;

					{	/* Llib/bit.scm 192 */
						obj_t BgL_auxz00_962;

						if (ELONGP(BgL_xz00_710))
							{	/* Llib/bit.scm 192 */
								BgL_auxz00_962 = BgL_xz00_710;
							}
						else
							{
								obj_t BgL_auxz00_965;

								BgL_auxz00_965 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8948)), BGl_string1468z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_710);
								FAILURE(BgL_auxz00_965, BFALSE, BFALSE);
							}
						BgL_xz00_843 = BELONG_TO_LONG(BgL_auxz00_962);
					}
					{	/* Llib/bit.scm 192 */
						obj_t BgL_auxz00_970;

						if (ELONGP(BgL_yz00_711))
							{	/* Llib/bit.scm 192 */
								BgL_auxz00_970 = BgL_yz00_711;
							}
						else
							{
								obj_t BgL_auxz00_973;

								BgL_auxz00_973 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 8948)), BGl_string1468z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_yz00_711);
								FAILURE(BgL_auxz00_973, BFALSE, BFALSE);
							}
						BgL_yz00_844 = BELONG_TO_LONG(BgL_auxz00_970);
					}
					BgL_auxz00_961 = (BgL_xz00_843 & BgL_yz00_844);
				}
				return make_belong(BgL_auxz00_961);
			}
		}
	}



/* bit-andllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_11, BGL_LONGLONG_T BgL_yz00_12)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 197 */
			return (BgL_xz00_11 & BgL_yz00_12);
		}
	}



/* _bit-andllong */
	obj_t BGl__bitzd2andllongzd2zz__bitz00(obj_t BgL_envz00_712,
		obj_t BgL_xz00_713, obj_t BgL_yz00_714)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 197 */
			{	/* Llib/bit.scm 198 */
				BGL_LONGLONG_T BgL_auxz00_981;

				{	/* Llib/bit.scm 198 */
					BGL_LONGLONG_T BgL_xz00_845;

					BGL_LONGLONG_T BgL_yz00_846;

					{	/* Llib/bit.scm 198 */
						obj_t BgL_auxz00_982;

						if (LLONGP(BgL_xz00_713))
							{	/* Llib/bit.scm 198 */
								BgL_auxz00_982 = BgL_xz00_713;
							}
						else
							{
								obj_t BgL_auxz00_985;

								BgL_auxz00_985 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9229)), BGl_string1469z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_713);
								FAILURE(BgL_auxz00_985, BFALSE, BFALSE);
							}
						BgL_xz00_845 = BLLONG_TO_LLONG(BgL_auxz00_982);
					}
					{	/* Llib/bit.scm 198 */
						obj_t BgL_auxz00_990;

						if (LLONGP(BgL_yz00_714))
							{	/* Llib/bit.scm 198 */
								BgL_auxz00_990 = BgL_yz00_714;
							}
						else
							{
								obj_t BgL_auxz00_993;

								BgL_auxz00_993 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9229)), BGl_string1469z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_yz00_714);
								FAILURE(BgL_auxz00_993, BFALSE, BFALSE);
							}
						BgL_yz00_846 = BLLONG_TO_LLONG(BgL_auxz00_990);
					}
					BgL_auxz00_981 = (BgL_xz00_845 & BgL_yz00_846);
				}
				return make_bllong(BgL_auxz00_981);
			}
		}
	}



/* bit-xor */
	BGL_EXPORTED_DEF long BGl_bitzd2xorzd2zz__bitz00(long BgL_xz00_13,
		long BgL_yz00_14)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 203 */
			return (BgL_xz00_13 ^ BgL_yz00_14);
		}
	}



/* _bit-xor */
	obj_t BGl__bitzd2xorzd2zz__bitz00(obj_t BgL_envz00_715, obj_t BgL_xz00_716,
		obj_t BgL_yz00_717)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 203 */
			{	/* Llib/bit.scm 204 */
				long BgL_auxz00_1001;

				{	/* Llib/bit.scm 204 */
					long BgL_xz00_847;

					long BgL_yz00_848;

					{	/* Llib/bit.scm 204 */
						obj_t BgL_auxz00_1002;

						if (INTEGERP(BgL_xz00_716))
							{	/* Llib/bit.scm 204 */
								BgL_auxz00_1002 = BgL_xz00_716;
							}
						else
							{
								obj_t BgL_auxz00_1005;

								BgL_auxz00_1005 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9505)), BGl_string1470z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_716);
								FAILURE(BgL_auxz00_1005, BFALSE, BFALSE);
							}
						BgL_xz00_847 = (long) CINT(BgL_auxz00_1002);
					}
					{	/* Llib/bit.scm 204 */
						obj_t BgL_auxz00_1010;

						if (INTEGERP(BgL_yz00_717))
							{	/* Llib/bit.scm 204 */
								BgL_auxz00_1010 = BgL_yz00_717;
							}
						else
							{
								obj_t BgL_auxz00_1013;

								BgL_auxz00_1013 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9505)), BGl_string1470z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_717);
								FAILURE(BgL_auxz00_1013, BFALSE, BFALSE);
							}
						BgL_yz00_848 = (long) CINT(BgL_auxz00_1010);
					}
					BgL_auxz00_1001 = (BgL_xz00_847 ^ BgL_yz00_848);
				}
				return BINT(BgL_auxz00_1001);
			}
		}
	}



/* bit-xorelong */
	BGL_EXPORTED_DEF long BGl_bitzd2xorelongzd2zz__bitz00(long BgL_xz00_15,
		long BgL_yz00_16)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 209 */
			return (BgL_xz00_15 ^ BgL_yz00_16);
		}
	}



/* _bit-xorelong */
	obj_t BGl__bitzd2xorelongzd2zz__bitz00(obj_t BgL_envz00_718,
		obj_t BgL_xz00_719, obj_t BgL_yz00_720)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 209 */
			{	/* Llib/bit.scm 210 */
				long BgL_auxz00_1021;

				{	/* Llib/bit.scm 210 */
					long BgL_xz00_849;

					long BgL_yz00_850;

					{	/* Llib/bit.scm 210 */
						obj_t BgL_auxz00_1022;

						if (ELONGP(BgL_xz00_719))
							{	/* Llib/bit.scm 210 */
								BgL_auxz00_1022 = BgL_xz00_719;
							}
						else
							{
								obj_t BgL_auxz00_1025;

								BgL_auxz00_1025 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9781)), BGl_string1471z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_719);
								FAILURE(BgL_auxz00_1025, BFALSE, BFALSE);
							}
						BgL_xz00_849 = BELONG_TO_LONG(BgL_auxz00_1022);
					}
					{	/* Llib/bit.scm 210 */
						obj_t BgL_auxz00_1030;

						if (ELONGP(BgL_yz00_720))
							{	/* Llib/bit.scm 210 */
								BgL_auxz00_1030 = BgL_yz00_720;
							}
						else
							{
								obj_t BgL_auxz00_1033;

								BgL_auxz00_1033 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 9781)), BGl_string1471z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_yz00_720);
								FAILURE(BgL_auxz00_1033, BFALSE, BFALSE);
							}
						BgL_yz00_850 = BELONG_TO_LONG(BgL_auxz00_1030);
					}
					BgL_auxz00_1021 = (BgL_xz00_849 ^ BgL_yz00_850);
				}
				return make_belong(BgL_auxz00_1021);
			}
		}
	}



/* bit-xorllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_17, BGL_LONGLONG_T BgL_yz00_18)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 215 */
			return (BgL_xz00_17 ^ BgL_yz00_18);
		}
	}



/* _bit-xorllong */
	obj_t BGl__bitzd2xorllongzd2zz__bitz00(obj_t BgL_envz00_721,
		obj_t BgL_xz00_722, obj_t BgL_yz00_723)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 215 */
			{	/* Llib/bit.scm 216 */
				BGL_LONGLONG_T BgL_auxz00_1041;

				{	/* Llib/bit.scm 216 */
					BGL_LONGLONG_T BgL_xz00_851;

					BGL_LONGLONG_T BgL_yz00_852;

					{	/* Llib/bit.scm 216 */
						obj_t BgL_auxz00_1042;

						if (LLONGP(BgL_xz00_722))
							{	/* Llib/bit.scm 216 */
								BgL_auxz00_1042 = BgL_xz00_722;
							}
						else
							{
								obj_t BgL_auxz00_1045;

								BgL_auxz00_1045 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 10062)), BGl_string1472z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_722);
								FAILURE(BgL_auxz00_1045, BFALSE, BFALSE);
							}
						BgL_xz00_851 = BLLONG_TO_LLONG(BgL_auxz00_1042);
					}
					{	/* Llib/bit.scm 216 */
						obj_t BgL_auxz00_1050;

						if (LLONGP(BgL_yz00_723))
							{	/* Llib/bit.scm 216 */
								BgL_auxz00_1050 = BgL_yz00_723;
							}
						else
							{
								obj_t BgL_auxz00_1053;

								BgL_auxz00_1053 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 10062)), BGl_string1472z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_yz00_723);
								FAILURE(BgL_auxz00_1053, BFALSE, BFALSE);
							}
						BgL_yz00_852 = BLLONG_TO_LLONG(BgL_auxz00_1050);
					}
					BgL_auxz00_1041 = (BgL_xz00_851 ^ BgL_yz00_852);
				}
				return make_bllong(BgL_auxz00_1041);
			}
		}
	}



/* bit-not */
	BGL_EXPORTED_DEF long BGl_bitzd2notzd2zz__bitz00(long BgL_xz00_19)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 221 */
			return ~(BgL_xz00_19);
		}
	}



/* _bit-not */
	obj_t BGl__bitzd2notzd2zz__bitz00(obj_t BgL_envz00_724, obj_t BgL_xz00_725)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 221 */
			{	/* Llib/bit.scm 222 */
				long BgL_auxz00_1061;

				{	/* Llib/bit.scm 222 */
					long BgL_xz00_853;

					{	/* Llib/bit.scm 222 */
						obj_t BgL_auxz00_1062;

						if (INTEGERP(BgL_xz00_725))
							{	/* Llib/bit.scm 222 */
								BgL_auxz00_1062 = BgL_xz00_725;
							}
						else
							{
								obj_t BgL_auxz00_1065;

								BgL_auxz00_1065 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 10336)), BGl_string1473z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_725);
								FAILURE(BgL_auxz00_1065, BFALSE, BFALSE);
							}
						BgL_xz00_853 = (long) CINT(BgL_auxz00_1062);
					}
					BgL_auxz00_1061 = ~(BgL_xz00_853);
				}
				return BINT(BgL_auxz00_1061);
			}
		}
	}



/* bit-notelong */
	BGL_EXPORTED_DEF long BGl_bitzd2notelongzd2zz__bitz00(long BgL_xz00_20)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 227 */
			return ~(BgL_xz00_20);
		}
	}



/* _bit-notelong */
	obj_t BGl__bitzd2notelongzd2zz__bitz00(obj_t BgL_envz00_726,
		obj_t BgL_xz00_727)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 227 */
			{	/* Llib/bit.scm 228 */
				long BgL_auxz00_1073;

				{	/* Llib/bit.scm 228 */
					long BgL_xz00_854;

					{	/* Llib/bit.scm 228 */
						obj_t BgL_auxz00_1074;

						if (ELONGP(BgL_xz00_727))
							{	/* Llib/bit.scm 228 */
								BgL_auxz00_1074 = BgL_xz00_727;
							}
						else
							{
								obj_t BgL_auxz00_1077;

								BgL_auxz00_1077 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 10611)), BGl_string1474z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_727);
								FAILURE(BgL_auxz00_1077, BFALSE, BFALSE);
							}
						BgL_xz00_854 = BELONG_TO_LONG(BgL_auxz00_1074);
					}
					BgL_auxz00_1073 = ~(BgL_xz00_854);
				}
				return make_belong(BgL_auxz00_1073);
			}
		}
	}



/* bit-notllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_21)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 233 */
			return ~(BgL_xz00_21);
		}
	}



/* _bit-notllong */
	obj_t BGl__bitzd2notllongzd2zz__bitz00(obj_t BgL_envz00_728,
		obj_t BgL_xz00_729)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 233 */
			{	/* Llib/bit.scm 234 */
				BGL_LONGLONG_T BgL_auxz00_1085;

				{	/* Llib/bit.scm 234 */
					BGL_LONGLONG_T BgL_xz00_855;

					{	/* Llib/bit.scm 234 */
						obj_t BgL_auxz00_1086;

						if (LLONGP(BgL_xz00_729))
							{	/* Llib/bit.scm 234 */
								BgL_auxz00_1086 = BgL_xz00_729;
							}
						else
							{
								obj_t BgL_auxz00_1089;

								BgL_auxz00_1089 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 10891)), BGl_string1475z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_729);
								FAILURE(BgL_auxz00_1089, BFALSE, BFALSE);
							}
						BgL_xz00_855 = BLLONG_TO_LLONG(BgL_auxz00_1086);
					}
					BgL_auxz00_1085 = ~(BgL_xz00_855);
				}
				return make_bllong(BgL_auxz00_1085);
			}
		}
	}



/* bit-rsh */
	BGL_EXPORTED_DEF long BGl_bitzd2rshzd2zz__bitz00(long BgL_xz00_22,
		long BgL_yz00_23)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 239 */
			return (BgL_xz00_22 >> (int) (BgL_yz00_23));
		}
	}



/* _bit-rsh */
	obj_t BGl__bitzd2rshzd2zz__bitz00(obj_t BgL_envz00_730, obj_t BgL_xz00_731,
		obj_t BgL_yz00_732)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 239 */
			{	/* Llib/bit.scm 240 */
				long BgL_auxz00_1098;

				{	/* Llib/bit.scm 240 */
					long BgL_xz00_856;

					long BgL_yz00_857;

					{	/* Llib/bit.scm 240 */
						obj_t BgL_auxz00_1099;

						if (INTEGERP(BgL_xz00_731))
							{	/* Llib/bit.scm 240 */
								BgL_auxz00_1099 = BgL_xz00_731;
							}
						else
							{
								obj_t BgL_auxz00_1102;

								BgL_auxz00_1102 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11168)), BGl_string1476z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_731);
								FAILURE(BgL_auxz00_1102, BFALSE, BFALSE);
							}
						BgL_xz00_856 = (long) CINT(BgL_auxz00_1099);
					}
					{	/* Llib/bit.scm 240 */
						obj_t BgL_auxz00_1107;

						if (INTEGERP(BgL_yz00_732))
							{	/* Llib/bit.scm 240 */
								BgL_auxz00_1107 = BgL_yz00_732;
							}
						else
							{
								obj_t BgL_auxz00_1110;

								BgL_auxz00_1110 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11168)), BGl_string1476z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_732);
								FAILURE(BgL_auxz00_1110, BFALSE, BFALSE);
							}
						BgL_yz00_857 = (long) CINT(BgL_auxz00_1107);
					}
					BgL_auxz00_1098 = (BgL_xz00_856 >> (int) (BgL_yz00_857));
				}
				return BINT(BgL_auxz00_1098);
			}
		}
	}



/* bit-rshelong */
	BGL_EXPORTED_DEF long BGl_bitzd2rshelongzd2zz__bitz00(long BgL_xz00_24,
		long BgL_yz00_25)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 245 */
			return (BgL_xz00_24 >> (int) (BgL_yz00_25));
		}
	}



/* _bit-rshelong */
	obj_t BGl__bitzd2rshelongzd2zz__bitz00(obj_t BgL_envz00_733,
		obj_t BgL_xz00_734, obj_t BgL_yz00_735)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 245 */
			{	/* Llib/bit.scm 246 */
				long BgL_auxz00_1120;

				{	/* Llib/bit.scm 246 */
					long BgL_xz00_858;

					long BgL_yz00_859;

					{	/* Llib/bit.scm 246 */
						obj_t BgL_auxz00_1121;

						if (ELONGP(BgL_xz00_734))
							{	/* Llib/bit.scm 246 */
								BgL_auxz00_1121 = BgL_xz00_734;
							}
						else
							{
								obj_t BgL_auxz00_1124;

								BgL_auxz00_1124 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11451)), BGl_string1477z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_734);
								FAILURE(BgL_auxz00_1124, BFALSE, BFALSE);
							}
						BgL_xz00_858 = BELONG_TO_LONG(BgL_auxz00_1121);
					}
					{	/* Llib/bit.scm 246 */
						obj_t BgL_auxz00_1129;

						if (INTEGERP(BgL_yz00_735))
							{	/* Llib/bit.scm 246 */
								BgL_auxz00_1129 = BgL_yz00_735;
							}
						else
							{
								obj_t BgL_auxz00_1132;

								BgL_auxz00_1132 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11451)), BGl_string1477z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_735);
								FAILURE(BgL_auxz00_1132, BFALSE, BFALSE);
							}
						BgL_yz00_859 = (long) CINT(BgL_auxz00_1129);
					}
					BgL_auxz00_1120 = (BgL_xz00_858 >> (int) (BgL_yz00_859));
				}
				return make_belong(BgL_auxz00_1120);
			}
		}
	}



/* bit-rshllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_26, long BgL_yz00_27)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 251 */
			return (BgL_xz00_26 >> (int) (BgL_yz00_27));
		}
	}



/* _bit-rshllong */
	obj_t BGl__bitzd2rshllongzd2zz__bitz00(obj_t BgL_envz00_736,
		obj_t BgL_xz00_737, obj_t BgL_yz00_738)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 251 */
			{	/* Llib/bit.scm 252 */
				BGL_LONGLONG_T BgL_auxz00_1142;

				{	/* Llib/bit.scm 252 */
					BGL_LONGLONG_T BgL_xz00_860;

					long BgL_yz00_861;

					{	/* Llib/bit.scm 252 */
						obj_t BgL_auxz00_1143;

						if (LLONGP(BgL_xz00_737))
							{	/* Llib/bit.scm 252 */
								BgL_auxz00_1143 = BgL_xz00_737;
							}
						else
							{
								obj_t BgL_auxz00_1146;

								BgL_auxz00_1146 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11739)), BGl_string1478z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_737);
								FAILURE(BgL_auxz00_1146, BFALSE, BFALSE);
							}
						BgL_xz00_860 = BLLONG_TO_LLONG(BgL_auxz00_1143);
					}
					{	/* Llib/bit.scm 252 */
						obj_t BgL_auxz00_1151;

						if (INTEGERP(BgL_yz00_738))
							{	/* Llib/bit.scm 252 */
								BgL_auxz00_1151 = BgL_yz00_738;
							}
						else
							{
								obj_t BgL_auxz00_1154;

								BgL_auxz00_1154 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 11739)), BGl_string1478z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_738);
								FAILURE(BgL_auxz00_1154, BFALSE, BFALSE);
							}
						BgL_yz00_861 = (long) CINT(BgL_auxz00_1151);
					}
					BgL_auxz00_1142 = (BgL_xz00_860 >> (int) (BgL_yz00_861));
				}
				return make_bllong(BgL_auxz00_1142);
			}
		}
	}



/* bit-ursh */
	BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long
		BgL_xz00_28, long BgL_yz00_29)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 257 */
			return (BgL_xz00_28 >> (int) (BgL_yz00_29));
		}
	}



/* _bit-ursh */
	obj_t BGl__bitzd2urshzd2zz__bitz00(obj_t BgL_envz00_739, obj_t BgL_xz00_740,
		obj_t BgL_yz00_741)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 257 */
			{	/* Llib/bit.scm 258 */
				unsigned long BgL_auxz00_1164;

				{	/* Llib/bit.scm 258 */
					unsigned long BgL_xz00_862;

					long BgL_yz00_863;

					{	/* Llib/bit.scm 258 */
						obj_t BgL_auxz00_1165;

						if (INTEGERP(BgL_xz00_740))
							{	/* Llib/bit.scm 258 */
								BgL_auxz00_1165 = BgL_xz00_740;
							}
						else
							{
								obj_t BgL_auxz00_1168;

								BgL_auxz00_1168 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12023)), BGl_string1479z00zz__bitz00,
									BGl_string1480z00zz__bitz00, BgL_xz00_740);
								FAILURE(BgL_auxz00_1168, BFALSE, BFALSE);
							}
						BgL_xz00_862 = (unsigned long) CINT(BgL_auxz00_1165);
					}
					{	/* Llib/bit.scm 258 */
						obj_t BgL_auxz00_1173;

						if (INTEGERP(BgL_yz00_741))
							{	/* Llib/bit.scm 258 */
								BgL_auxz00_1173 = BgL_yz00_741;
							}
						else
							{
								obj_t BgL_auxz00_1176;

								BgL_auxz00_1176 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12023)), BGl_string1479z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_741);
								FAILURE(BgL_auxz00_1176, BFALSE, BFALSE);
							}
						BgL_yz00_863 = (long) CINT(BgL_auxz00_1173);
					}
					BgL_auxz00_1164 = (BgL_xz00_862 >> (int) (BgL_yz00_863));
				}
				return BINT(BgL_auxz00_1164);
			}
		}
	}



/* bit-urshelong */
	BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long
		BgL_xz00_30, long BgL_yz00_31)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 263 */
			{	/* Llib/bit.scm 264 */
				int BgL_auxz00_1184;

				BgL_auxz00_1184 = (int) (BgL_yz00_31);
				return (BgL_xz00_30 >> BgL_auxz00_1184);
			}
		}
	}



/* _bit-urshelong */
	obj_t BGl__bitzd2urshelongzd2zz__bitz00(obj_t BgL_envz00_742,
		obj_t BgL_xz00_743, obj_t BgL_yz00_744)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 263 */
			{	/* Llib/bit.scm 264 */
				long BgL_auxz00_1187;

				{	/* Llib/bit.scm 264 */
					unsigned long BgL_xz00_864;

					long BgL_yz00_865;

					{	/* Llib/bit.scm 264 */
						obj_t BgL_auxz00_1188;

						if (ELONGP(BgL_xz00_743))
							{	/* Llib/bit.scm 264 */
								BgL_auxz00_1188 = BgL_xz00_743;
							}
						else
							{
								obj_t BgL_auxz00_1191;

								BgL_auxz00_1191 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12308)), BGl_string1481z00zz__bitz00,
									BGl_string1482z00zz__bitz00, BgL_xz00_743);
								FAILURE(BgL_auxz00_1191, BFALSE, BFALSE);
							}
						BgL_xz00_864 = BELONG_TO_LONG(BgL_auxz00_1188);
					}
					{	/* Llib/bit.scm 264 */
						obj_t BgL_auxz00_1196;

						if (INTEGERP(BgL_yz00_744))
							{	/* Llib/bit.scm 264 */
								BgL_auxz00_1196 = BgL_yz00_744;
							}
						else
							{
								obj_t BgL_auxz00_1199;

								BgL_auxz00_1199 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12308)), BGl_string1481z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_744);
								FAILURE(BgL_auxz00_1199, BFALSE, BFALSE);
							}
						BgL_yz00_865 = (long) CINT(BgL_auxz00_1196);
					}
					{	/* Llib/bit.scm 264 */
						int BgL_auxz00_1204;

						BgL_auxz00_1204 = (int) (BgL_yz00_865);
						BgL_auxz00_1187 = (BgL_xz00_864 >> BgL_auxz00_1204);
				}}
				return make_belong(BgL_auxz00_1187);
			}
		}
	}



/* bit-urshllong */
	BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T
		BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T BgL_xz00_32,
		long BgL_yz00_33)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 269 */
			{	/* Llib/bit.scm 270 */
				int BgL_auxz00_1208;

				BgL_auxz00_1208 = (int) (BgL_yz00_33);
				return (BgL_xz00_32 >> BgL_auxz00_1208);
			}
		}
	}



/* _bit-urshllong */
	obj_t BGl__bitzd2urshllongzd2zz__bitz00(obj_t BgL_envz00_745,
		obj_t BgL_xz00_746, obj_t BgL_yz00_747)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 269 */
			{	/* Llib/bit.scm 270 */
				unsigned BGL_LONGLONG_T BgL_auxz00_1211;

				{	/* Llib/bit.scm 270 */
					unsigned BGL_LONGLONG_T BgL_xz00_866;

					long BgL_yz00_867;

					{	/* Llib/bit.scm 270 */
						obj_t BgL_auxz00_1212;

						if (LLONGP(BgL_xz00_746))
							{	/* Llib/bit.scm 270 */
								BgL_auxz00_1212 = BgL_xz00_746;
							}
						else
							{
								obj_t BgL_auxz00_1215;

								BgL_auxz00_1215 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12598)), BGl_string1483z00zz__bitz00,
									BGl_string1484z00zz__bitz00, BgL_xz00_746);
								FAILURE(BgL_auxz00_1215, BFALSE, BFALSE);
							}
						BgL_xz00_866 = BLLONG_TO_LLONG(BgL_auxz00_1212);
					}
					{	/* Llib/bit.scm 270 */
						obj_t BgL_auxz00_1220;

						if (INTEGERP(BgL_yz00_747))
							{	/* Llib/bit.scm 270 */
								BgL_auxz00_1220 = BgL_yz00_747;
							}
						else
							{
								obj_t BgL_auxz00_1223;

								BgL_auxz00_1223 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12598)), BGl_string1483z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_747);
								FAILURE(BgL_auxz00_1223, BFALSE, BFALSE);
							}
						BgL_yz00_867 = (long) CINT(BgL_auxz00_1220);
					}
					{	/* Llib/bit.scm 270 */
						int BgL_auxz00_1228;

						BgL_auxz00_1228 = (int) (BgL_yz00_867);
						BgL_auxz00_1211 = (BgL_xz00_866 >> BgL_auxz00_1228);
				}}
				return make_bllong(BgL_auxz00_1211);
			}
		}
	}



/* bit-lsh */
	BGL_EXPORTED_DEF long BGl_bitzd2lshzd2zz__bitz00(long BgL_xz00_34,
		long BgL_yz00_35)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 275 */
			return (BgL_xz00_34 << (int) (BgL_yz00_35));
		}
	}



/* _bit-lsh */
	obj_t BGl__bitzd2lshzd2zz__bitz00(obj_t BgL_envz00_748, obj_t BgL_xz00_749,
		obj_t BgL_yz00_750)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 275 */
			{	/* Llib/bit.scm 276 */
				long BgL_auxz00_1234;

				{	/* Llib/bit.scm 276 */
					long BgL_xz00_868;

					long BgL_yz00_869;

					{	/* Llib/bit.scm 276 */
						obj_t BgL_auxz00_1235;

						if (INTEGERP(BgL_xz00_749))
							{	/* Llib/bit.scm 276 */
								BgL_auxz00_1235 = BgL_xz00_749;
							}
						else
							{
								obj_t BgL_auxz00_1238;

								BgL_auxz00_1238 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12882)), BGl_string1485z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_xz00_749);
								FAILURE(BgL_auxz00_1238, BFALSE, BFALSE);
							}
						BgL_xz00_868 = (long) CINT(BgL_auxz00_1235);
					}
					{	/* Llib/bit.scm 276 */
						obj_t BgL_auxz00_1243;

						if (INTEGERP(BgL_yz00_750))
							{	/* Llib/bit.scm 276 */
								BgL_auxz00_1243 = BgL_yz00_750;
							}
						else
							{
								obj_t BgL_auxz00_1246;

								BgL_auxz00_1246 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 12882)), BGl_string1485z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_750);
								FAILURE(BgL_auxz00_1246, BFALSE, BFALSE);
							}
						BgL_yz00_869 = (long) CINT(BgL_auxz00_1243);
					}
					BgL_auxz00_1234 = (BgL_xz00_868 << (int) (BgL_yz00_869));
				}
				return BINT(BgL_auxz00_1234);
			}
		}
	}



/* bit-lshelong */
	BGL_EXPORTED_DEF long BGl_bitzd2lshelongzd2zz__bitz00(long BgL_xz00_36,
		long BgL_yz00_37)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 281 */
			return (BgL_xz00_36 << (int) (BgL_yz00_37));
		}
	}



/* _bit-lshelong */
	obj_t BGl__bitzd2lshelongzd2zz__bitz00(obj_t BgL_envz00_751,
		obj_t BgL_xz00_752, obj_t BgL_yz00_753)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 281 */
			{	/* Llib/bit.scm 282 */
				long BgL_auxz00_1256;

				{	/* Llib/bit.scm 282 */
					long BgL_xz00_870;

					long BgL_yz00_871;

					{	/* Llib/bit.scm 282 */
						obj_t BgL_auxz00_1257;

						if (ELONGP(BgL_xz00_752))
							{	/* Llib/bit.scm 282 */
								BgL_auxz00_1257 = BgL_xz00_752;
							}
						else
							{
								obj_t BgL_auxz00_1260;

								BgL_auxz00_1260 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 13158)), BGl_string1486z00zz__bitz00,
									BGl_string1464z00zz__bitz00, BgL_xz00_752);
								FAILURE(BgL_auxz00_1260, BFALSE, BFALSE);
							}
						BgL_xz00_870 = BELONG_TO_LONG(BgL_auxz00_1257);
					}
					{	/* Llib/bit.scm 282 */
						obj_t BgL_auxz00_1265;

						if (INTEGERP(BgL_yz00_753))
							{	/* Llib/bit.scm 282 */
								BgL_auxz00_1265 = BgL_yz00_753;
							}
						else
							{
								obj_t BgL_auxz00_1268;

								BgL_auxz00_1268 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 13158)), BGl_string1486z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_753);
								FAILURE(BgL_auxz00_1268, BFALSE, BFALSE);
							}
						BgL_yz00_871 = (long) CINT(BgL_auxz00_1265);
					}
					BgL_auxz00_1256 = (BgL_xz00_870 << (int) (BgL_yz00_871));
				}
				return make_belong(BgL_auxz00_1256);
			}
		}
	}



/* bit-lshllong */
	BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T
		BgL_xz00_38, long BgL_yz00_39)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 287 */
			return (BgL_xz00_38 << (int) (BgL_yz00_39));
		}
	}



/* _bit-lshllong */
	obj_t BGl__bitzd2lshllongzd2zz__bitz00(obj_t BgL_envz00_754,
		obj_t BgL_xz00_755, obj_t BgL_yz00_756)
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 287 */
			{	/* Llib/bit.scm 288 */
				BGL_LONGLONG_T BgL_auxz00_1278;

				{	/* Llib/bit.scm 288 */
					BGL_LONGLONG_T BgL_xz00_872;

					long BgL_yz00_873;

					{	/* Llib/bit.scm 288 */
						obj_t BgL_auxz00_1279;

						if (LLONGP(BgL_xz00_755))
							{	/* Llib/bit.scm 288 */
								BgL_auxz00_1279 = BgL_xz00_755;
							}
						else
							{
								obj_t BgL_auxz00_1282;

								BgL_auxz00_1282 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 13439)), BGl_string1487z00zz__bitz00,
									BGl_string1466z00zz__bitz00, BgL_xz00_755);
								FAILURE(BgL_auxz00_1282, BFALSE, BFALSE);
							}
						BgL_xz00_872 = BLLONG_TO_LLONG(BgL_auxz00_1279);
					}
					{	/* Llib/bit.scm 288 */
						obj_t BgL_auxz00_1287;

						if (INTEGERP(BgL_yz00_756))
							{	/* Llib/bit.scm 288 */
								BgL_auxz00_1287 = BgL_yz00_756;
							}
						else
							{
								obj_t BgL_auxz00_1290;

								BgL_auxz00_1290 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1460z00zz__bitz00,
									BINT(((long) 13439)), BGl_string1487z00zz__bitz00,
									BGl_string1462z00zz__bitz00, BgL_yz00_756);
								FAILURE(BgL_auxz00_1290, BFALSE, BFALSE);
							}
						BgL_yz00_873 = (long) CINT(BgL_auxz00_1287);
					}
					BgL_auxz00_1278 = (BgL_xz00_872 << (int) (BgL_yz00_873));
				}
				return make_bllong(BgL_auxz00_1278);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__bitz00()
	{
		AN_OBJECT;
		{	/* Llib/bit.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1488z00zz__bitz00));
		}
	}

#ifdef __cplusplus
}
#endif
