/*===========================================================================*/
/*   (Rgc/rgctree.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgctree.scm -indent -o objs/obj_u/Rgc/rgctree.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2302z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2303z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2306z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2299z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2311z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2314z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl__printzd2followposzd2zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_list2315z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2318z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2321z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2324z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2327z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2331z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2334z00zz__rgc_treez00 = BUNSPEC;
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_list2337z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2340z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_list2341z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_treez00();
	static obj_t BGl__resetzd2treez12zc0zz__rgc_treez00(obj_t);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_sequence2zd2ze3nodez31zz__rgc_treez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_treez00();
	static obj_t BGl_sequencezd2ze3nodez31zz__rgc_treez00(obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_treez00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_initzd2followposz12zc0zz__rgc_treez00();
	static obj_t BGl_treezd2ze3nodez31zz__rgc_treez00(obj_t);
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_symbol2279z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2281z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2283z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2285z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2287z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2300z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2289z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2291z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2304z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2307z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2309z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2312z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2316z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2319z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2322z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2325z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2328z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2332z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2335z00zz__rgc_treez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	static obj_t BGl_symbol2338z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl__printzd2nodezd2zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_symbol2342z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_symbol2345z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_treez00();
	static obj_t BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_initzd2positionsz12zc0zz__rgc_treez00();
	static obj_t BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_za2zd2ze3nodez93zz__rgc_treez00(obj_t);
	extern obj_t make_vector(int, obj_t);
	static obj_t BGl_integerzd2ze3nodez31zz__rgc_treez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t);
	static obj_t BGl_binaryzd2ze3nodez31zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza31955ze3z83zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_loopz00zz__rgc_treez00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t, obj_t);
	extern obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	static obj_t BGl_or2zd2ze3nodez31zz__rgc_treez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printzd2nodezd2zz__rgc_treez00(obj_t);
	static long BGl_loopz72z72zz__rgc_treez00(obj_t, long);
	static long BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00(obj_t);
	static obj_t BGl_zc3anonymousza31964ze3z83zz__rgc_treez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2treez12zc0zz__rgc_treez00();
	BGL_EXPORTED_DECL obj_t BGl_printzd2followposzd2zz__rgc_treez00(obj_t);
	static obj_t BGl_submatchzd2ze3nodez31zz__rgc_treez00(obj_t);
	static obj_t BGl_zc3anonymousza31974ze3z83zz__rgc_treez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31976ze3z83zz__rgc_treez00(obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_orzd2ze3nodez31zz__rgc_treez00(obj_t);
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__rgc_treez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2followposzd2envz00zz__rgc_treez00,
		BgL_bgl__printza7d2followp2348za7, BGl__printzd2followposzd2zz__rgc_treez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regularzd2treezd2ze3nodezd2envz31zz__rgc_treez00,
		BgL_bgl__regularza7d2treeza72349z00,
		BGl__regularzd2treezd2ze3nodeze3zz__rgc_treez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2nodezd2envz00zz__rgc_treez00,
		BgL_bgl__printza7d2nodeza7d22350z00, BGl__printzd2nodezd2zz__rgc_treez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2295z00zz__rgc_treez00,
		BgL_bgl_or2za7d2za7e3nodeza7312351za7, BGl_or2zd2ze3nodez31zz__rgc_treez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2296z00zz__rgc_treez00,
		BgL_bgl_sequence2za7d2za7e3n2352z00,
		BGl_sequence2zd2ze3nodez31zz__rgc_treez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2treez12zd2envz12zz__rgc_treez00,
		BgL_bgl__resetza7d2treeza7122353z00, BGl__resetzd2treez12zc0zz__rgc_treez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2280z00zz__rgc_treez00,
		BgL_bgl_string2280za700za7za7_2354za7, "epsilon", 7);
	      DEFINE_STRING(BGl_string2282z00zz__rgc_treez00,
		BgL_bgl_string2282za700za7za7_2355za7, "node", 4);
	      DEFINE_STRING(BGl_string2284z00zz__rgc_treez00,
		BgL_bgl_string2284za700za7za7_2356za7, "or", 2);
	      DEFINE_STRING(BGl_string2286z00zz__rgc_treez00,
		BgL_bgl_string2286za700za7za7_2357za7, "sequence", 8);
	      DEFINE_STRING(BGl_string2288z00zz__rgc_treez00,
		BgL_bgl_string2288za700za7za7_2358za7, "*", 1);
	      DEFINE_STRING(BGl_string2290z00zz__rgc_treez00,
		BgL_bgl_string2290za700za7za7_2359za7, "submatch", 8);
	      DEFINE_STRING(BGl_string2301z00zz__rgc_treez00,
		BgL_bgl_string2301za700za7za7_2360za7, "let", 3);
	      DEFINE_STRING(BGl_string2292z00zz__rgc_treez00,
		BgL_bgl_string2292za700za7za7_2361za7, "bol", 3);
	      DEFINE_STRING(BGl_string2293z00zz__rgc_treez00,
		BgL_bgl_string2293za700za7za7_2362za7, "RGC:Unknown function", 20);
	      DEFINE_STRING(BGl_string2294z00zz__rgc_treez00,
		BgL_bgl_string2294za700za7za7_2363za7, "RGC:Illegal tree", 16);
	      DEFINE_STRING(BGl_string2305z00zz__rgc_treez00,
		BgL_bgl_string2305za700za7za7_2364za7, "sz", 2);
	      DEFINE_STRING(BGl_string2297z00zz__rgc_treez00,
		BgL_bgl_string2297za700za7za7_2365za7,
		"========= FOLLOWPOS ==============================", 50);
	      DEFINE_STRING(BGl_string2308z00zz__rgc_treez00,
		BgL_bgl_string2308za700za7za7_2366za7, "vector-length", 13);
	      DEFINE_STRING(BGl_string2298z00zz__rgc_treez00,
		BgL_bgl_string2298za700za7za7_2367za7, "number of pos: ", 15);
	      DEFINE_STRING(BGl_string2310z00zz__rgc_treez00,
		BgL_bgl_string2310za700za7za7_2368za7, "fp", 2);
	      DEFINE_STRING(BGl_string2313z00zz__rgc_treez00,
		BgL_bgl_string2313za700za7za7_2369za7, "loop", 4);
	      DEFINE_STRING(BGl_string2317z00zz__rgc_treez00,
		BgL_bgl_string2317za700za7za7_2370za7, "i", 1);
	      DEFINE_STRING(BGl_string2320z00zz__rgc_treez00,
		BgL_bgl_string2320za700za7za7_2371za7, "if", 2);
	      DEFINE_STRING(BGl_string2323z00zz__rgc_treez00,
		BgL_bgl_string2323za700za7za7_2372za7, "<fx", 3);
	      DEFINE_STRING(BGl_string2326z00zz__rgc_treez00,
		BgL_bgl_string2326za700za7za7_2373za7, "begin", 5);
	      DEFINE_STRING(BGl_string2330z00zz__rgc_treez00,
		BgL_bgl_string2330za700za7za7_2374za7, ": ", 2);
	      DEFINE_STRING(BGl_string2329z00zz__rgc_treez00,
		BgL_bgl_string2329za700za7za7_2375za7, "print", 5);
	      DEFINE_STRING(BGl_string2333z00zz__rgc_treez00,
		BgL_bgl_string2333za700za7za7_2376za7, "reverse", 7);
	      DEFINE_STRING(BGl_string2336z00zz__rgc_treez00,
		BgL_bgl_string2336za700za7za7_2377za7, "rgcset->list", 12);
	      DEFINE_STRING(BGl_string2339z00zz__rgc_treez00,
		BgL_bgl_string2339za700za7za7_2378za7, "vector-ref", 10);
	      DEFINE_STRING(BGl_string2343z00zz__rgc_treez00,
		BgL_bgl_string2343za700za7za7_2379za7, "+fx", 3);
	      DEFINE_STRING(BGl_string2344z00zz__rgc_treez00,
		BgL_bgl_string2344za700za7za7_2380za7,
		"==================================================", 50);
	      DEFINE_STRING(BGl_string2346z00zz__rgc_treez00,
		BgL_bgl_string2346za700za7za7_2381za7, "blop", 4);
	      DEFINE_STRING(BGl_string2347z00zz__rgc_treez00,
		BgL_bgl_string2347za700za7za7_2382za7, "__rgc_tree", 10);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_treez00(long
		BgL_checksumz00_2036, char *BgL_fromz00_2037)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_treez00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_treez00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_treez00();
					BGl_importedzd2moduleszd2initz00zz__rgc_treez00();
					BGl_toplevelzd2initzd2zz__rgc_treez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 14 */
			BGl_symbol2279z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2280z00zz__rgc_treez00);
			BGl_symbol2281z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2282z00zz__rgc_treez00);
			BGl_symbol2283z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2284z00zz__rgc_treez00);
			BGl_symbol2285z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2286z00zz__rgc_treez00);
			BGl_symbol2287z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2288z00zz__rgc_treez00);
			BGl_symbol2289z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2290z00zz__rgc_treez00);
			BGl_symbol2291z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2292z00zz__rgc_treez00);
			BGl_symbol2300z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2301z00zz__rgc_treez00);
			BGl_symbol2304z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2305z00zz__rgc_treez00);
			BGl_symbol2307z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2308z00zz__rgc_treez00);
			BGl_symbol2309z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2310z00zz__rgc_treez00);
			BGl_list2306z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2307z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2309z00zz__rgc_treez00, BNIL));
			BGl_list2303z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2304z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2306z00zz__rgc_treez00, BNIL));
			BGl_list2302z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_list2303z00zz__rgc_treez00, BNIL);
			BGl_symbol2312z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2313z00zz__rgc_treez00);
			BGl_symbol2316z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2317z00zz__rgc_treez00);
			BGl_list2315z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2316z00zz__rgc_treez00,
				MAKE_PAIR(BINT(((long) 0)), BNIL));
			BGl_list2314z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_list2315z00zz__rgc_treez00, BNIL);
			BGl_symbol2319z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2320z00zz__rgc_treez00);
			BGl_symbol2322z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2323z00zz__rgc_treez00);
			BGl_list2321z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2322z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2316z00zz__rgc_treez00,
					MAKE_PAIR(BGl_symbol2304z00zz__rgc_treez00, BNIL)));
			BGl_symbol2325z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2326z00zz__rgc_treez00);
			BGl_symbol2328z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2329z00zz__rgc_treez00);
			BGl_symbol2332z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2333z00zz__rgc_treez00);
			BGl_symbol2335z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2336z00zz__rgc_treez00);
			BGl_symbol2338z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2339z00zz__rgc_treez00);
			BGl_list2337z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2338z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2309z00zz__rgc_treez00,
					MAKE_PAIR(BGl_symbol2316z00zz__rgc_treez00, BNIL)));
			BGl_list2334z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2335z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2337z00zz__rgc_treez00, BNIL));
			BGl_list2331z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2332z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2334z00zz__rgc_treez00, BNIL));
			BGl_list2327z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2328z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2316z00zz__rgc_treez00,
					MAKE_PAIR(BGl_string2330z00zz__rgc_treez00,
						MAKE_PAIR(BGl_list2331z00zz__rgc_treez00, BNIL))));
			BGl_symbol2342z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2343z00zz__rgc_treez00);
			BGl_list2341z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2342z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2316z00zz__rgc_treez00,
					MAKE_PAIR(BINT(((long) 1)), BNIL)));
			BGl_list2340z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2312z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2341z00zz__rgc_treez00, BNIL));
			BGl_list2324z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2325z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2327z00zz__rgc_treez00,
					MAKE_PAIR(BGl_list2340z00zz__rgc_treez00, BNIL)));
			BGl_list2318z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2319z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2321z00zz__rgc_treez00,
					MAKE_PAIR(BGl_list2324z00zz__rgc_treez00, BNIL)));
			BGl_list2311z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2300z00zz__rgc_treez00,
				MAKE_PAIR(BGl_symbol2312z00zz__rgc_treez00,
					MAKE_PAIR(BGl_list2314z00zz__rgc_treez00,
						MAKE_PAIR(BGl_list2318z00zz__rgc_treez00, BNIL))));
			BGl_list2299z00zz__rgc_treez00 =
				MAKE_PAIR(BGl_symbol2300z00zz__rgc_treez00,
				MAKE_PAIR(BGl_list2302z00zz__rgc_treez00,
					MAKE_PAIR(BGl_list2311z00zz__rgc_treez00, BNIL)));
			return (BGl_symbol2345z00zz__rgc_treez00 =
				bstring_to_symbol(BGl_string2346z00zz__rgc_treez00), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 14 */
			BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC;
			BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BUNSPEC;
			return (BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC, BUNSPEC);
		}
	}



/* regular-tree->node */
	BGL_EXPORTED_DEF obj_t BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t
		BgL_treez00_15)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 56 */
			BGl_za2positionzd2numberza2zd2zz__rgc_treez00 =
				BINT(BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00
				(BgL_treez00_15));
			BGl_initzd2positionsz12zc0zz__rgc_treez00();
			BGl_initzd2followposz12zc0zz__rgc_treez00();
			{	/* Rgc/rgctree.scm 64 */
				obj_t BgL_treez00_814;

				BgL_treez00_814 = BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_treez00_15);
				{	/* Rgc/rgctree.scm 66 */
					obj_t BgL_val1_1851z00_816;

					obj_t BgL_val2_1852z00_817;

					obj_t BgL_val3_1853z00_818;

					BgL_val1_1851z00_816 = BGl_za2followposza2z00zz__rgc_treez00;
					BgL_val2_1852z00_817 = BGl_za2positionsza2z00zz__rgc_treez00;
					BgL_val3_1853z00_818 = BGl_za2submatchesza2z00zz__rgc_treez00;
					{	/* Rgc/rgctree.scm 66 */
						int BgL_auxz00_2113;

						BgL_auxz00_2113 = (int) (((long) 4));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_2113);
					}
					{	/* Rgc/rgctree.scm 66 */
						int BgL_auxz00_2116;

						BgL_auxz00_2116 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_2116, BgL_val1_1851z00_816);
					}
					{	/* Rgc/rgctree.scm 66 */
						int BgL_auxz00_2119;

						BgL_auxz00_2119 = (int) (((long) 2));
						BGL_MVALUES_VAL_SET(BgL_auxz00_2119, BgL_val2_1852z00_817);
					}
					{	/* Rgc/rgctree.scm 66 */
						int BgL_auxz00_2122;

						BgL_auxz00_2122 = (int) (((long) 3));
						BGL_MVALUES_VAL_SET(BgL_auxz00_2122, BgL_val3_1853z00_818);
					}
					return BgL_treez00_814;
				}
			}
		}
	}



/* _regular-tree->node */
	obj_t BGl__regularzd2treezd2ze3nodeze3zz__rgc_treez00(obj_t BgL_envz00_1998,
		obj_t BgL_treez00_1999)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 56 */
			return BGl_regularzd2treezd2ze3nodeze3zz__rgc_treez00(BgL_treez00_1999);
		}
	}



/* regular-tree-position-number */
	long BGl_regularzd2treezd2positionzd2numberzd2zz__rgc_treez00(obj_t
		BgL_treez00_16)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 82 */
			return BGl_loopz72z72zz__rgc_treez00(BgL_treez00_16, ((long) 0));
		}
	}



/* loop' */
	long BGl_loopz72z72zz__rgc_treez00(obj_t BgL_treez00_820, long BgL_numz00_821)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 83 */
		BGl_loopz72z72zz__rgc_treez00:
			if (NULLP(BgL_treez00_820))
				{	/* Rgc/rgctree.scm 86 */
					return BgL_numz00_821;
				}
			else
				{	/* Rgc/rgctree.scm 88 */
					bool_t BgL_testz00_2129;

					{	/* Rgc/rgctree.scm 88 */
						obj_t BgL_auxz00_2130;

						BgL_auxz00_2130 = CAR(BgL_treez00_820);
						BgL_testz00_2129 = PAIRP(BgL_auxz00_2130);
					}
					if (BgL_testz00_2129)
						{
							long BgL_numz00_2135;

							obj_t BgL_treez00_2133;

							BgL_treez00_2133 = CDR(BgL_treez00_820);
							BgL_numz00_2135 =
								BGl_loopz72z72zz__rgc_treez00(CAR(BgL_treez00_820),
								BgL_numz00_821);
							BgL_numz00_821 = BgL_numz00_2135;
							BgL_treez00_820 = BgL_treez00_2133;
							goto BGl_loopz72z72zz__rgc_treez00;
						}
					else
						{	/* Rgc/rgctree.scm 88 */
							if (INTEGERP(CAR(BgL_treez00_820)))
								{
									long BgL_numz00_2143;

									obj_t BgL_treez00_2141;

									BgL_treez00_2141 = CDR(BgL_treez00_820);
									BgL_numz00_2143 = (BgL_numz00_821 + ((long) 1));
									BgL_numz00_821 = BgL_numz00_2143;
									BgL_treez00_820 = BgL_treez00_2141;
									goto BGl_loopz72z72zz__rgc_treez00;
								}
							else
								{
									obj_t BgL_treez00_2145;

									BgL_treez00_2145 = CDR(BgL_treez00_820);
									BgL_treez00_820 = BgL_treez00_2145;
									goto BGl_loopz72z72zz__rgc_treez00;
								}
						}
				}
		}
	}



/* init-positions! */
	obj_t BGl_initzd2positionsz12zc0zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 98 */
			BGl_za2currentzd2positionza2zd2zz__rgc_treez00 = BINT(((long) -1));
			BGl_za2positionsza2z00zz__rgc_treez00 =
				make_vector(CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00),
				BINT(((long) -1)));
			return (BGl_za2submatchesza2z00zz__rgc_treez00 =
				make_vector(CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00), BNIL),
				BUNSPEC);
		}
	}



/* tree->node */
	obj_t BGl_treezd2ze3nodez31zz__rgc_treez00(obj_t BgL_treez00_18)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 119 */
			if (INTEGERP(BgL_treez00_18))
				{	/* Rgc/rgctree.scm 121 */
					return BGl_integerzd2ze3nodez31zz__rgc_treez00(BgL_treez00_18);
				}
			else
				{	/* Rgc/rgctree.scm 121 */
					if ((BgL_treez00_18 == BGl_symbol2279z00zz__rgc_treez00))
						{	/* Rgc/rgctree.scm 124 */
							obj_t BgL_firstposz00_1476;

							obj_t BgL_lastposz00_1477;

							BgL_firstposz00_1476 =
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
								(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
							BgL_lastposz00_1477 =
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
								(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
							{	/* Rgc/rgctree.scm 124 */
								obj_t BgL_newz00_1481;

								BgL_newz00_1481 =
									create_struct(BGl_symbol2281z00zz__rgc_treez00,
									(int) (((long) 3)));
								{	/* Rgc/rgctree.scm 124 */
									int BgL_auxz00_2164;

									BgL_auxz00_2164 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_1481, BgL_auxz00_2164, BTRUE);
								}
								{	/* Rgc/rgctree.scm 124 */
									int BgL_auxz00_2167;

									BgL_auxz00_2167 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1481, BgL_auxz00_2167,
										BgL_lastposz00_1477);
								}
								{	/* Rgc/rgctree.scm 124 */
									int BgL_auxz00_2170;

									BgL_auxz00_2170 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1481, BgL_auxz00_2170,
										BgL_firstposz00_1476);
								}
								return BgL_newz00_1481;
							}
						}
					else
						{	/* Rgc/rgctree.scm 123 */
							if (PAIRP(BgL_treez00_18))
								{	/* Rgc/rgctree.scm 128 */
									obj_t BgL_casezd2valuezd2_838;

									BgL_casezd2valuezd2_838 = CAR(BgL_treez00_18);
									if (
										(BgL_casezd2valuezd2_838 ==
											BGl_symbol2283z00zz__rgc_treez00))
										{	/* Rgc/rgctree.scm 128 */
											return
												BGl_orzd2ze3nodez31zz__rgc_treez00(CDR(BgL_treez00_18));
										}
									else
										{	/* Rgc/rgctree.scm 128 */
											if (
												(BgL_casezd2valuezd2_838 ==
													BGl_symbol2285z00zz__rgc_treez00))
												{	/* Rgc/rgctree.scm 128 */
													return
														BGl_sequencezd2ze3nodez31zz__rgc_treez00(CDR
														(BgL_treez00_18));
												}
											else
												{	/* Rgc/rgctree.scm 128 */
													if (
														(BgL_casezd2valuezd2_838 ==
															BGl_symbol2287z00zz__rgc_treez00))
														{	/* Rgc/rgctree.scm 128 */
															return
																BGl_za2zd2ze3nodez93zz__rgc_treez00(CAR(CDR
																	(BgL_treez00_18)));
														}
													else
														{	/* Rgc/rgctree.scm 128 */
															if (
																(BgL_casezd2valuezd2_838 ==
																	BGl_symbol2289z00zz__rgc_treez00))
																{	/* Rgc/rgctree.scm 128 */
																	return
																		BGl_submatchzd2ze3nodez31zz__rgc_treez00(CDR
																		(BgL_treez00_18));
																}
															else
																{	/* Rgc/rgctree.scm 128 */
																	if (
																		(BgL_casezd2valuezd2_838 ==
																			BGl_symbol2291z00zz__rgc_treez00))
																		{	/* Rgc/rgctree.scm 133 */
																			obj_t BgL_arg1935z00_848;

																			BgL_arg1935z00_848 = CDR(BgL_treez00_18);
																			{	/* Rgc/rgctree.scm 133 */
																				obj_t BgL_nodez00_1518;

																				BgL_nodez00_1518 =
																					BGl_treezd2ze3nodez31zz__rgc_treez00
																					(BgL_arg1935z00_848);
																				{	/* Rgc/rgctree.scm 133 */
																					obj_t BgL_firstposz00_1519;

																					BgL_firstposz00_1519 =
																						STRUCT_REF(BgL_nodez00_1518,
																						(int) (((long) 0)));
																					{	/* Rgc/rgctree.scm 133 */
																						obj_t BgL_lastposz00_1520;

																						BgL_lastposz00_1520 =
																							STRUCT_REF(BgL_nodez00_1518,
																							(int) (((long) 1)));
																						{	/* Rgc/rgctree.scm 133 */

																							return
																								PROCEDURE_ENTRY
																								(BgL_nodez00_1518)
																								(BgL_nodez00_1518,
																								BgL_firstposz00_1519,
																								BgL_lastposz00_1520, BFALSE,
																								BEOA);
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Rgc/rgctree.scm 128 */
																			return
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string2293z00zz__rgc_treez00,
																				BgL_treez00_18);
																		}
																}
														}
												}
										}
								}
							else
								{	/* Rgc/rgctree.scm 125 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2294z00zz__rgc_treez00, BgL_treez00_18);
								}
						}
				}
		}
	}



/* integer->node */
	obj_t BGl_integerzd2ze3nodez31zz__rgc_treez00(obj_t BgL_treez00_19)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 139 */
			{	/* Rgc/rgctree.scm 140 */
				obj_t BgL_positionz00_849;

				obj_t BgL_firstposz00_850;

				obj_t BgL_lastposz00_851;

				{	/* Rgc/rgctree.scm 140 */
					long BgL_za71za7_1528;

					BgL_za71za7_1528 =
						(long) CINT(BGl_za2currentzd2positionza2zd2zz__rgc_treez00);
					BGl_za2currentzd2positionza2zd2zz__rgc_treez00 =
						BINT((BgL_za71za7_1528 + ((long) 1)));
				}
				VECTOR_SET(BGl_za2positionsza2z00zz__rgc_treez00,
					CINT(BGl_za2currentzd2positionza2zd2zz__rgc_treez00), BgL_treez00_19);
				BgL_positionz00_849 = BGl_za2currentzd2positionza2zd2zz__rgc_treez00;
				BgL_firstposz00_850 =
					BGl_makezd2rgcsetzd2zz__rgc_setz00(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
				BgL_lastposz00_851 =
					BGl_makezd2rgcsetzd2zz__rgc_setz00(
					(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00));
				BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_firstposz00_850,
					(long) CINT(BgL_positionz00_849));
				BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_lastposz00_851,
					(long) CINT(BgL_positionz00_849));
				{	/* Rgc/rgctree.scm 145 */
					obj_t BgL_newz00_1536;

					BgL_newz00_1536 =
						create_struct(BGl_symbol2281z00zz__rgc_treez00, (int) (((long) 3)));
					{	/* Rgc/rgctree.scm 145 */
						int BgL_auxz00_2220;

						BgL_auxz00_2220 = (int) (((long) 2));
						STRUCT_SET(BgL_newz00_1536, BgL_auxz00_2220, BFALSE);
					}
					{	/* Rgc/rgctree.scm 145 */
						int BgL_auxz00_2223;

						BgL_auxz00_2223 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1536, BgL_auxz00_2223, BgL_lastposz00_851);
					}
					{	/* Rgc/rgctree.scm 145 */
						int BgL_auxz00_2226;

						BgL_auxz00_2226 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1536, BgL_auxz00_2226, BgL_firstposz00_850);
					}
					return BgL_newz00_1536;
				}
			}
		}
	}



/* binary->node */
	obj_t BGl_binaryzd2ze3nodez31zz__rgc_treez00(obj_t BgL_binzd2opzd2_21,
		obj_t BgL_tsz00_22)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 158 */
			if (NULLP(BgL_tsz00_22))
				{	/* Rgc/rgctree.scm 159 */
					return
						BGl_treezd2ze3nodez31zz__rgc_treez00
						(BGl_symbol2279z00zz__rgc_treez00);
				}
			else
				{	/* Rgc/rgctree.scm 159 */
					return BGl_loopz00zz__rgc_treez00(BgL_binzd2opzd2_21, BgL_tsz00_22);
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__rgc_treez00(obj_t BgL_binzd2opzd2_2032,
		obj_t BgL_tsz00_856)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 161 */
			if (NULLP(CDR(BgL_tsz00_856)))
				{	/* Rgc/rgctree.scm 162 */
					return BGl_treezd2ze3nodez31zz__rgc_treez00(CAR(BgL_tsz00_856));
				}
			else
				{	/* Rgc/rgctree.scm 164 */
					obj_t BgL_arg1941z00_860;

					obj_t BgL_arg1942z00_861;

					BgL_arg1941z00_860 =
						BGl_treezd2ze3nodez31zz__rgc_treez00(CAR(BgL_tsz00_856));
					BgL_arg1942z00_861 =
						BGl_loopz00zz__rgc_treez00(BgL_binzd2opzd2_2032,
						CDR(BgL_tsz00_856));
					return
						PROCEDURE_ENTRY(BgL_binzd2opzd2_2032) (BgL_binzd2opzd2_2032,
						BgL_arg1941z00_860, BgL_arg1942z00_861, BEOA);
				}
		}
	}



/* or->node */
	obj_t BGl_orzd2ze3nodez31zz__rgc_treez00(obj_t BgL_tsz00_23)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 169 */
			return
				BGl_binaryzd2ze3nodez31zz__rgc_treez00(BGl_proc2295z00zz__rgc_treez00,
				BgL_tsz00_23);
		}
	}



/* or2->node */
	obj_t BGl_or2zd2ze3nodez31zz__rgc_treez00(obj_t BgL_envz00_2001,
		obj_t BgL_n1z00_2002, obj_t BgL_n2z00_2003)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 174 */
			{
				obj_t BgL_n1z00_867;

				obj_t BgL_n2z00_868;

				BgL_n1z00_867 = BgL_n1z00_2002;
				BgL_n2z00_868 = BgL_n2z00_2003;
				{	/* Rgc/rgctree.scm 171 */
					obj_t BgL_firstposz00_870;

					BgL_firstposz00_870 =
						BGl_rgcsetzd2orzd2zz__rgc_setz00(STRUCT_REF(BgL_n1z00_867,
							(int) (((long) 0))),
						STRUCT_REF(BgL_n2z00_868, (int) (((long) 0))));
					{	/* Rgc/rgctree.scm 171 */
						obj_t BgL_lastposz00_871;

						BgL_lastposz00_871 =
							BGl_rgcsetzd2orzd2zz__rgc_setz00(STRUCT_REF(BgL_n1z00_867,
								(int) (((long) 1))),
							STRUCT_REF(BgL_n2z00_868, (int) (((long) 1))));
						{	/* Rgc/rgctree.scm 172 */
							obj_t BgL_nullablezf3zf3_872;

							{	/* Rgc/rgctree.scm 173 */
								obj_t BgL__ortest_1824z00_873;

								BgL__ortest_1824z00_873 =
									STRUCT_REF(BgL_n1z00_867, (int) (((long) 2)));
								if (CBOOL(BgL__ortest_1824z00_873))
									{	/* Rgc/rgctree.scm 173 */
										BgL_nullablezf3zf3_872 = BgL__ortest_1824z00_873;
									}
								else
									{	/* Rgc/rgctree.scm 173 */
										BgL_nullablezf3zf3_872 =
											STRUCT_REF(BgL_n2z00_868, (int) (((long) 2)));
							}}
							{	/* Rgc/rgctree.scm 173 */

								{	/* Rgc/rgctree.scm 174 */
									obj_t BgL_newz00_1600;

									BgL_newz00_1600 =
										create_struct(BGl_symbol2281z00zz__rgc_treez00,
										(int) (((long) 3)));
									{	/* Rgc/rgctree.scm 174 */
										int BgL_auxz00_2263;

										BgL_auxz00_2263 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_1600, BgL_auxz00_2263,
											BgL_nullablezf3zf3_872);
									}
									{	/* Rgc/rgctree.scm 174 */
										int BgL_auxz00_2266;

										BgL_auxz00_2266 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_1600, BgL_auxz00_2266,
											BgL_lastposz00_871);
									}
									{	/* Rgc/rgctree.scm 174 */
										int BgL_auxz00_2269;

										BgL_auxz00_2269 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_1600, BgL_auxz00_2269,
											BgL_firstposz00_870);
									}
									return BgL_newz00_1600;
								}
							}
						}
					}
				}
			}
		}
	}



/* sequence->node */
	obj_t BGl_sequencezd2ze3nodez31zz__rgc_treez00(obj_t BgL_tsz00_24)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 180 */
			return
				BGl_binaryzd2ze3nodez31zz__rgc_treez00(BGl_proc2296z00zz__rgc_treez00,
				BgL_tsz00_24);
		}
	}



/* sequence2->node */
	obj_t BGl_sequence2zd2ze3nodez31zz__rgc_treez00(obj_t BgL_envz00_2006,
		obj_t BgL_n1z00_2007, obj_t BgL_n2z00_2008)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 194 */
			{
				obj_t BgL_n1z00_880;

				obj_t BgL_n2z00_881;

				BgL_n1z00_880 = BgL_n1z00_2007;
				BgL_n2z00_881 = BgL_n2z00_2008;
				{	/* Rgc/rgctree.scm 182 */
					obj_t BgL_firstposz00_883;

					obj_t BgL_lastposz00_884;

					obj_t BgL_nullablezf3zf3_885;

					{	/* Rgc/rgctree.scm 182 */
						bool_t BgL_testz00_2273;

						{	/* Rgc/rgctree.scm 182 */
							obj_t BgL_sz00_1617;

							BgL_sz00_1617 = BgL_n1z00_880;
							BgL_testz00_2273 =
								CBOOL(STRUCT_REF(BgL_sz00_1617, (int) (((long) 2))));
						}
						if (BgL_testz00_2273)
							{	/* Rgc/rgctree.scm 182 */
								BgL_firstposz00_883 =
									BGl_rgcsetzd2orzd2zz__rgc_setz00(STRUCT_REF(BgL_n1z00_880,
										(int) (((long) 0))),
									STRUCT_REF(BgL_n2z00_881, (int) (((long) 0))));
							}
						else
							{	/* Rgc/rgctree.scm 182 */
								BgL_firstposz00_883 =
									STRUCT_REF(BgL_n1z00_880, (int) (((long) 0)));
					}}
					{	/* Rgc/rgctree.scm 185 */
						bool_t BgL_testz00_2284;

						{	/* Rgc/rgctree.scm 185 */
							obj_t BgL_sz00_1629;

							BgL_sz00_1629 = BgL_n2z00_881;
							BgL_testz00_2284 =
								CBOOL(STRUCT_REF(BgL_sz00_1629, (int) (((long) 2))));
						}
						if (BgL_testz00_2284)
							{	/* Rgc/rgctree.scm 185 */
								BgL_lastposz00_884 =
									BGl_rgcsetzd2orzd2zz__rgc_setz00(STRUCT_REF(BgL_n1z00_880,
										(int) (((long) 1))),
									STRUCT_REF(BgL_n2z00_881, (int) (((long) 1))));
							}
						else
							{	/* Rgc/rgctree.scm 185 */
								BgL_lastposz00_884 =
									STRUCT_REF(BgL_n2z00_881, (int) (((long) 1)));
					}}
					{	/* Rgc/rgctree.scm 188 */
						bool_t BgL_testz00_2295;

						{	/* Rgc/rgctree.scm 188 */
							obj_t BgL_sz00_1641;

							BgL_sz00_1641 = BgL_n2z00_881;
							BgL_testz00_2295 =
								CBOOL(STRUCT_REF(BgL_sz00_1641, (int) (((long) 2))));
						}
						if (BgL_testz00_2295)
							{	/* Rgc/rgctree.scm 188 */
								BgL_nullablezf3zf3_885 =
									STRUCT_REF(BgL_n1z00_880, (int) (((long) 2)));
							}
						else
							{	/* Rgc/rgctree.scm 188 */
								BgL_nullablezf3zf3_885 = BFALSE;
							}
					}
					{	/* Rgc/rgctree.scm 190 */
						obj_t BgL_arg1954z00_887;

						BgL_arg1954z00_887 = STRUCT_REF(BgL_n1z00_880, (int) (((long) 1)));
						{	/* Rgc/rgctree.scm 191 */
							obj_t BgL_zc3anonymousza31955ze3z83_2004;

							BgL_zc3anonymousza31955ze3z83_2004 =
								make_fx_procedure(BGl_zc3anonymousza31955ze3z83zz__rgc_treez00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza31955ze3z83_2004,
								(int) (((long) 0)), BgL_n2z00_881);
							BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
								(BgL_zc3anonymousza31955ze3z83_2004, BgL_arg1954z00_887);
					}}
					{	/* Rgc/rgctree.scm 194 */
						obj_t BgL_newz00_1661;

						BgL_newz00_1661 =
							create_struct(BGl_symbol2281z00zz__rgc_treez00,
							(int) (((long) 3)));
						{	/* Rgc/rgctree.scm 194 */
							int BgL_auxz00_2311;

							BgL_auxz00_2311 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_1661, BgL_auxz00_2311,
								BgL_nullablezf3zf3_885);
						}
						{	/* Rgc/rgctree.scm 194 */
							int BgL_auxz00_2314;

							BgL_auxz00_2314 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1661, BgL_auxz00_2314, BgL_lastposz00_884);
						}
						{	/* Rgc/rgctree.scm 194 */
							int BgL_auxz00_2317;

							BgL_auxz00_2317 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1661, BgL_auxz00_2317, BgL_firstposz00_883);
						}
						return BgL_newz00_1661;
					}
				}
			}
		}
	}



/* <anonymous:1955> */
	obj_t BGl_zc3anonymousza31955ze3z83zz__rgc_treez00(obj_t BgL_envz00_2009,
		obj_t BgL_iz00_2011)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 190 */
			{	/* Rgc/rgctree.scm 191 */
				obj_t BgL_n2z00_2010;

				BgL_n2z00_2010 = PROCEDURE_REF(BgL_envz00_2009, (int) (((long) 0)));
				{
					obj_t BgL_iz00_888;

					BgL_iz00_888 = BgL_iz00_2011;
					{	/* Rgc/rgctree.scm 191 */
						obj_t BgL_arg1956z00_1649;

						BgL_arg1956z00_1649 =
							STRUCT_REF(BgL_n2z00_2010, (int) (((long) 0)));
						return
							BGl_rgcsetzd2orz12zc0zz__rgc_setz00(VECTOR_REF
							(BGl_za2followposza2z00zz__rgc_treez00, CINT(BgL_iz00_888)),
							BgL_arg1956z00_1649);
					}
				}
			}
		}
	}



/* *->node */
	obj_t BGl_za2zd2ze3nodez93zz__rgc_treez00(obj_t BgL_exprz00_25)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 200 */
			{	/* Rgc/rgctree.scm 201 */
				obj_t BgL_subzd2nodezd2_900;

				BgL_subzd2nodezd2_900 =
					BGl_treezd2ze3nodez31zz__rgc_treez00(BgL_exprz00_25);
				{	/* Rgc/rgctree.scm 201 */
					obj_t BgL_firstposz00_901;

					BgL_firstposz00_901 =
						STRUCT_REF(BgL_subzd2nodezd2_900, (int) (((long) 0)));
					{	/* Rgc/rgctree.scm 202 */
						obj_t BgL_lastposz00_902;

						BgL_lastposz00_902 =
							STRUCT_REF(BgL_subzd2nodezd2_900, (int) (((long) 1)));
						{	/* Rgc/rgctree.scm 203 */

							{	/* Rgc/rgctree.scm 206 */
								obj_t BgL_zc3anonymousza31964ze3z83_2012;

								BgL_zc3anonymousza31964ze3z83_2012 =
									make_fx_procedure
									(BGl_zc3anonymousza31964ze3z83zz__rgc_treez00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza31964ze3z83_2012,
									(int) (((long) 0)), BgL_firstposz00_901);
								BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
									(BgL_zc3anonymousza31964ze3z83_2012, BgL_lastposz00_902);
							}
							{	/* Rgc/rgctree.scm 209 */
								obj_t BgL_newz00_1691;

								BgL_newz00_1691 =
									create_struct(BGl_symbol2281z00zz__rgc_treez00,
									(int) (((long) 3)));
								{	/* Rgc/rgctree.scm 209 */
									int BgL_auxz00_2340;

									BgL_auxz00_2340 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_1691, BgL_auxz00_2340, BTRUE);
								}
								{	/* Rgc/rgctree.scm 209 */
									int BgL_auxz00_2343;

									BgL_auxz00_2343 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_1691, BgL_auxz00_2343,
										BgL_lastposz00_902);
								}
								{	/* Rgc/rgctree.scm 209 */
									int BgL_auxz00_2346;

									BgL_auxz00_2346 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_1691, BgL_auxz00_2346,
										BgL_firstposz00_901);
								}
								return BgL_newz00_1691;
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:1964> */
	obj_t BGl_zc3anonymousza31964ze3z83zz__rgc_treez00(obj_t BgL_envz00_2013,
		obj_t BgL_iz00_2015)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 205 */
			{	/* Rgc/rgctree.scm 206 */
				obj_t BgL_firstposz00_2014;

				BgL_firstposz00_2014 =
					PROCEDURE_REF(BgL_envz00_2013, (int) (((long) 0)));
				{
					obj_t BgL_iz00_904;

					BgL_iz00_904 = BgL_iz00_2015;
					return
						BGl_rgcsetzd2orz12zc0zz__rgc_setz00(VECTOR_REF
						(BGl_za2followposza2z00zz__rgc_treez00, CINT(BgL_iz00_904)),
						BgL_firstposz00_2014);
				}
			}
		}
	}



/* submatch->node */
	obj_t BGl_submatchzd2ze3nodez31zz__rgc_treez00(obj_t BgL_exprz00_26)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 214 */
			if (PAIRP(BgL_exprz00_26))
				{	/* Rgc/rgctree.scm 215 */
					obj_t BgL_cdrzd21399zd2_914;

					BgL_cdrzd21399zd2_914 = CDR(BgL_exprz00_26);
					if (PAIRP(BgL_cdrzd21399zd2_914))
						{	/* Rgc/rgctree.scm 215 */
							obj_t BgL_cdrzd21404zd2_916;

							BgL_cdrzd21404zd2_916 = CDR(BgL_cdrzd21399zd2_914);
							if (PAIRP(BgL_cdrzd21404zd2_916))
								{	/* Rgc/rgctree.scm 215 */
									if (NULLP(CDR(BgL_cdrzd21404zd2_916)))
										{	/* Rgc/rgctree.scm 215 */
											obj_t BgL_arg1969z00_919;

											obj_t BgL_arg1970z00_920;

											obj_t BgL_arg1971z00_921;

											BgL_arg1969z00_919 = CAR(BgL_exprz00_26);
											BgL_arg1970z00_920 = CAR(BgL_cdrzd21399zd2_914);
											BgL_arg1971z00_921 = CAR(BgL_cdrzd21404zd2_916);
											{	/* Rgc/rgctree.scm 215 */
												obj_t BgL_nodez00_1720;

												BgL_nodez00_1720 =
													BGl_treezd2ze3nodez31zz__rgc_treez00
													(BgL_arg1971z00_921);
												{	/* Rgc/rgctree.scm 215 */
													obj_t BgL_firstposz00_1721;

													BgL_firstposz00_1721 =
														STRUCT_REF(BgL_nodez00_1720, (int) (((long) 0)));
													{	/* Rgc/rgctree.scm 215 */
														obj_t BgL_lastposz00_1722;

														BgL_lastposz00_1722 =
															STRUCT_REF(BgL_nodez00_1720, (int) (((long) 1)));
														{	/* Rgc/rgctree.scm 215 */
															obj_t BgL_nullablezf3zf3_1723;

															BgL_nullablezf3zf3_1723 =
																STRUCT_REF(BgL_nodez00_1720,
																(int) (((long) 2)));
															{	/* Rgc/rgctree.scm 215 */

																{	/* Rgc/rgctree.scm 215 */
																	obj_t BgL_zc3anonymousza31974ze3z83_2017;

																	BgL_zc3anonymousza31974ze3z83_2017 =
																		make_fx_procedure
																		(BGl_zc3anonymousza31974ze3z83zz__rgc_treez00,
																		(int) (((long) 1)), (int) (((long) 3)));
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31974ze3z83_2017,
																		(int) (((long) 0)),
																		BgL_nullablezf3zf3_1723);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31974ze3z83_2017,
																		(int) (((long) 1)), BgL_arg1969z00_919);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31974ze3z83_2017,
																		(int) (((long) 2)), BgL_arg1970z00_920);
																	BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
																		(BgL_zc3anonymousza31974ze3z83_2017,
																		BgL_firstposz00_1721);
																}
																{	/* Rgc/rgctree.scm 215 */
																	obj_t BgL_zc3anonymousza31976ze3z83_2016;

																	BgL_zc3anonymousza31976ze3z83_2016 =
																		make_fx_procedure
																		(BGl_zc3anonymousza31976ze3z83zz__rgc_treez00,
																		(int) (((long) 1)), (int) (((long) 2)));
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31976ze3z83_2016,
																		(int) (((long) 0)), BgL_arg1969z00_919);
																	PROCEDURE_SET
																		(BgL_zc3anonymousza31976ze3z83_2016,
																		(int) (((long) 1)), BgL_arg1970z00_920);
																	BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
																		(BgL_zc3anonymousza31976ze3z83_2016,
																		BgL_lastposz00_1722);
																}
																return BgL_nodez00_1720;
															}
														}
													}
												}
											}
										}
									else
										{	/* Rgc/rgctree.scm 215 */
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2293z00zz__rgc_treez00, BgL_exprz00_26);
										}
								}
							else
								{	/* Rgc/rgctree.scm 215 */
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2293z00zz__rgc_treez00, BgL_exprz00_26);
								}
						}
					else
						{	/* Rgc/rgctree.scm 215 */
							return
								BGl_errorz00zz__errorz00(BFALSE,
								BGl_string2293z00zz__rgc_treez00, BgL_exprz00_26);
						}
				}
			else
				{	/* Rgc/rgctree.scm 215 */
					return
						BGl_errorz00zz__errorz00(BFALSE, BGl_string2293z00zz__rgc_treez00,
						BgL_exprz00_26);
				}
		}
	}



/* <anonymous:1976> */
	obj_t BGl_zc3anonymousza31976ze3z83zz__rgc_treez00(obj_t BgL_envz00_2018,
		obj_t BgL_iz00_2021)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 228 */
			{	/* Rgc/rgctree.scm 215 */
				obj_t BgL_rulez00_2019;

				obj_t BgL_submatchz00_2020;

				BgL_rulez00_2019 = PROCEDURE_REF(BgL_envz00_2018, (int) (((long) 0)));
				BgL_submatchz00_2020 =
					PROCEDURE_REF(BgL_envz00_2018, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1727;

					BgL_iz00_1727 = BgL_iz00_2021;
					return
						BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(BgL_iz00_1727,
						BgL_rulez00_2019, BgL_submatchz00_2020);
				}
			}
		}
	}



/* <anonymous:1974> */
	obj_t BGl_zc3anonymousza31974ze3z83zz__rgc_treez00(obj_t BgL_envz00_2022,
		obj_t BgL_iz00_2026)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 225 */
			{	/* Rgc/rgctree.scm 215 */
				obj_t BgL_nullablezf3zf3_2023;

				obj_t BgL_rulez00_2024;

				obj_t BgL_submatchz00_2025;

				BgL_nullablezf3zf3_2023 =
					PROCEDURE_REF(BgL_envz00_2022, (int) (((long) 0)));
				BgL_rulez00_2024 = PROCEDURE_REF(BgL_envz00_2022, (int) (((long) 1)));
				BgL_submatchz00_2025 =
					PROCEDURE_REF(BgL_envz00_2022, (int) (((long) 2)));
				{
					obj_t BgL_iz00_1725;

					BgL_iz00_1725 = BgL_iz00_2026;
					return
						BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(BgL_iz00_1725,
						BgL_nullablezf3zf3_2023, BgL_rulez00_2024, BgL_submatchz00_2025);
				}
			}
		}
	}



/* init-followpos! */
	obj_t BGl_initzd2followposz12zc0zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 247 */
			{	/* Rgc/rgctree.scm 248 */
				obj_t BgL_followposz00_938;

				BgL_followposz00_938 =
					make_vector(CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00),
					BUNSPEC);
				{
					long BgL_iz00_940;

					BgL_iz00_940 = ((long) 0);
				BgL_zc3anonymousza31977ze3z83_941:
					if (
						((long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00) ==
							BgL_iz00_940))
						{	/* Rgc/rgctree.scm 250 */
							return (BGl_za2followposza2z00zz__rgc_treez00 =
								BgL_followposz00_938, BUNSPEC);
						}
					else
						{	/* Rgc/rgctree.scm 250 */
							VECTOR_SET(BgL_followposz00_938,
								(int) (BgL_iz00_940),
								BGl_makezd2rgcsetzd2zz__rgc_setz00(
									(long) CINT(BGl_za2positionzd2numberza2zd2zz__rgc_treez00)));
							{
								long BgL_iz00_2418;

								BgL_iz00_2418 = (BgL_iz00_940 + ((long) 1));
								BgL_iz00_940 = BgL_iz00_2418;
								goto BgL_zc3anonymousza31977ze3z83_941;
							}
						}
				}
			}
		}
	}



/* submatch-start-add! */
	obj_t BGl_submatchzd2startzd2addz12z12zz__rgc_treez00(obj_t
		BgL_positionz00_30, obj_t BgL_nullablezf3zf3_31, obj_t BgL_matchz00_32,
		obj_t BgL_submatchz00_33)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 270 */
			{	/* Rgc/rgctree.scm 271 */
				obj_t BgL_cellz00_948;

				BgL_cellz00_948 =
					VECTOR_REF(BGl_za2submatchesza2z00zz__rgc_treez00,
					CINT(BgL_positionz00_30));
				if (PAIRP(BgL_cellz00_948))
					{	/* Rgc/rgctree.scm 276 */
						obj_t BgL_arg1984z00_950;

						{	/* Rgc/rgctree.scm 276 */
							obj_t BgL_arg1985z00_951;

							obj_t BgL_arg1986z00_952;

							{	/* Rgc/rgctree.scm 276 */
								obj_t BgL_list1987z00_953;

								{	/* Rgc/rgctree.scm 276 */
									obj_t BgL_arg1988z00_954;

									{	/* Rgc/rgctree.scm 276 */
										obj_t BgL_arg1989z00_955;

										BgL_arg1989z00_955 = MAKE_PAIR(BgL_submatchz00_33, BNIL);
										BgL_arg1988z00_954 =
											MAKE_PAIR(BgL_matchz00_32, BgL_arg1989z00_955);
									}
									BgL_list1987z00_953 =
										MAKE_PAIR(BgL_nullablezf3zf3_31, BgL_arg1988z00_954);
								}
								BgL_arg1985z00_951 = BgL_list1987z00_953;
							}
							BgL_arg1986z00_952 = CAR(BgL_cellz00_948);
							BgL_arg1984z00_950 =
								MAKE_PAIR(BgL_arg1985z00_951, BgL_arg1986z00_952);
						}
						return SET_CAR(BgL_cellz00_948, BgL_arg1984z00_950);
					}
				else
					{	/* Rgc/rgctree.scm 275 */
						obj_t BgL_arg1990z00_956;

						{	/* Rgc/rgctree.scm 275 */
							obj_t BgL_arg1991z00_957;

							{	/* Rgc/rgctree.scm 275 */
								obj_t BgL_arg1993z00_959;

								{	/* Rgc/rgctree.scm 275 */
									obj_t BgL_list1995z00_961;

									{	/* Rgc/rgctree.scm 275 */
										obj_t BgL_arg1996z00_962;

										{	/* Rgc/rgctree.scm 275 */
											obj_t BgL_arg1998z00_963;

											BgL_arg1998z00_963 = MAKE_PAIR(BgL_submatchz00_33, BNIL);
											BgL_arg1996z00_962 =
												MAKE_PAIR(BgL_matchz00_32, BgL_arg1998z00_963);
										}
										BgL_list1995z00_961 =
											MAKE_PAIR(BgL_nullablezf3zf3_31, BgL_arg1996z00_962);
									}
									BgL_arg1993z00_959 = BgL_list1995z00_961;
								}
								{	/* Rgc/rgctree.scm 275 */
									obj_t BgL_list1994z00_960;

									BgL_list1994z00_960 = MAKE_PAIR(BgL_arg1993z00_959, BNIL);
									BgL_arg1991z00_957 = BgL_list1994z00_960;
								}
							}
							BgL_arg1990z00_956 = MAKE_PAIR(BgL_arg1991z00_957, BNIL);
						}
						return
							VECTOR_SET(BGl_za2submatchesza2z00zz__rgc_treez00,
							CINT(BgL_positionz00_30), BgL_arg1990z00_956);
					}
			}
		}
	}



/* submatch-stop-add! */
	obj_t BGl_submatchzd2stopzd2addz12z12zz__rgc_treez00(obj_t BgL_positionz00_34,
		obj_t BgL_matchz00_35, obj_t BgL_submatchz00_36)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 281 */
			{	/* Rgc/rgctree.scm 282 */
				obj_t BgL_cellz00_964;

				BgL_cellz00_964 =
					VECTOR_REF(BGl_za2submatchesza2z00zz__rgc_treez00,
					CINT(BgL_positionz00_34));
				if (PAIRP(BgL_cellz00_964))
					{	/* Rgc/rgctree.scm 287 */
						obj_t BgL_arg2000z00_966;

						{	/* Rgc/rgctree.scm 287 */
							obj_t BgL_arg2001z00_967;

							obj_t BgL_arg2002z00_968;

							BgL_arg2001z00_967 =
								MAKE_PAIR(BgL_matchz00_35, BgL_submatchz00_36);
							BgL_arg2002z00_968 = CDR(BgL_cellz00_964);
							BgL_arg2000z00_966 =
								MAKE_PAIR(BgL_arg2001z00_967, BgL_arg2002z00_968);
						}
						return SET_CDR(BgL_cellz00_964, BgL_arg2000z00_966);
					}
				else
					{	/* Rgc/rgctree.scm 286 */
						obj_t BgL_arg2003z00_969;

						{	/* Rgc/rgctree.scm 286 */
							obj_t BgL_arg2005z00_971;

							{	/* Rgc/rgctree.scm 286 */
								obj_t BgL_arg2006z00_972;

								BgL_arg2006z00_972 =
									MAKE_PAIR(BgL_matchz00_35, BgL_submatchz00_36);
								{	/* Rgc/rgctree.scm 286 */
									obj_t BgL_list2007z00_973;

									BgL_list2007z00_973 = MAKE_PAIR(BgL_arg2006z00_972, BNIL);
									BgL_arg2005z00_971 = BgL_list2007z00_973;
								}
							}
							BgL_arg2003z00_969 = MAKE_PAIR(BNIL, BgL_arg2005z00_971);
						}
						return
							VECTOR_SET(BGl_za2submatchesza2z00zz__rgc_treez00,
							CINT(BgL_positionz00_34), BgL_arg2003z00_969);
					}
			}
		}
	}



/* reset-tree! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2treez12zc0zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 292 */
			BGl_za2followposza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2positionsza2z00zz__rgc_treez00 = BUNSPEC;
			BGl_za2submatchesza2z00zz__rgc_treez00 = BUNSPEC;
			return (BGl_za2positionzd2numberza2zd2zz__rgc_treez00 = BUNSPEC, BUNSPEC);
		}
	}



/* _reset-tree! */
	obj_t BGl__resetzd2treez12zc0zz__rgc_treez00(obj_t BgL_envz00_2027)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 292 */
			return BGl_resetzd2treez12zc0zz__rgc_treez00();
		}
	}



/* print-followpos */
	BGL_EXPORTED_DEF obj_t BGl_printzd2followposzd2zz__rgc_treez00(obj_t
		BgL_fpz00_37)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 301 */
			{	/* Rgc/rgctree.scm 302 */
				obj_t BgL_port1854z00_974;

				{	/* Rgc/rgctree.scm 302 */
					obj_t BgL_res2267z00_1801;

					{	/* Rgc/rgctree.scm 302 */
						obj_t BgL_auxz00_2451;

						BgL_auxz00_2451 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2267z00_1801 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2451);
					}
					BgL_port1854z00_974 = BgL_res2267z00_1801;
				}
				bgl_display_string(BGl_string2297z00zz__rgc_treez00,
					BgL_port1854z00_974);
				bgl_display_char(((unsigned char) '\n'), BgL_port1854z00_974);
			}
			{	/* Rgc/rgctree.scm 303 */
				obj_t BgL_port1855z00_975;

				{	/* Rgc/rgctree.scm 303 */
					obj_t BgL_res2268z00_1806;

					{	/* Rgc/rgctree.scm 303 */
						obj_t BgL_auxz00_2456;

						BgL_auxz00_2456 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2268z00_1806 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2456);
					}
					BgL_port1855z00_975 = BgL_res2268z00_1806;
				}
				bgl_display_string(BGl_string2298z00zz__rgc_treez00,
					BgL_port1855z00_975);
				{	/* Rgc/rgctree.scm 303 */
					int BgL_arg2008z00_976;

					BgL_arg2008z00_976 = VECTOR_LENGTH(BgL_fpz00_37);
					bgl_display_obj(BINT(BgL_arg2008z00_976), BgL_port1855z00_975);
				}
				bgl_display_char(((unsigned char) '\n'), BgL_port1855z00_975);
			} BGl_list2299z00zz__rgc_treez00;
			{	/* Rgc/rgctree.scm 310 */
				obj_t BgL_port1856z00_977;

				{	/* Rgc/rgctree.scm 310 */
					obj_t BgL_res2269z00_1812;

					{	/* Rgc/rgctree.scm 310 */
						obj_t BgL_auxz00_2464;

						BgL_auxz00_2464 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2269z00_1812 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2464);
					}
					BgL_port1856z00_977 = BgL_res2269z00_1812;
				}
				bgl_display_string(BGl_string2344z00zz__rgc_treez00,
					BgL_port1856z00_977);
				return bgl_display_char(((unsigned char) '\n'), BgL_port1856z00_977);
		}}
	}



/* _print-followpos */
	obj_t BGl__printzd2followposzd2zz__rgc_treez00(obj_t BgL_envz00_2028,
		obj_t BgL_fpz00_2029)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 301 */
			return BGl_printzd2followposzd2zz__rgc_treez00(BgL_fpz00_2029);
		}
	}



/* print-node */
	BGL_EXPORTED_DEF obj_t BGl_printzd2nodezd2zz__rgc_treez00(obj_t
		BgL_nodez00_38)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 315 */
			return BGl_symbol2345z00zz__rgc_treez00;
		}
	}



/* _print-node */
	obj_t BGl__printzd2nodezd2zz__rgc_treez00(obj_t BgL_envz00_2030,
		obj_t BgL_nodez00_2031)
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 315 */
			return BGl_symbol2345z00zz__rgc_treez00;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_treez00()
	{
		AN_OBJECT;
		{	/* Rgc/rgctree.scm 14 */
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 492883814),
				BSTRING_TO_STRING(BGl_string2347z00zz__rgc_treez00));
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 36213488),
				BSTRING_TO_STRING(BGl_string2347z00zz__rgc_treez00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2347z00zz__rgc_treez00));
		}
	}

#ifdef __cplusplus
}
#endif
