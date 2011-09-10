/*===========================================================================*/
/*   (Ieee/char.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/char.scm -indent -o objs/obj_s/Ieee/char.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__charzd2downcasezd2zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long);
static obj_t BGl__charzf3zf3zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t);
static obj_t BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 = BUNSPEC;
static obj_t BGl__charzd2ze3integerz31zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00();
BGL_EXPORTED_DECL bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char, unsigned char);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__integerzd2ze3charz31zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__charzd2upcasezd2zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl__charzd2andzd2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl__charzd2numericzf3z21zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char, unsigned char);
BGL_EXPORTED_DECL unsigned char BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__charzc3zf3z30zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__charzd2notzd2zz__r4_characters_6_6z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned char, unsigned char);
static obj_t BGl__charzd3zf3z20zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__charze3zf3z10zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(obj_t, obj_t);
static obj_t BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char);
static obj_t BGl__charzd2orzd2zz__r4_characters_6_6z00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizd3zf3zd2envz20zz__r4_characters_6_6z00, BgL_bgl__charza7d2ciza7d3za7f31496za7, BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2orzd2envz00zz__r4_characters_6_6z00, BgL_bgl__charza7d2orza7d2za7za7_1497z00, BGl__charzd2orzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzc3zd3zf3zd2envz31zz__r4_characters_6_6z00, BgL_bgl__charza7c3za7d3za7f3za7e1498z00, BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd3zf3zd2envzf2zz__r4_characters_6_6z00, BgL_bgl__charza7d3za7f3za720za7za71499za7, BGl__charzd3zf3z20zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2upperzd2casezf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl__charza7d2upperza7d21500z00, BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2upcasezd2envz00zz__r4_characters_6_6z00, BgL_bgl__charza7d2upcaseza7d1501z00, BGl__charzd2upcasezd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2alphabeticzf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl__charza7d2alphabet1502za7, BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizc3zf3zd2envz30zz__r4_characters_6_6z00, BgL_bgl__charza7d2ciza7c3za7f31503za7, BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3charzd2urzd2envz31zz__r4_characters_6_6z00, BgL_bgl__integerza7d2za7e3ch1504z00, BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2downcasezd2envz00zz__r4_characters_6_6z00, BgL_bgl__charza7d2downcase1505za7, BGl__charzd2downcasezd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2whitespacezf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl__charza7d2whitespa1506za7, BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzc3zf3zd2envze2zz__r4_characters_6_6z00, BgL_bgl__charza7c3za7f3za730za7za71507za7, BGl__charzc3zf3z30zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1467z00zz__r4_characters_6_6z00, BgL_bgl_string1467za700za7za7_1508za7, "/tmp/bigloo/runtime/Ieee/char.scm", 33 );
DEFINE_STRING( BGl_string1468z00zz__r4_characters_6_6z00, BgL_bgl_string1468za700za7za7_1509za7, "_char=?", 7 );
DEFINE_STRING( BGl_string1470z00zz__r4_characters_6_6z00, BgL_bgl_string1470za700za7za7_1510za7, "_char<?", 7 );
DEFINE_STRING( BGl_string1469z00zz__r4_characters_6_6z00, BgL_bgl_string1469za700za7za7_1511za7, "uchar", 5 );
DEFINE_STRING( BGl_string1471z00zz__r4_characters_6_6z00, BgL_bgl_string1471za700za7za7_1512za7, "_char>?", 7 );
DEFINE_STRING( BGl_string1472z00zz__r4_characters_6_6z00, BgL_bgl_string1472za700za7za7_1513za7, "_char<=?", 8 );
DEFINE_STRING( BGl_string1473z00zz__r4_characters_6_6z00, BgL_bgl_string1473za700za7za7_1514za7, "_char>=?", 8 );
DEFINE_STRING( BGl_string1474z00zz__r4_characters_6_6z00, BgL_bgl_string1474za700za7za7_1515za7, "_char-ci=?", 10 );
DEFINE_STRING( BGl_string1475z00zz__r4_characters_6_6z00, BgL_bgl_string1475za700za7za7_1516za7, "_char-ci<?", 10 );
DEFINE_STRING( BGl_string1476z00zz__r4_characters_6_6z00, BgL_bgl_string1476za700za7za7_1517za7, "_char-ci>?", 10 );
DEFINE_STRING( BGl_string1477z00zz__r4_characters_6_6z00, BgL_bgl_string1477za700za7za7_1518za7, "_char-ci<=?", 11 );
DEFINE_STRING( BGl_string1478z00zz__r4_characters_6_6z00, BgL_bgl_string1478za700za7za7_1519za7, "_char-ci>=?", 11 );
DEFINE_STRING( BGl_string1480z00zz__r4_characters_6_6z00, BgL_bgl_string1480za700za7za7_1520za7, "_char-numeric?", 14 );
DEFINE_STRING( BGl_string1479z00zz__r4_characters_6_6z00, BgL_bgl_string1479za700za7za7_1521za7, "_char-alphabetic?", 17 );
DEFINE_STRING( BGl_string1481z00zz__r4_characters_6_6z00, BgL_bgl_string1481za700za7za7_1522za7, "_char-whitespace?", 17 );
DEFINE_STRING( BGl_string1482z00zz__r4_characters_6_6z00, BgL_bgl_string1482za700za7za7_1523za7, "_char-upper-case?", 17 );
DEFINE_STRING( BGl_string1483z00zz__r4_characters_6_6z00, BgL_bgl_string1483za700za7za7_1524za7, "_char-lower-case?", 17 );
DEFINE_STRING( BGl_string1484z00zz__r4_characters_6_6z00, BgL_bgl_string1484za700za7za7_1525za7, "_char->integer", 14 );
DEFINE_STRING( BGl_string1485z00zz__r4_characters_6_6z00, BgL_bgl_string1485za700za7za7_1526za7, "integer->char", 13 );
DEFINE_STRING( BGl_string1486z00zz__r4_characters_6_6z00, BgL_bgl_string1486za700za7za7_1527za7, "integer out of range", 20 );
DEFINE_STRING( BGl_string1487z00zz__r4_characters_6_6z00, BgL_bgl_string1487za700za7za7_1528za7, "_integer->char", 14 );
DEFINE_STRING( BGl_string1488z00zz__r4_characters_6_6z00, BgL_bgl_string1488za700za7za7_1529za7, "long", 4 );
DEFINE_STRING( BGl_string1490z00zz__r4_characters_6_6z00, BgL_bgl_string1490za700za7za7_1530za7, "_char-upcase", 12 );
DEFINE_STRING( BGl_string1489z00zz__r4_characters_6_6z00, BgL_bgl_string1489za700za7za7_1531za7, "_integer->char-ur", 17 );
DEFINE_STRING( BGl_string1491z00zz__r4_characters_6_6z00, BgL_bgl_string1491za700za7za7_1532za7, "_char-downcase", 14 );
DEFINE_STRING( BGl_string1492z00zz__r4_characters_6_6z00, BgL_bgl_string1492za700za7za7_1533za7, "_char-or", 8 );
DEFINE_STRING( BGl_string1493z00zz__r4_characters_6_6z00, BgL_bgl_string1493za700za7za7_1534za7, "_char-and", 9 );
DEFINE_STRING( BGl_string1494z00zz__r4_characters_6_6z00, BgL_bgl_string1494za700za7za7_1535za7, "_char-not", 9 );
DEFINE_STRING( BGl_string1495z00zz__r4_characters_6_6z00, BgL_bgl_string1495za700za7za7_1536za7, "__r4_characters_6_6", 19 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2notzd2envz00zz__r4_characters_6_6z00, BgL_bgl__charza7d2notza7d2za7za71537z00, BGl__charzd2notzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cize3zf3zd2envz10zz__r4_characters_6_6z00, BgL_bgl__charza7d2ciza7e3za7f31538za7, BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2andzd2envz00zz__r4_characters_6_6z00, BgL_bgl__charza7d2andza7d2za7za71539z00, BGl__charzd2andzd2zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2lowerzd2casezf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl__charza7d2lowerza7d21540z00, BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2ze3integerzd2envze3zz__r4_characters_6_6z00, BgL_bgl__charza7d2za7e3integ1541z00, BGl__charzd2ze3integerz31zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charze3zf3zd2envzc2zz__r4_characters_6_6z00, BgL_bgl__charza7e3za7f3za710za7za71542za7, BGl__charze3zf3z10zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2numericzf3zd2envzf3zz__r4_characters_6_6z00, BgL_bgl__charza7d2numericza71543z00, BGl__charzd2numericzf3z21zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cize3zd3zf3zd2envzc3zz__r4_characters_6_6z00, BgL_bgl__charza7d2ciza7e3za7d31544za7, BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzf3zd2envz21zz__r4_characters_6_6z00, BgL_bgl__charza7f3za7f3za7za7__r1545z00, BGl__charzf3zf3zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3charzd2envze3zz__r4_characters_6_6z00, BgL_bgl__integerza7d2za7e3ch1546z00, BGl__integerzd2ze3charz31zz__r4_characters_6_6z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charze3zd3zf3zd2envz11zz__r4_characters_6_6z00, BgL_bgl__charza7e3za7d3za7f3za7c1547z00, BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2cizc3zd3zf3zd2envze3zz__r4_characters_6_6z00, BgL_bgl__charza7d2ciza7c3za7d31548za7, BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long BgL_checksumz00_872, char * BgL_fromz00_873)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_characters_6_6z00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* char? */
BGL_EXPORTED_DEF bool_t BGl_charzf3zf3zz__r4_characters_6_6z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Ieee/char.scm 131 */
return 
CHARP(BgL_objz00_1);} 
}



/* _char? */
obj_t BGl__charzf3zf3zz__r4_characters_6_6z00(obj_t BgL_envz00_705, obj_t BgL_objz00_706)
{ AN_OBJECT;
{ /* Ieee/char.scm 131 */
return 
BBOOL(
CHARP(BgL_objz00_706));} 
}



/* char=? */
BGL_EXPORTED_DEF bool_t BGl_charzd3zf3z20zz__r4_characters_6_6z00(unsigned char BgL_char1z00_2, unsigned char BgL_char2z00_3)
{ AN_OBJECT;
{ /* Ieee/char.scm 137 */
return 
(BgL_char1z00_2==BgL_char2z00_3);} 
}



/* _char=? */
obj_t BGl__charzd3zf3z20zz__r4_characters_6_6z00(obj_t BgL_envz00_707, obj_t BgL_char1z00_708, obj_t BgL_char2z00_709)
{ AN_OBJECT;
{ /* Ieee/char.scm 137 */
{ /* Ieee/char.scm 138 */
bool_t BgL_auxz00_882;
{ /* Ieee/char.scm 138 */
unsigned char BgL_char1z00_838;unsigned char BgL_char2z00_839;
{ /* Ieee/char.scm 138 */
obj_t BgL_auxz00_883;
if(
CHARP(BgL_char1z00_708))
{ /* Ieee/char.scm 138 */
BgL_auxz00_883 = BgL_char1z00_708
; }  else 
{ 
obj_t BgL_auxz00_886;
BgL_auxz00_886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)6524)), BGl_string1468z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_708); 
FAILURE(BgL_auxz00_886,BFALSE,BFALSE);} 
BgL_char1z00_838 = 
CCHAR(BgL_auxz00_883); } 
{ /* Ieee/char.scm 138 */
obj_t BgL_auxz00_891;
if(
CHARP(BgL_char2z00_709))
{ /* Ieee/char.scm 138 */
BgL_auxz00_891 = BgL_char2z00_709
; }  else 
{ 
obj_t BgL_auxz00_894;
BgL_auxz00_894 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)6524)), BGl_string1468z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_709); 
FAILURE(BgL_auxz00_894,BFALSE,BFALSE);} 
BgL_char2z00_839 = 
CCHAR(BgL_auxz00_891); } 
BgL_auxz00_882 = 
(BgL_char1z00_838==BgL_char2z00_839); } 
return 
BBOOL(BgL_auxz00_882);} } 
}



/* char<? */
BGL_EXPORTED_DEF bool_t BGl_charzc3zf3z30zz__r4_characters_6_6z00(unsigned char BgL_char1z00_4, unsigned char BgL_char2z00_5)
{ AN_OBJECT;
{ /* Ieee/char.scm 143 */
return 
(BgL_char1z00_4<BgL_char2z00_5);} 
}



/* _char<? */
obj_t BGl__charzc3zf3z30zz__r4_characters_6_6z00(obj_t BgL_envz00_710, obj_t BgL_char1z00_711, obj_t BgL_char2z00_712)
{ AN_OBJECT;
{ /* Ieee/char.scm 143 */
{ /* Ieee/char.scm 144 */
bool_t BgL_auxz00_902;
{ /* Ieee/char.scm 144 */
unsigned char BgL_char1z00_840;unsigned char BgL_char2z00_841;
{ /* Ieee/char.scm 144 */
obj_t BgL_auxz00_903;
if(
CHARP(BgL_char1z00_711))
{ /* Ieee/char.scm 144 */
BgL_auxz00_903 = BgL_char1z00_711
; }  else 
{ 
obj_t BgL_auxz00_906;
BgL_auxz00_906 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)6810)), BGl_string1470z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_711); 
FAILURE(BgL_auxz00_906,BFALSE,BFALSE);} 
BgL_char1z00_840 = 
CCHAR(BgL_auxz00_903); } 
{ /* Ieee/char.scm 144 */
obj_t BgL_auxz00_911;
if(
CHARP(BgL_char2z00_712))
{ /* Ieee/char.scm 144 */
BgL_auxz00_911 = BgL_char2z00_712
; }  else 
{ 
obj_t BgL_auxz00_914;
BgL_auxz00_914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)6810)), BGl_string1470z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_712); 
FAILURE(BgL_auxz00_914,BFALSE,BFALSE);} 
BgL_char2z00_841 = 
CCHAR(BgL_auxz00_911); } 
BgL_auxz00_902 = 
(BgL_char1z00_840<BgL_char2z00_841); } 
return 
BBOOL(BgL_auxz00_902);} } 
}



/* char>? */
BGL_EXPORTED_DEF bool_t BGl_charze3zf3z10zz__r4_characters_6_6z00(unsigned char BgL_char1z00_6, unsigned char BgL_char2z00_7)
{ AN_OBJECT;
{ /* Ieee/char.scm 149 */
return 
(BgL_char1z00_6>BgL_char2z00_7);} 
}



/* _char>? */
obj_t BGl__charze3zf3z10zz__r4_characters_6_6z00(obj_t BgL_envz00_713, obj_t BgL_char1z00_714, obj_t BgL_char2z00_715)
{ AN_OBJECT;
{ /* Ieee/char.scm 149 */
{ /* Ieee/char.scm 150 */
bool_t BgL_auxz00_922;
{ /* Ieee/char.scm 150 */
unsigned char BgL_char1z00_842;unsigned char BgL_char2z00_843;
{ /* Ieee/char.scm 150 */
obj_t BgL_auxz00_923;
if(
CHARP(BgL_char1z00_714))
{ /* Ieee/char.scm 150 */
BgL_auxz00_923 = BgL_char1z00_714
; }  else 
{ 
obj_t BgL_auxz00_926;
BgL_auxz00_926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7097)), BGl_string1471z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_714); 
FAILURE(BgL_auxz00_926,BFALSE,BFALSE);} 
BgL_char1z00_842 = 
CCHAR(BgL_auxz00_923); } 
{ /* Ieee/char.scm 150 */
obj_t BgL_auxz00_931;
if(
CHARP(BgL_char2z00_715))
{ /* Ieee/char.scm 150 */
BgL_auxz00_931 = BgL_char2z00_715
; }  else 
{ 
obj_t BgL_auxz00_934;
BgL_auxz00_934 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7097)), BGl_string1471z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_715); 
FAILURE(BgL_auxz00_934,BFALSE,BFALSE);} 
BgL_char2z00_843 = 
CCHAR(BgL_auxz00_931); } 
BgL_auxz00_922 = 
(BgL_char1z00_842>BgL_char2z00_843); } 
return 
BBOOL(BgL_auxz00_922);} } 
}



/* char<=? */
BGL_EXPORTED_DEF bool_t BGl_charzc3zd3zf3ze3zz__r4_characters_6_6z00(unsigned char BgL_char1z00_8, unsigned char BgL_char2z00_9)
{ AN_OBJECT;
{ /* Ieee/char.scm 155 */
return 
(BgL_char1z00_8<=BgL_char2z00_9);} 
}



/* _char<=? */
obj_t BGl__charzc3zd3zf3ze3zz__r4_characters_6_6z00(obj_t BgL_envz00_716, obj_t BgL_char1z00_717, obj_t BgL_char2z00_718)
{ AN_OBJECT;
{ /* Ieee/char.scm 155 */
{ /* Ieee/char.scm 156 */
bool_t BgL_auxz00_942;
{ /* Ieee/char.scm 156 */
unsigned char BgL_char1z00_844;unsigned char BgL_char2z00_845;
{ /* Ieee/char.scm 156 */
obj_t BgL_auxz00_943;
if(
CHARP(BgL_char1z00_717))
{ /* Ieee/char.scm 156 */
BgL_auxz00_943 = BgL_char1z00_717
; }  else 
{ 
obj_t BgL_auxz00_946;
BgL_auxz00_946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7384)), BGl_string1472z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_717); 
FAILURE(BgL_auxz00_946,BFALSE,BFALSE);} 
BgL_char1z00_844 = 
CCHAR(BgL_auxz00_943); } 
{ /* Ieee/char.scm 156 */
obj_t BgL_auxz00_951;
if(
CHARP(BgL_char2z00_718))
{ /* Ieee/char.scm 156 */
BgL_auxz00_951 = BgL_char2z00_718
; }  else 
{ 
obj_t BgL_auxz00_954;
BgL_auxz00_954 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7384)), BGl_string1472z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_718); 
FAILURE(BgL_auxz00_954,BFALSE,BFALSE);} 
BgL_char2z00_845 = 
CCHAR(BgL_auxz00_951); } 
BgL_auxz00_942 = 
(BgL_char1z00_844<=BgL_char2z00_845); } 
return 
BBOOL(BgL_auxz00_942);} } 
}



/* char>=? */
BGL_EXPORTED_DEF bool_t BGl_charze3zd3zf3zc3zz__r4_characters_6_6z00(unsigned char BgL_char1z00_10, unsigned char BgL_char2z00_11)
{ AN_OBJECT;
{ /* Ieee/char.scm 161 */
return 
(BgL_char1z00_10>=BgL_char2z00_11);} 
}



/* _char>=? */
obj_t BGl__charze3zd3zf3zc3zz__r4_characters_6_6z00(obj_t BgL_envz00_719, obj_t BgL_char1z00_720, obj_t BgL_char2z00_721)
{ AN_OBJECT;
{ /* Ieee/char.scm 161 */
{ /* Ieee/char.scm 162 */
bool_t BgL_auxz00_962;
{ /* Ieee/char.scm 162 */
unsigned char BgL_char1z00_846;unsigned char BgL_char2z00_847;
{ /* Ieee/char.scm 162 */
obj_t BgL_auxz00_963;
if(
CHARP(BgL_char1z00_720))
{ /* Ieee/char.scm 162 */
BgL_auxz00_963 = BgL_char1z00_720
; }  else 
{ 
obj_t BgL_auxz00_966;
BgL_auxz00_966 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7672)), BGl_string1473z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_720); 
FAILURE(BgL_auxz00_966,BFALSE,BFALSE);} 
BgL_char1z00_846 = 
CCHAR(BgL_auxz00_963); } 
{ /* Ieee/char.scm 162 */
obj_t BgL_auxz00_971;
if(
CHARP(BgL_char2z00_721))
{ /* Ieee/char.scm 162 */
BgL_auxz00_971 = BgL_char2z00_721
; }  else 
{ 
obj_t BgL_auxz00_974;
BgL_auxz00_974 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7672)), BGl_string1473z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_721); 
FAILURE(BgL_auxz00_974,BFALSE,BFALSE);} 
BgL_char2z00_847 = 
CCHAR(BgL_auxz00_971); } 
BgL_auxz00_962 = 
(BgL_char1z00_846>=BgL_char2z00_847); } 
return 
BBOOL(BgL_auxz00_962);} } 
}



/* char-ci=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizd3zf3zf2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_12, unsigned char BgL_char2z00_13)
{ AN_OBJECT;
{ /* Ieee/char.scm 167 */
return 
(
toupper(BgL_char1z00_12)==
toupper(BgL_char2z00_13));} 
}



/* _char-ci=? */
obj_t BGl__charzd2cizd3zf3zf2zz__r4_characters_6_6z00(obj_t BgL_envz00_722, obj_t BgL_char1z00_723, obj_t BgL_char2z00_724)
{ AN_OBJECT;
{ /* Ieee/char.scm 167 */
{ /* Ieee/char.scm 168 */
bool_t BgL_auxz00_984;
{ /* Ieee/char.scm 168 */
unsigned char BgL_char1z00_848;unsigned char BgL_char2z00_849;
{ /* Ieee/char.scm 168 */
obj_t BgL_auxz00_985;
if(
CHARP(BgL_char1z00_723))
{ /* Ieee/char.scm 168 */
BgL_auxz00_985 = BgL_char1z00_723
; }  else 
{ 
obj_t BgL_auxz00_988;
BgL_auxz00_988 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7970)), BGl_string1474z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_723); 
FAILURE(BgL_auxz00_988,BFALSE,BFALSE);} 
BgL_char1z00_848 = 
CCHAR(BgL_auxz00_985); } 
{ /* Ieee/char.scm 168 */
obj_t BgL_auxz00_993;
if(
CHARP(BgL_char2z00_724))
{ /* Ieee/char.scm 168 */
BgL_auxz00_993 = BgL_char2z00_724
; }  else 
{ 
obj_t BgL_auxz00_996;
BgL_auxz00_996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)7970)), BGl_string1474z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_724); 
FAILURE(BgL_auxz00_996,BFALSE,BFALSE);} 
BgL_char2z00_849 = 
CCHAR(BgL_auxz00_993); } 
BgL_auxz00_984 = 
(
toupper(BgL_char1z00_848)==
toupper(BgL_char2z00_849)); } 
return 
BBOOL(BgL_auxz00_984);} } 
}



/* char-ci<? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizc3zf3ze2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_14, unsigned char BgL_char2z00_15)
{ AN_OBJECT;
{ /* Ieee/char.scm 173 */
return 
(
toupper(BgL_char1z00_14)<
toupper(BgL_char2z00_15));} 
}



/* _char-ci<? */
obj_t BGl__charzd2cizc3zf3ze2zz__r4_characters_6_6z00(obj_t BgL_envz00_725, obj_t BgL_char1z00_726, obj_t BgL_char2z00_727)
{ AN_OBJECT;
{ /* Ieee/char.scm 173 */
{ /* Ieee/char.scm 174 */
bool_t BgL_auxz00_1008;
{ /* Ieee/char.scm 174 */
unsigned char BgL_char1z00_850;unsigned char BgL_char2z00_851;
{ /* Ieee/char.scm 174 */
obj_t BgL_auxz00_1009;
if(
CHARP(BgL_char1z00_726))
{ /* Ieee/char.scm 174 */
BgL_auxz00_1009 = BgL_char1z00_726
; }  else 
{ 
obj_t BgL_auxz00_1012;
BgL_auxz00_1012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8287)), BGl_string1475z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_726); 
FAILURE(BgL_auxz00_1012,BFALSE,BFALSE);} 
BgL_char1z00_850 = 
CCHAR(BgL_auxz00_1009); } 
{ /* Ieee/char.scm 174 */
obj_t BgL_auxz00_1017;
if(
CHARP(BgL_char2z00_727))
{ /* Ieee/char.scm 174 */
BgL_auxz00_1017 = BgL_char2z00_727
; }  else 
{ 
obj_t BgL_auxz00_1020;
BgL_auxz00_1020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8287)), BGl_string1475z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_727); 
FAILURE(BgL_auxz00_1020,BFALSE,BFALSE);} 
BgL_char2z00_851 = 
CCHAR(BgL_auxz00_1017); } 
BgL_auxz00_1008 = 
(
toupper(BgL_char1z00_850)<
toupper(BgL_char2z00_851)); } 
return 
BBOOL(BgL_auxz00_1008);} } 
}



/* char-ci>? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cize3zf3zc2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_16, unsigned char BgL_char2z00_17)
{ AN_OBJECT;
{ /* Ieee/char.scm 179 */
return 
(
toupper(BgL_char1z00_16)>
toupper(BgL_char2z00_17));} 
}



/* _char-ci>? */
obj_t BGl__charzd2cize3zf3zc2zz__r4_characters_6_6z00(obj_t BgL_envz00_728, obj_t BgL_char1z00_729, obj_t BgL_char2z00_730)
{ AN_OBJECT;
{ /* Ieee/char.scm 179 */
{ /* Ieee/char.scm 180 */
bool_t BgL_auxz00_1032;
{ /* Ieee/char.scm 180 */
unsigned char BgL_char1z00_852;unsigned char BgL_char2z00_853;
{ /* Ieee/char.scm 180 */
obj_t BgL_auxz00_1033;
if(
CHARP(BgL_char1z00_729))
{ /* Ieee/char.scm 180 */
BgL_auxz00_1033 = BgL_char1z00_729
; }  else 
{ 
obj_t BgL_auxz00_1036;
BgL_auxz00_1036 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8606)), BGl_string1476z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_729); 
FAILURE(BgL_auxz00_1036,BFALSE,BFALSE);} 
BgL_char1z00_852 = 
CCHAR(BgL_auxz00_1033); } 
{ /* Ieee/char.scm 180 */
obj_t BgL_auxz00_1041;
if(
CHARP(BgL_char2z00_730))
{ /* Ieee/char.scm 180 */
BgL_auxz00_1041 = BgL_char2z00_730
; }  else 
{ 
obj_t BgL_auxz00_1044;
BgL_auxz00_1044 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8606)), BGl_string1476z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_730); 
FAILURE(BgL_auxz00_1044,BFALSE,BFALSE);} 
BgL_char2z00_853 = 
CCHAR(BgL_auxz00_1041); } 
BgL_auxz00_1032 = 
(
toupper(BgL_char1z00_852)>
toupper(BgL_char2z00_853)); } 
return 
BBOOL(BgL_auxz00_1032);} } 
}



/* char-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(unsigned char BgL_char1z00_18, unsigned char BgL_char2z00_19)
{ AN_OBJECT;
{ /* Ieee/char.scm 185 */
return 
(
toupper(BgL_char1z00_18)<=
toupper(BgL_char2z00_19));} 
}



/* _char-ci<=? */
obj_t BGl__charzd2cizc3zd3zf3z31zz__r4_characters_6_6z00(obj_t BgL_envz00_731, obj_t BgL_char1z00_732, obj_t BgL_char2z00_733)
{ AN_OBJECT;
{ /* Ieee/char.scm 185 */
{ /* Ieee/char.scm 186 */
bool_t BgL_auxz00_1056;
{ /* Ieee/char.scm 186 */
unsigned char BgL_char1z00_854;unsigned char BgL_char2z00_855;
{ /* Ieee/char.scm 186 */
obj_t BgL_auxz00_1057;
if(
CHARP(BgL_char1z00_732))
{ /* Ieee/char.scm 186 */
BgL_auxz00_1057 = BgL_char1z00_732
; }  else 
{ 
obj_t BgL_auxz00_1060;
BgL_auxz00_1060 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8925)), BGl_string1477z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_732); 
FAILURE(BgL_auxz00_1060,BFALSE,BFALSE);} 
BgL_char1z00_854 = 
CCHAR(BgL_auxz00_1057); } 
{ /* Ieee/char.scm 186 */
obj_t BgL_auxz00_1065;
if(
CHARP(BgL_char2z00_733))
{ /* Ieee/char.scm 186 */
BgL_auxz00_1065 = BgL_char2z00_733
; }  else 
{ 
obj_t BgL_auxz00_1068;
BgL_auxz00_1068 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)8925)), BGl_string1477z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_733); 
FAILURE(BgL_auxz00_1068,BFALSE,BFALSE);} 
BgL_char2z00_855 = 
CCHAR(BgL_auxz00_1065); } 
BgL_auxz00_1056 = 
(
toupper(BgL_char1z00_854)<=
toupper(BgL_char2z00_855)); } 
return 
BBOOL(BgL_auxz00_1056);} } 
}



/* char-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(unsigned char BgL_char1z00_20, unsigned char BgL_char2z00_21)
{ AN_OBJECT;
{ /* Ieee/char.scm 191 */
return 
(
toupper(BgL_char1z00_20)>=
toupper(BgL_char2z00_21));} 
}



/* _char-ci>=? */
obj_t BGl__charzd2cize3zd3zf3z11zz__r4_characters_6_6z00(obj_t BgL_envz00_734, obj_t BgL_char1z00_735, obj_t BgL_char2z00_736)
{ AN_OBJECT;
{ /* Ieee/char.scm 191 */
{ /* Ieee/char.scm 192 */
bool_t BgL_auxz00_1080;
{ /* Ieee/char.scm 192 */
unsigned char BgL_char1z00_856;unsigned char BgL_char2z00_857;
{ /* Ieee/char.scm 192 */
obj_t BgL_auxz00_1081;
if(
CHARP(BgL_char1z00_735))
{ /* Ieee/char.scm 192 */
BgL_auxz00_1081 = BgL_char1z00_735
; }  else 
{ 
obj_t BgL_auxz00_1084;
BgL_auxz00_1084 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)9244)), BGl_string1478z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_735); 
FAILURE(BgL_auxz00_1084,BFALSE,BFALSE);} 
BgL_char1z00_856 = 
CCHAR(BgL_auxz00_1081); } 
{ /* Ieee/char.scm 192 */
obj_t BgL_auxz00_1089;
if(
CHARP(BgL_char2z00_736))
{ /* Ieee/char.scm 192 */
BgL_auxz00_1089 = BgL_char2z00_736
; }  else 
{ 
obj_t BgL_auxz00_1092;
BgL_auxz00_1092 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)9244)), BGl_string1478z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_736); 
FAILURE(BgL_auxz00_1092,BFALSE,BFALSE);} 
BgL_char2z00_857 = 
CCHAR(BgL_auxz00_1089); } 
BgL_auxz00_1080 = 
(
toupper(BgL_char1z00_856)>=
toupper(BgL_char2z00_857)); } 
return 
BBOOL(BgL_auxz00_1080);} } 
}



/* char-alphabetic? */
BGL_EXPORTED_DEF bool_t BGl_charzd2alphabeticzf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_22)
{ AN_OBJECT;
{ /* Ieee/char.scm 197 */
return 
isalpha(BgL_charz00_22);} 
}



/* _char-alphabetic? */
obj_t BGl__charzd2alphabeticzf3z21zz__r4_characters_6_6z00(obj_t BgL_envz00_737, obj_t BgL_charz00_738)
{ AN_OBJECT;
{ /* Ieee/char.scm 197 */
{ /* Ieee/char.scm 199 */
bool_t BgL_auxz00_1102;
{ /* Ieee/char.scm 199 */
unsigned char BgL_charz00_858;
{ /* Ieee/char.scm 199 */
obj_t BgL_auxz00_1103;
if(
CHARP(BgL_charz00_738))
{ /* Ieee/char.scm 199 */
BgL_auxz00_1103 = BgL_charz00_738
; }  else 
{ 
obj_t BgL_auxz00_1106;
BgL_auxz00_1106 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)9580)), BGl_string1479z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_738); 
FAILURE(BgL_auxz00_1106,BFALSE,BFALSE);} 
BgL_charz00_858 = 
CCHAR(BgL_auxz00_1103); } 
BgL_auxz00_1102 = 
isalpha(BgL_charz00_858); } 
return 
BBOOL(BgL_auxz00_1102);} } 
}



/* char-numeric? */
BGL_EXPORTED_DEF bool_t BGl_charzd2numericzf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_23)
{ AN_OBJECT;
{ /* Ieee/char.scm 208 */
return 
isdigit(BgL_charz00_23);} 
}



/* _char-numeric? */
obj_t BGl__charzd2numericzf3z21zz__r4_characters_6_6z00(obj_t BgL_envz00_739, obj_t BgL_charz00_740)
{ AN_OBJECT;
{ /* Ieee/char.scm 208 */
{ /* Ieee/char.scm 210 */
bool_t BgL_auxz00_1114;
{ /* Ieee/char.scm 210 */
unsigned char BgL_charz00_859;
{ /* Ieee/char.scm 210 */
obj_t BgL_auxz00_1115;
if(
CHARP(BgL_charz00_740))
{ /* Ieee/char.scm 210 */
BgL_auxz00_1115 = BgL_charz00_740
; }  else 
{ 
obj_t BgL_auxz00_1118;
BgL_auxz00_1118 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)10022)), BGl_string1480z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_740); 
FAILURE(BgL_auxz00_1118,BFALSE,BFALSE);} 
BgL_charz00_859 = 
CCHAR(BgL_auxz00_1115); } 
BgL_auxz00_1114 = 
isdigit(BgL_charz00_859); } 
return 
BBOOL(BgL_auxz00_1114);} } 
}



/* char-whitespace? */
BGL_EXPORTED_DEF bool_t BGl_charzd2whitespacezf3z21zz__r4_characters_6_6z00(unsigned char BgL_charz00_24)
{ AN_OBJECT;
{ /* Ieee/char.scm 218 */
return 
isspace(BgL_charz00_24);} 
}



/* _char-whitespace? */
obj_t BGl__charzd2whitespacezf3z21zz__r4_characters_6_6z00(obj_t BgL_envz00_741, obj_t BgL_charz00_742)
{ AN_OBJECT;
{ /* Ieee/char.scm 218 */
{ /* Ieee/char.scm 220 */
bool_t BgL_auxz00_1126;
{ /* Ieee/char.scm 220 */
unsigned char BgL_charz00_860;
{ /* Ieee/char.scm 220 */
obj_t BgL_auxz00_1127;
if(
CHARP(BgL_charz00_742))
{ /* Ieee/char.scm 220 */
BgL_auxz00_1127 = BgL_charz00_742
; }  else 
{ 
obj_t BgL_auxz00_1130;
BgL_auxz00_1130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)10405)), BGl_string1481z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_742); 
FAILURE(BgL_auxz00_1130,BFALSE,BFALSE);} 
BgL_charz00_860 = 
CCHAR(BgL_auxz00_1127); } 
BgL_auxz00_1126 = 
isspace(BgL_charz00_860); } 
return 
BBOOL(BgL_auxz00_1126);} } 
}



/* char-upper-case? */
BGL_EXPORTED_DEF bool_t BGl_charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char BgL_charz00_25)
{ AN_OBJECT;
{ /* Ieee/char.scm 229 */
return 
isupper(BgL_charz00_25);} 
}



/* _char-upper-case? */
obj_t BGl__charzd2upperzd2casezf3zf3zz__r4_characters_6_6z00(obj_t BgL_envz00_743, obj_t BgL_charz00_744)
{ AN_OBJECT;
{ /* Ieee/char.scm 229 */
{ /* Ieee/char.scm 231 */
bool_t BgL_auxz00_1138;
{ /* Ieee/char.scm 231 */
unsigned char BgL_charz00_861;
{ /* Ieee/char.scm 231 */
obj_t BgL_auxz00_1139;
if(
CHARP(BgL_charz00_744))
{ /* Ieee/char.scm 231 */
BgL_auxz00_1139 = BgL_charz00_744
; }  else 
{ 
obj_t BgL_auxz00_1142;
BgL_auxz00_1142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)10841)), BGl_string1482z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_744); 
FAILURE(BgL_auxz00_1142,BFALSE,BFALSE);} 
BgL_charz00_861 = 
CCHAR(BgL_auxz00_1139); } 
BgL_auxz00_1138 = 
isupper(BgL_charz00_861); } 
return 
BBOOL(BgL_auxz00_1138);} } 
}



/* char-lower-case? */
BGL_EXPORTED_DEF bool_t BGl_charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(unsigned char BgL_charz00_26)
{ AN_OBJECT;
{ /* Ieee/char.scm 239 */
return 
islower(BgL_charz00_26);} 
}



/* _char-lower-case? */
obj_t BGl__charzd2lowerzd2casezf3zf3zz__r4_characters_6_6z00(obj_t BgL_envz00_745, obj_t BgL_charz00_746)
{ AN_OBJECT;
{ /* Ieee/char.scm 239 */
{ /* Ieee/char.scm 241 */
bool_t BgL_auxz00_1150;
{ /* Ieee/char.scm 241 */
unsigned char BgL_charz00_862;
{ /* Ieee/char.scm 241 */
obj_t BgL_auxz00_1151;
if(
CHARP(BgL_charz00_746))
{ /* Ieee/char.scm 241 */
BgL_auxz00_1151 = BgL_charz00_746
; }  else 
{ 
obj_t BgL_auxz00_1154;
BgL_auxz00_1154 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)11227)), BGl_string1483z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_746); 
FAILURE(BgL_auxz00_1154,BFALSE,BFALSE);} 
BgL_charz00_862 = 
CCHAR(BgL_auxz00_1151); } 
BgL_auxz00_1150 = 
islower(BgL_charz00_862); } 
return 
BBOOL(BgL_auxz00_1150);} } 
}



/* char->integer */
BGL_EXPORTED_DEF long BGl_charzd2ze3integerz31zz__r4_characters_6_6z00(unsigned char BgL_charz00_27)
{ AN_OBJECT;
{ /* Ieee/char.scm 249 */
return 
(BgL_charz00_27);} 
}



/* _char->integer */
obj_t BGl__charzd2ze3integerz31zz__r4_characters_6_6z00(obj_t BgL_envz00_747, obj_t BgL_charz00_748)
{ AN_OBJECT;
{ /* Ieee/char.scm 249 */
{ /* Ieee/char.scm 250 */
long BgL_auxz00_1162;
{ /* Ieee/char.scm 250 */
unsigned char BgL_charz00_863;
{ /* Ieee/char.scm 250 */
obj_t BgL_auxz00_1163;
if(
CHARP(BgL_charz00_748))
{ /* Ieee/char.scm 250 */
BgL_auxz00_1163 = BgL_charz00_748
; }  else 
{ 
obj_t BgL_auxz00_1166;
BgL_auxz00_1166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)11581)), BGl_string1484z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_748); 
FAILURE(BgL_auxz00_1166,BFALSE,BFALSE);} 
BgL_charz00_863 = 
CCHAR(BgL_auxz00_1163); } 
BgL_auxz00_1162 = 
(BgL_charz00_863); } 
return 
BINT(BgL_auxz00_1162);} } 
}



/* integer->char */
BGL_EXPORTED_DEF unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long BgL_intz00_28)
{ AN_OBJECT;
{ /* Ieee/char.scm 255 */
{ /* Ieee/char.scm 256 */
bool_t BgL_testz00_1173;
if(
(BgL_intz00_28>=((long)0)))
{ /* Ieee/char.scm 256 */
BgL_testz00_1173 = 
(BgL_intz00_28<=((long)255))
; }  else 
{ /* Ieee/char.scm 256 */
BgL_testz00_1173 = ((bool_t)0)
; } 
if(BgL_testz00_1173)
{ /* Ieee/char.scm 256 */
return 
(BgL_intz00_28);}  else 
{ /* Ieee/char.scm 258 */
obj_t BgL_auxz00_1178;
{ /* Ieee/char.scm 258 */
obj_t BgL_aux1447z00_817;
BgL_aux1447z00_817 = 
BGl_errorz00zz__errorz00(BGl_string1485z00zz__r4_characters_6_6z00, BGl_string1486z00zz__r4_characters_6_6z00, 
BINT(BgL_intz00_28)); 
if(
CHARP(BgL_aux1447z00_817))
{ /* Ieee/char.scm 258 */
BgL_auxz00_1178 = BgL_aux1447z00_817
; }  else 
{ 
obj_t BgL_auxz00_1183;
BgL_auxz00_1183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)11933)), BGl_string1485z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_aux1447z00_817); 
FAILURE(BgL_auxz00_1183,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_auxz00_1178);} } } 
}



/* _integer->char */
obj_t BGl__integerzd2ze3charz31zz__r4_characters_6_6z00(obj_t BgL_envz00_749, obj_t BgL_intz00_750)
{ AN_OBJECT;
{ /* Ieee/char.scm 255 */
{ /* Ieee/char.scm 256 */
unsigned char BgL_auxz00_1188;
{ /* Ieee/char.scm 256 */
long BgL_auxz00_1189;
{ /* Ieee/char.scm 256 */
obj_t BgL_auxz00_1190;
if(
INTEGERP(BgL_intz00_750))
{ /* Ieee/char.scm 256 */
BgL_auxz00_1190 = BgL_intz00_750
; }  else 
{ 
obj_t BgL_auxz00_1193;
BgL_auxz00_1193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)11859)), BGl_string1487z00zz__r4_characters_6_6z00, BGl_string1488z00zz__r4_characters_6_6z00, BgL_intz00_750); 
FAILURE(BgL_auxz00_1193,BFALSE,BFALSE);} 
BgL_auxz00_1189 = 
(long)CINT(BgL_auxz00_1190); } 
BgL_auxz00_1188 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_auxz00_1189); } 
return 
BCHAR(BgL_auxz00_1188);} } 
}



/* integer->char-ur */
BGL_EXPORTED_DEF unsigned char BGl_integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(long BgL_intz00_29)
{ AN_OBJECT;
{ /* Ieee/char.scm 263 */
return 
(BgL_intz00_29);} 
}



/* _integer->char-ur */
obj_t BGl__integerzd2ze3charzd2urze3zz__r4_characters_6_6z00(obj_t BgL_envz00_751, obj_t BgL_intz00_752)
{ AN_OBJECT;
{ /* Ieee/char.scm 263 */
{ /* Ieee/char.scm 264 */
unsigned char BgL_auxz00_1201;
{ /* Ieee/char.scm 264 */
long BgL_intz00_864;
{ /* Ieee/char.scm 264 */
obj_t BgL_auxz00_1202;
if(
INTEGERP(BgL_intz00_752))
{ /* Ieee/char.scm 264 */
BgL_auxz00_1202 = BgL_intz00_752
; }  else 
{ 
obj_t BgL_auxz00_1205;
BgL_auxz00_1205 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)12250)), BGl_string1489z00zz__r4_characters_6_6z00, BGl_string1488z00zz__r4_characters_6_6z00, BgL_intz00_752); 
FAILURE(BgL_auxz00_1205,BFALSE,BFALSE);} 
BgL_intz00_864 = 
(long)CINT(BgL_auxz00_1202); } 
BgL_auxz00_1201 = 
(BgL_intz00_864); } 
return 
BCHAR(BgL_auxz00_1201);} } 
}



/* char-upcase */
BGL_EXPORTED_DEF unsigned char BGl_charzd2upcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_30)
{ AN_OBJECT;
{ /* Ieee/char.scm 269 */
return 
toupper(BgL_charz00_30);} 
}



/* _char-upcase */
obj_t BGl__charzd2upcasezd2zz__r4_characters_6_6z00(obj_t BgL_envz00_753, obj_t BgL_charz00_754)
{ AN_OBJECT;
{ /* Ieee/char.scm 269 */
{ /* Ieee/char.scm 270 */
unsigned char BgL_auxz00_1213;
{ /* Ieee/char.scm 270 */
unsigned char BgL_charz00_865;
{ /* Ieee/char.scm 270 */
obj_t BgL_auxz00_1214;
if(
CHARP(BgL_charz00_754))
{ /* Ieee/char.scm 270 */
BgL_auxz00_1214 = BgL_charz00_754
; }  else 
{ 
obj_t BgL_auxz00_1217;
BgL_auxz00_1217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)12534)), BGl_string1490z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_754); 
FAILURE(BgL_auxz00_1217,BFALSE,BFALSE);} 
BgL_charz00_865 = 
CCHAR(BgL_auxz00_1214); } 
BgL_auxz00_1213 = 
toupper(BgL_charz00_865); } 
return 
BCHAR(BgL_auxz00_1213);} } 
}



/* char-downcase */
BGL_EXPORTED_DEF unsigned char BGl_charzd2downcasezd2zz__r4_characters_6_6z00(unsigned char BgL_charz00_31)
{ AN_OBJECT;
{ /* Ieee/char.scm 275 */
return 
tolower(BgL_charz00_31);} 
}



/* _char-downcase */
obj_t BGl__charzd2downcasezd2zz__r4_characters_6_6z00(obj_t BgL_envz00_755, obj_t BgL_charz00_756)
{ AN_OBJECT;
{ /* Ieee/char.scm 275 */
{ /* Ieee/char.scm 276 */
unsigned char BgL_auxz00_1225;
{ /* Ieee/char.scm 276 */
unsigned char BgL_charz00_866;
{ /* Ieee/char.scm 276 */
obj_t BgL_auxz00_1226;
if(
CHARP(BgL_charz00_756))
{ /* Ieee/char.scm 276 */
BgL_auxz00_1226 = BgL_charz00_756
; }  else 
{ 
obj_t BgL_auxz00_1229;
BgL_auxz00_1229 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)12819)), BGl_string1491z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_charz00_756); 
FAILURE(BgL_auxz00_1229,BFALSE,BFALSE);} 
BgL_charz00_866 = 
CCHAR(BgL_auxz00_1226); } 
BgL_auxz00_1225 = 
tolower(BgL_charz00_866); } 
return 
BCHAR(BgL_auxz00_1225);} } 
}



/* char-or */
BGL_EXPORTED_DEF unsigned char BGl_charzd2orzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_32, unsigned char BgL_char2z00_33)
{ AN_OBJECT;
{ /* Ieee/char.scm 281 */
return 
(BgL_char1z00_32|BgL_char2z00_33);} 
}



/* _char-or */
obj_t BGl__charzd2orzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_757, obj_t BgL_char1z00_758, obj_t BgL_char2z00_759)
{ AN_OBJECT;
{ /* Ieee/char.scm 281 */
{ /* Ieee/char.scm 282 */
unsigned char BgL_auxz00_1237;
{ /* Ieee/char.scm 282 */
unsigned char BgL_char1z00_867;unsigned char BgL_char2z00_868;
{ /* Ieee/char.scm 282 */
obj_t BgL_auxz00_1238;
if(
CHARP(BgL_char1z00_758))
{ /* Ieee/char.scm 282 */
BgL_auxz00_1238 = BgL_char1z00_758
; }  else 
{ 
obj_t BgL_auxz00_1241;
BgL_auxz00_1241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)13113)), BGl_string1492z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_758); 
FAILURE(BgL_auxz00_1241,BFALSE,BFALSE);} 
BgL_char1z00_867 = 
CCHAR(BgL_auxz00_1238); } 
{ /* Ieee/char.scm 282 */
obj_t BgL_auxz00_1246;
if(
CHARP(BgL_char2z00_759))
{ /* Ieee/char.scm 282 */
BgL_auxz00_1246 = BgL_char2z00_759
; }  else 
{ 
obj_t BgL_auxz00_1249;
BgL_auxz00_1249 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)13113)), BGl_string1492z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_759); 
FAILURE(BgL_auxz00_1249,BFALSE,BFALSE);} 
BgL_char2z00_868 = 
CCHAR(BgL_auxz00_1246); } 
BgL_auxz00_1237 = 
(BgL_char1z00_867|BgL_char2z00_868); } 
return 
BCHAR(BgL_auxz00_1237);} } 
}



/* char-and */
BGL_EXPORTED_DEF unsigned char BGl_charzd2andzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_34, unsigned char BgL_char2z00_35)
{ AN_OBJECT;
{ /* Ieee/char.scm 287 */
return 
(BgL_char1z00_34&BgL_char2z00_35);} 
}



/* _char-and */
obj_t BGl__charzd2andzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_760, obj_t BgL_char1z00_761, obj_t BgL_char2z00_762)
{ AN_OBJECT;
{ /* Ieee/char.scm 287 */
{ /* Ieee/char.scm 288 */
unsigned char BgL_auxz00_1257;
{ /* Ieee/char.scm 288 */
unsigned char BgL_char1z00_869;unsigned char BgL_char2z00_870;
{ /* Ieee/char.scm 288 */
obj_t BgL_auxz00_1258;
if(
CHARP(BgL_char1z00_761))
{ /* Ieee/char.scm 288 */
BgL_auxz00_1258 = BgL_char1z00_761
; }  else 
{ 
obj_t BgL_auxz00_1261;
BgL_auxz00_1261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)13402)), BGl_string1493z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_761); 
FAILURE(BgL_auxz00_1261,BFALSE,BFALSE);} 
BgL_char1z00_869 = 
CCHAR(BgL_auxz00_1258); } 
{ /* Ieee/char.scm 288 */
obj_t BgL_auxz00_1266;
if(
CHARP(BgL_char2z00_762))
{ /* Ieee/char.scm 288 */
BgL_auxz00_1266 = BgL_char2z00_762
; }  else 
{ 
obj_t BgL_auxz00_1269;
BgL_auxz00_1269 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)13402)), BGl_string1493z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char2z00_762); 
FAILURE(BgL_auxz00_1269,BFALSE,BFALSE);} 
BgL_char2z00_870 = 
CCHAR(BgL_auxz00_1266); } 
BgL_auxz00_1257 = 
(BgL_char1z00_869&BgL_char2z00_870); } 
return 
BCHAR(BgL_auxz00_1257);} } 
}



/* char-not */
BGL_EXPORTED_DEF unsigned char BGl_charzd2notzd2zz__r4_characters_6_6z00(unsigned char BgL_char1z00_36)
{ AN_OBJECT;
{ /* Ieee/char.scm 293 */
return 
~(BgL_char1z00_36);} 
}



/* _char-not */
obj_t BGl__charzd2notzd2zz__r4_characters_6_6z00(obj_t BgL_envz00_763, obj_t BgL_char1z00_764)
{ AN_OBJECT;
{ /* Ieee/char.scm 293 */
{ /* Ieee/char.scm 294 */
unsigned char BgL_auxz00_1277;
{ /* Ieee/char.scm 294 */
unsigned char BgL_char1z00_871;
{ /* Ieee/char.scm 294 */
obj_t BgL_auxz00_1278;
if(
CHARP(BgL_char1z00_764))
{ /* Ieee/char.scm 294 */
BgL_auxz00_1278 = BgL_char1z00_764
; }  else 
{ 
obj_t BgL_auxz00_1281;
BgL_auxz00_1281 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1467z00zz__r4_characters_6_6z00, 
BINT(((long)13686)), BGl_string1494z00zz__r4_characters_6_6z00, BGl_string1469z00zz__r4_characters_6_6z00, BgL_char1z00_764); 
FAILURE(BgL_auxz00_1281,BFALSE,BFALSE);} 
BgL_char1z00_871 = 
CCHAR(BgL_auxz00_1278); } 
BgL_auxz00_1277 = 
~(BgL_char1z00_871); } 
return 
BCHAR(BgL_auxz00_1277);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_characters_6_6z00()
{ AN_OBJECT;
{ /* Ieee/char.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1495z00zz__r4_characters_6_6z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string1495z00zz__r4_characters_6_6z00));} 
}

#ifdef __cplusplus
}
#endif
