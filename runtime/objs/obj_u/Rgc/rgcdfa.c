/*===========================================================================*/
/*   (Rgc/rgcdfa.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Rgc/rgcdfa.scm -indent -o objs/obj_u/Rgc/rgcdfa.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_list2245z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2249z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2252z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2255z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2258z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2261z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2262z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2265z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2268z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2269z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2272z00zz__rgc_dfaz00 = BUNSPEC;
	static long BGl_bucketzd2lenzd2zz__rgc_dfaz00;
	static obj_t BGl_list2275z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2282z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2285z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2288z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl__statezd2namezd2zz__rgc_dfaz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00();
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__rgc_dfaz00();
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl__getzd2initialzd2statez00zz__rgc_dfaz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00();
	extern obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	static obj_t BGl_initzd2statesz12zc0zz__rgc_dfaz00();
	extern obj_t BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
	static obj_t BGl_zc3anonymousza31909ze3z83zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl__printzd2dfazd2zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31911ze3z83zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_symbol2226z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2233z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2236z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2239z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2242z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2246z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl__statezd2positionszd2zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_symbol2250z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2253z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl__nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2256z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2259z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_symbol2263z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2266z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2270z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2273z00zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t bgl_display_string(obj_t, obj_t);
	static obj_t BGl_symbol2276z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl__resetzd2dfaz12zc0zz__rgc_dfaz00(obj_t);
	static obj_t BGl_symbol2283z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2286z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2289z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_symbol2291z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_makezd2statezd2zz__rgc_dfaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__rgc_configz00(long, char *);
	static obj_t BGl__statezf3zf3zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__rgc_dfaz00();
	extern obj_t string_to_bstring(char *);
	static obj_t BGl_zc3anonymousza31946ze3z83zz__rgc_dfaz00(obj_t, obj_t);
	static obj_t BGl__statezd2transitionszd2zz__rgc_dfaz00(obj_t, obj_t);
	extern obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	extern obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t, obj_t);
	extern obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	BGL_EXPORTED_DECL obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printzd2dfazd2zz__rgc_dfaz00(obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_statezf3zf3zz__rgc_dfaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
	extern obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	static obj_t BGl_methodzd2initzd2zz__rgc_dfaz00();
	static obj_t BGl_list2232z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2235z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2238z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t BGl_list2241z00zz__rgc_dfaz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2transitionszd2envz00zz__rgc_dfaz00,
		BgL_bgl__stateza7d2transit2295za7,
		BGl__statezd2transitionszd2zz__rgc_dfaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2positionszd2envz00zz__rgc_dfaz00,
		BgL_bgl__stateza7d2positio2296za7, BGl__statezd2positionszd2zz__rgc_dfaz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezd2namezd2envz00zz__rgc_dfaz00,
		BgL_bgl__stateza7d2nameza7d22297z00, BGl__statezd2namezd2zz__rgc_dfaz00, 0L,
		BUNSPEC, 1);
	extern obj_t BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2initialzd2statezd2envzd2zz__rgc_dfaz00,
		BgL_bgl__getza7d2initialza7d2298z00,
		BGl__getzd2initialzd2statez00zz__rgc_dfaz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_resetzd2dfaz12zd2envz12zz__rgc_dfaz00,
		BgL_bgl__resetza7d2dfaza712za72299za7, BGl__resetzd2dfaz12zc0zz__rgc_dfaz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_statezf3zd2envz21zz__rgc_dfaz00,
		BgL_bgl__stateza7f3za7f3za7za7__2300z00, BGl__statezf3zf3zz__rgc_dfaz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2dfazd2envz00zz__rgc_dfaz00,
		BgL_bgl__printza7d2dfaza7d2za72301za7, BGl__printzd2dfazd2zz__rgc_dfaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2223z00zz__rgc_dfaz00,
		BgL_bgl_string2223za700za7za7_2302za7, "/tmp/bigloo/runtime/Rgc/rgcdfa.scm",
		34);
	      DEFINE_STRING(BGl_string2224z00zz__rgc_dfaz00,
		BgL_bgl_string2224za700za7za7_2303za7, "_node->dfa", 10);
	      DEFINE_STRING(BGl_string2225z00zz__rgc_dfaz00,
		BgL_bgl_string2225za700za7za7_2304za7, "vector", 6);
	      DEFINE_STRING(BGl_string2227z00zz__rgc_dfaz00,
		BgL_bgl_string2227za700za7za7_2305za7, "__state", 7);
	      DEFINE_STRING(BGl_string2228z00zz__rgc_dfaz00,
		BgL_bgl_string2228za700za7za7_2306za7, "STATE-", 6);
	      DEFINE_STRING(BGl_string2230z00zz__rgc_dfaz00,
		BgL_bgl_string2230za700za7za7_2307za7,
		"========= DFA ====================================", 50);
	      DEFINE_STRING(BGl_string2229z00zz__rgc_dfaz00,
		BgL_bgl_string2229za700za7za7_2308za7, "-", 1);
	      DEFINE_STRING(BGl_string2231z00zz__rgc_dfaz00,
		BgL_bgl_string2231za700za7za7_2309za7, "state: ", 7);
	      DEFINE_STRING(BGl_string2234z00zz__rgc_dfaz00,
		BgL_bgl_string2234za700za7za7_2310za7, "for-each", 8);
	      DEFINE_STRING(BGl_string2237z00zz__rgc_dfaz00,
		BgL_bgl_string2237za700za7za7_2311za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2240z00zz__rgc_dfaz00,
		BgL_bgl_string2240za700za7za7_2312za7, "trans", 5);
	      DEFINE_STRING(BGl_string2243z00zz__rgc_dfaz00,
		BgL_bgl_string2243za700za7za7_2313za7, "print", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2ze3dfazd2envze3zz__rgc_dfaz00,
		BgL_bgl__nodeza7d2za7e3dfaza732314za7, BGl__nodezd2ze3dfaz31zz__rgc_dfaz00,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2244z00zz__rgc_dfaz00,
		BgL_bgl_string2244za700za7za7_2315za7, "   ", 3);
	      DEFINE_STRING(BGl_string2247z00zz__rgc_dfaz00,
		BgL_bgl_string2247za700za7za7_2316za7, "car", 3);
	      DEFINE_STRING(BGl_string2248z00zz__rgc_dfaz00,
		BgL_bgl_string2248za700za7za7_2317za7, " [", 2);
	      DEFINE_STRING(BGl_string2251z00zz__rgc_dfaz00,
		BgL_bgl_string2251za700za7za7_2318za7, "if", 2);
	      DEFINE_STRING(BGl_string2254z00zz__rgc_dfaz00,
		BgL_bgl_string2254za700za7za7_2319za7, "and", 3);
	      DEFINE_STRING(BGl_string2257z00zz__rgc_dfaz00,
		BgL_bgl_string2257za700za7za7_2320za7, "<", 1);
	      DEFINE_STRING(BGl_string2260z00zz__rgc_dfaz00,
		BgL_bgl_string2260za700za7za7_2321za7, "let", 3);
	      DEFINE_STRING(BGl_string2264z00zz__rgc_dfaz00,
		BgL_bgl_string2264za700za7za7_2322za7, "c", 1);
	      DEFINE_STRING(BGl_string2267z00zz__rgc_dfaz00,
		BgL_bgl_string2267za700za7za7_2323za7, "integer->char", 13);
	      DEFINE_STRING(BGl_string2271z00zz__rgc_dfaz00,
		BgL_bgl_string2271za700za7za7_2324za7, "or", 2);
	      DEFINE_STRING(BGl_string2274z00zz__rgc_dfaz00,
		BgL_bgl_string2274za700za7za7_2325za7, "char-alphabetic?", 16);
	      DEFINE_STRING(BGl_string2277z00zz__rgc_dfaz00,
		BgL_bgl_string2277za700za7za7_2326za7, "char-numeric?", 13);
	      DEFINE_STRING(BGl_string2278z00zz__rgc_dfaz00,
		BgL_bgl_string2278za700za7za7_2327za7, "ascii", 5);
	      DEFINE_STRING(BGl_string2280z00zz__rgc_dfaz00,
		BgL_bgl_string2280za700za7za7_2328za7, "]", 1);
	      DEFINE_STRING(BGl_string2279z00zz__rgc_dfaz00,
		BgL_bgl_string2279za700za7za7_2329za7, "special", 7);
	      DEFINE_STRING(BGl_string2281z00zz__rgc_dfaz00,
		BgL_bgl_string2281za700za7za7_2330za7, "  -->  ", 7);
	      DEFINE_STRING(BGl_string2284z00zz__rgc_dfaz00,
		BgL_bgl_string2284za700za7za7_2331za7, "__state-number", 14);
	      DEFINE_STRING(BGl_string2287z00zz__rgc_dfaz00,
		BgL_bgl_string2287za700za7za7_2332za7, "cdr", 3);
	      DEFINE_STRING(BGl_string2290z00zz__rgc_dfaz00,
		BgL_bgl_string2290za700za7za7_2333za7, "__state-transitions", 19);
	      DEFINE_STRING(BGl_string2292z00zz__rgc_dfaz00,
		BgL_bgl_string2292za700za7za7_2334za7, "state", 5);
	      DEFINE_STRING(BGl_string2293z00zz__rgc_dfaz00,
		BgL_bgl_string2293za700za7za7_2335za7,
		"==================================================", 50);
	      DEFINE_STRING(BGl_string2294z00zz__rgc_dfaz00,
		BgL_bgl_string2294za700za7za7_2336za7, "__rgc_dfa", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_dfaz00(long
		BgL_checksumz00_1808, char *BgL_fromz00_1809)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_dfaz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_dfaz00 = BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__rgc_dfaz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00();
					BGl_toplevelzd2initzd2zz__rgc_dfaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_symbol2226z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2227z00zz__rgc_dfaz00);
			BGl_symbol2233z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2234z00zz__rgc_dfaz00);
			BGl_symbol2236z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2237z00zz__rgc_dfaz00);
			BGl_symbol2239z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2240z00zz__rgc_dfaz00);
			BGl_list2238z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2239z00zz__rgc_dfaz00, BNIL);
			BGl_symbol2242z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2243z00zz__rgc_dfaz00);
			BGl_symbol2246z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2247z00zz__rgc_dfaz00);
			BGl_list2245z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2246z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_symbol2239z00zz__rgc_dfaz00, BNIL));
			BGl_symbol2250z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2251z00zz__rgc_dfaz00);
			BGl_symbol2253z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2254z00zz__rgc_dfaz00);
			BGl_symbol2256z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2257z00zz__rgc_dfaz00);
			BGl_list2255z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2256z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2245z00zz__rgc_dfaz00,
					MAKE_PAIR(BINT(((long) 256)), BNIL)));
			BGl_symbol2259z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2260z00zz__rgc_dfaz00);
			BGl_symbol2263z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2264z00zz__rgc_dfaz00);
			BGl_symbol2266z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2267z00zz__rgc_dfaz00);
			BGl_list2265z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2266z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2245z00zz__rgc_dfaz00, BNIL));
			BGl_list2262z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2263z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2265z00zz__rgc_dfaz00, BNIL));
			BGl_list2261z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_list2262z00zz__rgc_dfaz00, BNIL);
			BGl_symbol2270z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2271z00zz__rgc_dfaz00);
			BGl_symbol2273z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2274z00zz__rgc_dfaz00);
			BGl_list2272z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2273z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_symbol2263z00zz__rgc_dfaz00, BNIL));
			BGl_symbol2276z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2277z00zz__rgc_dfaz00);
			BGl_list2275z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2276z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_symbol2263z00zz__rgc_dfaz00, BNIL));
			BGl_list2269z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2270z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2272z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2275z00zz__rgc_dfaz00, BNIL)));
			BGl_list2268z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2250z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2269z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_symbol2263z00zz__rgc_dfaz00,
						MAKE_PAIR(BGl_string2278z00zz__rgc_dfaz00, BNIL))));
			BGl_list2258z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2259z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2261z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2268z00zz__rgc_dfaz00, BNIL)));
			BGl_list2252z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2253z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2255z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2258z00zz__rgc_dfaz00, BNIL)));
			BGl_list2249z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2250z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2252z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_string2279z00zz__rgc_dfaz00, BNIL)));
			BGl_symbol2283z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2284z00zz__rgc_dfaz00);
			BGl_symbol2286z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2287z00zz__rgc_dfaz00);
			BGl_list2285z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2286z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_symbol2239z00zz__rgc_dfaz00, BNIL));
			BGl_list2282z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2283z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2285z00zz__rgc_dfaz00, BNIL));
			BGl_list2241z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2242z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_string2244z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2245z00zz__rgc_dfaz00,
						MAKE_PAIR(BGl_string2248z00zz__rgc_dfaz00,
							MAKE_PAIR(BGl_list2249z00zz__rgc_dfaz00,
								MAKE_PAIR(BGl_string2280z00zz__rgc_dfaz00,
									MAKE_PAIR(BGl_string2281z00zz__rgc_dfaz00,
										MAKE_PAIR(BGl_list2282z00zz__rgc_dfaz00, BNIL))))))));
			BGl_list2235z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2236z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_list2238z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2241z00zz__rgc_dfaz00, BNIL)));
			BGl_symbol2289z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2290z00zz__rgc_dfaz00);
			BGl_symbol2291z00zz__rgc_dfaz00 =
				bstring_to_symbol(BGl_string2292z00zz__rgc_dfaz00);
			BGl_list2288z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2289z00zz__rgc_dfaz00,
				MAKE_PAIR(BGl_symbol2291z00zz__rgc_dfaz00, BNIL));
			return (BGl_list2232z00zz__rgc_dfaz00 =
				MAKE_PAIR(BGl_symbol2233z00zz__rgc_dfaz00,
					MAKE_PAIR(BGl_list2235z00zz__rgc_dfaz00,
						MAKE_PAIR(BGl_list2288z00zz__rgc_dfaz00, BNIL))), BUNSPEC);
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_bucketzd2lenzd2zz__rgc_dfaz00 = ((long) 64);
			BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
			BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
			return (BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC, BUNSPEC);
		}
	}



/* node->dfa */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t
		BgL_rootz00_15, obj_t BgL_followposz00_16, obj_t BgL_positionsz00_17)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 69 */
			BGl_initzd2statesz12zc0zz__rgc_dfaz00();
			{	/* Rgc/rgcdfa.scm 76 */
				obj_t BgL_initialzd2statezd2_865;

				int BgL_positionszd2numzd2_866;

				BgL_initialzd2statezd2_865 =
					BGl_makezd2statezd2zz__rgc_dfaz00(STRUCT_REF(BgL_rootz00_15,
						(int) (((long) 0))));
				BgL_positionszd2numzd2_866 = VECTOR_LENGTH(BgL_positionsz00_17);
				BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BgL_initialzd2statezd2_865;
				{	/* Rgc/rgcdfa.scm 79 */
					obj_t BgL_g1824z00_867;

					{	/* Rgc/rgcdfa.scm 79 */
						obj_t BgL_list1917z00_894;

						BgL_list1917z00_894 = MAKE_PAIR(BgL_initialzd2statezd2_865, BNIL);
						BgL_g1824z00_867 = BgL_list1917z00_894;
					}
					{
						obj_t BgL_dzd2stateszd2_869;

						BgL_dzd2stateszd2_869 = BgL_g1824z00_867;
					BgL_zc3anonymousza31905ze3z83_870:
						if (NULLP(BgL_dzd2stateszd2_869))
							{	/* Rgc/rgcdfa.scm 81 */
								return
									BGl_hashtablezd2ze3listz31zz__hashz00
									(BGl_za2statesza2z00zz__rgc_dfaz00);
							}
						else
							{	/* Rgc/rgcdfa.scm 85 */
								obj_t BgL_newzd2dzd2statesz00_872;

								{	/* Rgc/rgcdfa.scm 85 */
									obj_t BgL_cellvalz00_1896;

									BgL_cellvalz00_1896 = CDR(BgL_dzd2stateszd2_869);
									BgL_newzd2dzd2statesz00_872 = MAKE_CELL(BgL_cellvalz00_1896);
								}
								{	/* Rgc/rgcdfa.scm 85 */
									obj_t BgL_tz00_873;

									BgL_tz00_873 = CAR(BgL_dzd2stateszd2_869);
									{	/* Rgc/rgcdfa.scm 86 */
										obj_t BgL_tzd2positionszd2_874;

										BgL_tzd2positionszd2_874 =
											STRUCT_REF(BgL_tz00_873, (int) (((long) 3)));
										{	/* Rgc/rgcdfa.scm 87 */

											{	/* Rgc/rgcdfa.scm 93 */
												obj_t BgL_arg1908z00_876;

												{	/* Rgc/rgcdfa.scm 119 */
													obj_t BgL_symbolzd2setzd2_1403;

													{	/* Rgc/rgcdfa.scm 119 */
														obj_t BgL_arg1949z00_1404;

														BgL_arg1949z00_1404 =
															BGl_treezd2maxzd2charz00zz__rgc_rulesz00();
														BgL_symbolzd2setzd2_1403 =
															BGl_makezd2rgcsetzd2zz__rgc_setz00(
															(long) CINT(BgL_arg1949z00_1404));
													}
													{	/* Rgc/rgcdfa.scm 119 */
														obj_t BgL_zc3anonymousza31946ze3z83_1759;

														BgL_zc3anonymousza31946ze3z83_1759 =
															make_fx_procedure
															(BGl_zc3anonymousza31946ze3z83zz__rgc_dfaz00,
															(int) (((long) 1)), (int) (((long) 2)));
														PROCEDURE_SET(BgL_zc3anonymousza31946ze3z83_1759,
															(int) (((long) 0)), BgL_positionsz00_17);
														PROCEDURE_SET(BgL_zc3anonymousza31946ze3z83_1759,
															(int) (((long) 1)), BgL_symbolzd2setzd2_1403);
														BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
															(BgL_zc3anonymousza31946ze3z83_1759,
															BgL_tzd2positionszd2_874);
													}
													BgL_arg1908z00_876 = BgL_symbolzd2setzd2_1403;
												}
												{	/* Rgc/rgcdfa.scm 94 */
													obj_t BgL_zc3anonymousza31909ze3z83_1758;

													BgL_zc3anonymousza31909ze3z83_1758 =
														make_fx_procedure
														(BGl_zc3anonymousza31909ze3z83zz__rgc_dfaz00,
														(int) (((long) 1)), (int) (((long) 6)));
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 0)),
														BINT(BgL_positionszd2numzd2_866));
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 1)), BgL_followposz00_16);
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 2)), BgL_positionsz00_17);
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 3)), BgL_tzd2positionszd2_874);
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 4)), BgL_newzd2dzd2statesz00_872);
													PROCEDURE_SET(BgL_zc3anonymousza31909ze3z83_1758,
														(int) (((long) 5)), BgL_tz00_873);
													BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
														(BgL_zc3anonymousza31909ze3z83_1758,
														BgL_arg1908z00_876);
											}}
											{
												obj_t BgL_dzd2stateszd2_1929;

												BgL_dzd2stateszd2_1929 =
													CELL_REF(BgL_newzd2dzd2statesz00_872);
												BgL_dzd2stateszd2_869 = BgL_dzd2stateszd2_1929;
												goto BgL_zc3anonymousza31905ze3z83_870;
											}
										}
									}
								}
							}
					}
				}
			}
		}
	}



/* _node->dfa */
	obj_t BGl__nodezd2ze3dfaz31zz__rgc_dfaz00(obj_t BgL_envz00_1760,
		obj_t BgL_rootz00_1761, obj_t BgL_followposz00_1762,
		obj_t BgL_positionsz00_1763)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 69 */
			{	/* Rgc/rgcdfa.scm 121 */
				obj_t BgL_auxz00_1937;

				obj_t BgL_auxz00_1930;

				if (VECTORP(BgL_positionsz00_1763))
					{	/* Rgc/rgcdfa.scm 121 */
						BgL_auxz00_1937 = BgL_positionsz00_1763;
					}
				else
					{
						obj_t BgL_auxz00_1940;

						BgL_auxz00_1940 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2223z00zz__rgc_dfaz00,
							BINT(((long) 4368)), BGl_string2224z00zz__rgc_dfaz00,
							BGl_string2225z00zz__rgc_dfaz00, BgL_positionsz00_1763);
						FAILURE(BgL_auxz00_1940, BFALSE, BFALSE);
					}
				if (VECTORP(BgL_followposz00_1762))
					{	/* Rgc/rgcdfa.scm 121 */
						BgL_auxz00_1930 = BgL_followposz00_1762;
					}
				else
					{
						obj_t BgL_auxz00_1933;

						BgL_auxz00_1933 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2223z00zz__rgc_dfaz00,
							BINT(((long) 4368)), BGl_string2224z00zz__rgc_dfaz00,
							BGl_string2225z00zz__rgc_dfaz00, BgL_followposz00_1762);
						FAILURE(BgL_auxz00_1933, BFALSE, BFALSE);
					}
				return
					BGl_nodezd2ze3dfaz31zz__rgc_dfaz00(BgL_rootz00_1761, BgL_auxz00_1930,
					BgL_auxz00_1937);
			}
		}
	}



/* <anonymous:1909> */
	obj_t BGl_zc3anonymousza31909ze3z83zz__rgc_dfaz00(obj_t BgL_envz00_1764,
		obj_t BgL_az00_1771)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 93 */
			{	/* Rgc/rgcdfa.scm 94 */
				obj_t BgL_positionszd2numzd2_1765;

				obj_t BgL_followposz00_1766;

				obj_t BgL_positionsz00_1767;

				obj_t BgL_tzd2positionszd2_1768;

				obj_t BgL_newzd2dzd2statesz00_1769;

				obj_t BgL_tz00_1770;

				BgL_positionszd2numzd2_1765 =
					PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 0)));
				BgL_followposz00_1766 =
					PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 1)));
				BgL_positionsz00_1767 =
					PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 2)));
				BgL_tzd2positionszd2_1768 =
					PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 3)));
				BgL_newzd2dzd2statesz00_1769 =
					PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 4)));
				BgL_tz00_1770 = PROCEDURE_REF(BgL_envz00_1764, (int) (((long) 5)));
				{
					obj_t BgL_az00_877;

					BgL_az00_877 = BgL_az00_1771;
					{	/* Rgc/rgcdfa.scm 94 */
						obj_t BgL_uz00_879;

						obj_t BgL_uzd2emptyzf3z21_880;

						BgL_uz00_879 =
							BGl_makezd2rgcsetzd2zz__rgc_setz00(
							(long) CINT(BgL_positionszd2numzd2_1765));
						BgL_uzd2emptyzf3z21_880 = MAKE_CELL(BTRUE);
						{	/* Rgc/rgcdfa.scm 98 */
							obj_t BgL_zc3anonymousza31911ze3z83_1757;

							BgL_zc3anonymousza31911ze3z83_1757 =
								make_fx_procedure(BGl_zc3anonymousza31911ze3z83zz__rgc_dfaz00,
								(int) (((long) 1)), (int) (((long) 5)));
							PROCEDURE_SET(BgL_zc3anonymousza31911ze3z83_1757,
								(int) (((long) 0)), BgL_uzd2emptyzf3z21_880);
							PROCEDURE_SET(BgL_zc3anonymousza31911ze3z83_1757,
								(int) (((long) 1)), BgL_followposz00_1766);
							PROCEDURE_SET(BgL_zc3anonymousza31911ze3z83_1757,
								(int) (((long) 2)), BgL_uz00_879);
							PROCEDURE_SET(BgL_zc3anonymousza31911ze3z83_1757,
								(int) (((long) 3)), BgL_positionsz00_1767);
							PROCEDURE_SET(BgL_zc3anonymousza31911ze3z83_1757,
								(int) (((long) 4)), BgL_az00_877);
							BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
								(BgL_zc3anonymousza31911ze3z83_1757, BgL_tzd2positionszd2_1768);
						}
						if (CBOOL(CELL_REF(BgL_uzd2emptyzf3z21_880)))
							{	/* Rgc/rgcdfa.scm 105 */
								return BFALSE;
							}
						else
							{	/* Rgc/rgcdfa.scm 106 */
								obj_t BgL_usz00_888;

								{	/* Rgc/rgcdfa.scm 106 */
									obj_t BgL_ostatez00_889;

									BgL_ostatez00_889 =
										BGl_hashtablezd2getzd2zz__hashz00
										(BGl_za2statesza2z00zz__rgc_dfaz00, BgL_uz00_879);
									{	/* Rgc/rgcdfa.scm 108 */
										bool_t BgL_testz00_1976;

										if (STRUCTP(BgL_ostatez00_889))
											{	/* Rgc/rgcdfa.scm 108 */
												BgL_testz00_1976 =
													(STRUCT_KEY(BgL_ostatez00_889) ==
													BGl_symbol2226z00zz__rgc_dfaz00);
											}
										else
											{	/* Rgc/rgcdfa.scm 108 */
												BgL_testz00_1976 = ((bool_t) 0);
											}
										if (BgL_testz00_1976)
											{	/* Rgc/rgcdfa.scm 108 */
												BgL_usz00_888 = BgL_ostatez00_889;
											}
										else
											{	/* Rgc/rgcdfa.scm 109 */
												obj_t BgL_newzd2statezd2_891;

												BgL_newzd2statezd2_891 =
													BGl_makezd2statezd2zz__rgc_dfaz00(BgL_uz00_879);
												{	/* Rgc/rgcdfa.scm 112 */
													obj_t BgL_auxz00_1772;

													BgL_auxz00_1772 =
														MAKE_PAIR(BgL_newzd2statezd2_891,
														CELL_REF(BgL_newzd2dzd2statesz00_1769));
													CELL_SET(BgL_newzd2dzd2statesz00_1769,
														BgL_auxz00_1772);
												}
												BgL_usz00_888 = BgL_newzd2statezd2_891;
											}
									}
								}
								{	/* Rgc/rgcdfa.scm 118 */
									obj_t BgL_arg1942z00_1429;

									{	/* Rgc/rgcdfa.scm 118 */
										obj_t BgL_arg1943z00_1430;

										obj_t BgL_arg1944z00_1431;

										BgL_arg1943z00_1430 =
											MAKE_PAIR(BgL_az00_877, BgL_usz00_888);
										BgL_arg1944z00_1431 =
											STRUCT_REF(BgL_tz00_1770, (int) (((long) 2)));
										BgL_arg1942z00_1429 =
											MAKE_PAIR(BgL_arg1943z00_1430, BgL_arg1944z00_1431);
									}
									{	/* Rgc/rgcdfa.scm 118 */
										int BgL_auxz00_1987;

										BgL_auxz00_1987 = (int) (((long) 2));
										return
											STRUCT_SET(BgL_tz00_1770, BgL_auxz00_1987,
											BgL_arg1942z00_1429);
									}
								}
							}
					}
				}
			}
		}
	}



/* <anonymous:1911> */
	obj_t BGl_zc3anonymousza31911ze3z83zz__rgc_dfaz00(obj_t BgL_envz00_1773,
		obj_t BgL_pz00_1779)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 97 */
			{	/* Rgc/rgcdfa.scm 98 */
				obj_t BgL_uzd2emptyzf3z21_1774;

				obj_t BgL_followposz00_1775;

				obj_t BgL_uz00_1776;

				obj_t BgL_positionsz00_1777;

				obj_t BgL_az00_1778;

				BgL_uzd2emptyzf3z21_1774 =
					PROCEDURE_REF(BgL_envz00_1773, (int) (((long) 0)));
				BgL_followposz00_1775 =
					PROCEDURE_REF(BgL_envz00_1773, (int) (((long) 1)));
				BgL_uz00_1776 = PROCEDURE_REF(BgL_envz00_1773, (int) (((long) 2)));
				BgL_positionsz00_1777 =
					PROCEDURE_REF(BgL_envz00_1773, (int) (((long) 3)));
				BgL_az00_1778 = PROCEDURE_REF(BgL_envz00_1773, (int) (((long) 4)));
				{
					obj_t BgL_pz00_882;

					BgL_pz00_882 = BgL_pz00_1779;
					{	/* Rgc/rgcdfa.scm 98 */
						bool_t BgL_testz00_2000;

						{	/* Rgc/rgcdfa.scm 98 */
							obj_t BgL_arg1915z00_886;

							BgL_arg1915z00_886 =
								VECTOR_REF(BgL_positionsz00_1777, CINT(BgL_pz00_882));
							BgL_testz00_2000 =
								((long) CINT(BgL_az00_1778) == (long) CINT(BgL_arg1915z00_886));
						}
						if (BgL_testz00_2000)
							{	/* Rgc/rgcdfa.scm 98 */
								CELL_SET(BgL_uzd2emptyzf3z21_1774, BFALSE);
								return
									BGl_rgcsetzd2orz12zc0zz__rgc_setz00(BgL_uz00_1776,
									VECTOR_REF(BgL_followposz00_1775, CINT(BgL_pz00_882)));
							}
						else
							{	/* Rgc/rgcdfa.scm 98 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* <anonymous:1946> */
	obj_t BGl_zc3anonymousza31946ze3z83zz__rgc_dfaz00(obj_t BgL_envz00_1781,
		obj_t BgL_iz00_1784)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 244 */
			{	/* Rgc/rgcdfa.scm 119 */
				obj_t BgL_positionsz00_1782;

				obj_t BgL_symbolzd2setzd2_1783;

				BgL_positionsz00_1782 =
					PROCEDURE_REF(BgL_envz00_1781, (int) (((long) 0)));
				BgL_symbolzd2setzd2_1783 =
					PROCEDURE_REF(BgL_envz00_1781, (int) (((long) 1)));
				{
					obj_t BgL_iz00_1406;

					BgL_iz00_1406 = BgL_iz00_1784;
					{	/* Rgc/rgcdfa.scm 119 */
						obj_t BgL_arg1948z00_1408;

						BgL_arg1948z00_1408 =
							VECTOR_REF(BgL_positionsz00_1782, CINT(BgL_iz00_1406));
						return
							BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_symbolzd2setzd2_1783,
							(long) CINT(BgL_arg1948z00_1408));
		}}}}
	}



/* reset-dfa! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2dfaz12zc0zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 126 */
			BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00 = BUNSPEC;
			BGl_za2statesza2z00zz__rgc_dfaz00 = BUNSPEC;
			return (BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BUNSPEC, BUNSPEC);
		}
	}



/* _reset-dfa! */
	obj_t BGl__resetzd2dfaz12zc0zz__rgc_dfaz00(obj_t BgL_envz00_1785)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 126 */
			return BGl_resetzd2dfaz12zc0zz__rgc_dfaz00();
		}
	}



/* get-initial-state */
	BGL_EXPORTED_DEF obj_t BGl_getzd2initialzd2statez00zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 139 */
			return BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00;
		}
	}



/* _get-initial-state */
	obj_t BGl__getzd2initialzd2statez00zz__rgc_dfaz00(obj_t BgL_envz00_1786)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 139 */
			return BGl_za2initialzd2stateza2zd2zz__rgc_dfaz00;
		}
	}



/* init-states! */
	obj_t BGl_initzd2statesz12zc0zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 163 */
			BGl_za2statezd2numza2zd2zz__rgc_dfaz00 = BINT(((long) -1));
			{	/* Rgc/rgcdfa.scm 165 */
				obj_t BgL_list1928z00_906;

				{	/* Rgc/rgcdfa.scm 165 */
					obj_t BgL_arg1930z00_908;

					{	/* Rgc/rgcdfa.scm 165 */
						obj_t BgL_arg1931z00_909;

						{	/* Rgc/rgcdfa.scm 165 */
							obj_t BgL_arg1932z00_910;

							BgL_arg1932z00_910 =
								MAKE_PAIR(BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00, BNIL);
							BgL_arg1931z00_909 =
								MAKE_PAIR(BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00,
								BgL_arg1932z00_910);
						}
						BgL_arg1930z00_908 =
							MAKE_PAIR(BINT(BGl_bucketzd2lenzd2zz__rgc_dfaz00),
							BgL_arg1931z00_909);
					}
					BgL_list1928z00_906 =
						MAKE_PAIR(BINT(((long) 1024)), BgL_arg1930z00_908);
				}
				return (BGl_za2statesza2z00zz__rgc_dfaz00 =
					BGl_makezd2hashtablezd2zz__hashz00(BgL_list1928z00_906), BUNSPEC);
			}
		}
	}



/* make-state */
	obj_t BGl_makezd2statezd2zz__rgc_dfaz00(obj_t BgL_positionsz00_36)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 185 */
			{	/* Rgc/rgcdfa.scm 186 */
				obj_t BgL_numz00_911;

				{	/* Rgc/rgcdfa.scm 186 */
					long BgL_za71za7_1489;

					BgL_za71za7_1489 =
						(long) CINT(BGl_za2statezd2numza2zd2zz__rgc_dfaz00);
					BGl_za2statezd2numza2zd2zz__rgc_dfaz00 =
						BINT((BgL_za71za7_1489 + ((long) 1)));
				}
				BgL_numz00_911 = BGl_za2statezd2numza2zd2zz__rgc_dfaz00;
				{	/* Rgc/rgcdfa.scm 186 */
					obj_t BgL_namez00_912;

					{	/* Rgc/rgcdfa.scm 187 */
						obj_t BgL_arg1937z00_915;

						{	/* Rgc/rgcdfa.scm 187 */
							char *BgL_arg1940z00_917;

							{	/* Ieee/number.scm 133 */

								BgL_arg1940z00_917 =
									BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_911,
									BINT(((long) 10)));
							}
							BgL_arg1937z00_915 =
								string_append_3(BGl_string2228z00zz__rgc_dfaz00,
								string_to_bstring(BgL_arg1940z00_917),
								BGl_string2229z00zz__rgc_dfaz00);
						}
						BgL_namez00_912 =
							BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1937z00_915);
					}
					{	/* Rgc/rgcdfa.scm 187 */
						obj_t BgL_statez00_913;

						{	/* Rgc/rgcdfa.scm 188 */
							obj_t BgL_newz00_1495;

							BgL_newz00_1495 =
								create_struct(BGl_symbol2226z00zz__rgc_dfaz00,
								(int) (((long) 4)));
							{	/* Rgc/rgcdfa.scm 188 */
								int BgL_auxz00_2036;

								BgL_auxz00_2036 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_1495, BgL_auxz00_2036,
									BgL_positionsz00_36);
							}
							{	/* Rgc/rgcdfa.scm 188 */
								int BgL_auxz00_2039;

								BgL_auxz00_2039 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_1495, BgL_auxz00_2039, BNIL);
							}
							{	/* Rgc/rgcdfa.scm 188 */
								int BgL_auxz00_2042;

								BgL_auxz00_2042 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_1495, BgL_auxz00_2042, BgL_numz00_911);
							}
							{	/* Rgc/rgcdfa.scm 188 */
								int BgL_auxz00_2045;

								BgL_auxz00_2045 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_1495, BgL_auxz00_2045, BgL_namez00_912);
							}
							BgL_statez00_913 = BgL_newz00_1495;
						}
						{	/* Rgc/rgcdfa.scm 188 */

							{	/* Rgc/rgcdfa.scm 190 */
								obj_t BgL_arg1935z00_914;

								BgL_arg1935z00_914 =
									STRUCT_REF(BgL_statez00_913, (int) (((long) 3)));
								BGl_hashtablezd2putz12zc0zz__hashz00
									(BGl_za2statesza2z00zz__rgc_dfaz00, BgL_arg1935z00_914,
									BgL_statez00_913);
							}
							return BgL_statez00_913;
						}
					}
				}
			}
		}
	}



/* state-positions */
	BGL_EXPORTED_DEF obj_t BGl_statezd2positionszd2zz__rgc_dfaz00(obj_t
		BgL_statez00_38)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 204 */
			return STRUCT_REF(BgL_statez00_38, (int) (((long) 3)));
		}
	}



/* _state-positions */
	obj_t BGl__statezd2positionszd2zz__rgc_dfaz00(obj_t BgL_envz00_1792,
		obj_t BgL_statez00_1793)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 204 */
			return BGl_statezd2positionszd2zz__rgc_dfaz00(BgL_statez00_1793);
		}
	}



/* state-name */
	BGL_EXPORTED_DEF obj_t BGl_statezd2namezd2zz__rgc_dfaz00(obj_t
		BgL_statez00_39)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 210 */
			return STRUCT_REF(BgL_statez00_39, (int) (((long) 0)));
		}
	}



/* _state-name */
	obj_t BGl__statezd2namezd2zz__rgc_dfaz00(obj_t BgL_envz00_1794,
		obj_t BgL_statez00_1795)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 210 */
			return BGl_statezd2namezd2zz__rgc_dfaz00(BgL_statez00_1795);
		}
	}



/* state-transitions */
	BGL_EXPORTED_DEF obj_t BGl_statezd2transitionszd2zz__rgc_dfaz00(obj_t
		BgL_statez00_41)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 222 */
			return STRUCT_REF(BgL_statez00_41, (int) (((long) 2)));
		}
	}



/* _state-transitions */
	obj_t BGl__statezd2transitionszd2zz__rgc_dfaz00(obj_t BgL_envz00_1796,
		obj_t BgL_statez00_1797)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 222 */
			return BGl_statezd2transitionszd2zz__rgc_dfaz00(BgL_statez00_1797);
		}
	}



/* state? */
	BGL_EXPORTED_DEF bool_t BGl_statezf3zf3zz__rgc_dfaz00(obj_t BgL_objz00_42)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 228 */
			if (STRUCTP(BgL_objz00_42))
				{	/* Rgc/rgcdfa.scm 229 */
					return (STRUCT_KEY(BgL_objz00_42) == BGl_symbol2226z00zz__rgc_dfaz00);
				}
			else
				{	/* Rgc/rgcdfa.scm 229 */
					return ((bool_t) 0);
				}
		}
	}



/* _state? */
	obj_t BGl__statezf3zf3zz__rgc_dfaz00(obj_t BgL_envz00_1798,
		obj_t BgL_objz00_1799)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 228 */
			return BBOOL(BGl_statezf3zf3zz__rgc_dfaz00(BgL_objz00_1799));
		}
	}



/* print-dfa */
	BGL_EXPORTED_DEF obj_t BGl_printzd2dfazd2zz__rgc_dfaz00(obj_t BgL_dfaz00_48)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 252 */
			{	/* Rgc/rgcdfa.scm 253 */
				obj_t BgL_port1849z00_931;

				{	/* Rgc/rgcdfa.scm 253 */
					obj_t BgL_res2203z00_1555;

					{	/* Rgc/rgcdfa.scm 253 */
						obj_t BgL_auxz00_2066;

						BgL_auxz00_2066 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2203z00_1555 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2066);
					}
					BgL_port1849z00_931 = BgL_res2203z00_1555;
				}
				bgl_display_string(BGl_string2230z00zz__rgc_dfaz00,
					BgL_port1849z00_931);
				bgl_display_char(((unsigned char) '\n'), BgL_port1849z00_931);
			}
			{
				obj_t BgL_l1851z00_933;

				BgL_l1851z00_933 = BgL_dfaz00_48;
			BgL_zc3anonymousza31950ze3z83_934:
				if (PAIRP(BgL_l1851z00_933))
					{	/* Rgc/rgcdfa.scm 254 */
						{	/* Rgc/rgcdfa.scm 269 */
							obj_t BgL_statez00_936;

							BgL_statez00_936 = CAR(BgL_l1851z00_933);
							{	/* Rgc/rgcdfa.scm 255 */
								obj_t BgL_port1850z00_937;

								{	/* Rgc/rgcdfa.scm 255 */
									obj_t BgL_res2204z00_1562;

									{	/* Rgc/rgcdfa.scm 255 */
										obj_t BgL_auxz00_2074;

										BgL_auxz00_2074 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2204z00_1562 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2074);
									}
									BgL_port1850z00_937 = BgL_res2204z00_1562;
								}
								bgl_display_string(BGl_string2231z00zz__rgc_dfaz00,
									BgL_port1850z00_937);
								bgl_display_obj(STRUCT_REF(BgL_statez00_936,
										(int) (((long) 1))), BgL_port1850z00_937);
								bgl_display_char(((unsigned char) '\n'), BgL_port1850z00_937);
							} BGl_list2232z00zz__rgc_dfaz00;
						}
						{
							obj_t BgL_l1851z00_2082;

							BgL_l1851z00_2082 = CDR(BgL_l1851z00_933);
							BgL_l1851z00_933 = BgL_l1851z00_2082;
							goto BgL_zc3anonymousza31950ze3z83_934;
						}
					}
				else
					{	/* Rgc/rgcdfa.scm 254 */
						((bool_t) 1);
					}
			}
			{	/* Rgc/rgcdfa.scm 271 */
				obj_t BgL_port1853z00_941;

				{	/* Rgc/rgcdfa.scm 271 */
					obj_t BgL_res2205z00_1571;

					{	/* Rgc/rgcdfa.scm 271 */
						obj_t BgL_auxz00_2084;

						BgL_auxz00_2084 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2205z00_1571 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2084);
					}
					BgL_port1853z00_941 = BgL_res2205z00_1571;
				}
				bgl_display_string(BGl_string2293z00zz__rgc_dfaz00,
					BgL_port1853z00_941);
				bgl_display_char(((unsigned char) '\n'), BgL_port1853z00_941);
			}
			{	/* Rgc/rgcdfa.scm 272 */
				obj_t BgL_arg1954z00_942;

				{	/* Rgc/rgcdfa.scm 272 */
					obj_t BgL_res2206z00_1576;

					{	/* Rgc/rgcdfa.scm 272 */
						obj_t BgL_auxz00_2089;

						BgL_auxz00_2089 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2206z00_1576 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2089);
					}
					BgL_arg1954z00_942 = BgL_res2206z00_1576;
				}
				return bgl_display_char(((unsigned char) '\n'), BgL_arg1954z00_942);
		}}
	}



/* _print-dfa */
	obj_t BGl__printzd2dfazd2zz__rgc_dfaz00(obj_t BgL_envz00_1800,
		obj_t BgL_dfaz00_1801)
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 252 */
			return BGl_printzd2dfazd2zz__rgc_dfaz00(BgL_dfaz00_1801);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_dfaz00()
	{
		AN_OBJECT;
		{	/* Rgc/rgcdfa.scm 15 */
			BGl_modulezd2initializa7ationz75zz__rgc_configz00(((long) 36213488),
				BSTRING_TO_STRING(BGl_string2294z00zz__rgc_dfaz00));
			BGl_modulezd2initializa7ationz75zz__rgc_setz00(((long) 492883814),
				BSTRING_TO_STRING(BGl_string2294z00zz__rgc_dfaz00));
			BGl_modulezd2initializa7ationz75zz__rgc_rulesz00(((long) 23441563),
				BSTRING_TO_STRING(BGl_string2294z00zz__rgc_dfaz00));
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2294z00zz__rgc_dfaz00));
		}
	}

#ifdef __cplusplus
}
#endif
