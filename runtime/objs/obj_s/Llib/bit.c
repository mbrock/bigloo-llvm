/*===========================================================================*/
/*   (Llib/bit.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/bit.scm -indent -o objs/obj_s/Llib/bit.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__bitzd2orllongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2notelongzd2zz__bitz00(long);
static obj_t BGl__bitzd2orzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2rshzd2zz__bitz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2rshzd2zz__bitz00(long, long);
static obj_t BGl__bitzd2lshzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
BGL_EXPORTED_DECL unsigned BGL_LONGLONG_T BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T, long);
BGL_EXPORTED_DECL long BGl_bitzd2lshzd2zz__bitz00(long, long);
static obj_t BGl__bitzd2rshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2andllongzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2urshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T, long);
static obj_t BGl__bitzd2xorllongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2orelongzd2zz__bitz00(long, long);
static obj_t BGl_requirezd2initializa7ationz75zz__bitz00 = BUNSPEC;
BGL_EXPORTED_DECL long BGl_bitzd2andelongzd2zz__bitz00(long, long);
static obj_t BGl__bitzd2lshelongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_bitzd2xorelongzd2zz__bitz00(long, long);
static obj_t BGl_importedzd2moduleszd2initz00zz__bitz00();
static obj_t BGl__bitzd2andzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2notelongzd2zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2andzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL long BGl_bitzd2orzd2zz__bitz00(long, long);
static obj_t BGl__bitzd2orelongzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2rshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2notzd2zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long, long);
static obj_t BGl__bitzd2urshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_bitzd2rshelongzd2zz__bitz00(long, long);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL long BGl_bitzd2notzd2zz__bitz00(long);
static obj_t BGl__bitzd2urshzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2lshllongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T, BGL_LONGLONG_T);
BGL_EXPORTED_DECL unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long, long);
static obj_t BGl__bitzd2xorzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2andelongzd2zz__bitz00(obj_t, obj_t, obj_t);
static obj_t BGl__bitzd2notllongzd2zz__bitz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2lshelongzd2zz__bitz00(long, long);
static obj_t BGl__bitzd2xorelongzd2zz__bitz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_bitzd2xorzd2zz__bitz00(long, long);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2orelongza7d1502z00, BGl__bitzd2orelongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2andllongza71503z00, BGl__bitzd2andllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2xorelongza71504z00, BGl__bitzd2xorelongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2lshllongza71505z00, BGl__bitzd2lshllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2urshelong1506za7, BGl__bitzd2urshelongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orzd2envz00zz__bitz00, BgL_bgl__bitza7d2orza7d2za7za7__1507z00, BGl__bitzd2orzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshzd2envz00zz__bitz00, BgL_bgl__bitza7d2rshza7d2za7za7_1508z00, BGl__bitzd2rshzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2andelongza71509z00, BGl__bitzd2andelongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notzd2envz00zz__bitz00, BgL_bgl__bitza7d2notza7d2za7za7_1510z00, BGl__bitzd2notzd2zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2lshelongza71511z00, BGl__bitzd2lshelongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2andzd2envz00zz__bitz00, BgL_bgl__bitza7d2andza7d2za7za7_1512z00, BGl__bitzd2andzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1473z00zz__bitz00, BgL_bgl_string1473za700za7za7_1513za7, "/tmp/bigloo/runtime/Llib/bit.scm", 32 );
DEFINE_STRING( BGl_string1474z00zz__bitz00, BgL_bgl_string1474za700za7za7_1514za7, "_bit-or", 7 );
DEFINE_STRING( BGl_string1475z00zz__bitz00, BgL_bgl_string1475za700za7za7_1515za7, "long", 4 );
DEFINE_STRING( BGl_string1476z00zz__bitz00, BgL_bgl_string1476za700za7za7_1516za7, "_bit-orelong", 12 );
DEFINE_STRING( BGl_string1477z00zz__bitz00, BgL_bgl_string1477za700za7za7_1517za7, "elong", 5 );
DEFINE_STRING( BGl_string1478z00zz__bitz00, BgL_bgl_string1478za700za7za7_1518za7, "_bit-orllong", 12 );
DEFINE_STRING( BGl_string1480z00zz__bitz00, BgL_bgl_string1480za700za7za7_1519za7, "_bit-and", 8 );
DEFINE_STRING( BGl_string1479z00zz__bitz00, BgL_bgl_string1479za700za7za7_1520za7, "llong", 5 );
DEFINE_STRING( BGl_string1481z00zz__bitz00, BgL_bgl_string1481za700za7za7_1521za7, "_bit-andelong", 13 );
DEFINE_STRING( BGl_string1482z00zz__bitz00, BgL_bgl_string1482za700za7za7_1522za7, "_bit-andllong", 13 );
DEFINE_STRING( BGl_string1483z00zz__bitz00, BgL_bgl_string1483za700za7za7_1523za7, "_bit-xor", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2notllongza71524z00, BGl__bitzd2notllongzd2zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1484z00zz__bitz00, BgL_bgl_string1484za700za7za7_1525za7, "_bit-xorelong", 13 );
DEFINE_STRING( BGl_string1485z00zz__bitz00, BgL_bgl_string1485za700za7za7_1526za7, "_bit-xorllong", 13 );
DEFINE_STRING( BGl_string1486z00zz__bitz00, BgL_bgl_string1486za700za7za7_1527za7, "_bit-not", 8 );
DEFINE_STRING( BGl_string1487z00zz__bitz00, BgL_bgl_string1487za700za7za7_1528za7, "_bit-notelong", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorzd2envz00zz__bitz00, BgL_bgl__bitza7d2xorza7d2za7za7_1529z00, BGl__bitzd2xorzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string1488z00zz__bitz00, BgL_bgl_string1488za700za7za7_1530za7, "_bit-notllong", 13 );
DEFINE_STRING( BGl_string1500z00zz__bitz00, BgL_bgl_string1500za700za7za7_1531za7, "_bit-lshllong", 13 );
DEFINE_STRING( BGl_string1490z00zz__bitz00, BgL_bgl_string1490za700za7za7_1532za7, "_bit-rshelong", 13 );
DEFINE_STRING( BGl_string1489z00zz__bitz00, BgL_bgl_string1489za700za7za7_1533za7, "_bit-rsh", 8 );
DEFINE_STRING( BGl_string1501z00zz__bitz00, BgL_bgl_string1501za700za7za7_1534za7, "__bit", 5 );
DEFINE_STRING( BGl_string1491z00zz__bitz00, BgL_bgl_string1491za700za7za7_1535za7, "_bit-rshllong", 13 );
DEFINE_STRING( BGl_string1492z00zz__bitz00, BgL_bgl_string1492za700za7za7_1536za7, "_bit-ursh", 9 );
DEFINE_STRING( BGl_string1493z00zz__bitz00, BgL_bgl_string1493za700za7za7_1537za7, "ulong", 5 );
DEFINE_STRING( BGl_string1494z00zz__bitz00, BgL_bgl_string1494za700za7za7_1538za7, "_bit-urshelong", 14 );
DEFINE_STRING( BGl_string1495z00zz__bitz00, BgL_bgl_string1495za700za7za7_1539za7, "uelong", 6 );
DEFINE_STRING( BGl_string1496z00zz__bitz00, BgL_bgl_string1496za700za7za7_1540za7, "_bit-urshllong", 14 );
DEFINE_STRING( BGl_string1497z00zz__bitz00, BgL_bgl_string1497za700za7za7_1541za7, "ullong", 6 );
DEFINE_STRING( BGl_string1498z00zz__bitz00, BgL_bgl_string1498za700za7za7_1542za7, "_bit-lsh", 8 );
DEFINE_STRING( BGl_string1499z00zz__bitz00, BgL_bgl_string1499za700za7za7_1543za7, "_bit-lshelong", 13 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2lshzd2envz00zz__bitz00, BgL_bgl__bitza7d2lshza7d2za7za7_1544z00, BGl__bitzd2lshzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2notelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2notelongza71545z00, BGl__bitzd2notelongzd2zz__bitz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2rshllongza71546z00, BGl__bitzd2rshllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2orllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2orllongza7d1547z00, BGl__bitzd2orllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshzd2envz00zz__bitz00, BgL_bgl__bitza7d2urshza7d2za7za71548z00, BGl__bitzd2urshzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2xorllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2xorllongza71549z00, BGl__bitzd2xorllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2urshllongzd2envz00zz__bitz00, BgL_bgl__bitza7d2urshllong1550za7, BGl__bitzd2urshllongzd2zz__bitz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bitzd2rshelongzd2envz00zz__bitz00, BgL_bgl__bitza7d2rshelongza71551z00, BGl__bitzd2rshelongzd2zz__bitz00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long BgL_checksumz00_892, char * BgL_fromz00_893)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__bitz00))
{ 
BGl_requirezd2initializa7ationz75zz__bitz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__bitz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* bit-or */
BGL_EXPORTED_DEF long BGl_bitzd2orzd2zz__bitz00(long BgL_xz00_1, long BgL_yz00_2)
{ AN_OBJECT;
{ /* Llib/bit.scm 167 */
return 
(BgL_xz00_1 | BgL_yz00_2);} 
}



/* _bit-or */
obj_t BGl__bitzd2orzd2zz__bitz00(obj_t BgL_envz00_715, obj_t BgL_xz00_716, obj_t BgL_yz00_717)
{ AN_OBJECT;
{ /* Llib/bit.scm 167 */
{ /* Llib/bit.scm 168 */
long BgL_auxz00_899;
{ /* Llib/bit.scm 168 */
long BgL_xz00_853;long BgL_yz00_854;
{ /* Llib/bit.scm 168 */
obj_t BgL_auxz00_900;
if(
INTEGERP(BgL_xz00_716))
{ /* Llib/bit.scm 168 */
BgL_auxz00_900 = BgL_xz00_716
; }  else 
{ 
obj_t BgL_auxz00_903;
BgL_auxz00_903 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)7844)), BGl_string1474z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_716); 
FAILURE(BgL_auxz00_903,BFALSE,BFALSE);} 
BgL_xz00_853 = 
(long)CINT(BgL_auxz00_900); } 
{ /* Llib/bit.scm 168 */
obj_t BgL_auxz00_908;
if(
INTEGERP(BgL_yz00_717))
{ /* Llib/bit.scm 168 */
BgL_auxz00_908 = BgL_yz00_717
; }  else 
{ 
obj_t BgL_auxz00_911;
BgL_auxz00_911 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)7844)), BGl_string1474z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_717); 
FAILURE(BgL_auxz00_911,BFALSE,BFALSE);} 
BgL_yz00_854 = 
(long)CINT(BgL_auxz00_908); } 
BgL_auxz00_899 = 
(BgL_xz00_853 | BgL_yz00_854); } 
return 
BINT(BgL_auxz00_899);} } 
}



/* bit-orelong */
BGL_EXPORTED_DEF long BGl_bitzd2orelongzd2zz__bitz00(long BgL_xz00_3, long BgL_yz00_4)
{ AN_OBJECT;
{ /* Llib/bit.scm 173 */
return 
(BgL_xz00_3 | BgL_yz00_4);} 
}



/* _bit-orelong */
obj_t BGl__bitzd2orelongzd2zz__bitz00(obj_t BgL_envz00_718, obj_t BgL_xz00_719, obj_t BgL_yz00_720)
{ AN_OBJECT;
{ /* Llib/bit.scm 173 */
{ /* Llib/bit.scm 174 */
long BgL_auxz00_919;
{ /* Llib/bit.scm 174 */
long BgL_xz00_855;long BgL_yz00_856;
{ /* Llib/bit.scm 174 */
obj_t BgL_auxz00_920;
if(
ELONGP(BgL_xz00_719))
{ /* Llib/bit.scm 174 */
BgL_auxz00_920 = BgL_xz00_719
; }  else 
{ 
obj_t BgL_auxz00_923;
BgL_auxz00_923 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8118)), BGl_string1476z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_719); 
FAILURE(BgL_auxz00_923,BFALSE,BFALSE);} 
BgL_xz00_855 = 
BELONG_TO_LONG(BgL_auxz00_920); } 
{ /* Llib/bit.scm 174 */
obj_t BgL_auxz00_928;
if(
ELONGP(BgL_yz00_720))
{ /* Llib/bit.scm 174 */
BgL_auxz00_928 = BgL_yz00_720
; }  else 
{ 
obj_t BgL_auxz00_931;
BgL_auxz00_931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8118)), BGl_string1476z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_yz00_720); 
FAILURE(BgL_auxz00_931,BFALSE,BFALSE);} 
BgL_yz00_856 = 
BELONG_TO_LONG(BgL_auxz00_928); } 
BgL_auxz00_919 = 
(BgL_xz00_855 | BgL_yz00_856); } 
return 
make_belong(BgL_auxz00_919);} } 
}



/* bit-orllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2orllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_5, BGL_LONGLONG_T BgL_yz00_6)
{ AN_OBJECT;
{ /* Llib/bit.scm 179 */
return 
(BgL_xz00_5 | BgL_yz00_6);} 
}



/* _bit-orllong */
obj_t BGl__bitzd2orllongzd2zz__bitz00(obj_t BgL_envz00_721, obj_t BgL_xz00_722, obj_t BgL_yz00_723)
{ AN_OBJECT;
{ /* Llib/bit.scm 179 */
{ /* Llib/bit.scm 180 */
BGL_LONGLONG_T BgL_auxz00_939;
{ /* Llib/bit.scm 180 */
BGL_LONGLONG_T BgL_xz00_857;BGL_LONGLONG_T BgL_yz00_858;
{ /* Llib/bit.scm 180 */
obj_t BgL_auxz00_940;
if(
LLONGP(BgL_xz00_722))
{ /* Llib/bit.scm 180 */
BgL_auxz00_940 = BgL_xz00_722
; }  else 
{ 
obj_t BgL_auxz00_943;
BgL_auxz00_943 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8397)), BGl_string1478z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_722); 
FAILURE(BgL_auxz00_943,BFALSE,BFALSE);} 
BgL_xz00_857 = 
BLLONG_TO_LLONG(BgL_auxz00_940); } 
{ /* Llib/bit.scm 180 */
obj_t BgL_auxz00_948;
if(
LLONGP(BgL_yz00_723))
{ /* Llib/bit.scm 180 */
BgL_auxz00_948 = BgL_yz00_723
; }  else 
{ 
obj_t BgL_auxz00_951;
BgL_auxz00_951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8397)), BGl_string1478z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_yz00_723); 
FAILURE(BgL_auxz00_951,BFALSE,BFALSE);} 
BgL_yz00_858 = 
BLLONG_TO_LLONG(BgL_auxz00_948); } 
BgL_auxz00_939 = 
(BgL_xz00_857 | BgL_yz00_858); } 
return 
make_bllong(BgL_auxz00_939);} } 
}



/* bit-and */
BGL_EXPORTED_DEF long BGl_bitzd2andzd2zz__bitz00(long BgL_xz00_7, long BgL_yz00_8)
{ AN_OBJECT;
{ /* Llib/bit.scm 185 */
return 
(BgL_xz00_7 & BgL_yz00_8);} 
}



/* _bit-and */
obj_t BGl__bitzd2andzd2zz__bitz00(obj_t BgL_envz00_724, obj_t BgL_xz00_725, obj_t BgL_yz00_726)
{ AN_OBJECT;
{ /* Llib/bit.scm 185 */
{ /* Llib/bit.scm 186 */
long BgL_auxz00_959;
{ /* Llib/bit.scm 186 */
long BgL_xz00_859;long BgL_yz00_860;
{ /* Llib/bit.scm 186 */
obj_t BgL_auxz00_960;
if(
INTEGERP(BgL_xz00_725))
{ /* Llib/bit.scm 186 */
BgL_auxz00_960 = BgL_xz00_725
; }  else 
{ 
obj_t BgL_auxz00_963;
BgL_auxz00_963 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8672)), BGl_string1480z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_725); 
FAILURE(BgL_auxz00_963,BFALSE,BFALSE);} 
BgL_xz00_859 = 
(long)CINT(BgL_auxz00_960); } 
{ /* Llib/bit.scm 186 */
obj_t BgL_auxz00_968;
if(
INTEGERP(BgL_yz00_726))
{ /* Llib/bit.scm 186 */
BgL_auxz00_968 = BgL_yz00_726
; }  else 
{ 
obj_t BgL_auxz00_971;
BgL_auxz00_971 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8672)), BGl_string1480z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_726); 
FAILURE(BgL_auxz00_971,BFALSE,BFALSE);} 
BgL_yz00_860 = 
(long)CINT(BgL_auxz00_968); } 
BgL_auxz00_959 = 
(BgL_xz00_859 & BgL_yz00_860); } 
return 
BINT(BgL_auxz00_959);} } 
}



/* bit-andelong */
BGL_EXPORTED_DEF long BGl_bitzd2andelongzd2zz__bitz00(long BgL_xz00_9, long BgL_yz00_10)
{ AN_OBJECT;
{ /* Llib/bit.scm 191 */
return 
(BgL_xz00_9 & BgL_yz00_10);} 
}



/* _bit-andelong */
obj_t BGl__bitzd2andelongzd2zz__bitz00(obj_t BgL_envz00_727, obj_t BgL_xz00_728, obj_t BgL_yz00_729)
{ AN_OBJECT;
{ /* Llib/bit.scm 191 */
{ /* Llib/bit.scm 192 */
long BgL_auxz00_979;
{ /* Llib/bit.scm 192 */
long BgL_xz00_861;long BgL_yz00_862;
{ /* Llib/bit.scm 192 */
obj_t BgL_auxz00_980;
if(
ELONGP(BgL_xz00_728))
{ /* Llib/bit.scm 192 */
BgL_auxz00_980 = BgL_xz00_728
; }  else 
{ 
obj_t BgL_auxz00_983;
BgL_auxz00_983 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8948)), BGl_string1481z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_728); 
FAILURE(BgL_auxz00_983,BFALSE,BFALSE);} 
BgL_xz00_861 = 
BELONG_TO_LONG(BgL_auxz00_980); } 
{ /* Llib/bit.scm 192 */
obj_t BgL_auxz00_988;
if(
ELONGP(BgL_yz00_729))
{ /* Llib/bit.scm 192 */
BgL_auxz00_988 = BgL_yz00_729
; }  else 
{ 
obj_t BgL_auxz00_991;
BgL_auxz00_991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)8948)), BGl_string1481z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_yz00_729); 
FAILURE(BgL_auxz00_991,BFALSE,BFALSE);} 
BgL_yz00_862 = 
BELONG_TO_LONG(BgL_auxz00_988); } 
BgL_auxz00_979 = 
(BgL_xz00_861 & BgL_yz00_862); } 
return 
make_belong(BgL_auxz00_979);} } 
}



/* bit-andllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2andllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_11, BGL_LONGLONG_T BgL_yz00_12)
{ AN_OBJECT;
{ /* Llib/bit.scm 197 */
return 
(BgL_xz00_11 & BgL_yz00_12);} 
}



/* _bit-andllong */
obj_t BGl__bitzd2andllongzd2zz__bitz00(obj_t BgL_envz00_730, obj_t BgL_xz00_731, obj_t BgL_yz00_732)
{ AN_OBJECT;
{ /* Llib/bit.scm 197 */
{ /* Llib/bit.scm 198 */
BGL_LONGLONG_T BgL_auxz00_999;
{ /* Llib/bit.scm 198 */
BGL_LONGLONG_T BgL_xz00_863;BGL_LONGLONG_T BgL_yz00_864;
{ /* Llib/bit.scm 198 */
obj_t BgL_auxz00_1000;
if(
LLONGP(BgL_xz00_731))
{ /* Llib/bit.scm 198 */
BgL_auxz00_1000 = BgL_xz00_731
; }  else 
{ 
obj_t BgL_auxz00_1003;
BgL_auxz00_1003 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9229)), BGl_string1482z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_731); 
FAILURE(BgL_auxz00_1003,BFALSE,BFALSE);} 
BgL_xz00_863 = 
BLLONG_TO_LLONG(BgL_auxz00_1000); } 
{ /* Llib/bit.scm 198 */
obj_t BgL_auxz00_1008;
if(
LLONGP(BgL_yz00_732))
{ /* Llib/bit.scm 198 */
BgL_auxz00_1008 = BgL_yz00_732
; }  else 
{ 
obj_t BgL_auxz00_1011;
BgL_auxz00_1011 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9229)), BGl_string1482z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_yz00_732); 
FAILURE(BgL_auxz00_1011,BFALSE,BFALSE);} 
BgL_yz00_864 = 
BLLONG_TO_LLONG(BgL_auxz00_1008); } 
BgL_auxz00_999 = 
(BgL_xz00_863 & BgL_yz00_864); } 
return 
make_bllong(BgL_auxz00_999);} } 
}



/* bit-xor */
BGL_EXPORTED_DEF long BGl_bitzd2xorzd2zz__bitz00(long BgL_xz00_13, long BgL_yz00_14)
{ AN_OBJECT;
{ /* Llib/bit.scm 203 */
return 
(BgL_xz00_13 ^ BgL_yz00_14);} 
}



/* _bit-xor */
obj_t BGl__bitzd2xorzd2zz__bitz00(obj_t BgL_envz00_733, obj_t BgL_xz00_734, obj_t BgL_yz00_735)
{ AN_OBJECT;
{ /* Llib/bit.scm 203 */
{ /* Llib/bit.scm 204 */
long BgL_auxz00_1019;
{ /* Llib/bit.scm 204 */
long BgL_xz00_865;long BgL_yz00_866;
{ /* Llib/bit.scm 204 */
obj_t BgL_auxz00_1020;
if(
INTEGERP(BgL_xz00_734))
{ /* Llib/bit.scm 204 */
BgL_auxz00_1020 = BgL_xz00_734
; }  else 
{ 
obj_t BgL_auxz00_1023;
BgL_auxz00_1023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9505)), BGl_string1483z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_734); 
FAILURE(BgL_auxz00_1023,BFALSE,BFALSE);} 
BgL_xz00_865 = 
(long)CINT(BgL_auxz00_1020); } 
{ /* Llib/bit.scm 204 */
obj_t BgL_auxz00_1028;
if(
INTEGERP(BgL_yz00_735))
{ /* Llib/bit.scm 204 */
BgL_auxz00_1028 = BgL_yz00_735
; }  else 
{ 
obj_t BgL_auxz00_1031;
BgL_auxz00_1031 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9505)), BGl_string1483z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_735); 
FAILURE(BgL_auxz00_1031,BFALSE,BFALSE);} 
BgL_yz00_866 = 
(long)CINT(BgL_auxz00_1028); } 
BgL_auxz00_1019 = 
(BgL_xz00_865 ^ BgL_yz00_866); } 
return 
BINT(BgL_auxz00_1019);} } 
}



/* bit-xorelong */
BGL_EXPORTED_DEF long BGl_bitzd2xorelongzd2zz__bitz00(long BgL_xz00_15, long BgL_yz00_16)
{ AN_OBJECT;
{ /* Llib/bit.scm 209 */
return 
(BgL_xz00_15 ^ BgL_yz00_16);} 
}



/* _bit-xorelong */
obj_t BGl__bitzd2xorelongzd2zz__bitz00(obj_t BgL_envz00_736, obj_t BgL_xz00_737, obj_t BgL_yz00_738)
{ AN_OBJECT;
{ /* Llib/bit.scm 209 */
{ /* Llib/bit.scm 210 */
long BgL_auxz00_1039;
{ /* Llib/bit.scm 210 */
long BgL_xz00_867;long BgL_yz00_868;
{ /* Llib/bit.scm 210 */
obj_t BgL_auxz00_1040;
if(
ELONGP(BgL_xz00_737))
{ /* Llib/bit.scm 210 */
BgL_auxz00_1040 = BgL_xz00_737
; }  else 
{ 
obj_t BgL_auxz00_1043;
BgL_auxz00_1043 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9781)), BGl_string1484z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_737); 
FAILURE(BgL_auxz00_1043,BFALSE,BFALSE);} 
BgL_xz00_867 = 
BELONG_TO_LONG(BgL_auxz00_1040); } 
{ /* Llib/bit.scm 210 */
obj_t BgL_auxz00_1048;
if(
ELONGP(BgL_yz00_738))
{ /* Llib/bit.scm 210 */
BgL_auxz00_1048 = BgL_yz00_738
; }  else 
{ 
obj_t BgL_auxz00_1051;
BgL_auxz00_1051 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)9781)), BGl_string1484z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_yz00_738); 
FAILURE(BgL_auxz00_1051,BFALSE,BFALSE);} 
BgL_yz00_868 = 
BELONG_TO_LONG(BgL_auxz00_1048); } 
BgL_auxz00_1039 = 
(BgL_xz00_867 ^ BgL_yz00_868); } 
return 
make_belong(BgL_auxz00_1039);} } 
}



/* bit-xorllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2xorllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_17, BGL_LONGLONG_T BgL_yz00_18)
{ AN_OBJECT;
{ /* Llib/bit.scm 215 */
return 
(BgL_xz00_17 ^ BgL_yz00_18);} 
}



/* _bit-xorllong */
obj_t BGl__bitzd2xorllongzd2zz__bitz00(obj_t BgL_envz00_739, obj_t BgL_xz00_740, obj_t BgL_yz00_741)
{ AN_OBJECT;
{ /* Llib/bit.scm 215 */
{ /* Llib/bit.scm 216 */
BGL_LONGLONG_T BgL_auxz00_1059;
{ /* Llib/bit.scm 216 */
BGL_LONGLONG_T BgL_xz00_869;BGL_LONGLONG_T BgL_yz00_870;
{ /* Llib/bit.scm 216 */
obj_t BgL_auxz00_1060;
if(
LLONGP(BgL_xz00_740))
{ /* Llib/bit.scm 216 */
BgL_auxz00_1060 = BgL_xz00_740
; }  else 
{ 
obj_t BgL_auxz00_1063;
BgL_auxz00_1063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)10062)), BGl_string1485z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_740); 
FAILURE(BgL_auxz00_1063,BFALSE,BFALSE);} 
BgL_xz00_869 = 
BLLONG_TO_LLONG(BgL_auxz00_1060); } 
{ /* Llib/bit.scm 216 */
obj_t BgL_auxz00_1068;
if(
LLONGP(BgL_yz00_741))
{ /* Llib/bit.scm 216 */
BgL_auxz00_1068 = BgL_yz00_741
; }  else 
{ 
obj_t BgL_auxz00_1071;
BgL_auxz00_1071 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)10062)), BGl_string1485z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_yz00_741); 
FAILURE(BgL_auxz00_1071,BFALSE,BFALSE);} 
BgL_yz00_870 = 
BLLONG_TO_LLONG(BgL_auxz00_1068); } 
BgL_auxz00_1059 = 
(BgL_xz00_869 ^ BgL_yz00_870); } 
return 
make_bllong(BgL_auxz00_1059);} } 
}



/* bit-not */
BGL_EXPORTED_DEF long BGl_bitzd2notzd2zz__bitz00(long BgL_xz00_19)
{ AN_OBJECT;
{ /* Llib/bit.scm 221 */
return 
~(BgL_xz00_19);} 
}



/* _bit-not */
obj_t BGl__bitzd2notzd2zz__bitz00(obj_t BgL_envz00_742, obj_t BgL_xz00_743)
{ AN_OBJECT;
{ /* Llib/bit.scm 221 */
{ /* Llib/bit.scm 222 */
long BgL_auxz00_1079;
{ /* Llib/bit.scm 222 */
long BgL_xz00_871;
{ /* Llib/bit.scm 222 */
obj_t BgL_auxz00_1080;
if(
INTEGERP(BgL_xz00_743))
{ /* Llib/bit.scm 222 */
BgL_auxz00_1080 = BgL_xz00_743
; }  else 
{ 
obj_t BgL_auxz00_1083;
BgL_auxz00_1083 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)10336)), BGl_string1486z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_743); 
FAILURE(BgL_auxz00_1083,BFALSE,BFALSE);} 
BgL_xz00_871 = 
(long)CINT(BgL_auxz00_1080); } 
BgL_auxz00_1079 = 
~(BgL_xz00_871); } 
return 
BINT(BgL_auxz00_1079);} } 
}



/* bit-notelong */
BGL_EXPORTED_DEF long BGl_bitzd2notelongzd2zz__bitz00(long BgL_xz00_20)
{ AN_OBJECT;
{ /* Llib/bit.scm 227 */
return 
~(BgL_xz00_20);} 
}



/* _bit-notelong */
obj_t BGl__bitzd2notelongzd2zz__bitz00(obj_t BgL_envz00_744, obj_t BgL_xz00_745)
{ AN_OBJECT;
{ /* Llib/bit.scm 227 */
{ /* Llib/bit.scm 228 */
long BgL_auxz00_1091;
{ /* Llib/bit.scm 228 */
long BgL_xz00_872;
{ /* Llib/bit.scm 228 */
obj_t BgL_auxz00_1092;
if(
ELONGP(BgL_xz00_745))
{ /* Llib/bit.scm 228 */
BgL_auxz00_1092 = BgL_xz00_745
; }  else 
{ 
obj_t BgL_auxz00_1095;
BgL_auxz00_1095 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)10611)), BGl_string1487z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_745); 
FAILURE(BgL_auxz00_1095,BFALSE,BFALSE);} 
BgL_xz00_872 = 
BELONG_TO_LONG(BgL_auxz00_1092); } 
BgL_auxz00_1091 = 
~(BgL_xz00_872); } 
return 
make_belong(BgL_auxz00_1091);} } 
}



/* bit-notllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2notllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_21)
{ AN_OBJECT;
{ /* Llib/bit.scm 233 */
return 
~(BgL_xz00_21);} 
}



/* _bit-notllong */
obj_t BGl__bitzd2notllongzd2zz__bitz00(obj_t BgL_envz00_746, obj_t BgL_xz00_747)
{ AN_OBJECT;
{ /* Llib/bit.scm 233 */
{ /* Llib/bit.scm 234 */
BGL_LONGLONG_T BgL_auxz00_1103;
{ /* Llib/bit.scm 234 */
BGL_LONGLONG_T BgL_xz00_873;
{ /* Llib/bit.scm 234 */
obj_t BgL_auxz00_1104;
if(
LLONGP(BgL_xz00_747))
{ /* Llib/bit.scm 234 */
BgL_auxz00_1104 = BgL_xz00_747
; }  else 
{ 
obj_t BgL_auxz00_1107;
BgL_auxz00_1107 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)10891)), BGl_string1488z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_747); 
FAILURE(BgL_auxz00_1107,BFALSE,BFALSE);} 
BgL_xz00_873 = 
BLLONG_TO_LLONG(BgL_auxz00_1104); } 
BgL_auxz00_1103 = 
~(BgL_xz00_873); } 
return 
make_bllong(BgL_auxz00_1103);} } 
}



/* bit-rsh */
BGL_EXPORTED_DEF long BGl_bitzd2rshzd2zz__bitz00(long BgL_xz00_22, long BgL_yz00_23)
{ AN_OBJECT;
{ /* Llib/bit.scm 239 */
return 
(BgL_xz00_22 >> 
(int)(BgL_yz00_23));} 
}



/* _bit-rsh */
obj_t BGl__bitzd2rshzd2zz__bitz00(obj_t BgL_envz00_748, obj_t BgL_xz00_749, obj_t BgL_yz00_750)
{ AN_OBJECT;
{ /* Llib/bit.scm 239 */
{ /* Llib/bit.scm 240 */
long BgL_auxz00_1116;
{ /* Llib/bit.scm 240 */
long BgL_xz00_874;long BgL_yz00_875;
{ /* Llib/bit.scm 240 */
obj_t BgL_auxz00_1117;
if(
INTEGERP(BgL_xz00_749))
{ /* Llib/bit.scm 240 */
BgL_auxz00_1117 = BgL_xz00_749
; }  else 
{ 
obj_t BgL_auxz00_1120;
BgL_auxz00_1120 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11168)), BGl_string1489z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_749); 
FAILURE(BgL_auxz00_1120,BFALSE,BFALSE);} 
BgL_xz00_874 = 
(long)CINT(BgL_auxz00_1117); } 
{ /* Llib/bit.scm 240 */
obj_t BgL_auxz00_1125;
if(
INTEGERP(BgL_yz00_750))
{ /* Llib/bit.scm 240 */
BgL_auxz00_1125 = BgL_yz00_750
; }  else 
{ 
obj_t BgL_auxz00_1128;
BgL_auxz00_1128 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11168)), BGl_string1489z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_750); 
FAILURE(BgL_auxz00_1128,BFALSE,BFALSE);} 
BgL_yz00_875 = 
(long)CINT(BgL_auxz00_1125); } 
BgL_auxz00_1116 = 
(BgL_xz00_874 >> 
(int)(BgL_yz00_875)); } 
return 
BINT(BgL_auxz00_1116);} } 
}



/* bit-rshelong */
BGL_EXPORTED_DEF long BGl_bitzd2rshelongzd2zz__bitz00(long BgL_xz00_24, long BgL_yz00_25)
{ AN_OBJECT;
{ /* Llib/bit.scm 245 */
return 
(BgL_xz00_24 >> 
(int)(BgL_yz00_25));} 
}



/* _bit-rshelong */
obj_t BGl__bitzd2rshelongzd2zz__bitz00(obj_t BgL_envz00_751, obj_t BgL_xz00_752, obj_t BgL_yz00_753)
{ AN_OBJECT;
{ /* Llib/bit.scm 245 */
{ /* Llib/bit.scm 246 */
long BgL_auxz00_1138;
{ /* Llib/bit.scm 246 */
long BgL_xz00_876;long BgL_yz00_877;
{ /* Llib/bit.scm 246 */
obj_t BgL_auxz00_1139;
if(
ELONGP(BgL_xz00_752))
{ /* Llib/bit.scm 246 */
BgL_auxz00_1139 = BgL_xz00_752
; }  else 
{ 
obj_t BgL_auxz00_1142;
BgL_auxz00_1142 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11451)), BGl_string1490z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_752); 
FAILURE(BgL_auxz00_1142,BFALSE,BFALSE);} 
BgL_xz00_876 = 
BELONG_TO_LONG(BgL_auxz00_1139); } 
{ /* Llib/bit.scm 246 */
obj_t BgL_auxz00_1147;
if(
INTEGERP(BgL_yz00_753))
{ /* Llib/bit.scm 246 */
BgL_auxz00_1147 = BgL_yz00_753
; }  else 
{ 
obj_t BgL_auxz00_1150;
BgL_auxz00_1150 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11451)), BGl_string1490z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_753); 
FAILURE(BgL_auxz00_1150,BFALSE,BFALSE);} 
BgL_yz00_877 = 
(long)CINT(BgL_auxz00_1147); } 
BgL_auxz00_1138 = 
(BgL_xz00_876 >> 
(int)(BgL_yz00_877)); } 
return 
make_belong(BgL_auxz00_1138);} } 
}



/* bit-rshllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2rshllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_26, long BgL_yz00_27)
{ AN_OBJECT;
{ /* Llib/bit.scm 251 */
return 
(BgL_xz00_26 >> 
(int)(BgL_yz00_27));} 
}



/* _bit-rshllong */
obj_t BGl__bitzd2rshllongzd2zz__bitz00(obj_t BgL_envz00_754, obj_t BgL_xz00_755, obj_t BgL_yz00_756)
{ AN_OBJECT;
{ /* Llib/bit.scm 251 */
{ /* Llib/bit.scm 252 */
BGL_LONGLONG_T BgL_auxz00_1160;
{ /* Llib/bit.scm 252 */
BGL_LONGLONG_T BgL_xz00_878;long BgL_yz00_879;
{ /* Llib/bit.scm 252 */
obj_t BgL_auxz00_1161;
if(
LLONGP(BgL_xz00_755))
{ /* Llib/bit.scm 252 */
BgL_auxz00_1161 = BgL_xz00_755
; }  else 
{ 
obj_t BgL_auxz00_1164;
BgL_auxz00_1164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11739)), BGl_string1491z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_755); 
FAILURE(BgL_auxz00_1164,BFALSE,BFALSE);} 
BgL_xz00_878 = 
BLLONG_TO_LLONG(BgL_auxz00_1161); } 
{ /* Llib/bit.scm 252 */
obj_t BgL_auxz00_1169;
if(
INTEGERP(BgL_yz00_756))
{ /* Llib/bit.scm 252 */
BgL_auxz00_1169 = BgL_yz00_756
; }  else 
{ 
obj_t BgL_auxz00_1172;
BgL_auxz00_1172 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)11739)), BGl_string1491z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_756); 
FAILURE(BgL_auxz00_1172,BFALSE,BFALSE);} 
BgL_yz00_879 = 
(long)CINT(BgL_auxz00_1169); } 
BgL_auxz00_1160 = 
(BgL_xz00_878 >> 
(int)(BgL_yz00_879)); } 
return 
make_bllong(BgL_auxz00_1160);} } 
}



/* bit-ursh */
BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshzd2zz__bitz00(unsigned long BgL_xz00_28, long BgL_yz00_29)
{ AN_OBJECT;
{ /* Llib/bit.scm 257 */
return 
(BgL_xz00_28 >> 
(int)(BgL_yz00_29));} 
}



/* _bit-ursh */
obj_t BGl__bitzd2urshzd2zz__bitz00(obj_t BgL_envz00_757, obj_t BgL_xz00_758, obj_t BgL_yz00_759)
{ AN_OBJECT;
{ /* Llib/bit.scm 257 */
{ /* Llib/bit.scm 258 */
unsigned long BgL_auxz00_1182;
{ /* Llib/bit.scm 258 */
unsigned long BgL_xz00_880;long BgL_yz00_881;
{ /* Llib/bit.scm 258 */
obj_t BgL_auxz00_1183;
if(
INTEGERP(BgL_xz00_758))
{ /* Llib/bit.scm 258 */
BgL_auxz00_1183 = BgL_xz00_758
; }  else 
{ 
obj_t BgL_auxz00_1186;
BgL_auxz00_1186 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12023)), BGl_string1492z00zz__bitz00, BGl_string1493z00zz__bitz00, BgL_xz00_758); 
FAILURE(BgL_auxz00_1186,BFALSE,BFALSE);} 
BgL_xz00_880 = 
(unsigned long)CINT(BgL_auxz00_1183); } 
{ /* Llib/bit.scm 258 */
obj_t BgL_auxz00_1191;
if(
INTEGERP(BgL_yz00_759))
{ /* Llib/bit.scm 258 */
BgL_auxz00_1191 = BgL_yz00_759
; }  else 
{ 
obj_t BgL_auxz00_1194;
BgL_auxz00_1194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12023)), BGl_string1492z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_759); 
FAILURE(BgL_auxz00_1194,BFALSE,BFALSE);} 
BgL_yz00_881 = 
(long)CINT(BgL_auxz00_1191); } 
BgL_auxz00_1182 = 
(BgL_xz00_880 >> 
(int)(BgL_yz00_881)); } 
return 
BINT(BgL_auxz00_1182);} } 
}



/* bit-urshelong */
BGL_EXPORTED_DEF unsigned long BGl_bitzd2urshelongzd2zz__bitz00(unsigned long BgL_xz00_30, long BgL_yz00_31)
{ AN_OBJECT;
{ /* Llib/bit.scm 263 */
{ /* Llib/bit.scm 264 */
int BgL_auxz00_1202;
BgL_auxz00_1202 = 
(int)(BgL_yz00_31); 
return 
(BgL_xz00_30 >> BgL_auxz00_1202);} } 
}



/* _bit-urshelong */
obj_t BGl__bitzd2urshelongzd2zz__bitz00(obj_t BgL_envz00_760, obj_t BgL_xz00_761, obj_t BgL_yz00_762)
{ AN_OBJECT;
{ /* Llib/bit.scm 263 */
{ /* Llib/bit.scm 264 */
long BgL_auxz00_1205;
{ /* Llib/bit.scm 264 */
unsigned long BgL_xz00_882;long BgL_yz00_883;
{ /* Llib/bit.scm 264 */
obj_t BgL_auxz00_1206;
if(
ELONGP(BgL_xz00_761))
{ /* Llib/bit.scm 264 */
BgL_auxz00_1206 = BgL_xz00_761
; }  else 
{ 
obj_t BgL_auxz00_1209;
BgL_auxz00_1209 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12308)), BGl_string1494z00zz__bitz00, BGl_string1495z00zz__bitz00, BgL_xz00_761); 
FAILURE(BgL_auxz00_1209,BFALSE,BFALSE);} 
BgL_xz00_882 = 
BELONG_TO_LONG(BgL_auxz00_1206); } 
{ /* Llib/bit.scm 264 */
obj_t BgL_auxz00_1214;
if(
INTEGERP(BgL_yz00_762))
{ /* Llib/bit.scm 264 */
BgL_auxz00_1214 = BgL_yz00_762
; }  else 
{ 
obj_t BgL_auxz00_1217;
BgL_auxz00_1217 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12308)), BGl_string1494z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_762); 
FAILURE(BgL_auxz00_1217,BFALSE,BFALSE);} 
BgL_yz00_883 = 
(long)CINT(BgL_auxz00_1214); } 
{ /* Llib/bit.scm 264 */
int BgL_auxz00_1222;
BgL_auxz00_1222 = 
(int)(BgL_yz00_883); 
BgL_auxz00_1205 = 
(BgL_xz00_882 >> BgL_auxz00_1222); } } 
return 
make_belong(BgL_auxz00_1205);} } 
}



/* bit-urshllong */
BGL_EXPORTED_DEF unsigned BGL_LONGLONG_T BGl_bitzd2urshllongzd2zz__bitz00(unsigned BGL_LONGLONG_T BgL_xz00_32, long BgL_yz00_33)
{ AN_OBJECT;
{ /* Llib/bit.scm 269 */
{ /* Llib/bit.scm 270 */
int BgL_auxz00_1226;
BgL_auxz00_1226 = 
(int)(BgL_yz00_33); 
return 
(BgL_xz00_32 >> BgL_auxz00_1226);} } 
}



/* _bit-urshllong */
obj_t BGl__bitzd2urshllongzd2zz__bitz00(obj_t BgL_envz00_763, obj_t BgL_xz00_764, obj_t BgL_yz00_765)
{ AN_OBJECT;
{ /* Llib/bit.scm 269 */
{ /* Llib/bit.scm 270 */
unsigned BGL_LONGLONG_T BgL_auxz00_1229;
{ /* Llib/bit.scm 270 */
unsigned BGL_LONGLONG_T BgL_xz00_884;long BgL_yz00_885;
{ /* Llib/bit.scm 270 */
obj_t BgL_auxz00_1230;
if(
LLONGP(BgL_xz00_764))
{ /* Llib/bit.scm 270 */
BgL_auxz00_1230 = BgL_xz00_764
; }  else 
{ 
obj_t BgL_auxz00_1233;
BgL_auxz00_1233 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12598)), BGl_string1496z00zz__bitz00, BGl_string1497z00zz__bitz00, BgL_xz00_764); 
FAILURE(BgL_auxz00_1233,BFALSE,BFALSE);} 
BgL_xz00_884 = 
BLLONG_TO_LLONG(BgL_auxz00_1230); } 
{ /* Llib/bit.scm 270 */
obj_t BgL_auxz00_1238;
if(
INTEGERP(BgL_yz00_765))
{ /* Llib/bit.scm 270 */
BgL_auxz00_1238 = BgL_yz00_765
; }  else 
{ 
obj_t BgL_auxz00_1241;
BgL_auxz00_1241 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12598)), BGl_string1496z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_765); 
FAILURE(BgL_auxz00_1241,BFALSE,BFALSE);} 
BgL_yz00_885 = 
(long)CINT(BgL_auxz00_1238); } 
{ /* Llib/bit.scm 270 */
int BgL_auxz00_1246;
BgL_auxz00_1246 = 
(int)(BgL_yz00_885); 
BgL_auxz00_1229 = 
(BgL_xz00_884 >> BgL_auxz00_1246); } } 
return 
make_bllong(BgL_auxz00_1229);} } 
}



/* bit-lsh */
BGL_EXPORTED_DEF long BGl_bitzd2lshzd2zz__bitz00(long BgL_xz00_34, long BgL_yz00_35)
{ AN_OBJECT;
{ /* Llib/bit.scm 275 */
return 
(BgL_xz00_34 << 
(int)(BgL_yz00_35));} 
}



/* _bit-lsh */
obj_t BGl__bitzd2lshzd2zz__bitz00(obj_t BgL_envz00_766, obj_t BgL_xz00_767, obj_t BgL_yz00_768)
{ AN_OBJECT;
{ /* Llib/bit.scm 275 */
{ /* Llib/bit.scm 276 */
long BgL_auxz00_1252;
{ /* Llib/bit.scm 276 */
long BgL_xz00_886;long BgL_yz00_887;
{ /* Llib/bit.scm 276 */
obj_t BgL_auxz00_1253;
if(
INTEGERP(BgL_xz00_767))
{ /* Llib/bit.scm 276 */
BgL_auxz00_1253 = BgL_xz00_767
; }  else 
{ 
obj_t BgL_auxz00_1256;
BgL_auxz00_1256 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12882)), BGl_string1498z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_xz00_767); 
FAILURE(BgL_auxz00_1256,BFALSE,BFALSE);} 
BgL_xz00_886 = 
(long)CINT(BgL_auxz00_1253); } 
{ /* Llib/bit.scm 276 */
obj_t BgL_auxz00_1261;
if(
INTEGERP(BgL_yz00_768))
{ /* Llib/bit.scm 276 */
BgL_auxz00_1261 = BgL_yz00_768
; }  else 
{ 
obj_t BgL_auxz00_1264;
BgL_auxz00_1264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)12882)), BGl_string1498z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_768); 
FAILURE(BgL_auxz00_1264,BFALSE,BFALSE);} 
BgL_yz00_887 = 
(long)CINT(BgL_auxz00_1261); } 
BgL_auxz00_1252 = 
(BgL_xz00_886 << 
(int)(BgL_yz00_887)); } 
return 
BINT(BgL_auxz00_1252);} } 
}



/* bit-lshelong */
BGL_EXPORTED_DEF long BGl_bitzd2lshelongzd2zz__bitz00(long BgL_xz00_36, long BgL_yz00_37)
{ AN_OBJECT;
{ /* Llib/bit.scm 281 */
return 
(BgL_xz00_36 << 
(int)(BgL_yz00_37));} 
}



/* _bit-lshelong */
obj_t BGl__bitzd2lshelongzd2zz__bitz00(obj_t BgL_envz00_769, obj_t BgL_xz00_770, obj_t BgL_yz00_771)
{ AN_OBJECT;
{ /* Llib/bit.scm 281 */
{ /* Llib/bit.scm 282 */
long BgL_auxz00_1274;
{ /* Llib/bit.scm 282 */
long BgL_xz00_888;long BgL_yz00_889;
{ /* Llib/bit.scm 282 */
obj_t BgL_auxz00_1275;
if(
ELONGP(BgL_xz00_770))
{ /* Llib/bit.scm 282 */
BgL_auxz00_1275 = BgL_xz00_770
; }  else 
{ 
obj_t BgL_auxz00_1278;
BgL_auxz00_1278 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)13158)), BGl_string1499z00zz__bitz00, BGl_string1477z00zz__bitz00, BgL_xz00_770); 
FAILURE(BgL_auxz00_1278,BFALSE,BFALSE);} 
BgL_xz00_888 = 
BELONG_TO_LONG(BgL_auxz00_1275); } 
{ /* Llib/bit.scm 282 */
obj_t BgL_auxz00_1283;
if(
INTEGERP(BgL_yz00_771))
{ /* Llib/bit.scm 282 */
BgL_auxz00_1283 = BgL_yz00_771
; }  else 
{ 
obj_t BgL_auxz00_1286;
BgL_auxz00_1286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)13158)), BGl_string1499z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_771); 
FAILURE(BgL_auxz00_1286,BFALSE,BFALSE);} 
BgL_yz00_889 = 
(long)CINT(BgL_auxz00_1283); } 
BgL_auxz00_1274 = 
(BgL_xz00_888 << 
(int)(BgL_yz00_889)); } 
return 
make_belong(BgL_auxz00_1274);} } 
}



/* bit-lshllong */
BGL_EXPORTED_DEF BGL_LONGLONG_T BGl_bitzd2lshllongzd2zz__bitz00(BGL_LONGLONG_T BgL_xz00_38, long BgL_yz00_39)
{ AN_OBJECT;
{ /* Llib/bit.scm 287 */
return 
(BgL_xz00_38 << 
(int)(BgL_yz00_39));} 
}



/* _bit-lshllong */
obj_t BGl__bitzd2lshllongzd2zz__bitz00(obj_t BgL_envz00_772, obj_t BgL_xz00_773, obj_t BgL_yz00_774)
{ AN_OBJECT;
{ /* Llib/bit.scm 287 */
{ /* Llib/bit.scm 288 */
BGL_LONGLONG_T BgL_auxz00_1296;
{ /* Llib/bit.scm 288 */
BGL_LONGLONG_T BgL_xz00_890;long BgL_yz00_891;
{ /* Llib/bit.scm 288 */
obj_t BgL_auxz00_1297;
if(
LLONGP(BgL_xz00_773))
{ /* Llib/bit.scm 288 */
BgL_auxz00_1297 = BgL_xz00_773
; }  else 
{ 
obj_t BgL_auxz00_1300;
BgL_auxz00_1300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)13439)), BGl_string1500z00zz__bitz00, BGl_string1479z00zz__bitz00, BgL_xz00_773); 
FAILURE(BgL_auxz00_1300,BFALSE,BFALSE);} 
BgL_xz00_890 = 
BLLONG_TO_LLONG(BgL_auxz00_1297); } 
{ /* Llib/bit.scm 288 */
obj_t BgL_auxz00_1305;
if(
INTEGERP(BgL_yz00_774))
{ /* Llib/bit.scm 288 */
BgL_auxz00_1305 = BgL_yz00_774
; }  else 
{ 
obj_t BgL_auxz00_1308;
BgL_auxz00_1308 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1473z00zz__bitz00, 
BINT(((long)13439)), BGl_string1500z00zz__bitz00, BGl_string1475z00zz__bitz00, BgL_yz00_774); 
FAILURE(BgL_auxz00_1308,BFALSE,BFALSE);} 
BgL_yz00_891 = 
(long)CINT(BgL_auxz00_1305); } 
BgL_auxz00_1296 = 
(BgL_xz00_890 << 
(int)(BgL_yz00_891)); } 
return 
make_bllong(BgL_auxz00_1296);} } 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__bitz00()
{ AN_OBJECT;
{ /* Llib/bit.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1501z00zz__bitz00));} 
}

#ifdef __cplusplus
}
#endif
