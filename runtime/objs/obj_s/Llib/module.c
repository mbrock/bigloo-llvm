/*===========================================================================*/
/*   (Llib/module.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/module.scm -indent -o objs/obj_s/Llib/module.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t, obj_t);
extern bool_t bigloo_strcmp(obj_t, obj_t);
static obj_t BGl_moduleszd2mutexzd2zz__modulez00 = BUNSPEC;
static obj_t BGl__modulezd2abasezd2zz__modulez00(obj_t);
extern obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__modulez00 = BUNSPEC;
static obj_t BGl__modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t, obj_t);
static obj_t BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BUNSPEC;
static obj_t BGl_genericzd2initzd2zz__modulez00();
BGL_EXPORTED_DECL obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern bool_t fexists(char *);
BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2zz__modulez00();
static obj_t BGl_zc3anonymousza31883ze3z83zz__modulez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t);
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
extern obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31887ze3z83zz__modulez00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__modulez00();
static obj_t BGl_importedzd2moduleszd2initz00zz__modulez00();
static obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t, obj_t);
extern obj_t BGl_withzd2lockzd2zz__threadz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2334z00zz__modulez00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol2347z00zz__modulez00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__modulez00();
static obj_t BGl_symbol2360z00zz__modulez00 = BUNSPEC;
static obj_t BGl__modulezd2defaultzd2resolverz00zz__modulez00(obj_t, obj_t, obj_t);
extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__bigloozd2modulezd2resolverz00zz__modulez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
BGL_EXPORTED_DECL obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t);
static obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t, obj_t);
extern obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31945ze3z83zz__modulez00(obj_t, obj_t);
static obj_t BGl_modulezd2defaultzd2resolverz00zz__modulez00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
static obj_t BGl_zc3anonymousza31957ze3z83zz__modulez00(obj_t, obj_t);
extern obj_t BGl_filezd2separatorzd2zz__osz00();
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__modulezd2abasezd2setz12z12zz__modulez00(obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
extern obj_t BGl_dirnamez00zz__osz00(obj_t);
static obj_t BGl_zc3anonymousza31965ze3z83zz__modulez00(obj_t, obj_t);
extern obj_t BGl_warningz00zz__errorz00(obj_t);
extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t);
static obj_t BGl_afilezd2tablezd2zz__modulez00 = BUNSPEC;
static obj_t BGl_methodzd2initzd2zz__modulez00();
static obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t, obj_t, obj_t);
static obj_t *__cnst;


DEFINE_STRING( BGl_string2365z00zz__modulez00, BgL_bgl_string2365za700za7za7_2380za7, "for-each", 8 );
DEFINE_STRING( BGl_string2366z00zz__modulez00, BgL_bgl_string2366za700za7za7_2381za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string2367z00zz__modulez00, BgL_bgl_string2367za700za7za7_2382za7, "", 0 );
DEFINE_STRING( BGl_string2368z00zz__modulez00, BgL_bgl_string2368za700za7za7_2383za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2370z00zz__modulez00, BgL_bgl_string2370za700za7za7_2384za7, "uchar", 5 );
DEFINE_STRING( BGl_string2369z00zz__modulez00, BgL_bgl_string2369za700za7za7_2385za7, "relative-path", 13 );
DEFINE_STRING( BGl_string2371z00zz__modulez00, BgL_bgl_string2371za700za7za7_2386za7, "__module", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2resolverzd2setz12zd2envz12zz__modulez00, BgL_bgl__biglooza7d2module2387za7, BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00, BgL_bgl__moduleza7d2defaul2388za7, BGl__modulezd2defaultzd2resolverz00zz__modulez00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2addzd2accessz12zd2envzc0zz__modulez00, BgL_bgl__moduleza7d2addza7d22389z00, BGl__modulezd2addzd2accessz12z12zz__modulez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2abasezd2envz00zz__modulez00, BgL_bgl__moduleza7d2abaseza72390z00, BGl__modulezd2abasezd2zz__modulez00, 0L, BUNSPEC, 0 );
extern obj_t BGl_stringzf3zd2envz21zz__r4_strings_6_7z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2abasezd2setz12zd2envzc0zz__modulez00, BgL_bgl__moduleza7d2abaseza72391z00, BGl__modulezd2abasezd2setz12z12zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2readzd2accesszd2filezd2envz00zz__modulez00, BgL_bgl__moduleza7d2readza7d2392z00, BGl__modulezd2readzd2accesszd2filezd2zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2356z00zz__modulez00, BgL_bgl_za7c3anonymousza7a312393z00, BGl_zc3anonymousza31945ze3z83zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2resolverzd2envzd2zz__modulez00, BgL_bgl__biglooza7d2module2394za7, BGl__bigloozd2modulezd2resolverz00zz__modulez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_modulezd2loadzd2accesszd2filezd2envz00zz__modulez00, BgL_bgl__moduleza7d2loadza7d2395z00, BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2330z00zz__modulez00, BgL_bgl_string2330za700za7za7_2396za7, "/tmp/bigloo/runtime/Llib/module.scm", 35 );
DEFINE_STRING( BGl_string2329z00zz__modulez00, BgL_bgl_string2329za700za7za7_2397za7, "modules", 7 );
DEFINE_STRING( BGl_string2331z00zz__modulez00, BgL_bgl_string2331za700za7za7_2398za7, "bigloo-module-resolver", 22 );
DEFINE_STRING( BGl_string2332z00zz__modulez00, BgL_bgl_string2332za700za7za7_2399za7, "procedure", 9 );
DEFINE_STRING( BGl_string2333z00zz__modulez00, BgL_bgl_string2333za700za7za7_2400za7, "_bigloo-module-resolver-set!", 28 );
DEFINE_STRING( BGl_string2335z00zz__modulez00, BgL_bgl_string2335za700za7za7_2401za7, "bigloo-module-resolver-set!", 27 );
DEFINE_STRING( BGl_string2336z00zz__modulez00, BgL_bgl_string2336za700za7za7_2402za7, "Illegal resolver", 16 );
DEFINE_STRING( BGl_string2337z00zz__modulez00, BgL_bgl_string2337za700za7za7_2403za7, "_module-default-resolver", 24 );
DEFINE_STRING( BGl_string2338z00zz__modulez00, BgL_bgl_string2338za700za7za7_2404za7, "symbol", 6 );
DEFINE_STRING( BGl_string2340z00zz__modulez00, BgL_bgl_string2340za700za7za7_2405za7, "<anonymous:1887>", 16 );
DEFINE_STRING( BGl_string2339z00zz__modulez00, BgL_bgl_string2339za700za7za7_2406za7, ".", 1 );
DEFINE_STRING( BGl_string2341z00zz__modulez00, BgL_bgl_string2341za700za7za7_2407za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2342z00zz__modulez00, BgL_bgl_string2342za700za7za7_2408za7, "loop", 4 );
DEFINE_STRING( BGl_string2343z00zz__modulez00, BgL_bgl_string2343za700za7za7_2409za7, "pair", 4 );
DEFINE_STRING( BGl_string2344z00zz__modulez00, BgL_bgl_string2344za700za7za7_2410za7, "resolve-abase/bucket", 20 );
DEFINE_STRING( BGl_string2345z00zz__modulez00, BgL_bgl_string2345za700za7za7_2411za7, ".scm", 4 );
DEFINE_STRING( BGl_string2346z00zz__modulez00, BgL_bgl_string2346za700za7za7_2412za7, "module-add-access-inner!", 24 );
DEFINE_STRING( BGl_string2348z00zz__modulez00, BgL_bgl_string2348za700za7za7_2413za7, "add-access!", 11 );
DEFINE_STRING( BGl_string2350z00zz__modulez00, BgL_bgl_string2350za700za7za7_2414za7, "] for directory \"", 17 );
DEFINE_STRING( BGl_string2349z00zz__modulez00, BgL_bgl_string2349za700za7za7_2415za7, "\"", 1 );
DEFINE_STRING( BGl_string2351z00zz__modulez00, BgL_bgl_string2351za700za7za7_2416za7, " ", 1 );
DEFINE_STRING( BGl_string2352z00zz__modulez00, BgL_bgl_string2352za700za7za7_2417za7, " [", 2 );
DEFINE_STRING( BGl_string2353z00zz__modulez00, BgL_bgl_string2353za700za7za7_2418za7, "access redefinition -- ", 23 );
DEFINE_STRING( BGl_string2354z00zz__modulez00, BgL_bgl_string2354za700za7za7_2419za7, "_module-add-access!", 19 );
DEFINE_STRING( BGl_string2355z00zz__modulez00, BgL_bgl_string2355za700za7za7_2420za7, "bstring", 7 );
DEFINE_STRING( BGl_string2357z00zz__modulez00, BgL_bgl_string2357za700za7za7_2421za7, "module-read-access-file", 23 );
DEFINE_STRING( BGl_string2358z00zz__modulez00, BgL_bgl_string2358za700za7za7_2422za7, "_module-read-access-file", 24 );
DEFINE_STRING( BGl_string2359z00zz__modulez00, BgL_bgl_string2359za700za7za7_2423za7, "input-port", 10 );
DEFINE_STRING( BGl_string2361z00zz__modulez00, BgL_bgl_string2361za700za7za7_2424za7, "Illegal entry -- ", 17 );
DEFINE_STRING( BGl_string2362z00zz__modulez00, BgL_bgl_string2362za700za7za7_2425za7, "_module-load-access-file", 24 );
DEFINE_STRING( BGl_string2363z00zz__modulez00, BgL_bgl_string2363za700za7za7_2426za7, "<anonymous:1957>", 16 );
DEFINE_STRING( BGl_string2364z00zz__modulez00, BgL_bgl_string2364za700za7za7_2427za7, "<anonymous:1958>", 16 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long BgL_checksumz00_1782, char * BgL_fromz00_1783)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__modulez00))
{ 
BGl_requirezd2initializa7ationz75zz__modulez00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__modulez00(); 
BGl_importedzd2moduleszd2initz00zz__modulez00(); 
BGl_toplevelzd2initzd2zz__modulez00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 17 */
BGl_symbol2334z00zz__modulez00 = 
bstring_to_symbol(BGl_string2335z00zz__modulez00); 
BGl_symbol2347z00zz__modulez00 = 
bstring_to_symbol(BGl_string2348z00zz__modulez00); 
return ( 
BGl_symbol2360z00zz__modulez00 = 
bstring_to_symbol(BGl_string2357z00zz__modulez00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 17 */
BGl_moduleszd2mutexzd2zz__modulez00 = 
bgl_make_mutex(BGl_string2329z00zz__modulez00); 
BGl_afilezd2tablezd2zz__modulez00 = BNIL; 
return ( 
BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BGl_modulezd2defaultzd2resolverzd2envzd2zz__modulez00, BUNSPEC) ;} 
}



/* module-abase */
BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 73 */
return 
BGL_ABASE();} 
}



/* _module-abase */
obj_t BGl__modulezd2abasezd2zz__modulez00(obj_t BgL_envz00_1635)
{ AN_OBJECT;
{ /* Llib/module.scm 73 */
return 
BGL_ABASE();} 
}



/* module-abase-set! */
BGL_EXPORTED_DEF obj_t BGl_modulezd2abasezd2setz12z12zz__modulez00(obj_t BgL_valz00_1)
{ AN_OBJECT;
{ /* Llib/module.scm 76 */
return 
BGL_ABASE_SET(BgL_valz00_1);} 
}



/* _module-abase-set! */
obj_t BGl__modulezd2abasezd2setz12z12zz__modulez00(obj_t BgL_envz00_1636, obj_t BgL_valz00_1637)
{ AN_OBJECT;
{ /* Llib/module.scm 76 */
return 
BGL_ABASE_SET(BgL_valz00_1637);} 
}



/* bigloo-module-resolver */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 89 */
{ /* Llib/module.scm 89 */
obj_t BgL_aux2261z00_1673;
BgL_aux2261z00_1673 = BGl_z52bigloozd2modulezd2resolverz52zz__modulez00; 
if(
PROCEDUREP(BgL_aux2261z00_1673))
{ /* Llib/module.scm 89 */
return BgL_aux2261z00_1673;}  else 
{ 
obj_t BgL_auxz00_1800;
BgL_auxz00_1800 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)3397)), BGl_string2331z00zz__modulez00, BGl_string2332z00zz__modulez00, BgL_aux2261z00_1673); 
FAILURE(BgL_auxz00_1800,BFALSE,BFALSE);} } } 
}



/* _bigloo-module-resolver */
obj_t BGl__bigloozd2modulezd2resolverz00zz__modulez00(obj_t BgL_envz00_1638)
{ AN_OBJECT;
{ /* Llib/module.scm 89 */
return 
BGl_bigloozd2modulezd2resolverz00zz__modulez00();} 
}



/* bigloo-module-resolver-set! */
BGL_EXPORTED_DEF obj_t BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t BgL_resolvez00_2)
{ AN_OBJECT;
{ /* Llib/module.scm 92 */
{ /* Llib/module.scm 95 */
obj_t BgL_zc3anonymousza31883ze3z83_1639;
BgL_zc3anonymousza31883ze3z83_1639 = 
make_fx_procedure(BGl_zc3anonymousza31883ze3z83zz__modulez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31883ze3z83_1639, 
(int)(((long)0)), BgL_resolvez00_2); 
return 
BGl_withzd2lockzd2zz__threadz00(BGl_moduleszd2mutexzd2zz__modulez00, BgL_zc3anonymousza31883ze3z83_1639);} } 
}



/* _bigloo-module-resolver-set! */
obj_t BGl__bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(obj_t BgL_envz00_1640, obj_t BgL_resolvez00_1641)
{ AN_OBJECT;
{ /* Llib/module.scm 92 */
{ /* Llib/module.scm 95 */
obj_t BgL_auxz00_1811;
if(
PROCEDUREP(BgL_resolvez00_1641))
{ /* Llib/module.scm 95 */
BgL_auxz00_1811 = BgL_resolvez00_1641
; }  else 
{ 
obj_t BgL_auxz00_1814;
BgL_auxz00_1814 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)3552)), BGl_string2333z00zz__modulez00, BGl_string2332z00zz__modulez00, BgL_resolvez00_1641); 
FAILURE(BgL_auxz00_1814,BFALSE,BFALSE);} 
return 
BGl_bigloozd2modulezd2resolverzd2setz12zc0zz__modulez00(BgL_auxz00_1811);} } 
}



/* <anonymous:1883> */
obj_t BGl_zc3anonymousza31883ze3z83zz__modulez00(obj_t BgL_envz00_1642)
{ AN_OBJECT;
{ /* Llib/module.scm 94 */
{ /* Llib/module.scm 95 */
obj_t BgL_resolvez00_1643;
BgL_resolvez00_1643 = 
PROCEDURE_REF(BgL_envz00_1642, 
(int)(((long)0))); 
{ 

{ /* Llib/module.scm 95 */
bool_t BgL_testz00_1821;
if(
PROCEDUREP(BgL_resolvez00_1643))
{ /* Llib/module.scm 95 */
BgL_testz00_1821 = 
PROCEDURE_CORRECT_ARITYP(BgL_resolvez00_1643, 
(int)(((long)2)))
; }  else 
{ /* Llib/module.scm 95 */
BgL_testz00_1821 = ((bool_t)0)
; } 
if(BgL_testz00_1821)
{ /* Llib/module.scm 95 */
return ( 
BGl_z52bigloozd2modulezd2resolverz52zz__modulez00 = BgL_resolvez00_1643, BUNSPEC) ;}  else 
{ /* Llib/module.scm 95 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2334z00zz__modulez00, BGl_string2336z00zz__modulez00, BgL_resolvez00_1643);} } } } } 
}



/* module-default-resolver */
obj_t BGl_modulezd2defaultzd2resolverz00zz__modulez00(obj_t BgL_modz00_3, obj_t BgL_abasez00_4)
{ AN_OBJECT;
{ /* Llib/module.scm 105 */
{ /* Llib/module.scm 109 */
obj_t BgL_zc3anonymousza31887ze3z83_1644;
BgL_zc3anonymousza31887ze3z83_1644 = 
make_fx_procedure(BGl_zc3anonymousza31887ze3z83zz__modulez00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza31887ze3z83_1644, 
(int)(((long)0)), BgL_modz00_3); 
PROCEDURE_SET(BgL_zc3anonymousza31887ze3z83_1644, 
(int)(((long)1)), BgL_abasez00_4); 
return 
BGl_withzd2lockzd2zz__threadz00(BGl_moduleszd2mutexzd2zz__modulez00, BgL_zc3anonymousza31887ze3z83_1644);} } 
}



/* _module-default-resolver */
obj_t BGl__modulezd2defaultzd2resolverz00zz__modulez00(obj_t BgL_envz00_1632, obj_t BgL_modz00_1633, obj_t BgL_abasez00_1634)
{ AN_OBJECT;
{ /* Llib/module.scm 105 */
{ /* Llib/module.scm 109 */
obj_t BgL_auxz00_1835;
if(
SYMBOLP(BgL_modz00_1633))
{ /* Llib/module.scm 109 */
BgL_auxz00_1835 = BgL_modz00_1633
; }  else 
{ 
obj_t BgL_auxz00_1838;
BgL_auxz00_1838 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)4285)), BGl_string2337z00zz__modulez00, BGl_string2338z00zz__modulez00, BgL_modz00_1633); 
FAILURE(BgL_auxz00_1838,BFALSE,BFALSE);} 
return 
BGl_modulezd2defaultzd2resolverz00zz__modulez00(BgL_auxz00_1835, BgL_abasez00_1634);} } 
}



/* <anonymous:1887> */
obj_t BGl_zc3anonymousza31887ze3z83zz__modulez00(obj_t BgL_envz00_1645)
{ AN_OBJECT;
{ /* Llib/module.scm 107 */
{ /* Llib/module.scm 109 */
obj_t BgL_modz00_1646;obj_t BgL_abasez00_1647;
BgL_modz00_1646 = 
PROCEDURE_REF(BgL_envz00_1645, 
(int)(((long)0))); 
BgL_abasez00_1647 = 
PROCEDURE_REF(BgL_envz00_1645, 
(int)(((long)1))); 
{ 

if(
NULLP(BgL_abasez00_1647))
{ /* Llib/module.scm 110 */
obj_t BgL_basez00_1367;
{ /* Llib/module.scm 110 */
obj_t BgL_auxz00_1849;
{ /* Llib/module.scm 110 */
obj_t BgL_aux2269z00_1681;
BgL_aux2269z00_1681 = BGl_afilezd2tablezd2zz__modulez00; 
{ /* Llib/module.scm 110 */
bool_t BgL_testz00_1850;
if(
PAIRP(BgL_aux2269z00_1681))
{ /* Llib/module.scm 110 */
BgL_testz00_1850 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 110 */
BgL_testz00_1850 = 
NULLP(BgL_aux2269z00_1681)
; } 
if(BgL_testz00_1850)
{ /* Llib/module.scm 110 */
BgL_auxz00_1849 = BgL_aux2269z00_1681
; }  else 
{ 
obj_t BgL_auxz00_1854;
BgL_auxz00_1854 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)4305)), BGl_string2340z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2269z00_1681); 
FAILURE(BgL_auxz00_1854,BFALSE,BFALSE);} } } 
BgL_basez00_1367 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BGl_string2339z00zz__modulez00, BgL_auxz00_1849); } 
if(
PAIRP(BgL_basez00_1367))
{ /* Llib/module.scm 110 */
return 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_1646, BgL_basez00_1367);}  else 
{ /* Llib/module.scm 110 */
return BNIL;} }  else 
{ /* Llib/module.scm 109 */
if(
STRINGP(BgL_abasez00_1647))
{ /* Llib/module.scm 112 */
obj_t BgL_basez00_1373;
{ /* Llib/module.scm 112 */
obj_t BgL_auxz00_1864;
{ /* Llib/module.scm 112 */
obj_t BgL_aux2271z00_1683;
BgL_aux2271z00_1683 = BGl_afilezd2tablezd2zz__modulez00; 
{ /* Llib/module.scm 112 */
bool_t BgL_testz00_1865;
if(
PAIRP(BgL_aux2271z00_1683))
{ /* Llib/module.scm 112 */
BgL_testz00_1865 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 112 */
BgL_testz00_1865 = 
NULLP(BgL_aux2271z00_1683)
; } 
if(BgL_testz00_1865)
{ /* Llib/module.scm 112 */
BgL_auxz00_1864 = BgL_aux2271z00_1683
; }  else 
{ 
obj_t BgL_auxz00_1869;
BgL_auxz00_1869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)4358)), BGl_string2340z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2271z00_1683); 
FAILURE(BgL_auxz00_1869,BFALSE,BFALSE);} } } 
BgL_basez00_1373 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_1647, BgL_auxz00_1864); } 
if(
PAIRP(BgL_basez00_1373))
{ /* Llib/module.scm 112 */
return 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_1646, BgL_basez00_1373);}  else 
{ /* Llib/module.scm 112 */
return BNIL;} }  else 
{ /* Llib/module.scm 111 */
if(
PAIRP(BgL_abasez00_1647))
{ 
obj_t BgL_abasez00_800;
BgL_abasez00_800 = BgL_abasez00_1647; 
BgL_zc3anonymousza31891ze3z83_801:
if(
PAIRP(BgL_abasez00_800))
{ /* Llib/module.scm 116 */
obj_t BgL_resolvez00_803;
{ /* Llib/module.scm 116 */
obj_t BgL_arg1895z00_806;
BgL_arg1895z00_806 = 
CAR(BgL_abasez00_800); 
{ /* Llib/module.scm 116 */
obj_t BgL_basez00_1381;
{ /* Llib/module.scm 116 */
obj_t BgL_auxz00_1882;
{ /* Llib/module.scm 116 */
obj_t BgL_aux2273z00_1685;
BgL_aux2273z00_1685 = BGl_afilezd2tablezd2zz__modulez00; 
{ /* Llib/module.scm 116 */
bool_t BgL_testz00_1883;
if(
PAIRP(BgL_aux2273z00_1685))
{ /* Llib/module.scm 116 */
BgL_testz00_1883 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 116 */
BgL_testz00_1883 = 
NULLP(BgL_aux2273z00_1685)
; } 
if(BgL_testz00_1883)
{ /* Llib/module.scm 116 */
BgL_auxz00_1882 = BgL_aux2273z00_1685
; }  else 
{ 
obj_t BgL_auxz00_1887;
BgL_auxz00_1887 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)4478)), BGl_string2342z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2273z00_1685); 
FAILURE(BgL_auxz00_1887,BFALSE,BFALSE);} } } 
BgL_basez00_1381 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1895z00_806, BgL_auxz00_1882); } 
if(
PAIRP(BgL_basez00_1381))
{ /* Llib/module.scm 116 */
BgL_resolvez00_803 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_1646, BgL_basez00_1381); }  else 
{ /* Llib/module.scm 116 */
BgL_resolvez00_803 = BNIL; } } } 
if(
PAIRP(BgL_resolvez00_803))
{ /* Llib/module.scm 117 */
return BgL_resolvez00_803;}  else 
{ 
obj_t BgL_abasez00_1897;
BgL_abasez00_1897 = 
CDR(BgL_abasez00_800); 
BgL_abasez00_800 = BgL_abasez00_1897; 
goto BgL_zc3anonymousza31891ze3z83_801;} }  else 
{ /* Llib/module.scm 115 */
return BNIL;} }  else 
{ /* Llib/module.scm 113 */
return 
BGl_resolvezd2abaseza2z70zz__modulez00(BgL_modz00_1646);} } } } } } 
}



/* resolve-abase* */
obj_t BGl_resolvezd2abaseza2z70zz__modulez00(obj_t BgL_modz00_5)
{ AN_OBJECT;
{ /* Llib/module.scm 127 */
{ 
obj_t BgL_afilez00_810;
BgL_afilez00_810 = BGl_afilezd2tablezd2zz__modulez00; 
BgL_zc3anonymousza31896ze3z83_811:
if(
NULLP(BgL_afilez00_810))
{ /* Llib/module.scm 129 */
return BNIL;}  else 
{ /* Llib/module.scm 131 */
obj_t BgL_fz00_813;
{ /* Llib/module.scm 131 */
obj_t BgL_arg1900z00_816;
{ /* Llib/module.scm 131 */
obj_t BgL_pairz00_1387;
if(
PAIRP(BgL_afilez00_810))
{ /* Llib/module.scm 131 */
BgL_pairz00_1387 = BgL_afilez00_810; }  else 
{ 
obj_t BgL_auxz00_1904;
BgL_auxz00_1904 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)4999)), BGl_string2342z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_afilez00_810); 
FAILURE(BgL_auxz00_1904,BFALSE,BFALSE);} 
BgL_arg1900z00_816 = 
CAR(BgL_pairz00_1387); } 
BgL_fz00_813 = 
BGl_resolvezd2abasezf2bucketz20zz__modulez00(BgL_modz00_5, BgL_arg1900z00_816); } 
if(
PAIRP(BgL_fz00_813))
{ /* Llib/module.scm 132 */
return BgL_fz00_813;}  else 
{ 
obj_t BgL_afilez00_1912;
BgL_afilez00_1912 = 
CDR(BgL_afilez00_810); 
BgL_afilez00_810 = BgL_afilez00_1912; 
goto BgL_zc3anonymousza31896ze3z83_811;} } } } 
}



/* resolve-abase/bucket */
obj_t BGl_resolvezd2abasezf2bucketz20zz__modulez00(obj_t BgL_modz00_8, obj_t BgL_basez00_9)
{ AN_OBJECT;
{ /* Llib/module.scm 148 */
{ /* Llib/module.scm 149 */
obj_t BgL_cellz00_820;
{ /* Llib/module.scm 149 */
obj_t BgL_auxz00_1914;
{ /* Llib/module.scm 149 */
obj_t BgL_pairz00_1393;
if(
PAIRP(BgL_basez00_9))
{ /* Llib/module.scm 149 */
BgL_pairz00_1393 = BgL_basez00_9; }  else 
{ 
obj_t BgL_auxz00_1917;
BgL_auxz00_1917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)5722)), BGl_string2344z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_basez00_9); 
FAILURE(BgL_auxz00_1917,BFALSE,BFALSE);} 
{ /* Llib/module.scm 149 */
obj_t BgL_aux2281z00_1693;
BgL_aux2281z00_1693 = 
CDR(BgL_pairz00_1393); 
{ /* Llib/module.scm 149 */
bool_t BgL_testz00_1922;
if(
PAIRP(BgL_aux2281z00_1693))
{ /* Llib/module.scm 149 */
BgL_testz00_1922 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 149 */
BgL_testz00_1922 = 
NULLP(BgL_aux2281z00_1693)
; } 
if(BgL_testz00_1922)
{ /* Llib/module.scm 149 */
BgL_auxz00_1914 = BgL_aux2281z00_1693
; }  else 
{ 
obj_t BgL_auxz00_1926;
BgL_auxz00_1926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)5717)), BGl_string2344z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2281z00_1693); 
FAILURE(BgL_auxz00_1926,BFALSE,BFALSE);} } } } 
BgL_cellz00_820 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modz00_8, BgL_auxz00_1914); } 
if(
PAIRP(BgL_cellz00_820))
{ /* Llib/module.scm 151 */
obj_t BgL_arg1903z00_822;
BgL_arg1903z00_822 = 
CDR(BgL_cellz00_820); 
{ /* Llib/module.scm 151 */
obj_t BgL_auxz00_1934;
{ /* Llib/module.scm 151 */
bool_t BgL_testz00_1935;
if(
PAIRP(BgL_arg1903z00_822))
{ /* Llib/module.scm 151 */
BgL_testz00_1935 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 151 */
BgL_testz00_1935 = 
NULLP(BgL_arg1903z00_822)
; } 
if(BgL_testz00_1935)
{ /* Llib/module.scm 151 */
BgL_auxz00_1934 = BgL_arg1903z00_822
; }  else 
{ 
obj_t BgL_auxz00_1939;
BgL_auxz00_1939 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)5782)), BGl_string2344z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_arg1903z00_822); 
FAILURE(BgL_auxz00_1939,BFALSE,BFALSE);} } 
return 
BGl_filterz00zz__r4_control_features_6_9z00(BGl_stringzf3zd2envz21zz__r4_strings_6_7z00, BgL_auxz00_1934);} }  else 
{ /* Llib/module.scm 152 */
obj_t BgL_fz00_823;
{ /* Llib/module.scm 152 */
obj_t BgL_arg1906z00_826;
{ /* Llib/module.scm 152 */
obj_t BgL_res2246z00_1398;
{ /* Llib/module.scm 152 */
obj_t BgL_symbolz00_1396;
if(
SYMBOLP(BgL_modz00_8))
{ /* Llib/module.scm 152 */
BgL_symbolz00_1396 = BgL_modz00_8; }  else 
{ 
obj_t BgL_auxz00_1946;
BgL_auxz00_1946 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)5828)), BGl_string2344z00zz__modulez00, BGl_string2338z00zz__modulez00, BgL_modz00_8); 
FAILURE(BgL_auxz00_1946,BFALSE,BFALSE);} 
{ /* Llib/module.scm 152 */
obj_t BgL_arg2068z00_1397;
BgL_arg2068z00_1397 = 
SYMBOL_TO_STRING(BgL_symbolz00_1396); 
BgL_res2246z00_1398 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2068z00_1397); } } 
BgL_arg1906z00_826 = BgL_res2246z00_1398; } 
BgL_fz00_823 = 
string_append(BgL_arg1906z00_826, BGl_string2345z00zz__modulez00); } 
if(
fexists(
BSTRING_TO_STRING(BgL_fz00_823)))
{ /* Llib/module.scm 154 */
obj_t BgL_list1905z00_825;
BgL_list1905z00_825 = 
MAKE_PAIR(BgL_fz00_823, BNIL); 
return BgL_list1905z00_825;}  else 
{ /* Llib/module.scm 153 */
return BNIL;} } } } 
}



/* module-add-access-inner! */
obj_t BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(obj_t BgL_modulez00_10, obj_t BgL_filesz00_11, obj_t BgL_abasez00_12)
{ AN_OBJECT;
{ /* Llib/module.scm 160 */
{ /* Llib/module.scm 161 */
obj_t BgL_basez00_829;
{ /* Llib/module.scm 161 */
obj_t BgL_auxz00_1957;
{ /* Llib/module.scm 161 */
obj_t BgL_aux2287z00_1699;
BgL_aux2287z00_1699 = BGl_afilezd2tablezd2zz__modulez00; 
{ /* Llib/module.scm 161 */
bool_t BgL_testz00_1958;
if(
PAIRP(BgL_aux2287z00_1699))
{ /* Llib/module.scm 161 */
BgL_testz00_1958 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 161 */
BgL_testz00_1958 = 
NULLP(BgL_aux2287z00_1699)
; } 
if(BgL_testz00_1958)
{ /* Llib/module.scm 161 */
BgL_auxz00_1957 = BgL_aux2287z00_1699
; }  else 
{ 
obj_t BgL_auxz00_1962;
BgL_auxz00_1962 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6199)), BGl_string2346z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2287z00_1699); 
FAILURE(BgL_auxz00_1962,BFALSE,BFALSE);} } } 
BgL_basez00_829 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_abasez00_12, BgL_auxz00_1957); } 
if(
CBOOL(BgL_basez00_829))
{ /* Llib/module.scm 165 */
obj_t BgL_cellz00_830;
{ /* Llib/module.scm 165 */
obj_t BgL_auxz00_1969;
{ /* Llib/module.scm 165 */
obj_t BgL_pairz00_1402;
if(
PAIRP(BgL_basez00_829))
{ /* Llib/module.scm 165 */
BgL_pairz00_1402 = BgL_basez00_829; }  else 
{ 
obj_t BgL_auxz00_1972;
BgL_auxz00_1972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6351)), BGl_string2346z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_basez00_829); 
FAILURE(BgL_auxz00_1972,BFALSE,BFALSE);} 
{ /* Llib/module.scm 165 */
obj_t BgL_aux2291z00_1703;
BgL_aux2291z00_1703 = 
CDR(BgL_pairz00_1402); 
{ /* Llib/module.scm 165 */
bool_t BgL_testz00_1977;
if(
PAIRP(BgL_aux2291z00_1703))
{ /* Llib/module.scm 165 */
BgL_testz00_1977 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 165 */
BgL_testz00_1977 = 
NULLP(BgL_aux2291z00_1703)
; } 
if(BgL_testz00_1977)
{ /* Llib/module.scm 165 */
BgL_auxz00_1969 = BgL_aux2291z00_1703
; }  else 
{ 
obj_t BgL_auxz00_1981;
BgL_auxz00_1981 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6346)), BGl_string2346z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_aux2291z00_1703); 
FAILURE(BgL_auxz00_1981,BFALSE,BFALSE);} } } } 
BgL_cellz00_830 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_modulez00_10, BgL_auxz00_1969); } 
if(
CBOOL(BgL_cellz00_830))
{ /* Llib/module.scm 168 */
bool_t BgL_testz00_1988;
{ /* Llib/module.scm 168 */
obj_t BgL_auxz00_1989;
{ /* Llib/module.scm 168 */
obj_t BgL_pairz00_1403;
if(
PAIRP(BgL_cellz00_830))
{ /* Llib/module.scm 168 */
BgL_pairz00_1403 = BgL_cellz00_830; }  else 
{ 
obj_t BgL_auxz00_1992;
BgL_auxz00_1992 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6462)), BGl_string2346z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_cellz00_830); 
FAILURE(BgL_auxz00_1992,BFALSE,BFALSE);} 
BgL_auxz00_1989 = 
CDR(BgL_pairz00_1403); } 
BgL_testz00_1988 = 
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_auxz00_1989, BgL_filesz00_11); } 
if(BgL_testz00_1988)
{ /* Llib/module.scm 168 */
return BFALSE;}  else 
{ /* Llib/module.scm 168 */
{ /* Llib/module.scm 169 */
obj_t BgL_pairz00_1404;
if(
PAIRP(BgL_cellz00_830))
{ /* Llib/module.scm 169 */
BgL_pairz00_1404 = BgL_cellz00_830; }  else 
{ 
obj_t BgL_auxz00_2000;
BgL_auxz00_2000 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6491)), BGl_string2346z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_cellz00_830); 
FAILURE(BgL_auxz00_2000,BFALSE,BFALSE);} 
SET_CDR(BgL_pairz00_1404, BgL_filesz00_11); } 
{ /* Llib/module.scm 170 */
obj_t BgL_arg1910z00_832;obj_t BgL_arg1914z00_835;
BgL_arg1910z00_832 = BGl_symbol2347z00zz__modulez00; 
BgL_arg1914z00_835 = 
CDR(BgL_cellz00_830); 
{ /* Llib/module.scm 170 */
obj_t BgL_list1919z00_839;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1920z00_840;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1921z00_841;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1922z00_842;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1923z00_843;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1924z00_844;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1925z00_845;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1926z00_846;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1927z00_847;
{ /* Llib/module.scm 170 */
obj_t BgL_arg1929z00_848;
BgL_arg1929z00_848 = 
MAKE_PAIR(BGl_string2349z00zz__modulez00, BNIL); 
BgL_arg1927z00_847 = 
MAKE_PAIR(BgL_abasez00_12, BgL_arg1929z00_848); } 
BgL_arg1926z00_846 = 
MAKE_PAIR(BGl_string2350z00zz__modulez00, BgL_arg1927z00_847); } 
BgL_arg1925z00_845 = 
MAKE_PAIR(BgL_filesz00_11, BgL_arg1926z00_846); } 
BgL_arg1924z00_844 = 
MAKE_PAIR(BGl_string2351z00zz__modulez00, BgL_arg1925z00_845); } 
BgL_arg1923z00_843 = 
MAKE_PAIR(BgL_arg1914z00_835, BgL_arg1924z00_844); } 
BgL_arg1922z00_842 = 
MAKE_PAIR(BGl_string2352z00zz__modulez00, BgL_arg1923z00_843); } 
BgL_arg1921z00_841 = 
MAKE_PAIR(BgL_modulez00_10, BgL_arg1922z00_842); } 
BgL_arg1920z00_840 = 
MAKE_PAIR(BGl_string2353z00zz__modulez00, BgL_arg1921z00_841); } 
BgL_list1919z00_839 = 
MAKE_PAIR(BgL_arg1910z00_832, BgL_arg1920z00_840); } 
return 
BGl_warningz00zz__errorz00(BgL_list1919z00_839);} } } }  else 
{ /* Llib/module.scm 167 */
obj_t BgL_arg1931z00_850;
{ /* Llib/module.scm 167 */
obj_t BgL_arg1932z00_851;obj_t BgL_arg1935z00_852;
BgL_arg1932z00_851 = 
MAKE_PAIR(BgL_modulez00_10, BgL_filesz00_11); 
{ /* Llib/module.scm 167 */
obj_t BgL_pairz00_1407;
if(
PAIRP(BgL_basez00_829))
{ /* Llib/module.scm 167 */
BgL_pairz00_1407 = BgL_basez00_829; }  else 
{ 
obj_t BgL_auxz00_2020;
BgL_auxz00_2020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)6430)), BGl_string2346z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_basez00_829); 
FAILURE(BgL_auxz00_2020,BFALSE,BFALSE);} 
BgL_arg1935z00_852 = 
CDR(BgL_pairz00_1407); } 
BgL_arg1931z00_850 = 
MAKE_PAIR(BgL_arg1932z00_851, BgL_arg1935z00_852); } 
return 
SET_CDR(BgL_basez00_829, BgL_arg1931z00_850);} }  else 
{ /* Llib/module.scm 164 */
obj_t BgL_arg1938z00_854;
{ /* Llib/module.scm 164 */
obj_t BgL_arg1940z00_855;
{ /* Llib/module.scm 164 */
obj_t BgL_arg1941z00_856;
BgL_arg1941z00_856 = 
MAKE_PAIR(BgL_modulez00_10, BgL_filesz00_11); 
{ /* Llib/module.scm 164 */
obj_t BgL_list1942z00_857;
BgL_list1942z00_857 = 
MAKE_PAIR(BgL_arg1941z00_856, BNIL); 
BgL_arg1940z00_855 = BgL_list1942z00_857; } } 
BgL_arg1938z00_854 = 
MAKE_PAIR(BgL_abasez00_12, BgL_arg1940z00_855); } 
return ( 
BGl_afilezd2tablezd2zz__modulez00 = 
MAKE_PAIR(BgL_arg1938z00_854, BGl_afilezd2tablezd2zz__modulez00), BUNSPEC) ;} } } 
}



/* module-add-access! */
BGL_EXPORTED_DEF obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t BgL_modulez00_13, obj_t BgL_filesz00_14, obj_t BgL_abasez00_15)
{ AN_OBJECT;
{ /* Llib/module.scm 178 */
{ /* Llib/module.scm 179 */
obj_t BgL_g1874z00_1412;
BgL_g1874z00_1412 = BGl_moduleszd2mutexzd2zz__modulez00; 
{ /* Llib/module.scm 179 */

if(
(((long)0)==((long)0)))
{ /* Llib/module.scm 179 */
bgl_mutex_lock(BgL_g1874z00_1412); }  else 
{ /* Llib/module.scm 179 */
bgl_mutex_timed_lock(BgL_g1874z00_1412, ((long)0)); } } } 
BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_modulez00_13, BgL_filesz00_14, BgL_abasez00_15); 
{ /* Llib/module.scm 179 */
obj_t BgL_mz00_1419;
BgL_mz00_1419 = BGl_moduleszd2mutexzd2zz__modulez00; 
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_1419));} } 
}



/* _module-add-access! */
obj_t BGl__modulezd2addzd2accessz12z12zz__modulez00(obj_t BgL_envz00_1650, obj_t BgL_modulez00_1651, obj_t BgL_filesz00_1652, obj_t BgL_abasez00_1653)
{ AN_OBJECT;
{ /* Llib/module.scm 178 */
{ /* Llib/module.scm 181 */
obj_t BgL_auxz00_2052;obj_t BgL_auxz00_2045;obj_t BgL_auxz00_2038;
if(
STRINGP(BgL_abasez00_1653))
{ /* Llib/module.scm 181 */
BgL_auxz00_2052 = BgL_abasez00_1653
; }  else 
{ 
obj_t BgL_auxz00_2055;
BgL_auxz00_2055 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7035)), BGl_string2354z00zz__modulez00, BGl_string2355z00zz__modulez00, BgL_abasez00_1653); 
FAILURE(BgL_auxz00_2055,BFALSE,BFALSE);} 
if(
PAIRP(BgL_filesz00_1652))
{ /* Llib/module.scm 181 */
BgL_auxz00_2045 = BgL_filesz00_1652
; }  else 
{ 
obj_t BgL_auxz00_2048;
BgL_auxz00_2048 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7035)), BGl_string2354z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_filesz00_1652); 
FAILURE(BgL_auxz00_2048,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_modulez00_1651))
{ /* Llib/module.scm 181 */
BgL_auxz00_2038 = BgL_modulez00_1651
; }  else 
{ 
obj_t BgL_auxz00_2041;
BgL_auxz00_2041 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7035)), BGl_string2354z00zz__modulez00, BGl_string2338z00zz__modulez00, BgL_modulez00_1651); 
FAILURE(BgL_auxz00_2041,BFALSE,BFALSE);} 
return 
BGl_modulezd2addzd2accessz12z12zz__modulez00(BgL_auxz00_2038, BgL_auxz00_2045, BgL_auxz00_2052);} } 
}



/* module-read-access-file */
BGL_EXPORTED_DEF obj_t BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t BgL_portz00_16)
{ AN_OBJECT;
{ /* Llib/module.scm 186 */
{ /* Llib/module.scm 187 */
obj_t BgL_arg1944z00_861;
{ /* Llib/module.scm 193 */

{ /* Llib/module.scm 193 */

BgL_arg1944z00_861 = 
BGl_readz00zz__readerz00(BgL_portz00_16, BFALSE); } } 
{ /* Llib/module.scm 187 */
obj_t BgL_auxz00_2061;
{ /* Llib/module.scm 193 */
bool_t BgL_testz00_2062;
if(
PAIRP(BgL_arg1944z00_861))
{ /* Llib/module.scm 193 */
BgL_testz00_2062 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 193 */
BgL_testz00_2062 = 
NULLP(BgL_arg1944z00_861)
; } 
if(BgL_testz00_2062)
{ /* Llib/module.scm 193 */
BgL_auxz00_2061 = BgL_arg1944z00_861
; }  else 
{ 
obj_t BgL_auxz00_2066;
BgL_auxz00_2066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7493)), BGl_string2357z00zz__modulez00, BGl_string2341z00zz__modulez00, BgL_arg1944z00_861); 
FAILURE(BgL_auxz00_2066,BFALSE,BFALSE);} } 
return 
BGl_filterz00zz__r4_control_features_6_9z00(BGl_proc2356z00zz__modulez00, BgL_auxz00_2061);} } } 
}



/* _module-read-access-file */
obj_t BGl__modulezd2readzd2accesszd2filezd2zz__modulez00(obj_t BgL_envz00_1655, obj_t BgL_portz00_1656)
{ AN_OBJECT;
{ /* Llib/module.scm 186 */
{ /* Llib/module.scm 187 */
obj_t BgL_auxz00_2071;
if(
INPUT_PORTP(BgL_portz00_1656))
{ /* Llib/module.scm 187 */
BgL_auxz00_2071 = BgL_portz00_1656
; }  else 
{ 
obj_t BgL_auxz00_2074;
BgL_auxz00_2074 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7311)), BGl_string2358z00zz__modulez00, BGl_string2359z00zz__modulez00, BgL_portz00_1656); 
FAILURE(BgL_auxz00_2074,BFALSE,BFALSE);} 
return 
BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(BgL_auxz00_2071);} } 
}



/* <anonymous:1945> */
obj_t BGl_zc3anonymousza31945ze3z83zz__modulez00(obj_t BgL_envz00_1657, obj_t BgL_xz00_1658)
{ AN_OBJECT;
{ /* Llib/module.scm 187 */
{ 
obj_t BgL_xz00_862;
{ /* Llib/module.scm 188 */
bool_t BgL_auxz00_2079;
BgL_xz00_862 = BgL_xz00_1658; 
{ /* Llib/module.scm 188 */
bool_t BgL_testz00_2080;
if(
PAIRP(BgL_xz00_862))
{ /* Llib/module.scm 188 */
bool_t BgL_testz00_2083;
{ /* Llib/module.scm 188 */
obj_t BgL_auxz00_2084;
BgL_auxz00_2084 = 
CAR(BgL_xz00_862); 
BgL_testz00_2083 = 
SYMBOLP(BgL_auxz00_2084); } 
if(BgL_testz00_2083)
{ /* Llib/module.scm 188 */
BgL_testz00_2080 = 
BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(
CDR(BgL_xz00_862))
; }  else 
{ /* Llib/module.scm 188 */
BgL_testz00_2080 = ((bool_t)0)
; } }  else 
{ /* Llib/module.scm 188 */
BgL_testz00_2080 = ((bool_t)0)
; } 
if(BgL_testz00_2080)
{ /* Llib/module.scm 188 */
BgL_auxz00_2079 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 188 */
{ /* Llib/module.scm 191 */
obj_t BgL_list1947z00_865;
{ /* Llib/module.scm 191 */
obj_t BgL_arg1948z00_866;obj_t BgL_arg1949z00_867;
BgL_arg1948z00_866 = BGl_symbol2360z00zz__modulez00; 
{ /* Llib/module.scm 191 */
obj_t BgL_arg1951z00_869;
BgL_arg1951z00_869 = 
MAKE_PAIR(BgL_xz00_862, BNIL); 
BgL_arg1949z00_867 = 
MAKE_PAIR(BGl_string2361z00zz__modulez00, BgL_arg1951z00_869); } 
BgL_list1947z00_865 = 
MAKE_PAIR(BgL_arg1948z00_866, BgL_arg1949z00_867); } 
BGl_warningz00zz__errorz00(BgL_list1947z00_865); } 
BgL_auxz00_2079 = ((bool_t)0); } } 
return 
BBOOL(BgL_auxz00_2079);} } } 
}



/* module-load-access-file */
BGL_EXPORTED_DEF obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t BgL_namez00_17)
{ AN_OBJECT;
{ /* Llib/module.scm 198 */
{ /* Llib/module.scm 206 */
obj_t BgL_g1874z00_878;
BgL_g1874z00_878 = BGl_moduleszd2mutexzd2zz__modulez00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_g1874z00_878); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_g1874z00_878, ((long)0)); } } } 
{ /* Llib/module.scm 209 */
obj_t BgL_zc3anonymousza31957ze3z83_1660;
BgL_zc3anonymousza31957ze3z83_1660 = 
make_fx_procedure(BGl_zc3anonymousza31957ze3z83zz__modulez00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31957ze3z83_1660, 
(int)(((long)0)), BgL_namez00_17); 
BGl_callzd2withzd2inputzd2filezd2zz__r4_ports_6_10_1z00(BgL_namez00_17, BgL_zc3anonymousza31957ze3z83_1660); } 
{ /* Llib/module.scm 218 */
obj_t BgL_mz00_1438;
BgL_mz00_1438 = BGl_moduleszd2mutexzd2zz__modulez00; 
return 
BBOOL(
bgl_mutex_unlock(BgL_mz00_1438));} } 
}



/* _module-load-access-file */
obj_t BGl__modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t BgL_envz00_1661, obj_t BgL_namez00_1662)
{ AN_OBJECT;
{ /* Llib/module.scm 198 */
{ /* Llib/module.scm 202 */
obj_t BgL_auxz00_2106;
if(
STRINGP(BgL_namez00_1662))
{ /* Llib/module.scm 202 */
BgL_auxz00_2106 = BgL_namez00_1662
; }  else 
{ 
obj_t BgL_auxz00_2109;
BgL_auxz00_2109 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7813)), BGl_string2362z00zz__modulez00, BGl_string2355z00zz__modulez00, BgL_namez00_1662); 
FAILURE(BgL_auxz00_2109,BFALSE,BFALSE);} 
return 
BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_auxz00_2106);} } 
}



/* <anonymous:1957> */
obj_t BGl_zc3anonymousza31957ze3z83zz__modulez00(obj_t BgL_envz00_1663, obj_t BgL_portz00_1665)
{ AN_OBJECT;
{ /* Llib/module.scm 208 */
{ /* Llib/module.scm 209 */
obj_t BgL_namez00_1664;
BgL_namez00_1664 = 
PROCEDURE_REF(BgL_envz00_1663, 
(int)(((long)0))); 
{ 
obj_t BgL_portz00_881;
BgL_portz00_881 = BgL_portz00_1665; 
{ /* Llib/module.scm 209 */
obj_t BgL_abasez00_883;
{ /* Llib/module.scm 209 */
obj_t BgL_auxz00_2116;
if(
STRINGP(BgL_namez00_1664))
{ /* Llib/module.scm 209 */
BgL_auxz00_2116 = BgL_namez00_1664
; }  else 
{ 
obj_t BgL_auxz00_2119;
BgL_auxz00_2119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)8050)), BGl_string2363z00zz__modulez00, BGl_string2355z00zz__modulez00, BgL_namez00_1664); 
FAILURE(BgL_auxz00_2119,BFALSE,BFALSE);} 
BgL_abasez00_883 = 
BGl_dirnamez00zz__osz00(BgL_auxz00_2116); } 
{ /* Llib/module.scm 210 */
obj_t BgL_g1846z00_884;
{ /* Llib/module.scm 217 */
obj_t BgL_auxz00_2124;
if(
INPUT_PORTP(BgL_portz00_881))
{ /* Llib/module.scm 217 */
BgL_auxz00_2124 = BgL_portz00_881
; }  else 
{ 
obj_t BgL_auxz00_2127;
BgL_auxz00_2127 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)8329)), BGl_string2363z00zz__modulez00, BGl_string2359z00zz__modulez00, BgL_portz00_881); 
FAILURE(BgL_auxz00_2127,BFALSE,BFALSE);} 
BgL_g1846z00_884 = 
BGl_modulezd2readzd2accesszd2filezd2zz__modulez00(BgL_auxz00_2124); } 
{ 
obj_t BgL_l1844z00_886;
BgL_l1844z00_886 = BgL_g1846z00_884; 
BgL_zc3anonymousza31958ze3z83_887:
if(
PAIRP(BgL_l1844z00_886))
{ /* Llib/module.scm 217 */
{ /* Llib/module.scm 211 */
obj_t BgL_accessz00_889;
BgL_accessz00_889 = 
CAR(BgL_l1844z00_886); 
{ /* Llib/module.scm 211 */
obj_t BgL_infoz00_890;
if(
bigloo_strcmp(BgL_abasez00_883, BGl_string2339z00zz__modulez00))
{ /* Llib/module.scm 212 */
obj_t BgL_pairz00_1433;
if(
PAIRP(BgL_accessz00_889))
{ /* Llib/module.scm 212 */
BgL_pairz00_1433 = BgL_accessz00_889; }  else 
{ 
obj_t BgL_auxz00_2139;
BgL_auxz00_2139 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)8142)), BGl_string2364z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_accessz00_889); 
FAILURE(BgL_auxz00_2139,BFALSE,BFALSE);} 
BgL_infoz00_890 = 
CDR(BgL_pairz00_1433); }  else 
{ /* Llib/module.scm 213 */
obj_t BgL_arg1963z00_894;
{ /* Llib/module.scm 215 */
obj_t BgL_pairz00_1434;
if(
PAIRP(BgL_accessz00_889))
{ /* Llib/module.scm 215 */
BgL_pairz00_1434 = BgL_accessz00_889; }  else 
{ 
obj_t BgL_auxz00_2146;
BgL_auxz00_2146 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)8224)), BGl_string2364z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_accessz00_889); 
FAILURE(BgL_auxz00_2146,BFALSE,BFALSE);} 
BgL_arg1963z00_894 = 
CDR(BgL_pairz00_1434); } 
{ /* Llib/module.scm 214 */
obj_t BgL_zc3anonymousza31965ze3z83_1659;
BgL_zc3anonymousza31965ze3z83_1659 = 
make_fx_procedure(BGl_zc3anonymousza31965ze3z83zz__modulez00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31965ze3z83_1659, 
(int)(((long)0)), BgL_abasez00_883); 
{ /* Llib/module.scm 213 */
obj_t BgL_list1964z00_895;
BgL_list1964z00_895 = 
MAKE_PAIR(BgL_arg1963z00_894, BNIL); 
BgL_infoz00_890 = 
BGl_mapz12z12zz__r4_control_features_6_9z00(BgL_zc3anonymousza31965ze3z83_1659, BgL_list1964z00_895); } } } 
{ /* Llib/module.scm 216 */
obj_t BgL_arg1960z00_891;
{ /* Llib/module.scm 216 */
obj_t BgL_pairz00_1435;
if(
PAIRP(BgL_accessz00_889))
{ /* Llib/module.scm 216 */
BgL_pairz00_1435 = BgL_accessz00_889; }  else 
{ 
obj_t BgL_auxz00_2160;
BgL_auxz00_2160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)8274)), BGl_string2364z00zz__modulez00, BGl_string2343z00zz__modulez00, BgL_accessz00_889); 
FAILURE(BgL_auxz00_2160,BFALSE,BFALSE);} 
BgL_arg1960z00_891 = 
CAR(BgL_pairz00_1435); } 
BGl_modulezd2addzd2accesszd2innerz12zc0zz__modulez00(BgL_arg1960z00_891, BgL_infoz00_890, BgL_abasez00_883); } } } 
{ 
obj_t BgL_l1844z00_2166;
BgL_l1844z00_2166 = 
CDR(BgL_l1844z00_886); 
BgL_l1844z00_886 = BgL_l1844z00_2166; 
goto BgL_zc3anonymousza31958ze3z83_887;} }  else 
{ /* Llib/module.scm 217 */
if(
NULLP(BgL_l1844z00_886))
{ /* Llib/module.scm 217 */
return BTRUE;}  else 
{ /* Llib/module.scm 217 */
return 
BGl_errorz00zz__errorz00(BGl_string2365z00zz__modulez00, BGl_string2366z00zz__modulez00, BgL_l1844z00_886);} } } } } } } } 
}



/* <anonymous:1965> */
obj_t BGl_zc3anonymousza31965ze3z83zz__modulez00(obj_t BgL_envz00_1666, obj_t BgL_fz00_1668)
{ AN_OBJECT;
{ /* Llib/module.scm 213 */
{ /* Llib/module.scm 214 */
obj_t BgL_abasez00_1667;
BgL_abasez00_1667 = 
PROCEDURE_REF(BgL_envz00_1666, 
(int)(((long)0))); 
{ 
obj_t BgL_fz00_896;
BgL_fz00_896 = BgL_fz00_1668; 
{ 
obj_t BgL_fz00_903;obj_t BgL_abasez00_904;
BgL_fz00_903 = BgL_fz00_896; 
BgL_abasez00_904 = BgL_abasez00_1667; 
if(
STRINGP(BgL_fz00_903))
{ /* Llib/module.scm 203 */
bool_t BgL_testz00_2175;
if(
bigloo_strcmp(BgL_fz00_903, BGl_string2367z00zz__modulez00))
{ /* Llib/module.scm 203 */
BgL_testz00_2175 = ((bool_t)1)
; }  else 
{ /* Llib/module.scm 203 */
unsigned char BgL_arg1972z00_909;obj_t BgL_arg1973z00_910;
{ /* Llib/module.scm 203 */
obj_t BgL_s2257z00_1669;
BgL_s2257z00_1669 = BgL_fz00_903; 
{ /* Llib/module.scm 203 */
long BgL_l2259z00_1671;
BgL_l2259z00_1671 = 
STRING_LENGTH(BgL_s2257z00_1669); 
if(
BOUND_CHECK(((long)0), BgL_l2259z00_1671))
{ /* Llib/module.scm 203 */
BgL_arg1972z00_909 = 
STRING_REF(BgL_s2257z00_1669, ((long)0)); }  else 
{ 
obj_t BgL_auxz00_2182;
BgL_auxz00_2182 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7865)), BGl_string2368z00zz__modulez00, 
BINT(((long)0)), BgL_s2257z00_1669); 
FAILURE(BgL_auxz00_2182,BFALSE,BFALSE);} } } 
BgL_arg1973z00_910 = 
BGl_filezd2separatorzd2zz__osz00(); 
{ /* Llib/module.scm 203 */
unsigned char BgL_char2z00_1445;
{ /* Llib/module.scm 203 */
obj_t BgL_auxz00_2188;
if(
CHARP(BgL_arg1973z00_910))
{ /* Llib/module.scm 203 */
BgL_auxz00_2188 = BgL_arg1973z00_910
; }  else 
{ 
obj_t BgL_auxz00_2191;
BgL_auxz00_2191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7897)), BGl_string2369z00zz__modulez00, BGl_string2370z00zz__modulez00, BgL_arg1973z00_910); 
FAILURE(BgL_auxz00_2191,BFALSE,BFALSE);} 
BgL_char2z00_1445 = 
CCHAR(BgL_auxz00_2188); } 
BgL_testz00_2175 = 
(BgL_arg1972z00_909==BgL_char2z00_1445); } } 
if(BgL_testz00_2175)
{ /* Llib/module.scm 203 */
return BgL_fz00_903;}  else 
{ /* Llib/module.scm 204 */
obj_t BgL_auxz00_2197;
if(
STRINGP(BgL_abasez00_904))
{ /* Llib/module.scm 204 */
BgL_auxz00_2197 = BgL_abasez00_904
; }  else 
{ 
obj_t BgL_auxz00_2200;
BgL_auxz00_2200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2330z00zz__modulez00, 
BINT(((long)7928)), BGl_string2369z00zz__modulez00, BGl_string2355z00zz__modulez00, BgL_abasez00_904); 
FAILURE(BgL_auxz00_2200,BFALSE,BFALSE);} 
return 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_2197, BgL_fz00_903);} }  else 
{ /* Llib/module.scm 202 */
return BgL_fz00_903;} } } } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 17 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 17 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__modulez00()
{ AN_OBJECT;
{ /* Llib/module.scm 17 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)306671391), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00)); 
return 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)32372471), 
BSTRING_TO_STRING(BGl_string2371z00zz__modulez00));} 
}

#ifdef __cplusplus
}
#endif
