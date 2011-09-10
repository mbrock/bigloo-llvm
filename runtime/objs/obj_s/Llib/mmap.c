/*===========================================================================*/
/*   (Llib/mmap.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/mmap.scm -indent -o objs/obj_s/Llib/mmap.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t, long, obj_t);
static obj_t BGl__mmapzd2substringzd2setz12z12zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
extern obj_t make_string_sans_fill(long);
static obj_t BGl_requirezd2initializa7ationz75zz__mmapz00 = BUNSPEC;
static obj_t BGl__mmapzd2setzd2urz12z12zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__mmapzd2setz12zc0zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t, long, long);
static obj_t BGl_genericzd2initzd2zz__mmapz00();
static obj_t BGl_list2441z00zz__mmapz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t, unsigned char);
static obj_t BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t, long);
BGL_EXPORTED_DECL long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t);
static obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t, long, unsigned char);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t, long);
static obj_t BGl__mmapzd2refzd2urz00zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__mmapz00();
BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t, long);
static obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00();
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
static obj_t BGl__mmapzd2getzd2stringz00zz__mmapz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_keyword(obj_t);
static obj_t BGl__mmapzd2refzd2zz__mmapz00(obj_t, obj_t, obj_t);
extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl__mmapzd2lengthzd2zz__mmapz00(obj_t, obj_t);
static obj_t BGl_symbol2446z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol2454z00zz__mmapz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t, long, unsigned char);
static obj_t BGl_symbol2468z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol2473z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol2476z00zz__mmapz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2485z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_symbol2487z00zz__mmapz00 = BUNSPEC;
static obj_t BGl__mmapzd2readzd2positionz00zz__mmapz00(obj_t, obj_t);
static obj_t BGl__mmapzd2getzd2charz00zz__mmapz00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_search1858z00zz__mmapz00(int, obj_t, obj_t, long);
extern obj_t string_to_bstring(char *);
static obj_t BGl_search1866z00zz__mmapz00(int, obj_t, obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_keyword2442z00zz__mmapz00 = BUNSPEC;
static obj_t BGl_keyword2444z00zz__mmapz00 = BUNSPEC;
static obj_t BGl__closezd2mmapzd2zz__mmapz00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t);
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl__mmapzd2putzd2stringz12z12zz__mmapz00(obj_t, obj_t, obj_t);
extern obj_t string_append(obj_t, obj_t);
extern char * BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
static obj_t BGl__mmapzf3zf3zz__mmapz00(obj_t, obj_t);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
static obj_t BGl__mmapzd2substringzd2zz__mmapz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t);
static obj_t BGl__mmapzd2writezd2positionz00zz__mmapz00(obj_t, obj_t);
BGL_EXPORTED_DECL unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t, long);
static obj_t BGl__mmapzd2putzd2charz12z12zz__mmapz00(obj_t, obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__mmapz00();
static obj_t *__cnst;


DEFINE_STRING( BGl_string2440z00zz__mmapz00, BgL_bgl_string2440za700za7za7_2501za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string2439z00zz__mmapz00, BgL_bgl_string2439za700za7za7_2502za7, "/tmp/bigloo/runtime/Llib/mmap.scm", 33 );
DEFINE_STRING( BGl_string2443z00zz__mmapz00, BgL_bgl_string2443za700za7za7_2503za7, "read", 4 );
DEFINE_STRING( BGl_string2445z00zz__mmapz00, BgL_bgl_string2445za700za7za7_2504za7, "write", 5 );
DEFINE_STRING( BGl_string2447z00zz__mmapz00, BgL_bgl_string2447za700za7za7_2505za7, "open-mmap", 9 );
DEFINE_STRING( BGl_string2448z00zz__mmapz00, BgL_bgl_string2448za700za7za7_2506za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string2450z00zz__mmapz00, BgL_bgl_string2450za700za7za7_2507za7, "long", 4 );
DEFINE_STRING( BGl_string2449z00zz__mmapz00, BgL_bgl_string2449za700za7za7_2508za7, "_open-mmap", 10 );
DEFINE_STRING( BGl_string2451z00zz__mmapz00, BgL_bgl_string2451za700za7za7_2509za7, "int", 3 );
DEFINE_STRING( BGl_string2452z00zz__mmapz00, BgL_bgl_string2452za700za7za7_2510za7, "bstring", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closezd2mmapzd2envz00zz__mmapz00, BgL_bgl__closeza7d2mmapza7d22511z00, BGl__closezd2mmapzd2zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2453z00zz__mmapz00, BgL_bgl_string2453za700za7za7_2512za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2455z00zz__mmapz00, BgL_bgl_string2455za700za7za7_2513za7, "string->mmap", 12 );
DEFINE_STRING( BGl_string2456z00zz__mmapz00, BgL_bgl_string2456za700za7za7_2514za7, "_string->mmap", 13 );
DEFINE_STRING( BGl_string2457z00zz__mmapz00, BgL_bgl_string2457za700za7za7_2515za7, "_close-mmap", 11 );
DEFINE_STRING( BGl_string2458z00zz__mmapz00, BgL_bgl_string2458za700za7za7_2516za7, "mmap", 4 );
DEFINE_STRING( BGl_string2460z00zz__mmapz00, BgL_bgl_string2460za700za7za7_2517za7, "_mmap-read-position", 19 );
DEFINE_STRING( BGl_string2459z00zz__mmapz00, BgL_bgl_string2459za700za7za7_2518za7, "_mmap-length", 12 );
DEFINE_STRING( BGl_string2461z00zz__mmapz00, BgL_bgl_string2461za700za7za7_2519za7, "_mmap-read-position-set!", 24 );
DEFINE_STRING( BGl_string2462z00zz__mmapz00, BgL_bgl_string2462za700za7za7_2520za7, "elong", 5 );
DEFINE_STRING( BGl_string2463z00zz__mmapz00, BgL_bgl_string2463za700za7za7_2521za7, "_mmap-write-position", 20 );
DEFINE_STRING( BGl_string2464z00zz__mmapz00, BgL_bgl_string2464za700za7za7_2522za7, "_mmap-write-position-set!", 25 );
DEFINE_STRING( BGl_string2465z00zz__mmapz00, BgL_bgl_string2465za700za7za7_2523za7, "_mmap-ref-ur", 12 );
DEFINE_STRING( BGl_string2466z00zz__mmapz00, BgL_bgl_string2466za700za7za7_2524za7, "_mmap-set-ur!", 13 );
DEFINE_STRING( BGl_string2467z00zz__mmapz00, BgL_bgl_string2467za700za7za7_2525za7, "uchar", 5 );
DEFINE_STRING( BGl_string2470z00zz__mmapz00, BgL_bgl_string2470za700za7za7_2526za7, "index out of range [0..", 23 );
DEFINE_STRING( BGl_string2469z00zz__mmapz00, BgL_bgl_string2469za700za7za7_2527za7, "mmap-ref", 8 );
DEFINE_STRING( BGl_string2471z00zz__mmapz00, BgL_bgl_string2471za700za7za7_2528za7, "]", 1 );
DEFINE_STRING( BGl_string2472z00zz__mmapz00, BgL_bgl_string2472za700za7za7_2529za7, "_mmap-ref", 9 );
DEFINE_STRING( BGl_string2474z00zz__mmapz00, BgL_bgl_string2474za700za7za7_2530za7, "mmap-set!", 9 );
DEFINE_STRING( BGl_string2475z00zz__mmapz00, BgL_bgl_string2475za700za7za7_2531za7, "_mmap-set!", 10 );
DEFINE_STRING( BGl_string2477z00zz__mmapz00, BgL_bgl_string2477za700za7za7_2532za7, "mmap-substring", 14 );
DEFINE_STRING( BGl_string2478z00zz__mmapz00, BgL_bgl_string2478za700za7za7_2533za7, "length too small", 16 );
DEFINE_STRING( BGl_string2480z00zz__mmapz00, BgL_bgl_string2480za700za7za7_2534za7, "Illegal index", 13 );
DEFINE_STRING( BGl_string2479z00zz__mmapz00, BgL_bgl_string2479za700za7za7_2535za7, "string-set!", 11 );
DEFINE_STRING( BGl_string2481z00zz__mmapz00, BgL_bgl_string2481za700za7za7_2536za7, "start+length bigger than ", 25 );
DEFINE_STRING( BGl_string2482z00zz__mmapz00, BgL_bgl_string2482za700za7za7_2537za7, "_mmap-substring", 15 );
DEFINE_STRING( BGl_string2483z00zz__mmapz00, BgL_bgl_string2483za700za7za7_2538za7, "mmap-substring-set!", 19 );
DEFINE_STRING( BGl_string2484z00zz__mmapz00, BgL_bgl_string2484za700za7za7_2539za7, "string-ref", 10 );
DEFINE_STRING( BGl_string2486z00zz__mmapz00, BgL_bgl_string2486za700za7za7_2540za7, "mmap-sbustring-set!", 19 );
DEFINE_STRING( BGl_string2488z00zz__mmapz00, BgL_bgl_string2488za700za7za7_2541za7, "[", 1 );
DEFINE_STRING( BGl_string2490z00zz__mmapz00, BgL_bgl_string2490za700za7za7_2542za7, "mmap-get-char", 13 );
DEFINE_STRING( BGl_string2489z00zz__mmapz00, BgL_bgl_string2489za700za7za7_2543za7, "_mmap-substring-set!", 20 );
DEFINE_STRING( BGl_string2491z00zz__mmapz00, BgL_bgl_string2491za700za7za7_2544za7, "_mmap-get-char", 14 );
DEFINE_STRING( BGl_string2492z00zz__mmapz00, BgL_bgl_string2492za700za7za7_2545za7, "_mmap-put-char!", 15 );
DEFINE_STRING( BGl_string2493z00zz__mmapz00, BgL_bgl_string2493za700za7za7_2546za7, "_mmap-get-string", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2substringzd2setz12zd2envzc0zz__mmapz00, BgL_bgl__mmapza7d2substrin2547za7, BGl__mmapzd2substringzd2setz12z12zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_STRING( BGl_string2494z00zz__mmapz00, BgL_bgl_string2494za700za7za7_2548za7, "_mmap-put-string!", 17 );
DEFINE_STRING( BGl_string2495z00zz__mmapz00, BgL_bgl_string2495za700za7za7_2549za7, "__mmap", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzf3zd2envz21zz__mmapz00, BgL_bgl__mmapza7f3za7f3za7za7__m2550z00, BGl__mmapzf3zf3zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2lengthzd2envz00zz__mmapz00, BgL_bgl__mmapza7d2lengthza7d2551z00, BGl__mmapzd2lengthzd2zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2readzd2positionzd2setz12zd2envz12zz__mmapz00, BgL_bgl__mmapza7d2readza7d2p2552z00, BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2setzd2urz12zd2envzc0zz__mmapz00, BgL_bgl__mmapza7d2setza7d2ur2553z00, BGl__mmapzd2setzd2urz12z12zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2putzd2charz12zd2envzc0zz__mmapz00, BgL_bgl__mmapza7d2putza7d2ch2554z00, BGl__mmapzd2putzd2charz12z12zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2refzd2envz00zz__mmapz00, BgL_bgl__mmapza7d2refza7d2za7za72555z00, BGl__mmapzd2refzd2zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_openzd2mmapzd2envz00zz__mmapz00, BgL_bgl__openza7d2mmapza7d2za72556za7, opt_generic_entry, BGl__openzd2mmapzd2zz__mmapz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2getzd2stringzd2envzd2zz__mmapz00, BgL_bgl__mmapza7d2getza7d2st2557z00, BGl__mmapzd2getzd2stringz00zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_stringzd2ze3mmapzd2envze3zz__mmapz00, BgL_bgl__stringza7d2za7e3mma2558z00, opt_generic_entry, BGl__stringzd2ze3mmapz31zz__mmapz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2writezd2positionzd2setz12zd2envz12zz__mmapz00, BgL_bgl__mmapza7d2writeza7d22559z00, BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2writezd2positionzd2envzd2zz__mmapz00, BgL_bgl__mmapza7d2writeza7d22560z00, BGl__mmapzd2writezd2positionz00zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2getzd2charzd2envzd2zz__mmapz00, BgL_bgl__mmapza7d2getza7d2ch2561z00, BGl__mmapzd2getzd2charz00zz__mmapz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2putzd2stringz12zd2envzc0zz__mmapz00, BgL_bgl__mmapza7d2putza7d2st2562z00, BGl__mmapzd2putzd2stringz12z12zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2substringzd2envz00zz__mmapz00, BgL_bgl__mmapza7d2substrin2563za7, BGl__mmapzd2substringzd2zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2refzd2urzd2envzd2zz__mmapz00, BgL_bgl__mmapza7d2refza7d2ur2564z00, BGl__mmapzd2refzd2urz00zz__mmapz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2setz12zd2envz12zz__mmapz00, BgL_bgl__mmapza7d2setza712za7c2565za7, BGl__mmapzd2setz12zc0zz__mmapz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_mmapzd2readzd2positionzd2envzd2zz__mmapz00, BgL_bgl__mmapza7d2readza7d2p2566z00, BGl__mmapzd2readzd2positionz00zz__mmapz00, 0L, BUNSPEC, 1 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__mmapz00(long BgL_checksumz00_2121, char * BgL_fromz00_2122)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__mmapz00))
{ 
BGl_requirezd2initializa7ationz75zz__mmapz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__mmapz00(); 
BGl_importedzd2moduleszd2initz00zz__mmapz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__mmapz00()
{ AN_OBJECT;
{ /* Llib/mmap.scm 19 */
BGl_keyword2442z00zz__mmapz00 = 
bstring_to_keyword(BGl_string2443z00zz__mmapz00); 
BGl_keyword2444z00zz__mmapz00 = 
bstring_to_keyword(BGl_string2445z00zz__mmapz00); 
BGl_list2441z00zz__mmapz00 = 
MAKE_PAIR(BGl_keyword2442z00zz__mmapz00, 
MAKE_PAIR(BGl_keyword2444z00zz__mmapz00, BNIL)); 
BGl_symbol2446z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2447z00zz__mmapz00); 
BGl_symbol2454z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2455z00zz__mmapz00); 
BGl_symbol2468z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2469z00zz__mmapz00); 
BGl_symbol2473z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2474z00zz__mmapz00); 
BGl_symbol2476z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2477z00zz__mmapz00); 
BGl_symbol2485z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2486z00zz__mmapz00); 
return ( 
BGl_symbol2487z00zz__mmapz00 = 
bstring_to_symbol(BGl_string2483z00zz__mmapz00), BUNSPEC) ;} 
}



/* mmap? */
BGL_EXPORTED_DEF bool_t BGl_mmapzf3zf3zz__mmapz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/mmap.scm 116 */
return 
BGL_MMAPP(BgL_objz00_1);} 
}



/* _mmap? */
obj_t BGl__mmapzf3zf3zz__mmapz00(obj_t BgL_envz00_1821, obj_t BgL_objz00_1822)
{ AN_OBJECT;
{ /* Llib/mmap.scm 116 */
return 
BBOOL(
BGL_MMAPP(BgL_objz00_1822));} 
}



/* _open-mmap */
obj_t BGl__openzd2mmapzd2zz__mmapz00(obj_t BgL_envz00_6, obj_t BgL_opt1856z00_5)
{ AN_OBJECT;
{ /* Llib/mmap.scm 122 */
{ /* Llib/mmap.scm 122 */
int BgL_l1857z00_779;
BgL_l1857z00_779 = 
VECTOR_LENGTH(BgL_opt1856z00_5); 
{ /* Llib/mmap.scm 122 */
obj_t BgL_g1863z00_783;
BgL_g1863z00_783 = 
VECTOR_REF(BgL_opt1856z00_5,
(int)(((long)0))); 
{ /* Llib/mmap.scm 122 */
obj_t BgL_readz00_784;
BgL_readz00_784 = BTRUE; 
{ /* Llib/mmap.scm 122 */
obj_t BgL_writez00_785;
BgL_writez00_785 = BTRUE; 
{ /* Llib/mmap.scm 122 */

{ 
long BgL_iz00_786;
BgL_iz00_786 = ((long)1); 
BgL_check1859z00_787:
if(
(BgL_iz00_786==
(long)(BgL_l1857z00_779)))
{ /* Llib/mmap.scm 122 */BNIL; }  else 
{ /* Llib/mmap.scm 122 */
bool_t BgL_testz00_2148;
{ /* Llib/mmap.scm 122 */
obj_t BgL_arg1905z00_794;obj_t BgL_arg1906z00_795;
{ /* Llib/mmap.scm 122 */
int BgL_kz00_1396;
BgL_kz00_1396 = 
(int)(BgL_iz00_786); 
{ /* Llib/mmap.scm 122 */
int BgL_l2325z00_1876;
BgL_l2325z00_1876 = 
VECTOR_LENGTH(BgL_opt1856z00_5); 
if(
BOUND_CHECK(BgL_kz00_1396, BgL_l2325z00_1876))
{ /* Llib/mmap.scm 122 */
BgL_arg1905z00_794 = 
VECTOR_REF(BgL_opt1856z00_5,BgL_kz00_1396); }  else 
{ 
obj_t BgL_auxz00_2154;
BgL_auxz00_2154 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2440z00zz__mmapz00, 
BINT(BgL_kz00_1396), BgL_opt1856z00_5); 
FAILURE(BgL_auxz00_2154,BFALSE,BFALSE);} } } 
BgL_arg1906z00_795 = BGl_list2441z00zz__mmapz00; 
BgL_testz00_2148 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1905z00_794, BgL_arg1906z00_795)); } 
if(BgL_testz00_2148)
{ 
long BgL_iz00_2161;
BgL_iz00_2161 = 
(BgL_iz00_786+((long)2)); 
BgL_iz00_786 = BgL_iz00_2161; 
goto BgL_check1859z00_787;}  else 
{ /* Llib/mmap.scm 122 */
obj_t BgL_arg1902z00_791;obj_t BgL_arg1904z00_793;
BgL_arg1902z00_791 = BGl_symbol2446z00zz__mmapz00; 
{ /* Llib/mmap.scm 122 */
int BgL_kz00_1400;
BgL_kz00_1400 = 
(int)(BgL_iz00_786); 
{ /* Llib/mmap.scm 122 */
int BgL_l2329z00_1880;
BgL_l2329z00_1880 = 
VECTOR_LENGTH(BgL_opt1856z00_5); 
if(
BOUND_CHECK(BgL_kz00_1400, BgL_l2329z00_1880))
{ /* Llib/mmap.scm 122 */
BgL_arg1904z00_793 = 
VECTOR_REF(BgL_opt1856z00_5,BgL_kz00_1400); }  else 
{ 
obj_t BgL_auxz00_2168;
BgL_auxz00_2168 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2440z00zz__mmapz00, 
BINT(BgL_kz00_1400), BgL_opt1856z00_5); 
FAILURE(BgL_auxz00_2168,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg1902z00_791, BGl_string2448z00zz__mmapz00, BgL_arg1904z00_793); } } } 
{ /* Llib/mmap.scm 122 */
obj_t BgL_index1861z00_796;
BgL_index1861z00_796 = 
BGl_search1858z00zz__mmapz00(BgL_l1857z00_779, BgL_opt1856z00_5, BGl_keyword2442z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 122 */
bool_t BgL_testz00_2175;
{ /* Llib/mmap.scm 122 */
long BgL_n1z00_1401;
{ /* Llib/mmap.scm 122 */
obj_t BgL_auxz00_2176;
if(
INTEGERP(BgL_index1861z00_796))
{ /* Llib/mmap.scm 122 */
BgL_auxz00_2176 = BgL_index1861z00_796
; }  else 
{ 
obj_t BgL_auxz00_2179;
BgL_auxz00_2179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2449z00zz__mmapz00, BGl_string2450z00zz__mmapz00, BgL_index1861z00_796); 
FAILURE(BgL_auxz00_2179,BFALSE,BFALSE);} 
BgL_n1z00_1401 = 
(long)CINT(BgL_auxz00_2176); } 
BgL_testz00_2175 = 
(BgL_n1z00_1401>=((long)0)); } 
if(BgL_testz00_2175)
{ 
int BgL_auxz00_2185;
{ /* Llib/mmap.scm 122 */
obj_t BgL_auxz00_2186;
{ /* Llib/mmap.scm 122 */
bool_t BgL_test2350z00_1901;
BgL_test2350z00_1901 = 
INTEGERP(BgL_index1861z00_796); 
if(BgL_test2350z00_1901)
{ /* Llib/mmap.scm 122 */
BgL_auxz00_2186 = BgL_index1861z00_796
; }  else 
{ 
obj_t BgL_auxz00_2189;
BgL_auxz00_2189 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2449z00zz__mmapz00, BGl_string2451z00zz__mmapz00, BgL_index1861z00_796); 
FAILURE(BgL_auxz00_2189,BFALSE,BFALSE);} } 
BgL_auxz00_2185 = 
CINT(BgL_auxz00_2186); } 
BgL_readz00_784 = 
VECTOR_REF(BgL_opt1856z00_5,BgL_auxz00_2185); }  else 
{ /* Llib/mmap.scm 122 */BFALSE; } } } 
{ /* Llib/mmap.scm 122 */
obj_t BgL_index1862z00_798;
BgL_index1862z00_798 = 
BGl_search1858z00zz__mmapz00(BgL_l1857z00_779, BgL_opt1856z00_5, BGl_keyword2444z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 122 */
bool_t BgL_testz00_2196;
{ /* Llib/mmap.scm 122 */
long BgL_n1z00_1403;
{ /* Llib/mmap.scm 122 */
obj_t BgL_auxz00_2197;
if(
INTEGERP(BgL_index1862z00_798))
{ /* Llib/mmap.scm 122 */
BgL_auxz00_2197 = BgL_index1862z00_798
; }  else 
{ 
obj_t BgL_auxz00_2200;
BgL_auxz00_2200 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2449z00zz__mmapz00, BGl_string2450z00zz__mmapz00, BgL_index1862z00_798); 
FAILURE(BgL_auxz00_2200,BFALSE,BFALSE);} 
BgL_n1z00_1403 = 
(long)CINT(BgL_auxz00_2197); } 
BgL_testz00_2196 = 
(BgL_n1z00_1403>=((long)0)); } 
if(BgL_testz00_2196)
{ 
int BgL_auxz00_2206;
{ /* Llib/mmap.scm 122 */
obj_t BgL_auxz00_2207;
{ /* Llib/mmap.scm 122 */
bool_t BgL_test2354z00_1905;
BgL_test2354z00_1905 = 
INTEGERP(BgL_index1862z00_798); 
if(BgL_test2354z00_1905)
{ /* Llib/mmap.scm 122 */
BgL_auxz00_2207 = BgL_index1862z00_798
; }  else 
{ 
obj_t BgL_auxz00_2210;
BgL_auxz00_2210 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2449z00zz__mmapz00, BGl_string2451z00zz__mmapz00, BgL_index1862z00_798); 
FAILURE(BgL_auxz00_2210,BFALSE,BFALSE);} } 
BgL_auxz00_2206 = 
CINT(BgL_auxz00_2207); } 
BgL_writez00_785 = 
VECTOR_REF(BgL_opt1856z00_5,BgL_auxz00_2206); }  else 
{ /* Llib/mmap.scm 122 */BFALSE; } } } 
{ /* Llib/mmap.scm 122 */
obj_t BgL_arg1909z00_800;
BgL_arg1909z00_800 = 
VECTOR_REF(BgL_opt1856z00_5,
(int)(((long)0))); 
{ /* Llib/mmap.scm 122 */
obj_t BgL_readz00_801;
BgL_readz00_801 = BgL_readz00_784; 
{ /* Llib/mmap.scm 122 */
obj_t BgL_writez00_802;
BgL_writez00_802 = BgL_writez00_785; 
{ /* Llib/mmap.scm 122 */
obj_t BgL_namez00_1405;
if(
STRINGP(BgL_arg1909z00_800))
{ /* Llib/mmap.scm 122 */
BgL_namez00_1405 = BgL_arg1909z00_800; }  else 
{ 
obj_t BgL_auxz00_2220;
BgL_auxz00_2220 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5555)), BGl_string2449z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_arg1909z00_800); 
FAILURE(BgL_auxz00_2220,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 122 */
bool_t BgL_auxz00_2226;bool_t BgL_auxz00_2224;
BgL_auxz00_2226 = 
CBOOL(BgL_writez00_802); 
BgL_auxz00_2224 = 
CBOOL(BgL_readz00_801); 
return 
bgl_open_mmap(BgL_namez00_1405, BgL_auxz00_2224, BgL_auxz00_2226);} } } } } } } } } } } 
}



/* search1858 */
obj_t BGl_search1858z00zz__mmapz00(int BgL_l1857z00_1873, obj_t BgL_opt1856z00_1872, obj_t BgL_k1z00_780, long BgL_iz00_781)
{ AN_OBJECT;
{ /* Llib/mmap.scm 122 */
BGl_search1858z00zz__mmapz00:
if(
(BgL_iz00_781==
(long)(BgL_l1857z00_1873)))
{ /* Llib/mmap.scm 122 */
return 
BINT(((long)-1));}  else 
{ /* Llib/mmap.scm 122 */
if(
(BgL_iz00_781==
(
(long)(BgL_l1857z00_1873)-((long)1))))
{ /* Llib/mmap.scm 122 */
obj_t BgL_arg1912z00_805;int BgL_arg1915z00_807;
BgL_arg1912z00_805 = BGl_symbol2446z00zz__mmapz00; 
BgL_arg1915z00_807 = 
VECTOR_LENGTH(BgL_opt1856z00_1872); 
return 
BGl_errorz00zz__errorz00(BgL_arg1912z00_805, BGl_string2453z00zz__mmapz00, 
BINT(BgL_arg1915z00_807));}  else 
{ /* Llib/mmap.scm 122 */
obj_t BgL_vz00_808;
BgL_vz00_808 = 
VECTOR_REF(BgL_opt1856z00_1872,
(int)(BgL_iz00_781)); 
if(
(BgL_vz00_808==BgL_k1z00_780))
{ /* Llib/mmap.scm 122 */
return 
BINT(
(BgL_iz00_781+((long)1)));}  else 
{ 
long BgL_iz00_2246;
BgL_iz00_2246 = 
(BgL_iz00_781+((long)2)); 
BgL_iz00_781 = BgL_iz00_2246; 
goto BGl_search1858z00zz__mmapz00;} } } } 
}



/* open-mmap */
BGL_EXPORTED_DEF obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t BgL_namez00_2, obj_t BgL_readz00_3, obj_t BgL_writez00_4)
{ AN_OBJECT;
{ /* Llib/mmap.scm 122 */
{ /* Llib/mmap.scm 123 */
bool_t BgL_auxz00_2250;bool_t BgL_auxz00_2248;
BgL_auxz00_2250 = 
CBOOL(BgL_writez00_4); 
BgL_auxz00_2248 = 
CBOOL(BgL_readz00_3); 
return 
bgl_open_mmap(BgL_namez00_2, BgL_auxz00_2248, BgL_auxz00_2250);} } 
}



/* _string->mmap */
obj_t BGl__stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_envz00_11, obj_t BgL_opt1864z00_10)
{ AN_OBJECT;
{ /* Llib/mmap.scm 128 */
{ /* Llib/mmap.scm 128 */
int BgL_l1865z00_812;
BgL_l1865z00_812 = 
VECTOR_LENGTH(BgL_opt1864z00_10); 
{ /* Llib/mmap.scm 128 */
obj_t BgL_g1871z00_816;
BgL_g1871z00_816 = 
VECTOR_REF(BgL_opt1864z00_10,
(int)(((long)0))); 
{ /* Llib/mmap.scm 128 */
obj_t BgL_readz00_817;
BgL_readz00_817 = BTRUE; 
{ /* Llib/mmap.scm 128 */
obj_t BgL_writez00_818;
BgL_writez00_818 = BTRUE; 
{ /* Llib/mmap.scm 128 */

{ 
long BgL_iz00_819;
BgL_iz00_819 = ((long)1); 
BgL_check1867z00_820:
if(
(BgL_iz00_819==
(long)(BgL_l1865z00_812)))
{ /* Llib/mmap.scm 128 */BNIL; }  else 
{ /* Llib/mmap.scm 128 */
bool_t BgL_testz00_2259;
{ /* Llib/mmap.scm 128 */
obj_t BgL_arg1926z00_827;obj_t BgL_arg1927z00_828;
{ /* Llib/mmap.scm 128 */
int BgL_kz00_1422;
BgL_kz00_1422 = 
(int)(BgL_iz00_819); 
{ /* Llib/mmap.scm 128 */
int BgL_l2333z00_1884;
BgL_l2333z00_1884 = 
VECTOR_LENGTH(BgL_opt1864z00_10); 
if(
BOUND_CHECK(BgL_kz00_1422, BgL_l2333z00_1884))
{ /* Llib/mmap.scm 128 */
BgL_arg1926z00_827 = 
VECTOR_REF(BgL_opt1864z00_10,BgL_kz00_1422); }  else 
{ 
obj_t BgL_auxz00_2265;
BgL_auxz00_2265 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2440z00zz__mmapz00, 
BINT(BgL_kz00_1422), BgL_opt1864z00_10); 
FAILURE(BgL_auxz00_2265,BFALSE,BFALSE);} } } 
BgL_arg1927z00_828 = BGl_list2441z00zz__mmapz00; 
BgL_testz00_2259 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1926z00_827, BgL_arg1927z00_828)); } 
if(BgL_testz00_2259)
{ 
long BgL_iz00_2272;
BgL_iz00_2272 = 
(BgL_iz00_819+((long)2)); 
BgL_iz00_819 = BgL_iz00_2272; 
goto BgL_check1867z00_820;}  else 
{ /* Llib/mmap.scm 128 */
obj_t BgL_arg1923z00_824;obj_t BgL_arg1925z00_826;
BgL_arg1923z00_824 = BGl_symbol2454z00zz__mmapz00; 
{ /* Llib/mmap.scm 128 */
int BgL_kz00_1426;
BgL_kz00_1426 = 
(int)(BgL_iz00_819); 
{ /* Llib/mmap.scm 128 */
int BgL_l2337z00_1888;
BgL_l2337z00_1888 = 
VECTOR_LENGTH(BgL_opt1864z00_10); 
if(
BOUND_CHECK(BgL_kz00_1426, BgL_l2337z00_1888))
{ /* Llib/mmap.scm 128 */
BgL_arg1925z00_826 = 
VECTOR_REF(BgL_opt1864z00_10,BgL_kz00_1426); }  else 
{ 
obj_t BgL_auxz00_2279;
BgL_auxz00_2279 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2440z00zz__mmapz00, 
BINT(BgL_kz00_1426), BgL_opt1864z00_10); 
FAILURE(BgL_auxz00_2279,BFALSE,BFALSE);} } } 
BGl_errorz00zz__errorz00(BgL_arg1923z00_824, BGl_string2448z00zz__mmapz00, BgL_arg1925z00_826); } } } 
{ /* Llib/mmap.scm 128 */
obj_t BgL_index1869z00_829;
BgL_index1869z00_829 = 
BGl_search1866z00zz__mmapz00(BgL_l1865z00_812, BgL_opt1864z00_10, BGl_keyword2442z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 128 */
bool_t BgL_testz00_2286;
{ /* Llib/mmap.scm 128 */
long BgL_n1z00_1427;
{ /* Llib/mmap.scm 128 */
obj_t BgL_auxz00_2287;
if(
INTEGERP(BgL_index1869z00_829))
{ /* Llib/mmap.scm 128 */
BgL_auxz00_2287 = BgL_index1869z00_829
; }  else 
{ 
obj_t BgL_auxz00_2290;
BgL_auxz00_2290 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2456z00zz__mmapz00, BGl_string2450z00zz__mmapz00, BgL_index1869z00_829); 
FAILURE(BgL_auxz00_2290,BFALSE,BFALSE);} 
BgL_n1z00_1427 = 
(long)CINT(BgL_auxz00_2287); } 
BgL_testz00_2286 = 
(BgL_n1z00_1427>=((long)0)); } 
if(BgL_testz00_2286)
{ 
int BgL_auxz00_2296;
{ /* Llib/mmap.scm 128 */
obj_t BgL_auxz00_2297;
{ /* Llib/mmap.scm 128 */
bool_t BgL_test2360z00_1911;
BgL_test2360z00_1911 = 
INTEGERP(BgL_index1869z00_829); 
if(BgL_test2360z00_1911)
{ /* Llib/mmap.scm 128 */
BgL_auxz00_2297 = BgL_index1869z00_829
; }  else 
{ 
obj_t BgL_auxz00_2300;
BgL_auxz00_2300 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2456z00zz__mmapz00, BGl_string2451z00zz__mmapz00, BgL_index1869z00_829); 
FAILURE(BgL_auxz00_2300,BFALSE,BFALSE);} } 
BgL_auxz00_2296 = 
CINT(BgL_auxz00_2297); } 
BgL_readz00_817 = 
VECTOR_REF(BgL_opt1864z00_10,BgL_auxz00_2296); }  else 
{ /* Llib/mmap.scm 128 */BFALSE; } } } 
{ /* Llib/mmap.scm 128 */
obj_t BgL_index1870z00_831;
BgL_index1870z00_831 = 
BGl_search1866z00zz__mmapz00(BgL_l1865z00_812, BgL_opt1864z00_10, BGl_keyword2444z00zz__mmapz00, ((long)1)); 
{ /* Llib/mmap.scm 128 */
bool_t BgL_testz00_2307;
{ /* Llib/mmap.scm 128 */
long BgL_n1z00_1429;
{ /* Llib/mmap.scm 128 */
obj_t BgL_auxz00_2308;
if(
INTEGERP(BgL_index1870z00_831))
{ /* Llib/mmap.scm 128 */
BgL_auxz00_2308 = BgL_index1870z00_831
; }  else 
{ 
obj_t BgL_auxz00_2311;
BgL_auxz00_2311 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2456z00zz__mmapz00, BGl_string2450z00zz__mmapz00, BgL_index1870z00_831); 
FAILURE(BgL_auxz00_2311,BFALSE,BFALSE);} 
BgL_n1z00_1429 = 
(long)CINT(BgL_auxz00_2308); } 
BgL_testz00_2307 = 
(BgL_n1z00_1429>=((long)0)); } 
if(BgL_testz00_2307)
{ 
int BgL_auxz00_2317;
{ /* Llib/mmap.scm 128 */
obj_t BgL_auxz00_2318;
{ /* Llib/mmap.scm 128 */
bool_t BgL_test2364z00_1915;
BgL_test2364z00_1915 = 
INTEGERP(BgL_index1870z00_831); 
if(BgL_test2364z00_1915)
{ /* Llib/mmap.scm 128 */
BgL_auxz00_2318 = BgL_index1870z00_831
; }  else 
{ 
obj_t BgL_auxz00_2321;
BgL_auxz00_2321 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2456z00zz__mmapz00, BGl_string2451z00zz__mmapz00, BgL_index1870z00_831); 
FAILURE(BgL_auxz00_2321,BFALSE,BFALSE);} } 
BgL_auxz00_2317 = 
CINT(BgL_auxz00_2318); } 
BgL_writez00_818 = 
VECTOR_REF(BgL_opt1864z00_10,BgL_auxz00_2317); }  else 
{ /* Llib/mmap.scm 128 */BFALSE; } } } 
{ /* Llib/mmap.scm 128 */
obj_t BgL_arg1930z00_833;
BgL_arg1930z00_833 = 
VECTOR_REF(BgL_opt1864z00_10,
(int)(((long)0))); 
{ /* Llib/mmap.scm 128 */
obj_t BgL_readz00_834;
BgL_readz00_834 = BgL_readz00_817; 
{ /* Llib/mmap.scm 128 */
obj_t BgL_writez00_835;
BgL_writez00_835 = BgL_writez00_818; 
{ /* Llib/mmap.scm 128 */
obj_t BgL_sz00_1431;
if(
STRINGP(BgL_arg1930z00_833))
{ /* Llib/mmap.scm 128 */
BgL_sz00_1431 = BgL_arg1930z00_833; }  else 
{ 
obj_t BgL_auxz00_2331;
BgL_auxz00_2331 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)5872)), BGl_string2456z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_arg1930z00_833); 
FAILURE(BgL_auxz00_2331,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 128 */
bool_t BgL_auxz00_2337;bool_t BgL_auxz00_2335;
BgL_auxz00_2337 = 
CBOOL(BgL_writez00_835); 
BgL_auxz00_2335 = 
CBOOL(BgL_readz00_834); 
return 
bgl_string_to_mmap(BgL_sz00_1431, BgL_auxz00_2335, BgL_auxz00_2337);} } } } } } } } } } } 
}



/* search1866 */
obj_t BGl_search1866z00zz__mmapz00(int BgL_l1865z00_1871, obj_t BgL_opt1864z00_1870, obj_t BgL_k1z00_813, long BgL_iz00_814)
{ AN_OBJECT;
{ /* Llib/mmap.scm 128 */
BGl_search1866z00zz__mmapz00:
if(
(BgL_iz00_814==
(long)(BgL_l1865z00_1871)))
{ /* Llib/mmap.scm 128 */
return 
BINT(((long)-1));}  else 
{ /* Llib/mmap.scm 128 */
if(
(BgL_iz00_814==
(
(long)(BgL_l1865z00_1871)-((long)1))))
{ /* Llib/mmap.scm 128 */
obj_t BgL_arg1935z00_838;int BgL_arg1938z00_840;
BgL_arg1935z00_838 = BGl_symbol2454z00zz__mmapz00; 
BgL_arg1938z00_840 = 
VECTOR_LENGTH(BgL_opt1864z00_1870); 
return 
BGl_errorz00zz__errorz00(BgL_arg1935z00_838, BGl_string2453z00zz__mmapz00, 
BINT(BgL_arg1938z00_840));}  else 
{ /* Llib/mmap.scm 128 */
obj_t BgL_vz00_841;
BgL_vz00_841 = 
VECTOR_REF(BgL_opt1864z00_1870,
(int)(BgL_iz00_814)); 
if(
(BgL_vz00_841==BgL_k1z00_813))
{ /* Llib/mmap.scm 128 */
return 
BINT(
(BgL_iz00_814+((long)1)));}  else 
{ 
long BgL_iz00_2357;
BgL_iz00_2357 = 
(BgL_iz00_814+((long)2)); 
BgL_iz00_814 = BgL_iz00_2357; 
goto BGl_search1866z00zz__mmapz00;} } } } 
}



/* string->mmap */
BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3mmapz31zz__mmapz00(obj_t BgL_sz00_7, obj_t BgL_readz00_8, obj_t BgL_writez00_9)
{ AN_OBJECT;
{ /* Llib/mmap.scm 128 */
{ /* Llib/mmap.scm 129 */
bool_t BgL_auxz00_2361;bool_t BgL_auxz00_2359;
BgL_auxz00_2361 = 
CBOOL(BgL_writez00_9); 
BgL_auxz00_2359 = 
CBOOL(BgL_readz00_8); 
return 
bgl_string_to_mmap(BgL_sz00_7, BgL_auxz00_2359, BgL_auxz00_2361);} } 
}



/* close-mmap */
BGL_EXPORTED_DEF obj_t BGl_closezd2mmapzd2zz__mmapz00(obj_t BgL_mmapz00_12)
{ AN_OBJECT;
{ /* Llib/mmap.scm 134 */
return 
bgl_close_mmap(BgL_mmapz00_12);} 
}



/* _close-mmap */
obj_t BGl__closezd2mmapzd2zz__mmapz00(obj_t BgL_envz00_1823, obj_t BgL_mmapz00_1824)
{ AN_OBJECT;
{ /* Llib/mmap.scm 134 */
{ /* Llib/mmap.scm 135 */
obj_t BgL_mmapz00_1991;
if(
BGL_MMAPP(BgL_mmapz00_1824))
{ /* Llib/mmap.scm 135 */
BgL_mmapz00_1991 = BgL_mmapz00_1824; }  else 
{ 
obj_t BgL_auxz00_2367;
BgL_auxz00_2367 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)6234)), BGl_string2457z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmapz00_1824); 
FAILURE(BgL_auxz00_2367,BFALSE,BFALSE);} 
return 
bgl_close_mmap(BgL_mmapz00_1991);} } 
}



/* mmap-length */
BGL_EXPORTED_DEF long BGl_mmapzd2lengthzd2zz__mmapz00(obj_t BgL_objz00_13)
{ AN_OBJECT;
{ /* Llib/mmap.scm 140 */
return 
BGL_MMAP_LENGTH(BgL_objz00_13);} 
}



/* _mmap-length */
obj_t BGl__mmapzd2lengthzd2zz__mmapz00(obj_t BgL_envz00_1825, obj_t BgL_objz00_1826)
{ AN_OBJECT;
{ /* Llib/mmap.scm 140 */
{ /* Llib/mmap.scm 141 */
long BgL_auxz00_2373;
{ /* Llib/mmap.scm 141 */
obj_t BgL_objz00_1992;
if(
BGL_MMAPP(BgL_objz00_1826))
{ /* Llib/mmap.scm 141 */
BgL_objz00_1992 = BgL_objz00_1826; }  else 
{ 
obj_t BgL_auxz00_2376;
BgL_auxz00_2376 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)6519)), BGl_string2459z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_objz00_1826); 
FAILURE(BgL_auxz00_2376,BFALSE,BFALSE);} 
BgL_auxz00_2373 = 
BGL_MMAP_LENGTH(BgL_objz00_1992); } 
return 
make_belong(BgL_auxz00_2373);} } 
}



/* mmap-read-position */
BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionz00zz__mmapz00(obj_t BgL_mmz00_14)
{ AN_OBJECT;
{ /* Llib/mmap.scm 146 */
return 
BGL_MMAP_RP_GET(BgL_mmz00_14);} 
}



/* _mmap-read-position */
obj_t BGl__mmapzd2readzd2positionz00zz__mmapz00(obj_t BgL_envz00_1827, obj_t BgL_mmz00_1828)
{ AN_OBJECT;
{ /* Llib/mmap.scm 146 */
{ /* Llib/mmap.scm 147 */
long BgL_auxz00_2383;
{ /* Llib/mmap.scm 147 */
obj_t BgL_mmz00_1993;
if(
BGL_MMAPP(BgL_mmz00_1828))
{ /* Llib/mmap.scm 147 */
BgL_mmz00_1993 = BgL_mmz00_1828; }  else 
{ 
obj_t BgL_auxz00_2386;
BgL_auxz00_2386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)6810)), BGl_string2460z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1828); 
FAILURE(BgL_auxz00_2386,BFALSE,BFALSE);} 
BgL_auxz00_2383 = 
BGL_MMAP_RP_GET(BgL_mmz00_1993); } 
return 
make_belong(BgL_auxz00_2383);} } 
}



/* mmap-read-position-set! */
BGL_EXPORTED_DEF long BGl_mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_15, long BgL_pz00_16)
{ AN_OBJECT;
{ /* Llib/mmap.scm 152 */
BGL_MMAP_RP_SET(BgL_mmz00_15, BgL_pz00_16); BUNSPEC; 
return BgL_pz00_16;} 
}



/* _mmap-read-position-set! */
obj_t BGl__mmapzd2readzd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_envz00_1829, obj_t BgL_mmz00_1830, obj_t BgL_pz00_1831)
{ AN_OBJECT;
{ /* Llib/mmap.scm 152 */
{ /* Llib/mmap.scm 154 */
long BgL_auxz00_2393;
{ /* Llib/mmap.scm 154 */
long BgL_res2496z00_1996;
{ /* Llib/mmap.scm 154 */
obj_t BgL_mmz00_1994;long BgL_pz00_1995;
if(
BGL_MMAPP(BgL_mmz00_1830))
{ /* Llib/mmap.scm 154 */
BgL_mmz00_1994 = BgL_mmz00_1830; }  else 
{ 
obj_t BgL_auxz00_2396;
BgL_auxz00_2396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)7127)), BGl_string2461z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1830); 
FAILURE(BgL_auxz00_2396,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 154 */
obj_t BgL_auxz00_2400;
if(
ELONGP(BgL_pz00_1831))
{ /* Llib/mmap.scm 154 */
BgL_auxz00_2400 = BgL_pz00_1831
; }  else 
{ 
obj_t BgL_auxz00_2403;
BgL_auxz00_2403 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)7127)), BGl_string2461z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_pz00_1831); 
FAILURE(BgL_auxz00_2403,BFALSE,BFALSE);} 
BgL_pz00_1995 = 
BELONG_TO_LONG(BgL_auxz00_2400); } 
BGL_MMAP_RP_SET(BgL_mmz00_1994, BgL_pz00_1995); BUNSPEC; 
BgL_res2496z00_1996 = BgL_pz00_1995; } 
BgL_auxz00_2393 = BgL_res2496z00_1996; } 
return 
make_belong(BgL_auxz00_2393);} } 
}



/* mmap-write-position */
BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionz00zz__mmapz00(obj_t BgL_mmz00_17)
{ AN_OBJECT;
{ /* Llib/mmap.scm 159 */
return 
BGL_MMAP_WP_GET(BgL_mmz00_17);} 
}



/* _mmap-write-position */
obj_t BGl__mmapzd2writezd2positionz00zz__mmapz00(obj_t BgL_envz00_1832, obj_t BgL_mmz00_1833)
{ AN_OBJECT;
{ /* Llib/mmap.scm 159 */
{ /* Llib/mmap.scm 160 */
long BgL_auxz00_2411;
{ /* Llib/mmap.scm 160 */
obj_t BgL_mmz00_1997;
if(
BGL_MMAPP(BgL_mmz00_1833))
{ /* Llib/mmap.scm 160 */
BgL_mmz00_1997 = BgL_mmz00_1833; }  else 
{ 
obj_t BgL_auxz00_2414;
BgL_auxz00_2414 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)7402)), BGl_string2463z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1833); 
FAILURE(BgL_auxz00_2414,BFALSE,BFALSE);} 
BgL_auxz00_2411 = 
BGL_MMAP_WP_GET(BgL_mmz00_1997); } 
return 
make_belong(BgL_auxz00_2411);} } 
}



/* mmap-write-position-set! */
BGL_EXPORTED_DEF long BGl_mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_18, long BgL_pz00_19)
{ AN_OBJECT;
{ /* Llib/mmap.scm 165 */
BGL_MMAP_WP_SET(BgL_mmz00_18, BgL_pz00_19); BUNSPEC; 
return BgL_pz00_19;} 
}



/* _mmap-write-position-set! */
obj_t BGl__mmapzd2writezd2positionzd2setz12zc0zz__mmapz00(obj_t BgL_envz00_1834, obj_t BgL_mmz00_1835, obj_t BgL_pz00_1836)
{ AN_OBJECT;
{ /* Llib/mmap.scm 165 */
{ /* Llib/mmap.scm 167 */
long BgL_auxz00_2421;
{ /* Llib/mmap.scm 167 */
long BgL_res2497z00_2000;
{ /* Llib/mmap.scm 167 */
obj_t BgL_mmz00_1998;long BgL_pz00_1999;
if(
BGL_MMAPP(BgL_mmz00_1835))
{ /* Llib/mmap.scm 167 */
BgL_mmz00_1998 = BgL_mmz00_1835; }  else 
{ 
obj_t BgL_auxz00_2424;
BgL_auxz00_2424 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)7720)), BGl_string2464z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1835); 
FAILURE(BgL_auxz00_2424,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 167 */
obj_t BgL_auxz00_2428;
if(
ELONGP(BgL_pz00_1836))
{ /* Llib/mmap.scm 167 */
BgL_auxz00_2428 = BgL_pz00_1836
; }  else 
{ 
obj_t BgL_auxz00_2431;
BgL_auxz00_2431 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)7720)), BGl_string2464z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_pz00_1836); 
FAILURE(BgL_auxz00_2431,BFALSE,BFALSE);} 
BgL_pz00_1999 = 
BELONG_TO_LONG(BgL_auxz00_2428); } 
BGL_MMAP_WP_SET(BgL_mmz00_1998, BgL_pz00_1999); BUNSPEC; 
BgL_res2497z00_2000 = BgL_pz00_1999; } 
BgL_auxz00_2421 = BgL_res2497z00_2000; } 
return 
make_belong(BgL_auxz00_2421);} } 
}



/* mmap-ref-ur */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2urz00zz__mmapz00(obj_t BgL_mmz00_20, long BgL_iz00_21)
{ AN_OBJECT;
{ /* Llib/mmap.scm 172 */
{ /* Llib/mmap.scm 173 */
unsigned char BgL_cz00_2001;
BgL_cz00_2001 = 
BGL_MMAP_REF(BgL_mmz00_20, BgL_iz00_21); 
{ /* Llib/mmap.scm 173 */
long BgL_arg1942z00_2002;
BgL_arg1942z00_2002 = 
(BgL_iz00_21+((long)1)); 
{ /* Llib/mmap.scm 173 */
long BgL_res2298z00_2003;
BGL_MMAP_RP_SET(BgL_mmz00_20, BgL_arg1942z00_2002); BUNSPEC; 
BgL_res2298z00_2003 = BgL_arg1942z00_2002; BgL_res2298z00_2003; } } 
return BgL_cz00_2001;} } 
}



/* _mmap-ref-ur */
obj_t BGl__mmapzd2refzd2urz00zz__mmapz00(obj_t BgL_envz00_1837, obj_t BgL_mmz00_1838, obj_t BgL_iz00_1839)
{ AN_OBJECT;
{ /* Llib/mmap.scm 172 */
{ /* Llib/mmap.scm 173 */
unsigned char BgL_auxz00_2441;
{ /* Llib/mmap.scm 173 */
unsigned char BgL_res2498z00_2009;
{ /* Llib/mmap.scm 173 */
obj_t BgL_mmz00_2004;long BgL_iz00_2005;
if(
BGL_MMAPP(BgL_mmz00_1838))
{ /* Llib/mmap.scm 173 */
BgL_mmz00_2004 = BgL_mmz00_1838; }  else 
{ 
obj_t BgL_auxz00_2444;
BgL_auxz00_2444 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8003)), BGl_string2465z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1838); 
FAILURE(BgL_auxz00_2444,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 173 */
obj_t BgL_auxz00_2448;
if(
ELONGP(BgL_iz00_1839))
{ /* Llib/mmap.scm 173 */
BgL_auxz00_2448 = BgL_iz00_1839
; }  else 
{ 
obj_t BgL_auxz00_2451;
BgL_auxz00_2451 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8003)), BGl_string2465z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_iz00_1839); 
FAILURE(BgL_auxz00_2451,BFALSE,BFALSE);} 
BgL_iz00_2005 = 
BELONG_TO_LONG(BgL_auxz00_2448); } 
{ /* Llib/mmap.scm 173 */
unsigned char BgL_cz00_2006;
BgL_cz00_2006 = 
BGL_MMAP_REF(BgL_mmz00_2004, BgL_iz00_2005); 
{ /* Llib/mmap.scm 173 */
long BgL_arg1942z00_2007;
BgL_arg1942z00_2007 = 
(BgL_iz00_2005+((long)1)); 
{ /* Llib/mmap.scm 173 */
long BgL_res2298z00_2008;
BGL_MMAP_RP_SET(BgL_mmz00_2004, BgL_arg1942z00_2007); BUNSPEC; 
BgL_res2298z00_2008 = BgL_arg1942z00_2007; BgL_res2298z00_2008; } } 
BgL_res2498z00_2009 = BgL_cz00_2006; } } 
BgL_auxz00_2441 = BgL_res2498z00_2009; } 
return 
BCHAR(BgL_auxz00_2441);} } 
}



/* mmap-set-ur! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2setzd2urz12z12zz__mmapz00(obj_t BgL_mmz00_22, long BgL_iz00_23, unsigned char BgL_cz00_24)
{ AN_OBJECT;
{ /* Llib/mmap.scm 180 */
BGL_MMAP_SET(BgL_mmz00_22, BgL_iz00_23, BgL_cz00_24); 
{ /* Llib/mmap.scm 182 */
long BgL_arg1943z00_2010;
BgL_arg1943z00_2010 = 
(BgL_iz00_23+((long)1)); 
{ /* Llib/mmap.scm 182 */
long BgL_res2299z00_2011;
BGL_MMAP_WP_SET(BgL_mmz00_22, BgL_arg1943z00_2010); BUNSPEC; 
BgL_res2299z00_2011 = BgL_arg1943z00_2010; 
return 
make_belong(BgL_res2299z00_2011);} } } 
}



/* _mmap-set-ur! */
obj_t BGl__mmapzd2setzd2urz12z12zz__mmapz00(obj_t BgL_envz00_1840, obj_t BgL_mmz00_1841, obj_t BgL_iz00_1842, obj_t BgL_cz00_1843)
{ AN_OBJECT;
{ /* Llib/mmap.scm 180 */
{ /* Llib/mmap.scm 182 */
obj_t BgL_mmz00_2012;long BgL_iz00_2013;unsigned char BgL_cz00_2014;
if(
BGL_MMAPP(BgL_mmz00_1841))
{ /* Llib/mmap.scm 182 */
BgL_mmz00_2012 = BgL_mmz00_1841; }  else 
{ 
obj_t BgL_auxz00_2466;
BgL_auxz00_2466 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8445)), BGl_string2466z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1841); 
FAILURE(BgL_auxz00_2466,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 182 */
obj_t BgL_auxz00_2470;
if(
ELONGP(BgL_iz00_1842))
{ /* Llib/mmap.scm 182 */
BgL_auxz00_2470 = BgL_iz00_1842
; }  else 
{ 
obj_t BgL_auxz00_2473;
BgL_auxz00_2473 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8445)), BGl_string2466z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_iz00_1842); 
FAILURE(BgL_auxz00_2473,BFALSE,BFALSE);} 
BgL_iz00_2013 = 
BELONG_TO_LONG(BgL_auxz00_2470); } 
{ /* Llib/mmap.scm 182 */
obj_t BgL_auxz00_2478;
if(
CHARP(BgL_cz00_1843))
{ /* Llib/mmap.scm 182 */
BgL_auxz00_2478 = BgL_cz00_1843
; }  else 
{ 
obj_t BgL_auxz00_2481;
BgL_auxz00_2481 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8445)), BGl_string2466z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_cz00_1843); 
FAILURE(BgL_auxz00_2481,BFALSE,BFALSE);} 
BgL_cz00_2014 = 
CCHAR(BgL_auxz00_2478); } 
BGL_MMAP_SET(BgL_mmz00_2012, BgL_iz00_2013, BgL_cz00_2014); 
{ /* Llib/mmap.scm 182 */
long BgL_arg1943z00_2015;
BgL_arg1943z00_2015 = 
(BgL_iz00_2013+((long)1)); 
{ /* Llib/mmap.scm 182 */
long BgL_res2299z00_2016;
BGL_MMAP_WP_SET(BgL_mmz00_2012, BgL_arg1943z00_2015); BUNSPEC; 
BgL_res2299z00_2016 = BgL_arg1943z00_2015; 
return 
make_belong(BgL_res2299z00_2016);} } } } 
}



/* mmap-ref */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2refzd2zz__mmapz00(obj_t BgL_mmz00_25, long BgL_iz00_26)
{ AN_OBJECT;
{ /* Llib/mmap.scm 187 */
{ /* Llib/mmap.scm 188 */
bool_t BgL_testz00_2490;
{ /* Llib/mmap.scm 188 */
long BgL_arg1954z00_2017;
BgL_arg1954z00_2017 = 
BGL_MMAP_LENGTH(BgL_mmz00_25); 
BgL_testz00_2490 = 
BOUND_CHECK(BgL_iz00_26, BgL_arg1954z00_2017); } 
if(BgL_testz00_2490)
{ /* Llib/mmap.scm 188 */
unsigned char BgL_res2301z00_2018;
{ /* Llib/mmap.scm 188 */
unsigned char BgL_cz00_2019;
BgL_cz00_2019 = 
BGL_MMAP_REF(BgL_mmz00_25, BgL_iz00_26); 
{ /* Llib/mmap.scm 188 */
long BgL_arg1942z00_2020;
BgL_arg1942z00_2020 = 
(BgL_iz00_26+((long)1)); 
{ /* Llib/mmap.scm 188 */
long BgL_res2300z00_2021;
BGL_MMAP_RP_SET(BgL_mmz00_25, BgL_arg1942z00_2020); BUNSPEC; 
BgL_res2300z00_2021 = BgL_arg1942z00_2020; BgL_res2300z00_2021; } } 
BgL_res2301z00_2018 = BgL_cz00_2019; } 
return BgL_res2301z00_2018;}  else 
{ /* Llib/mmap.scm 188 */
obj_t BgL_arg1945z00_2022;obj_t BgL_arg1946z00_2023;
BgL_arg1945z00_2022 = BGl_symbol2468z00zz__mmapz00; 
{ /* Llib/mmap.scm 188 */
char * BgL_arg1949z00_2024;
{ /* Llib/mmap.scm 188 */
obj_t BgL_arg1951z00_2025;
{ /* Llib/mmap.scm 188 */
long BgL_arg1952z00_2026;
BgL_arg1952z00_2026 = 
BGL_MMAP_LENGTH(BgL_mmz00_25); 
BgL_arg1951z00_2025 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1952z00_2026), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 188 */

BgL_arg1949z00_2024 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1951z00_2025, 
BINT(((long)10))); } } 
BgL_arg1946z00_2023 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1949z00_2024), BGl_string2471z00zz__mmapz00); } 
{ /* Llib/mmap.scm 188 */
obj_t BgL_auxz00_2504;
{ /* Llib/mmap.scm 188 */
obj_t BgL_aux2393z00_2027;
BgL_aux2393z00_2027 = 
BGl_errorz00zz__errorz00(BgL_arg1945z00_2022, BgL_arg1946z00_2023, 
make_belong(BgL_iz00_26)); 
if(
CHARP(BgL_aux2393z00_2027))
{ /* Llib/mmap.scm 188 */
BgL_auxz00_2504 = BgL_aux2393z00_2027
; }  else 
{ 
obj_t BgL_auxz00_2509;
BgL_auxz00_2509 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8751)), BGl_string2469z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_aux2393z00_2027); 
FAILURE(BgL_auxz00_2509,BFALSE,BFALSE);} } 
return 
CCHAR(BgL_auxz00_2504);} } } } 
}



/* _mmap-ref */
obj_t BGl__mmapzd2refzd2zz__mmapz00(obj_t BgL_envz00_1844, obj_t BgL_mmz00_1845, obj_t BgL_iz00_1846)
{ AN_OBJECT;
{ /* Llib/mmap.scm 187 */
{ /* Llib/mmap.scm 188 */
unsigned char BgL_auxz00_2514;
{ /* Llib/mmap.scm 188 */
obj_t BgL_mmz00_2028;long BgL_iz00_2029;
if(
BGL_MMAPP(BgL_mmz00_1845))
{ /* Llib/mmap.scm 188 */
BgL_mmz00_2028 = BgL_mmz00_1845; }  else 
{ 
obj_t BgL_auxz00_2517;
BgL_auxz00_2517 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8751)), BGl_string2472z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1845); 
FAILURE(BgL_auxz00_2517,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 188 */
obj_t BgL_auxz00_2521;
if(
ELONGP(BgL_iz00_1846))
{ /* Llib/mmap.scm 188 */
BgL_auxz00_2521 = BgL_iz00_1846
; }  else 
{ 
obj_t BgL_auxz00_2524;
BgL_auxz00_2524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8751)), BGl_string2472z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_iz00_1846); 
FAILURE(BgL_auxz00_2524,BFALSE,BFALSE);} 
BgL_iz00_2029 = 
BELONG_TO_LONG(BgL_auxz00_2521); } 
{ /* Llib/mmap.scm 188 */
bool_t BgL_testz00_2529;
{ /* Llib/mmap.scm 188 */
long BgL_arg1954z00_2030;
BgL_arg1954z00_2030 = 
BGL_MMAP_LENGTH(BgL_mmz00_2028); 
BgL_testz00_2529 = 
BOUND_CHECK(BgL_iz00_2029, BgL_arg1954z00_2030); } 
if(BgL_testz00_2529)
{ /* Llib/mmap.scm 188 */
unsigned char BgL_res2301z00_2031;
{ /* Llib/mmap.scm 188 */
unsigned char BgL_cz00_2032;
BgL_cz00_2032 = 
BGL_MMAP_REF(BgL_mmz00_2028, BgL_iz00_2029); 
{ /* Llib/mmap.scm 188 */
long BgL_arg1942z00_2033;
BgL_arg1942z00_2033 = 
(BgL_iz00_2029+((long)1)); 
{ /* Llib/mmap.scm 188 */
long BgL_res2300z00_2034;
BGL_MMAP_RP_SET(BgL_mmz00_2028, BgL_arg1942z00_2033); BUNSPEC; 
BgL_res2300z00_2034 = BgL_arg1942z00_2033; BgL_res2300z00_2034; } } 
BgL_res2301z00_2031 = BgL_cz00_2032; } 
BgL_auxz00_2514 = BgL_res2301z00_2031; }  else 
{ /* Llib/mmap.scm 188 */
obj_t BgL_arg1945z00_2035;obj_t BgL_arg1946z00_2036;
BgL_arg1945z00_2035 = BGl_symbol2468z00zz__mmapz00; 
{ /* Llib/mmap.scm 188 */
char * BgL_arg1949z00_2037;
{ /* Llib/mmap.scm 188 */
obj_t BgL_arg1951z00_2038;
{ /* Llib/mmap.scm 188 */
long BgL_arg1952z00_2039;
BgL_arg1952z00_2039 = 
BGL_MMAP_LENGTH(BgL_mmz00_2028); 
BgL_arg1951z00_2038 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1952z00_2039), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 188 */

BgL_arg1949z00_2037 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1951z00_2038, 
BINT(((long)10))); } } 
BgL_arg1946z00_2036 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1949z00_2037), BGl_string2471z00zz__mmapz00); } 
{ /* Llib/mmap.scm 188 */
obj_t BgL_auxz00_2543;
{ /* Llib/mmap.scm 188 */
obj_t BgL_aux2393z00_2040;
BgL_aux2393z00_2040 = 
BGl_errorz00zz__errorz00(BgL_arg1945z00_2035, BgL_arg1946z00_2036, 
make_belong(BgL_iz00_2029)); 
if(
CHARP(BgL_aux2393z00_2040))
{ /* Llib/mmap.scm 188 */
BgL_auxz00_2543 = BgL_aux2393z00_2040
; }  else 
{ 
obj_t BgL_auxz00_2548;
BgL_auxz00_2548 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)8751)), BGl_string2469z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_aux2393z00_2040); 
FAILURE(BgL_auxz00_2548,BFALSE,BFALSE);} } 
BgL_auxz00_2514 = 
CCHAR(BgL_auxz00_2543); } } } } 
return 
BCHAR(BgL_auxz00_2514);} } 
}



/* mmap-set! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2setz12zc0zz__mmapz00(obj_t BgL_mmz00_27, long BgL_iz00_28, unsigned char BgL_cz00_29)
{ AN_OBJECT;
{ /* Llib/mmap.scm 199 */
{ /* Llib/mmap.scm 200 */
bool_t BgL_testz00_2554;
{ /* Llib/mmap.scm 200 */
long BgL_arg1965z00_2041;
BgL_arg1965z00_2041 = 
BGL_MMAP_LENGTH(BgL_mmz00_27); 
BgL_testz00_2554 = 
BOUND_CHECK(BgL_iz00_28, BgL_arg1965z00_2041); } 
if(BgL_testz00_2554)
{ /* Llib/mmap.scm 200 */
BGL_MMAP_SET(BgL_mmz00_27, BgL_iz00_28, BgL_cz00_29); 
{ /* Llib/mmap.scm 200 */
long BgL_arg1943z00_2042;
BgL_arg1943z00_2042 = 
(BgL_iz00_28+((long)1)); 
{ /* Llib/mmap.scm 200 */
long BgL_res2302z00_2043;
BGL_MMAP_WP_SET(BgL_mmz00_27, BgL_arg1943z00_2042); BUNSPEC; 
BgL_res2302z00_2043 = BgL_arg1943z00_2042; 
return 
make_belong(BgL_res2302z00_2043);} } }  else 
{ /* Llib/mmap.scm 200 */
obj_t BgL_arg1956z00_2044;obj_t BgL_arg1957z00_2045;
BgL_arg1956z00_2044 = BGl_symbol2473z00zz__mmapz00; 
{ /* Llib/mmap.scm 200 */
char * BgL_arg1959z00_2046;
{ /* Llib/mmap.scm 200 */
obj_t BgL_arg1961z00_2047;
{ /* Llib/mmap.scm 200 */
long BgL_arg1962z00_2048;
BgL_arg1962z00_2048 = 
BGL_MMAP_LENGTH(BgL_mmz00_27); 
BgL_arg1961z00_2047 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1962z00_2048), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 200 */

BgL_arg1959z00_2046 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1961z00_2047, 
BINT(((long)10))); } } 
BgL_arg1957z00_2045 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1959z00_2046), BGl_string2471z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1956z00_2044, BgL_arg1957z00_2045, 
make_belong(BgL_iz00_28));} } } 
}



/* _mmap-set! */
obj_t BGl__mmapzd2setz12zc0zz__mmapz00(obj_t BgL_envz00_1847, obj_t BgL_mmz00_1848, obj_t BgL_iz00_1849, obj_t BgL_cz00_1850)
{ AN_OBJECT;
{ /* Llib/mmap.scm 199 */
{ /* Llib/mmap.scm 200 */
obj_t BgL_mmz00_2049;long BgL_iz00_2050;unsigned char BgL_cz00_2051;
if(
BGL_MMAPP(BgL_mmz00_1848))
{ /* Llib/mmap.scm 200 */
BgL_mmz00_2049 = BgL_mmz00_1848; }  else 
{ 
obj_t BgL_auxz00_2573;
BgL_auxz00_2573 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9251)), BGl_string2475z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1848); 
FAILURE(BgL_auxz00_2573,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 200 */
obj_t BgL_auxz00_2577;
if(
ELONGP(BgL_iz00_1849))
{ /* Llib/mmap.scm 200 */
BgL_auxz00_2577 = BgL_iz00_1849
; }  else 
{ 
obj_t BgL_auxz00_2580;
BgL_auxz00_2580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9251)), BGl_string2475z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_iz00_1849); 
FAILURE(BgL_auxz00_2580,BFALSE,BFALSE);} 
BgL_iz00_2050 = 
BELONG_TO_LONG(BgL_auxz00_2577); } 
{ /* Llib/mmap.scm 200 */
obj_t BgL_auxz00_2585;
if(
CHARP(BgL_cz00_1850))
{ /* Llib/mmap.scm 200 */
BgL_auxz00_2585 = BgL_cz00_1850
; }  else 
{ 
obj_t BgL_auxz00_2588;
BgL_auxz00_2588 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9251)), BGl_string2475z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_cz00_1850); 
FAILURE(BgL_auxz00_2588,BFALSE,BFALSE);} 
BgL_cz00_2051 = 
CCHAR(BgL_auxz00_2585); } 
{ /* Llib/mmap.scm 200 */
bool_t BgL_testz00_2593;
{ /* Llib/mmap.scm 200 */
long BgL_arg1965z00_2052;
BgL_arg1965z00_2052 = 
BGL_MMAP_LENGTH(BgL_mmz00_2049); 
BgL_testz00_2593 = 
BOUND_CHECK(BgL_iz00_2050, BgL_arg1965z00_2052); } 
if(BgL_testz00_2593)
{ /* Llib/mmap.scm 200 */
BGL_MMAP_SET(BgL_mmz00_2049, BgL_iz00_2050, BgL_cz00_2051); 
{ /* Llib/mmap.scm 200 */
long BgL_arg1943z00_2053;
BgL_arg1943z00_2053 = 
(BgL_iz00_2050+((long)1)); 
{ /* Llib/mmap.scm 200 */
long BgL_res2302z00_2054;
BGL_MMAP_WP_SET(BgL_mmz00_2049, BgL_arg1943z00_2053); BUNSPEC; 
BgL_res2302z00_2054 = BgL_arg1943z00_2053; 
return 
make_belong(BgL_res2302z00_2054);} } }  else 
{ /* Llib/mmap.scm 200 */
obj_t BgL_arg1956z00_2055;obj_t BgL_arg1957z00_2056;
BgL_arg1956z00_2055 = BGl_symbol2473z00zz__mmapz00; 
{ /* Llib/mmap.scm 200 */
char * BgL_arg1959z00_2057;
{ /* Llib/mmap.scm 200 */
obj_t BgL_arg1961z00_2058;
{ /* Llib/mmap.scm 200 */
long BgL_arg1962z00_2059;
BgL_arg1962z00_2059 = 
BGL_MMAP_LENGTH(BgL_mmz00_2049); 
BgL_arg1961z00_2058 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1962z00_2059), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 200 */

BgL_arg1959z00_2057 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1961z00_2058, 
BINT(((long)10))); } } 
BgL_arg1957z00_2056 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1959z00_2057), BGl_string2471z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1956z00_2055, BgL_arg1957z00_2056, 
make_belong(BgL_iz00_2050));} } } } 
}



/* mmap-substring */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2zz__mmapz00(obj_t BgL_mmz00_30, long BgL_startz00_31, long BgL_endz00_32)
{ AN_OBJECT;
{ /* Llib/mmap.scm 211 */
if(
(BgL_endz00_32<BgL_startz00_31))
{ /* Llib/mmap.scm 214 */
obj_t BgL_arg1967z00_873;long BgL_arg1969z00_875;
BgL_arg1967z00_873 = BGl_symbol2476z00zz__mmapz00; 
{ /* Llib/mmap.scm 214 */
long BgL_res2303z00_1508;
{ /* Llib/mmap.scm 214 */
long BgL_auxz00_2612;
BgL_auxz00_2612 = 
(BgL_endz00_32-BgL_startz00_31); 
BgL_res2303z00_1508 = 
LONG_TO_ELONG(BgL_auxz00_2612); } 
BgL_arg1969z00_875 = BgL_res2303z00_1508; } 
{ /* Llib/mmap.scm 214 */
obj_t BgL_aux2405z00_1956;
BgL_aux2405z00_1956 = 
BGl_errorz00zz__errorz00(BgL_arg1967z00_873, BGl_string2478z00zz__mmapz00, 
make_belong(BgL_arg1969z00_875)); 
if(
STRINGP(BgL_aux2405z00_1956))
{ /* Llib/mmap.scm 214 */
return BgL_aux2405z00_1956;}  else 
{ 
obj_t BgL_auxz00_2619;
BgL_auxz00_2619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9762)), BGl_string2477z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_aux2405z00_1956); 
FAILURE(BgL_auxz00_2619,BFALSE,BFALSE);} } }  else 
{ /* Llib/mmap.scm 215 */
bool_t BgL_testz00_2623;
{ /* Llib/mmap.scm 215 */
long BgL_arg1986z00_898;
{ /* Llib/mmap.scm 215 */
long BgL_arg1988z00_900;
BgL_arg1988z00_900 = 
BGL_MMAP_LENGTH(BgL_mmz00_30); 
BgL_arg1986z00_898 = 
(((long)1)+BgL_arg1988z00_900); } 
BgL_testz00_2623 = 
BOUND_CHECK(BgL_endz00_32, BgL_arg1986z00_898); } 
if(BgL_testz00_2623)
{ /* Llib/mmap.scm 220 */
bool_t BgL_testz00_2627;
{ /* Llib/mmap.scm 220 */
long BgL_arg1980z00_890;
BgL_arg1980z00_890 = 
BGL_MMAP_LENGTH(BgL_mmz00_30); 
BgL_testz00_2627 = 
BOUND_CHECK(BgL_startz00_31, BgL_arg1980z00_890); } 
if(BgL_testz00_2627)
{ /* Llib/mmap.scm 223 */
obj_t BgL_rz00_878;
{ /* Llib/mmap.scm 223 */
long BgL_arg1977z00_888;
{ /* Llib/mmap.scm 223 */
long BgL_arg1979z00_889;
{ /* Llib/mmap.scm 223 */
long BgL_res2304z00_1515;
{ /* Llib/mmap.scm 223 */
long BgL_auxz00_2630;
BgL_auxz00_2630 = 
(BgL_endz00_32-BgL_startz00_31); 
BgL_res2304z00_1515 = 
LONG_TO_ELONG(BgL_auxz00_2630); } 
BgL_arg1979z00_889 = BgL_res2304z00_1515; } 
{ /* Llib/mmap.scm 223 */
long BgL_res2305z00_1517;
{ /* Llib/mmap.scm 223 */
long BgL_auxz00_2633;
{ /* Llib/mmap.scm 223 */
long BgL_auxz00_2634;
BgL_auxz00_2634 = 
ELONG_TO_LONG(BgL_arg1979z00_889); 
BgL_auxz00_2633 = 
ELONG_TO_LONG(BgL_auxz00_2634); } 
BgL_res2305z00_1517 = 
ELONG_TO_LONG(BgL_auxz00_2633); } 
BgL_arg1977z00_888 = BgL_res2305z00_1517; } } 
BgL_rz00_878 = 
make_string_sans_fill(BgL_arg1977z00_888); } 
{ 
long BgL_iz00_880;long BgL_jz00_881;
BgL_iz00_880 = BgL_startz00_31; 
BgL_jz00_881 = ((long)0); 
BgL_zc3anonymousza31972ze3z83_882:
if(
(BgL_iz00_880==BgL_endz00_32))
{ /* Llib/mmap.scm 226 */
{ /* Llib/mmap.scm 228 */
long BgL_res2306z00_1522;
BGL_MMAP_RP_SET(BgL_mmz00_30, BgL_iz00_880); BUNSPEC; 
BgL_res2306z00_1522 = BgL_iz00_880; BgL_res2306z00_1522; } 
return BgL_rz00_878;}  else 
{ /* Llib/mmap.scm 226 */
{ /* Llib/mmap.scm 231 */
unsigned char BgL_arg1974z00_884;
{ /* Llib/mmap.scm 231 */
unsigned char BgL_res2308z00_1532;
{ /* Llib/mmap.scm 231 */
unsigned char BgL_cz00_1525;
BgL_cz00_1525 = 
BGL_MMAP_REF(BgL_mmz00_30, BgL_iz00_880); 
{ /* Llib/mmap.scm 231 */
long BgL_arg1942z00_1526;
BgL_arg1942z00_1526 = 
(BgL_iz00_880+((long)1)); 
{ /* Llib/mmap.scm 231 */
long BgL_res2307z00_1531;
BGL_MMAP_RP_SET(BgL_mmz00_30, BgL_arg1942z00_1526); BUNSPEC; 
BgL_res2307z00_1531 = BgL_arg1942z00_1526; BgL_res2307z00_1531; } } 
BgL_res2308z00_1532 = BgL_cz00_1525; } 
BgL_arg1974z00_884 = BgL_res2308z00_1532; } 
{ /* Llib/mmap.scm 231 */
long BgL_l2341z00_1892;
BgL_l2341z00_1892 = 
STRING_LENGTH(BgL_rz00_878); 
if(
BOUND_CHECK(BgL_jz00_881, BgL_l2341z00_1892))
{ /* Llib/mmap.scm 231 */
STRING_SET(BgL_rz00_878, BgL_jz00_881, BgL_arg1974z00_884); }  else 
{ 
obj_t BgL_auxz00_2649;
BgL_auxz00_2649 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)10363)), BGl_string2479z00zz__mmapz00, 
BINT(BgL_jz00_881), BgL_rz00_878); 
FAILURE(BgL_auxz00_2649,BFALSE,BFALSE);} } } 
{ /* Llib/mmap.scm 232 */
long BgL_arg1975z00_885;long BgL_arg1976z00_886;
BgL_arg1975z00_885 = 
(BgL_iz00_880+
LONG_TO_ELONG(((long)1))); 
BgL_arg1976z00_886 = 
(BgL_jz00_881+((long)1)); 
{ 
long BgL_jz00_2658;long BgL_iz00_2657;
BgL_iz00_2657 = BgL_arg1975z00_885; 
BgL_jz00_2658 = BgL_arg1976z00_886; 
BgL_jz00_881 = BgL_jz00_2658; 
BgL_iz00_880 = BgL_iz00_2657; 
goto BgL_zc3anonymousza31972ze3z83_882;} } } } }  else 
{ /* Llib/mmap.scm 221 */
obj_t BgL_aux2407z00_1958;
BgL_aux2407z00_1958 = 
BGl_errorz00zz__errorz00(BGl_symbol2476z00zz__mmapz00, BGl_string2480z00zz__mmapz00, 
make_belong(BgL_startz00_31)); 
if(
STRINGP(BgL_aux2407z00_1958))
{ /* Llib/mmap.scm 221 */
return BgL_aux2407z00_1958;}  else 
{ 
obj_t BgL_auxz00_2663;
BgL_auxz00_2663 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)10093)), BGl_string2477z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_aux2407z00_1958); 
FAILURE(BgL_auxz00_2663,BFALSE,BFALSE);} } }  else 
{ /* Llib/mmap.scm 216 */
obj_t BgL_arg1981z00_891;obj_t BgL_arg1982z00_892;
BgL_arg1981z00_891 = BGl_symbol2476z00zz__mmapz00; 
{ /* Llib/mmap.scm 217 */
char * BgL_arg1984z00_894;
{ /* Llib/mmap.scm 218 */
long BgL_arg1985z00_895;
BgL_arg1985z00_895 = 
BGL_MMAP_LENGTH(BgL_mmz00_30); 
{ /* Ieee/number.scm 133 */

BgL_arg1984z00_894 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg1985z00_895), 
BINT(((long)10))); } } 
BgL_arg1982z00_892 = 
string_append(BGl_string2481z00zz__mmapz00, 
string_to_bstring(BgL_arg1984z00_894)); } 
{ /* Llib/mmap.scm 216 */
obj_t BgL_aux2409z00_1960;
BgL_aux2409z00_1960 = 
BGl_errorz00zz__errorz00(BgL_arg1981z00_891, BgL_arg1982z00_892, 
make_belong(BgL_endz00_32)); 
if(
STRINGP(BgL_aux2409z00_1960))
{ /* Llib/mmap.scm 216 */
return BgL_aux2409z00_1960;}  else 
{ 
obj_t BgL_auxz00_2677;
BgL_auxz00_2677 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9900)), BGl_string2477z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_aux2409z00_1960); 
FAILURE(BgL_auxz00_2677,BFALSE,BFALSE);} } } } } 
}



/* _mmap-substring */
obj_t BGl__mmapzd2substringzd2zz__mmapz00(obj_t BgL_envz00_1851, obj_t BgL_mmz00_1852, obj_t BgL_startz00_1853, obj_t BgL_endz00_1854)
{ AN_OBJECT;
{ /* Llib/mmap.scm 211 */
{ /* Llib/mmap.scm 213 */
long BgL_auxz00_2697;long BgL_auxz00_2688;obj_t BgL_auxz00_2681;
{ /* Llib/mmap.scm 213 */
obj_t BgL_auxz00_2698;
if(
ELONGP(BgL_endz00_1854))
{ /* Llib/mmap.scm 213 */
BgL_auxz00_2698 = BgL_endz00_1854
; }  else 
{ 
obj_t BgL_auxz00_2701;
BgL_auxz00_2701 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9736)), BGl_string2482z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_endz00_1854); 
FAILURE(BgL_auxz00_2701,BFALSE,BFALSE);} 
BgL_auxz00_2697 = 
BELONG_TO_LONG(BgL_auxz00_2698); } 
{ /* Llib/mmap.scm 213 */
obj_t BgL_auxz00_2689;
if(
ELONGP(BgL_startz00_1853))
{ /* Llib/mmap.scm 213 */
BgL_auxz00_2689 = BgL_startz00_1853
; }  else 
{ 
obj_t BgL_auxz00_2692;
BgL_auxz00_2692 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9736)), BGl_string2482z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_startz00_1853); 
FAILURE(BgL_auxz00_2692,BFALSE,BFALSE);} 
BgL_auxz00_2688 = 
BELONG_TO_LONG(BgL_auxz00_2689); } 
if(
BGL_MMAPP(BgL_mmz00_1852))
{ /* Llib/mmap.scm 213 */
BgL_auxz00_2681 = BgL_mmz00_1852
; }  else 
{ 
obj_t BgL_auxz00_2684;
BgL_auxz00_2684 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)9736)), BGl_string2482z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1852); 
FAILURE(BgL_auxz00_2684,BFALSE,BFALSE);} 
return 
BGl_mmapzd2substringzd2zz__mmapz00(BgL_auxz00_2681, BgL_auxz00_2688, BgL_auxz00_2697);} } 
}



/* mmap-substring-set! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2substringzd2setz12z12zz__mmapz00(obj_t BgL_mmz00_33, long BgL_oz00_34, obj_t BgL_sz00_35)
{ AN_OBJECT;
{ /* Llib/mmap.scm 237 */
{ /* Llib/mmap.scm 238 */
long BgL_lenz00_901;
BgL_lenz00_901 = 
STRING_LENGTH(BgL_sz00_35); 
if(
(BgL_oz00_34<((long)0)))
{ /* Llib/mmap.scm 240 */
return 
BGl_errorz00zz__errorz00(BGl_string2483z00zz__mmapz00, BGl_string2480z00zz__mmapz00, 
make_belong(BgL_oz00_34));}  else 
{ /* Llib/mmap.scm 242 */
bool_t BgL_testz00_2712;
{ /* Llib/mmap.scm 242 */
long BgL_arg2018z00_935;
{ /* Llib/mmap.scm 242 */
long BgL_arg2019z00_936;
BgL_arg2019z00_936 = 
BGL_MMAP_LENGTH(BgL_mmz00_33); 
BgL_arg2018z00_935 = 
(BgL_arg2019z00_936+((long)1)); } 
BgL_testz00_2712 = 
BOUND_CHECK(BgL_oz00_34, BgL_arg2018z00_935); } 
if(BgL_testz00_2712)
{ /* Llib/mmap.scm 248 */
bool_t BgL_testz00_2716;
{ /* Llib/mmap.scm 248 */
long BgL_arg2006z00_922;long BgL_arg2007z00_923;
{ /* Llib/mmap.scm 248 */
long BgL_arg2008z00_924;
BgL_arg2008z00_924 = 
LONG_TO_ELONG(BgL_lenz00_901); 
BgL_arg2006z00_922 = 
(BgL_oz00_34+BgL_arg2008z00_924); } 
{ /* Llib/mmap.scm 249 */
long BgL_arg2009z00_925;
BgL_arg2009z00_925 = 
BGL_MMAP_LENGTH(BgL_mmz00_33); 
BgL_arg2007z00_923 = 
(BgL_arg2009z00_925+((long)1)); } 
BgL_testz00_2716 = 
BOUND_CHECK(BgL_arg2006z00_922, BgL_arg2007z00_923); } 
if(BgL_testz00_2716)
{ 
long BgL_iz00_906;long BgL_jz00_907;
BgL_iz00_906 = ((long)0); 
BgL_jz00_907 = BgL_oz00_34; 
BgL_zc3anonymousza31992ze3z83_908:
if(
(BgL_iz00_906==BgL_lenz00_901))
{ /* Llib/mmap.scm 258 */
{ /* Llib/mmap.scm 260 */
long BgL_res2309z00_1557;
BGL_MMAP_WP_SET(BgL_mmz00_33, BgL_jz00_907); BUNSPEC; 
BgL_res2309z00_1557 = BgL_jz00_907; BgL_res2309z00_1557; } 
return BgL_mmz00_33;}  else 
{ /* Llib/mmap.scm 258 */
{ /* Llib/mmap.scm 263 */
unsigned char BgL_arg1994z00_910;
{ /* Llib/mmap.scm 263 */
long BgL_l2345z00_1896;
BgL_l2345z00_1896 = 
STRING_LENGTH(BgL_sz00_35); 
if(
BOUND_CHECK(BgL_iz00_906, BgL_l2345z00_1896))
{ /* Llib/mmap.scm 263 */
BgL_arg1994z00_910 = 
STRING_REF(BgL_sz00_35, BgL_iz00_906); }  else 
{ 
obj_t BgL_auxz00_2729;
BgL_auxz00_2729 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)11429)), BGl_string2484z00zz__mmapz00, 
BINT(BgL_iz00_906), BgL_sz00_35); 
FAILURE(BgL_auxz00_2729,BFALSE,BFALSE);} } 
BGL_MMAP_SET(BgL_mmz00_33, BgL_jz00_907, BgL_arg1994z00_910); 
{ /* Llib/mmap.scm 263 */
long BgL_arg1943z00_1563;
BgL_arg1943z00_1563 = 
(BgL_jz00_907+((long)1)); 
{ /* Llib/mmap.scm 263 */
long BgL_res2310z00_1568;
BGL_MMAP_WP_SET(BgL_mmz00_33, BgL_arg1943z00_1563); BUNSPEC; 
BgL_res2310z00_1568 = BgL_arg1943z00_1563; BgL_res2310z00_1568; } } } 
{ /* Llib/mmap.scm 264 */
long BgL_arg1995z00_911;long BgL_arg1996z00_912;
BgL_arg1995z00_911 = 
(BgL_iz00_906+((long)1)); 
BgL_arg1996z00_912 = 
(BgL_jz00_907+
LONG_TO_ELONG(((long)1))); 
{ 
long BgL_jz00_2741;long BgL_iz00_2740;
BgL_iz00_2740 = BgL_arg1995z00_911; 
BgL_jz00_2741 = BgL_arg1996z00_912; 
BgL_jz00_907 = BgL_jz00_2741; 
BgL_iz00_906 = BgL_iz00_2740; 
goto BgL_zc3anonymousza31992ze3z83_908;} } } }  else 
{ /* Llib/mmap.scm 250 */
obj_t BgL_arg1998z00_914;obj_t BgL_arg1999z00_915;obj_t BgL_arg2000z00_916;
BgL_arg1998z00_914 = BGl_symbol2485z00zz__mmapz00; 
{ /* Llib/mmap.scm 251 */
char * BgL_arg2002z00_918;
{ /* Llib/mmap.scm 252 */
long BgL_arg2004z00_920;
BgL_arg2004z00_920 = 
BGL_MMAP_LENGTH(BgL_mmz00_33); 
BgL_arg2002z00_918 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg2004z00_920), 
BINT(((long)1))); } 
BgL_arg1999z00_915 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg2002z00_918), BGl_string2471z00zz__mmapz00); } 
BgL_arg2000z00_916 = 
BGl_2zb2zb2zz__r4_numbers_6_5z00(
make_belong(BgL_oz00_34), 
BINT(BgL_lenz00_901)); 
return 
BGl_errorz00zz__errorz00(BgL_arg1998z00_914, BgL_arg1999z00_915, BgL_arg2000z00_916);} }  else 
{ /* Llib/mmap.scm 243 */
obj_t BgL_arg2011z00_927;obj_t BgL_arg2012z00_928;
BgL_arg2011z00_927 = BGl_symbol2487z00zz__mmapz00; 
{ /* Llib/mmap.scm 244 */
char * BgL_arg2015z00_930;
{ /* Llib/mmap.scm 245 */
long BgL_arg2017z00_932;
BgL_arg2017z00_932 = 
BGL_MMAP_LENGTH(BgL_mmz00_33); 
{ /* Ieee/number.scm 133 */

BgL_arg2015z00_930 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(
make_belong(BgL_arg2017z00_932), 
BINT(((long)10))); } } 
BgL_arg2012z00_928 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg2015z00_930), BGl_string2488z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg2011z00_927, BgL_arg2012z00_928, 
make_belong(BgL_oz00_34));} } } } 
}



/* _mmap-substring-set! */
obj_t BGl__mmapzd2substringzd2setz12z12zz__mmapz00(obj_t BgL_envz00_1855, obj_t BgL_mmz00_1856, obj_t BgL_oz00_1857, obj_t BgL_sz00_1858)
{ AN_OBJECT;
{ /* Llib/mmap.scm 237 */
{ /* Llib/mmap.scm 238 */
obj_t BgL_auxz00_2776;long BgL_auxz00_2767;obj_t BgL_auxz00_2760;
if(
STRINGP(BgL_sz00_1858))
{ /* Llib/mmap.scm 238 */
BgL_auxz00_2776 = BgL_sz00_1858
; }  else 
{ 
obj_t BgL_auxz00_2779;
BgL_auxz00_2779 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)10731)), BGl_string2489z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_sz00_1858); 
FAILURE(BgL_auxz00_2779,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 238 */
obj_t BgL_auxz00_2768;
if(
ELONGP(BgL_oz00_1857))
{ /* Llib/mmap.scm 238 */
BgL_auxz00_2768 = BgL_oz00_1857
; }  else 
{ 
obj_t BgL_auxz00_2771;
BgL_auxz00_2771 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)10731)), BGl_string2489z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_oz00_1857); 
FAILURE(BgL_auxz00_2771,BFALSE,BFALSE);} 
BgL_auxz00_2767 = 
BELONG_TO_LONG(BgL_auxz00_2768); } 
if(
BGL_MMAPP(BgL_mmz00_1856))
{ /* Llib/mmap.scm 238 */
BgL_auxz00_2760 = BgL_mmz00_1856
; }  else 
{ 
obj_t BgL_auxz00_2763;
BgL_auxz00_2763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)10731)), BGl_string2489z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1856); 
FAILURE(BgL_auxz00_2763,BFALSE,BFALSE);} 
return 
BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_auxz00_2760, BgL_auxz00_2767, BgL_auxz00_2776);} } 
}



/* mmap-get-char */
BGL_EXPORTED_DEF unsigned char BGl_mmapzd2getzd2charz00zz__mmapz00(obj_t BgL_mmz00_36)
{ AN_OBJECT;
{ /* Llib/mmap.scm 269 */
{ /* Llib/mmap.scm 270 */
long BgL_arg2022z00_2060;
BgL_arg2022z00_2060 = 
BGL_MMAP_RP_GET(BgL_mmz00_36); 
{ /* Llib/mmap.scm 270 */
unsigned char BgL_res2313z00_2061;
{ /* Llib/mmap.scm 270 */
bool_t BgL_testz00_2785;
{ /* Llib/mmap.scm 270 */
long BgL_arg1954z00_2062;
BgL_arg1954z00_2062 = 
BGL_MMAP_LENGTH(BgL_mmz00_36); 
BgL_testz00_2785 = 
BOUND_CHECK(BgL_arg2022z00_2060, BgL_arg1954z00_2062); } 
if(BgL_testz00_2785)
{ /* Llib/mmap.scm 270 */
unsigned char BgL_res2312z00_2063;
{ /* Llib/mmap.scm 270 */
unsigned char BgL_cz00_2064;
BgL_cz00_2064 = 
BGL_MMAP_REF(BgL_mmz00_36, BgL_arg2022z00_2060); 
{ /* Llib/mmap.scm 270 */
long BgL_arg1942z00_2065;
BgL_arg1942z00_2065 = 
(BgL_arg2022z00_2060+((long)1)); 
{ /* Llib/mmap.scm 270 */
long BgL_res2311z00_2066;
BGL_MMAP_RP_SET(BgL_mmz00_36, BgL_arg1942z00_2065); BUNSPEC; 
BgL_res2311z00_2066 = BgL_arg1942z00_2065; BgL_res2311z00_2066; } } 
BgL_res2312z00_2063 = BgL_cz00_2064; } 
BgL_res2313z00_2061 = BgL_res2312z00_2063; }  else 
{ /* Llib/mmap.scm 270 */
obj_t BgL_arg1945z00_2067;obj_t BgL_arg1946z00_2068;
BgL_arg1945z00_2067 = BGl_symbol2468z00zz__mmapz00; 
{ /* Llib/mmap.scm 270 */
char * BgL_arg1949z00_2069;
{ /* Llib/mmap.scm 270 */
obj_t BgL_arg1951z00_2070;
{ /* Llib/mmap.scm 270 */
long BgL_arg1952z00_2071;
BgL_arg1952z00_2071 = 
BGL_MMAP_LENGTH(BgL_mmz00_36); 
BgL_arg1951z00_2070 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1952z00_2071), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 270 */

BgL_arg1949z00_2069 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1951z00_2070, 
BINT(((long)10))); } } 
BgL_arg1946z00_2068 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1949z00_2069), BGl_string2471z00zz__mmapz00); } 
{ /* Llib/mmap.scm 270 */
obj_t BgL_auxz00_2799;
{ /* Llib/mmap.scm 270 */
obj_t BgL_aux2423z00_2072;
BgL_aux2423z00_2072 = 
BGl_errorz00zz__errorz00(BgL_arg1945z00_2067, BgL_arg1946z00_2068, 
make_belong(BgL_arg2022z00_2060)); 
if(
CHARP(BgL_aux2423z00_2072))
{ /* Llib/mmap.scm 270 */
BgL_auxz00_2799 = BgL_aux2423z00_2072
; }  else 
{ 
obj_t BgL_auxz00_2804;
BgL_auxz00_2804 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)11772)), BGl_string2490z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_aux2423z00_2072); 
FAILURE(BgL_auxz00_2804,BFALSE,BFALSE);} } 
BgL_res2313z00_2061 = 
CCHAR(BgL_auxz00_2799); } } } 
return BgL_res2313z00_2061;} } } 
}



/* _mmap-get-char */
obj_t BGl__mmapzd2getzd2charz00zz__mmapz00(obj_t BgL_envz00_1859, obj_t BgL_mmz00_1860)
{ AN_OBJECT;
{ /* Llib/mmap.scm 269 */
{ /* Llib/mmap.scm 270 */
unsigned char BgL_auxz00_2809;
{ /* Llib/mmap.scm 270 */
unsigned char BgL_res2499z00_2087;
{ /* Llib/mmap.scm 270 */
obj_t BgL_mmz00_2073;
if(
BGL_MMAPP(BgL_mmz00_1860))
{ /* Llib/mmap.scm 270 */
BgL_mmz00_2073 = BgL_mmz00_1860; }  else 
{ 
obj_t BgL_auxz00_2812;
BgL_auxz00_2812 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)11772)), BGl_string2491z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1860); 
FAILURE(BgL_auxz00_2812,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 270 */
long BgL_arg2022z00_2074;
BgL_arg2022z00_2074 = 
BGL_MMAP_RP_GET(BgL_mmz00_2073); 
{ /* Llib/mmap.scm 270 */
unsigned char BgL_res2313z00_2075;
{ /* Llib/mmap.scm 270 */
bool_t BgL_testz00_2817;
{ /* Llib/mmap.scm 270 */
long BgL_arg1954z00_2076;
BgL_arg1954z00_2076 = 
BGL_MMAP_LENGTH(BgL_mmz00_2073); 
BgL_testz00_2817 = 
BOUND_CHECK(BgL_arg2022z00_2074, BgL_arg1954z00_2076); } 
if(BgL_testz00_2817)
{ /* Llib/mmap.scm 270 */
unsigned char BgL_res2312z00_2077;
{ /* Llib/mmap.scm 270 */
unsigned char BgL_cz00_2078;
BgL_cz00_2078 = 
BGL_MMAP_REF(BgL_mmz00_2073, BgL_arg2022z00_2074); 
{ /* Llib/mmap.scm 270 */
long BgL_arg1942z00_2079;
BgL_arg1942z00_2079 = 
(BgL_arg2022z00_2074+((long)1)); 
{ /* Llib/mmap.scm 270 */
long BgL_res2311z00_2080;
BGL_MMAP_RP_SET(BgL_mmz00_2073, BgL_arg1942z00_2079); BUNSPEC; 
BgL_res2311z00_2080 = BgL_arg1942z00_2079; BgL_res2311z00_2080; } } 
BgL_res2312z00_2077 = BgL_cz00_2078; } 
BgL_res2313z00_2075 = BgL_res2312z00_2077; }  else 
{ /* Llib/mmap.scm 270 */
obj_t BgL_arg1945z00_2081;obj_t BgL_arg1946z00_2082;
BgL_arg1945z00_2081 = BGl_symbol2468z00zz__mmapz00; 
{ /* Llib/mmap.scm 270 */
char * BgL_arg1949z00_2083;
{ /* Llib/mmap.scm 270 */
obj_t BgL_arg1951z00_2084;
{ /* Llib/mmap.scm 270 */
long BgL_arg1952z00_2085;
BgL_arg1952z00_2085 = 
BGL_MMAP_LENGTH(BgL_mmz00_2073); 
BgL_arg1951z00_2084 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1952z00_2085), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 270 */

BgL_arg1949z00_2083 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1951z00_2084, 
BINT(((long)10))); } } 
BgL_arg1946z00_2082 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1949z00_2083), BGl_string2471z00zz__mmapz00); } 
{ /* Llib/mmap.scm 270 */
obj_t BgL_auxz00_2831;
{ /* Llib/mmap.scm 270 */
obj_t BgL_aux2423z00_2086;
BgL_aux2423z00_2086 = 
BGl_errorz00zz__errorz00(BgL_arg1945z00_2081, BgL_arg1946z00_2082, 
make_belong(BgL_arg2022z00_2074)); 
if(
CHARP(BgL_aux2423z00_2086))
{ /* Llib/mmap.scm 270 */
BgL_auxz00_2831 = BgL_aux2423z00_2086
; }  else 
{ 
obj_t BgL_auxz00_2836;
BgL_auxz00_2836 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)11772)), BGl_string2490z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_aux2423z00_2086); 
FAILURE(BgL_auxz00_2836,BFALSE,BFALSE);} } 
BgL_res2313z00_2075 = 
CCHAR(BgL_auxz00_2831); } } } 
BgL_res2499z00_2087 = BgL_res2313z00_2075; } } } 
BgL_auxz00_2809 = BgL_res2499z00_2087; } 
return 
BCHAR(BgL_auxz00_2809);} } 
}



/* mmap-put-char! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2charz12z12zz__mmapz00(obj_t BgL_mmz00_37, unsigned char BgL_cz00_38)
{ AN_OBJECT;
{ /* Llib/mmap.scm 275 */
{ /* Llib/mmap.scm 276 */
long BgL_arg2023z00_2088;
BgL_arg2023z00_2088 = 
BGL_MMAP_WP_GET(BgL_mmz00_37); 
{ /* Llib/mmap.scm 276 */
bool_t BgL_testz00_2843;
{ /* Llib/mmap.scm 276 */
long BgL_arg1965z00_2089;
BgL_arg1965z00_2089 = 
BGL_MMAP_LENGTH(BgL_mmz00_37); 
BgL_testz00_2843 = 
BOUND_CHECK(BgL_arg2023z00_2088, BgL_arg1965z00_2089); } 
if(BgL_testz00_2843)
{ /* Llib/mmap.scm 276 */
BGL_MMAP_SET(BgL_mmz00_37, BgL_arg2023z00_2088, BgL_cz00_38); 
{ /* Llib/mmap.scm 276 */
long BgL_arg1943z00_2090;
BgL_arg1943z00_2090 = 
(BgL_arg2023z00_2088+((long)1)); 
{ /* Llib/mmap.scm 276 */
long BgL_res2314z00_2091;
BGL_MMAP_WP_SET(BgL_mmz00_37, BgL_arg1943z00_2090); BUNSPEC; 
BgL_res2314z00_2091 = BgL_arg1943z00_2090; 
return 
make_belong(BgL_res2314z00_2091);} } }  else 
{ /* Llib/mmap.scm 276 */
obj_t BgL_arg1956z00_2092;obj_t BgL_arg1957z00_2093;
BgL_arg1956z00_2092 = BGl_symbol2473z00zz__mmapz00; 
{ /* Llib/mmap.scm 276 */
char * BgL_arg1959z00_2094;
{ /* Llib/mmap.scm 276 */
obj_t BgL_arg1961z00_2095;
{ /* Llib/mmap.scm 276 */
long BgL_arg1962z00_2096;
BgL_arg1962z00_2096 = 
BGL_MMAP_LENGTH(BgL_mmz00_37); 
BgL_arg1961z00_2095 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1962z00_2096), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 276 */

BgL_arg1959z00_2094 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1961z00_2095, 
BINT(((long)10))); } } 
BgL_arg1957z00_2093 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1959z00_2094), BGl_string2471z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1956z00_2092, BgL_arg1957z00_2093, 
make_belong(BgL_arg2023z00_2088));} } } } 
}



/* _mmap-put-char! */
obj_t BGl__mmapzd2putzd2charz12z12zz__mmapz00(obj_t BgL_envz00_1861, obj_t BgL_mmz00_1862, obj_t BgL_cz00_1863)
{ AN_OBJECT;
{ /* Llib/mmap.scm 275 */
{ /* Llib/mmap.scm 276 */
obj_t BgL_mmz00_2097;unsigned char BgL_cz00_2098;
if(
BGL_MMAPP(BgL_mmz00_1862))
{ /* Llib/mmap.scm 276 */
BgL_mmz00_2097 = BgL_mmz00_1862; }  else 
{ 
obj_t BgL_auxz00_2862;
BgL_auxz00_2862 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12071)), BGl_string2492z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1862); 
FAILURE(BgL_auxz00_2862,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 276 */
obj_t BgL_auxz00_2866;
if(
CHARP(BgL_cz00_1863))
{ /* Llib/mmap.scm 276 */
BgL_auxz00_2866 = BgL_cz00_1863
; }  else 
{ 
obj_t BgL_auxz00_2869;
BgL_auxz00_2869 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12071)), BGl_string2492z00zz__mmapz00, BGl_string2467z00zz__mmapz00, BgL_cz00_1863); 
FAILURE(BgL_auxz00_2869,BFALSE,BFALSE);} 
BgL_cz00_2098 = 
CCHAR(BgL_auxz00_2866); } 
{ /* Llib/mmap.scm 276 */
long BgL_arg2023z00_2099;
BgL_arg2023z00_2099 = 
BGL_MMAP_WP_GET(BgL_mmz00_2097); 
{ /* Llib/mmap.scm 276 */
bool_t BgL_testz00_2875;
{ /* Llib/mmap.scm 276 */
long BgL_arg1965z00_2100;
BgL_arg1965z00_2100 = 
BGL_MMAP_LENGTH(BgL_mmz00_2097); 
BgL_testz00_2875 = 
BOUND_CHECK(BgL_arg2023z00_2099, BgL_arg1965z00_2100); } 
if(BgL_testz00_2875)
{ /* Llib/mmap.scm 276 */
BGL_MMAP_SET(BgL_mmz00_2097, BgL_arg2023z00_2099, BgL_cz00_2098); 
{ /* Llib/mmap.scm 276 */
long BgL_arg1943z00_2101;
BgL_arg1943z00_2101 = 
(BgL_arg2023z00_2099+((long)1)); 
{ /* Llib/mmap.scm 276 */
long BgL_res2314z00_2102;
BGL_MMAP_WP_SET(BgL_mmz00_2097, BgL_arg1943z00_2101); BUNSPEC; 
BgL_res2314z00_2102 = BgL_arg1943z00_2101; 
return 
make_belong(BgL_res2314z00_2102);} } }  else 
{ /* Llib/mmap.scm 276 */
obj_t BgL_arg1956z00_2103;obj_t BgL_arg1957z00_2104;
BgL_arg1956z00_2103 = BGl_symbol2473z00zz__mmapz00; 
{ /* Llib/mmap.scm 276 */
char * BgL_arg1959z00_2105;
{ /* Llib/mmap.scm 276 */
obj_t BgL_arg1961z00_2106;
{ /* Llib/mmap.scm 276 */
long BgL_arg1962z00_2107;
BgL_arg1962z00_2107 = 
BGL_MMAP_LENGTH(BgL_mmz00_2097); 
BgL_arg1961z00_2106 = 
BGl_2zd2zd2zz__r4_numbers_6_5z00(
make_belong(BgL_arg1962z00_2107), 
BINT(((long)1))); } 
{ /* Llib/mmap.scm 276 */

BgL_arg1959z00_2105 = 
BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_arg1961z00_2106, 
BINT(((long)10))); } } 
BgL_arg1957z00_2104 = 
string_append_3(BGl_string2470z00zz__mmapz00, 
string_to_bstring(BgL_arg1959z00_2105), BGl_string2471z00zz__mmapz00); } 
return 
BGl_errorz00zz__errorz00(BgL_arg1956z00_2103, BgL_arg1957z00_2104, 
make_belong(BgL_arg2023z00_2099));} } } } } 
}



/* mmap-get-string */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2getzd2stringz00zz__mmapz00(obj_t BgL_mmz00_39, long BgL_lenz00_40)
{ AN_OBJECT;
{ /* Llib/mmap.scm 281 */
{ /* Llib/mmap.scm 282 */
long BgL_arg2024z00_2108;long BgL_arg2025z00_2109;
BgL_arg2024z00_2108 = 
BGL_MMAP_RP_GET(BgL_mmz00_39); 
{ /* Llib/mmap.scm 282 */
long BgL_arg2027z00_2110;
BgL_arg2027z00_2110 = 
BGL_MMAP_RP_GET(BgL_mmz00_39); 
BgL_arg2025z00_2109 = 
(BgL_arg2027z00_2110+BgL_lenz00_40); } 
return 
BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_39, BgL_arg2024z00_2108, BgL_arg2025z00_2109);} } 
}



/* _mmap-get-string */
obj_t BGl__mmapzd2getzd2stringz00zz__mmapz00(obj_t BgL_envz00_1864, obj_t BgL_mmz00_1865, obj_t BgL_lenz00_1866)
{ AN_OBJECT;
{ /* Llib/mmap.scm 281 */
{ /* Llib/mmap.scm 282 */
obj_t BgL_res2500z00_2116;
{ /* Llib/mmap.scm 282 */
obj_t BgL_mmz00_2111;long BgL_lenz00_2112;
if(
BGL_MMAPP(BgL_mmz00_1865))
{ /* Llib/mmap.scm 282 */
BgL_mmz00_2111 = BgL_mmz00_1865; }  else 
{ 
obj_t BgL_auxz00_2898;
BgL_auxz00_2898 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12402)), BGl_string2493z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1865); 
FAILURE(BgL_auxz00_2898,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 282 */
obj_t BgL_auxz00_2902;
if(
ELONGP(BgL_lenz00_1866))
{ /* Llib/mmap.scm 282 */
BgL_auxz00_2902 = BgL_lenz00_1866
; }  else 
{ 
obj_t BgL_auxz00_2905;
BgL_auxz00_2905 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12402)), BGl_string2493z00zz__mmapz00, BGl_string2462z00zz__mmapz00, BgL_lenz00_1866); 
FAILURE(BgL_auxz00_2905,BFALSE,BFALSE);} 
BgL_lenz00_2112 = 
BELONG_TO_LONG(BgL_auxz00_2902); } 
{ /* Llib/mmap.scm 282 */
long BgL_arg2024z00_2113;long BgL_arg2025z00_2114;
BgL_arg2024z00_2113 = 
BGL_MMAP_RP_GET(BgL_mmz00_2111); 
{ /* Llib/mmap.scm 282 */
long BgL_arg2027z00_2115;
BgL_arg2027z00_2115 = 
BGL_MMAP_RP_GET(BgL_mmz00_2111); 
BgL_arg2025z00_2114 = 
(BgL_arg2027z00_2115+BgL_lenz00_2112); } 
BgL_res2500z00_2116 = 
BGl_mmapzd2substringzd2zz__mmapz00(BgL_mmz00_2111, BgL_arg2024z00_2113, BgL_arg2025z00_2114); } } 
return BgL_res2500z00_2116;} } 
}



/* mmap-put-string! */
BGL_EXPORTED_DEF obj_t BGl_mmapzd2putzd2stringz12z12zz__mmapz00(obj_t BgL_mmz00_41, obj_t BgL_sz00_42)
{ AN_OBJECT;
{ /* Llib/mmap.scm 287 */
{ /* Llib/mmap.scm 288 */
long BgL_arg2028z00_2117;
BgL_arg2028z00_2117 = 
BGL_MMAP_WP_GET(BgL_mmz00_41); 
return 
BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_41, BgL_arg2028z00_2117, BgL_sz00_42);} } 
}



/* _mmap-put-string! */
obj_t BGl__mmapzd2putzd2stringz12z12zz__mmapz00(obj_t BgL_envz00_1867, obj_t BgL_mmz00_1868, obj_t BgL_sz00_1869)
{ AN_OBJECT;
{ /* Llib/mmap.scm 287 */
{ /* Llib/mmap.scm 288 */
obj_t BgL_mmz00_2118;obj_t BgL_sz00_2119;
if(
BGL_MMAPP(BgL_mmz00_1868))
{ /* Llib/mmap.scm 288 */
BgL_mmz00_2118 = BgL_mmz00_1868; }  else 
{ 
obj_t BgL_auxz00_2918;
BgL_auxz00_2918 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12718)), BGl_string2494z00zz__mmapz00, BGl_string2458z00zz__mmapz00, BgL_mmz00_1868); 
FAILURE(BgL_auxz00_2918,BFALSE,BFALSE);} 
if(
STRINGP(BgL_sz00_1869))
{ /* Llib/mmap.scm 288 */
BgL_sz00_2119 = BgL_sz00_1869; }  else 
{ 
obj_t BgL_auxz00_2924;
BgL_auxz00_2924 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2439z00zz__mmapz00, 
BINT(((long)12718)), BGl_string2494z00zz__mmapz00, BGl_string2452z00zz__mmapz00, BgL_sz00_1869); 
FAILURE(BgL_auxz00_2924,BFALSE,BFALSE);} 
{ /* Llib/mmap.scm 288 */
long BgL_arg2028z00_2120;
BgL_arg2028z00_2120 = 
BGL_MMAP_WP_GET(BgL_mmz00_2118); 
return 
BGl_mmapzd2substringzd2setz12z12zz__mmapz00(BgL_mmz00_2118, BgL_arg2028z00_2120, BgL_sz00_2119);} } } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__mmapz00()
{ AN_OBJECT;
{ /* Llib/mmap.scm 19 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__mmapz00()
{ AN_OBJECT;
{ /* Llib/mmap.scm 19 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__mmapz00()
{ AN_OBJECT;
{ /* Llib/mmap.scm 19 */
return 
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2495z00zz__mmapz00));} 
}

#ifdef __cplusplus
}
#endif
