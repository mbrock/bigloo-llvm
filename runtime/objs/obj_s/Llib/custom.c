/*===========================================================================*/
/*   (Llib/custom.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/custom.scm -indent -o objs/obj_s/Llib/custom.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__customz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__customzf3zf3zz__customz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_customzf3zf3zz__customz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_customzd2nilzd2zz__customz00();
static obj_t BGl_requirezd2initializa7ationz75zz__customz00 = BUNSPEC;
static obj_t BGl__customzd2identifierzd2zz__customz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_customzd2hashzd2zz__customz00(obj_t, int);
extern obj_t bgl_custom_nil();
static obj_t BGl_genericzd2initzd2zz__customz00();
extern obj_t string_to_bstring(char *);
static obj_t BGl__customzd2equalzf3z21zz__customz00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__customzd2nilzd2zz__customz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__customz00();
static obj_t BGl__customzd2identifierzd2setz12z12zz__customz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t, char *);
BGL_EXPORTED_DECL char * BGl_customzd2identifierzd2zz__customz00(obj_t);
static obj_t BGl__customzd2hashzd2zz__customz00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__customz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2equalzf3zd2envzf3zz__customz00, BgL_bgl__customza7d2equalza72179z00, BGl__customzd2equalzf3z21zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2identifierzd2envz00zz__customz00, BgL_bgl__customza7d2identi2180za7, BGl__customzd2identifierzd2zz__customz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzf3zd2envz21zz__customz00, BgL_bgl__customza7f3za7f3za7za7_2181z00, BGl__customzf3zf3zz__customz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2identifierzd2setz12zd2envzc0zz__customz00, BgL_bgl__customza7d2identi2182za7, BGl__customzd2identifierzd2setz12z12zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2170z00zz__customz00, BgL_bgl_string2170za700za7za7_2183za7, "/tmp/bigloo/runtime/Llib/custom.scm", 35 );
DEFINE_STRING( BGl_string2171z00zz__customz00, BgL_bgl_string2171za700za7za7_2184za7, "_custom-equal?", 14 );
DEFINE_STRING( BGl_string2172z00zz__customz00, BgL_bgl_string2172za700za7za7_2185za7, "custom", 6 );
DEFINE_STRING( BGl_string2173z00zz__customz00, BgL_bgl_string2173za700za7za7_2186za7, "_custom-identifier", 18 );
DEFINE_STRING( BGl_string2174z00zz__customz00, BgL_bgl_string2174za700za7za7_2187za7, "_custom-identifier-set!", 23 );
DEFINE_STRING( BGl_string2175z00zz__customz00, BgL_bgl_string2175za700za7za7_2188za7, "string", 6 );
DEFINE_STRING( BGl_string2176z00zz__customz00, BgL_bgl_string2176za700za7za7_2189za7, "_custom-hash", 12 );
DEFINE_STRING( BGl_string2177z00zz__customz00, BgL_bgl_string2177za700za7za7_2190za7, "int", 3 );
DEFINE_STRING( BGl_string2178z00zz__customz00, BgL_bgl_string2178za700za7za7_2191za7, "__custom", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2hashzd2envz00zz__customz00, BgL_bgl__customza7d2hashza7d2192z00, BGl__customzd2hashzd2zz__customz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_customzd2nilzd2envz00zz__customz00, BgL_bgl__customza7d2nilza7d22193z00, BGl__customzd2nilzd2zz__customz00, 0L, BUNSPEC, 0 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__customz00(long BgL_checksumz00_1421, char * BgL_fromz00_1422)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__customz00))
{ 
BGl_requirezd2initializa7ationz75zz__customz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__customz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* custom? */
BGL_EXPORTED_DEF bool_t BGl_customzf3zf3zz__customz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/custom.scm 83 */
return 
CUSTOMP(BgL_objz00_1);} 
}



/* _custom? */
obj_t BGl__customzf3zf3zz__customz00(obj_t BgL_envz00_1387, obj_t BgL_objz00_1388)
{ AN_OBJECT;
{ /* Llib/custom.scm 83 */
return 
BBOOL(
CUSTOMP(BgL_objz00_1388));} 
}



/* custom-nil */
BGL_EXPORTED_DEF obj_t BGl_customzd2nilzd2zz__customz00()
{ AN_OBJECT;
{ /* Llib/custom.scm 89 */
return 
bgl_custom_nil();} 
}



/* _custom-nil */
obj_t BGl__customzd2nilzd2zz__customz00(obj_t BgL_envz00_1389)
{ AN_OBJECT;
{ /* Llib/custom.scm 89 */
return 
bgl_custom_nil();} 
}



/* custom-equal? */
BGL_EXPORTED_DEF bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t BgL_obj1z00_2, obj_t BgL_obj2z00_3)
{ AN_OBJECT;
{ /* Llib/custom.scm 95 */
return 
CUSTOM_CMP(BgL_obj1z00_2, BgL_obj2z00_3);} 
}



/* _custom-equal? */
obj_t BGl__customzd2equalzf3z21zz__customz00(obj_t BgL_envz00_1390, obj_t BgL_obj1z00_1391, obj_t BgL_obj2z00_1392)
{ AN_OBJECT;
{ /* Llib/custom.scm 95 */
{ /* Llib/custom.scm 96 */
bool_t BgL_auxz00_1433;
{ /* Llib/custom.scm 96 */
obj_t BgL_obj1z00_1416;obj_t BgL_obj2z00_1417;
if(
CUSTOMP(BgL_obj1z00_1391))
{ /* Llib/custom.scm 96 */
BgL_obj1z00_1416 = BgL_obj1z00_1391; }  else 
{ 
obj_t BgL_auxz00_1436;
BgL_auxz00_1436 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)3582)), BGl_string2171z00zz__customz00, BGl_string2172z00zz__customz00, BgL_obj1z00_1391); 
FAILURE(BgL_auxz00_1436,BFALSE,BFALSE);} 
if(
CUSTOMP(BgL_obj2z00_1392))
{ /* Llib/custom.scm 96 */
BgL_obj2z00_1417 = BgL_obj2z00_1392; }  else 
{ 
obj_t BgL_auxz00_1442;
BgL_auxz00_1442 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)3582)), BGl_string2171z00zz__customz00, BGl_string2172z00zz__customz00, BgL_obj2z00_1392); 
FAILURE(BgL_auxz00_1442,BFALSE,BFALSE);} 
BgL_auxz00_1433 = 
CUSTOM_CMP(BgL_obj1z00_1416, BgL_obj2z00_1417); } 
return 
BBOOL(BgL_auxz00_1433);} } 
}



/* custom-identifier */
BGL_EXPORTED_DEF char * BGl_customzd2identifierzd2zz__customz00(obj_t BgL_customz00_4)
{ AN_OBJECT;
{ /* Llib/custom.scm 101 */
return 
CUSTOM_IDENTIFIER(BgL_customz00_4);} 
}



/* _custom-identifier */
obj_t BGl__customzd2identifierzd2zz__customz00(obj_t BgL_envz00_1393, obj_t BgL_customz00_1394)
{ AN_OBJECT;
{ /* Llib/custom.scm 101 */
{ /* Llib/custom.scm 102 */
char * BgL_auxz00_1449;
{ /* Llib/custom.scm 102 */
obj_t BgL_customz00_1418;
if(
CUSTOMP(BgL_customz00_1394))
{ /* Llib/custom.scm 102 */
BgL_customz00_1418 = BgL_customz00_1394; }  else 
{ 
obj_t BgL_auxz00_1452;
BgL_auxz00_1452 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)3895)), BGl_string2173z00zz__customz00, BGl_string2172z00zz__customz00, BgL_customz00_1394); 
FAILURE(BgL_auxz00_1452,BFALSE,BFALSE);} 
BgL_auxz00_1449 = 
CUSTOM_IDENTIFIER(BgL_customz00_1418); } 
return 
string_to_bstring(BgL_auxz00_1449);} } 
}



/* custom-identifier-set! */
BGL_EXPORTED_DEF obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t BgL_customz00_5, char * BgL_strz00_6)
{ AN_OBJECT;
{ /* Llib/custom.scm 107 */
return 
CUSTOM_IDENTIFIER_SET(BgL_customz00_5, BgL_strz00_6);} 
}



/* _custom-identifier-set! */
obj_t BGl__customzd2identifierzd2setz12z12zz__customz00(obj_t BgL_envz00_1395, obj_t BgL_customz00_1396, obj_t BgL_strz00_1397)
{ AN_OBJECT;
{ /* Llib/custom.scm 107 */
{ /* Llib/custom.scm 108 */
obj_t BgL_customz00_1419;char * BgL_strz00_1420;
if(
CUSTOMP(BgL_customz00_1396))
{ /* Llib/custom.scm 108 */
BgL_customz00_1419 = BgL_customz00_1396; }  else 
{ 
obj_t BgL_auxz00_1461;
BgL_auxz00_1461 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)4218)), BGl_string2174z00zz__customz00, BGl_string2172z00zz__customz00, BgL_customz00_1396); 
FAILURE(BgL_auxz00_1461,BFALSE,BFALSE);} 
{ /* Llib/custom.scm 108 */
obj_t BgL_auxz00_1465;
if(
STRINGP(BgL_strz00_1397))
{ /* Llib/custom.scm 108 */
BgL_auxz00_1465 = BgL_strz00_1397
; }  else 
{ 
obj_t BgL_auxz00_1468;
BgL_auxz00_1468 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)4218)), BGl_string2174z00zz__customz00, BGl_string2175z00zz__customz00, BgL_strz00_1397); 
FAILURE(BgL_auxz00_1468,BFALSE,BFALSE);} 
BgL_strz00_1420 = 
BSTRING_TO_STRING(BgL_auxz00_1465); } 
return 
CUSTOM_IDENTIFIER_SET(BgL_customz00_1419, BgL_strz00_1420);} } 
}



/* custom-hash */
BGL_EXPORTED_DEF obj_t BGl_customzd2hashzd2zz__customz00(obj_t BgL_customz00_7, int BgL_modz00_8)
{ AN_OBJECT;
{ /* Llib/custom.scm 113 */
{ /* Llib/custom.scm 114 */
int BgL_numz00_1199;
BgL_numz00_1199 = 
CUSTOM_HASH_NUMBER(BgL_customz00_7); 
{ /* Llib/custom.scm 114 */
long BgL_n1z00_1200;long BgL_n2z00_1201;
BgL_n1z00_1200 = 
(long)(BgL_numz00_1199); 
BgL_n2z00_1201 = 
(long)(BgL_modz00_8); 
return 
BINT(
(BgL_n1z00_1200%BgL_n2z00_1201));} } } 
}



/* _custom-hash */
obj_t BGl__customzd2hashzd2zz__customz00(obj_t BgL_envz00_1398, obj_t BgL_customz00_1399, obj_t BgL_modz00_1400)
{ AN_OBJECT;
{ /* Llib/custom.scm 113 */
{ /* Llib/custom.scm 114 */
int BgL_auxz00_1486;obj_t BgL_auxz00_1479;
{ /* Llib/custom.scm 114 */
obj_t BgL_auxz00_1487;
if(
INTEGERP(BgL_modz00_1400))
{ /* Llib/custom.scm 114 */
BgL_auxz00_1487 = BgL_modz00_1400
; }  else 
{ 
obj_t BgL_auxz00_1490;
BgL_auxz00_1490 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)4529)), BGl_string2176z00zz__customz00, BGl_string2177z00zz__customz00, BgL_modz00_1400); 
FAILURE(BgL_auxz00_1490,BFALSE,BFALSE);} 
BgL_auxz00_1486 = 
CINT(BgL_auxz00_1487); } 
if(
CUSTOMP(BgL_customz00_1399))
{ /* Llib/custom.scm 114 */
BgL_auxz00_1479 = BgL_customz00_1399
; }  else 
{ 
obj_t BgL_auxz00_1482;
BgL_auxz00_1482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2170z00zz__customz00, 
BINT(((long)4529)), BGl_string2176z00zz__customz00, BGl_string2172z00zz__customz00, BgL_customz00_1399); 
FAILURE(BgL_auxz00_1482,BFALSE,BFALSE);} 
return 
BGl_customzd2hashzd2zz__customz00(BgL_auxz00_1479, BgL_auxz00_1486);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__customz00()
{ AN_OBJECT;
{ /* Llib/custom.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__customz00()
{ AN_OBJECT;
{ /* Llib/custom.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__customz00()
{ AN_OBJECT;
{ /* Llib/custom.scm 14 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2178z00zz__customz00));} 
}

#ifdef __cplusplus
}
#endif
