/*===========================================================================*/
/*   (Llib/tvector.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -copt -fPIC -c Llib/tvector.scm -indent -o objs/obj_s/Llib/tvector.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
static obj_t BGl__tvectorzd2ze3vectorz31zz__tvectorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
static obj_t BGl__listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char *, obj_t, obj_t, obj_t);
static obj_t BGl_list2369z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_requirezd2initializa7ationz75zz__tvectorz00 = BUNSPEC;
static obj_t BGl_list2379z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_list2401z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_list2395z00zz__tvectorz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__tvectorz00();
static obj_t BGl__tvectorzf3zf3zz__tvectorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
extern obj_t create_struct(obj_t, int);
static obj_t BGl__tvectorzd2lengthzd2zz__tvectorz00(obj_t, obj_t);
extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__tvectorzd2idzd2zz__tvectorz00(obj_t, obj_t);
static obj_t BGl__vectorzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__tvectorz00();
static obj_t BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BUNSPEC;
static obj_t BGl__tvectorzd2refzd2zz__tvectorz00(obj_t, obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00();
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t get_tvector_descriptor(obj_t);
BGL_EXPORTED_DECL int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_symbol2351z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_toplevelzd2initzd2zz__tvectorz00();
static obj_t BGl_symbol2356z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2358z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2370z00zz__tvectorz00 = BUNSPEC;
extern long bgl_list_length(obj_t);
static obj_t BGl_symbol2372z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2374z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2380z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2382z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2384z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2386z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl__declarezd2tvectorz12zc0zz__tvectorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2402z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2404z00zz__tvectorz00 = BUNSPEC;
static obj_t BGl_symbol2396z00zz__tvectorz00 = BUNSPEC;
extern obj_t string_to_symbol(char *);
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
extern obj_t string_to_bstring(char *);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t);
extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
static obj_t BGl_methodzd2initzd2zz__tvectorz00();
static obj_t *__cnst;


DEFINE_STRING( BGl_string2365z00zz__tvectorz00, BgL_bgl_string2365za700za7za7_2409za7, "tvector-ref", 11 );
DEFINE_STRING( BGl_string2366z00zz__tvectorz00, BgL_bgl_string2366za700za7za7_2410za7, "_tvector-ref", 12 );
DEFINE_STRING( BGl_string2367z00zz__tvectorz00, BgL_bgl_string2367za700za7za7_2411za7, "list->tvector", 13 );
DEFINE_STRING( BGl_string2368z00zz__tvectorz00, BgL_bgl_string2368za700za7za7_2412za7, "list->tvector:Wrong number of arguments", 39 );
DEFINE_STRING( BGl_string2371z00zz__tvectorz00, BgL_bgl_string2371za700za7za7_2413za7, "funcall", 7 );
DEFINE_STRING( BGl_string2373z00zz__tvectorz00, BgL_bgl_string2373za700za7za7_2414za7, "allocate", 8 );
DEFINE_STRING( BGl_string2375z00zz__tvectorz00, BgL_bgl_string2375za700za7za7_2415za7, "len", 3 );
DEFINE_STRING( BGl_string2376z00zz__tvectorz00, BgL_bgl_string2376za700za7za7_2416za7, "loop", 4 );
DEFINE_STRING( BGl_string2377z00zz__tvectorz00, BgL_bgl_string2377za700za7za7_2417za7, "pair", 4 );
DEFINE_STRING( BGl_string2378z00zz__tvectorz00, BgL_bgl_string2378za700za7za7_2418za7, "loop:Wrong number of arguments", 30 );
DEFINE_STRING( BGl_string2381z00zz__tvectorz00, BgL_bgl_string2381za700za7za7_2419za7, "set", 3 );
DEFINE_STRING( BGl_string2383z00zz__tvectorz00, BgL_bgl_string2383za700za7za7_2420za7, "tvec", 4 );
DEFINE_STRING( BGl_string2385z00zz__tvectorz00, BgL_bgl_string2385za700za7za7_2421za7, "i", 1 );
DEFINE_STRING( BGl_string2387z00zz__tvectorz00, BgL_bgl_string2387za700za7za7_2422za7, "arg1935", 7 );
DEFINE_STRING( BGl_string2388z00zz__tvectorz00, BgL_bgl_string2388za700za7za7_2423za7, "Unable to convert to such tvector", 33 );
DEFINE_STRING( BGl_string2400z00zz__tvectorz00, BgL_bgl_string2400za700za7za7_2424za7, "tvector->vector", 15 );
DEFINE_STRING( BGl_string2390z00zz__tvectorz00, BgL_bgl_string2390za700za7za7_2425za7, "_list->tvector", 14 );
DEFINE_STRING( BGl_string2389z00zz__tvectorz00, BgL_bgl_string2389za700za7za7_2426za7, "Undeclared tvector", 18 );
DEFINE_STRING( BGl_string2391z00zz__tvectorz00, BgL_bgl_string2391za700za7za7_2427za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string2392z00zz__tvectorz00, BgL_bgl_string2392za700za7za7_2428za7, "vector->tvector", 15 );
DEFINE_STRING( BGl_string2403z00zz__tvectorz00, BgL_bgl_string2403za700za7za7_2429za7, "ref", 3 );
DEFINE_STRING( BGl_string2393z00zz__tvectorz00, BgL_bgl_string2393za700za7za7_2430za7, "vector->tvector:Wrong number of arguments", 41 );
DEFINE_STRING( BGl_string2394z00zz__tvectorz00, BgL_bgl_string2394za700za7za7_2431za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string2405z00zz__tvectorz00, BgL_bgl_string2405za700za7za7_2432za7, "tv", 2 );
DEFINE_STRING( BGl_string2406z00zz__tvectorz00, BgL_bgl_string2406za700za7za7_2433za7, "_tvector->vector", 16 );
DEFINE_STRING( BGl_string2407z00zz__tvectorz00, BgL_bgl_string2407za700za7za7_2434za7, "__tvector", 9 );
DEFINE_STRING( BGl_string2397z00zz__tvectorz00, BgL_bgl_string2397za700za7za7_2435za7, "arg1942", 7 );
DEFINE_STRING( BGl_string2398z00zz__tvectorz00, BgL_bgl_string2398za700za7za7_2436za7, "_vector->tvector", 16 );
DEFINE_STRING( BGl_string2399z00zz__tvectorz00, BgL_bgl_string2399za700za7za7_2437za7, "vector", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2tvectorzd2descriptorzd2envzd2zz__tvectorz00, BgL_bgl__getza7d2tvectorza7d2438z00, BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_listzd2ze3tvectorzd2envze3zz__tvectorz00, BgL_bgl__listza7d2za7e3tvect2439z00, BGl__listzd2ze3tvectorz31zz__tvectorz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_vectorzd2ze3tvectorzd2envze3zz__tvectorz00, BgL_bgl__vectorza7d2za7e3tve2440z00, BGl__vectorzd2ze3tvectorz31zz__tvectorz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2refzd2envz00zz__tvectorz00, BgL_bgl__tvectorza7d2refza7d2441z00, BGl__tvectorzd2refzd2zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2idzd2envz00zz__tvectorz00, BgL_bgl__tvectorza7d2idza7d22442z00, BGl__tvectorzd2idzd2zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzf3zd2envz21zz__tvectorz00, BgL_bgl__tvectorza7f3za7f3za7za72443z00, BGl__tvectorzf3zf3zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_declarezd2tvectorz12zd2envz12zz__tvectorz00, BgL_bgl__declareza7d2tvect2444za7, BGl__declarezd2tvectorz12zc0zz__tvectorz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2ze3vectorzd2envze3zz__tvectorz00, BgL_bgl__tvectorza7d2za7e3ve2445z00, BGl__tvectorzd2ze3vectorz31zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_tvectorzd2lengthzd2envz00zz__tvectorz00, BgL_bgl__tvectorza7d2lengt2446za7, BGl__tvectorzd2lengthzd2zz__tvectorz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2345z00zz__tvectorz00, BgL_bgl_string2345za700za7za7_2447za7, "/tmp/bigloo/runtime/Llib/tvector.scm", 36 );
DEFINE_STRING( BGl_string2346z00zz__tvectorz00, BgL_bgl_string2346za700za7za7_2448za7, "_tvector-length", 15 );
DEFINE_STRING( BGl_string2347z00zz__tvectorz00, BgL_bgl_string2347za700za7za7_2449za7, "tvector", 7 );
DEFINE_STRING( BGl_string2348z00zz__tvectorz00, BgL_bgl_string2348za700za7za7_2450za7, "tvector-id", 10 );
DEFINE_STRING( BGl_string2350z00zz__tvectorz00, BgL_bgl_string2350za700za7za7_2451za7, "symbol", 6 );
DEFINE_STRING( BGl_string2349z00zz__tvectorz00, BgL_bgl_string2349za700za7za7_2452za7, "struct", 6 );
DEFINE_STRING( BGl_string2352z00zz__tvectorz00, BgL_bgl_string2352za700za7za7_2453za7, "tvect-descr", 11 );
DEFINE_STRING( BGl_string2353z00zz__tvectorz00, BgL_bgl_string2353za700za7za7_2454za7, "struct-ref:not an instance of", 29 );
DEFINE_STRING( BGl_string2354z00zz__tvectorz00, BgL_bgl_string2354za700za7za7_2455za7, "_tvector-id", 11 );
DEFINE_STRING( BGl_string2355z00zz__tvectorz00, BgL_bgl_string2355za700za7za7_2456za7, "_get-tvector-descriptor", 23 );
DEFINE_STRING( BGl_string2357z00zz__tvectorz00, BgL_bgl_string2357za700za7za7_2457za7, "upcase", 6 );
DEFINE_STRING( BGl_string2360z00zz__tvectorz00, BgL_bgl_string2360za700za7za7_2458za7, "declare-tvector!", 16 );
DEFINE_STRING( BGl_string2359z00zz__tvectorz00, BgL_bgl_string2359za700za7za7_2459za7, "downcase", 8 );
DEFINE_STRING( BGl_string2361z00zz__tvectorz00, BgL_bgl_string2361za700za7za7_2460za7, "struct-set!:not an instance of", 30 );
DEFINE_STRING( BGl_string2362z00zz__tvectorz00, BgL_bgl_string2362za700za7za7_2461za7, "_declare-tvector!", 17 );
DEFINE_STRING( BGl_string2363z00zz__tvectorz00, BgL_bgl_string2363za700za7za7_2462za7, "string", 6 );
DEFINE_STRING( BGl_string2364z00zz__tvectorz00, BgL_bgl_string2364za700za7za7_2463za7, "procedure", 9 );



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long BgL_checksumz00_1842, char * BgL_fromz00_1843)
{ AN_OBJECT;
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__tvectorz00))
{ 
BGl_requirezd2initializa7ationz75zz__tvectorz00 = 
BBOOL(((bool_t)0)); 
BGl_cnstzd2initzd2zz__tvectorz00(); 
BGl_importedzd2moduleszd2initz00zz__tvectorz00(); 
BGl_toplevelzd2initzd2zz__tvectorz00(); 
return BUNSPEC;}  else 
{ 
return BUNSPEC;} } 
}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__tvectorz00()
{ AN_OBJECT;
{ /* Llib/tvector.scm 14 */
BGl_symbol2351z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2352z00zz__tvectorz00); 
BGl_symbol2356z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2357z00zz__tvectorz00); 
BGl_symbol2358z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2359z00zz__tvectorz00); 
BGl_symbol2370z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2371z00zz__tvectorz00); 
BGl_symbol2372z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2373z00zz__tvectorz00); 
BGl_symbol2374z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2375z00zz__tvectorz00); 
BGl_list2369z00zz__tvectorz00 = 
MAKE_PAIR(BGl_symbol2370z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2372z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2372z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2374z00zz__tvectorz00, BNIL)))); 
BGl_symbol2380z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2381z00zz__tvectorz00); 
BGl_symbol2382z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2383z00zz__tvectorz00); 
BGl_symbol2384z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2385z00zz__tvectorz00); 
BGl_symbol2386z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2387z00zz__tvectorz00); 
BGl_list2379z00zz__tvectorz00 = 
MAKE_PAIR(BGl_symbol2370z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2380z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2380z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2382z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2384z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2386z00zz__tvectorz00, BNIL)))))); 
BGl_symbol2396z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2397z00zz__tvectorz00); 
BGl_list2395z00zz__tvectorz00 = 
MAKE_PAIR(BGl_symbol2370z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2380z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2380z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2382z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2384z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2396z00zz__tvectorz00, BNIL)))))); 
BGl_symbol2402z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2403z00zz__tvectorz00); 
BGl_symbol2404z00zz__tvectorz00 = 
bstring_to_symbol(BGl_string2405z00zz__tvectorz00); 
return ( 
BGl_list2401z00zz__tvectorz00 = 
MAKE_PAIR(BGl_symbol2370z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2402z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2402z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2404z00zz__tvectorz00, 
MAKE_PAIR(BGl_symbol2384z00zz__tvectorz00, BNIL))))), BUNSPEC) ;} 
}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__tvectorz00()
{ AN_OBJECT;
{ /* Llib/tvector.scm 14 */
return ( 
BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BNIL, BUNSPEC) ;} 
}



/* tvector? */
BGL_EXPORTED_DEF bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t BgL_objz00_1)
{ AN_OBJECT;
{ /* Llib/tvector.scm 90 */
return 
TVECTORP(BgL_objz00_1);} 
}



/* _tvector? */
obj_t BGl__tvectorzf3zf3zz__tvectorz00(obj_t BgL_envz00_1712, obj_t BgL_objz00_1713)
{ AN_OBJECT;
{ /* Llib/tvector.scm 90 */
return 
BBOOL(
TVECTORP(BgL_objz00_1713));} 
}



/* tvector-length */
BGL_EXPORTED_DEF int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_objz00_2)
{ AN_OBJECT;
{ /* Llib/tvector.scm 96 */
return 
TVECTOR_LENGTH(BgL_objz00_2);} 
}



/* _tvector-length */
obj_t BGl__tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_envz00_1714, obj_t BgL_objz00_1715)
{ AN_OBJECT;
{ /* Llib/tvector.scm 96 */
{ /* Llib/tvector.scm 97 */
int BgL_auxz00_1888;
{ /* Llib/tvector.scm 97 */
obj_t BgL_objz00_1836;
if(
TVECTORP(BgL_objz00_1715))
{ /* Llib/tvector.scm 97 */
BgL_objz00_1836 = BgL_objz00_1715; }  else 
{ 
obj_t BgL_auxz00_1891;
BgL_auxz00_1891 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)3513)), BGl_string2346z00zz__tvectorz00, BGl_string2347z00zz__tvectorz00, BgL_objz00_1715); 
FAILURE(BgL_auxz00_1891,BFALSE,BFALSE);} 
BgL_auxz00_1888 = 
TVECTOR_LENGTH(BgL_objz00_1836); } 
return 
BINT(BgL_auxz00_1888);} } 
}



/* tvector-id */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t BgL_tvectz00_3)
{ AN_OBJECT;
{ /* Llib/tvector.scm 102 */
{ /* Llib/tvector.scm 103 */
obj_t BgL_arg1882z00_1319;
BgL_arg1882z00_1319 = 
TVECTOR_DESCR(BgL_tvectz00_3); 
{ /* Llib/tvector.scm 103 */
bool_t BgL_testz00_1898;
{ /* Llib/tvector.scm 103 */
obj_t BgL_auxz00_1899;
{ /* Llib/tvector.scm 103 */
obj_t BgL_res2216z00_1325;
{ /* Llib/tvector.scm 103 */
obj_t BgL_sz00_1324;
if(
STRUCTP(BgL_arg1882z00_1319))
{ /* Llib/tvector.scm 103 */
BgL_sz00_1324 = BgL_arg1882z00_1319; }  else 
{ 
obj_t BgL_auxz00_1902;
BgL_auxz00_1902 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)3805)), BGl_string2348z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_arg1882z00_1319); 
FAILURE(BgL_auxz00_1902,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 103 */
obj_t BgL_aux2263z00_1748;
BgL_aux2263z00_1748 = 
STRUCT_KEY(BgL_sz00_1324); 
if(
SYMBOLP(BgL_aux2263z00_1748))
{ /* Llib/tvector.scm 103 */
BgL_res2216z00_1325 = BgL_aux2263z00_1748; }  else 
{ 
obj_t BgL_auxz00_1909;
BgL_auxz00_1909 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)3805)), BGl_string2348z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2263z00_1748); 
FAILURE(BgL_auxz00_1909,BFALSE,BFALSE);} } } 
BgL_auxz00_1899 = BgL_res2216z00_1325; } 
BgL_testz00_1898 = 
(BgL_auxz00_1899==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_1898)
{ /* Llib/tvector.scm 103 */
int BgL_auxz00_1914;
BgL_auxz00_1914 = 
(int)(((long)0)); 
return 
STRUCT_REF(BgL_arg1882z00_1319, BgL_auxz00_1914);}  else 
{ /* Llib/tvector.scm 103 */
return 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_arg1882z00_1319);} } } } 
}



/* _tvector-id */
obj_t BGl__tvectorzd2idzd2zz__tvectorz00(obj_t BgL_envz00_1716, obj_t BgL_tvectz00_1717)
{ AN_OBJECT;
{ /* Llib/tvector.scm 102 */
{ /* Llib/tvector.scm 103 */
obj_t BgL_auxz00_1918;
if(
TVECTORP(BgL_tvectz00_1717))
{ /* Llib/tvector.scm 103 */
BgL_auxz00_1918 = BgL_tvectz00_1717
; }  else 
{ 
obj_t BgL_auxz00_1921;
BgL_auxz00_1921 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)3805)), BGl_string2354z00zz__tvectorz00, BGl_string2347z00zz__tvectorz00, BgL_tvectz00_1717); 
FAILURE(BgL_auxz00_1921,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2idzd2zz__tvectorz00(BgL_auxz00_1918);} } 
}



/* get-tvector-descriptor */
BGL_EXPORTED_DEF obj_t get_tvector_descriptor(obj_t BgL_idz00_22)
{ AN_OBJECT;
{ /* Llib/tvector.scm 125 */
if(
PAIRP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
{ /* Llib/tvector.scm 127 */
obj_t BgL_cellz00_809;
BgL_cellz00_809 = 
BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_22, BGl_za2tvectorzd2tableza2zd2zz__tvectorz00); 
if(
PAIRP(BgL_cellz00_809))
{ /* Llib/tvector.scm 128 */
return 
CDR(BgL_cellz00_809);}  else 
{ /* Llib/tvector.scm 128 */
return BFALSE;} }  else 
{ /* Llib/tvector.scm 126 */
return BFALSE;} } 
}



/* _get-tvector-descriptor */
obj_t BGl__getzd2tvectorzd2descriptorz00zz__tvectorz00(obj_t BgL_envz00_1718, obj_t BgL_idz00_1719)
{ AN_OBJECT;
{ /* Llib/tvector.scm 125 */
{ /* Llib/tvector.scm 126 */
obj_t BgL_auxz00_1932;
if(
SYMBOLP(BgL_idz00_1719))
{ /* Llib/tvector.scm 126 */
BgL_auxz00_1932 = BgL_idz00_1719
; }  else 
{ 
obj_t BgL_auxz00_1935;
BgL_auxz00_1935 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)5056)), BGl_string2355z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_idz00_1719); 
FAILURE(BgL_auxz00_1935,BFALSE,BFALSE);} 
return 
get_tvector_descriptor(BgL_auxz00_1932);} } 
}



/* declare-tvector! */
BGL_EXPORTED_DEF obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char * BgL_idz00_23, obj_t BgL_allocatez00_24, obj_t BgL_refz00_25, obj_t BgL_setz00_26)
{ AN_OBJECT;
{ /* Llib/tvector.scm 139 */
{ /* Llib/tvector.scm 140 */
obj_t BgL_idz00_811;
{ /* Llib/tvector.scm 140 */
obj_t BgL_arg1923z00_816;
{ /* Llib/tvector.scm 140 */
obj_t BgL_casezd2valuezd2_817;
BgL_casezd2valuezd2_817 = 
BGl_bigloozd2casezd2sensitivityz00zz__readerz00(); 
if(
(BgL_casezd2valuezd2_817==BGl_symbol2356z00zz__tvectorz00))
{ /* Llib/tvector.scm 140 */
BgL_arg1923z00_816 = 
BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(
string_to_bstring(BgL_idz00_23)); }  else 
{ /* Llib/tvector.scm 140 */
if(
(BgL_casezd2valuezd2_817==BGl_symbol2358z00zz__tvectorz00))
{ /* Llib/tvector.scm 140 */
BgL_arg1923z00_816 = 
BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(
string_to_bstring(BgL_idz00_23)); }  else 
{ /* Llib/tvector.scm 140 */
BgL_arg1923z00_816 = 
string_to_bstring(BgL_idz00_23); } } } 
BgL_idz00_811 = 
string_to_symbol(
BSTRING_TO_STRING(BgL_arg1923z00_816)); } 
{ /* Llib/tvector.scm 140 */
obj_t BgL_oldz00_812;
BgL_oldz00_812 = 
get_tvector_descriptor(BgL_idz00_811); 
{ /* Llib/tvector.scm 147 */

{ /* Llib/tvector.scm 148 */
bool_t BgL_testz00_1953;
if(
STRUCTP(BgL_oldz00_812))
{ /* Llib/tvector.scm 148 */
obj_t BgL_auxz00_1956;
{ /* Llib/tvector.scm 148 */
obj_t BgL_res2230z00_1415;
{ /* Llib/tvector.scm 148 */
obj_t BgL_aux2269z00_1754;
BgL_aux2269z00_1754 = 
STRUCT_KEY(BgL_oldz00_812); 
if(
SYMBOLP(BgL_aux2269z00_1754))
{ /* Llib/tvector.scm 148 */
BgL_res2230z00_1415 = BgL_aux2269z00_1754; }  else 
{ 
obj_t BgL_auxz00_1960;
BgL_auxz00_1960 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6031)), BGl_string2360z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2269z00_1754); 
FAILURE(BgL_auxz00_1960,BFALSE,BFALSE);} } 
BgL_auxz00_1956 = BgL_res2230z00_1415; } 
BgL_testz00_1953 = 
(BgL_auxz00_1956==BGl_symbol2351z00zz__tvectorz00); }  else 
{ /* Llib/tvector.scm 148 */
BgL_testz00_1953 = ((bool_t)0)
; } 
if(BgL_testz00_1953)
{ /* Llib/tvector.scm 148 */
return BgL_oldz00_812;}  else 
{ /* Llib/tvector.scm 149 */
obj_t BgL_newz00_814;
{ /* Llib/tvector.scm 149 */
obj_t BgL_newz00_1420;
BgL_newz00_1420 = 
create_struct(BGl_symbol2351z00zz__tvectorz00, 
(int)(((long)4))); 
{ /* Llib/tvector.scm 149 */
bool_t BgL_testz00_1967;
{ /* Llib/tvector.scm 149 */
obj_t BgL_auxz00_1968;
{ /* Llib/tvector.scm 149 */
obj_t BgL_res2231z00_1427;
{ /* Llib/tvector.scm 149 */
obj_t BgL_aux2271z00_1756;
BgL_aux2271z00_1756 = 
STRUCT_KEY(BgL_newz00_1420); 
if(
SYMBOLP(BgL_aux2271z00_1756))
{ /* Llib/tvector.scm 149 */
BgL_res2231z00_1427 = BgL_aux2271z00_1756; }  else 
{ 
obj_t BgL_auxz00_1972;
BgL_auxz00_1972 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6065)), BGl_string2360z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2271z00_1756); 
FAILURE(BgL_auxz00_1972,BFALSE,BFALSE);} } 
BgL_auxz00_1968 = BgL_res2231z00_1427; } 
BgL_testz00_1967 = 
(BgL_auxz00_1968==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_1967)
{ /* Llib/tvector.scm 149 */
int BgL_auxz00_1977;
BgL_auxz00_1977 = 
(int)(((long)3)); 
STRUCT_SET(BgL_newz00_1420, BgL_auxz00_1977, BgL_setz00_26); }  else 
{ /* Llib/tvector.scm 149 */
BGl_errorz00zz__errorz00(BGl_string2361z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_newz00_1420); } } 
{ /* Llib/tvector.scm 149 */
bool_t BgL_testz00_1981;
{ /* Llib/tvector.scm 149 */
obj_t BgL_auxz00_1982;
{ /* Llib/tvector.scm 149 */
obj_t BgL_res2232z00_1434;
{ /* Llib/tvector.scm 149 */
obj_t BgL_aux2273z00_1758;
BgL_aux2273z00_1758 = 
STRUCT_KEY(BgL_newz00_1420); 
if(
SYMBOLP(BgL_aux2273z00_1758))
{ /* Llib/tvector.scm 149 */
BgL_res2232z00_1434 = BgL_aux2273z00_1758; }  else 
{ 
obj_t BgL_auxz00_1986;
BgL_auxz00_1986 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6065)), BGl_string2360z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2273z00_1758); 
FAILURE(BgL_auxz00_1986,BFALSE,BFALSE);} } 
BgL_auxz00_1982 = BgL_res2232z00_1434; } 
BgL_testz00_1981 = 
(BgL_auxz00_1982==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_1981)
{ /* Llib/tvector.scm 149 */
int BgL_auxz00_1991;
BgL_auxz00_1991 = 
(int)(((long)2)); 
STRUCT_SET(BgL_newz00_1420, BgL_auxz00_1991, BgL_refz00_25); }  else 
{ /* Llib/tvector.scm 149 */
BGl_errorz00zz__errorz00(BGl_string2361z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_newz00_1420); } } 
{ /* Llib/tvector.scm 149 */
bool_t BgL_testz00_1995;
{ /* Llib/tvector.scm 149 */
obj_t BgL_auxz00_1996;
{ /* Llib/tvector.scm 149 */
obj_t BgL_res2233z00_1441;
{ /* Llib/tvector.scm 149 */
obj_t BgL_aux2275z00_1760;
BgL_aux2275z00_1760 = 
STRUCT_KEY(BgL_newz00_1420); 
if(
SYMBOLP(BgL_aux2275z00_1760))
{ /* Llib/tvector.scm 149 */
BgL_res2233z00_1441 = BgL_aux2275z00_1760; }  else 
{ 
obj_t BgL_auxz00_2000;
BgL_auxz00_2000 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6065)), BGl_string2360z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2275z00_1760); 
FAILURE(BgL_auxz00_2000,BFALSE,BFALSE);} } 
BgL_auxz00_1996 = BgL_res2233z00_1441; } 
BgL_testz00_1995 = 
(BgL_auxz00_1996==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_1995)
{ /* Llib/tvector.scm 149 */
int BgL_auxz00_2005;
BgL_auxz00_2005 = 
(int)(((long)1)); 
STRUCT_SET(BgL_newz00_1420, BgL_auxz00_2005, BgL_allocatez00_24); }  else 
{ /* Llib/tvector.scm 149 */
BGl_errorz00zz__errorz00(BGl_string2361z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_newz00_1420); } } 
{ /* Llib/tvector.scm 149 */
bool_t BgL_testz00_2009;
{ /* Llib/tvector.scm 149 */
obj_t BgL_auxz00_2010;
{ /* Llib/tvector.scm 149 */
obj_t BgL_res2234z00_1448;
{ /* Llib/tvector.scm 149 */
obj_t BgL_aux2277z00_1762;
BgL_aux2277z00_1762 = 
STRUCT_KEY(BgL_newz00_1420); 
if(
SYMBOLP(BgL_aux2277z00_1762))
{ /* Llib/tvector.scm 149 */
BgL_res2234z00_1448 = BgL_aux2277z00_1762; }  else 
{ 
obj_t BgL_auxz00_2014;
BgL_auxz00_2014 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6065)), BGl_string2360z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2277z00_1762); 
FAILURE(BgL_auxz00_2014,BFALSE,BFALSE);} } 
BgL_auxz00_2010 = BgL_res2234z00_1448; } 
BgL_testz00_2009 = 
(BgL_auxz00_2010==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2009)
{ /* Llib/tvector.scm 149 */
int BgL_auxz00_2019;
BgL_auxz00_2019 = 
(int)(((long)0)); 
STRUCT_SET(BgL_newz00_1420, BgL_auxz00_2019, BgL_idz00_811); }  else 
{ /* Llib/tvector.scm 149 */
BGl_errorz00zz__errorz00(BGl_string2361z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_newz00_1420); } } 
BgL_newz00_814 = BgL_newz00_1420; } 
{ /* Llib/tvector.scm 150 */
obj_t BgL_arg1922z00_815;
BgL_arg1922z00_815 = 
MAKE_PAIR(BgL_idz00_811, BgL_newz00_814); 
BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = 
MAKE_PAIR(BgL_arg1922z00_815, BGl_za2tvectorzd2tableza2zd2zz__tvectorz00); } 
return BgL_newz00_814;} } } } } } 
}



/* _declare-tvector! */
obj_t BGl__declarezd2tvectorz12zc0zz__tvectorz00(obj_t BgL_envz00_1720, obj_t BgL_idz00_1721, obj_t BgL_allocatez00_1722, obj_t BgL_refz00_1723, obj_t BgL_setz00_1724)
{ AN_OBJECT;
{ /* Llib/tvector.scm 139 */
{ /* Llib/tvector.scm 140 */
obj_t BgL_auxz00_2034;char * BgL_auxz00_2025;
if(
PROCEDUREP(BgL_allocatez00_1722))
{ /* Llib/tvector.scm 140 */
BgL_auxz00_2034 = BgL_allocatez00_1722
; }  else 
{ 
obj_t BgL_auxz00_2037;
BgL_auxz00_2037 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)5745)), BGl_string2362z00zz__tvectorz00, BGl_string2364z00zz__tvectorz00, BgL_allocatez00_1722); 
FAILURE(BgL_auxz00_2037,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 140 */
obj_t BgL_auxz00_2026;
if(
STRINGP(BgL_idz00_1721))
{ /* Llib/tvector.scm 140 */
BgL_auxz00_2026 = BgL_idz00_1721
; }  else 
{ 
obj_t BgL_auxz00_2029;
BgL_auxz00_2029 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)5745)), BGl_string2362z00zz__tvectorz00, BGl_string2363z00zz__tvectorz00, BgL_idz00_1721); 
FAILURE(BgL_auxz00_2029,BFALSE,BFALSE);} 
BgL_auxz00_2025 = 
BSTRING_TO_STRING(BgL_auxz00_2026); } 
return 
BGl_declarezd2tvectorz12zc0zz__tvectorz00(BgL_auxz00_2025, BgL_auxz00_2034, BgL_refz00_1723, BgL_setz00_1724);} } 
}



/* tvector-ref */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t BgL_tvectorz00_27)
{ AN_OBJECT;
{ /* Llib/tvector.scm 157 */
{ /* Llib/tvector.scm 158 */
obj_t BgL_arg1929z00_1449;
BgL_arg1929z00_1449 = 
TVECTOR_DESCR(BgL_tvectorz00_27); 
{ /* Llib/tvector.scm 158 */
bool_t BgL_testz00_2043;
{ /* Llib/tvector.scm 158 */
obj_t BgL_auxz00_2044;
{ /* Llib/tvector.scm 158 */
obj_t BgL_res2235z00_1455;
{ /* Llib/tvector.scm 158 */
obj_t BgL_sz00_1454;
if(
STRUCTP(BgL_arg1929z00_1449))
{ /* Llib/tvector.scm 158 */
BgL_sz00_1454 = BgL_arg1929z00_1449; }  else 
{ 
obj_t BgL_auxz00_2047;
BgL_auxz00_2047 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6466)), BGl_string2365z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_arg1929z00_1449); 
FAILURE(BgL_auxz00_2047,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 158 */
obj_t BgL_aux2285z00_1770;
BgL_aux2285z00_1770 = 
STRUCT_KEY(BgL_sz00_1454); 
if(
SYMBOLP(BgL_aux2285z00_1770))
{ /* Llib/tvector.scm 158 */
BgL_res2235z00_1455 = BgL_aux2285z00_1770; }  else 
{ 
obj_t BgL_auxz00_2054;
BgL_auxz00_2054 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6466)), BGl_string2365z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2285z00_1770); 
FAILURE(BgL_auxz00_2054,BFALSE,BFALSE);} } } 
BgL_auxz00_2044 = BgL_res2235z00_1455; } 
BgL_testz00_2043 = 
(BgL_auxz00_2044==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2043)
{ /* Llib/tvector.scm 158 */
int BgL_auxz00_2059;
BgL_auxz00_2059 = 
(int)(((long)2)); 
return 
STRUCT_REF(BgL_arg1929z00_1449, BgL_auxz00_2059);}  else 
{ /* Llib/tvector.scm 158 */
return 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_arg1929z00_1449);} } } } 
}



/* _tvector-ref */
obj_t BGl__tvectorzd2refzd2zz__tvectorz00(obj_t BgL_envz00_1725, obj_t BgL_tvectorz00_1726)
{ AN_OBJECT;
{ /* Llib/tvector.scm 157 */
{ /* Llib/tvector.scm 158 */
obj_t BgL_auxz00_2063;
if(
TVECTORP(BgL_tvectorz00_1726))
{ /* Llib/tvector.scm 158 */
BgL_auxz00_2063 = BgL_tvectorz00_1726
; }  else 
{ 
obj_t BgL_auxz00_2066;
BgL_auxz00_2066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6466)), BGl_string2366z00zz__tvectorz00, BGl_string2347z00zz__tvectorz00, BgL_tvectorz00_1726); 
FAILURE(BgL_auxz00_2066,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2refzd2zz__tvectorz00(BgL_auxz00_2063);} } 
}



/* list->tvector */
BGL_EXPORTED_DEF obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_idz00_28, obj_t BgL_lz00_29)
{ AN_OBJECT;
{ /* Llib/tvector.scm 163 */
{ /* Llib/tvector.scm 164 */
obj_t BgL_descrz00_823;
BgL_descrz00_823 = 
get_tvector_descriptor(BgL_idz00_28); 
if(
CBOOL(BgL_descrz00_823))
{ /* Llib/tvector.scm 167 */
obj_t BgL_allocatez00_824;obj_t BgL_setz00_825;
{ /* Llib/tvector.scm 167 */
bool_t BgL_testz00_2074;
{ /* Llib/tvector.scm 167 */
obj_t BgL_auxz00_2075;
{ /* Llib/tvector.scm 167 */
obj_t BgL_res2236z00_1461;
{ /* Llib/tvector.scm 167 */
obj_t BgL_sz00_1460;
if(
STRUCTP(BgL_descrz00_823))
{ /* Llib/tvector.scm 167 */
BgL_sz00_1460 = BgL_descrz00_823; }  else 
{ 
obj_t BgL_auxz00_2078;
BgL_auxz00_2078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6902)), BGl_string2367z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_823); 
FAILURE(BgL_auxz00_2078,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 167 */
obj_t BgL_aux2291z00_1776;
BgL_aux2291z00_1776 = 
STRUCT_KEY(BgL_sz00_1460); 
if(
SYMBOLP(BgL_aux2291z00_1776))
{ /* Llib/tvector.scm 167 */
BgL_res2236z00_1461 = BgL_aux2291z00_1776; }  else 
{ 
obj_t BgL_auxz00_2085;
BgL_auxz00_2085 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6902)), BGl_string2367z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2291z00_1776); 
FAILURE(BgL_auxz00_2085,BFALSE,BFALSE);} } } 
BgL_auxz00_2075 = BgL_res2236z00_1461; } 
BgL_testz00_2074 = 
(BgL_auxz00_2075==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2074)
{ /* Llib/tvector.scm 167 */
int BgL_auxz00_2090;
BgL_auxz00_2090 = 
(int)(((long)1)); 
BgL_allocatez00_824 = 
STRUCT_REF(BgL_descrz00_823, BgL_auxz00_2090); }  else 
{ /* Llib/tvector.scm 167 */
BgL_allocatez00_824 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_823); } } 
{ /* Llib/tvector.scm 168 */
bool_t BgL_testz00_2094;
{ /* Llib/tvector.scm 168 */
obj_t BgL_auxz00_2095;
{ /* Llib/tvector.scm 168 */
obj_t BgL_res2237z00_1467;
{ /* Llib/tvector.scm 168 */
obj_t BgL_sz00_1466;
if(
STRUCTP(BgL_descrz00_823))
{ /* Llib/tvector.scm 168 */
BgL_sz00_1466 = BgL_descrz00_823; }  else 
{ 
obj_t BgL_auxz00_2098;
BgL_auxz00_2098 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6944)), BGl_string2367z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_823); 
FAILURE(BgL_auxz00_2098,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 168 */
obj_t BgL_aux2295z00_1780;
BgL_aux2295z00_1780 = 
STRUCT_KEY(BgL_sz00_1466); 
if(
SYMBOLP(BgL_aux2295z00_1780))
{ /* Llib/tvector.scm 168 */
BgL_res2237z00_1467 = BgL_aux2295z00_1780; }  else 
{ 
obj_t BgL_auxz00_2105;
BgL_auxz00_2105 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6944)), BGl_string2367z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2295z00_1780); 
FAILURE(BgL_auxz00_2105,BFALSE,BFALSE);} } } 
BgL_auxz00_2095 = BgL_res2237z00_1467; } 
BgL_testz00_2094 = 
(BgL_auxz00_2095==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2094)
{ /* Llib/tvector.scm 168 */
int BgL_auxz00_2110;
BgL_auxz00_2110 = 
(int)(((long)3)); 
BgL_setz00_825 = 
STRUCT_REF(BgL_descrz00_823, BgL_auxz00_2110); }  else 
{ /* Llib/tvector.scm 168 */
BgL_setz00_825 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_823); } } 
if(
PROCEDUREP(BgL_setz00_825))
{ /* Llib/tvector.scm 173 */
long BgL_lenz00_827;
BgL_lenz00_827 = 
bgl_list_length(BgL_lz00_29); 
{ /* Llib/tvector.scm 173 */
obj_t BgL_tvecz00_828;
{ /* Llib/tvector.scm 174 */
obj_t BgL_funz00_1784;
if(
PROCEDUREP(BgL_allocatez00_824))
{ /* Llib/tvector.scm 174 */
BgL_funz00_1784 = BgL_allocatez00_824; }  else 
{ 
obj_t BgL_auxz00_2119;
BgL_auxz00_2119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7112)), BGl_string2367z00zz__tvectorz00, BGl_string2364z00zz__tvectorz00, BgL_allocatez00_824); 
FAILURE(BgL_auxz00_2119,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1784, ((long)1)))
{ /* Llib/tvector.scm 174 */
BgL_tvecz00_828 = 
PROCEDURE_ENTRY(BgL_funz00_1784)(BgL_allocatez00_824, 
BINT(BgL_lenz00_827), BEOA); }  else 
{ /* Llib/tvector.scm 174 */
FAILURE(BGl_string2368z00zz__tvectorz00,BGl_list2369z00zz__tvectorz00,BgL_funz00_1784);} } 
{ /* Llib/tvector.scm 174 */

{ 
obj_t BgL_lz00_830;long BgL_iz00_831;
BgL_lz00_830 = BgL_lz00_29; 
BgL_iz00_831 = ((long)0); 
BgL_zc3anonymousza31931ze3z83_832:
if(
NULLP(BgL_lz00_830))
{ /* Llib/tvector.scm 177 */
return BgL_tvecz00_828;}  else 
{ /* Llib/tvector.scm 177 */
{ /* Llib/tvector.scm 180 */
obj_t BgL_arg1935z00_834;
{ /* Llib/tvector.scm 180 */
obj_t BgL_pairz00_1470;
if(
PAIRP(BgL_lz00_830))
{ /* Llib/tvector.scm 180 */
BgL_pairz00_1470 = BgL_lz00_830; }  else 
{ 
obj_t BgL_auxz00_2133;
BgL_auxz00_2133 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7242)), BGl_string2376z00zz__tvectorz00, BGl_string2377z00zz__tvectorz00, BgL_lz00_830); 
FAILURE(BgL_auxz00_2133,BFALSE,BFALSE);} 
BgL_arg1935z00_834 = 
CAR(BgL_pairz00_1470); } 
{ /* Llib/tvector.scm 180 */
obj_t BgL_funz00_1789;
BgL_funz00_1789 = BgL_setz00_825; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1789, ((long)3)))
{ /* Llib/tvector.scm 180 */
PROCEDURE_ENTRY(BgL_funz00_1789)(BgL_setz00_825, BgL_tvecz00_828, 
BINT(BgL_iz00_831), BgL_arg1935z00_834, BEOA); }  else 
{ /* Llib/tvector.scm 180 */
FAILURE(BGl_string2378z00zz__tvectorz00,BGl_list2379z00zz__tvectorz00,BgL_funz00_1789);} } } 
{ 
long BgL_iz00_2146;obj_t BgL_lz00_2144;
BgL_lz00_2144 = 
CDR(BgL_lz00_830); 
BgL_iz00_2146 = 
(BgL_iz00_831+((long)1)); 
BgL_iz00_831 = BgL_iz00_2146; 
BgL_lz00_830 = BgL_lz00_2144; 
goto BgL_zc3anonymousza31931ze3z83_832;} } } } } }  else 
{ /* Llib/tvector.scm 169 */
return 
BGl_errorz00zz__errorz00(BGl_string2367z00zz__tvectorz00, BGl_string2388z00zz__tvectorz00, BgL_idz00_28);} }  else 
{ /* Llib/tvector.scm 165 */
return 
BGl_errorz00zz__errorz00(BGl_string2367z00zz__tvectorz00, BGl_string2389z00zz__tvectorz00, BgL_idz00_28);} } } 
}



/* _list->tvector */
obj_t BGl__listzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_envz00_1727, obj_t BgL_idz00_1728, obj_t BgL_lz00_1729)
{ AN_OBJECT;
{ /* Llib/tvector.scm 163 */
{ /* Llib/tvector.scm 164 */
obj_t BgL_auxz00_2157;obj_t BgL_auxz00_2150;
{ /* Llib/tvector.scm 164 */
bool_t BgL_testz00_2158;
if(
PAIRP(BgL_lz00_1729))
{ /* Llib/tvector.scm 164 */
BgL_testz00_2158 = ((bool_t)1)
; }  else 
{ /* Llib/tvector.scm 164 */
BgL_testz00_2158 = 
NULLP(BgL_lz00_1729)
; } 
if(BgL_testz00_2158)
{ /* Llib/tvector.scm 164 */
BgL_auxz00_2157 = BgL_lz00_1729
; }  else 
{ 
obj_t BgL_auxz00_2162;
BgL_auxz00_2162 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6767)), BGl_string2390z00zz__tvectorz00, BGl_string2391z00zz__tvectorz00, BgL_lz00_1729); 
FAILURE(BgL_auxz00_2162,BFALSE,BFALSE);} } 
if(
SYMBOLP(BgL_idz00_1728))
{ /* Llib/tvector.scm 164 */
BgL_auxz00_2150 = BgL_idz00_1728
; }  else 
{ 
obj_t BgL_auxz00_2153;
BgL_auxz00_2153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)6767)), BGl_string2390z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_idz00_1728); 
FAILURE(BgL_auxz00_2153,BFALSE,BFALSE);} 
return 
BGl_listzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2150, BgL_auxz00_2157);} } 
}



/* vector->tvector */
BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_idz00_30, obj_t BgL_vz00_31)
{ AN_OBJECT;
{ /* Llib/tvector.scm 186 */
{ /* Llib/tvector.scm 187 */
obj_t BgL_descrz00_838;
BgL_descrz00_838 = 
get_tvector_descriptor(BgL_idz00_30); 
if(
CBOOL(BgL_descrz00_838))
{ /* Llib/tvector.scm 190 */
obj_t BgL_allocatez00_839;obj_t BgL_setz00_840;
{ /* Llib/tvector.scm 190 */
bool_t BgL_testz00_2170;
{ /* Llib/tvector.scm 190 */
obj_t BgL_auxz00_2171;
{ /* Llib/tvector.scm 190 */
obj_t BgL_res2238z00_1479;
{ /* Llib/tvector.scm 190 */
obj_t BgL_sz00_1478;
if(
STRUCTP(BgL_descrz00_838))
{ /* Llib/tvector.scm 190 */
BgL_sz00_1478 = BgL_descrz00_838; }  else 
{ 
obj_t BgL_auxz00_2174;
BgL_auxz00_2174 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7699)), BGl_string2392z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_838); 
FAILURE(BgL_auxz00_2174,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 190 */
obj_t BgL_aux2313z00_1800;
BgL_aux2313z00_1800 = 
STRUCT_KEY(BgL_sz00_1478); 
if(
SYMBOLP(BgL_aux2313z00_1800))
{ /* Llib/tvector.scm 190 */
BgL_res2238z00_1479 = BgL_aux2313z00_1800; }  else 
{ 
obj_t BgL_auxz00_2181;
BgL_auxz00_2181 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7699)), BGl_string2392z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2313z00_1800); 
FAILURE(BgL_auxz00_2181,BFALSE,BFALSE);} } } 
BgL_auxz00_2171 = BgL_res2238z00_1479; } 
BgL_testz00_2170 = 
(BgL_auxz00_2171==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2170)
{ /* Llib/tvector.scm 190 */
int BgL_auxz00_2186;
BgL_auxz00_2186 = 
(int)(((long)1)); 
BgL_allocatez00_839 = 
STRUCT_REF(BgL_descrz00_838, BgL_auxz00_2186); }  else 
{ /* Llib/tvector.scm 190 */
BgL_allocatez00_839 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_838); } } 
{ /* Llib/tvector.scm 191 */
bool_t BgL_testz00_2190;
{ /* Llib/tvector.scm 191 */
obj_t BgL_auxz00_2191;
{ /* Llib/tvector.scm 191 */
obj_t BgL_res2239z00_1485;
{ /* Llib/tvector.scm 191 */
obj_t BgL_sz00_1484;
if(
STRUCTP(BgL_descrz00_838))
{ /* Llib/tvector.scm 191 */
BgL_sz00_1484 = BgL_descrz00_838; }  else 
{ 
obj_t BgL_auxz00_2194;
BgL_auxz00_2194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7741)), BGl_string2392z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_838); 
FAILURE(BgL_auxz00_2194,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 191 */
obj_t BgL_aux2317z00_1804;
BgL_aux2317z00_1804 = 
STRUCT_KEY(BgL_sz00_1484); 
if(
SYMBOLP(BgL_aux2317z00_1804))
{ /* Llib/tvector.scm 191 */
BgL_res2239z00_1485 = BgL_aux2317z00_1804; }  else 
{ 
obj_t BgL_auxz00_2201;
BgL_auxz00_2201 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7741)), BGl_string2392z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2317z00_1804); 
FAILURE(BgL_auxz00_2201,BFALSE,BFALSE);} } } 
BgL_auxz00_2191 = BgL_res2239z00_1485; } 
BgL_testz00_2190 = 
(BgL_auxz00_2191==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2190)
{ /* Llib/tvector.scm 191 */
int BgL_auxz00_2206;
BgL_auxz00_2206 = 
(int)(((long)3)); 
BgL_setz00_840 = 
STRUCT_REF(BgL_descrz00_838, BgL_auxz00_2206); }  else 
{ /* Llib/tvector.scm 191 */
BgL_setz00_840 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_838); } } 
if(
PROCEDUREP(BgL_setz00_840))
{ /* Llib/tvector.scm 196 */
int BgL_lenz00_842;
BgL_lenz00_842 = 
VECTOR_LENGTH(BgL_vz00_31); 
{ /* Llib/tvector.scm 196 */
obj_t BgL_tvecz00_843;
{ /* Llib/tvector.scm 197 */
obj_t BgL_funz00_1808;
if(
PROCEDUREP(BgL_allocatez00_839))
{ /* Llib/tvector.scm 197 */
BgL_funz00_1808 = BgL_allocatez00_839; }  else 
{ 
obj_t BgL_auxz00_2215;
BgL_auxz00_2215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7918)), BGl_string2392z00zz__tvectorz00, BGl_string2364z00zz__tvectorz00, BgL_allocatez00_839); 
FAILURE(BgL_auxz00_2215,BFALSE,BFALSE);} 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1808, ((long)1)))
{ /* Llib/tvector.scm 197 */
BgL_tvecz00_843 = 
PROCEDURE_ENTRY(BgL_funz00_1808)(BgL_allocatez00_839, 
BINT(BgL_lenz00_842), BEOA); }  else 
{ /* Llib/tvector.scm 197 */
FAILURE(BGl_string2393z00zz__tvectorz00,BGl_list2369z00zz__tvectorz00,BgL_funz00_1808);} } 
{ /* Llib/tvector.scm 197 */

{ /* Llib/tvector.scm 198 */
long BgL_g1825z00_844;
BgL_g1825z00_844 = 
(
(long)(BgL_lenz00_842)-((long)1)); 
{ 
long BgL_iz00_846;
BgL_iz00_846 = BgL_g1825z00_844; 
BgL_zc3anonymousza31940ze3z83_847:
if(
(BgL_iz00_846==((long)-1)))
{ /* Llib/tvector.scm 199 */
return BgL_tvecz00_843;}  else 
{ /* Llib/tvector.scm 199 */
{ /* Llib/tvector.scm 202 */
obj_t BgL_arg1942z00_849;
{ /* Llib/tvector.scm 202 */
int BgL_kz00_1493;
BgL_kz00_1493 = 
(int)(BgL_iz00_846); 
{ /* Llib/tvector.scm 202 */
int BgL_l2253z00_1737;
BgL_l2253z00_1737 = 
VECTOR_LENGTH(BgL_vz00_31); 
if(
BOUND_CHECK(BgL_kz00_1493, BgL_l2253z00_1737))
{ /* Llib/tvector.scm 202 */
BgL_arg1942z00_849 = 
VECTOR_REF(BgL_vz00_31,BgL_kz00_1493); }  else 
{ 
obj_t BgL_auxz00_2234;
BgL_auxz00_2234 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8038)), BGl_string2394z00zz__tvectorz00, 
BINT(BgL_kz00_1493), BgL_vz00_31); 
FAILURE(BgL_auxz00_2234,BFALSE,BFALSE);} } } 
{ /* Llib/tvector.scm 202 */
obj_t BgL_funz00_1811;
BgL_funz00_1811 = BgL_setz00_840; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1811, ((long)3)))
{ /* Llib/tvector.scm 202 */
PROCEDURE_ENTRY(BgL_funz00_1811)(BgL_setz00_840, BgL_tvecz00_843, 
BINT(BgL_iz00_846), BgL_arg1942z00_849, BEOA); }  else 
{ /* Llib/tvector.scm 202 */
FAILURE(BGl_string2378z00zz__tvectorz00,BGl_list2395z00zz__tvectorz00,BgL_funz00_1811);} } } 
{ 
long BgL_iz00_2245;
BgL_iz00_2245 = 
(BgL_iz00_846-((long)1)); 
BgL_iz00_846 = BgL_iz00_2245; 
goto BgL_zc3anonymousza31940ze3z83_847;} } } } } } }  else 
{ /* Llib/tvector.scm 192 */
return 
BGl_errorz00zz__errorz00(BGl_string2392z00zz__tvectorz00, BGl_string2388z00zz__tvectorz00, BgL_idz00_30);} }  else 
{ /* Llib/tvector.scm 188 */
return 
BGl_errorz00zz__errorz00(BGl_string2392z00zz__tvectorz00, BGl_string2389z00zz__tvectorz00, BgL_idz00_30);} } } 
}



/* _vector->tvector */
obj_t BGl__vectorzd2ze3tvectorz31zz__tvectorz00(obj_t BgL_envz00_1730, obj_t BgL_idz00_1731, obj_t BgL_vz00_1732)
{ AN_OBJECT;
{ /* Llib/tvector.scm 186 */
{ /* Llib/tvector.scm 187 */
obj_t BgL_auxz00_2256;obj_t BgL_auxz00_2249;
if(
VECTORP(BgL_vz00_1732))
{ /* Llib/tvector.scm 187 */
BgL_auxz00_2256 = BgL_vz00_1732
; }  else 
{ 
obj_t BgL_auxz00_2259;
BgL_auxz00_2259 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7562)), BGl_string2398z00zz__tvectorz00, BGl_string2399z00zz__tvectorz00, BgL_vz00_1732); 
FAILURE(BgL_auxz00_2259,BFALSE,BFALSE);} 
if(
SYMBOLP(BgL_idz00_1731))
{ /* Llib/tvector.scm 187 */
BgL_auxz00_2249 = BgL_idz00_1731
; }  else 
{ 
obj_t BgL_auxz00_2252;
BgL_auxz00_2252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)7562)), BGl_string2398z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_idz00_1731); 
FAILURE(BgL_auxz00_2252,BFALSE,BFALSE);} 
return 
BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2249, BgL_auxz00_2256);} } 
}



/* tvector->vector */
BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t BgL_tvz00_32)
{ AN_OBJECT;
{ /* Llib/tvector.scm 208 */
{ /* Llib/tvector.scm 209 */
obj_t BgL_descrz00_852;
BgL_descrz00_852 = 
TVECTOR_DESCR(BgL_tvz00_32); 
{ /* Llib/tvector.scm 210 */
obj_t BgL_allocatez00_853;obj_t BgL_refz00_854;
{ /* Llib/tvector.scm 210 */
bool_t BgL_testz00_2265;
{ /* Llib/tvector.scm 210 */
obj_t BgL_auxz00_2266;
{ /* Llib/tvector.scm 210 */
obj_t BgL_res2240z00_1501;
{ /* Llib/tvector.scm 210 */
obj_t BgL_sz00_1500;
if(
STRUCTP(BgL_descrz00_852))
{ /* Llib/tvector.scm 210 */
BgL_sz00_1500 = BgL_descrz00_852; }  else 
{ 
obj_t BgL_auxz00_2269;
BgL_auxz00_2269 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8412)), BGl_string2400z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_852); 
FAILURE(BgL_auxz00_2269,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 210 */
obj_t BgL_aux2331z00_1820;
BgL_aux2331z00_1820 = 
STRUCT_KEY(BgL_sz00_1500); 
if(
SYMBOLP(BgL_aux2331z00_1820))
{ /* Llib/tvector.scm 210 */
BgL_res2240z00_1501 = BgL_aux2331z00_1820; }  else 
{ 
obj_t BgL_auxz00_2276;
BgL_auxz00_2276 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8412)), BGl_string2400z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2331z00_1820); 
FAILURE(BgL_auxz00_2276,BFALSE,BFALSE);} } } 
BgL_auxz00_2266 = BgL_res2240z00_1501; } 
BgL_testz00_2265 = 
(BgL_auxz00_2266==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2265)
{ /* Llib/tvector.scm 210 */
int BgL_auxz00_2281;
BgL_auxz00_2281 = 
(int)(((long)1)); 
BgL_allocatez00_853 = 
STRUCT_REF(BgL_descrz00_852, BgL_auxz00_2281); }  else 
{ /* Llib/tvector.scm 210 */
BgL_allocatez00_853 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_852); } } 
{ /* Llib/tvector.scm 211 */
bool_t BgL_testz00_2285;
{ /* Llib/tvector.scm 211 */
obj_t BgL_auxz00_2286;
{ /* Llib/tvector.scm 211 */
obj_t BgL_res2241z00_1507;
{ /* Llib/tvector.scm 211 */
obj_t BgL_sz00_1506;
if(
STRUCTP(BgL_descrz00_852))
{ /* Llib/tvector.scm 211 */
BgL_sz00_1506 = BgL_descrz00_852; }  else 
{ 
obj_t BgL_auxz00_2289;
BgL_auxz00_2289 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8457)), BGl_string2400z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_descrz00_852); 
FAILURE(BgL_auxz00_2289,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 211 */
obj_t BgL_aux2335z00_1824;
BgL_aux2335z00_1824 = 
STRUCT_KEY(BgL_sz00_1506); 
if(
SYMBOLP(BgL_aux2335z00_1824))
{ /* Llib/tvector.scm 211 */
BgL_res2241z00_1507 = BgL_aux2335z00_1824; }  else 
{ 
obj_t BgL_auxz00_2296;
BgL_auxz00_2296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8457)), BGl_string2400z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2335z00_1824); 
FAILURE(BgL_auxz00_2296,BFALSE,BFALSE);} } } 
BgL_auxz00_2286 = BgL_res2241z00_1507; } 
BgL_testz00_2285 = 
(BgL_auxz00_2286==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2285)
{ /* Llib/tvector.scm 211 */
int BgL_auxz00_2301;
BgL_auxz00_2301 = 
(int)(((long)2)); 
BgL_refz00_854 = 
STRUCT_REF(BgL_descrz00_852, BgL_auxz00_2301); }  else 
{ /* Llib/tvector.scm 211 */
BgL_refz00_854 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_descrz00_852); } } 
if(
PROCEDUREP(BgL_refz00_854))
{ /* Llib/tvector.scm 216 */
int BgL_lenz00_856;
BgL_lenz00_856 = 
TVECTOR_LENGTH(BgL_tvz00_32); 
{ /* Llib/tvector.scm 216 */
obj_t BgL_vecz00_857;
BgL_vecz00_857 = 
create_vector(BgL_lenz00_856); 
{ /* Llib/tvector.scm 217 */

{ /* Llib/tvector.scm 218 */
long BgL_g1826z00_858;
BgL_g1826z00_858 = 
(
(long)(BgL_lenz00_856)-((long)1)); 
{ 
long BgL_iz00_860;
BgL_iz00_860 = BgL_g1826z00_858; 
BgL_zc3anonymousza31945ze3z83_861:
if(
(BgL_iz00_860==((long)-1)))
{ /* Llib/tvector.scm 219 */
return BgL_vecz00_857;}  else 
{ /* Llib/tvector.scm 219 */
{ /* Llib/tvector.scm 222 */
obj_t BgL_arg1948z00_863;
{ /* Llib/tvector.scm 222 */
obj_t BgL_funz00_1826;
BgL_funz00_1826 = BgL_refz00_854; 
if(
PROCEDURE_CORRECT_ARITYP(BgL_funz00_1826, ((long)2)))
{ /* Llib/tvector.scm 222 */
BgL_arg1948z00_863 = 
PROCEDURE_ENTRY(BgL_funz00_1826)(BgL_refz00_854, BgL_tvz00_32, 
BINT(BgL_iz00_860), BEOA); }  else 
{ /* Llib/tvector.scm 222 */
FAILURE(BGl_string2378z00zz__tvectorz00,BGl_list2401z00zz__tvectorz00,BgL_funz00_1826);} } 
{ /* Llib/tvector.scm 222 */
int BgL_kz00_1515;
BgL_kz00_1515 = 
(int)(BgL_iz00_860); 
{ /* Llib/tvector.scm 222 */
int BgL_l2257z00_1741;
BgL_l2257z00_1741 = 
VECTOR_LENGTH(BgL_vecz00_857); 
if(
BOUND_CHECK(BgL_kz00_1515, BgL_l2257z00_1741))
{ /* Llib/tvector.scm 222 */
VECTOR_SET(BgL_vecz00_857,BgL_kz00_1515,BgL_arg1948z00_863); }  else 
{ 
obj_t BgL_auxz00_2324;
BgL_auxz00_2324 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8767)), BGl_string2394z00zz__tvectorz00, 
BINT(BgL_kz00_1515), BgL_vecz00_857); 
FAILURE(BgL_auxz00_2324,BFALSE,BFALSE);} } } } 
{ 
long BgL_iz00_2329;
BgL_iz00_2329 = 
(BgL_iz00_860-((long)1)); 
BgL_iz00_860 = BgL_iz00_2329; 
goto BgL_zc3anonymousza31945ze3z83_861;} } } } } } }  else 
{ /* Llib/tvector.scm 213 */
obj_t BgL_arg1952z00_868;
{ /* Llib/tvector.scm 215 */
obj_t BgL_arg1882z00_1520;
BgL_arg1882z00_1520 = 
TVECTOR_DESCR(BgL_tvz00_32); 
{ /* Llib/tvector.scm 215 */
bool_t BgL_testz00_2332;
{ /* Llib/tvector.scm 215 */
obj_t BgL_auxz00_2333;
{ /* Llib/tvector.scm 215 */
obj_t BgL_res2242z00_1526;
{ /* Llib/tvector.scm 215 */
obj_t BgL_sz00_1525;
if(
STRUCTP(BgL_arg1882z00_1520))
{ /* Llib/tvector.scm 215 */
BgL_sz00_1525 = BgL_arg1882z00_1520; }  else 
{ 
obj_t BgL_auxz00_2336;
BgL_auxz00_2336 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8591)), BGl_string2400z00zz__tvectorz00, BGl_string2349z00zz__tvectorz00, BgL_arg1882z00_1520); 
FAILURE(BgL_auxz00_2336,BFALSE,BFALSE);} 
{ /* Llib/tvector.scm 215 */
obj_t BgL_aux2341z00_1831;
BgL_aux2341z00_1831 = 
STRUCT_KEY(BgL_sz00_1525); 
if(
SYMBOLP(BgL_aux2341z00_1831))
{ /* Llib/tvector.scm 215 */
BgL_res2242z00_1526 = BgL_aux2341z00_1831; }  else 
{ 
obj_t BgL_auxz00_2343;
BgL_auxz00_2343 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8591)), BGl_string2400z00zz__tvectorz00, BGl_string2350z00zz__tvectorz00, BgL_aux2341z00_1831); 
FAILURE(BgL_auxz00_2343,BFALSE,BFALSE);} } } 
BgL_auxz00_2333 = BgL_res2242z00_1526; } 
BgL_testz00_2332 = 
(BgL_auxz00_2333==BGl_symbol2351z00zz__tvectorz00); } 
if(BgL_testz00_2332)
{ /* Llib/tvector.scm 215 */
int BgL_auxz00_2348;
BgL_auxz00_2348 = 
(int)(((long)0)); 
BgL_arg1952z00_868 = 
STRUCT_REF(BgL_arg1882z00_1520, BgL_auxz00_2348); }  else 
{ /* Llib/tvector.scm 215 */
BgL_arg1952z00_868 = 
BGl_errorz00zz__errorz00(BGl_string2353z00zz__tvectorz00, BGl_string2352z00zz__tvectorz00, BgL_arg1882z00_1520); } } } 
return 
BGl_errorz00zz__errorz00(BGl_string2400z00zz__tvectorz00, BGl_string2388z00zz__tvectorz00, BgL_arg1952z00_868);} } } } 
}



/* _tvector->vector */
obj_t BGl__tvectorzd2ze3vectorz31zz__tvectorz00(obj_t BgL_envz00_1733, obj_t BgL_tvz00_1734)
{ AN_OBJECT;
{ /* Llib/tvector.scm 208 */
{ /* Llib/tvector.scm 209 */
obj_t BgL_auxz00_2353;
if(
TVECTORP(BgL_tvz00_1734))
{ /* Llib/tvector.scm 209 */
BgL_auxz00_2353 = BgL_tvz00_1734
; }  else 
{ 
obj_t BgL_auxz00_2356;
BgL_auxz00_2356 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2345z00zz__tvectorz00, 
BINT(((long)8355)), BGl_string2406z00zz__tvectorz00, BGl_string2347z00zz__tvectorz00, BgL_tvz00_1734); 
FAILURE(BgL_auxz00_2356,BFALSE,BFALSE);} 
return 
BGl_tvectorzd2ze3vectorz31zz__tvectorz00(BgL_auxz00_2353);} } 
}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__tvectorz00()
{ AN_OBJECT;
{ /* Llib/tvector.scm 14 */
return BUNSPEC;} 
}



/* method-init */
obj_t BGl_methodzd2initzd2zz__tvectorz00()
{ AN_OBJECT;
{ /* Llib/tvector.scm 14 */
return BUNSPEC;} 
}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00()
{ AN_OBJECT;
{ /* Llib/tvector.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)454672500), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__hashz00(((long)81619416), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__readerz00(((long)32372471), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)327583589), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__bexitz00(((long)3491337), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__bignumz00(((long)318625392), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)235939793), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)500588328), 
BSTRING_TO_STRING(BGl_string2407z00zz__tvectorz00));} 
}

#ifdef __cplusplus
}
#endif
