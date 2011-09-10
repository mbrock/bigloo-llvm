/*===========================================================================*/
/*   (Llib/trace.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/trace.scm -indent -o objs/obj_s/Llib/trace.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t);
extern obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__tracez00 = BUNSPEC;
static obj_t BGl__z52withzd2tracez80zz__tracez00(obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
static obj_t BGl_list2404z00zz__tracez00 = BUNSPEC;
extern int bgl_debug();
static obj_t BGl_genericzd2initzd2zz__tracez00();
static obj_t BGl_tracezd2alistzd2zz__tracez00();
BGL_EXPORTED_DECL obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t);
static obj_t BGl_za2tracezd2mutexza2zd2zz__tracez00 = BUNSPEC;
static obj_t BGl__tracezd2marginzd2setz12z12zz__tracez00(obj_t, obj_t);
static obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__tracez00();
static obj_t BGl__tracezd2stringzd2zz__tracez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2colorzd2zz__tracez00(int, obj_t);
extern obj_t bgl_display_obj(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__tracez00();
static obj_t BGl_zc3anonymousza31909ze3z83zz__tracez00(obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__tracezd2marginzd2zz__tracez00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t);
extern obj_t BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t);
extern obj_t bgl_display_string(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
static obj_t BGl_zc3anonymousza31924ze3z83zz__tracez00(obj_t);
static obj_t BGl_toplevelzd2initzd2zz__tracez00();
BGL_EXPORTED_DECL obj_t BGl_tracezd2marginzd2zz__tracez00();
static obj_t BGl_symbol2364z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2366z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2368z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2371z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2376z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2381z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2405z00zz__tracez00 = BUNSPEC;
static obj_t BGl_symbol2407z00zz__tracez00 = BUNSPEC;
static obj_t BGl__tracezd2boldzd2zz__tracez00(obj_t, obj_t);
static obj_t BGl__tracezd2portzd2setz12z12zz__tracez00(obj_t, obj_t);
static obj_t BGl__tracezd2portzd2zz__tracez00(obj_t);
static obj_t BGl_zc3anonymousza31936ze3z83zz__tracez00(obj_t);
static obj_t BGl__tracezd2colorzd2zz__tracez00(obj_t, obj_t, obj_t);
extern obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52withzd2tracez80zz__tracez00(int, obj_t, obj_t);
static obj_t BGl_zc3anonymousza31961ze3z83zz__tracez00(obj_t);
extern obj_t string_append(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t);
static obj_t BGl__tracezd2itemzd2zz__tracez00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tracezd2portzd2zz__tracez00();
extern bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
static obj_t BGl_methodzd2initzd2zz__tracez00();
static obj_t *__cnst;


DEFINE_STRING( BGl_string2365z00zz__tracez00, BgL_bgl_string2365za700za7za7_2436za7, "port", 4 );
DEFINE_STRING( BGl_string2367z00zz__tracez00, BgL_bgl_string2367za700za7za7_2437za7, "depth", 5 );
DEFINE_STRING( BGl_string2370z00zz__tracez00, BgL_bgl_string2370za700za7za7_2438za7, "", 0 );
DEFINE_STRING( BGl_string2369z00zz__tracez00, BgL_bgl_string2369za700za7za7_2439za7, "margin", 6 );
DEFINE_STRING( BGl_string2372z00zz__tracez00, BgL_bgl_string2372za700za7za7_2440za7, "margin-level", 12 );
DEFINE_STRING( BGl_string2373z00zz__tracez00, BgL_bgl_string2373za700za7za7_2441za7, "/tmp/bigloo/runtime/Llib/trace.scm", 34 );
DEFINE_STRING( BGl_string2374z00zz__tracez00, BgL_bgl_string2374za700za7za7_2442za7, "trace-alist-get", 15 );
DEFINE_STRING( BGl_string2375z00zz__tracez00, BgL_bgl_string2375za700za7za7_2443za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2377z00zz__tracez00, BgL_bgl_string2377za700za7za7_2444za7, "Can't find trace-value", 22 );
DEFINE_STRING( BGl_string2378z00zz__tracez00, BgL_bgl_string2378za700za7za7_2445za7, "trace-port", 10 );
DEFINE_STRING( BGl_string2380z00zz__tracez00, BgL_bgl_string2380za700za7za7_2446za7, "trace-port-set!", 15 );
DEFINE_STRING( BGl_string2379z00zz__tracez00, BgL_bgl_string2379za700za7za7_2447za7, "output-port", 11 );
DEFINE_STRING( BGl_string2382z00zz__tracez00, BgL_bgl_string2382za700za7za7_2448za7, "trace-alist-set!", 16 );
DEFINE_STRING( BGl_string2383z00zz__tracez00, BgL_bgl_string2383za700za7za7_2449za7, "_trace-port-set!", 16 );
DEFINE_STRING( BGl_string2384z00zz__tracez00, BgL_bgl_string2384za700za7za7_2450za7, "trace-margin", 12 );
DEFINE_STRING( BGl_string2385z00zz__tracez00, BgL_bgl_string2385za700za7za7_2451za7, "bstring", 7 );
DEFINE_STRING( BGl_string2386z00zz__tracez00, BgL_bgl_string2386za700za7za7_2452za7, "trace-margin-set!", 17 );
DEFINE_STRING( BGl_string2387z00zz__tracez00, BgL_bgl_string2387za700za7za7_2453za7, "_trace-margin-set!", 18 );
DEFINE_STRING( BGl_string2388z00zz__tracez00, BgL_bgl_string2388za700za7za7_2454za7, "trace-color", 11 );
DEFINE_STRING( BGl_string2400z00zz__tracez00, BgL_bgl_string2400za700za7za7_2455za7, "trace-item", 10 );
DEFINE_STRING( BGl_string2390z00zz__tracez00, BgL_bgl_string2390za700za7za7_2456za7, "int", 3 );
DEFINE_STRING( BGl_string2389z00zz__tracez00, BgL_bgl_string2389za700za7za7_2457za7, "_trace-color", 12 );
DEFINE_STRING( BGl_string2401z00zz__tracez00, BgL_bgl_string2401za700za7za7_2458za7, "- ", 2 );
DEFINE_STRING( BGl_string2391z00zz__tracez00, BgL_bgl_string2391za700za7za7_2459za7, "<anonymous:1909>", 16 );
DEFINE_STRING( BGl_string2402z00zz__tracez00, BgL_bgl_string2402za700za7za7_2460za7, "%with-trace", 11 );
DEFINE_STRING( BGl_string2392z00zz__tracez00, BgL_bgl_string2392za700za7za7_2461za7, "long", 4 );
DEFINE_STRING( BGl_string2403z00zz__tracez00, BgL_bgl_string2403za700za7za7_2462za7, "%with-trace:Wrong number of arguments", 37 );
DEFINE_STRING( BGl_string2393z00zz__tracez00, BgL_bgl_string2393za700za7za7_2463za7, "m", 1 );
DEFINE_STRING( BGl_string2394z00zz__tracez00, BgL_bgl_string2394za700za7za7_2464za7, "\033[0m\033[1;", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2stringzd2envz00zz__tracez00, BgL_bgl__traceza7d2stringza72465z00, BGl__tracezd2stringzd2zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2395z00zz__tracez00, BgL_bgl_string2395za700za7za7_2466za7, "for-each", 8 );
DEFINE_STRING( BGl_string2406z00zz__tracez00, BgL_bgl_string2406za700za7za7_2467za7, "funcall", 7 );
DEFINE_STRING( BGl_string2396z00zz__tracez00, BgL_bgl_string2396za700za7za7_2468za7, "argument not a list", 19 );
DEFINE_STRING( BGl_string2397z00zz__tracez00, BgL_bgl_string2397za700za7za7_2469za7, "\033[0m", 4 );
DEFINE_STRING( BGl_string2408z00zz__tracez00, BgL_bgl_string2408za700za7za7_2470za7, "thunk", 5 );
DEFINE_STRING( BGl_string2398z00zz__tracez00, BgL_bgl_string2398za700za7za7_2471za7, "trace-bold", 10 );
DEFINE_STRING( BGl_string2410z00zz__tracez00, BgL_bgl_string2410za700za7za7_2472za7, "procedure", 9 );
DEFINE_STRING( BGl_string2409z00zz__tracez00, BgL_bgl_string2409za700za7za7_2473za7, "_%with-trace", 12 );
DEFINE_STRING( BGl_string2399z00zz__tracez00, BgL_bgl_string2399za700za7za7_2474za7, "pair", 4 );
DEFINE_STRING( BGl_string2411z00zz__tracez00, BgL_bgl_string2411za700za7za7_2475za7, "<anonymous:1961>", 16 );
DEFINE_STRING( BGl_string2412z00zz__tracez00, BgL_bgl_string2412za700za7za7_2476za7, "  |", 3 );
DEFINE_STRING( BGl_string2413z00zz__tracez00, BgL_bgl_string2413za700za7za7_2477za7, "+ ", 2 );
DEFINE_STRING( BGl_string2414z00zz__tracez00, BgL_bgl_string2414za700za7za7_2478za7, "--+ ", 4 );
DEFINE_STRING( BGl_string2415z00zz__tracez00, BgL_bgl_string2415za700za7za7_2479za7, "<anonymous:1961>:Wrong number of arguments", 42 );
DEFINE_STRING( BGl_string2416z00zz__tracez00, BgL_bgl_string2416za700za7za7_2480za7, "__trace", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2marginzd2envz00zz__tracez00, BgL_bgl__traceza7d2marginza72481z00, BGl__tracezd2marginzd2zz__tracez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2boldzd2envz00zz__tracez00, BgL_bgl__traceza7d2boldza7d22482z00, va_generic_entry, BGl__tracezd2boldzd2zz__tracez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2itemzd2envz00zz__tracez00, BgL_bgl__traceza7d2itemza7d22483z00, va_generic_entry, BGl__tracezd2itemzd2zz__tracez00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2marginzd2setz12zd2envzc0zz__tracez00, BgL_bgl__traceza7d2marginza72484z00, BGl__tracezd2marginzd2setz12z12zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2colorzd2envz00zz__tracez00, BgL_bgl__traceza7d2colorza7d2485z00, va_generic_entry, BGl__tracezd2colorzd2zz__tracez00, BUNSPEC, -2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2portzd2envz00zz__tracez00, BgL_bgl__traceza7d2portza7d22486z00, BGl__tracezd2portzd2zz__tracez00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52withzd2tracezd2envz52zz__tracez00, BgL_bgl__za752withza7d2trace2487z00, BGl__z52withzd2tracez80zz__tracez00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tracezd2portzd2setz12zd2envzc0zz__tracez00, BgL_bgl__traceza7d2portza7d22488z00, BGl__tracezd2portzd2setz12z12zz__tracez00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2363z00zz__tracez00, BgL_bgl_string2363za700za7za7_2489za7, "trace", 5 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tracez00(long BgL_checksumz00_1945, char * BgL_fromz00_1946)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__tracez00))
{ 
BGl_requirezd2initializa7ationz75zz__tracez00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__tracez00(); 
BGl_importedzd2moduleszd2initz00zz__tracez00(); 
BGl_toplevelzd2initzd2zz__tracez00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 15 */
BGl_symbol2364z00zz__tracez00 = 
bstring_to_symbol(BGl_string2365z00zz__tracez00); 
BGl_symbol2366z00zz__tracez00 = 
bstring_to_symbol(BGl_string2367z00zz__tracez00); 
BGl_symbol2368z00zz__tracez00 = 
bstring_to_symbol(BGl_string2369z00zz__tracez00); 
BGl_symbol2371z00zz__tracez00 = 
bstring_to_symbol(BGl_string2372z00zz__tracez00); 
BGl_symbol2376z00zz__tracez00 = 
bstring_to_symbol(BGl_string2374z00zz__tracez00); 
BGl_symbol2381z00zz__tracez00 = 
bstring_to_symbol(BGl_string2382z00zz__tracez00); 
BGl_symbol2405z00zz__tracez00 = 
bstring_to_symbol(BGl_string2406z00zz__tracez00); 
BGl_symbol2407z00zz__tracez00 = 
bstring_to_symbol(BGl_string2408z00zz__tracez00); 
return ( 
BGl_list2404z00zz__tracez00 = 
MAKE_PAIR(BGl_symbol2405z00zz__tracez00, 
MAKE_PAIR(BGl_symbol2407z00zz__tracez00, 
MAKE_PAIR(BGl_symbol2407z00zz__tracez00, BNIL))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 15 */
return ( 
BGl_za2tracezd2mutexza2zd2zz__tracez00 = 
bgl_make_mutex(BGl_string2363z00zz__tracez00), BUNSPEC) ;} 
}



/* trace-alist */
obj_t BGl_tracezd2alistzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 79 */
{ /* Llib/trace.scm 80 */
obj_t BgL_alz00_751;
BgL_alz00_751 = 
BGL_DEBUG_ALIST_GET(); 
if(
PAIRP(BgL_alz00_751))
{ /* Llib/trace.scm 81 */
return BgL_alz00_751;}  else 
{ /* Llib/trace.scm 83 */
obj_t BgL_newzd2alzd2_753;
{ /* Llib/trace.scm 83 */
obj_t BgL_arg1886z00_754;obj_t BgL_arg1887z00_755;obj_t BgL_arg1888z00_756;obj_t BgL_arg1890z00_757;
{ /* Llib/trace.scm 83 */
obj_t BgL_arg1895z00_762;obj_t BgL_arg1896z00_763;
BgL_arg1895z00_762 = BGl_symbol2364z00zz__tracez00; 
{ /* Llib/trace.scm 83 */
obj_t BgL_res2252z00_1329;
{ /* Llib/trace.scm 83 */
obj_t BgL_auxz00_1968;
BgL_auxz00_1968 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2252z00_1329 = 
BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1968); } 
BgL_arg1896z00_763 = BgL_res2252z00_1329; } 
BgL_arg1886z00_754 = 
MAKE_PAIR(BgL_arg1895z00_762, BgL_arg1896z00_763); } 
BgL_arg1887z00_755 = 
MAKE_PAIR(BGl_symbol2366z00zz__tracez00, 
BINT(((long)0))); 
BgL_arg1888z00_756 = 
MAKE_PAIR(BGl_symbol2368z00zz__tracez00, BGl_string2370z00zz__tracez00); 
BgL_arg1890z00_757 = 
MAKE_PAIR(BGl_symbol2371z00zz__tracez00, 
BINT(((long)0))); 
{ /* Llib/trace.scm 83 */
obj_t BgL_list1891z00_758;
{ /* Llib/trace.scm 83 */
obj_t BgL_arg1892z00_759;
{ /* Llib/trace.scm 83 */
obj_t BgL_arg1893z00_760;
{ /* Llib/trace.scm 83 */
obj_t BgL_arg1894z00_761;
BgL_arg1894z00_761 = 
MAKE_PAIR(BgL_arg1890z00_757, BNIL); 
BgL_arg1893z00_760 = 
MAKE_PAIR(BgL_arg1888z00_756, BgL_arg1894z00_761); } 
BgL_arg1892z00_759 = 
MAKE_PAIR(BgL_arg1887z00_755, BgL_arg1893z00_760); } 
BgL_list1891z00_758 = 
MAKE_PAIR(BgL_arg1886z00_754, BgL_arg1892z00_759); } 
BgL_newzd2alzd2_753 = BgL_list1891z00_758; } } 
BGL_DEBUG_ALIST_SET(BgL_newzd2alzd2_753); BUNSPEC; 
return BgL_newzd2alzd2_753;} } } 
}



/* trace-alist-get */
obj_t BGl_tracezd2alistzd2getz00zz__tracez00(obj_t BgL_alistz00_1, obj_t BgL_keyz00_2)
{ AN_OBJECT;
{ /* Llib/trace.scm 93 */
{ /* Llib/trace.scm 94 */
obj_t BgL_cz00_1332;
{ /* Llib/trace.scm 94 */
obj_t BgL_auxz00_1982;
{ /* Llib/trace.scm 94 */
bool_t BgL_testz00_1983;
if(
PAIRP(BgL_alistz00_1))
{ /* Llib/trace.scm 94 */
BgL_testz00_1983 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 94 */
BgL_testz00_1983 = 
NULLP(BgL_alistz00_1)
; } 
if(BgL_testz00_1983)
{ /* Llib/trace.scm 94 */
BgL_auxz00_1982 = BgL_alistz00_1
; }  else 
{ 
obj_t BgL_auxz00_1987;
BgL_auxz00_1987 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)3420)), BGl_string2374z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alistz00_1); 
FAILURE(BgL_auxz00_1987,BFALSE,BFALSE);} } 
BgL_cz00_1332 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_2, BgL_auxz00_1982); } 
if(
PAIRP(BgL_cz00_1332))
{ /* Llib/trace.scm 94 */
return 
CDR(BgL_cz00_1332);}  else 
{ /* Llib/trace.scm 94 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_2);} } } 
}



/* trace-port */
BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 111 */
{ /* Llib/trace.scm 112 */
obj_t BgL_arg1899z00_1341;obj_t BgL_arg1900z00_1342;
BgL_arg1899z00_1341 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1900z00_1342 = BGl_symbol2364z00zz__tracez00; 
{ /* Llib/trace.scm 112 */
obj_t BgL_cz00_1345;
{ /* Llib/trace.scm 112 */
obj_t BgL_auxz00_1997;
{ /* Llib/trace.scm 112 */
bool_t BgL_testz00_1998;
if(
PAIRP(BgL_arg1899z00_1341))
{ /* Llib/trace.scm 112 */
BgL_testz00_1998 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 112 */
BgL_testz00_1998 = 
NULLP(BgL_arg1899z00_1341)
; } 
if(BgL_testz00_1998)
{ /* Llib/trace.scm 112 */
BgL_auxz00_1997 = BgL_arg1899z00_1341
; }  else 
{ 
obj_t BgL_auxz00_2002;
BgL_auxz00_2002 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4180)), BGl_string2378z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_arg1899z00_1341); 
FAILURE(BgL_auxz00_2002,BFALSE,BFALSE);} } 
BgL_cz00_1345 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1900z00_1342, BgL_auxz00_1997); } 
if(
PAIRP(BgL_cz00_1345))
{ /* Llib/trace.scm 112 */
obj_t BgL_aux2275z00_1760;
BgL_aux2275z00_1760 = 
CDR(BgL_cz00_1345); 
if(
OUTPUT_PORTP(BgL_aux2275z00_1760))
{ /* Llib/trace.scm 112 */
return BgL_aux2275z00_1760;}  else 
{ 
obj_t BgL_auxz00_2012;
BgL_auxz00_2012 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4180)), BGl_string2378z00zz__tracez00, BGl_string2379z00zz__tracez00, BgL_aux2275z00_1760); 
FAILURE(BgL_auxz00_2012,BFALSE,BFALSE);} }  else 
{ /* Llib/trace.scm 112 */
obj_t BgL_aux2277z00_1762;
BgL_aux2277z00_1762 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1900z00_1342); 
if(
OUTPUT_PORTP(BgL_aux2277z00_1762))
{ /* Llib/trace.scm 112 */
return BgL_aux2277z00_1762;}  else 
{ 
obj_t BgL_auxz00_2019;
BgL_auxz00_2019 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4180)), BGl_string2378z00zz__tracez00, BGl_string2379z00zz__tracez00, BgL_aux2277z00_1762); 
FAILURE(BgL_auxz00_2019,BFALSE,BFALSE);} } } } } 
}



/* _trace-port */
obj_t BGl__tracezd2portzd2zz__tracez00(obj_t BgL_envz00_1722)
{ AN_OBJECT;
{ /* Llib/trace.scm 111 */
return 
BGl_tracezd2portzd2zz__tracez00();} 
}



/* trace-port-set! */
BGL_EXPORTED_DEF obj_t BGl_tracezd2portzd2setz12z12zz__tracez00(obj_t BgL_pz00_6)
{ AN_OBJECT;
{ /* Llib/trace.scm 117 */
{ /* Llib/trace.scm 118 */
obj_t BgL_arg1901z00_1349;obj_t BgL_arg1902z00_1350;
BgL_arg1901z00_1349 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1902z00_1350 = BGl_symbol2364z00zz__tracez00; 
{ /* Llib/trace.scm 118 */
obj_t BgL_cz00_1354;
{ /* Llib/trace.scm 118 */
obj_t BgL_auxz00_2025;
{ /* Llib/trace.scm 118 */
bool_t BgL_testz00_2026;
if(
PAIRP(BgL_arg1901z00_1349))
{ /* Llib/trace.scm 118 */
BgL_testz00_2026 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 118 */
BgL_testz00_2026 = 
NULLP(BgL_arg1901z00_1349)
; } 
if(BgL_testz00_2026)
{ /* Llib/trace.scm 118 */
BgL_auxz00_2025 = BgL_arg1901z00_1349
; }  else 
{ 
obj_t BgL_auxz00_2030;
BgL_auxz00_2030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4474)), BGl_string2380z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_arg1901z00_1349); 
FAILURE(BgL_auxz00_2030,BFALSE,BFALSE);} } 
BgL_cz00_1354 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1902z00_1350, BgL_auxz00_2025); } 
if(
PAIRP(BgL_cz00_1354))
{ /* Llib/trace.scm 118 */
return 
SET_CDR(BgL_cz00_1354, BgL_pz00_6);}  else 
{ /* Llib/trace.scm 118 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1902z00_1350);} } } } 
}



/* _trace-port-set! */
obj_t BGl__tracezd2portzd2setz12z12zz__tracez00(obj_t BgL_envz00_1723, obj_t BgL_pz00_1724)
{ AN_OBJECT;
{ /* Llib/trace.scm 117 */
{ /* Llib/trace.scm 118 */
obj_t BgL_auxz00_2039;
if(
OUTPUT_PORTP(BgL_pz00_1724))
{ /* Llib/trace.scm 118 */
BgL_auxz00_2039 = BgL_pz00_1724
; }  else 
{ 
obj_t BgL_auxz00_2042;
BgL_auxz00_2042 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4474)), BGl_string2383z00zz__tracez00, BGl_string2379z00zz__tracez00, BgL_pz00_1724); 
FAILURE(BgL_auxz00_2042,BFALSE,BFALSE);} 
return 
BGl_tracezd2portzd2setz12z12zz__tracez00(BgL_auxz00_2039);} } 
}



/* trace-margin */
BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 123 */
{ /* Llib/trace.scm 124 */
obj_t BgL_arg1903z00_1359;obj_t BgL_arg1904z00_1360;
BgL_arg1903z00_1359 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1904z00_1360 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 124 */
obj_t BgL_cz00_1363;
{ /* Llib/trace.scm 124 */
obj_t BgL_auxz00_2048;
{ /* Llib/trace.scm 124 */
bool_t BgL_testz00_2049;
if(
PAIRP(BgL_arg1903z00_1359))
{ /* Llib/trace.scm 124 */
BgL_testz00_2049 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 124 */
BgL_testz00_2049 = 
NULLP(BgL_arg1903z00_1359)
; } 
if(BgL_testz00_2049)
{ /* Llib/trace.scm 124 */
BgL_auxz00_2048 = BgL_arg1903z00_1359
; }  else 
{ 
obj_t BgL_auxz00_2053;
BgL_auxz00_2053 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4764)), BGl_string2384z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_arg1903z00_1359); 
FAILURE(BgL_auxz00_2053,BFALSE,BFALSE);} } 
BgL_cz00_1363 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1904z00_1360, BgL_auxz00_2048); } 
if(
PAIRP(BgL_cz00_1363))
{ /* Llib/trace.scm 124 */
obj_t BgL_aux2285z00_1770;
BgL_aux2285z00_1770 = 
CDR(BgL_cz00_1363); 
if(
STRINGP(BgL_aux2285z00_1770))
{ /* Llib/trace.scm 124 */
return BgL_aux2285z00_1770;}  else 
{ 
obj_t BgL_auxz00_2063;
BgL_auxz00_2063 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4764)), BGl_string2384z00zz__tracez00, BGl_string2385z00zz__tracez00, BgL_aux2285z00_1770); 
FAILURE(BgL_auxz00_2063,BFALSE,BFALSE);} }  else 
{ /* Llib/trace.scm 124 */
obj_t BgL_aux2287z00_1772;
BgL_aux2287z00_1772 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1904z00_1360); 
if(
STRINGP(BgL_aux2287z00_1772))
{ /* Llib/trace.scm 124 */
return BgL_aux2287z00_1772;}  else 
{ 
obj_t BgL_auxz00_2070;
BgL_auxz00_2070 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)4764)), BGl_string2384z00zz__tracez00, BGl_string2385z00zz__tracez00, BgL_aux2287z00_1772); 
FAILURE(BgL_auxz00_2070,BFALSE,BFALSE);} } } } } 
}



/* _trace-margin */
obj_t BGl__tracezd2marginzd2zz__tracez00(obj_t BgL_envz00_1725)
{ AN_OBJECT;
{ /* Llib/trace.scm 123 */
return 
BGl_tracezd2marginzd2zz__tracez00();} 
}



/* trace-margin-set! */
BGL_EXPORTED_DEF obj_t BGl_tracezd2marginzd2setz12z12zz__tracez00(obj_t BgL_mz00_7)
{ AN_OBJECT;
{ /* Llib/trace.scm 129 */
{ /* Llib/trace.scm 130 */
obj_t BgL_arg1905z00_1367;obj_t BgL_arg1906z00_1368;
BgL_arg1905z00_1367 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1906z00_1368 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 130 */
obj_t BgL_cz00_1372;
{ /* Llib/trace.scm 130 */
obj_t BgL_auxz00_2076;
{ /* Llib/trace.scm 130 */
bool_t BgL_testz00_2077;
if(
PAIRP(BgL_arg1905z00_1367))
{ /* Llib/trace.scm 130 */
BgL_testz00_2077 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 130 */
BgL_testz00_2077 = 
NULLP(BgL_arg1905z00_1367)
; } 
if(BgL_testz00_2077)
{ /* Llib/trace.scm 130 */
BgL_auxz00_2076 = BgL_arg1905z00_1367
; }  else 
{ 
obj_t BgL_auxz00_2081;
BgL_auxz00_2081 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5062)), BGl_string2386z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_arg1905z00_1367); 
FAILURE(BgL_auxz00_2081,BFALSE,BFALSE);} } 
BgL_cz00_1372 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1906z00_1368, BgL_auxz00_2076); } 
if(
PAIRP(BgL_cz00_1372))
{ /* Llib/trace.scm 130 */
return 
SET_CDR(BgL_cz00_1372, BgL_mz00_7);}  else 
{ /* Llib/trace.scm 130 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1906z00_1368);} } } } 
}



/* _trace-margin-set! */
obj_t BGl__tracezd2marginzd2setz12z12zz__tracez00(obj_t BgL_envz00_1726, obj_t BgL_mz00_1727)
{ AN_OBJECT;
{ /* Llib/trace.scm 129 */
{ /* Llib/trace.scm 130 */
obj_t BgL_auxz00_2090;
if(
STRINGP(BgL_mz00_1727))
{ /* Llib/trace.scm 130 */
BgL_auxz00_2090 = BgL_mz00_1727
; }  else 
{ 
obj_t BgL_auxz00_2093;
BgL_auxz00_2093 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5062)), BGl_string2387z00zz__tracez00, BGl_string2385z00zz__tracez00, BgL_mz00_1727); 
FAILURE(BgL_auxz00_2093,BFALSE,BFALSE);} 
return 
BGl_tracezd2marginzd2setz12z12zz__tracez00(BgL_auxz00_2090);} } 
}



/* trace-color */
BGL_EXPORTED_DEF obj_t BGl_tracezd2colorzd2zz__tracez00(int BgL_colz00_8, obj_t BgL_oz00_9)
{ AN_OBJECT;
{ /* Llib/trace.scm 135 */
{ /* Llib/trace.scm 137 */
obj_t BgL_arg1907z00_776;
if(
BGl_bigloozd2tracezd2colorz00zz__paramz00())
{ /* Llib/trace.scm 138 */
obj_t BgL_zc3anonymousza31909ze3z83_1728;
BgL_zc3anonymousza31909ze3z83_1728 = 
make_fx_procedure(BGl_zc3anonymousza31909ze3z83zz__tracez00, 
(int)(((long)0)), 
(int)(((long)2))); 
PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1728, 
(int)(((long)0)), 
BINT(BgL_colz00_8)); 
PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1728, 
(int)(((long)1)), BgL_oz00_9); 
BgL_arg1907z00_776 = BgL_zc3anonymousza31909ze3z83_1728; }  else 
{ /* Llib/trace.scm 142 */
obj_t BgL_zc3anonymousza31924ze3z83_1729;
BgL_zc3anonymousza31924ze3z83_1729 = 
make_fx_procedure(BGl_zc3anonymousza31924ze3z83zz__tracez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31924ze3z83_1729, 
(int)(((long)0)), BgL_oz00_9); 
BgL_arg1907z00_776 = BgL_zc3anonymousza31924ze3z83_1729; } 
{ /* Llib/trace.scm 136 */
obj_t BgL_aux2293z00_1778;
BgL_aux2293z00_1778 = 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_arg1907z00_776); 
if(
STRINGP(BgL_aux2293z00_1778))
{ /* Llib/trace.scm 136 */
return BgL_aux2293z00_1778;}  else 
{ 
obj_t BgL_auxz00_2116;
BgL_auxz00_2116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5349)), BGl_string2388z00zz__tracez00, BGl_string2385z00zz__tracez00, BgL_aux2293z00_1778); 
FAILURE(BgL_auxz00_2116,BFALSE,BFALSE);} } } } 
}



/* _trace-color */
obj_t BGl__tracezd2colorzd2zz__tracez00(obj_t BgL_envz00_1730, obj_t BgL_colz00_1731, obj_t BgL_oz00_1732)
{ AN_OBJECT;
{ /* Llib/trace.scm 135 */
{ /* Llib/trace.scm 137 */
int BgL_auxz00_2120;
{ /* Llib/trace.scm 137 */
obj_t BgL_auxz00_2121;
if(
INTEGERP(BgL_colz00_1731))
{ /* Llib/trace.scm 137 */
BgL_auxz00_2121 = BgL_colz00_1731
; }  else 
{ 
obj_t BgL_auxz00_2124;
BgL_auxz00_2124 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5378)), BGl_string2389z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_colz00_1731); 
FAILURE(BgL_auxz00_2124,BFALSE,BFALSE);} 
BgL_auxz00_2120 = 
CINT(BgL_auxz00_2121); } 
return 
BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2120, BgL_oz00_1732);} } 
}



/* <anonymous:1909> */
obj_t BGl_zc3anonymousza31909ze3z83zz__tracez00(obj_t BgL_envz00_1733)
{ AN_OBJECT;
{ /* Llib/trace.scm 138 */
{ /* Llib/trace.scm 139 */
obj_t BgL_colz00_1734;obj_t BgL_oz00_1735;
BgL_colz00_1734 = 
PROCEDURE_REF(BgL_envz00_1733, 
(int)(((long)0))); 
BgL_oz00_1735 = 
PROCEDURE_REF(BgL_envz00_1733, 
(int)(((long)1))); 
{ 

{ /* Llib/trace.scm 139 */
long BgL_arg1911z00_780;
{ /* Llib/trace.scm 139 */
long BgL_za72za7_1378;
{ /* Llib/trace.scm 139 */
obj_t BgL_auxz00_2134;
if(
INTEGERP(BgL_colz00_1734))
{ /* Llib/trace.scm 139 */
BgL_auxz00_2134 = BgL_colz00_1734
; }  else 
{ 
obj_t BgL_auxz00_2137;
BgL_auxz00_2137 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5444)), BGl_string2391z00zz__tracez00, BGl_string2392z00zz__tracez00, BgL_colz00_1734); 
FAILURE(BgL_auxz00_2137,BFALSE,BFALSE);} 
BgL_za72za7_1378 = 
(long)CINT(BgL_auxz00_2134); } 
BgL_arg1911z00_780 = 
(((long)31)+BgL_za72za7_1378); } 
{ /* Llib/trace.scm 139 */
obj_t BgL_list1913z00_782;
{ /* Llib/trace.scm 139 */
obj_t BgL_arg1914z00_783;
{ /* Llib/trace.scm 139 */
obj_t BgL_arg1915z00_784;
BgL_arg1915z00_784 = 
MAKE_PAIR(BGl_string2393z00zz__tracez00, BNIL); 
BgL_arg1914z00_783 = 
MAKE_PAIR(
BINT(BgL_arg1911z00_780), BgL_arg1915z00_784); } 
BgL_list1913z00_782 = 
MAKE_PAIR(BGl_string2394z00zz__tracez00, BgL_arg1914z00_783); } 
BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_list1913z00_782); } } 
{ 
obj_t BgL_l1844z00_786;
BgL_l1844z00_786 = BgL_oz00_1735; 
BgL_zc3anonymousza31916ze3z83_787:
if(
PAIRP(BgL_l1844z00_786))
{ /* Llib/trace.scm 140 */
{ /* Llib/trace.scm 140 */
obj_t BgL_arg1918z00_789;
BgL_arg1918z00_789 = 
CAR(BgL_l1844z00_786); 
{ /* Pp/circle.scm 70 */
obj_t BgL_portz00_791;
{ /* Pp/circle.scm 70 */
obj_t BgL_res2254z00_1382;
{ /* Pp/circle.scm 70 */
obj_t BgL_auxz00_2151;
BgL_auxz00_2151 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2254z00_1382 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2151); } 
BgL_portz00_791 = BgL_res2254z00_1382; } 
{ /* Pp/circle.scm 70 */

BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1918z00_789, BgL_portz00_791); } } } 
{ 
obj_t BgL_l1844z00_2155;
BgL_l1844z00_2155 = 
CDR(BgL_l1844z00_786); 
BgL_l1844z00_786 = BgL_l1844z00_2155; 
goto BgL_zc3anonymousza31916ze3z83_787;} }  else 
{ /* Llib/trace.scm 140 */
if(
NULLP(BgL_l1844z00_786))
{ /* Llib/trace.scm 140 */BTRUE; }  else 
{ /* Llib/trace.scm 140 */
BGl_errorz00zz__errorz00(BGl_string2395z00zz__tracez00, BGl_string2396z00zz__tracez00, BgL_l1844z00_786); } } } 
{ /* Llib/trace.scm 141 */
obj_t BgL_arg1923z00_796;
{ /* Llib/trace.scm 141 */
obj_t BgL_res2255z00_1386;
{ /* Llib/trace.scm 141 */
obj_t BgL_auxz00_2160;
BgL_auxz00_2160 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2255z00_1386 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2160); } 
BgL_arg1923z00_796 = BgL_res2255z00_1386; } 
return 
bgl_display_string(BGl_string2397z00zz__tracez00, BgL_arg1923z00_796);} } } } 
}



/* <anonymous:1924> */
obj_t BGl_zc3anonymousza31924ze3z83zz__tracez00(obj_t BgL_envz00_1736)
{ AN_OBJECT;
{ /* Llib/trace.scm 142 */
{ /* Llib/trace.scm 143 */
obj_t BgL_oz00_1737;
BgL_oz00_1737 = 
PROCEDURE_REF(BgL_envz00_1736, 
(int)(((long)0))); 
{ 

{ 
obj_t BgL_l1846z00_799;
BgL_l1846z00_799 = BgL_oz00_1737; 
BgL_zc3anonymousza31925ze3z83_800:
if(
PAIRP(BgL_l1846z00_799))
{ /* Llib/trace.scm 143 */
{ /* Llib/trace.scm 143 */
obj_t BgL_arg1927z00_802;
BgL_arg1927z00_802 = 
CAR(BgL_l1846z00_799); 
{ /* Pp/circle.scm 70 */
obj_t BgL_portz00_804;
{ /* Pp/circle.scm 70 */
obj_t BgL_res2256z00_1392;
{ /* Pp/circle.scm 70 */
obj_t BgL_auxz00_2169;
BgL_auxz00_2169 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2256z00_1392 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2169); } 
BgL_portz00_804 = BgL_res2256z00_1392; } 
{ /* Pp/circle.scm 70 */

BGl_displayzd2circlezd2zz__pp_circlez00(BgL_arg1927z00_802, BgL_portz00_804); } } } 
{ 
obj_t BgL_l1846z00_2173;
BgL_l1846z00_2173 = 
CDR(BgL_l1846z00_799); 
BgL_l1846z00_799 = BgL_l1846z00_2173; 
goto BgL_zc3anonymousza31925ze3z83_800;} }  else 
{ /* Llib/trace.scm 143 */
if(
NULLP(BgL_l1846z00_799))
{ /* Llib/trace.scm 143 */
return BTRUE;}  else 
{ /* Llib/trace.scm 143 */
return 
BGl_errorz00zz__errorz00(BGl_string2395z00zz__tracez00, BGl_string2396z00zz__tracez00, BgL_l1846z00_799);} } } } } } 
}



/* trace-bold */
BGL_EXPORTED_DEF obj_t BGl_tracezd2boldzd2zz__tracez00(obj_t BgL_oz00_10)
{ AN_OBJECT;
{ /* Llib/trace.scm 148 */
{ /* Llib/trace.scm 149 */
obj_t BgL_runner1933z00_810;
{ /* Llib/trace.scm 149 */
obj_t BgL_list1931z00_808;
BgL_list1931z00_808 = 
MAKE_PAIR(BgL_oz00_10, BNIL); 
BgL_runner1933z00_810 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
BINT(((long)-30)), BgL_list1931z00_808); } 
{ /* Llib/trace.scm 149 */
int BgL_aux1932z00_809;
{ /* Llib/trace.scm 149 */
obj_t BgL_pairz00_1395;
{ /* Llib/trace.scm 149 */
obj_t BgL_aux2299z00_1784;
BgL_aux2299z00_1784 = BgL_runner1933z00_810; 
if(
PAIRP(BgL_aux2299z00_1784))
{ /* Llib/trace.scm 149 */
BgL_pairz00_1395 = BgL_aux2299z00_1784; }  else 
{ 
obj_t BgL_auxz00_2183;
BgL_auxz00_2183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5823)), BGl_string2398z00zz__tracez00, BGl_string2399z00zz__tracez00, BgL_aux2299z00_1784); 
FAILURE(BgL_auxz00_2183,BFALSE,BFALSE);} } 
{ /* Llib/trace.scm 149 */
obj_t BgL_auxz00_2187;
{ /* Llib/trace.scm 149 */
obj_t BgL_aux2301z00_1786;
BgL_aux2301z00_1786 = 
CAR(BgL_pairz00_1395); 
if(
INTEGERP(BgL_aux2301z00_1786))
{ /* Llib/trace.scm 149 */
BgL_auxz00_2187 = BgL_aux2301z00_1786
; }  else 
{ 
obj_t BgL_auxz00_2191;
BgL_auxz00_2191 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5823)), BGl_string2398z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_aux2301z00_1786); 
FAILURE(BgL_auxz00_2191,BFALSE,BFALSE);} } 
BgL_aux1932z00_809 = 
CINT(BgL_auxz00_2187); } } 
{ /* Llib/trace.scm 149 */
obj_t BgL_pairz00_1396;
{ /* Llib/trace.scm 149 */
obj_t BgL_aux2303z00_1788;
BgL_aux2303z00_1788 = BgL_runner1933z00_810; 
if(
PAIRP(BgL_aux2303z00_1788))
{ /* Llib/trace.scm 149 */
BgL_pairz00_1396 = BgL_aux2303z00_1788; }  else 
{ 
obj_t BgL_auxz00_2198;
BgL_auxz00_2198 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)5823)), BGl_string2398z00zz__tracez00, BGl_string2399z00zz__tracez00, BgL_aux2303z00_1788); 
FAILURE(BgL_auxz00_2198,BFALSE,BFALSE);} } 
BgL_runner1933z00_810 = 
CDR(BgL_pairz00_1396); } 
return 
BGl_tracezd2colorzd2zz__tracez00(BgL_aux1932z00_809, BgL_runner1933z00_810);} } } 
}



/* _trace-bold */
obj_t BGl__tracezd2boldzd2zz__tracez00(obj_t BgL_envz00_1738, obj_t BgL_oz00_1739)
{ AN_OBJECT;
{ /* Llib/trace.scm 148 */
return 
BGl_tracezd2boldzd2zz__tracez00(BgL_oz00_1739);} 
}



/* trace-string */
BGL_EXPORTED_DEF obj_t BGl_tracezd2stringzd2zz__tracez00(obj_t BgL_oz00_11)
{ AN_OBJECT;
{ /* Llib/trace.scm 154 */
{ /* Llib/trace.scm 157 */
obj_t BgL_zc3anonymousza31936ze3z83_1740;
BgL_zc3anonymousza31936ze3z83_1740 = 
make_fx_procedure(BGl_zc3anonymousza31936ze3z83zz__tracez00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3anonymousza31936ze3z83_1740, 
(int)(((long)0)), BgL_oz00_11); 
return 
BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3anonymousza31936ze3z83_1740);} } 
}



/* _trace-string */
obj_t BGl__tracezd2stringzd2zz__tracez00(obj_t BgL_envz00_1741, obj_t BgL_oz00_1742)
{ AN_OBJECT;
{ /* Llib/trace.scm 154 */
return 
BGl_tracezd2stringzd2zz__tracez00(BgL_oz00_1742);} 
}



/* <anonymous:1936> */
obj_t BGl_zc3anonymousza31936ze3z83zz__tracez00(obj_t BgL_envz00_1743)
{ AN_OBJECT;
{ /* Llib/trace.scm 156 */
{ /* Llib/trace.scm 157 */
obj_t BgL_oz00_1744;
BgL_oz00_1744 = 
PROCEDURE_REF(BgL_envz00_1743, 
(int)(((long)0))); 
{ 

return 
BGl_writez00zz__r4_output_6_10_3z00(BgL_oz00_1744, BNIL);} } } 
}



/* trace-item */
BGL_EXPORTED_DEF obj_t BGl_tracezd2itemzd2zz__tracez00(obj_t BgL_argsz00_12)
{ AN_OBJECT;
{ /* Llib/trace.scm 162 */
{ /* Llib/trace.scm 163 */
bool_t BgL_testz00_2215;
{ /* Llib/trace.scm 163 */
int BgL_arg1955z00_837;
BgL_arg1955z00_837 = 
bgl_debug(); 
BgL_testz00_2215 = 
(
(long)(BgL_arg1955z00_837)>((long)0)); } 
if(BgL_testz00_2215)
{ /* Llib/trace.scm 164 */
obj_t BgL_alz00_816;
BgL_alz00_816 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 165 */
bool_t BgL_testz00_2220;
{ /* Llib/trace.scm 165 */
int BgL_arg1953z00_835;obj_t BgL_arg1954z00_836;
BgL_arg1953z00_835 = 
bgl_debug(); 
{ /* Llib/trace.scm 165 */
obj_t BgL_keyz00_1403;
BgL_keyz00_1403 = BGl_symbol2371z00zz__tracez00; 
{ /* Llib/trace.scm 165 */
obj_t BgL_cz00_1404;
{ /* Llib/trace.scm 165 */
obj_t BgL_auxz00_2222;
{ /* Llib/trace.scm 165 */
bool_t BgL_testz00_2223;
if(
PAIRP(BgL_alz00_816))
{ /* Llib/trace.scm 165 */
BgL_testz00_2223 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 165 */
BgL_testz00_2223 = 
NULLP(BgL_alz00_816)
; } 
if(BgL_testz00_2223)
{ /* Llib/trace.scm 165 */
BgL_auxz00_2222 = BgL_alz00_816
; }  else 
{ 
obj_t BgL_auxz00_2227;
BgL_auxz00_2227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6500)), BGl_string2400z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_816); 
FAILURE(BgL_auxz00_2227,BFALSE,BFALSE);} } 
BgL_cz00_1404 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1403, BgL_auxz00_2222); } 
if(
PAIRP(BgL_cz00_1404))
{ /* Llib/trace.scm 165 */
BgL_arg1954z00_836 = 
CDR(BgL_cz00_1404); }  else 
{ /* Llib/trace.scm 165 */
BgL_arg1954z00_836 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1403); } } } 
{ /* Llib/trace.scm 165 */
long BgL_n1z00_1408;long BgL_n2z00_1409;
BgL_n1z00_1408 = 
(long)(BgL_arg1953z00_835); 
{ /* Llib/trace.scm 165 */
obj_t BgL_auxz00_2237;
if(
INTEGERP(BgL_arg1954z00_836))
{ /* Llib/trace.scm 165 */
BgL_auxz00_2237 = BgL_arg1954z00_836
; }  else 
{ 
obj_t BgL_auxz00_2240;
BgL_auxz00_2240 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6533)), BGl_string2400z00zz__tracez00, BGl_string2392z00zz__tracez00, BgL_arg1954z00_836); 
FAILURE(BgL_auxz00_2240,BFALSE,BFALSE);} 
BgL_n2z00_1409 = 
(long)CINT(BgL_auxz00_2237); } 
BgL_testz00_2220 = 
(BgL_n1z00_1408>=BgL_n2z00_1409); } } 
if(BgL_testz00_2220)
{ /* Llib/trace.scm 166 */
obj_t BgL_pz00_818;
{ /* Llib/trace.scm 166 */
obj_t BgL_res2257z00_1412;
{ /* Llib/trace.scm 166 */
obj_t BgL_arg1899z00_1410;obj_t BgL_arg1900z00_1411;
BgL_arg1899z00_1410 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1900z00_1411 = BGl_symbol2364z00zz__tracez00; 
{ /* Llib/trace.scm 166 */
obj_t BgL_aux2309z00_1794;
BgL_aux2309z00_1794 = 
BGl_tracezd2alistzd2getz00zz__tracez00(BgL_arg1899z00_1410, BgL_arg1900z00_1411); 
if(
OUTPUT_PORTP(BgL_aux2309z00_1794))
{ /* Llib/trace.scm 166 */
BgL_res2257z00_1412 = BgL_aux2309z00_1794; }  else 
{ 
obj_t BgL_auxz00_2250;
BgL_auxz00_2250 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6550)), BGl_string2400z00zz__tracez00, BGl_string2379z00zz__tracez00, BgL_aux2309z00_1794); 
FAILURE(BgL_auxz00_2250,BFALSE,BFALSE);} } } 
BgL_pz00_818 = BgL_res2257z00_1412; } 
{ /* Llib/trace.scm 167 */
obj_t BgL_arg1940z00_819;
{ /* Llib/trace.scm 167 */
obj_t BgL_keyz00_1414;
BgL_keyz00_1414 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 167 */
obj_t BgL_cz00_1415;
{ /* Llib/trace.scm 167 */
obj_t BgL_auxz00_2254;
{ /* Llib/trace.scm 167 */
bool_t BgL_testz00_2255;
if(
PAIRP(BgL_alz00_816))
{ /* Llib/trace.scm 167 */
BgL_testz00_2255 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 167 */
BgL_testz00_2255 = 
NULLP(BgL_alz00_816)
; } 
if(BgL_testz00_2255)
{ /* Llib/trace.scm 167 */
BgL_auxz00_2254 = BgL_alz00_816
; }  else 
{ 
obj_t BgL_auxz00_2259;
BgL_auxz00_2259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6582)), BGl_string2400z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_816); 
FAILURE(BgL_auxz00_2259,BFALSE,BFALSE);} } 
BgL_cz00_1415 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1414, BgL_auxz00_2254); } 
if(
PAIRP(BgL_cz00_1415))
{ /* Llib/trace.scm 167 */
BgL_arg1940z00_819 = 
CDR(BgL_cz00_1415); }  else 
{ /* Llib/trace.scm 167 */
BgL_arg1940z00_819 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1414); } } } 
bgl_display_obj(BgL_arg1940z00_819, BgL_pz00_818); } 
{ /* Llib/trace.scm 168 */
obj_t BgL_arg1941z00_820;obj_t BgL_arg1942z00_821;
{ /* Llib/trace.scm 168 */
long BgL_arg1943z00_822;
{ /* Llib/trace.scm 168 */
obj_t BgL_arg1946z00_825;
{ /* Llib/trace.scm 168 */
obj_t BgL_keyz00_1420;
BgL_keyz00_1420 = BGl_symbol2366z00zz__tracez00; 
{ /* Llib/trace.scm 168 */
obj_t BgL_cz00_1421;
{ /* Llib/trace.scm 168 */
obj_t BgL_auxz00_2269;
{ /* Llib/trace.scm 168 */
bool_t BgL_testz00_2270;
if(
PAIRP(BgL_alz00_816))
{ /* Llib/trace.scm 168 */
BgL_testz00_2270 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 168 */
BgL_testz00_2270 = 
NULLP(BgL_alz00_816)
; } 
if(BgL_testz00_2270)
{ /* Llib/trace.scm 168 */
BgL_auxz00_2269 = BgL_alz00_816
; }  else 
{ 
obj_t BgL_auxz00_2274;
BgL_auxz00_2274 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6649)), BGl_string2400z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_816); 
FAILURE(BgL_auxz00_2274,BFALSE,BFALSE);} } 
BgL_cz00_1421 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1420, BgL_auxz00_2269); } 
if(
PAIRP(BgL_cz00_1421))
{ /* Llib/trace.scm 168 */
BgL_arg1946z00_825 = 
CDR(BgL_cz00_1421); }  else 
{ /* Llib/trace.scm 168 */
BgL_arg1946z00_825 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1420); } } } 
{ /* Llib/trace.scm 168 */
long BgL_za71za7_1425;
{ /* Llib/trace.scm 168 */
obj_t BgL_auxz00_2283;
if(
INTEGERP(BgL_arg1946z00_825))
{ /* Llib/trace.scm 168 */
BgL_auxz00_2283 = BgL_arg1946z00_825
; }  else 
{ 
obj_t BgL_auxz00_2286;
BgL_auxz00_2286 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)6644)), BGl_string2400z00zz__tracez00, BGl_string2392z00zz__tracez00, BgL_arg1946z00_825); 
FAILURE(BgL_auxz00_2286,BFALSE,BFALSE);} 
BgL_za71za7_1425 = 
(long)CINT(BgL_auxz00_2283); } 
BgL_arg1943z00_822 = 
(BgL_za71za7_1425-((long)1)); } } 
{ /* Llib/trace.scm 168 */
obj_t BgL_list1945z00_824;
BgL_list1945z00_824 = 
MAKE_PAIR(BGl_string2401z00zz__tracez00, BNIL); 
BgL_arg1941z00_820 = 
BGl_tracezd2colorzd2zz__tracez00(
(int)(BgL_arg1943z00_822), BgL_list1945z00_824); } } 
{ /* Llib/trace.scm 168 */
obj_t BgL_res2258z00_1428;
{ /* Llib/trace.scm 168 */
obj_t BgL_auxz00_2295;
BgL_auxz00_2295 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2258z00_1428 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2295); } 
BgL_arg1942z00_821 = BgL_res2258z00_1428; } 
bgl_display_obj(BgL_arg1941z00_820, BgL_arg1942z00_821); } 
{ 
obj_t BgL_l1848z00_828;
BgL_l1848z00_828 = BgL_argsz00_12; 
BgL_zc3anonymousza31949ze3z83_829:
if(
PAIRP(BgL_l1848z00_828))
{ /* Llib/trace.scm 169 */
BGl_displayzd2circlezd2zz__pp_circlez00(
CAR(BgL_l1848z00_828), BgL_pz00_818); 
{ 
obj_t BgL_l1848z00_2303;
BgL_l1848z00_2303 = 
CDR(BgL_l1848z00_828); 
BgL_l1848z00_828 = BgL_l1848z00_2303; 
goto BgL_zc3anonymousza31949ze3z83_829;} }  else 
{ /* Llib/trace.scm 169 */
if(
NULLP(BgL_l1848z00_828))
{ /* Llib/trace.scm 169 */BTRUE; }  else 
{ /* Llib/trace.scm 169 */
BGl_errorz00zz__errorz00(BGl_string2395z00zz__tracez00, BGl_string2396z00zz__tracez00, BgL_l1848z00_828); } } } 
return 
bgl_display_char(((unsigned char)'\n'), BgL_pz00_818);}  else 
{ /* Llib/trace.scm 165 */
return BFALSE;} } }  else 
{ /* Llib/trace.scm 163 */
return BFALSE;} } } 
}



/* _trace-item */
obj_t BGl__tracezd2itemzd2zz__tracez00(obj_t BgL_envz00_1745, obj_t BgL_argsz00_1746)
{ AN_OBJECT;
{ /* Llib/trace.scm 162 */
return 
BGl_tracezd2itemzd2zz__tracez00(BgL_argsz00_1746);} 
}



/* %with-trace */
BGL_EXPORTED_DEF obj_t BGl_z52withzd2tracez80zz__tracez00(int BgL_lvlz00_13, obj_t BgL_lblz00_14, obj_t BgL_thunkz00_15)
{ AN_OBJECT;
{ /* Llib/trace.scm 175 */
{ /* Llib/trace.scm 176 */
obj_t BgL_arg1957z00_839;
BgL_arg1957z00_839 = BGl_za2tracezd2mutexza2zd2zz__tracez00; 
{ /* Llib/thread.scm 201 */

if(
(((long)0)==((long)0)))
{ /* Llib/thread.scm 201 */
bgl_mutex_lock(BgL_arg1957z00_839); }  else 
{ /* Llib/thread.scm 201 */
bgl_mutex_timed_lock(BgL_arg1957z00_839, ((long)0)); } } } 
{ /* Llib/trace.scm 177 */
obj_t BgL_alz00_842;
BgL_alz00_842 = 
BGl_tracezd2alistzd2zz__tracez00(); 
{ /* Llib/trace.scm 177 */
obj_t BgL_olz00_843;
{ /* Llib/trace.scm 178 */
obj_t BgL_keyz00_1440;
BgL_keyz00_1440 = BGl_symbol2371z00zz__tracez00; 
{ /* Llib/trace.scm 178 */
obj_t BgL_cz00_1441;
{ /* Llib/trace.scm 178 */
obj_t BgL_auxz00_2315;
{ /* Llib/trace.scm 178 */
bool_t BgL_testz00_2316;
if(
PAIRP(BgL_alz00_842))
{ /* Llib/trace.scm 178 */
BgL_testz00_2316 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 178 */
BgL_testz00_2316 = 
NULLP(BgL_alz00_842)
; } 
if(BgL_testz00_2316)
{ /* Llib/trace.scm 178 */
BgL_auxz00_2315 = BgL_alz00_842
; }  else 
{ 
obj_t BgL_auxz00_2320;
BgL_auxz00_2320 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7096)), BGl_string2402z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_842); 
FAILURE(BgL_auxz00_2320,BFALSE,BFALSE);} } 
BgL_cz00_1441 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1440, BgL_auxz00_2315); } 
if(
PAIRP(BgL_cz00_1441))
{ /* Llib/trace.scm 178 */
BgL_olz00_843 = 
CDR(BgL_cz00_1441); }  else 
{ /* Llib/trace.scm 178 */
BgL_olz00_843 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1440); } } } 
{ /* Llib/trace.scm 178 */

{ /* Llib/trace.scm 179 */
obj_t BgL_keyz00_1446;
BgL_keyz00_1446 = BGl_symbol2371z00zz__tracez00; 
{ /* Llib/trace.scm 179 */
obj_t BgL_cz00_1448;
{ /* Llib/trace.scm 179 */
obj_t BgL_auxz00_2329;
{ /* Llib/trace.scm 179 */
bool_t BgL_testz00_2330;
if(
PAIRP(BgL_alz00_842))
{ /* Llib/trace.scm 179 */
BgL_testz00_2330 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 179 */
BgL_testz00_2330 = 
NULLP(BgL_alz00_842)
; } 
if(BgL_testz00_2330)
{ /* Llib/trace.scm 179 */
BgL_auxz00_2329 = BgL_alz00_842
; }  else 
{ 
obj_t BgL_auxz00_2334;
BgL_auxz00_2334 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7139)), BGl_string2402z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_842); 
FAILURE(BgL_auxz00_2334,BFALSE,BFALSE);} } 
BgL_cz00_1448 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1446, BgL_auxz00_2329); } 
if(
PAIRP(BgL_cz00_1448))
{ /* Llib/trace.scm 179 */
obj_t BgL_auxz00_2341;
BgL_auxz00_2341 = 
BINT(BgL_lvlz00_13); 
SET_CDR(BgL_cz00_1448, BgL_auxz00_2341); }  else 
{ /* Llib/trace.scm 179 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1446); } } } 
{ /* Llib/trace.scm 180 */
obj_t BgL_rz00_844;
{ /* Llib/trace.scm 180 */
bool_t BgL_testz00_2345;
{ /* Llib/trace.scm 180 */
int BgL_arg1983z00_874;
BgL_arg1983z00_874 = 
bgl_debug(); 
BgL_testz00_2345 = 
(
(long)(BgL_arg1983z00_874)>=
(long)(BgL_lvlz00_13)); } 
if(BgL_testz00_2345)
{ /* Llib/trace.scm 181 */
obj_t BgL_arg1959z00_846;
{ /* Llib/trace.scm 181 */
obj_t BgL_res2259z00_1457;
{ /* Llib/trace.scm 181 */
obj_t BgL_arg1899z00_1455;obj_t BgL_arg1900z00_1456;
BgL_arg1899z00_1455 = 
BGl_tracezd2alistzd2zz__tracez00(); 
BgL_arg1900z00_1456 = BGl_symbol2364z00zz__tracez00; 
{ /* Llib/trace.scm 181 */
obj_t BgL_aux2321z00_1806;
BgL_aux2321z00_1806 = 
BGl_tracezd2alistzd2getz00zz__tracez00(BgL_arg1899z00_1455, BgL_arg1900z00_1456); 
if(
OUTPUT_PORTP(BgL_aux2321z00_1806))
{ /* Llib/trace.scm 181 */
BgL_res2259z00_1457 = BgL_aux2321z00_1806; }  else 
{ 
obj_t BgL_auxz00_2354;
BgL_auxz00_2354 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7250)), BGl_string2402z00zz__tracez00, BGl_string2379z00zz__tracez00, BgL_aux2321z00_1806); 
FAILURE(BgL_auxz00_2354,BFALSE,BFALSE);} } } 
BgL_arg1959z00_846 = BgL_res2259z00_1457; } 
{ /* Llib/trace.scm 183 */
obj_t BgL_zc3anonymousza31961ze3z83_1747;
BgL_zc3anonymousza31961ze3z83_1747 = 
make_fx_procedure(BGl_zc3anonymousza31961ze3z83zz__tracez00, 
(int)(((long)0)), 
(int)(((long)3))); 
PROCEDURE_SET(BgL_zc3anonymousza31961ze3z83_1747, 
(int)(((long)0)), BgL_alz00_842); 
PROCEDURE_SET(BgL_zc3anonymousza31961ze3z83_1747, 
(int)(((long)1)), BgL_lblz00_14); 
PROCEDURE_SET(BgL_zc3anonymousza31961ze3z83_1747, 
(int)(((long)2)), BgL_thunkz00_15); 
BgL_rz00_844 = 
BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(BgL_arg1959z00_846, BgL_zc3anonymousza31961ze3z83_1747); } }  else 
{ /* Llib/trace.scm 180 */
bgl_mutex_unlock(BGl_za2tracezd2mutexza2zd2zz__tracez00); 
if(
PROCEDURE_CORRECT_ARITYP(BgL_thunkz00_15, ((long)0)))
{ /* Llib/trace.scm 201 */
BgL_rz00_844 = 
PROCEDURE_ENTRY(BgL_thunkz00_15)(BgL_thunkz00_15, BEOA); }  else 
{ /* Llib/trace.scm 201 */
FAILURE(BGl_string2403z00zz__tracez00,BGl_list2404z00zz__tracez00,BgL_thunkz00_15);} } } 
{ /* Llib/trace.scm 202 */
obj_t BgL_keyz00_1528;
BgL_keyz00_1528 = BGl_symbol2371z00zz__tracez00; 
{ /* Llib/trace.scm 202 */
obj_t BgL_cz00_1530;
{ /* Llib/trace.scm 202 */
obj_t BgL_auxz00_2374;
{ /* Llib/trace.scm 202 */
bool_t BgL_testz00_2375;
if(
PAIRP(BgL_alz00_842))
{ /* Llib/trace.scm 202 */
BgL_testz00_2375 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 202 */
BgL_testz00_2375 = 
NULLP(BgL_alz00_842)
; } 
if(BgL_testz00_2375)
{ /* Llib/trace.scm 202 */
BgL_auxz00_2374 = BgL_alz00_842
; }  else 
{ 
obj_t BgL_auxz00_2379;
BgL_auxz00_2379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7938)), BGl_string2402z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_842); 
FAILURE(BgL_auxz00_2379,BFALSE,BFALSE);} } 
BgL_cz00_1530 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1528, BgL_auxz00_2374); } 
if(
PAIRP(BgL_cz00_1530))
{ /* Llib/trace.scm 202 */
SET_CDR(BgL_cz00_1530, BgL_olz00_843); }  else 
{ /* Llib/trace.scm 202 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1528); } } } 
return BgL_rz00_844;} } } } } 
}



/* _%with-trace */
obj_t BGl__z52withzd2tracez80zz__tracez00(obj_t BgL_envz00_1748, obj_t BgL_lvlz00_1749, obj_t BgL_lblz00_1750, obj_t BgL_thunkz00_1751)
{ AN_OBJECT;
{ /* Llib/trace.scm 175 */
{ /* Llib/trace.scm 203 */
obj_t BgL_auxz00_2397;int BgL_auxz00_2388;
if(
PROCEDUREP(BgL_thunkz00_1751))
{ /* Llib/trace.scm 203 */
BgL_auxz00_2397 = BgL_thunkz00_1751
; }  else 
{ 
obj_t BgL_auxz00_2400;
BgL_auxz00_2400 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7981)), BGl_string2409z00zz__tracez00, BGl_string2410z00zz__tracez00, BgL_thunkz00_1751); 
FAILURE(BgL_auxz00_2400,BFALSE,BFALSE);} 
{ /* Llib/trace.scm 203 */
obj_t BgL_auxz00_2389;
if(
INTEGERP(BgL_lvlz00_1749))
{ /* Llib/trace.scm 203 */
BgL_auxz00_2389 = BgL_lvlz00_1749
; }  else 
{ 
obj_t BgL_auxz00_2392;
BgL_auxz00_2392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7981)), BGl_string2409z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_lvlz00_1749); 
FAILURE(BgL_auxz00_2392,BFALSE,BFALSE);} 
BgL_auxz00_2388 = 
CINT(BgL_auxz00_2389); } 
return 
BGl_z52withzd2tracez80zz__tracez00(BgL_auxz00_2388, BgL_lblz00_1750, BgL_auxz00_2397);} } 
}



/* <anonymous:1961> */
obj_t BGl_zc3anonymousza31961ze3z83zz__tracez00(obj_t BgL_envz00_1752)
{ AN_OBJECT;
{ /* Llib/trace.scm 182 */
{ /* Llib/trace.scm 183 */
obj_t BgL_alz00_1753;obj_t BgL_lblz00_1754;obj_t BgL_thunkz00_1755;
BgL_alz00_1753 = 
PROCEDURE_REF(BgL_envz00_1752, 
(int)(((long)0))); 
BgL_lblz00_1754 = 
PROCEDURE_REF(BgL_envz00_1752, 
(int)(((long)1))); 
BgL_thunkz00_1755 = 
PROCEDURE_REF(BgL_envz00_1752, 
(int)(((long)2))); 
{ 

{ /* Llib/trace.scm 183 */
obj_t BgL_dz00_849;
{ /* Llib/trace.scm 183 */
obj_t BgL_keyz00_1459;
BgL_keyz00_1459 = BGl_symbol2366z00zz__tracez00; 
{ /* Llib/trace.scm 183 */
obj_t BgL_cz00_1460;
{ /* Llib/trace.scm 183 */
obj_t BgL_auxz00_2411;
{ /* Llib/trace.scm 183 */
bool_t BgL_testz00_2412;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 183 */
BgL_testz00_2412 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 183 */
BgL_testz00_2412 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2412)
{ /* Llib/trace.scm 183 */
BgL_auxz00_2411 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2416;
BgL_auxz00_2416 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7296)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2416,BFALSE,BFALSE);} } 
BgL_cz00_1460 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1459, BgL_auxz00_2411); } 
if(
PAIRP(BgL_cz00_1460))
{ /* Llib/trace.scm 183 */
BgL_dz00_849 = 
CDR(BgL_cz00_1460); }  else 
{ /* Llib/trace.scm 183 */
BgL_dz00_849 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1459); } } } 
{ /* Llib/trace.scm 183 */
obj_t BgL_omz00_850;
{ /* Llib/trace.scm 184 */
obj_t BgL_keyz00_1465;
BgL_keyz00_1465 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 184 */
obj_t BgL_cz00_1466;
{ /* Llib/trace.scm 184 */
obj_t BgL_auxz00_2425;
{ /* Llib/trace.scm 184 */
bool_t BgL_testz00_2426;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 184 */
BgL_testz00_2426 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 184 */
BgL_testz00_2426 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2426)
{ /* Llib/trace.scm 184 */
BgL_auxz00_2425 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2430;
BgL_auxz00_2430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7333)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2430,BFALSE,BFALSE);} } 
BgL_cz00_1466 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1465, BgL_auxz00_2425); } 
if(
PAIRP(BgL_cz00_1466))
{ /* Llib/trace.scm 184 */
BgL_omz00_850 = 
CDR(BgL_cz00_1466); }  else 
{ /* Llib/trace.scm 184 */
BgL_omz00_850 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1465); } } } 
{ /* Llib/trace.scm 184 */
obj_t BgL_dez00_851;
{ /* Llib/trace.scm 185 */
obj_t BgL_keyz00_1471;
BgL_keyz00_1471 = BGl_symbol2366z00zz__tracez00; 
{ /* Llib/trace.scm 185 */
obj_t BgL_cz00_1472;
{ /* Llib/trace.scm 185 */
obj_t BgL_auxz00_2439;
{ /* Llib/trace.scm 185 */
bool_t BgL_testz00_2440;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 185 */
BgL_testz00_2440 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 185 */
BgL_testz00_2440 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2440)
{ /* Llib/trace.scm 185 */
BgL_auxz00_2439 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2444;
BgL_auxz00_2444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7371)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2444,BFALSE,BFALSE);} } 
BgL_cz00_1472 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1471, BgL_auxz00_2439); } 
if(
PAIRP(BgL_cz00_1472))
{ /* Llib/trace.scm 185 */
BgL_dez00_851 = 
CDR(BgL_cz00_1472); }  else 
{ /* Llib/trace.scm 185 */
BgL_dez00_851 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1471); } } } 
{ /* Llib/trace.scm 185 */
obj_t BgL_maz00_852;
{ /* Llib/trace.scm 186 */
obj_t BgL_list1981z00_871;
BgL_list1981z00_871 = 
MAKE_PAIR(BGl_string2412z00zz__tracez00, BNIL); 
{ /* Llib/trace.scm 186 */
int BgL_auxz00_2454;
{ /* Llib/trace.scm 186 */
obj_t BgL_auxz00_2455;
if(
INTEGERP(BgL_dez00_851))
{ /* Llib/trace.scm 186 */
BgL_auxz00_2455 = BgL_dez00_851
; }  else 
{ 
obj_t BgL_auxz00_2458;
BgL_auxz00_2458 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7408)), BGl_string2411z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_dez00_851); 
FAILURE(BgL_auxz00_2458,BFALSE,BFALSE);} 
BgL_auxz00_2454 = 
CINT(BgL_auxz00_2455); } 
BgL_maz00_852 = 
BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2454, BgL_list1981z00_871); } } 
{ /* Llib/trace.scm 186 */

{ /* Llib/trace.scm 187 */
obj_t BgL_arg1962z00_853;obj_t BgL_arg1963z00_854;
{ /* Llib/trace.scm 187 */
obj_t BgL_keyz00_1477;
BgL_keyz00_1477 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 187 */
obj_t BgL_cz00_1478;
{ /* Llib/trace.scm 187 */
obj_t BgL_auxz00_2464;
{ /* Llib/trace.scm 187 */
bool_t BgL_testz00_2465;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 187 */
BgL_testz00_2465 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 187 */
BgL_testz00_2465 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2465)
{ /* Llib/trace.scm 187 */
BgL_auxz00_2464 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2469;
BgL_auxz00_2469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7449)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2469,BFALSE,BFALSE);} } 
BgL_cz00_1478 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1477, BgL_auxz00_2464); } 
if(
PAIRP(BgL_cz00_1478))
{ /* Llib/trace.scm 187 */
BgL_arg1962z00_853 = 
CDR(BgL_cz00_1478); }  else 
{ /* Llib/trace.scm 187 */
BgL_arg1962z00_853 = 
BGl_errorz00zz__errorz00(BGl_symbol2376z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1477); } } } 
{ /* Llib/trace.scm 187 */
obj_t BgL_res2260z00_1483;
{ /* Llib/trace.scm 187 */
obj_t BgL_auxz00_2478;
BgL_auxz00_2478 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2260z00_1483 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2478); } 
BgL_arg1963z00_854 = BgL_res2260z00_1483; } 
bgl_display_obj(BgL_arg1962z00_853, BgL_arg1963z00_854); } 
{ /* Llib/trace.scm 188 */
obj_t BgL_arg1965z00_855;obj_t BgL_arg1966z00_856;
{ /* Llib/trace.scm 188 */
bool_t BgL_testz00_2482;
{ /* Llib/trace.scm 188 */
long BgL_n1z00_1484;
{ /* Llib/trace.scm 188 */
obj_t BgL_auxz00_2483;
if(
INTEGERP(BgL_dz00_849))
{ /* Llib/trace.scm 188 */
BgL_auxz00_2483 = BgL_dz00_849
; }  else 
{ 
obj_t BgL_auxz00_2486;
BgL_auxz00_2486 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7504)), BGl_string2411z00zz__tracez00, BGl_string2392z00zz__tracez00, BgL_dz00_849); 
FAILURE(BgL_auxz00_2486,BFALSE,BFALSE);} 
BgL_n1z00_1484 = 
(long)CINT(BgL_auxz00_2483); } 
BgL_testz00_2482 = 
(BgL_n1z00_1484==((long)0)); } 
if(BgL_testz00_2482)
{ /* Llib/trace.scm 189 */
obj_t BgL_list1968z00_858;
{ /* Llib/trace.scm 189 */
obj_t BgL_arg1970z00_860;
BgL_arg1970z00_860 = 
MAKE_PAIR(BgL_lblz00_1754, BNIL); 
BgL_list1968z00_858 = 
MAKE_PAIR(BGl_string2413z00zz__tracez00, BgL_arg1970z00_860); } 
{ /* Llib/trace.scm 189 */
int BgL_auxz00_2494;
{ /* Llib/trace.scm 189 */
obj_t BgL_auxz00_2495;
if(
INTEGERP(BgL_dz00_849))
{ /* Llib/trace.scm 189 */
BgL_auxz00_2495 = BgL_dz00_849
; }  else 
{ 
obj_t BgL_auxz00_2498;
BgL_auxz00_2498 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7515)), BGl_string2411z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_dz00_849); 
FAILURE(BgL_auxz00_2498,BFALSE,BFALSE);} 
BgL_auxz00_2494 = 
CINT(BgL_auxz00_2495); } 
BgL_arg1965z00_855 = 
BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2494, BgL_list1968z00_858); } }  else 
{ /* Llib/trace.scm 190 */
obj_t BgL_list1971z00_861;
{ /* Llib/trace.scm 190 */
obj_t BgL_arg1973z00_863;
BgL_arg1973z00_863 = 
MAKE_PAIR(BgL_lblz00_1754, BNIL); 
BgL_list1971z00_861 = 
MAKE_PAIR(BGl_string2414z00zz__tracez00, BgL_arg1973z00_863); } 
{ /* Llib/trace.scm 190 */
int BgL_auxz00_2506;
{ /* Llib/trace.scm 190 */
obj_t BgL_auxz00_2507;
if(
INTEGERP(BgL_dz00_849))
{ /* Llib/trace.scm 190 */
BgL_auxz00_2507 = BgL_dz00_849
; }  else 
{ 
obj_t BgL_auxz00_2510;
BgL_auxz00_2510 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7546)), BGl_string2411z00zz__tracez00, BGl_string2390z00zz__tracez00, BgL_dz00_849); 
FAILURE(BgL_auxz00_2510,BFALSE,BFALSE);} 
BgL_auxz00_2506 = 
CINT(BgL_auxz00_2507); } 
BgL_arg1965z00_855 = 
BGl_tracezd2colorzd2zz__tracez00(BgL_auxz00_2506, BgL_list1971z00_861); } } } 
{ /* Llib/trace.scm 188 */
obj_t BgL_res2261z00_1487;
{ /* Llib/trace.scm 188 */
obj_t BgL_auxz00_2516;
BgL_auxz00_2516 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2261z00_1487 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2516); } 
BgL_arg1966z00_856 = BgL_res2261z00_1487; } 
bgl_display_obj(BgL_arg1965z00_855, BgL_arg1966z00_856); } 
{ /* Llib/trace.scm 191 */
obj_t BgL_arg1974z00_864;
{ /* Llib/trace.scm 191 */
obj_t BgL_res2262z00_1489;
{ /* Llib/trace.scm 191 */
obj_t BgL_auxz00_2520;
BgL_auxz00_2520 = 
BGL_CURRENT_DYNAMIC_ENV(); 
BgL_res2262z00_1489 = 
BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2520); } 
BgL_arg1974z00_864 = BgL_res2262z00_1489; } 
bgl_display_char(((unsigned char)'\n'), BgL_arg1974z00_864); } 
{ /* Llib/trace.scm 192 */
obj_t BgL_arg1975z00_865;long BgL_arg1976z00_866;
BgL_arg1975z00_865 = BGl_symbol2366z00zz__tracez00; 
{ /* Llib/trace.scm 192 */
long BgL_za71za7_1491;
{ /* Llib/trace.scm 192 */
obj_t BgL_auxz00_2524;
if(
INTEGERP(BgL_dez00_851))
{ /* Llib/trace.scm 192 */
BgL_auxz00_2524 = BgL_dez00_851
; }  else 
{ 
obj_t BgL_auxz00_2527;
BgL_auxz00_2527 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7627)), BGl_string2411z00zz__tracez00, BGl_string2392z00zz__tracez00, BgL_dez00_851); 
FAILURE(BgL_auxz00_2527,BFALSE,BFALSE);} 
BgL_za71za7_1491 = 
(long)CINT(BgL_auxz00_2524); } 
BgL_arg1976z00_866 = 
(BgL_za71za7_1491+((long)1)); } 
{ /* Llib/trace.scm 192 */
obj_t BgL_cz00_1496;
{ /* Llib/trace.scm 192 */
obj_t BgL_auxz00_2533;
{ /* Llib/trace.scm 192 */
bool_t BgL_testz00_2534;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 192 */
BgL_testz00_2534 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 192 */
BgL_testz00_2534 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2534)
{ /* Llib/trace.scm 192 */
BgL_auxz00_2533 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2538;
BgL_auxz00_2538 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7599)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2538,BFALSE,BFALSE);} } 
BgL_cz00_1496 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1975z00_865, BgL_auxz00_2533); } 
if(
PAIRP(BgL_cz00_1496))
{ /* Llib/trace.scm 192 */
obj_t BgL_auxz00_2545;
BgL_auxz00_2545 = 
BINT(BgL_arg1976z00_866); 
SET_CDR(BgL_cz00_1496, BgL_auxz00_2545); }  else 
{ /* Llib/trace.scm 192 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1975z00_865); } } } 
{ /* Llib/trace.scm 193 */
obj_t BgL_arg1977z00_867;obj_t BgL_arg1979z00_868;
BgL_arg1977z00_867 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 193 */
obj_t BgL_auxz00_2549;
if(
STRINGP(BgL_omz00_850))
{ /* Llib/trace.scm 193 */
BgL_auxz00_2549 = BgL_omz00_850
; }  else 
{ 
obj_t BgL_auxz00_2552;
BgL_auxz00_2552 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7675)), BGl_string2411z00zz__tracez00, BGl_string2385z00zz__tracez00, BgL_omz00_850); 
FAILURE(BgL_auxz00_2552,BFALSE,BFALSE);} 
BgL_arg1979z00_868 = 
string_append(BgL_auxz00_2549, BgL_maz00_852); } 
{ /* Llib/trace.scm 193 */
obj_t BgL_cz00_1504;
{ /* Llib/trace.scm 193 */
obj_t BgL_auxz00_2557;
{ /* Llib/trace.scm 193 */
bool_t BgL_testz00_2558;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 193 */
BgL_testz00_2558 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 193 */
BgL_testz00_2558 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2558)
{ /* Llib/trace.scm 193 */
BgL_auxz00_2557 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2562;
BgL_auxz00_2562 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7646)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2562,BFALSE,BFALSE);} } 
BgL_cz00_1504 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1977z00_867, BgL_auxz00_2557); } 
if(
PAIRP(BgL_cz00_1504))
{ /* Llib/trace.scm 193 */
SET_CDR(BgL_cz00_1504, BgL_arg1979z00_868); }  else 
{ /* Llib/trace.scm 193 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_arg1977z00_867); } } } 
bgl_mutex_unlock(BGl_za2tracezd2mutexza2zd2zz__tracez00); 
{ /* Llib/trace.scm 195 */
obj_t BgL_resz00_870;
{ /* Llib/trace.scm 195 */
obj_t BgL_funz00_1843;
if(
PROCEDUREP(BgL_thunkz00_1755))
{ /* Llib/trace.scm 195 */
BgL_funz00_1843 = BgL_thunkz00_1755; }  else 
{ 
obj_t BgL_auxz00_2574;
BgL_auxz00_2574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7753)), BGl_string2411z00zz__tracez00, BGl_string2410z00zz__tracez00, BgL_thunkz00_1755); 
FAILURE(BgL_auxz00_2574,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1843, ((long)0)))
{ /* Llib/trace.scm 195 */
BgL_resz00_870 = 
PROCEDURE_ENTRY(BgL_funz00_1843)(BgL_thunkz00_1755, BEOA); }  else 
{ /* Llib/trace.scm 195 */
FAILURE(BGl_string2415z00zz__tracez00,BGl_list2404z00zz__tracez00,BgL_funz00_1843);} } 
{ /* Llib/trace.scm 196 */
obj_t BgL_keyz00_1511;
BgL_keyz00_1511 = BGl_symbol2366z00zz__tracez00; 
{ /* Llib/trace.scm 196 */
obj_t BgL_cz00_1513;
{ /* Llib/trace.scm 196 */
obj_t BgL_auxz00_2583;
{ /* Llib/trace.scm 196 */
bool_t BgL_testz00_2584;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 196 */
BgL_testz00_2584 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 196 */
BgL_testz00_2584 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2584)
{ /* Llib/trace.scm 196 */
BgL_auxz00_2583 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2588;
BgL_auxz00_2588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7773)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2588,BFALSE,BFALSE);} } 
BgL_cz00_1513 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1511, BgL_auxz00_2583); } 
if(
PAIRP(BgL_cz00_1513))
{ /* Llib/trace.scm 196 */
SET_CDR(BgL_cz00_1513, BgL_dez00_851); }  else 
{ /* Llib/trace.scm 196 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1511); } } } 
{ /* Llib/trace.scm 197 */
obj_t BgL_keyz00_1519;
BgL_keyz00_1519 = BGl_symbol2368z00zz__tracez00; 
{ /* Llib/trace.scm 197 */
obj_t BgL_cz00_1521;
{ /* Llib/trace.scm 197 */
obj_t BgL_auxz00_2597;
{ /* Llib/trace.scm 197 */
bool_t BgL_testz00_2598;
if(
PAIRP(BgL_alz00_1753))
{ /* Llib/trace.scm 197 */
BgL_testz00_2598 = ((bool_t)1)
; }  else 
{ /* Llib/trace.scm 197 */
BgL_testz00_2598 = 
NULLP(BgL_alz00_1753)
; } 
if(BgL_testz00_2598)
{ /* Llib/trace.scm 197 */
BgL_auxz00_2597 = BgL_alz00_1753
; }  else 
{ 
obj_t BgL_auxz00_2602;
BgL_auxz00_2602 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2373z00zz__tracez00, 
BINT(((long)7815)), BGl_string2411z00zz__tracez00, BGl_string2375z00zz__tracez00, BgL_alz00_1753); 
FAILURE(BgL_auxz00_2602,BFALSE,BFALSE);} } 
BgL_cz00_1521 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_keyz00_1519, BgL_auxz00_2597); } 
if(
PAIRP(BgL_cz00_1521))
{ /* Llib/trace.scm 197 */
SET_CDR(BgL_cz00_1521, BgL_omz00_850); }  else 
{ /* Llib/trace.scm 197 */
BGl_errorz00zz__errorz00(BGl_symbol2381z00zz__tracez00, BGl_string2377z00zz__tracez00, BgL_keyz00_1519); } } } 
return BgL_resz00_870;} } } } } } } } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 15 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 15 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__tracez00()
{ AN_OBJECT;
{ /* Llib/trace.scm 15 */
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2416z00zz__tracez00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2416z00zz__tracez00)); 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2416z00zz__tracez00)); 
return 
BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)164543289), 
BSTRING_TO_STRING(BGl_string2416z00zz__tracez00));} 
}

#ifdef __cplusplus
}
#endif
