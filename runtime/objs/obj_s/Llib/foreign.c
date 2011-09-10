/*===========================================================================*/
/*   (Llib/foreign.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/foreign.scm -indent -o objs/obj_s/Llib/foreign.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t);
BGL_EXPORTED_DECL char * BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00();
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char *);
extern long obj_to_cobj(obj_t);
BGL_EXPORTED_DECL bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void *);
static obj_t BGl__makezd2voidza2zd2nullza2zz__foreignz00(obj_t);
static obj_t BGl__foreignzf3zf3zz__foreignz00(obj_t, obj_t);
static obj_t BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__foreignz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00();
static obj_t BGl__foreignzd2nullzf3z21zz__foreignz00(obj_t, obj_t);
static obj_t BGl__voidza2zd2nullzf3z83zz__foreignz00(obj_t, obj_t);
extern obj_t void_star_to_obj(void *);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL void * BGl_makezd2voidza2zd2nullza2zz__foreignz00();
extern obj_t string_to_bstring(char *);
static obj_t BGl__foreignzd2eqzf3z21zz__foreignz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t);
static obj_t BGl__objzd2ze3cobjz31zz__foreignz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzd2nullzf3zd2envzf3zz__foreignz00, BgL_bgl__foreignza7d2nullza71404z00, BGl__foreignzd2nullzf3z21zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ptrzd2nullzf3zd2envz21zz__foreignz00, BgL_bgl__stringza7d2ptrza7d21405z00, BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1400z00zz__foreignz00, BgL_bgl_string1400za700za7za7_1406za7, "string", 6 );
DEFINE_STRING( BGl_string1401z00zz__foreignz00, BgL_bgl_string1401za700za7za7_1407za7, "_void*-null?", 12 );
DEFINE_STRING( BGl_string1402z00zz__foreignz00, BgL_bgl_string1402za700za7za7_1408za7, "void*", 5 );
DEFINE_STRING( BGl_string1403z00zz__foreignz00, BgL_bgl_string1403za700za7za7_1409za7, "__foreign", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzf3zd2envz21zz__foreignz00, BgL_bgl__foreignza7f3za7f3za7za71410z00, BGl__foreignzf3zf3zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string1394z00zz__foreignz00, BgL_bgl_string1394za700za7za7_1411za7, "/tmp/bigloo/runtime/Llib/foreign.scm", 36 );
DEFINE_STRING( BGl_string1395z00zz__foreignz00, BgL_bgl_string1395za700za7za7_1412za7, "foreign-eq?", 11 );
DEFINE_STRING( BGl_string1396z00zz__foreignz00, BgL_bgl_string1396za700za7za7_1413za7, "foreign", 7 );
DEFINE_STRING( BGl_string1397z00zz__foreignz00, BgL_bgl_string1397za700za7za7_1414za7, "foreign-null?", 13 );
DEFINE_STRING( BGl_string1398z00zz__foreignz00, BgL_bgl_string1398za700za7za7_1415za7, "not a foreign object", 20 );
DEFINE_STRING( BGl_string1399z00zz__foreignz00, BgL_bgl_string1399za700za7za7_1416za7, "_string-ptr-null?", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_foreignzd2eqzf3zd2envzf3zz__foreignz00, BgL_bgl__foreignza7d2eqza7f31417z00, BGl__foreignzd2eqzf3z21zz__foreignz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2voidza2zd2nullzd2envz70zz__foreignz00, BgL_bgl__makeza7d2voidza7a2za71418za7, BGl__makezd2voidza2zd2nullza2zz__foreignz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_voidza2zd2nullzf3zd2envz51zz__foreignz00, BgL_bgl__voidza7a2za7d2nullza71419za7, BGl__voidza2zd2nullzf3z83zz__foreignz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2stringzd2ptrzd2nullzd2envz00zz__foreignz00, BgL_bgl__makeza7d2stringza7d1420z00, BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_objzd2ze3cobjzd2envze3zz__foreignz00, BgL_bgl__objza7d2za7e3cobjza731421za7, BGl__objzd2ze3cobjz31zz__foreignz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__foreignz00(long BgL_checksumz00_688, char * BgL_fromz00_689)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__foreignz00))
{ 
BGl_requirezd2initializa7ationz75zz__foreignz00 = 
BBOOL(((bool_t)0)); 
BGl_importedzd2moduleszd2initz00zz__foreignz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* foreign? */
BGL_EXPORTED_DEF bool_t BGl_foreignzf3zf3zz__foreignz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/foreign.scm 89 */
return 
FOREIGNP(BgL_objz00_1);} 
}



/* _foreign? */
obj_t BGl__foreignzf3zf3zz__foreignz00(obj_t BgL_envz00_658, obj_t BgL_objz00_659)
{ AN_OBJECT;
{ /* Llib/foreign.scm 89 */
return 
BBOOL(
FOREIGNP(BgL_objz00_659));} 
}



/* foreign-eq? */
BGL_EXPORTED_DEF bool_t BGl_foreignzd2eqzf3z21zz__foreignz00(obj_t BgL_o1z00_2, obj_t BgL_o2z00_3)
{ AN_OBJECT;
{ /* Llib/foreign.scm 95 */
{ /* Llib/foreign.scm 96 */
obj_t BgL_auxz00_704;obj_t BgL_auxz00_697;
if(
FOREIGNP(BgL_o2z00_3))
{ /* Llib/foreign.scm 96 */
BgL_auxz00_704 = BgL_o2z00_3
; }  else 
{ 
obj_t BgL_auxz00_707;
BgL_auxz00_707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)4136)), BGl_string1395z00zz__foreignz00, BGl_string1396z00zz__foreignz00, BgL_o2z00_3); 
FAILURE(BgL_auxz00_707,BFALSE,BFALSE);} 
if(
FOREIGNP(BgL_o1z00_2))
{ /* Llib/foreign.scm 96 */
BgL_auxz00_697 = BgL_o1z00_2
; }  else 
{ 
obj_t BgL_auxz00_700;
BgL_auxz00_700 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)4133)), BGl_string1395z00zz__foreignz00, BGl_string1396z00zz__foreignz00, BgL_o1z00_2); 
FAILURE(BgL_auxz00_700,BFALSE,BFALSE);} 
return 
FOREIGN_EQP(BgL_auxz00_697, BgL_auxz00_704);} } 
}



/* _foreign-eq? */
obj_t BGl__foreignzd2eqzf3z21zz__foreignz00(obj_t BgL_envz00_660, obj_t BgL_o1z00_661, obj_t BgL_o2z00_662)
{ AN_OBJECT;
{ /* Llib/foreign.scm 95 */
{ /* Llib/foreign.scm 96 */
bool_t BgL_auxz00_712;
{ /* Llib/foreign.scm 96 */
obj_t BgL_auxz00_720;obj_t BgL_auxz00_713;
if(
FOREIGNP(BgL_o2z00_662))
{ /* Llib/foreign.scm 96 */
BgL_auxz00_720 = BgL_o2z00_662
; }  else 
{ 
obj_t BgL_auxz00_723;
BgL_auxz00_723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)4136)), BGl_string1395z00zz__foreignz00, BGl_string1396z00zz__foreignz00, BgL_o2z00_662); 
FAILURE(BgL_auxz00_723,BFALSE,BFALSE);} 
if(
FOREIGNP(BgL_o1z00_661))
{ /* Llib/foreign.scm 96 */
BgL_auxz00_713 = BgL_o1z00_661
; }  else 
{ 
obj_t BgL_auxz00_716;
BgL_auxz00_716 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)4133)), BGl_string1395z00zz__foreignz00, BGl_string1396z00zz__foreignz00, BgL_o1z00_661); 
FAILURE(BgL_auxz00_716,BFALSE,BFALSE);} 
BgL_auxz00_712 = 
FOREIGN_EQP(BgL_auxz00_713, BgL_auxz00_720); } 
return 
BBOOL(BgL_auxz00_712);} } 
}



/* foreign-null? */
BGL_EXPORTED_DEF bool_t BGl_foreignzd2nullzf3z21zz__foreignz00(obj_t BgL_objz00_4)
{ AN_OBJECT;
{ /* Llib/foreign.scm 101 */
if(
FOREIGNP(BgL_objz00_4))
{ /* Llib/foreign.scm 102 */
return 
FOREIGN_NULLP(BgL_objz00_4);}  else 
{ /* Llib/foreign.scm 102 */
return 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string1397z00zz__foreignz00, BGl_string1398z00zz__foreignz00, BgL_objz00_4));} } 
}



/* _foreign-null? */
obj_t BGl__foreignzd2nullzf3z21zz__foreignz00(obj_t BgL_envz00_663, obj_t BgL_objz00_664)
{ AN_OBJECT;
{ /* Llib/foreign.scm 101 */
{ /* Llib/foreign.scm 102 */
bool_t BgL_auxz00_734;
if(
FOREIGNP(BgL_objz00_664))
{ /* Llib/foreign.scm 102 */
BgL_auxz00_734 = 
FOREIGN_NULLP(BgL_objz00_664)
; }  else 
{ /* Llib/foreign.scm 102 */
BgL_auxz00_734 = 
CBOOL(
BGl_errorz00zz__errorz00(BGl_string1397z00zz__foreignz00, BGl_string1398z00zz__foreignz00, BgL_objz00_664))
; } 
return 
BBOOL(BgL_auxz00_734);} } 
}



/* string-ptr-null? */
BGL_EXPORTED_DEF bool_t BGl_stringzd2ptrzd2nullzf3zf3zz__foreignz00(char * BgL_objz00_5)
{ AN_OBJECT;
{ /* Llib/foreign.scm 109 */
return 
STRING_PTR_NULL(BgL_objz00_5);} 
}



/* _string-ptr-null? */
obj_t BGl__stringzd2ptrzd2nullzf3zf3zz__foreignz00(obj_t BgL_envz00_665, obj_t BgL_objz00_666)
{ AN_OBJECT;
{ /* Llib/foreign.scm 109 */
{ /* Llib/foreign.scm 110 */
bool_t BgL_auxz00_742;
{ /* Llib/foreign.scm 110 */
char * BgL_objz00_685;
{ /* Llib/foreign.scm 110 */
obj_t BgL_auxz00_743;
if(
STRINGP(BgL_objz00_666))
{ /* Llib/foreign.scm 110 */
BgL_auxz00_743 = BgL_objz00_666
; }  else 
{ 
obj_t BgL_auxz00_746;
BgL_auxz00_746 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)4782)), BGl_string1399z00zz__foreignz00, BGl_string1400z00zz__foreignz00, BgL_objz00_666); 
FAILURE(BgL_auxz00_746,BFALSE,BFALSE);} 
BgL_objz00_685 = 
BSTRING_TO_STRING(BgL_auxz00_743); } 
BgL_auxz00_742 = 
STRING_PTR_NULL(BgL_objz00_685); } 
return 
BBOOL(BgL_auxz00_742);} } 
}



/* obj->cobj */
BGL_EXPORTED_DEF long BGl_objzd2ze3cobjz31zz__foreignz00(obj_t BgL_objz00_6)
{ AN_OBJECT;
{ /* Llib/foreign.scm 115 */
return 
obj_to_cobj(BgL_objz00_6);} 
}



/* _obj->cobj */
obj_t BGl__objzd2ze3cobjz31zz__foreignz00(obj_t BgL_envz00_667, obj_t BgL_objz00_668)
{ AN_OBJECT;
{ /* Llib/foreign.scm 115 */
return 
(obj_t)(
obj_to_cobj(BgL_objz00_668));} 
}



/* void*-null? */
BGL_EXPORTED_DEF bool_t BGl_voidza2zd2nullzf3z83zz__foreignz00(void * BgL_objz00_7)
{ AN_OBJECT;
{ /* Llib/foreign.scm 121 */
return 
FOREIGN_PTR_NULL(BgL_objz00_7);} 
}



/* _void*-null? */
obj_t BGl__voidza2zd2nullzf3z83zz__foreignz00(obj_t BgL_envz00_669, obj_t BgL_objz00_670)
{ AN_OBJECT;
{ /* Llib/foreign.scm 121 */
{ /* Llib/foreign.scm 122 */
bool_t BgL_auxz00_757;
{ /* Llib/foreign.scm 122 */
void * BgL_objz00_687;
if(
FOREIGNP(BgL_objz00_670))
{ /* Llib/foreign.scm 122 */
BgL_objz00_687 = 
FOREIGN_TO_COBJ(BgL_objz00_670); }  else 
{ 
obj_t BgL_auxz00_761;
BgL_auxz00_761 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string1394z00zz__foreignz00, 
BINT(((long)5349)), BGl_string1401z00zz__foreignz00, BGl_string1402z00zz__foreignz00, BgL_objz00_670); 
FAILURE(BgL_auxz00_761,BFALSE,BFALSE);} 
BgL_auxz00_757 = 
FOREIGN_PTR_NULL(BgL_objz00_687); } 
return 
BBOOL(BgL_auxz00_757);} } 
}



/* make-string-ptr-null */
BGL_EXPORTED_DEF char * BGl_makezd2stringzd2ptrzd2nullzd2zz__foreignz00()
{ AN_OBJECT;
{ /* Llib/foreign.scm 127 */
return 
(0L);} 
}



/* _make-string-ptr-null */
obj_t BGl__makezd2stringzd2ptrzd2nullzd2zz__foreignz00(obj_t BgL_envz00_671)
{ AN_OBJECT;
{ /* Llib/foreign.scm 127 */
return 
string_to_bstring(
(0L));} 
}



/* make-void*-null */
BGL_EXPORTED_DEF void * BGl_makezd2voidza2zd2nullza2zz__foreignz00()
{ AN_OBJECT;
{ /* Llib/foreign.scm 133 */
return 
(0L);} 
}



/* _make-void*-null */
obj_t BGl__makezd2voidza2zd2nullza2zz__foreignz00(obj_t BgL_envz00_672)
{ AN_OBJECT;
{ /* Llib/foreign.scm 133 */
return 
void_star_to_obj(
(0L));} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__foreignz00()
{ AN_OBJECT;
{ /* Llib/foreign.scm 18 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string1403z00zz__foreignz00));} 
}

#ifdef __cplusplus
}
#endif
