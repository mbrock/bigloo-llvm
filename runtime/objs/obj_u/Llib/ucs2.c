/*===========================================================================*/
/*   (Llib/ucs2.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Llib/ucs2.scm -indent -o objs/obj_u/Llib/ucs2.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool_t ucs2_digitp(ucs2_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__charzd2ze3ucs2z31zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__ucs2zd2ze3charz31zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2ze3zd3zf3zc3zz__ucs2z00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_upperp(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl_cnstzd2initzd2zz__ucs2z00();
	BGL_EXPORTED_DECL bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t, ucs2_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zd2downcasezd2zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__ucs2z00 = BUNSPEC;
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zd2upperzd2casezf3zf3zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00();
	extern bool_t ucs2_lowerp(ucs2_t);
	static obj_t BGl__ucs2zc3zd3zf3ze3zz__ucs2z00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_whitespacep(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zd2alphabeticzf3z21zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t, ucs2_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t, ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zc3zf3z30zz__ucs2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl__ucs2zf3zf3zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2zd3zf3z20zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1478z00zz__ucs2z00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl__integerzd2ze3ucs2z31zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2ze3zf3z10zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1488z00zz__ucs2z00 = BUNSPEC;
	static obj_t BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl__ucs2zd2upcasezd2zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2ze3integerz31zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2whitespacezf3z21zz__ucs2z00(obj_t, obj_t);
	static obj_t BGl__ucs2zd2cize3zd3zf3z11zz__ucs2z00(obj_t, obj_t, obj_t);
	static obj_t BGl__ucs2zd2cize3zf3zc2zz__ucs2z00(obj_t, obj_t, obj_t);
	extern bool_t ucs2_letterp(ucs2_t);
	extern ucs2_t ucs2_tolower(ucs2_t);
	BGL_EXPORTED_DECL ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int);
	extern ucs2_t ucs2_toupper(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t);
	static obj_t BGl__ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t);
	extern bool_t ucs2_definedp(int);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t, ucs2_t);
	static obj_t BGl__ucs2zd2numericzf3z21zz__ucs2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2whitespacezf3zd2envzf3zz__ucs2z00,
		BgL_bgl__ucs2za7d2whitespa1493za7, BGl__ucs2zd2whitespacezf3z21zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2ze3zd3zf3zd2envz11zz__ucs2z00,
		BgL_bgl__ucs2za7e3za7d3za7f3za7c1494z00, BGl__ucs2ze3zd3zf3zc3zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2downcasezd2envz00zz__ucs2z00,
		BgL_bgl__ucs2za7d2downcase1495za7, BGl__ucs2zd2downcasezd2zz__ucs2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zc3zd3zf3zd2envz31zz__ucs2z00,
		BgL_bgl__ucs2za7c3za7d3za7f3za7e1496z00, BGl__ucs2zc3zd3zf3ze3zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd3zf3zd2envzf2zz__ucs2z00,
		BgL_bgl__ucs2za7d3za7f3za720za7za71497za7, BGl__ucs2zd3zf3z20zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizd3zf3zd2envz20zz__ucs2z00,
		BgL_bgl__ucs2za7d2ciza7d3za7f31498za7, BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2lowerzd2casezf3zd2envz21zz__ucs2z00,
		BgL_bgl__ucs2za7d2lowerza7d21499z00,
		BGl__ucs2zd2lowerzd2casezf3zf3zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cize3zd3zf3zd2envzc3zz__ucs2z00,
		BgL_bgl__ucs2za7d2ciza7e3za7d31500za7,
		BGl__ucs2zd2cize3zd3zf3z11zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_integerzd2ze3ucs2zd2envze3zz__ucs2z00,
		BgL_bgl__integerza7d2za7e3uc1501z00, BGl__integerzd2ze3ucs2z31zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2ze3ucs2zd2envze3zz__ucs2z00,
		BgL_bgl__charza7d2za7e3ucs2za71502za7, BGl__charzd2ze3ucs2z31zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2ze3integerzd2envze3zz__ucs2z00,
		BgL_bgl__ucs2za7d2za7e3integ1503z00, BGl__ucs2zd2ze3integerz31zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1460z00zz__ucs2z00,
		BgL_bgl_string1460za700za7za7_1504za7, "_ucs2=?", 7);
	      DEFINE_STRING(BGl_string1459z00zz__ucs2z00,
		BgL_bgl_string1459za700za7za7_1505za7, "/tmp/bigloo/runtime/Llib/ucs2.scm",
		33);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2numericzf3zd2envzf3zz__ucs2z00,
		BgL_bgl__ucs2za7d2numericza71506z00, BGl__ucs2zd2numericzf3z21zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1461z00zz__ucs2z00,
		BgL_bgl_string1461za700za7za7_1507za7, "ucs2", 4);
	      DEFINE_STRING(BGl_string1462z00zz__ucs2z00,
		BgL_bgl_string1462za700za7za7_1508za7, "_ucs2<?", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizc3zd3zf3zd2envze3zz__ucs2z00,
		BgL_bgl__ucs2za7d2ciza7c3za7d31509za7,
		BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1463z00zz__ucs2z00,
		BgL_bgl_string1463za700za7za7_1510za7, "_ucs2>?", 7);
	      DEFINE_STRING(BGl_string1464z00zz__ucs2z00,
		BgL_bgl_string1464za700za7za7_1511za7, "_ucs2<=?", 8);
	      DEFINE_STRING(BGl_string1465z00zz__ucs2z00,
		BgL_bgl_string1465za700za7za7_1512za7, "_ucs2>=?", 8);
	      DEFINE_STRING(BGl_string1466z00zz__ucs2z00,
		BgL_bgl_string1466za700za7za7_1513za7, "_ucs2-ci=?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_integerzd2ze3ucs2zd2urzd2envz31zz__ucs2z00,
		BgL_bgl__integerza7d2za7e3uc1514z00,
		BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1467z00zz__ucs2z00,
		BgL_bgl_string1467za700za7za7_1515za7, "_ucs2-ci<?", 10);
	      DEFINE_STRING(BGl_string1468z00zz__ucs2z00,
		BgL_bgl_string1468za700za7za7_1516za7, "_ucs2-ci>?", 10);
	      DEFINE_STRING(BGl_string1470z00zz__ucs2z00,
		BgL_bgl_string1470za700za7za7_1517za7, "_ucs2-ci>=?", 11);
	      DEFINE_STRING(BGl_string1469z00zz__ucs2z00,
		BgL_bgl_string1469za700za7za7_1518za7, "_ucs2-ci<=?", 11);
	      DEFINE_STRING(BGl_string1471z00zz__ucs2z00,
		BgL_bgl_string1471za700za7za7_1519za7, "_ucs2-alphabetic?", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2ze3charzd2envze3zz__ucs2z00,
		BgL_bgl__ucs2za7d2za7e3charza71520za7, BGl__ucs2zd2ze3charz31zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1472z00zz__ucs2z00,
		BgL_bgl_string1472za700za7za7_1521za7, "_ucs2-numeric?", 14);
	      DEFINE_STRING(BGl_string1473z00zz__ucs2z00,
		BgL_bgl_string1473za700za7za7_1522za7, "_ucs2-whitespace?", 17);
	      DEFINE_STRING(BGl_string1474z00zz__ucs2z00,
		BgL_bgl_string1474za700za7za7_1523za7, "_ucs2-upper-case?", 17);
	      DEFINE_STRING(BGl_string1475z00zz__ucs2z00,
		BgL_bgl_string1475za700za7za7_1524za7, "_ucs2-lower-case?", 17);
	      DEFINE_STRING(BGl_string1476z00zz__ucs2z00,
		BgL_bgl_string1476za700za7za7_1525za7, "_ucs2-upcase", 12);
	      DEFINE_STRING(BGl_string1477z00zz__ucs2z00,
		BgL_bgl_string1477za700za7za7_1526za7, "_ucs2-downcase", 14);
	      DEFINE_STRING(BGl_string1480z00zz__ucs2z00,
		BgL_bgl_string1480za700za7za7_1527za7, "Undefined UCS-2 character", 25);
	      DEFINE_STRING(BGl_string1479z00zz__ucs2z00,
		BgL_bgl_string1479za700za7za7_1528za7, "integer->ucs2", 13);
	      DEFINE_STRING(BGl_string1481z00zz__ucs2z00,
		BgL_bgl_string1481za700za7za7_1529za7, "integer out of range or ", 24);
	      DEFINE_STRING(BGl_string1482z00zz__ucs2z00,
		BgL_bgl_string1482za700za7za7_1530za7, "_integer->ucs2", 14);
	      DEFINE_STRING(BGl_string1483z00zz__ucs2z00,
		BgL_bgl_string1483za700za7za7_1531za7, "int", 3);
	      DEFINE_STRING(BGl_string1484z00zz__ucs2z00,
		BgL_bgl_string1484za700za7za7_1532za7, "_integer->ucs2-ur", 17);
	      DEFINE_STRING(BGl_string1485z00zz__ucs2z00,
		BgL_bgl_string1485za700za7za7_1533za7, "_ucs2->integer", 14);
	      DEFINE_STRING(BGl_string1486z00zz__ucs2z00,
		BgL_bgl_string1486za700za7za7_1534za7, "_char->ucs2", 11);
	      DEFINE_STRING(BGl_string1487z00zz__ucs2z00,
		BgL_bgl_string1487za700za7za7_1535za7, "char", 4);
	      DEFINE_STRING(BGl_string1490z00zz__ucs2z00,
		BgL_bgl_string1490za700za7za7_1536za7,
		"UCS-2 character out of ISO-LATIN-1 range", 40);
	      DEFINE_STRING(BGl_string1489z00zz__ucs2z00,
		BgL_bgl_string1489za700za7za7_1537za7, "ucs2->char", 10);
	      DEFINE_STRING(BGl_string1491z00zz__ucs2z00,
		BgL_bgl_string1491za700za7za7_1538za7, "_ucs2->char", 11);
	      DEFINE_STRING(BGl_string1492z00zz__ucs2z00,
		BgL_bgl_string1492za700za7za7_1539za7, "__ucs2", 6);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zc3zf3zd2envze2zz__ucs2z00,
		BgL_bgl__ucs2za7c3za7f3za730za7za71540za7, BGl__ucs2zc3zf3z30zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cizc3zf3zd2envz30zz__ucs2z00,
		BgL_bgl__ucs2za7d2ciza7c3za7f31541za7, BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2upcasezd2envz00zz__ucs2z00,
		BgL_bgl__ucs2za7d2upcaseza7d1542z00, BGl__ucs2zd2upcasezd2zz__ucs2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2upperzd2casezf3zd2envz21zz__ucs2z00,
		BgL_bgl__ucs2za7d2upperza7d21543z00,
		BGl__ucs2zd2upperzd2casezf3zf3zz__ucs2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zf3zd2envz21zz__ucs2z00,
		BgL_bgl__ucs2za7f3za7f3za7za7__u1544z00, BGl__ucs2zf3zf3zz__ucs2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2alphabeticzf3zd2envzf3zz__ucs2z00,
		BgL_bgl__ucs2za7d2alphabet1545za7, BGl__ucs2zd2alphabeticzf3z21zz__ucs2z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2ze3zf3zd2envzc2zz__ucs2z00,
		BgL_bgl__ucs2za7e3za7f3za710za7za71546za7, BGl__ucs2ze3zf3z10zz__ucs2z00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ucs2zd2cize3zf3zd2envz10zz__ucs2z00,
		BgL_bgl__ucs2za7d2ciza7e3za7f31547za7, BGl__ucs2zd2cize3zf3zc2zz__ucs2z00,
		0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long
		BgL_checksumz00_901, char *BgL_fromz00_902)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__ucs2z00))
				{
					BGl_requirezd2initializa7ationz75zz__ucs2z00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__ucs2z00();
					BGl_importedzd2moduleszd2initz00zz__ucs2z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__ucs2z00()
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 14 */
			BGl_symbol1478z00zz__ucs2z00 =
				bstring_to_symbol(BGl_string1479z00zz__ucs2z00);
			return (BGl_symbol1488z00zz__ucs2z00 =
				bstring_to_symbol(BGl_string1489z00zz__ucs2z00), BUNSPEC);
		}
	}



/* ucs2? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 146 */
			return UCS2P(BgL_objz00_1);
		}
	}



/* _ucs2? */
	obj_t BGl__ucs2zf3zf3zz__ucs2z00(obj_t BgL_envz00_750, obj_t BgL_objz00_751)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 146 */
			return BBOOL(UCS2P(BgL_objz00_751));
		}
	}



/* ucs2=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t BgL_ucs2az00_2,
		ucs2_t BgL_ucs2bz00_3)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 152 */
			return (BgL_ucs2az00_2 == BgL_ucs2bz00_3);
		}
	}



/* _ucs2=? */
	obj_t BGl__ucs2zd3zf3z20zz__ucs2z00(obj_t BgL_envz00_752,
		obj_t BgL_ucs2az00_753, obj_t BgL_ucs2bz00_754)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 152 */
			{	/* Llib/ucs2.scm 153 */
				bool_t BgL_auxz00_914;

				{	/* Llib/ucs2.scm 153 */
					ucs2_t BgL_ucs2az00_871;

					ucs2_t BgL_ucs2bz00_872;

					{	/* Llib/ucs2.scm 153 */
						obj_t BgL_auxz00_915;

						if (UCS2P(BgL_ucs2az00_753))
							{	/* Llib/ucs2.scm 153 */
								BgL_auxz00_915 = BgL_ucs2az00_753;
							}
						else
							{
								obj_t BgL_auxz00_918;

								BgL_auxz00_918 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6353)), BGl_string1460z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_753);
								FAILURE(BgL_auxz00_918, BFALSE, BFALSE);
							}
						BgL_ucs2az00_871 = CUCS2(BgL_auxz00_915);
					}
					{	/* Llib/ucs2.scm 153 */
						obj_t BgL_auxz00_923;

						if (UCS2P(BgL_ucs2bz00_754))
							{	/* Llib/ucs2.scm 153 */
								BgL_auxz00_923 = BgL_ucs2bz00_754;
							}
						else
							{
								obj_t BgL_auxz00_926;

								BgL_auxz00_926 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6353)), BGl_string1460z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_754);
								FAILURE(BgL_auxz00_926, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_872 = CUCS2(BgL_auxz00_923);
					}
					BgL_auxz00_914 = (BgL_ucs2az00_871 == BgL_ucs2bz00_872);
				}
				return BBOOL(BgL_auxz00_914);
			}
		}
	}



/* ucs2<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t BgL_ucs2az00_4,
		ucs2_t BgL_ucs2bz00_5)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 158 */
			return (BgL_ucs2az00_4 < BgL_ucs2bz00_5);
		}
	}



/* _ucs2<? */
	obj_t BGl__ucs2zc3zf3z30zz__ucs2z00(obj_t BgL_envz00_755,
		obj_t BgL_ucs2az00_756, obj_t BgL_ucs2bz00_757)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 158 */
			{	/* Llib/ucs2.scm 159 */
				bool_t BgL_auxz00_934;

				{	/* Llib/ucs2.scm 159 */
					ucs2_t BgL_ucs2az00_873;

					ucs2_t BgL_ucs2bz00_874;

					{	/* Llib/ucs2.scm 159 */
						obj_t BgL_auxz00_935;

						if (UCS2P(BgL_ucs2az00_756))
							{	/* Llib/ucs2.scm 159 */
								BgL_auxz00_935 = BgL_ucs2az00_756;
							}
						else
							{
								obj_t BgL_auxz00_938;

								BgL_auxz00_938 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6639)), BGl_string1462z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_756);
								FAILURE(BgL_auxz00_938, BFALSE, BFALSE);
							}
						BgL_ucs2az00_873 = CUCS2(BgL_auxz00_935);
					}
					{	/* Llib/ucs2.scm 159 */
						obj_t BgL_auxz00_943;

						if (UCS2P(BgL_ucs2bz00_757))
							{	/* Llib/ucs2.scm 159 */
								BgL_auxz00_943 = BgL_ucs2bz00_757;
							}
						else
							{
								obj_t BgL_auxz00_946;

								BgL_auxz00_946 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6639)), BGl_string1462z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_757);
								FAILURE(BgL_auxz00_946, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_874 = CUCS2(BgL_auxz00_943);
					}
					BgL_auxz00_934 = (BgL_ucs2az00_873 < BgL_ucs2bz00_874);
				}
				return BBOOL(BgL_auxz00_934);
			}
		}
	}



/* ucs2>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t BgL_ucs2az00_6,
		ucs2_t BgL_ucs2bz00_7)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 164 */
			return (BgL_ucs2az00_6 > BgL_ucs2bz00_7);
		}
	}



/* _ucs2>? */
	obj_t BGl__ucs2ze3zf3z10zz__ucs2z00(obj_t BgL_envz00_758,
		obj_t BgL_ucs2az00_759, obj_t BgL_ucs2bz00_760)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 164 */
			{	/* Llib/ucs2.scm 165 */
				bool_t BgL_auxz00_954;

				{	/* Llib/ucs2.scm 165 */
					ucs2_t BgL_ucs2az00_875;

					ucs2_t BgL_ucs2bz00_876;

					{	/* Llib/ucs2.scm 165 */
						obj_t BgL_auxz00_955;

						if (UCS2P(BgL_ucs2az00_759))
							{	/* Llib/ucs2.scm 165 */
								BgL_auxz00_955 = BgL_ucs2az00_759;
							}
						else
							{
								obj_t BgL_auxz00_958;

								BgL_auxz00_958 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6926)), BGl_string1463z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_759);
								FAILURE(BgL_auxz00_958, BFALSE, BFALSE);
							}
						BgL_ucs2az00_875 = CUCS2(BgL_auxz00_955);
					}
					{	/* Llib/ucs2.scm 165 */
						obj_t BgL_auxz00_963;

						if (UCS2P(BgL_ucs2bz00_760))
							{	/* Llib/ucs2.scm 165 */
								BgL_auxz00_963 = BgL_ucs2bz00_760;
							}
						else
							{
								obj_t BgL_auxz00_966;

								BgL_auxz00_966 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 6926)), BGl_string1463z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_760);
								FAILURE(BgL_auxz00_966, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_876 = CUCS2(BgL_auxz00_963);
					}
					BgL_auxz00_954 = (BgL_ucs2az00_875 > BgL_ucs2bz00_876);
				}
				return BBOOL(BgL_auxz00_954);
			}
		}
	}



/* ucs2<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t BgL_ucs2az00_8,
		ucs2_t BgL_ucs2bz00_9)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 170 */
			return (BgL_ucs2az00_8 <= BgL_ucs2bz00_9);
		}
	}



/* _ucs2<=? */
	obj_t BGl__ucs2zc3zd3zf3ze3zz__ucs2z00(obj_t BgL_envz00_761,
		obj_t BgL_ucs2az00_762, obj_t BgL_ucs2bz00_763)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 170 */
			{	/* Llib/ucs2.scm 171 */
				bool_t BgL_auxz00_974;

				{	/* Llib/ucs2.scm 171 */
					ucs2_t BgL_ucs2az00_877;

					ucs2_t BgL_ucs2bz00_878;

					{	/* Llib/ucs2.scm 171 */
						obj_t BgL_auxz00_975;

						if (UCS2P(BgL_ucs2az00_762))
							{	/* Llib/ucs2.scm 171 */
								BgL_auxz00_975 = BgL_ucs2az00_762;
							}
						else
							{
								obj_t BgL_auxz00_978;

								BgL_auxz00_978 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7213)), BGl_string1464z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_762);
								FAILURE(BgL_auxz00_978, BFALSE, BFALSE);
							}
						BgL_ucs2az00_877 = CUCS2(BgL_auxz00_975);
					}
					{	/* Llib/ucs2.scm 171 */
						obj_t BgL_auxz00_983;

						if (UCS2P(BgL_ucs2bz00_763))
							{	/* Llib/ucs2.scm 171 */
								BgL_auxz00_983 = BgL_ucs2bz00_763;
							}
						else
							{
								obj_t BgL_auxz00_986;

								BgL_auxz00_986 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7213)), BGl_string1464z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_763);
								FAILURE(BgL_auxz00_986, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_878 = CUCS2(BgL_auxz00_983);
					}
					BgL_auxz00_974 = (BgL_ucs2az00_877 <= BgL_ucs2bz00_878);
				}
				return BBOOL(BgL_auxz00_974);
			}
		}
	}



/* ucs2>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t
		BgL_ucs2az00_10, ucs2_t BgL_ucs2bz00_11)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 176 */
			return (BgL_ucs2az00_10 > BgL_ucs2bz00_11);
		}
	}



/* _ucs2>=? */
	obj_t BGl__ucs2ze3zd3zf3zc3zz__ucs2z00(obj_t BgL_envz00_764,
		obj_t BgL_ucs2az00_765, obj_t BgL_ucs2bz00_766)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 176 */
			{	/* Llib/ucs2.scm 177 */
				bool_t BgL_auxz00_994;

				{	/* Llib/ucs2.scm 177 */
					ucs2_t BgL_ucs2az00_879;

					ucs2_t BgL_ucs2bz00_880;

					{	/* Llib/ucs2.scm 177 */
						obj_t BgL_auxz00_995;

						if (UCS2P(BgL_ucs2az00_765))
							{	/* Llib/ucs2.scm 177 */
								BgL_auxz00_995 = BgL_ucs2az00_765;
							}
						else
							{
								obj_t BgL_auxz00_998;

								BgL_auxz00_998 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7502)), BGl_string1465z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_765);
								FAILURE(BgL_auxz00_998, BFALSE, BFALSE);
							}
						BgL_ucs2az00_879 = CUCS2(BgL_auxz00_995);
					}
					{	/* Llib/ucs2.scm 177 */
						obj_t BgL_auxz00_1003;

						if (UCS2P(BgL_ucs2bz00_766))
							{	/* Llib/ucs2.scm 177 */
								BgL_auxz00_1003 = BgL_ucs2bz00_766;
							}
						else
							{
								obj_t BgL_auxz00_1006;

								BgL_auxz00_1006 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7502)), BGl_string1465z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_766);
								FAILURE(BgL_auxz00_1006, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_880 = CUCS2(BgL_auxz00_1003);
					}
					BgL_auxz00_994 = (BgL_ucs2az00_879 > BgL_ucs2bz00_880);
				}
				return BBOOL(BgL_auxz00_994);
			}
		}
	}



/* ucs2-ci=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_12, ucs2_t BgL_ucs2bz00_13)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 182 */
			return (ucs2_toupper(BgL_ucs2az00_12) == ucs2_toupper(BgL_ucs2bz00_13));
		}
	}



/* _ucs2-ci=? */
	obj_t BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00(obj_t BgL_envz00_767,
		obj_t BgL_ucs2az00_768, obj_t BgL_ucs2bz00_769)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 182 */
			{	/* Llib/ucs2.scm 183 */
				bool_t BgL_auxz00_1016;

				{	/* Llib/ucs2.scm 183 */
					ucs2_t BgL_ucs2az00_881;

					ucs2_t BgL_ucs2bz00_882;

					{	/* Llib/ucs2.scm 183 */
						obj_t BgL_auxz00_1017;

						if (UCS2P(BgL_ucs2az00_768))
							{	/* Llib/ucs2.scm 183 */
								BgL_auxz00_1017 = BgL_ucs2az00_768;
							}
						else
							{
								obj_t BgL_auxz00_1020;

								BgL_auxz00_1020 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7799)), BGl_string1466z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_768);
								FAILURE(BgL_auxz00_1020, BFALSE, BFALSE);
							}
						BgL_ucs2az00_881 = CUCS2(BgL_auxz00_1017);
					}
					{	/* Llib/ucs2.scm 183 */
						obj_t BgL_auxz00_1025;

						if (UCS2P(BgL_ucs2bz00_769))
							{	/* Llib/ucs2.scm 183 */
								BgL_auxz00_1025 = BgL_ucs2bz00_769;
							}
						else
							{
								obj_t BgL_auxz00_1028;

								BgL_auxz00_1028 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 7799)), BGl_string1466z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_769);
								FAILURE(BgL_auxz00_1028, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_882 = CUCS2(BgL_auxz00_1025);
					}
					BgL_auxz00_1016 =
						(ucs2_toupper(BgL_ucs2az00_881) == ucs2_toupper(BgL_ucs2bz00_882));
				}
				return BBOOL(BgL_auxz00_1016);
			}
		}
	}



/* ucs2-ci<? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_14, ucs2_t BgL_ucs2bz00_15)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 188 */
			return (ucs2_toupper(BgL_ucs2az00_14) < ucs2_toupper(BgL_ucs2bz00_15));
		}
	}



/* _ucs2-ci<? */
	obj_t BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00(obj_t BgL_envz00_770,
		obj_t BgL_ucs2az00_771, obj_t BgL_ucs2bz00_772)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 188 */
			{	/* Llib/ucs2.scm 189 */
				bool_t BgL_auxz00_1040;

				{	/* Llib/ucs2.scm 189 */
					ucs2_t BgL_ucs2az00_883;

					ucs2_t BgL_ucs2bz00_884;

					{	/* Llib/ucs2.scm 189 */
						obj_t BgL_auxz00_1041;

						if (UCS2P(BgL_ucs2az00_771))
							{	/* Llib/ucs2.scm 189 */
								BgL_auxz00_1041 = BgL_ucs2az00_771;
							}
						else
							{
								obj_t BgL_auxz00_1044;

								BgL_auxz00_1044 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8114)), BGl_string1467z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_771);
								FAILURE(BgL_auxz00_1044, BFALSE, BFALSE);
							}
						BgL_ucs2az00_883 = CUCS2(BgL_auxz00_1041);
					}
					{	/* Llib/ucs2.scm 189 */
						obj_t BgL_auxz00_1049;

						if (UCS2P(BgL_ucs2bz00_772))
							{	/* Llib/ucs2.scm 189 */
								BgL_auxz00_1049 = BgL_ucs2bz00_772;
							}
						else
							{
								obj_t BgL_auxz00_1052;

								BgL_auxz00_1052 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8114)), BGl_string1467z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_772);
								FAILURE(BgL_auxz00_1052, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_884 = CUCS2(BgL_auxz00_1049);
					}
					BgL_auxz00_1040 =
						(ucs2_toupper(BgL_ucs2az00_883) < ucs2_toupper(BgL_ucs2bz00_884));
				}
				return BBOOL(BgL_auxz00_1040);
			}
		}
	}



/* ucs2-ci>? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t
		BgL_ucs2az00_16, ucs2_t BgL_ucs2bz00_17)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 194 */
			return (ucs2_toupper(BgL_ucs2az00_16) > ucs2_toupper(BgL_ucs2bz00_17));
		}
	}



/* _ucs2-ci>? */
	obj_t BGl__ucs2zd2cize3zf3zc2zz__ucs2z00(obj_t BgL_envz00_773,
		obj_t BgL_ucs2az00_774, obj_t BgL_ucs2bz00_775)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 194 */
			{	/* Llib/ucs2.scm 195 */
				bool_t BgL_auxz00_1064;

				{	/* Llib/ucs2.scm 195 */
					ucs2_t BgL_ucs2az00_885;

					ucs2_t BgL_ucs2bz00_886;

					{	/* Llib/ucs2.scm 195 */
						obj_t BgL_auxz00_1065;

						if (UCS2P(BgL_ucs2az00_774))
							{	/* Llib/ucs2.scm 195 */
								BgL_auxz00_1065 = BgL_ucs2az00_774;
							}
						else
							{
								obj_t BgL_auxz00_1068;

								BgL_auxz00_1068 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8431)), BGl_string1468z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_774);
								FAILURE(BgL_auxz00_1068, BFALSE, BFALSE);
							}
						BgL_ucs2az00_885 = CUCS2(BgL_auxz00_1065);
					}
					{	/* Llib/ucs2.scm 195 */
						obj_t BgL_auxz00_1073;

						if (UCS2P(BgL_ucs2bz00_775))
							{	/* Llib/ucs2.scm 195 */
								BgL_auxz00_1073 = BgL_ucs2bz00_775;
							}
						else
							{
								obj_t BgL_auxz00_1076;

								BgL_auxz00_1076 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8431)), BGl_string1468z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_775);
								FAILURE(BgL_auxz00_1076, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_886 = CUCS2(BgL_auxz00_1073);
					}
					BgL_auxz00_1064 =
						(ucs2_toupper(BgL_ucs2az00_885) > ucs2_toupper(BgL_ucs2bz00_886));
				}
				return BBOOL(BgL_auxz00_1064);
			}
		}
	}



/* ucs2-ci<=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t
		BgL_ucs2az00_18, ucs2_t BgL_ucs2bz00_19)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 200 */
			return (ucs2_toupper(BgL_ucs2az00_18) <= ucs2_toupper(BgL_ucs2bz00_19));
		}
	}



/* _ucs2-ci<=? */
	obj_t BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00(obj_t BgL_envz00_776,
		obj_t BgL_ucs2az00_777, obj_t BgL_ucs2bz00_778)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 200 */
			{	/* Llib/ucs2.scm 201 */
				bool_t BgL_auxz00_1088;

				{	/* Llib/ucs2.scm 201 */
					ucs2_t BgL_ucs2az00_887;

					ucs2_t BgL_ucs2bz00_888;

					{	/* Llib/ucs2.scm 201 */
						obj_t BgL_auxz00_1089;

						if (UCS2P(BgL_ucs2az00_777))
							{	/* Llib/ucs2.scm 201 */
								BgL_auxz00_1089 = BgL_ucs2az00_777;
							}
						else
							{
								obj_t BgL_auxz00_1092;

								BgL_auxz00_1092 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8748)), BGl_string1469z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_777);
								FAILURE(BgL_auxz00_1092, BFALSE, BFALSE);
							}
						BgL_ucs2az00_887 = CUCS2(BgL_auxz00_1089);
					}
					{	/* Llib/ucs2.scm 201 */
						obj_t BgL_auxz00_1097;

						if (UCS2P(BgL_ucs2bz00_778))
							{	/* Llib/ucs2.scm 201 */
								BgL_auxz00_1097 = BgL_ucs2bz00_778;
							}
						else
							{
								obj_t BgL_auxz00_1100;

								BgL_auxz00_1100 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 8748)), BGl_string1469z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_778);
								FAILURE(BgL_auxz00_1100, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_888 = CUCS2(BgL_auxz00_1097);
					}
					BgL_auxz00_1088 =
						(ucs2_toupper(BgL_ucs2az00_887) <= ucs2_toupper(BgL_ucs2bz00_888));
				}
				return BBOOL(BgL_auxz00_1088);
			}
		}
	}



/* ucs2-ci>=? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t
		BgL_ucs2az00_20, ucs2_t BgL_ucs2bz00_21)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 206 */
			return (ucs2_toupper(BgL_ucs2az00_20) > ucs2_toupper(BgL_ucs2bz00_21));
		}
	}



/* _ucs2-ci>=? */
	obj_t BGl__ucs2zd2cize3zd3zf3z11zz__ucs2z00(obj_t BgL_envz00_779,
		obj_t BgL_ucs2az00_780, obj_t BgL_ucs2bz00_781)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 206 */
			{	/* Llib/ucs2.scm 207 */
				bool_t BgL_auxz00_1112;

				{	/* Llib/ucs2.scm 207 */
					ucs2_t BgL_ucs2az00_889;

					ucs2_t BgL_ucs2bz00_890;

					{	/* Llib/ucs2.scm 207 */
						obj_t BgL_auxz00_1113;

						if (UCS2P(BgL_ucs2az00_780))
							{	/* Llib/ucs2.scm 207 */
								BgL_auxz00_1113 = BgL_ucs2az00_780;
							}
						else
							{
								obj_t BgL_auxz00_1116;

								BgL_auxz00_1116 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 9065)), BGl_string1470z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2az00_780);
								FAILURE(BgL_auxz00_1116, BFALSE, BFALSE);
							}
						BgL_ucs2az00_889 = CUCS2(BgL_auxz00_1113);
					}
					{	/* Llib/ucs2.scm 207 */
						obj_t BgL_auxz00_1121;

						if (UCS2P(BgL_ucs2bz00_781))
							{	/* Llib/ucs2.scm 207 */
								BgL_auxz00_1121 = BgL_ucs2bz00_781;
							}
						else
							{
								obj_t BgL_auxz00_1124;

								BgL_auxz00_1124 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 9065)), BGl_string1470z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2bz00_781);
								FAILURE(BgL_auxz00_1124, BFALSE, BFALSE);
							}
						BgL_ucs2bz00_890 = CUCS2(BgL_auxz00_1121);
					}
					BgL_auxz00_1112 =
						(ucs2_toupper(BgL_ucs2az00_889) > ucs2_toupper(BgL_ucs2bz00_890));
				}
				return BBOOL(BgL_auxz00_1112);
			}
		}
	}



/* ucs2-alphabetic? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_22)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 212 */
			return ucs2_letterp(BgL_ucs2z00_22);
		}
	}



/* _ucs2-alphabetic? */
	obj_t BGl__ucs2zd2alphabeticzf3z21zz__ucs2z00(obj_t BgL_envz00_782,
		obj_t BgL_ucs2z00_783)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 212 */
			{	/* Llib/ucs2.scm 213 */
				bool_t BgL_auxz00_1134;

				{	/* Llib/ucs2.scm 213 */
					ucs2_t BgL_ucs2z00_891;

					{	/* Llib/ucs2.scm 213 */
						obj_t BgL_auxz00_1135;

						if (UCS2P(BgL_ucs2z00_783))
							{	/* Llib/ucs2.scm 213 */
								BgL_auxz00_1135 = BgL_ucs2z00_783;
							}
						else
							{
								obj_t BgL_auxz00_1138;

								BgL_auxz00_1138 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 9372)), BGl_string1471z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_783);
								FAILURE(BgL_auxz00_1138, BFALSE, BFALSE);
							}
						BgL_ucs2z00_891 = CUCS2(BgL_auxz00_1135);
					}
					BgL_auxz00_1134 = ucs2_letterp(BgL_ucs2z00_891);
				}
				return BBOOL(BgL_auxz00_1134);
			}
		}
	}



/* ucs2-numeric? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_23)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 218 */
			return ucs2_digitp(BgL_ucs2z00_23);
		}
	}



/* _ucs2-numeric? */
	obj_t BGl__ucs2zd2numericzf3z21zz__ucs2z00(obj_t BgL_envz00_784,
		obj_t BgL_ucs2z00_785)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 218 */
			{	/* Llib/ucs2.scm 219 */
				bool_t BgL_auxz00_1146;

				{	/* Llib/ucs2.scm 219 */
					ucs2_t BgL_ucs2z00_892;

					{	/* Llib/ucs2.scm 219 */
						obj_t BgL_auxz00_1147;

						if (UCS2P(BgL_ucs2z00_785))
							{	/* Llib/ucs2.scm 219 */
								BgL_auxz00_1147 = BgL_ucs2z00_785;
							}
						else
							{
								obj_t BgL_auxz00_1150;

								BgL_auxz00_1150 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 9657)), BGl_string1472z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_785);
								FAILURE(BgL_auxz00_1150, BFALSE, BFALSE);
							}
						BgL_ucs2z00_892 = CUCS2(BgL_auxz00_1147);
					}
					BgL_auxz00_1146 = ucs2_digitp(BgL_ucs2z00_892);
				}
				return BBOOL(BgL_auxz00_1146);
			}
		}
	}



/* ucs2-whitespace? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t
		BgL_ucs2z00_24)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 224 */
			return ucs2_whitespacep(BgL_ucs2z00_24);
		}
	}



/* _ucs2-whitespace? */
	obj_t BGl__ucs2zd2whitespacezf3z21zz__ucs2z00(obj_t BgL_envz00_786,
		obj_t BgL_ucs2z00_787)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 224 */
			{	/* Llib/ucs2.scm 225 */
				bool_t BgL_auxz00_1158;

				{	/* Llib/ucs2.scm 225 */
					ucs2_t BgL_ucs2z00_893;

					{	/* Llib/ucs2.scm 225 */
						obj_t BgL_auxz00_1159;

						if (UCS2P(BgL_ucs2z00_787))
							{	/* Llib/ucs2.scm 225 */
								BgL_auxz00_1159 = BgL_ucs2z00_787;
							}
						else
							{
								obj_t BgL_auxz00_1162;

								BgL_auxz00_1162 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 9944)), BGl_string1473z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_787);
								FAILURE(BgL_auxz00_1162, BFALSE, BFALSE);
							}
						BgL_ucs2z00_893 = CUCS2(BgL_auxz00_1159);
					}
					BgL_auxz00_1158 = ucs2_whitespacep(BgL_ucs2z00_893);
				}
				return BBOOL(BgL_auxz00_1158);
			}
		}
	}



/* ucs2-upper-case? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t
		BgL_ucs2z00_25)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 230 */
			return ucs2_upperp(BgL_ucs2z00_25);
		}
	}



/* _ucs2-upper-case? */
	obj_t BGl__ucs2zd2upperzd2casezf3zf3zz__ucs2z00(obj_t BgL_envz00_788,
		obj_t BgL_ucs2z00_789)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 230 */
			{	/* Llib/ucs2.scm 231 */
				bool_t BgL_auxz00_1170;

				{	/* Llib/ucs2.scm 231 */
					ucs2_t BgL_ucs2z00_894;

					{	/* Llib/ucs2.scm 231 */
						obj_t BgL_auxz00_1171;

						if (UCS2P(BgL_ucs2z00_789))
							{	/* Llib/ucs2.scm 231 */
								BgL_auxz00_1171 = BgL_ucs2z00_789;
							}
						else
							{
								obj_t BgL_auxz00_1174;

								BgL_auxz00_1174 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 10236)), BGl_string1474z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_789);
								FAILURE(BgL_auxz00_1174, BFALSE, BFALSE);
							}
						BgL_ucs2z00_894 = CUCS2(BgL_auxz00_1171);
					}
					BgL_auxz00_1170 = ucs2_upperp(BgL_ucs2z00_894);
				}
				return BBOOL(BgL_auxz00_1170);
			}
		}
	}



/* ucs2-lower-case? */
	BGL_EXPORTED_DEF bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t
		BgL_ucs2z00_26)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 236 */
			return ucs2_lowerp(BgL_ucs2z00_26);
		}
	}



/* _ucs2-lower-case? */
	obj_t BGl__ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(obj_t BgL_envz00_790,
		obj_t BgL_ucs2z00_791)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 236 */
			{	/* Llib/ucs2.scm 237 */
				bool_t BgL_auxz00_1182;

				{	/* Llib/ucs2.scm 237 */
					ucs2_t BgL_ucs2z00_895;

					{	/* Llib/ucs2.scm 237 */
						obj_t BgL_auxz00_1183;

						if (UCS2P(BgL_ucs2z00_791))
							{	/* Llib/ucs2.scm 237 */
								BgL_auxz00_1183 = BgL_ucs2z00_791;
							}
						else
							{
								obj_t BgL_auxz00_1186;

								BgL_auxz00_1186 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 10523)), BGl_string1475z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_791);
								FAILURE(BgL_auxz00_1186, BFALSE, BFALSE);
							}
						BgL_ucs2z00_895 = CUCS2(BgL_auxz00_1183);
					}
					BgL_auxz00_1182 = ucs2_lowerp(BgL_ucs2z00_895);
				}
				return BBOOL(BgL_auxz00_1182);
			}
		}
	}



/* ucs2-upcase */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_27)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 242 */
			return ucs2_toupper(BgL_ucs2z00_27);
		}
	}



/* _ucs2-upcase */
	obj_t BGl__ucs2zd2upcasezd2zz__ucs2z00(obj_t BgL_envz00_792,
		obj_t BgL_ucs2z00_793)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 242 */
			{	/* Llib/ucs2.scm 243 */
				ucs2_t BgL_auxz00_1194;

				{	/* Llib/ucs2.scm 243 */
					ucs2_t BgL_ucs2z00_896;

					{	/* Llib/ucs2.scm 243 */
						obj_t BgL_auxz00_1195;

						if (UCS2P(BgL_ucs2z00_793))
							{	/* Llib/ucs2.scm 243 */
								BgL_auxz00_1195 = BgL_ucs2z00_793;
							}
						else
							{
								obj_t BgL_auxz00_1198;

								BgL_auxz00_1198 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 10805)), BGl_string1476z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_793);
								FAILURE(BgL_auxz00_1198, BFALSE, BFALSE);
							}
						BgL_ucs2z00_896 = CUCS2(BgL_auxz00_1195);
					}
					BgL_auxz00_1194 = ucs2_toupper(BgL_ucs2z00_896);
				}
				return BUCS2(BgL_auxz00_1194);
			}
		}
	}



/* ucs2-downcase */
	BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t
		BgL_ucs2z00_28)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 248 */
			return ucs2_tolower(BgL_ucs2z00_28);
		}
	}



/* _ucs2-downcase */
	obj_t BGl__ucs2zd2downcasezd2zz__ucs2z00(obj_t BgL_envz00_794,
		obj_t BgL_ucs2z00_795)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 248 */
			{	/* Llib/ucs2.scm 249 */
				ucs2_t BgL_auxz00_1206;

				{	/* Llib/ucs2.scm 249 */
					ucs2_t BgL_ucs2z00_897;

					{	/* Llib/ucs2.scm 249 */
						obj_t BgL_auxz00_1207;

						if (UCS2P(BgL_ucs2z00_795))
							{	/* Llib/ucs2.scm 249 */
								BgL_auxz00_1207 = BgL_ucs2z00_795;
							}
						else
							{
								obj_t BgL_auxz00_1210;

								BgL_auxz00_1210 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 11089)), BGl_string1477z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_795);
								FAILURE(BgL_auxz00_1210, BFALSE, BFALSE);
							}
						BgL_ucs2z00_897 = CUCS2(BgL_auxz00_1207);
					}
					BgL_auxz00_1206 = ucs2_tolower(BgL_ucs2z00_897);
				}
				return BUCS2(BgL_auxz00_1206);
			}
		}
	}



/* integer->ucs2 */
	BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int BgL_intz00_29)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 254 */
			{	/* Llib/ucs2.scm 255 */
				bool_t BgL_testz00_1217;

				if (((long) (BgL_intz00_29) >= ((long) 0)))
					{	/* Llib/ucs2.scm 255 */
						BgL_testz00_1217 = ((long) (BgL_intz00_29) < ((long) 65536));
					}
				else
					{	/* Llib/ucs2.scm 255 */
						BgL_testz00_1217 = ((bool_t) 0);
					}
				if (BgL_testz00_1217)
					{	/* Llib/ucs2.scm 255 */
						if (ucs2_definedp(BgL_intz00_29))
							{	/* Llib/ucs2.scm 256 */
								return INT_TO_UCS2(BgL_intz00_29);
							}
						else
							{	/* Llib/ucs2.scm 256 */
								return
									CUCS2(BGl_errorz00zz__errorz00(BGl_symbol1478z00zz__ucs2z00,
										BGl_string1480z00zz__ucs2z00, BINT(BgL_intz00_29)));
							}
					}
				else
					{	/* Llib/ucs2.scm 255 */
						return
							CUCS2(BGl_errorz00zz__errorz00(BGl_symbol1478z00zz__ucs2z00,
								BGl_string1481z00zz__ucs2z00, BINT(BgL_intz00_29)));
					}
			}
		}
	}



/* _integer->ucs2 */
	obj_t BGl__integerzd2ze3ucs2z31zz__ucs2z00(obj_t BgL_envz00_796,
		obj_t BgL_intz00_797)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 254 */
			{	/* Llib/ucs2.scm 255 */
				ucs2_t BgL_auxz00_1232;

				{	/* Llib/ucs2.scm 255 */
					int BgL_auxz00_1233;

					{	/* Llib/ucs2.scm 255 */
						obj_t BgL_auxz00_1234;

						if (INTEGERP(BgL_intz00_797))
							{	/* Llib/ucs2.scm 255 */
								BgL_auxz00_1234 = BgL_intz00_797;
							}
						else
							{
								obj_t BgL_auxz00_1237;

								BgL_auxz00_1237 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 11385)), BGl_string1482z00zz__ucs2z00,
									BGl_string1483z00zz__ucs2z00, BgL_intz00_797);
								FAILURE(BgL_auxz00_1237, BFALSE, BFALSE);
							}
						BgL_auxz00_1233 = CINT(BgL_auxz00_1234);
					}
					BgL_auxz00_1232 =
						BGl_integerzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1233);
				}
				return BUCS2(BgL_auxz00_1232);
			}
		}
	}



/* integer->ucs2-ur */
	BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int
		BgL_intz00_30)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 264 */
			return INT_TO_UCS2(BgL_intz00_30);
		}
	}



/* _integer->ucs2-ur */
	obj_t BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00(obj_t BgL_envz00_798,
		obj_t BgL_intz00_799)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 264 */
			{	/* Llib/ucs2.scm 265 */
				ucs2_t BgL_auxz00_1245;

				{	/* Llib/ucs2.scm 265 */
					int BgL_intz00_898;

					{	/* Llib/ucs2.scm 265 */
						obj_t BgL_auxz00_1246;

						if (INTEGERP(BgL_intz00_799))
							{	/* Llib/ucs2.scm 265 */
								BgL_auxz00_1246 = BgL_intz00_799;
							}
						else
							{
								obj_t BgL_auxz00_1249;

								BgL_auxz00_1249 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 11881)), BGl_string1484z00zz__ucs2z00,
									BGl_string1483z00zz__ucs2z00, BgL_intz00_799);
								FAILURE(BgL_auxz00_1249, BFALSE, BFALSE);
							}
						BgL_intz00_898 = CINT(BgL_auxz00_1246);
					}
					BgL_auxz00_1245 = INT_TO_UCS2(BgL_intz00_898);
				}
				return BUCS2(BgL_auxz00_1245);
			}
		}
	}



/* ucs2->integer */
	BGL_EXPORTED_DEF int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t
		BgL_ucs2z00_31)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 270 */
			{	/* Llib/ucs2.scm 271 */
				obj_t BgL_auxz00_1256;

				BgL_auxz00_1256 = BUCS2(BgL_ucs2z00_31);
				return CUCS2(BgL_auxz00_1256);
			}
		}
	}



/* _ucs2->integer */
	obj_t BGl__ucs2zd2ze3integerz31zz__ucs2z00(obj_t BgL_envz00_800,
		obj_t BgL_ucs2z00_801)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 270 */
			{	/* Llib/ucs2.scm 271 */
				int BgL_auxz00_1259;

				{	/* Llib/ucs2.scm 271 */
					ucs2_t BgL_ucs2z00_899;

					{	/* Llib/ucs2.scm 271 */
						obj_t BgL_auxz00_1260;

						if (UCS2P(BgL_ucs2z00_801))
							{	/* Llib/ucs2.scm 271 */
								BgL_auxz00_1260 = BgL_ucs2z00_801;
							}
						else
							{
								obj_t BgL_auxz00_1263;

								BgL_auxz00_1263 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 12177)), BGl_string1485z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_801);
								FAILURE(BgL_auxz00_1263, BFALSE, BFALSE);
							}
						BgL_ucs2z00_899 = CUCS2(BgL_auxz00_1260);
					}
					{	/* Llib/ucs2.scm 271 */
						obj_t BgL_auxz00_1268;

						BgL_auxz00_1268 = BUCS2(BgL_ucs2z00_899);
						BgL_auxz00_1259 = CUCS2(BgL_auxz00_1268);
				}}
				return BINT(BgL_auxz00_1259);
			}
		}
	}



/* char->ucs2 */
	BGL_EXPORTED_DEF ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char
		BgL_charz00_32)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 276 */
			{	/* Llib/ucs2.scm 277 */
				int BgL_auxz00_1272;

				BgL_auxz00_1272 = (int) (((unsigned char) (BgL_charz00_32)));
				return INT_TO_UCS2(BgL_auxz00_1272);
			}
		}
	}



/* _char->ucs2 */
	obj_t BGl__charzd2ze3ucs2z31zz__ucs2z00(obj_t BgL_envz00_802,
		obj_t BgL_charz00_803)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 276 */
			{	/* Llib/ucs2.scm 277 */
				ucs2_t BgL_auxz00_1277;

				{	/* Llib/ucs2.scm 277 */
					unsigned char BgL_charz00_900;

					{	/* Llib/ucs2.scm 277 */
						obj_t BgL_auxz00_1278;

						if (CHARP(BgL_charz00_803))
							{	/* Llib/ucs2.scm 277 */
								BgL_auxz00_1278 = BgL_charz00_803;
							}
						else
							{
								obj_t BgL_auxz00_1281;

								BgL_auxz00_1281 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 12490)), BGl_string1486z00zz__ucs2z00,
									BGl_string1487z00zz__ucs2z00, BgL_charz00_803);
								FAILURE(BgL_auxz00_1281, BFALSE, BFALSE);
							}
						BgL_charz00_900 = CCHAR(BgL_auxz00_1278);
					}
					{	/* Llib/ucs2.scm 277 */
						int BgL_auxz00_1286;

						BgL_auxz00_1286 = (int) (((unsigned char) (BgL_charz00_900)));
						BgL_auxz00_1277 = INT_TO_UCS2(BgL_auxz00_1286);
				}}
				return BUCS2(BgL_auxz00_1277);
			}
		}
	}



/* ucs2->char */
	BGL_EXPORTED_DEF unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t
		BgL_ucs2z00_33)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 282 */
			{	/* Llib/ucs2.scm 283 */
				int BgL_intz00_663;

				{	/* Llib/ucs2.scm 283 */
					obj_t BgL_auxz00_1292;

					BgL_auxz00_1292 = BUCS2(BgL_ucs2z00_33);
					BgL_intz00_663 = CUCS2(BgL_auxz00_1292);
				}
				if (((long) (BgL_intz00_663) < ((long) 256)))
					{	/* Llib/ucs2.scm 283 */
						return (char) (((long) (BgL_intz00_663)));
					}
				else
					{	/* Llib/ucs2.scm 283 */
						return
							CCHAR(BGl_errorz00zz__errorz00(BGl_symbol1488z00zz__ucs2z00,
								BGl_string1490z00zz__ucs2z00, BUCS2(BgL_ucs2z00_33)));
					}
			}
		}
	}



/* _ucs2->char */
	obj_t BGl__ucs2zd2ze3charz31zz__ucs2z00(obj_t BgL_envz00_804,
		obj_t BgL_ucs2z00_805)
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 282 */
			{	/* Llib/ucs2.scm 283 */
				unsigned char BgL_auxz00_1304;

				{	/* Llib/ucs2.scm 283 */
					ucs2_t BgL_auxz00_1305;

					{	/* Llib/ucs2.scm 283 */
						obj_t BgL_auxz00_1306;

						if (UCS2P(BgL_ucs2z00_805))
							{	/* Llib/ucs2.scm 283 */
								BgL_auxz00_1306 = BgL_ucs2z00_805;
							}
						else
							{
								obj_t BgL_auxz00_1309;

								BgL_auxz00_1309 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1459z00zz__ucs2z00,
									BINT(((long) 12777)), BGl_string1491z00zz__ucs2z00,
									BGl_string1461z00zz__ucs2z00, BgL_ucs2z00_805);
								FAILURE(BgL_auxz00_1309, BFALSE, BFALSE);
							}
						BgL_auxz00_1305 = CUCS2(BgL_auxz00_1306);
					}
					BgL_auxz00_1304 = BGl_ucs2zd2ze3charz31zz__ucs2z00(BgL_auxz00_1305);
				}
				return BCHAR(BgL_auxz00_1304);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00()
	{
		AN_OBJECT;
		{	/* Llib/ucs2.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1492z00zz__ucs2z00));
		}
	}

#ifdef __cplusplus
}
#endif
