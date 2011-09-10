/*===========================================================================*/
/*   (Ieee/equiv.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Ieee/equiv.scm -indent -o objs/obj_s/Ieee/equiv.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Object type definitions */

extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern bool_t ucs2_strcmp(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2463z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2465z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2472z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2474z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2476z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2478z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2481z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2483z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2485z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl__eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2487z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2489z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2491z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_symbol2493z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00();
BGL_EXPORTED_DECL bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl__eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
static obj_t BGl_list2471z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl_list2480z00zz__r4_equivalence_6_2z00 = BUNSPEC;
static obj_t BGl__equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00();
static obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
extern long bgl_date_to_seconds(obj_t);
BGL_EXPORTED_DECL bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();
extern obj_t weakptr_data(obj_t);
extern bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt, BgL_objectz00_bglt);
static obj_t *__cnst;


DEFINE_STRING( BGl_string2464z00zz__r4_equivalence_6_2z00, BgL_bgl_string2464za700za7za7_2501za7, "f32", 3 );
DEFINE_STRING( BGl_string2466z00zz__r4_equivalence_6_2z00, BgL_bgl_string2466za700za7za7_2502za7, "f64", 3 );
DEFINE_STRING( BGl_string2467z00zz__r4_equivalence_6_2z00, BgL_bgl_string2467za700za7za7_2503za7, "/tmp/bigloo/runtime/Ieee/equiv.scm", 34 );
DEFINE_STRING( BGl_string2468z00zz__r4_equivalence_6_2z00, BgL_bgl_string2468za700za7za7_2504za7, "test", 4 );
DEFINE_STRING( BGl_string2470z00zz__r4_equivalence_6_2z00, BgL_bgl_string2470za700za7za7_2505za7, "test:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2469z00zz__r4_equivalence_6_2z00, BgL_bgl_string2469za700za7za7_2506za7, "procedure", 9 );
DEFINE_STRING( BGl_string2473z00zz__r4_equivalence_6_2z00, BgL_bgl_string2473za700za7za7_2507za7, "funcall", 7 );
DEFINE_STRING( BGl_string2475z00zz__r4_equivalence_6_2z00, BgL_bgl_string2475za700za7za7_2508za7, "get", 3 );
DEFINE_STRING( BGl_string2477z00zz__r4_equivalence_6_2z00, BgL_bgl_string2477za700za7za7_2509za7, "obj1", 4 );
DEFINE_STRING( BGl_string2479z00zz__r4_equivalence_6_2z00, BgL_bgl_string2479za700za7za7_2510za7, "i", 1 );
DEFINE_STRING( BGl_string2482z00zz__r4_equivalence_6_2z00, BgL_bgl_string2482za700za7za7_2511za7, "obj2", 4 );
DEFINE_STRING( BGl_string2484z00zz__r4_equivalence_6_2z00, BgL_bgl_string2484za700za7za7_2512za7, "s8", 2 );
DEFINE_STRING( BGl_string2486z00zz__r4_equivalence_6_2z00, BgL_bgl_string2486za700za7za7_2513za7, "u8", 2 );
DEFINE_STRING( BGl_string2488z00zz__r4_equivalence_6_2z00, BgL_bgl_string2488za700za7za7_2514za7, "s16", 3 );
DEFINE_STRING( BGl_string2500z00zz__r4_equivalence_6_2z00, BgL_bgl_string2500za700za7za7_2515za7, "__r4_equivalence_6_2", 20 );
DEFINE_STRING( BGl_string2490z00zz__r4_equivalence_6_2z00, BgL_bgl_string2490za700za7za7_2516za7, "u16", 3 );
DEFINE_STRING( BGl_string2492z00zz__r4_equivalence_6_2z00, BgL_bgl_string2492za700za7za7_2517za7, "s32", 3 );
DEFINE_STRING( BGl_string2494z00zz__r4_equivalence_6_2z00, BgL_bgl_string2494za700za7za7_2518za7, "u32", 3 );
DEFINE_STRING( BGl_string2495z00zz__r4_equivalence_6_2z00, BgL_bgl_string2495za700za7za7_2519za7, "long", 4 );
DEFINE_STRING( BGl_string2496z00zz__r4_equivalence_6_2z00, BgL_bgl_string2496za700za7za7_2520za7, "llong", 5 );
DEFINE_STRING( BGl_string2497z00zz__r4_equivalence_6_2z00, BgL_bgl_string2497za700za7za7_2521za7, "equal?", 6 );
DEFINE_STRING( BGl_string2498z00zz__r4_equivalence_6_2z00, BgL_bgl_string2498za700za7za7_2522za7, "object", 6 );
DEFINE_STRING( BGl_string2499z00zz__r4_equivalence_6_2z00, BgL_bgl_string2499za700za7za7_2523za7, "custom", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl__equalza7f3za7f3za7za7__2524z00, BGl__equalzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eqvzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl__eqvza7f3za7f3za7za7__r42525z00, BGl__eqvzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00, BgL_bgl__eqza7f3za7f3za7za7__r4_2526z00, BGl__eqzf3zf3zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long BgL_checksumz00_1960, char * BgL_fromz00_1961)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00))
{ 
BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00(); 
BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__r4_equivalence_6_2z00()
{ AN_OBJECT;
{ /* Ieee/equiv.scm 14 */
BGl_symbol2463z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2464z00zz__r4_equivalence_6_2z00); 
BGl_symbol2465z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2466z00zz__r4_equivalence_6_2z00); 
BGl_symbol2472z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2473z00zz__r4_equivalence_6_2z00); 
BGl_symbol2474z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2475z00zz__r4_equivalence_6_2z00); 
BGl_symbol2476z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2477z00zz__r4_equivalence_6_2z00); 
BGl_symbol2478z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2479z00zz__r4_equivalence_6_2z00); 
BGl_list2471z00zz__r4_equivalence_6_2z00 = 
MAKE_PAIR(BGl_symbol2472z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2474z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2474z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2476z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2478z00zz__r4_equivalence_6_2z00, BNIL))))); 
BGl_symbol2481z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2482z00zz__r4_equivalence_6_2z00); 
BGl_list2480z00zz__r4_equivalence_6_2z00 = 
MAKE_PAIR(BGl_symbol2472z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2474z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2474z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2481z00zz__r4_equivalence_6_2z00, 
MAKE_PAIR(BGl_symbol2478z00zz__r4_equivalence_6_2z00, BNIL))))); 
BGl_symbol2483z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2484z00zz__r4_equivalence_6_2z00); 
BGl_symbol2485z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2486z00zz__r4_equivalence_6_2z00); 
BGl_symbol2487z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2488z00zz__r4_equivalence_6_2z00); 
BGl_symbol2489z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2490z00zz__r4_equivalence_6_2z00); 
BGl_symbol2491z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2492z00zz__r4_equivalence_6_2z00); 
return ( 
BGl_symbol2493z00zz__r4_equivalence_6_2z00 = 
bstring_to_symbol(BGl_string2494z00zz__r4_equivalence_6_2z00), BUNSPEC) ;} 
}



/* eq? */
BGL_EXPORTED_DEF bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_1, obj_t BgL_obj2z00_2)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 66 */
return 
(BgL_obj1z00_1==BgL_obj2z00_2);} 
}



/* _eq? */
obj_t BGl__eqzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1889, obj_t BgL_obj1z00_1890, obj_t BgL_obj2z00_1891)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 66 */
return 
BBOOL(
(BgL_obj1z00_1890==BgL_obj2z00_1891));} 
}



/* eqv? */
BGL_EXPORTED_DEF bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_3, obj_t BgL_obj2z00_4)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 72 */
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00:
if(
(BgL_obj1z00_3==BgL_obj2z00_4))
{ /* Ieee/equiv.scm 74 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 76 */
bool_t BgL_testz00_1995;
if(
INTEGERP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 76 */
BgL_testz00_1995 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 76 */
if(
ELONGP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 76 */
BgL_testz00_1995 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 76 */
if(
LLONGP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 76 */
BgL_testz00_1995 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 76 */
BgL_testz00_1995 = 
BIGNUMP(BgL_obj1z00_3)
; } } } 
if(BgL_testz00_1995)
{ /* Ieee/equiv.scm 77 */
bool_t BgL_testz00_2003;
if(
INTEGERP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 77 */
BgL_testz00_2003 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 77 */
if(
ELONGP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 77 */
BgL_testz00_2003 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 77 */
if(
LLONGP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 77 */
BgL_testz00_2003 = ((bool_t)1)
; }  else 
{ /* Ieee/equiv.scm 77 */
BgL_testz00_2003 = 
BIGNUMP(BgL_obj2z00_4)
; } } } 
if(BgL_testz00_2003)
{ /* Ieee/equiv.scm 77 */
return 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_3, BgL_obj2z00_4);}  else 
{ /* Ieee/equiv.scm 77 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 76 */
if(
REALP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 78 */
if(
REALP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 79 */
return 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_3, BgL_obj2z00_4);}  else 
{ /* Ieee/equiv.scm 79 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 78 */
if(
SYMBOLP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 80 */
if(
SYMBOLP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 82 */
obj_t BgL_arg1834z00_830;obj_t BgL_arg1835z00_831;
BgL_arg1834z00_830 = 
SYMBOL_TO_STRING(BgL_obj1z00_3); 
BgL_arg1835z00_831 = 
SYMBOL_TO_STRING(BgL_obj2z00_4); 
return 
bigloo_strcmp(BgL_arg1834z00_830, BgL_arg1835z00_831);}  else 
{ /* Ieee/equiv.scm 81 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 80 */
if(
FOREIGNP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 83 */
if(
FOREIGNP(BgL_obj2z00_4))
{ /* Ieee/equiv.scm 84 */
return 
FOREIGN_EQP(BgL_obj1z00_3, BgL_obj2z00_4);}  else 
{ /* Ieee/equiv.scm 84 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 83 */
if(
BGL_WEAKPTRP(BgL_obj1z00_3))
{ /* Ieee/equiv.scm 85 */
if(
BGL_WEAKPTRP(BgL_obj2z00_4))
{ 
obj_t BgL_obj2z00_2035;obj_t BgL_obj1z00_2033;
BgL_obj1z00_2033 = 
weakptr_data(BgL_obj1z00_3); 
BgL_obj2z00_2035 = 
weakptr_data(BgL_obj2z00_4); 
BgL_obj2z00_4 = BgL_obj2z00_2035; 
BgL_obj1z00_3 = BgL_obj1z00_2033; 
goto BGl_eqvzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 86 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 85 */
return ((bool_t)0);} } } } } } } 
}



/* _eqv? */
obj_t BGl__eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1892, obj_t BgL_obj1z00_1893, obj_t BgL_obj2z00_1894)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 72 */
return 
BBOOL(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1893, BgL_obj2z00_1894));} 
}



/* equal? */
BGL_EXPORTED_DEF bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_obj1z00_5, obj_t BgL_obj2z00_6)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 93 */
BGl_equalzf3zf3zz__r4_equivalence_6_2z00:
if(
(BgL_obj1z00_5==BgL_obj2z00_6))
{ /* Ieee/equiv.scm 95 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 95 */
if(
STRINGP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 97 */
if(
STRINGP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 98 */
return 
bigloo_strcmp(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 98 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 97 */
if(
SYMBOLP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 99 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 99 */
if(
PAIRP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 101 */
if(
PAIRP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 102 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
CAR(BgL_obj1z00_5), 
CAR(BgL_obj2z00_6)))
{ 
obj_t BgL_obj2z00_2058;obj_t BgL_obj1z00_2056;
BgL_obj1z00_2056 = 
CDR(BgL_obj1z00_5); 
BgL_obj2z00_2058 = 
CDR(BgL_obj2z00_6); 
BgL_obj2z00_6 = BgL_obj2z00_2058; 
BgL_obj1z00_5 = BgL_obj1z00_2056; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 103 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 102 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 101 */
if(
VECTORP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 106 */
int BgL_lobj1z00_850;
BgL_lobj1z00_850 = 
VECTOR_LENGTH(BgL_obj1z00_5); 
if(
VECTORP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 108 */
bool_t BgL_testz00_2065;
{ /* Ieee/equiv.scm 108 */
int BgL_arg1856z00_865;
BgL_arg1856z00_865 = 
VECTOR_LENGTH(BgL_obj2z00_6); 
BgL_testz00_2065 = 
(
(long)(BgL_arg1856z00_865)==
(long)(BgL_lobj1z00_850)); } 
if(BgL_testz00_2065)
{ /* Ieee/equiv.scm 109 */
bool_t BgL_testz00_2070;
{ /* Ieee/equiv.scm 109 */
int BgL_arg1854z00_863;int BgL_arg1855z00_864;
BgL_arg1854z00_863 = 
VECTOR_TAG(BgL_obj1z00_5); 
BgL_arg1855z00_864 = 
VECTOR_TAG(BgL_obj2z00_6); 
BgL_testz00_2070 = 
(
(long)(BgL_arg1854z00_863)==
(long)(BgL_arg1855z00_864)); } 
if(BgL_testz00_2070)
{ 
long BgL_iz00_855;
BgL_iz00_855 = ((long)0); 
BgL_zc3anonymousza31850ze3z83_856:
{ /* Ieee/equiv.scm 111 */
bool_t BgL__ortest_1767z00_857;
BgL__ortest_1767z00_857 = 
(BgL_iz00_855==
(long)(BgL_lobj1z00_850)); 
if(BgL__ortest_1767z00_857)
{ /* Ieee/equiv.scm 111 */
return BgL__ortest_1767z00_857;}  else 
{ /* Ieee/equiv.scm 111 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
VECTOR_REF(BgL_obj1z00_5,
(int)(BgL_iz00_855)), 
VECTOR_REF(BgL_obj2z00_6,
(int)(BgL_iz00_855))))
{ 
long BgL_iz00_2085;
BgL_iz00_2085 = 
(BgL_iz00_855+((long)1)); 
BgL_iz00_855 = BgL_iz00_2085; 
goto BgL_zc3anonymousza31850ze3z83_856;}  else 
{ /* Ieee/equiv.scm 112 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 109 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 108 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 107 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 105 */
if(
BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_5, BgL_obj2z00_6))
{ /* Ieee/equiv.scm 115 */
return ((bool_t)1);}  else 
{ /* Ieee/equiv.scm 115 */
if(
INTEGERP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 117 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 117 */
if(
BGL_HVECTORP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 120 */
long BgL_lobj1z00_869;
BgL_lobj1z00_869 = 
BGL_HVECTOR_LENGTH(BgL_obj1z00_5); 
if(
BGL_HVECTORP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 122 */
bool_t BgL_testz00_2096;
{ /* Ieee/equiv.scm 122 */
long BgL_arg1874z00_917;
BgL_arg1874z00_917 = 
BGL_HVECTOR_LENGTH(BgL_obj2z00_6); 
BgL_testz00_2096 = 
(BgL_arg1874z00_917==BgL_lobj1z00_869); } 
if(BgL_testz00_2096)
{ /* Ieee/equiv.scm 123 */
obj_t BgL_tag1z00_872;
BgL_tag1z00_872 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_obj1z00_5); 
{ /* Ieee/equiv.scm 125 */
obj_t BgL__z00_873;obj_t BgL_getz00_874;obj_t BgL__z00_875;
{ /* Ieee/equiv.scm 125 */
int BgL_auxz00_2100;
BgL_auxz00_2100 = 
(int)(((long)1)); 
BgL__z00_873 = 
BGL_MVALUES_VAL(BgL_auxz00_2100); } 
{ /* Ieee/equiv.scm 125 */
int BgL_auxz00_2103;
BgL_auxz00_2103 = 
(int)(((long)2)); 
BgL_getz00_874 = 
BGL_MVALUES_VAL(BgL_auxz00_2103); } 
{ /* Ieee/equiv.scm 125 */
int BgL_auxz00_2106;
BgL_auxz00_2106 = 
(int)(((long)3)); 
BgL__z00_875 = 
BGL_MVALUES_VAL(BgL_auxz00_2106); } 
{ /* Ieee/equiv.scm 125 */
obj_t BgL_tag2z00_876;
BgL_tag2z00_876 = 
BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_obj2z00_6); 
{ /* Ieee/equiv.scm 127 */
obj_t BgL__z00_877;obj_t BgL__z00_878;obj_t BgL__z00_879;
{ /* Ieee/equiv.scm 127 */
int BgL_auxz00_2110;
BgL_auxz00_2110 = 
(int)(((long)1)); 
BgL__z00_877 = 
BGL_MVALUES_VAL(BgL_auxz00_2110); } 
{ /* Ieee/equiv.scm 127 */
int BgL_auxz00_2113;
BgL_auxz00_2113 = 
(int)(((long)2)); 
BgL__z00_878 = 
BGL_MVALUES_VAL(BgL_auxz00_2113); } 
{ /* Ieee/equiv.scm 127 */
int BgL_auxz00_2116;
BgL_auxz00_2116 = 
(int)(((long)3)); 
BgL__z00_879 = 
BGL_MVALUES_VAL(BgL_auxz00_2116); } 
if(
(BgL_tag1z00_872==BgL_tag2z00_876))
{ /* Ieee/equiv.scm 128 */
bool_t BgL_testz00_2121;
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1772z00_916;
BgL__ortest_1772z00_916 = 
(BgL_tag1z00_872==BGl_symbol2463z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1772z00_916)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2121 = BgL__ortest_1772z00_916
; }  else 
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2121 = 
(BgL_tag1z00_872==BGl_symbol2465z00zz__r4_equivalence_6_2z00)
; } } 
if(BgL_testz00_2121)
{ 
long BgL_iz00_884;
BgL_iz00_884 = ((long)0); 
BgL_zc3anonymousza31861ze3z83_885:
{ /* Ieee/equiv.scm 131 */
bool_t BgL__ortest_1773z00_886;
BgL__ortest_1773z00_886 = 
(BgL_iz00_884==BgL_lobj1z00_869); 
if(BgL__ortest_1773z00_886)
{ /* Ieee/equiv.scm 131 */
return BgL__ortest_1773z00_886;}  else 
{ /* Ieee/equiv.scm 132 */
bool_t BgL_testz00_2127;
{ /* Ieee/equiv.scm 132 */
obj_t BgL_arg1863z00_889;obj_t BgL_arg1864z00_890;
{ /* Ieee/equiv.scm 132 */
obj_t BgL_funz00_1912;
if(
PROCEDUREP(BgL_getz00_874))
{ /* Ieee/equiv.scm 132 */
BgL_funz00_1912 = BgL_getz00_874; }  else 
{ 
obj_t BgL_auxz00_2130;
BgL_auxz00_2130 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4361)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2469z00zz__r4_equivalence_6_2z00, BgL_getz00_874); 
FAILURE(BgL_auxz00_2130,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1912, ((long)2)))
{ /* Ieee/equiv.scm 132 */
BgL_arg1863z00_889 = 
PROCEDURE_ENTRY(BgL_funz00_1912)(BgL_getz00_874, BgL_obj1z00_5, 
BINT(BgL_iz00_884), BEOA); }  else 
{ /* Ieee/equiv.scm 132 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2471z00zz__r4_equivalence_6_2z00,BgL_funz00_1912);} } 
{ /* Ieee/equiv.scm 132 */
obj_t BgL_funz00_1917;
BgL_funz00_1917 = BgL_getz00_874; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1917, ((long)2)))
{ /* Ieee/equiv.scm 132 */
BgL_arg1864z00_890 = 
PROCEDURE_ENTRY(BgL_funz00_1917)(BgL_getz00_874, BgL_obj2z00_6, 
BINT(BgL_iz00_884), BEOA); }  else 
{ /* Ieee/equiv.scm 132 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2480z00zz__r4_equivalence_6_2z00,BgL_funz00_1917);} } 
BgL_testz00_2127 = 
BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_arg1863z00_889, BgL_arg1864z00_890); } 
if(BgL_testz00_2127)
{ 
long BgL_iz00_2147;
BgL_iz00_2147 = 
(BgL_iz00_884+((long)1)); 
BgL_iz00_884 = BgL_iz00_2147; 
goto BgL_zc3anonymousza31861ze3z83_885;}  else 
{ /* Ieee/equiv.scm 132 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 128 */
bool_t BgL_testz00_2149;
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1775z00_911;
BgL__ortest_1775z00_911 = 
(BgL_tag1z00_872==BGl_symbol2483z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1775z00_911)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = BgL__ortest_1775z00_911
; }  else 
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1776z00_912;
BgL__ortest_1776z00_912 = 
(BgL_tag1z00_872==BGl_symbol2485z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1776z00_912)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = BgL__ortest_1776z00_912
; }  else 
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1777z00_913;
BgL__ortest_1777z00_913 = 
(BgL_tag1z00_872==BGl_symbol2487z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1777z00_913)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = BgL__ortest_1777z00_913
; }  else 
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1778z00_914;
BgL__ortest_1778z00_914 = 
(BgL_tag1z00_872==BGl_symbol2489z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1778z00_914)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = BgL__ortest_1778z00_914
; }  else 
{ /* Ieee/equiv.scm 128 */
bool_t BgL__ortest_1779z00_915;
BgL__ortest_1779z00_915 = 
(BgL_tag1z00_872==BGl_symbol2491z00zz__r4_equivalence_6_2z00); 
if(BgL__ortest_1779z00_915)
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = BgL__ortest_1779z00_915
; }  else 
{ /* Ieee/equiv.scm 128 */
BgL_testz00_2149 = 
(BgL_tag1z00_872==BGl_symbol2493z00zz__r4_equivalence_6_2z00)
; } } } } } } 
if(BgL_testz00_2149)
{ 
long BgL_iz00_894;
BgL_iz00_894 = ((long)0); 
BgL_zc3anonymousza31866ze3z83_895:
{ /* Ieee/equiv.scm 136 */
bool_t BgL__ortest_1780z00_896;
BgL__ortest_1780z00_896 = 
(BgL_iz00_894==BgL_lobj1z00_869); 
if(BgL__ortest_1780z00_896)
{ /* Ieee/equiv.scm 136 */
return BgL__ortest_1780z00_896;}  else 
{ /* Ieee/equiv.scm 137 */
bool_t BgL_testz00_2163;
{ /* Ieee/equiv.scm 137 */
obj_t BgL_arg1868z00_899;obj_t BgL_arg1869z00_900;
{ /* Ieee/equiv.scm 137 */
obj_t BgL_funz00_1922;
if(
PROCEDUREP(BgL_getz00_874))
{ /* Ieee/equiv.scm 137 */
BgL_funz00_1922 = BgL_getz00_874; }  else 
{ 
obj_t BgL_auxz00_2166;
BgL_auxz00_2166 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4518)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2469z00zz__r4_equivalence_6_2z00, BgL_getz00_874); 
FAILURE(BgL_auxz00_2166,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1922, ((long)2)))
{ /* Ieee/equiv.scm 137 */
BgL_arg1868z00_899 = 
PROCEDURE_ENTRY(BgL_funz00_1922)(BgL_getz00_874, BgL_obj1z00_5, 
BINT(BgL_iz00_894), BEOA); }  else 
{ /* Ieee/equiv.scm 137 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2471z00zz__r4_equivalence_6_2z00,BgL_funz00_1922);} } 
{ /* Ieee/equiv.scm 137 */
obj_t BgL_funz00_1927;
BgL_funz00_1927 = BgL_getz00_874; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1927, ((long)2)))
{ /* Ieee/equiv.scm 137 */
BgL_arg1869z00_900 = 
PROCEDURE_ENTRY(BgL_funz00_1927)(BgL_getz00_874, BgL_obj2z00_6, 
BINT(BgL_iz00_894), BEOA); }  else 
{ /* Ieee/equiv.scm 137 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2480z00zz__r4_equivalence_6_2z00,BgL_funz00_1927);} } 
{ /* Ieee/equiv.scm 137 */
long BgL_n1z00_1717;long BgL_n2z00_1718;
{ /* Ieee/equiv.scm 137 */
obj_t BgL_auxz00_2182;
if(
INTEGERP(BgL_arg1868z00_899))
{ /* Ieee/equiv.scm 137 */
BgL_auxz00_2182 = BgL_arg1868z00_899
; }  else 
{ 
obj_t BgL_auxz00_2185;
BgL_auxz00_2185 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4529)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2495z00zz__r4_equivalence_6_2z00, BgL_arg1868z00_899); 
FAILURE(BgL_auxz00_2185,BFALSE,BFALSE);} 
BgL_n1z00_1717 = 
(long)CINT(BgL_auxz00_2182); } 
{ /* Ieee/equiv.scm 137 */
obj_t BgL_auxz00_2190;
if(
INTEGERP(BgL_arg1869z00_900))
{ /* Ieee/equiv.scm 137 */
BgL_auxz00_2190 = BgL_arg1869z00_900
; }  else 
{ 
obj_t BgL_auxz00_2193;
BgL_auxz00_2193 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4542)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2495z00zz__r4_equivalence_6_2z00, BgL_arg1869z00_900); 
FAILURE(BgL_auxz00_2193,BFALSE,BFALSE);} 
BgL_n2z00_1718 = 
(long)CINT(BgL_auxz00_2190); } 
BgL_testz00_2163 = 
(BgL_n1z00_1717==BgL_n2z00_1718); } } 
if(BgL_testz00_2163)
{ 
long BgL_iz00_2199;
BgL_iz00_2199 = 
(BgL_iz00_894+((long)1)); 
BgL_iz00_894 = BgL_iz00_2199; 
goto BgL_zc3anonymousza31866ze3z83_895;}  else 
{ /* Ieee/equiv.scm 137 */
return ((bool_t)0);} } } }  else 
{ 
long BgL_iz00_903;
BgL_iz00_903 = ((long)0); 
BgL_zc3anonymousza31870ze3z83_904:
{ /* Ieee/equiv.scm 141 */
bool_t BgL__ortest_1782z00_905;
BgL__ortest_1782z00_905 = 
(BgL_iz00_903==BgL_lobj1z00_869); 
if(BgL__ortest_1782z00_905)
{ /* Ieee/equiv.scm 141 */
return BgL__ortest_1782z00_905;}  else 
{ /* Ieee/equiv.scm 142 */
bool_t BgL_testz00_2203;
{ /* Ieee/equiv.scm 142 */
obj_t BgL_arg1872z00_908;obj_t BgL_arg1873z00_909;
{ /* Ieee/equiv.scm 142 */
obj_t BgL_funz00_1936;
if(
PROCEDUREP(BgL_getz00_874))
{ /* Ieee/equiv.scm 142 */
BgL_funz00_1936 = BgL_getz00_874; }  else 
{ 
obj_t BgL_auxz00_2206;
BgL_auxz00_2206 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4659)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2469z00zz__r4_equivalence_6_2z00, BgL_getz00_874); 
FAILURE(BgL_auxz00_2206,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1936, ((long)2)))
{ /* Ieee/equiv.scm 142 */
BgL_arg1872z00_908 = 
PROCEDURE_ENTRY(BgL_funz00_1936)(BgL_getz00_874, BgL_obj1z00_5, 
BINT(BgL_iz00_903), BEOA); }  else 
{ /* Ieee/equiv.scm 142 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2471z00zz__r4_equivalence_6_2z00,BgL_funz00_1936);} } 
{ /* Ieee/equiv.scm 142 */
obj_t BgL_funz00_1941;
BgL_funz00_1941 = BgL_getz00_874; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1941, ((long)2)))
{ /* Ieee/equiv.scm 142 */
BgL_arg1873z00_909 = 
PROCEDURE_ENTRY(BgL_funz00_1941)(BgL_getz00_874, BgL_obj2z00_6, 
BINT(BgL_iz00_903), BEOA); }  else 
{ /* Ieee/equiv.scm 142 */
FAILURE(BGl_string2470z00zz__r4_equivalence_6_2z00,BGl_list2480z00zz__r4_equivalence_6_2z00,BgL_funz00_1941);} } 
{ /* Ieee/equiv.scm 142 */
BGL_LONGLONG_T BgL_n1z00_1723;BGL_LONGLONG_T BgL_n2z00_1724;
{ /* Ieee/equiv.scm 142 */
obj_t BgL_auxz00_2222;
if(
LLONGP(BgL_arg1872z00_908))
{ /* Ieee/equiv.scm 142 */
BgL_auxz00_2222 = BgL_arg1872z00_908
; }  else 
{ 
obj_t BgL_auxz00_2225;
BgL_auxz00_2225 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4670)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2496z00zz__r4_equivalence_6_2z00, BgL_arg1872z00_908); 
FAILURE(BgL_auxz00_2225,BFALSE,BFALSE);} 
BgL_n1z00_1723 = 
BLLONG_TO_LLONG(BgL_auxz00_2222); } 
{ /* Ieee/equiv.scm 142 */
obj_t BgL_auxz00_2230;
if(
LLONGP(BgL_arg1873z00_909))
{ /* Ieee/equiv.scm 142 */
BgL_auxz00_2230 = BgL_arg1873z00_909
; }  else 
{ 
obj_t BgL_auxz00_2233;
BgL_auxz00_2233 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)4683)), BGl_string2468z00zz__r4_equivalence_6_2z00, BGl_string2496z00zz__r4_equivalence_6_2z00, BgL_arg1873z00_909); 
FAILURE(BgL_auxz00_2233,BFALSE,BFALSE);} 
BgL_n2z00_1724 = 
BLLONG_TO_LLONG(BgL_auxz00_2230); } 
BgL_testz00_2203 = 
(BgL_n1z00_1723==BgL_n2z00_1724); } } 
if(BgL_testz00_2203)
{ 
long BgL_iz00_2239;
BgL_iz00_2239 = 
(BgL_iz00_903+((long)1)); 
BgL_iz00_903 = BgL_iz00_2239; 
goto BgL_zc3anonymousza31870ze3z83_904;}  else 
{ /* Ieee/equiv.scm 142 */
return ((bool_t)0);} } } } } }  else 
{ /* Ieee/equiv.scm 127 */
return ((bool_t)0);} } } } }  else 
{ /* Ieee/equiv.scm 122 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 121 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 119 */
if(
REALP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 144 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 144 */
if(
STRUCTP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 147 */
int BgL_lobj1z00_920;
BgL_lobj1z00_920 = 
STRUCT_LENGTH(BgL_obj1z00_5); 
if(
STRUCTP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 148 */
if(
(
(long)(
STRUCT_LENGTH(BgL_obj2z00_6))==
(long)(BgL_lobj1z00_920)))
{ 
long BgL_iz00_924;
BgL_iz00_924 = ((long)0); 
BgL_zc3anonymousza31877ze3z83_925:
{ /* Ieee/equiv.scm 151 */
bool_t BgL__ortest_1786z00_926;
BgL__ortest_1786z00_926 = 
(BgL_iz00_924==
(long)(BgL_lobj1z00_920)); 
if(BgL__ortest_1786z00_926)
{ /* Ieee/equiv.scm 151 */
return BgL__ortest_1786z00_926;}  else 
{ /* Ieee/equiv.scm 151 */
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
STRUCT_REF(BgL_obj1z00_5, 
(int)(BgL_iz00_924)), 
STRUCT_REF(BgL_obj2z00_6, 
(int)(BgL_iz00_924))))
{ 
long BgL_iz00_2262;
BgL_iz00_2262 = 
(BgL_iz00_924+((long)1)); 
BgL_iz00_924 = BgL_iz00_2262; 
goto BgL_zc3anonymousza31877ze3z83_925;}  else 
{ /* Ieee/equiv.scm 152 */
return ((bool_t)0);} } } }  else 
{ /* Ieee/equiv.scm 149 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 148 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 146 */
if(
CELLP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 154 */
if(
CELLP(BgL_obj2z00_6))
{ 
obj_t BgL_obj2z00_2270;obj_t BgL_obj1z00_2268;
BgL_obj1z00_2268 = 
CELL_REF(BgL_obj1z00_5); 
BgL_obj2z00_2270 = 
CELL_REF(BgL_obj2z00_6); 
BgL_obj2z00_6 = BgL_obj2z00_2270; 
BgL_obj1z00_5 = BgL_obj1z00_2268; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 155 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 154 */
if(
BGL_OBJECTP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 156 */
if(
BGL_OBJECTP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 157 */
BgL_objectz00_bglt BgL_auxz00_2284;BgL_objectz00_bglt BgL_auxz00_2276;
if(
BGL_OBJECTP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 157 */
BgL_auxz00_2284 = 
(BgL_objectz00_bglt)(BgL_obj2z00_6)
; }  else 
{ 
obj_t BgL_auxz00_2288;
BgL_auxz00_2288 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)5183)), BGl_string2497z00zz__r4_equivalence_6_2z00, BGl_string2498z00zz__r4_equivalence_6_2z00, BgL_obj2z00_6); 
FAILURE(BgL_auxz00_2288,BFALSE,BFALSE);} 
if(
BGL_OBJECTP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 157 */
BgL_auxz00_2276 = 
(BgL_objectz00_bglt)(BgL_obj1z00_5)
; }  else 
{ 
obj_t BgL_auxz00_2280;
BgL_auxz00_2280 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)5178)), BGl_string2497z00zz__r4_equivalence_6_2z00, BGl_string2498z00zz__r4_equivalence_6_2z00, BgL_obj1z00_5); 
FAILURE(BgL_auxz00_2280,BFALSE,BFALSE);} 
return 
BGl_objectzd2equalzf3z21zz__objectz00(BgL_auxz00_2276, BgL_auxz00_2284);}  else 
{ /* Ieee/equiv.scm 157 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 156 */
if(
UCS2_STRINGP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 158 */
if(
UCS2_STRINGP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 159 */
return 
ucs2_strcmp(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 159 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 158 */
if(
CUSTOMP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 160 */
if(
CUSTOMP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 161 */
obj_t BgL_obj1z00_1748;obj_t BgL_obj2z00_1749;
if(
CUSTOMP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 161 */
BgL_obj1z00_1748 = BgL_obj1z00_5; }  else 
{ 
obj_t BgL_auxz00_2304;
BgL_auxz00_2304 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)5342)), BGl_string2497z00zz__r4_equivalence_6_2z00, BGl_string2499z00zz__r4_equivalence_6_2z00, BgL_obj1z00_5); 
FAILURE(BgL_auxz00_2304,BFALSE,BFALSE);} 
if(
CUSTOMP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 161 */
BgL_obj2z00_1749 = BgL_obj2z00_6; }  else 
{ 
obj_t BgL_auxz00_2310;
BgL_auxz00_2310 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2467z00zz__r4_equivalence_6_2z00, 
BINT(((long)5347)), BGl_string2497z00zz__r4_equivalence_6_2z00, BGl_string2499z00zz__r4_equivalence_6_2z00, BgL_obj2z00_6); 
FAILURE(BgL_auxz00_2310,BFALSE,BFALSE);} 
return 
CUSTOM_CMP(BgL_obj1z00_1748, BgL_obj2z00_1749);}  else 
{ /* Ieee/equiv.scm 161 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 160 */
if(
UCS2P(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 162 */
if(
UCS2P(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 163 */
return 
(
CUCS2(BgL_obj1z00_5)==
CUCS2(BgL_obj2z00_6));}  else 
{ /* Ieee/equiv.scm 163 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 162 */
if(
BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 164 */
return ((bool_t)0);}  else 
{ /* Ieee/equiv.scm 164 */
if(
BGL_DATEP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 166 */
if(
BGL_DATEP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 167 */
return 
(
bgl_date_to_seconds(BgL_obj1z00_5)==
bgl_date_to_seconds(BgL_obj2z00_6));}  else 
{ /* Ieee/equiv.scm 167 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 166 */
if(
FOREIGNP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 168 */
if(
FOREIGNP(BgL_obj2z00_6))
{ /* Ieee/equiv.scm 169 */
return 
FOREIGN_EQP(BgL_obj1z00_5, BgL_obj2z00_6);}  else 
{ /* Ieee/equiv.scm 169 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 168 */
if(
BGL_WEAKPTRP(BgL_obj1z00_5))
{ /* Ieee/equiv.scm 170 */
if(
BGL_WEAKPTRP(BgL_obj2z00_6))
{ 
obj_t BgL_obj2z00_2342;obj_t BgL_obj1z00_2340;
BgL_obj1z00_2340 = 
weakptr_data(BgL_obj1z00_5); 
BgL_obj2z00_2342 = 
weakptr_data(BgL_obj2z00_6); 
BgL_obj2z00_6 = BgL_obj2z00_2342; 
BgL_obj1z00_5 = BgL_obj1z00_2340; 
goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;}  else 
{ /* Ieee/equiv.scm 171 */
return ((bool_t)0);} }  else 
{ /* Ieee/equiv.scm 170 */
return ((bool_t)0);} } } } } } } } } } } } } } } } } } } } 
}



/* _equal? */
obj_t BGl__equalzf3zf3zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1895, obj_t BgL_obj1z00_1896, obj_t BgL_obj2z00_1897)
{ AN_OBJECT;
{ /* Ieee/equiv.scm 93 */
return 
BBOOL(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1896, BgL_obj2z00_1897));} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00()
{ AN_OBJECT;
{ /* Ieee/equiv.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00()
{ AN_OBJECT;
{ /* Ieee/equiv.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00()
{ AN_OBJECT;
{ /* Ieee/equiv.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2500z00zz__r4_equivalence_6_2z00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2500z00zz__r4_equivalence_6_2z00));} 
}

#ifdef __cplusplus
}
#endif
