/*===========================================================================*/
/*   (Llib/bigloo.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/bigloo.scm -indent -o objs/obj_s/Llib/bigloo.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
extern obj_t bgl_bmem_reset();
BGL_EXPORTED_DECL bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t);
static obj_t BGl_toplevelzd2initzd2zz__biglooz00();
BGL_EXPORTED_DECL bool_t bigloo_class_mangledp(obj_t);
BGL_EXPORTED_DECL obj_t BGl_opaquezd2nilzd2zz__biglooz00();
extern obj_t make_string(long, unsigned char);
extern bool_t bigloo_strcmp(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t);
extern obj_t bstring_to_symbol(obj_t);
static obj_t BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t bgl_exit_mutex();
static obj_t BGl__bigloozd2exitzd2applyz00zz__biglooz00(obj_t, obj_t);
static obj_t BGl__bigloozd2mangledzf3z21zz__biglooz00(obj_t, obj_t);
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
BGL_EXPORTED_DECL obj_t bigloo_mangle(obj_t);
static obj_t BGl__timez00zz__biglooz00(obj_t, obj_t);
static long BGl_manglezd2atz12zc0zz__biglooz00(obj_t, obj_t, long, long);
static obj_t BGl__procedurezd2arityzd2zz__biglooz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__biglooz00();
BGL_EXPORTED_DECL obj_t bigloo_demangle(obj_t);
extern obj_t string_to_bstring(char *);
static obj_t BGl_symbol2565z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_za2releaseza2z00zz__biglooz00 = BUNSPEC;
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl__bmemzd2resetz12zc0zz__biglooz00(obj_t);
static obj_t BGl_symbol2608z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_symbol2610z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_symbol2612z00zz__biglooz00 = BUNSPEC;
static obj_t BGl_symbol2614z00zz__biglooz00 = BUNSPEC;
static obj_t BGl__registerzd2exitzd2functionz12z12zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bigloo_module_mangle(obj_t, obj_t);
static obj_t BGl__opaquezd2nilzd2zz__biglooz00(obj_t);
static obj_t BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BUNSPEC;
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t bigloo_class_demangle(obj_t);
static obj_t BGl_za2modulesza2z00zz__biglooz00 = BUNSPEC;
extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern unsigned char BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(long);
static obj_t BGl__checkzd2versionz12zc0zz__biglooz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_list2607z00zz__biglooz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t, obj_t);
static obj_t BGl__unspecifiedz00zz__biglooz00(obj_t);
static obj_t BGl__bigloozd2modulezd2manglez00zz__biglooz00(obj_t, obj_t, obj_t);
static long BGl_charzd2ze3digitz31zz__biglooz00(unsigned char);
static obj_t BGl__procedurezd2attrzd2setz12z12zz__biglooz00(obj_t, obj_t, obj_t);
static obj_t BGl__bigloozd2classzd2demanglez00zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__biglooz00();
static obj_t BGl__bigloozd2exitzd2mutexz00zz__biglooz00(obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_za2levelza2z00zz__biglooz00 = BUNSPEC;
static obj_t BGl__bigloozd2demanglezd2zz__biglooz00(obj_t, obj_t);
static obj_t BGl__procedurezd2attrzd2zz__biglooz00(obj_t, obj_t);
static long BGl_getzd28bitszd2integerz00zz__biglooz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00();
BGL_EXPORTED_DECL obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_bmemzd2resetz12zc0zz__biglooz00();
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl_za2exitzd2mutexza2zd2zz__biglooz00 = BUNSPEC;
static obj_t BGl_bigloozd2demanglezd2atz00zz__biglooz00(obj_t, long, obj_t);
BGL_EXPORTED_DECL obj_t bigloo_exit_apply(obj_t);
BGL_EXPORTED_DECL bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_timez00zz__biglooz00(obj_t);
BGL_EXPORTED_DECL bool_t bigloo_mangledp(obj_t);
BGL_EXPORTED_DECL obj_t BGl_unspecifiedz00zz__biglooz00();
static obj_t BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__biglooz00();
static obj_t BGl__cnstzf3zf3zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_procedurezd2arityzd2zz__biglooz00(obj_t);
static obj_t BGl__opaquezf3zf3zz__biglooz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t, char *, obj_t);
extern bool_t bigloo_strncmp(obj_t, obj_t, long);
static obj_t BGl__bigloozd2manglezd2zz__biglooz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2classzd2demanglezd2envzd2zz__biglooz00, BgL_bgl__biglooza7d2classza72618z00, BGl__bigloozd2classzd2demanglez00zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bmemzd2resetz12zd2envz12zz__biglooz00, BgL_bgl__bmemza7d2resetza7122619z00, BGl__bmemzd2resetz12zc0zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2modulezd2manglezd2envzd2zz__biglooz00, BgL_bgl__biglooza7d2module2620za7, BGl__bigloozd2modulezd2manglez00zz__biglooz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2attrzd2setz12zd2envzc0zz__biglooz00, BgL_bgl__procedureza7d2att2621za7, BGl__procedurezd2attrzd2setz12z12zz__biglooz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string2566z00zz__biglooz00, BgL_bgl_string2566za700za7za7_2622za7, "bigloo-exit", 11 );
DEFINE_STRING( BGl_string2567z00zz__biglooz00, BgL_bgl_string2567za700za7za7_2623za7, " (level 0)", 10 );
DEFINE_STRING( BGl_string2568z00zz__biglooz00, BgL_bgl_string2568za700za7za7_2624za7, "/tmp/bigloo/runtime/Llib/bigloo.scm", 35 );
DEFINE_STRING( BGl_string2570z00zz__biglooz00, BgL_bgl_string2570za700za7za7_2625za7, "Some modules have been compiled by: ", 36 );
DEFINE_STRING( BGl_string2569z00zz__biglooz00, BgL_bgl_string2569za700za7za7_2626za7, "string-set!", 11 );
DEFINE_STRING( BGl_string2571z00zz__biglooz00, BgL_bgl_string2571za700za7za7_2627za7, "and other by: ", 14 );
DEFINE_STRING( BGl_string2572z00zz__biglooz00, BgL_bgl_string2572za700za7za7_2628za7, "check-version!", 14 );
DEFINE_STRING( BGl_string2573z00zz__biglooz00, BgL_bgl_string2573za700za7za7_2629za7, "bstring", 7 );
DEFINE_STRING( BGl_string2574z00zz__biglooz00, BgL_bgl_string2574za700za7za7_2630za7, "_check-version!", 15 );
DEFINE_STRING( BGl_string2575z00zz__biglooz00, BgL_bgl_string2575za700za7za7_2631za7, "string", 6 );
DEFINE_STRING( BGl_string2576z00zz__biglooz00, BgL_bgl_string2576za700za7za7_2632za7, "_procedure-arity", 16 );
DEFINE_STRING( BGl_string2577z00zz__biglooz00, BgL_bgl_string2577za700za7za7_2633za7, "procedure", 9 );
DEFINE_STRING( BGl_string2578z00zz__biglooz00, BgL_bgl_string2578za700za7za7_2634za7, "_procedure-attr", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unspecifiedzd2envzd2zz__biglooz00, BgL_bgl__unspecifiedza700za72635z00, BGl__unspecifiedz00zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2580z00zz__biglooz00, BgL_bgl_string2580za700za7za7_2636za7, "0123456789abcdef", 16 );
DEFINE_STRING( BGl_string2579z00zz__biglooz00, BgL_bgl_string2579za700za7za7_2637za7, "_procedure-attr-set!", 20 );
DEFINE_STRING( BGl_string2581z00zz__biglooz00, BgL_bgl_string2581za700za7za7_2638za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2582z00zz__biglooz00, BgL_bgl_string2582za700za7za7_2639za7, "bigloo-mangle-string", 20 );
DEFINE_STRING( BGl_string2583z00zz__biglooz00, BgL_bgl_string2583za700za7za7_2640za7, "Can't mangle empty string", 25 );
DEFINE_STRING( BGl_string2584z00zz__biglooz00, BgL_bgl_string2584za700za7za7_2641za7, "bigloo-mangle", 13 );
DEFINE_STRING( BGl_string2585z00zz__biglooz00, BgL_bgl_string2585za700za7za7_2642za7, "BgL_", 4 );
DEFINE_STRING( BGl_string2586z00zz__biglooz00, BgL_bgl_string2586za700za7za7_2643za7, "_bigloo-mangle", 14 );
DEFINE_STRING( BGl_string2587z00zz__biglooz00, BgL_bgl_string2587za700za7za7_2644za7, "bigloo-module-mangle", 20 );
DEFINE_STRING( BGl_string2588z00zz__biglooz00, BgL_bgl_string2588za700za7za7_2645za7, "BGl_", 4 );
DEFINE_STRING( BGl_string2600z00zz__biglooz00, BgL_bgl_string2600za700za7za7_2646za7, "bigloo-class-demangle", 21 );
DEFINE_STRING( BGl_string2590z00zz__biglooz00, BgL_bgl_string2590za700za7za7_2647za7, "_bigloo-mangled?", 16 );
DEFINE_STRING( BGl_string2589z00zz__biglooz00, BgL_bgl_string2589za700za7za7_2648za7, "_bigloo-module-mangle", 21 );
DEFINE_STRING( BGl_string2601z00zz__biglooz00, BgL_bgl_string2601za700za7za7_2649za7, "_bglt", 5 );
DEFINE_STRING( BGl_string2591z00zz__biglooz00, BgL_bgl_string2591za700za7za7_2650za7, "_bigloo-need-mangling?", 22 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_opaquezf3zd2envz21zz__biglooz00, BgL_bgl__opaqueza7f3za7f3za7za7_2651z00, BGl__opaquezf3zf3zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2602z00zz__biglooz00, BgL_bgl_string2602za700za7za7_2652za7, "_bigloo-class-demangle", 22 );
DEFINE_STRING( BGl_string2592z00zz__biglooz00, BgL_bgl_string2592za700za7za7_2653za7, "bigloo-demangle", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2exitzd2mutexzd2envzd2zz__biglooz00, BgL_bgl__biglooza7d2exitza7d2654z00, BGl__bigloozd2exitzd2mutexz00zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2603z00zz__biglooz00, BgL_bgl_string2603za700za7za7_2655za7, "bigloo-exit-register!", 21 );
DEFINE_STRING( BGl_string2593z00zz__biglooz00, BgL_bgl_string2593za700za7za7_2656za7, "Not a Bigloo mangled identifier", 31 );
DEFINE_STRING( BGl_string2604z00zz__biglooz00, BgL_bgl_string2604za700za7za7_2657za7, "Wrong procedure arity", 21 );
DEFINE_STRING( BGl_string2594z00zz__biglooz00, BgL_bgl_string2594za700za7za7_2658za7, "get-8bits-integer", 17 );
DEFINE_STRING( BGl_string2605z00zz__biglooz00, BgL_bgl_string2605za700za7za7_2659za7, "_register-exit-function!", 24 );
DEFINE_STRING( BGl_string2595z00zz__biglooz00, BgL_bgl_string2595za700za7za7_2660za7, "long", 4 );
DEFINE_STRING( BGl_string2606z00zz__biglooz00, BgL_bgl_string2606za700za7za7_2661za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2596z00zz__biglooz00, BgL_bgl_string2596za700za7za7_2662za7, "loop", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2arityzd2envz00zz__biglooz00, BgL_bgl__procedureza7d2ari2663za7, BGl__procedurezd2arityzd2zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2597z00zz__biglooz00, BgL_bgl_string2597za700za7za7_2664za7, "Illegal mangling on", 19 );
DEFINE_STRING( BGl_string2598z00zz__biglooz00, BgL_bgl_string2598za700za7za7_2665za7, "_bigloo-demangle", 16 );
DEFINE_STRING( BGl_string2609z00zz__biglooz00, BgL_bgl_string2609za700za7za7_2666za7, "funcall", 7 );
DEFINE_STRING( BGl_string2599z00zz__biglooz00, BgL_bgl_string2599za700za7za7_2667za7, "_bigloo-class-mangled?", 22 );
DEFINE_STRING( BGl_string2611z00zz__biglooz00, BgL_bgl_string2611za700za7za7_2668za7, "fun", 3 );
DEFINE_STRING( BGl_string2613z00zz__biglooz00, BgL_bgl_string2613za700za7za7_2669za7, "val", 3 );
DEFINE_STRING( BGl_string2615z00zz__biglooz00, BgL_bgl_string2615za700za7za7_2670za7, "time", 4 );
DEFINE_STRING( BGl_string2616z00zz__biglooz00, BgL_bgl_string2616za700za7za7_2671za7, "_time", 5 );
DEFINE_STRING( BGl_string2617z00zz__biglooz00, BgL_bgl_string2617za700za7za7_2672za7, "__bigloo", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2exitzd2applyzd2envzd2zz__biglooz00, BgL_bgl__biglooza7d2exitza7d2673z00, BGl__bigloozd2exitzd2applyz00zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2needzd2manglingzf3zd2envz21zz__biglooz00, BgL_bgl__biglooza7d2needza7d2674z00, BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_cnstzf3zd2envz21zz__biglooz00, BgL_bgl__cnstza7f3za7f3za7za7__b2675z00, BGl__cnstzf3zf3zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2manglezd2envz00zz__biglooz00, BgL_bgl__biglooza7d2mangle2676za7, BGl__bigloozd2manglezd2zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2mangledzf3zd2envzf3zz__biglooz00, BgL_bgl__biglooza7d2mangle2677za7, BGl__bigloozd2mangledzf3z21zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_procedurezd2attrzd2envz00zz__biglooz00, BgL_bgl__procedureza7d2att2678za7, BGl__procedurezd2attrzd2zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2classzd2mangledzf3zd2envz21zz__biglooz00, BgL_bgl__biglooza7d2classza72679z00, BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_opaquezd2nilzd2envz00zz__biglooz00, BgL_bgl__opaqueza7d2nilza7d22680z00, BGl__opaquezd2nilzd2zz__biglooz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_timezd2envzd2zz__biglooz00, BgL_bgl__timeza700za7za7__bigl2681za7, BGl__timez00zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_checkzd2versionz12zd2envz12zz__biglooz00, BgL_bgl__checkza7d2version2682za7, BGl__checkzd2versionz12zc0zz__biglooz00, 0L, BUNSPEC, 3 );
extern obj_t BGl_stringzd2envzd2zz__r4_strings_6_7z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_bigloozd2demanglezd2envz00zz__biglooz00, BgL_bgl__biglooza7d2demang2683za7, BGl__bigloozd2demanglezd2zz__biglooz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_registerzd2exitzd2functionz12zd2envzc0zz__biglooz00, BgL_bgl__registerza7d2exit2684za7, BGl__registerzd2exitzd2functionz12z12zz__biglooz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long BgL_checksumz00_2317, char * BgL_fromz00_2318)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__biglooz00))
{ 
BGl_requirezd2initializa7ationz75zz__biglooz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__biglooz00(); 
BGl_importedzd2moduleszd2initz00zz__biglooz00(); 
BGl_toplevelzd2initzd2zz__biglooz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 14 */
BGl_symbol2565z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2566z00zz__biglooz00); 
BGl_symbol2608z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2609z00zz__biglooz00); 
BGl_symbol2610z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2611z00zz__biglooz00); 
BGl_symbol2612z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2613z00zz__biglooz00); 
BGl_list2607z00zz__biglooz00 = 
MAKE_PAIR(BGl_symbol2608z00zz__biglooz00, 
MAKE_PAIR(BGl_symbol2610z00zz__biglooz00, 
MAKE_PAIR(BGl_symbol2610z00zz__biglooz00, 
MAKE_PAIR(BGl_symbol2612z00zz__biglooz00, BNIL)))); 
return ( 
BGl_symbol2614z00zz__biglooz00 = 
bstring_to_symbol(BGl_string2615z00zz__biglooz00), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 14 */
BGl_za2releaseza2z00zz__biglooz00 = BFALSE; 
BGl_za2levelza2z00zz__biglooz00 = BFALSE; 
BGl_za2modulesza2z00zz__biglooz00 = BNIL; 
BGl_za2exitzd2mutexza2zd2zz__biglooz00 = 
bgl_make_mutex(BGl_symbol2565z00zz__biglooz00); 
return ( 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = BNIL, BUNSPEC) ;} 
}



/* check-version! */
BGL_EXPORTED_DEF obj_t BGl_checkzd2versionz12zc0zz__biglooz00(obj_t BgL_modulez00_1, char * BgL_releasez00_2, obj_t BgL_levelz00_3)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 333 */
if(
STRINGP(BGl_za2releaseza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 339 */
bool_t BgL_testz00_2337;
{ /* Llib/bigloo.scm 339 */
bool_t BgL_testz00_2338;
{ /* Llib/bigloo.scm 339 */
long BgL_minz00_809;
{ /* Llib/bigloo.scm 339 */
long BgL_arg1920z00_813;
{ /* Llib/bigloo.scm 339 */
long BgL_xz00_815;long BgL_yz00_816;
BgL_xz00_815 = 
STRING_LENGTH(
string_to_bstring(BgL_releasez00_2)); 
BgL_yz00_816 = 
STRING_LENGTH(BGl_za2releaseza2z00zz__biglooz00); 
if(
(BgL_xz00_815<BgL_yz00_816))
{ /* Llib/bigloo.scm 339 */
BgL_arg1920z00_813 = BgL_xz00_815; }  else 
{ /* Llib/bigloo.scm 339 */
BgL_arg1920z00_813 = BgL_yz00_816; } } 
BgL_minz00_809 = 
(BgL_arg1920z00_813-((long)1)); } 
if(
bigloo_strcmp(
BGl_substringz00zz__r4_strings_6_7z00(
string_to_bstring(BgL_releasez00_2), ((long)0), BgL_minz00_809), 
BGl_substringz00zz__r4_strings_6_7z00(BGl_za2releaseza2z00zz__biglooz00, ((long)0), BgL_minz00_809)))
{ /* Llib/bigloo.scm 342 */
BgL_testz00_2338 = ((bool_t)0)
; }  else 
{ /* Llib/bigloo.scm 342 */
BgL_testz00_2338 = ((bool_t)1)
; } } 
if(BgL_testz00_2338)
{ /* Llib/bigloo.scm 339 */
BgL_testz00_2337 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 339 */
if(
CHARP(BgL_levelz00_3))
{ /* Llib/bigloo.scm 344 */
if(
CHARP(BGl_za2levelza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 344 */
if(
(
CCHAR(BGl_za2levelza2z00zz__biglooz00)==
CCHAR(BgL_levelz00_3)))
{ /* Llib/bigloo.scm 344 */
BgL_testz00_2337 = ((bool_t)0)
; }  else 
{ /* Llib/bigloo.scm 344 */
BgL_testz00_2337 = ((bool_t)1)
; } }  else 
{ /* Llib/bigloo.scm 344 */
BgL_testz00_2337 = ((bool_t)0)
; } }  else 
{ /* Llib/bigloo.scm 344 */
BgL_testz00_2337 = ((bool_t)0)
; } } } 
if(BgL_testz00_2337)
{ /* Llib/bigloo.scm 351 */
obj_t BgL_arg1906z00_792;obj_t BgL_arg1907z00_793;obj_t BgL_arg1908z00_794;
{ /* Llib/bigloo.scm 351 */
obj_t BgL_arg1910z00_796;
{ /* Llib/bigloo.scm 352 */
obj_t BgL_releasez00_1509;obj_t BgL_levelz00_1510;
BgL_releasez00_1509 = BGl_za2releaseza2z00zz__biglooz00; 
BgL_levelz00_1510 = BGl_za2levelza2z00zz__biglooz00; 
if(
CHARP(BgL_levelz00_1510))
{ /* Llib/bigloo.scm 352 */
obj_t BgL_sz00_1512;
BgL_sz00_1512 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BGl_string2567z00zz__biglooz00); 
{ /* Llib/bigloo.scm 352 */
unsigned char BgL_charz00_1516;
BgL_charz00_1516 = 
CCHAR(BgL_levelz00_1510); 
{ /* Llib/bigloo.scm 352 */
long BgL_l2357z00_2101;
BgL_l2357z00_2101 = 
STRING_LENGTH(BgL_sz00_1512); 
if(
BOUND_CHECK(((long)8), BgL_l2357z00_2101))
{ /* Llib/bigloo.scm 352 */
STRING_SET(BgL_sz00_1512, ((long)8), BgL_charz00_1516); }  else 
{ 
obj_t BgL_auxz00_2366;
BgL_auxz00_2366 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)12447)), BGl_string2569z00zz__biglooz00, 
BINT(((long)8)), BgL_sz00_1512); 
FAILURE(BgL_auxz00_2366,BFALSE,BFALSE);} } } 
BgL_arg1910z00_796 = 
string_append(BgL_releasez00_1509, BgL_sz00_1512); }  else 
{ /* Llib/bigloo.scm 352 */
BgL_arg1910z00_796 = BgL_releasez00_1509; } } 
BgL_arg1906z00_792 = 
string_append(BGl_string2570z00zz__biglooz00, BgL_arg1910z00_796); } 
{ /* Llib/bigloo.scm 353 */
obj_t BgL_arg1912z00_798;
if(
CHARP(BgL_levelz00_3))
{ /* Llib/bigloo.scm 354 */
obj_t BgL_sz00_1520;
BgL_sz00_1520 = 
BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BGl_string2567z00zz__biglooz00); 
{ /* Llib/bigloo.scm 354 */
unsigned char BgL_charz00_1524;
BgL_charz00_1524 = 
CCHAR(BgL_levelz00_3); 
{ /* Llib/bigloo.scm 354 */
long BgL_l2361z00_2105;
BgL_l2361z00_2105 = 
STRING_LENGTH(BgL_sz00_1520); 
if(
BOUND_CHECK(((long)8), BgL_l2361z00_2105))
{ /* Llib/bigloo.scm 354 */
STRING_SET(BgL_sz00_1520, ((long)8), BgL_charz00_1524); }  else 
{ 
obj_t BgL_auxz00_2381;
BgL_auxz00_2381 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)12520)), BGl_string2569z00zz__biglooz00, 
BINT(((long)8)), BgL_sz00_1520); 
FAILURE(BgL_auxz00_2381,BFALSE,BFALSE);} } } 
BgL_arg1912z00_798 = 
string_append(
string_to_bstring(BgL_releasez00_2), BgL_sz00_1520); }  else 
{ /* Llib/bigloo.scm 354 */
BgL_arg1912z00_798 = 
string_to_bstring(BgL_releasez00_2); } 
{ /* Llib/bigloo.scm 353 */
obj_t BgL_auxz00_2389;
if(
STRINGP(BgL_arg1912z00_798))
{ /* Llib/bigloo.scm 353 */
BgL_auxz00_2389 = BgL_arg1912z00_798
; }  else 
{ 
obj_t BgL_auxz00_2392;
BgL_auxz00_2392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)12484)), BGl_string2572z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_arg1912z00_798); 
FAILURE(BgL_auxz00_2392,BFALSE,BFALSE);} 
BgL_arg1907z00_793 = 
string_append(BGl_string2571z00zz__biglooz00, BgL_auxz00_2389); } } 
BgL_arg1908z00_794 = 
MAKE_PAIR(BgL_modulez00_1, BGl_za2modulesza2z00zz__biglooz00); 
return 
BGl_errorz00zz__errorz00(BgL_arg1906z00_792, BgL_arg1907z00_793, BgL_arg1908z00_794);}  else 
{ /* Llib/bigloo.scm 339 */
return ( 
BGl_za2modulesza2z00zz__biglooz00 = 
MAKE_PAIR(BgL_modulez00_1, BGl_za2modulesza2z00zz__biglooz00), BUNSPEC) ;} }  else 
{ /* Llib/bigloo.scm 335 */
{ /* Llib/bigloo.scm 336 */
obj_t BgL_list1923z00_818;
BgL_list1923z00_818 = 
MAKE_PAIR(BgL_modulez00_1, BNIL); 
BGl_za2modulesza2z00zz__biglooz00 = BgL_list1923z00_818; } 
BGl_za2releaseza2z00zz__biglooz00 = 
string_to_bstring(BgL_releasez00_2); 
return ( 
BGl_za2levelza2z00zz__biglooz00 = BgL_levelz00_3, BUNSPEC) ;} } 
}



/* _check-version! */
obj_t BGl__checkzd2versionz12zc0zz__biglooz00(obj_t BgL_envz00_2054, obj_t BgL_modulez00_2055, obj_t BgL_releasez00_2056, obj_t BgL_levelz00_2057)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 333 */
{ /* Llib/bigloo.scm 335 */
char * BgL_auxz00_2402;
{ /* Llib/bigloo.scm 335 */
obj_t BgL_auxz00_2403;
if(
STRINGP(BgL_releasez00_2056))
{ /* Llib/bigloo.scm 335 */
BgL_auxz00_2403 = BgL_releasez00_2056
; }  else 
{ 
obj_t BgL_auxz00_2406;
BgL_auxz00_2406 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)11784)), BGl_string2574z00zz__biglooz00, BGl_string2575z00zz__biglooz00, BgL_releasez00_2056); 
FAILURE(BgL_auxz00_2406,BFALSE,BFALSE);} 
BgL_auxz00_2402 = 
BSTRING_TO_STRING(BgL_auxz00_2403); } 
return 
BGl_checkzd2versionz12zc0zz__biglooz00(BgL_modulez00_2055, BgL_auxz00_2402, BgL_levelz00_2057);} } 
}



/* procedure-arity */
BGL_EXPORTED_DEF int BGl_procedurezd2arityzd2zz__biglooz00(obj_t BgL_procz00_4)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 369 */
return 
PROCEDURE_ARITY(BgL_procz00_4);} 
}



/* _procedure-arity */
obj_t BGl__procedurezd2arityzd2zz__biglooz00(obj_t BgL_envz00_2058, obj_t BgL_procz00_2059)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 369 */
{ /* Llib/bigloo.scm 370 */
int BgL_auxz00_2413;
{ /* Llib/bigloo.scm 370 */
obj_t BgL_procz00_2311;
if(
PROCEDUREP(BgL_procz00_2059))
{ /* Llib/bigloo.scm 370 */
BgL_procz00_2311 = BgL_procz00_2059; }  else 
{ 
obj_t BgL_auxz00_2416;
BgL_auxz00_2416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)13200)), BGl_string2576z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_procz00_2059); 
FAILURE(BgL_auxz00_2416,BFALSE,BFALSE);} 
BgL_auxz00_2413 = 
PROCEDURE_ARITY(BgL_procz00_2311); } 
return 
BINT(BgL_auxz00_2413);} } 
}



/* procedure-attr */
BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2zz__biglooz00(obj_t BgL_procz00_5)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 375 */
return 
PROCEDURE_ATTR(BgL_procz00_5);} 
}



/* _procedure-attr */
obj_t BGl__procedurezd2attrzd2zz__biglooz00(obj_t BgL_envz00_2060, obj_t BgL_procz00_2061)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 375 */
{ /* Llib/bigloo.scm 376 */
obj_t BgL_procz00_2312;
if(
PROCEDUREP(BgL_procz00_2061))
{ /* Llib/bigloo.scm 376 */
BgL_procz00_2312 = BgL_procz00_2061; }  else 
{ 
obj_t BgL_auxz00_2425;
BgL_auxz00_2425 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)13488)), BGl_string2578z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_procz00_2061); 
FAILURE(BgL_auxz00_2425,BFALSE,BFALSE);} 
return 
PROCEDURE_ATTR(BgL_procz00_2312);} } 
}



/* procedure-attr-set! */
BGL_EXPORTED_DEF obj_t BGl_procedurezd2attrzd2setz12z12zz__biglooz00(obj_t BgL_procz00_6, obj_t BgL_objz00_7)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 381 */
PROCEDURE_ATTR_SET(BgL_procz00_6, BgL_objz00_7); 
return BgL_objz00_7;} 
}



/* _procedure-attr-set! */
obj_t BGl__procedurezd2attrzd2setz12z12zz__biglooz00(obj_t BgL_envz00_2062, obj_t BgL_procz00_2063, obj_t BgL_objz00_2064)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 381 */
{ /* Llib/bigloo.scm 383 */
obj_t BgL_procz00_2313;
if(
PROCEDUREP(BgL_procz00_2063))
{ /* Llib/bigloo.scm 383 */
BgL_procz00_2313 = BgL_procz00_2063; }  else 
{ 
obj_t BgL_auxz00_2433;
BgL_auxz00_2433 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)13819)), BGl_string2579z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_procz00_2063); 
FAILURE(BgL_auxz00_2433,BFALSE,BFALSE);} 
PROCEDURE_ATTR_SET(BgL_procz00_2313, BgL_objz00_2064); 
return BgL_objz00_2064;} } 
}



/* unspecified */
BGL_EXPORTED_DEF obj_t BGl_unspecifiedz00zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 388 */
return BUNSPEC;} 
}



/* _unspecified */
obj_t BGl__unspecifiedz00zz__biglooz00(obj_t BgL_envz00_2065)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 388 */
return BUNSPEC;} 
}



/* cnst? */
BGL_EXPORTED_DEF bool_t BGl_cnstzf3zf3zz__biglooz00(obj_t BgL_objz00_8)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 394 */
return 
CNSTP(BgL_objz00_8);} 
}



/* _cnst? */
obj_t BGl__cnstzf3zf3zz__biglooz00(obj_t BgL_envz00_2066, obj_t BgL_objz00_2067)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 394 */
return 
BBOOL(
CNSTP(BgL_objz00_2067));} 
}



/* opaque? */
BGL_EXPORTED_DEF bool_t BGl_opaquezf3zf3zz__biglooz00(obj_t BgL_objz00_9)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 400 */
return 
OPAQUEP(BgL_objz00_9);} 
}



/* _opaque? */
obj_t BGl__opaquezf3zf3zz__biglooz00(obj_t BgL_envz00_2068, obj_t BgL_objz00_2069)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 400 */
return 
BBOOL(
OPAQUEP(BgL_objz00_2069));} 
}



/* opaque-nil */
BGL_EXPORTED_DEF obj_t BGl_opaquezd2nilzd2zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 406 */
return 
BGL_OPAQUE_NIL();} 
}



/* _opaque-nil */
obj_t BGl__opaquezd2nilzd2zz__biglooz00(obj_t BgL_envz00_2070)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 406 */
return 
BGL_OPAQUE_NIL();} 
}



/* mangle-at! */
long BGl_manglezd2atz12zc0zz__biglooz00(obj_t BgL_newz00_11, obj_t BgL_oldz00_12, long BgL_lenz00_13, long BgL_offsetz00_14)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 419 */
{ 
long BgL_rz00_821;long BgL_wz00_822;long BgL_newzd2lenzd2_823;long BgL_checksumz00_824;
BgL_rz00_821 = ((long)0); 
BgL_wz00_822 = BgL_offsetz00_14; 
BgL_newzd2lenzd2_823 = BgL_offsetz00_14; 
BgL_checksumz00_824 = ((long)0); 
BgL_zc3anonymousza31924ze3z83_825:
if(
(BgL_rz00_821==BgL_lenz00_13))
{ /* Llib/bigloo.scm 424 */
{ /* Llib/bigloo.scm 426 */
long BgL_l2365z00_2109;
BgL_l2365z00_2109 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_wz00_822, BgL_l2365z00_2109))
{ /* Llib/bigloo.scm 426 */
STRING_SET(BgL_newz00_11, BgL_wz00_822, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2452;
BgL_auxz00_2452 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15607)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_wz00_822), BgL_newz00_11); 
FAILURE(BgL_auxz00_2452,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 428 */
long BgL_arg1926z00_827;unsigned char BgL_arg1927z00_828;
BgL_arg1926z00_827 = 
(BgL_wz00_822+((long)1)); 
{ /* Llib/bigloo.scm 429 */
long BgL_i2368z00_2112;
BgL_i2368z00_2112 = 
(BgL_checksumz00_824 & ((long)15)); 
if(
BOUND_CHECK(BgL_i2368z00_2112, ((long)16)))
{ /* Llib/bigloo.scm 429 */
BgL_arg1927z00_828 = 
STRING_REF(BGl_string2580z00zz__biglooz00, BgL_i2368z00_2112); }  else 
{ 
obj_t BgL_auxz00_2462;
BgL_auxz00_2462 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15674)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2368z00_2112), BGl_string2580z00zz__biglooz00); 
FAILURE(BgL_auxz00_2462,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 427 */
long BgL_l2373z00_2117;
BgL_l2373z00_2117 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_arg1926z00_827, BgL_l2373z00_2117))
{ /* Llib/bigloo.scm 427 */
STRING_SET(BgL_newz00_11, BgL_arg1926z00_827, BgL_arg1927z00_828); }  else 
{ 
obj_t BgL_auxz00_2471;
BgL_auxz00_2471 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15637)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_arg1926z00_827), BgL_newz00_11); 
FAILURE(BgL_auxz00_2471,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 431 */
long BgL_arg1930z00_830;unsigned char BgL_arg1931z00_831;
BgL_arg1930z00_830 = 
(BgL_wz00_822+((long)2)); 
{ /* Llib/bigloo.scm 432 */
long BgL_i2376z00_2120;
BgL_i2376z00_2120 = 
(
(BgL_checksumz00_824 >> 
(int)(((long)4))) & ((long)15)); 
if(
BOUND_CHECK(BgL_i2376z00_2120, ((long)16)))
{ /* Llib/bigloo.scm 432 */
BgL_arg1931z00_831 = 
STRING_REF(BGl_string2580z00zz__biglooz00, BgL_i2376z00_2120); }  else 
{ 
obj_t BgL_auxz00_2483;
BgL_auxz00_2483 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15754)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2376z00_2120), BGl_string2580z00zz__biglooz00); 
FAILURE(BgL_auxz00_2483,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 430 */
long BgL_l2381z00_2125;
BgL_l2381z00_2125 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_arg1930z00_830, BgL_l2381z00_2125))
{ /* Llib/bigloo.scm 430 */
STRING_SET(BgL_newz00_11, BgL_arg1930z00_830, BgL_arg1931z00_831); }  else 
{ 
obj_t BgL_auxz00_2492;
BgL_auxz00_2492 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15717)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_arg1930z00_830), BgL_newz00_11); 
FAILURE(BgL_auxz00_2492,BFALSE,BFALSE);} } } 
return 
(BgL_wz00_822+((long)3));}  else 
{ /* Llib/bigloo.scm 434 */
unsigned char BgL_cz00_835;
{ /* Llib/bigloo.scm 434 */
long BgL_l2385z00_2129;
BgL_l2385z00_2129 = 
STRING_LENGTH(BgL_oldz00_12); 
if(
BOUND_CHECK(BgL_rz00_821, BgL_l2385z00_2129))
{ /* Llib/bigloo.scm 434 */
BgL_cz00_835 = 
STRING_REF(BgL_oldz00_12, BgL_rz00_821); }  else 
{ 
obj_t BgL_auxz00_2502;
BgL_auxz00_2502 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15832)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_rz00_821), BgL_oldz00_12); 
FAILURE(BgL_auxz00_2502,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 435 */
bool_t BgL_testz00_2507;
{ /* Llib/bigloo.scm 435 */
bool_t BgL_testz00_2508;
if(
isalpha(BgL_cz00_835))
{ /* Llib/bigloo.scm 435 */
if(
(BgL_cz00_835==((unsigned char)'z')))
{ /* Llib/bigloo.scm 435 */
BgL_testz00_2508 = ((bool_t)0)
; }  else 
{ /* Llib/bigloo.scm 435 */
BgL_testz00_2508 = ((bool_t)1)
; } }  else 
{ /* Llib/bigloo.scm 435 */
BgL_testz00_2508 = ((bool_t)0)
; } 
if(BgL_testz00_2508)
{ /* Llib/bigloo.scm 435 */
BgL_testz00_2507 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 435 */
if(
isdigit(BgL_cz00_835))
{ /* Llib/bigloo.scm 436 */
BgL_testz00_2507 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 436 */
BgL_testz00_2507 = 
(BgL_cz00_835==((unsigned char)'_'))
; } } } 
if(BgL_testz00_2507)
{ /* Llib/bigloo.scm 435 */
{ /* Llib/bigloo.scm 439 */
long BgL_l2389z00_2133;
BgL_l2389z00_2133 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_wz00_822, BgL_l2389z00_2133))
{ /* Llib/bigloo.scm 439 */
STRING_SET(BgL_newz00_11, BgL_wz00_822, BgL_cz00_835); }  else 
{ 
obj_t BgL_auxz00_2520;
BgL_auxz00_2520 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)15980)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_wz00_822), BgL_newz00_11); 
FAILURE(BgL_auxz00_2520,BFALSE,BFALSE);} } 
{ 
long BgL_newzd2lenzd2_2529;long BgL_wz00_2527;long BgL_rz00_2525;
BgL_rz00_2525 = 
(BgL_rz00_821+((long)1)); 
BgL_wz00_2527 = 
(BgL_wz00_822+((long)1)); 
BgL_newzd2lenzd2_2529 = 
(BgL_newzd2lenzd2_823+((long)1)); 
BgL_newzd2lenzd2_823 = BgL_newzd2lenzd2_2529; 
BgL_wz00_822 = BgL_wz00_2527; 
BgL_rz00_821 = BgL_rz00_2525; 
goto BgL_zc3anonymousza31924ze3z83_825;} }  else 
{ /* Llib/bigloo.scm 444 */
long BgL_icz00_840;
BgL_icz00_840 = 
(BgL_cz00_835); 
{ /* Llib/bigloo.scm 445 */
long BgL_l2393z00_2137;
BgL_l2393z00_2137 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_wz00_822, BgL_l2393z00_2137))
{ /* Llib/bigloo.scm 445 */
STRING_SET(BgL_newz00_11, BgL_wz00_822, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2536;
BgL_auxz00_2536 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16115)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_wz00_822), BgL_newz00_11); 
FAILURE(BgL_auxz00_2536,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 447 */
long BgL_arg1943z00_841;unsigned char BgL_arg1944z00_842;
BgL_arg1943z00_841 = 
(BgL_wz00_822+((long)1)); 
{ /* Llib/bigloo.scm 448 */
long BgL_i2396z00_2140;
BgL_i2396z00_2140 = 
(BgL_icz00_840 & ((long)15)); 
if(
BOUND_CHECK(BgL_i2396z00_2140, ((long)16)))
{ /* Llib/bigloo.scm 448 */
BgL_arg1944z00_842 = 
STRING_REF(BGl_string2580z00zz__biglooz00, BgL_i2396z00_2140); }  else 
{ 
obj_t BgL_auxz00_2546;
BgL_auxz00_2546 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16182)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2396z00_2140), BGl_string2580z00zz__biglooz00); 
FAILURE(BgL_auxz00_2546,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 446 */
long BgL_l2401z00_2145;
BgL_l2401z00_2145 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_arg1943z00_841, BgL_l2401z00_2145))
{ /* Llib/bigloo.scm 446 */
STRING_SET(BgL_newz00_11, BgL_arg1943z00_841, BgL_arg1944z00_842); }  else 
{ 
obj_t BgL_auxz00_2555;
BgL_auxz00_2555 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16145)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_arg1943z00_841), BgL_newz00_11); 
FAILURE(BgL_auxz00_2555,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 450 */
long BgL_arg1946z00_844;unsigned char BgL_arg1948z00_845;
BgL_arg1946z00_844 = 
(BgL_wz00_822+((long)2)); 
{ /* Llib/bigloo.scm 451 */
long BgL_i2404z00_2148;
BgL_i2404z00_2148 = 
(
(BgL_icz00_840 >> 
(int)(((long)4))) & ((long)15)); 
if(
BOUND_CHECK(BgL_i2404z00_2148, ((long)16)))
{ /* Llib/bigloo.scm 451 */
BgL_arg1948z00_845 = 
STRING_REF(BGl_string2580z00zz__biglooz00, BgL_i2404z00_2148); }  else 
{ 
obj_t BgL_auxz00_2567;
BgL_auxz00_2567 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16256)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2404z00_2148), BGl_string2580z00zz__biglooz00); 
FAILURE(BgL_auxz00_2567,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 449 */
long BgL_l2409z00_2153;
BgL_l2409z00_2153 = 
STRING_LENGTH(BgL_newz00_11); 
if(
BOUND_CHECK(BgL_arg1946z00_844, BgL_l2409z00_2153))
{ /* Llib/bigloo.scm 449 */
STRING_SET(BgL_newz00_11, BgL_arg1946z00_844, BgL_arg1948z00_845); }  else 
{ 
obj_t BgL_auxz00_2576;
BgL_auxz00_2576 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16219)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_arg1946z00_844), BgL_newz00_11); 
FAILURE(BgL_auxz00_2576,BFALSE,BFALSE);} } } 
{ 
long BgL_checksumz00_2587;long BgL_newzd2lenzd2_2585;long BgL_wz00_2583;long BgL_rz00_2581;
BgL_rz00_2581 = 
(BgL_rz00_821+((long)1)); 
BgL_wz00_2583 = 
(BgL_wz00_822+((long)3)); 
BgL_newzd2lenzd2_2585 = 
(BgL_newzd2lenzd2_823+((long)3)); 
BgL_checksumz00_2587 = 
(BgL_checksumz00_824 ^ 
(BgL_cz00_835)); 
BgL_checksumz00_824 = BgL_checksumz00_2587; 
BgL_newzd2lenzd2_823 = BgL_newzd2lenzd2_2585; 
BgL_wz00_822 = BgL_wz00_2583; 
BgL_rz00_821 = BgL_rz00_2581; 
goto BgL_zc3anonymousza31924ze3z83_825;} } } } } } 
}



/* bigloo-mangle */
BGL_EXPORTED_DEF obj_t bigloo_mangle(obj_t BgL_stringz00_15)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 460 */
{ /* Llib/bigloo.scm 461 */
long BgL_lenz00_859;
BgL_lenz00_859 = 
STRING_LENGTH(BgL_stringz00_15); 
{ /* Llib/bigloo.scm 461 */
obj_t BgL_newz00_860;
BgL_newz00_860 = 
make_string(
(
(BgL_lenz00_859*((long)3))+((long)7)), ((unsigned char)' ')); 
{ /* Llib/bigloo.scm 462 */

if(
(BgL_lenz00_859==((long)0)))
{ /* Llib/bigloo.scm 464 */
obj_t BgL_aux2509z00_2254;
BgL_aux2509z00_2254 = 
BGl_errorz00zz__errorz00(BGl_string2582z00zz__biglooz00, BGl_string2583z00zz__biglooz00, BgL_stringz00_15); 
if(
STRINGP(BgL_aux2509z00_2254))
{ /* Llib/bigloo.scm 464 */
return BgL_aux2509z00_2254;}  else 
{ 
obj_t BgL_auxz00_2599;
BgL_auxz00_2599 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16768)), BGl_string2584z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_aux2509z00_2254); 
FAILURE(BgL_auxz00_2599,BFALSE,BFALSE);} }  else 
{ /* Llib/bigloo.scm 465 */
long BgL_stopz00_862;
BgL_stopz00_862 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_860, BgL_stringz00_15, BgL_lenz00_859, ((long)4)); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BGl_string2585z00zz__biglooz00, ((long)0), BgL_newz00_860, ((long)0), ((long)4)); 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_860, ((long)0), BgL_stopz00_862);} } } } } 
}



/* _bigloo-mangle */
obj_t BGl__bigloozd2manglezd2zz__biglooz00(obj_t BgL_envz00_2071, obj_t BgL_stringz00_2072)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 460 */
{ /* Llib/bigloo.scm 461 */
obj_t BgL_auxz00_2606;
if(
STRINGP(BgL_stringz00_2072))
{ /* Llib/bigloo.scm 461 */
BgL_auxz00_2606 = BgL_stringz00_2072
; }  else 
{ 
obj_t BgL_auxz00_2609;
BgL_auxz00_2609 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)16663)), BGl_string2586z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2072); 
FAILURE(BgL_auxz00_2609,BFALSE,BFALSE);} 
return 
bigloo_mangle(BgL_auxz00_2606);} } 
}



/* bigloo-module-mangle */
BGL_EXPORTED_DEF obj_t bigloo_module_mangle(obj_t BgL_idz00_16, obj_t BgL_modulez00_17)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 472 */
{ /* Llib/bigloo.scm 473 */
long BgL_lenz00_867;
BgL_lenz00_867 = 
(
STRING_LENGTH(BgL_idz00_16)+
STRING_LENGTH(BgL_modulez00_17)); 
{ /* Llib/bigloo.scm 473 */
obj_t BgL_newz00_868;
BgL_newz00_868 = 
make_string(
(
(BgL_lenz00_867*((long)3))+((long)12)), ((unsigned char)' ')); 
{ /* Llib/bigloo.scm 474 */

if(
(BgL_lenz00_867==((long)0)))
{ /* Llib/bigloo.scm 476 */
obj_t BgL_aux2517z00_2262;
BgL_aux2517z00_2262 = 
BGl_errorz00zz__errorz00(BGl_string2582z00zz__biglooz00, BGl_string2583z00zz__biglooz00, BGl_stringzd2envzd2zz__r4_strings_6_7z00); 
if(
STRINGP(BgL_aux2517z00_2262))
{ /* Llib/bigloo.scm 476 */
return BgL_aux2517z00_2262;}  else 
{ 
obj_t BgL_auxz00_2625;
BgL_auxz00_2625 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17350)), BGl_string2587z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_aux2517z00_2262); 
FAILURE(BgL_auxz00_2625,BFALSE,BFALSE);} }  else 
{ /* Llib/bigloo.scm 477 */
long BgL_modzd2startzd2_870;
BgL_modzd2startzd2_870 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_868, BgL_idz00_16, 
STRING_LENGTH(BgL_idz00_16), ((long)4)); 
{ /* Llib/bigloo.scm 478 */
long BgL_l2413z00_2157;
BgL_l2413z00_2157 = 
STRING_LENGTH(BgL_newz00_868); 
if(
BOUND_CHECK(BgL_modzd2startzd2_870, BgL_l2413z00_2157))
{ /* Llib/bigloo.scm 478 */
STRING_SET(BgL_newz00_868, BgL_modzd2startzd2_870, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2635;
BgL_auxz00_2635 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17485)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_modzd2startzd2_870), BgL_newz00_868); 
FAILURE(BgL_auxz00_2635,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 479 */
long BgL_arg1968z00_871;
BgL_arg1968z00_871 = 
(((long)1)+BgL_modzd2startzd2_870); 
{ /* Llib/bigloo.scm 479 */
long BgL_l2417z00_2161;
BgL_l2417z00_2161 = 
STRING_LENGTH(BgL_newz00_868); 
if(
BOUND_CHECK(BgL_arg1968z00_871, BgL_l2417z00_2161))
{ /* Llib/bigloo.scm 479 */
STRING_SET(BgL_newz00_868, BgL_arg1968z00_871, ((unsigned char)'z')); }  else 
{ 
obj_t BgL_auxz00_2645;
BgL_auxz00_2645 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17523)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_arg1968z00_871), BgL_newz00_868); 
FAILURE(BgL_auxz00_2645,BFALSE,BFALSE);} } } 
{ /* Llib/bigloo.scm 480 */
long BgL_stopz00_872;
BgL_stopz00_872 = 
BGl_manglezd2atz12zc0zz__biglooz00(BgL_newz00_868, BgL_modulez00_17, 
STRING_LENGTH(BgL_modulez00_17), 
(BgL_modzd2startzd2_870+((long)2))); 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BGl_string2588z00zz__biglooz00, ((long)0), BgL_newz00_868, ((long)0), ((long)4)); 
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_868, ((long)0), BgL_stopz00_872);} } } } } } 
}



/* _bigloo-module-mangle */
obj_t BGl__bigloozd2modulezd2manglez00zz__biglooz00(obj_t BgL_envz00_2073, obj_t BgL_idz00_2074, obj_t BgL_modulez00_2075)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 472 */
{ /* Llib/bigloo.scm 473 */
obj_t BgL_auxz00_2662;obj_t BgL_auxz00_2655;
if(
STRINGP(BgL_modulez00_2075))
{ /* Llib/bigloo.scm 473 */
BgL_auxz00_2662 = BgL_modulez00_2075
; }  else 
{ 
obj_t BgL_auxz00_2665;
BgL_auxz00_2665 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17219)), BGl_string2589z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_modulez00_2075); 
FAILURE(BgL_auxz00_2665,BFALSE,BFALSE);} 
if(
STRINGP(BgL_idz00_2074))
{ /* Llib/bigloo.scm 473 */
BgL_auxz00_2655 = BgL_idz00_2074
; }  else 
{ 
obj_t BgL_auxz00_2658;
BgL_auxz00_2658 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17219)), BGl_string2589z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_idz00_2074); 
FAILURE(BgL_auxz00_2658,BFALSE,BFALSE);} 
return 
bigloo_module_mangle(BgL_auxz00_2655, BgL_auxz00_2662);} } 
}



/* bigloo-mangled? */
BGL_EXPORTED_DEF bool_t bigloo_mangledp(obj_t BgL_stringz00_18)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 489 */
{ /* Llib/bigloo.scm 490 */
long BgL_lenz00_883;
BgL_lenz00_883 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
(BgL_lenz00_883>((long)7)))
{ /* Llib/bigloo.scm 492 */
bool_t BgL_testz00_2673;
{ /* Llib/bigloo.scm 492 */
bool_t BgL__ortest_1830z00_900;
BgL__ortest_1830z00_900 = 
bigloo_strncmp(BgL_stringz00_18, BGl_string2585z00zz__biglooz00, ((long)4)); 
if(BgL__ortest_1830z00_900)
{ /* Llib/bigloo.scm 492 */
BgL_testz00_2673 = BgL__ortest_1830z00_900
; }  else 
{ /* Llib/bigloo.scm 492 */
BgL_testz00_2673 = 
bigloo_strncmp(BgL_stringz00_18, BGl_string2588z00zz__biglooz00, ((long)4))
; } } 
if(BgL_testz00_2673)
{ /* Llib/bigloo.scm 494 */
bool_t BgL_testz00_2677;
{ /* Llib/bigloo.scm 494 */
unsigned char BgL_auxz00_2678;
{ /* Llib/bigloo.scm 494 */
long BgL_i2420z00_2164;
BgL_i2420z00_2164 = 
(BgL_lenz00_883-((long)3)); 
{ /* Llib/bigloo.scm 494 */
long BgL_l2421z00_2165;
BgL_l2421z00_2165 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_i2420z00_2164, BgL_l2421z00_2165))
{ /* Llib/bigloo.scm 494 */
BgL_auxz00_2678 = 
STRING_REF(BgL_stringz00_18, BgL_i2420z00_2164)
; }  else 
{ 
obj_t BgL_auxz00_2684;
BgL_auxz00_2684 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18137)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2420z00_2164), BgL_stringz00_18); 
FAILURE(BgL_auxz00_2684,BFALSE,BFALSE);} } } 
BgL_testz00_2677 = 
(BgL_auxz00_2678==((unsigned char)'z')); } 
if(BgL_testz00_2677)
{ /* Llib/bigloo.scm 495 */
bool_t BgL_testz00_2690;
{ /* Llib/bigloo.scm 495 */
bool_t BgL__ortest_1831z00_893;
{ /* Llib/bigloo.scm 495 */
unsigned char BgL_arg1986z00_896;
{ /* Llib/bigloo.scm 495 */
long BgL_i2424z00_2168;
BgL_i2424z00_2168 = 
(BgL_lenz00_883-((long)2)); 
{ /* Llib/bigloo.scm 495 */
long BgL_l2425z00_2169;
BgL_l2425z00_2169 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_i2424z00_2168, BgL_l2425z00_2169))
{ /* Llib/bigloo.scm 495 */
BgL_arg1986z00_896 = 
STRING_REF(BgL_stringz00_18, BgL_i2424z00_2168); }  else 
{ 
obj_t BgL_auxz00_2696;
BgL_auxz00_2696 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18200)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2424z00_2168), BgL_stringz00_18); 
FAILURE(BgL_auxz00_2696,BFALSE,BFALSE);} } } 
BgL__ortest_1831z00_893 = 
isalpha(BgL_arg1986z00_896); } 
if(BgL__ortest_1831z00_893)
{ /* Llib/bigloo.scm 495 */
BgL_testz00_2690 = BgL__ortest_1831z00_893
; }  else 
{ /* Llib/bigloo.scm 496 */
unsigned char BgL_arg1984z00_894;
{ /* Llib/bigloo.scm 496 */
long BgL_i2428z00_2172;
BgL_i2428z00_2172 = 
(BgL_lenz00_883-((long)2)); 
{ /* Llib/bigloo.scm 496 */
long BgL_l2429z00_2173;
BgL_l2429z00_2173 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_i2428z00_2172, BgL_l2429z00_2173))
{ /* Llib/bigloo.scm 496 */
BgL_arg1984z00_894 = 
STRING_REF(BgL_stringz00_18, BgL_i2428z00_2172); }  else 
{ 
obj_t BgL_auxz00_2708;
BgL_auxz00_2708 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18256)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2428z00_2172), BgL_stringz00_18); 
FAILURE(BgL_auxz00_2708,BFALSE,BFALSE);} } } 
BgL_testz00_2690 = 
isdigit(BgL_arg1984z00_894); } } 
if(BgL_testz00_2690)
{ /* Llib/bigloo.scm 497 */
bool_t BgL__ortest_1832z00_888;
{ /* Llib/bigloo.scm 497 */
unsigned char BgL_arg1982z00_891;
{ /* Llib/bigloo.scm 497 */
long BgL_i2432z00_2176;
BgL_i2432z00_2176 = 
(BgL_lenz00_883-((long)1)); 
{ /* Llib/bigloo.scm 497 */
long BgL_l2433z00_2177;
BgL_l2433z00_2177 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_i2432z00_2176, BgL_l2433z00_2177))
{ /* Llib/bigloo.scm 497 */
BgL_arg1982z00_891 = 
STRING_REF(BgL_stringz00_18, BgL_i2432z00_2176); }  else 
{ 
obj_t BgL_auxz00_2719;
BgL_auxz00_2719 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18316)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2432z00_2176), BgL_stringz00_18); 
FAILURE(BgL_auxz00_2719,BFALSE,BFALSE);} } } 
BgL__ortest_1832z00_888 = 
isalpha(BgL_arg1982z00_891); } 
if(BgL__ortest_1832z00_888)
{ /* Llib/bigloo.scm 497 */
return BgL__ortest_1832z00_888;}  else 
{ /* Llib/bigloo.scm 498 */
unsigned char BgL_arg1980z00_889;
{ /* Llib/bigloo.scm 498 */
long BgL_i2436z00_2180;
BgL_i2436z00_2180 = 
(BgL_lenz00_883-((long)1)); 
{ /* Llib/bigloo.scm 498 */
long BgL_l2437z00_2181;
BgL_l2437z00_2181 = 
STRING_LENGTH(BgL_stringz00_18); 
if(
BOUND_CHECK(BgL_i2436z00_2180, BgL_l2437z00_2181))
{ /* Llib/bigloo.scm 498 */
BgL_arg1980z00_889 = 
STRING_REF(BgL_stringz00_18, BgL_i2436z00_2180); }  else 
{ 
obj_t BgL_auxz00_2731;
BgL_auxz00_2731 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18372)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2436z00_2180), BgL_stringz00_18); 
FAILURE(BgL_auxz00_2731,BFALSE,BFALSE);} } } 
return 
isdigit(BgL_arg1980z00_889);} }  else 
{ /* Llib/bigloo.scm 495 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 494 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 492 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 491 */
return ((bool_t)0);} } } 
}



/* _bigloo-mangled? */
obj_t BGl__bigloozd2mangledzf3z21zz__biglooz00(obj_t BgL_envz00_2078, obj_t BgL_stringz00_2079)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 489 */
{ /* Llib/bigloo.scm 490 */
bool_t BgL_auxz00_2737;
{ /* Llib/bigloo.scm 490 */
obj_t BgL_auxz00_2738;
if(
STRINGP(BgL_stringz00_2079))
{ /* Llib/bigloo.scm 490 */
BgL_auxz00_2738 = BgL_stringz00_2079
; }  else 
{ 
obj_t BgL_auxz00_2741;
BgL_auxz00_2741 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)17989)), BGl_string2590z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2079); 
FAILURE(BgL_auxz00_2741,BFALSE,BFALSE);} 
BgL_auxz00_2737 = 
bigloo_mangledp(BgL_auxz00_2738); } 
return 
BBOOL(BgL_auxz00_2737);} } 
}



/* bigloo-need-mangling? */
BGL_EXPORTED_DEF bool_t BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t BgL_stringz00_19)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 503 */
{ /* Llib/bigloo.scm 504 */
long BgL_lenz00_901;
BgL_lenz00_901 = 
STRING_LENGTH(BgL_stringz00_19); 
if(
(BgL_lenz00_901>((long)0)))
{ /* Llib/bigloo.scm 506 */
bool_t BgL__ortest_1834z00_903;
{ /* Llib/bigloo.scm 506 */
bool_t BgL_testz00_2750;
{ /* Llib/bigloo.scm 506 */
bool_t BgL_testz00_2751;
{ /* Llib/bigloo.scm 506 */
unsigned char BgL_arg1999z00_917;
if(
BOUND_CHECK(((long)0), BgL_lenz00_901))
{ /* Llib/bigloo.scm 506 */
BgL_arg1999z00_917 = 
STRING_REF(BgL_stringz00_19, ((long)0)); }  else 
{ 
obj_t BgL_auxz00_2755;
BgL_auxz00_2755 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18768)), BGl_string2581z00zz__biglooz00, 
BINT(((long)0)), BgL_stringz00_19); 
FAILURE(BgL_auxz00_2755,BFALSE,BFALSE);} 
BgL_testz00_2751 = 
isalpha(BgL_arg1999z00_917); } 
if(BgL_testz00_2751)
{ /* Llib/bigloo.scm 506 */
BgL_testz00_2750 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 507 */
unsigned char BgL_auxz00_2761;
{ /* Llib/bigloo.scm 507 */
long BgL_l2445z00_2189;
BgL_l2445z00_2189 = 
STRING_LENGTH(BgL_stringz00_19); 
if(
BOUND_CHECK(((long)0), BgL_l2445z00_2189))
{ /* Llib/bigloo.scm 507 */
BgL_auxz00_2761 = 
STRING_REF(BgL_stringz00_19, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_2766;
BgL_auxz00_2766 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18802)), BGl_string2581z00zz__biglooz00, 
BINT(((long)0)), BgL_stringz00_19); 
FAILURE(BgL_auxz00_2766,BFALSE,BFALSE);} } 
BgL_testz00_2750 = 
(BgL_auxz00_2761==((unsigned char)'_')); } } 
if(BgL_testz00_2750)
{ /* Llib/bigloo.scm 506 */
BgL__ortest_1834z00_903 = ((bool_t)0); }  else 
{ /* Llib/bigloo.scm 506 */
BgL__ortest_1834z00_903 = ((bool_t)1); } } 
if(BgL__ortest_1834z00_903)
{ /* Llib/bigloo.scm 506 */
return BgL__ortest_1834z00_903;}  else 
{ 
long BgL_iz00_905;
BgL_iz00_905 = ((long)1); 
BgL_zc3anonymousza31990ze3z83_906:
if(
(BgL_iz00_905>=BgL_lenz00_901))
{ /* Llib/bigloo.scm 509 */
return ((bool_t)0);}  else 
{ /* Llib/bigloo.scm 511 */
unsigned char BgL_cz00_908;
{ /* Llib/bigloo.scm 511 */
long BgL_l2449z00_2193;
BgL_l2449z00_2193 = 
STRING_LENGTH(BgL_stringz00_19); 
if(
BOUND_CHECK(BgL_iz00_905, BgL_l2449z00_2193))
{ /* Llib/bigloo.scm 511 */
BgL_cz00_908 = 
STRING_REF(BgL_stringz00_19, BgL_iz00_905); }  else 
{ 
obj_t BgL_auxz00_2779;
BgL_auxz00_2779 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18906)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_iz00_905), BgL_stringz00_19); 
FAILURE(BgL_auxz00_2779,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 512 */
bool_t BgL_testz00_2784;
if(
isalpha(BgL_cz00_908))
{ /* Llib/bigloo.scm 512 */
BgL_testz00_2784 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 512 */
if(
isdigit(BgL_cz00_908))
{ /* Llib/bigloo.scm 513 */
BgL_testz00_2784 = ((bool_t)1)
; }  else 
{ /* Llib/bigloo.scm 513 */
BgL_testz00_2784 = 
(BgL_cz00_908==((unsigned char)'_'))
; } } 
if(BgL_testz00_2784)
{ 
long BgL_iz00_2790;
BgL_iz00_2790 = 
(BgL_iz00_905+((long)1)); 
BgL_iz00_905 = BgL_iz00_2790; 
goto BgL_zc3anonymousza31990ze3z83_906;}  else 
{ /* Llib/bigloo.scm 512 */
return ((bool_t)1);} } } } }  else 
{ /* Llib/bigloo.scm 505 */
return ((bool_t)0);} } } 
}



/* _bigloo-need-mangling? */
obj_t BGl__bigloozd2needzd2manglingzf3zf3zz__biglooz00(obj_t BgL_envz00_2080, obj_t BgL_stringz00_2081)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 503 */
{ /* Llib/bigloo.scm 504 */
bool_t BgL_auxz00_2792;
{ /* Llib/bigloo.scm 504 */
obj_t BgL_auxz00_2793;
if(
STRINGP(BgL_stringz00_2081))
{ /* Llib/bigloo.scm 504 */
BgL_auxz00_2793 = BgL_stringz00_2081
; }  else 
{ 
obj_t BgL_auxz00_2796;
BgL_auxz00_2796 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)18674)), BGl_string2591z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2081); 
FAILURE(BgL_auxz00_2796,BFALSE,BFALSE);} 
BgL_auxz00_2792 = 
BGl_bigloozd2needzd2manglingzf3zf3zz__biglooz00(BgL_auxz00_2793); } 
return 
BBOOL(BgL_auxz00_2792);} } 
}



/* bigloo-demangle */
BGL_EXPORTED_DEF obj_t bigloo_demangle(obj_t BgL_stringz00_20)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 521 */
{ /* Llib/bigloo.scm 522 */
long BgL_lenz00_918;
BgL_lenz00_918 = 
STRING_LENGTH(BgL_stringz00_20); 
{ /* Llib/bigloo.scm 522 */
long BgL_clenz00_919;
BgL_clenz00_919 = 
(BgL_lenz00_918-((long)3)); 
{ /* Llib/bigloo.scm 523 */

{ 

if(
(BgL_lenz00_918<((long)8)))
{ /* Llib/bigloo.scm 572 */
return 
BGl_errorz00zz__errorz00(BGl_string2592z00zz__biglooz00, BGl_string2593z00zz__biglooz00, BgL_stringz00_20);}  else 
{ /* Llib/bigloo.scm 572 */
if(
bigloo_strncmp(BgL_stringz00_20, BGl_string2585z00zz__biglooz00, ((long)4)))
{ /* Llib/bigloo.scm 574 */
{ /* Llib/bigloo.scm 562 */
obj_t BgL_strz00_980;
BgL_strz00_980 = 
BGl_bigloozd2demanglezd2atz00zz__biglooz00(BgL_stringz00_20, BgL_clenz00_919, 
BINT(((long)4))); 
{ /* Llib/bigloo.scm 564 */
obj_t BgL_offsetz00_981;
{ /* Llib/bigloo.scm 564 */
int BgL_auxz00_2811;
BgL_auxz00_2811 = 
(int)(((long)1)); 
BgL_offsetz00_981 = 
BGL_MVALUES_VAL(BgL_auxz00_2811); } 
{ /* Llib/bigloo.scm 564 */
int BgL_auxz00_2814;
BgL_auxz00_2814 = 
(int)(((long)2)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_2814); } 
{ /* Llib/bigloo.scm 564 */
int BgL_auxz00_2817;
BgL_auxz00_2817 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_2817, BUNSPEC); } 
return BgL_strz00_980;} } }  else 
{ /* Llib/bigloo.scm 574 */
if(
bigloo_strncmp(BgL_stringz00_20, BGl_string2588z00zz__biglooz00, ((long)4)))
{ /* Llib/bigloo.scm 576 */
{ /* Llib/bigloo.scm 566 */
obj_t BgL_idz00_985;
BgL_idz00_985 = 
BGl_bigloozd2demanglezd2atz00zz__biglooz00(BgL_stringz00_20, BgL_clenz00_919, 
BINT(((long)4))); 
{ /* Llib/bigloo.scm 568 */
obj_t BgL_offsetz00_986;
{ /* Llib/bigloo.scm 568 */
int BgL_auxz00_2824;
BgL_auxz00_2824 = 
(int)(((long)1)); 
BgL_offsetz00_986 = 
BGL_MVALUES_VAL(BgL_auxz00_2824); } 
{ /* Llib/bigloo.scm 568 */
obj_t BgL_modulez00_987;
BgL_modulez00_987 = 
BGl_bigloozd2demanglezd2atz00zz__biglooz00(BgL_stringz00_20, BgL_clenz00_919, BgL_offsetz00_986); 
{ /* Llib/bigloo.scm 570 */
obj_t BgL_offsetz00_988;
{ /* Llib/bigloo.scm 570 */
int BgL_auxz00_2828;
BgL_auxz00_2828 = 
(int)(((long)1)); 
BgL_offsetz00_988 = 
BGL_MVALUES_VAL(BgL_auxz00_2828); } 
{ /* Llib/bigloo.scm 570 */
int BgL_auxz00_2831;
BgL_auxz00_2831 = 
(int)(((long)2)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_2831); } 
{ /* Llib/bigloo.scm 570 */
int BgL_auxz00_2834;
BgL_auxz00_2834 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_2834, BgL_modulez00_987); } 
return BgL_idz00_985;} } } } }  else 
{ /* Llib/bigloo.scm 576 */
return BgL_stringz00_20;} } } } } } } } 
}



/* char->digit */
long BGl_charzd2ze3digitz31zz__biglooz00(unsigned char BgL_cz00_930)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 529 */
if(
isdigit(BgL_cz00_930))
{ /* Llib/bigloo.scm 527 */
return 
(
(BgL_cz00_930)-((long)48));}  else 
{ /* Llib/bigloo.scm 527 */
return 
(((long)10)+
(
(BgL_cz00_930)-((long)97)));} } 
}



/* get-8bits-integer */
long BGl_getzd28bitszd2integerz00zz__biglooz00(obj_t BgL_stringz00_2096, obj_t BgL_rz00_939)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 535 */
{ /* Llib/bigloo.scm 534 */

{ /* Llib/bigloo.scm 535 */
long BgL_auxz00_2865;long BgL_auxz00_2844;
{ /* Llib/bigloo.scm 535 */
long BgL_auxz00_2866;
{ /* Llib/bigloo.scm 534 */
unsigned char BgL_auxz00_2867;
{ /* Llib/bigloo.scm 532 */
long BgL_i2456z00_2200;
{ /* Llib/bigloo.scm 532 */
long BgL_za71za7_1743;
{ /* Llib/bigloo.scm 532 */
obj_t BgL_auxz00_2868;
if(
INTEGERP(BgL_rz00_939))
{ /* Llib/bigloo.scm 532 */
BgL_auxz00_2868 = BgL_rz00_939
; }  else 
{ 
obj_t BgL_auxz00_2871;
BgL_auxz00_2871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19724)), BGl_string2594z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_939); 
FAILURE(BgL_auxz00_2871,BFALSE,BFALSE);} 
BgL_za71za7_1743 = 
(long)CINT(BgL_auxz00_2868); } 
BgL_i2456z00_2200 = 
(BgL_za71za7_1743+((long)2)); } 
{ /* Llib/bigloo.scm 532 */
long BgL_l2457z00_2201;
BgL_l2457z00_2201 = 
STRING_LENGTH(BgL_stringz00_2096); 
if(
BOUND_CHECK(BgL_i2456z00_2200, BgL_l2457z00_2201))
{ /* Llib/bigloo.scm 532 */
BgL_auxz00_2867 = 
STRING_REF(BgL_stringz00_2096, BgL_i2456z00_2200)
; }  else 
{ 
obj_t BgL_auxz00_2881;
BgL_auxz00_2881 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19705)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2456z00_2200), BgL_stringz00_2096); 
FAILURE(BgL_auxz00_2881,BFALSE,BFALSE);} } } 
BgL_auxz00_2866 = 
BGl_charzd2ze3digitz31zz__biglooz00(BgL_auxz00_2867); } 
BgL_auxz00_2865 = 
(BgL_auxz00_2866 << 
(int)(((long)4))); } 
{ /* Llib/bigloo.scm 533 */
unsigned char BgL_auxz00_2845;
{ /* Llib/bigloo.scm 531 */
long BgL_i2452z00_2196;
{ /* Llib/bigloo.scm 531 */
long BgL_za71za7_1739;
{ /* Llib/bigloo.scm 531 */
obj_t BgL_auxz00_2846;
if(
INTEGERP(BgL_rz00_939))
{ /* Llib/bigloo.scm 531 */
BgL_auxz00_2846 = BgL_rz00_939
; }  else 
{ 
obj_t BgL_auxz00_2849;
BgL_auxz00_2849 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19687)), BGl_string2594z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_939); 
FAILURE(BgL_auxz00_2849,BFALSE,BFALSE);} 
BgL_za71za7_1739 = 
(long)CINT(BgL_auxz00_2846); } 
BgL_i2452z00_2196 = 
(BgL_za71za7_1739+((long)1)); } 
{ /* Llib/bigloo.scm 531 */
long BgL_l2453z00_2197;
BgL_l2453z00_2197 = 
STRING_LENGTH(BgL_stringz00_2096); 
if(
BOUND_CHECK(BgL_i2452z00_2196, BgL_l2453z00_2197))
{ /* Llib/bigloo.scm 531 */
BgL_auxz00_2845 = 
STRING_REF(BgL_stringz00_2096, BgL_i2452z00_2196)
; }  else 
{ 
obj_t BgL_auxz00_2859;
BgL_auxz00_2859 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19668)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2452z00_2196), BgL_stringz00_2096); 
FAILURE(BgL_auxz00_2859,BFALSE,BFALSE);} } } 
BgL_auxz00_2844 = 
BGl_charzd2ze3digitz31zz__biglooz00(BgL_auxz00_2845); } 
return 
(BgL_auxz00_2844+BgL_auxz00_2865);} } } 
}



/* bigloo-demangle-at */
obj_t BGl_bigloozd2demanglezd2atz00zz__biglooz00(obj_t BgL_stringz00_2098, long BgL_clenz00_2097, obj_t BgL_offsetz00_948)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 560 */
{ /* Llib/bigloo.scm 537 */
obj_t BgL_newz00_950;
BgL_newz00_950 = 
make_string(BgL_clenz00_2097, ((unsigned char)' ')); 
{ 
obj_t BgL_rz00_952;long BgL_wz00_953;long BgL_checksumz00_954;
BgL_rz00_952 = BgL_offsetz00_948; 
BgL_wz00_953 = ((long)0); 
BgL_checksumz00_954 = ((long)0); 
BgL_zc3anonymousza32018ze3z83_955:
{ /* Llib/bigloo.scm 541 */
bool_t BgL_testz00_2891;
{ /* Llib/bigloo.scm 541 */
long BgL_n1z00_1758;
{ /* Llib/bigloo.scm 541 */
obj_t BgL_auxz00_2892;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 541 */
BgL_auxz00_2892 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2895;
BgL_auxz00_2895 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19974)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2895,BFALSE,BFALSE);} 
BgL_n1z00_1758 = 
(long)CINT(BgL_auxz00_2892); } 
BgL_testz00_2891 = 
(BgL_n1z00_1758==BgL_clenz00_2097); } 
if(BgL_testz00_2891)
{ /* Llib/bigloo.scm 541 */
if(
(BgL_checksumz00_954==
BGl_getzd28bitszd2integerz00zz__biglooz00(BgL_stringz00_2098, BgL_rz00_952)))
{ /* Llib/bigloo.scm 544 */
obj_t BgL_val0_1861z00_958;long BgL_val1_1862z00_959;
BgL_val0_1861z00_958 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_950, ((long)0), BgL_wz00_953); 
{ /* Llib/bigloo.scm 544 */
long BgL_za71za7_1762;
{ /* Llib/bigloo.scm 544 */
obj_t BgL_auxz00_2905;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 544 */
BgL_auxz00_2905 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2908;
BgL_auxz00_2908 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20109)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2908,BFALSE,BFALSE);} 
BgL_za71za7_1762 = 
(long)CINT(BgL_auxz00_2905); } 
BgL_val1_1862z00_959 = 
(BgL_za71za7_1762+((long)3)); } 
{ /* Llib/bigloo.scm 544 */
int BgL_auxz00_2914;
BgL_auxz00_2914 = 
(int)(((long)2)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_2914); } 
{ /* Llib/bigloo.scm 544 */
obj_t BgL_auxz00_2919;int BgL_auxz00_2917;
BgL_auxz00_2919 = 
BINT(BgL_val1_1862z00_959); 
BgL_auxz00_2917 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_2917, BgL_auxz00_2919); } 
return BgL_val0_1861z00_958;}  else 
{ /* Llib/bigloo.scm 543 */
return 
BGl_errorz00zz__errorz00(BGl_string2592z00zz__biglooz00, BGl_string2597z00zz__biglooz00, BgL_stringz00_2098);} }  else 
{ /* Llib/bigloo.scm 546 */
unsigned char BgL_cz00_961;
{ /* Llib/bigloo.scm 546 */
long BgL_kz00_1768;
{ /* Llib/bigloo.scm 546 */
obj_t BgL_auxz00_2923;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 546 */
BgL_auxz00_2923 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2926;
BgL_auxz00_2926 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20169)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2926,BFALSE,BFALSE);} 
BgL_kz00_1768 = 
(long)CINT(BgL_auxz00_2923); } 
{ /* Llib/bigloo.scm 546 */
long BgL_l2461z00_2205;
BgL_l2461z00_2205 = 
STRING_LENGTH(BgL_stringz00_2098); 
if(
BOUND_CHECK(BgL_kz00_1768, BgL_l2461z00_2205))
{ /* Llib/bigloo.scm 546 */
BgL_cz00_961 = 
STRING_REF(BgL_stringz00_2098, BgL_kz00_1768); }  else 
{ 
obj_t BgL_auxz00_2935;
BgL_auxz00_2935 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20150)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_kz00_1768), BgL_stringz00_2098); 
FAILURE(BgL_auxz00_2935,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_961==((unsigned char)'z')))
{ /* Llib/bigloo.scm 548 */
bool_t BgL_testz00_2942;
{ /* Llib/bigloo.scm 548 */
unsigned char BgL_auxz00_2943;
{ /* Llib/bigloo.scm 548 */
long BgL_i2464z00_2208;
{ /* Llib/bigloo.scm 548 */
long BgL_za71za7_1771;
{ /* Llib/bigloo.scm 548 */
obj_t BgL_auxz00_2944;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 548 */
BgL_auxz00_2944 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2947;
BgL_auxz00_2947 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20237)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2947,BFALSE,BFALSE);} 
BgL_za71za7_1771 = 
(long)CINT(BgL_auxz00_2944); } 
BgL_i2464z00_2208 = 
(BgL_za71za7_1771+((long)1)); } 
{ /* Llib/bigloo.scm 548 */
long BgL_l2465z00_2209;
BgL_l2465z00_2209 = 
STRING_LENGTH(BgL_stringz00_2098); 
if(
BOUND_CHECK(BgL_i2464z00_2208, BgL_l2465z00_2209))
{ /* Llib/bigloo.scm 548 */
BgL_auxz00_2943 = 
STRING_REF(BgL_stringz00_2098, BgL_i2464z00_2208)
; }  else 
{ 
obj_t BgL_auxz00_2957;
BgL_auxz00_2957 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20218)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2464z00_2208), BgL_stringz00_2098); 
FAILURE(BgL_auxz00_2957,BFALSE,BFALSE);} } } 
BgL_testz00_2942 = 
(BgL_auxz00_2943==((unsigned char)'z')); } 
if(BgL_testz00_2942)
{ /* Llib/bigloo.scm 549 */
obj_t BgL_val0_1863z00_964;long BgL_val1_1864z00_965;
BgL_val0_1863z00_964 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_newz00_950, ((long)0), 
(BgL_wz00_953-((long)1))); 
{ /* Llib/bigloo.scm 549 */
long BgL_za71za7_1779;
{ /* Llib/bigloo.scm 549 */
obj_t BgL_auxz00_2965;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 549 */
BgL_auxz00_2965 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2968;
BgL_auxz00_2968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20298)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2968,BFALSE,BFALSE);} 
BgL_za71za7_1779 = 
(long)CINT(BgL_auxz00_2965); } 
BgL_val1_1864z00_965 = 
(BgL_za71za7_1779+((long)2)); } 
{ /* Llib/bigloo.scm 549 */
int BgL_auxz00_2974;
BgL_auxz00_2974 = 
(int)(((long)2)); 
BGL_MVALUES_NUMBER_SET(BgL_auxz00_2974); } 
{ /* Llib/bigloo.scm 549 */
obj_t BgL_auxz00_2979;int BgL_auxz00_2977;
BgL_auxz00_2979 = 
BINT(BgL_val1_1864z00_965); 
BgL_auxz00_2977 = 
(int)(((long)1)); 
BGL_MVALUES_VAL_SET(BgL_auxz00_2977, BgL_auxz00_2979); } 
return BgL_val0_1863z00_964;}  else 
{ /* Llib/bigloo.scm 550 */
long BgL_iz00_968;
BgL_iz00_968 = 
BGl_getzd28bitszd2integerz00zz__biglooz00(BgL_stringz00_2098, BgL_rz00_952); 
{ /* Llib/bigloo.scm 550 */
unsigned char BgL_ncz00_969;
BgL_ncz00_969 = 
BGl_integerzd2ze3charz31zz__r4_characters_6_6z00(BgL_iz00_968); 
{ /* Llib/bigloo.scm 551 */

{ /* Llib/bigloo.scm 552 */
long BgL_l2469z00_2213;
BgL_l2469z00_2213 = 
STRING_LENGTH(BgL_newz00_950); 
if(
BOUND_CHECK(BgL_wz00_953, BgL_l2469z00_2213))
{ /* Llib/bigloo.scm 552 */
STRING_SET(BgL_newz00_950, BgL_wz00_953, BgL_ncz00_969); }  else 
{ 
obj_t BgL_auxz00_2988;
BgL_auxz00_2988 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20389)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_wz00_953), BgL_newz00_950); 
FAILURE(BgL_auxz00_2988,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 553 */
long BgL_arg2027z00_970;long BgL_arg2028z00_971;long BgL_arg2029z00_972;
{ /* Llib/bigloo.scm 553 */
long BgL_za71za7_1787;
{ /* Llib/bigloo.scm 553 */
obj_t BgL_auxz00_2993;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 553 */
BgL_auxz00_2993 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_2996;
BgL_auxz00_2996 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20423)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_2996,BFALSE,BFALSE);} 
BgL_za71za7_1787 = 
(long)CINT(BgL_auxz00_2993); } 
BgL_arg2027z00_970 = 
(BgL_za71za7_1787+((long)3)); } 
BgL_arg2028z00_971 = 
(BgL_wz00_953+((long)1)); 
BgL_arg2029z00_972 = 
(BgL_checksumz00_954 ^ BgL_iz00_968); 
{ 
long BgL_checksumz00_3007;long BgL_wz00_3006;obj_t BgL_rz00_3004;
BgL_rz00_3004 = 
BINT(BgL_arg2027z00_970); 
BgL_wz00_3006 = BgL_arg2028z00_971; 
BgL_checksumz00_3007 = BgL_arg2029z00_972; 
BgL_checksumz00_954 = BgL_checksumz00_3007; 
BgL_wz00_953 = BgL_wz00_3006; 
BgL_rz00_952 = BgL_rz00_3004; 
goto BgL_zc3anonymousza32018ze3z83_955;} } } } } }  else 
{ /* Llib/bigloo.scm 547 */
{ /* Llib/bigloo.scm 557 */
long BgL_l2473z00_2217;
BgL_l2473z00_2217 = 
STRING_LENGTH(BgL_newz00_950); 
if(
BOUND_CHECK(BgL_wz00_953, BgL_l2473z00_2217))
{ /* Llib/bigloo.scm 557 */
STRING_SET(BgL_newz00_950, BgL_wz00_953, BgL_cz00_961); }  else 
{ 
obj_t BgL_auxz00_3012;
BgL_auxz00_3012 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20509)), BGl_string2569z00zz__biglooz00, 
BINT(BgL_wz00_953), BgL_newz00_950); 
FAILURE(BgL_auxz00_3012,BFALSE,BFALSE);} } 
{ /* Llib/bigloo.scm 558 */
long BgL_arg2033z00_975;long BgL_arg2034z00_976;
{ /* Llib/bigloo.scm 558 */
long BgL_za71za7_1796;
{ /* Llib/bigloo.scm 558 */
obj_t BgL_auxz00_3017;
if(
INTEGERP(BgL_rz00_952))
{ /* Llib/bigloo.scm 558 */
BgL_auxz00_3017 = BgL_rz00_952
; }  else 
{ 
obj_t BgL_auxz00_3020;
BgL_auxz00_3020 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)20545)), BGl_string2596z00zz__biglooz00, BGl_string2595z00zz__biglooz00, BgL_rz00_952); 
FAILURE(BgL_auxz00_3020,BFALSE,BFALSE);} 
BgL_za71za7_1796 = 
(long)CINT(BgL_auxz00_3017); } 
BgL_arg2033z00_975 = 
(BgL_za71za7_1796+((long)1)); } 
BgL_arg2034z00_976 = 
(BgL_wz00_953+((long)1)); 
{ 
long BgL_wz00_3029;obj_t BgL_rz00_3027;
BgL_rz00_3027 = 
BINT(BgL_arg2033z00_975); 
BgL_wz00_3029 = BgL_arg2034z00_976; 
BgL_wz00_953 = BgL_wz00_3029; 
BgL_rz00_952 = BgL_rz00_3027; 
goto BgL_zc3anonymousza32018ze3z83_955;} } } } } } } } 
}



/* _bigloo-demangle */
obj_t BGl__bigloozd2demanglezd2zz__biglooz00(obj_t BgL_envz00_2082, obj_t BgL_stringz00_2083)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 521 */
{ /* Llib/bigloo.scm 522 */
obj_t BgL_auxz00_3030;
if(
STRINGP(BgL_stringz00_2083))
{ /* Llib/bigloo.scm 522 */
BgL_auxz00_3030 = BgL_stringz00_2083
; }  else 
{ 
obj_t BgL_auxz00_3033;
BgL_auxz00_3033 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)19317)), BGl_string2598z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2083); 
FAILURE(BgL_auxz00_3033,BFALSE,BFALSE);} 
return 
bigloo_demangle(BgL_auxz00_3030);} } 
}



/* bigloo-class-mangled? */
BGL_EXPORTED_DEF bool_t bigloo_class_mangledp(obj_t BgL_stringz00_21)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 584 */
{ /* Llib/bigloo.scm 585 */
long BgL_lenz00_997;
BgL_lenz00_997 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
(BgL_lenz00_997>((long)8)))
{ /* Llib/bigloo.scm 587 */
bool_t BgL_testz00_3041;
{ /* Llib/bigloo.scm 587 */
unsigned char BgL_auxz00_3042;
{ /* Llib/bigloo.scm 587 */
long BgL_i2476z00_2220;
BgL_i2476z00_2220 = 
(BgL_lenz00_997-((long)1)); 
if(
BOUND_CHECK(BgL_i2476z00_2220, BgL_lenz00_997))
{ /* Llib/bigloo.scm 587 */
BgL_auxz00_3042 = 
STRING_REF(BgL_stringz00_21, BgL_i2476z00_2220)
; }  else 
{ 
obj_t BgL_auxz00_3047;
BgL_auxz00_3047 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21522)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2476z00_2220), BgL_stringz00_21); 
FAILURE(BgL_auxz00_3047,BFALSE,BFALSE);} } 
BgL_testz00_3041 = 
(BgL_auxz00_3042==((unsigned char)'t')); } 
if(BgL_testz00_3041)
{ /* Llib/bigloo.scm 588 */
bool_t BgL_testz00_3053;
{ /* Llib/bigloo.scm 588 */
unsigned char BgL_auxz00_3054;
{ /* Llib/bigloo.scm 588 */
long BgL_i2480z00_2224;
BgL_i2480z00_2224 = 
(BgL_lenz00_997-((long)2)); 
{ /* Llib/bigloo.scm 588 */
long BgL_l2481z00_2225;
BgL_l2481z00_2225 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_i2480z00_2224, BgL_l2481z00_2225))
{ /* Llib/bigloo.scm 588 */
BgL_auxz00_3054 = 
STRING_REF(BgL_stringz00_21, BgL_i2480z00_2224)
; }  else 
{ 
obj_t BgL_auxz00_3060;
BgL_auxz00_3060 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21571)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2480z00_2224), BgL_stringz00_21); 
FAILURE(BgL_auxz00_3060,BFALSE,BFALSE);} } } 
BgL_testz00_3053 = 
(BgL_auxz00_3054==((unsigned char)'l')); } 
if(BgL_testz00_3053)
{ /* Llib/bigloo.scm 589 */
bool_t BgL_testz00_3066;
{ /* Llib/bigloo.scm 589 */
unsigned char BgL_auxz00_3067;
{ /* Llib/bigloo.scm 589 */
long BgL_i2484z00_2228;
BgL_i2484z00_2228 = 
(BgL_lenz00_997-((long)3)); 
{ /* Llib/bigloo.scm 589 */
long BgL_l2485z00_2229;
BgL_l2485z00_2229 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_i2484z00_2228, BgL_l2485z00_2229))
{ /* Llib/bigloo.scm 589 */
BgL_auxz00_3067 = 
STRING_REF(BgL_stringz00_21, BgL_i2484z00_2228)
; }  else 
{ 
obj_t BgL_auxz00_3073;
BgL_auxz00_3073 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21620)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2484z00_2228), BgL_stringz00_21); 
FAILURE(BgL_auxz00_3073,BFALSE,BFALSE);} } } 
BgL_testz00_3066 = 
(BgL_auxz00_3067==((unsigned char)'g')); } 
if(BgL_testz00_3066)
{ /* Llib/bigloo.scm 590 */
bool_t BgL_testz00_3079;
{ /* Llib/bigloo.scm 590 */
unsigned char BgL_auxz00_3080;
{ /* Llib/bigloo.scm 590 */
long BgL_i2488z00_2232;
BgL_i2488z00_2232 = 
(BgL_lenz00_997-((long)4)); 
{ /* Llib/bigloo.scm 590 */
long BgL_l2489z00_2233;
BgL_l2489z00_2233 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_i2488z00_2232, BgL_l2489z00_2233))
{ /* Llib/bigloo.scm 590 */
BgL_auxz00_3080 = 
STRING_REF(BgL_stringz00_21, BgL_i2488z00_2232)
; }  else 
{ 
obj_t BgL_auxz00_3086;
BgL_auxz00_3086 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21669)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2488z00_2232), BgL_stringz00_21); 
FAILURE(BgL_auxz00_3086,BFALSE,BFALSE);} } } 
BgL_testz00_3079 = 
(BgL_auxz00_3080==((unsigned char)'b')); } 
if(BgL_testz00_3079)
{ /* Llib/bigloo.scm 591 */
bool_t BgL_testz00_3092;
{ /* Llib/bigloo.scm 591 */
unsigned char BgL_auxz00_3093;
{ /* Llib/bigloo.scm 591 */
long BgL_i2492z00_2236;
BgL_i2492z00_2236 = 
(BgL_lenz00_997-((long)5)); 
{ /* Llib/bigloo.scm 591 */
long BgL_l2493z00_2237;
BgL_l2493z00_2237 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_i2492z00_2236, BgL_l2493z00_2237))
{ /* Llib/bigloo.scm 591 */
BgL_auxz00_3093 = 
STRING_REF(BgL_stringz00_21, BgL_i2492z00_2236)
; }  else 
{ 
obj_t BgL_auxz00_3099;
BgL_auxz00_3099 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21718)), BGl_string2581z00zz__biglooz00, 
BINT(BgL_i2492z00_2236), BgL_stringz00_21); 
FAILURE(BgL_auxz00_3099,BFALSE,BFALSE);} } } 
BgL_testz00_3092 = 
(BgL_auxz00_3093==((unsigned char)'_')); } 
if(BgL_testz00_3092)
{ /* Llib/bigloo.scm 591 */
return 
bigloo_mangledp(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_21, ((long)0), 
(BgL_lenz00_997-((long)5))));}  else 
{ /* Llib/bigloo.scm 591 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 590 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 589 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 588 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 587 */
return ((bool_t)0);} }  else 
{ /* Llib/bigloo.scm 586 */
return ((bool_t)0);} } } 
}



/* _bigloo-class-mangled? */
obj_t BGl__bigloozd2classzd2mangledzf3zf3zz__biglooz00(obj_t BgL_envz00_2084, obj_t BgL_stringz00_2085)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 584 */
{ /* Llib/bigloo.scm 585 */
bool_t BgL_auxz00_3108;
{ /* Llib/bigloo.scm 585 */
obj_t BgL_auxz00_3109;
if(
STRINGP(BgL_stringz00_2085))
{ /* Llib/bigloo.scm 585 */
BgL_auxz00_3109 = BgL_stringz00_2085
; }  else 
{ 
obj_t BgL_auxz00_3112;
BgL_auxz00_3112 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)21451)), BGl_string2599z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2085); 
FAILURE(BgL_auxz00_3112,BFALSE,BFALSE);} 
BgL_auxz00_3108 = 
bigloo_class_mangledp(BgL_auxz00_3109); } 
return 
BBOOL(BgL_auxz00_3108);} } 
}



/* bigloo-class-demangle */
BGL_EXPORTED_DEF obj_t bigloo_class_demangle(obj_t BgL_stringz00_22)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 597 */
{ /* Llib/bigloo.scm 599 */
obj_t BgL_arg2053z00_1017;
BgL_arg2053z00_1017 = 
bigloo_demangle(
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_22, ((long)0), 
(
STRING_LENGTH(BgL_stringz00_22)-((long)5)))); 
{ /* Llib/bigloo.scm 598 */
obj_t BgL_auxz00_3122;
if(
STRINGP(BgL_arg2053z00_1017))
{ /* Llib/bigloo.scm 598 */
BgL_auxz00_3122 = BgL_arg2053z00_1017
; }  else 
{ 
obj_t BgL_auxz00_3125;
BgL_auxz00_3125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)22081)), BGl_string2600z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_arg2053z00_1017); 
FAILURE(BgL_auxz00_3125,BFALSE,BFALSE);} 
return 
string_append(BgL_auxz00_3122, BGl_string2601z00zz__biglooz00);} } } 
}



/* _bigloo-class-demangle */
obj_t BGl__bigloozd2classzd2demanglez00zz__biglooz00(obj_t BgL_envz00_2086, obj_t BgL_stringz00_2087)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 597 */
{ /* Llib/bigloo.scm 599 */
obj_t BgL_auxz00_3130;
if(
STRINGP(BgL_stringz00_2087))
{ /* Llib/bigloo.scm 599 */
BgL_auxz00_3130 = BgL_stringz00_2087
; }  else 
{ 
obj_t BgL_auxz00_3133;
BgL_auxz00_3133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)22118)), BGl_string2602z00zz__biglooz00, BGl_string2573z00zz__biglooz00, BgL_stringz00_2087); 
FAILURE(BgL_auxz00_3133,BFALSE,BFALSE);} 
return 
bigloo_class_demangle(BgL_auxz00_3130);} } 
}



/* bigloo-exit-mutex */
BGL_EXPORTED_DEF obj_t bgl_exit_mutex()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 610 */
return BGl_za2exitzd2mutexza2zd2zz__biglooz00;} 
}



/* _bigloo-exit-mutex */
obj_t BGl__bigloozd2exitzd2mutexz00zz__biglooz00(obj_t BgL_envz00_2088)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 610 */
return BGl_za2exitzd2mutexza2zd2zz__biglooz00;} 
}



/* register-exit-function! */
BGL_EXPORTED_DEF obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t BgL_funz00_23)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 621 */
{ /* Llib/bigloo.scm 622 */
obj_t BgL_arg2060z00_1024;
BgL_arg2060z00_1024 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_arg2060z00_1024); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_arg2060z00_1024, ((long)0)); } } } 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_23, 
(int)(((long)1))))
{ /* Llib/bigloo.scm 623 */
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = 
MAKE_PAIR(BgL_funz00_23, BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00); }  else 
{ /* Llib/bigloo.scm 623 */
BGl_errorz00zz__errorz00(BGl_string2603z00zz__biglooz00, BGl_string2604z00zz__biglooz00, BgL_funz00_23); } 
{ /* Llib/bigloo.scm 628 */
obj_t BgL_arg2062z00_1028;
BgL_arg2062z00_1028 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; 
return 
BBOOL(
bgl_mutex_unlock(BgL_arg2062z00_1028));} } 
}



/* _register-exit-function! */
obj_t BGl__registerzd2exitzd2functionz12z12zz__biglooz00(obj_t BgL_envz00_2089, obj_t BgL_funz00_2090)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 621 */
{ /* Llib/bigloo.scm 628 */
obj_t BgL_auxz00_3149;
if(
PROCEDUREP(BgL_funz00_2090))
{ /* Llib/bigloo.scm 628 */
BgL_auxz00_3149 = BgL_funz00_2090
; }  else 
{ 
obj_t BgL_auxz00_3152;
BgL_auxz00_3152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)23510)), BGl_string2605z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_funz00_2090); 
FAILURE(BgL_auxz00_3152,BFALSE,BFALSE);} 
return 
BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BgL_auxz00_3149);} } 
}



/* bigloo-exit-apply */
BGL_EXPORTED_DEF obj_t bigloo_exit_apply(obj_t BgL_valz00_24)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 633 */
{ /* Llib/bigloo.scm 634 */
obj_t BgL_mutz00_1029;
if(
BGL_MUTEXP(BGl_za2exitzd2mutexza2zd2zz__biglooz00))
{ /* Llib/bigloo.scm 634 */
BgL_mutz00_1029 = BGl_za2exitzd2mutexza2zd2zz__biglooz00; }  else 
{ /* Llib/bigloo.scm 634 */
BgL_mutz00_1029 = 
bgl_make_mutex(BGl_symbol2565z00zz__biglooz00); } 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_mutz00_1029); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_mutz00_1029, ((long)0)); } } 
{ 
obj_t BgL_valz00_1033;
BgL_valz00_1033 = BgL_valz00_24; 
BgL_zc3anonymousza32063ze3z83_1034:
{ /* Llib/bigloo.scm 639 */
obj_t BgL_valz00_1035;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_valz00_1033))
{ /* Llib/bigloo.scm 639 */
BgL_valz00_1035 = BgL_valz00_1033; }  else 
{ /* Llib/bigloo.scm 639 */
BgL_valz00_1035 = 
BINT(((long)0)); } 
if(
PAIRP(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00))
{ /* Llib/bigloo.scm 643 */
obj_t BgL_funz00_1037;
BgL_funz00_1037 = 
CAR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00); 
BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00 = 
CDR(BGl_za2bigloozd2exitzd2functionsza2z00zz__biglooz00); 
{ /* Llib/bigloo.scm 645 */
obj_t BgL_nvalz00_1038;
{ /* Llib/bigloo.scm 645 */
obj_t BgL_funz00_2306;
if(
PROCEDUREP(BgL_funz00_1037))
{ /* Llib/bigloo.scm 645 */
BgL_funz00_2306 = BgL_funz00_1037; }  else 
{ 
obj_t BgL_auxz00_3173;
BgL_auxz00_3173 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)24140)), BGl_string2596z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_funz00_1037); 
FAILURE(BgL_auxz00_3173,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_2306, ((long)1)))
{ /* Llib/bigloo.scm 645 */
BgL_nvalz00_1038 = 
PROCEDURE_ENTRY(BgL_funz00_2306)(BgL_funz00_1037, BgL_valz00_1035, BEOA); }  else 
{ /* Llib/bigloo.scm 645 */
FAILURE(BGl_string2606z00zz__biglooz00,BGl_list2607z00zz__biglooz00,BgL_funz00_2306);} } 
{ /* Llib/bigloo.scm 646 */
obj_t BgL_arg2065z00_1039;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_nvalz00_1038))
{ /* Llib/bigloo.scm 646 */
BgL_arg2065z00_1039 = BgL_nvalz00_1038; }  else 
{ /* Llib/bigloo.scm 646 */
BgL_arg2065z00_1039 = BgL_valz00_1035; } 
{ 
obj_t BgL_valz00_3184;
BgL_valz00_3184 = BgL_arg2065z00_1039; 
BgL_valz00_1033 = BgL_valz00_3184; 
goto BgL_zc3anonymousza32063ze3z83_1034;} } } }  else 
{ /* Llib/bigloo.scm 642 */
bgl_mutex_unlock(BgL_mutz00_1029); 
return BgL_valz00_1035;} } } } } 
}



/* _bigloo-exit-apply */
obj_t BGl__bigloozd2exitzd2applyz00zz__biglooz00(obj_t BgL_envz00_2091, obj_t BgL_valz00_2092)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 633 */
return 
bigloo_exit_apply(BgL_valz00_2092);} 
}



/* time */
BGL_EXPORTED_DEF obj_t BGl_timez00zz__biglooz00(obj_t BgL_procz00_25)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 654 */
if(
PROCEDURE_CORRECT_ARITYP(BgL_procz00_25, 
(int)(((long)0))))
{ /* Llib/bigloo.scm 655 */
return 
bgl_time(BgL_procz00_25);}  else 
{ /* Llib/bigloo.scm 655 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2614z00zz__biglooz00, BGl_string2604z00zz__biglooz00, BgL_procz00_25);} } 
}



/* _time */
obj_t BGl__timez00zz__biglooz00(obj_t BgL_envz00_2093, obj_t BgL_procz00_2094)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 654 */
{ /* Llib/bigloo.scm 655 */
obj_t BgL_auxz00_3192;
if(
PROCEDUREP(BgL_procz00_2094))
{ /* Llib/bigloo.scm 655 */
BgL_auxz00_3192 = BgL_procz00_2094
; }  else 
{ 
obj_t BgL_auxz00_3195;
BgL_auxz00_3195 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2568z00zz__biglooz00, 
BINT(((long)24494)), BGl_string2616z00zz__biglooz00, BGl_string2577z00zz__biglooz00, BgL_procz00_2094); 
FAILURE(BgL_auxz00_3195,BFALSE,BFALSE);} 
return 
BGl_timez00zz__biglooz00(BgL_auxz00_3192);} } 
}



/* bmem-reset! */
BGL_EXPORTED_DEF obj_t BGl_bmemzd2resetz12zc0zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 666 */
return 
bgl_bmem_reset();} 
}



/* _bmem-reset! */
obj_t BGl__bmemzd2resetz12zc0zz__biglooz00(obj_t BgL_envz00_2095)
{ AN_OBJECT;
{ /* Llib/bigloo.scm 666 */
return 
bgl_bmem_reset();} 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__biglooz00()
{ AN_OBJECT;
{ /* Llib/bigloo.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__configurez00(((long)306671391), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00)); 
return 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2617z00zz__biglooz00));} 
}

#ifdef __cplusplus
}
#endif
