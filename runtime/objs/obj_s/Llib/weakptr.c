/*===========================================================================*/
/*   (Llib/weakptr.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/weakptr.scm -indent -o objs/obj_s/Llib/weakptr.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t, obj_t, obj_t);
extern void weakptr_data_set(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__weakptrz00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__weakptrz00();
static obj_t BGl__weakptrzf3zf3zz__weakptrz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00();
extern obj_t weakptr_data(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t make_weakptr(obj_t);
static obj_t BGl__weakptrzd2datazd2zz__weakptrz00(obj_t, obj_t);
static obj_t BGl__makezd2weakptrzd2zz__weakptrz00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__weakptrz00();
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakptrzf3zd2envz21zz__weakptrz00, BgL_bgl__weakptrza7f3za7f3za7za72165z00, BGl__weakptrzf3zf3zz__weakptrz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2weakptrzd2envz00zz__weakptrz00, BgL_bgl__makeza7d2weakptrza72166z00, BGl__makezd2weakptrzd2zz__weakptrz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakptrzd2datazd2setz12zd2envzc0zz__weakptrz00, BgL_bgl__weakptrza7d2dataza72167z00, BGl__weakptrzd2datazd2setz12z12zz__weakptrz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2160z00zz__weakptrz00, BgL_bgl_string2160za700za7za7_2168za7, "/tmp/bigloo/runtime/Llib/weakptr.scm", 36 );
DEFINE_STRING( BGl_string2161z00zz__weakptrz00, BgL_bgl_string2161za700za7za7_2169za7, "_weakptr-data", 13 );
DEFINE_STRING( BGl_string2162z00zz__weakptrz00, BgL_bgl_string2162za700za7za7_2170za7, "weakptr", 7 );
DEFINE_STRING( BGl_string2163z00zz__weakptrz00, BgL_bgl_string2163za700za7za7_2171za7, "_weakptr-data-set!", 18 );
DEFINE_STRING( BGl_string2164z00zz__weakptrz00, BgL_bgl_string2164za700za7za7_2172za7, "__weakptr", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_weakptrzd2datazd2envz00zz__weakptrz00, BgL_bgl__weakptrza7d2dataza72173z00, BGl__weakptrzd2datazd2zz__weakptrz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long BgL_checksumz00_1398, char * BgL_fromz00_1399)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__weakptrz00))
{ 
BGl_requirezd2initializa7ationz75zz__weakptrz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__weakptrz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* weakptr? */
BGL_EXPORTED_DEF bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 72 */
return 
BGL_WEAKPTRP(BgL_objz00_1);} 
}



/* _weakptr? */
obj_t BGl__weakptrzf3zf3zz__weakptrz00(obj_t BgL_envz00_1380, obj_t BgL_objz00_1381)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 72 */
return 
BBOOL(
BGL_WEAKPTRP(BgL_objz00_1381));} 
}



/* weakptr-data */
BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 78 */
return 
weakptr_data(BgL_objz00_2);} 
}



/* _weakptr-data */
obj_t BGl__weakptrzd2datazd2zz__weakptrz00(obj_t BgL_envz00_1382, obj_t BgL_objz00_1383)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 78 */
{ /* Llib/weakptr.scm 79 */
obj_t BgL_objz00_1394;
if(
BGL_WEAKPTRP(BgL_objz00_1383))
{ /* Llib/weakptr.scm 79 */
BgL_objz00_1394 = BgL_objz00_1383; }  else 
{ 
obj_t BgL_auxz00_1410;
BgL_auxz00_1410 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2160z00zz__weakptrz00, 
BINT(((long)2903)), BGl_string2161z00zz__weakptrz00, BGl_string2162z00zz__weakptrz00, BgL_objz00_1383); 
FAILURE(BgL_auxz00_1410,BFALSE,BFALSE);} 
return 
weakptr_data(BgL_objz00_1394);} } 
}



/* weakptr-data-set! */
BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t BgL_ptrz00_3, obj_t BgL_objz00_4)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 84 */
weakptr_data_set(BgL_ptrz00_3, BgL_objz00_4); BUNSPEC; 
return BUNSPEC;} 
}



/* _weakptr-data-set! */
obj_t BGl__weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t BgL_envz00_1384, obj_t BgL_ptrz00_1385, obj_t BgL_objz00_1386)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 84 */
{ /* Llib/weakptr.scm 86 */
obj_t BgL_ptrz00_1395;
if(
BGL_WEAKPTRP(BgL_ptrz00_1385))
{ /* Llib/weakptr.scm 86 */
BgL_ptrz00_1395 = BgL_ptrz00_1385; }  else 
{ 
obj_t BgL_auxz00_1418;
BgL_auxz00_1418 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2160z00zz__weakptrz00, 
BINT(((long)3228)), BGl_string2163z00zz__weakptrz00, BGl_string2162z00zz__weakptrz00, BgL_ptrz00_1385); 
FAILURE(BgL_auxz00_1418,BFALSE,BFALSE);} 
weakptr_data_set(BgL_ptrz00_1395, BgL_objz00_1386); BUNSPEC; 
return BUNSPEC;} } 
}



/* make-weakptr */
BGL_EXPORTED_DEF obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t BgL_objz00_5)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 91 */
return 
make_weakptr(BgL_objz00_5);} 
}



/* _make-weakptr */
obj_t BGl__makezd2weakptrzd2zz__weakptrz00(obj_t BgL_envz00_1387, obj_t BgL_objz00_1388)
{ AN_OBJECT;
{ /* Llib/weakptr.scm 91 */
return 
make_weakptr(BgL_objz00_1388);} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__weakptrz00()
{ AN_OBJECT;
{ /* Llib/weakptr.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__weakptrz00()
{ AN_OBJECT;
{ /* Llib/weakptr.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00()
{ AN_OBJECT;
{ /* Llib/weakptr.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)81619416), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)32372471), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2164z00zz__weakptrz00));} 
}

#ifdef __cplusplus
}
#endif
