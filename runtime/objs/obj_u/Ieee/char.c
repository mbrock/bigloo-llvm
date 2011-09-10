/*===========================================================================*/
/*   (Ieee/char.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Ieee/char.scm -indent -o objs/obj_u/Ieee/char.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__charzd2downcasezd2zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long);
	static obj_t BGl__charzf3zf3zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t);
	static obj_t BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 =
		BUNSPEC;
	static obj_t BGl__charzd2ze3integerz31zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
	BGL_EXPORTED_DECL bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	BGL_EXPORTED_DECL bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__integerzd2ze3charz31zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__charzd2upcasezd2zz__r4_characters_6_6z00(obj_t, obj_t);
	static obj_t BGl__charzd2andzd2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t BGl__charzd2numericzf3z21zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	BGL_EXPORTED_DECL unsigned char
		BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char,
		unsigned char);
	static obj_t BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__charzc3zf3z30zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	static obj_t BGl__charzd2notzd2zz__r4_characters_6_6z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned
		char, unsigned char);
	static obj_t BGl__charzd3zf3z20zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	static obj_t BGl__charze3zf3z10zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	static obj_t BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(obj_t,
		obj_t);
	static obj_t BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char);
	static obj_t BGl__charzd2orzd2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2ciza7d3za7f31484za7,
		BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2orzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2orza7d2za7za7_1485z00,
		BGl__charzd2orzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00,
		BgL_bgl__charza7c3za7d3za7f3za7e1486z00,
		BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00,
		BgL_bgl__charza7d3za7f3za720za7za71487za7,
		BGl__charzd3zf3z20zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2upperzd2casezf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2upperza7d21488z00,
		BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2upcasezd2envz00zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2upcaseza7d1489z00,
		BGl__charzd2upcasezd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2alphabeticzf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2alphabet1490za7,
		BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizc3zf3zd2envz30zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2ciza7c3za7f31491za7,
		BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3charzd2urzd2envz31zz__r4_characters_6_6z00,
		BgL_bgl__integerza7d2za7e3ch1492z00,
		BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2downcasezd2envz00zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2downcase1493za7,
		BGl__charzd2downcasezd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1455z00zz__r4_characters_6_6z00,
		BgL_bgl_string1455za700za7za7_1494za7, "/tmp/bigloo/runtime/Ieee/char.scm",
		33);
	      DEFINE_STRING(BGl_string1456z00zz__r4_characters_6_6z00,
		BgL_bgl_string1456za700za7za7_1495za7, "_char=?", 7);
	      DEFINE_STRING(BGl_string1457z00zz__r4_characters_6_6z00,
		BgL_bgl_string1457za700za7za7_1496za7, "uchar", 5);
	      DEFINE_STRING(BGl_string1458z00zz__r4_characters_6_6z00,
		BgL_bgl_string1458za700za7za7_1497za7, "_char<?", 7);
	      DEFINE_STRING(BGl_string1460z00zz__r4_characters_6_6z00,
		BgL_bgl_string1460za700za7za7_1498za7, "_char<=?", 8);
	      DEFINE_STRING(BGl_string1459z00zz__r4_characters_6_6z00,
		BgL_bgl_string1459za700za7za7_1499za7, "_char>?", 7);
	      DEFINE_STRING(BGl_string1461z00zz__r4_characters_6_6z00,
		BgL_bgl_string1461za700za7za7_1500za7, "_char>=?", 8);
	      DEFINE_STRING(BGl_string1462z00zz__r4_characters_6_6z00,
		BgL_bgl_string1462za700za7za7_1501za7, "_char-ci=?", 10);
	      DEFINE_STRING(BGl_string1463z00zz__r4_characters_6_6z00,
		BgL_bgl_string1463za700za7za7_1502za7, "_char-ci<?", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2whitespacezf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2whitespa1503za7,
		BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1464z00zz__r4_characters_6_6z00,
		BgL_bgl_string1464za700za7za7_1504za7, "_char-ci>?", 10);
	      DEFINE_STRING(BGl_string1465z00zz__r4_characters_6_6z00,
		BgL_bgl_string1465za700za7za7_1505za7, "_char-ci<=?", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzc3zf3zd2envze2zz__r4_characters_6_6z00,
		BgL_bgl__charza7c3za7f3za730za7za71506za7,
		BGl__charzc3zf3z30zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1466z00zz__r4_characters_6_6z00,
		BgL_bgl_string1466za700za7za7_1507za7, "_char-ci>=?", 11);
	      DEFINE_STRING(BGl_string1467z00zz__r4_characters_6_6z00,
		BgL_bgl_string1467za700za7za7_1508za7, "_char-alphabetic?", 17);
	      DEFINE_STRING(BGl_string1468z00zz__r4_characters_6_6z00,
		BgL_bgl_string1468za700za7za7_1509za7, "_char-numeric?", 14);
	      DEFINE_STRING(BGl_string1470z00zz__r4_characters_6_6z00,
		BgL_bgl_string1470za700za7za7_1510za7, "_char-upper-case?", 17);
	      DEFINE_STRING(BGl_string1469z00zz__r4_characters_6_6z00,
		BgL_bgl_string1469za700za7za7_1511za7, "_char-whitespace?", 17);
	      DEFINE_STRING(BGl_string1471z00zz__r4_characters_6_6z00,
		BgL_bgl_string1471za700za7za7_1512za7, "_char-lower-case?", 17);
	      DEFINE_STRING(BGl_string1472z00zz__r4_characters_6_6z00,
		BgL_bgl_string1472za700za7za7_1513za7, "_char->integer", 14);
	      DEFINE_STRING(BGl_string1473z00zz__r4_characters_6_6z00,
		BgL_bgl_string1473za700za7za7_1514za7, "integer->char", 13);
	      DEFINE_STRING(BGl_string1474z00zz__r4_characters_6_6z00,
		BgL_bgl_string1474za700za7za7_1515za7, "integer out of range", 20);
	      DEFINE_STRING(BGl_string1475z00zz__r4_characters_6_6z00,
		BgL_bgl_string1475za700za7za7_1516za7, "_integer->char", 14);
	      DEFINE_STRING(BGl_string1476z00zz__r4_characters_6_6z00,
		BgL_bgl_string1476za700za7za7_1517za7, "long", 4);
	      DEFINE_STRING(BGl_string1477z00zz__r4_characters_6_6z00,
		BgL_bgl_string1477za700za7za7_1518za7, "_integer->char-ur", 17);
	      DEFINE_STRING(BGl_string1478z00zz__r4_characters_6_6z00,
		BgL_bgl_string1478za700za7za7_1519za7, "_char-upcase", 12);
	      DEFINE_STRING(BGl_string1480z00zz__r4_characters_6_6z00,
		BgL_bgl_string1480za700za7za7_1520za7, "_char-or", 8);
	      DEFINE_STRING(BGl_string1479z00zz__r4_characters_6_6z00,
		BgL_bgl_string1479za700za7za7_1521za7, "_char-downcase", 14);
	      DEFINE_STRING(BGl_string1481z00zz__r4_characters_6_6z00,
		BgL_bgl_string1481za700za7za7_1522za7, "_char-and", 9);
	      DEFINE_STRING(BGl_string1482z00zz__r4_characters_6_6z00,
		BgL_bgl_string1482za700za7za7_1523za7, "_char-not", 9);
	      DEFINE_STRING(BGl_string1483z00zz__r4_characters_6_6z00,
		BgL_bgl_string1483za700za7za7_1524za7, "__r4_characters_6_6", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2notzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2notza7d2za7za71525z00,
		BGl__charzd2notzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cize3zf3zd2envz10zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2ciza7e3za7f31526za7,
		BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzd2andzd2envz00zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2andza7d2za7za71527z00,
		BGl__charzd2andzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2lowerzd2casezf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2lowerza7d21528z00,
		BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2za7e3integ1529z00,
		BGl__charzd2ze3integerz31zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charze3zf3zd2envzc2zz__r4_characters_6_6z00,
		BgL_bgl__charza7e3za7f3za710za7za71530za7,
		BGl__charze3zf3z10zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2numericzf3zd2envzf3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2numericza71531z00,
		BGl__charzd2numericzf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cize3zd3zf3zd2envzc3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2ciza7e3za7d31532za7,
		BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_charzf3zd2envz21zz__r4_characters_6_6z00,
		BgL_bgl__charza7f3za7f3za7za7__r1533z00,
		BGl__charzf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00,
		BgL_bgl__integerza7d2za7e3ch1534z00,
		BGl__integerzd2ze3charz31zz__r4_characters_6_6z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charze3zd3zf3zd2envz11zz__r4_characters_6_6z00,
		BgL_bgl__charza7e3za7d3za7f3za7c1535z00,
		BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00,
		BgL_bgl__charza7d2ciza7c3za7d31536za7,
		BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long
		BgL_checksumz00_852, char *BgL_fromz00_853)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 =
						BBOOL(((bool_t) 0));
					BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* char? */
	BGL_EXPORTED_DEF bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t
		BgL_objz00_1)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 131 */
			return CHARP(BgL_objz00_1);
		}
	}



/* _char? */
	obj_t BGl__charzf3zf3zz__r4_characters_6_6z00(obj_t BgL_envz00_687,
		obj_t BgL_objz00_688)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 131 */
			return BBOOL(CHARP(BgL_objz00_688));
		}
	}



/* char=? */
	BGL_EXPORTED_DEF bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_2, unsigned char BgL_char2z00_3)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 137 */
			return (BgL_char1z00_2 == BgL_char2z00_3);
		}
	}



/* _char=? */
	obj_t BGl__charzd3zf3z20zz__r4_characters_6_6z00(obj_t BgL_envz00_689,
		obj_t BgL_char1z00_690, obj_t BgL_char2z00_691)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 137 */
			{	/* Ieee/char.scm 138 */
				bool_t BgL_auxz00_862;

				{	/* Ieee/char.scm 138 */
					unsigned char BgL_char1z00_818;

					unsigned char BgL_char2z00_819;

					{	/* Ieee/char.scm 138 */
						obj_t BgL_auxz00_863;

						if (CHARP(BgL_char1z00_690))
							{	/* Ieee/char.scm 138 */
								BgL_auxz00_863 = BgL_char1z00_690;
							}
						else
							{
								obj_t BgL_auxz00_866;

								BgL_auxz00_866 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 6524)),
									BGl_string1456z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_690);
								FAILURE(BgL_auxz00_866, BFALSE, BFALSE);
							}
						BgL_char1z00_818 = CCHAR(BgL_auxz00_863);
					}
					{	/* Ieee/char.scm 138 */
						obj_t BgL_auxz00_871;

						if (CHARP(BgL_char2z00_691))
							{	/* Ieee/char.scm 138 */
								BgL_auxz00_871 = BgL_char2z00_691;
							}
						else
							{
								obj_t BgL_auxz00_874;

								BgL_auxz00_874 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 6524)),
									BGl_string1456z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_691);
								FAILURE(BgL_auxz00_874, BFALSE, BFALSE);
							}
						BgL_char2z00_819 = CCHAR(BgL_auxz00_871);
					}
					BgL_auxz00_862 = (BgL_char1z00_818 == BgL_char2z00_819);
				}
				return BBOOL(BgL_auxz00_862);
			}
		}
	}



/* char<? */
	BGL_EXPORTED_DEF bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_4, unsigned char BgL_char2z00_5)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 143 */
			return (BgL_char1z00_4 < BgL_char2z00_5);
		}
	}



/* _char<? */
	obj_t BGl__charzc3zf3z30zz__r4_characters_6_6z00(obj_t BgL_envz00_692,
		obj_t BgL_char1z00_693, obj_t BgL_char2z00_694)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 143 */
			{	/* Ieee/char.scm 144 */
				bool_t BgL_auxz00_882;

				{	/* Ieee/char.scm 144 */
					unsigned char BgL_char1z00_820;

					unsigned char BgL_char2z00_821;

					{	/* Ieee/char.scm 144 */
						obj_t BgL_auxz00_883;

						if (CHARP(BgL_char1z00_693))
							{	/* Ieee/char.scm 144 */
								BgL_auxz00_883 = BgL_char1z00_693;
							}
						else
							{
								obj_t BgL_auxz00_886;

								BgL_auxz00_886 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 6810)),
									BGl_string1458z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_693);
								FAILURE(BgL_auxz00_886, BFALSE, BFALSE);
							}
						BgL_char1z00_820 = CCHAR(BgL_auxz00_883);
					}
					{	/* Ieee/char.scm 144 */
						obj_t BgL_auxz00_891;

						if (CHARP(BgL_char2z00_694))
							{	/* Ieee/char.scm 144 */
								BgL_auxz00_891 = BgL_char2z00_694;
							}
						else
							{
								obj_t BgL_auxz00_894;

								BgL_auxz00_894 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 6810)),
									BGl_string1458z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_694);
								FAILURE(BgL_auxz00_894, BFALSE, BFALSE);
							}
						BgL_char2z00_821 = CCHAR(BgL_auxz00_891);
					}
					BgL_auxz00_882 = (BgL_char1z00_820 < BgL_char2z00_821);
				}
				return BBOOL(BgL_auxz00_882);
			}
		}
	}



/* char>? */
	BGL_EXPORTED_DEF bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_6, unsigned char BgL_char2z00_7)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 149 */
			return (BgL_char1z00_6 > BgL_char2z00_7);
		}
	}



/* _char>? */
	obj_t BGl__charze3zf3z10zz__r4_characters_6_6z00(obj_t BgL_envz00_695,
		obj_t BgL_char1z00_696, obj_t BgL_char2z00_697)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 149 */
			{	/* Ieee/char.scm 150 */
				bool_t BgL_auxz00_902;

				{	/* Ieee/char.scm 150 */
					unsigned char BgL_char1z00_822;

					unsigned char BgL_char2z00_823;

					{	/* Ieee/char.scm 150 */
						obj_t BgL_auxz00_903;

						if (CHARP(BgL_char1z00_696))
							{	/* Ieee/char.scm 150 */
								BgL_auxz00_903 = BgL_char1z00_696;
							}
						else
							{
								obj_t BgL_auxz00_906;

								BgL_auxz00_906 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7097)),
									BGl_string1459z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_696);
								FAILURE(BgL_auxz00_906, BFALSE, BFALSE);
							}
						BgL_char1z00_822 = CCHAR(BgL_auxz00_903);
					}
					{	/* Ieee/char.scm 150 */
						obj_t BgL_auxz00_911;

						if (CHARP(BgL_char2z00_697))
							{	/* Ieee/char.scm 150 */
								BgL_auxz00_911 = BgL_char2z00_697;
							}
						else
							{
								obj_t BgL_auxz00_914;

								BgL_auxz00_914 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7097)),
									BGl_string1459z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_697);
								FAILURE(BgL_auxz00_914, BFALSE, BFALSE);
							}
						BgL_char2z00_823 = CCHAR(BgL_auxz00_911);
					}
					BgL_auxz00_902 = (BgL_char1z00_822 > BgL_char2z00_823);
				}
				return BBOOL(BgL_auxz00_902);
			}
		}
	}



/* char<=? */
	BGL_EXPORTED_DEF bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_8, unsigned char BgL_char2z00_9)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 155 */
			return (BgL_char1z00_8 <= BgL_char2z00_9);
		}
	}



/* _char<=? */
	obj_t BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00(obj_t BgL_envz00_698,
		obj_t BgL_char1z00_699, obj_t BgL_char2z00_700)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 155 */
			{	/* Ieee/char.scm 156 */
				bool_t BgL_auxz00_922;

				{	/* Ieee/char.scm 156 */
					unsigned char BgL_char1z00_824;

					unsigned char BgL_char2z00_825;

					{	/* Ieee/char.scm 156 */
						obj_t BgL_auxz00_923;

						if (CHARP(BgL_char1z00_699))
							{	/* Ieee/char.scm 156 */
								BgL_auxz00_923 = BgL_char1z00_699;
							}
						else
							{
								obj_t BgL_auxz00_926;

								BgL_auxz00_926 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7384)),
									BGl_string1460z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_699);
								FAILURE(BgL_auxz00_926, BFALSE, BFALSE);
							}
						BgL_char1z00_824 = CCHAR(BgL_auxz00_923);
					}
					{	/* Ieee/char.scm 156 */
						obj_t BgL_auxz00_931;

						if (CHARP(BgL_char2z00_700))
							{	/* Ieee/char.scm 156 */
								BgL_auxz00_931 = BgL_char2z00_700;
							}
						else
							{
								obj_t BgL_auxz00_934;

								BgL_auxz00_934 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7384)),
									BGl_string1460z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_700);
								FAILURE(BgL_auxz00_934, BFALSE, BFALSE);
							}
						BgL_char2z00_825 = CCHAR(BgL_auxz00_931);
					}
					BgL_auxz00_922 = (BgL_char1z00_824 <= BgL_char2z00_825);
				}
				return BBOOL(BgL_auxz00_922);
			}
		}
	}



/* char>=? */
	BGL_EXPORTED_DEF bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned
		char BgL_char1z00_10, unsigned char BgL_char2z00_11)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 161 */
			return (BgL_char1z00_10 >= BgL_char2z00_11);
		}
	}



/* _char>=? */
	obj_t BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00(obj_t BgL_envz00_701,
		obj_t BgL_char1z00_702, obj_t BgL_char2z00_703)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 161 */
			{	/* Ieee/char.scm 162 */
				bool_t BgL_auxz00_942;

				{	/* Ieee/char.scm 162 */
					unsigned char BgL_char1z00_826;

					unsigned char BgL_char2z00_827;

					{	/* Ieee/char.scm 162 */
						obj_t BgL_auxz00_943;

						if (CHARP(BgL_char1z00_702))
							{	/* Ieee/char.scm 162 */
								BgL_auxz00_943 = BgL_char1z00_702;
							}
						else
							{
								obj_t BgL_auxz00_946;

								BgL_auxz00_946 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7672)),
									BGl_string1461z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_702);
								FAILURE(BgL_auxz00_946, BFALSE, BFALSE);
							}
						BgL_char1z00_826 = CCHAR(BgL_auxz00_943);
					}
					{	/* Ieee/char.scm 162 */
						obj_t BgL_auxz00_951;

						if (CHARP(BgL_char2z00_703))
							{	/* Ieee/char.scm 162 */
								BgL_auxz00_951 = BgL_char2z00_703;
							}
						else
							{
								obj_t BgL_auxz00_954;

								BgL_auxz00_954 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7672)),
									BGl_string1461z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_703);
								FAILURE(BgL_auxz00_954, BFALSE, BFALSE);
							}
						BgL_char2z00_827 = CCHAR(BgL_auxz00_951);
					}
					BgL_auxz00_942 = (BgL_char1z00_826 >= BgL_char2z00_827);
				}
				return BBOOL(BgL_auxz00_942);
			}
		}
	}



/* char-ci=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_12, unsigned char BgL_char2z00_13)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 167 */
			return (toupper(BgL_char1z00_12) == toupper(BgL_char2z00_13));
		}
	}



/* _char-ci=? */
	obj_t BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00(obj_t BgL_envz00_704,
		obj_t BgL_char1z00_705, obj_t BgL_char2z00_706)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 167 */
			{	/* Ieee/char.scm 168 */
				bool_t BgL_auxz00_964;

				{	/* Ieee/char.scm 168 */
					unsigned char BgL_char1z00_828;

					unsigned char BgL_char2z00_829;

					{	/* Ieee/char.scm 168 */
						obj_t BgL_auxz00_965;

						if (CHARP(BgL_char1z00_705))
							{	/* Ieee/char.scm 168 */
								BgL_auxz00_965 = BgL_char1z00_705;
							}
						else
							{
								obj_t BgL_auxz00_968;

								BgL_auxz00_968 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7970)),
									BGl_string1462z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_705);
								FAILURE(BgL_auxz00_968, BFALSE, BFALSE);
							}
						BgL_char1z00_828 = CCHAR(BgL_auxz00_965);
					}
					{	/* Ieee/char.scm 168 */
						obj_t BgL_auxz00_973;

						if (CHARP(BgL_char2z00_706))
							{	/* Ieee/char.scm 168 */
								BgL_auxz00_973 = BgL_char2z00_706;
							}
						else
							{
								obj_t BgL_auxz00_976;

								BgL_auxz00_976 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 7970)),
									BGl_string1462z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_706);
								FAILURE(BgL_auxz00_976, BFALSE, BFALSE);
							}
						BgL_char2z00_829 = CCHAR(BgL_auxz00_973);
					}
					BgL_auxz00_964 =
						(toupper(BgL_char1z00_828) == toupper(BgL_char2z00_829));
				}
				return BBOOL(BgL_auxz00_964);
			}
		}
	}



/* char-ci<? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_14, unsigned char BgL_char2z00_15)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 173 */
			return (toupper(BgL_char1z00_14) < toupper(BgL_char2z00_15));
		}
	}



/* _char-ci<? */
	obj_t BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00(obj_t BgL_envz00_707,
		obj_t BgL_char1z00_708, obj_t BgL_char2z00_709)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 173 */
			{	/* Ieee/char.scm 174 */
				bool_t BgL_auxz00_988;

				{	/* Ieee/char.scm 174 */
					unsigned char BgL_char1z00_830;

					unsigned char BgL_char2z00_831;

					{	/* Ieee/char.scm 174 */
						obj_t BgL_auxz00_989;

						if (CHARP(BgL_char1z00_708))
							{	/* Ieee/char.scm 174 */
								BgL_auxz00_989 = BgL_char1z00_708;
							}
						else
							{
								obj_t BgL_auxz00_992;

								BgL_auxz00_992 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8287)),
									BGl_string1463z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_708);
								FAILURE(BgL_auxz00_992, BFALSE, BFALSE);
							}
						BgL_char1z00_830 = CCHAR(BgL_auxz00_989);
					}
					{	/* Ieee/char.scm 174 */
						obj_t BgL_auxz00_997;

						if (CHARP(BgL_char2z00_709))
							{	/* Ieee/char.scm 174 */
								BgL_auxz00_997 = BgL_char2z00_709;
							}
						else
							{
								obj_t BgL_auxz00_1000;

								BgL_auxz00_1000 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8287)),
									BGl_string1463z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_709);
								FAILURE(BgL_auxz00_1000, BFALSE, BFALSE);
							}
						BgL_char2z00_831 = CCHAR(BgL_auxz00_997);
					}
					BgL_auxz00_988 =
						(toupper(BgL_char1z00_830) < toupper(BgL_char2z00_831));
				}
				return BBOOL(BgL_auxz00_988);
			}
		}
	}



/* char-ci>? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_16, unsigned char BgL_char2z00_17)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 179 */
			return (toupper(BgL_char1z00_16) > toupper(BgL_char2z00_17));
		}
	}



/* _char-ci>? */
	obj_t BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00(obj_t BgL_envz00_710,
		obj_t BgL_char1z00_711, obj_t BgL_char2z00_712)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 179 */
			{	/* Ieee/char.scm 180 */
				bool_t BgL_auxz00_1012;

				{	/* Ieee/char.scm 180 */
					unsigned char BgL_char1z00_832;

					unsigned char BgL_char2z00_833;

					{	/* Ieee/char.scm 180 */
						obj_t BgL_auxz00_1013;

						if (CHARP(BgL_char1z00_711))
							{	/* Ieee/char.scm 180 */
								BgL_auxz00_1013 = BgL_char1z00_711;
							}
						else
							{
								obj_t BgL_auxz00_1016;

								BgL_auxz00_1016 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8606)),
									BGl_string1464z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_711);
								FAILURE(BgL_auxz00_1016, BFALSE, BFALSE);
							}
						BgL_char1z00_832 = CCHAR(BgL_auxz00_1013);
					}
					{	/* Ieee/char.scm 180 */
						obj_t BgL_auxz00_1021;

						if (CHARP(BgL_char2z00_712))
							{	/* Ieee/char.scm 180 */
								BgL_auxz00_1021 = BgL_char2z00_712;
							}
						else
							{
								obj_t BgL_auxz00_1024;

								BgL_auxz00_1024 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8606)),
									BGl_string1464z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_712);
								FAILURE(BgL_auxz00_1024, BFALSE, BFALSE);
							}
						BgL_char2z00_833 = CCHAR(BgL_auxz00_1021);
					}
					BgL_auxz00_1012 =
						(toupper(BgL_char1z00_832) > toupper(BgL_char2z00_833));
				}
				return BBOOL(BgL_auxz00_1012);
			}
		}
	}



/* char-ci<=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_18, unsigned char BgL_char2z00_19)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 185 */
			return (toupper(BgL_char1z00_18) <= toupper(BgL_char2z00_19));
		}
	}



/* _char-ci<=? */
	obj_t BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(obj_t BgL_envz00_713,
		obj_t BgL_char1z00_714, obj_t BgL_char2z00_715)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 185 */
			{	/* Ieee/char.scm 186 */
				bool_t BgL_auxz00_1036;

				{	/* Ieee/char.scm 186 */
					unsigned char BgL_char1z00_834;

					unsigned char BgL_char2z00_835;

					{	/* Ieee/char.scm 186 */
						obj_t BgL_auxz00_1037;

						if (CHARP(BgL_char1z00_714))
							{	/* Ieee/char.scm 186 */
								BgL_auxz00_1037 = BgL_char1z00_714;
							}
						else
							{
								obj_t BgL_auxz00_1040;

								BgL_auxz00_1040 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8925)),
									BGl_string1465z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_714);
								FAILURE(BgL_auxz00_1040, BFALSE, BFALSE);
							}
						BgL_char1z00_834 = CCHAR(BgL_auxz00_1037);
					}
					{	/* Ieee/char.scm 186 */
						obj_t BgL_auxz00_1045;

						if (CHARP(BgL_char2z00_715))
							{	/* Ieee/char.scm 186 */
								BgL_auxz00_1045 = BgL_char2z00_715;
							}
						else
							{
								obj_t BgL_auxz00_1048;

								BgL_auxz00_1048 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 8925)),
									BGl_string1465z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_715);
								FAILURE(BgL_auxz00_1048, BFALSE, BFALSE);
							}
						BgL_char2z00_835 = CCHAR(BgL_auxz00_1045);
					}
					BgL_auxz00_1036 =
						(toupper(BgL_char1z00_834) <= toupper(BgL_char2z00_835));
				}
				return BBOOL(BgL_auxz00_1036);
			}
		}
	}



/* char-ci>=? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char
		BgL_char1z00_20, unsigned char BgL_char2z00_21)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 191 */
			return (toupper(BgL_char1z00_20) >= toupper(BgL_char2z00_21));
		}
	}



/* _char-ci>=? */
	obj_t BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(obj_t BgL_envz00_716,
		obj_t BgL_char1z00_717, obj_t BgL_char2z00_718)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 191 */
			{	/* Ieee/char.scm 192 */
				bool_t BgL_auxz00_1060;

				{	/* Ieee/char.scm 192 */
					unsigned char BgL_char1z00_836;

					unsigned char BgL_char2z00_837;

					{	/* Ieee/char.scm 192 */
						obj_t BgL_auxz00_1061;

						if (CHARP(BgL_char1z00_717))
							{	/* Ieee/char.scm 192 */
								BgL_auxz00_1061 = BgL_char1z00_717;
							}
						else
							{
								obj_t BgL_auxz00_1064;

								BgL_auxz00_1064 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 9244)),
									BGl_string1466z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_717);
								FAILURE(BgL_auxz00_1064, BFALSE, BFALSE);
							}
						BgL_char1z00_836 = CCHAR(BgL_auxz00_1061);
					}
					{	/* Ieee/char.scm 192 */
						obj_t BgL_auxz00_1069;

						if (CHARP(BgL_char2z00_718))
							{	/* Ieee/char.scm 192 */
								BgL_auxz00_1069 = BgL_char2z00_718;
							}
						else
							{
								obj_t BgL_auxz00_1072;

								BgL_auxz00_1072 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 9244)),
									BGl_string1466z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_718);
								FAILURE(BgL_auxz00_1072, BFALSE, BFALSE);
							}
						BgL_char2z00_837 = CCHAR(BgL_auxz00_1069);
					}
					BgL_auxz00_1060 =
						(toupper(BgL_char1z00_836) >= toupper(BgL_char2z00_837));
				}
				return BBOOL(BgL_auxz00_1060);
			}
		}
	}



/* char-alphabetic? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_22)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 197 */
			return isalpha(BgL_charz00_22);
		}
	}



/* _char-alphabetic? */
	obj_t BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00(obj_t
		BgL_envz00_719, obj_t BgL_charz00_720)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 197 */
			{	/* Ieee/char.scm 199 */
				bool_t BgL_auxz00_1082;

				{	/* Ieee/char.scm 199 */
					unsigned char BgL_charz00_838;

					{	/* Ieee/char.scm 199 */
						obj_t BgL_auxz00_1083;

						if (CHARP(BgL_charz00_720))
							{	/* Ieee/char.scm 199 */
								BgL_auxz00_1083 = BgL_charz00_720;
							}
						else
							{
								obj_t BgL_auxz00_1086;

								BgL_auxz00_1086 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 9580)),
									BGl_string1467z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_720);
								FAILURE(BgL_auxz00_1086, BFALSE, BFALSE);
							}
						BgL_charz00_838 = CCHAR(BgL_auxz00_1083);
					}
					BgL_auxz00_1082 = isalpha(BgL_charz00_838);
				}
				return BBOOL(BgL_auxz00_1082);
			}
		}
	}



/* char-numeric? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_23)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 208 */
			return isdigit(BgL_charz00_23);
		}
	}



/* _char-numeric? */
	obj_t BGl__charzd2numericzf3z21zz__r4_characters_6_6z00(obj_t BgL_envz00_721,
		obj_t BgL_charz00_722)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 208 */
			{	/* Ieee/char.scm 210 */
				bool_t BgL_auxz00_1094;

				{	/* Ieee/char.scm 210 */
					unsigned char BgL_charz00_839;

					{	/* Ieee/char.scm 210 */
						obj_t BgL_auxz00_1095;

						if (CHARP(BgL_charz00_722))
							{	/* Ieee/char.scm 210 */
								BgL_auxz00_1095 = BgL_charz00_722;
							}
						else
							{
								obj_t BgL_auxz00_1098;

								BgL_auxz00_1098 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 10022)),
									BGl_string1468z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_722);
								FAILURE(BgL_auxz00_1098, BFALSE, BFALSE);
							}
						BgL_charz00_839 = CCHAR(BgL_auxz00_1095);
					}
					BgL_auxz00_1094 = isdigit(BgL_charz00_839);
				}
				return BBOOL(BgL_auxz00_1094);
			}
		}
	}



/* char-whitespace? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_24)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 218 */
			return isspace(BgL_charz00_24);
		}
	}



/* _char-whitespace? */
	obj_t BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00(obj_t
		BgL_envz00_723, obj_t BgL_charz00_724)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 218 */
			{	/* Ieee/char.scm 220 */
				bool_t BgL_auxz00_1106;

				{	/* Ieee/char.scm 220 */
					unsigned char BgL_charz00_840;

					{	/* Ieee/char.scm 220 */
						obj_t BgL_auxz00_1107;

						if (CHARP(BgL_charz00_724))
							{	/* Ieee/char.scm 220 */
								BgL_auxz00_1107 = BgL_charz00_724;
							}
						else
							{
								obj_t BgL_auxz00_1110;

								BgL_auxz00_1110 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 10405)),
									BGl_string1469z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_724);
								FAILURE(BgL_auxz00_1110, BFALSE, BFALSE);
							}
						BgL_charz00_840 = CCHAR(BgL_auxz00_1107);
					}
					BgL_auxz00_1106 = isspace(BgL_charz00_840);
				}
				return BBOOL(BgL_auxz00_1106);
			}
		}
	}



/* char-upper-case? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_25)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 229 */
			return isupper(BgL_charz00_25);
		}
	}



/* _char-upper-case? */
	obj_t BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(obj_t
		BgL_envz00_725, obj_t BgL_charz00_726)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 229 */
			{	/* Ieee/char.scm 231 */
				bool_t BgL_auxz00_1118;

				{	/* Ieee/char.scm 231 */
					unsigned char BgL_charz00_841;

					{	/* Ieee/char.scm 231 */
						obj_t BgL_auxz00_1119;

						if (CHARP(BgL_charz00_726))
							{	/* Ieee/char.scm 231 */
								BgL_auxz00_1119 = BgL_charz00_726;
							}
						else
							{
								obj_t BgL_auxz00_1122;

								BgL_auxz00_1122 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 10841)),
									BGl_string1470z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_726);
								FAILURE(BgL_auxz00_1122, BFALSE, BFALSE);
							}
						BgL_charz00_841 = CCHAR(BgL_auxz00_1119);
					}
					BgL_auxz00_1118 = isupper(BgL_charz00_841);
				}
				return BBOOL(BgL_auxz00_1118);
			}
		}
	}



/* char-lower-case? */
	BGL_EXPORTED_DEF bool_t
		BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_26)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 239 */
			return islower(BgL_charz00_26);
		}
	}



/* _char-lower-case? */
	obj_t BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(obj_t
		BgL_envz00_727, obj_t BgL_charz00_728)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 239 */
			{	/* Ieee/char.scm 241 */
				bool_t BgL_auxz00_1130;

				{	/* Ieee/char.scm 241 */
					unsigned char BgL_charz00_842;

					{	/* Ieee/char.scm 241 */
						obj_t BgL_auxz00_1131;

						if (CHARP(BgL_charz00_728))
							{	/* Ieee/char.scm 241 */
								BgL_auxz00_1131 = BgL_charz00_728;
							}
						else
							{
								obj_t BgL_auxz00_1134;

								BgL_auxz00_1134 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 11227)),
									BGl_string1471z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_728);
								FAILURE(BgL_auxz00_1134, BFALSE, BFALSE);
							}
						BgL_charz00_842 = CCHAR(BgL_auxz00_1131);
					}
					BgL_auxz00_1130 = islower(BgL_charz00_842);
				}
				return BBOOL(BgL_auxz00_1130);
			}
		}
	}



/* char->integer */
	BGL_EXPORTED_DEF long
		BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char
		BgL_charz00_27)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 249 */
			return (BgL_charz00_27);
		}
	}



/* _char->integer */
	obj_t BGl__charzd2ze3integerz31zz__r4_characters_6_6z00(obj_t BgL_envz00_729,
		obj_t BgL_charz00_730)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 249 */
			{	/* Ieee/char.scm 250 */
				long BgL_auxz00_1142;

				{	/* Ieee/char.scm 250 */
					unsigned char BgL_charz00_843;

					{	/* Ieee/char.scm 250 */
						obj_t BgL_auxz00_1143;

						if (CHARP(BgL_charz00_730))
							{	/* Ieee/char.scm 250 */
								BgL_auxz00_1143 = BgL_charz00_730;
							}
						else
							{
								obj_t BgL_auxz00_1146;

								BgL_auxz00_1146 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 11581)),
									BGl_string1472z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_730);
								FAILURE(BgL_auxz00_1146, BFALSE, BFALSE);
							}
						BgL_charz00_843 = CCHAR(BgL_auxz00_1143);
					}
					BgL_auxz00_1142 = (BgL_charz00_843);
				}
				return BINT(BgL_auxz00_1142);
			}
		}
	}



/* integer->char */
	BGL_EXPORTED_DEF unsigned char
		BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long BgL_intz00_28)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 255 */
			{	/* Ieee/char.scm 256 */
				bool_t BgL_testz00_1153;

				if ((BgL_intz00_28 >= ((long) 0)))
					{	/* Ieee/char.scm 256 */
						BgL_testz00_1153 = (BgL_intz00_28 <= ((long) 255));
					}
				else
					{	/* Ieee/char.scm 256 */
						BgL_testz00_1153 = ((bool_t) 0);
					}
				if (BgL_testz00_1153)
					{	/* Ieee/char.scm 256 */
						return (BgL_intz00_28);
					}
				else
					{	/* Ieee/char.scm 256 */
						return
							CCHAR(BGl_errorz00zz__errorz00
							(BGl_string1473z00zz__r4_characters_6_6z00,
								BGl_string1474z00zz__r4_characters_6_6z00,
								BINT(BgL_intz00_28)));
					}
			}
		}
	}



/* _integer->char */
	obj_t BGl__integerzd2ze3charz31zz__r4_characters_6_6z00(obj_t BgL_envz00_731,
		obj_t BgL_intz00_732)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 255 */
			{	/* Ieee/char.scm 256 */
				unsigned char BgL_auxz00_1161;

				{	/* Ieee/char.scm 256 */
					long BgL_auxz00_1162;

					{	/* Ieee/char.scm 256 */
						obj_t BgL_auxz00_1163;

						if (INTEGERP(BgL_intz00_732))
							{	/* Ieee/char.scm 256 */
								BgL_auxz00_1163 = BgL_intz00_732;
							}
						else
							{
								obj_t BgL_auxz00_1166;

								BgL_auxz00_1166 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 11859)),
									BGl_string1475z00zz__r4_characters_6_6z00,
									BGl_string1476z00zz__r4_characters_6_6z00, BgL_intz00_732);
								FAILURE(BgL_auxz00_1166, BFALSE, BFALSE);
							}
						BgL_auxz00_1162 = (long) CINT(BgL_auxz00_1163);
					}
					BgL_auxz00_1161 =
						BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_auxz00_1162);
				}
				return BCHAR(BgL_auxz00_1161);
			}
		}
	}



/* integer->char-ur */
	BGL_EXPORTED_DEF unsigned char
		BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long BgL_intz00_29)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 263 */
			return (BgL_intz00_29);
		}
	}



/* _integer->char-ur */
	obj_t BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(obj_t
		BgL_envz00_733, obj_t BgL_intz00_734)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 263 */
			{	/* Ieee/char.scm 264 */
				unsigned char BgL_auxz00_1174;

				{	/* Ieee/char.scm 264 */
					long BgL_intz00_844;

					{	/* Ieee/char.scm 264 */
						obj_t BgL_auxz00_1175;

						if (INTEGERP(BgL_intz00_734))
							{	/* Ieee/char.scm 264 */
								BgL_auxz00_1175 = BgL_intz00_734;
							}
						else
							{
								obj_t BgL_auxz00_1178;

								BgL_auxz00_1178 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 12250)),
									BGl_string1477z00zz__r4_characters_6_6z00,
									BGl_string1476z00zz__r4_characters_6_6z00, BgL_intz00_734);
								FAILURE(BgL_auxz00_1178, BFALSE, BFALSE);
							}
						BgL_intz00_844 = (long) CINT(BgL_auxz00_1175);
					}
					BgL_auxz00_1174 = (BgL_intz00_844);
				}
				return BCHAR(BgL_auxz00_1174);
			}
		}
	}



/* char-upcase */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_30)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 269 */
			return toupper(BgL_charz00_30);
		}
	}



/* _char-upcase */
	obj_t BGl__charzd2upcasezd2zz__r4_characters_6_6z00(obj_t BgL_envz00_735,
		obj_t BgL_charz00_736)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 269 */
			{	/* Ieee/char.scm 270 */
				unsigned char BgL_auxz00_1186;

				{	/* Ieee/char.scm 270 */
					unsigned char BgL_charz00_845;

					{	/* Ieee/char.scm 270 */
						obj_t BgL_auxz00_1187;

						if (CHARP(BgL_charz00_736))
							{	/* Ieee/char.scm 270 */
								BgL_auxz00_1187 = BgL_charz00_736;
							}
						else
							{
								obj_t BgL_auxz00_1190;

								BgL_auxz00_1190 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 12534)),
									BGl_string1478z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_736);
								FAILURE(BgL_auxz00_1190, BFALSE, BFALSE);
							}
						BgL_charz00_845 = CCHAR(BgL_auxz00_1187);
					}
					BgL_auxz00_1186 = toupper(BgL_charz00_845);
				}
				return BCHAR(BgL_auxz00_1186);
			}
		}
	}



/* char-downcase */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_31)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 275 */
			return tolower(BgL_charz00_31);
		}
	}



/* _char-downcase */
	obj_t BGl__charzd2downcasezd2zz__r4_characters_6_6z00(obj_t BgL_envz00_737,
		obj_t BgL_charz00_738)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 275 */
			{	/* Ieee/char.scm 276 */
				unsigned char BgL_auxz00_1198;

				{	/* Ieee/char.scm 276 */
					unsigned char BgL_charz00_846;

					{	/* Ieee/char.scm 276 */
						obj_t BgL_auxz00_1199;

						if (CHARP(BgL_charz00_738))
							{	/* Ieee/char.scm 276 */
								BgL_auxz00_1199 = BgL_charz00_738;
							}
						else
							{
								obj_t BgL_auxz00_1202;

								BgL_auxz00_1202 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 12819)),
									BGl_string1479z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_charz00_738);
								FAILURE(BgL_auxz00_1202, BFALSE, BFALSE);
							}
						BgL_charz00_846 = CCHAR(BgL_auxz00_1199);
					}
					BgL_auxz00_1198 = tolower(BgL_charz00_846);
				}
				return BCHAR(BgL_auxz00_1198);
			}
		}
	}



/* char-or */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_32,
		unsigned char BgL_char2z00_33)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 281 */
			return (BgL_char1z00_32 | BgL_char2z00_33);
		}
	}



/* _char-or */
	obj_t BGl__charzd2orzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_739,
		obj_t BgL_char1z00_740, obj_t BgL_char2z00_741)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 281 */
			{	/* Ieee/char.scm 282 */
				unsigned char BgL_auxz00_1210;

				{	/* Ieee/char.scm 282 */
					unsigned char BgL_char1z00_847;

					unsigned char BgL_char2z00_848;

					{	/* Ieee/char.scm 282 */
						obj_t BgL_auxz00_1211;

						if (CHARP(BgL_char1z00_740))
							{	/* Ieee/char.scm 282 */
								BgL_auxz00_1211 = BgL_char1z00_740;
							}
						else
							{
								obj_t BgL_auxz00_1214;

								BgL_auxz00_1214 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 13113)),
									BGl_string1480z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_740);
								FAILURE(BgL_auxz00_1214, BFALSE, BFALSE);
							}
						BgL_char1z00_847 = CCHAR(BgL_auxz00_1211);
					}
					{	/* Ieee/char.scm 282 */
						obj_t BgL_auxz00_1219;

						if (CHARP(BgL_char2z00_741))
							{	/* Ieee/char.scm 282 */
								BgL_auxz00_1219 = BgL_char2z00_741;
							}
						else
							{
								obj_t BgL_auxz00_1222;

								BgL_auxz00_1222 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 13113)),
									BGl_string1480z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_741);
								FAILURE(BgL_auxz00_1222, BFALSE, BFALSE);
							}
						BgL_char2z00_848 = CCHAR(BgL_auxz00_1219);
					}
					BgL_auxz00_1210 = (BgL_char1z00_847 | BgL_char2z00_848);
				}
				return BCHAR(BgL_auxz00_1210);
			}
		}
	}



/* char-and */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_34,
		unsigned char BgL_char2z00_35)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 287 */
			return (BgL_char1z00_34 & BgL_char2z00_35);
		}
	}



/* _char-and */
	obj_t BGl__charzd2andzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_742,
		obj_t BgL_char1z00_743, obj_t BgL_char2z00_744)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 287 */
			{	/* Ieee/char.scm 288 */
				unsigned char BgL_auxz00_1230;

				{	/* Ieee/char.scm 288 */
					unsigned char BgL_char1z00_849;

					unsigned char BgL_char2z00_850;

					{	/* Ieee/char.scm 288 */
						obj_t BgL_auxz00_1231;

						if (CHARP(BgL_char1z00_743))
							{	/* Ieee/char.scm 288 */
								BgL_auxz00_1231 = BgL_char1z00_743;
							}
						else
							{
								obj_t BgL_auxz00_1234;

								BgL_auxz00_1234 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 13402)),
									BGl_string1481z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_743);
								FAILURE(BgL_auxz00_1234, BFALSE, BFALSE);
							}
						BgL_char1z00_849 = CCHAR(BgL_auxz00_1231);
					}
					{	/* Ieee/char.scm 288 */
						obj_t BgL_auxz00_1239;

						if (CHARP(BgL_char2z00_744))
							{	/* Ieee/char.scm 288 */
								BgL_auxz00_1239 = BgL_char2z00_744;
							}
						else
							{
								obj_t BgL_auxz00_1242;

								BgL_auxz00_1242 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 13402)),
									BGl_string1481z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char2z00_744);
								FAILURE(BgL_auxz00_1242, BFALSE, BFALSE);
							}
						BgL_char2z00_850 = CCHAR(BgL_auxz00_1239);
					}
					BgL_auxz00_1230 = (BgL_char1z00_849 & BgL_char2z00_850);
				}
				return BCHAR(BgL_auxz00_1230);
			}
		}
	}



/* char-not */
	BGL_EXPORTED_DEF unsigned char
		BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_36)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 293 */
			return ~(BgL_char1z00_36);
		}
	}



/* _char-not */
	obj_t BGl__charzd2notzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_745,
		obj_t BgL_char1z00_746)
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 293 */
			{	/* Ieee/char.scm 294 */
				unsigned char BgL_auxz00_1250;

				{	/* Ieee/char.scm 294 */
					unsigned char BgL_char1z00_851;

					{	/* Ieee/char.scm 294 */
						obj_t BgL_auxz00_1251;

						if (CHARP(BgL_char1z00_746))
							{	/* Ieee/char.scm 294 */
								BgL_auxz00_1251 = BgL_char1z00_746;
							}
						else
							{
								obj_t BgL_auxz00_1254;

								BgL_auxz00_1254 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1455z00zz__r4_characters_6_6z00,
									BINT(((long) 13686)),
									BGl_string1482z00zz__r4_characters_6_6z00,
									BGl_string1457z00zz__r4_characters_6_6z00, BgL_char1z00_746);
								FAILURE(BgL_auxz00_1254, BFALSE, BFALSE);
							}
						BgL_char1z00_851 = CCHAR(BgL_auxz00_1251);
					}
					BgL_auxz00_1250 = ~(BgL_char1z00_851);
				}
				return BCHAR(BgL_auxz00_1250);
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00()
	{
		AN_OBJECT;
		{	/* Ieee/char.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string1483z00zz__r4_characters_6_6z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string1483z00zz__r4_characters_6_6z00));
		}
	}

#ifdef __cplusplus
}
#endif
