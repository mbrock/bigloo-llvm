/*===========================================================================*/
/*   (Llib/ucs2.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/ucs2.scm -indent -o objs/obj_s/Llib/ucs2.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern bool_t ucs2_digitp(ucs2_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__charzd2ze3ucs2z31zz__ucs2z00(obj_t, obj_t);
static obj_t BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2ze3charz31zz__ucs2z00(obj_t, obj_t);
static obj_t BGl__ucs2ze3zd3zf3zc3zz__ucs2z00(obj_t, obj_t, obj_t);
extern bool_t ucs2_upperp(ucs2_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
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
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t, ucs2_t);
static obj_t BGl__integerzd2ze3ucs2z31zz__ucs2z00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t);
static obj_t BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00(obj_t, obj_t);
static obj_t BGl__ucs2ze3zf3z10zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00(obj_t, obj_t, obj_t);
static obj_t BGl__ucs2zd2upcasezd2zz__ucs2z00(obj_t, obj_t);
static obj_t BGl_symbol1508z00zz__ucs2z00 = BUNSPEC;
static obj_t BGl_symbol1498z00zz__ucs2z00 = BUNSPEC;
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


DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2whitespacezf3zd2envzf3zz__ucs2z00, BgL_bgl__ucs2za7d2whitespa1513za7, BGl__ucs2zd2whitespacezf3z21zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2ze3zd3zf3zd2envz11zz__ucs2z00, BgL_bgl__ucs2za7e3za7d3za7f3za7c1514z00, BGl__ucs2ze3zd3zf3zc3zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2downcasezd2envz00zz__ucs2z00, BgL_bgl__ucs2za7d2downcase1515za7, BGl__ucs2zd2downcasezd2zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zc3zd3zf3zd2envz31zz__ucs2z00, BgL_bgl__ucs2za7c3za7d3za7f3za7e1516z00, BGl__ucs2zc3zd3zf3ze3zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd3zf3zd2envzf2zz__ucs2z00, BgL_bgl__ucs2za7d3za7f3za720za7za71517za7, BGl__ucs2zd3zf3z20zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizd3zf3zd2envz20zz__ucs2z00, BgL_bgl__ucs2za7d2ciza7d3za7f31518za7, BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2lowerzd2casezf3zd2envz21zz__ucs2z00, BgL_bgl__ucs2za7d2lowerza7d21519z00, BGl__ucs2zd2lowerzd2casezf3zf3zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cize3zd3zf3zd2envzc3zz__ucs2z00, BgL_bgl__ucs2za7d2ciza7e3za7d31520za7, BGl__ucs2zd2cize3zd3zf3z11zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3ucs2zd2envze3zz__ucs2z00, BgL_bgl__integerza7d2za7e3uc1521z00, BGl__integerzd2ze3ucs2z31zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_charzd2ze3ucs2zd2envze3zz__ucs2z00, BgL_bgl__charza7d2za7e3ucs2za71522za7, BGl__charzd2ze3ucs2z31zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2ze3integerzd2envze3zz__ucs2z00, BgL_bgl__ucs2za7d2za7e3integ1523z00, BGl__ucs2zd2ze3integerz31zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2numericzf3zd2envzf3zz__ucs2z00, BgL_bgl__ucs2za7d2numericza71524z00, BGl__ucs2zd2numericzf3z21zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizc3zd3zf3zd2envze3zz__ucs2z00, BgL_bgl__ucs2za7d2ciza7c3za7d31525za7, BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_integerzd2ze3ucs2zd2urzd2envz31zz__ucs2z00, BgL_bgl__integerza7d2za7e3uc1526z00, BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2ze3charzd2envze3zz__ucs2z00, BgL_bgl__ucs2za7d2za7e3charza71527za7, BGl__ucs2zd2ze3charz31zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1480z00zz__ucs2z00, BgL_bgl_string1480za700za7za7_1528za7, "_ucs2=?", 7 );
DEFINE_STRING( BGl_string1479z00zz__ucs2z00, BgL_bgl_string1479za700za7za7_1529za7, "/tmp/bigloo/runtime/Llib/ucs2.scm", 33 );
DEFINE_STRING( BGl_string1481z00zz__ucs2z00, BgL_bgl_string1481za700za7za7_1530za7, "ucs2", 4 );
DEFINE_STRING( BGl_string1482z00zz__ucs2z00, BgL_bgl_string1482za700za7za7_1531za7, "_ucs2<?", 7 );
DEFINE_STRING( BGl_string1483z00zz__ucs2z00, BgL_bgl_string1483za700za7za7_1532za7, "_ucs2>?", 7 );
DEFINE_STRING( BGl_string1484z00zz__ucs2z00, BgL_bgl_string1484za700za7za7_1533za7, "_ucs2<=?", 8 );
DEFINE_STRING( BGl_string1485z00zz__ucs2z00, BgL_bgl_string1485za700za7za7_1534za7, "_ucs2>=?", 8 );
DEFINE_STRING( BGl_string1486z00zz__ucs2z00, BgL_bgl_string1486za700za7za7_1535za7, "_ucs2-ci=?", 10 );
DEFINE_STRING( BGl_string1487z00zz__ucs2z00, BgL_bgl_string1487za700za7za7_1536za7, "_ucs2-ci<?", 10 );
DEFINE_STRING( BGl_string1488z00zz__ucs2z00, BgL_bgl_string1488za700za7za7_1537za7, "_ucs2-ci>?", 10 );
DEFINE_STRING( BGl_string1500z00zz__ucs2z00, BgL_bgl_string1500za700za7za7_1538za7, "Undefined UCS-2 character", 25 );
DEFINE_STRING( BGl_string1490z00zz__ucs2z00, BgL_bgl_string1490za700za7za7_1539za7, "_ucs2-ci>=?", 11 );
DEFINE_STRING( BGl_string1489z00zz__ucs2z00, BgL_bgl_string1489za700za7za7_1540za7, "_ucs2-ci<=?", 11 );
DEFINE_STRING( BGl_string1501z00zz__ucs2z00, BgL_bgl_string1501za700za7za7_1541za7, "integer out of range or ", 24 );
DEFINE_STRING( BGl_string1491z00zz__ucs2z00, BgL_bgl_string1491za700za7za7_1542za7, "_ucs2-alphabetic?", 17 );
DEFINE_STRING( BGl_string1502z00zz__ucs2z00, BgL_bgl_string1502za700za7za7_1543za7, "_integer->ucs2", 14 );
DEFINE_STRING( BGl_string1492z00zz__ucs2z00, BgL_bgl_string1492za700za7za7_1544za7, "_ucs2-numeric?", 14 );
DEFINE_STRING( BGl_string1503z00zz__ucs2z00, BgL_bgl_string1503za700za7za7_1545za7, "int", 3 );
DEFINE_STRING( BGl_string1493z00zz__ucs2z00, BgL_bgl_string1493za700za7za7_1546za7, "_ucs2-whitespace?", 17 );
DEFINE_STRING( BGl_string1504z00zz__ucs2z00, BgL_bgl_string1504za700za7za7_1547za7, "_integer->ucs2-ur", 17 );
DEFINE_STRING( BGl_string1494z00zz__ucs2z00, BgL_bgl_string1494za700za7za7_1548za7, "_ucs2-upper-case?", 17 );
DEFINE_STRING( BGl_string1505z00zz__ucs2z00, BgL_bgl_string1505za700za7za7_1549za7, "_ucs2->integer", 14 );
DEFINE_STRING( BGl_string1495z00zz__ucs2z00, BgL_bgl_string1495za700za7za7_1550za7, "_ucs2-lower-case?", 17 );
DEFINE_STRING( BGl_string1506z00zz__ucs2z00, BgL_bgl_string1506za700za7za7_1551za7, "_char->ucs2", 11 );
DEFINE_STRING( BGl_string1496z00zz__ucs2z00, BgL_bgl_string1496za700za7za7_1552za7, "_ucs2-upcase", 12 );
DEFINE_STRING( BGl_string1507z00zz__ucs2z00, BgL_bgl_string1507za700za7za7_1553za7, "char", 4 );
DEFINE_STRING( BGl_string1497z00zz__ucs2z00, BgL_bgl_string1497za700za7za7_1554za7, "_ucs2-downcase", 14 );
DEFINE_STRING( BGl_string1510z00zz__ucs2z00, BgL_bgl_string1510za700za7za7_1555za7, "UCS-2 character out of ISO-LATIN-1 range", 40 );
DEFINE_STRING( BGl_string1509z00zz__ucs2z00, BgL_bgl_string1509za700za7za7_1556za7, "ucs2->char", 10 );
DEFINE_STRING( BGl_string1499z00zz__ucs2z00, BgL_bgl_string1499za700za7za7_1557za7, "integer->ucs2", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zc3zf3zd2envze2zz__ucs2z00, BgL_bgl__ucs2za7c3za7f3za730za7za71558za7, BGl__ucs2zc3zf3z30zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1511z00zz__ucs2z00, BgL_bgl_string1511za700za7za7_1559za7, "_ucs2->char", 11 );
DEFINE_STRING( BGl_string1512z00zz__ucs2z00, BgL_bgl_string1512za700za7za7_1560za7, "__ucs2", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cizc3zf3zd2envz30zz__ucs2z00, BgL_bgl__ucs2za7d2ciza7c3za7f31561za7, BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2upcasezd2envz00zz__ucs2z00, BgL_bgl__ucs2za7d2upcaseza7d1562z00, BGl__ucs2zd2upcasezd2zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2upperzd2casezf3zd2envz21zz__ucs2z00, BgL_bgl__ucs2za7d2upperza7d21563z00, BGl__ucs2zd2upperzd2casezf3zf3zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zf3zd2envz21zz__ucs2z00, BgL_bgl__ucs2za7f3za7f3za7za7__u1564z00, BGl__ucs2zf3zf3zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2alphabeticzf3zd2envzf3zz__ucs2z00, BgL_bgl__ucs2za7d2alphabet1565za7, BGl__ucs2zd2alphabeticzf3z21zz__ucs2z00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2ze3zf3zd2envzc2zz__ucs2z00, BgL_bgl__ucs2za7e3za7f3za710za7za71566za7, BGl__ucs2ze3zf3z10zz__ucs2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ucs2zd2cize3zf3zd2envz10zz__ucs2z00, BgL_bgl__ucs2za7d2ciza7e3za7f31567za7, BGl__ucs2zd2cize3zf3zc2zz__ucs2z00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__ucs2z00(long BgL_checksumz00_922, char * BgL_fromz00_923)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__ucs2z00))
{ 
BGl_requirezd2initializa7ationz75zz__ucs2z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__ucs2z00(); 
BGl_importedzd2moduleszd2initz00zz__ucs2z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__ucs2z00()
{ AN_OBJECT;
{ /* Llib/ucs2.scm 14 */
BGl_symbol1498z00zz__ucs2z00 = 
bstring_to_symbol(BGl_string1499z00zz__ucs2z00); 
return ( 
BGl_symbol1508z00zz__ucs2z00 = 
bstring_to_symbol(BGl_string1509z00zz__ucs2z00), BUNSPEC) ;} 
}



/* ucs2? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zf3zf3zz__ucs2z00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 146 */
return 
UCS2P(BgL_objz00_1);} 
}



/* _ucs2? */
obj_t BGl__ucs2zf3zf3zz__ucs2z00(obj_t BgL_envz00_765, obj_t BgL_objz00_766)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 146 */
return 
BBOOL(
UCS2P(BgL_objz00_766));} 
}



/* ucs2=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd3zf3z20zz__ucs2z00(ucs2_t BgL_ucs2az00_2, ucs2_t BgL_ucs2bz00_3)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 152 */
return 
(BgL_ucs2az00_2==BgL_ucs2bz00_3);} 
}



/* _ucs2=? */
obj_t BGl__ucs2zd3zf3z20zz__ucs2z00(obj_t BgL_envz00_767, obj_t BgL_ucs2az00_768, obj_t BgL_ucs2bz00_769)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 152 */
{ /* Llib/ucs2.scm 153 */
bool_t BgL_auxz00_935;
{ /* Llib/ucs2.scm 153 */
ucs2_t BgL_ucs2az00_892;ucs2_t BgL_ucs2bz00_893;
{ /* Llib/ucs2.scm 153 */
obj_t BgL_auxz00_936;
if(
UCS2P(BgL_ucs2az00_768))
{ /* Llib/ucs2.scm 153 */
BgL_auxz00_936 = BgL_ucs2az00_768
; }  else 
{ 
obj_t BgL_auxz00_939;
BgL_auxz00_939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6353)), BGl_string1480z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_768); 
FAILURE(BgL_auxz00_939,BFALSE,BFALSE);} 
BgL_ucs2az00_892 = 
CUCS2(BgL_auxz00_936); } 
{ /* Llib/ucs2.scm 153 */
obj_t BgL_auxz00_944;
if(
UCS2P(BgL_ucs2bz00_769))
{ /* Llib/ucs2.scm 153 */
BgL_auxz00_944 = BgL_ucs2bz00_769
; }  else 
{ 
obj_t BgL_auxz00_947;
BgL_auxz00_947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6353)), BGl_string1480z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_769); 
FAILURE(BgL_auxz00_947,BFALSE,BFALSE);} 
BgL_ucs2bz00_893 = 
CUCS2(BgL_auxz00_944); } 
BgL_auxz00_935 = 
(BgL_ucs2az00_892==BgL_ucs2bz00_893); } 
return 
BBOOL(BgL_auxz00_935);} } 
}



/* ucs2<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zf3z30zz__ucs2z00(ucs2_t BgL_ucs2az00_4, ucs2_t BgL_ucs2bz00_5)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 158 */
return 
(BgL_ucs2az00_4<BgL_ucs2bz00_5);} 
}



/* _ucs2<? */
obj_t BGl__ucs2zc3zf3z30zz__ucs2z00(obj_t BgL_envz00_770, obj_t BgL_ucs2az00_771, obj_t BgL_ucs2bz00_772)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 158 */
{ /* Llib/ucs2.scm 159 */
bool_t BgL_auxz00_955;
{ /* Llib/ucs2.scm 159 */
ucs2_t BgL_ucs2az00_894;ucs2_t BgL_ucs2bz00_895;
{ /* Llib/ucs2.scm 159 */
obj_t BgL_auxz00_956;
if(
UCS2P(BgL_ucs2az00_771))
{ /* Llib/ucs2.scm 159 */
BgL_auxz00_956 = BgL_ucs2az00_771
; }  else 
{ 
obj_t BgL_auxz00_959;
BgL_auxz00_959 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6639)), BGl_string1482z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_771); 
FAILURE(BgL_auxz00_959,BFALSE,BFALSE);} 
BgL_ucs2az00_894 = 
CUCS2(BgL_auxz00_956); } 
{ /* Llib/ucs2.scm 159 */
obj_t BgL_auxz00_964;
if(
UCS2P(BgL_ucs2bz00_772))
{ /* Llib/ucs2.scm 159 */
BgL_auxz00_964 = BgL_ucs2bz00_772
; }  else 
{ 
obj_t BgL_auxz00_967;
BgL_auxz00_967 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6639)), BGl_string1482z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_772); 
FAILURE(BgL_auxz00_967,BFALSE,BFALSE);} 
BgL_ucs2bz00_895 = 
CUCS2(BgL_auxz00_964); } 
BgL_auxz00_955 = 
(BgL_ucs2az00_894<BgL_ucs2bz00_895); } 
return 
BBOOL(BgL_auxz00_955);} } 
}



/* ucs2>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zf3z10zz__ucs2z00(ucs2_t BgL_ucs2az00_6, ucs2_t BgL_ucs2bz00_7)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 164 */
return 
(BgL_ucs2az00_6>BgL_ucs2bz00_7);} 
}



/* _ucs2>? */
obj_t BGl__ucs2ze3zf3z10zz__ucs2z00(obj_t BgL_envz00_773, obj_t BgL_ucs2az00_774, obj_t BgL_ucs2bz00_775)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 164 */
{ /* Llib/ucs2.scm 165 */
bool_t BgL_auxz00_975;
{ /* Llib/ucs2.scm 165 */
ucs2_t BgL_ucs2az00_896;ucs2_t BgL_ucs2bz00_897;
{ /* Llib/ucs2.scm 165 */
obj_t BgL_auxz00_976;
if(
UCS2P(BgL_ucs2az00_774))
{ /* Llib/ucs2.scm 165 */
BgL_auxz00_976 = BgL_ucs2az00_774
; }  else 
{ 
obj_t BgL_auxz00_979;
BgL_auxz00_979 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6926)), BGl_string1483z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_774); 
FAILURE(BgL_auxz00_979,BFALSE,BFALSE);} 
BgL_ucs2az00_896 = 
CUCS2(BgL_auxz00_976); } 
{ /* Llib/ucs2.scm 165 */
obj_t BgL_auxz00_984;
if(
UCS2P(BgL_ucs2bz00_775))
{ /* Llib/ucs2.scm 165 */
BgL_auxz00_984 = BgL_ucs2bz00_775
; }  else 
{ 
obj_t BgL_auxz00_987;
BgL_auxz00_987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)6926)), BGl_string1483z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_775); 
FAILURE(BgL_auxz00_987,BFALSE,BFALSE);} 
BgL_ucs2bz00_897 = 
CUCS2(BgL_auxz00_984); } 
BgL_auxz00_975 = 
(BgL_ucs2az00_896>BgL_ucs2bz00_897); } 
return 
BBOOL(BgL_auxz00_975);} } 
}



/* ucs2<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zc3zd3zf3ze3zz__ucs2z00(ucs2_t BgL_ucs2az00_8, ucs2_t BgL_ucs2bz00_9)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 170 */
return 
(BgL_ucs2az00_8<=BgL_ucs2bz00_9);} 
}



/* _ucs2<=? */
obj_t BGl__ucs2zc3zd3zf3ze3zz__ucs2z00(obj_t BgL_envz00_776, obj_t BgL_ucs2az00_777, obj_t BgL_ucs2bz00_778)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 170 */
{ /* Llib/ucs2.scm 171 */
bool_t BgL_auxz00_995;
{ /* Llib/ucs2.scm 171 */
ucs2_t BgL_ucs2az00_898;ucs2_t BgL_ucs2bz00_899;
{ /* Llib/ucs2.scm 171 */
obj_t BgL_auxz00_996;
if(
UCS2P(BgL_ucs2az00_777))
{ /* Llib/ucs2.scm 171 */
BgL_auxz00_996 = BgL_ucs2az00_777
; }  else 
{ 
obj_t BgL_auxz00_999;
BgL_auxz00_999 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7213)), BGl_string1484z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_777); 
FAILURE(BgL_auxz00_999,BFALSE,BFALSE);} 
BgL_ucs2az00_898 = 
CUCS2(BgL_auxz00_996); } 
{ /* Llib/ucs2.scm 171 */
obj_t BgL_auxz00_1004;
if(
UCS2P(BgL_ucs2bz00_778))
{ /* Llib/ucs2.scm 171 */
BgL_auxz00_1004 = BgL_ucs2bz00_778
; }  else 
{ 
obj_t BgL_auxz00_1007;
BgL_auxz00_1007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7213)), BGl_string1484z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_778); 
FAILURE(BgL_auxz00_1007,BFALSE,BFALSE);} 
BgL_ucs2bz00_899 = 
CUCS2(BgL_auxz00_1004); } 
BgL_auxz00_995 = 
(BgL_ucs2az00_898<=BgL_ucs2bz00_899); } 
return 
BBOOL(BgL_auxz00_995);} } 
}



/* ucs2>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2ze3zd3zf3zc3zz__ucs2z00(ucs2_t BgL_ucs2az00_10, ucs2_t BgL_ucs2bz00_11)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 176 */
return 
(BgL_ucs2az00_10>BgL_ucs2bz00_11);} 
}



/* _ucs2>=? */
obj_t BGl__ucs2ze3zd3zf3zc3zz__ucs2z00(obj_t BgL_envz00_779, obj_t BgL_ucs2az00_780, obj_t BgL_ucs2bz00_781)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 176 */
{ /* Llib/ucs2.scm 177 */
bool_t BgL_auxz00_1015;
{ /* Llib/ucs2.scm 177 */
ucs2_t BgL_ucs2az00_900;ucs2_t BgL_ucs2bz00_901;
{ /* Llib/ucs2.scm 177 */
obj_t BgL_auxz00_1016;
if(
UCS2P(BgL_ucs2az00_780))
{ /* Llib/ucs2.scm 177 */
BgL_auxz00_1016 = BgL_ucs2az00_780
; }  else 
{ 
obj_t BgL_auxz00_1019;
BgL_auxz00_1019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7502)), BGl_string1485z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_780); 
FAILURE(BgL_auxz00_1019,BFALSE,BFALSE);} 
BgL_ucs2az00_900 = 
CUCS2(BgL_auxz00_1016); } 
{ /* Llib/ucs2.scm 177 */
obj_t BgL_auxz00_1024;
if(
UCS2P(BgL_ucs2bz00_781))
{ /* Llib/ucs2.scm 177 */
BgL_auxz00_1024 = BgL_ucs2bz00_781
; }  else 
{ 
obj_t BgL_auxz00_1027;
BgL_auxz00_1027 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7502)), BGl_string1485z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_781); 
FAILURE(BgL_auxz00_1027,BFALSE,BFALSE);} 
BgL_ucs2bz00_901 = 
CUCS2(BgL_auxz00_1024); } 
BgL_auxz00_1015 = 
(BgL_ucs2az00_900>BgL_ucs2bz00_901); } 
return 
BBOOL(BgL_auxz00_1015);} } 
}



/* ucs2-ci=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizd3zf3zf2zz__ucs2z00(ucs2_t BgL_ucs2az00_12, ucs2_t BgL_ucs2bz00_13)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 182 */
return 
(
ucs2_toupper(BgL_ucs2az00_12)==
ucs2_toupper(BgL_ucs2bz00_13));} 
}



/* _ucs2-ci=? */
obj_t BGl__ucs2zd2cizd3zf3zf2zz__ucs2z00(obj_t BgL_envz00_782, obj_t BgL_ucs2az00_783, obj_t BgL_ucs2bz00_784)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 182 */
{ /* Llib/ucs2.scm 183 */
bool_t BgL_auxz00_1037;
{ /* Llib/ucs2.scm 183 */
ucs2_t BgL_ucs2az00_902;ucs2_t BgL_ucs2bz00_903;
{ /* Llib/ucs2.scm 183 */
obj_t BgL_auxz00_1038;
if(
UCS2P(BgL_ucs2az00_783))
{ /* Llib/ucs2.scm 183 */
BgL_auxz00_1038 = BgL_ucs2az00_783
; }  else 
{ 
obj_t BgL_auxz00_1041;
BgL_auxz00_1041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7799)), BGl_string1486z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_783); 
FAILURE(BgL_auxz00_1041,BFALSE,BFALSE);} 
BgL_ucs2az00_902 = 
CUCS2(BgL_auxz00_1038); } 
{ /* Llib/ucs2.scm 183 */
obj_t BgL_auxz00_1046;
if(
UCS2P(BgL_ucs2bz00_784))
{ /* Llib/ucs2.scm 183 */
BgL_auxz00_1046 = BgL_ucs2bz00_784
; }  else 
{ 
obj_t BgL_auxz00_1049;
BgL_auxz00_1049 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)7799)), BGl_string1486z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_784); 
FAILURE(BgL_auxz00_1049,BFALSE,BFALSE);} 
BgL_ucs2bz00_903 = 
CUCS2(BgL_auxz00_1046); } 
BgL_auxz00_1037 = 
(
ucs2_toupper(BgL_ucs2az00_902)==
ucs2_toupper(BgL_ucs2bz00_903)); } 
return 
BBOOL(BgL_auxz00_1037);} } 
}



/* ucs2-ci<? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zf3ze2zz__ucs2z00(ucs2_t BgL_ucs2az00_14, ucs2_t BgL_ucs2bz00_15)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 188 */
return 
(
ucs2_toupper(BgL_ucs2az00_14)<
ucs2_toupper(BgL_ucs2bz00_15));} 
}



/* _ucs2-ci<? */
obj_t BGl__ucs2zd2cizc3zf3ze2zz__ucs2z00(obj_t BgL_envz00_785, obj_t BgL_ucs2az00_786, obj_t BgL_ucs2bz00_787)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 188 */
{ /* Llib/ucs2.scm 189 */
bool_t BgL_auxz00_1061;
{ /* Llib/ucs2.scm 189 */
ucs2_t BgL_ucs2az00_904;ucs2_t BgL_ucs2bz00_905;
{ /* Llib/ucs2.scm 189 */
obj_t BgL_auxz00_1062;
if(
UCS2P(BgL_ucs2az00_786))
{ /* Llib/ucs2.scm 189 */
BgL_auxz00_1062 = BgL_ucs2az00_786
; }  else 
{ 
obj_t BgL_auxz00_1065;
BgL_auxz00_1065 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8114)), BGl_string1487z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_786); 
FAILURE(BgL_auxz00_1065,BFALSE,BFALSE);} 
BgL_ucs2az00_904 = 
CUCS2(BgL_auxz00_1062); } 
{ /* Llib/ucs2.scm 189 */
obj_t BgL_auxz00_1070;
if(
UCS2P(BgL_ucs2bz00_787))
{ /* Llib/ucs2.scm 189 */
BgL_auxz00_1070 = BgL_ucs2bz00_787
; }  else 
{ 
obj_t BgL_auxz00_1073;
BgL_auxz00_1073 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8114)), BGl_string1487z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_787); 
FAILURE(BgL_auxz00_1073,BFALSE,BFALSE);} 
BgL_ucs2bz00_905 = 
CUCS2(BgL_auxz00_1070); } 
BgL_auxz00_1061 = 
(
ucs2_toupper(BgL_ucs2az00_904)<
ucs2_toupper(BgL_ucs2bz00_905)); } 
return 
BBOOL(BgL_auxz00_1061);} } 
}



/* ucs2-ci>? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zf3zc2zz__ucs2z00(ucs2_t BgL_ucs2az00_16, ucs2_t BgL_ucs2bz00_17)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 194 */
return 
(
ucs2_toupper(BgL_ucs2az00_16)>
ucs2_toupper(BgL_ucs2bz00_17));} 
}



/* _ucs2-ci>? */
obj_t BGl__ucs2zd2cize3zf3zc2zz__ucs2z00(obj_t BgL_envz00_788, obj_t BgL_ucs2az00_789, obj_t BgL_ucs2bz00_790)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 194 */
{ /* Llib/ucs2.scm 195 */
bool_t BgL_auxz00_1085;
{ /* Llib/ucs2.scm 195 */
ucs2_t BgL_ucs2az00_906;ucs2_t BgL_ucs2bz00_907;
{ /* Llib/ucs2.scm 195 */
obj_t BgL_auxz00_1086;
if(
UCS2P(BgL_ucs2az00_789))
{ /* Llib/ucs2.scm 195 */
BgL_auxz00_1086 = BgL_ucs2az00_789
; }  else 
{ 
obj_t BgL_auxz00_1089;
BgL_auxz00_1089 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8431)), BGl_string1488z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_789); 
FAILURE(BgL_auxz00_1089,BFALSE,BFALSE);} 
BgL_ucs2az00_906 = 
CUCS2(BgL_auxz00_1086); } 
{ /* Llib/ucs2.scm 195 */
obj_t BgL_auxz00_1094;
if(
UCS2P(BgL_ucs2bz00_790))
{ /* Llib/ucs2.scm 195 */
BgL_auxz00_1094 = BgL_ucs2bz00_790
; }  else 
{ 
obj_t BgL_auxz00_1097;
BgL_auxz00_1097 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8431)), BGl_string1488z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_790); 
FAILURE(BgL_auxz00_1097,BFALSE,BFALSE);} 
BgL_ucs2bz00_907 = 
CUCS2(BgL_auxz00_1094); } 
BgL_auxz00_1085 = 
(
ucs2_toupper(BgL_ucs2az00_906)>
ucs2_toupper(BgL_ucs2bz00_907)); } 
return 
BBOOL(BgL_auxz00_1085);} } 
}



/* ucs2-ci<=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cizc3zd3zf3z31zz__ucs2z00(ucs2_t BgL_ucs2az00_18, ucs2_t BgL_ucs2bz00_19)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 200 */
return 
(
ucs2_toupper(BgL_ucs2az00_18)<=
ucs2_toupper(BgL_ucs2bz00_19));} 
}



/* _ucs2-ci<=? */
obj_t BGl__ucs2zd2cizc3zd3zf3z31zz__ucs2z00(obj_t BgL_envz00_791, obj_t BgL_ucs2az00_792, obj_t BgL_ucs2bz00_793)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 200 */
{ /* Llib/ucs2.scm 201 */
bool_t BgL_auxz00_1109;
{ /* Llib/ucs2.scm 201 */
ucs2_t BgL_ucs2az00_908;ucs2_t BgL_ucs2bz00_909;
{ /* Llib/ucs2.scm 201 */
obj_t BgL_auxz00_1110;
if(
UCS2P(BgL_ucs2az00_792))
{ /* Llib/ucs2.scm 201 */
BgL_auxz00_1110 = BgL_ucs2az00_792
; }  else 
{ 
obj_t BgL_auxz00_1113;
BgL_auxz00_1113 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8748)), BGl_string1489z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_792); 
FAILURE(BgL_auxz00_1113,BFALSE,BFALSE);} 
BgL_ucs2az00_908 = 
CUCS2(BgL_auxz00_1110); } 
{ /* Llib/ucs2.scm 201 */
obj_t BgL_auxz00_1118;
if(
UCS2P(BgL_ucs2bz00_793))
{ /* Llib/ucs2.scm 201 */
BgL_auxz00_1118 = BgL_ucs2bz00_793
; }  else 
{ 
obj_t BgL_auxz00_1121;
BgL_auxz00_1121 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)8748)), BGl_string1489z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_793); 
FAILURE(BgL_auxz00_1121,BFALSE,BFALSE);} 
BgL_ucs2bz00_909 = 
CUCS2(BgL_auxz00_1118); } 
BgL_auxz00_1109 = 
(
ucs2_toupper(BgL_ucs2az00_908)<=
ucs2_toupper(BgL_ucs2bz00_909)); } 
return 
BBOOL(BgL_auxz00_1109);} } 
}



/* ucs2-ci>=? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2cize3zd3zf3z11zz__ucs2z00(ucs2_t BgL_ucs2az00_20, ucs2_t BgL_ucs2bz00_21)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 206 */
return 
(
ucs2_toupper(BgL_ucs2az00_20)>
ucs2_toupper(BgL_ucs2bz00_21));} 
}



/* _ucs2-ci>=? */
obj_t BGl__ucs2zd2cize3zd3zf3z11zz__ucs2z00(obj_t BgL_envz00_794, obj_t BgL_ucs2az00_795, obj_t BgL_ucs2bz00_796)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 206 */
{ /* Llib/ucs2.scm 207 */
bool_t BgL_auxz00_1133;
{ /* Llib/ucs2.scm 207 */
ucs2_t BgL_ucs2az00_910;ucs2_t BgL_ucs2bz00_911;
{ /* Llib/ucs2.scm 207 */
obj_t BgL_auxz00_1134;
if(
UCS2P(BgL_ucs2az00_795))
{ /* Llib/ucs2.scm 207 */
BgL_auxz00_1134 = BgL_ucs2az00_795
; }  else 
{ 
obj_t BgL_auxz00_1137;
BgL_auxz00_1137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)9065)), BGl_string1490z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2az00_795); 
FAILURE(BgL_auxz00_1137,BFALSE,BFALSE);} 
BgL_ucs2az00_910 = 
CUCS2(BgL_auxz00_1134); } 
{ /* Llib/ucs2.scm 207 */
obj_t BgL_auxz00_1142;
if(
UCS2P(BgL_ucs2bz00_796))
{ /* Llib/ucs2.scm 207 */
BgL_auxz00_1142 = BgL_ucs2bz00_796
; }  else 
{ 
obj_t BgL_auxz00_1145;
BgL_auxz00_1145 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)9065)), BGl_string1490z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2bz00_796); 
FAILURE(BgL_auxz00_1145,BFALSE,BFALSE);} 
BgL_ucs2bz00_911 = 
CUCS2(BgL_auxz00_1142); } 
BgL_auxz00_1133 = 
(
ucs2_toupper(BgL_ucs2az00_910)>
ucs2_toupper(BgL_ucs2bz00_911)); } 
return 
BBOOL(BgL_auxz00_1133);} } 
}



/* ucs2-alphabetic? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2alphabeticzf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_22)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 212 */
return 
ucs2_letterp(BgL_ucs2z00_22);} 
}



/* _ucs2-alphabetic? */
obj_t BGl__ucs2zd2alphabeticzf3z21zz__ucs2z00(obj_t BgL_envz00_797, obj_t BgL_ucs2z00_798)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 212 */
{ /* Llib/ucs2.scm 213 */
bool_t BgL_auxz00_1155;
{ /* Llib/ucs2.scm 213 */
ucs2_t BgL_ucs2z00_912;
{ /* Llib/ucs2.scm 213 */
obj_t BgL_auxz00_1156;
if(
UCS2P(BgL_ucs2z00_798))
{ /* Llib/ucs2.scm 213 */
BgL_auxz00_1156 = BgL_ucs2z00_798
; }  else 
{ 
obj_t BgL_auxz00_1159;
BgL_auxz00_1159 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)9372)), BGl_string1491z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_798); 
FAILURE(BgL_auxz00_1159,BFALSE,BFALSE);} 
BgL_ucs2z00_912 = 
CUCS2(BgL_auxz00_1156); } 
BgL_auxz00_1155 = 
ucs2_letterp(BgL_ucs2z00_912); } 
return 
BBOOL(BgL_auxz00_1155);} } 
}



/* ucs2-numeric? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2numericzf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_23)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 218 */
return 
ucs2_digitp(BgL_ucs2z00_23);} 
}



/* _ucs2-numeric? */
obj_t BGl__ucs2zd2numericzf3z21zz__ucs2z00(obj_t BgL_envz00_799, obj_t BgL_ucs2z00_800)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 218 */
{ /* Llib/ucs2.scm 219 */
bool_t BgL_auxz00_1167;
{ /* Llib/ucs2.scm 219 */
ucs2_t BgL_ucs2z00_913;
{ /* Llib/ucs2.scm 219 */
obj_t BgL_auxz00_1168;
if(
UCS2P(BgL_ucs2z00_800))
{ /* Llib/ucs2.scm 219 */
BgL_auxz00_1168 = BgL_ucs2z00_800
; }  else 
{ 
obj_t BgL_auxz00_1171;
BgL_auxz00_1171 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)9657)), BGl_string1492z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_800); 
FAILURE(BgL_auxz00_1171,BFALSE,BFALSE);} 
BgL_ucs2z00_913 = 
CUCS2(BgL_auxz00_1168); } 
BgL_auxz00_1167 = 
ucs2_digitp(BgL_ucs2z00_913); } 
return 
BBOOL(BgL_auxz00_1167);} } 
}



/* ucs2-whitespace? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2whitespacezf3z21zz__ucs2z00(ucs2_t BgL_ucs2z00_24)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 224 */
return 
ucs2_whitespacep(BgL_ucs2z00_24);} 
}



/* _ucs2-whitespace? */
obj_t BGl__ucs2zd2whitespacezf3z21zz__ucs2z00(obj_t BgL_envz00_801, obj_t BgL_ucs2z00_802)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 224 */
{ /* Llib/ucs2.scm 225 */
bool_t BgL_auxz00_1179;
{ /* Llib/ucs2.scm 225 */
ucs2_t BgL_ucs2z00_914;
{ /* Llib/ucs2.scm 225 */
obj_t BgL_auxz00_1180;
if(
UCS2P(BgL_ucs2z00_802))
{ /* Llib/ucs2.scm 225 */
BgL_auxz00_1180 = BgL_ucs2z00_802
; }  else 
{ 
obj_t BgL_auxz00_1183;
BgL_auxz00_1183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)9944)), BGl_string1493z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_802); 
FAILURE(BgL_auxz00_1183,BFALSE,BFALSE);} 
BgL_ucs2z00_914 = 
CUCS2(BgL_auxz00_1180); } 
BgL_auxz00_1179 = 
ucs2_whitespacep(BgL_ucs2z00_914); } 
return 
BBOOL(BgL_auxz00_1179);} } 
}



/* ucs2-upper-case? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2upperzd2casezf3zf3zz__ucs2z00(ucs2_t BgL_ucs2z00_25)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 230 */
return 
ucs2_upperp(BgL_ucs2z00_25);} 
}



/* _ucs2-upper-case? */
obj_t BGl__ucs2zd2upperzd2casezf3zf3zz__ucs2z00(obj_t BgL_envz00_803, obj_t BgL_ucs2z00_804)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 230 */
{ /* Llib/ucs2.scm 231 */
bool_t BgL_auxz00_1191;
{ /* Llib/ucs2.scm 231 */
ucs2_t BgL_ucs2z00_915;
{ /* Llib/ucs2.scm 231 */
obj_t BgL_auxz00_1192;
if(
UCS2P(BgL_ucs2z00_804))
{ /* Llib/ucs2.scm 231 */
BgL_auxz00_1192 = BgL_ucs2z00_804
; }  else 
{ 
obj_t BgL_auxz00_1195;
BgL_auxz00_1195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)10236)), BGl_string1494z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_804); 
FAILURE(BgL_auxz00_1195,BFALSE,BFALSE);} 
BgL_ucs2z00_915 = 
CUCS2(BgL_auxz00_1192); } 
BgL_auxz00_1191 = 
ucs2_upperp(BgL_ucs2z00_915); } 
return 
BBOOL(BgL_auxz00_1191);} } 
}



/* ucs2-lower-case? */
BGL_EXPORTED_DEF bool_t BGl_ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(ucs2_t BgL_ucs2z00_26)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 236 */
return 
ucs2_lowerp(BgL_ucs2z00_26);} 
}



/* _ucs2-lower-case? */
obj_t BGl__ucs2zd2lowerzd2casezf3zf3zz__ucs2z00(obj_t BgL_envz00_805, obj_t BgL_ucs2z00_806)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 236 */
{ /* Llib/ucs2.scm 237 */
bool_t BgL_auxz00_1203;
{ /* Llib/ucs2.scm 237 */
ucs2_t BgL_ucs2z00_916;
{ /* Llib/ucs2.scm 237 */
obj_t BgL_auxz00_1204;
if(
UCS2P(BgL_ucs2z00_806))
{ /* Llib/ucs2.scm 237 */
BgL_auxz00_1204 = BgL_ucs2z00_806
; }  else 
{ 
obj_t BgL_auxz00_1207;
BgL_auxz00_1207 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)10523)), BGl_string1495z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_806); 
FAILURE(BgL_auxz00_1207,BFALSE,BFALSE);} 
BgL_ucs2z00_916 = 
CUCS2(BgL_auxz00_1204); } 
BgL_auxz00_1203 = 
ucs2_lowerp(BgL_ucs2z00_916); } 
return 
BBOOL(BgL_auxz00_1203);} } 
}



/* ucs2-upcase */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2upcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_27)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 242 */
return 
ucs2_toupper(BgL_ucs2z00_27);} 
}



/* _ucs2-upcase */
obj_t BGl__ucs2zd2upcasezd2zz__ucs2z00(obj_t BgL_envz00_807, obj_t BgL_ucs2z00_808)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 242 */
{ /* Llib/ucs2.scm 243 */
ucs2_t BgL_auxz00_1215;
{ /* Llib/ucs2.scm 243 */
ucs2_t BgL_ucs2z00_917;
{ /* Llib/ucs2.scm 243 */
obj_t BgL_auxz00_1216;
if(
UCS2P(BgL_ucs2z00_808))
{ /* Llib/ucs2.scm 243 */
BgL_auxz00_1216 = BgL_ucs2z00_808
; }  else 
{ 
obj_t BgL_auxz00_1219;
BgL_auxz00_1219 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)10805)), BGl_string1496z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_808); 
FAILURE(BgL_auxz00_1219,BFALSE,BFALSE);} 
BgL_ucs2z00_917 = 
CUCS2(BgL_auxz00_1216); } 
BgL_auxz00_1215 = 
ucs2_toupper(BgL_ucs2z00_917); } 
return 
BUCS2(BgL_auxz00_1215);} } 
}



/* ucs2-downcase */
BGL_EXPORTED_DEF ucs2_t BGl_ucs2zd2downcasezd2zz__ucs2z00(ucs2_t BgL_ucs2z00_28)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 248 */
return 
ucs2_tolower(BgL_ucs2z00_28);} 
}



/* _ucs2-downcase */
obj_t BGl__ucs2zd2downcasezd2zz__ucs2z00(obj_t BgL_envz00_809, obj_t BgL_ucs2z00_810)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 248 */
{ /* Llib/ucs2.scm 249 */
ucs2_t BgL_auxz00_1227;
{ /* Llib/ucs2.scm 249 */
ucs2_t BgL_ucs2z00_918;
{ /* Llib/ucs2.scm 249 */
obj_t BgL_auxz00_1228;
if(
UCS2P(BgL_ucs2z00_810))
{ /* Llib/ucs2.scm 249 */
BgL_auxz00_1228 = BgL_ucs2z00_810
; }  else 
{ 
obj_t BgL_auxz00_1231;
BgL_auxz00_1231 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)11089)), BGl_string1497z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_810); 
FAILURE(BgL_auxz00_1231,BFALSE,BFALSE);} 
BgL_ucs2z00_918 = 
CUCS2(BgL_auxz00_1228); } 
BgL_auxz00_1227 = 
ucs2_tolower(BgL_ucs2z00_918); } 
return 
BUCS2(BgL_auxz00_1227);} } 
}



/* integer->ucs2 */
BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2z31zz__ucs2z00(int BgL_intz00_29)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 254 */
{ /* Llib/ucs2.scm 255 */
bool_t BgL_testz00_1238;
if(
(
(long)(BgL_intz00_29)>=((long)0)))
{ /* Llib/ucs2.scm 255 */
BgL_testz00_1238 = 
(
(long)(BgL_intz00_29)<((long)65536))
; }  else 
{ /* Llib/ucs2.scm 255 */
BgL_testz00_1238 = ((bool_t)0)
; } 
if(BgL_testz00_1238)
{ /* Llib/ucs2.scm 255 */
if(
ucs2_definedp(BgL_intz00_29))
{ /* Llib/ucs2.scm 256 */
return 
INT_TO_UCS2(BgL_intz00_29);}  else 
{ /* Llib/ucs2.scm 258 */
obj_t BgL_auxz00_1247;
{ /* Llib/ucs2.scm 258 */
obj_t BgL_aux1463z00_875;
BgL_aux1463z00_875 = 
BGl_errorz00zz__errorz00(BGl_symbol1498z00zz__ucs2z00, BGl_string1500z00zz__ucs2z00, 
BINT(BgL_intz00_29)); 
if(
UCS2P(BgL_aux1463z00_875))
{ /* Llib/ucs2.scm 258 */
BgL_auxz00_1247 = BgL_aux1463z00_875
; }  else 
{ 
obj_t BgL_auxz00_1252;
BgL_auxz00_1252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)11487)), BGl_string1499z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_aux1463z00_875); 
FAILURE(BgL_auxz00_1252,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_auxz00_1247);} }  else 
{ /* Llib/ucs2.scm 259 */
obj_t BgL_auxz00_1257;
{ /* Llib/ucs2.scm 259 */
obj_t BgL_aux1465z00_877;
BgL_aux1465z00_877 = 
BGl_errorz00zz__errorz00(BGl_symbol1498z00zz__ucs2z00, BGl_string1501z00zz__ucs2z00, 
BINT(BgL_intz00_29)); 
if(
UCS2P(BgL_aux1465z00_877))
{ /* Llib/ucs2.scm 259 */
BgL_auxz00_1257 = BgL_aux1465z00_877
; }  else 
{ 
obj_t BgL_auxz00_1262;
BgL_auxz00_1262 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)11550)), BGl_string1499z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_aux1465z00_877); 
FAILURE(BgL_auxz00_1262,BFALSE,BFALSE);} } 
return 
CUCS2(BgL_auxz00_1257);} } } 
}



/* _integer->ucs2 */
obj_t BGl__integerzd2ze3ucs2z31zz__ucs2z00(obj_t BgL_envz00_811, obj_t BgL_intz00_812)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 254 */
{ /* Llib/ucs2.scm 255 */
ucs2_t BgL_auxz00_1267;
{ /* Llib/ucs2.scm 255 */
int BgL_auxz00_1268;
{ /* Llib/ucs2.scm 255 */
obj_t BgL_auxz00_1269;
if(
INTEGERP(BgL_intz00_812))
{ /* Llib/ucs2.scm 255 */
BgL_auxz00_1269 = BgL_intz00_812
; }  else 
{ 
obj_t BgL_auxz00_1272;
BgL_auxz00_1272 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)11385)), BGl_string1502z00zz__ucs2z00, BGl_string1503z00zz__ucs2z00, BgL_intz00_812); 
FAILURE(BgL_auxz00_1272,BFALSE,BFALSE);} 
BgL_auxz00_1268 = 
CINT(BgL_auxz00_1269); } 
BgL_auxz00_1267 = 
BGl_integerzd2ze3ucs2z31zz__ucs2z00(BgL_auxz00_1268); } 
return 
BUCS2(BgL_auxz00_1267);} } 
}



/* integer->ucs2-ur */
BGL_EXPORTED_DEF ucs2_t BGl_integerzd2ze3ucs2zd2urze3zz__ucs2z00(int BgL_intz00_30)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 264 */
return 
INT_TO_UCS2(BgL_intz00_30);} 
}



/* _integer->ucs2-ur */
obj_t BGl__integerzd2ze3ucs2zd2urze3zz__ucs2z00(obj_t BgL_envz00_813, obj_t BgL_intz00_814)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 264 */
{ /* Llib/ucs2.scm 265 */
ucs2_t BgL_auxz00_1280;
{ /* Llib/ucs2.scm 265 */
int BgL_intz00_919;
{ /* Llib/ucs2.scm 265 */
obj_t BgL_auxz00_1281;
if(
INTEGERP(BgL_intz00_814))
{ /* Llib/ucs2.scm 265 */
BgL_auxz00_1281 = BgL_intz00_814
; }  else 
{ 
obj_t BgL_auxz00_1284;
BgL_auxz00_1284 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)11881)), BGl_string1504z00zz__ucs2z00, BGl_string1503z00zz__ucs2z00, BgL_intz00_814); 
FAILURE(BgL_auxz00_1284,BFALSE,BFALSE);} 
BgL_intz00_919 = 
CINT(BgL_auxz00_1281); } 
BgL_auxz00_1280 = 
INT_TO_UCS2(BgL_intz00_919); } 
return 
BUCS2(BgL_auxz00_1280);} } 
}



/* ucs2->integer */
BGL_EXPORTED_DEF int BGl_ucs2zd2ze3integerz31zz__ucs2z00(ucs2_t BgL_ucs2z00_31)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 270 */
{ /* Llib/ucs2.scm 271 */
obj_t BgL_auxz00_1291;
BgL_auxz00_1291 = 
BUCS2(BgL_ucs2z00_31); 
return 
CUCS2(BgL_auxz00_1291);} } 
}



/* _ucs2->integer */
obj_t BGl__ucs2zd2ze3integerz31zz__ucs2z00(obj_t BgL_envz00_815, obj_t BgL_ucs2z00_816)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 270 */
{ /* Llib/ucs2.scm 271 */
int BgL_auxz00_1294;
{ /* Llib/ucs2.scm 271 */
ucs2_t BgL_ucs2z00_920;
{ /* Llib/ucs2.scm 271 */
obj_t BgL_auxz00_1295;
if(
UCS2P(BgL_ucs2z00_816))
{ /* Llib/ucs2.scm 271 */
BgL_auxz00_1295 = BgL_ucs2z00_816
; }  else 
{ 
obj_t BgL_auxz00_1298;
BgL_auxz00_1298 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)12177)), BGl_string1505z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_816); 
FAILURE(BgL_auxz00_1298,BFALSE,BFALSE);} 
BgL_ucs2z00_920 = 
CUCS2(BgL_auxz00_1295); } 
{ /* Llib/ucs2.scm 271 */
obj_t BgL_auxz00_1303;
BgL_auxz00_1303 = 
BUCS2(BgL_ucs2z00_920); 
BgL_auxz00_1294 = 
CUCS2(BgL_auxz00_1303); } } 
return 
BINT(BgL_auxz00_1294);} } 
}



/* char->ucs2 */
BGL_EXPORTED_DEF ucs2_t BGl_charzd2ze3ucs2z31zz__ucs2z00(unsigned char BgL_charz00_32)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 276 */
{ /* Llib/ucs2.scm 277 */
int BgL_auxz00_1307;
BgL_auxz00_1307 = 
(int)(
(
(unsigned char)(BgL_charz00_32))); 
return 
INT_TO_UCS2(BgL_auxz00_1307);} } 
}



/* _char->ucs2 */
obj_t BGl__charzd2ze3ucs2z31zz__ucs2z00(obj_t BgL_envz00_817, obj_t BgL_charz00_818)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 276 */
{ /* Llib/ucs2.scm 277 */
ucs2_t BgL_auxz00_1312;
{ /* Llib/ucs2.scm 277 */
unsigned char BgL_charz00_921;
{ /* Llib/ucs2.scm 277 */
obj_t BgL_auxz00_1313;
if(
CHARP(BgL_charz00_818))
{ /* Llib/ucs2.scm 277 */
BgL_auxz00_1313 = BgL_charz00_818
; }  else 
{ 
obj_t BgL_auxz00_1316;
BgL_auxz00_1316 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)12490)), BGl_string1506z00zz__ucs2z00, BGl_string1507z00zz__ucs2z00, BgL_charz00_818); 
FAILURE(BgL_auxz00_1316,BFALSE,BFALSE);} 
BgL_charz00_921 = 
CCHAR(BgL_auxz00_1313); } 
{ /* Llib/ucs2.scm 277 */
int BgL_auxz00_1321;
BgL_auxz00_1321 = 
(int)(
(
(unsigned char)(BgL_charz00_921))); 
BgL_auxz00_1312 = 
INT_TO_UCS2(BgL_auxz00_1321); } } 
return 
BUCS2(BgL_auxz00_1312);} } 
}



/* ucs2->char */
BGL_EXPORTED_DEF unsigned char BGl_ucs2zd2ze3charz31zz__ucs2z00(ucs2_t BgL_ucs2z00_33)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 282 */
{ /* Llib/ucs2.scm 283 */
int BgL_intz00_445;
{ /* Llib/ucs2.scm 283 */
obj_t BgL_auxz00_1327;
BgL_auxz00_1327 = 
BUCS2(BgL_ucs2z00_33); 
BgL_intz00_445 = 
CUCS2(BgL_auxz00_1327); } 
if(
(
(long)(BgL_intz00_445)<((long)256)))
{ /* Llib/ucs2.scm 284 */
return 
(char)(
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(
(long)(BgL_intz00_445)));}  else 
{ /* Llib/ucs2.scm 286 */
obj_t BgL_auxz00_1336;
{ /* Llib/ucs2.scm 286 */
obj_t BgL_aux1475z00_887;
BgL_aux1475z00_887 = 
BGl_errorz00zz__errorz00(BGl_symbol1508z00zz__ucs2z00, BGl_string1510z00zz__ucs2z00, 
BUCS2(BgL_ucs2z00_33)); 
if(
CHARP(BgL_aux1475z00_887))
{ /* Llib/ucs2.scm 286 */
BgL_auxz00_1336 = BgL_aux1475z00_887
; }  else 
{ 
obj_t BgL_auxz00_1341;
BgL_auxz00_1341 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)12861)), BGl_string1509z00zz__ucs2z00, BGl_string1507z00zz__ucs2z00, BgL_aux1475z00_887); 
FAILURE(BgL_auxz00_1341,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_auxz00_1336);} } } 
}



/* _ucs2->char */
obj_t BGl__ucs2zd2ze3charz31zz__ucs2z00(obj_t BgL_envz00_819, obj_t BgL_ucs2z00_820)
{ AN_OBJECT;
{ /* Llib/ucs2.scm 282 */
{ /* Llib/ucs2.scm 283 */
unsigned char BgL_auxz00_1346;
{ /* Llib/ucs2.scm 283 */
ucs2_t BgL_auxz00_1347;
{ /* Llib/ucs2.scm 283 */
obj_t BgL_auxz00_1348;
if(
UCS2P(BgL_ucs2z00_820))
{ /* Llib/ucs2.scm 283 */
BgL_auxz00_1348 = BgL_ucs2z00_820
; }  else 
{ 
obj_t BgL_auxz00_1351;
BgL_auxz00_1351 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1479z00zz__ucs2z00, 
BINT(((long)12777)), BGl_string1511z00zz__ucs2z00, BGl_string1481z00zz__ucs2z00, BgL_ucs2z00_820); 
FAILURE(BgL_auxz00_1351,BFALSE,BFALSE);} 
BgL_auxz00_1347 = 
CUCS2(BgL_auxz00_1348); } 
BgL_auxz00_1346 = 
BGl_ucs2zd2ze3charz31zz__ucs2z00(BgL_auxz00_1347); } 
return 
BCHAR(BgL_auxz00_1346);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__ucs2z00()
{ AN_OBJECT;
{ /* Llib/ucs2.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1512z00zz__ucs2z00));} 
}

#ifdef __cplusplus
}
#endif
